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

#define VkglTestCase_037521_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_64_b"
#define VkglTestCase_037521_2 "its_mixed.signed_r11_eac_rgba16i.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037521, VkglTestCase_037521_1, VkglTestCase_037521_2);

#define VkglTestCase_037522_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_64_b"
#define VkglTestCase_037522_2 "its_mixed.signed_r11_eac_rgba16i.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037522, VkglTestCase_037522_1, VkglTestCase_037522_2);

#define VkglTestCase_037523_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_64_"
#define VkglTestCase_037523_2 "bits_mixed.signed_r11_eac_rgba16i.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037523, VkglTestCase_037523_1, VkglTestCase_037523_2);

#define VkglTestCase_037524_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_64_bits"
#define VkglTestCase_037524_2 "_mixed.signed_r11_eac_rgba16i.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037524, VkglTestCase_037524_1, VkglTestCase_037524_2);

#define VkglTestCase_037525_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_64_bit"
#define VkglTestCase_037525_2 "s_mixed.signed_r11_eac_rgba16i.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037525, VkglTestCase_037525_1, VkglTestCase_037525_2);

#define VkglTestCase_037526_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_64_"
#define VkglTestCase_037526_2 "bits_mixed.signed_r11_eac_rgba16i.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037526, VkglTestCase_037526_1, VkglTestCase_037526_2);

#define VkglTestCase_037527_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_64_"
#define VkglTestCase_037527_2 "bits_mixed.signed_r11_eac_rgba16i.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037527, VkglTestCase_037527_1, VkglTestCase_037527_2);

#define VkglTestCase_037528_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_64"
#define VkglTestCase_037528_2 "_bits_mixed.signed_r11_eac_rgba16i.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037528, VkglTestCase_037528_1, VkglTestCase_037528_2);

#define VkglTestCase_037529_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_64_bit"
#define VkglTestCase_037529_2 "s_mixed.signed_r11_eac_rgba16i.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037529, VkglTestCase_037529_1, VkglTestCase_037529_2);

#define VkglTestCase_037530_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_64_bi"
#define VkglTestCase_037530_2 "ts_mixed.signed_r11_eac_rgba16i.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037530, VkglTestCase_037530_1, VkglTestCase_037530_2);
