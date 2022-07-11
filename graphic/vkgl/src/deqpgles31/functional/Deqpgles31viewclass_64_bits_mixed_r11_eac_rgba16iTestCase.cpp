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

#define VkglTestCase_037501_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_6"
#define VkglTestCase_037501_2 "4_bits_mixed.r11_eac_rgba16i.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037501, VkglTestCase_037501_1, VkglTestCase_037501_2);

#define VkglTestCase_037502_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_6"
#define VkglTestCase_037502_2 "4_bits_mixed.r11_eac_rgba16i.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037502, VkglTestCase_037502_1, VkglTestCase_037502_2);

#define VkglTestCase_037503_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_"
#define VkglTestCase_037503_2 "64_bits_mixed.r11_eac_rgba16i.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037503, VkglTestCase_037503_1, VkglTestCase_037503_2);

#define VkglTestCase_037504_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_64_b"
#define VkglTestCase_037504_2 "its_mixed.r11_eac_rgba16i.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037504, VkglTestCase_037504_1, VkglTestCase_037504_2);

#define VkglTestCase_037505_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_64"
#define VkglTestCase_037505_2 "_bits_mixed.r11_eac_rgba16i.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037505, VkglTestCase_037505_1, VkglTestCase_037505_2);

#define VkglTestCase_037506_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_"
#define VkglTestCase_037506_2 "64_bits_mixed.r11_eac_rgba16i.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037506, VkglTestCase_037506_1, VkglTestCase_037506_2);

#define VkglTestCase_037507_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_"
#define VkglTestCase_037507_2 "64_bits_mixed.r11_eac_rgba16i.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037507, VkglTestCase_037507_1, VkglTestCase_037507_2);

#define VkglTestCase_037508_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass"
#define VkglTestCase_037508_2 "_64_bits_mixed.r11_eac_rgba16i.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037508, VkglTestCase_037508_1, VkglTestCase_037508_2);

#define VkglTestCase_037509_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_64_"
#define VkglTestCase_037509_2 "bits_mixed.r11_eac_rgba16i.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037509, VkglTestCase_037509_1, VkglTestCase_037509_2);

#define VkglTestCase_037510_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_6"
#define VkglTestCase_037510_2 "4_bits_mixed.r11_eac_rgba16i.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037510, VkglTestCase_037510_1, VkglTestCase_037510_2);
