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
#include "../ActsDeqpgles310018TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_017599_1 "dEQP-GLES31.functional.blend_e"
#define VkglTestCase_017599_2 "quation_advanced.msaa.multiply"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017599, VkglTestCase_017599_1, VkglTestCase_017599_2);

#define VkglTestCase_017600_1 "dEQP-GLES31.functional.blend_"
#define VkglTestCase_017600_2 "equation_advanced.msaa.screen"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017600, VkglTestCase_017600_1, VkglTestCase_017600_2);

#define VkglTestCase_017601_1 "dEQP-GLES31.functional.blend_"
#define VkglTestCase_017601_2 "equation_advanced.msaa.overlay"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017601, VkglTestCase_017601_1, VkglTestCase_017601_2);

#define VkglTestCase_017602_1 "dEQP-GLES31.functional.blend_"
#define VkglTestCase_017602_2 "equation_advanced.msaa.darken"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017602, VkglTestCase_017602_1, VkglTestCase_017602_2);

#define VkglTestCase_017603_1 "dEQP-GLES31.functional.blend_"
#define VkglTestCase_017603_2 "equation_advanced.msaa.lighten"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017603, VkglTestCase_017603_1, VkglTestCase_017603_2);

#define VkglTestCase_017604_1 "dEQP-GLES31.functional.blend_eq"
#define VkglTestCase_017604_2 "uation_advanced.msaa.colordodge"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017604, VkglTestCase_017604_1, VkglTestCase_017604_2);

#define VkglTestCase_017605_1 "dEQP-GLES31.functional.blend_e"
#define VkglTestCase_017605_2 "quation_advanced.msaa.colorburn"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017605, VkglTestCase_017605_1, VkglTestCase_017605_2);

#define VkglTestCase_017606_1 "dEQP-GLES31.functional.blend_e"
#define VkglTestCase_017606_2 "quation_advanced.msaa.hardlight"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017606, VkglTestCase_017606_1, VkglTestCase_017606_2);

#define VkglTestCase_017607_1 "dEQP-GLES31.functional.blend_e"
#define VkglTestCase_017607_2 "quation_advanced.msaa.softlight"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017607, VkglTestCase_017607_1, VkglTestCase_017607_2);

#define VkglTestCase_017608_1 "dEQP-GLES31.functional.blend_eq"
#define VkglTestCase_017608_2 "uation_advanced.msaa.difference"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017608, VkglTestCase_017608_1, VkglTestCase_017608_2);

#define VkglTestCase_017609_1 "dEQP-GLES31.functional.blend_e"
#define VkglTestCase_017609_2 "quation_advanced.msaa.exclusion"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017609, VkglTestCase_017609_1, VkglTestCase_017609_2);

#define VkglTestCase_017610_1 "dEQP-GLES31.functional.blend_"
#define VkglTestCase_017610_2 "equation_advanced.msaa.hsl_hue"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017610, VkglTestCase_017610_1, VkglTestCase_017610_2);

#define VkglTestCase_017611_1 "dEQP-GLES31.functional.blend_equa"
#define VkglTestCase_017611_2 "tion_advanced.msaa.hsl_saturation"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017611, VkglTestCase_017611_1, VkglTestCase_017611_2);

#define VkglTestCase_017612_1 "dEQP-GLES31.functional.blend_e"
#define VkglTestCase_017612_2 "quation_advanced.msaa.hsl_color"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017612, VkglTestCase_017612_1, VkglTestCase_017612_2);

#define VkglTestCase_017613_1 "dEQP-GLES31.functional.blend_equa"
#define VkglTestCase_017613_2 "tion_advanced.msaa.hsl_luminosity"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017613, VkglTestCase_017613_1, VkglTestCase_017613_2);
