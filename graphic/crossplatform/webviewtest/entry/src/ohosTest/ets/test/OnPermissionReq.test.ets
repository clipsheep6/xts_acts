import { describe, it, expect, beforeAll, beforeEach, afterEach, afterAll } from '@ohos/hypium'
import { Driver, MouseButton, ON } from '@ohos.UiTest'
import { startAbility, waitUiReadyMs } from '../utils/index'

export default function OnPermissionTest() {
  describe('OnPermissionTest', () => {

    /**
     * beforeAll: PreOnPermissionTest at the test suite level, which are executed before the test suite is executed.
     */
    beforeAll(async () => {
      console.log('##########OnPermissionTest Test start##########');
      console.info("====>beforeAll: PreOnPermissionTest are executed.");
      await startAbility('com.example.webviewtest', 'EntryAbility')
      const driver = Driver.create()
      await driver.delayMs(waitUiReadyMs)
    });

    /**
     * beforeEach: PreCommonEventMgrSubscribeTest at the test case level, which are executed before each test case is executed.
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
      console.log('##########OnPermissionTest Test end##########');
    });

    /*
    * @tc.number: ON_PERMISSION_REQ_TEST_001
    * @tc.name: onPermissionRequest
    * @tc.desc: 测试onPermissionRequest
    */
    it('ON_PERMISSION_REQ_TEST_001', 0, async () => {
      console.log('==========ON_PERMISSION_REQ_TEST_001 test start==========')
      let driver = Driver.create()
      await driver.delayMs(waitUiReadyMs)
      const CHANGE_TABS = await driver.findComponent(ON.text('设置页签'))
      await CHANGE_TABS.click()
      await driver.delayMs(waitUiReadyMs)
      const TAB = await driver.findComponent(ON.text('Goto onPermissionRequest'))
      await TAB.click()
      await driver.delayMs(waitUiReadyMs)
      const TRIGGER_BUTTON = await driver.findComponent(ON.text('TRIGGER'))
      await TRIGGER_BUTTON.click()
      await driver.delayMs(waitUiReadyMs)
      const primaryButton = await driver.findComponent(ON.text('deny'))
      await primaryButton.click()
      await driver.delayMs(waitUiReadyMs)
      const ON_PROMPT_EVENT_URL = await driver.findComponent(ON.id('ON_EVENT_URL'))
      const text: string = await ON_PROMPT_EVENT_URL.getText()
      console.log('ON_PROMPT_EVENT_URL', text)
      expect(text).assertEqual('index_permission_req.html')
      console.log('ON_PERMISSION_REQ_TEST_001 success')
      console.log('==========ON_PERMISSION_REQ_TEST_001 test end==========')
    })

    /*
    * @tc.number: ON_PERMISSION_REQ_TEST_002
    * @tc.name: onPermissionRequest
    * @tc.desc: 测试onPermissionRequest
    */
    it('ON_PERMISSION_REQ_TEST_002', 0, async () => {
      console.log('==========ON_PERMISSION_REQ_TEST_002 test start==========')
      let driver = Driver.create()
      await driver.delayMs(waitUiReadyMs)
      const PRIMARY_BUTTON_CLICK = await driver.findComponent(ON.id('ON_BUTTON_CLICK'))
      const text: string = await PRIMARY_BUTTON_CLICK.getText()
      console.log('PRIMARY_BUTTON_CLICK', text)
      expect(text).assertEqual('DENY_CLICKED')
      console.log('ON_PERMISSION_REQ_TEST_002 success')
      console.log('==========ON_PERMISSION_REQ_TEST_002 test end==========')
    })

    /*
    * @tc.number: ON_PERMISSION_REQ_TEST_003
    * @tc.name: onPermissionRequest
    * @tc.desc: 测试onPermissionRequest
    */
    it('ON_PERMISSION_REQ_TEST_003', 0, async () => {
      console.log('==========ON_PERMISSION_REQ_TEST_003 test start==========')
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
      console.log('ON_PERMISSION_REQ_TEST_003 success')
      console.log('==========ON_PERMISSION_REQ_TEST_003 test end==========')
    })

    /*
    * @tc.number: ON_PERMISSION_REQ_TEST_004
    * @tc.name: onPermissionRequest
    * @tc.desc: 测试onPermissionRequest
    */
    it('ON_PERMISSION_REQ_TEST_004', 0, async () => {
      console.log('==========ON_PERMISSION_REQ_TEST_004 test start==========')
      let driver = Driver.create()
      await driver.delayMs(waitUiReadyMs)
      const ON_EVENT_VALUE = await driver.findComponent(ON.id('ON_EVENT_VALUE'))
      const text: string = await ON_EVENT_VALUE.getText()
      console.log('ON_EVENT_VALUE', text)
      expect(text).assertContain('VIDEO_CAPTURE')
      expect(text).assertContain('AUDIO_CAPTURE')
      console.log('ON_PERMISSION_REQ_TEST_004 success')
      console.log('==========ON_PERMISSION_REQ_TEST_004 test end==========')
    })
  })
}