#if !defined(LOGGER_H_APILONIUS23)
#define LOGGER_H_APILONIUS23

#include <io/UNCTypes.h>
#include <io/ConsoleFormatting.h>
#include <iostream>
#include <UNCConfig.h>

class Logger {
    static inline UNC_VOID log(UNC_MSG msg, UNC_INFO_TYPE type, UNC_STR cl) {
    #ifdef UNC_LOGGING_ENABLED
        std::cout << CFormat::Container(type) << CFormat::Container(cl) << " " << msg << std::endl;
    #endif
    }
};

#endif // LOGGER_H_APILONIUS23
