//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// Library wrapper for implementing interactions with NI-FAKE-NON-IVI
//---------------------------------------------------------------------
#ifndef NIFAKE_NON_IVI_GRPC_LIBRARY_WRAPPER_H
#define NIFAKE_NON_IVI_GRPC_LIBRARY_WRAPPER_H

#include <grpcpp/grpcpp.h>
#include <niFakeNonIvi.h>

namespace nifake_non_ivi_grpc {

class NiFakeNonIviLibraryInterface {
 public:
  virtual ~NiFakeNonIviLibraryInterface() {}

  virtual int32 Close(FakeHandle handle) = 0;
  virtual int32 GetCrossDriverSession(FakeHandle handle, int32* crossDriverSession) = 0;
  virtual int32 GetMarbleAttributeDouble(FakeHandle handle, int32 attribute, double* value) = 0;
  virtual int32 GetMarbleAttributeInt32(FakeHandle handle, int32 attribute, int32* value) = 0;
  virtual int32 GetMarbleAttributeInt32Array(FakeHandle handle, int32 attribute, int32 value[]) = 0;
  virtual int32 Init(const char sessionName[], FakeHandle* handle) = 0;
  virtual int32 InitFromCrossDriverSession(int32 crossDriverSession, FakeHandle* handle) = 0;
  virtual int32 InitFromCrossDriverSessionArray(int32 crossDriverSessionArray[], int32 numberOfCrossDriverSessions, FakeHandle* handle) = 0;
  virtual int32 InitWithHandleNameAsSessionName(const char handleName[], FakeHandle* handle) = 0;
  virtual int32 InputArraysWithNarrowIntegerTypes(const myUInt16 u16Array[], const myInt16 i16Array[], const myInt8 i8Array[]) = 0;
  virtual int32 IotaWithCustomSize(int32 sizeOne, int32 sizeTwo, int32 data[]) = 0;
  virtual int32 OutputArraysWithNarrowIntegerTypes(int32 numberOfU16Samples, myUInt16 u16Data[], int32 numberOfI16Samples, myInt16 i16Data[], int32 numberOfI8Samples, myInt8 i8Data[]) = 0;
  virtual int32 InputArrayOfBytes(const myUInt8 u8Array[]) = 0;
  virtual int32 OutputArrayOfBytes(int32 numberOfU8Samples, myUInt8 u8Data[]) = 0;
  virtual int32 OutputArraysWithPassedInByPtrMechanism(int32 i32Data[], myUInt16 u16Data[], int32* arraySize) = 0;
  virtual int32 RegisterCallback(myInt16 inputData, CallbackPtr callbackFunction, void* callbackData) = 0;
  virtual int32 ReadStream(int32 start, int32 stop, int32* value) = 0;
  virtual int32 InputTimestamp(CVIAbsoluteTime when) = 0;
  virtual int32 OutputTimestamp(CVIAbsoluteTime* when) = 0;
  virtual int32 InputVarArgs(const char inputName[], const char channelName[], int32 color, double powerUpState, const char channelName0[], int32 color0, double powerUpState0, const char channelName1[], int32 color1, double powerUpState1, const char channelName2[], int32 color2, double powerUpState2) = 0;
  virtual int32 OutputVarArgs(const char inputName[], const char channelName[], int32* color, const char channelName0[], int32* color0, const char channelName1[], int32* color1, const char channelName2[], int32* color2) = 0;
  virtual int32 ResetMarbleAttribute(FakeHandle handle, int32 attribute) = 0;
  virtual int32 ScalarsWithNarrowIntegerTypes(myUInt16 u16, myInt16 i16, myInt8 i8) = 0;
  virtual int32 SetMarbleAttributeDouble(FakeHandle handle, int32 attribute, double value) = 0;
  virtual int32 SetMarbleAttributeInt32(FakeHandle handle, int32 attribute, int32 value) = 0;
  virtual int32 SetColors(int32 colors[3], int32 size) = 0;
  virtual int32 GetStructsWithCoercion(int32 numberOfStructs, StructWithCoercion_struct structs[]) = 0;
  virtual int32 SetStructsWithCoercion(StructWithCoercion_struct structs[3]) = 0;
  virtual int32 InputStringValuedEnum(char aName[]) = 0;
  virtual int32 WriteBooleanArray(int32 bools[], int32 size) = 0;
};

}  // namespace nifake_non_ivi_grpc
#endif  // NIFAKE_NON_IVI_GRPC_LIBRARY_WRAPPER_H
