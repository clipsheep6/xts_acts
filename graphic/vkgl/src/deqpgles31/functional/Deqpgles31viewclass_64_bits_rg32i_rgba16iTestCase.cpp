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

#define VkglTestCase_025774_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_025774_2 "ewclass_64_bits.rg32i_rgba16i.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025774, VkglTestCase_025774_1, VkglTestCase_025774_2);

#define VkglTestCase_025775_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_025775_2 "ewclass_64_bits.rg32i_rgba16i.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025775, VkglTestCase_025775_1, VkglTestCase_025775_2);

#define VkglTestCase_025776_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_025776_2 "iewclass_64_bits.rg32i_rgba16i.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025776, VkglTestCase_025776_1, VkglTestCase_025776_2);

#define VkglTestCase_025777_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_025777_2 "lass_64_bits.rg32i_rgba16i.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025777, VkglTestCase_025777_1, VkglTestCase_025777_2);

#define VkglTestCase_025778_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_025778_2 "class_64_bits.rg32i_rgba16i.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025778, VkglTestCase_025778_1, VkglTestCase_025778_2);

#define VkglTestCase_025779_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_025779_2 "ewclass_64_bits.rg32i_rgba16i.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025779, VkglTestCase_025779_1, VkglTestCase_025779_2);

#define VkglTestCase_025780_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_025780_2 "ewclass_64_bits.rg32i_rgba16i.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025780, VkglTestCase_025780_1, VkglTestCase_025780_2);

#define VkglTestCase_025781_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_025781_2 "iewclass_64_bits.rg32i_rgba16i.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025781, VkglTestCase_025781_1, VkglTestCase_025781_2);

#define VkglTestCase_025782_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_025782_2 "lass_64_bits.rg32i_rgba16i.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025782, VkglTestCase_025782_1, VkglTestCase_025782_2);

#define VkglTestCase_025783_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_025783_2 "class_64_bits.rg32i_rgba16i.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025783, VkglTestCase_025783_1, VkglTestCase_025783_2);

#define VkglTestCase_025784_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_025784_2 "iewclass_64_bits.rg32i_rgba16i.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025784, VkglTestCase_025784_1, VkglTestCase_025784_2);

#define VkglTestCase_025785_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_025785_2 "iewclass_64_bits.rg32i_rgba16i.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025785, VkglTestCase_025785_1, VkglTestCase_025785_2);

#define VkglTestCase_025786_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_025786_2 "viewclass_64_bits.rg32i_rgba16i.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025786, VkglTestCase_025786_1, VkglTestCase_025786_2);

#define VkglTestCase_025787_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_025787_2 "class_64_bits.rg32i_rgba16i.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025787, VkglTestCase_025787_1, VkglTestCase_025787_2);

#define VkglTestCase_025788_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_025788_2 "wclass_64_bits.rg32i_rgba16i.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025788, VkglTestCase_025788_1, VkglTestCase_025788_2);

#define VkglTestCase_025789_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_025789_2 "lass_64_bits.rg32i_rgba16i.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025789, VkglTestCase_025789_1, VkglTestCase_025789_2);

#define VkglTestCase_025790_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_025790_2 "lass_64_bits.rg32i_rgba16i.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025790, VkglTestCase_025790_1, VkglTestCase_025790_2);

#define VkglTestCase_025791_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_025791_2 "class_64_bits.rg32i_rgba16i.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025791, VkglTestCase_025791_1, VkglTestCase_025791_2);

#define VkglTestCase_025792_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_025792_2 "s_64_bits.rg32i_rgba16i.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025792, VkglTestCase_025792_1, VkglTestCase_025792_2);

#define VkglTestCase_025793_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_025793_2 "ss_64_bits.rg32i_rgba16i.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025793, VkglTestCase_025793_1, VkglTestCase_025793_2);

#define VkglTestCase_025794_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_025794_2 "class_64_bits.rg32i_rgba16i.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025794, VkglTestCase_025794_1, VkglTestCase_025794_2);

#define VkglTestCase_025795_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_025795_2 "class_64_bits.rg32i_rgba16i.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025795, VkglTestCase_025795_1, VkglTestCase_025795_2);

#define VkglTestCase_025796_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_025796_2 "wclass_64_bits.rg32i_rgba16i.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025796, VkglTestCase_025796_1, VkglTestCase_025796_2);

#define VkglTestCase_025797_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_025797_2 "ss_64_bits.rg32i_rgba16i.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025797, VkglTestCase_025797_1, VkglTestCase_025797_2);

#define VkglTestCase_025798_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_025798_2 "lass_64_bits.rg32i_rgba16i.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025798, VkglTestCase_025798_1, VkglTestCase_025798_2);
