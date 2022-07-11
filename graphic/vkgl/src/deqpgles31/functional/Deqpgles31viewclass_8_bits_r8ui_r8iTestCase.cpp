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

#define VkglTestCase_032937_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_032937_2 ".viewclass_8_bits.r8ui_r8i.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032937, VkglTestCase_032937_1, VkglTestCase_032937_2);

#define VkglTestCase_032938_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_032938_2 ".viewclass_8_bits.r8ui_r8i.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032938, VkglTestCase_032938_1, VkglTestCase_032938_2);

#define VkglTestCase_032939_1 "dEQP-GLES31.functional.copy_image.non_compresse"
#define VkglTestCase_032939_2 "d.viewclass_8_bits.r8ui_r8i.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032939, VkglTestCase_032939_1, VkglTestCase_032939_2);

#define VkglTestCase_032940_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032940_2 "ewclass_8_bits.r8ui_r8i.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032940, VkglTestCase_032940_1, VkglTestCase_032940_2);

#define VkglTestCase_032941_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032941_2 "iewclass_8_bits.r8ui_r8i.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032941, VkglTestCase_032941_1, VkglTestCase_032941_2);

#define VkglTestCase_032942_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_032942_2 ".viewclass_8_bits.r8ui_r8i.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032942, VkglTestCase_032942_1, VkglTestCase_032942_2);

#define VkglTestCase_032943_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_032943_2 ".viewclass_8_bits.r8ui_r8i.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032943, VkglTestCase_032943_1, VkglTestCase_032943_2);

#define VkglTestCase_032944_1 "dEQP-GLES31.functional.copy_image.non_compresse"
#define VkglTestCase_032944_2 "d.viewclass_8_bits.r8ui_r8i.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032944, VkglTestCase_032944_1, VkglTestCase_032944_2);

#define VkglTestCase_032945_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032945_2 "ewclass_8_bits.r8ui_r8i.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032945, VkglTestCase_032945_1, VkglTestCase_032945_2);

#define VkglTestCase_032946_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032946_2 "iewclass_8_bits.r8ui_r8i.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032946, VkglTestCase_032946_1, VkglTestCase_032946_2);

#define VkglTestCase_032947_1 "dEQP-GLES31.functional.copy_image.non_compresse"
#define VkglTestCase_032947_2 "d.viewclass_8_bits.r8ui_r8i.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032947, VkglTestCase_032947_1, VkglTestCase_032947_2);

#define VkglTestCase_032948_1 "dEQP-GLES31.functional.copy_image.non_compresse"
#define VkglTestCase_032948_2 "d.viewclass_8_bits.r8ui_r8i.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032948, VkglTestCase_032948_1, VkglTestCase_032948_2);

#define VkglTestCase_032949_1 "dEQP-GLES31.functional.copy_image.non_compress"
#define VkglTestCase_032949_2 "ed.viewclass_8_bits.r8ui_r8i.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032949, VkglTestCase_032949_1, VkglTestCase_032949_2);

#define VkglTestCase_032950_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032950_2 "iewclass_8_bits.r8ui_r8i.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032950, VkglTestCase_032950_1, VkglTestCase_032950_2);

#define VkglTestCase_032951_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032951_2 "viewclass_8_bits.r8ui_r8i.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032951, VkglTestCase_032951_1, VkglTestCase_032951_2);

#define VkglTestCase_032952_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032952_2 "ewclass_8_bits.r8ui_r8i.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032952, VkglTestCase_032952_1, VkglTestCase_032952_2);

#define VkglTestCase_032953_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032953_2 "ewclass_8_bits.r8ui_r8i.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032953, VkglTestCase_032953_1, VkglTestCase_032953_2);

#define VkglTestCase_032954_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032954_2 "iewclass_8_bits.r8ui_r8i.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032954, VkglTestCase_032954_1, VkglTestCase_032954_2);

#define VkglTestCase_032955_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_032955_2 "lass_8_bits.r8ui_r8i.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032955, VkglTestCase_032955_1, VkglTestCase_032955_2);

#define VkglTestCase_032956_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_032956_2 "class_8_bits.r8ui_r8i.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032956, VkglTestCase_032956_1, VkglTestCase_032956_2);

#define VkglTestCase_032957_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032957_2 "iewclass_8_bits.r8ui_r8i.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032957, VkglTestCase_032957_1, VkglTestCase_032957_2);

#define VkglTestCase_032958_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_032958_2 "iewclass_8_bits.r8ui_r8i.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032958, VkglTestCase_032958_1, VkglTestCase_032958_2);

#define VkglTestCase_032959_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_032959_2 "viewclass_8_bits.r8ui_r8i.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032959, VkglTestCase_032959_1, VkglTestCase_032959_2);

#define VkglTestCase_032960_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_032960_2 "class_8_bits.r8ui_r8i.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032960, VkglTestCase_032960_1, VkglTestCase_032960_2);

#define VkglTestCase_032961_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_032961_2 "ewclass_8_bits.r8ui_r8i.renderbuffer_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032961, VkglTestCase_032961_1, VkglTestCase_032961_2);
