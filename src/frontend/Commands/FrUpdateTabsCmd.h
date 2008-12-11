#ifndef FR_UPDTABS_CMD
#define FR_UPDTABS_CMD

//Forward declarations
class FrTabSettingsDocObj;

// Includes
#include "FrBaseCmd.h"

// Some defines
#define BAD_TAB_ID -1
#define CURRENT_TAB_ID -2

// This command is used if needed to update tabs settings
// in view (i.e. add, remove, update ) or in document (UpdateCurrent)
class FrUpdateTabsCmd : public FrBaseCmd
{
public:
    typedef enum _Actions { 
        None, Add, Remove, Update, SetCurrentTab 
    } Actions;

public:
    // Constructor/destructor
    FrUpdateTabsCmd();

    // Properties
    FrSetPropMacro(Actions, Action);
    FrSetPropMacro(FrTabSettingsDocObj*, TabSettingsDocObj);
    FrSetPropMacro(int, TabID);

    // Overrides
	bool Execute();

    // Undo/redo section
	bool CanUndo();
	bool Undo();
	bool Redo();

private:
    bool SetupTab();
    bool UpdateView();

    
    void SetupTabObjects();
    void SetupLayeredImage();
};

#endif // FR_UPDTABS_CMD
