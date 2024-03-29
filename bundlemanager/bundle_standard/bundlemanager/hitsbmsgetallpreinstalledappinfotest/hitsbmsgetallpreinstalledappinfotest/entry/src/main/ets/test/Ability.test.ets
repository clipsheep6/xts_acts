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
 
import { describe, it, expect } from '@ohos/hypium'
import Base from '@ohos.base';
import bundleManager from '@ohos.bundle.bundleManager';
import common from '@ohos.app.ability.common';

function sleep(ms: number) {
  return new Promise(resolve => setTimeout(resolve, ms));
}

export default function abilityTest() {
  describe('ActsAbilityTest', function () {

    /*
     * @tc.number: Acts_GetAllPreinstalledApplicationInfos_0300
     * @tc.name: Support get all preinstall appinfo
     * @tc.desc: Call interface without permission
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level1
     */
    it('Acts_GetAllPreinstalledApplicationInfos_0300', 0, async function (done) {
      console.info("Acts_GetAllPreinstalledApplicationInfos_0300 start.")
      let want = {
        bundleName: 'com.example.hitsbmsgetallpreinstalledappinforely',
        abilityName: 'EntryAbility'
      }
      globalThis.abilityContext.startAbilityForResult(want).then((data: common.AbilityResult) => {
        console.info('Acts_GetAllPreinstalledApplicationInfos_0300 startAbilityForResult successful');
        setTimeout(() => {
          console.info('Acts_GetAllPreinstalledApplicationInfos_0300 data is: ' + JSON.stringify(data));
          expect(data.want.parameters.ErrCode).assertEqual(201);
          done();
        }, 3000);
      }).catch((err: Base.BusinessError) => {
        console.info('Acts_GetAllPreinstalledApplicationInfos_0300 startAbilityForResult error is' + JSON.stringify(err));
        expect().assertFail();
        done();
      })
      await sleep(500);
    })

    /*
     * @tc.number: Acts_GetAllPreinstalledApplicationInfos_0400
     * @tc.name: Support get all preinstall appinfo
     * @tc.desc: Call interface without systemapp
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level1
     */
    it('Acts_GetAllPreinstalledApplicationInfos_0400', 0, async function (done) {
      // Defines a test case. This API supports three parameters: test case name, filter parameter, and test case function.
      console.info("Acts_GetAllPreinstalledApplicationInfos_0400 start.")
      await bundleManager.getAllPreinstalledApplicationInfo().then(() => {
        console.info("Acts_GetAllPreinstalledApplicationInfos_0400 getAllPreinstalledApplicationInfo success");
        expect().assertFail();
        done();
      }).catch((err: Base.BusinessError) => {
        console.error("Acts_GetAllPreinstalledApplicationInfos_0400 getAllPreinstalledApplicationInfo errCode is :" + JSON.stringify(err.code));
        expect(err.code).assertEqual(202);
        done();
      });
    })

    /*
     * @tc.number: Acts_GetAllPreinstalledApplicationInfos_0500
     * @tc.name: Support get all preinstall appinfo
     * @tc.desc: Call interface without permission
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level: Level1
     */
    it('Acts_GetAllPreinstalledApplicationInfos_0500', 0, async function (done) {
      console.info("Acts_GetAllPreinstalledApplicationInfos_0500 start.")
      let want = {
        bundleName: 'com.example.hitsbmsgetallpreinstalledappinfowithsignrely',
        abilityName: 'EntryAbility'
      }
      globalThis.abilityContext.startAbilityForResult(want).then((data: common.AbilityResult) => {
        console.info('Acts_GetAllPreinstalledApplicationInfos_0500 startAbilityForResult successful');
        setTimeout(() => {
          console.info('Acts_GetAllPreinstalledApplicationInfos_0500 data is: ' + JSON.stringify(data));
          expect(data.want.parameters.ErrCode).assertEqual(0);
          expect(data.want.parameters.TypeBundleName == "string").assertTrue();
          expect(data.want.parameters.TypeModuleName == "string").assertTrue();
          expect(data.want.parameters.TypeIconId == "number").assertTrue();
          expect(data.want.parameters.TypeLabelId == "number").assertTrue();
          done();
        }, 3000);
      }).catch((err: Base.BusinessError) => {
        console.info('Acts_GetAllPreinstalledApplicationInfos_0500 startAbilityForResult error is' + JSON.stringify(err));
        expect().assertFail();
        done();
      })
      await sleep(500);
    })
  })
}