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
#include "../ActsDeqpgles310026TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_025349_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_025349_2 "class_128_bits.rgba32i_rgba32ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025349, VkglTestCase_025349_1, VkglTestCase_025349_2);

#define VkglTestCase_025350_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_025350_2 "class_128_bits.rgba32i_rgba32ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025350, VkglTestCase_025350_1, VkglTestCase_025350_2);

#define VkglTestCase_025351_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_025351_2 "wclass_128_bits.rgba32i_rgba32ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025351, VkglTestCase_025351_1, VkglTestCase_025351_2);

#define VkglTestCase_025352_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_025352_2 "ss_128_bits.rgba32i_rgba32ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025352, VkglTestCase_025352_1, VkglTestCase_025352_2);

#define VkglTestCase_025353_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_025353_2 "ass_128_bits.rgba32i_rgba32ui.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025353, VkglTestCase_025353_1, VkglTestCase_025353_2);

#define VkglTestCase_025354_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_025354_2 "class_128_bits.rgba32i_rgba32ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025354, VkglTestCase_025354_1, VkglTestCase_025354_2);

#define VkglTestCase_025355_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_025355_2 "class_128_bits.rgba32i_rgba32ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025355, VkglTestCase_025355_1, VkglTestCase_025355_2);

#define VkglTestCase_025356_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_025356_2 "wclass_128_bits.rgba32i_rgba32ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025356, VkglTestCase_025356_1, VkglTestCase_025356_2);

#define VkglTestCase_025357_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_025357_2 "ss_128_bits.rgba32i_rgba32ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025357, VkglTestCase_025357_1, VkglTestCase_025357_2);

#define VkglTestCase_025358_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_025358_2 "ass_128_bits.rgba32i_rgba32ui.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025358, VkglTestCase_025358_1, VkglTestCase_025358_2);

#define VkglTestCase_025359_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_025359_2 "wclass_128_bits.rgba32i_rgba32ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025359, VkglTestCase_025359_1, VkglTestCase_025359_2);

#define VkglTestCase_025360_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_025360_2 "wclass_128_bits.rgba32i_rgba32ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025360, VkglTestCase_025360_1, VkglTestCase_025360_2);

#define VkglTestCase_025361_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_025361_2 "ewclass_128_bits.rgba32i_rgba32ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025361, VkglTestCase_025361_1, VkglTestCase_025361_2);

#define VkglTestCase_025362_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_025362_2 "ass_128_bits.rgba32i_rgba32ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025362, VkglTestCase_025362_1, VkglTestCase_025362_2);

#define VkglTestCase_025363_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_025363_2 "lass_128_bits.rgba32i_rgba32ui.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025363, VkglTestCase_025363_1, VkglTestCase_025363_2);

#define VkglTestCase_025364_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_025364_2 "ss_128_bits.rgba32i_rgba32ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025364, VkglTestCase_025364_1, VkglTestCase_025364_2);

#define VkglTestCase_025365_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_025365_2 "ss_128_bits.rgba32i_rgba32ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025365, VkglTestCase_025365_1, VkglTestCase_025365_2);

#define VkglTestCase_025366_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_025366_2 "ass_128_bits.rgba32i_rgba32ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025366, VkglTestCase_025366_1, VkglTestCase_025366_2);

#define VkglTestCase_025367_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_025367_2 "128_bits.rgba32i_rgba32ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025367, VkglTestCase_025367_1, VkglTestCase_025367_2);

#define VkglTestCase_025368_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_025368_2 "_128_bits.rgba32i_rgba32ui.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025368, VkglTestCase_025368_1, VkglTestCase_025368_2);

#define VkglTestCase_025369_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_025369_2 "ass_128_bits.rgba32i_rgba32ui.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025369, VkglTestCase_025369_1, VkglTestCase_025369_2);

#define VkglTestCase_025370_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_025370_2 "ass_128_bits.rgba32i_rgba32ui.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025370, VkglTestCase_025370_1, VkglTestCase_025370_2);

#define VkglTestCase_025371_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_025371_2 "lass_128_bits.rgba32i_rgba32ui.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025371, VkglTestCase_025371_1, VkglTestCase_025371_2);

#define VkglTestCase_025372_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_025372_2 "_128_bits.rgba32i_rgba32ui.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025372, VkglTestCase_025372_1, VkglTestCase_025372_2);

#define VkglTestCase_025373_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_025373_2 "ss_128_bits.rgba32i_rgba32ui.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025373, VkglTestCase_025373_1, VkglTestCase_025373_2);
