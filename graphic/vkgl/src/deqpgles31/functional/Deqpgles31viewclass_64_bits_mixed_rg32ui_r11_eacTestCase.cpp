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

#define VkglTestCase_037563_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_"
#define VkglTestCase_037563_2 "64_bits_mixed.rg32ui_r11_eac.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037563, VkglTestCase_037563_1, VkglTestCase_037563_2);

#define VkglTestCase_037564_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass"
#define VkglTestCase_037564_2 "_64_bits_mixed.rg32ui_r11_eac.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037564, VkglTestCase_037564_1, VkglTestCase_037564_2);

#define VkglTestCase_037565_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_"
#define VkglTestCase_037565_2 "64_bits_mixed.rg32ui_r11_eac.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037565, VkglTestCase_037565_1, VkglTestCase_037565_2);

#define VkglTestCase_037566_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass"
#define VkglTestCase_037566_2 "_64_bits_mixed.rg32ui_r11_eac.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037566, VkglTestCase_037566_1, VkglTestCase_037566_2);

#define VkglTestCase_037567_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass"
#define VkglTestCase_037567_2 "_64_bits_mixed.rg32ui_r11_eac.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037567, VkglTestCase_037567_1, VkglTestCase_037567_2);

#define VkglTestCase_037568_1 "dEQP-GLES31.functional.copy_image.mixed.viewclas"
#define VkglTestCase_037568_2 "s_64_bits_mixed.rg32ui_r11_eac.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037568, VkglTestCase_037568_1, VkglTestCase_037568_2);

#define VkglTestCase_037569_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_64_"
#define VkglTestCase_037569_2 "bits_mixed.rg32ui_r11_eac.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037569, VkglTestCase_037569_1, VkglTestCase_037569_2);

#define VkglTestCase_037570_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_64"
#define VkglTestCase_037570_2 "_bits_mixed.rg32ui_r11_eac.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037570, VkglTestCase_037570_1, VkglTestCase_037570_2);

#define VkglTestCase_037571_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_64"
#define VkglTestCase_037571_2 "_bits_mixed.rg32ui_r11_eac.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037571, VkglTestCase_037571_1, VkglTestCase_037571_2);

#define VkglTestCase_037572_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_6"
#define VkglTestCase_037572_2 "4_bits_mixed.rg32ui_r11_eac.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037572, VkglTestCase_037572_1, VkglTestCase_037572_2);
