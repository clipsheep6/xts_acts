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

#define VkglTestCase_035619_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_035619_2 "_mixed.rgba32ui_rgba_astc_12x12_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035619, VkglTestCase_035619_1, VkglTestCase_035619_2);

#define VkglTestCase_035620_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_035620_2 "_mixed.rgba32ui_rgba_astc_12x12_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035620, VkglTestCase_035620_1, VkglTestCase_035620_2);

#define VkglTestCase_035621_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035621_2 "s_mixed.rgba32ui_rgba_astc_12x12_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035621, VkglTestCase_035621_1, VkglTestCase_035621_2);

#define VkglTestCase_035622_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035622_2 "xed.rgba32ui_rgba_astc_12x12_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035622, VkglTestCase_035622_1, VkglTestCase_035622_2);

#define VkglTestCase_035623_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_035623_2 "_mixed.rgba32ui_rgba_astc_12x12_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035623, VkglTestCase_035623_1, VkglTestCase_035623_2);

#define VkglTestCase_035624_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_035624_2 "_mixed.rgba32ui_rgba_astc_12x12_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035624, VkglTestCase_035624_1, VkglTestCase_035624_2);

#define VkglTestCase_035625_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035625_2 "s_mixed.rgba32ui_rgba_astc_12x12_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035625, VkglTestCase_035625_1, VkglTestCase_035625_2);

#define VkglTestCase_035626_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035626_2 "xed.rgba32ui_rgba_astc_12x12_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035626, VkglTestCase_035626_1, VkglTestCase_035626_2);

#define VkglTestCase_035627_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035627_2 "s_mixed.rgba32ui_rgba_astc_12x12_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035627, VkglTestCase_035627_1, VkglTestCase_035627_2);

#define VkglTestCase_035628_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035628_2 "s_mixed.rgba32ui_rgba_astc_12x12_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035628, VkglTestCase_035628_1, VkglTestCase_035628_2);

#define VkglTestCase_035629_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_035629_2 "ts_mixed.rgba32ui_rgba_astc_12x12_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035629, VkglTestCase_035629_1, VkglTestCase_035629_2);

#define VkglTestCase_035630_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035630_2 "ixed.rgba32ui_rgba_astc_12x12_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035630, VkglTestCase_035630_1, VkglTestCase_035630_2);

#define VkglTestCase_035631_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035631_2 "xed.rgba32ui_rgba_astc_12x12_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035631, VkglTestCase_035631_1, VkglTestCase_035631_2);

#define VkglTestCase_035632_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035632_2 "xed.rgba32ui_rgba_astc_12x12_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035632, VkglTestCase_035632_1, VkglTestCase_035632_2);

#define VkglTestCase_035633_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035633_2 "ixed.rgba32ui_rgba_astc_12x12_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035633, VkglTestCase_035633_1, VkglTestCase_035633_2);

#define VkglTestCase_035634_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_035634_2 ".rgba32ui_rgba_astc_12x12_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035634, VkglTestCase_035634_1, VkglTestCase_035634_2);

#define VkglTestCase_035635_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_035635_2 "mixed.rgba32ui_rgba_astc_12x12_khr.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035635, VkglTestCase_035635_1, VkglTestCase_035635_2);

#define VkglTestCase_035636_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_035636_2 "mixed.rgba32ui_rgba_astc_12x12_khr.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035636, VkglTestCase_035636_1, VkglTestCase_035636_2);

#define VkglTestCase_035637_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_035637_2 "_mixed.rgba32ui_rgba_astc_12x12_khr.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035637, VkglTestCase_035637_1, VkglTestCase_035637_2);

#define VkglTestCase_035638_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_035638_2 "ed.rgba32ui_rgba_astc_12x12_khr.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035638, VkglTestCase_035638_1, VkglTestCase_035638_2);
