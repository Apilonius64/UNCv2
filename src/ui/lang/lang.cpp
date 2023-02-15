#include "lang.h"

#include <nlohmann/json.hpp>
#include <io/algo.h>

std::map<UNC_KSTR, LangPck> Lang::pcks;
UNC_KSTR                    Lang::current;

UNC_STR Lang::addLangPck(UNC_KSTR name, LangPck pck) {
    pcks[name] = pck;

    return name;
}

UNC_STR Lang::loadPck(UNC_PATH path) {
    std::ifstream f(path);
    nlohmann::json data = nlohmann::json::parse(f);

    LangPck pck;
    for(auto& [lkey, val] : data.items()) {
        pck[lkey] = val;
    }

    return addLangPck(Algo::getFilename(path), pck);
}

UNC_ISTR Lang::get(UNC_KSTR key) {
    LangPck pck = getCurrentPck();
    if(pck.find(key) == pck.end()) {
        return UNCL_ERR_KEYNFOUND;
    }
    return pcks[current][key];
}

UNC_VOID Lang::setCurrent(UNC_KSTR id) {
    current = id;
}

UNC_STR Lang::setCurrentP(UNC_PATH path) {
    UNC_STR id = loadPck(path);
    setCurrent(id);

    return id;
}

UNC_DIC_ERR Lang::loadAllOfDic(UNC_PATH path) {
    return Algo::iterateOverDic(path, &setCurrentP);
}