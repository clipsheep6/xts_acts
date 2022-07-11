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
#include "../ActsDeqpgles310006TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_005651_1 "dEQP-GLES31.functional.shaders.implicit_con"
#define VkglTestCase_005651_2 "versions.es31.functions.int_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005651, VkglTestCase_005651_1, VkglTestCase_005651_2);

#define VkglTestCase_005652_1 "dEQP-GLES31.functional.shaders.implicit_conv"
#define VkglTestCase_005652_2 "ersions.es31.functions.int_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005652, VkglTestCase_005652_1, VkglTestCase_005652_2);

#define VkglTestCase_005653_1 "dEQP-GLES31.functional.shaders.implicit_co"
#define VkglTestCase_005653_2 "nversions.es31.functions.int_to_uint_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005653, VkglTestCase_005653_1, VkglTestCase_005653_2);

#define VkglTestCase_005654_1 "dEQP-GLES31.functional.shaders.implicit_con"
#define VkglTestCase_005654_2 "versions.es31.functions.int_to_uint_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005654, VkglTestCase_005654_1, VkglTestCase_005654_2);

#define VkglTestCase_005655_1 "dEQP-GLES31.functional.shaders.implicit_con"
#define VkglTestCase_005655_2 "versions.es31.functions.uint_to_float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005655, VkglTestCase_005655_1, VkglTestCase_005655_2);

#define VkglTestCase_005656_1 "dEQP-GLES31.functional.shaders.implicit_conv"
#define VkglTestCase_005656_2 "ersions.es31.functions.uint_to_float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005656, VkglTestCase_005656_1, VkglTestCase_005656_2);

#define VkglTestCase_005657_1 "dEQP-GLES31.functional.shaders.implicit_conv"
#define VkglTestCase_005657_2 "ersions.es31.functions.ivec2_to_uvec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005657, VkglTestCase_005657_1, VkglTestCase_005657_2);

#define VkglTestCase_005658_1 "dEQP-GLES31.functional.shaders.implicit_conve"
#define VkglTestCase_005658_2 "rsions.es31.functions.ivec2_to_uvec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005658, VkglTestCase_005658_1, VkglTestCase_005658_2);

#define VkglTestCase_005659_1 "dEQP-GLES31.functional.shaders.implicit_con"
#define VkglTestCase_005659_2 "versions.es31.functions.ivec2_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005659, VkglTestCase_005659_1, VkglTestCase_005659_2);

#define VkglTestCase_005660_1 "dEQP-GLES31.functional.shaders.implicit_conv"
#define VkglTestCase_005660_2 "ersions.es31.functions.ivec2_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005660, VkglTestCase_005660_1, VkglTestCase_005660_2);

#define VkglTestCase_005661_1 "dEQP-GLES31.functional.shaders.implicit_con"
#define VkglTestCase_005661_2 "versions.es31.functions.uvec2_to_vec2_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005661, VkglTestCase_005661_1, VkglTestCase_005661_2);

#define VkglTestCase_005662_1 "dEQP-GLES31.functional.shaders.implicit_conv"
#define VkglTestCase_005662_2 "ersions.es31.functions.uvec2_to_vec2_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005662, VkglTestCase_005662_1, VkglTestCase_005662_2);

#define VkglTestCase_005663_1 "dEQP-GLES31.functional.shaders.implicit_conv"
#define VkglTestCase_005663_2 "ersions.es31.functions.ivec3_to_uvec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005663, VkglTestCase_005663_1, VkglTestCase_005663_2);

#define VkglTestCase_005664_1 "dEQP-GLES31.functional.shaders.implicit_conve"
#define VkglTestCase_005664_2 "rsions.es31.functions.ivec3_to_uvec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005664, VkglTestCase_005664_1, VkglTestCase_005664_2);

#define VkglTestCase_005665_1 "dEQP-GLES31.functional.shaders.implicit_con"
#define VkglTestCase_005665_2 "versions.es31.functions.ivec3_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005665, VkglTestCase_005665_1, VkglTestCase_005665_2);

#define VkglTestCase_005666_1 "dEQP-GLES31.functional.shaders.implicit_conv"
#define VkglTestCase_005666_2 "ersions.es31.functions.ivec3_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005666, VkglTestCase_005666_1, VkglTestCase_005666_2);

#define VkglTestCase_005667_1 "dEQP-GLES31.functional.shaders.implicit_con"
#define VkglTestCase_005667_2 "versions.es31.functions.uvec3_to_vec3_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005667, VkglTestCase_005667_1, VkglTestCase_005667_2);

#define VkglTestCase_005668_1 "dEQP-GLES31.functional.shaders.implicit_conv"
#define VkglTestCase_005668_2 "ersions.es31.functions.uvec3_to_vec3_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005668, VkglTestCase_005668_1, VkglTestCase_005668_2);

#define VkglTestCase_005669_1 "dEQP-GLES31.functional.shaders.implicit_conv"
#define VkglTestCase_005669_2 "ersions.es31.functions.ivec4_to_uvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005669, VkglTestCase_005669_1, VkglTestCase_005669_2);

#define VkglTestCase_005670_1 "dEQP-GLES31.functional.shaders.implicit_conve"
#define VkglTestCase_005670_2 "rsions.es31.functions.ivec4_to_uvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005670, VkglTestCase_005670_1, VkglTestCase_005670_2);

#define VkglTestCase_005671_1 "dEQP-GLES31.functional.shaders.implicit_con"
#define VkglTestCase_005671_2 "versions.es31.functions.ivec4_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005671, VkglTestCase_005671_1, VkglTestCase_005671_2);

#define VkglTestCase_005672_1 "dEQP-GLES31.functional.shaders.implicit_conv"
#define VkglTestCase_005672_2 "ersions.es31.functions.ivec4_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005672, VkglTestCase_005672_1, VkglTestCase_005672_2);

#define VkglTestCase_005673_1 "dEQP-GLES31.functional.shaders.implicit_con"
#define VkglTestCase_005673_2 "versions.es31.functions.uvec4_to_vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005673, VkglTestCase_005673_1, VkglTestCase_005673_2);

#define VkglTestCase_005674_1 "dEQP-GLES31.functional.shaders.implicit_conv"
#define VkglTestCase_005674_2 "ersions.es31.functions.uvec4_to_vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles310006TestSuite, TestCase_005674, VkglTestCase_005674_1, VkglTestCase_005674_2);
