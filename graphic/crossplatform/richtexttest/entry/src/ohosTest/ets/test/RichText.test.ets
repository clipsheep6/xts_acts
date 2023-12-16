import { describe, it, expect, beforeAll, beforeEach, afterEach, afterAll } from '@ohos/hypium'
import { Driver, MatchPattern, ON } from '@ohos.UiTest'
import { startAbility, waitUiReadyMs } from '../utils/index'

export default function RichTextTest() {
  describe('RichTextTest', () => {
    /**
     * beforeAll: PreRichTextTest at the test suite level, which are executed before the test suite is executed.
     */
    beforeAll(async () => {
      await startAbility('com.example.richtexttest', 'EntryAbility')
      let driver = Driver.create()
      await driver.delayMs(waitUiReadyMs)
      console.log('##########RichTextTest Test start##########');
      console.info("====>beforeAll: PreRichTextTest are executed.");
    });

    /**
     * beforeEach: PreRichTextbeTest at the test case level, which are executed before each test case is executed.
     */
    beforeEach(async () => {
      await startAbility('com.example.richtexttest', 'EntryAbility')
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
      console.log('##########RichTextTest Test end##########');
    });

    /*
     * @tc.number: RICHTEXT_TEST_001
     * @tc.name: RICHTEXT_TEST
     * @tc.desc: 测试RichText
     */
    it('RICHTEXT_TEST_001', 0, async () => {
      console.log('==========RICHTEXT_TEST_001 test start==========')
      let driver = Driver.create()
      await driver.delayMs(waitUiReadyMs)
      const RICHTEXT = await driver.findComponent(ON.text('下划线', MatchPattern.CONTAINS))
      const text: string = await RICHTEXT.getText()
      console.log('RICHTEXT', text)
      let data: string = '<h1 style="text-align: center;">h1标题</h1>' +
        '<h1 style="text-align: center;"><i>h1斜体</i></h1>' +
        '<h1 style="text-align: center;"><u>h1下划线</u></h1>' +
        '<h2 style="text-align: center;">h2标题</h2>' +
        '<h3 style="text-align: center;">h3标题</h3>' +
        '<p style="text-align: center;">p常规</p><hr/>' +
        '<div style="width: 500px;height: 500px;border: 1px solid;margin: 0auto;">' +
        '<p style="font-size: 35px;text-align: center;font-weight: bold; color: rgb(24,78,228)">字体大小35px,行高45px</p>' +
        '<p style="background-color: #e5e5e5;line-height: 45px;font-size: 35px;text-indent: 2em;">' +
        '<p>这是一段文字这是一段文字这是一段文字这是一段文字这是一段文字这是一段文字这是一段文字这是一段文字这是一段文字</p>';

      expect(text).assertEqual(data)
      console.log('RICHTEXT_TEST_001 success')
      console.log('==========RICHTEXT_TEST_001 test end==========')
    })

    /*
     * @tc.number: RICHTEXT_TEST_002
     * @tc.name: RICHTEXT_TEST
     * @tc.desc: 测试OnStart
     */
    it('RICHTEXT_TEST_002', 0, async () => {
      console.log('==========RICHTEXT_TEST_002 test start==========')
      let driver = Driver.create()
      await driver.delayMs(waitUiReadyMs)
      const OnStart = await driver.findComponent(ON.text('OnStart', MatchPattern.CONTAINS))
      const text: string = await OnStart.getText()
      console.log('OnStart', text)
      expect(text).assertEqual('<h1 style="text-align: center;">OnStart Be triggered</h1>')
      console.log('RICHTEXT_TEST_002 success')
      console.log('==========RICHTEXT_TEST_002 test end==========')
    })

    /*
    * @tc.number: RICHTEXT_TEST_003
    * @tc.name: RICHTEXT_TEST
    * @tc.desc: 测试OnComplete
    */
    it('RICHTEXT_TEST_003', 0, async () => {
      console.log('==========RICHTEXT_TEST_003 test start==========')
      let driver = Driver.create()
      await driver.delayMs(waitUiReadyMs)
      const OnComplete = await driver.findComponent(ON.text('OnComplete', MatchPattern.CONTAINS))
      const text: string = await OnComplete.getText()
      console.log('OnComplete', text)
      expect(text).assertEqual('<h1 style="text-align: center;">OnComplete Be triggered</h1>')
      console.log('RICHTEXT_TEST_003 success')
      console.log('==========RICHTEXT_TEST_003 test end==========')
    })
  })
}
