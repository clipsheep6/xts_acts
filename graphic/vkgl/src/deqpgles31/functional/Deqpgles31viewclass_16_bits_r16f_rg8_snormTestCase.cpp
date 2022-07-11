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
#include "../ActsDeqpgles310032TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_031749_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031749_2 "wclass_16_bits.r16f_rg8_snorm.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031749, VkglTestCase_031749_1, VkglTestCase_031749_2);

#define VkglTestCase_031750_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031750_2 "wclass_16_bits.r16f_rg8_snorm.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031750, VkglTestCase_031750_1, VkglTestCase_031750_2);

#define VkglTestCase_031751_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031751_2 "ewclass_16_bits.r16f_rg8_snorm.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031751, VkglTestCase_031751_1, VkglTestCase_031751_2);

#define VkglTestCase_031752_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_031752_2 "ass_16_bits.r16f_rg8_snorm.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031752, VkglTestCase_031752_1, VkglTestCase_031752_2);

#define VkglTestCase_031753_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031753_2 "wclass_16_bits.r16f_rg8_snorm.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031753, VkglTestCase_031753_1, VkglTestCase_031753_2);

#define VkglTestCase_031754_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031754_2 "wclass_16_bits.r16f_rg8_snorm.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031754, VkglTestCase_031754_1, VkglTestCase_031754_2);

#define VkglTestCase_031755_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031755_2 "ewclass_16_bits.r16f_rg8_snorm.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031755, VkglTestCase_031755_1, VkglTestCase_031755_2);

#define VkglTestCase_031756_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_031756_2 "ass_16_bits.r16f_rg8_snorm.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031756, VkglTestCase_031756_1, VkglTestCase_031756_2);

#define VkglTestCase_031757_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031757_2 "ewclass_16_bits.r16f_rg8_snorm.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031757, VkglTestCase_031757_1, VkglTestCase_031757_2);

#define VkglTestCase_031758_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031758_2 "ewclass_16_bits.r16f_rg8_snorm.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031758, VkglTestCase_031758_1, VkglTestCase_031758_2);

#define VkglTestCase_031759_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031759_2 "iewclass_16_bits.r16f_rg8_snorm.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031759, VkglTestCase_031759_1, VkglTestCase_031759_2);

#define VkglTestCase_031760_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_031760_2 "lass_16_bits.r16f_rg8_snorm.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031760, VkglTestCase_031760_1, VkglTestCase_031760_2);

#define VkglTestCase_031761_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_031761_2 "ass_16_bits.r16f_rg8_snorm.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031761, VkglTestCase_031761_1, VkglTestCase_031761_2);

#define VkglTestCase_031762_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_031762_2 "ass_16_bits.r16f_rg8_snorm.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031762, VkglTestCase_031762_1, VkglTestCase_031762_2);

#define VkglTestCase_031763_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_031763_2 "lass_16_bits.r16f_rg8_snorm.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031763, VkglTestCase_031763_1, VkglTestCase_031763_2);

#define VkglTestCase_031764_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_031764_2 "_16_bits.r16f_rg8_snorm.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031764, VkglTestCase_031764_1, VkglTestCase_031764_2);
