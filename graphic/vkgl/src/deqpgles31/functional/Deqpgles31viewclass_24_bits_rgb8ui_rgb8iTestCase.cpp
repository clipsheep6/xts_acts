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

#define VkglTestCase_031401_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031401_2 "ewclass_24_bits.rgb8ui_rgb8i.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031401, VkglTestCase_031401_1, VkglTestCase_031401_2);

#define VkglTestCase_031402_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031402_2 "ewclass_24_bits.rgb8ui_rgb8i.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031402, VkglTestCase_031402_1, VkglTestCase_031402_2);

#define VkglTestCase_031403_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031403_2 "iewclass_24_bits.rgb8ui_rgb8i.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031403, VkglTestCase_031403_1, VkglTestCase_031403_2);

#define VkglTestCase_031404_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_031404_2 "lass_24_bits.rgb8ui_rgb8i.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031404, VkglTestCase_031404_1, VkglTestCase_031404_2);

#define VkglTestCase_031405_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031405_2 "ewclass_24_bits.rgb8ui_rgb8i.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031405, VkglTestCase_031405_1, VkglTestCase_031405_2);

#define VkglTestCase_031406_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031406_2 "ewclass_24_bits.rgb8ui_rgb8i.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031406, VkglTestCase_031406_1, VkglTestCase_031406_2);

#define VkglTestCase_031407_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031407_2 "iewclass_24_bits.rgb8ui_rgb8i.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031407, VkglTestCase_031407_1, VkglTestCase_031407_2);

#define VkglTestCase_031408_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_031408_2 "lass_24_bits.rgb8ui_rgb8i.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031408, VkglTestCase_031408_1, VkglTestCase_031408_2);

#define VkglTestCase_031409_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031409_2 "iewclass_24_bits.rgb8ui_rgb8i.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031409, VkglTestCase_031409_1, VkglTestCase_031409_2);

#define VkglTestCase_031410_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031410_2 "iewclass_24_bits.rgb8ui_rgb8i.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031410, VkglTestCase_031410_1, VkglTestCase_031410_2);

#define VkglTestCase_031411_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_031411_2 "viewclass_24_bits.rgb8ui_rgb8i.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031411, VkglTestCase_031411_1, VkglTestCase_031411_2);

#define VkglTestCase_031412_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031412_2 "class_24_bits.rgb8ui_rgb8i.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031412, VkglTestCase_031412_1, VkglTestCase_031412_2);

#define VkglTestCase_031413_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_031413_2 "lass_24_bits.rgb8ui_rgb8i.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031413, VkglTestCase_031413_1, VkglTestCase_031413_2);

#define VkglTestCase_031414_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_031414_2 "lass_24_bits.rgb8ui_rgb8i.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031414, VkglTestCase_031414_1, VkglTestCase_031414_2);

#define VkglTestCase_031415_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031415_2 "class_24_bits.rgb8ui_rgb8i.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031415, VkglTestCase_031415_1, VkglTestCase_031415_2);

#define VkglTestCase_031416_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_031416_2 "s_24_bits.rgb8ui_rgb8i.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031416, VkglTestCase_031416_1, VkglTestCase_031416_2);
