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
#include "../ActsDeqpgles310019TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018282, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018282 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.tessellation_geometry_interaction.rend"
        "er.passthrough.tessellate_tris_passthrough_geometry_no_change",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018282 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018282 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018283, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018283 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.tessellation_geometry_interaction.rend"
        "er.passthrough.tessellate_quads_passthrough_geometry_no_change",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018283 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018283 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018284, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018284 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.tessellation_geometry_interaction.render"
        ".passthrough.tessellate_isolines_passthrough_geometry_no_change",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018284 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018284 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018285, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018285 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.tessellation_geometry_interaction.render.pas"
        "sthrough.passthrough_tessellation_geometry_shade_triangles_no_change",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018285 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018285 end";
}

static HWTEST_F(ActsDeqpgles310019TestSuite, TestCase_018286, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_018286 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.tessellation_geometry_interaction.render.p"
        "assthrough.passthrough_tessellation_geometry_shade_lines_no_change",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310019TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310019TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310019TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310019TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310019TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_018286 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_018286 end";
}
