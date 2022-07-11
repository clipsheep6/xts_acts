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

#define VkglTestCase_032626_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032626_2 "wclass_16_bits.rg8_snorm_r16ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032626, VkglTestCase_032626_1, VkglTestCase_032626_2);

#define VkglTestCase_032627_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032627_2 "wclass_16_bits.rg8_snorm_r16ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032627, VkglTestCase_032627_1, VkglTestCase_032627_2);

#define VkglTestCase_032628_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032628_2 "ewclass_16_bits.rg8_snorm_r16ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032628, VkglTestCase_032628_1, VkglTestCase_032628_2);

#define VkglTestCase_032629_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_032629_2 "ass_16_bits.rg8_snorm_r16ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032629, VkglTestCase_032629_1, VkglTestCase_032629_2);

#define VkglTestCase_032630_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_032630_2 "lass_16_bits.rg8_snorm_r16ui.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032630, VkglTestCase_032630_1, VkglTestCase_032630_2);

#define VkglTestCase_032631_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032631_2 "wclass_16_bits.rg8_snorm_r16ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032631, VkglTestCase_032631_1, VkglTestCase_032631_2);

#define VkglTestCase_032632_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032632_2 "wclass_16_bits.rg8_snorm_r16ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032632, VkglTestCase_032632_1, VkglTestCase_032632_2);

#define VkglTestCase_032633_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032633_2 "ewclass_16_bits.rg8_snorm_r16ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032633, VkglTestCase_032633_1, VkglTestCase_032633_2);

#define VkglTestCase_032634_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_032634_2 "ass_16_bits.rg8_snorm_r16ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032634, VkglTestCase_032634_1, VkglTestCase_032634_2);

#define VkglTestCase_032635_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_032635_2 "lass_16_bits.rg8_snorm_r16ui.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032635, VkglTestCase_032635_1, VkglTestCase_032635_2);

#define VkglTestCase_032636_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032636_2 "ewclass_16_bits.rg8_snorm_r16ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032636, VkglTestCase_032636_1, VkglTestCase_032636_2);

#define VkglTestCase_032637_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032637_2 "ewclass_16_bits.rg8_snorm_r16ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032637, VkglTestCase_032637_1, VkglTestCase_032637_2);

#define VkglTestCase_032638_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032638_2 "iewclass_16_bits.rg8_snorm_r16ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032638, VkglTestCase_032638_1, VkglTestCase_032638_2);

#define VkglTestCase_032639_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_032639_2 "lass_16_bits.rg8_snorm_r16ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032639, VkglTestCase_032639_1, VkglTestCase_032639_2);

#define VkglTestCase_032640_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_032640_2 "class_16_bits.rg8_snorm_r16ui.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032640, VkglTestCase_032640_1, VkglTestCase_032640_2);

#define VkglTestCase_032641_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_032641_2 "ass_16_bits.rg8_snorm_r16ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032641, VkglTestCase_032641_1, VkglTestCase_032641_2);

#define VkglTestCase_032642_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_032642_2 "ass_16_bits.rg8_snorm_r16ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032642, VkglTestCase_032642_1, VkglTestCase_032642_2);

#define VkglTestCase_032643_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_032643_2 "lass_16_bits.rg8_snorm_r16ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032643, VkglTestCase_032643_1, VkglTestCase_032643_2);

#define VkglTestCase_032644_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_032644_2 "_16_bits.rg8_snorm_r16ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032644, VkglTestCase_032644_1, VkglTestCase_032644_2);

#define VkglTestCase_032645_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_032645_2 "s_16_bits.rg8_snorm_r16ui.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032645, VkglTestCase_032645_1, VkglTestCase_032645_2);
