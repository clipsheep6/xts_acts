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

    it('testgetauthinfo101', 0, async function (done) {
        try {
            publicFC.publicRegisterInputer(PinAuth,AuthSubType.PIN_SIX,Inputerdata)
            publicFC.publicOpenSession(UserIDM,function(data){
                let challenge = data
                publicFC.publicaddCredential(UserIDM,CredentialInfopinsix,
                    function(onresult) {
                        console.info('testFace testgetauthinfo101 addCredresult = ' + onresult.addCredresult);
                        console.log("testFace faceDemo testgetauthinfo101 authUser result = " + onresult.addCredresult);
                        publicFC.publicgetAuthInfo(AuthType.PIN,UserIDM,function(data){
                            let EnrolledCredInfo = data;
                            expect(AuthSubType.PIN_SIX).assertEqual(EnrolledCredInfo[0].authSubType);
                            publicFC.publicauth(UserAuth,challenge,AuthType.PIN,AuthTurstLevel.ATL1,
                                function(onresult) {
                                    console.info('testFace testgetauthinfo101 addCred onResult = ' + onresult.authresult);
                                    let token = onresult.authextr.token
                                    publicFC.publicdelUser(UserIDM,token,function(onresult){
                                        console.log("testFace faceDemo testgetauthinfo101 delUser result = " + onresult.delUserresult)
                                        publicFC.publicCloseSession(UserIDM,function(data){
                                            console.log("testFace faceDemo testgetauthinfo101 CloseSession callback = " + data)
                                            publicFC.publicunRegisterInputer(PinAuth)
                                            done();
                                        })
                                    },function(onacquireinfo){
                                        console.info('testFace addCred onAcquireInfo = ' + JSON.stringify(onacquireinfo));
                                    })
                                }, function(onAcquireInfo) {
                                    console.info('testFace addCred onAcquireInfo = ' + JSON.stringify(onAcquireInfo));
                                }
                            );
                        })
                }, function(onAcquireInfo) {
                        console.info('testFace addCred onAcquireInfo = ' + JSON.stringify(onAcquireInfo));
                });
            })
        } catch (e) {
            console.log("testgetauthinfo101 fail " + e);
            expect(null).assertFail();
        }
    })

    it('testgetauthinfo102', 0, async function (done) {
        try {
            publicFC.publicRegisterInputer(PinAuth,AuthSubType.PIN_SIX,Inputerdata)
            publicFC.publicOpenSession(UserIDM,function(data){
                let challenge = data
                publicFC.publicaddCredential(UserIDM,CredentialInfopinsix,
                    function(onresult) {
                        console.info('testFace testgetauthinfo102 addCredresult = ' + onresult.addCredresult);
                        console.log("testFace faceDemo testgetauthinfo102 authUser result = " + onresult.addCredresult);
                        publicFC.publicauth(UserAuth,challenge,AuthType.PIN,AuthTurstLevel.ATL1,
                            function(onresult) {
                                console.info('testFace testgetauthinfo102 addCred onResult = ' + JSON.stringify(onresult));
                                let token = onresult.authextr.token
                                CredentialInfoface2d.token = token
                                publicFC.publicaddCredential(UserIDM,CredentialInfoface2d,function(onresult) {
                                    console.info('testFace testgetauthinfo102 ddCredentialface onResult = ' + onresult.authresult);
                                    console.log("testFace faceDemo testgetauthinfo102 ddCredentialface result = " + onresult.addCredresult)
                                    publicFC.publicgetAuthInfo(UserIDM,AuthType.FACE,function(AsyncCallback) {
                                        console.log("testFace faceDemo testgetauthinfo102 getAuthInfo AsyncCallback = " + AsyncCallback)
                                        expect(AuthSubType.FACE_2D).assertEqual(AsyncCallback[0].authSubType);
                                        publicFC.publicdelUser(UserIDM,token,function(onresult){
                                            console.log("testFace faceDemo testgetauthinfo101 delUser result = " + onresult.delUserresult)
                                            publicFC.publicCloseSession(UserIDM,function(data){
                                                console.log("testFace faceDemo testgetauthinfo101 CloseSession callback = " + data)
                                                publicFC.publicunRegisterInputer(PinAuth)
                                                done();
                                            })
                                        },function(onacquireinfo){
                                            console.info('testFace addCred onAcquireInfo = ' + JSON.stringify(onacquireinfo));
                                        })
                                    })
                                }, function(onAcquireInfo) {
                                    console.info('testFace addCred onAcquireInfo = ' + JSON.stringify(onAcquireInfo));
                                })
                            }, function(onAcquireInfo) {
                                console.info('testFace addCred onAcquireInfo = ' + JSON.stringify(onAcquireInfo));
                            }
                        );
                    }, function(onAcquireInfo) {
                        console.info('testFace addCred onAcquireInfo = ' + JSON.stringify(onAcquireInfo));
                    });
            })
        } catch (e) {
            console.log("testgetauthinfo101 fail " + e);
            expect(null).assertFail();
        }
    })

    it('testgetauthinfo103', 0, async function (done) {
        try {
            publicFC.publicRegisterInputer(PinAuth,AuthSubType.PIN_SIX,Inputerdata)
            publicFC.publicOpenSession(UserIDM,function(data){
                let challenge = data
                publicFC.publicaddCredential(UserIDM,CredentialInfopinsix,
                    function(onresult) {
                        console.info('testFace testgetauthinfo103 addCredresult = ' + onresult.addCredresult);
                        console.log("testFace faceDemo testgetauthinfo103 authUser result = " + onresult.addCredresult);
                        publicFC.publicgetallAuthInfo(UserIDM,function(data){
                            let EnrolledCredInfo = data;
                            expect(AuthSubType.PIN_SIX).assertEqual(EnrolledCredInfo[0].authSubType);
                            publicFC.publicauth(UserAuth,challenge,AuthType.PIN,AuthTurstLevel.ATL1,
                                function(onresult) {
                                    console.info('testFace testgetauthinfo103 addCred onResult = ' + onresult.authresult);
                                    let token = onresult.authextr.token
                                    publicFC.publicdelUser(UserIDM,token,function(onresult){
                                        console.log("testFace faceDemo testgetauthinfo103 delUser result = " + onresult.delUserresult)
                                        publicFC.publicCloseSession(UserIDM,function(data){
                                            console.log("testFace faceDemo testgetauthinfo103 CloseSession callback = " + data)
                                            publicFC.publicunRegisterInputer(PinAuth)
                                            done();
                                        })
                                    },function(onacquireinfo){
                                        console.info('testFace addCred onAcquireInfo = ' + JSON.stringify(onacquireinfo));
                                    })
                                }, function(onAcquireInfo) {
                                    console.info('testFace addCred onAcquireInfo = ' + JSON.stringify(onAcquireInfo));
                                }
                            );
                        })
                    }, function(onAcquireInfo) {
                        console.info('testFace addCred onAcquireInfo = ' + JSON.stringify(onAcquireInfo));
                    });
            })
        } catch (e) {
            console.log("testgetauthinfo101 fail " + e);
            expect(null).assertFail();
        }
    })

    it('testgetauthinfo104', 0, async function (done) {
        try {
            publicFC.publicRegisterInputer(PinAuth,AuthSubType.PIN_SIX,Inputerdata)
            publicFC.publicOpenSession(UserIDM,function(data){
                let challenge = data
                publicFC.publicaddCredential(UserIDM,CredentialInfopinsix,
                    function(onresult) {
                        console.info('testFace testgetauthinfo104 addCredresult = ' + onresult.addCredresult);
                        console.log("testFace faceDemo testgetauthinfo104 authUser result = " + onresult.addCredresult);
                        publicFC.publicauth(UserAuth,challenge,AuthType.PIN,AuthTurstLevel.ATL1,
                            function(onresult) {
                                console.info('testFace testgetauthinfo104 addCred onResult = ' + JSON.stringify(onresult));
                                let token = onresult.authextr.token
                                CredentialInfoface2d.token = token
                                publicFC.publicaddCredential(UserIDM,CredentialInfoface2d,function(onresult) {
                                    console.info('testFace testgetauthinfo104 ddCredentialface onResult = ' + onresult.authresult);
                                    console.log("testFace faceDemo testgetauthinfo104 ddCredentialface result = " + onresult.addCredresult)
                                    publicFC.publicgetallAuthInfo(UserIDM,function(AsyncCallback) {
                                        console.log("testFace faceDemo testgetauthinfo104 getAuthInfo AsyncCallback = " + AsyncCallback)
                                        expect(AuthSubType.FACE_2D).assertEqual(AsyncCallback[0].authSubType);
                                        expect(AuthSubType.FACE_2D).assertEqual(AsyncCallback[1].authSubType);
                                        publicFC.publicdelUser(UserIDM,token,function(onresult){
                                            console.log("testFace faceDemo testgetauthinfo104 delUser result = " + onresult.delUserresult)
                                            publicFC.publicCloseSession(UserIDM,function(data){
                                                console.log("testFace faceDemo testgetauthinfo104 CloseSession callback = " + data)
                                                publicFC.publicunRegisterInputer(PinAuth)
                                                done();
                                            })
                                        },function(onacquireinfo){
                                            console.info('testFace publicdelUser onAcquireInfo = ' + JSON.stringify(onacquireinfo));
                                        })
                                    })
                                }, function(onAcquireInfo) {
                                    console.info('testFace publicaddCredential onAcquireInfo = ' + JSON.stringify(onAcquireInfo));
                                })
                            }, function(onAcquireInfo) {
                                console.info('testFace publicauth onAcquireInfo = ' + JSON.stringify(onAcquireInfo));
                            }
                        );
                    }, function(onAcquireInfo) {
                        console.info('testFace publicaddCredential onAcquireInfo = ' + JSON.stringify(onAcquireInfo));
                    });
            })
        } catch (e) {
            console.log("testgetauthinfo101 fail " + e);
            expect(null).assertFail();
        }
    })

    it('testgetAvailabeStatus101', 0, async function (done) {
        try {
            publicFC.publicRegisterInputer(PinAuth,AuthSubType.PIN_SIX,Inputerdata)
            publicFC.publicOpenSession(UserIDM,function(data){
                let challenge = data
                publicFC.publicaddCredential(UserIDM,CredentialInfopinsix,
                    function(onresult) {
                        console.info('testFace testgetAvailabeStatus101 addCredresult = ' + onresult.addCredresult);
                        console.log("testFace faceDemo testgetAvailabeStatus101 authUser result = " + onresult.addCredresult);
                        let AvailabeStatus = publicFC.publicgetAvailabeStatus(UserAuth,AuthType.PIN,AuthTurstLevel.ATL1)
                        expect(ResultCode.SUCCESS).assertEqual(AvailabeStatus);
                        publicFC.publicauth(UserAuth,challenge,AuthType.PIN,AuthTurstLevel.ATL1,
                            function(onresult) {
                                console.info('testFace testgetAvailabeStatus101 addCred onResult = ' + onresult.authresult);
                                let token = onresult.authextr.token
                                publicFC.publicdelUser(UserIDM,token,function(onresult){
                                    console.log("testFace faceDemo testgetAvailabeStatus101 delUser result = " + onresult.delUserresult)
                                    publicFC.publicCloseSession(UserIDM,function(data){
                                        console.log("testFace faceDemo testgetAvailabeStatus101 CloseSession callback = " + data)
                                        publicFC.publicunRegisterInputer(PinAuth)
                                        done();
                                    })
                                },function(onacquireinfo){
                                    console.info('testFace publicdelUser onAcquireInfo = ' + JSON.stringify(onacquireinfo));
                                })
                            }, function(onAcquireInfo) {
                                console.info('testFace publicauth onAcquireInfo = ' + JSON.stringify(onAcquireInfo));
                            }
                        );
                    }, function(onAcquireInfo) {
                        console.info('testFace publicaddCredential onAcquireInfo = ' + JSON.stringify(onAcquireInfo));
                    });
            })
        } catch (e) {
            console.log("testgetauthinfo101 fail " + e);
            expect(null).assertFail();
        }
    })

    it('testgetAvailabeStatus102', 0, async function (done) {
        try {
            publicFC.publicRegisterInputer(PinAuth,AuthSubType.PIN_SIX,Inputerdata)
            publicFC.publicOpenSession(UserIDM,function(data){
                let challenge = data
                publicFC.publicaddCredential(UserIDM,CredentialInfopinsix,
                    function(onresult) {
                        console.info('testFace testgetAvailabeStatus102 addCredresult = ' + onresult.addCredresult);
                        console.log("testFace faceDemo testgetAvailabeStatus102 authUser result = " + onresult.addCredresult);
                        let AvailabeStatus = publicFC.publicgetAvailabeStatus(UserAuth,AuthType.PIN,AuthTurstLevel.ATL2)
                        expect(ResultCode.SUCCESS).assertEqual(AvailabeStatus);
                        publicFC.publicauth(UserAuth,challenge,AuthType.PIN,AuthTurstLevel.ATL1,
                            function(onresult) {
                                console.info('testFace testgetAvailabeStatus102 addCred onResult = ' + onresult.authresult);
                                let token = onresult.authextr.token
                                publicFC.publicdelUser(UserIDM,token,function(onresult){
                                    console.log("testFace faceDemo testgetAvailabeStatus102 delUser result = " + onresult.delUserresult)
                                    publicFC.publicCloseSession(UserIDM,function(data){
                                        console.log("testFace faceDemo testgetAvailabeStatus102 CloseSession callback = " + data)
                                        publicFC.publicunRegisterInputer(PinAuth)
                                        done();
                                    })
                                },function(onacquireinfo){
                                    console.info('testFace publicdelUser onAcquireInfo = ' + JSON.stringify(onacquireinfo));
                                })
                            }, function(onAcquireInfo) {
                                console.info('testFace publicauth onAcquireInfo = ' + JSON.stringify(onAcquireInfo));
                            }
                        );
                    }, function(onAcquireInfo) {
                        console.info('testFace publicaddCredential onAcquireInfo = ' + JSON.stringify(onAcquireInfo));
                    });
            })
        } catch (e) {
            console.log("testgetauthinfo101 fail " + e);
            expect(null).assertFail();
        }
    })

    it('testgetAvailabeStatus103', 0, async function (done) {
        try {
            publicFC.publicRegisterInputer(PinAuth,AuthSubType.PIN_SIX,Inputerdata)
            publicFC.publicOpenSession(UserIDM,function(data){
                let challenge = data
                publicFC.publicaddCredential(UserIDM,CredentialInfopinsix,
                    function(onresult) {
                        console.info('testFace testgetAvailabeStatus103 addCredresult = ' + onresult.addCredresult);
                        console.log("testFace faceDemo testgetAvailabeStatus103 authUser result = " + onresult.addCredresult);
                        let AvailabeStatus = publicFC.publicgetAvailabeStatus(UserAuth,AuthType.PIN,AuthTurstLevel.ATL3)
                        expect(ResultCode.SUCCESS).assertEqual(AvailabeStatus);
                        publicFC.publicauth(UserAuth,challenge,AuthType.PIN,AuthTurstLevel.ATL1,
                            function(onresult) {
                                console.info('testFace testgetAvailabeStatus103 addCred onResult = ' + onresult.authresult);
                                let token = onresult.authextr.token
                                publicFC.publicdelUser(UserIDM,token,function(onresult){
                                    console.log("testFace faceDemo testgetAvailabeStatus103 delUser result = " + onresult.delUserresult)
                                    publicFC.publicCloseSession(UserIDM,function(data){
                                        console.log("testFace faceDemo testgetAvailabeStatus103 CloseSession callback = " + data)
                                        publicFC.publicunRegisterInputer(PinAuth)
                                        done();
                                    })
                                },function(onacquireinfo){
                                    console.info('testFace publicdelUser onAcquireInfo = ' + JSON.stringify(onacquireinfo));
                                })
                            }, function(onAcquireInfo) {
                                console.info('testFace publicauth onAcquireInfo = ' + JSON.stringify(onAcquireInfo));
                            }
                        );
                    }, function(onAcquireInfo) {
                        console.info('testFace publicaddCredential onAcquireInfo = ' + JSON.stringify(onAcquireInfo));
                    });
            })
        } catch (e) {
            console.log("testgetauthinfo101 fail " + e);
            expect(null).assertFail();
        }
    })

    it('testgetAvailabeStatus104', 0, async function (done) {
        try {
            publicFC.publicRegisterInputer(PinAuth,AuthSubType.PIN_SIX,Inputerdata)
            publicFC.publicOpenSession(UserIDM,function(data){
                let challenge = data
                publicFC.publicaddCredential(UserIDM,CredentialInfopinsix,
                    function(onresult) {
                        console.info('testFace testgetAvailabeStatus104 addCredresult = ' + onresult.addCredresult);
                        console.log("testFace faceDemo testgetAvailabeStatus104 authUser result = " + onresult.addCredresult);
                        let AvailabeStatus = publicFC.publicgetAvailabeStatus(UserAuth,AuthType.PIN,AuthTurstLevel.ATL4)
                        expect(ResultCode.SUCCESS).assertEqual(AvailabeStatus);
                        publicFC.publicauth(UserAuth,challenge,AuthType.PIN,AuthTurstLevel.ATL1,
                            function(onresult) {
                                console.info('testFace testgetAvailabeStatus104 addCred onResult = ' + onresult.authresult);
                                let token = onresult.authextr.token
                                publicFC.publicdelUser(UserIDM,token,function(onresult){
                                    console.log("testFace faceDemo testgetAvailabeStatus104 delUser result = " + onresult.delUserresult)
                                    publicFC.publicCloseSession(UserIDM,function(data){
                                        console.log("testFace faceDemo testgetAvailabeStatus104 CloseSession callback = " + data)
                                        publicFC.publicunRegisterInputer(PinAuth)
                                        done();
                                    })
                                },function(onacquireinfo){
                                    console.info('testFace publicdelUser onAcquireInfo = ' + JSON.stringify(onacquireinfo));
                                })
                            }, function(onAcquireInfo) {
                                console.info('testFace publicauth onAcquireInfo = ' + JSON.stringify(onAcquireInfo));
                            }
                        );
                    }, function(onAcquireInfo) {
                        console.info('testFace publicaddCredential onAcquireInfo = ' + JSON.stringify(onAcquireInfo));
                    });
            })
        } catch (e) {
            console.log("testgetauthinfo101 fail " + e);
            expect(null).assertFail();
        }
    })

    it('testgetAvailabeStatus105', 0, async function (done) {
        try {
            publicFC.publicRegisterInputer(PinAuth,AuthSubType.PIN_SIX,Inputerdata)
            publicFC.publicOpenSession(UserIDM,function(data){
                let challenge = data
                publicFC.publicaddCredential(UserIDM,CredentialInfopinsix,
                    function(onresult) {
                        console.info('testFace testgetAvailabeStatus105 addCredresult = ' + onresult.addCredresult);
                        console.log("testFace faceDemo testgetAvailabeStatus105 authUser result = " + onresult.addCredresult);
                        publicFC.publicauth(UserAuth,challenge,AuthType.PIN,AuthTurstLevel.ATL1,
                            function(onresult) {
                                console.info('testFace testgetAvailabeStatus105 addCred onResult = ' + JSON.stringify(onresult));
                                let token = onresult.authextr.token
                                CredentialInfoface2d.token = token
                                publicFC.publicaddCredential(UserIDM,CredentialInfoface2d,function(onresult) {
                                    console.info('testFace testgetAvailabeStatus105 ddCredentialface onResult = ' + onresult.authresult);
                                    console.log("testFace faceDemo testgetAvailabeStatus105 ddCredentialface result = " + onresult.addCredresult)
                                    let AvailabeStatus = publicFC.publicgetAvailabeStatus(UserAuth,AuthType.FACE,AuthTurstLevel.ATL1)
                                    expect(ResultCode.SUCCESS).assertEqual(AvailabeStatus);
                                    publicFC.publicdelUser(UserIDM,token,function(onresult){
                                        console.log("testFace faceDemo testgetAvailabeStatus105 delUser result = " + onresult.delUserresult)
                                        publicFC.publicCloseSession(UserIDM,function(data){
                                            console.log("testFace faceDemo testgetAvailabeStatus105 CloseSession callback = " + data)
                                            publicFC.publicunRegisterInputer(PinAuth)
                                            done();
                                        })
                                    },function(onacquireinfo){
                                        console.info('testFace publicdelUser onAcquireInfo = ' + JSON.stringify(onacquireinfo));
                                    })
                                }, function(onAcquireInfo) {
                                    console.info('testFace publicaddCredential onAcquireInfo = ' + JSON.stringify(onAcquireInfo));
                                })
                            }, function(onAcquireInfo) {
                                console.info('testFace publicauth onAcquireInfo = ' + JSON.stringify(onAcquireInfo));
                            }
                        );
                    }, function(onAcquireInfo) {
                        console.info('testFace publicaddCredential onAcquireInfo = ' + JSON.stringify(onAcquireInfo));
                    });
            })
        } catch (e) {
            console.log("testgetauthinfo101 fail " + e);
            expect(null).assertFail();
        }
    })

    it('testgetAvailabeStatus106', 0, async function (done) {
        try {
            publicFC.publicRegisterInputer(PinAuth,AuthSubType.PIN_SIX,Inputerdata)
            publicFC.publicOpenSession(UserIDM,function(data){
                let challenge = data
                publicFC.publicaddCredential(UserIDM,CredentialInfopinsix,
                    function(onresult) {
                        console.info('testFace testgetAvailabeStatus106 addCredresult = ' + onresult.addCredresult);
                        console.log("testFace faceDemo testgetAvailabeStatus106 authUser result = " + onresult.addCredresult);
                        publicFC.publicauth(UserAuth,challenge,AuthType.PIN,AuthTurstLevel.ATL1,
                            function(onresult) {
                                console.info('testFace testgetAvailabeStatus106 addCred onResult = ' + JSON.stringify(onresult));
                                let token = onresult.authextr.token
                                CredentialInfoface2d.token = token
                                publicFC.publicaddCredential(UserIDM,CredentialInfoface2d,function(onresult) {
                                    console.info('testFace testgetAvailabeStatus106 ddCredentialface onResult = ' + onresult.authresult);
                                    console.log("testFace faceDemo testgetAvailabeStatus106 ddCredentialface result = " + onresult.addCredresult)
                                    let AvailabeStatus = publicFC.publicgetAvailabeStatus(UserAuth,AuthType.FACE,AuthTurstLevel.ATL2)
                                    expect(ResultCode.SUCCESS).assertEqual(AvailabeStatus);
                                    publicFC.publicdelUser(UserIDM,token,function(onresult){
                                        console.log("testFace faceDemo testgetAvailabeStatus106 delUser result = " + onresult.delUserresult)
                                        publicFC.publicCloseSession(UserIDM,function(data){
                                            console.log("testFace faceDemo testgetAvailabeStatus106 CloseSession callback = " + data)
                                            publicFC.publicunRegisterInputer(PinAuth)
                                            done();
                                        })
                                    },function(onacquireinfo){
                                        console.info('testFace publicdelUser onAcquireInfo = ' + JSON.stringify(onacquireinfo));
                                    })
                                }, function(onAcquireInfo) {
                                    console.info('testFace publicaddCredential onAcquireInfo = ' + JSON.stringify(onAcquireInfo));
                                })
                            }, function(onAcquireInfo) {
                                console.info('testFace publicauth onAcquireInfo = ' + JSON.stringify(onAcquireInfo));
                            }
                        );
                    }, function(onAcquireInfo) {
                        console.info('testFace publicaddCredential onAcquireInfo = ' + JSON.stringify(onAcquireInfo));
                    });
            })
        } catch (e) {
            console.log("testgetauthinfo101 fail " + e);
            expect(null).assertFail();
        }
    })

    it('testgetAvailabeStatus107', 0, async function (done) {
        try {
            publicFC.publicRegisterInputer(PinAuth,AuthSubType.PIN_SIX,Inputerdata)
            publicFC.publicOpenSession(UserIDM,function(data){
                let challenge = data
                publicFC.publicaddCredential(UserIDM,CredentialInfopinsix,
                    function(onresult) {
                        console.info('testFace testgetAvailabeStatus107 addCredresult = ' + onresult.addCredresult);
                        console.log("testFace faceDemo testgetAvailabeStatus107 authUser result = " + onresult.addCredresult);
                        publicFC.publicauth(UserAuth,challenge,AuthType.PIN,AuthTurstLevel.ATL1,
                            function(onresult) {
                                console.info('testFace testgetAvailabeStatus107 addCred onResult = ' + JSON.stringify(onresult));
                                let token = onresult.authextr.token
                                CredentialInfoface2d.token = token
                                publicFC.publicaddCredential(UserIDM,CredentialInfoface2d,function(onresult) {
                                    console.info('testFace testgetAvailabeStatus107 ddCredentialface onResult = ' + onresult.authresult);
                                    console.log("testFace faceDemo testgetAvailabeStatus107 ddCredentialface result = " + onresult.addCredresult)
                                    let AvailabeStatus = publicFC.publicgetAvailabeStatus(UserAuth,AuthType.FACE,AuthTurstLevel.ATL3)
                                    expect(ResultCode.FAIL).assertEqual(AvailabeStatus);
                                    publicFC.publicdelUser(UserIDM,token,function(onresult){
                                        console.log("testFace faceDemo testgetAvailabeStatus107 delUser result = " + onresult.delUserresult)
                                        publicFC.publicCloseSession(UserIDM,function(data){
                                            console.log("testFace faceDemo testgetAvailabeStatus107 CloseSession callback = " + data)
                                            publicFC.publicunRegisterInputer(PinAuth)
                                            done();
                                        })
                                    },function(onacquireinfo){
                                        console.info('testFace publicdelUser onAcquireInfo = ' + JSON.stringify(onacquireinfo));
                                    })
                                }, function(onAcquireInfo) {
                                    console.info('testFace publicaddCredential onAcquireInfo = ' + JSON.stringify(onAcquireInfo));
                                })
                            }, function(onAcquireInfo) {
                                console.info('testFace publicauth onAcquireInfo = ' + JSON.stringify(onAcquireInfo));
                            }
                        );
                    }, function(onAcquireInfo) {
                        console.info('testFace publicaddCredential onAcquireInfo = ' + JSON.stringify(onAcquireInfo));
                    });
            })
        } catch (e) {
            console.log("testgetauthinfo101 fail " + e);
            expect(null).assertFail();
        }
    })

    it('testgetAvailabeStatus108', 0, async function (done) {
        try {
            publicFC.publicRegisterInputer(PinAuth,AuthSubType.PIN_SIX,Inputerdata)
            publicFC.publicOpenSession(UserIDM,function(data){
                let challenge = data
                publicFC.publicaddCredential(UserIDM,CredentialInfopinsix,
                    function(onresult) {
                        console.info('testFace testgetAvailabeStatus107 addCredresult = ' + onresult.addCredresult);
                        console.log("testFace faceDemo testgetAvailabeStatus107 authUser result = " + onresult.addCredresult);
                        publicFC.publicauth(UserAuth,challenge,AuthType.PIN,AuthTurstLevel.ATL1,
                            function(onresult) {
                                console.info('testFace testgetAvailabeStatus107 addCred onResult = ' + JSON.stringify(onresult));
                                let token = onresult.authextr.token
                                CredentialInfoface2d.token = token
                                publicFC.publicaddCredential(UserIDM,CredentialInfoface2d,function(onresult) {
                                    console.info('testFace testgetAvailabeStatus107 ddCredentialface onResult = ' + onresult.authresult);
                                    console.log("testFace faceDemo testgetAvailabeStatus107 ddCredentialface result = " + onresult.addCredresult)
                                    let AvailabeStatus = publicFC.publicgetAvailabeStatus(UserAuth,AuthType.FACE,AuthTurstLevel.ATL3)
                                    expect(ResultCode.FAIL).assertEqual(AvailabeStatus);
                                    publicFC.publicdelUser(UserIDM,token,function(onresult){
                                        console.log("testFace faceDemo testgetAvailabeStatus107 delUser result = " + onresult.delUserresult)
                                        publicFC.publicCloseSession(UserIDM,function(data){
                                            console.log("testFace faceDemo testgetAvailabeStatus107 CloseSession callback = " + data)
                                            publicFC.publicunRegisterInputer(PinAuth)
                                            done();
                                        })
                                    },function(onacquireinfo){
                                        console.info('testFace publicdelUser onAcquireInfo = ' + JSON.stringify(onacquireinfo));
                                    })
                                }, function(onAcquireInfo) {
                                    console.info('testFace publicaddCredential onAcquireInfo = ' + JSON.stringify(onAcquireInfo));
                                })
                            }, function(onAcquireInfo) {
                                console.info('testFace publicauth onAcquireInfo = ' + JSON.stringify(onAcquireInfo));
                            }
                        );
                    }, function(onAcquireInfo) {
                        console.info('testFace publicaddCredential onAcquireInfo = ' + JSON.stringify(onAcquireInfo));
                    });
            })
        } catch (e) {
            console.log("testgetauthinfo101 fail " + e);
            expect(null).assertFail();
        }
    })

    it('testgetProperty101', 0, async function (done) {
        try {
            publicFC.publicRegisterInputer(PinAuth,AuthSubType.PIN_SIX,Inputerdata)
            publicFC.publicOpenSession(UserIDM,function(data){
                let challenge = data
                publicFC.publicaddCredential(UserIDM,CredentialInfopinsix,
                    function(onresult) {
                        console.info('testFace testgetProperty101 addCredresult = ' + onresult.addCredresult);
                        console.log("testFace faceDemo testgetProperty101 authUser result = " + onresult.addCredresult);
                        publicFC.publicauth(UserAuth,challenge,AuthType.PIN,AuthTurstLevel.ATL1,
                            function(onresult) {
                                console.info('testFace testgetProperty101 addCred onResult = ' + onresult.authresult);
                                let token = onresult.authextr.token
                                publicFC.publicgetProperty(UserAuth,GetPropertyRequestpin,function(onresult) {
                                    expect(ResultCode.SUCCESS).assertEqual(onresult.result);
                                    expect(AuthSubType.PIN_SIX).assertEqual(onresult.authSubType);
                                    publicFC.publicdelUser(UserIDM,token,function(onresult){
                                        console.log("testFace faceDemo testgetProperty102 delUser result = " + onresult.delUserresult)
                                        publicFC.publicCloseSession(UserIDM,function(data){
                                            console.log("testFace faceDemo testgetProperty102 CloseSession callback = " + data)
                                            publicFC.publicunRegisterInputer(PinAuth)
                                            done();
                                        })
                                    },function(onacquireinfo){
                                        console.info('testFace publicdelUser onAcquireInfo = ' + JSON.stringify(onacquireinfo));
                                    })
                                })
                            }, function(onAcquireInfo) {
                                console.info('testFace publicauth onAcquireInfo = ' + JSON.stringify(onAcquireInfo));
                            }
                        );
                    }, function(onAcquireInfo) {
                        console.info('testFace publicaddCredential onAcquireInfo = ' + JSON.stringify(onAcquireInfo));
                    });
            })
        } catch (e) {
            console.log("testgetauthinfo101 fail " + e);
            expect(null).assertFail();
        }
    })

    it('testgetProperty102', 0, async function (done) {
        try {
            publicFC.publicRegisterInputer(PinAuth,AuthSubType.PIN_SIX,Inputerdata)
            publicFC.publicOpenSession(UserIDM,function(data){
                let challenge = data
                publicFC.publicaddCredential(UserIDM,CredentialInfopinsix,
                    function(onresult) {
                        console.info('testFace testgetProperty102 addCredresult = ' + onresult.addCredresult);
                        console.log("testFace faceDemo testgetProperty102 authUser result = " + onresult.addCredresult);
                        publicFC.publicauth(UserAuth,challenge,AuthType.PIN,AuthTurstLevel.ATL1,
                            function(onresult) {
                                console.info('testFace testgetProperty102 addCred onResult = ' + JSON.stringify(onresult));
                                let token = onresult.authextr.token
                                CredentialInfoface2d.token = token
                                publicFC.publicaddCredential(UserIDM,CredentialInfoface2d,function(onresult) {
                                    console.info('testFace testgetProperty102 ddCredentialface onResult = ' + onresult.authresult);
                                    console.log("testFace faceDemo testgetProperty102 ddCredentialface result = " + onresult.addCredresult)
                                    publicFC.publicgetProperty(UserAuth,GetPropertyRequestface,function(onresult) {
                                        expect(ResultCode.SUCCESS).assertEqual(onresult.result);
                                        expect(AuthSubType.FACE_2D).assertEqual(onresult.authSubType);
                                        publicFC.publicdelUser(UserIDM,token,function(onresult){
                                            console.log("testFace faceDemo testgetProperty102 delUser result = " + onresult.delUserresult)
                                            publicFC.publicCloseSession(UserIDM,function(data){
                                                console.log("testFace faceDemo testgetProperty102 CloseSession callback = " + data)
                                                publicFC.publicunRegisterInputer(PinAuth)
                                                done();
                                            })
                                        },function(onacquireinfo){
                                            console.info('testFace publicdelUser onAcquireInfo = ' + JSON.stringify(onacquireinfo));
                                        })
                                    })
                                }, function(onAcquireInfo) {
                                    console.info('testFace publicaddCredential onAcquireInfo = ' + JSON.stringify(onAcquireInfo));
                                })
                            }, function(onAcquireInfo) {
                                console.info('testFace publicauth onAcquireInfo = ' + JSON.stringify(onAcquireInfo));
                            }
                        );
                    }, function(onAcquireInfo) {
                        console.info('testFace publicaddCredential onAcquireInfo = ' + JSON.stringify(onAcquireInfo));
                    });
            })
        } catch (e) {
            console.log("testgetauthinfo101 fail " + e);
            expect(null).assertFail();
        }
    })
})
