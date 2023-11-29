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
#include <cmath>
#include <cstdio>
#include <vector>
#include <thread>
#include <fstream>
#include "../nncore_common/hdi_nncore_utils.h"

using namespace testing::ext;

namespace OHOS::NeuralNetworkCore {
static const size_t ZERO = 0;
class HdiNNCoreCompiled : public testing::Test {
    void SetUp()
    {
        CreateFile();
    }
    void TearDown()
    {
        
    }
    void CreateFile()
    {
        //预先存一下model数据到文件内
        OH_NNCore_Compiled* compiled = nullptr;
        TestBuildCompiled(&compiled);
        const char* filePath = "hefa";
        ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_SaveCompiledToFile(compiled, filePath));
    }
    void DeleteFile()
    {
        const char* fileName = "bucunzai.txt";
        if (access(fileName, F_OK) == 0) {
            remove(fileName);
        }

        fileName = "./undir";
        if (access(fileName, F_OK) == 0) {
            remove(fileName);
        }
    }
protected:
    AddModel addModel;
    OHNNGraphArgs graphArgs = addModel.graphArgs;
};

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Device_Save_Compiled_To_File_0200
 * @tc.desc: filePath目录不存在，返回错误
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreCompiled, SUB_AI_NNRt_Core_Func_North_Device_Save_Compiled_To_File_0200, Function | MediumTest | Level1)
{
    OH_NNCore_Compiled* compiled = nullptr;
    TestBuildCompiled(&compiled);
    const char* filePath = "./undir";
    ASSERT_EQ(OH_NNCORE_FAILED, OH_NNCore_SaveCompiledToFile(compiled, filePath));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Device_Save_Compiled_To_File_0300
 * @tc.desc: filePath为空，返回错误
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreCompiled, SUB_AI_NNRt_Core_Func_North_Device_Save_Compiled_To_File_0300, Function | MediumTest | Level1)
{
    OH_NNCore_Compiled* compiled = nullptr;
    TestBuildCompiled(&compiled);
    const char* filePath = "";
    ASSERT_EQ(OH_NNCORE_NULL_PTR, OH_NNCore_SaveCompiledToFile(compiled, filePath));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Device_Save_Compiled_To_File_0400
 * @tc.desc: filePath合法，返回成功
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreCompiled, SUB_AI_NNRt_Core_Func_North_Device_Save_Compiled_To_File_0400, Function | MediumTest | Level1)
{
    OH_NNCore_Compiled* compiled = nullptr;
    TestBuildCompiled(&compiled);
    const char* filePath = "hefa";
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_SaveCompiledToFile(compiled, filePath));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Device_Restore_Compiled_From_File_0100
 * @tc.desc: filePath不存在，返回错误
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreCompiled, SUB_AI_NNRt_Core_Func_North_Device_Restore_Compiled_From_File_0100, Function | MediumTest | Level1)
{
    const char* filePath = "bucunzai";

    OH_NNCore_Options* options = nullptr;
    TestSetAllOptions(&options);
    const char* backendName = nullptr;
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_GetBackendName(0, &backendName));
    OH_NNCore_Compiled* compiled = nullptr;
    ASSERT_EQ(OH_NNCORE_FAILED, OH_NNCore_RestoreCompiledFromFile(filePath, backendName, options, &compiled));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Device_Restore_Compiled_From_File_0200
 * @tc.desc: filePath非空，backName不存在，返回错误
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreCompiled, SUB_AI_NNRt_Core_Func_North_Device_Restore_Compiled_From_File_0200, Function | MediumTest | Level1)
{
    const char* filePath = "hefa";
    const char* backendName1 = "nnrt_backend";
    
    OH_NNCore_Compilation* compilation = nullptr;
    TestConstructCompilationWithNNModel(&compilation);

    OH_NNCore_Options* options = nullptr;
    TestSetAllOptions(&options);
    const char* backendName = nullptr;
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_GetBackendName(0, &backendName));

    OH_NNCore_Compiled* compiled = OH_NNCore_BuildCompilation(compilation, backendName, options);
    ASSERT_NE(nullptr, compiled);
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_SaveCompiledToFile(compiled, filePath));

    ASSERT_EQ(OH_NNCORE_FAILED, OH_NNCore_RestoreCompiledFromFile(filePath, backendName1, options, &compiled));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Device_Restore_Compiled_From_File_0400
 * @tc.desc: filePath存在，compileFile文件不兼容，返回错误
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreCompiled, SUB_AI_NNRt_Core_Func_North_Device_Restore_Compiled_From_File_0400, Function | MediumTest | Level1)
{
    const char* filePath = "hefa";
    
    OH_NNCore_Compilation* compilation = nullptr;
    TestConstructCompilationWithNNModel(&compilation);

    OH_NNCore_Options* options = nullptr;
    TestSetAllOptions(&options);
    const char* backendName = nullptr;
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_GetBackendName(0, &backendName));

    OH_NNCore_Compiled* compiled = OH_NNCore_BuildCompilation(compilation, backendName, options);
    ASSERT_NE(nullptr, compiled);
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_SaveCompiledToFile(compiled, filePath));

    std::ifstream ifs(filePath, std::ios::in | std::ios::binary);
    char* ptr{nullptr};
    int fileSize = ifs.tellg();
    int invalidfileSize = fileSize * 0.9;
    ifs.read(ptr, fileSize);
    ifs.close();
    std::ofstream ofs(filePath, std::ios::out | std::ios::binary);
    ofs.write(ptr, invalidfileSize);
    ofs.close();

    OH_NNCore_Compiled* compiled1 = nullptr;
    ASSERT_EQ(OH_NNCORE_FAILED, OH_NNCore_RestoreCompiledFromFile(filePath, backendName, options, &compiled1));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Device_Restore_Compiled_From_File_0500
 * @tc.desc: filePath合法，backendName合法，返回成功
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreCompiled, SUB_AI_NNRt_Core_Func_North_Device_Restore_Compiled_From_File_0500, Function | MediumTest | Level1)
{
    const char* filePath = "hefa";
    
    OH_NNCore_Compilation* compilation = nullptr;
    TestConstructCompilationWithNNModel(&compilation);

    OH_NNCore_Options* options = nullptr;
    TestSetAllOptions(&options);
    const char* backendName = nullptr;
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_GetBackendName(0, &backendName));

    OH_NNCore_Compiled* compiled = OH_NNCore_BuildCompilation(compilation, backendName, options);
    ASSERT_NE(nullptr, compiled);
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_SaveCompiledToFile(compiled, filePath));
    ASSERT_EQ(OH_NNCORE_FAILED, OH_NNCore_RestoreCompiledFromFile(filePath, backendName, options, &compiled));
    ASSERT_NE(nullptr, compiled);
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Device_Save_Compiled_To_Buffer_0100
 * @tc.desc: 传入空指针返回失败
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreCompiled, SUB_AI_NNRt_Core_Func_North_Device_Save_Compiled_To_Buffer_0100, Function | MediumTest | Level1)
{
    OH_NNCore_Compiled* compiled = nullptr;
    TestBuildCompiled(&compiled);
    const void* buffer = nullptr;
    size_t length = 0;
    size_t modelSize = 1;
    ASSERT_EQ(OH_NNCORE_NULL_PTR, OH_NNCore_SaveCompiledToBuffer(compiled, buffer, length, &modelSize));        
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Device_Save_Compiled_To_Buffer_0200
 * @tc.desc: 保存模型到buffer，nnrt模型返回不支持
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreCompiled, SUB_AI_NNRt_Core_Func_North_Device_Save_Compiled_To_Buffer_0200, Function | MediumTest | Level1)
{
    OH_NNCore_Compiled* compiled = nullptr;
    TestBuildCompiled(&compiled);
    const char* stringBuffer = "123456789";
    const void* buffer = reinterpret_cast<const void*>(stringBuffer);
    size_t modelSize = 10;
    ASSERT_EQ(OH_NNCORE_UNSUPPORTED, OH_NNCore_SaveCompiledToBuffer(compiled, buffer, graphArgs.operands[0].length, &modelSize));          
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Device_Restore_Compiled_From_Buffer_0100
 * @tc.desc: 读取buffer中的编译体，nnrt模型返回不支持
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreCompiled, SUB_AI_NNRt_Core_Func_North_Device_Restore_Compiled_From_Buffer_0100, Function | MediumTest | Level1)
{
    const char* stringBuffer = "123456789";
    const void* buffer = reinterpret_cast<const void*>(stringBuffer);
    size_t modelSize = 10;
    const char* backendName = "backend";
    OH_NNCore_Options* options = nullptr;
    TestSetAllOptions(&options);
    OH_NNCore_Compiled* compiled = nullptr;
    ASSERT_EQ(OH_NNCORE_UNSUPPORTED, OH_NNCore_RestoreCompiledFromBuffer(buffer, modelSize, backendName, options, &compiled));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Device_GetCompiled_Input_Count_0100
 * @tc.desc: 传入空指针，返回失败
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreCompiled, SUB_AI_NNRt_Core_Func_North_Device_GetCompiled_Input_Count_0100, Function | MediumTest | Level1)
{
    OH_NNCore_Compiled* compiled = nullptr;

    size_t count = ZERO;
    ASSERT_EQ(OH_NNCORE_NULL_PTR, OH_NNCore_GetCompiledInputNum(compiled, &count));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Device_GetCompiled_Input_Count_0100
 * @tc.desc: 获取输入数量，检查输入数量正确
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreCompiled, SUB_AI_NNRt_Core_Func_North_Device_GetCompiled_Input_Count_0200, Function | MediumTest | Level1)
{
    OH_NNCore_Compiled* compiled = nullptr;
    TestBuildCompiled(&compiled);

    size_t count = ZERO;
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_GetCompiledInputNum(compiled, &count));
    ASSERT_LT(ZERO, count);
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Device_GetCompiled_Input_Description_0100
 * @tc.desc: 获取输入描述，传空指针，返回错误
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreCompiled, SUB_AI_NNRt_Core_Func_North_Device_GetCompiled_Input_Description_0100, Function | MediumTest | Level1)
{
    OH_NNCore_Compiled* compiled = nullptr;
    OH_NNCore_TensorDesc* tensorDesc = nullptr;
    ASSERT_EQ(OH_NNCORE_NULL_PTR, OH_NNCore_GetCompiledInputDesc(compiled, ZERO, &tensorDesc));
    
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Device_GetCompiled_Input_Description_0200
 * @tc.desc: 合法参数，检查输入描述正确
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreCompiled, SUB_AI_NNRt_Core_Func_North_Device_GetCompiled_Input_Description_0200, Function | MediumTest | Level1)
{
    OH_NNCore_Compiled* compiled = nullptr;
    TestBuildCompiled(&compiled);
    size_t count = ZERO;
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_GetCompiledInputNum(compiled, &count));
    ASSERT_LT(ZERO, count);

    OH_NNCore_TensorDesc* tensorDesc = nullptr;
    for (size_t i = 0; i < count; ++i) {
        tensorDesc = nullptr;
        ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_GetCompiledInputDesc(compiled, i, &tensorDesc));
    }
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Device_GetCompiled_Input_Description_0300
 * @tc.desc: index等于input数量，返回错误
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreCompiled, SUB_AI_NNRt_Core_Func_North_Device_GetCompiled_Input_Description_0300, Function | MediumTest | Level1)
{
    OH_NNCore_Compiled* compiled = nullptr;
    TestBuildCompiled(&compiled);
    size_t count = ZERO;
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_GetCompiledInputNum(compiled, &count));
    ASSERT_LT(ZERO, count);

    OH_NNCore_TensorDesc* tensorDesc = nullptr;
    ASSERT_EQ(OH_NNCORE_INVALID_PARAMETER, OH_NNCore_GetCompiledInputDesc(compiled, count, &tensorDesc));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Device_GetCompiled_Output_Count_0100
 * @tc.desc: 获取输出数量，compiled为空指针，返回错误
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreCompiled, SUB_AI_NNRt_Core_Func_North_Device_GetCompiled_Output_Count_0100, Function | MediumTest | Level1)
{
    const OH_NNCore_Compiled* compiled = nullptr;
    size_t count = 0;
    ASSERT_EQ(OH_NNCORE_NULL_PTR, OH_NNCore_GetCompiledOutputNum(compiled, &count));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Device_GetCompiled_Output_Count_0200
 * @tc.desc: 获取输出数量，compiled非空，检查所有output数量，返回成功
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreCompiled, SUB_AI_NNRt_Core_Func_North_Device_GetCompiled_Output_Count_0200, Function | MediumTest | Level1)
{
    OH_NNCore_Compiled* compiled = nullptr;
    TestBuildCompiled(&compiled);
    size_t count = 0;

    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_GetCompiledOutputNum(compiled, &count));
    ASSERT_LT(0, count);
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Device_GetCompiled_Output_Desc_0100
 * @tc.desc: 输出描述，compiled空指针，返回错误
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreCompiled, SUB_AI_NNRt_Core_Func_North_Device_GetCompiled_Output_Desc_0100, Function | MediumTest | Level1)
{
    OH_NNCore_Compiled* compiled = nullptr;
    size_t index = 0;
    OH_NNCore_TensorDesc* tensorDesc = nullptr;
    ASSERT_EQ(OH_NNCORE_NULL_PTR, OH_NNCore_GetCompiledOutputDesc(compiled, index, &tensorDesc));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Device_GetCompiled_Output_Desc_0200
 * @tc.desc: 输出描述，index等于output数量，返回错误
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreCompiled, SUB_AI_NNRt_Core_Func_North_Device_GetCompiled_Output_Desc_0200, Function | MediumTest | Level1)
{
    OH_NNCore_Compiled* compiled = nullptr;
    TestBuildCompiled(&compiled);

    size_t count = ZERO;
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_GetCompiledOutputNum(compiled, &count));
    ASSERT_LT(ZERO, count);
    
    OH_NNCore_TensorDesc* tensorDesc = nullptr;
    ASSERT_EQ(OH_NNCORE_INVALID_PARAMETER, OH_NNCore_GetCompiledOutputDesc(compiled, count, &tensorDesc));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Device_GetCompiled_Output_Desc_0300
 * @tc.desc: 输出描述，获取所有output描述，返回成功
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreCompiled, SUB_AI_NNRt_Core_Func_North_Device_GetCompiled_Output_Desc_0300, Function | MediumTest | Level1)
{
    OH_NNCore_Compiled* compiled = nullptr;
    TestBuildCompiled(&compiled);

    size_t count = ZERO;
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_GetCompiledOutputNum(compiled, &count));
    ASSERT_LT(ZERO, count);

    OH_NNCore_TensorDesc* tensorDesc = nullptr;
    for(size_t index = 0; index < count; index++) {
        tensorDesc = nullptr;
        ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_GetCompiledOutputDesc(compiled, index, &tensorDesc));
    }
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Device_SetCompiled_Options_0100
 * @tc.desc: 无cache，设置cache版本=1，设置成功，生成cache文件
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreCompiled, SUB_AI_NNRt_Core_Func_North_Device_SetCompiled_Options_0100, Function | MediumTest | Level1)
{
    OH_NNCore_Compiled* compiled = nullptr;
    TestBuildCompiled(&compiled);

    const char* backendName = nullptr;
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_GetBackendName(0, &backendName));
    OH_NNCore_Options* options = OH_NNCore_CreateOptions(backendName);
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNBackend_SetCacheVersion(options, 1));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Device_SetCompiled_Options_0200
 * @tc.desc: 有cache，设置cache版本=1，版本号小于现有cache，返回报错
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreCompiled, SUB_AI_NNRt_Core_Func_North_Device_SetCompiled_Options_0200, Function | MediumTest | Level1)
{
    OH_NNCore_Compiled* compiled = nullptr;
    TestBuildCompiled(&compiled);

    const char* backendName = nullptr;
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_GetBackendName(0, &backendName));
    OH_NNCore_Options* options = OH_NNCore_CreateOptions(backendName);
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNBackend_SetCacheVersion(options, 10));

    const char* filePath = "hefa";
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_SaveCompiledToFile(compiled, filePath));
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNBackend_SetCacheVersion(options, 1));
    ASSERT_EQ(OH_NNCORE_FAILED, OH_NNCore_SaveCompiledToFile(compiled, filePath));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Device_SetCompiled_Options_0300
 * @tc.desc: 有cache，版本号相等，加载现有cache，返回成功
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreCompiled, SUB_AI_NNRt_Core_Func_North_Device_SetCompiled_Options_0300, Function | MediumTest | Level1)
{
    OH_NNCore_Compiled* compiled = nullptr;
    TestBuildCompiled(&compiled);

    const char* backendName = nullptr;
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_GetBackendName(0, &backendName));
    OH_NNCore_Options* options = OH_NNCore_CreateOptions(backendName);
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNBackend_SetCacheVersion(options, 10));
    const char* filePath = "hefa";
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_SaveCompiledToFile(compiled, filePath));
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNBackend_SetCacheVersion(options, 10));
    ASSERT_EQ(OH_NNCORE_FAILED, OH_NNCore_SaveCompiledToFile(compiled, filePath));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Device_SetCompiled_Options_0400
 * @tc.desc: 有cache，版本号大于现有cache，加载现有cache，返回成功
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreCompiled, SUB_AI_NNRt_Core_Func_North_Device_SetCompiled_Options_0400, Function | MediumTest | Level1)
{
    OH_NNCore_Compiled* compiled = nullptr;
    TestBuildCompiled(&compiled);

    const char* backendName = nullptr;
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_GetBackendName(0, &backendName));
    OH_NNCore_Options* options = OH_NNCore_CreateOptions(backendName);
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNBackend_SetCacheVersion(options, 10));
    const char* filePath = "hefa";
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_SaveCompiledToFile(compiled, filePath));
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNBackend_SetCacheVersion(options, 11));
    ASSERT_EQ(OH_NNCORE_FAILED, OH_NNCore_SaveCompiledToFile(compiled, filePath));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Device_SetCompiled_Options_0500
 * @tc.desc: 有cache，设置cache版本=1，版本号小于现有cache，加载失败
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreCompiled, SUB_AI_NNRt_Core_Func_North_Device_SetCompiled_Options_0500, Function | MediumTest | Level1)
{
    OH_NNCore_Compilation* compilation = nullptr;
    TestConstructCompilationWithNNModel(&compilation);

    OH_NNCore_Options* options = nullptr;
    TestSetAllOptions(&options);
    const char* backendName = nullptr;
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_GetBackendName(0, &backendName));

    OH_NNCore_Compiled* compiled = OH_NNCore_BuildCompilation(compilation, backendName, options);
    ASSERT_NE(nullptr, compiled);
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNBackend_SetCacheVersion(options, 10));
    const char* filePath = "hefa";
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_SaveCompiledToFile(compiled, filePath));
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNBackend_SetCacheVersion(options, 1));
    ASSERT_EQ(OH_NNCORE_FAILED, OH_NNCore_RestoreCompiledFromFile(filePath, backendName, options, &compiled));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Device_SetCompiled_Options_0600
 * @tc.desc: 有cache，版本号相等，加载成功
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreCompiled, SUB_AI_NNRt_Core_Func_North_Device_SetCompiled_Options_0600, Function | MediumTest | Level1)
{
    OH_NNCore_Compilation* compilation = nullptr;
    TestConstructCompilationWithNNModel(&compilation);

    OH_NNCore_Options* options = nullptr;
    TestSetAllOptions(&options);
    const char* backendName = nullptr;
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_GetBackendName(0, &backendName));

    OH_NNCore_Compiled* compiled = OH_NNCore_BuildCompilation(compilation, backendName, options);
    ASSERT_NE(nullptr, compiled);
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNBackend_SetCacheVersion(options, 10));
    const char* filePath = "hefa";
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_SaveCompiledToFile(compiled, filePath));
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNBackend_SetCacheVersion(options, 10));
    ASSERT_EQ(OH_NNCORE_FAILED, OH_NNCore_RestoreCompiledFromFile(filePath, backendName, options, &compiled));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Device_SetCompiled_Options_0700
 * @tc.desc: 有cache，版本号大于现有cache，加载失败
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreCompiled, SUB_AI_NNRt_Core_Func_North_Device_SetCompiled_Options_0700, Function | MediumTest | Level1)
{
    OH_NNCore_Compilation* compilation = nullptr;
    TestConstructCompilationWithNNModel(&compilation);

    OH_NNCore_Options* options = nullptr;
    TestSetAllOptions(&options);
    const char* backendName = nullptr;
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_GetBackendName(0, &backendName));

    OH_NNCore_Compiled* compiled = OH_NNCore_BuildCompilation(compilation, backendName, options);
    ASSERT_NE(nullptr, compiled);
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNBackend_SetCacheVersion(options, 10));
    const char* filePath = "./";
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_SaveCompiledToFile(compiled, filePath));
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNBackend_SetCacheVersion(options, 11));
    ASSERT_EQ(OH_NNCORE_FAILED, OH_NNCore_RestoreCompiledFromFile(filePath, backendName, options, &compiled));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Device_Destroy_Compiled_0100
 * @tc.desc: 释放编译实例，返回成功
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreCompiled, SUB_AI_NNRt_Core_Func_North_Device_Destroy_Compiled_0100, Function | MediumTest | Level1)
{   
    OH_NNCore_Compiled* compiled = nullptr;
    TestBuildCompiled(&compiled);

    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_DestroyCompiled(&compiled));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Device_Destroy_Compiled_0200
 * @tc.desc: compiled已释放，返回失败
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreCompiled, SUB_AI_NNRt_Core_Func_North_Device_Destroy_Compiled_0200, Function | MediumTest | Level1)
{
    OH_NNCore_Compiled* compiled = nullptr;
    TestBuildCompiled(&compiled);

    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_DestroyCompiled(&compiled));

    ASSERT_EQ(OH_NNCORE_INVALID_PARAMETER, OH_NNCore_DestroyCompiled(&compiled));
}
} // namespace OHOS::NeuralNetworkCore