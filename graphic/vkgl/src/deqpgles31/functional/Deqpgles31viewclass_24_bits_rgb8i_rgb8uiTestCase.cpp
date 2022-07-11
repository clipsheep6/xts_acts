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

#define VkglTestCase_031333_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031333_2 "ewclass_24_bits.rgb8i_rgb8ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031333, VkglTestCase_031333_1, VkglTestCase_031333_2);

#define VkglTestCase_031334_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031334_2 "ewclass_24_bits.rgb8i_rgb8ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031334, VkglTestCase_031334_1, VkglTestCase_031334_2);

#define VkglTestCase_031335_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031335_2 "iewclass_24_bits.rgb8i_rgb8ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031335, VkglTestCase_031335_1, VkglTestCase_031335_2);

#define VkglTestCase_031336_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_031336_2 "lass_24_bits.rgb8i_rgb8ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031336, VkglTestCase_031336_1, VkglTestCase_031336_2);

#define VkglTestCase_031337_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031337_2 "ewclass_24_bits.rgb8i_rgb8ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031337, VkglTestCase_031337_1, VkglTestCase_031337_2);

#define VkglTestCase_031338_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031338_2 "ewclass_24_bits.rgb8i_rgb8ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031338, VkglTestCase_031338_1, VkglTestCase_031338_2);

#define VkglTestCase_031339_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031339_2 "iewclass_24_bits.rgb8i_rgb8ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031339, VkglTestCase_031339_1, VkglTestCase_031339_2);

#define VkglTestCase_031340_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_031340_2 "lass_24_bits.rgb8i_rgb8ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031340, VkglTestCase_031340_1, VkglTestCase_031340_2);

#define VkglTestCase_031341_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031341_2 "iewclass_24_bits.rgb8i_rgb8ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031341, VkglTestCase_031341_1, VkglTestCase_031341_2);

#define VkglTestCase_031342_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031342_2 "iewclass_24_bits.rgb8i_rgb8ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031342, VkglTestCase_031342_1, VkglTestCase_031342_2);

#define VkglTestCase_031343_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_031343_2 "viewclass_24_bits.rgb8i_rgb8ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031343, VkglTestCase_031343_1, VkglTestCase_031343_2);

#define VkglTestCase_031344_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031344_2 "class_24_bits.rgb8i_rgb8ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031344, VkglTestCase_031344_1, VkglTestCase_031344_2);

#define VkglTestCase_031345_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_031345_2 "lass_24_bits.rgb8i_rgb8ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031345, VkglTestCase_031345_1, VkglTestCase_031345_2);

#define VkglTestCase_031346_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_031346_2 "lass_24_bits.rgb8i_rgb8ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031346, VkglTestCase_031346_1, VkglTestCase_031346_2);

#define VkglTestCase_031347_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031347_2 "class_24_bits.rgb8i_rgb8ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031347, VkglTestCase_031347_1, VkglTestCase_031347_2);

#define VkglTestCase_031348_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_031348_2 "s_24_bits.rgb8i_rgb8ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031348, VkglTestCase_031348_1, VkglTestCase_031348_2);
