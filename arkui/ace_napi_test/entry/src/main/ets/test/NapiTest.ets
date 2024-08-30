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

const NAPI_INVALID_ARG = 6;

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
        console.error('testGetLastErrorInfo0001 err' + err);
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
        console.error('testThrow0001 err' + err);
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
        console.error('testThrow0002 err' + err);
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
        console.error('testThrowError0001 err' + err);
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
        expect(err instanceof TypeError).assertTrue();
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
        console.error('testThrowTypeError0002 err' + err);
        expect().assertFail();
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
        console.info('testThrowRangeError0001 result is: ' + ret);
        expect().assertFail();
      } catch (err) {
        console.error('testThrowRangeError0001 err' + err);
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
        console.error('testThrowRangeError0002 err' + err);
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
        console.info('testIsError0001 result is: ' + ret);
        expect(ret).assertEqual(false);
      } catch (err) {
        console.error('testIsError0001 err' + err);
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
        console.info('testIsError0002 result is: ' + ret);
        expect(ret).assertEqual(false);
      } catch (err) {
        console.error('testIsError0002 err' + err);
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
        console.info('testCreateStringUtf80001 result is: ' + ret);
        expect(ret).assertEqual('abc');
      } catch (err) {
        console.error('testCreateStringUtf80001 err' + err);
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
        console.info('testCreateStringUtf80002 result is: ' + ret);
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
        console.info('testCreateError0001 result is: ' + ret);
        expect(ret).assertEqual(0);
      } catch (err) {
        console.error('testCreateError0001 err' + err);
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
        console.info('testCreateTypeError0001 result is: ' + ret);
        expect(ret).assertEqual(0);
      } catch (err) {
        console.error('testCreateTypeError0001 err' + err);
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
        console.error('testCreateTypeError0002 err code' + err.Error);
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
        console.error('testIsExceptionPending0001 err' + err);
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
        console.error('testIsExceptionPending0002 err' + err);
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
        console.info('testOpenAndCloseHandleScope0001 testString value is: ' + value);
        expect(value == undefined).assertTrue();
      } catch (err) {
        console.error('testOpenAndCloseHandleScope0001 err' + err);
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
        console.info('testOpenAndCloseHandleScope0002 testString value is: ' + value);
        expect(value instanceof Object).assertTrue();
      } catch (err) {
        console.error('testOpenAndCloseHandleScope0002 err' + err);
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
        console.info('testOpenAndCloseEscapableHandleScope0001 testString value is: ' + value);
        expect(value instanceof Object).assertTrue();
      } catch (err) {
        console.error('testOpenAndCloseEscapableHandleScope0001 err' + err);
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
        let value = napitest.openAndCloseEscapableHandleScope(null);
        console.info('testOpenAndCloseEscapableHandleScope0002 testString value is: ' + value);
        expect(value instanceof Object).assertTrue();
      } catch (err) {
        console.error('testOpenAndCloseEscapableHandleScope0002 err' + err);
        expect().assertFail();
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
        console.info('testCreateReference0001 testString value is: ' + value);
        expect(value).assertEqual(0);
      } catch (err) {
        console.error('testCreateReference0001 err' + err);
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
        let value = napitest.createReferenceNull();
        console.info('testCreateReference0002 testString value is: ' + value);
        expect().assertFail();
      } catch (err) {
        expect(err.message).assertEqual('empty error message');
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
        console.info('testDeleteReference0001 testString value is: ' + value);
        expect(value).assertEqual(undefined);
      } catch (err) {
        console.error('testDeleteReference0001 err' + err);
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
        console.info('testDeleteReference0002 testString value is: ' + value);
      } catch (err) {
        console.error('testDeleteReference0002 err message is' + err.message);
        expect(err.message).assertEqual('assertion (test_reference != nullptr) failed: A reference must have been created.');
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
        console.info('testReferenceRef0001 testString value is: ' + value);
        expect(value).assertEqual(0);
      } catch (err) {
        console.error('testReferenceRef0001 err' + err.message);
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
        console.info('testReferenceRef0002 testString value is: ' + value);
        expect().assertFail();
      } catch (err) {
        console.error('testReferenceRef0002 err' + err.message);
        expect(err.message).assertContain('napi_invalid_arg');
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
        console.info('testReferenceUnRef0001 testString value is: ' + value);
        expect(value).assertEqual(0);
      } catch (err) {
        console.error('testReferenceUnRef0001 err' + err.message);
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
        console.info('testReferenceUnRef0002 testString value is: ' + value);
        expect().assertFail();
      } catch (err) {
        console.error('testReferenceUnRef0002 err' + err.message);
        expect(err.message).assertContain('napi_invalid_arg');
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
        console.info('testCreateArray0001 testString value is: ' + value);
        let obj = JSON.stringify(value);
        expect(obj).assertEqual('[1,2]');
      } catch (err) {
        console.error('testCreateArray0001 err' + err.message);
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
        console.info('testCreateArray0002 testString value is: ' + value);
        let obj = JSON.stringify(value);
        expect(obj).assertEqual('[1,2]');
      } catch (err) {
        console.error('testCreateArray0002 err' + err.message);
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
        console.info('testCreateArrayBuffer0001 testString value is: ' + value);
        expect(value instanceof ArrayBuffer).assertTrue();
      } catch (err) {
        console.error('testCreateArrayBuffer0001 err' + err.message);
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
        console.info('testCreateArrayBuffer0002 testString value is: ' + value);
        expect(value instanceof ArrayBuffer).assertTrue();
      } catch (err) {
        console.error('testCreateArrayBuffer0002 err' + err.message);
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
        console.info('testCreateExternal0001 testString value is: ' + value);
        expect(value).assertEqual(0);
      } catch (err) {
        console.error('testCreateExternal0001 err' + err.message);
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
        console.info('testCreateExternal0002 testString value is: ' + value);
        expect(value).assertEqual(NAPI_INVALID_ARG);
      } catch (err) {
        console.error('testCreateExternal0002 err' + err.message);
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
        console.info('testCreateExternalArraybuffer0001 testString value is: ' + value);
        expect(value instanceof ArrayBuffer).assertTrue();
        let view = new Int32Array(value);
        expect(view[0]).assertEqual(666);
      } catch (err) {
        console.error('testCreateExternalArraybuffer0001 err' + err.message);
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
        let value = napitest.createExternalArraybufferNull();
        console.info('testCreateExternalArraybuffer0002 testString value is: ' + value);
        expect(value instanceof ArrayBuffer).assertTrue();
        let view = new Int32Array(value);
        expect(view[0]).assertEqual(666);
      } catch (err) {
        console.error('testCreateExternalArraybuffer0002 err' + err.message);
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
        console.info('testCreateObject0001 testString value is: ' + value);
        expect(value instanceof Object).assertTrue();
      } catch (err) {
        console.error('testCreateObject0001 err' + err.message);
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
        console.info('testCreateObject0002 testString value is: ' + value);
        expect(value instanceof Object).assertTrue();
      } catch (err) {
        console.error('testCreateObject0002 err' + err.message);
        expect(err.message).assertEqual('empty error message');
      }
      done();
    });
  })
}
