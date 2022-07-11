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

#define VkglTestCase_037633_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_64_"
#define VkglTestCase_037633_2 "bits_mixed.signed_r11_eac_rg32i.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037633, VkglTestCase_037633_1, VkglTestCase_037633_2);

#define VkglTestCase_037634_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_64_"
#define VkglTestCase_037634_2 "bits_mixed.signed_r11_eac_rg32i.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037634, VkglTestCase_037634_1, VkglTestCase_037634_2);

#define VkglTestCase_037635_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_64"
#define VkglTestCase_037635_2 "_bits_mixed.signed_r11_eac_rg32i.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037635, VkglTestCase_037635_1, VkglTestCase_037635_2);

#define VkglTestCase_037636_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_64_bit"
#define VkglTestCase_037636_2 "s_mixed.signed_r11_eac_rg32i.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037636, VkglTestCase_037636_1, VkglTestCase_037636_2);

#define VkglTestCase_037637_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_64_bi"
#define VkglTestCase_037637_2 "ts_mixed.signed_r11_eac_rg32i.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037637, VkglTestCase_037637_1, VkglTestCase_037637_2);

#define VkglTestCase_037638_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_64"
#define VkglTestCase_037638_2 "_bits_mixed.signed_r11_eac_rg32i.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037638, VkglTestCase_037638_1, VkglTestCase_037638_2);

#define VkglTestCase_037639_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_64"
#define VkglTestCase_037639_2 "_bits_mixed.signed_r11_eac_rg32i.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037639, VkglTestCase_037639_1, VkglTestCase_037639_2);

#define VkglTestCase_037640_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_6"
#define VkglTestCase_037640_2 "4_bits_mixed.signed_r11_eac_rg32i.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037640, VkglTestCase_037640_1, VkglTestCase_037640_2);

#define VkglTestCase_037641_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_64_bi"
#define VkglTestCase_037641_2 "ts_mixed.signed_r11_eac_rg32i.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037641, VkglTestCase_037641_1, VkglTestCase_037641_2);

#define VkglTestCase_037642_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_64_b"
#define VkglTestCase_037642_2 "its_mixed.signed_r11_eac_rg32i.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037642, VkglTestCase_037642_1, VkglTestCase_037642_2);
