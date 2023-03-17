#if !defined(UNC_TYPES_H_APILONIUS2023)
#define UNC_TYPES_H_APILONIUS2023

#include <string>
#include <map>

#define UNC_STR(_X) std::to_string(_X)

typedef size_t          UNC_VARSIZE;
typedef std::string     UNC_PATH;
typedef std::string     UNC_ISTR;
typedef std::string     UNC_KSTR;
typedef std::string     UNC_STR;

typedef int             UNC_INT;
typedef unsigned int    UNC_UINT;
typedef float           UNC_FLOAT;

typedef UNC_STR         UNC_MSG;
typedef void            UNC_VOID;
typedef void*           UNC_VOID_PTR;

enum UNC_DIC_ERR {
    UNC_DIC_ERR_OK,
    UNC_DIC_ERR_ERR_NO_FILES,
    UNC_DIC_ERR_ERR
};

enum UNC_INFO_TYPE {
    UNC_INFO_TYPE_INFO,
    UNC_INFO_TYPE_NOTE,
    UNC_INFO_TYPE_ERR,
    UNC_INFO_TYPE_WARNING
};
#endif // UNC_TYPES_H_APILONIUS2023
