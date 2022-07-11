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

#define VkglTestCase_031433_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031433_2 "class_24_bits.rgb8ui_rgb8_snorm.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031433, VkglTestCase_031433_1, VkglTestCase_031433_2);

#define VkglTestCase_031434_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031434_2 "class_24_bits.rgb8ui_rgb8_snorm.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031434, VkglTestCase_031434_1, VkglTestCase_031434_2);

#define VkglTestCase_031435_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031435_2 "wclass_24_bits.rgb8ui_rgb8_snorm.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031435, VkglTestCase_031435_1, VkglTestCase_031435_2);

#define VkglTestCase_031436_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_031436_2 "ss_24_bits.rgb8ui_rgb8_snorm.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031436, VkglTestCase_031436_1, VkglTestCase_031436_2);

#define VkglTestCase_031437_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031437_2 "class_24_bits.rgb8ui_rgb8_snorm.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031437, VkglTestCase_031437_1, VkglTestCase_031437_2);

#define VkglTestCase_031438_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031438_2 "class_24_bits.rgb8ui_rgb8_snorm.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031438, VkglTestCase_031438_1, VkglTestCase_031438_2);

#define VkglTestCase_031439_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031439_2 "wclass_24_bits.rgb8ui_rgb8_snorm.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031439, VkglTestCase_031439_1, VkglTestCase_031439_2);

#define VkglTestCase_031440_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_031440_2 "ss_24_bits.rgb8ui_rgb8_snorm.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031440, VkglTestCase_031440_1, VkglTestCase_031440_2);

#define VkglTestCase_031441_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031441_2 "wclass_24_bits.rgb8ui_rgb8_snorm.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031441, VkglTestCase_031441_1, VkglTestCase_031441_2);

#define VkglTestCase_031442_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031442_2 "wclass_24_bits.rgb8ui_rgb8_snorm.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031442, VkglTestCase_031442_1, VkglTestCase_031442_2);

#define VkglTestCase_031443_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031443_2 "ewclass_24_bits.rgb8ui_rgb8_snorm.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031443, VkglTestCase_031443_1, VkglTestCase_031443_2);

#define VkglTestCase_031444_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_031444_2 "ass_24_bits.rgb8ui_rgb8_snorm.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031444, VkglTestCase_031444_1, VkglTestCase_031444_2);

#define VkglTestCase_031445_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_031445_2 "ss_24_bits.rgb8ui_rgb8_snorm.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031445, VkglTestCase_031445_1, VkglTestCase_031445_2);

#define VkglTestCase_031446_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_031446_2 "ss_24_bits.rgb8ui_rgb8_snorm.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031446, VkglTestCase_031446_1, VkglTestCase_031446_2);

#define VkglTestCase_031447_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_031447_2 "ass_24_bits.rgb8ui_rgb8_snorm.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031447, VkglTestCase_031447_1, VkglTestCase_031447_2);

#define VkglTestCase_031448_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_031448_2 "24_bits.rgb8ui_rgb8_snorm.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031448, VkglTestCase_031448_1, VkglTestCase_031448_2);
