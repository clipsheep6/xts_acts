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
#include "../ActsDeqpgles310008TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_007696_1 "dEQP-GLES31.functional.compute.indirect_"
#define VkglTestCase_007696_2 "dispatch.gen_in_compute.single_invocation"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007696, VkglTestCase_007696_1, VkglTestCase_007696_2);

#define VkglTestCase_007697_1 "dEQP-GLES31.functional.compute.indirect"
#define VkglTestCase_007697_2 "_dispatch.gen_in_compute.multiple_groups"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007697, VkglTestCase_007697_1, VkglTestCase_007697_2);

#define VkglTestCase_007698_1 "dEQP-GLES31.functional.compute.indirect_dispatch.g"
#define VkglTestCase_007698_2 "en_in_compute.multiple_groups_multiple_invocations"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007698, VkglTestCase_007698_1, VkglTestCase_007698_2);

#define VkglTestCase_007699_1 "dEQP-GLES31.functional.compute.indirec"
#define VkglTestCase_007699_2 "t_dispatch.gen_in_compute.small_offset"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007699, VkglTestCase_007699_1, VkglTestCase_007699_2);

#define VkglTestCase_007700_1 "dEQP-GLES31.functional.compute.indirec"
#define VkglTestCase_007700_2 "t_dispatch.gen_in_compute.large_offset"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007700, VkglTestCase_007700_1, VkglTestCase_007700_2);

#define VkglTestCase_007701_1 "dEQP-GLES31.functional.compute.indirect_dispatch"
#define VkglTestCase_007701_2 ".gen_in_compute.large_offset_multiple_invocations"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007701, VkglTestCase_007701_1, VkglTestCase_007701_2);

#define VkglTestCase_007702_1 "dEQP-GLES31.functional.compute.indirec"
#define VkglTestCase_007702_2 "t_dispatch.gen_in_compute.empty_command"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007702, VkglTestCase_007702_1, VkglTestCase_007702_2);

#define VkglTestCase_007703_1 "dEQP-GLES31.functional.compute.indirect"
#define VkglTestCase_007703_2 "_dispatch.gen_in_compute.multi_dispatch"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007703, VkglTestCase_007703_1, VkglTestCase_007703_2);

#define VkglTestCase_007704_1 "dEQP-GLES31.functional.compute.indirect_dispat"
#define VkglTestCase_007704_2 "ch.gen_in_compute.multi_dispatch_reuse_command"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007704, VkglTestCase_007704_1, VkglTestCase_007704_2);
