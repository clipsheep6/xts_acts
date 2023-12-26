import { describe, it, expect, beforeAll, beforeEach, afterEach, afterAll } from '@ohos/hypium'
import { Driver, ON } from '@ohos.UiTest'
import { startAbility, waitUiReadyMs } from '../utils/index'

export default function OnPageVisibleTest() {
  describe('OnPageVisibleTest', () => {

    /**
     * beforeAll: PreOnPageVisibleTest at the test suite level, which are executed before the test suite is executed.
     */
    beforeAll(async () => {
      console.log('##########OnPageVisibleTest Test start##########');
      console.info("====>beforeAll: PreOnPageVisibleTest are executed.");
      await startAbility('com.example.webviewtest', 'EntryAbility')
      const driver = Driver.create()
      await driver.delayMs(waitUiReadyMs)
    });

    /**
     * beforeEach: OnPageVisibleTest at the test case level, which are executed before each test case is executed.
     */
    beforeEach(async () => {
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
      console.log('##########OnPageVisibleTest Test end##########');
    });

    /*
    * @tc.number: ON_PAGE_VISIBLE_TEST_001
    * @tc.name: onPageVisible
    * @tc.desc: 测试onPageVisible
    */
    it('ON_PAGE_VISIBLE_TEST_001', 0, async () => {
      console.log('==========ON_PAGE_VISIBLE_TEST_001 test start==========')
      let driver = Driver.create()
      await driver.delayMs(waitUiReadyMs)
      const CHANGE_TABS = await driver.findComponent(ON.text('设置页签'))
      await CHANGE_TABS.click()
      await driver.delayMs(waitUiReadyMs)
      const TAB = await driver.findComponent(ON.text('Goto onPageVisible'))
      await TAB.click()
      await driver.delayMs(2000)
      const ON_PAGE_VISIBLE_EVENT_URL = await driver.findComponent(ON.id('ON_EVENT_URL'))
      const text: string = await ON_PAGE_VISIBLE_EVENT_URL.getText()
      console.log('ON_PAGE_VISIBLE_EVENT_URL', text)
      expect(text).assertContain('onPageVisible')
      console.log('ON_PAGE_VISIBLE_TEST_001 success')
      console.log('==========ON_PAGE_VISIBLE_TEST_001 test end==========')
    })

    /*
    * @tc.number: ON_PAGE_VISIBLE_TEST_002
    * @tc.name: onPageVisible
    * @tc.desc: 测试onPageVisible
    */
    it('ON_PAGE_VISIBLE_TEST_002', 0, async () => {
      console.log('==========ON_PAGE_VISIBLE_TEST_002 test start==========')
      let driver = Driver.create()
      await driver.delayMs(waitUiReadyMs)
      const TRIGGER_BUTTON = await driver.findComponent(ON.text('TRIGGER'))
      await TRIGGER_BUTTON.click()
      await driver.delayMs(waitUiReadyMs)
      const PAGE_VISIBLE_MSG = await driver.findComponent(ON.id('ON_EVENT_MESSAGE'))
      const msg: string = await PAGE_VISIBLE_MSG.getText()
      console.log('PAGE_VISIBLE_MSG', msg)
      expect(msg).assertEqual('page_visible_alert_message')
      console.log('ON_PAGE_VISIBLE_TEST_002 success')
      console.log('==========ON_PAGE_VISIBLE_TEST_002 test end==========')
    })

    /*
    * @tc.number: ON_PAGE_VISIBLE_TEST_003
    * @tc.name: onPageVisible
    * @tc.desc: 测试onPageVisible
    */
    it('ON_PAGE_VISIBLE_TEST_003', 0, async () => {
      console.log('==========ON_PAGE_VISIBLE_TEST_003 test start==========')
      let driver = Driver.create()
      await driver.delayMs(waitUiReadyMs)
      const OK_BUTTON = await driver.findComponent(ON.text('ok'))
      await OK_BUTTON.click()
      await driver.delayMs(waitUiReadyMs)
      const BUTTON_CLICKED = await driver.findComponent(ON.id('ON_BUTTON_CLICK'))
      const BUTTON_CLICKED_TEXT = await BUTTON_CLICKED.getText()
      expect(BUTTON_CLICKED_TEXT).assertEqual('OK_CLICKED')
      const PAGE_VISIBLE_URL = await driver.findComponent(ON.id('ON_EVENT_URL'))
      const url: string = await PAGE_VISIBLE_URL.getText()
      expect(url).assertContain('onPageVisible')
      console.log('ON_PAGE_VISIBLE_TEST_003 success')
      console.log('==========ON_PAGE_VISIBLE_TEST_003 test end==========')
    })

    /*
    * @tc.number: ON_PAGE_VISIBLE_TEST_004
    * @tc.name: onPageVisible
    * @tc.desc: 测试onPageVisible
    */
    it('ON_PAGE_VISIBLE_TEST_004', 0, async () => {
      console.log('==========ON_PAGE_VISIBLE_TEST_004 test start==========')
      let driver = Driver.create()
      await driver.delayMs(waitUiReadyMs)
      const TRIGGER = await driver.findComponent(ON.text('TRIGGER'))
      await TRIGGER.click()
      await driver.delayMs(waitUiReadyMs)
      const PAGE_VISIBLE_URL = await driver.findComponent(ON.id('ON_EVENT_URL'))
      const url: string = await PAGE_VISIBLE_URL.getText()
      expect(url).assertContain('onPageVisible')
      console.log('ON_PAGE_VISIBLE_TEST_004 success')
      console.log('==========ON_PAGE_VISIBLE_TEST_004 test end==========')
    })
  })
}