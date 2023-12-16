import { describe, it, expect, beforeAll, beforeEach, afterEach, afterAll } from '@ohos/hypium'
import { Driver, ON, MatchPattern } from '@ohos.UiTest'
import { startAbility, waitUiReadyMs } from '../utils/index'

export default function ZoomTest() {
  describe('ZoomTest', () => {

    /**
     * beforeAll: PreZoomTest at the test suite level, which are executed before the test suite is executed.
     */
    beforeAll(() => {
      console.log('##########PreZoomTest Test start##########');
      console.info("====>beforeAll: PreZoomTest are executed.");
    });

    /**
     * beforeEach: PreZoomTest at the test case level, which are executed before each test case is executed.
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
    * @tc.number: ZOOM_TEST_001
    * @tc.name: zoom
    * @tc.desc: 测试zoom
    */
    it('ZOOM_TEST_001', 0, async () => {
      console.log('==========ZOOM_TEST_001 test start==========')
      let driver = Driver.create()
      await driver.delayMs(waitUiReadyMs)
      const ZOOM_PRECISE = await driver.findComponent(ON.id('ZoomPrecise'))
      await ZOOM_PRECISE.click()
      await driver.delayMs(waitUiReadyMs)
      const PRECISE = await driver.findComponent(ON.text('150%'))
      await PRECISE.click()
      await driver.delayMs(waitUiReadyMs)
      const MY_VALUE = await driver.findComponent(ON.id('MY_VALUE'))
      const value = await MY_VALUE.getText()
      const MY_TIPS = await driver.findComponent(ON.id('MY_TIPS'))
      const tips = await MY_TIPS.getText()
      expect(value).assertContain('150%')
      expect(tips).assertContain('100 to 150')
      console.log('ZOOM_TEST_001 success')
      console.log('==========ZOOM_TEST_001 test end==========')
    })

    /*
     * @tc.number: ZOOM_TEST_002
     * @tc.name: zoom
     * @tc.desc: 测试zoom
     */
    it('ZOOM_TEST_002', 0, async () => {
      console.log('==========ZOOM_TEST_002 test start==========')
      let driver = Driver.create()
      await driver.delayMs(waitUiReadyMs)
      const ZOOM_PRECISE = await driver.findComponent(ON.id('ZoomPrecise'))
      await ZOOM_PRECISE.click()
      await driver.delayMs(waitUiReadyMs)
      const PRECISE = await driver.findComponent(ON.text('80%'))
      await PRECISE.click()
      await driver.delayMs(waitUiReadyMs)
      const MY_VALUE = await driver.findComponent(ON.id('MY_VALUE'))
      const value = await MY_VALUE.getText()
      const MY_TIPS = await driver.findComponent(ON.id('MY_TIPS'))
      const tips = await MY_TIPS.getText()
      expect(value).assertContain('120%')
      expect(tips).assertContain('150 to 120')
      console.log('ZOOM_TEST_002 success')
      console.log('==========ZOOM_TEST_002 test end==========')
    })

    /*
     * @tc.number: ZOOM_TEST_003
     * @tc.name: zoom
     * @tc.desc: 测试zoom
     */
    it('ZOOM_TEST_003', 0, async () => {
      console.log('==========ZOOM_TEST_003 test start==========')
      let driver = Driver.create()
      await driver.delayMs(waitUiReadyMs)
      const ZOOM_RESTORE = await driver.findComponent(ON.text('ZoomRestore'))
      await ZOOM_RESTORE.click()
      await driver.delayMs(waitUiReadyMs)
      const MY_VALUE = await driver.findComponent(ON.id('MY_VALUE'))
      const value = await MY_VALUE.getText()
      expect(value).assertContain('100%')
      console.log('ZOOM_TEST_003 success')
      console.log('==========ZOOM_TEST_003 test end==========')
    })

    /*
     * @tc.number: ZOOM_TEST_004
     * @tc.name: zoom
     * @tc.desc: 测试zoom
     */
    it('ZOOM_TEST_004', 0, async () => {
      console.log('==========ZOOM_TEST_004 test start==========')
      let driver = Driver.create()
      await driver.delayMs(waitUiReadyMs)
      const ZOOM_RANDOM = await driver.findComponent(ON.text('ZoomRandom'))
      await ZOOM_RANDOM.click()
      await driver.delayMs(waitUiReadyMs)
      const MY_VALUE = await driver.findComponent(ON.id('MY_VALUE'))
      const value = await MY_VALUE.getText()
      let numStr = value.trim().split(':')[1]
      numStr = numStr.split('%')[0]
      const num = parseInt(numStr)
      expect(num).assertLargerOrEqual(25)
      expect(num).assertLessOrEqual(200)
      console.log('ZOOM_TEST_004 success')
      console.log('==========ZOOM_TEST_004 test end==========')
    })
  })
}