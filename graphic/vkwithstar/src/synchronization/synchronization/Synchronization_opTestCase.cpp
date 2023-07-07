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
#include "../SynchronizationBaseFunc.h"
#include "../ActsSynchronization0002TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002598, "dEQP-VK.synchronization.op.single_queue.fence.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002599, "dEQP-VK.synchronization.op.single_queue.binary_semaphore.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002600, "dEQP-VK.synchronization.op.single_queue.timeline_semaphore.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002601, "dEQP-VK.synchronization.op.single_queue.barrier.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002602, "dEQP-VK.synchronization.op.single_queue.event.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002603, "dEQP-VK.synchronization.op.multi_queue.fence.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002604, "dEQP-VK.synchronization.op.multi_queue.binary_semaphore.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002605, "dEQP-VK.synchronization.op.multi_queue.timeline_semaphore.*");
