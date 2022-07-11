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
#include "../ActsDeqpgles310026TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_025588_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_025588_2 "iewclass_64_bits.rg32f_rg32f.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025588, VkglTestCase_025588_1, VkglTestCase_025588_2);

#define VkglTestCase_025589_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_025589_2 "iewclass_64_bits.rg32f_rg32f.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025589, VkglTestCase_025589_1, VkglTestCase_025589_2);

#define VkglTestCase_025590_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_025590_2 "viewclass_64_bits.rg32f_rg32f.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025590, VkglTestCase_025590_1, VkglTestCase_025590_2);

#define VkglTestCase_025591_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_025591_2 "class_64_bits.rg32f_rg32f.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025591, VkglTestCase_025591_1, VkglTestCase_025591_2);

#define VkglTestCase_025592_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_025592_2 "iewclass_64_bits.rg32f_rg32f.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025592, VkglTestCase_025592_1, VkglTestCase_025592_2);

#define VkglTestCase_025593_1 "dEQP-GLES31.functional.copy_image.non_compressed.v"
#define VkglTestCase_025593_2 "iewclass_64_bits.rg32f_rg32f.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025593, VkglTestCase_025593_1, VkglTestCase_025593_2);

#define VkglTestCase_025594_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_025594_2 "viewclass_64_bits.rg32f_rg32f.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025594, VkglTestCase_025594_1, VkglTestCase_025594_2);

#define VkglTestCase_025595_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_025595_2 "class_64_bits.rg32f_rg32f.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025595, VkglTestCase_025595_1, VkglTestCase_025595_2);

#define VkglTestCase_025596_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_025596_2 "viewclass_64_bits.rg32f_rg32f.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025596, VkglTestCase_025596_1, VkglTestCase_025596_2);

#define VkglTestCase_025597_1 "dEQP-GLES31.functional.copy_image.non_compressed."
#define VkglTestCase_025597_2 "viewclass_64_bits.rg32f_rg32f.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025597, VkglTestCase_025597_1, VkglTestCase_025597_2);

#define VkglTestCase_025598_1 "dEQP-GLES31.functional.copy_image.non_compressed"
#define VkglTestCase_025598_2 ".viewclass_64_bits.rg32f_rg32f.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025598, VkglTestCase_025598_1, VkglTestCase_025598_2);

#define VkglTestCase_025599_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_025599_2 "wclass_64_bits.rg32f_rg32f.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025599, VkglTestCase_025599_1, VkglTestCase_025599_2);

#define VkglTestCase_025600_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_025600_2 "class_64_bits.rg32f_rg32f.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025600, VkglTestCase_025600_1, VkglTestCase_025600_2);

#define VkglTestCase_025601_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_025601_2 "class_64_bits.rg32f_rg32f.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025601, VkglTestCase_025601_1, VkglTestCase_025601_2);

#define VkglTestCase_025602_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_025602_2 "wclass_64_bits.rg32f_rg32f.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025602, VkglTestCase_025602_1, VkglTestCase_025602_2);

#define VkglTestCase_025603_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_025603_2 "ss_64_bits.rg32f_rg32f.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310026TestSuite, TestCase_025603, VkglTestCase_025603_1, VkglTestCase_025603_2);
