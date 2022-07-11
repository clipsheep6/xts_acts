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
#include "../ActsDeqpgles30013TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_012550_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_012550_2 ".common_functions.abs.lowp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012550, VkglTestCase_012550_1, VkglTestCase_012550_2);

#define VkglTestCase_012551_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012551_2 "common_functions.abs.lowp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012551, VkglTestCase_012551_1, VkglTestCase_012551_2);

#define VkglTestCase_012552_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_012552_2 "ommon_functions.abs.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012552, VkglTestCase_012552_1, VkglTestCase_012552_2);

#define VkglTestCase_012553_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_012553_2 "mmon_functions.abs.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012553, VkglTestCase_012553_1, VkglTestCase_012553_2);

#define VkglTestCase_012554_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012554_2 "common_functions.abs.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012554, VkglTestCase_012554_1, VkglTestCase_012554_2);

#define VkglTestCase_012555_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_012555_2 "ommon_functions.abs.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012555, VkglTestCase_012555_1, VkglTestCase_012555_2);

#define VkglTestCase_012556_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_012556_2 ".common_functions.abs.lowp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012556, VkglTestCase_012556_1, VkglTestCase_012556_2);

#define VkglTestCase_012557_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012557_2 "common_functions.abs.lowp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012557, VkglTestCase_012557_1, VkglTestCase_012557_2);

#define VkglTestCase_012558_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012558_2 "common_functions.abs.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012558, VkglTestCase_012558_1, VkglTestCase_012558_2);

#define VkglTestCase_012559_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_012559_2 "ommon_functions.abs.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012559, VkglTestCase_012559_1, VkglTestCase_012559_2);

#define VkglTestCase_012560_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_012560_2 ".common_functions.abs.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012560, VkglTestCase_012560_1, VkglTestCase_012560_2);

#define VkglTestCase_012561_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012561_2 "common_functions.abs.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012561, VkglTestCase_012561_1, VkglTestCase_012561_2);

#define VkglTestCase_012562_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_012562_2 ".common_functions.abs.lowp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012562, VkglTestCase_012562_1, VkglTestCase_012562_2);

#define VkglTestCase_012563_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012563_2 "common_functions.abs.lowp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012563, VkglTestCase_012563_1, VkglTestCase_012563_2);

#define VkglTestCase_012564_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012564_2 "common_functions.abs.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012564, VkglTestCase_012564_1, VkglTestCase_012564_2);

#define VkglTestCase_012565_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_012565_2 "ommon_functions.abs.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012565, VkglTestCase_012565_1, VkglTestCase_012565_2);

#define VkglTestCase_012566_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_012566_2 ".common_functions.abs.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012566, VkglTestCase_012566_1, VkglTestCase_012566_2);

#define VkglTestCase_012567_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012567_2 "common_functions.abs.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012567, VkglTestCase_012567_1, VkglTestCase_012567_2);

#define VkglTestCase_012568_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_012568_2 ".common_functions.abs.lowp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012568, VkglTestCase_012568_1, VkglTestCase_012568_2);

#define VkglTestCase_012569_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012569_2 "common_functions.abs.lowp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012569, VkglTestCase_012569_1, VkglTestCase_012569_2);

#define VkglTestCase_012570_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012570_2 "common_functions.abs.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012570, VkglTestCase_012570_1, VkglTestCase_012570_2);

#define VkglTestCase_012571_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_012571_2 "ommon_functions.abs.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012571, VkglTestCase_012571_1, VkglTestCase_012571_2);

#define VkglTestCase_012572_1 "dEQP-GLES3.functional.shaders.operator"
#define VkglTestCase_012572_2 ".common_functions.abs.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012572, VkglTestCase_012572_1, VkglTestCase_012572_2);

#define VkglTestCase_012573_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012573_2 "common_functions.abs.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012573, VkglTestCase_012573_1, VkglTestCase_012573_2);
