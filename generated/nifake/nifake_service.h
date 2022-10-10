
//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// Service header for the NI-FAKE Metadata
//---------------------------------------------------------------------
#ifndef NIFAKE_GRPC_SERVICE_H
#define NIFAKE_GRPC_SERVICE_H

#include <nifake.grpc.pb.h>
#include <condition_variable>
#include <grpcpp/grpcpp.h>
#include <grpcpp/health_check_service_interface.h>
#include <grpcpp/ext/proto_server_reflection_plugin.h>
#include <map>
#include <server/converters.h>
#include <server/feature_toggles.h>
#include <server/session_resource_repository.h>
#include <server/shared_library.h>
#include <server/exceptions.h>

#include "nifake_library_interface.h"

namespace nifake_grpc {

struct NiFakeFeatureToggles
{
  using CodeReadiness = nidevice_grpc::FeatureToggles::CodeReadiness;
  NiFakeFeatureToggles(const nidevice_grpc::FeatureToggles& feature_toggles = {});

  bool is_enabled;
};

class NiFakeService final : public NiFake::Service {
public:
  using ResourceRepositorySharedPtr = std::shared_ptr<nidevice_grpc::SessionResourceRepository<ViSession>>;

  NiFakeService(
    NiFakeLibraryInterface* library,
    ResourceRepositorySharedPtr resource_repository,
    const NiFakeFeatureToggles& feature_toggles = {});
  virtual ~NiFakeService();
  
  ::grpc::Status Abort(::grpc::ServerContext* context, const AbortRequest* request, AbortResponse* response) override;
  ::grpc::Status AcceptListOfDurationsInSeconds(::grpc::ServerContext* context, const AcceptListOfDurationsInSecondsRequest* request, AcceptListOfDurationsInSecondsResponse* response) override;
  ::grpc::Status AcceptViSessionArray(::grpc::ServerContext* context, const AcceptViSessionArrayRequest* request, AcceptViSessionArrayResponse* response) override;
  ::grpc::Status AcceptViUInt32Array(::grpc::ServerContext* context, const AcceptViUInt32ArrayRequest* request, AcceptViUInt32ArrayResponse* response) override;
  ::grpc::Status BoolArrayInputFunction(::grpc::ServerContext* context, const BoolArrayInputFunctionRequest* request, BoolArrayInputFunctionResponse* response) override;
  ::grpc::Status BoolArrayOutputFunction(::grpc::ServerContext* context, const BoolArrayOutputFunctionRequest* request, BoolArrayOutputFunctionResponse* response) override;
  ::grpc::Status Close(::grpc::ServerContext* context, const CloseRequest* request, CloseResponse* response) override;
  ::grpc::Status CloseExtCal(::grpc::ServerContext* context, const CloseExtCalRequest* request, CloseExtCalResponse* response) override;
  ::grpc::Status CommandWithReservedParam(::grpc::ServerContext* context, const CommandWithReservedParamRequest* request, CommandWithReservedParamResponse* response) override;
  ::grpc::Status Control4022(::grpc::ServerContext* context, const Control4022Request* request, Control4022Response* response) override;
  ::grpc::Status CreateConfigurationList(::grpc::ServerContext* context, const CreateConfigurationListRequest* request, CreateConfigurationListResponse* response) override;
  ::grpc::Status CustomNestedStructRoundtrip(::grpc::ServerContext* context, const CustomNestedStructRoundtripRequest* request, CustomNestedStructRoundtripResponse* response) override;
  ::grpc::Status DoubleAllTheNums(::grpc::ServerContext* context, const DoubleAllTheNumsRequest* request, DoubleAllTheNumsResponse* response) override;
  ::grpc::Status EnumArrayOutputFunction(::grpc::ServerContext* context, const EnumArrayOutputFunctionRequest* request, EnumArrayOutputFunctionResponse* response) override;
  ::grpc::Status EnumInputFunctionWithDefaults(::grpc::ServerContext* context, const EnumInputFunctionWithDefaultsRequest* request, EnumInputFunctionWithDefaultsResponse* response) override;
  ::grpc::Status ExportAttributeConfigurationBuffer(::grpc::ServerContext* context, const ExportAttributeConfigurationBufferRequest* request, ExportAttributeConfigurationBufferResponse* response) override;
  ::grpc::Status FetchWaveform(::grpc::ServerContext* context, const FetchWaveformRequest* request, FetchWaveformResponse* response) override;
  ::grpc::Status GetABoolean(::grpc::ServerContext* context, const GetABooleanRequest* request, GetABooleanResponse* response) override;
  ::grpc::Status GetANumber(::grpc::ServerContext* context, const GetANumberRequest* request, GetANumberResponse* response) override;
  ::grpc::Status GetAStringOfFixedMaximumSize(::grpc::ServerContext* context, const GetAStringOfFixedMaximumSizeRequest* request, GetAStringOfFixedMaximumSizeResponse* response) override;
  ::grpc::Status GetAnIviDanceString(::grpc::ServerContext* context, const GetAnIviDanceStringRequest* request, GetAnIviDanceStringResponse* response) override;
  ::grpc::Status GetAnIviDanceWithATwistArray(::grpc::ServerContext* context, const GetAnIviDanceWithATwistArrayRequest* request, GetAnIviDanceWithATwistArrayResponse* response) override;
  ::grpc::Status GetAnIviDanceWithATwistArrayOfCustomType(::grpc::ServerContext* context, const GetAnIviDanceWithATwistArrayOfCustomTypeRequest* request, GetAnIviDanceWithATwistArrayOfCustomTypeResponse* response) override;
  ::grpc::Status GetAnIviDanceWithATwistArrayWithInputArray(::grpc::ServerContext* context, const GetAnIviDanceWithATwistArrayWithInputArrayRequest* request, GetAnIviDanceWithATwistArrayWithInputArrayResponse* response) override;
  ::grpc::Status GetAnIviDanceWithATwistByteArray(::grpc::ServerContext* context, const GetAnIviDanceWithATwistByteArrayRequest* request, GetAnIviDanceWithATwistByteArrayResponse* response) override;
  ::grpc::Status GetAnIviDanceWithATwistString(::grpc::ServerContext* context, const GetAnIviDanceWithATwistStringRequest* request, GetAnIviDanceWithATwistStringResponse* response) override;
  ::grpc::Status GetAnIviDanceWithATwistStringStrlenBug(::grpc::ServerContext* context, const GetAnIviDanceWithATwistStringStrlenBugRequest* request, GetAnIviDanceWithATwistStringStrlenBugResponse* response) override;
  ::grpc::Status GetArraySizeForCustomCode(::grpc::ServerContext* context, const GetArraySizeForCustomCodeRequest* request, GetArraySizeForCustomCodeResponse* response) override;
  ::grpc::Status GetArrayUsingIviDance(::grpc::ServerContext* context, const GetArrayUsingIviDanceRequest* request, GetArrayUsingIviDanceResponse* response) override;
  ::grpc::Status GetArrayViUInt8WithEnum(::grpc::ServerContext* context, const GetArrayViUInt8WithEnumRequest* request, GetArrayViUInt8WithEnumResponse* response) override;
  ::grpc::Status GetAttributeViBoolean(::grpc::ServerContext* context, const GetAttributeViBooleanRequest* request, GetAttributeViBooleanResponse* response) override;
  ::grpc::Status GetAttributeViInt32(::grpc::ServerContext* context, const GetAttributeViInt32Request* request, GetAttributeViInt32Response* response) override;
  ::grpc::Status GetAttributeViInt64(::grpc::ServerContext* context, const GetAttributeViInt64Request* request, GetAttributeViInt64Response* response) override;
  ::grpc::Status GetAttributeViReal64(::grpc::ServerContext* context, const GetAttributeViReal64Request* request, GetAttributeViReal64Response* response) override;
  ::grpc::Status GetAttributeViSession(::grpc::ServerContext* context, const GetAttributeViSessionRequest* request, GetAttributeViSessionResponse* response) override;
  ::grpc::Status GetAttributeViString(::grpc::ServerContext* context, const GetAttributeViStringRequest* request, GetAttributeViStringResponse* response) override;
  ::grpc::Status GetBitfieldAsEnumArray(::grpc::ServerContext* context, const GetBitfieldAsEnumArrayRequest* request, GetBitfieldAsEnumArrayResponse* response) override;
  ::grpc::Status GetCalDateAndTime(::grpc::ServerContext* context, const GetCalDateAndTimeRequest* request, GetCalDateAndTimeResponse* response) override;
  ::grpc::Status GetCalInterval(::grpc::ServerContext* context, const GetCalIntervalRequest* request, GetCalIntervalResponse* response) override;
  ::grpc::Status GetCustomType(::grpc::ServerContext* context, const GetCustomTypeRequest* request, GetCustomTypeResponse* response) override;
  ::grpc::Status GetCustomTypeArray(::grpc::ServerContext* context, const GetCustomTypeArrayRequest* request, GetCustomTypeArrayResponse* response) override;
  ::grpc::Status GetEnumValue(::grpc::ServerContext* context, const GetEnumValueRequest* request, GetEnumValueResponse* response) override;
  ::grpc::Status GetViInt32Array(::grpc::ServerContext* context, const GetViInt32ArrayRequest* request, GetViInt32ArrayResponse* response) override;
  ::grpc::Status GetViUInt32Array(::grpc::ServerContext* context, const GetViUInt32ArrayRequest* request, GetViUInt32ArrayResponse* response) override;
  ::grpc::Status GetViUInt8(::grpc::ServerContext* context, const GetViUInt8Request* request, GetViUInt8Response* response) override;
  ::grpc::Status ImportAttributeConfigurationBuffer(::grpc::ServerContext* context, const ImportAttributeConfigurationBufferRequest* request, ImportAttributeConfigurationBufferResponse* response) override;
  ::grpc::Status InitExtCal(::grpc::ServerContext* context, const InitExtCalRequest* request, InitExtCalResponse* response) override;
  ::grpc::Status InitWithOptions(::grpc::ServerContext* context, const InitWithOptionsRequest* request, InitWithOptionsResponse* response) override;
  ::grpc::Status InitWithVarArgs(::grpc::ServerContext* context, const InitWithVarArgsRequest* request, InitWithVarArgsResponse* response) override;
  ::grpc::Status MethodUsingEnumWithGrpcNameValues(::grpc::ServerContext* context, const MethodUsingEnumWithGrpcNameValuesRequest* request, MethodUsingEnumWithGrpcNameValuesResponse* response) override;
  ::grpc::Status MethodUsingWholeAndFractionalNumbers(::grpc::ServerContext* context, const MethodUsingWholeAndFractionalNumbersRequest* request, MethodUsingWholeAndFractionalNumbersResponse* response) override;
  ::grpc::Status MethodUsingWholeMappedNumbers(::grpc::ServerContext* context, const MethodUsingWholeMappedNumbersRequest* request, MethodUsingWholeMappedNumbersResponse* response) override;
  ::grpc::Status MethodWithGetLastErrorParam(::grpc::ServerContext* context, const MethodWithGetLastErrorParamRequest* request, MethodWithGetLastErrorParamResponse* response) override;
  ::grpc::Status MethodWithGrpcFieldNumber(::grpc::ServerContext* context, const MethodWithGrpcFieldNumberRequest* request, MethodWithGrpcFieldNumberResponse* response) override;
  ::grpc::Status MethodWithGrpcOnlyParam(::grpc::ServerContext* context, const MethodWithGrpcOnlyParamRequest* request, MethodWithGrpcOnlyParamResponse* response) override;
  ::grpc::Status MultipleArrayTypes(::grpc::ServerContext* context, const MultipleArrayTypesRequest* request, MultipleArrayTypesResponse* response) override;
  ::grpc::Status MultipleArraysSameSize(::grpc::ServerContext* context, const MultipleArraysSameSizeRequest* request, MultipleArraysSameSizeResponse* response) override;
  ::grpc::Status MultipleArraysSameSizeWithOptional(::grpc::ServerContext* context, const MultipleArraysSameSizeWithOptionalRequest* request, MultipleArraysSameSizeWithOptionalResponse* response) override;
  ::grpc::Status OneInputFunction(::grpc::ServerContext* context, const OneInputFunctionRequest* request, OneInputFunctionResponse* response) override;
  ::grpc::Status ParametersAreMultipleTypes(::grpc::ServerContext* context, const ParametersAreMultipleTypesRequest* request, ParametersAreMultipleTypesResponse* response) override;
  ::grpc::Status PoorlyNamedSimpleFunction(::grpc::ServerContext* context, const PoorlyNamedSimpleFunctionRequest* request, PoorlyNamedSimpleFunctionResponse* response) override;
  ::grpc::Status Read(::grpc::ServerContext* context, const ReadRequest* request, ReadResponse* response) override;
  ::grpc::Status ReadDataWithInOutIviTwist(::grpc::ServerContext* context, const ReadDataWithInOutIviTwistRequest* request, ReadDataWithInOutIviTwistResponse* response) override;
  ::grpc::Status ReadDataWithMultipleIviTwistParamSets(::grpc::ServerContext* context, const ReadDataWithMultipleIviTwistParamSetsRequest* request, ReadDataWithMultipleIviTwistParamSetsResponse* response) override;
  ::grpc::Status ReadFromChannel(::grpc::ServerContext* context, const ReadFromChannelRequest* request, ReadFromChannelResponse* response) override;
  ::grpc::Status ReturnANumberAndAString(::grpc::ServerContext* context, const ReturnANumberAndAStringRequest* request, ReturnANumberAndAStringResponse* response) override;
  ::grpc::Status ReturnDurationInSeconds(::grpc::ServerContext* context, const ReturnDurationInSecondsRequest* request, ReturnDurationInSecondsResponse* response) override;
  ::grpc::Status ReturnListOfDurationsInSeconds(::grpc::ServerContext* context, const ReturnListOfDurationsInSecondsRequest* request, ReturnListOfDurationsInSecondsResponse* response) override;
  ::grpc::Status ReturnMultipleTypes(::grpc::ServerContext* context, const ReturnMultipleTypesRequest* request, ReturnMultipleTypesResponse* response) override;
  ::grpc::Status SetCustomType(::grpc::ServerContext* context, const SetCustomTypeRequest* request, SetCustomTypeResponse* response) override;
  ::grpc::Status SetCustomTypeArray(::grpc::ServerContext* context, const SetCustomTypeArrayRequest* request, SetCustomTypeArrayResponse* response) override;
  ::grpc::Status StringValuedEnumInputFunctionWithDefaults(::grpc::ServerContext* context, const StringValuedEnumInputFunctionWithDefaultsRequest* request, StringValuedEnumInputFunctionWithDefaultsResponse* response) override;
  ::grpc::Status TwoInputFunction(::grpc::ServerContext* context, const TwoInputFunctionRequest* request, TwoInputFunctionResponse* response) override;
  ::grpc::Status Use64BitNumber(::grpc::ServerContext* context, const Use64BitNumberRequest* request, Use64BitNumberResponse* response) override;
  ::grpc::Status UseATwoDimensionParameter(::grpc::ServerContext* context, const UseATwoDimensionParameterRequest* request, UseATwoDimensionParameterResponse* response) override;
  ::grpc::Status ViInt16ArrayInputFunction(::grpc::ServerContext* context, const ViInt16ArrayInputFunctionRequest* request, ViInt16ArrayInputFunctionResponse* response) override;
  ::grpc::Status ViUInt8ArrayInputFunction(::grpc::ServerContext* context, const ViUInt8ArrayInputFunctionRequest* request, ViUInt8ArrayInputFunctionResponse* response) override;
  ::grpc::Status ViUInt8ArrayOutputFunction(::grpc::ServerContext* context, const ViUInt8ArrayOutputFunctionRequest* request, ViUInt8ArrayOutputFunctionResponse* response) override;
  ::grpc::Status WriteWaveform(::grpc::ServerContext* context, const WriteWaveformRequest* request, WriteWaveformResponse* response) override;
private:
  NiFakeLibraryInterface* library_;
  ResourceRepositorySharedPtr session_repository_;
  ::grpc::Status ConvertApiErrorStatusForViSession(::grpc::ServerContext* context, int32_t status, ViSession vi);
  void Copy(const std::vector<ViBoolean>& input, google::protobuf::RepeatedField<bool>* output);
  template <typename TEnum>
  void CopyBytesToEnums(const std::string& input, google::protobuf::RepeatedField<TEnum>* output);
  std::map<std::int32_t, std::int32_t> decimalmixednumber_input_map_ { {0, 0},{1, 22},{2, 2.2f},{3, -3},{4, 2147483647},{5, 2147483648.0f},{6, -2147483648},{7, -2147483649.0f}, };
  std::map<std::int32_t, std::int32_t> decimalmixednumber_output_map_ { {0, 0},{22, 1},{2.2f, 2},{-3, 3},{2147483647, 4},{2147483648.0f, 5},{-2147483648, 6},{-2147483649.0f, 7}, };
  std::map<std::int32_t, double> decimalwholenumbermapped_input_map_ { {1, 0.0f},{2, -1.0f},{3, 22.0f}, };
  std::map<double, std::int32_t> decimalwholenumbermapped_output_map_ { {0.0f, 1},{-1.0f, 2},{22.0f, 3}, };
  std::map<std::int32_t, double> floatenum_input_map_ { {1, 3.5f},{2, 4.5f},{3, 5.5f},{4, 6.5f},{5, 7.5f}, };
  std::map<double, std::int32_t> floatenum_output_map_ { {3.5f, 1},{4.5f, 2},{5.5f, 3},{6.5f, 4},{7.5f, 5}, };
  std::map<std::int32_t, std::string> mobileosnames_input_map_ { {1, "Android"},{2, "iOS"},{3, "None"}, };
  std::map<std::string, std::int32_t> mobileosnames_output_map_ { {"Android", 1},{"iOS", 2},{"None", 3}, };
  std::map<std::int32_t, double> nifakereal64attributevaluesmapped_input_map_ { {1, 3.5f},{2, 4.5f},{3, 5.5f},{4, 6.5f},{5, 7.5f}, };
  std::map<double, std::int32_t> nifakereal64attributevaluesmapped_output_map_ { {3.5f, 1},{4.5f, 2},{5.5f, 3},{6.5f, 4},{7.5f, 5}, };

  NiFakeFeatureToggles feature_toggles_;
};

} // namespace nifake_grpc

namespace nidevice_grpc {
namespace converters {
template <>
void convert_to_grpc(const CustomStruct& input, nifake_grpc::FakeCustomStruct* output);
template <>
CustomStruct convert_from_grpc(const nifake_grpc::FakeCustomStruct& input);
template <>
void convert_to_grpc(const CustomStructNestedTypedef_struct& input, nifake_grpc::CustomStructNestedTypedef* output);
template <>
CustomStructNestedTypedef_struct convert_from_grpc(const nifake_grpc::CustomStructNestedTypedef& input);
template <>
void convert_to_grpc(const CustomStructTypedef_struct& input, nifake_grpc::CustomStructTypedef* output);
template <>
CustomStructTypedef_struct convert_from_grpc(const nifake_grpc::CustomStructTypedef& input);
} // namespace converters
} // namespace nidevice_grpc

#endif  // NIFAKE_GRPC_SERVICE_H
