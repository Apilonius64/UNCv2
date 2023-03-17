#if !defined(LOGGER_H_APILONIUS23)
#define LOGGER_H_APILONIUS23

#include <io/UNCTypes.h>
#include <io/ConsoleFormatting.h>
#include <io/OBJ.h>

#include <iostream>
#include <UNCConfig.h>

struct SubSpace;

class Logger {
public:
    static inline UNC_INT log _TRACKABLE(UNC_MSG msg, UNC_INFO_TYPE type) {
    #ifdef UNC_LOGGING_ENABLED
        std::cout << CFormat::Container(type) << CFormat::Container(CALLER.name) << " " << msg << std::endl;
    #endif
        return 0;
    }

   //  GEN_NONTRACKABLE_INTERN_STATIC_WRAPPER(Logger::log, log)
};

class Logged : public unc::OBJ {
UNC_IMPLEMENT_OBJECT(Logged)
public:
    GEN_TRACKABLE_WRAPPER_CALLER(Logger::log, Log)
};

#endif // LOGGER_H_APILONIUS23
