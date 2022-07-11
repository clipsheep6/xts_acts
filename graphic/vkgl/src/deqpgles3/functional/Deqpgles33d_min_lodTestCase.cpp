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

#define VkglTestCase_025181_1 "dEQP-GLES3.functional.texture.m"
#define VkglTestCase_025181_2 "ipmap.3d.min_lod.nearest_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025181, VkglTestCase_025181_1, VkglTestCase_025181_2);

#define VkglTestCase_025182_1 "dEQP-GLES3.functional.texture.m"
#define VkglTestCase_025182_2 "ipmap.3d.min_lod.linear_nearest"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025182, VkglTestCase_025182_1, VkglTestCase_025182_2);

#define VkglTestCase_025183_1 "dEQP-GLES3.functional.texture.m"
#define VkglTestCase_025183_2 "ipmap.3d.min_lod.nearest_linear"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025183, VkglTestCase_025183_1, VkglTestCase_025183_2);

#define VkglTestCase_025184_1 "dEQP-GLES3.functional.texture."
#define VkglTestCase_025184_2 "mipmap.3d.min_lod.linear_linear"
SHRINK_HWTEST_F(ActsDeqpgles30026TestSuite, TestCase_025184, VkglTestCase_025184_1, VkglTestCase_025184_2);
