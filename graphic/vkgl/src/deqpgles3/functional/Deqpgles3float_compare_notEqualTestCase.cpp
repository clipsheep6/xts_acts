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
#include "../ActsDeqpgles30014TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_013480_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_013480_2 "float_compare.notEqual.lowp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013480, VkglTestCase_013480_1, VkglTestCase_013480_2);

#define VkglTestCase_013481_1 "dEQP-GLES3.functional.shaders.operator.f"
#define VkglTestCase_013481_2 "loat_compare.notEqual.lowp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013481, VkglTestCase_013481_1, VkglTestCase_013481_2);

#define VkglTestCase_013482_1 "dEQP-GLES3.functional.shaders.operator.f"
#define VkglTestCase_013482_2 "loat_compare.notEqual.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013482, VkglTestCase_013482_1, VkglTestCase_013482_2);

#define VkglTestCase_013483_1 "dEQP-GLES3.functional.shaders.operator.fl"
#define VkglTestCase_013483_2 "oat_compare.notEqual.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013483, VkglTestCase_013483_1, VkglTestCase_013483_2);

#define VkglTestCase_013484_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_013484_2 "float_compare.notEqual.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013484, VkglTestCase_013484_1, VkglTestCase_013484_2);

#define VkglTestCase_013485_1 "dEQP-GLES3.functional.shaders.operator.f"
#define VkglTestCase_013485_2 "loat_compare.notEqual.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013485, VkglTestCase_013485_1, VkglTestCase_013485_2);

#define VkglTestCase_013486_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_013486_2 "float_compare.notEqual.lowp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013486, VkglTestCase_013486_1, VkglTestCase_013486_2);

#define VkglTestCase_013487_1 "dEQP-GLES3.functional.shaders.operator.f"
#define VkglTestCase_013487_2 "loat_compare.notEqual.lowp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013487, VkglTestCase_013487_1, VkglTestCase_013487_2);

#define VkglTestCase_013488_1 "dEQP-GLES3.functional.shaders.operator.f"
#define VkglTestCase_013488_2 "loat_compare.notEqual.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013488, VkglTestCase_013488_1, VkglTestCase_013488_2);

#define VkglTestCase_013489_1 "dEQP-GLES3.functional.shaders.operator.fl"
#define VkglTestCase_013489_2 "oat_compare.notEqual.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013489, VkglTestCase_013489_1, VkglTestCase_013489_2);

#define VkglTestCase_013490_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_013490_2 "float_compare.notEqual.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013490, VkglTestCase_013490_1, VkglTestCase_013490_2);

#define VkglTestCase_013491_1 "dEQP-GLES3.functional.shaders.operator.f"
#define VkglTestCase_013491_2 "loat_compare.notEqual.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013491, VkglTestCase_013491_1, VkglTestCase_013491_2);

#define VkglTestCase_013492_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_013492_2 "float_compare.notEqual.lowp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013492, VkglTestCase_013492_1, VkglTestCase_013492_2);

#define VkglTestCase_013493_1 "dEQP-GLES3.functional.shaders.operator.f"
#define VkglTestCase_013493_2 "loat_compare.notEqual.lowp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013493, VkglTestCase_013493_1, VkglTestCase_013493_2);

#define VkglTestCase_013494_1 "dEQP-GLES3.functional.shaders.operator.f"
#define VkglTestCase_013494_2 "loat_compare.notEqual.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013494, VkglTestCase_013494_1, VkglTestCase_013494_2);

#define VkglTestCase_013495_1 "dEQP-GLES3.functional.shaders.operator.fl"
#define VkglTestCase_013495_2 "oat_compare.notEqual.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013495, VkglTestCase_013495_1, VkglTestCase_013495_2);

#define VkglTestCase_013496_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_013496_2 "float_compare.notEqual.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013496, VkglTestCase_013496_1, VkglTestCase_013496_2);

#define VkglTestCase_013497_1 "dEQP-GLES3.functional.shaders.operator.f"
#define VkglTestCase_013497_2 "loat_compare.notEqual.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30014TestSuite, TestCase_013497, VkglTestCase_013497_1, VkglTestCase_013497_2);
