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

#define VkglTestCase_033931_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x10_"
#define VkglTestCase_033931_2 "rgba.rgba_astc_12x10_khr_rgba_astc_12x10_khr.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033931, VkglTestCase_033931_1, VkglTestCase_033931_2);

#define VkglTestCase_033932_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x10_"
#define VkglTestCase_033932_2 "rgba.rgba_astc_12x10_khr_rgba_astc_12x10_khr.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033932, VkglTestCase_033932_1, VkglTestCase_033932_2);

#define VkglTestCase_033933_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x10"
#define VkglTestCase_033933_2 "_rgba.rgba_astc_12x10_khr_rgba_astc_12x10_khr.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033933, VkglTestCase_033933_1, VkglTestCase_033933_2);

#define VkglTestCase_033934_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x10_rgb"
#define VkglTestCase_033934_2 "a.rgba_astc_12x10_khr_rgba_astc_12x10_khr.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033934, VkglTestCase_033934_1, VkglTestCase_033934_2);

#define VkglTestCase_033935_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x10_"
#define VkglTestCase_033935_2 "rgba.rgba_astc_12x10_khr_rgba_astc_12x10_khr.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033935, VkglTestCase_033935_1, VkglTestCase_033935_2);

#define VkglTestCase_033936_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x10_"
#define VkglTestCase_033936_2 "rgba.rgba_astc_12x10_khr_rgba_astc_12x10_khr.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033936, VkglTestCase_033936_1, VkglTestCase_033936_2);

#define VkglTestCase_033937_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x10"
#define VkglTestCase_033937_2 "_rgba.rgba_astc_12x10_khr_rgba_astc_12x10_khr.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033937, VkglTestCase_033937_1, VkglTestCase_033937_2);

#define VkglTestCase_033938_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x10_rgb"
#define VkglTestCase_033938_2 "a.rgba_astc_12x10_khr_rgba_astc_12x10_khr.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033938, VkglTestCase_033938_1, VkglTestCase_033938_2);

#define VkglTestCase_033939_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x10"
#define VkglTestCase_033939_2 "_rgba.rgba_astc_12x10_khr_rgba_astc_12x10_khr.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033939, VkglTestCase_033939_1, VkglTestCase_033939_2);

#define VkglTestCase_033940_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x10"
#define VkglTestCase_033940_2 "_rgba.rgba_astc_12x10_khr_rgba_astc_12x10_khr.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033940, VkglTestCase_033940_1, VkglTestCase_033940_2);

#define VkglTestCase_033941_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x1"
#define VkglTestCase_033941_2 "0_rgba.rgba_astc_12x10_khr_rgba_astc_12x10_khr.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033941, VkglTestCase_033941_1, VkglTestCase_033941_2);

#define VkglTestCase_033942_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x10_rg"
#define VkglTestCase_033942_2 "ba.rgba_astc_12x10_khr_rgba_astc_12x10_khr.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033942, VkglTestCase_033942_1, VkglTestCase_033942_2);

#define VkglTestCase_033943_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x10_rgb"
#define VkglTestCase_033943_2 "a.rgba_astc_12x10_khr_rgba_astc_12x10_khr.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033943, VkglTestCase_033943_1, VkglTestCase_033943_2);

#define VkglTestCase_033944_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x10_rgb"
#define VkglTestCase_033944_2 "a.rgba_astc_12x10_khr_rgba_astc_12x10_khr.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033944, VkglTestCase_033944_1, VkglTestCase_033944_2);

#define VkglTestCase_033945_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x10_rg"
#define VkglTestCase_033945_2 "ba.rgba_astc_12x10_khr_rgba_astc_12x10_khr.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033945, VkglTestCase_033945_1, VkglTestCase_033945_2);

#define VkglTestCase_033946_1 "dEQP-GLES31.functional.copy_image.compressed.viewclass_astc_12x10_rgba.r"
#define VkglTestCase_033946_2 "gba_astc_12x10_khr_rgba_astc_12x10_khr.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033946, VkglTestCase_033946_1, VkglTestCase_033946_2);
