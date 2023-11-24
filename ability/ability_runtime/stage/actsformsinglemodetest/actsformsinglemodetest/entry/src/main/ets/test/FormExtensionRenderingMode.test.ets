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
import { describe, it, expect, afterEach } from '@ohos/hypium'
import commonEventManager from '@ohos.commonEventManager';
import { BusinessError } from '@ohos.base';
import abilityDelegatorRegistry from '@ohos.app.ability.abilityDelegatorRegistry';

let abilityDelegator = abilityDelegatorRegistry.getAbilityDelegator();
let sleep = async (delay: number): Promise<void> => {
  return new Promise((resolve, _) => {
    setTimeout(async () => {
      resolve();
    }, delay);
  });
};


export default function formExtensionRenderingModeTest() {
  describe('formExtensionRenderingModeTest', async () => {
    afterEach(async () => {
      await abilityDelegator.getCurrentTopAbility().then((Ability) => {
        Ability?.context?.terminateSelf();
      })
    })
    /**
     * @tc.number: SUB_AA_FormExtensionAbility_RenderingMode_0100
     * @tc.name: Set the form rendering mode SINGLE_COLOR. Verify the parameters of want
     * @tc.desc: The want form_rendering_mode parameter is 1.
     * @tc.level 1
     */
    it('SUB_AA_FormExtensionAbility_RenderingMode_0100', 0, async (done: Function) => {
      let TESTTAG = 'SUB_AA_FormExtensionAbility_RenderingMode_0100';
      hilog.info(0x0000, TESTTAG, '%{public}s', 'start');
      let form_rendering_mode: number = NaN;
      let subscriber: commonEventManager.CommonEventSubscriber;
      let onCallBack = (_: BusinessError, data: commonEventManager.CommonEventData) => {
        form_rendering_mode = Number(data.parameters?.form_rendering_mode);
        hilog.info(0x0000, TESTTAG, 'form_rendering_mode %{public}s', form_rendering_mode);
        commonEventManager.unsubscribe(subscriber, () => { });
        hilog.info(0x0000, TESTTAG, 'subscribe %{public}s', 'unsbusribe');
      }
      commonEventManager.createSubscriber({
        events: ['SINGLE_COLOR_RENDERING_TYPE']
      }).then((data) => {
        subscriber = data;
        commonEventManager.subscribe(subscriber, onCallBack);
        hilog.info(0x0000, TESTTAG, 'subscribe %{public}s', 'create');
      })
      await sleep(1000)
      abilityDelegator.startAbility({
        bundleName: 'com.example.formmonochromemodetest',
        abilityName: 'CreateFormAbility',
        parameters: {
          renderMode: 'SINGLE_COLOR'
        }
      })
      await sleep(1000);
      expect(form_rendering_mode).assertEqual(1);
      done();
    })

    /**
     * @tc.number: SUB_AA_FormExtensionAbility_RenderingMode_0200
     * @tc.name: Set the form rendering mode FULL_COLOR. Verify the parameters of want
     * @tc.desc: The want form_rendering_mode parameter is 0.
     * @tc.level 3
     */
    it('SUB_AA_FormExtensionAbility_RenderingMode_0200', 0, async (done: Function) => {
      let TESTTAG = 'SUB_AA_FormExtensionAbility_RenderingMode_0200';
      hilog.info(0x0000, TESTTAG, '%{public}s', 'start');
      let form_rendering_mode: number = NaN;
      let subscriber: commonEventManager.CommonEventSubscriber;
      let onCallBack = (_: BusinessError, data: commonEventManager.CommonEventData) => {
        form_rendering_mode = Number(data.parameters?.form_rendering_mode);
        hilog.info(0x0000, TESTTAG, 'form_rendering_mode %{public}s', form_rendering_mode);
        commonEventManager.unsubscribe(subscriber, () => { });
        hilog.info(0x0000, TESTTAG, 'subscribe %{public}s', 'unsbusribe');
      }
      commonEventManager.createSubscriber({
        events: ['FULL_COLOR_RENDERING_TYPE']
      }).then((data) => {
        subscriber = data;
        commonEventManager.subscribe(subscriber, onCallBack);
        hilog.info(0x0000, TESTTAG, 'subscribe %{public}s', 'create');
      })
      await sleep(1000);
      abilityDelegator.startAbility({
        bundleName: 'com.example.formmonochromemodetest',
        abilityName: 'CreateFormAbility',
        parameters: {
          renderMode: 'FULL_COLOR'
        }
      })
      await sleep(1000);
      expect(form_rendering_mode).assertEqual(0);
      done();
    })

    /**
     * @tc.number: SUB_AA_FormExtensionAbility_RenderingMode_0300
     * @tc.name: Do not Set the form rendering mode. Verify the parameters of want
     * @tc.desc: The want form_rendering_mode parameter is 0.
     * @tc.level 3
     */
    it('SUB_AA_FormExtensionAbility_RenderingMode_0300', 0, async (done: Function) => {
      let TESTTAG = 'SUB_AA_FormExtensionAbility_RenderingMode_0300';
      hilog.info(0x0000, TESTTAG, '%{public}s', 'start');
      let form_rendering_mode: number = NaN;
      let subscriber: commonEventManager.CommonEventSubscriber;
      let onCallBack = (_: BusinessError, data: commonEventManager.CommonEventData) => {
        form_rendering_mode = Number(data.parameters?.form_rendering_mode);
        hilog.info(0x0000, TESTTAG, 'form_rendering_mode %{public}s', form_rendering_mode);
        commonEventManager.unsubscribe(subscriber, () => { });
        hilog.info(0x0000, TESTTAG, 'subscribe %{public}s', 'unsbusribe');
      }
      commonEventManager.createSubscriber({
        events: ['DEFAULT_RENDERING_TYPE']
      }).then((data) => {
        subscriber = data;
        commonEventManager.subscribe(subscriber, onCallBack);
        hilog.info(0x0000, TESTTAG, 'subscribe %{public}s', 'create');
      })
      await sleep(1000);
      abilityDelegator.startAbility({
        bundleName: 'com.example.formmonochromemodetest',
        abilityName: 'CreateFormAbility',
        parameters: {
          renderMode: 'DEFAULT'
        }
      })
      await sleep(1000);
      expect(form_rendering_mode).assertEqual(0);
      done();
    })

  })
}