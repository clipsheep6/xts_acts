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
#include "../ActsDeqpgles310028TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_027612_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027612_2 "class_32_bits.rg16f_rgba8_snorm.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027612, VkglTestCase_027612_1, VkglTestCase_027612_2);

#define VkglTestCase_027613_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027613_2 "class_32_bits.rg16f_rgba8_snorm.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027613, VkglTestCase_027613_1, VkglTestCase_027613_2);

#define VkglTestCase_027614_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027614_2 "wclass_32_bits.rg16f_rgba8_snorm.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027614, VkglTestCase_027614_1, VkglTestCase_027614_2);

#define VkglTestCase_027615_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_027615_2 "ss_32_bits.rg16f_rgba8_snorm.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027615, VkglTestCase_027615_1, VkglTestCase_027615_2);

#define VkglTestCase_027616_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027616_2 "class_32_bits.rg16f_rgba8_snorm.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027616, VkglTestCase_027616_1, VkglTestCase_027616_2);

#define VkglTestCase_027617_1 "dEQP-GLES31.functional.copy_image.non_compressed.view"
#define VkglTestCase_027617_2 "class_32_bits.rg16f_rgba8_snorm.texture3d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027617, VkglTestCase_027617_1, VkglTestCase_027617_2);

#define VkglTestCase_027618_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027618_2 "wclass_32_bits.rg16f_rgba8_snorm.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027618, VkglTestCase_027618_1, VkglTestCase_027618_2);

#define VkglTestCase_027619_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_027619_2 "ss_32_bits.rg16f_rgba8_snorm.texture3d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027619, VkglTestCase_027619_1, VkglTestCase_027619_2);

#define VkglTestCase_027620_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027620_2 "wclass_32_bits.rg16f_rgba8_snorm.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027620, VkglTestCase_027620_1, VkglTestCase_027620_2);

#define VkglTestCase_027621_1 "dEQP-GLES31.functional.copy_image.non_compressed.vie"
#define VkglTestCase_027621_2 "wclass_32_bits.rg16f_rgba8_snorm.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027621, VkglTestCase_027621_1, VkglTestCase_027621_2);

#define VkglTestCase_027622_1 "dEQP-GLES31.functional.copy_image.non_compressed.vi"
#define VkglTestCase_027622_2 "ewclass_32_bits.rg16f_rgba8_snorm.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027622, VkglTestCase_027622_1, VkglTestCase_027622_2);

#define VkglTestCase_027623_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_027623_2 "ass_32_bits.rg16f_rgba8_snorm.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027623, VkglTestCase_027623_1, VkglTestCase_027623_2);

#define VkglTestCase_027624_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_027624_2 "ss_32_bits.rg16f_rgba8_snorm.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027624, VkglTestCase_027624_1, VkglTestCase_027624_2);

#define VkglTestCase_027625_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcla"
#define VkglTestCase_027625_2 "ss_32_bits.rg16f_rgba8_snorm.texture2d_array_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027625, VkglTestCase_027625_1, VkglTestCase_027625_2);

#define VkglTestCase_027626_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewcl"
#define VkglTestCase_027626_2 "ass_32_bits.rg16f_rgba8_snorm.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027626, VkglTestCase_027626_1, VkglTestCase_027626_2);

#define VkglTestCase_027627_1 "dEQP-GLES31.functional.copy_image.non_compressed.viewclass_"
#define VkglTestCase_027627_2 "32_bits.rg16f_rgba8_snorm.texture2d_array_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310028TestSuite, TestCase_027627, VkglTestCase_027627_1, VkglTestCase_027627_2);
