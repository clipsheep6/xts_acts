/*
 * Copyright (c) 2023 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the 'License');
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an 'AS IS' BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

import hilog from '@ohos.hilog';
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium';
import AbilityDelegatorRegistry from '@ohos.app.ability.abilityDelegatorRegistry';
import backgroundTaskManager from '@ohos.resourceschedule.backgroundTaskManager';

let abilityDelegator = AbilityDelegatorRegistry.getAbilityDelegator();
let tag = 'KeyLogTest';

async function requestSuspendDelay() {
  hilog.info(0x0000, tag, '%{public}s', 'requestSuspendDelay start ');
  let myReason = 'test ActsDebuggableAaProcessTest';
  let delayInfo = backgroundTaskManager.requestSuspendDelay(myReason, () => {
    hilog.info(0x0000, tag, '%{public}s', 'requestSuspendDelay delay will timeout. ');
  });
  globalThis.delayId = delayInfo.requestId;
  hilog.info(0x0000, tag, '%{public}s', 'requestSuspendDelay delayId is ' + globalThis.delayId);
  hilog.info(0x0000, tag, '%{public}s',
    'requestSuspendDelay actualDelayTime is ' + delayInfo.actualDelayTime);
}

function sleep(time) {
  return new Promise((resolve, reject) => {
    setTimeout(() => {
      resolve(null);
    }, time)
  });
}

export default function actsDebuggableAaProcessTest() {

  describe('ActsDebuggableAaProcessTest', function () {
    beforeAll(async function () {
      await sleep(1000);
      await requestSuspendDelay();
    })

    beforeEach(async function () {
      await abilityDelegator.executeShellCommand('hilog -r').then(data => {
        hilog.info(0x0000, tag, '%{public}s',
          'beforeEach KeyLogTest hilog -r data is: ' + JSON.stringify(data));
      }).catch(err => {
        hilog.info(0x0000, tag, '%{public}s',
          'beforeEach KeyLogTest hilog -r err is: ' + JSON.stringify(err));
      });
      await sleep(2000);
    })

    afterEach(function () {
    })

    afterAll(async function () {
      await sleep(1000);
    })

    /*
     * @tc.number  SUB_AA_AMS_KeyLog_0100
     * @tc.name    aa process -b com.example.timeout -a EntryAbility -m entry -p 'sleep 100' -S
     * @tc.desc    Function test
     * @tc.level   1
     */
    it('SUB_AA_AMS_KeyLog_0100', 1, async function (done) {
      await abilityDelegator.executeShellCommand(
        'aa start -b com.example.logtestassist -a EntryAbility -m entry').then(data => {
        hilog.info(0x0000, tag, '%{public}s',
          'SUB_AA_AMS_KeyLog_0100 start data is: ' + JSON.stringify(data));
      }).catch(err => {
        hilog.info(0x0000, tag, '%{public}s',
          'SUB_AA_AMS_KeyLog_0100 start err is: ' + JSON.stringify(err));
      });
      await sleep(1000);

      let res = undefined
      let key = "\"StartAbility|Start ability come|LoadAbility|StartProcess|MainThread|AttachAbilityThread|OnStart\"";
      await abilityDelegator.executeShellCommand('hilog -x | grep -E ' + key).then(data => {
        hilog.info(0x0000, tag, '%{public}s', 'SUB_AA_AMS_KeyLog_0100 hilog data is: ' + data.stdResult);
        res = data.stdResult;
      }).catch(err => {
        hilog.info(0x0000, tag, '%{public}s',
          'SUB_AA_AMS_KeyLog_0100 hilog err is: ' + JSON.stringify(err));
      });
      expect(res).assertContain('StartAbility');
      expect(res).assertContain('Start ability come');
      expect(res).assertContain('LoadAbility');
      expect(res).assertContain('StartProcess');
      expect(res).assertContain('MainThread');
      expect(res).assertContain('AttachAbilityThread');
      expect(res).assertContain('OnStart');
      done();
    })

    /*
     * @tc.number  SUB_AA_AMS_KeyLog_0200
     * @tc.name    aa process -b com.example.timeout -a EntryAbility -m entry -p 'sleep 100' -S
     * @tc.desc    Function test
     * @tc.level   1
     */
    it('SUB_AA_AMS_KeyLog_0200', 1, async function (done) {
      await abilityDelegator.executeShellCommand(
        'aa start -b com.example.logtestassist -a EntryAbility -m entry').then(data => {
        hilog.info(0x0000, tag, '%{public}s',
          'SUB_AA_AMS_KeyLog_0200 start data is: ' + JSON.stringify(data));
      }).catch(err => {
        hilog.info(0x0000, tag, '%{public}s',
          'SUB_AA_AMS_KeyLog_0200 start err is: ' + JSON.stringify(err));
      });
      await sleep(1000);

      await abilityDelegator.executeShellCommand('hilog -r').then(data => {
        hilog.info(0x0000, tag, '%{public}s',
          'beforeEach KeyLogTest hilog -r data is: ' + JSON.stringify(data));
      }).catch(err => {
        hilog.info(0x0000, tag, '%{public}s',
          'beforeEach KeyLogTest hilog -r err is: ' + JSON.stringify(err));
      });
      await sleep(1500);

      let res = undefined
      await abilityDelegator.executeShellCommand('hilog -x | grep 1300').then(data => {
        hilog.info(0x0000, tag, '%{public}s', 'SUB_AA_AMS_KeyLog_0200 hilog data is: ' + data.stdResult);
        res = data.stdResult;
      }).catch(err => {
        hilog.info(0x0000, tag, '%{public}s',
          'SUB_AA_AMS_KeyLog_0200 hilog err is: ' + JSON.stringify(err));
      });
      expect(res).assertContain('TerminateAbility');
      expect(res).assertContain('PrepareTerminate');
      expect(res).assertContain('Background');
      expect(res).assertContain('TerminateAbility');
      expect(res).assertContain('AbilityTerminated');
      done();
    })
  })
}