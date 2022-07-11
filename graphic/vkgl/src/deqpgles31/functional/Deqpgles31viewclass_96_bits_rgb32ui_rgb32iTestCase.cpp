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

#define VkglTestCase_025556_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_025556_2 "wclass_96_bits.rgb32ui_rgb32i.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025556, VkglTestCase_025556_1, VkglTestCase_025556_2);

#define VkglTestCase_025557_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_025557_2 "wclass_96_bits.rgb32ui_rgb32i.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025557, VkglTestCase_025557_1, VkglTestCase_025557_2);

#define VkglTestCase_025558_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_025558_2 "ewclass_96_bits.rgb32ui_rgb32i.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025558, VkglTestCase_025558_1, VkglTestCase_025558_2);

#define VkglTestCase_025559_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_025559_2 "ass_96_bits.rgb32ui_rgb32i.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025559, VkglTestCase_025559_1, VkglTestCase_025559_2);

#define VkglTestCase_025560_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_025560_2 "wclass_96_bits.rgb32ui_rgb32i.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025560, VkglTestCase_025560_1, VkglTestCase_025560_2);

#define VkglTestCase_025561_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_025561_2 "wclass_96_bits.rgb32ui_rgb32i.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025561, VkglTestCase_025561_1, VkglTestCase_025561_2);

#define VkglTestCase_025562_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_025562_2 "ewclass_96_bits.rgb32ui_rgb32i.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025562, VkglTestCase_025562_1, VkglTestCase_025562_2);

#define VkglTestCase_025563_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_025563_2 "ass_96_bits.rgb32ui_rgb32i.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025563, VkglTestCase_025563_1, VkglTestCase_025563_2);

#define VkglTestCase_025564_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_025564_2 "ewclass_96_bits.rgb32ui_rgb32i.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025564, VkglTestCase_025564_1, VkglTestCase_025564_2);

#define VkglTestCase_025565_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_025565_2 "ewclass_96_bits.rgb32ui_rgb32i.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025565, VkglTestCase_025565_1, VkglTestCase_025565_2);

#define VkglTestCase_025566_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_025566_2 "iewclass_96_bits.rgb32ui_rgb32i.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025566, VkglTestCase_025566_1, VkglTestCase_025566_2);

#define VkglTestCase_025567_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_025567_2 "lass_96_bits.rgb32ui_rgb32i.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025567, VkglTestCase_025567_1, VkglTestCase_025567_2);

#define VkglTestCase_025568_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_025568_2 "ass_96_bits.rgb32ui_rgb32i.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025568, VkglTestCase_025568_1, VkglTestCase_025568_2);

#define VkglTestCase_025569_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_025569_2 "ass_96_bits.rgb32ui_rgb32i.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025569, VkglTestCase_025569_1, VkglTestCase_025569_2);

#define VkglTestCase_025570_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_025570_2 "lass_96_bits.rgb32ui_rgb32i.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025570, VkglTestCase_025570_1, VkglTestCase_025570_2);

#define VkglTestCase_025571_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_025571_2 "_96_bits.rgb32ui_rgb32i.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025571, VkglTestCase_025571_1, VkglTestCase_025571_2);
