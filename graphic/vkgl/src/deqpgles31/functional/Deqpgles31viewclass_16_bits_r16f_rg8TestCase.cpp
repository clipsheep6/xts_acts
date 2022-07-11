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

#define VkglTestCase_031689_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_031689_2 "viewclass_16_bits.r16f_rg8.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031689, VkglTestCase_031689_1, VkglTestCase_031689_2);

#define VkglTestCase_031690_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_031690_2 "viewclass_16_bits.r16f_rg8.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031690, VkglTestCase_031690_1, VkglTestCase_031690_2);

#define VkglTestCase_031691_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_031691_2 ".viewclass_16_bits.r16f_rg8.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031691, VkglTestCase_031691_1, VkglTestCase_031691_2);

#define VkglTestCase_031692_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031692_2 "wclass_16_bits.r16f_rg8.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031692, VkglTestCase_031692_1, VkglTestCase_031692_2);

#define VkglTestCase_031693_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031693_2 "iewclass_16_bits.r16f_rg8.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031693, VkglTestCase_031693_1, VkglTestCase_031693_2);

#define VkglTestCase_031694_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_031694_2 "viewclass_16_bits.r16f_rg8.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031694, VkglTestCase_031694_1, VkglTestCase_031694_2);

#define VkglTestCase_031695_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_031695_2 "viewclass_16_bits.r16f_rg8.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031695, VkglTestCase_031695_1, VkglTestCase_031695_2);

#define VkglTestCase_031696_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_031696_2 ".viewclass_16_bits.r16f_rg8.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031696, VkglTestCase_031696_1, VkglTestCase_031696_2);

#define VkglTestCase_031697_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031697_2 "wclass_16_bits.r16f_rg8.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031697, VkglTestCase_031697_1, VkglTestCase_031697_2);

#define VkglTestCase_031698_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031698_2 "iewclass_16_bits.r16f_rg8.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031698, VkglTestCase_031698_1, VkglTestCase_031698_2);

#define VkglTestCase_031699_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_031699_2 ".viewclass_16_bits.r16f_rg8.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031699, VkglTestCase_031699_1, VkglTestCase_031699_2);

#define VkglTestCase_031700_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_031700_2 ".viewclass_16_bits.r16f_rg8.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031700, VkglTestCase_031700_1, VkglTestCase_031700_2);

#define VkglTestCase_031701_1 "dEQP-GLES31.functional.copy_image.non_compresse"
#define VkglTestCase_031701_2 "d.viewclass_16_bits.r16f_rg8.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031701, VkglTestCase_031701_1, VkglTestCase_031701_2);

#define VkglTestCase_031702_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031702_2 "ewclass_16_bits.r16f_rg8.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031702, VkglTestCase_031702_1, VkglTestCase_031702_2);

#define VkglTestCase_031703_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_031703_2 "viewclass_16_bits.r16f_rg8.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031703, VkglTestCase_031703_1, VkglTestCase_031703_2);

#define VkglTestCase_031704_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031704_2 "wclass_16_bits.r16f_rg8.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031704, VkglTestCase_031704_1, VkglTestCase_031704_2);

#define VkglTestCase_031705_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031705_2 "wclass_16_bits.r16f_rg8.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031705, VkglTestCase_031705_1, VkglTestCase_031705_2);

#define VkglTestCase_031706_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031706_2 "ewclass_16_bits.r16f_rg8.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031706, VkglTestCase_031706_1, VkglTestCase_031706_2);

#define VkglTestCase_031707_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_031707_2 "ass_16_bits.r16f_rg8.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031707, VkglTestCase_031707_1, VkglTestCase_031707_2);

#define VkglTestCase_031708_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031708_2 "class_16_bits.r16f_rg8.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031708, VkglTestCase_031708_1, VkglTestCase_031708_2);
