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
#include "../ActsDeqpgles310030TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_029980_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_029980_2 "ewclass_32_bits.rgb10_a2_r32f.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029980, VkglTestCase_029980_1, VkglTestCase_029980_2);

#define VkglTestCase_029981_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_029981_2 "ewclass_32_bits.rgb10_a2_r32f.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029981, VkglTestCase_029981_1, VkglTestCase_029981_2);

#define VkglTestCase_029982_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_029982_2 "iewclass_32_bits.rgb10_a2_r32f.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029982, VkglTestCase_029982_1, VkglTestCase_029982_2);

#define VkglTestCase_029983_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029983_2 "lass_32_bits.rgb10_a2_r32f.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029983, VkglTestCase_029983_1, VkglTestCase_029983_2);

#define VkglTestCase_029984_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_029984_2 "ewclass_32_bits.rgb10_a2_r32f.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029984, VkglTestCase_029984_1, VkglTestCase_029984_2);

#define VkglTestCase_029985_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_029985_2 "ewclass_32_bits.rgb10_a2_r32f.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029985, VkglTestCase_029985_1, VkglTestCase_029985_2);

#define VkglTestCase_029986_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_029986_2 "iewclass_32_bits.rgb10_a2_r32f.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029986, VkglTestCase_029986_1, VkglTestCase_029986_2);

#define VkglTestCase_029987_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029987_2 "lass_32_bits.rgb10_a2_r32f.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029987, VkglTestCase_029987_1, VkglTestCase_029987_2);

#define VkglTestCase_029988_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_029988_2 "iewclass_32_bits.rgb10_a2_r32f.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029988, VkglTestCase_029988_1, VkglTestCase_029988_2);

#define VkglTestCase_029989_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_029989_2 "iewclass_32_bits.rgb10_a2_r32f.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029989, VkglTestCase_029989_1, VkglTestCase_029989_2);

#define VkglTestCase_029990_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_029990_2 "viewclass_32_bits.rgb10_a2_r32f.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029990, VkglTestCase_029990_1, VkglTestCase_029990_2);

#define VkglTestCase_029991_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_029991_2 "class_32_bits.rgb10_a2_r32f.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029991, VkglTestCase_029991_1, VkglTestCase_029991_2);

#define VkglTestCase_029992_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029992_2 "lass_32_bits.rgb10_a2_r32f.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029992, VkglTestCase_029992_1, VkglTestCase_029992_2);

#define VkglTestCase_029993_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_029993_2 "lass_32_bits.rgb10_a2_r32f.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029993, VkglTestCase_029993_1, VkglTestCase_029993_2);

#define VkglTestCase_029994_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_029994_2 "class_32_bits.rgb10_a2_r32f.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029994, VkglTestCase_029994_1, VkglTestCase_029994_2);

#define VkglTestCase_029995_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_029995_2 "s_32_bits.rgb10_a2_r32f.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029995, VkglTestCase_029995_1, VkglTestCase_029995_2);

#define VkglTestCase_029996_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_029996_2 "class_32_bits.rgb10_a2_r32f.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029996, VkglTestCase_029996_1, VkglTestCase_029996_2);

#define VkglTestCase_029997_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_029997_2 "class_32_bits.rgb10_a2_r32f.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029997, VkglTestCase_029997_1, VkglTestCase_029997_2);

#define VkglTestCase_029998_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_029998_2 "wclass_32_bits.rgb10_a2_r32f.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029998, VkglTestCase_029998_1, VkglTestCase_029998_2);

#define VkglTestCase_029999_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_029999_2 "ss_32_bits.rgb10_a2_r32f.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310030TestSuite, TestCase_029999, VkglTestCase_029999_1, VkglTestCase_029999_2);
