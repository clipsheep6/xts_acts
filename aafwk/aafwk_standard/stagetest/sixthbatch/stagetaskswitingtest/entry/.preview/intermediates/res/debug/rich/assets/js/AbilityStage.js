/******/ (() => { // webpackBootstrap
/******/ 	"use strict";
var __webpack_exports__ = {};
// This entry need to be wrapped in an IIFE because it uses a non-standard name for the exports (exports).
(() => {
var exports = __webpack_exports__;
/*!************************************************************************************************************!*\
  !*** ../../../../../../../../Desktop/zhangyun/MissionApplication/entry/src/main/ets/AbilityStage.ts?entry ***!
  \************************************************************************************************************/

Object.defineProperty(exports, "__esModule", ({ value: true }));
var AbilityStage = globalThis.requireNapi('application.AbilityStage') || (isSystemplugin('application.AbilityStage', 'ohos') ? globalThis.ohosplugin.application.AbilityStage : isSystemplugin('application.AbilityStage', 'system') ? globalThis.systemplugin.application.AbilityStage : undefined);
class MyAbilityStage extends AbilityStage {
    onCreate() {
        console.log("MyAbilityStage onCreate");
        globalThis.stageOnCreateRun = 1;
        globalThis.stageContext = this.context;
        globalThis.eventList = [];
    }
}
globalThis.exports.default = MyAbilityStage;

})();

/******/ })()
;