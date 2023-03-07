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
import abilityDelegatorRegistry from '@ohos.application.abilityDelegatorRegistry'
import commonEvent from "@ohos.commonEvent"

var subscriberInfo_MainAbility2 = {
    events: ["GetCurrentTopAbilityB"],
};
const START_ABILITY_TIMEOUT = 4000;

export default function abilityTest() {
    describe('ActsParticleAbilityTest', function () {
        function sleep(time) {
            return new Promise(resolve => setTimeout(resolve, time));
          }

        beforeEach(async(done)=>{
            await sleep(START_ABILITY_TIMEOUT);
            done()
        })
        /**
         *@tc.number: ACTS_GetCurrentTopAbility_0100
         *@tc.name: Verify the interface for obtaining the Ability of the foreground
         *@tc.desc:Start PageAbility1,Ability2 to be tested in turn, 
         * and get the current foreground Ability (AsyncCallback)
         */
        it('ACTS_GetCurrentTopAbility_0100', 0, async function (done) {
            console.log("ACTS_GetCurrentTopAbility_0100 --- start");
            var flag = true;
            var Subscriber;
            var AbilityDelegator = abilityDelegatorRegistry.getAbilityDelegator();

            function SubscribeCallBack(err, data) {
                console.debug("ACTS_GetCurrentTopAbility_0100====>Subscribe CallBack data:====>" 
                + JSON.stringify(data));
                expect(data.event == 'GetCurrentTopAbilityB').assertTrue();
                if (data.event == 'GetCurrentTopAbilityB') {
                    AbilityDelegator.getCurrentTopAbility((err, data) => {
                        console.log("ACTS_GetCurrentTopAbility_0100 and");
                        console.debug("====>thisTopAbility_0100====>" + JSON.stringify(data));
                        console.debug("====>thisTopAbility_0100====>want====>" 
                        + JSON.stringify(data.lastRequestWant));
                        console.debug("====>thisTopAbility_0100====>abilityName====>"
                        + JSON.stringify(data.lastRequestWant.abilityName));
                        console.debug("====>start startAbility====>");
                        if (data.lastRequestWant.abilityName == "Ability2") {
                            flag = false
                            console.debug("====>0100====>flag" + flag);
                            commonEvent.unsubscribe(Subscriber, UnSubscribeCallback);
                        }
                    })
                }
            }

            commonEvent.createSubscriber(subscriberInfo_MainAbility2).then(async (data) => {
                console.debug("ACTS_GetCurrentTopAbility_0100====>Create Subscriber====>");
                Subscriber = data;
                commonEvent.subscribe(Subscriber, SubscribeCallBack);

                console.log("ACTS_GetCurrentTopAbility_0100 start");
                await globalThis.abilityContext.startAbility(
                    {
                        bundleName: 'com.example.actsgetcurrenttopabilitystageatest',
                        abilityName: 'Ability1'
                    }, (err) => {
                    console.debug("====>ACTS_GetCurrentTopAbility_0100 err:" + JSON.stringify(err))
                })
                console.log("ACTS_GetCurrentTopAbility_0100 end");
            })

            async function UnSubscribeCallback() {
                console.debug("ACTS_GetCurrentTopAbility_0100====>UnSubscribe CallBack====>");
                await globalThis.ability2Context.terminateSelf();
                await globalThis.ability3Context.terminateSelf();
                done();
            }

            setTimeout(() => {
                if (flag == true) {
                    console.debug("====>0100====>end====>flag" + flag);
                    console.debug("in ACTS_GetCurrentTopAbility_0100 - timeout");
                    commonEvent.unsubscribe(Subscriber, UnSubscribeCallback);
                    expect().assertFail();
                }
                console.debug("ACTS_GetCurrentTopAbility_0100 - timeout");
            }, START_ABILITY_TIMEOUT);
        })

         /**
         *@tc.number: ACTS_GetCurrentTopAbility_0300
         *@tc.name: Verify the interface for obtaining the Ability of the foreground
         *@tc.desc:Start PageAbility1,Ability2 to be tested in turn, 
         * schedule both the started abilities to the background,
         * and get the current foreground Ability (AsyncCallback)
         */
         it('ACTS_GetCurrentTopAbility_0300', 0, async function (done) {
            console.log("ACTS_GetCurrentTopAbility_0300 --- start");
            var flag = true;
            var Subscriber;
            var AbilityDelegator = await abilityDelegatorRegistry.getAbilityDelegator();
            var abilityB;

            function SubscribeCallBack(err, data) {
                console.debug("ACTS_GetCurrentTopAbility_0300====>Subscribe CallBack data:====>" 
                + JSON.stringify(data));
                expect(data.event == 'GetCurrentTopAbilityB').assertTrue();
                if (data.event == 'GetCurrentTopAbilityB') {
                    AbilityDelegator.doAbilityForeground(abilityB).then((data) => {
                        console.debug("ACTS_GetCurrentTopAbility_0300====>ability to top====>" + data);
                        if (data == true) {
                            AbilityDelegator.getCurrentTopAbility((err, data) => {
                                console.debug("====>thisTopAbility_0300====>err====>" + err)
                                console.debug("====>thisTopAbility_0300====>want====>" 
                                + JSON.stringify(data.lastRequestWant))
                                if (data.lastRequestWant.abilityName != "Ability1" &&
                                data.lastRequestWant.abilityName != "Ability2") {
                                    console.debug("ACTS_GetCurrentTopAbility_0300====>true====>"
                                    + JSON.stringify(data.lastRequestWant.abilityName));
                                    commonEvent.unsubscribe(Subscriber, UnSubscribeCallback)
                                }
                            })
                        }
                    })
                }
            }

            function UnSubscribeCallback() {
                flag = false
                console.debug("ACTS_GetCurrentTopAbility_0300====>UnSubscribe CallBack====>");
                globalThis.ability2Context.terminateSelf();
                globalThis.ability3Context.terminateSelf();
                done();
            }

            Subscriber = await commonEvent.createSubscriber(subscriberInfo_MainAbility2);
            console.debug("ACTS_GetCurrentTopAbility_0300====>Create Subscriber====>");
            commonEvent.subscribe(Subscriber, SubscribeCallBack);

            abilityB = await AbilityDelegator.getCurrentTopAbility()

            await globalThis.abilityContext.startAbility(
                {
                    bundleName: 'com.example.actsgetcurrenttopabilitystageatest',
                    abilityName: 'Ability1'
                })
            setTimeout(() => {
                if (flag == true) {
                    console.debug("====>0300====>end====>flag" + flag);
                    console.debug("in ACTS_GetCurrentTopAbility_0300 - timeout");
                    commonEvent.unsubscribe(Subscriber, UnSubscribeCallback);
                    expect().assertFail();
                }
                console.debug("ACTS_GetCurrentTopAbility_0300 - timeout");
            }, START_ABILITY_TIMEOUT);
        })

        /**
         *@tc.number: ACTS_GetCurrentTopAbility_0400
         *@tc.name: Verify the interface for obtaining the Ability of the foreground
         *@tc.desc:PageAbility1,Ability2 to be tested in turn, and get the current foreground Ability (Promise)
         */
        it('ACTS_GetCurrentTopAbility_0400', 0, async function (done) {
            console.log("ACTS_GetCurrentTopAbility_0400 --- start")
            var flag = true;
            var Subscriber;
            var AbilityDelegator = abilityDelegatorRegistry.getAbilityDelegator();

            function SubscribeCallBack(err, data) {
                console.debug("ACTS_GetCurrentTopAbility_0400====>Subscribe CallBack data:====>" 
                + JSON.stringify(data));
                expect(data.event == 'GetCurrentTopAbilityB').assertTrue();
                if (data.event == 'GetCurrentTopAbilityB') {
                    AbilityDelegator.getCurrentTopAbility().then((data) => {
                        console.debug("====>thisTopAbility====>" + JSON.stringify(data.lastRequestWant));
                        console.debug("====>start startAbility====>");
                        if (data.lastRequestWant.abilityName == 'Ability2') {
                            console.debug("====>0400====>flag" + flag);
                            commonEvent.unsubscribe(Subscriber, UnSubscribeCallback);
                        }
                    })
                }
            }

            commonEvent.createSubscriber(subscriberInfo_MainAbility2).then(async (data) => {
                console.debug("ACTS_GetCurrentTopAbility_0400====>Create Subscriber====>");
                Subscriber = data;
                await commonEvent.subscribe(Subscriber, SubscribeCallBack);
                await globalThis.abilityContext.startAbility(
                    {
                        bundleName: 'com.example.actsgetcurrenttopabilitystageatest',
                        abilityName: 'Ability1'
                    })
            })

            function UnSubscribeCallback() {
                flag = false
                console.debug("ACTS_GetCurrentTopAbility_0400====>UnSubscribe CallBack====>");
                globalThis.ability2Context.terminateSelf();
                globalThis.ability3Context.terminateSelf();
                done();
            }
            setTimeout(() => {
                if (flag == true) {
                    console.debug("====>0400====>end====>flag" + flag);
                    console.debug("in ACTS_GetCurrentTopAbility_0400 - timeout");
                    commonEvent.unsubscribe(Subscriber, UnSubscribeCallback);
                    expect().assertFail();
                }
                console.debug("ACTS_GetCurrentTopAbility_0400 - timeout");
            }, START_ABILITY_TIMEOUT);
        })

        /**
         *@tc.number: ACTS_GetCurrentTopAbility_0600
         *@tc.name: Verify the interface for obtaining the Ability of the foreground
         *@tc.desc:Start PageAbility1,Ability2 to be tested in turn, 
         * schedule both the started abilities to the background,
         * and get the current foreground Ability (Promise)
         *
         */
        it('ACTS_GetCurrentTopAbility_0600', 0, async function (done) {
            console.log("ACTS_GetCurrentTopAbility_0600 --- start");
            var flag = true;
            var Subscriber;
            var AbilityDelegator = abilityDelegatorRegistry.getAbilityDelegator();
            var abilityB;
            abilityB = await AbilityDelegator.getCurrentTopAbility();

            function SubscribeCallBack(err, data) {
                console.debug("ACTS_GetCurrentTopAbility_0600====>Subscribe CallBack data:====>" 
                + JSON.stringify(data));
                expect(data.event == 'GetCurrentTopAbilityB').assertTrue();
                if (data.event == 'GetCurrentTopAbilityB') {
                    AbilityDelegator.doAbilityForeground(abilityB).then((data) => {
                        if (data == true) {
                            AbilityDelegator.getCurrentTopAbility().then((data) => {
                                console.debug("ACTS_GetCurrentTopAbility_0600====>ability to top====>" +
                                JSON.stringify(data.lastRequestWant));
                                if (data.lastRequestWant.abilityName != "Ability1" &&
                                data.lastRequestWant.abilityName != "Ability2") {
                                    console.debug("ACTS_GetCurrentTopAbility_0600====>true====>" + data);
                                    commonEvent.unsubscribe(Subscriber, UnSubscribeCallback);
                                }
                            })
                        }
                    })
                }
            }

            commonEvent.createSubscriber(subscriberInfo_MainAbility2).then(async (data) => {
                console.debug("ACTS_GetCurrentTopAbility_0600====>Create Subscriber====>");
                Subscriber = data;
                await commonEvent.subscribe(Subscriber, SubscribeCallBack);
                await globalThis.abilityContext.startAbility(
                    {
                        bundleName: 'com.example.actsgetcurrenttopabilitystageatest',
                        abilityName: 'Ability1'
                    })
            })
            function UnSubscribeCallback() {
                flag = false;
                console.debug("ACTS_GetCurrentTopAbility_0600====>UnSubscribe CallBack====>");
                globalThis.ability2Context.terminateSelf();
                globalThis.ability3Context.terminateSelf();
                done();
            }
            setTimeout(() => {
                if (flag == true) {
                    console.debug("====>0600====>end====>flag" + flag);
                    console.debug("in ACTS_GetCurrentTopAbility_0600 - timeout");
                    commonEvent.unsubscribe(Subscriber, UnSubscribeCallback);
                    expect().assertFail();
                }
                console.debug("ACTS_GetCurrentTopAbility_0600 - timeout");
            }, START_ABILITY_TIMEOUT);
        })
    })
}