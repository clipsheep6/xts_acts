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
#include "../ActsDeqpgles20015TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_014360_1 "dEQP-GLES2.functional.uniform_api.value"
#define VkglTestCase_014360_2 ".initial.render.basic_array.float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014360, VkglTestCase_014360_1, VkglTestCase_014360_2);

#define VkglTestCase_014361_1 "dEQP-GLES2.functional.uniform_api.value."
#define VkglTestCase_014361_2 "initial.render.basic_array.float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014361, VkglTestCase_014361_1, VkglTestCase_014361_2);

#define VkglTestCase_014362_1 "dEQP-GLES2.functional.uniform_api.valu"
#define VkglTestCase_014362_2 "e.initial.render.basic_array.float_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014362, VkglTestCase_014362_1, VkglTestCase_014362_2);

#define VkglTestCase_014363_1 "dEQP-GLES2.functional.uniform_api.value"
#define VkglTestCase_014363_2 ".initial.render.basic_array.vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014363, VkglTestCase_014363_1, VkglTestCase_014363_2);

#define VkglTestCase_014364_1 "dEQP-GLES2.functional.uniform_api.value."
#define VkglTestCase_014364_2 "initial.render.basic_array.vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014364, VkglTestCase_014364_1, VkglTestCase_014364_2);

#define VkglTestCase_014365_1 "dEQP-GLES2.functional.uniform_api.valu"
#define VkglTestCase_014365_2 "e.initial.render.basic_array.vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014365, VkglTestCase_014365_1, VkglTestCase_014365_2);

#define VkglTestCase_014366_1 "dEQP-GLES2.functional.uniform_api.value"
#define VkglTestCase_014366_2 ".initial.render.basic_array.mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014366, VkglTestCase_014366_1, VkglTestCase_014366_2);

#define VkglTestCase_014367_1 "dEQP-GLES2.functional.uniform_api.value."
#define VkglTestCase_014367_2 "initial.render.basic_array.mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014367, VkglTestCase_014367_1, VkglTestCase_014367_2);

#define VkglTestCase_014368_1 "dEQP-GLES2.functional.uniform_api.valu"
#define VkglTestCase_014368_2 "e.initial.render.basic_array.mat4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014368, VkglTestCase_014368_1, VkglTestCase_014368_2);

#define VkglTestCase_014369_1 "dEQP-GLES2.functional.uniform_api.valu"
#define VkglTestCase_014369_2 "e.initial.render.basic_array.int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014369, VkglTestCase_014369_1, VkglTestCase_014369_2);

#define VkglTestCase_014370_1 "dEQP-GLES2.functional.uniform_api.value"
#define VkglTestCase_014370_2 ".initial.render.basic_array.int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014370, VkglTestCase_014370_1, VkglTestCase_014370_2);

#define VkglTestCase_014371_1 "dEQP-GLES2.functional.uniform_api.val"
#define VkglTestCase_014371_2 "ue.initial.render.basic_array.int_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014371, VkglTestCase_014371_1, VkglTestCase_014371_2);

#define VkglTestCase_014372_1 "dEQP-GLES2.functional.uniform_api.value"
#define VkglTestCase_014372_2 ".initial.render.basic_array.ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014372, VkglTestCase_014372_1, VkglTestCase_014372_2);

#define VkglTestCase_014373_1 "dEQP-GLES2.functional.uniform_api.value."
#define VkglTestCase_014373_2 "initial.render.basic_array.ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014373, VkglTestCase_014373_1, VkglTestCase_014373_2);

#define VkglTestCase_014374_1 "dEQP-GLES2.functional.uniform_api.valu"
#define VkglTestCase_014374_2 "e.initial.render.basic_array.ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014374, VkglTestCase_014374_1, VkglTestCase_014374_2);

#define VkglTestCase_014375_1 "dEQP-GLES2.functional.uniform_api.value"
#define VkglTestCase_014375_2 ".initial.render.basic_array.bool_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014375, VkglTestCase_014375_1, VkglTestCase_014375_2);

#define VkglTestCase_014376_1 "dEQP-GLES2.functional.uniform_api.value."
#define VkglTestCase_014376_2 "initial.render.basic_array.bool_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014376, VkglTestCase_014376_1, VkglTestCase_014376_2);

#define VkglTestCase_014377_1 "dEQP-GLES2.functional.uniform_api.valu"
#define VkglTestCase_014377_2 "e.initial.render.basic_array.bool_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014377, VkglTestCase_014377_1, VkglTestCase_014377_2);

#define VkglTestCase_014378_1 "dEQP-GLES2.functional.uniform_api.value"
#define VkglTestCase_014378_2 ".initial.render.basic_array.bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014378, VkglTestCase_014378_1, VkglTestCase_014378_2);

#define VkglTestCase_014379_1 "dEQP-GLES2.functional.uniform_api.value."
#define VkglTestCase_014379_2 "initial.render.basic_array.bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014379, VkglTestCase_014379_1, VkglTestCase_014379_2);

#define VkglTestCase_014380_1 "dEQP-GLES2.functional.uniform_api.valu"
#define VkglTestCase_014380_2 "e.initial.render.basic_array.bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014380, VkglTestCase_014380_1, VkglTestCase_014380_2);

#define VkglTestCase_014381_1 "dEQP-GLES2.functional.uniform_api.value.i"
#define VkglTestCase_014381_2 "nitial.render.basic_array.sampler2D_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014381, VkglTestCase_014381_1, VkglTestCase_014381_2);

#define VkglTestCase_014382_1 "dEQP-GLES2.functional.uniform_api.value.in"
#define VkglTestCase_014382_2 "itial.render.basic_array.sampler2D_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014382, VkglTestCase_014382_1, VkglTestCase_014382_2);

#define VkglTestCase_014383_1 "dEQP-GLES2.functional.uniform_api.value."
#define VkglTestCase_014383_2 "initial.render.basic_array.sampler2D_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014383, VkglTestCase_014383_1, VkglTestCase_014383_2);

#define VkglTestCase_014680_1 "dEQP-GLES2.functional.uniform_api.value.assig"
#define VkglTestCase_014680_2 "ned.by_pointer.render.basic_array.float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014680, VkglTestCase_014680_1, VkglTestCase_014680_2);

#define VkglTestCase_014681_1 "dEQP-GLES2.functional.uniform_api.value.assign"
#define VkglTestCase_014681_2 "ed.by_pointer.render.basic_array.float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014681, VkglTestCase_014681_1, VkglTestCase_014681_2);

#define VkglTestCase_014682_1 "dEQP-GLES2.functional.uniform_api.value.assi"
#define VkglTestCase_014682_2 "gned.by_pointer.render.basic_array.float_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014682, VkglTestCase_014682_1, VkglTestCase_014682_2);

#define VkglTestCase_014683_1 "dEQP-GLES2.functional.uniform_api.value.assig"
#define VkglTestCase_014683_2 "ned.by_pointer.render.basic_array.vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014683, VkglTestCase_014683_1, VkglTestCase_014683_2);

#define VkglTestCase_014684_1 "dEQP-GLES2.functional.uniform_api.value.assign"
#define VkglTestCase_014684_2 "ed.by_pointer.render.basic_array.vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014684, VkglTestCase_014684_1, VkglTestCase_014684_2);

#define VkglTestCase_014685_1 "dEQP-GLES2.functional.uniform_api.value.assi"
#define VkglTestCase_014685_2 "gned.by_pointer.render.basic_array.vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014685, VkglTestCase_014685_1, VkglTestCase_014685_2);

#define VkglTestCase_014686_1 "dEQP-GLES2.functional.uniform_api.value.assig"
#define VkglTestCase_014686_2 "ned.by_pointer.render.basic_array.mat4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014686, VkglTestCase_014686_1, VkglTestCase_014686_2);

#define VkglTestCase_014687_1 "dEQP-GLES2.functional.uniform_api.value.assign"
#define VkglTestCase_014687_2 "ed.by_pointer.render.basic_array.mat4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014687, VkglTestCase_014687_1, VkglTestCase_014687_2);

#define VkglTestCase_014688_1 "dEQP-GLES2.functional.uniform_api.value.assi"
#define VkglTestCase_014688_2 "gned.by_pointer.render.basic_array.mat4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014688, VkglTestCase_014688_1, VkglTestCase_014688_2);

#define VkglTestCase_014689_1 "dEQP-GLES2.functional.uniform_api.value.assi"
#define VkglTestCase_014689_2 "gned.by_pointer.render.basic_array.int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014689, VkglTestCase_014689_1, VkglTestCase_014689_2);

#define VkglTestCase_014690_1 "dEQP-GLES2.functional.uniform_api.value.assig"
#define VkglTestCase_014690_2 "ned.by_pointer.render.basic_array.int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014690, VkglTestCase_014690_1, VkglTestCase_014690_2);

#define VkglTestCase_014691_1 "dEQP-GLES2.functional.uniform_api.value.ass"
#define VkglTestCase_014691_2 "igned.by_pointer.render.basic_array.int_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014691, VkglTestCase_014691_1, VkglTestCase_014691_2);

#define VkglTestCase_014692_1 "dEQP-GLES2.functional.uniform_api.value.assig"
#define VkglTestCase_014692_2 "ned.by_pointer.render.basic_array.ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014692, VkglTestCase_014692_1, VkglTestCase_014692_2);

#define VkglTestCase_014693_1 "dEQP-GLES2.functional.uniform_api.value.assign"
#define VkglTestCase_014693_2 "ed.by_pointer.render.basic_array.ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014693, VkglTestCase_014693_1, VkglTestCase_014693_2);

#define VkglTestCase_014694_1 "dEQP-GLES2.functional.uniform_api.value.assi"
#define VkglTestCase_014694_2 "gned.by_pointer.render.basic_array.ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014694, VkglTestCase_014694_1, VkglTestCase_014694_2);

#define VkglTestCase_014695_1 "dEQP-GLES2.functional.uniform_api.value.assig"
#define VkglTestCase_014695_2 "ned.by_pointer.render.basic_array.bool_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014695, VkglTestCase_014695_1, VkglTestCase_014695_2);

#define VkglTestCase_014696_1 "dEQP-GLES2.functional.uniform_api.value.assign"
#define VkglTestCase_014696_2 "ed.by_pointer.render.basic_array.bool_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014696, VkglTestCase_014696_1, VkglTestCase_014696_2);

#define VkglTestCase_014697_1 "dEQP-GLES2.functional.uniform_api.value.assi"
#define VkglTestCase_014697_2 "gned.by_pointer.render.basic_array.bool_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014697, VkglTestCase_014697_1, VkglTestCase_014697_2);

#define VkglTestCase_014698_1 "dEQP-GLES2.functional.uniform_api.value.assig"
#define VkglTestCase_014698_2 "ned.by_pointer.render.basic_array.bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014698, VkglTestCase_014698_1, VkglTestCase_014698_2);

#define VkglTestCase_014699_1 "dEQP-GLES2.functional.uniform_api.value.assign"
#define VkglTestCase_014699_2 "ed.by_pointer.render.basic_array.bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014699, VkglTestCase_014699_1, VkglTestCase_014699_2);

#define VkglTestCase_014700_1 "dEQP-GLES2.functional.uniform_api.value.assi"
#define VkglTestCase_014700_2 "gned.by_pointer.render.basic_array.bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014700, VkglTestCase_014700_1, VkglTestCase_014700_2);

#define VkglTestCase_014701_1 "dEQP-GLES2.functional.uniform_api.value.assigne"
#define VkglTestCase_014701_2 "d.by_pointer.render.basic_array.sampler2D_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014701, VkglTestCase_014701_1, VkglTestCase_014701_2);

#define VkglTestCase_014702_1 "dEQP-GLES2.functional.uniform_api.value.assigned"
#define VkglTestCase_014702_2 ".by_pointer.render.basic_array.sampler2D_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014702, VkglTestCase_014702_1, VkglTestCase_014702_2);

#define VkglTestCase_014703_1 "dEQP-GLES2.functional.uniform_api.value.assign"
#define VkglTestCase_014703_2 "ed.by_pointer.render.basic_array.sampler2D_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014703, VkglTestCase_014703_1, VkglTestCase_014703_2);

#define VkglTestCase_014975_1 "dEQP-GLES2.functional.uniform_api.value.assi"
#define VkglTestCase_014975_2 "gned.by_value.render.basic_array.float_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014975, VkglTestCase_014975_1, VkglTestCase_014975_2);

#define VkglTestCase_014976_1 "dEQP-GLES2.functional.uniform_api.value.assig"
#define VkglTestCase_014976_2 "ned.by_value.render.basic_array.float_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014976, VkglTestCase_014976_1, VkglTestCase_014976_2);

#define VkglTestCase_014977_1 "dEQP-GLES2.functional.uniform_api.value.ass"
#define VkglTestCase_014977_2 "igned.by_value.render.basic_array.float_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014977, VkglTestCase_014977_1, VkglTestCase_014977_2);

#define VkglTestCase_014978_1 "dEQP-GLES2.functional.uniform_api.value.assi"
#define VkglTestCase_014978_2 "gned.by_value.render.basic_array.vec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014978, VkglTestCase_014978_1, VkglTestCase_014978_2);

#define VkglTestCase_014979_1 "dEQP-GLES2.functional.uniform_api.value.assig"
#define VkglTestCase_014979_2 "ned.by_value.render.basic_array.vec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014979, VkglTestCase_014979_1, VkglTestCase_014979_2);

#define VkglTestCase_014980_1 "dEQP-GLES2.functional.uniform_api.value.ass"
#define VkglTestCase_014980_2 "igned.by_value.render.basic_array.vec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014980, VkglTestCase_014980_1, VkglTestCase_014980_2);

#define VkglTestCase_014981_1 "dEQP-GLES2.functional.uniform_api.value.ass"
#define VkglTestCase_014981_2 "igned.by_value.render.basic_array.int_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014981, VkglTestCase_014981_1, VkglTestCase_014981_2);

#define VkglTestCase_014982_1 "dEQP-GLES2.functional.uniform_api.value.assi"
#define VkglTestCase_014982_2 "gned.by_value.render.basic_array.int_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014982, VkglTestCase_014982_1, VkglTestCase_014982_2);

#define VkglTestCase_014983_1 "dEQP-GLES2.functional.uniform_api.value.as"
#define VkglTestCase_014983_2 "signed.by_value.render.basic_array.int_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014983, VkglTestCase_014983_1, VkglTestCase_014983_2);

#define VkglTestCase_014984_1 "dEQP-GLES2.functional.uniform_api.value.assi"
#define VkglTestCase_014984_2 "gned.by_value.render.basic_array.ivec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014984, VkglTestCase_014984_1, VkglTestCase_014984_2);

#define VkglTestCase_014985_1 "dEQP-GLES2.functional.uniform_api.value.assig"
#define VkglTestCase_014985_2 "ned.by_value.render.basic_array.ivec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014985, VkglTestCase_014985_1, VkglTestCase_014985_2);

#define VkglTestCase_014986_1 "dEQP-GLES2.functional.uniform_api.value.ass"
#define VkglTestCase_014986_2 "igned.by_value.render.basic_array.ivec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014986, VkglTestCase_014986_1, VkglTestCase_014986_2);

#define VkglTestCase_014987_1 "dEQP-GLES2.functional.uniform_api.value.assi"
#define VkglTestCase_014987_2 "gned.by_value.render.basic_array.bool_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014987, VkglTestCase_014987_1, VkglTestCase_014987_2);

#define VkglTestCase_014988_1 "dEQP-GLES2.functional.uniform_api.value.assig"
#define VkglTestCase_014988_2 "ned.by_value.render.basic_array.bool_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014988, VkglTestCase_014988_1, VkglTestCase_014988_2);

#define VkglTestCase_014989_1 "dEQP-GLES2.functional.uniform_api.value.ass"
#define VkglTestCase_014989_2 "igned.by_value.render.basic_array.bool_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014989, VkglTestCase_014989_1, VkglTestCase_014989_2);

#define VkglTestCase_014990_1 "dEQP-GLES2.functional.uniform_api.value.assi"
#define VkglTestCase_014990_2 "gned.by_value.render.basic_array.bvec4_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014990, VkglTestCase_014990_1, VkglTestCase_014990_2);

#define VkglTestCase_014991_1 "dEQP-GLES2.functional.uniform_api.value.assig"
#define VkglTestCase_014991_2 "ned.by_value.render.basic_array.bvec4_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014991, VkglTestCase_014991_1, VkglTestCase_014991_2);

#define VkglTestCase_014992_1 "dEQP-GLES2.functional.uniform_api.value.ass"
#define VkglTestCase_014992_2 "igned.by_value.render.basic_array.bvec4_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014992, VkglTestCase_014992_1, VkglTestCase_014992_2);

#define VkglTestCase_014993_1 "dEQP-GLES2.functional.uniform_api.value.assign"
#define VkglTestCase_014993_2 "ed.by_value.render.basic_array.sampler2D_vertex"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014993, VkglTestCase_014993_1, VkglTestCase_014993_2);

#define VkglTestCase_014994_1 "dEQP-GLES2.functional.uniform_api.value.assigne"
#define VkglTestCase_014994_2 "d.by_value.render.basic_array.sampler2D_fragment"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014994, VkglTestCase_014994_1, VkglTestCase_014994_2);

#define VkglTestCase_014995_1 "dEQP-GLES2.functional.uniform_api.value.assig"
#define VkglTestCase_014995_2 "ned.by_value.render.basic_array.sampler2D_both"
SHRINK_HWTEST_F(ActsDeqpgles20015TestSuite, TestCase_014995, VkglTestCase_014995_1, VkglTestCase_014995_2);
