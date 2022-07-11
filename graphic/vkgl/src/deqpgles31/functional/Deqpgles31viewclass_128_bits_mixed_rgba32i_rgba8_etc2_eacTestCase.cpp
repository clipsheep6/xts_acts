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

#define VkglTestCase_036219_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_036219_2 "its_mixed.rgba32i_rgba8_etc2_eac.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036219, VkglTestCase_036219_1, VkglTestCase_036219_2);

#define VkglTestCase_036220_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_"
#define VkglTestCase_036220_2 "bits_mixed.rgba32i_rgba8_etc2_eac.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036220, VkglTestCase_036220_1, VkglTestCase_036220_2);

#define VkglTestCase_036221_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_036221_2 "its_mixed.rgba32i_rgba8_etc2_eac.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036221, VkglTestCase_036221_1, VkglTestCase_036221_2);

#define VkglTestCase_036222_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_"
#define VkglTestCase_036222_2 "bits_mixed.rgba32i_rgba8_etc2_eac.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036222, VkglTestCase_036222_1, VkglTestCase_036222_2);

#define VkglTestCase_036223_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_"
#define VkglTestCase_036223_2 "bits_mixed.rgba32i_rgba8_etc2_eac.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036223, VkglTestCase_036223_1, VkglTestCase_036223_2);

#define VkglTestCase_036224_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128"
#define VkglTestCase_036224_2 "_bits_mixed.rgba32i_rgba8_etc2_eac.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036224, VkglTestCase_036224_1, VkglTestCase_036224_2);

#define VkglTestCase_036225_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_036225_2 "_mixed.rgba32i_rgba8_etc2_eac.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036225, VkglTestCase_036225_1, VkglTestCase_036225_2);

#define VkglTestCase_036226_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_036226_2 "s_mixed.rgba32i_rgba8_etc2_eac.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036226, VkglTestCase_036226_1, VkglTestCase_036226_2);

#define VkglTestCase_036227_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_036227_2 "ts_mixed.rgba32i_rgba8_etc2_eac.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036227, VkglTestCase_036227_1, VkglTestCase_036227_2);

#define VkglTestCase_036228_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_036228_2 "its_mixed.rgba32i_rgba8_etc2_eac.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036228, VkglTestCase_036228_1, VkglTestCase_036228_2);
