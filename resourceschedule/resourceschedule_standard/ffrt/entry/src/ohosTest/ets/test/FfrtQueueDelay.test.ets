/*
 * Copyright (c) 2021 Huawei Device Co., Ltd.
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
import { hilog } from '@kit.PerformanceAnalysisKit';
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium';
import entry from 'libentry.so';
export default function ffrtQueueDelayTest() {
  describe('ActsFfrtQueueDelayTest', () => {
    // Defines a test suite. Two parameters are supported: test suite name and test suite function.
    beforeAll(() => {
      // Presets an action, which is performed only once before all test cases of the test suite start.
      // This API supports only one parameter: preset action function.
    })
    beforeEach(() => {
      // Presets an action, which is performed before each unit test case starts.
      // The number of execution times is the same as the number of test cases defined by **it**.
      // This API supports only one parameter: preset action function.
    })
    afterEach(() => {
      // Presets a clear action, which is performed after each unit test case ends.
      // The number of execution times is the same as the number of test cases defined by **it**.
      // This API supports only one parameter: clear action function.
    })
    afterAll(() => {
      // Presets a clear action, which is performed after all test cases of the test suite end.
      // This API supports only one parameter: clear action function.
    })
    /**
     * @tc.number : SUB_KERNEL_DISPATCH_queue_0100
     * @tc.name   : queueDelayTest001
     * @tc.desc   : Test queueDelay api
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 1
     */
    it('queueDelayTest001', 0, () => {
      // Defines a test case. This API supports three parameters: test case name, filter parameter, and test case function.
      let flag = entry.queueDelayTest001();
      expect(flag).assertEqual(0);
    })
    /**
     * @tc.number : SUB_KERNEL_DISPATCH_queue_0200
     * @tc.name   : queueDelayTest002
     * @tc.desc   : Test queueDelay api
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 1
     */
    it('queueDelayTest002', 0, () => {
      // Defines a test case. This API supports three parameters: test case name, filter parameter, and test case function.
      let flag = entry.queueDelayTest002();
      expect(flag).assertEqual(0);
    })
    /**
     * @tc.number : SUB_KERNEL_DISPATCH_queue_0300
     * @tc.name   : queueDfxTest005
     * @tc.desc   : Test queueDfx api
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 1
     */
    it('queueDfxTest005', 0, () => {
      // Defines a test case. This API supports three parameters: test case name, filter parameter, and test case function.
      let flag = entry.queueDfxTest005();
      expect(flag).assertEqual(0);
    })
    /**
     * @tc.number : SUB_KERNEL_DISPATCH_queue_0400
     * @tc.name   : queueDelayTest005
     * @tc.desc   : Test queueDelay api
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 1
     */
    it('queueDelayTest005', 0, () => {
      // Defines a test case. This API supports three parameters: test case name, filter parameter, and test case function.
      let flag = entry.queueDelayTest005();
      expect(flag).assertEqual(0);
    })
    /**
     * @tc.number : SUB_KERNEL_DISPATCH_queue_0500
     * @tc.name   : queueTest001
     * @tc.desc   : Test queue api
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 1
     */
    it('queueTest001', 0, () => {
      // Defines a test case. This API supports three parameters: test case name, filter parameter, and test case function.
      let flag = entry.queueTest001();
      expect(flag).assertEqual(9);
    })
    /**
     * @tc.number : SUB_KERNEL_DISPATCH_queue_0600
     * @tc.name   : queueWaitTest001
     * @tc.desc   : Test queueWait api
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 1
     */
    it('queueWaitTest001', 0, () => {
      // Defines a test case. This API supports three parameters: test case name, filter parameter, and test case function.
      let flag = entry.queueWaitTest001();
      expect(flag).assertEqual(0);
    })
    /**
     * @tc.number : SUB_KERNEL_DISPATCH_queue_0700
     * @tc.name   : ffrt_timer_start_0002
     * @tc.desc   : Test ffrt_timer_start api
     * @tc.size   : MediumTest
     * @tc.type   : Function
     * @tc.level  : Level 1
     */
    it('ffrt_timer_start_0002', 0, () => {
      // Defines a test case. This API supports three parameters: test case name, filter parameter, and test case function.
      let flag = entry.ffrt_timer_start_0002();
      expect(flag).assertEqual(0);
    })
  })
}