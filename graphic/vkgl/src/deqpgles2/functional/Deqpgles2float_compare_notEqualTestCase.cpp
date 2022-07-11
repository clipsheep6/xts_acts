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
#include "../Deqpgles2BaseFunc.h"
#include "../ActsDeqpgles20007TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_006618_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006618_2 "float_compare.notEqual.lowp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006618, VkglTestCase_006618_1, VkglTestCase_006618_2);

#define VkglTestCase_006619_1 "dEQP-GLES2.functional.shaders.operator.f"
#define VkglTestCase_006619_2 "loat_compare.notEqual.lowp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006619, VkglTestCase_006619_1, VkglTestCase_006619_2);

#define VkglTestCase_006620_1 "dEQP-GLES2.functional.shaders.operator.f"
#define VkglTestCase_006620_2 "loat_compare.notEqual.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006620, VkglTestCase_006620_1, VkglTestCase_006620_2);

#define VkglTestCase_006621_1 "dEQP-GLES2.functional.shaders.operator.fl"
#define VkglTestCase_006621_2 "oat_compare.notEqual.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006621, VkglTestCase_006621_1, VkglTestCase_006621_2);

#define VkglTestCase_006622_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006622_2 "float_compare.notEqual.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006622, VkglTestCase_006622_1, VkglTestCase_006622_2);

#define VkglTestCase_006623_1 "dEQP-GLES2.functional.shaders.operator.f"
#define VkglTestCase_006623_2 "loat_compare.notEqual.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006623, VkglTestCase_006623_1, VkglTestCase_006623_2);

#define VkglTestCase_006624_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006624_2 "float_compare.notEqual.lowp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006624, VkglTestCase_006624_1, VkglTestCase_006624_2);

#define VkglTestCase_006625_1 "dEQP-GLES2.functional.shaders.operator.f"
#define VkglTestCase_006625_2 "loat_compare.notEqual.lowp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006625, VkglTestCase_006625_1, VkglTestCase_006625_2);

#define VkglTestCase_006626_1 "dEQP-GLES2.functional.shaders.operator.f"
#define VkglTestCase_006626_2 "loat_compare.notEqual.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006626, VkglTestCase_006626_1, VkglTestCase_006626_2);

#define VkglTestCase_006627_1 "dEQP-GLES2.functional.shaders.operator.fl"
#define VkglTestCase_006627_2 "oat_compare.notEqual.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006627, VkglTestCase_006627_1, VkglTestCase_006627_2);

#define VkglTestCase_006628_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006628_2 "float_compare.notEqual.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006628, VkglTestCase_006628_1, VkglTestCase_006628_2);

#define VkglTestCase_006629_1 "dEQP-GLES2.functional.shaders.operator.f"
#define VkglTestCase_006629_2 "loat_compare.notEqual.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006629, VkglTestCase_006629_1, VkglTestCase_006629_2);

#define VkglTestCase_006630_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006630_2 "float_compare.notEqual.lowp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006630, VkglTestCase_006630_1, VkglTestCase_006630_2);

#define VkglTestCase_006631_1 "dEQP-GLES2.functional.shaders.operator.f"
#define VkglTestCase_006631_2 "loat_compare.notEqual.lowp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006631, VkglTestCase_006631_1, VkglTestCase_006631_2);

#define VkglTestCase_006632_1 "dEQP-GLES2.functional.shaders.operator.f"
#define VkglTestCase_006632_2 "loat_compare.notEqual.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006632, VkglTestCase_006632_1, VkglTestCase_006632_2);

#define VkglTestCase_006633_1 "dEQP-GLES2.functional.shaders.operator.fl"
#define VkglTestCase_006633_2 "oat_compare.notEqual.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006633, VkglTestCase_006633_1, VkglTestCase_006633_2);

#define VkglTestCase_006634_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006634_2 "float_compare.notEqual.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006634, VkglTestCase_006634_1, VkglTestCase_006634_2);

#define VkglTestCase_006635_1 "dEQP-GLES2.functional.shaders.operator.f"
#define VkglTestCase_006635_2 "loat_compare.notEqual.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006635, VkglTestCase_006635_1, VkglTestCase_006635_2);
