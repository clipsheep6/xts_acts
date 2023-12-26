import { describe, it, expect, beforeAll, beforeEach, afterEach, afterAll } from '@ohos/hypium'
import { Driver, ON } from '@ohos.UiTest'
import { startAbility, waitUiReadyMs } from '../utils/index'

export default function CookieManagerTest() {
  describe('CookieManagerTest', () => {

    /**
     * beforeAll: PreCookieManagerTest at the test suite level, which are executed before the test suite is executed.
     */
    beforeAll(async () => {
      console.log('##########CookieManagerTest Test start##########');
      console.info("====>beforeAll: PreCookieManagerTest are executed.");
      await startAbility('com.example.webviewtest2', 'EntryAbility')
      const driver = Driver.create()
      await driver.delayMs(waitUiReadyMs)
    });

    /**
     * beforeEach: PreCookieManagerTest at the test case level, which are executed before each test case is executed.
     */
    beforeEach(async () => {
      const driver = Driver.create()
      await driver.delayMs(waitUiReadyMs)
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
      console.log('##########CookieManagerTest Test end##########');
    });

    /*
    * @tc.number: CONFIG_COOKIE_TEST_001
    * @tc.name: configCookie
    * @tc.desc: 测试configCookie
    */
    it('CONFIG_COOKIE_TEST_001', 0, async () => {
      console.log('==========CONFIG_COOKIE_TEST_001 test start==========')
      let driver = Driver.create()
      await driver.delayMs(waitUiReadyMs)
      const CHANGE_TABS = await driver.findComponent(ON.text('设置页签'))
      await CHANGE_TABS.click()
      await driver.delayMs(waitUiReadyMs)
      const TAB = await driver.findComponent(ON.text('Goto operation'))
      await TAB.click()
      await driver.delayMs(2000)
      const CONFIG_BUTTON = await driver.findComponent(ON.text('CONFIG'))
      await CONFIG_BUTTON.click()
      await driver.delayMs(waitUiReadyMs)
      const FUNC_TYPE = await driver.findComponent(ON.text('callback'))
      await FUNC_TYPE.click()
      await driver.delayMs(waitUiReadyMs)
      const MY_VALUE = await driver.findComponent(ON.id('ON_EVENT_VALUE'))
      const value = await MY_VALUE.getText()
      expect(value).assertContain('config cookie success')
      expect(value).assertContain('test=123')
      console.log('CONFIG_COOKIE_TEST_001 success')
      console.log('==========CONFIG_COOKIE_TEST_001 test end==========')
    })

    /*
    * @tc.number: CONFIG_COOKIE_TEST_002
    * @tc.name: configCookie
    * @tc.desc: 测试configCookie
    */
    it('CONFIG_COOKIE_TEST_002', 0, async () => {
      console.log('==========CONFIG_COOKIE_TEST_002 test start==========')
      let driver = Driver.create()
      await driver.delayMs(waitUiReadyMs)
      const CLEAR_BUTTON = await driver.findComponent(ON.text('CLEAR_ALL'))
      await CLEAR_BUTTON.click()
      await driver.delayMs(waitUiReadyMs)
      let FUNC_TYPE = await driver.findComponent(ON.text('promise'))
      await FUNC_TYPE.click()
      await driver.delayMs(waitUiReadyMs)
      let MY_VALUE = await driver.findComponent(ON.id('ON_EVENT_VALUE'))
      let value = await MY_VALUE.getText()
      expect(value).assertEqual('clear all')
      const CONFIG_BUTTON = await driver.findComponent(ON.text('CONFIG'))
      await CONFIG_BUTTON.click()
      await driver.delayMs(waitUiReadyMs)
      FUNC_TYPE = await driver.findComponent(ON.text('promise'))
      await FUNC_TYPE.click()
      await driver.delayMs(waitUiReadyMs)
      MY_VALUE = await driver.findComponent(ON.id('ON_EVENT_VALUE'))
      value = await MY_VALUE.getText()
      expect(value).assertContain('config cookie success')
      expect(value).assertContain('test=123')
      console.log('CONFIG_COOKIE_TEST_002 success')
      console.log('==========CONFIG_COOKIE_TEST_002 test end==========')
    })

    /*
    * @tc.number: FETCH_COOKIE_TEST_001
    * @tc.name: fetchCookie
    * @tc.desc: 测试fetchCookie
    */
    it('FETCH_COOKIE_TEST_001', 0, async () => {
      console.log('==========FETCH_COOKIE_TEST_001 test start==========')
      let driver = Driver.create()
      await driver.delayMs(waitUiReadyMs)
      const FETCH_BUTTON = await driver.findComponent(ON.text('FETCH'))
      await FETCH_BUTTON.click()
      await driver.delayMs(waitUiReadyMs)
      const FUNC_TYPE = await driver.findComponent(ON.text('callback'))
      await FUNC_TYPE.click()
      await driver.delayMs(waitUiReadyMs)
      const MY_VALUE = await driver.findComponent(ON.id('ON_EVENT_VALUE'))
      const value = await MY_VALUE.getText()
      expect(value).assertEqual('test=123')
      console.log('FETCH_COOKIE_TEST_001 success')
      console.log('==========FETCH_COOKIE_TEST_001 test end==========')
    })

    /*
    * @tc.number: FETCH_COOKIE_TEST_002
    * @tc.name: fetchCookie
    * @tc.desc: 测试fetchCookie
    */
    it('FETCH_COOKIE_TEST_002', 0, async () => {
      console.log('==========FETCH_COOKIE_TEST_002 test start==========')
      let driver = Driver.create()
      await driver.delayMs(waitUiReadyMs)
      const CLEAR_BUTTON = await driver.findComponent(ON.text('CLEAR_ALL'))
      await CLEAR_BUTTON.click()
      await driver.delayMs(waitUiReadyMs)
      let FUNC_TYPE = await driver.findComponent(ON.text('callback'))
      await FUNC_TYPE.click()
      await driver.delayMs(waitUiReadyMs)
      let MY_VALUE = await driver.findComponent(ON.id('ON_EVENT_VALUE'))
      let value = await MY_VALUE.getText()
      expect(value).assertEqual('clear all')
      const CONFIG_BUTTON = await driver.findComponent(ON.text('CONFIG'))
      await CONFIG_BUTTON.click()
      await driver.delayMs(waitUiReadyMs)
      FUNC_TYPE = await driver.findComponent(ON.text('callback'))
      await FUNC_TYPE.click()
      await driver.delayMs(waitUiReadyMs)
      const FETCH_BUTTON = await driver.findComponent(ON.text('FETCH'))
      await FETCH_BUTTON.click()
      await driver.delayMs(waitUiReadyMs)
      FUNC_TYPE = await driver.findComponent(ON.text('callback'))
      await FUNC_TYPE.click()
      await driver.delayMs(waitUiReadyMs)
      MY_VALUE = await driver.findComponent(ON.id('ON_EVENT_VALUE'))
      value = await MY_VALUE.getText()
      expect(value).assertEqual('test=123')
      console.log('FETCH_COOKIE_TEST_002 success')
      console.log('==========FETCH_COOKIE_TEST_002 test end==========')
    })

    /*
    * @tc.number: FETCH_COOKIE_TEST_003
    * @tc.name: fetchCookie
    * @tc.desc: 测试fetchCookie
    */
    it('FETCH_COOKIE_TEST_003', 0, async () => {
      console.log('==========FETCH_COOKIE_TEST_003 test start==========')
      let driver = Driver.create()
      await driver.delayMs(waitUiReadyMs)
      const CLEAR_BUTTON = await driver.findComponent(ON.text('CLEAR_ALL'))
      await CLEAR_BUTTON.click()
      await driver.delayMs(waitUiReadyMs)
      let FUNC_TYPE = await driver.findComponent(ON.text('promise'))
      await FUNC_TYPE.click()
      await driver.delayMs(waitUiReadyMs)
      let MY_VALUE = await driver.findComponent(ON.id('ON_EVENT_VALUE'))
      let value = await MY_VALUE.getText()
      expect(value).assertEqual('clear all')
      const CONFIG_BUTTON = await driver.findComponent(ON.text('CONFIG'))
      await CONFIG_BUTTON.click()
      await driver.delayMs(waitUiReadyMs)
      FUNC_TYPE = await driver.findComponent(ON.text('promise'))
      await FUNC_TYPE.click()
      await driver.delayMs(waitUiReadyMs)
      const FETCH_BUTTON = await driver.findComponent(ON.text('FETCH'))
      await FETCH_BUTTON.click()
      await driver.delayMs(waitUiReadyMs)
      FUNC_TYPE = await driver.findComponent(ON.text('promise'))
      await FUNC_TYPE.click()
      await driver.delayMs(waitUiReadyMs)
      MY_VALUE = await driver.findComponent(ON.id('ON_EVENT_VALUE'))
      value = await MY_VALUE.getText()
      expect(value).assertEqual('test=123')
      console.log('FETCH_COOKIE_TEST_003 success')
      console.log('==========FETCH_COOKIE_TEST_003 test end==========')
    })

    /*
    * @tc.number: ON_LOAD_INTERCEPT_TEST_001
    * @tc.name: OnLoadIntercept
    * @tc.desc: 测试OnLoadIntercept
    */
    it('ON_LOAD_INTERCEPT_TEST_001', 0, async () => {
      console.log('==========ON_LOAD_INTERCEPT_TEST_001 test start==========')
      let driver = Driver.create()
      await driver.delayMs(waitUiReadyMs)
      const CHANGE_TABS = await driver.findComponent(ON.text('设置页签'))
      await CHANGE_TABS.click()
      await driver.delayMs(waitUiReadyMs)
      const TAB = await driver.findComponent(ON.text('Goto load'))
      await TAB.click()
      await driver.delayMs(2000)
      const ON_EVENT_URL = await driver.findComponent(ON.id('ON_EVENT_URL'))
      const url = await ON_EVENT_URL.getText()
      if (url.includes('alert')) {
        expect(url).assertEqual('index_alert.html')
      } else {
        const BOF = await driver.findComponent(ON.text('BOF'))
        await BOF.click()
        await driver.delayMs(waitUiReadyMs)
        const choice = await driver.findComponent(ON.text('-1'))
        await choice.click()
        await driver.delayMs(waitUiReadyMs)
      }
      const ON_EVENT_VALUE = await driver.findComponent(ON.id('ON_EVENT_VALUE'))
      const value = await ON_EVENT_VALUE.getText()
      expect(value).assertContain('阻止此次加载')
      console.log('ON_LOAD_INTERCEPT_TEST_001 success')
      console.log('==========ON_LOAD_INTERCEPT_TEST_001 test end==========')
    })
  })
}