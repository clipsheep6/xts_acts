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
#include "../ActsDeqpgles30023TestSuite.h"
#include "shrinkdefine.h"
=======
#include <gtest/gtest.h>
#include "../Deqpgles3BaseFunc.h"
#include "../ActsDeqpgles30023TestSuite.h"
>>>>>>> 119876a9a4cc1abc142c2cbcacfd0e9275690a87

using namespace std;
using namespace testing::ext;
using namespace OHOS;

<<<<<<< HEAD
#define VkglTestCase_022325_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_022325_2 ".format.compressed.etc1_2d_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022325, VkglTestCase_022325_1, VkglTestCase_022325_2);

#define VkglTestCase_022326_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_022326_2 "format.compressed.etc1_2d_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022326, VkglTestCase_022326_1, VkglTestCase_022326_2);

#define VkglTestCase_022327_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_022327_2 "format.compressed.etc1_cube_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022327, VkglTestCase_022327_1, VkglTestCase_022327_2);

#define VkglTestCase_022328_1 "dEQP-GLES3.functional.texture.f"
#define VkglTestCase_022328_2 "ormat.compressed.etc1_cube_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022328, VkglTestCase_022328_1, VkglTestCase_022328_2);

#define VkglTestCase_022329_1 "dEQP-GLES3.functional.texture.f"
#define VkglTestCase_022329_2 "ormat.compressed.eac_r11_2d_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022329, VkglTestCase_022329_1, VkglTestCase_022329_2);

#define VkglTestCase_022330_1 "dEQP-GLES3.functional.texture.fo"
#define VkglTestCase_022330_2 "rmat.compressed.eac_r11_cube_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022330, VkglTestCase_022330_1, VkglTestCase_022330_2);

#define VkglTestCase_022331_1 "dEQP-GLES3.functional.texture.f"
#define VkglTestCase_022331_2 "ormat.compressed.eac_r11_2d_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022331, VkglTestCase_022331_1, VkglTestCase_022331_2);

#define VkglTestCase_022332_1 "dEQP-GLES3.functional.texture.fo"
#define VkglTestCase_022332_2 "rmat.compressed.eac_r11_cube_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022332, VkglTestCase_022332_1, VkglTestCase_022332_2);

#define VkglTestCase_022333_1 "dEQP-GLES3.functional.texture.form"
#define VkglTestCase_022333_2 "at.compressed.eac_signed_r11_2d_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022333, VkglTestCase_022333_1, VkglTestCase_022333_2);

#define VkglTestCase_022334_1 "dEQP-GLES3.functional.texture.forma"
#define VkglTestCase_022334_2 "t.compressed.eac_signed_r11_cube_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022334, VkglTestCase_022334_1, VkglTestCase_022334_2);

#define VkglTestCase_022335_1 "dEQP-GLES3.functional.texture.forma"
#define VkglTestCase_022335_2 "t.compressed.eac_signed_r11_2d_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022335, VkglTestCase_022335_1, VkglTestCase_022335_2);

#define VkglTestCase_022336_1 "dEQP-GLES3.functional.texture.format"
#define VkglTestCase_022336_2 ".compressed.eac_signed_r11_cube_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022336, VkglTestCase_022336_1, VkglTestCase_022336_2);

#define VkglTestCase_022337_1 "dEQP-GLES3.functional.texture.f"
#define VkglTestCase_022337_2 "ormat.compressed.eac_rg11_2d_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022337, VkglTestCase_022337_1, VkglTestCase_022337_2);

#define VkglTestCase_022338_1 "dEQP-GLES3.functional.texture.fo"
#define VkglTestCase_022338_2 "rmat.compressed.eac_rg11_cube_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022338, VkglTestCase_022338_1, VkglTestCase_022338_2);

#define VkglTestCase_022339_1 "dEQP-GLES3.functional.texture.fo"
#define VkglTestCase_022339_2 "rmat.compressed.eac_rg11_2d_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022339, VkglTestCase_022339_1, VkglTestCase_022339_2);

#define VkglTestCase_022340_1 "dEQP-GLES3.functional.texture.for"
#define VkglTestCase_022340_2 "mat.compressed.eac_rg11_cube_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022340, VkglTestCase_022340_1, VkglTestCase_022340_2);

#define VkglTestCase_022341_1 "dEQP-GLES3.functional.texture.forma"
#define VkglTestCase_022341_2 "t.compressed.eac_signed_rg11_2d_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022341, VkglTestCase_022341_1, VkglTestCase_022341_2);

#define VkglTestCase_022342_1 "dEQP-GLES3.functional.texture.format"
#define VkglTestCase_022342_2 ".compressed.eac_signed_rg11_cube_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022342, VkglTestCase_022342_1, VkglTestCase_022342_2);

#define VkglTestCase_022343_1 "dEQP-GLES3.functional.texture.forma"
#define VkglTestCase_022343_2 "t.compressed.eac_signed_rg11_2d_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022343, VkglTestCase_022343_1, VkglTestCase_022343_2);

#define VkglTestCase_022344_1 "dEQP-GLES3.functional.texture.format"
#define VkglTestCase_022344_2 ".compressed.eac_signed_rg11_cube_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022344, VkglTestCase_022344_1, VkglTestCase_022344_2);

#define VkglTestCase_022345_1 "dEQP-GLES3.functional.texture.fo"
#define VkglTestCase_022345_2 "rmat.compressed.etc2_rgb8_2d_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022345, VkglTestCase_022345_1, VkglTestCase_022345_2);

#define VkglTestCase_022346_1 "dEQP-GLES3.functional.texture.for"
#define VkglTestCase_022346_2 "mat.compressed.etc2_rgb8_cube_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022346, VkglTestCase_022346_1, VkglTestCase_022346_2);

#define VkglTestCase_022347_1 "dEQP-GLES3.functional.texture.fo"
#define VkglTestCase_022347_2 "rmat.compressed.etc2_rgb8_2d_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022347, VkglTestCase_022347_1, VkglTestCase_022347_2);

#define VkglTestCase_022348_1 "dEQP-GLES3.functional.texture.for"
#define VkglTestCase_022348_2 "mat.compressed.etc2_rgb8_cube_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022348, VkglTestCase_022348_1, VkglTestCase_022348_2);

#define VkglTestCase_022349_1 "dEQP-GLES3.functional.texture.fo"
#define VkglTestCase_022349_2 "rmat.compressed.etc2_srgb8_2d_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022349, VkglTestCase_022349_1, VkglTestCase_022349_2);

#define VkglTestCase_022350_1 "dEQP-GLES3.functional.texture.for"
#define VkglTestCase_022350_2 "mat.compressed.etc2_srgb8_cube_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022350, VkglTestCase_022350_1, VkglTestCase_022350_2);

#define VkglTestCase_022351_1 "dEQP-GLES3.functional.texture.for"
#define VkglTestCase_022351_2 "mat.compressed.etc2_srgb8_2d_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022351, VkglTestCase_022351_1, VkglTestCase_022351_2);

#define VkglTestCase_022352_1 "dEQP-GLES3.functional.texture.form"
#define VkglTestCase_022352_2 "at.compressed.etc2_srgb8_cube_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022352, VkglTestCase_022352_1, VkglTestCase_022352_2);

#define VkglTestCase_022353_1 "dEQP-GLES3.functional.texture.format.compr"
#define VkglTestCase_022353_2 "essed.etc2_rgb8_punchthrough_alpha1_2d_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022353, VkglTestCase_022353_1, VkglTestCase_022353_2);

#define VkglTestCase_022354_1 "dEQP-GLES3.functional.texture.format.compre"
#define VkglTestCase_022354_2 "ssed.etc2_rgb8_punchthrough_alpha1_cube_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022354, VkglTestCase_022354_1, VkglTestCase_022354_2);

#define VkglTestCase_022355_1 "dEQP-GLES3.functional.texture.format.compr"
#define VkglTestCase_022355_2 "essed.etc2_rgb8_punchthrough_alpha1_2d_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022355, VkglTestCase_022355_1, VkglTestCase_022355_2);

#define VkglTestCase_022356_1 "dEQP-GLES3.functional.texture.format.compre"
#define VkglTestCase_022356_2 "ssed.etc2_rgb8_punchthrough_alpha1_cube_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022356, VkglTestCase_022356_1, VkglTestCase_022356_2);

#define VkglTestCase_022357_1 "dEQP-GLES3.functional.texture.format.compr"
#define VkglTestCase_022357_2 "essed.etc2_srgb8_punchthrough_alpha1_2d_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022357, VkglTestCase_022357_1, VkglTestCase_022357_2);

#define VkglTestCase_022358_1 "dEQP-GLES3.functional.texture.format.compre"
#define VkglTestCase_022358_2 "ssed.etc2_srgb8_punchthrough_alpha1_cube_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022358, VkglTestCase_022358_1, VkglTestCase_022358_2);

#define VkglTestCase_022359_1 "dEQP-GLES3.functional.texture.format.compre"
#define VkglTestCase_022359_2 "ssed.etc2_srgb8_punchthrough_alpha1_2d_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022359, VkglTestCase_022359_1, VkglTestCase_022359_2);

#define VkglTestCase_022360_1 "dEQP-GLES3.functional.texture.format.compres"
#define VkglTestCase_022360_2 "sed.etc2_srgb8_punchthrough_alpha1_cube_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022360, VkglTestCase_022360_1, VkglTestCase_022360_2);

#define VkglTestCase_022361_1 "dEQP-GLES3.functional.texture.form"
#define VkglTestCase_022361_2 "at.compressed.etc2_eac_rgba8_2d_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022361, VkglTestCase_022361_1, VkglTestCase_022361_2);

#define VkglTestCase_022362_1 "dEQP-GLES3.functional.texture.forma"
#define VkglTestCase_022362_2 "t.compressed.etc2_eac_rgba8_cube_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022362, VkglTestCase_022362_1, VkglTestCase_022362_2);

#define VkglTestCase_022363_1 "dEQP-GLES3.functional.texture.forma"
#define VkglTestCase_022363_2 "t.compressed.etc2_eac_rgba8_2d_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022363, VkglTestCase_022363_1, VkglTestCase_022363_2);

#define VkglTestCase_022364_1 "dEQP-GLES3.functional.texture.format"
#define VkglTestCase_022364_2 ".compressed.etc2_eac_rgba8_cube_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022364, VkglTestCase_022364_1, VkglTestCase_022364_2);

#define VkglTestCase_022365_1 "dEQP-GLES3.functional.texture.format.c"
#define VkglTestCase_022365_2 "ompressed.etc2_eac_srgb8_alpha8_2d_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022365, VkglTestCase_022365_1, VkglTestCase_022365_2);

#define VkglTestCase_022366_1 "dEQP-GLES3.functional.texture.format.co"
#define VkglTestCase_022366_2 "mpressed.etc2_eac_srgb8_alpha8_cube_pot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022366, VkglTestCase_022366_1, VkglTestCase_022366_2);

#define VkglTestCase_022367_1 "dEQP-GLES3.functional.texture.format.c"
#define VkglTestCase_022367_2 "ompressed.etc2_eac_srgb8_alpha8_2d_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022367, VkglTestCase_022367_1, VkglTestCase_022367_2);

#define VkglTestCase_022368_1 "dEQP-GLES3.functional.texture.format.co"
#define VkglTestCase_022368_2 "mpressed.etc2_eac_srgb8_alpha8_cube_npot"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022368, VkglTestCase_022368_1, VkglTestCase_022368_2);
=======
static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022325, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022325 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture"
        ".format.compressed.etc1_2d_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022325 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022325 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022326, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022326 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture."
        "format.compressed.etc1_2d_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022326 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022326 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022327, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022327 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture."
        "format.compressed.etc1_cube_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022327 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022327 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022328, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022328 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.f"
        "ormat.compressed.etc1_cube_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022328 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022328 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022329, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022329 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.f"
        "ormat.compressed.eac_r11_2d_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022329 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022329 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022330, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022330 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.fo"
        "rmat.compressed.eac_r11_cube_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022330 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022330 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022331, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022331 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.f"
        "ormat.compressed.eac_r11_2d_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022331 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022331 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022332, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022332 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.fo"
        "rmat.compressed.eac_r11_cube_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022332 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022332 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022333, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022333 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.form"
        "at.compressed.eac_signed_r11_2d_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022333 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022333 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022334, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022334 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.forma"
        "t.compressed.eac_signed_r11_cube_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022334 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022334 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022335, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022335 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.forma"
        "t.compressed.eac_signed_r11_2d_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022335 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022335 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022336, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022336 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.format"
        ".compressed.eac_signed_r11_cube_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022336 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022336 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022337, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022337 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.f"
        "ormat.compressed.eac_rg11_2d_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022337 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022337 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022338, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022338 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.fo"
        "rmat.compressed.eac_rg11_cube_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022338 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022338 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022339, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022339 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.fo"
        "rmat.compressed.eac_rg11_2d_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022339 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022339 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022340, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022340 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.for"
        "mat.compressed.eac_rg11_cube_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022340 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022340 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022341, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022341 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.forma"
        "t.compressed.eac_signed_rg11_2d_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022341 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022341 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022342, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022342 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.format"
        ".compressed.eac_signed_rg11_cube_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022342 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022342 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022343, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022343 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.forma"
        "t.compressed.eac_signed_rg11_2d_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022343 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022343 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022344, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022344 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.format"
        ".compressed.eac_signed_rg11_cube_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022344 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022344 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022345, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022345 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.fo"
        "rmat.compressed.etc2_rgb8_2d_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022345 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022345 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022346, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022346 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.for"
        "mat.compressed.etc2_rgb8_cube_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022346 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022346 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022347, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022347 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.fo"
        "rmat.compressed.etc2_rgb8_2d_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022347 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022347 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022348, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022348 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.for"
        "mat.compressed.etc2_rgb8_cube_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022348 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022348 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022349, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022349 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.fo"
        "rmat.compressed.etc2_srgb8_2d_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022349 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022349 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022350, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022350 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.for"
        "mat.compressed.etc2_srgb8_cube_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022350 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022350 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022351, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022351 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.for"
        "mat.compressed.etc2_srgb8_2d_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022351 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022351 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022352, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022352 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.form"
        "at.compressed.etc2_srgb8_cube_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022352 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022352 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022353, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022353 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.format.compr"
        "essed.etc2_rgb8_punchthrough_alpha1_2d_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022353 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022353 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022354, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022354 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.format.compre"
        "ssed.etc2_rgb8_punchthrough_alpha1_cube_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022354 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022354 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022355, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022355 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.format.compr"
        "essed.etc2_rgb8_punchthrough_alpha1_2d_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022355 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022355 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022356, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022356 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.format.compre"
        "ssed.etc2_rgb8_punchthrough_alpha1_cube_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022356 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022356 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022357, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022357 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.format.compr"
        "essed.etc2_srgb8_punchthrough_alpha1_2d_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022357 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022357 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022358, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022358 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.format.compre"
        "ssed.etc2_srgb8_punchthrough_alpha1_cube_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022358 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022358 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022359, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022359 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.format.compre"
        "ssed.etc2_srgb8_punchthrough_alpha1_2d_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022359 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022359 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022360, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022360 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.format.compres"
        "sed.etc2_srgb8_punchthrough_alpha1_cube_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022360 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022360 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022361, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022361 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.form"
        "at.compressed.etc2_eac_rgba8_2d_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022361 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022361 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022362, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022362 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.forma"
        "t.compressed.etc2_eac_rgba8_cube_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022362 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022362 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022363, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022363 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.forma"
        "t.compressed.etc2_eac_rgba8_2d_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022363 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022363 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022364, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022364 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.format"
        ".compressed.etc2_eac_rgba8_cube_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022364 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022364 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022365, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022365 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.format.c"
        "ompressed.etc2_eac_srgb8_alpha8_2d_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022365 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022365 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022366, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022366 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.format.co"
        "mpressed.etc2_eac_srgb8_alpha8_cube_pot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022366 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022366 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022367, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022367 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.format.c"
        "ompressed.etc2_eac_srgb8_alpha8_2d_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022367 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022367 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022368, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022368 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.format.co"
        "mpressed.etc2_eac_srgb8_alpha8_cube_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022368 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022368 end";
}
>>>>>>> 119876a9a4cc1abc142c2cbcacfd0e9275690a87
