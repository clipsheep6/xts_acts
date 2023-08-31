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

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002578, "dEQP-VK.synchronization.basic.event.host_set_reset.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002579, "dEQP-VK.synchronization.basic.event.device_set_reset.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002580, "dEQP-VK.synchronization.basic.event.single_submit_multi_command_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002581, "dEQP-VK.synchronization.basic.event.multi_submit_multi_command_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002582, "dEQP-VK.synchronization.basic.event.multi_secondary_command_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002583, "dEQP-VK.synchronization.basic.fence.one.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002584, "dEQP-VK.synchronization.basic.fence.multi.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002585, "dEQP-VK.synchronization.basic.fence.empty_submit.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002586, "dEQP-VK.synchronization.basic.fence.multi_waitall_false.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002587, "dEQP-VK.synchronization.basic.fence.one_signaled.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002588, "dEQP-VK.synchronization.basic.fence.multiple_signaled.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002589, "dEQP-VK.synchronization.basic.binary_semaphore.one_queue.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002590, "dEQP-VK.synchronization.basic.binary_semaphore.multi_queue.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002591, "dEQP-VK.synchronization.basic.binary_semaphore.one_queue_typed.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002592, "dEQP-VK.synchronization.basic.binary_semaphore.multi_queue_typed.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002593, "dEQP-VK.synchronization.basic.binary_semaphore.chain.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002594, "dEQP-VK.synchronization.basic.timeline_semaphore.one_queue.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002595, "dEQP-VK.synchronization.basic.timeline_semaphore.multi_queue.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002596, "dEQP-VK.synchronization.basic.timeline_semaphore.chain.*");

static SHRINK_HWTEST_F(ActsSynchronization0002TS, TC002597, "dEQP-VK.synchronization.basic.timeline_semaphore.two_threads.*");
