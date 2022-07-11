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

#define VkglTestCase_026620_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026620_2 "ewclass_32_bits.r32f_rgba8ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026620, VkglTestCase_026620_1, VkglTestCase_026620_2);

#define VkglTestCase_026621_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026621_2 "ewclass_32_bits.r32f_rgba8ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026621, VkglTestCase_026621_1, VkglTestCase_026621_2);

#define VkglTestCase_026622_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_026622_2 "iewclass_32_bits.r32f_rgba8ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026622, VkglTestCase_026622_1, VkglTestCase_026622_2);

#define VkglTestCase_026623_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_026623_2 "lass_32_bits.r32f_rgba8ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026623, VkglTestCase_026623_1, VkglTestCase_026623_2);

#define VkglTestCase_026624_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026624_2 "wclass_32_bits.r32f_rgba8ui.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026624, VkglTestCase_026624_1, VkglTestCase_026624_2);

#define VkglTestCase_026625_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026625_2 "ewclass_32_bits.r32f_rgba8ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026625, VkglTestCase_026625_1, VkglTestCase_026625_2);

#define VkglTestCase_026626_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026626_2 "ewclass_32_bits.r32f_rgba8ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026626, VkglTestCase_026626_1, VkglTestCase_026626_2);

#define VkglTestCase_026627_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_026627_2 "iewclass_32_bits.r32f_rgba8ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026627, VkglTestCase_026627_1, VkglTestCase_026627_2);

#define VkglTestCase_026628_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_026628_2 "lass_32_bits.r32f_rgba8ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026628, VkglTestCase_026628_1, VkglTestCase_026628_2);

#define VkglTestCase_026629_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026629_2 "wclass_32_bits.r32f_rgba8ui.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026629, VkglTestCase_026629_1, VkglTestCase_026629_2);

#define VkglTestCase_026630_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_026630_2 "iewclass_32_bits.r32f_rgba8ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026630, VkglTestCase_026630_1, VkglTestCase_026630_2);

#define VkglTestCase_026631_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_026631_2 "iewclass_32_bits.r32f_rgba8ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026631, VkglTestCase_026631_1, VkglTestCase_026631_2);

#define VkglTestCase_026632_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_026632_2 "viewclass_32_bits.r32f_rgba8ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026632, VkglTestCase_026632_1, VkglTestCase_026632_2);

#define VkglTestCase_026633_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026633_2 "class_32_bits.r32f_rgba8ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026633, VkglTestCase_026633_1, VkglTestCase_026633_2);

#define VkglTestCase_026634_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026634_2 "ewclass_32_bits.r32f_rgba8ui.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026634, VkglTestCase_026634_1, VkglTestCase_026634_2);

#define VkglTestCase_026635_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_026635_2 "lass_32_bits.r32f_rgba8ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026635, VkglTestCase_026635_1, VkglTestCase_026635_2);

#define VkglTestCase_026636_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_026636_2 "lass_32_bits.r32f_rgba8ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026636, VkglTestCase_026636_1, VkglTestCase_026636_2);

#define VkglTestCase_026637_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026637_2 "class_32_bits.r32f_rgba8ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026637, VkglTestCase_026637_1, VkglTestCase_026637_2);

#define VkglTestCase_026638_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_026638_2 "s_32_bits.r32f_rgba8ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026638, VkglTestCase_026638_1, VkglTestCase_026638_2);

#define VkglTestCase_026639_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_026639_2 "ass_32_bits.r32f_rgba8ui.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026639, VkglTestCase_026639_1, VkglTestCase_026639_2);
