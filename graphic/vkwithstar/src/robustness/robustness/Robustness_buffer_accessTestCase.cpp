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
#include "../RobustnessBaseFunc.h"
#include "../ActsRobustness0001TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static SHRINK_HWTEST_F(ActsRobustness0001TS, TC000001, "dEQP-VK.robustness.buffer_access.vertex.mat4_copy.*");

static SHRINK_HWTEST_F(ActsRobustness0001TS, TC000002, "dEQP-VK.robustness.buffer_access.vertex.vec4_copy.*");

static SHRINK_HWTEST_F(ActsRobustness0001TS, TC000003, "dEQP-VK.robustness.buffer_access.vertex.scalar_copy.*");

static SHRINK_HWTEST_F(ActsRobustness0001TS, TC000004, "dEQP-VK.robustness.buffer_access.vertex.texel_copy.*");

static SHRINK_HWTEST_F(ActsRobustness0001TS, TC000005, "dEQP-VK.robustness.buffer_access.fragment.mat4_copy.*");

static SHRINK_HWTEST_F(ActsRobustness0001TS, TC000006, "dEQP-VK.robustness.buffer_access.fragment.vec4_copy.*");

static SHRINK_HWTEST_F(ActsRobustness0001TS, TC000007, "dEQP-VK.robustness.buffer_access.fragment.scalar_copy.*");

static SHRINK_HWTEST_F(ActsRobustness0001TS, TC000008, "dEQP-VK.robustness.buffer_access.fragment.texel_copy.*");

static SHRINK_HWTEST_F(ActsRobustness0001TS, TC000009, "dEQP-VK.robustness.buffer_access.compute.mat4_copy.*");

static SHRINK_HWTEST_F(ActsRobustness0001TS, TC000010, "dEQP-VK.robustness.buffer_access.compute.vec4_copy.*");

static SHRINK_HWTEST_F(ActsRobustness0001TS, TC000011, "dEQP-VK.robustness.buffer_access.compute.scalar_copy.*");

static SHRINK_HWTEST_F(ActsRobustness0001TS, TC000012, "dEQP-VK.robustness.buffer_access.compute.texel_copy.*");

static SHRINK_HWTEST_F(ActsRobustness0001TS, TC000013, "dEQP-VK.robustness.buffer_access.through_pointers.graphics.*");

static SHRINK_HWTEST_F(ActsRobustness0001TS, TC000014, "dEQP-VK.robustness.buffer_access.through_pointers.compute.*");
