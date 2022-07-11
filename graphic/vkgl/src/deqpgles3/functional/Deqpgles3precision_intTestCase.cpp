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
#include "../ActsDeqpgles30017TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_016748_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_016748_2 "precision.int.highp_add_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016748, VkglTestCase_016748_1, VkglTestCase_016748_2);

#define VkglTestCase_016749_1 "dEQP-GLES3.functional.shaders.p"
#define VkglTestCase_016749_2 "recision.int.highp_add_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016749, VkglTestCase_016749_1, VkglTestCase_016749_2);

#define VkglTestCase_016750_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_016750_2 "precision.int.highp_sub_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016750, VkglTestCase_016750_1, VkglTestCase_016750_2);

#define VkglTestCase_016751_1 "dEQP-GLES3.functional.shaders.p"
#define VkglTestCase_016751_2 "recision.int.highp_sub_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016751, VkglTestCase_016751_1, VkglTestCase_016751_2);

#define VkglTestCase_016752_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_016752_2 "precision.int.highp_mul_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016752, VkglTestCase_016752_1, VkglTestCase_016752_2);

#define VkglTestCase_016753_1 "dEQP-GLES3.functional.shaders.p"
#define VkglTestCase_016753_2 "recision.int.highp_mul_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016753, VkglTestCase_016753_1, VkglTestCase_016753_2);

#define VkglTestCase_016754_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_016754_2 "precision.int.highp_div_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016754, VkglTestCase_016754_1, VkglTestCase_016754_2);

#define VkglTestCase_016755_1 "dEQP-GLES3.functional.shaders.p"
#define VkglTestCase_016755_2 "recision.int.highp_div_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016755, VkglTestCase_016755_1, VkglTestCase_016755_2);

#define VkglTestCase_016756_1 "dEQP-GLES3.functional.shaders.p"
#define VkglTestCase_016756_2 "recision.int.mediump_add_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016756, VkglTestCase_016756_1, VkglTestCase_016756_2);

#define VkglTestCase_016757_1 "dEQP-GLES3.functional.shaders.pr"
#define VkglTestCase_016757_2 "ecision.int.mediump_add_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016757, VkglTestCase_016757_1, VkglTestCase_016757_2);

#define VkglTestCase_016758_1 "dEQP-GLES3.functional.shaders.p"
#define VkglTestCase_016758_2 "recision.int.mediump_sub_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016758, VkglTestCase_016758_1, VkglTestCase_016758_2);

#define VkglTestCase_016759_1 "dEQP-GLES3.functional.shaders.pr"
#define VkglTestCase_016759_2 "ecision.int.mediump_sub_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016759, VkglTestCase_016759_1, VkglTestCase_016759_2);

#define VkglTestCase_016760_1 "dEQP-GLES3.functional.shaders.p"
#define VkglTestCase_016760_2 "recision.int.mediump_mul_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016760, VkglTestCase_016760_1, VkglTestCase_016760_2);

#define VkglTestCase_016761_1 "dEQP-GLES3.functional.shaders.pr"
#define VkglTestCase_016761_2 "ecision.int.mediump_mul_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016761, VkglTestCase_016761_1, VkglTestCase_016761_2);

#define VkglTestCase_016762_1 "dEQP-GLES3.functional.shaders.p"
#define VkglTestCase_016762_2 "recision.int.mediump_div_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016762, VkglTestCase_016762_1, VkglTestCase_016762_2);

#define VkglTestCase_016763_1 "dEQP-GLES3.functional.shaders.pr"
#define VkglTestCase_016763_2 "ecision.int.mediump_div_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016763, VkglTestCase_016763_1, VkglTestCase_016763_2);

#define VkglTestCase_016764_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_016764_2 ".precision.int.lowp_add_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016764, VkglTestCase_016764_1, VkglTestCase_016764_2);

#define VkglTestCase_016765_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_016765_2 "precision.int.lowp_add_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016765, VkglTestCase_016765_1, VkglTestCase_016765_2);

#define VkglTestCase_016766_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_016766_2 ".precision.int.lowp_sub_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016766, VkglTestCase_016766_1, VkglTestCase_016766_2);

#define VkglTestCase_016767_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_016767_2 "precision.int.lowp_sub_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016767, VkglTestCase_016767_1, VkglTestCase_016767_2);

#define VkglTestCase_016768_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_016768_2 ".precision.int.lowp_mul_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016768, VkglTestCase_016768_1, VkglTestCase_016768_2);

#define VkglTestCase_016769_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_016769_2 "precision.int.lowp_mul_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016769, VkglTestCase_016769_1, VkglTestCase_016769_2);

#define VkglTestCase_016770_1 "dEQP-GLES3.functional.shaders"
#define VkglTestCase_016770_2 ".precision.int.lowp_div_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016770, VkglTestCase_016770_1, VkglTestCase_016770_2);

#define VkglTestCase_016771_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_016771_2 "precision.int.lowp_div_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016771, VkglTestCase_016771_1, VkglTestCase_016771_2);
