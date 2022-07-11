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

#define VkglTestCase_037427_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_6"
#define VkglTestCase_037427_2 "4_bits_mixed.r11_eac_rgba16f.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037427, VkglTestCase_037427_1, VkglTestCase_037427_2);

#define VkglTestCase_037428_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_6"
#define VkglTestCase_037428_2 "4_bits_mixed.r11_eac_rgba16f.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037428, VkglTestCase_037428_1, VkglTestCase_037428_2);

#define VkglTestCase_037429_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_"
#define VkglTestCase_037429_2 "64_bits_mixed.r11_eac_rgba16f.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037429, VkglTestCase_037429_1, VkglTestCase_037429_2);

#define VkglTestCase_037430_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_64_b"
#define VkglTestCase_037430_2 "its_mixed.r11_eac_rgba16f.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037430, VkglTestCase_037430_1, VkglTestCase_037430_2);

#define VkglTestCase_037431_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_"
#define VkglTestCase_037431_2 "64_bits_mixed.r11_eac_rgba16f.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037431, VkglTestCase_037431_1, VkglTestCase_037431_2);

#define VkglTestCase_037432_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_"
#define VkglTestCase_037432_2 "64_bits_mixed.r11_eac_rgba16f.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037432, VkglTestCase_037432_1, VkglTestCase_037432_2);

#define VkglTestCase_037433_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass"
#define VkglTestCase_037433_2 "_64_bits_mixed.r11_eac_rgba16f.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037433, VkglTestCase_037433_1, VkglTestCase_037433_2);

#define VkglTestCase_037434_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_64_"
#define VkglTestCase_037434_2 "bits_mixed.r11_eac_rgba16f.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037434, VkglTestCase_037434_1, VkglTestCase_037434_2);
