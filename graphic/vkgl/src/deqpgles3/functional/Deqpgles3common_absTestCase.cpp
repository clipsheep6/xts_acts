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
#include "../ActsDeqpgles30018TestSuite.h"
#include "shrinkdefine.h"
=======
#include <gtest/gtest.h>
#include "../Deqpgles3BaseFunc.h"
#include "../ActsDeqpgles30018TestSuite.h"
>>>>>>> 119876a9a4cc1abc142c2cbcacfd0e9275690a87

using namespace std;
using namespace testing::ext;
using namespace OHOS;

<<<<<<< HEAD
#define VkglTestCase_017967_1 "dEQP-GLES3.functional.shaders.builtin_"
#define VkglTestCase_017967_2 "functions.common.abs.float_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017967, VkglTestCase_017967_1, VkglTestCase_017967_2);

#define VkglTestCase_017968_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_017968_2 "unctions.common.abs.float_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017968, VkglTestCase_017968_1, VkglTestCase_017968_2);

#define VkglTestCase_017969_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_017969_2 "unctions.common.abs.float_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017969, VkglTestCase_017969_1, VkglTestCase_017969_2);

#define VkglTestCase_017970_1 "dEQP-GLES3.functional.shaders.builtin_fu"
#define VkglTestCase_017970_2 "nctions.common.abs.float_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017970, VkglTestCase_017970_1, VkglTestCase_017970_2);

#define VkglTestCase_017971_1 "dEQP-GLES3.functional.shaders.builtin_"
#define VkglTestCase_017971_2 "functions.common.abs.float_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017971, VkglTestCase_017971_1, VkglTestCase_017971_2);

#define VkglTestCase_017972_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_017972_2 "unctions.common.abs.float_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017972, VkglTestCase_017972_1, VkglTestCase_017972_2);

#define VkglTestCase_017973_1 "dEQP-GLES3.functional.shaders.builtin"
#define VkglTestCase_017973_2 "_functions.common.abs.vec2_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017973, VkglTestCase_017973_1, VkglTestCase_017973_2);

#define VkglTestCase_017974_1 "dEQP-GLES3.functional.shaders.builtin_"
#define VkglTestCase_017974_2 "functions.common.abs.vec2_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017974, VkglTestCase_017974_1, VkglTestCase_017974_2);

#define VkglTestCase_017975_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_017975_2 "unctions.common.abs.vec2_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017975, VkglTestCase_017975_1, VkglTestCase_017975_2);

#define VkglTestCase_017976_1 "dEQP-GLES3.functional.shaders.builtin_fu"
#define VkglTestCase_017976_2 "nctions.common.abs.vec2_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017976, VkglTestCase_017976_1, VkglTestCase_017976_2);

#define VkglTestCase_017977_1 "dEQP-GLES3.functional.shaders.builtin_"
#define VkglTestCase_017977_2 "functions.common.abs.vec2_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017977, VkglTestCase_017977_1, VkglTestCase_017977_2);

#define VkglTestCase_017978_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_017978_2 "unctions.common.abs.vec2_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017978, VkglTestCase_017978_1, VkglTestCase_017978_2);

#define VkglTestCase_017979_1 "dEQP-GLES3.functional.shaders.builtin"
#define VkglTestCase_017979_2 "_functions.common.abs.vec3_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017979, VkglTestCase_017979_1, VkglTestCase_017979_2);

#define VkglTestCase_017980_1 "dEQP-GLES3.functional.shaders.builtin_"
#define VkglTestCase_017980_2 "functions.common.abs.vec3_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017980, VkglTestCase_017980_1, VkglTestCase_017980_2);

#define VkglTestCase_017981_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_017981_2 "unctions.common.abs.vec3_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017981, VkglTestCase_017981_1, VkglTestCase_017981_2);

#define VkglTestCase_017982_1 "dEQP-GLES3.functional.shaders.builtin_fu"
#define VkglTestCase_017982_2 "nctions.common.abs.vec3_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017982, VkglTestCase_017982_1, VkglTestCase_017982_2);

#define VkglTestCase_017983_1 "dEQP-GLES3.functional.shaders.builtin_"
#define VkglTestCase_017983_2 "functions.common.abs.vec3_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017983, VkglTestCase_017983_1, VkglTestCase_017983_2);

#define VkglTestCase_017984_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_017984_2 "unctions.common.abs.vec3_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017984, VkglTestCase_017984_1, VkglTestCase_017984_2);

#define VkglTestCase_017985_1 "dEQP-GLES3.functional.shaders.builtin"
#define VkglTestCase_017985_2 "_functions.common.abs.vec4_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017985, VkglTestCase_017985_1, VkglTestCase_017985_2);

#define VkglTestCase_017986_1 "dEQP-GLES3.functional.shaders.builtin_"
#define VkglTestCase_017986_2 "functions.common.abs.vec4_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017986, VkglTestCase_017986_1, VkglTestCase_017986_2);

#define VkglTestCase_017987_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_017987_2 "unctions.common.abs.vec4_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017987, VkglTestCase_017987_1, VkglTestCase_017987_2);

#define VkglTestCase_017988_1 "dEQP-GLES3.functional.shaders.builtin_fu"
#define VkglTestCase_017988_2 "nctions.common.abs.vec4_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017988, VkglTestCase_017988_1, VkglTestCase_017988_2);

#define VkglTestCase_017989_1 "dEQP-GLES3.functional.shaders.builtin_"
#define VkglTestCase_017989_2 "functions.common.abs.vec4_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017989, VkglTestCase_017989_1, VkglTestCase_017989_2);

#define VkglTestCase_017990_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_017990_2 "unctions.common.abs.vec4_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017990, VkglTestCase_017990_1, VkglTestCase_017990_2);

#define VkglTestCase_017991_1 "dEQP-GLES3.functional.shaders.builtin"
#define VkglTestCase_017991_2 "_functions.common.abs.int_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017991, VkglTestCase_017991_1, VkglTestCase_017991_2);

#define VkglTestCase_017992_1 "dEQP-GLES3.functional.shaders.builtin_"
#define VkglTestCase_017992_2 "functions.common.abs.int_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017992, VkglTestCase_017992_1, VkglTestCase_017992_2);

#define VkglTestCase_017993_1 "dEQP-GLES3.functional.shaders.builtin_"
#define VkglTestCase_017993_2 "functions.common.abs.int_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017993, VkglTestCase_017993_1, VkglTestCase_017993_2);

#define VkglTestCase_017994_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_017994_2 "unctions.common.abs.int_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017994, VkglTestCase_017994_1, VkglTestCase_017994_2);

#define VkglTestCase_017995_1 "dEQP-GLES3.functional.shaders.builtin"
#define VkglTestCase_017995_2 "_functions.common.abs.int_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017995, VkglTestCase_017995_1, VkglTestCase_017995_2);

#define VkglTestCase_017996_1 "dEQP-GLES3.functional.shaders.builtin_"
#define VkglTestCase_017996_2 "functions.common.abs.int_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017996, VkglTestCase_017996_1, VkglTestCase_017996_2);

#define VkglTestCase_017997_1 "dEQP-GLES3.functional.shaders.builtin_"
#define VkglTestCase_017997_2 "functions.common.abs.ivec2_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017997, VkglTestCase_017997_1, VkglTestCase_017997_2);

#define VkglTestCase_017998_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_017998_2 "unctions.common.abs.ivec2_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017998, VkglTestCase_017998_1, VkglTestCase_017998_2);

#define VkglTestCase_017999_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_017999_2 "unctions.common.abs.ivec2_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017999, VkglTestCase_017999_1, VkglTestCase_017999_2);

#define VkglTestCase_018000_1 "dEQP-GLES3.functional.shaders.builtin_fu"
#define VkglTestCase_018000_2 "nctions.common.abs.ivec2_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_018000, VkglTestCase_018000_1, VkglTestCase_018000_2);

#define VkglTestCase_018001_1 "dEQP-GLES3.functional.shaders.builtin_"
#define VkglTestCase_018001_2 "functions.common.abs.ivec2_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_018001, VkglTestCase_018001_1, VkglTestCase_018001_2);

#define VkglTestCase_018002_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_018002_2 "unctions.common.abs.ivec2_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_018002, VkglTestCase_018002_1, VkglTestCase_018002_2);

#define VkglTestCase_018003_1 "dEQP-GLES3.functional.shaders.builtin_"
#define VkglTestCase_018003_2 "functions.common.abs.ivec3_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_018003, VkglTestCase_018003_1, VkglTestCase_018003_2);

#define VkglTestCase_018004_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_018004_2 "unctions.common.abs.ivec3_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_018004, VkglTestCase_018004_1, VkglTestCase_018004_2);

#define VkglTestCase_018005_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_018005_2 "unctions.common.abs.ivec3_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_018005, VkglTestCase_018005_1, VkglTestCase_018005_2);

#define VkglTestCase_018006_1 "dEQP-GLES3.functional.shaders.builtin_fu"
#define VkglTestCase_018006_2 "nctions.common.abs.ivec3_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_018006, VkglTestCase_018006_1, VkglTestCase_018006_2);

#define VkglTestCase_018007_1 "dEQP-GLES3.functional.shaders.builtin_"
#define VkglTestCase_018007_2 "functions.common.abs.ivec3_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_018007, VkglTestCase_018007_1, VkglTestCase_018007_2);

#define VkglTestCase_018008_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_018008_2 "unctions.common.abs.ivec3_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_018008, VkglTestCase_018008_1, VkglTestCase_018008_2);

#define VkglTestCase_018009_1 "dEQP-GLES3.functional.shaders.builtin_"
#define VkglTestCase_018009_2 "functions.common.abs.ivec4_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_018009, VkglTestCase_018009_1, VkglTestCase_018009_2);

#define VkglTestCase_018010_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_018010_2 "unctions.common.abs.ivec4_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_018010, VkglTestCase_018010_1, VkglTestCase_018010_2);

#define VkglTestCase_018011_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_018011_2 "unctions.common.abs.ivec4_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_018011, VkglTestCase_018011_1, VkglTestCase_018011_2);

#define VkglTestCase_018012_1 "dEQP-GLES3.functional.shaders.builtin_fu"
#define VkglTestCase_018012_2 "nctions.common.abs.ivec4_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_018012, VkglTestCase_018012_1, VkglTestCase_018012_2);

#define VkglTestCase_018013_1 "dEQP-GLES3.functional.shaders.builtin_"
#define VkglTestCase_018013_2 "functions.common.abs.ivec4_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_018013, VkglTestCase_018013_1, VkglTestCase_018013_2);

#define VkglTestCase_018014_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_018014_2 "unctions.common.abs.ivec4_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_018014, VkglTestCase_018014_1, VkglTestCase_018014_2);
=======
static HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017967, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017967 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_"
        "functions.common.abs.float_lowp_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017967 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017967 end";
}

static HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017968, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017968 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_f"
        "unctions.common.abs.float_lowp_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017968 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017968 end";
}

static HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017969, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017969 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_f"
        "unctions.common.abs.float_mediump_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017969 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017969 end";
}

static HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017970, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017970 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_fu"
        "nctions.common.abs.float_mediump_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017970 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017970 end";
}

static HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017971, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017971 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_"
        "functions.common.abs.float_highp_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017971 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017971 end";
}

static HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017972, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017972 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_f"
        "unctions.common.abs.float_highp_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017972 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017972 end";
}

static HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017973, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017973 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin"
        "_functions.common.abs.vec2_lowp_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017973 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017973 end";
}

static HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017974, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017974 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_"
        "functions.common.abs.vec2_lowp_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017974 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017974 end";
}

static HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017975, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017975 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_f"
        "unctions.common.abs.vec2_mediump_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017975 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017975 end";
}

static HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017976, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017976 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_fu"
        "nctions.common.abs.vec2_mediump_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017976 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017976 end";
}

static HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017977, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017977 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_"
        "functions.common.abs.vec2_highp_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017977 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017977 end";
}

static HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017978, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017978 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_f"
        "unctions.common.abs.vec2_highp_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017978 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017978 end";
}

static HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017979, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017979 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin"
        "_functions.common.abs.vec3_lowp_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017979 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017979 end";
}

static HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017980, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017980 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_"
        "functions.common.abs.vec3_lowp_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017980 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017980 end";
}

static HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017981, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017981 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_f"
        "unctions.common.abs.vec3_mediump_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017981 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017981 end";
}

static HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017982, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017982 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_fu"
        "nctions.common.abs.vec3_mediump_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017982 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017982 end";
}

static HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017983, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017983 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_"
        "functions.common.abs.vec3_highp_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017983 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017983 end";
}

static HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017984, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017984 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_f"
        "unctions.common.abs.vec3_highp_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017984 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017984 end";
}

static HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017985, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017985 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin"
        "_functions.common.abs.vec4_lowp_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017985 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017985 end";
}

static HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017986, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017986 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_"
        "functions.common.abs.vec4_lowp_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017986 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017986 end";
}

static HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017987, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017987 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_f"
        "unctions.common.abs.vec4_mediump_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017987 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017987 end";
}

static HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017988, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017988 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_fu"
        "nctions.common.abs.vec4_mediump_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017988 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017988 end";
}

static HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017989, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017989 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_"
        "functions.common.abs.vec4_highp_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017989 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017989 end";
}

static HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017990, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017990 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_f"
        "unctions.common.abs.vec4_highp_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017990 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017990 end";
}

static HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017991, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017991 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin"
        "_functions.common.abs.int_lowp_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017991 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017991 end";
}

static HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017992, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017992 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_"
        "functions.common.abs.int_lowp_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017992 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017992 end";
}

static HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017993, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017993 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_"
        "functions.common.abs.int_mediump_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017993 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017993 end";
}

static HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017994, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017994 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_f"
        "unctions.common.abs.int_mediump_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017994 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017994 end";
}

static HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017995, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017995 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin"
        "_functions.common.abs.int_highp_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017995 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017995 end";
}

static HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017996, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017996 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_"
        "functions.common.abs.int_highp_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017996 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017996 end";
}

static HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017997, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017997 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_"
        "functions.common.abs.ivec2_lowp_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017997 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017997 end";
}

static HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017998, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017998 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_f"
        "unctions.common.abs.ivec2_lowp_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017998 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017998 end";
}

static HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_017999, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_017999 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_f"
        "unctions.common.abs.ivec2_mediump_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_017999 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_017999 end";
}

static HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_018000, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018000 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_fu"
        "nctions.common.abs.ivec2_mediump_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018000 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018000 end";
}

static HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_018001, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018001 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_"
        "functions.common.abs.ivec2_highp_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018001 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018001 end";
}

static HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_018002, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018002 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_f"
        "unctions.common.abs.ivec2_highp_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018002 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018002 end";
}

static HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_018003, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018003 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_"
        "functions.common.abs.ivec3_lowp_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018003 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018003 end";
}

static HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_018004, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018004 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_f"
        "unctions.common.abs.ivec3_lowp_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018004 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018004 end";
}

static HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_018005, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018005 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_f"
        "unctions.common.abs.ivec3_mediump_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018005 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018005 end";
}

static HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_018006, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018006 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_fu"
        "nctions.common.abs.ivec3_mediump_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018006 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018006 end";
}

static HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_018007, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018007 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_"
        "functions.common.abs.ivec3_highp_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018007 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018007 end";
}

static HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_018008, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018008 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_f"
        "unctions.common.abs.ivec3_highp_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018008 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018008 end";
}

static HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_018009, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018009 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_"
        "functions.common.abs.ivec4_lowp_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018009 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018009 end";
}

static HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_018010, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018010 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_f"
        "unctions.common.abs.ivec4_lowp_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018010 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018010 end";
}

static HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_018011, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018011 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_f"
        "unctions.common.abs.ivec4_mediump_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018011 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018011 end";
}

static HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_018012, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018012 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_fu"
        "nctions.common.abs.ivec4_mediump_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018012 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018012 end";
}

static HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_018013, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018013 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_"
        "functions.common.abs.ivec4_highp_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018013 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018013 end";
}

static HWTEST_F(ActsDeqpgles30018TestSuite, TestCase_018014, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018014 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.builtin_f"
        "unctions.common.abs.ivec4_highp_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30018TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30018TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30018TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30018TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30018TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018014 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018014 end";
}
>>>>>>> 119876a9a4cc1abc142c2cbcacfd0e9275690a87
