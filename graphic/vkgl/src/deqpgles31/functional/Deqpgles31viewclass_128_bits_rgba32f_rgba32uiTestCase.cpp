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

#define VkglTestCase_025284_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_025284_2 "class_128_bits.rgba32f_rgba32ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025284, VkglTestCase_025284_1, VkglTestCase_025284_2);

#define VkglTestCase_025285_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_025285_2 "class_128_bits.rgba32f_rgba32ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025285, VkglTestCase_025285_1, VkglTestCase_025285_2);

#define VkglTestCase_025286_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_025286_2 "wclass_128_bits.rgba32f_rgba32ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025286, VkglTestCase_025286_1, VkglTestCase_025286_2);

#define VkglTestCase_025287_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_025287_2 "ss_128_bits.rgba32f_rgba32ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025287, VkglTestCase_025287_1, VkglTestCase_025287_2);

#define VkglTestCase_025288_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_025288_2 "ass_128_bits.rgba32f_rgba32ui.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025288, VkglTestCase_025288_1, VkglTestCase_025288_2);

#define VkglTestCase_025289_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_025289_2 "class_128_bits.rgba32f_rgba32ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025289, VkglTestCase_025289_1, VkglTestCase_025289_2);

#define VkglTestCase_025290_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_025290_2 "class_128_bits.rgba32f_rgba32ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025290, VkglTestCase_025290_1, VkglTestCase_025290_2);

#define VkglTestCase_025291_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_025291_2 "wclass_128_bits.rgba32f_rgba32ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025291, VkglTestCase_025291_1, VkglTestCase_025291_2);

#define VkglTestCase_025292_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_025292_2 "ss_128_bits.rgba32f_rgba32ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025292, VkglTestCase_025292_1, VkglTestCase_025292_2);

#define VkglTestCase_025293_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_025293_2 "ass_128_bits.rgba32f_rgba32ui.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025293, VkglTestCase_025293_1, VkglTestCase_025293_2);

#define VkglTestCase_025294_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_025294_2 "wclass_128_bits.rgba32f_rgba32ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025294, VkglTestCase_025294_1, VkglTestCase_025294_2);

#define VkglTestCase_025295_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_025295_2 "wclass_128_bits.rgba32f_rgba32ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025295, VkglTestCase_025295_1, VkglTestCase_025295_2);

#define VkglTestCase_025296_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_025296_2 "ewclass_128_bits.rgba32f_rgba32ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025296, VkglTestCase_025296_1, VkglTestCase_025296_2);

#define VkglTestCase_025297_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_025297_2 "ass_128_bits.rgba32f_rgba32ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025297, VkglTestCase_025297_1, VkglTestCase_025297_2);

#define VkglTestCase_025298_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_025298_2 "lass_128_bits.rgba32f_rgba32ui.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025298, VkglTestCase_025298_1, VkglTestCase_025298_2);

#define VkglTestCase_025299_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_025299_2 "ss_128_bits.rgba32f_rgba32ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025299, VkglTestCase_025299_1, VkglTestCase_025299_2);

#define VkglTestCase_025300_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_025300_2 "ss_128_bits.rgba32f_rgba32ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025300, VkglTestCase_025300_1, VkglTestCase_025300_2);

#define VkglTestCase_025301_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_025301_2 "ass_128_bits.rgba32f_rgba32ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025301, VkglTestCase_025301_1, VkglTestCase_025301_2);

#define VkglTestCase_025302_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_025302_2 "128_bits.rgba32f_rgba32ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025302, VkglTestCase_025302_1, VkglTestCase_025302_2);

#define VkglTestCase_025303_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_025303_2 "_128_bits.rgba32f_rgba32ui.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025303, VkglTestCase_025303_1, VkglTestCase_025303_2);
