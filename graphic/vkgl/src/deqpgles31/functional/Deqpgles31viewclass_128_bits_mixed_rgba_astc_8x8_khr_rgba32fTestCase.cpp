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
#include "../ActsDeqpgles310035TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_034363_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_034363_2 "ts_mixed.rgba_astc_8x8_khr_rgba32f.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034363, VkglTestCase_034363_1, VkglTestCase_034363_2);

#define VkglTestCase_034364_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_034364_2 "ts_mixed.rgba_astc_8x8_khr_rgba32f.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034364, VkglTestCase_034364_1, VkglTestCase_034364_2);

#define VkglTestCase_034365_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_034365_2 "its_mixed.rgba_astc_8x8_khr_rgba32f.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034365, VkglTestCase_034365_1, VkglTestCase_034365_2);

#define VkglTestCase_034366_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034366_2 "mixed.rgba_astc_8x8_khr_rgba32f.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034366, VkglTestCase_034366_1, VkglTestCase_034366_2);

#define VkglTestCase_034367_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_034367_2 "ts_mixed.rgba_astc_8x8_khr_rgba32f.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034367, VkglTestCase_034367_1, VkglTestCase_034367_2);

#define VkglTestCase_034368_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_034368_2 "ts_mixed.rgba_astc_8x8_khr_rgba32f.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034368, VkglTestCase_034368_1, VkglTestCase_034368_2);

#define VkglTestCase_034369_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_034369_2 "its_mixed.rgba_astc_8x8_khr_rgba32f.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034369, VkglTestCase_034369_1, VkglTestCase_034369_2);

#define VkglTestCase_034370_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034370_2 "mixed.rgba_astc_8x8_khr_rgba32f.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034370, VkglTestCase_034370_1, VkglTestCase_034370_2);

#define VkglTestCase_034371_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_034371_2 "its_mixed.rgba_astc_8x8_khr_rgba32f.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034371, VkglTestCase_034371_1, VkglTestCase_034371_2);

#define VkglTestCase_034372_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_034372_2 "its_mixed.rgba_astc_8x8_khr_rgba32f.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034372, VkglTestCase_034372_1, VkglTestCase_034372_2);

#define VkglTestCase_034373_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_"
#define VkglTestCase_034373_2 "bits_mixed.rgba_astc_8x8_khr_rgba32f.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034373, VkglTestCase_034373_1, VkglTestCase_034373_2);

#define VkglTestCase_034374_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_034374_2 "_mixed.rgba_astc_8x8_khr_rgba32f.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034374, VkglTestCase_034374_1, VkglTestCase_034374_2);

#define VkglTestCase_034375_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034375_2 "mixed.rgba_astc_8x8_khr_rgba32f.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034375, VkglTestCase_034375_1, VkglTestCase_034375_2);

#define VkglTestCase_034376_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_"
#define VkglTestCase_034376_2 "mixed.rgba_astc_8x8_khr_rgba32f.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034376, VkglTestCase_034376_1, VkglTestCase_034376_2);

#define VkglTestCase_034377_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_034377_2 "_mixed.rgba_astc_8x8_khr_rgba32f.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034377, VkglTestCase_034377_1, VkglTestCase_034377_2);

#define VkglTestCase_034378_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits_mix"
#define VkglTestCase_034378_2 "ed.rgba_astc_8x8_khr_rgba32f.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034378, VkglTestCase_034378_1, VkglTestCase_034378_2);
