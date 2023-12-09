#include <cmath>
#include <cstdio>
#include <vector>
#include <thread>

#include "nncore_utils.h"

using namespace testing::ext;
using namespace OHOS::NeuralNetworkRuntime::Test;
using namespace OHOS::HDI::Nnrt::V2_0;

namespace {

class TensorTest : public testing::Test {
protected:
    AddModel addModel;
    OHNNGraphArgs graphArgs = addModel.graphArgs;
};

void BuildAddTopKGraph(OH_NNModel *model)
{
    AddTopKModel addTopKModel;
    OHNNGraphArgsMulti graphArgsMulti = addTopKModel.graphArgs;
    ASSERT_EQ(OH_NN_SUCCESS, BuildMultiOpGraph(model, graphArgsMulti));
}

void BuildModel(OH_NNModel *model, const OHNNGraphArgs &graphArgs)
{
    ASSERT_EQ(OH_NN_SUCCESS, BuildSingleOpGraph(model, graphArgs));
}

} // namespace

void testGetDevicesID(size_t *targetDevice)
{
    const size_t *devicesID{nullptr};
    uint32_t devicesCount{0};
    ASSERT_EQ(OH_NN_SUCCESS, OH_NNDevice_GetAllDevicesID(&devicesID, &devicesCount));
    *targetDevice = devicesID[0];
}

/**
 * @tc.number : SUB_AI_NNRt_Func_North_Tensor_CreateTensor_0100
 * @tc.desc: 创建Tensor，TensorDesc为nullptr
 * @tc.type: FUNC
 */
HWTEST_F(TensorTest, SUB_AI_NNRt_Func_North_Tensor_CreateTensor_0100, Function | MediumTest | Level0)
{
    size_t deviceId = 0;
    testGetDevicesID(&deviceId);
    NN_Tensor* tensor = OH_NNTensor_Create(deviceId, nullptr);
    ASSERT_EQ(nullptr, tensor);
}

/**
 * @tc.number : SUB_AI_NNRt_Func_North_Tensor_CreateTensor_0200
 * @tc.desc: 创建Tensor，deviceId不存在
 * @tc.type: FUNC
 */
HWTEST_F(TensorTest, SUB_AI_NNRt_Func_North_Tensor_CreateTensor_0200, Function | MediumTest | Level0)
{
    int32_t inputDims[4] = {1, 1, 2, 3};
    NN_TensorDesc* tensorDesc = createTensorDesc(inputDims, 4, OH_NN_FLOAT32, OH_NN_FORMAT_NCHW);
    size_t deviceId = 0;
    NN_Tensor* tensor = OH_NNTensor_Create(deviceId, tensorDesc);
    ASSERT_EQ(nullptr, tensor);
}

/**
 * @tc.number : SUB_AI_NNRt_Func_North_Tensor_CreateTensor_0300
 * @tc.desc: 创建Tensor，成功创建
 * @tc.type: FUNC
 */
HWTEST_F(TensorTest, SUB_AI_NNRt_Func_North_Tensor_CreateTensor_0300, Function | MediumTest | Level0)
{
    int32_t inputDims[4] = {1, 1, 2, 3};
    NN_TensorDesc* tensorDesc = createTensorDesc(inputDims, 4, OH_NN_FLOAT32, OH_NN_FORMAT_NCHW);
    size_t deviceId = 0;
    testGetDevicesID(&deviceId);
    NN_Tensor* tensor = OH_NNTensor_Create(deviceId, tensorDesc);
    ASSERT_NE(nullptr, tensor);
    ASSERT_EQ(OH_NN_SUCCESS, OH_NNTensor_Destroy(&tensor));
}

/**
 * @tc.number : SUB_AI_NNRt_Func_North_Tensor_CreateTensorWithSize_0100
 * @tc.desc: 根据size创建Tensor，TensorDesc为nullptr
 * @tc.type: FUNC
 */
HWTEST_F(TensorTest, SUB_AI_NNRt_Func_North_Tensor_CreateTensorWithSize_0100, Function | MediumTest | Level0)
{
    size_t deviceId = 0;
    testGetDevicesID(&deviceId);
    size_t size = 4;
    NN_Tensor* tensor = OH_NNTensor_CreateWithSize(deviceId, nullptr, size);
    ASSERT_EQ(nullptr, tensor);
}

/**
 * @tc.number : SUB_AI_NNRt_Func_North_Tensor_CreateTensorWithSize_0200
 * @tc.desc: 根据size创建Tensor，size = 0
 * @tc.type: FUNC
 */
HWTEST_F(TensorTest, SUB_AI_NNRt_Func_North_Tensor_CreateTensorWithSize_0200, Function | MediumTest | Level0)
{
    int32_t inputDims[4] = {1, 1, 2, 3};
    NN_TensorDesc* tensorDesc = createTensorDesc(inputDims, 4, OH_NN_FLOAT32, OH_NN_FORMAT_NCHW);
    size_t deviceId = 0;
    testGetDevicesID(&deviceId);
    size_t size = 0;
    NN_Tensor* tensor = OH_NNTensor_CreateWithSize(deviceId, tensorDesc, size);
    ASSERT_EQ(nullptr, tensor);
}

/**
 * @tc.number : SUB_AI_NNRt_Func_North_Tensor_CreateTensorWithSize_0300
 * @tc.desc: 根据size创建Tensor，size < tensor size
 * @tc.type: FUNC
 */
HWTEST_F(TensorTest, SUB_AI_NNRt_Func_North_Tensor_CreateTensorWithSize_0300, Function | MediumTest | Level0)
{
    int32_t inputDims[4] = {1, 1, 2, 3};
    NN_TensorDesc* tensorDesc = createTensorDesc(inputDims, 4, OH_NN_FLOAT32, OH_NN_FORMAT_NCHW);
    size_t deviceId = 0;
    testGetDevicesID(&deviceId);
    size_t byteSize = 0;
    ASSERT_EQ(OH_NN_SUCCESS, OH_NNTensorDesc_GetByteSize(tensorDesc, &byteSize));
    size_t size = byteSize - 1;
    NN_Tensor* tensor = OH_NNTensor_CreateWithSize(deviceId, tensorDesc, size);
    ASSERT_EQ(nullptr, tensor);
}

/**
 * @tc.number : SUB_AI_NNRt_Func_North_Tensor_CreateTensorWithFd_0100
 * @tc.desc: 通过fd根据size创建Tensor，TensorDesc为nullptr
 * @tc.type: FUNC
 */
HWTEST_F(TensorTest, SUB_AI_NNRt_Func_North_Tensor_CreateTensorWithFd_0100, Function | MediumTest | Level0)
{
    int32_t inputDims[4] = {1, 1, 2, 3};
    NN_TensorDesc* tensorDesc = createTensorDesc(inputDims, 4, OH_NN_FLOAT32, OH_NN_FORMAT_NCHW);
    size_t deviceId = 0;
    testGetDevicesID(&deviceId);
    size_t size = 4;
    NN_Tensor* tensor = OH_NNTensor_Create(deviceId, tensorDesc);
    ASSERT_NE(nullptr, tensor);
    int fd = -1;
    ASSERT_EQ(OH_NN_SUCCESS, OH_NNTensor_GetFd(tensor, &fd));
    size_t offset = 1;
    NN_Tensor* tensortmp = OH_NNTensor_CreateWithFd(deviceId, nullptr, fd, size, offset);
    ASSERT_EQ(nullptr, tensortmp);
    ASSERT_EQ(OH_NN_SUCCESS, OH_NNTensor_Destroy(&tensor));
}

/**
 * @tc.number : SUB_AI_NNRt_Func_North_Tensor_CreateTensorWithFd_0200
 * @tc.desc: 通过fd根据size创建Tensor，fd = -1
 * @tc.type: FUNC
 */
HWTEST_F(TensorTest, SUB_AI_NNRt_Func_North_Tensor_CreateTensorWithFd_0200, Function | MediumTest | Level0)
{
    int32_t inputDims[4] = {1, 1, 2, 3};
    NN_TensorDesc* tensorDesc = createTensorDesc(inputDims, 4, OH_NN_FLOAT32, OH_NN_FORMAT_NCHW);
    size_t deviceId = 0;
    testGetDevicesID(&deviceId);
    size_t size = 4;
    int fd = -1;
    size_t offset = 1;
    NN_Tensor* tensor = OH_NNTensor_CreateWithFd(deviceId, tensorDesc, fd, size, offset);
    ASSERT_EQ(nullptr, tensor);
}

/**
 * @tc.number : SUB_AI_NNRt_Func_North_Tensor_CreateTensorWithFd_0300
 * @tc.desc: 通过fd根据size创建Tensor，size = 0
 * @tc.type: FUNC
 */
HWTEST_F(TensorTest, SUB_AI_NNRt_Func_North_Tensor_CreateTensorWithFd_0300, Function | MediumTest | Level0)
{
    int32_t inputDims[4] = {1, 1, 2, 3};
    NN_TensorDesc* tensorDesc = createTensorDesc(inputDims, 4, OH_NN_FLOAT32, OH_NN_FORMAT_NCHW);
    size_t deviceId = 0;
    testGetDevicesID(&deviceId);
    NN_Tensor* tensor = OH_NNTensor_Create(deviceId, tensorDesc);
    ASSERT_NE(nullptr, tensor);
    int fd = -1;
    ASSERT_EQ(OH_NN_SUCCESS, OH_NNTensor_GetFd(tensor, &fd));
    size_t offset = 0;
    NN_TensorDesc* tensorDescTmp = createTensorDesc(inputDims, 4, OH_NN_FLOAT32, OH_NN_FORMAT_NCHW);
    NN_Tensor* tensortmp = OH_NNTensor_CreateWithFd(deviceId, tensorDescTmp, fd, 0, offset);
    ASSERT_EQ(nullptr, tensortmp);
    ASSERT_EQ(OH_NN_SUCCESS, OH_NNTensor_Destroy(&tensor));
}

/**
 * @tc.number : SUB_AI_NNRt_Func_North_Tensor_CreateTensorWithFd_0400
 * @tc.desc: 通过fd根据size创建Tensor，size = offset
 * @tc.type: FUNC
 */
HWTEST_F(TensorTest, SUB_AI_NNRt_Func_North_Tensor_CreateTensorWithFd_0400, Function | MediumTest | Level0)
{
    int32_t inputDims[4] = {1, 1, 2, 3};
    NN_TensorDesc* tensorDesc = createTensorDesc(inputDims, 4, OH_NN_FLOAT32, OH_NN_FORMAT_NCHW);
    size_t deviceId = 0;
    testGetDevicesID(&deviceId);
    size_t size = 4;
    NN_Tensor* tensor = OH_NNTensor_Create(deviceId, tensorDesc);
    ASSERT_NE(nullptr, tensor);
    int fd = -1;
    ASSERT_EQ(OH_NN_SUCCESS, OH_NNTensor_GetFd(tensor, &fd));
    size_t offset = 4;
    NN_TensorDesc* tensorDescTmp = createTensorDesc(inputDims, 4, OH_NN_FLOAT32, OH_NN_FORMAT_NCHW);
    NN_Tensor* tensortmp = OH_NNTensor_CreateWithFd(deviceId, tensorDescTmp, fd, size, offset);
    ASSERT_EQ(nullptr, tensortmp);
    ASSERT_EQ(OH_NN_SUCCESS, OH_NNTensor_Destroy(&tensor));
}

/**
 * @tc.number : SUB_AI_NNRt_Func_North_Tensor_CreateTensorWithFd_0500
 * @tc.desc: 通过fd根据size创建Tensor，size-offset < tensorDescBytesize
 * @tc.type: FUNC
 */
HWTEST_F(TensorTest, SUB_AI_NNRt_Func_North_Tensor_CreateTensorWithFd_0500, Function | MediumTest | Level0)
{
    int32_t inputDims[4] = {1, 1, 2, 3};
    NN_TensorDesc* tensorDesc = createTensorDesc(inputDims, 4, OH_NN_FLOAT32, OH_NN_FORMAT_NCHW);
    size_t deviceId = 0;
    testGetDevicesID(&deviceId);
    size_t byteSize = 0;
    ASSERT_EQ(OH_NN_SUCCESS, OH_NNTensorDesc_GetByteSize(tensorDesc, &byteSize));
    size_t size = 10;
    NN_Tensor* tensor = OH_NNTensor_Create(deviceId, tensorDesc);
    ASSERT_NE(nullptr, tensor);
    int fd = -1;
    ASSERT_EQ(OH_NN_SUCCESS, OH_NNTensor_GetFd(tensor, &fd));
    size_t offset = size - byteSize +1;
    NN_TensorDesc* tensorDescTmp = createTensorDesc(inputDims, 4, OH_NN_FLOAT32, OH_NN_FORMAT_NCHW);
    NN_Tensor* tensortmp = OH_NNTensor_CreateWithFd(deviceId, tensorDescTmp, fd, size, offset);
    ASSERT_EQ(nullptr, tensortmp);
    ASSERT_EQ(OH_NN_SUCCESS, OH_NNTensor_Destroy(&tensor));
}

/**
 * @tc.number : SUB_AI_NNRt_Func_North_Tensor_CreateTensorWithFd_0600
 * @tc.desc: 通过fd根据size创建Tensor，size-offset = tensorDescBytesize
 * @tc.type: FUNC
 */
HWTEST_F(TensorTest, SUB_AI_NNRt_Func_North_Tensor_CreateTensorWithFd_0600, Function | MediumTest | Level0)
{
    int32_t inputDims[4] = {1, 1, 2, 3};
    NN_TensorDesc* tensorDesc = createTensorDesc(inputDims, 4, OH_NN_FLOAT32, OH_NN_FORMAT_NCHW);
    size_t deviceId = 0;
    testGetDevicesID(&deviceId);
    size_t byteSize = 0;
    ASSERT_EQ(OH_NN_SUCCESS, OH_NNTensorDesc_GetByteSize(tensorDesc, &byteSize));
    size_t size = 10;
    NN_Tensor* tensor = OH_NNTensor_Create(deviceId, tensorDesc);
    ASSERT_NE(nullptr, tensor);
    int fd = -1;
    ASSERT_EQ(OH_NN_SUCCESS, OH_NNTensor_GetFd(tensor, &fd));
    size_t offset = size - byteSize;
    NN_TensorDesc* tensorDescTmp = createTensorDesc(inputDims, 4, OH_NN_FLOAT32, OH_NN_FORMAT_NCHW);
    NN_Tensor* tensortmp = OH_NNTensor_CreateWithFd(deviceId, tensorDescTmp, fd, size, offset);
    ASSERT_NE(nullptr, tensortmp);
    ASSERT_EQ(OH_NN_SUCCESS, OH_NNTensor_Destroy(&tensor));
    ASSERT_EQ(OH_NN_SUCCESS, OH_NNTensor_Destroy(&tensortmp));
}

/**
 * @tc.number : SUB_AI_NNRt_Func_North_Tensor_GetDataBuffer_0100
 * @tc.desc: 获取databuffer，tensor为空
 * @tc.type: FUNC
 */
HWTEST_F(TensorTest, SUB_AI_NNRt_Func_North_Tensor_GetDataBuffer_0100, Function | MediumTest | Level0)
{
    ASSERT_EQ(nullptr, OH_NNTensor_GetDataBuffer(nullptr));
}

/**
 * @tc.number : SUB_AI_NNRt_Func_North_Tensor_GetDataBuffer_0200
 * @tc.desc: 获取databuffer，返回正确
 * @tc.type: FUNC
 */
HWTEST_F(TensorTest, SUB_AI_NNRt_Func_North_Tensor_GetDataBuffer_0200, Function | MediumTest | Level0)
{
    int32_t inputDims[4] = {1, 1, 2, 3};
    NN_TensorDesc* tensorDesc = createTensorDesc(inputDims, 4, OH_NN_FLOAT32, OH_NN_FORMAT_NCHW);
    size_t deviceId = 0;
    testGetDevicesID(&deviceId);
    NN_Tensor* tensor = OH_NNTensor_Create(deviceId, tensorDesc);
    ASSERT_NE(nullptr, tensor);
    ASSERT_NE(nullptr, OH_NNTensor_GetDataBuffer(tensor));
    ASSERT_EQ(OH_NN_SUCCESS, OH_NNTensor_Destroy(&tensor));
}

/**
 * @tc.number : SUB_AI_NNRt_Func_North_Tensor_Destroy_0100
 * @tc.desc: 销毁tensor，tensor为空
 * @tc.type: FUNC
 */
HWTEST_F(TensorTest, SUB_AI_NNRt_Func_North_Tensor_Destroy_0100, Function | MediumTest | Level0)
{
    ASSERT_EQ(OH_NN_INVALID_PARAMETER, OH_NNTensor_Destroy(nullptr));
}

/**
 * @tc.number : SUB_AI_NNRt_Func_North_Tensor_Destroy_0200
 * @tc.desc: 销毁tensor，tensor为空
 * @tc.type: FUNC
 */
HWTEST_F(TensorTest, SUB_AI_NNRt_Func_North_Tensor_Destroy_0200, Function | MediumTest | Level0)
{
    NN_Tensor* tensor = nullptr;
    ASSERT_EQ(OH_NN_INVALID_PARAMETER, OH_NNTensor_Destroy(&tensor));
}

/**
 * @tc.number : SUB_AI_NNRt_Func_North_Tensor_GetTensorDesc_0100
 * @tc.desc: 获取TensorDesc，tensor为空
 * @tc.type: FUNC
 */
HWTEST_F(TensorTest, SUB_AI_NNRt_Func_North_Tensor_GetTensorDesc_0100, Function | MediumTest | Level0)
{
    ASSERT_EQ(nullptr, OH_NNTensor_GetTensorDesc(nullptr));
}

/**
 * @tc.number : SUB_AI_NNRt_Func_North_Tensor_GetTensorDesc_0200
 * @tc.desc: 获取TensorDesc，返回正确
 * @tc.type: FUNC
 */
HWTEST_F(TensorTest, SUB_AI_NNRt_Func_North_Tensor_GetTensorDesc_0200, Function | MediumTest | Level0)
{
    int32_t inputDims[4] = {1, 1, 2, 3};
    NN_TensorDesc* tensorDesc = createTensorDesc(inputDims, 4, OH_NN_FLOAT32, OH_NN_FORMAT_NCHW);
    size_t deviceId = 0;
    testGetDevicesID(&deviceId);
    NN_Tensor* tensor = OH_NNTensor_Create(deviceId, tensorDesc);
    ASSERT_NE(nullptr, tensor);
    ASSERT_NE(nullptr, OH_NNTensor_GetTensorDesc(tensor));
    ASSERT_EQ(OH_NN_SUCCESS, OH_NNTensor_Destroy(&tensor));
}

/**
 * @tc.number : SUB_AI_NNRt_Func_North_Tensor_GetSize_0100
 * @tc.desc: 获取SIZE，tensor为空
 * @tc.type: FUNC
 */
HWTEST_F(TensorTest, SUB_AI_NNRt_Func_North_Tensor_GetSize_0100, Function | MediumTest | Level0)
{
    size_t size = 0;
    ASSERT_EQ(OH_NN_INVALID_PARAMETER, OH_NNTensor_GetSize(nullptr, &size));
}

/**
 * @tc.number : SUB_AI_NNRt_Func_North_Tensor_GetSize_0200
 * @tc.desc: 获取SIZE，OH_NNTensor_Create创建
 * @tc.type: FUNC
 */
HWTEST_F(TensorTest, SUB_AI_NNRt_Func_North_Tensor_GetSize_0200, Function | MediumTest | Level0)
{
    int32_t inputDims[4] = {1, 1, 2, 3};
    NN_TensorDesc* tensorDesc = createTensorDesc(inputDims, 4, OH_NN_FLOAT32, OH_NN_FORMAT_NCHW);
    size_t deviceId = 0;
    testGetDevicesID(&deviceId);
    NN_Tensor* tensor = OH_NNTensor_Create(deviceId, tensorDesc);
    ASSERT_NE(nullptr, tensor);
    size_t size = 0;
    ASSERT_EQ(OH_NN_SUCCESS, OH_NNTensor_GetSize(tensor, &size));
    ASSERT_EQ(OH_NN_SUCCESS, OH_NNTensor_Destroy(&tensor));
}

/**
 * @tc.number : SUB_AI_NNRt_Func_North_Tensor_GetSize_0300
 * @tc.desc: 获取SIZE，OH_NNTensor_CreateWithSize创建
 * @tc.type: FUNC
 */
HWTEST_F(TensorTest, SUB_AI_NNRt_Func_North_Tensor_GetSize_0300, Function | MediumTest | Level0)
{
    int32_t inputDims[4] = {1, 1, 2, 3};
    NN_TensorDesc* tensorDesc = createTensorDesc(inputDims, 4, OH_NN_FLOAT32, OH_NN_FORMAT_NCHW);
    size_t deviceId = 0;
    testGetDevicesID(&deviceId);
    NN_Tensor* tensor = OH_NNTensor_CreateWithSize(deviceId, tensorDesc, 4);
    ASSERT_NE(nullptr, tensor);
    size_t size = 0;
    ASSERT_EQ(OH_NN_SUCCESS, OH_NNTensor_GetSize(tensor, &size));
    ASSERT_EQ(OH_NN_SUCCESS, OH_NNTensor_Destroy(&tensor));
}

/**
 * @tc.number : SUB_AI_NNRt_Func_North_Tensor_GetSize_0400
 * @tc.desc: 获取SIZE，OH_NNTensor_CreateWithFd创建
 * @tc.type: FUNC
 */
HWTEST_F(TensorTest, SUB_AI_NNRt_Func_North_Tensor_GetSize_0400, Function | MediumTest | Level0)
{
    int32_t inputDims[4] = {1, 1, 2, 3};
    NN_TensorDesc* tensorDesc = createTensorDesc(inputDims, 4, OH_NN_FLOAT32, OH_NN_FORMAT_NCHW);
    size_t deviceId = 0;
    testGetDevicesID(&deviceId);
    NN_Tensor* tensor = OH_NNTensor_Create(deviceId, tensorDesc);
    ASSERT_NE(nullptr, tensor);
    int fd = -1;
    ASSERT_EQ(OH_NN_SUCCESS, OH_NNTensor_GetFd(tensor, &fd));
    NN_Tensor* tensortmp = OH_NNTensor_CreateWithFd(deviceId, tensorDesc, fd, 4, 0);
    size_t size = 0;
    ASSERT_EQ(OH_NN_SUCCESS, OH_NNTensor_GetSize(tensortmp, &size));
    ASSERT_EQ(OH_NN_SUCCESS, OH_NNTensor_Destroy(&tensor));
    ASSERT_EQ(OH_NN_SUCCESS, OH_NNTensor_Destroy(&tensortmp));
}

/**
 * @tc.number : SUB_AI_NNRt_Func_North_Tensor_GetFd_0100
 * @tc.desc: 获取Fd，tensor为空
 * @tc.type: FUNC
 */
HWTEST_F(TensorTest, SUB_AI_NNRt_Func_North_Tensor_GetFd_0100, Function | MediumTest | Level0)
{
    int fd = -1;
    ASSERT_EQ(OH_NN_INVALID_PARAMETER, OH_NNTensor_GetFd(nullptr, &fd));
}

/**
 * @tc.number : SUB_AI_NNRt_Func_North_Tensor_GetFd_0200
 * @tc.desc: 获取Fd，返回成功
 * @tc.type: FUNC
 */
HWTEST_F(TensorTest, SUB_AI_NNRt_Func_North_Tensor_GetFd_0200, Function | MediumTest | Level0)
{
    int32_t inputDims[4] = {1, 1, 2, 3};
    NN_TensorDesc* tensorDesc = createTensorDesc(inputDims, 4, OH_NN_FLOAT32, OH_NN_FORMAT_NCHW);
    size_t deviceId = 0;
    testGetDevicesID(&deviceId);
    NN_Tensor* tensor = OH_NNTensor_Create(deviceId, tensorDesc);
    ASSERT_NE(nullptr, tensor);
    int fd = -1;
    ASSERT_EQ(OH_NN_SUCCESS, OH_NNTensor_GetFd(tensor, &fd));
}

/**
 * @tc.number : SUB_AI_NNRt_Func_North_Tensor_GetOffset_0100
 * @tc.desc: 获取offset，tensor为空
 * @tc.type: FUNC
 */
HWTEST_F(TensorTest, SUB_AI_NNRt_Func_North_Tensor_GetOffset_0100, Function | MediumTest | Level0)
{
    size_t offset = 0;
    ASSERT_EQ(OH_NN_INVALID_PARAMETER, OH_NNTensor_GetOffset(nullptr, &offset));
}

/**
 * @tc.number : SUB_AI_NNRt_Func_North_Tensor_GetOffset_0200
 * @tc.desc: 获取offset，返回成功，offset = 0
 * @tc.type: FUNC
 */
HWTEST_F(TensorTest, SUB_AI_NNRt_Func_North_Tensor_GetOffset_0200, Function | MediumTest | Level0)
{
    int32_t inputDims[4] = {1, 1, 2, 3};
    NN_TensorDesc* tensorDesc = createTensorDesc(inputDims, 4, OH_NN_FLOAT32, OH_NN_FORMAT_NCHW);
    size_t deviceId = 0;
    testGetDevicesID(&deviceId);
    NN_Tensor* tensor = OH_NNTensor_Create(deviceId, tensorDesc);
    ASSERT_NE(nullptr, tensor);
    size_t offset = 0;
    ASSERT_EQ(OH_NN_SUCCESS, OH_NNTensor_GetOffset(tensor, &offset));
    ASSERT_EQ(0, offset);
}

/**
 * @tc.number : SUB_AI_NNRt_Func_North_Tensor_GetOffset_0300
 * @tc.desc: 获取offset，通过OH_NNTensor_CreateWithFd创建，返回成功，offset = 设置值
 * @tc.type: FUNC
 */
HWTEST_F(TensorTest, SUB_AI_NNRt_Func_North_Tensor_GetOffset_0300, Function | MediumTest | Level0)
{
    int32_t inputDims[4] = {1, 1, 2, 3};
    NN_TensorDesc* tensorDesc = createTensorDesc(inputDims, 4, OH_NN_FLOAT32, OH_NN_FORMAT_NCHW);
    size_t deviceId = 0;
    testGetDevicesID(&deviceId);
    size_t byteSize = 0;
    ASSERT_EQ(OH_NN_SUCCESS, OH_NNTensorDesc_GetByteSize(tensorDesc, &byteSize));
    size_t size = 10;
    NN_Tensor* tensor = OH_NNTensor_CreateWithSize(deviceId, tensorDesc, size);
    ASSERT_NE(nullptr, tensor);
    int fd = -1;
    ASSERT_EQ(OH_NN_SUCCESS, OH_NNTensor_GetFd(tensor, &fd));
    size_t offset = size - byteSize;
    NN_Tensor* tensortmp = OH_NNTensor_CreateWithFd(deviceId, tensorDesc, fd, size, offset);
    ASSERT_NE(nullptr, tensortmp);
    size_t offsettmp = 0;
    ASSERT_EQ(OH_NN_SUCCESS, OH_NNTensor_GetOffset(tensortmp, &offsettmp));
    ASSERT_EQ(offset, offsettmp);
    ASSERT_EQ(OH_NN_SUCCESS, OH_NNTensor_Destroy(&tensor));
    ASSERT_EQ(OH_NN_SUCCESS, OH_NNTensor_Destroy(&tensortmp));
}
