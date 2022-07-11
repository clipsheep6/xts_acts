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

#define VkglTestCase_036379_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_036379_2 "ts_mixed.rgba32i_rgba_astc_5x5_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036379, VkglTestCase_036379_1, VkglTestCase_036379_2);

#define VkglTestCase_036380_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_036380_2 "ts_mixed.rgba32i_rgba_astc_5x5_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036380, VkglTestCase_036380_1, VkglTestCase_036380_2);

#define VkglTestCase_036381_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_036381_2 "its_mixed.rgba32i_rgba_astc_5x5_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036381, VkglTestCase_036381_1, VkglTestCase_036381_2);

#define VkglTestCase_036382_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036382_2 "mixed.rgba32i_rgba_astc_5x5_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036382, VkglTestCase_036382_1, VkglTestCase_036382_2);

#define VkglTestCase_036383_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_036383_2 "ts_mixed.rgba32i_rgba_astc_5x5_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036383, VkglTestCase_036383_1, VkglTestCase_036383_2);

#define VkglTestCase_036384_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_036384_2 "ts_mixed.rgba32i_rgba_astc_5x5_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036384, VkglTestCase_036384_1, VkglTestCase_036384_2);

#define VkglTestCase_036385_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_036385_2 "its_mixed.rgba32i_rgba_astc_5x5_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036385, VkglTestCase_036385_1, VkglTestCase_036385_2);

#define VkglTestCase_036386_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036386_2 "mixed.rgba32i_rgba_astc_5x5_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036386, VkglTestCase_036386_1, VkglTestCase_036386_2);

#define VkglTestCase_036387_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_036387_2 "its_mixed.rgba32i_rgba_astc_5x5_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036387, VkglTestCase_036387_1, VkglTestCase_036387_2);

#define VkglTestCase_036388_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_036388_2 "its_mixed.rgba32i_rgba_astc_5x5_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036388, VkglTestCase_036388_1, VkglTestCase_036388_2);

#define VkglTestCase_036389_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_"
#define VkglTestCase_036389_2 "bits_mixed.rgba32i_rgba_astc_5x5_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036389, VkglTestCase_036389_1, VkglTestCase_036389_2);

#define VkglTestCase_036390_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_036390_2 "_mixed.rgba32i_rgba_astc_5x5_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036390, VkglTestCase_036390_1, VkglTestCase_036390_2);

#define VkglTestCase_036391_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036391_2 "mixed.rgba32i_rgba_astc_5x5_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036391, VkglTestCase_036391_1, VkglTestCase_036391_2);

#define VkglTestCase_036392_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_036392_2 "mixed.rgba32i_rgba_astc_5x5_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036392, VkglTestCase_036392_1, VkglTestCase_036392_2);

#define VkglTestCase_036393_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_036393_2 "_mixed.rgba32i_rgba_astc_5x5_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036393, VkglTestCase_036393_1, VkglTestCase_036393_2);

#define VkglTestCase_036394_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_036394_2 "ed.rgba32i_rgba_astc_5x5_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036394, VkglTestCase_036394_1, VkglTestCase_036394_2);

#define VkglTestCase_036395_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_036395_2 "_mixed.rgba32i_rgba_astc_5x5_khr.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036395, VkglTestCase_036395_1, VkglTestCase_036395_2);

#define VkglTestCase_036396_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_036396_2 "_mixed.rgba32i_rgba_astc_5x5_khr.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036396, VkglTestCase_036396_1, VkglTestCase_036396_2);

#define VkglTestCase_036397_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_036397_2 "s_mixed.rgba32i_rgba_astc_5x5_khr.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036397, VkglTestCase_036397_1, VkglTestCase_036397_2);

#define VkglTestCase_036398_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mi"
#define VkglTestCase_036398_2 "xed.rgba32i_rgba_astc_5x5_khr.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036398, VkglTestCase_036398_1, VkglTestCase_036398_2);
