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
#include<fstream>

#include "../nncore_common/const.h"
#include "../nncore_common/hdi_nncore_utils.h"

using namespace testing::ext;
namespace OHOS::NeuralNetworkCore {
class HdiNNCoreCompilation : public testing::Test {
    void SetUp()
    {
        CreateFolder(CACHE_DIR);
        SaveSupportModel();
        SaveNOSupportModel();
    }
    void TearDown()
    {
        DeleteFolder(CACHE_DIR);
    }
    void SaveSupportModel()
    {
        OH_NNBackend_Model* model;
        TestConstructModel(&model);
        std::ofstream ofs(SUPPORTMODELPATH.c_str(), std::ios::out | std::ios::binary);
        if (ofs) {
            ofs.write(reinterpret_cast<char*>(model), sizeof(*model));
            ofs.close();
        }
    }
    //离线模型存在不支持算子
    void SaveNOSupportModel()
    {
        OH_NNBackend_Model *model = OH_NNBackend_ConstructModel();
        ASSERT_NE(nullptr, model);

        AddTopKModel addTopKModel;
        OHNNGraphArgsMulti graphArgsMulti = addTopKModel.graphArgs;
        ASSERT_EQ(OH_NN_SUCCESS, BuildMultiOpGraph(model, graphArgsMulti));

        std::ofstream ofs(NOSUPPORTMODELPATH.c_str(), std::ios::out | std::ios::binary);
        if (ofs) {
            ofs.write(reinterpret_cast<char*>(model), sizeof(*model));
            ofs.close();
        }
    }

    void GetBuffer(std::string filePath, void** buffer, int& cacheSize)
    {
        std::ifstream ifs(filePath.c_str(), std::ios::in | std::ios::binary);
        if (ifs) {
            cacheSize = ifs.tellg();
            ifs.read(*buffer, cacheSize);
            ifs.close();
        }
    }
};

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Construct_Compilation_With_NNModel_0100
 * @tc.desc: 传入nnModel为空指针，返回错误
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreCompilation, SUB_AI_NNRt_Core_Func_North_Construct_Compilation_With_NNModel_0100, Function | MediumTest | Level1)
{
    ASSERT_EQ(nullptr, OH_NNCore_ConstructCompilationWithNNModel(nullptr));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Construct_Compilation_With_NNModel_0200
 * @tc.desc: 传入未完成构图的nnModel，返回错误
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreCompilation, SUB_AI_NNRt_Core_Func_North_Construct_Compilation_With_NNModel_0200, Function | MediumTest | Level1)
{
    OH_NNBackend_Model *model = OH_NNBackend_ConstructModel();
    ASSERT_NE(nullptr, model);
    OH_NNCore_Compilation* compilation = OH_NNCore_ConstructCompilationWithNNModel(reinterpret_cast<const void*>(model));
    ASSERT_NE(nullptr, compilation);
    SetbackendNameOptions(compilation, false);
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Construct_Compilation_With_Offline_Model_0100
 * @tc.desc: 离线模型编译，传入filePath为空指针，返回错误
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreCompilation, SUB_AI_NNRt_Core_Func_North_Construct_Compilation_With_Offline_Model_0100, Function | MediumTest | Level1)
{
    ASSERT_NE(nullptr, OH_NNCore_ConstructCompilationWithOfflineModel(nullptr));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Construct_Compilation_With_Offline_Model_0200
 * @tc.desc: 离线模型编译，传入合法文件，返回不支持
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreCompilation, SUB_AI_NNRt_Core_Func_North_Construct_Compilation_With_Offline_Model_0200, Function | MediumTest | Level1)
{
    const char* filePath = CACHE_PATH;
    OH_NNCore_Compilation* compilation = OH_NNCore_ConstructCompilationWithOfflineModel(filePath);
    ASSERT_NE(nullptr, compilation);
    SetbackendNameOptions(compilation, false);
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Construct_Compilation_With_Offline_Buffer_0100
 * @tc.desc: 传入modelData为空指针，返回错误
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreCompilation, SUB_AI_NNRt_Core_Func_North_Construct_Compilation_With_Offline_Buffer_0100, Function | MediumTest | Level1)
{
    size_t modelSize = MODEL_SIZE;
    ASSERT_EQ(nullptr, OH_NNCore_ConstructCompilationWithOfflineBuffer(nullptr, modelSize));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Construct_Compilation_With_Offline_Buffer_0200
 * @tc.desc: 传入modelData为合法离线模型buffer，返回不支持
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreCompilation, SUB_AI_NNRt_Core_Func_North_Construct_Compilation_With_Offline_Buffer_0200, Function | MediumTest | Level1)
{
    int modelSize = 0;
    void* buffer = nullptr;
    GetBuffer(SUPPORTMODELPATH.c_str(), &buffer, modelSize);
    OH_NNCore_Compilation* compilation = OH_NNCore_ConstructCompilationWithOfflineBuffer(reinterpret_cast<const void*>(buffer), modelSize);
    //不支持
    ASSERT_EQ(nullptr, compilation);
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Create_Compilation_Options_0100
 * @tc.desc: 创建编译option结构体，传入正确的backendName，返回正确
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreCompilation, SUB_AI_NNRt_Core_Func_North_Create_Compilation_Options_0100, Function | MediumTest | Level1)
{
    OH_NNCore_Options* options = nullptr;
    TestCreateOptions(&options);
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Create_Compilation_Options_0200
 * @tc.desc: 创建编译option结构体，backendName为空指针，返回错误
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreCompilation, SUB_AI_NNRt_Core_Func_North_Create_Compilation_Options_0200, Function | MediumTest | Level1)
{
    char* backendName = nullptr;
    ASSERT_EQ(nullptr, OH_NNBackend_CreateOptions(backendName));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Set_Compilation_Priority_0100
 * @tc.desc: 设置编译优先级为低
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreCompilation, SUB_AI_NNRt_Core_Func_North_Set_Compilation_Priority_0100, Function | MediumTest | Level1)
{
    TestSetPriority(OH_NNBACKEND_PRIORITY_LOW);
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Set_Compilation_Priority_0200
 * @tc.desc: 设置编译优先级为中
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreCompilation, SUB_AI_NNRt_Core_Func_North_Set_Compilation_Priority_0200, Function | MediumTest | Level1)
{
    TestSetPriority(OH_NNBACKEND_PRIORITY_MEDIUM);
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Set_Compilation_Priority_0300
 * @tc.desc: 设置编译优先级为高
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreCompilation, SUB_AI_NNRt_Core_Func_North_Set_Compilation_Priority_0300, Function | MediumTest | Level1)
{
    TestSetPriority(OH_NNBACKEND_PRIORITY_HIGH);
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Set_Compilation_Priority_0400
 * @tc.desc: 超出临界值，返回错误
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreCompilation, SUB_AI_NNRt_Core_Func_North_Set_Compilation_Priority_0400, Function | MediumTest | Level1)
{
    TestSetPriority(static_cast<OH_NNBackend_Priority>(OH_NNBACKEND_PRIORITY_HIGH + 1));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Set_Compilation_Performance_Mode_0100
 * @tc.desc: 设置性能模式为extreme
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreCompilation, SUB_AI_NNRt_Core_Func_North_Set_Compilation_Performance_Mode_0100, Function | MediumTest | Level1)
{
    TestPerformanceMode(OH_NNBACKEND_PERFORMANCE_EXTREME);
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Set_Compilation_Performance_Mode_0200
 * @tc.desc: 设置性能模式为high
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreCompilation, SUB_AI_NNRt_Core_Func_North_Set_Compilation_Performance_Mode_0200, Function | MediumTest | Level1)
{
    TestPerformanceMode(OH_NNBACKEND_PERFORMANCE_HIGH);
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Set_Compilation_Performance_Mode_0300
 * @tc.desc: 设置性能模式为medium
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreCompilation, SUB_AI_NNRt_Core_Func_North_Set_Compilation_Performance_Mode_0300, Function | MediumTest | Level1)
{
    TestPerformanceMode(OH_NNBACKEND_PERFORMANCE_MEDIUM);
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Set_Compilation_Performance_Mode_0400
 * @tc.desc: 超出临界值判断
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreCompilation, SUB_AI_NNRt_Core_Func_North_Set_Compilation_Performance_Mode_0400, Function | MediumTest | Level1)
{
    TestPerformanceMode(static_cast<OH_NNBackend_PerformanceMode>(OH_NNBACKEND_PERFORMANCE_EXTREME + 1));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Set_Compilation_Enable_Float16_0100
 * @tc.desc: 设备支持，设置enablefp16为true,编译失败
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreCompilation, SUB_AI_NNRt_Core_Func_North_Set_Compilation_Enable_Float16_0100, Function | MediumTest | Level1)
{
    bool enableFloat16 = true;
    TestSetEnableFloat16(enableFloat16);
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Set_Compilation_Enable_Float16_0200
 * @tc.desc: 设备支持，设置enablefp16为false，编译失败
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreCompilation, SUB_AI_NNRt_Core_Func_North_Set_Compilation_Enable_Float16_0200, Function | MediumTest | Level1)
{
    bool enableFloat16 = false;
    TestSetEnableFloat16(enableFloat16);
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Destroy_Compilation_Options_0100
 * @tc.desc: 销毁compilation_options结构体，传入为空，返回错误
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreCompilation, SUB_AI_NNRt_Core_Func_North_Destroy_Compilation_Options_0100, Function | MediumTest | Level1)
{
    ASSERT_EQ(OH_NNCORE_NULL_PTR, OH_NNBackend_DestroyOptions(nullptr));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Destroy_Compilation_Options_0200
 * @tc.desc: 销毁compilation_options结构体，传入非空，未设置任意option，调用destroy，返回成功
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreCompilation, SUB_AI_NNRt_Core_Func_North_Destroy_Compilation_Options_0200, Function | MediumTest | Level1)
{
    OH_NNCore_Options* options = nullptr;
    TestCreateOptions(&options);
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNBackend_DestroyOptions(&options));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Destroy_Compilation_Options_0300
 * @tc.desc: 销毁compilation_options结构体，传入非空，设置任意option，调用destroy，返回成功
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreCompilation, SUB_AI_NNRt_Core_Func_North_Destroy_Compilation_Options_0300, Function | MediumTest | Level1)
{
    OH_NNCore_Options* options = nullptr;
    TestSetOptions(&options);
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNBackend_DestroyOptions(&options));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_Device_Build_Compilation_0100
 * @tc.desc: 传入compilation为空指针，返回错误
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreCompilation, SUB_AI_NNRt_Core_Func_Device_Build_Compilation_0100, Function | MediumTest | Level1)
{
    OH_NNCore_Compilation* compilation = nullptr;

    const char* backendName = nullptr;
    TestGetBackendName(&backendName);

    OH_NNCore_Options* options = nullptr;
    TestSetAllOptions(&options);

    ASSERT_EQ(nullptr, OH_NNCore_BuildCompilation(compilation, backendName, options));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_Device_Build_Compilation_0200
 * @tc.desc: 传入backendName为空指针，返回错误
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreCompilation, SUB_AI_NNRt_Core_Func_Device_Build_Compilation_0200, Function | MediumTest | Level1)
{
    OH_NNCore_Compilation* compilation = nullptr;
    TestConstructCompilationWithNNModel(&compilation);

    const char* backendName = nullptr;

    OH_NNCore_Options* options = nullptr;
    TestSetAllOptions(&options);

    ASSERT_EQ(nullptr, OH_NNCore_BuildCompilation(compilation, backendName, options));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_Device_Build_Compilation_0300
 * @tc.desc: 传入backendName不存在，返回错误
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreCompilation, SUB_AI_NNRt_Core_Func_Device_Build_Compilation_0300, Function | MediumTest | Level1)
{
    OH_NNCore_Compilation* compilation = nullptr;
    TestConstructCompilationWithNNModel(&compilation);

    const char* backendName = "wrongName";

    OH_NNCore_Options* options = nullptr;
    TestSetAllOptions(&options);

    ASSERT_EQ(nullptr, OH_NNCore_BuildCompilation(compilation, backendName, options));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_Device_Build_Compilation_0400
 * @tc.desc: 传入compilation已完成编译，backendName存在，返回成功
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreCompilation, SUB_AI_NNRt_Core_Func_Device_Build_Compilation_0400, Function | MediumTest | Level1)
{
    OH_NNCore_Compilation* compilation = nullptr;
    TestConstructCompilationWithNNModel(&compilation);

    SetbackendNameOptions(compilation);

    ASSERT_EQ(nullptr, OH_NNCore_BuildCompilation(compilation, backendName, options));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Build_Compilation_0500
 * @tc.desc: 传入Options为空指针，返回错误
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreCompilation, SUB_AI_NNRt_Core_Func_North_Set_Compilation_Options_0200, Function | MediumTest | Level1)
{
    OH_NNCore_Compilation* compilation = nullptr;
    TestConstructCompilationWithNNModel(&compilation);

    char* backendName = nullptr;
    TestGetBackendName(&backendName);

    OH_NNCore_Options* options = nullptr;

    ASSERT_EQ(nullptr, OH_NNCore_BuildCompilation(compilation, backendName, options));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Build_Compilation_0600
 * @tc.desc: nnmodel中，存在不支持算子，编译失败
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreCompilation, SUB_AI_NNRt_Core_Func_North_Build_Compilation_0500, Function | MediumTest | Level1)
{
    OH_NNBackend_Model *model = OH_NNBackend_ConstructModel();
    ASSERT_NE(nullptr, model);
    
    //不支持算子模型
    AddTopKModel addTopKModel;
    OHNNGraphArgsMulti graphArgsMulti = addTopKModel.graphArgs;
    ASSERT_EQ(OH_NN_SUCCESS, BuildMultiOpGraph(model, graphArgsMulti));

    OH_NNCore_Compilation* compilation = OH_NNCore_ConstructCompilationWithNNModel(model);
    ASSERT_NE(nullptr, compilation);
    SetbackendNameOptions(compilation, false);
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Build_Compilation_0700
 * @tc.desc: 传入定长模型nnmode，返回成功
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreCompilation, SUB_AI_NNRt_Core_Func_North_Build_Compilation_0700, Function | MediumTest | Level1)
{
    OH_NNCore_Compilation* compilation = nullptr;
    TestConstructCompilationWithNNModel(&compilation);

    char* backendName = nullptr;
    TestGetBackendName(&backendName);

    OH_NNCore_Options* options = nullptr;
    TestSetAllOptions(&options);

    ASSERT_EQ(nullptr, OH_NNCore_BuildCompilation(compilation, backendName, options));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Build_Compilation_0800
 * @tc.desc: 传入变长模型nnmode，返回成功
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreCompilation, SUB_AI_NNRt_Core_Func_North_Build_Compilation_0800, Function | MediumTest | Level1)
{
    OH_NNCore_Compilation* compilation = nullptr;
    TestConstructCompilationWithDynamicNNModel(&compilation);

    char* backendName = nullptr;
    TestGetBackendName(&backendName);

    OH_NNCore_Options* options = nullptr;
    TestSetAllOptions(&options);

    ASSERT_NE(nullptr, OH_NNCore_BuildCompilation(compilation, backendName, options));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Build_Compilation_0900
 * @tc.desc: offlinemodel，传入filepath为合法离线模型，编译成功
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreCompilation, SUB_AI_NNRt_Core_Func_North_Build_Compilation_0900, Function | MediumTest | Level1)
{
    OH_NNCore_Compilation* compilation = OH_NNCore_ConstructCompilationWithOfflineModel(SUPPORTMODELPATH.c_str());
    ASSERT_NE(nullptr, compilation);

    char* backendName = nullptr;
    TestGetBackendName(&backendName);

    OH_NNCore_Options* options = nullptr;
    TestSetAllOptions(&options);

    ASSERT_NE(nullptr, OH_NNCore_BuildCompilation(compilation, backendName, options));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Build_Compilation_1000
 * @tc.desc: offlinemodel，离线模型存在不支持算子，返回错误
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreCompilation, SUB_AI_NNRt_Core_Func_North_Build_Compilation_1000, Function | MediumTest | Level1)
{
    OH_NNCore_Compilation* compilation = OH_NNCore_ConstructCompilationWithOfflineModel(NOSUPPORTMODELPATH.c_str());
    ASSERT_NE(nullptr, compilation);

    char* backendName = nullptr;
    TestGetBackendName(&backendName);

    OH_NNCore_Options* options = nullptr;
    TestSetAllOptions(&options);

    ASSERT_EQ(nullptr, OH_NNCore_BuildCompilation(compilation, backendName, options));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Build_Compilation_1000
 * @tc.desc: modelBuffer，传入modelData内含不支持算子，返回错误
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreCompilation, SUB_AI_NNRt_Core_Func_North_Build_Compilation_1000, Function | MediumTest | Level1)
{
    int modelSize = 0;
    void* buffer = nullptr;
    GetBuffer(NOSUPPORTMODELPATH.c_str(), &buffer, modelSize);
    OH_NNCore_Compilation* compilation = OH_NNCore_ConstructCompilationWithOfflineBuffer(reinterpret_cast<const void*>(buffer), modelSize);
    ASSERT_NE(nullptr, compilation);

    char* backendName = nullptr;
    TestGetBackendName(&backendName);

    OH_NNCore_Options* options = nullptr;
    TestSetAllOptions(&options);
    ASSERT_EQ(nullptr, OH_NNCore_BuildCompilation(compilation, backendName, options));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Build_Compilation_1100
 * @tc.desc: modelbuffer，传入modelData为合法离线模型buffer，modelSize正确，编译成功
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreCompilation, SUB_AI_NNRt_Core_Func_North_Build_Compilation_1100, Function | MediumTest | Level1)
{
    int modelSize = 0;
    void* buffer = nullptr;
    GetBuffer(SUPPORTMODELPATH.c_str(), &buffer, modelSize);
    OH_NNCore_Compilation* compilation = OH_NNCore_ConstructCompilationWithOfflineBuffer(reinterpret_cast<const void*>(buffer), modelSize);
    ASSERT_NE(nullptr, compilation);

    char* backendName = nullptr;
    TestGetBackendName(&backendName);

    OH_NNCore_Options* options = nullptr;
    TestSetAllOptions(&options);
    ASSERT_NE(nullptr, OH_NNCore_BuildCompilation(compilation, backendName, options));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Destroy_Compilation_0100
 * @tc.desc: 释放编译实例，返回成功
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreCompilation, SUB_AI_NNRt_Core_Func_North_Destroy_Compilation_0100, Function | MediumTest | Level1)
{
    OH_NNCore_Compilation* compilation = nullptr;
    TestConstructCompilationWithNNModel(&compilation);

    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_DestroyCompilation(&compilation));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Destroy_Compilation_0100
 * @tc.desc: compilation为空指针，返回成功
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreCompilation, SUB_AI_NNRt_Core_Func_North_Destroy_Compilation_0100, Function | MediumTest | Level1)
{
    OH_NNCore_Compilation* compilation = nullptr;

    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_DestroyCompilation(&compilation));
}
} // namespace OHOS::NeuralNetworkCore