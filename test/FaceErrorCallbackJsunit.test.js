import {describe, it, expect} from 'deccjsunit/index'
import userAuth from '@ohos.userauth'
import userIDM from '@ohos.useridm'
import pinAuth from '@ohos.pinauth'
import * as publicFC from './Publicfunction-n'

let UserIDM = userIDM.constructor()
let PinAuth = pinAuth.constructor()
let UserAuth = userAuth.constructor()

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
    User1: 10,
    User2: 11,
    User3: 12,
    User4: 13,
    User5: 14
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
    NOT_ENROLLED: 10
}

let GetPropertyType = {
    AUTH_SUB_TYPE: 1,
    REMAIN_TIMES: 2,
    FREEZING_TIME: 3
}

let Inputerdata = new Uint8Array([12, 34, 56]);

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

    it('testaddfacewithnopin101', 0, async function (done) {
        try {
            publicFC.publicRegisterInputer(PinAuth, AuthSubType.PIN_SIX, Inputerdata)
            publicFC.publicOpenSession(UserIDM, function (data) {
                let challenge = data;
                console.info("testaddfacewithnopin101 challenge = " + challenge)
                publicFC.publicaddCredential(UserIDM, CredentialInfopinsix, function (data) {
                }, function (data) {
                })
                publicFC.publicauth(UserAuth, challenge, AuthType.PIN, AuthTurstLevel.ATL1, function (data) {
                    let info101 = data;
                    console.info("testaddfacewithnopin101 info101 = " + info101)
                    let token = info101.authextr.token;
                    console.info("testaddfacewithnopin101 token = " + token)
                    CredentialInfoface2d.token = token;
                    publicFC.publicaddCredential(UserIDM, CredentialInfoface2d, function (data) {
                        let addfaceresult = data.addCredresult
                        console.info("testaddfacewithnopin101 addfaceresult = " + addfaceresult)
                        expect(ResultCode.SUCCESS).assertEqual(addfaceresult.addCredresult);
                        publicFC.publicdelUser(UserIDM, token, function (data) {
                            let deluserresult = data.delUserresult
                            console.info("testaddfacewithnopin101 deluserresult = " + deluserresult)
                            publicFC.publicCloseSession(UserIDM, function (data) {
                                console.info("testaddfacewithnopin101 closesession = " + data)
                                publicFC.publicunRegisterInputer(PinAuth, function (data) {
                                    console.info("testaddfacewithnopin101 unRegist = " + data)
                                    done();
                                })
                            })
                        }, function (data) {
                        })
                    }, function (data) {
                    })
                }, function (data) {
                })
            })

        } catch (e) {
            console.log("tesaddface101 fail " + e);
            expect(null).assertFail();
        }
    })

    it('testaddfacetwotimes101', 0, async function (done) {
        try {
            publicFC.publicRegisterInputer(PinAuth, AuthSubType.PIN_SIX, Inputerdata)
            publicFC.publicOpenSession(UserIDM, function (data) {
                let challenge = data;
                console.info("testaddfacetwotimes101 challenge = " + challenge)
                publicFC.publicaddCredential(UserIDM, CredentialInfopinsix, function (data) {
                }, function (data) {
                })
                publicFC.publicauth(UserAuth, challenge, AuthType.PIN, AuthTurstLevel.ATL1, function (data) {
                    let info101 = data;
                    console.info("testaddfacetwotimes101 info101 = " + info101)
                    let token = info101.extraInfo.token
                    CredentialInfoface2d.token = token
                    console.info("testaddfacetwotimes101 token = " + token)
                    publicFC.publicaddCredential(UserIDM, CredentialInfoface2d, function (data) {
                        let addfaceresult = data
                        console.info("testaddfacetwotimes101 addfaceresult = " + addfaceresult)
                        expect(ResultCode.SUCCESS).assertEqual(addfaceresult.addCredresult);
                        publicFC.publicaddCredential(UserIDM, CredentialInfoface2d, function (data) {
                            let addfaceresult1 = data;
                            console.info("testaddfacetwotimes101 addfaceresult1 = " + addfaceresult1)
                            expect(ResultCode.FAIL).assertEqual(addfaceresult.addCredresult);
                            let deluserresult = publicFC.publicdelUser(UserIDM, token)
                            console.info("testaddfacetwotimes101 deluserresult = " + deluserresult)
                            expect(ResultCode.SUCCESS).assertEqual(addfaceresult1.addCredresult);
                            publicFC.publicdelUser(UserIDM, token, function (data) {
                                let deluserresult = data.delUserresult
                                console.info("testaddfacetwotimes101 deluserresult = " + deluserresult)
                                publicFC.publicCloseSession(UserIDM, function (data) {
                                    console.info("testaddfacetwotimes101 closesession = " + data)
                                    publicFC.publicunRegisterInputer(PinAuth, function (data) {
                                        console.info("testaddfacetwotimes101 unRegist = " + data)
                                        done();
                                    })
                                })
                            }, function (data) {
                            })
                        }, function (data) {
                        })
                    }, function (data) {
                    })
                }, function (data) {
                })

            })

        } catch (e) {
            console.log("tesaddface101 fail " + e);
            expect(null).assertFail();
        }
    })

    it('testdelfacewithnopin101', 0, async function (done) {
        try {
            publicFC.publicRegisterInputer(PinAuth, AuthSubType.PIN_SIX, Inputerdata)
            publicFC.publicOpenSession(UserIDM, function (data) {
                let challenge = data;
                console.info("testdelfacewithnopin101 challenge = " + challenge)
                publicFC.publicdelCred(UserAuth, "credentialId", "token", function (data) {
                    let info101 = data
                    console.info("testdelfacewithnopin101 info101 = " + info101)
                    expect(ResultCode.FAIL).assertEqual(info101.delCredresult);
                    publicFC.publicCloseSession(UserIDM, function (data) {
                        console.info("testdelfacewithnopin101 closesession = " + data)
                        publicFC.publicunRegisterInputer(PinAuth, function (data) {
                            console.info("testdelfacewithnopin101 unRegist = " + data)
                            done();
                        })
                    })
                }, function (data) {
                })

            })

        } catch (e) {
            console.log("tesaddface101 fail " + e);
            expect(null).assertFail();
        }
    })

    it('testdelfacewithnoface101', 0, async function (done) {
        try {
            publicFC.publicRegisterInputer(PinAuth, AuthSubType.PIN_SIX, Inputerdata)
            publicFC.publicOpenSession(UserIDM, function (data) {
                let challenge = data
                console.info("testdelfacewithnoface101 challenge = " + challenge)
                publicFC.publicaddCredential(UserIDM, CredentialInfopinsix, function (data) {
                    publicFC.publicdelCred(UserAuth, "credentialId", "token", function (data) {
                        let info101 = data
                        console.info("testdelfacewithnoface101 info101 = " + info101)
                        let token = info101.CredentialId.token
                        CredentialInfoface2d.token = token
                        console.info("testdelfacewithnoface101 token = " + token)
                        publicFC.publicauth(UserAuth, challenge, AuthType.FACE, AuthTurstLevel.ATL1, function (data) {
                            let info102 = data
                            console.info("testdelfacewithnoface101 info102 = " + info102)
                            expect(ResultCode.FAIL).assertEqual(info102.authresult);
                            publicFC.publicdelUser(UserIDM, token, function (data) {
                                let deluserresult = data.delUserresult
                                console.info("testdelfacewithnoface101 deluserresult = " + deluserresult)
                                publicFC.publicCloseSession(UserIDM, function (data) {
                                    console.info("testdelfacewithnoface101 closesession = " + data)
                                    publicFC.publicunRegisterInputer(PinAuth, function (data) {
                                        console.info("testdelfacewithnoface101 unRegist = " + data)
                                        done();
                                    })
                                })
                            }, function (data) {
                            })
                        }, function (data) {
                        })

                    }, function (data) {
                    })

                }, function (data) {
                })

            })

        } catch (e) {
            console.log("tesaddface101 fail " + e);
            expect(null).assertFail();
        }
    })

    it('testfaceauthwithnoface101', 0, async function (done) {
        try {
            publicFC.publicRegisterInputer(PinAuth, AuthSubType.PIN_SIX, Inputerdata)
            publicFC.publicOpenSession(UserIDM, function (data) {
                let challenge = data
                console.info("testfaceauthwithnoface101 challenge = " + challenge)
                publicFC.publicaddCredential(UserIDM, CredentialInfopinsix, function (data) {
                    publicFC.publicauth(UserAuth, challenge, AuthType.PIN, AuthTurstLevel.ATL1, function (data) {
                        let info101 = data
                        console.info("testfaceauthwithnoface101 info101 = " + info101)
                        let token = info101.extraInfo.token
                        CredentialInfoface2d.token = token
                        console.info("testfaceauthwithnoface101 token = " + token)
                        publicFC.publicauth(UserAuth, challenge, AuthType.FACE, AuthTurstLevel.ATL1, function (data) {
                            let info102 = data
                            console.info("testfaceauthwithnoface101 info102 = " + info102)
                            expect(ResultCode.TYPE_NOT_SUPPORT).assertEqual(info102.authresult);
                            publicFC.publicdelUser(UserIDM, token, function (data) {
                                let deluserresult = data.delUserresult
                                console.info("testfaceauthwithnoface101 deluserresult = " + deluserresult)
                                publicFC.publicCloseSession(UserIDM, function (data) {
                                    console.info("testfaceauthwithnoface101 closesession = " + data)
                                    publicFC.publicunRegisterInputer(PinAuth, function (data) {
                                        console.info("testfaceauthwithnoface101 unRegist = " + data)
                                        done();
                                    })
                                })
                            }, function (data) {
                            })
                        }, function (data) {
                        })

                    }, function (data) {
                    })

                }, function (data) {
                })

            })

        } catch (e) {
            console.log("tesaddface101 fail " + e);
            expect(null).assertFail();
        }
    })

    it('testfaceauthwithnopin101', 0, async function (done) {
        try {
            publicFC.publicRegisterInputer(PinAuth, AuthSubType.PIN_SIX, Inputerdata)
            publicFC.publicOpenSession(UserIDM, function (data) {
                let challenge = data;
                console.info("testfaceauthwithnopin101 challenge = " + challenge)
                publicFC.publicauth(UserAuth, challenge, AuthType.FACE, AuthTurstLevel.ATL1, function (data) {
                    let info101 = data
                    console.info("testfaceauthwithnopin101 info101 = " + info101)
                    expect(ResultCode.TYPE_NOT_SUPPORT).assertEqual(info101.authresult);
                    publicFC.publicCloseSession(UserIDM, function (data) {
                        console.info("testfaceauthwithnopin101 closesession = " + data)
                        publicFC.publicunRegisterInputer(PinAuth, function (data) {
                            console.info("testfaceauthwithnopin101 unRegist = " + data)
                            done();
                        })
                    })
                }
                    , function (data) {
                    })
            })

        } catch (e) {
            console.log("tesaddface101 fail " + e);
            expect(null).assertFail();
        }
    })

    it('testdeletepinthenauthcace101', 0, async function (done) {
        try {
            publicFC.publicRegisterInputer(PinAuth, AuthSubType.PIN_SIX, Inputerdata)
            publicFC.publicOpenSession(UserIDM, function (data) {
                let challenge = data
                console.info("testdeletepinthenauthcace101 challenge = " + challenge)
                publicFC.publicaddCredential(UserIDM, CredentialInfopinsix, function (data) {
                    publicFC.publicauth(UserAuth, challenge, AuthType.PIN, AuthTurstLevel.ATL1, function (data) {
                        let info101 = data
                        console.info("testdeletepinthenauthcace101 info101 = " + info101)
                        let token = info101.extraInfo.token
                        CredentialInfoface2d.token = token
                        console.info("testdeletepinthenauthcace101 token = " + token)
                        publicFC.publicaddCredential(UserIDM, CredentialInfoface2d, function (data) {
                            let addfaceresult = data
                            console.info("testdeletepinthenauthcace101 addfaceresult = " + addfaceresult)
                            expect(ResultCode.SUCCESS).assertEqual(addfaceresult.addCredresult);
                            publicFC.publicdelUser(UserIDM, token, function (data) {
                                let deluserresult = data.delUserresult
                                console.info("testdeletepinthenauthcace101 deluserresult = " + deluserresult)
                                publicFC.publicauth(UserAuth, challenge, AuthType.FACE, AuthTurstLevel.ATL1, function (data) {
                                    let info102 = data;
                                    console.info("testdeletepinthenauthcace101 info102 = " + info102)
                                    expect(ResultCode.NOT_ENROLLED).assertEqual(info102.authresult);
                                    publicFC.publicCloseSession(UserIDM, function (data) {
                                        console.info("testdeletepinthenauthcace101 closesession = " + data)
                                        publicFC.publicunRegisterInputer(PinAuth, function (data) {
                                            console.info("testdeletepinthenauthcace101 unRegist = " + data)
                                            done();
                                        })
                                    })
                                }, function (data) {
                                })

                            }, function (data) {
                            })

                        }, function (data) {
                        })

                    }, function (data) {
                    })

                }, function (data) {
                })

            })

        } catch (e) {
            console.log("tesaddface101 fail " + e);
            expect(null).assertFail();
        }
    })

    it('testcancelauthpinwitholdcontextID101', 0, async function (done) {
        try {
            publicFC.publicRegisterInputer(PinAuth, AuthSubType.PIN_SIX, Inputerdata)
            publicFC.publicOpenSession(UserIDM, function (data) {
                let challenge1 = data
                console.info("testcancelauthpinwitholdcontextID101 challenge1 = " + challenge1)
                publicFC.publicaddCredential(UserIDM, CredentialInfopinsix, function (data) {
                    let addcredresult101 = data
                    console.info("testcancelauthpinwitholdcontextID101 addcredresult101 = " + addcredresult101)
                    let contextID1 = null
                    publicFC.publicauth(UserAuth, challenge1, AuthType.PIN, AuthTurstLevel.ATL1, function (data) {
                        let authinfo101 = data
                        contextID1 = UserAuth.authUser(userID, challenge1, AuthType.PIN, AuthTurstLevel.ATL1, async function (data) {
                            await sleep(5000);
                            let cancelresult = publicFC.publicgecancelAuth(UserAuth, authinfo101.contextID)
                            console.info("testcancelauthpinwitholdcontextID101 cancelresult = " + cancelresult)
                            expect(ResultCode.FAIL).assertEqual(authinfo101.contextID);
                            cancelresult = publicFC.publicgecancelAuth(UserAuth, contextID1)
                            expect(ResultCode.SUCCESS).assertEqual(contextID1);
                            publicFC.publicauth(UserAuth, challenge1, AuthType.PIN, AuthTurstLevel.ATL1, function (data) {
                                let info1011 = data
                                console.info("testcancelauthpinwitholdcontextID101 info1011 = " + info1011)
                                let token = info1011.extraInfo.token
                                console.info("testcancelauthpinwitholdcontextID101 token = " + token)
                                publicFC.publicdelUser(UserIDM, token, function (data) {
                                    let deluserresult = data.delUserresult
                                    console.info("testcancelauthpinwitholdcontextID101 deluserresult = " + deluserresult)
                                    publicFC.publicCloseSession(UserIDM, function (data) {
                                        console.info("testcancelauthpinwitholdcontextID101 closesession = " + data)
                                        publicFC.publicunRegisterInputer(PinAuth, function (data) {
                                            console.info("testcancelauthpinwitholdcontextID101 unRegist = " + data)
                                            done();
                                        })
                                    })
                                }, function (data) {
                                })
                            }, function (data) {
                            })
                        }, function (data) {
                        })
                    }, function (data) {
                    })
                }, function (data) {
                })

            })

        } catch (e) {
            console.log("testcancelauthwitholdchallenge101 fail " + e);
            expect(null).assertFail();
        }
    })

    it('testaddpincancelwitholdchallenge101', 0, async function (done) {
        try {
            publicFC.publicRegisterInputer(PinAuth, AuthSubType.PIN_MIXED, Inputerdata)
            publicFC.publicOpenSession(UserIDM, function (data) {
                let challenge = data
                console.info("testaddpincancelwitholdchallenge101 challenge = " + data)
                publicFC.publicOpenSession(UserIDM, function (data) {
                    let challenge1 = data
                    console.info("testaddpincancelwitholdchallenge101 challenge1 = " + data)
                    UserIDM.updateCredential(CredentialInfopinsix, async function (data) {
                        await sleep(5000);
                        let cancelresult = publicFC.publiccancel(UserIDM, challenge)
                        console.info("testaddpincancelwitholdchallenge101 cancelresult = " + cancelresult)
                        expect(ResultCode.FAIL).assertEqual(cancelresult);
                        let cancelresult1 = publicFC.publiccancel(UserIDM, challenge1)
                        console.info("testaddpincancelwitholdchallenge101 cancelresult1 = " + cancelresult1)
                        expect(ResultCode.SUCCESS).assertEqual(cancelresult1);
                        publicFC.publicCloseSession(UserIDM, function (data) {
                            console.info("testaddpincancelwitholdchallenge101 closesession = " + data)
                            publicFC.publicunRegisterInputer(PinAuth, function (data) {
                                console.info("testaddpincancelwitholdchallenge101 unRegist = " + data)
                                done();
                            })
                        })
                    }, function (data) {
                    })

                })

            })

        } catch (e) {
            console.log("testaddpincancelwitholdchallenge101 fail " + e);
            expect(null).assertFail();
        }
    })

    it('testaddfacecancelwitholdchallenge101', 0, async function (done) {
        try {
            publicFC.publicRegisterInputer(PinAuth, AuthSubType.PIN_SIX, Inputerdata)
            publicFC.publicOpenSession(UserIDM, function (data) {
                let challenge1 = data;
                console.info("testaddfacecancelwitholdchallenge101 challenge1 = " + challenge1)
                publicFC.publicOpenSession(UserIDM, function (data) {
                    let challenge2 = data;
                    console.info("testaddfacecancelwitholdchallenge101 challenge2 = " + challenge2)
                    publicFC.publicaddCredential(UserIDM, CredentialInfopinsix, function (data) {
                        let info101 = publicFC.publicauth(UserAuth, challenge2, AuthType.PIN, AuthTurstLevel.ATL1)
                        let token = info101.extraInfo.token
                        CredentialInfoface2d.token = token
                        console.info("testaddfacecancelwitholdchallenge101 token = " + token)
                        UserIDM.addCredential(CredentialInfoface2d, async function (data) {
                            let result1 = data.addCredresult
                            console.info("testaddfacecancelwitholdchallenge101 result1 = " + result1)
                            await sleep(3000);
                            let cancelresult = publicFC.publiccancel(UserIDM, challenge1)
                            console.info("testaddfacecancelwitholdchallenge101 cancelresult = " + cancelresult)
                            expect(ResultCode.FAIL).assertEqual(cancelresult);
                            let cancelresult2 = publicFC.publiccancel(UserIDM, challenge2)
                            console.info("testaddfacecancelwitholdchallenge101 cancelresult2 = " + cancelresult2)
                            expect(ResultCode.SUCCESS).assertEqual(cancelresult);
                            expect(ResultCode.CANCELED).assertEqual(result1);
                            publicFC.publicCloseSession(UserIDM, function (data) {
                                console.info("testaddfacecancelwitholdchallenge101 closesession = " + data)
                                publicFC.publicunRegisterInputer(PinAuth, function (data) {
                                    console.info("testaddfacecancelwitholdchallenge101 unRegist = " + data)
                                    done();
                                })
                            })
                        }, function (data) {
                        })

                    }, function (data) {
                    })

                })

            })

        } catch (e) {
            console.log("testaddfacecancel101 fail " + e);
            expect(null).assertFail();
        }
    })

    it('testcancelauthfacewitholdcontextID101', 0, async function (done) {
        try {
            publicFC.publicRegisterInputer(PinAuth, AuthSubType.PIN_SIX, Inputerdata)
            publicFC.publicOpenSession(UserIDM, function (data) {
                let challenge = data
                console.info("testcancelauthfacewitholdcontextID101 challenge = " + challenge)
                publicFC.publicaddCredential(UserIDM, CredentialInfopinsix, function (data) {
                    let info101 = publicFC.publicauth(UserAuth, challenge, AuthType.PIN, AuthTurstLevel.ATL1)
                    console.info("testcancelauthfacewitholdcontextID101 info101 = " + info101)
                    let token = info101.extraInfo.token
                    CredentialInfoface2d.token = token
                    console.info("testcancelauthfacewitholdcontextID101 token = " + token)
                     publicFC.publicaddCredential(UserIDM, CredentialInfoface2d, function (data) {
                         let addfaceresult = data.addCredresult
                         console.info("testcancelauthfacewitholdcontextID101 addfaceresult = " + addfaceresult)
                        let contextID1 = null
                         publicFC.publicauth(UserAuth, challenge, AuthType.PIN, AuthTurstLevel.ATL1,function(data){
                             let authinfo101 = data
                            contextID1 = UserAuth.auth(challenge, AuthType.FACE, AuthTurstLevel.ATL1,async function(data){
                                await sleep(3000);
                                let authfacecancel101 = publicFC.publicgecancelAuth(UserAuth, authinfo101.contextID)
                                console.info("testcancelauthfacewitholdcontextID101 authfacecancel101 = " + authfacecancel101)
                                expect(ResultCode.FAIL).assertEqual(authfacecancel101);
                                let authfacecancel1011 = publicFC.publicgecancelAuth(UserAuth, contextID1);
                                console.info("testcancelauthfacewitholdcontextID101 authfacecancel1011 = " + authfacecancel1011)
                                expect(ResultCode.CANCELED).assertEqual(authfacecancel1011);
                                publicFC.publicdelUser(UserIDM, token, function (data) {
                                    let deluserresult = data.delUserresult
                                    console.info("testcancelauthfacewitholdcontextID101 deluserresult = " + deluserresult)
                                    publicFC.publicCloseSession(UserIDM, function (data) {
                                        console.info("testcancelauthfacewitholdcontextID101 closesession = " + data)
                                        publicFC.publicunRegisterInputer(PinAuth, function (data) {
                                            console.info("testcancelauthfacewitholdcontextID101 unRegist = " + data)
                                            done();
                                        })
                                    })
                                }, function (data) {
                                })
                            },function(data){})

                        },function(data){})

                    }, function (data) {})
                }, function (data) {})
            })
        } catch (e) {
            console.log("testauthfacecancel101 fail " + e);
            expect(null).assertFail();
        }
    })
})
