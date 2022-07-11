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
#include "../Khrgles31BaseFunc.h"
#include "../ActsKhrgles310003TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_002397_1 "KHR-GLES31.core.compress"
#define VkglTestCase_002397_2 "ed_format.format.r11_eac"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002397, VkglTestCase_002397_1, VkglTestCase_002397_2);

#define VkglTestCase_002398_1 "KHR-GLES31.core.compressed_"
#define VkglTestCase_002398_2 "format.format.signed_r11_eac"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002398, VkglTestCase_002398_1, VkglTestCase_002398_2);

#define VkglTestCase_002399_1 "KHR-GLES31.core.compress"
#define VkglTestCase_002399_2 "ed_format.format.rg11_eac"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002399, VkglTestCase_002399_1, VkglTestCase_002399_2);

#define VkglTestCase_002400_1 "KHR-GLES31.core.compressed_f"
#define VkglTestCase_002400_2 "ormat.format.signed_rg11_eac"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002400, VkglTestCase_002400_1, VkglTestCase_002400_2);

#define VkglTestCase_002401_1 "KHR-GLES31.core.compresse"
#define VkglTestCase_002401_2 "d_format.format.rgb8_etc2"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002401, VkglTestCase_002401_1, VkglTestCase_002401_2);

#define VkglTestCase_002402_1 "KHR-GLES31.core.compresse"
#define VkglTestCase_002402_2 "d_format.format.srgb8_etc2"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002402, VkglTestCase_002402_1, VkglTestCase_002402_2);

#define VkglTestCase_002403_1 "KHR-GLES31.core.compressed_format.f"
#define VkglTestCase_002403_2 "ormat.rgb8_punchthrough_alpha1_etc2"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002403, VkglTestCase_002403_1, VkglTestCase_002403_2);

#define VkglTestCase_002404_1 "KHR-GLES31.core.compressed_format.f"
#define VkglTestCase_002404_2 "ormat.srgb8_punchthrough_alpha1_etc2"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002404, VkglTestCase_002404_1, VkglTestCase_002404_2);

#define VkglTestCase_002405_1 "KHR-GLES31.core.compressed_"
#define VkglTestCase_002405_2 "format.format.rgba8_etc2_eac"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002405, VkglTestCase_002405_1, VkglTestCase_002405_2);

#define VkglTestCase_002406_1 "KHR-GLES31.core.compressed_form"
#define VkglTestCase_002406_2 "at.format.srgb8_alpha8_etc2_eac"
SHRINK_HWTEST_F(ActsKhrgles310003TestSuite, TestCase_002406, VkglTestCase_002406_1, VkglTestCase_002406_2);
