import {describe, it, expect} from 'deccjsunit/index'
import userAuth from '@ohos.userauth'
import userIDM from '@ohos.useridm'
import pinAuth from '@ohos.pinauth'
import * as publicFC from './Publicfunction-n'


let UserIDM = userIDM.constructor()
let PinAuth = pinAuth.constructor()
let UserAuth = userAuth.constructor()

let AuthType = {
    PIN : 1,
    FACE : 2
}

let userID = {
    User1 : 10,
    User2 : 11,
    User3 : 12,
    User4 : 13,
    User5 : 14
}

let AuthSubType = {
    PIN_SIX : 10000,
    PIN_NUMBER : 10001,
    PIN_MIXED : 10002,
    FACE_2D : 20000,
    FACE_3D : 20001
}
let AuthTurstLevel = {
    ATL1 : 10000,
    ATL2 : 20000,
    ATL3 : 30000,
    ATL4 : 40000
}

let SetPropertyType1 = {
    PROCESS_ALGORITHM : 1,
}

let SetPropertyType0 = {
    PROCESS_ALGORITHM : 0,
}

let ResultCode = {
    SUCCESS : 0,
    FAIL : 1,
    GENERAL_ERROR : 2,
    CANCELED : 3,
    TIMEOUT : 4,
    TYPE_NOT_SUPPORT : 5,
    TRUST_LEVEL_NOT_SUPPORT : 6,
    BUSY : 7,
    INVALID_PARAMETERS : 8,
    LOCKED : 9,
    NOT_ENROLLED : 10
}

let GetPropertyType = {
    AUTH_SUB_TYPE : 1,
    REMAIN_TIMES : 2,
    FREEZING_TIME : 3
}

let Inputerdata = new Uint8Array([12,34,56]);

let GetPropertyTypearray=new Array();
GetPropertyTypearray[0]=GetPropertyType.AUTH_SUB_TYPE;      
GetPropertyTypearray[1]=GetPropertyType.FREEZING_TIME;
GetPropertyTypearray[2]=GetPropertyType.REMAIN_TIMES;

let GetPropertyRequestpin = {
    authType:AuthType.PIN,
    keys:GetPropertyTypearray
    }

let GetPropertyRequestface = {
    authType:AuthType.FACE,
    keys:GetPropertyTypearray
    }

let CredentialInfopinsix = {
    credType: AuthType.PIN,
    credSubType: AuthSubType.PIN_SIX,
    token: null
}

let CredentialInfoface2d = {
    credType: AuthType.FACE,
    credSubType: AuthSubType.FACE_2D,
    token: null
}



describe('userauthTest', function () {
    /* *
        * @tc.number    : testGetEntriesString101
        * @tc.name      : Use getEntries get the value by mixing the string key
        * @tc.desc      : Mixed strings value can be obtained correctly
        * @tc.size      : MediumTest
        * @tc.type      : Function
        * @tc.level     : Level 1
    */
    it('testfunctionperformance101', 0, async function (done) {
        try {
            let verisioninfo = UserAuth.getVersion();
            console.log("Version is: " + verisioninfo);
            publicFC.publicRegisterInputer(PinAuth,AuthSubType.PIN_SIX,Inputerdata);
            let challenge ;
            publicFC.publicOpenSession(UserIDM, function (data) {
                console.info('testFace testfunctionstability101 publicOpenSession challenge = ' + data);
                challenge = data;
                publicFC.publicaddCredential(UserIDM,CredentialInfopinsix, function (data) {
                    console.info('testFace testfunctionstability101 publicaddCredential onResult = ' + JSON.stringify(data));
                    let info101;
                    publicFC.publicauth(UserAuth,challenge,AuthType.PIN,AuthTurstLevel.ATL1, function (data) {
                        console.info('testFace testfunctionstability101 publicauth onResult = ' + JSON.stringify(data));
                        info101 = data;
                        let token = info101.authextr.token;
                        CredentialInfoface2d.token = token;
                        let faceinfo101 ;
                        publicFC.publicauthUser(UserAuth,userID.User1,challenge,AuthType.PIN,AuthTurstLevel.ATL1, function (data) {
                            console.info('testFace testfunctionstability101 publicauthUser onResult = ' + JSON.stringify(data));
                            faceinfo101 = data;
                            expect(ResultCode.SUCCESS).assertEqual(faceinfo101.authUserresult);
                            publicFC.publicaddCredential(UserIDM,CredentialInfoface2d, function (data) {
                                console.info('testFace testfunctionstability101 publicaddCredential onResult = ' + JSON.stringify(data));
                                let EnrolledCredInfo ;
                                publicFC.publicgetAuthInfo(AuthType.PIN,UserIDM, function (data) {
                                    console.info('testFace testfunctionstability101 publicgetAuthInfo data' + data);
                                    EnrolledCredInfo = data;
                                    expect(AuthSubType.PIN_SIX).assertEqual(EnrolledCredInfo[0].authSubType);
                                    let ExecutorProperty101;
                                    publicFC.publicgetProperty(UserAuth,GetPropertyRequestpin, function (data) {
                                        console.info('testFace testfunctionstability101 publicgetProperty data' + data);
                                        ExecutorProperty101 = data;
                                        expect(ResultCode.SUCCESS).assertEqual(ExecutorProperty101.result);
                                        expect(AuthSubType.PIN_SIX).assertEqual(ExecutorProperty101.authSubType);
                                        publicFC.publicsetProperty(UserAuth,SetPropertyType1, function (data) {
                                            console.info('testFace testfunctionstability101 publicsetProperty data' + data);
                                            publicFC.publicsetProperty(UserAuth,SetPropertyType0, function (data) {
                                                console.info('testFace testfunctionstability101 publicsetProperty data' + data);
                                                let AvailabeStatus = publicFC.publicgetAvailabeStatus(UserAuth,AuthType.FACE,AuthTurstLevel.ATL1)
                                                expect(ResultCode.SUCCESS).assertEqual(AvailabeStatus);
                                                publicFC.publicdelUser(UserIDM,token, function (data) {
                                                    console.info('testFace testfunctionstability101 publicdelUser onResult = ' + JSON.stringify(data));
                                                    publicFC.publicCloseSession(UserIDM, function (data) {
                                                        console.info('testFace testfunctionstability101 publicCloseSession ');
                                                        publicFC.publicunRegisterInputer(PinAuth, function (data) {
                                                            console.info('testFace testfunctionstability101 publicunRegisterInputer ');
                                                            done();
                                                        })
                                                    })
                                                }, function (data) {
                                                    console.info('testFace testfunctionstability101 publicdelUser onAcquireInfo = ' + JSON.stringify(data));
                                                })
                                            })
                                        })
                                    })
                                })
                            }, function (data) {
                                console.info('testFace testfunctionstability101 publicaddCredential onAcquireInfo = ' + JSON.stringify(data));
                            })
                        }, function (data) {
                            console.info('testFace testfunctionstability101 publicauthUser onAcquireInfo = ' + JSON.stringify(data));
                        })
                    }, function (data) {
                        console.info('testFace testfunctionstability101 publicauth onAcquireInfo = ' + JSON.stringify(data));
                    })
                }, function (data) {
                    console.info('testFace testfunctionstability101 publicaddCredential onAcquireInfo = ' + JSON.stringify(data));
                })

            })

        } catch (e) {
            console.log("testfunctionstability101 fail " + e);
            expect(null).assertFail();
        }
    })
})
