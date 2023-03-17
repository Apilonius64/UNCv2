#if !defined(UNC_CONSOLE_FORMATTING_H_APILONIUS2023)
#define UNC_CONSOLE_FORMATTING_H_APILONIUS2023

#include <UNCConfig.h>
#include <io/UNCTypes.h>

class CFormat {
public:
    static inline UNC_MSG Container(UNC_MSG text) {
        return CONSOLE_OPEN_C + text + CONSOLE_CLOSE_C;
    }

    static inline UNC_MSG getMsg(UNC_INFO_TYPE info) {
        switch(info) {
            case UNC_INFO_TYPE_INFO:
                return CONSOLE_INFO;
            case UNC_INFO_TYPE_NOTE:
                return CONSOLE_NOTE;
            case UNC_INFO_TYPE_WARNING:
                return CONSOLE_WARNING;
            case UNC_INFO_TYPE_ERR:
                return CONSOLE_ERR;
            default:
                return CONSOLE_UNDEFINED;
        }
    }

    static inline UNC_MSG Container(UNC_INFO_TYPE info) {
        return Container(getMsg(info));
    }
};

#endif // UNC_CONSOLE_FORMATTING_H_APILONIUS2023
