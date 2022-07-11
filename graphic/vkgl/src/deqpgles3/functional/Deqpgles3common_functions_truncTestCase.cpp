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

#define VkglTestCase_012622_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012622_2 "common_functions.trunc.lowp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012622, VkglTestCase_012622_1, VkglTestCase_012622_2);

#define VkglTestCase_012623_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_012623_2 "ommon_functions.trunc.lowp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012623, VkglTestCase_012623_1, VkglTestCase_012623_2);

#define VkglTestCase_012624_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_012624_2 "mmon_functions.trunc.mediump_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012624, VkglTestCase_012624_1, VkglTestCase_012624_2);

#define VkglTestCase_012625_1 "dEQP-GLES3.functional.shaders.operator.com"
#define VkglTestCase_012625_2 "mon_functions.trunc.mediump_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012625, VkglTestCase_012625_1, VkglTestCase_012625_2);

#define VkglTestCase_012626_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_012626_2 "ommon_functions.trunc.highp_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012626, VkglTestCase_012626_1, VkglTestCase_012626_2);

#define VkglTestCase_012627_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_012627_2 "mmon_functions.trunc.highp_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012627, VkglTestCase_012627_1, VkglTestCase_012627_2);

#define VkglTestCase_012628_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012628_2 "common_functions.trunc.lowp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012628, VkglTestCase_012628_1, VkglTestCase_012628_2);

#define VkglTestCase_012629_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_012629_2 "ommon_functions.trunc.lowp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012629, VkglTestCase_012629_1, VkglTestCase_012629_2);

#define VkglTestCase_012630_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_012630_2 "ommon_functions.trunc.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012630, VkglTestCase_012630_1, VkglTestCase_012630_2);

#define VkglTestCase_012631_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_012631_2 "mmon_functions.trunc.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012631, VkglTestCase_012631_1, VkglTestCase_012631_2);

#define VkglTestCase_012632_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012632_2 "common_functions.trunc.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012632, VkglTestCase_012632_1, VkglTestCase_012632_2);

#define VkglTestCase_012633_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_012633_2 "ommon_functions.trunc.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012633, VkglTestCase_012633_1, VkglTestCase_012633_2);

#define VkglTestCase_012634_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012634_2 "common_functions.trunc.lowp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012634, VkglTestCase_012634_1, VkglTestCase_012634_2);

#define VkglTestCase_012635_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_012635_2 "ommon_functions.trunc.lowp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012635, VkglTestCase_012635_1, VkglTestCase_012635_2);

#define VkglTestCase_012636_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_012636_2 "ommon_functions.trunc.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012636, VkglTestCase_012636_1, VkglTestCase_012636_2);

#define VkglTestCase_012637_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_012637_2 "mmon_functions.trunc.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012637, VkglTestCase_012637_1, VkglTestCase_012637_2);

#define VkglTestCase_012638_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012638_2 "common_functions.trunc.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012638, VkglTestCase_012638_1, VkglTestCase_012638_2);

#define VkglTestCase_012639_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_012639_2 "ommon_functions.trunc.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012639, VkglTestCase_012639_1, VkglTestCase_012639_2);

#define VkglTestCase_012640_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012640_2 "common_functions.trunc.lowp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012640, VkglTestCase_012640_1, VkglTestCase_012640_2);

#define VkglTestCase_012641_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_012641_2 "ommon_functions.trunc.lowp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012641, VkglTestCase_012641_1, VkglTestCase_012641_2);

#define VkglTestCase_012642_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_012642_2 "ommon_functions.trunc.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012642, VkglTestCase_012642_1, VkglTestCase_012642_2);

#define VkglTestCase_012643_1 "dEQP-GLES3.functional.shaders.operator.co"
#define VkglTestCase_012643_2 "mmon_functions.trunc.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012643, VkglTestCase_012643_1, VkglTestCase_012643_2);

#define VkglTestCase_012644_1 "dEQP-GLES3.functional.shaders.operator."
#define VkglTestCase_012644_2 "common_functions.trunc.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012644, VkglTestCase_012644_1, VkglTestCase_012644_2);

#define VkglTestCase_012645_1 "dEQP-GLES3.functional.shaders.operator.c"
#define VkglTestCase_012645_2 "ommon_functions.trunc.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles30013TestSuite, TestCase_012645, VkglTestCase_012645_1, VkglTestCase_012645_2);
