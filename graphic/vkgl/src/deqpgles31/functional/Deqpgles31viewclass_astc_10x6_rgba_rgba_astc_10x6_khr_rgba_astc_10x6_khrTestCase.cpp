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
#include "../ActsDeqpgles310034TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_033739_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x6_"
#define VkglTestCase_033739_2 "rgba.rgba_astc_10x6_khr_rgba_astc_10x6_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033739, VkglTestCase_033739_1, VkglTestCase_033739_2);

#define VkglTestCase_033740_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x6_"
#define VkglTestCase_033740_2 "rgba.rgba_astc_10x6_khr_rgba_astc_10x6_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033740, VkglTestCase_033740_1, VkglTestCase_033740_2);

#define VkglTestCase_033741_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x6"
#define VkglTestCase_033741_2 "_rgba.rgba_astc_10x6_khr_rgba_astc_10x6_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033741, VkglTestCase_033741_1, VkglTestCase_033741_2);

#define VkglTestCase_033742_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x6_rgb"
#define VkglTestCase_033742_2 "a.rgba_astc_10x6_khr_rgba_astc_10x6_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033742, VkglTestCase_033742_1, VkglTestCase_033742_2);

#define VkglTestCase_033743_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x6_"
#define VkglTestCase_033743_2 "rgba.rgba_astc_10x6_khr_rgba_astc_10x6_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033743, VkglTestCase_033743_1, VkglTestCase_033743_2);

#define VkglTestCase_033744_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x6_"
#define VkglTestCase_033744_2 "rgba.rgba_astc_10x6_khr_rgba_astc_10x6_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033744, VkglTestCase_033744_1, VkglTestCase_033744_2);

#define VkglTestCase_033745_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x6"
#define VkglTestCase_033745_2 "_rgba.rgba_astc_10x6_khr_rgba_astc_10x6_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033745, VkglTestCase_033745_1, VkglTestCase_033745_2);

#define VkglTestCase_033746_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x6_rgb"
#define VkglTestCase_033746_2 "a.rgba_astc_10x6_khr_rgba_astc_10x6_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033746, VkglTestCase_033746_1, VkglTestCase_033746_2);

#define VkglTestCase_033747_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x6"
#define VkglTestCase_033747_2 "_rgba.rgba_astc_10x6_khr_rgba_astc_10x6_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033747, VkglTestCase_033747_1, VkglTestCase_033747_2);

#define VkglTestCase_033748_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x6"
#define VkglTestCase_033748_2 "_rgba.rgba_astc_10x6_khr_rgba_astc_10x6_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033748, VkglTestCase_033748_1, VkglTestCase_033748_2);

#define VkglTestCase_033749_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x"
#define VkglTestCase_033749_2 "6_rgba.rgba_astc_10x6_khr_rgba_astc_10x6_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033749, VkglTestCase_033749_1, VkglTestCase_033749_2);

#define VkglTestCase_033750_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x6_rg"
#define VkglTestCase_033750_2 "ba.rgba_astc_10x6_khr_rgba_astc_10x6_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033750, VkglTestCase_033750_1, VkglTestCase_033750_2);

#define VkglTestCase_033751_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x6_rgb"
#define VkglTestCase_033751_2 "a.rgba_astc_10x6_khr_rgba_astc_10x6_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033751, VkglTestCase_033751_1, VkglTestCase_033751_2);

#define VkglTestCase_033752_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x6_rgb"
#define VkglTestCase_033752_2 "a.rgba_astc_10x6_khr_rgba_astc_10x6_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033752, VkglTestCase_033752_1, VkglTestCase_033752_2);

#define VkglTestCase_033753_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x6_rg"
#define VkglTestCase_033753_2 "ba.rgba_astc_10x6_khr_rgba_astc_10x6_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033753, VkglTestCase_033753_1, VkglTestCase_033753_2);

#define VkglTestCase_033754_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_10x6_rgba.r"
#define VkglTestCase_033754_2 "gba_astc_10x6_khr_rgba_astc_10x6_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033754, VkglTestCase_033754_1, VkglTestCase_033754_2);
