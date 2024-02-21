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

import { beforeAll, describe, expect, it } from '@ohos/hypium';
import accesstokennative from 'libaccesstokennative.so';
import bundleManager from '@ohos.bundle.bundleManager';
import osAccount from '@ohos.account.osAccount';

let TAG = 'AccessTokenNativeTest: ';
let permissionNameUser: string = 'ohos.permission.DISTRIBUTED_DATASYNC';
let permissionNameSystem: string = 'ohos.permission.GET_BUNDLE_INFO';

const TIMEOUT = 5000;
const PERMISSION_DENIED = -1;
const PERMISSION_GRANTED = 0;

export default function AccessTokenNativeTest() {
    describe('SecurityAccessTokenNativeTest', () => {
        console.info(TAG + '##########start SecurityAccessTokenNativeTest');

        beforeAll(async function (done) {
            try {
                let userId: number = await osAccount.getAccountManager().getOsAccountLocalId();
            } catch(err) {
                console.error('getOsAccountLocalId failed, err is ' + JSON.stringify(err));
            }
            
            try {
                let appInfo: bundleManager.ApplicationInfo = await bundleManager.getApplicationInfo(
                    'com.security.accesstoken.nativetest', 0, userId);
            } catch(err) {
                console.error('getApplicationInfo failed, err is ' + JSON.stringify(err));
            }

            let tokenId = appInfo.accessTokenId;
            console.info(TAG + 'accessTokenId:' + tokenId + ', name:' + appInfo.name);

            done();
        })

        /**
         * @tc.number: Test_OH_AccessToken_VerifyAccessToken_001
         * @tc.name:   Test OH_AccessToken_VerifyAccessToken.
         * @tc.desc:   After the installation, user_grant permission is not granted by default(Promise).
         * @tc.size:   MediumTest
         * @tc.type:   Function
         * @tc.level:  Level 1
         */
        it('Test_OH_AccessToken_VerifyAccessToken_001', 0, async function(done){
            console.info(TAG + "Test_OH_AccessToken_VerifyAccessToken_001 start");

            let result: number = accesstokennative.oHAccessTokenVerifyAccessToken(tokenId, permissionNameUser);
            console.info(TAG + "Test_OH_AccessToken_VerifyAccessToken_001, tokenId: " + tokenId + ", result: "
                + result);

            expect(result).assertEqual(PERMISSION_DENIED);
            done();
        })

        /**
         * @tc.number: Test_OH_AccessToken_VerifyAccessToken_002
         * @tc.name:   Test OH_AccessToken_VerifyAccessToken.
         * @tc.desc:   After the installation, system_grant permission is granted by default(Promise).
         * @tc.size:   MediumTest
         * @tc.type:   Function
         * @tc.level:  Level 1
         */
        it('Test_OH_AccessToken_VerifyAccessToken_002', 0, async function(done){
            console.info(TAG + "Test_OH_AccessToken_VerifyAccessToken_002 start");

            let result: number = accesstokennative.oHAccessTokenVerifyAccessToken(tokenId, permissionNameSystem);
            console.info(TAG + "Test_OH_AccessToken_VerifyAccessToken_002, tokenId: " + tokenId + ", result: "
                + result);

            expect(result).assertEqual(PERMISSION_GRANTED);
            done();
        })

        /**
         * @tc.number: Test_OH_AccessToken_VerifyAccessToken_003
         * @tc.name:   Test OH_AccessToken_VerifyAccessToken.
         * @tc.desc:   Test invalid TokenID(0)(Promise).
         * @tc.size:   MediumTest
         * @tc.type:   Function
         * @tc.level:  Level 1
         */
        it('Test_OH_AccessToken_VerifyAccessToken_003', 0, async function(done){
            console.info(TAG + "Test_OH_AccessToken_VerifyAccessToken_003 start");

            let result: number = accesstokennative.oHAccessTokenVerifyAccessToken(0, permissionNameUser);
            console.info(TAG + "Test_OH_AccessToken_VerifyAccessToken_003, tokenId: " + tokenId + ", result: "
                + result);

            expect(result).assertEqual(PERMISSION_DENIED);
            done();
        })

        /**
         * @tc.number: Test_OH_AccessToken_VerifyAccessToken_004
         * @tc.name:   Test OH_AccessToken_VerifyAccessToken.
         * @tc.desc:   Test invalid permission(empty)(Promise).
         * @tc.size:   MediumTest
         * @tc.type:   Function
         * @tc.level:  Level 1
         */
        it('Test_OH_AccessToken_VerifyAccessToken_004', 0, async function(done){
            console.info(TAG + "Test_OH_AccessToken_VerifyAccessToken_004 start");

            let result: number = accesstokennative.oHAccessTokenVerifyAccessToken(tokenId, "");
            console.info(TAG + "Test_OH_AccessToken_VerifyAccessToken_004, tokenId: " + tokenId + ", result: "
                + result);

            expect(result).assertEqual(PERMISSION_DENIED);
            done();
        })

        /**
         * @tc.number: Test_OH_AccessToken_VerifyAccessToken_005
         * @tc.name:   Test OH_AccessToken_VerifyAccessToken.
         * @tc.desc:   Test invalid permission(length exceeds 256)(Promise).
         * @tc.size:   MediumTest
         * @tc.type:   Function
         * @tc.level:  Level 1
         */
        it('Test_OH_AccessToken_VerifyAccessToken_005', 0, async function(done){
            console.info(TAG + "Test_OH_AccessToken_VerifyAccessToken_005 start");

            let permissionName: string = "ohos.permission.testtesttesttesttesttesttesttesttesttesttesttesttesttest"
                + "testtesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttest"
                + "testtesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttesttest"
                + "testtesttesttesttesttest";
            let result: number = accesstokennative.oHAccessTokenVerifyAccessToken(tokenId, permissionName);
            console.info(TAG + "Test_OH_AccessToken_VerifyAccessToken_005, tokenId: " + tokenId + ", result: "
                + result);

            expect(result).assertEqual(PERMISSION_DENIED);
            done();
        })

        /**
         * @tc.number: Test_OH_AccessToken_VerifyAccessToken_006
         * @tc.name"   Test OH_AccessToken_VerifyAccessToken.
         * @tc.desc"   Test Error tokenId(Promise).
         * @tc.size:   MediumTest
         * @tc.type:   Function
         * @tc.level:  Level 1
         */
        it('Test_OH_AccessToken_VerifyAccessToken_006', 0, async function(done){
            console.info(TAG + "Test_OH_AccessToken_VerifyAccessToken_006 start");

            let permissionName: string = "ohos.permission.GRANT_SENSITIVE_PERMISSIONS";
            let result: number = accesstokennative.oHAccessTokenVerifyAccessToken(1111111111, permissionName);
            console.info(TAG + "Test_OH_AccessToken_VerifyAccessToken_006, tokenId: " + tokenId + ", result: "
                + result);

            expect(result).assertEqual(PERMISSION_DENIED);
            done();
        })

        /**
         * @tc.number: Test_OH_AccessToken_VerifyAccessToken_007
         * @tc.name:   Test OH_AccessToken_VerifyAccessToken.
         * @tc.desc:   Test Error permission(Promise).
         * @tc.size:   MediumTest
         * @tc.type:   Function
         * @tc.level:  Level 1
         */
        it('Test_OH_AccessToken_VerifyAccessToken_007', 0, async function(done){
            console.info(TAG + "Test_OH_AccessToken_VerifyAccessToken_007 start");

            let permissionName: string = "ohos.permission.GRANT_SENSITIVE_PERMISSIO";
            let result: number = accesstokennative.oHAccessTokenVerifyAccessToken(tokenId, permissionName);
            console.info(TAG + "Test_OH_AccessToken_VerifyAccessToken_007, tokenId: " + tokenId + ", result: "
                + result);

            expect(result).assertEqual(PERMISSION_DENIED);

            done();
        })
    })
}
