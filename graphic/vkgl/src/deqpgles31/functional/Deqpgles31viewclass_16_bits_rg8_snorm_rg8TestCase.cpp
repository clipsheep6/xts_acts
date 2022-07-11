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
#include "../ActsDeqpgles310033TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_032646_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032646_2 "ewclass_16_bits.rg8_snorm_rg8.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032646, VkglTestCase_032646_1, VkglTestCase_032646_2);

#define VkglTestCase_032647_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032647_2 "ewclass_16_bits.rg8_snorm_rg8.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032647, VkglTestCase_032647_1, VkglTestCase_032647_2);

#define VkglTestCase_032648_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032648_2 "iewclass_16_bits.rg8_snorm_rg8.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032648, VkglTestCase_032648_1, VkglTestCase_032648_2);

#define VkglTestCase_032649_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_032649_2 "lass_16_bits.rg8_snorm_rg8.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032649, VkglTestCase_032649_1, VkglTestCase_032649_2);

#define VkglTestCase_032650_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_032650_2 "class_16_bits.rg8_snorm_rg8.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032650, VkglTestCase_032650_1, VkglTestCase_032650_2);

#define VkglTestCase_032651_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032651_2 "ewclass_16_bits.rg8_snorm_rg8.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032651, VkglTestCase_032651_1, VkglTestCase_032651_2);

#define VkglTestCase_032652_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032652_2 "ewclass_16_bits.rg8_snorm_rg8.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032652, VkglTestCase_032652_1, VkglTestCase_032652_2);

#define VkglTestCase_032653_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032653_2 "iewclass_16_bits.rg8_snorm_rg8.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032653, VkglTestCase_032653_1, VkglTestCase_032653_2);

#define VkglTestCase_032654_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_032654_2 "lass_16_bits.rg8_snorm_rg8.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032654, VkglTestCase_032654_1, VkglTestCase_032654_2);

#define VkglTestCase_032655_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_032655_2 "class_16_bits.rg8_snorm_rg8.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032655, VkglTestCase_032655_1, VkglTestCase_032655_2);

#define VkglTestCase_032656_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032656_2 "iewclass_16_bits.rg8_snorm_rg8.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032656, VkglTestCase_032656_1, VkglTestCase_032656_2);

#define VkglTestCase_032657_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032657_2 "iewclass_16_bits.rg8_snorm_rg8.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032657, VkglTestCase_032657_1, VkglTestCase_032657_2);

#define VkglTestCase_032658_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032658_2 "viewclass_16_bits.rg8_snorm_rg8.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032658, VkglTestCase_032658_1, VkglTestCase_032658_2);

#define VkglTestCase_032659_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_032659_2 "class_16_bits.rg8_snorm_rg8.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032659, VkglTestCase_032659_1, VkglTestCase_032659_2);

#define VkglTestCase_032660_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032660_2 "wclass_16_bits.rg8_snorm_rg8.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032660, VkglTestCase_032660_1, VkglTestCase_032660_2);

#define VkglTestCase_032661_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_032661_2 "lass_16_bits.rg8_snorm_rg8.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032661, VkglTestCase_032661_1, VkglTestCase_032661_2);

#define VkglTestCase_032662_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_032662_2 "lass_16_bits.rg8_snorm_rg8.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032662, VkglTestCase_032662_1, VkglTestCase_032662_2);

#define VkglTestCase_032663_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_032663_2 "class_16_bits.rg8_snorm_rg8.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032663, VkglTestCase_032663_1, VkglTestCase_032663_2);

#define VkglTestCase_032664_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_032664_2 "s_16_bits.rg8_snorm_rg8.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032664, VkglTestCase_032664_1, VkglTestCase_032664_2);

#define VkglTestCase_032665_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_032665_2 "ss_16_bits.rg8_snorm_rg8.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032665, VkglTestCase_032665_1, VkglTestCase_032665_2);
