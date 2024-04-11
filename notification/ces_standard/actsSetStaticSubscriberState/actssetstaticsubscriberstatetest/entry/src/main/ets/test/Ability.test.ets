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
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium'
import CommonEventManager from '@ohos.commonEventManager'
import common from '@ohos.app.ability.common';

export function getContext(): common.UIAbilityContext {
  let context = AppStorage.get('context') as common.UIAbilityContext;
  console.info('getContext is ' + context);
  return context;
}

export default function abilityTest() {
  describe('ActsSetStaticSubscriberStateTest', () => {

    /*
     * @tc.number: Acts_SetStaticSubscriberStateTest_0100
     * @tc.name: After static subscription to public events, you can configure whether to enable them by event.
     * @tc.desc: Verify that the interface is called in a non-system application, and the call fails.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level Level 1
     */
    it('Acts_SetStaticSubscriberStateTest_0100', 0, async (done: Function) => {
      getContext().startAbilityForResult({
        bundleName: 'com.example.setstaticsubscriberstaterely',
        abilityName: 'EntryAbility',
        parameters: {
          key: "Acts_SetStaticSubscriberStateTest_0100",
        }
      }, (error, data) => {
        console.log('======> Acts_SetStaticSubscriberStateTest_0100 error.code ======>' + error.code);
        console.log('======> Acts_SetStaticSubscriberStateTest_0100 data ======>' + data.want.parameters.resultStr);
        expect(error.code).assertEqual(0);
        expect(data.want.parameters.resultStr).assertEqual(202);
        done();
      });
    })

    /*
     * @tc.number: Acts_SetStaticSubscriberStateTest_0200
     * @tc.name: After static subscription to public events, you can configure whether to enable them by event.
     * @tc.desc: Verify that the calling API parameter is enabled to NULL, and the call failed.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level Level 1
     */
    it('Acts_SetStaticSubscriberStateTest_0200', 0, async (done: Function) => {
      try {
        CommonEventManager.setStaticSubscriberState(null, ["usual.event.StaticCommonEventB"]).then(() => {
          console.info(`Acts_SetStaticSubscriberStateTest_0200 state null`);
          expect().assertFail();
          done();
        })
      } catch (err) {
        console.info(`Acts_SetStaticSubscriberStateTest_0200 state null, errCode: ${err.code}`,
          `errMes: ${err.message}`);
        expect(err.code).assertEqual(401);
        done();
      }
    })

     /*
     * @tc.number: Acts_SetStaticSubscriberStateTest_0300
     * @tc.name: After static subscription to public events, you can configure whether to enable them by event.
     * @tc.desc: Verify that the calling API parameter is enabled to undefined, and the call failed.
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level Level 1
     */
    it('Acts_SetStaticSubscriberStateTest_0300', 0, async (done: Function) => {
      try {
        CommonEventManager.setStaticSubscriberState(undefined, ["usual.event.StaticCommonEventB"]).then(() => {
          console.info(`Acts_SetStaticSubscriberStateTest_0200 state undefined`);
          expect().assertFail();
          done();
        })
      } catch (err) {
        console.info(`Acts_SetStaticSubscriberStateTest_0200 state undefined, errCode: ${err.code},`,
          `errMes: ${err.message}`);
        expect(err.code).assertEqual(401);
        done();
      }
    })
  })
}