import {describe, it, expect} from 'deccjsunit/index'
import userAuth from '@ohos.userauth'
import userIDM from '@ohos.useridm'
import pinAuth from '@ohos.pinauth'
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

    it('testauthfail101', 0, async function (done) {
        try {
            publicFC.publicRegisterInputer(PinAuth,AuthSubType.PIN_SIX,Inputerdata)
            let challenge = publicFC.publicOpenSession(UserIDM)
            let addcredresult101 = publicFC.publicaddCredential(UserIDM,CredentialInfopinsix) 
            let auth101 = publicFC.publicauth(UserAuth,challenge,AuthType.PIN,AuthTurstLevel.ATL1)
            expect(ResultCode.SUCCESS).assertEqual(auth101.authresult); 
            let token = auth101.extraInfo.token
            let deluserresult = publicFC.publicdelUser(UserIDM,token)
            publicFC.publicCloseSession(UserIDM)
            publicFC.publicunRegisterInputer(PinAuth)
            done();
        } catch (e) {
            console.log("testauthfail101 fail " + e);
            expect(null).assertFail();
        }
    })

    it('testauthfail102', 0, async function (done) {
        try {
            publicFC.publicRegisterInputer(PinAuth,AuthSubType.PIN_NUMBER,Inputerdata)
            let challenge = publicFC.publicOpenSession(UserIDM)
            let addcredresult101 = publicFC.publicaddCredential(UserIDM,CredentialInfopinnum) 
            let auth101 = publicFC.publicauth(UserAuth,challenge,AuthType.PIN,AuthTurstLevel.ATL1)
            expect(ResultCode.SUCCESS).assertEqual(auth101.authresult); 
            let token = auth101.extraInfo.token
            let deluserresult = publicFC.publicdelUser(UserIDM,token)
            publicFC.publicCloseSession(UserIDM)
            publicFC.publicunRegisterInputer(PinAuth)
            done();
        } catch (e) {
            console.log("testauthfail102 fail " + e);
            expect(null).assertFail();
        }
    })

    it('testauthfail103', 0, async function (done) {
        try {
            publicFC.publicRegisterInputer(PinAuth,AuthSubType.PIN_MIXED,Inputerdata)
            let challenge = publicFC.publicOpenSession(UserIDM)
            let addcredresult101 = publicFC.publicaddCredential(UserIDM,CredentialInfopinmix)
            let auth101 = publicFC.publicauth(UserAuth,challenge,AuthType.PIN,AuthTurstLevel.ATL1)
            expect(ResultCode.SUCCESS).assertEqual(auth101.authresult); 
            let token = auth101.extraInfo.token
            let deluserresult = publicFC.publicdelUser(UserIDM,token)
            publicFC.publicCloseSession(UserIDM)
            publicFC.publicunRegisterInputer(PinAuth)
            done();
        } catch (e) {
            console.log("testauthfail103 fail " + e);
            expect(null).assertFail();
        }
    })


    it('testauthuserfail101', 0, async function (done) {
        try {
            publicFC.publicRegisterInputer(PinAuth,AuthSubType.PIN_SIX,Inputerdata)
            let challenge = publicFC.publicOpenSession(UserIDM)
            let addcredresult101 = publicFC.publicaddCredential(UserIDM,CredentialInfopinsix) 
            let auth101 = publicFC.publicauthUser(UserAuth,userID.User1,challenge,AuthType.PIN,AuthTurstLevel.ATL1)
            expect(ResultCode.SUCCESS).assertEqual(auth101.authresult); 
            let token = auth101.extraInfo.token
            let deluserresult = publicFC.publicdelUser(UserIDM,token)
            publicFC.publicCloseSession(UserIDM)
            publicFC.publicunRegisterInputer(PinAuth)
            done();
        } catch (e) {
            console.log("testauthuserfail101 fail " + e);
            expect(null).assertFail();
        }
    })

    it('testauthuserfail102', 0, async function (done) {
        try {
            publicFC.publicRegisterInputer(PinAuth,AuthSubType.PIN_NUMBER,Inputerdata)
            let challenge = publicFC.publicOpenSession(UserIDM)
            let addcredresult101 = publicFC.publicaddCredential(UserIDM,CredentialInfopinnum) 
            let auth101 = publicFC.publicauthUser(UserAuth,userID.User1,challenge,AuthType.PIN,AuthTurstLevel.ATL1)
            expect(ResultCode.SUCCESS).assertEqual(auth101.authresult); 
            let token = auth101.extraInfo.token
            let deluserresult = publicFC.publicdelUser(UserIDM,token)
            publicFC.publicCloseSession(UserIDM)
            publicFC.publicunRegisterInputer(PinAuth)
            done();
        } catch (e) {
            console.log("testauthuserfail102 fail " + e);
            expect(null).assertFail();
        }
    })

    it('testauthuserfail103', 0, async function (done) {
        try {
            publicFC.publicRegisterInputer(PinAuth,AuthSubType.PIN_MIXED,Inputerdata)
            let challenge = publicFC.publicOpenSession(UserIDM)
            let addcredresult101 = publicFC.publicaddCredential(UserIDM,CredentialInfopinmix) 
            let auth101 = publicFC.publicauthUser(UserAuth,userID.User1,challenge,AuthType.PIN,AuthTurstLevel.ATL1)
            expect(ResultCode.SUCCESS).assertEqual(auth101.authresult); 
            let token = auth101.extraInfo.token
            let deluserresult = publicFC.publicdelUser(UserIDM,token)
            publicFC.publicCloseSession(UserIDM)
            publicFC.publicunRegisterInputer(PinAuth)
            done();
        } catch (e) {
            console.log("testauthuserfail103 fail " + e);
            expect(null).assertFail();
        }
    })
})
