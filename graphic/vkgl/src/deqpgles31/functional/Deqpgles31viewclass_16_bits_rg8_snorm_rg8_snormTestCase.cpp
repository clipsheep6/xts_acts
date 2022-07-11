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

#define VkglTestCase_032706_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_032706_2 "lass_16_bits.rg8_snorm_rg8_snorm.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032706, VkglTestCase_032706_1, VkglTestCase_032706_2);

#define VkglTestCase_032707_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_032707_2 "lass_16_bits.rg8_snorm_rg8_snorm.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032707, VkglTestCase_032707_1, VkglTestCase_032707_2);

#define VkglTestCase_032708_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_032708_2 "class_16_bits.rg8_snorm_rg8_snorm.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032708, VkglTestCase_032708_1, VkglTestCase_032708_2);

#define VkglTestCase_032709_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_032709_2 "s_16_bits.rg8_snorm_rg8_snorm.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032709, VkglTestCase_032709_1, VkglTestCase_032709_2);

#define VkglTestCase_032710_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_032710_2 "lass_16_bits.rg8_snorm_rg8_snorm.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032710, VkglTestCase_032710_1, VkglTestCase_032710_2);

#define VkglTestCase_032711_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewc"
#define VkglTestCase_032711_2 "lass_16_bits.rg8_snorm_rg8_snorm.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032711, VkglTestCase_032711_1, VkglTestCase_032711_2);

#define VkglTestCase_032712_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_032712_2 "class_16_bits.rg8_snorm_rg8_snorm.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032712, VkglTestCase_032712_1, VkglTestCase_032712_2);

#define VkglTestCase_032713_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_032713_2 "s_16_bits.rg8_snorm_rg8_snorm.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032713, VkglTestCase_032713_1, VkglTestCase_032713_2);

#define VkglTestCase_032714_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_032714_2 "class_16_bits.rg8_snorm_rg8_snorm.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032714, VkglTestCase_032714_1, VkglTestCase_032714_2);

#define VkglTestCase_032715_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_032715_2 "class_16_bits.rg8_snorm_rg8_snorm.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032715, VkglTestCase_032715_1, VkglTestCase_032715_2);

#define VkglTestCase_032716_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_032716_2 "wclass_16_bits.rg8_snorm_rg8_snorm.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032716, VkglTestCase_032716_1, VkglTestCase_032716_2);

#define VkglTestCase_032717_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_032717_2 "ss_16_bits.rg8_snorm_rg8_snorm.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032717, VkglTestCase_032717_1, VkglTestCase_032717_2);

#define VkglTestCase_032718_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_032718_2 "s_16_bits.rg8_snorm_rg8_snorm.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032718, VkglTestCase_032718_1, VkglTestCase_032718_2);

#define VkglTestCase_032719_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclas"
#define VkglTestCase_032719_2 "s_16_bits.rg8_snorm_rg8_snorm.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032719, VkglTestCase_032719_1, VkglTestCase_032719_2);

#define VkglTestCase_032720_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_032720_2 "ss_16_bits.rg8_snorm_rg8_snorm.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032720, VkglTestCase_032720_1, VkglTestCase_032720_2);

#define VkglTestCase_032721_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_1"
#define VkglTestCase_032721_2 "6_bits.rg8_snorm_rg8_snorm.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310033TestSuite, TestCase_032721, VkglTestCase_032721_1, VkglTestCase_032721_2);
