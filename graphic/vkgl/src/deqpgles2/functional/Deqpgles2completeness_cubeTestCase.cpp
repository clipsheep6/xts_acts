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

#define VkglTestCase_010890_1 "dEQP-GLES2.functional.texture.co"
#define VkglTestCase_010890_2 "mpleteness.cube.npot_size_level_0"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010890, VkglTestCase_010890_1, VkglTestCase_010890_2);

#define VkglTestCase_010891_1 "dEQP-GLES2.functional.texture.co"
#define VkglTestCase_010891_2 "mpleteness.cube.npot_size_level_1"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010891, VkglTestCase_010891_1, VkglTestCase_010891_2);

#define VkglTestCase_010892_1 "dEQP-GLES2.functional.texture.compl"
#define VkglTestCase_010892_2 "eteness.cube.npot_size_level_0_pos_x"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010892, VkglTestCase_010892_1, VkglTestCase_010892_2);

#define VkglTestCase_010893_1 "dEQP-GLES2.functional.texture.compl"
#define VkglTestCase_010893_2 "eteness.cube.npot_size_level_1_neg_x"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010893, VkglTestCase_010893_1, VkglTestCase_010893_2);

#define VkglTestCase_010894_1 "dEQP-GLES2.functional.texture.comp"
#define VkglTestCase_010894_2 "leteness.cube.not_positive_level_0"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010894, VkglTestCase_010894_1, VkglTestCase_010894_2);

#define VkglTestCase_010895_1 "dEQP-GLES2.functional.texture.completene"
#define VkglTestCase_010895_2 "ss.cube.format_mismatch_rgb_rgba_level_0"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010895, VkglTestCase_010895_1, VkglTestCase_010895_2);

#define VkglTestCase_010896_1 "dEQP-GLES2.functional.texture.completene"
#define VkglTestCase_010896_2 "ss.cube.format_mismatch_rgba_rgb_level_0"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010896, VkglTestCase_010896_1, VkglTestCase_010896_2);

#define VkglTestCase_010897_1 "dEQP-GLES2.functional.texture.completeness.cube."
#define VkglTestCase_010897_2 "format_mismatch_luminance_luminance_alpha_level_0"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010897, VkglTestCase_010897_1, VkglTestCase_010897_2);

#define VkglTestCase_010898_1 "dEQP-GLES2.functional.texture.completeness.cube."
#define VkglTestCase_010898_2 "format_mismatch_luminance_alpha_luminance_level_0"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010898, VkglTestCase_010898_1, VkglTestCase_010898_2);

#define VkglTestCase_010899_1 "dEQP-GLES2.functional.texture.completeness."
#define VkglTestCase_010899_2 "cube.format_mismatch_rgb_rgba_level_0_pos_z"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010899, VkglTestCase_010899_1, VkglTestCase_010899_2);

#define VkglTestCase_010900_1 "dEQP-GLES2.functional.texture.completeness."
#define VkglTestCase_010900_2 "cube.format_mismatch_rgba_rgb_level_0_neg_z"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010900, VkglTestCase_010900_1, VkglTestCase_010900_2);

#define VkglTestCase_010901_1 "dEQP-GLES2.functional.texture.c"
#define VkglTestCase_010901_2 "ompleteness.cube.missing_level_1"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010901, VkglTestCase_010901_1, VkglTestCase_010901_2);

#define VkglTestCase_010902_1 "dEQP-GLES2.functional.texture.c"
#define VkglTestCase_010902_2 "ompleteness.cube.missing_level_3"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010902, VkglTestCase_010902_1, VkglTestCase_010902_2);

#define VkglTestCase_010903_1 "dEQP-GLES2.functional.texture.comp"
#define VkglTestCase_010903_2 "leteness.cube.missing_level_1_pos_y"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010903, VkglTestCase_010903_1, VkglTestCase_010903_2);

#define VkglTestCase_010904_1 "dEQP-GLES2.functional.texture.comp"
#define VkglTestCase_010904_2 "leteness.cube.missing_level_3_neg_y"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010904, VkglTestCase_010904_1, VkglTestCase_010904_2);

#define VkglTestCase_010905_1 "dEQP-GLES2.functional.texture."
#define VkglTestCase_010905_2 "completeness.cube.npot_t_repeat"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010905, VkglTestCase_010905_1, VkglTestCase_010905_2);

#define VkglTestCase_010906_1 "dEQP-GLES2.functional.texture."
#define VkglTestCase_010906_2 "completeness.cube.npot_s_repeat"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010906, VkglTestCase_010906_1, VkglTestCase_010906_2);

#define VkglTestCase_010907_1 "dEQP-GLES2.functional.texture.c"
#define VkglTestCase_010907_2 "ompleteness.cube.npot_all_repeat"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010907, VkglTestCase_010907_1, VkglTestCase_010907_2);

#define VkglTestCase_010908_1 "dEQP-GLES2.functional.texture.comp"
#define VkglTestCase_010908_2 "leteness.cube.npot_mirrored_repeat"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010908, VkglTestCase_010908_1, VkglTestCase_010908_2);

#define VkglTestCase_010909_1 "dEQP-GLES2.functional.texture"
#define VkglTestCase_010909_2 ".completeness.cube.extra_level"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010909, VkglTestCase_010909_1, VkglTestCase_010909_2);

#define VkglTestCase_010910_1 "dEQP-GLES2.functional.texture."
#define VkglTestCase_010910_2 "completeness.cube.empty_object"
SHRINK_HWTEST_F(ActsDeqpgles20011TestSuite, TestCase_010910, VkglTestCase_010910_1, VkglTestCase_010910_2);
