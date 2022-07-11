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

#define VkglTestCase_037603_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_"
#define VkglTestCase_037603_2 "64_bits_mixed.rg32i_r11_eac.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037603, VkglTestCase_037603_1, VkglTestCase_037603_2);

#define VkglTestCase_037604_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass"
#define VkglTestCase_037604_2 "_64_bits_mixed.rg32i_r11_eac.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037604, VkglTestCase_037604_1, VkglTestCase_037604_2);

#define VkglTestCase_037605_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_"
#define VkglTestCase_037605_2 "64_bits_mixed.rg32i_r11_eac.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037605, VkglTestCase_037605_1, VkglTestCase_037605_2);

#define VkglTestCase_037606_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass"
#define VkglTestCase_037606_2 "_64_bits_mixed.rg32i_r11_eac.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037606, VkglTestCase_037606_1, VkglTestCase_037606_2);

#define VkglTestCase_037607_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass"
#define VkglTestCase_037607_2 "_64_bits_mixed.rg32i_r11_eac.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037607, VkglTestCase_037607_1, VkglTestCase_037607_2);

#define VkglTestCase_037608_1 "dEQP-GLES31.functional.copy_image.mixed.viewclas"
#define VkglTestCase_037608_2 "s_64_bits_mixed.rg32i_r11_eac.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037608, VkglTestCase_037608_1, VkglTestCase_037608_2);

#define VkglTestCase_037609_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_64_"
#define VkglTestCase_037609_2 "bits_mixed.rg32i_r11_eac.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037609, VkglTestCase_037609_1, VkglTestCase_037609_2);

#define VkglTestCase_037610_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_64"
#define VkglTestCase_037610_2 "_bits_mixed.rg32i_r11_eac.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037610, VkglTestCase_037610_1, VkglTestCase_037610_2);

#define VkglTestCase_037611_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_6"
#define VkglTestCase_037611_2 "4_bits_mixed.rg32i_r11_eac.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037611, VkglTestCase_037611_1, VkglTestCase_037611_2);

#define VkglTestCase_037612_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_"
#define VkglTestCase_037612_2 "64_bits_mixed.rg32i_r11_eac.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037612, VkglTestCase_037612_1, VkglTestCase_037612_2);
