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

import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium'
import AbilityDelegatorRegistry from '@ohos.application.abilityDelegatorRegistry'
import commonEvent from '@ohos.commonEvent'

const TIME_OUT = 2000;

var ACTS_CARD = {
  events: ["ACTS_FormIdA", "ACTS_FormIdB", "ACTS_FormIdC", "ERR_CODE", "onCreate_want_count"]
};

export default function abilityTest() {
  describe('ActsCardLoadStageTest', function () {

    afterEach(async (done) => {
      setTimeout(() => {
        done();
      }, 1000)
    })

    /*
     * @tc.number: ACTS_InAppCardLoadCard_0100
     * @tc.name: Create a card
     * @tc.desc: Create a card,get card data
     */
    it('ACTS_InAppCardLoadCard_0100', 0, function (done) {
        let formId;
        let subscriber;
        let abilityDelegator = undefined;
        let temp;
        abilityDelegator = AbilityDelegatorRegistry.getAbilityDelegator()

        commonEvent.createSubscriber(ACTS_CARD).then(async (data) => {
            console.debug("====>ACTS_InAppCardLoadCard_0100 Create Subscriber====>");
            subscriber = data;
            commonEvent.subscribe(subscriber, subscribeCallBack);
            globalThis.abilityContext.startAbility(
                {
                    bundleName: "com.example.inapploadcard",
                    abilityName: "MainAbility",
                    action: "MainAbility"
                }, (err, data) => {
                    console.info("ACTS_InAppCardLoadCard_0100 ====> startAbility err:" + JSON.stringify(err))
                    console.info("ACTS_InAppCardLoadCard_0100 ====> startAbility data:" + JSON.stringify(data))
                })
        })

        function subscribeCallBack(err, data) {
            console.info("ACTS_InAppCardLoadCard_0100 ====> subscribeCallBack err:" + JSON.stringify(err));
            console.info("ACTS_InAppCardLoadCard_0100 ====> subscribeCallBack data:" + JSON.stringify(data))
            if (data.event == "ACTS_FormIdA") {
                formId = data.parameters.formId;
                console.debug("ACTS_InAppCardLoadCard_0100 ====>" + formId);
                setTimeout(async () => {
                    let cmd = "hidumper -s FormMgr -a '-i " + formId + "'"
                    console.debug("ACTS_InAppCardLoadCard_0100 ====> cmd " + cmd);
                    abilityDelegator.executeShellCommand(cmd,
                        (err, data) => {
                            console.info('ACTS_InAppCardLoadCard_0100 =====> executeShellCommand : err : ' +
                                JSON.stringify(err));
                            console.info('ACTS_InAppCardLoadCard_0100 =====> executeShellCommand : data : ' +
                                data.stdResult);
                            temp = data["stdResult"];
                            console.info('ACTS_InAppCardLoadCard_0100 =====> temp : ' + temp.formCacheData);
                            expect(temp.indexOf("com.example.inapploadcard") >= 0).assertTrue()
                            expect(temp.indexOf("FormAbility") >= 0).assertTrue()
                            expect(temp.indexOf("/common/cold.png") >= 0).assertTrue()
                            expect(temp.indexOf("12:11:00") >= 0).assertTrue()
                            expect(temp.indexOf("11") >= 0).assertTrue()
                            console.info('ACTS_InAppCardLoadCard_0100 =====> '+
                            'executeShellCommand : data/exitCode : ' + data.exitCode);
                            commonEvent.unsubscribe(subscriber, unSubscribeCallback);
                        })
                }, TIME_OUT)
            }
        }

        function unSubscribeCallback() {
            console.debug("ACTS_InAppCardLoadCard_0100 ====> unSubscribeCallback")
            done();
        }
    })

    /*
     * @tc.number: ACTS_InAppCardLoadCard_0200
     * @tc.name: Load a card,formID already exists
     * @tc.desc: Load a card,formID already exists,get card data
     */
        it('ACTS_InAppCardLoadCard_0200', 0, function (done) {
            let formId;
            let subscriber;
            let abilityDelegator = undefined;
            let temp;
            let countcard = 0;
            abilityDelegator = AbilityDelegatorRegistry.getAbilityDelegator()

            commonEvent.createSubscriber(ACTS_CARD).then(async (data) => {
                console.debug("====>ACTS_InAppCardLoadCard_0200 Create Subscriber====>");
                subscriber = data;
                commonEvent.subscribe(subscriber, subscribeCallBack);
                globalThis.abilityContext.startAbility(
                    {
                        bundleName: "com.example.inapploadcard",
                        abilityName: "MainAbility",
                        action: "MainAbility1"
                    }, (err, data) => {
                        console.info("ACTS_InAppCardLoadCard_0200 ====> startAbility err:" 
                        + JSON.stringify(err))
                        console.info("ACTS_InAppCardLoadCard_0200 ====> startAbility data:" 
                        + JSON.stringify(data))
                    })
            })

            function subscribeCallBack(err, data) {
                console.info("ACTS_InAppCardLoadCard_0200 ====> subscribeCallBack err:" + JSON.stringify(err));
                console.info("ACTS_InAppCardLoadCard_0200 ====> subscribeCallBack data:" + JSON.stringify(data))
                console.info('ACTS_InAppCardLoadCard_0200 =====> event : ' + data.event);
                if (data.event == "ACTS_FormIdB") {
                    formId = data.parameters.formId;
                    console.debug("ACTS_InAppCardLoadCard_0200 ====>" + formId);
                    setTimeout(async () => {
                        let cmd = "hidumper -s FormMgr -a '-i " + formId + "'"
                        console.debug("ACTS_InAppCardLoadCard_0200 ====> cmd " + cmd);
                        abilityDelegator.executeShellCommand(cmd,
                            (err, data) => {
                                console.info('ACTS_InAppCardLoadCard_0200 =====> executeShellCommand : err : ' +
                                    JSON.stringify(err));
                                console.info('ACTS_InAppCardLoadCard_0200 =====> executeShellCommand : data : ' +
                                    data.stdResult);
                                temp = data["stdResult"];
                                console.info('ACTS_InAppCardLoadCard_0200 =====> temp : ' + temp);
                                expect(temp.indexOf("com.example.inapploadcard") >= 0).assertTrue()
                                expect(temp.indexOf("FormAbility") >= 0).assertTrue()
                                expect(temp.indexOf("/common/cold.png") >= 0).assertTrue()
                                expect(temp.indexOf("12:11:00") >= 0).assertTrue()
                                expect(temp.indexOf("11") >= 0).assertTrue()
                                console.info('ACTS_InAppCardLoadCard_0200 =====> '+
                                'executeShellCommand : data/exitCode : ' +data.exitCode);	
                            })
                    }, TIME_OUT)
                }
         setTimeout(async () => {
         if (data.event == "onCreate_want_count") {
               countcard ++;
                  if(countcard == 2) {
                    expect(2).assertTrue(countcard)
                  }
                  if(countcard > 2) {
                    expect().assertFail()
                  }
                  commonEvent.unsubscribe(subscriber, unSubscribeCallback);
            }
    }, 1000)
        }
            function unSubscribeCallback() {
                console.debug("ACTS_InAppCardLoadCard_0200 ====> unSubscribeCallback")
                done();
            }
        })

    /*
     * @tc.number: ACTS_InAppCardLoadCard_0300
     * @tc.name: Load a card,temporary is true
     * @tc.desc: Load a card,temporary is true,get card data
     */
    it('ACTS_InAppCardLoadCard_0300', 0, function (done) {
        let formId;
        let subscriber;
        let abilityDelegator = undefined;
        let temp;
        abilityDelegator = AbilityDelegatorRegistry.getAbilityDelegator()

        commonEvent.createSubscriber(ACTS_CARD).then(async (data) => {
            console.debug("====>ACTS_InAppCardLoadCard_0300 Create Subscriber====>");
            subscriber = data;
            commonEvent.subscribe(subscriber, subscribeCallBack);
            globalThis.abilityContext.startAbility(
                {
                    bundleName: "com.example.inapploadcard",
                    abilityName: "MainAbility2"
                }, (err, data) => {
                    console.info("ACTS_InAppCardLoadCard_0300 ====> startAbility err:" + JSON.stringify(err))
                    console.info("ACTS_InAppCardLoadCard_0300 ====> startAbility data:" + JSON.stringify(data))
                })
        })

        function subscribeCallBack(err, data) {
            console.info("ACTS_InAppCardLoadCard_0300 ====> subscribeCallBack err:" + JSON.stringify(err));
            console.info("ACTS_InAppCardLoadCard_0300 ====> subscribeCallBack data:" + JSON.stringify(data))
            if (data.event == "ACTS_FormIdC") {
                formId = data.parameters.formId;
                console.debug("ACTS_InAppCardLoadCard_0300 ====>" + formId);
                setTimeout(async () => {
                    let cmd = "hidumper -s FormMgr -a '-i " + formId + "'"
                    console.debug("ACTS_InAppCardLoadCard_0300 ====> cmd " + cmd);
                    abilityDelegator.executeShellCommand(cmd,
                        (err, data) => {
                            console.info('ACTS_InAppCardLoadCard_0300 =====> executeShellCommand : err : ' +
                                JSON.stringify(err));
                            console.info('ACTS_InAppCardLoadCard_0300 =====> executeShellCommand : data : ' +
                                data.stdResult);
                            temp = data["stdResult"];
                            console.info('ACTS_InAppCardLoadCard_0300 =====> temp : ' + temp.formCacheData);
                            expect(temp.indexOf("com.example.inapploadcard") >= 0).assertTrue()
                            expect(temp.indexOf("FormAbility") >= 0).assertTrue()
                            expect(temp.indexOf("/common/cold.png") >= 0).assertTrue()
                            expect(temp.indexOf("12:11:00") >= 0).assertTrue()
                            expect(temp.indexOf("11") >= 0).assertTrue()
                            console.info('ACTS_InAppCardLoadCard_0300 =====> '+
                            'executeShellCommand : data/exitCode : ' +data.exitCode);
                            commonEvent.unsubscribe(subscriber, unSubscribeCallback);
                        })
                }, TIME_OUT)
            }
        }

        function unSubscribeCallback() {
            console.debug("ACTS_InAppCardLoadCard_0300 ====> unSubscribeCallback")
            done();
        }
    })

    /*
     * @tc.number: ACTS_InAppCardLoadCard_0400
     * @tc.name: Create a card,id is wrong
     * @tc.desc: Create a card,id is wrong,return error code
     */
    it('ACTS_InAppCardLoadCard_0400', 0, function (done) {
        let subscriber;
        commonEvent.createSubscriber(ACTS_CARD).then(async (data) => {
            console.debug("====>ACTS_InAppCardLoadCard_0400 Create Subscriber====>");
            subscriber = data;
            commonEvent.subscribe(subscriber, subscribeCallBack);
            globalThis.abilityContext.startAbility(
                {
                    bundleName: "com.example.inapploadcard",
                    abilityName: "MainAbility3",
                    parameters: {
                        formId: 1000000000000,
                        bundleName: "com.example.inapploadcard",
                        abilityName: "FormAbility",
                        moduleNameA: "entry",
                        formName: "widget",
                        dimension: "2*2"
                    }
                }, (err, data) => {
                    console.info("ACTS_InAppCardLoadCard_0400 ====> startAbility err:" + JSON.stringify(err))
                    console.info("ACTS_InAppCardLoadCard_0400 ====> startAbility data:" + JSON.stringify(data))
                })
        })

        function subscribeCallBack(err, data) {
            console.info("ACTS_InAppCardLoadCard_0400 ====> subscribeCallBack err:" + JSON.stringify(err));
            console.info("ACTS_InAppCardLoadCard_0400 ====> subscribeCallBack data:" + JSON.stringify(data))
            console.info("ACTS_InAppCardLoadCard_0400 ====> subscribeCallBack errcode:"
                + JSON.stringify(data.parameters.errCode.errcode))
            if (data.event == ACTS_CARD.events[3]) {
                expect(data.parameters.errCode.errcode == "2293767").assertTrue()
                expect(data.parameters.errCode.msg == "invalid params received on operating form.").
                    assertTrue()
                commonEvent.unsubscribe(subscriber, unSubscribeCallback);
            }
        }

        function unSubscribeCallback() {
            console.debug("ACTS_InAppCardLoadCard_0400 ====> unSubscribeCallback")
            done()
        }
    })

    /*
     * @tc.number: ACTS_InAppCardLoadCard_0500
     * @tc.name: Create a card,name is wrong
     * @tc.desc: Create a card,name is wrong,return error code
     */
    it('ACTS_InAppCardLoadCard_0500', 0, function (done) {
        let subscriber;
        commonEvent.createSubscriber(ACTS_CARD).then(async (data) => {
            console.debug("====>ACTS_InAppCardLoadCard_0500 Create Subscriber====>");
            subscriber = data;
            commonEvent.subscribe(subscriber, subscribeCallBack);
            globalThis.abilityContext.startAbility(
                {
                    bundleName: "com.example.inapploadcard",
                    abilityName: "MainAbility3",
                    parameters: {
                        formId: 0,
                        bundleName: "com.example.inapploadcard",
                        abilityName: "FormAbility",
                        moduleNameA: "entry",
                        formName: "widgrrrret",
                        dimension: "2*2"
                    }
                }, (err, data) => {
                    console.info("ACTS_InAppCardLoadCard_0500 ====> startAbility err:" + JSON.stringify(err))
                    console.info("ACTS_InAppCardLoadCard_0500 ====> startAbility data:" + JSON.stringify(data))
                })
        })

        function subscribeCallBack(err, data) {
            console.info("ACTS_InAppCardLoadCard_0500 ====> subscribeCallBack err:" + JSON.stringify(err));
            console.info("ACTS_InAppCardLoadCard_0500 ====> subscribeCallBack data:" + JSON.stringify(data))
            console.info("ACTS_InAppCardLoadCard_0500 ====> subscribeCallBack errcode:"
                + JSON.stringify(data.parameters.errCode.errcode))
            if (data.event == ACTS_CARD.events[3]) {
                expect(data.parameters.errCode.errcode == "2293765").assertTrue()
                expect(data.parameters.errCode.msg == "can't get form info by the formName.").assertTrue()
                commonEvent.unsubscribe(subscriber, unSubscribeCallback);
            }
        }

        function unSubscribeCallback() {
            console.debug("ACTS_InAppCardLoadCard_0500 ====> unSubscribeCallback")
            done()
        }
    })

    /*
     * @tc.number: ACTS_InAppCardLoadCard_0600
     * @tc.name: Create a card,bundle is wrong
     * @tc.desc: Create a card,bundle is wrong,return error code
     */
    it('ACTS_InAppCardLoadCard_0600', 0, function (done) {
        let subscriber;
        commonEvent.createSubscriber(ACTS_CARD).then(async (data) => {
            console.debug("====>ACTS_InAppCardLoadCard_0600 Create Subscriber====>");
            subscriber = data;
            commonEvent.subscribe(subscriber, subscribeCallBack);
            globalThis.abilityContext.startAbility(
                {
                    bundleName: "com.example.inapploadcard",
                    abilityName: "MainAbility3",
                    parameters: {
                        formId: 0,
                        bundleName: "com222.122example.inapplggtgtgtoadcard",
                        abilityName: "FormAbility",
                        moduleNameA: "entry",
                        formName: "widget",
                        dimension: "2*2"
                    }
                }, (err, data) => {
                    console.info("ACTS_InAppCardLoadCard_0600 ====> startAbility err:" + JSON.stringify(err))
                    console.info("ACTS_InAppCardLoadCard_0600 ====> startAbility data:" + JSON.stringify(data))
                })
        })

        function subscribeCallBack(err, data) {
            console.info("ACTS_InAppCardLoadCard_0600 ====> subscribeCallBack err:" + JSON.stringify(err));
            console.info("ACTS_InAppCardLoadCard_0600 ====> subscribeCallBack data:" + JSON.stringify(data))
            console.info("ACTS_InAppCardLoadCard_0600 ====> subscribeCallBack errcode:"
                + JSON.stringify(data.parameters.errCode.errcode))
            if (data.event == ACTS_CARD.events[3]) {
                expect(data.parameters.errCode.errcode == "2293765").assertTrue()
                expect(data.parameters.errCode.msg == "can't get form info by the formName.").assertTrue()
                commonEvent.unsubscribe(subscriber, unSubscribeCallback);
            }
        }

        function unSubscribeCallback() {
            console.debug("ACTS_InAppCardLoadCard_0600 ====> unSubscribeCallback")
            done()
        }
    })

    /*
    * @tc.number: ACTS_InAppCardLoadCard_0700
    * @tc.name: Create a card,ability is empty
    * @tc.desc: Create a card,ability is empty,return error code
    */
    it('ACTS_InAppCardLoadCard_0700', 0, function (done) {
        let subscriber;
        commonEvent.createSubscriber(ACTS_CARD).then(async (data) => {
            console.debug("====>ACTS_InAppCardLoadCard_0700 Create Subscriber====>");
            subscriber = data;
            commonEvent.subscribe(subscriber, subscribeCallBack);
            globalThis.abilityContext.startAbility(
                {
                    bundleName: "com.example.inapploadcard",
                    abilityName: "MainAbility3",
                    parameters: {
                        formId: 0,
                        bundleName: "com.example.inapploadcard",
                        abilityName: "",
                        moduleNameA: "entry",
                        formName: "widget",
                        dimension: "2*2"
                    }
                }, (err, data) => {
                    console.info("ACTS_InAppCardLoadCard_0700 ====> startAbility err:" + JSON.stringify(err))
                    console.info("ACTS_InAppCardLoadCard_0700 ====> startAbility data:" + JSON.stringify(data))
                })
        })

        function subscribeCallBack(err, data) {
            console.info("ACTS_InAppCardLoadCard_0700 ====> subscribeCallBack err:" + JSON.stringify(err));
            console.info("ACTS_InAppCardLoadCard_0700 ====> subscribeCallBack data:" + JSON.stringify(data))
            console.info("ACTS_InAppCardLoadCard_0700 ====> subscribeCallBack errcode:"
                + JSON.stringify(data.parameters.errCode.errcode))
            if (data.event == ACTS_CARD.events[3]) {
                expect(data.parameters.errCode.errcode == "2293767").assertTrue()
                expect(data.parameters.errCode.msg == "invalid params received on operating form.")
                    .assertTrue()
                commonEvent.unsubscribe(subscriber, unSubscribeCallback);
            }
        }

        function unSubscribeCallback() {
            console.debug("ACTS_InAppCardLoadCard_0700 ====> unSubscribeCallback")
            done()
        }
    })

    /*
    * @tc.number: ACTS_InAppCardLoadCard_0800
    * @tc.name: Create a card,module is wrong
    * @tc.desc: Create a card,module is wrong,return error code
    */
    it('ACTS_InAppCardLoadCard_0800', 0, function (done) {
        let subscriber;
        commonEvent.createSubscriber(ACTS_CARD).then(async (data) => {
            console.debug("====>ACTS_InAppCardLoadCard_0800 Create Subscriber====>");
            subscriber = data;
            commonEvent.subscribe(subscriber, subscribeCallBack);
            globalThis.abilityContext.startAbility(
                {
                    bundleName: "com.example.inapploadcard",
                    abilityName: "MainAbility3",
                    parameters: {
                        formId: 0,
                        bundleName: "com.example.inapploadcard",
                        abilityName: "FormAbility",
                        moduleNameA: "entryrrrt",
                        formName: "widget",
                        dimension: "2*2"
                    }
                }, (err, data) => {
                    console.info("ACTS_InAppCardLoadCard_0800 ====> startAbility err:" + JSON.stringify(err))
                    console.info("ACTS_InAppCardLoadCard_0800 ====> startAbility data:" + JSON.stringify(data))
                })
        })

        async function subscribeCallBack(err, data) {
            console.info("ACTS_InAppCardLoadCard_0800 ====> subscribeCallBack err:" + JSON.stringify(err));
            console.info("ACTS_InAppCardLoadCard_0800 ====> subscribeCallBack data:" + JSON.stringify(data))
            console.info("ACTS_InAppCardLoadCard_0800 ====> subscribeCallBack errcode:"
                + JSON.stringify(data.parameters.errCode.errcode))
            if (data.event == ACTS_CARD.events[3]) {
                expect(data.parameters.errCode.errcode.toString() == "2293789").assertTrue()
                expect(data.parameters.errCode.msg.toString() == "the module not exist in the bundle.").
                    assertTrue()
                commonEvent.unsubscribe(subscriber, unSubscribeCallback);
            }
        }

        function unSubscribeCallback() {
            console.debug("ACTS_InAppCardLoadCard_0800 ====> unSubscribeCallback")
            done()
        }
    })

    /*
    * @tc.number: ACTS_InAppCardLoadCard_0900
    * @tc.name: Create a card,dimension is wrong
    * @tc.desc: Create a card,dimension is wrong,return error code
    */
    it('ACTS_InAppCardLoadCard_0900', 0, function (done) {
        let subscriber;
        commonEvent.createSubscriber(ACTS_CARD).then(async (data) => {
            console.debug("====>ACTS_InAppCardLoadCard_0900 Create Subscriber====>");
            subscriber = data;
            commonEvent.subscribe(subscriber, subscribeCallBack);
            globalThis.abilityContext.startAbility(
                {
                    bundleName: "com.example.inapploadcard",
                    abilityName: "MainAbility3",
                    parameters: {
                        formId: 0,
                        bundleName: "com.example.inapploadcard",
                        abilityName: "FormAbility",
                        moduleNameA: "entry",
                        formName: "widget",
                        dimension: "2*4"
                    }
                }, (err, data) => {
                    console.info("ACTS_InAppCardLoadCard_0900 ====> startAbility err:" + JSON.stringify(err))
                    console.info("ACTS_InAppCardLoadCard_0900 ====> startAbility data:" + JSON.stringify(data))
                })
        })
        function subscribeCallBack(err, data) {
            console.info("ACTS_InAppCardLoadCard_0900 ====> subscribeCallBack err:" + JSON.stringify(err));
            console.info("ACTS_InAppCardLoadCard_0900 ====> subscribeCallBack data:" + JSON.stringify(data))
            console.info("ACTS_InAppCardLoadCard_0900 ====> subscribeCallBack errcode:"
                + JSON.stringify(data.parameters.errCode.errcode))
            if (data.event == ACTS_CARD.events[3]) {
                expect(data.parameters.errCode.errcode == "2293791").assertTrue()
                expect(data.parameters.errCode.msg == "the dimension not exist in the form.").assertTrue()
                commonEvent.unsubscribe(subscriber, unSubscribeCallback);
            }
        }
        function unSubscribeCallback() {
            console.debug("ACTS_InAppCardLoadCard_0900 ====> unSubscribeCallback")
            done()
        }
    })

    /*
     * @tc.number: ACTS_InAppCardLoadCard_1900
     * @tc.name: Create a card
     * @tc.desc:Load in-app card, uninstall provider
     */
    it('ACTS_InAppCardLoadCard_1900', 0, function async(done) {
        let formId;
        let subscriber;
        let abilityDelegator = undefined;
        abilityDelegator = AbilityDelegatorRegistry.getAbilityDelegator()

        let bundleNameErrHap = "com.example.inappcardloadcarderr"
        let uninstallCmd = "bm uninstall -n " + bundleNameErrHap
        let installCmd = "bm install -p /data/app/ActsInAppCardLoadErr.hap"
        let ACTS_CARD_EVENT = {
            events: ["ACTS_CARD_FORM_ID", "ACTS_CARD_ERR_CORD"]
        };
        commonEvent.createSubscriber(ACTS_CARD_EVENT).then(async (data) => {
            console.debug("====>ACTS_InAppCardLoadCard_1900 Create Subscriber====>");
            subscriber = data;
            commonEvent.subscribe(subscriber, subscribeCallBack);
            globalThis.abilityContext.startAbility(
                {
                    bundleName: bundleNameErrHap,
                    abilityName: "MainAbility"
                }, (err, data) => {
                    console.info("ACTS_InAppCardLoadCard_1900 ====> startAbility err:" + JSON.stringify(err))
                    console.info("ACTS_InAppCardLoadCard_1900 ====> startAbility data:" + JSON.stringify(data))
                })
        })
        async function subscribeCallBack(err, data) {
            console.info("ACTS_InAppCardLoadCard_1900 ====> subscribeCallBack")
            if (data.event == ACTS_CARD_EVENT.events[0]) {
                formId = data.parameters.formId;
                await abilityDelegator.executeShellCommand(uninstallCmd, async(err, data) => {
                    console.info('ACTS_InAppCardLoadCard_1900 -executeShellCommand : err : ' +
                        JSON.stringify(err));
                    console.info('ACTS_InAppCardLoadCard_1900 ====> executeShellCommand : data : ' +
                        data.stdResult);
                        await abilityDelegator.executeShellCommand(installCmd, async (err, data) => {
                            console.info('ACTS_InAppCardLoadCard_1900 ====> executeShellCommand : err : ' +
                                JSON.stringify(err));
                            console.info('ACTS_InAppCardLoadCard_1900 ====> executeShellCommand : data : ' +
                                data.stdResult);
                            globalThis.abilityContext.startAbility(
                                {
                                    bundleName: bundleNameErrHap,
                                    abilityName: "MainAbility",
                                    action: "formId",
                                    parameters: { "fromIdAA": formId }
                                }, (err, data) => {
                                    console.info("ACTS_InAppCardLoadCard_1900 ====> startAbility err:" + JSON.stringify(err))
                                    console.info("ACTS_InAppCardLoadCard_1900 ====> startAbility data:" + JSON.stringify(data))
                                })
                        })
                })

            } else if (data.event == ACTS_CARD_EVENT.events[1]) {
                console.info("ACTS_InAppCardLoadCard_1900 ====> events1 err:" + JSON.stringify(data.parameters.err))
                expect(data.parameters.err.errcode == 2293780).assertTrue()
                commonEvent.unsubscribe(subscriber, unSubscribeCallback);
            }
        }
        function unSubscribeCallback() {
            console.debug("ACTS_InAppCardLoadCard_1900 ====> unSubscribeCallback")
            done();
        }
    })

    /*
     * @tc.number: ACTS_InAppCardLoadCard_2000
     * @tc.name: Create a card
     * @tc.desc: Load in-app cards, update provider
     */
    it('ACTS_InAppCardLoadCard_2000', 0, function async(done) {
      let formId;
      let formIdA;
      let subscriber;
      let temp;
      let abilityDelegator = undefined;
      abilityDelegator = AbilityDelegatorRegistry.getAbilityDelegator()

      let bundleNameErrHap = "com.example.inappcardloadcarderr"
      let installCmd = "bm install -p /data/app/ActsInAppCardLoadErrA.hap"
      let ACTS_CARD_EVENT = {
        events: ["ACTS_CARD_FORM_ID", "ACTS_CARD_ERR_CORD"]
      };
      commonEvent.createSubscriber(ACTS_CARD_EVENT).then(async (data) => {
        console.debug("====>ACTS_InAppCardLoadCard_1900 Create Subscriber====>");
        subscriber = data;
        commonEvent.subscribe(subscriber, subscribeCallBack);
        globalThis.abilityContext.startAbility(
          {
            bundleName: bundleNameErrHap,
            abilityName: "MainAbility"
          }, (err, data) => {
            console.info("ACTS_InAppCardLoadCard_2000 ====> startAbility err:" + JSON.stringify(err))
            console.info("ACTS_InAppCardLoadCard_2000 ====> startAbility data:" + JSON.stringify(data))
          })
      })
      async function subscribeCallBack(err, data) {
        console.info("ACTS_InAppCardLoadCard_2000 ====> subscribeCallBack")
        if (data.event == ACTS_CARD_EVENT.events[0]) {
          formId = data.parameters.formId;
          console.debug("ACTS_InAppCardLoadCard_2000 ====>" + formId);
          setTimeout(async () => {
            let loadcmd = "hidumper -s FormMgr -a '-i " + formId + "'"
            console.debug("ACTS_InAppCardLoadCard_2000 ====> loadcmd " + loadcmd);
            abilityDelegator.executeShellCommand(loadcmd, (err, data) => {
              console.info('ACTS_InAppCardLoadCard_2000 =====> executeShellCommand : err : ' +
                JSON.stringify(err));
              console.info('ACTS_InAppCardLoadCard_2000 =====> executeShellCommand : data : ' +
                data.stdResult);
              temp = data["stdResult"];
              console.info('ACTS_InAppCardLoadCard_2000 =====> temp : ' + temp.formCacheData);
              expect(temp.indexOf("08") >= 0).assertTrue()
              expect(temp.indexOf("/common/widget.png") >= 0).assertTrue()
            })

            await abilityDelegator.executeShellCommand(installCmd, async (err, data) => {
              console.info('ACTS_InAppCardLoadCard_2000 ====> executeShellCommand : err : ' +
                JSON.stringify(err));
              console.info('ACTS_InAppCardLoadCard_2000 ====> executeShellCommand : data : ' +
                data.stdResult);
              globalThis.abilityContext.startAbility(
                {
                  bundleName: bundleNameErrHap,
                  abilityName: "MainAbility",
                  action: "formId",
                  parameters: { "fromIdAA": formId }
                }, (err, data) => {
                  console.info("ACTS_InAppCardLoadCard_2000 ====> startAbility err:" + JSON.stringify(err))
                  console.info("ACTS_InAppCardLoadCard_2000 ====> startAbility data:" + JSON.stringify(data))
                })

            })
          }, 1000)
        }
        else if (data.event == ACTS_CARD_EVENT.events[1]) {
          formIdA = data.parameters.formId;
          expect(formIdA == formId).assertTrue()
          console.debug("ACTS_InAppCardLoadCard_2000 ====>" + formIdA);
          setTimeout(async () => {
            let cmd = "hidumper -s FormMgr -a '-i " + formIdA + "'"
            console.debug("ACTS_InAppCardLoadCard_2000 ====> cmd " + cmd);
            abilityDelegator.executeShellCommand(cmd,
              (err, data) => {
                console.info('ACTS_InAppCardLoadCard_2000 =====> executeShellCommand : err : ' +
                  JSON.stringify(err));
                console.info('ACTS_InAppCardLoadCard_2000 =====> executeShellCommand : data : ' +
                  data.stdResult);
                temp = data["stdResult"];
                console.info('ACTS_InAppCardLoadCard_2000 =====> temp : ' + temp.formCacheData);
                expect(temp.indexOf("11") >= 0).assertTrue()
                expect(temp.indexOf("/common/cold.png") >= 0).assertTrue()
                commonEvent.unsubscribe(subscriber, unSubscribeCallback);
              })
          }, 1000)
        }

      }
      function unSubscribeCallback() {
        console.debug("ACTS_InAppCardLoadCard_2000 ====> unSubscribeCallback")
        done();
      }
    })
  })
}