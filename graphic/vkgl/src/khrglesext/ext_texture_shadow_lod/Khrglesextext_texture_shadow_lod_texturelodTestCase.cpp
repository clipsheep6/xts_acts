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

#define VkglTestCase_000328_1 "KHR-GLESEXT.ext_texture_shadow_lod.t"
#define VkglTestCase_000328_2 "exturelod.sampler2darrayshadow_vertex"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000328, VkglTestCase_000328_1, VkglTestCase_000328_2);

#define VkglTestCase_000329_1 "KHR-GLESEXT.ext_texture_shadow_lod.te"
#define VkglTestCase_000329_2 "xturelod.sampler2darrayshadow_fragment"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000329, VkglTestCase_000329_1, VkglTestCase_000329_2);

#define VkglTestCase_000330_1 "KHR-GLESEXT.ext_texture_shadow_lod."
#define VkglTestCase_000330_2 "texturelod.samplercubeshadow_vertex"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000330, VkglTestCase_000330_1, VkglTestCase_000330_2);

#define VkglTestCase_000331_1 "KHR-GLESEXT.ext_texture_shadow_lod.t"
#define VkglTestCase_000331_2 "exturelod.samplercubeshadow_fragment"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000331, VkglTestCase_000331_1, VkglTestCase_000331_2);

#define VkglTestCase_000332_1 "KHR-GLESEXT.ext_texture_shadow_lod.tex"
#define VkglTestCase_000332_2 "turelod.samplercubearrayshadow_fragment"
SHRINK_HWTEST_F(ActsKhrglesext0001TestSuite, TestCase_000332, VkglTestCase_000332_1, VkglTestCase_000332_2);
