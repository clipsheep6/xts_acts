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
#include "../ActsDeqpgles310034TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_033027_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_033027_2 "iewclass_8_bits.r8_snorm_r8i.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033027, VkglTestCase_033027_1, VkglTestCase_033027_2);

#define VkglTestCase_033028_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_033028_2 "iewclass_8_bits.r8_snorm_r8i.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033028, VkglTestCase_033028_1, VkglTestCase_033028_2);

#define VkglTestCase_033029_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_033029_2 "viewclass_8_bits.r8_snorm_r8i.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033029, VkglTestCase_033029_1, VkglTestCase_033029_2);

#define VkglTestCase_033030_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_033030_2 "class_8_bits.r8_snorm_r8i.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033030, VkglTestCase_033030_1, VkglTestCase_033030_2);

#define VkglTestCase_033031_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_033031_2 "wclass_8_bits.r8_snorm_r8i.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033031, VkglTestCase_033031_1, VkglTestCase_033031_2);

#define VkglTestCase_033032_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_033032_2 "iewclass_8_bits.r8_snorm_r8i.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033032, VkglTestCase_033032_1, VkglTestCase_033032_2);

#define VkglTestCase_033033_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_033033_2 "iewclass_8_bits.r8_snorm_r8i.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033033, VkglTestCase_033033_1, VkglTestCase_033033_2);

#define VkglTestCase_033034_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_033034_2 "viewclass_8_bits.r8_snorm_r8i.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033034, VkglTestCase_033034_1, VkglTestCase_033034_2);

#define VkglTestCase_033035_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_033035_2 "class_8_bits.r8_snorm_r8i.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033035, VkglTestCase_033035_1, VkglTestCase_033035_2);

#define VkglTestCase_033036_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_033036_2 "wclass_8_bits.r8_snorm_r8i.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033036, VkglTestCase_033036_1, VkglTestCase_033036_2);

#define VkglTestCase_033037_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_033037_2 "viewclass_8_bits.r8_snorm_r8i.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033037, VkglTestCase_033037_1, VkglTestCase_033037_2);

#define VkglTestCase_033038_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_033038_2 "viewclass_8_bits.r8_snorm_r8i.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033038, VkglTestCase_033038_1, VkglTestCase_033038_2);

#define VkglTestCase_033039_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_033039_2 ".viewclass_8_bits.r8_snorm_r8i.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033039, VkglTestCase_033039_1, VkglTestCase_033039_2);

#define VkglTestCase_033040_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_033040_2 "wclass_8_bits.r8_snorm_r8i.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033040, VkglTestCase_033040_1, VkglTestCase_033040_2);

#define VkglTestCase_033041_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_033041_2 "ewclass_8_bits.r8_snorm_r8i.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033041, VkglTestCase_033041_1, VkglTestCase_033041_2);

#define VkglTestCase_033042_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_033042_2 "class_8_bits.r8_snorm_r8i.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033042, VkglTestCase_033042_1, VkglTestCase_033042_2);

#define VkglTestCase_033043_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_033043_2 "class_8_bits.r8_snorm_r8i.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033043, VkglTestCase_033043_1, VkglTestCase_033043_2);

#define VkglTestCase_033044_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_033044_2 "wclass_8_bits.r8_snorm_r8i.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033044, VkglTestCase_033044_1, VkglTestCase_033044_2);

#define VkglTestCase_033045_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_033045_2 "ss_8_bits.r8_snorm_r8i.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033045, VkglTestCase_033045_1, VkglTestCase_033045_2);

#define VkglTestCase_033046_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_033046_2 "ass_8_bits.r8_snorm_r8i.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033046, VkglTestCase_033046_1, VkglTestCase_033046_2);
