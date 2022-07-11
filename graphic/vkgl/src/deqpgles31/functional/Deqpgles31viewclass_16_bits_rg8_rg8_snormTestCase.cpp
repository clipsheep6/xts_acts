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

#define VkglTestCase_032240_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032240_2 "ewclass_16_bits.rg8_rg8_snorm.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032240, VkglTestCase_032240_1, VkglTestCase_032240_2);

#define VkglTestCase_032241_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032241_2 "ewclass_16_bits.rg8_rg8_snorm.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032241, VkglTestCase_032241_1, VkglTestCase_032241_2);

#define VkglTestCase_032242_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032242_2 "iewclass_16_bits.rg8_rg8_snorm.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032242, VkglTestCase_032242_1, VkglTestCase_032242_2);

#define VkglTestCase_032243_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_032243_2 "lass_16_bits.rg8_rg8_snorm.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032243, VkglTestCase_032243_1, VkglTestCase_032243_2);

#define VkglTestCase_032244_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032244_2 "ewclass_16_bits.rg8_rg8_snorm.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032244, VkglTestCase_032244_1, VkglTestCase_032244_2);

#define VkglTestCase_032245_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032245_2 "ewclass_16_bits.rg8_rg8_snorm.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032245, VkglTestCase_032245_1, VkglTestCase_032245_2);

#define VkglTestCase_032246_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032246_2 "iewclass_16_bits.rg8_rg8_snorm.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032246, VkglTestCase_032246_1, VkglTestCase_032246_2);

#define VkglTestCase_032247_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_032247_2 "lass_16_bits.rg8_rg8_snorm.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032247, VkglTestCase_032247_1, VkglTestCase_032247_2);

#define VkglTestCase_032248_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032248_2 "iewclass_16_bits.rg8_rg8_snorm.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032248, VkglTestCase_032248_1, VkglTestCase_032248_2);

#define VkglTestCase_032249_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032249_2 "iewclass_16_bits.rg8_rg8_snorm.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032249, VkglTestCase_032249_1, VkglTestCase_032249_2);

#define VkglTestCase_032250_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032250_2 "viewclass_16_bits.rg8_rg8_snorm.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032250, VkglTestCase_032250_1, VkglTestCase_032250_2);

#define VkglTestCase_032251_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_032251_2 "class_16_bits.rg8_rg8_snorm.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032251, VkglTestCase_032251_1, VkglTestCase_032251_2);

#define VkglTestCase_032252_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_032252_2 "lass_16_bits.rg8_rg8_snorm.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032252, VkglTestCase_032252_1, VkglTestCase_032252_2);

#define VkglTestCase_032253_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_032253_2 "lass_16_bits.rg8_rg8_snorm.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032253, VkglTestCase_032253_1, VkglTestCase_032253_2);

#define VkglTestCase_032254_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_032254_2 "class_16_bits.rg8_rg8_snorm.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032254, VkglTestCase_032254_1, VkglTestCase_032254_2);

#define VkglTestCase_032255_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_032255_2 "s_16_bits.rg8_rg8_snorm.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032255, VkglTestCase_032255_1, VkglTestCase_032255_2);

#define VkglTestCase_032256_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_032256_2 "class_16_bits.rg8_rg8_snorm.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032256, VkglTestCase_032256_1, VkglTestCase_032256_2);

#define VkglTestCase_032257_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_032257_2 "class_16_bits.rg8_rg8_snorm.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032257, VkglTestCase_032257_1, VkglTestCase_032257_2);

#define VkglTestCase_032258_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032258_2 "wclass_16_bits.rg8_rg8_snorm.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032258, VkglTestCase_032258_1, VkglTestCase_032258_2);

#define VkglTestCase_032259_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_032259_2 "ss_16_bits.rg8_rg8_snorm.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032259, VkglTestCase_032259_1, VkglTestCase_032259_2);
