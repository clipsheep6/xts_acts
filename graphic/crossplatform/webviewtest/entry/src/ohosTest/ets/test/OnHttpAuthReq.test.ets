import { describe, it, expect, beforeAll, beforeEach, afterEach, afterAll } from '@ohos/hypium'
import { Driver, ON } from '@ohos.UiTest'
import { startAbility, waitUiReadyMs } from '../utils/index'

export default function OnHttpAuthReqTest() {
  describe('OnHttpAuthReqTest', () => {

    /**
     * beforeAll: PreOnHttpAuthReqTest at the test suite level, which are executed before the test suite is executed.
     */
    beforeAll(() => {
      console.log('##########OnHttpAuthReqTest Test start##########');
      console.info("====>beforeAll: PreOnHttpAuthReqTest are executed.");
    });

    /**
     * beforeEach: PreOnHttpAuthReqTest at the test case level, which are executed before each test case is executed.
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
      console.log('##########OnHttpAuthReqTest Test end##########');
    });

    /*
     * @tc.number: ON_Http_Auth_Request_001
     * @tc.name: onHttpAuthRequest
     * @tc.desc: 测试onHttpAuthRequest
     */
    it('ON_Http_Auth_Request_001', 0, async () => {
      console.log('==========ON_Http_Auth_Request_001 test start==========')
      let driver = Driver.create()
      await driver.delayMs(waitUiReadyMs)
      const CHANGE_TABS = await driver.findComponent(ON.text('设置页签'))
      await CHANGE_TABS.click()
      await driver.delayMs(waitUiReadyMs)
      const TAB = await driver.findComponent(ON.text('Goto onHttpAuthRequest'))
      await TAB.click()
      await driver.delayMs(2000)
      const MESSAGE = await driver.findComponent(ON.id('ON_EVENT_MESSAGE'))
      const text = await MESSAGE.getText()
      expect(text).assertEqual('host: httpbin.org, realm: Fake Realm')
      console.log('ON_Http_Auth_Request_001 success')
      console.log('==========ON_Http_Auth_Request_001 test end==========')
    })

    /*
     * @tc.number: saveHttpAuthCredentials_TEST_001
     * @tc.name: saveHttpAuthCredentials
     * @tc.desc: 测试saveHttpAuthCredentials
     */
    it('saveHttpAuthCredentials_TEST_001', 0, async () => {
      console.log('==========saveHttpAuthCredentials_TEST_001 test start==========')
      let driver = Driver.create()
      await driver.delayMs(waitUiReadyMs)
      const SAVE_BTN = await driver.findComponent(ON.text('SAVE_HAC'))
      await SAVE_BTN.click()
      await driver.delayMs(waitUiReadyMs)
      const MESSAGE = await driver.findComponent(ON.id('ON_EVENT_MESSAGE'))
      let text = await MESSAGE.getText()
      expect(text).assertEqual('save host: httpbin.org, realm: Fake Realm')
      const EXIST_HAC = await driver.findComponent(ON.text('EXIST_HAC'))
      await EXIST_HAC.click()
      await driver.delayMs(waitUiReadyMs)
      text = await MESSAGE.getText()
      expect(text).assertEqual('existHttpAuthCredentials: true')
      console.log('saveHttpAuthCredentials_TEST_001 success')
      console.log('==========saveHttpAuthCredentials_TEST_001 test end==========')
    })

    /*
     * @tc.number: saveHttpAuthCredentials_TEST_002
     * @tc.name: saveHttpAuthCredentials
     * @tc.desc: 测试saveHttpAuthCredentials
     */
    it('saveHttpAuthCredentials_TEST_002', 0, async () => {
      console.log('==========saveHttpAuthCredentials_TEST_002 test start==========')
      let driver = Driver.create()
      await driver.delayMs(waitUiReadyMs)
      const DELETE_HAC = await driver.findComponent(ON.text('DELETE_HAC'))
      await DELETE_HAC.click()
      await driver.delayMs(waitUiReadyMs)
      const MESSAGE = await driver.findComponent(ON.id('ON_EVENT_MESSAGE'))
      let text = await MESSAGE.getText()
      expect(text).assertEqual('已删除')
      const EXIST_HAC = await driver.findComponent(ON.text('EXIST_HAC'))
      await EXIST_HAC.click()
      await driver.delayMs(waitUiReadyMs)
      text = await MESSAGE.getText()
      expect(text).assertEqual('existHttpAuthCredentials: false')
      const SAVE_BTN = await driver.findComponent(ON.text('SAVE_HAC'))
      await SAVE_BTN.click()
      await driver.delayMs(waitUiReadyMs)
      text = await MESSAGE.getText()
      expect(text).assertEqual('save host: httpbin.org, realm: Fake Realm')
      await EXIST_HAC.click()
      await driver.delayMs(waitUiReadyMs)
      text = await MESSAGE.getText()
      expect(text).assertEqual('existHttpAuthCredentials: true')
      console.log('saveHttpAuthCredentials_TEST_002 success')
      console.log('==========saveHttpAuthCredentials_TEST_002 test end==========')
    })

    /*
     * @tc.number: getHttpAuthCredentials_TEST_001
     * @tc.name: getHttpAuthCredentials
     * @tc.desc: 测试getHttpAuthCredentials
     */
    it('getHttpAuthCredentials_TEST_001', 0, async () => {
      console.log('==========getHttpAuthCredentials_TEST_001 test start==========')
      let driver = Driver.create()
      await driver.delayMs(waitUiReadyMs)
      const GET_HAC = await driver.findComponent(ON.text('GET_HAC'))
      await GET_HAC.click()
      await driver.delayMs(waitUiReadyMs)
      const MESSAGE = await driver.findComponent(ON.id('ON_EVENT_MESSAGE'))
      const text = await MESSAGE.getText()
      expect(text).assertEqual('2222,2222')
      console.log('getHttpAuthCredentials_TEST_001 success')
      console.log('==========getHttpAuthCredentials_TEST_001 test end==========')
    })

    /*
     * @tc.number: existHttpAuthCredentials_TEST_001
     * @tc.name: existHttpAuthCredentials
     * @tc.desc: 测试existHttpAuthCredentials
     */
    it('existHttpAuthCredentials_TEST_001', 0, async () => {
      console.log('==========existHttpAuthCredentials_TEST_001 test start==========')
      let driver = Driver.create()
      await driver.delayMs(waitUiReadyMs)
      const EXIST_HAC = await driver.findComponent(ON.text('EXIST_HAC'))
      await EXIST_HAC.click()
      await driver.delayMs(waitUiReadyMs)
      const MESSAGE = await driver.findComponent(ON.id('ON_EVENT_MESSAGE'))
      let text = await MESSAGE.getText()
      expect(text).assertEqual('existHttpAuthCredentials: true')
      const DELETE_HAC = await driver.findComponent(ON.text('DELETE_HAC'))
      await DELETE_HAC.click()
      await driver.delayMs(waitUiReadyMs)
      text = await MESSAGE.getText()
      expect(text).assertEqual('已删除')
      await EXIST_HAC.click()
      await driver.delayMs(waitUiReadyMs)
      text = await MESSAGE.getText()
      expect(text).assertEqual('existHttpAuthCredentials: false')
      const SAVE_BTN = await driver.findComponent(ON.text('SAVE_HAC'))
      await SAVE_BTN.click()
      await driver.delayMs(waitUiReadyMs)
      text = await MESSAGE.getText()
      expect(text).assertEqual('save host: httpbin.org, realm: Fake Realm')
      await EXIST_HAC.click()
      await driver.delayMs(waitUiReadyMs)
      text = await MESSAGE.getText()
      expect(text).assertEqual('existHttpAuthCredentials: true')
      console.log('existHttpAuthCredentials_TEST_001 success')
      console.log('==========existHttpAuthCredentials_TEST_001 test end==========')
    })

    /*
     * @tc.number: deleteHttpAuthCredentials_TEST_001
     * @tc.name: deleteHttpAuthCredentials
     * @tc.desc: 测试deleteHttpAuthCredentials
     */
    it('deleteHttpAuthCredentials_TEST_001', 0, async () => {
      console.log('==========deleteHttpAuthCredentials_TEST_001 test start==========')
      let driver = Driver.create()
      await driver.delayMs(waitUiReadyMs)
      const EXIST_HAC = await driver.findComponent(ON.text('EXIST_HAC'))
      await EXIST_HAC.click()
      await driver.delayMs(waitUiReadyMs)
      const MESSAGE = await driver.findComponent(ON.id('ON_EVENT_MESSAGE'))
      let text = await MESSAGE.getText()
      expect(text).assertEqual('existHttpAuthCredentials: true')
      const DELETE_HAC = await driver.findComponent(ON.text('DELETE_HAC'))
      await DELETE_HAC.click()
      await driver.delayMs(waitUiReadyMs)
      text = await MESSAGE.getText()
      expect(text).assertEqual('已删除')
      await EXIST_HAC.click()
      await driver.delayMs(waitUiReadyMs)
      text = await MESSAGE.getText()
      expect(text).assertEqual('existHttpAuthCredentials: false')
      const SAVE_BTN = await driver.findComponent(ON.text('SAVE_HAC'))
      await SAVE_BTN.click()
      await driver.delayMs(waitUiReadyMs)
      text = await MESSAGE.getText()
      expect(text).assertEqual('save host: httpbin.org, realm: Fake Realm')
      await EXIST_HAC.click()
      await driver.delayMs(waitUiReadyMs)
      text = await MESSAGE.getText()
      expect(text).assertEqual('existHttpAuthCredentials: true')
      console.log('deleteHttpAuthCredentials_TEST_001 success')
      console.log('==========deleteHttpAuthCredentials_TEST_001 test end==========')
    })


    /*
    * @tc.number: ON_Http_ERROR_RECEIVE_001
    * @tc.name: onHttpErrorReceive
    * @tc.desc: 测试onHttpErrorReceive
    */
    it('ON_Http_ERROR_RECEIVE_001', 0, async () => {
      console.log('==========ON_Http_ERROR_RECEIVE_001 test start==========')
      let driver = Driver.create()
      await driver.delayMs(waitUiReadyMs)
      const CHANGE_TABS = await driver.findComponent(ON.text('设置页签'))
      await CHANGE_TABS.click()
      await driver.delayMs(waitUiReadyMs)
      const TAB = await driver.findComponent(ON.text('Goto onHttpErrorReceive'))
      await TAB.click()
      await driver.delayMs(5000)
      const ON_EVENT_URL = await driver.waitForComponent(ON.id('ON_EVENT_URL'), 2000)
      const ON_EVENT_VALUE = await driver.findComponent(ON.id('ON_EVENT_VALUE'))
      const url = await ON_EVENT_URL.getText()
      const value = await ON_EVENT_VALUE.getText()
      expect(url).assertEqual('https://www.huawei.com/cn/sss')
      expect(value).assertEqual('404')
      console.log('ON_Http_ERROR_RECEIVE_001 success')
      console.log('==========ON_Http_ERROR_RECEIVE_001 test end==========')
    })
  })
}