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

#define VkglTestCase_037451_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_6"
#define VkglTestCase_037451_2 "4_bits_mixed.rgba16ui_r11_eac.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037451, VkglTestCase_037451_1, VkglTestCase_037451_2);

#define VkglTestCase_037452_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_"
#define VkglTestCase_037452_2 "64_bits_mixed.rgba16ui_r11_eac.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037452, VkglTestCase_037452_1, VkglTestCase_037452_2);

#define VkglTestCase_037453_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_6"
#define VkglTestCase_037453_2 "4_bits_mixed.rgba16ui_r11_eac.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037453, VkglTestCase_037453_1, VkglTestCase_037453_2);

#define VkglTestCase_037454_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_"
#define VkglTestCase_037454_2 "64_bits_mixed.rgba16ui_r11_eac.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037454, VkglTestCase_037454_1, VkglTestCase_037454_2);

#define VkglTestCase_037455_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_"
#define VkglTestCase_037455_2 "64_bits_mixed.rgba16ui_r11_eac.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037455, VkglTestCase_037455_1, VkglTestCase_037455_2);

#define VkglTestCase_037456_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass"
#define VkglTestCase_037456_2 "_64_bits_mixed.rgba16ui_r11_eac.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037456, VkglTestCase_037456_1, VkglTestCase_037456_2);

#define VkglTestCase_037457_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_64_b"
#define VkglTestCase_037457_2 "its_mixed.rgba16ui_r11_eac.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037457, VkglTestCase_037457_1, VkglTestCase_037457_2);

#define VkglTestCase_037458_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_64_"
#define VkglTestCase_037458_2 "bits_mixed.rgba16ui_r11_eac.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037458, VkglTestCase_037458_1, VkglTestCase_037458_2);

#define VkglTestCase_037459_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_64_"
#define VkglTestCase_037459_2 "bits_mixed.rgba16ui_r11_eac.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037459, VkglTestCase_037459_1, VkglTestCase_037459_2);

#define VkglTestCase_037460_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_64"
#define VkglTestCase_037460_2 "_bits_mixed.rgba16ui_r11_eac.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037460, VkglTestCase_037460_1, VkglTestCase_037460_2);
