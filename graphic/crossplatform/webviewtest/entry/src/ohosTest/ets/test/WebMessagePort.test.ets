import { describe, it, expect, beforeAll, beforeEach, afterEach, afterAll } from '@ohos/hypium'
import { Driver, ON } from '@ohos.UiTest'
import { startAbility, waitUiReadyMs } from '../utils/index'

export default function WebMessagePortTest() {
  describe('WebMessagePortTest', () => {

    /**
     * beforeAll: PreWebMessagePortTest at the test suite level, which are executed before the test suite is executed.
     */
    beforeAll(() => {
      console.log('##########WebMessagePortTest Test start##########');
      console.info("====>beforeAll: PreWebMessagePortTest are executed.");
    });

    /**
     * beforeEach: PreWebMessagePortTest at the test case level, which are executed before each test case is executed.
     */
    beforeEach(async () => {
      await startAbility('com.example.webviewtest', 'EntryAbility')
      const driver = Driver.create()
      await driver.delayMs(waitUiReadyMs * 2)
      console.info("====>beforeEach: Test case-level clearance conditions is executed.");
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
      console.log('##########WebMessagePortTest Test end##########');
    });

    /*
    * @tc.number: CREATE_WEB_MSG_PORTS_TEST_001
    * @tc.name: createWebMessagePorts
    * @tc.desc: 测试createWebMessagePorts
    */
    it('CREATE_WEB_MSG_PORTS_TEST_001', 0, async () => {
      console.log('==========CREATE_WEB_MSG_PORTS_TEST_001 test start==========')
      let driver = Driver.create()
      await driver.delayMs(waitUiReadyMs)
      const CHANGE_TABS = await driver.findComponent(ON.text('设置页签'))
      await CHANGE_TABS.click()
      await driver.delayMs(waitUiReadyMs)
      const TAB = await driver.findComponent(ON.text('Goto WebMessagePort'))
      await TAB.click()
      await driver.delayMs(4000)
      const CREATE = await driver.findComponent(ON.text('createPorts'))
      await CREATE.click()
      await driver.delayMs(waitUiReadyMs)
      const ON_EVENT_VALUE = await driver.findComponent(ON.id('ON_EVENT_VALUE'))
      const text = await ON_EVENT_VALUE.getText()
      expect(text).assertEqual('create ports: 2个')
      console.log('CREATE_WEB_MSG_PORTS_TEST_001 success')
      console.log('==========CREATE_WEB_MSG_PORTS_TEST_001 test end==========')
    })

    /*
    * @tc.number: POST_MESSAGE_TEST_001
    * @tc.name: postMessage
    * @tc.desc: 测试postMessage
    */
    it('POST_MESSAGE_TEST_001', 0, async () => {
      console.log('==========POST_MESSAGE_TEST_001 test start==========')
      let driver = Driver.create()
      await driver.delayMs(waitUiReadyMs)
      const POST_MSG = await driver.findComponent(ON.text('postMessage'))
      await POST_MSG.click()
      await driver.delayMs(waitUiReadyMs)
      const ON_EVENT_VALUE = await driver.findComponent(ON.id('ON_EVENT_VALUE'))
      const text = await ON_EVENT_VALUE.getText()
      expect(text).assertEqual('console log:get msg __init_port__')
      console.log('POST_MESSAGE_TEST_001 success')
      console.log('==========POST_MESSAGE_TEST_001 test end==========')
    })

    /*
    * @tc.number: POST_MESSAGE_EVENT_TEST_001
    * @tc.name: postMessageEvent
    * @tc.desc: 测试postMessageEvent
    */
    it('POST_MESSAGE_EVENT_TEST_001', 0, async () => {
      console.log('==========POST_MESSAGE_EVENT_TEST_001 test start==========')
      let driver = Driver.create()
      await driver.delayMs(waitUiReadyMs)
      const SEND = await driver.findComponent(ON.text('SendToHTML'))
      await SEND.click()
      await driver.delayMs(waitUiReadyMs)
      const postMsg = await driver.findComponent(ON.text('HelloArkTs'))
      await postMsg.click()
      await driver.delayMs(waitUiReadyMs)
      const ON_EVENT_VALUE = await driver.findComponent(ON.id('ON_EVENT_VALUE'))
      const ON_EVENT_MSG = await driver.findComponent(ON.id('ON_EVENT_MESSAGE'))
      const msg = await ON_EVENT_MSG.getText()
      const value = await ON_EVENT_VALUE.getText()
      expect(msg).assertEqual('post message: HelloArkTs')
      expect(value).assertEqual('console log:Got message from ets:HelloArkTs')
      console.log('POST_MESSAGE_EVENT_TEST_001 success')
      console.log('==========POST_MESSAGE_EVENT_TEST_001 test end==========')
    })

    /*
    * @tc.number: POST_MESSAGE_EVENT_TEST_002
    * @tc.name: postMessageEvent
    * @tc.desc: 测试postMessageEvent
    */
    it('POST_MESSAGE_EVENT_TEST_002', 0, async () => {
      console.log('==========POST_MESSAGE_EVENT_TEST_002 test start==========')
      let driver = Driver.create()
      await driver.delayMs(waitUiReadyMs)
      const SEND = await driver.findComponent(ON.text('SendToHTML'))
      await SEND.click()
      await driver.delayMs(waitUiReadyMs)
      const postMsg = await driver.findComponent(ON.text('HelloOH'))
      await postMsg.click()
      await driver.delayMs(waitUiReadyMs)
      const ON_EVENT_VALUE = await driver.findComponent(ON.id('ON_EVENT_VALUE'))
      const ON_EVENT_MSG = await driver.findComponent(ON.id('ON_EVENT_MESSAGE'))
      const msg = await ON_EVENT_MSG.getText()
      const value = await ON_EVENT_VALUE.getText()
      expect(msg).assertEqual('post message: HelloOH')
      expect(value).assertEqual('console log:Got message from ets:HelloOH')
      console.log('POST_MESSAGE_EVENT_TEST_002 success')
      console.log('==========POST_MESSAGE_EVENT_TEST_002 test end==========')
    })

    /*
    * @tc.number: ON_MESSAGE_EVENT_TEST_001
    * @tc.name: onMessageEvent
    * @tc.desc: 测试postMessageEvent
    */
    it('ON_MESSAGE_EVENT_TEST_001', 0, async () => {
      console.log('==========ON_MESSAGE_EVENT_TEST_001 test start==========')
      let driver = Driver.create()
      await driver.delayMs(waitUiReadyMs)
      const TRIGGER = await driver.findComponent(ON.text('TRIGGER'))
      await TRIGGER.click()
      await driver.delayMs(waitUiReadyMs)
      const ON_EVENT_VALUE = await driver.findComponent(ON.id('ON_EVENT_VALUE'))
      const value = await ON_EVENT_VALUE.getText()
      expect(value).assertEqual('Got msg from HTML:message from HTML')
      console.log('ON_MESSAGE_EVENT_TEST_001 success')
      console.log('==========ON_MESSAGE_EVENT_TEST_001 test end==========')
    })

    /*
    * @tc.number: CLOSE_TEST_001
    * @tc.name: close
    * @tc.desc: 测试close
    */
    it('CLOSE_TEST_001', 0, async () => {
      console.log('==========CLOSE_TEST_001 test start==========')
      let driver = Driver.create()
      await driver.delayMs(waitUiReadyMs)
      const CLOSE = await driver.findComponent(ON.text('close'))
      await CLOSE.click()
      await driver.delayMs(waitUiReadyMs)
      const ON_EVENT_MESSAGE = await driver.findComponent(ON.id('ON_EVENT_MESSAGE'))
      const ON_EVENT_VALUE = await driver.findComponent(ON.id('ON_EVENT_VALUE'))
      let msg = await ON_EVENT_MESSAGE.getText()
      let value = await ON_EVENT_VALUE.getText()
      expect(msg).assertEqual('close port')
      expect(value).assertEqual('Got msg from HTML:message from HTML')
      const SEND = await driver.findComponent(ON.text('SendToHTML'))
      await SEND.click()
      await driver.delayMs(waitUiReadyMs)
      const postMsg = await driver.findComponent(ON.text('HelloOH'))
      await postMsg.click()
      await driver.delayMs(waitUiReadyMs)
      msg = await ON_EVENT_MESSAGE.getText()
      value = await ON_EVENT_VALUE.getText()
      expect(msg).assertEqual('post message: HelloOH')
      expect(value).assertEqual('Got msg from HTML:message from HTML')
      console.log('CLOSE_TEST_001 success')
      console.log('==========CLOSE_TEST_001 test end==========')
    })
  })
}