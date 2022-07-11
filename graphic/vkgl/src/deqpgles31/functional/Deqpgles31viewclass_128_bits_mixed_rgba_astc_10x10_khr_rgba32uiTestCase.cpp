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

#define VkglTestCase_035559_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_035559_2 "_mixed.rgba_astc_10x10_khr_rgba32ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035559, VkglTestCase_035559_1, VkglTestCase_035559_2);

#define VkglTestCase_035560_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_035560_2 "_mixed.rgba_astc_10x10_khr_rgba32ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035560, VkglTestCase_035560_1, VkglTestCase_035560_2);

#define VkglTestCase_035561_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035561_2 "s_mixed.rgba_astc_10x10_khr_rgba32ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035561, VkglTestCase_035561_1, VkglTestCase_035561_2);

#define VkglTestCase_035562_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035562_2 "xed.rgba_astc_10x10_khr_rgba32ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035562, VkglTestCase_035562_1, VkglTestCase_035562_2);

#define VkglTestCase_035563_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_035563_2 "mixed.rgba_astc_10x10_khr_rgba32ui.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035563, VkglTestCase_035563_1, VkglTestCase_035563_2);

#define VkglTestCase_035564_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_035564_2 "_mixed.rgba_astc_10x10_khr_rgba32ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035564, VkglTestCase_035564_1, VkglTestCase_035564_2);

#define VkglTestCase_035565_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_035565_2 "_mixed.rgba_astc_10x10_khr_rgba32ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035565, VkglTestCase_035565_1, VkglTestCase_035565_2);

#define VkglTestCase_035566_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035566_2 "s_mixed.rgba_astc_10x10_khr_rgba32ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035566, VkglTestCase_035566_1, VkglTestCase_035566_2);

#define VkglTestCase_035567_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035567_2 "xed.rgba_astc_10x10_khr_rgba32ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035567, VkglTestCase_035567_1, VkglTestCase_035567_2);

#define VkglTestCase_035568_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_035568_2 "mixed.rgba_astc_10x10_khr_rgba32ui.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035568, VkglTestCase_035568_1, VkglTestCase_035568_2);

#define VkglTestCase_035569_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035569_2 "s_mixed.rgba_astc_10x10_khr_rgba32ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035569, VkglTestCase_035569_1, VkglTestCase_035569_2);

#define VkglTestCase_035570_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_035570_2 "s_mixed.rgba_astc_10x10_khr_rgba32ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035570, VkglTestCase_035570_1, VkglTestCase_035570_2);

#define VkglTestCase_035571_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_035571_2 "ts_mixed.rgba_astc_10x10_khr_rgba32ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035571, VkglTestCase_035571_1, VkglTestCase_035571_2);

#define VkglTestCase_035572_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035572_2 "ixed.rgba_astc_10x10_khr_rgba32ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035572, VkglTestCase_035572_1, VkglTestCase_035572_2);

#define VkglTestCase_035573_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_035573_2 "_mixed.rgba_astc_10x10_khr_rgba32ui.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035573, VkglTestCase_035573_1, VkglTestCase_035573_2);

#define VkglTestCase_035574_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035574_2 "xed.rgba_astc_10x10_khr_rgba32ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035574, VkglTestCase_035574_1, VkglTestCase_035574_2);

#define VkglTestCase_035575_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_035575_2 "xed.rgba_astc_10x10_khr_rgba32ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035575, VkglTestCase_035575_1, VkglTestCase_035575_2);

#define VkglTestCase_035576_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_m"
#define VkglTestCase_035576_2 "ixed.rgba_astc_10x10_khr_rgba32ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035576, VkglTestCase_035576_1, VkglTestCase_035576_2);

#define VkglTestCase_035577_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mixed"
#define VkglTestCase_035577_2 ".rgba_astc_10x10_khr_rgba32ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035577, VkglTestCase_035577_1, VkglTestCase_035577_2);

#define VkglTestCase_035578_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_035578_2 "ed.rgba_astc_10x10_khr_rgba32ui.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035578, VkglTestCase_035578_1, VkglTestCase_035578_2);
