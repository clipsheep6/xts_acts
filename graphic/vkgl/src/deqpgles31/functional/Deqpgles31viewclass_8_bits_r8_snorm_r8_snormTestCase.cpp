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

#define VkglTestCase_033067_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_033067_2 "class_8_bits.r8_snorm_r8_snorm.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033067, VkglTestCase_033067_1, VkglTestCase_033067_2);

#define VkglTestCase_033068_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_033068_2 "class_8_bits.r8_snorm_r8_snorm.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033068, VkglTestCase_033068_1, VkglTestCase_033068_2);

#define VkglTestCase_033069_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_033069_2 "wclass_8_bits.r8_snorm_r8_snorm.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033069, VkglTestCase_033069_1, VkglTestCase_033069_2);

#define VkglTestCase_033070_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_033070_2 "ss_8_bits.r8_snorm_r8_snorm.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033070, VkglTestCase_033070_1, VkglTestCase_033070_2);

#define VkglTestCase_033071_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_033071_2 "class_8_bits.r8_snorm_r8_snorm.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033071, VkglTestCase_033071_1, VkglTestCase_033071_2);

#define VkglTestCase_033072_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_033072_2 "class_8_bits.r8_snorm_r8_snorm.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033072, VkglTestCase_033072_1, VkglTestCase_033072_2);

#define VkglTestCase_033073_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_033073_2 "wclass_8_bits.r8_snorm_r8_snorm.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033073, VkglTestCase_033073_1, VkglTestCase_033073_2);

#define VkglTestCase_033074_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_033074_2 "ss_8_bits.r8_snorm_r8_snorm.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033074, VkglTestCase_033074_1, VkglTestCase_033074_2);

#define VkglTestCase_033075_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_033075_2 "wclass_8_bits.r8_snorm_r8_snorm.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033075, VkglTestCase_033075_1, VkglTestCase_033075_2);

#define VkglTestCase_033076_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_033076_2 "wclass_8_bits.r8_snorm_r8_snorm.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033076, VkglTestCase_033076_1, VkglTestCase_033076_2);

#define VkglTestCase_033077_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_033077_2 "ewclass_8_bits.r8_snorm_r8_snorm.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033077, VkglTestCase_033077_1, VkglTestCase_033077_2);

#define VkglTestCase_033078_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_033078_2 "ass_8_bits.r8_snorm_r8_snorm.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033078, VkglTestCase_033078_1, VkglTestCase_033078_2);

#define VkglTestCase_033079_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_033079_2 "ss_8_bits.r8_snorm_r8_snorm.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033079, VkglTestCase_033079_1, VkglTestCase_033079_2);

#define VkglTestCase_033080_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_033080_2 "ss_8_bits.r8_snorm_r8_snorm.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033080, VkglTestCase_033080_1, VkglTestCase_033080_2);

#define VkglTestCase_033081_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_033081_2 "ass_8_bits.r8_snorm_r8_snorm.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033081, VkglTestCase_033081_1, VkglTestCase_033081_2);

#define VkglTestCase_033082_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_033082_2 "8_bits.r8_snorm_r8_snorm.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310034TestSuite, TestCase_033082, VkglTestCase_033082_1, VkglTestCase_033082_2);
