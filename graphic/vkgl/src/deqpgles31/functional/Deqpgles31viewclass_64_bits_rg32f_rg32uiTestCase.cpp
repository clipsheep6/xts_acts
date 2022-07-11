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

#define VkglTestCase_025624_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_025624_2 "ewclass_64_bits.rg32f_rg32ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025624, VkglTestCase_025624_1, VkglTestCase_025624_2);

#define VkglTestCase_025625_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_025625_2 "ewclass_64_bits.rg32f_rg32ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025625, VkglTestCase_025625_1, VkglTestCase_025625_2);

#define VkglTestCase_025626_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_025626_2 "iewclass_64_bits.rg32f_rg32ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025626, VkglTestCase_025626_1, VkglTestCase_025626_2);

#define VkglTestCase_025627_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_025627_2 "lass_64_bits.rg32f_rg32ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025627, VkglTestCase_025627_1, VkglTestCase_025627_2);

#define VkglTestCase_025628_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_025628_2 "wclass_64_bits.rg32f_rg32ui.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025628, VkglTestCase_025628_1, VkglTestCase_025628_2);

#define VkglTestCase_025629_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_025629_2 "ewclass_64_bits.rg32f_rg32ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025629, VkglTestCase_025629_1, VkglTestCase_025629_2);

#define VkglTestCase_025630_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_025630_2 "ewclass_64_bits.rg32f_rg32ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025630, VkglTestCase_025630_1, VkglTestCase_025630_2);

#define VkglTestCase_025631_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_025631_2 "iewclass_64_bits.rg32f_rg32ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025631, VkglTestCase_025631_1, VkglTestCase_025631_2);

#define VkglTestCase_025632_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_025632_2 "lass_64_bits.rg32f_rg32ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025632, VkglTestCase_025632_1, VkglTestCase_025632_2);

#define VkglTestCase_025633_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_025633_2 "wclass_64_bits.rg32f_rg32ui.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025633, VkglTestCase_025633_1, VkglTestCase_025633_2);

#define VkglTestCase_025634_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_025634_2 "iewclass_64_bits.rg32f_rg32ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025634, VkglTestCase_025634_1, VkglTestCase_025634_2);

#define VkglTestCase_025635_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_025635_2 "iewclass_64_bits.rg32f_rg32ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025635, VkglTestCase_025635_1, VkglTestCase_025635_2);

#define VkglTestCase_025636_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_025636_2 "viewclass_64_bits.rg32f_rg32ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025636, VkglTestCase_025636_1, VkglTestCase_025636_2);

#define VkglTestCase_025637_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_025637_2 "class_64_bits.rg32f_rg32ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025637, VkglTestCase_025637_1, VkglTestCase_025637_2);

#define VkglTestCase_025638_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_025638_2 "ewclass_64_bits.rg32f_rg32ui.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025638, VkglTestCase_025638_1, VkglTestCase_025638_2);

#define VkglTestCase_025639_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_025639_2 "lass_64_bits.rg32f_rg32ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025639, VkglTestCase_025639_1, VkglTestCase_025639_2);

#define VkglTestCase_025640_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_025640_2 "lass_64_bits.rg32f_rg32ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025640, VkglTestCase_025640_1, VkglTestCase_025640_2);

#define VkglTestCase_025641_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_025641_2 "class_64_bits.rg32f_rg32ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025641, VkglTestCase_025641_1, VkglTestCase_025641_2);

#define VkglTestCase_025642_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_025642_2 "s_64_bits.rg32f_rg32ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025642, VkglTestCase_025642_1, VkglTestCase_025642_2);

#define VkglTestCase_025643_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_025643_2 "ass_64_bits.rg32f_rg32ui.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025643, VkglTestCase_025643_1, VkglTestCase_025643_2);
