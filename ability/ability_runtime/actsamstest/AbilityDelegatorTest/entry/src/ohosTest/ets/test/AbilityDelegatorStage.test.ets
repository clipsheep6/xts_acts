/*
 * Copyright (C) 2024 Huawei Device Co., Ltd.
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
import { beforeAll, describe, expect, it } from '@ohos/hypium';
import { BusinessError } from '@ohos.base';
import AbilityDelegatorRegistry from '@ohos.app.ability.abilityDelegatorRegistry';

let abilityDelegator: AbilityDelegatorRegistry.AbilityDelegator;

export default function abilityDelegatorStage() {
  describe('abilityDelegatorStage', () => {
    beforeAll(() => {
      hilog.info(0x0000, 'abilityDelegatorStageTag', '%{public}s',
        'SUB_Ability_AbilityTools_AbilityDelegator_Stage_12700 beforeAll');
      abilityDelegator = AbilityDelegatorRegistry.getAbilityDelegator();
    });
    /*
     * @tc.number:SUB_Ability_AbilityTools_AbilityDelegator_Stage_12700
     * @tc.name: SUB_Ability_AbilityTools_AbilityDelegator_Stage_12700
     * @tc.desc:Unable to start specified PageAbility (AsyncCallback)
     * @tc.level:Level 3
     * @tc.type:Function
     * @tc.size:MediumTest
     */
    it('SUB_Ability_AbilityTools_AbilityDelegator_Stage_12700', 0, async (done: Function) => {
      hilog.info(0x0000, 'abilityDelegatorStageTag', '%{public}s',
        'SUB_Ability_AbilityTools_AbilityDelegator_Stage_12700 begin');
      try {
        let want: Want = {
          bundleName: 'bundleName',
          abilityName: 'abilityName'
        };
        abilityDelegator.startAbility(want, (err: BusinessError, data: void) => {
          console.info('startAbility callback');
          if (err) {
            expect(err.code).assertEqual(16000001);
            done();
          }
        });
        done();
      } catch (error) {
        hilog.error(0x0000, 'abilityDelegatorStageTag', '%{public}s',
          'SUB_Ability_AbilityTools_AbilityDelegator_Stage_12700 failed ' + JSON.stringify(error));
        expect(error.code).assertEqual(16000001);
        done();
      }
    });

    /*
     * @tc.number:SUB_Ability_AbilityTools_AbilityDelegator_Stage_12800
     * @tc.name: SUB_Ability_AbilityTools_AbilityDelegator_Stage_12800
     * @tc.desc:Unable to start specified PageAbility(Promise)
     * @tc.level:Level 3
     * @tc.type:Function
     * @tc.size:MediumTest
     */
    it('SUB_Ability_AbilityTools_AbilityDelegator_Stage_12800', 0, async (done: Function) => {
      hilog.info(0x0000, 'abilityDelegatorStageTag', '%{public}s',
        'SUB_Ability_AbilityTools_AbilityDelegator_Stage_12800 begin');
      try {
        let want: Want = {
          bundleName: 'bundleName',
          abilityName: 'abilityName'
        };
        abilityDelegator.startAbility(want).then((data: void) => {
          console.info('startAbility promise');
        }).catch((err: BusinessError) => {
          hilog.info(0x0000, 'abilityDelegatorStageTag', '%{public}s',
            'SUB_Ability_AbilityTools_AbilityDelegator_Stage_12800 begin');
          expect(err.code).assertEqual(16000001);
          done();
        })
        done();
      } catch (error) {
        hilog.error(0x0000, 'abilityDelegatorStageTag', '%{public}s',
          'SUB_Ability_AbilityTools_AbilityDelegator_Stage_12800 failed ' + JSON.stringify(error));
        expect(error.code).assertEqual(16000001);
        done();
      }
    });
  });
}

