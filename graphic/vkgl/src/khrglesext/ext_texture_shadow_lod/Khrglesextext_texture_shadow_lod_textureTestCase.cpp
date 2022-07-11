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
#include "../KhrglesextBaseFunc.h"
#include "../ActsKhrglesext0001TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_000319_1 "KHR-GLESEXT.ext_texture_shadow_lod."
#define VkglTestCase_000319_2 "texture.sampler2darrayshadow_vertex"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000319, VkglTestCase_000319_1, VkglTestCase_000319_2);

#define VkglTestCase_000320_1 "KHR-GLESEXT.ext_texture_shadow_lod.t"
#define VkglTestCase_000320_2 "exture.sampler2darrayshadow_fragment"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000320, VkglTestCase_000320_1, VkglTestCase_000320_2);

#define VkglTestCase_000321_1 "KHR-GLESEXT.ext_texture_shadow_lod.tex"
#define VkglTestCase_000321_2 "ture.sampler2darrayshadow_bias_fragment"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000321, VkglTestCase_000321_1, VkglTestCase_000321_2);

#define VkglTestCase_000322_1 "KHR-GLESEXT.ext_texture_shadow_lod.t"
#define VkglTestCase_000322_2 "exture.samplercubearrayshadow_vertex"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000322, VkglTestCase_000322_1, VkglTestCase_000322_2);

#define VkglTestCase_000323_1 "KHR-GLESEXT.ext_texture_shadow_lod.te"
#define VkglTestCase_000323_2 "xture.samplercubearrayshadow_fragment"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000323, VkglTestCase_000323_1, VkglTestCase_000323_2);

#define VkglTestCase_000324_1 "KHR-GLESEXT.ext_texture_shadow_lod.text"
#define VkglTestCase_000324_2 "ure.samplercubearrayshadow_bias_fragment"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000324, VkglTestCase_000324_1, VkglTestCase_000324_2);
