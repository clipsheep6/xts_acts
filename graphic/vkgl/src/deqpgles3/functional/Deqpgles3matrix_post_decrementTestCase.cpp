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

<<<<<<< HEAD
#include <climits>
#include <gtest/gtest.h>
#include "../Deqpgles3BaseFunc.h"
#include "../ActsDeqpgles30017TestSuite.h"
#include "shrinkdefine.h"
=======
#include <gtest/gtest.h>
#include "../Deqpgles3BaseFunc.h"
#include "../ActsDeqpgles30017TestSuite.h"
>>>>>>> 119876a9a4cc1abc142c2cbcacfd0e9275690a87

using namespace std;
using namespace testing::ext;
using namespace OHOS;

<<<<<<< HEAD
#define VkglTestCase_016176_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_016176_2 "post_decrement.lowp_mat2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016176, VkglTestCase_016176_1, VkglTestCase_016176_2);

#define VkglTestCase_016177_1 "dEQP-GLES3.functional.shaders.matrix.p"
#define VkglTestCase_016177_2 "ost_decrement.lowp_mat2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016177, VkglTestCase_016177_1, VkglTestCase_016177_2);

#define VkglTestCase_016178_1 "dEQP-GLES3.functional.shaders.matrix.p"
#define VkglTestCase_016178_2 "ost_decrement.mediump_mat2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016178, VkglTestCase_016178_1, VkglTestCase_016178_2);

#define VkglTestCase_016179_1 "dEQP-GLES3.functional.shaders.matrix.po"
#define VkglTestCase_016179_2 "st_decrement.mediump_mat2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016179, VkglTestCase_016179_1, VkglTestCase_016179_2);

#define VkglTestCase_016180_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_016180_2 "post_decrement.highp_mat2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016180, VkglTestCase_016180_1, VkglTestCase_016180_2);

#define VkglTestCase_016181_1 "dEQP-GLES3.functional.shaders.matrix.p"
#define VkglTestCase_016181_2 "ost_decrement.highp_mat2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016181, VkglTestCase_016181_1, VkglTestCase_016181_2);

#define VkglTestCase_016182_1 "dEQP-GLES3.functional.shaders.matrix.p"
#define VkglTestCase_016182_2 "ost_decrement.lowp_mat2x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016182, VkglTestCase_016182_1, VkglTestCase_016182_2);

#define VkglTestCase_016183_1 "dEQP-GLES3.functional.shaders.matrix.po"
#define VkglTestCase_016183_2 "st_decrement.lowp_mat2x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016183, VkglTestCase_016183_1, VkglTestCase_016183_2);

#define VkglTestCase_016184_1 "dEQP-GLES3.functional.shaders.matrix.po"
#define VkglTestCase_016184_2 "st_decrement.mediump_mat2x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016184, VkglTestCase_016184_1, VkglTestCase_016184_2);

#define VkglTestCase_016185_1 "dEQP-GLES3.functional.shaders.matrix.pos"
#define VkglTestCase_016185_2 "t_decrement.mediump_mat2x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016185, VkglTestCase_016185_1, VkglTestCase_016185_2);

#define VkglTestCase_016186_1 "dEQP-GLES3.functional.shaders.matrix.p"
#define VkglTestCase_016186_2 "ost_decrement.highp_mat2x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016186, VkglTestCase_016186_1, VkglTestCase_016186_2);

#define VkglTestCase_016187_1 "dEQP-GLES3.functional.shaders.matrix.po"
#define VkglTestCase_016187_2 "st_decrement.highp_mat2x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016187, VkglTestCase_016187_1, VkglTestCase_016187_2);

#define VkglTestCase_016188_1 "dEQP-GLES3.functional.shaders.matrix.p"
#define VkglTestCase_016188_2 "ost_decrement.lowp_mat2x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016188, VkglTestCase_016188_1, VkglTestCase_016188_2);

#define VkglTestCase_016189_1 "dEQP-GLES3.functional.shaders.matrix.po"
#define VkglTestCase_016189_2 "st_decrement.lowp_mat2x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016189, VkglTestCase_016189_1, VkglTestCase_016189_2);

#define VkglTestCase_016190_1 "dEQP-GLES3.functional.shaders.matrix.po"
#define VkglTestCase_016190_2 "st_decrement.mediump_mat2x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016190, VkglTestCase_016190_1, VkglTestCase_016190_2);

#define VkglTestCase_016191_1 "dEQP-GLES3.functional.shaders.matrix.pos"
#define VkglTestCase_016191_2 "t_decrement.mediump_mat2x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016191, VkglTestCase_016191_1, VkglTestCase_016191_2);

#define VkglTestCase_016192_1 "dEQP-GLES3.functional.shaders.matrix.p"
#define VkglTestCase_016192_2 "ost_decrement.highp_mat2x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016192, VkglTestCase_016192_1, VkglTestCase_016192_2);

#define VkglTestCase_016193_1 "dEQP-GLES3.functional.shaders.matrix.po"
#define VkglTestCase_016193_2 "st_decrement.highp_mat2x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016193, VkglTestCase_016193_1, VkglTestCase_016193_2);

#define VkglTestCase_016194_1 "dEQP-GLES3.functional.shaders.matrix.p"
#define VkglTestCase_016194_2 "ost_decrement.lowp_mat3x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016194, VkglTestCase_016194_1, VkglTestCase_016194_2);

#define VkglTestCase_016195_1 "dEQP-GLES3.functional.shaders.matrix.po"
#define VkglTestCase_016195_2 "st_decrement.lowp_mat3x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016195, VkglTestCase_016195_1, VkglTestCase_016195_2);

#define VkglTestCase_016196_1 "dEQP-GLES3.functional.shaders.matrix.po"
#define VkglTestCase_016196_2 "st_decrement.mediump_mat3x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016196, VkglTestCase_016196_1, VkglTestCase_016196_2);

#define VkglTestCase_016197_1 "dEQP-GLES3.functional.shaders.matrix.pos"
#define VkglTestCase_016197_2 "t_decrement.mediump_mat3x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016197, VkglTestCase_016197_1, VkglTestCase_016197_2);

#define VkglTestCase_016198_1 "dEQP-GLES3.functional.shaders.matrix.p"
#define VkglTestCase_016198_2 "ost_decrement.highp_mat3x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016198, VkglTestCase_016198_1, VkglTestCase_016198_2);

#define VkglTestCase_016199_1 "dEQP-GLES3.functional.shaders.matrix.po"
#define VkglTestCase_016199_2 "st_decrement.highp_mat3x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016199, VkglTestCase_016199_1, VkglTestCase_016199_2);

#define VkglTestCase_016200_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_016200_2 "post_decrement.lowp_mat3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016200, VkglTestCase_016200_1, VkglTestCase_016200_2);

#define VkglTestCase_016201_1 "dEQP-GLES3.functional.shaders.matrix.p"
#define VkglTestCase_016201_2 "ost_decrement.lowp_mat3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016201, VkglTestCase_016201_1, VkglTestCase_016201_2);

#define VkglTestCase_016202_1 "dEQP-GLES3.functional.shaders.matrix.p"
#define VkglTestCase_016202_2 "ost_decrement.mediump_mat3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016202, VkglTestCase_016202_1, VkglTestCase_016202_2);

#define VkglTestCase_016203_1 "dEQP-GLES3.functional.shaders.matrix.po"
#define VkglTestCase_016203_2 "st_decrement.mediump_mat3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016203, VkglTestCase_016203_1, VkglTestCase_016203_2);

#define VkglTestCase_016204_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_016204_2 "post_decrement.highp_mat3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016204, VkglTestCase_016204_1, VkglTestCase_016204_2);

#define VkglTestCase_016205_1 "dEQP-GLES3.functional.shaders.matrix.p"
#define VkglTestCase_016205_2 "ost_decrement.highp_mat3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016205, VkglTestCase_016205_1, VkglTestCase_016205_2);

#define VkglTestCase_016206_1 "dEQP-GLES3.functional.shaders.matrix.p"
#define VkglTestCase_016206_2 "ost_decrement.lowp_mat3x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016206, VkglTestCase_016206_1, VkglTestCase_016206_2);

#define VkglTestCase_016207_1 "dEQP-GLES3.functional.shaders.matrix.po"
#define VkglTestCase_016207_2 "st_decrement.lowp_mat3x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016207, VkglTestCase_016207_1, VkglTestCase_016207_2);

#define VkglTestCase_016208_1 "dEQP-GLES3.functional.shaders.matrix.po"
#define VkglTestCase_016208_2 "st_decrement.mediump_mat3x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016208, VkglTestCase_016208_1, VkglTestCase_016208_2);

#define VkglTestCase_016209_1 "dEQP-GLES3.functional.shaders.matrix.pos"
#define VkglTestCase_016209_2 "t_decrement.mediump_mat3x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016209, VkglTestCase_016209_1, VkglTestCase_016209_2);

#define VkglTestCase_016210_1 "dEQP-GLES3.functional.shaders.matrix.p"
#define VkglTestCase_016210_2 "ost_decrement.highp_mat3x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016210, VkglTestCase_016210_1, VkglTestCase_016210_2);

#define VkglTestCase_016211_1 "dEQP-GLES3.functional.shaders.matrix.po"
#define VkglTestCase_016211_2 "st_decrement.highp_mat3x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016211, VkglTestCase_016211_1, VkglTestCase_016211_2);

#define VkglTestCase_016212_1 "dEQP-GLES3.functional.shaders.matrix.p"
#define VkglTestCase_016212_2 "ost_decrement.lowp_mat4x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016212, VkglTestCase_016212_1, VkglTestCase_016212_2);

#define VkglTestCase_016213_1 "dEQP-GLES3.functional.shaders.matrix.po"
#define VkglTestCase_016213_2 "st_decrement.lowp_mat4x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016213, VkglTestCase_016213_1, VkglTestCase_016213_2);

#define VkglTestCase_016214_1 "dEQP-GLES3.functional.shaders.matrix.po"
#define VkglTestCase_016214_2 "st_decrement.mediump_mat4x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016214, VkglTestCase_016214_1, VkglTestCase_016214_2);

#define VkglTestCase_016215_1 "dEQP-GLES3.functional.shaders.matrix.pos"
#define VkglTestCase_016215_2 "t_decrement.mediump_mat4x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016215, VkglTestCase_016215_1, VkglTestCase_016215_2);

#define VkglTestCase_016216_1 "dEQP-GLES3.functional.shaders.matrix.p"
#define VkglTestCase_016216_2 "ost_decrement.highp_mat4x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016216, VkglTestCase_016216_1, VkglTestCase_016216_2);

#define VkglTestCase_016217_1 "dEQP-GLES3.functional.shaders.matrix.po"
#define VkglTestCase_016217_2 "st_decrement.highp_mat4x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016217, VkglTestCase_016217_1, VkglTestCase_016217_2);

#define VkglTestCase_016218_1 "dEQP-GLES3.functional.shaders.matrix.p"
#define VkglTestCase_016218_2 "ost_decrement.lowp_mat4x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016218, VkglTestCase_016218_1, VkglTestCase_016218_2);

#define VkglTestCase_016219_1 "dEQP-GLES3.functional.shaders.matrix.po"
#define VkglTestCase_016219_2 "st_decrement.lowp_mat4x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016219, VkglTestCase_016219_1, VkglTestCase_016219_2);

#define VkglTestCase_016220_1 "dEQP-GLES3.functional.shaders.matrix.po"
#define VkglTestCase_016220_2 "st_decrement.mediump_mat4x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016220, VkglTestCase_016220_1, VkglTestCase_016220_2);

#define VkglTestCase_016221_1 "dEQP-GLES3.functional.shaders.matrix.pos"
#define VkglTestCase_016221_2 "t_decrement.mediump_mat4x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016221, VkglTestCase_016221_1, VkglTestCase_016221_2);

#define VkglTestCase_016222_1 "dEQP-GLES3.functional.shaders.matrix.p"
#define VkglTestCase_016222_2 "ost_decrement.highp_mat4x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016222, VkglTestCase_016222_1, VkglTestCase_016222_2);

#define VkglTestCase_016223_1 "dEQP-GLES3.functional.shaders.matrix.po"
#define VkglTestCase_016223_2 "st_decrement.highp_mat4x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016223, VkglTestCase_016223_1, VkglTestCase_016223_2);

#define VkglTestCase_016224_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_016224_2 "post_decrement.lowp_mat4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016224, VkglTestCase_016224_1, VkglTestCase_016224_2);

#define VkglTestCase_016225_1 "dEQP-GLES3.functional.shaders.matrix.p"
#define VkglTestCase_016225_2 "ost_decrement.lowp_mat4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016225, VkglTestCase_016225_1, VkglTestCase_016225_2);

#define VkglTestCase_016226_1 "dEQP-GLES3.functional.shaders.matrix.p"
#define VkglTestCase_016226_2 "ost_decrement.mediump_mat4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016226, VkglTestCase_016226_1, VkglTestCase_016226_2);

#define VkglTestCase_016227_1 "dEQP-GLES3.functional.shaders.matrix.po"
#define VkglTestCase_016227_2 "st_decrement.mediump_mat4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016227, VkglTestCase_016227_1, VkglTestCase_016227_2);

#define VkglTestCase_016228_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_016228_2 "post_decrement.highp_mat4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016228, VkglTestCase_016228_1, VkglTestCase_016228_2);

#define VkglTestCase_016229_1 "dEQP-GLES3.functional.shaders.matrix.p"
#define VkglTestCase_016229_2 "ost_decrement.highp_mat4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016229, VkglTestCase_016229_1, VkglTestCase_016229_2);
=======
static HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016176, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016176 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "post_decrement.lowp_mat2_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016176 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016176 end";
}

static HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016177, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016177 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.p"
        "ost_decrement.lowp_mat2_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016177 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016177 end";
}

static HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016178, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016178 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.p"
        "ost_decrement.mediump_mat2_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016178 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016178 end";
}

static HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016179, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016179 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.po"
        "st_decrement.mediump_mat2_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016179 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016179 end";
}

static HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016180, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016180 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "post_decrement.highp_mat2_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016180 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016180 end";
}

static HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016181, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016181 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.p"
        "ost_decrement.highp_mat2_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016181 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016181 end";
}

static HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016182, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016182 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.p"
        "ost_decrement.lowp_mat2x3_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016182 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016182 end";
}

static HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016183, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016183 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.po"
        "st_decrement.lowp_mat2x3_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016183 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016183 end";
}

static HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016184, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016184 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.po"
        "st_decrement.mediump_mat2x3_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016184 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016184 end";
}

static HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016185, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016185 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.pos"
        "t_decrement.mediump_mat2x3_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016185 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016185 end";
}

static HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016186, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016186 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.p"
        "ost_decrement.highp_mat2x3_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016186 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016186 end";
}

static HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016187, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016187 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.po"
        "st_decrement.highp_mat2x3_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016187 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016187 end";
}

static HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016188, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016188 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.p"
        "ost_decrement.lowp_mat2x4_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016188 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016188 end";
}

static HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016189, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016189 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.po"
        "st_decrement.lowp_mat2x4_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016189 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016189 end";
}

static HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016190, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016190 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.po"
        "st_decrement.mediump_mat2x4_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016190 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016190 end";
}

static HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016191, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016191 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.pos"
        "t_decrement.mediump_mat2x4_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016191 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016191 end";
}

static HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016192, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016192 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.p"
        "ost_decrement.highp_mat2x4_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016192 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016192 end";
}

static HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016193, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016193 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.po"
        "st_decrement.highp_mat2x4_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016193 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016193 end";
}

static HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016194, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016194 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.p"
        "ost_decrement.lowp_mat3x2_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016194 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016194 end";
}

static HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016195, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016195 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.po"
        "st_decrement.lowp_mat3x2_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016195 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016195 end";
}

static HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016196, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016196 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.po"
        "st_decrement.mediump_mat3x2_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016196 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016196 end";
}

static HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016197, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016197 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.pos"
        "t_decrement.mediump_mat3x2_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016197 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016197 end";
}

static HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016198, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016198 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.p"
        "ost_decrement.highp_mat3x2_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016198 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016198 end";
}

static HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016199, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016199 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.po"
        "st_decrement.highp_mat3x2_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016199 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016199 end";
}

static HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016200, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016200 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "post_decrement.lowp_mat3_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016200 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016200 end";
}

static HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016201, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016201 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.p"
        "ost_decrement.lowp_mat3_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016201 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016201 end";
}

static HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016202, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016202 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.p"
        "ost_decrement.mediump_mat3_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016202 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016202 end";
}

static HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016203, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016203 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.po"
        "st_decrement.mediump_mat3_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016203 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016203 end";
}

static HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016204, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016204 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "post_decrement.highp_mat3_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016204 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016204 end";
}

static HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016205, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016205 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.p"
        "ost_decrement.highp_mat3_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016205 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016205 end";
}

static HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016206, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016206 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.p"
        "ost_decrement.lowp_mat3x4_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016206 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016206 end";
}

static HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016207, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016207 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.po"
        "st_decrement.lowp_mat3x4_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016207 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016207 end";
}

static HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016208, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016208 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.po"
        "st_decrement.mediump_mat3x4_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016208 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016208 end";
}

static HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016209, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016209 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.pos"
        "t_decrement.mediump_mat3x4_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016209 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016209 end";
}

static HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016210, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016210 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.p"
        "ost_decrement.highp_mat3x4_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016210 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016210 end";
}

static HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016211, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016211 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.po"
        "st_decrement.highp_mat3x4_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016211 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016211 end";
}

static HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016212, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016212 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.p"
        "ost_decrement.lowp_mat4x2_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016212 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016212 end";
}

static HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016213, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016213 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.po"
        "st_decrement.lowp_mat4x2_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016213 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016213 end";
}

static HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016214, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016214 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.po"
        "st_decrement.mediump_mat4x2_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016214 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016214 end";
}

static HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016215, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016215 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.pos"
        "t_decrement.mediump_mat4x2_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016215 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016215 end";
}

static HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016216, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016216 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.p"
        "ost_decrement.highp_mat4x2_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016216 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016216 end";
}

static HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016217, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016217 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.po"
        "st_decrement.highp_mat4x2_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016217 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016217 end";
}

static HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016218, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016218 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.p"
        "ost_decrement.lowp_mat4x3_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016218 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016218 end";
}

static HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016219, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016219 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.po"
        "st_decrement.lowp_mat4x3_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016219 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016219 end";
}

static HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016220, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016220 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.po"
        "st_decrement.mediump_mat4x3_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016220 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016220 end";
}

static HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016221, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016221 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.pos"
        "t_decrement.mediump_mat4x3_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016221 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016221 end";
}

static HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016222, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016222 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.p"
        "ost_decrement.highp_mat4x3_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016222 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016222 end";
}

static HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016223, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016223 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.po"
        "st_decrement.highp_mat4x3_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016223 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016223 end";
}

static HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016224, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016224 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "post_decrement.lowp_mat4_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016224 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016224 end";
}

static HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016225, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016225 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.p"
        "ost_decrement.lowp_mat4_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016225 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016225 end";
}

static HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016226, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016226 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.p"
        "ost_decrement.mediump_mat4_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016226 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016226 end";
}

static HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016227, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016227 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.po"
        "st_decrement.mediump_mat4_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016227 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016227 end";
}

static HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016228, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016228 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "post_decrement.highp_mat4_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016228 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016228 end";
}

static HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016229, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016229 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.p"
        "ost_decrement.highp_mat4_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016229 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016229 end";
}
>>>>>>> 119876a9a4cc1abc142c2cbcacfd0e9275690a87
