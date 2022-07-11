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

#define VkglTestCase_027532_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_027532_2 "ewclass_32_bits.rg16f_rgba8i.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027532, VkglTestCase_027532_1, VkglTestCase_027532_2);

#define VkglTestCase_027533_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_027533_2 "ewclass_32_bits.rg16f_rgba8i.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027533, VkglTestCase_027533_1, VkglTestCase_027533_2);

#define VkglTestCase_027534_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_027534_2 "iewclass_32_bits.rg16f_rgba8i.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027534, VkglTestCase_027534_1, VkglTestCase_027534_2);

#define VkglTestCase_027535_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_027535_2 "lass_32_bits.rg16f_rgba8i.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027535, VkglTestCase_027535_1, VkglTestCase_027535_2);

#define VkglTestCase_027536_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027536_2 "wclass_32_bits.rg16f_rgba8i.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027536, VkglTestCase_027536_1, VkglTestCase_027536_2);

#define VkglTestCase_027537_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_027537_2 "ewclass_32_bits.rg16f_rgba8i.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027537, VkglTestCase_027537_1, VkglTestCase_027537_2);

#define VkglTestCase_027538_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_027538_2 "ewclass_32_bits.rg16f_rgba8i.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027538, VkglTestCase_027538_1, VkglTestCase_027538_2);

#define VkglTestCase_027539_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_027539_2 "iewclass_32_bits.rg16f_rgba8i.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027539, VkglTestCase_027539_1, VkglTestCase_027539_2);

#define VkglTestCase_027540_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_027540_2 "lass_32_bits.rg16f_rgba8i.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027540, VkglTestCase_027540_1, VkglTestCase_027540_2);

#define VkglTestCase_027541_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027541_2 "wclass_32_bits.rg16f_rgba8i.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027541, VkglTestCase_027541_1, VkglTestCase_027541_2);

#define VkglTestCase_027542_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_027542_2 "iewclass_32_bits.rg16f_rgba8i.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027542, VkglTestCase_027542_1, VkglTestCase_027542_2);

#define VkglTestCase_027543_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_027543_2 "iewclass_32_bits.rg16f_rgba8i.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027543, VkglTestCase_027543_1, VkglTestCase_027543_2);

#define VkglTestCase_027544_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_027544_2 "viewclass_32_bits.rg16f_rgba8i.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027544, VkglTestCase_027544_1, VkglTestCase_027544_2);

#define VkglTestCase_027545_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027545_2 "class_32_bits.rg16f_rgba8i.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027545, VkglTestCase_027545_1, VkglTestCase_027545_2);

#define VkglTestCase_027546_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_027546_2 "ewclass_32_bits.rg16f_rgba8i.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027546, VkglTestCase_027546_1, VkglTestCase_027546_2);

#define VkglTestCase_027547_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_027547_2 "lass_32_bits.rg16f_rgba8i.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027547, VkglTestCase_027547_1, VkglTestCase_027547_2);

#define VkglTestCase_027548_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_027548_2 "lass_32_bits.rg16f_rgba8i.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027548, VkglTestCase_027548_1, VkglTestCase_027548_2);

#define VkglTestCase_027549_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027549_2 "class_32_bits.rg16f_rgba8i.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027549, VkglTestCase_027549_1, VkglTestCase_027549_2);

#define VkglTestCase_027550_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_027550_2 "s_32_bits.rg16f_rgba8i.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027550, VkglTestCase_027550_1, VkglTestCase_027550_2);

#define VkglTestCase_027551_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_027551_2 "ass_32_bits.rg16f_rgba8i.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027551, VkglTestCase_027551_1, VkglTestCase_027551_2);
