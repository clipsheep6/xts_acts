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

#define VkglTestCase_031860_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_031860_2 "viewclass_16_bits.r16i_rg8i.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031860, VkglTestCase_031860_1, VkglTestCase_031860_2);

#define VkglTestCase_031861_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_031861_2 "viewclass_16_bits.r16i_rg8i.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031861, VkglTestCase_031861_1, VkglTestCase_031861_2);

#define VkglTestCase_031862_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_031862_2 ".viewclass_16_bits.r16i_rg8i.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031862, VkglTestCase_031862_1, VkglTestCase_031862_2);

#define VkglTestCase_031863_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031863_2 "wclass_16_bits.r16i_rg8i.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031863, VkglTestCase_031863_1, VkglTestCase_031863_2);

#define VkglTestCase_031864_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031864_2 "ewclass_16_bits.r16i_rg8i.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031864, VkglTestCase_031864_1, VkglTestCase_031864_2);

#define VkglTestCase_031865_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_031865_2 "viewclass_16_bits.r16i_rg8i.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031865, VkglTestCase_031865_1, VkglTestCase_031865_2);

#define VkglTestCase_031866_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_031866_2 "viewclass_16_bits.r16i_rg8i.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031866, VkglTestCase_031866_1, VkglTestCase_031866_2);

#define VkglTestCase_031867_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_031867_2 ".viewclass_16_bits.r16i_rg8i.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031867, VkglTestCase_031867_1, VkglTestCase_031867_2);

#define VkglTestCase_031868_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031868_2 "wclass_16_bits.r16i_rg8i.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031868, VkglTestCase_031868_1, VkglTestCase_031868_2);

#define VkglTestCase_031869_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031869_2 "ewclass_16_bits.r16i_rg8i.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031869, VkglTestCase_031869_1, VkglTestCase_031869_2);

#define VkglTestCase_031870_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_031870_2 ".viewclass_16_bits.r16i_rg8i.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031870, VkglTestCase_031870_1, VkglTestCase_031870_2);

#define VkglTestCase_031871_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_031871_2 ".viewclass_16_bits.r16i_rg8i.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031871, VkglTestCase_031871_1, VkglTestCase_031871_2);

#define VkglTestCase_031872_1 "dEQP-GLES31.functional.copy_image.non_compresse"
#define VkglTestCase_031872_2 "d.viewclass_16_bits.r16i_rg8i.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031872, VkglTestCase_031872_1, VkglTestCase_031872_2);

#define VkglTestCase_031873_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031873_2 "ewclass_16_bits.r16i_rg8i.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031873, VkglTestCase_031873_1, VkglTestCase_031873_2);

#define VkglTestCase_031874_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031874_2 "iewclass_16_bits.r16i_rg8i.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031874, VkglTestCase_031874_1, VkglTestCase_031874_2);

#define VkglTestCase_031875_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031875_2 "wclass_16_bits.r16i_rg8i.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031875, VkglTestCase_031875_1, VkglTestCase_031875_2);

#define VkglTestCase_031876_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031876_2 "wclass_16_bits.r16i_rg8i.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031876, VkglTestCase_031876_1, VkglTestCase_031876_2);

#define VkglTestCase_031877_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031877_2 "ewclass_16_bits.r16i_rg8i.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031877, VkglTestCase_031877_1, VkglTestCase_031877_2);

#define VkglTestCase_031878_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_031878_2 "ass_16_bits.r16i_rg8i.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031878, VkglTestCase_031878_1, VkglTestCase_031878_2);

#define VkglTestCase_031879_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_031879_2 "lass_16_bits.r16i_rg8i.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031879, VkglTestCase_031879_1, VkglTestCase_031879_2);

#define VkglTestCase_031880_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031880_2 "ewclass_16_bits.r16i_rg8i.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031880, VkglTestCase_031880_1, VkglTestCase_031880_2);

#define VkglTestCase_031881_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031881_2 "ewclass_16_bits.r16i_rg8i.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031881, VkglTestCase_031881_1, VkglTestCase_031881_2);

#define VkglTestCase_031882_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031882_2 "iewclass_16_bits.r16i_rg8i.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031882, VkglTestCase_031882_1, VkglTestCase_031882_2);

#define VkglTestCase_031883_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_031883_2 "lass_16_bits.r16i_rg8i.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031883, VkglTestCase_031883_1, VkglTestCase_031883_2);

#define VkglTestCase_031884_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031884_2 "wclass_16_bits.r16i_rg8i.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031884, VkglTestCase_031884_1, VkglTestCase_031884_2);
