import { describe, it, expect, beforeAll, beforeEach, afterEach, afterAll } from '@ohos/hypium'
import { Driver, ON, MatchPattern } from '@ohos.UiTest'
import { startAbility, waitUiReadyMs } from '../utils/index'

export default function OnControllerAttachedTest() {
  describe('OnControllerAttachedTest', () => {

    /**
     * beforeAll: PreOnControllerAttachedTest at the test suite level, which are executed before the test suite is executed.
     */
    beforeAll(() => {
      console.log('##########PageControlTest Test start##########');
      console.info("====>beforeAll: PreOnControllerAttachedTest are executed.");
    });

    /**
     * beforeEach: PreOnControllerAttachedTest at the test case level, which are executed before each test case is executed.
     */
    beforeEach(async () => {
      await startAbility('com.example.webviewtest2', 'EntryAbility')
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
      console.log('##########PageControlTest Test end##########');
    });

    /*
     * @tc.number: ON_CONTROLLER_ATTACHED_TEST_001
     * @tc.name: onControllerAttached
     * @tc.desc: 测试onControllerAttached
     */
    it('ON_CONTROLLER_ATTACHED_TEST_001', 0, async () => {
      console.log('==========ON_CONTROLLER_ATTACHED_TEST_001 test start==========')
      let driver = Driver.create()
      await driver.delayMs(waitUiReadyMs)
      const CHANGE_TABS = await driver.findComponent(ON.text('设置页签'))
      await CHANGE_TABS.click()
      await driver.delayMs(waitUiReadyMs)
      const TAB = await driver.findComponent(ON.text('Goto HTMLControl'))
      await TAB.click()
      await driver.delayMs(waitUiReadyMs)
      const TO_STRING_RESULT = await driver.findComponent(ON.id('MY_TO_STRING'))
      const result: string = await TO_STRING_RESULT.getText()
      expect(result).assertEqual('index_controller.html')
      console.log('ON_CONTROLLER_ATTACHED_TEST_001 success')
      console.log('==========ON_CONTROLLER_ATTACHED_TEST_001 test end==========')
    })

    /*
    * @tc.number: ON_CONTROLLER_ATTACHED_TEST_002
    * @tc.name: onControllerAttached
    * @tc.desc: 测试onControllerAttached
    */
    it('ON_CONTROLLER_ATTACHED_TEST_002', 0, async () => {
      console.log('==========ON_CONTROLLER_ATTACHED_TEST_002 test start==========')
      let driver = Driver.create()
      await driver.delayMs(waitUiReadyMs)
      const MY_COUNT_RESULT = await driver.findComponent(ON.id('MY_COUNT'))
      const result: string = await MY_COUNT_RESULT.getText()
      const id = result.trim().split(':')[1]
      expect(id).not().assertNull()
      console.log('ON_CONTROLLER_ATTACHED_TEST_002 success')
      console.log('==========ON_CONTROLLER_ATTACHED_TEST_002 test end==========')
    })

    /*
     * @tc.number: GET_PAGE_HEIGHT_TEST_001
     * @tc.name: getPageHeight
     * @tc.desc: 测试getPageHeight
     */
    it('GET_PAGE_HEIGHT_TEST_001', 0, async () => {
      console.log('==========GET_PAGE_HEIGHT_TEST_001 test start==========')
      let driver = Driver.create()
      await driver.delayMs(waitUiReadyMs)
      const ZOOM_BUTTON = await driver.findComponent(ON.text('zoom'))
      await ZOOM_BUTTON.click()
      await driver.delayMs(waitUiReadyMs)
      const GET_BUTTON = await driver.findComponent(ON.text('GET_HEIGHT'))
      await GET_BUTTON.click()
      await driver.delayMs(waitUiReadyMs)
      const MY_COUNT = await driver.findComponent(ON.id('MY_VALUE'))
      const heightStr = await MY_COUNT.getText()
      const height = Number(heightStr.trim().split(':')[1])
      expect(height).assertEqual(300)
      console.log('GET_PAGE_HEIGHT_TEST_001 success')
      console.log('==========GET_PAGE_HEIGHT_TEST_001 test end==========')
    })
  })
}