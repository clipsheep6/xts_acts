/******/ (() => { // webpackBootstrap
/******/ 	"use strict";
/******/ 	var __webpack_modules__ = ({

/***/ "../../../../../../../../Desktop/zhangyun/MissionApplication/entry/src/main/ets/MainAbility/pages/index.ets?entry":
/*!************************************************************************************************************************!*\
  !*** ../../../../../../../../Desktop/zhangyun/MissionApplication/entry/src/main/ets/MainAbility/pages/index.ets?entry ***!
  \************************************************************************************************************************/
/***/ (function(__unused_webpack_module, exports, __webpack_require__) {


var __importDefault = (this && this.__importDefault) || function (mod) {
    return (mod && mod.__esModule) ? mod : { "default": mod };
};
Object.defineProperty(exports, "__esModule", ({ value: true }));
//@ts-nocheck
var router = globalThis.requireNativeModule('system.router');
var file = isSystemplugin('file', 'system') ? globalThis.systemplugin.file : globalThis.requireNapi('file');
const index_ets_1 = __webpack_require__(/*! deccjsunit/index.ets */ "./node_modules/deccjsunit/index.ets");
const ListTest_ets_1 = __importDefault(__webpack_require__(/*! ../../test/ListTest.ets */ "../../../../../../../../Desktop/zhangyun/MissionApplication/entry/src/main/ets/test/ListTest.ets"));
async function routePage() {
    let options = {
        uri: 'pages/second'
    };
    try {
        await router.push(options);
    }
    catch (err) {
        console.error(`fail callback, code: ${err.code}, msg: ${err.msg}`);
    }
}
class Index extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
    }
    aboutToBeDeleted() {
        SubscriberManager.Get().delete(this.id());
    }
    aboutToAppear() {
        console.info("start run testcase!!!!");
        const core = index_ets_1.Core.getInstance();
        const expectExtend = new index_ets_1.ExpectExtend({
            'id': 'extend'
        });
        core.addService('expect', expectExtend);
        const reportExtend = new index_ets_1.ReportExtend(file);
        core.addService('report', reportExtend);
        core.init();
        core.subscribeEvent('task', reportExtend);
        const configService = core.getDefaultService('config');
        configService.setConfig(globalThis.abilityWant.parameters);
        (0, ListTest_ets_1.default)(globalThis.abilityContext);
        core.execute();
    }
    render() {
        Flex.create({ direction: FlexDirection.Column, alignItems: ItemAlign.Center, justifyContent: FlexAlign.Center });
        Flex.debugLine("pages/index.ets(42:5)");
        Flex.width('100%');
        Flex.height('100%');
        Text.create('Hello World111');
        Text.debugLine("pages/index.ets(43:7)");
        Text.fontSize(50);
        Text.fontWeight(FontWeight.Bold);
        Text.pop();
        Button.createWithChild();
        Button.debugLine("pages/index.ets(46:7)");
        Button.type(ButtonType.Capsule);
        Button.margin({
            top: 20
        });
        Button.backgroundColor('#0D9FFB');
        Button.onClick(() => {
            routePage();
        });
        Text.create('next page');
        Text.debugLine("pages/index.ets(47:9)");
        Text.fontSize(25);
        Text.fontWeight(FontWeight.Bold);
        Text.pop();
        Button.pop();
        Flex.pop();
    }
}
loadDocument(new Index("1", undefined, {}));


/***/ }),

/***/ "../../../../../../../../Desktop/zhangyun/MissionApplication/entry/src/main/ets/test/ListTest.ets":
/*!********************************************************************************************************!*\
  !*** ../../../../../../../../Desktop/zhangyun/MissionApplication/entry/src/main/ets/test/ListTest.ets ***!
  \********************************************************************************************************/
/***/ (function(__unused_webpack_module, exports, __webpack_require__) {


var __importDefault = (this && this.__importDefault) || function (mod) {
    return (mod && mod.__esModule) ? mod : { "default": mod };
};
Object.defineProperty(exports, "__esModule", ({ value: true }));
const MissionTest_ets_1 = __importDefault(__webpack_require__(/*! ./MissionTest.ets */ "../../../../../../../../Desktop/zhangyun/MissionApplication/entry/src/main/ets/test/MissionTest.ets"));
function List(context) {
    (0, MissionTest_ets_1.default)(context);
}
exports["default"] = List;


/***/ }),

/***/ "../../../../../../../../Desktop/zhangyun/MissionApplication/entry/src/main/ets/test/MissionTest.ets":
/*!***********************************************************************************************************!*\
  !*** ../../../../../../../../Desktop/zhangyun/MissionApplication/entry/src/main/ets/test/MissionTest.ets ***!
  \***********************************************************************************************************/
/***/ ((__unused_webpack_module, exports, __webpack_require__) => {


Object.defineProperty(exports, "__esModule", ({ value: true }));
// @ts-nocheck
const index_1 = __webpack_require__(/*! deccjsunit/index */ "./node_modules/deccjsunit/index.js");
var commonEvent = globalThis.requireNapi('commonevent') || (isSystemplugin('commonevent', 'ohos') ? globalThis.ohosplugin.commonevent : isSystemplugin('commonevent', 'system') ? globalThis.systemplugin.commonevent : undefined);
var missionManager = globalThis.requireNapi('application.missionManager') || (isSystemplugin('application.missionManager', 'ohos') ? globalThis.ohosplugin.application.missionManager : isSystemplugin('application.missionManager', 'system') ? globalThis.systemplugin.application.missionManager : undefined);
var featureAbility = globalThis.requireNapi('ability.featureability') || (isSystemplugin('ability.featureability', 'ohos') ? globalThis.ohosplugin.ability.featureability : isSystemplugin('ability.featureability', 'system') ? globalThis.systemplugin.ability.featureability : undefined);
var commonEvent = globalThis.requireNapi('commonevent') || (isSystemplugin('commonevent', 'ohos') ? globalThis.ohosplugin.commonevent : isSystemplugin('commonevent', 'system') ? globalThis.systemplugin.commonevent : undefined);
function abilityTest(abilityContext) {
    (0, index_1.describe)('AbilityTest', function () {
        console.log("-------------start test---------------");
        //            it('SUB_AA_OpenHarmony_MoveMissionToFront_0100', 0, async function (done) {
        //                console.log("------------start SUB_AA_OpenHarmony_MoveMissionToFront_0100-------------");
        //                var missionId = 1;
        //                try {
        //                    missionManager.moveMissionToFront(missionId, (error, data) => {
        //                        console.log("SUB_AA_OpenHarmony_MoveMissionToFront_0100 error: " +
        //                        JSON.stringify(error) + ", data: " + JSON.stringify(data));
        //                        expect(error.code == 2097181).assertTrue();
        //                        done();
        //                    })
        //                } catch(error) {
        //                    console.log("SUB_AA_OpenHarmony_MoveMissionToFront_0100: error " + error);
        //                }
        //                console.log("------------end SUB_AA_OpenHarmony_MoveMissionToFront_0100-------------");
        //            });
        var abilityLifeEvents = {
            events: ["mainAbility_onBackground",
                "mainAbility_onForeground",]
        };
        var ability2LifeEvents = {
            events: ["mainAbility2_onForeground",
                "mainAbility2_onBackground",
                "mainAbility2_onWindowStageDestroy",
                "mainAbility2_onDestroy"]
        };
        var abilityLifeEvents2 = {
            events: ["mainAbility_onForeground"]
        };
        var ability3LifeEvents3 = {
            events: ["mainAbility3_onBackground"]
        };
        var singletonAbility4LifeEvents = {
            events: ["mainAbility4_onForeground",
                "mainAbility4_onBackground",
                "mainAbility4_onWindowStageDestroy",
                "mainAbility4_onDestroy"]
        };
        var singletonAbility3LifeEvents = {
            events: ["mainAbility3_onForeground",
                "mainAbility3_onBackground",
                "mainAbility3_onWindowStageDestroy",
                "mainAbility3_onDestroy"]
        };
        var singletonAbility2LifeEvents = {
            events: ["mainAbility2_onForeground",
                "mainAbility2_onBackground",
                "mainAbility2_onWindowStageDestroy",
                "mainAbility2_onDestroy"]
        };
        var ability4LifeEvents = {
            events: ["mainAbility4_onForeground",
                "mainAbility4_onBackground",
                "mainAbility4_onWindowStageDestroy",
                "mainAbility4_onDestroy"]
        };
        var ability3LifeEvents = {
            events: ["EntryAbility3_onShow",
                "EntryAbility3_onHide",
                "EntryAbility3_onInactive",
                "EntryAbility3_onDestroy"]
        };
        var ability3LifeEvents2 = {
            events: ["EntryAbility3_onHide",
                "EntryAbility3_onInactive",
                "EntryAbility3_onDestroy"]
        };
        var ability3LifeEvents2 = {
            events: ["EntryAbility3_onHide",
                "EntryAbility3_onInactive",
                "EntryAbility3_onDestroy"]
        };
        var abilityLifeEvents = {
            events: ["mainAbility_onBackground",
                "mainAbility_onForeground",]
        };
        var abilityLifeEvents2 = {
            events: ["EntryAbility_onShow"]
        };
        var ability3LifeEvents3 = {
            events: ["EntryAbility3_onHide"]
        };
        (0, index_1.it)('SUB_AA_OpenHarmony_MoveMissionToFront_0500', 0, async function (done) {
            console.log("------------start SUB_AA_OpenHarmony_MoveMissionToFront_0500-------------");
            TAG = "SUB_AA_OpenHarmony_MoveMissionToFront_0500";
            var Subscriber = "";
            var Subscriber2 = "";
            var list = ["", "", "", ""];
            var list2 = ["", ""];
            var ability1MissionList = [];
            var ability4MissionList = [];
            function SubscribeCallBack_mainAbility4_Destroy(err, data) {
                console.log(TAG + " Subscribe CallBack data:" + JSON.stringify(data));
                if (data.event == "mainAbility4_onForeground") {
                    list[0] = "onForeground";
                }
                else if (data.event == "mainAbility4_onBackground") {
                    list[1] = "onBackground";
                }
                else if (data.event == "mainAbility4_onWindowStageDestroy") {
                    list[2] = "onWindowStageDestroy";
                }
                else if (data.event == "mainAbility4_onDestroy") {
                    list[3] = "onDestroy";
                }
                console.log(TAG + "list is : " + list);
            }
            function SubscribeCallBack_mainAbility_Destroy(err, data) {
                console.log(TAG + " Subscribe2 CallBack data:" + JSON.stringify(data));
                if (data.event == "mainAbility_onBackground") {
                    list2[0] = "onBackground";
                }
                else if (data.event == "mainAbility_onForeground") {
                    list2[1] = "onForeground";
                }
                done();
            }
            commonEvent.createSubscriber(ability4LifeEvents).then(async (data) => {
                console.log(TAG + "====>Create Subscriber====>");
                Subscriber = data;
                console.log(TAG + "data is : " + JSON.stringify(Subscriber));
                await commonEvent.subscribe(Subscriber, SubscribeCallBack_mainAbility4_Destroy);
            });
            commonEvent.createSubscriber(abilityLifeEvents).then(async (data) => {
                console.log(TAG + "====>Create Subscriber2====>");
                Subscriber2 = data;
                console.log(TAG + "data2 is : " + JSON.stringify(Subscriber2));
                await commonEvent.subscribe(Subscriber2, SubscribeCallBack_mainAbility_Destroy);
            });
            missionManager.getMissionInfos("", 20, (error, data) => {
                console.log(TAG + "Emtry MainAbility getMissionInfos success, error: "
                    + JSON.stringify(error) + ", data: " + JSON.stringify(data));
                for (var i = 0; i < data.length; i++) {
                    if (data[i].want.abilityName == "com.example.taskswitching.MainAbility") {
                        console.log(TAG + "ability1MissionId is " + data[i].missionId);
                        ability1MissionList.push(data[i].missionId);
                    }
                }
                console.log(TAG + "ability1MissionList is: " + JSON.stringify(ability1MissionList));
                missionManager.lockMission(ability1MissionList[0], (error, data) => {
                    console.log(TAG + "Emtry MainAbility lockMission success, error: "
                        + JSON.stringify(error) + ", data: " + JSON.stringify(data));
                    missionManager.clearAllMissions((err, data) => {
                        console.log(TAG + "Emtry MainAbility clearAllMissions success, error: "
                            + JSON.stringify(error) + ", data: " + JSON.stringify(data));
                    });
                });
                console.log(TAG + "ability1MissionList 2 is: " + JSON.stringify(ability1MissionList));
            });
            setTimeout(function () {
                abilityContext.startAbility({
                    want: {
                        bundleName: "com.example.missionapplication",
                        abilityName: "com.example.missionapplication.MainAbility2"
                    }
                }, (error, data) => {
                    console.log(TAG + " startAbility1 success, error: "
                        + JSON.stringify(error) + ", data: " + JSON.stringify(data));
                });
            }, 1000);
            setTimeout(function () {
                abilityContext.startAbility({
                    want: {
                        bundleName: "com.example.missionapplication",
                        abilityName: "com.example.missionapplication.MainAbility3"
                    }
                }, (error, data) => {
                    console.log(TAG + " startAbility2 success, error: "
                        + JSON.stringify(error) + ", data: " + JSON.stringify(data));
                });
            }, 1500);
            setTimeout(function () {
                abilityContext.startAbility({
                    want: {
                        bundleName: "com.example.missionapplication",
                        abilityName: "com.example.missionapplication.MainAbility4"
                    }
                }, (error, data) => {
                    console.log(TAG + " startAbility3 success, error: "
                        + JSON.stringify(error) + ", data: " + JSON.stringify(data));
                });
            }, 2000);
            setTimeout(function () {
                missionManager.moveMissionToFront(parseInt(ability1MissionList[0]), (error, data) => {
                    console.log(TAG + "MainAbility moveMissionToFront success, error: "
                        + JSON.stringify(error) + ", data: " + JSON.stringify(data));
                    console.log(TAG + "-->list is : " + list);
                    missionManager.getMissionInfos("", 20, (error, data) => {
                        console.log(TAG + "Emtry MainAbility4 getMissionInfos success, error: "
                            + JSON.stringify(error) + ", data: " + JSON.stringify(data));
                        for (var i = 0; i < data.length; i++) {
                            if (data[i].want.abilityName == "com.example.taskswitching.MainAbility4") {
                                console.log(TAG + "ability4MissionId is " + data[i].missionId);
                                ability4MissionList.push(data[i].missionId);
                            }
                        }
                        console.log(TAG + "ability4MissionList is: " + JSON.stringify(ability4MissionList));
                        missionManager.moveMissionToFront(parseInt(ability4MissionList[0]), (error, data) => {
                            console.log(TAG + "Emtry MainAbility4 moveMissionToFront success, error: "
                                + JSON.stringify(error) + ", data: " + JSON.stringify(data));
                            console.log(TAG + "-->list2 is : " + list2);
                            (0, index_1.expect)(list2[0]).assertEqual("onHide");
                            console.log(TAG + "55555555");
                            (0, index_1.expect)(list2[1]).assertEqual("onShow");
                            console.log(TAG + "6666666666");
                            console.log(TAG + "77777777");
                        });
                    });
                    console.log(TAG + "MainAbility list1 data " + parseInt(ability1MissionList[0]));
                });
                (0, index_1.expect)(list[0]).assertEqual("onShow");
                console.log(TAG + "111111111111");
                (0, index_1.expect)(list[1]).assertEqual("onHide");
                console.log(TAG + "222222222");
                (0, index_1.expect)(list[2]).assertEqual("onInactive");
                console.log(TAG + "333333333");
                (0, index_1.expect)(list[3]).assertEqual("onDestroy");
                console.log(TAG + "4444444444444");
            }, 3000);
            console.log("------------end SUB_AA_OpenHarmony_MoveMissionToFront_0500-------------");
        });
        //        it('SUB_AA_OpenHarmony_MoveMissionToFront_0200', 0, async function (done) {
        //            console.log("------------start SUB_AA_OpenHarmony_MoveMissionToFront_0200-------------");
        //            TAG = "SUB_AA_OpenHarmony_MoveMissionToFront_0200"
        //            var Subscriber = "";
        //            var Subscriber2 = "";
        //            var list = ["", "", "", ""];
        //            var list2 = ["", ""]
        //            var ability1MissionList = [];
        //            var ability4MissionList = [];
        //
        //            function SubscribeCallBack_mainAbility4_Destroy(err, data) {
        //                console.log(TAG + " Subscribe3 CallBack data:" + JSON.stringify(data));
        //                if (data.event == "mainAbility4_onForeground") {
        //                    list[0] = "onForeground";
        //                } else if (data.event == "mainAbility4_onBackground") {
        //                    list[1] = "onBackground";
        //                } else if (data.event == "mainAbility4_onWindowStageDestroy") {
        //                    list[2] = "onWindowStageDestroy";
        //                } else if (data.event == "mainAbility4_onDestroy") {
        //                    list[3] = "onDestroy";
        //                }
        //                console.log(TAG + "list is : " + list)
        //
        //            }
        //
        //            function SubscribeCallBack_mainAbility_Destroy(err, data) {
        //                console.log(TAG + " Subscribe3 CallBack data:" + JSON.stringify(data));
        //                if (data.event == "mainAbility_onBackground") {
        //                    list2[0] = "onBackground";
        //                } else if (data.event == "mainAbility_onForeground") {
        //                    list2[1] = "onForeground";
        //                }
        //                console.log(TAG + "list2 is : " + list2)
        //                done()
        //            }
        //
        //            commonEvent.createSubscriber(singletonAbility4LifeEvents).then(async (data) => {
        //                console.log(TAG + "====>Create Subscriber====>");
        //                Subscriber = data;
        //                console.log(TAG + "data is : " + JSON.stringify(Subscriber))
        //                await commonEvent.subscribe(Subscriber, SubscribeCallBack_mainAbility4_Destroy);
        //            });
        //
        //            commonEvent.createSubscriber(abilityLifeEvents).then(async (data) => {
        //                console.log(TAG + "====>Create Subscriber2====>");
        //                Subscriber2 = data;
        //                console.log(TAG + "data2 is : " + JSON.stringify(Subscriber2))
        //                await commonEvent.subscribe(Subscriber2, SubscribeCallBack_mainAbility_Destroy);
        //            });
        //
        //
        //            missionManager.getMissionInfos("", 20, (error, data) => {
        //                console.log(TAG + "Emtry MainAbility getMissionInfos success, error: "
        //                + JSON.stringify(error) + ", data: " + JSON.stringify(data));
        //
        //                for (var i = 0; i < data.length; i++) {
        //                    if (data[i].want.abilityName == "com.example.taskswitching.MainAbility") {
        //                        ability1MissionList.push(data[i].missionId);
        //                    }
        //                }
        //                console.log(TAG + "ability1MissionList is: " + JSON.stringify(ability1MissionList))
        //
        //                missionManager.lockMission(ability1MissionList[0], (error, data) => {
        //                    console.log(TAG + "Emtry MainAbility lockMission success, error: "
        //                    + JSON.stringify(error) + ", data: " + JSON.stringify(data));
        //                    missionManager.clearAllMissions((err, data) => {
        //                        console.log(TAG + "Emtry MainAbility clearAllMissions success, error: "
        //                        + JSON.stringify(error) + ", data: " + JSON.stringify(data));
        //                    })
        //                });
        //                console.log(TAG + "ability1MissionList 2 is: " + JSON.stringify(ability1MissionList))
        //            });
        //
        //            abilityContext.startAbility({
        //                want: {
        //                    bundleName: "com.example.auxtaskswitching.hmservice",
        //                    abilityName: "com.example.singletonentry.singletonEntryAbility2"
        //                }
        //            }, (error, data) => {
        //                console.log(TAG + " startAbility1 success, error: "
        //                + JSON.stringify(error) + ", data: " + JSON.stringify(data));
        //            });
        //
        //            setTimeout(function () {
        //                abilityContext.startAbility({
        //                    want: {
        //                        bundleName: "com.example.auxtaskswitching.hmservice",
        //                        abilityName: "com.example.singletonentry.singletonEntryAbility3"
        //                    }
        //                }, (error, data) => {
        //                    console.log(TAG + " startAbility2 success, error: "
        //                    + JSON.stringify(error) + ", data: " + JSON.stringify(data));
        //                });
        //            }, 1000)
        //            setTimeout(function () {
        //                abilityContext.startAbility({
        //                    want: {
        //                        bundleName: "com.example.auxtaskswitching.hmservice",
        //                        abilityName: "com.example.singletonentry.singletonEntryAbility4"
        //                    }
        //                }, (error, data) => {
        //                    console.log(TAG + " startAbility3 success, error: "
        //                    + JSON.stringify(error) + ", data: " + JSON.stringify(data));
        //                });
        //            }, 2000)
        //
        //            setTimeout(function () {
        //                missionManager.getMissionInfos("", 20, (error, data) => {
        //                    console.log(TAG + "Emtry MainAbility getMissionInfos success, error: "
        //                    + JSON.stringify(error) + ", data: " + JSON.stringify(data));
        //
        //                    for (var i = 0; i < data.length; i++) {
        //                        if (data[i].want.abilityName == "com.example.singletonentry.singletonEntryAbility4") {
        //                            console.log(TAG + "ability4MissionId is " + data[i].missionId);
        //                            ability4MissionList.push(data[i].missionId);
        //                        }
        //                    }
        //                    console.log(TAG + "ability4MissionList is: " + JSON.stringify(ability4MissionList))
        //                });
        //
        //                console.log(TAG + "MainAbility list1 data " + parseInt(ability1MissionList[0]));
        //                missionManager.moveMissionToFront(parseInt(ability1MissionList[0]), (error, data) => {
        //                    console.log(TAG + "MainAbility moveMissionToFront success, error: "
        //                    + JSON.stringify(error) + ", data: " + JSON.stringify(data));
        //                });
        //                console.log(TAG + "-->list is : " + list)
        //                expect(list[0]).assertEqual("onForeground");
        //                console.log(TAG + "111111111111")
        //                expect(list[1]).assertEqual("onBackground");
        //                console.log(TAG + "222222222")
        //                expect(list[2]).assertEqual("onWindowStageDestroy");
        //                console.log(TAG + "333333333")
        //                expect(list[3]).assertEqual("onDestroy");
        //                console.log(TAG + "4444444444444")
        //            }, 2500)
        //
        //            setTimeout(function () {
        //                console.log(TAG + "MainAbility list2 data " + parseInt(ability4MissionList[0]));
        //                missionManager.moveMissionToFront(parseInt(ability4MissionList[0]), (error, data) => {
        //                    console.log(TAG + "Emtry MainAbility4 moveMissionToFront success, error: "
        //                    + JSON.stringify(error) + ", data: " + JSON.stringify(data));
        //                });
        //                console.log(TAG + "-->list2 is : " + list2)
        //                expect(list2[0]).assertEqual("onBackground");
        //                console.log(TAG + "55555555")
        //                expect(list2[1]).assertEqual("onForeground");
        //                console.log(TAG + "6666666666")
        //            }, 3000)
        //
        //
        //            console.log("------------start SUB_AA_OpenHarmony_MoveMissionToFront_0200-------------");
        //        })
        //        it('SUB_AA_OpenHarmony_MoveMissionToFront_0300', 0, async function (done) {
        //            console.log("------------start SUB_AA_OpenHarmony_MoveMissionToFront_0300-------------");
        //            TAG = "SUB_AA_OpenHarmony_MoveMissionToFront_0300"
        //            var Subscriber = "";
        //            var Subscriber2 = "";
        //            var list = ["", "", "", ""];
        //            var list2 = ["", ""]
        //            var ability1MissionList = [];
        //            var ability3MissionList = [];
        //
        //            function SubscribeCallBack_mainAbility3_Destroy(err, data) {
        //                ["mainAbility3_onForeground",
        //                "mainAbility3_onBackground",
        //                "mainAbility3_onWindowStageDestroy",
        //                "mainAbility3_onDestroy"]
        //                console.log(TAG + " Subscribe3 CallBack data:" + JSON.stringify(data));
        //                if(data.event == "mainAbility3_onForeground"){
        //                    list[0] = "onForeground";
        //                }else if(data.event == "mainAbility3_onBackground"){
        //                    list[1] = "onBackground";
        //                }else if(data.event == "mainAbility3_onWindowStageDestroy"){
        //                    list[2] = "onWindowStageDestroy";
        //                }else if(data.event == "mainAbility3_onDestroy"){
        //                    list[3] = "onDestroy";
        //                }
        //                console.log(TAG + "list is : " + list)
        //            }
        //
        //            function SubscribeCallBack_mainAbility_Destroy(err, data) {
        //                console.log(TAG + " Subscribe3 CallBack data:" + JSON.stringify(data));
        //                if(data.event == "mainAbility_onBackground"){
        //                    list2[0] = "onBackground";
        //                }else if(data.event == "mainAbility_onForeground"){
        //                    list2[1] = "onForeground";
        //                }
        //                console.log(TAG + "list2 is : " + list2)
        //                done()
        //            }
        //
        //            commonEvent.createSubscriber(singletonAbility3LifeEvents).then(async (data) => {
        //                console.log(TAG + "====>Create Subscriber====>");
        //                Subscriber = data;
        //                console.log(TAG + "data is : " + JSON.stringify(Subscriber))
        //                await commonEvent.subscribe(Subscriber, SubscribeCallBack_mainAbility3_Destroy);
        //
        //            });
        //
        //            commonEvent.createSubscriber(abilityLifeEvents).then(async (data) => {
        //                console.log(TAG + "====>Create Subscriber2====>");
        //                Subscriber2 = data;
        //                console.log(TAG + "data2 is : " + JSON.stringify(Subscriber2))
        //                await commonEvent.subscribe(Subscriber2, SubscribeCallBack_mainAbility_Destroy);
        //
        //            });
        //
        //            missionManager.getMissionInfos("", 20, (error, data) => {
        //                console.log(TAG + "Emtry MainAbility getMissionInfos success, error: "
        //                + JSON.stringify(error) + ", data: " + JSON.stringify(data));
        //
        //                for(var i = 0; i<data.length; i++){
        //                    if(data[i].want.abilityName == "com.example.taskswitching.MainAbility") {
        //                        console.log(TAG + "ability1MissionId is " + data[i].missionId);
        //                        ability1MissionList.push(data[i].missionId);
        //                    }
        //                }
        //                console.log(TAG + "ability1MissionList is: " + JSON.stringify(ability1MissionList))
        //
        //                missionManager.lockMission(ability1MissionList[0], (error, data) => {
        //                    console.log(TAG + "Emtry MainAbility lockMission success, error: "
        //                    + JSON.stringify(error) + ", data: " + JSON.stringify(data));
        //                    missionManager.clearAllMissions((err,data) => {
        //                        console.log(TAG + "Emtry MainAbility clearAllMissions success, error: "
        //                        + JSON.stringify(error) + ", data: " + JSON.stringify(data));
        //                    })
        //                });
        //                console.log(TAG + "ability1MissionList 2 is: " + JSON.stringify(ability1MissionList))
        //            });
        //
        //            featureAbility.startAbility({
        //                want: {
        //                    bundleName : "com.example.auxtaskswitching.hmservice",
        //                    abilityName : "com.example.singletonentry.singletonEntryAbility2"
        //                }
        //            }, (error, data) => {
        //                console.log(TAG + " startAbility1 success, error: "
        //                + JSON.stringify(error) + ", data: " + JSON.stringify(data));
        //            });
        //            setTimeout(function(){
        //                featureAbility.startAbility({
        //                    want: {
        //                        bundleName : "com.example.auxtaskswitching.hmservice",
        //                        abilityName : "com.example.singletonentry.singletonEntryAbility3"
        //                    }
        //                }, (error, data) => {
        //                    console.log(TAG + " startAbility2 success, error: "
        //                    + JSON.stringify(error) + ", data: " + JSON.stringify(data));
        //                });
        //            },1000)
        //            setTimeout(function(){
        //                featureAbility.startAbility({
        //                    want: {
        //                        bundleName : "com.example.auxtaskswitching.hmservice",
        //                        abilityName : "com.example.singletonentry.singletonEntryAbility4"
        //                    }
        //                }, (error, data) => {
        //                    console.log(TAG + " startAbility3 success, error: "
        //                    + JSON.stringify(error) + ", data: " + JSON.stringify(data));
        //                });
        //            },2000)
        //
        //            setTimeout(function(){
        //                missionManager.getMissionInfos("", 20, (error, data) => {
        //                    console.log(TAG + "Emtry MainAbility getMissionInfos success, error: "
        //                    + JSON.stringify(error) + ", data: " + JSON.stringify(data));
        //
        //                    for(var i = 0; i<data.length; i++){
        //                        if (data[i].want.abilityName == "com.example.singletonentry.singletonEntryAbility3") {
        //                            console.log(TAG + "ability3MissionId is " + data[i].missionId);
        //                            ability3MissionList.push(data[i].missionId);
        //                        }
        //                    }
        //                    console.log(TAG + "ability3MissionList is: " + JSON.stringify(ability3MissionList))
        //                });
        //
        //                console.log(TAG + "MainAbility ability1MissionList data " + parseInt(ability1MissionList[0]));
        //                missionManager.moveMissionToFront(parseInt(ability1MissionList[0]), (error, data) => {
        //                    console.log(TAG + "MainAbility moveMissionToFront success, error: "
        //                    + JSON.stringify(error) + ", data: " + JSON.stringify(data));
        //                    console.log(TAG + "-->list is : " + list)
        //                    expect(list[0]).assertEqual("onForeground");
        //                    console.log(TAG + "111111111111")
        //                    expect(list[1]).assertEqual("onBackground");
        //                    console.log(TAG + "222222222")
        //                    expect(list[2]).assertEqual("onWindowStageDestroy");
        //                    console.log(TAG + "333333333")
        //                    expect(list[3]).assertEqual("onDestroy");
        //                    console.log(TAG + "4444444444444")
        //                });
        //            },3000)
        //
        //            setTimeout(function() {
        //                console.log(TAG + "MainAbility ability3MissionList data " + parseInt(ability3MissionList[0]));
        //                missionManager.moveMissionToFront(parseInt(ability3MissionList[0]), (error, data) => {
        //                    console.log(TAG + "Emtry MainAbility3 moveMissionToFront success, error: "
        //                    + JSON.stringify(error) + ", data: " + JSON.stringify(data));
        //                    console.log(TAG + "-->list2 is : " + list2)
        //                    expect(list2[0]).assertEqual("onForeground");
        //                    console.log(TAG + "55555555")
        //                    expect(list2[1]).assertEqual("onBackground");
        //                    console.log(TAG + "6666666666")
        //                });
        //            }, 4000)
        //
        //            console.log("------------end SUB_AA_OpenHarmony_MoveMissionToFront_0300-------------");
        //        });
        //        it('SUB_AA_OpenHarmony_MoveMissionToFront_0400', 0, async function (done) {
        //            console.log("------------start SUB_AA_OpenHarmony_MoveMissionToFront_0400-------------");
        //            TAG = "SUB_AA_OpenHarmony_MoveMissionToFront_0400"
        //            var Subscriber = "";
        //            var Subscriber2 = "";
        //            var list = ["", "", "", ""];
        //            var list2 = ["", ""]
        //            var ability1MissionList = [];
        //            var ability2MissionList = [];
        //
        //            function SubscribeCallBack_mainAbility2_Destroy(err, data) {
        //                console.log(TAG + " Subscribe3 CallBack data:" + JSON.stringify(data));
        //                if(data.event == "mainAbility2_onForeground"){
        //                    list[0] = "onForeground";
        //                }else if(data.event == "mainAbility2_onBackground"){
        //                    list[1] = "onBackground";
        //                }else if(data.event == "mainAbility2_onWindowStageDestroy"){
        //                    list[2] = "onInactive";
        //                }else if(data.event == "mainAbility2_onDestroy"){
        //                    list[3] = "onDestroy";
        //                }
        //                console.log(TAG + "list is : " + list)
        //            }
        //            ["mainAbility2_onForeground",
        //            "mainAbility2_onBackground",
        //            "mainAbility2_onWindowStageDestroy",
        //            "mainAbility2_onDestroy"]
        //
        //            function SubscribeCallBack_mainAbility_Destroy(err, data) {
        //                console.log(TAG + " Subscribe3 CallBack data:" + JSON.stringify(data));
        //                if(data.event == "mainAbility_onBackground"){
        //                    list2[0] = "onBackground";
        //                }else if(data.event == "mainAbility_onForeground"){
        //                    list2[1] = "onForeground";
        //                }
        //                console.log(TAG + "list2 is : " + list2)
        //            }
        //
        //            commonEvent.createSubscriber(singletonAbility2LifeEvents).then(async (data) => {
        //                console.log(TAG + "====>Create Subscriber====>");
        //                Subscriber = data;
        //                console.log(TAG + "data is : " + JSON.stringify(Subscriber))
        //                await commonEvent.subscribe(Subscriber, SubscribeCallBack_mainAbility2_Destroy);
        //
        //            });
        //
        //            commonEvent.createSubscriber(abilityLifeEvents).then(async (data) => {
        //                console.log(TAG + "====>Create Subscriber2====>");
        //                Subscriber2 = data;
        //                console.log(TAG + "data2 is : " + JSON.stringify(Subscriber2))
        //                await commonEvent.subscribe(Subscriber2, SubscribeCallBack_mainAbility_Destroy);
        //
        //            });
        //
        //            setTimeout(function(){
        //                missionManager.getMissionInfos("", 20, (error, data) => {
        //                    console.log(TAG + "Emtry MainAbility getMissionInfos success, error: "
        //                    + JSON.stringify(error) + ", data: " + JSON.stringify(data));
        //
        //                    for(var i = 0; i<data.length; i++){
        //                        if(data[i].want.abilityName == "com.example.taskswitching.MainAbility") {
        //                            console.log(TAG + "ability1MissionId is " + data[i].missionId);
        //                            ability1MissionList.push(data[i].missionId);
        //                        }
        //                    }
        //                    console.log(TAG + "ability1MissionList is: " + JSON.stringify(ability1MissionList))
        //
        //                    missionManager.lockMission(ability1MissionList[0], (error, data) => {
        //                        console.log(TAG + "Emtry MainAbility lockMission success, error: "
        //                        + JSON.stringify(error) + ", data: " + JSON.stringify(data));
        //                        missionManager.clearAllMissions((err,data) => {
        //                            console.log(TAG + "Emtry MainAbility clearAllMissions success, error: "
        //                            + JSON.stringify(error) + ", data: " + JSON.stringify(data));
        //                        })
        //                    });
        //                    console.log(TAG + "ability1MissionList 2 is: " + JSON.stringify(ability1MissionList))
        //                });
        //            },500)
        //
        //            setTimeout(function(){
        //                featureAbility.startAbility({
        //                    want: {
        //                        bundleName : "com.example.auxtaskswitching.hmservice",
        //                        abilityName : "com.example.singletonentry.singletonEntryAbility2"
        //                    }
        //                }, (error, data) => {
        //                    console.log(TAG + " startAbility1 success, error: "
        //                    + JSON.stringify(error) + ", data: " + JSON.stringify(data));
        //                });
        //            },1000)
        //            setTimeout(function(){
        //                featureAbility.startAbility({
        //                    want: {
        //                        bundleName : "com.example.auxtaskswitching.hmservice",
        //                        abilityName : "com.example.singletonentry.singletonEntryAbility3"
        //                    }
        //                }, (error, data) => {
        //                    console.log(TAG + " startAbility2 success, error: "
        //                    + JSON.stringify(error) + ", data: " + JSON.stringify(data));
        //                });
        //            },1500)
        //            setTimeout(function(){
        //                featureAbility.startAbility({
        //                    want: {
        //                        bundleName : "com.example.auxtaskswitching.hmservice",
        //                        abilityName : "com.example.singletonentry.singletonEntryAbility4"
        //                    }
        //                }, (error, data) => {
        //                    console.log(TAG + " startAbility3 success, error: "
        //                    + JSON.stringify(error) + ", data: " + JSON.stringify(data));
        //                });
        //            },2000)
        //
        //            setTimeout(function(){
        //                missionManager.getMissionInfos("", 20, (error, data) => {
        //                    console.log(TAG + "Emtry MainAbility getMissionInfos success, error: "
        //                    + JSON.stringify(error) + ", data: " + JSON.stringify(data));
        //
        //                    for(var i = 0; i<data.length; i++){
        //                        if (data[i].want.abilityName == "com.example.singletonentry.singletonEntryAbility2") {
        //                            console.log(TAG + "ability2MissionId is " + data[i].missionId);
        //                            ability2MissionList.push(data[i].missionId);
        //                        }
        //                    }
        //                    console.log(TAG + "ability2MissionList is: " + JSON.stringify(ability2MissionList))
        //                });
        //            },2500)
        //
        //            setTimeout(function() {
        //                console.log(TAG + "MainAbility ability1MissionList data " + parseInt(ability1MissionList[0]));
        //                missionManager.moveMissionToFront(parseInt(ability1MissionList[0]), (error, data) => {
        //                    console.log(TAG + "MainAbility moveMissionToFront success, error: "
        //                    + JSON.stringify(error) + ", data: " + JSON.stringify(data));
        //                });
        //            }, 3500)
        //            setTimeout(function(){
        //                console.log(TAG + "MainAbility ability2MissionList data " + parseInt(ability2MissionList[0]));
        //                missionManager.moveMissionToFront(parseInt(ability2MissionList[0]), (error, data) => {
        //                    console.log(TAG + "Emtry MainAbility2 moveMissionToFront success, error: "
        //                    + JSON.stringify(error) + ", data: " + JSON.stringify(data));
        //                    console.log(TAG + "-->list is : " + list)
        //                    expect(list[0]).assertEqual("onForeground");
        //                    console.log(TAG + "111111111111")
        //                    expect(list[1]).assertEqual("onBackground");
        //                    console.log(TAG + "222222222")
        //                    expect(list[2]).assertEqual("onWindowStageDestroy");
        //                    console.log(TAG + "333333333")
        //                    expect(list[3]).assertEqual("onDestroy");
        //                    console.log(TAG + "4444444444444")
        //                    console.log(TAG + "-->list2 is : " + list2)
        //                    expect(list2[0]).assertEqual("onBackground");
        //                    console.log(TAG + "55555555")
        //                    expect(list2[1]).assertEqual("onForeground");
        //                    console.log(TAG + "6666666666")
        //                });
        //                done();
        //            }, 4500)
        //
        //            console.log("------------end SUB_AA_OpenHarmony_MoveMissionToFront_0400-------------");
        //        });
        //         * @tc.number  SUB_AA_OpenHarmony_MoveMissionToFront_2400
        //         * @tc.name    Switching the mission in the launcherlist to the foreground is not supported
        //         * @tc.desc    Function test
        //         * @tc.level   0
        //         */
        //    it('SUB_AA_OpenHarmony_MoveMissionToFront_2400', 0, async function (done) {
        //      console.log("------------start SUB_AA_OpenHarmony_MoveMissionToFront_2400-------------");
        //      var missionId = undefined;
        //      try {
        //        missionManager.moveMissionToFront(missionId, (error, data) => {
        //          console.log("SUB_AA_OpenHarmony_MoveMissionToFront_2400 error: " +
        //          JSON.stringify(error) + ", data: " + JSON.stringify(data));
        //          expect(error.code == -1).assertTrue();
        //          done();
        //        })
        //      } catch(error) {
        //        console.log("SUB_AA_OpenHarmony_MoveMissionToFront_2400: error " + error);
        //      }
        //      console.log("------------end SUB_AA_OpenHarmony_MoveMissionToFront_2400-------------");
        //    });
        //
        //   }
        //  )}
        //        it('SUB_AA_OpenHarmony_MoveMissionToFront_2500', 0, async function (done) {
        //            console.log("------------start SUB_AA_OpenHarmony_MoveMissionToFront_2500-------------");
        //            var missionId = -1;
        //            try {
        //                missionManager.moveMissionToFront(missionId, (error, data) => {
        //                    console.log("SUB_AA_OpenHarmony_MoveMissionToFront_2500 error: " +
        //                    JSON.stringify(error) + ", data: " + JSON.stringify(data));
        //                    expect(error.code == 2097181).assertTrue();
        //                    done();
        //                })
        //            } catch (error) {
        //                console.log("SUB_AA_OpenHarmony_MoveMissionToFront_2500: error " + error);
        //            }
        //            console.log("------------end SUB_AA_OpenHarmony_MoveMissionToFront_2500-------------");
        //        });
        //        it('SUB_AA_OpenHarmony_MoveMissionToFront_2600', 0, async function (done) {
        //            console.log("------------start SUB_AA_OpenHarmony_MoveMissionToFront_2600-------------");
        //            var missionId = "2";
        //            try {
        //                missionManager.moveMissionToFront(missionId, (error, data) => {
        //                    console.log("SUB_AA_OpenHarmony_MoveMissionToFront_2600 error: " +
        //                    JSON.stringify(error) + ", data: " + JSON.stringify(data));
        //                    expect(error.code == -1).assertTrue();
        //                    done();
        //                })
        //            } catch (error) {
        //                console.log("SUB_AA_OpenHarmony_MoveMissionToFront_2600: error " + error);
        //            }
        //            console.log("------------end SUB_AA_OpenHarmony_MoveMissionToFront_2600-------------");
        //        });
        //        it('SUB_AA_OpenHarmony_MoveMissionToFront_2700', 0, async function (done) {
        //            console.log("------------start SUB_AA_OpenHarmony_MoveMissionToFront_2700-------------");
        //            var missionId = "aa";
        //            try {
        //                missionManager.moveMissionToFront(missionId, (error, data) => {
        //                    console.log("SUB_AA_OpenHarmony_MoveMissionToFront_2700 error: " +
        //                    JSON.stringify(error) + ", data: " + JSON.stringify(data));
        //                    expect(error.code == -1).assertTrue();
        //                    done();
        //                })
        //            } catch (error) {
        //                console.log("SUB_AA_OpenHarmony_MoveMissionToFront_2700: error " + error);
        //            }
        //            console.log("------------end SUB_AA_OpenHarmony_MoveMissionToFront_2700-------------");
        //        });
        //        it('SUB_AA_OpenHarmony_MoveMissionToFront_2800', 0, async function (done) {
        //            console.log("------------start SUB_AA_OpenHarmony_MoveMissionToFront_2800-------------");
        //            var missionId = 2.111;
        //            try {
        //                missionManager.moveMissionToFront(missionId, (error, data) => {
        //                    console.log("SUB_AA_OpenHarmony_MoveMissionToFront_2800 error: " +
        //                    JSON.stringify(error) + ", data: " + JSON.stringify(data));
        //                    expect(error.code == 0).assertTrue();
        //                    done();
        //                })
        //            } catch (error) {
        //                console.log("SUB_AA_OpenHarmony_MoveMissionToFront_2800: error " + error);
        //            }
        //            console.log("------------end SUB_AA_OpenHarmony_MoveMissionToFront_2800-------------");
        //        });
    });
}
exports["default"] = abilityTest;


/***/ })

/******/ 	});
/************************************************************************/
/******/ 	// The module cache
/******/ 	var __webpack_module_cache__ = {};
/******/ 	
/******/ 	// The require function
/******/ 	function __webpack_require__(moduleId) {
/******/ 		var commonCachedModule = globalThis["__common_module_cache__"] ? globalThis["__common_module_cache__"][moduleId]: null;
/******/ 		if (commonCachedModule) { return commonCachedModule.exports; }
/******/ 		// Check if module is in cache
/******/ 		var cachedModule = __webpack_module_cache__[moduleId];
/******/ 		if (cachedModule !== undefined) {
/******/ 			return cachedModule.exports;
/******/ 		}
/******/ 		// Create a new module (and put it into the cache)
/******/ 		var module = __webpack_module_cache__[moduleId] = {
/******/ 			// no module.id needed
/******/ 			// no module.loaded needed
/******/ 			exports: {}
/******/ 		};
/******/ 	
/******/ 		if (globalThis["__common_module_cache__"] && moduleId.indexOf("?name=") < 0 && Object.keys(globalThis["__common_module_cache__"]).indexOf(moduleId) >= 0) {
/******/ 		  globalThis["__common_module_cache__"][moduleId] = module;
/******/ 		}
/******/ 		__webpack_modules__[moduleId].call(module.exports, module, module.exports, __webpack_require__);
/******/ 	
/******/ 		// Return the exports of the module
/******/ 		return module.exports;
/******/ 	}
/******/ 	
/******/ 	// expose the modules object (__webpack_modules__)
/******/ 	__webpack_require__.m = __webpack_modules__;
/******/ 	
/************************************************************************/
/******/ 	/* webpack/runtime/chunk loaded */
/******/ 	(() => {
/******/ 		var deferred = [];
/******/ 		__webpack_require__.O = (result, chunkIds, fn, priority) => {
/******/ 			if(chunkIds) {
/******/ 				priority = priority || 0;
/******/ 				for(var i = deferred.length; i > 0 && deferred[i - 1][2] > priority; i--) deferred[i] = deferred[i - 1];
/******/ 				deferred[i] = [chunkIds, fn, priority];
/******/ 				return;
/******/ 			}
/******/ 			var notFulfilled = Infinity;
/******/ 			for (var i = 0; i < deferred.length; i++) {
/******/ 				var [chunkIds, fn, priority] = deferred[i];
/******/ 				var fulfilled = true;
/******/ 				for (var j = 0; j < chunkIds.length; j++) {
/******/ 					if ((priority & 1 === 0 || notFulfilled >= priority) && Object.keys(__webpack_require__.O).every((key) => (__webpack_require__.O[key](chunkIds[j])))) {
/******/ 						chunkIds.splice(j--, 1);
/******/ 					} else {
/******/ 						fulfilled = false;
/******/ 						if(priority < notFulfilled) notFulfilled = priority;
/******/ 					}
/******/ 				}
/******/ 				if(fulfilled) {
/******/ 					deferred.splice(i--, 1)
/******/ 					var r = fn();
/******/ 					if (r !== undefined) result = r;
/******/ 				}
/******/ 			}
/******/ 			return result;
/******/ 		};
/******/ 	})();
/******/ 	
/******/ 	/* webpack/runtime/compat get default export */
/******/ 	(() => {
/******/ 		// getDefaultExport function for compatibility with non-harmony modules
/******/ 		__webpack_require__.n = (module) => {
/******/ 			var getter = module && module.__esModule ?
/******/ 				() => (module['default']) :
/******/ 				() => (module);
/******/ 			__webpack_require__.d(getter, { a: getter });
/******/ 			return getter;
/******/ 		};
/******/ 	})();
/******/ 	
/******/ 	/* webpack/runtime/define property getters */
/******/ 	(() => {
/******/ 		// define getter functions for harmony exports
/******/ 		__webpack_require__.d = (exports, definition) => {
/******/ 			for(var key in definition) {
/******/ 				if(__webpack_require__.o(definition, key) && !__webpack_require__.o(exports, key)) {
/******/ 					Object.defineProperty(exports, key, { enumerable: true, get: definition[key] });
/******/ 				}
/******/ 			}
/******/ 		};
/******/ 	})();
/******/ 	
/******/ 	/* webpack/runtime/hasOwnProperty shorthand */
/******/ 	(() => {
/******/ 		__webpack_require__.o = (obj, prop) => (Object.prototype.hasOwnProperty.call(obj, prop))
/******/ 	})();
/******/ 	
/******/ 	/* webpack/runtime/make namespace object */
/******/ 	(() => {
/******/ 		// define __esModule on exports
/******/ 		__webpack_require__.r = (exports) => {
/******/ 			if(typeof Symbol !== 'undefined' && Symbol.toStringTag) {
/******/ 				Object.defineProperty(exports, Symbol.toStringTag, { value: 'Module' });
/******/ 			}
/******/ 			Object.defineProperty(exports, '__esModule', { value: true });
/******/ 		};
/******/ 	})();
/******/ 	
/******/ 	/* webpack/runtime/jsonp chunk loading */
/******/ 	(() => {
/******/ 		// no baseURI
/******/ 		
/******/ 		// object to store loaded and loading chunks
/******/ 		// undefined = chunk not loaded, null = chunk preloaded/prefetched
/******/ 		// [resolve, reject, Promise] = chunk loading, 0 = chunk loaded
/******/ 		var installedChunks = {
/******/ 			"./pages/index": 0
/******/ 		};
/******/ 		
/******/ 		// no chunk on demand loading
/******/ 		
/******/ 		// no prefetching
/******/ 		
/******/ 		// no preloaded
/******/ 		
/******/ 		// no HMR
/******/ 		
/******/ 		// no HMR manifest
/******/ 		
/******/ 		__webpack_require__.O.j = (chunkId) => (installedChunks[chunkId] === 0);
/******/ 		
/******/ 		// install a JSONP callback for chunk loading
/******/ 		var webpackJsonpCallback = (parentChunkLoadingFunction, data) => {
/******/ 			var [chunkIds, moreModules, runtime] = data;
/******/ 			// add "moreModules" to the modules object,
/******/ 			// then flag all "chunkIds" as loaded and fire callback
/******/ 			var moduleId, chunkId, i = 0;
/******/ 			if(chunkIds.some((id) => (installedChunks[id] !== 0))) {
/******/ 				for(moduleId in moreModules) {
/******/ 					if(__webpack_require__.o(moreModules, moduleId)) {
/******/ 						__webpack_require__.m[moduleId] = moreModules[moduleId];
/******/ 					}
/******/ 				}
/******/ 				if(runtime) var result = runtime(__webpack_require__);
/******/ 			}
/******/ 			if(parentChunkLoadingFunction) parentChunkLoadingFunction(data);
/******/ 			for(;i < chunkIds.length; i++) {
/******/ 				chunkId = chunkIds[i];
/******/ 				if(__webpack_require__.o(installedChunks, chunkId) && installedChunks[chunkId]) {
/******/ 					installedChunks[chunkId][0]();
/******/ 				}
/******/ 				installedChunks[chunkIds[i]] = 0;
/******/ 			}
/******/ 			return __webpack_require__.O(result);
/******/ 		}
/******/ 		
/******/ 		var chunkLoadingGlobal = globalThis["webpackChunkcompilier"] = globalThis["webpackChunkcompilier"] || [];
/******/ 		chunkLoadingGlobal.forEach(webpackJsonpCallback.bind(null, 0));
/******/ 		chunkLoadingGlobal.push = webpackJsonpCallback.bind(null, chunkLoadingGlobal.push.bind(chunkLoadingGlobal));
/******/ 	})();
/******/ 	
/************************************************************************/
/******/ 	
/******/ 	// startup
/******/ 	// Load entry module and return exports
/******/ 	// This entry module depends on other loaded chunks and execution need to be delayed
/******/ 	var __webpack_exports__ = __webpack_require__.O(undefined, ["vendors"], () => (__webpack_require__("../../../../../../../../Desktop/zhangyun/MissionApplication/entry/src/main/ets/MainAbility/pages/index.ets?entry")))
/******/ 	__webpack_exports__ = __webpack_require__.O(__webpack_exports__);
/******/ 	
/******/ })()
;