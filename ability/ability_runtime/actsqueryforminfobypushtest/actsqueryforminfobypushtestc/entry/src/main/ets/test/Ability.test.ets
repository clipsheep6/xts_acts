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
import { describe, it, expect } from '@ohos/hypium'
import formHost from '@ohos.app.form.formHost'

export default function abilityTest() {
  describe('ActsAbilityTest', function () {
    /*
     * @tc.number: Acts_QueryFormInfoByPush_On_1000
     * @tc.name: Listens to the event of notifyVisible type change.
     * @tc.desc: Call the on interface with the type of notifyVisible when app is not system app.
     */
    it('Acts_QueryFormInfoByPush_On_1000', 0, function () {
      let count = 0;
      try {
        formHost.on('notifyVisible', function () {}, 'com.example.queryforminfobypushtest');
      } catch (err) {
        count++;
        expect(err.code).assertEqual(202);
      }
      expect(count).assertEqual(1);
    })

    /*
     * @tc.number: Acts_QueryFormInfoByPush_On_1800
     * @tc.name: Listens to the event of notifyInvisible type change.
     * @tc.desc: Call the on interface with the type of notifyInvisible when app is not system app.
     */
    it('Acts_QueryFormInfoByPush_On_1800', 0, function () {
      let count = 0;
      try {
        formHost.on('notifyInvisible', function () {}, 'com.example.queryforminfobypushtest');
      } catch (err) {
        count++;
        expect(err.code).assertEqual(202);
      }
      expect(count).assertEqual(1);
    })

    /*
     * @tc.number: Acts_QueryFormInfoByPush_Off_2200
     * @tc.name: Cancels listening to the event of notifyVisible type change
     * @tc.desc: Call the off interface with the type of notifyVisible when app is not system app.
     */
    it('Acts_QueryFormInfoByPush_Off_2200', 0, function () {
      let count = 0;
      try {
        formHost.off('notifyVisible');
      } catch (err) {
        count++;
        expect(err.code).assertEqual(202);
      }
      expect(count).assertEqual(1);
    })

    /*
     * @tc.number: Acts_QueryFormInfoByPush_Off_3200
     * @tc.name: Cancels listening to the event of notifyInvisible type change
     * @tc.desc: Call the off interface with the type of notifyInvisible when app is not system app.
     */
    it('Acts_QueryFormInfoByPush_Off_3200', 0, function () {
      let count = 0;
      try {
        formHost.off('notifyInvisible');
      } catch (err) {
        count++;
        expect(err.code).assertEqual(202);
      }
      expect(count).assertEqual(1);
    })
  })
}