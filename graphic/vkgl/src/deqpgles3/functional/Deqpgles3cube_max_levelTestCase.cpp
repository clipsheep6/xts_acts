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
#include "../Deqpgles3BaseFunc.h"
#include "../ActsDeqpgles30026TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_025125_1 "dEQP-GLES3.functional.texture.mip"
#define VkglTestCase_025125_2 "map.cube.max_level.nearest_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025125, VkglTestCase_025125_1, VkglTestCase_025125_2);

#define VkglTestCase_025126_1 "dEQP-GLES3.functional.texture.mip"
#define VkglTestCase_025126_2 "map.cube.max_level.linear_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025126, VkglTestCase_025126_1, VkglTestCase_025126_2);

#define VkglTestCase_025127_1 "dEQP-GLES3.functional.texture.mip"
#define VkglTestCase_025127_2 "map.cube.max_level.nearest_linear"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025127, VkglTestCase_025127_1, VkglTestCase_025127_2);

#define VkglTestCase_025128_1 "dEQP-GLES3.functional.texture.mi"
#define VkglTestCase_025128_2 "pmap.cube.max_level.linear_linear"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025128, VkglTestCase_025128_1, VkglTestCase_025128_2);
