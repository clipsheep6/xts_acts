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
#include "../ActsDeqpgles310027TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_026356_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026356_2 "ewclass_48_bits.rgb16f_rgb16i.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026356, VkglTestCase_026356_1, VkglTestCase_026356_2);

#define VkglTestCase_026357_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026357_2 "ewclass_48_bits.rgb16f_rgb16i.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026357, VkglTestCase_026357_1, VkglTestCase_026357_2);

#define VkglTestCase_026358_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_026358_2 "iewclass_48_bits.rgb16f_rgb16i.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026358, VkglTestCase_026358_1, VkglTestCase_026358_2);

#define VkglTestCase_026359_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_026359_2 "lass_48_bits.rgb16f_rgb16i.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026359, VkglTestCase_026359_1, VkglTestCase_026359_2);

#define VkglTestCase_026360_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026360_2 "ewclass_48_bits.rgb16f_rgb16i.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026360, VkglTestCase_026360_1, VkglTestCase_026360_2);

#define VkglTestCase_026361_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026361_2 "ewclass_48_bits.rgb16f_rgb16i.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026361, VkglTestCase_026361_1, VkglTestCase_026361_2);

#define VkglTestCase_026362_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_026362_2 "iewclass_48_bits.rgb16f_rgb16i.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026362, VkglTestCase_026362_1, VkglTestCase_026362_2);

#define VkglTestCase_026363_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_026363_2 "lass_48_bits.rgb16f_rgb16i.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026363, VkglTestCase_026363_1, VkglTestCase_026363_2);

#define VkglTestCase_026364_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_026364_2 "iewclass_48_bits.rgb16f_rgb16i.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026364, VkglTestCase_026364_1, VkglTestCase_026364_2);

#define VkglTestCase_026365_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_026365_2 "iewclass_48_bits.rgb16f_rgb16i.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026365, VkglTestCase_026365_1, VkglTestCase_026365_2);

#define VkglTestCase_026366_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_026366_2 "viewclass_48_bits.rgb16f_rgb16i.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026366, VkglTestCase_026366_1, VkglTestCase_026366_2);

#define VkglTestCase_026367_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026367_2 "class_48_bits.rgb16f_rgb16i.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026367, VkglTestCase_026367_1, VkglTestCase_026367_2);

#define VkglTestCase_026368_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_026368_2 "lass_48_bits.rgb16f_rgb16i.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026368, VkglTestCase_026368_1, VkglTestCase_026368_2);

#define VkglTestCase_026369_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_026369_2 "lass_48_bits.rgb16f_rgb16i.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026369, VkglTestCase_026369_1, VkglTestCase_026369_2);

#define VkglTestCase_026370_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026370_2 "class_48_bits.rgb16f_rgb16i.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026370, VkglTestCase_026370_1, VkglTestCase_026370_2);

#define VkglTestCase_026371_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_026371_2 "s_48_bits.rgb16f_rgb16i.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026371, VkglTestCase_026371_1, VkglTestCase_026371_2);
