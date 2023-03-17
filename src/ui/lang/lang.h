#if !defined(UNC_LANG_H_APILONIUS2023)
#define UNC_LANG_H_APILONIUS2023

#include <map>
#include <string>
#include <fstream>
#include <io/UNCTypes.h>

typedef std::map<UNC_ISTR, UNC_KSTR> LangPck;

#define UNCL_ERR_KEYNFOUND "Invalid key"
#define L(_X) Lang::get(_X)

class Lang {
private:
    static std::map<UNC_KSTR, LangPck> pcks;
    static UNC_KSTR current;
public:
    static UNC_STR     addLangPck(UNC_KSTR name, LangPck pck);
    static UNC_STR     loadPck(UNC_PATH path);

    static UNC_VOID    setCurrent(UNC_KSTR lang);
    static UNC_STR     setCurrentP(UNC_PATH path);

    static UNC_ISTR    get(UNC_KSTR key);
    static LangPck     getCurrentPck() {
        return pcks[current];
    }
    static UNC_KSTR getCurrentPckName() {
        return current;
    }

    static UNC_DIC_ERR loadAllOfDic(UNC_PATH path);
};

#endif // UNC_LANG_H_APILONIUS2023
