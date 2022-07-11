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

#define VkglTestCase_026484_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_026484_2 "viewclass_32_bits.r32f_r32f.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026484, VkglTestCase_026484_1, VkglTestCase_026484_2);

#define VkglTestCase_026485_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_026485_2 "viewclass_32_bits.r32f_r32f.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026485, VkglTestCase_026485_1, VkglTestCase_026485_2);

#define VkglTestCase_026486_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_026486_2 ".viewclass_32_bits.r32f_r32f.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026486, VkglTestCase_026486_1, VkglTestCase_026486_2);

#define VkglTestCase_026487_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026487_2 "wclass_32_bits.r32f_r32f.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026487, VkglTestCase_026487_1, VkglTestCase_026487_2);

#define VkglTestCase_026488_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_026488_2 "viewclass_32_bits.r32f_r32f.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026488, VkglTestCase_026488_1, VkglTestCase_026488_2);

#define VkglTestCase_026489_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_026489_2 "viewclass_32_bits.r32f_r32f.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026489, VkglTestCase_026489_1, VkglTestCase_026489_2);

#define VkglTestCase_026490_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_026490_2 ".viewclass_32_bits.r32f_r32f.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026490, VkglTestCase_026490_1, VkglTestCase_026490_2);

#define VkglTestCase_026491_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026491_2 "wclass_32_bits.r32f_r32f.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026491, VkglTestCase_026491_1, VkglTestCase_026491_2);

#define VkglTestCase_026492_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_026492_2 ".viewclass_32_bits.r32f_r32f.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026492, VkglTestCase_026492_1, VkglTestCase_026492_2);

#define VkglTestCase_026493_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_026493_2 ".viewclass_32_bits.r32f_r32f.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026493, VkglTestCase_026493_1, VkglTestCase_026493_2);

#define VkglTestCase_026494_1 "dEQP-GLES31.functional.copy_image.non_compresse"
#define VkglTestCase_026494_2 "d.viewclass_32_bits.r32f_r32f.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026494, VkglTestCase_026494_1, VkglTestCase_026494_2);

#define VkglTestCase_026495_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026495_2 "ewclass_32_bits.r32f_r32f.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026495, VkglTestCase_026495_1, VkglTestCase_026495_2);

#define VkglTestCase_026496_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026496_2 "wclass_32_bits.r32f_r32f.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026496, VkglTestCase_026496_1, VkglTestCase_026496_2);

#define VkglTestCase_026497_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026497_2 "wclass_32_bits.r32f_r32f.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026497, VkglTestCase_026497_1, VkglTestCase_026497_2);

#define VkglTestCase_026498_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026498_2 "ewclass_32_bits.r32f_r32f.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026498, VkglTestCase_026498_1, VkglTestCase_026498_2);

#define VkglTestCase_026499_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_026499_2 "ass_32_bits.r32f_r32f.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026499, VkglTestCase_026499_1, VkglTestCase_026499_2);
