#if !defined(UNC_CONFIG_H_APILONIUS2023)
#define UNC_CONFIG_H_APILONIUS2023

// Logging
// ------------------
#define UNC_LOGGING_ENABLED
#define UNC_EXTENDED_DEBUG

// Paths
// ------------------
#define UNC_SHARE_PATH          "../share"
#define UNC_LANG_FOLDER_NAME    "lang"

#define UNC_PATH_DIC            "/"


// Console formatting
// ------------------
#define CONSOLE_OPEN_C          "["
#define CONSOLE_CLOSE_C         "]"

#define CONSOLE_ERR             "Error"
#define CONSOLE_INFO            "Info"
#define CONSOLE_WARNING         "Warning"
#define CONSOLE_NOTE            "Note"
#define CONSOLE_UNDEFINED       "Undefined"

// Lang keys
// ------------------
#define UNC_JSON_WND_TITLE          "wTitle"
#define UNC_JSON_FILE_MENU_LBL      "mFile"
    #define UNC_JSON_FILE_NEW       "newFile"
    #define UNC_JSON_OPEN_FILE      "openFile"
    #define UNC_JSON_SAVE_FILE      "saveFile"
    #define UNC_JSON_SAVE_FILEAS    "saveFileAs"
    #define UNC_JSON_FILE_CLOSE     "fClose"
#define UNC_JSON_PROJECT_MENU_LBL   "mProject"
    #define UNC_JSON_PROJECT_NEW    "newProject"
    #define UNC_JSON_OPEN_PROJECT   "openProject"
    #define UNC_JSON_PROJECTSAVEALL "saveProject"
    #define UNC_JSON_SAVE_PROJECTAT "saveProjectAs"
    #define UNC_JSON_QUIT           "Quit"
#define UNC_JSON_EDIT_MENU_LBL      "mEdit"
    #define UNC_JSON_UNDO           "Undo"
    #define UNC_JSON_REDO           "Redo"
    #define UNC_JSON_COPY           "Copy"
    #define UNC_JSON_PASTE          "Paste"
    #define UNC_JSON_CUT            "Cut"
#define UNC_JSON_VIEW_MENU_LBL      "mView"
    #define UNC_JSON_FULLSCREEN     "Fullscreen"
#define UNC_JSON_HELP_MENU_LBL      "mHelp"
    #define UNC_JSON_ABOUT          "about"
    #define UNC_JSON_DOC            "hDoc"
#define UNC_JSON_NET_MENU_LBL       "mNetwork"
    #define UNC_JSON_GENCODE        "genCode"
    #define UNC_JSON_TRAIN          "trainNet"
    #define UNC_JSON_FEEDFORWARD    "feedForward"
    #define UNC_JSON_RESETWS        "resetWeights"
#endif // UNC_CONFIG_H_APILONIUS2023