import { describe, it, expect, beforeAll, beforeEach, afterEach, afterAll } from '@ohos/hypium'
import { Driver, ON } from '@ohos.UiTest'
import { startAbility, waitUiReadyMs } from '../utils/index'

export default function PageJumpTest() {
  describe('PageJumpTest', () => {

    /**
     * beforeAll: PrePageJumpTest at the test suite level, which are executed before the test suite is executed.
     */
    beforeAll(async () => {
      console.log('##########PageJumpTest Test start##########');
      console.info("====>beforeAll: PrePageJumpTest are executed.");
      await startAbility('com.example.webviewtest2', 'EntryAbility')
      const driver = Driver.create()
      await driver.delayMs(waitUiReadyMs)
    });

    /**
     * beforeEach: PrePageJumpTest at the test case level, which are executed before each test case is executed.
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
      console.log('##########PageJumpTest Test end##########');
    });

    /*
    * @tc.number: ACCESS_STEP_TEST_001
    * @tc.name: accessStep
    * @tc.desc: 测试accessStep
    */
    it('ACCESS_STEP_TEST_001', 0, async () => {
      console.log('==========ACCESS_STEP_TEST_001 test start==========')
      let driver = Driver.create()
      await driver.delayMs(waitUiReadyMs)
      const CHANGE_TABS = await driver.findComponent(ON.text('设置页签'))
      await CHANGE_TABS.click()
      await driver.delayMs(waitUiReadyMs)
      const TAB = await driver.findComponent(ON.text('Goto accessStep'))
      await TAB.click()
      await driver.delayMs(waitUiReadyMs * 2)
      const UA = await driver.findComponent(ON.text('UA'))
      await UA.click()
      await driver.delayMs(waitUiReadyMs)
      const ON_EVENT_URL = await driver.findComponent(ON.id('ON_EVENT_URL'))
      const url = await ON_EVENT_URL.getText()
      expect(url).assertContain('page_visible')
      const ACCESS_STEP = await driver.findComponent(ON.text('ACCESS_STEP'))
      await ACCESS_STEP.click()
      await driver.delayMs(waitUiReadyMs)
      const prompt_back = await driver.findComponent(ON.text('-1'))
      await prompt_back.click()
      await driver.delayMs(waitUiReadyMs)
      const ON_EVENT_VALUE = await driver.findComponent(ON.id('ON_EVENT_VALUE'))
      let value = await ON_EVENT_VALUE.getText()
      expect(value).assertContain('-1')
      expect(value).assertContain('false')
      console.log('ACCESS_STEP_TEST_001 success')
      console.log('==========ACCESS_STEP_TEST_001 test end==========')
    })

    /*
    * @tc.number: ACCESS_STEP_TEST_002
    * @tc.name: accessStep
    * @tc.desc: 测试accessStep
    */
    it('ACCESS_STEP_TEST_002', 0, async () => {
      console.log('==========ACCESS_STEP_TEST_002 test start==========')
      let driver = Driver.create()
      await driver.delayMs(waitUiReadyMs)
      const TRIGGER = await driver.findComponent(ON.text('TRIGGER'))
      await TRIGGER.click()
      await driver.delayMs(waitUiReadyMs)
      const ON_EVENT_URL = await driver.findComponent(ON.id('ON_EVENT_URL'))
      const url = await ON_EVENT_URL.getText()
      expect(url).assertContain('alert')
      const ACCESS_STEP = await driver.findComponent(ON.text('ACCESS_STEP'))
      await ACCESS_STEP.click()
      await driver.delayMs(waitUiReadyMs)
      const prompt_back = await driver.findComponent(ON.text('-1'))
      await prompt_back.click()
      await driver.delayMs(waitUiReadyMs)
      let ON_EVENT_VALUE = await driver.findComponent(ON.id('ON_EVENT_VALUE'))
      let value = await ON_EVENT_VALUE.getText()
      expect(value).assertContain('-1')
      expect(value).assertContain('true')
      await driver.delayMs(waitUiReadyMs)
      await ACCESS_STEP.click()
      await driver.delayMs(waitUiReadyMs)
      const prompt_now = await driver.findComponent(ON.text('0'))
      await prompt_now.click()
      await driver.delayMs(waitUiReadyMs)
      ON_EVENT_VALUE = await driver.findComponent(ON.id('ON_EVENT_VALUE'))
      value = await ON_EVENT_VALUE.getText()
      expect(value).assertContain('0')
      expect(value).assertContain('true')
      console.log('ACCESS_STEP_TEST_002 success')
      console.log('==========ACCESS_STEP_TEST_002 test end==========')
    })

    /*
    * @tc.number: ACCESS_STEP_TEST_003
    * @tc.name: accessStep
    * @tc.desc: 测试accessStep
    */
    it('ACCESS_STEP_TEST_003', 0, async () => {
      console.log('==========ACCESS_STEP_TEST_003 test start==========')
      let driver = Driver.create()
      await driver.delayMs(waitUiReadyMs)
      const TRIGGER = await driver.findComponent(ON.text('TRIGGER'))
      await TRIGGER.click()
      await driver.delayMs(waitUiReadyMs)
      const ON_EVENT_URL = await driver.findComponent(ON.id('ON_EVENT_URL'))
      const url = await ON_EVENT_URL.getText()
      expect(url).assertContain('page_visible')
      const ACCESS_STEP = await driver.findComponent(ON.text('ACCESS_STEP'))
      await ACCESS_STEP.click()
      await driver.delayMs(waitUiReadyMs)
      const prompt_back = await driver.findComponent(ON.text('-1'))
      await prompt_back.click()
      await driver.delayMs(waitUiReadyMs)
      let ON_EVENT_VALUE = await driver.findComponent(ON.id('ON_EVENT_VALUE'))
      let value = await ON_EVENT_VALUE.getText()
      expect(value).assertContain('-1')
      expect(value).assertContain('true')
      await ACCESS_STEP.click()
      await driver.delayMs(waitUiReadyMs)
      const prompt_forward = await driver.findComponent(ON.text('1'))
      await prompt_forward.click()
      await driver.delayMs(waitUiReadyMs)
      ON_EVENT_VALUE = await driver.findComponent(ON.id('ON_EVENT_VALUE'))
      value = await ON_EVENT_VALUE.getText()
      expect(value).assertContain('1')
      expect(value).assertContain('false')
      console.log('ACCESS_STEP_TEST_003 success')
      console.log('==========ACCESS_STEP_TEST_003 test end==========')
    })

    /*
    * @tc.number: CLEAR_HISTORY_TEST_001
    * @tc.name: clearHistory
    * @tc.desc: 测试clearHistory
    */
    /* IOS不支持clearHistory */
    it('CLEAR_HISTORY_TEST_001', 0, async () => {
      console.log('==========CLEAR_HISTORY_TEST_001 test start==========')
      let driver = Driver.create()
      await driver.delayMs(waitUiReadyMs)
      const ON_EVENT_URL = await driver.findComponent(ON.id('ON_EVENT_URL'))
      let url = await ON_EVENT_URL.getText()
      expect(url).assertContain('page_visible')
      const ACCESS_STEP = await driver.findComponent(ON.text('ACCESS_STEP'))
      await ACCESS_STEP.click()
      await driver.delayMs(waitUiReadyMs)
      let prompt_back = await driver.findComponent(ON.text('-1'))
      await prompt_back.click()
      await driver.delayMs(waitUiReadyMs)
      let ON_EVENT_VALUE = await driver.findComponent(ON.id('ON_EVENT_VALUE'))
      let value = await ON_EVENT_VALUE.getText()
      expect(value).assertContain('-1')
      expect(value).assertContain('true')
      const USER_AGENT = await driver.findComponent(ON.id('USER_AGENT'))
      const uaText = await USER_AGENT.getText()
      if (uaText.includes('OpenHarmony') || uaText.includes('Android')) {
        const CLEAR_HISTORY = await driver.findComponent(ON.text('CLEAR History'))
        await CLEAR_HISTORY.click()
        await driver.delayMs(waitUiReadyMs)
        await ACCESS_STEP.click()
        await driver.delayMs(waitUiReadyMs)
        prompt_back = await driver.findComponent(ON.text('-1'))
        await prompt_back.click()
        await driver.delayMs(waitUiReadyMs)
        ON_EVENT_VALUE = await driver.findComponent(ON.id('ON_EVENT_VALUE'))
        value = await ON_EVENT_VALUE.getText()
        expect(value).assertContain('-1')
        expect(value).assertContain('false')
      } else {
        expect(true).assertTrue()
      }
      console.log('CLEAR_HISTORY_TEST_001 success')
      console.log('==========CLEAR_HISTORY_TEST_001 test end==========')
    })

    /*
    * @tc.number: BACK_OR_FORWARD_TEST_001
    * @tc.name: backOrForward
    * @tc.desc: 测试backOrForward
    */
    it('BACK_OR_FORWARD_TEST_001', 0, async () => {
      console.log('==========BACK_OR_FORWARD_TEST_001 test start==========')
      let driver = Driver.create()
      await driver.delayMs(waitUiReadyMs)
      const TRIGGER = await driver.findComponent(ON.text('TRIGGER'))
      await TRIGGER.click()
      await driver.delayMs(waitUiReadyMs)
      const BOF_BUTTON = await driver.findComponent(ON.text('BOF'))
      await BOF_BUTTON.click()
      await driver.delayMs(waitUiReadyMs)
      const STEP = await driver.findComponent(ON.text('-1'))
      await STEP.click()
      await driver.delayMs(waitUiReadyMs)
      const ON_EVENT_URL = await driver.findComponent(ON.id('ON_EVENT_URL'))
      const url = await ON_EVENT_URL.getText()
      expect(url).assertContain('index_page_visible')
      console.log('BACK_OR_FORWARD_TEST_001 success')
      console.log('==========BACK_OR_FORWARD_TEST_001 test end==========')
    })

    /*
   * @tc.number: BACK_OR_FORWARD_TEST_002
   * @tc.name: backOrForward
   * @tc.desc: 测试backOrForward
   */
    it('BACK_OR_FORWARD_TEST_002', 0, async () => {
      console.log('==========BACK_OR_FORWARD_TEST_002 test start==========')
      let driver = Driver.create()
      await driver.delayMs(waitUiReadyMs)
      const BOF_BUTTON = await driver.findComponent(ON.text('BOF'))
      await BOF_BUTTON.click()
      await driver.delayMs(waitUiReadyMs)
      const STEP = await driver.findComponent(ON.text('1'))
      await STEP.click()
      await driver.delayMs(waitUiReadyMs)
      const ON_EVENT_URL = await driver.findComponent(ON.id('ON_EVENT_URL'))
      const url = await ON_EVENT_URL.getText()
      expect(url).assertContain('index_alert')
      console.log('BACK_OR_FORWARD_TEST_002 success')
      console.log('==========BACK_OR_FORWARD_TEST_002 test end==========')
    })

    /*
    * @tc.number: GET_BACK_FORWARD_ENTRIES_TEST_001
    * @tc.name: getBackForwardEntries
    * @tc.desc: 测试getBackForwardEntries
    */
    it('GET_BACK_FORWARD_ENTRIES_TEST_001', 0, async () => {
      console.log('==========GET_BACK_FORWARD_ENTRIES_TEST_001 test start==========')
      let driver = Driver.create()
      await driver.delayMs(waitUiReadyMs)
      const USER_AGENT = await driver.findComponent(ON.id('USER_AGENT'))
      const uaText = await USER_AGENT.getText()
      if (uaText.includes('OpenHarmony') || uaText.includes('Android')) {
        const CLEAR_HISTORY = await driver.findComponent(ON.text('CLEAR History'))
        await CLEAR_HISTORY.click()
        await driver.delayMs(waitUiReadyMs)
        const TRIGGER = await driver.findComponent(ON.text('TRIGGER'))
        await TRIGGER.click()
        await driver.delayMs(waitUiReadyMs)
        const HISTORY_LIST = await driver.findComponent(ON.text('History_LIST'))
        await HISTORY_LIST.click()
        await driver.delayMs(waitUiReadyMs)
        const ON_EVENT_VALUE = await driver.findComponent(ON.id('ON_EVENT_VALUE'))
        const value = await ON_EVENT_VALUE.getText()
        expect(Number(value)).assertEqual(2)
      } else {
        expect(true).assertTrue()
      }
      console.log('GET_BACK_FORWARD_ENTRIES_TEST_001 success')
      console.log('==========GET_BACK_FORWARD_ENTRIES_TEST_001 test end==========')
    })

    /*
    * @tc.number: GET_BACK_FORWARD_ENTRIES_TEST_002
    * @tc.name: getBackForwardEntries
    * @tc.desc: 测试getBackForwardEntries
    */
    it('GET_BACK_FORWARD_ENTRIES_TEST_002', 0, async () => {
      console.log('==========GET_BACK_FORWARD_ENTRIES_TEST_002 test start==========')
      let driver = Driver.create()
      await driver.delayMs(waitUiReadyMs)
      const USER_AGENT = await driver.findComponent(ON.id('USER_AGENT'))
      const uaText = await USER_AGENT.getText()
      if (uaText.includes('OpenHarmony') || uaText.includes('Android')) {
        const CLEAR_HISTORY = await driver.findComponent(ON.text('CLEAR History'))
        await CLEAR_HISTORY.click()
        await driver.delayMs(waitUiReadyMs)
        const TRIGGER = await driver.findComponent(ON.text('TRIGGER'))
        await TRIGGER.click()
        await driver.delayMs(waitUiReadyMs)
        await TRIGGER.click()
        await driver.delayMs(waitUiReadyMs)
        await TRIGGER.click()
        await driver.delayMs(waitUiReadyMs)
        const HISTORY_LIST = await driver.findComponent(ON.text('History_LIST'))
        await HISTORY_LIST.click()
        await driver.delayMs(waitUiReadyMs)
        const ON_EVENT_VALUE = await driver.findComponent(ON.id('ON_EVENT_VALUE'))
        const value = await ON_EVENT_VALUE.getText()
        expect(Number(value)).assertEqual(4)
      } else {
        expect(true).assertTrue()
      }
      console.log('GET_BACK_FORWARD_ENTRIES_TEST_002 success')
      console.log('==========GET_BACK_FORWARD_ENTRIES_TEST_002 test end==========')
    })


    /*
    * @tc.number: GET_TITLE_TEST_001
    * @tc.name: getTitle
    * @tc.desc: 测试getTitle
    */
    it('GET_TITLE_TEST_001', 0, async () => {
      console.log('==========GET_TITLE_TEST_001 test start==========')
      let driver = Driver.create()
      await driver.delayMs(waitUiReadyMs)
      const TRIGGER = await driver.findComponent(ON.text('TRIGGER'))
      await TRIGGER.click()
      await driver.delayMs(waitUiReadyMs)
      const GET_TITLE_BUTTON = await driver.findComponent(ON.text('GET_TITLE'))
      await GET_TITLE_BUTTON.click()
      await driver.delayMs(waitUiReadyMs)
      const ON_EVENT_VALUE = await driver.findComponent(ON.id('ON_EVENT_VALUE'))
      const value = await ON_EVENT_VALUE.getText()
      expect(value).assertEqual('page_visible')
      console.log('GET_TITLE_TEST_001 success')
      console.log('==========GET_TITLE_TEST_001 test end==========')
    })

    /*
   * @tc.number: GET_TITLE_TEST_002
   * @tc.name: getTitle
   * @tc.desc: 测试getTitle
   */
    it('GET_TITLE_TEST_002', 0, async () => {
      console.log('==========GET_TITLE_TEST_002 test start==========')
      let driver = Driver.create()
      await driver.delayMs(waitUiReadyMs)
      const TRIGGER = await driver.findComponent(ON.text('TRIGGER'))
      await TRIGGER.click()
      await driver.delayMs(waitUiReadyMs)
      const GET_TITLE_BUTTON = await driver.findComponent(ON.text('GET_TITLE'))
      await GET_TITLE_BUTTON.click()
      await driver.delayMs(waitUiReadyMs)
      const ON_EVENT_VALUE = await driver.findComponent(ON.id('ON_EVENT_VALUE'))
      const value = await ON_EVENT_VALUE.getText()
      expect(value).assertEqual('alert')
      console.log('GET_TITLE_TEST_002 success')
      console.log('==========GET_TITLE_TEST_002 test end==========')
    })

    /*
   * @tc.number: ON_Title_Receive_TEST_001
   * @tc.name: onTitleReceive
   * @tc.desc: 测试onTitleReceive
   */
    it('ON_Title_Receive_TEST_001', 0, async () => {
      console.log('==========ON_Title_Receive_TEST_001 test start==========')
      let driver = Driver.create()
      await driver.delayMs(waitUiReadyMs)
      const TRIGGER = await driver.findComponent(ON.text('TRIGGER'))
      await TRIGGER.click()
      await driver.delayMs(waitUiReadyMs)
      const GET_TITLE_BUTTON = await driver.findComponent(ON.text('GET_TITLE'))
      await GET_TITLE_BUTTON.click()
      await driver.delayMs(waitUiReadyMs)
      let ON_EVENT_VALUE = await driver.findComponent(ON.id('ON_EVENT_VALUE'))
      let value = await ON_EVENT_VALUE.getText()
      expect(value).assertEqual('page_visible')
      const SET_TITLE_BUTTON = await driver.findComponent(ON.text('SET_TITLE'))
      await SET_TITLE_BUTTON.click()
      await driver.delayMs(waitUiReadyMs)
      ON_EVENT_VALUE = await driver.findComponent(ON.id('ON_EVENT_VALUE'))
      value = await ON_EVENT_VALUE.getText()
      expect(value).assertEqual('newTitle:change_page_visible')
      console.log('ON_Title_Receive_TEST_001 success')
      console.log('==========ON_Title_Receive_TEST_001 test end==========')
    })

    /*
   * @tc.number: ACCESS_FORWARD_TEST_001
   * @tc.name: accessForward
   * @tc.desc: 测试accessForward
   */
    it('ACCESS_FORWARD_TEST_001', 0, async () => {
      console.log('==========ACCESS_FORWARD_TEST_001 test start==========')
      let driver = Driver.create()
      await driver.delayMs(waitUiReadyMs)
      const TRIGGER = await driver.findComponent(ON.text('TRIGGER'))
      await TRIGGER.click()
      await driver.delayMs(waitUiReadyMs)
      const BACKWARD_BTN = await driver.findComponent(ON.text('backward'))
      await BACKWARD_BTN.click()
      await driver.delayMs(waitUiReadyMs)
      const ACCESS = await driver.findComponent(ON.text('access'))
      await ACCESS.click()
      await driver.delayMs(waitUiReadyMs)
      const FORWARD = await driver.findComponent(ON.text('前进'))
      await FORWARD.click()
      await driver.delayMs(waitUiReadyMs)
      const ON_EVENT_VALUE = await driver.findComponent(ON.id('ON_EVENT_VALUE'))
      const value = await ON_EVENT_VALUE.getText()
      expect(value).assertEqual('accessForward: true')
      console.log('ACCESS_FORWARD_TEST_001 success')
      console.log('==========ACCESS_FORWARD_TEST_001 test end==========')
    })

    /*
   * @tc.number: FORWARD_TEST_001
   * @tc.name: forward
   * @tc.desc: 测试forward
   */
    it('FORWARD_TEST_001', 0, async () => {
      console.log('==========FORWARD_TEST_001 test start==========')
      let driver = Driver.create()
      await driver.delayMs(waitUiReadyMs)
      let ON_EVENT_URL = await driver.findComponent(ON.id('ON_EVENT_URL'))
      let url = await ON_EVENT_URL.getText()
      expect(url).assertContain('page')
      const FORWARD = await driver.findComponent(ON.text('forward'))
      await FORWARD.click()
      await driver.delayMs(waitUiReadyMs)
      ON_EVENT_URL = await driver.findComponent(ON.id('ON_EVENT_URL'))
      url = await ON_EVENT_URL.getText()
      expect(url).assertContain('alert')
      console.log('FORWARD_TEST_001 success')
      console.log('==========FORWARD_TEST_001 test end==========')
    })

    /*
   * @tc.number: ACCESS_BACKWARD_TEST_001
   * @tc.name: accessBackward
   * @tc.desc: 测试accessBackward
   */
    it('ACCESS_BACKWARD_TEST_001', 0, async () => {
      console.log('==========ACCESS_BACKWARD_TEST_001 test start==========')
      let driver = Driver.create()
      await driver.delayMs(waitUiReadyMs)
      const ACCESS = await driver.findComponent(ON.text('access'))
      await ACCESS.click()
      await driver.delayMs(waitUiReadyMs)
      const BACKWARD = await driver.findComponent(ON.text('后退'))
      await BACKWARD.click()
      await driver.delayMs(waitUiReadyMs)
      const ON_EVENT_VALUE = await driver.findComponent(ON.id('ON_EVENT_VALUE'))
      const value = await ON_EVENT_VALUE.getText()
      expect(value).assertEqual('accessBackward: true')
      console.log('ACCESS_BACKWARD_TEST_001 success')
      console.log('==========ACCESS_BACKWARD_TEST_001 test end==========')
    })

    /*
  * @tc.number: BACKWARD_TEST_001
  * @tc.name: backward
  * @tc.desc: 测试backward
  */
    it('BACKWARD_TEST_001', 0, async () => {
      console.log('==========BACKWARD_TEST_001 test start==========')
      let driver = Driver.create()
      await driver.delayMs(waitUiReadyMs)
      let ON_EVENT_URL = await driver.findComponent(ON.id('ON_EVENT_URL'))
      let url = await ON_EVENT_URL.getText()
      expect(url).assertContain('alert')
      const BACKWARD = await driver.findComponent(ON.text('backward'))
      await BACKWARD.click()
      await driver.delayMs(waitUiReadyMs)
      ON_EVENT_URL = await driver.findComponent(ON.id('ON_EVENT_URL'))
      url = await ON_EVENT_URL.getText()
      expect(url).assertContain('page')
      console.log('BACKWARD_TEST_001 success')
      console.log('==========BACKWARD_TEST_001 test end==========')
    })
  })
}