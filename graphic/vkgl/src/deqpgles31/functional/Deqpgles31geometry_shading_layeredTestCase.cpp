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
#include "../ActsDeqpgles310017TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_016378_1 "dEQP-GLES31.functional.geometry_shading."
#define VkglTestCase_016378_2 "layered.render_with_default_layer_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016378, VkglTestCase_016378_1, VkglTestCase_016378_2);

#define VkglTestCase_016379_1 "dEQP-GLES31.functional.geometry_shadin"
#define VkglTestCase_016379_2 "g.layered.render_with_default_layer_3d"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016379, VkglTestCase_016379_1, VkglTestCase_016379_2);

#define VkglTestCase_016380_1 "dEQP-GLES31.functional.geometry_shading.l"
#define VkglTestCase_016380_2 "ayered.render_with_default_layer_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016380, VkglTestCase_016380_1, VkglTestCase_016380_2);

#define VkglTestCase_016381_1 "dEQP-GLES31.functional.geometry_shading.layered"
#define VkglTestCase_016381_2 ".render_with_default_layer_2d_multisample_array"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016381, VkglTestCase_016381_1, VkglTestCase_016381_2);

#define VkglTestCase_016382_1 "dEQP-GLES31.functional.geometry_sh"
#define VkglTestCase_016382_2 "ading.layered.render_to_one_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016382, VkglTestCase_016382_1, VkglTestCase_016382_2);

#define VkglTestCase_016383_1 "dEQP-GLES31.functional.geometry_"
#define VkglTestCase_016383_2 "shading.layered.render_to_one_3d"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016383, VkglTestCase_016383_1, VkglTestCase_016383_2);

#define VkglTestCase_016384_1 "dEQP-GLES31.functional.geometry_sha"
#define VkglTestCase_016384_2 "ding.layered.render_to_one_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016384, VkglTestCase_016384_1, VkglTestCase_016384_2);

#define VkglTestCase_016385_1 "dEQP-GLES31.functional.geometry_shading.l"
#define VkglTestCase_016385_2 "ayered.render_to_one_2d_multisample_array"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016385, VkglTestCase_016385_1, VkglTestCase_016385_2);

#define VkglTestCase_016386_1 "dEQP-GLES31.functional.geometry_sh"
#define VkglTestCase_016386_2 "ading.layered.render_to_all_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016386, VkglTestCase_016386_1, VkglTestCase_016386_2);

#define VkglTestCase_016387_1 "dEQP-GLES31.functional.geometry_"
#define VkglTestCase_016387_2 "shading.layered.render_to_all_3d"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016387, VkglTestCase_016387_1, VkglTestCase_016387_2);

#define VkglTestCase_016388_1 "dEQP-GLES31.functional.geometry_sha"
#define VkglTestCase_016388_2 "ding.layered.render_to_all_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016388, VkglTestCase_016388_1, VkglTestCase_016388_2);

#define VkglTestCase_016389_1 "dEQP-GLES31.functional.geometry_shading.l"
#define VkglTestCase_016389_2 "ayered.render_to_all_2d_multisample_array"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016389, VkglTestCase_016389_1, VkglTestCase_016389_2);

#define VkglTestCase_016390_1 "dEQP-GLES31.functional.geometry_shadi"
#define VkglTestCase_016390_2 "ng.layered.render_different_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016390, VkglTestCase_016390_1, VkglTestCase_016390_2);

#define VkglTestCase_016391_1 "dEQP-GLES31.functional.geometry_sha"
#define VkglTestCase_016391_2 "ding.layered.render_different_to_3d"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016391, VkglTestCase_016391_1, VkglTestCase_016391_2);

#define VkglTestCase_016392_1 "dEQP-GLES31.functional.geometry_shadin"
#define VkglTestCase_016392_2 "g.layered.render_different_to_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016392, VkglTestCase_016392_1, VkglTestCase_016392_2);

#define VkglTestCase_016393_1 "dEQP-GLES31.functional.geometry_shading.laye"
#define VkglTestCase_016393_2 "red.render_different_to_2d_multisample_array"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016393, VkglTestCase_016393_1, VkglTestCase_016393_2);

#define VkglTestCase_016394_1 "dEQP-GLES31.functional.geometry_sha"
#define VkglTestCase_016394_2 "ding.layered.fragment_layer_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016394, VkglTestCase_016394_1, VkglTestCase_016394_2);

#define VkglTestCase_016395_1 "dEQP-GLES31.functional.geometry_"
#define VkglTestCase_016395_2 "shading.layered.fragment_layer_3d"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016395, VkglTestCase_016395_1, VkglTestCase_016395_2);

#define VkglTestCase_016396_1 "dEQP-GLES31.functional.geometry_sha"
#define VkglTestCase_016396_2 "ding.layered.fragment_layer_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016396, VkglTestCase_016396_1, VkglTestCase_016396_2);

#define VkglTestCase_016397_1 "dEQP-GLES31.functional.geometry_shading.l"
#define VkglTestCase_016397_2 "ayered.fragment_layer_2d_multisample_array"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016397, VkglTestCase_016397_1, VkglTestCase_016397_2);

#define VkglTestCase_016398_1 "dEQP-GLES31.functional.geometry_shading"
#define VkglTestCase_016398_2 ".layered.layer_provoking_vertex_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016398, VkglTestCase_016398_1, VkglTestCase_016398_2);

#define VkglTestCase_016399_1 "dEQP-GLES31.functional.geometry_shad"
#define VkglTestCase_016399_2 "ing.layered.layer_provoking_vertex_3d"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016399, VkglTestCase_016399_1, VkglTestCase_016399_2);

#define VkglTestCase_016400_1 "dEQP-GLES31.functional.geometry_shading"
#define VkglTestCase_016400_2 ".layered.layer_provoking_vertex_2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016400, VkglTestCase_016400_1, VkglTestCase_016400_2);

#define VkglTestCase_016401_1 "dEQP-GLES31.functional.geometry_shading.layer"
#define VkglTestCase_016401_2 "ed.layer_provoking_vertex_2d_multisample_array"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016401, VkglTestCase_016401_1, VkglTestCase_016401_2);
