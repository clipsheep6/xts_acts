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

import bundleManager from '@ohos.bundle';
import account from "@ohos.account.osAccount"
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium'

let userId;
export default function AbilityDisable() {
describe('AbilityDisable', function () {

     /*
         * @tc.number  SUB_AA_OpenHarmony_EqueryAbilityByWant_0100
         * @tc.name    Call queryAbilityByWant to get moduleName
         * @tc.desc    Function test
         * @tc.level   0
         */
     it("SUB_AA_OpenHarmony_EqueryAbilityByWant_0100", 0, async function (done) {
        console.info("------------------logMessage SUB_AA_OpenHarmony_EqueryAbilityByWant_0100-------------------");
        let accountManager = account.getAccountManager();
        let bundleFlags=bundleManager.BundleFlag.GET_ABILITY_INFO_WITH_PERMISSION;
        await accountManager.getOsAccountLocalIdFromProcess().then((data)=>{
            console.log("success get userId:" + JSON.stringify(data));
            userId = data;
        }).catch((err)=>{
            console.log("+++++++++++++" + JSON.stringify(err));
        })
        let want={
            bundleName:"com.example.abilitydisable",
            abilityName:"com.example.abilitydisable.MainAbility"
        };
        bundleManager.queryAbilityByWant(want,bundleFlags,userId,(err, data) => {
            console.log('SUB_AA_OpenHarmony_Clear_0100 queryAbilityByWant errCode : '
            + JSON.stringify(err) + " data: " + JSON.stringify(data));
            for(var i=0;i<data.length;i++){
                console.log("data[i]['moduleName']"+data[i]['moduleName']);
                expect(data[i]['moduleName'] == "entry").assertTrue();
            }
        })
        done();
    });

    /*
     * @tc.number  SUB_AA_OpenHarmony_EqueryAbilityByWant_0200
     * @tc.name    Call queryAbilityByWant to get the URI
     * @tc.desc    Function test
     * @tc.level   0
     */
    it("SUB_AA_OpenHarmony_EqueryAbilityByWant_0200", 0, async function (done) {
        console.info("------------------logMessage SUB_AA_OpenHarmony_EqueryAbilityByWant_0200-------------------");
        let bundleFlags=bundleManager.BundleFlag.GET_ABILITY_INFO_WITH_PERMISSION;
        let accountManager = account.getAccountManager();
       await accountManager.getOsAccountLocalIdFromProcess().then((data)=>{
            console.log("success get userId:" + JSON.stringify(data));
            userId = data;
        }).catch((err)=>{
            console.log("+++++++++++++" + JSON.stringify(err));
        })
        let want={
            bundleName:"com.example.abilitydisable",
            abilityName:"com.example.abilitydisable.MainAbility"
        };
        bundleManager.queryAbilityByWant(want,bundleFlags,userId,(err, data) => {
            console.log('SUB_AA_OpenHarmony_EqueryAbilityByWant_0200 queryAbilityByWant errCode : '
            + JSON.stringify(err) + " data: " + JSON.stringify(data));
            for(var i=0;i<data.length;i++){
                console.log("data[i]['uri']"+data[i]['uri']);
                expect(data[i]['uri'] == "").assertTrue();
            }
        })
        done();
    });

    /*
     * @tc.number  SUB_AA_OpenHarmony_EqueryAbilityByWant_0300
     * @tc.name    Call getapplicationInfo to get the name
     * @tc.desc    Function test
     * @tc.level   0
     */
    it("SUB_AA_OpenHarmony_EqueryAbilityByWant_0300", 0, async function (done) {
        console.info("------------------logMessage SUB_AA_OpenHarmony_EqueryAbilityByWant_0300-------------------");
        let bundleName="com.example.abilitydisable";
        let accountManager = account.getAccountManager();
        let bundleFlags=bundleManager.BundleFlag.GET_ABILITY_INFO_WITH_PERMISSION;
        await accountManager.getOsAccountLocalIdFromProcess().then((data)=>{
            console.log("success get userId:" + JSON.stringify(data));
            userId = data;
        }).catch((err)=>{
            console.log("+++++++++++++" + JSON.stringify(err));
        })
        bundleManager.getApplicationInfo(bundleName, bundleFlags,userId,(err, data) => {
            console.log('SUB_AA_OpenHarmony_EqueryAbilityByWant_0300 getapplicationInfo errCode : '
            + JSON.stringify(err) + " data: " + JSON.stringify(data));
            expect(data['name']).assertEqual("com.example.abilitydisable");
        })
        done();
    });
})
}