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

#define VkglTestCase_037511_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_64_b"
#define VkglTestCase_037511_2 "its_mixed.rgba16i_signed_r11_eac.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037511, VkglTestCase_037511_1, VkglTestCase_037511_2);

#define VkglTestCase_037512_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_64_"
#define VkglTestCase_037512_2 "bits_mixed.rgba16i_signed_r11_eac.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037512, VkglTestCase_037512_1, VkglTestCase_037512_2);

#define VkglTestCase_037513_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_64_b"
#define VkglTestCase_037513_2 "its_mixed.rgba16i_signed_r11_eac.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037513, VkglTestCase_037513_1, VkglTestCase_037513_2);

#define VkglTestCase_037514_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_64_"
#define VkglTestCase_037514_2 "bits_mixed.rgba16i_signed_r11_eac.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037514, VkglTestCase_037514_1, VkglTestCase_037514_2);

#define VkglTestCase_037515_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_64_"
#define VkglTestCase_037515_2 "bits_mixed.rgba16i_signed_r11_eac.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037515, VkglTestCase_037515_1, VkglTestCase_037515_2);

#define VkglTestCase_037516_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_64"
#define VkglTestCase_037516_2 "_bits_mixed.rgba16i_signed_r11_eac.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037516, VkglTestCase_037516_1, VkglTestCase_037516_2);

#define VkglTestCase_037517_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_64_bits"
#define VkglTestCase_037517_2 "_mixed.rgba16i_signed_r11_eac.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037517, VkglTestCase_037517_1, VkglTestCase_037517_2);

#define VkglTestCase_037518_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_64_bit"
#define VkglTestCase_037518_2 "s_mixed.rgba16i_signed_r11_eac.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037518, VkglTestCase_037518_1, VkglTestCase_037518_2);

#define VkglTestCase_037519_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_64_bit"
#define VkglTestCase_037519_2 "s_mixed.rgba16i_signed_r11_eac.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037519, VkglTestCase_037519_1, VkglTestCase_037519_2);

#define VkglTestCase_037520_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_64_bi"
#define VkglTestCase_037520_2 "ts_mixed.rgba16i_signed_r11_eac.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037520, VkglTestCase_037520_1, VkglTestCase_037520_2);
