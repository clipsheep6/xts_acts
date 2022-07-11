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
#include "../ActsDeqpgles310035TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_034107_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_034107_2 "its_mixed.rgba32f_signed_rg11_eac.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034107, VkglTestCase_034107_1, VkglTestCase_034107_2);

#define VkglTestCase_034108_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_"
#define VkglTestCase_034108_2 "bits_mixed.rgba32f_signed_rg11_eac.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034108, VkglTestCase_034108_1, VkglTestCase_034108_2);

#define VkglTestCase_034109_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_034109_2 "its_mixed.rgba32f_signed_rg11_eac.texture3d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034109, VkglTestCase_034109_1, VkglTestCase_034109_2);

#define VkglTestCase_034110_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_"
#define VkglTestCase_034110_2 "bits_mixed.rgba32f_signed_rg11_eac.texture3d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034110, VkglTestCase_034110_1, VkglTestCase_034110_2);

#define VkglTestCase_034111_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_"
#define VkglTestCase_034111_2 "bits_mixed.rgba32f_signed_rg11_eac.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034111, VkglTestCase_034111_1, VkglTestCase_034111_2);

#define VkglTestCase_034112_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128"
#define VkglTestCase_034112_2 "_bits_mixed.rgba32f_signed_rg11_eac.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034112, VkglTestCase_034112_1, VkglTestCase_034112_2);

#define VkglTestCase_034113_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_034113_2 "_mixed.rgba32f_signed_rg11_eac.texture2d_array_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034113, VkglTestCase_034113_1, VkglTestCase_034113_2);

#define VkglTestCase_034114_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_034114_2 "s_mixed.rgba32f_signed_rg11_eac.texture2d_array_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034114, VkglTestCase_034114_1, VkglTestCase_034114_2);
