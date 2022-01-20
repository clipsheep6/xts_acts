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

let Inputerdata = new Uint8Array([1, 2, 3, 4, 5, 6]);

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
    token: new Uint8Array([1,2,3,4,5,6])
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

    it('testregisterInputer101', 0, async function (done) {
        try {
            let registerresult = publicFC.publicRegisterInputer(PinAuth, AuthSubType.PIN_SIX, Inputerdata)
            expect(true).assertEqual(registerresult);
            publicFC.publicunRegisterInputer(PinAuth, function (data) {
                console.info("registerInputer101 publicunRegisterInputer unRegist = " + data)
            })
            done();
        } catch (e) {
            console.log("registerInputer101 fail " + e);
            expect(null).assertFail();
        }

    })

    it('testaddCredential101', 0, async function (done) {
        try {
            let challenge;
            publicFC.publicRegisterInputer(PinAuth, AuthSubType.PIN_SIX, Inputerdata);
            publicFC.publicOpenSession(UserIDM, function (data) {
                console.info('testFace testaddCredential101 publicOpenSession data = ' + data);
                challenge = data;
                publicFC.publicaddCredential(UserIDM, CredentialInfopinsix, function (data) {
                    console.info('testFace publicaddCredential callback data = ' + JSON.stringify(data));
                    let addcredresult101 = data.addCredresult;
                    console.info("testFace addCredential101 addcredresult101 = " + addcredresult101);
                    expect(ResultCode.SUCCESS).assertEqual(addcredresult101.addCredresult);
                    let token;
                    console.info('testFace testaddCredential101 addSuccess');
                    publicFC.publicauth(UserAuth, challenge, AuthType.PIN, AuthTurstLevel.ATL1, function (data) {
                        console.info('testFace publicauth');
                        token = data.authextr.token;
                        console.info('testFace token = ' + token);
                        console.info("testFace addCredential101 token = " + token);
                        publicFC.publicdelUser(UserIDM, token, function (data) {
                            console.info("testFace addCredential101 publicdelUser callback success");
                            let deluserresult = data.result;
                            console.info("testFace addCredential101 publicdelUser deluserresult = " + deluserresult);
                        })
                        publicFC.publicCloseSession(UserIDM, function (data) {
                            console.info("testFace addCredential101 publicCloseSession success data = " + data);
                            publicFC.publicunRegisterInputer(PinAuth, function (data) {
                                console.info("testFace  addCredential101 publicunRegisterInputer success = " + data);
                                done();
                            })
                        })
                    }, function (data) {
                    })
                }, function (data) {
                })
            })
        } catch (e) {
            console.log("addCredential101 fail " + e);
            expect(null).assertFail();
        }
    })

    it('testaddCredential102', 0, async function (done) {
        try {
            publicFC.publicRegisterInputer(PinAuth, AuthSubType.PIN_NUMBER, Inputerdata);
            publicFC.publicOpenSession(UserIDM, function (data) {
                let challenge = data;
                console.info("testaddCredential102 challenge = " + challenge)
                publicFC.publicaddCredential(UserIDM, CredentialInfopinnum, function (data) {
                    let addcredresult102 = data.addCredresult;
                    console.info("testaddCredential102 addcredresult102 = " + addcredresult102);
                    expect(ResultCode.SUCCESS).assertEqual(addcredresult102.addCredresult);
                    publicFC.publicauth(UserAuth, challenge, AuthType.PIN, AuthTurstLevel.ATL1, function (data) {
                        let token = data.authextr.token;
                        console.info("testaddCredential102 token = " + token);
                        publicFC.publicdelUser(UserIDM, token, function (data) {
                            console.info("testaddCredential102 deluserresult = " + data);
                            publicFC.publicCloseSession(UserIDM, function (data) {
                                console.info("addCredential102 closesession = " + data);
                                publicFC.publicunRegisterInputer(PinAuth, function (data) {
                                    console.info("addCredential102 unRegist = " + data);
                                    done();
                                })
                            })
                        })
                    }, function (data) {
                    })
                }, function (data) {
                })
            })
        } catch (e) {
            console.log("addCredential102 fail " + e);
            expect(null).assertFail();
        }
    })

    it('testaddCredential103', 0, async function (done) {
        try {
            publicFC.publicRegisterInputer(PinAuth, AuthSubType.PIN_MIXED, Inputerdata);
            let challenge;
            publicFC.publicOpenSession(UserIDM, function (data) {
                challenge = data;
                console.info("addCredential103 challenge = " + challenge);
                let addcredresult103;
                publicFC.publicaddCredential(UserIDM, CredentialInfopinmix, function (data) {
                    addcredresult103 = data.addCredresult;
                    console.info("testaddCredential103 addcredresult102 = " + addcredresult103)
                    expect(ResultCode.SUCCESS).assertEqual(addcredresult103.addCredresult);
                    publicFC.publicauth(UserAuth, challenge, AuthType.PIN, AuthTurstLevel.ATL1, function (data) {
                        let token = data.authextr.token;
                        console.info("testaddCredential103 token = " + token)
                        publicFC.publicdelUser(UserIDM, token, function (data) {
                            console.info("testaddCredential103 deluserresult = " + data)
                            publicFC.publicCloseSession(UserIDM, function (data) {
                                console.info("addCredential103 closesession = " + data);
                                publicFC.publicunRegisterInputer(PinAuth, function (data) {
                                    console.info("addCredential103 unRegist = " + data);
                                    done();
                                })
                            })
                        })
                    },
                        function (data) {
                        })
                }, function (data) {
                })

            })
        } catch (e) {
            console.log("addCredential103 fail " + e);
            expect(null).assertFail();
        }
    })

    it('testaddCredentialcancel101', 0, async function (done) {
        try {
            publicFC.publicRegisterInputer(PinAuth, AuthSubType.PIN_MIXED, Inputerdata);
            let challenge;
            publicFC.publicOpenSession(UserIDM, function (data) {
                challenge = data;
                console.info("testaddCredentialcancel101 challenge" + challenge);
                let result1 = null;
                publicFC.publicaddCredential(UserIDM, CredentialInfopinmix, async function (data) {
                    result1 = data.addCredresult;
                    console.info("testaddCredentialcancel101 result1" + result1);
                    await sleep(3000);
                    let cancelresult = publicFC.publiccancel(UserIDM, challenge);
                    expect(ResultCode.SUCCESS).assertEqual(cancelresult);
                    expect(ResultCode.CANCELED).assertEqual(result1);
                    publicFC.publicCloseSession(UserIDM, function (data) {
                        console.info("testaddCredentialcancel101 closesession = " + data);
                        publicFC.publicunRegisterInputer(PinAuth, function (data) {
                            console.info("testaddCredentialcancel101 unRegist = " + data);
                            done();
                        })
                    })
                }, function (data) {
                })
            })
        } catch (e) {
            console.log("addCredential103 fail " + e);
            expect(null).assertFail();
        }
    })

    it('testaddCredentialcancel102', 0, async function (done) {
        try {
            publicFC.publicRegisterInputer(PinAuth, AuthSubType.PIN_MIXED, Inputerdata)
            let challenge;
            publicFC.publicOpenSession(UserIDM, function (data) {
                challenge = data;
                console.info("testaddCredentialcancel102 challenge" + challenge);
                let result2 = null;
                publicFC.publicaddCredential(UserIDM, CredentialInfopinmix, async function (data) {
                    result2 = data.addCredresult;
                    console.info("testaddCredentialcancel102 result2" + result2);
                    await sleep(8000);
                    let cancelresult = publicFC.publiccancel(UserIDM, challenge);
                    expect(ResultCode.SUCCESS).assertEqual(cancelresult);
                    expect(ResultCode.CANCELED).assertEqual(result2);
                    publicFC.publicCloseSession(UserIDM, function (data) {
                        console.info("testaddCredentialcancel102 closesession = " + data);
                        publicFC.publicunRegisterInputer(PinAuth, function (data) {
                            console.info("testaddCredentialcancel102 unRegist = " + data);
                            done();
                        })
                    })
                }, function (data) {
                })
            })
        } catch (e) {
            console.log("addCredential103 fail " + e);
            expect(null).assertFail();
        }
    })

    it('testaddCredentialcancel103', 0, async function (done) {
        try {

            publicFC.publicRegisterInputer(PinAuth, AuthSubType.PIN_MIXED, Inputerdata)
            let challenge
            publicFC.publicOpenSession(UserIDM, function (data) {
                challenge = data;
                console.info("testaddCredentialcancel103 challenge" + challenge);
                let result3 = null;
                publicFC.publicaddCredential(UserIDM, CredentialInfopinmix,async function (data) {
                    result3 = data.addCredresult;
                    console.info("testaddCredentialcancel103 result3" + result3);
                    await sleep(11000);
                    let cancelresult = publicFC.publiccancel(UserIDM, challenge);
                    expect(ResultCode.SUCCESS).assertEqual(cancelresult);
                    expect(ResultCode.CANCELED).assertEqual(result3);
                    publicFC.publicauth(UserAuth, challenge, AuthType.PIN, AuthTurstLevel.ATL1, function (data) {
                        let token = data.authextr.token;
                        console.info("testaddCredentialcancel103 token" + token);
                        publicFC.publicdelUser(UserIDM, token, function (data) {
                            let deluserresult = data.delUserresult;
                            console.info("testaddCredentialcancel103 deluserresult" + deluserresult);
                            publicFC.publicCloseSession(UserIDM, function (data) {
                                console.info("testaddCredentialcancel103 closesession = " + data);
                                publicFC.publicunRegisterInputer(PinAuth, function (data) {
                                    console.info("testaddCredentialcancel103 unRegist = " + data);
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
            console.log("addCredential103 fail " + e);
            expect(null).assertFail();
        }
    })

    it('testauth101', 0, async function (done) {
        try {
            publicFC.publicRegisterInputer(PinAuth, AuthSubType.PIN_SIX, Inputerdata)
            let challenge
            publicFC.publicOpenSession(UserIDM, function (data) {
                challenge = data;
                console.info("testauth101 challenge = " + challenge);
                publicFC.publicaddCredential(UserIDM, CredentialInfopinsix, function (data) {
                    let addcredresult101 = data.addCredresult;
                    console.info("testauth101 addcredresult101 = " + addcredresult101);
                    let auth101;
                    publicFC.publicauth(UserAuth, challenge, AuthType.PIN, AuthTurstLevel.ATL1, function (data) {
                        auth101 = data;
                        console.info("testauth101 auth101 = " + auth101);
                        expect(ResultCode.SUCCESS).assertEqual(auth101.authresult);
                        let token = data.authextr.token;
                        console.info("testauth101 token = " + token);
                        publicFC.publicdelUser(UserIDM, token, function (data) {
                            let deluserresult = data.delUserresult;
                            console.info("testauth101 deluserresult = " + deluserresult);
                            publicFC.publicCloseSession(UserIDM, function (data) {
                                console.info("testauth101 closesession = " + data);
                                publicFC.publicunRegisterInputer(PinAuth, function (data) {
                                    console.info("testauth101 unRegist = " + data);
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
            console.log("testauth101 fail " + e);
            expect(null).assertFail();
        }
    })

    it('testauth102', 0, async function (done) {
        try {
            publicFC.publicRegisterInputer(PinAuth, AuthSubType.PIN_SIX, Inputerdata)
            let challenge
            publicFC.publicOpenSession(UserIDM, function (data) {
                challenge = data;
                console.info("testauth102 challenge = " + challenge);
                publicFC.publicaddCredential(UserIDM, CredentialInfopinsix, function (data) {
                    let addcredresult102 = data.addCredresult;
                    console.info("testauth102 addcredresult102 = " + addcredresult102);
                    let auth102;
                    publicFC.publicauth(UserAuth, challenge, AuthType.PIN, AuthTurstLevel.ATL1, function (data) {
                        auth102 = data;
                        console.info("testauth102 auth102 = " + auth102);
                        expect(ResultCode.SUCCESS).assertEqual(auth102.authresult);
                        let token = data.authextr.token;
                        console.info("testauth102 token = " + token);
                        publicFC.publicdelUser(UserIDM, token, function (data) {
                            let deluserresult = data.delUserresult;
                            console.info("testauth102 deluserresult = " + deluserresult);
                            publicFC.publicCloseSession(UserIDM, function (data) {
                                console.info("testauth102 closesession = " + data);
                                publicFC.publicunRegisterInputer(PinAuth, function (data) {
                                    console.info("testauth102 unRegist = " + data);
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
            console.log("testauth102 fail " + e);
            expect(null).assertFail();
        }
    })

    it('testauth103', 0, async function (done) {
        try {
            publicFC.publicRegisterInputer(PinAuth, AuthSubType.PIN_SIX, Inputerdata)
            let challenge
            publicFC.publicOpenSession(UserIDM, function (data) {
                challenge = data;
                console.info("testauth103 challenge = " + challenge);
                publicFC.publicaddCredential(UserIDM, CredentialInfopinsix, function (data) {
                    let addcredresult103 = data.addCredresult;
                    console.info("testauth103 addcredresult103 = " + addcredresult103);
                    let auth103;
                    publicFC.publicauth(UserAuth, challenge, AuthType.PIN, AuthTurstLevel.ATL1, function (data) {
                        auth103 = data;
                        console.info("testauth103 auth103 = " + auth103);
                        expect(ResultCode.SUCCESS).assertEqual(auth103.authresult);
                        let token = data.authextr.token;
                        console.info("testauth103 token = " + token);
                        publicFC.publicdelUser(UserIDM, token, function (data) {
                            let deluserresult = data.delUserresult;
                            console.info("testauth103 deluserresult = " + deluserresult);
                            publicFC.publicCloseSession(UserIDM, function (data) {
                                console.info("testauth103 closesession = " + data);
                                publicFC.publicunRegisterInputer(PinAuth, function (data) {
                                    console.info("testauth103 unRegist = " + data);
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
            console.log("testauth103 fail " + e);
            expect(null).assertFail();
        }
    })

    it('testauthuser101', 0, async function (done) {
        try {
            publicFC.publicRegisterInputer(PinAuth, AuthSubType.PIN_SIX, Inputerdata);
            publicFC.publicOpenSession(UserIDM, function (data) {
                let challenge = data;
                console.info("testauthuser101 challenge = " + challenge);
                publicFC.publicaddCredential(UserIDM, CredentialInfopinsix, function (data) {
                    let addcredresult101 = data.addCredresult;
                    console.info("testauthuser101 addcredresult101 = " + addcredresult101);
                    publicFC.publicauthUser(UserAuth, userID.User1, challenge, AuthType.PIN, AuthTurstLevel.ATL1, function (data) {
                        let auth101 = data
                        console.info("testauthuser101 auth101 = " + auth101);
                        expect(ResultCode.SUCCESS).assertEqual(auth101.authresult);
                        let token = auth101.authextr.token
                        console.info("testauthuser101 token = " + token);
                        publicFC.publicdelUser(UserIDM, token, function (data) {
                            let deluserresult = data.delUserresult;
                            console.info("testauthuser101 deluserresult = " + deluserresult);
                            publicFC.publicCloseSession(UserIDM, function (data) {
                                console.info("testauthuser101 closesession = " + data);
                                publicFC.publicunRegisterInputer(PinAuth, function (data) {
                                    console.info("testauthuser101 unRegist = " + data);
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
            console.log("testauthuser101 fail " + e);
            expect(null).assertFail();
        }
    })

    it('testauthuser102', 0, async function (done) {
        try {
            publicFC.publicRegisterInputer(PinAuth, AuthSubType.PIN_SIX, Inputerdata);
            publicFC.publicOpenSession(UserIDM, function (data) {
                let challenge = data;
                console.info("testauthuser102 challenge = " + challenge);
                publicFC.publicaddCredential(UserIDM, CredentialInfopinsix, function (data) {
                    let addcredresult102 = data.addCredresult;
                    console.info("testauthuser102 addcredresult102 = " + addcredresult102);
                    publicFC.publicauthUser(UserAuth, userID.User1, challenge, AuthType.PIN, AuthTurstLevel.ATL1, function (data) {
                        let auth102 = data
                        console.info("testauthuser102 auth102 = " + auth102);
                        expect(ResultCode.SUCCESS).assertEqual(auth102.authresult);
                        let token = auth102.authextr.token
                        console.info("testauthuser102 token = " + token);
                        publicFC.publicdelUser(UserIDM, token, function (data) {
                            let deluserresult = data.delUserresult;
                            console.info("testauthuser102 deluserresult = " + deluserresult);
                            publicFC.publicCloseSession(UserIDM, function (data) {
                                console.info("testauthuser102 closesession = " + data);
                                publicFC.publicunRegisterInputer(PinAuth, function (data) {
                                    console.info("testauthuser102 unRegist = " + data);
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
            console.log("testauthuser102 fail " + e);
            expect(null).assertFail();
        }
    })

    it('testauthuser103', 0, async function (done) {
        try {
            publicFC.publicRegisterInputer(PinAuth, AuthSubType.PIN_SIX, Inputerdata);
            publicFC.publicOpenSession(UserIDM, function (data) {
                let challenge = data;
                console.info("testauthuser103 challenge = " + challenge);
                publicFC.publicaddCredential(UserIDM, CredentialInfopinsix, function (data) {
                    let addcredresult103 = data.addCredresult;
                    console.info("testauthuser103 addcredresult103 = " + addcredresult103);
                    publicFC.publicauthUser(UserAuth, userID.User1, challenge, AuthType.PIN, AuthTurstLevel.ATL1, function (data) {
                        let auth103 = data
                        console.info("testauthuser103 auth103 = " + auth103);
                        expect(ResultCode.SUCCESS).assertEqual(auth103.authresult);
                        let token = auth103.authextr.token
                        console.info("testauthuser103 token = " + token);
                        publicFC.publicdelUser(UserIDM, token, function (data) {
                            let deluserresult = data.delUserresult;
                            console.info("testauthuser103 deluserresult = " + deluserresult);
                            publicFC.publicCloseSession(UserIDM, function (data) {
                                console.info("testauthuser103 closesession = " + data);
                                publicFC.publicunRegisterInputer(PinAuth, function (data) {
                                    console.info("testauthuser103 unRegist = " + data);
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
            console.log("testauthuser103 fail " + e);
            expect(null).assertFail();
        }
    })

    it('testcancelauth101', 0, async function (done) {
        try {
            publicFC.publicRegisterInputer(PinAuth, AuthSubType.PIN_SIX, Inputerdata)
            publicFC.publicOpenSession(UserIDM, function (data) {
                let challenge = data;
                console.info("testcancelauth101 challenge = " + challenge);
                publicFC.publicaddCredential(UserIDM, CredentialInfopinsix, function (data) {
                    let addcredresult101 = data.addCredresult;
                    console.info("testcancelauth101 addcredresult101 = " + addcredresult101);
                    let result1 = null;
                    let contextID1 = null;
                    contextID1 = publicFC.publicauth(challenge, AuthType.PIN, AuthTurstLevel.ATL1, async function (data) {
                        console.info("testcancelauth101 contextID1 = " + contextID1);
                        result1 = data.authresult;
                        console.info("testcancelauth101 result1 = " + result1);
                        await sleep(3000);
                        let cancelAuthresult = publicFC.publicgecancelAuth(UserAuth, contextID1)
                        console.info("testcancelauth101 cancelAuthresult = " + cancelAuthresult);
                        expect(ResultCode.SUCCESS).assertEqual(cancelAuthresult);
                        expect(ResultCode.CANCELED).assertEqual(result1);
                        publicFC.publicCloseSession(UserIDM, function (data) {
                            console.info("testcancelauth101 closesession = " + data);
                            publicFC.publicunRegisterInputer(PinAuth, function (data) {
                                console.info("testcancelauth101 unRegist = " + data);
                                done();
                            })
                        })
                    }, function (data) {
                    })
                }, function (data) {
                })
            })
        } catch (e) {
            console.log("testcancelauth101 fail " + e);
            expect(null).assertFail();
        }
    })

    it('testcancelauth102', 0, async function (done) {
        try {
            publicFC.publicRegisterInputer(PinAuth, AuthSubType.PIN_SIX, Inputerdata)
            publicFC.publicOpenSession(UserIDM, function (data) {
                let challenge = data;
                console.info("testcancelauth102 challenge = " + challenge);
                publicFC.publicaddCredential(UserIDM, CredentialInfopinsix, function (data) {
                    let addcredresult102 = data.addCredresult;
                    console.info("testcancelauth102 addcredresult102 = " + addcredresult102);
                    let result2 = null;
                    let contextID2 = null;
                    contextID2 = publicFC.publicauth(challenge, AuthType.PIN, AuthTurstLevel.ATL1, async function (data) {
                        console.info("testcancelauth102 contextID2 = " + contextID2);
                        result2 = data.authresult;
                        console.info("testcancelauth102 result2 = " + result2);
                        await sleep(8000);
                        let cancelAuthresult = publicFC.publicgecancelAuth(UserAuth, contextID2)
                        console.info("testcancelauth102 cancelAuthresult = " + cancelAuthresult);
                        expect(ResultCode.SUCCESS).assertEqual(cancelAuthresult);
                        expect(ResultCode.CANCELED).assertEqual(result2);
                        publicFC.publicCloseSession(UserIDM, function (data) {
                            console.info("testcancelauth102 closesession = " + data);
                            publicFC.publicunRegisterInputer(PinAuth, function (data) {
                                console.info("testcancelauth102 unRegist = " + data);
                                done();
                            })
                        })
                    }, function (data) {
                    })
                }, function (data) {
                })
            })
        } catch (e) {
            console.log("testcancelauth102 fail " + e);
            expect(null).assertFail();
        }
    })

    it('testcancelauth103', 0, async function (done) {
        try {

            publicFC.publicRegisterInputer(PinAuth, AuthSubType.PIN_SIX, Inputerdata)
            publicFC.publicOpenSession(UserIDM, function (data) {
                let challenge = data;
                console.info("testcancelauth103 challenge = " + challenge);
                publicFC.publicaddCredential(UserIDM, CredentialInfopinsix, function (data) {
                    let addcredresult103 = data.addCredresult;
                    console.info("testcancelauth103 addcredresult103 = " + addcredresult103);
                    let result3 = null;
                    let contextID3 = null;
                    contextID3 = publicFC.publicauth(challenge, AuthType.PIN, AuthTurstLevel.ATL1,async function (data) {
                        console.info("testcancelauth103 contextID3 = " + contextID3);
                        result3 = data.authresult;
                        console.info("testcancelauth103 result3 = " + result3);
                        let token = data.authextr.token;
                        await sleep(11000);
                        let cancelAuthresult = publicFC.publicgecancelAuth(UserAuth, contextID3)
                        console.info("testcancelauth103 cancelAuthresult = " + cancelAuthresult);
                        expect(ResultCode.SUCCESS).assertEqual(cancelAuthresult);
                        expect(ResultCode.CANCELED).assertEqual(result3);
                        publicFC.publicdelUser(UserIDM, token, function (data) {
                            let deluserresult = data.delUserresult
                            console.info("testcancelauth103 deluserresult = " + deluserresult);
                            publicFC.publicCloseSession(UserIDM, function (data) {
                                console.info("testcancelauth103 closesession = " + data);
                                publicFC.publicunRegisterInputer(PinAuth, function (data) {
                                    console.info("testcancelauth103 unRegist = " + data);
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
            console.log("testcancelauth103 fail " + e);
            expect(null).assertFail();
        }
    })

    it('testcancelauthuser101', 0, async function (done) {
        try {
            publicFC.publicRegisterInputer(PinAuth, AuthSubType.PIN_SIX, Inputerdata)
            publicFC.publicOpenSession(UserIDM, function (data) {
                let challenge = data;
                console.info("testcancelauthuser101 challenge = " + challenge);
                publicFC.publicaddCredential(UserIDM, CredentialInfopinsix, function (data) {
                    let addcredresult101 = data.addCredresult;
                    console.info("testcancelauthuser101 addcredresult101 = " + addcredresult101);
                    let result1 = null;
                    let contextID1 = null;
                    contextID1 = publicFC.publicauthUser(challenge, AuthType.PIN, AuthTurstLevel.ATL1,async function (data) {
                        console.info("testcancelauthuser101 contextID1 = " + contextID1);
                        result1 = data.authresult;
                        console.info("testcancelauthuser101 result2 = " + result1);
                        await sleep(3000);
                        let cancelAuthresult = publicFC.publicgecancelAuth(UserAuth, contextID1)
                        console.info("testcancelauthuser101 cancelAuthresult = " + cancelAuthresult);
                        expect(ResultCode.SUCCESS).assertEqual(cancelAuthresult);
                        expect(ResultCode.CANCELED).assertEqual(result1);
                        publicFC.publicCloseSession(UserIDM, function (data) {
                            console.info("testcancelauthuser101 closesession = " + data);
                            publicFC.publicunRegisterInputer(PinAuth, function (data) {
                                console.info("testcancelauthuser101 unRegist = " + data);
                                done();
                            })
                        })
                    }, function (data) {
                    })
                }, function (data) {
                })
            })
        } catch (e) {
            console.log("testcancelauthuser101 fail " + e);
            expect(null).assertFail();
        }
    })

    it('testcancelauthuser102', 0, async function (done) {
        try {
            publicFC.publicRegisterInputer(PinAuth, AuthSubType.PIN_SIX, Inputerdata)
            publicFC.publicOpenSession(UserIDM, function (data) {
                let challenge = data;
                console.info("testcancelauthuser102 challenge = " + challenge);
                publicFC.publicaddCredential(UserIDM, CredentialInfopinsix, function (data) {
                    let addcredresult102 = data.addCredresult;
                    console.info("testcancelauthuser102 addcredresult102 = " + addcredresult102);
                    let result2 = null;
                    let contextID2 = null;
                    contextID2 = publicFC.publicauthUser(challenge, AuthType.PIN, AuthTurstLevel.ATL1,async function (data) {
                        console.info("testcancelauthuser102 contextID2 = " + contextID2);
                        result2 = data.authresult;
                        console.info("testcancelauthuser102 result2 = " + result2);
                        await sleep(8000);
                        let cancelAuthresult = publicFC.publicgecancelAuth(UserAuth, contextID2)
                        console.info("testcancelauthuser102 cancelAuthresult = " + cancelAuthresult);
                        expect(ResultCode.SUCCESS).assertEqual(cancelAuthresult);
                        expect(ResultCode.CANCELED).assertEqual(result2);
                        publicFC.publicCloseSession(UserIDM, function (data) {
                            console.info("testcancelauthuser102 closesession = " + data);
                            publicFC.publicunRegisterInputer(PinAuth, function (data) {
                                console.info("testcancelauthuser102 unRegist = " + data);
                                done();
                            })
                        })
                    }, function (data) {
                    })
                }, function (data) {
                })
            })
        } catch (e) {
            console.log("testcancelauthuser101 fail " + e);
            expect(null).assertFail();
        }
    })

    it('testcancelauthuser103', 0, async function (done) {
        try {
            publicFC.publicRegisterInputer(PinAuth, AuthSubType.PIN_SIX, Inputerdata)
            publicFC.publicOpenSession(UserIDM, function (data) {
                let challenge = data;
                console.info("testcancelauthuser103 challenge = " + challenge);
                publicFC.publicaddCredential(UserIDM, CredentialInfopinsix, function (data) {
                    let addcredresult103 = data.addCredresult;
                    console.info("testcancelauthuser103 addcredresult103 = " + addcredresult103);
                    let result3 = null;
                    let contextID3 = null;
                    contextID3 = publicFC.publicauthUser(challenge, AuthType.PIN, AuthTurstLevel.ATL1,async function (data) {
                        console.info("testcancelauthuser103 contextID3 = " + contextID3);
                        result3 = data.authresult;
                        console.info("testcancelauthuser103 result3 = " + result3);
                        let token = data.authextr.token;
                        await sleep(11000);
                        let cancelAuthresult = publicFC.publicgecancelAuth(UserAuth, contextID3)
                        console.info("testcancelauthuser103 cancelAuthresult = " + cancelAuthresult);
                        expect(ResultCode.SUCCESS).assertEqual(cancelAuthresult);
                        expect(ResultCode.CANCELED).assertEqual(result3);
                        publicFC.publicdelUser(UserIDM, token, function (data) {
                            let deluserresult = data.delUserresult
                            console.info("testcancelauthuser103 deluserresult = " + deluserresult);
                            publicFC.publicCloseSession(UserIDM, function (data) {
                                console.info("testcancelauthuser103 closesession = " + data);
                                publicFC.publicunRegisterInputer(PinAuth, function (data) {
                                    console.info("testcancelauthuser103 unRegist = " + data);
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
            console.log("testcancelauthuser103 fail " + e);
            expect(null).assertFail();
        }
    })

    it('testupdateCredential101', 0, async function (done) {
        try {
            publicFC.publicRegisterInputer(PinAuth, AuthSubType.PIN_SIX, Inputerdata)
            publicFC.publicOpenSession(UserIDM, function (data) {
                let challenge = data;
                console.info("testupdateCredential101 challenge = " + challenge);
                publicFC.publicaddCredential(UserIDM, CredentialInfopinnum, function (data) {
                    let addcredresult101 = data.addcredresult;
                    console.info("testupdateCredential101 addcredresult101 = " + addcredresult101);
                    publicFC.publicauth(UserAuth, challenge, AuthType.PIN, AuthTurstLevel.ATL1, function (data) {
                        let auth101 = data
                        console.info("testupdateCredential101 auth101 = " + auth101);
                        let token = auth101.authextr.token
                        console.info("testupdateCredential101 token = " + token);
                        publicFC.publicCloseSession(UserIDM, function (data) {
                            console.info("testupdateCredential101 closesession = " + data);
                            publicFC.publicunRegisterInputer(PinAuth, function (data) {
                                console.info("testupdateCredential101 unRegist = " + data);
                                publicFC.publicRegisterInputer(PinAuth, AuthSubType.PIN_NUMBER, Inputerdata)
                                publicFC.publicOpenSession(UserIDM, function (data) {
                                    challenge = data
                                    console.info("testupdateCredential101 challenge = " + challenge);
                                    CredentialInfopinnum.token = token
                                    console.info("testupdateCredential101 CredentialInfopinnum.token = " + CredentialInfopinnum.token);
                                    publicFC.publicupdateCred(UserIDM, CredentialInfopinnum, function (data) {
                                        let updateresult = data.updateCredresult;
                                        console.info("testupdateCredential101 updateresult = " + updateresult);
                                        expect(ResultCode.SUCCESS).assertEqual(updateresult.updateCredresult);
                                        publicFC.publicauth(UserAuth, challenge, AuthType.PIN, AuthTurstLevel.ATL1, function (data) {
                                            auth101 = data
                                            console.info("testupdateCredential101 auth101 = " + auth101);
                                            let token1 = auth101.authextr.token
                                            console.info("testupdateCredential101 token1 = " + token1);
                                            let deluserresult = publicFC.publicdelUser(UserIDM, token1, function (data) {
                                                publicFC.publicCloseSession(UserIDM, function (data) {
                                                    console.info("testupdateCredential101 closesession = " + data);
                                                    publicFC.publicunRegisterInputer(PinAuth, function (data) {
                                                        console.info("testupdateCredential101 unRegist = " + data);
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

                            })
                        })


                    }, function (data) {
                    })

                }, function (data) {
                })

            })

        } catch (e) {
            console.log("testupdateCredential101 fail " + e);
            expect(null).assertFail();
        }
    })

    it('testupdateCredential102', 0, async function (done) {
        try {
            publicFC.publicRegisterInputer(PinAuth, AuthSubType.PIN_SIX, Inputerdata)
            publicFC.publicOpenSession(UserIDM, function (data) {
                let challenge = data;
                console.info("testupdateCredential102 challenge = " + challenge);
                publicFC.publicaddCredential(UserIDM, CredentialInfopinnum, function (data) {
                    let addcredresult102 = data.addcredresult;
                    console.info("testupdateCredential102 addcredresult102 = " + addcredresult102);
                    publicFC.publicauth(UserAuth, challenge, AuthType.PIN, AuthTurstLevel.ATL1, function (data) {
                        let auth102 = data
                        console.info("testupdateCredential102 auth102 = " + auth102);
                        let token = auth102.authextr.token
                        console.info("testupdateCredential102 token = " + token);
                        publicFC.publicCloseSession(UserIDM, function (data) {
                            console.info("testupdateCredential102 closesession = " + data);
                            publicFC.publicunRegisterInputer(PinAuth, function (data) {
                                console.info("testupdateCredential102 unRegist = " + data);
                                publicFC.publicRegisterInputer(PinAuth, AuthSubType.PIN_NUMBER, Inputerdata)
                                publicFC.publicOpenSession(UserIDM, function (data) {
                                    challenge = data
                                    console.info("testupdateCredential102 challenge = " + challenge);
                                    CredentialInfopinnum.token = token
                                    console.info("testupdateCredential102 CredentialInfopinnum.token = " + CredentialInfopinnum.token);
                                    publicFC.publicupdateCred(UserIDM, CredentialInfopinnum, function (data) {
                                        let updateresult = data.updateCredresult;
                                        console.info("testupdateCredential102 updateresult = " + updateresult);
                                        expect(ResultCode.SUCCESS).assertEqual(updateresult.updateCredresult);
                                        publicFC.publicauth(UserAuth, challenge, AuthType.PIN, AuthTurstLevel.ATL1, function (data) {
                                            auth102 = data
                                            console.info("testupdateCredential102 auth102 = " + auth102);
                                            let token2 = auth102.authextr.token
                                            console.info("testupdateCredential102 token2 = " + token2);
                                            let deluserresult = publicFC.publicdelUser(UserIDM, token2, function (data) {
                                                publicFC.publicCloseSession(UserIDM, function (data) {
                                                    console.info("testupdateCredential102 closesession = " + data);
                                                    publicFC.publicunRegisterInputer(PinAuth, function (data) {
                                                        console.info("testupdateCredential102 unRegist = " + data);
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

                            })
                        })


                    }, function (data) {
                    })

                }, function (data) {
                })

            })

        } catch (e) {
            console.log("testupdateCredential102 fail " + e);
            expect(null).assertFail();
        }
    })

    it('testupdateCredential103', 0, async function (done) {
        try {
            publicFC.publicRegisterInputer(PinAuth, AuthSubType.PIN_SIX, Inputerdata)
            publicFC.publicOpenSession(UserIDM, function (data) {
                let challenge = data;
                console.info("testupdateCredential103 challenge = " + challenge);
                publicFC.publicaddCredential(UserIDM, CredentialInfopinnum, function (data) {
                    let addcredresult103 = data.addcredresult;
                    console.info("testupdateCredential103 addcredresult103 = " + addcredresult103);
                    publicFC.publicauth(UserAuth, challenge, AuthType.PIN, AuthTurstLevel.ATL1, function (data) {
                        let auth103 = data
                        console.info("testupdateCredential103 auth103 = " + auth103);
                        let token = auth103.authextr.token
                        console.info("testupdateCredential103 token = " + token);
                        publicFC.publicCloseSession(UserIDM, function (data) {
                            console.info("testupdateCredential103 closesession = " + data);
                            publicFC.publicunRegisterInputer(PinAuth, function (data) {
                                console.info("testupdateCredential103 unRegist = " + data);
                                publicFC.publicRegisterInputer(PinAuth, AuthSubType.PIN_NUMBER, Inputerdata)
                                publicFC.publicOpenSession(UserIDM, function (data) {
                                    challenge = data
                                    console.info("testupdateCredential103 challenge = " + challenge);
                                    CredentialInfopinnum.token = token
                                    console.info("testupdateCredential103 CredentialInfopinnum.token = " + CredentialInfopinnum.token);
                                    publicFC.publicupdateCred(UserIDM, CredentialInfopinnum, function (data) {
                                        let updateresult = data.updateCredresult;
                                        console.info("testupdateCredential103 updateresult = " + updateresult);
                                        expect(ResultCode.SUCCESS).assertEqual(updateresult.updateCredresult);
                                        publicFC.publicauth(UserAuth, challenge, AuthType.PIN, AuthTurstLevel.ATL1, function (data) {
                                            auth103 = data
                                            console.info("testupdateCredential103 auth103 = " + auth103);
                                            let token3 = auth103.authextr.token
                                            console.info("testupdateCredential103 token3 = " + token3);
                                            let deluserresult = publicFC.publicdelUser(UserIDM, token3, function (data) {
                                                publicFC.publicCloseSession(UserIDM, function (data) {
                                                    console.info("testupdateCredential103 closesession = " + data);
                                                    publicFC.publicunRegisterInputer(PinAuth, function (data) {
                                                        console.info("testupdateCredential103 unRegist = " + data);
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

                            })
                        })


                    }, function (data) {
                    })

                }, function (data) {
                })

            })
            done();
        } catch (e) {
            console.log("testupdateCredential103 fail " + e);
            expect(null).assertFail();
        }
    })

    it('testdelUser101', 0, async function (done) {
        try {
            publicFC.publicRegisterInputer(PinAuth, AuthSubType.PIN_SIX, Inputerdata)
            publicFC.publicOpenSession(UserIDM, function (data) {
                let challenge = data;
                console.info("testdelUser101 challenge = " + challenge);
                publicFC.publicaddCredential(UserIDM, CredentialInfopinsix, function (data) {
                    let addcredresult101 = data.addCredresult;
                    console.info("testdelUser101 addcredresult101 = " + addcredresult101);
                    publicFC.publicauth(UserAuth, challenge, AuthType.PIN, AuthTurstLevel.ATL1, function (data) {
                        let info101 = data
                        console.info("testdelUser101 info101 = " + info101);
                        let token = info101.authextr.token
                        console.info("testdelUser101 token = " + token);
                        publicFC.publicdelUser(UserIDM, token, function (data) {
                            let deluserresult = data.delUserresult
                            console.info("testdelUser101 deluserresult = " + deluserresult);
                            expect(ResultCode.SUCCESS).assertEqual(deluserresult.delUserresult);
                            publicFC.publicCloseSession(UserIDM, function (data) {
                                console.info("testdelUser101 closesession = " + data);
                                publicFC.publicunRegisterInputer(PinAuth, function (data) {
                                    console.info("testdelUser101 unRegist = " + data);
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
            console.log("testdelUser101 fail " + e);
            expect(null).assertFail();
        }
    })

    it('testdelUser102', 0, async function (done) {
        try {
            publicFC.publicRegisterInputer(PinAuth, AuthSubType.PIN_SIX, Inputerdata)
            publicFC.publicOpenSession(UserIDM, function (data) {
                let challenge = data;
                console.info("testdelUser102 challenge = " + challenge);
                publicFC.publicaddCredential(UserIDM, CredentialInfopinsix, function (data) {
                    let addcredresult102 = data.addCredresult;
                    console.info("testdelUser102 addcredresult102 = " + addcredresult102);
                    publicFC.publicauth(UserAuth, challenge, AuthType.PIN, AuthTurstLevel.ATL1, function (data) {
                        let info102 = data
                        console.info("testdelUser102 info102 = " + info102);
                        let token = info102.authextr.token
                        console.info("testdelUser102 token = " + token);
                        publicFC.publicdelUser(UserIDM, token, function (data) {
                            let deluserresult = data.delUserresult
                            console.info("testdelUser102 deluserresult = " + deluserresult);
                            expect(ResultCode.SUCCESS).assertEqual(deluserresult.delUserresult);
                            publicFC.publicCloseSession(UserIDM, function (data) {
                                console.info("testdelUser102 closesession = " + data);
                                publicFC.publicunRegisterInputer(PinAuth, function (data) {
                                    console.info("testdelUser102 unRegist = " + data);
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
            console.log("testdelUser102 fail " + e);
            expect(null).assertFail();
        }
    })

    it('testdelUser103', 0, async function (done) {
        try {
            publicFC.publicRegisterInputer(PinAuth, AuthSubType.PIN_SIX, Inputerdata)
            publicFC.publicOpenSession(UserIDM, function (data) {
                let challenge = data;
                console.info("testdelUser103 challenge = " + challenge);
                publicFC.publicaddCredential(UserIDM, CredentialInfopinsix, function (data) {
                    let addcredresult103 = data.addCredresult;
                    console.info("testdelUser103 addcredresult101 = " + addcredresult103);
                    publicFC.publicauth(UserAuth, challenge, AuthType.PIN, AuthTurstLevel.ATL1, function (data) {
                        let info103 = data
                        console.info("testdelUser103 info103 = " + info103);
                        let token = info103.authextr.token
                        console.info("testdelUser103 token = " + token);
                        publicFC.publicdelUser(UserIDM, token, function (data) {
                            let deluserresult = data.delUserresult
                            console.info("testdelUser103 deluserresult = " + deluserresult);
                            expect(ResultCode.SUCCESS).assertEqual(deluserresult.delUserresult);
                            publicFC.publicCloseSession(UserIDM, function (data) {
                                console.info("testdelUser103 closesession = " + data);
                                publicFC.publicunRegisterInputer(PinAuth, function (data) {
                                    console.info("testdelUser103 unRegist = " + data);
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
            console.log("testdelUser103 fail " + e);
            expect(null).assertFail();
        }
    })
})
