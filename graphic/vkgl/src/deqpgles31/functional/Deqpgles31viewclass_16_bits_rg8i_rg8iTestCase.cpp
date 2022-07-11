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

#define VkglTestCase_032355_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032355_2 "viewclass_16_bits.rg8i_rg8i.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032355, VkglTestCase_032355_1, VkglTestCase_032355_2);

#define VkglTestCase_032356_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032356_2 "viewclass_16_bits.rg8i_rg8i.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032356, VkglTestCase_032356_1, VkglTestCase_032356_2);

#define VkglTestCase_032357_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_032357_2 ".viewclass_16_bits.rg8i_rg8i.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032357, VkglTestCase_032357_1, VkglTestCase_032357_2);

#define VkglTestCase_032358_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032358_2 "wclass_16_bits.rg8i_rg8i.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032358, VkglTestCase_032358_1, VkglTestCase_032358_2);

#define VkglTestCase_032359_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032359_2 "ewclass_16_bits.rg8i_rg8i.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032359, VkglTestCase_032359_1, VkglTestCase_032359_2);

#define VkglTestCase_032360_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032360_2 "viewclass_16_bits.rg8i_rg8i.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032360, VkglTestCase_032360_1, VkglTestCase_032360_2);

#define VkglTestCase_032361_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032361_2 "viewclass_16_bits.rg8i_rg8i.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032361, VkglTestCase_032361_1, VkglTestCase_032361_2);

#define VkglTestCase_032362_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_032362_2 ".viewclass_16_bits.rg8i_rg8i.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032362, VkglTestCase_032362_1, VkglTestCase_032362_2);

#define VkglTestCase_032363_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032363_2 "wclass_16_bits.rg8i_rg8i.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032363, VkglTestCase_032363_1, VkglTestCase_032363_2);

#define VkglTestCase_032364_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032364_2 "ewclass_16_bits.rg8i_rg8i.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032364, VkglTestCase_032364_1, VkglTestCase_032364_2);

#define VkglTestCase_032365_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_032365_2 ".viewclass_16_bits.rg8i_rg8i.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032365, VkglTestCase_032365_1, VkglTestCase_032365_2);

#define VkglTestCase_032366_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_032366_2 ".viewclass_16_bits.rg8i_rg8i.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032366, VkglTestCase_032366_1, VkglTestCase_032366_2);

#define VkglTestCase_032367_1 "dEQP-GLES31.functional.copy_image.non_compresse"
#define VkglTestCase_032367_2 "d.viewclass_16_bits.rg8i_rg8i.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032367, VkglTestCase_032367_1, VkglTestCase_032367_2);

#define VkglTestCase_032368_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032368_2 "ewclass_16_bits.rg8i_rg8i.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032368, VkglTestCase_032368_1, VkglTestCase_032368_2);

#define VkglTestCase_032369_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032369_2 "iewclass_16_bits.rg8i_rg8i.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032369, VkglTestCase_032369_1, VkglTestCase_032369_2);

#define VkglTestCase_032370_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032370_2 "wclass_16_bits.rg8i_rg8i.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032370, VkglTestCase_032370_1, VkglTestCase_032370_2);

#define VkglTestCase_032371_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032371_2 "wclass_16_bits.rg8i_rg8i.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032371, VkglTestCase_032371_1, VkglTestCase_032371_2);

#define VkglTestCase_032372_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032372_2 "ewclass_16_bits.rg8i_rg8i.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032372, VkglTestCase_032372_1, VkglTestCase_032372_2);

#define VkglTestCase_032373_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_032373_2 "ass_16_bits.rg8i_rg8i.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032373, VkglTestCase_032373_1, VkglTestCase_032373_2);

#define VkglTestCase_032374_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_032374_2 "lass_16_bits.rg8i_rg8i.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032374, VkglTestCase_032374_1, VkglTestCase_032374_2);

#define VkglTestCase_032375_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032375_2 "ewclass_16_bits.rg8i_rg8i.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032375, VkglTestCase_032375_1, VkglTestCase_032375_2);

#define VkglTestCase_032376_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032376_2 "ewclass_16_bits.rg8i_rg8i.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032376, VkglTestCase_032376_1, VkglTestCase_032376_2);

#define VkglTestCase_032377_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032377_2 "iewclass_16_bits.rg8i_rg8i.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032377, VkglTestCase_032377_1, VkglTestCase_032377_2);

#define VkglTestCase_032378_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_032378_2 "lass_16_bits.rg8i_rg8i.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032378, VkglTestCase_032378_1, VkglTestCase_032378_2);

#define VkglTestCase_032379_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032379_2 "wclass_16_bits.rg8i_rg8i.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032379, VkglTestCase_032379_1, VkglTestCase_032379_2);
