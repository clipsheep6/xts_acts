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
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium'
import formHost from '@ohos.app.form.formObserver';
import formInfo from '@ohos.app.form.formInfo';
import commonEvent from '@ohos.commonEventManager'
const ERR_FORM_EXTERNAL_NOT_SYSTEM_APP = 202;

export default function abilityTest() {
  describe('ActsAbilityTest', function () {
    /**
     * @tc.number: Acts_QueryFormInformation_3500
     * @tc.name: get running form infos by filter.
     * @tc.desc: Verify that the result successfully.
     */
    it('Acts_QueryFormInformation_3500',0, function (done) {
      console.info('=============Acts_QueryFormInformation_3500 start ============');
      formHost.getRunningFormInfoById("95668135684").then(data1 => {
        console.info('getFormInstancesByFilter promise data is :' + JSON.stringify(data1));
      }).catch((err) => {
        console.debug("====>Acts_QueryFormInformation_3500 err is ====>" + JSON.stringify(err));
        expect(err.code).assertEqual(ERR_FORM_EXTERNAL_NOT_SYSTEM_APP);
      });
      formHost.getRunningFormInfoById("95668135684", (err, data2) => {
        console.info('getFormInstancesByFilter callback data is :' + JSON.stringify(data2));
        console.info('getFormInstancesByFilter callback err is :' + JSON.stringify(err));
        expect(err.code).assertEqual(ERR_FORM_EXTERNAL_NOT_SYSTEM_APP);
        console.info('=============Acts_QueryFormInformation_3500 end ============');
        done();
      });
    });

    /**
     * @tc.number: Acts_QueryFormInformation_3600
     * @tc.name: get running form infos by filter.
     * @tc.desc: Verify that the result successfully.
     */
    it('Acts_QueryFormInformation_3600',0, function (done) {
      let subscriber;
      let formId;
      console.info('=============Acts_QueryFormInformation_3600 start ============');
      let formInstanceFilter = {
        bundleName: "com.example.formprovide"
      }
      formHost.getRunningFormInfosByFilter(formInstanceFilter).then(data1 => {
        console.info('getFormInstancesByFilter promise data is :' + JSON.stringify(data1));
      }).catch((err) => {
        console.debug("====>Acts_QueryFormInformation_3600 err is ====>" + JSON.stringify(err));
        expect(err.code).assertEqual(ERR_FORM_EXTERNAL_NOT_SYSTEM_APP);
      });
      formHost.getRunningFormInfosByFilter(formInstanceFilter, (err, data2) => {
        console.info('getFormInstancesByFilter callback data is :' + JSON.stringify(data2));
        console.info('getFormInstancesByFilter callback err is :' + JSON.stringify(err));
        expect(err.code).assertEqual(ERR_FORM_EXTERNAL_NOT_SYSTEM_APP);
        console.info('=============Acts_QueryFormInformation_3600 end ============');
        done();
      });
    });
  })
}