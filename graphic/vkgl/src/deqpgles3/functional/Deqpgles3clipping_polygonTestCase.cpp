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
#include "../ActsDeqpgles30044TestSuite.h"
#include "shrinkdefine.h"
=======
#include <gtest/gtest.h>
#include "../Deqpgles3BaseFunc.h"
#include "../ActsDeqpgles30044TestSuite.h"
>>>>>>> 119876a9a4cc1abc142c2cbcacfd0e9275690a87

using namespace std;
using namespace testing::ext;
using namespace OHOS;

<<<<<<< HEAD
#define VkglTestCase_043327_1 "dEQP-GLES3.functional.clipping.p"
#define VkglTestCase_043327_2 "olygon.poly_clip_viewport_center"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043327, VkglTestCase_043327_1, VkglTestCase_043327_2);

#define VkglTestCase_043328_1 "dEQP-GLES3.functional.clipping.p"
#define VkglTestCase_043328_2 "olygon.poly_clip_viewport_corner"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043328, VkglTestCase_043328_1, VkglTestCase_043328_2);

#define VkglTestCase_043329_1 "dEQP-GLES3.functional.cli"
#define VkglTestCase_043329_2 "pping.polygon.poly_z_clip"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043329, VkglTestCase_043329_1, VkglTestCase_043329_2);

#define VkglTestCase_043330_1 "dEQP-GLES3.functional.clipping.po"
#define VkglTestCase_043330_2 "lygon.poly_z_clip_viewport_center"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043330, VkglTestCase_043330_1, VkglTestCase_043330_2);

#define VkglTestCase_043331_1 "dEQP-GLES3.functional.clipping.po"
#define VkglTestCase_043331_2 "lygon.poly_z_clip_viewport_corner"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043331, VkglTestCase_043331_1, VkglTestCase_043331_2);

#define VkglTestCase_043332_1 "dEQP-GLES3.functional.clipping.poly"
#define VkglTestCase_043332_2 "gon.large_poly_clip_viewport_center"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043332, VkglTestCase_043332_1, VkglTestCase_043332_2);

#define VkglTestCase_043333_1 "dEQP-GLES3.functional.clipping.poly"
#define VkglTestCase_043333_2 "gon.large_poly_clip_viewport_corner"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043333, VkglTestCase_043333_1, VkglTestCase_043333_2);

#define VkglTestCase_043334_1 "dEQP-GLES3.functional.clippi"
#define VkglTestCase_043334_2 "ng.polygon.large_poly_z_clip"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043334, VkglTestCase_043334_1, VkglTestCase_043334_2);

#define VkglTestCase_043335_1 "dEQP-GLES3.functional.clipping.polyg"
#define VkglTestCase_043335_2 "on.large_poly_z_clip_viewport_center"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043335, VkglTestCase_043335_1, VkglTestCase_043335_2);

#define VkglTestCase_043336_1 "dEQP-GLES3.functional.clipping.polyg"
#define VkglTestCase_043336_2 "on.large_poly_z_clip_viewport_corner"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043336, VkglTestCase_043336_1, VkglTestCase_043336_2);

#define VkglTestCase_043337_1 "dEQP-GLES3.functional.clipp"
#define VkglTestCase_043337_2 "ing.polygon.poly_attrib_clip"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043337, VkglTestCase_043337_1, VkglTestCase_043337_2);

#define VkglTestCase_043338_1 "dEQP-GLES3.functional.clipping.poly"
#define VkglTestCase_043338_2 "gon.poly_attrib_clip_viewport_center"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043338, VkglTestCase_043338_1, VkglTestCase_043338_2);

#define VkglTestCase_043339_1 "dEQP-GLES3.functional.clipping.poly"
#define VkglTestCase_043339_2 "gon.poly_attrib_clip_viewport_corner"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043339, VkglTestCase_043339_1, VkglTestCase_043339_2);

#define VkglTestCase_043340_1 "dEQP-GLES3.functional.cl"
#define VkglTestCase_043340_2 "ipping.polygon.multiple_0"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043340, VkglTestCase_043340_1, VkglTestCase_043340_2);

#define VkglTestCase_043341_1 "dEQP-GLES3.functional.clipping.p"
#define VkglTestCase_043341_2 "olygon.multiple_0_viewport_center"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043341, VkglTestCase_043341_1, VkglTestCase_043341_2);

#define VkglTestCase_043342_1 "dEQP-GLES3.functional.clipping.p"
#define VkglTestCase_043342_2 "olygon.multiple_0_viewport_corner"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043342, VkglTestCase_043342_1, VkglTestCase_043342_2);

#define VkglTestCase_043343_1 "dEQP-GLES3.functional.cl"
#define VkglTestCase_043343_2 "ipping.polygon.multiple_1"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043343, VkglTestCase_043343_1, VkglTestCase_043343_2);

#define VkglTestCase_043344_1 "dEQP-GLES3.functional.clipping.p"
#define VkglTestCase_043344_2 "olygon.multiple_1_viewport_center"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043344, VkglTestCase_043344_1, VkglTestCase_043344_2);

#define VkglTestCase_043345_1 "dEQP-GLES3.functional.clipping.p"
#define VkglTestCase_043345_2 "olygon.multiple_1_viewport_corner"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043345, VkglTestCase_043345_1, VkglTestCase_043345_2);

#define VkglTestCase_043346_1 "dEQP-GLES3.functional.cl"
#define VkglTestCase_043346_2 "ipping.polygon.multiple_2"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043346, VkglTestCase_043346_1, VkglTestCase_043346_2);

#define VkglTestCase_043347_1 "dEQP-GLES3.functional.clipping.p"
#define VkglTestCase_043347_2 "olygon.multiple_2_viewport_center"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043347, VkglTestCase_043347_1, VkglTestCase_043347_2);

#define VkglTestCase_043348_1 "dEQP-GLES3.functional.clipping.p"
#define VkglTestCase_043348_2 "olygon.multiple_2_viewport_corner"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043348, VkglTestCase_043348_1, VkglTestCase_043348_2);

#define VkglTestCase_043349_1 "dEQP-GLES3.functional.cl"
#define VkglTestCase_043349_2 "ipping.polygon.multiple_3"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043349, VkglTestCase_043349_1, VkglTestCase_043349_2);

#define VkglTestCase_043350_1 "dEQP-GLES3.functional.clipping.p"
#define VkglTestCase_043350_2 "olygon.multiple_3_viewport_center"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043350, VkglTestCase_043350_1, VkglTestCase_043350_2);

#define VkglTestCase_043351_1 "dEQP-GLES3.functional.clipping.p"
#define VkglTestCase_043351_2 "olygon.multiple_3_viewport_corner"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043351, VkglTestCase_043351_1, VkglTestCase_043351_2);

#define VkglTestCase_043352_1 "dEQP-GLES3.functional.cl"
#define VkglTestCase_043352_2 "ipping.polygon.multiple_4"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043352, VkglTestCase_043352_1, VkglTestCase_043352_2);

#define VkglTestCase_043353_1 "dEQP-GLES3.functional.clipping.p"
#define VkglTestCase_043353_2 "olygon.multiple_4_viewport_center"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043353, VkglTestCase_043353_1, VkglTestCase_043353_2);

#define VkglTestCase_043354_1 "dEQP-GLES3.functional.clipping.p"
#define VkglTestCase_043354_2 "olygon.multiple_4_viewport_corner"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043354, VkglTestCase_043354_1, VkglTestCase_043354_2);

#define VkglTestCase_043355_1 "dEQP-GLES3.functional.cl"
#define VkglTestCase_043355_2 "ipping.polygon.multiple_5"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043355, VkglTestCase_043355_1, VkglTestCase_043355_2);

#define VkglTestCase_043356_1 "dEQP-GLES3.functional.clipping.p"
#define VkglTestCase_043356_2 "olygon.multiple_5_viewport_center"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043356, VkglTestCase_043356_1, VkglTestCase_043356_2);

#define VkglTestCase_043357_1 "dEQP-GLES3.functional.clipping.p"
#define VkglTestCase_043357_2 "olygon.multiple_5_viewport_corner"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043357, VkglTestCase_043357_1, VkglTestCase_043357_2);

#define VkglTestCase_043358_1 "dEQP-GLES3.functional.cl"
#define VkglTestCase_043358_2 "ipping.polygon.multiple_6"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043358, VkglTestCase_043358_1, VkglTestCase_043358_2);

#define VkglTestCase_043359_1 "dEQP-GLES3.functional.clipping.p"
#define VkglTestCase_043359_2 "olygon.multiple_6_viewport_center"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043359, VkglTestCase_043359_1, VkglTestCase_043359_2);

#define VkglTestCase_043360_1 "dEQP-GLES3.functional.clipping.p"
#define VkglTestCase_043360_2 "olygon.multiple_6_viewport_corner"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043360, VkglTestCase_043360_1, VkglTestCase_043360_2);

#define VkglTestCase_043361_1 "dEQP-GLES3.functional.cl"
#define VkglTestCase_043361_2 "ipping.polygon.multiple_7"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043361, VkglTestCase_043361_1, VkglTestCase_043361_2);

#define VkglTestCase_043362_1 "dEQP-GLES3.functional.clipping.p"
#define VkglTestCase_043362_2 "olygon.multiple_7_viewport_center"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043362, VkglTestCase_043362_1, VkglTestCase_043362_2);

#define VkglTestCase_043363_1 "dEQP-GLES3.functional.clipping.p"
#define VkglTestCase_043363_2 "olygon.multiple_7_viewport_corner"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043363, VkglTestCase_043363_1, VkglTestCase_043363_2);

#define VkglTestCase_043364_1 "dEQP-GLES3.functional.cl"
#define VkglTestCase_043364_2 "ipping.polygon.multiple_8"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043364, VkglTestCase_043364_1, VkglTestCase_043364_2);

#define VkglTestCase_043365_1 "dEQP-GLES3.functional.clipping.p"
#define VkglTestCase_043365_2 "olygon.multiple_8_viewport_center"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043365, VkglTestCase_043365_1, VkglTestCase_043365_2);

#define VkglTestCase_043366_1 "dEQP-GLES3.functional.clipping.p"
#define VkglTestCase_043366_2 "olygon.multiple_8_viewport_corner"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043366, VkglTestCase_043366_1, VkglTestCase_043366_2);

#define VkglTestCase_043367_1 "dEQP-GLES3.functional.cl"
#define VkglTestCase_043367_2 "ipping.polygon.multiple_9"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043367, VkglTestCase_043367_1, VkglTestCase_043367_2);

#define VkglTestCase_043368_1 "dEQP-GLES3.functional.clipping.p"
#define VkglTestCase_043368_2 "olygon.multiple_9_viewport_center"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043368, VkglTestCase_043368_1, VkglTestCase_043368_2);

#define VkglTestCase_043369_1 "dEQP-GLES3.functional.clipping.p"
#define VkglTestCase_043369_2 "olygon.multiple_9_viewport_corner"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043369, VkglTestCase_043369_1, VkglTestCase_043369_2);

#define VkglTestCase_043370_1 "dEQP-GLES3.functional.cli"
#define VkglTestCase_043370_2 "pping.polygon.multiple_10"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043370, VkglTestCase_043370_1, VkglTestCase_043370_2);

#define VkglTestCase_043371_1 "dEQP-GLES3.functional.clipping.po"
#define VkglTestCase_043371_2 "lygon.multiple_10_viewport_center"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043371, VkglTestCase_043371_1, VkglTestCase_043371_2);

#define VkglTestCase_043372_1 "dEQP-GLES3.functional.clipping.po"
#define VkglTestCase_043372_2 "lygon.multiple_10_viewport_corner"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043372, VkglTestCase_043372_1, VkglTestCase_043372_2);

#define VkglTestCase_043373_1 "dEQP-GLES3.functional.cli"
#define VkglTestCase_043373_2 "pping.polygon.multiple_11"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043373, VkglTestCase_043373_1, VkglTestCase_043373_2);

#define VkglTestCase_043374_1 "dEQP-GLES3.functional.clipping.po"
#define VkglTestCase_043374_2 "lygon.multiple_11_viewport_center"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043374, VkglTestCase_043374_1, VkglTestCase_043374_2);

#define VkglTestCase_043375_1 "dEQP-GLES3.functional.clipping.po"
#define VkglTestCase_043375_2 "lygon.multiple_11_viewport_corner"
SHRINK_HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043375, VkglTestCase_043375_1, VkglTestCase_043375_2);
=======
static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043327, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043327 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.clipping.p"
        "olygon.poly_clip_viewport_center",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043327 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043327 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043328, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043328 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.clipping.p"
        "olygon.poly_clip_viewport_corner",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043328 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043328 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043329, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043329 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.cli"
        "pping.polygon.poly_z_clip",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043329 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043329 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043330, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043330 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.clipping.po"
        "lygon.poly_z_clip_viewport_center",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043330 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043330 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043331, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043331 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.clipping.po"
        "lygon.poly_z_clip_viewport_corner",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043331 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043331 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043332, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043332 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.clipping.poly"
        "gon.large_poly_clip_viewport_center",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043332 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043332 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043333, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043333 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.clipping.poly"
        "gon.large_poly_clip_viewport_corner",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043333 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043333 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043334, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043334 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.clippi"
        "ng.polygon.large_poly_z_clip",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043334 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043334 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043335, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043335 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.clipping.polyg"
        "on.large_poly_z_clip_viewport_center",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043335 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043335 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043336, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043336 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.clipping.polyg"
        "on.large_poly_z_clip_viewport_corner",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043336 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043336 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043337, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043337 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.clipp"
        "ing.polygon.poly_attrib_clip",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043337 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043337 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043338, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043338 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.clipping.poly"
        "gon.poly_attrib_clip_viewport_center",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043338 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043338 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043339, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043339 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.clipping.poly"
        "gon.poly_attrib_clip_viewport_corner",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043339 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043339 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043340, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043340 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.cl"
        "ipping.polygon.multiple_0",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043340 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043340 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043341, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043341 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.clipping.p"
        "olygon.multiple_0_viewport_center",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043341 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043341 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043342, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043342 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.clipping.p"
        "olygon.multiple_0_viewport_corner",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043342 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043342 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043343, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043343 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.cl"
        "ipping.polygon.multiple_1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043343 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043343 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043344, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043344 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.clipping.p"
        "olygon.multiple_1_viewport_center",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043344 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043344 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043345, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043345 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.clipping.p"
        "olygon.multiple_1_viewport_corner",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043345 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043345 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043346, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043346 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.cl"
        "ipping.polygon.multiple_2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043346 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043346 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043347, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043347 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.clipping.p"
        "olygon.multiple_2_viewport_center",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043347 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043347 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043348, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043348 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.clipping.p"
        "olygon.multiple_2_viewport_corner",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043348 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043348 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043349, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043349 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.cl"
        "ipping.polygon.multiple_3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043349 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043349 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043350, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043350 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.clipping.p"
        "olygon.multiple_3_viewport_center",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043350 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043350 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043351, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043351 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.clipping.p"
        "olygon.multiple_3_viewport_corner",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043351 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043351 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043352, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043352 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.cl"
        "ipping.polygon.multiple_4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043352 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043352 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043353, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043353 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.clipping.p"
        "olygon.multiple_4_viewport_center",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043353 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043353 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043354, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043354 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.clipping.p"
        "olygon.multiple_4_viewport_corner",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043354 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043354 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043355, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043355 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.cl"
        "ipping.polygon.multiple_5",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043355 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043355 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043356, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043356 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.clipping.p"
        "olygon.multiple_5_viewport_center",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043356 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043356 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043357, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043357 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.clipping.p"
        "olygon.multiple_5_viewport_corner",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043357 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043357 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043358, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043358 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.cl"
        "ipping.polygon.multiple_6",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043358 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043358 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043359, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043359 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.clipping.p"
        "olygon.multiple_6_viewport_center",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043359 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043359 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043360, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043360 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.clipping.p"
        "olygon.multiple_6_viewport_corner",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043360 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043360 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043361, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043361 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.cl"
        "ipping.polygon.multiple_7",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043361 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043361 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043362, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043362 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.clipping.p"
        "olygon.multiple_7_viewport_center",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043362 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043362 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043363, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043363 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.clipping.p"
        "olygon.multiple_7_viewport_corner",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043363 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043363 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043364, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043364 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.cl"
        "ipping.polygon.multiple_8",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043364 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043364 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043365, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043365 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.clipping.p"
        "olygon.multiple_8_viewport_center",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043365 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043365 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043366, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043366 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.clipping.p"
        "olygon.multiple_8_viewport_corner",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043366 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043366 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043367, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043367 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.cl"
        "ipping.polygon.multiple_9",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043367 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043367 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043368, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043368 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.clipping.p"
        "olygon.multiple_9_viewport_center",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043368 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043368 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043369, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043369 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.clipping.p"
        "olygon.multiple_9_viewport_corner",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043369 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043369 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043370, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043370 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.cli"
        "pping.polygon.multiple_10",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043370 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043370 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043371, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043371 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.clipping.po"
        "lygon.multiple_10_viewport_center",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043371 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043371 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043372, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043372 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.clipping.po"
        "lygon.multiple_10_viewport_corner",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043372 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043372 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043373, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043373 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.cli"
        "pping.polygon.multiple_11",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043373 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043373 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043374, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043374 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.clipping.po"
        "lygon.multiple_11_viewport_center",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043374 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043374 end";
}

static HWTEST_F(ActsDeqpgles30044TestSuite, TestCase_043375, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_043375 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.clipping.po"
        "lygon.multiple_11_viewport_corner",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30044TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30044TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30044TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30044TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30044TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_043375 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_043375 end";
}
>>>>>>> 119876a9a4cc1abc142c2cbcacfd0e9275690a87
