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

#define VkglTestCase_026060_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026060_2 "ewclass_64_bits.rgba16i_rg32f.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026060, VkglTestCase_026060_1, VkglTestCase_026060_2);

#define VkglTestCase_026061_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026061_2 "ewclass_64_bits.rgba16i_rg32f.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026061, VkglTestCase_026061_1, VkglTestCase_026061_2);

#define VkglTestCase_026062_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_026062_2 "iewclass_64_bits.rgba16i_rg32f.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026062, VkglTestCase_026062_1, VkglTestCase_026062_2);

#define VkglTestCase_026063_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_026063_2 "lass_64_bits.rgba16i_rg32f.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026063, VkglTestCase_026063_1, VkglTestCase_026063_2);

#define VkglTestCase_026064_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026064_2 "ewclass_64_bits.rgba16i_rg32f.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026064, VkglTestCase_026064_1, VkglTestCase_026064_2);

#define VkglTestCase_026065_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_026065_2 "ewclass_64_bits.rgba16i_rg32f.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026065, VkglTestCase_026065_1, VkglTestCase_026065_2);

#define VkglTestCase_026066_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_026066_2 "iewclass_64_bits.rgba16i_rg32f.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026066, VkglTestCase_026066_1, VkglTestCase_026066_2);

#define VkglTestCase_026067_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_026067_2 "lass_64_bits.rgba16i_rg32f.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026067, VkglTestCase_026067_1, VkglTestCase_026067_2);

#define VkglTestCase_026068_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_026068_2 "iewclass_64_bits.rgba16i_rg32f.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026068, VkglTestCase_026068_1, VkglTestCase_026068_2);

#define VkglTestCase_026069_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_026069_2 "iewclass_64_bits.rgba16i_rg32f.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026069, VkglTestCase_026069_1, VkglTestCase_026069_2);

#define VkglTestCase_026070_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_026070_2 "viewclass_64_bits.rgba16i_rg32f.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026070, VkglTestCase_026070_1, VkglTestCase_026070_2);

#define VkglTestCase_026071_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026071_2 "class_64_bits.rgba16i_rg32f.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026071, VkglTestCase_026071_1, VkglTestCase_026071_2);

#define VkglTestCase_026072_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_026072_2 "lass_64_bits.rgba16i_rg32f.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026072, VkglTestCase_026072_1, VkglTestCase_026072_2);

#define VkglTestCase_026073_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_026073_2 "lass_64_bits.rgba16i_rg32f.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026073, VkglTestCase_026073_1, VkglTestCase_026073_2);

#define VkglTestCase_026074_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026074_2 "class_64_bits.rgba16i_rg32f.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026074, VkglTestCase_026074_1, VkglTestCase_026074_2);

#define VkglTestCase_026075_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_026075_2 "s_64_bits.rgba16i_rg32f.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026075, VkglTestCase_026075_1, VkglTestCase_026075_2);

#define VkglTestCase_026076_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026076_2 "class_64_bits.rgba16i_rg32f.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026076, VkglTestCase_026076_1, VkglTestCase_026076_2);

#define VkglTestCase_026077_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_026077_2 "class_64_bits.rgba16i_rg32f.renderbuffer_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026077, VkglTestCase_026077_1, VkglTestCase_026077_2);

#define VkglTestCase_026078_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_026078_2 "wclass_64_bits.rgba16i_rg32f.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026078, VkglTestCase_026078_1, VkglTestCase_026078_2);

#define VkglTestCase_026079_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_026079_2 "ss_64_bits.rgba16i_rg32f.renderbuffer_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310027TestSuite, TestCase_026079, VkglTestCase_026079_1, VkglTestCase_026079_2);
