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

#define VkglTestCase_032115_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032115_2 "viewclass_16_bits.rg8_r16i.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032115, VkglTestCase_032115_1, VkglTestCase_032115_2);

#define VkglTestCase_032116_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032116_2 "viewclass_16_bits.rg8_r16i.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032116, VkglTestCase_032116_1, VkglTestCase_032116_2);

#define VkglTestCase_032117_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_032117_2 ".viewclass_16_bits.rg8_r16i.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032117, VkglTestCase_032117_1, VkglTestCase_032117_2);

#define VkglTestCase_032118_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032118_2 "wclass_16_bits.rg8_r16i.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032118, VkglTestCase_032118_1, VkglTestCase_032118_2);

#define VkglTestCase_032119_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032119_2 "iewclass_16_bits.rg8_r16i.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032119, VkglTestCase_032119_1, VkglTestCase_032119_2);

#define VkglTestCase_032120_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032120_2 "viewclass_16_bits.rg8_r16i.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032120, VkglTestCase_032120_1, VkglTestCase_032120_2);

#define VkglTestCase_032121_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032121_2 "viewclass_16_bits.rg8_r16i.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032121, VkglTestCase_032121_1, VkglTestCase_032121_2);

#define VkglTestCase_032122_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_032122_2 ".viewclass_16_bits.rg8_r16i.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032122, VkglTestCase_032122_1, VkglTestCase_032122_2);

#define VkglTestCase_032123_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032123_2 "wclass_16_bits.rg8_r16i.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032123, VkglTestCase_032123_1, VkglTestCase_032123_2);

#define VkglTestCase_032124_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032124_2 "iewclass_16_bits.rg8_r16i.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032124, VkglTestCase_032124_1, VkglTestCase_032124_2);

#define VkglTestCase_032125_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_032125_2 ".viewclass_16_bits.rg8_r16i.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032125, VkglTestCase_032125_1, VkglTestCase_032125_2);

#define VkglTestCase_032126_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_032126_2 ".viewclass_16_bits.rg8_r16i.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032126, VkglTestCase_032126_1, VkglTestCase_032126_2);

#define VkglTestCase_032127_1 "dEQP-GLES31.functional.copy_image.non_compresse"
#define VkglTestCase_032127_2 "d.viewclass_16_bits.rg8_r16i.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032127, VkglTestCase_032127_1, VkglTestCase_032127_2);

#define VkglTestCase_032128_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032128_2 "ewclass_16_bits.rg8_r16i.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032128, VkglTestCase_032128_1, VkglTestCase_032128_2);

#define VkglTestCase_032129_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032129_2 "viewclass_16_bits.rg8_r16i.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032129, VkglTestCase_032129_1, VkglTestCase_032129_2);

#define VkglTestCase_032130_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032130_2 "wclass_16_bits.rg8_r16i.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032130, VkglTestCase_032130_1, VkglTestCase_032130_2);

#define VkglTestCase_032131_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032131_2 "wclass_16_bits.rg8_r16i.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032131, VkglTestCase_032131_1, VkglTestCase_032131_2);

#define VkglTestCase_032132_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032132_2 "ewclass_16_bits.rg8_r16i.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032132, VkglTestCase_032132_1, VkglTestCase_032132_2);

#define VkglTestCase_032133_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_032133_2 "ass_16_bits.rg8_r16i.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032133, VkglTestCase_032133_1, VkglTestCase_032133_2);

#define VkglTestCase_032134_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_032134_2 "class_16_bits.rg8_r16i.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032134, VkglTestCase_032134_1, VkglTestCase_032134_2);

#define VkglTestCase_032135_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032135_2 "iewclass_16_bits.rg8_r16i.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032135, VkglTestCase_032135_1, VkglTestCase_032135_2);

#define VkglTestCase_032136_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032136_2 "iewclass_16_bits.rg8_r16i.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032136, VkglTestCase_032136_1, VkglTestCase_032136_2);

#define VkglTestCase_032137_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032137_2 "viewclass_16_bits.rg8_r16i.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032137, VkglTestCase_032137_1, VkglTestCase_032137_2);

#define VkglTestCase_032138_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_032138_2 "class_16_bits.rg8_r16i.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032138, VkglTestCase_032138_1, VkglTestCase_032138_2);

#define VkglTestCase_032139_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032139_2 "wclass_16_bits.rg8_r16i.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032139, VkglTestCase_032139_1, VkglTestCase_032139_2);
