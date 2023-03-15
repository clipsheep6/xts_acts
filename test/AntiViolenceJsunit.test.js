import {describe, it, expect} from 'deccjsunit/index'
import userAuth from '@ohos.UserIAM.userAuth'
import userIDM from '@ohos.UserIAM.userIDM'
import pinAuth from '@ohos.UserIAM.pinAuth'
import * as publicFC from './Publicfunction'

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

let SetPropertyType = {
    PROCESS_ALGORITHM : 1,
}

let userID = {
    User1 : 10,
    User2 : 11,
    User3 : 12,
    User4 : 13,
    User5 : 14
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

    it('testaddfacewithnopin101', 0, async function (done) {
        try {
            publicFC.publicRegisterInputer(PinAuth,AuthSubType.PIN_SIX,Inputerdata)
            let challenge = publicFC.publicOpenSession(UserIDM)
            publicFC.publicaddCredential(UserIDM,CredentialInfopinsix)
            let info101 = publicFC.publicauth(UserAuth,challenge,AuthType.PIN,AuthTurstLevel.ATL1)
            let token = info101.extraInfo.token
            CredentialInfoface2d.token = token
            let addfaceresult = publicFC.publicaddCredential(UserIDM,CredentialInfoface2d)
            expect(ResultCode.SUCCESS).assertEqual(addfaceresult.addCredresult);
            let deluserresult = publicFC.publicdelUser(UserIDM,token)
            publicFC.publicCloseSession(UserIDM)
            publicFC.publicunRegisterInputer(PinAuth)
            done();
        } catch (e) {
            console.log("tesaddface101 fail " + e);
            expect(null).assertFail();
        }
    })

    it('testaddfacetwotimes101', 0, async function (done) {
        try {
            publicFC.publicRegisterInputer(PinAuth,AuthSubType.PIN_SIX,Inputerdata)
            let challenge = publicFC.publicOpenSession(UserIDM)
            publicFC.publicaddCredential(UserIDM,CredentialInfopinsix)
            let info101 = publicFC.publicauth(UserAuth,challenge,AuthType.PIN,AuthTurstLevel.ATL1)
            let token = info101.extraInfo.token
            CredentialInfoface2d.token = token
            let addfaceresult = publicFC.publicaddCredential(UserIDM,CredentialInfoface2d)
            expect(ResultCode.SUCCESS).assertEqual(addfaceresult.addCredresult);
            let addfaceresult1 = publicFC.publicaddCredential(UserIDM,CredentialInfoface2d)
            expect(ResultCode.FAIL).assertEqual(addfaceresult.addCredresult);
            let deluserresult = publicFC.publicdelUser(UserIDM,token)
            publicFC.publicCloseSession(UserIDM)
            publicFC.publicunRegisterInputer(PinAuth)
            done();
        } catch (e) {
            console.log("tesaddface101 fail " + e);
            expect(null).assertFail();
        }
    })

    it('testdelfacewithnopin101', 0, async function (done) {
        try {
            publicFC.publicRegisterInputer(PinAuth,AuthSubType.PIN_SIX,Inputerdata)
            let challenge = publicFC.publicOpenSession(UserIDM)
            let info101 = publicFC.publicdelCred(UserAuth,"credentialId","token")
            expect(ResultCode.FAIL).assertEqual(info101.delCredresult);
            publicFC.publicCloseSession(UserIDM)
            publicFC.publicunRegisterInputer(PinAuth)
            done();
        } catch (e) {
            console.log("tesaddface101 fail " + e);
            expect(null).assertFail();
        }
    })

    it('testdelfacewithnoface101', 0, async function (done) {
        try {
            publicFC.publicRegisterInputer(PinAuth,AuthSubType.PIN_SIX,Inputerdata)
            let challenge = publicFC.publicOpenSession(UserIDM)
            publicFC.publicaddCredential(UserIDM,CredentialInfopinsix)
            let info101 = publicFC.publicdelCred(UserAuth,"credentialId","token")
            let token = info101.extraInfo.token
            CredentialInfoface2d.token = token
            let info102 = publicFC.publicauth(UserAuth,challenge,AuthType.FACE,AuthTurstLevel.ATL1)
            expect(ResultCode.FAIL).assertEqual(info102.authresult);
            let deluserresult = publicFC.publicdelUser(UserIDM,token)
            publicFC.publicCloseSession(UserIDM)
            publicFC.publicunRegisterInputer(PinAuth)
            done();
        } catch (e) {
            console.log("tesaddface101 fail " + e);
            expect(null).assertFail();
        }
    })

    it('testfaceauthwithnoface101', 0, async function (done) {
        try {
            publicFC.publicRegisterInputer(PinAuth,AuthSubType.PIN_SIX,Inputerdata)
            let challenge = publicFC.publicOpenSession(UserIDM)
            publicFC.publicaddCredential(UserIDM,CredentialInfopinsix)
            let info101 = publicFC.publicauth(UserAuth,challenge,AuthType.PIN,AuthTurstLevel.ATL1)
            let token = info101.extraInfo.token
            CredentialInfoface2d.token = token
            let info102 = publicFC.publicauth(UserAuth,challenge,AuthType.FACE,AuthTurstLevel.ATL1)
            expect(ResultCode.TYPE_NOT_SUPPORT).assertEqual(info102.authresult);
            let deluserresult = publicFC.publicdelUser(UserIDM,token)
            publicFC.publicCloseSession(UserIDM)
            publicFC.publicunRegisterInputer(PinAuth)
            done();
        } catch (e) {
            console.log("tesaddface101 fail " + e);
            expect(null).assertFail();
        }
    })

    it('testfaceauthwithnopin101', 0, async function (done) {
        try {
            publicFC.publicRegisterInputer(PinAuth,AuthSubType.PIN_SIX,Inputerdata)
            let challenge = publicFC.publicOpenSession(UserIDM)
            let info101 = publicFC.publicauth(UserAuth,challenge,AuthType.FACE,AuthTurstLevel.ATL1)
            expect(ResultCode.TYPE_NOT_SUPPORT).assertEqual(info101.authresult);
            publicFC.publicCloseSession(UserIDM)
            publicFC.publicunRegisterInputer(PinAuth)
            done();
        } catch (e) {
            console.log("tesaddface101 fail " + e);
            expect(null).assertFail();
        }
    })

    it('testdeletepinthenauthcace101', 0, async function (done) {
        try {
            publicFC.publicRegisterInputer(PinAuth,AuthSubType.PIN_SIX,Inputerdata)
            let challenge = publicFC.publicOpenSession(UserIDM)
            publicFC.publicaddCredential(UserIDM,CredentialInfopinsix)
            let info101 = publicFC.publicauth(UserAuth,challenge,AuthType.PIN,AuthTurstLevel.ATL1)
            let token = info101.extraInfo.token
            CredentialInfoface2d.token = token
            let addfaceresult = publicFC.publicaddCredential(UserIDM,CredentialInfoface2d)
            expect(ResultCode.SUCCESS).assertEqual(addfaceresult.addCredresult);
            let deluserresult = publicFC.publicdelUser(UserIDM,token)
            let info102 = publicFC.publicauth(UserAuth,challenge,AuthType.FACE,AuthTurstLevel.ATL1)
            expect(ResultCode.NOT_ENROLLED).assertEqual(info102.authresult);
            publicFC.publicCloseSession(UserIDM)
            publicFC.publicunRegisterInputer(PinAuth)
            done();
        } catch (e) {
            console.log("tesaddface101 fail " + e);
            expect(null).assertFail();
        }
    })

    it('testcancelauthpinwitholdcontextID101', 0, async function (done) {
        try {
            publicFC.publicRegisterInputer(PinAuth,AuthSubType.PIN_SIX,Inputerdata)
            let challenge1 = publicFC.publicOpenSession(UserIDM)
            let addcredresult101 = publicFC.publicaddCredential(UserIDM,CredentialInfopinsix)
            let result1 = null
            let extraInfo1 = null
            let module1 = null
            let acquire1 = null
            let extr1 = null
            let contextID1 = null
            let authinfo101 = publicFC.publicauth(UserAuth,challenge1,AuthType.PIN,AuthTurstLevel.ATL1)
            contextID1 = await UserAuth.authUser(userID, challenge1, AuthType.PIN, AuthTurstLevel.ATL1, {
                onResult: function(result,extraInfo){
                    console.log(result)
                    result1 = result
                    extraInfo1 = extraInfo
                },
                onAcquireInfo:function (module,acquire,extr){
                    module1 = module
                    acquire1 = acquire
                    extr1 = extr
                    console.info(module);
                }
            })
            await sleep(5000);
            let cancelresult = publicFC.publicgecancelAuth(UserAuth,authinfo101.contextID)
            expect(ResultCode.FAIL).assertEqual(authinfo101.contextID);
            cancelresult = publicFC.publicgecancelAuth(UserAuth,contextID1)
            expect(ResultCode.SUCCESS).assertEqual(contextID1);
            let info1011 = publicFC.publicauth(UserAuth,challenge1,AuthType.PIN,AuthTurstLevel.ATL1)
            let token = info1011.extraInfo.token
            let deluserresult = publicFC.publicdelUser(UserIDM,token)
            publicFC.publicCloseSession(UserIDM)
            publicFC.publicunRegisterInputer(PinAuth)
            done();
        } catch (e) {
            console.log("testcancelauthwitholdchallenge101 fail " + e);
            expect(null).assertFail();
        }
    })

    it('testaddpincancelwitholdchallenge101', 0, async function (done) {
        try {
            publicFC.publicRegisterInputer(PinAuth,AuthSubType.PIN_MIXED,Inputerdata)
            let challenge = publicFC.publicOpenSession(UserIDM)
            let challenge1 = publicFC.publicOpenSession(UserIDM)
            let result1 = null
            let extraInfo1 = null
            let module1 = null
            let acquire1 = null
            let extr1 = null
            await UserIDM.updateCredential(CredentialInfopinsix, {
                onResult: function(result,extraInfo){
                    console.log(result)
                    result1 = result
                    extraInfo1 = extraInfo.credentialId
                },
                onAcquireInfo:function (module,acquire,extr){
                    module1 = module
                    acquire1 = acquire
                    extr1 = extr
                    console.info(module);
                }
            })
            await sleep(5000);
            let cancelresult = publicFC.publiccancel(UserIDM,challenge)
            expect(ResultCode.FAIL).assertEqual(cancelresult);
            let cancelresult1 = publicFC.publiccancel(UserIDM,challenge1)
            expect(ResultCode.SUCCESS).assertEqual(cancelresult1);
            publicFC.publicCloseSession(UserIDM)
            publicFC.publicunRegisterInputer(PinAuth)
            done();
        } catch (e) {
            console.log("testaddpincancelwitholdchallenge101 fail " + e);
            expect(null).assertFail();
        }
    })

    it('testaddfacecancelwitholdchallenge101', 0, async function (done) {
        try {
            publicFC.publicRegisterInputer(PinAuth,AuthSubType.PIN_SIX,Inputerdata)
            let challenge1 = publicFC.publicOpenSession(UserIDM)
            let challenge2 = publicFC.publicOpenSession(UserIDM)
            publicFC.publicaddCredential(UserIDM,CredentialInfopinsix)
            let info101 = publicFC.publicauth(UserAuth,challenge2,AuthType.PIN,AuthTurstLevel.ATL1)
            let token = info101.extraInfo.token
            CredentialInfoface2d.token = token
            let result1 = null
            let extraInfo1 = null
            let module1 = null
            let acquire1 = null
            let extr1 = null
            await UserIDM.addCredential(CredentialInfoface2d, {
                onResult: function(result,extraInfo){
                    console.log(result)
                    result1 = result
                    extraInfo1 = extraInfo.credentialId
                },
                onAcquireInfo:function (module,acquire,extr){
                    module1 = module
                    acquire1 = acquire
                    extr1 = extr
                    console.info(module);
                }
            })
            await sleep(3000);
            let cancelresult = publicFC.publiccancel(UserIDM,challenge1)
            expect(ResultCode.FAIL).assertEqual(cancelresult);
            let cancelresult2 = publicFC.publiccancel(UserIDM,challenge2)
            expect(ResultCode.SUCCESS).assertEqual(cancelresult);
            expect(ResultCode.CANCELED).assertEqual(result1);
            publicFC.publicCloseSession(UserIDM)
            publicFC.publicunRegisterInputer(PinAuth)
            done();
        } catch (e) {
            console.log("testaddfacecancel101 fail " + e);
            expect(null).assertFail();
        }
    })

    it('testcancelauthfacewitholdcontextID101', 0, async function (done) {
        try {
            publicFC.publicRegisterInputer(PinAuth,AuthSubType.PIN_SIX,Inputerdata)
            let challenge = publicFC.publicOpenSession(UserIDM)
            publicFC.publicaddCredential(UserIDM,CredentialInfopinsix)
            let info101 = publicFC.publicauth(UserAuth,challenge,AuthType.PIN,AuthTurstLevel.ATL1)
            let token = info101.extraInfo.token
            CredentialInfoface2d.token = token
            let addfaceresult = publicFC.publicaddCredential(UserIDM,CredentialInfoface2d)
            let result1 = null
            let extraInfo1 = null
            let module1 = null
            let acquire1 = null
            let extr1 = null
            let contextID1 = null
            let authinfo101 = publicFC.publicauth(UserAuth,challenge,AuthType.PIN,AuthTurstLevel.ATL1)
            contextID1 = await UserAuth.auth(challenge, AuthType.FACE, AuthTurstLevel.ATL1, {
                onResult: function(result,extraInfo){
                    console.log(result)
                    result1 = result
                    extraInfo1 = extraInfo
                },
                onAcquireInfo:function (module,acquire,extr){
                    module1 = module
                    acquire1 = acquire
                    extr1 = extr
                    console.info(module);
                }
            })
            await sleep(3000);
            let authfacecancel101 = publicFC.publicgecancelAuth(UserAuth,authinfo101.contextID)
            expect(ResultCode.FAIL).assertEqual(authfacecancel101);
            let authfacecancel1011 = publicFC.publicgecancelAuth(UserAuth,contextID1)
            expect(ResultCode.CANCELED).assertEqual(authfacecancel1011);
            let deluserresult = publicFC.publicdelUser(UserIDM,token)
            publicFC.publicCloseSession(UserIDM)
            publicFC.publicunRegisterInputer(PinAuth)
            done();
        } catch (e) {
            console.log("testauthfacecancel101 fail " + e);
            expect(null).assertFail();
        }
    })
})
