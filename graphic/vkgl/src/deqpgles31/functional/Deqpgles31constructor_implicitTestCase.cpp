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
#include "../Deqpgles31BaseFunc.h"
#include "../ActsDeqpgles310004TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003860, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003860 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.arrays_of_arra"
        "ys.es31.constructor.implicit.float_3x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003860 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003860 end";
}

static HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003861, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003861 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.arrays_of_array"
        "s.es31.constructor.implicit.float_3x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003861 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003861 end";
}

static HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003862, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003862 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.arrays_of_arra"
        "ys.es31.constructor.implicit.float_3x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003862 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003862 end";
}

static HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003863, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003863 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.arrays_of_array"
        "s.es31.constructor.implicit.float_3x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003863 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003863 end";
}

static HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003864, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003864 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.arrays_of_arr"
        "ays.es31.constructor.implicit.int_3x1_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003864 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003864 end";
}

static HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003865, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003865 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.arrays_of_arra"
        "ys.es31.constructor.implicit.int_3x1_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003865 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003865 end";
}

static HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003866, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003866 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.arrays_of_arra"
        "ys.es31.constructor.implicit.int_4x4x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003866 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003866 end";
}

static HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003867, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003867 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.arrays_of_array"
        "s.es31.constructor.implicit.int_4x4x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003867 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003867 end";
}

static HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003868, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003868 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.arrays_of_arra"
        "ys.es31.constructor.implicit.bool_3x3x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003868 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003868 end";
}

static HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003869, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003869 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.arrays_of_array"
        "s.es31.constructor.implicit.bool_3x3x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003869 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003869 end";
}

static HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003870, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003870 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.arrays_of_arra"
        "ys.es31.constructor.implicit.bool_2x1x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003870 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003870 end";
}

static HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003871, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003871 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.arrays_of_array"
        "s.es31.constructor.implicit.bool_2x1x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003871 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003871 end";
}

static HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003872, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003872 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.arrays_of_arra"
        "ys.es31.constructor.implicit.struct_3x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003872 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003872 end";
}

static HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003873, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003873 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.arrays_of_array"
        "s.es31.constructor.implicit.struct_3x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003873 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003873 end";
}

static HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003874, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003874 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.arrays_of_array"
        "s.es31.constructor.implicit.struct_4x1x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003874 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003874 end";
}

static HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003875, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003875 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.arrays_of_arrays"
        ".es31.constructor.implicit.struct_4x1x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003875 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003875 end";
}

static HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003876, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003876 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.arrays_of_arr"
        "ays.es31.constructor.implicit.vec3_4x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003876 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003876 end";
}

static HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003877, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003877 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.arrays_of_arra"
        "ys.es31.constructor.implicit.vec3_4x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003877 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003877 end";
}

static HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003878, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003878 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.arrays_of_array"
        "s.es31.constructor.implicit.ivec3_3x2x1_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003878 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003878 end";
}

static HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003879, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003879 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.arrays_of_arrays"
        ".es31.constructor.implicit.ivec3_3x2x1_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003879 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003879 end";
}

static HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003880, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003880 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.arrays_of_array"
        "s.es31.constructor.implicit.bvec3_1x2x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003880 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003880 end";
}

static HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003881, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003881 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.arrays_of_arrays"
        ".es31.constructor.implicit.bvec3_1x2x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003881 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003881 end";
}

static HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003882, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003882 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.arrays_of_arr"
        "ays.es31.constructor.implicit.mat3_3x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003882 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003882 end";
}

static HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003883, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003883 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.arrays_of_arra"
        "ys.es31.constructor.implicit.mat3_3x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003883 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003883 end";
}

static HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003884, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003884 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.arrays_of_arra"
        "ys.es31.constructor.implicit.mat3_3x3x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003884 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003884 end";
}

static HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003885, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003885 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.arrays_of_array"
        "s.es31.constructor.implicit.mat3_3x3x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003885 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003885 end";
}

static HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003886, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003886 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.arrays_of_arr"
        "ays.es31.constructor.implicit.mat3_3x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003886 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003886 end";
}

static HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003887, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003887 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.arrays_of_arra"
        "ys.es31.constructor.implicit.mat3_3x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003887 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003887 end";
}

static HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003888, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003888 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.arrays_of_arrays.es31."
        "constructor.implicit.int_high_dimensional_array_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003888 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003888 end";
}

static HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_003889, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_003889 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.arrays_of_arrays.es31.c"
        "onstructor.implicit.int_high_dimensional_array_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_003889 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_003889 end";
}

static HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004152, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004152 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.arrays_of_arra"
        "ys.es32.constructor.implicit.float_3x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004152 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004152 end";
}

static HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004153, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004153 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.arrays_of_array"
        "s.es32.constructor.implicit.float_3x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004153 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004153 end";
}

static HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004154, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004154 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.arrays_of_arra"
        "ys.es32.constructor.implicit.float_3x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004154 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004154 end";
}

static HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004155, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004155 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.arrays_of_array"
        "s.es32.constructor.implicit.float_3x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004155 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004155 end";
}

static HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004156, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004156 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.arrays_of_arr"
        "ays.es32.constructor.implicit.int_3x1_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004156 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004156 end";
}

static HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004157, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004157 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.arrays_of_arra"
        "ys.es32.constructor.implicit.int_3x1_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004157 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004157 end";
}

static HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004158, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004158 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.arrays_of_arra"
        "ys.es32.constructor.implicit.int_4x4x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004158 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004158 end";
}

static HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004159, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004159 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.arrays_of_array"
        "s.es32.constructor.implicit.int_4x4x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004159 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004159 end";
}

static HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004160, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004160 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.arrays_of_arra"
        "ys.es32.constructor.implicit.bool_3x3x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004160 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004160 end";
}

static HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004161, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004161 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.arrays_of_array"
        "s.es32.constructor.implicit.bool_3x3x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004161 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004161 end";
}

static HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004162, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004162 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.arrays_of_arra"
        "ys.es32.constructor.implicit.bool_2x1x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004162 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004162 end";
}

static HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004163, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004163 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.arrays_of_array"
        "s.es32.constructor.implicit.bool_2x1x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004163 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004163 end";
}

static HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004164, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004164 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.arrays_of_arra"
        "ys.es32.constructor.implicit.struct_3x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004164 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004164 end";
}

static HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004165, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004165 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.arrays_of_array"
        "s.es32.constructor.implicit.struct_3x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004165 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004165 end";
}

static HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004166, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004166 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.arrays_of_array"
        "s.es32.constructor.implicit.struct_4x1x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004166 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004166 end";
}

static HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004167, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004167 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.arrays_of_arrays"
        ".es32.constructor.implicit.struct_4x1x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004167 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004167 end";
}

static HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004168, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004168 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.arrays_of_arr"
        "ays.es32.constructor.implicit.vec3_4x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004168 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004168 end";
}

static HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004169, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004169 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.arrays_of_arra"
        "ys.es32.constructor.implicit.vec3_4x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004169 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004169 end";
}

static HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004170, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004170 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.arrays_of_array"
        "s.es32.constructor.implicit.ivec3_3x2x1_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004170 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004170 end";
}

static HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004171, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004171 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.arrays_of_arrays"
        ".es32.constructor.implicit.ivec3_3x2x1_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004171 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004171 end";
}

static HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004172, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004172 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.arrays_of_array"
        "s.es32.constructor.implicit.bvec3_1x2x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004172 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004172 end";
}

static HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004173, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004173 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.arrays_of_arrays"
        ".es32.constructor.implicit.bvec3_1x2x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004173 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004173 end";
}

static HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004174, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004174 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.arrays_of_arr"
        "ays.es32.constructor.implicit.mat3_3x2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004174 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004174 end";
}

static HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004175, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004175 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.arrays_of_arra"
        "ys.es32.constructor.implicit.mat3_3x2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004175 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004175 end";
}

static HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004176, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004176 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.arrays_of_arra"
        "ys.es32.constructor.implicit.mat3_3x3x3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004176 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004176 end";
}

static HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004177, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004177 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.arrays_of_array"
        "s.es32.constructor.implicit.mat3_3x3x3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004177 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004177 end";
}

static HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004178, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004178 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.arrays_of_arr"
        "ays.es32.constructor.implicit.mat3_3x4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004178 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004178 end";
}

static HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004179, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004179 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.arrays_of_arra"
        "ys.es32.constructor.implicit.mat3_3x4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004179 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004179 end";
}

static HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004180, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004180 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.arrays_of_arrays.es32."
        "constructor.implicit.int_high_dimensional_array_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004180 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004180 end";
}

static HWTEST_F(ActsDeqpgles310004TestSuite, TestCase_004181, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_004181 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.arrays_of_arrays.es32.c"
        "onstructor.implicit.int_high_dimensional_array_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310004TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310004TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310004TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310004TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310004TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_004181 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_004181 end";
}
