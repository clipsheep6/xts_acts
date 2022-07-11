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

#define VkglTestCase_025008_1 "dEQP-GLES31.functional.primitive_bounding_box.triangles.tessellation_set"
#define VkglTestCase_025008_2 "_per_primitive.vertex_tessellation_geometry_fragment.default_framebuffer"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025008, VkglTestCase_025008_1, VkglTestCase_025008_2);

#define VkglTestCase_025009_1 "dEQP-GLES31.functional.primitive_bounding_box.triangles.tessella"
#define VkglTestCase_025009_2 "tion_set_per_primitive.vertex_tessellation_geometry_fragment.fbo"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025009, VkglTestCase_025009_1, VkglTestCase_025009_2);

#define VkglTestCase_025048_1 "dEQP-GLES31.functional.primitive_bounding_box.lines.tessellation_set_p"
#define VkglTestCase_025048_2 "er_primitive.vertex_tessellation_geometry_fragment.default_framebuffer"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025048, VkglTestCase_025048_1, VkglTestCase_025048_2);

#define VkglTestCase_025049_1 "dEQP-GLES31.functional.primitive_bounding_box.lines.tessellati"
#define VkglTestCase_025049_2 "on_set_per_primitive.vertex_tessellation_geometry_fragment.fbo"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025049, VkglTestCase_025049_1, VkglTestCase_025049_2);

#define VkglTestCase_025088_1 "dEQP-GLES31.functional.primitive_bounding_box.points.tessellation_set_"
#define VkglTestCase_025088_2 "per_primitive.vertex_tessellation_geometry_fragment.default_framebuffer"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025088, VkglTestCase_025088_1, VkglTestCase_025088_2);

#define VkglTestCase_025089_1 "dEQP-GLES31.functional.primitive_bounding_box.points.tessellat"
#define VkglTestCase_025089_2 "ion_set_per_primitive.vertex_tessellation_geometry_fragment.fbo"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025089, VkglTestCase_025089_1, VkglTestCase_025089_2);

#define VkglTestCase_025128_1 "dEQP-GLES31.functional.primitive_bounding_box.wide_lines.tessellation_se"
#define VkglTestCase_025128_2 "t_per_primitive.vertex_tessellation_geometry_fragment.default_framebuffer"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025128, VkglTestCase_025128_1, VkglTestCase_025128_2);

#define VkglTestCase_025129_1 "dEQP-GLES31.functional.primitive_bounding_box.wide_lines.tessell"
#define VkglTestCase_025129_2 "ation_set_per_primitive.vertex_tessellation_geometry_fragment.fbo"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025129, VkglTestCase_025129_1, VkglTestCase_025129_2);

#define VkglTestCase_025168_1 "dEQP-GLES31.functional.primitive_bounding_box.wide_points.tessellation_se"
#define VkglTestCase_025168_2 "t_per_primitive.vertex_tessellation_geometry_fragment.default_framebuffer"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025168, VkglTestCase_025168_1, VkglTestCase_025168_2);

#define VkglTestCase_025169_1 "dEQP-GLES31.functional.primitive_bounding_box.wide_points.tessell"
#define VkglTestCase_025169_2 "ation_set_per_primitive.vertex_tessellation_geometry_fragment.fbo"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025169, VkglTestCase_025169_1, VkglTestCase_025169_2);
