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

#include "../nncore_common/hdi_nncore_utils.h"

using namespace testing::ext;
static const size_t MODEL_SIZE = 100;

namespace OHOS::NeuralNetworkCore {
class HdiNNCoreCompilation : public testing::Test {};

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Device_Construct_Compilation_With_NNModel_0100
 * @tc.desc: 传入nnModel为空指针，返回错误
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreCompilation, SUB_AI_NNRt_Core_Func_North_Device_Construct_Compilation_With_NNModel_0100, Function | MediumTest | Level1)
{
    ASSERT_EQ(OH_NNCORE_NULL_PTR, OH_NNCore_ConstructCompilationWithNNModel(nullptr));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Device_Construct_Compilation_With_NNModel_0200
 * @tc.desc: 传入未完成构图的nnModel，返回错误
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreCompilation, SUB_AI_NNRt_Core_Func_North_Device_Construct_Compilation_With_NNModel_0200, Function | MediumTest | Level1)
{
    OH_NNModel *model = OH_NNModel_Construct();
    ASSERT_NE(nullptr, model);
    ASSERT_EQ(OH_NNCORE_NULL_PTR, OH_NNCore_ConstructCompilationWithNNModel(reinterpret_cast<const void*>(model)));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Device_Construct_Compilation_With_Offline_Model_0100
 * @tc.desc: 传入filePath为空指针，返回错误
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreCompilation, SUB_AI_NNRt_Core_Func_North_Device_Construct_Compilation_With_Offline_Model_0100, Function | MediumTest | Level1)
{
    ASSERT_EQ(OH_NNCORE_NULL_PTR, OH_NNCore_ConstructCompilationWithOfflineModel(nullptr));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Device_Construct_Compilation_With_Offline_Model_0200
 * @tc.desc: 传入合法文件，返回不支持
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreCompilation, SUB_AI_NNRt_Core_Func_North_Device_Construct_Compilation_With_Offline_Model_0200, Function | MediumTest | Level1)
{
    const char* filePath = "hefa.txt";
    ASSERT_EQ(OH_NNCORE_INVALID_PARAMETER, OH_NNCore_ConstructCompilationWithOfflineModel(filePath));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Device_Construct_Compilation_With_Offline_Buffer_0100
 * @tc.desc: 传入modelData为空指针，返回错误
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreCompilation, SUB_AI_NNRt_Core_Func_North_Device_Construct_Compilation_With_Offline_Buffer_0100, Function | MediumTest | Level1)
{
    size_t modelSize = MODEL_SIZE;
    ASSERT_EQ(OH_NNCORE_INVALID_PARAMETER, OH_NNCore_ConstructCompilationWithOfflineBuffer(nullptr, MODEL_SIZE));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Device_Construct_Compilation_With_Offline_Buffer_0200
 * @tc.desc: 传入modelData为合法离线模型buffer，返回不支持
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreCompilation, SUB_AI_NNRt_Core_Func_North_Device_Construct_Compilation_With_Offline_Buffer_0200, Function | MediumTest | Level1)
{
    size_t modelSize = MODEL_SIZE;
    std::string s = "buffer";
    ASSERT_EQ(OH_NNCORE_INVALID_PARAMETER, OH_NNCore_ConstructCompilationWithOfflineBuffer(reinterpret_cast<const void*>(s), MODEL_SIZE));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Device_Set_Compilation_Backend_0100
 * @tc.desc: 传入compilation为空指针，返回错误
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreCompilation, SUB_AI_NNRt_Core_Func_North_Device_Set_Compilation_Backend_0100, Function | MediumTest | Level1)
{
    const char* backendName = nullptr;
    TestGetBackendName(&backendName);

    ASSERT_EQ(OH_NNCORE_NULL_PTR, OH_NNCore_SetCompilationBackend(nullptr, backendName));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Device_Set_Compilation_Backend_0200
 * @tc.desc: 传入backendName为空指针，返回错误
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreCompilation, SUB_AI_NNRt_Core_Func_North_Device_Set_Compilation_Backend_0200, Function | MediumTest | Level1)
{
    OH_NNCore_Compilation* compilation = nullptr;
    TestConstructCompilationWithNNModel(&compilation);

    ASSERT_EQ(OH_NNCORE_NULL_PTR, OH_NNCore_SetCompilationBackend(compilation, nullptr));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Device_Set_Compilation_Backend_0300
 * @tc.desc: 传入backendName不存在，返回错误
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreCompilation, SUB_AI_NNRt_Core_Func_North_Device_Set_Compilation_Backend_0300, Function | MediumTest | Level1)
{
    OH_NNCore_Compilation* compilation = nullptr;
    TestConstructCompilationWithNNModel(&compilation);

    const char* backendName = "wrongName";
    ASSERT_EQ(OH_NNCORE_FAILED, OH_NNCore_SetCompilationBackend(compilation, backendName));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Device_Set_Compilation_Backend_0400
 * @tc.desc: 传入compilation已完成编译，backendName存在，返回成功
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreCompilation, SUB_AI_NNRt_Core_Func_North_Device_Set_Compilation_Backend_0400, Function | MediumTest | Level1)
{
    OH_NNCore_Compilation* compilation = nullptr;
    SetCompilationBackendName(&compilation);
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Device_Set_Compilation_Options_0100
 * @tc.desc: 传入compilation为空指针，返回错误
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreCompilation, SUB_AI_NNRt_Core_Func_North_Device_Set_Compilation_Options_0100, Function | MediumTest | Level1)
{
    OH_NNCore_Compilation* compilation = nullptr;

    OH_NNCore_CompilationOptions* options = nullptr;
    TestCreateCompilationOptions(&options);

    ASSERT_EQ(OH_NNCORE_NULL_PTR, OH_NNCore_SetCompilationOptions(compilation, options));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Device_Set_Compilation_Options_0200
 * @tc.desc: 传入compilationOptions为空指针，返回错误
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreCompilation, SUB_AI_NNRt_Core_Func_North_Device_Set_Compilation_Options_0200, Function | MediumTest | Level1)
{
    OH_NNCore_Compilation* compilation = nullptr;  
    TestConstructCompilationWithNNModel(&compilation);
    ASSERT_EQ(OH_NNCORE_NULL_PTR, OH_NNCore_SetCompilationOptions(compilation, nullptr));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Device_Create_Compilation_Options_0100
 * @tc.desc: 创建编译option结构体，返回正确
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreCompilation, SUB_AI_NNRt_Core_Func_North_Device_Create_Compilation_Options_0100, Function | MediumTest | Level1)
{
    OH_NNCore_CompilationOptions* options = nullptr;
    TestCreateCompilationOptions(&options);
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Device_Set_Compilation_Priority_0100
 * @tc.desc: 设置编译优先级为低
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreCompilation, SUB_AI_NNRt_Core_Func_North_Device_Set_Compilation_Priority_0100, Function | MediumTest | Level1)
{
    TestSetCompilationPriority(OH_NNBACKEND_PRIORITY_LOW);
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Device_Set_Compilation_Priority_0200
 * @tc.desc: 设置编译优先级为中
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreCompilation, SUB_AI_NNRt_Core_Func_North_Device_Set_Compilation_Priority_0200, Function | MediumTest | Level1)
{
    TestSetCompilationPriority(OH_NNBACKEND_PRIORITY_MEDIUM);
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Device_Set_Compilation_Priority_0300
 * @tc.desc: 设置编译优先级为高
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreCompilation, SUB_AI_NNRt_Core_Func_North_Device_Set_Compilation_Priority_0300, Function | MediumTest | Level1)
{
    TestSetCompilationPriority(OH_NNBACKEND_PRIORITY_HIGH);   
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Device_Set_Compilation_Priority_0400
 * @tc.desc: 超出临界值，返回错误
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreCompilation, SUB_AI_NNRt_Core_Func_North_Device_Set_Compilation_Priority_0400, Function | MediumTest | Level1)
{
    TestSetCompilationPriority(static_cast<OH_NNBackend_Priority>(OH_NNBACKEND_PRIORITY_HIGH + 1));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Device_Set_Compilation_Performance_Mode_0100
 * @tc.desc: 设置性能模式为extreme
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreCompilation, SUB_AI_NNRt_Core_Func_North_Device_Set_Compilation_Performance_Mode_0100, Function | MediumTest | Level1)
{
    TestSetCompilationPerformanceMode(OH_NNBACKEND_PERFORMANCE_EXTREME);
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Device_Set_Compilation_Performance_Mode_0200
 * @tc.desc: 设置性能模式为high
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreCompilation, SUB_AI_NNRt_Core_Func_North_Device_Set_Compilation_Performance_Mode_0200, Function | MediumTest | Level1)
{
    TestSetCompilationPerformanceMode(OH_NNBACKEND_PERFORMANCE_HIGH);
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Device_Set_Compilation_Performance_Mode_0300
 * @tc.desc: 设置性能模式为medium
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreCompilation, SUB_AI_NNRt_Core_Func_North_Device_Set_Compilation_Performance_Mode_0300, Function | MediumTest | Level1)
{
    TestSetCompilationPerformanceMode(OH_NNBACKEND_PERFORMANCE_MEDIUM);
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Device_Set_Compilation_Performance_Mode_0400
 * @tc.desc: 超出临界值判断
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreCompilation, SUB_AI_NNRt_Core_Func_North_Device_Set_Compilation_Performance_Mode_0400, Function | MediumTest | Level1)
{
    TestSetCompilationPerformanceMode(static_cast<OH_NNBackend_PerformanceMode>(OH_NNBACKEND_PERFORMANCE_EXTREME + 1));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Device_Set_Compilation_Enable_Float16_0100
 * @tc.desc: 设备支持，设置enablefp16为true
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreCompilation, SUB_AI_NNRt_Core_Func_North_Device_Set_Compilation_Enable_Float16_0100, Function | MediumTest | Level1)
{
    bool enableFloat16 = true;
    bool isSupport = true;
    TestSetCompilationEnableFloat16(enableFloat16, isSupport);
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Device_Set_Compilation_Enable_Float16_0200
 * @tc.desc: 设备支持，设置enablefp16为false
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreCompilation, SUB_AI_NNRt_Core_Func_North_Device_Set_Compilation_Enable_Float16_0200, Function | MediumTest | Level1)
{
    bool enableFloat16 = false;
    bool isSupport = true;
    TestSetCompilationEnableFloat16(enableFloat16, isSupport);
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Device_Set_Compilation_Enable_Float16_0300
 * @tc.desc: 设置不支持，设置enablefp16为true，返回错误
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreCompilation, SUB_AI_NNRt_Core_Func_North_Device_Set_Compilation_Enable_Float16_0300, Function | MediumTest | Level1)
{
    bool enableFloat16 = true;
    bool isSupport = false;
    TestSetCompilationEnableFloat16(enableFloat16, isSupport);
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Device_Destroy_Compilation_Options_0100
 * @tc.desc: 销毁compilation_options结构体，传入为空，返回错误
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreCompilation, SUB_AI_NNRt_Core_Func_North_Device_Create_Compilation_Options_0100, Function | MediumTest | Level1)
{
    ASSERT_EQ(OH_NNCORE_NULL_PTR, OH_NNBackend_DestroyCompilationOptions(nullptr));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Device_Destroy_Compilation_Options_0200
 * @tc.desc: 销毁compilation_options结构体，传入非空，未设置任意option，调用destroy，返回成功
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreCompilation, SUB_AI_NNRt_Core_Func_North_Device_Create_Compilation_Options_0100, Function | MediumTest | Level1)
{
    OH_NNCore_CompilationOptions* options = nullptr;
    TestCreateCompilationOptions(&options);
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNBackend_DestroyCompilationOptions(&options));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Device_Destroy_Compilation_Options_0300
 * @tc.desc: 销毁compilation_options结构体，传入非空，设置任意option，调用destroy，返回成功
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreCompilation, SUB_AI_NNRt_Core_Func_North_Device_Create_Compilation_Options_0100, Function | MediumTest | Level1)
{
    OH_NNCore_CompilationOptions* options = nullptr;
    TestSetCompilationOptions(&options);
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNBackend_DestroyCompilationOptions(&options));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Device_Build_Compilation_0100
 * @tc.desc: 编译模型，传入compilation为空指针，返回错误
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreCompilation, SUB_AI_NNRt_Core_Func_North_Device_Build_Compilation_0100, Function | MediumTest | Level1)
{
    ASSERT_EQ(nullptr, OH_NNCore_BuildCompilation(nullptr));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Device_Build_Compilation_0200
 * @tc.desc: 传入合法compilation，返回成功
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreCompilation, SUB_AI_NNRt_Core_Func_North_Device_Build_Compilation_0200, Function | MediumTest | Level1)
{
    OH_NNCore_Compilation* compilation = nullptr;
    SetCompilationBackendName(&compilation);

    ASSERT_NE(nullptr, OH_NNCore_BuildCompilation(compilation));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Device_Build_Compilation_0300
 * @tc.desc: 编译模型，未设置backend，返回错误
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreCompilation, SUB_AI_NNRt_Core_Func_North_Device_Build_Compilation_0300, Function | MediumTest | Level1)
{
    OH_NNCore_Compilation* compilation = nullptr;
    TestConstructCompilationWithNNModel(&compilation);

    ASSERT_EQ(nullptr, OH_NNCore_BuildCompilation(compilation));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Device_Build_Compilation_0400
 * @tc.desc: 编译模型，设置全部options，返回成功
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreCompilation, SUB_AI_NNRt_Core_Func_North_Device_Build_Compilation_0400, Function | MediumTest | Level1)
{
    OH_NNCore_Compiled* compiled = nullptr;
    TestBuildCompiled(&compiled);
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Device_Destroy_Compilation_0100
 * @tc.desc: 释放编译实例，返回成功
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreCompilation, SUB_AI_NNRt_Core_Func_North_Device_Destroy_Compilation_0100, Function | MediumTest | Level1)
{
    OH_NNCore_Compilation* compilation = nullptr;
    SetCompilationBackendName(&compilation);

    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_DestroyCompilation(&compilation));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Device_Destroy_Compilation_0100
 * @tc.desc: compilation为空指针，返回成功
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreCompilation, SUB_AI_NNRt_Core_Func_North_Device_Destroy_Compilation_0100, Function | MediumTest | Level1)
{
    OH_NNCore_Compilation* compilation = nullptr;
    OH_NNCore_Compilation** doublePointCompilation = &compilation;

    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_DestroyCompilation(&doublePointCompilation));
}
} // namespace OHOS::NeuralNetworkCore