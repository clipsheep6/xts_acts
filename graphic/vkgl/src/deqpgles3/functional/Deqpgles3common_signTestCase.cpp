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
#include "../ActsDeqpgles30019TestSuite.h"
#include "shrinkdefine.h"
=======
#include <gtest/gtest.h>
#include "../Deqpgles3BaseFunc.h"
#include "../ActsDeqpgles30019TestSuite.h"
>>>>>>> 119876a9a4cc1abc142c2cbcacfd0e9275690a87

using namespace std;
using namespace testing::ext;
using namespace OHOS;

<<<<<<< HEAD
#define VkglTestCase_018015_1 "dEQP-GLES3.functional.shaders.builtin_"
#define VkglTestCase_018015_2 "functions.common.sign.float_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018015, VkglTestCase_018015_1, VkglTestCase_018015_2);

#define VkglTestCase_018016_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_018016_2 "unctions.common.sign.float_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018016, VkglTestCase_018016_1, VkglTestCase_018016_2);

#define VkglTestCase_018017_1 "dEQP-GLES3.functional.shaders.builtin_fu"
#define VkglTestCase_018017_2 "nctions.common.sign.float_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018017, VkglTestCase_018017_1, VkglTestCase_018017_2);

#define VkglTestCase_018018_1 "dEQP-GLES3.functional.shaders.builtin_fun"
#define VkglTestCase_018018_2 "ctions.common.sign.float_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018018, VkglTestCase_018018_1, VkglTestCase_018018_2);

#define VkglTestCase_018019_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_018019_2 "unctions.common.sign.float_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018019, VkglTestCase_018019_1, VkglTestCase_018019_2);

#define VkglTestCase_018020_1 "dEQP-GLES3.functional.shaders.builtin_fu"
#define VkglTestCase_018020_2 "nctions.common.sign.float_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018020, VkglTestCase_018020_1, VkglTestCase_018020_2);

#define VkglTestCase_018021_1 "dEQP-GLES3.functional.shaders.builtin_"
#define VkglTestCase_018021_2 "functions.common.sign.vec2_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018021, VkglTestCase_018021_1, VkglTestCase_018021_2);

#define VkglTestCase_018022_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_018022_2 "unctions.common.sign.vec2_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018022, VkglTestCase_018022_1, VkglTestCase_018022_2);

#define VkglTestCase_018023_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_018023_2 "unctions.common.sign.vec2_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018023, VkglTestCase_018023_1, VkglTestCase_018023_2);

#define VkglTestCase_018024_1 "dEQP-GLES3.functional.shaders.builtin_fu"
#define VkglTestCase_018024_2 "nctions.common.sign.vec2_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018024, VkglTestCase_018024_1, VkglTestCase_018024_2);

#define VkglTestCase_018025_1 "dEQP-GLES3.functional.shaders.builtin_"
#define VkglTestCase_018025_2 "functions.common.sign.vec2_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018025, VkglTestCase_018025_1, VkglTestCase_018025_2);

#define VkglTestCase_018026_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_018026_2 "unctions.common.sign.vec2_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018026, VkglTestCase_018026_1, VkglTestCase_018026_2);

#define VkglTestCase_018027_1 "dEQP-GLES3.functional.shaders.builtin_"
#define VkglTestCase_018027_2 "functions.common.sign.vec3_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018027, VkglTestCase_018027_1, VkglTestCase_018027_2);

#define VkglTestCase_018028_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_018028_2 "unctions.common.sign.vec3_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018028, VkglTestCase_018028_1, VkglTestCase_018028_2);

#define VkglTestCase_018029_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_018029_2 "unctions.common.sign.vec3_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018029, VkglTestCase_018029_1, VkglTestCase_018029_2);

#define VkglTestCase_018030_1 "dEQP-GLES3.functional.shaders.builtin_fu"
#define VkglTestCase_018030_2 "nctions.common.sign.vec3_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018030, VkglTestCase_018030_1, VkglTestCase_018030_2);

#define VkglTestCase_018031_1 "dEQP-GLES3.functional.shaders.builtin_"
#define VkglTestCase_018031_2 "functions.common.sign.vec3_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018031, VkglTestCase_018031_1, VkglTestCase_018031_2);

#define VkglTestCase_018032_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_018032_2 "unctions.common.sign.vec3_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018032, VkglTestCase_018032_1, VkglTestCase_018032_2);

#define VkglTestCase_018033_1 "dEQP-GLES3.functional.shaders.builtin_"
#define VkglTestCase_018033_2 "functions.common.sign.vec4_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018033, VkglTestCase_018033_1, VkglTestCase_018033_2);

#define VkglTestCase_018034_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_018034_2 "unctions.common.sign.vec4_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018034, VkglTestCase_018034_1, VkglTestCase_018034_2);

#define VkglTestCase_018035_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_018035_2 "unctions.common.sign.vec4_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018035, VkglTestCase_018035_1, VkglTestCase_018035_2);

#define VkglTestCase_018036_1 "dEQP-GLES3.functional.shaders.builtin_fu"
#define VkglTestCase_018036_2 "nctions.common.sign.vec4_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018036, VkglTestCase_018036_1, VkglTestCase_018036_2);

#define VkglTestCase_018037_1 "dEQP-GLES3.functional.shaders.builtin_"
#define VkglTestCase_018037_2 "functions.common.sign.vec4_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018037, VkglTestCase_018037_1, VkglTestCase_018037_2);

#define VkglTestCase_018038_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_018038_2 "unctions.common.sign.vec4_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018038, VkglTestCase_018038_1, VkglTestCase_018038_2);

#define VkglTestCase_018039_1 "dEQP-GLES3.functional.shaders.builtin"
#define VkglTestCase_018039_2 "_functions.common.sign.int_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018039, VkglTestCase_018039_1, VkglTestCase_018039_2);

#define VkglTestCase_018040_1 "dEQP-GLES3.functional.shaders.builtin_"
#define VkglTestCase_018040_2 "functions.common.sign.int_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018040, VkglTestCase_018040_1, VkglTestCase_018040_2);

#define VkglTestCase_018041_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_018041_2 "unctions.common.sign.int_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018041, VkglTestCase_018041_1, VkglTestCase_018041_2);

#define VkglTestCase_018042_1 "dEQP-GLES3.functional.shaders.builtin_fu"
#define VkglTestCase_018042_2 "nctions.common.sign.int_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018042, VkglTestCase_018042_1, VkglTestCase_018042_2);

#define VkglTestCase_018043_1 "dEQP-GLES3.functional.shaders.builtin_"
#define VkglTestCase_018043_2 "functions.common.sign.int_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018043, VkglTestCase_018043_1, VkglTestCase_018043_2);

#define VkglTestCase_018044_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_018044_2 "unctions.common.sign.int_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018044, VkglTestCase_018044_1, VkglTestCase_018044_2);

#define VkglTestCase_018045_1 "dEQP-GLES3.functional.shaders.builtin_"
#define VkglTestCase_018045_2 "functions.common.sign.ivec2_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018045, VkglTestCase_018045_1, VkglTestCase_018045_2);

#define VkglTestCase_018046_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_018046_2 "unctions.common.sign.ivec2_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018046, VkglTestCase_018046_1, VkglTestCase_018046_2);

#define VkglTestCase_018047_1 "dEQP-GLES3.functional.shaders.builtin_fu"
#define VkglTestCase_018047_2 "nctions.common.sign.ivec2_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018047, VkglTestCase_018047_1, VkglTestCase_018047_2);

#define VkglTestCase_018048_1 "dEQP-GLES3.functional.shaders.builtin_fun"
#define VkglTestCase_018048_2 "ctions.common.sign.ivec2_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018048, VkglTestCase_018048_1, VkglTestCase_018048_2);

#define VkglTestCase_018049_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_018049_2 "unctions.common.sign.ivec2_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018049, VkglTestCase_018049_1, VkglTestCase_018049_2);

#define VkglTestCase_018050_1 "dEQP-GLES3.functional.shaders.builtin_fu"
#define VkglTestCase_018050_2 "nctions.common.sign.ivec2_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018050, VkglTestCase_018050_1, VkglTestCase_018050_2);

#define VkglTestCase_018051_1 "dEQP-GLES3.functional.shaders.builtin_"
#define VkglTestCase_018051_2 "functions.common.sign.ivec3_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018051, VkglTestCase_018051_1, VkglTestCase_018051_2);

#define VkglTestCase_018052_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_018052_2 "unctions.common.sign.ivec3_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018052, VkglTestCase_018052_1, VkglTestCase_018052_2);

#define VkglTestCase_018053_1 "dEQP-GLES3.functional.shaders.builtin_fu"
#define VkglTestCase_018053_2 "nctions.common.sign.ivec3_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018053, VkglTestCase_018053_1, VkglTestCase_018053_2);

#define VkglTestCase_018054_1 "dEQP-GLES3.functional.shaders.builtin_fun"
#define VkglTestCase_018054_2 "ctions.common.sign.ivec3_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018054, VkglTestCase_018054_1, VkglTestCase_018054_2);

#define VkglTestCase_018055_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_018055_2 "unctions.common.sign.ivec3_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018055, VkglTestCase_018055_1, VkglTestCase_018055_2);

#define VkglTestCase_018056_1 "dEQP-GLES3.functional.shaders.builtin_fu"
#define VkglTestCase_018056_2 "nctions.common.sign.ivec3_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018056, VkglTestCase_018056_1, VkglTestCase_018056_2);

#define VkglTestCase_018057_1 "dEQP-GLES3.functional.shaders.builtin_"
#define VkglTestCase_018057_2 "functions.common.sign.ivec4_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018057, VkglTestCase_018057_1, VkglTestCase_018057_2);

#define VkglTestCase_018058_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_018058_2 "unctions.common.sign.ivec4_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018058, VkglTestCase_018058_1, VkglTestCase_018058_2);

#define VkglTestCase_018059_1 "dEQP-GLES3.functional.shaders.builtin_fu"
#define VkglTestCase_018059_2 "nctions.common.sign.ivec4_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018059, VkglTestCase_018059_1, VkglTestCase_018059_2);

#define VkglTestCase_018060_1 "dEQP-GLES3.functional.shaders.builtin_fun"
#define VkglTestCase_018060_2 "ctions.common.sign.ivec4_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018060, VkglTestCase_018060_1, VkglTestCase_018060_2);

#define VkglTestCase_018061_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_018061_2 "unctions.common.sign.ivec4_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018061, VkglTestCase_018061_1, VkglTestCase_018061_2);

#define VkglTestCase_018062_1 "dEQP-GLES3.functional.shaders.builtin_fu"
#define VkglTestCase_018062_2 "nctions.common.sign.ivec4_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018062, VkglTestCase_018062_1, VkglTestCase_018062_2);
=======
static HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018015, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018015 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_"
        "functions.common.sign.float_lowp_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018015 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018015 end";
}

static HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018016, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018016 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_f"
        "unctions.common.sign.float_lowp_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018016 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018016 end";
}

static HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018017, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018017 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_fu"
        "nctions.common.sign.float_mediump_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018017 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018017 end";
}

static HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018018, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018018 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_fun"
        "ctions.common.sign.float_mediump_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018018 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018018 end";
}

static HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018019, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018019 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_f"
        "unctions.common.sign.float_highp_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018019 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018019 end";
}

static HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018020, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018020 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_fu"
        "nctions.common.sign.float_highp_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018020 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018020 end";
}

static HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018021, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018021 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_"
        "functions.common.sign.vec2_lowp_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018021 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018021 end";
}

static HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018022, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018022 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_f"
        "unctions.common.sign.vec2_lowp_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018022 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018022 end";
}

static HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018023, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018023 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_f"
        "unctions.common.sign.vec2_mediump_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018023 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018023 end";
}

static HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018024, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018024 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_fu"
        "nctions.common.sign.vec2_mediump_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018024 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018024 end";
}

static HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018025, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018025 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_"
        "functions.common.sign.vec2_highp_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018025 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018025 end";
}

static HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018026, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018026 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_f"
        "unctions.common.sign.vec2_highp_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018026 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018026 end";
}

static HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018027, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018027 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_"
        "functions.common.sign.vec3_lowp_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018027 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018027 end";
}

static HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018028, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018028 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_f"
        "unctions.common.sign.vec3_lowp_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018028 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018028 end";
}

static HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018029, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018029 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_f"
        "unctions.common.sign.vec3_mediump_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018029 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018029 end";
}

static HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018030, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018030 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_fu"
        "nctions.common.sign.vec3_mediump_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018030 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018030 end";
}

static HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018031, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018031 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_"
        "functions.common.sign.vec3_highp_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018031 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018031 end";
}

static HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018032, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018032 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_f"
        "unctions.common.sign.vec3_highp_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018032 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018032 end";
}

static HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018033, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018033 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_"
        "functions.common.sign.vec4_lowp_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018033 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018033 end";
}

static HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018034, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018034 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_f"
        "unctions.common.sign.vec4_lowp_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018034 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018034 end";
}

static HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018035, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018035 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_f"
        "unctions.common.sign.vec4_mediump_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018035 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018035 end";
}

static HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018036, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018036 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_fu"
        "nctions.common.sign.vec4_mediump_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018036 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018036 end";
}

static HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018037, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018037 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_"
        "functions.common.sign.vec4_highp_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018037 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018037 end";
}

static HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018038, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018038 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_f"
        "unctions.common.sign.vec4_highp_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018038 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018038 end";
}

static HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018039, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018039 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin"
        "_functions.common.sign.int_lowp_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018039 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018039 end";
}

static HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018040, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018040 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_"
        "functions.common.sign.int_lowp_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018040 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018040 end";
}

static HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018041, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018041 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_f"
        "unctions.common.sign.int_mediump_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018041 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018041 end";
}

static HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018042, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018042 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_fu"
        "nctions.common.sign.int_mediump_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018042 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018042 end";
}

static HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018043, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018043 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_"
        "functions.common.sign.int_highp_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018043 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018043 end";
}

static HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018044, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018044 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_f"
        "unctions.common.sign.int_highp_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018044 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018044 end";
}

static HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018045, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018045 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_"
        "functions.common.sign.ivec2_lowp_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018045 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018045 end";
}

static HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018046, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018046 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_f"
        "unctions.common.sign.ivec2_lowp_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018046 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018046 end";
}

static HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018047, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018047 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_fu"
        "nctions.common.sign.ivec2_mediump_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018047 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018047 end";
}

static HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018048, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018048 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_fun"
        "ctions.common.sign.ivec2_mediump_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018048 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018048 end";
}

static HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018049, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018049 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_f"
        "unctions.common.sign.ivec2_highp_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018049 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018049 end";
}

static HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018050, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018050 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_fu"
        "nctions.common.sign.ivec2_highp_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018050 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018050 end";
}

static HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018051, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018051 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_"
        "functions.common.sign.ivec3_lowp_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018051 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018051 end";
}

static HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018052, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018052 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_f"
        "unctions.common.sign.ivec3_lowp_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018052 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018052 end";
}

static HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018053, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018053 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_fu"
        "nctions.common.sign.ivec3_mediump_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018053 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018053 end";
}

static HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018054, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018054 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_fun"
        "ctions.common.sign.ivec3_mediump_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018054 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018054 end";
}

static HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018055, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018055 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_f"
        "unctions.common.sign.ivec3_highp_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018055 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018055 end";
}

static HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018056, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018056 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_fu"
        "nctions.common.sign.ivec3_highp_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018056 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018056 end";
}

static HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018057, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018057 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_"
        "functions.common.sign.ivec4_lowp_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018057 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018057 end";
}

static HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018058, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018058 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_f"
        "unctions.common.sign.ivec4_lowp_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018058 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018058 end";
}

static HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018059, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018059 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_fu"
        "nctions.common.sign.ivec4_mediump_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018059 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018059 end";
}

static HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018060, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018060 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_fun"
        "ctions.common.sign.ivec4_mediump_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018060 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018060 end";
}

static HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018061, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018061 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_f"
        "unctions.common.sign.ivec4_highp_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018061 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018061 end";
}

static HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018062, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018062 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_fu"
        "nctions.common.sign.ivec4_highp_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018062 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018062 end";
}
>>>>>>> 119876a9a4cc1abc142c2cbcacfd0e9275690a87
