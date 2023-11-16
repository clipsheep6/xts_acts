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
#include "mock_backend.h"
#include "hdi_nncore_utils.h"

namespace OHOS::NeuralNetworkCore {
static const int ZERO = 0;
//注册设备
void RegisterBackend()
{
    std::shared_ptr<Backend> RegisterBackendFirst()
    {
        std::shared_ptr<Backend> backend = std::make_shared<MockBackend>("backendFirst");
        if (backend == nullptr) {
            return nullptr;
        }
        return backend;
    }

    std::shared_ptr<Backend> RegisterBackendSecond()
    {
        std::shared_ptr<Backend> backend = std::make_shared<MockBackend>("backendSecond");
        if (backend == nullptr) {
            return nullptr;
        }
        return backend;
    }

    Register(Test1, RegisterBackendFirst);
    Register(Test2, RegisterBackendSecond);
}

//测试backend number
void TestGetBackendNum(bool isNull = false)
{
    if (isNull) {
        ASSERT_EQ(OH_NNCORE_NULL_PTR, OH_NNCore_GetBackendNum(nullptr));
    } else {
        RegisterBackend();
        size_t backendNum = -1;
        ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_GetBackendNum(&backendNum));
        ASSERT_LT(ZERO, backendNum);   
    }
}

//测试backend name
void TestGetBackendName(char** backendName, bool isNull = false)
{
    if (isNull) {
        ASSERT_EQ(OH_NNCORE_NULL_PTR, OH_NNCore_GetBackendName(ZERO, nullptr));
    } else {
        RegisterBackend();
        ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_GetBackendName(ZERO, backendName));
        ASSERT_TRUE(!*backendName.empty());
    }
}

//使用nnmodel生成compilation, 定长模型
void TestConstructCompilationWithNNModel(OH_NNCore_Compilation** compilation)
{
    //创建model
    OH_NNModel *model = OH_NNModel_Construct();
    ASSERT_NE(nullptr, model);
    AddTopKModel addTopKModel;
    OHNNGraphArgsMulti graphArgsMulti = addTopKModel.graphArgs;
    ASSERT_EQ(OH_NN_SUCCESS, BuildMultiOpGraph(model, graphArgsMulti));

    *compilation = OH_NNCore_ConstructCompilationWithNNModel(model);
    ASSERT_NE(nullptr, *compilation);
}

//为compilation设置backend name
void SetCompilationBackendName(OH_NNCore_Compilation** compilation)
{
    //获取设备数量
    TestGetBackendNum();

    //获取设备名字
    char* backendName = nullptr;
    TestGetBackendName(&backendName);
    
    //构建compilation
    TestConstructCompilationWithNNModel(compilation);

    //设置backendname
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_SetCompilationBackend(*compilation, backendName));
}

//测试创建compilation options
void TestCreateCompilationOptions(OH_NNCore_CompilationOptions** options)
{
    *options = OH_NNBackend_CreateCompilationOptions();
    ASSERT_NE(nullptr, *options);
}

//单独设置优先级
void TestSetCompilationPriority(OH_NNBackend_Priority priority)
{
    OH_NNCore_Compilation* compilation = nullptr;
    TestConstructCompilationWithNNModel(&compilation);

    OH_NNCore_CompilationOptions* options = nullptr;
    TestCreateCompilationOptions(&options);

    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNBackend_SetCompilationPriority(options, priority));
    if (priority < OH_NNBACKEND_PRIORITY_NONE || priority > OH_NNBACKEND_PRIORITY_HIGH) 
    {
        ASSERT_EQ(OH_NNCORE_INVALID_PARAMETER, OH_NNCore_SetCompilationOptions(compilation, options));
        return;
    }
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_SetCompilationOptions(compilation, options));
}

//单独设置性能模式
void TestSetCompilationPerformanceMode(OH_NNBackend_PerformanceMode performanceMode)
{
    OH_NNCore_Compilation* compilation = nullptr;
    TestConstructCompilationWithNNModel(&compilation);

    OH_NNCore_CompilationOptions* options = nullptr;
    TestCreateCompilationOptions(&options);

    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNBackend_SetCompilationPerformanceMode(options, performanceMode));
    if (priority < OH_NNBACKEND_PERFORMANCE_NONE || priority > OH_NNBACKEND_PERFORMANCE_EXTREME)
    {
        ASSERT_EQ(OH_NNCORE_INVALID_PARAMETER, OH_NNCore_SetCompilationOptions(compilation, options));
        return;
    }
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_SetCompilationOptions(compilation, options));
}

//单独设置enableFp16
void TestSetCompilationEnableFloat16(bool enableFloat16, bool isSupport)
{   
    OH_NNCore_Compilation* compilation = nullptr;
    SetCompilationBackendName(&compilation);

    OH_NNCore_CompilationOptions* options = nullptr;
    TestCreateCompilationOptions(&options);
    if (isSupport) {
        ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNBackend_SetCompilationEnableFloat16(options, enableFloat16));
    } else {
        ASSERT_EQ(OH_NNCORE_UNSUPPORTED, OH_NNBackend_SetCompilationEnableFloat16(options, enableFloat16));
    }
}

//创建compilation，设置所有配置参数
void TestSetCompilationOptions(OH_NNCore_CompilationOptions **option)
{
    TestCreateCompilationOptions(&options);
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNBackend_SetCompilationPriority(*options, OH_NNBACKEND_PRIORITY_HIGH));
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNBackend_SetCompilationPerformanceMode(*options, OH_NNBACKEND_PERFORMANCE_HIGH));
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNBackend_SetCompilationEnableFloat16(*options, true));
}

//compilation各个参数设置好了,backend也设置好了，然后build compiled
void TestBuildCompiled(OH_NNCore_Compiled** compiled)
{
    OH_NNCore_Compilation* compilation = nullptr;
    SetCompilationBackendName(&compilation);

    OH_NNCore_CompilationOptions* options = nullptr;
    TestSetCompilationOptions(&options);

    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_SetCompilationOptions(compilation, options));

    *compiled = OH_NNCore_BuildCompilation(&compilation);
    ASSERT_NE(nullptr, *compiled);
}

//创建tensorDesc
void TestConstructTensorDesc(OH_NNCore_TensorDesc** tensorDesc)
{
    //获取设备名字
    char* backendName = nullptr;
    TestGetBackendName(&backendName);

    *tensorDesc = OH_NNCore_CreateTensorDesc(backendName);
    ASSERT_NE(nullptr, *tensorDesc);
}

//创建executor
void TestExecutor(OH_NNCore_Executor** executor)
{
    OH_NNCore_Compiled* compiled = nullptr;
    TestBuildCompiled(&compiled);
    OH_NNCore_Executor* executor = OH_NNCore_ConstructExecutor(compiled);
    ASSERT_NE(nullptr, executor);
}
}