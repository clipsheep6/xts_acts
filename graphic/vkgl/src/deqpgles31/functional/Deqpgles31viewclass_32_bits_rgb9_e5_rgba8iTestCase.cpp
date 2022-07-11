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
#include "../ActsDeqpgles310032TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_031060_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031060_2 "wclass_32_bits.rgb9_e5_rgba8i.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031060, VkglTestCase_031060_1, VkglTestCase_031060_2);

#define VkglTestCase_031061_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031061_2 "wclass_32_bits.rgb9_e5_rgba8i.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031061, VkglTestCase_031061_1, VkglTestCase_031061_2);

#define VkglTestCase_031062_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031062_2 "ewclass_32_bits.rgb9_e5_rgba8i.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031062, VkglTestCase_031062_1, VkglTestCase_031062_2);

#define VkglTestCase_031063_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_031063_2 "ass_32_bits.rgb9_e5_rgba8i.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031063, VkglTestCase_031063_1, VkglTestCase_031063_2);

#define VkglTestCase_031064_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031064_2 "class_32_bits.rgb9_e5_rgba8i.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031064, VkglTestCase_031064_1, VkglTestCase_031064_2);

#define VkglTestCase_031065_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031065_2 "wclass_32_bits.rgb9_e5_rgba8i.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031065, VkglTestCase_031065_1, VkglTestCase_031065_2);

#define VkglTestCase_031066_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031066_2 "wclass_32_bits.rgb9_e5_rgba8i.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031066, VkglTestCase_031066_1, VkglTestCase_031066_2);

#define VkglTestCase_031067_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031067_2 "ewclass_32_bits.rgb9_e5_rgba8i.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031067, VkglTestCase_031067_1, VkglTestCase_031067_2);

#define VkglTestCase_031068_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_031068_2 "ass_32_bits.rgb9_e5_rgba8i.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031068, VkglTestCase_031068_1, VkglTestCase_031068_2);

#define VkglTestCase_031069_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_031069_2 "class_32_bits.rgb9_e5_rgba8i.texture3d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031069, VkglTestCase_031069_1, VkglTestCase_031069_2);

#define VkglTestCase_031070_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031070_2 "ewclass_32_bits.rgb9_e5_rgba8i.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031070, VkglTestCase_031070_1, VkglTestCase_031070_2);

#define VkglTestCase_031071_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031071_2 "ewclass_32_bits.rgb9_e5_rgba8i.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031071, VkglTestCase_031071_1, VkglTestCase_031071_2);

#define VkglTestCase_031072_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_031072_2 "iewclass_32_bits.rgb9_e5_rgba8i.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031072, VkglTestCase_031072_1, VkglTestCase_031072_2);

#define VkglTestCase_031073_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_031073_2 "lass_32_bits.rgb9_e5_rgba8i.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031073, VkglTestCase_031073_1, VkglTestCase_031073_2);

#define VkglTestCase_031074_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031074_2 "wclass_32_bits.rgb9_e5_rgba8i.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031074, VkglTestCase_031074_1, VkglTestCase_031074_2);

#define VkglTestCase_031075_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_031075_2 "ass_32_bits.rgb9_e5_rgba8i.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031075, VkglTestCase_031075_1, VkglTestCase_031075_2);

#define VkglTestCase_031076_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_031076_2 "ass_32_bits.rgb9_e5_rgba8i.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031076, VkglTestCase_031076_1, VkglTestCase_031076_2);

#define VkglTestCase_031077_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_031077_2 "lass_32_bits.rgb9_e5_rgba8i.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031077, VkglTestCase_031077_1, VkglTestCase_031077_2);

#define VkglTestCase_031078_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass"
#define VkglTestCase_031078_2 "_32_bits.rgb9_e5_rgba8i.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031078, VkglTestCase_031078_1, VkglTestCase_031078_2);

#define VkglTestCase_031079_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_031079_2 "ss_32_bits.rgb9_e5_rgba8i.texture2d_array_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031079, VkglTestCase_031079_1, VkglTestCase_031079_2);
