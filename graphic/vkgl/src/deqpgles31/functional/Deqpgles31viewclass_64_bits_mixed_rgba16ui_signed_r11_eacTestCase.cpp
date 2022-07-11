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

#define VkglTestCase_037471_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_64_bi"
#define VkglTestCase_037471_2 "ts_mixed.rgba16ui_signed_r11_eac.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037471, VkglTestCase_037471_1, VkglTestCase_037471_2);

#define VkglTestCase_037472_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_64_b"
#define VkglTestCase_037472_2 "its_mixed.rgba16ui_signed_r11_eac.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037472, VkglTestCase_037472_1, VkglTestCase_037472_2);

#define VkglTestCase_037473_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_64_bi"
#define VkglTestCase_037473_2 "ts_mixed.rgba16ui_signed_r11_eac.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037473, VkglTestCase_037473_1, VkglTestCase_037473_2);

#define VkglTestCase_037474_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_64_b"
#define VkglTestCase_037474_2 "its_mixed.rgba16ui_signed_r11_eac.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037474, VkglTestCase_037474_1, VkglTestCase_037474_2);

#define VkglTestCase_037475_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_64_b"
#define VkglTestCase_037475_2 "its_mixed.rgba16ui_signed_r11_eac.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037475, VkglTestCase_037475_1, VkglTestCase_037475_2);

#define VkglTestCase_037476_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_64_"
#define VkglTestCase_037476_2 "bits_mixed.rgba16ui_signed_r11_eac.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037476, VkglTestCase_037476_1, VkglTestCase_037476_2);

#define VkglTestCase_037477_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_64_bits_"
#define VkglTestCase_037477_2 "mixed.rgba16ui_signed_r11_eac.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037477, VkglTestCase_037477_1, VkglTestCase_037477_2);

#define VkglTestCase_037478_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_64_bits"
#define VkglTestCase_037478_2 "_mixed.rgba16ui_signed_r11_eac.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037478, VkglTestCase_037478_1, VkglTestCase_037478_2);

#define VkglTestCase_037479_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_64_bit"
#define VkglTestCase_037479_2 "s_mixed.rgba16ui_signed_r11_eac.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037479, VkglTestCase_037479_1, VkglTestCase_037479_2);

#define VkglTestCase_037480_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_64_bi"
#define VkglTestCase_037480_2 "ts_mixed.rgba16ui_signed_r11_eac.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037480, VkglTestCase_037480_1, VkglTestCase_037480_2);
