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
#include "../ActsDeqpgles310026TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_025006_1 "dEQP-GLES31.functional.primitive_bounding_box.triangles.tessellatio"
#define VkglTestCase_025006_2 "n_set_per_primitive.vertex_tessellation_fragment.default_framebuffer"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025006, VkglTestCase_025006_1, VkglTestCase_025006_2);

#define VkglTestCase_025007_1 "dEQP-GLES31.functional.primitive_bounding_box.triangles.tes"
#define VkglTestCase_025007_2 "sellation_set_per_primitive.vertex_tessellation_fragment.fbo"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025007, VkglTestCase_025007_1, VkglTestCase_025007_2);

#define VkglTestCase_025046_1 "dEQP-GLES31.functional.primitive_bounding_box.lines.tessellation_"
#define VkglTestCase_025046_2 "set_per_primitive.vertex_tessellation_fragment.default_framebuffer"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025046, VkglTestCase_025046_1, VkglTestCase_025046_2);

#define VkglTestCase_025047_1 "dEQP-GLES31.functional.primitive_bounding_box.lines.tesse"
#define VkglTestCase_025047_2 "llation_set_per_primitive.vertex_tessellation_fragment.fbo"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025047, VkglTestCase_025047_1, VkglTestCase_025047_2);

#define VkglTestCase_025086_1 "dEQP-GLES31.functional.primitive_bounding_box.points.tessellation_"
#define VkglTestCase_025086_2 "set_per_primitive.vertex_tessellation_fragment.default_framebuffer"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025086, VkglTestCase_025086_1, VkglTestCase_025086_2);

#define VkglTestCase_025087_1 "dEQP-GLES31.functional.primitive_bounding_box.points.tesse"
#define VkglTestCase_025087_2 "llation_set_per_primitive.vertex_tessellation_fragment.fbo"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025087, VkglTestCase_025087_1, VkglTestCase_025087_2);

#define VkglTestCase_025126_1 "dEQP-GLES31.functional.primitive_bounding_box.wide_lines.tessellatio"
#define VkglTestCase_025126_2 "n_set_per_primitive.vertex_tessellation_fragment.default_framebuffer"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025126, VkglTestCase_025126_1, VkglTestCase_025126_2);

#define VkglTestCase_025127_1 "dEQP-GLES31.functional.primitive_bounding_box.wide_lines.tes"
#define VkglTestCase_025127_2 "sellation_set_per_primitive.vertex_tessellation_fragment.fbo"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025127, VkglTestCase_025127_1, VkglTestCase_025127_2);

#define VkglTestCase_025166_1 "dEQP-GLES31.functional.primitive_bounding_box.wide_points.tessellati"
#define VkglTestCase_025166_2 "on_set_per_primitive.vertex_tessellation_fragment.default_framebuffer"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025166, VkglTestCase_025166_1, VkglTestCase_025166_2);

#define VkglTestCase_025167_1 "dEQP-GLES31.functional.primitive_bounding_box.wide_points.te"
#define VkglTestCase_025167_2 "ssellation_set_per_primitive.vertex_tessellation_fragment.fbo"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025167, VkglTestCase_025167_1, VkglTestCase_025167_2);
