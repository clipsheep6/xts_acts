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

#define VkglTestCase_006528_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006528_2 "float_compare.lessThan.lowp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006528, VkglTestCase_006528_1, VkglTestCase_006528_2);

#define VkglTestCase_006529_1 "dEQP-GLES2.functional.shaders.operator.f"
#define VkglTestCase_006529_2 "loat_compare.lessThan.lowp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006529, VkglTestCase_006529_1, VkglTestCase_006529_2);

#define VkglTestCase_006530_1 "dEQP-GLES2.functional.shaders.operator.f"
#define VkglTestCase_006530_2 "loat_compare.lessThan.mediump_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006530, VkglTestCase_006530_1, VkglTestCase_006530_2);

#define VkglTestCase_006531_1 "dEQP-GLES2.functional.shaders.operator.fl"
#define VkglTestCase_006531_2 "oat_compare.lessThan.mediump_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006531, VkglTestCase_006531_1, VkglTestCase_006531_2);

#define VkglTestCase_006532_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006532_2 "float_compare.lessThan.highp_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006532, VkglTestCase_006532_1, VkglTestCase_006532_2);

#define VkglTestCase_006533_1 "dEQP-GLES2.functional.shaders.operator.f"
#define VkglTestCase_006533_2 "loat_compare.lessThan.highp_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006533, VkglTestCase_006533_1, VkglTestCase_006533_2);

#define VkglTestCase_006534_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006534_2 "float_compare.lessThan.lowp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006534, VkglTestCase_006534_1, VkglTestCase_006534_2);

#define VkglTestCase_006535_1 "dEQP-GLES2.functional.shaders.operator.f"
#define VkglTestCase_006535_2 "loat_compare.lessThan.lowp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006535, VkglTestCase_006535_1, VkglTestCase_006535_2);

#define VkglTestCase_006536_1 "dEQP-GLES2.functional.shaders.operator.f"
#define VkglTestCase_006536_2 "loat_compare.lessThan.mediump_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006536, VkglTestCase_006536_1, VkglTestCase_006536_2);

#define VkglTestCase_006537_1 "dEQP-GLES2.functional.shaders.operator.fl"
#define VkglTestCase_006537_2 "oat_compare.lessThan.mediump_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006537, VkglTestCase_006537_1, VkglTestCase_006537_2);

#define VkglTestCase_006538_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006538_2 "float_compare.lessThan.highp_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006538, VkglTestCase_006538_1, VkglTestCase_006538_2);

#define VkglTestCase_006539_1 "dEQP-GLES2.functional.shaders.operator.f"
#define VkglTestCase_006539_2 "loat_compare.lessThan.highp_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006539, VkglTestCase_006539_1, VkglTestCase_006539_2);

#define VkglTestCase_006540_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006540_2 "float_compare.lessThan.lowp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006540, VkglTestCase_006540_1, VkglTestCase_006540_2);

#define VkglTestCase_006541_1 "dEQP-GLES2.functional.shaders.operator.f"
#define VkglTestCase_006541_2 "loat_compare.lessThan.lowp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006541, VkglTestCase_006541_1, VkglTestCase_006541_2);

#define VkglTestCase_006542_1 "dEQP-GLES2.functional.shaders.operator.f"
#define VkglTestCase_006542_2 "loat_compare.lessThan.mediump_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006542, VkglTestCase_006542_1, VkglTestCase_006542_2);

#define VkglTestCase_006543_1 "dEQP-GLES2.functional.shaders.operator.fl"
#define VkglTestCase_006543_2 "oat_compare.lessThan.mediump_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006543, VkglTestCase_006543_1, VkglTestCase_006543_2);

#define VkglTestCase_006544_1 "dEQP-GLES2.functional.shaders.operator."
#define VkglTestCase_006544_2 "float_compare.lessThan.highp_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006544, VkglTestCase_006544_1, VkglTestCase_006544_2);

#define VkglTestCase_006545_1 "dEQP-GLES2.functional.shaders.operator.f"
#define VkglTestCase_006545_2 "loat_compare.lessThan.highp_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20007TestSuite, TestCase_006545, VkglTestCase_006545_1, VkglTestCase_006545_2);
