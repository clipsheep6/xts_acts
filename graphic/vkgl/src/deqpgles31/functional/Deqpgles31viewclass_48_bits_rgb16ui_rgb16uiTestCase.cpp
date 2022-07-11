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

#define VkglTestCase_026468_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026468_2 "wclass_48_bits.rgb16ui_rgb16ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026468, VkglTestCase_026468_1, VkglTestCase_026468_2);

#define VkglTestCase_026469_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026469_2 "wclass_48_bits.rgb16ui_rgb16ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026469, VkglTestCase_026469_1, VkglTestCase_026469_2);

#define VkglTestCase_026470_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026470_2 "ewclass_48_bits.rgb16ui_rgb16ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026470, VkglTestCase_026470_1, VkglTestCase_026470_2);

#define VkglTestCase_026471_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_026471_2 "ass_48_bits.rgb16ui_rgb16ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026471, VkglTestCase_026471_1, VkglTestCase_026471_2);

#define VkglTestCase_026472_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026472_2 "wclass_48_bits.rgb16ui_rgb16ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026472, VkglTestCase_026472_1, VkglTestCase_026472_2);

#define VkglTestCase_026473_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026473_2 "wclass_48_bits.rgb16ui_rgb16ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026473, VkglTestCase_026473_1, VkglTestCase_026473_2);

#define VkglTestCase_026474_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026474_2 "ewclass_48_bits.rgb16ui_rgb16ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026474, VkglTestCase_026474_1, VkglTestCase_026474_2);

#define VkglTestCase_026475_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_026475_2 "ass_48_bits.rgb16ui_rgb16ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026475, VkglTestCase_026475_1, VkglTestCase_026475_2);

#define VkglTestCase_026476_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026476_2 "ewclass_48_bits.rgb16ui_rgb16ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026476, VkglTestCase_026476_1, VkglTestCase_026476_2);

#define VkglTestCase_026477_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026477_2 "ewclass_48_bits.rgb16ui_rgb16ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026477, VkglTestCase_026477_1, VkglTestCase_026477_2);

#define VkglTestCase_026478_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_026478_2 "iewclass_48_bits.rgb16ui_rgb16ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026478, VkglTestCase_026478_1, VkglTestCase_026478_2);

#define VkglTestCase_026479_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_026479_2 "lass_48_bits.rgb16ui_rgb16ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026479, VkglTestCase_026479_1, VkglTestCase_026479_2);

#define VkglTestCase_026480_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_026480_2 "ass_48_bits.rgb16ui_rgb16ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026480, VkglTestCase_026480_1, VkglTestCase_026480_2);

#define VkglTestCase_026481_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_026481_2 "ass_48_bits.rgb16ui_rgb16ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026481, VkglTestCase_026481_1, VkglTestCase_026481_2);

#define VkglTestCase_026482_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_026482_2 "lass_48_bits.rgb16ui_rgb16ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026482, VkglTestCase_026482_1, VkglTestCase_026482_2);

#define VkglTestCase_026483_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_026483_2 "_48_bits.rgb16ui_rgb16ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026483, VkglTestCase_026483_1, VkglTestCase_026483_2);
