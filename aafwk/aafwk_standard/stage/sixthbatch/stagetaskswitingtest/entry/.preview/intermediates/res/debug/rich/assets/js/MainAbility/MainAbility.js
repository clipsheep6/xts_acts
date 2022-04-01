/******/ (() => { // webpackBootstrap
/******/ 	"use strict";
var __webpack_exports__ = {};
// This entry need to be wrapped in an IIFE because it uses a non-standard name for the exports (exports).
(() => {
var exports = __webpack_exports__;
/*!***********************************************************************************************************************!*\
  !*** ../../../../../../../../Desktop/zhangyun/MissionApplication/entry/src/main/ets/MainAbility/MainAbility.ts?entry ***!
  \***********************************************************************************************************************/

Object.defineProperty(exports, "__esModule", ({ value: true }));
var Ability = globalThis.requireNapi('application.Ability') || (isSystemplugin('application.Ability', 'ohos') ? globalThis.ohosplugin.application.Ability : isSystemplugin('application.Ability', 'system') ? globalThis.systemplugin.application.Ability : undefined);
var commonEvent = globalThis.requireNapi('commonevent') || (isSystemplugin('commonevent', 'ohos') ? globalThis.ohosplugin.commonevent : isSystemplugin('commonevent', 'system') ? globalThis.systemplugin.commonevent : undefined);
class MainAbility extends Ability {
    onCreate(want, launchParam) {
        // Ability is creating, initialize resources for this ability
        console.log("MainAbility onCreate");
        globalThis.abilityWant = want;
        commonEvent.publish("mainAbility_onCreate", () => {
            console.log("MainAbility Publish CallBack mainAbility_onCreate");
        });
    }
    onDestroy() {
        // Ability is destroying, release resources for this ability
        console.log("MainAbility onDestroy");
        commonEvent.publish("mainAbility_onDestroy", () => {
            console.log("MainAbility Publish CallBack mainAbility_onDestroy");
        });
    }
    onWindowStageCreate(windowStage) {
        // Main window is created, set main page for this ability
        console.log("MainAbility onWindowStageCreate");
        globalThis.abilityContext = this.context;
        windowStage.setUIContent(this.context, "pages/index", null);
        commonEvent.publish("mainAbility_onWindowStageCreate", () => {
            console.log("MainAbility Publish CallBack mainAbility_onWindowStageCreate");
        });
    }
    onWindowStageDestroy() {
        // Main window is destroyed, release UI related resources
        console.log("MainAbility onWindowStageDestroy");
        commonEvent.publish("mainAbility_onWindowStageDestroy", () => {
            console.log("MainAbility Publish CallBack mainAbility_onWindowStageDestroy");
        });
    }
    onForeground() {
        // Ability has brought to foreground
        console.log("MainAbility onForeground");
        commonEvent.publish("mainAbility_onForeground", () => {
            console.log("MainAbility Publish CallBack mainAbility_onForeground");
        });
    }
    onBackground() {
        // Ability has back to background
        console.log("MainAbility onBackground");
        commonEvent.publish("mainAbility_onBackground", () => {
            console.log("MainAbility Publish CallBack mainAbility_onBackground");
        });
    }
}
globalThis.exports.default = MainAbility;
;

})();

/******/ })()
;