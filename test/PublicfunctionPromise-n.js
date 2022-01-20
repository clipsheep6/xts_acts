import {describe, it, expect} from 'deccjsunit/index'

function sleep(ms) {
    return new Promise(resolve => setTimeout(resolve, ms));
}

//同步
function publicRegisterInputer(PinAuth,AuthSubType,Inputerdata){
    try {
        let registerresult = PinAuth.registerInputer({onGetData:(function (Inputdata) {
            Inputdata.onSetData(AuthSubType,Inputerdata);})
        })
        console.log("testFace publicRegisterInputer result is: " + registerresult);
        return registerresult
    }
    catch (e) {
        console.log("testFace publicRegisterInputer fail " + e);
        expect(null).assertFail();
    }
}

function publicunRegisterInputer(PinAuth,callback){
    try {
        let unRegist = 1;
        PinAuth.unregisterInputer();
        callback(unRegist)
    }
    catch (e) {
        console.log("testFace publicRegisterInputer fail " + e);
        expect(null).assertFail();
    }
}

async function publicOpenSession(UserIDM,callback){
    try {
        let challenge = null
        await UserIDM.openSession().then((manager) =>{
            challenge = manager;
            expect(true).assertEqual(challenge != null);
            callback(challenge)
        }).catch((err) => {
            expect(null).assertFail();
        });
    } 
    catch (e) { 
        console.log("publicOpenSession fail " + e);
        expect(null).assertFail();
    }
}

function publicCloseSession(UserIDM,callback){
    try {
        let closesession = 0;
        UserIDM.closeSession();
        callback(closesession);
    }
    catch (e) {
        console.log("testFace publicCloseSession fail " + e);
        expect(null).assertFail();
    }}


async function publicaddCredential(UserIDM,CredentialInfo,callback1,callback2){
    try {
        let onresult = {
            addCredresult: null,
            credentialId: null,
        }
        let onAcquireInfo = {
            addCredmodule : null,
            addCredacquire : null,
            addCredextr : null
        }
        UserIDM.addCredential(CredentialInfo, {
            onResult: function(result,extraInfo){
                console.log(result)
                onresult.addCredresult= result
                onresult.credentialId = extraInfo.credentialId
                callback1(onresult)
            },
            onAcquireInfo:function (module,acquire,extr){
                onAcquireInfo.addCredmodule = module
                onAcquireInfo.addCredacquire = acquire
                onAcquireInfo.addCredextr = extr
                console.info(module);
                callback2(onAcquireInfo)
            },
        })
    }
    catch (e) {
        console.log("testFace publicaddCredential fail " + e);
        expect(null).assertFail();
    }
}
    
function publicupdateCred(UserIDM,CredentialInfo,callback1,callback2){
    try {
        let onresult = {
            updateCredresult: null,
            CredentialId: null,
        }
        let onacquireinfo = {
            updateCredmodule : null,
            updateCredacquire : null,
            updateCredextr : null
        }
        UserIDM.updateCredential(CredentialInfo, {
            onResult: function(result,extraInfo){
                console.log("testFace faceDemo updateCredential result = " + result)
                onresult.updateCredresult = result
                console.log("testFace faceDemo updateCredential credentialId = " + extraInfo.credentialId)
                onresult.CredentialId = extraInfo.credentialId
                callback1(onresult)
            },
            onAcquireInfo:function (module,acquire,extr){
                onacquireinfo.updateCredmodule = module
                onacquireinfo.updateCredacquire = acquire
                onacquireinfo.updateCredextr = extr
                console.log("testFace faceDemo updateCredential module = " + module)
                callback2(onacquireinfo)
            }
        })
    }
    catch (e) {
        console.log("testFace publicupdateCred fail " + e);
        expect(null).assertFail();
    }
}

//同步
function publiccancel(UserIDM,challenge){
    try {
        let cancelresult = UserIDM.cancel(challenge)
        console.log("testFace cancelresult is " + cancelresult);
        return cancelresult
    }
    catch (e) {
        console.log("testFace publiccancel fail " + e);
        expect(null).assertFail();
    }
}

function publicdelUser(UserIDM,token,callback1,callback2){
    try {
        let onresult = {
            delUserresult: null,
            CredentialId: null,
        }
        let onacquireinfo = {
            delUsermodule : null,
            delUseracquire : null,
            delUserextr : null
        }
        UserIDM.delUser(token, {
            onResult: function(result,extraInfo){
                console.log("testFace faceDemo delUser result = " + result)
                onresult.delUserresult = result
                console.log("testFace faceDemo delUser credentialId = " + extraInfo.credentialId)
                onresult.CredentialId = extraInfo.credentialId
                callback1(onresult)
            },
            onAcquireInfo:function (module,acquire,extr){
                onacquireinfo.delUsermodule = module
                onacquireinfo.delUseracquire = acquire
                onacquireinfo.delUserextr = extr
                console.log("testFace faceDemo delUser module = " + module)
                callback2(onacquireinfo)
            }
        })
    }
    catch (e) {
        console.log("testFace publicdelUser fail " + e);
        expect(null).assertFail();
    }
}

function publicdelCred(UserIDM,credentialId,token,callback1,callback2){
    try {
        let onresult = {
            delCredresult: null,
            CredentialId: null,
        }
        let onacquireinfo = {
            delCredmodule : null,
            delCredacquire : null,
            delCredextr : null
        }
        UserIDM.delCred(credentialId, token,{
            onResult: function(result,extraInfo){
                console.log("testFace faceDemo delCred result = " + result)
                onresult.delCredresult = result
                console.log("testFace faceDemo delCred credentialId = " + extraInfo.credentialId)
                onresult.CredentialId = extraInfo.credentialId
                callback1(onresult)
            },
            onAcquireInfo:function (module,acquire,extr){
                onacquireinfo.delCredmodule = module
                onacquireinfo.delCredacquire = acquire
                onacquireinfo.delCredextr = extr
                console.log("testFace faceDemo delCred module = " + module)
                callback2(onacquireinfo)
            }
        })
    }
    catch (e) {
        console.log("testFace publicdelCred fail " + e);
        expect(null).assertFail();
    }
}

async function publicgetAuthInfo(UserIDM,authType,callback){
    try {
        let EnrolledCredInfo = null
        UserIDM.getAuthInfo(authType).then((AsyncCallback) =>{
                EnrolledCredInfo = AsyncCallback;
                callback(EnrolledCredInfo)
            }).catch((err) => {
                expect(null).assertFail();
            });
    } 
    catch (e) {
        console.log("publicgetAuthInfo fail " + e);
        expect(null).assertFail();
}
}

async function publicgetallAuthInfo(UserIDM,callback){
    try {
        let EnrolledCredInfo = null
        UserIDM.getAuthInfo().then((AsyncCallback) =>{
            EnrolledCredInfo = AsyncCallback;
            callback(EnrolledCredInfo)
        }).catch((err) => {
            expect(null).assertFail();
        });
    } 
    catch (e) {
        console.log("publicgetallAuthInfo fail " + e);
        expect(null).assertFail();
}
}

//同步
function publicgetAvailabeStatus(UserAuth,authType,authTrustLevel){
    try {
        let AvailabeStatus = null
        AvailabeStatus = UserAuth.getAvailabeStatus(authType, authTrustLevel)
        return AvailabeStatus
    }
    catch (e) {
        console.log("testFace publicgetAvailabeStatus fail " + e);
        expect(null).assertFail();
    }
}


function publicgetProperty(UserAuth,GetPropertyRequest,callback){
    try {
        UserAuth.getProperty(GetPropertyRequest,function (AsyncCallback) {
            console.log("testFace faceDemo getallAuthInfo AsyncCallback = " + AsyncCallback)
            callback(AsyncCallback)
        })
    }
    catch (e) {
        console.log("testFace  publicgetProperty fail " + e);
        expect(null).assertFail();
    }
}


async function publicsetProperty(UserAuth,SetPropertyRequest,callback){
    try {
        let number = null
        UserAuth.setProperty(SetPropertyRequest).then((AsyncCallback) =>{
            number = AsyncCallback;
            callback(number)
        }).catch((err) => {
            expect(null).assertFail();
        });
    } 
    catch (e) {
        console.log("publicsetProperty fail " + e);
        expect(null).assertFail();
}
}

function publicauth(UserAuth,challenge,authType,authTrustLevel,callback1,callback2){
    try {
        let onresult = {
            authresult: null,
            authextr: null,
        }
        let onacquireinfo = {
            authmodule : null,
            authacquire : null,
            authextr : null
        }
        let contextID1 = null
        contextID1 = UserAuth.auth(challenge, authType,authTrustLevel,{
            onResult: function(result,extraInfo){
                console.log("testFace faceDemo auth result = " + result)
                onresult.authresult = result
                console.log("testFace faceDemo auth extraInfo = " + JSON.stringify(extraInfo))
                onresult.authextr = extraInfo
                callback1(onresult)
            },
            onAcquireInfo:function (module,acquire,extr){
                onacquireinfo.authmodule = module
                onacquireinfo.authacquire = acquire
                onacquireinfo.authextr = extr
                console.log("testFace faceDemo auth module = " + module)
                callback2(onacquireinfo)
            }
        })
        return contextID1
    }
    catch (e) {
        console.log("testFace publicauth fail " + e);
        expect(null).assertFail();
    }
}

function publicauthUser(UserAuth,userID,challenge,authType,authTrustLevel,callback1,callback2){
    try {
        let onresult = {
            authresult: null,
            authextr: null,
        }
        let onacquireinfo = {
            authmodule : null,
            authacquire : null,
            authextr : null
        }
        let contextID1 = null
        contextID1 = UserAuth.authUser(userID, challenge, authType, authTrustLevel, {
            onResult: function(result,extraInfo){
                console.log("testFace faceDemo authUser result = " + result)
                onresult.authresult = result
                console.log("testFace faceDemo authUser authextr = " + extraInfo)
                onresult.authextr = extraInfo
                callback1(onresult)
            },
            onAcquireInfo:function (module,acquire,extr){
                onacquireinfo.authmodule = module
                onacquireinfo.authacquire = acquire
                onacquireinfo.authextr = extr
                console.log("testFace faceDemo authUser module = " + module)
                callback2(onacquireinfo)
            }
        })
        return contextID1
    }
    catch (e) {
        console.log("testFace publicauthUser fail " + e);
        expect(null).assertFail();
    }
}

//同步
function publicgecancelAuth(UserAuth,contextID){
    try {
        let cancelAuthresult = null
        cancelAuthresult = UserAuth.cancelAuth(contextID)
        return cancelAuthresult
    }
    catch (e) {
        console.log("testFace publiccancelAuth fail " + e);
        expect(null).assertFail();
    }
}

function publicaddpin(PinAuth,UserIDM,AuthSubType,Inputerdata,CredentialInfo,) {
    try{
        let registerresult = PinAuth.registerInputer({onGetData:(async function (Inputdata) {
            try {
                let onresult = {
                    addCredresult: null,
                    credentialId: null,
                }
                let onAcquireInfo = {
                    addCredmodule : null,
                    addCredacquire : null,
                    addCredextr : null
                }
                UserIDM.addCredential(CredentialInfo, {
                    onResult: function(result,extraInfo){
                        console.log("publicaddpin addCredentialresult is " + result)
                        onresult.addCredresult= result
                        onresult.credentialId = extraInfo.credentialId
                        callback1(onresult)
                    },
                    onAcquireInfo:function (module,acquire,extr){
                        onAcquireInfo.addCredmodule = module
                        onAcquireInfo.addCredacquire = acquire
                        onAcquireInfo.addCredextr = extr
                        console.info(module);
                        callback2(onAcquireInfo)
                    },
                })
            }
            catch (e) {
                console.log("testFace publicaddCredential fail " + e);
                expect(null).assertFail();
            }
            Inputdata.onSetData(AuthSubType,Inputerdata);})
        })
        console.log("testFace publicRegisterInputer result is: " + registerresult);
        return registerresult
    }
    catch(e){

    }

}


export{publicRegisterInputer, publicgetallAuthInfo, publicunRegisterInputer, publicOpenSession, publicCloseSession, publicaddCredential, publicupdateCred, publiccancel, publicdelUser, publicdelCred, publicgetAuthInfo, publicgetAvailabeStatus, publicgetProperty, publicsetProperty, publicauth, publicauthUser, publicgecancelAuth}