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
#include "../ActsDeqpgles310028TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_027648_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_027648_2 "iewclass_32_bits.rg16i_r32f.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027648, VkglTestCase_027648_1, VkglTestCase_027648_2);

#define VkglTestCase_027649_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_027649_2 "iewclass_32_bits.rg16i_r32f.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027649, VkglTestCase_027649_1, VkglTestCase_027649_2);

#define VkglTestCase_027650_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_027650_2 "viewclass_32_bits.rg16i_r32f.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027650, VkglTestCase_027650_1, VkglTestCase_027650_2);

#define VkglTestCase_027651_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027651_2 "class_32_bits.rg16i_r32f.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027651, VkglTestCase_027651_1, VkglTestCase_027651_2);

#define VkglTestCase_027652_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_027652_2 "iewclass_32_bits.rg16i_r32f.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027652, VkglTestCase_027652_1, VkglTestCase_027652_2);

#define VkglTestCase_027653_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_027653_2 "iewclass_32_bits.rg16i_r32f.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027653, VkglTestCase_027653_1, VkglTestCase_027653_2);

#define VkglTestCase_027654_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_027654_2 "viewclass_32_bits.rg16i_r32f.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027654, VkglTestCase_027654_1, VkglTestCase_027654_2);

#define VkglTestCase_027655_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027655_2 "class_32_bits.rg16i_r32f.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027655, VkglTestCase_027655_1, VkglTestCase_027655_2);

#define VkglTestCase_027656_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_027656_2 "viewclass_32_bits.rg16i_r32f.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027656, VkglTestCase_027656_1, VkglTestCase_027656_2);

#define VkglTestCase_027657_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_027657_2 "viewclass_32_bits.rg16i_r32f.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027657, VkglTestCase_027657_1, VkglTestCase_027657_2);

#define VkglTestCase_027658_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_027658_2 ".viewclass_32_bits.rg16i_r32f.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027658, VkglTestCase_027658_1, VkglTestCase_027658_2);

#define VkglTestCase_027659_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027659_2 "wclass_32_bits.rg16i_r32f.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027659, VkglTestCase_027659_1, VkglTestCase_027659_2);

#define VkglTestCase_027660_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027660_2 "class_32_bits.rg16i_r32f.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027660, VkglTestCase_027660_1, VkglTestCase_027660_2);

#define VkglTestCase_027661_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027661_2 "class_32_bits.rg16i_r32f.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027661, VkglTestCase_027661_1, VkglTestCase_027661_2);

#define VkglTestCase_027662_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027662_2 "wclass_32_bits.rg16i_r32f.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027662, VkglTestCase_027662_1, VkglTestCase_027662_2);

#define VkglTestCase_027663_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_027663_2 "ss_32_bits.rg16i_r32f.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027663, VkglTestCase_027663_1, VkglTestCase_027663_2);

#define VkglTestCase_027664_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_027664_2 "ewclass_32_bits.rg16i_r32f.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027664, VkglTestCase_027664_1, VkglTestCase_027664_2);

#define VkglTestCase_027665_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_027665_2 "ewclass_32_bits.rg16i_r32f.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027665, VkglTestCase_027665_1, VkglTestCase_027665_2);

#define VkglTestCase_027666_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_027666_2 "iewclass_32_bits.rg16i_r32f.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027666, VkglTestCase_027666_1, VkglTestCase_027666_2);

#define VkglTestCase_027667_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_027667_2 "lass_32_bits.rg16i_r32f.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027667, VkglTestCase_027667_1, VkglTestCase_027667_2);
