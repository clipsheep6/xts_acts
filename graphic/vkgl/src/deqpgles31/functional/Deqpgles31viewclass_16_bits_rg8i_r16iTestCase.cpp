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

#define VkglTestCase_032280_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032280_2 "viewclass_16_bits.rg8i_r16i.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032280, VkglTestCase_032280_1, VkglTestCase_032280_2);

#define VkglTestCase_032281_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032281_2 "viewclass_16_bits.rg8i_r16i.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032281, VkglTestCase_032281_1, VkglTestCase_032281_2);

#define VkglTestCase_032282_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_032282_2 ".viewclass_16_bits.rg8i_r16i.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032282, VkglTestCase_032282_1, VkglTestCase_032282_2);

#define VkglTestCase_032283_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032283_2 "wclass_16_bits.rg8i_r16i.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032283, VkglTestCase_032283_1, VkglTestCase_032283_2);

#define VkglTestCase_032284_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032284_2 "ewclass_16_bits.rg8i_r16i.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032284, VkglTestCase_032284_1, VkglTestCase_032284_2);

#define VkglTestCase_032285_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032285_2 "viewclass_16_bits.rg8i_r16i.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032285, VkglTestCase_032285_1, VkglTestCase_032285_2);

#define VkglTestCase_032286_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032286_2 "viewclass_16_bits.rg8i_r16i.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032286, VkglTestCase_032286_1, VkglTestCase_032286_2);

#define VkglTestCase_032287_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_032287_2 ".viewclass_16_bits.rg8i_r16i.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032287, VkglTestCase_032287_1, VkglTestCase_032287_2);

#define VkglTestCase_032288_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032288_2 "wclass_16_bits.rg8i_r16i.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032288, VkglTestCase_032288_1, VkglTestCase_032288_2);

#define VkglTestCase_032289_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032289_2 "ewclass_16_bits.rg8i_r16i.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032289, VkglTestCase_032289_1, VkglTestCase_032289_2);

#define VkglTestCase_032290_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_032290_2 ".viewclass_16_bits.rg8i_r16i.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032290, VkglTestCase_032290_1, VkglTestCase_032290_2);

#define VkglTestCase_032291_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_032291_2 ".viewclass_16_bits.rg8i_r16i.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032291, VkglTestCase_032291_1, VkglTestCase_032291_2);

#define VkglTestCase_032292_1 "dEQP-GLES31.functional.copy_image.non_compresse"
#define VkglTestCase_032292_2 "d.viewclass_16_bits.rg8i_r16i.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032292, VkglTestCase_032292_1, VkglTestCase_032292_2);

#define VkglTestCase_032293_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032293_2 "ewclass_16_bits.rg8i_r16i.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032293, VkglTestCase_032293_1, VkglTestCase_032293_2);

#define VkglTestCase_032294_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032294_2 "iewclass_16_bits.rg8i_r16i.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032294, VkglTestCase_032294_1, VkglTestCase_032294_2);

#define VkglTestCase_032295_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032295_2 "wclass_16_bits.rg8i_r16i.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032295, VkglTestCase_032295_1, VkglTestCase_032295_2);

#define VkglTestCase_032296_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032296_2 "wclass_16_bits.rg8i_r16i.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032296, VkglTestCase_032296_1, VkglTestCase_032296_2);

#define VkglTestCase_032297_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032297_2 "ewclass_16_bits.rg8i_r16i.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032297, VkglTestCase_032297_1, VkglTestCase_032297_2);

#define VkglTestCase_032298_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_032298_2 "ass_16_bits.rg8i_r16i.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032298, VkglTestCase_032298_1, VkglTestCase_032298_2);

#define VkglTestCase_032299_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_032299_2 "lass_16_bits.rg8i_r16i.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032299, VkglTestCase_032299_1, VkglTestCase_032299_2);

#define VkglTestCase_032300_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032300_2 "ewclass_16_bits.rg8i_r16i.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032300, VkglTestCase_032300_1, VkglTestCase_032300_2);

#define VkglTestCase_032301_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032301_2 "ewclass_16_bits.rg8i_r16i.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032301, VkglTestCase_032301_1, VkglTestCase_032301_2);

#define VkglTestCase_032302_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032302_2 "iewclass_16_bits.rg8i_r16i.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032302, VkglTestCase_032302_1, VkglTestCase_032302_2);

#define VkglTestCase_032303_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_032303_2 "lass_16_bits.rg8i_r16i.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032303, VkglTestCase_032303_1, VkglTestCase_032303_2);

#define VkglTestCase_032304_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032304_2 "wclass_16_bits.rg8i_r16i.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032304, VkglTestCase_032304_1, VkglTestCase_032304_2);
