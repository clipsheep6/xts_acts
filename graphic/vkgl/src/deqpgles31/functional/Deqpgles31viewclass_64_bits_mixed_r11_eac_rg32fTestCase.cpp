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
#include "../ActsDeqpgles310038TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_037539_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_"
#define VkglTestCase_037539_2 "64_bits_mixed.r11_eac_rg32f.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037539, VkglTestCase_037539_1, VkglTestCase_037539_2);

#define VkglTestCase_037540_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_"
#define VkglTestCase_037540_2 "64_bits_mixed.r11_eac_rg32f.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037540, VkglTestCase_037540_1, VkglTestCase_037540_2);

#define VkglTestCase_037541_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass"
#define VkglTestCase_037541_2 "_64_bits_mixed.r11_eac_rg32f.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037541, VkglTestCase_037541_1, VkglTestCase_037541_2);

#define VkglTestCase_037542_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_64_"
#define VkglTestCase_037542_2 "bits_mixed.r11_eac_rg32f.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037542, VkglTestCase_037542_1, VkglTestCase_037542_2);

#define VkglTestCase_037543_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass"
#define VkglTestCase_037543_2 "_64_bits_mixed.r11_eac_rg32f.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037543, VkglTestCase_037543_1, VkglTestCase_037543_2);

#define VkglTestCase_037544_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass"
#define VkglTestCase_037544_2 "_64_bits_mixed.r11_eac_rg32f.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037544, VkglTestCase_037544_1, VkglTestCase_037544_2);

#define VkglTestCase_037545_1 "dEQP-GLES31.functional.copy_image.mixed.viewclas"
#define VkglTestCase_037545_2 "s_64_bits_mixed.r11_eac_rg32f.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037545, VkglTestCase_037545_1, VkglTestCase_037545_2);

#define VkglTestCase_037546_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_64"
#define VkglTestCase_037546_2 "_bits_mixed.r11_eac_rg32f.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037546, VkglTestCase_037546_1, VkglTestCase_037546_2);
