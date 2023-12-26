import { describe, it, expect, beforeAll, beforeEach, afterEach, afterAll } from '@ohos/hypium'
import { Driver, MouseButton, ON } from '@ohos.UiTest'
import { startAbility, waitUiReadyMs, sleep } from '../utils/index'

export default function OnShowFileSelectorTest() {
  describe('OnShowFileSelectorTest', () => {

    /**
     * beforeAll: PreOnShowFileSelectorTest at the test suite level, which are executed before the test suite is executed.
     */
    beforeAll(async () => {
      console.log('##########OnShowFileSelectorTest Test start##########');
      console.info("====>beforeAll: PreOnShowFileSelectorTest are executed.");
      await startAbility('com.example.webviewtest', 'EntryAbility')
      const driver = Driver.create()
      await driver.delayMs(waitUiReadyMs)
    });

    /**
     * beforeEach: PreOnShowFileSelectorTest at the test case level, which are executed before each test case is executed.
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
      console.log('##########OnShowFileSelectorTest Test end##########');
    });

    /*
    * @tc.number: ON_SHOW_FILE_SELECTOR_TEST_001
    * @tc.name: onShowFileSelector
    * @tc.desc: 测试onPermissionRequest
    */
    it('ON_SHOW_FILE_SELECTOR_TEST_001', 0, async () => {
      console.log('==========ON_SHOW_FILE_SELECTOR_TEST_001 test start==========')
      let driver = Driver.create()
      await driver.delayMs(waitUiReadyMs)
      const CHANGE_TABS = await driver.findComponent(ON.text('设置页签'))
      await CHANGE_TABS.click()
      await driver.delayMs(waitUiReadyMs)
      const TAB = await driver.findComponent(ON.text('Goto onShowFileSelector'))
      await TAB.click()
      await driver.delayMs(2000)
      const DOCUMENT_SAVE = await driver.findComponent(ON.id('DOCUMENT_SAVE'))
      await DOCUMENT_SAVE.click()
      await driver.delayMs(waitUiReadyMs)
      const ON_EVENT_MSG = await driver.findComponent(ON.id('ON_EVENT_MESSAGE'))
      const msg = await ON_EVENT_MSG.getText()
      expect(msg).assertEqual('SAVE test.txt')
      const TRIGGER = await driver.findComponent(ON.text('TRIGGER'))
      await TRIGGER.click()
      await driver.delayMs(waitUiReadyMs)
      const ON_EVENT_VALUE = await driver.findComponent(ON.id('ON_EVENT_VALUE'))
      const value = await ON_EVENT_VALUE.getText()
      expect(value).assertContain('.txt')
      console.log('ON_SHOW_FILE_SELECTOR_TEST_001 success')
      console.log('==========ON_SHOW_FILE_SELECTOR_TEST_001 test end==========')
    })
  })
}