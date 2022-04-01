var E59334e1F;
/******/ (() => { // webpackBootstrap
/******/ 	"use strict";
/******/ 	var __webpack_modules__ = ({

/***/ "D:\\huawei\\five\\ynl5\\ServiceExtension\\entry\\src\\main\\ets\\MainAbility\\pages\\index.ets?entry":
/*!*************************************************************************************************!*\
  !*** D:\huawei\five\ynl5\ServiceExtension\entry\src\main\ets\MainAbility\pages\index.ets?entry ***!
  \*************************************************************************************************/
/***/ (function(__unused_webpack_module, exports, __webpack_require__) {


var __importDefault = (this && this.__importDefault) || function (mod) {
    return (mod && mod.__esModule) ? mod : { "default": mod };
};
Object.defineProperty(exports, "__esModule", ({ value: true }));
var file = isSystemplugin('file', 'system') ? globalThis.systemplugin.file : globalThis.requireNapi('file');
const index_ets_1 = __webpack_require__(/*! deccjsunit/index.ets */ "./node_modules/deccjsunit/index.ets");
const List_test_ets_1 = __importDefault(__webpack_require__(/*! ../../test/List.test.ets */ "D:\\huawei\\five\\ynl5\\ServiceExtension\\entry\\src\\main\\ets\\test\\List.test.ets"));
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
        console.info("getInstance");
        const expectExtend = new index_ets_1.ExpectExtend({
            'id': 'extend'
        });
        core.addService('expect', expectExtend);
        console.info("addService expect");
        const reportExtend = new index_ets_1.ReportExtend(file);
        core.addService('report', reportExtend);
        console.info("addService report");
        core.init();
        console.info("init");
        core.subscribeEvent('task', reportExtend);
        console.info("subscribeEvent");
        const configService = core.getDefaultService('config');
        console.info("getDefaultService");
        console.info('parameters---->' + JSON.stringify(globalThis.abilityWant.parameters));
        configService.setConfig(globalThis.abilityWant.parameters);
        console.info("setConfig");
        (0, List_test_ets_1.default)(globalThis.abilityContext);
        core.execute();
    }
    render() {
        Flex.create({ direction: FlexDirection.Column, alignItems: ItemAlign.Center, justifyContent: FlexAlign.Center });
        Flex.debugLine("pages/index.ets(40:5)");
        Flex.width('100%');
        Flex.height('100%');
        Text.create('Hello World 111!');
        Text.debugLine("pages/index.ets(41:7)");
        Text.fontSize(50);
        Text.fontWeight(FontWeight.Bold);
        Text.pop();
        Button.createWithChild();
        Button.debugLine("pages/index.ets(44:7)");
        Button.type(ButtonType.Capsule);
        Button.margin({
            top: 20
        });
        Button.backgroundColor('#0D9FFB');
        Button.onClick(() => {
        });
        Text.create('next page');
        Text.debugLine("pages/index.ets(45:9)");
        Text.fontSize(25);
        Text.fontWeight(FontWeight.Bold);
        Text.pop();
        Button.pop();
        Flex.pop();
    }
}
loadDocument(new Index("1", undefined, {}));


/***/ }),

/***/ "D:\\huawei\\five\\ynl5\\ServiceExtension\\entry\\src\\main\\ets\\test\\ExtensionTest.test.ets":
/*!*******************************************************************************************!*\
  !*** D:\huawei\five\ynl5\ServiceExtension\entry\src\main\ets\test\ExtensionTest.test.ets ***!
  \*******************************************************************************************/
/***/ ((__unused_webpack_module, exports, __webpack_require__) => {


Object.defineProperty(exports, "__esModule", ({ value: true }));
const index_1 = __webpack_require__(/*! deccjsunit/index */ "./node_modules/deccjsunit/index.js");
function ExtensionTest(abilityContext) {
    (0, index_1.describe)('ServiceExtensionTest', function () {
        (0, index_1.it)('SUB_AA_Extension_ServiceExtensionContext_6600', 0, async function (done) {
            var TAG = "SUB_AA_Extension_ServiceExtensionContext_6600";
            console.log(TAG + " --- start");
            globalThis.lifeCycleList = [];
            console.log(TAG + " lifeCycleList = " + JSON.stringify(globalThis.lifeCycleList));
            abilityContext.startAbility({
                bundleName: "com.example.serviceextension",
                abilityName: "com.example.serviceextension.ServiceAbility"
            }, (error, data) => {
                console.log(TAG + '-- startAbility(ServiceAbility): ' + JSON.stringify(error) + ", " + JSON.stringify(data));
            });
            setTimeout(async function () {
                await globalThis.extensionContext.startAbility({
                    deviceId: undefined,
                    bundleName: "com.example.serviceextension",
                    abilityName: "com.example.serviceextension.ServiceAbility2"
                }, (err, data) => {
                    console.log(TAG + '-- startAbility(ServiceAbility2): ' + JSON.stringify(err) + ", " + JSON.stringify(data));
                });
                setTimeout(function () {
                    console.log(TAG + " lifeCycleList = " + JSON.stringify(globalThis.lifeCycleList));
                    var findTarget = ["ServiceAbility2_onCreate", "ServiceAbility2_onRequest"];
                    checkLifeCycle(globalThis.lifeCycleList, findTarget, TAG);
                    done();
                }, 2000);
            }, 2000);
        });
        (0, index_1.it)('SUB_AA_Extension_ServiceExtensionContext_6700', 0, async function (done) {
            var TAG = "SUB_AA_Extension_ServiceExtensionContext_6700";
            console.log(TAG + " --- start");
            globalThis.lifeCycleList = [];
            console.log(TAG + " lifeCycleList = " + JSON.stringify(globalThis.lifeCycleList));
            abilityContext.startAbility({
                bundleName: "com.example.serviceextension",
                abilityName: "com.example.serviceextension.ServiceAbility"
            }, (error, data) => {
                console.log(TAG + '-- startAbility(ServiceAbility): ' + JSON.stringify(error) + ", " + JSON.stringify(data));
            });
            setTimeout(async function () {
                await globalThis.extensionContext.startAbility({
                    uri: "abcdefxxxx",
                    bundleName: "com.example.serviceextension",
                    abilityName: "com.example.serviceextension.ServiceAbility2"
                }, (err, data) => {
                    console.log(TAG + '-- startAbility(ServiceAbility2): ' + JSON.stringify(err) + ", " + JSON.stringify(data));
                });
                setTimeout(function () {
                    var actualValue = globalThis.serviceWant2.uri;
                    checkParametersValue(actualValue, "abcdefxxxx", TAG);
                    console.log(TAG + " lifeCycleList = " + JSON.stringify(globalThis.lifeCycleList));
                    var findTarget = ["ServiceAbility2_onCreate", "ServiceAbility2_onRequest"];
                    checkLifeCycle(globalThis.lifeCycleList, findTarget, TAG);
                    done();
                }, 2000);
            }, 2000);
        });
        (0, index_1.it)('SUB_AA_Extension_ServiceExtensionContext_6800', 0, async function (done) {
            var TAG = "SUB_AA_Extension_ServiceExtensionContext_6800";
            console.log(TAG + " --- start");
            globalThis.lifeCycleList = [];
            console.log(TAG + " lifeCycleList = " + JSON.stringify(globalThis.lifeCycleList));
            abilityContext.startAbility({
                bundleName: "com.example.serviceextension",
                abilityName: "com.example.serviceextension.ServiceAbility"
            }, (error, data) => {
                console.log(TAG + '-- startAbility(ServiceAbility): ' + JSON.stringify(error) + ", " + JSON.stringify(data));
            });
            setTimeout(async function () {
                await globalThis.extensionContext.startAbility({
                    flags: 0x0001,
                    bundleName: "com.example.serviceextension",
                    abilityName: "com.example.serviceextension.ServiceAbility2"
                }, (err, data) => {
                    console.log(TAG + '-- startAbility(ServiceAbility2): ' + JSON.stringify(err) + ", " + JSON.stringify(data));
                });
                setTimeout(function () {
                    var actualValue = globalThis.serviceWant2.flags;
                    checkParametersValue(actualValue, 1, TAG);
                    console.log(TAG + " lifeCycleList = " + JSON.stringify(globalThis.lifeCycleList));
                    var findTarget = ["ServiceAbility2_onCreate", "ServiceAbility2_onRequest"];
                    checkLifeCycle(globalThis.lifeCycleList, findTarget, TAG);
                    done();
                }, 2000);
            }, 2000);
        });
        (0, index_1.it)('SUB_AA_Extension_ServiceExtensionContext_6900', 0, async function (done) {
            var TAG = "SUB_AA_Extension_ServiceExtensionContext_6900";
            console.log(TAG + " --- start");
            globalThis.lifeCycleList = [];
            console.log(TAG + " lifeCycleList = " + JSON.stringify(globalThis.lifeCycleList));
            abilityContext.startAbility({
                bundleName: "com.example.serviceextension",
                abilityName: "com.example.serviceextension.ServiceAbility"
            }, (error, data) => {
                console.log(TAG + '-- startAbility(ServiceAbility): ' + JSON.stringify(error) + ", " + JSON.stringify(data));
            });
            setTimeout(async function () {
                await globalThis.extensionContext.startAbility({
                    flags: 0x0001 | 0x0002,
                    bundleName: "com.example.serviceextension",
                    abilityName: "com.example.serviceextension.ServiceAbility2"
                }, (err, data) => {
                    console.log(TAG + '-- startAbility(ServiceAbility2): ' + JSON.stringify(err) + ", " + JSON.stringify(data));
                });
                setTimeout(function () {
                    var actualValue = globalThis.serviceWant2.flags;
                    checkParametersValue(actualValue, 3, TAG);
                    console.log(TAG + " lifeCycleList = " + JSON.stringify(globalThis.lifeCycleList));
                    var findTarget = ["ServiceAbility2_onCreate", "ServiceAbility2_onRequest"];
                    checkLifeCycle(globalThis.lifeCycleList, findTarget, TAG);
                    done();
                }, 2000);
            }, 2000);
        });
        (0, index_1.it)('SUB_AA_Extension_ServiceExtensionContext_7000', 0, async function (done) {
            var TAG = "SUB_AA_Extension_ServiceExtensionContext_7000";
            console.log(TAG + " --- start");
            globalThis.lifeCycleList = [];
            console.log(TAG + " lifeCycleList = " + JSON.stringify(globalThis.lifeCycleList));
            abilityContext.startAbility({
                bundleName: "com.example.serviceextension",
                abilityName: "com.example.serviceextension.ServiceAbility"
            }, (error, data) => {
                console.log(TAG + '-- startAbility(ServiceAbility): ' + JSON.stringify(error) + ", " + JSON.stringify(data));
            });
            setTimeout(async function () {
                await globalThis.extensionContext.startAbility({
                    flags: 1.33,
                    bundleName: "com.example.serviceextension",
                    abilityName: "com.example.serviceextension.ServiceAbility2"
                }, (err, data) => {
                    console.log(TAG + '-- startAbility(ServiceAbility2): ' + JSON.stringify(err) + ", " + JSON.stringify(data));
                });
                setTimeout(function () {
                    var actualValue = globalThis.serviceWant2.flags;
                    checkParametersValue(actualValue, 1, TAG);
                    console.log(TAG + " lifeCycleList = " + JSON.stringify(globalThis.lifeCycleList));
                    var findTarget = ["ServiceAbility2_onCreate", "ServiceAbility2_onRequest"];
                    checkLifeCycle(globalThis.lifeCycleList, findTarget, TAG);
                    done();
                }, 2000);
            }, 2000);
        });
        (0, index_1.it)('SUB_AA_Extension_ServiceExtensionContext_7100', 0, async function (done) {
            var TAG = "SUB_AA_Extension_ServiceExtensionContext_7100";
            console.log(TAG + " --- start");
            globalThis.lifeCycleList = [];
            console.log(TAG + " lifeCycleList = " + JSON.stringify(globalThis.lifeCycleList));
            abilityContext.startAbility({
                bundleName: "com.example.serviceextension",
                abilityName: "com.example.serviceextension.ServiceAbility"
            }, (error, data) => {
                console.log(TAG + '-- startAbility(ServiceAbility): ' + JSON.stringify(error) + ", " + JSON.stringify(data));
            });
            setTimeout(async function () {
                await globalThis.extensionContext.startAbility({
                    flags: "2",
                    bundleName: "com.example.serviceextension",
                    abilityName: "com.example.serviceextension.ServiceAbility2"
                }, (err, data) => {
                    console.log(TAG + '-- startAbility(ServiceAbility2): ' + JSON.stringify(err) + ", " + JSON.stringify(data));
                });
                setTimeout(function () {
                    var actualValue = globalThis.serviceWant2.flags;
                    checkParametersValue(actualValue, 0, TAG);
                    console.log(TAG + " lifeCycleList = " + JSON.stringify(globalThis.lifeCycleList));
                    var findTarget = ["ServiceAbility2_onCreate", "ServiceAbility2_onRequest"];
                    checkLifeCycle(globalThis.lifeCycleList, findTarget, TAG);
                    done();
                }, 2000);
            }, 2000);
        });
        (0, index_1.it)('SUB_AA_Extension_ServiceExtensionContext_7200', 0, async function (done) {
            var TAG = "SUB_AA_Extension_ServiceExtensionContext_7200";
            console.log(TAG + " --- start");
            globalThis.lifeCycleList = [];
            console.log(TAG + " lifeCycleList = " + JSON.stringify(globalThis.lifeCycleList));
            abilityContext.startAbility({
                bundleName: "com.example.serviceextension",
                abilityName: "com.example.serviceextension.ServiceAbility"
            }, (error, data) => {
                console.log(TAG + '-- startAbility(ServiceAbility): ' + JSON.stringify(error) + ", " + JSON.stringify(data));
            });
            setTimeout(async function () {
                await globalThis.extensionContext.startAbility({
                    flags: "aa",
                    bundleName: "com.example.serviceextension",
                    abilityName: "com.example.serviceextension.ServiceAbility2"
                }, (err, data) => {
                    console.log(TAG + '-- startAbility(ServiceAbility2): ' + JSON.stringify(err) + ", " + JSON.stringify(data));
                });
                setTimeout(function () {
                    var actualValue = globalThis.serviceWant2.flags;
                    checkParametersValue(actualValue, 0, TAG);
                    console.log(TAG + " lifeCycleList = " + JSON.stringify(globalThis.lifeCycleList));
                    var findTarget = ["ServiceAbility2_onCreate", "ServiceAbility2_onRequest"];
                    checkLifeCycle(globalThis.lifeCycleList, findTarget, TAG);
                    done();
                }, 2000);
            }, 2000);
        });
        (0, index_1.it)('SUB_AA_Extension_ServiceExtensionContext_7300', 0, async function (done) {
            var TAG = "SUB_AA_Extension_ServiceExtensionContext_7300";
            console.log(TAG + " --- start");
            globalThis.lifeCycleList = [];
            console.log(TAG + " lifeCycleList = " + JSON.stringify(globalThis.lifeCycleList));
            abilityContext.startAbility({
                bundleName: "com.example.serviceextension",
                abilityName: "com.example.serviceextension.ServiceAbility"
            }, (error, data) => {
                console.log(TAG + '-- startAbility(ServiceAbility): ' + JSON.stringify(error) + ", " + JSON.stringify(data));
            });
            setTimeout(async function () {
                await globalThis.extensionContext.startAbility({
                    parameters: {
                        "test": 666
                    },
                    bundleName: "com.example.serviceextension",
                    abilityName: "com.example.serviceextension.ServiceAbility2"
                }, (err, data) => {
                    console.log(TAG + '-- startAbility(ServiceAbility2): ' + JSON.stringify(err) + ", " + JSON.stringify(data));
                });
                setTimeout(function () {
                    var actualValue = globalThis.serviceWant2.parameters.test;
                    checkParametersValue(actualValue, 666, TAG);
                    console.log(TAG + " lifeCycleList = " + JSON.stringify(globalThis.lifeCycleList));
                    var findTarget = ["ServiceAbility2_onCreate", "ServiceAbility2_onRequest"];
                    checkLifeCycle(globalThis.lifeCycleList, findTarget, TAG);
                    done();
                }, 2000);
            }, 2000);
        });
        (0, index_1.it)('SUB_AA_Extension_ServiceExtensionContext_7400', 0, async function (done) {
            var TAG = "SUB_AA_Extension_ServiceExtensionContext_7400";
            console.log(TAG + " --- start");
            globalThis.lifeCycleList = [];
            console.log(TAG + " lifeCycleList = " + JSON.stringify(globalThis.lifeCycleList));
            abilityContext.startAbility({
                bundleName: "com.example.serviceextension",
                abilityName: "com.example.serviceextension.ServiceAbility"
            }, (error, data) => {
                console.log(TAG + '-- startAbility(ServiceAbility): ' + JSON.stringify(error) + ", " + JSON.stringify(data));
            });
            setTimeout(async function () {
                await globalThis.extensionContext.startAbility({
                    parameters: {
                        "test": 1231564215648115648203065413
                    },
                    bundleName: "com.example.serviceextension",
                    abilityName: "com.example.serviceextension.ServiceAbility2"
                }, (err, data) => {
                    console.log(TAG + '-- startAbility(ServiceAbility2): ' + JSON.stringify(err) + ", " + JSON.stringify(data));
                });
                setTimeout(function () {
                    var actualValue = globalThis.serviceWant2.parameters.test;
                    checkParametersValue(actualValue, 1.2315642156481157e+27, TAG);
                    console.log(TAG + " lifeCycleList = " + JSON.stringify(globalThis.lifeCycleList));
                    var findTarget = ["ServiceAbility2_onCreate", "ServiceAbility2_onRequest"];
                    checkLifeCycle(globalThis.lifeCycleList, findTarget, TAG);
                    done();
                }, 2000);
            }, 2000);
        });
        (0, index_1.it)('SUB_AA_Extension_ServiceExtensionContext_7500', 0, async function (done) {
            var TAG = "SUB_AA_Extension_ServiceExtensionContext_7500";
            console.log(TAG + " --- start");
            globalThis.lifeCycleList = [];
            console.log(TAG + " lifeCycleList = " + JSON.stringify(globalThis.lifeCycleList));
            abilityContext.startAbility({
                bundleName: "com.example.serviceextension",
                abilityName: "com.example.serviceextension.ServiceAbility"
            }, (error, data) => {
                console.log(TAG + '-- startAbility(ServiceAbility): ' + JSON.stringify(error) + ", " + JSON.stringify(data));
            });
            setTimeout(async function () {
                await globalThis.extensionContext.startAbility({
                    parameters: {
                        "test": 66.66
                    },
                    bundleName: "com.example.serviceextension",
                    abilityName: "com.example.serviceextension.ServiceAbility2"
                }, (err, data) => {
                    console.log(TAG + '-- startAbility(ServiceAbility2): ' + JSON.stringify(err) + ", " + JSON.stringify(data));
                });
                setTimeout(function () {
                    var actualValue = globalThis.serviceWant2.parameters.test;
                    checkParametersValue(actualValue, 66.66, TAG);
                    console.log(TAG + " lifeCycleList = " + JSON.stringify(globalThis.lifeCycleList));
                    var findTarget = ["ServiceAbility2_onCreate", "ServiceAbility2_onRequest"];
                    checkLifeCycle(globalThis.lifeCycleList, findTarget, TAG);
                    done();
                }, 2000);
            }, 2000);
        });
        (0, index_1.it)('SUB_AA_Extension_ServiceExtensionContext_7600', 0, async function (done) {
            var TAG = "SUB_AA_Extension_ServiceExtensionContext_7600";
            console.log(TAG + " --- start");
            globalThis.lifeCycleList = [];
            console.log(TAG + " lifeCycleList = " + JSON.stringify(globalThis.lifeCycleList));
            abilityContext.startAbility({
                bundleName: "com.example.serviceextension",
                abilityName: "com.example.serviceextension.ServiceAbility"
            }, (error, data) => {
                console.log(TAG + '-- startAbility(ServiceAbility): ' + JSON.stringify(error) + ", " + JSON.stringify(data));
            });
            setTimeout(async function () {
                await globalThis.extensionContext.startAbility({
                    parameters: {
                        "test": 66.66666666666666
                    },
                    bundleName: "com.example.serviceextension",
                    abilityName: "com.example.serviceextension.ServiceAbility2"
                }, (err, data) => {
                    console.log(TAG + '-- startAbility(ServiceAbility2): ' + JSON.stringify(err) + ", " + JSON.stringify(data));
                });
                setTimeout(function () {
                    var actualValue = globalThis.serviceWant2.parameters.test;
                    checkParametersValue(actualValue, 66.66666666666666, TAG);
                    console.log(TAG + " lifeCycleList = " + JSON.stringify(globalThis.lifeCycleList));
                    var findTarget = ["ServiceAbility2_onCreate", "ServiceAbility2_onRequest"];
                    checkLifeCycle(globalThis.lifeCycleList, findTarget, TAG);
                    done();
                }, 2000);
            }, 2000);
        });
        (0, index_1.it)('SUB_AA_Extension_ServiceExtensionContext_7700', 0, async function (done) {
            var TAG = "SUB_AA_Extension_ServiceExtensionContext_7700";
            console.log(TAG + " --- start");
            globalThis.lifeCycleList = [];
            console.log(TAG + " lifeCycleList = " + JSON.stringify(globalThis.lifeCycleList));
            abilityContext.startAbility({
                bundleName: "com.example.serviceextension",
                abilityName: "com.example.serviceextension.ServiceAbility"
            }, (error, data) => {
                console.log(TAG + '-- startAbility(ServiceAbility): ' + JSON.stringify(error) + ", " + JSON.stringify(data));
            });
            setTimeout(async function () {
                await globalThis.extensionContext.startAbility({
                    parameters: {
                        "test": 66.66666666666666666
                    },
                    bundleName: "com.example.serviceextension",
                    abilityName: "com.example.serviceextension.ServiceAbility2"
                }, (err, data) => {
                    console.log(TAG + '-- startAbility(ServiceAbility2): ' + JSON.stringify(err) + ", " + JSON.stringify(data));
                });
                setTimeout(function () {
                    var actualValue = globalThis.serviceWant2.parameters.test;
                    checkParametersValue(actualValue, 66.66666666666667, TAG);
                    console.log(TAG + " lifeCycleList = " + JSON.stringify(globalThis.lifeCycleList));
                    var findTarget = ["ServiceAbility2_onCreate", "ServiceAbility2_onRequest"];
                    checkLifeCycle(globalThis.lifeCycleList, findTarget, TAG);
                    done();
                }, 2000);
            }, 2000);
        });
        (0, index_1.it)('SUB_AA_Extension_ServiceExtensionContext_7800', 0, async function (done) {
            var TAG = "SUB_AA_Extension_ServiceExtensionContext_7800";
            console.log(TAG + " --- start");
            globalThis.lifeCycleList = [];
            console.log(TAG + " lifeCycleList = " + JSON.stringify(globalThis.lifeCycleList));
            abilityContext.startAbility({
                bundleName: "com.example.serviceextension",
                abilityName: "com.example.serviceextension.ServiceAbility"
            }, (error, data) => {
                console.log(TAG + '-- startAbility(ServiceAbility): ' + JSON.stringify(error) + ", " + JSON.stringify(data));
            });
            setTimeout(async function () {
                await globalThis.extensionContext.startAbility({
                    parameters: {
                        "test": 9223372036854776088
                    },
                    bundleName: "com.example.serviceextension",
                    abilityName: "com.example.serviceextension.ServiceAbility2"
                }, (err, data) => {
                    console.log(TAG + '-- startAbility(ServiceAbility2): ' + JSON.stringify(err) + ", " + JSON.stringify(data));
                });
                setTimeout(function () {
                    var actualValue = globalThis.serviceWant2.parameters.test;
                    checkParametersValue(actualValue, 9223372036854776000, TAG);
                    console.log(TAG + " lifeCycleList = " + JSON.stringify(globalThis.lifeCycleList));
                    var findTarget = ["ServiceAbility2_onCreate", "ServiceAbility2_onRequest"];
                    checkLifeCycle(globalThis.lifeCycleList, findTarget, TAG);
                    done();
                }, 2000);
            }, 2000);
        });
        (0, index_1.it)('SUB_AA_Extension_ServiceExtensionContext_7900', 0, async function (done) {
            var TAG = "SUB_AA_Extension_ServiceExtensionContext_7900";
            console.log(TAG + " --- start");
            globalThis.lifeCycleList = [];
            console.log(TAG + " lifeCycleList = " + JSON.stringify(globalThis.lifeCycleList));
            abilityContext.startAbility({
                bundleName: "com.example.serviceextension",
                abilityName: "com.example.serviceextension.ServiceAbility"
            }, (error, data) => {
                console.log(TAG + '-- startAbility(ServiceAbility): ' + JSON.stringify(error) + ", " + JSON.stringify(data));
            });
            setTimeout(async function () {
                await globalThis.extensionContext.startAbility({
                    parameters: {
                        "test": "testString"
                    },
                    bundleName: "com.example.serviceextension",
                    abilityName: "com.example.serviceextension.ServiceAbility2"
                }, (err, data) => {
                    console.log(TAG + '-- startAbility(ServiceAbility2): ' + JSON.stringify(err) + ", " + JSON.stringify(data));
                });
                setTimeout(function () {
                    var actualValue = globalThis.serviceWant2.parameters.test;
                    checkParametersValue(actualValue, "testString", TAG);
                    console.log(TAG + " lifeCycleList = " + JSON.stringify(globalThis.lifeCycleList));
                    var findTarget = ["ServiceAbility2_onCreate", "ServiceAbility2_onRequest"];
                    checkLifeCycle(globalThis.lifeCycleList, findTarget, TAG);
                    done();
                }, 2000);
            }, 2000);
        });
        (0, index_1.it)('SUB_AA_Extension_ServiceExtensionContext_8000', 0, async function (done) {
            var TAG = "SUB_AA_Extension_ServiceExtensionContext_8000";
            console.log(TAG + " --- start");
            globalThis.lifeCycleList = [];
            console.log(TAG + " lifeCycleList = " + JSON.stringify(globalThis.lifeCycleList));
            abilityContext.startAbility({
                bundleName: "com.example.serviceextension",
                abilityName: "com.example.serviceextension.ServiceAbility"
            }, (error, data) => {
                console.log(TAG + '-- startAbility(ServiceAbility): ' + JSON.stringify(error) + ", " + JSON.stringify(data));
            });
            setTimeout(async function () {
                await globalThis.extensionContext.startAbility({
                    parameters: {
                        "test": true
                    },
                    bundleName: "com.example.serviceextension",
                    abilityName: "com.example.serviceextension.ServiceAbility2"
                }, (err, data) => {
                    console.log(TAG + '-- startAbility(ServiceAbility2): ' + JSON.stringify(err) + ", " + JSON.stringify(data));
                });
                setTimeout(function () {
                    var expectValue = globalThis.serviceWant2.parameters.test;
                    console.log(TAG + " expectValue = " + JSON.stringify(expectValue));
                    (0, index_1.expect)(expectValue).assertTrue();
                    console.log(TAG + " lifeCycleList = " + JSON.stringify(globalThis.lifeCycleList));
                    var findTarget = ["ServiceAbility2_onCreate", "ServiceAbility2_onRequest"];
                    checkLifeCycle(globalThis.lifeCycleList, findTarget, TAG);
                    done();
                }, 2000);
            }, 2000);
        });
        (0, index_1.it)('SUB_AA_Extension_ServiceExtensionContext_8100', 0, async function (done) {
            var TAG = "SUB_AA_Extension_ServiceExtensionContext_8100";
            console.log(TAG + " --- start");
            globalThis.lifeCycleList = [];
            console.log(TAG + " lifeCycleList = " + JSON.stringify(globalThis.lifeCycleList));
            abilityContext.startAbility({
                bundleName: "com.example.serviceextension",
                abilityName: "com.example.serviceextension.ServiceAbility"
            }, (error, data) => {
                console.log(TAG + '-- startAbility(ServiceAbility): ' + JSON.stringify(error) + ", " + JSON.stringify(data));
            });
            setTimeout(async function () {
                var testStr = [1, 2, 3];
                await globalThis.extensionContext.startAbility({
                    parameters: {
                        "test": testStr
                    },
                    bundleName: "com.example.serviceextension",
                    abilityName: "com.example.serviceextension.ServiceAbility2"
                }, (err, data) => {
                    console.log(TAG + '-- startAbility(ServiceAbility2): ' + JSON.stringify(err) + ", " + JSON.stringify(data));
                });
                setTimeout(function () {
                    var actualValue = globalThis.serviceWant2.parameters.test;
                    checkParametersArrayValue(actualValue, testStr, TAG);
                    console.log(TAG + " lifeCycleList = " + JSON.stringify(globalThis.lifeCycleList));
                    var findTarget = ["ServiceAbility2_onCreate", "ServiceAbility2_onRequest"];
                    checkLifeCycle(globalThis.lifeCycleList, findTarget, TAG);
                    done();
                }, 2000);
            }, 2000);
        });
        (0, index_1.it)('SUB_AA_Extension_ServiceExtensionContext_8200', 0, async function (done) {
            var TAG = "SUB_AA_Extension_ServiceExtensionContext_8200";
            console.log(TAG + " --- start");
            globalThis.lifeCycleList = [];
            console.log(TAG + " lifeCycleList = " + JSON.stringify(globalThis.lifeCycleList));
            abilityContext.startAbility({
                bundleName: "com.example.serviceextension",
                abilityName: "com.example.serviceextension.ServiceAbility"
            }, (error, data) => {
                console.log(TAG + '-- startAbility(ServiceAbility): ' + JSON.stringify(error) + ", " + JSON.stringify(data));
            });
            setTimeout(async function () {
                const testStr = ["string1", "string2"];
                await globalThis.extensionContext.startAbility({
                    parameters: {
                        "test": testStr
                    },
                    bundleName: "com.example.serviceextension",
                    abilityName: "com.example.serviceextension.ServiceAbility2"
                }, (err, data) => {
                    console.log(TAG + '-- startAbility(ServiceAbility2): ' + JSON.stringify(err) + ", " + JSON.stringify(data));
                });
                setTimeout(function () {
                    var actualValue = globalThis.serviceWant2.parameters.test;
                    checkParametersArrayValue(actualValue, testStr, TAG);
                    console.log(TAG + " lifeCycleList = " + JSON.stringify(globalThis.lifeCycleList));
                    var findTarget = ["ServiceAbility2_onCreate", "ServiceAbility2_onRequest"];
                    checkLifeCycle(globalThis.lifeCycleList, findTarget, TAG);
                    done();
                }, 2000);
            }, 2000);
        });
        (0, index_1.it)('SUB_AA_Extension_ServiceExtensionContext_8400', 0, async function (done) {
            var TAG = "SUB_AA_Extension_ServiceExtensionContext_8400";
            console.log(TAG + " --- start");
            globalThis.lifeCycleList = [];
            console.log(TAG + " lifeCycleList = " + JSON.stringify(globalThis.lifeCycleList));
            abilityContext.startAbility({
                bundleName: "com.example.serviceextension",
                abilityName: "com.example.serviceextension.ServiceAbility"
            }, (error, data) => {
                console.log(TAG + '-- startAbility(ServiceAbility): ' + JSON.stringify(error) + ", " + JSON.stringify(data));
            });
            setTimeout(async function () {
                await globalThis.extensionContext.startAbility({
                    parameters: {
                        "test": 'a'
                    },
                    bundleName: "com.example.serviceextension",
                    abilityName: "com.example.serviceextension.ServiceAbility2"
                }, (err, data) => {
                    console.log(TAG + '-- startAbility(ServiceAbility2): ' + JSON.stringify(err) + ", " + JSON.stringify(data));
                });
                setTimeout(function () {
                    var actualValue = globalThis.serviceWant2.parameters.test;
                    checkParametersValue(actualValue, 'a', TAG);
                    console.log(TAG + " lifeCycleList = " + JSON.stringify(globalThis.lifeCycleList));
                    var findTarget = ["ServiceAbility2_onCreate", "ServiceAbility2_onRequest"];
                    checkLifeCycle(globalThis.lifeCycleList, findTarget, TAG);
                    done();
                }, 2000);
            }, 2000);
        });
        (0, index_1.it)('SUB_AA_Extension_ServiceExtensionContext_8500', 0, async function (done) {
            var TAG = "SUB_AA_Extension_ServiceExtensionContext_8500";
            console.log(TAG + " --- start");
            globalThis.lifeCycleList = [];
            console.log(TAG + " lifeCycleList = " + JSON.stringify(globalThis.lifeCycleList));
            abilityContext.startAbility({
                bundleName: "com.example.serviceextension",
                abilityName: "com.example.serviceextension.ServiceAbility"
            }, (error, data) => {
                console.log(TAG + '-- startAbility(ServiceAbility): ' + JSON.stringify(error) + ", " + JSON.stringify(data));
            });
            setTimeout(async function () {
                await globalThis.extensionContext.startAbility({
                    parameters: {
                        "test": { "testjson": "testjsonvalue" }
                    },
                    bundleName: "com.example.serviceextension",
                    abilityName: "com.example.serviceextension.ServiceAbility2"
                }, (err, data) => {
                    console.log(TAG + '-- startAbility(ServiceAbility2): ' + JSON.stringify(err) + ", " + JSON.stringify(data));
                });
                setTimeout(function () {
                    var actualValue = globalThis.serviceWant2.parameters.test.testjson;
                    checkParametersValue(actualValue, 'testjsonvalue', TAG);
                    console.log(TAG + " lifeCycleList = " + JSON.stringify(globalThis.lifeCycleList));
                    var findTarget = ["ServiceAbility2_onCreate", "ServiceAbility2_onRequest"];
                    checkLifeCycle(globalThis.lifeCycleList, findTarget, TAG);
                    done();
                }, 2000);
            }, 2000);
        });
        (0, index_1.it)('SUB_AA_Extension_ServiceExtensionContext_8600', 0, async function (done) {
            var TAG = "SUB_AA_Extension_ServiceExtensionContext_8600";
            console.log(TAG + " --- start");
            globalThis.lifeCycleList = [];
            console.log(TAG + " lifeCycleList = " + JSON.stringify(globalThis.lifeCycleList));
            abilityContext.startAbility({
                bundleName: "com.example.serviceextension",
                abilityName: "com.example.serviceextension.ServiceAbility"
            }, (error, data) => {
                console.log(TAG + '-- startAbility(ServiceAbility): ' + JSON.stringify(error) + ", " + JSON.stringify(data));
            });
            setTimeout(async function () {
                await globalThis.extensionContext.startAbility({
                    parameters: {
                        "ability.want.params.TITLE": "test"
                    },
                    bundleName: "com.example.serviceextension",
                    abilityName: "com.example.serviceextension.ServiceAbility2"
                }, (err, data) => {
                    console.log(TAG + '-- startAbility(ServiceAbility2): ' + JSON.stringify(err) + ", " + JSON.stringify(data));
                });
                setTimeout(function () {
                    var actualValue = globalThis.serviceWant2.parameters["ability.want.params.TITLE"];
                    checkParametersValue(actualValue, "test", TAG);
                    console.log(TAG + " lifeCycleList = " + JSON.stringify(globalThis.lifeCycleList));
                    var findTarget = ["ServiceAbility2_onCreate", "ServiceAbility2_onRequest"];
                    checkLifeCycle(globalThis.lifeCycleList, findTarget, TAG);
                    done();
                }, 2000);
            }, 2000);
        });
        (0, index_1.it)('SUB_AA_Extension_ServiceExtensionContext_8700', 0, async function (done) {
            var TAG = "SUB_AA_Extension_ServiceExtensionContext_8700";
            console.log(TAG + " --- start");
            globalThis.lifeCycleList = [];
            console.log(TAG + " lifeCycleList = " + JSON.stringify(globalThis.lifeCycleList));
            abilityContext.startAbility({
                bundleName: "com.example.serviceextension",
                abilityName: "com.example.serviceextension.ServiceAbility"
            }, (error, data) => {
                console.log(TAG + '-- startAbility(ServiceAbility): ' + JSON.stringify(error) + ", " + JSON.stringify(data));
            });
            setTimeout(async function () {
                await globalThis.extensionContext.startAbility({
                    parameters: {
                        "ability.want.params.TITLE": { "key": "one", "value": "test" }
                    },
                    bundleName: "com.example.serviceextension",
                    abilityName: "com.example.serviceextension.ServiceAbility2"
                }, (err, data) => {
                    console.log(TAG + '-- startAbility(ServiceAbility2): ' + JSON.stringify(err) + ", " + JSON.stringify(data));
                });
                setTimeout(function () {
                    var actualValue = globalThis.serviceWant2.parameters["ability.want.params.TITLE"];
                    console.log(TAG + " actualValue = " + JSON.stringify(actualValue));
                    (0, index_1.expect)(actualValue.key == "one").assertTrue();
                    (0, index_1.expect)(actualValue.value == "test").assertTrue();
                    console.log(TAG + " lifeCycleList = " + JSON.stringify(globalThis.lifeCycleList));
                    var findTarget = ["ServiceAbility2_onCreate", "ServiceAbility2_onRequest"];
                    checkLifeCycle(globalThis.lifeCycleList, findTarget, TAG);
                    done();
                }, 2000);
            }, 2000);
        });
        (0, index_1.it)('SUB_AA_Extension_ServiceExtensionContext_8800', 0, async function (done) {
            var TAG = "SUB_AA_Extension_ServiceExtensionContext_8800";
            console.log(TAG + " --- start");
            globalThis.lifeCycleList = [];
            console.log(TAG + " lifeCycleList = " + JSON.stringify(globalThis.lifeCycleList));
            abilityContext.startAbility({
                bundleName: "com.example.serviceextension",
                abilityName: "com.example.serviceextension.ServiceAbility"
            }, (error, data) => {
                console.log(TAG + '-- startAbility(ServiceAbility): ' + JSON.stringify(error) + ", " + JSON.stringify(data));
            });
            setTimeout(async function () {
                var testStr = [1, 2, 3];
                await globalThis.extensionContext.startAbility({
                    parameters: {
                        "test1": "test1",
                        "test2": 12345,
                        "test3": 'a',
                        "test4": testStr,
                        "test5": { "testjson": "testjsonvalue" }
                    },
                    bundleName: "com.example.serviceextension",
                    abilityName: "com.example.serviceextension.ServiceAbility2"
                }, (err, data) => {
                    console.log(TAG + '-- startAbility(ServiceAbility2): ' + JSON.stringify(err) + ", " + JSON.stringify(data));
                });
                setTimeout(function () {
                    var actualValue1 = globalThis.serviceWant2.parameters.test1;
                    checkParametersValue(actualValue1, "test1", TAG);
                    var actualValue2 = globalThis.serviceWant2.parameters.test2;
                    checkParametersValue(actualValue2, 12345, TAG);
                    var actualValue3 = globalThis.serviceWant2.parameters.test3;
                    checkParametersValue(actualValue3, 'a', TAG);
                    var actualValue4 = globalThis.serviceWant2.parameters.test4;
                    checkParametersArrayValue(actualValue4, testStr, TAG);
                    var actualValue5 = globalThis.serviceWant2.parameters.test5.testjson;
                    checkParametersValue(actualValue5, 'testjsonvalue', TAG);
                    console.log(TAG + " lifeCycleList = " + JSON.stringify(globalThis.lifeCycleList));
                    var findTarget = ["ServiceAbility2_onCreate", "ServiceAbility2_onRequest"];
                    checkLifeCycle(globalThis.lifeCycleList, findTarget, TAG);
                    done();
                }, 2000);
            }, 2000);
        });
        function checkLifeCycle(lifeCycle, findTarget, TAG) {
            var a = 0;
            console.log(TAG + " findTarget.length = " + findTarget.length);
            for (var i = 0; i < findTarget.length; i++) {
                var targetValue = findTarget[i];
                for (var j = 0; j < lifeCycle.length; j++) {
                    if (lifeCycle[j] == targetValue) {
                        a++;
                    }
                }
            }
            console.log(TAG + " a = " + a.toString());
            (0, index_1.expect)(a == findTarget.length).assertTrue();
        }
        function checkParametersValue(actualValue, expectValue, TAG) {
            console.log(TAG + " actualValue = " + JSON.stringify(actualValue));
            (0, index_1.expect)(actualValue == expectValue).assertTrue();
        }
        function checkParametersArrayValue(actualArray, expectArray, TAG) {
            console.log(TAG + " actualArray = " + JSON.stringify(actualArray));
            for (var i = 0; i < actualArray.length; i++) {
                (0, index_1.expect)(actualArray[i] == expectArray[i]).assertTrue();
            }
        }
    });
}
exports["default"] = ExtensionTest;


/***/ }),

/***/ "D:\\huawei\\five\\ynl5\\ServiceExtension\\entry\\src\\main\\ets\\test\\List.test.ets":
/*!**********************************************************************************!*\
  !*** D:\huawei\five\ynl5\ServiceExtension\entry\src\main\ets\test\List.test.ets ***!
  \**********************************************************************************/
/***/ (function(__unused_webpack_module, exports, __webpack_require__) {


var __importDefault = (this && this.__importDefault) || function (mod) {
    return (mod && mod.__esModule) ? mod : { "default": mod };
};
Object.defineProperty(exports, "__esModule", ({ value: true }));
const ExtensionTest_test_ets_1 = __importDefault(__webpack_require__(/*! ./ExtensionTest.test.ets */ "D:\\huawei\\five\\ynl5\\ServiceExtension\\entry\\src\\main\\ets\\test\\ExtensionTest.test.ets"));
function testsuite(context) {
    (0, ExtensionTest_test_ets_1.default)(context);
}
exports["default"] = testsuite;


/***/ })

/******/ 	});
/************************************************************************/
/******/ 	// The module cache
/******/ 	var __webpack_module_cache__ = {};
/******/ 	
/******/ 	// The require function
/******/ 	function __webpack_require__(moduleId) {
/******/ 		var commonCachedModule = globalThis["__common_module_cache__E59334e1F"] ? globalThis["__common_module_cache__E59334e1F"][moduleId]: null;
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
/******/ 		if (globalThis["__common_module_cache__E59334e1F"] && moduleId.indexOf("?name=") < 0 && Object.keys(globalThis["__common_module_cache__E59334e1F"]).indexOf(moduleId) >= 0) {
/******/ 		  globalThis["__common_module_cache__E59334e1F"][moduleId] = module;
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
/******/ 		var chunkLoadingGlobal = globalThis["webpackChunkE59334e1F"] = globalThis["webpackChunkE59334e1F"] || [];
/******/ 		chunkLoadingGlobal.forEach(webpackJsonpCallback.bind(null, 0));
/******/ 		chunkLoadingGlobal.push = webpackJsonpCallback.bind(null, chunkLoadingGlobal.push.bind(chunkLoadingGlobal));
/******/ 	})();
/******/ 	
/************************************************************************/
/******/ 	
/******/ 	// startup
/******/ 	// Load entry module and return exports
/******/ 	// This entry module depends on other loaded chunks and execution need to be delayed
/******/ 	var __webpack_exports__ = __webpack_require__.O(undefined, ["vendors"], () => (__webpack_require__("D:\\huawei\\five\\ynl5\\ServiceExtension\\entry\\src\\main\\ets\\MainAbility\\pages\\index.ets?entry")))
/******/ 	__webpack_exports__ = __webpack_require__.O(__webpack_exports__);
/******/ 	E59334e1F = __webpack_exports__;
/******/ 	
/******/ })()
;