#include "app.h"
#include "editor/editor.h"

#include <lang/lang.h>
#include <io/algo.h>
#include <UNCConfig.h>

bool UNCApp::OnInit() {
    Lang::loadAllOfDic(Algo::getSharePath(UNC_LANG_FOLDER_NAME));
    Editor* editor = new Editor();
    editor->Show(true);

    return true;
}