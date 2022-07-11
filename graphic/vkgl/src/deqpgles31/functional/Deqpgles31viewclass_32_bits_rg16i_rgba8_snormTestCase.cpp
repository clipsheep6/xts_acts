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

#define VkglTestCase_027933_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027933_2 "class_32_bits.rg16i_rgba8_snorm.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027933, VkglTestCase_027933_1, VkglTestCase_027933_2);

#define VkglTestCase_027934_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027934_2 "class_32_bits.rg16i_rgba8_snorm.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027934, VkglTestCase_027934_1, VkglTestCase_027934_2);

#define VkglTestCase_027935_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027935_2 "wclass_32_bits.rg16i_rgba8_snorm.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027935, VkglTestCase_027935_1, VkglTestCase_027935_2);

#define VkglTestCase_027936_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_027936_2 "ss_32_bits.rg16i_rgba8_snorm.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027936, VkglTestCase_027936_1, VkglTestCase_027936_2);

#define VkglTestCase_027937_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027937_2 "class_32_bits.rg16i_rgba8_snorm.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027937, VkglTestCase_027937_1, VkglTestCase_027937_2);

#define VkglTestCase_027938_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027938_2 "class_32_bits.rg16i_rgba8_snorm.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027938, VkglTestCase_027938_1, VkglTestCase_027938_2);

#define VkglTestCase_027939_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027939_2 "wclass_32_bits.rg16i_rgba8_snorm.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027939, VkglTestCase_027939_1, VkglTestCase_027939_2);

#define VkglTestCase_027940_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_027940_2 "ss_32_bits.rg16i_rgba8_snorm.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027940, VkglTestCase_027940_1, VkglTestCase_027940_2);

#define VkglTestCase_027941_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027941_2 "wclass_32_bits.rg16i_rgba8_snorm.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027941, VkglTestCase_027941_1, VkglTestCase_027941_2);

#define VkglTestCase_027942_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027942_2 "wclass_32_bits.rg16i_rgba8_snorm.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027942, VkglTestCase_027942_1, VkglTestCase_027942_2);

#define VkglTestCase_027943_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_027943_2 "ewclass_32_bits.rg16i_rgba8_snorm.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027943, VkglTestCase_027943_1, VkglTestCase_027943_2);

#define VkglTestCase_027944_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_027944_2 "ass_32_bits.rg16i_rgba8_snorm.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027944, VkglTestCase_027944_1, VkglTestCase_027944_2);

#define VkglTestCase_027945_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_027945_2 "ss_32_bits.rg16i_rgba8_snorm.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027945, VkglTestCase_027945_1, VkglTestCase_027945_2);

#define VkglTestCase_027946_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_027946_2 "ss_32_bits.rg16i_rgba8_snorm.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027946, VkglTestCase_027946_1, VkglTestCase_027946_2);

#define VkglTestCase_027947_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_027947_2 "ass_32_bits.rg16i_rgba8_snorm.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027947, VkglTestCase_027947_1, VkglTestCase_027947_2);

#define VkglTestCase_027948_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_027948_2 "32_bits.rg16i_rgba8_snorm.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027948, VkglTestCase_027948_1, VkglTestCase_027948_2);

#define VkglTestCase_027949_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_027949_2 "ass_32_bits.rg16i_rgba8_snorm.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027949, VkglTestCase_027949_1, VkglTestCase_027949_2);

#define VkglTestCase_027950_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_027950_2 "ass_32_bits.rg16i_rgba8_snorm.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027950, VkglTestCase_027950_1, VkglTestCase_027950_2);

#define VkglTestCase_027951_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_027951_2 "lass_32_bits.rg16i_rgba8_snorm.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027951, VkglTestCase_027951_1, VkglTestCase_027951_2);

#define VkglTestCase_027952_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_027952_2 "_32_bits.rg16i_rgba8_snorm.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027952, VkglTestCase_027952_1, VkglTestCase_027952_2);
