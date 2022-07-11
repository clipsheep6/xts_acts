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

#define VkglTestCase_036229_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_036229_2 "its_mixed.rgba8_etc2_eac_rgba32i.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036229, VkglTestCase_036229_1, VkglTestCase_036229_2);

#define VkglTestCase_036230_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_036230_2 "its_mixed.rgba8_etc2_eac_rgba32i.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036230, VkglTestCase_036230_1, VkglTestCase_036230_2);

#define VkglTestCase_036231_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_"
#define VkglTestCase_036231_2 "bits_mixed.rgba8_etc2_eac_rgba32i.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036231, VkglTestCase_036231_1, VkglTestCase_036231_2);

#define VkglTestCase_036232_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_036232_2 "_mixed.rgba8_etc2_eac_rgba32i.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036232, VkglTestCase_036232_1, VkglTestCase_036232_2);

#define VkglTestCase_036233_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bi"
#define VkglTestCase_036233_2 "ts_mixed.rgba8_etc2_eac_rgba32i.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036233, VkglTestCase_036233_1, VkglTestCase_036233_2);

#define VkglTestCase_036234_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_"
#define VkglTestCase_036234_2 "bits_mixed.rgba8_etc2_eac_rgba32i.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036234, VkglTestCase_036234_1, VkglTestCase_036234_2);

#define VkglTestCase_036235_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_"
#define VkglTestCase_036235_2 "bits_mixed.rgba8_etc2_eac_rgba32i.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036235, VkglTestCase_036235_1, VkglTestCase_036235_2);

#define VkglTestCase_036236_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128"
#define VkglTestCase_036236_2 "_bits_mixed.rgba8_etc2_eac_rgba32i.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036236, VkglTestCase_036236_1, VkglTestCase_036236_2);

#define VkglTestCase_036237_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_036237_2 "s_mixed.rgba8_etc2_eac_rgba32i.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036237, VkglTestCase_036237_1, VkglTestCase_036237_2);

#define VkglTestCase_036238_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_036238_2 "its_mixed.rgba8_etc2_eac_rgba32i.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310037TestSuite, TestCase_036238, VkglTestCase_036238_1, VkglTestCase_036238_2);
