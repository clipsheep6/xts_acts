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

#define VkglTestCase_037419_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_6"
#define VkglTestCase_037419_2 "4_bits_mixed.rgba16f_r11_eac.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037419, VkglTestCase_037419_1, VkglTestCase_037419_2);

#define VkglTestCase_037420_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_"
#define VkglTestCase_037420_2 "64_bits_mixed.rgba16f_r11_eac.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037420, VkglTestCase_037420_1, VkglTestCase_037420_2);

#define VkglTestCase_037421_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_6"
#define VkglTestCase_037421_2 "4_bits_mixed.rgba16f_r11_eac.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037421, VkglTestCase_037421_1, VkglTestCase_037421_2);

#define VkglTestCase_037422_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_"
#define VkglTestCase_037422_2 "64_bits_mixed.rgba16f_r11_eac.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037422, VkglTestCase_037422_1, VkglTestCase_037422_2);

#define VkglTestCase_037423_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_"
#define VkglTestCase_037423_2 "64_bits_mixed.rgba16f_r11_eac.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037423, VkglTestCase_037423_1, VkglTestCase_037423_2);

#define VkglTestCase_037424_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass"
#define VkglTestCase_037424_2 "_64_bits_mixed.rgba16f_r11_eac.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037424, VkglTestCase_037424_1, VkglTestCase_037424_2);

#define VkglTestCase_037425_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_64_b"
#define VkglTestCase_037425_2 "its_mixed.rgba16f_r11_eac.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037425, VkglTestCase_037425_1, VkglTestCase_037425_2);

#define VkglTestCase_037426_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_64_"
#define VkglTestCase_037426_2 "bits_mixed.rgba16f_r11_eac.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037426, VkglTestCase_037426_1, VkglTestCase_037426_2);
