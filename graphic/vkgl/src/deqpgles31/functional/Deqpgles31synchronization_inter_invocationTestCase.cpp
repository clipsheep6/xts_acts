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

#define VkglTestCase_016193_1 "dEQP-GLES31.functional.synchronizati"
#define VkglTestCase_016193_2 "on.inter_invocation.image_write_read"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016193, VkglTestCase_016193_1, VkglTestCase_016193_2);

#define VkglTestCase_016194_1 "dEQP-GLES31.functional.synchronizati"
#define VkglTestCase_016194_2 "on.inter_invocation.image_read_write"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016194, VkglTestCase_016194_1, VkglTestCase_016194_2);

#define VkglTestCase_016195_1 "dEQP-GLES31.functional.synchronizat"
#define VkglTestCase_016195_2 "ion.inter_invocation.image_overwrite"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016195, VkglTestCase_016195_1, VkglTestCase_016195_2);

#define VkglTestCase_016196_1 "dEQP-GLES31.functional.synchronizati"
#define VkglTestCase_016196_2 "on.inter_invocation.image_alias_write"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016196, VkglTestCase_016196_1, VkglTestCase_016196_2);

#define VkglTestCase_016197_1 "dEQP-GLES31.functional.synchronization"
#define VkglTestCase_016197_2 ".inter_invocation.image_alias_overwrite"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016197, VkglTestCase_016197_1, VkglTestCase_016197_2);

#define VkglTestCase_016198_1 "dEQP-GLES31.functional.synchronization."
#define VkglTestCase_016198_2 "inter_invocation.image_atomic_write_read"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016198, VkglTestCase_016198_1, VkglTestCase_016198_2);

#define VkglTestCase_016199_1 "dEQP-GLES31.functional.synchronization."
#define VkglTestCase_016199_2 "inter_invocation.image_atomic_read_write"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016199, VkglTestCase_016199_1, VkglTestCase_016199_2);

#define VkglTestCase_016200_1 "dEQP-GLES31.functional.synchronization."
#define VkglTestCase_016200_2 "inter_invocation.image_atomic_overwrite"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016200, VkglTestCase_016200_1, VkglTestCase_016200_2);

#define VkglTestCase_016201_1 "dEQP-GLES31.functional.synchronization.i"
#define VkglTestCase_016201_2 "nter_invocation.image_atomic_alias_write"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016201, VkglTestCase_016201_1, VkglTestCase_016201_2);

#define VkglTestCase_016202_1 "dEQP-GLES31.functional.synchronization.int"
#define VkglTestCase_016202_2 "er_invocation.image_atomic_alias_overwrite"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016202, VkglTestCase_016202_1, VkglTestCase_016202_2);

#define VkglTestCase_016203_1 "dEQP-GLES31.functional.synchronizat"
#define VkglTestCase_016203_2 "ion.inter_invocation.ssbo_write_read"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016203, VkglTestCase_016203_1, VkglTestCase_016203_2);

#define VkglTestCase_016204_1 "dEQP-GLES31.functional.synchronizat"
#define VkglTestCase_016204_2 "ion.inter_invocation.ssbo_read_write"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016204, VkglTestCase_016204_1, VkglTestCase_016204_2);

#define VkglTestCase_016205_1 "dEQP-GLES31.functional.synchronizat"
#define VkglTestCase_016205_2 "ion.inter_invocation.ssbo_overwrite"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016205, VkglTestCase_016205_1, VkglTestCase_016205_2);

#define VkglTestCase_016206_1 "dEQP-GLES31.functional.synchronizati"
#define VkglTestCase_016206_2 "on.inter_invocation.ssbo_alias_write"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016206, VkglTestCase_016206_1, VkglTestCase_016206_2);

#define VkglTestCase_016207_1 "dEQP-GLES31.functional.synchronization"
#define VkglTestCase_016207_2 ".inter_invocation.ssbo_alias_overwrite"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016207, VkglTestCase_016207_1, VkglTestCase_016207_2);

#define VkglTestCase_016208_1 "dEQP-GLES31.functional.synchronization."
#define VkglTestCase_016208_2 "inter_invocation.ssbo_atomic_write_read"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016208, VkglTestCase_016208_1, VkglTestCase_016208_2);

#define VkglTestCase_016209_1 "dEQP-GLES31.functional.synchronization."
#define VkglTestCase_016209_2 "inter_invocation.ssbo_atomic_read_write"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016209, VkglTestCase_016209_1, VkglTestCase_016209_2);

#define VkglTestCase_016210_1 "dEQP-GLES31.functional.synchronization"
#define VkglTestCase_016210_2 ".inter_invocation.ssbo_atomic_overwrite"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016210, VkglTestCase_016210_1, VkglTestCase_016210_2);

#define VkglTestCase_016211_1 "dEQP-GLES31.functional.synchronization."
#define VkglTestCase_016211_2 "inter_invocation.ssbo_atomic_alias_write"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016211, VkglTestCase_016211_1, VkglTestCase_016211_2);

#define VkglTestCase_016212_1 "dEQP-GLES31.functional.synchronization.in"
#define VkglTestCase_016212_2 "ter_invocation.ssbo_atomic_alias_overwrite"
SHRINK_HWTEST_F(ActsDeqpgles310017TestSuite, TestCase_016212, VkglTestCase_016212_1, VkglTestCase_016212_2);
