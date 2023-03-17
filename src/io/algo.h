#if !defined(UNC_ALGO_H_APILONIUS2023)
#define UNC_ALGO_H_APILONIUS2023

#include <io/UNCTypes.h>
#include <io/logger.h>

#include <filesystem>

#define ALGO_CLASSNAME "Algo"

class Algo {
public:
    static inline UNC_STR getFilename(UNC_PATH path) {
        // Thanks to https://stackoverflow.com/questions/8520560/get-a-file-name-from-a-path
        UNC_STR base_filename = path.substr(path.find_last_of("/\\") + 1);
        UNC_STR::size_type const p(base_filename.find_last_of('.'));
        UNC_STR file_without_extension = base_filename.substr(0, p);

        return file_without_extension;
    }

    template <typename CALLABLE> static inline UNC_DIC_ERR iterateOverDic(UNC_PATH path, CALLABLE callback) {
        // Logger::log("Iterating over dictionary", UNC_INFO_TYPE_INFO, ALGO_CLASSNAME);
        for(const auto& entry : std::filesystem::recursive_directory_iterator(path)) {
            // Logger::log("Calling callback for " + entry.path().u8string(), UNC_INFO_TYPE_INFO, ALGO_CLASSNAME);
            callback(entry.path().u8string());
        }

        return UNC_DIC_ERR_OK;
    }

    static inline UNC_PATH getSharePath(UNC_KSTR foldername) {
        std::string basepath = UNC_SHARE_PATH;
        return basepath + UNC_PATH_DIC + foldername;
    }
};

#endif // UNC_ALGO_H_APILONIUS2023
