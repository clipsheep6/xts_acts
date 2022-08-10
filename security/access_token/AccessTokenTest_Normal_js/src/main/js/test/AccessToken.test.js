/*
 * Copyright (C) 2021 Huawei Device Co., Ltd.
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
const PermStateChangeType = {
    PERMISSION_REVOKED_OPER: 0,
    PERMISSION_GRANTED_OPER: 1
};

var type = 'permissionStateChange'
const RESULT_SUCCESS = 0
const RESULT_FAIL = -1
const TIMEOUT = 5000;

const DEFAULT_PERMISSION_FALG = 0
var permissionNameUser = "ohos.permission.ALPHA";
var permissionNameSystem = "ohos.permission.BETA";
var tokenID = undefined
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
        // setTimeout(done(),TIMEOUT);

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

    /**
     * @tc.number on_001
     * @tc.name on_001.
     * @tc.desc Test on,Permission granted to monitor.
     */
     it('on_001', 0, async function(done){
        console.info("on_001 start");

        var atManager = abilityAccessCtrl.createAtManager();
        var tokenIDList = [tokenID]
        var permissionNameList = [
            'ohos.permission.CAMERA'
        ]

        atManager.on(type, tokenIDList, permissionNameList, PermStateChangeCallback => {
            expect(PermStateChangeCallback.permissionName).assertEqual('ohos.permission.CAMERA');
            expect(PermStateChangeCallback.change).assertEqual(PermStateChangeType.PERMISSION_GRANTED_OPER);
            atManager.off(type, tokenIDList, permissionNameList)
            atManager.revokeUserGrantedPermission(tokenIDList[0], permissionNameList[0],
                PermissionFlag.PERMISSION_USER_SET);
            done();
        })

        var result = await atManager.grantUserGrantedPermission(tokenIDList[0], permissionNameList[0],
            PermissionFlag.PERMISSION_USER_SET);
        console.info("on_001 result = " + result)
    })

     /**
     * @tc.number on_002
     * @tc.name on_002.
     * @tc.desc Test on,Monitoring permission revoked
     */
    it('on_002', 0, async function(done){
        console.info("on_002 start");
        var tokenIDList = [tokenID]
        var permissionNameList = [
            'ohos.permission.WRITE_CALENDAR'
        ]
        var atManager = abilityAccessCtrl.createAtManager();

        function permissChangeCallback(dataOnTwo){
            console.info("==>on_002: change:" + dataOnTwo.change
                + "==>tokenID:"+ dataOnTwo.tokenID
                + "==>permissionName:" + dataOnTwo.permissionName);
            var dataType = typeof dataOnTwo.change
            var change = dataOnTwo.change
            console.info("type of data.change " + dataType)
            if(change === 0){
                console.info("change = " + change)
                expect(0).assertEqual(change);
                console.info("on_002 success!!!");
                done();
            }
           
        }
        try {
            atManager.on(type, tokenIDList, permissionNameList, permissChangeCallback);
        }
        catch(err) {
            console.error("==>on on_002 err:" + JSON.stringify(err));
            expect().assertFail();
            done();
        }

        var result = await atManager.grantUserGrantedPermission(tokenIDList[0], permissionNameList[0],
            PermissionFlag.PERMISSION_USER_SET);
        console.info("on_002 result grant= " + result)
        sleep(5000);
        var result = await atManager.revokeUserGrantedPermission(tokenIDList[0], permissionNameList[0],
            PermissionFlag.PERMISSION_USER_SET);
        console.info("on_002 result revoke = " + result)
        expect(result).assertEqual(RESULT_SUCCESS);
    })

     /**
     * @tc.number on_003
     * @tc.name on_003.
     * @tc.desc Test on,Monitor multiple permission changes at the same time
     */
      it('on_003', 0, async function(done){
        console.info("on_003 start");
        var atManager = abilityAccessCtrl.createAtManager();
        var tokenIDList = [tokenID]
        var permissionNameList = [
            'ohos.permission.MICROPHONE',
            'ohos.permission.READ_MEDIA'
        ]

        function permissChangeCallback(data){
            console.info("==>on_003: change:" + data.change +
                "==>tokenID:" + data.tokenID +
                "==>permissionName:" + data.permissionName);
            if(data.permissionName == permissionNameList[1]){
                expect(data.change).assertEqual(PermStateChangeType.PERMISSION_GRANTED_OPER);
                atManager.off(type, tokenIDList, permissionNameList)
                atManager.revokeUserGrantedPermission(tokenIDList[0], permissionNameList[0],
                    PermissionFlag.PERMISSION_USER_SET);
                atManager.revokeUserGrantedPermission(tokenIDList[0], permissionNameList[1],
                    PermissionFlag.PERMISSION_USER_SET);
                done();
            }
        }

        try {
            atManager.on(type, tokenIDList, permissionNameList, permissChangeCallback);
        }
        catch(err) {
            console.error("==>on on_003 err:" + JSON.stringify(err));
            expect().assertFail();
            done();
        }
        var result = await atManager.grantUserGrantedPermission(tokenIDList[0], permissionNameList[0],
            PermissionFlag.PERMISSION_USER_SET);
        console.info("on_003 result001 = " + result)
        var result = await atManager.verifyAccessToken(tokenIDList[0], permissionNameList[0]);
        console.info("on_003 tokenID001 = " + tokenIDList[0] + "result = " + result)

        var result = await atManager.grantUserGrantedPermission(tokenIDList[0], permissionNameList[1],
            PermissionFlag.PERMISSION_USER_SET);
        console.info("on_003 result002 = " + result)
        var result = await atManager.verifyAccessToken(tokenIDList[0], permissionNameList[1]);
        console.info("on_003 tokenID002 = " + tokenIDList[0] + "result = " + result)

    })

     /**
     * @tc.number on_004
     * @tc.name on_004.
     * @tc.desc Test on,Monitor multiple permissions of multiple tokenids at the same time
     */
    it('on_004', 0, async function(done){
        console.info("on_004 start");
        var atManager = abilityAccessCtrl.createAtManager();
        var tokenIDList = [
            536927002,
            tokenID
        ]
        var permissionNameList = [
            'ohos.permission.MEDIA_LOCATION',
            'ohos.permission.READ_HEALTH_DATA'
        ]

        function permissChangeCallback(data){
            console.info("==>on_004: change:" + data.change
                + "==>tokenID:" + data.tokenID
                + "==>permissionName:" + data.permissionName);
            if(data.tokenID == tokenIDList[1] && data.permissionName == permissionNameList[1]) {
                console.info("on_004 success!!!");
                expect(data.change).assertEqual(PermStateChangeType.PERMISSION_GRANTED_OPER);
                done();
            }
        }
        try {
            atManager.on(type, tokenIDList, permissionNameList, permissChangeCallback);
        }
        catch(err) {
            console.error("====>on_004 err:" + JSON.stringify(err));
            expect().assertFail();
            done();
        }
        sleep(500);
        var result = await atManager.grantUserGrantedPermission(tokenIDList[0], permissionNameList[0],
            PermissionFlag.PERMISSION_USER_SET);
        expect(result).assertEqual(RESULT_SUCCESS);
        sleep(500);
        var result = await atManager.grantUserGrantedPermission(tokenIDList[0], permissionNameList[1],
            PermissionFlag.PERMISSION_USER_SET);
        expect(result).assertEqual(RESULT_SUCCESS);
        sleep(500);
        var result = await atManager.grantUserGrantedPermission(tokenIDList[1], permissionNameList[0],
            PermissionFlag.PERMISSION_USER_SET);
        expect(result).assertEqual(RESULT_SUCCESS);
        sleep(500);
        var result = await atManager.grantUserGrantedPermission(tokenIDList[1], permissionNameList[1],
            PermissionFlag.PERMISSION_USER_SET);
        console.info("on_004  result = " + result);
        expect(result).assertEqual(RESULT_SUCCESS);
        var result = await atManager.verifyAccessToken(tokenID, permissionNameList[1]);
        console.info("on_004 tokenID = "  + result + "tokenid = " + tokenID);
    })

    /**
     * @tc.number off_001
     * @tc.name off_001.
     * @tc.desc Test off,Cancel permission status change monitoring
     */
    it('off_001', 0, async function(done){
        console.info("off_001 start");
        var atManager = abilityAccessCtrl.createAtManager();
        var tokenIDList = [tokenID]
        var permissionNameList = [
            'ohos.permission.CAMERA'
        ]

        atManager.on(type, tokenIDList, permissionNameList, PermStateChangeCallback => {
            console.info("==>off_001: change:" + PermStateChangeCallback.change
                + "==>tokenID:" + PermStateChangeCallback.tokenID
                + "==>permissionName:" + PermStateChangeCallback.permissionName);
            atManager.off(type, tokenIDList, permissionNameList)
            done();
        })

        var result = await atManager.grantUserGrantedPermission(tokenIDList[0], permissionNameList[0],
            PermissionFlag.PERMISSION_USER_SET);
        console.info("off_001 result = " + result)
        var result = await atManager.verifyAccessToken(tokenIDList[0], permissionNameList[0]);
        console.info("off_001 tokenID = " + tokenIDList[0] + "result = " + result)
        await atManager.revokeUserGrantedPermission(tokenIDList[0], permissionNameList[0],
            PermissionFlag.PERMISSION_USER_SET);
    })

    /**
     * @tc.number off_002
     * @tc.name off_002.
     * @tc.desc Test off,Cancel permission status change monitoring（callback）
     */
    it('off_002', 0, async function(done){
        console.info("off_002 start");
        var atManager = abilityAccessCtrl.createAtManager();
        var tokenIDList = [tokenID]
        var permissionNameList = [
            'ohos.permission.READ_MEDIA'
        ]

        atManager.on(type, tokenIDList, permissionNameList, PermStateChangeCallback => {
            console.info("==>off_001: change:" + PermStateChangeCallback.change
                + "==>tokenID:" + PermStateChangeCallback.tokenID
                + "==>permissionName:" + PermStateChangeCallback.permissionName);
            atManager.off(type, tokenIDList, permissionNameList, data => {})
            done();
            
        })

        var result = await atManager.grantUserGrantedPermission(tokenIDList[0], permissionNameList[0],
            PermissionFlag.PERMISSION_USER_SET);
        console.info("off_002 result = " + result)
        var result = await atManager.verifyAccessToken(tokenIDList[0], permissionNameList[0]);
        console.info("off_002 tokenID = " + tokenIDList[0] + "result = " + result)

    })

    /**
     * @tc.number off_003
     * @tc.name off_003.
     * @tc.desc Test off,Cancel the monitoring of multiple permission status changes
     */
    it('off_003', 0, async function(done){
        console.info("off_003 start");
        var atManager = abilityAccessCtrl.createAtManager();
        var tokenIDList = [tokenID]
        var permissionNameList = [
            'ohos.permission.MICROPHONE',
            'ohos.permission.CAMERA',
            'ohos.permission.LOCATION'
        ]

        atManager.on(type, tokenIDList, permissionNameList, PermStateChangeCallback => {
            console.info("==>off_001: change:" + PermStateChangeCallback.change
                + "==>tokenID:" + PermStateChangeCallback.tokenID
                + "==>permissionName:" + PermStateChangeCallback.permissionName);
            atManager.off(type, tokenIDList, permissionNameList)
            atManager.revokeUserGrantedPermission(tokenIDList[0], permissionNameList[0],
                PermissionFlag.PERMISSION_USER_SET);

            done();
        })

        var result = await atManager.grantUserGrantedPermission(tokenIDList[0], permissionNameList[0],
            PermissionFlag.PERMISSION_USER_SET);
        console.info("off_003 result = " + result)
        var result = await atManager.verifyAccessToken(tokenIDList[0], permissionNameList[0]);
        console.info("off_003 tokenID1 = " + tokenIDList[0] + "result = " + result)

    })
})
}
