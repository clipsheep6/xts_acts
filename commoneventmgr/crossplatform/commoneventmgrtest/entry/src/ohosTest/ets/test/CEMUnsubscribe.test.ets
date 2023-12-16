/*
 * Copyright (C) 2023 Huawei Device Co., Ltd.
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
import CommonEventManager from '@ohos.commonEventManager';
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium'
import { BusinessError } from '@ohos.base';
import { publishEvent, publishEventWithoutOpt, sleep } from '../utils/index'

export default function commonEventMgrUnsubscribeTest() {
  describe('commonEventMgrUnsubscribeTest', () => {
    console.log('====>################################commonEventMgr.unsubscribe Test start*************');

    /**
     * beforeAll: PreCommonEventMgrUnsubscribeTest at the test suite level, which are executed before the test suite is executed.
     */
    beforeAll(() => {
      console.info("====>beforeAll: PreCommonEventMgrUnsubscribeTest are executed.");
    });

    /**
     * beforeEach: PreCommonEventMgrUnsubscribeTest at the test case level, which are executed before each test case is executed.
     */
    beforeEach(() => {
      console.info("====>beforeEach: PreCommonEventMgrUnsubscribeTest is executed.");
    });

    /**
     * afterEach: Test case-level clearance conditions, which are executed after each test case is executed.
     */
    afterEach(() => {
      console.info("====>afterEach: Test case-level clearance conditions is executed.");
    });

    /**
     * afterAll: Test suite-level cleanup condition, which is executed after the test suite is executed.
     */
    afterAll(() => {
      console.info("====>afterAll: Test suite-level cleanup condition is executed");
    });

    /**
     * @tc.number TEST_COMMON_EVENT_MGR_UNSUBSCRIBE_CALLBACK_001
     * @tc.name Test CommonEventManager.unsubscribe in callback mode
     * @tc.desc Test CommonEventManager API functionality.
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level
     */
    /*ios不支持publish方法，无法发布自定义事件，测试套自动化测试流程中无法验证。*/
    it('TEST_COMMON_EVENT_MGR_UNSUBSCRIBE_CALLBACK_001', 0, async (done: Function) => {
      try {
        const subscriberInfo: CommonEventManager.CommonEventSubscribeInfo = {
          events: ['UNSUBSCRIBE_MY_EVENT_001']
        }
        const subscriber: CommonEventManager.CommonEventSubscriber = await CommonEventManager.createSubscriber(subscriberInfo)
        CommonEventManager.subscribe(subscriber, async (error: BusinessError, result: CommonEventManager.CommonEventData) => {
          console.log('TEST_COMMON_EVENT_MGR_UNSUBSCRIBE_CALLBACK_001 SUBSCRIBE CALLBACK');
          const event: string = result.event
          expect(event).assertEqual('UNSUBSCRIBE_MY_EVENT_001')
          console.log('TEST_COMMON_EVENT_MGR_UNSUBSCRIBE_CALLBACK_001 SUBSCRIBE CALLBACK EVENT: ' + event);
          console.log('TEST_COMMON_EVENT_MGR_UNSUBSCRIBE_CALLBACK_001 UNSUBSCRIBE');
          CommonEventManager.unsubscribe(subscriber, (error: BusinessError) => {
            console.log('TEST_COMMON_EVENT_MGR_UNSUBSCRIBE_CALLBACK_001 UNSUBSCRIBE CALLBACK');
          })
          await sleep()
          publishEventWithoutOpt('UNSUBSCRIBE_MY_EVENT_001', done)
          done()
        })
        await sleep()
        publishEventWithoutOpt('UNSUBSCRIBE_MY_EVENT_001', done)
      } catch (e) {
        console.log("TEST_COMMON_EVENT_MGR_UNSUBSCRIBE_CALLBACK_001 catch error msg: " + e.message + ", error code: " + e.code);
        done();
      }
    })

    /**
     * @tc.number TEST_COMMON_EVENT_MGR_UNSUBSCRIBE_CALLBACK_002
     * @tc.name Test CommonEventManager.unsubscribe in callback mode throw 401 code
     * @tc.desc Test CommonEventManager API functionality.
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level
     */
    /*ios不支持publish方法，无法发布自定义事件，测试套自动化测试流程中无法验证。*/
    it('TEST_COMMON_EVENT_MGR_UNSUBSCRIBE_CALLBACK_002', 0, async (done: Function) => {
      try {
        CommonEventManager.unsubscribe(null, error => {
          if (error) {
            console.log("TEST_COMMON_EVENT_MGR_UNSUBSCRIBE_CALLBACK_002 error msg: " + error.message + ", error code: " + error.code);
            expect(error.code == 401).assertTrue();
            done();
          } else {
            console.log('TEST_COMMON_EVENT_MGR_UNSUBSCRIBE_CALLBACK_002 SUCCESS');
            expect(error).assertNull()
            done()
          }
        })
      } catch (e) {
        console.log("TEST_COMMON_EVENT_MGR_UNSUBSCRIBE_CALLBACK_002 catch error msg: " + e.message + ", error code: " + e.code);
        done();
      }
    })

    /**
     * @tc.number TEST_COMMON_EVENT_MGR_UNSUBSCRIBE_CALLBACK_003
     * @tc.name Test CommonEventManager.unsubscribe in callback mode
     * @tc.desc Test CommonEventManager API functionality.
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level
     */
    /*ios不支持publish方法，无法发布自定义事件，测试套自动化测试流程中无法验证。*/
    it('TEST_COMMON_EVENT_MGR_UNSUBSCRIBE_CALLBACK_003', 0, async (done: Function) => {
      try {
        const EVENTS: string[] = ['UNSUBSCRIBE_MY_EVENT_002', 'UNSUBSCRIBE_MY_EVENT_003']
        const subscriberInfo: CommonEventManager.CommonEventSubscribeInfo = {
          events: EVENTS
        }
        const subscriber: CommonEventManager.CommonEventSubscriber = await CommonEventManager.createSubscriber(subscriberInfo)
        CommonEventManager.subscribe(subscriber, async (error: BusinessError, result: CommonEventManager.CommonEventData) => {
          console.log('TEST_COMMON_EVENT_MGR_UNSUBSCRIBE_CALLBACK_003 SUBSCRIBE CALLBACK');
          const event: string = result.event
          expect(EVENTS).assertContain(event)
          console.log('TEST_COMMON_EVENT_MGR_UNSUBSCRIBE_CALLBACK_003 SUBSCRIBE CALLBACK EVENT: ' + event);
        })
        publishEventWithoutOpt(EVENTS[0], done)
        await sleep()
        CommonEventManager.unsubscribe(subscriber, (error: BusinessError) => {
          console.log('TEST_COMMON_EVENT_MGR_UNSUBSCRIBE_CALLBACK_003 UNSUBSCRIBE CALLBACK');
          sleep(4500).then(() => {
            done()
          })
        })
        publishEventWithoutOpt(EVENTS[1], done)
      } catch (e) {
        console.log("TEST_COMMON_EVENT_MGR_UNSUBSCRIBE_CALLBACK_003 catch error msg: " + e.message + ", error code: " + e.code);
        done();
      }
    })

    /**
     * @tc.number TEST_COMMON_EVENT_MGR_UNSUBSCRIBE_CALLBACK_004
     * @tc.name Test CommonEventManager.unsubscribe in callback mode
     * @tc.desc Test CommonEventManager API functionality.
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level
     */
    /*ios不支持publish方法，无法发布自定义事件，测试套自动化测试流程中无法验证。*/
    it('TEST_COMMON_EVENT_MGR_UNSUBSCRIBE_CALLBACK_004', 0, async (done: Function) => {
      try {
        const EVENT = 'UNSUBSCRIBE_MY_EVENT_004'
        const subscriberInfo: CommonEventManager.CommonEventSubscribeInfo = {
          events: [EVENT]
        }
        const subscriber: CommonEventManager.CommonEventSubscriber = await CommonEventManager.createSubscriber(subscriberInfo)
        CommonEventManager.subscribe(subscriber, async (error: BusinessError, result: CommonEventManager.CommonEventData) => {
          console.log('TEST_COMMON_EVENT_MGR_UNSUBSCRIBE_CALLBACK_004 SUBSCRIBE CALLBACK');
          const event: string = result.event
          expect(event).assertEqual(EVENT)
          console.log('TEST_COMMON_EVENT_MGR_UNSUBSCRIBE_CALLBACK_004 SUBSCRIBE CALLBACK EVENT: ' + event);
        })
        await sleep()
        CommonEventManager.unsubscribe(subscriber, (error: BusinessError) => {
          console.log('TEST_COMMON_EVENT_MGR_UNSUBSCRIBE_CALLBACK_004 UNSUBSCRIBE CALLBACK');
        })
        await sleep()
        publishEventWithoutOpt(EVENT, done)
        sleep(4500).then(() => {
          done()
        })
      } catch (e) {
        console.log("TEST_COMMON_EVENT_MGR_UNSUBSCRIBE_CALLBACK_004 catch error msg: " + e.message + ", error code: " + e.code);
        done();
      }
    })
  })
}