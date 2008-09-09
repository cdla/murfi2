// .NAME vtkpxImageSlice - create hierarchies of actors
// .SECTION Description
#ifndef FR_SLICE2D_ACTOR
#define FR_SLICE2D_ACTOR

#include "FrBaseActor.h"

// VTK stuff
#include "vtkImageData.h"
#include "vtkLookupTable.h"
#include "vtkPlaneSource.h"
#include "vtkTexture.h"
#include "vtkProperty.h"

class FrMosaicSliceActor : public FrBaseActor
{
public:
	static FrMosaicSliceActor *New();
	vtkTypeMacro(FrMosaicSliceActor, FrBaseActor);

	// Description:
	// Add a part to the list of parts.
	virtual void SetInput(vtkImageData* image);
	virtual void SetLookupTable(vtkLookupTable* table);
	virtual void SetInterpolation(int on);
	virtual void SetOpacity(float opacity);

	// Description:
	// Set Key Location Parameters 
	virtual void SetLevel(int level);
	virtual void SetCurrentPlane(int CurrentPlane);

	virtual void SetPolarMode(int mode);
	virtual void SetPolarMiddle(float polarmiddle=-1);

	vtkGetMacro(CurrentPlane,int);
	vtkGetMacro(Level,int);

	vtkGetMacro(Opacity,float);
	vtkGetMacro(Interpolation,int);

	vtkGetMacro(OwnsColorMap,int);

	vtkGetMacro(PolarMode,int);
	vtkGetMacro(PolarMiddle,float);

	vtkSetClampMacro(AutoUpdate,int,0,1);
	vtkGetMacro(AutoUpdate,int);
	vtkBooleanMacro(AutoUpdate,int);


	virtual void Update() { this->UpdateSlice();}
	virtual void UpdateTexture();

	vtkGetObjectMacro(CurrentImage,vtkImageData);

protected:
	vtkActor*                    ImageSlice;
	vtkPlaneSource*              ImagePlane;
	vtkImageData*                CurrentImage;
	vtkTexture*                  ImageTexture;
	int                          Level;

	float                        OutlineBounds[6];
	int                          CurrentPlane;

	float                        Opacity;
	int                          Interpolation;
	int                          AutoUpdate;

	vtkLookupTable*              ColorMap;
	int                          OwnsColorMap;   

	int                          PolarMode;
	float                        PolarMiddle;

	FrMosaicSliceActor();
	virtual ~FrMosaicSliceActor();
	FrMosaicSliceActor(const FrMosaicSliceActor&) {};
	void operator=(const FrMosaicSliceActor&) {};

	// Slice Stuff
	virtual void BuildImageSlice();
	virtual void UpdateSlice();
	virtual void UpdateSlicePolar();

private:
	void AutoUpdateColormapRange(vtkLookupTable* cmap, vtkImageData* img);
	void SetStepColorMap(vtkLookupTable *cmap, float min, float max, float min_value, float max_value,
		int num_colors, int vol = 0);

};


#endif





