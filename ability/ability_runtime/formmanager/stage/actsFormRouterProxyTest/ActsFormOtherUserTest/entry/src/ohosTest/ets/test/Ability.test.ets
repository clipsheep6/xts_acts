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
import formHost from '@ohos.app.form.formHost';
import Want from '@ohos.app.ability.Want';
import base from '@ohos.base';
import common from '@ohos.app.ability.common';
import commonEventManager from '@ohos.commonEventManager';

let subscribe: commonEventManager.CommonEventSubscriber;
let testAbilityContext: common.UIAbilityContext;
let commonEvent: commonEventManager.CommonEventSubscribeInfo = {
  events: ['FMS_onAddForm_commonEvent']
};

let formId: string = '';

export default function abilityTest() {
  describe('ActsAbilityTest', (done: Function) => {
    // Defines a test suite. Two parameters are supported: test suite name and test suite function.
    beforeAll((done: Function) => {
      testAbilityContext = AppStorage.get<common.UIAbilityContext>('TestAbilityContext') as common.UIAbilityContext;
      commonEventManager.createSubscriber(commonEvent).then(data => {
        subscribe = data;
        commonEventManager.subscribe(subscribe, async (error: base.BusinessError, data: commonEventManager.CommonEventData) => {
          if (data.event === "FMS_onAddForm_commonEvent" && data.parameters) {
            formId = data.parameters['formId1'].toString();
          }
        })
        testAbilityContext.startAbility({
          bundleName: 'com.example.actsformrouterusertest',
          abilityName: 'EntryAbility',
        });
      })
      done();
    })
    beforeEach((done: Function) => {
      // Presets an action, which is performed before each unit test case starts.
      // The number of execution times is the same as the number of test cases defined by **it**.
      // This API supports only one parameter: preset action function.
    })
    afterEach((done: Function) => {
      // Presets a clear action, which is performed after each unit test case ends.
      // The number of execution times is the same as the number of test cases defined by **it**.
      // This API supports only one parameter: clear action function.
    })
    afterAll((done: Function) => {
      // Presets a clear action, which is performed after all test cases of the test suite end.
      // This API supports only one parameter: clear action function.
    })

    /**
     * @tc.number: Acts_Form_OnRouterExtension_6700
     * @tc.name: setRouterProxy interface error code checking
     * @tc.desc: The AsyncCallback method calls the setRouterProxy interface,
     *            and other users add cards using the created card ID, Return 16501003 error code.
     * @ts.size: MediumTest
     * @ts.type: Function
     * @ts.level: Level 3
     */
    it('Acts_Form_OnRouterExtension_6700', 0, async (done: Function) => {
      hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_6700 START');
      if (formId !== null) {
        let formIds: string[] = [formId.toString()];
        formHost.setRouterProxy(formIds, (want: Want) => {
          hilog.info(0x0000, 'testTag', 'formHost recv router event, want:' + JSON.stringify(want));
        }, (err: base.BusinessError) => {
          hilog.error(0x0000, 'testTag', 'set router proxy error: ' + err);
          expect(err.code).assertEqual(16501003);
          hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_6700 End');
          done();
        })
      }
    })

    /**
     * @tc.number: Acts_Form_OnRouterExtension_6800
     * @tc.name: setRouterProxy interface error code checking
     * @tc.desc: The Promise method calls the setRouterProxy interface,
     *            and other users add cards using the created card ID, Return 16501003 error code.
     * @ts.size: MediumTest
     * @ts.type: Function
     * @ts.level: Level 3
     */
    it('Acts_Form_OnRouterExtension_6800', 0, async (done: Function) => {
      hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_6800 START');

      if (formId !== null) {
        let formIds: string[] = [formId.toString()];
        formHost.setRouterProxy(formIds, (want: Want) => {
          hilog.info(0x0000, 'testTag', 'formHost recv router event, want:' + JSON.stringify(want));
        }).then(() => {
          hilog.info(0x0000, 'testTag', 'formHost set router proxy succes');
        }).catch((err: base.BusinessError) => {
          hilog.error(0x0000, 'testTag', 'set router proxy error: ' + err);
          expect(err.code).assertEqual(16501003);
          hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_6800 End');
          done();
        })
      }
    })

    /**
     * @tc.number: Acts_Form_OnRouterExtension_6900
     * @tc.name: clearRouterProxy interface error code checking
     * @tc.desc: The AsyncCallback method calls the clearRouterProxy interface,
     *            and other users add cards using the created card ID, Return 16501003 error code.
     * @ts.size: MediumTest
     * @ts.type: Function
     * @ts.level: Level 3
     */
    it('Acts_Form_OnRouterExtension_6900', 0, async (done: Function) => {
      hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_6900 START');
      if (formId !== null) {
        let formIds: string[] = [formId.toString()];
        formHost.clearRouterProxy(formIds, (err: base.BusinessError) => {
          hilog.error(0x0000, 'testTag', 'clear router proxy error: ' + err.code);
          expect(err.code).assertEqual(16501003);
          hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_6900 End');
          done();
        })
      }
    })

    /**
     * @tc.number: Acts_Form_OnRouterExtension_7000
     * @tc.name: clearRouterProxy interface error code checking
     * @tc.desc: The Promise method calls the clearRouterProxy interface,
     *            and other users add cards using the created card ID, Return 16501003 error code.
     * @ts.size: MediumTest
     * @ts.type: Function
     * @ts.level: Level 3
     */
    it('Acts_Form_OnRouterExtension_7000', 0, async (done: Function) => {
      hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_7000 START');
      if (formId !== null) {
        let formIds: string[] = [formId.toString()];
        formHost.clearRouterProxy(formIds)
          .then(() => {
            hilog.info(0x0000, 'testTag', 'formHost clear router proxy succes');
          })
          .catch((err: base.BusinessError) => {
            hilog.error(0x0000, 'testTag', 'clear router proxy error: ' + err);
            expect(err.code).assertEqual(16501003);
            hilog.info(0x0000, 'testTag', 'Acts_Form_OnRouterExtension_7000 End');
            done();
          })
      }
    })
  })
}


