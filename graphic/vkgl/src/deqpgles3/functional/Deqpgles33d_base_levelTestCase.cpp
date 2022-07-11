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

#define VkglTestCase_025189_1 "dEQP-GLES3.functional.texture.mip"
#define VkglTestCase_025189_2 "map.3d.base_level.nearest_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025189, VkglTestCase_025189_1, VkglTestCase_025189_2);

#define VkglTestCase_025190_1 "dEQP-GLES3.functional.texture.mi"
#define VkglTestCase_025190_2 "pmap.3d.base_level.linear_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025190, VkglTestCase_025190_1, VkglTestCase_025190_2);

#define VkglTestCase_025191_1 "dEQP-GLES3.functional.texture.mi"
#define VkglTestCase_025191_2 "pmap.3d.base_level.nearest_linear"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025191, VkglTestCase_025191_1, VkglTestCase_025191_2);

#define VkglTestCase_025192_1 "dEQP-GLES3.functional.texture.mi"
#define VkglTestCase_025192_2 "pmap.3d.base_level.linear_linear"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025192, VkglTestCase_025192_1, VkglTestCase_025192_2);
