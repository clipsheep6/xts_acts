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

#define VkglTestCase_017644_1 "dEQP-GLES31.functional.blend_equat"
#define VkglTestCase_017644_2 "ion_advanced.coherent_msaa.multiply"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017644, VkglTestCase_017644_1, VkglTestCase_017644_2);

#define VkglTestCase_017645_1 "dEQP-GLES31.functional.blend_equa"
#define VkglTestCase_017645_2 "tion_advanced.coherent_msaa.screen"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017645, VkglTestCase_017645_1, VkglTestCase_017645_2);

#define VkglTestCase_017646_1 "dEQP-GLES31.functional.blend_equat"
#define VkglTestCase_017646_2 "ion_advanced.coherent_msaa.overlay"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017646, VkglTestCase_017646_1, VkglTestCase_017646_2);

#define VkglTestCase_017647_1 "dEQP-GLES31.functional.blend_equa"
#define VkglTestCase_017647_2 "tion_advanced.coherent_msaa.darken"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017647, VkglTestCase_017647_1, VkglTestCase_017647_2);

#define VkglTestCase_017648_1 "dEQP-GLES31.functional.blend_equat"
#define VkglTestCase_017648_2 "ion_advanced.coherent_msaa.lighten"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017648, VkglTestCase_017648_1, VkglTestCase_017648_2);

#define VkglTestCase_017649_1 "dEQP-GLES31.functional.blend_equati"
#define VkglTestCase_017649_2 "on_advanced.coherent_msaa.colordodge"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017649, VkglTestCase_017649_1, VkglTestCase_017649_2);

#define VkglTestCase_017650_1 "dEQP-GLES31.functional.blend_equati"
#define VkglTestCase_017650_2 "on_advanced.coherent_msaa.colorburn"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017650, VkglTestCase_017650_1, VkglTestCase_017650_2);

#define VkglTestCase_017651_1 "dEQP-GLES31.functional.blend_equati"
#define VkglTestCase_017651_2 "on_advanced.coherent_msaa.hardlight"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017651, VkglTestCase_017651_1, VkglTestCase_017651_2);

#define VkglTestCase_017652_1 "dEQP-GLES31.functional.blend_equati"
#define VkglTestCase_017652_2 "on_advanced.coherent_msaa.softlight"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017652, VkglTestCase_017652_1, VkglTestCase_017652_2);

#define VkglTestCase_017653_1 "dEQP-GLES31.functional.blend_equati"
#define VkglTestCase_017653_2 "on_advanced.coherent_msaa.difference"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017653, VkglTestCase_017653_1, VkglTestCase_017653_2);

#define VkglTestCase_017654_1 "dEQP-GLES31.functional.blend_equati"
#define VkglTestCase_017654_2 "on_advanced.coherent_msaa.exclusion"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017654, VkglTestCase_017654_1, VkglTestCase_017654_2);

#define VkglTestCase_017655_1 "dEQP-GLES31.functional.blend_equat"
#define VkglTestCase_017655_2 "ion_advanced.coherent_msaa.hsl_hue"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017655, VkglTestCase_017655_1, VkglTestCase_017655_2);

#define VkglTestCase_017656_1 "dEQP-GLES31.functional.blend_equation"
#define VkglTestCase_017656_2 "_advanced.coherent_msaa.hsl_saturation"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017656, VkglTestCase_017656_1, VkglTestCase_017656_2);

#define VkglTestCase_017657_1 "dEQP-GLES31.functional.blend_equati"
#define VkglTestCase_017657_2 "on_advanced.coherent_msaa.hsl_color"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017657, VkglTestCase_017657_1, VkglTestCase_017657_2);

#define VkglTestCase_017658_1 "dEQP-GLES31.functional.blend_equation"
#define VkglTestCase_017658_2 "_advanced.coherent_msaa.hsl_luminosity"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017658, VkglTestCase_017658_1, VkglTestCase_017658_2);
