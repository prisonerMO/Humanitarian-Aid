/*
class Extended_PreStart_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_SCRIPT(XEH_preStart));
    };
};

class Extended_PreInit_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_SCRIPT(XEH_preInit));
    };
};

class Extended_PostInit_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_SCRIPT(XEH_postInit));
        //serverInit = QUOTE(call COMPILE_SCRIPT(XEH_serverPostInit));
    };
};
*/

class Extended_InitPost_EventHandlers {
    class GVAR(Dialog_Civilian) {
        class ADDON {
            // TODO: does this calls the function on Dialog_Civilian spawn?
            serverInit = QUOTE(_this call FUNC(serverInitDialogState));
            // TODO how to add execution to player client
        };
    };
};
