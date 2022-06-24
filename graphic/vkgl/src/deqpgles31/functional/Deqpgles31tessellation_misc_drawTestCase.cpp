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
#include "../ActsDeqpgles310008TestSuite.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007992, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007992 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.tessellation.misc"
        "_draw.fill_cover_triangles_equal_spacing",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007992 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007992 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007993, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007993 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.tessellation.misc_dra"
        "w.fill_cover_triangles_fractional_odd_spacing",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007993 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007993 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007994, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007994 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.tessellation.misc_draw"
        ".fill_cover_triangles_fractional_even_spacing",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007994 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007994 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007995, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007995 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.tessellation.mi"
        "sc_draw.fill_cover_quads_equal_spacing",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007995 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007995 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007996, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007996 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.tessellation.misc_d"
        "raw.fill_cover_quads_fractional_odd_spacing",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007996 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007996 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007997, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007997 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.tessellation.misc_dr"
        "aw.fill_cover_quads_fractional_even_spacing",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007997 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007997 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007998, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007998 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.tessellation.misc_"
        "draw.fill_overlap_triangles_equal_spacing",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007998 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007998 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007999, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_007999 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.tessellation.misc_draw"
        ".fill_overlap_triangles_fractional_odd_spacing",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_007999 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_007999 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_008000, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008000 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.tessellation.misc_draw."
        "fill_overlap_triangles_fractional_even_spacing",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008000 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008000 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_008001, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008001 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.tessellation.mis"
        "c_draw.fill_overlap_quads_equal_spacing",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008001 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008001 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_008002, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008002 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.tessellation.misc_dr"
        "aw.fill_overlap_quads_fractional_odd_spacing",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008002 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008002 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_008003, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008003 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.tessellation.misc_dra"
        "w.fill_overlap_quads_fractional_even_spacing",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008003 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008003 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_008004, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008004 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.tessellatio"
        "n.misc_draw.isolines_equal_spacing",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008004 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008004 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_008005, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008005 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.tessellation.mi"
        "sc_draw.isolines_fractional_odd_spacing",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008005 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008005 end";
}

static HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_008006, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_008006 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES31.functional.tessellation.mis"
        "c_draw.isolines_fractional_even_spacing",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles310008TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles310008TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles310008TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles310008TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles310008TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_008006 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_008006 end";
}
