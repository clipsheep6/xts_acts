import { describe, it, expect, beforeAll, beforeEach, afterEach, afterAll } from '@ohos/hypium';
import { Component, Driver, ON } from '@ohos.UiTest';
import { startAbility, stopAbility, waitUiReadyMs } from '../utils/index';

export default function OnAlertTest() {
  describe('OnAlertTest', () => {

    /**
     * beforeAll: PreOnAlertTest at the test suite level, which are executed before the test suite is executed.
     */
    beforeAll(async () => {
      await startAbility('com.example.webviewtest', 'EntryAbility');
      const driver: Driver = Driver.create();
      await driver.delayMs(waitUiReadyMs);
    });

    /**
     * beforeEach: PreCommonEventMgrSubscribeTest at the test case level, which are executed before each test case is executed.
     */
    beforeEach(async () => {
      const driver: Driver = Driver.create();
      await driver.delayMs(waitUiReadyMs);
    });

    /**
     * afterEach: Test case-level clearance conditions, which are executed after each test case is executed.
     */
    afterEach(() => {
    });

    /**
     * afterAll: Test suite-level cleanup condition, which is executed after the test suite is executed.
     */
    afterAll(async () => {
      await stopAbility();
      const driver: Driver = Driver.create();
      await driver.delayMs(waitUiReadyMs);
    });

    /**
     * @tc.number: SUB_Web_WebView_On_Alert_Func_0100
     * @tc.name  : SUB_Web_WebView_On_Alert_Func_0100
     * @tc.desc  : test whether the onAlert attribute is valid
     * @tc.size  : MediumTest
     * @tc.type  : Func
     * @tc.level : 2
     */
    it('SUB_Web_WebView_On_Alert_Func_0100', 0, async () => {
      console.log('SUB_Web_WebView_On_Alert_Func_0100 test start');
      const driver: Driver = Driver.create();
      await driver.delayMs(waitUiReadyMs);
      const CHANGE_TABS: Component = await driver.findComponent(ON.text('设置页签'));
      await CHANGE_TABS.click();
      await driver.delayMs(waitUiReadyMs);
      const TAB: Component = await driver.findComponent(ON.text('Goto onAlert'));
      await TAB.click();
      await driver.delayMs(2000);
      const TRIGGER_BUTTON: Component = await driver.findComponent(ON.text('TRIGGER'));
      await TRIGGER_BUTTON.click();
      await driver.delayMs(waitUiReadyMs);
      const ON_ALERT_EVENT_URL: Component = await driver.findComponent(ON.id('ON_EVENT_URL'));
      const text: string = await ON_ALERT_EVENT_URL.getText();
      console.log(`SUB_Web_WebView_On_Alert_Func_0100 ON_ALERT_EVENT_URL: ${text}`);
      expect(text).assertEqual('index_alert.html');
      console.log('SUB_Web_WebView_On_Alert_Func_0100 success');
      console.log('SUB_Web_WebView_On_Alert_Func_0100 test end');
    });

    /**
     * @tc.number: SUB_Web_WebView_On_Alert_Func_0200
     * @tc.name  : SUB_Web_WebView_On_Alert_Func_0200
     * @tc.desc  : test whether the onAlert attribute is valid
     * @tc.size  : MediumTest
     * @tc.type  : Func
     * @tc.level : 2
     */
    it('SUB_Web_WebView_On_Alert_Func_0200', 0, async () => {
      console.log('SUB_Web_WebView_On_Alert_Func_0200 test start');
      const driver: Driver = Driver.create();
      await driver.delayMs(waitUiReadyMs);
      const ON_ALERT_EVENT_MESSAGE: Component = await driver.findComponent(ON.id('ON_EVENT_MESSAGE'));
      const msg: string = await ON_ALERT_EVENT_MESSAGE.getText();
      console.log(`SUB_Web_WebView_On_Alert_Func_0200 ON_ALERT_EVENT_MESSAGE: ${msg}`);
      expect(msg).assertEqual('on_alert_message');
      console.log('SUB_Web_WebView_On_Alert_Func_0200 success');
      console.log('SUB_Web_WebView_On_Alert_Func_0200 test end');
    });

    /**
     * @tc.number: SUB_Web_WebView_On_Alert_Func_0300
     * @tc.name  : SUB_Web_WebView_On_Alert_Func_0300
     * @tc.desc  : test whether the onAlert attribute is valid
     * @tc.size  : MediumTest
     * @tc.type  : Func
     * @tc.level : 2
     */
    it('SUB_Web_WebView_On_Alert_Func_0300', 0, async () => {
      console.log('SUB_Web_WebView_On_Alert_Func_0300 test start');
      const driver: Driver = Driver.create();
      await driver.delayMs(waitUiReadyMs);
      const secondaryButton: Component = await driver.findComponent(ON.text('ok'));
      await secondaryButton.click();
      await driver.delayMs(waitUiReadyMs);
      const SECONDARY_BUTTON_CLICK: Component = await driver.findComponent(ON.id('ON_BUTTON_CLICK'));
      const text: string = await SECONDARY_BUTTON_CLICK.getText();
      console.log(`SUB_Web_WebView_On_Alert_Func_0300 SECONDARY_BUTTON_CLICK: ${text}`);
      expect(text).assertEqual('OK_CLICKED');
      console.log('SUB_Web_WebView_On_Alert_Func_0300 success');
      console.log('SUB_Web_WebView_On_Alert_Func_0300 test end');
    });

    /**
     * @tc.number: SUB_Web_WebView_On_Alert_Func_0400
     * @tc.name  : SUB_Web_WebView_On_Alert_Func_0400
     * @tc.desc  : test whether the onAlert attribute is valid
     * @tc.size  : MediumTest
     * @tc.type  : Func
     * @tc.level : 2
     */
    it('SUB_Web_WebView_On_Alert_Func_0400', 0, async () => {
      console.log('SUB_Web_WebView_On_Alert_Func_0400 test start');
      const driver: Driver = Driver.create();
      await driver.delayMs(waitUiReadyMs);
      const TRIGGER_BUTTON: Component = await driver.findComponent(ON.text('TRIGGER'));
      await TRIGGER_BUTTON.click();
      await driver.delayMs(waitUiReadyMs);
      const primaryButton: Component = await driver.findComponent(ON.text('cancel'));
      await primaryButton.click();
      await driver.delayMs(waitUiReadyMs);
      const PRIMARY_BUTTON_CLICK: Component = await driver.findComponent(ON.id('ON_BUTTON_CLICK'));
      const text: string = await PRIMARY_BUTTON_CLICK.getText();
      console.log(`SUB_Web_WebView_On_Alert_Func_0400 PRIMARY_BUTTON_CLICK: ${text}`);
      expect(text).assertEqual('CANCEL_CLICKED');
      console.log('SUB_Web_WebView_On_Alert_Func_0400 success');
      console.log('SUB_Web_WebView_On_Alert_Func_0400 test end');
    });

    /**
     * @tc.number: SUB_Web_WebView_Min_Font_Size_Func_0100
     * @tc.name  : SUB_Web_WebView_Min_Font_Size_Func_0100
     * @tc.desc  : test whether the minFontSize attribute is valid
     * @tc.size  : MediumTest
     * @tc.type  : Func
     * @tc.level : 2
     */
    it('SUB_Web_WebView_Min_Font_Size_Func_0100', 0, async () => {
      console.log('SUB_Web_WebView_Min_Font_Size_Func_0100 test start');
      const driver: Driver = Driver.create();
      await driver.delayMs(waitUiReadyMs);
      const SET_BUTTON: Component = await driver.findComponent(ON.text('SET'));
      await SET_BUTTON.click();
      await driver.delayMs(waitUiReadyMs);
      const ON_EVENT_MSG: Component = await driver.findComponent(ON.id('ON_EVENT_MESSAGE'));
      const msg: string = await ON_EVENT_MSG.getText();
      expect(msg).assertContain('minFontSize:16');
      console.log('SUB_Web_WebView_Min_Font_Size_Func_0100 success');
      console.log('SUB_Web_WebView_Min_Font_Size_Func_0100 test end');
    });

    /**
     * @tc.number: SUB_Web_WebView_Min_Font_Size_Func_0200
     * @tc.name  : SUB_Web_WebView_Min_Font_Size_Func_0200
     * @tc.desc  : test whether the minFontSize attribute is valid
     * @tc.size  : MediumTest
     * @tc.type  : Func
     * @tc.level : 2
     */
    it('SUB_Web_WebView_Min_Font_Size_Func_0200', 0, async () => {
      console.log('SUB_Web_WebView_Min_Font_Size_Func_0200 test start');
      const driver: Driver = Driver.create();
      await driver.delayMs(waitUiReadyMs);
      const SET_BUTTON: Component = await driver.findComponent(ON.text('SET'));
      await SET_BUTTON.click();
      await driver.delayMs(waitUiReadyMs);
      const ON_EVENT_MSG: Component = await driver.findComponent(ON.id('ON_EVENT_MESSAGE'));
      const msg: string = await ON_EVENT_MSG.getText();
      expect(msg).assertContain('minFontSize:12');
      console.log('SUB_Web_WebView_Min_Font_Size_Func_0200 success');
      console.log('SUB_Web_WebView_Min_Font_Size_Func_0200 test end');
    });

    /**
     * @tc.number: SUB_Web_WebView_Background_Color_Func_0100
     * @tc.name  : SUB_Web_WebView_Background_Color_Func_0100
     * @tc.desc  : test whether the backgroundColor attribute is valid
     * @tc.size  : MediumTest
     * @tc.type  : Func
     * @tc.level : 2
     */
    it('SUB_Web_WebView_Background_Color_Func_0100', 0, async () => {
      console.log('SUB_Web_WebView_Background_Color_Func_0100 test start');
      const driver: Driver = Driver.create();
      await driver.delayMs(waitUiReadyMs);
      const SET_BUTTON: Component = await driver.findComponent(ON.text('SET'));
      await SET_BUTTON.click();
      await driver.delayMs(waitUiReadyMs);
      const ON_EVENT_MSG: Component = await driver.findComponent(ON.id('ON_EVENT_MESSAGE'));
      const msg: string = await ON_EVENT_MSG.getText();
      expect(msg).assertContain('backgroundColor:#ff808080');
      console.log('SUB_Web_WebView_Background_Color_Func_0100 success');
      console.log('SUB_Web_WebView_Background_Color_Func_0100 test end');
    });

    /**
     * @tc.number: SUB_Web_WebView_Background_Color_Func_0200
     * @tc.name  : SUB_Web_WebView_Background_Color_Func_0200
     * @tc.desc  : test whether the backgroundColor attribute is valid
     * @tc.size  : MediumTest
     * @tc.type  : Func
     * @tc.level : 2
     */
    it('SUB_Web_WebView_Background_Color_Func_0200', 0, async () => {
      console.log('SUB_Web_WebView_Background_Color_Func_0200 test start');
      const driver: Driver = Driver.create();
      await driver.delayMs(waitUiReadyMs);
      const SET_BUTTON: Component = await driver.findComponent(ON.text('SET'));
      await SET_BUTTON.click();
      await driver.delayMs(waitUiReadyMs);
      const ON_EVENT_MSG: Component = await driver.findComponent(ON.id('ON_EVENT_MESSAGE'));
      const msg: string = await ON_EVENT_MSG.getText();
      expect(msg).assertContain('backgroundColor:#ffffc0cb');
      console.log('SUB_Web_WebView_Background_Color_Func_0200 success');
      console.log('SUB_Web_WebView_Background_Color_Func_0200 test end');
    });

    /**
     * @tc.number: SUB_Web_WebView_On_Console_Func_0100
     * @tc.name  : SUB_Web_WebView_On_Console_Func_0100
     * @tc.desc  : test whether the onConsole attribute is valid
     * @tc.size  : MediumTest
     * @tc.type  : Func
     * @tc.level : 2
     */
    it('SUB_Web_WebView_On_Console_Func_0100', 0, async () => {
      console.log('SUB_Web_WebView_On_Console_Func_0100 test start');
      const driver: Driver = Driver.create();
      await driver.delayMs(waitUiReadyMs);
      const ON_EVENT_VALUE: Component = await driver.findComponent(ON.id('ON_EVENT_VALUE'));
      const value: string = await ON_EVENT_VALUE.getText();
      expect(value).assertContain('console log');
      expect(value).assertContain('on_alert_message');
      console.log('SUB_Web_WebView_On_Console_Func_0100 success');
      console.log('SUB_Web_WebView_On_Console_Func_0100 test end');
    });

    /**
     * @tc.number: SUB_Web_WebView_Load_Data_Func_0100
     * @tc.name  : SUB_Web_WebView_Load_Data_Func_0100
     * @tc.desc  : test whether the loadData function is valid
     * @tc.size  : MediumTest
     * @tc.type  : Func
     * @tc.level : 2
     */
    it('SUB_Web_WebView_Load_Data_Func_0100', 0, async () => {
      console.log('SUB_Web_WebView_Load_Data_Func_0100 test start');
      const driver: Driver = Driver.create();
      await driver.delayMs(waitUiReadyMs);
      const loadData: Component = await driver.findComponent(ON.text('loadData'));
      await loadData.click();
      await driver.delayMs(waitUiReadyMs);
      const ON_EVENT_VALUE: Component = await driver.findComponent(ON.id('ON_EVENT_VALUE'));
      const value: string = await ON_EVENT_VALUE.getText();
      expect(value).assertEqual('hasImage: true');
      console.log('SUB_Web_WebView_Load_Data_Func_0100 success');
      console.log('SUB_Web_WebView_Load_Data_Func_0100 test end');
    });
  });
}