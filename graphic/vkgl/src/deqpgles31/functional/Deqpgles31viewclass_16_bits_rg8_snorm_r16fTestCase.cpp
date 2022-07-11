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

#define VkglTestCase_032590_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032590_2 "wclass_16_bits.rg8_snorm_r16f.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032590, VkglTestCase_032590_1, VkglTestCase_032590_2);

#define VkglTestCase_032591_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032591_2 "wclass_16_bits.rg8_snorm_r16f.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032591, VkglTestCase_032591_1, VkglTestCase_032591_2);

#define VkglTestCase_032592_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032592_2 "ewclass_16_bits.rg8_snorm_r16f.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032592, VkglTestCase_032592_1, VkglTestCase_032592_2);

#define VkglTestCase_032593_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_032593_2 "ass_16_bits.rg8_snorm_r16f.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032593, VkglTestCase_032593_1, VkglTestCase_032593_2);

#define VkglTestCase_032594_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032594_2 "wclass_16_bits.rg8_snorm_r16f.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032594, VkglTestCase_032594_1, VkglTestCase_032594_2);

#define VkglTestCase_032595_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032595_2 "wclass_16_bits.rg8_snorm_r16f.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032595, VkglTestCase_032595_1, VkglTestCase_032595_2);

#define VkglTestCase_032596_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032596_2 "ewclass_16_bits.rg8_snorm_r16f.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032596, VkglTestCase_032596_1, VkglTestCase_032596_2);

#define VkglTestCase_032597_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_032597_2 "ass_16_bits.rg8_snorm_r16f.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032597, VkglTestCase_032597_1, VkglTestCase_032597_2);

#define VkglTestCase_032598_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032598_2 "ewclass_16_bits.rg8_snorm_r16f.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032598, VkglTestCase_032598_1, VkglTestCase_032598_2);

#define VkglTestCase_032599_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032599_2 "ewclass_16_bits.rg8_snorm_r16f.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032599, VkglTestCase_032599_1, VkglTestCase_032599_2);

#define VkglTestCase_032600_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032600_2 "iewclass_16_bits.rg8_snorm_r16f.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032600, VkglTestCase_032600_1, VkglTestCase_032600_2);

#define VkglTestCase_032601_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_032601_2 "lass_16_bits.rg8_snorm_r16f.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032601, VkglTestCase_032601_1, VkglTestCase_032601_2);

#define VkglTestCase_032602_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_032602_2 "ass_16_bits.rg8_snorm_r16f.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032602, VkglTestCase_032602_1, VkglTestCase_032602_2);

#define VkglTestCase_032603_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_032603_2 "ass_16_bits.rg8_snorm_r16f.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032603, VkglTestCase_032603_1, VkglTestCase_032603_2);

#define VkglTestCase_032604_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_032604_2 "lass_16_bits.rg8_snorm_r16f.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032604, VkglTestCase_032604_1, VkglTestCase_032604_2);

#define VkglTestCase_032605_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_032605_2 "_16_bits.rg8_snorm_r16f.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032605, VkglTestCase_032605_1, VkglTestCase_032605_2);
