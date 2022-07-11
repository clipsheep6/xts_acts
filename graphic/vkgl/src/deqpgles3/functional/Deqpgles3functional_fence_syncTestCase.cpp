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
#include "../ActsDeqpgles30042TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

#define VkglTestCase_041856_1 "dEQP-GLES3.functional.fenc"
#define VkglTestCase_041856_2 "e_sync.wait_sync_smalldraw"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041856, VkglTestCase_041856_1, VkglTestCase_041856_2);

#define VkglTestCase_041857_1 "dEQP-GLES3.functional.fenc"
#define VkglTestCase_041857_2 "e_sync.wait_sync_largedraw"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041857, VkglTestCase_041857_1, VkglTestCase_041857_2);

#define VkglTestCase_041858_1 "dEQP-GLES3.functional.fence_s"
#define VkglTestCase_041858_2 "ync.client_wait_sync_smalldraw"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041858, VkglTestCase_041858_1, VkglTestCase_041858_2);

#define VkglTestCase_041859_1 "dEQP-GLES3.functional.fence_s"
#define VkglTestCase_041859_2 "ync.client_wait_sync_largedraw"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041859, VkglTestCase_041859_1, VkglTestCase_041859_2);

#define VkglTestCase_041860_1 "dEQP-GLES3.functional.fence_sync."
#define VkglTestCase_041860_2 "client_wait_sync_timeout_smalldraw"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041860, VkglTestCase_041860_1, VkglTestCase_041860_2);

#define VkglTestCase_041861_1 "dEQP-GLES3.functional.fence_sync."
#define VkglTestCase_041861_2 "client_wait_sync_timeout_largedraw"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041861, VkglTestCase_041861_1, VkglTestCase_041861_2);

#define VkglTestCase_041862_1 "dEQP-GLES3.functional.fence_sy"
#define VkglTestCase_041862_2 "nc.client_wait_sync_flush_auto"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041862, VkglTestCase_041862_1, VkglTestCase_041862_2);

#define VkglTestCase_041863_1 "dEQP-GLES3.functional.fence_syn"
#define VkglTestCase_041863_2 "c.client_wait_sync_flush_manual"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041863, VkglTestCase_041863_1, VkglTestCase_041863_2);

#define VkglTestCase_041864_1 "dEQP-GLES3.functional.fence_"
#define VkglTestCase_041864_2 "sync.client_wait_sync_noflush"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041864, VkglTestCase_041864_1, VkglTestCase_041864_2);

#define VkglTestCase_041865_1 "dEQP-GLES3.functional.fence_"
#define VkglTestCase_041865_2 "sync.client_wait_sync_finish"
SHRINK_HWTEST_F(ActsDeqpgles30042TestSuite, TestCase_041865, VkglTestCase_041865_1, VkglTestCase_041865_2);
