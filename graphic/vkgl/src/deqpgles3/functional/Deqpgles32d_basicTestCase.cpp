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
#include "../ActsDeqpgles30025TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024963, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024963 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.mip"
        "map.2d.basic.nearest_nearest_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024963 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024963 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024964, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024964 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.mipmap"
        ".2d.basic.nearest_nearest_clamp_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024964 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024964 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024965, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024965 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.mipmap.2d"
        ".basic.nearest_nearest_clamp_non_square",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024965 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024965 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024966, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024966 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.mipm"
        "ap.2d.basic.nearest_nearest_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024966 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024966 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024967, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024967 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.mipmap"
        ".2d.basic.nearest_nearest_repeat_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024967 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024967 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024968, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024968 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.mipmap.2d"
        ".basic.nearest_nearest_repeat_non_square",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024968 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024968 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024969, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024969 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.mipm"
        "ap.2d.basic.nearest_nearest_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024969 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024969 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024970, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024970 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.mipmap"
        ".2d.basic.nearest_nearest_mirror_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024970 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024970 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024971, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024971 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.mipmap.2d"
        ".basic.nearest_nearest_mirror_non_square",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024971 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024971 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024972, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024972 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.mip"
        "map.2d.basic.linear_nearest_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024972 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024972 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024973, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024973 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.mipma"
        "p.2d.basic.linear_nearest_clamp_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024973 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024973 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024974, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024974 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.mipmap.2"
        "d.basic.linear_nearest_clamp_non_square",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024974 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024974 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024975, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024975 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.mip"
        "map.2d.basic.linear_nearest_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024975 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024975 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024976, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024976 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.mipmap"
        ".2d.basic.linear_nearest_repeat_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024976 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024976 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024977, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024977 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.mipmap.2d"
        ".basic.linear_nearest_repeat_non_square",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024977 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024977 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024978, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024978 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.mip"
        "map.2d.basic.linear_nearest_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024978 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024978 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024979, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024979 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.mipmap"
        ".2d.basic.linear_nearest_mirror_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024979 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024979 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024980, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024980 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.mipmap.2d"
        ".basic.linear_nearest_mirror_non_square",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024980 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024980 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024981, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024981 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.mip"
        "map.2d.basic.nearest_linear_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024981 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024981 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024982, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024982 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.mipma"
        "p.2d.basic.nearest_linear_clamp_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024982 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024982 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024983, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024983 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.mipmap.2"
        "d.basic.nearest_linear_clamp_non_square",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024983 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024983 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024984, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024984 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.mip"
        "map.2d.basic.nearest_linear_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024984 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024984 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024985, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024985 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.mipmap"
        ".2d.basic.nearest_linear_repeat_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024985 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024985 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024986, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024986 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.mipmap.2d"
        ".basic.nearest_linear_repeat_non_square",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024986 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024986 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024987, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024987 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.mip"
        "map.2d.basic.nearest_linear_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024987 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024987 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024988, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024988 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.mipmap"
        ".2d.basic.nearest_linear_mirror_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024988 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024988 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024989, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024989 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.mipmap.2d"
        ".basic.nearest_linear_mirror_non_square",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024989 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024989 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024990, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024990 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.mi"
        "pmap.2d.basic.linear_linear_clamp",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024990 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024990 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024991, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024991 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.mipma"
        "p.2d.basic.linear_linear_clamp_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024991 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024991 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024992, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024992 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.mipmap.2"
        "d.basic.linear_linear_clamp_non_square",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024992 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024992 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024993, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024993 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.mip"
        "map.2d.basic.linear_linear_repeat",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024993 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024993 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024994, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024994 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.mipma"
        "p.2d.basic.linear_linear_repeat_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024994 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024994 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024995, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024995 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.mipmap.2"
        "d.basic.linear_linear_repeat_non_square",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024995 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024995 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024996, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024996 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.mip"
        "map.2d.basic.linear_linear_mirror",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024996 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024996 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024997, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024997 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.mipma"
        "p.2d.basic.linear_linear_mirror_npot",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024997 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024997 end";
}

static HWTEST_F(ActsDeqpgles30025TestSuite, TestCase_024998, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_024998 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.mipmap.2"
        "d.basic.linear_linear_mirror_non_square",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30025TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30025TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30025TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30025TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30025TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_024998 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_024998 end";
}
