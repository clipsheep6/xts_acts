// @ts-nocheck
/*
 * Copyright (c) 2021 Huawei Device Co., Ltd.
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
import {describe, expect, it} from 'deccjsunit/index'
import commonEvent from '@ohos.commonevent'
import featureAbility from '@ohos.ability.featureability'


var subscriberInfoGetMainAbility2 = {
    events: ["mainAbility2_onCreate",
             "mainAbility2_onShow",
             "mainAbility2_onActive"]
}

var subscriberInfoMainAbility2TestApp = {
    events: ["mainAbility2_onCreate"]
}

var subscriberInfoMainAbility2TestIndex = {
    events: ["mainAbility2_onShow",
    "mainAbility2_onActive",
    "mainAbility2_onInactive",
    "mainAbility2_onHide",
    "mainAbility2_onShow",
    "mainAbility2_onActive"]
}

var subscriberInfoMainAbility2HelpApp = {
    events: ["help_mainAbility2_onCreate",
             "help_mainAbility2_onDestroy"]
}

var subscriberInfoMainAbility2HelpIndex = {
    events: ["help_mainAbility2_onShow",
             "help_mainAbility2_onActive",
             "help_mainAbility2_onInactive",
             "help_mainAbility2_onHide"]
}

var subscriberInfoMainAbility2HelpApi8 = {
    events: ["mainAbility2_onCreate_help_api8",
             "mainAbility2_onDestroy_help_api8",
             "mainAbility2_onWindowStageCreate_help_api8",
             "mainAbility2_onForeground_help_api8",
             "mainAbility2_onBackground_help_api8"]
}

describe("AbilityStartTest", function () {
    var i = 0;
    var j = 0;
    var TAG = "";
    var listKey = ["", "", ""];

    var listKey0800TestApp = [];
    var listKey0800TestIndex = ["", "", "", "", "", ""];
    var listKey0800HelpApp = ["", ""];
    var listKey0800HelpIndex = ["", "", "", ""];

    var listKey0700TestApp = [];
    var listKey0700TestIndex = ["", "", "", "", "", ""];
    var listKey0700Help = ["", "", "", "", ""];

    function SubscribeCallBack(err, data) {
        console.log(TAG + " Subscribe CallBack data:" + JSON.stringify(data));
        if (data.event == "mainAbility2_onCreate") {
            listKey[0] = "onCreate";
        } else if (data.event == "mainAbility2_onShow") {
            listKey[1] = "onShow";
        } else if (data.event == "mainAbility2_onActive") {
            listKey[2] = "onActive";
        }
    }

    function SubscribeCallBackTestApp0800(err, data) {
        console.log(TAG + "Subscribe CallBack data test app:" + JSON.stringify(data));
        if (data.event == "mainAbility2_onCreate") {
            listKey0800TestApp[0] = "onCreate";
        }
    }

    function SubscribeCallBackTestIndex0800(err, data) {
        console.log(TAG + "Subscribe CallBack data test index:" + JSON.stringify(data));
        if (data.event == "mainAbility2_onShow") {
            if (i == 0) {
                listKey0800TestIndex[0] = "onShow";
                i++;
            } else {
                listKey0800TestIndex[4] = "onShow";
            }
        } else if (data.event == "mainAbility2_onActive") {
            if (j == 0) {
                listKey0800TestIndex[1] = "onActive";
                j++;
            } else {
                listKey0800TestIndex[5] = "onActive";
            }
        } else if (data.event == "mainAbility2_onInactive") {
            listKey0800TestIndex[2] = "onInactive";
        } else if (data.event == "mainAbility2_onHide") {
            listKey0800TestIndex[3] = "onHide";
        }
    }

    function SubscribeCallBackHelpApp(err, data) {
        console.log(TAG + "Subscribe CallBack data help app:" + JSON.stringify(data));
        if (data.event == "help_mainAbility2_onCreate") {
            listKey0800HelpApp[0] = "onCreate";
        } else if (data.event == "help_mainAbility2_onDestroy") {
            listKey0800HelpApp[1] = "onDestroy";
        }
    }

    function SubscribeCallBackHelpIndex(err, data) {
        console.log(TAG + "Subscribe CallBack data help index:" + JSON.stringify(data));
        if (data.event == "help_mainAbility2_onShow") {
            listKey0800HelpIndex[0] = "onShow";
        } else if (data.event == "help_mainAbility2_onActive") {
            listKey0800HelpIndex[1] = "onActive";
        } else if (data.event == "help_mainAbility2_onInactive") {
            listKey0800HelpIndex[2] = "onInactive";
        } else if (data.event == "help_mainAbility2_onHide") {
            listKey0800HelpIndex[3] = "onHide";
        }
    }

    function SubscribeCallBackTestApp0700(err, data) {
        console.log(TAG + "Subscribe CallBack data test app:" + JSON.stringify(data));
        if (data.event == "mainAbility2_onCreate") {
            listKey0700TestApp[0] = "onCreate";
        }
    }

    function SubscribeCallBackTestIndex0700(err, data) {
        console.log(TAG + "Subscribe CallBack data test index:" + JSON.stringify(data));
        if (data.event == "mainAbility2_onShow") {
            if (i == 0) {
                listKey0700TestIndex[0] = "onShow";
                i++;
            } else {
                listKey0700TestIndex[4] = "onShow";
            }
        } else if (data.event == "mainAbility2_onActive") {
            if (j == 0) {
                listKey0700TestIndex[1] = "onActive";
                j++;
            } else {
                listKey0700TestIndex[5] = "onActive";
            }
        } else if (data.event == "mainAbility2_onInactive") {
            listKey0700TestIndex[2] = "onInactive";
        } else if (data.event == "mainAbility2_onHide") {
            listKey0700TestIndex[3] = "onHide";
        }
    }

    function SubscribeCallBackHelp0700(err, data) {
        console.log(TAG + "Subscribe CallBack data help api8:" + JSON.stringify(data));
        if (data.event == "mainAbility2_onCreate_help_api8") {
            listKey0700Help[0] = "onCreate";
        } else if (data.event == "mainAbility2_onDestroy_help_api8") {
            listKey0700Help[1] = "onDestroy";
        } else if (data.event == "mainAbility2_onWindowStageCreate_help_api8") {
            listKey0700Help[2] = "onWindowStageCreate";
        } else if (data.event == "mainAbility2_onForeground_help_api8") {
            listKey0700Help[3] = "onForeground";
        } else if (data.event == "mainAbility2_onBackground_help_api8") {
            listKey0700Help[4] = "onBackground";
        }
    }

    /*
     * @tc.number  SUB_AA_OpenHarmony_AbilityStart_0800
     * @tc.name    Different applications,
     * @tc.desc    Function test
     * @tc.level   0
     */
    it("SUB_AA_OpenHarmony_AbilityStart_0800", 0, async function (done) {
        console.log("----------start SUB_AA_OpenHarmony_AbilityStart_0800----------")
        TAG = "SUB_AA_OpenHarmony_AbilityStart_0800";
        var Subscriber1;
        var Subscriber2;
        var Subscriber3;
        var Subscriber4;
        listKey0800TestApp = [""];
        listKey0800TestIndex = ["", "", "", "", "", ""];
        listKey0800HelpApp = ["", ""];
        listKey0800HelpIndex = ["", "", "", ""];

        commonEvent.createSubscriber(subscriberInfoMainAbility2TestApp).then(async (data) => {
            console.log(TAG + "====>Create Subscriber test app====>");
            Subscriber1 = data;
            await commonEvent.subscribe(Subscriber1, SubscribeCallBackTestApp0800);
        })

        commonEvent.createSubscriber(subscriberInfoMainAbility2TestIndex).then(async (data) => {
            console.log(TAG + "====>Create Subscriber test index====>");
            Subscriber2 = data;
            await commonEvent.subscribe(Subscriber2, SubscribeCallBackTestIndex0800);
        })

        commonEvent.createSubscriber(subscriberInfoMainAbility2HelpApp).then(async (data) => {
            console.log(TAG + "====>Create Subscriber help app====>");
            Subscriber3 = data;
            await commonEvent.subscribe(Subscriber3, SubscribeCallBackHelpApp);
        })

        commonEvent.createSubscriber(subscriberInfoMainAbility2HelpIndex).then(async (data) => {
            console.log(TAG + "====>Create Subscriber help index====>");
            Subscriber4 = data;
            await commonEvent.subscribe(Subscriber4, SubscribeCallBackHelpIndex);
        })

        featureAbility.startAbility({
            want: {
                abilityName: "com.example.jsmyapplication.MainAbility2",
                bundleName: "com.example.jsmyapplication"
            }
        }, (err, data) => {
            console.log(TAG + ": startAbility success , err: " + JSON.stringify(err) +
            ",data: " + JSON.stringify(data));
        });


        featureAbility.startAbility({
            want: {
                abilityName: "com.example.jsmyapplicationhelp7.MainAbility2",
                bundleName: "com.example.jsmyapplicationhelp7"
            }
        }, (err, data) => {
            console.log(TAG + ": startAbility success , err: " + JSON.stringify(err) +
            ",data: " + JSON.stringify(data));
            setTimeout(function () {
                console.log(TAG + "startAbility listKey0800TestApp : " + listKey0800TestApp);
                console.log(TAG + "startAbility listKey0800TestIndex : " + listKey0800TestIndex);
                console.log(TAG + "startAbility listKey0800HelpApp : " + listKey0800HelpApp);
                console.log(TAG + "startAbility listKey0800HelpIndex : " + listKey0800HelpIndex);
                expect(listKey0800TestApp[0]).assertEqual("onCreate");
                expect(listKey0800TestIndex[0]).assertEqual("onShow");
                expect(listKey0800TestIndex[1]).assertEqual("onActive");
                expect(listKey0800TestIndex[2]).assertEqual("onInactive");
                expect(listKey0800TestIndex[3]).assertEqual("onHide");
                expect(listKey0800TestIndex[4]).assertEqual("onShow");
                expect(listKey0800TestIndex[5]).assertEqual("onActive");
                expect(listKey0800HelpApp[0]).assertEqual("onCreate");
                expect(listKey0800HelpApp[1]).assertEqual("onDestroy");
                expect(listKey0800HelpIndex[0]).assertEqual("onShow");
                expect(listKey0800HelpIndex[1]).assertEqual("onActive");
                expect(listKey0800HelpIndex[2]).assertEqual("onInactive");
                expect(listKey0800HelpIndex[3]).assertEqual("onHide");
                done();
            }, 4000)
            console.log("----------end SUB_AA_OpenHarmony_AbilityStart_0800----------")
        })
    })


    /*
     * @tc.number  SUB_AA_OpenHarmony_AbilityStart_0700
     * @tc.name    Different applications,application of API7 pulls up application of API8
     * @tc.desc    Function test
     * @tc.level   0
     */
    it("SUB_AA_OpenHarmony_AbilityStart_0700", 0, async function (done) {
        console.log("----------start SUB_AA_OpenHarmony_AbilityStart_0700----------")
        TAG = "SUB_AA_OpenHarmony_AbilityStart_0700";
        var Subscriber5;
        var Subscriber6;
        var Subscriber7;
        listKey0700TestApp = [""];
        listKey0700TestIndex = ["", "", "", "", "", ""];
        listKey0700Help = ["", "", "", "", ""];

        commonEvent.createSubscriber(subscriberInfoMainAbility2TestApp).then(async (data) => {
            console.log(TAG + "====>Create Subscriber test app====>");
            Subscriber5 = data;
            await commonEvent.subscribe(Subscriber5, SubscribeCallBackTestApp0700);
        })

        commonEvent.createSubscriber(subscriberInfoMainAbility2TestIndex).then(async (data) => {
            console.log(TAG + "====>Create Subscriber test index====>");
            Subscriber6 = data;
            await commonEvent.subscribe(Subscriber6, SubscribeCallBackTestIndex0700);
        })

        commonEvent.createSubscriber(subscriberInfoMainAbility2HelpApi8).then(async (data) => {
            console.log(TAG + "====>Create Subscriber help app====>");
            Subscriber7 = data;
            await commonEvent.subscribe(Subscriber7, SubscribeCallBackHelp0700);
        })

        featureAbility.startAbility({
            want: {
                abilityName: "com.example.jsmyapplication.MainAbility2",
                bundleName: "com.example.jsmyapplication"
            }
        }, (err, data) => {
            console.log(TAG + ": api7 startAbility success , err: " + JSON.stringify(err) +
            ",data: " + JSON.stringify(data));
        });

        featureAbility.startAbility({
            want: {
                abilityName: "com.example.etsmyapplicationhelp.MainAbility2",
                bundleName: "com.example.etsmyapplicationhelp"
            }
        }, (err, data) => {
            console.log(TAG + ": api8 startAbility success , err: " + JSON.stringify(err) +
            ",data: " + JSON.stringify(data));
            setTimeout(function () {
                console.log(TAG + "startAbility listKey0700TestApp : " + listKey0700TestApp);
                console.log(TAG + "startAbility listKey0700TestIndex : " + listKey0700TestIndex);
                console.log(TAG + "startAbility listKey0700Help_api8 : " + listKey0700Help);
                expect(listKey0700TestApp[0]).assertEqual("onCreate");
                expect(listKey0700TestIndex[0]).assertEqual("onShow");
                expect(listKey0700TestIndex[1]).assertEqual("onActive");
                expect(listKey0700TestIndex[2]).assertEqual("onInactive");
                expect(listKey0700TestIndex[3]).assertEqual("onHide");
                expect(listKey0700TestIndex[4]).assertEqual("onShow");
                expect(listKey0700TestIndex[5]).assertEqual("onActive");

                expect(listKey0700Help[0]).assertEqual("onCreate");
                expect(listKey0700Help[1]).assertEqual("onDestroy");
                expect(listKey0700Help[2]).assertEqual("onWindowStageCreate");
                expect(listKey0700Help[3]).assertEqual("onForeground");
                expect(listKey0700Help[4]).assertEqual("onBackground");
                done();
            }, 4500)
            console.log("----------end SUB_AA_OpenHarmony_AbilityStart_0700----------")
        })
    })

    /*
     * @tc.number  SUB_AA_OpenHarmony_startFromSysService_0200
     * @tc.name    Verify system service startup Ability API7
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('SUB_AA_OpenHarmony_startFromSysService_0200', 0, async function (done) {
        console.log("------------start SUB_AA_OpenHarmony_startFromSysService_0200-------------");
        TAG = "SUB_AA_OpenHarmony_startFromSysService_0200";
        var Subscriber = "";
        listKey = [""];

        commonEvent.createSubscriber(subscriberInfoGetMainAbility2).then(async (data) => {
            console.debug(TAG + "====>Create Subscriber====>");
            Subscriber = data;
            console.log(TAG + "Subscriber is : " + JSON.stringify(Subscriber))
            await commonEvent.subscribe(Subscriber, SubscribeCallBack);
            console.log(TAG + "Subscriber is END: ")
        });

        featureAbility.startAbility({
            want: {
                abilityName: "com.example.jsmyapplication.MainAbility2",
                bundleName: "com.example.jsmyapplication",
                parameters: {
                    aa: "aa start -a com.myapplication.MainAbility -b com.myapplication"
                }
            }
        }, (err, data) => {
            console.log(TAG + ": startAbility success , err: " + JSON.stringify(err) +

            ",data: " + JSON.stringify(data));
            setTimeout(function () {
                expect(listKey[0]).assertEqual("onCreate");
                expect(listKey[1]).assertEqual("onShow");
                expect(listKey[2]).assertEqual("onActive");
                done();
            }, 2000)
        });
        console.log("------------end SUB_AA_OpenHarmony_startFromSysService_0200-------------");
    });

})