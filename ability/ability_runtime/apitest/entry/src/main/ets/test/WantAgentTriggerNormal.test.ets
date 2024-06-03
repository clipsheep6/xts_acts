/*
 * Copyright (c) 2024 Huawei Device Co., Ltd.
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

import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium';
import WantAgent, { WantAgent as _WantAgent} from '@ohos.app.ability.wantAgent';
import wantConstant from '@ohos.app.ability.wantConstant'
import common from '@ohos.app.ability.common';
import { BusinessError } from '@ohos.base';
import hilog from '@ohos.hilog';

export default function WantAgentTriggerNormal() {
  describe('WantAgentTriggerNormalTest', () => {
    /*
     * @tc.number  : AbilityRuntime wantAgent trigger 0400
     * @tc.name    : SUB_Ability_AbilityRuntime_wantAgent_trigger_0400.
     * @tc.desc    : Implicitly starting UIAbility with StartOptions.
     * @tc.size    : MediumTest
     * @tc.type    : Function
     * @tc.level   : Level 1
     */
    it('SUB_Ability_AbilityRuntime_wantAgent_trigger_0400', 0, (done: Function) => {
      const TAG: string = 'SUB_Ability_AbilityRuntime_wantAgent_trigger_0400 ==>';
      try {
        //wantAgent对象
        let wantAgent: _WantAgent;
        // triggerInfo
        let triggerInfo : WantAgent.TriggerInfo = {
          code:0,
          startOptions : {
            windowMode: 101,
            displayId: 0,
            withAnimation: false,
            windowLeft: 100,
            windowTop: 200,
            windowWidth: 300,
            windowHeight: 400,
          }
        };

        let wantAgentInfo: WantAgent.WantAgentInfo = {
          wants: [
            {
              deviceId: '',
              bundleName: 'com.example.testapi',
              abilityName: 'MainAbility',
            }
          ],
          requestCode: 0,
          operationType: WantAgent.OperationType.START_ABILITY,
          wantAgentFlags: [WantAgent.WantAgentFlags.CONSTANT_FLAG]
        }
        // getWantAgent回调
        function getWantAgentCallback(err: BusinessError, data: _WantAgent) {
          if (err) {
            console.info(`${TAG}-getWantAgent failed, code: ${JSON.stringify(err)}`);
            expect().assertFail();
            done();
          } else {
            console.info(`${TAG}-getWantAgent ok,data: ${JSON.stringify(data)}`);
            wantAgent = data;
          }
          //trigger回调
          let triggerCallback = (err: BusinessError, data: WantAgent.CompleteData) => {
            if(err) {
              console.error(`${TAG}-triggerCallback failed! ${err}`);
              expect().assertFail();
              done();
            } else {
              console.info(`${TAG}-triggerCallback ok! ${JSON.stringify(data)}`);
            }
          }
          setTimeout(()=>{
            try {
              WantAgent.trigger(wantAgent, triggerInfo, triggerCallback);
            } catch(err) {
              console.error(`${TAG}-trigger failed! ${err}`);
              expect(err.code).assertEqual(202);
              done();
            }
          },50)
        }
        WantAgent.getWantAgent(wantAgentInfo, getWantAgentCallback)
      } catch (err) {
        console.info(TAG + "catch err = " + JSON.stringify(err));
        expect().assertFail();
        done();
      }
    })
  })
}