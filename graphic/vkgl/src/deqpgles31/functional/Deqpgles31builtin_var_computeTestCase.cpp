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
#include "../Deqpgles31BaseFunc.h"
#include "../ActsDeqpgles310001TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_000007_1 "dEQP-GLES31.functional.shaders.bu"
#define VkglTestCase_000007_2 "iltin_var.compute.num_work_groups"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000007, VkglTestCase_000007_1, VkglTestCase_000007_2);

#define VkglTestCase_000008_1 "dEQP-GLES31.functional.shaders.bu"
#define VkglTestCase_000008_2 "iltin_var.compute.work_group_size"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000008, VkglTestCase_000008_1, VkglTestCase_000008_2);

#define VkglTestCase_000009_1 "dEQP-GLES31.functional.shaders.b"
#define VkglTestCase_000009_2 "uiltin_var.compute.work_group_id"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000009, VkglTestCase_000009_1, VkglTestCase_000009_2);

#define VkglTestCase_000010_1 "dEQP-GLES31.functional.shaders.buil"
#define VkglTestCase_000010_2 "tin_var.compute.local_invocation_id"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000010, VkglTestCase_000010_1, VkglTestCase_000010_2);

#define VkglTestCase_000011_1 "dEQP-GLES31.functional.shaders.buil"
#define VkglTestCase_000011_2 "tin_var.compute.global_invocation_id"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000011, VkglTestCase_000011_1, VkglTestCase_000011_2);

#define VkglTestCase_000012_1 "dEQP-GLES31.functional.shaders.built"
#define VkglTestCase_000012_2 "in_var.compute.local_invocation_index"
SHRINK_HWTEST_F(ActsDeqpgles310001TestSuite, TestCase_000012, VkglTestCase_000012_1, VkglTestCase_000012_2);
