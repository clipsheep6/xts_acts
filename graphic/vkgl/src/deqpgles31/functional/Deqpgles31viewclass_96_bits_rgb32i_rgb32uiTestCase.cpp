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
#include "../ActsDeqpgles310026TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_025524_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_025524_2 "wclass_96_bits.rgb32i_rgb32ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025524, VkglTestCase_025524_1, VkglTestCase_025524_2);

#define VkglTestCase_025525_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_025525_2 "wclass_96_bits.rgb32i_rgb32ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025525, VkglTestCase_025525_1, VkglTestCase_025525_2);

#define VkglTestCase_025526_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_025526_2 "ewclass_96_bits.rgb32i_rgb32ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025526, VkglTestCase_025526_1, VkglTestCase_025526_2);

#define VkglTestCase_025527_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_025527_2 "ass_96_bits.rgb32i_rgb32ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025527, VkglTestCase_025527_1, VkglTestCase_025527_2);

#define VkglTestCase_025528_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_025528_2 "wclass_96_bits.rgb32i_rgb32ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025528, VkglTestCase_025528_1, VkglTestCase_025528_2);

#define VkglTestCase_025529_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_025529_2 "wclass_96_bits.rgb32i_rgb32ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025529, VkglTestCase_025529_1, VkglTestCase_025529_2);

#define VkglTestCase_025530_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_025530_2 "ewclass_96_bits.rgb32i_rgb32ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025530, VkglTestCase_025530_1, VkglTestCase_025530_2);

#define VkglTestCase_025531_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_025531_2 "ass_96_bits.rgb32i_rgb32ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025531, VkglTestCase_025531_1, VkglTestCase_025531_2);

#define VkglTestCase_025532_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_025532_2 "ewclass_96_bits.rgb32i_rgb32ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025532, VkglTestCase_025532_1, VkglTestCase_025532_2);

#define VkglTestCase_025533_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_025533_2 "ewclass_96_bits.rgb32i_rgb32ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025533, VkglTestCase_025533_1, VkglTestCase_025533_2);

#define VkglTestCase_025534_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_025534_2 "iewclass_96_bits.rgb32i_rgb32ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025534, VkglTestCase_025534_1, VkglTestCase_025534_2);

#define VkglTestCase_025535_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_025535_2 "lass_96_bits.rgb32i_rgb32ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025535, VkglTestCase_025535_1, VkglTestCase_025535_2);

#define VkglTestCase_025536_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_025536_2 "ass_96_bits.rgb32i_rgb32ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025536, VkglTestCase_025536_1, VkglTestCase_025536_2);

#define VkglTestCase_025537_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_025537_2 "ass_96_bits.rgb32i_rgb32ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025537, VkglTestCase_025537_1, VkglTestCase_025537_2);

#define VkglTestCase_025538_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_025538_2 "lass_96_bits.rgb32i_rgb32ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025538, VkglTestCase_025538_1, VkglTestCase_025538_2);

#define VkglTestCase_025539_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_025539_2 "_96_bits.rgb32i_rgb32ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025539, VkglTestCase_025539_1, VkglTestCase_025539_2);
