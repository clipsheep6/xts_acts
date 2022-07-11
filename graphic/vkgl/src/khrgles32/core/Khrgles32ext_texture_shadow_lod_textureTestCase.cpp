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
#include "../Khrgles32BaseFunc.h"
#include "../ActsKhrgles320002TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_001132_1 "KHR-GLES32.core.ext_texture_shadow_lod"
#define VkglTestCase_001132_2 ".texture.sampler2darrayshadow_fragment"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001132, VkglTestCase_001132_1, VkglTestCase_001132_2);

#define VkglTestCase_001133_1 "KHR-GLES32.core.ext_texture_shadow_lod.t"
#define VkglTestCase_001133_2 "exture.sampler2darrayshadow_bias_fragment"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001133, VkglTestCase_001133_1, VkglTestCase_001133_2);

#define VkglTestCase_001134_1 "KHR-GLES32.core.ext_texture_shadow_lod"
#define VkglTestCase_001134_2 ".texture.samplercubearrayshadow_vertex"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001134, VkglTestCase_001134_1, VkglTestCase_001134_2);

#define VkglTestCase_001135_1 "KHR-GLES32.core.ext_texture_shadow_lod."
#define VkglTestCase_001135_2 "texture.samplercubearrayshadow_fragment"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001135, VkglTestCase_001135_1, VkglTestCase_001135_2);

#define VkglTestCase_001136_1 "KHR-GLES32.core.ext_texture_shadow_lod.te"
#define VkglTestCase_001136_2 "xture.samplercubearrayshadow_bias_fragment"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001136, VkglTestCase_001136_1, VkglTestCase_001136_2);
