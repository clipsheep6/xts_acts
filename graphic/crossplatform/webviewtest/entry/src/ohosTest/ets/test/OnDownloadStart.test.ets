import { describe, it, expect, beforeAll, beforeEach, afterEach, afterAll } from '@ohos/hypium'
import { Driver, ON } from '@ohos.UiTest'
import { startAbility, waitUiReadyMs } from '../utils/index'

export default function OnDownloadStartTest() {
  describe('OnDownloadStartTest', () => {

    /**
     * beforeAll: PreOnDownloadStartTest at the test suite level, which are executed before the test suite is executed.
     */
    beforeAll(async () => {
      console.log('##########OnDownloadStartTest Test start##########');
      console.info("====>beforeAll: PreOnDownloadStartTest are executed.");
      await startAbility('com.example.webviewtest', 'EntryAbility')
      const driver = Driver.create()
      await driver.delayMs(waitUiReadyMs)
    });

    /**
     * beforeEach: PreOnDownloadStartTest at the test case level, which are executed before each test case is executed.
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
      console.log('##########OnDownloadStartTest Test end##########');
    });


    /*
    * @tc.number: ON_DOWNLOAD_START_TEST_001
    * @tc.name: onDownloadStart
    * @tc.desc: 测试onDownloadStart
    */
    it('ON_DOWNLOAD_START_TEST_001', 0, async () => {
      console.log('==========ON_DOWNLOAD_START_TEST_001 test start==========')
      let driver = Driver.create()
      await driver.delayMs(waitUiReadyMs)
      const CHANGE_TABS = await driver.findComponent(ON.text('设置页签'))
      await CHANGE_TABS.click()
      await driver.delayMs(waitUiReadyMs)
      const TAB = await driver.findComponent(ON.text('Goto onDownloadStart'))
      await TAB.click()
      await driver.delayMs(2000)
      const TRIGGER = await driver.findComponent(ON.text('TRIGGER'))
      await TRIGGER.click()
      await driver.delayMs(waitUiReadyMs * 2)
      const ON_DOWNLOAD_EVENT_URL = await driver.findComponent(ON.id('ON_EVENT_URL'))
      const url: string = await ON_DOWNLOAD_EVENT_URL.getText()
      console.log('ON_DOWNLOAD_EVENT_URL', url)
      expect(url).assertEqual('https://dldir1.qq.com/qqfile/qq/PCQQ9.7.18/QQ9.7.18.29256.exe')
      const ON_DOWNLOAD_EVENT_VALUE = await driver.findComponent(ON.id('ON_EVENT_VALUE'))
      const value: string = await ON_DOWNLOAD_EVENT_VALUE.getText()
      console.log('ON_DOWNLOAD_EVENT_VALUE', value)
      expect(value).assertContain('application')
      console.log('ON_DOWNLOAD_START_TEST_001 success')
      console.log('==========ON_DOWNLOAD_START_TEST_001 test end==========')
    })

    /*
    * @tc.number: MEDIA_PLAY_GESTURE_ACCESS_TEST_001
    * @tc.name: mediaPlayGestureAccess
    * @tc.desc: 测试mediaPlayGestureAccess
    */
    /* IOS不支持mediaPlayGestureAccess */
    it('MEDIA_PLAY_GESTURE_ACCESS_TEST_001', 0, async () => {
      console.log('==========MEDIA_PLAY_GESTURE_ACCESS_TEST_001 test start==========')
      let driver = Driver.create()
      await driver.delayMs(waitUiReadyMs)
      const CHANGE_TABS = await driver.findComponent(ON.text('设置页签'))
      await CHANGE_TABS.click()
      await driver.delayMs(waitUiReadyMs)
      const TAB = await driver.findComponent(ON.text('Goto playVideo'))
      await TAB.click()
      await driver.delayMs(2000)
      const UA = await driver.findComponent(ON.text('UA'))
      await UA.click()
      await driver.delayMs(waitUiReadyMs)
      const USER_AGENT = await driver.findComponent(ON.id('USER_AGENT'))
      const uaText = await USER_AGENT.getText()
      if (uaText.includes('OpenHarmony') || uaText.includes('Android')) {
        const TRIGGER = await driver.findComponent(ON.text('TRIGGER'))
        await TRIGGER.click()
        await driver.delayMs(waitUiReadyMs)
        const ON_EVENT_VALUE = await driver.findComponent(ON.id('ON_EVENT_VALUE'))
        const value = await ON_EVENT_VALUE.getText()
        expect(value).assertContain('是否播放: 是')
      }
      console.log('MEDIA_PLAY_GESTURE_ACCESS_TEST_001 success')
      console.log('==========MEDIA_PLAY_GESTURE_ACCESS_TEST_001 test end==========')
    })
  })
}