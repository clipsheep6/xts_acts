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

#define VkglTestCase_025572_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_025572_2 "wclass_96_bits.rgb32ui_rgb32ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025572, VkglTestCase_025572_1, VkglTestCase_025572_2);

#define VkglTestCase_025573_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_025573_2 "wclass_96_bits.rgb32ui_rgb32ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025573, VkglTestCase_025573_1, VkglTestCase_025573_2);

#define VkglTestCase_025574_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_025574_2 "ewclass_96_bits.rgb32ui_rgb32ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025574, VkglTestCase_025574_1, VkglTestCase_025574_2);

#define VkglTestCase_025575_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_025575_2 "ass_96_bits.rgb32ui_rgb32ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025575, VkglTestCase_025575_1, VkglTestCase_025575_2);

#define VkglTestCase_025576_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_025576_2 "wclass_96_bits.rgb32ui_rgb32ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025576, VkglTestCase_025576_1, VkglTestCase_025576_2);

#define VkglTestCase_025577_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_025577_2 "wclass_96_bits.rgb32ui_rgb32ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025577, VkglTestCase_025577_1, VkglTestCase_025577_2);

#define VkglTestCase_025578_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_025578_2 "ewclass_96_bits.rgb32ui_rgb32ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025578, VkglTestCase_025578_1, VkglTestCase_025578_2);

#define VkglTestCase_025579_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_025579_2 "ass_96_bits.rgb32ui_rgb32ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025579, VkglTestCase_025579_1, VkglTestCase_025579_2);

#define VkglTestCase_025580_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_025580_2 "ewclass_96_bits.rgb32ui_rgb32ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025580, VkglTestCase_025580_1, VkglTestCase_025580_2);

#define VkglTestCase_025581_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_025581_2 "ewclass_96_bits.rgb32ui_rgb32ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025581, VkglTestCase_025581_1, VkglTestCase_025581_2);

#define VkglTestCase_025582_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_025582_2 "iewclass_96_bits.rgb32ui_rgb32ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025582, VkglTestCase_025582_1, VkglTestCase_025582_2);

#define VkglTestCase_025583_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_025583_2 "lass_96_bits.rgb32ui_rgb32ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025583, VkglTestCase_025583_1, VkglTestCase_025583_2);

#define VkglTestCase_025584_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_025584_2 "ass_96_bits.rgb32ui_rgb32ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025584, VkglTestCase_025584_1, VkglTestCase_025584_2);

#define VkglTestCase_025585_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_025585_2 "ass_96_bits.rgb32ui_rgb32ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025585, VkglTestCase_025585_1, VkglTestCase_025585_2);

#define VkglTestCase_025586_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_025586_2 "lass_96_bits.rgb32ui_rgb32ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025586, VkglTestCase_025586_1, VkglTestCase_025586_2);

#define VkglTestCase_025587_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_025587_2 "_96_bits.rgb32ui_rgb32ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025587, VkglTestCase_025587_1, VkglTestCase_025587_2);
