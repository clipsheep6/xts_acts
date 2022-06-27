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
#include "../ActsDeqpgles310001TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000973, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000973 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.pack_unpack.packsnorm4x8_lowp_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000973 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000973 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000974, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000974 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functi"
        "ons.pack_unpack.packsnorm4x8_lowp_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000974 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000974 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000975, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000975 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_funct"
        "ions.pack_unpack.packsnorm4x8_lowp_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000975 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000975 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000976, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000976 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_func"
        "tions.pack_unpack.packsnorm4x8_lowp_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000976 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000976 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000977, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000977 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_func"
        "tions.pack_unpack.packsnorm4x8_lowp_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000977 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000977 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000978, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000978 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_func"
        "tions.pack_unpack.packsnorm4x8_lowp_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000978 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000978 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000979, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000979 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_funct"
        "ions.pack_unpack.packsnorm4x8_mediump_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000979 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000979 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000980, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000980 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_function"
        "s.pack_unpack.packsnorm4x8_mediump_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000980 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000980 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000981, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000981 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functi"
        "ons.pack_unpack.packsnorm4x8_mediump_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000981 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000981 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000982, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000982 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functi"
        "ons.pack_unpack.packsnorm4x8_mediump_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000982 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000982 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000983, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000983 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functi"
        "ons.pack_unpack.packsnorm4x8_mediump_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000983 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000983 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000984, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000984 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_funct"
        "ions.pack_unpack.packsnorm4x8_mediump_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000984 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000984 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000985, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000985 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_func"
        "tions.pack_unpack.packsnorm4x8_highp_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000985 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000985 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000986, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000986 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functio"
        "ns.pack_unpack.packsnorm4x8_highp_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000986 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000986 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000987, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000987 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_funct"
        "ions.pack_unpack.packsnorm4x8_highp_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000987 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000987 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000988, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000988 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_funct"
        "ions.pack_unpack.packsnorm4x8_highp_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000988 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000988 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000989, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000989 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_funct"
        "ions.pack_unpack.packsnorm4x8_highp_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000989 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000989 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000990, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000990 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_func"
        "tions.pack_unpack.packsnorm4x8_highp_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000990 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000990 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000991, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000991 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fu"
        "nctions.pack_unpack.unpacksnorm4x8_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000991 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000991 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000992, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000992 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_funct"
        "ions.pack_unpack.unpacksnorm4x8_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000992 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000992 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000993, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000993 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.pack_unpack.unpacksnorm4x8_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000993 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000993 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000994, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000994 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.pack_unpack.unpacksnorm4x8_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000994 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000994 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000995, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000995 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.pack_unpack.unpacksnorm4x8_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000995 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000995 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000996, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000996 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fu"
        "nctions.pack_unpack.unpacksnorm4x8_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000996 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000996 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000997, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000997 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.pack_unpack.packunorm4x8_lowp_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000997 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000997 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000998, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000998 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functi"
        "ons.pack_unpack.packunorm4x8_lowp_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000998 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000998 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000999, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_000999 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_funct"
        "ions.pack_unpack.packunorm4x8_lowp_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_000999 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_000999 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_001000, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001000 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_func"
        "tions.pack_unpack.packunorm4x8_lowp_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001000 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001000 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_001001, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001001 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_func"
        "tions.pack_unpack.packunorm4x8_lowp_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001001 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001001 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_001002, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001002 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_func"
        "tions.pack_unpack.packunorm4x8_lowp_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001002 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001002 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_001003, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001003 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_funct"
        "ions.pack_unpack.packunorm4x8_mediump_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001003 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001003 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_001004, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001004 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_function"
        "s.pack_unpack.packunorm4x8_mediump_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001004 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001004 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_001005, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001005 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functi"
        "ons.pack_unpack.packunorm4x8_mediump_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001005 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001005 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_001006, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001006 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functi"
        "ons.pack_unpack.packunorm4x8_mediump_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001006 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001006 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_001007, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001007 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functi"
        "ons.pack_unpack.packunorm4x8_mediump_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001007 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001007 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_001008, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001008 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_funct"
        "ions.pack_unpack.packunorm4x8_mediump_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001008 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001008 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_001009, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001009 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_func"
        "tions.pack_unpack.packunorm4x8_highp_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001009 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001009 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_001010, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001010 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functio"
        "ns.pack_unpack.packunorm4x8_highp_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001010 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001010 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_001011, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001011 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_funct"
        "ions.pack_unpack.packunorm4x8_highp_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001011 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001011 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_001012, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001012 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_funct"
        "ions.pack_unpack.packunorm4x8_highp_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001012 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001012 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_001013, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001013 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_funct"
        "ions.pack_unpack.packunorm4x8_highp_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001013 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001013 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_001014, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001014 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_func"
        "tions.pack_unpack.packunorm4x8_highp_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001014 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001014 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_001015, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001015 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fu"
        "nctions.pack_unpack.unpackunorm4x8_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001015 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001015 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_001016, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001016 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_funct"
        "ions.pack_unpack.unpackunorm4x8_tess_control",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001016 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001016 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_001017, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001017 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.pack_unpack.unpackunorm4x8_tess_eval",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001017 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001017 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_001018, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001018 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.pack_unpack.unpackunorm4x8_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001018 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001018 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_001019, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001019 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.pack_unpack.unpackunorm4x8_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001019 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001019 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_001020, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001020 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fu"
        "nctions.pack_unpack.unpackunorm4x8_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001020 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001020 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_001021, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001021 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_funct"
        "ions.pack_unpack.packsnorm2x16_lowp_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001021 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001021 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_001022, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001022 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_func"
        "tions.pack_unpack.packsnorm2x16_lowp_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001022 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001022 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_001023, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001023 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functi"
        "ons.pack_unpack.packsnorm2x16_mediump_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001023 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001023 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_001024, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001024 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functi"
        "ons.pack_unpack.packsnorm2x16_mediump_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001024 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001024 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_001025, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001025 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_funct"
        "ions.pack_unpack.packsnorm2x16_highp_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001025 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001025 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_001026, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001026 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_funct"
        "ions.pack_unpack.packsnorm2x16_highp_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001026 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001026 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_001027, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001027 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.pack_unpack.unpacksnorm2x16_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001027 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001027 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_001028, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001028 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.pack_unpack.unpacksnorm2x16_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001028 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001028 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_001029, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001029 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_funct"
        "ions.pack_unpack.packunorm2x16_lowp_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001029 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001029 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_001030, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001030 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_func"
        "tions.pack_unpack.packunorm2x16_lowp_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001030 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001030 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_001031, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001031 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functi"
        "ons.pack_unpack.packunorm2x16_mediump_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001031 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001031 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_001032, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001032 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_functi"
        "ons.pack_unpack.packunorm2x16_mediump_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001032 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001032 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_001033, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001033 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_funct"
        "ions.pack_unpack.packunorm2x16_highp_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001033 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001033 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_001034, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001034 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_funct"
        "ions.pack_unpack.packunorm2x16_highp_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001034 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001034 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_001035, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001035 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.pack_unpack.unpackunorm2x16_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001035 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001035 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_001036, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001036 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.pack_unpack.unpackunorm2x16_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001036 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001036 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_001037, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001037 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fu"
        "nctions.pack_unpack.packhalf2x16_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001037 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001037 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_001038, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001038 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_f"
        "unctions.pack_unpack.packhalf2x16_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001038 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001038 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_001039, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001039 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fun"
        "ctions.pack_unpack.unpackhalf2x16_geometry",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001039 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001039 end";
}

static HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_001040, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_001040 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.shaders.builtin_fu"
        "nctions.pack_unpack.unpackhalf2x16_compute",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310001TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310001TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310001TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310001TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310001TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_001040 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_001040 end";
}
