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
#include "../Khrgles31BaseFunc.h"
#include "../ActsKhrgles310003TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_002543_1 "KHR-GLES31.core.gpu_shade"
#define VkglTestCase_002543_2 "r5.sampler_array_indexing"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002543, VkglTestCase_002543_1, VkglTestCase_002543_2);

#define VkglTestCase_002544_1 "KHR-GLES31.core.gpu_shad"
#define VkglTestCase_002544_2 "er5.images_array_indexing"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002544, VkglTestCase_002544_1, VkglTestCase_002544_2);

#define VkglTestCase_002545_1 "KHR-GLES31.core.gpu_shader5.a"
#define VkglTestCase_002545_2 "tomic_counters_array_indexing"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002545, VkglTestCase_002545_1, VkglTestCase_002545_2);

#define VkglTestCase_002546_1 "KHR-GLES31.core.gpu_shader5."
#define VkglTestCase_002546_2 "uniform_blocks_array_indexing"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002546, VkglTestCase_002546_1, VkglTestCase_002546_2);

#define VkglTestCase_002547_1 "KHR-GLES31.core.gpu_sh"
#define VkglTestCase_002547_2 "ader5.precise_qualifier"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002547, VkglTestCase_002547_1, VkglTestCase_002547_2);

#define VkglTestCase_002548_1 "KHR-GLES31.core.gpu_"
#define VkglTestCase_002548_2 "shader5.fma_accuracy"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002548, VkglTestCase_002548_1, VkglTestCase_002548_2);

#define VkglTestCase_002549_1 "KHR-GLES31.core.gpu_sha"
#define VkglTestCase_002549_2 "der5.fma_precision_float"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002549, VkglTestCase_002549_1, VkglTestCase_002549_2);

#define VkglTestCase_002550_1 "KHR-GLES31.core.gpu_sha"
#define VkglTestCase_002550_2 "der5.fma_precision_vec2"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002550, VkglTestCase_002550_1, VkglTestCase_002550_2);

#define VkglTestCase_002551_1 "KHR-GLES31.core.gpu_sha"
#define VkglTestCase_002551_2 "der5.fma_precision_vec3"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002551, VkglTestCase_002551_1, VkglTestCase_002551_2);

#define VkglTestCase_002552_1 "KHR-GLES31.core.gpu_sha"
#define VkglTestCase_002552_2 "der5.fma_precision_vec4"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002552, VkglTestCase_002552_1, VkglTestCase_002552_2);

#define VkglTestCase_002553_1 "KHR-GLES31.core.gpu_shader5.tex"
#define VkglTestCase_002553_2 "ture_gather_offset_color_repeat"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002553, VkglTestCase_002553_1, VkglTestCase_002553_2);

#define VkglTestCase_002554_1 "KHR-GLES31.core.gpu_shader5.te"
#define VkglTestCase_002554_2 "xture_gather_offset_color_array"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002554, VkglTestCase_002554_1, VkglTestCase_002554_2);

#define VkglTestCase_002555_1 "KHR-GLES31.core.gpu_shader5."
#define VkglTestCase_002555_2 "texture_gather_offsets_color"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002555, VkglTestCase_002555_1, VkglTestCase_002555_2);

#define VkglTestCase_002556_1 "KHR-GLES31.core.gpu_shader5.tex"
#define VkglTestCase_002556_2 "ture_gather_offset_depth_repeat"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002556, VkglTestCase_002556_1, VkglTestCase_002556_2);

#define VkglTestCase_002557_1 "KHR-GLES31.core.gpu_shader5.text"
#define VkglTestCase_002557_2 "ure_gather_offset_depth_repeat_y"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002557, VkglTestCase_002557_1, VkglTestCase_002557_2);

#define VkglTestCase_002558_1 "KHR-GLES31.core.gpu_shader5.te"
#define VkglTestCase_002558_2 "xture_gather_offset_depth_array"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002558, VkglTestCase_002558_1, VkglTestCase_002558_2);

#define VkglTestCase_002559_1 "KHR-GLES31.core.gpu_shader5."
#define VkglTestCase_002559_2 "texture_gather_offsets_depth"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002559, VkglTestCase_002559_1, VkglTestCase_002559_2);

#define VkglTestCase_002560_1 "KHR-GLES31.core.gpu_shader5.texture"
#define VkglTestCase_002560_2 "_gather_offset_color_clamp_to_border"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002560, VkglTestCase_002560_1, VkglTestCase_002560_2);

#define VkglTestCase_002561_1 "KHR-GLES31.core.gpu_shader5.textur"
#define VkglTestCase_002561_2 "e_gather_offset_color_clamp_to_edge"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002561, VkglTestCase_002561_1, VkglTestCase_002561_2);

#define VkglTestCase_002562_1 "KHR-GLES31.core.gpu_shader5.textur"
#define VkglTestCase_002562_2 "e_gather_offset_depth_clamp_border"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002562, VkglTestCase_002562_1, VkglTestCase_002562_2);

#define VkglTestCase_002563_1 "KHR-GLES31.core.gpu_shader5.textu"
#define VkglTestCase_002563_2 "re_gather_offset_depth_clamp_edge"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002563, VkglTestCase_002563_1, VkglTestCase_002563_2);
