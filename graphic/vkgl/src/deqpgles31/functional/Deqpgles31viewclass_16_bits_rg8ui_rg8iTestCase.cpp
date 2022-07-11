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

#define VkglTestCase_032520_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032520_2 "iewclass_16_bits.rg8ui_rg8i.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032520, VkglTestCase_032520_1, VkglTestCase_032520_2);

#define VkglTestCase_032521_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032521_2 "iewclass_16_bits.rg8ui_rg8i.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032521, VkglTestCase_032521_1, VkglTestCase_032521_2);

#define VkglTestCase_032522_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032522_2 "viewclass_16_bits.rg8ui_rg8i.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032522, VkglTestCase_032522_1, VkglTestCase_032522_2);

#define VkglTestCase_032523_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_032523_2 "class_16_bits.rg8ui_rg8i.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032523, VkglTestCase_032523_1, VkglTestCase_032523_2);

#define VkglTestCase_032524_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032524_2 "ewclass_16_bits.rg8ui_rg8i.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032524, VkglTestCase_032524_1, VkglTestCase_032524_2);

#define VkglTestCase_032525_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032525_2 "iewclass_16_bits.rg8ui_rg8i.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032525, VkglTestCase_032525_1, VkglTestCase_032525_2);

#define VkglTestCase_032526_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032526_2 "iewclass_16_bits.rg8ui_rg8i.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032526, VkglTestCase_032526_1, VkglTestCase_032526_2);

#define VkglTestCase_032527_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032527_2 "viewclass_16_bits.rg8ui_rg8i.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032527, VkglTestCase_032527_1, VkglTestCase_032527_2);

#define VkglTestCase_032528_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_032528_2 "class_16_bits.rg8ui_rg8i.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032528, VkglTestCase_032528_1, VkglTestCase_032528_2);

#define VkglTestCase_032529_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032529_2 "ewclass_16_bits.rg8ui_rg8i.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032529, VkglTestCase_032529_1, VkglTestCase_032529_2);

#define VkglTestCase_032530_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032530_2 "viewclass_16_bits.rg8ui_rg8i.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032530, VkglTestCase_032530_1, VkglTestCase_032530_2);

#define VkglTestCase_032531_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032531_2 "viewclass_16_bits.rg8ui_rg8i.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032531, VkglTestCase_032531_1, VkglTestCase_032531_2);

#define VkglTestCase_032532_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_032532_2 ".viewclass_16_bits.rg8ui_rg8i.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032532, VkglTestCase_032532_1, VkglTestCase_032532_2);

#define VkglTestCase_032533_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032533_2 "wclass_16_bits.rg8ui_rg8i.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032533, VkglTestCase_032533_1, VkglTestCase_032533_2);

#define VkglTestCase_032534_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032534_2 "iewclass_16_bits.rg8ui_rg8i.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032534, VkglTestCase_032534_1, VkglTestCase_032534_2);

#define VkglTestCase_032535_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_032535_2 "class_16_bits.rg8ui_rg8i.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032535, VkglTestCase_032535_1, VkglTestCase_032535_2);

#define VkglTestCase_032536_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_032536_2 "class_16_bits.rg8ui_rg8i.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032536, VkglTestCase_032536_1, VkglTestCase_032536_2);

#define VkglTestCase_032537_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032537_2 "wclass_16_bits.rg8ui_rg8i.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032537, VkglTestCase_032537_1, VkglTestCase_032537_2);

#define VkglTestCase_032538_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_032538_2 "ss_16_bits.rg8ui_rg8i.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032538, VkglTestCase_032538_1, VkglTestCase_032538_2);

#define VkglTestCase_032539_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_032539_2 "lass_16_bits.rg8ui_rg8i.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032539, VkglTestCase_032539_1, VkglTestCase_032539_2);

#define VkglTestCase_032540_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032540_2 "ewclass_16_bits.rg8ui_rg8i.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032540, VkglTestCase_032540_1, VkglTestCase_032540_2);

#define VkglTestCase_032541_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032541_2 "ewclass_16_bits.rg8ui_rg8i.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032541, VkglTestCase_032541_1, VkglTestCase_032541_2);

#define VkglTestCase_032542_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032542_2 "iewclass_16_bits.rg8ui_rg8i.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032542, VkglTestCase_032542_1, VkglTestCase_032542_2);

#define VkglTestCase_032543_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_032543_2 "lass_16_bits.rg8ui_rg8i.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032543, VkglTestCase_032543_1, VkglTestCase_032543_2);

#define VkglTestCase_032544_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_032544_2 "class_16_bits.rg8ui_rg8i.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032544, VkglTestCase_032544_1, VkglTestCase_032544_2);
