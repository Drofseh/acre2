// COMPONENT should be defined in the script_component.hpp and included BEFORE this hpp

#define MAINPREFIX idi
#define PREFIX acre

#include "\idi\acre\addons\main\script_version.hpp"

#define VERSION         MAJOR.MINOR
#define VERSION_STR     MAJOR.MINOR.PATCHLVL.BUILD
#define VERSION_AR      MAJOR,MINOR,PATCHLVL,BUILD
#define VERSION_PLUGIN  MAJOR.MINOR.PATCHLVL.BUILD

// MINIMAL required version for the Mod. Components can specify others..
#define REQUIRED_VERSION 2.14
#define REQUIRED_CBA_VERSION {3,17,0}

#ifdef COMPONENT_BEAUTIFIED
    #define COMPONENT_NAME QUOTE(ACRE2 - COMPONENT_BEAUTIFIED)
#else
    #define COMPONENT_NAME QUOTE(ACRE2 - COMPONENT)
#endif
