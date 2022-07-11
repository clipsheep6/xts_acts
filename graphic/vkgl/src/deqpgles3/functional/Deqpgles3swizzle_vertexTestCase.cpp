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
#include "../ActsDeqpgles30021TestSuite.h"
#include "shrinkdefine.h"
=======
#include <gtest/gtest.h>
#include "../Deqpgles3BaseFunc.h"
#include "../ActsDeqpgles30021TestSuite.h"
>>>>>>> 119876a9a4cc1abc142c2cbcacfd0e9275690a87

using namespace std;
using namespace testing::ext;
using namespace OHOS;

<<<<<<< HEAD
#define VkglTestCase_020594_1 "dEQP-GLES3.functional.shad"
#define VkglTestCase_020594_2 "ers.random.swizzle.vertex.0"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020594, VkglTestCase_020594_1, VkglTestCase_020594_2);

#define VkglTestCase_020595_1 "dEQP-GLES3.functional.shad"
#define VkglTestCase_020595_2 "ers.random.swizzle.vertex.1"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020595, VkglTestCase_020595_1, VkglTestCase_020595_2);

#define VkglTestCase_020596_1 "dEQP-GLES3.functional.shad"
#define VkglTestCase_020596_2 "ers.random.swizzle.vertex.2"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020596, VkglTestCase_020596_1, VkglTestCase_020596_2);

#define VkglTestCase_020597_1 "dEQP-GLES3.functional.shad"
#define VkglTestCase_020597_2 "ers.random.swizzle.vertex.3"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020597, VkglTestCase_020597_1, VkglTestCase_020597_2);

#define VkglTestCase_020598_1 "dEQP-GLES3.functional.shad"
#define VkglTestCase_020598_2 "ers.random.swizzle.vertex.4"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020598, VkglTestCase_020598_1, VkglTestCase_020598_2);

#define VkglTestCase_020599_1 "dEQP-GLES3.functional.shad"
#define VkglTestCase_020599_2 "ers.random.swizzle.vertex.5"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020599, VkglTestCase_020599_1, VkglTestCase_020599_2);

#define VkglTestCase_020600_1 "dEQP-GLES3.functional.shad"
#define VkglTestCase_020600_2 "ers.random.swizzle.vertex.6"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020600, VkglTestCase_020600_1, VkglTestCase_020600_2);

#define VkglTestCase_020601_1 "dEQP-GLES3.functional.shad"
#define VkglTestCase_020601_2 "ers.random.swizzle.vertex.7"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020601, VkglTestCase_020601_1, VkglTestCase_020601_2);

#define VkglTestCase_020602_1 "dEQP-GLES3.functional.shad"
#define VkglTestCase_020602_2 "ers.random.swizzle.vertex.8"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020602, VkglTestCase_020602_1, VkglTestCase_020602_2);

#define VkglTestCase_020603_1 "dEQP-GLES3.functional.shad"
#define VkglTestCase_020603_2 "ers.random.swizzle.vertex.9"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020603, VkglTestCase_020603_1, VkglTestCase_020603_2);

#define VkglTestCase_020604_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_020604_2 "rs.random.swizzle.vertex.10"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020604, VkglTestCase_020604_1, VkglTestCase_020604_2);

#define VkglTestCase_020605_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_020605_2 "rs.random.swizzle.vertex.11"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020605, VkglTestCase_020605_1, VkglTestCase_020605_2);

#define VkglTestCase_020606_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_020606_2 "rs.random.swizzle.vertex.12"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020606, VkglTestCase_020606_1, VkglTestCase_020606_2);

#define VkglTestCase_020607_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_020607_2 "rs.random.swizzle.vertex.13"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020607, VkglTestCase_020607_1, VkglTestCase_020607_2);

#define VkglTestCase_020608_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_020608_2 "rs.random.swizzle.vertex.14"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020608, VkglTestCase_020608_1, VkglTestCase_020608_2);

#define VkglTestCase_020609_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_020609_2 "rs.random.swizzle.vertex.15"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020609, VkglTestCase_020609_1, VkglTestCase_020609_2);

#define VkglTestCase_020610_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_020610_2 "rs.random.swizzle.vertex.16"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020610, VkglTestCase_020610_1, VkglTestCase_020610_2);

#define VkglTestCase_020611_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_020611_2 "rs.random.swizzle.vertex.17"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020611, VkglTestCase_020611_1, VkglTestCase_020611_2);

#define VkglTestCase_020612_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_020612_2 "rs.random.swizzle.vertex.18"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020612, VkglTestCase_020612_1, VkglTestCase_020612_2);

#define VkglTestCase_020613_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_020613_2 "rs.random.swizzle.vertex.19"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020613, VkglTestCase_020613_1, VkglTestCase_020613_2);

#define VkglTestCase_020614_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_020614_2 "rs.random.swizzle.vertex.20"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020614, VkglTestCase_020614_1, VkglTestCase_020614_2);

#define VkglTestCase_020615_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_020615_2 "rs.random.swizzle.vertex.21"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020615, VkglTestCase_020615_1, VkglTestCase_020615_2);

#define VkglTestCase_020616_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_020616_2 "rs.random.swizzle.vertex.22"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020616, VkglTestCase_020616_1, VkglTestCase_020616_2);

#define VkglTestCase_020617_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_020617_2 "rs.random.swizzle.vertex.23"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020617, VkglTestCase_020617_1, VkglTestCase_020617_2);

#define VkglTestCase_020618_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_020618_2 "rs.random.swizzle.vertex.24"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020618, VkglTestCase_020618_1, VkglTestCase_020618_2);

#define VkglTestCase_020619_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_020619_2 "rs.random.swizzle.vertex.25"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020619, VkglTestCase_020619_1, VkglTestCase_020619_2);

#define VkglTestCase_020620_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_020620_2 "rs.random.swizzle.vertex.26"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020620, VkglTestCase_020620_1, VkglTestCase_020620_2);

#define VkglTestCase_020621_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_020621_2 "rs.random.swizzle.vertex.27"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020621, VkglTestCase_020621_1, VkglTestCase_020621_2);

#define VkglTestCase_020622_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_020622_2 "rs.random.swizzle.vertex.28"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020622, VkglTestCase_020622_1, VkglTestCase_020622_2);

#define VkglTestCase_020623_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_020623_2 "rs.random.swizzle.vertex.29"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020623, VkglTestCase_020623_1, VkglTestCase_020623_2);

#define VkglTestCase_020624_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_020624_2 "rs.random.swizzle.vertex.30"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020624, VkglTestCase_020624_1, VkglTestCase_020624_2);

#define VkglTestCase_020625_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_020625_2 "rs.random.swizzle.vertex.31"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020625, VkglTestCase_020625_1, VkglTestCase_020625_2);

#define VkglTestCase_020626_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_020626_2 "rs.random.swizzle.vertex.32"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020626, VkglTestCase_020626_1, VkglTestCase_020626_2);

#define VkglTestCase_020627_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_020627_2 "rs.random.swizzle.vertex.33"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020627, VkglTestCase_020627_1, VkglTestCase_020627_2);

#define VkglTestCase_020628_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_020628_2 "rs.random.swizzle.vertex.34"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020628, VkglTestCase_020628_1, VkglTestCase_020628_2);

#define VkglTestCase_020629_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_020629_2 "rs.random.swizzle.vertex.35"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020629, VkglTestCase_020629_1, VkglTestCase_020629_2);

#define VkglTestCase_020630_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_020630_2 "rs.random.swizzle.vertex.36"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020630, VkglTestCase_020630_1, VkglTestCase_020630_2);

#define VkglTestCase_020631_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_020631_2 "rs.random.swizzle.vertex.37"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020631, VkglTestCase_020631_1, VkglTestCase_020631_2);

#define VkglTestCase_020632_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_020632_2 "rs.random.swizzle.vertex.38"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020632, VkglTestCase_020632_1, VkglTestCase_020632_2);

#define VkglTestCase_020633_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_020633_2 "rs.random.swizzle.vertex.39"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020633, VkglTestCase_020633_1, VkglTestCase_020633_2);

#define VkglTestCase_020634_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_020634_2 "rs.random.swizzle.vertex.40"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020634, VkglTestCase_020634_1, VkglTestCase_020634_2);

#define VkglTestCase_020635_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_020635_2 "rs.random.swizzle.vertex.41"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020635, VkglTestCase_020635_1, VkglTestCase_020635_2);

#define VkglTestCase_020636_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_020636_2 "rs.random.swizzle.vertex.42"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020636, VkglTestCase_020636_1, VkglTestCase_020636_2);

#define VkglTestCase_020637_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_020637_2 "rs.random.swizzle.vertex.43"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020637, VkglTestCase_020637_1, VkglTestCase_020637_2);

#define VkglTestCase_020638_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_020638_2 "rs.random.swizzle.vertex.44"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020638, VkglTestCase_020638_1, VkglTestCase_020638_2);

#define VkglTestCase_020639_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_020639_2 "rs.random.swizzle.vertex.45"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020639, VkglTestCase_020639_1, VkglTestCase_020639_2);

#define VkglTestCase_020640_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_020640_2 "rs.random.swizzle.vertex.46"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020640, VkglTestCase_020640_1, VkglTestCase_020640_2);

#define VkglTestCase_020641_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_020641_2 "rs.random.swizzle.vertex.47"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020641, VkglTestCase_020641_1, VkglTestCase_020641_2);

#define VkglTestCase_020642_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_020642_2 "rs.random.swizzle.vertex.48"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020642, VkglTestCase_020642_1, VkglTestCase_020642_2);

#define VkglTestCase_020643_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_020643_2 "rs.random.swizzle.vertex.49"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020643, VkglTestCase_020643_1, VkglTestCase_020643_2);
=======
static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020594, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020594 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shad"
        "ers.random.swizzle.vertex.0",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020594 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020594 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020595, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020595 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shad"
        "ers.random.swizzle.vertex.1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020595 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020595 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020596, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020596 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shad"
        "ers.random.swizzle.vertex.2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020596 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020596 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020597, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020597 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shad"
        "ers.random.swizzle.vertex.3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020597 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020597 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020598, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020598 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shad"
        "ers.random.swizzle.vertex.4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020598 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020598 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020599, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020599 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shad"
        "ers.random.swizzle.vertex.5",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020599 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020599 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020600, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020600 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shad"
        "ers.random.swizzle.vertex.6",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020600 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020600 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020601, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020601 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shad"
        "ers.random.swizzle.vertex.7",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020601 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020601 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020602, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020602 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shad"
        "ers.random.swizzle.vertex.8",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020602 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020602 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020603, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020603 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shad"
        "ers.random.swizzle.vertex.9",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020603 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020603 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020604, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020604 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shade"
        "rs.random.swizzle.vertex.10",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020604 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020604 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020605, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020605 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shade"
        "rs.random.swizzle.vertex.11",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020605 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020605 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020606, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020606 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shade"
        "rs.random.swizzle.vertex.12",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020606 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020606 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020607, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020607 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shade"
        "rs.random.swizzle.vertex.13",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020607 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020607 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020608, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020608 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shade"
        "rs.random.swizzle.vertex.14",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020608 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020608 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020609, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020609 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shade"
        "rs.random.swizzle.vertex.15",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020609 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020609 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020610, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020610 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shade"
        "rs.random.swizzle.vertex.16",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020610 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020610 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020611, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020611 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shade"
        "rs.random.swizzle.vertex.17",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020611 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020611 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020612, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020612 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shade"
        "rs.random.swizzle.vertex.18",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020612 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020612 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020613, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020613 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shade"
        "rs.random.swizzle.vertex.19",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020613 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020613 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020614, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020614 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shade"
        "rs.random.swizzle.vertex.20",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020614 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020614 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020615, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020615 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shade"
        "rs.random.swizzle.vertex.21",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020615 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020615 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020616, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020616 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shade"
        "rs.random.swizzle.vertex.22",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020616 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020616 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020617, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020617 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shade"
        "rs.random.swizzle.vertex.23",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020617 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020617 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020618, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020618 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shade"
        "rs.random.swizzle.vertex.24",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020618 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020618 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020619, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020619 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shade"
        "rs.random.swizzle.vertex.25",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020619 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020619 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020620, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020620 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shade"
        "rs.random.swizzle.vertex.26",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020620 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020620 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020621, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020621 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shade"
        "rs.random.swizzle.vertex.27",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020621 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020621 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020622, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020622 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shade"
        "rs.random.swizzle.vertex.28",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020622 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020622 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020623, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020623 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shade"
        "rs.random.swizzle.vertex.29",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020623 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020623 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020624, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020624 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shade"
        "rs.random.swizzle.vertex.30",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020624 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020624 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020625, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020625 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shade"
        "rs.random.swizzle.vertex.31",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020625 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020625 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020626, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020626 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shade"
        "rs.random.swizzle.vertex.32",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020626 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020626 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020627, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020627 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shade"
        "rs.random.swizzle.vertex.33",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020627 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020627 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020628, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020628 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shade"
        "rs.random.swizzle.vertex.34",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020628 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020628 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020629, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020629 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shade"
        "rs.random.swizzle.vertex.35",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020629 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020629 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020630, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020630 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shade"
        "rs.random.swizzle.vertex.36",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020630 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020630 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020631, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020631 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shade"
        "rs.random.swizzle.vertex.37",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020631 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020631 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020632, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020632 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shade"
        "rs.random.swizzle.vertex.38",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020632 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020632 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020633, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020633 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shade"
        "rs.random.swizzle.vertex.39",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020633 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020633 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020634, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020634 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shade"
        "rs.random.swizzle.vertex.40",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020634 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020634 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020635, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020635 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shade"
        "rs.random.swizzle.vertex.41",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020635 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020635 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020636, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020636 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shade"
        "rs.random.swizzle.vertex.42",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020636 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020636 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020637, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020637 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shade"
        "rs.random.swizzle.vertex.43",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020637 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020637 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020638, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020638 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shade"
        "rs.random.swizzle.vertex.44",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020638 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020638 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020639, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020639 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shade"
        "rs.random.swizzle.vertex.45",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020639 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020639 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020640, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020640 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shade"
        "rs.random.swizzle.vertex.46",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020640 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020640 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020641, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020641 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shade"
        "rs.random.swizzle.vertex.47",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020641 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020641 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020642, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020642 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shade"
        "rs.random.swizzle.vertex.48",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020642 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020642 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020643, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020643 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shade"
        "rs.random.swizzle.vertex.49",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020643 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020643 end";
}
>>>>>>> 119876a9a4cc1abc142c2cbcacfd0e9275690a87
