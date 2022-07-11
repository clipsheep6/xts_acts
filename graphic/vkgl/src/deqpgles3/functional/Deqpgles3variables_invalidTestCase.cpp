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
#include "../ActsDeqpgles30005TestSuite.h"
#include "shrinkdefine.h"
=======
#include <gtest/gtest.h>
#include "../Deqpgles3BaseFunc.h"
#include "../ActsDeqpgles30005TestSuite.h"
>>>>>>> 119876a9a4cc1abc142c2cbcacfd0e9275690a87

using namespace std;
using namespace testing::ext;
using namespace OHOS;

<<<<<<< HEAD
#define VkglTestCase_004854_1 "dEQP-GLES3.functional.shaders.qualification_order.v"
#define VkglTestCase_004854_2 "ariables.invalid.invariant_interp_precision_storage"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004854, VkglTestCase_004854_1, VkglTestCase_004854_2);

#define VkglTestCase_004855_1 "dEQP-GLES3.functional.shaders.qualification_order.v"
#define VkglTestCase_004855_2 "ariables.invalid.invariant_storage_interp_precision"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004855, VkglTestCase_004855_1, VkglTestCase_004855_2);

#define VkglTestCase_004856_1 "dEQP-GLES3.functional.shaders.qualification_order.v"
#define VkglTestCase_004856_2 "ariables.invalid.invariant_storage_precision_interp"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004856, VkglTestCase_004856_1, VkglTestCase_004856_2);

#define VkglTestCase_004857_1 "dEQP-GLES3.functional.shaders.qualification_order.v"
#define VkglTestCase_004857_2 "ariables.invalid.invariant_precision_interp_storage"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004857, VkglTestCase_004857_1, VkglTestCase_004857_2);

#define VkglTestCase_004858_1 "dEQP-GLES3.functional.shaders.qualification_order.v"
#define VkglTestCase_004858_2 "ariables.invalid.invariant_precision_storage_interp"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004858, VkglTestCase_004858_1, VkglTestCase_004858_2);

#define VkglTestCase_004859_1 "dEQP-GLES3.functional.shaders.qualification_order.v"
#define VkglTestCase_004859_2 "ariables.invalid.interp_invariant_storage_precision"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004859, VkglTestCase_004859_1, VkglTestCase_004859_2);

#define VkglTestCase_004860_1 "dEQP-GLES3.functional.shaders.qualification_order.v"
#define VkglTestCase_004860_2 "ariables.invalid.interp_invariant_precision_storage"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004860, VkglTestCase_004860_1, VkglTestCase_004860_2);

#define VkglTestCase_004861_1 "dEQP-GLES3.functional.shaders.qualification_order.v"
#define VkglTestCase_004861_2 "ariables.invalid.interp_storage_invariant_precision"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004861, VkglTestCase_004861_1, VkglTestCase_004861_2);

#define VkglTestCase_004862_1 "dEQP-GLES3.functional.shaders.qualification_order.v"
#define VkglTestCase_004862_2 "ariables.invalid.interp_storage_precision_invariant"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004862, VkglTestCase_004862_1, VkglTestCase_004862_2);

#define VkglTestCase_004863_1 "dEQP-GLES3.functional.shaders.qualification_order.v"
#define VkglTestCase_004863_2 "ariables.invalid.interp_precision_invariant_storage"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004863, VkglTestCase_004863_1, VkglTestCase_004863_2);

#define VkglTestCase_004864_1 "dEQP-GLES3.functional.shaders.qualification_order.v"
#define VkglTestCase_004864_2 "ariables.invalid.interp_precision_storage_invariant"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004864, VkglTestCase_004864_1, VkglTestCase_004864_2);

#define VkglTestCase_004865_1 "dEQP-GLES3.functional.shaders.qualification_order.v"
#define VkglTestCase_004865_2 "ariables.invalid.storage_invariant_interp_precision"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004865, VkglTestCase_004865_1, VkglTestCase_004865_2);

#define VkglTestCase_004866_1 "dEQP-GLES3.functional.shaders.qualification_order.v"
#define VkglTestCase_004866_2 "ariables.invalid.storage_invariant_precision_interp"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004866, VkglTestCase_004866_1, VkglTestCase_004866_2);

#define VkglTestCase_004867_1 "dEQP-GLES3.functional.shaders.qualification_order.v"
#define VkglTestCase_004867_2 "ariables.invalid.storage_interp_invariant_precision"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004867, VkglTestCase_004867_1, VkglTestCase_004867_2);

#define VkglTestCase_004868_1 "dEQP-GLES3.functional.shaders.qualification_order.v"
#define VkglTestCase_004868_2 "ariables.invalid.storage_interp_precision_invariant"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004868, VkglTestCase_004868_1, VkglTestCase_004868_2);

#define VkglTestCase_004869_1 "dEQP-GLES3.functional.shaders.qualification_order.v"
#define VkglTestCase_004869_2 "ariables.invalid.storage_precision_invariant_interp"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004869, VkglTestCase_004869_1, VkglTestCase_004869_2);

#define VkglTestCase_004870_1 "dEQP-GLES3.functional.shaders.qualification_order.v"
#define VkglTestCase_004870_2 "ariables.invalid.storage_precision_interp_invariant"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004870, VkglTestCase_004870_1, VkglTestCase_004870_2);

#define VkglTestCase_004871_1 "dEQP-GLES3.functional.shaders.qualification_order.v"
#define VkglTestCase_004871_2 "ariables.invalid.precision_invariant_interp_storage"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004871, VkglTestCase_004871_1, VkglTestCase_004871_2);

#define VkglTestCase_004872_1 "dEQP-GLES3.functional.shaders.qualification_order.v"
#define VkglTestCase_004872_2 "ariables.invalid.precision_invariant_storage_interp"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004872, VkglTestCase_004872_1, VkglTestCase_004872_2);

#define VkglTestCase_004873_1 "dEQP-GLES3.functional.shaders.qualification_order.v"
#define VkglTestCase_004873_2 "ariables.invalid.precision_interp_invariant_storage"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004873, VkglTestCase_004873_1, VkglTestCase_004873_2);

#define VkglTestCase_004874_1 "dEQP-GLES3.functional.shaders.qualification_order.v"
#define VkglTestCase_004874_2 "ariables.invalid.precision_interp_storage_invariant"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004874, VkglTestCase_004874_1, VkglTestCase_004874_2);

#define VkglTestCase_004875_1 "dEQP-GLES3.functional.shaders.qualification_order.v"
#define VkglTestCase_004875_2 "ariables.invalid.precision_storage_invariant_interp"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004875, VkglTestCase_004875_1, VkglTestCase_004875_2);

#define VkglTestCase_004876_1 "dEQP-GLES3.functional.shaders.qualification_order.v"
#define VkglTestCase_004876_2 "ariables.invalid.precision_storage_interp_invariant"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004876, VkglTestCase_004876_1, VkglTestCase_004876_2);

#define VkglTestCase_004877_1 "dEQP-GLES3.functional.shaders.qualification_or"
#define VkglTestCase_004877_2 "der.variables.invalid.interp_precision_storage"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004877, VkglTestCase_004877_1, VkglTestCase_004877_2);

#define VkglTestCase_004878_1 "dEQP-GLES3.functional.shaders.qualification_or"
#define VkglTestCase_004878_2 "der.variables.invalid.storage_interp_precision"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004878, VkglTestCase_004878_1, VkglTestCase_004878_2);

#define VkglTestCase_004879_1 "dEQP-GLES3.functional.shaders.qualification_or"
#define VkglTestCase_004879_2 "der.variables.invalid.storage_precision_interp"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004879, VkglTestCase_004879_1, VkglTestCase_004879_2);

#define VkglTestCase_004880_1 "dEQP-GLES3.functional.shaders.qualification_or"
#define VkglTestCase_004880_2 "der.variables.invalid.precision_interp_storage"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004880, VkglTestCase_004880_1, VkglTestCase_004880_2);

#define VkglTestCase_004881_1 "dEQP-GLES3.functional.shaders.qualification_or"
#define VkglTestCase_004881_2 "der.variables.invalid.precision_storage_interp"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004881, VkglTestCase_004881_1, VkglTestCase_004881_2);

#define VkglTestCase_004882_1 "dEQP-GLES3.functional.shaders.qualification_or"
#define VkglTestCase_004882_2 "der.variables.invalid.invariant_storage_interp"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004882, VkglTestCase_004882_1, VkglTestCase_004882_2);

#define VkglTestCase_004883_1 "dEQP-GLES3.functional.shaders.qualification_or"
#define VkglTestCase_004883_2 "der.variables.invalid.interp_invariant_storage"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004883, VkglTestCase_004883_1, VkglTestCase_004883_2);

#define VkglTestCase_004884_1 "dEQP-GLES3.functional.shaders.qualification_or"
#define VkglTestCase_004884_2 "der.variables.invalid.interp_storage_invariant"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004884, VkglTestCase_004884_1, VkglTestCase_004884_2);

#define VkglTestCase_004885_1 "dEQP-GLES3.functional.shaders.qualification_or"
#define VkglTestCase_004885_2 "der.variables.invalid.storage_invariant_interp"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004885, VkglTestCase_004885_1, VkglTestCase_004885_2);

#define VkglTestCase_004886_1 "dEQP-GLES3.functional.shaders.qualification_or"
#define VkglTestCase_004886_2 "der.variables.invalid.storage_interp_invariant"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004886, VkglTestCase_004886_1, VkglTestCase_004886_2);

#define VkglTestCase_004887_1 "dEQP-GLES3.functional.shaders.qualification_ord"
#define VkglTestCase_004887_2 "er.variables.invalid.invariant_precision_storage"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004887, VkglTestCase_004887_1, VkglTestCase_004887_2);

#define VkglTestCase_004888_1 "dEQP-GLES3.functional.shaders.qualification_ord"
#define VkglTestCase_004888_2 "er.variables.invalid.storage_invariant_precision"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004888, VkglTestCase_004888_1, VkglTestCase_004888_2);

#define VkglTestCase_004889_1 "dEQP-GLES3.functional.shaders.qualification_ord"
#define VkglTestCase_004889_2 "er.variables.invalid.storage_precision_invariant"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004889, VkglTestCase_004889_1, VkglTestCase_004889_2);

#define VkglTestCase_004890_1 "dEQP-GLES3.functional.shaders.qualification_ord"
#define VkglTestCase_004890_2 "er.variables.invalid.precision_invariant_storage"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004890, VkglTestCase_004890_1, VkglTestCase_004890_2);

#define VkglTestCase_004891_1 "dEQP-GLES3.functional.shaders.qualification_ord"
#define VkglTestCase_004891_2 "er.variables.invalid.precision_storage_invariant"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004891, VkglTestCase_004891_1, VkglTestCase_004891_2);

#define VkglTestCase_004892_1 "dEQP-GLES3.functional.shaders.qualificatio"
#define VkglTestCase_004892_2 "n_order.variables.invalid.precision_storage"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004892, VkglTestCase_004892_1, VkglTestCase_004892_2);

#define VkglTestCase_004893_1 "dEQP-GLES3.functional.shaders.qualificati"
#define VkglTestCase_004893_2 "on_order.variables.invalid.storage_interp"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004893, VkglTestCase_004893_1, VkglTestCase_004893_2);

#define VkglTestCase_004894_1 "dEQP-GLES3.functional.shaders.qualificatio"
#define VkglTestCase_004894_2 "n_order.variables.invalid.storage_invariant"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004894, VkglTestCase_004894_1, VkglTestCase_004894_2);

#define VkglTestCase_004895_1 "dEQP-GLES3.functional.shaders.qualification_order.variables"
#define VkglTestCase_004895_2 ".invalid.invariant_interp_storage_precision_invariant_input"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004895, VkglTestCase_004895_1, VkglTestCase_004895_2);

#define VkglTestCase_004896_1 "dEQP-GLES3.functional.shaders.qualification_order.vari"
#define VkglTestCase_004896_2 "ables.invalid.interp_storage_precision_invariant_input"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004896, VkglTestCase_004896_1, VkglTestCase_004896_2);

#define VkglTestCase_004897_1 "dEQP-GLES3.functional.shaders.qualification_order.vari"
#define VkglTestCase_004897_2 "ables.invalid.invariant_interp_storage_invariant_input"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004897, VkglTestCase_004897_1, VkglTestCase_004897_2);

#define VkglTestCase_004898_1 "dEQP-GLES3.functional.shaders.qualification_order.varia"
#define VkglTestCase_004898_2 "bles.invalid.invariant_storage_precision_invariant_input"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004898, VkglTestCase_004898_1, VkglTestCase_004898_2);

#define VkglTestCase_004899_1 "dEQP-GLES3.functional.shaders.qualification_order."
#define VkglTestCase_004899_2 "variables.invalid.storage_precision_invariant_input"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004899, VkglTestCase_004899_1, VkglTestCase_004899_2);

#define VkglTestCase_004900_1 "dEQP-GLES3.functional.shaders.qualification_order"
#define VkglTestCase_004900_2 ".variables.invalid.interp_storage_invariant_input"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004900, VkglTestCase_004900_1, VkglTestCase_004900_2);

#define VkglTestCase_004901_1 "dEQP-GLES3.functional.shaders.qualification_order."
#define VkglTestCase_004901_2 "variables.invalid.invariant_storage_invariant_input"
SHRINK_HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004901, VkglTestCase_004901_1, VkglTestCase_004901_2);
=======
static HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004854, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004854 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.qualification_order.v"
        "ariables.invalid.invariant_interp_precision_storage",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004854 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004854 end";
}

static HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004855, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004855 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.qualification_order.v"
        "ariables.invalid.invariant_storage_interp_precision",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004855 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004855 end";
}

static HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004856, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004856 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.qualification_order.v"
        "ariables.invalid.invariant_storage_precision_interp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004856 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004856 end";
}

static HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004857, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004857 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.qualification_order.v"
        "ariables.invalid.invariant_precision_interp_storage",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004857 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004857 end";
}

static HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004858, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004858 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.qualification_order.v"
        "ariables.invalid.invariant_precision_storage_interp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004858 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004858 end";
}

static HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004859, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004859 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.qualification_order.v"
        "ariables.invalid.interp_invariant_storage_precision",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004859 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004859 end";
}

static HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004860, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004860 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.qualification_order.v"
        "ariables.invalid.interp_invariant_precision_storage",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004860 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004860 end";
}

static HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004861, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004861 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.qualification_order.v"
        "ariables.invalid.interp_storage_invariant_precision",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004861 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004861 end";
}

static HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004862, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004862 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.qualification_order.v"
        "ariables.invalid.interp_storage_precision_invariant",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004862 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004862 end";
}

static HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004863, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004863 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.qualification_order.v"
        "ariables.invalid.interp_precision_invariant_storage",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004863 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004863 end";
}

static HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004864, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004864 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.qualification_order.v"
        "ariables.invalid.interp_precision_storage_invariant",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004864 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004864 end";
}

static HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004865, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004865 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.qualification_order.v"
        "ariables.invalid.storage_invariant_interp_precision",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004865 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004865 end";
}

static HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004866, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004866 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.qualification_order.v"
        "ariables.invalid.storage_invariant_precision_interp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004866 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004866 end";
}

static HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004867, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004867 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.qualification_order.v"
        "ariables.invalid.storage_interp_invariant_precision",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004867 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004867 end";
}

static HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004868, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004868 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.qualification_order.v"
        "ariables.invalid.storage_interp_precision_invariant",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004868 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004868 end";
}

static HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004869, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004869 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.qualification_order.v"
        "ariables.invalid.storage_precision_invariant_interp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004869 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004869 end";
}

static HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004870, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004870 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.qualification_order.v"
        "ariables.invalid.storage_precision_interp_invariant",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004870 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004870 end";
}

static HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004871, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004871 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.qualification_order.v"
        "ariables.invalid.precision_invariant_interp_storage",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004871 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004871 end";
}

static HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004872, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004872 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.qualification_order.v"
        "ariables.invalid.precision_invariant_storage_interp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004872 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004872 end";
}

static HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004873, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004873 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.qualification_order.v"
        "ariables.invalid.precision_interp_invariant_storage",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004873 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004873 end";
}

static HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004874, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004874 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.qualification_order.v"
        "ariables.invalid.precision_interp_storage_invariant",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004874 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004874 end";
}

static HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004875, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004875 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.qualification_order.v"
        "ariables.invalid.precision_storage_invariant_interp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004875 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004875 end";
}

static HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004876, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004876 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.qualification_order.v"
        "ariables.invalid.precision_storage_interp_invariant",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004876 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004876 end";
}

static HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004877, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004877 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.qualification_or"
        "der.variables.invalid.interp_precision_storage",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004877 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004877 end";
}

static HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004878, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004878 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.qualification_or"
        "der.variables.invalid.storage_interp_precision",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004878 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004878 end";
}

static HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004879, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004879 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.qualification_or"
        "der.variables.invalid.storage_precision_interp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004879 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004879 end";
}

static HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004880, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004880 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.qualification_or"
        "der.variables.invalid.precision_interp_storage",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004880 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004880 end";
}

static HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004881, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004881 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.qualification_or"
        "der.variables.invalid.precision_storage_interp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004881 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004881 end";
}

static HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004882, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004882 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.qualification_or"
        "der.variables.invalid.invariant_storage_interp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004882 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004882 end";
}

static HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004883, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004883 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.qualification_or"
        "der.variables.invalid.interp_invariant_storage",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004883 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004883 end";
}

static HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004884, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004884 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.qualification_or"
        "der.variables.invalid.interp_storage_invariant",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004884 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004884 end";
}

static HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004885, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004885 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.qualification_or"
        "der.variables.invalid.storage_invariant_interp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004885 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004885 end";
}

static HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004886, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004886 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.qualification_or"
        "der.variables.invalid.storage_interp_invariant",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004886 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004886 end";
}

static HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004887, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004887 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.qualification_ord"
        "er.variables.invalid.invariant_precision_storage",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004887 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004887 end";
}

static HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004888, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004888 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.qualification_ord"
        "er.variables.invalid.storage_invariant_precision",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004888 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004888 end";
}

static HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004889, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004889 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.qualification_ord"
        "er.variables.invalid.storage_precision_invariant",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004889 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004889 end";
}

static HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004890, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004890 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.qualification_ord"
        "er.variables.invalid.precision_invariant_storage",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004890 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004890 end";
}

static HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004891, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004891 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.qualification_ord"
        "er.variables.invalid.precision_storage_invariant",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004891 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004891 end";
}

static HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004892, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004892 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.qualificatio"
        "n_order.variables.invalid.precision_storage",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004892 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004892 end";
}

static HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004893, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004893 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.qualificati"
        "on_order.variables.invalid.storage_interp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004893 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004893 end";
}

static HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004894, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004894 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.qualificatio"
        "n_order.variables.invalid.storage_invariant",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004894 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004894 end";
}

static HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004895, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004895 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.qualification_order.variables"
        ".invalid.invariant_interp_storage_precision_invariant_input",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004895 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004895 end";
}

static HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004896, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004896 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.qualification_order.vari"
        "ables.invalid.interp_storage_precision_invariant_input",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004896 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004896 end";
}

static HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004897, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004897 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.qualification_order.vari"
        "ables.invalid.invariant_interp_storage_invariant_input",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004897 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004897 end";
}

static HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004898, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004898 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.qualification_order.varia"
        "bles.invalid.invariant_storage_precision_invariant_input",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004898 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004898 end";
}

static HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004899, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004899 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.qualification_order."
        "variables.invalid.storage_precision_invariant_input",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004899 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004899 end";
}

static HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004900, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004900 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.qualification_order"
        ".variables.invalid.interp_storage_invariant_input",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004900 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004900 end";
}

static HWTEST_F(ActsDeqpgles30005TestSuite, TestCase_004901, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004901 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.qualification_order."
        "variables.invalid.invariant_storage_invariant_input",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30005TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30005TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30005TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30005TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30005TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004901 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004901 end";
}
>>>>>>> 119876a9a4cc1abc142c2cbcacfd0e9275690a87
