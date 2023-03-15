import {describe, it, expect} from 'deccjsunit/index'
import userIDM from '@ohos.useridm'
import pinAuth from '@ohos.pinauth'
import userAuth from '@ohos.userauth'

import * as publicFC from './Publicfunction-f'


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

let Inputerdata = new Uint8Array([1,2,3,4,5,6]);

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

function sleep(ms) {
    return new Promise(resolve => setTimeout(resolve, ms));
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

    it('testdemostart101', 0, async function (done) {
        try {
//             let challenge;
//             console.log("testFace test7start");
//             console.log(" testFace faceDemo this.UserIDM" + UserIDM);
//             await publicFC.publicOpenSession(UserIDM, function(data){
//                 challenge = data;
//                 console.log(" testFace faceDemo111 this." + challenge);
//             });
//             await sleep(5000);
//             await publicFC.publicOpenSession(UserIDM, async function(data){
//                 challenge = data;
//                 console.log(" testFace faceDemo222111 this." + challenge);
//                 await sleep(5000);
//                 console.log(" testFace faceDemo222222 this." + challenge);
//             });
// //            await sleep(500)
// //            console.log(" testFace faceDemo this." + challenge);
// //            publicFC.publicaddCredential(UserIDM,CredentialInfopinsix)
// //            let EnrolledCredInfo = publicFC.publicgetAuthInfo(UserIDM,AuthType.PIN)
// //            expect(AuthSubType.PIN_SIX).assertEqual(EnrolledCredInfo[0].authSubType);
// //            publicFC.publicCloseSession(UserIDM)
            let timm = 5000
            console.log("testFace testdemostart101 before RegisterInputer");
            let registerresult;
            registerresult = await publicFC.publicRegisterInputer(PinAuth,AuthSubType.PIN_SIX,Inputerdata,function(data){
                console.log("testFace testdemostart101 before RegisterInputer" + data);
            });
//            console.log("testFace testdemostart101 after RegisterInputer" + registerresult);
//            registerresult = await publicFC.publicaddpin(PinAuth,UserIDM,AuthSubType.PIN_SIX,Inputerdata,CredentialInfopinsix,timm,
//                function(onresult){
//                console.log("testFace testdemostart101 addCredresult:  " + onresult.addCredresult);
//                console.log("testFace testdemostart101 registerresult:  " + registerresult);
//            },function(onAcquireInfo){
//                console.log("testFace testdemostart101 addCredresult:  " + onAcquireInfo.addCredmodule);
//            })
            done();
        } catch (e) {
            console.log("testFace testdemostart101 fail " + e);
            expect(null).assertFail();
        }
    })

    function test(data){

    }
})
