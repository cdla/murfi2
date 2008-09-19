#ifndef FR_SAVETABSET_CMD
#define FR_SAVETABSET_CMD

class FrTabSettingsDocObj;
class FrTBCFilter;
class vtkCamera;

#include "FrBaseCmd.h"

// This command saves current active tab settings to document
// After this command is executed a new FrTabSettingsDocObj 
// is added into MainDocument.
class FrSaveTabSettingsCmd : public FrBaseCmd
{
public:
    // Constructor/destructor
    FrSaveTabSettingsCmd();

	virtual bool Execute();

    // Undo/redo section
	virtual bool CanUndo();
	virtual bool Undo();
	virtual bool Redo();

    // Properties
    FrSetPropMacro(bool, IsDefault);

private:
    void InitializeDocumentObj(FrTabSettingsDocObj* docObj, FrMainWindow* mv);
    void InitCamSettings(void* settings, vtkCamera* cam);
    void InitTBCSettings(void* settings, FrTBCFilter* tbcFilter);
};

#endif // AKL_COMMAND_H