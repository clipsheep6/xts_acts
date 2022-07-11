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
#include "../ActsKhrgles310002TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_001836_1 "KHR-GLES31.core.shader_macros."
#define VkglTestCase_001836_2 "fragment_precision_high_vertex"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001836, VkglTestCase_001836_1, VkglTestCase_001836_2);

#define VkglTestCase_001837_1 "KHR-GLES31.core.shader_macros.f"
#define VkglTestCase_001837_2 "ragment_precision_high_fragment"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001837, VkglTestCase_001837_1, VkglTestCase_001837_2);

#define VkglTestCase_001838_1 "KHR-GLES31.core.shader_macros.f"
#define VkglTestCase_001838_2 "ragment_precision_high_geometry"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001838, VkglTestCase_001838_1, VkglTestCase_001838_2);

#define VkglTestCase_001839_1 "KHR-GLES31.core.shader_macros.fra"
#define VkglTestCase_001839_2 "gment_precision_high_tess_control"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001839, VkglTestCase_001839_1, VkglTestCase_001839_2);

#define VkglTestCase_001840_1 "KHR-GLES31.core.shader_macros.f"
#define VkglTestCase_001840_2 "ragment_precision_high_tess_eval"
SHRINK_HWTEST_F(ActsKhrgles310002TestSuite, TestCase_001840, VkglTestCase_001840_1, VkglTestCase_001840_2);
