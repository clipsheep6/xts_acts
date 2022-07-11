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

#define VkglTestCase_034115_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_034115_2 "its_mixed.signed_rg11_eac_rgba32f.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034115, VkglTestCase_034115_1, VkglTestCase_034115_2);

#define VkglTestCase_034116_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_034116_2 "its_mixed.signed_rg11_eac_rgba32f.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034116, VkglTestCase_034116_1, VkglTestCase_034116_2);

#define VkglTestCase_034117_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_"
#define VkglTestCase_034117_2 "bits_mixed.signed_rg11_eac_rgba32f.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034117, VkglTestCase_034117_1, VkglTestCase_034117_2);

#define VkglTestCase_034118_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bits"
#define VkglTestCase_034118_2 "_mixed.signed_rg11_eac_rgba32f.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034118, VkglTestCase_034118_1, VkglTestCase_034118_2);

#define VkglTestCase_034119_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_"
#define VkglTestCase_034119_2 "bits_mixed.signed_rg11_eac_rgba32f.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034119, VkglTestCase_034119_1, VkglTestCase_034119_2);

#define VkglTestCase_034120_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_"
#define VkglTestCase_034120_2 "bits_mixed.signed_rg11_eac_rgba32f.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034120, VkglTestCase_034120_1, VkglTestCase_034120_2);

#define VkglTestCase_034121_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128"
#define VkglTestCase_034121_2 "_bits_mixed.signed_rg11_eac_rgba32f.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034121, VkglTestCase_034121_1, VkglTestCase_034121_2);

#define VkglTestCase_034122_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_bit"
#define VkglTestCase_034122_2 "s_mixed.signed_rg11_eac_rgba32f.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310035TestSuite, TestCase_034122, VkglTestCase_034122_1, VkglTestCase_034122_2);
