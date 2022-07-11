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
#include "../ActsDeqpgles310028TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_027512_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_027512_2 "iewclass_32_bits.rg16f_rgba8.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027512, VkglTestCase_027512_1, VkglTestCase_027512_2);

#define VkglTestCase_027513_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_027513_2 "iewclass_32_bits.rg16f_rgba8.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027513, VkglTestCase_027513_1, VkglTestCase_027513_2);

#define VkglTestCase_027514_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_027514_2 "viewclass_32_bits.rg16f_rgba8.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027514, VkglTestCase_027514_1, VkglTestCase_027514_2);

#define VkglTestCase_027515_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027515_2 "class_32_bits.rg16f_rgba8.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027515, VkglTestCase_027515_1, VkglTestCase_027515_2);

#define VkglTestCase_027516_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027516_2 "wclass_32_bits.rg16f_rgba8.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027516, VkglTestCase_027516_1, VkglTestCase_027516_2);

#define VkglTestCase_027517_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_027517_2 "iewclass_32_bits.rg16f_rgba8.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027517, VkglTestCase_027517_1, VkglTestCase_027517_2);

#define VkglTestCase_027518_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_027518_2 "iewclass_32_bits.rg16f_rgba8.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027518, VkglTestCase_027518_1, VkglTestCase_027518_2);

#define VkglTestCase_027519_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_027519_2 "viewclass_32_bits.rg16f_rgba8.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027519, VkglTestCase_027519_1, VkglTestCase_027519_2);

#define VkglTestCase_027520_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027520_2 "class_32_bits.rg16f_rgba8.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027520, VkglTestCase_027520_1, VkglTestCase_027520_2);

#define VkglTestCase_027521_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027521_2 "wclass_32_bits.rg16f_rgba8.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027521, VkglTestCase_027521_1, VkglTestCase_027521_2);

#define VkglTestCase_027522_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_027522_2 "viewclass_32_bits.rg16f_rgba8.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027522, VkglTestCase_027522_1, VkglTestCase_027522_2);

#define VkglTestCase_027523_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_027523_2 "viewclass_32_bits.rg16f_rgba8.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027523, VkglTestCase_027523_1, VkglTestCase_027523_2);

#define VkglTestCase_027524_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_027524_2 ".viewclass_32_bits.rg16f_rgba8.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027524, VkglTestCase_027524_1, VkglTestCase_027524_2);

#define VkglTestCase_027525_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027525_2 "wclass_32_bits.rg16f_rgba8.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027525, VkglTestCase_027525_1, VkglTestCase_027525_2);

#define VkglTestCase_027526_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_027526_2 "ewclass_32_bits.rg16f_rgba8.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027526, VkglTestCase_027526_1, VkglTestCase_027526_2);

#define VkglTestCase_027527_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027527_2 "class_32_bits.rg16f_rgba8.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027527, VkglTestCase_027527_1, VkglTestCase_027527_2);

#define VkglTestCase_027528_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027528_2 "class_32_bits.rg16f_rgba8.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027528, VkglTestCase_027528_1, VkglTestCase_027528_2);

#define VkglTestCase_027529_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027529_2 "wclass_32_bits.rg16f_rgba8.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027529, VkglTestCase_027529_1, VkglTestCase_027529_2);

#define VkglTestCase_027530_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_027530_2 "ss_32_bits.rg16f_rgba8.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027530, VkglTestCase_027530_1, VkglTestCase_027530_2);

#define VkglTestCase_027531_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_027531_2 "ass_32_bits.rg16f_rgba8.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027531, VkglTestCase_027531_1, VkglTestCase_027531_2);
