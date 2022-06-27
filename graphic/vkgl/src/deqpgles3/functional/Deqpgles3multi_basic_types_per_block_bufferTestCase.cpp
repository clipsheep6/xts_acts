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

#include <climits>
#include <gtest/gtest.h>
#include "../Deqpgles3BaseFunc.h"
#include "../ActsDeqpgles30036TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035828, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035828 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.multi_basic"
        "_types.per_block_buffer.shared_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035828 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035828 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035829, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035829 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.multi_basic_"
        "types.per_block_buffer.shared_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035829 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035829 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035830, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035830 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.multi_basi"
        "c_types.per_block_buffer.shared_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035830 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035830 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035831, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035831 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.multi_basi"
        "c_types.per_block_buffer.shared_mixed",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035831 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035831 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035832, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035832 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.multi_basic_types."
        "per_block_buffer.shared_instance_array_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035832 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035832 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035833, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035833 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.multi_basic_types.p"
        "er_block_buffer.shared_instance_array_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035833 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035833 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035834, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035834 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.multi_basic_types"
        ".per_block_buffer.shared_instance_array_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035834 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035834 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035835, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035835 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.multi_basic_types."
        "per_block_buffer.shared_instance_array_mixed",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035835 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035835 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035836, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035836 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.multi_basic"
        "_types.per_block_buffer.packed_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035836 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035836 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035837, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035837 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.multi_basic_"
        "types.per_block_buffer.packed_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035837 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035837 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035838, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035838 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.multi_basi"
        "c_types.per_block_buffer.packed_mixed",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035838 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035838 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035839, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035839 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.multi_basic_types."
        "per_block_buffer.packed_instance_array_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035839 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035839 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035840, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035840 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.multi_basic_types.p"
        "er_block_buffer.packed_instance_array_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035840 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035840 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035841, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035841 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.multi_basic_types."
        "per_block_buffer.packed_instance_array_mixed",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035841 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035841 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035842, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035842 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.multi_basic"
        "_types.per_block_buffer.std140_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035842 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035842 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035843, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035843 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.multi_basic_"
        "types.per_block_buffer.std140_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035843 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035843 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035844, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035844 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.multi_basi"
        "c_types.per_block_buffer.std140_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035844 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035844 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035845, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035845 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.multi_basi"
        "c_types.per_block_buffer.std140_mixed",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035845 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035845 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035846, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035846 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.multi_basic_types."
        "per_block_buffer.std140_instance_array_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035846 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035846 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035847, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035847 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.multi_basic_types.p"
        "er_block_buffer.std140_instance_array_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035847 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035847 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035848, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035848 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.multi_basic_types"
        ".per_block_buffer.std140_instance_array_both",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035848 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035848 end";
}

static HWTEST_F(ActsDeqpgles30036TestSuite, TestCase_035849, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_035849 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.ubo.multi_basic_types."
        "per_block_buffer.std140_instance_array_mixed",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30036TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30036TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30036TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30036TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30036TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_035849 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_035849 end";
}
