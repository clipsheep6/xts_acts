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
#include "../ActsDeqpgles310037TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_036359_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_036359_2 "ts_mixed.rgba_astc_5x4_khr_rgba32i.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036359, VkglTestCase_036359_1, VkglTestCase_036359_2);

#define VkglTestCase_036360_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_036360_2 "ts_mixed.rgba_astc_5x4_khr_rgba32i.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036360, VkglTestCase_036360_1, VkglTestCase_036360_2);

#define VkglTestCase_036361_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_036361_2 "its_mixed.rgba_astc_5x4_khr_rgba32i.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036361, VkglTestCase_036361_1, VkglTestCase_036361_2);

#define VkglTestCase_036362_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036362_2 "mixed.rgba_astc_5x4_khr_rgba32i.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036362, VkglTestCase_036362_1, VkglTestCase_036362_2);

#define VkglTestCase_036363_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_036363_2 "_mixed.rgba_astc_5x4_khr_rgba32i.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036363, VkglTestCase_036363_1, VkglTestCase_036363_2);

#define VkglTestCase_036364_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_036364_2 "ts_mixed.rgba_astc_5x4_khr_rgba32i.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036364, VkglTestCase_036364_1, VkglTestCase_036364_2);

#define VkglTestCase_036365_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_036365_2 "ts_mixed.rgba_astc_5x4_khr_rgba32i.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036365, VkglTestCase_036365_1, VkglTestCase_036365_2);

#define VkglTestCase_036366_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_036366_2 "its_mixed.rgba_astc_5x4_khr_rgba32i.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036366, VkglTestCase_036366_1, VkglTestCase_036366_2);

#define VkglTestCase_036367_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036367_2 "mixed.rgba_astc_5x4_khr_rgba32i.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036367, VkglTestCase_036367_1, VkglTestCase_036367_2);

#define VkglTestCase_036368_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_036368_2 "_mixed.rgba_astc_5x4_khr_rgba32i.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036368, VkglTestCase_036368_1, VkglTestCase_036368_2);

#define VkglTestCase_036369_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_036369_2 "its_mixed.rgba_astc_5x4_khr_rgba32i.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036369, VkglTestCase_036369_1, VkglTestCase_036369_2);

#define VkglTestCase_036370_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_036370_2 "its_mixed.rgba_astc_5x4_khr_rgba32i.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036370, VkglTestCase_036370_1, VkglTestCase_036370_2);

#define VkglTestCase_036371_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_"
#define VkglTestCase_036371_2 "bits_mixed.rgba_astc_5x4_khr_rgba32i.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036371, VkglTestCase_036371_1, VkglTestCase_036371_2);

#define VkglTestCase_036372_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_036372_2 "_mixed.rgba_astc_5x4_khr_rgba32i.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036372, VkglTestCase_036372_1, VkglTestCase_036372_2);

#define VkglTestCase_036373_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_036373_2 "s_mixed.rgba_astc_5x4_khr_rgba32i.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036373, VkglTestCase_036373_1, VkglTestCase_036373_2);

#define VkglTestCase_036374_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036374_2 "mixed.rgba_astc_5x4_khr_rgba32i.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036374, VkglTestCase_036374_1, VkglTestCase_036374_2);

#define VkglTestCase_036375_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036375_2 "mixed.rgba_astc_5x4_khr_rgba32i.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036375, VkglTestCase_036375_1, VkglTestCase_036375_2);

#define VkglTestCase_036376_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_036376_2 "_mixed.rgba_astc_5x4_khr_rgba32i.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036376, VkglTestCase_036376_1, VkglTestCase_036376_2);

#define VkglTestCase_036377_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_036377_2 "ed.rgba_astc_5x4_khr_rgba32i.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036377, VkglTestCase_036377_1, VkglTestCase_036377_2);

#define VkglTestCase_036378_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_036378_2 "xed.rgba_astc_5x4_khr_rgba32i.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036378, VkglTestCase_036378_1, VkglTestCase_036378_2);
