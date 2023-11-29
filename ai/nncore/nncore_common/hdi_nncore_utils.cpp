/*
 * Copyright (c) 2023 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#include "nncore_const.h"
#include "mock_backend.h"
#include "hdi_nncore_utils.h"

namespace OHOS::NeuralNetworkCore {
// std::shared_ptr<Backend> RegisterBackendFirst()
// {
//     std::shared_ptr<MockBackend> mockBackend = std::make_shared<MockBackend>("backendFirst");
//     if (mockBackend == nullptr) {
//         return nullptr;
//     }
//     mockBackend->SetDeviceEnableFp16(false);
//     std::shared_ptr<Backend> backend = static_cast<std::shared_ptr<Backend>>(mockBackend);
//     if (backend == nullptr) {
//         return nullptr;
//     }
//     return backend;
// }

// std::shared_ptr<Backend> RegisterBackendSecond()
// {
//     std::shared_ptr<MockBackend> mockBackend = std::make_shared<MockBackend>("backendSecond");
//     if (mockBackend == nullptr) {
//         return nullptr;
//     }
//     mockBackend->SetDeviceEnableFp16(true);
//     std::shared_ptr<Backend> backend = static_cast<std::shared_ptr<Backend>>(mockBackend);
//     if (backend == nullptr) {
//         return nullptr;
//     }
//     return backend;
// }

// //注册设备
// void RegisterBackend()
// {
//     auto& backendManager = BackendManager::GetInstance();
//     OH_NNCore_ReturnCode ret = backendManager.RegisterBackend(RegisterBackendFirst);
//     if (ret != OH_NNCORE_SUCCESS) {
//         LOGW("Register backend1 failed. ErrorCode=%d", ret);
//     }
//     ret = backendManager.RegisterBackend(RegisterBackendSecond);
//     if (ret != OH_NNCORE_SUCCESS) {
//         LOGW("Register backend2 failed. ErrorCode=%d", ret);
//     }
// }

// //测试backend number
void TestGetBackendNum(bool isNull)
{
    if (isNull) {
        ASSERT_EQ(OH_NNCORE_NULL_PTR, OH_NNCore_GetBackendNum(nullptr));
    } else {
        // RegisterBackend();
        size_t backendNum = -1;
        ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_GetBackendNum(&backendNum));
        ASSERT_LT(ZERO, backendNum);   
    }
}

//测试backend name
void TestGetBackendName(const char** backendName, bool isNull)
{
    if (isNull) {
        ASSERT_EQ(OH_NNCORE_NULL_PTR, OH_NNCore_GetBackendName(ZERO, nullptr));
    } else {
        // RegisterBackend();
        ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_GetBackendName(ZERO, backendName));
        ASSERT_NE(nullptr, *backendName);
    }
}

OH_NNBackend_Array TransformUInt32Array(const std::vector<uint32_t>& vector)
{
    uint32_t* data = (vector.empty()) ? nullptr : const_cast<uint32_t*>(vector.data());
    return {data, vector.size(), OH_NNCORE_UINT32};
}

OH_NNCore_ReturnCode CreateTensorDesc(OH_NNCore_TensorDesc** tensorDesc, const int32_t* shape, size_t shapeNum, 
                                                   OH_NNCore_DataType dataType, OH_NNCore_Format format)
{
    OH_NNCore_ReturnCode status = OH_NNCore_SetTensorDescShape(*tensorDesc, shape, shapeNum);
    if (status != OH_NNCORE_SUCCESS) {
        LOGE("End2EndTest::CreateTensorDesc failed, error happends when setting TensorDesc Shape.");
        return status;
    }

    status = OH_NNCore_SetTensorDescDataType(*tensorDesc, dataType);
    if (status != OH_NNCORE_SUCCESS) {
        LOGE("End2EndTest::CreateTensorDesc failed, error happends when setting TensorDesc DataType.");
        return status;
    }

    status = OH_NNCore_SetTensorDescFormat(*tensorDesc, format);
    if (status != OH_NNCORE_SUCCESS) {
        LOGE("End2EndTest::CreateTensorDesc failed, error happends when setting TensorDesc Format.");
        return status;
    }

    return status;
}

OH_NNCore_ReturnCode BuildSingleOpGraph(OH_NNBackend_Model *model, const OHNNGraphArgs &graphArgs)
{
    OH_NNCore_ReturnCode ret;
    for (uint32_t i = 0; i < graphArgs.operands.size(); i++) {
        const OHNNOperandTest &operandTem = graphArgs.operands[i];
        OH_NNCore_TensorDesc* operand = OH_NNCore_CreateTensorDesc();
        ret = CreateTensorDesc(&operand, operandTem.shape.data(), operandTem.shape.size(), operandTem.dataType,
                               operandTem.format);
        ret = OH_NNBackend_AddTensorToModel(model, operand);
        if (ret != OH_NNCORE_SUCCESS) {
            LOGE("[NNRtTest] OH_NNBackend_AddTensorToModel failed! ret=%d\n", ret);
            return ret;
        }
        ret = OH_NNBackend_SetModelTensorType(model, i, operandTem.type);
        if (ret != OH_NNCORE_SUCCESS) {
            LOGE("[NNRtTest] OH_NNBackend_SetModelTensorType failed! ret=%d\n", ret);
            return ret;
        }
        if (std::find(graphArgs.paramIndices.begin(), graphArgs.paramIndices.end(), i) !=
            graphArgs.paramIndices.end()) {
            ret = OH_NNBackend_SetModelTensorData(model, i, operandTem.data, operandTem.length);
            if (ret != OH_NNCORE_SUCCESS) {
                LOGE("[NNRtTest] OH_NNBackend_SetModelTensorData failed! ret=%d\n", ret);
                return ret;
            }
        }
    }
    auto paramIndices = TransformUInt32Array(graphArgs.paramIndices);
    auto inputIndices = TransformUInt32Array(graphArgs.inputIndices);
    auto outputIndices = TransformUInt32Array(graphArgs.outputIndices);
    if (graphArgs.addOperation) {
        ret = OH_NNBackend_AddOperationToModel(model, graphArgs.operationType, &paramIndices, &inputIndices,
                                               &outputIndices);
        if (ret != OH_NNCORE_SUCCESS) {
            LOGE("[NNRtTest] OH_NNBackend_AddOperationToModel failed! ret=%d\n", ret);
            return ret;
        }
    }
    if (graphArgs.specifyIO) {
        ret = OH_NNBackend_SpecifyModelInputsAndOutputs(model, &inputIndices, &outputIndices);
        if (ret != OH_NNCORE_SUCCESS) {
            LOGE("[NNRtTest] OH_NNBackend_SpecifyModelInputsAndOutputs failed! ret=%d\n", ret);
            return ret;
        }
    }
    if (graphArgs.build) {
        ret = OH_NNBackend_BuildModel(model);
        if (ret != OH_NNCORE_SUCCESS) {
            LOGE("[NNRtTest] OH_NNBackend_BuildModel failed! ret=%d\n", ret);
            return ret;
        }
    }
    return OH_NNCORE_SUCCESS;
}

OH_NNCore_ReturnCode BuildMultiOpGraph(OH_NNBackend_Model *model, const OHNNGraphArgsMulti &graphArgs)
{
    OH_NNCore_ReturnCode ret;
    int opCnt = 0;
    for (uint32_t j = 0; j < graphArgs.operationTypes.size(); j++) {
        for (uint32_t i = 0; i < graphArgs.operands.size(); i++) {
            const OHNNOperandTest &operandTem = graphArgs.operands[j][i];
            OH_NNCore_TensorDesc* operand = OH_NNCore_CreateTensorDesc();
            ret = CreateTensorDesc(&operand, operandTem.shape.data(), operandTem.shape.size(), operandTem.dataType,
                                   operandTem.format);
            ret = OH_NNBackend_AddTensorToModel(model, operand);
            if (ret != OH_NNCORE_SUCCESS) {
                LOGE("[NNRtTest] OH_NNBackend_AddTensorToModel failed! ret=%d\n", ret);
                return ret;
            }
            ret = OH_NNBackend_SetModelTensorType(model, i, operandTem.type);
            if (ret != OH_NNCORE_SUCCESS) {
                LOGE("[NNRtTest] OH_NNBackend_SetModelTensorType failed! ret=%d\n", ret);
                return ret;
            }
            if (std::find(graphArgs.paramIndices[j].begin(), graphArgs.paramIndices[j].end(), opCnt) !=
                graphArgs.paramIndices[j].end()) {
                ret = OH_NNBackend_SetModelTensorData(model, opCnt, operandTem.data, operandTem.length);
                if (ret != OH_NNCORE_SUCCESS) {
                    LOGE("[NNRtTest] OH_NNBackend_SetModelTensorData failed! ret=%d\n", ret);
                    return ret;
                }
                opCnt++;
            }
        }
        auto paramIndices = TransformUInt32Array(graphArgs.paramIndices[j]);
        auto inputIndices = TransformUInt32Array(graphArgs.inputIndices[j]);
        auto outputIndices = TransformUInt32Array(graphArgs.outputIndices[j]);
        ret = OH_NNBackend_AddOperationToModel(model, graphArgs.operationTypes[j], &paramIndices, &inputIndices,
                                               &outputIndices);
        if (ret != OH_NNCORE_SUCCESS) {
            LOGE("[NNRtTest] OH_NNBackend_AddOperationToModel failed! ret=%d\n", ret);
            return ret;
        }
    }
    auto graphInputs = TransformUInt32Array(graphArgs.graphInput);
    auto graphOutputs = TransformUInt32Array(graphArgs.graphOutput);
    ret = OH_NNBackend_SpecifyModelInputsAndOutputs(model, &graphInputs, &graphOutputs);
    if (ret != OH_NNCORE_SUCCESS) {
        LOGE("[NNRtTest] OH_NNBackend_SpecifyModelInputsAndOutputs failed! ret=%d\n", ret);
        return ret;
    }
    ret = OH_NNBackend_BuildModel(model);
    if (ret != OH_NNCORE_SUCCESS) {
        LOGE("[NNRtTest] OH_NNBackend_BuildModel failed! ret=%d\n", ret);
        return ret;
    }
    return OH_NNCORE_SUCCESS;
}

void Free(OH_NNBackend_Model *model, OH_NNCore_Compilation *compilation, OH_NNCore_Compiled* compiled, OH_NNCore_Executor *executor)
{
    if (model != nullptr) {
        OH_NNBackend_DestroyModel(&model);
        ASSERT_EQ(nullptr, model);
    }
    if (compilation != nullptr) {
        OH_NNCore_DestroyCompilation(&compilation);
        ASSERT_EQ(nullptr, compilation);
    }
    if (compiled != nullptr) {
        OH_NNCore_DestroyCompiled(&compiled);
        ASSERT_EQ(nullptr, compiled);
    }
    if (executor != nullptr) {
        OH_NNCore_DestroyExecutor(&executor);
        ASSERT_EQ(nullptr, executor);
    }
}
//创建addmodel
void TestConstructModel(OH_NNBackend_Model** model)
{
    *model = OH_NNBackend_CreateModel();
    ASSERT_NE(nullptr, model);
    AddModel addModel;
    OHNNGraphArgs graphArgs = addModel.graphArgs;
    ASSERT_EQ(OH_NNCORE_SUCCESS, BuildSingleOpGraph(*model, graphArgs));
}

//使用nnmodel生成compilation, 定长模型
void TestConstructCompilationWithNNModel(OH_NNCore_Compilation** compilation)
{
    //创建model
    OH_NNBackend_Model *model = nullptr;
    TestConstructModel(&model);

    *compilation = OH_NNCore_ConstructCompilationWithNNModel(model);
    ASSERT_NE(nullptr, *compilation);
}

//使用nnmodel生成compilation, 变长模型
void TestConstructCompilationWithDynamicNNModel(OH_NNCore_Compilation** compilation)
{
    OH_NNBackend_Model *model = OH_NNBackend_CreateModel();
    ASSERT_NE(nullptr, model);

    AvgPoolDynamicModel avgModel;
    OHNNGraphArgs graphArgs = avgModel.graphArgs;
    ASSERT_EQ(OH_NNCORE_SUCCESS, BuildSingleOpGraph(model, graphArgs));

    *compilation = OH_NNCore_ConstructCompilationWithNNModel(model);
    ASSERT_NE(nullptr, *compilation);
}

//测试创建compilation options
void TestCreateOptions(OH_NNCore_Options** options, const char* backendName)
{
    *options = OH_NNCore_CreateOptions(backendName);
    ASSERT_NE(nullptr, *options);
}

//设置正确的backendname，options，然后buildcompilation，返回失败，istrue表示compilation是否正确
void SetbackendNameOptions(OH_NNCore_Compilation* compilation, bool isTrue)
{
    const char* backendName = nullptr;
    TestGetBackendName(&backendName);

    OH_NNCore_Options* options = nullptr;
    TestSetAllOptions(&options);
    if (isTrue) {
        ASSERT_NE(nullptr, OH_NNCore_BuildCompilation(compilation, backendName, options));
        return;
    }
    ASSERT_EQ(nullptr, OH_NNCore_BuildCompilation(compilation, backendName, options));
}

//单独设置优先级
void TestSetPriority(OH_NNCore_Priority priority)
{
    OH_NNCore_Compilation* compilation = nullptr;
    TestConstructCompilationWithNNModel(&compilation);

    const char* backendName = nullptr;
    TestGetBackendName(&backendName);
    OH_NNCore_Options* options = nullptr;
    TestCreateOptions(&options, backendName);

    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_SetPriority(options, priority));
    if (priority < OH_NNCORE_PRIORITY_NONE || priority > OH_NNCORE_PRIORITY_HIGH) 
    {
        ASSERT_EQ(nullptr, OH_NNCore_BuildCompilation(compilation, backendName, options));
        return;
    }
    ASSERT_NE(nullptr, OH_NNCore_BuildCompilation(compilation, backendName, options));
}

//单独设置性能模式
void TestPerformanceMode(OH_NNCore_PerformanceMode performanceMode)
{
    OH_NNCore_Compilation* compilation = nullptr;
    TestConstructCompilationWithNNModel(&compilation);

    const char* backendName = nullptr;
    TestGetBackendName(&backendName);
    OH_NNCore_Options* options = nullptr;
    TestCreateOptions(&options, backendName);

    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_SetPerformanceMode(options, performanceMode));
    if (performanceMode < OH_NNCORE_PERFORMANCE_NONE || performanceMode > OH_NNCORE_PERFORMANCE_EXTREME)
    {
        ASSERT_EQ(nullptr, OH_NNCore_BuildCompilation(compilation, backendName, options));
        return;
    }
    ASSERT_NE(nullptr, OH_NNCore_BuildCompilation(compilation, backendName, options));
}

//单独设置enableFp16,共注册2个设备，第一个设备支持
void TestSetEnableFloat16(bool enableFloat16)
{   
    OH_NNCore_Compilation* compilation = nullptr;
    TestConstructCompilationWithNNModel(&compilation);
    const char* backendName = nullptr;
    TestGetBackendName(&backendName);
    OH_NNCore_Options* options = nullptr;
    TestCreateOptions(&options, backendName);
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_SetEnableFloat16(options, enableFloat16));
    if (enableFloat16) {
        ASSERT_EQ(nullptr, OH_NNCore_BuildCompilation(compilation, backendName, options));
    } else {
        ASSERT_NE(nullptr, OH_NNCore_BuildCompilation(compilation, backendName, options));
    }
}

//创建compilation，设置所有配置参数
void TestSetAllOptions(OH_NNCore_Options **options)
{
    const char* backendName = nullptr;
    TestGetBackendName(&backendName);
    TestCreateOptions(options, backendName);
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_SetPriority(*options, OH_NNCORE_PRIORITY_HIGH));
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_SetPerformanceMode(*options, OH_NNCORE_PERFORMANCE_HIGH));
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_SetEnableFloat16(*options, false));
}

//compilation各个参数设置好了,backend也设置好了，然后build compiled
void TestBuildCompiled(OH_NNCore_Compiled** compiled)
{
    OH_NNCore_Compilation* compilation = nullptr;
    TestConstructCompilationWithNNModel(&compilation);

    OH_NNCore_Options* options = nullptr;
    TestSetAllOptions(&options);
    const char* backendName = nullptr;
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_GetBackendName(ZERO, &backendName));

    *compiled = OH_NNCore_BuildCompilation(compilation, backendName, options);
    ASSERT_NE(nullptr, *compiled);
}

//创建tensorDesc
void TestConstructTensorDesc(OH_NNCore_TensorDesc** tensorDesc)
{
    //获取设备名字
    *tensorDesc = OH_NNCore_CreateTensorDesc();
    ASSERT_NE(nullptr, *tensorDesc);
}

//创建executor
void TestExecutor(OH_NNCore_Executor** executor)
{
    OH_NNCore_Compiled* compiled = nullptr;
    TestBuildCompiled(&compiled);
    *executor = OH_NNCore_ConstructExecutor(compiled);
    ASSERT_NE(nullptr, executor);
}

void TestGetInputOutputTensor(OH_NNCore_Executor* executor, std::vector<OH_NNCore_Tensor*>& inputTensor, size_t& inputSize, 
                              std::vector<OH_NNCore_Tensor*>& outputTensor, size_t& outputSize)
{
    OH_NNCore_Compiled* compiled = nullptr;
    TestBuildCompiled(&compiled);

    OH_NNCore_ReturnCode returnCode = OH_NNCore_GetCompiledInputNum(compiled, &inputSize);
    ASSERT_EQ(OH_NNCORE_SUCCESS, returnCode);
    std::vector<OH_NNCore_TensorDesc*> inputTensorDescs;
    OH_NNCore_TensorDesc* tensorDesc = nullptr;
    for (size_t i = 0; i < inputSize; ++i) {
        tensorDesc = nullptr;
        returnCode = OH_NNCore_GetCompiledInputDesc(compiled, i, &tensorDesc);
        ASSERT_EQ(OH_NNCORE_SUCCESS, returnCode);
        inputTensorDescs.emplace_back(tensorDesc);
    }

    returnCode = OH_NNCore_GetCompiledOutputNum(compiled, &outputSize);
    std::vector<OH_NNCore_TensorDesc*> outputTensorDescs;
    ASSERT_EQ(OH_NNCORE_SUCCESS, returnCode);
    for (size_t i = 0; i < outputSize; ++i) {
        tensorDesc = nullptr;
        returnCode = OH_NNCore_GetCompiledOutputDesc(compiled, i, &tensorDesc);
        ASSERT_EQ(OH_NNCORE_SUCCESS, returnCode);
        outputTensorDescs.emplace_back(tensorDesc);
    }

    returnCode = OH_NNCore_DestroyCompiled(&compiled);
    ASSERT_EQ(OH_NNCORE_SUCCESS, returnCode);
    OH_NNCore_Tensor* tensor = nullptr;
    const char* backendName = nullptr;
    TestGetBackendName(&backendName);
    for (size_t i = 0; i < inputSize; ++i) {
        tensor = nullptr;
        tensor = OH_NNCore_CreateTensor(backendName, inputTensorDescs[i]);
        ASSERT_NE(nullptr, tensor);
        inputTensor.emplace_back(tensor);
    }
    for (size_t i = 0; i < outputSize; ++i) {
        tensor = nullptr;
        tensor = OH_NNCore_CreateTensor(backendName, inputTensorDescs[i]);
        ASSERT_EQ(OH_NNCORE_SUCCESS, returnCode);
        outputTensor.emplace_back(tensor);
    }                
}

PathType CheckPath(const std::string &path)
{
    if (path.empty()) {
        LOGI("CheckPath: path is null");
        return PathType::NOT_FOUND;
    }
    struct stat buf{};
    if (stat(path.c_str(), &buf) == 0) {
        if (buf.st_mode & S_IFDIR) {
            return PathType::DIR;
        } else if (buf.st_mode & S_IFREG) {
            return PathType::FILE;
        } else {
            return PathType::UNKNOWN;
        }
    }
    LOGI("%s not found", path.c_str());
    return PathType::NOT_FOUND;
}

bool DeleteFile(const std::string &path)
{
    if (path.empty()) {
        LOGI("DeleteFile: path is null");
        return false;
    }
    if (CheckPath(path) == PathType::NOT_FOUND) {
        LOGI("not found: %s", path.c_str());
        return true;
    }
    if (remove(path.c_str()) == 0) {
        LOGI("deleted: %s", path.c_str());
        return true;
    }
    LOGI("delete failed: %s", path.c_str());
    return false;
}

void CopyFile(const std::string &srcPath, const std::string &dstPath)
{
    std::ifstream src(srcPath, std::ios::binary);
    std::ofstream dst(dstPath, std::ios::binary);

    dst << src.rdbuf();
}

std::string ConcatPath(const std::string &str1, const std::string &str2)
{
    // boundary
    if (str2.empty()) {
        return str1;
    }
    if (str1.empty()) {
        return str2;
    }
    // concat
    char end = str1[str1.size() - 1];
    if (end == '\\' or end == '/') {
        return str1 + str2;
    } else {
        return str1 + '/' + str2;
    }
}

void DeleteFolder(const std::string &path)
{
    if (path.empty()) {
        LOGI("DeletePath: path is null");
        return;
    }

    DIR *dir = opendir(path.c_str());
    // check is dir ?
    if (dir == nullptr) {
        LOGE("[NNRtTest] Can not open dir. Check path or permission! path: %s", path.c_str());
        return;
    }
    struct dirent *file;
    // read all the files in dir
    std::vector <std::string> pathList;
    while ((file = readdir(dir)) != nullptr) {
        // skip "." and ".."
        if (strcmp(file->d_name, ".") == 0 || strcmp(file->d_name, "..") == 0) {
            continue;
        }
        if (file->d_type == DT_DIR) {
            std::string filePath = path + "/" + file->d_name;
            DeleteFolder(filePath); // 递归执行
        } else {
            pathList.emplace_back(ConcatPath(path, file->d_name));
        }
    }
    closedir(dir);
    pathList.emplace_back(path);
    LOGI("[Common] Delete folder %s", path.c_str());
    for (auto &i : pathList) {
        DeleteFile(i);
    }
}

bool CreateFolder(const std::string &path)
{
    if (path.empty()) {
        LOGI("CreateFolder: path is empty");
        return false;
    }
    LOGI("CreateFolder:%s", path.c_str());
    mode_t mode = 0700;
    for (uint32_t i = 1; i < path.size() - 1; i++) {
        if (path[i] != '/') {
            continue;
        }
        PathType ret = CheckPath(path.substr(0, i));
        switch (ret) {
            case PathType::DIR:
                continue;
            case PathType::NOT_FOUND:
                LOGI("mkdir: %s", path.substr(0, i).c_str());
                mkdir(path.substr(0, i).c_str(), mode);
                break;
            default:
                LOGI("error: %s", path.substr(0, i).c_str());
                return false;
        }
    }
    mkdir(path.c_str(), mode);
    return CheckPath(path) == PathType::DIR;
}

bool CheckOutput(const float* output, const float* expect)
{
    if (output == nullptr || expect == nullptr) {
        LOGE("[NNRtTest] output or expect is nullptr\n");
        return false;
    }
    for (int i = 0; i < ELEMENT_COUNT; i++) {
        if (std::abs(float(output[i]) - float(expect[i])) > 1e-8) {
            for (int j = 0; j < ELEMENT_COUNT; j++) {
                LOGE("[NNRtTest] output %d not match: expect:%f, actual:%f\n", j, float(expect[j]), float(output[j]));
            }
            return false;
        }
    }
    return true;
}
}
