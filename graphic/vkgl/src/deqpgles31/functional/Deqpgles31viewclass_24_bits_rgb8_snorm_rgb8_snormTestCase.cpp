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
#include "../ActsDeqpgles310032TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_031517_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_031517_2 "ass_24_bits.rgb8_snorm_rgb8_snorm.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031517, VkglTestCase_031517_1, VkglTestCase_031517_2);

#define VkglTestCase_031518_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_031518_2 "ass_24_bits.rgb8_snorm_rgb8_snorm.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031518, VkglTestCase_031518_1, VkglTestCase_031518_2);

#define VkglTestCase_031519_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_031519_2 "lass_24_bits.rgb8_snorm_rgb8_snorm.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031519, VkglTestCase_031519_1, VkglTestCase_031519_2);

#define VkglTestCase_031520_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_031520_2 "_24_bits.rgb8_snorm_rgb8_snorm.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031520, VkglTestCase_031520_1, VkglTestCase_031520_2);

#define VkglTestCase_031521_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_031521_2 "ass_24_bits.rgb8_snorm_rgb8_snorm.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031521, VkglTestCase_031521_1, VkglTestCase_031521_2);

#define VkglTestCase_031522_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_031522_2 "ass_24_bits.rgb8_snorm_rgb8_snorm.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031522, VkglTestCase_031522_1, VkglTestCase_031522_2);

#define VkglTestCase_031523_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_031523_2 "lass_24_bits.rgb8_snorm_rgb8_snorm.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031523, VkglTestCase_031523_1, VkglTestCase_031523_2);

#define VkglTestCase_031524_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_031524_2 "_24_bits.rgb8_snorm_rgb8_snorm.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031524, VkglTestCase_031524_1, VkglTestCase_031524_2);

#define VkglTestCase_031525_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_031525_2 "lass_24_bits.rgb8_snorm_rgb8_snorm.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031525, VkglTestCase_031525_1, VkglTestCase_031525_2);

#define VkglTestCase_031526_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_031526_2 "lass_24_bits.rgb8_snorm_rgb8_snorm.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031526, VkglTestCase_031526_1, VkglTestCase_031526_2);

#define VkglTestCase_031527_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031527_2 "class_24_bits.rgb8_snorm_rgb8_snorm.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031527, VkglTestCase_031527_1, VkglTestCase_031527_2);

#define VkglTestCase_031528_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_031528_2 "s_24_bits.rgb8_snorm_rgb8_snorm.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031528, VkglTestCase_031528_1, VkglTestCase_031528_2);

#define VkglTestCase_031529_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_031529_2 "_24_bits.rgb8_snorm_rgb8_snorm.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031529, VkglTestCase_031529_1, VkglTestCase_031529_2);

#define VkglTestCase_031530_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_031530_2 "_24_bits.rgb8_snorm_rgb8_snorm.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031530, VkglTestCase_031530_1, VkglTestCase_031530_2);

#define VkglTestCase_031531_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_031531_2 "s_24_bits.rgb8_snorm_rgb8_snorm.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031531, VkglTestCase_031531_1, VkglTestCase_031531_2);

#define VkglTestCase_031532_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_24"
#define VkglTestCase_031532_2 "_bits.rgb8_snorm_rgb8_snorm.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031532, VkglTestCase_031532_1, VkglTestCase_031532_2);
