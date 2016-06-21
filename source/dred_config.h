
// All config variables are defined in the section below. The pre-build tool will look at these variables and construct the main
// config struct based on their names and types.

// BEGIN CONFIG VARS: <name> <C variable name> <type> <on_set callback> <default value>
//
// show-tab-bar showTabBar bool dred_config_on_set__show_tab_bar true
//   Whether or not to show the tab bar.
//
// show-menu-bar showMenuBar bool dred_config_on_set__show_menu_bar true
//   Whether or not to show the menu bar.
//
// auto-hide-cmd-bar autoHideCmdBar bool dred_config_on_set__auto_hide_cmd_bar false
//   Whether or not to show the command bar at all times. If this is set to false it will be shown only when it has keyboard focus.
//
//
// window-width windowWidth int none 1280
//   The width of the window
//
// window-height windowHeight int none 720
//   The height of the window.
//
// window-maximized windowMaximized bool none false
//   Whether or not the window is maximized.
//
//
// ui-scale uiScale float none 1
//   The scale of the UI. The total scale of UI elements is equal to the DPI scaling multiplied by this value.
//
// ui-font pUIFont font dred_config_on_set__ui_font system-font-ui
//   The default font to use for general UI elements. This will act as the default font in the event that a font fails to load.
//
//
// cmdbar-bg-color cmdbarBGColor color dred_config_on_set__cmdbar_bg_color 64 64 64
//   The background color of the command bar.
//
// cmdbar-bg-color-active cmdbarBGColorActive color dred_config_on_set__cmdbar_bg_color_active 128 51 0
//   The background color of the command bar while it's got the keyboard focus.
//
// cmdbar-tb-font pCmdbarTBFont font dred_config_on_set__cmdbar_tb_font system-font-mono
//   The font to use in the text box of the command bar.
//
// cmdbar-tb-text-color cmdbarTBTextColor color dred_config_on_set__cmdbar_tb_text_color 224 224 224
//   The color of the text in the text box of the command bar.
//
// cmdbar-padding-horz cmdbarPaddingX float dred_config_on_set__cmdbar_padding_horz 2
//   The amount of padding to apply to the command bar on the left and right sides.
//
// cmdbar-padding-vert cmdbarPaddingY float dred_config_on_set__cmdbar_padding_vert 2
//   The amount of padding to apply to the command bar on the top and bottom sides.
//
//
// tabgroup-bg-color tabgroupBGColor color dred_config_on_set__tabgroup_generic_refresh 48 48 48
//   The background color of tab groups. This will be shown when there are no tabs open in the group.
//
// tab-bg-color-inactive tabBGColorInvactive color dred_config_on_set__tabgroup_generic_refresh 58 58 58
//   The background color of tabs while inactive.
//
// tab-bg-color-active tabBGColorActive color dred_config_on_set__tabgroup_generic_refresh 16 92 160
//   The background color of tabs while active.
//
// tab-bg-color-hovered tabBGColorHovered color dred_config_on_set__tabgroup_generic_refresh 32 128 192
//   The background color of tabs while hovered.
//
// tab-font tabFont font dred_config_on_set__tabgroup_generic_refresh system-font-ui
//   The font to use on tabs.
//
// tab-text-color tabTextColor color dred_config_on_set__tabgroup_generic_refresh 224 224 224
//   The color of the text on tabs.
//
// tab-text-color-active tabTextColorActive color dred_config_on_set__tabgroup_generic_refresh 224 224 224
//   The color of the text on tabs while active.
//
// tab-text-color-hovered tabTextColorHovered color dred_config_on_set__tabgroup_generic_refresh 224 224 224
//   The color of the text on tabs while hovered.
//
// tab-padding tabPadding float dred_config_on_set__tabgroup_generic_refresh 4
//   The amount of padding to apply to all sides of a tab.
//
// tab-show-close-button tabShowCloseButton bool dred_config_on_set__tabgroup_generic_refresh true
//   Whether or not to show the close button on tabs.
//
// tab-close-button-color tabCloseButtonColor color dred_config_on_set__tabgroup_generic_refresh 58 58 58
//   The color of the close button while inactive.
//
//
// texteditor-font pTextEditorFont font dred_config_on_set__texteditor_generic_refresh system-font-mono
//   The font to use in text editors.
//
// texteditor-text-color textEditorTextColor color dred_config_on_set__texteditor_generic_refresh 224 224 224
//   The base color of the text in a text editor. Note that syntax highlighting is independant of this variable.
//
// texteditor-bg-color textEditorBGColor color dred_config_on_set__texteditor_generic_refresh 48 48 48
//   The background color to use in text editors.
//
// texteditor-cursor-color textEditorCursorColor color dred_config_on_set__texteditor_generic_refresh 224 224 224
//   The color of the caret/cursor in text editors.
//
// texteditor-cursor-width textEditorCursorWidth float dred_config_on_set__texteditor_generic_refresh 1
//   The thickness of the caret/cursor in text editors.
//
// texteditor-selection-bg-color textEditorSelectionBGColor color dred_config_on_set__texteditor_generic_refresh 64 128 192
//   The background color to use for selected text.
//
// texteditor-active-line-color textEditorActiveLineColor color dred_config_on_set__texteditor_generic_refresh 40 40 40
//   The background color of the line that the caret is currently sitting on in a text editor.
//
// texteditor-show-line-numbers textEditorShowLineNumbers bool dred_config_on_set__texteditor_generic_refresh false
//   Whether or not to show line numbers.
//
// texteditor-line-numbers-color textEditorLineNumbersColor color dred_config_on_set__texteditor_generic_refresh 80 160 192
//   The color of the line numbers text.
//
// texteditor-line-numbers-bg-color textEditorLineNumbersBGColor color dred_config_on_set__texteditor_generic_refresh 48 48 48
//   The color of the background of the line numbers.
//
// texteditor-line-numbers-padding textEditorLineNumbersPadding float dred_config_on_set__texteditor_generic_refresh 16
//   The padding between the line numbers and the text in the text editor.
//
// texteditor-sb-track-color textEditorSBTrackColor color dred_config_on_set__texteditor_generic_refresh 80 80 80
//   The color of the track of the scroll bars on text editors.
//
// texteditor-sb-thumb-color textEditorSBThumbColor color dred_config_on_set__texteditor_generic_refresh 112 112 112
//   The color of the thumb of the scroll bars on text editors.
//
// texteditor-sb-thumb-color-hovered textEditorSBThumbColorHovered color dred_config_on_set__texteditor_generic_refresh 144 144 144
//   The color of the thumb of the scroll bars on text editors while hovered.
//
// texteditor-sb-thumb-color-pressed textEditorSBThumbColorPressed color dred_config_on_set__texteditor_generic_refresh 180 180 180
//   The color of the thumb of the scroll bars on text editors while pressed.
//
// texteditor-enable-tabs-to-spaces textEditorTabsToSpacesEnabled bool dred_config_on_set__texteditor_generic_refresh false
//   Whether or not tabs are converted to spaces.
//
// texteditor-tab-size-in-spaces textEditorTabSizeInSpaces int dred_config_on_set__texteditor_generic_refresh 4
//   The size of tabs in spaces.
//
// texteditor-scale textEditorScale float dred_config_on_set__texteditor_generic_refresh 1
//   The scale/zoom to use in text editors.
//
// END CONFIG VARS

typedef struct
{
    // The main context that owns this config. This is set to the context that initialized the config object.
    dred_context* pDred;

    // System fonts.
    dred_font* pSystemFontUI;
    dred_font* pSystemFontMono;

    // Recent files.
    char* recentFiles[DRED_MAX_RECENT_FILES];
    size_t recentFileCount;

    // The cross image.
    dred_image* pImageCross;


    // The auto-generated variable declarations. You can find these in dred_autogenerated.h
    DRED_CONFIG_VARIABLE_DECLARATIONS

} dred_config;

typedef void (* dred_config_on_error_proc)(dred_config* pConfig, const char* configPath, const char* message, unsigned int line, void* pUserData);

bool dred_config_init(dred_config* pConfig, dred_context* pDred);
void dred_config_uninit(dred_config* pConfig);

// The pUserData argument of onError will be set to pConfig.
bool dred_config_load_file(dred_config* pConfig, const char* filePath, dred_config_on_error_proc onError, void* pUserData);

// Sets a variable from a name/value string pair.
void dred_config_set(dred_config* pConfig, const char* name, const char* value);

// Sets a variable to it's default value.
void dred_config_set_default(dred_config* pConfig, const char* name);

// Pushes a new recent file to the end of the list.
void dred_config_push_recent_file(dred_config* pConfig, const char* fileAbsolutePath);



// Set handlers.

// ui-font
void dred_config_on_set__ui_font(dred_context* pDred);


// show-tab-bar
void dred_config_on_set__show_tab_bar(dred_context* pDred);

// show-menu-bar
void dred_config_on_set__show_menu_bar(dred_context* pDred);

// auto-hide-cmd-bar
void dred_config_on_set__auto_hide_cmd_bar(dred_context* pDred);


// cmdbar-bg-color
void dred_config_on_set__cmdbar_bg_color(dred_context* pDred);

// cmdbar-bg-color-active
void dred_config_on_set__cmdbar_bg_color_active(dred_context* pDred);

// cmdbar-tb-font
void dred_config_on_set__cmdbar_tb_font(dred_context* pDred);

// cmdbar-tb-text-color
void dred_config_on_set__cmdbar_tb_text_color(dred_context* pDred);

// cmdbar-padding-horz
void dred_config_on_set__cmdbar_padding_horz(dred_context* pDred);

// cmdbar-padding-vert
void dred_config_on_set__cmdbar_padding_vert(dred_context* pDred);


// Tabs and tab groups are refreshed with a generic function.
void dred_config_on_set__tabgroup_generic_refresh(dred_context* pDred);

// The text editor is refreshed with a generic function.
void dred_config_on_set__texteditor_generic_refresh(dred_context* pDred);
