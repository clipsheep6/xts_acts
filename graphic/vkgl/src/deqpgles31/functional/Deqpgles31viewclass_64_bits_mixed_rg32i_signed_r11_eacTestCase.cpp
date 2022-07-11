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

#define VkglTestCase_037623_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_64_"
#define VkglTestCase_037623_2 "bits_mixed.rg32i_signed_r11_eac.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037623, VkglTestCase_037623_1, VkglTestCase_037623_2);

#define VkglTestCase_037624_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_64"
#define VkglTestCase_037624_2 "_bits_mixed.rg32i_signed_r11_eac.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037624, VkglTestCase_037624_1, VkglTestCase_037624_2);

#define VkglTestCase_037625_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_64_"
#define VkglTestCase_037625_2 "bits_mixed.rg32i_signed_r11_eac.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037625, VkglTestCase_037625_1, VkglTestCase_037625_2);

#define VkglTestCase_037626_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_64"
#define VkglTestCase_037626_2 "_bits_mixed.rg32i_signed_r11_eac.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037626, VkglTestCase_037626_1, VkglTestCase_037626_2);

#define VkglTestCase_037627_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_64"
#define VkglTestCase_037627_2 "_bits_mixed.rg32i_signed_r11_eac.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037627, VkglTestCase_037627_1, VkglTestCase_037627_2);

#define VkglTestCase_037628_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_6"
#define VkglTestCase_037628_2 "4_bits_mixed.rg32i_signed_r11_eac.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037628, VkglTestCase_037628_1, VkglTestCase_037628_2);

#define VkglTestCase_037629_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_64_bit"
#define VkglTestCase_037629_2 "s_mixed.rg32i_signed_r11_eac.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037629, VkglTestCase_037629_1, VkglTestCase_037629_2);

#define VkglTestCase_037630_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_64_bi"
#define VkglTestCase_037630_2 "ts_mixed.rg32i_signed_r11_eac.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037630, VkglTestCase_037630_1, VkglTestCase_037630_2);

#define VkglTestCase_037631_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_64_bi"
#define VkglTestCase_037631_2 "ts_mixed.rg32i_signed_r11_eac.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037631, VkglTestCase_037631_1, VkglTestCase_037631_2);

#define VkglTestCase_037632_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_64_b"
#define VkglTestCase_037632_2 "its_mixed.rg32i_signed_r11_eac.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037632, VkglTestCase_037632_1, VkglTestCase_037632_2);
