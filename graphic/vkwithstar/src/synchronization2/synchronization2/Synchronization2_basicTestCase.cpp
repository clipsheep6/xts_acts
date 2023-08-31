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
#include "../Synchronization2BaseFunc.h"
#include "../ActsSynchronization20001TestSuite.h"
#include "shrinkdefine.h"

using namespace std;
using namespace testing::ext;
using namespace OHOS;

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000987, "dEQP-VK.synchronization2.basic.event.device_set_reset.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000988, "dEQP-VK.synchronization2.basic.event.single_submit_multi_command_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000989, "dEQP-VK.synchronization2.basic.event.multi_submit_multi_command_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000990, "dEQP-VK.synchronization2.basic.event.multi_secondary_command_buffer.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000991, "dEQP-VK.synchronization2.basic.event.single_submit_multi_command_buffer_device_only.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000992, "dEQP-VK.synchronization2.basic.event.multi_submit_multi_command_buffer_device_only.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000993, "dEQP-VK.synchronization2.basic.event.multi_secondary_command_buffer_device_only.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000994, "dEQP-VK.synchronization2.basic.binary_semaphore.one_queue.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000995, "dEQP-VK.synchronization2.basic.binary_semaphore.multi_queue.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000996, "dEQP-VK.synchronization2.basic.binary_semaphore.one_queue_typed.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000997, "dEQP-VK.synchronization2.basic.binary_semaphore.multi_queue_typed.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000998, "dEQP-VK.synchronization2.basic.binary_semaphore.chain.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC000999, "dEQP-VK.synchronization2.basic.timeline_semaphore.one_queue.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001000, "dEQP-VK.synchronization2.basic.timeline_semaphore.multi_queue.*");

static SHRINK_HWTEST_F(ActsSynchronization20001TS, TC001001, "dEQP-VK.synchronization2.basic.timeline_semaphore.chain.*");
