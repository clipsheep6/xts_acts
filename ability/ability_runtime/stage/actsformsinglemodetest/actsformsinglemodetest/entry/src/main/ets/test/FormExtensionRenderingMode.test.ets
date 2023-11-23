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
import { describe, it, expect } from '@ohos/hypium'
import commonEventManager from '@ohos.commonEventManager';
import { BusinessError } from '@ohos.base';
import abilityDelegatorRegistry from '@ohos.app.ability.abilityDelegatorRegistry';

let abilityDelegator = abilityDelegatorRegistry.getAbilityDelegator();
const sleep = async (delay: number): Promise<void> => {
  return new Promise((resolve, _) => {
    setTimeout(async () => {
      resolve();
    }, delay);
  });
};

export default function formExtensionRenderingModeTest() {
  describe('formExtensionRenderingModeTest', async () => {
    it('SUB_AA_FormExtensionAbility_RenderingMode_0100', 0, async (done: Function) => {
      let ATG = 'SUB_AA_FormExtensionAbility_RenderingMode_0100';
      let singleMode: string = '';
      let fullMode: string = '';
      let defaultMode: string = '';
      let createSubscriberEvents: string[] = [
        'SINGLE_COLOR_RENDERING_TYPE',
        'FULL_COLOR_RENDERING_TYPE',
        'DEFAULT_RENDERING_TYPE'
      ];
      let subscriber: commonEventManager.CommonEventSubscriber;
      let onCallBack = async (error: BusinessError, data: commonEventManager.CommonEventData) => {
        hilog.info(0x0000, ATG, 'event parameters data  %{public}s', data.parameters);
        let wantRenderingMode: string = data.parameters?.wantRenderingMode || '';
        if (data.event === createSubscriberEvents[0]) {
          singleMode = wantRenderingMode;
          hilog.info(0x0000, ATG, 'singleMode  %{public}s', singleMode);
        }
        if (data.event === createSubscriberEvents[1]) {
          fullMode = wantRenderingMode;
          hilog.info(0x0000, ATG, 'fullMode  %{public}s', fullMode);
        }
        if (data.event === createSubscriberEvents[2]) {
          defaultMode = wantRenderingMode;
          hilog.info(0x0000, ATG, 'fullMode  %{public}s', defaultMode);
        }
      }
      commonEventManager.createSubscriber({
        events: createSubscriberEvents
      }).then((data) => {
        subscriber = data;
        commonEventManager.subscribe(subscriber, onCallBack);
      })
      await sleep(1000);
      abilityDelegator.startAbility({
        bundleName: 'com.example.formmonochromemodetest',
        abilityName: 'CreateFormAbility'
      })
      await sleep(5000);
      expect(singleMode).assertEqual('SINGLE_COLOR');
      expect(fullMode).assertEqual('FULL_COLOR');
      expect(defaultMode).assertEqual('FULL_COLOR');
      done();
    })
  })
}