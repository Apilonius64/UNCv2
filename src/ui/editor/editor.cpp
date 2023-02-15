#include "editor.h"
#include "events.h"

#include <ui/lang/lang.h>
#include <UNCConfig.h>

Editor::Editor() : wxFrame(nullptr, wxID_ANY, Lang::get(UNC_JSON_WND_TITLE)) {
    // ProjectMenu > FileMenu
    // ----------------------
    wxMenu* FileMenu = new wxMenu();
    FileMenu->Append(UNC_EDITOR_MID_FILE_NEW, L(UNC_JSON_FILE_NEW));
    FileMenu->Append(UNC_EDITOR_MID_FILE_SAVE, L(UNC_JSON_SAVE_FILE));
    FileMenu->Append(UNC_EDITOR_MID_FILE_SAVEAS, L(UNC_JSON_SAVE_FILEAS));
    FileMenu->Append(UNC_EDITOR_MID_FILE_CLOSE, L(UNC_JSON_FILE_CLOSE));

    // ProjectMenu
    // ----------------------
    wxMenu* ProjMenu = new wxMenu();
    ProjMenu->Append(UNC_EDITOR_MID_FILE, L(UNC_JSON_FILE_MENU_LBL), FileMenu);
    ProjMenu->AppendSeparator();
    ProjMenu->Append(UNC_EDITOR_MID_PROJECT_NEW, L(UNC_JSON_PROJECT_NEW));
    ProjMenu->Append(UNC_EDITOR_MID_PROJECT_OPEN, L(UNC_JSON_OPEN_PROJECT));
    ProjMenu->AppendSeparator();
    ProjMenu->Append(UNC_EDITOR_MID_PROJECT_SAVEALL, L(UNC_JSON_PROJECTSAVEALL));
    ProjMenu->Append(UNC_EDITOR_MID_PROJECT_SAVEAT, L(UNC_JSON_SAVE_PROJECTAT));
    ProjMenu->AppendSeparator();
    ProjMenu->Append(UNC_EDITOR_MID_PROJECT_QUIT, L(UNC_JSON_QUIT));

    // EditMenu
    // ----------------------
    wxMenu* EditMenu = new wxMenu();
    EditMenu->Append(UNC_EDITOR_MID_EDIT_UNDO, L(UNC_JSON_UNDO));
    EditMenu->Append(UNC_EDITOR_MID_EDIT_REDO, L(UNC_JSON_REDO));
    EditMenu->Append(UNC_EDITOR_MID_EDIT_COPY, L(UNC_JSON_COPY));
    EditMenu->Append(UNC_EDITOR_MID_EDIT_PASTE, L(UNC_JSON_PASTE));
    EditMenu->Append(UNC_EDITOR_MID_EDIT_CUT, L(UNC_JSON_CUT));

    // ViewMenu
    // ----------------------
    wxMenu* ViewMenu = new wxMenu();
    ViewMenu->Append(UNC_EDITOR_MID_VIEW_FULLSCREEN, L(UNC_JSON_FULLSCREEN));

    // HelpMenu
    // ----------------------
    wxMenu* HelpMenu = new wxMenu();
    HelpMenu->Append(UNC_EDITOR_MID_HELP_ABOUT, L(UNC_JSON_ABOUT));
    HelpMenu->Append(UNC_EDITOR_MID_HELP_DOC, L(UNC_JSON_DOC));

    // NetworkMenu
    // ----------------------
    wxMenu* NetworkMenu = new wxMenu();
    NetworkMenu->Append(UNC_EDITOR_MID_NETWORK_GENCODE, L(UNC_JSON_GENCODE));
    NetworkMenu->Append(UNC_EDITOR_MID_NETWORK_TRAIN, L(UNC_JSON_TRAIN));
    NetworkMenu->Append(UNC_EDITOR_MID_NETWORK_FEEDFORWARD, L(UNC_JSON_FEEDFORWARD));
    NetworkMenu->Append(UNC_EDITOR_MID_NETWORK_RESETWS, L(UNC_JSON_RESETWS));

    // MainMenuBar
    // ----------------------
    wxMenuBar* MainMenuBar = new wxMenuBar();
    MainMenuBar->Append(ProjMenu, L(UNC_JSON_PROJECT_MENU_LBL));
    MainMenuBar->Append(EditMenu, L(UNC_JSON_EDIT_MENU_LBL));
    MainMenuBar->Append(ViewMenu, L(UNC_JSON_EDIT_MENU_LBL));
    MainMenuBar->Append(HelpMenu, L(UNC_JSON_HELP_MENU_LBL));
    MainMenuBar->Append(NetworkMenu, L(UNC_JSON_NET_MENU_LBL));

    SetMenuBar(MainMenuBar);
}