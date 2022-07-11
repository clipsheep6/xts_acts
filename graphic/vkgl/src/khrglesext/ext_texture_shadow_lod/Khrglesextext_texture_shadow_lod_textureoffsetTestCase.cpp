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

#define VkglTestCase_000325_1 "KHR-GLESEXT.ext_texture_shadow_lod.tex"
#define VkglTestCase_000325_2 "tureoffset.sampler2darrayshadow_vertex"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000325, VkglTestCase_000325_1, VkglTestCase_000325_2);

#define VkglTestCase_000326_1 "KHR-GLESEXT.ext_texture_shadow_lod.text"
#define VkglTestCase_000326_2 "ureoffset.sampler2darrayshadow_fragment"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000326, VkglTestCase_000326_1, VkglTestCase_000326_2);

#define VkglTestCase_000327_1 "KHR-GLESEXT.ext_texture_shadow_lod.textur"
#define VkglTestCase_000327_2 "eoffset.sampler2darrayshadow_bias_fragment"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000327, VkglTestCase_000327_1, VkglTestCase_000327_2);
