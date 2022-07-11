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
#include "../ActsDeqpgles30022TestSuite.h"
#include "shrinkdefine.h"
=======
#include <gtest/gtest.h>
#include "../Deqpgles3BaseFunc.h"
#include "../ActsDeqpgles30022TestSuite.h"
>>>>>>> 119876a9a4cc1abc142c2cbcacfd0e9275690a87

using namespace std;
using namespace testing::ext;
using namespace OHOS;

<<<<<<< HEAD
#define VkglTestCase_021485_1 "dEQP-GLES3.functional.shad"
#define VkglTestCase_021485_2 "ers.random.texture.vertex.0"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021485, VkglTestCase_021485_1, VkglTestCase_021485_2);

#define VkglTestCase_021486_1 "dEQP-GLES3.functional.shad"
#define VkglTestCase_021486_2 "ers.random.texture.vertex.1"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021486, VkglTestCase_021486_1, VkglTestCase_021486_2);

#define VkglTestCase_021487_1 "dEQP-GLES3.functional.shad"
#define VkglTestCase_021487_2 "ers.random.texture.vertex.2"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021487, VkglTestCase_021487_1, VkglTestCase_021487_2);

#define VkglTestCase_021488_1 "dEQP-GLES3.functional.shad"
#define VkglTestCase_021488_2 "ers.random.texture.vertex.3"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021488, VkglTestCase_021488_1, VkglTestCase_021488_2);

#define VkglTestCase_021489_1 "dEQP-GLES3.functional.shad"
#define VkglTestCase_021489_2 "ers.random.texture.vertex.4"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021489, VkglTestCase_021489_1, VkglTestCase_021489_2);

#define VkglTestCase_021490_1 "dEQP-GLES3.functional.shad"
#define VkglTestCase_021490_2 "ers.random.texture.vertex.5"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021490, VkglTestCase_021490_1, VkglTestCase_021490_2);

#define VkglTestCase_021491_1 "dEQP-GLES3.functional.shad"
#define VkglTestCase_021491_2 "ers.random.texture.vertex.6"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021491, VkglTestCase_021491_1, VkglTestCase_021491_2);

#define VkglTestCase_021492_1 "dEQP-GLES3.functional.shad"
#define VkglTestCase_021492_2 "ers.random.texture.vertex.7"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021492, VkglTestCase_021492_1, VkglTestCase_021492_2);

#define VkglTestCase_021493_1 "dEQP-GLES3.functional.shad"
#define VkglTestCase_021493_2 "ers.random.texture.vertex.8"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021493, VkglTestCase_021493_1, VkglTestCase_021493_2);

#define VkglTestCase_021494_1 "dEQP-GLES3.functional.shad"
#define VkglTestCase_021494_2 "ers.random.texture.vertex.9"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021494, VkglTestCase_021494_1, VkglTestCase_021494_2);

#define VkglTestCase_021495_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_021495_2 "rs.random.texture.vertex.10"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021495, VkglTestCase_021495_1, VkglTestCase_021495_2);

#define VkglTestCase_021496_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_021496_2 "rs.random.texture.vertex.11"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021496, VkglTestCase_021496_1, VkglTestCase_021496_2);

#define VkglTestCase_021497_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_021497_2 "rs.random.texture.vertex.12"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021497, VkglTestCase_021497_1, VkglTestCase_021497_2);

#define VkglTestCase_021498_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_021498_2 "rs.random.texture.vertex.13"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021498, VkglTestCase_021498_1, VkglTestCase_021498_2);

#define VkglTestCase_021499_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_021499_2 "rs.random.texture.vertex.14"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021499, VkglTestCase_021499_1, VkglTestCase_021499_2);

#define VkglTestCase_021500_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_021500_2 "rs.random.texture.vertex.15"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021500, VkglTestCase_021500_1, VkglTestCase_021500_2);

#define VkglTestCase_021501_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_021501_2 "rs.random.texture.vertex.16"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021501, VkglTestCase_021501_1, VkglTestCase_021501_2);

#define VkglTestCase_021502_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_021502_2 "rs.random.texture.vertex.17"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021502, VkglTestCase_021502_1, VkglTestCase_021502_2);

#define VkglTestCase_021503_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_021503_2 "rs.random.texture.vertex.18"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021503, VkglTestCase_021503_1, VkglTestCase_021503_2);

#define VkglTestCase_021504_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_021504_2 "rs.random.texture.vertex.19"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021504, VkglTestCase_021504_1, VkglTestCase_021504_2);

#define VkglTestCase_021505_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_021505_2 "rs.random.texture.vertex.20"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021505, VkglTestCase_021505_1, VkglTestCase_021505_2);

#define VkglTestCase_021506_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_021506_2 "rs.random.texture.vertex.21"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021506, VkglTestCase_021506_1, VkglTestCase_021506_2);

#define VkglTestCase_021507_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_021507_2 "rs.random.texture.vertex.22"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021507, VkglTestCase_021507_1, VkglTestCase_021507_2);

#define VkglTestCase_021508_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_021508_2 "rs.random.texture.vertex.23"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021508, VkglTestCase_021508_1, VkglTestCase_021508_2);

#define VkglTestCase_021509_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_021509_2 "rs.random.texture.vertex.24"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021509, VkglTestCase_021509_1, VkglTestCase_021509_2);

#define VkglTestCase_021510_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_021510_2 "rs.random.texture.vertex.25"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021510, VkglTestCase_021510_1, VkglTestCase_021510_2);

#define VkglTestCase_021511_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_021511_2 "rs.random.texture.vertex.26"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021511, VkglTestCase_021511_1, VkglTestCase_021511_2);

#define VkglTestCase_021512_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_021512_2 "rs.random.texture.vertex.27"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021512, VkglTestCase_021512_1, VkglTestCase_021512_2);

#define VkglTestCase_021513_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_021513_2 "rs.random.texture.vertex.28"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021513, VkglTestCase_021513_1, VkglTestCase_021513_2);

#define VkglTestCase_021514_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_021514_2 "rs.random.texture.vertex.29"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021514, VkglTestCase_021514_1, VkglTestCase_021514_2);

#define VkglTestCase_021515_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_021515_2 "rs.random.texture.vertex.30"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021515, VkglTestCase_021515_1, VkglTestCase_021515_2);

#define VkglTestCase_021516_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_021516_2 "rs.random.texture.vertex.31"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021516, VkglTestCase_021516_1, VkglTestCase_021516_2);

#define VkglTestCase_021517_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_021517_2 "rs.random.texture.vertex.32"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021517, VkglTestCase_021517_1, VkglTestCase_021517_2);

#define VkglTestCase_021518_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_021518_2 "rs.random.texture.vertex.33"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021518, VkglTestCase_021518_1, VkglTestCase_021518_2);

#define VkglTestCase_021519_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_021519_2 "rs.random.texture.vertex.34"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021519, VkglTestCase_021519_1, VkglTestCase_021519_2);

#define VkglTestCase_021520_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_021520_2 "rs.random.texture.vertex.35"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021520, VkglTestCase_021520_1, VkglTestCase_021520_2);

#define VkglTestCase_021521_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_021521_2 "rs.random.texture.vertex.36"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021521, VkglTestCase_021521_1, VkglTestCase_021521_2);

#define VkglTestCase_021522_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_021522_2 "rs.random.texture.vertex.37"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021522, VkglTestCase_021522_1, VkglTestCase_021522_2);

#define VkglTestCase_021523_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_021523_2 "rs.random.texture.vertex.38"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021523, VkglTestCase_021523_1, VkglTestCase_021523_2);

#define VkglTestCase_021524_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_021524_2 "rs.random.texture.vertex.39"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021524, VkglTestCase_021524_1, VkglTestCase_021524_2);

#define VkglTestCase_021525_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_021525_2 "rs.random.texture.vertex.40"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021525, VkglTestCase_021525_1, VkglTestCase_021525_2);

#define VkglTestCase_021526_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_021526_2 "rs.random.texture.vertex.41"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021526, VkglTestCase_021526_1, VkglTestCase_021526_2);

#define VkglTestCase_021527_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_021527_2 "rs.random.texture.vertex.42"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021527, VkglTestCase_021527_1, VkglTestCase_021527_2);

#define VkglTestCase_021528_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_021528_2 "rs.random.texture.vertex.43"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021528, VkglTestCase_021528_1, VkglTestCase_021528_2);

#define VkglTestCase_021529_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_021529_2 "rs.random.texture.vertex.44"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021529, VkglTestCase_021529_1, VkglTestCase_021529_2);

#define VkglTestCase_021530_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_021530_2 "rs.random.texture.vertex.45"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021530, VkglTestCase_021530_1, VkglTestCase_021530_2);

#define VkglTestCase_021531_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_021531_2 "rs.random.texture.vertex.46"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021531, VkglTestCase_021531_1, VkglTestCase_021531_2);

#define VkglTestCase_021532_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_021532_2 "rs.random.texture.vertex.47"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021532, VkglTestCase_021532_1, VkglTestCase_021532_2);

#define VkglTestCase_021533_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_021533_2 "rs.random.texture.vertex.48"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021533, VkglTestCase_021533_1, VkglTestCase_021533_2);

#define VkglTestCase_021534_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_021534_2 "rs.random.texture.vertex.49"
SHRINK_HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021534, VkglTestCase_021534_1, VkglTestCase_021534_2);
=======
static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021485, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021485 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shad"
        "ers.random.texture.vertex.0",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021485 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021485 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021486, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021486 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shad"
        "ers.random.texture.vertex.1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021486 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021486 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021487, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021487 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shad"
        "ers.random.texture.vertex.2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021487 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021487 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021488, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021488 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shad"
        "ers.random.texture.vertex.3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021488 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021488 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021489, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021489 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shad"
        "ers.random.texture.vertex.4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021489 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021489 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021490, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021490 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shad"
        "ers.random.texture.vertex.5",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021490 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021490 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021491, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021491 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shad"
        "ers.random.texture.vertex.6",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021491 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021491 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021492, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021492 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shad"
        "ers.random.texture.vertex.7",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021492 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021492 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021493, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021493 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shad"
        "ers.random.texture.vertex.8",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021493 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021493 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021494, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021494 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shad"
        "ers.random.texture.vertex.9",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021494 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021494 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021495, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021495 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shade"
        "rs.random.texture.vertex.10",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021495 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021495 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021496, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021496 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shade"
        "rs.random.texture.vertex.11",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021496 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021496 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021497, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021497 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shade"
        "rs.random.texture.vertex.12",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021497 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021497 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021498, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021498 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shade"
        "rs.random.texture.vertex.13",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021498 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021498 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021499, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021499 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shade"
        "rs.random.texture.vertex.14",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021499 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021499 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021500, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021500 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shade"
        "rs.random.texture.vertex.15",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021500 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021500 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021501, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021501 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shade"
        "rs.random.texture.vertex.16",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021501 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021501 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021502, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021502 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shade"
        "rs.random.texture.vertex.17",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021502 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021502 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021503, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021503 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shade"
        "rs.random.texture.vertex.18",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021503 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021503 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021504, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021504 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shade"
        "rs.random.texture.vertex.19",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021504 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021504 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021505, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021505 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shade"
        "rs.random.texture.vertex.20",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021505 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021505 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021506, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021506 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shade"
        "rs.random.texture.vertex.21",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021506 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021506 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021507, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021507 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shade"
        "rs.random.texture.vertex.22",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021507 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021507 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021508, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021508 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shade"
        "rs.random.texture.vertex.23",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021508 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021508 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021509, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021509 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shade"
        "rs.random.texture.vertex.24",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021509 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021509 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021510, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021510 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shade"
        "rs.random.texture.vertex.25",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021510 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021510 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021511, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021511 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shade"
        "rs.random.texture.vertex.26",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021511 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021511 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021512, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021512 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shade"
        "rs.random.texture.vertex.27",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021512 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021512 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021513, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021513 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shade"
        "rs.random.texture.vertex.28",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021513 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021513 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021514, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021514 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shade"
        "rs.random.texture.vertex.29",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021514 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021514 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021515, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021515 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shade"
        "rs.random.texture.vertex.30",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021515 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021515 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021516, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021516 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shade"
        "rs.random.texture.vertex.31",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021516 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021516 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021517, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021517 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shade"
        "rs.random.texture.vertex.32",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021517 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021517 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021518, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021518 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shade"
        "rs.random.texture.vertex.33",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021518 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021518 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021519, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021519 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shade"
        "rs.random.texture.vertex.34",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021519 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021519 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021520, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021520 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shade"
        "rs.random.texture.vertex.35",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021520 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021520 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021521, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021521 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shade"
        "rs.random.texture.vertex.36",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021521 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021521 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021522, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021522 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shade"
        "rs.random.texture.vertex.37",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021522 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021522 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021523, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021523 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shade"
        "rs.random.texture.vertex.38",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021523 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021523 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021524, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021524 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shade"
        "rs.random.texture.vertex.39",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021524 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021524 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021525, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021525 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shade"
        "rs.random.texture.vertex.40",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021525 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021525 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021526, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021526 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shade"
        "rs.random.texture.vertex.41",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021526 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021526 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021527, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021527 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shade"
        "rs.random.texture.vertex.42",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021527 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021527 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021528, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021528 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shade"
        "rs.random.texture.vertex.43",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021528 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021528 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021529, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021529 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shade"
        "rs.random.texture.vertex.44",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021529 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021529 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021530, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021530 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shade"
        "rs.random.texture.vertex.45",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021530 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021530 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021531, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021531 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shade"
        "rs.random.texture.vertex.46",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021531 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021531 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021532, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021532 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shade"
        "rs.random.texture.vertex.47",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021532 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021532 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021533, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021533 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shade"
        "rs.random.texture.vertex.48",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021533 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021533 end";
}

static HWTEST_F(ActsDeqpgles30022TestSuite, TestCase_021534, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_021534 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shade"
        "rs.random.texture.vertex.49",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30022TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30022TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30022TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30022TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30022TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_021534 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_021534 end";
}
>>>>>>> 119876a9a4cc1abc142c2cbcacfd0e9275690a87
