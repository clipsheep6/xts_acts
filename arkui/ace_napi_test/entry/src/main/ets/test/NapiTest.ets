/*
* Copyright (c) 2024 SwanLink (Jiangsu) Technology Development Co., LTD.
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

import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from "hypium/index"
import napitest from 'libnapitest.so'
import worker from '@ohos.worker';

const NAPI_INVALID_ARG = 6;

async function sleep(time: number) {
  return new Promise((resolve: (value: string) => void) => {
    setTimeout(() => {
      resolve("ok")
    }, time)
  }).then(() => {
    console.info(`sleep ${time} over...`)
  })
}

function promiseCase() {
  let p = new Promise(function (resolve, reject) {
    setTimeout(function () {
      resolve(0)
    }, 100)
  }).then(undefined, (error) => {
  })
  return p
}

const deepStrictEqualOfArray = (obj1, obj2) => {
  expect(obj1).assertInstanceOf('Array');
  expect(obj2).assertInstanceOf('Array');
  expect(obj1.length).assertEqual(obj2.length);
  for (let i = 0; i < obj1.length; i++) {
    if ((obj1[i] instanceof Symbol) && (obj2[i] instanceof Symbol)) {
      expect(obj1[i].toString()).assertEqual(obj2[i].toString());
    } else {
      expect(obj1[i] === obj2[i]).assertTrue();
    }
  }
};
const deepStrictEqualOfObject = (obj1, obj2) => {
  deepStrictEqualOfArray(Object.keys(obj1), Object.keys(obj2));
  for (const key in obj1) {
    if (obj1.hasOwnProperty(key)) {
      expect(obj1[key]).assertEqual(obj2[key]);
    }
  }
};

export default function napiApiTest() {
  describe('napiApiTest', () => {
    /**
     * run after testcase
     */
    afterEach(async () => {
      console.info('[napiApiTest] after each called')
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_GETLASTERRORINFO_0100
     * @tc.name      : testGetLastErrorInfo0001
     * @tc.desc      : Testing GetLastErrorInfo NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testGetLastErrorInfo0001', 0, async (done: Function) => {
      console.info('testGetLastErrorInfo0001 START');
      try {
        let value = napitest.getLastErrorInfo();
        console.info('testGetLastErrorInfo0001 result is: ' + value);
        expect(value).assertEqual(6);
      } catch (err) {
        console.error('testGetLastErrorInfo0001 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_GETLASTERRORINFO_0200
     * @tc.name      : testGetLastErrorInfo0002
     * @tc.desc      : Testing GetLastErrorInfo NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testGetLastErrorInfo0002', 0, async (done: Function) => {
      console.info('testGetLastErrorInfo0002 START');
      try {
        let value = napitest.getLastErrorInfoNull();
        console.info('testGetLastErrorInfo0002 result is: ' + value);
        expect().assertFail();
      } catch (err) {
        console.error('testGetLastErrorInfo0002 err message' + err.message);
        expect(err.message).assertEqual('empty error message');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_THROW_0100
     * @tc.name      : testThrow0001
     * @tc.desc      : Testing Throw NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testThrow0001', 0, async (done: Function) => {
      console.info('testThrow0001 START');
      try {
        let value = napitest.throwFunc();
        console.info('testThrow0001 result is: ' + value);
        expect(value).assertEqual(0);
      } catch (err) {
        console.error('testThrow0001 err msg' + err.message);
        expect(err.message).assertEqual('empty error message');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_THROW_0200
     * @tc.name      : testThrow0002
     * @tc.desc      : Testing Throw NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testThrow0002', 0, async (done: Function) => {
      console.info('testThrow0002 START');
      try {
        let value = napitest.throwFuncNull();
        console.info('testThrow0002 result is: ' + value);
        expect().assertFail();
      } catch (err) {
        console.error('testThrow0002 err msg' + err.message);
        expect(err.message).assertEqual('empty error message');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_THROWERROR_0100
     * @tc.name      : testThrowError0001
     * @tc.desc      : Testing ThrowError NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testThrowError0001', 0, async (done: Function) => {
      console.info('testThrowError0001 START');
      try {
        let value = napitest.throwError();
        console.info('testThrowError0001 result is: ' + value);
        expect().assertFail();
      } catch (err) {
        console.error('testThrowError0001 err msg' + err.message);
        expect(JSON.stringify(err)).assertEqual('{"code":"500"}');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_THROWERROR_0200
     * @tc.name      : testThrowError0002
     * @tc.desc      : Testing ThrowError NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testThrowError0002', 0, async (done: Function) => {
      console.info('testThrowError0002 START');
      try {
        let value = napitest.throwErrorNull();
        console.info('testThrowError0002 result is: ' + value);
        expect().assertFail();
      } catch (err) {
        console.error('testThrowError0002 err msg' + err.messsage);
        expect(err.messsage).assertEqual(undefined);
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_THROWTYPEERROR_0100
     * @tc.name      : testThrowTypeError0001
     * @tc.desc      : Testing ThrowTypeError NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testThrowTypeError0001', 0, async (done: Function) => {
      console.info('testThrowTypeError0001 START');
      try {
        let value = napitest.throwTypeError();
        console.info('testThrowTypeError0001 result is: ' + value);
        expect().assertFail();
      } catch (err) {
        console.error('testThrowTypeError0001 err msg' + err.messsage);
        expect(err.messsage).assertEqual(undefined);
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_THROWTYPEERROR_0200
     * @tc.name      : testThrowTypeError0002
     * @tc.desc      : Testing ThrowTypeError NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testThrowTypeError0002', 0, async (done: Function) => {
      console.info('testThrowTypeError0002 START');
      try {
        let value = napitest.throwTypeErrorNull();
        console.info('testThrowTypeError0002 result is: ' + value);
        expect(value).assertEqual(NAPI_INVALID_ARG);
      } catch (err) {
        console.error('testThrowTypeError0002 err msg' + err.messsage);
        expect(err.messsage).assertEqual(undefined);
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_THROWRANGEERROR_0100
     * @tc.name      : testThrowRangeError0001
     * @tc.desc      : Testing ThrowRangeError NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testThrowRangeError0001', 0, async (done: Function) => {
      console.info('testThrowRangeError0001 START');
      try {
        let ret = napitest.throwRangeError();
        console.info('testThrowRangeError0001 ret is: ' + ret);
        expect().assertFail();
      } catch (err) {
        console.error('testThrowRangeError0001 err msg' + err.message);
        expect(err instanceof RangeError).assertTrue();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_THROWRANGEERROR_0200
     * @tc.name      : testThrowRangeError0002
     * @tc.desc      : Testing ThrowRangeError NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testThrowRangeError0002', 0, async (done: Function) => {
      console.info('testThrowRangeError0002 START');
      try {
        let value = napitest.throwRangeErrorNull();
        console.info('testThrowRangeError0002 result is: ' + value);
        expect(value).assertEqual(NAPI_INVALID_ARG);
      } catch (err) {
        console.error('testThrowRangeError0002 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_ISERROR_0100
     * @tc.name      : testIsError0001
     * @tc.desc      : Testing IsError NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testIsError0001', 0, async (done: Function) => {
      console.info('testIsError0001 START');
      try {
        let ret = napitest.isError(true);
        console.info('testIsError0001 ret is: ' + ret);
        expect(ret).assertEqual(false);
      } catch (err) {
        console.error('testIsError0001 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_ISERROR_0200
     * @tc.name      : testIsError0002
     * @tc.desc      : Testing IsError NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testIsError0002', 0, async (done: Function) => {
      console.info('testIsError0002 START');
      try {
        let ret = napitest.isError(null);
        console.info('testIsError0002 ret is: ' + ret);
        expect(ret).assertEqual(false);
      } catch (err) {
        console.error('testIsError0002 err msg' + err.message);
        expect(err).assertEqual('RangeError: range error');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_CREATESTRINGUTF8_0100
     * @tc.name      : testCreateStringUtf80001
     * @tc.desc      : Testing CreateStringUtf8 NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testCreateStringUtf80001', 0, async (done: Function) => {
      console.info('testCreateStringUtf80001 START');
      try {
        let ret = napitest.createStringUtf8('abc');
        console.info('testCreateStringUtf80001 ret is: ' + ret);
        expect(ret).assertEqual('abc');
      } catch (err) {
        console.error('testCreateStringUtf80001 err msg' + err.message);
        expect(err).assertEqual('RangeError: range error');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_CREATESTRINGUTF8_0200
     * @tc.name      : testCreateStringUtf80002
     * @tc.desc      : Testing CreateStringUtf8 NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testCreateStringUtf80002', 0, async (done: Function) => {
      console.info('testCreateStringUtf80002 START');
      try {
        let ret = napitest.createStringUtf8(null);
        console.info('testCreateStringUtf80002 ret is: ' + ret);
        expect(ret).assertEqual('abc');
      } catch (err) {
        console.error('testCreateStringUtf80002 err msg' + err.messsage);
        expect(err instanceof TypeError).assertTrue();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_CREATEERROR_0100
     * @tc.name      : testCreateError0001
     * @tc.desc      : Testing CreateError NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testCreateError0001', 0, async (done: Function) => {
      console.info('testCreateError0001 START');
      try {
        let ret = napitest.createError('abc');
        console.info('testCreateError0001 ret is: ' + ret);
        expect(ret).assertEqual(0);
      } catch (err) {
        console.error('testCreateError0001 err msg' + err.message);
        expect(err).assertEqual('RangeError: range error');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_CREATEERROR_0200
     * @tc.name      : testCreateError0002
     * @tc.desc      : Testing CreateError NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testCreateError0002', 0, async (done: Function) => {
      console.info('testCreateError0002 START');
      try {
        let ret = napitest.createErrorNull();
        console.info('testCreateError0002 result is: ' + ret);
        expect(ret).assertEqual(NAPI_INVALID_ARG);
      } catch (err) {
        console.error('testCreateError0002 err code' + err.Error);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_CREATEERROR_0300
     * @tc.name      : testCreateError0003
     * @tc.desc      : Testing CreateError NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testCreateError0003', 0, async (done: Function) => {
      console.info('testCreateError0003 START');
      try {
        let ret = napitest.createErrorRstNull();
        console.info('testCreateError0003 ret is: ' + ret);
        expect(ret).assertEqual(NAPI_INVALID_ARG);
      } catch (err) {
        console.error('testCreateError0003 err code' + err.Error);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_CREATETYPEERROR_0100
     * @tc.name      : testCreateTypeError0001
     * @tc.desc      : Testing CreateTypeError NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testCreateTypeError0001', 0, async (done: Function) => {
      console.info('testCreateTypeError0001 START');
      try {
        let ret = napitest.createTypeError();
        console.info('testCreateTypeError0001 ret is: ' + ret);
        expect(ret).assertEqual(0);
      } catch (err) {
        console.error('testCreateTypeError0001 err msg' + err.message);
        expect(err).assertEqual('RangeError: range error');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_CREATETYPEERROR_0200
     * @tc.name      : testCreateTypeError0002
     * @tc.desc      : Testing CreateTypeError NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testCreateTypeError0002', 0, async (done: Function) => {
      console.info('testCreateTypeError0002 START');
      try {
        let ret = napitest.createTypeErrorNull();
        console.info('testCreateTypeError0002 result is: ' + ret);
        expect(ret).assertEqual(NAPI_INVALID_ARG);
      } catch (err) {
        console.error('testCreateTypeError0002 err message' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_CREATETYPEERROR_0300
     * @tc.name      : testCreateTypeError0003
     * @tc.desc      : Testing CreateTypeError NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testCreateTypeError0003', 0, async (done: Function) => {
      console.info('testCreateTypeError0003 START');
      try {
        let ret = napitest.createTypeErrorRstNull();
        console.info('testCreateTypeError0003 ret is: ' + ret);
        expect().assertFail();
      } catch (err) {
        console.error('testCreateTypeError0003 err message' + err.message);
        expect(err.message).assertContain('NAPI_INVALID_ARG');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_CREATERANGEERROR_0100
     * @tc.name      : testCreateRangeError0001
     * @tc.desc      : Testing CreateRangeError NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testCreateRangeError0001', 0, async (done: Function) => {
      console.info('testCreateRangeError0001 START');
      try {
        let ret = napitest.createRangeError();
        console.info('testCreateRangeError0001 ret is: ' + ret);
        expect(ret).assertEqual(0);
      } catch (err) {
        console.error('testCreateRangeError0001 err msg' + err.message);
        expect(err).assertEqual('RangeError: range error');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_CREATERANGEERROR_0200
     * @tc.name      : testCreateRangeError0002
     * @tc.desc      : Testing CreateRangeError NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testCreateRangeError0002', 0, async (done: Function) => {
      console.info('testCreateRangeError0002 START');
      try {
        let ret = napitest.createRangeErrorRstNull();
        console.info('testCreateRangeError0002 ret is: ' + ret);
        expect().assertFail();
      } catch (err) {
        console.error('testCreateRangeError0002 err msg' + err.message);
        expect(err.message).assertContain('NAPI_INVALID_ARG');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_GETANDCLEARLASTEXCEPTION_0100
     * @tc.name      : testGetAndClearLastException0001
     * @tc.desc      : Testing GetAndClearLastException NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testGetAndClearLastException0001', 0, async (done: Function) => {
      console.info('testGetAndClearLastException0001 START');
      try {
        let ret = napitest.getAndClearLastException();
        console.info('testGetAndClearLastException0001 ret is: ' + ret);
      } catch (err) {
        console.error('testGetAndClearLastException0001 err msg' + err.message);
        let er = JSON.stringify(err)
        expect(er === '{"code":"600"}').assertTrue();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_GETANDCLEARLASTEXCEPTION_0200
     * @tc.name      : testGetAndClearLastException0002
     * @tc.desc      : Testing GetAndClearLastException NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testGetAndClearLastException0002', 0, async (done: Function) => {
      console.info('testGetAndClearLastException0002 START');
      try {
        let ret = napitest.getAndClearLastExceptionNull();
        console.info('testGetAndClearLastException0002 ret is: ' + ret);
        expect(ret).assertEqual(0);
      } catch (err) {
        console.error('testGetAndClearLastException0002 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_ISEXCEPTIONPENDING_0100
     * @tc.name      : testIsExceptionPending0001
     * @tc.desc      : Testing IsExceptionPending NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testIsExceptionPending0001', 0, async (done: Function) => {
      console.info('testIsExceptionPending0001 START');
      try {
        let value = napitest.isExceptionPending();
        console.info('testIsExceptionPending0001 value is: ' + value);
        expect(value).assertEqual(0);
      } catch (err) {
        console.error('testIsExceptionPending0001 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_ISEXCEPTIONPENDING_0200
     * @tc.name      : testIsExceptionPending0002
     * @tc.desc      : Testing IsExceptionPending NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testIsExceptionPending0002', 0, async (done: Function) => {
      console.info('testIsExceptionPending0002 START');
      try {
        let value = napitest.isExceptionPendingNull();
        console.info('testIsExceptionPending0002 value is: ' + value);
        expect(value).assertEqual(NAPI_INVALID_ARG);
      } catch (err) {
        console.error('testIsExceptionPending0002 err.msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_OPENANDCLOSEHANDLESCOPE_0100
     * @tc.name      : testOpenAndCloseHandleScope0001
     * @tc.desc      : Testing OpenAndCloseHandleScope NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testOpenAndCloseHandleScope0001', 0, async (done: Function) => {
      console.info('testOpenAndCloseHandleScope0001 START');
      try {
        let value = napitest.openAndCloseHandleScope();
        console.info('testOpenAndCloseHandleScope0001 value is: ' + value);
        expect(value == undefined).assertTrue();
      } catch (err) {
        console.error('testOpenAndCloseHandleScope0001 err.msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_OPENANDCLOSEHANDLESCOPE_0200
     * @tc.name      : testOpenAndCloseHandleScope0002
     * @tc.desc      : Testing OpenAndCloseHandleScope NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testOpenAndCloseHandleScope0002', 0, async (done: Function) => {
      console.info('testOpenAndCloseHandleScope0002 START');
      try {
        let value = napitest.openAndCloseHandleScopeNull();
        console.info('testOpenAndCloseHandleScope0002 value is: ' + value);
        expect(value instanceof Object).assertTrue();
      } catch (err) {
        console.error('testOpenAndCloseHandleScope0002 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_OPENANDCLOSEESCAPABLEHANDLESCOPE_0100
     * @tc.name      : testOpenAndCloseEscapableHandleScope0001
     * @tc.desc      : Testing OpenAndCloseEscapableHandleScope NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testOpenAndCloseEscapableHandleScope0001', 0, async (done: Function) => {
      console.info('testOpenAndCloseEscapableHandleScope0001 START');
      try {
        let value = napitest.openAndCloseEscapableHandleScope();
        console.info('testOpenAndCloseEscapableHandleScope0001 value is: ' + value);
        expect(value instanceof Object).assertTrue();
      } catch (err) {
        console.error('testOpenAndCloseEscapableHandleScope0001 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_OPENANDCLOSEESCAPABLEHANDLESCOPE_0200
     * @tc.name      : testOpenAndCloseEscapableHandleScope0002
     * @tc.desc      : Testing OpenAndCloseEscapableHandleScope NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testOpenAndCloseEscapableHandleScope0002', 0, async (done: Function) => {
      console.info('testOpenAndCloseEscapableHandleScope0002 START');
      try {
        let value = napitest.openAndCloseEscapableHandleScopeNull();
        console.info('testOpenAndCloseEscapableHandleScope0002 value is: ' + value);
        expect().assertFail();
      } catch (err) {
        console.error('testOpenAndCloseEscapableHandleScope0002 err msg' + err.message);
        expect(err.message).assertEqual('empty error message');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_ESCAPEHANDLE_0100
     * @tc.name      : testEscapeHandle0001
     * @tc.desc      : Testing EscapeHandle NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testEscapeHandle0001', 0, async (done: Function) => {
      console.info('testEscapeHandle0001 START');
      try {
        let value = napitest.escapeHandle();
        console.info('testEscapeHandle0001 value is: ' + value);
        expect(value instanceof Object).assertTrue();
      } catch (err) {
        console.error('testEscapeHandle0001 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_ESCAPEHANDLE_0200
     * @tc.name      : testEscapeHandle0002
     * @tc.desc      : Testing EscapeHandle NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testEscapeHandle0002', 0, async (done: Function) => {
      console.info('testEscapeHandle0002 START');
      try {
        let value = napitest.escapeHandleScopeNull();
        console.info('testEscapeHandle0002 value is: ' + value);
        expect().assertFail();
      } catch (err) {
        console.error('testEscapeHandle0002 err msg' + err.message);
        expect(err.message).assertEqual('empty error message');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_ESCAPEHANDLE_0300
     * @tc.name      : testEscapeHandle0003
     * @tc.desc      : Testing EscapeHandle NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testEscapeHandle0003', 0, async (done: Function) => {
      console.info('testEscapeHandle0003 START');
      try {
        let value = napitest.escapeHandleOutputNull();
        console.info('testEscapeHandle0003 value is: ' + value);
        expect().assertFail();
      } catch (err) {
        console.error('testEscapeHandle0003 err msg' + err.message);
        expect(err.message).assertEqual('empty error message');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_ESCAPEHANDLE_0400
     * @tc.name      : testEscapeHandle0004
     * @tc.desc      : Testing EscapeHandle NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testEscapeHandle0004', 0, async (done: Function) => {
      console.info('testEscapeHandle0004 START');
      try {
        let value = napitest.escapeHandleRstNull();
        console.info('testEscapeHandle0004 value is: ' + value);
        expect().assertFail();
      } catch (err) {
        console.error('testEscapeHandle0004 err msg' + err.message);
        expect(err.message).assertEqual('empty error message');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_CREATEREFERENCE_0100
     * @tc.name      : testCreateReference0001
     * @tc.desc      : Testing CreateReference NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testCreateReference0001', 0, async (done: Function) => {
      console.info('testCreateReference0001 START');
      try {
        let value = napitest.createReference();
        console.info('testCreateReference0001 value is: ' + value);
        expect(value).assertEqual(0);
      } catch (err) {
        console.error('testCreateReference0001 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_CREATEREFERENCE_0200
     * @tc.name      : testCreateReference0002
     * @tc.desc      : Testing CreateReference NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testCreateReference0002', 0, async (done: Function) => {
      console.info('testCreateReference0002 START');
      try {
        let value = napitest.createReferenceValueNull();
        console.info('testCreateReference0002 value is: ' + value);
        expect().assertFail();
      } catch (err) {
        expect(err.message).assertEqual('empty error message');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_GETREFERENCEVALUE_0100
     * @tc.name      : testGetReferenceValue0001
     * @tc.desc      : Testing GetReferenceValue NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testGetReferenceValue0001', 0, async (done: Function) => {
      console.info('testGetReferenceValue0001 START');
      try {
        let value = napitest.getReferenceValue();
        console.info('testGetReferenceValue0001 value is: ' + value);
        expect(value).assertEqual(666);
      } catch (err) {
        console.error('testGetReferenceValue0001 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_GETREFERENCEVALUE_0200
     * @tc.name      : testGetReferenceValue0002
     * @tc.desc      : Testing GetReferenceValue NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testGetReferenceValue0002', 0, async (done: Function) => {
      console.info('testGetReferenceValue0002 START');
      try {
        let value = napitest.getReferenceValueRefNull();
        console.info('testGetReferenceValue0002 value is: ' + value);
        expect(value).assertEqual(666);
      } catch (err) {
        console.error('testGetReferenceValue0002 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_GETREFERENCEVALUE_0300
     * @tc.name      : testGetReferenceValue0003
     * @tc.desc      : Testing GetReferenceValue NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testGetReferenceValue0003', 0, async (done: Function) => {
      console.info('testGetReferenceValue0003 START');
      try {
        let value = napitest.getReferenceValueRstNull();
        console.info('testGetReferenceValue0003 value is: ' + value);
        expect(value).assertEqual(666);
      } catch (err) {
        console.error('testGetReferenceValue0003 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_DELETEREFERENCE_0100
     * @tc.name      : testDeleteReference0001
     * @tc.desc      : Testing DeleteReference NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testDeleteReference0001', 0, async (done: Function) => {
      console.info('testDeleteReference0001 START');
      try {
        let value = napitest.getAndDeleteReference();
        console.info('testDeleteReference0001 value is: ' + value);
        expect(value).assertEqual(undefined);
      } catch (err) {
        console.error('testDeleteReference0001 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_DELETEREFERENCE_0200
     * @tc.name      : testDeleteReference0002
     * @tc.desc      : Testing DeleteReference NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testDeleteReference0002', 0, async (done: Function) => {
      console.info('testDeleteReference0002 START');
      try {
        let value = napitest.getAndDeleteReferenceNull();
        console.info('testDeleteReference0002 value is: ' + value);
      } catch (err) {
        console.error('testDeleteReference0002 err message is' + err.message);
        expect(err.message)
          .assertEqual('assertion (test_reference != nullptr) failed: A reference must have been created.');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_REFERENCEREF_0100
     * @tc.name      : testReferenceRef0001
     * @tc.desc      : Testing ReferenceRef NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testReferenceRef0001', 0, async (done: Function) => {
      console.info('testReferenceRef0001 START');
      try {
        let value = napitest.referenceRef();
        console.info('testReferenceRef0001 value is: ' + value);
        expect(value).assertEqual(0);
      } catch (err) {
        console.error('testReferenceRef0001 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_REFERENCEREF_0200
     * @tc.name      : testReferenceRef0002
     * @tc.desc      : Testing ReferenceRef NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testReferenceRef0002', 0, async (done: Function) => {
      console.info('testReferenceRef0002 START');
      try {
        let value = napitest.referenceRefNull();
        console.info('testReferenceRef0002 value is: ' + value);
      } catch (err) {
        console.error('testReferenceRef0002 err msg' + err.message);
        expect(err.message).assertContain('NAPI_INVALID_ARG');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_REFERENCEUNREF_0100
     * @tc.name      : testReferenceUnRef0001
     * @tc.desc      : Testing ReferenceRef NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testReferenceUnRef0001', 0, async (done: Function) => {
      console.info('testReferenceUnRef0001 START');
      try {
        let value = napitest.referenceRefAndUnref();
        console.info('testReferenceUnRef0001 value is: ' + value);
        expect(value).assertEqual(0);
      } catch (err) {
        console.error('testReferenceUnRef0001 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_REFERENCEUNREF_0200
     * @tc.name      : testReferenceUnRef0002
     * @tc.desc      : Testing ReferenceRef NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testReferenceUnRef0002', 0, async (done: Function) => {
      console.info('testReferenceUnRef0002 START');
      try {
        let value = napitest.referenceRefAndUnrefNull();
        console.info('testReferenceUnRef0002 value is: ' + value);
        expect().assertFail();
      } catch (err) {
        console.error('testReferenceUnRef0002 err msg' + err.message);
        expect(err.message).assertContain('NAPI_INVALID_ARG');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_CREATEARRAY_0100
     * @tc.name      : testCreateArray0001
     * @tc.desc      : Testing CreateArray NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testCreateArray0001', 0, async (done: Function) => {
      console.info('testCreateArray0001 START');
      try {
        let array = [1, 2];
        let value = napitest.createArrayAndGetLength(array);
        console.info('testCreateArray0001 value is: ' + value);
        let obj = JSON.stringify(value);
        expect(obj).assertEqual('[1,2]');
      } catch (err) {
        console.error('testCreateArray0001 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_CREATEARRAY_0200
     * @tc.name      : testCreateArray0002
     * @tc.desc      : Testing CreateArray NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testCreateArray0002', 0, async (done: Function) => {
      console.info('testCreateArray0002 START');
      try {
        let array = [1, 2];
        let value = napitest.createArrayNull(array);
        console.info('testCreateArray0002 value is: ' + value);
        let obj = JSON.stringify(value);
        expect(obj).assertEqual('[1,2]');
      } catch (err) {
        console.error('testCreateArray0002 err msg' + err.message);
        expect(err.message).assertEqual('empty error message');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_CREATEARRAYBUFFER_0100
     * @tc.name      : testCreateArrayBuffer0001
     * @tc.desc      : Testing CreateArrayBuffer NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testCreateArrayBuffer0001', 0, async (done: Function) => {
      console.info('testCreateArrayBuffer0001 START');
      try {
        let value = napitest.napCreateArrayBuffer();
        console.info('testCreateArrayBuffer0001 value is: ' + value);
        expect(value instanceof ArrayBuffer).assertTrue();
      } catch (err) {
        console.error('testCreateArrayBuffer0001 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_CREATEARRAYBUFFER_0200
     * @tc.name      : testCreateArrayBuffer0002
     * @tc.desc      : Testing CreateArrayBuffer NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testCreateArrayBuffer0002', 0, async (done: Function) => {
      console.info('testCreateArrayBuffer0002 START');
      try {
        let value = napitest.napCreateArrayBufferNull();
        console.info('testCreateArrayBuffer0002 value is: ' + value);
        expect(value instanceof ArrayBuffer).assertTrue();
      } catch (err) {
        console.error('testCreateArrayBuffer0002 err msg' + err.message);
        expect(err.message).assertEqual('assertion (status == napi_ok) failed: success to napi_create_arraybuffer');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_CREATEEXTERNAL_0100
     * @tc.name      : testCreateExternal0001
     * @tc.desc      : Testing CreateExternal NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testCreateExternal0001', 0, async (done: Function) => {
      console.info('testCreateExternal0001 START');
      try {
        let value = napitest.createExternal();
        console.info('testCreateExternal0001 value is: ' + value);
        expect(value).assertEqual(0);
      } catch (err) {
        console.error('testCreateExternal0001 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_CREATEEXTERNAL_0200
     * @tc.name      : testCreateExternal0002
     * @tc.desc      : Testing CreateExternal NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testCreateExternal0002', 0, async (done: Function) => {
      console.info('testCreateExternal0002 START');
      try {
        let value = napitest.createExternalNull();
        console.info('testCreateExternal0002 value is: ' + value);
        expect(value).assertEqual(NAPI_INVALID_ARG);
      } catch (err) {
        console.error('testCreateExternal0002 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_CREATEEXTERNALARRAYBUFFER_0100
     * @tc.name      : testCreateExternalArraybuffer0001
     * @tc.desc      : Testing CreateExternal NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testCreateExternalArraybuffer0001', 0, async (done: Function) => {
      console.info('testCreateExternalArraybuffer0001 START');
      try {
        let value = napitest.createExternalArraybuffer();
        console.info('testCreateExternalArraybuffer0001 value is: ' + value);
        expect(value instanceof ArrayBuffer).assertTrue();
        let view = new Int32Array(value);
        expect(view[0]).assertEqual(666);
      } catch (err) {
        console.error('testCreateExternalArraybuffer0001 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_CREATEEXTERNALARRAYBUFFER_0200
     * @tc.name      : testCreateExternalArraybuffer0002
     * @tc.desc      : Testing CreateExternal NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testCreateExternalArraybuffer0002', 0, async (done: Function) => {
      console.info('testCreateExternalArraybuffer0002 START');
      try {
        let value = napitest.createExternalArraybufferDataNull();
        console.info('testCreateExternalArraybuffer0002 value is: ' + value);
        expect(value).assertEqual(undefined);
      } catch (err) {
        console.error('testCreateExternalArraybuffer0002 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_CREATEOBJECT_0100
     * @tc.name      : testCreateObject0001
     * @tc.desc      : Testing CreateObject NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testCreateObject0001', 0, async (done: Function) => {
      console.info('testCreateObject0001 START');
      try {
        let value = napitest.createObject();
        console.info('testCreateObject0001 value is: ' + value);
        expect(value instanceof Object).assertTrue();
      } catch (err) {
        console.error('testCreateObject0001 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_CREATEOBJECT_0200
     * @tc.name      : testCreateObject0002
     * @tc.desc      : Testing CreateObject NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testCreateObject0002', 0, async (done: Function) => {
      console.info('testCreateObject0002 START');
      try {
        let value = napitest.createObjectNull();
        console.info('testCreateObject0002 value is: ' + value);
        expect(value instanceof Object).assertTrue();
      } catch (err) {
        console.error('testCreateObject0002 err msg' + err.message);
        expect(err.message).assertEqual('empty error message');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_CREATESYMBOL_0100
     * @tc.name      : testCreateSymbol0001
     * @tc.desc      : Testing CreateObject NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testCreateSymbol0001', 0, async (done: Function) => {
      console.info('testCreateSymbol0001 START');
      try {
        let value = napitest.createSymbol('symbol');
        console.info('testCreateSymbol0001 value is: ' + value);
        expect(value).assertEqual(0);
      } catch (err) {
        console.error('testCreateSymbol0001 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_CREATESYMBOL_0200
     * @tc.name      : testCreateSymbol0002
     * @tc.desc      : Testing CreateObject NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testCreateSymbol0002', 0, async (done: Function) => {
      console.info('testCreateSymbol0002 START');
      try {
        let value = napitest.createSymbolNull();
        console.info('testCreateSymbol0002 value is: ' + value);
        expect().assertFail();
      } catch (err) {
        console.error('testCreateSymbol0002 err msg' + err.message);
        expect(err.message).assertEqual('empty error message');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_CREATESYMBOL_0300
     * @tc.name      : testCreateSymbol0003
     * @tc.desc      : Testing CreateObject NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testCreateSymbol0003', 0, async (done: Function) => {
      console.info('testCreateSymbol0003 START');
      try {
        let value = napitest.createSymbolDescriptionNull();
        console.info('testCreateSymbol0003 value is: ' + value);
        expect(value).assertEqual(0);
      } catch (err) {
        console.error('testCreateSymbol0003 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_CREATESYMBOL_0400
     * @tc.name      : testCreateSymbol0004
     * @tc.desc      : Testing CreateObject NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testCreateSymbol0004', 0, async (done: Function) => {
      console.info('testCreateSymbol0004 START');
      try {
        let value = napitest.createSymbolDescriptionNotString();
        console.info('testCreateSymbol0004 value is: ' + value);
        expect().assertFail();
      } catch (err) {
        console.error('testCreateSymbol0004 err msg' + err.message);
        expect(err.message).assertEqual('empty error message');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_CREATETYPEARRAY_0100
     * @tc.name      : testCreateTypeArray0001
     * @tc.desc      : Testing CreateTypeArray NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testCreateTypeArray0001', 0, async (done: Function) => {
      console.info('testCreateTypeArray0001 START');
      try {
        let value = napitest.createTypeArray();
        console.info('testCreateTypeArray0001 value is: ' + value);
        expect(value instanceof Int32Array).assertTrue();
        expect(value.length).assertEqual(4);
      } catch (err) {
        console.error('testCreateTypeArray0001 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_CREATETYPEARRAY_0200
     * @tc.name      : testCreateTypeArray0002
     * @tc.desc      : Testing CreateTypeArray NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testCreateTypeArray0002', 0, async (done: Function) => {
      console.info('testCreateTypeArray0002 START');
      try {
        let value = napitest.createTypeArrayBufferNull();
        console.info('testCreateTypeArray0002 value is: ' + value);
        expect(value).assertEqual(undefined);
      } catch (err) {
        console.error('testCreateTypeArray0002 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_CREATETYPEARRAY_0300
     * @tc.name      : testCreateTypeArray0003
     * @tc.desc      : Testing CreateTypeArray NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testCreateTypeArray0003', 0, async (done: Function) => {
      console.info('testCreateTypeArray0003 START');
      try {
        let value = napitest.createTypeArrayResultNull();
        console.info('testCreateTypeArray0003 value is: ' + value);
        expect(value).assertEqual(0);
      } catch (err) {
        console.error('testCreateTypeArray0003 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_CREATETYPEARRAY_0400
     * @tc.name      : testCreateTypeArray0004
     * @tc.desc      : Testing CreateTypeArray NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testCreateTypeArray0004', 0, async (done: Function) => {
      console.info('testCreateTypeArray0004 START');
      try {
        let value = napitest.createTypeArrayNotBufferObj();
        console.info('testCreateTypeArray0004 value is: ' + value);
        let obj = JSON.stringify(value);
        expect(obj).assertEqual('{"0":0,"1":0,"2":0,"3":0}');
      } catch (err) {
        console.error('testCreateTypeArray0004 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_CREATETYPEARRAY_0500
     * @tc.name      : testCreateTypeArray0005
     * @tc.desc      : Testing CreateTypeArray NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testCreateTypeArray0005', 0, async (done: Function) => {
      console.info('testCreateTypeArray0005 START');
      try {
        let value = napitest.createTypeArrayNotEnumValue();
        console.info('testCreateTypeArray0005 value is: ' + value);
        let obj = JSON.stringify(value);
        expect(obj).assertEqual('{"0":0,"1":0,"2":0,"3":0}');
      } catch (err) {
        console.error('testCreateTypeArray0005 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_CREATEDATAVIEW_0100
     * @tc.name      : testCreateDataView0001
     * @tc.desc      : Testing CreateDataView NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testCreateDataView0001', 0, async (done: Function) => {
      console.info('testCreateDataView0001 START');
      try {
        let value = napitest.createDataView();
        console.info('testCreateDataView0001 value is: ' + value);
        expect(value instanceof DataView).assertTrue();
        value.setInt16(1, 42);
        expect(value.getInt16(1)).assertEqual(42);
      } catch (err) {
        console.error('testCreateDataView0001 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_CREATEDATAVIEW_0200
     * @tc.name      : testCreateDataView0002
     * @tc.desc      : Testing CreateDataView NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testCreateDataView0002', 0, async (done: Function) => {
      console.info('testCreateDataView0002 START');
      try {
        let value = napitest.createDataViewBufferNull();
        console.info('testCreateDataView0002 value is: ' + value);
        expect().assertFail();
      } catch (err) {
        console.error('testCreateDataView0002 err msg' + err.message);
        expect(err.message).assertEqual('empty error message');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_CREATEDATAVIEW_0300
     * @tc.name      : testCreateDataView0003
     * @tc.desc      : Testing CreateDataView NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testCreateDataView0003', 0, async (done: Function) => {
      console.info('testCreateDataView0003 START');
      try {
        let value = napitest.createDataViewResultNull();
        console.info('testCreateDataView0003 value is: ' + value);
        expect().assertFail();
      } catch (err) {
        console.error('testCreateDataView0003 err msg' + err.message);
        expect(err.message).assertEqual('empty error message');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_CREATEDATAVIEW_0400
     * @tc.name      : testCreateDataView0004
     * @tc.desc      : Testing CreateDataView NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testCreateDataView0004', 0, async (done: Function) => {
      console.info('testCreateDataView0004 START');
      try {
        let value = napitest.createDataViewBufferNotObj();
        console.info('testCreateDataView0004 value is: ' + value);
        expect().assertFail();
      } catch (err) {
        console.error('testCreateDataView0004 err msg' + err.message);
        expect(err.message).assertEqual('empty error message');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_CREATEDATAVIEW_0500
     * @tc.name      : testCreateDataView0005
     * @tc.desc      : Testing CreateDataView NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testCreateDataView0005', 0, async (done: Function) => {
      console.info('testCreateDataView0005 START');
      try {
        let value = napitest.createDataViewExceed();
        console.info('testCreateDataView0005 value is: ' + value.getInt16(1));
        //expect(value.getInt16(1)).assertEqual(42);
      } catch (err) {
        console.error('testCreateDataView0005 err msg' + err.message);
        expect(err.message).assertEqual('empty error message');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_CREATEINT32_0100
     * @tc.name      : testCreateInt320001
     * @tc.desc      : Testing CreateInt32 NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testCreateInt320001', 0, async (done: Function) => {
      console.info('testCreateInt320001 START');
      try {
        let value = napitest.createAndGetInt32(32);
        console.info('testCreateInt320001 value is: ' + value);
        expect(value).assertEqual(32);
      } catch (err) {
        console.error('testCreateInt320001 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_CREATEINT32_0200
     * @tc.name      : testCreateInt320002
     * @tc.desc      : Testing CreateInt32 NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testCreateInt320002', 0, async (done: Function) => {
      console.info('testCreateInt320002 START');
      try {
        let value = napitest.createInt32Null();
        console.info('testCreateInt320002 value is: ' + value);
        expect().assertFail();
      } catch (err) {
        console.error('testCreateInt320002 err msg' + err.message);
        expect(err.message).assertEqual('empty error message');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_GETVALUEINT32_0100
     * @tc.name      : testGetValueInt320001
     * @tc.desc      : Testing GetValueInt32 NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testGetValueInt320001', 0, async (done: Function) => {
      console.info('testGetValueInt320001 START');
      try {
        let value = napitest.getValueInt32(32);
        console.info('testGetValueInt320001 value is: ' + value);
        expect(value).assertEqual(32);
      } catch (err) {
        console.error('testGetValueInt320001 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_GETVALUEINT32_0200
     * @tc.name      : testGetValueInt320002
     * @tc.desc      : Testing GetValueInt32 NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testGetValueInt320002', 0, async (done: Function) => {
      console.info('testGetValueInt320002 START');
      try {
        let value = napitest.getValueInt32ValueNull();
        console.info('testGetValueInt320002 value is: ' + value);
        expect().assertFail();
      } catch (err) {
        console.error('testGetValueInt320002 err msg' + err.message);
        expect(err.message).assertEqual('empty error message');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_GETVALUEINT32_0300
     * @tc.name      : testGetValueInt320003
     * @tc.desc      : Testing GetValueInt32 NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testGetValueInt320003', 0, async (done: Function) => {
      console.info('testGetValueInt320003 START');
      try {
        let value = napitest.getValueInt32RstNull();
        console.info('testGetValueInt320003 value is: ' + value);
        expect().assertFail();
      } catch (err) {
        console.error('testGetValueInt320003 err msg' + err.message);
        expect(err.message).assertEqual('empty error message');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_GETVALUEINT32_0400
     * @tc.name      : testGetValueInt320004
     * @tc.desc      : Testing GetValueInt32 NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testGetValueInt320004', 0, async (done: Function) => {
      console.info('testGetValueInt320004 START');
      try {
        let value = napitest.getValueInt32NotNum();
        console.info('testGetValueInt320004 value is: ' + value);
        expect().assertFail();
      } catch (err) {
        console.error('testGetValueInt320004 err msg' + err.message);
        expect(err.message).assertEqual('empty error message');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_GETVALUEINT64_0100
     * @tc.name      : testGetValueInt640001
     * @tc.desc      : Testing GetValueInt64 NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testGetValueInt640001', 0, async (done: Function) => {
      console.info('testGetValueInt640001 START');
      try {
        let value = napitest.getValueInt64(23);
        console.info('testGetValueInt640001 value is: ' + value);
        expect(value).assertEqual(23);
      } catch (err) {
        console.error('testGetValueInt640001 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_GETVALUEINT64_0200
     * @tc.name      : testGetValueInt640002
     * @tc.desc      : Testing GetValueInt64 NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testGetValueInt640002', 0, async (done: Function) => {
      console.info('testGetValueInt640002 START');
      try {
        let value = napitest.getValueInt64ValueNull();
        console.info('testGetValueInt640002 value is: ' + value);
        expect().assertFail();
      } catch (err) {
        console.error('testGetValueInt640002 err msg' + err.message);
        expect(err.message).assertEqual('empty error message');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_GETVALUEINT64_0300
     * @tc.name      : testGetValueInt640003
     * @tc.desc      : Testing GetValueInt64 NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testGetValueInt640003', 0, async (done: Function) => {
      console.info('testGetValueInt640003 START');
      try {
        let value = napitest.getValueInt64RstNull();
        console.info('testGetValueInt640003 value is: ' + value);
        expect().assertFail();
      } catch (err) {
        console.error('testGetValueInt640003 err msg' + err.message);
        expect(err.message).assertEqual('empty error message');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_GETVALUEINT64_0400
     * @tc.name      : testGetValueInt640004
     * @tc.desc      : Testing GetValueInt64 NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testGetValueInt640004', 0, async (done: Function) => {
      console.info('testGetValueInt640004 START');
      try {
        let value = napitest.getValueInt64NotNum();
        console.info('testGetValueInt640004 value is: ' + value);
        expect().assertFail();
      } catch (err) {
        console.error('testGetValueInt640004 err msg' + err.message);
        expect(err.message).assertEqual('empty error message');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_CREATEUINT32_0100
     * @tc.name      : testCreateUInt320001
     * @tc.desc      : Testing CreateInt32 NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testCreateUInt320001', 0, async (done: Function) => {
      console.info('testCreateUInt320001 START');
      try {
        let value = napitest.createAndGetUInt32(32);
        console.info('testCreateUInt320001 value is: ' + value);
        expect(value).assertEqual(32);
      } catch (err) {
        console.error('testCreateUInt320001 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_CREATEINT32_0200
     * @tc.name      : testCreateUInt320002
     * @tc.desc      : Testing CreateInt32 NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testCreateUInt320002', 0, async (done: Function) => {
      console.info('testCreateUInt320002 START');
      try {
        let value = napitest.createUInt32Null();
        console.info('testCreateUInt320002 value is: ' + value);
        expect().assertFail();
      } catch (err) {
        console.error('testCreateUInt320002 err msg' + err.message);
        expect(err.message).assertEqual('empty error message');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_CREATEINT64_0100
     * @tc.name      : testCreateInt640001
     * @tc.desc      : Testing CreateInt64 NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testCreateInt640001', 0, async (done: Function) => {
      console.info('testCreateInt640001 START');
      try {
        let value = napitest.createAndGetInt64(23);
        console.info('testCreateInt640001 value is: ' + value);
        expect(value).assertEqual(23);
      } catch (err) {
        console.error('testCreateInt640001 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_CREATEINT64_0200
     * @tc.name      : testCreateInt640002
     * @tc.desc      : Testing CreateInt64 NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testCreateInt640002', 0, async (done: Function) => {
      console.info('testCreateInt640002 START');
      try {
        let value = napitest.createInt64Null();
        console.info('testCreateInt640002 value is: ' + value);
        expect().assertFail();
      } catch (err) {
        console.error('testCreateInt640002 err msg' + err.message);
        expect(err.message).assertEqual('empty error message');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_CREATEINT64_0100
     * @tc.name      : testCreateDouble0001
     * @tc.desc      : Testing CreateDouble NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testCreateDouble0001', 0, async (done: Function) => {
      console.info('testCreateDouble0001 START');
      try {
        let value = napitest.createDouble(24.67);
        console.info('testCreateDouble0001 value is: ' + value);
        expect(value).assertEqual(24.67);
      } catch (err) {
        console.error('testCreateDouble0001 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_CREATEINT64_0200
     * @tc.name      : testCreateDouble0002
     * @tc.desc      : Testing CreateDouble NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testCreateDouble0002', 0, async (done: Function) => {
      console.info('testCreateDouble0002 START');
      try {
        let value = napitest.createDoubleNull();
        console.info('testCreateDouble0002 value is: ' + value);
        expect().assertFail();
      } catch (err) {
        console.error('testCreateDouble0002 err msg' + err.message);
        expect(err.message).assertEqual('empty error message');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_CREATESTRINGLATIN1_0100
     * @tc.name      : testCreateStringLatin10001
     * @tc.desc      : Testing CreateStringLatin NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testCreateStringLatin10001', 0, async (done: Function) => {
      console.info('testCreateStringLatin10001 START');
      try {
        let value = napitest.createAndGetStringLatin1("tst");
        console.info('testCreateStringLatin10001 value is: ' + value);
        expect(value).assertEqual("tst");
      } catch (err) {
        console.error('testCreateStringLatin10001 err msg' + err.message);
        console.error('testCreateStringLatin10001 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_CREATESTRINGLATIN1_0200
     * @tc.name      : testCreateStringLatin10002
     * @tc.desc      : Testing CreateStringLatin NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testCreateStringLatin10002', 0, async (done: Function) => {
      console.info('testCreateStringLatin10002 START');
      try {
        let value = napitest.createAndGetStringLatin1BufferNull("tst");
        console.info('testCreateStringLatin10002 value is: ' + value);
        expect().assertFail();
      } catch (err) {
        console.error('testCreateStringLatin10002 err msg' + err.message);
        expect(err.message).assertEqual('empty error message');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_CREATESTRINGLATIN1_0300
     * @tc.name      : testCreateStringLatin10003
     * @tc.desc      : Testing CreateStringLatin NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testCreateStringLatin10003', 0, async (done: Function) => {
      console.info('testCreateStringLatin10003 START');
      try {
        let value = napitest.createAndGetStringLatin1ResultNull("tst");
        console.info('testCreateStringLatin10003 value is: ' + value);
        expect().assertFail();
      } catch (err) {
        console.error('testCreateStringLatin10003 err msg' + err.message);
        expect(err.message).assertEqual('empty error message');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_CREATESTRINGUTF16_0100
     * @tc.name      : testCreateStringUtf160001
     * @tc.desc      : Testing CreateStringUtf16 NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testCreateStringUtf160001', 0, async (done: Function) => {
      console.info('testCreateStringUtf160001 START');
      try {
        let value = napitest.createAndGetStringUtf16('he');
        let value1 = napitest.stringUtf16OfCase('abc2r42');
        expect(value).assertEqual('he');
        expect(value1).assertEqual('abc2');
      } catch (err) {
        console.error('testCreateStringUtf160001 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_CREATESTRINGUTF16_0200
     * @tc.name      : testCreateStringUtf160002
     * @tc.desc      : Testing CreateStringUtf16 NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testCreateStringUtf160002', 0, async (done: Function) => {
      console.info('testCreateStringUtf160002 START');
      try {
        console.info('testCreateStringUtf160002 START');
        let valueeEmpty = napitest.createAndGetStringUtf16(' ');
        let value = napitest.createAndGetStringUtf16('中文');
        expect(valueeEmpty).assertEqual(' ');
        expect(value).assertEqual('中文');
      } catch (err) {
        console.error('testCreateStringUtf160002 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_CREATESTRINGUTF16_0300
     * @tc.name      : testCreateStringUtf160003
     * @tc.desc      : Testing CreateStringUtf16 NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testCreateStringUtf160003', 0, async (done: Function) => {
      console.info('testCreateStringUtf160003 START');
      try {
        console.info('testCreateStringUtf160003 START');
        let value = napitest.CreateAndGetStringUtf16BufferNull();
        console.info('testCreateStringUtf160003 value is: ' + value);
        expect().assertFail();
      } catch (err) {
        console.error('testCreateStringUtf160003 err msg' + err.message);
        expect(err.message).assertContain('NAPI_INVALID_ARG');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_CREATESTRINGUTF16_0400
     * @tc.name      : testCreateStringUtf160004
     * @tc.desc      : Testing CreateStringUtf16 NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testCreateStringUtf160004', 0, async (done: Function) => {
      console.info('testCreateStringUtf160004 START');
      try {
        console.info('testCreateStringUtf160004 START');
        let value = napitest.CreateAndGetStringUtf16ResultNull();
        console.info('testCreateStringUtf160004 value is: ' + value);
        expect().assertFail();
      } catch (err) {
        console.error('testCreateStringUtf160004 err msg' + err.message);
        expect(err.message).assertContain('NAPI_INVALID_ARG');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_CREATESTRINGUTF16_0500
     * @tc.name      : testCreateStringUtf160005
     * @tc.desc      : Testing CreateStringUtf16 NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testCreateStringUtf160005', 0, async (done: Function) => {
      console.info('testCreateStringUtf160005 START');
      try {
        console.info('testCreateStringUtf160005 START');
        let value = napitest.CreateAndGetStringUtf16Exceed();
        console.info('testCreateStringUtf160005 value is: ' + value);
        expect().assertFail();
      } catch (err) {
        console.error('testCreateStringUtf160005 err msg' + err.message);
        expect(err.message).assertContain('NAPI_INVALID_ARG');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_GETARRAYLENGTH_0100
     * @tc.name      : testGetArrayLength0001
     * @tc.desc      : Testing GetArrayLength NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testGetArrayLength0001', 0, async (done: Function) => {
      console.info('testGetArrayLength0001 START');
      try {
        let array = [1, 2];
        let value = napitest.createArrayAndGetLength(array);
        console.info('testGetArrayLength0001 value is: ' + value);
        let obj = JSON.stringify(value);
        expect(obj).assertEqual('[1,2]');
      } catch (err) {
        console.error('testGetArrayLength0001 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_GETARRAYLENGTH_0200
     * @tc.name      : testGetArrayLength0002
     * @tc.desc      : Testing GetArrayLength NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testGetArrayLength0002', 0, async (done: Function) => {
      console.info('testGetArrayLength0002 START');
      try {
        let array = [1, 2];
        let value = napitest.getArrayLengthResultNull();
        console.info('testGetArrayLength0002 value is: ' + value);
        let obj = JSON.stringify(value);
        expect().assertFail();
      } catch (err) {
        console.error('testGetArrayLength0002 err msg' + err.message);
        expect(err.message).assertContain('NAPI_INVALID_ARG');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_GETARRAYLENGTH_0300
     * @tc.name      : testGetArrayLength0003
     * @tc.desc      : Testing GetArrayLength NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testGetArrayLength0003', 0, async (done: Function) => {
      console.info('testGetArrayLength0003 START');
      try {
        let array = [1, 2];
        let value = napitest.getArrayLengthValueNull();
        console.info('testGetArrayLength0003 value is: ' + value);
        let obj = JSON.stringify(value);
        expect().assertFail();
      } catch (err) {
        console.error('testGetArrayLength0003 err msg' + err.message);
        expect(err.message).assertContain('NAPI_INVALID_ARG');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_GETARRAYLENGTH_0400
     * @tc.name      : testGetArrayLength0004
     * @tc.desc      : Testing GetArrayLength NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testGetArrayLength0004', 0, async (done: Function) => {
      console.info('testGetArrayLength0004 START');
      try {
        let array = [1, 2];
        let value = napitest.getArrayLengthNotArray();
        console.info('testGetArrayLength0004 value is: ' + value);
        let obj = JSON.stringify(value);
        expect().assertFail();
      } catch (err) {
        console.error('testGetArrayLength0004 err msg' + err.message);
        expect(err.message).assertContain('NAPI_INVALID_ARG');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_GETARRAYLENGTH_0100
     * @tc.name      : testGetArrayBufferInfo0001
     * @tc.desc      : Testing GetArrayBufferInfo NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testGetArrayBufferInfo0001', 0, async (done: Function) => {
      console.info('testGetArrayBufferInfo0001 START');
      try {
        let value = napitest.naiGetArrayBufferInfo();
        console.info('testGetArrayBufferInfo0001 value is: ' + value);
        expect(value).assertEqual(1024);
      } catch (err) {
        console.error('testGetArrayBufferInfo0001 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_GETARRAYLENGTH_0200
     * @tc.name      : testGetArrayBufferInfo0002
     * @tc.desc      : Testing GetArrayBufferInfo NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testGetArrayBufferInfo0002', 0, async (done: Function) => {
      console.info('testGetArrayBufferInfo0002 START');
      try {
        let value = napitest.getArrayBufferInfoBufferNull();
        console.info('testGetArrayBufferInfo0001 value is: ' + value);
        expect().assertFail();
      } catch (err) {
        console.error('testGetArrayBufferInfo0002 err msg' + err.message);
        expect(err.message).assertContain('NAPI_INVALID_ARG');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_GETARRAYLENGTH_0300
     * @tc.name      : testGetArrayBufferInfo0003
     * @tc.desc      : Testing GetArrayBufferInfo NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testGetArrayBufferInfo0003', 0, async (done: Function) => {
      console.info('testGetArrayBufferInfo0003 START');
      try {
        let value = napitest.getArrayBufferInfoLengthNull();
        console.info('testGetArrayBufferInfo0003 value is: ' + value);
        expect().assertFail();
      } catch (err) {
        console.error('testGetArrayBufferInfo0003 err msg' + err.message);
        expect(err.message).assertContain('NAPI_INVALID_ARG');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_GETARRAYLENGTH_0400
     * @tc.name      : testGetArrayBufferInfo0004
     * @tc.desc      : Testing GetArrayBufferInfo NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testGetArrayBufferInfo0004', 0, async (done: Function) => {
      console.info('testGetArrayBufferInfo0004 START');
      try {
        let value = napitest.getArrayBufferInfoNotObj();
        console.info('testGetArrayBufferInfo0004 value is: ' + value);
        expect().assertFail();
      } catch (err) {
        console.error('testGetArrayBufferInfo0004 err msg' + err.message);
        expect(err.message).assertContain('NAPI_INVALID_ARG');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_TESTGETPROTOTYPE_0100
     * @tc.name      : testGetPrototype0001
     * @tc.desc      : Testing GetPrototype NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testGetPrototype0001', 0, async (done: Function) => {
      console.info('testGetPrototype0001 START');
      try {
        let value = napitest.getPrototype();
        console.info('testGetPrototype0001 value is: ' + value);
        expect(value instanceof Object).assertTrue();
      } catch (err) {
        console.error('testGetPrototype0001 err msg' + err.message);
        console.error('testGetPrototype0001 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_TESTGETPROTOTYPE_0200
     * @tc.name      : testGetPrototype0002
     * @tc.desc      : Testing GetPrototype NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testGetPrototype0002', 0, async (done: Function) => {
      console.info('testGetPrototype0002 START');
      try {
        let value = napitest.getPrototypeObjectNull();
        console.info('testGetPrototype0002 value is: ' + value);
        expect().assertFail();
      } catch (err) {
        console.error('testGetPrototype0002 err msg' + err.message);
        expect(err.message).assertEqual('empty error message');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_TESTGETPROTOTYPE_0300
     * @tc.name      : testGetPrototype0003
     * @tc.desc      : Testing GetPrototype NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testGetPrototype0003', 0, async (done: Function) => {
      console.info('testGetPrototype0003 START');
      try {
        let value = napitest.getPrototypeResultNull();
        console.info('testGetPrototype0003 value is: ' + value);
        expect().assertFail();
      } catch (err) {
        console.error('testGetPrototype0003 err msg' + err.message);
        expect(err.message).assertEqual('empty error message');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_TESTGETPROTOTYPE_0400
     * @tc.name      : testGetPrototype0004
     * @tc.desc      : Testing GetPrototype NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testGetPrototype0004', 0, async (done: Function) => {
      console.info('testGetPrototype0004 START');
      try {
        let value = napitest.getPrototypeNotObj();
        console.info('testGetPrototype0004 value is: ' + value);
        expect().assertFail();
      } catch (err) {
        console.error('testGetPrototype0004 err msg' + err.message);
        expect(err.message).assertEqual('empty error message');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_GETTYPEDARRAYINFO_0100
     * @tc.name      : testGetTypedArrayInfo0001
     * @tc.desc      : Testing GetTypedArrayInfo NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testGetTypedArrayInfo0001', 0, async (done: Function) => {
      console.info('testGetTypedArrayInfo0001 START');
      try {
        let value = napitest.getTypedArrayInfo();
        console.info('testGetTypedArrayInfo0001 value is: ' + value);
        expect(value).assertEqual(0);
      } catch (err) {
        console.error('testGetTypedArrayInfo0001 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_GETTYPEDARRAYINFO_0200
     * @tc.name      : testGetTypedArrayInfo0002
     * @tc.desc      : Testing GetTypedArrayInfo NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testGetTypedArrayInfo0002', 0, async (done: Function) => {
      console.info('testGetTypedArrayInfo0002 START');
      try {
        let value = napitest.getTypedArrayInfoNull();
        console.info('testGetTypedArrayInfo0002 value is: ' + value);
        expect().assertFail();
      } catch (err) {
        console.error('testGetTypedArrayInfo0002 err msg' + err.message);
        expect(err.message).assertEqual('empty error message');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_GETDATAVIEWINFO_0100
     * @tc.name      : testGetDataViewInfo0001
     * @tc.desc      : Testing GetDataViewInfo NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testGetDataViewInfo0001', 0, async (done: Function) => {
      console.info('testGetDataViewInfo0001 START');
      try {
        let buffer = new ArrayBuffer(2);
        let dView = new DataView(buffer).setInt16(0, 256, true);
        let value = napitest.getDataViewInfo(dView);
        console.info('testGetDataViewInfo0001 value is: ' + value);
        expect(value).assertEqual(0);
      } catch (err) {
        console.error('testGetDataViewInfo0001 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_GETDATAVIEWINFO_0200
     * @tc.name      : testGetDataViewInfo0002
     * @tc.desc      : Testing GetDataViewInfo NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testGetDataViewInfo0002', 0, async (done: Function) => {
      console.info('testGetDataViewInfo0002 START');
      try {
        let value = napitest.getDataViewInfoNull();
        console.info('testGetDataViewInfo0002 value is: ' + value);
        expect().assertFail();
      } catch (err) {
        console.error('testGetDataViewInfo0002 err msg' + err.message);
        expect(err.message).assertContain('NAPI_INVALID_ARG');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_GETDATAVIEWINFO_0300
     * @tc.name      : testGetDataViewInfo0003
     * @tc.desc      : Testing GetDataViewInfo NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testGetDataViewInfo0003', 0, async (done: Function) => {
      console.info('testGetDataViewInfo0003 START');
      try {
        let buffer = new ArrayBuffer(2);
        let dView = new DataView(buffer).setInt16(0, 256, true);
        let value = napitest.getDataViewInfoNotObj();
        console.info('testGetDataViewInfo0003 value is: ' + value);
        expect(value).assertEqual(0);
      } catch (err) {
        console.error('testGetDataViewInfo0003 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_GETVALUEBOOL_0100
     * @tc.name      : testGetValueBool0001
     * @tc.desc      : Testing GetValueBool NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testGetValueBool0001', 0, async (done: Function) => {
      console.info('testGetValueBool0001 START');
      try {
        let value = napitest.getValueBool(false);
        console.info('testGetValueBool0001 value is: ' + value);
        expect(value).assertFalse();
      } catch (err) {
        console.error('testGetValueBool0001 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_GETVALUEBOOL_0200
     * @tc.name      : testGetValueBool0002
     * @tc.desc      : Testing GetValueBool NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testGetValueBool0002', 0, async (done: Function) => {
      console.info('testGetValueBool0002 START');
      try {
        let value = napitest.getValueBool(true);
        console.info('testGetValueBool0002 value is: ' + value);
        expect(value).assertTrue();
      } catch (err) {
        console.error('testGetValueBool0002 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_GETVALUEBOOL_0300
     * @tc.name      : testGetValueBool0003
     * @tc.desc      : Testing GetValueBool NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testGetValueBool0003', 0, async (done: Function) => {
      console.info('testGetValueBool0003 START');
      try {
        let value = napitest.getValueBoolValueNull();
        console.info('testGetValueBool0003 value is: ' + value);
        expect().assertFail();
      } catch (err) {
        console.error('testGetValueBool0003 err msg' + err.message);
        console.error('testGetValueBool0003 err msg' + err.message);
        expect(err.message).assertEqual('empty error message');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_GETVALUEBOOL_0400
     * @tc.name      : testGetValueBool0004
     * @tc.desc      : Testing GetValueBool NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testGetValueBool0004', 0, async (done: Function) => {
      console.info('testGetValueBool0004 START');
      try {
        let value = napitest.getValueBoolResultNull();
        console.info('testGetValueBool0004 value is: ' + value);
        expect().assertFail();
      } catch (err) {
        console.error('testGetValueBool0004 err msg' + err.message);
        expect(err.message).assertEqual('empty error message');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_GETBOOLEAN_0100
     * @tc.name      : testGetBoolean0001
     * @tc.desc      : Testing GetBoolean NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testGetBoolean0001', 0, async (done: Function) => {
      console.info('testGetBoolean0001 START');
      try {
        let value = napitest.getBoolean(false);
        console.info('testGetBoolean0001 value is: ' + value);
        expect(value).assertFalse();
      } catch (err) {
        console.error('testGetBoolean0001 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_GETBOOLEAN_0200
     * @tc.name      : testGetBoolean0002
     * @tc.desc      : Testing GetBoolean NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testGetBoolean0002', 0, async (done: Function) => {
      console.info('testGetBoolean0002 START');
      try {
        let value = napitest.getBoolean(true);
        console.info('testGetBoolean0002 value is: ' + value);
        expect(value).assertTrue();
      } catch (err) {
        console.error('testGetBoolean0002 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_GETBOOLEAN_0300
     * @tc.name      : testGetBoolean0003
     * @tc.desc      : Testing GetBoolean NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testGetBoolean0003', 0, async (done: Function) => {
      console.info('testGetBoolean0003 START');
      try {
        let value = napitest.getBooleanNull();
        console.info('testGetBoolean0003 value is: ' + value);
        expect().assertFail();
      } catch (err) {
        console.error('testGetBoolean0003 err msg' + err.message);
        expect(err.message).assertEqual('empty error message');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_GETVALUEBOOL_0400
     * @tc.name      : testGetValueBool0004
     * @tc.desc      : Testing GetValueBool NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testGetValueBool0004', 0, async (done: Function) => {
      console.info('testGetValueBool0004 START');
      try {
        let value = napitest.getValueNotBool();
        console.info('testGetValueBool0004 value is: ' + value);
        expect().assertFail();
      } catch (err) {
        console.error('testGetValueBool0004 err msg' + err.message);
        expect(err.message).assertEqual('empty error message');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_GETVALUEDOUBLE_0100
     * @tc.name      : testGetValueDouble0001
     * @tc.desc      : Testing GetValueDouble NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testGetValueDouble0001', 0, async (done: Function) => {
      console.info('testGetValueDouble0001 START');
      try {
        let value = napitest.getValueDouble(24.5);
        console.info('testGetValueDouble0001 value is: ' + value);
        expect(value === 24.5).assertTrue();
      } catch (err) {
        console.error('testGetValueDouble0001 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_GETVALUEDOUBLE_0200
     * @tc.name      : testGetValueDouble0002
     * @tc.desc      : Testing GetValueDouble NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testGetValueDouble0002', 0, async (done: Function) => {
      console.info('testGetValueDouble0002 START');
      try {
        let value = napitest.getValueDoubleValueNull();
        console.info('testGetValueDouble0002 value is: ' + value);
        expect().assertFail();
      } catch (err) {
        console.error('testGetValueDouble0002 err msg' + err.message);
        expect(err.message).assertEqual('empty error message');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_GETVALUEDOUBLE_0300
     * @tc.name      : testGetValueDouble0003
     * @tc.desc      : Testing GetValueDouble NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testGetValueDouble0003', 0, async (done: Function) => {
      console.info('testGetValueDouble0003 START');
      try {
        let value = napitest.getValueDoubleResultNull();
        console.info('testGetValueDouble0003 value is: ' + value);
        expect().assertFail();
      } catch (err) {
        console.error('testGetValueDouble0003 err msg' + err.message);
        expect(err.message).assertEqual('empty error message');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_GETVALUEDOUBLE_0400
     * @tc.name      : testGetValueDouble0004
     * @tc.desc      : Testing GetValueDouble NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testGetValueDouble0004', 0, async (done: Function) => {
      console.info('testGetValueDouble0004 START');
      try {
        let value = napitest.getValueDoubleNotNum();
        console.info('testGetValueDouble0004 value is: ' + value);
        expect().assertFail();
      } catch (err) {
        console.error('testGetValueDouble0004 err msg' + err.message);
        expect(err.message).assertEqual('empty error message');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_GETVALUEEXTERNAL_0100
     * @tc.name      : testGetValueExternal0001
     * @tc.desc      : Testing GetValueExternal NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testGetValueExternal0001', 0, async (done: Function) => {
      console.info('testGetValueExternal0001 START');
      try {
        let value = napitest.getValueExternal();
        console.info('testGetValueExternal0001 value is: ' + value);
        expect(value).assertEqual(0);
      } catch (err) {
        console.error('testGetValueExternal0001 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_GETVALUEEXTERNAL_0200
     * @tc.name      : testGetValueExternal0002
     * @tc.desc      : Testing GetValueExternal NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testGetValueExternal0002', 0, async (done: Function) => {
      console.info('testGetValueExternal0002 START');
      try {
        let value = napitest.getValueExternalValueNull();
        console.info('testGetValueExternal0002 value is: ' + value);
        expect().assertFail();
      } catch (err) {
        console.error('testGetValueExternal0002 err msg' + err.message);
        expect(err.message).assertEqual('assertion (tempExternal == testStr) failed: napi_get_value_external true');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_GETVALUEEXTERNAL_0300
     * @tc.name      : testGetValueExternal0003
     * @tc.desc      : Testing GetValueExternal NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testGetValueExternal0003', 0, async (done: Function) => {
      console.info('testGetValueExternal0003 START');
      try {
        let value = napitest.getValueExternalResultNull();
        console.info('testGetValueExternal0003 value is: ' + value);
        expect().assertFail();
      } catch (err) {
        console.error('testGetValueExternal0003 err msg' + err.message);
        expect(err.message).assertEqual('assertion (tempExternal == testStr) failed: napi_get_value_external true');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_GETVALUEEXTERNAL_0400
     * @tc.name      : testGetValueExternal0004
     * @tc.desc      : Testing GetValueExternal NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testGetValueExternal0004', 0, async (done: Function) => {
      console.info('testGetValueExternal0004 START');
      try {
        let value = napitest.getValueExternalNotPtr();
        console.info('testGetValueExternal0004 value is: ' + value);
        expect(value).assertEqual(0);
      } catch (err) {
        console.error('testGetValueExternal0004 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_GETVALUESTRINGLATIN1_0100
     * @tc.name      : testGetValueStringLatin10001
     * @tc.desc      : Testing GetValueStringLatin1 NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testGetValueStringLatin10001', 0, async (done: Function) => {
      console.info('testGetValueStringLatin10001 START');
      try {
        let value = napitest.getValueStringLatin1("tst");
        console.info('testGetValueStringLatin10001 value is: ' + value);
        expect(value).assertEqual("tst");
      } catch (err) {
        console.error('testGetValueStringLatin10001 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_GETVALUESTRINGLATIN1_0200
     * @tc.name      : testGetValueStringLatin10002
     * @tc.desc      : Testing GetValueStringLatin1 NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testGetValueStringLatin10002', 0, async (done: Function) => {
      console.info('testGetValueStringLatin10002 START');
      try {
        let value = napitest.getValueStringLatin1Null();
        console.info('testGetValueStringLatin10002 value is: ' + value);
        expect().assertFail();
      } catch (err) {
        console.error('testGetValueStringLatin10002 err msg' + err.message);
        expect(err.message).assertEqual('empty error message');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_GETVALUESTRINGUTF8_0100
     * @tc.name      : testGetValueStringUtf80001
     * @tc.desc      : Testing GetValueStringUtf8 NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testGetValueStringUtf80001', 0, async (done: Function) => {
      console.info('testGetValueStringUtf80001 START');
      try {
        let value = napitest.getValueStringUtf8("he");
        console.info('testGetValueStringUtf80001 value is: ' + value);
        expect(value).assertEqual("he");
      } catch (err) {
        console.error('testGetValueStringUtf80001 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_GETVALUESTRINGUTF8_0200
     * @tc.name      : testGetValueStringUtf80002
     * @tc.desc      : Testing GetValueStringUtf8 NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testGetValueStringUtf80002', 0, async (done: Function) => {
      console.info('testGetValueStringUtf80002 START');
      try {
        let value = napitest.getValueStringUtf8Null();
        console.info('testGetValueStringUtf80002 value is: ' + value);
        expect().assertFail();
      } catch (err) {
        console.error('testGetValueStringUtf80002 err msg' + err.message);
        expect(err.message).assertContain('NAPI_INVALID_ARG');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_GETVALUESTRINGUTF8_0300
     * @tc.name      : testGetValueStringUtf80003
     * @tc.desc      : Testing GetValueStringUtf8 NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testGetValueStringUtf80003', 0, async (done: Function) => {
      console.info('testGetValueStringUtf80003 START');
      try {
        let value = napitest.getValueStringUtf8NotStr();
        console.info('testGetValueStringUtf80003 value is: ' + value);
        expect().assertFail();
      } catch (err) {
        console.error('testGetValueStringUtf80003 err msg' + err.message);
        expect(err.message).assertEqual('empty error message');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_GETVALUESTRINGUTF16_0100
     * @tc.name      : testGetValueStringUtf160001
     * @tc.desc      : Testing GetValueStringUtf16 NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testGetValueStringUtf160001', 0, async (done: Function) => {
      console.info('testGetValueStringUtf160001 START');
      try {
        let value = napitest.getValueStringUtf16("he");
        console.info('testGetValueStringUtf160001 value is: ' + value);
        expect(value).assertEqual("he");
      } catch (err) {
        console.error('testGetValueStringUtf160001 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_GETVALUESTRINGUTF16_0200
     * @tc.name      : testGetValueStringUtf160002
     * @tc.desc      : Testing GetValueStringUtf16 NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testGetValueStringUtf160002', 0, async (done: Function) => {
      console.info('testGetValueStringUtf160002 START');
      try {
        let value = napitest.getValueStringUtf16Null();
        console.info('testGetValueStringUtf160002 value is: ' + value);
        expect().assertFail();
      } catch (err) {
        console.error('testGetValueStringUtf160002 err msg' + err.message);
        expect(err.message).assertEqual('empty error message');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_GETVALUESTRINGUTF16_0300
     * @tc.name      : testGetValueStringUtf160003
     * @tc.desc      : Testing GetValueStringUtf16 NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testGetValueStringUtf160003', 0, async (done: Function) => {
      console.info('testGetValueStringUtf160003 START');
      try {
        let value = napitest.getValueStringUtf16NotStr();
        console.info('testGetValueStringUtf160003 value is: ' + value);
        expect().assertFail();
      } catch (err) {
        console.error('testGetValueStringUtf160003 err msg' + err.message);
        expect(err.message).assertEqual('empty error message');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_GETVALUEUINT32_0100
     * @tc.name      : testGetValueUint320001
     * @tc.desc      : Testing GetValueUint32 NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testGetValueUint320001', 0, async (done: Function) => {
      console.info('testGetValueUint320001 START');
      try {
        let value = napitest.getValueUint32(12);
        console.info('testGetValueUint320001 value is: ' + value);
        expect(value).assertEqual(12);
      } catch (err) {
        console.error('testGetValueUint320001 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_GETVALUEUINT32_0200
     * @tc.name      : testGetValueUint320002
     * @tc.desc      : Testing GetValueUint32 NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testGetValueUint320002', 0, async (done: Function) => {
      console.info('testGetValueUint320002 START');
      try {
        let value = napitest.getValueUint32Null();
        console.info('testGetValueUint320002 value is: ' + value);
        expect().assertFail();
      } catch (err) {
        console.error('testGetValueUint320002 err msg' + err.message);
        expect(err.message).assertEqual('empty error message');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_GETVALUEUINT32_0300
     * @tc.name      : testGetValueUint320003
     * @tc.desc      : Testing GetValueUint32 NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testGetValueUint320003', 0, async (done: Function) => {
      console.info('testGetValueUint320003 START');
      try {
        let value = napitest.getValueUint32NotNum();
        console.info('testGetValueUint320003 value is: ' + value);
        expect().assertFail();
      } catch (err) {
        console.error('testGetValueUint320003 err msg' + err.message);
        expect(err.message).assertEqual('empty error message');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_GETGLOBAL_0100
     * @tc.name      : testGetGlobal0001
     * @tc.desc      : Testing GetGlobal NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testGetGlobal0001', 0, async (done: Function) => {
      console.info('testGetGlobal0001 START');
      try {
        let value = napitest.getGlobal();
        console.info('testGetGlobal0001 value is: ' + value);
        expect(value === undefined).assertTrue();
      } catch (err) {
        console.error('testGetGlobal0001 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_GETNULL_0100
     * @tc.name      : testGetNull0001
     * @tc.desc      : Testing GetNull NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testGetNull0001', 0, async (done: Function) => {
      console.info('testGetNull0001 START');
      try {
        let value = napitest.getNull();
        console.info('testGetNull0001 value is: ' + value);
        expect(value).assertEqual(0);
      } catch (err) {
        console.error('testGetNull0001 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_GETUNDEFINED_0100
     * @tc.name      : testGetUndefined0001
     * @tc.desc      : Testing GetUndefined NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testGetUndefined0001', 0, async (done: Function) => {
      console.info('testGetUndefined0001 START');
      try {
        let value = napitest.getUndefined();
        console.info('testGetUndefined0001 value is: ' + value);
        expect(value).assertEqual(0);
      } catch (err) {
        console.error('testGetUndefined0001 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_COERCETOBOOL_0100
     * @tc.name      : testCoerceToBool0001
     * @tc.desc      : Testing CoerceToBool NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testCoerceToBool0001', 0, async (done: Function) => {
      console.info('testCoerceToBool0001 START');
      try {
        let value = napitest.coerceToBool(0);
        console.info('testCoerceToBool0001 value is: ' + value);
        expect(value).assertFalse();
      } catch (err) {
        console.error('testCoerceToBool0001 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_COERCETOBOOL_0200
     * @tc.name      : testCoerceToBool0002
     * @tc.desc      : Testing CoerceToBool NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testCoerceToBool0002', 0, async (done: Function) => {
      console.info('testCoerceToBool0002 START');
      try {
        let value = napitest.coerceToBool(1);
        console.info('testCoerceToBool0002 value is: ' + value);
        expect(value).assertTrue();
      } catch (err) {
        console.error('testCoerceToBool0002 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_COERCETOBOOL_0300
     * @tc.name      : testCoerceToBool0003
     * @tc.desc      : Testing CoerceToBool NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testCoerceToBool0003', 0, async (done: Function) => {
      console.info('testCoerceToBool0003 START');
      try {
        let value = napitest.coerceToBool('');
        console.info('testCoerceToBool0003 value is: ' + value);
        expect(value).assertFalse();
      } catch (err) {
        console.error('testCoerceToBool0003 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_COERCETOBOOL_0400
     * @tc.name      : testCoerceToBool0004
     * @tc.desc      : Testing CoerceToBool NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testCoerceToBool0004', 0, async (done: Function) => {
      console.info('testCoerceToBool0004 START');
      try {
        let value = napitest.coerceToBool('1');
        console.info('testCoerceToBool0004 value is: ' + value);
        expect(value).assertTrue();
      } catch (err) {
        console.error('testCoerceToBool0004 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_COERCETOBOOL_0500
     * @tc.name      : testCoerceToBool0005
     * @tc.desc      : Testing CoerceToBool NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testCoerceToBool0005', 0, async (done: Function) => {
      console.info('testCoerceToBool0005 START');
      try {
        let value = napitest.coerceToBoolValueNull();
        console.info('testCoerceToBool0005 value is: ' + value);
        expect().assertFail();
      } catch (err) {
        console.error('testCoerceToBool0005 err msg' + err.message);
        expect(err.message).assertEqual('empty error message');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_COERCETOBOOL_0600
     * @tc.name      : testCoerceToBool0006
     * @tc.desc      : Testing CoerceToBool NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testCoerceToBool0006', 0, async (done: Function) => {
      console.info('testCoerceToBool0006 START');
      try {
        let value = napitest.coerceToBoolResultNull();
        console.info('testCoerceToBool0006 value is: ' + value);
        expect().assertFail();
      } catch (err) {
        console.error('testCoerceToBool0006 err msg' + err.message);
        expect(err.message).assertEqual('empty error message');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_COERCETONUMBER_0100
     * @tc.name      : testCoerceToNumber0001
     * @tc.desc      : Testing CoerceToNumber NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testCoerceToNumber0001', 0, async (done: Function) => {
      console.info('testCoerceToNumber0001 START');
      try {
        let value = napitest.coerceToNumber(12);
        console.info('testCoerceToNumber0001 value is: ' + value);
        expect(value).assertEqual(12);
      } catch (err) {
        console.error('testCoerceToNumber0001 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_COERCETONUMBER_0200
     * @tc.name      : testCoerceToNumber0002
     * @tc.desc      : Testing CoerceToNumber NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testCoerceToNumber0002', 0, async (done: Function) => {
      console.info('testCoerceToNumber0002 START');
      try {
        let value = napitest.coerceToNumber('12');
        console.info('testCoerceToNumber0002 value is: ' + value);
        expect(value).assertEqual(12);
      } catch (err) {
        console.error('testCoerceToNumber0002 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_COERCETONUMBER_0300
     * @tc.name      : testCoerceToNumber0003
     * @tc.desc      : Testing CoerceToNumber NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testCoerceToNumber0003', 0, async (done: Function) => {
      console.info('testCoerceToNumber0003 START');
      try {
        let value = napitest.coerceToNumber(true);
        console.info('testCoerceToNumber0003 value is: ' + value);
        expect(value).assertEqual(1);
      } catch (err) {
        console.error('testCoerceToNumber0003 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_COERCETONUMBER_0400
     * @tc.name      : testCoerceToNumber0004
     * @tc.desc      : Testing CoerceToNumber NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testCoerceToNumber0004', 0, async (done: Function) => {
      console.info('testCoerceToNumber0004 START');
      try {
        let value = napitest.coerceToNumber(false);
        console.info('testCoerceToNumber0004 value is: ' + value);
        expect(value).assertEqual(0);
      } catch (err) {
        console.error('testCoerceToNumber0004 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_COERCETONUMBER_0500
     * @tc.name      : testCoerceToNumber0005
     * @tc.desc      : Testing CoerceToNumber NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testCoerceToNumber0005', 0, async (done: Function) => {
      console.info('testCoerceToNumber0005 START');
      try {
        let value = napitest.coerceToNumberValueNull();
        console.info('testCoerceToNumber0005 value is: ' + value);
        expect().assertFail();
      } catch (err) {
        console.error('testCoerceToNumber0005 err msg' + err.message);
        expect(err.message).assertEqual('empty error message');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_COERCETONUMBER_0600
     * @tc.name      : testCoerceToNumber0006
     * @tc.desc      : Testing CoerceToNumber NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testCoerceToNumber0006', 0, async (done: Function) => {
      console.info('testCoerceToNumber0006 START');
      try {
        let value = napitest.coerceToNumberRstNull();
        console.info('testCoerceToNumber0006 value is: ' + value);
        expect().assertFail();
      } catch (err) {
        console.error('testCoerceToNumber0006 err msg' + err.message);
        expect(err.message).assertEqual('empty error message');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_COERCETOOBJECT_0100
     * @tc.name      : testCoerceToObject0001
     * @tc.desc      : Testing CoerceToObject NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testCoerceToObject0001', 0, async (done: Function) => {
      console.info('testCoerceToObject0001 START');
      try {
        let value = napitest.coerceToObject([2, 3]);
        console.info('testCoerceToObject0001 value is: ' + value);
        let obj = JSON.stringify(value);
        expect(obj).assertEqual('[2,3]');
      } catch (err) {
        console.error('testCoerceToObject0001 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_COERCETOOBJECT_0200
     * @tc.name      : testCoerceToObject0002
     * @tc.desc      : Testing CoerceToObject NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testCoerceToObject0002', 0, async (done: Function) => {
      console.info('testCoerceToObject0002 START');
      try {
        let value = napitest.coerceToObject(true);
        console.info('testCoerceToObject0002 value is: ' + value);
        let obj = JSON.stringify(value);
        expect(obj).assertEqual('true');
      } catch (err) {
        console.error('testCoerceToObject0002 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_COERCETOOBJECT_0300
     * @tc.name      : testCoerceToObject0003
     * @tc.desc      : Testing CoerceToObject NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testCoerceToObject0003', 0, async (done: Function) => {
      console.info('testCoerceToObject0003 START');
      try {
        let value = napitest.coerceToObject(10);
        console.info('testCoerceToObject0003 value is: ' + value);
        let obj = JSON.stringify(value);
        expect(obj).assertEqual('10');
      } catch (err) {
        console.error('testCoerceToObject0003 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_COERCETOOBJECT_0400
     * @tc.name      : testCoerceToObject0004
     * @tc.desc      : Testing CoerceToObject NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testCoerceToObject0004', 0, async (done: Function) => {
      console.info('testCoerceToObject0004 START');
      try {
        let value = napitest.coerceToObject(undefined);
        console.info('testCoerceToObject0004 value is: ' + value);
        expect(value).assertEqual(undefined);
      } catch (err) {
        console.error('testCoerceToObject0004 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_COERCETOOBJECT_0500
     * @tc.name      : testCoerceToObject0005
     * @tc.desc      : Testing CoerceToObject NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testCoerceToObject0005', 0, async (done: Function) => {
      console.info('testCoerceToObject0005 START');
      try {
        var sym0 = Symbol();
        let value = napitest.coerceToObject(sym0);
        console.info('testCoerceToObject0005 value is: ' + value);
        let obj = JSON.stringify(value);
        expect().assertFail();
      } catch (err) {
        console.error('testCoerceToObject0005 err msg' + err.message);
        expect(err.message).assertEqual('Cannot convert a illegal value to a String');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_COERCETOOBJECT_0600
     * @tc.name      : testCoerceToObject0006
     * @tc.desc      : Testing CoerceToObject NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testCoerceToObject0006', 0, async (done: Function) => {
      console.info('testCoerceToObject0006 START');
      try {
        let bigNum = BigInt(12345678901234567890);
        let value = napitest.coerceToObject(bigNum);
        console.info('testCoerceToObject0006 value is: ' + value);
        let obj = JSON.stringify(value);
        expect().assertFail();
      } catch (err) {
        console.error('testCoerceToObject0006 err msg' + err.message);
        expect(err.message).assertEqual('cannot serialize a BigInt');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_COERCETOOBJECT_0700
     * @tc.name      : testCoerceToObject0007
     * @tc.desc      : Testing CoerceToObject NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testCoerceToObject0007', 0, async (done: Function) => {
      console.info('testCoerceToObject0007 START');
      try {
        let value = napitest.coerceToObject(null);
        console.info('testCoerceToObject0007 value is: ' + value);
        expect(value).assertEqual(undefined);
      } catch (err) {
        console.error('testCoerceToObject0007 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_COERCETOSTRING_0100
     * @tc.name      : testCoerceToString0001
     * @tc.desc      : Testing CoerceToString NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testCoerceToString0001', 0, async (done: Function) => {
      console.info('testCoerceToString0001 START');
      try {
        let value = napitest.coerceToString(123);
        console.info('testCoerceToString0001 value is: ' + value);
        let obj = JSON.stringify(value);
        expect(value).assertEqual('123');
      } catch (err) {
        console.error('testCoerceToString0001 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_COERCETOSTRING_0200
     * @tc.name      : testCoerceToString0002
     * @tc.desc      : Testing CoerceToString NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testCoerceToString0002', 0, async (done: Function) => {
      console.info('testCoerceToString0002 START');
      try {
        let value = napitest.coerceToString(undefined);
        console.info('testCoerceToString0002 value is: ' + value);
        let obj = JSON.stringify(value);
        expect(value).assertEqual('undefined');
      } catch (err) {
        console.error('testCoerceToString0002 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_COERCETOSTRING_0300
     * @tc.name      : testCoerceToString0003
     * @tc.desc      : Testing CoerceToString NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testCoerceToString0003', 0, async (done: Function) => {
      console.info('testCoerceToString0003 START');
      try {
        let value = napitest.coerceToString(null);
        console.info('testCoerceToString0003 value is: ' + value);
        let obj = JSON.stringify(value);
        expect(value).assertEqual('null');
      } catch (err) {
        console.error('testCoerceToString0003 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_COERCETOSTRING_0400
     * @tc.name      : testCoerceToString0004
     * @tc.desc      : Testing CoerceToString NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testCoerceToString0004', 0, async (done: Function) => {
      console.info('testCoerceToString0004 START');
      try {
        let value = napitest.coerceToString(true);
        console.info('testCoerceToString0004 value is: ' + value);
        let obj = JSON.stringify(value);
        expect(value).assertEqual('true');
      } catch (err) {
        console.error('testCoerceToString0004 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_COERCETOSTRING_0500
     * @tc.name      : testCoerceToString0005
     * @tc.desc      : Testing CoerceToString NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testCoerceToString0005', 0, async (done: Function) => {
      console.info('testCoerceToString0005 START');
      try {
        let value = napitest.coerceToString(false);
        console.info('testCoerceToString0005 value is: ' + value);
        let obj = JSON.stringify(value);
        expect(value).assertEqual('false');
      } catch (err) {
        console.error('testCoerceToString0005 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_COERCETOSTRING_0600
     * @tc.name      : testCoerceToString0006
     * @tc.desc      : Testing CoerceToString NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testCoerceToString0006', 0, async (done: Function) => {
      console.info('testCoerceToString0006 START');
      try {
        let value = napitest.coerceToString('123');
        console.info('testCoerceToString0006 value is: ' + value);
        let obj = JSON.stringify(value);
        expect(value).assertEqual('123');
      } catch (err) {
        console.error('testCoerceToString0006 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_TYPEOF_0100
     * @tc.name      : testTypeOf0001
     * @tc.desc      : Testing InstanceOf NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testTypeOf0001', 0, async (done: Function) => {
      console.info('testTypeOf0001 START');
      try {
        let value = napitest.typeOf();
        console.info('testTypeOf0001 value is: ' + value);
        expect(value).assertTrue();
      } catch (err) {
        console.error('testTypeOf0001 err msg' + err.message);
        expect(err.message).assertContain('NAPI_INVALID_ARG');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_TYPEOF_0200
     * @tc.name      : testTypeOf0002
     * @tc.desc      : Testing InstanceOf NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testTypeOf0002', 0, async (done: Function) => {
      console.info('testTypeOf0002 START');
      try {
        let value = napitest.typeOfValueNull();
        console.info('testTypeOf0002 value is: ' + value);
        expect().assertFail();
      } catch (err) {
        console.error('testTypeOf0002 err msg' + err.message);
        expect(err.message).assertEqual('empty error message');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_TYPEOF_0300
     * @tc.name      : testTypeOf0003
     * @tc.desc      : Testing InstanceOf NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testTypeOf0003', 0, async (done: Function) => {
      console.info('testTypeOf0003 START');
      try {
        let value = napitest.typeOfRstNull();
        console.info('testTypeOf0003 value is: ' + value);
        expect().assertFail();
      } catch (err) {
        console.error('testTypeOf0003 err msg' + err.message);
        expect(err.message).assertContain('NAPI_INVALID_ARG');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_INSTANCEOF_0100
     * @tc.name      : testInstanceOf0001
     * @tc.desc      : Testing InstanceOf NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testInstanceOf0001', 0, async (done: Function) => {
      console.info('testInstanceOf0001 START');
      try {
        let value = napitest.instanceOf();
        console.info('testInstanceOf0001 value is: ' + value);
        expect(value).assertTrue();
      } catch (err) {
        console.error('testInstanceOf0001 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_INSTANCEOF_0200
     * @tc.name      : testInstanceOf0002
     * @tc.desc      : Testing InstanceOf NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testInstanceOf0002', 0, async (done: Function) => {
      console.info('testInstanceOf0002 START');
      try {
        let value = napitest.instanceOf('A');
        console.info('testInstanceOf0002 value is: ' + value);
        expect(value).assertTrue();
      } catch (err) {
        console.error('testInstanceOf0002 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_INSTANCEOF_0300
     * @tc.name      : testInstanceOf0003
     * @tc.desc      : Testing InstanceOf NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testInstanceOf0003', 0, async (done: Function) => {
      console.info('testInstanceOf0003 START');
      try {
        let value = napitest.instanceOfObjectNull();
        console.info('testInstanceOf0003 value is: ' + value);
        expect().assertFail();
      } catch (err) {
        console.error('testInstanceOf0003 err msg' + err.message);
        expect(err.message).assertEqual('empty error message');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_INSTANCEOF_0400
     * @tc.name      : testInstanceOf0004
     * @tc.desc      : Testing InstanceOf NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testInstanceOf0004', 0, async (done: Function) => {
      console.info('testInstanceOf0004 START');
      try {
        let value = napitest.instanceOfConstructorNull();
        console.info('testInstanceOf0004 value is: ' + value);
        expect().assertFail();
      } catch (err) {
        console.error('testInstanceOf0004 err msg' + err.message);
        expect(err.message).assertEqual('empty error message');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_INSTANCEOF_0500
     * @tc.name      : testInstanceOf0005
     * @tc.desc      : Testing InstanceOf NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testInstanceOf0005', 0, async (done: Function) => {
      console.info('testInstanceOf0005 START');
      try {
        let value = napitest.instanceOfResultNull();
        console.info('testInstanceOf0005 value is: ' + value);
        expect().assertFail();
      } catch (err) {
        console.error('testInstanceOf0005 err msg' + err.message);
        expect(err.message).assertEqual('empty error message');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_ISARRAY_0100
     * @tc.name      : testIsArray0001
     * @tc.desc      : Testing IsArray NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testIsArray0001', 0, async (done: Function) => {
      console.info('testIsArray0001 START');
      try {
        let value = napitest.isArray();
        console.info('testIsArray0001 value is: ' + value);
        expect(value).assertEqual(0);
      } catch (err) {
        console.error('testIsArray0001 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_ISARRAY_0200
     * @tc.name      : testIsArray0002
     * @tc.desc      : Testing IsArray NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testIsArray0002', 0, async (done: Function) => {
      console.info('testIsArray0002 START');
      try {
        let value = napitest.isArray('123');
        console.info('testIsArray0002 value is: ' + value);
        expect(value).assertEqual(0);
      } catch (err) {
        console.error('testIsArray0002 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_ISARRAY_0300
     * @tc.name      : testIsArray0003
     * @tc.desc      : Testing IsArray NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testIsArray0003', 0, async (done: Function) => {
      console.info('testIsArray0003 START');
      try {
        let value = napitest.isArrayValueNull();
        console.info('testIsArray0003 value is: ' + value);
        expect().assertFail();
      } catch (err) {
        console.error('testIsArray0003 err msg' + err.message);
        expect(err.message).assertContain('NAPI_INVALID_ARG');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_ISARRAY_0400
     * @tc.name      : testIsArray0004
     * @tc.desc      : Testing IsArray NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testIsArray0004', 0, async (done: Function) => {
      console.info('testIsArray0004 START');
      try {
        let value = napitest.isArrayResultNull();
        console.info('testIsArray0004 value is: ' + value);
        expect().assertFail();
      } catch (err) {
        console.error('testIsArray0004 err msg' + err.message);
        expect(err.message).assertContain('NAPI_INVALID_ARG');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_ISDATAVIEW_0100
     * @tc.name      : testIsDataView0001
     * @tc.desc      : Testing IsDataView NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testIsDataView0001', 0, async (done: Function) => {
      console.info('testIsDataView0001 START');
      try {
        let value = napitest.isDataView();
        console.info('testIsDataView0001 value is: ' + value);
        expect(value instanceof DataView).assertTrue();
        value.setInt16(1, 42);
        expect(value.getInt16(1)).assertEqual(42);
      } catch (err) {
        console.error('testIsDataView0001 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_ISDATAVIEW_0200
     * @tc.name      : testIsDataView0002
     * @tc.desc      : Testing IsDataView NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testIsDataView0002', 0, async (done: Function) => {
      console.info('testIsDataView0002 START');
      try {
        let value = napitest.isDataViewValueNull();
        console.info('testIsDataView0002 value is: ' + value);
        expect().assertFail();
      } catch (err) {
        console.error('testIsDataView0002 err msg' + err.message);
        expect(err.message).assertContain('NAPI_INVALID_ARG');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_ISDATAVIEW_0300
     * @tc.name      : testIsDataView0003
     * @tc.desc      : Testing IsDataView NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testIsDataView0003', 0, async (done: Function) => {
      console.info('testIsDataView0003 START');
      try {
        let value = napitest.isDataViewRstNull();
        console.info('testIsDataView0003 value is: ' + value);
        expect().assertFail();
      } catch (err) {
        console.error('testIsDataView0003 err msg' + err.message);
        expect(err.message).assertContain('NAPI_INVALID_ARG');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_ISARRAYBUFFER_0100
     * @tc.name      : testIsArrayBuffer0001
     * @tc.desc      : Testing IsArrayBuffer NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testIsArrayBuffer0001', 0, async (done: Function) => {
      console.info('testIsArrayBuffer0001 START');
      try {
        let value = napitest.isArrayBuffer();
        console.info('testIsArrayBuffer0001 value is: ' + value);
        expect(value).assertEqual(0);
      } catch (err) {
        console.error('testIsArrayBuffer0001 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_ISARRAYBUFFER_0200
     * @tc.name      : testIsArrayBuffer0002
     * @tc.desc      : Testing IsArrayBuffer NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testIsArrayBuffer0002', 0, async (done: Function) => {
      console.info('testIsArrayBuffer0002 START');
      try {
        let value = napitest.isArrayBufferValueNull();
        console.info('testIsArrayBuffer0002 value is: ' + value);
        expect().assertFail();
      } catch (err) {
        console.error('testIsArrayBuffer0002 err msg' + err.message);
        expect(err.message).assertContain('NAPI_INVALID_ARG');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_ISARRAYBUFFER_0300
     * @tc.name      : testIsArrayBuffer0003
     * @tc.desc      : Testing IsArrayBuffer NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testIsArrayBuffer0003', 0, async (done: Function) => {
      console.info('testIsArrayBuffer0003 START');
      try {
        let value = napitest.isArrayBufferRstNull();
        console.info('testIsArrayBuffer0003 value is: ' + value);
        expect().assertFail();
      } catch (err) {
        console.error('testIsArrayBuffer0003 err msg' + err.message);
        expect(err.message).assertContain('NAPI_INVALID_ARG');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_ISTYPEDARRAY_0100
     * @tc.name      : testIsTypedArray0001
     * @tc.desc      : Testing IsTypedArray NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testIsTypedArray0001', 0, async (done: Function) => {
      console.info('testIsTypedArray0001 START');
      try {
        let value = napitest.isTypedArray();
        console.info('testIsTypedArray0001 value is: ' + value);
        console.info('testIsTypedArray0001 value is: ' + JSON.stringify(value));
        expect(value).assertEqual(0);
      } catch (err) {
        console.error('testIsTypedArray0001 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_ISTYPEDARRAY_0200
     * @tc.name      : testIsTypedArray0002
     * @tc.desc      : Testing IsTypedArray NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testIsTypedArray0002', 0, async (done: Function) => {
      console.info('testIsTypedArray0002 START');
      try {
        let value = napitest.isTypedArrayValueNull();
        console.info('testIsTypedArray0002 value is: ' + value);
        expect(value).assertEqual(0);
      } catch (err) {
        console.error('testIsTypedArray0002 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_ISTYPEDARRAY_0300
     * @tc.name      : testIsTypedArray0003
     * @tc.desc      : Testing IsTypedArray NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testIsTypedArray0003', 0, async (done: Function) => {
      console.info('testIsTypedArray0003 START');
      try {
        let value = napitest.isTypedArrayRstNull();
        console.info('testIsTypedArray0003 value is: ' + value);
        expect(value).assertEqual(0);
      } catch (err) {
        console.error('testIsTypedArray0003 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_ISDATE_0100
     * @tc.name      : testIsDate0001
     * @tc.desc      : Testing IsDate NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testIsDate0001', 0, async (done: Function) => {
      console.info('testIsDate0001 START');
      try {
        const date1 = new Date('December 17, 1995 03:24:00');
        let value = napitest.isDate(date1);
        console.info('testIsDate0001 value is: ' + value);
        expect(value).assertTrue();
      } catch (err) {
        console.error('testIsDate0001 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_ISDATE_0200
     * @tc.name      : testIsDate0002
     * @tc.desc      : Testing IsDate NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testIsDate0002', 0, async (done: Function) => {
      console.info('testIsDate0002 START');
      try {
        const date1 = new Date('abc');
        let value = napitest.isDate(date1);
        console.info('testIsDate0002 value is: ' + value);
        expect(value).assertTrue();
      } catch (err) {
        console.error('testIsDate0002 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_ISDATE_0300
     * @tc.name      : testIsDate0003
     * @tc.desc      : Testing IsDate NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testIsDate0003', 0, async (done: Function) => {
      console.info('testIsDate0003 START');
      try {
        let value = napitest.isDateValueNull();
        console.info('testIsDate0003 value is: ' + value);
        expect().assertFail();
      } catch (err) {
        console.error('testIsDate0003 err msg' + err.message);
        expect(err.message).assertEqual('empty error message');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_ISDATE_0400
     * @tc.name      : testIsDate0004
     * @tc.desc      : Testing IsDate NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testIsDate0004', 0, async (done: Function) => {
      console.info('testIsDate0004 START');
      try {
        let value = napitest.isDateResultNull();
        console.info('testIsDate0004 value is: ' + value);
        expect().assertFail();
      } catch (err) {
        console.error('testIsDate0004 err msg' + err.message);
        expect(err.message).assertEqual('empty error message');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_STRICTEQUALS_0100
     * @tc.name      : testStrictEquals0001
     * @tc.desc      : Testing StrictEquals NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testStrictEquals0001', 0, async (done: Function) => {
      console.info('testStrictEquals0001 START');
      try {
        let value = napitest.strictEquals();
        console.info('testStrictEquals0001 value is: ' + value);
        expect(value).assertEqual(0);
      } catch (err) {
        console.error('testStrictEquals0001 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_STRICTEQUALS_0200
     * @tc.name      : testStrictEquals0002
     * @tc.desc      : Testing StrictEquals NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testStrictEquals0002', 0, async (done: Function) => {
      console.info('testStrictEquals0002 START');
      try {
        let value = napitest.strictEqualsFirstValueNull();
        console.info('testStrictEquals0002 value is: ' + value);
        expect().assertFail();
      } catch (err) {
        console.error('testStrictEquals0002 err msg' + err.message);
        expect(err.message).assertContain('NAPI_INVALID_ARG');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_STRICTEQUALS_0300
     * @tc.name      : testStrictEquals0003
     * @tc.desc      : Testing StrictEquals NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testStrictEquals0003', 0, async (done: Function) => {
      console.info('testStrictEquals0003 START');
      try {
        let value = napitest.strictEqualsSecondValueNull();
        console.info('testStrictEquals0003 value is: ' + value);
        expect().assertFail();
      } catch (err) {
        console.error('testStrictEquals0003 err msg' + err.message);
        expect(err.message).assertContain('NAPI_INVALID_ARG');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_STRICTEQUALS_0400
     * @tc.name      : testStrictEquals0004
     * @tc.desc      : Testing StrictEquals NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testStrictEquals0004', 0, async (done: Function) => {
      console.info('testStrictEquals0004 START');
      try {
        let value = napitest.strictEqualsNaN();
        console.info('testStrictEquals0004 value is: ' + value);
        expect(value).assertEqual(0);
      } catch (err) {
        console.error('testStrictEquals0004 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_STRICTEQUALS_0400
     * @tc.name      : testStrictEquals0004
     * @tc.desc      : Testing IsDate NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testStrictEquals0004', 0, async (done: Function) => {
      console.info('testStrictEquals0004 START');
      try {
        let value = napitest.strictEqualsResultNull();
        console.info('testStrictEquals0004 value is: ' + value);
        expect().assertFail();
      } catch (err) {
        console.error('testStrictEquals0004 err msg' + err.message);
        expect(err.message).assertContain('NAPI_INVALID_ARG');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_GETPROPERTYNAMES_0100
     * @tc.name      : testGetPropertyNames0001
     * @tc.desc      : Testing GetPropertyNames NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testGetPropertyNames0001', 0, async (done: Function) => {
      console.info('testGetPropertyNames0001 START');
      try {
        let value = napitest.getPropertyNames();
        console.info('testGetPropertyNames0001 value is: ' + value);
        expect(value).assertEqual(0);
      } catch (err) {
        console.error('testGetPropertyNames0001 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_GETPROPERTYNAMES_0200
     * @tc.name      : testGetPropertyNames0002
     * @tc.desc      : Testing GetPropertyNames NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testGetPropertyNames0002', 0, async (done: Function) => {
      console.info('testGetPropertyNames0002 START');
      try {
        let value = napitest.getPropertyNamesObjectNull();
        console.info('testGetPropertyNames0002 value is: ' + value);
        expect().assertFail();
      } catch (err) {
        console.error('testGetPropertyNames0002 err msg' + err.message);
        expect(err.message).assertEqual('empty error message');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_GETPROPERTYNAMES_0300
     * @tc.name      : testGetPropertyNames0003
     * @tc.desc      : Testing GetPropertyNames NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testGetPropertyNames0003', 0, async (done: Function) => {
      console.info('testGetPropertyNames0003 START');
      try {
        let value = napitest.getPropertyNamesResultNull();
        console.info('testGetPropertyNames0003 value is: ' + value);
        expect().assertFail();
      } catch (err) {
        console.error('testGetPropertyNames0003 err msg' + err.message);
        expect(err.message).assertEqual('empty error message');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_GETPROPERTYNAMES_0400
     * @tc.name      : testGetPropertyNames0004
     * @tc.desc      : Testing GetPropertyNames NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testGetPropertyNames0004', 0, async (done: Function) => {
      console.info('testGetPropertyNames0004 START');
      try {
        let value = napitest.getPropertyNamesNotObject();
        console.info('testGetPropertyNames0004 value is: ' + value);
        expect(value).assertEqual(0);
      } catch (err) {
        console.error('testGetPropertyNames0004 err msg' + err.message);
        expect(err.message).assertEqual('empty error message');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_SETPROPERTY_0100
     * @tc.name      : testSetProperty0001
     * @tc.desc      : Testing SetProperty NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testSetProperty0001', 0, async (done: Function) => {
      console.info('testSetProperty0001 START');
      try {
        let value = napitest.setProperty();
        console.info('testSetProperty0001 value is: ' + value);
        expect(value instanceof Object).assertTrue();
      } catch (err) {
        console.error('testSetProperty0001 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_SETPROPERTY_0200
     * @tc.name      : testSetProperty0002
     * @tc.desc      : Testing SetProperty NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testSetProperty0002', 0, async (done: Function) => {
      console.info('testSetProperty0002 START');
      try {
        let value = napitest.setPropertyValueNull();
        console.info('testSetProperty0002 value is: ' + value);
        expect(value instanceof Object).assertTrue();
      } catch (err) {
        console.error('testSetProperty0002 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_SETPROPERTY_0300
     * @tc.name      : testSetProperty0003
     * @tc.desc      : Testing SetProperty NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testSetProperty0003', 0, async (done: Function) => {
      console.info('testSetProperty0003 START');
      try {
        let value = napitest.setPropertyResultNull();
        console.info('testSetProperty0003 value is: ' + value);
        expect(value instanceof Object).assertTrue();
      } catch (err) {
        console.error('testSetProperty0003 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_SETPROPERTY_0400
     * @tc.name      : testSetProperty0004
     * @tc.desc      : Testing SetProperty NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testSetProperty0004', 0, async (done: Function) => {
      console.info('testSetProperty0004 START');
      try {
        let value = napitest.setPropertyNoObject();
        console.info('testSetProperty0004 value is: ' + value);
        expect().assertFail();
      } catch (err) {
        console.error('testSetProperty0004 err msg' + err.message);
        expect(err.message).assertEqual('empty error message');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_GETPROPERTY_0100
     * @tc.name      : testGetProperty0001
     * @tc.desc      : Testing GetProperty NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testGetProperty0001', 0, async (done: Function) => {
      console.info('testGetProperty0001 START');
      try {
        let value = napitest.getProperty();
        console.info('testGetProperty0001 value is: ' + value);
        expect(value instanceof Object).assertTrue();
      } catch (err) {
        console.error('testGetProperty0001 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_GETPROPERTY_0200
     * @tc.name      : testGetProperty0002
     * @tc.desc      : Testing GetProperty NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testGetProperty0002', 0, async (done: Function) => {
      console.info('testGetProperty0002 START');
      try {
        let value = napitest.getPropertyObjectNull();
        console.info('testGetProperty0002 value is: ' + value);
        expect(value instanceof Object).assertTrue();
      } catch (err) {
        console.error('testGetProperty0002 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_GETPROPERTY_0300
     * @tc.name      : testGetProperty0003
     * @tc.desc      : Testing GetProperty NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testGetProperty0003', 0, async (done: Function) => {
      console.info('testGetProperty0003 START');
      try {
        let value = napitest.getPropertyKeyNull();
        console.info('testGetProperty0003 value is: ' + value);
        expect(value instanceof Object).assertTrue();
      } catch (err) {
        console.error('testGetProperty0003 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_GETPROPERTY_0400
     * @tc.name      : testGetProperty0004
     * @tc.desc      : Testing GetProperty NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testGetProperty0004', 0, async (done: Function) => {
      console.info('testGetProperty0004 START');
      try {
        let value = napitest.getPropertyResultNull();
        console.info('testGetProperty0004 value is: ' + value);
        expect(value instanceof Object).assertTrue();
      } catch (err) {
        console.error('testGetProperty0004 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_GETPROPERTY_0500
     * @tc.name      : testGetProperty0005
     * @tc.desc      : Testing GetProperty NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testGetProperty0005', 0, async (done: Function) => {
      console.info('testGetProperty0005 START');
      try {
        let value = napitest.getPropertyNotObject();
        console.info('testGetProperty0005 value is: ' + value);
        expect().assertFail();
      } catch (err) {
        console.error('testGetProperty0005 err msg' + err.message);
        expect(err.message).assertEqual('empty error message');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_HASPROPERTY_0100
     * @tc.name      : testHasProperty0001
     * @tc.desc      : Testing HasProperty NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testHasProperty0001', 0, async (done: Function) => {
      console.info('testHasProperty0001 START');
      try {
        let value = napitest.hasProperty();
        console.info('testHasProperty0001 value is: ' + value);
        expect(value).assertEqual(0);
      } catch (err) {
        console.error('testHasProperty0001 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_HASPROPERTY_0200
     * @tc.name      : testHasProperty0002
     * @tc.desc      : Testing HasProperty NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testHasProperty0002', 0, async (done: Function) => {
      console.info('testHasProperty0002 START');
      try {
        let value = napitest.hasPropertyObjectNull();
        console.info('testHasProperty0002 value is: ' + value);
        expect().assertFail();
      } catch (err) {
        console.error('testHasProperty0002 err msg' + err.message);
        expect(err.message).assertContain('NAPI_INVALID_ARG');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_HASPROPERTY_0300
     * @tc.name      : testHasProperty0003
     * @tc.desc      : Testing HasProperty NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testHasProperty0003', 0, async (done: Function) => {
      console.info('testHasProperty0003 START');
      try {
        let value = napitest.hasPropertyKeyNull();
        console.info('testHasProperty0003 value is: ' + value);
        expect().assertFail();
      } catch (err) {
        console.error('testHasProperty0003 err msg' + err.message);
        expect(err.message).assertContain('NAPI_INVALID_ARG');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_HASPROPERTY_0400
     * @tc.name      : testHasProperty0004
     * @tc.desc      : Testing HasProperty NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testHasProperty0004', 0, async (done: Function) => {
      console.info('testHasProperty0004 START');
      try {
        let value = napitest.hasPropertyResultNull();
        console.info('testHasProperty0004 value is: ' + value);
        expect().assertFail();
      } catch (err) {
        console.error('testHasProperty0004 err msg' + err.message);
        expect(err.message).assertContain('NAPI_INVALID_ARG');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_DELETEPROPERTY_0100
     * @tc.name      : testDeleteProperty0001
     * @tc.desc      : Testing DeleteProperty NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testDeleteProperty0001', 0, async (done: Function) => {
      console.info('testDeleteProperty0001 START');
      try {
        let testObj = {
          'a': 1,
          'b': 2
        }
        let value = napitest.setAndDeleteProperty(testObj, 'a');
        console.info('testDeleteProperty0001 value is: ' + value);
        expect(value === 0).assertTrue();
      } catch (err) {
        console.error('testDeleteProperty0001 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_DELETEPROPERTY_0200
     * @tc.name      : testDeleteProperty0002
     * @tc.desc      : Testing DeleteProperty NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testDeleteProperty0002', 0, async (done: Function) => {
      console.info('testDeleteProperty0002 START');
      try {
        let testObj = {
          'a': 1,
          'b': 2
        }
        let value = napitest.setAndDeleteProperty(testObj, 'c');
        expect(value === 0).assertTrue();
      } catch (err) {
        console.error('testDeleteProperty0002 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_DELETEPROPERTY_0300
     * @tc.name      : testDeleteProperty0003
     * @tc.desc      : Testing DeleteProperty NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testDeleteProperty0003', 0, async (done: Function) => {
      console.info('testDeleteProperty0003 START');
      try {
        let value = napitest.deletePropertyObjectNull();
        console.info('testDeleteProperty0003 value is: ' + value);
        expect().assertFail();
      } catch (err) {
        console.error('testDeleteProperty0003 err msg' + err.message);
        expect(err.message).assertEqual('empty error message');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_DELETEPROPERTY_0400
     * @tc.name      : testDeleteProperty0004
     * @tc.desc      : Testing DeleteProperty NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testDeleteProperty0004', 0, async (done: Function) => {
      console.info('testDeleteProperty0004 START');
      try {
        let value = napitest.deletePropertyKeyNull();
        console.info('testDeleteProperty0004 value is: ' + value);
        expect().assertFail();
      } catch (err) {
        console.error('testDeleteProperty0004 err msg' + err.message);
        expect(err.message).assertContain('NAPI_INVALID_ARG');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_DELETEPROPERTY_0500
     * @tc.name      : testDeleteProperty0005
     * @tc.desc      : Testing DeleteProperty NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testDeleteProperty0005', 0, async (done: Function) => {
      console.info('testDeleteProperty0005 START');
      try {
        let value = napitest.deletePropertyResultNull();
        console.info('testDeleteProperty0005 value is: ' + value);
        expect().assertFail();
      } catch (err) {
        console.error('testDeleteProperty0005 err msg' + err.message);
        expect(err.message).assertContain('NAPI_INVALID_ARG');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_HASOWNPROPERTY_0100
     * @tc.name      : testHasOwnProperty0001
     * @tc.desc      : Testing HasOwnProperty NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testHasOwnProperty0001', 0, async (done: Function) => {
      console.info('testHasOwnProperty0001 START');
      try {
        let testObj = {
          'a': 1,
          'b': 2
        }
        let value = napitest.hasOwnProperty(testObj, 'a');
        console.info('testHasOwnProperty0001 value is: ' + value);
        expect(value).assertTrue();
      } catch (err) {
        console.error('testHasOwnProperty0001 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_HASOWNPROPERTY_0200
     * @tc.name      : testHasOwnProperty0002
     * @tc.desc      : Testing HasOwnProperty NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testHasOwnProperty0002', 0, async (done: Function) => {
      console.info('testHasOwnProperty0002 START');
      try {
        let testObj = {
          'a': 1,
          'b': 2
        }
        let value = napitest.hasOwnProperty(testObj, 'c');
        console.info('testHasOwnProperty0002 value is: ' + value);
        expect(value).assertFalse();
      } catch (err) {
        console.error('testHasOwnProperty0002 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_HASOWNPROPERTY_0300
     * @tc.name      : testHasOwnProperty0003
     * @tc.desc      : Testing HasOwnProperty NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testHasOwnProperty0003', 0, async (done: Function) => {
      console.info('testHasOwnProperty0003 START');
      try {
        let value = napitest.hasOwnPropertyObjectNull();
        console.info('testHasOwnProperty0003 value is: ' + value);
        expect().assertFail();
      } catch (err) {
        console.error('testHasOwnProperty0003 err msg' + err.message);
        expect(err.message).assertContain('NAPI_INVALID_ARG');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_HASOWNPROPERTY_0400
     * @tc.name      : testHasOwnProperty0004
     * @tc.desc      : Testing HasOwnProperty NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testHasOwnProperty0004', 0, async (done: Function) => {
      console.info('testHasOwnProperty0004 START');
      try {
        let value = napitest.hasOwnPropertyKeytNull();
        console.info('testHasOwnProperty0004 value is: ' + value);
        expect().assertFail();
      } catch (err) {
        console.error('testHasOwnProperty0004 err msg' + err.message);
        expect(err.message).assertContain('NAPI_INVALID_ARG');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_HASOWNPROPERTY_0500
     * @tc.name      : testHasOwnProperty0005
     * @tc.desc      : Testing HasOwnProperty NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testHasOwnProperty0005', 0, async (done: Function) => {
      console.info('testHasOwnProperty0005 START');
      try {
        let value = napitest.hasOwnPropertyResultNull();
        console.info('testHasOwnProperty0005 value is: ' + value);
        expect().assertFail();
      } catch (err) {
        console.error('testHasOwnProperty0005 err msg' + err.message);
        expect(err.message).assertContain('NAPI_INVALID_ARG');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_SETNAMEDPROPERTY_0100
     * @tc.name      : testSetNamedProperty0001
     * @tc.desc      : Testing SetNamedProperty NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testSetNamedProperty0001', 0, async (done: Function) => {
      console.info('testSetNamedProperty0001 START');
      try {
        let value = napitest.setNamedProperty([1, 2], "e", false);
        console.info('testSetNamedProperty0001 value is: ' + value);
        expect(value).assertTrue();
      } catch (err) {
        console.error('testSetNamedProperty0001 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_SETNAMEDPROPERTY_0200
     * @tc.name      : testSetNamedProperty0002
     * @tc.desc      : Testing SetNamedProperty NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testSetNamedProperty0002', 0, async (done: Function) => {
      console.info('testSetNamedProperty0002 START');
      try {
        let value = napitest.setNamedPropertyObjectNull([1, 2], "e", false);
        console.info('testSetNamedProperty0002 value is: ' + value);
        expect().assertFail();
      } catch (err) {
        console.error('testSetNamedProperty0002 err msg' + err.message);
        expect(err.message).assertEqual('empty error message');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_SETNAMEDPROPERTY_0300
     * @tc.name      : testSetNamedProperty0003
     * @tc.desc      : Testing SetNamedProperty NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testSetNamedProperty0003', 0, async (done: Function) => {
      console.info('testSetNamedProperty0003 START');
      try {
        let value = napitest.setNamedPropertyKeyNull([1, 2], "e", false);
        console.info('testSetNamedProperty0003 value is: ' + value);
        expect().assertFail();
      } catch (err) {
        console.error('testSetNamedProperty0003 err msg' + err.message);
        expect(err.message).assertEqual('empty error message');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_SETNAMEDPROPERTY_0400
     * @tc.name      : testSetNamedProperty0004
     * @tc.desc      : Testing SetNamedProperty NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testSetNamedProperty0004', 0, async (done: Function) => {
      console.info('testSetNamedProperty0004 START');
      try {
        let value = napitest.setNamedPropertyResultNull([1, 2], "e", false);
        console.info('testSetNamedProperty0004 value is: ' + value);
        expect().assertFail();
      } catch (err) {
        console.error('testSetNamedProperty0004 err msg' + err.message);
        expect(err.message).assertEqual('empty error message');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_SETNAMEDPROPERTY_0100
     * @tc.name      : testGetNamedProperty0001
     * @tc.desc      : Testing GetNamedProperty NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testGetNamedProperty0001', 0, async (done: Function) => {
      console.info('testGetNamedProperty0001 START');
      try {
        let obj = {
          foo: "bar",
          age: 42,
          baz: {
            myProp: 12
          },
        };
        let value = napitest.getNamedProperty(obj, "foo");
        console.info('testGetNamedProperty0001 value is: ' + value);
        expect(value).assertEqual('bar');
      } catch (err) {
        console.error('testGetNamedProperty0001 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_SETNAMEDPROPERTY_0200
     * @tc.name      : testGetNamedProperty0002
     * @tc.desc      : Testing GetNamedProperty NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testGetNamedProperty0002', 0, async (done: Function) => {
      console.info('testGetNamedProperty0002 START');
      try {
        let obj = {
          foo: "bar",
          age: 42,
          baz: {
            myProp: 12
          },
        };
        let value = napitest.getNamedProperty(obj, "foo1");
        console.info('testGetNamedProperty0002 value is: ' + value);
        expect(value).assertEqual(undefined);
      } catch (err) {
        console.error('testGetNamedProperty0002 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_SETNAMEDPROPERTY_0300
     * @tc.name      : testGetNamedProperty0003
     * @tc.desc      : Testing GetNamedProperty NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testGetNamedProperty0003', 0, async (done: Function) => {
      console.info('testGetNamedProperty0003 START');
      try {
        let obj = {
          foo: "bar",
          age: 42,
          baz: {
            myProp: 12
          },
        };
        let value = napitest.getNamedPropertyObjectNull(obj, "foo1");
        console.info('testGetNamedProperty0003 value is: ' + value);
        expect().assertFail();
      } catch (err) {
        console.error('testGetNamedProperty0003 err msg' + err.message);
        expect(err.message).assertEqual('empty error message');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_SETNAMEDPROPERTY_0400
     * @tc.name      : testGetNamedProperty0004
     * @tc.desc      : Testing GetNamedProperty NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testGetNamedProperty0004', 0, async (done: Function) => {
      console.info('testGetNamedProperty0004 START');
      try {
        let obj = {
          foo: "bar",
          age: 42,
          baz: {
            myProp: 12
          },
        };
        let value = napitest.getNamedPropertyKeyNull(obj, "foo1");
        console.info('testGetNamedProperty0004 value is: ' + value);
        expect().assertFail();
      } catch (err) {
        console.error('testGetNamedProperty0004 err msg' + err.message);
        expect(err.message).assertEqual('empty error message');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_SETNAMEDPROPERTY_0500
     * @tc.name      : testGetNamedProperty0005
     * @tc.desc      : Testing GetNamedProperty NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testGetNamedProperty0005', 0, async (done: Function) => {
      console.info('testGetNamedProperty0005 START');
      try {
        let obj = {
          foo: "bar",
          age: 42,
          baz: {
            myProp: 12
          },
        };
        let value = napitest.getNamedPropertyResultNull(obj, "foo1");
        console.info('testGetNamedProperty0005 value is: ' + value);
        expect().assertFail();
      } catch (err) {
        console.error('testGetNamedProperty0005 err msg' + err.message);
        expect(err.message).assertEqual('empty error message');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_HASNAMEDPROPERTY_0100
     * @tc.name      : testHasNamedProperty0001
     * @tc.desc      : Testing HasNamedProperty NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testHasNamedProperty0001', 0, async (done: Function) => {
      console.info('testHasNamedProperty0001 START');
      try {
        let obj = {
          foo: "bar",
          age: 42,
          baz: {
            myProp: 12
          },
        };
        let value = napitest.hasNamedProperty(obj, "foo");
        console.info('testHasNamedProperty0001 value is: ' + value);
        expect(value).assertTrue();
      } catch (err) {
        console.error('testHasNamedProperty0001 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_HASNAMEDPROPERTY_0200
     * @tc.name      : testHasNamedProperty0002
     * @tc.desc      : Testing HasNamedProperty NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testHasNamedProperty0002', 0, async (done: Function) => {
      console.info('testHasNamedProperty0002 START');
      try {
        let obj = {
          foo: "bar",
          age: 42,
          baz: {
            myProp: 12
          },
        };
        let value = napitest.hasNamedProperty(obj, "foo");
        console.info('testHasNamedProperty0002 value is: ' + value);
        expect(value).assertTrue();
      } catch (err) {
        console.error('testHasNamedProperty0002 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_HASNAMEDPROPERTY_0300
     * @tc.name      : testHasNamedProperty0003
     * @tc.desc      : Testing HasNamedProperty NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testHasNamedProperty0003', 0, async (done: Function) => {
      console.info('testHasNamedProperty0003 START');
      try {
        let obj = {
          foo: "bar",
          age: 42,
          baz: {
            myProp: 12
          },
        };
        let value = napitest.hasNamedPropertyObjectNull(obj, "foo");
        console.info('testHasNamedProperty0003 value is: ' + value);
        expect().assertFail();
      } catch (err) {
        console.error('testHasNamedProperty0003 err msg' + err.message);
        expect(err.message).assertEqual('empty error message');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_HASNAMEDPROPERTY_0400
     * @tc.name      : testHasNamedProperty0004
     * @tc.desc      : Testing HasNamedProperty NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testHasNamedProperty0004', 0, async (done: Function) => {
      console.info('testHasNamedProperty0004 START');
      try {
        let obj = {
          foo: "bar",
          age: 42,
          baz: {
            myProp: 12
          },
        };
        let value = napitest.hasNamedPropertyKeyNull(obj, "foo");
        console.info('testHasNamedProperty0004 value is: ' + value);
        expect().assertFail();
      } catch (err) {
        console.error('testHasNamedProperty0004 err msg' + err.message);
        expect(err.message).assertEqual('empty error message');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_HASNAMEDPROPERTY_0500
     * @tc.name      : testHasNamedProperty0005
     * @tc.desc      : Testing HasNamedProperty NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testHasNamedProperty0005', 0, async (done: Function) => {
      console.info('testHasNamedProperty0005 START');
      try {
        let obj = {
          foo: "bar",
          age: 42,
          baz: {
            myProp: 12
          },
        };
        let value = napitest.hasNamedPropertyResultNull(obj, "foo");
        console.info('testHasNamedProperty0005 value is: ' + value);
        expect().assertFail();
      } catch (err) {
        console.error('testHasNamedProperty0005 err msg' + err.message);
        expect(err.message).assertEqual('empty error message');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_SETELEMENT_0100
     * @tc.name      : testSetElement0001
     * @tc.desc      : Testing SetElement NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testSetElement0001', 0, async (done: Function) => {
      console.info('testSetElement0001 START');
      try {
        let value = napitest.setElement();
        console.info('testSetElement0001 value is: ' + value);
        expect(value instanceof Object).assertTrue();
      } catch (err) {
        console.error('testSetElement0001 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_SETELEMENT_0200
     * @tc.name      : testSetElement0002
     * @tc.desc      : Testing SetElement NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testSetElement0002', 0, async (done: Function) => {
      console.info('testSetElement0002 START');
      try {
        let value = napitest.setElementObjectNull();
        console.info('testSetElement0002 value is: ' + value);
        expect(value).assertEqual(0);
      } catch (err) {
        console.error('testSetElement0002 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_SETELEMENT_0300
     * @tc.name      : testSetElement0003
     * @tc.desc      : Testing SetElement NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testSetElement0003', 0, async (done: Function) => {
      console.info('testSetElement0003 START');
      try {
        let value = napitest.setElementRstNull();
        console.info('testSetElement0003 value is: ' + value);
        expect(value).assertEqual(0);
      } catch (err) {
        console.error('testSetElement0003 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_SETELEMENT_0400
     * @tc.name      : testSetElement0004
     * @tc.desc      : Testing SetElement NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testSetElement0004', 0, async (done: Function) => {
      console.info('testSetElement0004 START');
      try {
        let value = napitest.setElementNotObj();
        console.info('testSetElement0004 value is: ' + value);
        expect(value).assertEqual(0);
      } catch (err) {
        console.error('testSetElement0004 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });
    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_GETELEMENT_0100
     * @tc.name      : testGetElement0001
     * @tc.desc      : Testing GetElement NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testGetElement0001', 0, async (done: Function) => {
      console.info('testGetElement0001 START');
      try {
        let value = napitest.getElement();
        console.info('testGetElement0001 value is: ' + value);
        let fi = value.envIsNull;
        expect(value instanceof Object).assertTrue();
      } catch (err) {
        console.error('testGetElement0001 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_GETELEMENT_0200
     * @tc.name      : testGetElement0002
     * @tc.desc      : Testing GetElement NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testGetElement0002', 0, async (done: Function) => {
      console.info('testGetElement0002 START');
      try {
        let value = napitest.getElementObjNull();
        console.info('testGetElement0002 value is: ' + value);
        expect(value).assertEqual(0);
      } catch (err) {
        console.error('testGetElement0002 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_GETELEMENT_0300
     * @tc.name      : testGetElement0003
     * @tc.desc      : Testing GetElement NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testGetElement0003', 0, async (done: Function) => {
      console.info('testGetElement0003 START');
      try {
        let value = napitest.getElementRstNull();
        console.info('testGetElement0003 value is: ' + value);
        expect(value).assertEqual(0);
      } catch (err) {
        console.error('testGetElement0003 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_GETELEMENT_0400
     * @tc.name      : testGetElement0004
     * @tc.desc      : Testing GetElement NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testGetElement0004', 0, async (done: Function) => {
      console.info('testGetElement0004 START');
      try {
        let value = napitest.getElementNotObj();
        console.info('testGetElement0004 value is: ' + value);
        expect(value).assertEqual(0);
      } catch (err) {
        console.error('testGetElement0004 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_HASELEMENT_0100
     * @tc.name      : testHasElement0001
     * @tc.desc      : Testing HasElement NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testHasElement0001', 0, async (done: Function) => {
      console.info('testHasElement0001 START');
      try {
        let value = napitest.hasElement();
        console.info('testHasElement0001 value is: ' + value);
        expect(value instanceof Object).assertTrue();
      } catch (err) {
        console.error('testHasElement0001 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_HASELEMENT_0200
     * @tc.name      : testHasElement0002
     * @tc.desc      : Testing HasElement NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testHasElement0002', 0, async (done: Function) => {
      console.info('testHasElement0002 START');
      try {
        let value = napitest.hasElementObjNull();
        console.info('testHasElement0002 value is: ' + value);
        expect().assertFail();
      } catch (err) {
        console.error('testHasElement0002 err msg' + err.message);
        expect(err.message).assertEqual('empty error message');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_HASELEMENT_0300
     * @tc.name      : testHasElement0003
     * @tc.desc      : Testing HasElement NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testHasElement0003', 0, async (done: Function) => {
      console.info('testHasElement0003 START');
      try {
        let value = napitest.hasElementRstNull();
        console.info('testHasElement0003 value is: ' + value);
        expect().assertFail();
      } catch (err) {
        console.error('testHasElement0003 err msg' + err.message);
        expect(err.message).assertEqual('empty error message');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_DELETEELEMENT_0100
     * @tc.name      : testDeleteElement0001
     * @tc.desc      : Testing DeleteElement NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testDeleteElement0001', 0, async (done: Function) => {
      console.info('testDeleteElement0001 START');
      try {
        let value = napitest.deleteElement();
        console.info('testDeleteElement0001 value is: ' + value);
        expect(value instanceof Object).assertTrue();
      } catch (err) {
        console.error('testDeleteElement0001 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_DELETEELEMENT_0200
     * @tc.name      : testDeleteElement0002
     * @tc.desc      : Testing DeleteElement NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testDeleteElement0002', 0, async (done: Function) => {
      console.info('testDeleteElement0002 START');
      try {
        let value = napitest.deleteElementObjNull();
        console.info('testDeleteElement0002 value is: ' + value);
        expect().assertFail();
      } catch (err) {
        console.error('testDeleteElement0002 err msg' + err.message);
        expect(err.message).assertEqual('empty error message');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_DELETEELEMENT_0300
     * @tc.name      : testDeleteElement0003
     * @tc.desc      : Testing DeleteElement NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testDeleteElement0003', 0, async (done: Function) => {
      console.info('testDeleteElement0003 START');
      try {
        let value = napitest.deleteElementRstNull();
        console.info('testDeleteElement0003 value is: ' + value);
        expect().assertFail();
      } catch (err) {
        console.error('testDeleteElement0003 err msg' + err.message);
        expect(err.message).assertContain('NAPI_INVALID_ARG');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_DELETEELEMENT_0100
     * @tc.name      : testDefineProperties0001
     * @tc.desc      : Testing DefineProperties NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testDefineProperties0001', 0, async (done: Function) => {
      console.info('testDefineProperties0001 START');
      try {
        let value = napitest.defineProperties();
        console.info('testDefineProperties0001 value is: ' + value);
        expect(value instanceof Object).assertTrue();
      } catch (err) {
        console.error('testDefineProperties0001 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_DELETEELEMENT_0200
     * @tc.name      : testDefineProperties0002
     * @tc.desc      : Testing DefineProperties NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testDefineProperties0002', 0, async (done: Function) => {
      console.info('testDefineProperties0002 START');
      try {
        let value = napitest.definePropertiesObjNull();
        console.info('testDefineProperties0002 value is: ' + value);
        expect(value instanceof Object).assertTrue();
      } catch (err) {
        console.error('testDefineProperties0002 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_TypeTag_0100
     * @tc.name      : testTypeTag0001
     * @tc.desc      : Testing typeTag NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testTypeTag0001', 0, async (done: Function) => {
      console.info('testTypeTag0001 START');
      try {
        let obj1 = napitest.typeTaggedInstance(0);
        let obj2 = napitest.typeTaggedInstance(1);
        let obj3 = napitest.typeTaggedInstance(2);
        let obj4 = napitest.typeTaggedInstance(3);
        let isTag = napitest.checkTypeTag(0, obj1);
        let isTag1 = napitest.checkTypeTag(1, obj2);
        let isTag2 = napitest.checkTypeTag(2, obj3);
        let isTag3 = napitest.checkTypeTag(3, obj4);
        expect(isTag).assertTrue();
        expect(isTag1).assertTrue();
        expect(isTag2).assertTrue();
        expect(isTag3).assertTrue();
      } catch (err) {
        console.error('testTypeTag0001 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_TypeTag_0200
     * @tc.name      : testTypeTag0002
     * @tc.desc      : Testing typeTag NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testTypeTag0002', 0, async (done: Function) => {
      console.info('testTypeTag0002 START');
      try {
        let value = napitest.typeTaggedObjNull();
        console.info('testTypeTag0002 value is: ' + value);
        expect().assertFail();
      } catch (err) {
        console.error('testTypeTag0002 err msg' + err.message);
        expect(err.message).assertEqual('empty error message');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_TypeTag_0300
     * @tc.name      : testTypeTag0003
     * @tc.desc      : Testing typeTag NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testTypeTag0003', 0, async (done: Function) => {
      console.info('testTypeTag0003 START');
      try {
        let value = napitest.typeTaggedTagNull();
        console.info('testTypeTag0003 value is: ' + value);
        expect().assertFail();
      } catch (err) {
        console.error('testTypeTag0003 err msg' + err.message);
        expect(err.message).assertEqual('empty error message');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_CHECKTYPETAG_0100
     * @tc.name      : testCheckTypeTag0001
     * @tc.desc      : Testing CheckTypeTag NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testCheckTypeTag0001', 0, async (done: Function) => {
      console.info('testCheckTypeTag0001 START');
      try {
        let obj1 = napitest.typeTaggedInstance(0);
        let obj2 = napitest.typeTaggedInstance(1);
        let isTag = napitest.checkTypeTag(1, obj1);
        let isTag1 = napitest.checkTypeTag(0, obj2);
        console.info('testCheckTypeTag0001 testString isTag is: ' + isTag);
        console.info('testCheckTypeTag0001 testString isTag1 is: ' + isTag1);
        expect(isTag).assertFalse();
        expect(isTag1).assertFalse();
      } catch (err) {
        console.error('testCheckTypeTag0001 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_CHECKTYPETAG_0200
     * @tc.name      : testCheckTypeTag0002
     * @tc.desc      : Testing CheckTypeTag NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testCheckTypeTag0002', 0, async (done: Function) => {
      console.info('testCheckTypeTag0002 START');
      try {
        let value = napitest.CheckTypeTagObjNull();
        console.info('testCheckTypeTag0002 value is: ' + value);
        expect().assertFail();
      } catch (err) {
        console.error('testCheckTypeTag0002 err msg' + err.message);
        expect(err.message).assertEqual('empty error message');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_CHECKTYPETAG_0300
     * @tc.name      : testCheckTypeTag0003
     * @tc.desc      : Testing CheckTypeTag NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testCheckTypeTag0003', 0, async (done: Function) => {
      console.info('testCheckTypeTag0003 START');
      try {
        let value = napitest.CheckTypeTagTagNull();
        console.info('testCheckTypeTag0003 value is: ' + value);
        expect().assertFail();
      } catch (err) {
        console.error('testCheckTypeTag0003 err msg' + err.message);
        expect(err.message).assertEqual('empty error message');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_CHECKTYPETAG_0400
     * @tc.name      : testCheckTypeTag0004
     * @tc.desc      : Testing CheckTypeTag NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testCheckTypeTag0004', 0, async (done: Function) => {
      console.info('testCheckTypeTag0004 START');
      try {
        let value = napitest.CheckTypeTagRstNull();
        console.info('testCheckTypeTag0004 value is: ' + value);
        expect().assertFail();
      } catch (err) {
        console.error('testCheckTypeTag0004 err msg' + err.message);
        expect(err.message).assertEqual('empty error message');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_CALLFUNCTION_0100
     * @tc.name      : testCallFunction0001
     * @tc.desc      : Testing CallFunction NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testCallFunction0001', 0, async (done: Function) => {
      console.info('testCallFunction0001 START');
      try {

        function testFunc() {
          return 666;
        }

        let value = napitest.callFunction(testFunc);
        console.info('testCallFunction0001 value is: ' + value);
        expect(value === 666).assertTrue();
      } catch (err) {
        console.error('testCallFunction0001 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_CALLFUNCTION_0200
     * @tc.name      : testCallFunction0002
     * @tc.desc      : Testing CallFunction NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testCallFunction0002', 0, async (done: Function) => {
      console.info('testCallFunction0002 START');
      try {
        let value = napitest.callFunction('abc');
        console.info('testCallFunction0002 value is: ' + value);
        expect().assertFail();
      } catch (err) {
        console.error('testCallFunction0002 err msg' + err.message);
        expect(err.message)
          .assertEqual('assertion (valuetype == napi_function) failed: Wrong type of argment. Expects a string.');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_CALLFUNCTION_0300
     * @tc.name      : testCallFunction0003
     * @tc.desc      : Testing CallFunction NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testCallFunction0003', 0, async (done: Function) => {
      console.info('testCallFunction0003 START');
      try {
        let value = napitest.callFunction(null);
        console.info('testCallFunction0003 value is: ' + value);
        expect().assertFail();
      } catch (err) {
        console.error('testCallFunction0003 err msg' + err.message);
        expect(err.message)
          .assertEqual('assertion (valuetype == napi_function) failed: Wrong type of argment. Expects a string.')
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_CALLFUNCTION_0400
     * @tc.name      : testCallFunction0004
     * @tc.desc      : Testing CallFunction NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testCallFunction0004', 0, async (done: Function) => {
      console.info('testCallFunction0004 START');
      try {
        let value = napitest.callFunctionNull();
        console.info('testCallFunction0004 value is: ' + value);
        expect().assertFail();
      } catch (err) {
        console.error('testCallFunction0004 err msg' + err.message);
        expect(err.message).assertContain('NAPI_INVALID_ARG');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_CREATEFUNCTION_0100
     * @tc.name      : testCreateFunction0001
     * @tc.desc      : Testing CreateFunction NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testCreateFunction0001', 0, async (done: Function) => {
      console.info('testCreateFunction0001 START');
      try {
        let func = napitest.napiCreateFunction();
        let value = func();
        console.info('testCreateFunction0001 value is: ' + value);
        expect(value).assertEqual(666);
      } catch (err) {
        console.error('testCreateFunction0001 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_CREATEFUNCTION_0200
     * @tc.name      : testCreateFunction0002
     * @tc.desc      : Testing CreateFunction NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testCreateFunction0002', 0, async (done: Function) => {
      console.info('testCreateFunction0002 START');
      try {
        let func = napitest.napiCreateFunctionFuncNull();
        let value = func();
        console.info('testCreateFunction0002 value is: ' + value);
        expect(value).assertEqual(666);
      } catch (err) {
        console.error('testCreateFunction0002 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_CREATEFUNCTION_0300
     * @tc.name      : testCreateFunction0003
     * @tc.desc      : Testing CreateFunction NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testCreateFunction0003', 0, async (done: Function) => {
      console.info('testCreateFunction0003 START');
      try {
        let func = napitest.napiCreateFunctionRstNull();
        let value = func();
        console.info('testCreateFunction0003 value is: ' + value);
        expect().assertFail();
      } catch (err) {
        console.error('testCreateFunction0003 err msg' + err.message);
        expect(err.message).assertContain('NAPI_INVALID_ARG');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_GETCBINFO_0100
     * @tc.name      : testGetCbInfo0001
     * @tc.desc      : Testing GetCbInfo NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testGetCbInfo0001', 0, async (done: Function) => {
      console.info('testGetCbInfo0001 START');
      try {
        let value = napitest.napiGetCbInfo(12.06);
        console.info('testGetCbInfo0001 value is: ' + value);
        expect(value == 12.06).assertTrue
      } catch (err) {
        console.error('testGetCbInfo0001 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_GETCBINFO_0200
     * @tc.name      : testGetCbInfo0002
     * @tc.desc      : Testing GetCbInfo NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testGetCbInfo0002', 0, async (done: Function) => {
      console.info('testGetCbInfo0002 START');
      try {
        let value = napitest.napiGetCbInfoNull();
        console.info('testGetCbInfo0002 value is: ' + value);
        expect().assertFail();
      } catch (err) {
        console.error('testGetCbInfo0002 err msg' + err.message);
        expect(err.message).assertContain('NAPI_INVALID_ARG');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_GETNEWTARGET_0100
     * @tc.name      : testGetNewTarget0001
     * @tc.desc      : Testing GetNewTarget NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testGetNewTarget0001', 0, async (done: Function) => {
      console.info('testGetNewTarget0001 START');
      try {

        function testFunc() {
          napitest.NewTargetTest();
        }

        expect(testFunc).assertThrowError("InstanceOf error when type of target is not Object");
      } catch (err) {
        console.error('testGetNewTarget0001 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_GETNEWTARGET_0200
     * @tc.name      : testGetNewTarget0002
     * @tc.desc      : Testing GetNewTarget NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testGetNewTarget0002', 0, async (done: Function) => {
      console.info('testGetNewTarget0002 START');
      try {

        function testFunc() {
          napitest.newTargetInfoNull();
        }

        expect(testFunc).assertThrowError("is not new instance");
      } catch (err) {
        console.error('testGetNewTarget0002 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_GETNEWTARGET_0300
     * @tc.name      : testGetNewTarget0003
     * @tc.desc      : Testing GetNewTarget NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testGetNewTarget0003', 0, async (done: Function) => {
      console.info('testGetNewTarget0003 START');
      try {

        function testFunc() {
          napitest.newTargetRstNull();
        }

        expect(testFunc).assertThrowError("is not new instance");
      } catch (err) {
        console.error('testGetNewTarget0003 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_GETNEWINSTANCE_0100
     * @tc.name      : testGetNewInstance0001
     * @tc.desc      : Testing GetNewInstance NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testGetNewInstance0001', 0, async (done: Function) => {
      console.info('testGetNewInstance0001 START');
      try {
        let value = napitest.napiNewInstance();
        console.info('testGetNewInstance0001 testString result is: ' + value);
        expect(value).assertTrue();
      } catch (err) {
        console.error('testGetNewInstance0001 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_GETNEWINSTANCE_0200
     * @tc.name      : testGetNewInstance0002
     * @tc.desc      : Testing GetNewInstance NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testGetNewInstance0002', 0, async (done: Function) => {
      console.info('testGetNewInstance0002 START');
      try {
        let value = napitest.newInstanceNull();
        console.info('testGetNewInstance0002 testString result is: ' + value);
        expect().assertFail();
      } catch (err) {
        console.error('testGetNewInstance0002 err msg' + err.message);
        expect(err.message).assertEqual('empty error message');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_DEFINECLASS_0100
     * @tc.name      : testDefineClass0001
     * @tc.desc      : Testing DefineClass NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testDefineClass0001', 0, async (done: Function) => {
      console.info('testDefineClass0001 START');
      try {
        let value = napitest.napiDefineClass();
        console.info('testDefineClass0001 testString result is: ' + value);
        expect(value).assertEqual(0)
      } catch (err) {
        console.error('testDefineClass0001 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_DEFINECLASS_0200
     * @tc.name      : testDefineClass0002
     * @tc.desc      : Testing DefineClass NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testDefineClass0002', 0, async (done: Function) => {
      console.info('testDefineClass0002 START');
      try {
        let value = napitest.defineClassUTFNull();
        console.info('testDefineClass0002 testString result is: ' + value);
        expect().assertFail();
      } catch (err) {
        console.error('testDefineClass0002 err msg' + err.message);
        expect(err.message).assertContain('NAPI_INVALID_ARG');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_DEFINECLASS_0300
     * @tc.name      : testDefineClass0003
     * @tc.desc      : Testing DefineClass NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testDefineClass0003', 0, async (done: Function) => {
      console.info('testDefineClass0003 START');
      try {
        let value = napitest.defineClassConstructorNull();
        console.info('testDefineClass0003 testString result is: ' + value);
        expect().assertFail();
      } catch (err) {
        console.error('testDefineClass0003 err msg' + err.message);
        expect(err.message).assertContain('NAPI_INVALID_ARG');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_DEFINECLASS_0400
     * @tc.name      : testDefineClass0004
     * @tc.desc      : Testing DefineClass NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testDefineClass0004', 0, async (done: Function) => {
      console.info('testDefineClass0004 START');
      try {
        let value = napitest.defineClassRstNull();
        console.info('testDefineClass0004 testString result is: ' + value);
        expect().assertFail();
      } catch (err) {
        console.error('testDefineClass0004 err msg' + err.message);
        expect(err.message).assertContain('NAPI_INVALID_ARG');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_DEFINECLASS_0500
     * @tc.name      : testDefineClass0005
     * @tc.desc      : Testing DefineClass NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testDefineClass0005', 0, async (done: Function) => {
      console.info('testDefineClass0005 START');
      try {
        let value = napitest.defineClassLengthExceed();
        console.info('testDefineClass0005 testString result is: ' + value);
        expect(value).assertEqual(0)
      } catch (err) {
        console.error('testDefineClass0005 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_UNWRAP_0100
     * @tc.name      : testUnwrap0001
     * @tc.desc      : Testing Unwrap NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testUnwrap0001', 0, async (done: Function) => {
      console.info('testUnwrap0001 START');
      try {
        let value = napitest.unwrap();
        console.info('testUnwrap0001 testString result is: ' + value);
        expect(value).assertEqual(0)
      } catch (err) {
        console.error('testUnwrap0001 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_UNWRAP_0200
     * @tc.name      : testUnwrap0002
     * @tc.desc      : Testing Unwrap NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testUnwrap0002', 0, async (done: Function) => {
      console.info('testUnwrap0002 START');
      try {
        let value = napitest.unwrapObjNull();
        console.info('testUnwrap0002 testString result is: ' + value);
        expect().assertFail();
      } catch (err) {
        console.error('testUnwrap0002 err msg' + err.message);
        expect(err.message).assertEqual('empty error message');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_UNWRAP_0300
     * @tc.name      : testUnwrap0003
     * @tc.desc      : Testing Unwrap NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testUnwrap0003', 0, async (done: Function) => {
      console.info('testUnwrap0003 START');
      try {
        let value = napitest.unwrapRstNull();
        console.info('testUnwrap0003 testString result is: ' + value);
        expect().assertFail();
      } catch (err) {
        console.error('testUnwrap0003 err msg' + err.message);
        expect(err.message).assertEqual('empty error message');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_REMOVEWRAP_0100
     * @tc.name      : testRemoveWrap0001
     * @tc.desc      : Testing RemoveWrap NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testRemoveWrap0001', 0, async (done: Function) => {
      console.info('testRemoveWrap0001 START');
      try {
        let value = napitest.removeWrap();
        console.info('testRemoveWrap0001 testString result is: ' + value);
        expect(value).assertEqual(0)
      } catch (err) {
        console.error('testRemoveWrap0001 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_REMOVEWRAP_0200
     * @tc.name      : testRemoveWrap0002
     * @tc.desc      : Testing RemoveWrap NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testRemoveWrap0002', 0, async (done: Function) => {
      console.info('testRemoveWrap0002 START');
      try {
        let value = napitest.removeWrapObjNull();
        console.info('testRemoveWrap0002 testString result is: ' + value);
        expect().assertFail();
      } catch (err) {
        console.error('testRemoveWrap0002 err msg' + err.message);
        expect(err.message).assertContain('NAPI_INVALID_ARG');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_REMOVEWRAP_0300
     * @tc.name      : testRemoveWrap0003
     * @tc.desc      : Testing RemoveWrap NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testRemoveWrap0003', 0, async (done: Function) => {
      console.info('testRemoveWrap0003 START');
      try {
        let value = napitest.removeWrapRstNull();
        console.info('testRemoveWrap0003 testString result is: ' + value);
        expect(value).assertEqual(0)
      } catch (err) {
        console.error('testRemoveWrap0003 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_CANCELASYNCWORK_0100
     * @tc.name      : testCancelAsyncWork0001
     * @tc.desc      : Testing CancelAsyncWork NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testCancelAsyncWork0001', 0, async (done: Function) => {
      console.info('testCancelAsyncWork0001 START');
      try {
        let value = napitest.napiCancelAsyncWork();
        console.info('testCancelAsyncWork0001 testString result is: ' + value);
        expect(value).assertEqual(0)
      } catch (err) {
        console.error('testCancelAsyncWork0001 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_CANCELASYNCWORK_0200
     * @tc.name      : testCancelAsyncWork0002
     * @tc.desc      : Testing CancelAsyncWork NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testCancelAsyncWork0002', 0, async (done: Function) => {
      console.info('testCancelAsyncWork0002 START');
      try {
        let value = napitest.cancelAsyncWorkNull();
        console.info('testCancelAsyncWork0002 testString result is: ' + value);
        expect().assertFail();
      } catch (err) {
        console.error('testCancelAsyncWork0002 err msg' + err.message);
        expect(err.message).assertEqual('empty error message');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_QUEUEASYNCWORK_0100
     * @tc.name      : testQueueAsyncWork0001
     * @tc.desc      : Testing queueAsyncWork NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testQueueAsyncWork0001', 0, async (done: Function) => {
      console.info('testQueueAsyncWork0001 START');
      try {
        let value = napitest.queueAsyncWork();
        console.info('testQueueAsyncWork0001 testString result is: ' + value);
        expect(value).assertEqual(undefined)
      } catch (err) {
        console.error('testQueueAsyncWork0001 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_QUEUEASYNCWORK_0200
     * @tc.name      : testQueueAsyncWork0002
     * @tc.desc      : Testing queueAsyncWork NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testQueueAsyncWork0002', 0, async (done: Function) => {
      console.info('testQueueAsyncWork0002 START');
      try {
        let value = napitest.queueAsyncWorkNull();
        console.info('testQueueAsyncWork0002 testString result is: ' + value);
        expect(value).assertEqual(undefined)
      } catch (err) {
        console.error('testQueueAsyncWork0002 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_DELETEASYNCWORK_0100
     * @tc.name      : testDeleteAsyncWork0001
     * @tc.desc      : Testing DeleteAsyncWork NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testDeleteAsyncWork0001', 0, async (done: Function) => {
      console.info('testDeleteAsyncWork0001 START');
      try {
        let value = napitest.deleteAsyncWork();
        console.info('testDeleteAsyncWork0001 testString result is: ' + value);
        expect(value).assertEqual(0)
      } catch (err) {
        console.error('testDeleteAsyncWork0001 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_DELETEASYNCWORK_0200
     * @tc.name      : testDeleteAsyncWork0002
     * @tc.desc      : Testing DeleteAsyncWork NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testDeleteAsyncWork0002', 0, async (done: Function) => {
      console.info('testDeleteAsyncWork0002 START');
      try {
        let value = napitest.deleteAsyncWorkNull();
        console.info('testDeleteAsyncWork0002 testString result is: ' + value);
        expect(value).assertEqual(NAPI_INVALID_ARG)
      } catch (err) {
        console.error('testDeleteAsyncWork0002 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_DEFINESENDABLECLASS_0200
     * @tc.name      : testDefineSendableClass0002
     * @tc.desc      : Testing DefineSendableClass NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testDefineSendableClass0002', 0, async (done: Function) => {
      console.info('testDefineSendableClass0002 START');
      try {
        let value = napitest.defineSendableClassEnvNull();
        console.info('testDefineSendableClass0002 value is: ' + value);
        expect(value).assertEqual(undefined)
      } catch (err) {
        console.error('testDefineSendableClass0002 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_DEFINESENDABLECLASS_0300
     * @tc.name      : testDefineSendableClass0003
     * @tc.desc      : Testing DefineSendableClass NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testDefineSendableClass0003', 0, async (done: Function) => {
      console.info('testDefineSendableClass0003 START');
      try {
        let value = napitest.defineSendableClassNameNull();
        console.info('testDefineSendableClass0003 value is: ' + value);
        expect(value).assertEqual(undefined)
      } catch (err) {
        console.error('testDefineSendableClass0003 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_DEFINESENDABLECLASS_0400
     * @tc.name      : testDefineSendableClass0004
     * @tc.desc      : Testing DefineSendableClass NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testDefineSendableClass0004', 0, async (done: Function) => {
      console.info('testDefineSendableClass0004 START');
      try {
        let value = napitest.defineSendableClassConstructorNull();
        console.info('testDefineSendableClass0004 value is: ' + value);
        expect(value).assertEqual(undefined)
      } catch (err) {
        console.error('testDefineSendableClass0004 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_DEFINESENDABLECLASS_0500
     * @tc.name      : testDefineSendableClass0005
     * @tc.desc      : Testing DefineSendableClass NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testDefineSendableClass0005', 0, async (done: Function) => {
      console.info('testDefineSendableClass0005 START');
      try {
        let value = napitest.defineSendableClassRstNull();
        console.info('testDefineSendableClass0005 value is: ' + value);
        expect(value).assertEqual(0)
      } catch (err) {
        console.error('testDefineSendableClass0005 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_CREATESENDABLEOBJECTWITHPROPERTIES_0100
     * @tc.name      : testCreateSendableObjectWithProperties0001
     * @tc.desc      : Testing CreateSendableObjectWithProperties NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testCreateSendableObjectWithProperties0001', 0, async (done: Function) => {
      console.info('testCreateSendableObjectWithProperties0001 START');
      try {
        let value = napitest.createSendableObjectWithProperties();
        console.info('testCreateSendableObjectWithProperties0001 value is: ' + value);
        expect(value).assertEqual(0);
      } catch (err) {
        console.error('testCreateSendableObjectWithProperties0001 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_CREATESENDABLEOBJECTWITHPROPERTIES_0200
     * @tc.name      : testCreateSendableObjectWithProperties0002
     * @tc.desc      : Testing CreateSendableObjectWithProperties NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testCreateSendableObjectWithProperties0002', 0, async (done: Function) => {
      console.info('testCreateSendableObjectWithProperties0002 START');
      try {
        let value = napitest.createSendableObjectWithPropertiesEnvNull();
        console.info('testCreateSendableObjectWithProperties0002 value is: ' + value);
        expect().assertFail();
      } catch (err) {
        console.error('testCreateSendableObjectWithProperties0002 err msg' + err.message);
        expect(err.message).assertEqual('empty error message');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_CREATESENDABLEOBJECTWITHPROPERTIES_0300
     * @tc.name      : testCreateSendableObjectWithProperties0003
     * @tc.desc      : Testing CreateSendableObjectWithProperties NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testCreateSendableObjectWithProperties0003', 0, async (done: Function) => {
      console.info('testCreateSendableObjectWithProperties0003 START');
      try {
        let value = napitest.createSendableObjectWithPropertiesRstNull();
        console.info('testCreateSendableObjectWithProperties0003 value is: ' + value);
        expect().assertFail();
      } catch (err) {
        console.error('testCreateSendableObjectWithProperties0003 err msg' + err.message);
        expect(err.message).assertEqual('empty error message');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_NAPICREATESENDABLEARRAY_0100
     * @tc.name      : testNapiCreateSendableArray0001
     * @tc.desc      : Testing NapiCreateSendableArray NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testNapiCreateSendableArray0001', 0, async (done: Function) => {
      console.info('testNapiCreateSendableArray0001 START');
      try {
        let value = napitest.NapiCreateSendableArray();
        console.info('testNapiCreateSendableArray0001 value is: ' + value);
        expect(napitest.NapiIsSendable(value)).assertEqual(true);
        expect(value.length).assertEqual(0);
      } catch (err) {
        console.error('testNapiCreateSendableArray0001 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_NAPICREATESENDABLEARRAY_0200
     * @tc.name      : testNapiCreateSendableArray0002
     * @tc.desc      : Testing NapiCreateSendableArray NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testNapiCreateSendableArray0002', 0, async (done: Function) => {
      console.info('testNapiCreateSendableArray0002 START');
      try {
        let value = napitest.createSendableArrayEnvNull();
        console.info('testNapiCreateSendableArray0002 value is: ' + value);
        expect(value).assertEqual(NAPI_INVALID_ARG);
      } catch (err) {
        console.error('testNapiCreateSendableArray0002 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_NAPICREATESENDABLEARRAY_0300
     * @tc.name      : testNapiCreateSendableArray0003
     * @tc.desc      : Testing NapiCreateSendableArray NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testNapiCreateSendableArray0003', 0, async (done: Function) => {
      console.info('testNapiCreateSendableArray0003 START');
      try {
        let value = napitest.createSendableArrayRstNull();
        console.info('testNapiCreateSendableArray0003 value is: ' + value);
        expect(value).assertEqual(NAPI_INVALID_ARG);
      } catch (err) {
        console.error('testNapiCreateSendableArray0003 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_CREATESENDABLEARRAYWITHLENGTH_0100
     * @tc.name      : testCreateSendableArrayWithLength0001
     * @tc.desc      : Testing CreateSendableArrayWithLength NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testCreateSendableArrayWithLength0001', 0, async (done: Function) => {
      console.info('testCreateSendableArrayWithLength0001 START');
      try {
        let value = napitest.NapiCreateSendableArrayWithLength();
        console.info('testCreateSendableArrayWithLength0001 value is: ' + value);
        expect(napitest.NapiIsSendable(value)).assertEqual(true);
        expect(value.length).assertEqual(1);
      } catch (err) {
        console.error('testCreateSendableArrayWithLength0001 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_CREATESENDABLEARRAYWITHLENGTH_0200
     * @tc.name      : testCreateSendableArrayWithLength0002
     * @tc.desc      : Testing CreateSendableArrayWithLength NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testCreateSendableArrayWithLength0002', 0, async (done: Function) => {
      console.info('testCreateSendableArrayWithLength0002 START');
      try {
        let value = napitest.createSendableArrayWithLengthEnvNull();
        console.info('testCreateSendableArrayWithLength0002 value is: ' + value);
        expect(value).assertEqual(NAPI_INVALID_ARG);
      } catch (err) {
        console.error('testCreateSendableArrayWithLength0002 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_CREATESENDABLEARRAYWITHLENGTH_0300
     * @tc.name      : testCreateSendableArrayWithLength0003
     * @tc.desc      : Testing CreateSendableArrayWithLength NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testCreateSendableArrayWithLength0003', 0, async (done: Function) => {
      console.info('testCreateSendableArrayWithLength0003 START');
      try {
        let value = napitest.createSendableArrayWithLengthRstNull();
        console.info('testCreateSendableArrayWithLength0003 value is: ' + value);
        expect(value).assertEqual(0);
      } catch (err) {
        console.error('testCreateSendableArrayWithLength0003 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_CREATESENDABLEARRAYBUFFER_0100
     * @tc.name      : testCreateSendableArrayBuffer0001
     * @tc.desc      : Testing CreateSendableArrayBuffer NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testCreateSendableArrayBuffer0001', 0, async (done: Function) => {
      console.info('testCreateSendableArrayBuffer0001 START');
      try {
        let value = napitest.NapiCreateSendableArrayBuffer();
        console.info('testCreateSendableArrayBuffer0001 value is: ' + value);
        expect(value).assertEqual(0);
      } catch (err) {
        console.error('testCreateSendableArrayBuffer0001 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_CREATESENDABLEARRAYBUFFER_0200
     * @tc.name      : testCreateSendableArrayBuffer0002
     * @tc.desc      : Testing CreateSendableArrayBuffer NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testCreateSendableArrayBuffer0002', 0, async (done: Function) => {
      console.info('testCreateSendableArrayBuffer0002 START');
      try {
        let value = napitest.createSendableArrayBufferEnvNull();
        console.info('testCreateSendableArrayBuffer0002 value is: ' + value);
        expect().assertFail();
      } catch (err) {
        console.error('testCreateSendableArrayBuffer0002 err msg' + err.message);
        expect(err.message).assertContain('NAPI_INVALID_ARG');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_CREATESENDABLEARRAYBUFFER_0300
     * @tc.name      : testCreateSendableArrayBuffer0003
     * @tc.desc      : Testing CreateSendableArrayBuffer NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testCreateSendableArrayBuffer0003', 0, async (done: Function) => {
      console.info('testCreateSendableArrayBuffer0003 START');
      try {
        let value = napitest.createSendableArrayBufferDataNull();
        console.info('testCreateSendableArrayBuffer0003 value is: ' + value);
        expect().assertFail();
      } catch (err) {
        console.error('testCreateSendableArrayBuffer0003 err msg' + err.message);
        expect(err.message).assertContain('NAPI_INVALID_ARG');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_CREATESENDABLEARRAYBUFFER_0400
     * @tc.name      : testCreateSendableArrayBuffer0004
     * @tc.desc      : Testing CreateSendableArrayBuffer NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testCreateSendableArrayBuffer0004', 0, async (done: Function) => {
      console.info('testCreateSendableArrayBuffer0004 START');
      try {
        let value = napitest.createSendableArrayBufferRstNull();
        console.info('testCreateSendableArrayBuffer0004 value is: ' + value);
        expect().assertFail();
      } catch (err) {
        console.error('testCreateSendableArrayBuffer0004 err msg' + err.message);
        expect(err.message).assertContain('NAPI_INVALID_ARG');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_CREATESENDABLETYPEDARRAY_0100
     * @tc.name      : testCreateSendableTypedArray0001
     * @tc.desc      : Testing CreateSendableTypedArray NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testCreateSendableTypedArray0001', 0, async (done: Function) => {
      console.info('testCreateSendableTypedArray0001 START');
      try {
        let value = napitest.NapiCreateSendableTypedArray();
        console.info('testCreateSendableTypedArray0001 value is: ' + value);
        expect(napitest.NapiIsSendable(value)).assertEqual(true);
        expect(value.byteLength).assertEqual(1024);
      } catch (err) {
        console.error('testCreateSendableTypedArray0001 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_CREATESENDABLETYPEDARRAY_0200
     * @tc.name      : testCreateSendableTypedArray0002
     * @tc.desc      : Testing CreateSendableTypedArray NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testCreateSendableTypedArray0002', 0, async (done: Function) => {
      console.info('testCreateSendableTypedArray0002 START');
      try {
        let value = napitest.createSendableTypedArrayEnvNull();
        console.info('testCreateSendableTypedArray0002 value is: ' + value);
        expect(value).assertEqual(0);
      } catch (err) {
        console.error('testCreateSendableTypedArray0002 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_CREATESENDABLETYPEDARRAY_0300
     * @tc.name      : testCreateSendableTypedArray0003
     * @tc.desc      : Testing CreateSendableTypedArray NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testCreateSendableTypedArray0003', 0, async (done: Function) => {
      console.info('testCreateSendableTypedArray0003 START');
      try {
        let value = napitest.createSendableTypedArraRstNull();
        console.info('testCreateSendableTypedArray0003 value is: ' + value);
        expect(value).assertEqual(0);
      } catch (err) {
        console.error('testCreateSendableTypedArray0003 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_CREATESENDABLETYPEDARRAY_0400
     * @tc.name      : testCreateSendableTypedArray0004
     * @tc.desc      : Testing CreateSendableTypedArray NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testCreateSendableTypedArray0004', 0, async (done: Function) => {
      console.info('testCreateSendableTypedArray0004 START');
      try {
        let value = napitest.createSendableTypedArraBufferNull();
        console.info('testCreateSendableTypedArray0004 value is: ' + value);
        expect(value).assertEqual(0);
      } catch (err) {
        console.error('testCreateSendableTypedArray0004 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_CREATESENDABLETYPEDARRAY_0500
     * @tc.name      : testCreateSendableTypedArray0005
     * @tc.desc      : Testing CreateSendableTypedArray NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testCreateSendableTypedArray0005', 0, async (done: Function) => {
      console.info('testCreateSendableTypedArray0005 START');
      try {
        let value = napitest.createSendableTypedArrayNotBuffer();
        console.info('testCreateSendableTypedArray0005 value is: ' + value);
        expect(value).assertEqual(0);
      } catch (err) {
        console.error('testCreateSendableTypedArray0005 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_CREATESENDABLETYPEDARRAY_0600
     * @tc.name      : testCreateSendableTypedArray0006
     * @tc.desc      : Testing CreateSendableTypedArray NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testCreateSendableTypedArray0006', 0, async (done: Function) => {
      console.info('testCreateSendableTypedArray0006 START');
      try {
        let value = napitest.createSendableTypedArrayNotType();
        console.info('testCreateSendableTypedArray0006 value is: ' + value);
        expect().assertFail();
      } catch (err) {
        console.error('testCreateSendableTypedArray0006 err msg' + err.message);
        expect(err.message).assertContain('NAPI_INVALID_ARG');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_WRAPSENDABLE_0100
     * @tc.name      : testWrapSendable0001
     * @tc.desc      : Testing WrapSendable NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testWrapSendable0001', 0, async (done: Function) => {
      console.info('testWrapSendable0001 START');
      try {
        let value = napitest.napiWrapSendableTest();
        console.info('testWrapSendable0001 value is: ' + value);
        expect(value).assertEqual(0);
      } catch (err) {
        console.error('testWrapSendable0001 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_WRAPSENDABLE_0200
     * @tc.name      : testWrapSendable0002
     * @tc.desc      : Testing WrapSendable NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testWrapSendable0002', 0, async (done: Function) => {
      console.info('testWrapSendable0002 START');
      try {
        let value = napitest.wrapSendableEnvNull();
        console.info('testWrapSendable0002 value is: ' + value);
        expect(value).assertEqual(NAPI_INVALID_ARG);
      } catch (err) {
        console.error('testWrapSendable0002 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_WRAPSENDABLE_0300
     * @tc.name      : testWrapSendable0003
     * @tc.desc      : Testing WrapSendable NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testWrapSendable0003', 0, async (done: Function) => {
      console.info('testWrapSendable0003 START');
      try {
        let value = napitest.NapiWrapSendableObj1Null();
        console.info('testWrapSendable0003 value is: ' + value);
        expect(value).assertEqual(NAPI_INVALID_ARG);
      } catch (err) {
        console.error('testWrapSendable0003 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_WRAPSENDABLE_0400
     * @tc.name      : testWrapSendable0004
     * @tc.desc      : Testing WrapSendable NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testWrapSendable0004', 0, async (done: Function) => {
      console.info('testWrapSendable0004 START');
      try {
        let value = napitest.NapiWrapSendableObj2Null();
        console.info('testWrapSendable0004 value is: ' + value);
        expect(value).assertEqual(NAPI_INVALID_ARG);
      } catch (err) {
        console.error('testWrapSendable0004 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_WRAPSENDABLEWITHSIZE_0100
     * @tc.name      : testWrapSendableWithSize0001
     * @tc.desc      : Testing WrapSendableWithSize NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testWrapSendableWithSize0001', 0, async (done: Function) => {
      console.info('testWrapSendableWithSize0001 START');
      try {
        let value = napitest.napiWrapSendableWithSizeTest();
        console.info('testWrapSendableWithSize0001 value is: ' + value);
        expect(value).assertEqual(0);
      } catch (err) {
        console.error('testWrapSendableWithSize0001 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_WRAPSENDABLEWITHSIZE_0200
     * @tc.name      : testWrapSendableWithSize0002
     * @tc.desc      : Testing WrapSendableWithSize NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testWrapSendableWithSize0002', 0, async (done: Function) => {
      console.info('testWrapSendableWithSize0002 START');
      try {
        let value = napitest.wrapSendableWithSizeEnvNull();
        console.info('testWrapSendableWithSize0002 value is: ' + value);
        expect(value).assertEqual(undefined);
      } catch (err) {
        console.error('testWrapSendableWithSize0002 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_WRAPSENDABLEWITHSIZE_0300
     * @tc.name      : testWrapSendableWithSize0003
     * @tc.desc      : Testing WrapSendableWithSize NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testWrapSendableWithSize0003', 0, async (done: Function) => {
      console.info('testWrapSendableWithSize0003 START');
      try {
        let value = napitest.wrapSendableWithSizeObj1Null();
        console.info('testWrapSendableWithSize0003 value is: ' + value);
        expect(value).assertEqual(undefined);
      } catch (err) {
        console.error('testWrapSendableWithSize0003 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_WRAPSENDABLEWITHSIZE_0400
     * @tc.name      : testWrapSendableWithSize0004
     * @tc.desc      : Testing WrapSendableWithSize NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testWrapSendableWithSize0004', 0, async (done: Function) => {
      console.info('testWrapSendableWithSize0004 START');
      try {
        let value = napitest.wrapSendableWithSizeObj2Null();
        console.info('testWrapSendableWithSize0004 value is: ' + value);
        expect(value).assertEqual(undefined);
      } catch (err) {
        console.error('testWrapSendableWithSize0004 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_REMOVEWRAPSENDABLE_0100
     * @tc.name      : testRemoveWrapSendable0001
     * @tc.desc      : Testing RemoveWrapSendable NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testRemoveWrapSendable0001', 0, async (done: Function) => {
      console.info('testRemoveWrapSendable0001 START');
      try {
        let value = napitest.NapiRemoveWrapSendable();
        console.info('testRemoveWrapSendable0001 value is: ' + value);
        expect(value).assertEqual(0);
      } catch (err) {
        console.error('testRemoveWrapSendable0001 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_REMOVEWRAPSENDABLE_0200
     * @tc.name      : testRemoveWrapSendable0002
     * @tc.desc      : Testing RemoveWrapSendable NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testRemoveWrapSendable0002', 0, async (done: Function) => {
      console.info('testRemoveWrapSendable0002 START');
      try {
        let value = napitest.removeWrapSendableEnvNull();
        console.info('testRemoveWrapSendable0002 value is: ' + value);
        expect(value).assertEqual(NAPI_INVALID_ARG);
      } catch (err) {
        console.error('testRemoveWrapSendable0002 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_REMOVEWRAPSENDABLE_0300
     * @tc.name      : testRemoveWrapSendable0003
     * @tc.desc      : Testing RemoveWrapSendable NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testRemoveWrapSendable0003', 0, async (done: Function) => {
      console.info('testRemoveWrapSendable0003 START');
      try {
        let value = napitest.removeWrapSendableObjNull();
        console.info('testRemoveWrapSendable0003 value is: ' + value);
        expect(value).assertEqual(NAPI_INVALID_ARG);
      } catch (err) {
        console.error('testRemoveWrapSendable0003 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_REMOVEWRAPSENDABLE_0400
     * @tc.name      : testRemoveWrapSendable0004
     * @tc.desc      : Testing RemoveWrapSendable NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testRemoveWrapSendable0004', 0, async (done: Function) => {
      console.info('testRemoveWrapSendable0004 START');
      try {
        let value = napitest.removeWrapSendableRstNull();
        console.info('testRemoveWrapSendable0004 value is: ' + value);
        expect(value).assertEqual(NAPI_INVALID_ARG);
      } catch (err) {
        console.error('testRemoveWrapSendable0004 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_GETNODEVERSION_0100
     * @tc.name      : testGetNodeVersion0001
     * @tc.desc      : Testing GetNodeVersion NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testGetNodeVersion0001', 0, async (done: Function) => {
      console.info('testGetNodeVersion0001 START');
      try {
        let value = napitest.getNodeVersion();
        console.info('testGetNodeVersion0001 value is: ' + value);
        expect(value).assertEqual(0);
      } catch (err) {
        console.error('testGetNodeVersion0001 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_GETNODEVERSION_0200
     * @tc.name      : testGetNodeVersion0002
     * @tc.desc      : Testing GetNodeVersion NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testGetNodeVersion0002', 0, async (done: Function) => {
      console.info('testGetNodeVersion0002 START');
      try {
        let value = napitest.getNodeVersionEnvNull();
        console.info('testGetNodeVersion0002 value is: ' + value);
        expect(value).assertEqual(NAPI_INVALID_ARG);
      } catch (err) {
        console.error('testGetNodeVersion0002 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_GETNODEVERSION_0300
     * @tc.name      : testGetNodeVersion0003
     * @tc.desc      : Testing GetNodeVersion NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testGetNodeVersion0003', 0, async (done: Function) => {
      console.info('testGetNodeVersion0003 START');
      try {
        let value = napitest.getNodeVersionRstNull();
        console.info('testGetNodeVersion0003 value is: ' + value);
        expect(value).assertEqual(NAPI_INVALID_ARG);
      } catch (err) {
        console.error('testGetNodeVersion0003 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_RELEASETHREADSAFEFUNCTION_0100
     * @tc.name      : testReleaseThreadsafeFunction0001
     * @tc.desc      : Testing ReleaseThreadsafeFunction NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testReleaseThreadsafeFunction0001', 0, async (done: Function) => {
      console.info('testReleaseThreadsafeFunction0001 START');
      try {
        let value = napitest.releaseThreadsafeFunction();
        console.info('testReleaseThreadsafeFunction0001 value is: ' + value);
        expect(value).assertEqual(0);
      } catch (err) {
        console.error('testReleaseThreadsafeFunction0001 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_RELEASETHREADSAFEFUNCTION_0200
     * @tc.name      : testReleaseThreadsafeFunction0002
     * @tc.desc      : Testing ReleaseThreadsafeFunction NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testReleaseThreadsafeFunction0002', 0, async (done: Function) => {
      console.info('testReleaseThreadsafeFunction0002 START');
      try {
        let value = napitest.releaseThreadsafeFunctionNull();
        console.info('testReleaseThreadsafeFunction0002 value is: ' + value);
        expect(value).assertEqual(NAPI_INVALID_ARG);
      } catch (err) {
        console.error('testReleaseThreadsafeFunction0002 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_CREATETHREADSAFEFUNCTION_0100
     * @tc.name      : testCreateThreadsafeFunction0001
     * @tc.desc      : Testing createThreadsafeFunction NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testCreateThreadsafeFunction0001', 0, async (done: Function) => {
      console.info('testCreateThreadsafeFunction0001 START');
      try {
        let value = napitest.createThreadsafeFunctionMaxQueueSizeNegative();
        console.info('testCreateThreadsafeFunction0001 value is: ' + value);
        expect(value).assertEqual(0);
      } catch (err) {
        console.error('testCreateThreadsafeFunction0001 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_CREATETHREADSAFEFUNCTION_0200
     * @tc.name      : testCreateThreadsafeFunction0002
     * @tc.desc      : Testing createThreadsafeFunction NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testCreateThreadsafeFunction0002', 0, async (done: Function) => {
      console.info('testCreateThreadsafeFunction0002 START');
      try {
        let value = napitest.createThreadsafeFunctionInitialThreadCountNegative();
        console.info('testCreateThreadsafeFunction0002 value is: ' + value);
        expect(value).assertEqual(0);
      } catch (err) {
        console.error('testCreateThreadsafeFunction0002 err msg' + err.message);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_MAKECALLBACK_0100
     * @tc.name      : testMakeCallback0001
     * @tc.desc      : Testing makeCallback NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testMakeCallback0001', 0, async (done: Function) => {
      let TAG = "testMakeCallback0001";
      console.info(`${TAG} START`);
      try {
        const hook_result = {
          id: null,
          resource: null,
          init_called: false,
          destroy_called: false,
        };
        const resourceWrap = napitest.createAsyncResource(/**
         * set resource to NULL to generate a managed resource object
         */
          undefined,
        );
        expect(hook_result.destroy_called).assertFalse();
        const recv = {};
        napitest.makeCallback(resourceWrap, recv, function callback() {
          expect(hook_result.destroy_called).assertFalse();
          expect(this).assertEqual(recv);
        });
      } catch (err) {
        console.error(`${TAG} error is ${err}`);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_MAKECALLBACK_0200
     * @tc.name      : testMakeCallback0002
     * @tc.desc      : Testing makeCallback NAPI interface with nullptr.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testMakeCallback0002', 0, async (done: Function) => {
      let TAG = "testMakeCallback0002";
      console.info(`${TAG} START`);
      try {
        const hook_result = {
          id: null,
          resource: null,
          init_called: false,
          destroy_called: false,
        };
        const resourceWrap = napitest.createAsyncResource(/**
         * set resource to NULL to generate a managed resource object
         */
          undefined);
        expect(hook_result.destroy_called).assertFalse();
        const recv = {};
        napitest.makeCallbackEnvNull(resourceWrap, recv, function callback() {
          expect(hook_result.destroy_called).assertFalse();
          expect(this).assertEqual(recv);
        });
        expect().assertFail();
      } catch (err) {
        console.error(`${TAG} error is ${err} `);
        expect(err.message).assertEqual('empty error message');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_MAKECALLBACK_0300
     * @tc.name      : testMakeCallback0003
     * @tc.desc      : Testing makeCallback NAPI interface with nullptr.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testMakeCallback0003', 0, async (done: Function) => {
      let TAG = "testMakeCallback0003";
      console.info(`${TAG} START`);
      try {
        const hook_result = {
          id: null,
          resource: null,
          init_called: false,
          destroy_called: false,
        };
        const resourceWrap = napitest.createAsyncResource(/**
         * set resource to NULL to generate a managed resource object
         */
          undefined);
        expect(hook_result.destroy_called).assertFalse();
        const recv = {};
        napitest.makeCallbackTextNull(resourceWrap, recv, function callback() {
          expect(hook_result.destroy_called).assertFalse();
          expect(this).assertEqual(recv);
        });
      } catch (err) {
        console.error(`${TAG} error is ${err}`);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_GET_VERSION_0100
     * @tc.name      : testNapiGetVersion0001
     * @tc.desc      : Testing napi_get_version interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testNapiGetVersion0001', 0, async (done: Function) => {
      let TAG = "testNapiGetVersion0001";
      console.info(`${TAG} START`);
      try {
        let value = napitest.getVersion();
        console.info(`${TAG} testString result is: ` + value + "--" + JSON.stringify(value));
        expect(value).assertEqual(8);
      } catch (err) {
        console.err(`${TAG} err is`, err)
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_GET_VERSION_0200
     * @tc.name      : testNapiGetVersion0002
     * @tc.desc      : Testing napi_get_version interface with nullptr.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testNapiGetVersion0002', 0, async (done: Function) => {
      let TAG = "testNapiGetVersion0002";
      console.info(`${TAG} START`);
      try {
        let value = napitest.getVersionNull();
        expect().assertFail();
      } catch (err) {
        console.error(`${TAG} error is ${err} `);
        expect(err.message).assertEqual('empty error message');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_CREATE_PROMISE_0100
     * @tc.name      : testNapiCreatePromise0001
     * @tc.desc      : Testing napi_create_promise interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testNapiCreatePromise0001', 0, async (done: Function) => {
      let TAG = "testNapiCreatePromise0001";
      console.info(`${TAG} START`);
      try {
        let value = napitest.createPromise();
        console.info(`${TAG} testString result is: ` + value + "--" + JSON.stringify(value));
        expect(value).assertEqual(0);
      } catch (err) {
        console.error(`${TAG} error is ${err}`);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_CREATE_PROMISE_0200
     * @tc.name      : testNapiCreatePromise0002
     * @tc.desc      : Testing napi_create_promise interface with nullptr.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testNapiCreatePromise0002', 0, async (done: Function) => {
      let TAG = "testNapiCreatePromise0002";
      console.info(`${TAG} START`);
      try {
        let value = napitest.createPromiseNull();
        expect().assertFail();
      } catch (err) {
        console.error(`${TAG} error is ${err} `);
        expect(err.message).assertEqual('assertion (deferred != nullptr) failed: create promise success');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_RESOLVEANDREJECTDEFERRED_0100
     * @tc.name      : testResolveAndRejectDeferred0001
     * @tc.desc      : Testing resolveAndRejectDeferred NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testResolveAndRejectDeferred0001', 0, async (done: Function) => {
      let TAG = "testResolveAndRejectDeferred0001";
      console.info(`${TAG} START`);
      try {
        let value = napitest.resolveAndRejectDeferred();
        console.info(`${TAG} testString result is: ` + value + "--" + JSON.stringify(value));
        expect(value).assertEqual(0);
      } catch (err) {
        console.error(`${TAG} error is ${err}`);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_RESOLVEANDREJECTDEFERREDNULL_0100
     * @tc.name      : testResolveAndRejectDeferredNull0001
     * @tc.desc      : Testing resolveAndRejectDeferredNull NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testResolveAndRejectDeferredNull0001', 0, async (done: Function) => {
      let TAG = "testResolveAndRejectDeferredNull0001";
      console.info(`${TAG} START`);
      try {
        let value = napitest.resolveAndRejectDeferredNull();
        expect().assertFail();
      } catch (err) {
        console.error(`${TAG} error is ${err} `);
        expect(err.message).assertEqual('empty error message');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_ISPROMISE_0100
     * @tc.name      : testIsPromise0001
     * @tc.desc      : Testing isPromise NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testIsPromise0001', 0, async (done: Function) => {
      let TAG = "testIsPromise0001";
      console.info(`${TAG} START`);
      try {
        let value = napitest.isPromise();
        console.info(`${TAG} testString result is: ` + value + "--" + JSON.stringify(value));
        expect(value).assertEqual(0);
      } catch (err) {
        console.error(`${TAG} error is ${err}`);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_ISPROMISENULL_0100
     * @tc.name      : testIsPromiseNull0001
     * @tc.desc      : Testing isPromiseNull NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testIsPromiseNull0001', 0, async (done: Function) => {
      let TAG = "testIsPromiseNull0001";
      console.info(`${TAG} START`);
      try {
        let value = napitest.isPromiseNull();
        expect().assertFail();
      } catch (err) {
        console.error(`${TAG} error is ${err} `);
        expect(err.message).assertEqual('empty error message');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_GETUVEVENTLOOP_0100
     * @tc.name      : testGetUvEventLoop0001
     * @tc.desc      : Testing getUvEventLoop NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testGetUvEventLoop0001', 0, async (done: Function) => {
      let TAG = "testGetUvEventLoop0001";
      console.info(`${TAG} START`);
      try {
        let value = napitest.getUvEventLoop();
        console.info('aceNapiTest075 testString result is: ' + value + "--" + JSON.stringify(value));
        expect(value === undefined).assertTrue();
      } catch (err) {
        console.error(`${TAG} error is ${err}`);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_GETUVEVENTLOOPNULL_0100
     * @tc.name      : testGetUvEventLoopNull0001
     * @tc.desc      : Testing getUvEventLoopNull NAPI interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testGetUvEventLoopNull0001', 0, async (done: Function) => {
      let TAG = "testGetUvEventLoopNull0001";
      console.info(`${TAG} START`);
      try {
        let value = napitest.getUvEventLoopNull();
        expect().assertFail();
      } catch (err) {
        console.error(`${TAG} error is ${err} `);
        expect(err.message).assertEqual('empty error message');
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_RUNINCALLBACKSCOPE_0100
     * @tc.name      : testRunInCallbackScope0001
     * @tc.desc      : Testing runInCallbackScope interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testRunInCallbackScope0001', 0, async (done: Function) => {
      let TAG = "testRunInCallbackScope0001";
      console.info(`${TAG} START`);
      try {
        const obj = {
          key: "value"
        };
        const str = "myAsyncContext";

        function myCallback() {
          console.log("Callback executed");
        }

        let value = napitest.runInCallbackScope(obj, str, myCallback);
        expect(value).assertEqual(undefined);
      } catch (err) {
        console.error(`${TAG} error is ${err} `);
        expect().assertFail();
      }
      done();
    });

    /**
     * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_RESOLVE_DEFERRED_0100
     * @tc.name      : testNapiResolveDeferred0001
     * @tc.desc      : Testing napi_resolve_deferred interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('testNapiResolveDeferred0001', 0, async (done: Function) => {
      let TAG = "testNapiResolveDeferred0001";
      console.info(`${TAG} START`);
      try {
        let value = napitest.testPromise(1).then(
          (result) => {
            console.info(`${TAG} testString resolve1 result is: ` + result + "--" + JSON.stringify(result));
            expect(result > 0).assertTrue();
            done();
          }, (result) => {
          console.info(`${TAG} testString reject1 result is: ` + result + "--" + JSON.stringify(result));
          expect(result < 0).assertTrue();
        }
        catch(err) {
          console.error(`${TAG} error is ${err} `);
          expect().assertFail();
        }

        done();
      }
      )
      ;

      /**
       * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_CREATE_THREADSAFE_FUNCTION
       _0100
       * @tc.name      : testNapiCreateThreadsafeFunction0001
       * @tc.desc      : Testing napi_create_threadsafe_function interface.
       * @tc.size      : MediumTest
       * @tc.type      : Function
       * @tc.level     : Level 1
       */
      it('testNapiCreateThreadsafeFunction0001', 0, async (done: Function) => {
        let TAG = "testNapiCreateThreadsafeFunction0001";
        console.info(`${TAG} START`);
        try {
          let value = napitest.napiCreateThreadsafeFunction();
          expect(value).assertEqual(0);
        } catch (err) {
          console.error(`${TAG} error is ${err} `);
          expect().assertFail();
        }
        done();
      });

      /**
       * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_CREATE_THREADSAFE_FUNCTION
       _0200
       * @tc.name      : testNapiCreateThreadsafeFunction0002
       * @tc.desc      : Testing napi_create_threadsafe_function interface.
       * @tc.size      : MediumTest
       * @tc.type      : Function
       * @tc.level     : Level 1
       */
      it('testNapiCreateThreadsafeFunction0002', 0, async (done: Function) => {
        let TAG = "testNapiCreateThreadsafeFunction0002";
        console.info(`${TAG} START`);
        try {
          let value = napitest.napiCreateThreadsafeFunctionNull();
          expect(value).assertEqual(0);
        } catch (err) {
          console.error(`${TAG} error is ${err} `);
          expect().assertFail();
        }
        done();
      });

      /**
       * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_GET_THREADSAFE_FUNCTION_CONTEXT_0100
       * @tc.name      : testNapiGetThreadsafeFunctionContext0001
       * @tc.desc      : Testing napi_get_threadsafe_function_context interface.
       * @tc.size      : MediumTest
       * @tc.type      : Function
       * @tc.level     : Level 1
       */
      it('testNapiGetThreadsafeFunctionContext0001', 0, async (done: Function) => {
        let TAG = "testNapiGetThreadsafeFunctionContext0001";
        console.info(`${TAG} START`);
        try {
          let value = napitest.ThreadSafeTest(() => {
            return 666;
          });
          expect(value).assertEqual(1);
        } catch (err) {
          console.error(`${TAG} error is ${err} `);
          expect().assertFail();
        }
        done();
      });

      /**
       * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_GET_THREADSAFE_FUNCTION_CONTEXT_0200
       * @tc.name      : testNapiGetThreadsafeFunctionContext0002
       * @tc.desc      : Testing napi_get_threadsafe_function_context interface.
       * @tc.size      : MediumTest
       * @tc.type      : Function
       * @tc.level     : Level 1
       */
      it('testNapiGetThreadsafeFunctionContext0002', 0, async (done: Function) => {
        let TAG = "testNapiGetThreadsafeFunctionContext0002";
        console.info(`${TAG} START`);
        try {
          let value = napitest.ThreadSafeTestNull(() => {
            return 666;
          });
          expect().assertFail();
        } catch (err) {
          console.error(`${TAG} error is ${err} `);
          expect(err.message).assertEqual('empty error message');
        }
        done();
      });

      /**
       * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_CALL_THREADSAFE_FUNCTION_0100
       * @tc.name      : testNapiCallThreadsafeFunction0001
       * @tc.desc      : Testing napi_call_threadsafe_function interface.
       * @tc.size      : MediumTest
       * @tc.type      : Function
       * @tc.level     : Level 1
       */
      it('testNapiCallThreadsafeFunction0001', 0, async (done: Function) => {
        let TAG = "testNapiCallThreadsafeFunction0001";
        console.info(`${TAG} START`);
        try {
         let value = napitest.napiCallThreadsafeFunction();
          expect(value).assertEqual(0);
        } catch (err) {
          console.error(`${TAG} error is ${err} `);
          expect().assertFail();
        }
        done();
      });

      /**
       * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_CALL_THREADSAFE_FUNCTION_0200
       * @tc.name      : testNapiCallThreadsafeFunction0002
       * @tc.desc      : Testing napi_call_threadsafe_function interface.
       * @tc.size      : MediumTest
       * @tc.type      : Function
       * @tc.level     : Level 1
       */
      it('testNapiCallThreadsafeFunction0002', 0, async (done: Function) => {
        let TAG = "testNapiCallThreadsafeFunction0002";
        console.info(`${TAG} START`);
        try {
          let value = napitest.napiCallThreadsafeFunctionNull();
          expect(value).assertEqual(0);
        } catch (err) {
          console.error(`${TAG} error is ${err} `);
          expect().assertFail();
        }
        done();
      });

      /**
       * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_REF_THREADSAFE_FUNCTION_0100
       * @tc.name      : testNapiRefThreadsafeFunction0001
       * @tc.desc      : Testing napi_call_threadsafe_function interface.
       * @tc.size      : MediumTest
       * @tc.type      : Function
       * @tc.level     : Level 1
       */
      it('testNapiRefThreadsafeFunction0001', 0, async (done: Function) => {
        let TAG = "testNapiRefThreadsafeFunction0001";
        console.info(`${TAG} START`);
        try {
          let value = napitest.napiRefthreadSafeFunction();
          expect(value).assertEqual(0);
        } catch (err) {
          console.error(`${TAG} error is ${err} `);
          expect().assertFail();
        }
        done();
      });

      /**
       * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_REF_THREADSAFE_FUNCTION_0200
       * @tc.name      : testNapiRefThreadsafeFunction0002
       * @tc.desc      : Testing napi_call_threadsafe_function interface.
       * @tc.size      : MediumTest
       * @tc.type      : Function
       * @tc.level     : Level 1
       */
      it('testNapiRefThreadsafeFunction0002', 0, async (done: Function) => {
        let TAG = "testNapiRefThreadsafeFunction0002";
        console.info(`${TAG} START`);
        try {
          let value = napitest.napiRefthreadSafeFunctionNull();
          expect(value).assertEqual(0);
        } catch (err) {
          console.error(`${TAG} error is ${err} `);
          expect().assertFail();
        }
        done();
      });

      /**
       * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_CREATE_DATE_0100
       * @tc.name      : testNapiCreateDate0001
       * @tc.desc      : Testing napi_create_date interface.
       * @tc.size      : MediumTest
       * @tc.type      : Function
       * @tc.level     : Level 1
       */
      it('testNapiCreateDate0001', 0, async (done: Function) => {
        let TAG = "testNapiCreateDate0001";
        console.info(`${TAG} START`);
        try {
          let value = napitest.napiCreateDate();
          expect(value).assertEqual(1);
        } catch (err) {
          console.error(`${TAG} error is ${err} `);
          expect().assertFail();
        }
        done();
      });

      /**
       * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_CREATE_DATE_0200
       * @tc.name      : testNapiRefThreadsafeFunction0002
       * @tc.desc      : Testing napi_create_date interface.
       * @tc.size      : MediumTest
       * @tc.type      : Function
       * @tc.level     : Level 1
       */
      it('testNapiRefThreadsafeFunction0002', 0, async (done: Function) => {
        let TAG = "testNapiRefThreadsafeFunction0002";
        console.info(`${TAG} START`);
        try {
          napitest.napiCreateDateNull();
          expect().assertFail();
        } catch (err) {
          console.error(`${TAG} error is ${err} `);
          expect(err.message).assertEqual('assertion (status == napi_ok) failed: napi_create_date success');
        }
        done();
      });

      /**
       * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_CREATE_BIGINT_INT64_0100
       * @tc.name      : testNapiCreateBigintInt640001
       * @tc.desc      : Testing napi_create_bigint_int64 interface.
       * @tc.size      : MediumTest
       * @tc.type      : Function
       * @tc.level     : Level 1
       */
      it('testNapiCreateBigintInt640001', 0, async (done: Function) => {
        let TAG = "testNapiCreateBigintInt640001";
        console.info(`${TAG} START`);
        try {
          let value = napitest.napiCreateBigintInt64();
          expect(value).assertEqual(1);
        } catch (err) {
          console.error(`${TAG} error is ${err} `);
          expect().assertFail();
        }
        done();
      });

      /**
       * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_CREATE_BIGINT_INT64_0200
       * @tc.name      : testNapiCreateBigintInt640002
       * @tc.desc      : Testing napi_create_bigint_int64 interface.
       * @tc.size      : MediumTest
       * @tc.type      : Function
       * @tc.level     : Level 1
       */
      it('testNapiCreateBigintInt640002', 0, async (done: Function) => {
        let TAG = "testNapiCreateBigintInt640002";
        console.info(`${TAG} START`);
        try {
          napitest.napiCreateBigintInt64Null();
          expect().assertFail();
        } catch (err) {
          console.error(`${TAG} error is ${err} `);
          expect(err.message)
            .assertEqual('assertion (resultValue == testValue) failed: napi_get_value_bigint_int64 failed');
        }
        done();
      });

      /**
       * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_CREATE_BIGINT_UINT64_0100
       * @tc.name      : testNapiCreateBigintUint640001
       * @tc.desc      : Testing napi_create_bigint_uint64 interface.
       * @tc.size      : MediumTest
       * @tc.type      : Function
       * @tc.level     : Level 1
       */
      it('testNapiCreateBigintUint640001', 0, async (done: Function) => {
        let TAG = "testNapiCreateBigintUint640001";
        console.info(`${TAG} START`);
        try {
          let value = napitest.napiCreateBigintUint64();
          expect(value).assertEqual(1);
        } catch (err) {
          console.error(`${TAG} error is ${err} `);
          expect().assertFail();
        }
        done();
      });

      /**
       * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_CREATE_BIGINT_UINT64_0200
       * @tc.name      : testNapiCreateBigintUint640002
       * @tc.desc      : Testing napi_create_bigint_uint64 interface.
       * @tc.size      : MediumTest
       * @tc.type      : Function
       * @tc.level     : Level 1
       */
      it('testNapiCreateBigintUint640002', 0, async (done: Function) => {
        let TAG = "testNapiCreateBigintUint640002";
        console.info(`${TAG} START`);
        try {
          napitest.napiCreateBigintUint64Null();
          expect().assertFail();
        } catch (err) {
          console.error(`${TAG} error is ${err} `);
          expect(err.message)
            .assertEqual('assertion (resultValue == testValue) failed: napi_get_value_bigint_int64 failed');
        }
        done();
      });

      /**
       * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_CREATE_BIGINT_WORDS_0100
       * @tc.name      : testNapiCreateBigintWords0001
       * @tc.desc      : Testing napi_create_bigint_words interface.
       * @tc.size      : MediumTest
       * @tc.type      : Function
       * @tc.level     : Level 1
       */
      it('testNapiCreateBigintWords0001', 0, async (done: Function) => {
        let TAG = "testNapiCreateBigintWords0001";
        console.info(`${TAG} START`);
        try {
          let value = napitest.napiCreateBigintWords();
          expect(value).assertEqual(1);
        } catch (err) {
          console.error(`${TAG} error is ${err} `);
          expect().assertFail();
        }
        done();
      });

      /**
       * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_CREATE_BIGINT_WORDS_0200
       * @tc.name      : testNapiCreateBigintWords0002
       * @tc.desc      : Testing napi_create_bigint_words interface.
       * @tc.size      : MediumTest
       * @tc.type      : Function
       * @tc.level     : Level 1
       */
      it('testNapiCreateBigintWords0002', 0, async (done: Function) => {
        let TAG = "testNapiCreateBigintWords0002";
        console.info(`${TAG} START`);
        try {
          napitest.napiCreateBigintWordsNull();
          expect().assertFail();
        } catch (err) {
          console.error(`${TAG} error is ${err} `);
          expect(err.message).assertEqual('empty error message');
        }
        done();
      });

      /**
       * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_CREATE_BUFFER_0100
       * @tc.name      : testNapiCreateBuffer0001
       * @tc.desc      : Testing napi_create_buffer interface.
       * @tc.size      : MediumTest
       * @tc.type      : Function
       * @tc.level     : Level 1
       */
      it('testNapiCreateBuffer0001', 0, async (done: Function) => {
        let TAG = "testNapiCreateBuffer0001";
        console.info(`${TAG} START`);
        try {
          let buffer = napitest.CreateBuffer();
          expect(napitest.IsBuffer(buffer)).assertTrue();
          expect(napitest.GetBufferInfo(buffer)).assertTrue();
        } catch (err) {
          console.error(`${TAG} error is ${err} `);
          expect().assertFail();
        }
        done();
      });

      /**
       * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_CREATE_BUFFER_0200
       * @tc.name      : testNapiCreateBuffer0002
       * @tc.desc      : Testing napi_create_buffer interface.
       * @tc.size      : MediumTest
       * @tc.type      : Function
       * @tc.level     : Level 1
       */
      it('testNapiCreateBuffer0002', 0, async (done: Function) => {
        let TAG = "testNapiCreateBuffer0002";
        console.info(`${TAG} START`);
        try {
          let buffer = napitest.CreateBufferNull();
          expect().assertFail();
        } catch (err) {
          console.error(`${TAG} error is ${err} `);
          expect(err.message).assertEqual('Failed to create buffer');
        }
        done();
      });

      /**
       * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_CREATE_BUFFER_COPY_0100
       * @tc.name      : testNapiCreateBufferCopy0001
       * @tc.desc      : Testing napi_create_buffer_copy interface.
       * @tc.size      : MediumTest
       * @tc.type      : Function
       * @tc.level     : Level 1
       */
      it('testNapiCreateBufferCopy0001', 0, async (done: Function) => {
        let TAG = "testNapiCreateBufferCopy0001";
        console.info(`${TAG} START`);
        try {
          expect(napitest.BufferCopy().toString()).assertDeepEquals(napitest.testStr);
        } catch (err) {
          console.error(`${TAG} error is ${err} `);
          expect().assertFail();
        }
        done();
      });

      /**
       * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_CREATE_BUFFER_COPY_0200
       * @tc.name      : testNapiCreateBufferCopy0002
       * @tc.desc      : Testing napi_create_buffer_copy interface.
       * @tc.size      : MediumTest
       * @tc.type      : Function
       * @tc.level     : Level 1
       */
      it('testNapiCreateBufferCopy0002', 0, async (done: Function) => {
        let TAG = "testNapiCreateBufferCopy0002";
        console.info(`${TAG} START`);
        try {
          expect(napitest.BufferCopyNull().toString()).assertDeepEquals(napitest.testStr);
          expect().assertFail();
        } catch (err) {
          console.error(`${TAG} error is ${err} `);
          expect(err.message).assertEqual('Failed to create buffer');
        }
        done();
      });

      /**
       * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_CREATE_EXTERNAL_BUFFER_0100
       * @tc.name      : testNapiCreateExternalBuffer0001
       * @tc.desc      : Testing napi_create_external_buffer interface.
       * @tc.size      : MediumTest
       * @tc.type      : Function
       * @tc.level     : Level 1
       */
      it('testNapiCreateExternalBuffer0001', 0, async (done: Function) => {
        let TAG = "testNapiCreateExternalBuffer0001";
        console.info(`${TAG} START`);
        try {
          expect(napitest.CreateExternalBuffer().toString()).assertDeepEquals(napitest.testStr);
        } catch (err) {
          console.error(`${TAG} error is ${err} `);
          expect().assertFail();
        }
        done();
      });

      /**
       * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_CREATE_EXTERNAL_BUFFER_0200
       * @tc.name      : testNapiCreateExternalBuffer0002
       * @tc.desc      : Testing napi_create_external_buffer interface.
       * @tc.size      : MediumTest
       * @tc.type      : Function
       * @tc.level     : Level 1
       */
      it('testNapiCreateExternalBuffer0002', 0, async (done: Function) => {
        let TAG = "testNapiCreateExternalBuffer0002";
        console.info(`${TAG} START`);
        try {
          expect(napitest.CreateExternalBufferNull().toString()).assertDeepEquals(napitest.testStr);
          expect().assertFail();
        } catch (err) {
          console.error(`${TAG} error is ${err} `);
          expect(err.message).assertEqual('empty error message');
        }
        done();
      });

      /**
       * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_GET_BUFFER_INFO_0100
       * @tc.name      : testNapiGetBufferInfo0001
       * @tc.desc      : Testing napi_get_buffer_info interface.
       * @tc.size      : MediumTest
       * @tc.type      : Function
       * @tc.level     : Level 1
       */
      it('testNapiGetBufferInfo0001', 0, async (done: Function) => {
        let TAG = "testNapiGetBufferInfo0001";
        console.info(`${TAG} START`);
        try {
          let buffer = napitest.CreateBuffer();
          expect(napitest.GetBufferInfo(buffer)).assertTrue();
        } catch (err) {
          console.error(`${TAG} error is ${err} `);
          expect().assertFail();
        }
        done();
      });

      /**
       * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_GET_BUFFER_INFO_0200
       * @tc.name      : testNapiGetBufferInfo0002
       * @tc.desc      : Testing napi_get_buffer_info interface.
       * @tc.size      : MediumTest
       * @tc.type      : Function
       * @tc.level     : Level 1
       */
      it('testNapiGetBufferInfo0002', 0, async (done: Function) => {
        let TAG = "testNapiGetBufferInfo0002";
        console.info(`${TAG} START`);
        try {
          let buffer = napitest.CreateBuffer();
          expect(napitest.GetBufferInfoNull(buffer)).assertTrue();
          expect().assertFail();
        } catch (err) {
          console.error(`${TAG} error is ${err} `);
          expect(err.message).assertEqual('Failed to get buffer info.');
        }
        done();
      });

      /**
       * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_IS_BUFFER_0100
       * @tc.name      : testNapiIsBuffer0001
       * @tc.desc      : Testing napi_is_buffer interface.
       * @tc.size      : MediumTest
       * @tc.type      : Function
       * @tc.level     : Level 1
       */
      it('testNapiIsBuffer0001', 0, async (done: Function) => {
        let TAG = "testNapiIsBuffer0001";
        console.info(`${TAG} START`);
        try {
          let buffer = napitest.CreateBuffer();
          expect(napitest.IsBuffer(buffer)).assertTrue();
        } catch (err) {
          console.error(`${TAG} error is ${err} `);
          expect().assertFail();
        }
        done();
      });

      /**
       * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_IS_BUFFER_0200
       * @tc.name      : testNapiIsBuffer0002
       * @tc.desc      : Testing napi_is_buffer interface.
       * @tc.size      : MediumTest
       * @tc.type      : Function
       * @tc.level     : Level 1
       */
      it('testNapiIsBuffer0002', 0, async (done: Function) => {
        let TAG = "testNapiIsBuffer0002";
        console.info(`${TAG} START`);
        try {
          let buffer = napitest.CreateBuffer();
          expect(napitest.IsBufferNull(buffer)).assertTrue();
          expect().assertFail();
        } catch (err) {
          console.error(`${TAG} error is ${err} `);
          expect(err.message).assertEqual('The parameter instance is not of type buffer.');
        }
        done();
      });

      /**
       * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_OBJECT_FREEZE_0100
       * @tc.name      : testNapiObjectFreeze0001
       * @tc.desc      : Testing napi_object_freeze interface.
       * @tc.size      : MediumTest
       * @tc.type      : Function
       * @tc.level     : Level 1
       */
      it('testNapiObjectFreeze0001', 0, async (done: Function) => {
        let TAG = "testNapiObjectFreeze0001";
        console.info(`${TAG} START`);
        try {
          const obj = {
            x: 10,
            y: 10,
            z: 10,
          };
          napitest.FreezeTest(obj);
          expect(Object.isFrozen(obj)).assertDeepEquals(true);
        } catch (err) {
          console.error(`${TAG} error is ${err} `);
          expect().assertFail();
        }
        done();
      });

      /**
       * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_OBJECT_FREEZE_0200
       * @tc.name      : testNapiObjectFreeze0002
       * @tc.desc      : Testing napi_object_freeze interface.
       * @tc.size      : MediumTest
       * @tc.type      : Function
       * @tc.level     : Level 1
       */
      it('testNapiObjectFreeze0002', 0, async (done: Function) => {
        let TAG = "testNapiObjectFreeze0002";
        console.info(`${TAG} START`);
        try {
          const obj = {
            x: 10,
            y: 10,
            z: 10,
          };
          napitest.FreezeTestNull(obj);
          expect().assertFail();
        } catch (err) {
          console.error(`${TAG} error is ${err} `);
          expect(err.message).assertEqual('empty error message');
        }
        done();
      });

      /**
       * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_OBJECT_SEAL_0100
       * @tc.name      : testNapiObjectSeal0001
       * @tc.desc      : Testing napi_object_seal interface.
       * @tc.size      : MediumTest
       * @tc.type      : Function
       * @tc.level     : Level 1
       */
      it('testNapiObjectSeal0001', 0, async (done: Function) => {
        let TAG = "testNapiObjectSeal0001";
        console.info(`${TAG} START`);
        try {
          const obj = {
            x: 'a',
            y: 'b',
            z: 'c',
          };
          napitest.SealTest(obj);
          expect(Object.isSealed(obj)).assertDeepEquals(true);
          obj.x = 'd';
        } catch (err) {
          console.error(`${TAG} error is ${err} `);
          expect().assertFail();
        }
        done();
      });

      /**
       * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_OBJECT_SEAL_0200
       * @tc.name      : testNapiObjectSeal0002
       * @tc.desc      : Testing napi_object_seal interface.
       * @tc.size      : MediumTest
       * @tc.type      : Function
       * @tc.level     : Level 1
       */
      it('testNapiObjectSeal0002', 0, async (done: Function) => {
        let TAG = "testNapiObjectSeal0002";
        console.info(`${TAG} START`);
        try {
          const obj = {
            x: 'a',
            y: 'b',
            z: 'c',
          };
          napitest.SealTestNull(obj);
          expect().assertFail();
        } catch (err) {
          console.error(`${TAG} error is ${err} `);
          expect(err.message).assertEqual('empty error message');
        }
        done();
      });

      /**
       * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_GET_ALL_PROPERTY_NAMES_0100
       * @tc.name      : testNapiGetAllPropertyNames0001
       * @tc.desc      : Testing napi_get_all_property_names interface.
       * @tc.size      : MediumTest
       * @tc.type      : Function
       * @tc.level     : Level 1
       */
      it('testNapiGetAllPropertyNames0001', 0, async (done: Function) => {
        let TAG = "testNapiGetAllPropertyNames0001";
        console.info(`${TAG} START`);
        try {
          const expectedForElement = {
            envIsNull: 'Invalid argument',
            objectIsNull: 'Invalid parameter',
            valueIsNull: 'Invalid parameter',
          };
          deepStrictEqualOfObject(napitest.GetAllPropertyNames(), expectedForElement);
        } catch (err) {
          console.error(`${TAG} error is ${err} `);
          expect().assertFail();
        }
        done();
      });

      /**
       * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_GET_ALL_PROPERTY_NAMES_0200
       * @tc.name      : testNapiGetAllPropertyNames0002
       * @tc.desc      : Testing napi_get_all_property_names interface.
       * @tc.size      : MediumTest
       * @tc.type      : Function
       * @tc.level     : Level 1
       */
      it('testNapiGetAllPropertyNames0002', 0, async (done: Function) => {
        let TAG = "testNapiGetAllPropertyNames0002";
        console.info(`${TAG} START`);
        try {
          const expectedForElement = {
            envIsNull: 'Invalid argument',
          };
          deepStrictEqualOfObject(napitest.GetAllPropertyNamesEnvNull(), expectedForElement);
        } catch (err) {
          console.error(`${TAG} error is ${err} `);
          expect().assertFail();
        }
        done();
      });

      /**
       * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_GET_ALL_PROPERTY_NAMES_0300
       * @tc.name      : testNapiGetAllPropertyNames0003
       * @tc.desc      : Testing napi_get_all_property_names interface.
       * @tc.size      : MediumTest
       * @tc.type      : Function
       * @tc.level     : Level 1
       */
      it('testNapiGetAllPropertyNames0003', 0, async (done: Function) => {
        let TAG = "testNapiGetAllPropertyNames0003";
        console.info(`${TAG} START`);
        try {
          const expectedForElement = {
            objectIsNull: 'Invalid parameter',
          };
          deepStrictEqualOfObject(napitest.GetAllPropertyNamesObjNull(), expectedForElement);
        } catch (err) {
          console.error(`${TAG} error is ${err} `);
          expect().assertFail();
        }
        done();
      });

      /**
       * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_GET_ALL_PROPERTY_NAMES_0400
       * @tc.name      : testNapiGetAllPropertyNames0004
       * @tc.desc      : Testing napi_get_all_property_names interface.
       * @tc.size      : MediumTest
       * @tc.type      : Function
       * @tc.level     : Level 1
       */
      it('testNapiGetAllPropertyNames0004', 0, async (done: Function) => {
        let TAG = "testNapiGetAllPropertyNames0004";
        console.info(`${TAG} START`);
        try {
          const expectedForElement = {
            valueIsNull: 'Invalid parameter',
          };
          deepStrictEqualOfObject(napitest.GetAllPropertyNamesResNull(), expectedForElement);
        } catch (err) {
          console.error(`${TAG} error is ${err} `);
          expect().assertFail();
        }
        done();
      });

      /**
       * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_DETACH_ARRAYBUFFER_0100
       * @tc.name      : testNapiDetachArraybuffer0001
       * @tc.desc      : Testing napi_detach_arraybuffer interface.
       * @tc.size      : MediumTest
       * @tc.type      : Function
       * @tc.level     : Level 1
       */
      it('testNapiDetachArraybuffer0001', 0, async (done: Function) => {
        let TAG = "testNapiDetachArraybuffer0001";
        console.info(`${TAG} START`);
        try {
          const buffer = napitest.External();
          expect(!napitest.IsDetachedTest(buffer.buffer)).assertTrue();
          napitest.DetachTest(buffer);
          expect(napitest.IsDetachedTest(buffer.buffer)).assertTrue();
        } catch (err) {
          console.error(`${TAG} error is ${err} `);
          expect().assertFail();
        }
        done();
      });

      /**
       * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_DETACH_ARRAYBUFFER_0200
       * @tc.name      : testNapiDetachArraybuffer0002
       * @tc.desc      : Testing napi_detach_arraybuffer interface.
       * @tc.size      : MediumTest
       * @tc.type      : Function
       * @tc.level     : Level 1
       */
      it('testNapiDetachArraybuffer0002', 0, async (done: Function) => {
        let TAG = "testNapiDetachArraybuffer0002";
        console.info(`${TAG} START`);
        try {
          const buffer = napitest.External();
          expect(!napitest.IsDetachedTest(buffer.buffer)).assertTrue();
          napitest.DetachTestEnvNull(buffer);
          expect().assertFail();
        } catch (err) {
          console.error(`${TAG} error is ${err} `);
          expect(err.message).assertEqual('empty error message');
        }
        done();
      });

      /**
       * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_DETACH_ARRAYBUFFER_0300
       * @tc.name      : testNapiDetachArraybuffer0003
       * @tc.desc      : Testing napi_detach_arraybuffer interface.
       * @tc.size      : MediumTest
       * @tc.type      : Function
       * @tc.level     : Level 1
       */
      it('testNapiDetachArraybuffer0003', 0, async (done: Function) => {
        let TAG = "testNapiDetachArraybuffer0003";
        console.info(`${TAG} START`);
        try {
          const buffer = napitest.External();
          expect(!napitest.IsDetachedTest(buffer.buffer)).assertTrue();
          napitest.DetachTestArrNull(buffer);
          expect().assertFail();
        } catch (err) {
          console.error(`${TAG} error is ${err} `);
          expect(err.message).assertEqual('empty error message');
        }
        done();
      });

      /**
       * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_IS_DETACHED_ARRAYBUFFER_0100
       * @tc.name      : testNapiIsDetachedArraybuffer0001
       * @tc.desc      : Testing napi_is_detached_arraybuffer interface.
       * @tc.size      : MediumTest
       * @tc.type      : Function
       * @tc.level     : Level 1
       */
      it('testNapiIsDetachedArraybuffer0001', 0, async (done: Function) => {
        let TAG = "testNapiIsDetachedArraybuffer0001";
        console.info(`${TAG} START`);
        try {
          const buffer1 = new ArrayBuffer(128);
          expect(!napitest.IsDetachedTest(buffer1)).assertTrue();
          const buffer = napitest.External();
          expect(!napitest.IsDetachedTest(buffer.buffer)).assertTrue();
          napitest.DetachTest(buffer);
          expect(napitest.IsDetachedTest(buffer.buffer)).assertTrue();
        } catch (err) {
          console.error(`${TAG} error is ${err} `);
          expect().assertFail();
        }
        done();
      });

      /**
       * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_IS_DETACHED_ARRAYBUFFER_0200
       * @tc.name      : testNapiIsDetachedArraybuffer0002
       * @tc.desc      : Testing napi_is_detached_arraybuffer interface.
       * @tc.size      : MediumTest
       * @tc.type      : Function
       * @tc.level     : Level 1
       */
      it('testNapiIsDetachedArraybuffer0002', 0, async (done: Function) => {
        let TAG = "testNapiIsDetachedArraybuffer0002";
        console.info(`${TAG} START`);
        try {
          const buffer1 = new ArrayBuffer(128);
          expect(!napitest.IsDetachedTestEnvNull(buffer1)).assertTrue();
          expect().assertFail();
        } catch (err) {
          console.error(`${TAG} error is ${err} `);
          expect(err.message).assertEqual('Failed to check if array buffer is detached.');
        }
        done();
      });

      /**
       * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_IS_DETACHED_ARRAYBUFFER_0300
       * @tc.name      : testNapiIsDetachedArraybuffer0003
       * @tc.desc      : Testing napi_is_detached_arraybuffer interface.
       * @tc.size      : MediumTest
       * @tc.type      : Function
       * @tc.level     : Level 1
       */
      it('testNapiIsDetachedArraybuffer0003', 0, async (done: Function) => {
        let TAG = "testNapiIsDetachedArraybuffer0003";
        console.info(`${TAG} START`);
        try {
          const buffer1 = new ArrayBuffer(128);
          expect(!napitest.IsDetachedTestArrNull(buffer1)).assertTrue();
          expect().assertFail();
        } catch (err) {
          console.error(`${TAG} error is ${err} `);
          expect(err.message).assertEqual('Failed to check if array buffer is detached.');
        }
        done();
      });

      /**
       * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_IS_DETACHED_ARRAYBUFFER_0400
       * @tc.name      : testNapiIsDetachedArraybuffer0004
       * @tc.desc      : Testing napi_is_detached_arraybuffer interface.
       * @tc.size      : MediumTest
       * @tc.type      : Function
       * @tc.level     : Level 1
       */
      it('testNapiIsDetachedArraybuffer0004', 0, async (done: Function) => {
        let TAG = "testNapiIsDetachedArraybuffer0004";
        console.info(`${TAG} START`);
        try {
          const buffer1 = new ArrayBuffer(128);
          expect(!napitest.IsDetachedTestResNull(buffer1)).assertTrue();
          expect().assertFail();
        } catch (err) {
          console.error(`${TAG} error is ${err} `);
          expect(err.message).assertEqual('Failed to check if array buffer is detached.');
        }
        done();
      });

      /**
       * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_SET_INSTANCE_DATA_0100
       * @tc.name      : testNapiSetInstanceData0001
       * @tc.desc      : Testing napi_set_instance_data interface.
       * @tc.size      : MediumTest
       * @tc.type      : Function
       * @tc.level     : Level 1
       */
      it('testNapiSetInstanceData0001', 0, async (done: Function) => {
        let TAG = "testNapiSetInstanceData0001";
        console.info(`${TAG} START`);
        try {
          let value = napitest.napiSetInstanceData();
          expect(value).assertEqual(1);
        } catch (err) {
          console.error(`${TAG} error is ${err} `);
          expect().assertFail();
        }
        done();
      });

      /**
       * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_SET_INSTANCE_DATA_0200
       * @tc.name      : testNapiSetInstanceData0002
       * @tc.desc      : Testing napi_set_instance_data interface.
       * @tc.size      : MediumTest
       * @tc.type      : Function
       * @tc.level     : Level 1
       */
      it('testNapiSetInstanceData0002', 0, async (done: Function) => {
        let TAG = "testNapiSetInstanceData0002";
        console.info(`${TAG} START`);
        try {
          napitest.napiSetInstanceDataEnvNull();
          expect().assertFail();
        } catch (err) {
          console.error(`${TAG} error is ${err} `);
          expect(err.message).assertEqual('empty error message');
        }
        done();
      });

      /**
       * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_GET_INSTANCE_DATA_0100
       * @tc.name      : testNapiGetInstanceData0001
       * @tc.desc      : Testing napi_get_instance_data interface.
       * @tc.size      : MediumTest
       * @tc.type      : Function
       * @tc.level     : Level 1
       */
      it('testNapiGetInstanceData0001', 0, async (done: Function) => {
        let TAG = "testNapiGetInstanceData0001";
        console.info(`${TAG} START`);
        try {
          napitest.napiGetInstanceDataEnvNull();
          expect().assertFail();
        } catch (err) {
          console.error(`${TAG} error is ${err} `);
          expect(err.message).assertEqual('empty error message');
        }
        done();
      });

      /**
       * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_GET_INSTANCE_DATA_0200
       * @tc.name      : testNapiGetInstanceData0002
       * @tc.desc      : Testing napi_get_instance_data interface.
       * @tc.size      : MediumTest
       * @tc.type      : Function
       * @tc.level     : Level 1
       */
      it('testNapiGetInstanceData0002', 0, async (done: Function) => {
        let TAG = "testNapiGetInstanceData0002";
        console.info(`${TAG} START`);
        try {
          napitest.napiGetInstanceDataDataNull();
          expect().assertFail();
        } catch (err) {
          console.error(`${TAG} error is ${err} `);
          expect(err.message).assertEqual('empty error message');
        }
        done();
      });

      /**
       * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_ADD_ENV_CLEANUP_HOOK_0100
       * @tc.name      : testNapiAddEnvCleanupHook0001
       * @tc.desc      : Testing napi_add_env_cleanup_hook interface.
       * @tc.size      : MediumTest
       * @tc.type      : Function
       * @tc.level     : Level 1
       */
      it('testNapiAddEnvCleanupHook0001', 0, async (done: Function) => {
        let TAG = "testNapiAddEnvCleanupHook0001";
        console.info(`${TAG} START`);
        try {
          let value = napitest.napiEnvCleanUpHook();
          expect(value == undefined).assertTrue();
        } catch (err) {
          console.error(`${TAG} error is ${err} `);
          expect().assertFail();
        }
        done();
      });

      /**
       * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_ADD_ENV_CLEANUP_HOOK_0200
       * @tc.name      : testNapiAddEnvCleanupHook0002
       * @tc.desc      : Testing napi_add_env_cleanup_hook interface.
       * @tc.size      : MediumTest
       * @tc.type      : Function
       * @tc.level     : Level 1
       */
      it('testNapiAddEnvCleanupHook0002', 0, async (done: Function) => {
        let TAG = "testNapiAddEnvCleanupHook0002";
        console.info(`${TAG} START`);
        try {
          let value = napitest.napiEnvCleanUpHookEnvNull();
          expect(value == undefined).assertTrue();
        } catch (err) {
          console.error(`${TAG} error is ${err} `);
          expect().assertFail();
        }
        done();
      });

      /**
       * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_ADD_ENV_CLEANUP_HOOK_0300
       * @tc.name      : testNapiAddEnvCleanupHook0003
       * @tc.desc      : Testing napi_add_env_cleanup_hook interface.
       * @tc.size      : MediumTest
       * @tc.type      : Function
       * @tc.level     : Level 1
       */
      it('testNapiAddEnvCleanupHook0003', 0, async (done: Function) => {
        let TAG = "testNapiAddEnvCleanupHook0003";
        console.info(`${TAG} START`);
        try {
          let value = napitest.napiEnvCleanUpHookFuncNull();
          expect(value == undefined).assertTrue();
        } catch (err) {
          console.error(`${TAG} error is ${err} `);
          expect().assertFail();
        }
        done();
      });

      /**
       * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_REMOVE_ENV_CLEANUP_HOOK_0100
       * @tc.name      : testNapiRemoveEnvCleanupHook0001
       * @tc.desc      : Testing napi_remove_env_cleanup_hook interface.
       * @tc.size      : MediumTest
       * @tc.type      : Function
       * @tc.level     : Level 1
       */
      it('testNapiRemoveEnvCleanupHook0001', 0, async (done: Function) => {
        let TAG = "testNapiRemoveEnvCleanupHook0001";
        console.info(`${TAG} START`);
        try {
          let value = napitest.napiRemoveEnvCleanUpHookEnvNull();
          expect(value == undefined).assertTrue();
        } catch (err) {
          console.error(`${TAG} error is ${err} `);
          expect().assertFail();
        }
        done();
      });

      /**
       * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_REMOVE_ENV_CLEANUP_HOOK_0200
       * @tc.name      : testNapiRemoveEnvCleanupHook0002
       * @tc.desc      : Testing napi_remove_env_cleanup_hook interface.
       * @tc.size      : MediumTest
       * @tc.type      : Function
       * @tc.level     : Level 1
       */
      it('testNapiRemoveEnvCleanupHook0002', 0, async (done: Function) => {
        let TAG = "testNapiRemoveEnvCleanupHook0002";
        console.info(`${TAG} START`);
        try {
          let value = napitest.napiRemoveEnvCleanUpHookFuncNull();
          expect(value == undefined).assertTrue();
        } catch (err) {
          console.error(`${TAG} error is ${err} `);
          expect().assertFail();
        }
        done();
      });

      /**
       * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_ADD_ASYNC_CLEANUP_HOOK_0100
       * @tc.name      : testNapiAddAsyncCleanupHook0001
       * @tc.desc      : Testing napi_add_async_cleanup_hook interface.
       * @tc.size      : MediumTest
       * @tc.type      : Function
       * @tc.level     : Level 1
       */
      it('testNapiAddAsyncCleanupHook0001', 0, async (done: Function) => {
        let TAG = "testNapiAddAsyncCleanupHook0001";
        console.info(`${TAG} START`);
        try {
          let value = napitest.napiAsyncCleanUpHook();
          expect(value == undefined).assertTrue();
        } catch (err) {
          console.error(`${TAG} error is ${err} `);
          expect().assertFail();
        }
        done();
      });

      /**
       * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_ADD_ASYNC_CLEANUP_HOOK_0200
       * @tc.name      : testNapiAddAsyncCleanupHook0002
       * @tc.desc      : Testing napi_add_async_cleanup_hook interface.
       * @tc.size      : MediumTest
       * @tc.type      : Function
       * @tc.level     : Level 1
       */
      it('testNapiAddAsyncCleanupHook0002', 0, async (done: Function) => {
        let TAG = "testNapiAddAsyncCleanupHook0002";
        console.info(`${TAG} START`);
        try {
          let value = napitest.napiAsyncCleanUpHookEnvNull();
          expect(value == undefined).assertTrue();
        } catch (err) {
          console.error(`${TAG} error is ${err} `);
          expect().assertFail();
        }
        done();
      });

      /**
       * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_ADD_ASYNC_CLEANUP_HOOK_0300
       * @tc.name      : testNapiAddAsyncCleanupHook0003
       * @tc.desc      : Testing napi_add_async_cleanup_hook interface.
       * @tc.size      : MediumTest
       * @tc.type      : Function
       * @tc.level     : Level 1
       */
      it('testNapiAddAsyncCleanupHook0003', 0, async (done: Function) => {
        let TAG = "testNapiAddAsyncCleanupHook0003";
        console.info(`${TAG} START`);
        try {
          let value = napitest.napiAsyncCleanUpHookHookNull();
          expect(value == undefined).assertTrue();
        } catch (err) {
          console.error(`${TAG} error is ${err} `);
          expect().assertFail();
        }
        done();
      });

      /**
       * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_REMOVE_ASYNC_CLEANUP_HOOK_0100
       * @tc.name      : testNapiRemoveAsyncCleanupHook0001
       * @tc.desc      : Testing napi_remove_async_cleanup_hook interface.
       * @tc.size      : MediumTest
       * @tc.type      : Function
       * @tc.level     : Level 1
       */
      it('testNapiRemoveAsyncCleanupHook0001', 0, async (done: Function) => {
        let TAG = "testNapiRemoveAsyncCleanupHook0001";
        console.info(`${TAG} START`);
        try {
          let value = napitest.napiAsyncCleanUpHookHandleNull();
          expect(value == undefined).assertTrue();
        } catch (err) {
          console.error(`${TAG} error is ${err} `);
          expect().assertFail();
        }
        done();
      });

      /**
       * @tc.number    : SUB_RUNTIME_LANGUAGE_NODE_API_GET_MODULE_FILE_NAME_0100
       * @tc.name      : testNapiApiGetModuleFileName0001
       * @tc.desc      : Testing node_api_get_module_file_name interface.
       * @tc.size      : MediumTest
       * @tc.type      : Function
       * @tc.level     : Level 1
       */
      it('testNapiApiGetModuleFileName0001', 0, async (done: Function) => {
        let TAG = "testNapiApiGetModuleFileName0001";
        console.info(`${TAG} START`);
        try {
          let value = napitest.getModuleFileName().indexOf(".so");
          expect(value > 0).assertTrue();
        } catch (err) {
          console.error(`${TAG} error is ${err} `);
          expect().assertFail();
        }
        done();
      });

      /**
       * @tc.number    : SUB_RUNTIME_LANGUAGE_NODE_API_GET_MODULE_FILE_NAME_0200
       * @tc.name      : testNapiApiGetModuleFileName0002
       * @tc.desc      : Testing node_api_get_module_file_name interface.
       * @tc.size      : MediumTest
       * @tc.type      : Function
       * @tc.level     : Level 1
       */
      it('testNapiApiGetModuleFileName0002', 0, async (done: Function) => {
        let TAG = "testNapiApiGetModuleFileName0002";
        console.info(`${TAG} START`);
        try {
          let value = napitest.getModuleFileNameEnvNull().indexOf(".so");
          expect().assertFail();
        } catch (err) {
          console.error(`${TAG} error is ${err} `);
          expect(err.message).assertEqual('Cannot read property indexOf of undefined');
        }
        done();
      });

      /**
       * @tc.number    : SUB_RUNTIME_LANGUAGE_NODE_API_GET_MODULE_FILE_NAME_0300
       * @tc.name      : testNapiApiGetModuleFileName0003
       * @tc.desc      : Testing node_api_get_module_file_name interface.
       * @tc.size      : MediumTest
       * @tc.type      : Function
       * @tc.level     : Level 1
       */
      it('testNapiApiGetModuleFileName0003', 0, async (done: Function) => {
        let TAG = "testNapiApiGetModuleFileName0003";
        console.info(`${TAG} START`);
        try {
          let value = napitest.getModuleFileNameResNull().indexOf(".so");
          expect().assertFail();
        } catch (err) {
          console.error(`${TAG} error is ${err} `);
          expect(err.message).assertEqual('Cannot read property indexOf of undefined');
        }
        done();
      });

      /**
       * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_ADD_FINALIZER_0100
       * @tc.name      : testNapiAddFinalizer0001
       * @tc.desc      : Testing napi_add_finalizer interface.
       * @tc.size      : MediumTest
       * @tc.type      : Function
       * @tc.level     : Level 1
       */
      it('testNapiApiGetModuleFileName0001', 0, async (done: Function) => {
        let TAG = "testNapiApiGetModuleFileName0001";
        console.info(`${TAG} START`);
        try {
          let value = napitest.createAsyncResource({
            foo: 'bar'
          }, false);
          expect(value instanceof Object).assertTrue();
        } catch (err) {
          console.error(`${TAG} error is ${err} `);
          expect().assertFail();
        }
        done();
      });

      /**
       * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_ADD_FINALIZER_0200
       * @tc.name      : testNapiAddFinalizer0002
       * @tc.desc      : Testing napi_add_finalizer interface.
       * @tc.size      : MediumTest
       * @tc.type      : Function
       * @tc.level     : Level 1
       */
      it('testNapiApiGetModuleFileName0002', 0, async (done: Function) => {
        let TAG = "testNapiApiGetModuleFileName0002";
        console.info(`${TAG} START`);
        try {
          let value = napitest.createAsyncResourceEnvNull({
            foo: 'bar'
          }, false);
          expect(value instanceof Object).assertTrue();
        } catch (err) {
          console.error(`${TAG} error is ${err} `);
          expect().assertFail();
        }
        done();
      });

      /**
       * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_ADD_FINALIZER_0300
       * @tc.name      : testNapiAddFinalizer0003
       * @tc.desc      : Testing napi_add_finalizer interface.
       * @tc.size      : MediumTest
       * @tc.type      : Function
       * @tc.level     : Level 1
       */
      it('testNapiApiGetModuleFileName0003', 0, async (done: Function) => {
        let TAG = "testNapiApiGetModuleFileName0003";
        console.info(`${TAG} START`);
        try {
          let value = napitest.createAsyncResourceObjNull({
            foo: 'bar'
          }, false);
          expect(value instanceof Object).assertTrue();
        } catch (err) {
          console.error(`${TAG} error is ${err} `);
          expect().assertFail();
        }
        done();
      });

      /**
       * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_ADD_FINALIZER_0400
       * @tc.name      : testNapiAddFinalizer0004
       * @tc.desc      : Testing napi_add_finalizer interface.
       * @tc.size      : MediumTest
       * @tc.type      : Function
       * @tc.level     : Level 1
       */
      it('testNapiApiGetModuleFileName0004', 0, async (done: Function) => {
        let TAG = "testNapiApiGetModuleFileName0004";
        console.info(`${TAG} START`);
        try {
          let value = napitest.createAsyncResourceCbNull({
            foo: 'bar'
          }, false);
          expect(value instanceof Object).assertTrue();
        } catch (err) {
          console.error(`${TAG} error is ${err} `);
          expect().assertFail();
        }
        done();
      });

      /**
       * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_QUEUE_ASYNC_WORK_WITH_QOS_0100
       * @tc.name      : testNapiQueueAsyncWorkWithQos0001
       * @tc.desc      : Testing napi_queue_async_work_with_qos interface.
       * @tc.size      : MediumTest
       * @tc.type      : Function
       * @tc.level     : Level 1
       */
      it('testNapiQueueAsyncWorkWithQos0001', 0, async (done: Function) => {
        let TAG = "testNapiQueueAsyncWorkWithQos0001";
        console.info(`${TAG} START`);
        try {
          let value = napitest.asyncWorkWithQos(1000, (input) => {
            console.info('asyncWorkWithQos ' + (input * 2));
            return input * 2;
          });
          expect(value).assertEqual(0);
        } catch (err) {
          console.error(`${TAG} error is ${err} `);
          expect().assertFail();
        }
        done();
      });

      /**
       * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_QUEUE_ASYNC_WORK_WITH_QOS_0200
       * @tc.name      : testNapiQueueAsyncWorkWithQos0002
       * @tc.desc      : Testing napi_queue_async_work_with_qos interface.
       * @tc.size      : MediumTest
       * @tc.type      : Function
       * @tc.level     : Level 1
       */
      it('testNapiQueueAsyncWorkWithQos0002', 0, async (done: Function) => {
        let TAG = "testNapiQueueAsyncWorkWithQos0002";
        console.info(`${TAG} START`);
        try {
          let value = napitest.asyncWorkWithQosEnvNull(1000, (input) => {
            console.info('asyncWorkWithQos ' + (input * 2));
            return input * 2;
          });
          expect().assertFail();
        } catch (err) {
          console.error(`${TAG} error is ${err} `);
          expect(err.message).assertEqual('empty error message');
        }
        done();
      });

      /**
       * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_QUEUE_ASYNC_WORK_WITH_QOS_0300
       * @tc.name      : testNapiQueueAsyncWorkWithQos0003
       * @tc.desc      : Testing napi_queue_async_work_with_qos interface.
       * @tc.size      : MediumTest
       * @tc.type      : Function
       * @tc.level     : Level 1
       */
      it('testNapiQueueAsyncWorkWithQos0003', 0, async (done: Function) => {
        let TAG = "testNapiQueueAsyncWorkWithQos0003";
        console.info(`${TAG} START`);
        try {
          let value = napitest.asyncWorkWithQosWorkNull(1000, (input) => {
            console.info('asyncWorkWithQos ' + (input * 2));
            return input * 2;
          });
          expect().assertFail();
        } catch (err) {
          console.error(`${TAG} error is ${err} `);
          expect(err.message).assertEqual('empty error message');
        }
        done();
      });

      /**
       * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_RUN_SCRIPT_PATH_0100
       * @tc.name      : testNapiRunScriptPath0001
       * @tc.desc      : Testing napi_run_script_path interface.
       * @tc.size      : MediumTest
       * @tc.type      : Function
       * @tc.level     : Level 1
       */
      it('testNapiRunScriptPath0001', 0, async (done: Function) => {
        let TAG = "testNapiRunScriptPath0001";
        console.info(`${TAG} START`);
        try {
          let value = napitest.napiRunScriptPath();
          expect(value).assertEqual(0);
        } catch (err) {
          console.error(`${TAG} error is ${err} `);
          expect().assertFail();
        }
        done();
      });

      /**
       * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_RUN_SCRIPT_PATH_0200
       * @tc.name      : testNapiRunScriptPath0002
       * @tc.desc      : Testing napi_run_script_path interface.
       * @tc.size      : MediumTest
       * @tc.type      : Function
       * @tc.level     : Level 1
       */
      it('testNapiRunScriptPath0002', 0, async (done: Function) => {
        let TAG = "testNapiRunScriptPath0002";
        console.info(`${TAG} START`);
        try {
          let value = napitest.napiRunScriptPathEnvNull();
          expect().assertFail();
        } catch (err) {
          console.error(`${TAG} error is ${err} `);
          expect(err.message).assertEqual('assertion (status == napi_ok) failed: napi_run_script_path ok');
        }
        done();
      });

      /**
       * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_RUN_SCRIPT_PATH_0300
       * @tc.name      : testNapiRunScriptPath0003
       * @tc.desc      : Testing napi_run_script_path interface.
       * @tc.size      : MediumTest
       * @tc.type      : Function
       * @tc.level     : Level 1
       */
      it('testNapiRunScriptPath0003', 0, async (done: Function) => {
        let TAG = "testNapiRunScriptPath0003";
        console.info(`${TAG} START`);
        try {
          let value = napitest.napiRunScriptPathResNull();
          expect().assertFail();
        } catch (err) {
          console.error(`${TAG} error is ${err} `);
          expect(err.message).assertEqual('assertion (status == napi_ok) failed: napi_run_script_path ok');
        }
        done();
      });

      /**
       * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_LOAD_MODULE_0100
       * @tc.name      : testNapiLoadModule0001
       * @tc.desc      : Testing napi_load_module interface.
       * @tc.size      : MediumTest
       * @tc.type      : Function
       * @tc.level     : Level 1
       */
      it('testNapiLoadModule0001', 0, async (done: Function) => {
        let TAG = "testNapiLoadModule0001";
        console.info(`${TAG} START`);
        try {
          let value = napitest.napiLoadModule();
          expect(value).assertEqual(0);
        } catch (err) {
          console.error(`${TAG} error is ${err} `);
          expect().assertFail();
        }
        done();
      });

      /**
       * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_LOAD_MODULE_0200
       * @tc.name      : testNapiLoadModule0002
       * @tc.desc      : Testing napi_load_module interface.
       * @tc.size      : MediumTest
       * @tc.type      : Function
       * @tc.level     : Level 1
       */
      it('testNapiLoadModule0002', 0, async (done: Function) => {
        let TAG = "testNapiLoadModule0002";
        console.info(`${TAG} START`);
        try {
          let value = napitest.napiLoadModuleEnvNull();
          expect().assertFail();
        } catch (err) {
          console.error(`${TAG} error is ${err} `);
          expect(err.message).assertEqual('assertion (status == napi_ok) failed: napi_load_module ok');
        }
        done();
      });

      /**
       * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_LOAD_MODULE_0300
       * @tc.name      : testNapiLoadModule0003
       * @tc.desc      : Testing napi_load_module interface.
       * @tc.size      : MediumTest
       * @tc.type      : Function
       * @tc.level     : Level 1
       */
      it('testNapiLoadModule0003', 0, async (done: Function) => {
        let TAG = "testNapiLoadModule0003";
        console.info(`${TAG} START`);
        try {
          let value = napitest.napiLoadModuleResNull();
          expect().assertFail();
        } catch (err) {
          console.error(`${TAG} error is ${err} `);
          expect(err.message).assertEqual('assertion (status == napi_ok) failed: napi_load_module ok');
        }
        done();
      });

      /**
       * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_CREATE_OBJECT_WITH_PROPERTIES_0100
       * @tc.name      : testNapiCreateObjectWithProperties0001
       * @tc.desc      : Testing napi_create_object_with_properties interface.
       * @tc.size      : MediumTest
       * @tc.type      : Function
       * @tc.level     : Level 1
       */
      it('testNapiCreateObjectWithProperties0001', 0, async (done: Function) => {
        let TAG = "testNapiCreateObjectWithProperties0001";
        console.info(`${TAG} START`);
        try {
          let value = napitest.createObjectWithProperties();
          expect(value).assertEqual(0);
        } catch (err) {
          console.error(`${TAG} error is ${err} `);
          expect().assertFail();
        }
        done();
      });

      /**
       * @tc.number    : SUB_RUNTIME_LANGUAGE_NAPI_CREATE_OBJECT_WITH_PROPERTIES_0200
       * @tc.name      : testNapiCreateObjectWithProperties0002
       * @tc.desc      : Testing napi_create_object_with_properties interface.
       * @tc.size      : MediumTest
       * @tc.type      : Function
       * @tc.level     : Level 1
       */
      it('testNapiCreateObjectWithProperties0002', 0, async (done: Function) => {
        let TAG = "testNapiCreateObjectWithProperties0002";
        console.info(`${TAG} START`);
        try {
          let value = napitest.createObjectWithPropertiesEnvNull();
          expect().assertFail();
        } catch (err) {
          console.error(`${TAG} error is ${err} `);
          expect(err.message).assertEqual('empty error message');
        }
        done();
      });
    })
  }
