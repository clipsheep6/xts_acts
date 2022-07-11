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
#include "../ActsDeqpgles310017TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_016173_1 "dEQP-GLES31.functional.synchroniza"
#define VkglTestCase_016173_2 "tion.in_invocation.image_write_read"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016173, VkglTestCase_016173_1, VkglTestCase_016173_2);

#define VkglTestCase_016174_1 "dEQP-GLES31.functional.synchroniza"
#define VkglTestCase_016174_2 "tion.in_invocation.image_read_write"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016174, VkglTestCase_016174_1, VkglTestCase_016174_2);

#define VkglTestCase_016175_1 "dEQP-GLES31.functional.synchroniza"
#define VkglTestCase_016175_2 "tion.in_invocation.image_overwrite"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016175, VkglTestCase_016175_1, VkglTestCase_016175_2);

#define VkglTestCase_016176_1 "dEQP-GLES31.functional.synchronizat"
#define VkglTestCase_016176_2 "ion.in_invocation.image_alias_write"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016176, VkglTestCase_016176_1, VkglTestCase_016176_2);

#define VkglTestCase_016177_1 "dEQP-GLES31.functional.synchronizatio"
#define VkglTestCase_016177_2 "n.in_invocation.image_alias_overwrite"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016177, VkglTestCase_016177_1, VkglTestCase_016177_2);

#define VkglTestCase_016178_1 "dEQP-GLES31.functional.synchronization"
#define VkglTestCase_016178_2 ".in_invocation.image_atomic_write_read"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016178, VkglTestCase_016178_1, VkglTestCase_016178_2);

#define VkglTestCase_016179_1 "dEQP-GLES31.functional.synchronization"
#define VkglTestCase_016179_2 ".in_invocation.image_atomic_read_write"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016179, VkglTestCase_016179_1, VkglTestCase_016179_2);

#define VkglTestCase_016180_1 "dEQP-GLES31.functional.synchronizatio"
#define VkglTestCase_016180_2 "n.in_invocation.image_atomic_overwrite"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016180, VkglTestCase_016180_1, VkglTestCase_016180_2);

#define VkglTestCase_016181_1 "dEQP-GLES31.functional.synchronization"
#define VkglTestCase_016181_2 ".in_invocation.image_atomic_alias_write"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016181, VkglTestCase_016181_1, VkglTestCase_016181_2);

#define VkglTestCase_016182_1 "dEQP-GLES31.functional.synchronization.i"
#define VkglTestCase_016182_2 "n_invocation.image_atomic_alias_overwrite"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016182, VkglTestCase_016182_1, VkglTestCase_016182_2);

#define VkglTestCase_016183_1 "dEQP-GLES31.functional.synchroniza"
#define VkglTestCase_016183_2 "tion.in_invocation.ssbo_write_read"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016183, VkglTestCase_016183_1, VkglTestCase_016183_2);

#define VkglTestCase_016184_1 "dEQP-GLES31.functional.synchroniza"
#define VkglTestCase_016184_2 "tion.in_invocation.ssbo_read_write"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016184, VkglTestCase_016184_1, VkglTestCase_016184_2);

#define VkglTestCase_016185_1 "dEQP-GLES31.functional.synchroniz"
#define VkglTestCase_016185_2 "ation.in_invocation.ssbo_overwrite"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016185, VkglTestCase_016185_1, VkglTestCase_016185_2);

#define VkglTestCase_016186_1 "dEQP-GLES31.functional.synchroniza"
#define VkglTestCase_016186_2 "tion.in_invocation.ssbo_alias_write"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016186, VkglTestCase_016186_1, VkglTestCase_016186_2);

#define VkglTestCase_016187_1 "dEQP-GLES31.functional.synchronizati"
#define VkglTestCase_016187_2 "on.in_invocation.ssbo_alias_overwrite"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016187, VkglTestCase_016187_1, VkglTestCase_016187_2);

#define VkglTestCase_016188_1 "dEQP-GLES31.functional.synchronizatio"
#define VkglTestCase_016188_2 "n.in_invocation.ssbo_atomic_write_read"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016188, VkglTestCase_016188_1, VkglTestCase_016188_2);

#define VkglTestCase_016189_1 "dEQP-GLES31.functional.synchronizatio"
#define VkglTestCase_016189_2 "n.in_invocation.ssbo_atomic_read_write"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016189, VkglTestCase_016189_1, VkglTestCase_016189_2);

#define VkglTestCase_016190_1 "dEQP-GLES31.functional.synchronizatio"
#define VkglTestCase_016190_2 "n.in_invocation.ssbo_atomic_overwrite"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016190, VkglTestCase_016190_1, VkglTestCase_016190_2);

#define VkglTestCase_016191_1 "dEQP-GLES31.functional.synchronization"
#define VkglTestCase_016191_2 ".in_invocation.ssbo_atomic_alias_write"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016191, VkglTestCase_016191_1, VkglTestCase_016191_2);

#define VkglTestCase_016192_1 "dEQP-GLES31.functional.synchronization.i"
#define VkglTestCase_016192_2 "n_invocation.ssbo_atomic_alias_overwrite"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016192, VkglTestCase_016192_1, VkglTestCase_016192_2);
