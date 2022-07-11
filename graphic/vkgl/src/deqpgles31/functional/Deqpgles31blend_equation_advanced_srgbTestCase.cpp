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

#define VkglTestCase_017584_1 "dEQP-GLES31.functional.blend_e"
#define VkglTestCase_017584_2 "quation_advanced.srgb.multiply"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017584, VkglTestCase_017584_1, VkglTestCase_017584_2);

#define VkglTestCase_017585_1 "dEQP-GLES31.functional.blend_"
#define VkglTestCase_017585_2 "equation_advanced.srgb.screen"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017585, VkglTestCase_017585_1, VkglTestCase_017585_2);

#define VkglTestCase_017586_1 "dEQP-GLES31.functional.blend_"
#define VkglTestCase_017586_2 "equation_advanced.srgb.overlay"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017586, VkglTestCase_017586_1, VkglTestCase_017586_2);

#define VkglTestCase_017587_1 "dEQP-GLES31.functional.blend_"
#define VkglTestCase_017587_2 "equation_advanced.srgb.darken"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017587, VkglTestCase_017587_1, VkglTestCase_017587_2);

#define VkglTestCase_017588_1 "dEQP-GLES31.functional.blend_"
#define VkglTestCase_017588_2 "equation_advanced.srgb.lighten"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017588, VkglTestCase_017588_1, VkglTestCase_017588_2);

#define VkglTestCase_017589_1 "dEQP-GLES31.functional.blend_eq"
#define VkglTestCase_017589_2 "uation_advanced.srgb.colordodge"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017589, VkglTestCase_017589_1, VkglTestCase_017589_2);

#define VkglTestCase_017590_1 "dEQP-GLES31.functional.blend_e"
#define VkglTestCase_017590_2 "quation_advanced.srgb.colorburn"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017590, VkglTestCase_017590_1, VkglTestCase_017590_2);

#define VkglTestCase_017591_1 "dEQP-GLES31.functional.blend_e"
#define VkglTestCase_017591_2 "quation_advanced.srgb.hardlight"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017591, VkglTestCase_017591_1, VkglTestCase_017591_2);

#define VkglTestCase_017592_1 "dEQP-GLES31.functional.blend_e"
#define VkglTestCase_017592_2 "quation_advanced.srgb.softlight"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017592, VkglTestCase_017592_1, VkglTestCase_017592_2);

#define VkglTestCase_017593_1 "dEQP-GLES31.functional.blend_eq"
#define VkglTestCase_017593_2 "uation_advanced.srgb.difference"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017593, VkglTestCase_017593_1, VkglTestCase_017593_2);

#define VkglTestCase_017594_1 "dEQP-GLES31.functional.blend_e"
#define VkglTestCase_017594_2 "quation_advanced.srgb.exclusion"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017594, VkglTestCase_017594_1, VkglTestCase_017594_2);

#define VkglTestCase_017595_1 "dEQP-GLES31.functional.blend_"
#define VkglTestCase_017595_2 "equation_advanced.srgb.hsl_hue"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017595, VkglTestCase_017595_1, VkglTestCase_017595_2);

#define VkglTestCase_017596_1 "dEQP-GLES31.functional.blend_equa"
#define VkglTestCase_017596_2 "tion_advanced.srgb.hsl_saturation"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017596, VkglTestCase_017596_1, VkglTestCase_017596_2);

#define VkglTestCase_017597_1 "dEQP-GLES31.functional.blend_e"
#define VkglTestCase_017597_2 "quation_advanced.srgb.hsl_color"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017597, VkglTestCase_017597_1, VkglTestCase_017597_2);

#define VkglTestCase_017598_1 "dEQP-GLES31.functional.blend_equa"
#define VkglTestCase_017598_2 "tion_advanced.srgb.hsl_luminosity"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017598, VkglTestCase_017598_1, VkglTestCase_017598_2);
