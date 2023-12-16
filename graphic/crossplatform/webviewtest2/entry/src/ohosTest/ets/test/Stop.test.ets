import { describe, it, expect, beforeAll, beforeEach, afterEach, afterAll } from '@ohos/hypium'
import { Driver, ON, MatchPattern } from '@ohos.UiTest'
import { startAbility, waitUiReadyMs } from '../utils/index'

export default function StopTest() {
  describe('StopTest', () => {

    /**
     * beforeAll: PrePageControlTest at the test suite level, which are executed before the test suite is executed.
     */
    beforeAll(() => {
      console.log('##########PreStopTest Test start##########');
      console.info("====>beforeAll: PrePageControlTest are executed.");
    });

    /**
     * beforeEach: PrePageControlTest at the test case level, which are executed before each test case is executed.
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
      console.log('##########PreStopTest Test end##########');
    });

    /*
     * @tc.number: STOP_TEST_001
     * @tc.name: stop
     * @tc.desc: 测试stop
     */
    it('STOP_TEST_001', 0, async () => {
      console.log('==========STOP_TEST_001 test start==========')
      let driver = Driver.create()
      await driver.delayMs(waitUiReadyMs)
      const STOP = await driver.findComponent(ON.text('10毫秒后Stop'))
      await STOP.click()
      await driver.delayMs(waitUiReadyMs)
      const ALERT_DIALOG_OK = await driver.findComponent(ON.text('ok'))
      await ALERT_DIALOG_OK.click()
      await driver.delayMs(waitUiReadyMs)
      const MY_VALUE = await driver.findComponent(ON.id('MY_VALUE'))
      const text = await MY_VALUE.getText()
      const MY_TIPS = await driver.findComponent(ON.id('MY_TIPS'))
      const tips = await MY_TIPS.getText()
      expect(text).assertEqual('停止加载Confirm页面')
      expect(tips).assertEqual('newProgress: 100')
      console.log('STOP_TEST_001 success')
      console.log('==========STOP_TEST_001 test end==========')
    })

    /*
     * @tc.number: STOP_TEST_002
     * @tc.name: stop
     * @tc.desc: 测试stop
     */
    it('STOP_TEST_002', 0, async () => {
      console.log('==========STOP_TEST_002 test start==========')
      let driver = Driver.create()
      await driver.delayMs(waitUiReadyMs)
      const NOT_STOP = await driver.findComponent(ON.text('不调用Stop'))
      await NOT_STOP.click()
      await driver.delayMs(waitUiReadyMs * 2)
      const MY_TO_STRING = await driver.findComponent(ON.id('MY_TO_STRING'))
      const text = await MY_TO_STRING.getText()
      expect(text).assertEqual('pageConfirm loaded')
      console.log('STOP_TEST_002 success')
      console.log('==========STOP_TEST_002 test end==========')
    })

    /*
     * @tc.number: HORIZONTAL_SCROLLBAR_ACCESS_TEST_001
     * @tc.name: horizontalScrollBarAccess
     * @tc.desc: 测试horizontalScrollBarAccess
     */
    it('HORIZONTAL_SCROLLBAR_ACCESS_TEST_001', 0, async () => {
      console.log('==========HORIZONTAL_SCROLLBAR_ACCESS_TEST_001 test start==========')
      let driver = Driver.create()
      await driver.delayMs(waitUiReadyMs)
      const SHOW_SCROLL = await driver.findComponent(ON.text('scroll'))
      await SHOW_SCROLL.click()
      await driver.delayMs(waitUiReadyMs)
      const MY_VALUE = await driver.findComponent(ON.id('MY_VALUE'))
      const SCROLLABLE = await driver.findComponent(ON.text('scrollable'))
      await SCROLLABLE.click()
      await driver.delayMs(waitUiReadyMs)
      const SHOW_HORIZONTAL = await driver.findComponent(ON.text('显示横轴滚动条'))
      await SHOW_HORIZONTAL.click()
      await driver.delayMs(waitUiReadyMs)
      const value = await MY_VALUE.getText()
      expect(value).assertEqual('horizontal scrollbar is show,vertical scrollbar is hide')
      console.log('HORIZONTAL_SCROLLBAR_ACCESS_TEST_001 success')
      console.log('==========HORIZONTAL_SCROLLBAR_ACCESS_TEST_001 test end==========')
    })

    /*
    * @tc.number: HORIZONTAL_SCROLLBAR_ACCESS_TEST_002
    * @tc.name: horizontalScrollBarAccess
    * @tc.desc: 测试horizontalScrollBarAccess
    */
    it('HORIZONTAL_SCROLLBAR_ACCESS_TEST_002', 0, async () => {
      console.log('==========HORIZONTAL_SCROLLBAR_ACCESS_TEST_002 test start==========')
      let driver = Driver.create()
      await driver.delayMs(waitUiReadyMs)
      const MY_VALUE = await driver.findComponent(ON.id('MY_VALUE'))
      const SCROLLABLE = await driver.findComponent(ON.text('scrollable'))
      await SCROLLABLE.click()
      await driver.delayMs(waitUiReadyMs)
      const HIDE_HORIZONTAL = await driver.findComponent(ON.text('隐藏横轴滚动条'))
      await HIDE_HORIZONTAL.click()
      await driver.delayMs(waitUiReadyMs)
      const value = await MY_VALUE.getText()
      expect(value).assertEqual('horizontal scrollbar is hide,vertical scrollbar is hide')
      console.log('HORIZONTAL_SCROLLBAR_ACCESS_TEST_002 success')
      console.log('==========HORIZONTAL_SCROLLBAR_ACCESS_TEST_002 test end==========')
    })

    /*
     * @tc.number: VERTICAL_SCROLLBAR_ACCESS_TEST_001
     * @tc.name: verticalScrollBarAccess
     * @tc.desc: 测试verticalScrollBarAccess
     */
    it('VERTICAL_SCROLLBAR_ACCESS_TEST_001', 0, async () => {
      console.log('==========VERTICAL_SCROLLBAR_ACCESS_TEST_001 test start==========')
      let driver = Driver.create()
      await driver.delayMs(waitUiReadyMs)
      const MY_VALUE = await driver.findComponent(ON.id('MY_VALUE'))
      const SCROLLABLE = await driver.findComponent(ON.text('scrollable'))
      await SCROLLABLE.click()
      await driver.delayMs(waitUiReadyMs)
      const SHOW_VERTICAL = await driver.findComponent(ON.text('显示纵轴滚动条'))
      await SHOW_VERTICAL.click()
      await driver.delayMs(waitUiReadyMs)
      const value = await MY_VALUE.getText()
      expect(value).assertEqual('horizontal scrollbar is hide,vertical scrollbar is show')
      console.log('VERTICAL_SCROLLBAR_ACCESS_TEST_001 success')
      console.log('==========VERTICAL_SCROLLBAR_ACCESS_TEST_001 test end==========')
    })

    /*
    * @tc.number: VERTICAL_SCROLLBAR_ACCESS_TEST_002
    * @tc.name: verticalScrollBarAccess
    * @tc.desc: 测试verticalScrollBarAccess
    */
    it('VERTICAL_SCROLLBAR_ACCESS_TEST_002', 0, async () => {
      console.log('==========VERTICAL_SCROLLBAR_ACCESS_TEST_002 test start==========')
      let driver = Driver.create()
      await driver.delayMs(waitUiReadyMs)
      const MY_VALUE = await driver.findComponent(ON.id('MY_VALUE'))
      const SCROLLABLE = await driver.findComponent(ON.text('scrollable'))
      await SCROLLABLE.click()
      await driver.delayMs(waitUiReadyMs)
      const HIDE_VERTICAL = await driver.findComponent(ON.text('隐藏纵轴滚动条'))
      await HIDE_VERTICAL.click()
      await driver.delayMs(waitUiReadyMs)
      const value = await MY_VALUE.getText()
      expect(value).assertEqual('horizontal scrollbar is hide,vertical scrollbar is hide')
      console.log('VERTICAL_SCROLLBAR_ACCESS_TEST_002 success')
      console.log('==========VERTICAL_SCROLLBAR_ACCESS_TEST_002 test end==========')
    })

    /*
     * @tc.number: GET_PAGE_HEIGHT_TEST_002
     * @tc.name: getPageHeight
     * @tc.desc: 测试getPageHeight
     */
    it('GET_PAGE_HEIGHT_TEST_002', 0, async () => {
      console.log('==========GET_PAGE_HEIGHT_TEST_002 test start==========')
      let driver = Driver.create()
      await driver.delayMs(waitUiReadyMs)
      const GET_BUTTON = await driver.findComponent(ON.text('GET_HEIGHT'))
      await GET_BUTTON.click()
      await driver.delayMs(waitUiReadyMs)
      const MY_COUNT = await driver.findComponent(ON.id('MY_COUNT'))
      const heightStr = await MY_COUNT.getText()
      const height = Number(heightStr.trim().split(':')[1])
      expect(height).assertLarger(1000)
      console.log('GET_PAGE_HEIGHT_TEST_002 success')
      console.log('==========GET_PAGE_HEIGHT_TEST_002 test end==========')
    })
  })
}