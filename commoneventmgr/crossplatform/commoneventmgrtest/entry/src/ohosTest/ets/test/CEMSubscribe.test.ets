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

export default function commonEventMgrSubscribeTest() {
  describe('commonEventMgrSubscribeTest', () => {
    console.log('====>################################commonEventMgr.subscribe Test start*************');

    /**
     * beforeAll: PreCommonEventMgrSubscribeTest at the test suite level, which are executed before the test suite is executed.
     */
    beforeAll(() => {
      console.info("====>beforeAll: PreCommonEventMgrSubscribeTest are executed.");
    });

    /**
     * beforeEach: PreCommonEventMgrSubscribeTest at the test case level, which are executed before each test case is executed.
     */
    beforeEach(() => {
      console.info("====>beforeEach: PreCommonEventMgrSubscribeTest is executed.");
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
     * @tc.number TEST_COMMON_EVENT_MGR_SUBSCRIBE_CALLBACK_001
     * @tc.name Test CommonEventManager.subscribe in callback mode
     * @tc.desc Test CommonEventManager API functionality.
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level
     */
    /*ios不支持publish方法，无法发布自定义事件，测试套自动化测试流程中无法验证。*/
    it('TEST_COMMON_EVENT_MGR_SUBSCRIBE_CALLBACK_001', 0, async (done: Function) => {
      try {
        const EVENT: string = 'SUBSCRIBE_MY_EVENT_001'
        const subscriberInfo: CommonEventManager.CommonEventSubscribeInfo = {
          events: [EVENT]
        }
        const subscriber: CommonEventManager.CommonEventSubscriber = await CommonEventManager.createSubscriber(subscriberInfo)
        CommonEventManager.subscribe(subscriber, (error: BusinessError, result: CommonEventManager.CommonEventData) => {
          const event: string = result.event
          expect(event).assertEqual(EVENT)
          console.log('TEST_COMMON_EVENT_MGR_SUBSCRIBE_CALLBACK_001 SUBSCRIBE CALLBACK, COMMON EVENT DATA: ' + JSON.stringify(result));
          console.log('TEST_COMMON_EVENT_MGR_SUBSCRIBE_CALLBACK_001 SUCCESS');
          done()
        })
        await sleep()
        publishEventWithoutOpt(EVENT, done)
      } catch (e) {
        console.log('TEST_COMMON_EVENT_MGR_SUBSCRIBE_CALLBACK_001 catch error msg: ' + e.message + ', code: ' + e.code)
        done()
      }
    })

    /**
     * @tc.number TEST_COMMON_EVENT_MGR_SUBSCRIBE_CALLBACK_002
     * @tc.name Test CommonEventManager.subscribe in callback mode
     * @tc.desc Test CommonEventManager API functionality.
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level
     */
    /*ios不支持publish方法，无法发布自定义事件，测试套自动化测试流程中无法验证。*/
    it('TEST_COMMON_EVENT_MGR_SUBSCRIBE_CALLBACK_002', 0, async (done: Function) => {
      try {
        const EVENT: string = 'SUBSCRIBE_MY_EVENT_002'
        const subscriberInfo: CommonEventManager.CommonEventSubscribeInfo = {
          events: [EVENT]
        }
        const subscriber: CommonEventManager.CommonEventSubscriber = CommonEventManager.createSubscriberSync(subscriberInfo)
        CommonEventManager.subscribe(subscriber, (error: BusinessError, result: CommonEventManager.CommonEventData) => {
          const event: string = result.event
          expect(event).assertEqual(EVENT)
          expect(result.data).assertEqual('test')
          console.log('TEST_COMMON_EVENT_MGR_SUBSCRIBE_CALLBACK_002 SUBSCRIBE CALLBACK, COMMON EVENT DATA: ' + JSON.stringify(result));
          console.log('TEST_COMMON_EVENT_MGR_SUBSCRIBE_CALLBACK_002 SUCCESS');
          done()
        })
        await sleep()
        const publish_data: CommonEventManager.CommonEventPublishData = {
          data: 'test'
        }
        publishEvent(EVENT, publish_data, done)
      } catch (e) {
        console.log('TEST_COMMON_EVENT_MGR_SUBSCRIBE_CALLBACK_002 catch error msg: ' + e.message + ', code: ' + e.code)
        done()
      }
    })

    /**
     * @tc.number TEST_COMMON_EVENT_MGR_SUBSCRIBE_CALLBACK_003
     * @tc.name Test CommonEventManager.subscribe in callback mode
     * @tc.desc Test CommonEventManager API functionality.
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level
     */
    /*ios不支持publish方法，无法发布自定义事件，测试套自动化测试流程中无法验证。*/
    it('TEST_COMMON_EVENT_MGR_SUBSCRIBE_CALLBACK_003', 0, async (done: Function) => {
      try {
        const EVENTS: string[] = []
        for (let i = 3; i < 10; i++) {
          EVENTS.push(`SUBSCRIBE_MY_EVENT_00${i}`)
        }
        const subscriberInfo: CommonEventManager.CommonEventSubscribeInfo = {
          events: EVENTS
        }
        const subscriber: CommonEventManager.CommonEventSubscriber = CommonEventManager.createSubscriberSync(subscriberInfo)
        CommonEventManager.subscribe(subscriber, (error: BusinessError, result: CommonEventManager.CommonEventData) => {
          const event: string = result.event
          expect(EVENTS).assertContain(event)
          console.log(`TEST_COMMON_EVENT_MGR_SUBSCRIBE_CALLBACK_003 SUBSCRIBE CALLBACK EVENT: ${event}`)
          console.log('TEST_COMMON_EVENT_MGR_SUBSCRIBE_CALLBACK_003 SUBSCRIBE CALLBACK, COMMON EVENT DATA: ' + JSON.stringify(result));
          if (event === 'SUBSCRIBE_MY_EVENT_009') {
            expect(result.data).assertEqual('MY_EVENT_009')
            console.log('TEST_COMMON_EVENT_MGR_SUBSCRIBE_CALLBACK_003 SUBSCRIBE CALLBACK SUCCESS');
            done()
          }
        })
        await sleep()
        EVENTS.forEach(async (item: string, index: number) => {
          if (item === 'SUBSCRIBE_MY_EVENT_009') {
            const publish_data: CommonEventManager.CommonEventPublishData = {
              data: 'MY_EVENT_009'
            }
            publishEvent(item, publish_data, done)
          } else {
            publishEventWithoutOpt(item, done)
          }
          await sleep()
        })
      } catch (e) {
        console.log('TEST_COMMON_EVENT_MGR_SUBSCRIBE_CALLBACK_003 catch error msg: ' + e.message + ', code: ' + e.code)
        done()
      }
    })

    /**
     * @tc.number TEST_COMMON_EVENT_MGR_SUBSCRIBE_CALLBACK_004
     * @tc.name Test CommonEventManager.subscribe in callback mode throw 401 error code
     * @tc.desc Test CommonEventManager API functionality.
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level
     */
    /*ios不支持publish方法，无法发布自定义事件，测试套自动化测试流程中无法验证。*/
    it('TEST_COMMON_EVENT_MGR_SUBSCRIBE_CALLBACK_004', 0, async (done: Function) => {
      try {
        CommonEventManager.subscribe(null, (error: BusinessError, data: CommonEventManager.CommonEventData) => {
          console.log('TEST_COMMON_EVENT_MGR_SUBSCRIBE_CALLBACK_004 SUCCESS, ' + JSON.stringify(data));
          expect(null !== data).assertTrue()
          done()
        })
      } catch (e) {
        console.log("TEST_COMMON_EVENT_MGR_SUBSCRIBE_CALLBACK_004 catch error msg: " + e.message + ", error code: " + e.code);
        done();
      }
    })
  })
}