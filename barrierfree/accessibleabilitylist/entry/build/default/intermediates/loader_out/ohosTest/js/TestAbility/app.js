var _43763341340b3c35e62568ae7538a264fd41cbe5de6015b3b12fd0c2dbdff076;
/******/ (() => { // webpackBootstrap
/******/ 	var __webpack_modules__ = ({

/***/ "../../../../../Application/entry/src/ohosTest/js/TestAbility/app.js?entry":
/*!*********************************************************************************!*\
  !*** ../../../../../Application/entry/src/ohosTest/js/TestAbility/app.js?entry ***!
  \*********************************************************************************/
/***/ ((__unused_webpack_module, __unused_webpack_exports, __webpack_require__) => {

var $app_script$ = __webpack_require__(/*! !!../../../../../../SDK/10/js/build-tools/ace-loader/lib/script.js!../../../../../../SDK/10/js/build-tools/ace-loader/node_modules/babel-loader?extends=D:\SDK\10\js\build-tools\ace-loader\babel.config.js&targets=node 8!../../../../../../SDK/10/js/build-tools/ace-loader/lib/resource-reference-script.js!../../../../../../SDK/10/js/build-tools/ace-loader/lib/manifest-loader.js?path=D:\Application\entry\src\ohosTest\js\TestAbility\app.js!./app.js */ "./lib/script.js!./node_modules/babel-loader/lib/index.js?extends=D:\\SDK\\10\\js\\build-tools\\ace-loader\\babel.config.js&targets=node 8!./lib/resource-reference-script.js!./lib/manifest-loader.js?path=D:\\Application\\entry\\src\\ohosTest\\js\\TestAbility\\app.js!../../../../../Application/entry/src/ohosTest/js/TestAbility/app.js")

      $app_define$('@app-application/app', [], function($app_require$, $app_exports$, $app_module$) {
      
      $app_script$($app_module$, $app_exports$, $app_require$)
      if ($app_exports$.__esModule && $app_exports$.default) {
        $app_module$.exports = $app_exports$.default
      }
      
      })
      $app_bootstrap$('@app-application/app',undefined,undefined)

/***/ }),

/***/ "../../../../../Application/entry/src/ohosTest/js/test/AccessibleAbilityList.test.js":
/*!*******************************************************************************************!*\
  !*** ../../../../../Application/entry/src/ohosTest/js/test/AccessibleAbilityList.test.js ***!
  \*******************************************************************************************/
/***/ ((__unused_webpack_module, exports, __webpack_require__) => {

"use strict";


var _interopRequireDefault = __webpack_require__(/*! @babel/runtime/helpers/interopRequireDefault */ "./node_modules/@babel/runtime/helpers/interopRequireDefault.js");
Object.defineProperty(exports, "__esModule", ({
  value: true
}));
exports["default"] = AccessibleAbilityList;
var _hypium = __webpack_require__(/*! @ohos/hypium */ "./node_modules/@ohos/hypium/index.js");
var _ohos = _interopRequireDefault(requireModule("@ohos.accessibility"));
const abilityType = 'all';
const abilityState = 'install';
function AccessibleAbilityList() {
  (0, _hypium.describe)('AccessibleAbilityList', function () {
    (0, _hypium.beforeAll)(async function (done) {
      console.info(`AccessibleAbilityList: beforeAll starts`);
      done();
    });
    (0, _hypium.beforeEach)(async function (done) {
      console.info(`AccessibleAbilityList: beforeEach starts`);
      done();
    });
    (0, _hypium.afterEach)(async function (done) {
      console.info(`AccessibleAbilityList: afterEach starts`);
      done();
    });
    (0, _hypium.it)('AbilityList_0210', 0, async function (done) {
      console.info('AbilityList_0210');
      let abilityType = 'audible';
      _ohos.default.getAbilityLists(abilityType, abilityState, (err, data) => {
        if (err && err.code != 0) {
          console.error(`AccessibleAbilityList: AbilityList_0210 has error: ${err.code}`);
          (0, _hypium.expect)(null).assertFail();
          done();
        }
        console.info(`AccessibleAbilityList: AbilityList_0210 result ${data.length}`);
        (0, _hypium.expect)(Array.isArray(data)).assertEqual(true);
        done();
      });
    });
    (0, _hypium.it)('AbilityList_0220', 0, async function (done) {
      console.info('AbilityList_0220');
      let abilityType = 'generic';
      _ohos.default.getAbilityLists(abilityType, abilityState, (err, data) => {
        if (err && err.code != 0) {
          console.error(`AccessibleAbilityList: AbilityList_0220 has error: ${err.code}`);
          (0, _hypium.expect)(null).assertFail();
          done();
        }
        console.info(`AccessibleAbilityList: AbilityList_0220 result ${data.length}`);
        (0, _hypium.expect)(Array.isArray(data)).assertEqual(true);
        done();
      });
    });
    (0, _hypium.it)('AbilityList_0230', 0, async function (done) {
      console.info('AbilityList_0230');
      let abilityType = 'haptic';
      _ohos.default.getAbilityLists(abilityType, abilityState, (err, data) => {
        if (err && err.code != 0) {
          console.error(`AccessibleAbilityList: AbilityList_0230 has error: ${err.code}`);
          (0, _hypium.expect)(null).assertFail();
          done();
        }
        console.info(`AccessibleAbilityList: AbilityList_0230 result ${data.length}`);
        (0, _hypium.expect)(Array.isArray(data)).assertEqual(true);
        done();
      });
    });
    (0, _hypium.it)('AbilityList_0240', 0, async function (done) {
      console.info('AbilityList_0240');
      let abilityType = 'spoken';
      _ohos.default.getAbilityLists(abilityType, abilityState, (err, data) => {
        if (err && err.code != 0) {
          console.error(`AccessibleAbilityList: AbilityList_0240 has error: ${err.code}`);
          (0, _hypium.expect)(null).assertFail();
          done();
        }
        console.info(`AccessibleAbilityList: AbilityList_0240 result ${data.length}`);
        (0, _hypium.expect)(Array.isArray(data)).assertEqual(true);
        done();
      });
    });
    (0, _hypium.it)('AbilityList_0250', 0, async function (done) {
      console.info('AbilityList_0250');
      let abilityType = 'visual';
      _ohos.default.getAbilityLists(abilityType, abilityState, (err, data) => {
        if (err && err.code != 0) {
          console.error(`AccessibleAbilityList: AbilityList_0250 has error: ${err.code}`);
          (0, _hypium.expect)(null).assertFail();
          done();
        }
        console.info(`AccessibleAbilityList: AbilityList_0250 result ${data.length}`);
        (0, _hypium.expect)(Array.isArray(data)).assertEqual(true);
        done();
      });
    });
    (0, _hypium.it)('AbilityList_0260', 0, async function (done) {
      console.info('AbilityList_0260');
      let abilityType = 'all';
      _ohos.default.getAbilityLists(abilityType, abilityState, (err, data) => {
        if (err && err.code != 0) {
          console.error(`AccessibleAbilityList: AbilityList_0260 has error: ${err.code}`);
          (0, _hypium.expect)(null).assertFail();
          done();
        }
        console.info(`AccessibleAbilityList: AbilityList_0260 result ${data.length}`);
        (0, _hypium.expect)(Array.isArray(data)).assertEqual(true);
        done();
      });
    });
    (0, _hypium.it)('AbilityList_0270', 0, async function (done) {
      console.info('AbilityList_0270');
      let abilityType = '';
      _ohos.default.getAbilityLists(abilityType, abilityState, (err, data) => {
        if (err && err.code != 0) {
          console.error(`AccessibleAbilityList: AbilityList_0270 has error: ${err.code}`);
          (0, _hypium.expect)(Array.isArray(data)).assertEqual(true);
          done();
        }
        console.info(`AccessibleAbilityList: AbilityList_0270 result ${data.length}`);
        (0, _hypium.expect)(Array.isArray(data)).assertEqual(true);
        done();
      });
    });
    (0, _hypium.it)('AbilityList_0280', 0, async function (done) {
      console.info('AbilityList_0280');
      let abilityType = null;
      _ohos.default.getAbilityLists(abilityType, abilityState, (err, data) => {
        if (err && err.code != 0) {
          console.error(`AccessibleAbilityList: AbilityList_0280 has error: ${err.code}`);
          (0, _hypium.expect)(Array.isArray(data)).assertEqual(true);
          done();
        }
        console.info(`AccessibleAbilityList: AbilityList_0280 result ${data.length}`);
        (0, _hypium.expect)(Array.isArray(data)).assertEqual(true);
        done();
      });
    });
    (0, _hypium.it)('AbilityList_0290', 0, async function (done) {
      console.info('AbilityList_0290');
      let abilityState = 'enable';
      _ohos.default.getAbilityLists(abilityType, abilityState, (err, data) => {
        if (err && err.code != 0) {
          console.error(`AccessibleAbilityList: AbilityList_0290 has error: ${err.code}`);
          (0, _hypium.expect)(null).assertFail();
          done();
        }
        console.info(`AccessibleAbilityList: AbilityList_0290 result ${data.length}`);
        (0, _hypium.expect)(Array.isArray(data)).assertEqual(true);
        done();
      });
    });
    (0, _hypium.it)('AbilityList_0300', 0, async function (done) {
      console.info('AbilityList_0300');
      let abilityState = 'disable';
      _ohos.default.getAbilityLists(abilityType, abilityState, (err, data) => {
        if (err && err.code != 0) {
          console.error(`AccessibleAbilityList: AbilityList_0300 has error: ${err.code}`);
          (0, _hypium.expect)(null).assertFail();
          done();
        }
        console.info(`AccessibleAbilityList: AbilityList_0300 result ${data.length}`);
        (0, _hypium.expect)(Array.isArray(data)).assertEqual(true);
        done();
      });
    });
    (0, _hypium.it)('AbilityList_0310', 0, async function (done) {
      console.info('AbilityList_0310');
      let abilityState = 'install';
      _ohos.default.getAbilityLists(abilityType, abilityState, (err, data) => {
        if (err && err.code != 0) {
          console.error(`AccessibleAbilityList: AbilityList_0310 has error: ${err.code}`);
          (0, _hypium.expect)(null).assertFail();
          done();
        }
        console.info(`AccessibleAbilityList: AbilityList_0310 result ${data.length}`);
        (0, _hypium.expect)(Array.isArray(data)).assertEqual(true);
        done();
      });
    });
    (0, _hypium.it)('AbilityList_0320', 0, async function (done) {
      console.info('AbilityList_0320');
      let abilityState = '';
      _ohos.default.getAbilityLists(abilityType, abilityState, (err, data) => {
        if (err && err.code != 0) {
          console.error(`AccessibleAbilityList: AbilityList_0320 has error: ${err.code}`);
          (0, _hypium.expect)(Array.isArray(data)).assertEqual(true);
          done();
        }
        console.info(`AccessibleAbilityList: AbilityList_0320 result ${data.length}`);
        (0, _hypium.expect)(Array.isArray(data)).assertEqual(true);
        done();
      });
    });
    (0, _hypium.it)('AbilityList_0330', 0, async function (done) {
      console.info('AbilityList_0330');
      let abilityState = null;
      _ohos.default.getAbilityLists(abilityType, abilityState, (err, data) => {
        if (err && err.code != 0) {
          console.error(`AccessibleAbilityList: AbilityList_0330 has error: ${err.code}`);
          (0, _hypium.expect)(Array.isArray(data)).assertEqual(true);
          done();
        }
        console.info(`AccessibleAbilityList: AbilityList_0330 result ${data.length}`);
        (0, _hypium.expect)(Array.isArray(data)).assertEqual(true);
        done();
      });
    });
    (0, _hypium.it)('AbilityList_0340', 0, async function (done) {
      console.info('AbilityList_0340');
      let abilityType = 'audible';
      _ohos.default.getAbilityLists(abilityType, abilityState).then(result => {
        console.info(`AccessibleAbilityList: AbilityList_0340 result ${result.length}`);
        (0, _hypium.expect)(Array.isArray(result)).assertEqual(true);
        done();
      }).catch(err => {
        console.error(`AccessibleAbilityList: AbilityList_0340 has error: ${err}`);
        (0, _hypium.expect)(null).assertFail();
        done();
      });
    });
    (0, _hypium.it)('AbilityList_0350', 0, async function (done) {
      console.info('AbilityList_0350');
      let abilityType = 'generic';
      _ohos.default.getAbilityLists(abilityType, abilityState).then(result => {
        console.info(`AccessibleAbilityList: AbilityList_0350 result ${result.length}`);
        (0, _hypium.expect)(Array.isArray(result)).assertEqual(true);
        done();
      }).catch(err => {
        console.error(`AccessibleAbilityList: AbilityList_0350 has error: ${err}`);
        (0, _hypium.expect)(null).assertFail();
        done();
      });
    });
    (0, _hypium.it)('AbilityList_0360', 0, async function (done) {
      console.info('AbilityList_0360');
      let abilityType = 'haptic';
      _ohos.default.getAbilityLists(abilityType, abilityState).then(result => {
        console.info(`AccessibleAbilityList: AbilityList_0360 result ${result.length}`);
        (0, _hypium.expect)(Array.isArray(result)).assertEqual(true);
        done();
      }).catch(err => {
        console.error(`AccessibleAbilityList: AbilityList_0360 has error: ${err}`);
        (0, _hypium.expect)(null).assertFail();
        done();
      });
    });
    (0, _hypium.it)('AbilityList_0370', 0, async function (done) {
      console.info('AbilityList_0370');
      let abilityType = 'spoken';
      _ohos.default.getAbilityLists(abilityType, abilityState).then(result => {
        console.info(`AccessibleAbilityList: AbilityList_0370 result ${result.length}`);
        (0, _hypium.expect)(Array.isArray(result)).assertEqual(true);
        done();
      }).catch(err => {
        console.error(`AccessibleAbilityList: AbilityList_0370 has error: ${err}`);
        (0, _hypium.expect)(null).assertFail();
        done();
      });
    });
    (0, _hypium.it)('AbilityList_0380', 0, async function (done) {
      console.info('AbilityList_0380');
      let abilityType = 'visual';
      _ohos.default.getAbilityLists(abilityType, abilityState).then(result => {
        console.info(`AccessibleAbilityList: AbilityList_0380 result ${result.length}`);
        (0, _hypium.expect)(Array.isArray(result)).assertEqual(true);
        done();
      }).catch(err => {
        console.error(`AccessibleAbilityList: AbilityList_0380 has error: ${err}`);
        (0, _hypium.expect)(null).assertFail();
        done();
      });
    });
    (0, _hypium.it)('AbilityList_0390', 0, async function (done) {
      console.info('AbilityList_0390');
      let abilityType = 'all';
      _ohos.default.getAbilityLists(abilityType, abilityState).then(result => {
        console.info(`AccessibleAbilityList: AbilityList_0390 result ${result.length}`);
        (0, _hypium.expect)(Array.isArray(result)).assertEqual(true);
        done();
      }).catch(err => {
        console.error(`AccessibleAbilityList: AbilityList_0390 has error: ${err}`);
        (0, _hypium.expect)(null).assertFail();
        done();
      });
    });
    (0, _hypium.it)('AbilityList_0420', 0, async function (done) {
      console.info('AbilityList_0420');
      let abilityState = 'enable';
      _ohos.default.getAbilityLists(abilityType, abilityState).then(result => {
        console.info(`AccessibleAbilityList: AbilityList_0420 result ${result.length}`);
        (0, _hypium.expect)(Array.isArray(result)).assertEqual(true);
        done();
      }).catch(err => {
        console.error(`AccessibleAbilityList: AbilityList_0420 has error: ${err}`);
        (0, _hypium.expect)(null).assertFail();
        done();
      });
    });
    (0, _hypium.it)('AbilityList_0430', 0, async function (done) {
      console.info('AbilityList_0430');
      let abilityState = 'disable';
      _ohos.default.getAbilityLists(abilityType, abilityState).then(result => {
        console.info(`AccessibleAbilityList: AbilityList_0430 result ${result.length}`);
        (0, _hypium.expect)(Array.isArray(result)).assertEqual(true);
        done();
      }).catch(err => {
        console.error(`AccessibleAbilityList: AbilityList_0430 has error: ${err}`);
        (0, _hypium.expect)(null).assertFail();
        done();
      });
    });
    (0, _hypium.it)('AbilityList_0440', 0, async function (done) {
      console.info('AbilityList_0440');
      let abilityState = 'install';
      _ohos.default.getAbilityLists(abilityType, abilityState).then(result => {
        console.info(`AccessibleAbilityList: AbilityList_0440 result ${result.length}`);
        (0, _hypium.expect)(Array.isArray(result)).assertEqual(true);
        done();
      }).catch(err => {
        console.error(`AccessibleAbilityList: AbilityList_0440 has error: ${err}`);
        (0, _hypium.expect)(null).assertFail();
        done();
      });
    });
  });
}

function requireModule(moduleName) {
  const systemList = ['system.router', 'system.app', 'system.prompt', 'system.configuration',
  'system.image', 'system.device', 'system.mediaquery', 'ohos.animator', 'system.grid', 'system.resource']
  var target = ''
  if (systemList.includes(moduleName.replace('@', ''))) {
    target = $app_require$('@app-module/' + moduleName.substring(1));
    return target;
  }
  var shortName = moduleName.replace(/@[^.]+.([^.]+)/, '$1');
  target = requireNapi(shortName);
  if (typeof target !== 'undefined' && /@ohos/.test(moduleName)) {
    return target;
  }
  if (typeof ohosplugin !== 'undefined' && /@ohos/.test(moduleName)) {
    target = ohosplugin;
    for (let key of shortName.split('.')) {
      target = target[key];
      if(!target) {
        break;
      }
    }
    if (typeof target !== 'undefined') {
      return target;
    }
  }
  if (typeof systemplugin !== 'undefined') {
    target = systemplugin;
    for (let key of shortName.split('.')) {
      target = target[key];
      if(!target) {
        break;
      }
    }
    if (typeof target !== 'undefined') {
      return target;
    }
  }
  return target;
}


/***/ }),

/***/ "../../../../../Application/entry/src/ohosTest/js/test/List.test.js":
/*!**************************************************************************!*\
  !*** ../../../../../Application/entry/src/ohosTest/js/test/List.test.js ***!
  \**************************************************************************/
/***/ ((__unused_webpack_module, exports, __webpack_require__) => {

"use strict";


var _interopRequireDefault = __webpack_require__(/*! @babel/runtime/helpers/interopRequireDefault */ "./node_modules/@babel/runtime/helpers/interopRequireDefault.js");
Object.defineProperty(exports, "__esModule", ({
  value: true
}));
exports["default"] = testsuite;
var _AccessibleAbilityListTest = _interopRequireDefault(__webpack_require__(/*! ./AccessibleAbilityList.test.js */ "../../../../../Application/entry/src/ohosTest/js/test/AccessibleAbilityList.test.js"));
function testsuite() {
  (0, _AccessibleAbilityListTest.default)();
}

function requireModule(moduleName) {
  const systemList = ['system.router', 'system.app', 'system.prompt', 'system.configuration',
  'system.image', 'system.device', 'system.mediaquery', 'ohos.animator', 'system.grid', 'system.resource']
  var target = ''
  if (systemList.includes(moduleName.replace('@', ''))) {
    target = $app_require$('@app-module/' + moduleName.substring(1));
    return target;
  }
  var shortName = moduleName.replace(/@[^.]+.([^.]+)/, '$1');
  target = requireNapi(shortName);
  if (typeof target !== 'undefined' && /@ohos/.test(moduleName)) {
    return target;
  }
  if (typeof ohosplugin !== 'undefined' && /@ohos/.test(moduleName)) {
    target = ohosplugin;
    for (let key of shortName.split('.')) {
      target = target[key];
      if(!target) {
        break;
      }
    }
    if (typeof target !== 'undefined') {
      return target;
    }
  }
  if (typeof systemplugin !== 'undefined') {
    target = systemplugin;
    for (let key of shortName.split('.')) {
      target = target[key];
      if(!target) {
        break;
      }
    }
    if (typeof target !== 'undefined') {
      return target;
    }
  }
  return target;
}


/***/ }),

/***/ "./lib/script.js!./node_modules/babel-loader/lib/index.js?extends=D:\\SDK\\10\\js\\build-tools\\ace-loader\\babel.config.js&targets=node 8!./lib/resource-reference-script.js!./lib/manifest-loader.js?path=D:\\Application\\entry\\src\\ohosTest\\js\\TestAbility\\app.js!../../../../../Application/entry/src/ohosTest/js/TestAbility/app.js":
/*!****************************************************************************************************************************************************************************************************************************************************************************************************************************************!*\
  !*** ./lib/script.js!./node_modules/babel-loader/lib/index.js?extends=D:\SDK\10\js\build-tools\ace-loader\babel.config.js&targets=node 8!./lib/resource-reference-script.js!./lib/manifest-loader.js?path=D:\Application\entry\src\ohosTest\js\TestAbility\app.js!../../../../../Application/entry/src/ohosTest/js/TestAbility/app.js ***!
  \****************************************************************************************************************************************************************************************************************************************************************************************************************************************/
/***/ ((module, __unused_webpack_exports, __webpack_require__) => {

module.exports = function(module, exports, $app_require$){"use strict";

var _interopRequireDefault = __webpack_require__(/*! @babel/runtime/helpers/interopRequireDefault */ "./node_modules/@babel/runtime/helpers/interopRequireDefault.js");
Object.defineProperty(exports, "__esModule", {
  value: true
});
exports.default = void 0;
var _ohos = _interopRequireDefault(requireModule("@ohos.hilog"));
var _ohosAppAbility = _interopRequireDefault(requireModule("@ohos.app.ability.abilityDelegatorRegistry"));
var _hypium = __webpack_require__(/*! @ohos/hypium */ "./node_modules/@ohos/hypium/index.js");
var _List = _interopRequireDefault(__webpack_require__(/*! ../test/List.test */ "../../../../../Application/entry/src/ohosTest/js/test/List.test.js"));
var _default = {
  onCreate() {
    _ohos.default.info(0x0000, 'testTag', '%{public}s', 'TestApplication onCreate');
    var abilityDelegator = _ohosAppAbility.default.getAbilityDelegator();
    var abilityDelegatorArguments = _ohosAppAbility.default.getArguments();
    _ohos.default.info(0x0000, 'testTag', '%{public}s', 'start run testcase!!!');
    _hypium.Hypium.hypiumTest(abilityDelegator, abilityDelegatorArguments, _List.default);
  },
  onDestroy() {
    _ohos.default.info(0x0000, 'testTag', '%{public}s', 'TestApplication onDestroy');
  }
};
exports.default = _default;
;
(exports.default || module.exports).manifest = __webpack_require__(/*! !!../../../../../../SDK/10/js/build-tools/ace-loader/lib/manifest-plugin.js!../../../../build/default/intermediates/manifest/ohosTest/TestAbility/manifest.json */ "./lib/manifest-plugin.js!../../../../../Application/entry/build/default/intermediates/manifest/ohosTest/TestAbility/manifest.json");

function requireModule(moduleName) {
  const systemList = ['system.router', 'system.app', 'system.prompt', 'system.configuration',
  'system.image', 'system.device', 'system.mediaquery', 'ohos.animator', 'system.grid', 'system.resource']
  var target = ''
  if (systemList.includes(moduleName.replace('@', ''))) {
    target = $app_require$('@app-module/' + moduleName.substring(1));
    return target;
  }
  var shortName = moduleName.replace(/@[^.]+.([^.]+)/, '$1');
  target = requireNapi(shortName);
  if (typeof target !== 'undefined' && /@ohos/.test(moduleName)) {
    return target;
  }
  if (typeof ohosplugin !== 'undefined' && /@ohos/.test(moduleName)) {
    target = ohosplugin;
    for (let key of shortName.split('.')) {
      target = target[key];
      if(!target) {
        break;
      }
    }
    if (typeof target !== 'undefined') {
      return target;
    }
  }
  if (typeof systemplugin !== 'undefined') {
    target = systemplugin;
    for (let key of shortName.split('.')) {
      target = target[key];
      if(!target) {
        break;
      }
    }
    if (typeof target !== 'undefined') {
      return target;
    }
  }
  return target;
}
}
/* generated by ace-loader */


/***/ }),

/***/ "./lib/manifest-plugin.js!../../../../../Application/entry/build/default/intermediates/manifest/ohosTest/TestAbility/manifest.json":
/*!*****************************************************************************************************************************************!*\
  !*** ./lib/manifest-plugin.js!../../../../../Application/entry/build/default/intermediates/manifest/ohosTest/TestAbility/manifest.json ***!
  \*****************************************************************************************************************************************/
/***/ ((module) => {

"use strict";
module.exports = JSON.parse('{"appID":"com.example.accessibleabilitylist","versionName":"1.0.0","versionCode":1000000,"minPlatformVersion":10,"appName":".TestAbility","deviceType":["default","tablet"],"window":{"designWidth":720,"autoDesignWidth":false},"pages":["pages/index/index"]}');

/***/ })

/******/ 	});
/************************************************************************/
/******/ 	// The module cache
/******/ 	var __webpack_module_cache__ = {};
/******/ 	
/******/ 	// The require function
/******/ 	function __webpack_require__(moduleId) {
/******/ 		var commonCachedModule = globalThis["__common_module_cache___43763341340b3c35e62568ae7538a264fd41cbe5de6015b3b12fd0c2dbdff076"] ? globalThis["__common_module_cache___43763341340b3c35e62568ae7538a264fd41cbe5de6015b3b12fd0c2dbdff076"][moduleId]: null;
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
/******/ 		function isCommonModue(moduleId) {
/******/ 		              if (globalThis["webpackChunk_43763341340b3c35e62568ae7538a264fd41cbe5de6015b3b12fd0c2dbdff076"]) {
/******/ 		                const length = globalThis["webpackChunk_43763341340b3c35e62568ae7538a264fd41cbe5de6015b3b12fd0c2dbdff076"].length;
/******/ 		                switch (length) {
/******/ 		                  case 1:
/******/ 		                    return globalThis["webpackChunk_43763341340b3c35e62568ae7538a264fd41cbe5de6015b3b12fd0c2dbdff076"][0][1][moduleId];
/******/ 		                  case 2:
/******/ 		                    return globalThis["webpackChunk_43763341340b3c35e62568ae7538a264fd41cbe5de6015b3b12fd0c2dbdff076"][0][1][moduleId] ||
/******/ 		                    globalThis["webpackChunk_43763341340b3c35e62568ae7538a264fd41cbe5de6015b3b12fd0c2dbdff076"][1][1][moduleId];
/******/ 		                }
/******/ 		              }
/******/ 		              return undefined;
/******/ 		            }
/******/ 		if (globalThis["__common_module_cache___43763341340b3c35e62568ae7538a264fd41cbe5de6015b3b12fd0c2dbdff076"] && String(moduleId).indexOf("?name=") < 0 && isCommonModue(moduleId)) {
/******/ 		  globalThis["__common_module_cache___43763341340b3c35e62568ae7538a264fd41cbe5de6015b3b12fd0c2dbdff076"][moduleId] = module;
/******/ 		}
/******/ 		__webpack_modules__[moduleId](module, module.exports, __webpack_require__);
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
/******/ 	/* webpack/runtime/hasOwnProperty shorthand */
/******/ 	(() => {
/******/ 		__webpack_require__.o = (obj, prop) => (Object.prototype.hasOwnProperty.call(obj, prop))
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
/******/ 			"./app": 0
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
/******/ 				installedChunks[chunkId] = 0;
/******/ 			}
/******/ 			return __webpack_require__.O(result);
/******/ 		}
/******/ 		
/******/ 		var chunkLoadingGlobal = globalThis["webpackChunk_43763341340b3c35e62568ae7538a264fd41cbe5de6015b3b12fd0c2dbdff076"] = globalThis["webpackChunk_43763341340b3c35e62568ae7538a264fd41cbe5de6015b3b12fd0c2dbdff076"] || [];
/******/ 		chunkLoadingGlobal.forEach(webpackJsonpCallback.bind(null, 0));
/******/ 		chunkLoadingGlobal.push = webpackJsonpCallback.bind(null, chunkLoadingGlobal.push.bind(chunkLoadingGlobal));
/******/ 	})();
/******/ 	
/************************************************************************/
/******/ 	
/******/ 	// startup
/******/ 	// Load entry module and return exports
/******/ 	// This entry module depends on other loaded chunks and execution need to be delayed
/******/ 	var __webpack_exports__ = __webpack_require__.O(undefined, ["vendors"], () => (__webpack_require__("../../../../../Application/entry/src/ohosTest/js/TestAbility/app.js?entry")))
/******/ 	__webpack_exports__ = __webpack_require__.O(__webpack_exports__);
/******/ 	_43763341340b3c35e62568ae7538a264fd41cbe5de6015b3b12fd0c2dbdff076 = __webpack_exports__;
/******/ 	
/******/ })()
;
//# sourceMappingURL=app.js.map