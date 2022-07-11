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

#define VkglTestCase_025754_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_025754_2 "ewclass_64_bits.rg32i_rgba16f.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025754, VkglTestCase_025754_1, VkglTestCase_025754_2);

#define VkglTestCase_025755_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_025755_2 "ewclass_64_bits.rg32i_rgba16f.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025755, VkglTestCase_025755_1, VkglTestCase_025755_2);

#define VkglTestCase_025756_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_025756_2 "iewclass_64_bits.rg32i_rgba16f.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025756, VkglTestCase_025756_1, VkglTestCase_025756_2);

#define VkglTestCase_025757_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_025757_2 "lass_64_bits.rg32i_rgba16f.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025757, VkglTestCase_025757_1, VkglTestCase_025757_2);

#define VkglTestCase_025758_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_025758_2 "ewclass_64_bits.rg32i_rgba16f.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025758, VkglTestCase_025758_1, VkglTestCase_025758_2);

#define VkglTestCase_025759_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_025759_2 "ewclass_64_bits.rg32i_rgba16f.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025759, VkglTestCase_025759_1, VkglTestCase_025759_2);

#define VkglTestCase_025760_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_025760_2 "iewclass_64_bits.rg32i_rgba16f.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025760, VkglTestCase_025760_1, VkglTestCase_025760_2);

#define VkglTestCase_025761_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_025761_2 "lass_64_bits.rg32i_rgba16f.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025761, VkglTestCase_025761_1, VkglTestCase_025761_2);

#define VkglTestCase_025762_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_025762_2 "iewclass_64_bits.rg32i_rgba16f.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025762, VkglTestCase_025762_1, VkglTestCase_025762_2);

#define VkglTestCase_025763_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_025763_2 "iewclass_64_bits.rg32i_rgba16f.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025763, VkglTestCase_025763_1, VkglTestCase_025763_2);

#define VkglTestCase_025764_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_025764_2 "viewclass_64_bits.rg32i_rgba16f.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025764, VkglTestCase_025764_1, VkglTestCase_025764_2);

#define VkglTestCase_025765_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_025765_2 "class_64_bits.rg32i_rgba16f.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025765, VkglTestCase_025765_1, VkglTestCase_025765_2);

#define VkglTestCase_025766_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_025766_2 "lass_64_bits.rg32i_rgba16f.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025766, VkglTestCase_025766_1, VkglTestCase_025766_2);

#define VkglTestCase_025767_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_025767_2 "lass_64_bits.rg32i_rgba16f.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025767, VkglTestCase_025767_1, VkglTestCase_025767_2);

#define VkglTestCase_025768_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_025768_2 "class_64_bits.rg32i_rgba16f.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025768, VkglTestCase_025768_1, VkglTestCase_025768_2);

#define VkglTestCase_025769_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_025769_2 "s_64_bits.rg32i_rgba16f.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025769, VkglTestCase_025769_1, VkglTestCase_025769_2);

#define VkglTestCase_025770_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_025770_2 "class_64_bits.rg32i_rgba16f.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025770, VkglTestCase_025770_1, VkglTestCase_025770_2);

#define VkglTestCase_025771_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_025771_2 "class_64_bits.rg32i_rgba16f.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025771, VkglTestCase_025771_1, VkglTestCase_025771_2);

#define VkglTestCase_025772_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_025772_2 "wclass_64_bits.rg32i_rgba16f.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025772, VkglTestCase_025772_1, VkglTestCase_025772_2);

#define VkglTestCase_025773_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_025773_2 "ss_64_bits.rg32i_rgba16f.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025773, VkglTestCase_025773_1, VkglTestCase_025773_2);
