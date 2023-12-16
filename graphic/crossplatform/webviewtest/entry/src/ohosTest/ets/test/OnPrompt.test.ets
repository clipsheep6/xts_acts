import { describe, it, expect, beforeAll, beforeEach, afterEach, afterAll } from '@ohos/hypium'
import { Driver, ON } from '@ohos.UiTest'
import { startAbility, waitUiReadyMs } from '../utils/index'

export default function OnPromptTest() {
  describe('OnPromptTest', () => {

    /**
     * beforeAll: PreOnPromptTest at the test suite level, which are executed before the test suite is executed.
     */
    beforeAll(() => {
      console.log('##########OnPromptTest Test start##########');
      console.info("====>beforeAll: PreOnPromptTest are executed.");
    });

    /**
     * beforeEach: PreOnPromptTest at the test case level, which are executed before each test case is executed.
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
      console.log('##########OnPromptTest Test end##########');
    });

    /*
    * @tc.number: ON_PROMPT_TEST_001
    * @tc.name: onPrompt
    * @tc.desc: 测试onPrompt
    */
    it('ON_PROMPT_TEST_001', 0, async () => {
      console.log('==========ON_PROMPT_TEST_001 test start==========')
      let driver = Driver.create()
      await driver.delayMs(waitUiReadyMs)
      const CHANGE_TABS = await driver.findComponent(ON.text('设置页签'))
      await CHANGE_TABS.click()
      await driver.delayMs(waitUiReadyMs)
      const TAB = await driver.findComponent(ON.text('Goto onPrompt'))
      await TAB.click()
      await driver.delayMs(2000)
      const TRIGGER_BUTTON = await driver.findComponent(ON.text('TRIGGER'))
      await TRIGGER_BUTTON.click()
      await driver.delayMs(waitUiReadyMs)
      const ok = await driver.findComponent(ON.text('ok'))
      await ok.click()
      await driver.delayMs(waitUiReadyMs)
      const ON_PROMPT_EVENT_URL = await driver.findComponent(ON.id('ON_EVENT_URL'))
      const text: string = await ON_PROMPT_EVENT_URL.getText()
      console.log('ON_PROMPT_EVENT_URL', text)
      expect(text).assertEqual('index_prompt.html')
      console.log('ON_PROMPT_TEST_001 success')
      console.log('==========ON_PROMPT_TEST_001 test end==========')
    })

    /*
    * @tc.number: ON_PROMPT_TEST_002
    * @tc.name: onPrompt
    * @tc.desc: 测试onPrompt
    */
    it('ON_PROMPT_TEST_002', 0, async () => {
      console.log('==========ON_PROMPT_TEST_002 test start==========')
      let driver = Driver.create()
      await driver.delayMs(waitUiReadyMs)
      const ON_PROMPT_EVENT_MESSAGE = await driver.findComponent(ON.id('ON_EVENT_MESSAGE'))
      const msg: string = await ON_PROMPT_EVENT_MESSAGE.getText()
      console.log('ON_PROMPT_EVENT_MESSAGE', msg)
      expect(msg).assertEqual('on_prompt_message')
      console.log('ON_PROMPT_TEST_002 success')
      console.log('==========ON_PROMPT_TEST_002 test end==========')
    })

    /*
    * @tc.number: ON_PROMPT_TEST_003
    * @tc.name: onPrompt
    * @tc.desc: 测试onPrompt
    */
    it('ON_PROMPT_TEST_003', 0, async () => {
      console.log('==========ON_PROMPT_TEST_003 test start==========')
      let driver = Driver.create()
      await driver.delayMs(waitUiReadyMs)
      const ON_PROMPT_EVENT_VALUE = await driver.findComponent(ON.id('ON_EVENT_VALUE'))
      const msg: string = await ON_PROMPT_EVENT_VALUE.getText()
      console.log('ON_PROMPT_EVENT_VALUE', msg)
      expect(msg).assertEqual('prompt_value')
      console.log('ON_PROMPT_TEST_003 success')
      console.log('==========ON_PROMPT_TEST_003 test end==========')
    })

    /*
    * @tc.number: ON_PROMPT_TEST_004
    * @tc.name: onPrompt
    * @tc.desc: 测试onPrompt
    */
    it('ON_PROMPT_TEST_004', 0, async () => {
      console.log('==========ON_PROMPT_TEST_004 test start==========')
      let driver = Driver.create()
      await driver.delayMs(waitUiReadyMs)
      const TRIGGER_BUTTON = await driver.findComponent(ON.text('TRIGGER'))
      await TRIGGER_BUTTON.click()
      await driver.delayMs(waitUiReadyMs)
      const secondaryButton = await driver.findComponent(ON.text('ok'))
      await secondaryButton.click()
      await driver.delayMs(waitUiReadyMs)
      const SECONDARY_BUTTON_CLICK = await driver.findComponent(ON.id('ON_BUTTON_CLICK'))
      const text: string = await SECONDARY_BUTTON_CLICK.getText()
      console.log('SECONDARY_BUTTON_CLICK', text)
      expect(text).assertEqual('OK_CLICKED')
      console.log('ON_PROMPT_TEST_004 success')
      console.log('==========ON_PROMPT_TEST_004 test end==========')
    })

    /*
    * @tc.number: ON_PROMPT_TEST_005
    * @tc.name: onPrompt
    * @tc.desc: 测试onPrompt
    */
    it('ON_PROMPT_TEST_005', 0, async () => {
      console.log('==========ON_PROMPT_TEST_005 test start==========')
      let driver = Driver.create()
      await driver.delayMs(waitUiReadyMs)
      const TRIGGER_BUTTON = await driver.findComponent(ON.text('TRIGGER'))
      await TRIGGER_BUTTON.click()
      await driver.delayMs(waitUiReadyMs)
      const primaryButton = await driver.findComponent(ON.text('cancel'))
      await primaryButton.click()
      await driver.delayMs(waitUiReadyMs)
      const PRIMARY_BUTTON_CLICK = await driver.findComponent(ON.id('ON_BUTTON_CLICK'))
      const text: string = await PRIMARY_BUTTON_CLICK.getText()
      console.log('PRIMARY_BUTTON_CLICK', text)
      expect(text).assertEqual('CANCEL_CLICKED')
      console.log('ON_PROMPT_TEST_005 success')
      console.log('==========ON_PROMPT_TEST_005 test end==========')
    })
  })
}