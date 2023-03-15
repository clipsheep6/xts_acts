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

    it('testtwochallenge101', 0, async function (done) {
        try {
            publicFC.publicRegisterInputer(PinAuth, AuthSubType.PIN_SIX, Inputerdata)
            publicFC.publicOpenSession(UserIDM, function (data) {
                let challenge1 = data;
                console.info('testtwochallenge101 publicOpenSession challenge1 = ' + challenge1);
                publicFC.publicOpenSession(UserIDM, function (data) {
                    let challenge2 = data;
                    console.info('testtwochallenge101 publicOpenSession challenge2 = ' + challenge2);
                    publicFC.publicaddCredential(UserIDM, CredentialInfopinsix, function (data) {
                        let addcredresult101 = data.addCredresult;
                        console.info('testtwochallenge101 publicaddCredential addcredresult101 = ' + addcredresult101);
                    })
                    publicFC.publicauth(UserAuth, challenge1, AuthType.PIN, AuthTurstLevel.ATL1, function (data) {
                        let info101 = data.authresult;
                        console.info('testtwochallenge101 publicauth info101 = ' + info101);
                        publicFC.publicauth(UserAuth, challenge2, AuthType.PIN, AuthTurstLevel.ATL1, function (data) {
                            let info1011 = data.authresult;
                            console.info('testtwochallenge101 publicauth info1011 = ' + info1011);
                            expect(ResultCode.FAIL).assertEqual(info101.authresult);
                            expect(ResultCode.SUCCESS).assertEqual(info1011.authresult);
                            let token = info1011.extraInfo.token
                            publicFC.publicdelUser(UserIDM, token, function (data) {
                                let deluserresult = data.delUserresult;
                                console.info('testtwochallenge101 publicdelUser deluserresult = ' + deluserresult);
                                publicFC.publicCloseSession(UserIDM, function (data) {
                                    console.info('testtwochallenge101 publicCloseSession data = ' + data);
                                    publicFC.publicunRegisterInputer(PinAuth, function (data) {
                                        console.info('testtwochallenge101 publicunRegisterInputer data = ' + data);
                                        done();
                                    })
                                })
                            })
                        })
                    }, function (data) {
                        console.info('testtwochallenge101 publicauth data = ' + data);

                    })

                })

            })
        } catch (e) {
            console.log("addCredential101 fail " + e);
            expect(null).assertFail();
        }
    })

    it('testtwoopensession101', 0, async function (done) {
        try {
            publicFC.publicRegisterInputer(PinAuth, AuthSubType.PIN_SIX, Inputerdata)
            publicFC.publicOpenSession(UserIDM, function (data) {
                let challenge1 = data;
                console.info('testtwoopensession101 publicOpenSession challenge1 = ' + challenge1);
                publicFC.publicOpenSession(UserIDM, function (data) {
                    let challenge2 = data;
                    console.info('testtwoopensession101 publicOpenSession challenge2 = ' + challenge2);
                    publicFC.publicCloseSession(UserIDM, function (data) {
                        console.info('testtwoopensession101 publicCloseSession data = ' + data);
                        publicFC.publicaddCredential(UserIDM, CredentialInfopinsix, function (data) {
                            let addcredresult101 = data.addCredresult;
                            console.info('testtwoopensession101 publicaddCredential addcredresult101 = ' + addcredresult101);
                            expect(ResultCode.FAIL).assertEqual(addcredresult101.addCredresult);
                            publicFC.publicunRegisterInputer(PinAuth, function (data) {
                                console.info('testtwoopensession101 publicunRegisterInputer data = ' + data);
                                done();
                            })
                        })
                    })
                })
            })
        } catch (e) {
            console.log("addCredential101 fail " + e);
            expect(null).assertFail();
        }
    })

    it('testtwoaddcred101', 0, async function (done) {
        try {
            publicFC.publicRegisterInputer(PinAuth, AuthSubType.PIN_SIX, Inputerdata)
            publicFC.publicOpenSession(UserIDM, function (data) {
                let challenge = data;
                console.info('testtwoaddcred101 publicOpenSession challenge = ' + challenge);
                publicFC.publicaddCredential(UserIDM, CredentialInfopinsix, function (data) {
                    let addcredresult101 = data.addCredresult;
                    console.info('testtwoaddcred101 publicaddCredential addcredresult101 = ' + addcredresult101);
                    expect(ResultCode.SUCCESS).assertEqual(addcredresult101.addCredresult);
                    publicFC.publicaddCredential(UserIDM, CredentialInfopinsix, function (data) {
                        let addcredresult102 = data.addCredresult;
                        console.info('testtwoaddcred101 publicaddCredential addcredresult102 = ' + addcredresult102);
                        expect(ResultCode.Fail).assertEqual(addcredresult102.addCredresult);
                        publicFC.publicauth(UserAuth, challenge, AuthType.PIN, AuthTurstLevel.ATL1, function (data) {
                            let info101 = data.authresult;
                            console.info('testtwoaddcred101 publicauth info101 = ' + info101);
                            let token = info101.extraInfo.token
                            publicFC.publicdelUser(UserIDM, token, function (data) {
                                let deluserresult = data.delUserresult;
                                console.info('testtwoaddcred101 publicdelUser deluserresult = ' + deluserresult);
                                publicFC.publicCloseSession(UserIDM, function (data) {
                                    console.info('testtwoaddcred101 publicCloseSession data = ' + data);
                                    publicFC.publicunRegisterInputer(PinAuth, function (data) {
                                        console.info('testtwoaddcred101 publicunRegisterInputer data = ' + data);
                                        done();
                                    })
                                })
                            })
                        }, function (data) {
                            console.info('testtwoaddcred101 publicauth data = ' + data);

                        })
                    })
                })
            })


        } catch (e) {
            console.log("addCredential101 fail " + e);
            expect(null).assertFail();
        }
    })

    it('testaddwithnotoken101', 0, async function (done) {
        try {
            publicFC.publicRegisterInputer(PinAuth, AuthSubType.PIN_SIX, Inputerdata)
            publicFC.publicOpenSession(UserIDM, function (data) {
                let challenge = data;
                console.info('testaddwithnotoken101 publicOpenSession challenge = ' + challenge);
                let CredentialInfopinsix2 = {
                    credType: AuthType.PIN,
                    credSubType: AuthSubType.PIN_SIX,
                }
                publicFC.publicaddCredential(UserIDM, CredentialInfopinsix2, function (data) {
                    let addcredresult101 = data.addCredresult;
                    console.info('testaddwithnotoken101 publicaddCredential addcredresult101 = ' + addcredresult101);
                    expect(ResultCode.Fail).assertEqual(addcredresult101.addCredresult);
                    publicFC.publicauth(UserAuth, challenge, AuthType.PIN, AuthTurstLevel.ATL1, function (data) {
                        let info101 = data.authresult;
                        console.info('testaddwithnotoken101 publicauth info101 = ' + info101);
                        let token = info101.extraInfo.token
                        publicFC.publicdelUser(UserIDM, token, function (data) {
                            let deluserresult = data.delUserresult;
                            console.info('testaddwithnotoken101 publicdelUser deluserresult = ' + deluserresult);
                            publicFC.publicCloseSession(UserIDM, function (data) {
                                console.info('testaddwithnotoken101 publicCloseSession data = ' + data);
                                publicFC.publicunRegisterInputer(PinAuth, function (data) {
                                    console.info('testaddwithnotoken101 publicunRegisterInputer data = ' + data);
                                    done();
                                })
                            })
                        })
                    }, function (data) {
                        console.info('testaddwithnotoken101 publicauth data = ' + data);
                    })
                })
            })
        } catch (e) {
            console.log("addCredential101 fail " + e);
            expect(null).assertFail();
        }
    })

    it('testauthnopin101', 0, async function (done) {
        try {
            publicFC.publicRegisterInputer(PinAuth, AuthSubType.PIN_SIX, Inputerdata)
            publicFC.publicOpenSession(UserIDM, function (data) {
                let challenge = data;
                console.info('testauthnopin101 publicOpenSession challenge = ' + challenge);
                publicFC.publicauth(UserAuth, challenge, AuthType.PIN, AuthTurstLevel.ATL1, function (data) {
                    let info101 = data.authresult;
                    console.info('testauthnopin101 publicauth info101 = ' + info101);
                    expect(ResultCode.TYPE_NOT_SUPPORT).assertEqual(info101.authresult);
                    publicFC.publicCloseSession(UserIDM, function (data) {
                        console.info('testauthnopin101 publicCloseSession data = ' + data);
                        publicFC.publicunRegisterInputer(PinAuth, function (data) {
                            console.info('testauthnopin101 publicunRegisterInputer data = ' + data);
                            done();
                        })
                    })
                }, function (data) {
                    console.info('testauthnopin101 publicauth data = ' + data);
                })
            })


        } catch (e) {
            console.log("addCredential101 fail " + e);
            expect(null).assertFail();
        }
    })

    it('testupdatewithsamepin101', 0, async function (done) {
        try {
            publicFC.publicRegisterInputer(PinAuth, AuthSubType.PIN_SIX, Inputerdata)
            publicFC.publicOpenSession(UserIDM, function (data) {
                let challenge = data;
                console.info('testupdatewithsamepin101 publicOpenSession challenge = ' + challenge);
                publicFC.publicaddCredential(UserIDM, CredentialInfopinsix, function (data) {
                    let addcredresult102 = data.addCredresult;
                    console.info('testupdatewithsamepin101 publicaddCredential addcredresult102 = ' + addcredresult102);
                    publicFC.publicauth(UserAuth, challenge, AuthType.PIN, AuthTurstLevel.ATL1, function (data) {
                        let auth101 = data.authresult;
                        console.info('testupdatewithsamepin101 publicauth auth101 = ' + auth101);
                        let token = auth101.extraInfo.token
                        publicFC.publicupdateCred(UserIDM, CredentialInfopinsix, function (data) {
                            let updateresult = data.updateCredresult;
                            console.info('testupdatewithsamepin101 publicupdateCred updateresult = ' + updateresult);
                            expect(ResultCode.SUCCESS).assertEqual(updateresult.updateCredresult);
                            publicFC.publicauth(UserAuth, challenge, AuthType.PIN, AuthTurstLevel.ATL1, function (data) {
                                auth101 = data.authresult;
                                console.info('testupdatewithsamepin101 publicauth auth101 = ' + auth101);
                                let token1 = auth101.extraInfo.token
                                publicFC.publicdelUser(UserIDM, token1, function (data) {
                                    let deluserresult = data.delUserresult;
                                    console.info('testupdatewithsamepin101 publicdelUser deluserresult = ' + deluserresult);
                                    publicFC.publicCloseSession(UserIDM, function (data) {
                                        console.info('testupdatewithsamepin101 publicCloseSession data = ' + data);
                                        publicFC.publicunRegisterInputer(PinAuth, function (data) {
                                            console.info('testupdatewithsamepin101 publicunRegisterInputer data = ' + data);
                                            done();
                                        })
                                    })
                                })
                            })
                        })
                    }, function (data) {
                        console.info('testupdatewithsamepin101 publicauth data = ' + data);
                    })
                })
            })

        } catch (e) {
            console.log("testupdateCredential101 fail " + e);
            expect(null).assertFail();
        }
    })

    it('testupdatewithnopin101', 0, async function (done) {
        try {
            publicFC.publicRegisterInputer(PinAuth, AuthSubType.PIN_SIX, Inputerdata)
            publicFC.publicOpenSession(UserIDM, function (data) {
                let challenge = data;
                console.info('testupdatewithnopin101 publicOpenSession challenge = ' + challenge);
                publicFC.publicaddCredential(UserIDM, CredentialInfopinsix, function (data) {
                    let addcredresult102 = data.addCredresult;
                    console.info('testupdatewithnopin101 publicaddCredential addcredresult102 = ' + addcredresult102);
                    let auth101 = publicFC.publicauth(UserAuth, challenge, AuthType.PIN, AuthTurstLevel.ATL1, function (data) {
                        let addcredresult102 = data.authresult;
                        console.info('testupdatewithnopin101 publicauth addcredresult102 = ' + addcredresult102);
                        let token = auth101.extraInfo.token
                        publicFC.publicdelUser(UserIDM, token, function (data) {
                            let deluserresult = data.delUserresult;
                            console.info('testupdatewithnopin101 publicdelUser deluserresult = ' + deluserresult);
                            publicFC.publicupdateCred(UserIDM, CredentialInfopinsix, function (data) {
                                let updateresult = data.updateCredresult;
                                console.info('testupdatewithnopin101 publicupdateCred updateresult = ' + updateresult);
                                expect(ResultCode.Fail).assertEqual(updateresult.updateCredresult);
                                publicFC.publicCloseSession(UserIDM, function (data) {
                                    console.info('testupdatewithnopin101 publicCloseSession data = ' + data);
                                    publicFC.publicunRegisterInputer(PinAuth, function (data) {
                                        console.info('testupdatewithnopin101 publicunRegisterInputer data = ' + data);
                                        done();
                                    })
                                })
                            })
                        })
                    }, function (data) {
                        console.info('testupdatewithnopin101 publicauth data = ' + data);
                    })
                })
            })


        } catch (e) {
            console.log("testupdateCredential101 fail " + e);
            expect(null).assertFail();
        }
    })

    it('testdelUserwithnopin101', 0, async function (done) {
        try {
            publicFC.publicRegisterInputer(PinAuth, AuthSubType.PIN_SIX, Inputerdata)
            publicFC.publicOpenSession(UserIDM, function (data) {
                let challenge = data;
                console.info('testdelUserwithnopin101 publicOpenSession challenge = ' + challenge);
                publicFC.publicaddCredential(UserIDM, CredentialInfopinsix, function (data) {
                    let addcredresult101 = data.addCredresult;
                    console.info('testdelUserwithnopin101 publicaddCredential addcredresult101 = ' + addcredresult101);
                    let info101 = publicFC.publicauth(UserAuth, challenge, AuthType.PIN, AuthTurstLevel.ATL1, function (data) {
                        let addcredresult101 = data.authresult;
                        console.info('testdelUserwithnopin101 publicauth addcredresult101 = ' + addcredresult101);
                        let token = info101.extraInfo.token
                        publicFC.publicdelUser(UserIDM, token, function (data) {
                            let deluserresult = data.delUserresult;
                            console.info('testdelUserwithnopin101 publicdelUser deluserresult = ' + deluserresult);
                            expect(ResultCode.SUCCESS).assertEqual(deluserresult.delUserresult);
                            publicFC.publicdelUser(UserIDM, token, function (data) {
                                deluserresult = data.delUserresult;
                                console.info('testdelUserwithnopin101 publicdelUser deluserresult = ' + deluserresult);
                                expect(ResultCode.FAIL).assertEqual(deluserresult.delUserresult);
                                publicFC.publicCloseSession(UserIDM, function (data) {
                                    console.info('testdelUserwithnopin101 publicCloseSession data = ' + data);
                                    publicFC.publicunRegisterInputer(PinAuth, function (data) {
                                        console.info('testdelUserwithnopin101 publicunRegisterInputer data = ' + data);
                                        done();
                                    })
                                })
                            })
                        })
                    }, function (data) {
                        console.info('testdelUserwithnopin101 publicauth data = ' + data);
                    })
                })
            })
        } catch (e) {
            console.log("testdelUser101 fail " + e);
            expect(null).assertFail();
        }
    })
})
