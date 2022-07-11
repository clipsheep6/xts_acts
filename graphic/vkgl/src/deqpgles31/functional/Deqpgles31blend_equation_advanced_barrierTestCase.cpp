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

#define VkglTestCase_017614_1 "dEQP-GLES31.functional.blend_eq"
#define VkglTestCase_017614_2 "uation_advanced.barrier.multiply"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017614, VkglTestCase_017614_1, VkglTestCase_017614_2);

#define VkglTestCase_017615_1 "dEQP-GLES31.functional.blend_e"
#define VkglTestCase_017615_2 "quation_advanced.barrier.screen"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017615, VkglTestCase_017615_1, VkglTestCase_017615_2);

#define VkglTestCase_017616_1 "dEQP-GLES31.functional.blend_eq"
#define VkglTestCase_017616_2 "uation_advanced.barrier.overlay"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017616, VkglTestCase_017616_1, VkglTestCase_017616_2);

#define VkglTestCase_017617_1 "dEQP-GLES31.functional.blend_e"
#define VkglTestCase_017617_2 "quation_advanced.barrier.darken"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017617, VkglTestCase_017617_1, VkglTestCase_017617_2);

#define VkglTestCase_017618_1 "dEQP-GLES31.functional.blend_eq"
#define VkglTestCase_017618_2 "uation_advanced.barrier.lighten"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017618, VkglTestCase_017618_1, VkglTestCase_017618_2);

#define VkglTestCase_017619_1 "dEQP-GLES31.functional.blend_equ"
#define VkglTestCase_017619_2 "ation_advanced.barrier.colordodge"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017619, VkglTestCase_017619_1, VkglTestCase_017619_2);

#define VkglTestCase_017620_1 "dEQP-GLES31.functional.blend_equ"
#define VkglTestCase_017620_2 "ation_advanced.barrier.colorburn"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017620, VkglTestCase_017620_1, VkglTestCase_017620_2);

#define VkglTestCase_017621_1 "dEQP-GLES31.functional.blend_equ"
#define VkglTestCase_017621_2 "ation_advanced.barrier.hardlight"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017621, VkglTestCase_017621_1, VkglTestCase_017621_2);

#define VkglTestCase_017622_1 "dEQP-GLES31.functional.blend_equ"
#define VkglTestCase_017622_2 "ation_advanced.barrier.softlight"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017622, VkglTestCase_017622_1, VkglTestCase_017622_2);

#define VkglTestCase_017623_1 "dEQP-GLES31.functional.blend_equ"
#define VkglTestCase_017623_2 "ation_advanced.barrier.difference"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017623, VkglTestCase_017623_1, VkglTestCase_017623_2);

#define VkglTestCase_017624_1 "dEQP-GLES31.functional.blend_equ"
#define VkglTestCase_017624_2 "ation_advanced.barrier.exclusion"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017624, VkglTestCase_017624_1, VkglTestCase_017624_2);

#define VkglTestCase_017625_1 "dEQP-GLES31.functional.blend_eq"
#define VkglTestCase_017625_2 "uation_advanced.barrier.hsl_hue"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017625, VkglTestCase_017625_1, VkglTestCase_017625_2);

#define VkglTestCase_017626_1 "dEQP-GLES31.functional.blend_equat"
#define VkglTestCase_017626_2 "ion_advanced.barrier.hsl_saturation"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017626, VkglTestCase_017626_1, VkglTestCase_017626_2);

#define VkglTestCase_017627_1 "dEQP-GLES31.functional.blend_equ"
#define VkglTestCase_017627_2 "ation_advanced.barrier.hsl_color"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017627, VkglTestCase_017627_1, VkglTestCase_017627_2);

#define VkglTestCase_017628_1 "dEQP-GLES31.functional.blend_equat"
#define VkglTestCase_017628_2 "ion_advanced.barrier.hsl_luminosity"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017628, VkglTestCase_017628_1, VkglTestCase_017628_2);
