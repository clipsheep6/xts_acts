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

#define VkglTestCase_037531_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_"
#define VkglTestCase_037531_2 "64_bits_mixed.rg32f_r11_eac.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037531, VkglTestCase_037531_1, VkglTestCase_037531_2);

#define VkglTestCase_037532_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass"
#define VkglTestCase_037532_2 "_64_bits_mixed.rg32f_r11_eac.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037532, VkglTestCase_037532_1, VkglTestCase_037532_2);

#define VkglTestCase_037533_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_"
#define VkglTestCase_037533_2 "64_bits_mixed.rg32f_r11_eac.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037533, VkglTestCase_037533_1, VkglTestCase_037533_2);

#define VkglTestCase_037534_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass"
#define VkglTestCase_037534_2 "_64_bits_mixed.rg32f_r11_eac.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037534, VkglTestCase_037534_1, VkglTestCase_037534_2);

#define VkglTestCase_037535_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass"
#define VkglTestCase_037535_2 "_64_bits_mixed.rg32f_r11_eac.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037535, VkglTestCase_037535_1, VkglTestCase_037535_2);

#define VkglTestCase_037536_1 "dEQP-GLES31.functional.copy_image.mixed.viewclas"
#define VkglTestCase_037536_2 "s_64_bits_mixed.rg32f_r11_eac.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037536, VkglTestCase_037536_1, VkglTestCase_037536_2);

#define VkglTestCase_037537_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_64_"
#define VkglTestCase_037537_2 "bits_mixed.rg32f_r11_eac.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037537, VkglTestCase_037537_1, VkglTestCase_037537_2);

#define VkglTestCase_037538_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_64"
#define VkglTestCase_037538_2 "_bits_mixed.rg32f_r11_eac.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037538, VkglTestCase_037538_1, VkglTestCase_037538_2);
