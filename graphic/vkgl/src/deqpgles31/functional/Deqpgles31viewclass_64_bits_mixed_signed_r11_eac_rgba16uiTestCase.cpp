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

#define VkglTestCase_037481_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_64_bi"
#define VkglTestCase_037481_2 "ts_mixed.signed_r11_eac_rgba16ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037481, VkglTestCase_037481_1, VkglTestCase_037481_2);

#define VkglTestCase_037482_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_64_bi"
#define VkglTestCase_037482_2 "ts_mixed.signed_r11_eac_rgba16ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037482, VkglTestCase_037482_1, VkglTestCase_037482_2);

#define VkglTestCase_037483_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_64_b"
#define VkglTestCase_037483_2 "its_mixed.signed_r11_eac_rgba16ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037483, VkglTestCase_037483_1, VkglTestCase_037483_2);

#define VkglTestCase_037484_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_64_bits_"
#define VkglTestCase_037484_2 "mixed.signed_r11_eac_rgba16ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037484, VkglTestCase_037484_1, VkglTestCase_037484_2);

#define VkglTestCase_037485_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_64_bit"
#define VkglTestCase_037485_2 "s_mixed.signed_r11_eac_rgba16ui.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037485, VkglTestCase_037485_1, VkglTestCase_037485_2);

#define VkglTestCase_037486_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_64_b"
#define VkglTestCase_037486_2 "its_mixed.signed_r11_eac_rgba16ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037486, VkglTestCase_037486_1, VkglTestCase_037486_2);

#define VkglTestCase_037487_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_64_b"
#define VkglTestCase_037487_2 "its_mixed.signed_r11_eac_rgba16ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037487, VkglTestCase_037487_1, VkglTestCase_037487_2);

#define VkglTestCase_037488_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_64_"
#define VkglTestCase_037488_2 "bits_mixed.signed_r11_eac_rgba16ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037488, VkglTestCase_037488_1, VkglTestCase_037488_2);

#define VkglTestCase_037489_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_64_bits"
#define VkglTestCase_037489_2 "_mixed.signed_r11_eac_rgba16ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037489, VkglTestCase_037489_1, VkglTestCase_037489_2);

#define VkglTestCase_037490_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_64_bi"
#define VkglTestCase_037490_2 "ts_mixed.signed_r11_eac_rgba16ui.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037490, VkglTestCase_037490_1, VkglTestCase_037490_2);
