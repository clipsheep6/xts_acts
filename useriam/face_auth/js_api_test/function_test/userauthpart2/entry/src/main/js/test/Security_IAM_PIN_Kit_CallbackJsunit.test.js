/*
 * Copyright (C) 2021 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the 'License');
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an 'AS IS' BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */


import {describe, it, expect} from 'deccjsunit/index'
import userAuth from '@ohos.userauth'
import userIDM from '@ohos.useridm'
import pinAuth from '@ohos.pinauth'
import userAuthKit from '@ohos.userIAM.UserAuth'
import * as publicFC from './Publicfunction-n'

let UserIDM = userIDM.constructor()
let PinAuth = pinAuth.constructor()
let UserAuth = userAuth.constructor()
let UserAuthKit = userAuthKit.constructor()

let AuthType = {
    PIN: 1,
    FACE: 2
}
let AuthSubType = {
    PIN_SIX: 10000,
    PIN_NUMBER: 10001,
    PIN_MIXED: 10002,
    FACE_2D: 20000,
    FACE_3D: 20001
}
let AuthTurstLevel = {
    ATL1: 10000,
    ATL2: 20000,
    ATL3: 30000,
    ATL4: 40000
}

let SetPropertyType = {
    PROCESS_ALGORITHM: 1,
}

let userID = {
    User1: 100,
    User2: 2,
    User3: 3,
    User4: 4,
    User5: 5
}

let ResultCode = {
    SUCCESS: 0,
    FAIL: 1,
    GENERAL_ERROR: 2,
    CANCELED: 3,
    TIMEOUT: 4,
    TYPE_NOT_SUPPORT: 5,
    TRUST_LEVEL_NOT_SUPPORT: 6,
    BUSY: 7,
    INVALID_PARAMETERS: 8,
    LOCKED: 9,
    NOT_ENROLLED: 10,
    Authfail: 14
}

let GetPropertyType = {
    AUTH_SUB_TYPE: 1,
    REMAIN_TIMES: 2,
    FREEZING_TIME: 3
}

let Inputerdata = new Uint8Array([1, 2, 3, 4, 5, 6]);
let Inputerdatan = new Uint8Array([1, 1, 1, 1, 1, 1]);
let Inputerdatanum = new Uint8Array([1, 2, 3, 4, 5, 6, 7, 8]);
let Inputerdatanumn = new Uint8Array([1, 1, 1, 1, 1, 1, 1, 1]);
let Inputerdatamix = new Uint8Array([1, 2, 3, 4, 5, 6, 7, 8, 9]);
let Inputerdatamixn = new Uint8Array([1, 1, 1, 1, 1, 1, 1, 1, 1]);

let GetPropertyTypearray = new Array();
GetPropertyTypearray[0] = GetPropertyType.AUTH_SUB_TYPE;
GetPropertyTypearray[1] = GetPropertyType.FREEZING_TIME;
GetPropertyTypearray[2] = GetPropertyType.REMAIN_TIMES;

let GetPropertyRequestpin = {
    authType: AuthType.PIN,
    keys: GetPropertyTypearray
}

let GetPropertyRequestface = {
    authType: AuthType.FACE,
    keys: GetPropertyTypearray
}

let CredentialInfopinsix = {
    credType: AuthType.PIN,
    credSubType: AuthSubType.PIN_SIX,
    token: null
}

let CredentialInfopinnum = {
    credType: AuthType.PIN,
    credSubType: AuthSubType.PIN_NUMBER,
    token: null
}

let CredentialInfopinmix = {
    credType: AuthType.PIN,
    credSubType: AuthSubType.PIN_MIXED,
    token: null
}

let CredentialInfoface2d = {
    credType: AuthType.FACE,
    credSubType: AuthSubType.FACE_2D,
    token: null
}

function sleep(ms) {
    return new Promise(resolve => setTimeout(resolve, ms));
}

describe('userauthTest', function () {

    it('GetVersionTest_0101', 0, async function (done) {
        try {
            let getversionresult = null;
            getversionresult = UserAuthKit.getVersion();
            expect(false).assertEqual(addcredresult101 == null);
            done();
        } catch (e) {
            console.log("testFace GetVersionTest_0101 fail " + e);
            expect(null).assertFail();
        }
    })

    it('GetAvailabeStatusTest0101', 1, async function (done) {
        console.info('testFace GetAvailabeStatusTest0101 start');
        try {
            publicFC.publicRegisterInputer(PinAuth,AuthSubType.PIN_SIX,Inputerdata)
            publicFC.publicOpenSession(UserIDM,function(data){
                let challenge = data
                publicFC.publicaddCredential(UserIDM,CredentialInfopinsix,
                    function(onresult) {
                        console.info('testFace GetAvailabeStatusTest0101 addCredresult=' + onresult.addCredresult);
                        console.log("testFace GetAvailabeStatusTest0101 authUser result=" + onresult.addCredresult);
                        let Available
						Available = publicFC.publicgetAvailabeStatus(UserAuthKit,AuthType.PIN,AuthTurstLevel.ATL1)
                        console.info('testFace GetAvailabeStatusTest0101 AvailabeStatus1 = ' + AvailabeStatus);
                        expect(ResultCode.SUCCESS).assertEqual(AvailabeStatus);
                        Available = publicFC.publicgetAvailabeStatus(UserAuthKit,AuthType.PIN,AuthTurstLevel.ATL2)
                        console.info('testFace GetAvailabeStatusTest0101 AvailabeStatus2 = ' + AvailabeStatus);
                        expect(ResultCode.SUCCESS).assertEqual(AvailabeStatus);
                        Available = publicFC.publicgetAvailabeStatus(UserAuthKit,AuthType.PIN,AuthTurstLevel.ATL3)
                        console.info('testFace GetAvailabeStatusTest0101 AvailabeStatus3 = ' + AvailabeStatus);
                        expect(ResultCode.SUCCESS).assertEqual(AvailabeStatus);
                        Available = publicFC.publicgetAvailabeStatus(UserAuthKit,AuthType.PIN,AuthTurstLevel.ATL4)
                        console.info('testFace GetAvailabeStatusTest0101 AvailabeStatus4 = ' + AvailabeStatus);
                        expect(ResultCode.SUCCESS).assertEqual(AvailabeStatus);
                        publicFC.publicauth(UserAuth,challenge,AuthType.PIN,AuthTurstLevel.ATL1,
                            function(onresult) {
                                console.info('testFace GetAvailabeStatusTest0101 addCred = ' + onresult.authresult);
                                let token = onresult.authextr.token
                                publicFC.publicdelUser(UserIDM,token,function(onresult){
                                    console.log("testFace GetAvailabeStatusTest0101 delUser="+ onresult.delUserresult)
                                    publicFC.publicCloseSession(UserIDM,function(data){
                                        console.log("testFace GetAvailabeStatusTest0101 CloseSession= " + data)
                                        publicFC.publicunRegisterInputer(PinAuth,function(data){
                                            done();
                                        })
                                    })
                                },function(onacquireinfo){
                                })
                            }, function(onAcquireInfo) {
                            }
                        );
                    }, function(onAcquireInfo) {
                    });
            })
        } catch (e) {
            console.log("Security_IAM_Coauth_Func_0109 fail " + e);
            expect(null).assertFail();
        }
    })


it('AuthTest_0101', 0, async function (done) {
        try {
            publicFC.publicRegisterInputer(PinAuth,AuthSubType.PIN_SIX,Inputerdata)
            let challenge ;
            publicFC.publicOpenSession(UserIDM, function (data) {
                console.info('AuthTest_0101 openSession challenge = ' + data);
                challenge = data;
                publicFC.publicaddCredential(UserIDM,CredentialInfopinsix, function (onresult) {
                    console.info('AuthTest_0101 addCredential Result1 = ' + JSON.stringify(onresult));
                    let info101;
                    publicFC.publicauth(UserAuth,challenge,AuthType.PIN,AuthTurstLevel.ATL1, function (data) {
                        console.info('AuthTest_0101 auth onResult = ' + JSON.stringify(data));
                        info101 = data;
                        let token = info101.authextr.token;
                        CredentialInfoface2d.token = token;
                        let addfaceresult;
                        publicFC.publicaddCredential(UserIDM,CredentialInfoface2d, function (onresult) {
                            console.info('AuthTest_0101 addCredential Result2=' + JSON.stringify(onresult));
                            addfaceresult = onresult;
                            expect(ResultCode.SUCCESS).assertEqual(addfaceresult.addCredresult);
                            publicFC.publicauth(UserAuthKit,challenge,AuthType.FACE,10000, async function (data) {
                                console.info('testFace AuthTest_0101 onResult = ' + JSON.stringify(data));
                                let faceauth101 = data;
                                expect(ResultCode.SUCCESS).assertEqual(faceauth101.authresult);
                                let delcredresult ;
                                let contextID = await publicFC.publicauth(UserAuthKit,challenge,AuthType.FACE,10000,
                                function (data) {
                                console.info('AuthTest_0101 addCredential Result2=' + JSON.stringify(data.authresult));
                                let authresult = data.authresult
                                }, function (onacquireinfo) {
                                })
                                let cancelresult = publicgecancelAuth(UserAuthKit,contextID);
                                if(cancelresult == 1){
                                    expect(ResultCode.SUCCESS).assertEqual(authresult);
                                }else if(cancelresult == 0){
                                    expect(ResultCode.FAIL).assertEqual(authresult);
                                }
                                console.info('testFace AuthTest_0101 onResult = ' + JSON.stringify(data));
                                await publicFC.publicdelCred(UserIDM,credentialId,token, function (data) {
                                    console.info('testFace AuthTest_0101 del=' + JSON.stringify(data));
                                    delcredresult = data;
                                    expect(ResultCode.SUCCESS).assertEqual(delcredresult.delCredresult);
                                    publicFC.publicdelUser(UserIDM,token, function (data) {
                                        console.info('AuthTest_0101 delUser= ' + JSON.stringify(data));
                                        publicFC.publicCloseSession(UserIDM, function (data) {
                                            console.info('AuthTest_0101 closeSession');
                                            publicFC.publicunRegisterInputer(PinAuth, function (data) {
                                                console.info('AuthTest_0101 unRegister');
                                                done();
                                            })
                                        })
                                    }, function (data) {
                                    })
                                }, function (onacquireinfo) {
                                })
                            }, function (onacquireinfo) {
                            })
                        }, function (onacquireinfo) {
                        })
                    }, function (data) {
                    })
                }, function (onacquireinfo) {
                })
            })
        } catch (e) {
            console.log("AuthTest_0101 fail " + e);
            expect(null).assertFail();
        }
    })




})

