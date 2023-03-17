#if !defined(UNC_EDITOR_H_APILONIUS2023)
#define UNC_EDITOR_H_APILONIUS2023

#include "../uncwx.h"

#include <io/UNCTypes.h>
#include <io/OBJ.h>
#include <io/logger.h>

class Editor : public wxFrame, public Logged {
UNC_IMPLEMENT_OBJECT(Editor)
public:
    Editor();
};

#endif // UNC_EDITOR_H_APILONIUS2023
