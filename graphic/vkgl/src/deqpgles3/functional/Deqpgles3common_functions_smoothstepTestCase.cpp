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
#include "../ActsDeqpgles30014TestSuite.h"
#include "shrinkdefine.h"
=======
#include <gtest/gtest.h>
#include "../Deqpgles3BaseFunc.h"
#include "../ActsDeqpgles30014TestSuite.h"
>>>>>>> 119876a9a4cc1abc142c2cbcacfd0e9275690a87

using namespace std;
using namespace testing::ext;
using namespace OHOS;

<<<<<<< HEAD
#define VkglTestCase_013232_1 "dEQP-GLES3.functional.shaders.operator.com"
#define VkglTestCase_013232_2 "mon_functions.smoothstep.lowp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013232, VkglTestCase_013232_1, VkglTestCase_013232_2);

#define VkglTestCase_013233_1 "dEQP-GLES3.functional.shaders.operator.comm"
#define VkglTestCase_013233_2 "on_functions.smoothstep.lowp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013233, VkglTestCase_013233_1, VkglTestCase_013233_2);

#define VkglTestCase_013234_1 "dEQP-GLES3.functional.shaders.operator.comm"
#define VkglTestCase_013234_2 "on_functions.smoothstep.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013234, VkglTestCase_013234_1, VkglTestCase_013234_2);

#define VkglTestCase_013235_1 "dEQP-GLES3.functional.shaders.operator.commo"
#define VkglTestCase_013235_2 "n_functions.smoothstep.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013235, VkglTestCase_013235_1, VkglTestCase_013235_2);

#define VkglTestCase_013236_1 "dEQP-GLES3.functional.shaders.operator.com"
#define VkglTestCase_013236_2 "mon_functions.smoothstep.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013236, VkglTestCase_013236_1, VkglTestCase_013236_2);

#define VkglTestCase_013237_1 "dEQP-GLES3.functional.shaders.operator.comm"
#define VkglTestCase_013237_2 "on_functions.smoothstep.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013237, VkglTestCase_013237_1, VkglTestCase_013237_2);

#define VkglTestCase_013238_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_013238_2 "mmon_functions.smoothstep.lowp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013238, VkglTestCase_013238_1, VkglTestCase_013238_2);

#define VkglTestCase_013239_1 "dEQP-GLES3.functional.shaders.operator.com"
#define VkglTestCase_013239_2 "mon_functions.smoothstep.lowp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013239, VkglTestCase_013239_1, VkglTestCase_013239_2);

#define VkglTestCase_013240_1 "dEQP-GLES3.functional.shaders.operator.comm"
#define VkglTestCase_013240_2 "on_functions.smoothstep.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013240, VkglTestCase_013240_1, VkglTestCase_013240_2);

#define VkglTestCase_013241_1 "dEQP-GLES3.functional.shaders.operator.commo"
#define VkglTestCase_013241_2 "n_functions.smoothstep.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013241, VkglTestCase_013241_1, VkglTestCase_013241_2);

#define VkglTestCase_013242_1 "dEQP-GLES3.functional.shaders.operator.com"
#define VkglTestCase_013242_2 "mon_functions.smoothstep.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013242, VkglTestCase_013242_1, VkglTestCase_013242_2);

#define VkglTestCase_013243_1 "dEQP-GLES3.functional.shaders.operator.comm"
#define VkglTestCase_013243_2 "on_functions.smoothstep.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013243, VkglTestCase_013243_1, VkglTestCase_013243_2);

#define VkglTestCase_013244_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_013244_2 "mmon_functions.smoothstep.lowp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013244, VkglTestCase_013244_1, VkglTestCase_013244_2);

#define VkglTestCase_013245_1 "dEQP-GLES3.functional.shaders.operator.com"
#define VkglTestCase_013245_2 "mon_functions.smoothstep.lowp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013245, VkglTestCase_013245_1, VkglTestCase_013245_2);

#define VkglTestCase_013246_1 "dEQP-GLES3.functional.shaders.operator.comm"
#define VkglTestCase_013246_2 "on_functions.smoothstep.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013246, VkglTestCase_013246_1, VkglTestCase_013246_2);

#define VkglTestCase_013247_1 "dEQP-GLES3.functional.shaders.operator.commo"
#define VkglTestCase_013247_2 "n_functions.smoothstep.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013247, VkglTestCase_013247_1, VkglTestCase_013247_2);

#define VkglTestCase_013248_1 "dEQP-GLES3.functional.shaders.operator.com"
#define VkglTestCase_013248_2 "mon_functions.smoothstep.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013248, VkglTestCase_013248_1, VkglTestCase_013248_2);

#define VkglTestCase_013249_1 "dEQP-GLES3.functional.shaders.operator.comm"
#define VkglTestCase_013249_2 "on_functions.smoothstep.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013249, VkglTestCase_013249_1, VkglTestCase_013249_2);

#define VkglTestCase_013250_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_013250_2 "mmon_functions.smoothstep.lowp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013250, VkglTestCase_013250_1, VkglTestCase_013250_2);

#define VkglTestCase_013251_1 "dEQP-GLES3.functional.shaders.operator.com"
#define VkglTestCase_013251_2 "mon_functions.smoothstep.lowp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013251, VkglTestCase_013251_1, VkglTestCase_013251_2);

#define VkglTestCase_013252_1 "dEQP-GLES3.functional.shaders.operator.comm"
#define VkglTestCase_013252_2 "on_functions.smoothstep.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013252, VkglTestCase_013252_1, VkglTestCase_013252_2);

#define VkglTestCase_013253_1 "dEQP-GLES3.functional.shaders.operator.commo"
#define VkglTestCase_013253_2 "n_functions.smoothstep.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013253, VkglTestCase_013253_1, VkglTestCase_013253_2);

#define VkglTestCase_013254_1 "dEQP-GLES3.functional.shaders.operator.com"
#define VkglTestCase_013254_2 "mon_functions.smoothstep.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013254, VkglTestCase_013254_1, VkglTestCase_013254_2);

#define VkglTestCase_013255_1 "dEQP-GLES3.functional.shaders.operator.comm"
#define VkglTestCase_013255_2 "on_functions.smoothstep.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013255, VkglTestCase_013255_1, VkglTestCase_013255_2);

#define VkglTestCase_013256_1 "dEQP-GLES3.functional.shaders.operator.commo"
#define VkglTestCase_013256_2 "n_functions.smoothstep.lowp_float_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013256, VkglTestCase_013256_1, VkglTestCase_013256_2);

#define VkglTestCase_013257_1 "dEQP-GLES3.functional.shaders.operator.common"
#define VkglTestCase_013257_2 "_functions.smoothstep.lowp_float_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013257, VkglTestCase_013257_1, VkglTestCase_013257_2);

#define VkglTestCase_013258_1 "dEQP-GLES3.functional.shaders.operator.common_"
#define VkglTestCase_013258_2 "functions.smoothstep.mediump_float_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013258, VkglTestCase_013258_1, VkglTestCase_013258_2);

#define VkglTestCase_013259_1 "dEQP-GLES3.functional.shaders.operator.common_f"
#define VkglTestCase_013259_2 "unctions.smoothstep.mediump_float_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013259, VkglTestCase_013259_1, VkglTestCase_013259_2);

#define VkglTestCase_013260_1 "dEQP-GLES3.functional.shaders.operator.common"
#define VkglTestCase_013260_2 "_functions.smoothstep.highp_float_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013260, VkglTestCase_013260_1, VkglTestCase_013260_2);

#define VkglTestCase_013261_1 "dEQP-GLES3.functional.shaders.operator.common_"
#define VkglTestCase_013261_2 "functions.smoothstep.highp_float_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013261, VkglTestCase_013261_1, VkglTestCase_013261_2);

#define VkglTestCase_013262_1 "dEQP-GLES3.functional.shaders.operator.commo"
#define VkglTestCase_013262_2 "n_functions.smoothstep.lowp_float_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013262, VkglTestCase_013262_1, VkglTestCase_013262_2);

#define VkglTestCase_013263_1 "dEQP-GLES3.functional.shaders.operator.common"
#define VkglTestCase_013263_2 "_functions.smoothstep.lowp_float_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013263, VkglTestCase_013263_1, VkglTestCase_013263_2);

#define VkglTestCase_013264_1 "dEQP-GLES3.functional.shaders.operator.common_"
#define VkglTestCase_013264_2 "functions.smoothstep.mediump_float_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013264, VkglTestCase_013264_1, VkglTestCase_013264_2);

#define VkglTestCase_013265_1 "dEQP-GLES3.functional.shaders.operator.common_f"
#define VkglTestCase_013265_2 "unctions.smoothstep.mediump_float_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013265, VkglTestCase_013265_1, VkglTestCase_013265_2);

#define VkglTestCase_013266_1 "dEQP-GLES3.functional.shaders.operator.common"
#define VkglTestCase_013266_2 "_functions.smoothstep.highp_float_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013266, VkglTestCase_013266_1, VkglTestCase_013266_2);

#define VkglTestCase_013267_1 "dEQP-GLES3.functional.shaders.operator.common_"
#define VkglTestCase_013267_2 "functions.smoothstep.highp_float_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013267, VkglTestCase_013267_1, VkglTestCase_013267_2);

#define VkglTestCase_013268_1 "dEQP-GLES3.functional.shaders.operator.commo"
#define VkglTestCase_013268_2 "n_functions.smoothstep.lowp_float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013268, VkglTestCase_013268_1, VkglTestCase_013268_2);

#define VkglTestCase_013269_1 "dEQP-GLES3.functional.shaders.operator.common"
#define VkglTestCase_013269_2 "_functions.smoothstep.lowp_float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013269, VkglTestCase_013269_1, VkglTestCase_013269_2);

#define VkglTestCase_013270_1 "dEQP-GLES3.functional.shaders.operator.common_"
#define VkglTestCase_013270_2 "functions.smoothstep.mediump_float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013270, VkglTestCase_013270_1, VkglTestCase_013270_2);

#define VkglTestCase_013271_1 "dEQP-GLES3.functional.shaders.operator.common_f"
#define VkglTestCase_013271_2 "unctions.smoothstep.mediump_float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013271, VkglTestCase_013271_1, VkglTestCase_013271_2);

#define VkglTestCase_013272_1 "dEQP-GLES3.functional.shaders.operator.common"
#define VkglTestCase_013272_2 "_functions.smoothstep.highp_float_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013272, VkglTestCase_013272_1, VkglTestCase_013272_2);

#define VkglTestCase_013273_1 "dEQP-GLES3.functional.shaders.operator.common_"
#define VkglTestCase_013273_2 "functions.smoothstep.highp_float_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013273, VkglTestCase_013273_1, VkglTestCase_013273_2);
=======
static HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013232, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013232 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.com"
        "mon_functions.smoothstep.lowp_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013232 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013232 end";
}

static HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013233, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013233 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.comm"
        "on_functions.smoothstep.lowp_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013233 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013233 end";
}

static HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013234, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013234 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.comm"
        "on_functions.smoothstep.mediump_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013234 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013234 end";
}

static HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013235, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013235 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.commo"
        "n_functions.smoothstep.mediump_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013235 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013235 end";
}

static HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013236, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013236 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.com"
        "mon_functions.smoothstep.highp_float_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013236 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013236 end";
}

static HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013237, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013237 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.comm"
        "on_functions.smoothstep.highp_float_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013237 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013237 end";
}

static HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013238, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013238 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.co"
        "mmon_functions.smoothstep.lowp_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013238 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013238 end";
}

static HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013239, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013239 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.com"
        "mon_functions.smoothstep.lowp_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013239 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013239 end";
}

static HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013240, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013240 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.comm"
        "on_functions.smoothstep.mediump_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013240 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013240 end";
}

static HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013241, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013241 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.commo"
        "n_functions.smoothstep.mediump_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013241 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013241 end";
}

static HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013242, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013242 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.com"
        "mon_functions.smoothstep.highp_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013242 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013242 end";
}

static HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013243, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013243 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.comm"
        "on_functions.smoothstep.highp_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013243 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013243 end";
}

static HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013244, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013244 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.co"
        "mmon_functions.smoothstep.lowp_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013244 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013244 end";
}

static HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013245, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013245 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.com"
        "mon_functions.smoothstep.lowp_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013245 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013245 end";
}

static HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013246, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013246 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.comm"
        "on_functions.smoothstep.mediump_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013246 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013246 end";
}

static HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013247, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013247 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.commo"
        "n_functions.smoothstep.mediump_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013247 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013247 end";
}

static HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013248, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013248 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.com"
        "mon_functions.smoothstep.highp_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013248 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013248 end";
}

static HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013249, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013249 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.comm"
        "on_functions.smoothstep.highp_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013249 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013249 end";
}

static HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013250, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013250 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.co"
        "mmon_functions.smoothstep.lowp_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013250 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013250 end";
}

static HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013251, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013251 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.com"
        "mon_functions.smoothstep.lowp_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013251 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013251 end";
}

static HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013252, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013252 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.comm"
        "on_functions.smoothstep.mediump_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013252 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013252 end";
}

static HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013253, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013253 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.commo"
        "n_functions.smoothstep.mediump_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013253 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013253 end";
}

static HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013254, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013254 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.com"
        "mon_functions.smoothstep.highp_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013254 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013254 end";
}

static HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013255, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013255 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.comm"
        "on_functions.smoothstep.highp_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013255 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013255 end";
}

static HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013256, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013256 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.commo"
        "n_functions.smoothstep.lowp_float_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013256 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013256 end";
}

static HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013257, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013257 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.common"
        "_functions.smoothstep.lowp_float_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013257 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013257 end";
}

static HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013258, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013258 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.common_"
        "functions.smoothstep.mediump_float_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013258 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013258 end";
}

static HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013259, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013259 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.common_f"
        "unctions.smoothstep.mediump_float_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013259 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013259 end";
}

static HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013260, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013260 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.common"
        "_functions.smoothstep.highp_float_vec2_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013260 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013260 end";
}

static HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013261, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013261 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.common_"
        "functions.smoothstep.highp_float_vec2_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013261 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013261 end";
}

static HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013262, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013262 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.commo"
        "n_functions.smoothstep.lowp_float_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013262 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013262 end";
}

static HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013263, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013263 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.common"
        "_functions.smoothstep.lowp_float_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013263 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013263 end";
}

static HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013264, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013264 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.common_"
        "functions.smoothstep.mediump_float_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013264 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013264 end";
}

static HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013265, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013265 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.common_f"
        "unctions.smoothstep.mediump_float_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013265 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013265 end";
}

static HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013266, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013266 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.common"
        "_functions.smoothstep.highp_float_vec3_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013266 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013266 end";
}

static HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013267, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013267 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.common_"
        "functions.smoothstep.highp_float_vec3_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013267 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013267 end";
}

static HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013268, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013268 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.commo"
        "n_functions.smoothstep.lowp_float_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013268 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013268 end";
}

static HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013269, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013269 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.common"
        "_functions.smoothstep.lowp_float_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013269 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013269 end";
}

static HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013270, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013270 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.common_"
        "functions.smoothstep.mediump_float_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013270 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013270 end";
}

static HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013271, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013271 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.common_f"
        "unctions.smoothstep.mediump_float_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013271 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013271 end";
}

static HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013272, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013272 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.common"
        "_functions.smoothstep.highp_float_vec4_vertex",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013272 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013272 end";
}

static HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013273, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_013273 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.shaders.operator.common_"
        "functions.smoothstep.highp_float_vec4_fragment",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30014TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30014TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30014TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30014TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30014TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_013273 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_013273 end";
}
>>>>>>> 119876a9a4cc1abc142c2cbcacfd0e9275690a87
