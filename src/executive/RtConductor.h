/******************************************************************************
 * RtConductor.h is the header for a class that oversees and coordinates all
 * operations during a real-time fMRI session.
 *
 * Oliver Hinds <ohinds@mit.edu> 2007-08-14 
 * 
 *****************************************************************************/

#ifndef RTCONDUCTOR_H
#define RTCONDUCTOR_H

#include<vector>
#include<sstream>

#include"RtConfig.h"
#include"RtExperiment.h"
#include"RtDisplayImage.h"
#include"RtDataStore.h"
#include"RtInfoServer.h"
#include"RtInput.h"
#include"RtInputScannerImages.h"
#include"RtInputUSBKb.h"
#include"RtOutput.h"
#include"RtOutputFile.h"
#include"RtStream.h"
#include"RtCode.h"
#include"RtDisplay.h"

using namespace std;

// class declaration
class RtConductor {

public:

  //*** constructors/destructors  ***//
  
  // default constructor
  //RtConductor(); 

  // constructor with command line args
  RtConductor(int argc, char **argv); 

  // destructor
  virtual ~RtConductor();

  //*** initialization routines  ***//
 
  // initialize config and prepare to run
  //  out:
  //   true (for success) or false
  bool init();

  // adds input mode
  //  in:
  //   in: input object
  //  out:
  //   true (for success) or false
  bool addInput(RtInput *in);

  // adds a vector of inputs
  //  in:
  //   in: vector of input object
  //  out:
  //   true (for success) or false
  bool addVectorOfInputs(vector<RtInput*> &ins);

  // adds output mode
  //  in:
  //   out: output object
  //  out:
  //   true (for success) or false
  bool addOutput(RtOutput *out);

  // adds outputs from a vector
  //  in:
  //   out: vector of output objects
  //  out:
  //   true (for success) or false
  bool addVectorOfOutputs(vector<RtOutput*> &outs);

  //*** operation routines  ***//
  
  // begins execution of a realtime fMRI session
  //  out:
  //   true (for success) or false
  bool run();

  //*** callback entries for threads ***//

  // receive a code signaling completetion of data input or processing
  void receiveCode(unsigned int code, RtData *data);

  // write to the log file
  void log(const string &s);

  // write to the log file
  void log(stringstream &s);

  //** gets **//

  // get the display output
  //  out 
  //   pointer to the display output object
//  RtDisplayImage *getDisplay();
  RtDisplayImage *getDisplayImage();

  // get the info server
  //  out 
  //   pointer to the infoserver object
  RtInfoServer *getInfoServer();

  // get an input by its name
  //  in
  //   name: name of input to get
  //  out 
  //   pointer to the input object
  RtInput *getInputByName(const string &name);

  // get an output by its name
  //  in
  //   name: name of output to get
  //  out 
  //   pointer to the output object
  RtOutput *getOutputByName(const string &name);

  // get all the outputs with a name
  //  in
  //   name: name of output to get
  //  out 
  //   vector of pointers to the output objects
  vector<RtOutput*> getAllOutputsWithName(const string &name);

  // get data store map
  //  out
  //   pointer to data store map
  RtDataStore *getDataStore();

  // get the version
  //  out: char array that represents the cvs version
  virtual char *getVersionString();

protected:

  //*** methods ***//

  // builds the processing stream 
  //  in:
  //   config: configuration
  //  out:
  //   true (for success) or false
  bool buildStream(RtConfig config);

  //*** members ***//

  // configuration object
  RtConfig config;

  // the data processing stream
  RtStream stream;

  // output object to log 
  RtOutputFile outputLog;

  // these vectors store the objects that handle io
  // note that their indexing is related to the code number they throw when 
  // processing is complete. the index is related by the START_CODE_?????
  // static class members
  
  // vector of input objects
  vector<RtInput*> inputs;

  // vector of output objects
  vector<RtOutput*> outputs;
  
  // data store object
  RtDataStore dataStore;

};

#endif

/*****************************************************************************
 * $Source$
 * Local Variables:
 * mode: c++
 * fill-column: 76
 * comment-column: 0
 * End:
 *****************************************************************************/


