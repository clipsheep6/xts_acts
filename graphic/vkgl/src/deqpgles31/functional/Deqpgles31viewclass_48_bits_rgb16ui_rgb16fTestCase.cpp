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
#include "../ActsDeqpgles310027TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_026436_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026436_2 "wclass_48_bits.rgb16ui_rgb16f.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026436, VkglTestCase_026436_1, VkglTestCase_026436_2);

#define VkglTestCase_026437_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026437_2 "wclass_48_bits.rgb16ui_rgb16f.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026437, VkglTestCase_026437_1, VkglTestCase_026437_2);

#define VkglTestCase_026438_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026438_2 "ewclass_48_bits.rgb16ui_rgb16f.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026438, VkglTestCase_026438_1, VkglTestCase_026438_2);

#define VkglTestCase_026439_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_026439_2 "ass_48_bits.rgb16ui_rgb16f.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026439, VkglTestCase_026439_1, VkglTestCase_026439_2);

#define VkglTestCase_026440_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026440_2 "wclass_48_bits.rgb16ui_rgb16f.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026440, VkglTestCase_026440_1, VkglTestCase_026440_2);

#define VkglTestCase_026441_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026441_2 "wclass_48_bits.rgb16ui_rgb16f.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026441, VkglTestCase_026441_1, VkglTestCase_026441_2);

#define VkglTestCase_026442_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026442_2 "ewclass_48_bits.rgb16ui_rgb16f.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026442, VkglTestCase_026442_1, VkglTestCase_026442_2);

#define VkglTestCase_026443_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_026443_2 "ass_48_bits.rgb16ui_rgb16f.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026443, VkglTestCase_026443_1, VkglTestCase_026443_2);

#define VkglTestCase_026444_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026444_2 "ewclass_48_bits.rgb16ui_rgb16f.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026444, VkglTestCase_026444_1, VkglTestCase_026444_2);

#define VkglTestCase_026445_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026445_2 "ewclass_48_bits.rgb16ui_rgb16f.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026445, VkglTestCase_026445_1, VkglTestCase_026445_2);

#define VkglTestCase_026446_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_026446_2 "iewclass_48_bits.rgb16ui_rgb16f.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026446, VkglTestCase_026446_1, VkglTestCase_026446_2);

#define VkglTestCase_026447_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_026447_2 "lass_48_bits.rgb16ui_rgb16f.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026447, VkglTestCase_026447_1, VkglTestCase_026447_2);

#define VkglTestCase_026448_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_026448_2 "ass_48_bits.rgb16ui_rgb16f.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026448, VkglTestCase_026448_1, VkglTestCase_026448_2);

#define VkglTestCase_026449_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_026449_2 "ass_48_bits.rgb16ui_rgb16f.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026449, VkglTestCase_026449_1, VkglTestCase_026449_2);

#define VkglTestCase_026450_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_026450_2 "lass_48_bits.rgb16ui_rgb16f.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026450, VkglTestCase_026450_1, VkglTestCase_026450_2);

#define VkglTestCase_026451_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_026451_2 "_48_bits.rgb16ui_rgb16f.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026451, VkglTestCase_026451_1, VkglTestCase_026451_2);
