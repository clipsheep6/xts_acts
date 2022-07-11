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
#include "../ActsDeqpgles30041TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_040440_1 "dEQP-GLES3.functional.instanced.draw_a"
#define VkglTestCase_040440_2 "rrays_instanced.instance_id.1_instances"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040440, VkglTestCase_040440_1, VkglTestCase_040440_2);

#define VkglTestCase_040441_1 "dEQP-GLES3.functional.instanced.draw_a"
#define VkglTestCase_040441_2 "rrays_instanced.instance_id.2_instances"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040441, VkglTestCase_040441_1, VkglTestCase_040441_2);

#define VkglTestCase_040442_1 "dEQP-GLES3.functional.instanced.draw_a"
#define VkglTestCase_040442_2 "rrays_instanced.instance_id.4_instances"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040442, VkglTestCase_040442_1, VkglTestCase_040442_2);

#define VkglTestCase_040443_1 "dEQP-GLES3.functional.instanced.draw_ar"
#define VkglTestCase_040443_2 "rays_instanced.instance_id.20_instances"
SHRINK_HWTEST_F(ActsDeqpgles30041TestSuite, TestCase_040443, VkglTestCase_040443_1, VkglTestCase_040443_2);
