import { describe, it, expect, beforeAll, beforeEach, afterEach, afterAll } from '@ohos/hypium'
import { Driver, ON } from '@ohos.UiTest'
import { startAbility, waitUiReadyMs } from '../utils/index'

export default function OnAlertTest() {
  describe('OnAlertTest', () => {

    /**
     * beforeAll: PreOnAlertTest at the test suite level, which are executed before the test suite is executed.
     */
    beforeAll(() => {
      console.log('##########OnAlertTest Test start##########');
      console.info("====>beforeAll: PreOnAlertTest are executed.");
    });

    /**
     * beforeEach: PreCommonEventMgrSubscribeTest at the test case level, which are executed before each test case is executed.
     */
    beforeEach(async () => {
      await startAbility('com.example.webviewtest', 'EntryAbility')
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
      console.log('##########OnAlertTest Test end##########');
    });

    /*
     * @tc.number: ON_ALERT_TEST_001
     * @tc.name: onAlert
     * @tc.desc: 测试onAlert
     */
    it('ON_ALERT_TEST_001', 0, async () => {
      console.log('==========ON_ALERT_TEST_001 test start==========')
      let driver = Driver.create()
      await driver.delayMs(waitUiReadyMs)
      const CHANGE_TABS = await driver.findComponent(ON.text('设置页签'))
      await CHANGE_TABS.click()
      await driver.delayMs(waitUiReadyMs)
      const TAB = await driver.findComponent(ON.text('Goto onAlert'))
      await TAB.click()
      await driver.delayMs(2000)
      const TRIGGER_BUTTON = await driver.findComponent(ON.text('TRIGGER'))
      await TRIGGER_BUTTON.click()
      await driver.delayMs(waitUiReadyMs)
      const ON_ALERT_EVENT_URL = await driver.findComponent(ON.id('ON_EVENT_URL'))
      const text: string = await ON_ALERT_EVENT_URL.getText()
      console.log('ON_ALERT_EVENT_URL', text)
      expect(text).assertEqual('index_alert.html')
      console.log('ON_ALERT_TEST_001 success')
      console.log('==========ON_ALERT_TEST_001 test end==========')
    })

    /*
     * @tc.number: ON_ALERT_TEST_002
     * @tc.name: onAlert
     * @tc.desc: 测试onAlert
     */
    it('ON_ALERT_TEST_002', 0, async () => {
      console.log('==========ON_ALERT_TEST_002 test start==========')
      let driver = Driver.create()
      await driver.delayMs(waitUiReadyMs)
      const ON_ALERT_EVENT_MESSAGE = await driver.findComponent(ON.id('ON_EVENT_MESSAGE'))
      const msg: string = await ON_ALERT_EVENT_MESSAGE.getText()
      console.log('ON_ALERT_EVENT_MESSAGE', msg)
      expect(msg).assertEqual('on_alert_message')
      console.log('ON_ALERT_TEST_002 success')
      console.log('==========ON_ALERT_TEST_002 test end==========')
    })

    /*
    * @tc.number: ON_ALERT_TEST_003
    * @tc.name: onAlert
    * @tc.desc: 测试onAlert
    */
    it('ON_ALERT_TEST_003', 0, async () => {
      console.log('==========ON_ALERT_TEST_003 test start==========')
      let driver = Driver.create()
      await driver.delayMs(waitUiReadyMs)
      const secondaryButton = await driver.findComponent(ON.text('ok'))
      const SECONDARY_BUTTON_CLICK = await driver.findComponent(ON.id('ON_BUTTON_CLICK'))
      await secondaryButton.click()
      const text: string = await SECONDARY_BUTTON_CLICK.getText()
      console.log('SECONDARY_BUTTON_CLICK', text)
      expect(text).assertEqual('OK_CLICKED')
      console.log('ON_ALERT_TEST_003 success')
      console.log('==========ON_ALERT_TEST_003 test end==========')
    })

    /*
    * @tc.number: ON_ALERT_TEST_004
    * @tc.name: onAlert
    * @tc.desc: 测试onAlert
    */
    it('ON_ALERT_TEST_004', 0, async () => {
      console.log('==========ON_ALERT_TEST_004 test start==========')
      let driver = Driver.create()
      await driver.delayMs(waitUiReadyMs)
      const TRIGGER_BUTTON = await driver.findComponent(ON.text('TRIGGER'))
      await TRIGGER_BUTTON.click()
      const primaryButton = await driver.findComponent(ON.text('cancel'))
      const PRIMARY_BUTTON_CLICK = await driver.findComponent(ON.id('ON_BUTTON_CLICK'))
      await primaryButton.click()
      const text: string = await PRIMARY_BUTTON_CLICK.getText()
      console.log('PRIMARY_BUTTON_CLICK', text)
      expect(text).assertEqual('CANCEL_CLICKED')
      console.log('ON_ALERT_TEST_004 success')
      console.log('==========ON_ALERT_TEST_004 test end==========')
    })

    /*
     * @tc.number: MIN_FONT_SIZE_TEST_001
     * @tc.name: minFontSize
     * @tc.desc: 测试minFontSize
     */
    it('MIN_FONT_SIZE_TEST_001', 0, async () => {
      console.log('==========MIN_FONT_SIZE_TEST_001 test start==========')
      let driver = Driver.create()
      await driver.delayMs(waitUiReadyMs)
      const SET_BUTTON = await driver.findComponent(ON.text('SET'))
      await SET_BUTTON.click()
      await driver.delayMs(waitUiReadyMs)
      const ON_EVENT_MSG = await driver.findComponent(ON.id('ON_EVENT_MESSAGE'))
      const msg = await ON_EVENT_MSG.getText()
      expect(msg).assertContain('minFontSize:16')
      console.log('MIN_FONT_SIZE_TEST_001 success')
      console.log('==========MIN_FONT_SIZE_TEST_001 test end==========')
    })

    /*
     * @tc.number: MIN_FONT_SIZE_TEST_002
     * @tc.name: minFontSize
     * @tc.desc: 测试minFontSize
     */
    it('MIN_FONT_SIZE_TEST_002', 0, async () => {
      console.log('==========MIN_FONT_SIZE_TEST_002 test start==========')
      let driver = Driver.create()
      await driver.delayMs(waitUiReadyMs)
      const SET_BUTTON = await driver.findComponent(ON.text('SET'))
      await SET_BUTTON.click()
      await driver.delayMs(waitUiReadyMs)
      const ON_EVENT_MSG = await driver.findComponent(ON.id('ON_EVENT_MESSAGE'))
      const msg = await ON_EVENT_MSG.getText()
      expect(msg).assertContain('minFontSize:12')
      console.log('MIN_FONT_SIZE_TEST_002 success')
      console.log('==========MIN_FONT_SIZE_TEST_002 test end==========')
    })

    /*
     * @tc.number: BACKGROUND_COLOR_TEST_001
     * @tc.name: backgroundColor
     * @tc.desc: 测试backgroundColor
     */
    it('BACKGROUND_COLOR_TEST_001', 0, async () => {
      console.log('==========BACKGROUND_COLOR_TEST_001 test start==========')
      let driver = Driver.create()
      await driver.delayMs(waitUiReadyMs)
      const SET_BUTTON = await driver.findComponent(ON.text('SET'))
      await SET_BUTTON.click()
      await driver.delayMs(waitUiReadyMs)
      const ON_EVENT_MSG = await driver.findComponent(ON.id('ON_EVENT_MESSAGE'))
      const msg = await ON_EVENT_MSG.getText()
      expect(msg).assertContain('backgroundColor:#ff808080')
      console.log('BACKGROUND_COLOR_TEST_001 success')
      console.log('==========BACKGROUND_COLOR_TEST_001 test end==========')
    })

    /*
     * @tc.number: BACKGROUND_COLOR_TEST_002
     * @tc.name: backgroundColor
     * @tc.desc: 测试backgroundColor
     */
    it('BACKGROUND_COLOR_TEST_002', 0, async () => {
      console.log('==========BACKGROUND_COLOR_TEST_002 test start==========')
      let driver = Driver.create()
      await driver.delayMs(waitUiReadyMs)
      const SET_BUTTON = await driver.findComponent(ON.text('SET'))
      await SET_BUTTON.click()
      await driver.delayMs(waitUiReadyMs)
      const ON_EVENT_MSG = await driver.findComponent(ON.id('ON_EVENT_MESSAGE'))
      const msg = await ON_EVENT_MSG.getText()
      expect(msg).assertContain('backgroundColor:#ffffc0cb')
      console.log('BACKGROUND_COLOR_TEST_002 success')
      console.log('==========BACKGROUND_COLOR_TEST_002 test end==========')
    })

    /*
     * @tc.number: ON_CONSOLE_TEST_001
     * @tc.name: onConsole
     * @tc.desc: 测试onConsole
     */
    it('ON_CONSOLE_TEST_001', 0, async () => {
      console.log('==========ON_CONSOLE_TEST_001 test start==========')
      let driver = Driver.create()
      await driver.delayMs(waitUiReadyMs)
      const ON_EVENT_VALUE = await driver.findComponent(ON.id('ON_EVENT_VALUE'))
      const value = await ON_EVENT_VALUE.getText()
      expect(value).assertContain('console log')
      expect(value).assertContain('on_alert_message')
      console.log('ON_CONSOLE_TEST_001 success')
      console.log('==========ON_CONSOLE_TEST_001 test end==========')
    })

    /*
     * @tc.number: LOAD_DATA_TEST_001
     * @tc.name: loadData
     * @tc.desc: 测试loadData
     */
    it('LOAD_DATA_TEST_001', 0, async () => {
      console.log('==========LOAD_DATA_TEST_001 test start==========')
      let driver = Driver.create()
      await driver.delayMs(waitUiReadyMs)
      const loadData = await driver.findComponent(ON.text('loadData'))
      await loadData.click()
      await driver.delayMs(waitUiReadyMs)
      const ON_EVENT_VALUE = await driver.findComponent(ON.id('ON_EVENT_VALUE'))
      const value = await ON_EVENT_VALUE.getText()
      expect(value).assertEqual('hasImage: true')
      console.log('LOAD_DATA_TEST_001 success')
      console.log('==========LOAD_DATA_TEST_001 test end==========')
    })
  })
}