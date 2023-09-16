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
import { describe, beforeEach, it, expect } from '@ohos/hypium';
import AbilityDelegatorRegistry from '@ohos.app.ability.abilityDelegatorRegistry';
import { Driver } from '@ohos.UiTest';

const TAG = '[SwitchUserDialog_Test]';
const DOMAIN = 0xF811;
const CASE = 'Acts_SwitchUserDialogTest_';
const TIME_OUT = 4000;

let abilityDelegator = AbilityDelegatorRegistry.getAbilityDelegator();
let driver = Driver.create();

export default function abilityTest() {
  describe('ActsAbilityTest', function () {
    beforeEach(async function (done) {
      await abilityDelegator.executeShellCommand('acm switch -i 100');
      await driver.delayMs(TIME_OUT);
      hilog.info(DOMAIN, TAG, CASE + 'afterEach called');
      done();
    })

    /*
     * @tc.number: Acts_SwitchUserDialogTest_0100
     * @tc.name: When switch user freezes the screen, dialog pops up.
     * @tc.desc: When switch user freezes the screen, dialog pops up; When switch back to
     *           the original user freezes the screen , dialog pops up.
     */
    it('Acts_SwitchUserDialogTest_0100', 0, async function (done) {
      hilog.info(DOMAIN, TAG, CASE + '0100 start');
      let switchCmd = 'acm switch -i 101 ; aa dump -u 100 -a';
      let secSwitchCmd = 'acm switch -i 100 ; aa dump -u 101 -a';
      let result = await abilityDelegator.executeShellCommand(switchCmd);
      hilog.info(DOMAIN, TAG, CASE + `0100 first switch result: ${JSON.stringify(result)}`);
      expect(JSON.stringify(result)).assertContain('switch the local account successfully.');
      expect(JSON.stringify(result)).assertContain('uri [/com.ohos.amsdialog/entry/SwitchUserDialog]');

      await driver.delayMs(TIME_OUT);
      let aaDumpResult = await abilityDelegator.executeShellCommand('aa dump -u 100 -a');
      hilog.info(DOMAIN, TAG, CASE + `0100 execute aa dump result: ${JSON.stringify(aaDumpResult)}`);
      if (JSON.stringify(aaDumpResult).includes('uri [/com.ohos.amsdialog/entry/SwitchUserDialog]')) {
        hilog.info(DOMAIN, TAG, CASE + '0100 aa dump result includes SwitchUserDialog');
        expect().assertFail();
      }

      let secResult = await abilityDelegator.executeShellCommand(secSwitchCmd);
      hilog.info(DOMAIN, TAG, CASE + `0100 second switch result: ${JSON.stringify(secResult)}`);
      expect(JSON.stringify(secResult)).assertContain('switch the local account successfully.');
      expect(JSON.stringify(secResult)).assertContain('uri [/com.ohos.amsdialog/entry/SwitchUserDialog]');

      await driver.delayMs(TIME_OUT);
      let secDumpResult = await abilityDelegator.executeShellCommand('aa dump -u 101 -a');
      hilog.info(DOMAIN, TAG, CASE + `0100 execute aa dump result: ${JSON.stringify(secDumpResult)}`);
      if (JSON.stringify(secDumpResult).includes('uri [/com.ohos.amsdialog/entry/SwitchUserDialog]')) {
        hilog.info(DOMAIN, TAG, CASE + '0100 aa dump result includes SwitchUserDialog');
        expect().assertFail();
      }
      done();
    })

    /*
     * @tc.number: Acts_SwitchUserDialogTest_0200
     * @tc.name: When switch user freezes the screen, dialog pops up.
     * @tc.desc: When switch user freezes the screen, dialog pops up.
     */
    it('Acts_SwitchUserDialogTest_0200', 0, async function (done) {
      hilog.info(DOMAIN, TAG, CASE + '0200 start');
      let switchCmd = 'acm switch -i 101 ; aa dump -u 100 -a';
      let secSwitchCmd = 'acm switch -i 100';
      let result = await abilityDelegator.executeShellCommand(switchCmd);
      hilog.info(DOMAIN, TAG, CASE + `0200 first switch result: ${JSON.stringify(result)}`);
      expect(JSON.stringify(result)).assertContain('switch the local account successfully.');
      expect(JSON.stringify(result)).assertContain('uri [/com.ohos.amsdialog/entry/SwitchUserDialog]');

      await driver.delayMs(TIME_OUT);
      let aaDumpResult = await abilityDelegator.executeShellCommand('aa dump -u 100 -a');
      hilog.info(DOMAIN, TAG, CASE + `0200 execute aa dump result: ${JSON.stringify(aaDumpResult)}`);
      if (JSON.stringify(aaDumpResult).includes('uri [/com.ohos.amsdialog/entry/SwitchUserDialog]')) {
        hilog.info(DOMAIN, TAG, CASE + '0200 aa dump result includes SwitchUserDialog');
        expect().assertFail();
      }

      let secResult = await abilityDelegator.executeShellCommand(secSwitchCmd);
      hilog.info(DOMAIN, TAG, CASE + `0200 second switch result: ${JSON.stringify(secResult)}`);
      expect(JSON.stringify(secResult)).assertContain('switch the local account successfully.');
      done();
    })
  })
}