/*
 * Copyright (c) 2021 Huawei Device Co., Ltd.
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
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from "@ohos/hypium"
import commonEvent from '@ohos.commonEvent';
import display from '@ohos.display';
import common from '@ohos.app.ability.common';
import Want from '@ohos.app.ability.Want';
import CommonEventManager from '@ohos.commonEventManager';
import { BusinessError } from '@ohos.base';

function sleep(time: number) {
  return new Promise<void>((resolve) => setTimeout(resolve, time))
}

let displayClassId = display.getDefaultDisplaySync().id;

let subscriberInfo_MainAbility:CommonEventManager.CommonEventSubscribeInfo = {
  events: ["ACTS_ConnectAbility_0100_CommonEvent", "ACTS_TerminateSelf_CommonEvent", "ACTS_TerminateSelf_CommonEvent9"]
};
const START_ABILITY_TIMEOUT = 5000;
console.debug("====>in Ability.test====>");

export default function abilityTest() {
  describe('ActsGetDisplayIdStartAbilityForResultTest', () => {
    afterEach(async (done:Function) => {
        console.debug('= ACTS_afterEach ====<begin');
        await sleep(2000);
        console.debug('= ACTS_afterEach ====<end');
        done();
    })

    console.debug("====>in ActsGetDisplayIdStartAbilityForResultTest====>");

    /*
    * @tc.number: ACTS_startAbilityForResult_0800
    * @tc.name: Get the specified displayId to start Ability
    * @tc.desc: Verify Get displayId to startAbilityForResult Ability
    */
    it('ACTS_startAbilityForResult_0800', 0, async (done:Function) => {
      console.log('ACTS_startAbilityForResult_0800====<begin');
      let subscriber:CommonEventManager.CommonEventSubscriber;
      let id:number;

      commonEvent.createSubscriber(subscriberInfo_MainAbility).then(async (data) => {
        console.debug("====>ACTS_startAbilityForResult_0800 Create Subscriber====>");
        subscriber = data;
        commonEvent.subscribe(subscriber, (err, data) => {
          console.debug("====>ACTS_startAbilityForResult_0800 Subscribe CallBack data:====>" + JSON.stringify(data));

           let processInfoCheck = async (data:CommonEventManager.CommonEventData):Promise<void> => {
            console.info('====> ACTS_startAbilityForResult_0800=====>');
            expect(data.parameters!['displayId']).assertEqual(displayClassId);
            done();
          }

          if (data.event == "ACTS_TerminateSelf_CommonEvent") {
            console.info('====> ACTS_startAbilityForResult_0800 start success=====>');
            clearTimeout(id);
            processInfoCheck(data);
            commonEvent.unsubscribe(subscriber, unSubscribeCallback)
          }
        });
        await globalThis.abilityContext.startAbilityForResult(
          {
            bundleName: 'com.example.startabilityforresult',
            abilityName: 'com.example.startabilityforresult.MainAbility2',
          }, {
          displayId: displayClassId
        }).then(() => {
          console.debug("====>ACTS_startAbilityForResult_0800 end====>");
        })
      })

      let unSubscribeCallback = ():void => {
        console.debug("====>UnSubscribe0800 CallBack====>");
      }

      let timeout = ():void => {
        expect().assertFail();
        console.log('ACTS_startAbilityForResult_0800 timeout');
      }

      id = setTimeout(timeout, START_ABILITY_TIMEOUT);
      console.log('Start  ACTS_startAbilityForResult_0800 timer id : ' + id);

    })

    /*
    * @tc.number: ACTS_startAbilityForResult_0900
    * @tc.name: Get the specified displayId to start Ability
    * @tc.desc: Verify that the ability to startAbilityForResult when displayId is a string
    */
    it('ACTS_startAbilityForResult_0900', 0, async (done:Function) => {
      console.log('ACTS_startAbilityForResult_0900====<begin');
      let subscriber:CommonEventManager.CommonEventSubscriber;
      let id:number;

      commonEvent.createSubscriber(subscriberInfo_MainAbility).then(async (data) => {
        console.debug("====>ACTS_startAbilityForResult_0900 Create Subscriber====>");
        subscriber = data;
        commonEvent.subscribe(subscriber, (err, data) => {
          console.debug("====>ACTS_startAbilityForResult_0900 Subscribe CallBack data:====>" + JSON.stringify(data));

          let processInfoCheck = async ():Promise<void> => {
            console.info('====> ACTS_startAbilityForResult_0900=====>');
            expect(data.parameters!['displayId']).assertEqual(0);
            commonEvent.unsubscribe(subscriber, unSubscribeCallback);
            done();
          }

          if (data.event == "ACTS_TerminateSelf_CommonEvent") {
            console.info('====> ACTS_startAbilityForResult_0900 start success=====>');
            clearTimeout(id);
            processInfoCheck();
          }
        });
        await globalThis.abilityContext.startAbilityForResult(
          {
            bundleName: 'com.example.startabilityforresult',
            abilityName: 'com.example.startabilityforresult.MainAbility2',
          }, {
          displayId: undefined
        }).then(() => {
          console.debug("====>ACTS_startAbilityForResult_0900 end====>");
        }).catch((err:BusinessError) => {
          expect().assertFail();
          console.debug("====>ACTS_startAbilityForResult_0900 err====>" + err);
        })
      })

      let unSubscribeCallback = ():void => {
        console.debug("====>ACTS_startAbilityForResult_0900 UnSubscribe CallBack====>");
      }

      let timeout = ():void => {
        expect().assertFail();
        console.log('ACTS_startAbilityForResult_0900 timeout');
      }

      id = setTimeout(timeout, START_ABILITY_TIMEOUT);
      console.log('Start  ACTS_startAbilityForResult_0900 timer id : ' + id);

    })

    /*
    * @tc.number: ACTS_startAbilityForResult_1000
    * @tc.name: Get the specified displayId to start Ability
    * @tc.desc: Validation parameters want to filter the DISPLAY_ID of parameters
    */
    it('ACTS_startAbilityForResult_1000', 0, async (done:Function) => {
      console.log('ACTS_startAbilityForResult_1000====<begin');
      let subscriber:CommonEventManager.CommonEventSubscriber;
      let id:number;

      commonEvent.createSubscriber(subscriberInfo_MainAbility).then(async (data) => {
        console.debug("====>ACTS_startAbilityForResult_1000 Create Subscriber====>");
        subscriber = data;
        commonEvent.subscribe(subscriber, (err, data) => {
          console.debug("====>ACTS_startAbilityForResult_1000 Subscribe CallBack data:====>" + JSON.stringify(data));

          let processInfoCheck = async (data:CommonEventManager.CommonEventData):Promise<void> => {
            console.info('====> ACTS_startAbilityForResult_1000=====>');
            expect(data.parameters!['displayId']).assertEqual(0);
            done();
          }

          if (data.event == "ACTS_TerminateSelf_CommonEvent") {
            console.info('====> ACTS_startAbilityForResult_1000 start success=====>');
            clearTimeout(id);
            processInfoCheck(data);
            commonEvent.unsubscribe(subscriber, unSubscribeCallback)
          }
        });
        await globalThis.abilityContext.startAbilityForResult(
          {
            bundleName: 'com.example.startabilityforresult',
            abilityName: 'com.example.startabilityforresult.MainAbility2',
            parameters:
            {
              "ohos.aafwk.param.displayId": 10,
            }
          }, {
        }).then(() => {
          console.debug("====>ACTS_startAbilityForResult_1000 end====>");
        }).catch((err:BusinessError) => {
          expect().assertFail();
          console.debug("====>ACTS_startAbilityForResult_1000 err====>" + err);
        })
      })


      let unSubscribeCallback = ():void => {
        console.debug("====>ACTS_startAbilityForResult_1000 UnSubscribe CallBack====>");
      }

      let timeout = ():void => {
        expect().assertFail();
        console.log('ACTS_startAbilityForResult_1000 timeout');
      }

      id = setTimeout(timeout, START_ABILITY_TIMEOUT);
      console.log('Start  ACTS_startAbilityForResult_1000 timer id : ' + id);

    })
  })
}