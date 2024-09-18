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

import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from "hypium/index"

import napitest from 'libnapitest.so'
import worker from '@ohos.worker';

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

export default function nativeApiStringJsunit() {

  describe('NapiTest', () => {
    const empty = 'hh';
    let value;
    let obj;

    /**
     * run after testcase
     */
    afterEach(async () => {
      console.info('[NapiTest] after each called')
      value == '';
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
      try{
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
      try{
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
        const obj = { key: "value" };
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
        value = napitest.testPromise(1).then(
        (result) => {
          console.info(`${TAG} testString resolve1 result is: ` + result + "--" + JSON.stringify(result));
          expect(result > 0).assertTrue();
          done();
        }, (result) => {
        console.info(`${TAG} testString reject1 result is: ` + result + "--" + JSON.stringify(result));
        expect(result < 0).assertTrue();
      } catch (err) {
        console.error(`${TAG} error is ${err} `);
        expect().assertFail();
      }
      done();
    });

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
        value = napitest.napiCreateThreadsafeFunction();
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
        value = napitest.napiCreateThreadsafeFunctionNull();
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
        value = napitest.ThreadSafeTest(() => {
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
        value = napitest.ThreadSafeTestNull(() => {
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
        value = napitest.napiCallThreadsafeFunction();
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
        value = napitest.napiCallThreadsafeFunctionNull();
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
        value = napitest.napiRefthreadSafeFunction();
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
        value = napitest.napiRefthreadSafeFunctionNull();
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
        value = napitest.napiCreateDate();
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
        value = napitest.napiCreateBigintInt64();
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
        expect(err.message).assertEqual('assertion (resultValue == testValue) failed: napi_get_value_bigint_int64 failed');
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
        value = napitest.napiCreateBigintUint64();
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
        expect(err.message).assertEqual('assertion (resultValue == testValue) failed: napi_get_value_bigint_int64 failed');
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
        value = napitest.napiCreateBigintWords();
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
        value = napitest.napiSetInstanceData();
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
        value = napitest.napiEnvCleanUpHook();
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
        value = napitest.napiEnvCleanUpHookEnvNull();
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
        value = napitest.napiEnvCleanUpHookFuncNull();
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
        value = napitest.napiRemoveEnvCleanUpHookEnvNull();
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
        value = napitest.napiRemoveEnvCleanUpHookFuncNull();
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
        value = napitest.napiAsyncCleanUpHook();
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
        value = napitest.napiAsyncCleanUpHookEnvNull();
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
        value = napitest.napiAsyncCleanUpHookHookNull();
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
        value = napitest.napiAsyncCleanUpHookHandleNull();
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
        value = napitest.getModuleFileName().indexOf(".so");
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
        value = napitest.getModuleFileNameEnvNull().indexOf(".so");
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
        value = napitest.getModuleFileNameResNull().indexOf(".so");
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
        value = napitest.createAsyncResource({
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
        value = napitest.createAsyncResourceEnvNull({
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
        value = napitest.createAsyncResourceObjNull({
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
        value = napitest.createAsyncResourceCbNull({
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
        value = napitest.asyncWorkWithQos(1000, (input) => {
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
        value = napitest.asyncWorkWithQosEnvNull(1000, (input) => {
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
        value = napitest.asyncWorkWithQosWorkNull(1000, (input) => {
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
        value = napitest.napiRunScriptPath();
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
        value = napitest.napiRunScriptPathEnvNull();
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
        value = napitest.napiRunScriptPathResNull();
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
        value = napitest.napiLoadModule();
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
        value = napitest.napiLoadModuleEnvNull();
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
        value = napitest.napiLoadModuleResNull();
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
        value = napitest.createObjectWithProperties();
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
        value = napitest.createObjectWithPropertiesEnvNull();
        expect().assertFail();
      } catch (err) {
        console.error(`${TAG} error is ${err} `);
        expect(err.message).assertEqual('empty error message');
      }
      done();
    });

  })
}