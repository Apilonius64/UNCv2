#if !defined(UNC_TYPES_H_APILONIUS2023)
#define UNC_TYPES_H_APILONIUS2023

#include <string>
#include <map>

#define UNC_STR(_X) std::to_string(_X)

typedef size_t UNC_VARSIZE;
typedef std::string UNC_PATH;
typedef std::string UNC_ISTR;
typedef std::string UNC_KSTR;
typedef std::string UNC_STR;
typedef UNC_STR UNC_MSG;
typedef void UNC_VOID;
typedef void* UNC_VOID_PTR;

enum UNC_DIC_ERR {
    OK,
    ERR_NO_FILES,
    ERR
};

enum UNC_INFO_TYPE {
    INFO,
    NOTE,
    ERR,
    WARNING
};

#endif // UNC_TYPES_H_APILONIUS2023
