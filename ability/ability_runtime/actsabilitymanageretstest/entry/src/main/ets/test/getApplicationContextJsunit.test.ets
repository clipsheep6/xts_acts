/**
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

import { describe, beforeAll, afterAll, it, expect } from '@ohos/hypium';
import Utils from './Utils';
import ability_featureAbility from '@ohos.ability.featureAbility';
import backgroundTaskManager from '@ohos.backgroundTaskManager';

export default function getHapModuleInfoJsunit() {
  describe('getApplicationContextTest', () => {

    /*
    *@tc.number     : Context_GetApplicationContext_Test_0100
    *@tc.name       : Context_GetApplicationContext_Test_0100
    *@tc.desc       : Check the return value of getApplicationContext
    *@tc.size       : MediumTest
    *@tc.type       : Function
    *@tc.level      : Level 1
    */
    it('Context_GetApplicationContext_Test_0100', 0, async (done: Function) => {
      try {
        console.info('[context_getApplicationContext_test_0100] START');
        let timeOldStamp = Utils.getNowTime();
        let context = ability_featureAbility.getContext().getApplicationContext();
        let timeNewStamp = Utils.getNowTime();
        Utils.getDurationTime('context_getApplicationContext_test_0100', timeOldStamp, timeNewStamp);
        console.info('[context_getApplicationContext_test_0100] data is:' + JSON.stringify(context));
        expect(typeof (context)).assertEqual("object");
        console.info('[context_getApplicationContext_test_0100] FINISH');
        done();
      }
      catch (error) {
        console.error('[context_getApplicationContext_test_0100] failed:' + JSON.stringify(error));
        expect().assertFail();
        done();
     }
    })
  })
}