/*
 * Copyright (c) 2022 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

import {
    describe,
    beforeAll,
    beforeEach,
    afterEach,
    afterAll,
    it,
    expect
} from 'deccjsunit/index'
import missionManager from "@ohos.application.missionManager";
import commonEvent from '@ohos.commonEvent';
import featureAbility from '@ohos.ability.featureAbility';
import abilityFeatureAbility from '@ohos.ability.featureAbility';

var START_ABILITY_TIMEOUT = 5000;
var missionArray0100 = [];
var missionArray0200 = [];
var missionArray0300 = [];
var missionArray0400 = [];
var missionArray0700 = [];
var missionArray = [];
var missionId1s = [];
var missionId2s = [];

describe('missionManager', function () {
    console.info("----------------logMessage SUB_AA_OpenHarmony_Lock-------------------");

    /*
     * @tc.number  SUB_AA_OpenHarmony_Lock_1500
     * @tc.name    Locking function abnormal parameter_-1
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('SUB_AA_OpenHarmony_Lock_1500', 0, async function (done) {
        console.info("-------------logMessage SUB_AA_OpenHarmony_Lock_1500---------")
        missionManager.lockMission(-1, (err, data) => {
            console.log('SUB_AA_OpenHarmony_Lock_1500 AsyncCallback errCode : ' +
            JSON.stringify(err) + " data: " + JSON.stringify(data));
            expect(err.code != 0).assertTrue();
            done();
        })
    })

     /*
      * @tc.number  SUB_AA_OpenHarmony_Lock_1800
      * @tc.name    Lock function abnormal parameter _number decimal 0.2
      * @tc.desc    Function test
      * @tc.level   0
      */
    it('SUB_AA_OpenHarmony_Lock_1800', 0, async function (done) {
        console.log("------------start SUB_AA_OpenHarmony_Lock_1800-------------");
        var missionId = 0.2;
        setTimeout(() => {
            missionManager.lockMission(missionId).then((data) => {
                console.log("SUB_AA_OpenHarmony_Lock_1800 lockMission data: " +
                JSON.stringify(data));
            }).catch((error) => {
                console.log("SUB_AA_OpenHarmony_Lock_1800 lockMission error: " +
                JSON.stringify(error));
                expect(error.code != 0).assertTrue();
                done();
            })
        }, 1000)
        console.log("------------end SUB_AA_OpenHarmony_Lock_1800-------------");
    })

        /*
         * @tc.number  SUB_AA_OpenHarmony_Lock_1900
         * @tc.name    Lock function abnormal parameter _number decimal 1.2
         * @tc.desc    Function test
         * @tc.level   0
         */
    it('SUB_AA_OpenHarmony_Lock_1900', 0, async function (done) {
        console.info("------------------logMessage SUB_AA_OpenHarmony_Lock_1900-------------------")
        missionManager.lockMission(1.2, (err, data) => {
            console.log('SUB_AA_OpenHarmony_Lock_1900 AsyncCallback errCode : ' +
            JSON.stringify(err) + " data: " + JSON.stringify(data));
            expect(data == undefined).assertTrue();
            done();
        })
    })

      /*
       * @tc.number  SUB_AA_OpenHarmony_Lock_1700
       * @tc.name    Lock function exception parameter _string type is not a number
       * @tc.desc    Function test
       * @tc.level   0
       */
    it('SUB_AA_OpenHarmony_Lock_1700', 0, async function (done) {
        console.info("------------logMessage SUB_AA_OpenHarmony_Lock_1700-----------")
        missionManager.lockMission("A", (err, data) => {
            console.log('SUB_AA_OpenHarmony_Lock_1700 AsyncCallback errCode : ' +
            JSON.stringify(err) + " data: " + JSON.stringify(data));
            expect(err.code != 0).assertTrue();
            done();
        })
    })

    /*
     * @tc.number  SUB_AA_OpenHarmony_Lock_1600
     * @tc.name    Lock function exception parameter _string type number
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('SUB_AA_OpenHarmony_Lock_1600', 0, async function (done) {
        console.info("---------------logMessage SUB_AA_OpenHarmony_Lock_1600------------")
        missionManager.lockMission("12", (err, data) => {
            console.log('SUB_AA_OpenHarmony_Lock_1600 AsyncCallback errCode : ' +
            JSON.stringify(err) + " data: " + JSON.stringify(data));
            expect(err.code != 0).assertTrue();
            done();
        })
    })

    /*
     * @tc.number  SUB_AA_OpenHarmony_Lock_1400
     * @tc.name    Lock function exception parameter _undefined
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('SUB_AA_OpenHarmony_Lock_1400', 0, async function (done) {
        console.info("---------------logMessage SUB_AA_OpenHarmony_Lock_1400-------------")
        missionManager.lockMission(undefined, (err, data) => {
            console.log('SUB_AA_OpenHarmony_Lock_1400 AsyncCallback errCode : ' +
            JSON.stringify(err) + " data: " + JSON.stringify(data));
            expect(err.code != 0).assertTrue();
            done();
        })
    })

    /*
     * @tc.number  SUB_AA_OpenHarmony_Lock_2200
     * @tc.name    Unlock function abnormal parameter_-1
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('SUB_AA_OpenHarmony_Lock_2200', 0, async function (done) {
        console.info("------------------logMessage SUB_AA_OpenHarmony_Lock_2200-------------")
        missionManager.unlockMission(-1, (err, data) => {
            console.log('SUB_AA_OpenHarmony_Lock_2200 AsyncCallback errCode : ' +
            JSON.stringify(err) + " data: " + JSON.stringify(data));
            expect(err.code != 0).assertTrue();
            done();
        })
    })

    /*
     * @tc.number  SUB_AA_OpenHarmony_Lock_2500
     * @tc.name    Unlock function abnormal parameter _number decimal 0.2
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('SUB_AA_OpenHarmony_Lock_2500', 0, async function (done) {
        console.info("------------------logMessage SUB_AA_OpenHarmony_Lock_2500--------------")
        missionManager.unlockMission(0.2, (err, data) => {
            console.log('SUB_AA_OpenHarmony_Lock_2500 AsyncCallback errCode : ' +
            JSON.stringify(err) + " data: " + JSON.stringify(data));
            expect(err.code != 0).assertTrue();
            done();
        })
    })

    /*
     * @tc.number  SUB_AA_OpenHarmony_Lock_2400
     * @tc.name    Unlock function exception parameter _string type non-numeric
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('SUB_AA_OpenHarmony_Lock_2400', 0, async function (done) {
        console.info("------------------logMessage SUB_AA_OpenHarmony_Lock_2400-----------")
        missionManager.unlockMission("a", (err, data) => {
            console.log('SUB_AA_OpenHarmony_Lock_2400 AsyncCallback errCode : ' +
            JSON.stringify(err) + " data: " + JSON.stringify(data));
            expect(err.code != 0).assertTrue();
            done();
        })
    })

        /*
         * @tc.number  SUB_AA_OpenHarmony_Lock_2300
         * @tc.name    Unlock function exception parameter _string type number
         * @tc.desc    Function test
         * @tc.level   0
         */
        it('SUB_AA_OpenHarmony_Lock_2300', 0, async function (done) {
            console.info("------------------logMessage SUB_AA_OpenHarmony_Lock_2300--------------")
            missionManager.unlockMission("123", (err, data) => {
                console.log('SUB_AA_OpenHarmony_Lock_2300 AsyncCallback errCode : ' +
                JSON.stringify(err) + " data: " + JSON.stringify(data));
                expect(err.code != 0).assertTrue();
                done();
            })
        })

        /*
         * @tc.number  SUB_AA_OpenHarmony_Lock_2100
         * @tc.name    Unlock function exception parameter _undefined
         * @tc.desc    Function test
         * @tc.level   0
         */
        it('SUB_AA_OpenHarmony_Lock_2100', 0, async function (done) {
            console.info("------------------logMessage SUB_AA_OpenHarmony_Lock_2100--------------")
            missionManager.unlockMission(undefined, (err, data) => {
                console.log('SUB_AA_OpenHarmony_Lock_2100 AsyncCallback errCode : ' +
                JSON.stringify(err) + " data: " + JSON.stringify(data));
                expect(err.code != 0).assertTrue();
                done();
            })
        })

        /*
         * @tc.number  SUB_AA_OpenHarmony_Lock_2600
         * @tc.name    Unlock function abnormal parameter _number decimal 1.2
         * @tc.desc    Function test
         * @tc.level   0
         */
        it('SUB_AA_OpenHarmony_Lock_2600', 0, async function (done) {
            console.log("------------SUB_AA_OpenHarmony_Lock_2600-------------");
            var missionId = 1.2;
            setTimeout(() => {
                missionManager.unlockMission(missionId).then((data) => {
                    console.log("SUB_AA_OpenHarmony_Lock_2600 unlockMission data: " +
                    JSON.stringify(data));

                }).catch((error) => {
                    console.log("SUB_AA_OpenHarmony_Lock_2600 unlockMission error: " +
                    JSON.stringify(error));
                    expect(error.code != 0).assertTrue();
                    done();
                })
            }, 1000)
            console.log("------------end SUB_AA_OpenHarmony_Lock_2600-------------");
        })

        /*
         * @tc.number  SUB_AA_OpenHarmony_Lock_2000
         * @tc.name    Repeat lock
         * @tc.desc    Function test
         * @tc.level   0
         */
        it('SUB_AA_OpenHarmony_Lock_2000', 0, async function (done) {
            console.log("------------start SUB_AA_OpenHarmony_Lock_2000-------------");
            for (var i = 0;i < 2; i++) {
                missionManager.lockMission(1.2, (error, data) => {
                    console.log("SUB_AA_OpenHarmony_Lock_0900, twosgetMissionInfos:" +
                    JSON.stringify(error) + ", " + JSON.stringify(data));
                    expect(data == undefined).assertTrue();
                })
            }
            done();
        })

        /*
         * @tc.number  SUB_AA_OpenHarmony_Lock_2700
         * @tc.name    Repeat unlock
         * @tc.desc    Function test
         * @tc.level   0
         */
        it('SUB_AA_OpenHarmony_Lock_2700', 0, async function (done) {
            var missionId = 1.2
            console.log("------------start SUB_AA_OpenHarmony_Lock_2700-------------");
            missionManager.lockMission(missionId, (error, data) => {
                console.log("lockMission info" + JSON.stringify(data));
            })
            missionManager.unlockMission(missionId, (error, data) => {
                for (var i = 0;i < 2; i++) {
                    missionManager.unlockMission(missionId, (error, data1) => {
                        console.log("unlockMission info" + JSON.stringify(data1));
                        expect(data1 == undefined);
                    })
                }
            })
            done();
        })

        /**
         * @tc.number: SUB_AA_OpenHarmony_Lock_0100
         * @tc.name: Task lock function
         * @tc.desc: Check lockstate after lock mission
         */
        it('SUB_AA_OpenHarmony_Lock_0100', 0, async function (done) {
            console.info('===============SUB_AA_OpenHarmony_Lock_0100 step1 start==========startActivity=====');
            var SUBAAOpenHarmonyLock0100 = {
                events: ["Ability1_onShow",
                "Ability2_onShow",
                "Ability3_onShow",
                "Ability4_onShow",
                "Ability1_onCreate",
                "Ability2_onCreate",
                "Ability3_onCreate",
                "Ability4_onCreate",
                "Ability1_onHide",
                "Ability2_onHide",
                "Ability3_onHide"]
            };
            var Subscriber;
            let id;
            var mydata = [];

            function SubscribeCallBack(err, data) {
                console.debug("beforeAll====>Subscribe CallBack data:====>" + JSON.stringify(data));
                switch (data.event) {
                    case "Ability1_onCreate":
                        console.log("beforeAll Ability1_onCreate");
                        mydata[0] = "Ability1_onCreate";
                        break;
                    case "Ability2_onCreate":
                        console.log("beforeAll Ability2_onCreate");
                        mydata[1] = "Ability2_onCreate";
                        break;
                    case "Ability3_onCreate":
                        console.log("beforeAll Ability3_onCreate");
                        mydata[2] = "Ability3_onCreate";
                        break;
                    case "Ability4_onCreate":
                        console.log("beforeAll Ability4_onCreate");
                        mydata[3] = "Ability4_onCreate";
                        break;
                    case "Ability1_onShow":
                        console.log("beforeAll Ability1_onShow");
                        mydata[4] = "Ability1_onShow";
                        break;
                    case "Ability2_onShow":
                        console.log("beforeAll Ability2_onShow");
                        mydata[5] = "Ability2_onShow";
                        break;
                    case "Ability3_onShow":
                        console.log("beforeAll Ability3_onShow");
                        mydata[6] = "Ability3_onShow";
                        break;
                    case "Ability4_onShow":
                        console.log("beforeAll Ability4_onShow");
                        mydata[7] = "Ability4_onShow";
                        break;
                    case "Ability1_onHide":
                        console.log("beforeAll Ability1_onHide");
                        mydata[8] = "Ability1_onHide";
                        break;
                    case "Ability2_onHide":
                        console.log("beforeAll Ability2_onHide");
                        mydata[9] = "Ability2_onHide";
                        break;
                    case "Ability3_onHide":
                        console.log("beforeAll Ability3_onHide");
                        mydata[10] = "Ability3_onHide";
                        break;
                    default:
                }
                console.log("beforeAll====" + JSON.stringify(mydata) + "====" + mydata.length);
                if (mydata.length == 11) {
                    clearTimeout(id);
                    commonEvent.unsubscribe(Subscriber, UnSubscribeCallback);
                }
            };
            commonEvent.createSubscriber(SUBAAOpenHarmonyLock0100).then(async (data) => {
                console.debug("SUB_AA_OpenHarmony_Lock_0400====>Create Subscriber====>");
                Subscriber = data;
                console.log("SUB_AA_OpenHarmony_Lock_0400 Subscriber " + JSON.stringify(Subscriber));
                await commonEvent.subscribe(Subscriber, SubscribeCallBack);
            }).catch((error) => {
                console.error('Operation failed. Cause: ' + JSON.stringify(error));
                done();
            });

            function UnSubscribeCallback() {
                console.debug("====>UnSubscribe CallBack====>");
                getMissionInfosLock0100One();
            }

            function timeout() {
                expect().assertFail();
                done();
                console.debug('SUB_AA_OpenHarmony_Lock_0100=====timeout======');
                commonEvent.unsubscribe(Subscriber, UnSubscribeCallback);
            }

            id = setTimeout(timeout, START_ABILITY_TIMEOUT);

            abilityFeatureAbility.startAbility({ want: {
                bundleName: "com.example.lock",
                abilityName: "com.example.lock.Ability1"
            } })
                .then((data) => {
                    console.info('SUB_AA_OpenHarmony_Lock_0100 startAbility1: ' + JSON.stringify(data));
                    console.info('SUB_AA_OpenHarmony_Lock_0100 - startAbility2 start: ')
                    abilityFeatureAbility.startAbility({ "want": {
                        bundleName: "com.example.lock",
                        abilityName: "com.example.lock.Ability2"
                    } }, (error, data) => {
                        console.log('SUB_AA_OpenHarmony_Lock_0100 - startAbility2: ' + JSON.stringify(error))
                        console.info('SUB_AA_OpenHarmony_Lock_0100 - startAbility3 start');
                        abilityFeatureAbility.startAbility({ "want": {
                            bundleName: "com.example.lock",
                            abilityName: "com.example.lock.Ability3"
                        } }, (error, data) => {
                            console.log('SUB_AA_OpenHarmony_Lock_0100 - startAbility3: ' + JSON.stringify(error))
                            console.info('SUB_AA_OpenHarmony_Lock_0100 - startAbility4 start');
                            abilityFeatureAbility.startAbility({ "want": {
                                bundleName: "com.example.lock",
                                abilityName: "com.example.lock.Ability4"
                            } }, (error, data) => {
                                console.log('SUB_AA_OpenHarmony_Lock_0100 - startAbility4: ' + JSON.stringify(error))
                            });
                        });
                    });
                }).catch((error) => {
                console.error('SUB_AA_OpenHarmony_Lock_0100 startAbility1 error ' + JSON.stringify(error));
            })
            setTimeout(function () {
                done();
            }, 5000);
        })

        function getMissionInfosLock0100One(done) {
            console.info('===============SUB_AA_OpenHarmony_Lock_0100 step2 start==========getMissionInfosOne=====');
            missionArray0100 = [];
            missionManager.getMissionInfos('', 500, (err, data) => {
                console.log('SUB_AA_OpenHarmony_Lock_0100 getMissionInfo err: '
                + JSON.stringify(err) + " data: " + JSON.stringify(data));
                expect(err.code == 0).assertTrue();
                var i;
                for (i = 0; i < data.length; i++) {
                    console.info('SUB_AA_OpenHarmony_Lock_0100 ###' + JSON.stringify(data[i]));
                    expect(data[i].lockedState == false).assertTrue();
                    if (data[i].want.abilityName == 'com.example.lock.Ability1' && data[i].runningState == 0) {
                        missionArray0100[0] = new Object();
                        missionArray0100[0].id = data[i].missionId;
                        missionArray0100[0].name = data[i].want.abilityName;
                        console.info('SUB_AA_OpenHarmony_Lock_0100 bbb' + JSON.stringify(missionArray0100));
                    }
                    if (data[i].want.abilityName == 'com.example.lock.Ability2' && data[i].runningState == 0) {
                        missionArray0100[1] = new Object();
                        missionArray0100[1].id = data[i].missionId;
                        missionArray0100[1].name = data[i].want.abilityName;
                        console.info('SUB_AA_OpenHarmony_Lock_0100 bbb' + JSON.stringify(missionArray0100));
                    }
                    if (data[i].want.abilityName == 'com.example.lock.Ability3' && data[i].runningState == 0) {
                        missionArray0100[2] = new Object();
                        missionArray0100[2].id = data[i].missionId;
                        missionArray0100[2].name = data[i].want.abilityName;
                        console.info('SUB_AA_OpenHarmony_Lock_0100 bbb' + JSON.stringify(missionArray0100));
                    }
                    if (data[i].want.abilityName == 'com.example.lock.Ability4' && data[i].runningState == 0) {
                        missionArray0100[3] = new Object();
                        missionArray0100[3].id = data[i].missionId;
                        missionArray0100[3].name = data[i].want.abilityName;
                        console.info('SUB_AA_OpenHarmony_Lock_0100 bbb' + JSON.stringify(missionArray0100));
                    }
                }
                console.log("getMissionInfosOne" + JSON.stringify(missionArray0100));
                expect(missionArray0100.length == 4).assertTrue();
                lockMissionLock0100(done);
            })
        }

        function lockMissionLock0100(done) {
            console.info('===============SUB_AA_OpenHarmony_Lock_0100 step3 start==========lockMission=====');
            console.log('SUB_AA_OpenHarmony_Lock_0100 missionArray0100' + JSON.stringify(missionArray0100));
            var i;
            for (i = 0; i < missionArray0100.length; i++) {
                if (missionArray0100[i].name == 'com.example.lock.Ability3') {
                    console.log('SUB_AA_OpenHarmony_Lock_0100 ' + JSON.stringify(missionArray0100[i].id));
                    missionManager.lockMission(missionArray0100[i].id, (err, data) => {
                        console.log('SUB_AA_OpenHarmony_Lock_0100 lockMission err:'
                        + JSON.stringify(err) + " data: " + JSON.stringify(data));
                        expect(data == undefined).assertTrue();
                        getMissionInfosLock0100Two(done);
                    })
                }
            }
        }

        function getMissionInfosLock0100Two(done) {
            console.info('===============SUB_AA_OpenHarmony_Lock_0100 step4 start==========getMissionInfosTwo=====');
            missionArray0100 = [];
            missionManager.getMissionInfos('', 500, (err, data) => {
                console.log('SUB_AA_OpenHarmony_Lock_0100 getMissionInfo err: '
                + JSON.stringify(err) + " data: " + JSON.stringify(data));
                expect(err.code == 0).assertTrue();
                var i;
                for (i = 0; i < data.length; i++) {
                    if (data[i].want.abilityName == 'com.example.lock.Ability1' && data[i].runningState == 0) {
                        missionArray0100[0] = new Object();
                        missionArray0100[0].id = data[i].missionId;
                        missionArray0100[0].name = data[i].want.abilityName;
                        expect(data[i].lockedState == false).assertTrue();
                    }
                    if (data[i].want.abilityName == 'com.example.lock.Ability2' && data[i].runningState == 0) {
                        missionArray0100[1] = new Object();
                        missionArray0100[1].id = data[i].missionId;
                        missionArray0100[1].name = data[i].want.abilityName;
                        expect(data[i].lockedState == false).assertTrue();
                    }
                    if (data[i].want.abilityName == 'com.example.lock.Ability3' && data[i].runningState == 0) {
                        missionArray0100[2] = new Object();
                        missionArray0100[2].id = data[i].missionId;
                        missionArray0100[2].name = data[i].want.abilityName;
                        expect(data[i].lockedState == true).assertTrue();
                    }
                    if (data[i].want.abilityName == 'com.example.lock.Ability4' && data[i].runningState == 0) {
                        missionArray0100[3] = new Object();
                        missionArray0100[3].id = data[i].missionId;
                        missionArray0100[3].name = data[i].want.abilityName;
                        expect(data[i].lockedState == false).assertTrue();
                    }
                }
                console.log("###SUB_AA_OpenHarmony_Lock_0100" + JSON.stringify(missionArray0100));
                expect(missionArray0100.length == 4).assertTrue();
                //done();
                tearDown(missionArray0100,done);
            })
        }

        function tearDown(missionArray, done) {
        console.log('===============SUB_AA_OpenHarmony_Lock tearDown start===========');
        console.info('SUB_AA_OpenHarmony_Lock TearDown: ' + JSON.stringify(missionArray));
        var i;
        for (i = 0; i < missionArray.length; i++) {
            missionManager.unlockMission(missionArray[i].id, (err, data) => {
                console.log('SUB_AAOpenHarmonyLock0100 unlockMission err:' +
                    JSON.stringify(err) + " data: " + JSON.stringify(data));
                expect(data == undefined).assertTrue();
                console.info('SUB_AA_OpenHarmony_Lock start clearMission');
                missionManager.clearMission(missionArray[i].id, (err, data) => {
                    console.log('SUB_AA_OpenHarmony_Lock clearMission err:' +
                        JSON.stringify(err) + " data: " + JSON.stringify(data));
                    done();
                });
            });
        }
    }

        /**
         * @tc.number: SUB_AA_OpenHarmony_Lock_0200
         * @tc.name: Task unlock function
         * @tc.desc: Check the return lockstate of the interface after unlock
         */
        it('SUB_AA_OpenHarmony_Lock_0200', 0, async function (done) {
            console.info('===============SUB_AA_OpenHarmony_Lock_0200 step1 start==========startActivity=====');
            abilityFeatureAbility.startAbility({ want: {
                bundleName: "com.example.lock",
                abilityName: "com.example.lock.Ability1"
            } })
                .then((data) => {
                    console.info('SUB_AA_OpenHarmony_Lock_0200 startAbility1: ' + JSON.stringify(data));
                    console.info('SUB_AA_OpenHarmony_Lock_0200 - startAbility2 start: ')
                    abilityFeatureAbility.startAbility({ "want": {
                        bundleName: "com.example.lock",
                        abilityName: "com.example.lock.Ability2"
                    } }, (error, data) => {
                        console.log('SUB_AA_OpenHarmony_Lock_0200 - startAbility2: ' + JSON.stringify(error))
                        console.info('SUB_AA_OpenHarmony_Lock_0200 - startAbility3 start');
                        abilityFeatureAbility.startAbility({ "want": {
                            bundleName: "com.example.lock",
                            abilityName: "com.example.lock.Ability3"
                        } }, (error, data) => {
                            console.log('SUB_AA_OpenHarmony_Lock_0200 - startAbility3: ' + JSON.stringify(error))
                            console.info('SUB_AA_OpenHarmony_Lock_0200 - startAbility4 start');
                            abilityFeatureAbility.startAbility({ "want": {
                                bundleName: "com.example.lock",
                                abilityName: "com.example.lock.Ability4"
                            } }, (error, data) => {
                                console.log('SUB_AA_OpenHarmony_Lock_0200 - startAbility4: ' + JSON.stringify(error))
                                getMissionInfos1Lock0200(done);
                            });
                        });
                    });
                }).catch((error) => {
                console.error('SUB_AA_OpenHarmony_Lock_0200 startAbility1 error ' + JSON.stringify(error));
                done();
            })

            setTimeout(function () {
                done();
            }, 5000);
        })

        function getMissionInfos1Lock0200(done) {
            console.info('===============SUB_AA_OpenHarmony_Lock_0200 step2 start==========getMissionInfos1=====');
            missionArray0200 = [];
            missionManager.getMissionInfos('', 500, (err, data) => {
                console.log('SUB_AA_OpenHarmony_Lock_0200 getMissionInfo err: '
                + JSON.stringify(err) + " data: " + JSON.stringify(data));
                expect(err.code == 0).assertTrue();
                var i;
                for (i = 0; i < data.length; i++) {
                    //                console.log("getMissionInfos return1 " + JSON.stringify(data[i]));
                    if (data[i].want.abilityName == 'com.example.lock.Ability1' && data[i].runningState == 0) {
                        missionArray0200[0] = new Object();
                        missionArray0200[0].id = data[i].missionId;
                        missionArray0200[0].name = data[i].want.abilityName;
                    }
                    if (data[i].want.abilityName == 'com.example.lock.Ability2' && data[i].runningState == 0) {
                        missionArray0200[1] = new Object();
                        missionArray0200[1].id = data[i].missionId;
                        missionArray0200[1].name = data[i].want.abilityName;
                    }
                    if (data[i].want.abilityName == 'com.example.lock.Ability3' && data[i].runningState == 0) {
                        missionArray0200[2] = new Object();
                        missionArray0200[2].id = data[i].missionId;
                        missionArray0200[2].name = data[i].want.abilityName;
                    }
                    if (data[i].want.abilityName == 'com.example.lock.Ability4' && data[i].runningState == 0) {
                        missionArray0200[3] = new Object();
                        missionArray0200[3].id = data[i].missionId;
                        missionArray0200[3].name = data[i].want.abilityName;
                    }
                }
                console.log("###" + JSON.stringify(missionArray0200));
                expect(missionArray0200.length == 4).assertTrue();
                lockMissionLock0200(done);
            })
        }

        function lockMissionLock0200(done) {
            console.info('===============SUB_AA_OpenHarmony_Lock_0200 step3 start==========lockMission=====');
            console.log('SUB_AA_OpenHarmony_Lock_0200 missionArray' + JSON.stringify(missionArray0200));
            var i;
            var j = 0;
            for (i = 0; i < missionArray0200.length; i++) {
                if (missionArray0200[i].name == 'com.example.lock.Ability2' ||
                missionArray0200[i].name == 'com.example.lock.Ability3') {
                    console.log('SUB_AA_OpenHarmony_Lock_0200 ' + JSON.stringify(missionArray0200[i].id));
                    missionManager.lockMission(missionArray0200[i].id, (err, data) => {
                        j++;
                        console.log('SUB_AA_OpenHarmony_Lock_0300 lockMission err:'
                        + JSON.stringify(err) + " data: " + JSON.stringify(data));
                        expect(data == undefined).assertTrue();
                        if (j == 2) {
                            getMissionInfos2Lock0200(done);
                        }
                    })
                }
            }
        }

        function getMissionInfos2Lock0200(done) {
            console.info('===============SUB_AA_OpenHarmony_Lock_0200 step4 start==========getMissionInfos2=====');
            missionArray0200 = [];
            missionManager.getMissionInfos('', 500, (err, data) => {
                console.log('SUB_AA_OpenHarmony_Lock_0200 getMissionInfo err: '
                + JSON.stringify(err) + " data: " + JSON.stringify(data));
                expect(err.code == 0).assertTrue();
                var i;
                for (i = 0; i < data.length; i++) {
                    //                console.log("getMissionInfos return2 -------1" + JSON.stringify(data[i]));
                    if (data[i].want.abilityName == 'com.example.lock.Ability1' && data[i].runningState == 0) {
                        missionArray0200[0] = new Object();
                        missionArray0200[0].id = data[i].missionId;
                        missionArray0200[0].name = data[i].want.abilityName;
                        expect(data[i].lockedState == false).assertTrue();
                    }
                    //                console.log("getMissionInfos return2 ---------2");
                    if (data[i].want.abilityName == 'com.example.lock.Ability2' && data[i].runningState == 0) {
                        missionArray0200[1] = new Object();
                        missionArray0200[1].id = data[i].missionId;
                        missionArray0200[1].name = data[i].want.abilityName;
                        expect(data[i].lockedState == true).assertTrue();
                    }
                    //                console.log("getMissionInfos return2 ---------3");
                    if (data[i].want.abilityName == 'com.example.lock.Ability3' && data[i].runningState == 0) {
                        missionArray0200[2] = new Object();
                        missionArray0200[2].id = data[i].missionId;
                        missionArray0200[2].name = data[i].want.abilityName;
                        expect(data[i].lockedState == true).assertTrue();
                    }
                    //                console.log("getMissionInfos return2 ---------4");
                    if (data[i].want.abilityName == 'com.example.lock.Ability4' && data[i].runningState == 0) {
                        missionArray0200[3] = new Object();
                        missionArray0200[3].id = data[i].missionId;
                        missionArray0200[3].name = data[i].want.abilityName;
                        expect(data[i].lockedState == false).assertTrue();
                        //                    console.log("aaaaaaaaaaaaaaaaaaaa");
                        //                    expect(data[i].lockedState).assertEquals(false);
                    }
                }
                console.log("###getMissionInfos2" + JSON.stringify(missionArray0200));
                expect(missionArray0200.length == 4).assertTrue();
                unlockMissionLock0200("com.example.lock.Ability3",done);
            })
        }

        function getMissionInfos3Lock0200(done) {
            console.info('===============SUB_AA_OpenHarmony_Lock_0200 step6 start==========getMissionInfos3=====');
            //        missionArray = [];
            missionManager.getMissionInfos('', 500, (err, data) => {
                console.log('SUB_AA_OpenHarmony_Lock_0200 getMissionInfo err: '
                + JSON.stringify(err) + " data: " + JSON.stringify(data));
                expect(err.code == 0).assertTrue();
                var i;
                for (i = 0; i < data.length; i++) {
                    console.log("getMissionInfos return3 " + JSON.stringify(data[i]));
                    if (data[i].want.abilityName == 'com.example.lock.Ability1' && data[i].runningState == 0 &&
                    data[i].missionId == missionArray0200[0].id) {
                        missionArray0200[0] = new Object();
                        missionArray0200[0].id = data[i].missionId;
                        missionArray0200[0].name = data[i].want.abilityName;
                        console.log("com.example.lock.Ability1" + JSON.stringify(data[i].lockedState));
                        expect(data[i].lockedState == false).assertTrue();
                    }
                    if (data[i].want.abilityName == 'com.example.lock.Ability2' && data[i].runningState == 0 &&
                    data[i].missionId == missionArray0200[1].id) {
                        missionArray0200[1] = new Object();
                        missionArray0200[1].id = data[i].missionId;
                        missionArray0200[1].name = data[i].want.abilityName;
                        console.log("com.example.lock.Ability2" + JSON.stringify(data[i].lockedState));
                        expect(data[i].lockedState == true).assertTrue();
                    }
                    if (data[i].want.abilityName == 'com.example.lock.Ability3' && data[i].runningState == 0 &&
                    data[i].missionId == missionArray0200[2].id) {
                        missionArray0200[2] = new Object();
                        missionArray0200[2].id = data[i].missionId;
                        missionArray0200[2].name = data[i].want.abilityName;
                        console.log("com.example.lock.Ability3" + JSON.stringify(data[i].lockedState));
                        expect(data[i].lockedState == false).assertTrue();
                    }
                    if (data[i].want.abilityName == 'com.example.lock.Ability4' && data[i].runningState == 0 &&
                    data[i].missionId == missionArray0200[3].id) {
                        missionArray0200[3] = new Object();
                        missionArray0200[3].id = data[i].missionId;
                        missionArray0200[3].name = data[i].want.abilityName;
                        console.log("com.example.lock.Ability4" + JSON.stringify(data[i].lockedState));
                        expect(data[i].lockedState == false).assertTrue();
                    }
                }
                console.log("###" + JSON.stringify(missionArray0200));
                expect(missionArray0200.length == 4).assertTrue();
                //done();
                tearDown(missionArray0200,done);
            })
        }

        function unlockMissionLock0200(name,done) {
            console.info('===============SUB_AA_OpenHarmony_Lock_0200 step5 start==========unlockMission=====');
            console.log('SUB_AA_OpenHarmony_Lock_0400 missionArray' + JSON.stringify(missionArray0200));
            var i;
            for (i = 0; i < missionArray0200.length; i++) {
                if (missionArray0200[i].name == name) {
                    console.log('SUB_AA_OpenHarmony_Lock_0400 ' + JSON.stringify(missionArray0200[i].id));
                    missionManager.unlockMission(missionArray0200[i].id, (err, data) => {
                        console.log('SUB_AA_OpenHarmony_Lock_0400 unlockMission err:'
                        + JSON.stringify(err) + " data: " + JSON.stringify(data));
                        expect(data == undefined).assertTrue();
                        getMissionInfos3Lock0200(done);
                    })
                }
            }
        }

        /**
         * @tc.number: SUB_AA_OpenHarmony_Lock_0300
         * @tc.name: Switch mission to front after lock
         * @tc.desc: The lock does not affect the fact that the mission is switched to the front desk
         */
        it('SUB_AA_OpenHarmony_Lock_0300', 0, async function (done) {
            console.info('=======SUB_AA_OpenHarmony_Lock_0300 step1 start=====startActivity=====');
            abilityFeatureAbility.startAbility({ want: {
                bundleName: "com.example.lock",
                abilityName: "com.example.lock.Ability1"
            } })
                .then((data) => {
                    console.info('SUB_AA_OpenHarmony_Lock_0300 startAbility1: ' +
                    JSON.stringify(data));
                    console.info('SUB_AA_OpenHarmony_Lock_0300 - startAbility2 start: ')
                    setTimeout(() => {
                        abilityFeatureAbility.startAbility({ "want": {
                            bundleName: "com.example.lock",
                            abilityName: "com.example.lock.Ability2"
                        } }, (error, data) => {
                            console.log('SUB_AA_OpenHarmony_Lock_0300 - startAbility2: ' +
                            JSON.stringify(error) + ", " + JSON.stringify(data))
                            setTimeout(() => {
                                console.info('SUB_AA_OpenHarmony_Lock_0300 - startAbility3 start');
                                abilityFeatureAbility.startAbility({ "want": {
                                    bundleName: "com.example.lock",
                                    abilityName: "com.example.lock.Ability3"
                                } }, (error, data) => {
                                    console.log('SUB_AA_OpenHarmony_Lock_0300 - startAbility3: ' +
                                    JSON.stringify(error) + ", " + JSON.stringify(data))
                                    setTimeout(() => {
                                        console.info('SUB_AA_OpenHarmony_Lock_0300 - startAbility4 start');
                                        abilityFeatureAbility.startAbility({ "want": {
                                            bundleName: "com.example.lock",
                                            abilityName: "com.example.lock.Ability4"
                                        } }, (error, data) => {
                                            console.log('SUB_AA_OpenHarmony_Lock_0300 - startAbility4: ' +
                                            JSON.stringify(error) + ", " + JSON.stringify(data))
                                            getMissionInfosOneLock0300(done);
                                        });
                                    }, 500);
                                });
                            }, 500);
                        });
                    }, 500);
                }).catch((error) => {
                console.error('SUB_AA_OpenHarmony_Lock_0300 startAbility1 error ' +
                JSON.stringify(error));
                done();
            })
            setTimeout(function () {
                done();
            }, 5000);
        })

        function getMissionInfosOneLock0300(done) {
            console.info('===============SUB_AA_OpenHarmony_Lock_0300 step2 start==========getMissionInfosOne=====');
            missionArray0300 = [];
            missionManager.getMissionInfos('', 500, (err, data) => {
                console.log('SUB_AA_OpenHarmony_Lock_0300 getMissionInfo err: '
                + JSON.stringify(err) + " data: " + JSON.stringify(data));
                expect(err.code == 0).assertTrue();
                var i;
                for (i = 0; i < data.length; i++) {
                    if (data[i].want.abilityName == 'com.example.lock.Ability1' && data[i].runningState == 0) {
                        missionArray0300[0] = new Object();
                        missionArray0300[0].id = data[i].missionId;
                        missionArray0300[0].name = data[i].want.abilityName;
                    }
                    if (data[i].want.abilityName == 'com.example.lock.Ability2' && data[i].runningState == 0) {
                        missionArray0300[1] = new Object();
                        missionArray0300[1].id = data[i].missionId;
                        missionArray0300[1].name = data[i].want.abilityName;
                    }
                    if (data[i].want.abilityName == 'com.example.lock.Ability3' && data[i].runningState == 0) {
                        missionArray0300[2] = new Object();
                        missionArray0300[2].id = data[i].missionId;
                        missionArray0300[2].name = data[i].want.abilityName;
                    }
                    if (data[i].want.abilityName == 'com.example.lock.Ability4' && data[i].runningState == 0) {
                        missionArray0300[3] = new Object();
                        missionArray0300[3].id = data[i].missionId;
                        missionArray0300[3].name = data[i].want.abilityName;
                    }
                }
                console.log("###" + JSON.stringify(missionArray0300));
                expect(missionArray0300.length == 4).assertTrue();
                lockMissionLock0300(done);
            })
        }

        function lockMissionLock0300(done) {
            console.info('===============SUB_AA_OpenHarmony_Lock_0300 step3 start==========lockMission=====');
            console.log('SUB_AA_OpenHarmony_Lock_0300 missionArray' + JSON.stringify(missionArray0300));
            var i;
            var j = 0;
            for (i = 0; i < missionArray0300.length; i++) {
                if (missionArray0300[i].name == 'com.example.lock.Ability2' ||
                missionArray0300[i].name == 'com.example.lock.Ability3') {
                    console.log('SUB_AA_OpenHarmony_Lock_0300 ' + JSON.stringify(missionArray0300[i].id));
                    missionManager.lockMission(missionArray0300[i].id, (err, data) => {
                        j++;
                        console.log('SUB_AA_OpenHarmony_Lock_0300 lockMission err:'
                        + JSON.stringify(err) + " data: " + JSON.stringify(data));
                        expect(data == undefined).assertTrue();
                        if (j == 2) {
                            moveMissionToFrontLock0300(done);
                        }
                    })
                }
            }
        }

        function moveMissionToFrontLock0300(done) {
            console.info('==========SUB_AA_OpenHarmony_Lock_0300 step4 start=======moveMissionToFront=====');
            console.log('moveMissionToFront ' + JSON.stringify(missionArray0300));
            var myEvents = {
                events:
                [
                    "Ability3_onShow",
                ]
            };
            var Subscriber;
            let id;

            function SubscribeCallBack(err, data) {
                console.debug("beforeAll====>Subscribe CallBack data:====>" + JSON.stringify(data));
                switch (data.event) {
                    case "Ability3_onShow":
                        console.log("Ability3_onShow");
                        data[0] = "Ability3_onShow";
                        clearTimeout(id);
                        commonEvent.unsubscribe(Subscriber, UnSubscribeCallback);
                        break;
                    default:
                }
            };
            commonEvent.createSubscriber(myEvents).then(async (data) => {
                console.debug("SUB_AA_OpenHarmony_Lock_0300====>Create Subscriber====>");
                Subscriber = data;
                console.log("SUB_AA_OpenHarmony_Lock_0300 Subscriber " + JSON.stringify(Subscriber));
                await commonEvent.subscribe(Subscriber, SubscribeCallBack);
            }).catch((error) => {
                console.error('Operation failed. Cause: ' + JSON.stringify(error));
                done();
            });

            function UnSubscribeCallback(done) {
                console.debug("====>UnSubscribe CallBack====>");
    //            done();
                tearDown(missionArray0300,done);
            }

            function timeout() {
                expect().assertFail();
                console.debug('SUB_AA_OpenHarmony_Lock_0300===moveMissionToFront==timeout======');
                commonEvent.unsubscribe(Subscriber, UnSubscribeCallback);
            }

            id = setTimeout(timeout, START_ABILITY_TIMEOUT);
            var i;
            missionManager.moveMissionToFront(missionArray0300[2].id, (err, data) => {
                console.log('moveMissionToFront err: '
                + JSON.stringify(err) + " data: " + JSON.stringify(data));
                expect(err.code == 0).assertTrue();
            })
        }

        /**
         * @tc.number: SUB_AA_OpenHarmony_Lock_0400
         * @tc.name: Switch mission to front after unlock
         * @tc.desc: Unlocking does not affect the switch of the mission to the foreground
         */
        it('SUB_AA_OpenHarmony_Lock_0400', 0, async function (done) {
            console.info('===============SUB_AA_OpenHarmony_Lock_0400 step1 start==========startActivity=====');
            abilityFeatureAbility.startAbility({ want: {
                bundleName: "com.example.lock",
                abilityName: "com.example.lock.Ability1"
            } })
                .then((data) => {
                    console.info('SUB_AA_OpenHarmony_Lock_0400 startAbility1: ' + JSON.stringify(data));
                    console.info('SUB_AA_OpenHarmony_Lock_0400 - startAbility2 start: ')
                    abilityFeatureAbility.startAbility({ "want": {
                        bundleName: "com.example.lock",
                        abilityName: "com.example.lock.Ability2"
                    } }, (error, data) => {
                        console.log('SUB_AA_OpenHarmony_Lock_0400 - startAbility2: ' + JSON.stringify(error))
                        console.info('SUB_AA_OpenHarmony_Lock_0400 - startAbility3 start');
                        abilityFeatureAbility.startAbility({ "want": {
                            bundleName: "com.example.lock",
                            abilityName: "com.example.lock.Ability3"
                        } }, (error, data) => {
                            console.log('SUB_AA_OpenHarmony_Lock_0400 - startAbility3: ' + JSON.stringify(error))
                            console.info('SUB_AA_OpenHarmony_Lock_0400 - startAbility4 start');
                            abilityFeatureAbility.startAbility({ "want": {
                                bundleName: "com.example.lock",
                                abilityName: "com.example.lock.Ability4"
                            } }, (error, data) => {
                                console.log('SUB_AA_OpenHarmony_Lock_0400 - startAbility4: ' + JSON.stringify(error))
                                getMissionInfosLock0400(done);
                            });
                        });
                    });
                }).catch((error) => {
                console.error('SUB_AA_OpenHarmony_Lock_0400 startAbility1 error ' + JSON.stringify(error));
                done();
            })

            setTimeout(function () {
                done();
            }, 5000);
        })

        function getMissionInfosLock0400(done) {
            console.info('===============SUB_AA_OpenHarmony_Lock_0400 step2 start==========getMissionInfos1=====');
            missionArray0400 = [];
            missionManager.getMissionInfos('', 500, (err, data) => {
                console.log('SUB_AA_OpenHarmony_Lock_0400 getMissionInfo err: '
                + JSON.stringify(err) + " data: " + JSON.stringify(data));
                expect(err.code == 0).assertTrue();
                var i;
                for (i = 0; i < data.length; i++) {
                    //                console.log("getMissionInfos return1 " + JSON.stringify(data[i]));
                    if (data[i].want.abilityName == 'com.example.lock.Ability1' && data[i].runningState == 0) {
                        missionArray0400[0] = new Object();
                        missionArray0400[0].id = data[i].missionId;
                        missionArray0400[0].name = data[i].want.abilityName;
                    }
                    if (data[i].want.abilityName == 'com.example.lock.Ability2' && data[i].runningState == 0) {
                        missionArray0400[1] = new Object();
                        missionArray0400[1].id = data[i].missionId;
                        missionArray0400[1].name = data[i].want.abilityName;
                    }
                    if (data[i].want.abilityName == 'com.example.lock.Ability3' && data[i].runningState == 0) {
                        missionArray0400[2] = new Object();
                        missionArray0400[2].id = data[i].missionId;
                        missionArray0400[2].name = data[i].want.abilityName;
                    }
                    if (data[i].want.abilityName == 'com.example.lock.Ability4' && data[i].runningState == 0) {
                        missionArray0400[3] = new Object();
                        missionArray0400[3].id = data[i].missionId;
                        missionArray0400[3].name = data[i].want.abilityName;
                    }
                }
                console.log("###" + JSON.stringify(missionArray0400));
                expect(missionArray0400.length == 4).assertTrue();
                lockMissionLock0400(done);
            })
        }

        function lockMissionLock0400(done) {
            console.info('===============SUB_AA_OpenHarmony_Lock_0400 step3 start==========lockMission=====');
            console.log('SUB_AA_OpenHarmony_Lock_0400 missionArray' + JSON.stringify(missionArray0400));
            var i;
            var j = 0;
            for (i = 0; i < missionArray0400.length; i++) {
                if (missionArray0400[i].name == 'com.example.lock.Ability2' ||
                missionArray0400[i].name == 'com.example.lock.Ability3') {
                    console.log('SUB_AA_OpenHarmony_Lock_0400 ' + JSON.stringify(missionArray0400[i].id));
                    missionManager.lockMission(missionArray0400[i].id, (err, data) => {
                        j++;
                        console.log('SUB_AA_OpenHarmony_Lock_0300 lockMission err:'
                        + JSON.stringify(err) + " data: " + JSON.stringify(data));
                        expect(data == undefined).assertTrue();
                        if (j == 2) {
                            unlockMission0400("com.example.lock.Ability2",done);
                        }
                    })
                }
            }
        }

        function unlockMission0400(name,done) {
            console.info('===============SUB_AA_OpenHarmony_Lock_0400 step4 start==========unlockMission=====');
            console.log('SUB_AA_OpenHarmony_Lock_0400 missionArray' + JSON.stringify(missionArray0400));
            var i;
            for (i = 0; i < missionArray0400.length; i++) {
                if (missionArray0400[i].name == name) {
                    console.log('SUB_AA_OpenHarmony_Lock_0400 ' + JSON.stringify(missionArray0400[i].id));
                    missionManager.unlockMission(missionArray0400[i].id, (err, data) => {
                        console.log('SUB_AA_OpenHarmony_Lock_0400 unlockMission err:'
                        + JSON.stringify(err) + " data: " + JSON.stringify(data));
                        expect(data == undefined).assertTrue();
                        moveMissionToFront0400("com.example.lock.Ability2",done);
                    })
                }
            }
        }

        function moveMissionToFront0400(name,done) {
            console.info('===============SUB_AA_OpenHarmony_Lock_0400 step5 start==========moveMissionToFront=====');
            console.log('moveMissionToFront '+JSON.stringify(missionArray0400));
            var myEvents = {
                events:
                [
                    "Ability2_onShow",
                ]
            };
            var Subscriber;
            let id;

            function SubscribeCallBack(err, data) {
                console.debug("beforeAll====>Subscribe CallBack data:====>" + JSON.stringify(data));
                switch (data.event) {
                    case "Ability2_onShow":
                        console.log("Ability2_onShow");
                        data[0] = "Ability2_onShow";
                        clearTimeout(id);
                        commonEvent.unsubscribe(Subscriber, UnSubscribeCallback);
                        break;
                    default:
                }
            };
            commonEvent.createSubscriber(myEvents).then(async (data) => {
                console.debug("SUB_AA_OpenHarmony_Lock_0400====>Create Subscriber====>");
                Subscriber = data;
                console.log("SUB_AA_OpenHarmony_Lock_0400 Subscriber " + JSON.stringify(Subscriber));
                await commonEvent.subscribe(Subscriber, SubscribeCallBack);
            }).catch((error) => {
                console.error('Operation failed. Cause: ' + JSON.stringify(error));
                done();
            });

            function UnSubscribeCallback() {
                console.debug("====>UnSubscribe CallBack====>");
                //done();
                tearDown(missionArray0400,done);
            }

            function timeout() {
                expect().assertFail();
                console.debug('SUB_AA_OpenHarmony_Lock_0400===moveMissionToFront==timeout======');
                commonEvent.unsubscribe(Subscriber, UnSubscribeCallback);
            }

            id = setTimeout(timeout, START_ABILITY_TIMEOUT);
            var i;
            for (i = 0; i < missionArray0400.length; i++) {
                if (missionArray0400[i].name == name) {
                    missionManager.moveMissionToFront(missionArray0400[i].id, (err, data) => {
                        console.log('moveMissionToFront err: '
                        + JSON.stringify(err) + " data: " + JSON.stringify(data));
                        expect(err.code == 0).assertTrue();
                    })
                }
            }
        }

        /**
         * @tc.number: SUB_AA_OpenHarmony_Lock_0700
         * @tc.name: ClearAllMissions after unlock mission
         * @tc.desc: Once the mission is unlocked, it can be cleared up using clearAllMissions
         */
         it('SUB_AA_OpenHarmony_Lock_0700', 0, async function (done) {
         console.info('=======SUB_AA_OpenHarmony_Lock_0700 step1 start=====startActivity=====');
         abilityFeatureAbility.startAbility({ want: {
             bundleName: "com.example.lock",
             abilityName: "com.example.lock.Ability1"
         } })
             .then((data) => {
                 console.info('SUB_AA_OpenHarmony_Lock_0300 startAbility1: ' +
                 JSON.stringify(data));
                 console.info('SUB_AA_OpenHarmony_Lock_0300 - startAbility2 start: ')
                 setTimeout(() => {
                     abilityFeatureAbility.startAbility({ "want": {
                         bundleName: "com.example.lock",
                         abilityName: "com.example.lock.Ability2"
                     } }, (error, data) => {
                         console.log('SUB_AA_OpenHarmony_Lock_0300 - startAbility2: ' +
                         JSON.stringify(error) + ", " + JSON.stringify(data))
                         setTimeout(() => {
                             console.info('SUB_AA_OpenHarmony_Lock_0300 - startAbility3 start');
                             abilityFeatureAbility.startAbility({ "want": {
                                 bundleName: "com.example.lock",
                                 abilityName: "com.example.lock.Ability3"
                             } }, (error, data) => {
                                 console.log('SUB_AA_OpenHarmony_Lock_0300 - startAbility3: ' +
                                 JSON.stringify(error) + ", " + JSON.stringify(data))
                                 setTimeout(() => {
                                     console.info('SUB_AA_OpenHarmony_Lock_0300 - startAbility4 start');
                                     abilityFeatureAbility.startAbility({ "want": {
                                         bundleName: "com.example.lock",
                                         abilityName: "com.example.lock.Ability4"
                                     } }, (error, data) => {
                                         console.log('SUB_AA_OpenHarmony_Lock_0300 - startAbility4: ' +
                                         JSON.stringify(error) + ", " + JSON.stringify(data))
                                         getMissionInfosOne0700(done);
                                     });
                                 }, 500);
                             });
                         }, 500);
                     });
                 }, 500);
             }).catch((error) => {
             console.error('SUB_AA_OpenHarmony_Lock_0700 startAbility1 error ' +
             JSON.stringify(error));
         })

         setTimeout(() => {
             done();
         }, 5000);
     })

        function getMissionInfosOne0700(done) {
         console.log('=======SUB_AA_OpenHarmony_Lock_0700 step2 start==========getMissionInfosOne=====');
         missionArray0700 = [];
         missionManager.getMissionInfos('', 500, (err, data) => {
             console.log('SUB_AA_OpenHarmony_Lock_0700 getMissionInfo err: '
             + JSON.stringify(err) + " data: " + JSON.stringify(data));
             expect(err.code == 0).assertTrue();
             var i;
             for (i = 0; i < data.length; i++) {
                 console.log("getMissionInfos return1 " + JSON.stringify(data[i]));
                 if (data[i].want.abilityName == 'com.example.lock.Ability1' &&
                 data[i].runningState == 0) {
                     missionArray0700[0] = new Object();
                     missionArray0700[0].id = data[i].missionId;
                     missionArray0700[0].name = data[i].want.abilityName;
                 }
                 if (data[i].want.abilityName == 'com.example.lock.Ability2' &&
                 data[i].runningState == 0) {
                     missionArray0700[1] = new Object();
                     missionArray0700[1].id = data[i].missionId;
                     missionArray0700[1].name = data[i].want.abilityName;
                 }
                 if (data[i].want.abilityName == 'com.example.lock.Ability3' &&
                 data[i].runningState == 0) {
                     missionArray0700[2] = new Object();
                     missionArray0700[2].id = data[i].missionId;
                     missionArray0700[2].name = data[i].want.abilityName;
                 }
                 if (data[i].want.abilityName == 'com.example.lock.Ability4' &&
                 data[i].runningState == 0) {
                     missionArray0700[3] = new Object();
                     missionArray0700[3].id = data[i].missionId;
                     missionArray0700[3].name = data[i].want.abilityName;
                 }
                 if (data[i].want.abilityName == 'com.example.lock.MainAbility' &&
                 data[i].runningState == 0) {
                     missionArray0700[4] = new Object();
                     missionArray0700[4].id = data[i].missionId;
                     missionArray0700[4].name = data[i].want.abilityName;
                 }
             }
             console.log("getMissionInfosOne###" + JSON.stringify(missionArray0700));
             expect(missionArray0700.length == 4).assertTrue();
             lockMission0700(done);
         })
     }

        function lockMission0700(done) {
            console.log('===============SUB_AA_OpenHarmony_Lock_0700 step3 start=====lockMission======');
            console.log('SUB_AA_OpenHarmony_Lock_0700 missionArray' + JSON.stringify(missionArray0700));
            var i;
            var j = 0;
            for (i = 0; i < missionArray0700.length; i++) {
                if (missionArray0700[i].name == 'com.example.lock.Ability1'||
                missionArray0700[i].name == 'com.example.lock.Ability4'||
                missionArray0700[i].name == 'com.example.lock.MainAbility') {
                    console.log('SUB_AA_OpenHarmony_Lock_0700 j===' + j);
                    console.log('SUB_AA_OpenHarmony_Lock_0700 ' + JSON.stringify(missionArray0700[i].id));
                    missionManager.lockMission(missionArray0700[i].id, (err, data) => {
                        console.log('SUB_AA_OpenHarmony_Lock_0700 lockMission err:'
                        + JSON.stringify(err) + " data: " + JSON.stringify(data));
                        expect(data == undefined).assertTrue();
                        j++;
                        if (j == 3) {
                            //getMissionInfosTest();
                            clearAllMission0700(done);
                        }
                    })
                }
            }
        }
     function clearAllMission0700(done) {
         console.log('==========SUB_AA_OpenHarmony_Lock_0700 step4 start=====clearAllMissions======');
         missionManager.clearAllMissions((err, data) => {
             console.log('getMissionInfosTwo clearAllMission err: '
             + JSON.stringify(err) + " data: " + JSON.stringify(data));
             getMissionInfosThree(done);
         });
     }
     function getMissionInfosThree(done) {
         console.log('==========SUB_AA_OpenHarmony_Lock_0700 step5 start=====getMissionInfosThree======');
         missionArray0700 = []
         missionManager.getMissionInfos('', 500, (err, data) => {
             console.log('getMissionInfosTwo getMissionInfo err: '
             + JSON.stringify(err) + " data: " + JSON.stringify(data));
             expect(err.code == 0).assertTrue();
             var i;
             for (i = 0; i < data.length; i++) {
                 console.log("getMissionInfos return1 " + JSON.stringify(data[i]));
                 if (data[i].want.abilityName == 'com.example.lock.Ability1' &&
                 data[i].runningState == 0) {
                     expect(data[i].lockedState == true).assertTrue();
                     missionArray0700[0] = new Object();
                     missionArray0700[0].id = data[i].missionId;
                     missionArray0700[0].name = data[i].want.abilityName;
                 }
                 if (data[i].want.abilityName == 'com.example.lock.Ability2') {
                     expect().assertFail();
                     done();
                 }
                 if (data[i].want.abilityName == 'com.example.lock.Ability3' &&
                 data[i].runningState == 0) {
                     expect().assertFail();
                     done();
                 }
                 if (data[i].want.abilityName == 'com.example.lock.Ability4' &&
                 data[i].runningState == 0) {
                     expect(data[i].lockedState == true).assertTrue();
                     missionArray0700[1] = new Object();
                     missionArray0700[1].id = data[i].missionId;
                     missionArray0700[1].name = data[i].want.abilityName;
                 }
             }
             console.log("getMissionInfosThree###" + JSON.stringify(missionArray0700));
             console.log("getMissionInfosThree###" + JSON.stringify(missionArray0700.length));
             expect(missionArray0700.length == 2).assertTrue();
             unlockMissionAbility4(done);
         })
     }

     function unlockMissionAbility4(done) {
         console.log('===========SUB_AA_OpenHarmony_Lock_0700 step6 start=====unLockMission======');
         console.log("unlockMissionMy start " + JSON.stringify(missionArray0700));
         missionManager.unlockMission(missionArray0700[1].id, (err, data) => {
             console.log('SUB_AA_OpenHarmony_Lock_0700 unlockMission err:'
             + JSON.stringify(err) + " data: " + JSON.stringify(data));
             expect(data == undefined).assertTrue();
             clearAllMission20700(done);
         });
     }

     function clearAllMission20700(done) {
         console.log('===========SUB_AA_OpenHarmony_Lock_0700 step7 start=====clearAllMissions======');
         var myEvents = {
             events:
             [
                 "Ability1_onShow",
                 "Ability4_onDestroy"
             ]
         };
         var Subscriber;
         let id;
         var data = [];

         function SubscribeCallBack(err, data) {
             console.debug("beforeAll====>Subscribe CallBack data:====>" + JSON.stringify(data));
             switch (data.event) {
                 case "Ability4_onDestroy":
                     console.log("Ability4_onDestroy");
                     data[0] = "Ability4_onDestroy";
                     break;
                 case "Ability1_onShow":
                     console.log("Ability1_onShow");
                     data[1] = "Ability1_onShow";
                     break;
                 default:
             }
             if (data[0] == "Ability4_onDestroy") {
                 clearTimeout(id);
                 commonEvent.unsubscribe(Subscriber, UnSubscribeCallback);
             }
         };
         commonEvent.createSubscriber(myEvents).then(async (data) => {
             console.debug("SUB_AA_OpenHarmony_Lock_0400====>Create Subscriber====>");
             Subscriber = data;
             console.log("SUB_AA_OpenHarmony_Lock_0700 Subscriber " + JSON.stringify(Subscriber));
             await commonEvent.subscribe(Subscriber, SubscribeCallBack);
         }).catch((error) => {
             console.error('Operation failed. Cause: ' + JSON.stringify(error));
             done();
         });

         function UnSubscribeCallback() {
             console.debug("====>UnSubscribe CallBack====>");
             getMissionInfosFour(done);
         }

         function timeout() {
             expect().assertFail();
             console.debug('SUB_AA_OpenHarmony_Lock_0700=====timeout======');
             commonEvent.unsubscribe(Subscriber, UnSubscribeCallback);
         }

         id = setTimeout(timeout, START_ABILITY_TIMEOUT);

         missionManager.clearAllMissions((err, data) => {
             console.log('clearAllMission20700 clearAllMission err: '
             + JSON.stringify(err) + " data: " + JSON.stringify(data));
         });
     }

     function getMissionInfosFour(done) {
         console.log('===========SUB_AA_OpenHarmony_Lock_0700 step8 start=====getMissonInfos======');
         missionArray0700 = [];
         missionManager.getMissionInfos('', 500, (err, data) => {
             console.log('getMissionInfosThree getMissionInfo err: '
             + JSON.stringify(err) + " data: " + JSON.stringify(data));
             expect(err.code == 0).assertTrue();
             var i;
             for (i = 0; i < data.length; i++) {
                 console.log("getMissionInfos return1 " + JSON.stringify(data[i]));
                 if (data[i].want.abilityName == 'com.example.lock.Ability1' &&
                 data[i].runningState == 0) {
                     expect(data[i].lockedState == true).assertTrue();
                     missionArray0700[0] = new Object();
                     missionArray0700[0].id = data[i].missionId;
                     missionArray0700[0].name = data[i].want.abilityName;
                 }
                 if (data[i].want.abilityName == 'com.example.lock.Ability2') {
                     expect().assertFail();
                     done();
                 }
                 if (data[i].want.abilityName == 'com.example.lock.Ability3' &&
                 data[i].runningState == 0) {
                     expect().assertFail();
                     done();
                 }
                 if (data[i].want.abilityName == 'com.example.lock.Ability4' &&
                 data[i].runningState == 0) {
                     expect().assertFail();
                     done();
                 }
             }
             console.log("###" + JSON.stringify(missionArray0700));
             expect(missionArray0700.length == 1).assertTrue();
             console.log('===============SUB_AA_OpenHarmony_Lock_0700 step9 start===========');
             tearDown(missionArray0700,done);
         })
     }

    /*
     * @tc.number  SUB_AA_OpenHarmony_Lock_0900
     * @tc.name    After the ability is destroyed, the corresponding mission can still be locked
     * @tc.desc    Function test
     * @tc.level   0
     */
    it("SUB_AA_OpenHarmony_Lock_0900", 0, async function (done) {
        featureAbility.startAbility({
            want: {
                bundleName: "com.example.lock",
                abilityName: "com.example.lock.Ability1"
            }
        }, (error, data) => {
            console.log('SUB_AA_OpenHarmony_Lock_0900 - startAbility1: ' + JSON.stringify(error));
            setTimeout(() => {
                featureAbility.startAbility({
                    want: {
                        bundleName: "com.example.lock",
                        abilityName: "com.example.lock.Ability2Back"
                    }
                }, (error, data) => {
                    console.log('SUB_AA_OpenHarmony_Lock_0900 - startAbility2: ' + JSON.stringify(error));
                    getMissionInfos0900(done);
                })
            }, 500)
        })
        setTimeout(() => {
            done();
        }, 5000);
    })

    function getMissionInfos0900(done) {
        missionManager.getMissionInfos('', 500, (error, data) => {
            console.log('get all infos' + JSON.stringify(data));
            for (var i = 0; i < data.length; i++) {
                if (data[i].want.abilityName == 'com.example.lock.Ability1') {
                    console.log('print Ability1:' + JSON.stringify(data[i].want.abilityName));
                    console.log('print missionId1:' + JSON.stringify(data[i].missionId));
                    missionArray[0] = new Object();
                    missionArray[0].id = data[i].missionId;
                    missionArray[0].name = data[i].want.abilityName;
                }
                if (data[i].want.abilityName == 'com.example.lock.Ability2Back') {
                    console.log('print Ability2:' + JSON.stringify(data[i].want.abilityName));
                    console.log('print missionId2:' + JSON.stringify(data[i].missionId));
                    missionArray[1] = new Object();
                    missionArray[1].id = data[i].missionId;
                    missionArray[1].name = data[i].want.abilityName;
                }
            }
            terminateSelf(done);
        })
    }

    function terminateSelf(done) {
        console.log('===step6====SUB_AA_OpenHarmony_Lock_0900====terminateSelf====');
        var myEvents = {
            events: [
                "Ability2_onDestroy",
            ]
        };
        var Subscriber;
        let id;

        function SubscribeCallBack(err, data) {
            console.debug("SUB_AA_OpenHarmony_Lock_0900====>Subscribe CallBack data:====>" + JSON.stringify(data));
            switch (data.event) {
                case "Ability2_onDestroy":
                    console.log("SUB_AA_OpenHarmony_Lock_0900 Ability2_onDestory");
                    console.log('SUB_AA_OpenHarmony_Lock_0900 success');
                    clearTimeout(id);
                    commonEvent.unsubscribe(Subscriber, UnSubscribeCallback);
                    break;
                default:

            }
        };
        commonEvent.createSubscriber(myEvents).then(async (data) => {
            console.debug("SUB_AA_OpenHarmony_Lock_0900====>Create Subscriber====>");
            Subscriber = data;
            console.log("SUB_AA_OpenHarmony_Lock_0900 Subscriber " + JSON.stringify(Subscriber));
            await commonEvent.subscribe(Subscriber, SubscribeCallBack);
        }).catch((error) => {
            console.error('Operation failed. Cause: ' + JSON.stringify(error));
            done();
        });

        function UnSubscribeCallback() {
            console.debug("====>UnSubscribe CallBack====>");
            getMissionInfos0900Two(done);
        }

        function timeout() {
            expect().assertFail();
            done();
            console.debug('SUB_AA_OpenHarmony_Lock_0900=====timeout======');
            commonEvent.unsubscribe(Subscriber, UnSubscribeCallback);
        }
        id = setTimeout(timeout, START_ABILITY_TIMEOUT);
    }

    function getMissionInfos0900Two(done) {
        missionArray = [];
        missionManager.getMissionInfos('', 500, (error, data) => {
            console.log('getMissionInfos0900Two' + JSON.stringify(data));
            for (var i = 0; i < data.length; i++) {
                console.log('getMissionInfos0900Two item' + JSON.stringify(data[i]));
                if (data[i].want.abilityName == 'com.example.lock1.Ability1') {
                    console.log('print Ability1:' + JSON.stringify(data[i].want.abilityName));
                    console.log('print missionId1:' + JSON.stringify(data[i].missionId));
                    missionArray[0] = new Object();
                    missionArray[0].id = data[i].missionId;
                    missionArray[0].name = data[i].want.abilityName;
                    expect(data[i].lockedState == false).assertTrue();
                }
                if (data[i].want.abilityName == 'com.example.lock.Ability2Back') {
                    console.log('print Ability2:' + JSON.stringify(data[i].want.abilityName));
                    console.log('print missionId2:' + JSON.stringify(data[i].missionId));
                    missionArray[1] = new Object();
                    missionArray[1].id = data[i].missionId;
                    missionArray[1].name = data[i].want.abilityName;
                    expect(data[i].lockedState == false).assertTrue();
                }
            }
            console.log('missionArray.length:' + JSON.stringify(missionArray.length));
            expect(missionArray.length == 2).assertTrue();
            missionManager.lockMission(missionArray[1].id, (error, data) => {
                console.log('lockMission_ability2' + JSON.stringify(data));
                expect(data == undefined).assertTrue();
                getMissionInfos0900Three(done)
            })
        })
    }

    function getMissionInfos0900Three(done) {
        missionArray = [];
        missionManager.getMissionInfos('', 500, (error, data) => {
            console.log('getMissionInfos0900Three' + JSON.stringify(data));
            for (var i = 0; i < data.length; i++) {
                console.log('getMissionInfos0900Three item' + JSON.stringify(data[i]));
                if (data[i].want.abilityName == 'com.example.lock.Ability1') {
                    console.log('print Ability1:' + JSON.stringify(data[i].want.abilityName));
                    console.log('print missionId1:' + JSON.stringify(data[i].missionId));
                    missionArray[0] = new Object();
                    missionArray[0].id = data[i].missionId;
                    missionArray[0].name = data[i].want.abilityName;
                    expect(data[i].lockedState == false).assertTrue();
                }
                if (data[i].want.abilityName == 'com.example.lock.Ability2Back') {
                    console.log('print Ability2:' + JSON.stringify(data[i].want.abilityName));
                    console.log('print missionId2:' + JSON.stringify(data[i].missionId));
                    missionArray[1] = new Object();
                    missionArray[1].id = data[i].missionId;
                    missionArray[1].name = data[i].want.abilityName;
                    expect(data[i].lockedState == true).assertTrue();
                }
            }
            tearDown(missionArray, done);
        })
    }

    function tearDown(missionArray, done) {
        console.log('===============SUB_AA_OpenHarmony_Lock tearDown start===========');
        console.info('SUB_AA_OpenHarmony_Lock TearDown: ' + JSON.stringify(missionArray));
        var i;
        for (i = 0; i < missionArray.length; i++) {
            missionManager.unlockMission(missionArray[i].id, (err, data) => {
                console.log('SUB_AA_OpenHarmony_Lock unlockMission err:' +
                    JSON.stringify(err) + " data: " + JSON.stringify(data));
                expect(data == undefined).assertTrue();
                console.info('SUB_AA_OpenHarmony_Lock start clearMission');
                missionManager.clearMission(missionArray[i].id, (err, data) => {
                    console.log('SUB_AA_OpenHarmony_Lock clearMission err:' +
                        JSON.stringify(err) + " data: " + JSON.stringify(data));
                    done();
                });
            });
        }
        setTimeout(() => {
            done();
        }, 200);
    }

    /*
     * @tc.number  SUB_AA_OpenHarmony_Lock_0800
     * @tc.name    Mission information can still be checked after the ability is destroyed
     * @tc.desc    Function test
     * @tc.level   0
     */
    it("SUB_AA_OpenHarmony_Lock_0800", 0, async function (done) {
        console.log('===step1====SUB_AA_OpenHarmony_Lock_0800====startAbility====');
        featureAbility.startAbility(
            { want: {
                bundleName: "com.example.lock",
                abilityName: "com.example.lock.Ability1"
            } }, (error, data) => {
            console.log('SUB_AA_OpenHarmony_Lock_0800 - startAbility1: ' + JSON.stringify(error));
            setTimeout(() => {
                featureAbility.startAbility(
                    { want: {
                        bundleName: "com.example.lock",
                        abilityName: "com.example.lock.Ability2Back"
                    } }, (error, data) => {
                    console.log('SUB_AA_OpenHarmony_Lock_0800 - startAbility2: ' + JSON.stringify(error));
                    setTimeout(()=>{
                        getMissionInfos0800(done);
                    },200);

                })
            }, 500)
        })
        setTimeout(()=>{
            done();
        },5000);
    })

    function getMissionInfos0800(done){
        console.log('===step2====SUB_AA_OpenHarmony_Lock_0800====getMissionInfos0800====');
        missionManager.getMissionInfos('', 500, (error, data) => {
            console.log('get all infos' + JSON.stringify(data));
            for (var i = 0; i < data.length; i++) {
                if (data[i].want.abilityName == 'com.example.lock.Ability1') {
                    console.log('print Ability1:' + JSON.stringify(data[i].want.abilityName));
                    console.log('print missionId1:' + JSON.stringify(data[i].missionId));
                }
                if (data[i].want.abilityName == 'com.example.lock.Ability2Back') {
                    console.log('print Ability2:' + JSON.stringify(data[i].want.abilityName));
                    console.log('print missionId2:' + JSON.stringify(data[i].missionId));
                    missionManager.lockMission(data[i].missionId, (error, data) => {
                        console.log('lockMission_ability2' + JSON.stringify(data));
                        expect(data == undefined).assertTrue();
                    })
                }
            }
            setTimeout(()=>{
                terminateSelf(done);
            },500)
        })
    }

    function terminateSelf(done){
        var flag1 = false;
        var flag2 = false;
        console.log('===step6====SUB_AA_OpenHarmony_Lock_0800====terminateSelf====');
        var myEvents = {
            events:
            [
                "Ability1_onShow",
                "Ability2_onDestroy"
            ]
        };
        var Subscriber;
        let id;

        function SubscribeCallBack(err, data) {
            console.debug("SUB_AA_OpenHarmony_Lock_0800==>Subscribe CallBack data:====>" + JSON.stringify(data));
            switch (data.event) {
                case "Ability2_onDestroy":
                    console.log("SUB_AA_OpenHarmony_Lock_0800 Ability2_onDestory");
                    flag1 = true;
                    break;
                case "Ability1_onShow":
                    console.log("SUB_AA_OpenHarmony_Lock_0800 Ability1_onShow");
                    flag2 = true;
                    break;
                default:
            }
            if (flag1 && flag2 ) {
                console.log('SUB_AA_OpenHarmony_Lock_0800 success');
                clearTimeout(id);
                commonEvent.unsubscribe(Subscriber, UnSubscribeCallback);
            }
        };
        commonEvent.createSubscriber(myEvents).then(async (data) => {
            console.debug("SUB_AA_OpenHarmony_Lock_0800====>Create Subscriber====>");
            Subscriber = data;
            console.log("SUB_AA_OpenHarmony_Lock_0800 Subscriber " + JSON.stringify(Subscriber));
            await commonEvent.subscribe(Subscriber, SubscribeCallBack);
        }).catch((error) => {
            console.error('Operation failed. Cause: ' + JSON.stringify(error));
            done();
        });

        function UnSubscribeCallback() {
            console.debug("====>UnSubscribe CallBack====>");
            getMissionInfos0800Two(done);
        }

        function timeout() {
            expect().assertFail();
            done();
            console.debug('SUB_AA_OpenHarmony_Lock_0800=====timeout======');
            commonEvent.unsubscribe(Subscriber, UnSubscribeCallback);
        }
        id = setTimeout(timeout, START_ABILITY_TIMEOUT);
    }

    function getMissionInfos0800Two(done){
        var missionArray = [];
        missionManager.getMissionInfos('', 500, (error, data) => {
            console.log('getMissionInfos0800Two' + JSON.stringify(data));
            for (var i = 0; i < data.length; i++) {
                console.log('getMissionInfos0800Two item' + JSON.stringify(data[i]));
                if (data[i].want.abilityName == 'com.example.lock1.Ability2Back') {
                    console.log('getMissionInfos0800Two last success');
                    missionArray[0] = new Object();
                    missionArray[0].id = data[i].missionId;
                    missionArray[0].name = data[i].want.abilityName;
                }
                if (data[i].want.abilityName == 'com.example.lock.Ability1') {
                    console.log('getMissionInfos0800Two Ability1');
                    missionArray[1] = new Object();
                    missionArray[1].id = data[i].missionId;
                    missionArray[1].name = data[i].want.abilityName;
                }
            }
            if(missionArray[0].name == "com.example.lock.Ability2Back"){
                console.log('getMissionInfos0800Two teardown');
                tearDown(missionArray,done);
            }
        })
    }

    function tearDown(missionArray, done) {
        console.log('===============SUB_AA_OpenHarmony_Lock tearDown start===========');
        console.info('SUB_AA_OpenHarmony_Lock TearDown: ' + JSON.stringify(missionArray));
        var i;
        for (i = 0; i < missionArray.length; i++) {
            missionManager.unlockMission(missionArray[i].id, (err, data) => {
                console.log('SUB_AA_OpenHarmony_Lock unlockMission err:'
                + JSON.stringify(err) + " data: " + JSON.stringify(data));
                expect(data == undefined).assertTrue();
                console.info('SUB_AA_OpenHarmony_Lock start clearMission');
                missionManager.clearMission(missionArray[i].id, (err, data) => {
                    console.log('SUB_AA_OpenHarmony_Lock clearMission err:'
                    + JSON.stringify(err) + " data: " + JSON.stringify(data));
                });
            });
        }
        setTimeout(()=>{
            done();
        },200);
    }

    /*
     * @tc.number  SUB_AA_OpenHarmony_Lock_1100
     * @tc.name    The mission of the api7 application can be unlocked
     * @tc.desc    Function test
     * @tc.level   0
     */
    it("SUB_AA_OpenHarmony_Lock_1100", 0, async function (done) {
        console.log("------start SUB_AA_OpenHarmony_Lock_1100------");
        setTimeout(function () {
            featureAbility.startAbility(
                { want: {
                    bundleName: "com.example.lock",
                    abilityName: "com.example.lock.Ability1"
                } }, (error, data) => {
                console.log('SUB_AA_OpenHarmony_Lock_1100 - startAbility1: ' + JSON.stringify(error));
            })
        }, 200)
        setTimeout(function () {
            featureAbility.startAbility(
                { want: {
                    bundleName: "com.example.lock",
                    abilityName: "com.example.lock.Ability2"
                } }, (error, data) => {
                console.log('SUB_AA_OpenHarmony_Lock_1100 - startAbility2: ' + JSON.stringify(error));
            })
        }, 200)
        setTimeout(() => {
            missionManager.getMissionInfos('', 500, (error, data) => {
                console.log('SUB_AA_OpenHarmony_Lock_1100, twosgetMissionInfos:' + JSON.stringify(data));
                for (var i = 0;i < data.length; i++) {
                    if (data[i].want.abilityName == "com.example.lock.Ability1") {
                        console.log('Ability1_missionId:' + JSON.stringify(data[i].missionId));
                        console.log('Ability1_bundleName:' + JSON.stringify(data[i].want.bundleName));
                        missionId1s.push(data[i].missionId);
                    }
                    if (data[i].want.abilityName == "com.example.lock.Ability2") {
                        console.log('Ability2_missionId:' + JSON.stringify(data[i].missionId));
                        console.log('Ability2_bundleName:' + JSON.stringify(data[i].want.bundleName));
                        missionId2s.push(data[i].missionId);
                    }
                }
            })
        }, 300)
        setTimeout(() => {
            for (var i = 0; i < missionId2s.length; i++) {
                missionManager.lockMission(missionId2s[i], (error, data) => {
                    console.log('Abiliy2missionid_lock' + JSON.stringify(data) + JSON.stringify(error));
                    expect(data == undefined).assertTrue();
                })
            }
        }, 500)
        setTimeout(() => {
            missionManager.getMissionInfos('', 500, (error, data) => {
                console.log('getMissionInfos four:' + JSON.stringify(data));
                for (var i = 0; i < data.length; i++) {
                    if (data[i].want.abilityName == "com.example.lock.Ability1") {
                        console.log('wsx' + JSON.stringify(data[i].lockedState));
                        expect(data[i].lockedState == false).assertTrue();
                    }
                    if (data[i].want.abilityName == "com.example.lock.Ability2") {
                        console.log('qaz' + JSON.stringify(data[i].lockedState));
                        expect(data[i].lockedState == true).assertTrue();
                    }
                }
            })
        }, 800)
        setTimeout(() => {
            for (var i = 0; i < missionId2s.length; i++) {
                missionManager.unlockMission(parseInt(missionId2s[i]), (error, data) => {
                    console.log('unlockMission data' + JSON.stringify(data));
                    expect(data == undefined).assertTrue();
                })
            }
        }, 1000)
        missionManager.getMissionInfos('', 500, (error, data) => {
            console.log('print aaaa22' + JSON.stringify(data));
            for (var i = 0; i < data.length; i++) {
                console.log('plkjm data[i]22' + JSON.stringify(data[i]));
                if (data[i].want.abilityName == "com.example.lock.Ability1") {
                    expect(data[i].lockedState == false).assertTrue();
                }
                if (data[i].want.abilityName == "com.example.lock.Ability2") {
                    expect(data[i].lockedState == false).assertTrue();
                }
            }
        })
        setTimeout(() => {
            for (var i = 0; i < missionId1s.length; i++) {
                missionManager.unlockMission(parseInt(missionId1s[i]), (error, data) => {
                    console.log('unlockMission1 data' + JSON.stringify(data));
                    expect(data == undefined).assertTrue();
                })
            }
            for (var i = 0; i < missionId2s.length; i++) {
                missionManager.unlockMission(parseInt(missionId2s[i]), (error, data) => {
                    console.log('unlockMission2 data' + JSON.stringify(data));
                    expect(data == undefined).assertTrue();
                })
            }
            missionManager.clearAllMissions((error, data) => {
                console.log('clearAllMissions' + JSON.stringify(data) + ',' + JSON.stringify(error));
                expect(data == undefined).assertTrue();
            })
            done();
            console.log("---------------  SUB_AA_OpenHarmony_Lock_1100 end -----------------");
        }, 1200)
    })

    /*
     * @tc.number  SUB_AA_OpenHarmony_Lock_0500
     * @tc.name    clearMission can clear the locked mission
     * @tc.desc    Function test
     * @tc.level   0
     */
    it("SUB_AA_OpenHarmony_Lock_0500", 0, async function (done) {
        console.log('===step1====SUB_AA_OpenHarmony_Lock_0500====startAbility====');
        featureAbility.startAbility(
            { want: {
                bundleName: "com.example.lock",
                abilityName: "com.example.lock.Ability1"
            } }, (error, data) => {
            console.log('SUB_AA_OpenHarmony_Lock_0500 - startAbility1: ' + 
            JSON.stringify(error) + ", " + JSON.stringify(data));
            setTimeout(() => {
                featureAbility.startAbility(
                    { want: {
                        bundleName: "com.example.lock",
                        abilityName: "com.example.lock.Ability2"
                    } }, (error, data) => {
                    console.log('SUB_AA_OpenHarmony_Lock_0500 - startAbility2: ' + 
                    JSON.stringify(error) + ", " + JSON.stringify(data));
                    setTimeout(() => {
                        featureAbility.startAbility(
                            { want: {
                                bundleName: "com.example.lock",
                                abilityName: "com.example.lock.Ability3"
                            } }, (error, data) => {
                            console.log('SUB_AA_OpenHarmony_Lock_0500 - startAbility3: ' + 
                            JSON.stringify(error) + ", " + JSON.stringify(data));
                            setTimeout(() => {
                                featureAbility.startAbility(
                                    { want: {
                                        bundleName: "com.example.lock",
                                        abilityName: "com.example.lock.Ability4"
                                    } }, (error, data) => {
                                    console.log('SUB_AA_OpenHarmony_Lock_0500 - startAbility4: ' + 
                                    JSON.stringify(error) + ", " + JSON.stringify(data));
                                    setTimeout(() => {
                                        getMissionInfoOne(done);
                                    }, 200)
                                })
                            }, 500)
                        })
                    }, 500)
                })
            }, 500)
        })
    })

    function getMissionInfoOne(done) {
        console.log('===step2====SUB_AA_OpenHarmony_Lock_0500====getMissionInfoOne====');
        missionManager.getMissionInfos('', 500, (error, data) => {
            console.log('get all infos' + JSON.stringify(data));
            for (var i = 0; i < data.length; i++) {
                if (data[i].want.abilityName == 'com.example.lock.Ability2') {
                    console.log('print Ability2:' + JSON.stringify(data[i].want.abilityName));
                    console.log('print missionId2:' + JSON.stringify(data[i].missionId));
                    missionId2s = data[i].missionId;
                    lockMission(data[i].missionId);
                }
                if (data[i].want.abilityName == 'com.example.lock.Ability3') {
                    console.log('print Ability3:' + JSON.stringify(data[i].want.abilityName));
                    console.log('print missionId3s:' + JSON.stringify(data[i].missionId));
                    missionId3s = data[i].missionId;
                    lockMission(data[i].missionId);
                }
            }
            setTimeout(() => {
                clearMission(missionId2s, missionId3s, done);
            }, 100)
        })
    }

    function clearMission(mymissionId1, mymissionId2, done) {
        console.log('===step4====SUB_AA_OpenHarmony_Lock_0500====clearMission====' + 
        JSON.stringify(mymissionId1) + JSON.stringify(mymissionId2));
        missionManager.clearMission(mymissionId1, (error, data) => {
            console.log('SUB_AA_OpenHarmony_Lock_0500 clearMission1' + JSON.stringify(data));
            expect(data == undefined).assertTrue();
            missionManager.clearMission(mymissionId2, (error, data) => {
                console.log('SUB_AA_OpenHarmony_Lock_0500 clearMission2' + JSON.stringify(data));
                expect(data == undefined).assertTrue();
                getMissionInfoTwo(done);
            })
        })
    }

    function lockMission(missionId) {
        console.log('===step3====SUB_AA_OpenHarmony_Lock_0500====lockMission====' + JSON.stringify(missionId));
        missionManager.clearMission(missionId, (error, data) => {
            console.log('SUB_AA_OpenHarmony_Lock_0500 lockMission' + JSON.stringify(data));
            expect(data == undefined).assertTrue();
        })
    }

    function getMissionInfoTwo(done) {
        console.log('===step5====SUB_AA_OpenHarmony_Lock_0500====getMissionInfo2====');
        missionManager.getMissionInfos('', 500, (error, data) => {
            console.log('SUB_AA_OpenHarmony_Lock_0500 getMissionInfos2' + JSON.stringify(data));
            for (var i = 0; i < data.length; i++) {
                console.log('SUB_AA_OpenHarmony_Lock_0500 getMissionInfos2 item' + JSON.stringify(data[i]));
                if (data[i].want.abilityName == 'com.example.lock.Ability2') {
                    expect().assertFail();
                    done();
                    break;
                }
                if (data[i].want.abilityName == 'com.example.lock.Ability3') {
                    expect().assertFail();
                    done();
                    break;
                }
            }
            terminateSelf(done);
        })
    }

    function terminateSelf(done) {
        var listKey = [];
        console.log('===step6====SUB_AA_OpenHarmony_Lock_0500====terminateSelf====');
        var myEvents = {
            events:
            [
                "Ability1_onShow",
                "Ability4_onHide"
            ]
        };
        var Subscriber;
        let id;

        function SubscribeCallBack(err, data) {
            console.debug("beforeAll====>Subscribe CallBack data:====>" + JSON.stringify(data));
            switch (data.event) {
                case "Ability4_onHide":
                    console.log("SUB_AA_OpenHarmony_Lock_0500 Ability4_onHide");
                    listKey[0] = "Ability4_onHide";
                    break;
                case "Ability1_onShow":
                    console.log("SUB_AA_OpenHarmony_Lock_0500 Ability1_onShow");
                    listKey[1] = "Ability1_onShow";
                    break;
                default:
            }
            if (listKey[0] == "Ability4_onHide" && listKey[1] == "Ability1_onShow") {
                console.log('SUB_AA_OpenHarmony_Lock_0500 success');
                clearTimeout(id);
                commonEvent.unsubscribe(Subscriber, UnSubscribeCallback);
            }
        };
        commonEvent.createSubscriber(myEvents).then(async (data) => {
            console.debug("SUB_AA_OpenHarmony_Lock_0500====>Create Subscriber====>");
            Subscriber = data;
            console.log("SUB_AA_OpenHarmony_Lock_0500 Subscriber " + JSON.stringify(Subscriber));
            await commonEvent.subscribe(Subscriber, SubscribeCallBack);
        }).catch((error) => {
            console.error('Operation failed. Cause: ' + JSON.stringify(error));
            done();
        });
        function UnSubscribeCallback() {
            console.debug("====>UnSubscribe CallBack====>");
            done();
        }
        function timeout() {
            expect().assertFail();
            console.debug('SUB_AA_OpenHarmony_Lock_0500=====timeout======');
            commonEvent.unsubscribe(Subscriber, UnSubscribeCallback);
        }
        id = setTimeout(timeout, START_ABILITY_TIMEOUT);
    }
})