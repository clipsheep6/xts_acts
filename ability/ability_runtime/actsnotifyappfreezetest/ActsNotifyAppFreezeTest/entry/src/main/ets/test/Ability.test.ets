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
import AbilityDelegatorRegistry from '@ohos.application.abilityDelegatorRegistry';

const TAG = '[ActsNotifyAppFault_Test]';
const DOMAIN = 0xF811;
const CASE = 'Acts_NotifyAppFault_';
const JS_ERROR_TIME_OUT = 1000;
const APP_FREEZE_TIME_OUT = 17000;
const BEFORE_EACH_TIME_OUT = 1000;

let abilityDelegator: any;
abilityDelegator = AbilityDelegatorRegistry.getAbilityDelegator();
export default function abilityTest() {
  describe('ActsAbilityTest', function () {
    beforeAll(async function (done) {
      await abilityDelegator.executeShellCommand('bm install -p /data/ActsAppFreezeRely.hap');
      done();
    })

    beforeEach(async function (done) {
      await abilityDelegator.executeShellCommand('hilog -Q pidoff', async (data, error) => {
        hilog.info(DOMAIN, TAG, CASE + ` beforeEach, hilog -Q pidoff result: ${JSON.stringify(data.stdResult)}`);
      });
      await abilityDelegator.executeShellCommand('hilog -Q domainoff', async (err, data) => {
        hilog.info(DOMAIN, TAG, CASE + ` beforeEach, hilog -Q domainoff result: ${JSON.stringify(data.stdResult)}`);
      });
      await abilityDelegator.executeShellCommand('hilog -b D', async (data, error) => {
        hilog.info(DOMAIN, TAG, CASE + ` beforeEach, hilog -b D pidoff result: ${JSON.stringify(data.stdResult)}`);
      });
      await abilityDelegator.executeShellCommand('setenforce 0', async (err, data) => {
        hilog.info(DOMAIN, TAG, CASE + ` beforeEach, setenforce 0 result: ${JSON.stringify(data.stdResult)}`);
      });
      await abilityDelegator.executeShellCommand('hilog -r', async (data, error) => {
        hilog.info(DOMAIN, TAG, CASE + ` beforeEach, hilog -r result: ${JSON.stringify(data.stdResult)}`);
      });
      await abilityDelegator.executeShellCommand('hilog -G 20M', async (err, data) => {
        hilog.info(DOMAIN, TAG, CASE + ` beforeEach, hilog -G 20M result: ${JSON.stringify(data.stdResult)}`);
      });
      setTimeout(() => {
        hilog.info(DOMAIN, TAG, CASE + ' beforeEach execute end');
        done();
      }, BEFORE_EACH_TIME_OUT);
    })

    afterEach(async function (done) {
      await abilityDelegator.executeShellCommand('pkill -f com.acts.appFreezeRely', async (err, data) => {
        hilog.info(DOMAIN, TAG, CASE + ` afterEach, pkill result: ${JSON.stringify(data.stdResult)}`);
        done();
      })
    })

    afterAll(async function (done) {
      await abilityDelegator.executeShellCommand('bm uninstall -n com.acts.appFreezeRely');
      done();
    })

    /*
     * @tc.number: Acts_NotifyAppFault_UIAbility_0100
     * @tc.name: system application, which can notify AMS of its own faults.
     * @tc.desc: the application of UIAbility can notify AMS of its own faults(JS-ERROR).
     */
    it('Acts_NotifyAppFault_UIAbility_0100', 0, async function (done) {
      hilog.info(DOMAIN, TAG, CASE + 'UIAbility_0100 start');
      let cmd = 'hilog -x | grep app_mgr_service_inner.cpp';
      let startAbilityCmd = 'aa start -a EntryAbility -b com.acts.appFreezeRely';
      let msg = 'FaultData is: name: TypeError, faultType: 1';
      abilityDelegator.executeShellCommand(startAbilityCmd).then((data) => {
        hilog.info(DOMAIN, TAG, CASE + `UIAbility_0100 executeShellCommand, startAbility: ${JSON.stringify(data)}`);
        let result = JSON.stringify(data);
        expect(result).assertContain('start ability successfully.');
        setTimeout(() => {
          abilityDelegator.executeShellCommand(cmd).then((data) => {
            hilog.info(DOMAIN, TAG, CASE + `UIAbility_0100 executeShellCommand, data: ${JSON.stringify(data)}`);
            let res = JSON.stringify(data);
            expect(res).assertContain(msg);
            done();
          }).catch((err) => {
            hilog.info(DOMAIN, TAG, CASE + `UIAbility_0100 executeShellCommand, err: ${JSON.stringify(err)}`);
            expect().assertFail();
            done();
          })
        }, JS_ERROR_TIME_OUT)
      }).catch((err) => {
        hilog.info(DOMAIN, TAG, CASE + `UIAbility_0100 executeShellCommand, startAbility err: ${JSON.stringify(err)}`);
        expect().assertFail();
        done();
      })
    })

    /*
     * @tc.number: Acts_NotifyAppFault_UIAbility_0200
     * @tc.name: system application, which can notify AMS of its own faults.
     * @tc.desc: the application of UIAbility can notify AMS of its own faults(APP_FREEZE).
     */
    it('Acts_NotifyAppFault_UIAbility_0200', 0, async function (done) {
      hilog.info(DOMAIN, TAG, CASE + 'UIAbility_0200 start');
      let cmd = 'hilog -x | grep app_mgr_service_inner.cpp';
      let startAbilityCmd = 'aa start -a EntryAbilitySec -b com.acts.appFreezeRely';
      let msg = 'FaultData is: name: THREAD_BLOCK_6S, faultType: 2';
      await abilityDelegator.executeShellCommand(startAbilityCmd).then((data) => {
        hilog.info(DOMAIN, TAG, CASE + `UIAbility_0200 executeShellCommand, startAbility: ${JSON.stringify(data)}`);
        let resStart = JSON.stringify(data);
        expect(resStart).assertContain('start ability successfully.');
        setTimeout(async () => {
          await abilityDelegator.executeShellCommand(cmd).then((data) => {
            hilog.info(DOMAIN, TAG, CASE + `UIAbility_0200 executeShellCommand, data: ${JSON.stringify(data)}`);
            let res = JSON.stringify(data);
            expect(res).assertContain(msg);
            done();
          }).catch((err) => {
            hilog.info(DOMAIN, TAG, CASE + `UIAbility_0200 executeShellCommand, err: ${JSON.stringify(err)}`);
            expect().assertFail();
            done();
          })
        }, APP_FREEZE_TIME_OUT)
      }).catch((err) => {
        hilog.info(DOMAIN, TAG, CASE + `UIAbility_0200 executeShellCommand, startAbility err: ${JSON.stringify(err)}`);
        expect().assertFail();
        done();
      })
    })

    /*
     * @tc.number: Acts_NotifyAppFault_ServiceExtension_0100
     * @tc.name: system application, which can notify AMS of its own faults.
     * @tc.desc: the application of ServiceExtension can notify AMS of its own faults(JS-ERROR).
     */
    it('Acts_NotifyAppFault_ServiceExtension_0100', 0, async function (done) {
      hilog.info(DOMAIN, TAG, CASE + 'ServiceExtension_0100 start');
      let cmd = 'hilog -x | grep app_mgr_service_inner.cpp';
      let startAbilityCmd = 'aa start -a serviceAbility -b com.acts.appFreezeRely';
      let msg = 'FaultData is: name: TypeError, faultType: 1';
      abilityDelegator.executeShellCommand(startAbilityCmd).then((data) => {
        hilog.info(DOMAIN, TAG, CASE + `ServiceExtension_0100 execute, startAbility: ${JSON.stringify(data)}`);
        let resStart = JSON.stringify(data);
        expect(resStart).assertContain('start ability successfully.');
        setTimeout(() => {
          abilityDelegator.executeShellCommand(cmd).then((data) => {
            hilog.info(DOMAIN, TAG, CASE + `ServiceExtension_0100 execute, data: ${JSON.stringify(data)}`);
            let res = JSON.stringify(data);
            expect(res).assertContain(msg);
            done();
          }).catch((err) => {
            hilog.info(DOMAIN, TAG, CASE + `ServiceExtension_0100 execute, err: ${JSON.stringify(err)}`);
            expect().assertFail();
            done();
          })
        }, JS_ERROR_TIME_OUT)
      }).catch((err) => {
        hilog.info(DOMAIN, TAG, CASE + `ServiceExtension_0100 execute, startAbility err: ${JSON.stringify(err)}`);
        expect().assertFail();
        done();
      })
    })

    /*
     * @tc.number: Acts_NotifyAppFault_ServiceExtension_0200
     * @tc.name: system application, which can notify AMS of its own faults.
     * @tc.desc: the application of ServiceExtension can notify AMS of its own faults(APP_FREEZE).
     */
    it('Acts_NotifyAppFault_ServiceExtension_0200', 0, async function (done) {
      hilog.info(DOMAIN, TAG, CASE + 'ServiceExtension_0200 start');
      let cmd = 'hilog -x | grep app_mgr_service_inner.cpp';
      let startAbilityCmd = 'aa start -a EntryAbilityThi -b com.acts.appFreezeRely';
      let msg = 'FaultData is: name: THREAD_BLOCK_6S, faultType: 2';
      await abilityDelegator.executeShellCommand(startAbilityCmd).then((data) => {
        hilog.info(DOMAIN, TAG, CASE + `ServiceExtension_0200 execute, startAbility: ${JSON.stringify(data)}`);
        let resStart = JSON.stringify(data);
        expect(resStart).assertContain('start ability successfully.');
        setTimeout(async () => {
          await abilityDelegator.executeShellCommand(cmd).then((data) => {
            hilog.info(DOMAIN, TAG, CASE + `ServiceExtension_0200 execute, data: ${JSON.stringify(data)}`);
            let res = JSON.stringify(data);
            expect(res).assertContain(msg);
            done();
          }).catch((err) => {
            hilog.info(DOMAIN, TAG, CASE + `ServiceExtension_0200 execute, err: ${JSON.stringify(err)}`);
            expect().assertFail();
            done();
          })
        }, APP_FREEZE_TIME_OUT)
      }).catch((err) => {
        hilog.info(DOMAIN, TAG, CASE + `ServiceExtension_0200 execute, startAbility err: ${JSON.stringify(err)}`);
        expect().assertFail();
        done();
      })
    })

    /*
     * @tc.number: Acts_NotifyAppFault_FormExtension_0100
     * @tc.name: system application, which can notify AMS of its own faults.
     * @tc.desc: the application of FormExtension can notify AMS of its own faults(JS-ERROR).
     */
    it('Acts_NotifyAppFault_FormExtension_0100', 0, async function (done) {
      hilog.info(DOMAIN, TAG, CASE + 'FormExtension_0100 start');
      let cmd = 'hilog -x | grep app_mgr_service_inner.cpp';
      let startAbilityCmd = 'aa start -a EntryAbilityFour -b com.acts.appFreezeRely';
      let msg = 'FaultData is: name: TypeError, faultType: 1';
      abilityDelegator.executeShellCommand(startAbilityCmd).then((data) => {
        hilog.info(DOMAIN, TAG, CASE + `FormExtension_0100 execute, startAbility: ${JSON.stringify(data)}`);
        let resStart = JSON.stringify(data);
        expect(resStart).assertContain('start ability successfully.');
        setTimeout(() => {
          abilityDelegator.executeShellCommand(cmd).then((data) => {
            hilog.info(DOMAIN, TAG, CASE + `FormExtension_0100 execute, data: ${JSON.stringify(data)}`);
            let res = JSON.stringify(data);
            expect(res).assertContain(msg);
            done();
          }).catch((err) => {
            hilog.info(DOMAIN, TAG, CASE + `FormExtension_0100 execute, err: ${JSON.stringify(err)}`);
            expect().assertFail();
            done();
          })
        }, JS_ERROR_TIME_OUT)
      }).catch((err) => {
        hilog.info(DOMAIN, TAG, CASE + `FormExtension_0100 execute, startAbility err: ${JSON.stringify(err)}`);
        expect().assertFail();
        done();
      })
    })
  })
}