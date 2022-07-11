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
#include "../ActsDeqpgles20011TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_010871_1 "dEQP-GLES2.functional.textu"
#define VkglTestCase_010871_2 "re.completeness.2d.npot_size"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010871, VkglTestCase_010871_1, VkglTestCase_010871_2);

#define VkglTestCase_010872_1 "dEQP-GLES2.functional.texture.c"
#define VkglTestCase_010872_2 "ompleteness.2d.npot_size_level_0"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010872, VkglTestCase_010872_1, VkglTestCase_010872_2);

#define VkglTestCase_010873_1 "dEQP-GLES2.functional.texture.c"
#define VkglTestCase_010873_2 "ompleteness.2d.npot_size_level_1"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010873, VkglTestCase_010873_1, VkglTestCase_010873_2);

#define VkglTestCase_010874_1 "dEQP-GLES2.functional.texture.com"
#define VkglTestCase_010874_2 "pleteness.2d.not_positive_level_0"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010874, VkglTestCase_010874_1, VkglTestCase_010874_2);

#define VkglTestCase_010875_1 "dEQP-GLES2.functional.texture.compl"
#define VkglTestCase_010875_2 "eteness.2d.format_mismatch_rgb_rgba"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010875, VkglTestCase_010875_1, VkglTestCase_010875_2);

#define VkglTestCase_010876_1 "dEQP-GLES2.functional.texture.compl"
#define VkglTestCase_010876_2 "eteness.2d.format_mismatch_rgba_rgb"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010876, VkglTestCase_010876_1, VkglTestCase_010876_2);

#define VkglTestCase_010877_1 "dEQP-GLES2.functional.texture.completeness."
#define VkglTestCase_010877_2 "2d.format_mismatch_luminance_luminance_alpha"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010877, VkglTestCase_010877_1, VkglTestCase_010877_2);

#define VkglTestCase_010878_1 "dEQP-GLES2.functional.texture.completeness."
#define VkglTestCase_010878_2 "2d.format_mismatch_luminance_alpha_luminance"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010878, VkglTestCase_010878_1, VkglTestCase_010878_2);

#define VkglTestCase_010879_1 "dEQP-GLES2.functional.texture."
#define VkglTestCase_010879_2 "completeness.2d.missing_level_1"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010879, VkglTestCase_010879_1, VkglTestCase_010879_2);

#define VkglTestCase_010880_1 "dEQP-GLES2.functional.texture."
#define VkglTestCase_010880_2 "completeness.2d.missing_level_3"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010880, VkglTestCase_010880_1, VkglTestCase_010880_2);

#define VkglTestCase_010881_1 "dEQP-GLES2.functional.texture.co"
#define VkglTestCase_010881_2 "mpleteness.2d.last_level_missing"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010881, VkglTestCase_010881_1, VkglTestCase_010881_2);

#define VkglTestCase_010882_1 "dEQP-GLES2.functional.texture"
#define VkglTestCase_010882_2 ".completeness.2d.npot_t_repeat"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010882, VkglTestCase_010882_1, VkglTestCase_010882_2);

#define VkglTestCase_010883_1 "dEQP-GLES2.functional.texture"
#define VkglTestCase_010883_2 ".completeness.2d.npot_s_repeat"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010883, VkglTestCase_010883_1, VkglTestCase_010883_2);

#define VkglTestCase_010884_1 "dEQP-GLES2.functional.texture."
#define VkglTestCase_010884_2 "completeness.2d.npot_all_repeat"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010884, VkglTestCase_010884_1, VkglTestCase_010884_2);

#define VkglTestCase_010885_1 "dEQP-GLES2.functional.texture.com"
#define VkglTestCase_010885_2 "pleteness.2d.npot_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010885, VkglTestCase_010885_1, VkglTestCase_010885_2);

#define VkglTestCase_010886_1 "dEQP-GLES2.functional.texture.c"
#define VkglTestCase_010886_2 "ompleteness.2d.repeat_width_npot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010886, VkglTestCase_010886_1, VkglTestCase_010886_2);

#define VkglTestCase_010887_1 "dEQP-GLES2.functional.texture.co"
#define VkglTestCase_010887_2 "mpleteness.2d.repeat_height_npot"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010887, VkglTestCase_010887_1, VkglTestCase_010887_2);

#define VkglTestCase_010888_1 "dEQP-GLES2.functional.textur"
#define VkglTestCase_010888_2 "e.completeness.2d.extra_level"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010888, VkglTestCase_010888_1, VkglTestCase_010888_2);

#define VkglTestCase_010889_1 "dEQP-GLES2.functional.texture"
#define VkglTestCase_010889_2 ".completeness.2d.empty_object"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010889, VkglTestCase_010889_1, VkglTestCase_010889_2);
