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
#include "../KhrglesextBaseFunc.h"
#include "../ActsKhrglesext0001TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_000137_1 "KHR-GLESEXT.gpu_shader5"
#define VkglTestCase_000137_2 ".sampler_array_indexing"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000137, VkglTestCase_000137_1, VkglTestCase_000137_2);

#define VkglTestCase_000138_1 "KHR-GLESEXT.gpu_shader"
#define VkglTestCase_000138_2 "5.images_array_indexing"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000138, VkglTestCase_000138_1, VkglTestCase_000138_2);

#define VkglTestCase_000139_1 "KHR-GLESEXT.gpu_shader5.ato"
#define VkglTestCase_000139_2 "mic_counters_array_indexing"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000139, VkglTestCase_000139_1, VkglTestCase_000139_2);

#define VkglTestCase_000140_1 "KHR-GLESEXT.gpu_shader5.un"
#define VkglTestCase_000140_2 "iform_blocks_array_indexing"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000140, VkglTestCase_000140_1, VkglTestCase_000140_2);

#define VkglTestCase_000141_1 "KHR-GLESEXT.gpu_shad"
#define VkglTestCase_000141_2 "er5.precise_qualifier"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000141, VkglTestCase_000141_1, VkglTestCase_000141_2);

#define VkglTestCase_000142_1 "KHR-GLESEXT.gpu_sh"
#define VkglTestCase_000142_2 "ader5.fma_accuracy"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000142, VkglTestCase_000142_1, VkglTestCase_000142_2);

#define VkglTestCase_000143_1 "KHR-GLESEXT.gpu_shade"
#define VkglTestCase_000143_2 "r5.fma_precision_float"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000143, VkglTestCase_000143_1, VkglTestCase_000143_2);

#define VkglTestCase_000144_1 "KHR-GLESEXT.gpu_shade"
#define VkglTestCase_000144_2 "r5.fma_precision_vec2"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000144, VkglTestCase_000144_1, VkglTestCase_000144_2);

#define VkglTestCase_000145_1 "KHR-GLESEXT.gpu_shade"
#define VkglTestCase_000145_2 "r5.fma_precision_vec3"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000145, VkglTestCase_000145_1, VkglTestCase_000145_2);

#define VkglTestCase_000146_1 "KHR-GLESEXT.gpu_shade"
#define VkglTestCase_000146_2 "r5.fma_precision_vec4"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000146, VkglTestCase_000146_1, VkglTestCase_000146_2);

#define VkglTestCase_000147_1 "KHR-GLESEXT.gpu_shader5.textu"
#define VkglTestCase_000147_2 "re_gather_offset_color_repeat"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000147, VkglTestCase_000147_1, VkglTestCase_000147_2);

#define VkglTestCase_000148_1 "KHR-GLESEXT.gpu_shader5.text"
#define VkglTestCase_000148_2 "ure_gather_offset_color_array"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000148, VkglTestCase_000148_1, VkglTestCase_000148_2);

#define VkglTestCase_000149_1 "KHR-GLESEXT.gpu_shader5.te"
#define VkglTestCase_000149_2 "xture_gather_offsets_color"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000149, VkglTestCase_000149_1, VkglTestCase_000149_2);

#define VkglTestCase_000150_1 "KHR-GLESEXT.gpu_shader5.textu"
#define VkglTestCase_000150_2 "re_gather_offset_depth_repeat"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000150, VkglTestCase_000150_1, VkglTestCase_000150_2);

#define VkglTestCase_000151_1 "KHR-GLESEXT.gpu_shader5.textur"
#define VkglTestCase_000151_2 "e_gather_offset_depth_repeat_y"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000151, VkglTestCase_000151_1, VkglTestCase_000151_2);

#define VkglTestCase_000152_1 "KHR-GLESEXT.gpu_shader5.text"
#define VkglTestCase_000152_2 "ure_gather_offset_depth_array"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000152, VkglTestCase_000152_1, VkglTestCase_000152_2);

#define VkglTestCase_000153_1 "KHR-GLESEXT.gpu_shader5.te"
#define VkglTestCase_000153_2 "xture_gather_offsets_depth"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000153, VkglTestCase_000153_1, VkglTestCase_000153_2);

#define VkglTestCase_000154_1 "KHR-GLESEXT.gpu_shader5.texture_g"
#define VkglTestCase_000154_2 "ather_offset_color_clamp_to_border"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000154, VkglTestCase_000154_1, VkglTestCase_000154_2);

#define VkglTestCase_000155_1 "KHR-GLESEXT.gpu_shader5.texture_"
#define VkglTestCase_000155_2 "gather_offset_color_clamp_to_edge"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000155, VkglTestCase_000155_1, VkglTestCase_000155_2);

#define VkglTestCase_000156_1 "KHR-GLESEXT.gpu_shader5.texture_"
#define VkglTestCase_000156_2 "gather_offset_depth_clamp_border"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000156, VkglTestCase_000156_1, VkglTestCase_000156_2);

#define VkglTestCase_000157_1 "KHR-GLESEXT.gpu_shader5.texture"
#define VkglTestCase_000157_2 "_gather_offset_depth_clamp_edge"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000157, VkglTestCase_000157_1, VkglTestCase_000157_2);
