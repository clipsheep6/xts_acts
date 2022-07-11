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

#define VkglTestCase_017569_1 "dEQP-GLES31.functional.blend_e"
#define VkglTestCase_017569_2 "quation_advanced.basic.multiply"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017569, VkglTestCase_017569_1, VkglTestCase_017569_2);

#define VkglTestCase_017570_1 "dEQP-GLES31.functional.blend_"
#define VkglTestCase_017570_2 "equation_advanced.basic.screen"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017570, VkglTestCase_017570_1, VkglTestCase_017570_2);

#define VkglTestCase_017571_1 "dEQP-GLES31.functional.blend_e"
#define VkglTestCase_017571_2 "quation_advanced.basic.overlay"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017571, VkglTestCase_017571_1, VkglTestCase_017571_2);

#define VkglTestCase_017572_1 "dEQP-GLES31.functional.blend_"
#define VkglTestCase_017572_2 "equation_advanced.basic.darken"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017572, VkglTestCase_017572_1, VkglTestCase_017572_2);

#define VkglTestCase_017573_1 "dEQP-GLES31.functional.blend_e"
#define VkglTestCase_017573_2 "quation_advanced.basic.lighten"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017573, VkglTestCase_017573_1, VkglTestCase_017573_2);

#define VkglTestCase_017574_1 "dEQP-GLES31.functional.blend_eq"
#define VkglTestCase_017574_2 "uation_advanced.basic.colordodge"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017574, VkglTestCase_017574_1, VkglTestCase_017574_2);

#define VkglTestCase_017575_1 "dEQP-GLES31.functional.blend_eq"
#define VkglTestCase_017575_2 "uation_advanced.basic.colorburn"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017575, VkglTestCase_017575_1, VkglTestCase_017575_2);

#define VkglTestCase_017576_1 "dEQP-GLES31.functional.blend_eq"
#define VkglTestCase_017576_2 "uation_advanced.basic.hardlight"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017576, VkglTestCase_017576_1, VkglTestCase_017576_2);

#define VkglTestCase_017577_1 "dEQP-GLES31.functional.blend_eq"
#define VkglTestCase_017577_2 "uation_advanced.basic.softlight"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017577, VkglTestCase_017577_1, VkglTestCase_017577_2);

#define VkglTestCase_017578_1 "dEQP-GLES31.functional.blend_eq"
#define VkglTestCase_017578_2 "uation_advanced.basic.difference"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017578, VkglTestCase_017578_1, VkglTestCase_017578_2);

#define VkglTestCase_017579_1 "dEQP-GLES31.functional.blend_eq"
#define VkglTestCase_017579_2 "uation_advanced.basic.exclusion"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017579, VkglTestCase_017579_1, VkglTestCase_017579_2);

#define VkglTestCase_017580_1 "dEQP-GLES31.functional.blend_e"
#define VkglTestCase_017580_2 "quation_advanced.basic.hsl_hue"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017580, VkglTestCase_017580_1, VkglTestCase_017580_2);

#define VkglTestCase_017581_1 "dEQP-GLES31.functional.blend_equa"
#define VkglTestCase_017581_2 "tion_advanced.basic.hsl_saturation"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017581, VkglTestCase_017581_1, VkglTestCase_017581_2);

#define VkglTestCase_017582_1 "dEQP-GLES31.functional.blend_eq"
#define VkglTestCase_017582_2 "uation_advanced.basic.hsl_color"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017582, VkglTestCase_017582_1, VkglTestCase_017582_2);

#define VkglTestCase_017583_1 "dEQP-GLES31.functional.blend_equa"
#define VkglTestCase_017583_2 "tion_advanced.basic.hsl_luminosity"
SHRINK_HWTEST_F(ActsDeqpgles310018TestSuite, TestCase_017583, VkglTestCase_017583_1, VkglTestCase_017583_2);
