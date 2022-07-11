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

#define VkglTestCase_031533_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031533_2 "class_24_bits.rgb8_snorm_srgb8.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031533, VkglTestCase_031533_1, VkglTestCase_031533_2);

#define VkglTestCase_031534_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031534_2 "class_24_bits.rgb8_snorm_srgb8.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031534, VkglTestCase_031534_1, VkglTestCase_031534_2);

#define VkglTestCase_031535_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031535_2 "wclass_24_bits.rgb8_snorm_srgb8.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031535, VkglTestCase_031535_1, VkglTestCase_031535_2);

#define VkglTestCase_031536_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_031536_2 "ss_24_bits.rgb8_snorm_srgb8.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031536, VkglTestCase_031536_1, VkglTestCase_031536_2);

#define VkglTestCase_031537_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031537_2 "class_24_bits.rgb8_snorm_srgb8.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031537, VkglTestCase_031537_1, VkglTestCase_031537_2);

#define VkglTestCase_031538_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031538_2 "class_24_bits.rgb8_snorm_srgb8.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031538, VkglTestCase_031538_1, VkglTestCase_031538_2);

#define VkglTestCase_031539_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031539_2 "wclass_24_bits.rgb8_snorm_srgb8.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031539, VkglTestCase_031539_1, VkglTestCase_031539_2);

#define VkglTestCase_031540_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_031540_2 "ss_24_bits.rgb8_snorm_srgb8.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031540, VkglTestCase_031540_1, VkglTestCase_031540_2);

#define VkglTestCase_031541_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031541_2 "wclass_24_bits.rgb8_snorm_srgb8.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031541, VkglTestCase_031541_1, VkglTestCase_031541_2);

#define VkglTestCase_031542_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031542_2 "wclass_24_bits.rgb8_snorm_srgb8.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031542, VkglTestCase_031542_1, VkglTestCase_031542_2);

#define VkglTestCase_031543_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031543_2 "ewclass_24_bits.rgb8_snorm_srgb8.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031543, VkglTestCase_031543_1, VkglTestCase_031543_2);

#define VkglTestCase_031544_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_031544_2 "ass_24_bits.rgb8_snorm_srgb8.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031544, VkglTestCase_031544_1, VkglTestCase_031544_2);

#define VkglTestCase_031545_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_031545_2 "ss_24_bits.rgb8_snorm_srgb8.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031545, VkglTestCase_031545_1, VkglTestCase_031545_2);

#define VkglTestCase_031546_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_031546_2 "ss_24_bits.rgb8_snorm_srgb8.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031546, VkglTestCase_031546_1, VkglTestCase_031546_2);

#define VkglTestCase_031547_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_031547_2 "ass_24_bits.rgb8_snorm_srgb8.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031547, VkglTestCase_031547_1, VkglTestCase_031547_2);

#define VkglTestCase_031548_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_031548_2 "24_bits.rgb8_snorm_srgb8.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031548, VkglTestCase_031548_1, VkglTestCase_031548_2);
