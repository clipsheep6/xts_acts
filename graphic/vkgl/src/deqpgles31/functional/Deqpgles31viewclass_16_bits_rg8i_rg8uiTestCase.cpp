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

#define VkglTestCase_032380_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032380_2 "iewclass_16_bits.rg8i_rg8ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032380, VkglTestCase_032380_1, VkglTestCase_032380_2);

#define VkglTestCase_032381_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032381_2 "iewclass_16_bits.rg8i_rg8ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032381, VkglTestCase_032381_1, VkglTestCase_032381_2);

#define VkglTestCase_032382_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032382_2 "viewclass_16_bits.rg8i_rg8ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032382, VkglTestCase_032382_1, VkglTestCase_032382_2);

#define VkglTestCase_032383_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_032383_2 "class_16_bits.rg8i_rg8ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032383, VkglTestCase_032383_1, VkglTestCase_032383_2);

#define VkglTestCase_032384_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032384_2 "ewclass_16_bits.rg8i_rg8ui.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032384, VkglTestCase_032384_1, VkglTestCase_032384_2);

#define VkglTestCase_032385_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032385_2 "iewclass_16_bits.rg8i_rg8ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032385, VkglTestCase_032385_1, VkglTestCase_032385_2);

#define VkglTestCase_032386_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032386_2 "iewclass_16_bits.rg8i_rg8ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032386, VkglTestCase_032386_1, VkglTestCase_032386_2);

#define VkglTestCase_032387_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032387_2 "viewclass_16_bits.rg8i_rg8ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032387, VkglTestCase_032387_1, VkglTestCase_032387_2);

#define VkglTestCase_032388_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_032388_2 "class_16_bits.rg8i_rg8ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032388, VkglTestCase_032388_1, VkglTestCase_032388_2);

#define VkglTestCase_032389_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032389_2 "ewclass_16_bits.rg8i_rg8ui.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032389, VkglTestCase_032389_1, VkglTestCase_032389_2);

#define VkglTestCase_032390_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032390_2 "viewclass_16_bits.rg8i_rg8ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032390, VkglTestCase_032390_1, VkglTestCase_032390_2);

#define VkglTestCase_032391_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032391_2 "viewclass_16_bits.rg8i_rg8ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032391, VkglTestCase_032391_1, VkglTestCase_032391_2);

#define VkglTestCase_032392_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_032392_2 ".viewclass_16_bits.rg8i_rg8ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032392, VkglTestCase_032392_1, VkglTestCase_032392_2);

#define VkglTestCase_032393_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032393_2 "wclass_16_bits.rg8i_rg8ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032393, VkglTestCase_032393_1, VkglTestCase_032393_2);

#define VkglTestCase_032394_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032394_2 "iewclass_16_bits.rg8i_rg8ui.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032394, VkglTestCase_032394_1, VkglTestCase_032394_2);

#define VkglTestCase_032395_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_032395_2 "class_16_bits.rg8i_rg8ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032395, VkglTestCase_032395_1, VkglTestCase_032395_2);

#define VkglTestCase_032396_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_032396_2 "class_16_bits.rg8i_rg8ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032396, VkglTestCase_032396_1, VkglTestCase_032396_2);

#define VkglTestCase_032397_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032397_2 "wclass_16_bits.rg8i_rg8ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032397, VkglTestCase_032397_1, VkglTestCase_032397_2);

#define VkglTestCase_032398_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_032398_2 "ss_16_bits.rg8i_rg8ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032398, VkglTestCase_032398_1, VkglTestCase_032398_2);

#define VkglTestCase_032399_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_032399_2 "lass_16_bits.rg8i_rg8ui.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032399, VkglTestCase_032399_1, VkglTestCase_032399_2);

#define VkglTestCase_032400_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032400_2 "ewclass_16_bits.rg8i_rg8ui.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032400, VkglTestCase_032400_1, VkglTestCase_032400_2);

#define VkglTestCase_032401_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032401_2 "ewclass_16_bits.rg8i_rg8ui.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032401, VkglTestCase_032401_1, VkglTestCase_032401_2);

#define VkglTestCase_032402_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032402_2 "iewclass_16_bits.rg8i_rg8ui.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032402, VkglTestCase_032402_1, VkglTestCase_032402_2);

#define VkglTestCase_032403_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_032403_2 "lass_16_bits.rg8i_rg8ui.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032403, VkglTestCase_032403_1, VkglTestCase_032403_2);

#define VkglTestCase_032404_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_032404_2 "class_16_bits.rg8i_rg8ui.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032404, VkglTestCase_032404_1, VkglTestCase_032404_2);
