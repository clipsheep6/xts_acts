/*
 * Copyright (c) 2022 Shenzhen Kaihong Digital Industry Development Co., Ltd.
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

#include <climits>
#include <gtest/gtest.h>
#include "../Khrgles32BaseFunc.h"
#include "../ActsKhrgles320001TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000244, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000244 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "KHR-GLES32.core.texture"
        "_cube_map_array.sampling",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsKhrgles320001TestSuite::runResult.numPassed += result.numPassed;
    ActsKhrgles320001TestSuite::runResult.numFailed += result.numFailed;
    ActsKhrgles320001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsKhrgles320001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsKhrgles320001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000244 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000244 end";
}

static HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000245, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000245 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "KHR-GLES32.core.texture_cube_ma"
        "p_array.color_depth_attachments",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsKhrgles320001TestSuite::runResult.numPassed += result.numPassed;
    ActsKhrgles320001TestSuite::runResult.numFailed += result.numFailed;
    ActsKhrgles320001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsKhrgles320001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsKhrgles320001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000245 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000245 end";
}

static HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000246, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000246 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "KHR-GLES32.core.texture_cube_map_array"
        ".stencil_attachments_mutable_nonlayered",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsKhrgles320001TestSuite::runResult.numPassed += result.numPassed;
    ActsKhrgles320001TestSuite::runResult.numFailed += result.numFailed;
    ActsKhrgles320001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsKhrgles320001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsKhrgles320001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000246 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000246 end";
}

static HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000247, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000247 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "KHR-GLES32.core.texture_cube_map_arra"
        "y.stencil_attachments_mutable_layered",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsKhrgles320001TestSuite::runResult.numPassed += result.numPassed;
    ActsKhrgles320001TestSuite::runResult.numFailed += result.numFailed;
    ActsKhrgles320001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsKhrgles320001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsKhrgles320001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000247 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000247 end";
}

static HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000248, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000248 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "KHR-GLES32.core.texture_cube_map_array."
        "stencil_attachments_immutable_nonlayered",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsKhrgles320001TestSuite::runResult.numPassed += result.numPassed;
    ActsKhrgles320001TestSuite::runResult.numFailed += result.numFailed;
    ActsKhrgles320001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsKhrgles320001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsKhrgles320001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000248 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000248 end";
}

static HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000249, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000249 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "KHR-GLES32.core.texture_cube_map_array"
        ".stencil_attachments_immutable_layered",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsKhrgles320001TestSuite::runResult.numPassed += result.numPassed;
    ActsKhrgles320001TestSuite::runResult.numFailed += result.numFailed;
    ActsKhrgles320001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsKhrgles320001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsKhrgles320001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000249 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000249 end";
}

static HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000250, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000250 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "KHR-GLES32.core.texture_cub"
        "e_map_array.tex3D_validation",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsKhrgles320001TestSuite::runResult.numPassed += result.numPassed;
    ActsKhrgles320001TestSuite::runResult.numFailed += result.numFailed;
    ActsKhrgles320001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsKhrgles320001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsKhrgles320001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000250 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000250 end";
}

static HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000251, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000251 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "KHR-GLES32.core.texture_"
        "cube_map_array.subimage3D",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsKhrgles320001TestSuite::runResult.numPassed += result.numPassed;
    ActsKhrgles320001TestSuite::runResult.numFailed += result.numFailed;
    ActsKhrgles320001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsKhrgles320001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsKhrgles320001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000251 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000251 end";
}

static HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000252, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000252 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "KHR-GLES32.core.texture_c"
        "ube_map_array.getter_calls",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsKhrgles320001TestSuite::runResult.numPassed += result.numPassed;
    ActsKhrgles320001TestSuite::runResult.numFailed += result.numFailed;
    ActsKhrgles320001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsKhrgles320001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsKhrgles320001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000252 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000252 end";
}

static HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000253, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000253 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "KHR-GLES32.core.texture_cube_map_array.gener"
        "ate_mip_map_filterable_internalformat_mutable",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsKhrgles320001TestSuite::runResult.numPassed += result.numPassed;
    ActsKhrgles320001TestSuite::runResult.numFailed += result.numFailed;
    ActsKhrgles320001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsKhrgles320001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsKhrgles320001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000253 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000253 end";
}

static HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000254, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000254 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "KHR-GLES32.core.texture_cube_map_array.genera"
        "te_mip_map_filterable_internalformat_immutable",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsKhrgles320001TestSuite::runResult.numPassed += result.numPassed;
    ActsKhrgles320001TestSuite::runResult.numFailed += result.numFailed;
    ActsKhrgles320001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsKhrgles320001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsKhrgles320001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000254 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000254 end";
}

static HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000255, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000255 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "KHR-GLES32.core.texture_cube_map_array.gene"
        "rate_mip_map_non_filterable_mutable_storage",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsKhrgles320001TestSuite::runResult.numPassed += result.numPassed;
    ActsKhrgles320001TestSuite::runResult.numFailed += result.numFailed;
    ActsKhrgles320001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsKhrgles320001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsKhrgles320001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000255 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000255 end";
}

static HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000256, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000256 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "KHR-GLES32.core.texture_cube_map_array.gener"
        "ate_mip_map_non_filterable_immutable_storage",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsKhrgles320001TestSuite::runResult.numPassed += result.numPassed;
    ActsKhrgles320001TestSuite::runResult.numFailed += result.numFailed;
    ActsKhrgles320001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsKhrgles320001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsKhrgles320001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000256 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000256 end";
}

static HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000257, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000257 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "KHR-GLES32.core.texture_cube_"
        "map_array.image_op_compute_sh",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsKhrgles320001TestSuite::runResult.numPassed += result.numPassed;
    ActsKhrgles320001TestSuite::runResult.numFailed += result.numFailed;
    ActsKhrgles320001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsKhrgles320001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsKhrgles320001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000257 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000257 end";
}

static HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000258, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000258 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "KHR-GLES32.core.texture_cube"
        "_map_array.image_op_vertex_sh",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsKhrgles320001TestSuite::runResult.numPassed += result.numPassed;
    ActsKhrgles320001TestSuite::runResult.numFailed += result.numFailed;
    ActsKhrgles320001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsKhrgles320001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsKhrgles320001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000258 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000258 end";
}

static HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000259, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000259 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "KHR-GLES32.core.texture_cube_"
        "map_array.image_op_fragment_sh",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsKhrgles320001TestSuite::runResult.numPassed += result.numPassed;
    ActsKhrgles320001TestSuite::runResult.numFailed += result.numFailed;
    ActsKhrgles320001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsKhrgles320001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsKhrgles320001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000259 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000259 end";
}

static HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000260, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000260 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "KHR-GLES32.core.texture_cube_"
        "map_array.image_op_geometry_sh",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsKhrgles320001TestSuite::runResult.numPassed += result.numPassed;
    ActsKhrgles320001TestSuite::runResult.numFailed += result.numFailed;
    ActsKhrgles320001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsKhrgles320001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsKhrgles320001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000260 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000260 end";
}

static HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000261, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000261 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "KHR-GLES32.core.texture_cube_map_ar"
        "ray.image_op_tessellation_control_sh",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsKhrgles320001TestSuite::runResult.numPassed += result.numPassed;
    ActsKhrgles320001TestSuite::runResult.numFailed += result.numFailed;
    ActsKhrgles320001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsKhrgles320001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsKhrgles320001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000261 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000261 end";
}

static HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000262, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000262 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "KHR-GLES32.core.texture_cube_map_arra"
        "y.image_op_tessellation_evaluation_sh",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsKhrgles320001TestSuite::runResult.numPassed += result.numPassed;
    ActsKhrgles320001TestSuite::runResult.numFailed += result.numFailed;
    ActsKhrgles320001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsKhrgles320001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsKhrgles320001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000262 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000262 end";
}

static HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000263, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000263 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "KHR-GLES32.core.texture_cube"
        "_map_array.fbo_incompleteness",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsKhrgles320001TestSuite::runResult.numPassed += result.numPassed;
    ActsKhrgles320001TestSuite::runResult.numFailed += result.numFailed;
    ActsKhrgles320001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsKhrgles320001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsKhrgles320001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000263 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000263 end";
}

static HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000264, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000264 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "KHR-GLES32.core.texture_cube_m"
        "ap_array.texture_size_vertex_sh",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsKhrgles320001TestSuite::runResult.numPassed += result.numPassed;
    ActsKhrgles320001TestSuite::runResult.numFailed += result.numFailed;
    ActsKhrgles320001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsKhrgles320001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsKhrgles320001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000264 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000264 end";
}

static HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000265, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000265 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "KHR-GLES32.core.texture_cube_ma"
        "p_array.texture_size_geometry_sh",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsKhrgles320001TestSuite::runResult.numPassed += result.numPassed;
    ActsKhrgles320001TestSuite::runResult.numFailed += result.numFailed;
    ActsKhrgles320001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsKhrgles320001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsKhrgles320001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000265 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000265 end";
}

static HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000266, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000266 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "KHR-GLES32.core.texture_cube_map_ar"
        "ray.texture_size_tesselation_con_sh",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsKhrgles320001TestSuite::runResult.numPassed += result.numPassed;
    ActsKhrgles320001TestSuite::runResult.numFailed += result.numFailed;
    ActsKhrgles320001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsKhrgles320001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsKhrgles320001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000266 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000266 end";
}

static HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000267, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000267 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "KHR-GLES32.core.texture_cube_map_a"
        "rray.texture_size_tesselation_ev_sh",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsKhrgles320001TestSuite::runResult.numPassed += result.numPassed;
    ActsKhrgles320001TestSuite::runResult.numFailed += result.numFailed;
    ActsKhrgles320001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsKhrgles320001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsKhrgles320001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000267 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000267 end";
}

static HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000268, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000268 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "KHR-GLES32.core.texture_cube_ma"
        "p_array.texture_size_fragment_sh",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsKhrgles320001TestSuite::runResult.numPassed += result.numPassed;
    ActsKhrgles320001TestSuite::runResult.numFailed += result.numFailed;
    ActsKhrgles320001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsKhrgles320001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsKhrgles320001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000268 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000268 end";
}

static HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000269, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000269 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "KHR-GLES32.core.texture_cube_ma"
        "p_array.texture_size_compute_sh",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsKhrgles320001TestSuite::runResult.numPassed += result.numPassed;
    ActsKhrgles320001TestSuite::runResult.numFailed += result.numFailed;
    ActsKhrgles320001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsKhrgles320001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsKhrgles320001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000269 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000269 end";
}

static HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000270, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000270 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "KHR-GLES32.core.texture_c"
        "ube_map_array.etc2_texture",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsKhrgles320001TestSuite::runResult.numPassed += result.numPassed;
    ActsKhrgles320001TestSuite::runResult.numFailed += result.numFailed;
    ActsKhrgles320001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsKhrgles320001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsKhrgles320001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000270 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000270 end";
}
