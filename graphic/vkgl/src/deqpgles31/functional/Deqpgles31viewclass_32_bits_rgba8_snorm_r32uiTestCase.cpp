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
#include "../ActsDeqpgles310031TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_030366_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030366_2 "class_32_bits.rgba8_snorm_r32ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030366, VkglTestCase_030366_1, VkglTestCase_030366_2);

#define VkglTestCase_030367_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030367_2 "class_32_bits.rgba8_snorm_r32ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030367, VkglTestCase_030367_1, VkglTestCase_030367_2);

#define VkglTestCase_030368_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_030368_2 "wclass_32_bits.rgba8_snorm_r32ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030368, VkglTestCase_030368_1, VkglTestCase_030368_2);

#define VkglTestCase_030369_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030369_2 "ss_32_bits.rgba8_snorm_r32ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030369, VkglTestCase_030369_1, VkglTestCase_030369_2);

#define VkglTestCase_030370_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030370_2 "ass_32_bits.rgba8_snorm_r32ui.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030370, VkglTestCase_030370_1, VkglTestCase_030370_2);

#define VkglTestCase_030371_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030371_2 "class_32_bits.rgba8_snorm_r32ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030371, VkglTestCase_030371_1, VkglTestCase_030371_2);

#define VkglTestCase_030372_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_030372_2 "class_32_bits.rgba8_snorm_r32ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030372, VkglTestCase_030372_1, VkglTestCase_030372_2);

#define VkglTestCase_030373_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_030373_2 "wclass_32_bits.rgba8_snorm_r32ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030373, VkglTestCase_030373_1, VkglTestCase_030373_2);

#define VkglTestCase_030374_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030374_2 "ss_32_bits.rgba8_snorm_r32ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030374, VkglTestCase_030374_1, VkglTestCase_030374_2);

#define VkglTestCase_030375_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030375_2 "ass_32_bits.rgba8_snorm_r32ui.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030375, VkglTestCase_030375_1, VkglTestCase_030375_2);

#define VkglTestCase_030376_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_030376_2 "wclass_32_bits.rgba8_snorm_r32ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030376, VkglTestCase_030376_1, VkglTestCase_030376_2);

#define VkglTestCase_030377_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_030377_2 "wclass_32_bits.rgba8_snorm_r32ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030377, VkglTestCase_030377_1, VkglTestCase_030377_2);

#define VkglTestCase_030378_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_030378_2 "ewclass_32_bits.rgba8_snorm_r32ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030378, VkglTestCase_030378_1, VkglTestCase_030378_2);

#define VkglTestCase_030379_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030379_2 "ass_32_bits.rgba8_snorm_r32ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030379, VkglTestCase_030379_1, VkglTestCase_030379_2);

#define VkglTestCase_030380_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_030380_2 "lass_32_bits.rgba8_snorm_r32ui.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030380, VkglTestCase_030380_1, VkglTestCase_030380_2);

#define VkglTestCase_030381_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030381_2 "ss_32_bits.rgba8_snorm_r32ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030381, VkglTestCase_030381_1, VkglTestCase_030381_2);

#define VkglTestCase_030382_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_030382_2 "ss_32_bits.rgba8_snorm_r32ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030382, VkglTestCase_030382_1, VkglTestCase_030382_2);

#define VkglTestCase_030383_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_030383_2 "ass_32_bits.rgba8_snorm_r32ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030383, VkglTestCase_030383_1, VkglTestCase_030383_2);

#define VkglTestCase_030384_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_030384_2 "32_bits.rgba8_snorm_r32ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030384, VkglTestCase_030384_1, VkglTestCase_030384_2);

#define VkglTestCase_030385_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_030385_2 "_32_bits.rgba8_snorm_r32ui.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310031TestSuite, TestCase_030385, VkglTestCase_030385_1, VkglTestCase_030385_2);
