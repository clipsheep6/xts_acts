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
#define VkglTestCase_020644_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_020644_2 "rs.random.swizzle.fragment.0"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020644, VkglTestCase_020644_1, VkglTestCase_020644_2);

#define VkglTestCase_020645_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_020645_2 "rs.random.swizzle.fragment.1"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020645, VkglTestCase_020645_1, VkglTestCase_020645_2);

#define VkglTestCase_020646_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_020646_2 "rs.random.swizzle.fragment.2"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020646, VkglTestCase_020646_1, VkglTestCase_020646_2);

#define VkglTestCase_020647_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_020647_2 "rs.random.swizzle.fragment.3"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020647, VkglTestCase_020647_1, VkglTestCase_020647_2);

#define VkglTestCase_020648_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_020648_2 "rs.random.swizzle.fragment.4"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020648, VkglTestCase_020648_1, VkglTestCase_020648_2);

#define VkglTestCase_020649_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_020649_2 "rs.random.swizzle.fragment.5"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020649, VkglTestCase_020649_1, VkglTestCase_020649_2);

#define VkglTestCase_020650_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_020650_2 "rs.random.swizzle.fragment.6"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020650, VkglTestCase_020650_1, VkglTestCase_020650_2);

#define VkglTestCase_020651_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_020651_2 "rs.random.swizzle.fragment.7"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020651, VkglTestCase_020651_1, VkglTestCase_020651_2);

#define VkglTestCase_020652_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_020652_2 "rs.random.swizzle.fragment.8"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020652, VkglTestCase_020652_1, VkglTestCase_020652_2);

#define VkglTestCase_020653_1 "dEQP-GLES3.functional.shade"
#define VkglTestCase_020653_2 "rs.random.swizzle.fragment.9"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020653, VkglTestCase_020653_1, VkglTestCase_020653_2);

#define VkglTestCase_020654_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_020654_2 "s.random.swizzle.fragment.10"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020654, VkglTestCase_020654_1, VkglTestCase_020654_2);

#define VkglTestCase_020655_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_020655_2 "s.random.swizzle.fragment.11"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020655, VkglTestCase_020655_1, VkglTestCase_020655_2);

#define VkglTestCase_020656_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_020656_2 "s.random.swizzle.fragment.12"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020656, VkglTestCase_020656_1, VkglTestCase_020656_2);

#define VkglTestCase_020657_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_020657_2 "s.random.swizzle.fragment.13"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020657, VkglTestCase_020657_1, VkglTestCase_020657_2);

#define VkglTestCase_020658_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_020658_2 "s.random.swizzle.fragment.14"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020658, VkglTestCase_020658_1, VkglTestCase_020658_2);

#define VkglTestCase_020659_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_020659_2 "s.random.swizzle.fragment.15"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020659, VkglTestCase_020659_1, VkglTestCase_020659_2);

#define VkglTestCase_020660_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_020660_2 "s.random.swizzle.fragment.16"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020660, VkglTestCase_020660_1, VkglTestCase_020660_2);

#define VkglTestCase_020661_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_020661_2 "s.random.swizzle.fragment.17"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020661, VkglTestCase_020661_1, VkglTestCase_020661_2);

#define VkglTestCase_020662_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_020662_2 "s.random.swizzle.fragment.18"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020662, VkglTestCase_020662_1, VkglTestCase_020662_2);

#define VkglTestCase_020663_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_020663_2 "s.random.swizzle.fragment.19"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020663, VkglTestCase_020663_1, VkglTestCase_020663_2);

#define VkglTestCase_020664_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_020664_2 "s.random.swizzle.fragment.20"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020664, VkglTestCase_020664_1, VkglTestCase_020664_2);

#define VkglTestCase_020665_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_020665_2 "s.random.swizzle.fragment.21"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020665, VkglTestCase_020665_1, VkglTestCase_020665_2);

#define VkglTestCase_020666_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_020666_2 "s.random.swizzle.fragment.22"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020666, VkglTestCase_020666_1, VkglTestCase_020666_2);

#define VkglTestCase_020667_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_020667_2 "s.random.swizzle.fragment.23"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020667, VkglTestCase_020667_1, VkglTestCase_020667_2);

#define VkglTestCase_020668_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_020668_2 "s.random.swizzle.fragment.24"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020668, VkglTestCase_020668_1, VkglTestCase_020668_2);

#define VkglTestCase_020669_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_020669_2 "s.random.swizzle.fragment.25"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020669, VkglTestCase_020669_1, VkglTestCase_020669_2);

#define VkglTestCase_020670_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_020670_2 "s.random.swizzle.fragment.26"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020670, VkglTestCase_020670_1, VkglTestCase_020670_2);

#define VkglTestCase_020671_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_020671_2 "s.random.swizzle.fragment.27"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020671, VkglTestCase_020671_1, VkglTestCase_020671_2);

#define VkglTestCase_020672_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_020672_2 "s.random.swizzle.fragment.28"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020672, VkglTestCase_020672_1, VkglTestCase_020672_2);

#define VkglTestCase_020673_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_020673_2 "s.random.swizzle.fragment.29"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020673, VkglTestCase_020673_1, VkglTestCase_020673_2);

#define VkglTestCase_020674_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_020674_2 "s.random.swizzle.fragment.30"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020674, VkglTestCase_020674_1, VkglTestCase_020674_2);

#define VkglTestCase_020675_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_020675_2 "s.random.swizzle.fragment.31"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020675, VkglTestCase_020675_1, VkglTestCase_020675_2);

#define VkglTestCase_020676_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_020676_2 "s.random.swizzle.fragment.32"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020676, VkglTestCase_020676_1, VkglTestCase_020676_2);

#define VkglTestCase_020677_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_020677_2 "s.random.swizzle.fragment.33"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020677, VkglTestCase_020677_1, VkglTestCase_020677_2);

#define VkglTestCase_020678_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_020678_2 "s.random.swizzle.fragment.34"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020678, VkglTestCase_020678_1, VkglTestCase_020678_2);

#define VkglTestCase_020679_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_020679_2 "s.random.swizzle.fragment.35"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020679, VkglTestCase_020679_1, VkglTestCase_020679_2);

#define VkglTestCase_020680_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_020680_2 "s.random.swizzle.fragment.36"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020680, VkglTestCase_020680_1, VkglTestCase_020680_2);

#define VkglTestCase_020681_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_020681_2 "s.random.swizzle.fragment.37"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020681, VkglTestCase_020681_1, VkglTestCase_020681_2);

#define VkglTestCase_020682_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_020682_2 "s.random.swizzle.fragment.38"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020682, VkglTestCase_020682_1, VkglTestCase_020682_2);

#define VkglTestCase_020683_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_020683_2 "s.random.swizzle.fragment.39"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020683, VkglTestCase_020683_1, VkglTestCase_020683_2);

#define VkglTestCase_020684_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_020684_2 "s.random.swizzle.fragment.40"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020684, VkglTestCase_020684_1, VkglTestCase_020684_2);

#define VkglTestCase_020685_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_020685_2 "s.random.swizzle.fragment.41"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020685, VkglTestCase_020685_1, VkglTestCase_020685_2);

#define VkglTestCase_020686_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_020686_2 "s.random.swizzle.fragment.42"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020686, VkglTestCase_020686_1, VkglTestCase_020686_2);

#define VkglTestCase_020687_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_020687_2 "s.random.swizzle.fragment.43"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020687, VkglTestCase_020687_1, VkglTestCase_020687_2);

#define VkglTestCase_020688_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_020688_2 "s.random.swizzle.fragment.44"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020688, VkglTestCase_020688_1, VkglTestCase_020688_2);

#define VkglTestCase_020689_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_020689_2 "s.random.swizzle.fragment.45"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020689, VkglTestCase_020689_1, VkglTestCase_020689_2);

#define VkglTestCase_020690_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_020690_2 "s.random.swizzle.fragment.46"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020690, VkglTestCase_020690_1, VkglTestCase_020690_2);

#define VkglTestCase_020691_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_020691_2 "s.random.swizzle.fragment.47"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020691, VkglTestCase_020691_1, VkglTestCase_020691_2);

#define VkglTestCase_020692_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_020692_2 "s.random.swizzle.fragment.48"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020692, VkglTestCase_020692_1, VkglTestCase_020692_2);

#define VkglTestCase_020693_1 "dEQP-GLES3.functional.shader"
#define VkglTestCase_020693_2 "s.random.swizzle.fragment.49"
SHRINK_HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020693, VkglTestCase_020693_1, VkglTestCase_020693_2);
=======
static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020644, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020644 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shade"
        "rs.random.swizzle.fragment.0",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020644 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020644 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020645, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020645 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shade"
        "rs.random.swizzle.fragment.1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020645 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020645 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020646, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020646 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shade"
        "rs.random.swizzle.fragment.2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020646 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020646 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020647, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020647 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shade"
        "rs.random.swizzle.fragment.3",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020647 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020647 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020648, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020648 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shade"
        "rs.random.swizzle.fragment.4",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020648 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020648 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020649, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020649 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shade"
        "rs.random.swizzle.fragment.5",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020649 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020649 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020650, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020650 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shade"
        "rs.random.swizzle.fragment.6",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020650 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020650 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020651, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020651 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shade"
        "rs.random.swizzle.fragment.7",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020651 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020651 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020652, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020652 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shade"
        "rs.random.swizzle.fragment.8",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020652 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020652 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020653, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020653 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shade"
        "rs.random.swizzle.fragment.9",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020653 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020653 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020654, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020654 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shader"
        "s.random.swizzle.fragment.10",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020654 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020654 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020655, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020655 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shader"
        "s.random.swizzle.fragment.11",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020655 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020655 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020656, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020656 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shader"
        "s.random.swizzle.fragment.12",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020656 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020656 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020657, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020657 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shader"
        "s.random.swizzle.fragment.13",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020657 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020657 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020658, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020658 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shader"
        "s.random.swizzle.fragment.14",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020658 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020658 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020659, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020659 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shader"
        "s.random.swizzle.fragment.15",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020659 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020659 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020660, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020660 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shader"
        "s.random.swizzle.fragment.16",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020660 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020660 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020661, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020661 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shader"
        "s.random.swizzle.fragment.17",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020661 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020661 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020662, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020662 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shader"
        "s.random.swizzle.fragment.18",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020662 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020662 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020663, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020663 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shader"
        "s.random.swizzle.fragment.19",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020663 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020663 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020664, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020664 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shader"
        "s.random.swizzle.fragment.20",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020664 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020664 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020665, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020665 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shader"
        "s.random.swizzle.fragment.21",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020665 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020665 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020666, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020666 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shader"
        "s.random.swizzle.fragment.22",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020666 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020666 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020667, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020667 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shader"
        "s.random.swizzle.fragment.23",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020667 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020667 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020668, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020668 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shader"
        "s.random.swizzle.fragment.24",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020668 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020668 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020669, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020669 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shader"
        "s.random.swizzle.fragment.25",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020669 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020669 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020670, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020670 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shader"
        "s.random.swizzle.fragment.26",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020670 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020670 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020671, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020671 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shader"
        "s.random.swizzle.fragment.27",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020671 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020671 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020672, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020672 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shader"
        "s.random.swizzle.fragment.28",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020672 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020672 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020673, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020673 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shader"
        "s.random.swizzle.fragment.29",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020673 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020673 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020674, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020674 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shader"
        "s.random.swizzle.fragment.30",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020674 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020674 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020675, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020675 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shader"
        "s.random.swizzle.fragment.31",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020675 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020675 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020676, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020676 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shader"
        "s.random.swizzle.fragment.32",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020676 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020676 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020677, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020677 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shader"
        "s.random.swizzle.fragment.33",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020677 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020677 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020678, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020678 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shader"
        "s.random.swizzle.fragment.34",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020678 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020678 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020679, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020679 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shader"
        "s.random.swizzle.fragment.35",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020679 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020679 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020680, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020680 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shader"
        "s.random.swizzle.fragment.36",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020680 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020680 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020681, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020681 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shader"
        "s.random.swizzle.fragment.37",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020681 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020681 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020682, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020682 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shader"
        "s.random.swizzle.fragment.38",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020682 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020682 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020683, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020683 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shader"
        "s.random.swizzle.fragment.39",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020683 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020683 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020684, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020684 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shader"
        "s.random.swizzle.fragment.40",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020684 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020684 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020685, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020685 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shader"
        "s.random.swizzle.fragment.41",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020685 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020685 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020686, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020686 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shader"
        "s.random.swizzle.fragment.42",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020686 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020686 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020687, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020687 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shader"
        "s.random.swizzle.fragment.43",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020687 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020687 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020688, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020688 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shader"
        "s.random.swizzle.fragment.44",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020688 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020688 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020689, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020689 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shader"
        "s.random.swizzle.fragment.45",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020689 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020689 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020690, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020690 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shader"
        "s.random.swizzle.fragment.46",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020690 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020690 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020691, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020691 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shader"
        "s.random.swizzle.fragment.47",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020691 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020691 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020692, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020692 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shader"
        "s.random.swizzle.fragment.48",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020692 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020692 end";
}

static HWTEST_F(ActsDeqpgles30021TestSuite, TestCase_020693, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_020693 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shader"
        "s.random.swizzle.fragment.49",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30021TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30021TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30021TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30021TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30021TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_020693 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_020693 end";
}
>>>>>>> 119876a9a4cc1abc142c2cbcacfd0e9275690a87
