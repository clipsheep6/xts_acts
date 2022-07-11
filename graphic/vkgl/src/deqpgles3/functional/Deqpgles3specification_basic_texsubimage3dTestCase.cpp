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
#include "../ActsDeqpgles30027TestSuite.h"
#include "shrinkdefine.h"
=======
#include <gtest/gtest.h>
#include "../Deqpgles3BaseFunc.h"
#include "../ActsDeqpgles30027TestSuite.h"
>>>>>>> 119876a9a4cc1abc142c2cbcacfd0e9275690a87

using namespace std;
using namespace testing::ext;
using namespace OHOS;

<<<<<<< HEAD
#define VkglTestCase_026530_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026530_2 "cation.basic_texsubimage3d.rgba32f_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026530, VkglTestCase_026530_1, VkglTestCase_026530_2);

#define VkglTestCase_026531_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026531_2 "cation.basic_texsubimage3d.rgba32i_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026531, VkglTestCase_026531_1, VkglTestCase_026531_2);

#define VkglTestCase_026532_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026532_2 "cation.basic_texsubimage3d.rgba32ui_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026532, VkglTestCase_026532_1, VkglTestCase_026532_2);

#define VkglTestCase_026533_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026533_2 "cation.basic_texsubimage3d.rgba16f_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026533, VkglTestCase_026533_1, VkglTestCase_026533_2);

#define VkglTestCase_026534_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026534_2 "cation.basic_texsubimage3d.rgba16i_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026534, VkglTestCase_026534_1, VkglTestCase_026534_2);

#define VkglTestCase_026535_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026535_2 "cation.basic_texsubimage3d.rgba16ui_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026535, VkglTestCase_026535_1, VkglTestCase_026535_2);

#define VkglTestCase_026536_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026536_2 "ication.basic_texsubimage3d.rgba8_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026536, VkglTestCase_026536_1, VkglTestCase_026536_2);

#define VkglTestCase_026537_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026537_2 "ication.basic_texsubimage3d.rgba8i_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026537, VkglTestCase_026537_1, VkglTestCase_026537_2);

#define VkglTestCase_026538_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026538_2 "cation.basic_texsubimage3d.rgba8ui_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026538, VkglTestCase_026538_1, VkglTestCase_026538_2);

#define VkglTestCase_026539_1 "dEQP-GLES3.functional.texture.specifica"
#define VkglTestCase_026539_2 "tion.basic_texsubimage3d.srgb8_alpha8_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026539, VkglTestCase_026539_1, VkglTestCase_026539_2);

#define VkglTestCase_026540_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026540_2 "cation.basic_texsubimage3d.rgb10_a2_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026540, VkglTestCase_026540_1, VkglTestCase_026540_2);

#define VkglTestCase_026541_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_026541_2 "ation.basic_texsubimage3d.rgb10_a2ui_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026541, VkglTestCase_026541_1, VkglTestCase_026541_2);

#define VkglTestCase_026542_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026542_2 "ication.basic_texsubimage3d.rgba4_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026542, VkglTestCase_026542_1, VkglTestCase_026542_2);

#define VkglTestCase_026543_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026543_2 "cation.basic_texsubimage3d.rgb5_a1_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026543, VkglTestCase_026543_1, VkglTestCase_026543_2);

#define VkglTestCase_026544_1 "dEQP-GLES3.functional.texture.specifica"
#define VkglTestCase_026544_2 "tion.basic_texsubimage3d.rgba8_snorm_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026544, VkglTestCase_026544_1, VkglTestCase_026544_2);

#define VkglTestCase_026545_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_026545_2 "fication.basic_texsubimage3d.rgb8_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026545, VkglTestCase_026545_1, VkglTestCase_026545_2);

#define VkglTestCase_026546_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026546_2 "ication.basic_texsubimage3d.rgb565_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026546, VkglTestCase_026546_1, VkglTestCase_026546_2);

#define VkglTestCase_026547_1 "dEQP-GLES3.functional.texture.specificat"
#define VkglTestCase_026547_2 "ion.basic_texsubimage3d.r11f_g11f_b10f_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026547, VkglTestCase_026547_1, VkglTestCase_026547_2);

#define VkglTestCase_026548_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026548_2 "ication.basic_texsubimage3d.rgb32f_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026548, VkglTestCase_026548_1, VkglTestCase_026548_2);

#define VkglTestCase_026549_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026549_2 "ication.basic_texsubimage3d.rgb32i_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026549, VkglTestCase_026549_1, VkglTestCase_026549_2);

#define VkglTestCase_026550_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026550_2 "cation.basic_texsubimage3d.rgb32ui_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026550, VkglTestCase_026550_1, VkglTestCase_026550_2);

#define VkglTestCase_026551_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026551_2 "ication.basic_texsubimage3d.rgb16f_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026551, VkglTestCase_026551_1, VkglTestCase_026551_2);

#define VkglTestCase_026552_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026552_2 "ication.basic_texsubimage3d.rgb16i_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026552, VkglTestCase_026552_1, VkglTestCase_026552_2);

#define VkglTestCase_026553_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026553_2 "cation.basic_texsubimage3d.rgb16ui_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026553, VkglTestCase_026553_1, VkglTestCase_026553_2);

#define VkglTestCase_026554_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_026554_2 "ation.basic_texsubimage3d.rgb8_snorm_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026554, VkglTestCase_026554_1, VkglTestCase_026554_2);

#define VkglTestCase_026555_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026555_2 "ication.basic_texsubimage3d.rgb8i_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026555, VkglTestCase_026555_1, VkglTestCase_026555_2);

#define VkglTestCase_026556_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026556_2 "ication.basic_texsubimage3d.rgb8ui_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026556, VkglTestCase_026556_1, VkglTestCase_026556_2);

#define VkglTestCase_026557_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026557_2 "ication.basic_texsubimage3d.srgb8_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026557, VkglTestCase_026557_1, VkglTestCase_026557_2);

#define VkglTestCase_026558_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026558_2 "cation.basic_texsubimage3d.rgb9_e5_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026558, VkglTestCase_026558_1, VkglTestCase_026558_2);

#define VkglTestCase_026559_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026559_2 "ication.basic_texsubimage3d.rg32f_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026559, VkglTestCase_026559_1, VkglTestCase_026559_2);

#define VkglTestCase_026560_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026560_2 "ication.basic_texsubimage3d.rg32i_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026560, VkglTestCase_026560_1, VkglTestCase_026560_2);

#define VkglTestCase_026561_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026561_2 "ication.basic_texsubimage3d.rg32ui_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026561, VkglTestCase_026561_1, VkglTestCase_026561_2);

#define VkglTestCase_026562_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026562_2 "ication.basic_texsubimage3d.rg16f_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026562, VkglTestCase_026562_1, VkglTestCase_026562_2);

#define VkglTestCase_026563_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026563_2 "ication.basic_texsubimage3d.rg16i_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026563, VkglTestCase_026563_1, VkglTestCase_026563_2);

#define VkglTestCase_026564_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026564_2 "ication.basic_texsubimage3d.rg16ui_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026564, VkglTestCase_026564_1, VkglTestCase_026564_2);

#define VkglTestCase_026565_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_026565_2 "fication.basic_texsubimage3d.rg8_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026565, VkglTestCase_026565_1, VkglTestCase_026565_2);

#define VkglTestCase_026566_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_026566_2 "fication.basic_texsubimage3d.rg8i_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026566, VkglTestCase_026566_1, VkglTestCase_026566_2);

#define VkglTestCase_026567_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026567_2 "ication.basic_texsubimage3d.rg8ui_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026567, VkglTestCase_026567_1, VkglTestCase_026567_2);

#define VkglTestCase_026568_1 "dEQP-GLES3.functional.texture.specific"
#define VkglTestCase_026568_2 "ation.basic_texsubimage3d.rg8_snorm_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026568, VkglTestCase_026568_1, VkglTestCase_026568_2);

#define VkglTestCase_026569_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_026569_2 "fication.basic_texsubimage3d.r32f_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026569, VkglTestCase_026569_1, VkglTestCase_026569_2);

#define VkglTestCase_026570_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_026570_2 "fication.basic_texsubimage3d.r32i_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026570, VkglTestCase_026570_1, VkglTestCase_026570_2);

#define VkglTestCase_026571_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026571_2 "ication.basic_texsubimage3d.r32ui_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026571, VkglTestCase_026571_1, VkglTestCase_026571_2);

#define VkglTestCase_026572_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_026572_2 "fication.basic_texsubimage3d.r16f_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026572, VkglTestCase_026572_1, VkglTestCase_026572_2);

#define VkglTestCase_026573_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_026573_2 "fication.basic_texsubimage3d.r16i_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026573, VkglTestCase_026573_1, VkglTestCase_026573_2);

#define VkglTestCase_026574_1 "dEQP-GLES3.functional.texture.specif"
#define VkglTestCase_026574_2 "ication.basic_texsubimage3d.r16ui_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026574, VkglTestCase_026574_1, VkglTestCase_026574_2);

#define VkglTestCase_026575_1 "dEQP-GLES3.functional.texture.spec"
#define VkglTestCase_026575_2 "ification.basic_texsubimage3d.r8_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026575, VkglTestCase_026575_1, VkglTestCase_026575_2);

#define VkglTestCase_026576_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_026576_2 "fication.basic_texsubimage3d.r8i_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026576, VkglTestCase_026576_1, VkglTestCase_026576_2);

#define VkglTestCase_026577_1 "dEQP-GLES3.functional.texture.speci"
#define VkglTestCase_026577_2 "fication.basic_texsubimage3d.r8ui_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026577, VkglTestCase_026577_1, VkglTestCase_026577_2);

#define VkglTestCase_026578_1 "dEQP-GLES3.functional.texture.specifi"
#define VkglTestCase_026578_2 "cation.basic_texsubimage3d.r8_snorm_3d"
SHRINK_HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026578, VkglTestCase_026578_1, VkglTestCase_026578_2);
=======
static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026530, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026530 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specifi"
        "cation.basic_texsubimage3d.rgba32f_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026530 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026530 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026531, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026531 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specifi"
        "cation.basic_texsubimage3d.rgba32i_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026531 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026531 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026532, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026532 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specifi"
        "cation.basic_texsubimage3d.rgba32ui_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026532 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026532 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026533, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026533 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specifi"
        "cation.basic_texsubimage3d.rgba16f_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026533 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026533 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026534, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026534 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specifi"
        "cation.basic_texsubimage3d.rgba16i_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026534 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026534 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026535, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026535 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specifi"
        "cation.basic_texsubimage3d.rgba16ui_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026535 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026535 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026536, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026536 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specif"
        "ication.basic_texsubimage3d.rgba8_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026536 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026536 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026537, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026537 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specif"
        "ication.basic_texsubimage3d.rgba8i_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026537 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026537 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026538, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026538 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specifi"
        "cation.basic_texsubimage3d.rgba8ui_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026538 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026538 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026539, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026539 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specifica"
        "tion.basic_texsubimage3d.srgb8_alpha8_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026539 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026539 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026540, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026540 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specifi"
        "cation.basic_texsubimage3d.rgb10_a2_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026540 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026540 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026541, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026541 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specific"
        "ation.basic_texsubimage3d.rgb10_a2ui_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026541 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026541 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026542, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026542 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specif"
        "ication.basic_texsubimage3d.rgba4_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026542 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026542 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026543, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026543 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specifi"
        "cation.basic_texsubimage3d.rgb5_a1_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026543 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026543 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026544, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026544 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specifica"
        "tion.basic_texsubimage3d.rgba8_snorm_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026544 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026544 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026545, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026545 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.speci"
        "fication.basic_texsubimage3d.rgb8_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026545 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026545 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026546, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026546 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specif"
        "ication.basic_texsubimage3d.rgb565_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026546 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026546 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026547, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026547 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specificat"
        "ion.basic_texsubimage3d.r11f_g11f_b10f_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026547 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026547 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026548, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026548 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specif"
        "ication.basic_texsubimage3d.rgb32f_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026548 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026548 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026549, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026549 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specif"
        "ication.basic_texsubimage3d.rgb32i_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026549 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026549 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026550, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026550 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specifi"
        "cation.basic_texsubimage3d.rgb32ui_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026550 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026550 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026551, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026551 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specif"
        "ication.basic_texsubimage3d.rgb16f_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026551 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026551 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026552, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026552 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specif"
        "ication.basic_texsubimage3d.rgb16i_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026552 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026552 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026553, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026553 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specifi"
        "cation.basic_texsubimage3d.rgb16ui_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026553 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026553 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026554, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026554 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specific"
        "ation.basic_texsubimage3d.rgb8_snorm_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026554 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026554 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026555, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026555 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specif"
        "ication.basic_texsubimage3d.rgb8i_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026555 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026555 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026556, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026556 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specif"
        "ication.basic_texsubimage3d.rgb8ui_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026556 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026556 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026557, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026557 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specif"
        "ication.basic_texsubimage3d.srgb8_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026557 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026557 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026558, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026558 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specifi"
        "cation.basic_texsubimage3d.rgb9_e5_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026558 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026558 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026559, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026559 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specif"
        "ication.basic_texsubimage3d.rg32f_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026559 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026559 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026560, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026560 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specif"
        "ication.basic_texsubimage3d.rg32i_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026560 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026560 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026561, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026561 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specif"
        "ication.basic_texsubimage3d.rg32ui_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026561 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026561 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026562, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026562 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specif"
        "ication.basic_texsubimage3d.rg16f_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026562 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026562 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026563, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026563 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specif"
        "ication.basic_texsubimage3d.rg16i_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026563 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026563 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026564, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026564 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specif"
        "ication.basic_texsubimage3d.rg16ui_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026564 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026564 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026565, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026565 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.speci"
        "fication.basic_texsubimage3d.rg8_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026565 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026565 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026566, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026566 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.speci"
        "fication.basic_texsubimage3d.rg8i_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026566 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026566 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026567, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026567 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specif"
        "ication.basic_texsubimage3d.rg8ui_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026567 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026567 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026568, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026568 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specific"
        "ation.basic_texsubimage3d.rg8_snorm_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026568 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026568 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026569, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026569 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.speci"
        "fication.basic_texsubimage3d.r32f_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026569 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026569 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026570, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026570 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.speci"
        "fication.basic_texsubimage3d.r32i_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026570 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026570 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026571, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026571 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specif"
        "ication.basic_texsubimage3d.r32ui_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026571 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026571 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026572, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026572 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.speci"
        "fication.basic_texsubimage3d.r16f_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026572 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026572 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026573, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026573 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.speci"
        "fication.basic_texsubimage3d.r16i_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026573 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026573 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026574, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026574 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specif"
        "ication.basic_texsubimage3d.r16ui_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026574 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026574 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026575, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026575 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.spec"
        "ification.basic_texsubimage3d.r8_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026575 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026575 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026576, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026576 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.speci"
        "fication.basic_texsubimage3d.r8i_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026576 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026576 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026577, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026577 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.speci"
        "fication.basic_texsubimage3d.r8ui_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026577 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026577 end";
}

static HWTEST_F(ActsDeqpgles30027TestSuite, TestCase_026578, Function | MediumTest | Level2)
{
    GTEST_LOG_(INFO) << "TestCase_026578 start";
    int argc = 3;
    const char *argv[3] = {
        ".",
        "--deqp-case="
        "dEQP-GLES3.functional.texture.specifi"
        "cation.basic_texsubimage3d.r8_snorm_3d",
        "--deqp-archive-dir=/data/local/tmp/"
    };
    
    FuncRunResult result = RunTestKHRGLES(argc, argv);
    ActsDeqpgles30027TestSuite::runResult.numPassed += result.numPassed;
    ActsDeqpgles30027TestSuite::runResult.numFailed += result.numFailed;
    ActsDeqpgles30027TestSuite::runResult.numNotSupported += result.numNotSupported;
    ActsDeqpgles30027TestSuite::runResult.numWarnings += result.numWarnings;
    ActsDeqpgles30027TestSuite::runResult.numWaived += result.numWaived;
    if (result.numNotSupported == 1) {
        GTEST_LOG_(INFO) << "TestCase_026578 notsupport!";
    } else if (result.isComplete) {
        EXPECT_TRUE(result.isComplete);
        EXPECT_TRUE(result.numPassed == 1);
    };
    GTEST_LOG_(INFO) << "TestCase_026578 end";
}
>>>>>>> 119876a9a4cc1abc142c2cbcacfd0e9275690a87
