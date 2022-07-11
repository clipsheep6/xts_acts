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
#include "../ActsDeqpgles30016TestSuite.h"
#include "shrinkdefine.h"
=======
#include <gtest/gtest.h>
#include "../Deqpgles3BaseFunc.h"
#include "../ActsDeqpgles30016TestSuite.h"
>>>>>>> 119876a9a4cc1abc142c2cbcacfd0e9275690a87

using namespace std;
using namespace testing::ext;
using namespace OHOS;

<<<<<<< HEAD
#define VkglTestCase_015906_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015906_2 "unary_addition.lowp_mat2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015906, VkglTestCase_015906_1, VkglTestCase_015906_2);

#define VkglTestCase_015907_1 "dEQP-GLES3.functional.shaders.matrix.u"
#define VkglTestCase_015907_2 "nary_addition.lowp_mat2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015907, VkglTestCase_015907_1, VkglTestCase_015907_2);

#define VkglTestCase_015908_1 "dEQP-GLES3.functional.shaders.matrix.u"
#define VkglTestCase_015908_2 "nary_addition.mediump_mat2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015908, VkglTestCase_015908_1, VkglTestCase_015908_2);

#define VkglTestCase_015909_1 "dEQP-GLES3.functional.shaders.matrix.un"
#define VkglTestCase_015909_2 "ary_addition.mediump_mat2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015909, VkglTestCase_015909_1, VkglTestCase_015909_2);

#define VkglTestCase_015910_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015910_2 "unary_addition.highp_mat2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015910, VkglTestCase_015910_1, VkglTestCase_015910_2);

#define VkglTestCase_015911_1 "dEQP-GLES3.functional.shaders.matrix.u"
#define VkglTestCase_015911_2 "nary_addition.highp_mat2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015911, VkglTestCase_015911_1, VkglTestCase_015911_2);

#define VkglTestCase_015912_1 "dEQP-GLES3.functional.shaders.matrix.u"
#define VkglTestCase_015912_2 "nary_addition.lowp_mat2x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015912, VkglTestCase_015912_1, VkglTestCase_015912_2);

#define VkglTestCase_015913_1 "dEQP-GLES3.functional.shaders.matrix.un"
#define VkglTestCase_015913_2 "ary_addition.lowp_mat2x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015913, VkglTestCase_015913_1, VkglTestCase_015913_2);

#define VkglTestCase_015914_1 "dEQP-GLES3.functional.shaders.matrix.un"
#define VkglTestCase_015914_2 "ary_addition.mediump_mat2x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015914, VkglTestCase_015914_1, VkglTestCase_015914_2);

#define VkglTestCase_015915_1 "dEQP-GLES3.functional.shaders.matrix.una"
#define VkglTestCase_015915_2 "ry_addition.mediump_mat2x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015915, VkglTestCase_015915_1, VkglTestCase_015915_2);

#define VkglTestCase_015916_1 "dEQP-GLES3.functional.shaders.matrix.u"
#define VkglTestCase_015916_2 "nary_addition.highp_mat2x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015916, VkglTestCase_015916_1, VkglTestCase_015916_2);

#define VkglTestCase_015917_1 "dEQP-GLES3.functional.shaders.matrix.un"
#define VkglTestCase_015917_2 "ary_addition.highp_mat2x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015917, VkglTestCase_015917_1, VkglTestCase_015917_2);

#define VkglTestCase_015918_1 "dEQP-GLES3.functional.shaders.matrix.u"
#define VkglTestCase_015918_2 "nary_addition.lowp_mat2x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015918, VkglTestCase_015918_1, VkglTestCase_015918_2);

#define VkglTestCase_015919_1 "dEQP-GLES3.functional.shaders.matrix.un"
#define VkglTestCase_015919_2 "ary_addition.lowp_mat2x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015919, VkglTestCase_015919_1, VkglTestCase_015919_2);

#define VkglTestCase_015920_1 "dEQP-GLES3.functional.shaders.matrix.un"
#define VkglTestCase_015920_2 "ary_addition.mediump_mat2x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015920, VkglTestCase_015920_1, VkglTestCase_015920_2);

#define VkglTestCase_015921_1 "dEQP-GLES3.functional.shaders.matrix.una"
#define VkglTestCase_015921_2 "ry_addition.mediump_mat2x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015921, VkglTestCase_015921_1, VkglTestCase_015921_2);

#define VkglTestCase_015922_1 "dEQP-GLES3.functional.shaders.matrix.u"
#define VkglTestCase_015922_2 "nary_addition.highp_mat2x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015922, VkglTestCase_015922_1, VkglTestCase_015922_2);

#define VkglTestCase_015923_1 "dEQP-GLES3.functional.shaders.matrix.un"
#define VkglTestCase_015923_2 "ary_addition.highp_mat2x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015923, VkglTestCase_015923_1, VkglTestCase_015923_2);

#define VkglTestCase_015924_1 "dEQP-GLES3.functional.shaders.matrix.u"
#define VkglTestCase_015924_2 "nary_addition.lowp_mat3x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015924, VkglTestCase_015924_1, VkglTestCase_015924_2);

#define VkglTestCase_015925_1 "dEQP-GLES3.functional.shaders.matrix.un"
#define VkglTestCase_015925_2 "ary_addition.lowp_mat3x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015925, VkglTestCase_015925_1, VkglTestCase_015925_2);

#define VkglTestCase_015926_1 "dEQP-GLES3.functional.shaders.matrix.un"
#define VkglTestCase_015926_2 "ary_addition.mediump_mat3x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015926, VkglTestCase_015926_1, VkglTestCase_015926_2);

#define VkglTestCase_015927_1 "dEQP-GLES3.functional.shaders.matrix.una"
#define VkglTestCase_015927_2 "ry_addition.mediump_mat3x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015927, VkglTestCase_015927_1, VkglTestCase_015927_2);

#define VkglTestCase_015928_1 "dEQP-GLES3.functional.shaders.matrix.u"
#define VkglTestCase_015928_2 "nary_addition.highp_mat3x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015928, VkglTestCase_015928_1, VkglTestCase_015928_2);

#define VkglTestCase_015929_1 "dEQP-GLES3.functional.shaders.matrix.un"
#define VkglTestCase_015929_2 "ary_addition.highp_mat3x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015929, VkglTestCase_015929_1, VkglTestCase_015929_2);

#define VkglTestCase_015930_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015930_2 "unary_addition.lowp_mat3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015930, VkglTestCase_015930_1, VkglTestCase_015930_2);

#define VkglTestCase_015931_1 "dEQP-GLES3.functional.shaders.matrix.u"
#define VkglTestCase_015931_2 "nary_addition.lowp_mat3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015931, VkglTestCase_015931_1, VkglTestCase_015931_2);

#define VkglTestCase_015932_1 "dEQP-GLES3.functional.shaders.matrix.u"
#define VkglTestCase_015932_2 "nary_addition.mediump_mat3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015932, VkglTestCase_015932_1, VkglTestCase_015932_2);

#define VkglTestCase_015933_1 "dEQP-GLES3.functional.shaders.matrix.un"
#define VkglTestCase_015933_2 "ary_addition.mediump_mat3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015933, VkglTestCase_015933_1, VkglTestCase_015933_2);

#define VkglTestCase_015934_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015934_2 "unary_addition.highp_mat3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015934, VkglTestCase_015934_1, VkglTestCase_015934_2);

#define VkglTestCase_015935_1 "dEQP-GLES3.functional.shaders.matrix.u"
#define VkglTestCase_015935_2 "nary_addition.highp_mat3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015935, VkglTestCase_015935_1, VkglTestCase_015935_2);

#define VkglTestCase_015936_1 "dEQP-GLES3.functional.shaders.matrix.u"
#define VkglTestCase_015936_2 "nary_addition.lowp_mat3x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015936, VkglTestCase_015936_1, VkglTestCase_015936_2);

#define VkglTestCase_015937_1 "dEQP-GLES3.functional.shaders.matrix.un"
#define VkglTestCase_015937_2 "ary_addition.lowp_mat3x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015937, VkglTestCase_015937_1, VkglTestCase_015937_2);

#define VkglTestCase_015938_1 "dEQP-GLES3.functional.shaders.matrix.un"
#define VkglTestCase_015938_2 "ary_addition.mediump_mat3x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015938, VkglTestCase_015938_1, VkglTestCase_015938_2);

#define VkglTestCase_015939_1 "dEQP-GLES3.functional.shaders.matrix.una"
#define VkglTestCase_015939_2 "ry_addition.mediump_mat3x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015939, VkglTestCase_015939_1, VkglTestCase_015939_2);

#define VkglTestCase_015940_1 "dEQP-GLES3.functional.shaders.matrix.u"
#define VkglTestCase_015940_2 "nary_addition.highp_mat3x4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015940, VkglTestCase_015940_1, VkglTestCase_015940_2);

#define VkglTestCase_015941_1 "dEQP-GLES3.functional.shaders.matrix.un"
#define VkglTestCase_015941_2 "ary_addition.highp_mat3x4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015941, VkglTestCase_015941_1, VkglTestCase_015941_2);

#define VkglTestCase_015942_1 "dEQP-GLES3.functional.shaders.matrix.u"
#define VkglTestCase_015942_2 "nary_addition.lowp_mat4x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015942, VkglTestCase_015942_1, VkglTestCase_015942_2);

#define VkglTestCase_015943_1 "dEQP-GLES3.functional.shaders.matrix.un"
#define VkglTestCase_015943_2 "ary_addition.lowp_mat4x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015943, VkglTestCase_015943_1, VkglTestCase_015943_2);

#define VkglTestCase_015944_1 "dEQP-GLES3.functional.shaders.matrix.un"
#define VkglTestCase_015944_2 "ary_addition.mediump_mat4x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015944, VkglTestCase_015944_1, VkglTestCase_015944_2);

#define VkglTestCase_015945_1 "dEQP-GLES3.functional.shaders.matrix.una"
#define VkglTestCase_015945_2 "ry_addition.mediump_mat4x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015945, VkglTestCase_015945_1, VkglTestCase_015945_2);

#define VkglTestCase_015946_1 "dEQP-GLES3.functional.shaders.matrix.u"
#define VkglTestCase_015946_2 "nary_addition.highp_mat4x2_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015946, VkglTestCase_015946_1, VkglTestCase_015946_2);

#define VkglTestCase_015947_1 "dEQP-GLES3.functional.shaders.matrix.un"
#define VkglTestCase_015947_2 "ary_addition.highp_mat4x2_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015947, VkglTestCase_015947_1, VkglTestCase_015947_2);

#define VkglTestCase_015948_1 "dEQP-GLES3.functional.shaders.matrix.u"
#define VkglTestCase_015948_2 "nary_addition.lowp_mat4x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015948, VkglTestCase_015948_1, VkglTestCase_015948_2);

#define VkglTestCase_015949_1 "dEQP-GLES3.functional.shaders.matrix.un"
#define VkglTestCase_015949_2 "ary_addition.lowp_mat4x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015949, VkglTestCase_015949_1, VkglTestCase_015949_2);

#define VkglTestCase_015950_1 "dEQP-GLES3.functional.shaders.matrix.un"
#define VkglTestCase_015950_2 "ary_addition.mediump_mat4x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015950, VkglTestCase_015950_1, VkglTestCase_015950_2);

#define VkglTestCase_015951_1 "dEQP-GLES3.functional.shaders.matrix.una"
#define VkglTestCase_015951_2 "ry_addition.mediump_mat4x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015951, VkglTestCase_015951_1, VkglTestCase_015951_2);

#define VkglTestCase_015952_1 "dEQP-GLES3.functional.shaders.matrix.u"
#define VkglTestCase_015952_2 "nary_addition.highp_mat4x3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015952, VkglTestCase_015952_1, VkglTestCase_015952_2);

#define VkglTestCase_015953_1 "dEQP-GLES3.functional.shaders.matrix.un"
#define VkglTestCase_015953_2 "ary_addition.highp_mat4x3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015953, VkglTestCase_015953_1, VkglTestCase_015953_2);

#define VkglTestCase_015954_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015954_2 "unary_addition.lowp_mat4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015954, VkglTestCase_015954_1, VkglTestCase_015954_2);

#define VkglTestCase_015955_1 "dEQP-GLES3.functional.shaders.matrix.u"
#define VkglTestCase_015955_2 "nary_addition.lowp_mat4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015955, VkglTestCase_015955_1, VkglTestCase_015955_2);

#define VkglTestCase_015956_1 "dEQP-GLES3.functional.shaders.matrix.u"
#define VkglTestCase_015956_2 "nary_addition.mediump_mat4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015956, VkglTestCase_015956_1, VkglTestCase_015956_2);

#define VkglTestCase_015957_1 "dEQP-GLES3.functional.shaders.matrix.un"
#define VkglTestCase_015957_2 "ary_addition.mediump_mat4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015957, VkglTestCase_015957_1, VkglTestCase_015957_2);

#define VkglTestCase_015958_1 "dEQP-GLES3.functional.shaders.matrix."
#define VkglTestCase_015958_2 "unary_addition.highp_mat4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015958, VkglTestCase_015958_1, VkglTestCase_015958_2);

#define VkglTestCase_015959_1 "dEQP-GLES3.functional.shaders.matrix.u"
#define VkglTestCase_015959_2 "nary_addition.highp_mat4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015959, VkglTestCase_015959_1, VkglTestCase_015959_2);
=======
static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015906, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015906 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "unary_addition.lowp_mat2_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015906 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015906 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015907, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015907 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.u"
        "nary_addition.lowp_mat2_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015907 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015907 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015908, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015908 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.u"
        "nary_addition.mediump_mat2_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015908 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015908 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015909, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015909 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.un"
        "ary_addition.mediump_mat2_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015909 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015909 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015910, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015910 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "unary_addition.highp_mat2_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015910 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015910 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015911, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015911 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.u"
        "nary_addition.highp_mat2_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015911 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015911 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015912, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015912 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.u"
        "nary_addition.lowp_mat2x3_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015912 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015912 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015913, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015913 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.un"
        "ary_addition.lowp_mat2x3_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015913 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015913 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015914, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015914 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.un"
        "ary_addition.mediump_mat2x3_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015914 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015914 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015915, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015915 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.una"
        "ry_addition.mediump_mat2x3_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015915 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015915 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015916, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015916 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.u"
        "nary_addition.highp_mat2x3_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015916 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015916 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015917, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015917 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.un"
        "ary_addition.highp_mat2x3_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015917 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015917 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015918, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015918 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.u"
        "nary_addition.lowp_mat2x4_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015918 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015918 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015919, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015919 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.un"
        "ary_addition.lowp_mat2x4_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015919 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015919 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015920, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015920 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.un"
        "ary_addition.mediump_mat2x4_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015920 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015920 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015921, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015921 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.una"
        "ry_addition.mediump_mat2x4_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015921 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015921 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015922, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015922 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.u"
        "nary_addition.highp_mat2x4_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015922 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015922 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015923, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015923 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.un"
        "ary_addition.highp_mat2x4_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015923 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015923 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015924, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015924 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.u"
        "nary_addition.lowp_mat3x2_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015924 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015924 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015925, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015925 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.un"
        "ary_addition.lowp_mat3x2_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015925 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015925 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015926, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015926 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.un"
        "ary_addition.mediump_mat3x2_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015926 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015926 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015927, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015927 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.una"
        "ry_addition.mediump_mat3x2_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015927 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015927 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015928, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015928 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.u"
        "nary_addition.highp_mat3x2_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015928 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015928 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015929, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015929 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.un"
        "ary_addition.highp_mat3x2_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015929 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015929 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015930, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015930 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "unary_addition.lowp_mat3_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015930 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015930 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015931, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015931 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.u"
        "nary_addition.lowp_mat3_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015931 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015931 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015932, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015932 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.u"
        "nary_addition.mediump_mat3_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015932 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015932 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015933, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015933 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.un"
        "ary_addition.mediump_mat3_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015933 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015933 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015934, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015934 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "unary_addition.highp_mat3_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015934 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015934 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015935, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015935 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.u"
        "nary_addition.highp_mat3_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015935 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015935 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015936, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015936 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.u"
        "nary_addition.lowp_mat3x4_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015936 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015936 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015937, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015937 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.un"
        "ary_addition.lowp_mat3x4_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015937 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015937 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015938, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015938 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.un"
        "ary_addition.mediump_mat3x4_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015938 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015938 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015939, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015939 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.una"
        "ry_addition.mediump_mat3x4_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015939 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015939 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015940, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015940 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.u"
        "nary_addition.highp_mat3x4_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015940 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015940 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015941, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015941 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.un"
        "ary_addition.highp_mat3x4_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015941 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015941 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015942, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015942 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.u"
        "nary_addition.lowp_mat4x2_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015942 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015942 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015943, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015943 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.un"
        "ary_addition.lowp_mat4x2_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015943 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015943 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015944, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015944 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.un"
        "ary_addition.mediump_mat4x2_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015944 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015944 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015945, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015945 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.una"
        "ry_addition.mediump_mat4x2_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015945 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015945 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015946, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015946 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.u"
        "nary_addition.highp_mat4x2_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015946 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015946 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015947, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015947 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.un"
        "ary_addition.highp_mat4x2_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015947 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015947 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015948, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015948 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.u"
        "nary_addition.lowp_mat4x3_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015948 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015948 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015949, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015949 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.un"
        "ary_addition.lowp_mat4x3_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015949 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015949 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015950, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015950 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.un"
        "ary_addition.mediump_mat4x3_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015950 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015950 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015951, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015951 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.una"
        "ry_addition.mediump_mat4x3_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015951 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015951 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015952, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015952 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.u"
        "nary_addition.highp_mat4x3_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015952 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015952 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015953, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015953 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.un"
        "ary_addition.highp_mat4x3_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015953 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015953 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015954, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015954 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "unary_addition.lowp_mat4_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015954 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015954 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015955, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015955 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.u"
        "nary_addition.lowp_mat4_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015955 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015955 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015956, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015956 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.u"
        "nary_addition.mediump_mat4_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015956 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015956 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015957, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015957 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.un"
        "ary_addition.mediump_mat4_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015957 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015957 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015958, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015958 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix."
        "unary_addition.highp_mat4_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015958 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015958 end";
}

static HWTEST_F(ActsDeqpgles30016TestSuite, TestCase_015959, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_015959 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.matrix.u"
        "nary_addition.highp_mat4_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30016TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30016TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30016TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30016TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30016TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_015959 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_015959 end";
}
>>>>>>> 119876a9a4cc1abc142c2cbcacfd0e9275690a87
