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
#include "../ActsDeqpgles20001TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_000010_1 "dEQP-GLES2.functional.implem"
#define VkglTestCase_000010_2 "entation_limits.subpixel_bits"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000010, VkglTestCase_000010_1, VkglTestCase_000010_2);

#define VkglTestCase_000011_1 "dEQP-GLES2.functional.implemen"
#define VkglTestCase_000011_2 "tation_limits.max_texture_size"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000011, VkglTestCase_000011_1, VkglTestCase_000011_2);

#define VkglTestCase_000012_1 "dEQP-GLES2.functional.implementati"
#define VkglTestCase_000012_2 "on_limits.max_cube_map_texture_size"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000012, VkglTestCase_000012_1, VkglTestCase_000012_2);

#define VkglTestCase_000013_1 "dEQP-GLES2.functional.implementati"
#define VkglTestCase_000013_2 "on_limits.aliased_point_size_range"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000013, VkglTestCase_000013_1, VkglTestCase_000013_2);

#define VkglTestCase_000014_1 "dEQP-GLES2.functional.implementati"
#define VkglTestCase_000014_2 "on_limits.aliased_line_width_range"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000014, VkglTestCase_000014_1, VkglTestCase_000014_2);

#define VkglTestCase_000015_1 "dEQP-GLES2.functional.implementation_"
#define VkglTestCase_000015_2 "limits.num_compressed_texture_formats"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000015, VkglTestCase_000015_1, VkglTestCase_000015_2);

#define VkglTestCase_000016_1 "dEQP-GLES2.functional.implementati"
#define VkglTestCase_000016_2 "on_limits.num_shader_binary_formats"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000016, VkglTestCase_000016_1, VkglTestCase_000016_2);

#define VkglTestCase_000017_1 "dEQP-GLES2.functional.impleme"
#define VkglTestCase_000017_2 "ntation_limits.shader_compiler"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000017, VkglTestCase_000017_1, VkglTestCase_000017_2);

#define VkglTestCase_000018_1 "dEQP-GLES2.functional.implement"
#define VkglTestCase_000018_2 "ation_limits.max_vertex_attribs"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000018, VkglTestCase_000018_1, VkglTestCase_000018_2);

#define VkglTestCase_000019_1 "dEQP-GLES2.functional.implementatio"
#define VkglTestCase_000019_2 "n_limits.max_vertex_uniform_vectors"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000019, VkglTestCase_000019_1, VkglTestCase_000019_2);

#define VkglTestCase_000020_1 "dEQP-GLES2.functional.implement"
#define VkglTestCase_000020_2 "ation_limits.max_varying_vectors"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000020, VkglTestCase_000020_1, VkglTestCase_000020_2);

#define VkglTestCase_000021_1 "dEQP-GLES2.functional.implementation_l"
#define VkglTestCase_000021_2 "imits.max_combined_texture_image_units"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000021, VkglTestCase_000021_1, VkglTestCase_000021_2);

#define VkglTestCase_000022_1 "dEQP-GLES2.functional.implementation_"
#define VkglTestCase_000022_2 "limits.max_vertex_texture_image_units"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000022, VkglTestCase_000022_1, VkglTestCase_000022_2);

#define VkglTestCase_000023_1 "dEQP-GLES2.functional.implementat"
#define VkglTestCase_000023_2 "ion_limits.max_texture_image_units"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000023, VkglTestCase_000023_1, VkglTestCase_000023_2);

#define VkglTestCase_000024_1 "dEQP-GLES2.functional.implementation"
#define VkglTestCase_000024_2 "_limits.max_fragment_uniform_vectors"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000024, VkglTestCase_000024_1, VkglTestCase_000024_2);

#define VkglTestCase_000025_1 "dEQP-GLES2.functional.implementa"
#define VkglTestCase_000025_2 "tion_limits.max_renderbuffer_size"
SHRINK_HWTEST_F(ActsDeqpgles20001TestSuite, TestCase_000025, VkglTestCase_000025_1, VkglTestCase_000025_2);
