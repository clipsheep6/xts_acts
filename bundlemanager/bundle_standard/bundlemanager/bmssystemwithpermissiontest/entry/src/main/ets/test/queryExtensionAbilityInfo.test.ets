/**
 * Copyright (c) 2022 Huawei Device Co., Ltd.
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
 // @ts-nocheck
import bundle from '@ohos.bundle';
import bundle9 from '@ohos.bundle.bundleManager'
import account from '@ohos.account.osAccount';
import { describe,beforeAll, it, expect } from 'hypium/index';

const BUNDLE_NAME1 = "ohos.acts.bundle.stage";
const BUNDLE_NAME2 = "com.noexit.com";
const ABILITY_NAME1 = "ExtensionAbility1";
const ABILITY_NAME2 = "noexitAbility";
let userId = 0;

const BUNDLE_NOT_EXIST_ERROR: number = 17700001;
const ABILITY_NOT_EXIST_ERROR: number = 17700003;
const INVALID_USER_ID_ERROR: number = 17700004;

export default function QueryExtensionAbilityInfos() {

  describe('QueryExtensionAbilityInfos', function () {

    beforeAll(async function (done) {
      await account.getAccountManager().getOsAccountLocalIdFromProcess().then(account => {
          console.info("getOsAccountLocalIdFromProcess userid  ==========" + account);
          userId = account;
          done();
        }).catch(err=>{
          console.info("getOsAccountLocalIdFromProcess err ==========" + JSON.stringify(err));
          done();
        })
    });

    /*
    * @tc.number: queryExtensionAbilityInfo_0100
    * @tc.name: queryExtensionAbilityInfoWithInvalidUserId
    * @tc.desc: test queryExtensionAbilityInfo with invalid userId
    */
    it('queryExtensionAbilityInfoWithInvalidUserId', 0, async function (done) {
      await bundle9.queryExtensionAbilityInfo(
        {
          "bundleName": BUNDLE_NAME1,
          "abilityName": ABILITY_NAME1
        }, bundle9.ExtensionAbilityType.FORM,
          bundle9.ExtensionAbilityFlag.GET_EXTENSION_ABILITY_INFO_DEFAULT, 1001).then(data => {
            expect().assertFail();
          }).catch(err => {
            expect(err.code).assertEqual(INVALID_USER_ID_ERROR);
          });
      bundle9.queryExtensionAbilityInfo(
        {
          "bundleName": BUNDLE_NAME1,
          "abilityName": ABILITY_NAME1
        }, bundle9.ExtensionAbilityType.FORM,
          bundle9.ExtensionAbilityFlag.GET_EXTENSION_ABILITY_INFO_DEFAULT, 1001, (err, data) => {
              expect(err.code).assertEqual(INVALID_USER_ID_ERROR);
              expect(data).assertEqual(undefined);
            done();
          })
    })

    /*
    * @tc.number: queryExtensionAbilityInfo_0200
    * @tc.name: queryExtensionAbilityInfoSuccessful
    * @tc.desc: test queryExtensionAbilityInfos get permissions flag
    */
    it('queryExtensionAbilityInfoSuccessful', 0, async function (done) {
      await bundle9.queryExtensionAbilityInfo({
        "bundleName": BUNDLE_NAME1,
        "abilityName": ABILITY_NAME1
      }, bundle9.ExtensionAbilityType.FORM,
        bundle9.ExtensionAbilityFlag.GET_EXTENSION_ABILITY_INFO_WITH_PERMISSION, userId).then(data => {
          expect(data[0].bundleName).assertEqual("ohos.acts.bundle.stage");
          expect(data[0].moduleName).assertEqual("phone");
          expect(data[0].name).assertEqual("ExtensionAbility1");
          expect(data[0].labelId).assertLarger(0);
          expect(data[0].descriptionId).assertLarger(0);
          expect(data[0].iconId).assertEqual(0);
          expect(data[0].isVisible).assertFalse();
          expect(data[0].extensionAbilityType).assertEqual(0);
          expect(data[0].permissions[0]).assertEqual("ohos.permission.GET_BUNDLE_INFO");
          expect(data[0].enabled).assertTrue();
          expect(data[0].readPermission).assertEqual("");
          expect(data[0].writePermission).assertEqual("");
          expect(data[0].metadata.length).assertEqual(0);
        }).catch(err => {
          expect(err).assertFail();
        });
      bundle9.queryExtensionAbilityInfo({
        "bundleName": BUNDLE_NAME1,
        "abilityName": ABILITY_NAME1
      }, bundle9.ExtensionAbilityType.FORM,
        bundle9.ExtensionAbilityFlag.GET_EXTENSION_ABILITY_INFO_WITH_PERMISSION, userId, (err, data) => {
          console.info("jun queryExtensionAbilityInfoSuccessful "+JSON.stringify(err))
          expect(err).assertEqual(null);
          expect(data[0].bundleName).assertEqual("ohos.acts.bundle.stage");
          expect(data[0].moduleName).assertEqual("phone");
          expect(data[0].name).assertEqual("ExtensionAbility1");
          expect(data[0].labelId).assertLarger(0);
          expect(data[0].descriptionId).assertLarger(0);
          expect(data[0].iconId).assertEqual(0);
          expect(data[0].isVisible).assertFalse();
          expect(data[0].extensionAbilityType).assertEqual(0);
          expect(data[0].permissions[0]).assertEqual("ohos.permission.GET_BUNDLE_INFO");
          expect(data[0].enabled).assertTrue();
          expect(data[0].readPermission).assertEqual("");
          expect(data[0].writePermission).assertEqual("");
          expect(data[0].metadata.length).assertEqual(0);
          done();
        })
    })

    /*
    * @tc.number: queryExtensionAbilityInfo_0300
    * @tc.name: queryExtensionAbilityInfoWithInvalidBundleName
    * @tc.desc: test queryExtensionAbilityInfos with invalid bundleName
    */
    it('queryExtensionAbilityInfoWithInvalidBundleName', 0, async function (done) {
      await bundle9.queryExtensionAbilityInfo(
        {
          "bundleName": BUNDLE_NAME2,
          "abilityName": ABILITY_NAME1
        }, bundle9.ExtensionAbilityType.FORM,
          bundle9.ExtensionAbilityFlag.GET_EXTENSION_ABILITY_INFO_DEFAULT, userId).then(data => {
            expect(data).assertFail();
          }).catch(err => {
            expect(err.code).assertEqual(BUNDLE_NOT_EXIST_ERROR);
          });
      bundle9.queryExtensionAbilityInfo(
        {
          "bundleName": BUNDLE_NAME2,
          "abilityName": ABILITY_NAME1
        }, bundle9.ExtensionAbilityType.FORM,
          bundle9.ExtensionAbilityFlag.GET_EXTENSION_ABILITY_INFO_DEFAULT, userId, (err, data) => {
            expect(data).assertEqual(undefined);
            expect(err.code).assertEqual(BUNDLE_NOT_EXIST_ERROR);
            done();
          })
    })

    /*
    * @tc.number: queryExtensionAbilityInfo_0400
    * @tc.name: queryExtensionAbilityInfoWithInvalidAbilityName
    * @tc.desc: test queryExtensionAbilityInfos with invalid abilityName
    */
    it('queryExtensionAbilityInfoWithInvalidAbilityName', 0, async function (done) {
      await bundle9.queryExtensionAbilityInfo(
        {
          "bundleName": BUNDLE_NAME1,
          "abilityName": ABILITY_NAME2
        }, bundle9.ExtensionAbilityType.FORM,
          bundle9.ExtensionAbilityFlag.GET_EXTENSION_ABILITY_INFO_DEFAULT, userId).then(data => {
            expect(data).assertFail();
          }).catch(err => {
            expect(err.code).assertEqual(ABILITY_NOT_EXIST_ERROR);
          });
      bundle9.queryExtensionAbilityInfo(
        {
          "bundleName": BUNDLE_NAME1,
          "abilityName": ABILITY_NAME2
        }, bundle9.ExtensionAbilityType.FORM,
          bundle9.ExtensionAbilityFlag.GET_EXTENSION_ABILITY_INFO_DEFAULT, userId, (err, data) => {
            expect(err.code).assertEqual(ABILITY_NOT_EXIST_ERROR);
            expect(data).assertEqual(undefined);
            done();
          })
    })

  })
}
