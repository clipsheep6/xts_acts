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
#define VkglTestCase_022405_1 "dEQP-GLES3.functional.te"
#define VkglTestCase_022405_2 "xture.size.cube.15x15_l8"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022405, VkglTestCase_022405_1, VkglTestCase_022405_2);

#define VkglTestCase_022406_1 "dEQP-GLES3.functional.textu"
#define VkglTestCase_022406_2 "re.size.cube.15x15_rgba4444"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022406, VkglTestCase_022406_1, VkglTestCase_022406_2);

#define VkglTestCase_022407_1 "dEQP-GLES3.functional.text"
#define VkglTestCase_022407_2 "ure.size.cube.15x15_rgb888"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022407, VkglTestCase_022407_1, VkglTestCase_022407_2);

#define VkglTestCase_022408_1 "dEQP-GLES3.functional.textu"
#define VkglTestCase_022408_2 "re.size.cube.15x15_rgba8888"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022408, VkglTestCase_022408_1, VkglTestCase_022408_2);

#define VkglTestCase_022409_1 "dEQP-GLES3.functional.te"
#define VkglTestCase_022409_2 "xture.size.cube.16x16_l8"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022409, VkglTestCase_022409_1, VkglTestCase_022409_2);

#define VkglTestCase_022410_1 "dEQP-GLES3.functional.textu"
#define VkglTestCase_022410_2 "re.size.cube.16x16_l8_mipmap"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022410, VkglTestCase_022410_1, VkglTestCase_022410_2);

#define VkglTestCase_022411_1 "dEQP-GLES3.functional.textu"
#define VkglTestCase_022411_2 "re.size.cube.16x16_rgba4444"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022411, VkglTestCase_022411_1, VkglTestCase_022411_2);

#define VkglTestCase_022412_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_022412_2 "size.cube.16x16_rgba4444_mipmap"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022412, VkglTestCase_022412_1, VkglTestCase_022412_2);

#define VkglTestCase_022413_1 "dEQP-GLES3.functional.text"
#define VkglTestCase_022413_2 "ure.size.cube.16x16_rgb888"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022413, VkglTestCase_022413_1, VkglTestCase_022413_2);

#define VkglTestCase_022414_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_022414_2 ".size.cube.16x16_rgb888_mipmap"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022414, VkglTestCase_022414_1, VkglTestCase_022414_2);

#define VkglTestCase_022415_1 "dEQP-GLES3.functional.textu"
#define VkglTestCase_022415_2 "re.size.cube.16x16_rgba8888"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022415, VkglTestCase_022415_1, VkglTestCase_022415_2);

#define VkglTestCase_022416_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_022416_2 "size.cube.16x16_rgba8888_mipmap"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022416, VkglTestCase_022416_1, VkglTestCase_022416_2);

#define VkglTestCase_022417_1 "dEQP-GLES3.functional.te"
#define VkglTestCase_022417_2 "xture.size.cube.64x64_l8"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022417, VkglTestCase_022417_1, VkglTestCase_022417_2);

#define VkglTestCase_022418_1 "dEQP-GLES3.functional.textu"
#define VkglTestCase_022418_2 "re.size.cube.64x64_l8_mipmap"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022418, VkglTestCase_022418_1, VkglTestCase_022418_2);

#define VkglTestCase_022419_1 "dEQP-GLES3.functional.textu"
#define VkglTestCase_022419_2 "re.size.cube.64x64_rgba4444"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022419, VkglTestCase_022419_1, VkglTestCase_022419_2);

#define VkglTestCase_022420_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_022420_2 "size.cube.64x64_rgba4444_mipmap"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022420, VkglTestCase_022420_1, VkglTestCase_022420_2);

#define VkglTestCase_022421_1 "dEQP-GLES3.functional.text"
#define VkglTestCase_022421_2 "ure.size.cube.64x64_rgb888"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022421, VkglTestCase_022421_1, VkglTestCase_022421_2);

#define VkglTestCase_022422_1 "dEQP-GLES3.functional.texture"
#define VkglTestCase_022422_2 ".size.cube.64x64_rgb888_mipmap"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022422, VkglTestCase_022422_1, VkglTestCase_022422_2);

#define VkglTestCase_022423_1 "dEQP-GLES3.functional.textu"
#define VkglTestCase_022423_2 "re.size.cube.64x64_rgba8888"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022423, VkglTestCase_022423_1, VkglTestCase_022423_2);

#define VkglTestCase_022424_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_022424_2 "size.cube.64x64_rgba8888_mipmap"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022424, VkglTestCase_022424_1, VkglTestCase_022424_2);

#define VkglTestCase_022425_1 "dEQP-GLES3.functional.tex"
#define VkglTestCase_022425_2 "ture.size.cube.128x128_l8"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022425, VkglTestCase_022425_1, VkglTestCase_022425_2);

#define VkglTestCase_022426_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_022426_2 "e.size.cube.128x128_l8_mipmap"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022426, VkglTestCase_022426_1, VkglTestCase_022426_2);

#define VkglTestCase_022427_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_022427_2 "e.size.cube.128x128_rgba4444"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022427, VkglTestCase_022427_1, VkglTestCase_022427_2);

#define VkglTestCase_022428_1 "dEQP-GLES3.functional.texture.s"
#define VkglTestCase_022428_2 "ize.cube.128x128_rgba4444_mipmap"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022428, VkglTestCase_022428_1, VkglTestCase_022428_2);

#define VkglTestCase_022429_1 "dEQP-GLES3.functional.textu"
#define VkglTestCase_022429_2 "re.size.cube.128x128_rgb888"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022429, VkglTestCase_022429_1, VkglTestCase_022429_2);

#define VkglTestCase_022430_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_022430_2 "size.cube.128x128_rgb888_mipmap"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022430, VkglTestCase_022430_1, VkglTestCase_022430_2);

#define VkglTestCase_022431_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_022431_2 "e.size.cube.128x128_rgba8888"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022431, VkglTestCase_022431_1, VkglTestCase_022431_2);

#define VkglTestCase_022432_1 "dEQP-GLES3.functional.texture.s"
#define VkglTestCase_022432_2 "ize.cube.128x128_rgba8888_mipmap"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022432, VkglTestCase_022432_1, VkglTestCase_022432_2);

#define VkglTestCase_022433_1 "dEQP-GLES3.functional.tex"
#define VkglTestCase_022433_2 "ture.size.cube.256x256_l8"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022433, VkglTestCase_022433_1, VkglTestCase_022433_2);

#define VkglTestCase_022434_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_022434_2 "e.size.cube.256x256_l8_mipmap"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022434, VkglTestCase_022434_1, VkglTestCase_022434_2);

#define VkglTestCase_022435_1 "dEQP-GLES3.functional.texture.s"
#define VkglTestCase_022435_2 "ize.cube.256x256_rgba4444_mipmap"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022435, VkglTestCase_022435_1, VkglTestCase_022435_2);

#define VkglTestCase_022436_1 "dEQP-GLES3.functional.textu"
#define VkglTestCase_022436_2 "re.size.cube.256x256_rgb888"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022436, VkglTestCase_022436_1, VkglTestCase_022436_2);

#define VkglTestCase_022437_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_022437_2 "size.cube.256x256_rgb888_mipmap"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022437, VkglTestCase_022437_1, VkglTestCase_022437_2);

#define VkglTestCase_022438_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_022438_2 "e.size.cube.256x256_rgba8888"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022438, VkglTestCase_022438_1, VkglTestCase_022438_2);

#define VkglTestCase_022439_1 "dEQP-GLES3.functional.texture.s"
#define VkglTestCase_022439_2 "ize.cube.256x256_rgba8888_mipmap"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022439, VkglTestCase_022439_1, VkglTestCase_022439_2);

#define VkglTestCase_022440_1 "dEQP-GLES3.functional.tex"
#define VkglTestCase_022440_2 "ture.size.cube.512x512_l8"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022440, VkglTestCase_022440_1, VkglTestCase_022440_2);

#define VkglTestCase_022441_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_022441_2 "e.size.cube.512x512_l8_mipmap"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022441, VkglTestCase_022441_1, VkglTestCase_022441_2);

#define VkglTestCase_022442_1 "dEQP-GLES3.functional.texture.s"
#define VkglTestCase_022442_2 "ize.cube.512x512_rgba4444_mipmap"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022442, VkglTestCase_022442_1, VkglTestCase_022442_2);

#define VkglTestCase_022443_1 "dEQP-GLES3.functional.textu"
#define VkglTestCase_022443_2 "re.size.cube.512x512_rgb888"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022443, VkglTestCase_022443_1, VkglTestCase_022443_2);

#define VkglTestCase_022444_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_022444_2 "size.cube.512x512_rgb888_mipmap"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022444, VkglTestCase_022444_1, VkglTestCase_022444_2);

#define VkglTestCase_022445_1 "dEQP-GLES3.functional.textur"
#define VkglTestCase_022445_2 "e.size.cube.512x512_rgba8888"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022445, VkglTestCase_022445_1, VkglTestCase_022445_2);

#define VkglTestCase_022446_1 "dEQP-GLES3.functional.texture.s"
#define VkglTestCase_022446_2 "ize.cube.512x512_rgba8888_mipmap"
SHRINK_HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022446, VkglTestCase_022446_1, VkglTestCase_022446_2);
=======
static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022405, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022405 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.te"
        "xture.size.cube.15x15_l8",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022405 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022405 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022406, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022406 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textu"
        "re.size.cube.15x15_rgba4444",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022406 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022406 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022407, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022407 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.text"
        "ure.size.cube.15x15_rgb888",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022407 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022407 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022408, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022408 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textu"
        "re.size.cube.15x15_rgba8888",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022408 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022408 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022409, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022409 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.te"
        "xture.size.cube.16x16_l8",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022409 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022409 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022410, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022410 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textu"
        "re.size.cube.16x16_l8_mipmap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022410 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022410 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022411, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022411 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textu"
        "re.size.cube.16x16_rgba4444",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022411 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022411 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022412, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022412 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture."
        "size.cube.16x16_rgba4444_mipmap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022412 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022412 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022413, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022413 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.text"
        "ure.size.cube.16x16_rgb888",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022413 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022413 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022414, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022414 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture"
        ".size.cube.16x16_rgb888_mipmap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022414 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022414 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022415, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022415 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textu"
        "re.size.cube.16x16_rgba8888",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022415 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022415 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022416, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022416 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture."
        "size.cube.16x16_rgba8888_mipmap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022416 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022416 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022417, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022417 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.te"
        "xture.size.cube.64x64_l8",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022417 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022417 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022418, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022418 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textu"
        "re.size.cube.64x64_l8_mipmap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022418 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022418 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022419, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022419 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textu"
        "re.size.cube.64x64_rgba4444",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022419 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022419 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022420, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022420 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture."
        "size.cube.64x64_rgba4444_mipmap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022420 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022420 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022421, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022421 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.text"
        "ure.size.cube.64x64_rgb888",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022421 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022421 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022422, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022422 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture"
        ".size.cube.64x64_rgb888_mipmap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022422 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022422 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022423, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022423 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textu"
        "re.size.cube.64x64_rgba8888",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022423 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022423 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022424, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022424 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture."
        "size.cube.64x64_rgba8888_mipmap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022424 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022424 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022425, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022425 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.tex"
        "ture.size.cube.128x128_l8",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022425 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022425 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022426, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022426 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textur"
        "e.size.cube.128x128_l8_mipmap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022426 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022426 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022427, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022427 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textur"
        "e.size.cube.128x128_rgba4444",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022427 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022427 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022428, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022428 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.s"
        "ize.cube.128x128_rgba4444_mipmap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022428 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022428 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022429, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022429 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textu"
        "re.size.cube.128x128_rgb888",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022429 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022429 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022430, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022430 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture."
        "size.cube.128x128_rgb888_mipmap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022430 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022430 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022431, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022431 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textur"
        "e.size.cube.128x128_rgba8888",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022431 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022431 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022432, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022432 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.s"
        "ize.cube.128x128_rgba8888_mipmap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022432 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022432 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022433, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022433 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.tex"
        "ture.size.cube.256x256_l8",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022433 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022433 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022434, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022434 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textur"
        "e.size.cube.256x256_l8_mipmap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022434 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022434 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022435, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022435 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.s"
        "ize.cube.256x256_rgba4444_mipmap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022435 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022435 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022436, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022436 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textu"
        "re.size.cube.256x256_rgb888",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022436 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022436 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022437, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022437 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture."
        "size.cube.256x256_rgb888_mipmap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022437 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022437 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022438, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022438 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textur"
        "e.size.cube.256x256_rgba8888",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022438 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022438 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022439, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022439 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.s"
        "ize.cube.256x256_rgba8888_mipmap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022439 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022439 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022440, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022440 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.tex"
        "ture.size.cube.512x512_l8",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022440 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022440 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022441, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022441 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textur"
        "e.size.cube.512x512_l8_mipmap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022441 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022441 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022442, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022442 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.s"
        "ize.cube.512x512_rgba4444_mipmap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022442 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022442 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022443, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022443 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textu"
        "re.size.cube.512x512_rgb888",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022443 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022443 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022444, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022444 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture."
        "size.cube.512x512_rgb888_mipmap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022444 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022444 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022445, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022445 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.textur"
        "e.size.cube.512x512_rgba8888",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022445 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022445 end";
}

static HWTEST_F(ActsDeqpgles30023TestSuite, TestCase_022446, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_022446 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.s"
        "ize.cube.512x512_rgba8888_mipmap",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30023TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30023TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30023TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30023TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30023TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_022446 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_022446 end";
}
>>>>>>> 119876a9a4cc1abc142c2cbcacfd0e9275690a87
