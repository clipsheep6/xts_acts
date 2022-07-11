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
#include "../ActsDeqpgles30026TestSuite.h"
#include "shrinkdefine.h"
=======
#include <gtest/gtest.h>
#include "../Deqpgles3BaseFunc.h"
#include "../ActsDeqpgles30026TestSuite.h"
>>>>>>> 119876a9a4cc1abc142c2cbcacfd0e9275690a87

using namespace std;
using namespace testing::ext;
using namespace OHOS;

<<<<<<< HEAD
#define VkglTestCase_025027_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_025027_2 ".mipmap.2d.generate.a8_fastest"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025027, VkglTestCase_025027_1, VkglTestCase_025027_2);

#define VkglTestCase_025028_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_025028_2 ".mipmap.2d.generate.a8_nicest"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025028, VkglTestCase_025028_1, VkglTestCase_025028_2);

#define VkglTestCase_025029_1 "dEQP-GLES3.functional.texture.mi"
#define VkglTestCase_025029_2 "pmap.2d.generate.a8_npot_fastest"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025029, VkglTestCase_025029_1, VkglTestCase_025029_2);

#define VkglTestCase_025030_1 "dEQP-GLES3.functional.texture.m"
#define VkglTestCase_025030_2 "ipmap.2d.generate.a8_npot_nicest"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025030, VkglTestCase_025030_1, VkglTestCase_025030_2);

#define VkglTestCase_025031_1 "dEQP-GLES3.functional.texture.mipma"
#define VkglTestCase_025031_2 "p.2d.generate.a8_non_square_fastest"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025031, VkglTestCase_025031_1, VkglTestCase_025031_2);

#define VkglTestCase_025032_1 "dEQP-GLES3.functional.texture.mipm"
#define VkglTestCase_025032_2 "ap.2d.generate.a8_non_square_nicest"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025032, VkglTestCase_025032_1, VkglTestCase_025032_2);

#define VkglTestCase_025033_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_025033_2 ".mipmap.2d.generate.l8_fastest"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025033, VkglTestCase_025033_1, VkglTestCase_025033_2);

#define VkglTestCase_025034_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_025034_2 ".mipmap.2d.generate.l8_nicest"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025034, VkglTestCase_025034_1, VkglTestCase_025034_2);

#define VkglTestCase_025035_1 "dEQP-GLES3.functional.texture.mi"
#define VkglTestCase_025035_2 "pmap.2d.generate.l8_npot_fastest"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025035, VkglTestCase_025035_1, VkglTestCase_025035_2);

#define VkglTestCase_025036_1 "dEQP-GLES3.functional.texture.m"
#define VkglTestCase_025036_2 "ipmap.2d.generate.l8_npot_nicest"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025036, VkglTestCase_025036_1, VkglTestCase_025036_2);

#define VkglTestCase_025037_1 "dEQP-GLES3.functional.texture.mipma"
#define VkglTestCase_025037_2 "p.2d.generate.l8_non_square_fastest"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025037, VkglTestCase_025037_1, VkglTestCase_025037_2);

#define VkglTestCase_025038_1 "dEQP-GLES3.functional.texture.mipm"
#define VkglTestCase_025038_2 "ap.2d.generate.l8_non_square_nicest"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025038, VkglTestCase_025038_1, VkglTestCase_025038_2);

#define VkglTestCase_025039_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_025039_2 "mipmap.2d.generate.la88_fastest"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025039, VkglTestCase_025039_1, VkglTestCase_025039_2);

#define VkglTestCase_025040_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_025040_2 "mipmap.2d.generate.la88_nicest"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025040, VkglTestCase_025040_1, VkglTestCase_025040_2);

#define VkglTestCase_025041_1 "dEQP-GLES3.functional.texture.mip"
#define VkglTestCase_025041_2 "map.2d.generate.la88_npot_fastest"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025041, VkglTestCase_025041_1, VkglTestCase_025041_2);

#define VkglTestCase_025042_1 "dEQP-GLES3.functional.texture.mi"
#define VkglTestCase_025042_2 "pmap.2d.generate.la88_npot_nicest"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025042, VkglTestCase_025042_1, VkglTestCase_025042_2);

#define VkglTestCase_025043_1 "dEQP-GLES3.functional.texture.mipmap"
#define VkglTestCase_025043_2 ".2d.generate.la88_non_square_fastest"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025043, VkglTestCase_025043_1, VkglTestCase_025043_2);

#define VkglTestCase_025044_1 "dEQP-GLES3.functional.texture.mipma"
#define VkglTestCase_025044_2 "p.2d.generate.la88_non_square_nicest"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025044, VkglTestCase_025044_1, VkglTestCase_025044_2);

#define VkglTestCase_025045_1 "dEQP-GLES3.functional.texture.m"
#define VkglTestCase_025045_2 "ipmap.2d.generate.rgb565_fastest"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025045, VkglTestCase_025045_1, VkglTestCase_025045_2);

#define VkglTestCase_025046_1 "dEQP-GLES3.functional.texture.m"
#define VkglTestCase_025046_2 "ipmap.2d.generate.rgb565_nicest"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025046, VkglTestCase_025046_1, VkglTestCase_025046_2);

#define VkglTestCase_025047_1 "dEQP-GLES3.functional.texture.mipm"
#define VkglTestCase_025047_2 "ap.2d.generate.rgb565_npot_fastest"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025047, VkglTestCase_025047_1, VkglTestCase_025047_2);

#define VkglTestCase_025048_1 "dEQP-GLES3.functional.texture.mip"
#define VkglTestCase_025048_2 "map.2d.generate.rgb565_npot_nicest"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025048, VkglTestCase_025048_1, VkglTestCase_025048_2);

#define VkglTestCase_025049_1 "dEQP-GLES3.functional.texture.mipmap."
#define VkglTestCase_025049_2 "2d.generate.rgb565_non_square_fastest"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025049, VkglTestCase_025049_1, VkglTestCase_025049_2);

#define VkglTestCase_025050_1 "dEQP-GLES3.functional.texture.mipmap"
#define VkglTestCase_025050_2 ".2d.generate.rgb565_non_square_nicest"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025050, VkglTestCase_025050_1, VkglTestCase_025050_2);

#define VkglTestCase_025051_1 "dEQP-GLES3.functional.texture.m"
#define VkglTestCase_025051_2 "ipmap.2d.generate.rgb888_fastest"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025051, VkglTestCase_025051_1, VkglTestCase_025051_2);

#define VkglTestCase_025052_1 "dEQP-GLES3.functional.texture.m"
#define VkglTestCase_025052_2 "ipmap.2d.generate.rgb888_nicest"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025052, VkglTestCase_025052_1, VkglTestCase_025052_2);

#define VkglTestCase_025053_1 "dEQP-GLES3.functional.texture.mipm"
#define VkglTestCase_025053_2 "ap.2d.generate.rgb888_npot_fastest"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025053, VkglTestCase_025053_1, VkglTestCase_025053_2);

#define VkglTestCase_025054_1 "dEQP-GLES3.functional.texture.mip"
#define VkglTestCase_025054_2 "map.2d.generate.rgb888_npot_nicest"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025054, VkglTestCase_025054_1, VkglTestCase_025054_2);

#define VkglTestCase_025055_1 "dEQP-GLES3.functional.texture.mipmap."
#define VkglTestCase_025055_2 "2d.generate.rgb888_non_square_fastest"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025055, VkglTestCase_025055_1, VkglTestCase_025055_2);

#define VkglTestCase_025056_1 "dEQP-GLES3.functional.texture.mipmap"
#define VkglTestCase_025056_2 ".2d.generate.rgb888_non_square_nicest"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025056, VkglTestCase_025056_1, VkglTestCase_025056_2);

#define VkglTestCase_025057_1 "dEQP-GLES3.functional.texture.mi"
#define VkglTestCase_025057_2 "pmap.2d.generate.rgba4444_fastest"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025057, VkglTestCase_025057_1, VkglTestCase_025057_2);

#define VkglTestCase_025058_1 "dEQP-GLES3.functional.texture.mi"
#define VkglTestCase_025058_2 "pmap.2d.generate.rgba4444_nicest"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025058, VkglTestCase_025058_1, VkglTestCase_025058_2);

#define VkglTestCase_025059_1 "dEQP-GLES3.functional.texture.mipma"
#define VkglTestCase_025059_2 "p.2d.generate.rgba4444_npot_fastest"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025059, VkglTestCase_025059_1, VkglTestCase_025059_2);

#define VkglTestCase_025060_1 "dEQP-GLES3.functional.texture.mipm"
#define VkglTestCase_025060_2 "ap.2d.generate.rgba4444_npot_nicest"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025060, VkglTestCase_025060_1, VkglTestCase_025060_2);

#define VkglTestCase_025061_1 "dEQP-GLES3.functional.texture.mipmap.2"
#define VkglTestCase_025061_2 "d.generate.rgba4444_non_square_fastest"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025061, VkglTestCase_025061_1, VkglTestCase_025061_2);

#define VkglTestCase_025062_1 "dEQP-GLES3.functional.texture.mipmap."
#define VkglTestCase_025062_2 "2d.generate.rgba4444_non_square_nicest"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025062, VkglTestCase_025062_1, VkglTestCase_025062_2);

#define VkglTestCase_025063_1 "dEQP-GLES3.functional.texture.mi"
#define VkglTestCase_025063_2 "pmap.2d.generate.rgba5551_fastest"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025063, VkglTestCase_025063_1, VkglTestCase_025063_2);

#define VkglTestCase_025064_1 "dEQP-GLES3.functional.texture.mi"
#define VkglTestCase_025064_2 "pmap.2d.generate.rgba5551_nicest"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025064, VkglTestCase_025064_1, VkglTestCase_025064_2);

#define VkglTestCase_025065_1 "dEQP-GLES3.functional.texture.mipma"
#define VkglTestCase_025065_2 "p.2d.generate.rgba5551_npot_fastest"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025065, VkglTestCase_025065_1, VkglTestCase_025065_2);

#define VkglTestCase_025066_1 "dEQP-GLES3.functional.texture.mipm"
#define VkglTestCase_025066_2 "ap.2d.generate.rgba5551_npot_nicest"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025066, VkglTestCase_025066_1, VkglTestCase_025066_2);

#define VkglTestCase_025067_1 "dEQP-GLES3.functional.texture.mipmap.2"
#define VkglTestCase_025067_2 "d.generate.rgba5551_non_square_fastest"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025067, VkglTestCase_025067_1, VkglTestCase_025067_2);

#define VkglTestCase_025068_1 "dEQP-GLES3.functional.texture.mipmap."
#define VkglTestCase_025068_2 "2d.generate.rgba5551_non_square_nicest"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025068, VkglTestCase_025068_1, VkglTestCase_025068_2);

#define VkglTestCase_025069_1 "dEQP-GLES3.functional.texture.mi"
#define VkglTestCase_025069_2 "pmap.2d.generate.rgba8888_fastest"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025069, VkglTestCase_025069_1, VkglTestCase_025069_2);

#define VkglTestCase_025070_1 "dEQP-GLES3.functional.texture.mi"
#define VkglTestCase_025070_2 "pmap.2d.generate.rgba8888_nicest"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025070, VkglTestCase_025070_1, VkglTestCase_025070_2);

#define VkglTestCase_025071_1 "dEQP-GLES3.functional.texture.mipma"
#define VkglTestCase_025071_2 "p.2d.generate.rgba8888_npot_fastest"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025071, VkglTestCase_025071_1, VkglTestCase_025071_2);

#define VkglTestCase_025072_1 "dEQP-GLES3.functional.texture.mipm"
#define VkglTestCase_025072_2 "ap.2d.generate.rgba8888_npot_nicest"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025072, VkglTestCase_025072_1, VkglTestCase_025072_2);

#define VkglTestCase_025073_1 "dEQP-GLES3.functional.texture.mipmap.2"
#define VkglTestCase_025073_2 "d.generate.rgba8888_non_square_fastest"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025073, VkglTestCase_025073_1, VkglTestCase_025073_2);

#define VkglTestCase_025074_1 "dEQP-GLES3.functional.texture.mipmap."
#define VkglTestCase_025074_2 "2d.generate.rgba8888_non_square_nicest"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025074, VkglTestCase_025074_1, VkglTestCase_025074_2);
=======
static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025027, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025027 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture"
        ".mipmap.2d.generate.a8_fastest",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025027 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025027 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025028, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025028 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture"
        ".mipmap.2d.generate.a8_nicest",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025028 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025028 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025029, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025029 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.mi"
        "pmap.2d.generate.a8_npot_fastest",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025029 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025029 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025030, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025030 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.m"
        "ipmap.2d.generate.a8_npot_nicest",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025030 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025030 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025031, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025031 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.mipma"
        "p.2d.generate.a8_non_square_fastest",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025031 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025031 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025032, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025032 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.mipm"
        "ap.2d.generate.a8_non_square_nicest",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025032 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025032 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025033, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025033 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture"
        ".mipmap.2d.generate.l8_fastest",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025033 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025033 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025034, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025034 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture"
        ".mipmap.2d.generate.l8_nicest",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025034 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025034 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025035, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025035 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.mi"
        "pmap.2d.generate.l8_npot_fastest",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025035 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025035 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025036, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025036 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.m"
        "ipmap.2d.generate.l8_npot_nicest",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025036 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025036 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025037, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025037 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.mipma"
        "p.2d.generate.l8_non_square_fastest",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025037 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025037 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025038, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025038 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.mipm"
        "ap.2d.generate.l8_non_square_nicest",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025038 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025038 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025039, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025039 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture."
        "mipmap.2d.generate.la88_fastest",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025039 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025039 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025040, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025040 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture."
        "mipmap.2d.generate.la88_nicest",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025040 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025040 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025041, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025041 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.mip"
        "map.2d.generate.la88_npot_fastest",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025041 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025041 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025042, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025042 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.mi"
        "pmap.2d.generate.la88_npot_nicest",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025042 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025042 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025043, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025043 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.mipmap"
        ".2d.generate.la88_non_square_fastest",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025043 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025043 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025044, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025044 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.mipma"
        "p.2d.generate.la88_non_square_nicest",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025044 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025044 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025045, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025045 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.m"
        "ipmap.2d.generate.rgb565_fastest",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025045 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025045 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025046, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025046 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.m"
        "ipmap.2d.generate.rgb565_nicest",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025046 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025046 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025047, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025047 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.mipm"
        "ap.2d.generate.rgb565_npot_fastest",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025047 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025047 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025048, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025048 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.mip"
        "map.2d.generate.rgb565_npot_nicest",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025048 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025048 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025049, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025049 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.mipmap."
        "2d.generate.rgb565_non_square_fastest",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025049 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025049 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025050, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025050 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.mipmap"
        ".2d.generate.rgb565_non_square_nicest",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025050 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025050 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025051, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025051 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.m"
        "ipmap.2d.generate.rgb888_fastest",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025051 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025051 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025052, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025052 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.m"
        "ipmap.2d.generate.rgb888_nicest",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025052 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025052 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025053, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025053 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.mipm"
        "ap.2d.generate.rgb888_npot_fastest",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025053 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025053 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025054, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025054 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.mip"
        "map.2d.generate.rgb888_npot_nicest",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025054 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025054 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025055, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025055 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.mipmap."
        "2d.generate.rgb888_non_square_fastest",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025055 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025055 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025056, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025056 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.mipmap"
        ".2d.generate.rgb888_non_square_nicest",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025056 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025056 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025057, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025057 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.mi"
        "pmap.2d.generate.rgba4444_fastest",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025057 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025057 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025058, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025058 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.mi"
        "pmap.2d.generate.rgba4444_nicest",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025058 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025058 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025059, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025059 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.mipma"
        "p.2d.generate.rgba4444_npot_fastest",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025059 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025059 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025060, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025060 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.mipm"
        "ap.2d.generate.rgba4444_npot_nicest",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025060 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025060 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025061, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025061 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.mipmap.2"
        "d.generate.rgba4444_non_square_fastest",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025061 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025061 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025062, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025062 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.mipmap."
        "2d.generate.rgba4444_non_square_nicest",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025062 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025062 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025063, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025063 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.mi"
        "pmap.2d.generate.rgba5551_fastest",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025063 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025063 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025064, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025064 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.mi"
        "pmap.2d.generate.rgba5551_nicest",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025064 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025064 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025065, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025065 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.mipma"
        "p.2d.generate.rgba5551_npot_fastest",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025065 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025065 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025066, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025066 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.mipm"
        "ap.2d.generate.rgba5551_npot_nicest",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025066 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025066 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025067, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025067 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.mipmap.2"
        "d.generate.rgba5551_non_square_fastest",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025067 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025067 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025068, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025068 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.mipmap."
        "2d.generate.rgba5551_non_square_nicest",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025068 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025068 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025069, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025069 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.mi"
        "pmap.2d.generate.rgba8888_fastest",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025069 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025069 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025070, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025070 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.mi"
        "pmap.2d.generate.rgba8888_nicest",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025070 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025070 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025071, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025071 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.mipma"
        "p.2d.generate.rgba8888_npot_fastest",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025071 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025071 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025072, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025072 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.mipm"
        "ap.2d.generate.rgba8888_npot_nicest",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025072 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025072 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025073, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025073 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.mipmap.2"
        "d.generate.rgba8888_non_square_fastest",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025073 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025073 end";
}

static HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025074, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_025074 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.mipmap."
        "2d.generate.rgba8888_non_square_nicest",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30026TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30026TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30026TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30026TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30026TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_025074 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_025074 end";
}
>>>>>>> 119876a9a4cc1abc142c2cbcacfd0e9275690a87
