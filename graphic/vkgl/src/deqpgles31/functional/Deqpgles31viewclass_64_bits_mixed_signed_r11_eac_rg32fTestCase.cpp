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

#define VkglTestCase_037555_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_64_"
#define VkglTestCase_037555_2 "bits_mixed.signed_r11_eac_rg32f.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037555, VkglTestCase_037555_1, VkglTestCase_037555_2);

#define VkglTestCase_037556_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_64_"
#define VkglTestCase_037556_2 "bits_mixed.signed_r11_eac_rg32f.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037556, VkglTestCase_037556_1, VkglTestCase_037556_2);

#define VkglTestCase_037557_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_64"
#define VkglTestCase_037557_2 "_bits_mixed.signed_r11_eac_rg32f.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037557, VkglTestCase_037557_1, VkglTestCase_037557_2);

#define VkglTestCase_037558_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_64_bit"
#define VkglTestCase_037558_2 "s_mixed.signed_r11_eac_rg32f.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037558, VkglTestCase_037558_1, VkglTestCase_037558_2);

#define VkglTestCase_037559_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_64"
#define VkglTestCase_037559_2 "_bits_mixed.signed_r11_eac_rg32f.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037559, VkglTestCase_037559_1, VkglTestCase_037559_2);

#define VkglTestCase_037560_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_64"
#define VkglTestCase_037560_2 "_bits_mixed.signed_r11_eac_rg32f.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037560, VkglTestCase_037560_1, VkglTestCase_037560_2);

#define VkglTestCase_037561_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_6"
#define VkglTestCase_037561_2 "4_bits_mixed.signed_r11_eac_rg32f.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037561, VkglTestCase_037561_1, VkglTestCase_037561_2);

#define VkglTestCase_037562_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_64_bi"
#define VkglTestCase_037562_2 "ts_mixed.signed_r11_eac_rg32f.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037562, VkglTestCase_037562_1, VkglTestCase_037562_2);
