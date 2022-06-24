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
#include "../ActsDeqpgles310014TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013083, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013083 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.gath"
        "er.basic.2d.rgba8.base_level.level_1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013083 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013083 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013084, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013084 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.gath"
        "er.basic.2d.rgba8.base_level.level_2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013084 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013084 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013152, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013152 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.gather."
        "basic.2d_array.rgba8.base_level.level_1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013152 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013152 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013153, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013153 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.gather."
        "basic.2d_array.rgba8.base_level.level_2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013153 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013153 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013227, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013227 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.gathe"
        "r.basic.cube.rgba8.base_level.level_1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013227 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013227 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013228, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013228 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.gathe"
        "r.basic.cube.rgba8.base_level.level_2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013228 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013228 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013361, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013361 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.gather.offset.im"
        "plementation_offset.2d.rgba8.base_level.level_1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013361 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013361 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013362, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013362 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.gather.offset.im"
        "plementation_offset.2d.rgba8.base_level.level_2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013362 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013362 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013430, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013430 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.gather.offset.imple"
        "mentation_offset.2d_array.rgba8.base_level.level_1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013430 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013430 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013431, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013431 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.gather.offset.imple"
        "mentation_offset.2d_array.rgba8.base_level.level_2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013431 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013431 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013559, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013559 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.gather.offset_dynami"
        "c.implementation_offset.2d.rgba8.base_level.level_1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013559 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013559 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013560, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013560 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.gather.offset_dynami"
        "c.implementation_offset.2d.rgba8.base_level.level_2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013560 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013560 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013628, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013628 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.gather.offset_dynamic.i"
        "mplementation_offset.2d_array.rgba8.base_level.level_1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013628 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013628 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013629, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013629 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.gather.offset_dynamic.i"
        "mplementation_offset.2d_array.rgba8.base_level.level_2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013629 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013629 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013757, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013757 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.gather.offsets.i"
        "mplementation_offset.2d.rgba8.base_level.level_1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013757 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013757 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013758, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013758 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.gather.offsets.i"
        "mplementation_offset.2d.rgba8.base_level.level_2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013758 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013758 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013826, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013826 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.gather.offsets.impl"
        "ementation_offset.2d_array.rgba8.base_level.level_1",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013826 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013826 end";
}

static HWTEST_F(ActsDeqpgles310014TestSuite, TestCase_013827, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013827 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.texture.gather.offsets.impl"
        "ementation_offset.2d_array.rgba8.base_level.level_2",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013827 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013827 end";
}
