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
#include "../Khrgles32BaseFunc.h"
#include "../ActsKhrgles320001TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_000165_1 "KHR-GLES32.core.gpu_shade"
#define VkglTestCase_000165_2 "r5.sampler_array_indexing"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000165, VkglTestCase_000165_1, VkglTestCase_000165_2);

#define VkglTestCase_000166_1 "KHR-GLES32.core.gpu_shad"
#define VkglTestCase_000166_2 "er5.images_array_indexing"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000166, VkglTestCase_000166_1, VkglTestCase_000166_2);

#define VkglTestCase_000167_1 "KHR-GLES32.core.gpu_shader5.a"
#define VkglTestCase_000167_2 "tomic_counters_array_indexing"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000167, VkglTestCase_000167_1, VkglTestCase_000167_2);

#define VkglTestCase_000168_1 "KHR-GLES32.core.gpu_shader5."
#define VkglTestCase_000168_2 "uniform_blocks_array_indexing"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000168, VkglTestCase_000168_1, VkglTestCase_000168_2);

#define VkglTestCase_000169_1 "KHR-GLES32.core.gpu_sh"
#define VkglTestCase_000169_2 "ader5.precise_qualifier"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000169, VkglTestCase_000169_1, VkglTestCase_000169_2);

#define VkglTestCase_000170_1 "KHR-GLES32.core.gpu_"
#define VkglTestCase_000170_2 "shader5.fma_accuracy"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000170, VkglTestCase_000170_1, VkglTestCase_000170_2);

#define VkglTestCase_000171_1 "KHR-GLES32.core.gpu_sha"
#define VkglTestCase_000171_2 "der5.fma_precision_float"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000171, VkglTestCase_000171_1, VkglTestCase_000171_2);

#define VkglTestCase_000172_1 "KHR-GLES32.core.gpu_sha"
#define VkglTestCase_000172_2 "der5.fma_precision_vec2"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000172, VkglTestCase_000172_1, VkglTestCase_000172_2);

#define VkglTestCase_000173_1 "KHR-GLES32.core.gpu_sha"
#define VkglTestCase_000173_2 "der5.fma_precision_vec3"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000173, VkglTestCase_000173_1, VkglTestCase_000173_2);

#define VkglTestCase_000174_1 "KHR-GLES32.core.gpu_sha"
#define VkglTestCase_000174_2 "der5.fma_precision_vec4"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000174, VkglTestCase_000174_1, VkglTestCase_000174_2);

#define VkglTestCase_000175_1 "KHR-GLES32.core.gpu_shader5.tex"
#define VkglTestCase_000175_2 "ture_gather_offset_color_repeat"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000175, VkglTestCase_000175_1, VkglTestCase_000175_2);

#define VkglTestCase_000176_1 "KHR-GLES32.core.gpu_shader5.te"
#define VkglTestCase_000176_2 "xture_gather_offset_color_array"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000176, VkglTestCase_000176_1, VkglTestCase_000176_2);

#define VkglTestCase_000177_1 "KHR-GLES32.core.gpu_shader5."
#define VkglTestCase_000177_2 "texture_gather_offsets_color"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000177, VkglTestCase_000177_1, VkglTestCase_000177_2);

#define VkglTestCase_000178_1 "KHR-GLES32.core.gpu_shader5.tex"
#define VkglTestCase_000178_2 "ture_gather_offset_depth_repeat"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000178, VkglTestCase_000178_1, VkglTestCase_000178_2);

#define VkglTestCase_000179_1 "KHR-GLES32.core.gpu_shader5.text"
#define VkglTestCase_000179_2 "ure_gather_offset_depth_repeat_y"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000179, VkglTestCase_000179_1, VkglTestCase_000179_2);

#define VkglTestCase_000180_1 "KHR-GLES32.core.gpu_shader5.te"
#define VkglTestCase_000180_2 "xture_gather_offset_depth_array"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000180, VkglTestCase_000180_1, VkglTestCase_000180_2);

#define VkglTestCase_000181_1 "KHR-GLES32.core.gpu_shader5."
#define VkglTestCase_000181_2 "texture_gather_offsets_depth"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000181, VkglTestCase_000181_1, VkglTestCase_000181_2);

#define VkglTestCase_000182_1 "KHR-GLES32.core.gpu_shader5.texture"
#define VkglTestCase_000182_2 "_gather_offset_color_clamp_to_border"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000182, VkglTestCase_000182_1, VkglTestCase_000182_2);

#define VkglTestCase_000183_1 "KHR-GLES32.core.gpu_shader5.textur"
#define VkglTestCase_000183_2 "e_gather_offset_color_clamp_to_edge"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000183, VkglTestCase_000183_1, VkglTestCase_000183_2);

#define VkglTestCase_000184_1 "KHR-GLES32.core.gpu_shader5.textur"
#define VkglTestCase_000184_2 "e_gather_offset_depth_clamp_border"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000184, VkglTestCase_000184_1, VkglTestCase_000184_2);

#define VkglTestCase_000185_1 "KHR-GLES32.core.gpu_shader5.textu"
#define VkglTestCase_000185_2 "re_gather_offset_depth_clamp_edge"
SHRINK_HWTEST_F(ActsKhrgles320001TestSuite, TestCase_000185, VkglTestCase_000185_1, VkglTestCase_000185_2);
