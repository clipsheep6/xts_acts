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

#define VkglTestCase_016772_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_016772_2 "precision.uint.highp_add_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016772, VkglTestCase_016772_1, VkglTestCase_016772_2);

#define VkglTestCase_016773_1 "dEQP-GLES3.functional.shaders.p"
#define VkglTestCase_016773_2 "recision.uint.highp_add_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016773, VkglTestCase_016773_1, VkglTestCase_016773_2);

#define VkglTestCase_016774_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_016774_2 "precision.uint.highp_sub_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016774, VkglTestCase_016774_1, VkglTestCase_016774_2);

#define VkglTestCase_016775_1 "dEQP-GLES3.functional.shaders.p"
#define VkglTestCase_016775_2 "recision.uint.highp_sub_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016775, VkglTestCase_016775_1, VkglTestCase_016775_2);

#define VkglTestCase_016776_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_016776_2 "precision.uint.highp_mul_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016776, VkglTestCase_016776_1, VkglTestCase_016776_2);

#define VkglTestCase_016777_1 "dEQP-GLES3.functional.shaders.p"
#define VkglTestCase_016777_2 "recision.uint.highp_mul_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016777, VkglTestCase_016777_1, VkglTestCase_016777_2);

#define VkglTestCase_016778_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_016778_2 "precision.uint.highp_div_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016778, VkglTestCase_016778_1, VkglTestCase_016778_2);

#define VkglTestCase_016779_1 "dEQP-GLES3.functional.shaders.p"
#define VkglTestCase_016779_2 "recision.uint.highp_div_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016779, VkglTestCase_016779_1, VkglTestCase_016779_2);

#define VkglTestCase_016780_1 "dEQP-GLES3.functional.shaders.p"
#define VkglTestCase_016780_2 "recision.uint.mediump_add_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016780, VkglTestCase_016780_1, VkglTestCase_016780_2);

#define VkglTestCase_016781_1 "dEQP-GLES3.functional.shaders.pr"
#define VkglTestCase_016781_2 "ecision.uint.mediump_add_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016781, VkglTestCase_016781_1, VkglTestCase_016781_2);

#define VkglTestCase_016782_1 "dEQP-GLES3.functional.shaders.p"
#define VkglTestCase_016782_2 "recision.uint.mediump_sub_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016782, VkglTestCase_016782_1, VkglTestCase_016782_2);

#define VkglTestCase_016783_1 "dEQP-GLES3.functional.shaders.pr"
#define VkglTestCase_016783_2 "ecision.uint.mediump_sub_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016783, VkglTestCase_016783_1, VkglTestCase_016783_2);

#define VkglTestCase_016784_1 "dEQP-GLES3.functional.shaders.p"
#define VkglTestCase_016784_2 "recision.uint.mediump_mul_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016784, VkglTestCase_016784_1, VkglTestCase_016784_2);

#define VkglTestCase_016785_1 "dEQP-GLES3.functional.shaders.pr"
#define VkglTestCase_016785_2 "ecision.uint.mediump_mul_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016785, VkglTestCase_016785_1, VkglTestCase_016785_2);

#define VkglTestCase_016786_1 "dEQP-GLES3.functional.shaders.p"
#define VkglTestCase_016786_2 "recision.uint.mediump_div_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016786, VkglTestCase_016786_1, VkglTestCase_016786_2);

#define VkglTestCase_016787_1 "dEQP-GLES3.functional.shaders.pr"
#define VkglTestCase_016787_2 "ecision.uint.mediump_div_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016787, VkglTestCase_016787_1, VkglTestCase_016787_2);

#define VkglTestCase_016788_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_016788_2 "precision.uint.lowp_add_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016788, VkglTestCase_016788_1, VkglTestCase_016788_2);

#define VkglTestCase_016789_1 "dEQP-GLES3.functional.shaders.p"
#define VkglTestCase_016789_2 "recision.uint.lowp_add_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016789, VkglTestCase_016789_1, VkglTestCase_016789_2);

#define VkglTestCase_016790_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_016790_2 "precision.uint.lowp_sub_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016790, VkglTestCase_016790_1, VkglTestCase_016790_2);

#define VkglTestCase_016791_1 "dEQP-GLES3.functional.shaders.p"
#define VkglTestCase_016791_2 "recision.uint.lowp_sub_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016791, VkglTestCase_016791_1, VkglTestCase_016791_2);

#define VkglTestCase_016792_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_016792_2 "precision.uint.lowp_mul_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016792, VkglTestCase_016792_1, VkglTestCase_016792_2);

#define VkglTestCase_016793_1 "dEQP-GLES3.functional.shaders.p"
#define VkglTestCase_016793_2 "recision.uint.lowp_mul_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016793, VkglTestCase_016793_1, VkglTestCase_016793_2);

#define VkglTestCase_016794_1 "dEQP-GLES3.functional.shaders."
#define VkglTestCase_016794_2 "precision.uint.lowp_div_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016794, VkglTestCase_016794_1, VkglTestCase_016794_2);

#define VkglTestCase_016795_1 "dEQP-GLES3.functional.shaders.p"
#define VkglTestCase_016795_2 "recision.uint.lowp_div_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30017TestSuite, TestCase_016795, VkglTestCase_016795_1, VkglTestCase_016795_2);
