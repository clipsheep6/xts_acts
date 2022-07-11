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

#define VkglTestCase_001145_1 "KHR-GLES32.core.ext_texture_shadow_lod.te"
#define VkglTestCase_001145_2 "xturelodoffset.sampler2darrayshadow_vertex"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001145, VkglTestCase_001145_1, VkglTestCase_001145_2);

#define VkglTestCase_001146_1 "KHR-GLES32.core.ext_texture_shadow_lod.tex"
#define VkglTestCase_001146_2 "turelodoffset.sampler2darrayshadow_fragment"
SHRINK_HWTEST_F(ActsKhrgles320002TestSuite, TestCase_001146, VkglTestCase_001146_1, VkglTestCase_001146_2);
