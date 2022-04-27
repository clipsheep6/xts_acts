/******/ (() => { // webpackBootstrap
/******/ 	var __webpack_modules__ = ({

/***/ "../../api/@system.router.d.ts":
/*!*************************************!*\
  !*** ../../api/@system.router.d.ts ***!
  \*************************************/
/***/ (() => {



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
/******/ 		__webpack_modules__[moduleId](module, module.exports, __webpack_require__);
/******/ 	
/******/ 		// Return the exports of the module
/******/ 		return module.exports;
/******/ 	}
/******/ 	
/************************************************************************/
var __webpack_exports__ = {};
// This entry need to be wrapped in an IIFE because it need to be in strict mode.
(() => {
"use strict";
var exports = __webpack_exports__;
/*!*********************************************************************************************************************************!*\
  !*** ../../../../../../../../Desktop/xts/ace_ets_test/ActsAceEtsTest/entry/src/main/ets/MainAbility/pages/AppStorage.ets?entry ***!
  \*********************************************************************************************************************************/

Object.defineProperty(exports, "__esModule", ({ value: true }));
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
__webpack_require__(/*! @system.router */ "../../api/@system.router.d.ts");
AppStorage.SetOrCreate("PropC", 1);
var link3 = AppStorage.Link("PropC");
AppStorage.SetOrCreate("PropA", 47);
var link1 = AppStorage.Link("PropA");
var link2 = AppStorage.Link("PropA");
var prop1 = AppStorage.Prop("PropA");
AppStorage.SetAndLink("PropB", 50);
var PropBValue = String(AppStorage.Get("PropB"));
AppStorage.SetAndProp("PropA", 47);
var PropAValue = String(AppStorage.Get("PropA"));
for (let key of AppStorage.Keys()) {
    var keys = key;
}
var setPropAValue = String(AppStorage.Set("PropA", 20));
var deleteValue = String(AppStorage.Delete("PropC"));
var hasValue = String(AppStorage.Has("PropB"));
var isMutableValue = String(AppStorage.IsMutable("PropB"));
class appStorage_test extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.content = "appStorage Page";
        this.__str1 = new ObservedPropertySimple(link1.get().toString(), this, "str1");
        this.__str2 = new ObservedPropertySimple(link2.get().toString(), this, "str2");
        this.__str3 = new ObservedPropertySimple(prop1.get().toString(), this, "str3");
        this.__str6 = new ObservedPropertySimple(link3.get().toString(), this, "str6");
        this.__PropB = new ObservedPropertySimple(PropBValue, this, "PropB");
        this.__PropA = new ObservedPropertySimple(PropAValue, this, "PropA");
        this.__keys = new ObservedPropertySimple(keys, this, "keys");
        this.__str4 = new ObservedPropertySimple(link1.get().toString(), this, "str4");
        this.__str5 = new ObservedPropertySimple(setPropAValue, this, "str5");
        this.__str7 = new ObservedPropertySimple(deleteValue, this, "str7");
        this.__str8 = new ObservedPropertySimple(hasValue, this, "str8");
        this.__str9 = new ObservedPropertySimple(isMutableValue, this, "str9");
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.content !== undefined) {
            this.content = params.content;
        }
        if (params.str1 !== undefined) {
            this.str1 = params.str1;
        }
        if (params.str2 !== undefined) {
            this.str2 = params.str2;
        }
        if (params.str3 !== undefined) {
            this.str3 = params.str3;
        }
        if (params.str6 !== undefined) {
            this.str6 = params.str6;
        }
        if (params.PropB !== undefined) {
            this.PropB = params.PropB;
        }
        if (params.PropA !== undefined) {
            this.PropA = params.PropA;
        }
        if (params.keys !== undefined) {
            this.keys = params.keys;
        }
        if (params.str4 !== undefined) {
            this.str4 = params.str4;
        }
        if (params.str5 !== undefined) {
            this.str5 = params.str5;
        }
        if (params.str7 !== undefined) {
            this.str7 = params.str7;
        }
        if (params.str8 !== undefined) {
            this.str8 = params.str8;
        }
        if (params.str9 !== undefined) {
            this.str9 = params.str9;
        }
    }
    aboutToBeDeleted() {
        this.__str1.aboutToBeDeleted();
        this.__str2.aboutToBeDeleted();
        this.__str3.aboutToBeDeleted();
        this.__str6.aboutToBeDeleted();
        this.__PropB.aboutToBeDeleted();
        this.__PropA.aboutToBeDeleted();
        this.__keys.aboutToBeDeleted();
        this.__str4.aboutToBeDeleted();
        this.__str5.aboutToBeDeleted();
        this.__str7.aboutToBeDeleted();
        this.__str8.aboutToBeDeleted();
        this.__str9.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get str1() {
        return this.__str1.get();
    }
    set str1(newValue) {
        this.__str1.set(newValue);
    }
    get str2() {
        return this.__str2.get();
    }
    set str2(newValue) {
        this.__str2.set(newValue);
    }
    get str3() {
        return this.__str3.get();
    }
    set str3(newValue) {
        this.__str3.set(newValue);
    }
    get str6() {
        return this.__str6.get();
    }
    set str6(newValue) {
        this.__str6.set(newValue);
    }
    get PropB() {
        return this.__PropB.get();
    }
    set PropB(newValue) {
        this.__PropB.set(newValue);
    }
    get PropA() {
        return this.__PropA.get();
    }
    set PropA(newValue) {
        this.__PropA.set(newValue);
    }
    get keys() {
        return this.__keys.get();
    }
    set keys(newValue) {
        this.__keys.set(newValue);
    }
    get str4() {
        return this.__str4.get();
    }
    set str4(newValue) {
        this.__str4.set(newValue);
    }
    get str5() {
        return this.__str5.get();
    }
    set str5(newValue) {
        this.__str5.set(newValue);
    }
    get str7() {
        return this.__str7.get();
    }
    set str7(newValue) {
        this.__str7.set(newValue);
    }
    get str8() {
        return this.__str8.get();
    }
    set str8(newValue) {
        this.__str8.set(newValue);
    }
    get str9() {
        return this.__str9.get();
    }
    set str9(newValue) {
        this.__str9.set(newValue);
    }
    onPageShow() {
        console.info('appStorage page show called');
    }
    onBuildDone() {
        console.info('appStorage page build done called');
    }
    render() {
        Flex.create({ direction: FlexDirection.Column, alignItems: ItemAlign.Center, justifyContent: FlexAlign.Center });
        Flex.key('flex');
        Flex.width('100%');
        Flex.height('100%');
        Scroll.create();
        Column.create();
        Text.create(`${this.content}`);
        Text.fontSize(50);
        Text.fontWeight(FontWeight.Bold);
        Text.pop();
        Button.createWithLabel(this.str1);
        Button.margin(15);
        Button.key('Button0_1');
        Button.fontWeight(FontWeight.Bold);
        Button.fontSize(20);
        Button.pop();
        Button.createWithLabel(this.str3);
        Button.margin(15);
        Button.key('Button0_2');
        Button.fontWeight(FontWeight.Bold);
        Button.fontSize(20);
        Button.pop();
        Button.createWithLabel(this.PropB);
        Button.margin(15);
        Button.key('Button0_3');
        Button.fontWeight(FontWeight.Bold);
        Button.fontSize(20);
        Button.pop();
        Button.createWithLabel(this.PropA);
        Button.margin(15);
        Button.key('Button0_4');
        Button.fontWeight(FontWeight.Bold);
        Button.fontSize(20);
        Button.pop();
        Button.createWithLabel(this.str8);
        Button.margin({ top: 10 });
        Button.key('Button0_5');
        Button.fontWeight(FontWeight.Bold);
        Button.fontSize(20);
        Button.pop();
        Button.createWithLabel(this.keys);
        Button.margin(15);
        Button.key('Button0_6');
        Button.fontWeight(FontWeight.Bold);
        Button.fontSize(20);
        Button.pop();
        Button.createWithLabel(this.str4);
        Button.margin(15);
        Button.key('Button0_7');
        Button.fontWeight(FontWeight.Bold);
        Button.fontSize(20);
        Button.pop();
        Button.createWithLabel(this.str5);
        Button.margin(15);
        Button.key('Button0_8');
        Button.fontWeight(FontWeight.Bold);
        Button.fontSize(20);
        Button.pop();
        Button.createWithLabel(this.str6);
        Button.margin(15);
        Button.key('Button0_9');
        Button.fontWeight(FontWeight.Bold);
        Button.fontSize(20);
        Button.pop();
        Button.createWithLabel(this.str7);
        Button.margin(15);
        Button.key('Button0_10');
        Button.fontWeight(FontWeight.Bold);
        Button.fontSize(20);
        Button.pop();
        Text.create(this.str9);
        Text.margin({ top: 10 });
        Text.key('Button0_12');
        Text.fontWeight(FontWeight.Bold);
        Text.fontSize(20);
        Text.pop();
        Column.pop();
        Scroll.pop();
        Flex.pop();
    }
}
loadDocument(new appStorage_test("1", undefined, {}));

})();

/******/ })()
;
//# sourceMappingURL=AppStorage.js.map