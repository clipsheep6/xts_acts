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


var subscriberInfo_getMainAbility2 = {
    events: ["mainAbility2_onCreate",
    "mainAbility2_onShow",
    "mainAbility2_onActive"]
}

var subscriberInfo_MainAbility2_test_app = {
    events: ["mainAbility2_onCreate"]
}

var subscriberInfo_MainAbility2_test_index = {
    events: ["mainAbility2_onShow",
    "mainAbility2_onActive",
    "mainAbility2_onInactive",
    "mainAbility2_onHide",
    "mainAbility2_onShow",
    "mainAbility2_onActive"]
}

var subscriberInfo_MainAbility2_help_app = {
    events: ["help_mainAbility2_onCreate",
    "help_mainAbility2_onDestroy"]
}

var subscriberInfo_MainAbility2_help_index = {
    events: ["help_mainAbility2_onShow",
    "help_mainAbility2_onActive",
    "help_mainAbility2_onInactive",
    "help_mainAbility2_onHide"]
}

var subscriberInfo_MainAbility2_help_api8 = {
    events: ["mainAbility2_onCreate_help_api8",
    "mainAbility2_onDestroy_help_api8",
    "mainAbility2_onWindowStageCreate_help_api8",
    "mainAbility2_onForeground_help_api8",
    "mainAbility2_onBackground_help_api8"]
}

describe("ApplicationInfoTest", function () {
    var i = 0;
    var j = 0;
    var TAG = "";
    var listKey = ["", "", ""];

    var listKey0800_test_app = [];
    var listKey0800_test_index = ["", "", "", "", "", ""];
    var listKey0800_help_app = ["", ""];
    var listKey0800_help_index = ["", "", "", ""];

    var listKey0700_test_app = [];
    var listKey0700_test_index = ["", "", "", "", "", ""];
    var listKey0700_help = ["", "", "", "", ""];

    function SubscribeCallBack_test_app(err, data) {
        console.log(TAG + "Subscribe CallBack data test app:" + JSON.stringify(data));
        if (data.event == "mainAbility2_onCreate") {
            listKey0800_test_app[0] = "onCreate";
        }
    }

    function SubscribeCallBack_test_index(err, data) {
        console.log(TAG + "Subscribe CallBack data test index:" + JSON.stringify(data));
        if (data.event == "mainAbility2_onShow") {
            if (i == 0) {
                listKey0800_test_index[0] = "onShow";
                i++;
            } else {
                listKey0800_test_index[4] = "onShow";
            }
        } else if (data.event == "mainAbility2_onActive") {
            if (j == 0) {
                listKey0800_test_index[1] = "onActive";
                j++;
            } else {
                listKey0800_test_index[5] = "onActive";
            }
        } else if (data.event == "mainAbility2_onInactive") {
            listKey0800_test_index[2] = "onInactive";
        } else if (data.event == "mainAbility2_onHide") {
            listKey0800_test_index[3] = "onHide";
        }
    }

    function SubscribeCallBack_help_app(err, data) {
        console.log(TAG + "Subscribe CallBack data help app:" + JSON.stringify(data));
        if (data.event == "help_mainAbility2_onCreate") {
            listKey0800_help_app[0] = "onCreate";
        } else if (data.event == "help_mainAbility2_onDestroy") {
            listKey0800_help_app[1] = "onDestroy";
        }
    }

    function SubscribeCallBack_help_index(err, data) {
        console.log(TAG + "Subscribe CallBack data help index:" + JSON.stringify(data));
        if (data.event == "help_mainAbility2_onShow") {
            listKey0800_help_index[0] = "onShow";
        } else if (data.event == "help_mainAbility2_onActive") {
            listKey0800_help_index[1] = "onActive";
        } else if (data.event == "help_mainAbility2_onInactive") {
            listKey0800_help_index[2] = "onInactive";
        } else if (data.event == "help_mainAbility2_onHide") {
            listKey0800_help_index[3] = "onHide";
        }
    }

    function SubscribeCallBack_test_app(err, data) {
        console.log(TAG + "Subscribe CallBack data test app:" + JSON.stringify(data));
        if (data.event == "mainAbility2_onCreate") {
            listKey0700_test_app[0] = "onCreate";
        }
    }

    function SubscribeCallBack_test_index(err, data) {
        console.log(TAG + "Subscribe CallBack data test index:" + JSON.stringify(data));
        if (data.event == "mainAbility2_onShow") {
            if (i == 0) {
                listKey0700_test_index[0] = "onShow";
                i++;
            } else {
                listKey0700_test_index[4] = "onShow";
            }
        } else if (data.event == "mainAbility2_onActive") {
            if (j == 0) {
                listKey0700_test_index[1] = "onActive";
                j++;
            } else {
                listKey0700_test_index[5] = "onActive";
            }
        } else if (data.event == "mainAbility2_onInactive") {
            listKey0700_test_index[2] = "onInactive";
        } else if (data.event == "mainAbility2_onHide") {
            listKey0700_test_index[3] = "onHide";
        }
    }

    function SubscribeCallBack_help(err, data) {
        console.log(TAG + "Subscribe CallBack data help api8:" + JSON.stringify(data));
        if (data.event == "mainAbility2_onCreate_help_api8") {
            listKey0700_help[0] = "onCreate";
        } else if (data.event == "mainAbility2_onDestroy_help_api8") {
            listKey0700_help[1] = "onDestroy";
        } else if (data.event == "mainAbility2_onWindowStageCreate_help_api8") {
            listKey0700_help[2] = "onWindowStageCreate";
        } else if (data.event == "mainAbility2_onForeground_help_api8") {
            listKey0700_help[3] = "onForeground";
        } else if (data.event == "mainAbility2_onBackground_help_api8") {
            listKey0700_help[4] = "onBackground";
        }
    }

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

    /*
     * @tc.number  SUB_AA_OpenHarmony_AbilityStart_0800
     * @tc.name    Api7 Ability1 lifts Api7 Ability2 and ends Ability2 in different applications
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
        listKey0800_test_app = [""];
        listKey0800_test_index = ["", "", "", "", "", ""];
        listKey0800_help_app = ["", ""];
        listKey0800_help_index = ["", "", "", ""];

        commonEvent.createSubscriber(subscriberInfo_MainAbility2_test_app).then(async (data) => {
            console.log(TAG + "====>Create Subscriber test app====>");
            Subscriber1 = data;
            await commonEvent.subscribe(Subscriber1, SubscribeCallBack_test_app);
        })

        commonEvent.createSubscriber(subscriberInfo_MainAbility2_test_index).then(async (data) => {
            console.log(TAG + "====>Create Subscriber test index====>");
            Subscriber2 = data;
            await commonEvent.subscribe(Subscriber2, SubscribeCallBack_test_index);
        })

        commonEvent.createSubscriber(subscriberInfo_MainAbility2_help_app).then(async (data) => {
            console.log(TAG + "====>Create Subscriber help app====>");
            Subscriber3 = data;
            await commonEvent.subscribe(Subscriber3, SubscribeCallBack_help_app);
        })

        commonEvent.createSubscriber(subscriberInfo_MainAbility2_help_index).then(async (data) => {
            console.log(TAG + "====>Create Subscriber help index====>");
            Subscriber4 = data;
            await commonEvent.subscribe(Subscriber4, SubscribeCallBack_help_index);
        })

        featureAbility.startAbility({
            want: {
                abilityName: "com.example.jsmyapplication.MainAbility2",
                bundleName: "com.example.jsmyapplication"
            }
        }, (err, data) => {
            console.log(TAG + ": startAbility success , err: " + JSON.stringify(err) + ",data: " + JSON.stringify(data));
        });


        featureAbility.startAbility({
            want: {
                abilityName: "com.example.jsmyapplicationhelp7.MainAbility2",
                bundleName: "com.example.jsmyapplicationhelp7"
            }
        }, (err, data) => {
            console.log(TAG + ": startAbility success , err: " + JSON.stringify(err) + ",data: " + JSON.stringify(data));
            setTimeout(function () {
                console.log(TAG + "startAbility listKey0800_test_app : " + listKey0800_test_app);
                console.log(TAG + "startAbility listKey0800_test_index : " + listKey0800_test_index);
                console.log(TAG + "startAbility listKey0800_help_app : " + listKey0800_help_app);
                console.log(TAG + "startAbility listKey0800_help_index : " + listKey0800_help_index);
                expect(listKey0800_test_app[0]).assertEqual("onCreate");
                expect(listKey0800_test_index[0]).assertEqual("onShow");
                expect(listKey0800_test_index[1]).assertEqual("onActive");
                expect(listKey0800_test_index[2]).assertEqual("onInactive");
                expect(listKey0800_test_index[3]).assertEqual("onHide");
                expect(listKey0800_test_index[4]).assertEqual("onShow");
                expect(listKey0800_test_index[5]).assertEqual("onActive");
                expect(listKey0800_help_app[0]).assertEqual("onCreate");
                expect(listKey0800_help_app[1]).assertEqual("onDestroy");
                expect(listKey0800_help_index[0]).assertEqual("onShow");
                expect(listKey0800_help_index[1]).assertEqual("onActive");
                expect(listKey0800_help_index[2]).assertEqual("onInactive");
                expect(listKey0800_help_index[3]).assertEqual("onHide");
                done();
            }, 4000)
            console.log("----------end SUB_AA_OpenHarmony_AbilityStart_0800----------")
        })
    })

    /*
     * @tc.number  SUB_AA_OpenHarmony_AbilityStart_0700
     * @tc.name    Api8 Ability1 lifts API7 Ability2 and ends Ability2 in different applications
     * @tc.desc    Function test
     * @tc.level   0
     */
    it("SUB_AA_OpenHarmony_AbilityStart_0700", 0, async function (done) {
        console.log("----------start SUB_AA_OpenHarmony_AbilityStart_0700----------")
        TAG = "SUB_AA_OpenHarmony_AbilityStart_0700";
        var Subscriber5;
        var Subscriber6;
        var Subscriber7;
        listKey0700_test_app = [""];
        listKey0700_test_index = ["", "", "", "", "", ""];
        listKey0700_help = ["", "", "", "", ""];

        commonEvent.createSubscriber(subscriberInfo_MainAbility2_test_app).then(async (data) => {
            console.log(TAG + "====>Create Subscriber test app====>");
            Subscriber5 = data;
            await commonEvent.subscribe(Subscriber5, SubscribeCallBack_test_app);
        })

        commonEvent.createSubscriber(subscriberInfo_MainAbility2_test_index).then(async (data) => {
            console.log(TAG + "====>Create Subscriber test index====>");
            Subscriber6 = data;
            await commonEvent.subscribe(Subscriber6, SubscribeCallBack_test_index);
        })

        commonEvent.createSubscriber(subscriberInfo_MainAbility2_help_api8).then(async (data) => {
            console.log(TAG + "====>Create Subscriber help app====>");
            Subscriber7 = data;
            await commonEvent.subscribe(Subscriber7, SubscribeCallBack_help);
        })

        featureAbility.startAbility({
            want: {
                abilityName: "com.example.jsmyapplication.MainAbility2",
                bundleName: "com.example.jsmyapplication"
            }
        }, (err, data) => {
            console.log(TAG + ": api7 startAbility success , err: " + JSON.stringify(err) + ",data: " + JSON.stringify(data));
        });

        featureAbility.startAbility({
            want: {
                abilityName: "com.example.etsmyapplicationhelp.MainAbility2",
                bundleName: "com.example.etsmyapplicationhelp"
            }
        }, (err, data) => {
            console.log(TAG + ": api8 startAbility success , err: " + JSON.stringify(err) + ",data: " + JSON.stringify(data));
            setTimeout(function () {
                console.log(TAG + "startAbility listKey0700_test_app : " + listKey0700_test_app);
                console.log(TAG + "startAbility listKey0700_test_index : " + listKey0700_test_index);
                console.log(TAG + "startAbility listKey0700_help_api8 : " + listKey0700_help);
                expect(listKey0700_test_app[0]).assertEqual("onCreate");
                expect(listKey0700_test_index[0]).assertEqual("onShow");
                expect(listKey0700_test_index[1]).assertEqual("onActive");
                expect(listKey0700_test_index[2]).assertEqual("onInactive");
                expect(listKey0700_test_index[3]).assertEqual("onHide");
                expect(listKey0700_test_index[4]).assertEqual("onShow");
                expect(listKey0700_test_index[5]).assertEqual("onActive");

                expect(listKey0700_help[0]).assertEqual("onCreate");
                expect(listKey0700_help[1]).assertEqual("onDestroy");
                expect(listKey0700_help[2]).assertEqual("onWindowStageCreate");
                expect(listKey0700_help[3]).assertEqual("onForeground");
                expect(listKey0700_help[4]).assertEqual("onBackground");
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

        commonEvent.createSubscriber(subscriberInfo_getMainAbility2).then(async (data) => {
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
                    aa: "aa start -a com.huawei.myapplication.MainAbility -b com.huawei.myapplication"
                }
            }
        }, (err, data) => {
            console.log(TAG + ": startAbility success , err: " + JSON.stringify(err) + ",data: " + JSON.stringify(data));
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