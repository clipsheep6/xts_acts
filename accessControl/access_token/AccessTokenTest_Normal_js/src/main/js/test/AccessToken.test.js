/*
 * Copyright (C) 2022 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permission and
 * limitations under the License.
 */

// @ts-nocheck
import {describe, beforeAll, afterEach, it, expect} from '@ohos/hypium'
import abilityAccessCtrl from '@ohos.abilityAccessCtrl'
import bundle from '@ohos.bundle'
import osAccount from '@ohos.account.osAccount'

var PermissionFlag = {
    PERMISSION_USER_SET: 1,
    PERMISSION_USER_FIXED: 2,
    PERMISSION_SYSTEM_FIXED: 3
};

var GrantStatus = {
    PERMISSION_DENIED: -1,
    PERMISSION_GRANTED: 0,
};
const RESULT_SUCCESS = 0;
const RESULT_FAIL = -1;
const TIMEOUT = 5000;

const DEFAULT_PERMISSION_FALG = 0;
var permissionNameUser = "ohos.permission.ALPHA";
var permissionNameSystem = "ohos.permission.BETA";
var tokenID = undefined;
export default function AccessTokenTest() {
describe('AccessTokenTest', function () {
    console.info('##########start AccessTokenTest');
    beforeAll(async function (done){
        var accountManager = osAccount.getAccountManager();  
        var userId = await accountManager.getOsAccountLocalIdFromProcess();
        var appInfo = await bundle.getApplicationInfo('ohos.acts.security.access_token.normal', 0, userId);
        tokenID = appInfo.accessTokenId;
        console.info("AccessTokenTest accessTokenId:" + appInfo.accessTokenId + ", name:" + appInfo.name
            + ", bundleName:" + appInfo.bundleName)

        console.info("sleep begin");
        sleep(TIMEOUT);
        console.info("sleep end");
        done();
    })
    afterEach(function () {
    })

    function sleep(delay) {
        var start = (new Date()).getTime();
        var next = (new Date()).getTime();
        while (next - start < delay) {
            next = (new Date()).getTime();
        }
    }

    /**
     * @tc.number Test_verifyAccessToken_001
     * @tc.name Test atManager.verifyAccessToken.
     * @tc.desc After the installation, user_grant permission is not granted by default(Promise).
     */
    it('Test_verifyAccessToken_001', 0, async function(done){
        console.info("Test_verifyAccessToken_001 start");
        var atManager = abilityAccessCtrl.createAtManager();
        var result = await atManager.verifyAccessToken(tokenID, permissionNameUser);
        console.info("Test_verifyAccessToken_001 tokenID" + tokenID + "-" + result)
        expect(result).assertEqual(GrantStatus.PERMISSION_DENIED);

        done();
    })

    /**
     * @tc.number Test_verifyAccessToken_002
     * @tc.name Test atManager.verifyAccessToken.
     * @tc.desc After the installation, system_grant permission is granted by default(Promise).
     */
    it('Test_verifyAccessToken_002', 0, async function(done){
        console.info("Test_verifyAccessToken_002 start");
        var atManager = abilityAccessCtrl.createAtManager();
        var result = await atManager.verifyAccessToken(tokenID, permissionNameSystem);
        console.info("Test_verifyAccessToken_002 tokenID" + tokenID + "-" + result)
        expect(result).assertEqual(GrantStatus.PERMISSION_GRANTED);

        done();
    })

    /**
     * @tc.number Test_verifyAccessToken_003
     * @tc.name Test atManager.verifyAccessToken.
     * @tc.desc Test invalid TokenID(0)(Promise).
     */
    it('Test_verifyAccessToken_003', 0, async function(done){
        console.info("Test_verifyAccessToken_003 start");
        var atManager = abilityAccessCtrl.createAtManager();
        var result = await atManager.verifyAccessToken(0, permissionNameUser);
        console.info("Test_verifyAccessToken_003 tokenID" + tokenID + "-" + result)
        expect(result).assertEqual(GrantStatus.PERMISSION_DENIED);

        done();
    })

    /**
     * @tc.number Test_verifyAccessToken_004
     * @tc.name Test atManager.verifyAccessToken.
     * @tc.desc Test invalid permission(empty)(Promise).
     */
    it('Test_verifyAccessToken_004', 0, async function(done){
        console.info("Test_verifyAccessToken_004 start");
        var atManager = abilityAccessCtrl.createAtManager();
        var result = await atManager.verifyAccessToken(tokenID, "");
        console.info("Test_verifyAccessToken_004 tokenID" + tokenID + "-" + result)
        expect(result).assertEqual(GrantStatus.PERMISSION_DENIED);

        done();
    })

    /**
     * @tc.number Test_verifyAccessToken_005
     * @tc.name Test atManager.verifyAccessToken.
     * @tc.desc Test invalid permission(length exceeds 256)(Promise).
     */
    it('Test_verifyAccessToken_005', 0, async function(done){
        console.info("Test_verifyAccessToken_005 start");
        var atManager = abilityAccessCtrl.createAtManager();
        var permissionName = "ohos.permission.testtesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttest"
            + "testtesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttest"
            + "testtesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttest";

        var result = await atManager.verifyAccessToken(tokenID, permissionName);
        console.info("Test_verifyAccessToken_005 tokenID" + tokenID + "-" + result)
        expect(result).assertEqual(GrantStatus.PERMISSION_DENIED);

        done();
    })

    /**
     * @tc.number Test_verifyAccessTokenSync_0000
     * @tc.name Test_verifyAccessTokenSync_000.
     * @tc.desc Test verifyAccessTokenSync, After the installation, user_grant permission is not granted by default.
     */
     it('Test_verifyAccessTokenSync_000', 0, function(){
        console.info("Test_verifyAccessTokenSync_000 start");
        var atManager = abilityAccessCtrl.createAtManager();
        var result = atManager.verifyAccessTokenSync(tokenID, permissionNameUser);
        console.info("Test_verifyAccessTokenSync_000 tokenID" + tokenID + "-" + result)
        expect(result).assertEqual(GrantStatus.PERMISSION_DENIED);
    })

    /**
     * @tc.number Test_verifyAccessTokenSync_0100
     * @tc.name Test_verifyAccessTokenSync_001.
     * @tc.desc Test verifyAccessTokenSync, After the installation, system_grant permission is granted by default.
     */
    it('Test_verifyAccessTokenSync_001', 0, function(){
        console.info("Test_verifyAccessTokenSync_001 start");
        var atManager = abilityAccessCtrl.createAtManager();
        var result = atManager.verifyAccessTokenSync(tokenID, permissionNameSystem);
        console.info("Test_verifyAccessTokenSync_001 tokenID" + tokenID + "-" + result)
        expect(result).assertEqual(GrantStatus.PERMISSION_GRANTED);
    })

    /**
     * @tc.number Test_verifyAccessTokenSync_0200
     * @tc.name Test_verifyAccessTokenSync_002.
     * @tc.desc Test verifyAccessTokenSync, invalid TokenID(0).
     */
    it('Test_verifyAccessTokenSync_002', 0, function(){
        console.info("Test_verifyAccessTokenSync_002 start");
        var atManager = abilityAccessCtrl.createAtManager();
        var result = atManager.verifyAccessTokenSync(0, permissionNameUser);
        console.info("Test_verifyAccessTokenSync_002 tokenID" + tokenID + "-" + result)
        expect(result).assertEqual(GrantStatus.PERMISSION_DENIED);
    })

    /**
     * @tc.number Test_verifyAccessTokenSync_0300
     * @tc.name Test_verifyAccessTokenSync_003.
     * @tc.desc Test verifyAccessTokenSync, invalid permission(empty).
     */
    it('Test_verifyAccessTokenSync_003', 0, function(){
        console.info("Test_verifyAccessTokenSync_003 start");
        var atManager = abilityAccessCtrl.createAtManager();
        var result = atManager.verifyAccessTokenSync(tokenID, "");
        console.info("Test_verifyAccessTokenSync_003 tokenID" + tokenID + "-" + result)
        expect(result).assertEqual(GrantStatus.PERMISSION_DENIED);
    })

    /**
     * @tc.number Test_verifyAccessTokenSync_0400
     * @tc.name Test_verifyAccessTokenSync_004.
     * @tc.desc Test verifyAccessTokenSync, invalid permission(length exceeds 256).
     */
    it('Test_verifyAccessTokenSync_004', 0, function(){
        console.info("Test_verifyAccessTokenSync_004 start");
        var atManager = abilityAccessCtrl.createAtManager();
        var permissionName = "ohos.permission.testtesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttest"
            + "testtesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttest"
            + "testtesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttest";

        var result = atManager.verifyAccessTokenSync(tokenID, permissionName);
        console.info("Test_verifyAccessTokenSync_004 tokenID" + tokenID + "-" + result)
        expect(result).assertEqual(GrantStatus.PERMISSION_DENIED);
    })
})
}
