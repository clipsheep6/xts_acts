/*
 * Copyright (c) 2023 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

import hilog from '@ohos.hilog';
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium';
import abilityDelegatorRegistry from '@ohos.app.ability.abilityDelegatorRegistry';
import { Driver, ON } from '@ohos.UiTest';
import commonEvent from '@ohos.commonEventManager';
import window from '@ohos.window';

const CASE_TIME_OUT = 40000;
const TAG = '[Acts_SwitchUserExtension_Test]';
const DOMAIN = 0xF811;
const CASE = 'Acts_SwitchUserExtension_';
const START_SLIDING_Y = 1200;
const FINISH_SLIDING_Y = 50;
const SLIDING_COORDINATE_X = 300;
const pressHome_x = 360;
const pressHome_y = 1270;
const TIME_OUT = 5000;
const TIME_OUT_FREEZE = 5000;
const TIME_OUT_DIALOG = 5000;

let Acts_SwitchUserExtension = {
  events: ["Acts_SwitchUserExtension_First"]
};
let abilityDelegator = abilityDelegatorRegistry.getAbilityDelegator();
let resourceManager = abilityDelegator.getAppContext().resourceManager;
let driver = Driver.create();

export default function abilityTest() {
  describe('ActsAbilityTest', function () {
    beforeEach(async function (done) {
      await abilityDelegator.executeShellCommand('acm switch -i 100');
      await driver.delayMs(TIME_OUT_FREEZE);
      await abilityDelegator.executeShellCommand('uinput -T -d 300 600 -m 300 600 300 100 -u 300 100').then((data) => {
        hilog.info(DOMAIN, TAG, CASE + ` beforeEach, uinput data: ${JSON.stringify(data)}`);
      });
      hilog.info(DOMAIN, TAG, CASE + 'beforeEach called');
      done();
    })



    /*
     * @tc.number: Acts_SwitchUserExtension_0100
     * @tc.name: Switch user hide extension window
     * @tc.desc: There is an extension for the modal window, which will be displayed when switching
     *           back to the current user and entering the application again.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: 3
     */
    it('Acts_SwitchUserExtension_0100', 0, async function (done) {
      let want = {
        bundleName: "com.acts.switchuserextensionrely",
        abilityName: "SecondAbility"
      }
      await globalThis.abilityContext.startAbility(want).then(() => {
        hilog.info(DOMAIN, TAG, CASE + '0100 startAbility success');
      }).catch((err) => {
        expect().assertFail();
        hilog.error(DOMAIN, TAG, CASE + `0100 startAbility err: ${JSON.stringify(err)}`);
        done();
      })
      await driver.delayMs(TIME_OUT_DIALOG);
      await driver.assertComponentExist(
        ON.text(await resourceManager.getStringValue($r('app.string.accept'))));
      hilog.info(DOMAIN, TAG, CASE + '0100 assertComponent success');

      let firstSwitch = await abilityDelegator.executeShellCommand('acm switch -i 101');
      expect(JSON.stringify(firstSwitch)).assertContain('switch the local account successfully.');
      await driver.delayMs(TIME_OUT_FREEZE);
      await driver.fling({
        x: SLIDING_COORDINATE_X, y: START_SLIDING_Y
      }, {
        x: SLIDING_COORDINATE_X, y: FINISH_SLIDING_Y
      }, 5, 100);
      await driver.delayMs(TIME_OUT);
      let component = await driver.findComponent(
        ON.text(await resourceManager.getStringValue($r('app.string.accept'))));
      expect(component).assertEqual(null);
      hilog.info(DOMAIN, TAG, CASE + '0100 component will not be displayed under new users.');
      let componentApp = await driver.findComponent(ON.text('userExten'));
      await componentApp.click();
      hilog.info(DOMAIN, TAG, CASE + '0100 first click componentApp success');
      await driver.delayMs(TIME_OUT);
      let firstButton = await driver.findComponent(ON.text('DIALOG'));
      await firstButton.click();
      hilog.info(DOMAIN, TAG, CASE + '0100 first click button success');
      await driver.delayMs(TIME_OUT_DIALOG);
      await driver.assertComponentExist(
        ON.text(await resourceManager.getStringValue($r('app.string.accept'))));
      hilog.info(DOMAIN, TAG, CASE + '0100 new user pulls up the pop-up window to display normally');
      await driver.delayMs(TIME_OUT);

      let secondSwitch = await abilityDelegator.executeShellCommand('acm switch -i 100');
      expect(JSON.stringify(secondSwitch)).assertContain('switch the local account successfully.');
      hilog.info(DOMAIN, TAG, CASE + '0100 switch original user success');
      await driver.delayMs(TIME_OUT_FREEZE);
      await driver.fling({
        x: SLIDING_COORDINATE_X, y: START_SLIDING_Y
      }, {
        x: SLIDING_COORDINATE_X, y: FINISH_SLIDING_Y
      }, 5, 100);
      await driver.delayMs(TIME_OUT);
      let secondSwitchComponent = await driver.findComponent(
        ON.text(await resourceManager.getStringValue($r('app.string.accept'))));
      hilog.info(DOMAIN, TAG, CASE + `0100 component ${JSON.stringify(secondSwitchComponent)}`);
      expect(component).assertEqual(null);
      let secondComponentApp = await driver.findComponent(ON.text('userExten'));
      await secondComponentApp.click();
      hilog.info(DOMAIN, TAG, CASE + '0100 second click componentApp success');
      await driver.delayMs(TIME_OUT);
      let secondButton = await driver.findComponent(ON.text('DIALOG'));
      await secondButton.click();
      hilog.info(DOMAIN, TAG, CASE + '0100 second click button success');
      await driver.delayMs(TIME_OUT_DIALOG);
      await driver.assertComponentExist(ON.text(await resourceManager.getStringValue($r('app.string.accept'))));
      await driver.click(pressHome_x, pressHome_y);
      await driver.delayMs(TIME_OUT);
      await abilityDelegator.executeShellCommand('aa force-stop com.acts.switchuserextensionrely').then((data) => {
        hilog.info(DOMAIN, TAG, CASE + `0100, force-stop data: ${JSON.stringify(data)}`);
      }).catch((err) => {
        hilog.info(DOMAIN, TAG, CASE + `0100, force-stop err: ${JSON.stringify(err)}`);
      })
      hilog.info(DOMAIN, TAG, CASE + '0100 end');
      done();
    })

    /*
     * @tc.number: Acts_SwitchUserExtension_0200
     * @tc.name: Switch user hide extension window
     * @tc.desc: There is an extension for a non modal window TYPE_SYSTEM_ALERT that will not be displayed
     *           when switching back to the current user and entering the application again.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: 3
     */
    it('Acts_SwitchUserExtension_0200', 0, async function (done) {
      let want = {
        bundleName: "com.acts.switchuserextensionrely",
        abilityName: "ServiceExtensionAbility",
        parameters:
        {
          "winType": window.WindowType.TYPE_SYSTEM_ALERT,
        }
      }
      await globalThis.abilityContext.startAbility(want).then(() => {
        hilog.info(DOMAIN, TAG, CASE + '0200 startAbility success');
      }).catch((err) => {
        hilog.error(DOMAIN, TAG, CASE + `0200 startAbility err: ${JSON.stringify(err)}`);
        expect().assertFail();
        done();
      })
      await driver.delayMs(TIME_OUT);
      await driver.assertComponentExist(
        ON.text(await resourceManager.getStringValue($r('app.string.Type_system_alert'))));
      hilog.info(DOMAIN, TAG, CASE + '0200 assert component success');

      let firstSwitch = await abilityDelegator.executeShellCommand('acm switch -i 101');
      expect(JSON.stringify(firstSwitch)).assertContain('switch the local account successfully.');
      await driver.delayMs(TIME_OUT_FREEZE);
      await driver.fling({
        x: SLIDING_COORDINATE_X, y: START_SLIDING_Y
      }, {
        x: SLIDING_COORDINATE_X, y: FINISH_SLIDING_Y
      }, 5, 100);
      await driver.delayMs(TIME_OUT);
      let component = await driver.findComponent(
        ON.text(await resourceManager.getStringValue($r('app.string.Type_system_alert'))));
      hilog.info(DOMAIN, TAG, CASE + `0200 component ${JSON.stringify(component)}`);
      expect(component).assertEqual(null);
      hilog.info(DOMAIN, TAG, CASE + '0200 serviceExtension will not be displayed under new user');
      let componentApp = await driver.findComponent(ON.text('userExten'));
      await componentApp.click();
      hilog.info(DOMAIN, TAG, CASE + '0200 first click componentApp success');
      await driver.delayMs(TIME_OUT);
      let firstSystemAlert = await driver.findComponent(ON.text('SYSTEM_ALERT'));
      await firstSystemAlert.click();
      hilog.info(DOMAIN, TAG, CASE + '0200 first click button success');
      await driver.delayMs(TIME_OUT);
      await driver.assertComponentExist(
        ON.text(await resourceManager.getStringValue($r('app.string.Type_system_alert'))));
      hilog.info(DOMAIN, TAG, CASE + '0200 new user pulls up the pop-up window to display normally');
      await driver.delayMs(TIME_OUT);

      let secondSwitch = await abilityDelegator.executeShellCommand('acm switch -i 100');
      expect(JSON.stringify(secondSwitch)).assertContain('switch the local account successfully.');
      hilog.info(DOMAIN, TAG, CASE + '0200 switch original user success');
      await driver.delayMs(TIME_OUT_FREEZE);
      await driver.fling({
        x: SLIDING_COORDINATE_X, y: START_SLIDING_Y
      }, {
        x: SLIDING_COORDINATE_X, y: FINISH_SLIDING_Y
      }, 5, 100);
      await driver.delayMs(TIME_OUT);
      let secondSwitchComponent = await driver.findComponent(
        ON.text(await resourceManager.getStringValue($r('app.string.Type_system_alert'))));
      hilog.info(DOMAIN, TAG, CASE + `0200 component ${JSON.stringify(secondSwitchComponent)}`);
      expect(component).assertEqual(null);
      hilog.info(DOMAIN, TAG, CASE + '0200 serviceExtension will not be displayed under original user.');
      let secondComponentApp = await driver.findComponent(ON.text('userExten'));
      await secondComponentApp.click();
      hilog.info(DOMAIN, TAG, CASE + '0200 second click componentApp success');
      await driver.delayMs(TIME_OUT);
      let secondSystemAlert = await driver.findComponent(ON.text('SYSTEM_ALERT'));
      await secondSystemAlert.click();
      hilog.info(DOMAIN, TAG, CASE + '0200 second click button success');
      await driver.delayMs(TIME_OUT);
      await driver.assertComponentExist(
        ON.text(await resourceManager.getStringValue($r('app.string.Type_system_alert'))));
      await driver.delayMs(TIME_OUT);
      let cancellationButton = await driver.findComponent(
        ON.text(await resourceManager.getStringValue($r('app.string.cancel'))));
      await cancellationButton.click();
      await driver.delayMs(TIME_OUT);
      await abilityDelegator.executeShellCommand('aa force-stop com.acts.switchuserextensionrely').then((data) => {
        hilog.info(DOMAIN, TAG, CASE + `0200, force-stop data: ${JSON.stringify(data)}`);
      }).catch((err) => {
        hilog.info(DOMAIN, TAG, CASE + `0200, force-stop err: ${JSON.stringify(err)}`);
      })
      hilog.info(DOMAIN, TAG, CASE + '0200 end');
      done();
    })

    /*
     * @tc.number: Acts_StopServiceExtension_0300
     * @tc.name: Switch user hide extension window
     * @tc.desc: There is an extension for a non modal window TYPE_INPUT_METHOD that will not be displayed
     *           when switching back to the current user and entering the application again.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: 3
     */
    it('Acts_SwitchUserExtension_0300', 0, async function (done) {
      let want = {
        bundleName: "com.acts.switchuserextensionrely",
        abilityName: "ServiceExtensionAbility",
        parameters:
        {
          "winType": window.WindowType.TYPE_INPUT_METHOD,
        },
      }
      await globalThis.abilityContext.startAbility(want).then(() => {
        hilog.info(DOMAIN, TAG, CASE + '0300 startAbility success');
      }).catch((err) => {
        expect().assertFail();
        hilog.error(DOMAIN, TAG, CASE + `0300 startAbility err: ${JSON.stringify(err)}`);
        done();
      })
      await driver.delayMs(TIME_OUT);
      await driver.assertComponentExist(
        ON.text(await resourceManager.getStringValue($r('app.string.Type_input_method'))));
      hilog.info(DOMAIN, TAG, CASE + '0300 assert component success');

      let firstSwitch = await abilityDelegator.executeShellCommand('acm switch -i 101');
      expect(JSON.stringify(firstSwitch)).assertContain('switch the local account successfully.');
      await driver.delayMs(TIME_OUT_FREEZE);
      await driver.fling({
        x: SLIDING_COORDINATE_X, y: START_SLIDING_Y
      }, {
        x: SLIDING_COORDINATE_X, y: FINISH_SLIDING_Y
      }, 5, 100);
      await driver.delayMs(TIME_OUT);
      let component = await driver.findComponent(
        ON.text(await resourceManager.getStringValue($r('app.string.Type_input_method'))));
      hilog.info(DOMAIN, TAG, CASE + `0300 component ${JSON.stringify(component)}`);
      expect(component).assertEqual(null);
      hilog.info(DOMAIN, TAG, CASE + '0300 component will not be displayed under new users');
      let componentApp = await driver.findComponent(ON.text('userExten'));
      await componentApp.click();
      hilog.info(DOMAIN, TAG, CASE + '0300 first click componentApp success');
      await driver.delayMs(TIME_OUT);
      let firstInputMethod = await driver.findComponent(ON.text('INPUT_METHOD'));
      await firstInputMethod.click();
      hilog.info(DOMAIN, TAG, CASE + '0300 first click button success');
      await driver.delayMs(TIME_OUT);
      await driver.assertComponentExist(
        ON.text(await resourceManager.getStringValue($r('app.string.Type_input_method'))));
      hilog.info(DOMAIN, TAG, CASE + '0300 new user pulls up the pop-up window to display normally');
      await driver.delayMs(TIME_OUT);

      let secondSwitch = await abilityDelegator.executeShellCommand('acm switch -i 100');
      expect(JSON.stringify(secondSwitch)).assertContain('switch the local account successfully.');
      hilog.info(DOMAIN, TAG, CASE + '0300 switch original user success');
      await driver.delayMs(TIME_OUT_FREEZE);
      await driver.fling({
        x: SLIDING_COORDINATE_X, y: START_SLIDING_Y
      }, {
        x: SLIDING_COORDINATE_X, y: FINISH_SLIDING_Y
      }, 5, 100);
      await driver.delayMs(TIME_OUT);
      let secondSwitchComponent = await driver.findComponent(
        ON.text(await resourceManager.getStringValue($r('app.string.Type_input_method'))));
      hilog.info(DOMAIN, TAG, CASE + `0300 component ${JSON.stringify(component)}`);
      expect(secondSwitchComponent).assertEqual(null);
      hilog.info(DOMAIN, TAG, CASE + '0300 Type_input_method will not be displayed under original user');
      let secComponentApp = await driver.findComponent(ON.text('userExten'));
      await secComponentApp.click();
      hilog.info(DOMAIN, TAG, CASE + '0300 second click componentApp success');
      await driver.delayMs(TIME_OUT);
      let secInputMethod = await driver.findComponent(ON.text('INPUT_METHOD'));
      await secInputMethod.click();
      hilog.info(DOMAIN, TAG, CASE + '0300 second click button success');
      await driver.delayMs(TIME_OUT);
      await driver.assertComponentExist(
        ON.text(await resourceManager.getStringValue($r('app.string.Type_input_method'))));
      await driver.delayMs(TIME_OUT);
      let cancellationButton = await driver.findComponent(
        ON.text(await resourceManager.getStringValue($r('app.string.cancel'))));
      await cancellationButton.click();
      await driver.delayMs(TIME_OUT);
      await abilityDelegator.executeShellCommand('aa force-stop com.acts.switchuserextensionrely').then((data) => {
        hilog.info(DOMAIN, TAG, CASE + `0300, force-stop data: ${JSON.stringify(data)}`);
      }).catch((err) => {
        hilog.info(DOMAIN, TAG, CASE + `0300, force-stop err: ${JSON.stringify(err)}`);
      })
      hilog.info(DOMAIN, TAG, CASE + '0300 end');
      done();
    })

    /*
     * @tc.number: Acts_StopServiceExtension_0400
     * @tc.name: Switch user hide extension window
     * @tc.desc: There is an extension for a non modal window TYPE_STATUS_BAR that will not be displayed
     *           when switching back to the current user and entering the application again.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: 3
     */
    it('Acts_SwitchUserExtension_0400', 0, async function (done) {
      let want = {
        bundleName: "com.acts.switchuserextensionrely",
        abilityName: "ServiceExtensionAbility",
        parameters:
        {
          "winType": window.WindowType.TYPE_STATUS_BAR,
        },
      }
      await globalThis.abilityContext.startAbility(want).then(() => {
        hilog.info(DOMAIN, TAG, CASE + '0400 startAbility success');
      }).catch((err) => {
        expect().assertFail();
        hilog.info(DOMAIN, TAG, CASE + `0400 startAbility err: ${JSON.stringify(err)}`);
        done();
      })
      await driver.delayMs(TIME_OUT);
      await driver.assertComponentExist(
        ON.text(await resourceManager.getStringValue($r('app.string.Type_status_bar'))));

      let firstSwitch = await abilityDelegator.executeShellCommand('acm switch -i 101');
      expect(JSON.stringify(firstSwitch)).assertContain('switch the local account successfully.');
      await driver.delayMs(TIME_OUT_FREEZE);
      await driver.fling({
        x: SLIDING_COORDINATE_X, y: START_SLIDING_Y
      }, {
        x: SLIDING_COORDINATE_X, y: FINISH_SLIDING_Y
      }, 5, 100);
      await driver.delayMs(TIME_OUT);
      let component = await driver.findComponent(
        ON.text(await resourceManager.getStringValue($r('app.string.Type_status_bar'))));
      hilog.info(DOMAIN, TAG, CASE + `0400 component ${JSON.stringify(component)}`);
      expect(component).assertEqual(null);
      hilog.info(DOMAIN, TAG, CASE + '0400 component will not be displayed under new users');
      let componentApp = await driver.findComponent(ON.text('userExten'));
      await componentApp.click();
      hilog.info(DOMAIN, TAG, CASE + '0400 first click componentApp success');
      await driver.delayMs(TIME_OUT);
      let firstStatusBar = await driver.findComponent(ON.text('STATUS_BAR'));
      await firstStatusBar.click();
      hilog.info(DOMAIN, TAG, CASE + '0400 first click button success');
      hilog.info(DOMAIN, TAG, CASE + `0400 first click button ${JSON.stringify(firstStatusBar)}`);
      await driver.delayMs(TIME_OUT);
      await driver.assertComponentExist(
        ON.text(await resourceManager.getStringValue($r('app.string.Type_status_bar'))));
      hilog.info(DOMAIN, TAG, CASE + '0400 new user pulls up the pop-up window to display normally');
      await driver.delayMs(TIME_OUT);

      let secondSwitch = await abilityDelegator.executeShellCommand('acm switch -i 100');
      expect(JSON.stringify(secondSwitch)).assertContain('switch the local account successfully.');
      hilog.info(DOMAIN, TAG, CASE + '0400 switch original user success');
      await driver.delayMs(TIME_OUT_FREEZE);
      await driver.fling({
        x: SLIDING_COORDINATE_X, y: START_SLIDING_Y
      }, {
        x: SLIDING_COORDINATE_X, y: FINISH_SLIDING_Y
      }, 5, 100);
      await driver.delayMs(TIME_OUT);
      let component1 = await driver.findComponent(
        ON.text(await resourceManager.getStringValue($r('app.string.Type_status_bar'))));
      hilog.info(DOMAIN, TAG, CASE + `0400 second component ${JSON.stringify(component1)}`);
      expect(component1).assertEqual(null);
      hilog.info(DOMAIN, TAG, CASE + '0400 Type_input_method will not be displayed under original user');
      let secComponentApp = await driver.findComponent(ON.text('userExten'));
      await secComponentApp.click();
      hilog.info(DOMAIN, TAG, CASE + '0400 second click componentApp success');
      await driver.delayMs(TIME_OUT);
      let secStatusBar = await driver.findComponent(ON.text('STATUS_BAR'));
      await secStatusBar.click();
      hilog.info(DOMAIN, TAG, CASE + '0400 second click componentApp success');
      await driver.delayMs(TIME_OUT);
      await driver.assertComponentExist(
        ON.text(await resourceManager.getStringValue($r('app.string.Type_status_bar'))));
      await driver.delayMs(TIME_OUT);
      let cancellationButton = await driver.findComponent(
        ON.text(await resourceManager.getStringValue($r('app.string.cancel'))));
      await cancellationButton.click();
      await driver.delayMs(TIME_OUT);
      await abilityDelegator.executeShellCommand('aa force-stop com.acts.switchuserextensionrely').then((data) => {
        hilog.info(DOMAIN, TAG, CASE + `0400, force-stop data: ${JSON.stringify(data)}`);
      }).catch((err) => {
        hilog.info(DOMAIN, TAG, CASE + `0400, force-stop err: ${JSON.stringify(err)}`);
      })
      hilog.info(DOMAIN, TAG, CASE + '0400 end');
      done();
    })

    /*
     * @tc.number: Acts_StopServiceExtension_0500
     * @tc.name: Switch user hide extension window
     * @tc.desc: There is an extension for a non modal window TYPE_PANEL that will not be displayed
     *           when switching back to the current user and entering the application again.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: 3
     */
    it('Acts_SwitchUserExtension_0500', 0, async function (done) {
      let want = {
        bundleName: "com.acts.switchuserextensionrely",
        abilityName: "ServiceExtensionAbility",
        parameters:
        {
          "winType": window.WindowType.TYPE_PANEL,
        },
      }
      await globalThis.abilityContext.startAbility(want).then(() => {
        hilog.info(DOMAIN, TAG, CASE + '0500 startAbility success');
      }).catch((err) => {
        expect().assertFail();
        hilog.info(DOMAIN, TAG, CASE + `0500 startAbility err: ${JSON.stringify(err)}`);
        done();
      })
      await driver.delayMs(TIME_OUT);
      await driver.assertComponentExist(
        ON.text(await resourceManager.getStringValue($r('app.string.Type_panel'))));
      hilog.info(DOMAIN, TAG, CASE + '0500 assert component success');

      let firstSwitch = await abilityDelegator.executeShellCommand('acm switch -i 101');
      expect(JSON.stringify(firstSwitch)).assertContain('switch the local account successfully.');
      await driver.delayMs(TIME_OUT_FREEZE);
      await driver.fling({
        x: SLIDING_COORDINATE_X, y: START_SLIDING_Y
      }, {
        x: SLIDING_COORDINATE_X, y: FINISH_SLIDING_Y
      }, 5, 100);
      await driver.delayMs(TIME_OUT);
      let component = await driver.findComponent(
        ON.text(await resourceManager.getStringValue($r('app.string.Type_panel'))));
      hilog.info(DOMAIN, TAG, CASE + `0500 component ${JSON.stringify(component)}`);
      expect(component).assertEqual(null);
      hilog.info(DOMAIN, TAG, CASE + `0500 component assert success`);
      let componentApp = await driver.findComponent(ON.text('userExten'));
      await componentApp.click();
      hilog.info(DOMAIN, TAG, CASE + '0500 first click componentApp success');
      await driver.delayMs(TIME_OUT);
      let firstPanel = await driver.findComponent(ON.text('PANEL'));
      await firstPanel.click();
      hilog.info(DOMAIN, TAG, CASE + '0500 first click button success');
      await driver.delayMs(TIME_OUT);
      await driver.assertComponentExist(
        ON.text(await resourceManager.getStringValue($r('app.string.Type_panel'))));
      hilog.info(DOMAIN, TAG, CASE + '0500 new user pulls up the pop-up window to display normally');
      await driver.delayMs(TIME_OUT);

      let secondSwitch = await abilityDelegator.executeShellCommand('acm switch -i 100');
      expect(JSON.stringify(secondSwitch)).assertContain('switch the local account successfully.');
      hilog.info(DOMAIN, TAG, CASE + '0500 switch original user success');
      await driver.delayMs(TIME_OUT_FREEZE);
      await driver.fling({
        x: SLIDING_COORDINATE_X, y: START_SLIDING_Y
      }, {
        x: SLIDING_COORDINATE_X, y: FINISH_SLIDING_Y
      }, 5, 100);
      await driver.delayMs(TIME_OUT);
      let component1 = await driver.findComponent(
        ON.text(await resourceManager.getStringValue($r('app.string.Type_panel'))));
      hilog.info(DOMAIN, TAG, CASE + `0500 second component ${JSON.stringify(component1)}`);
      expect(component1).assertEqual(null);
      hilog.info(DOMAIN, TAG, CASE + '0500 Type_input_method will not be displayed under original user');
      let secComponentApp = await driver.findComponent(ON.text('userExten'));
      await secComponentApp.click();
      hilog.info(DOMAIN, TAG, CASE + '0500 second click componentApp success');
      await driver.delayMs(TIME_OUT);
      let secPanel = await driver.findComponent(ON.text('PANEL'));
      await secPanel.click();
      hilog.info(DOMAIN, TAG, CASE + '0500 second click button success');
      await driver.delayMs(TIME_OUT);
      await driver.assertComponentExist(
        ON.text(await resourceManager.getStringValue($r('app.string.Type_panel'))));
      await driver.delayMs(TIME_OUT);
      let cancellationButton = await driver.findComponent(
        ON.text(await resourceManager.getStringValue($r('app.string.cancel'))));
      await cancellationButton.click();
      await driver.delayMs(TIME_OUT);
      await abilityDelegator.executeShellCommand('aa force-stop com.acts.switchuserextensionrely').then((data) => {
        hilog.info(DOMAIN, TAG, CASE + `0500, force-stop data: ${JSON.stringify(data)}`);
      }).catch((err) => {
        hilog.info(DOMAIN, TAG, CASE + `0500, force-stop err: ${JSON.stringify(err)}`);
      })
      hilog.info(DOMAIN, TAG, CASE + '0500 end');
      done();
    })

    /*
     * @tc.number: Acts_StopServiceExtension_0600
     * @tc.name: Switch user hide extension window
     * @tc.desc: There is an extension for a non modal window TYPE_KEYGUARD that will not be displayed
     *           when switching back to the current user and entering the application again.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: 3
     */
    it('Acts_SwitchUserExtension_0600', 0, async function (done) {
      let want = {
        bundleName: "com.acts.switchuserextensionrely",
        abilityName: "ServiceExtensionAbility",
        parameters:
        {
          "winType": window.WindowType.TYPE_KEYGUARD,
        },
      }
      await globalThis.abilityContext.startAbility(want).then(() => {
        hilog.info(DOMAIN, TAG, CASE + '0600 startAbility success');
      }).catch((err) => {
        expect().assertFail();
        hilog.info(DOMAIN, TAG, CASE + `0600 startAbility err: ${JSON.stringify(err)}`);
        done();
      })
      await driver.delayMs(TIME_OUT);
      await driver.assertComponentExist(
        ON.text(await resourceManager.getStringValue($r('app.string.Type_keyguard'))));
      hilog.info(DOMAIN, TAG, CASE + '0600 assert component success');

      let firstSwitch = await abilityDelegator.executeShellCommand('acm switch -i 101');
      expect(JSON.stringify(firstSwitch)).assertContain('switch the local account successfully.');
      await driver.delayMs(TIME_OUT_FREEZE);
      await driver.fling({
        x: SLIDING_COORDINATE_X, y: START_SLIDING_Y
      }, {
        x: SLIDING_COORDINATE_X, y: FINISH_SLIDING_Y
      }, 5, 100);
      await driver.delayMs(TIME_OUT);
      let component = await driver.findComponent(
        ON.text(await resourceManager.getStringValue($r('app.string.Type_keyguard'))));
      hilog.info(DOMAIN, TAG, CASE + `0600 component ${JSON.stringify(component)}`);
      expect(component).assertEqual(null);
      hilog.info(DOMAIN, TAG, CASE + '0600 component will not be displayed under new users');
      let componentApp = await driver.findComponent(ON.text('userExten'));
      await componentApp.click();
      hilog.info(DOMAIN, TAG, CASE + '0600 first click componentApp success');
      await driver.delayMs(TIME_OUT);
      let firstKeyguard = await driver.findComponent(ON.text('KEYGUARD'));
      await firstKeyguard.click();
      hilog.info(DOMAIN, TAG, CASE + '0600 first click button success');
      await driver.delayMs(TIME_OUT);
      await driver.assertComponentExist(
        ON.text(await resourceManager.getStringValue($r('app.string.Type_keyguard'))));
      hilog.info(DOMAIN, TAG, CASE + '0600 new user pulls up the pop-up window to display normally');
      await driver.delayMs(TIME_OUT);

      let secondSwitch = await abilityDelegator.executeShellCommand('acm switch -i 100');
      expect(JSON.stringify(secondSwitch)).assertContain('switch the local account successfully.');
      await driver.delayMs(TIME_OUT_FREEZE);
      await driver.fling({
        x: SLIDING_COORDINATE_X, y: START_SLIDING_Y
      }, {
        x: SLIDING_COORDINATE_X, y: FINISH_SLIDING_Y
      }, 5, 100);
      await driver.delayMs(TIME_OUT);
      let secSwitchComponent = await driver.findComponent(
        ON.text(await resourceManager.getStringValue($r('app.string.Type_keyguard'))));
      hilog.info(DOMAIN, TAG, CASE + `0600 second component ${JSON.stringify(secSwitchComponent)}`);
      expect(secSwitchComponent).assertEqual(null);
      hilog.info(DOMAIN, TAG, CASE + '0600 Type_input_method will not be displayed under original user');
      let secComponentApp = await driver.findComponent(ON.text('userExten'));
      await secComponentApp.click();
      hilog.info(DOMAIN, TAG, CASE + '0600 second click componentApp success');
      await driver.delayMs(TIME_OUT);
      let secKeyguard = await driver.findComponent(ON.text('KEYGUARD'));
      await secKeyguard.click();
      hilog.info(DOMAIN, TAG, CASE + '0600 second click componentApp success');
      await driver.delayMs(TIME_OUT);
      await driver.assertComponentExist(
        ON.text(await resourceManager.getStringValue($r('app.string.Type_keyguard'))));
      await driver.delayMs(TIME_OUT);
      let cancellationButton = await driver.findComponent(
        ON.text(await resourceManager.getStringValue($r('app.string.cancel'))));
      await cancellationButton.click();
      await driver.delayMs(TIME_OUT);
      await abilityDelegator.executeShellCommand('aa force-stop com.acts.switchuserextensionrely').then((data) => {
        hilog.info(DOMAIN, TAG, CASE + `0600, force-stop data: ${JSON.stringify(data)}`);
      }).catch((err) => {
        hilog.info(DOMAIN, TAG, CASE + `0600, force-stop err: ${JSON.stringify(err)}`);
      })
      hilog.info(DOMAIN, TAG, CASE + '0600 end');
      done();
    })

    /*
     * @tc.number: Acts_StopServiceExtension_0700
     * @tc.name: Switch user hide extension window
     * @tc.desc: There is an extension for a non modal window TYPE_VOLUME_OVERLAY that will not be displayed
     *           when switching back to the current user and entering the application again.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: 3
     */
    it('Acts_SwitchUserExtension_0700', 0, async function (done) {
      let want = {
        bundleName: "com.acts.switchuserextensionrely",
        abilityName: "ServiceExtensionAbility",
        parameters:
        {
          "winType": window.WindowType.TYPE_VOLUME_OVERLAY,
        },
      }
      await globalThis.abilityContext.startAbility(want).then(() => {
        hilog.info(DOMAIN, TAG, CASE + '0700 startAbility success');
      }).catch((err) => {
        expect().assertFail();
        hilog.info(DOMAIN, TAG, CASE + `0700 startAbility err: ${JSON.stringify(err)}`);
        done();
      })
      await driver.delayMs(TIME_OUT);
      await driver.assertComponentExist(
        ON.text(await resourceManager.getStringValue($r('app.string.Type_volume_overlay'))));
      hilog.info(DOMAIN, TAG, CASE + '0700 assert component success');

      let firstSwitch = await abilityDelegator.executeShellCommand('acm switch -i 101');
      expect(JSON.stringify(firstSwitch)).assertContain('switch the local account successfully.');
      await driver.delayMs(TIME_OUT_FREEZE);
      await driver.fling({
        x: SLIDING_COORDINATE_X, y: START_SLIDING_Y
      }, {
        x: SLIDING_COORDINATE_X, y: FINISH_SLIDING_Y
      }, 5, 100);
      await driver.delayMs(TIME_OUT);
      let component = await driver.findComponent(
        ON.text(await resourceManager.getStringValue($r('app.string.Type_volume_overlay'))));
      hilog.info(DOMAIN, TAG, CASE + `0700 component ${JSON.stringify(component)}`);
      expect(component).assertEqual(null);
      hilog.info(DOMAIN, TAG, CASE + '0700 component will not be displayed under new users');
      let componentApp = await driver.findComponent(ON.text('userExten'));
      await componentApp.click();
      hilog.info(DOMAIN, TAG, CASE + '0700 first click componentApp success');
      await driver.delayMs(TIME_OUT);
      let firstVolumeOverlay = await driver.findComponent(ON.text('VOLUME_OVERLAY'));
      await firstVolumeOverlay.click();
      hilog.info(DOMAIN, TAG, CASE + '0700 first click button success');
      await driver.delayMs(TIME_OUT);
      await driver.assertComponentExist(
        ON.text(await resourceManager.getStringValue($r('app.string.Type_volume_overlay'))));
      hilog.info(DOMAIN, TAG, CASE + '0700 new user pulls up the pop-up window to display normally');
      await driver.delayMs(TIME_OUT);

      let secondSwitch = await abilityDelegator.executeShellCommand('acm switch -i 100');
      expect(JSON.stringify(secondSwitch)).assertContain('switch the local account successfully.');
      hilog.info(DOMAIN, TAG, CASE + '0700 switch original user success');
      await driver.delayMs(TIME_OUT_FREEZE);
      await driver.fling({
        x: SLIDING_COORDINATE_X, y: START_SLIDING_Y
      }, {
        x: SLIDING_COORDINATE_X, y: FINISH_SLIDING_Y
      }, 5, 100);
      await driver.delayMs(TIME_OUT);
      let component1 = await driver.findComponent(
        ON.text(await resourceManager.getStringValue($r('app.string.Type_volume_overlay'))));
      hilog.info(DOMAIN, TAG, CASE + `0700 second component ${JSON.stringify(component1)}`);
      expect(component1).assertEqual(null);
      hilog.info(DOMAIN, TAG, CASE + '0700 Type_input_method will not be displayed under original user');
      let secComponentApp = await driver.findComponent(ON.text('userExten'));
      await secComponentApp.click();
      hilog.info(DOMAIN, TAG, CASE + '0700 second click componentApp success');
      await driver.delayMs(TIME_OUT);
      let secVolumeOverlay = await driver.findComponent(ON.text('VOLUME_OVERLAY'));
      await secVolumeOverlay.click();
      hilog.info(DOMAIN, TAG, CASE + '0700 second click button success');
      await driver.delayMs(TIME_OUT);
      await driver.assertComponentExist(
        ON.text(await resourceManager.getStringValue($r('app.string.Type_volume_overlay'))));
      await driver.delayMs(TIME_OUT);
      let cancellationButton = await driver.findComponent(
        ON.text(await resourceManager.getStringValue($r('app.string.cancel'))));
      await cancellationButton.click();
      await driver.delayMs(TIME_OUT);
      await abilityDelegator.executeShellCommand('aa force-stop com.acts.switchuserextensionrely').then((data) => {
        hilog.info(DOMAIN, TAG, CASE + `0700, force-stop data: ${JSON.stringify(data)}`);
      }).catch((err) => {
        hilog.info(DOMAIN, TAG, CASE + `0700, force-stop err: ${JSON.stringify(err)}`);
      })
      hilog.info(DOMAIN, TAG, CASE + '0700 end');
      done();
    })

    /*
     * @tc.number: Acts_StopServiceExtension_0800
     * @tc.name: Switch user hide extension window
     * @tc.desc: There is an extension for a non modal window TYPE_NAVIGATION_BAR that will not be displayed
     *           when switching back to the current user and entering the application again.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: 3
     */
    it('Acts_SwitchUserExtension_0800', 0, async function (done) {
      let want = {
        bundleName: "com.acts.switchuserextensionrely",
        abilityName: "ServiceExtensionAbility",
        parameters:
        {
          "winType": window.WindowType.TYPE_NAVIGATION_BAR,
        },
      }
      await globalThis.abilityContext.startAbility(want).then(() => {
        hilog.info(DOMAIN, TAG, CASE + '0800 startAbility success');
      }).catch((err) => {
        expect().assertFail();
        hilog.info(DOMAIN, TAG, CASE + `0800 startAbility err: ${JSON.stringify(err)}`);
        done();
      })
      await driver.delayMs(TIME_OUT);
      await driver.assertComponentExist(
        ON.text(await resourceManager.getStringValue($r('app.string.Type_navigation_bar'))));
      hilog.info(DOMAIN, TAG, CASE + '0800 assert component success');

      let firstSwitch = await abilityDelegator.executeShellCommand('acm switch -i 101');
      expect(JSON.stringify(firstSwitch)).assertContain('switch the local account successfully.');
      await driver.delayMs(TIME_OUT_FREEZE);
      await driver.fling({
        x: SLIDING_COORDINATE_X, y: START_SLIDING_Y
      }, {
        x: SLIDING_COORDINATE_X, y: FINISH_SLIDING_Y
      }, 5, 100);
      await driver.delayMs(TIME_OUT);
      let component = await driver.findComponent(
        ON.text(await resourceManager.getStringValue($r('app.string.Type_navigation_bar'))));
      hilog.info(DOMAIN, TAG, CASE + `0800 component ${JSON.stringify(component)}`);
      expect(component).assertEqual(null);
      hilog.info(DOMAIN, TAG, CASE + '0800 component will not be displayed under new users');
      let componentApp = await driver.findComponent(ON.text('userExten'));
      await componentApp.click();
      hilog.info(DOMAIN, TAG, CASE + '0800 first click componentApp success');
      await driver.delayMs(TIME_OUT);
      let firstNavigationBar = await driver.findComponent(ON.text('NAVIGATION_BAR'));
      await firstNavigationBar.click();
      hilog.info(DOMAIN, TAG, CASE + '0800 first click button success');
      await driver.delayMs(TIME_OUT);
      await driver.assertComponentExist(
        ON.text(await resourceManager.getStringValue($r('app.string.Type_navigation_bar'))));
      hilog.info(DOMAIN, TAG, CASE + '0800 new user pulls up the pop-up window to display normally');
      await driver.delayMs(TIME_OUT);

      let secondSwitch = await abilityDelegator.executeShellCommand('acm switch -i 100');
      expect(JSON.stringify(secondSwitch)).assertContain('switch the local account successfully.');
      hilog.info(DOMAIN, TAG, CASE + '0800 switch original user success');
      await driver.delayMs(TIME_OUT_FREEZE);
      await driver.fling({
        x: SLIDING_COORDINATE_X, y: START_SLIDING_Y
      }, {
        x: SLIDING_COORDINATE_X, y: FINISH_SLIDING_Y
      }, 5, 100);
      await driver.delayMs(TIME_OUT);
      let component1 = await driver.findComponent(
        ON.text(await resourceManager.getStringValue($r('app.string.Type_navigation_bar'))));
      hilog.info(DOMAIN, TAG, CASE + `0800 second component ${JSON.stringify(component1)}`);
      expect(component1).assertEqual(null);
      hilog.info(DOMAIN, TAG, CASE + '0800 Type_input_method will not be displayed under original user');
      let secComponentApp = await driver.findComponent(ON.text('userExten'));
      await secComponentApp.click();
      hilog.info(DOMAIN, TAG, CASE + '0800 second click componentApp success');
      await driver.delayMs(TIME_OUT);
      let secNavigationBar = await driver.findComponent(ON.text('NAVIGATION_BAR'));
      await secNavigationBar.click();
      hilog.info(DOMAIN, TAG, CASE + '0800 second click button success');
      await driver.delayMs(TIME_OUT);
      await driver.assertComponentExist(
        ON.text(await resourceManager.getStringValue($r('app.string.Type_navigation_bar'))));
      await driver.delayMs(TIME_OUT);
      let cancellationButton = await driver.findComponent(
        ON.text(await resourceManager.getStringValue($r('app.string.cancel'))));
      await cancellationButton.click();
      await driver.delayMs(TIME_OUT);
      await abilityDelegator.executeShellCommand('aa force-stop com.acts.switchuserextensionrely').then((data) => {
        hilog.info(DOMAIN, TAG, CASE + `0800, force-stop data: ${JSON.stringify(data)}`);
      }).catch((err) => {
        hilog.info(DOMAIN, TAG, CASE + `0800, force-stop err: ${JSON.stringify(err)}`);
      })
      hilog.info(DOMAIN, TAG, CASE + '0800 end');
      done();
    })

    /*
     * @tc.number: Acts_StopServiceExtension_0900
     * @tc.name: Switch user hide extension window
     * @tc.desc: There is an extension for a non modal window TYPE_FLOAT that will not be displayed
     *           when switching back to the current user and entering the application again.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: 3
     */
    it('Acts_SwitchUserExtension_0900', 0, async function (done) {
      let want = {
        bundleName: "com.acts.switchuserextensionrely",
        abilityName: "ServiceExtensionAbility",
        parameters:
        {
          "winType": window.WindowType.TYPE_FLOAT,
        },
      }
      await globalThis.abilityContext.startAbility(want).then(() => {
        hilog.info(DOMAIN, TAG, CASE + '0900 startAbility success');
      }).catch((err) => {
        expect().assertFail();
        hilog.info(DOMAIN, TAG, CASE + `0900 startAbility err: ${JSON.stringify(err)}`);
        done();
      })
      await driver.delayMs(TIME_OUT);
      await driver.assertComponentExist(
        ON.text(await resourceManager.getStringValue($r('app.string.Type_float'))));
      hilog.info(DOMAIN, TAG, CASE + '0900 assert component success');

      let firstSwitch = await abilityDelegator.executeShellCommand('acm switch -i 101');
      expect(JSON.stringify(firstSwitch)).assertContain('switch the local account successfully.');
      await driver.delayMs(TIME_OUT_FREEZE);
      await driver.fling({
        x: SLIDING_COORDINATE_X, y: START_SLIDING_Y
      }, {
        x: SLIDING_COORDINATE_X, y: FINISH_SLIDING_Y
      }, 5, 100);
      await driver.delayMs(TIME_OUT);
      let component = await driver.findComponent(
        ON.text(await resourceManager.getStringValue($r('app.string.Type_float'))));
      hilog.info(DOMAIN, TAG, CASE + `0900 component ${JSON.stringify(component)}`);
      expect(component).assertEqual(null);
      hilog.info(DOMAIN, TAG, CASE + '0900 component will not be displayed under new users');
      let componentApp = await driver.findComponent(ON.text('userExten'));
      await componentApp.click();
      hilog.info(DOMAIN, TAG, CASE + '0900 first click componentApp success');
      await driver.delayMs(TIME_OUT);
      let firstFloat = await driver.findComponent(ON.text('FLOAT'));
      await firstFloat.click();
      hilog.info(DOMAIN, TAG, CASE + '0900 first click button success');
      await driver.delayMs(TIME_OUT);
      await driver.assertComponentExist(
        ON.text(await resourceManager.getStringValue($r('app.string.Type_float'))));
      hilog.info(DOMAIN, TAG, CASE + '0900 new user pulls up the pop-up window to display normally');
      await driver.delayMs(TIME_OUT);

      let secondSwitch = await abilityDelegator.executeShellCommand('acm switch -i 100');
      expect(JSON.stringify(secondSwitch)).assertContain('switch the local account successfully.');
      hilog.info(DOMAIN, TAG, CASE + '0900 switch original user success');
      await driver.delayMs(TIME_OUT_FREEZE);
      await driver.fling({
        x: SLIDING_COORDINATE_X, y: START_SLIDING_Y
      }, {
        x: SLIDING_COORDINATE_X, y: FINISH_SLIDING_Y
      }, 5, 100);
      await driver.delayMs(TIME_OUT);
      let component1 = await driver.findComponent(
        ON.text(await resourceManager.getStringValue($r('app.string.Type_float'))));
      hilog.info(DOMAIN, TAG, CASE + `0900 second component ${JSON.stringify(component1)}`);
      expect(component1).assertEqual(null);
      hilog.info(DOMAIN, TAG, CASE + '0900 Type_input_method will not be displayed under original user');
      let secComponentApp = await driver.findComponent(ON.text('userExten'));
      await secComponentApp.click();
      hilog.info(DOMAIN, TAG, CASE + '0900 second click componentApp success');
      await driver.delayMs(TIME_OUT);
      let secFloat = await driver.findComponent(ON.text('FLOAT'));
      await secFloat.click();
      hilog.info(DOMAIN, TAG, CASE + '0900 second click button success');
      await driver.delayMs(TIME_OUT);
      await driver.assertComponentExist(
        ON.text(await resourceManager.getStringValue($r('app.string.Type_float'))));
      await driver.delayMs(TIME_OUT);
      let cancellationButton = await driver.findComponent(
        ON.text(await resourceManager.getStringValue($r('app.string.cancel'))));
      await cancellationButton.click();
      await driver.delayMs(TIME_OUT);
      await abilityDelegator.executeShellCommand('aa force-stop com.acts.switchuserextensionrely').then((data) => {
        hilog.info(DOMAIN, TAG, CASE + `0900, force-stop data: ${JSON.stringify(data)}`);
      }).catch((err) => {
        hilog.info(DOMAIN, TAG, CASE + `0900, force-stop err: ${JSON.stringify(err)}`);
      })
      hilog.info(DOMAIN, TAG, CASE + '0900 end');
      done();
    })

    /*
     * @tc.number: Acts_StopServiceExtension_1000
     * @tc.name: Switch user hide extension window
     * @tc.desc: There is an extension for a non modal window TYPE_LAUNCHER_RECENT that will not be displayed
     *           when switching back to the current user and entering the application again.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: 3
     */
    it('Acts_SwitchUserExtension_1000', 0, async function (done) {
      let want = {
        bundleName: "com.acts.switchuserextensionrely",
        abilityName: "ServiceExtensionAbility",
        parameters:
        {
          "winType": window.WindowType.TYPE_LAUNCHER_RECENT,
        },
      }
      await globalThis.abilityContext.startAbility(want).then(() => {
        hilog.info(DOMAIN, TAG, CASE + '1000 startAbility success');
      }).catch((err) => {
        expect().assertFail();
        hilog.info(DOMAIN, TAG, CASE + `1000 startAbility err: ${JSON.stringify(err)}`);
        done();
      })
      await driver.delayMs(TIME_OUT);
      await driver.assertComponentExist(
        ON.text(await resourceManager.getStringValue($r('app.string.Type_launcher_recent'))));
      hilog.info(DOMAIN, TAG, CASE + '1000 assert component success');

      let firstSwitch = await abilityDelegator.executeShellCommand('acm switch -i 101');
      expect(JSON.stringify(firstSwitch)).assertContain('switch the local account successfully.');
      await driver.delayMs(TIME_OUT_FREEZE);
      await driver.fling({
        x: SLIDING_COORDINATE_X, y: START_SLIDING_Y
      }, {
        x: SLIDING_COORDINATE_X, y: FINISH_SLIDING_Y
      }, 5, 100);
      await driver.delayMs(TIME_OUT);
      let component = await driver.findComponent(
        ON.text(await resourceManager.getStringValue($r('app.string.Type_launcher_recent'))));
      hilog.info(DOMAIN, TAG, CASE + `1000 component ${JSON.stringify(component)}`);
      expect(component).assertEqual(null);
      hilog.info(DOMAIN, TAG, CASE + '1000 component will not be displayed under new users');
      let componentApp = await driver.findComponent(ON.text('userExten'));
      await componentApp.click();
      hilog.info(DOMAIN, TAG, CASE + '1000 first click componentApp success');
      await driver.delayMs(TIME_OUT);
      let firstLauncherRecent = await driver.findComponent(ON.text('LAUNCHER_RECENT'));
      await firstLauncherRecent.click();
      hilog.info(DOMAIN, TAG, CASE + '1000 first click button success');
      await driver.delayMs(TIME_OUT);
      await driver.assertComponentExist(
        ON.text(await resourceManager.getStringValue($r('app.string.Type_launcher_recent'))));
      hilog.info(DOMAIN, TAG, CASE + '1000 new user pulls up the pop-up window to display normally');
      await driver.delayMs(TIME_OUT);

      let secondSwitch = await abilityDelegator.executeShellCommand('acm switch -i 100');
      expect(JSON.stringify(secondSwitch)).assertContain('switch the local account successfully.');
      hilog.info(DOMAIN, TAG, CASE + '1000 switch original user success');
      await driver.delayMs(TIME_OUT_FREEZE);
      await driver.fling({
        x: SLIDING_COORDINATE_X, y: START_SLIDING_Y
      }, {
        x: SLIDING_COORDINATE_X, y: FINISH_SLIDING_Y
      }, 5, 100);
      await driver.delayMs(TIME_OUT);
      let component1 = await driver.findComponent(
        ON.text(await resourceManager.getStringValue($r('app.string.Type_launcher_recent'))));
      hilog.info(DOMAIN, TAG, CASE + `1000 second component ${JSON.stringify(component1)}`);
      expect(component1).assertEqual(null);
      hilog.info(DOMAIN, TAG, CASE + '1000 Type_input_method will not be displayed under original user');
      let secComponentApp = await driver.findComponent(ON.text('userExten'));
      await secComponentApp.click();
      hilog.info(DOMAIN, TAG, CASE + '1000 second click componentApp success');
      await driver.delayMs(TIME_OUT);
      let secLauncherRecent = await driver.findComponent(ON.text('LAUNCHER_RECENT'));
      await secLauncherRecent.click();
      hilog.info(DOMAIN, TAG, CASE + '1000 second click button success');
      await driver.delayMs(TIME_OUT);
      await driver.assertComponentExist(
        ON.text(await resourceManager.getStringValue($r('app.string.Type_launcher_recent'))));
      await driver.delayMs(TIME_OUT);
      let cancellationButton = await driver.findComponent(
        ON.text(await resourceManager.getStringValue($r('app.string.cancel'))));
      await cancellationButton.click();
      await driver.delayMs(TIME_OUT);
      await abilityDelegator.executeShellCommand('aa force-stop com.acts.switchuserextensionrely').then((data) => {
        hilog.info(DOMAIN, TAG, CASE + `1000, force-stop data: ${JSON.stringify(data)}`);
      }).catch((err) => {
        hilog.info(DOMAIN, TAG, CASE + `1000, force-stop err: ${JSON.stringify(err)}`);
      })
      hilog.info(DOMAIN, TAG, CASE + '1000 end');
      done();
    })

    /*
     * @tc.number: Acts_StopServiceExtension_1100
     * @tc.name: Switch user hide extension window
     * @tc.desc: There is an extension for a non modal window TYPE_LAUNCHER_DOCK that will not be displayed
     *           when switching back to the current user and entering the application again.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: 3
     */
    it('Acts_SwitchUserExtension_1100', 0, async function (done) {
      let want = {
        bundleName: "com.acts.switchuserextensionrely",
        abilityName: "ServiceExtensionAbility",
        parameters:
        {
          "winType": window.WindowType.TYPE_LAUNCHER_DOCK,
        },
      }
      await globalThis.abilityContext.startAbility(want).then(() => {
        hilog.info(DOMAIN, TAG, CASE + 'startAbility success');
      }).catch((err) => {
        expect().assertFail();
        hilog.info(DOMAIN, TAG, CASE + `startAbility err: ${JSON.stringify(err)}`);
        done();
      })
      await driver.delayMs(TIME_OUT);
      await driver.assertComponentExist(
        ON.text(await resourceManager.getStringValue($r('app.string.Type_launcher_dock'))));
      hilog.info(DOMAIN, TAG, CASE + '1100 assert component success');

      let firstSwitch = await abilityDelegator.executeShellCommand('acm switch -i 101');
      expect(JSON.stringify(firstSwitch)).assertContain('switch the local account successfully.');
      await driver.delayMs(TIME_OUT_FREEZE);
      await driver.fling({
        x: SLIDING_COORDINATE_X, y: START_SLIDING_Y
      }, {
        x: SLIDING_COORDINATE_X, y: FINISH_SLIDING_Y
      }, 5, 100);
      await driver.delayMs(TIME_OUT);
      let component = await driver.findComponent(
        ON.text(await resourceManager.getStringValue($r('app.string.Type_launcher_dock'))));
      hilog.info(DOMAIN, TAG, CASE + `1100 component ${JSON.stringify(component)}`);
      expect(component).assertEqual(null);
      hilog.info(DOMAIN, TAG, CASE + '1100 component will not be displayed under new users');
      let componentApp = await driver.findComponent(ON.text('userExten'));
      await componentApp.click();
      hilog.info(DOMAIN, TAG, CASE + '1100 first click componentApp success');
      await driver.delayMs(TIME_OUT);
      let firstLauncherDock = await driver.findComponent(ON.text('LAUNCHER_DOCK'));
      await firstLauncherDock.click();
      hilog.info(DOMAIN, TAG, CASE + '1100 first click button success');
      await driver.delayMs(TIME_OUT);
      await driver.assertComponentExist(
        ON.text(await resourceManager.getStringValue($r('app.string.Type_launcher_dock'))));
      hilog.info(DOMAIN, TAG, CASE + '1100 new user pulls up the pop-up window to display normally');
      await driver.delayMs(TIME_OUT);

      let secondSwitch = await abilityDelegator.executeShellCommand('acm switch -i 100');
      expect(JSON.stringify(secondSwitch)).assertContain('switch the local account successfully.');
      hilog.info(DOMAIN, TAG, CASE + '1100 switch original user success');
      await driver.delayMs(TIME_OUT_FREEZE);
      await driver.fling({
        x: SLIDING_COORDINATE_X, y: START_SLIDING_Y
      }, {
        x: SLIDING_COORDINATE_X, y: FINISH_SLIDING_Y
      }, 5, 100);
      await driver.delayMs(TIME_OUT);
      let component1 = await driver.findComponent(
        ON.text(await resourceManager.getStringValue($r('app.string.Type_launcher_dock'))));
      hilog.info(DOMAIN, TAG, CASE + `1100 second component ${JSON.stringify(component1)}`);
      expect(component1).assertEqual(null);
      hilog.info(DOMAIN, TAG, CASE + '1100 Type_input_method will not be displayed under original user');
      let secComponentApp = await driver.findComponent(ON.text('userExten'));
      await secComponentApp.click();
      hilog.info(DOMAIN, TAG, CASE + '1100 second click componentApp success');
      await driver.delayMs(TIME_OUT);
      let secLauncherDock = await driver.findComponent(ON.text('LAUNCHER_DOCK'));
      await secLauncherDock.click();
      hilog.info(DOMAIN, TAG, CASE + '1100 second click button success');
      await driver.delayMs(TIME_OUT);
      await driver.assertComponentExist(
        ON.text(await resourceManager.getStringValue($r('app.string.Type_launcher_dock'))));
      await driver.delayMs(TIME_OUT);
      let cancellationButton = await driver.findComponent(
        ON.text(await resourceManager.getStringValue($r('app.string.cancel'))));
      await cancellationButton.click();
      await driver.delayMs(TIME_OUT);
      await abilityDelegator.executeShellCommand('aa force-stop com.acts.switchuserextensionrely').then((data) => {
        hilog.info(DOMAIN, TAG, CASE + `1100, force-stop data: ${JSON.stringify(data)}`);
      }).catch((err) => {
        hilog.info(DOMAIN, TAG, CASE + `1100, force-stop err: ${JSON.stringify(err)}`);
      })
      hilog.info(DOMAIN, TAG, CASE + '1100 end');
      done();
    })

    /*
     * @tc.number: Acts_StopServiceExtension_1200
     * @tc.name: Switch user hide extension window
     * @tc.desc: There is an extension for a non modal window TYPE_VOICE_INTERACTION that will not be displayed
     *           when switching back to the current user and entering the application again.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: 3
     */
    it('Acts_SwitchUserExtension_1200', 0, async function (done) {
      let want = {
        bundleName: "com.acts.switchuserextensionrely",
        abilityName: "ServiceExtensionAbility",
        parameters:
        {
          "winType": window.WindowType.TYPE_VOICE_INTERACTION,
        },
      }
      await globalThis.abilityContext.startAbility(want).then(() => {
        hilog.info(DOMAIN, TAG, CASE + '1200 startAbility success');
      }).catch((err) => {
        expect().assertFail();
        hilog.info(DOMAIN, TAG, CASE + `1200 startAbility err: ${JSON.stringify(err)}`);
        done();
      })
      await driver.delayMs(TIME_OUT);
      await driver.assertComponentExist(
        ON.text(await resourceManager.getStringValue($r('app.string.Type_voice_interaction'))));
      hilog.info(DOMAIN, TAG, CASE + '1200 assert component success');

      let firstSwitch = await abilityDelegator.executeShellCommand('acm switch -i 101');
      expect(JSON.stringify(firstSwitch)).assertContain('switch the local account successfully.');
      await driver.delayMs(TIME_OUT_FREEZE);
      await driver.fling({
        x: SLIDING_COORDINATE_X, y: START_SLIDING_Y
      }, {
        x: SLIDING_COORDINATE_X, y: FINISH_SLIDING_Y
      }, 5, 100);
      await driver.delayMs(TIME_OUT);
      let component = await driver.findComponent(
        ON.text(await resourceManager.getStringValue($r('app.string.Type_voice_interaction'))));
      hilog.info(DOMAIN, TAG, CASE + `1200 component ${JSON.stringify(component)}`);
      expect(component).assertEqual(null);
      hilog.info(DOMAIN, TAG, CASE + '1200 component will not be displayed under new users');
      let componentApp = await driver.findComponent(ON.text('userExten'));
      await componentApp.click();
      hilog.info(DOMAIN, TAG, CASE + '1200 first click componentApp success');
      await driver.delayMs(TIME_OUT);
      let firstVoiceInteraction = await driver.findComponent(ON.text('VOICE_INTERACTION'));
      await firstVoiceInteraction.click();
      hilog.info(DOMAIN, TAG, CASE + '1200 first click button success');
      await driver.delayMs(TIME_OUT);
      await driver.assertComponentExist(
        ON.text(await resourceManager.getStringValue($r('app.string.Type_voice_interaction'))));
      hilog.info(DOMAIN, TAG, CASE + '1200 new user pulls up the pop-up window to display normally');
      await driver.delayMs(TIME_OUT);

      let secondSwitch = await abilityDelegator.executeShellCommand('acm switch -i 100');
      expect(JSON.stringify(secondSwitch)).assertContain('switch the local account successfully.');
      hilog.info(DOMAIN, TAG, CASE + '1200 switch original user success');
      await driver.delayMs(TIME_OUT_FREEZE);
      await driver.fling({
        x: SLIDING_COORDINATE_X, y: START_SLIDING_Y
      }, {
        x: SLIDING_COORDINATE_X, y: FINISH_SLIDING_Y
      }, 5, 100);
      await driver.delayMs(TIME_OUT);
      let component1 = await driver.findComponent(
        ON.text(await resourceManager.getStringValue($r('app.string.Type_voice_interaction'))));
      hilog.info(DOMAIN, TAG, CASE + `1200 second component ${JSON.stringify(component1)}`);
      expect(component1).assertEqual(null);
      hilog.info(DOMAIN, TAG, CASE + '1200 Type_input_method will not be displayed under original user');
      let secComponentApp = await driver.findComponent(ON.text('userExten'));
      await secComponentApp.click();
      hilog.info(DOMAIN, TAG, CASE + '1200 second click componentApp success');
      await driver.delayMs(TIME_OUT);
      let secVoiceInteraction = await driver.findComponent(ON.text('VOICE_INTERACTION'));
      await secVoiceInteraction.click();
      hilog.info(DOMAIN, TAG, CASE + '1200 second click button success');
      await driver.delayMs(TIME_OUT);
      await driver.assertComponentExist(
        ON.text(await resourceManager.getStringValue($r('app.string.Type_voice_interaction'))));
      await driver.delayMs(TIME_OUT);
      let cancellationButton = await driver.findComponent(
        ON.text(await resourceManager.getStringValue($r('app.string.cancel'))));
      await cancellationButton.click();
      await driver.delayMs(TIME_OUT);
      await abilityDelegator.executeShellCommand('aa force-stop com.acts.switchuserextensionrely').then((data) => {
        hilog.info(DOMAIN, TAG, CASE + `1200, force-stop data: ${JSON.stringify(data)}`);
      }).catch((err) => {
        hilog.info(DOMAIN, TAG, CASE + `1200, force-stop err: ${JSON.stringify(err)}`);
      })
      hilog.info(DOMAIN, TAG, CASE + '1200 end');
      done();
    })

    /*
     * @tc.number: Acts_StopServiceExtension_1300
     * @tc.name: Switch user hide extension window
     * @tc.desc: There is an extension for a non modal window TYPE_POINTER that will not be displayed
     *           when switching back to the current user and entering the application again.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: 3
     */
    it('Acts_SwitchUserExtension_1300', 0, async function (done) {
      let want = {
        bundleName: "com.acts.switchuserextensionrely",
        abilityName: "ServiceExtensionAbility",
        parameters:
        {
          "winType": window.WindowType.TYPE_POINTER,
        },
      }
      await globalThis.abilityContext.startAbility(want).then(() => {
        hilog.info(DOMAIN, TAG, CASE + 'startAbility success');
      }).catch((err) => {
        expect().assertFail();
        hilog.error(DOMAIN, TAG, CASE + `startAbility err: ${JSON.stringify(err)}`);
        done();
      })
      await driver.delayMs(TIME_OUT);
      await driver.assertComponentExist(
        ON.text(await resourceManager.getStringValue($r('app.string.Type_pointer'))));
      hilog.info(DOMAIN, TAG, CASE + '1300 assert component success');

      let firstSwitch = await abilityDelegator.executeShellCommand('acm switch -i 101');
      expect(JSON.stringify(firstSwitch)).assertContain('switch the local account successfully.');
      await driver.delayMs(TIME_OUT_FREEZE);
      await driver.fling({
        x: SLIDING_COORDINATE_X, y: START_SLIDING_Y
      }, {
        x: SLIDING_COORDINATE_X, y: FINISH_SLIDING_Y
      }, 5, 100);
      await driver.delayMs(TIME_OUT);
      let component = await driver.findComponent(
        ON.text(await resourceManager.getStringValue($r('app.string.Type_pointer'))));
      hilog.info(DOMAIN, TAG, CASE + `1300 component ${JSON.stringify(component)}`);
      expect(component).assertEqual(null);
      hilog.info(DOMAIN, TAG, CASE + '1300 component will not be displayed under new users');
      let componentApp = await driver.findComponent(ON.text('userExten'));
      await componentApp.click();
      hilog.info(DOMAIN, TAG, CASE + '1300 first click componentApp success');
      await driver.delayMs(TIME_OUT);
      let firstPointer = await driver.findComponent(ON.text('POINTER'));
      await firstPointer.click();
      hilog.info(DOMAIN, TAG, CASE + '1300 first click button success');
      await driver.delayMs(TIME_OUT);
      await driver.assertComponentExist(
        ON.text(await resourceManager.getStringValue($r('app.string.Type_pointer'))));
      hilog.info(DOMAIN, TAG, CASE + '1300 new user pulls up the pop-up window to display normally');
      await driver.delayMs(TIME_OUT);

      let secondSwitch = await abilityDelegator.executeShellCommand('acm switch -i 100');
      expect(JSON.stringify(secondSwitch)).assertContain('switch the local account successfully.');
      hilog.info(DOMAIN, TAG, CASE + '1300 switch original user success');
      await driver.delayMs(TIME_OUT_FREEZE);
      await driver.fling({
        x: SLIDING_COORDINATE_X, y: START_SLIDING_Y
      }, {
        x: SLIDING_COORDINATE_X, y: FINISH_SLIDING_Y
      }, 5, 100);
      await driver.delayMs(TIME_OUT);
      let component1 = await driver.findComponent(
        ON.text(await resourceManager.getStringValue($r('app.string.Type_pointer'))));
      hilog.info(DOMAIN, TAG, CASE + `1300 second component ${JSON.stringify(component1)}`);
      expect(component1).assertEqual(null);
      hilog.info(DOMAIN, TAG, CASE + '1300 Type_input_method will not be displayed under original user');
      let secComponentApp = await driver.findComponent(ON.text('userExten'));
      await secComponentApp.click();
      hilog.info(DOMAIN, TAG, CASE + '1300 second click componentApp success');
      await driver.delayMs(TIME_OUT);
      let secPointer = await driver.findComponent(ON.text('POINTER'));
      await secPointer.click();
      hilog.info(DOMAIN, TAG, CASE + '1300 second click button success');
      await driver.delayMs(TIME_OUT);
      await driver.assertComponentExist(
        ON.text(await resourceManager.getStringValue($r('app.string.Type_pointer'))));
      await driver.delayMs(TIME_OUT);
      let cancellationButton = await driver.findComponent(
        ON.text(await resourceManager.getStringValue($r('app.string.cancel'))));
      await cancellationButton.click();
      await driver.delayMs(TIME_OUT);
      await abilityDelegator.executeShellCommand('aa force-stop com.acts.switchuserextensionrely').then((data) => {
        hilog.info(DOMAIN, TAG, CASE + `1300, force-stop data: ${JSON.stringify(data)}`);
      }).catch((err) => {
        hilog.info(DOMAIN, TAG, CASE + `1300, force-stop err: ${JSON.stringify(err)}`);
      })
      hilog.info(DOMAIN, TAG, CASE + '1300 end');
      done();
    })

    /*
     * @tc.number: Acts_StopServiceExtension_1400
     * @tc.name: Switch user hide extension window
     * @tc.desc: There is an extension for a non modal window TYPE_FLOAT_CAMERA that will not be displayed
     *           when switching back to the current user and entering the application again.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: 3
     */
    it('Acts_SwitchUserExtension_1400', 0, async function (done) {
      let want = {
        bundleName: "com.acts.switchuserextensionrely",
        abilityName: "ServiceExtensionAbility",
        parameters:
        {
          "winType": window.WindowType.TYPE_FLOAT_CAMERA,
        },
      };
      await driver.delayMs(TIME_OUT);
      await globalThis.abilityContext.startAbility(want).then(() => {
        hilog.info(DOMAIN, TAG, CASE + '1400 startAbility success');
      }).catch((err) => {
        expect().assertFail();
        hilog.info(DOMAIN, TAG, CASE + `1400 startAbility err: ${JSON.stringify(err)}`);
        done();
      })
      await driver.delayMs(TIME_OUT);
      await driver.assertComponentExist(
        ON.text(await resourceManager.getStringValue($r('app.string.Type_float_camera'))));
      hilog.info(DOMAIN, TAG, CASE + '1400 assert component success');

      let firstSwitch = await abilityDelegator.executeShellCommand('acm switch -i 101');
      expect(JSON.stringify(firstSwitch)).assertContain('switch the local account successfully.');
      await driver.delayMs(TIME_OUT_FREEZE);
      await driver.fling({
        x: SLIDING_COORDINATE_X, y: START_SLIDING_Y
      }, {
        x: SLIDING_COORDINATE_X, y: FINISH_SLIDING_Y
      }, 5, 100);
      await driver.delayMs(TIME_OUT);
      let component = await driver.findComponent(
        ON.text(await resourceManager.getStringValue($r('app.string.Type_float_camera'))));
      hilog.info(DOMAIN, TAG, CASE + `1400 component ${JSON.stringify(component)}`);
      expect(component).assertEqual(null);
      hilog.info(DOMAIN, TAG, CASE + '1400 component will not be displayed under new users');
      let componentApp = await driver.findComponent(ON.text('userExten'));
      await componentApp.click();
      hilog.info(DOMAIN, TAG, CASE + '1400 first click componentApp success');
      await driver.delayMs(TIME_OUT);
      let firstFloatCamera = await driver.findComponent(ON.text('FLOAT_CAMERA'));
      await firstFloatCamera.click();
      hilog.info(DOMAIN, TAG, CASE + '1400 first click button success');
      await driver.delayMs(TIME_OUT);
      await driver.assertComponentExist(
        ON.text(await resourceManager.getStringValue($r('app.string.Type_float_camera'))));
      hilog.info(DOMAIN, TAG, CASE + '1400 new user pulls up the pop-up window to display normally');
      await driver.delayMs(TIME_OUT);

      let secondSwitch = await abilityDelegator.executeShellCommand('acm switch -i 100');
      expect(JSON.stringify(secondSwitch)).assertContain('switch the local account successfully.');
      hilog.info(DOMAIN, TAG, CASE + '1400 switch original user success');
      await driver.delayMs(TIME_OUT_FREEZE);
      await driver.fling({
        x: SLIDING_COORDINATE_X, y: START_SLIDING_Y
      }, {
        x: SLIDING_COORDINATE_X, y: FINISH_SLIDING_Y
      }, 5, 100);
      await driver.delayMs(TIME_OUT);
      let component1 = await driver.findComponent(
        ON.text(await resourceManager.getStringValue($r('app.string.Type_float_camera'))));
      hilog.info(DOMAIN, TAG, CASE + `1400 second component ${JSON.stringify(component1)}`);
      expect(component1).assertEqual(null);
      hilog.info(DOMAIN, TAG, CASE + '1400 Type_input_method will not be displayed under original user');
      let secComponentApp = await driver.findComponent(ON.text('userExten'));
      await secComponentApp.click();
      await driver.delayMs(TIME_OUT);
      hilog.info(DOMAIN, TAG, CASE + '1400 second click componentApp success');
      let secFloatCamera = await driver.findComponent(ON.text('FLOAT_CAMERA'));
      hilog.info(DOMAIN, TAG, CASE + `1400 secFloatCamera is: ${JSON.stringify(secFloatCamera)}`);
      await secFloatCamera.click();
      hilog.info(DOMAIN, TAG, CASE + '1400 second click button success');
      await driver.delayMs(TIME_OUT);
      await driver.assertComponentExist(
        ON.text(await resourceManager.getStringValue($r('app.string.Type_float_camera'))));
      hilog.info(DOMAIN, TAG, CASE + `1400 Type_float_camera  is  }`);
      await driver.delayMs(TIME_OUT);
      let cancellationButton = await driver.findComponent(
        ON.text(await resourceManager.getStringValue($r('app.string.cancel'))));
      await cancellationButton.click();
      await driver.delayMs(TIME_OUT);
      await abilityDelegator.executeShellCommand('aa force-stop com.acts.switchuserextensionrely').then((data) => {
        hilog.info(DOMAIN, TAG, CASE + `1400, force-stop data: ${JSON.stringify(data)}`);
      }).catch((err) => {
        hilog.info(DOMAIN, TAG, CASE + `1400, force-stop err: ${JSON.stringify(err)}`);
      })
      hilog.info(DOMAIN, TAG, CASE + '1400 end');
      done();
    })

    /*
     * @tc.number: Acts_StopServiceExtension_1500
     * @tc.name: DSwitch user hide extension window
     * @tc.desc: There is an extension for a non modal window TYPE_SCREENSHOT that will not be displayed
     *           when switching back to the current user and entering the application again.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: 3
     */
    it('Acts_SwitchUserExtension_1500', 0, async function (done) {
      let want = {
        bundleName: "com.acts.switchuserextensionrely",
        abilityName: "ServiceExtensionAbility",
        parameters:
        {
          "winType": window.WindowType.TYPE_SCREENSHOT,
        },
      }
      await globalThis.abilityContext.startAbility(want).then(() => {
        hilog.info(DOMAIN, TAG, CASE + '1500 startAbility success');
      }).catch((err) => {
        expect().assertFail();
        hilog.info(DOMAIN, TAG, CASE + `1500 startAbility err: ${JSON.stringify(err)}`);
        done();
      })
      await driver.delayMs(TIME_OUT);
      await driver.assertComponentExist(
        ON.text(await resourceManager.getStringValue($r('app.string.Type_screenshot'))));
      hilog.info(DOMAIN, TAG, CASE + '1500 assert component success');

      let firstSwitch = await abilityDelegator.executeShellCommand('acm switch -i 101');
      expect(JSON.stringify(firstSwitch)).assertContain('switch the local account successfully.');
      await driver.delayMs(TIME_OUT_FREEZE);
      await driver.fling({
        x: SLIDING_COORDINATE_X, y: START_SLIDING_Y
      }, {
        x: SLIDING_COORDINATE_X, y: FINISH_SLIDING_Y
      }, 5, 100);
      await driver.delayMs(TIME_OUT);
      let component = await driver.findComponent(
        ON.text(await resourceManager.getStringValue($r('app.string.Type_screenshot'))));
      hilog.info(DOMAIN, TAG, CASE + `1500 component ${JSON.stringify(component)}`);
      expect(component).assertEqual(null);
      hilog.info(DOMAIN, TAG, CASE + '1500 component will not be displayed under new users');
      let componentApp = await driver.findComponent(ON.text('userExten'));
      await componentApp.click();
      hilog.info(DOMAIN, TAG, CASE + '1500 first click componentApp success');
      await driver.delayMs(TIME_OUT);
      let firstScreenshot = await driver.findComponent(ON.text('SCREENSHOT'));
      await firstScreenshot.click();
      hilog.info(DOMAIN, TAG, CASE + '1500 first click button success');
      await driver.delayMs(TIME_OUT);
      await driver.assertComponentExist(
        ON.text(await resourceManager.getStringValue($r('app.string.Type_screenshot'))));
      hilog.info(DOMAIN, TAG, CASE + '1500 new user pulls up the pop-up window to display normally');
      await driver.delayMs(TIME_OUT);

      let secondSwitch = await abilityDelegator.executeShellCommand('acm switch -i 100');
      expect(JSON.stringify(secondSwitch)).assertContain('switch the local account successfully.');
      hilog.info(DOMAIN, TAG, CASE + '1500 switch original user success');
      await driver.delayMs(TIME_OUT_FREEZE);
      await driver.fling({
        x: SLIDING_COORDINATE_X, y: START_SLIDING_Y
      }, {
        x: SLIDING_COORDINATE_X, y: FINISH_SLIDING_Y
      }, 5, 100);
      await driver.delayMs(TIME_OUT);
      let component1 = await driver.findComponent(
        ON.text(await resourceManager.getStringValue($r('app.string.Type_screenshot'))));
      hilog.info(DOMAIN, TAG, CASE + `1500 second component ${JSON.stringify(component1)}`);
      expect(component1).assertEqual(null);
      hilog.info(DOMAIN, TAG, CASE + '1500 Type_input_method will not be displayed under original user');
      let secComponentApp = await driver.findComponent(ON.text('userExten'));
      await secComponentApp.click();
      hilog.info(DOMAIN, TAG, CASE + '1500 second click componentApp success');
      await driver.delayMs(TIME_OUT);
      let secScreenshot = await driver.findComponent(ON.text('SCREENSHOT'));
      await secScreenshot.click();
      hilog.info(DOMAIN, TAG, CASE + '1500 second click button success');
      await driver.delayMs(TIME_OUT);
      await driver.assertComponentExist(
        ON.text(await resourceManager.getStringValue($r('app.string.Type_screenshot'))));
      await driver.delayMs(TIME_OUT);
      let cancellationButton = await driver.findComponent(
        ON.text(await resourceManager.getStringValue($r('app.string.cancel'))));
      await cancellationButton.click();
      await driver.delayMs(TIME_OUT);
      await abilityDelegator.executeShellCommand('aa force-stop com.acts.switchuserextensionrely').then((data) => {
        hilog.info(DOMAIN, TAG, CASE + `1500, force-stop data: ${JSON.stringify(data)}`);
      }).catch((err) => {
        hilog.info(DOMAIN, TAG, CASE + `1500, force-stop err: ${JSON.stringify(err)}`);
      })
      hilog.info(DOMAIN, TAG, CASE + '1500 end');
      done();
    })

    /*
     * @tc.number: Acts_StopServiceExtension_1600
     * @tc.name: Switch user hide extension window
     * @tc.desc: There is no Extension for Window, and it will not be cleared by the system when switching users.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: 3
     */
    it('Acts_SwitchUserExtension_1600', 0, async function (done) {
      let id;
      let subscriber;
      let launcher = 'com.ohos.launcher.MainAbility';
      let dataShare = 'com.acts.switchuserextensionrely/entry/DataShareExtAbility';
      let serviceExten = 'com.acts.switchuserextensionrely/entry/ServiceExtensionAbility';
      commonEvent.createSubscriber(Acts_SwitchUserExtension).then(async (data) => {
        hilog.info(DOMAIN, TAG, CASE + '1600 Create Subscribe');
        subscriber = data;
        commonEvent.subscribe(subscriber, subscribeCallBack);
        globalThis.abilityContext.startAbility(
          {
            bundleName: 'com.acts.switchuserextensionrely',
            abilityName: 'EntryAbility',
            parameters: {
              'parameters': 'Acts_SwitchUserExtension_1600',
            },
          }, (err) => {
            hilog.info(DOMAIN, TAG, CASE + `1600 startAbility err: ${JSON.stringify(err)}`);
            expect(err.code).assertEqual(0);
          })
      })

      function subscribeCallBack(err, data) {
        hilog.info(DOMAIN, TAG, CASE + `1600 subscribeCallBack data: ${JSON.stringify(data)}`);
        if (data.event == "Acts_SwitchUserExtension_First") {
          expect(data.parameters.message).assertTrue();
          clearTimeout(id);
          abilityDelegator.executeShellCommand('acm switch -i 101', (err, switchUser) => {
            hilog.info(DOMAIN, TAG, CASE + `1600 first switch user result: ${(JSON.stringify(switchUser))}`);
            expect(JSON.stringify(switchUser)).assertContain('switch the local account successfully.');
            abilityDelegator.executeShellCommand('aa dump -u 100 -a', (err, log) => {
              hilog.info(DOMAIN, TAG, CASE + `1600 first aa dump original result: ${(JSON.stringify(log))}`);
              let logStr = JSON.stringify(log);
              expect(logStr).assertContain(serviceExten);
              if (logStr.includes(launcher)) {
                hilog.info(DOMAIN, TAG, CASE + '1600 first 100 logArr.includes(launcher)');
                expect().assertFail();
                commonEvent.unsubscribe(subscriber, unSubscribeCallback);
              }
              abilityDelegator.executeShellCommand('aa dump -a', (err, curLog) => {
                hilog.info(DOMAIN, TAG, CASE + `1600 first aa dump current result: ${(JSON.stringify(curLog))}`);
                let curLogStr = JSON.stringify(curLog);
                expect(curLogStr).assertContain(launcher);
                if (curLogStr.includes(dataShare)) {
                  hilog.info(DOMAIN, TAG, CASE + '1600 first 101 curLogArr.includes(dataShare)');
                  expect().assertFail();
                  commonEvent.unsubscribe(subscriber, unSubscribeCallback);
                }
                if (curLogStr.includes(serviceExten)) {
                  hilog.info(DOMAIN, TAG, CASE + '1600 first 101 curLogArr.includes(serviceExten)');
                  expect().assertFail();
                  commonEvent.unsubscribe(subscriber, unSubscribeCallback);
                }
                abilityDelegator.executeShellCommand('acm switch -i 100', (err, switchUser) => {
                  hilog.info(DOMAIN, TAG, CASE + `1600 second switch user result: ${(JSON.stringify(switchUser))}`);
                  expect(JSON.stringify(switchUser)).assertContain('switch the local account successfully.');
                  abilityDelegator.executeShellCommand('aa dump -u 101 -a', (err, log) => {
                    hilog.info(DOMAIN, TAG, CASE + `1600 second aa dump original result: ${(JSON.stringify(log))}`);
                    let secLogStr = JSON.stringify(log);
                    if (secLogStr.includes(launcher)) {
                      hilog.info(DOMAIN, TAG, CASE + '1600 second 101 logArr.includes(launcher)');
                      expect().assertFail();
                      commonEvent.unsubscribe(subscriber, unSubscribeCallback);
                    }
                    if (secLogStr.includes(dataShare)) {
                      hilog.info(DOMAIN, TAG, CASE + '1600 second 101 logArr.includes(dataShare)');
                      expect().assertFail();
                      commonEvent.unsubscribe(subscriber, unSubscribeCallback);
                    }
                    if (secLogStr.includes(serviceExten)) {
                      hilog.info(DOMAIN, TAG, CASE + '1600 second 101 logArr.includes(serviceExten)');
                      expect().assertFail();
                      commonEvent.unsubscribe(subscriber, unSubscribeCallback);
                    }
                    abilityDelegator.executeShellCommand('aa dump -a', (err, curLog) => {
                      hilog.info(DOMAIN, TAG, CASE + `1600 second aa dump current result: ${(JSON.stringify(curLog))}`);
                      let secCurLogStr = JSON.stringify(curLog);
                      expect(secCurLogStr).assertContain(launcher);
                      expect(secCurLogStr).assertContain(serviceExten);
                      commonEvent.unsubscribe(subscriber, unSubscribeCallback);
                      done();
                    })
                  })
                })
              })
            })
          })
        }
      }

      function unSubscribeCallback() {
        hilog.info(DOMAIN, TAG, CASE + '1600 unSubscribeCallback');
        done();
      }

      function timeout() {
        expect().assertFail();
        hilog.info(DOMAIN, TAG, CASE + '1600 timeout');
        done();
      }

      id = setTimeout(timeout, CASE_TIME_OUT);
      hilog.info(DOMAIN, TAG, CASE + `1600 time id: ${JSON.stringify(id)}`);
    })
  })
}