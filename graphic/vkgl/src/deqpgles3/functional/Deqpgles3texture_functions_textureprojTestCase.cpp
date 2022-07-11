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
#define VkglTestCase_016914_1 "dEQP-GLES3.functional.shaders.texture_funct"
#define VkglTestCase_016914_2 "ions.textureproj.sampler2d_vec3_fixed_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016914, VkglTestCase_016914_1, VkglTestCase_016914_2);

#define VkglTestCase_016915_1 "dEQP-GLES3.functional.shaders.texture_functi"
#define VkglTestCase_016915_2 "ons.textureproj.sampler2d_vec3_fixed_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016915, VkglTestCase_016915_1, VkglTestCase_016915_2);

#define VkglTestCase_016916_1 "dEQP-GLES3.functional.shaders.texture_funct"
#define VkglTestCase_016916_2 "ions.textureproj.sampler2d_vec3_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016916, VkglTestCase_016916_1, VkglTestCase_016916_2);

#define VkglTestCase_016917_1 "dEQP-GLES3.functional.shaders.texture_functi"
#define VkglTestCase_016917_2 "ons.textureproj.sampler2d_vec3_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016917, VkglTestCase_016917_1, VkglTestCase_016917_2);

#define VkglTestCase_016918_1 "dEQP-GLES3.functional.shaders.texture_fun"
#define VkglTestCase_016918_2 "ctions.textureproj.isampler2d_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016918, VkglTestCase_016918_1, VkglTestCase_016918_2);

#define VkglTestCase_016919_1 "dEQP-GLES3.functional.shaders.texture_func"
#define VkglTestCase_016919_2 "tions.textureproj.isampler2d_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016919, VkglTestCase_016919_1, VkglTestCase_016919_2);

#define VkglTestCase_016920_1 "dEQP-GLES3.functional.shaders.texture_fun"
#define VkglTestCase_016920_2 "ctions.textureproj.usampler2d_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016920, VkglTestCase_016920_1, VkglTestCase_016920_2);

#define VkglTestCase_016921_1 "dEQP-GLES3.functional.shaders.texture_func"
#define VkglTestCase_016921_2 "tions.textureproj.usampler2d_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016921, VkglTestCase_016921_1, VkglTestCase_016921_2);

#define VkglTestCase_016922_1 "dEQP-GLES3.functional.shaders.texture_functions"
#define VkglTestCase_016922_2 ".textureproj.sampler2d_vec3_bias_fixed_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016922, VkglTestCase_016922_1, VkglTestCase_016922_2);

#define VkglTestCase_016923_1 "dEQP-GLES3.functional.shaders.texture_functions"
#define VkglTestCase_016923_2 ".textureproj.sampler2d_vec3_bias_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016923, VkglTestCase_016923_1, VkglTestCase_016923_2);

#define VkglTestCase_016924_1 "dEQP-GLES3.functional.shaders.texture_functi"
#define VkglTestCase_016924_2 "ons.textureproj.isampler2d_vec3_bias_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016924, VkglTestCase_016924_1, VkglTestCase_016924_2);

#define VkglTestCase_016925_1 "dEQP-GLES3.functional.shaders.texture_functi"
#define VkglTestCase_016925_2 "ons.textureproj.usampler2d_vec3_bias_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016925, VkglTestCase_016925_1, VkglTestCase_016925_2);

#define VkglTestCase_016926_1 "dEQP-GLES3.functional.shaders.texture_funct"
#define VkglTestCase_016926_2 "ions.textureproj.sampler2d_vec4_fixed_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016926, VkglTestCase_016926_1, VkglTestCase_016926_2);

#define VkglTestCase_016927_1 "dEQP-GLES3.functional.shaders.texture_functi"
#define VkglTestCase_016927_2 "ons.textureproj.sampler2d_vec4_fixed_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016927, VkglTestCase_016927_1, VkglTestCase_016927_2);

#define VkglTestCase_016928_1 "dEQP-GLES3.functional.shaders.texture_funct"
#define VkglTestCase_016928_2 "ions.textureproj.sampler2d_vec4_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016928, VkglTestCase_016928_1, VkglTestCase_016928_2);

#define VkglTestCase_016929_1 "dEQP-GLES3.functional.shaders.texture_functi"
#define VkglTestCase_016929_2 "ons.textureproj.sampler2d_vec4_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016929, VkglTestCase_016929_1, VkglTestCase_016929_2);

#define VkglTestCase_016930_1 "dEQP-GLES3.functional.shaders.texture_fun"
#define VkglTestCase_016930_2 "ctions.textureproj.isampler2d_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016930, VkglTestCase_016930_1, VkglTestCase_016930_2);

#define VkglTestCase_016931_1 "dEQP-GLES3.functional.shaders.texture_func"
#define VkglTestCase_016931_2 "tions.textureproj.isampler2d_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016931, VkglTestCase_016931_1, VkglTestCase_016931_2);

#define VkglTestCase_016932_1 "dEQP-GLES3.functional.shaders.texture_fun"
#define VkglTestCase_016932_2 "ctions.textureproj.usampler2d_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016932, VkglTestCase_016932_1, VkglTestCase_016932_2);

#define VkglTestCase_016933_1 "dEQP-GLES3.functional.shaders.texture_func"
#define VkglTestCase_016933_2 "tions.textureproj.usampler2d_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016933, VkglTestCase_016933_1, VkglTestCase_016933_2);

#define VkglTestCase_016934_1 "dEQP-GLES3.functional.shaders.texture_functions"
#define VkglTestCase_016934_2 ".textureproj.sampler2d_vec4_bias_fixed_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016934, VkglTestCase_016934_1, VkglTestCase_016934_2);

#define VkglTestCase_016935_1 "dEQP-GLES3.functional.shaders.texture_functions"
#define VkglTestCase_016935_2 ".textureproj.sampler2d_vec4_bias_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016935, VkglTestCase_016935_1, VkglTestCase_016935_2);

#define VkglTestCase_016936_1 "dEQP-GLES3.functional.shaders.texture_functi"
#define VkglTestCase_016936_2 "ons.textureproj.isampler2d_vec4_bias_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016936, VkglTestCase_016936_1, VkglTestCase_016936_2);

#define VkglTestCase_016937_1 "dEQP-GLES3.functional.shaders.texture_functi"
#define VkglTestCase_016937_2 "ons.textureproj.usampler2d_vec4_bias_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016937, VkglTestCase_016937_1, VkglTestCase_016937_2);

#define VkglTestCase_016938_1 "dEQP-GLES3.functional.shaders.texture_fun"
#define VkglTestCase_016938_2 "ctions.textureproj.sampler3d_fixed_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016938, VkglTestCase_016938_1, VkglTestCase_016938_2);

#define VkglTestCase_016939_1 "dEQP-GLES3.functional.shaders.texture_func"
#define VkglTestCase_016939_2 "tions.textureproj.sampler3d_fixed_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016939, VkglTestCase_016939_1, VkglTestCase_016939_2);

#define VkglTestCase_016940_1 "dEQP-GLES3.functional.shaders.texture_fun"
#define VkglTestCase_016940_2 "ctions.textureproj.sampler3d_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016940, VkglTestCase_016940_1, VkglTestCase_016940_2);

#define VkglTestCase_016941_1 "dEQP-GLES3.functional.shaders.texture_func"
#define VkglTestCase_016941_2 "tions.textureproj.sampler3d_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016941, VkglTestCase_016941_1, VkglTestCase_016941_2);

#define VkglTestCase_016942_1 "dEQP-GLES3.functional.shaders.texture_"
#define VkglTestCase_016942_2 "functions.textureproj.isampler3d_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016942, VkglTestCase_016942_1, VkglTestCase_016942_2);

#define VkglTestCase_016943_1 "dEQP-GLES3.functional.shaders.texture_f"
#define VkglTestCase_016943_2 "unctions.textureproj.isampler3d_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016943, VkglTestCase_016943_1, VkglTestCase_016943_2);

#define VkglTestCase_016944_1 "dEQP-GLES3.functional.shaders.texture_"
#define VkglTestCase_016944_2 "functions.textureproj.usampler3d_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016944, VkglTestCase_016944_1, VkglTestCase_016944_2);

#define VkglTestCase_016945_1 "dEQP-GLES3.functional.shaders.texture_f"
#define VkglTestCase_016945_2 "unctions.textureproj.usampler3d_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016945, VkglTestCase_016945_1, VkglTestCase_016945_2);

#define VkglTestCase_016946_1 "dEQP-GLES3.functional.shaders.texture_functi"
#define VkglTestCase_016946_2 "ons.textureproj.sampler3d_bias_fixed_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016946, VkglTestCase_016946_1, VkglTestCase_016946_2);

#define VkglTestCase_016947_1 "dEQP-GLES3.functional.shaders.texture_functi"
#define VkglTestCase_016947_2 "ons.textureproj.sampler3d_bias_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016947, VkglTestCase_016947_1, VkglTestCase_016947_2);

#define VkglTestCase_016948_1 "dEQP-GLES3.functional.shaders.texture_func"
#define VkglTestCase_016948_2 "tions.textureproj.isampler3d_bias_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016948, VkglTestCase_016948_1, VkglTestCase_016948_2);

#define VkglTestCase_016949_1 "dEQP-GLES3.functional.shaders.texture_func"
#define VkglTestCase_016949_2 "tions.textureproj.usampler3d_bias_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016949, VkglTestCase_016949_1, VkglTestCase_016949_2);

#define VkglTestCase_016950_1 "dEQP-GLES3.functional.shaders.texture_fun"
#define VkglTestCase_016950_2 "ctions.textureproj.sampler2dshadow_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016950, VkglTestCase_016950_1, VkglTestCase_016950_2);

#define VkglTestCase_016951_1 "dEQP-GLES3.functional.shaders.texture_func"
#define VkglTestCase_016951_2 "tions.textureproj.sampler2dshadow_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016951, VkglTestCase_016951_1, VkglTestCase_016951_2);

#define VkglTestCase_016952_1 "dEQP-GLES3.functional.shaders.texture_functi"
#define VkglTestCase_016952_2 "ons.textureproj.sampler2dshadow_bias_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016952, VkglTestCase_016952_1, VkglTestCase_016952_2);
=======
static HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016914, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016914 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.texture_funct"
        "ions.textureproj.sampler2d_vec3_fixed_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016914 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016914 end";
}

static HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016915, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016915 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.texture_functi"
        "ons.textureproj.sampler2d_vec3_fixed_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016915 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016915 end";
}

static HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016916, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016916 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.texture_funct"
        "ions.textureproj.sampler2d_vec3_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016916 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016916 end";
}

static HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016917, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016917 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.texture_functi"
        "ons.textureproj.sampler2d_vec3_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016917 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016917 end";
}

static HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016918, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016918 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.texture_fun"
        "ctions.textureproj.isampler2d_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016918 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016918 end";
}

static HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016919, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016919 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.texture_func"
        "tions.textureproj.isampler2d_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016919 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016919 end";
}

static HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016920, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016920 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.texture_fun"
        "ctions.textureproj.usampler2d_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016920 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016920 end";
}

static HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016921, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016921 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.texture_func"
        "tions.textureproj.usampler2d_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016921 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016921 end";
}

static HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016922, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016922 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.texture_functions"
        ".textureproj.sampler2d_vec3_bias_fixed_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016922 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016922 end";
}

static HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016923, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016923 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.texture_functions"
        ".textureproj.sampler2d_vec3_bias_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016923 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016923 end";
}

static HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016924, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016924 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.texture_functi"
        "ons.textureproj.isampler2d_vec3_bias_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016924 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016924 end";
}

static HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016925, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016925 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.texture_functi"
        "ons.textureproj.usampler2d_vec3_bias_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016925 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016925 end";
}

static HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016926, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016926 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.texture_funct"
        "ions.textureproj.sampler2d_vec4_fixed_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016926 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016926 end";
}

static HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016927, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016927 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.texture_functi"
        "ons.textureproj.sampler2d_vec4_fixed_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016927 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016927 end";
}

static HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016928, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016928 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.texture_funct"
        "ions.textureproj.sampler2d_vec4_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016928 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016928 end";
}

static HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016929, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016929 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.texture_functi"
        "ons.textureproj.sampler2d_vec4_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016929 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016929 end";
}

static HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016930, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016930 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.texture_fun"
        "ctions.textureproj.isampler2d_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016930 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016930 end";
}

static HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016931, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016931 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.texture_func"
        "tions.textureproj.isampler2d_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016931 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016931 end";
}

static HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016932, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016932 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.texture_fun"
        "ctions.textureproj.usampler2d_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016932 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016932 end";
}

static HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016933, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016933 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.texture_func"
        "tions.textureproj.usampler2d_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016933 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016933 end";
}

static HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016934, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016934 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.texture_functions"
        ".textureproj.sampler2d_vec4_bias_fixed_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016934 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016934 end";
}

static HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016935, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016935 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.texture_functions"
        ".textureproj.sampler2d_vec4_bias_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016935 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016935 end";
}

static HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016936, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016936 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.texture_functi"
        "ons.textureproj.isampler2d_vec4_bias_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016936 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016936 end";
}

static HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016937, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016937 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.texture_functi"
        "ons.textureproj.usampler2d_vec4_bias_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016937 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016937 end";
}

static HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016938, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016938 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.texture_fun"
        "ctions.textureproj.sampler3d_fixed_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016938 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016938 end";
}

static HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016939, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016939 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.texture_func"
        "tions.textureproj.sampler3d_fixed_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016939 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016939 end";
}

static HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016940, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016940 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.texture_fun"
        "ctions.textureproj.sampler3d_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016940 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016940 end";
}

static HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016941, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016941 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.texture_func"
        "tions.textureproj.sampler3d_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016941 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016941 end";
}

static HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016942, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016942 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.texture_"
        "functions.textureproj.isampler3d_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016942 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016942 end";
}

static HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016943, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016943 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.texture_f"
        "unctions.textureproj.isampler3d_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016943 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016943 end";
}

static HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016944, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016944 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.texture_"
        "functions.textureproj.usampler3d_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016944 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016944 end";
}

static HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016945, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016945 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.texture_f"
        "unctions.textureproj.usampler3d_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016945 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016945 end";
}

static HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016946, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016946 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.texture_functi"
        "ons.textureproj.sampler3d_bias_fixed_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016946 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016946 end";
}

static HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016947, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016947 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.texture_functi"
        "ons.textureproj.sampler3d_bias_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016947 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016947 end";
}

static HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016948, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016948 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.texture_func"
        "tions.textureproj.isampler3d_bias_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016948 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016948 end";
}

static HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016949, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016949 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.texture_func"
        "tions.textureproj.usampler3d_bias_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016949 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016949 end";
}

static HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016950, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016950 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.texture_fun"
        "ctions.textureproj.sampler2dshadow_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016950 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016950 end";
}

static HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016951, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016951 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.texture_func"
        "tions.textureproj.sampler2dshadow_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016951 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016951 end";
}

static HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016952, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_016952 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.texture_functi"
        "ons.textureproj.sampler2dshadow_bias_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30017TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30017TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30017TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30017TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30017TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_016952 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_016952 end";
}
>>>>>>> 119876a9a4cc1abc142c2cbcacfd0e9275690a87
