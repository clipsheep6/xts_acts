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
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium'
import notificationManager from '@ohos.notificationManager'

function sleep(ms:number) {
  return new Promise(resolve => setTimeout(resolve, ms));
}
export default function abilityTest() {
  describe('ActsAbilityTest', function () {

    afterEach(async function () {
      await sleep (1000);
    })

    /*
     * @tc.number: Acts_NotificationGetAllEnableStatus_0100
     * @tc.name: Acts_NotificationGetAllEnableStatus_0100: Get status successfully.
     * @tc.desc: Get all notification enable status successfully in db
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level1
     */
    it('Acts_NotificationGetAllEnableStatus_0100',0, async function (done) {
      console.info("Acts_NotificationGetAllEnableStatus_0100 start");
      await notificationManager.getAllNotificationEnableStatus().then((data) => {
        console.info("Acts_NotificationGetAllEnableStatus_0100 db data is" + JSON.stringify(data));
        let res = JSON.stringify(data);
        expect(res).assertContain("com.example.actsnotificaiongetallenablestatustest");
        done();
      }).catch((err) => {
        console.log("Acts_NotificationGetAllEnableStatus_0100 db error is" + JSON.stringify(err));
        expect().assertFail();
    })
      await sleep(1000);
    })

    /*
     * @tc.number: Acts_NotificationGetAllEnableStatus_0200
     * @tc.name: Acts_NotificationGetAllEnableStatus_0100: Get status fail.
     * @tc.desc: Get all notification enable status fail in db
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level1
     */
    it('Acts_NotificationGetAllEnableStatus_0200',0, async function (done) {
      console.info("Acts_NotificationGetAllEnableStatus_0200 start");
      let want = {
        bundleName: 'com.example.actsnotificationpermissionunsystemrely',
        abilityName: 'EntryAbility'
      };
      await globalThis.abilityContext.startAbilityForResult(want).then((data)=>{
        console.info("Acts_NotificationGetAllEnableStatus_0200 startAbilityForResult successful");
        setTimeout(() => {
          console.info("Acts_NotificationGetAllEnableStatus_0200 data is " + JSON.stringify(data));
          expect(data.want.parameters.PromiseErrCode).assertEqual(202);
          done();
        }, 3000);
      }).catch((err) => {
        console.log("Acts_NotificationGetAllEnableStatus_0200 startAbilityForResult error is" + JSON.stringify(err));
        expect().assertFail();
      })
    })

    /*
     * @tc.number: Acts_NotificationGetAllEnableStatus_0300
     * @tc.name: Acts_NotificationGetAllEnableStatus_0100: Get status fail.
     * @tc.desc: Get all notification enable status fail in db
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level1
     */
    it('Acts_NotificationGetAllEnableStatus_0300',0, async function (done) {
      console.info("Acts_NotificationGetAllEnableStatus_0300 start");
      let want = {
        bundleName: 'com.example.actsnotificationnopermissionunsystemrely',
        abilityName: 'EntryAbility'
      };
      await globalThis.abilityContext.startAbilityForResult(want).then((data)=>{
        console.info("Acts_NotificationGetAllEnableStatus_0300 startAbilityForResult successful");
        setTimeout(() => {
          console.info("Acts_NotificationGetAllEnableStatus_0300 data is " + JSON.stringify(data));
          expect(data.want.parameters.PromiseErrCode).assertEqual(202);
          done();
        }, 3000);
      }).catch((err) => {
        console.log("Acts_NotificationGetAllEnableStatus_0300 startAbilityForResult error is" + JSON.stringify(err));
        expect().assertFail();
      })
    })

    /*
     * @tc.number: Acts_NotificationGetAllEnableStatus_0400
     * @tc.name: Acts_NotificationGetAllEnableStatus_0100: Get status fail.
     * @tc.desc: Get all notification enable status fail in db
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level1
     */
    it('Acts_NotificationGetAllEnableStatus_0400',0, async function (done) {
      console.info("Acts_NotificationGetAllEnableStatus_0400 start");
      let want = {
        bundleName: 'com.example.actsnotificationnopermissionsystemrely',
        abilityName: 'EntryAbility'
      };
      await globalThis.abilityContext.startAbilityForResult(want).then((data)=>{
        console.info("Acts_NotificationGetAllEnableStatus_0400 startAbilityForResult successful");
        setTimeout(() => {
          console.info("Acts_NotificationGetAllEnableStatus_0400 data is " + JSON.stringify(data));
          expect(data.want.parameters.PromiseErrCode).assertEqual(201);
          done();
        }, 3000);
      }).catch((err) => {
        console.log("Acts_NotificationGetAllEnableStatus_0400 startAbilityForResult error is" + JSON.stringify(err));
        expect().assertFail();
      })
    })
  })
}