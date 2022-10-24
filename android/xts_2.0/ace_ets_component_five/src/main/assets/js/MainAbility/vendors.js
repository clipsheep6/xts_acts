(globalThis["webpackChunkcompilier"] = globalThis["webpackChunkcompilier"] || []).push([["vendors"],{

/***/ "./node_modules/deccjsunit/src/Constant.js":
/*!*************************************************!*\
  !*** ./node_modules/deccjsunit/src/Constant.js ***!
  \*************************************************/
/***/ (() => {

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
/**
 * define the testcase type :  test type, size , level
 */
if (typeof globalThis !== 'undefined') {
  globalThis.DEFAULT = 0B0000
  globalThis.FUNCTION = 0B1
  globalThis.PERFORMANCE = 0B1 << 1
  globalThis.POWER = 0B1 << 2
  globalThis.RELIABILITY = 0B1 << 3
  globalThis.SECURITY = 0B1 << 4
  globalThis.GLOBAL = 0B1 << 5
  globalThis.COMPATIBILITY = 0B1 << 6
  globalThis.USER = 0B1 << 7
  globalThis.STANDARD = 0B1 << 8
  globalThis.SAFETY = 0B1 << 9
  globalThis.RESILIENCE = 0B1 << 10

  globalThis.SMALLTEST = 0B1 << 16
  globalThis.MEDIUMTEST = 0B1 << 17
  globalThis.LARGETEST = 0B1 << 18

  globalThis.LEVEL0 = 0B1 << 24
  globalThis.LEVEL1 = 0B1 << 25
  globalThis.LEVEL2 = 0B1 << 26
  globalThis.LEVEL3 = 0B1 << 27
  globalThis.LEVEL4 = 0B1 << 28
}


/***/ }),

/***/ "./node_modules/deccjsunit/src/core.js":
/*!*********************************************!*\
  !*** ./node_modules/deccjsunit/src/core.js ***!
  \*********************************************/
/***/ ((__unused_webpack_module, __webpack_exports__, __webpack_require__) => {

"use strict";
__webpack_require__.r(__webpack_exports__);
/* harmony export */ __webpack_require__.d(__webpack_exports__, {
/* harmony export */   "default": () => (__WEBPACK_DEFAULT_EXPORT__)
/* harmony export */ });
/* harmony import */ var _service__WEBPACK_IMPORTED_MODULE_0__ = __webpack_require__(/*! ./service */ "./node_modules/deccjsunit/src/service.js");
/* harmony import */ var _event__WEBPACK_IMPORTED_MODULE_1__ = __webpack_require__(/*! ./event */ "./node_modules/deccjsunit/src/event.js");
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



/**
 * core service for execute testcase.
 */
class Core {
  static getInstance () {
    if (!this.instance) {
      this.instance = new Core()
    }
    return this.instance
  }

  constructor () {
    this.instance = null
    this.services = {
      suite: {},
      spec: {},
      config: {},
      expect: {},
      log: {},
      report: {}

    }
    this.events =
            {
              suite: {},
              spec: {},
              task: {}
            }
  }

  addService (name, service) {
    let serviceObj = {}
    if (!this.services[name]) {
      this.services[name] = serviceObj
    } else {
      serviceObj = this.services[name]
    }
    serviceObj[service.id] = service
  }

  getDefaultService (name) {
    return this.services[name].default
  }

  getServices (name) {
    return this.services[name]
  }

  registerEvent (serviceName, event) {
    let eventObj = {}
    if (!this.events[serviceName]) {
      this.events[serviceName] = eventObj
    } else {
      eventObj = this.events[serviceName]
    }
    eventObj[event.id] = event
  }

  unRegisterEvent (serviceName, eventID) {
    const eventObj = this.events[serviceName]
    if (eventObj) {
      delete eventObj[eventID]
    }
  }

  subscribeEvent (serviceName, serviceObj) {
    const eventObj = this.events[serviceName]
    if (eventObj) {
      for (const attr in eventObj) {
        eventObj[attr]['subscribeEvent'](serviceObj)
      }
    }
  }

  fireEvents (serviceName, eventName) {
    const eventObj = this.events[serviceName]
    if (!eventObj) {
      return
    }
    for (const attr in eventObj) {
      eventObj[attr][eventName]()
    }
  }

  addToGlobal (apis) {
    if (typeof globalThis !== 'undefined') {
      for (let api in apis) {
        globalThis[api] = apis[api]
      }
    }
    for (const api in apis) {
      this[api] = apis[api]
    }
  }

  init () {
    this.addService('suite', new _service__WEBPACK_IMPORTED_MODULE_0__.SuiteService({ id: 'default' }))
    this.addService('spec', new _service__WEBPACK_IMPORTED_MODULE_0__.SpecService({ id: 'default' }))
    this.addService('expect', new _service__WEBPACK_IMPORTED_MODULE_0__.ExpectService({ id: 'default' }))
    this.addService('report', new _service__WEBPACK_IMPORTED_MODULE_0__.ReportService({ id: 'default' }))
    this.addService('config', new _service__WEBPACK_IMPORTED_MODULE_0__.ConfigService({ id: 'default' }))
    this.registerEvent('task', new _event__WEBPACK_IMPORTED_MODULE_1__.TaskEvent({ id: 'default', coreContext: this }))
    this.registerEvent('suite', new _event__WEBPACK_IMPORTED_MODULE_1__.SuiteEvent({ id: 'default', coreContext: this }))
    this.registerEvent('spec', new _event__WEBPACK_IMPORTED_MODULE_1__.SpecEvent({ id: 'default', coreContext: this }))
    this.subscribeEvent('spec', this.getDefaultService('report'))
    this.subscribeEvent('suite', this.getDefaultService('report'))
    this.subscribeEvent('task', this.getDefaultService('report'))
    const context = this
    for (const key in this.services) {
      const serviceObj = this.services[key]
      for (const serviceID in serviceObj) {
        const service = serviceObj[serviceID]
        service.init(context)

        if (typeof service.apis !== 'function') {
          continue
        }
        const apis = service.apis()
        if (apis) {
          this.addToGlobal(apis)
        }
      }
    }
  }

  execute () {
    const suiteService = this.getDefaultService('suite')
    suiteService.execute()
  }
}

/* harmony default export */ const __WEBPACK_DEFAULT_EXPORT__ = (Core);


/***/ }),

/***/ "./node_modules/deccjsunit/src/event.js":
/*!**********************************************!*\
  !*** ./node_modules/deccjsunit/src/event.js ***!
  \**********************************************/
/***/ ((__unused_webpack_module, __webpack_exports__, __webpack_require__) => {

"use strict";
__webpack_require__.r(__webpack_exports__);
/* harmony export */ __webpack_require__.d(__webpack_exports__, {
/* harmony export */   "SpecEvent": () => (/* binding */ SpecEvent),
/* harmony export */   "TaskEvent": () => (/* binding */ TaskEvent),
/* harmony export */   "SuiteEvent": () => (/* binding */ SuiteEvent)
/* harmony export */ });
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
class SpecEvent {
  constructor (attr) {
    this.id = attr.id
    this.coreContext = attr.context
    this.eventMonitors = []
  }

  subscribeEvent (service) {
    this.eventMonitors.push(service)
  }

  specStart () {
    for (let monitor in this.eventMonitors) {
      this.eventMonitors[monitor]['specStart']()
    }
  }

  specDone () {
    for (const monitor in this.eventMonitors) {
      this.eventMonitors[monitor]['specDone']()
    }
  }
}

class SuiteEvent {
  constructor (attr) {
    this.id = attr.id
    this.suiteContext = attr.coreContext
    this.eventMonitors = []
  }

  subscribeEvent (service) {
    this.eventMonitors.push(service)
  }

  suiteStart () {
    for (let monitor in this.eventMonitors) {
      this.eventMonitors[monitor]['suiteStart']()
    }
  }

  suiteDone () {
    for (let monitor in this.eventMonitors) {
      this.eventMonitors[monitor]['suiteDone']()
    }
  }
}

class TaskEvent {
  constructor (attr) {
    this.id = attr.id
    this.coreContext = attr.coreContext
    this.eventMonitors = []
  }

  subscribeEvent (service) {
    this.eventMonitors.push(service)
  }

  taskStart () {
    for (let monitor in this.eventMonitors) {
      this.eventMonitors[monitor]['taskStart']()
    }
  }

  taskDone () {
    for (let monitor in this.eventMonitors) {
      this.eventMonitors[monitor]['taskDone']()
    }
  }
}




/***/ }),

/***/ "./node_modules/deccjsunit/src/interface.js":
/*!**************************************************!*\
  !*** ./node_modules/deccjsunit/src/interface.js ***!
  \**************************************************/
/***/ ((__unused_webpack_module, __webpack_exports__, __webpack_require__) => {

"use strict";
__webpack_require__.r(__webpack_exports__);
/* harmony export */ __webpack_require__.d(__webpack_exports__, {
/* harmony export */   "describe": () => (/* binding */ describe),
/* harmony export */   "it": () => (/* binding */ it),
/* harmony export */   "beforeAll": () => (/* binding */ beforeAll),
/* harmony export */   "beforeEach": () => (/* binding */ beforeEach),
/* harmony export */   "afterEach": () => (/* binding */ afterEach),
/* harmony export */   "afterAll": () => (/* binding */ afterAll),
/* harmony export */   "expect": () => (/* binding */ expect)
/* harmony export */ });
/* harmony import */ var _core__WEBPACK_IMPORTED_MODULE_0__ = __webpack_require__(/*! ./core */ "./node_modules/deccjsunit/src/core.js");
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


const core = _core__WEBPACK_IMPORTED_MODULE_0__["default"].getInstance()

const describe = function (desc, func) {
  if (typeof globalThis !== 'undefined') {
    return globalThis.describe(desc, func)
  }
  return core.describe(desc, func)
}
const it = function (desc, filter, func) {
  if (typeof globalThis !== 'undefined') {
    return globalThis.it(desc, filter, func)
  }
  return core.it(desc, filter, func)
}
const beforeEach = function (func) {
  if (typeof globalThis !== 'undefined') {
    return globalThis.beforeEach(func)
  }
  return core.beforeEach(func)
}
const afterEach = function (func) {
  if (typeof globalThis !== 'undefined') {
    return globalThis.afterEach(func)
  }
  return core.afterEach(func)
}
const beforeAll = function (func) {
  if (typeof globalThis !== 'undefined') {
    return globalThis.beforeAll(func)
  }
  return core.beforeAll(func)
}
const afterAll = function (func) {
  if (typeof globalThis !== 'undefined') {
    return globalThis.afterAll(func)
  }
  return core.afterAll(func)
}
const expect = function (actualValue) {
  if (typeof globalThis !== 'undefined') {
    return globalThis.expect(actualValue)
  }
  return core.expect(actualValue)
}




/***/ }),

/***/ "./node_modules/deccjsunit/src/module/assert/ExpectExtend.js":
/*!*******************************************************************!*\
  !*** ./node_modules/deccjsunit/src/module/assert/ExpectExtend.js ***!
  \*******************************************************************/
/***/ ((__unused_webpack_module, __webpack_exports__, __webpack_require__) => {

"use strict";
__webpack_require__.r(__webpack_exports__);
/* harmony export */ __webpack_require__.d(__webpack_exports__, {
/* harmony export */   "default": () => (__WEBPACK_DEFAULT_EXPORT__)
/* harmony export */ });
/* harmony import */ var _assertNull__WEBPACK_IMPORTED_MODULE_0__ = __webpack_require__(/*! ./assertNull */ "./node_modules/deccjsunit/src/module/assert/assertNull.js");
/* harmony import */ var _assertClose__WEBPACK_IMPORTED_MODULE_1__ = __webpack_require__(/*! ./assertClose */ "./node_modules/deccjsunit/src/module/assert/assertClose.js");
/* harmony import */ var _assertContain__WEBPACK_IMPORTED_MODULE_2__ = __webpack_require__(/*! ./assertContain */ "./node_modules/deccjsunit/src/module/assert/assertContain.js");
/* harmony import */ var _assertLess__WEBPACK_IMPORTED_MODULE_3__ = __webpack_require__(/*! ./assertLess */ "./node_modules/deccjsunit/src/module/assert/assertLess.js");
/* harmony import */ var _assertLarger__WEBPACK_IMPORTED_MODULE_4__ = __webpack_require__(/*! ./assertLarger */ "./node_modules/deccjsunit/src/module/assert/assertLarger.js");
/* harmony import */ var _assertFail__WEBPACK_IMPORTED_MODULE_5__ = __webpack_require__(/*! ./assertFail */ "./node_modules/deccjsunit/src/module/assert/assertFail.js");
/* harmony import */ var _assertUndefined__WEBPACK_IMPORTED_MODULE_6__ = __webpack_require__(/*! ./assertUndefined */ "./node_modules/deccjsunit/src/module/assert/assertUndefined.js");
/* harmony import */ var _assertFalse__WEBPACK_IMPORTED_MODULE_7__ = __webpack_require__(/*! ./assertFalse */ "./node_modules/deccjsunit/src/module/assert/assertFalse.js");
/* harmony import */ var _assertInstanceOf__WEBPACK_IMPORTED_MODULE_8__ = __webpack_require__(/*! ./assertInstanceOf */ "./node_modules/deccjsunit/src/module/assert/assertInstanceOf.js");
/* harmony import */ var _assertThrowError__WEBPACK_IMPORTED_MODULE_9__ = __webpack_require__(/*! ./assertThrowError */ "./node_modules/deccjsunit/src/module/assert/assertThrowError.js");
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











class ExpectExtend {
  constructor (attr) {
    this.id = attr.id
    this.matchers = {}
  }

  extendsMatchers () {
    this.matchers.assertNull = _assertNull__WEBPACK_IMPORTED_MODULE_0__["default"]
    this.matchers.assertClose = _assertClose__WEBPACK_IMPORTED_MODULE_1__["default"]
    this.matchers.assertContain = _assertContain__WEBPACK_IMPORTED_MODULE_2__["default"]
    this.matchers.assertLess = _assertLess__WEBPACK_IMPORTED_MODULE_3__["default"]
    this.matchers.assertLarger = _assertLarger__WEBPACK_IMPORTED_MODULE_4__["default"]
    this.matchers.assertFail = _assertFail__WEBPACK_IMPORTED_MODULE_5__["default"]
    this.matchers.assertUndefined = _assertUndefined__WEBPACK_IMPORTED_MODULE_6__["default"]
    this.matchers.assertFalse = _assertFalse__WEBPACK_IMPORTED_MODULE_7__["default"]
    this.matchers.assertInstanceOf = _assertInstanceOf__WEBPACK_IMPORTED_MODULE_8__["default"]
    this.matchers.assertThrowError = _assertThrowError__WEBPACK_IMPORTED_MODULE_9__["default"]
  }

  init (coreContext) {
    this.coreContext = coreContext
    this.extendsMatchers()
    const expectService = this.coreContext.getDefaultService('expect')
    expectService.addMatchers(this.matchers)
  }

  apis () {
    return {
      'expect': function (actualValue) {
        return this.coreContext.getDefaultService('expect').expect(actualValue)
      }
      // 'assertRejected':assertRejected
    }
  }
}

/* harmony default export */ const __WEBPACK_DEFAULT_EXPORT__ = (ExpectExtend);


/***/ }),

/***/ "./node_modules/deccjsunit/src/module/assert/assertClose.js":
/*!******************************************************************!*\
  !*** ./node_modules/deccjsunit/src/module/assert/assertClose.js ***!
  \******************************************************************/
/***/ ((__unused_webpack_module, __webpack_exports__, __webpack_require__) => {

"use strict";
__webpack_require__.r(__webpack_exports__);
/* harmony export */ __webpack_require__.d(__webpack_exports__, {
/* harmony export */   "default": () => (__WEBPACK_DEFAULT_EXPORT__)
/* harmony export */ });
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
function assertClose (actualValue, expected) {
  console.log('expected:' + expected[0] + ',precision:' + expected[1])
  if (actualValue === null && expected[0] === null) {
    throw new Error('actualValue and expected can not be both null!!!')
  }
  let result = false
  let diff = Math.abs(expected[0] - actualValue)
  let actualAbs = Math.abs(actualValue)
  if ((actualAbs - 0) === 0) {
    if ((diff - 0) === 0) {
      result = true
    } else {
      result = false
    }
  } else if (diff / actualAbs < expected[1]) {
    result = true
  } else {
    result = false
  }
  return {
    pass: result,
    message: '|' + actualValue + ' - ' + expected[0] + '|/' + actualValue + ' is not less than ' + expected[1]
  }
}

/* harmony default export */ const __WEBPACK_DEFAULT_EXPORT__ = (assertClose);


/***/ }),

/***/ "./node_modules/deccjsunit/src/module/assert/assertContain.js":
/*!********************************************************************!*\
  !*** ./node_modules/deccjsunit/src/module/assert/assertContain.js ***!
  \********************************************************************/
/***/ ((__unused_webpack_module, __webpack_exports__, __webpack_require__) => {

"use strict";
__webpack_require__.r(__webpack_exports__);
/* harmony export */ __webpack_require__.d(__webpack_exports__, {
/* harmony export */   "default": () => (__WEBPACK_DEFAULT_EXPORT__)
/* harmony export */ });
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

/**
 * the actualValue contain expect
 * @param actualValue
 * @param expect: the expect value
 * @example
 *         expect(array).toBeContain(anItem)
 *         expect(String).toBeContain(subString)
 * @returns {{pass: boolean, message: string}}
 */
function assertContain (actualValue, expect) {
  let result = false
  if (Object.prototype.toString.call(actualValue).indexOf('Array')) {
    for (let i in actualValue) {
      if (actualValue[i] == expect[0]) {
        result = true
      }
    }
  }
  let type = Object.prototype.toString.call(actualValue)
  if (type === '[object String]') {
    result = actualValue.indexOf(expect[0]) >= 0
  }
  return {
    pass: result,
    message: 'except false, ' + actualValue + ' do not have  ' + expect[0]
  }
}

/* harmony default export */ const __WEBPACK_DEFAULT_EXPORT__ = (assertContain);


/***/ }),

/***/ "./node_modules/deccjsunit/src/module/assert/assertFail.js":
/*!*****************************************************************!*\
  !*** ./node_modules/deccjsunit/src/module/assert/assertFail.js ***!
  \*****************************************************************/
/***/ ((__unused_webpack_module, __webpack_exports__, __webpack_require__) => {

"use strict";
__webpack_require__.r(__webpack_exports__);
/* harmony export */ __webpack_require__.d(__webpack_exports__, {
/* harmony export */   "default": () => (__WEBPACK_DEFAULT_EXPORT__)
/* harmony export */ });
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

/**
 * fail this it
 * @example
 *         expect(a).toBeFail()
 * @returns {{pass: boolean, message: string}}
 */
function assertFail () {
  return {
    pass: false,
    message: 'fail '
  }
}

/* harmony default export */ const __WEBPACK_DEFAULT_EXPORT__ = (assertFail);


/***/ }),

/***/ "./node_modules/deccjsunit/src/module/assert/assertFalse.js":
/*!******************************************************************!*\
  !*** ./node_modules/deccjsunit/src/module/assert/assertFalse.js ***!
  \******************************************************************/
/***/ ((__unused_webpack_module, __webpack_exports__, __webpack_require__) => {

"use strict";
__webpack_require__.r(__webpack_exports__);
/* harmony export */ __webpack_require__.d(__webpack_exports__, {
/* harmony export */   "default": () => (__WEBPACK_DEFAULT_EXPORT__)
/* harmony export */ });
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

/**
 * the actualValue is False
 * @param actualValue
 * @returns {{pass: boolean, message: string}}
 */
function assertFalse (actualValue) {
  return {
    pass: actualValue === false,
    message: 'except false, actualValue is ' + actualValue
  }
}

/* harmony default export */ const __WEBPACK_DEFAULT_EXPORT__ = (assertFalse);


/***/ }),

/***/ "./node_modules/deccjsunit/src/module/assert/assertInstanceOf.js":
/*!***********************************************************************!*\
  !*** ./node_modules/deccjsunit/src/module/assert/assertInstanceOf.js ***!
  \***********************************************************************/
/***/ ((__unused_webpack_module, __webpack_exports__, __webpack_require__) => {

"use strict";
__webpack_require__.r(__webpack_exports__);
/* harmony export */ __webpack_require__.d(__webpack_exports__, {
/* harmony export */   "default": () => (__WEBPACK_DEFAULT_EXPORT__)
/* harmony export */ });
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

/**
 * the actualValue to be an instance of the expected class
 * @param actualValue : actualValue
 * @param expected :
    * @returns {{pass: boolean, message: string}|{pass: boolean}}
 */
function assertInstanceOf (actualValue, expected) {
  if (Object.prototype.toString.call(actualValue) == '[object ' + expected[0] + ']') {
    return {
      pass: true
    }
  } else {
    return {
      pass: false,
      message: actualValue + ' is ' + Object.prototype.toString.call(actualValue) + 'not  ' + expected[0]
    }
  }
}

/* harmony default export */ const __WEBPACK_DEFAULT_EXPORT__ = (assertInstanceOf);


/***/ }),

/***/ "./node_modules/deccjsunit/src/module/assert/assertLarger.js":
/*!*******************************************************************!*\
  !*** ./node_modules/deccjsunit/src/module/assert/assertLarger.js ***!
  \*******************************************************************/
/***/ ((__unused_webpack_module, __webpack_exports__, __webpack_require__) => {

"use strict";
__webpack_require__.r(__webpack_exports__);
/* harmony export */ __webpack_require__.d(__webpack_exports__, {
/* harmony export */   "default": () => (__WEBPACK_DEFAULT_EXPORT__)
/* harmony export */ });
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

/**
 * the actualValue to be larger then expected
 * @param actualValue : actualValue
 * @param expected :
    * @returns {{pass: boolean, message: string}|{pass: boolean}}
 */
function assertLarger (actualValue, expected) {
  return {
    pass: actualValue > expected[0],
    message: actualValue + ' is not larger than ' + expected[0]
  }
}

/* harmony default export */ const __WEBPACK_DEFAULT_EXPORT__ = (assertLarger);


/***/ }),

/***/ "./node_modules/deccjsunit/src/module/assert/assertLess.js":
/*!*****************************************************************!*\
  !*** ./node_modules/deccjsunit/src/module/assert/assertLess.js ***!
  \*****************************************************************/
/***/ ((__unused_webpack_module, __webpack_exports__, __webpack_require__) => {

"use strict";
__webpack_require__.r(__webpack_exports__);
/* harmony export */ __webpack_require__.d(__webpack_exports__, {
/* harmony export */   "default": () => (__WEBPACK_DEFAULT_EXPORT__)
/* harmony export */ });
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
function assertLess (actualValue, expected) {
  return {
    pass: actualValue < expected[0],
    message: actualValue + ' is not less than ' + expected[0]
  }
}

/* harmony default export */ const __WEBPACK_DEFAULT_EXPORT__ = (assertLess);


/***/ }),

/***/ "./node_modules/deccjsunit/src/module/assert/assertNull.js":
/*!*****************************************************************!*\
  !*** ./node_modules/deccjsunit/src/module/assert/assertNull.js ***!
  \*****************************************************************/
/***/ ((__unused_webpack_module, __webpack_exports__, __webpack_require__) => {

"use strict";
__webpack_require__.r(__webpack_exports__);
/* harmony export */ __webpack_require__.d(__webpack_exports__, {
/* harmony export */   "default": () => (__WEBPACK_DEFAULT_EXPORT__)
/* harmony export */ });
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
function assertNull (actualValue) {
  return {
    pass: actualValue == null,
    message: 'expect null, actualValue is ' + actualValue
  }
}

/* harmony default export */ const __WEBPACK_DEFAULT_EXPORT__ = (assertNull);


/***/ }),

/***/ "./node_modules/deccjsunit/src/module/assert/assertThrowError.js":
/*!***********************************************************************!*\
  !*** ./node_modules/deccjsunit/src/module/assert/assertThrowError.js ***!
  \***********************************************************************/
/***/ ((__unused_webpack_module, __webpack_exports__, __webpack_require__) => {

"use strict";
__webpack_require__.r(__webpack_exports__);
/* harmony export */ __webpack_require__.d(__webpack_exports__, {
/* harmony export */   "default": () => (__WEBPACK_DEFAULT_EXPORT__)
/* harmony export */ });
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

/**
 * expect a function to throw Error
 * @param actualValue
 * @returns {{pass: boolean, message: string}}
 */
function assertThrowError (actualValue, expected) {
  let result = false
  let err
  if (typeof actualValue !== 'function') {
    throw new Error('actualValue is not a function')
  }
  try {
    actualValue()
    return {
      pass: result,
      message: ' An error is not thrown while it is expected!'
    }
  } catch (e) {
    err = e
  }

  if (err instanceof Error) {
    console.log(err.message)
    if (err.message == expected[0]) {
      result = true
    }
  }
  return {
    pass: result,
    message: 'expected throw failed , ' + err.message + ' is not ' + expected[0]
  }
}

/* harmony default export */ const __WEBPACK_DEFAULT_EXPORT__ = (assertThrowError);


/***/ }),

/***/ "./node_modules/deccjsunit/src/module/assert/assertUndefined.js":
/*!**********************************************************************!*\
  !*** ./node_modules/deccjsunit/src/module/assert/assertUndefined.js ***!
  \**********************************************************************/
/***/ ((__unused_webpack_module, __webpack_exports__, __webpack_require__) => {

"use strict";
__webpack_require__.r(__webpack_exports__);
/* harmony export */ __webpack_require__.d(__webpack_exports__, {
/* harmony export */   "default": () => (__WEBPACK_DEFAULT_EXPORT__)
/* harmony export */ });
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
function assertUndefined (actualValue) {
  return {
    pass: void 0 === actualValue,
    message: 'expect Undefined, actualValue is ' + actualValue
  }
}

/* harmony default export */ const __WEBPACK_DEFAULT_EXPORT__ = (assertUndefined);


/***/ }),

/***/ "./node_modules/deccjsunit/src/module/execute/DataDriver.js":
/*!******************************************************************!*\
  !*** ./node_modules/deccjsunit/src/module/execute/DataDriver.js ***!
  \******************************************************************/
/***/ ((__unused_webpack_module, __webpack_exports__, __webpack_require__) => {

"use strict";
__webpack_require__.r(__webpack_exports__);
/* harmony export */ __webpack_require__.d(__webpack_exports__, {
/* harmony export */   "default": () => (__WEBPACK_DEFAULT_EXPORT__)
/* harmony export */ });
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
const SUITES_KEY = 'suites'
const SPECS_KEY = 'items'
const DESCRIBE_KEY = 'describe'
const IT_KEY = 'it'
const PARAMS_KEY = 'params'
const STRESS_KEY = 'stress'

class ObjectUtils {
  static get (object, name, defaultValue) {
    let result = defaultValue
    for (const key in object) {
      if (key === name) {
        return object[key]
      }
    }
    return result
  }

  static has (object, key) {
    return object.hasOwnProperty(key)
  }
}

class DataDriver {
  constructor (attr) {
    this.id = 'dataDriver'
    this.data = attr.data || {}
  }

  init (coreContext) {
    this.coreContext = coreContext
    this.suiteService = this.coreContext.getDefaultService('suite')
    this.specService = this.coreContext.getDefaultService('spec')
  }

  getSpecParams () {
    let specParams = []
    let suiteDesc = this.suiteService.getCurrentRunningSuite().description
    let specDesc = this.specService.getCurrentRunningSpec().description
    let suites = ObjectUtils.get(this.data, SUITES_KEY, [])
    for (const suiteItem of suites) {
      let describeValue = ObjectUtils.get(suiteItem, DESCRIBE_KEY, '')
      if (ObjectUtils.has(suiteItem, DESCRIBE_KEY) && describeValue === suiteDesc && (typeof describeValue === 'string') && describeValue.constructor === String) {
        // get configuration parameters of all testcases
        let specs = ObjectUtils.get(suiteItem, SPECS_KEY, [])
        for (const specItem of specs) {
          if (ObjectUtils.has(specItem, IT_KEY) && ObjectUtils.get(specItem, IT_KEY) === specDesc) {
            return ObjectUtils.get(specItem, PARAMS_KEY, specParams)
          }
        }
      }
    }
    return specParams
  }

  getSuiteParams () {
    let suiteParams = {}
    let suiteDesc = this.suiteService.getCurrentRunningSuite().description
    let suites = ObjectUtils.get(this.data, SUITES_KEY, [])
    for (const suiteItem of suites) {
      let describeValue = ObjectUtils.get(suiteItem, DESCRIBE_KEY, [])
      // get configuration parameters of all testsuites
      if (ObjectUtils.has(suiteItem, DESCRIBE_KEY) && (typeof describeValue === 'object') && describeValue.constructor === Array && describeValue.includes(suiteDesc)) {
        suiteParams = Object.assign({}, suiteParams, ObjectUtils.get(suiteItem, PARAMS_KEY, suiteParams))
      }
    }
    return suiteParams
  }

  getSpecStress (specDesc) {
    let stress = 1
    let suiteDesc = this.suiteService.getCurrentRunningSuite().description
    let suites = ObjectUtils.get(this.data, SUITES_KEY, [])
    for (const suiteItem of suites) {
      let describeValue = ObjectUtils.get(suiteItem, DESCRIBE_KEY, '')
      if (ObjectUtils.has(suiteItem, DESCRIBE_KEY) && describeValue === suiteDesc && (typeof describeValue === 'string') && describeValue.constructor === String) {
        let specs = ObjectUtils.get(suiteItem, SPECS_KEY, [])
        for (const specItem of specs) {
          if (ObjectUtils.has(specItem, IT_KEY) && ObjectUtils.get(specItem, IT_KEY) === specDesc) {
            let tempStress = ObjectUtils.get(specItem, STRESS_KEY, stress)
            return (Number.isInteger(tempStress) && tempStress >= 1) ? tempStress : stress
          }
        }
      }
    }
    return stress
  }

  getSuiteStress (suiteDesc) {
    let stress = 1
    let suites = ObjectUtils.get(this.data, SUITES_KEY, [])
    for (const suiteItem of suites) {
      let describeValue = ObjectUtils.get(suiteItem, DESCRIBE_KEY, [])
      if (ObjectUtils.has(suiteItem, DESCRIBE_KEY) && describeValue === suiteDesc && (typeof describeValue === 'string') && describeValue.constructor === String) {
        let tempStress = ObjectUtils.get(suiteItem, STRESS_KEY, stress)
        return (Number.isInteger(tempStress) && tempStress >= 1) ? tempStress : stress
      }
    }
    return stress
  }
}

/* harmony default export */ const __WEBPACK_DEFAULT_EXPORT__ = (DataDriver);


/***/ }),

/***/ "./node_modules/deccjsunit/src/module/report/InstrumentLog.js":
/*!********************************************************************!*\
  !*** ./node_modules/deccjsunit/src/module/report/InstrumentLog.js ***!
  \********************************************************************/
/***/ ((__unused_webpack_module, __webpack_exports__, __webpack_require__) => {

"use strict";
__webpack_require__.r(__webpack_exports__);
/* harmony export */ __webpack_require__.d(__webpack_exports__, {
/* harmony export */   "default": () => (__WEBPACK_DEFAULT_EXPORT__)
/* harmony export */ });
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
class InstrumentLog {
    constructor(attr) {
        this.id = attr.id
        this.index = 0
        this.version = attr.version
        this.unity = attr.unity
    }

    init(coreContext) {
        this.coreContext = coreContext
        this.suiteService = this.coreContext.getDefaultService('suite')
        this.specService = this.coreContext.getDefaultService('spec')
    }

    taskStart() {
    }

    taskDone() {
        let summary = this.suiteService.getSummary()
        var action = {}
        var actionData = {}
        actionData.data = '\\' + 'INSTRUMENTATION_RESULT: stream=Tests run: ' + summary.total + ',  Failures: ' + summary.failure + ' ' + '\\' + 'INSTRUMENTATION_CODE: ' + (summary.failure > 0 ? -1 : 0) + '\\'

        action.bundleName = 'decc.testkit.runner'
        if(this.version === '1.0.3' || this.unity === 'true') {
            action.abilityName = 'decc.testkit.runner.js.MessageAbility'
            action.messageCode = 1004
        }else{
            action.abilityName = 'decc.testkit.runner.MessageAbility'
            action.messageCode = 1001
        }
        action.data = actionData
        action.abilityType = 1
        action.syncOption = 0
        console.info('call ability data: ' + JSON.stringify(action))
        FeatureAbility.callAbility(action).then(data => {
            console.info('call ability resolved: ' + data)
        }, error => {
            console.error('call ability rejected: ' + error)
        })
    }

    suiteStart () {
        var action = {}
        var actionData = {}

        let suiteService = this.coreContext.getDefaultService('suite')
        actionData.data = suiteService.getSummary().total
        actionData.data += '\\' + 'INSTRUMENTATION_STATUS: class=' + suiteService.getCurrentRunningSuite().description
        action.bundleName = 'decc.testkit.runner'
        if(this.version === '1.0.3' || this.unity === 'true') {
            action.abilityName = 'decc.testkit.runner.js.MessageAbility'
            action.messageCode = 1003
        }else{
            action.abilityName = 'decc.testkit.runner.MessageAbility'
            action.messageCode = 1001
        }
        action.data = actionData
        action.abilityType = 1
        action.syncOption = 0
        console.info('call ability data: ' + JSON.stringify(action))
        FeatureAbility.callAbility(action).then(data => {
            console.info('call ability resolved: ' + data)
        }, error => {
            console.error('call ability rejected: ' + error)
        })
  }

    suiteDone() {

    }

    specStart() {
        var action = {}
        var actionData = {}

        let suiteService = this.coreContext.getDefaultService('suite')
        actionData.data = '\\' + 'INSTRUMENTATION_STATUS: class=' + suiteService.getCurrentRunningSuite().description
        actionData.data += '\\' + 'INSTRUMENTATION_STATUS: current=' + (this.index + 1)
        actionData.data += '\\' + 'INSTRUMENTATION_STATUS: id=JS'
        actionData.data += '\\' + 'INSTRUMENTATION_STATUS: numtests=' + suiteService.getSummary().total
        actionData.data += '\\' + 'INSTRUMENTATION_STATUS: stream='
        actionData.data += '\\' + 'INSTRUMENTATION_STATUS: test=' + this.specService.currentRunningSpec.description
        actionData.data += '\\' + 'INSTRUMENTATION_STATUS_CODE: 1' + '\\'
        action.data = actionData
        this.index = this.index + 1
        action.bundleName = 'decc.testkit.runner'
        if(this.version === '1.0.3' || this.unity == 'true') {
            action.abilityName = 'decc.testkit.runner.js.MessageAbility'
        }else{
            action.abilityName = 'decc.testkit.runner.MessageAbility'
        }
        action.messageCode = 1001
        action.abilityType = 1
        action.syncOption = 0
        console.info('call ability data: ' + JSON.stringify(action))
        FeatureAbility.callAbility(action).then(data => {
            console.info('call ability resolved: ' + data)
        }, error => {
            console.error('call ability rejected: ' + error)
        })
    }

    specDone() {
        var action = {}
        var actionData = {}
        actionData.data = '\\' + 'INSTRUMENTATION_STATUS: class=' + this.suiteService.getCurrentRunningSuite().description
        actionData.data += '\\' + 'INSTRUMENTATION_STATUS: current=' + this.index
        actionData.data += '\\' + 'INSTRUMENTATION_STATUS: id=JS'
        actionData.data += '\\' + 'INSTRUMENTATION_STATUS: numtests=' + this.suiteService.getSummary().total
        let emsg = ''
        if (this.specService.currentRunningSpec.error) {
            actionData.data += '\\' + 'INSTRUMENTATION_STATUS: stack=' + this.specService.currentRunningSpec.error
            actionData.data += '\\' + 'INSTRUMENTATION_STATUS: stream=' + '\\' + 'Error in ' + this.specService.currentRunningSpec.description + '\\' + this.specService.currentRunningSpec.error
            actionData.data += '\\' + 'INSTRUMENTATION_STATUS: test=' + this.specService.currentRunningSpec.description
            actionData.data += '\\' + 'INSTRUMENTATION_STATUS_CODE: -1' + '\\'
        } else if (this.specService.currentRunningSpec.result) {
            if (this.specService.currentRunningSpec.result.failExpects.length > 0) {
                this.specService.currentRunningSpec.result.failExpects.forEach(failExpect => {
                    emsg = failExpect.message || ('expect ' + failExpect.actualValue + ' ' + failExpect.checkFunc + ' ' + (failExpect.expectValue || ''))
                })
                actionData.data += '\\' + 'INSTRUMENTATION_STATUS: stack=' + emsg
                actionData.data += '\\' + 'INSTRUMENTATION_STATUS: stream=' + '\\' + 'Error in ' + this.specService.currentRunningSpec.description + '\\' + emsg
                actionData.data += '\\' + 'INSTRUMENTATION_STATUS: test=' + this.specService.currentRunningSpec.description
                actionData.data += '\\' + 'INSTRUMENTATION_STATUS_CODE: -2' + '\\'
            } else {
                actionData.data += '\\' + 'INSTRUMENTATION_STATUS: stream='
                actionData.data += '\\' + 'INSTRUMENTATION_STATUS: test=' + this.specService.currentRunningSpec.description
                actionData.data += '\\' + 'INSTRUMENTATION_STATUS_CODE: 0' + '\\'
            }
        } else {
            actionData.data += '\\'
        }
        action.data = actionData
        action.bundleName = 'decc.testkit.runner'
        if(this.version === '1.0.3' || this.unity === 'true') {
            action.abilityName = 'decc.testkit.runner.js.MessageAbility'
            action.messageCode = 1002
        }else{
            action.abilityName = 'decc.testkit.runner.MessageAbility'
            action.messageCode = 1001
        }
        action.abilityType = 1
        action.syncOption = 0
        FeatureAbility.callAbility(action).then(data => {
            console.info('call ability resolved: ' + data)
        }, error => {
            console.error('call ability rejected: ' + error)
        })
    }
}

/* harmony default export */ const __WEBPACK_DEFAULT_EXPORT__ = (InstrumentLog);


/***/ }),

/***/ "./node_modules/deccjsunit/src/module/report/ReportExtend.js":
/*!*******************************************************************!*\
  !*** ./node_modules/deccjsunit/src/module/report/ReportExtend.js ***!
  \*******************************************************************/
/***/ ((__unused_webpack_module, __webpack_exports__, __webpack_require__) => {

"use strict";
__webpack_require__.r(__webpack_exports__);
/* harmony export */ __webpack_require__.d(__webpack_exports__, {
/* harmony export */   "default": () => (__WEBPACK_DEFAULT_EXPORT__)
/* harmony export */ });
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
class ReportExtend {
  constructor (fileModule) {
    this.id = 'extend'
    this.fileModule = fileModule
  }

  init (coreContext) {
    this.coreContext = coreContext
    this.suiteService = this.coreContext.getDefaultService('suite')
  }

  taskStart () {

  }

  taskDone () {
    const report = {
      tag: 'testsuites',
      name: 'summary_report',
      timestamp: new Date().toDateString(),
      time: '1',
      errors: 0,
      failures: 0,
      tests: 0,
      children: []
    }
    const rootSuite = this.suiteService.rootSuite
    if (rootSuite && rootSuite.childSuites) {
      for (let testsuite of rootSuite.childSuites) {
        let suiteReport = {
          tag: 'testsuite',
          name: testsuite['description'],
          errors: 0,
          tests: 0,
          failures: 0,
          time: '0.1',
          children: []
        }
        let specs = testsuite['specs']
        for (let testcase of specs) {
          report.tests++
          suiteReport.tests++
          let caseReport = {
            tag: 'testcase',
            name: testcase['description'],
            status: 'run',
            time: '0.0',
            classname: testsuite['description']
          }
          if (testcase.error) {
            caseReport['result'] = false
            caseReport['children'] = [{
              tag: 'error',
              type: '',
              message: testcase.error.message
            }]
            report.errors++
            suiteReport.errors++
          } else if (testcase.result.failExpects.length > 0) {
            caseReport['result'] = false
            let message = ''
            testcase.result.failExpects.forEach(failExpect => {
              message += failExpect.message || ('expect ' + failExpect.actualValue + ' ' + failExpect.checkFunc + ' ' + (failExpect.expectValue || '')) + ';'
            })
            caseReport['children'] = [{
              tag: 'failure',
              type: '',
              message: message
            }]
            report.failures++
            suiteReport.failures++
          } else {
            caseReport['result'] = true
          }
          suiteReport.children.push(caseReport)
        }
        report.children.push(suiteReport)
      }
    }

    let reportXml = '<?xml version="1.0" encoding="UTF-8"?>\n' + json2xml(report)
    this.fileModule.writeText({
      uri: 'internal://app/report.xml',
      text: reportXml,
      success: function () {
        console.info('call success callback success')
      },
      fail: function (data, code) {
        console.info('call fail callback success:')
      },
      complete: function () {
        console.info('call complete callback success')
      }
    })
  }
}

function json2xml (json) {
  let tagName
  let hasChildren = false
  let childrenStr = ''
  let attrStr = ''
  for (let key in json) {
    if (key === 'tag') {
      tagName = json[key]
    } else if (key === 'children') {
      if (json[key].length > 0) {
        hasChildren = true
        for (let child of json[key]) {
          childrenStr += json2xml(child)
        }
      }
    } else {
      attrStr += ` ${key}="${json[key]}"`
    }
  }
  let xml = `<${tagName}${attrStr}`
  xml += hasChildren ? `>${childrenStr}</${tagName}>` : '/>'
  return xml
}

/* harmony default export */ const __WEBPACK_DEFAULT_EXPORT__ = (ReportExtend);


/***/ }),

/***/ "./node_modules/deccjsunit/src/service.js":
/*!************************************************!*\
  !*** ./node_modules/deccjsunit/src/service.js ***!
  \************************************************/
/***/ ((__unused_webpack_module, __webpack_exports__, __webpack_require__) => {

"use strict";
__webpack_require__.r(__webpack_exports__);
/* harmony export */ __webpack_require__.d(__webpack_exports__, {
/* harmony export */   "SuiteService": () => (/* binding */ SuiteService),
/* harmony export */   "SpecService": () => (/* binding */ SpecService),
/* harmony export */   "ExpectService": () => (/* binding */ ExpectService),
/* harmony export */   "ReportService": () => (/* binding */ ReportService),
/* harmony export */   "ConfigService": () => (/* binding */ ConfigService)
/* harmony export */ });
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
function processFunc (coreContext, func) {
  let argNames = ((func || '').toString()
    .replace(/((\/\/.*$)|(\/\*[\s\S]*?\*\/))/mg, '')
    .match(/^(function)?\s*[^\(]*\(\s*([^\)]*)\)/m) || ['', '', ''])[2]
    .split(',') // split parameters
    .map(item => item.replace(/^\s*(_?)(.+?)\1\s*$/, name => name.split('=')[0].trim()))
    .filter(String)
  let funcLen = func.length
  let processedFunc
  switch (funcLen) {
    case 0: {
      if (Object.prototype.toString.call(func) === '[object AsyncFunction]') {
        coreContext.getDefaultService('config').setSupportAsync(true)
      }
      processedFunc = func
      break
    }
    case 1: {
      if (argNames[0] === 'data') {
        processedFunc = function (paramItem) {
          func(paramItem)
        }
      } else {
        coreContext.getDefaultService('config').setSupportAsync(true)
        processedFunc = function () {
          return new Promise(resolve => {
            function done () {
              resolve()
            }

            func(done)
          })
        }
      }
      break
    }
    default: {
      coreContext.getDefaultService('config').setSupportAsync(true)
      processedFunc = function (paramItem) {
        return new Promise(resolve => {
          function done () {
            resolve()
          }

          func(done, paramItem)
        })
      }
      break
    }
  }
  return processedFunc
}

function secureRandomNumber () {
  return crypto.randomBytes(8).readUInt32LE() / 0xffffffff
}

class SuiteService {
  constructor (attr) {
    this.id = attr.id
    this.rootSuite = new SuiteService.Suite({})
    this.currentRunningSuite = this.rootSuite
  }

  describe (desc, func) {
    if (this.coreContext.getDefaultService('config').filterSuite(desc)) {
      return
    }
    const suite = new SuiteService.Suite({ description: desc })
    if (typeof this.coreContext.getServices('dataDriver') !== 'undefined') {
      let suiteStress = this.coreContext.getServices('dataDriver').dataDriver.getSuiteStress(desc)
      for (let i = 1; i < suiteStress; i++) {
        this.currentRunningSuite.childSuites.push(suite)
      }
    }
    const currentSuiteCache = this.currentRunningSuite
    this.currentRunningSuite.childSuites.push(suite)
    this.currentRunningSuite = suite
    func.call()
    this.currentRunningSuite = currentSuiteCache
  }

  beforeAll (func) {
    this.currentRunningSuite.beforeAll.push(processFunc(this.coreContext, func))
  }

  beforeEach (func) {
    this.currentRunningSuite.beforeEach.push(processFunc(this.coreContext, func))
  }

  afterAll (func) {
    this.currentRunningSuite.afterAll.push(processFunc(this.coreContext, func))
  }

  afterEach (func) {
    this.currentRunningSuite.afterEach.push(processFunc(this.coreContext, func))
  }

  getCurrentRunningSuite () {
    return this.currentRunningSuite
  }

  setCurrentRunningSuite (suite) {
    this.currentRunningSuite = suite
  }

  getSummary () {
    let total = 0
    let error = 0
    let failure = 0
    let rootSuite = this.coreContext.getDefaultService('suite').rootSuite
    if (rootSuite && rootSuite.childSuites) {
      for (let i = 0; i < rootSuite.childSuites.length; i++) {
        let testsuite = rootSuite.childSuites[i]
        let specs = testsuite['specs']
        for (let j = 0; j < specs.length; j++) {
          total++
          let testcase = specs[j]
          if (testcase.error) {
            error++
          } else if (testcase.result.failExpects.length > 0) {
            failure++
          }
        }
      }
    }
    return { total: total, failure: failure, error: error }
  }

  init (coreContext) {
    this.coreContext = coreContext
  }

  execute () {
    this.coreContext.fireEvents('task', 'taskStart')
    if (this.coreContext.getDefaultService('config').isSupportAsync()) {
      let asyncExecute = async () => {
        await this.rootSuite.asyncRun(this.coreContext)
      }
      asyncExecute().then(() => {
        this.coreContext.fireEvents('task', 'taskDone')
      })
    } else {
      this.rootSuite.run(this.coreContext)
      this.coreContext.fireEvents('task', 'taskDone')
    }
  }

  apis () {
    const _this = this
    return {
      describe: function (desc, func) {
        return _this.describe(desc, func)
      },
      beforeAll: function (func) {
        return _this.beforeAll(func)
      },
      beforeEach: function (func) {
        return _this.beforeEach(func)
      },
      afterAll: function (func) {
        return _this.afterAll(func)
      },
      afterEach: function (func) {
        return _this.afterEach(func)
      }
    }
  }
}

SuiteService.Suite = class {
  constructor (attrs) {
    this.description = attrs.description || ''
    this.childSuites = []
    this.specs = []
    this.beforeAll = []
    this.afterAll = []
    this.beforeEach = []
    this.afterEach = []
    this.duration = 0
  }

  pushSpec (spec) {
    this.specs.push(spec)
  }

  removeSpec (desc) {
    this.specs = this.specs.filter((item, index) => {
      return item.description !== desc
    })
  }

  getSpecsNum () {
    return this.specs.length
  }

  run (coreContext) {
    const suiteService = coreContext.getDefaultService('suite')
    suiteService.setCurrentRunningSuite(this)
    if (this.description !== '') {
      coreContext.fireEvents('suite', 'suiteStart', this)
    }
    this.runHookFunc('beforeAll')
    if (this.specs.length > 0) {
      const configService = coreContext.getDefaultService('config')
      if (configService.isRandom()) {
        this.specs.sort(function () {
          return secureRandomNumber() > 0.5 ? -1 : 1
        })
      }
      this.specs.forEach(spec => {
        this.runHookFunc('beforeEach')
        spec.run(coreContext)
        this.runHookFunc('afterEach')
      })
    }

    if (this.childSuites.length > 0) {
      this.childSuites.forEach(childSuite => {
        childSuite.run(coreContext)
        suiteService.setCurrentRunningSuite(childSuite)
      })
    }

    this.runHookFunc('afterAll')
    if (this.description !== '') {
      coreContext.fireEvents('suite', 'suiteDone')
    }
  }

  asyncRun (coreContext) {
    const suiteService = coreContext.getDefaultService('suite')
    suiteService.setCurrentRunningSuite(this)
    return new Promise(async resolve => {
      if (this.description !== '') {
        coreContext.fireEvents('suite', 'suiteStart', this)
      }
      await this.runAsyncHookFunc('beforeAll')
      if (this.specs.length > 0) {
        const configService = coreContext.getDefaultService('config')
        if (configService.isRandom()) {
          this.specs.sort(function () {
            return secureRandomNumber() > 0.5 ? -1 : 1
          })
        }
        for (let i = 0; i < this.specs.length; i++) {
          await this.runAsyncHookFunc('beforeEach')
          await this.specs[i].asyncRun(coreContext)
          await this.runAsyncHookFunc('afterEach')
        }
      }

      if (this.childSuites.length > 0) {
        for (let i = 0; i < this.childSuites.length; i++) {
          suiteService.setCurrentRunningSuite(this.childSuites[i])
          await this.childSuites[i].asyncRun(coreContext)
        }
      }

      await this.runAsyncHookFunc('afterAll')
      if (this.description !== '') {
        coreContext.fireEvents('suite', 'suiteDone')
      }
      resolve()
    })
  }

  runHookFunc (hookName) {
    if (this[hookName] && this[hookName].length > 0) {
      this[hookName].forEach(func => {
        try {
          func()
        } catch (e) {
          console.error(e)
        }
      })
    }
  }

  runAsyncHookFunc (hookName) {
    if (this[hookName] && this[hookName].length > 0) {
      return new Promise(async resolve => {
        for (let i = 0; i < this[hookName].length; i++) {
          try {
            await this[hookName][i]()
          } catch (e) {
            console.error(e)
          }
        }
        resolve()
      })
    }
  }
}

class SpecService {
  constructor (attr) {
    this.id = attr.id
  }

  init (coreContext) {
    this.coreContext = coreContext
  }

  setCurrentRunningSpec (spec) {
    this.currentRunningSpec = spec
  }

  getCurrentRunningSpec () {
    return this.currentRunningSpec
  }

  it (desc, filter, func) {
    const configService = this.coreContext.getDefaultService('config')
    const currentSuiteName = this.coreContext.getDefaultService('suite').getCurrentRunningSuite().description
    if(configService.filterDesc(currentSuiteName,desc, filter, this.coreContext)) {
      console.info('filter it :' + desc)
      return
    }else {
      let processedFunc = processFunc(this.coreContext, func)
      const spec = new SpecService.Spec({description: desc, fi: filter, fn: processedFunc})
      const suiteService = this.coreContext.getDefaultService('suite')
      if (typeof this.coreContext.getServices('dataDriver') !== 'undefined') {
        let specStress = this.coreContext.getServices('dataDriver').dataDriver.getSpecStress(desc)
        for (let i = 1; i < specStress; i++) {
          suiteService.getCurrentRunningSuite().pushSpec(spec)
        }
      }
      suiteService.getCurrentRunningSuite().pushSpec(spec)
    }
  }

  apis () {
    const _this = this
    return {
      it: function (desc, filter, func) {
        return _this.it(desc, filter, func)
      }
    }
  }
}

SpecService.Spec = class {
  constructor (attrs) {
    this.description = attrs.description || ''
    this.fi = attrs.fi
    this.fn = attrs.fn || function () {
    }
    this.result = {
      failExpects: [],
      passExpects: []
    }
    this.error = undefined
    this.duration = 0
  }

  run (coreContext) {
    const specService = coreContext.getDefaultService('spec')
    specService.setCurrentRunningSpec(this)
    coreContext.fireEvents('spec', 'specStart', this)
    let startTime = new Date().getTime()
    try {
      let dataDriver = coreContext.getServices('dataDriver')
      if (typeof dataDriver === 'undefined') {
        this.fn()
      } else {
        let suiteParams = dataDriver.dataDriver.getSuiteParams()
        let specParams = dataDriver.dataDriver.getSpecParams()
        console.info('[suite params] ' + JSON.stringify(suiteParams))
        console.info('[spec params] ' + JSON.stringify(specParams))
        if (this.fn.length === 0) {
          this.fn()
        } else if (specParams.length === 0) {
          this.fn(suiteParams)
        } else {
          specParams.forEach(paramItem => this.fn(Object.assign({}, paramItem, suiteParams)))
        }
      }
    } catch (e) {
      this.error = e
    }
    let endTime = new Date().getTime()
    this.duration = ((endTime - startTime) / 1000).toFixed(3)
    coreContext.fireEvents('spec', 'specDone', this)
  }

  asyncRun (coreContext) {
    const specService = coreContext.getDefaultService('spec')
    specService.setCurrentRunningSpec(this)
    const config = coreContext.getDefaultService('config')
    const timeout = + (config.timeout == undefined ? 5000 : config.timeout)
    return new Promise(async resolve => {
      coreContext.fireEvents('spec', 'specStart', this)
      let startTime = new Date().getTime()
      try {
        let dataDriver = coreContext.getServices('dataDriver')
        if (typeof dataDriver === 'undefined') {
          const p = Promise.race([this.fn(),new Promise(function (resolve, reject) {setTimeout(() => reject(new Error('execute timeout 5s')), timeout)})])
          await p.then(console.info('async fn finish')).catch(this.result.pass = false)
        } else {
          let suiteParams = dataDriver.dataDriver.getSuiteParams()
          let specParams = dataDriver.dataDriver.getSpecParams()
          console.info('[suite params] ' + JSON.stringify(suiteParams))
          console.info('[spec params] ' + JSON.stringify(specParams))
          if (this.fn.length === 0) {
            const p = Promise.race([this.fn(),new Promise(function (resolve, reject) {setTimeout(() => reject(new Error('execute timeout 5s')), timeout)})])
            await p.then(console.info('async fn finish')).catch(this.result.pass = false)
          } else if (specParams.length === 0) {
            const p = Promise.race([this.fn(suiteParams),new Promise(function (resolve, reject) {setTimeout(() => reject(new Error('execute timeout 5s')), timeout)})])
            await p.then(console.info('async fn finish')).catch(this.result.pass = false)
          } else {
            for(const paramItem of specParams) {
              const p = Promise.race([this.fn(Object.assign({}, paramItem, suiteParams)),new Promise(function (resolve, reject) {setTimeout(() => reject(new Error('execute timeout 5s')), timeout)})])
              await p.then(console.info('async fn finish')).catch(this.result.pass = false)
            }
          }
        }
      } catch (e) {
        this.error = e
      }
      let endTime = new Date().getTime()
      this.duration = ((endTime - startTime) / 1000).toFixed(3)
      coreContext.fireEvents('spec', 'specDone', this)
      resolve()
    })
  }

  filterCheck (coreContext) {
    const specService = coreContext.getDefaultService('spec')
    specService.setCurrentRunningSpec(this)
    return true
  }

  addExpectationResult (expectResult) {
    if (expectResult.pass) {
      this.result.passExpects.push(expectResult)
    } else {
      this.result.failExpects.push(expectResult)
    }
  }
}

class ExpectService {
  constructor (attr) {
    this.id = attr.id
    this.matchers = {}
  }

  expect (actualValue) {
    return this.wrapMatchers(actualValue)
  }

  init (coreContext) {
    this.coreContext = coreContext
    this.addMatchers(this.basicMatchers())
  }

  addMatchers (matchers) {
    for (const matcherName in matchers) {
      if(matchers.hasOwnProperty(matcherName)) {
        this.matchers[matcherName] = matchers[matcherName]
      }
    }
  }

  basicMatchers () {
    return {
      assertTrue: function (actualValue) {
        return {
          pass: actualValue === true
        }
      },
      assertEqual: function (actualValue, args) {
        return {
          pass: actualValue === args[0],
          expectValue: args[0]
        }
      },
      assertThrow: function (actual, args) {
        const result = {
          pass: false
        }
        if (typeof actual !== 'function') {
          result.message = 'toThrow\'s Actual should be a Function'
        } else {
          let hasThrow = false
          let throwError
          try {
            actual()
          } catch (e) {
            hasThrow = true
            throwError = e
          }
          if (!hasThrow) {
            result.message = 'function did not throw an exception'
          } else {
            if (throwError && throwError.message === args[0]) {
              result.pass = true
            } else {
              result.message = `expect to throw ${args[0]} , actual throw ${throwError.message}`
            }
          }
        }
        return result
      }
    }
  }

  wrapMatchers (actualValue) {
    const _this = this
    const wrappedMatchers = {}
    const specService = _this.coreContext.getDefaultService('spec')
    const currentRunningSpec = specService.getCurrentRunningSpec()
    for (const matcherName in this.matchers) {
      if(this.matchers.hasOwnProperty(matcherName)){
      wrappedMatchers[matcherName] = function () {
        const result = _this.matchers[matcherName](actualValue, arguments)
        result.actualValue = actualValue
        result.checkFunc = matcherName
        currentRunningSpec.addExpectationResult(result)
      }
    }
    }
    return wrappedMatchers
  }

  apis () {
    const _this = this
    return {
      expect: function (actualValue) {
        return _this.expect(actualValue)
      }
    }
  }
}

class ReportService {
  constructor (attr) {
    this.id = attr.id
  }

  init (coreContext) {
    this.coreContext = coreContext
    this.specService = this.coreContext.getDefaultService('spec')
    this.suiteService = this.coreContext.getDefaultService('suite')
    this.duration = 0
  }

  taskStart () {
    this.taskStartTime = new Date().getTime()
    this.sleep(200)
    console.info('[start] start run suites')
  }

  suiteStart () {
    this.sleep(200)
    console.info('[suite start]' + this.suiteService.getCurrentRunningSuite().description)
  }

  specStart () {
    this.sleep(200)
    console.info('start running case \'' + this.specService.currentRunningSpec.description + '\'')
    this.index = this.index + 1
  }

  specDone () {
    this.sleep(200)

    let msg = ''
    let spec = this.specService.currentRunningSpec
    if (spec.error) {
      this.formatPrint('fail', spec.description)
      this.formatPrint('failDetail', spec.error)
    } else if (spec.result) {
      if (spec.result.failExpects.length > 0) {
        this.formatPrint('fail', spec.description)
        spec.result.failExpects.forEach(failExpect => {
          msg = failExpect.message || ('expect ' + failExpect.actualValue + ' ' + failExpect.checkFunc + ' ' + (failExpect.expectValue || ''))
          this.formatPrint('failDetail', msg)
        })
      } else {
        this.formatPrint('pass', spec.description + ' ; consuming ' + spec.duration + 'S')
      }
    }
    this.formatPrint(this.specService.currentRunningSpec.error, msg)
  }

  suiteDone () {
    this.sleep(200)
    console.info('[suite end]')
  }

  taskDone () {
    this.sleep(200)
    this.taskDoneTime = new Date().getTime()
    this.duration = ((this.taskDoneTime - this.taskStartTime) / 1000).toFixed(2)
    let summary = this.suiteService.getSummary()
    console.info('total cases:' + summary.total + ';failure ' + summary.failure + ',' + 'error ' + summary.error + ',pass ' + (summary.total - summary.error - summary.failure) + '; consuming ' + this.duration + 'S')
    console.info('[end] run suites end')
  }

  formatPrint (type, msg) {
    switch (type) {
      case 'pass':
        console.info('[pass]' + msg)
        break
      case 'fail':
        console.info('[fail] ' + msg)
        break
      case 'failDetail':
        console.info('[failDetail]' + msg)
        break
    }
  }

  sleep (numberMillis) {
    var now = new Date()
    var exitTime = now.getTime() + numberMillis
    while (true) {
      now = new Date()
      if (now.getTime() > exitTime) {
        return
      }
    }
  }
}

class ConfigService {
  constructor (attr) {
    this.id = attr.id
    this.supportAsync = false
    this.random = false
  }

  init (coreContext) {
    this.coreContext = coreContext
  }

  setConfig (params) {
    try {
      this.class = params.class
      this.notClass = params.notClass
      this.flag = params.flag || { flag: false }
      this.suite = params.suite||null
      this.itName = params.itName||null
      this.filter = params.filter||null
      this.testType = params.testType
      this.level = params.level
      this.size = params.size
      this.timeout = params.timeout
      this.filterParam = {
        testType : {
          'function' : 1,
          'performance' : 1 << 1,
          'reliability' :  1 << 3,
          'security' : 1 << 4
        },
        level : {
          '0' : 1 << 24,
          '1' : 1 << 25,
          '2' : 1 << 26,
          '3' : 1 << 27,
          '4' : 1 << 28,
        },
        size : {
          'small' : 1 << 16,
          'medium' : 1 << 17,
          'large' : 1 << 18,
        }
      }
      this.parseParams()
    } catch (err) {
      this.filter = 0
      this.flag = false
      this.suite = null
      this.itName = null
      this.testType = null
      this.level = null
      this.size = null
      this.class = null
      this.notClass = null
      this.timeout = null
    }
  }

  parseParams(){
    let classStr = this.class
    if(classStr != null){
      if(classStr.indexOf(',') === -1){
         this.suite = classStr.indexOf('#') !== -1 ? classStr.substring(0,classStr.indexOf('#')) : classStr
         this.itName = classStr.indexOf('#') !== -1 ? classStr.substring(classStr.indexOf('#')+1,classStr.length) : null
      } else {
        let classArr  = classStr.split(',')
        let suites = ''
        let itNames = ''
        classArr.forEach((elem, index) => {
          suites += elem.indexOf('#') !== -1 ? elem.substring(0,elem.indexOf('#'))+',' : elem+','
          itNames += elem.indexOf('#') !== -1 ? elem.substring(elem.indexOf('#')+1,elem.length)+',' : ''
        })
        this.suite = suites.endsWith(',') ? suites.substring(0, suites.length - 1) : suites
        this.itName = itNames.endsWith(',') ? itNames.substring(0, itNames.length - 1) : itNames
      }
    }
    if(this.filter != null){
      return
    }
    let testTypeFilter = 0
    let sizeFilter = 0
    let levelFilter = 0
    if(this.testType != null){
      if(this.testType.indexOf(',') !== -1){
        let testTypeArr = this.testType.split(',')
        for(let testType in testTypeArr){
          testTypeFilter += this.filterParam.testType[testType]
        }
      }else {
        testTypeFilter = this.filterParam.testType[this.testType]
      }
    }
    if(this.level != null){
      if(this.level.indexOf(',') !== -1){
        let typeArr = this.level.split(',')
        for(let type in typeArr){
          if(typeArr.hasOwnProperty(type)) {
            levelFilter += this.filterParam.level[type]
          }
        }
      }else {
        levelFilter = this.filterParam.level[this.level]
      }
    }
    if(this.size != null){
      if(this.size.indexOf(',') !== -1){
        let typeArr = this.size.split(',')
        for(let type in typeArr){
          if(typeArr.hasOwnProperty(type)) {
            sizeFilter += this.filterParam.size[type]
          }
        }
      }else {
        sizeFilter = this.filterParam.size[this.size]
      }
    }
    this.filter = testTypeFilter | sizeFilter | levelFilter
    console.info('filter params:'+this.filter)
  }

  isCurrentSuite(description) {
    if (this.suite !== undefined && this.suite !== '' && this.suite !== null) {
      let suiteArray = this.suite.split(',')
      return suiteArray.indexOf(description) !== -1;
    }
    return false
  }

  filterSuite (description) {
    if (this.suite !== undefined && this.suite !== '' && this.suite !== null) {
      let suiteArray = this.suite.split(',')
        if (suiteArray.indexOf(description) === -1) {
          console.info('run suite:' + suiteArray + ',filter ' + description)
          return true
        }
      return false
    } else {
      return false
    }
  }

  filterDesc (currentSuiteName,desc, fi, coreContext) {
    if (this.itName !== undefined && this.itName !== ''&&this.itName !== null) {
      let itNameArray = this.itName.split(',')
      let length = itNameArray.length
      let itArray = new Array(length)
      const configService = this.coreContext.getDefaultService('config')
      if (!(configService.isCurrentSuite(currentSuiteName)&&itNameArray.indexOf(desc) !== -1)) {
        return true
      }
    }
    if (typeof(this.filter) === 'undefined' || this.filter === 0 || fi === 0) {
      return false
    }
    let testTypeFi = fi & 0B1111111111111111
    let testType = this.filter & 0B1111111111111111
    if (testType !== testTypeFi && testTypeFi !== 0 && testType !== 0) {
      return true
    }
    let sizeFi = fi & 0B11111111 << 16
    let size = this.filter & 0B11111111 << 16
    if (size !== 0 && sizeFi !== 0 && size !== sizeFi) {
      return true
    }
    let levelFi = fi & 0B1111111 << 24
    let level = this.filter & 0B1111111 << 24
    if (level !== 0 && levelFi !== 0 && level !== levelFi) {
      return true
    }
  }

  isRandom () {
    return this.random || false
  }

  setSupportAsync (value) {
    this.supportAsync = value
  }

  isSupportAsync () {
    return this.supportAsync
  }

  execute () {
  }
}




/***/ }),

/***/ "./node_modules/deccjsunit/index.ets":
/*!*******************************************!*\
  !*** ./node_modules/deccjsunit/index.ets ***!
  \*******************************************/
/***/ (function(__unused_webpack_module, exports, __webpack_require__) {

"use strict";

var __importDefault = (this && this.__importDefault) || function (mod) {
    return (mod && mod.__esModule) ? mod : { "default": mod };
};
Object.defineProperty(exports, "__esModule", ({ value: true }));
exports.expect = exports.it = exports.afterAll = exports.afterEach = exports.beforeEach = exports.beforeAll = exports.describe = exports.ReportExtend = exports.InstrumentLog = exports.ExpectExtend = exports.DataDriver = exports.Constant = exports.Core = void 0;
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
const core_1 = __importDefault(__webpack_require__(/*! ./src/core */ "./node_modules/deccjsunit/src/core.js"));
exports.Core = core_1.default;
const Constant_1 = __importDefault(__webpack_require__(/*! ./src/Constant */ "./node_modules/deccjsunit/src/Constant.js"));
exports.Constant = Constant_1.default;
const DataDriver_1 = __importDefault(__webpack_require__(/*! ./src/module/execute/DataDriver */ "./node_modules/deccjsunit/src/module/execute/DataDriver.js"));
exports.DataDriver = DataDriver_1.default;
const ExpectExtend_1 = __importDefault(__webpack_require__(/*! ./src/module/assert/ExpectExtend */ "./node_modules/deccjsunit/src/module/assert/ExpectExtend.js"));
exports.ExpectExtend = ExpectExtend_1.default;
const InstrumentLog_1 = __importDefault(__webpack_require__(/*! ./src/module/report/InstrumentLog */ "./node_modules/deccjsunit/src/module/report/InstrumentLog.js"));
exports.InstrumentLog = InstrumentLog_1.default;
const ReportExtend_1 = __importDefault(__webpack_require__(/*! ./src/module/report/ReportExtend */ "./node_modules/deccjsunit/src/module/report/ReportExtend.js"));
exports.ReportExtend = ReportExtend_1.default;
const interface_1 = __webpack_require__(/*! ./src/interface */ "./node_modules/deccjsunit/src/interface.js");
Object.defineProperty(exports, "describe", ({ enumerable: true, get: function () { return interface_1.describe; } }));
Object.defineProperty(exports, "beforeAll", ({ enumerable: true, get: function () { return interface_1.beforeAll; } }));
Object.defineProperty(exports, "beforeEach", ({ enumerable: true, get: function () { return interface_1.beforeEach; } }));
Object.defineProperty(exports, "afterEach", ({ enumerable: true, get: function () { return interface_1.afterEach; } }));
Object.defineProperty(exports, "afterAll", ({ enumerable: true, get: function () { return interface_1.afterAll; } }));
Object.defineProperty(exports, "it", ({ enumerable: true, get: function () { return interface_1.it; } }));
Object.defineProperty(exports, "expect", ({ enumerable: true, get: function () { return interface_1.expect; } }));


/***/ })

}]);
globalThis["__common_module_cache__"] = globalThis["__common_module_cache__"] || {};
globalThis["webpackChunkcompilier"].forEach((item)=> {
  Object.keys(item[1]).forEach((element) => {
    globalThis["__common_module_cache__"][element] = null;
  })
});
//# sourceMappingURL=vendors.js.map