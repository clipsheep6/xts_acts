/*
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

import bundle from '@ohos.bundle'
import bundle9 from '@ohos.bundle.bundleManager'
import account from '@ohos.account.osAccount'
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from 'hypium/index'

const ABILITY_NAME = 'com.ohos.systemwithpermissiontest.MainAbility';
const BUNDLE_NAME = 'com.error.test';
const MODULE_NAME = 'entry';
let userId: number = 0;
const INVALID_ID: number = -1;
const BUNDLE_NAME_ERROR = 17700001;
const ABILITY_NOT_EXIST_ERROR = 17700003;
const INVALID_USER_ID = 17700004;

export default function queryAbilityInfo() {
    describe('queryAbilityInfo', function () {

        beforeAll(async function (done) {
            await account.getAccountManager().getOsAccountLocalIdFromProcess().then(account => {
                console.info("getOsAccountLocalIdFromProcess userid  ==========" + account);
                userId = account;
                done();
            }).catch(err => {
                console.info("getOsAccountLocalIdFromProcess err ==========" + JSON.stringify(err));
                done();
            })
        });

        /*
        * @tc.number: queryAbilityInfo_0100
        * @tc.name: queryAbilityInfoNoAbility
        * @tc.desc: test queryAbilityInfo interfaces not have ability
        */
        it('queryAbilityInfoNoAbility', 0, async function (done) {
            await bundle9.queryAbilityInfo(
                {
                    "action": "entity_reserved",
                    "entities": ["entity_not_exist"]
                }, bundle9.AbilityFlag.GET_ABILITY_INFO_DEFAULT, userId).then(res => {
                    expect(res).assertFail()
                }).catch(err => {
                    console.error(' fail bms_queryAbilityByWant_0300' + JSON.stringify(err))
                    expect(err.code).assertEqual(ABILITY_NOT_EXIST_ERROR)
                })
            bundle9.queryAbilityInfo(
                {
                    "action": "entity_reserved",
                    "entities": ["entity_not_exist"]
                }, bundle9.AbilityFlag.GET_ABILITY_INFO_DEFAULT, userId, (err, data) => {
                    expect(data).assertEqual(undefined);
                    expect(err.code).assertEqual(ABILITY_NOT_EXIST_ERROR);
                    done()
            });
        });

        /*
        * @tc.number: queryAbilityInfo_0200
        * @tc.name: queryAbilityInfoSuccessful
        * @tc.desc: test queryAbilityInfo successful scene
        */
        it('queryAbilityInfoSuccessful', 0, async function (done) {
            await bundle9.queryAbilityInfo(
                {
                    action: "action_a"
                }, bundle9.AbilityFlag.GET_ABILITY_INFO_DEFAULT, userId).then(res => {
                    console.info(' success queryAbilityInfo'+ JSON.stringify(res))
                    expect(res[0].name).assertEqual('com.example.third7.actionSingleString')
                    expect(res[0].description).assertEqual('actionSingleString')
                }).catch(err => {
                    console.error(' fail queryAbilityInfo' + JSON.stringify(err))
                    expect().assertFail()
                })
            bundle9.queryAbilityInfo(
                {
                    action: "action_a"
                }, bundle9.AbilityFlag.GET_ABILITY_INFO_DEFAULT, userId, (err, data) => {
                    expect(data[0].name).assertEqual('com.example.third7.actionSingleString')
                    expect(data[0].description).assertEqual('actionSingleString')
                    expect(err).assertEqual(null);
                    done()
                });
        });

        /*
        * @tc.number: queryAbilityInfo_0300
        * @tc.name: queryAbilityInfoWithInvalidId
        * @tc.desc: test queryAbilityInfo with invalid id
        */
        it('queryAbilityInfoWithInvalidId', 0, async function (done) {
            await bundle9.queryAbilityInfo(
                {
                    action: "action_a"
                }, bundle9.AbilityFlag.GET_ABILITY_INFO_DEFAULT, INVALID_ID).then(res => {
                    expect(res).assertFail()
                }).catch(err => {
                    expect(err.code).assertEqual(INVALID_USER_ID);
                });
            bundle9.queryAbilityInfo(
                {
                    action: "action_a"
                }, bundle9.AbilityFlag.GET_ABILITY_INFO_DEFAULT, INVALID_ID, (err, data) => {
                    expect(data).assertEqual(undefined);
                    expect(err.code).assertEqual(INVALID_USER_ID);
                    done()
                });
        });

        /*
        * @tc.number: queryAbilityInfo_0400
        * @tc.name: queryAbilityInfoWithFailedBundleName
        * @tc.desc: test queryAbilityInfo with bundle name
        */
        it('queryAbilityInfoWithFailedBundleName', 0, async function (done) {
        await bundle9.queryAbilityInfo({
            bundleName: BUNDLE_NAME,
            abilityName: ABILITY_NAME,
            moduleName: MODULE_NAME
        }, bundle9.AbilityFlag.GET_ABILITY_INFO_WITH_APPLICATION, userId).then(data => {
            expect(data).assertFail()
        }).catch(err => {
            console.info("Operation failed. Err: " + JSON.stringify(err));
            expect(err.code).assertEqual(BUNDLE_NAME_ERROR);
        });
        bundle9.queryAbilityInfo({
            bundleName: BUNDLE_NAME,
            abilityName: ABILITY_NAME,
            moduleName: MODULE_NAME
        }, bundle9.AbilityFlag.GET_ABILITY_INFO_WITH_APPLICATION, userId, (err, data) => {
            expect(data).assertEqual(undefined);
            expect(err.code).assertEqual(BUNDLE_NAME_ERROR);
            done();
        });
        });

    })
}
