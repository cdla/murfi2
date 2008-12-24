#ifndef FR_MAIN_WINDOW
#define FR_MAIN_WINDOW

// Forward declaration
class QWidget;
class QStatusBar;

class FrBaseView;
class FrSliceView;
class FrMosaicView;
class FrOrthoView;
class FrMainDocument;
class FrMainController;
class FrToolBar;
class FrMainMenu;
class FrBookmarkWidget;
class FrLayerListWidget;
class FrVoxelInfoWidget;
class FrROIInfoWidget;
class FrGraphPaneWidget;
class QVTKWidget;
class FrActionManager;
class FrActionSignalManager;

// Includes
#include "FrMacro.h"
#include "Qt/qmainwindow.h"

// This is main window of application
class FrMainWindow: public QMainWindow {
    Q_OBJECT
public:
    FrMainWindow();
    virtual ~FrMainWindow();

    FrGetPropMacro(FrMainDocument*,MainDocument);
    void SetMainDocument(FrMainDocument* document);
    FrPropMacro(FrMainController*,MainController);

    void Initialize();
    void DisconnectActions();

    // Properties
    FrPropMacro(FrBaseView*,      CurrentView);
    FrGetPropMacro(FrSliceView*,  SliceView);
    FrGetPropMacro(FrMosaicView*, MosaicView);
    FrGetPropMacro(FrOrthoView*,  OrthoView);

    // GUI elements
    FrGetPropMacro(QVTKWidget*, QVTKWidget);
    FrGetPropMacro(FrBookmarkWidget*, BookmarkWidget);
	FrGetPropMacro(FrLayerListWidget*, LayerListWidget);
	FrGetPropMacro(FrVoxelInfoWidget*, VoxelInfoWidget);
	FrGetPropMacro(FrROIInfoWidget*, ROIInfoWidget);
	FrGetPropMacro(FrGraphPaneWidget*, GraphPaneWidget);

    // Some others
private: friend class FrActionSignalManager;
    FrGetPropMacro(FrActionSignalManager*, SignalManager);
    FrGetPropMacro(FrActionManager*, ActionManager);

public slots:
    void OnBookmarkChanged(int id);
    void OnBookmarkDelete(int id);

    void OnLayerSelected(int id);
    
private:
    void SetupUi(QMainWindow* mainWindow);
    void RetranslateUi(QMainWindow* mainWindow);
    void InitializeWidgets();

private:
    QWidget*    m_centralWidget;
    FrMainMenu* m_mainMenu;
    FrToolBar*  m_toolBar;
    QStatusBar* m_statusBar;

};

#endif
