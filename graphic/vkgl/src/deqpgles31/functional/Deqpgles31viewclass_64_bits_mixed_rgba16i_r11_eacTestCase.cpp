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

#define VkglTestCase_037491_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_6"
#define VkglTestCase_037491_2 "4_bits_mixed.rgba16i_r11_eac.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037491, VkglTestCase_037491_1, VkglTestCase_037491_2);

#define VkglTestCase_037492_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_"
#define VkglTestCase_037492_2 "64_bits_mixed.rgba16i_r11_eac.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037492, VkglTestCase_037492_1, VkglTestCase_037492_2);

#define VkglTestCase_037493_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_6"
#define VkglTestCase_037493_2 "4_bits_mixed.rgba16i_r11_eac.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037493, VkglTestCase_037493_1, VkglTestCase_037493_2);

#define VkglTestCase_037494_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_"
#define VkglTestCase_037494_2 "64_bits_mixed.rgba16i_r11_eac.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037494, VkglTestCase_037494_1, VkglTestCase_037494_2);

#define VkglTestCase_037495_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_"
#define VkglTestCase_037495_2 "64_bits_mixed.rgba16i_r11_eac.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037495, VkglTestCase_037495_1, VkglTestCase_037495_2);

#define VkglTestCase_037496_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass"
#define VkglTestCase_037496_2 "_64_bits_mixed.rgba16i_r11_eac.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037496, VkglTestCase_037496_1, VkglTestCase_037496_2);

#define VkglTestCase_037497_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_64_b"
#define VkglTestCase_037497_2 "its_mixed.rgba16i_r11_eac.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037497, VkglTestCase_037497_1, VkglTestCase_037497_2);

#define VkglTestCase_037498_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_64_"
#define VkglTestCase_037498_2 "bits_mixed.rgba16i_r11_eac.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037498, VkglTestCase_037498_1, VkglTestCase_037498_2);

#define VkglTestCase_037499_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_64"
#define VkglTestCase_037499_2 "_bits_mixed.rgba16i_r11_eac.renderbuffer_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037499, VkglTestCase_037499_1, VkglTestCase_037499_2);

#define VkglTestCase_037500_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_6"
#define VkglTestCase_037500_2 "4_bits_mixed.rgba16i_r11_eac.renderbuffer_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310038TestSuite, TestCase_037500, VkglTestCase_037500_1, VkglTestCase_037500_2);
