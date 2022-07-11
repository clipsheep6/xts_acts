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
#include "../ActsDeqpgles30019TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_018339_1 "dEQP-GLES3.functional.shaders.builtin_func"
#define VkglTestCase_018339_2 "tions.pack_unpack.packsnorm2x16_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018339, VkglTestCase_018339_1, VkglTestCase_018339_2);

#define VkglTestCase_018340_1 "dEQP-GLES3.functional.shaders.builtin_funct"
#define VkglTestCase_018340_2 "ions.pack_unpack.packsnorm2x16_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018340, VkglTestCase_018340_1, VkglTestCase_018340_2);

#define VkglTestCase_018341_1 "dEQP-GLES3.functional.shaders.builtin_functi"
#define VkglTestCase_018341_2 "ons.pack_unpack.packsnorm2x16_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018341, VkglTestCase_018341_1, VkglTestCase_018341_2);

#define VkglTestCase_018342_1 "dEQP-GLES3.functional.shaders.builtin_functio"
#define VkglTestCase_018342_2 "ns.pack_unpack.packsnorm2x16_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018342, VkglTestCase_018342_1, VkglTestCase_018342_2);

#define VkglTestCase_018343_1 "dEQP-GLES3.functional.shaders.builtin_funct"
#define VkglTestCase_018343_2 "ions.pack_unpack.packsnorm2x16_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018343, VkglTestCase_018343_1, VkglTestCase_018343_2);

#define VkglTestCase_018344_1 "dEQP-GLES3.functional.shaders.builtin_functi"
#define VkglTestCase_018344_2 "ons.pack_unpack.packsnorm2x16_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018344, VkglTestCase_018344_1, VkglTestCase_018344_2);

#define VkglTestCase_018345_1 "dEQP-GLES3.functional.shaders.builtin_fun"
#define VkglTestCase_018345_2 "ctions.pack_unpack.unpacksnorm2x16_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018345, VkglTestCase_018345_1, VkglTestCase_018345_2);

#define VkglTestCase_018346_1 "dEQP-GLES3.functional.shaders.builtin_func"
#define VkglTestCase_018346_2 "tions.pack_unpack.unpacksnorm2x16_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018346, VkglTestCase_018346_1, VkglTestCase_018346_2);

#define VkglTestCase_018347_1 "dEQP-GLES3.functional.shaders.builtin_func"
#define VkglTestCase_018347_2 "tions.pack_unpack.packunorm2x16_lowp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018347, VkglTestCase_018347_1, VkglTestCase_018347_2);

#define VkglTestCase_018348_1 "dEQP-GLES3.functional.shaders.builtin_funct"
#define VkglTestCase_018348_2 "ions.pack_unpack.packunorm2x16_lowp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018348, VkglTestCase_018348_1, VkglTestCase_018348_2);

#define VkglTestCase_018349_1 "dEQP-GLES3.functional.shaders.builtin_functi"
#define VkglTestCase_018349_2 "ons.pack_unpack.packunorm2x16_mediump_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018349, VkglTestCase_018349_1, VkglTestCase_018349_2);

#define VkglTestCase_018350_1 "dEQP-GLES3.functional.shaders.builtin_functio"
#define VkglTestCase_018350_2 "ns.pack_unpack.packunorm2x16_mediump_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018350, VkglTestCase_018350_1, VkglTestCase_018350_2);

#define VkglTestCase_018351_1 "dEQP-GLES3.functional.shaders.builtin_funct"
#define VkglTestCase_018351_2 "ions.pack_unpack.packunorm2x16_highp_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018351, VkglTestCase_018351_1, VkglTestCase_018351_2);

#define VkglTestCase_018352_1 "dEQP-GLES3.functional.shaders.builtin_functi"
#define VkglTestCase_018352_2 "ons.pack_unpack.packunorm2x16_highp_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018352, VkglTestCase_018352_1, VkglTestCase_018352_2);

#define VkglTestCase_018353_1 "dEQP-GLES3.functional.shaders.builtin_fun"
#define VkglTestCase_018353_2 "ctions.pack_unpack.unpackunorm2x16_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018353, VkglTestCase_018353_1, VkglTestCase_018353_2);

#define VkglTestCase_018354_1 "dEQP-GLES3.functional.shaders.builtin_func"
#define VkglTestCase_018354_2 "tions.pack_unpack.unpackunorm2x16_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018354, VkglTestCase_018354_1, VkglTestCase_018354_2);

#define VkglTestCase_018355_1 "dEQP-GLES3.functional.shaders.builtin_f"
#define VkglTestCase_018355_2 "unctions.pack_unpack.packhalf2x16_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018355, VkglTestCase_018355_1, VkglTestCase_018355_2);

#define VkglTestCase_018356_1 "dEQP-GLES3.functional.shaders.builtin_fu"
#define VkglTestCase_018356_2 "nctions.pack_unpack.packhalf2x16_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018356, VkglTestCase_018356_1, VkglTestCase_018356_2);

#define VkglTestCase_018357_1 "dEQP-GLES3.functional.shaders.builtin_fu"
#define VkglTestCase_018357_2 "nctions.pack_unpack.unpackhalf2x16_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018357, VkglTestCase_018357_1, VkglTestCase_018357_2);

#define VkglTestCase_018358_1 "dEQP-GLES3.functional.shaders.builtin_fun"
#define VkglTestCase_018358_2 "ctions.pack_unpack.unpackhalf2x16_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30019TestSuite, TestCase_018358, VkglTestCase_018358_1, VkglTestCase_018358_2);
