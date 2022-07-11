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
#include "../ActsKhrgles310001TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_000328_1 "KHR-GLES31.core.sepshad"
#define VkglTestCase_000328_2 "erobjs.CreateShadProgApi"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000328, VkglTestCase_000328_1, VkglTestCase_000328_2);

#define VkglTestCase_000329_1 "KHR-GLES31.core.sepshad"
#define VkglTestCase_000329_2 "erobjs.UseProgStagesApi"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000329, VkglTestCase_000329_1, VkglTestCase_000329_2);

#define VkglTestCase_000330_1 "KHR-GLES31.core.seps"
#define VkglTestCase_000330_2 "haderobjs.PipelineApi"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000330, VkglTestCase_000330_1, VkglTestCase_000330_2);

#define VkglTestCase_000331_1 "KHR-GLES31.core.sepsha"
#define VkglTestCase_000331_2 "derobjs.ProgUniformAPI"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000331, VkglTestCase_000331_1, VkglTestCase_000331_2);

#define VkglTestCase_000332_1 "KHR-GLES31.core.sepshad"
#define VkglTestCase_000332_2 "erobjs.StateInteraction"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000332, VkglTestCase_000332_1, VkglTestCase_000332_2);

#define VkglTestCase_000333_1 "KHR-GLES31.core.sepshaderobjs."
#define VkglTestCase_000333_2 "InterfacePrecisionMatchingFloat"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000333, VkglTestCase_000333_1, VkglTestCase_000333_2);

#define VkglTestCase_000334_1 "KHR-GLES31.core.sepshaderobjs"
#define VkglTestCase_000334_2 ".InterfacePrecisionMatchingInt"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000334, VkglTestCase_000334_1, VkglTestCase_000334_2);

#define VkglTestCase_000335_1 "KHR-GLES31.core.sepshaderobjs."
#define VkglTestCase_000335_2 "InterfacePrecisionMatchingUInt"
SHRINK_HWTEST_F(ActsKhrgles310001TestSuite, TestCase_000335, VkglTestCase_000335_1, VkglTestCase_000335_2);
