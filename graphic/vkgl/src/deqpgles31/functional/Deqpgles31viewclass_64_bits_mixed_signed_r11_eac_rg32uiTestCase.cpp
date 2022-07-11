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

#define VkglTestCase_037593_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_64_b"
#define VkglTestCase_037593_2 "its_mixed.signed_r11_eac_rg32ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037593, VkglTestCase_037593_1, VkglTestCase_037593_2);

#define VkglTestCase_037594_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_64_b"
#define VkglTestCase_037594_2 "its_mixed.signed_r11_eac_rg32ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037594, VkglTestCase_037594_1, VkglTestCase_037594_2);

#define VkglTestCase_037595_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_64_"
#define VkglTestCase_037595_2 "bits_mixed.signed_r11_eac_rg32ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037595, VkglTestCase_037595_1, VkglTestCase_037595_2);

#define VkglTestCase_037596_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_64_bits"
#define VkglTestCase_037596_2 "_mixed.signed_r11_eac_rg32ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037596, VkglTestCase_037596_1, VkglTestCase_037596_2);

#define VkglTestCase_037597_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_64_bi"
#define VkglTestCase_037597_2 "ts_mixed.signed_r11_eac_rg32ui.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037597, VkglTestCase_037597_1, VkglTestCase_037597_2);

#define VkglTestCase_037598_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_64_"
#define VkglTestCase_037598_2 "bits_mixed.signed_r11_eac_rg32ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037598, VkglTestCase_037598_1, VkglTestCase_037598_2);

#define VkglTestCase_037599_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_64_"
#define VkglTestCase_037599_2 "bits_mixed.signed_r11_eac_rg32ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037599, VkglTestCase_037599_1, VkglTestCase_037599_2);

#define VkglTestCase_037600_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_64"
#define VkglTestCase_037600_2 "_bits_mixed.signed_r11_eac_rg32ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037600, VkglTestCase_037600_1, VkglTestCase_037600_2);

#define VkglTestCase_037601_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_64_bit"
#define VkglTestCase_037601_2 "s_mixed.signed_r11_eac_rg32ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037601, VkglTestCase_037601_1, VkglTestCase_037601_2);

#define VkglTestCase_037602_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_64_b"
#define VkglTestCase_037602_2 "its_mixed.signed_r11_eac_rg32ui.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037602, VkglTestCase_037602_1, VkglTestCase_037602_2);
