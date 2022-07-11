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

#define VkglTestCase_026105_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026105_2 "wclass_64_bits.rgba16i_rg32ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026105, VkglTestCase_026105_1, VkglTestCase_026105_2);

#define VkglTestCase_026106_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026106_2 "wclass_64_bits.rgba16i_rg32ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026106, VkglTestCase_026106_1, VkglTestCase_026106_2);

#define VkglTestCase_026107_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026107_2 "ewclass_64_bits.rgba16i_rg32ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026107, VkglTestCase_026107_1, VkglTestCase_026107_2);

#define VkglTestCase_026108_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_026108_2 "ass_64_bits.rgba16i_rg32ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026108, VkglTestCase_026108_1, VkglTestCase_026108_2);

#define VkglTestCase_026109_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026109_2 "class_64_bits.rgba16i_rg32ui.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026109, VkglTestCase_026109_1, VkglTestCase_026109_2);

#define VkglTestCase_026110_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026110_2 "wclass_64_bits.rgba16i_rg32ui.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026110, VkglTestCase_026110_1, VkglTestCase_026110_2);

#define VkglTestCase_026111_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026111_2 "wclass_64_bits.rgba16i_rg32ui.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026111, VkglTestCase_026111_1, VkglTestCase_026111_2);

#define VkglTestCase_026112_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026112_2 "ewclass_64_bits.rgba16i_rg32ui.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026112, VkglTestCase_026112_1, VkglTestCase_026112_2);

#define VkglTestCase_026113_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_026113_2 "ass_64_bits.rgba16i_rg32ui.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026113, VkglTestCase_026113_1, VkglTestCase_026113_2);

#define VkglTestCase_026114_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026114_2 "class_64_bits.rgba16i_rg32ui.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026114, VkglTestCase_026114_1, VkglTestCase_026114_2);

#define VkglTestCase_026115_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026115_2 "ewclass_64_bits.rgba16i_rg32ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026115, VkglTestCase_026115_1, VkglTestCase_026115_2);

#define VkglTestCase_026116_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026116_2 "ewclass_64_bits.rgba16i_rg32ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026116, VkglTestCase_026116_1, VkglTestCase_026116_2);

#define VkglTestCase_026117_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_026117_2 "iewclass_64_bits.rgba16i_rg32ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026117, VkglTestCase_026117_1, VkglTestCase_026117_2);

#define VkglTestCase_026118_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_026118_2 "lass_64_bits.rgba16i_rg32ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026118, VkglTestCase_026118_1, VkglTestCase_026118_2);

#define VkglTestCase_026119_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026119_2 "wclass_64_bits.rgba16i_rg32ui.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026119, VkglTestCase_026119_1, VkglTestCase_026119_2);

#define VkglTestCase_026120_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_026120_2 "ass_64_bits.rgba16i_rg32ui.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026120, VkglTestCase_026120_1, VkglTestCase_026120_2);

#define VkglTestCase_026121_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_026121_2 "ass_64_bits.rgba16i_rg32ui.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026121, VkglTestCase_026121_1, VkglTestCase_026121_2);

#define VkglTestCase_026122_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_026122_2 "lass_64_bits.rgba16i_rg32ui.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026122, VkglTestCase_026122_1, VkglTestCase_026122_2);

#define VkglTestCase_026123_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_026123_2 "_64_bits.rgba16i_rg32ui.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026123, VkglTestCase_026123_1, VkglTestCase_026123_2);

#define VkglTestCase_026124_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_026124_2 "ss_64_bits.rgba16i_rg32ui.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026124, VkglTestCase_026124_1, VkglTestCase_026124_2);

#define VkglTestCase_026125_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026125_2 "class_64_bits.rgba16i_rg32ui.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026125, VkglTestCase_026125_1, VkglTestCase_026125_2);

#define VkglTestCase_026126_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026126_2 "class_64_bits.rgba16i_rg32ui.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026126, VkglTestCase_026126_1, VkglTestCase_026126_2);

#define VkglTestCase_026127_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026127_2 "wclass_64_bits.rgba16i_rg32ui.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026127, VkglTestCase_026127_1, VkglTestCase_026127_2);

#define VkglTestCase_026128_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_026128_2 "ss_64_bits.rgba16i_rg32ui.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026128, VkglTestCase_026128_1, VkglTestCase_026128_2);

#define VkglTestCase_026129_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_026129_2 "ass_64_bits.rgba16i_rg32ui.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026129, VkglTestCase_026129_1, VkglTestCase_026129_2);
