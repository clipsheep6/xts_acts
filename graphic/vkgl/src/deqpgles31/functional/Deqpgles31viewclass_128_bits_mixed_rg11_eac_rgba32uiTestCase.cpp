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
#include "../ActsDeqpgles310036TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_035069_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_12"
#define VkglTestCase_035069_2 "8_bits_mixed.rg11_eac_rgba32ui.texture2d_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035069, VkglTestCase_035069_1, VkglTestCase_035069_2);

#define VkglTestCase_035070_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_12"
#define VkglTestCase_035070_2 "8_bits_mixed.rg11_eac_rgba32ui.texture2d_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035070, VkglTestCase_035070_1, VkglTestCase_035070_2);

#define VkglTestCase_035071_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_1"
#define VkglTestCase_035071_2 "28_bits_mixed.rg11_eac_rgba32ui.texture2d_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035071, VkglTestCase_035071_1, VkglTestCase_035071_2);

#define VkglTestCase_035072_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_b"
#define VkglTestCase_035072_2 "its_mixed.rg11_eac_rgba32ui.texture2d_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035072, VkglTestCase_035072_1, VkglTestCase_035072_2);

#define VkglTestCase_035073_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_"
#define VkglTestCase_035073_2 "bits_mixed.rg11_eac_rgba32ui.texture2d_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035073, VkglTestCase_035073_1, VkglTestCase_035073_2);

#define VkglTestCase_035074_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_1"
#define VkglTestCase_035074_2 "28_bits_mixed.rg11_eac_rgba32ui.cubemap_to_texture2d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035074, VkglTestCase_035074_1, VkglTestCase_035074_2);

#define VkglTestCase_035075_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_1"
#define VkglTestCase_035075_2 "28_bits_mixed.rg11_eac_rgba32ui.cubemap_to_texture3d"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035075, VkglTestCase_035075_1, VkglTestCase_035075_2);

#define VkglTestCase_035076_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_"
#define VkglTestCase_035076_2 "128_bits_mixed.rg11_eac_rgba32ui.cubemap_to_cubemap"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035076, VkglTestCase_035076_1, VkglTestCase_035076_2);

#define VkglTestCase_035077_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128_"
#define VkglTestCase_035077_2 "bits_mixed.rg11_eac_rgba32ui.cubemap_to_texture2d_array"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035077, VkglTestCase_035077_1, VkglTestCase_035077_2);

#define VkglTestCase_035078_1 "dEQP-GLES31.functional.copy_image.mixed.viewclass_128"
#define VkglTestCase_035078_2 "_bits_mixed.rg11_eac_rgba32ui.cubemap_to_renderbuffer"
SHRINK_HWTEST_F(ActsDeqpgles310036TestSuite, TestCase_035078, VkglTestCase_035078_1, VkglTestCase_035078_2);
