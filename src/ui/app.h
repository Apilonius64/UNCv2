#if !defined(UNC_APP_H_APILONIUS2023)
#define UNC_APP_H_APILONIUS2023

#include "uncwx.h"

class UNCApp : public wxApp {
public:
    virtual bool OnInit() override;
};

wxIMPLEMENT_APP(UNCApp);


#endif // UNC_APP_H_APILONIUS2023