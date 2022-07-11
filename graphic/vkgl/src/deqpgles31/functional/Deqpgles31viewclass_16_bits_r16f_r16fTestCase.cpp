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

#define VkglTestCase_031633_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_031633_2 "viewclass_16_bits.r16f_r16f.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031633, VkglTestCase_031633_1, VkglTestCase_031633_2);

#define VkglTestCase_031634_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_031634_2 "viewclass_16_bits.r16f_r16f.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031634, VkglTestCase_031634_1, VkglTestCase_031634_2);

#define VkglTestCase_031635_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_031635_2 ".viewclass_16_bits.r16f_r16f.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031635, VkglTestCase_031635_1, VkglTestCase_031635_2);

#define VkglTestCase_031636_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031636_2 "wclass_16_bits.r16f_r16f.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031636, VkglTestCase_031636_1, VkglTestCase_031636_2);

#define VkglTestCase_031637_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_031637_2 "viewclass_16_bits.r16f_r16f.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031637, VkglTestCase_031637_1, VkglTestCase_031637_2);

#define VkglTestCase_031638_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_031638_2 "viewclass_16_bits.r16f_r16f.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031638, VkglTestCase_031638_1, VkglTestCase_031638_2);

#define VkglTestCase_031639_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_031639_2 ".viewclass_16_bits.r16f_r16f.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031639, VkglTestCase_031639_1, VkglTestCase_031639_2);

#define VkglTestCase_031640_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031640_2 "wclass_16_bits.r16f_r16f.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031640, VkglTestCase_031640_1, VkglTestCase_031640_2);

#define VkglTestCase_031641_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_031641_2 ".viewclass_16_bits.r16f_r16f.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031641, VkglTestCase_031641_1, VkglTestCase_031641_2);

#define VkglTestCase_031642_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_031642_2 ".viewclass_16_bits.r16f_r16f.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031642, VkglTestCase_031642_1, VkglTestCase_031642_2);

#define VkglTestCase_031643_1 "dEQP-GLES31.functional.copy_image.non_compresse"
#define VkglTestCase_031643_2 "d.viewclass_16_bits.r16f_r16f.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031643, VkglTestCase_031643_1, VkglTestCase_031643_2);

#define VkglTestCase_031644_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031644_2 "ewclass_16_bits.r16f_r16f.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031644, VkglTestCase_031644_1, VkglTestCase_031644_2);

#define VkglTestCase_031645_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031645_2 "wclass_16_bits.r16f_r16f.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031645, VkglTestCase_031645_1, VkglTestCase_031645_2);

#define VkglTestCase_031646_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_031646_2 "wclass_16_bits.r16f_r16f.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031646, VkglTestCase_031646_1, VkglTestCase_031646_2);

#define VkglTestCase_031647_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_031647_2 "ewclass_16_bits.r16f_r16f.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031647, VkglTestCase_031647_1, VkglTestCase_031647_2);

#define VkglTestCase_031648_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_031648_2 "ass_16_bits.r16f_r16f.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310032TestSuite, TestCase_031648, VkglTestCase_031648_1, VkglTestCase_031648_2);
