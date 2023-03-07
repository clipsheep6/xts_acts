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
import napitest from 'libpermissionchecknew.so';
import AbilityDelegatorRegistry from '@ohos.app.ability.abilityDelegatorRegistry';

export default function actsRunCodeWithPermissionTest() {
  describe('ActsRunCodeWithPermissionTest', function () {
    let abilityDelegator = AbilityDelegatorRegistry.getAbilityDelegator();
    
    function sleep(time) {
      return new Promise((resolve)=>setTimeout(resolve,time));
    }

    beforeEach(async (done) => {
      await sleep(2000);
      done();
    })

    /*
    * @tc.number: ACTS_CHECK_PERMISSION_0100
    * @tc.name: Check the permission verification interface is enable.
    * @tc.desc: Verify the interface is enable with permission ohos.permission.RUN_ANY_CODE.
    */
    it('ACTS_CHECK_PERMISSION_0100',0, async function (done) {
      console.log('ACTS_CHECK_PERMISSION_0100 begin');
      try {
        let result = await napitest.checkPermission();
        console.log('ACTS_CHECK_PERMISSION result:' + result);
        expect(0).assertEqual(result);
        await sleep(2000);
        console.log('ACTS_CHECK_PERMISSION_0100 end');
        done();
      } catch (e) {
        expect().assertTrue();
        console.log('ACTS_CHECK_PERMISSION_0100 end');
        done();
      }
    })
  })
}