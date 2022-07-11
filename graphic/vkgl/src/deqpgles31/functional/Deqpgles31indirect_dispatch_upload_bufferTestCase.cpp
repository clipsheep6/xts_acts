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

#define VkglTestCase_007687_1 "dEQP-GLES31.functional.compute.indirect_"
#define VkglTestCase_007687_2 "dispatch.upload_buffer.single_invocation"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007687, VkglTestCase_007687_1, VkglTestCase_007687_2);

#define VkglTestCase_007688_1 "dEQP-GLES31.functional.compute.indirect"
#define VkglTestCase_007688_2 "_dispatch.upload_buffer.multiple_groups"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007688, VkglTestCase_007688_1, VkglTestCase_007688_2);

#define VkglTestCase_007689_1 "dEQP-GLES31.functional.compute.indirect_dispatch."
#define VkglTestCase_007689_2 "upload_buffer.multiple_groups_multiple_invocations"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007689, VkglTestCase_007689_1, VkglTestCase_007689_2);

#define VkglTestCase_007690_1 "dEQP-GLES31.functional.compute.indire"
#define VkglTestCase_007690_2 "ct_dispatch.upload_buffer.small_offset"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007690, VkglTestCase_007690_1, VkglTestCase_007690_2);

#define VkglTestCase_007691_1 "dEQP-GLES31.functional.compute.indire"
#define VkglTestCase_007691_2 "ct_dispatch.upload_buffer.large_offset"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007691, VkglTestCase_007691_1, VkglTestCase_007691_2);

#define VkglTestCase_007692_1 "dEQP-GLES31.functional.compute.indirect_dispatch"
#define VkglTestCase_007692_2 ".upload_buffer.large_offset_multiple_invocations"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007692, VkglTestCase_007692_1, VkglTestCase_007692_2);

#define VkglTestCase_007693_1 "dEQP-GLES31.functional.compute.indirec"
#define VkglTestCase_007693_2 "t_dispatch.upload_buffer.empty_command"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007693, VkglTestCase_007693_1, VkglTestCase_007693_2);

#define VkglTestCase_007694_1 "dEQP-GLES31.functional.compute.indirec"
#define VkglTestCase_007694_2 "t_dispatch.upload_buffer.multi_dispatch"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007694, VkglTestCase_007694_1, VkglTestCase_007694_2);

#define VkglTestCase_007695_1 "dEQP-GLES31.functional.compute.indirect_dispa"
#define VkglTestCase_007695_2 "tch.upload_buffer.multi_dispatch_reuse_command"
SHRINK_HWTEST_F(ActsDeqpgles310008TestSuite, TestCase_007695, VkglTestCase_007695_1, VkglTestCase_007695_2);
