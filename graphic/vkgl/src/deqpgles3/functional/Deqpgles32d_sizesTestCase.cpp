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
#include "../ActsDeqpgles30024TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023965, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023965 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture."
        "filtering.2d.sizes.4x8_nearest",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023965 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023965 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023966, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023966 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture"
        ".filtering.2d.sizes.4x8_linear",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023966 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023966 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023967, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023967 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filteri"
        "ng.2d.sizes.4x8_nearest_mipmap_nearest",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023967 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023967 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023968, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023968 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filteri"
        "ng.2d.sizes.4x8_linear_mipmap_nearest",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023968 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023968 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023969, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023969 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filteri"
        "ng.2d.sizes.4x8_nearest_mipmap_linear",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023969 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023969 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023970, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023970 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filter"
        "ing.2d.sizes.4x8_linear_mipmap_linear",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023970 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023970 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023971, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023971 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.f"
        "iltering.2d.sizes.32x64_nearest",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023971 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023971 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023972, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023972 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture."
        "filtering.2d.sizes.32x64_linear",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023972 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023972 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023973, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023973 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filterin"
        "g.2d.sizes.32x64_nearest_mipmap_nearest",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023973 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023973 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023974, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023974 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filterin"
        "g.2d.sizes.32x64_linear_mipmap_nearest",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023974 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023974 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023975, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023975 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filterin"
        "g.2d.sizes.32x64_nearest_mipmap_linear",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023975 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023975 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023976, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023976 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filteri"
        "ng.2d.sizes.32x64_linear_mipmap_linear",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023976 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023976 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023977, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023977 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.fi"
        "ltering.2d.sizes.128x128_nearest",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023977 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023977 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023978, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023978 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.f"
        "iltering.2d.sizes.128x128_linear",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023978 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023978 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023979, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023979 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering"
        ".2d.sizes.128x128_nearest_mipmap_nearest",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023979 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023979 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023980, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023980 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering"
        ".2d.sizes.128x128_linear_mipmap_nearest",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023980 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023980 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023981, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023981 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering"
        ".2d.sizes.128x128_nearest_mipmap_linear",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023981 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023981 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023982, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023982 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filterin"
        "g.2d.sizes.128x128_linear_mipmap_linear",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023982 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023982 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023983, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023983 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture."
        "filtering.2d.sizes.3x7_nearest",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023983 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023983 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023984, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023984 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture"
        ".filtering.2d.sizes.3x7_linear",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023984 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023984 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023985, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023985 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filteri"
        "ng.2d.sizes.3x7_nearest_mipmap_nearest",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023985 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023985 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023986, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023986 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filteri"
        "ng.2d.sizes.3x7_linear_mipmap_nearest",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023986 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023986 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023987, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023987 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filteri"
        "ng.2d.sizes.3x7_nearest_mipmap_linear",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023987 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023987 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023988, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023988 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filter"
        "ing.2d.sizes.3x7_linear_mipmap_linear",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023988 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023988 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023989, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023989 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.f"
        "iltering.2d.sizes.31x55_nearest",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023989 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023989 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023990, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023990 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture."
        "filtering.2d.sizes.31x55_linear",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023990 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023990 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023991, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023991 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filterin"
        "g.2d.sizes.31x55_nearest_mipmap_nearest",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023991 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023991 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023992, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023992 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filterin"
        "g.2d.sizes.31x55_linear_mipmap_nearest",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023992 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023992 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023993, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023993 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filterin"
        "g.2d.sizes.31x55_nearest_mipmap_linear",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023993 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023993 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023994, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023994 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filteri"
        "ng.2d.sizes.31x55_linear_mipmap_linear",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023994 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023994 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023995, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023995 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.f"
        "iltering.2d.sizes.127x99_nearest",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023995 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023995 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023996, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023996 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.f"
        "iltering.2d.sizes.127x99_linear",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023996 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023996 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023997, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023997 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filtering"
        ".2d.sizes.127x99_nearest_mipmap_nearest",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023997 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023997 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023998, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023998 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filterin"
        "g.2d.sizes.127x99_linear_mipmap_nearest",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023998 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023998 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_023999, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_023999 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filterin"
        "g.2d.sizes.127x99_nearest_mipmap_linear",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_023999 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_023999 end";
}

static HWTEST_F(ActsDeqpgles30024TestSuite, TestCase_024000, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024000 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.filterin"
        "g.2d.sizes.127x99_linear_mipmap_linear",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30024TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30024TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30024TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30024TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30024TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024000 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024000 end";
}
