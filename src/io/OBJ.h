#if !defined(UNC_OBJ_H_APILONIUS2023)
#define UNC_OBJ_H_APILONIUS2023

#include "UNCTypes.h"
#include <type_traits>

#define UNC_IMPLEMENT_OBJECT(_Name) public: virtual unc::ObjectDescriptor getObjectDescriptor() override { \
    return unc::ObjectDescriptor(#_Name, (OBJ*)this);\
} private:

// Extern wrapper callers
// ------------------------
#define GEN_TRACKABLE_WRAPPER_CALLER(_Func, _Name) \
template <typename... Args> \
typename std::result_of<decltype(&_Func)(unc::ObjectDescriptor, Args...)>::type _Name(Args... args) { \
    return CallTrackable(_Func, args...); \
}


// Intern wrappers
// ------------------------
#define GEN_NONTRACKABLE_INTERN_STATIC_WRAPPER(_Func, _Name) \
template <typename... Args> \
static typename std::result_of<decltype(&_Func)(unc::ObjectDescriptor, Args...)>::type _Name(Args... args) { \
    return _Func(unc::ObjectDescriptor("ANYWHERE", nullptr), args...);\
}

#define GEN_NONTRACKABLE_INTERN_WRAPPER(_Func, _Name) \
template <typename... Args> \
typename std::result_of<decltype(&_Func)(unc::ObjectDescriptor, Args...)>::type _Name(Args... args) { \
    return _Func(unc::ObjectDescriptor("ANYWHERE", nullptr), args...);\
}

#define _TRACKABLE(...) (unc::ObjectDescriptor CALLER, __VA_ARGS__)

namespace unc {
    class OBJ;

    struct ObjectDescriptor {
        UNC_STR name;
        OBJ* ptr;
        ObjectDescriptor(UNC_STR _name, OBJ* _ptr) {
            name = _name;
            ptr = _ptr;
        }
    };

    class OBJ {
    public:
        virtual ObjectDescriptor getObjectDescriptor() = 0;

        // Base Trackable CallFunction
        template <typename CALLABLE, typename... Args>
        typename std::result_of<CALLABLE(unc::ObjectDescriptor, Args...)>::type CallTrackable(CALLABLE Method, Args... args) {
            return Method(getObjectDescriptor(), args...);
        }
    };
}


#endif // UNC_OBJ_H_APILONIUS2023
