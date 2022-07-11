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
#include "../ActsDeqpgles310024TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_023292_1 "dEQP-GLES31.functional.program_interface_query.transform"
#define VkglTestCase_023292_2 "_feedback_varying.type.separable_vertex.whole_array.float"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023292, VkglTestCase_023292_1, VkglTestCase_023292_2);

#define VkglTestCase_023293_1 "dEQP-GLES31.functional.program_interface_query.transfor"
#define VkglTestCase_023293_2 "m_feedback_varying.type.separable_vertex.whole_array.int"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023293, VkglTestCase_023293_1, VkglTestCase_023293_2);

#define VkglTestCase_023294_1 "dEQP-GLES31.functional.program_interface_query.transform"
#define VkglTestCase_023294_2 "_feedback_varying.type.separable_vertex.whole_array.uint"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023294, VkglTestCase_023294_1, VkglTestCase_023294_2);

#define VkglTestCase_023295_1 "dEQP-GLES31.functional.program_interface_query.transform"
#define VkglTestCase_023295_2 "_feedback_varying.type.separable_vertex.whole_array.vec2"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023295, VkglTestCase_023295_1, VkglTestCase_023295_2);

#define VkglTestCase_023296_1 "dEQP-GLES31.functional.program_interface_query.transform"
#define VkglTestCase_023296_2 "_feedback_varying.type.separable_vertex.whole_array.vec3"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023296, VkglTestCase_023296_1, VkglTestCase_023296_2);

#define VkglTestCase_023297_1 "dEQP-GLES31.functional.program_interface_query.transform"
#define VkglTestCase_023297_2 "_feedback_varying.type.separable_vertex.whole_array.vec4"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023297, VkglTestCase_023297_1, VkglTestCase_023297_2);

#define VkglTestCase_023298_1 "dEQP-GLES31.functional.program_interface_query.transform"
#define VkglTestCase_023298_2 "_feedback_varying.type.separable_vertex.whole_array.ivec2"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023298, VkglTestCase_023298_1, VkglTestCase_023298_2);

#define VkglTestCase_023299_1 "dEQP-GLES31.functional.program_interface_query.transform"
#define VkglTestCase_023299_2 "_feedback_varying.type.separable_vertex.whole_array.ivec3"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023299, VkglTestCase_023299_1, VkglTestCase_023299_2);

#define VkglTestCase_023300_1 "dEQP-GLES31.functional.program_interface_query.transform"
#define VkglTestCase_023300_2 "_feedback_varying.type.separable_vertex.whole_array.ivec4"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023300, VkglTestCase_023300_1, VkglTestCase_023300_2);

#define VkglTestCase_023301_1 "dEQP-GLES31.functional.program_interface_query.transform"
#define VkglTestCase_023301_2 "_feedback_varying.type.separable_vertex.whole_array.uvec2"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023301, VkglTestCase_023301_1, VkglTestCase_023301_2);

#define VkglTestCase_023302_1 "dEQP-GLES31.functional.program_interface_query.transform"
#define VkglTestCase_023302_2 "_feedback_varying.type.separable_vertex.whole_array.uvec3"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023302, VkglTestCase_023302_1, VkglTestCase_023302_2);

#define VkglTestCase_023303_1 "dEQP-GLES31.functional.program_interface_query.transform"
#define VkglTestCase_023303_2 "_feedback_varying.type.separable_vertex.whole_array.uvec4"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023303, VkglTestCase_023303_1, VkglTestCase_023303_2);

#define VkglTestCase_023304_1 "dEQP-GLES31.functional.program_interface_query.transform"
#define VkglTestCase_023304_2 "_feedback_varying.type.separable_vertex.whole_array.mat2"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023304, VkglTestCase_023304_1, VkglTestCase_023304_2);

#define VkglTestCase_023305_1 "dEQP-GLES31.functional.program_interface_query.transform_"
#define VkglTestCase_023305_2 "feedback_varying.type.separable_vertex.whole_array.mat2x3"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023305, VkglTestCase_023305_1, VkglTestCase_023305_2);

#define VkglTestCase_023306_1 "dEQP-GLES31.functional.program_interface_query.transform_"
#define VkglTestCase_023306_2 "feedback_varying.type.separable_vertex.whole_array.mat2x4"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023306, VkglTestCase_023306_1, VkglTestCase_023306_2);

#define VkglTestCase_023307_1 "dEQP-GLES31.functional.program_interface_query.transform_"
#define VkglTestCase_023307_2 "feedback_varying.type.separable_vertex.whole_array.mat3x2"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023307, VkglTestCase_023307_1, VkglTestCase_023307_2);

#define VkglTestCase_023308_1 "dEQP-GLES31.functional.program_interface_query.transform"
#define VkglTestCase_023308_2 "_feedback_varying.type.separable_vertex.whole_array.mat3"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023308, VkglTestCase_023308_1, VkglTestCase_023308_2);

#define VkglTestCase_023309_1 "dEQP-GLES31.functional.program_interface_query.transform_"
#define VkglTestCase_023309_2 "feedback_varying.type.separable_vertex.whole_array.mat3x4"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023309, VkglTestCase_023309_1, VkglTestCase_023309_2);

#define VkglTestCase_023310_1 "dEQP-GLES31.functional.program_interface_query.transform_"
#define VkglTestCase_023310_2 "feedback_varying.type.separable_vertex.whole_array.mat4x2"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023310, VkglTestCase_023310_1, VkglTestCase_023310_2);

#define VkglTestCase_023311_1 "dEQP-GLES31.functional.program_interface_query.transform_"
#define VkglTestCase_023311_2 "feedback_varying.type.separable_vertex.whole_array.mat4x3"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023311, VkglTestCase_023311_1, VkglTestCase_023311_2);

#define VkglTestCase_023312_1 "dEQP-GLES31.functional.program_interface_query.transform"
#define VkglTestCase_023312_2 "_feedback_varying.type.separable_vertex.whole_array.mat4"
SHRINK_HWTEST_F(ActsDeqpgles310024TestSuite, TestCase_023312, VkglTestCase_023312_1, VkglTestCase_023312_2);
