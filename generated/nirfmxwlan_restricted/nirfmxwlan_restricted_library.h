//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// Real implementation of LibraryInterface for NI-RFMXWLAN-RESTRICTED
//---------------------------------------------------------------------
#ifndef NIRFMXWLAN_RESTRICTED_GRPC_LIBRARY_H
#define NIRFMXWLAN_RESTRICTED_GRPC_LIBRARY_H

#include "nirfmxwlan_restricted_library_interface.h"

#include <server/shared_library.h>

namespace nirfmxwlan_restricted_grpc {

class NiRFmxWLANRestrictedLibrary : public nirfmxwlan_restricted_grpc::NiRFmxWLANRestrictedLibraryInterface {
 public:
  NiRFmxWLANRestrictedLibrary();
  virtual ~NiRFmxWLANRestrictedLibrary();

  ::grpc::Status check_function_exists(std::string functionName);
  int32 GetChannelList(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 WLANBand, float64 centerFrequencies[], float64 channelBandwidths[], int32 arraySize, int32* actualArraySize);
  int32 GetError(niRFmxInstrHandle instrumentHandle, int32* errorCode, int32 errorDescriptionBufferSize, char errorDescription[]);
  int32 GetErrorString(niRFmxInstrHandle instrumentHandle, int32 errorCode, int32 errorDescriptionBufferSize, char errorDescription[]);
  int32 OFDMModAccFetchCommonPilotErrorTraceIndB(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* x0, float64* dx, float32 commonPilotErrorMagnitude[], float32 commonPilotErrorPhase[], int32 arraySize, int32* actualArraySize);
  int32 OFDMModAccNoiseCalibrate(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 sharedLOConnection);

 private:
  using GetChannelListPtr = int32 (*)(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 WLANBand, float64 centerFrequencies[], float64 channelBandwidths[], int32 arraySize, int32* actualArraySize);
  using GetErrorPtr = int32 (*)(niRFmxInstrHandle instrumentHandle, int32* errorCode, int32 errorDescriptionBufferSize, char errorDescription[]);
  using GetErrorStringPtr = int32 (*)(niRFmxInstrHandle instrumentHandle, int32 errorCode, int32 errorDescriptionBufferSize, char errorDescription[]);
  using OFDMModAccFetchCommonPilotErrorTraceIndBPtr = int32 (*)(niRFmxInstrHandle instrumentHandle, char selectorString[], float64 timeout, float64* x0, float64* dx, float32 commonPilotErrorMagnitude[], float32 commonPilotErrorPhase[], int32 arraySize, int32* actualArraySize);
  using OFDMModAccNoiseCalibratePtr = int32 (*)(niRFmxInstrHandle instrumentHandle, char selectorString[], int32 sharedLOConnection);

  typedef struct FunctionPointers {
    GetChannelListPtr GetChannelList;
    GetErrorPtr GetError;
    GetErrorStringPtr GetErrorString;
    OFDMModAccFetchCommonPilotErrorTraceIndBPtr OFDMModAccFetchCommonPilotErrorTraceIndB;
    OFDMModAccNoiseCalibratePtr OFDMModAccNoiseCalibrate;
  } FunctionLoadStatus;

  nidevice_grpc::SharedLibrary shared_library_;
  FunctionPointers function_pointers_;
};

}  // namespace nirfmxwlan_restricted_grpc

#endif  // NIRFMXWLAN_RESTRICTED_GRPC_LIBRARY_H
