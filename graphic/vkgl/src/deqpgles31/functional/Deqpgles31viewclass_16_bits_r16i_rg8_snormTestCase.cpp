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

#define VkglTestCase_031910_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031910_2 "wclass_16_bits.r16i_rg8_snorm.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031910, VkglTestCase_031910_1, VkglTestCase_031910_2);

#define VkglTestCase_031911_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031911_2 "wclass_16_bits.r16i_rg8_snorm.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031911, VkglTestCase_031911_1, VkglTestCase_031911_2);

#define VkglTestCase_031912_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031912_2 "ewclass_16_bits.r16i_rg8_snorm.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031912, VkglTestCase_031912_1, VkglTestCase_031912_2);

#define VkglTestCase_031913_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_031913_2 "ass_16_bits.r16i_rg8_snorm.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031913, VkglTestCase_031913_1, VkglTestCase_031913_2);

#define VkglTestCase_031914_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031914_2 "wclass_16_bits.r16i_rg8_snorm.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031914, VkglTestCase_031914_1, VkglTestCase_031914_2);

#define VkglTestCase_031915_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031915_2 "wclass_16_bits.r16i_rg8_snorm.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031915, VkglTestCase_031915_1, VkglTestCase_031915_2);

#define VkglTestCase_031916_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031916_2 "ewclass_16_bits.r16i_rg8_snorm.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031916, VkglTestCase_031916_1, VkglTestCase_031916_2);

#define VkglTestCase_031917_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_031917_2 "ass_16_bits.r16i_rg8_snorm.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031917, VkglTestCase_031917_1, VkglTestCase_031917_2);

#define VkglTestCase_031918_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031918_2 "ewclass_16_bits.r16i_rg8_snorm.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031918, VkglTestCase_031918_1, VkglTestCase_031918_2);

#define VkglTestCase_031919_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031919_2 "ewclass_16_bits.r16i_rg8_snorm.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031919, VkglTestCase_031919_1, VkglTestCase_031919_2);

#define VkglTestCase_031920_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031920_2 "iewclass_16_bits.r16i_rg8_snorm.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031920, VkglTestCase_031920_1, VkglTestCase_031920_2);

#define VkglTestCase_031921_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_031921_2 "lass_16_bits.r16i_rg8_snorm.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031921, VkglTestCase_031921_1, VkglTestCase_031921_2);

#define VkglTestCase_031922_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_031922_2 "ass_16_bits.r16i_rg8_snorm.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031922, VkglTestCase_031922_1, VkglTestCase_031922_2);

#define VkglTestCase_031923_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_031923_2 "ass_16_bits.r16i_rg8_snorm.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031923, VkglTestCase_031923_1, VkglTestCase_031923_2);

#define VkglTestCase_031924_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_031924_2 "lass_16_bits.r16i_rg8_snorm.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031924, VkglTestCase_031924_1, VkglTestCase_031924_2);

#define VkglTestCase_031925_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_031925_2 "_16_bits.r16i_rg8_snorm.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031925, VkglTestCase_031925_1, VkglTestCase_031925_2);

#define VkglTestCase_031926_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031926_2 "class_16_bits.r16i_rg8_snorm.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031926, VkglTestCase_031926_1, VkglTestCase_031926_2);

#define VkglTestCase_031927_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031927_2 "class_16_bits.r16i_rg8_snorm.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031927, VkglTestCase_031927_1, VkglTestCase_031927_2);

#define VkglTestCase_031928_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031928_2 "wclass_16_bits.r16i_rg8_snorm.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031928, VkglTestCase_031928_1, VkglTestCase_031928_2);

#define VkglTestCase_031929_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_031929_2 "ss_16_bits.r16i_rg8_snorm.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031929, VkglTestCase_031929_1, VkglTestCase_031929_2);
