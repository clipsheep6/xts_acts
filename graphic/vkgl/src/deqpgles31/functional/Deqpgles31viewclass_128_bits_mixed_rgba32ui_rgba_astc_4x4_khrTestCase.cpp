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
#include "../ActsDeqpgles310036TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_035099_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035099_2 "s_mixed.rgba32ui_rgba_astc_4x4_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035099, VkglTestCase_035099_1, VkglTestCase_035099_2);

#define VkglTestCase_035100_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035100_2 "s_mixed.rgba32ui_rgba_astc_4x4_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035100, VkglTestCase_035100_1, VkglTestCase_035100_2);

#define VkglTestCase_035101_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_035101_2 "ts_mixed.rgba32ui_rgba_astc_4x4_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035101, VkglTestCase_035101_1, VkglTestCase_035101_2);

#define VkglTestCase_035102_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035102_2 "ixed.rgba32ui_rgba_astc_4x4_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035102, VkglTestCase_035102_1, VkglTestCase_035102_2);

#define VkglTestCase_035103_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035103_2 "s_mixed.rgba32ui_rgba_astc_4x4_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035103, VkglTestCase_035103_1, VkglTestCase_035103_2);

#define VkglTestCase_035104_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035104_2 "s_mixed.rgba32ui_rgba_astc_4x4_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035104, VkglTestCase_035104_1, VkglTestCase_035104_2);

#define VkglTestCase_035105_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_035105_2 "ts_mixed.rgba32ui_rgba_astc_4x4_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035105, VkglTestCase_035105_1, VkglTestCase_035105_2);

#define VkglTestCase_035106_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035106_2 "ixed.rgba32ui_rgba_astc_4x4_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035106, VkglTestCase_035106_1, VkglTestCase_035106_2);

#define VkglTestCase_035107_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_035107_2 "ts_mixed.rgba32ui_rgba_astc_4x4_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035107, VkglTestCase_035107_1, VkglTestCase_035107_2);

#define VkglTestCase_035108_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_035108_2 "ts_mixed.rgba32ui_rgba_astc_4x4_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035108, VkglTestCase_035108_1, VkglTestCase_035108_2);

#define VkglTestCase_035109_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_035109_2 "its_mixed.rgba32ui_rgba_astc_4x4_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035109, VkglTestCase_035109_1, VkglTestCase_035109_2);

#define VkglTestCase_035110_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_035110_2 "mixed.rgba32ui_rgba_astc_4x4_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035110, VkglTestCase_035110_1, VkglTestCase_035110_2);

#define VkglTestCase_035111_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035111_2 "ixed.rgba32ui_rgba_astc_4x4_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035111, VkglTestCase_035111_1, VkglTestCase_035111_2);

#define VkglTestCase_035112_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035112_2 "ixed.rgba32ui_rgba_astc_4x4_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035112, VkglTestCase_035112_1, VkglTestCase_035112_2);

#define VkglTestCase_035113_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_035113_2 "mixed.rgba32ui_rgba_astc_4x4_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035113, VkglTestCase_035113_1, VkglTestCase_035113_2);

#define VkglTestCase_035114_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixe"
#define VkglTestCase_035114_2 "d.rgba32ui_rgba_astc_4x4_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035114, VkglTestCase_035114_1, VkglTestCase_035114_2);

#define VkglTestCase_035115_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_035115_2 "_mixed.rgba32ui_rgba_astc_4x4_khr.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035115, VkglTestCase_035115_1, VkglTestCase_035115_2);

#define VkglTestCase_035116_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_035116_2 "_mixed.rgba32ui_rgba_astc_4x4_khr.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035116, VkglTestCase_035116_1, VkglTestCase_035116_2);

#define VkglTestCase_035117_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035117_2 "s_mixed.rgba32ui_rgba_astc_4x4_khr.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035117, VkglTestCase_035117_1, VkglTestCase_035117_2);

#define VkglTestCase_035118_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035118_2 "xed.rgba32ui_rgba_astc_4x4_khr.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035118, VkglTestCase_035118_1, VkglTestCase_035118_2);
