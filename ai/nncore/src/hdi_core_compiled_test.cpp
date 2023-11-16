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

namespace OHOS::NeuralNetworkCore {
class HdiNNCoreCompiled : public testing::Test {};

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Device_Save_Compiled_To_File_0100
 * @tc.desc: compilation未完成build编译，返回错误
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreCompiled, SUB_AI_NNRt_Core_Func_North_Device_Save_Compiled_To_File_0100, Function | MediumTest | Level1)
{
    const OH_NNCore_Compiled* compiled = nullptr;
    const char* filePath = "hefa.txt";
    ASSERT_EQ(OH_NNCORE_FAILED, OH_NNCore_SaveCompiledToFile(compiled, filePath));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Device_Save_Compiled_To_File_0200
 * @tc.desc: filePath不存在，返回错误
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreCompiled, SUB_AI_NNRt_Core_Func_North_Device_Save_Compiled_To_File_0200, Function | MediumTest | Level1)
{
    OH_NNCore_Compiled* compiled = nullptr;
    TestBuildCompiled(&compiled);
    const char* filePath = "bucunzai.txt";
    ASSERT_EQ(OH_NNCORE_FAILED, OH_NNCore_SaveCompiledToFile(compiled, filePath));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Device_Save_Compiled_To_File_0300
 * @tc.desc: filePath非空，返回错误
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreCompiled, SUB_AI_NNRt_Core_Func_North_Device_Save_Compiled_To_File_0300, Function | MediumTest | Level1)
{
    OH_NNCore_Compiled* compiled = nullptr;
    TestBuildCompiled(&compiled);
    const char* filePath = "buunzai.abc";
    ASSERT_EQ(OH_NNCORE_FAILED, OH_NNCore_SaveCompiledToFile(compiled, filePath));
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
    const char* filePath = "hefa.txt";
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_SaveCompiledToFile(compiled, filePath));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Device_Restore_Compiled_From_File_0100
 * @tc.desc: filePath不存在，返回错误
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreCompiled, SUB_AI_NNRt_Core_Func_North_Device_Restore_Compiled_From_File_0100, Function | MediumTest | Level1)
{
    const char* filePath = "bucunzai.txt";
    char* backendName = nullptr;
    TestGetBackendName(&backendName);

    OH_NNCore_Compiled* compiled = nullptr;
    ASSERT_EQ(OH_NNCORE_INVALID_PARAMETER, OH_NNCore_RestoreCompiledFromFile(filePath, backendName, &compiled));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Device_Restore_Compiled_From_File_0200
 * @tc.desc: filePath非空，backendName不存在，返回错误
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreCompiled, SUB_AI_NNRt_Core_Func_North_Device_Restore_Compiled_From_File_0200, Function | MediumTest | Level1)
{
    const char* filePath = "cunzai.txt";
    const char* backendName = "nnrt_backend";
    OH_NNCore_Compiled* compiled = nullptr;

    ASSERT_EQ(OH_NNCORE_INVALID_PARAMETER, OH_NNCore_RestoreCompiledFromFile(filePath, backendName, &compiled));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Device_Restore_Compiled_From_File_0300
 * @tc.desc: filePath存在，compileFile文件非法（其他类型不支持格式文件），返回错误
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreCompiled, SUB_AI_NNRt_Core_Func_North_Device_Restore_Compiled_From_File_0300, Function | MediumTest | Level1)
{
    const char* filePath = "cunzai.abc";
    char* backendName = nullptr;
    TestGetBackendName(&backendName);

    OH_NNCore_Compiled* compiled = nullptr;
    ASSERT_EQ(OH_NNCORE_INVALID_PARAMETER, OH_NNCore_RestoreCompiledFromFile(filePath, backendName, &compiled));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Device_Restore_Compiled_From_File_0400
 * @tc.desc: filePath存在，compileFile文件不兼容，返回错误
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreCompiled, SUB_AI_NNRt_Core_Func_North_Device_Restore_Compiled_From_File_0400, Function | MediumTest | Level1)
{

}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Device_Restore_Compiled_From_File_0500
 * @tc.desc: filePath合法，backendName合法，返回成功
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreCompiled, SUB_AI_NNRt_Core_Func_North_Device_Restore_Compiled_From_File_0500, Function | MediumTest | Level1)
{
    const char* filePath = "hefa.txt";
    char* backendName = nullptr;
    TestGetBackendName(&backendName);

    OH_NNCore_Compiled* compiled = nullptr;
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_RestoreCompiledFromFile(filePath, backendName, &compiled));
    ASSERT_NE(nullptr, compiled);
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Device_SaveCompiled_To_Buffer_0100
 * @tc.desc: 保存模型到buffer，nnrt模型返回不支持
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreCompiled, SUB_AI_NNRt_Core_Func_North_Device_SaveCompiled_To_Buffer_0100, Function | MediumTest | Level1)
{
    OH_NNCore_Compiled* compiled = nullptr;
    TestBuildCompiled(&compiled);
    const void* buffer = nullptr;
    size_t length = 0;
    size_t* modelSize = nullptr;
    ASSERT_EQ(OH_NNCORE_UNSUPPORTED, OH_NNCore_Save_Compiled_To_Buffer(compiled, buffer, length, modelSize));          
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
    OH_NNCore_Compiled* compiled = nullptr;
    ASSERT_EQ(OH_NNCORE_UNSUPPORTED, OH_NNCore_RestoreCompiledFromBuffer(buffer, modelSize, backendName, &compiled));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Device_GetCompiled_Input_Count_0100
 * @tc.desc: 获取输入数量
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreCompiled, SUB_AI_NNRt_Core_Func_North_Device_GetCompiled_Input_Count_0100, Function | MediumTest | Level1)
{
    OH_NNCore_Compiled* compiled = nullptr;
    TestBuildCompiled(&compiled);

    size_t count = 0;
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_GetCompiledInputCount(compiled, &count));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Device_GetCompiled_Input_Description_0100
 * @tc.desc: 获取输入描述
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreCompiled, SUB_AI_NNRt_Core_Func_North_Device_GetCompiled_Input_Description_0100, Function | MediumTest | Level1)
{
    OH_NNCore_Compiled* compiled = nullptr;
    TestBuildCompiled(&compiled);
    size_t index = 10;
    OH_NNCore_TensorDesc* tensorDesc = nullptr;
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_GetCompiledInputDesc(compiled, index, &tensorDesc));
    ASSERT_NE(nullptr, tensorDesc);
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
    ASSERT_EQ(OH_NNCORE_NULL_PTR, OH_NNCore_GetCompiledOutputCount(compiled, &count));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Device_GetCompiled_Output_Count_0100
 * @tc.desc: 获取输出数量，compiled非空，检查output数量，返回成功
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreCompiled, SUB_AI_NNRt_Core_Func_North_Device_GetCompiled_Output_Count_0100, Function | MediumTest | Level1)
{
    OH_NNCore_Compiled* compiled = nullptr;
    TestBuildCompiled(&compiled);
    size_t count = 0;

    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_GetCompiledOutputCount(compiled, &count));
    ASSERT_LT(0, count);
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Device_GetCompiled_Output_Desc_0100
 * @tc.desc: 输出描述，compiled空指针，返回错误
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreCompiled, SUB_AI_NNRt_Core_Func_North_Device_GetCompiled_Output_Count_0100, Function | MediumTest | Level1)
{
    OH_NNCore_Compiled* compiled = nullptr;
    size_t index = 0;
    OH_NNCore_TensorDesc* tensorDesc = nullptr;
    ASSERT_EQ(OH_NNCORE_NULL_PTR, OH_NNCore_GetCompiledOutputDesc(compiled, index, &tensorDesc));
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Device_GetCompiled_Output_Desc_0200
 * @tc.desc: 输出描述，index大于output数量，返回错误
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreCompiled, SUB_AI_NNRt_Core_Func_North_Device_GetCompiled_Output_Desc_0200, Function | MediumTest | Level1)
{
    OH_NNCore_Compiled* compiled = nullptr;
    TestBuildCompiled(&compiled);

    size_t count = 0;
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_GetCompiledOutputCount(compiled, &count));
    ASSERT_LT(0, count);
    
    size_t index = count + 1;
    OH_NNCore_TensorDesc* tensorDesc = nullptr;
    ASSERT_EQ(OH_NNCORE_INVALID_PARAMETER, OH_NNCore_GetCompiledOutputDesc(compiled, index, &tensorDesc));
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

    size_t count = 0;
    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_GetCompiledOutputCount(compiled, &count));
    ASSERT_LT(0, count);

    OH_NNCore_TensorDesc* tensorDesc = nullptr;
    for(size_t index = 0; index < count; index++) {
        tensorDesc = nullptr;
        ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_GetCompiledOutputDesc(compiled, index, &tensorDesc));
    }
}

/**
 * @tc.name: SUB_AI_NNRt_Core_Func_North_Device_SetCompiled_Options_0100
 * @tc.desc: 设置compiled选项
 * @tc.type: FUNC
 */
HWTEST_F(HdiNNCoreCompiled, SUB_AI_NNRt_Core_Func_North_Device_SetCompiled_Options_0100, Function | MediumTest | Level1)
{
    OH_NNCore_Compiled* compiled = nullptr;
    TestBuildCompiled(&compiled);

    OH_NNCore_CompilationOptions* options = nullptr;
    TestSetCompilationOptions(&options);

    ASSERT_EQ(OH_NNCORE_SUCCESS, OH_NNCore_SetCompiledOptions(compiled, options));
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