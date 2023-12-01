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

import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium'
import common from '@ohos.app.ability.common'
import commonEventManager from '@ohos.commonEventManager'
import AbilityDelegatorRegistry from '@ohos.app.ability.abilityDelegatorRegistry'
import router from '@ohos.router'
import Utils from './Utils'

export default function abilityTest() {

  describe('ACTSAbilityTest', function () {
    let context = getContext(this) as common.UIAbilityContext;
    let TAG = "";
    let sleepTimeOne = 1000;
    let globalSubscribe = undefined
    })
    beforeEach(async function (done) {
      console.info("ACTSAbilityTest beforeEach start");
      let options = {
        url: 'TestAbility/pages/p1',
      }
      let result;
      try {
        result = await router.pushUrl(options);
        console.info("ACTS_UIExtension push page result: " + JSON.stringify(result));
      } catch (err) {
        console.error("ACTS_UIExtension push page error: " + err);
      }
      done()
    });

    it('StartAbilityAsCaller_0100',0, async function (done) {
      TAG = 'StartAbilityAsCaller_0100 == ';
      console.log(TAG + "begin");

      let onResultEvent = 'ACTS_StartAsCaller_OnResult';
      var subscribeInfo = {
        events: [onResultEvent]
      }
      await commonEventManager.createSubscriber(subscribeInfo).then(async (data) => {
        console.log(TAG + "createSubscriber data : " + JSON.stringify(data));
        globalSubscribe = data;
        commonEventManager.subscribe(globalSubscribe, async (err, data) => {
          console.log(TAG + "SubscribeInfoCallback : " + JSON.stringify(data));
          let result = data.parameters.result;
          expect(result.want.bundleName).assertEqual('com.example.abilitytest');
          expect(result.want.abilityName).assertEqual('EntryAbility');
          done();
        });
      }).catch((error) => {
        console.log(TAG + "createSubscriber err : " + JSON.stringify(error));
        expect().assertFail();
        done();
      })
    })
}