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
import { describe, it, expect } from '@ohos/hypium';
import formObserver from '@ohos.app.form.formObserver';

export default function abilityTest() {
  describe('ActsAbilityTest', function () {

    /**
     * @tc.number: Acts_GetRunningFormInfosByFilter_0300
     * @tc.name: Test getRunningFormInfosByFilter.
     * @tc.desc: Call failed without ohos.permission.OBSERVE_FORM_RUNNING permission.
     */
    it('Acts_GetRunningFormInfosByFilter_0300', 0, async function (done) {
      try {
        await formObserver.getRunningFormInfosByFilter({
          bundleName: 'com.example.formprovider',
          isUnusedIncluded: false
        }).then(async (data) => {
          console.log('====>Acts_GetRunningFormInfosByFilter_0300 second getInfo data: ' + JSON.stringify(data));
          expect().assertFail();
        });
      } catch (err) {
        console.log('====>Acts_GetRunningFormInfosByFilter_0300 second getInfo err: ' + JSON.stringify(err));
        expect(err.code).assertEqual(201);
        done();
      }
    })

    /**
     * @tc.number: Acts_GetRunningFormInfosById_0300
     * @tc.name: Test getRunningFormInfoById.
     * @tc.desc: Call failed without ohos.permission.OBSERVE_FORM_RUNNING permission.
     */
    it('Acts_GetRunningFormInfosById_0300', 0, async function (done) {
      try {
        await formObserver.getRunningFormInfoById('123456789', true).then(async (data) => {
          console.log('====>Acts_GetRunningFormInfosById_0300 second getInfo data: ' + JSON.stringify(data));
          expect().assertFail();
        });
      } catch (err) {
        console.log('====>Acts_GetRunningFormInfosById_0300 second getInfo err: ' + JSON.stringify(err));
        expect(err.code).assertEqual(201);
        done();
      }
    })

    /**
     * @tc.number: Acts_GetRunningFormInfos_0300
     * @tc.name: Test getRunningFormInfos.
     * @tc.desc: Call failed without ohos.permission.OBSERVE_FORM_RUNNING permission.
     */
    it('Acts_GetRunningFormInfos_0300', 0, async function (done) {
      try {
        await formObserver.getRunningFormInfos(true).then(async (data) => {
          console.log('====>Acts_GetRunningFormInfos_0300 second getInfo data: ' + JSON.stringify(data));
          expect().assertFail();
        });
      } catch (err) {
        console.log('====>Acts_GetRunningFormInfos_0300 second getInfo err: ' + JSON.stringify(err));
        expect(err.code).assertEqual(201);
        done();
      }
    })
  })
}