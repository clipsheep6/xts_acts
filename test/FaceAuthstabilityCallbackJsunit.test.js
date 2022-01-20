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

let Inputerdata = new Uint8Array([12,34,56]);

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

function sleep(ms) {
    return new Promise(resolve => setTimeout(resolve, ms));
}

describe('userauthTest', function () {

    it('testauthface101', 0, async function (done) {
        try {
            publicFC.publicRegisterInputer(PinAuth,AuthSubType.PIN_SIX,Inputerdata);
            let challenge ;
            publicFC.publicOpenSession(UserIDM, function (data) {
                console.info('testFace testauthface101 publicOpenSession challenge = ' + data);
                challenge = data;
                publicFC.publicaddCredential(UserIDM,CredentialInfopinsix, function (data) {
                    console.info('testFace testauthface101 publicaddCredential onResult = ' + JSON.stringify(data));
                    let info101 ;
                    publicFC.publicauth(UserAuth,challenge,AuthType.PIN,AuthTurstLevel.ATL1, function (data) {
                        console.info('testFace testauthface101 publicauth onResult = ' + JSON.stringify(data));
                        info101 = data;
                        let token = info101.extraInfo.token;
                        CredentialInfoface2d.token = token;
                        publicFC.publicaddCredential(UserIDM,CredentialInfoface2d, function (data) {
                            console.info('testFace testauthface101 publicaddCredential onResult = ' + JSON.stringify(data));
                            let auth101 = null;
                            let contextID1 = null;
                            let range = 0;
                            let result1 = null;
                            let num = 0;
                            let a = 0;
                            let b = 0;
                            let c = 0;
                            for(let i = 0; i < 10000; i++){
                                range = Math.round(Math.random()*100);
                                if(num < 10){
                                    if(range = 1){
                                        //未到达10个认证时，完成认证
                                        //闭包方法
                                        (function c(output){
                                            contextID1 = UserAuth.auth(challenge, AuthType.FACE, AuthTurstLevel.ATL1, {
                                                onResult: function(result,extraInfo){
                                                    console.log(result)
                                                    //string转方法
                                                    eval( "var result_" + output + "=" + result);
                                                    expect(ResultCode.SUCCESS).assertEqual('result_${output}');
                                                    token = auth101.token;
                                                    a++;
                                                },
                                                onAcquireInfo:function (module,acquire,extr){
                                                }
                                            })
                                        })(num)
                                        num = num + 1
                                    }else{
                                        //未到达10个认证时，取消认证
                                        contextID1 = UserAuth.auth(challenge, AuthType.FACE, AuthTurstLevel.ATL1,{
                                            onResult: function(result,extraInfo){
                                                console.log(result)
                                                result1 = result;
                                                b++;
                                            },
                                            onAcquireInfo:function (module,acquire,extr){
                                            }
                                        })
                                        let cancelAuthresult = publicFC.publicgecancelAuth(UserAuth,contextID1);
                                        expect(ResultCode.SUCCESS).assertEqual(cancelAuthresult);
                                    }
                                }else{
                                    //到达10个认证后，不能再开启认证
                                    contextID1 = UserAuth.auth(challenge, AuthType.FACE, AuthTurstLevel.ATL1,{
                                        onResult: function(result,extraInfo){
                                            console.log(result)
                                            result1 = result;
                                        },
                                        onAcquireInfo:function (module,acquire,extr){
                                        }
                                    })
                                    expect(ResultCode.FAIL).assertEqual(result1);
                                    c++;
                                }

                            }
                            let intervalA = setInterval(()=> {
                                if(a + b + c == 10000){
                                    let deluserresult = publicFC.publicdelUser(UserIDM,token, function (data) {
                                        console.info('testFace testauthface101 publicdelUser onResult = ' + JSON.stringify(data));
                                        publicFC.publicCloseSession(UserIDM, function (data) {
                                            console.info('testFace testauthface101 publicCloseSession');
                                            publicFC.publicunRegisterInputer(PinAuth, function (data) {
                                                console.info('testFace testauthface101 publicunRegisterInputer');
                                                clearInterval(intervalA);
                                                done();
                                            })
                                        })
                                    }, function (data) {
                                        console.info('testFace testauthface101 publicdelUser onAcquireInfo = ' + JSON.stringify(data));
                                    })
                                }
                            },5000);
                        }, function (data) {
                            console.info('testFace testauthface101 publicaddCredential onAcquireInfo = ' + JSON.stringify(data));
                        })
                    }, function (data) {
                        console.info('testFace testauthface101 publicauth onAcquireInfo = ' + JSON.stringify(data));
                    })
                }, function (data) {
                    console.info('testFace testauthface101 publicaddCredential onAcquireInfo = ' + JSON.stringify(data));
                })
            })
        } catch (e) {
            console.log("testauth101 fail " + e);
            expect(null).assertFail();
        }
    })
})