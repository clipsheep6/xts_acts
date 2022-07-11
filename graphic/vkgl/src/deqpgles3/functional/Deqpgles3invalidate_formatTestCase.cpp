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
#include "../ActsDeqpgles30033TestSuite.h"
#include "shrinkdefine.h"
=======
#include <gtest/gtest.h>
#include "../Deqpgles3BaseFunc.h"
#include "../ActsDeqpgles30033TestSuite.h"
>>>>>>> 119876a9a4cc1abc142c2cbcacfd0e9275690a87

using namespace std;
using namespace testing::ext;
using namespace OHOS;

<<<<<<< HEAD
#define VkglTestCase_032811_1 "dEQP-GLES3.functional.fbo"
#define VkglTestCase_032811_2 ".invalidate.format.rgba32i"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032811, VkglTestCase_032811_1, VkglTestCase_032811_2);

#define VkglTestCase_032812_1 "dEQP-GLES3.functional.fbo."
#define VkglTestCase_032812_2 "invalidate.format.rgba32ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032812, VkglTestCase_032812_1, VkglTestCase_032812_2);

#define VkglTestCase_032813_1 "dEQP-GLES3.functional.fbo"
#define VkglTestCase_032813_2 ".invalidate.format.rgba16i"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032813, VkglTestCase_032813_1, VkglTestCase_032813_2);

#define VkglTestCase_032814_1 "dEQP-GLES3.functional.fbo."
#define VkglTestCase_032814_2 "invalidate.format.rgba16ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032814, VkglTestCase_032814_1, VkglTestCase_032814_2);

#define VkglTestCase_032815_1 "dEQP-GLES3.functional.fb"
#define VkglTestCase_032815_2 "o.invalidate.format.rgba8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032815, VkglTestCase_032815_1, VkglTestCase_032815_2);

#define VkglTestCase_032816_1 "dEQP-GLES3.functional.fbo"
#define VkglTestCase_032816_2 ".invalidate.format.rgba8i"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032816, VkglTestCase_032816_1, VkglTestCase_032816_2);

#define VkglTestCase_032817_1 "dEQP-GLES3.functional.fbo"
#define VkglTestCase_032817_2 ".invalidate.format.rgba8ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032817, VkglTestCase_032817_1, VkglTestCase_032817_2);

#define VkglTestCase_032818_1 "dEQP-GLES3.functional.fbo.in"
#define VkglTestCase_032818_2 "validate.format.srgb8_alpha8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032818, VkglTestCase_032818_1, VkglTestCase_032818_2);

#define VkglTestCase_032819_1 "dEQP-GLES3.functional.fbo."
#define VkglTestCase_032819_2 "invalidate.format.rgb10_a2"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032819, VkglTestCase_032819_1, VkglTestCase_032819_2);

#define VkglTestCase_032820_1 "dEQP-GLES3.functional.fbo.i"
#define VkglTestCase_032820_2 "nvalidate.format.rgb10_a2ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032820, VkglTestCase_032820_1, VkglTestCase_032820_2);

#define VkglTestCase_032821_1 "dEQP-GLES3.functional.fb"
#define VkglTestCase_032821_2 "o.invalidate.format.rgba4"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032821, VkglTestCase_032821_1, VkglTestCase_032821_2);

#define VkglTestCase_032822_1 "dEQP-GLES3.functional.fbo"
#define VkglTestCase_032822_2 ".invalidate.format.rgb5_a1"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032822, VkglTestCase_032822_1, VkglTestCase_032822_2);

#define VkglTestCase_032823_1 "dEQP-GLES3.functional.fb"
#define VkglTestCase_032823_2 "o.invalidate.format.rgb8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032823, VkglTestCase_032823_1, VkglTestCase_032823_2);

#define VkglTestCase_032824_1 "dEQP-GLES3.functional.fbo"
#define VkglTestCase_032824_2 ".invalidate.format.rgb565"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032824, VkglTestCase_032824_1, VkglTestCase_032824_2);

#define VkglTestCase_032825_1 "dEQP-GLES3.functional.fb"
#define VkglTestCase_032825_2 "o.invalidate.format.rg32i"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032825, VkglTestCase_032825_1, VkglTestCase_032825_2);

#define VkglTestCase_032826_1 "dEQP-GLES3.functional.fbo"
#define VkglTestCase_032826_2 ".invalidate.format.rg32ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032826, VkglTestCase_032826_1, VkglTestCase_032826_2);

#define VkglTestCase_032827_1 "dEQP-GLES3.functional.fb"
#define VkglTestCase_032827_2 "o.invalidate.format.rg16i"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032827, VkglTestCase_032827_1, VkglTestCase_032827_2);

#define VkglTestCase_032828_1 "dEQP-GLES3.functional.fbo"
#define VkglTestCase_032828_2 ".invalidate.format.rg16ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032828, VkglTestCase_032828_1, VkglTestCase_032828_2);

#define VkglTestCase_032829_1 "dEQP-GLES3.functional.f"
#define VkglTestCase_032829_2 "bo.invalidate.format.rg8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032829, VkglTestCase_032829_1, VkglTestCase_032829_2);

#define VkglTestCase_032830_1 "dEQP-GLES3.functional.fb"
#define VkglTestCase_032830_2 "o.invalidate.format.rg8i"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032830, VkglTestCase_032830_1, VkglTestCase_032830_2);

#define VkglTestCase_032831_1 "dEQP-GLES3.functional.fb"
#define VkglTestCase_032831_2 "o.invalidate.format.rg8ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032831, VkglTestCase_032831_1, VkglTestCase_032831_2);

#define VkglTestCase_032832_1 "dEQP-GLES3.functional.fb"
#define VkglTestCase_032832_2 "o.invalidate.format.r32i"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032832, VkglTestCase_032832_1, VkglTestCase_032832_2);

#define VkglTestCase_032833_1 "dEQP-GLES3.functional.fb"
#define VkglTestCase_032833_2 "o.invalidate.format.r32ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032833, VkglTestCase_032833_1, VkglTestCase_032833_2);

#define VkglTestCase_032834_1 "dEQP-GLES3.functional.fb"
#define VkglTestCase_032834_2 "o.invalidate.format.r16i"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032834, VkglTestCase_032834_1, VkglTestCase_032834_2);

#define VkglTestCase_032835_1 "dEQP-GLES3.functional.fb"
#define VkglTestCase_032835_2 "o.invalidate.format.r16ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032835, VkglTestCase_032835_1, VkglTestCase_032835_2);

#define VkglTestCase_032836_1 "dEQP-GLES3.functional.f"
#define VkglTestCase_032836_2 "bo.invalidate.format.r8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032836, VkglTestCase_032836_1, VkglTestCase_032836_2);

#define VkglTestCase_032837_1 "dEQP-GLES3.functional.f"
#define VkglTestCase_032837_2 "bo.invalidate.format.r8i"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032837, VkglTestCase_032837_1, VkglTestCase_032837_2);

#define VkglTestCase_032838_1 "dEQP-GLES3.functional.fb"
#define VkglTestCase_032838_2 "o.invalidate.format.r8ui"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032838, VkglTestCase_032838_1, VkglTestCase_032838_2);

#define VkglTestCase_032839_1 "dEQP-GLES3.functional.fbo"
#define VkglTestCase_032839_2 ".invalidate.format.rgba32f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032839, VkglTestCase_032839_1, VkglTestCase_032839_2);

#define VkglTestCase_032840_1 "dEQP-GLES3.functional.fbo"
#define VkglTestCase_032840_2 ".invalidate.format.rgba16f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032840, VkglTestCase_032840_1, VkglTestCase_032840_2);

#define VkglTestCase_032841_1 "dEQP-GLES3.functional.fbo.inv"
#define VkglTestCase_032841_2 "alidate.format.r11f_g11f_b10f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032841, VkglTestCase_032841_1, VkglTestCase_032841_2);

#define VkglTestCase_032842_1 "dEQP-GLES3.functional.fb"
#define VkglTestCase_032842_2 "o.invalidate.format.rg32f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032842, VkglTestCase_032842_1, VkglTestCase_032842_2);

#define VkglTestCase_032843_1 "dEQP-GLES3.functional.fb"
#define VkglTestCase_032843_2 "o.invalidate.format.rg16f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032843, VkglTestCase_032843_1, VkglTestCase_032843_2);

#define VkglTestCase_032844_1 "dEQP-GLES3.functional.fb"
#define VkglTestCase_032844_2 "o.invalidate.format.r32f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032844, VkglTestCase_032844_1, VkglTestCase_032844_2);

#define VkglTestCase_032845_1 "dEQP-GLES3.functional.fb"
#define VkglTestCase_032845_2 "o.invalidate.format.r16f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032845, VkglTestCase_032845_1, VkglTestCase_032845_2);

#define VkglTestCase_032846_1 "dEQP-GLES3.functional.fbo.inval"
#define VkglTestCase_032846_2 "idate.format.depth_component32f"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032846, VkglTestCase_032846_1, VkglTestCase_032846_2);

#define VkglTestCase_032847_1 "dEQP-GLES3.functional.fbo.inva"
#define VkglTestCase_032847_2 "lidate.format.depth_component24"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032847, VkglTestCase_032847_1, VkglTestCase_032847_2);

#define VkglTestCase_032848_1 "dEQP-GLES3.functional.fbo.inva"
#define VkglTestCase_032848_2 "lidate.format.depth_component16"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032848, VkglTestCase_032848_1, VkglTestCase_032848_2);

#define VkglTestCase_032849_1 "dEQP-GLES3.functional.fbo.inva"
#define VkglTestCase_032849_2 "lidate.format.depth32f_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032849, VkglTestCase_032849_1, VkglTestCase_032849_2);

#define VkglTestCase_032850_1 "dEQP-GLES3.functional.fbo.inva"
#define VkglTestCase_032850_2 "lidate.format.depth24_stencil8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032850, VkglTestCase_032850_1, VkglTestCase_032850_2);

#define VkglTestCase_032851_1 "dEQP-GLES3.functional.fbo.inv"
#define VkglTestCase_032851_2 "alidate.format.stencil_index8"
SHRINK_HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032851, VkglTestCase_032851_1, VkglTestCase_032851_2);
=======
static HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032811, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032811 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo"
        ".invalidate.format.rgba32i",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032811 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032811 end";
}

static HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032812, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032812 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo."
        "invalidate.format.rgba32ui",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032812 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032812 end";
}

static HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032813, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032813 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo"
        ".invalidate.format.rgba16i",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032813 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032813 end";
}

static HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032814, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032814 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo."
        "invalidate.format.rgba16ui",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032814 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032814 end";
}

static HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032815, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032815 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fb"
        "o.invalidate.format.rgba8",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032815 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032815 end";
}

static HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032816, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032816 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo"
        ".invalidate.format.rgba8i",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032816 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032816 end";
}

static HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032817, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032817 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo"
        ".invalidate.format.rgba8ui",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032817 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032817 end";
}

static HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032818, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032818 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo.in"
        "validate.format.srgb8_alpha8",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032818 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032818 end";
}

static HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032819, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032819 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo."
        "invalidate.format.rgb10_a2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032819 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032819 end";
}

static HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032820, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032820 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo.i"
        "nvalidate.format.rgb10_a2ui",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032820 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032820 end";
}

static HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032821, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032821 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fb"
        "o.invalidate.format.rgba4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032821 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032821 end";
}

static HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032822, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032822 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo"
        ".invalidate.format.rgb5_a1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032822 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032822 end";
}

static HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032823, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032823 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fb"
        "o.invalidate.format.rgb8",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032823 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032823 end";
}

static HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032824, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032824 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo"
        ".invalidate.format.rgb565",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032824 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032824 end";
}

static HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032825, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032825 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fb"
        "o.invalidate.format.rg32i",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032825 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032825 end";
}

static HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032826, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032826 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo"
        ".invalidate.format.rg32ui",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032826 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032826 end";
}

static HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032827, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032827 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fb"
        "o.invalidate.format.rg16i",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032827 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032827 end";
}

static HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032828, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032828 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo"
        ".invalidate.format.rg16ui",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032828 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032828 end";
}

static HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032829, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032829 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.f"
        "bo.invalidate.format.rg8",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032829 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032829 end";
}

static HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032830, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032830 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fb"
        "o.invalidate.format.rg8i",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032830 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032830 end";
}

static HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032831, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032831 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fb"
        "o.invalidate.format.rg8ui",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032831 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032831 end";
}

static HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032832, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032832 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fb"
        "o.invalidate.format.r32i",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032832 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032832 end";
}

static HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032833, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032833 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fb"
        "o.invalidate.format.r32ui",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032833 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032833 end";
}

static HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032834, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032834 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fb"
        "o.invalidate.format.r16i",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032834 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032834 end";
}

static HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032835, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032835 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fb"
        "o.invalidate.format.r16ui",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032835 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032835 end";
}

static HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032836, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032836 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.f"
        "bo.invalidate.format.r8",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032836 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032836 end";
}

static HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032837, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032837 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.f"
        "bo.invalidate.format.r8i",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032837 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032837 end";
}

static HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032838, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032838 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fb"
        "o.invalidate.format.r8ui",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032838 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032838 end";
}

static HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032839, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032839 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo"
        ".invalidate.format.rgba32f",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032839 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032839 end";
}

static HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032840, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032840 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo"
        ".invalidate.format.rgba16f",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032840 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032840 end";
}

static HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032841, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032841 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo.inv"
        "alidate.format.r11f_g11f_b10f",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032841 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032841 end";
}

static HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032842, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032842 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fb"
        "o.invalidate.format.rg32f",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032842 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032842 end";
}

static HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032843, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032843 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fb"
        "o.invalidate.format.rg16f",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032843 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032843 end";
}

static HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032844, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032844 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fb"
        "o.invalidate.format.r32f",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032844 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032844 end";
}

static HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032845, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032845 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fb"
        "o.invalidate.format.r16f",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032845 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032845 end";
}

static HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032846, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032846 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo.inval"
        "idate.format.depth_component32f",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032846 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032846 end";
}

static HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032847, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032847 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo.inva"
        "lidate.format.depth_component24",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032847 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032847 end";
}

static HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032848, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032848 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo.inva"
        "lidate.format.depth_component16",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032848 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032848 end";
}

static HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032849, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032849 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo.inva"
        "lidate.format.depth32f_stencil8",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032849 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032849 end";
}

static HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032850, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032850 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo.inva"
        "lidate.format.depth24_stencil8",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032850 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032850 end";
}

static HWTEST_F(ActsDeqpgles30033TestSuite, TestCase_032851, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_032851 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.fbo.inv"
        "alidate.format.stencil_index8",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30033TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30033TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30033TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30033TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30033TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_032851 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_032851 end";
}
>>>>>>> 119876a9a4cc1abc142c2cbcacfd0e9275690a87
