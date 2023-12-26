import { describe, it, expect, beforeAll, beforeEach, afterEach, afterAll } from '@ohos/hypium'
import { Driver, ON, MatchPattern } from '@ohos.UiTest'
import { startAbility, waitUiReadyMs } from '../utils/index'

export default function ScrollTest() {
  describe('ScrollTest', () => {

    /**
     * beforeAll: PreScrollTest at the test suite level, which are executed before the test suite is executed.
     */
    beforeAll(async () => {
      console.log('##########ScrollTest Test start##########');
      console.info("====>beforeAll: PreScrollTest are executed.");
      await startAbility('com.example.webviewtest2', 'EntryAbility')
      const driver = Driver.create()
      await driver.delayMs(waitUiReadyMs)
    });

    /**
     * beforeEach: PreScrollTest at the test case level, which are executed before each test case is executed.
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
      console.log('##########PageControlTest Test end##########');
    });

    /*
     * @tc.number: SCROLL_TO_TEST_001
     * @tc.name: scrollTo
     * @tc.desc: 测试scrollTo
     */
    it('SCROLL_TO_TEST_001', 0, async () => {
      console.log('==========SCROLL_TO_TEST_001 test start==========')
      let driver = Driver.create()
      await driver.delayMs(waitUiReadyMs)
      const CHANGE_TABS = await driver.findComponent(ON.text('设置页签'))
      await CHANGE_TABS.click()
      await driver.delayMs(waitUiReadyMs)
      const TAB = await driver.findComponent(ON.text('Goto HTMLControl'))
      await TAB.click()
      await driver.delayMs(waitUiReadyMs)
      const SHOW_SCROLL = await driver.findComponent(ON.text('scroll'))
      await SHOW_SCROLL.click()
      await driver.delayMs(waitUiReadyMs)
      const SCROLL_TO_PRECISE = await driver.findComponent(ON.text('Scroll Precise'))
      await SCROLL_TO_PRECISE.click()
      await driver.delayMs(waitUiReadyMs)
      const SCROLL_TO = await driver.findComponent(ON.text('滚动到指定位置'))
      await SCROLL_TO.click()
      await driver.delayMs(waitUiReadyMs)
      let precise = await driver.findComponent(ON.text('100'))
      await precise.click()
      await driver.delayMs(waitUiReadyMs)
      const MY_VALUE = await driver.findComponent(ON.id('MY_VALUE'))
      const value = await MY_VALUE.getText()
      expect(value).assertEqual('scroll to: 100,100')
      const MY_TIPS = await driver.findComponent(ON.id('MY_TIPS'))
      const tips = await MY_TIPS.getText()
      expect(tips).assertEqual('onScroll -> 100,100')
      console.log('SCROLL_TO_TEST_001 success')
      console.log('==========SCROLL_TO_TEST_001 test end==========')
    })


    /*
     * @tc.number: SCROLL_TO_TEST_002
     * @tc.name: scrollTo
     * @tc.desc: 测试scrollTo
     */
    it('SCROLL_TO_TEST_002', 0, async () => {
      console.log('==========SCROLL_TO_TEST_002 test start==========')
      let driver = Driver.create()
      await driver.delayMs(waitUiReadyMs)
      const RESTORE = await driver.findComponent(ON.text('Restore'))
      await RESTORE.click()
      await driver.delayMs(waitUiReadyMs)
      let MY_VALUE = await driver.findComponent(ON.id('MY_VALUE'))
      let value = await MY_VALUE.getText()
      expect(value).assertEqual('scroll to: 0,0')
      let MY_TIPS = await driver.findComponent(ON.id('MY_TIPS'))
      let tips = await MY_TIPS.getText()
      expect(tips).assertEqual('onScroll -> 0,0')
      const SCROLL_TO_PRECISE = await driver.findComponent(ON.text('Scroll Precise'))
      await SCROLL_TO_PRECISE.click()
      await driver.delayMs(waitUiReadyMs)
      const SCROLL_TO = await driver.findComponent(ON.text('滚动到指定位置'))
      await SCROLL_TO.click()
      await driver.delayMs(waitUiReadyMs)
      let precise = await driver.findComponent(ON.text('200'))
      await precise.click()
      await driver.delayMs(waitUiReadyMs)
      MY_VALUE = await driver.findComponent(ON.id('MY_VALUE'))
      value = await MY_VALUE.getText()
      expect(value).assertEqual('scroll to: 200,200')
      MY_TIPS = await driver.findComponent(ON.id('MY_TIPS'))
      tips = await MY_TIPS.getText()
      expect(tips).assertEqual('onScroll -> 200,200')
      console.log('SCROLL_TO_TEST_002 success')
      console.log('==========SCROLL_TO_TEST_002 test end==========')
    })

    /*
     * @tc.number: SCROLL_TO_TEST_003
     * @tc.name: scrollTo
     * @tc.desc: 测试scrollTo
     */
    it('SCROLL_TO_TEST_003', 0, async () => {
      console.log('==========SCROLL_TO_TEST_003 test start==========')
      let driver = Driver.create()
      await driver.delayMs(waitUiReadyMs)
      const RESTORE = await driver.findComponent(ON.text('Restore'))
      await RESTORE.click()
      await driver.delayMs(waitUiReadyMs)
      let MY_VALUE = await driver.findComponent(ON.id('MY_VALUE'))
      let value = await MY_VALUE.getText()
      expect(value).assertEqual('scroll to: 0,0')
      let MY_TIPS = await driver.findComponent(ON.id('MY_TIPS'))
      let tips = await MY_TIPS.getText()
      expect(tips).assertEqual('onScroll -> 0,0')
      const SCROLL_TO_PRECISE = await driver.findComponent(ON.text('Scroll Precise'))
      await SCROLL_TO_PRECISE.click()
      await driver.delayMs(waitUiReadyMs)
      let SCROLL_TO = await driver.findComponent(ON.text('滚动到指定位置'))
      await SCROLL_TO.click()
      await driver.delayMs(waitUiReadyMs)
      const precise_100 = await driver.findComponent(ON.text('100'))
      await precise_100.click()
      await driver.delayMs(waitUiReadyMs)
      MY_VALUE = await driver.findComponent(ON.id('MY_VALUE'))
      value = await MY_VALUE.getText()
      expect(value).assertEqual('scroll to: 100,100')
      MY_TIPS = await driver.findComponent(ON.id('MY_TIPS'))
      tips = await MY_TIPS.getText()
      expect(tips).assertEqual('onScroll -> 100,100')
      console.log('SCROLL_TO_TEST_003 success')
      console.log('==========SCROLL_TO_TEST_003 test end==========')
    })

    /*
     * @tc.number: SCROLL_TO_TEST_004
     * @tc.name: scrollTo
     * @tc.desc: 测试scrollTo
     */
    it('SCROLL_TO_TEST_004', 0, async () => {
      console.log('==========SCROLL_TO_TEST_004 test start==========')
      let driver = Driver.create()
      await driver.delayMs(waitUiReadyMs)
      const RESTORE = await driver.findComponent(ON.text('Restore'))
      await RESTORE.click()
      await driver.delayMs(waitUiReadyMs)
      let MY_VALUE = await driver.findComponent(ON.id('MY_VALUE'))
      let value = await MY_VALUE.getText()
      expect(value).assertEqual('scroll to: 0,0')
      let MY_TIPS = await driver.findComponent(ON.id('MY_TIPS'))
      let tips = await MY_TIPS.getText()
      expect(tips).assertEqual('onScroll -> 0,0')
      const SCROLL_TO_RANDOM = await driver.findComponent(ON.text('ScrollRandom'))
      await SCROLL_TO_RANDOM.click()
      await driver.delayMs(waitUiReadyMs)
      let SCROLL_TO = await driver.findComponent(ON.text('滚动到指定位置'))
      await SCROLL_TO.click()
      await driver.delayMs(waitUiReadyMs)
      MY_VALUE = await driver.findComponent(ON.id('MY_VALUE'))
      value = await MY_VALUE.getText()
      expect(value).assertContain('scroll to')
      const loc = value.trim().split(':')[1].split(',')
      expect(loc[0]).assertLessOrEqual(1000)
      expect(loc[0]).assertLargerOrEqual(0)
      expect(loc[1]).assertLessOrEqual(1000)
      expect(loc[1]).assertLargerOrEqual(0)
      console.log('SCROLL_TO_TEST_004 success')
      console.log('==========SCROLL_TO_TEST_004 test end==========')
    })

    /*
     * @tc.number: SCROLL_BY_TEST_001
     * @tc.name: scrollBy
     * @tc.desc: 测试scrollBy
     */
    it('SCROLL_BY_TEST_001', 0, async () => {
      console.log('==========SCROLL_BY_TEST_001 test start==========')
      let driver = Driver.create()
      await driver.delayMs(waitUiReadyMs)
      const RESTORE = await driver.findComponent(ON.text('Restore'))
      await RESTORE.click()
      await driver.delayMs(waitUiReadyMs)
      let MY_VALUE = await driver.findComponent(ON.id('MY_VALUE'))
      let value = await MY_VALUE.getText()
      expect(value).assertEqual('scroll to: 0,0')
      const SCROLL_BY_PRECISE = await driver.findComponent(ON.text('Scroll Precise'))
      await SCROLL_BY_PRECISE.click()
      await driver.delayMs(waitUiReadyMs)
      const SCROLL_BY = await driver.findComponent(ON.text('滚动指定偏移量'))
      await SCROLL_BY.click()
      await driver.delayMs(waitUiReadyMs)
      let precise = await driver.findComponent(ON.text('100'))
      await precise.click()
      await driver.delayMs(waitUiReadyMs)
      MY_VALUE = await driver.findComponent(ON.id('MY_VALUE'))
      value = await MY_VALUE.getText()
      expect(value).assertEqual('水平偏移: 100, 垂直偏移: 100')
      console.log('SCROLL_BY_TEST_001 success')
      console.log('==========SCROLL_BY_TEST_001 test end==========')
    })

    /*
     * @tc.number: SCROLL_BY_TEST_002
     * @tc.name: scrollBy
     * @tc.desc: 测试scrollBy
     */
    it('SCROLL_BY_TEST_002', 0, async () => {
      console.log('==========SCROLL_BY_TEST_002 test start==========')
      let driver = Driver.create()
      await driver.delayMs(waitUiReadyMs)
      const RESTORE = await driver.findComponent(ON.text('Restore'))
      await RESTORE.click()
      await driver.delayMs(waitUiReadyMs)
      let MY_VALUE = await driver.findComponent(ON.id('MY_VALUE'))
      let value = await MY_VALUE.getText()
      expect(value).assertEqual('scroll to: 0,0')
      const SCROLL_BY_PRECISE = await driver.findComponent(ON.text('Scroll Precise'))
      await SCROLL_BY_PRECISE.click()
      await driver.delayMs(waitUiReadyMs)
      const SCROLL_BY = await driver.findComponent(ON.text('滚动指定偏移量'))
      await SCROLL_BY.click()
      await driver.delayMs(waitUiReadyMs)
      let precise = await driver.findComponent(ON.text('200'))
      await precise.click()
      await driver.delayMs(waitUiReadyMs)
      MY_VALUE = await driver.findComponent(ON.id('MY_VALUE'))
      value = await MY_VALUE.getText()
      expect(value).assertEqual('水平偏移: 200, 垂直偏移: 200')
      console.log('SCROLL_BY_TEST_002 success')
      console.log('==========SCROLL_BY_TEST_002 test end==========')
    })

    /*
     * @tc.number: SCROLL_BY_TEST_003
     * @tc.name: scrollBy
     * @tc.desc: 测试scrollBy
     */
    it('SCROLL_BY_TEST_003', 0, async () => {
      console.log('==========SCROLL_BY_TEST_003 test start==========')
      let driver = Driver.create()
      await driver.delayMs(waitUiReadyMs)
      const RESTORE = await driver.findComponent(ON.text('Restore'))
      await RESTORE.click()
      await driver.delayMs(waitUiReadyMs)
      let MY_VALUE = await driver.findComponent(ON.id('MY_VALUE'))
      let value = await MY_VALUE.getText()
      expect(value).assertEqual('scroll to: 0,0')
      const SCROLL_BY_RANDOM = await driver.findComponent(ON.text('ScrollRandom'))
      await SCROLL_BY_RANDOM.click()
      await driver.delayMs(waitUiReadyMs)
      const SCROLL_BY = await driver.findComponent(ON.text('滚动指定偏移量'))
      await SCROLL_BY.click()
      await driver.delayMs(waitUiReadyMs)
      MY_VALUE = await driver.findComponent(ON.id('MY_VALUE'))
      value = await MY_VALUE.getText()
      expect(value).assertContain('水平偏移')
      expect(value).assertContain('垂直偏移')
      const all = value.trim().split(',')
      const horizontal_offset = all[0].split(':')[1]
      const vertical_offset = all[1].split(':')[1]
      expect(horizontal_offset).assertLessOrEqual(1000)
      expect(horizontal_offset).assertLargerOrEqual(0)
      expect(vertical_offset).assertLessOrEqual(1000)
      expect(vertical_offset).assertLargerOrEqual(0)
      console.log('SCROLL_BY_TEST_003 success')
      console.log('==========SCROLL_BY_TEST_003 test end==========')
    })

    /*
     * @tc.number: CUSTOM_USER_AGENT_001
     * @tc.name: setCustomUserAgent
     * @tc.desc: 测试setCustomUserAgent
     */
    it('CUSTOM_USER_AGENT_001', 0, async () => {
      console.log('==========CUSTOM_USER_AGENT_001 test start==========')
      let driver = Driver.create()
      await driver.delayMs(waitUiReadyMs)
      const SET = await driver.findComponent(ON.text('setUserAgent'))
      await SET.click()
      await driver.delayMs(waitUiReadyMs)
      const APPLE = await driver.findComponent(ON.text('苹果'))
      await APPLE.click()
      await driver.delayMs(waitUiReadyMs)
      const MY_VALUE = await driver.findComponent(ON.id('MY_VALUE'))
      const value = await MY_VALUE.getText()
      expect(value).assertContain('设置')
      expect(value).assertContain('苹果')
      console.log('CUSTOM_USER_AGENT_001 success')
      console.log('==========CUSTOM_USER_AGENT_001 test end==========')
    })

    /*
    * @tc.number: CUSTOM_USER_AGENT_002
    * @tc.name: getCustomUserAgent
    * @tc.desc: 测试getCustomUserAgent
    */
    it('CUSTOM_USER_AGENT_002', 0, async () => {
      console.log('==========CUSTOM_USER_AGENT_002 test start==========')
      let driver = Driver.create()
      await driver.delayMs(waitUiReadyMs)
      const GET = await driver.findComponent(ON.text('getUserAgent'))
      await GET.click()
      await driver.delayMs(waitUiReadyMs)
      const MY_VALUE = await driver.findComponent(ON.id('MY_VALUE'))
      const value = await MY_VALUE.getText()
      expect(value).assertContain('获取')
      expect(value).assertContain('苹果')
      console.log('CUSTOM_USER_AGENT_002 success')
      console.log('==========CUSTOM_USER_AGENT_002 test end==========')
    })

    /*
     * @tc.number: CUSTOM_USER_AGENT_003
     * @tc.name: setCustomUserAgent
     * @tc.desc: 测试setCustomUserAgent
     */
    it('CUSTOM_USER_AGENT_003', 0, async () => {
      console.log('==========CUSTOM_USER_AGENT_003 test start==========')
      let driver = Driver.create()
      await driver.delayMs(waitUiReadyMs)
      const SET = await driver.findComponent(ON.text('setUserAgent'))
      await SET.click()
      await driver.delayMs(waitUiReadyMs)
      const APPLE = await driver.findComponent(ON.text('西瓜'))
      await APPLE.click()
      await driver.delayMs(waitUiReadyMs)
      const MY_VALUE = await driver.findComponent(ON.id('MY_VALUE'))
      const value = await MY_VALUE.getText()
      expect(value).assertContain('设置')
      expect(value).assertContain('西瓜')
      console.log('CUSTOM_USER_AGENT_003 success')
      console.log('==========CUSTOM_USER_AGENT_003 test end==========')
    })

    /*
    * @tc.number: CUSTOM_USER_AGENT_004
    * @tc.name: getCustomUserAgent
    * @tc.desc: 测试getCustomUserAgent
    */
    it('CUSTOM_USER_AGENT_004', 0, async () => {
      console.log('==========CUSTOM_USER_AGENT_004 test start==========')
      let driver = Driver.create()
      await driver.delayMs(waitUiReadyMs)
      const GET = await driver.findComponent(ON.text('getUserAgent'))
      await GET.click()
      await driver.delayMs(waitUiReadyMs)
      const MY_VALUE = await driver.findComponent(ON.id('MY_VALUE'))
      const value = await MY_VALUE.getText()
      expect(value).assertContain('获取')
      expect(value).assertContain('西瓜')
      console.log('CUSTOM_USER_AGENT_004 success')
      console.log('==========CUSTOM_USER_AGENT_004 test end==========')
    })
  })
}