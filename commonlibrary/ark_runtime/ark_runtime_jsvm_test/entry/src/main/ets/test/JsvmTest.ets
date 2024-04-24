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

import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from "hypium/index"

// @ts-ignore
import napitest from 'libjsvmtest.so'


export default function JsvmJsunit() {

  describe('JsvmTest',() => {
    const empty = 'hh';
    let value;

    async function sleep(time) {
      return new Promise((resolve, reject) => {
        setTimeout(() => {
          resolve("ok")
        }, time)
      }).then(() => {
        console.info( `sleep ${time} over...`)
      })
    }

    /**
    * run after testcase
    */
    afterEach(async function () {
      console.info('[JsvmTest] after each called')
      value == '';
    });

    /**
     * @tc.number    SUB_ACE_BASIC_ETS_JSVM_0001
     * @tc.name      JsvmTest001
     * @tc.desc      JsvmTest
     */
    it('JsvmTest001', 0, async function (done) {
      console.info('JsvmTest001 START');
      napitest.Add()
      console.info('JsvmTest001 testString result is:'+ value + "--" + JSON.stringify(value) );
      done();
    });
    /**
     * @tc.number    SUB_ACE_BASIC_ETS_JSVM_0002
     * @tc.name      JsvmTest002
     * @tc.desc      JsvmTest
     */
    it('JsvmTest002', 0, async function (done) {
      console.info('JsvmTest002 START');
      value = napitest.testEngineAndContext()
      console.info('JsvmTest002 testString result is:'+ value + "--" + JSON.stringify(value) );
      expect(value).assertEqual(0);
      done();
    });
    /**
     * @tc.number    SUB_ACE_BASIC_ETS_JSVM_0003
     * @tc.name      JsvmTest003
     * @tc.desc      JsvmTest
     */
    it('JsvmTest003', 0, async function (done) {
      console.info('JsvmTest003 START');
      value = napitest.testError()
      console.info('JsvmTest003 testString result is:'+ value + "--" + JSON.stringify(value) );
      expect(value).assertEqual(0);
      done();
    });
    /**
     * @tc.number    SUB_ACE_BASIC_ETS_JSVM_0004
     * @tc.name      JsvmTest004
     * @tc.desc      JsvmTest
     */
    it('JsvmTest004', 0, async function (done) {
      console.info('JsvmTest004 START');
      value = napitest.testTypeError()
      console.info('JsvmTest004 testString result is:'+ value + "--" + JSON.stringify(value) );
      expect(value).assertEqual(0);
      done();
    });
    /**
     * @tc.number    SUB_ACE_BASIC_ETS_JSVM_0005
     * @tc.name      JsvmTest005
     * @tc.desc      JsvmTest
     */
    it('JsvmTest005', 0, async function (done) {
      console.info('JsvmTest005 START');
      value = napitest.testRangeError()
      console.info('JsvmTest005 testString result is:'+ value + "--" + JSON.stringify(value) );
      expect(value).assertEqual(0);
      done();
    });
    /**
     * @tc.number    SUB_ACE_BASIC_ETS_JSVM_0006
     * @tc.name      JsvmTest005
     * @tc.desc      JsvmTest
     */
    it('JsvmTest006', 0, async function (done) {
      console.info('JsvmTest006 START');
      value = napitest.testSyntaxError()
      console.info('JsvmTest006 testString result is:'+ value + "--" + JSON.stringify(value) );
      expect(value).assertEqual(0);
      done();
    });
    /**
     * @tc.number    SUB_ACE_BASIC_ETS_JSVM_0007
     * @tc.name      JsvmTest007
     * @tc.desc      JsvmTest
     */
    it('JsvmTest007', 0, async function (done) {
      console.info('JsvmTest007 START');
      value = napitest.testClearError()
      console.info('JsvmTest007 testString result is:'+ value + "--" + JSON.stringify(value) );
      expect(value).assertEqual(0);
      done();
    });
    /**
     * @tc.number    SUB_ACE_BASIC_ETS_JSVM_0008
     * @tc.name      JsvmTest008
     * @tc.desc      JsvmTest
     */
    it('JsvmTest008', 0, async function (done) {
      console.info('JsvmTest008 START');
      value = napitest.testLifeCycle()
      console.info('JsvmTest008 testString result is:'+ value + "--" + JSON.stringify(value) );
      expect(value).assertEqual(0);
      done();
    });
    /**
     * @tc.number    SUB_ACE_BASIC_ETS_JSVM_0009
     * @tc.name      JsvmTest009
     * @tc.desc      JsvmTest
     */
    it('JsvmTest009', 0, async function (done) {
      console.info('JsvmgTest009 START');
      value = napitest.testCreateData1()
      console.info('Jsvm009 testString result is:'+ value + "--" + JSON.stringify(value) );
      expect(value).assertEqual(0);
      done();
    });
    /**
     * @tc.number    SUB_ACE_BASIC_ETS_JSVM_0010
     * @tc.name      JsvmTest010
     * @tc.desc      JsvmTest
     */
    it('JsvmTest010', 0, async function (done) {
      console.info('JsvmTest010 START');
      value = napitest.testCreateData2()
      console.info('JsvmTest010 testString result is:'+ value + "--" + JSON.stringify(value) );
      expect(value).assertEqual(0);
      done();
    });
    /**
     * @tc.number    SUB_ACE_BASIC_ETS_JSVM_0011
     * @tc.name      JsvmTest011
     * @tc.desc      JsvmTest
     */
    it('JsvmTest011', 0, async function (done) {
      console.info('JsvmTest011 START');
      value = napitest.testCreateData3()
      console.info('JsvmTest011 testString result is:'+ value + "--" + JSON.stringify(value) );
      expect(value).assertEqual(0);
      done();
    });
    /**
     * @tc.number    SUB_ACE_BASIC_ETS_JSVM_0012
     * @tc.name      JsvmTest012
     * @tc.desc      JsvmTest
     */
    it('JsvmTest012', 0, async function (done) {
      console.info('JsvmTest012 START');
      value = napitest.testCreateData4()
      console.info('JsvmTest012 testString result is:'+ value + "--" + JSON.stringify(value) );
      expect(value).assertEqual(0);
      done();
    });
    /**
     * @tc.number    SUB_ACE_BASIC_ETS_JSVM_0013
     * @tc.name      JsvmTest013
     * @tc.desc      JsvmTest
     */
    it('JsvmTest013', 0, async function (done) {
      console.info('JsvmTest013 START');
      value = napitest.testCreateData5()
      console.info('JsvmTest013 testString result is:'+ value + "--" + JSON.stringify(value) );
      expect(value).assertEqual(0);
      done();
    });
    /**
     * @tc.number    SUB_ACE_BASIC_ETS_JSVM_0014
     * @tc.name      JsvmTest014
     * @tc.desc      JsvmTest
     */
    it('JsvmTest014', 0, async function (done) {
      console.info('JsvmTest014 START');
      value = napitest.testGetData1()
      console.info('JsvmTest014 testString result is:'+ value + "--" + JSON.stringify(value) );
      expect(value).assertEqual(0);
      done();
    });
    /**
     * @tc.number    SUB_ACE_BASIC_ETS_JSVM_0015
     * @tc.name      JsvmTest015
     * @tc.desc      JsvmTest
     */
    it('JsvmTest015', 0, async function (done) {
      console.info('JsvmTest015 START');
      value = napitest.testGetData2()
      console.info('JsvmTest015 testString result is:'+ value + "--" + JSON.stringify(value) );
      expect(value).assertEqual(0);
      done();
    });
    /**
     * @tc.number    SUB_ACE_BASIC_ETS_JSVM_0016
     * @tc.name      JsvmTest016
     * @tc.desc      JsvmTest
     */
    it('JsvmTest016', 0, async function (done) {
      console.info('JsvmTest016 START');
      value = napitest.testValueOperation()
      console.info('JsvmgTest016 testString result is:'+ value + "--" + JSON.stringify(value) );
      expect(value).assertEqual(0);
      done();
    });
    /**
     * @tc.number    SUB_ACE_BASIC_ETS_JSVM_0017
     * @tc.name      JsvmTest017
     * @tc.desc      JsvmTest
     */
    it('JsvmTest017', 0, async function (done) {
      console.info('JsvmTest017 START');
      value = napitest.testValueOperation2()
      console.info('JsvmTest017 testString result is:'+ value + "--" + JSON.stringify(value) );
      expect(value).assertEqual(0);
      done();
    });
    /**
     * @tc.number    SUB_ACE_BASIC_ETS_JSVM_0018
     * @tc.name      JsvmTest018
     * @tc.desc      JsvmTest
     */
    it('JsvmTest018', 0, async function (done) {
      console.info('JsvmTest018 START');
      value = napitest.testGetPropertyNames()
      console.info('JsvmTest018 testString result is:'+ value + "--" + JSON.stringify(value) );
      expect(value).assertEqual(0);
      done();
    });
    /**
     * @tc.number    SUB_ACE_BASIC_ETS_JSVM_0019
     * @tc.name      JsvmTest019
     * @tc.desc      JsvmTest
     */
    it('JsvmTest019', 0, async function (done) {
      console.info('JsvmTest019 START');
      value = napitest.testGetAllPropertyNames()
      console.info('JsvmTest019 testString result is:'+ value + "--" + JSON.stringify(value) );
      expect(value).assertEqual(0);
      done();
    });
    /**
     * @tc.number    SUB_ACE_BASIC_ETS_JSVM_0020
     * @tc.name      JsvmTest020
     * @tc.desc      JsvmTest
     */
    it('JSvmTest020', 0, async function (done) {
      console.info('JsvmTest020 START');
      value = napitest.testProperty()
      console.info('JsvmTest020 testString result is:'+ value + "--" + JSON.stringify(value) );
      expect(value).assertEqual(0);
      done();
    });
    /**
     * @tc.number    SUB_ACE_BASIC_ETS_JSVM_0021
     * @tc.name      JsvmTest021
     * @tc.desc      JsvmTest
     */
    it('JsvmTest021', 0, async function (done) {
      console.info('JsvmTest021 START');
      value = napitest.testDefineProperties()
      console.info('JsvmTest021 testString result is:'+ value + "--" + JSON.stringify(value) );
      expect(value).assertEqual(0);
      done();
    });
    /**
     * @tc.number    SUB_ACE_BASIC_ETS_JSVM_0022
     * @tc.name      JsvmTest022
     * @tc.desc      JsvmTest
     */
    it('JsvmTest022', 0, async function (done) {
      console.info('JsvmTest022 START');
      value = napitest.testWrap()
      console.info('JsvmTest022 testString result is:'+ value + "--" + JSON.stringify(value) );
      expect(value).assertEqual(0);
      done();
    });
    /**
     * @tc.number    SUB_ACE_BASIC_ETS_JSVM_0023
     * @tc.name      JsvmTest023
     * @tc.desc      JsvmTest
     */
    it('JsvmTest023', 0, async function (done) {
      console.info('JsvmTest023 START');
      value = napitest.testOthers()
      console.info('JsvmTest023 testString result is:'+ value + "--" + JSON.stringify(value) );
      expect(value).assertEqual(0);
      done();
    });
    /**
     * @tc.number    SUB_ACE_BASIC_ETS_JSVM_0024
     * @tc.name      JsvmTest024
     * @tc.desc      JsvmTest
     */
    it('JsvmTest024', 0, async function (done) {
      console.info('JsvmTest024 START');
      value = napitest.Add1()
      console.info('JsvmTest024 testString result is:'+ value + "--" + JSON.stringify(value) );
      expect(value).assertEqual(0);
      done();
    });
    /**
     * @tc.number    SUB_ACE_BASIC_ETS_JSVM_0025
     * @tc.name      JsvmTest025
     * @tc.desc      JsvmTest
     */
    it('JsvmTest025', 0, async function (done) {
      console.info('JsvmTest025 START');
      value = napitest.testSecondOperations()
      console.info('JsvmTest025 testString result is:'+ value + "--" + JSON.stringify(value) );
      expect(value).assertEqual(0);
      done();
    });
    /**
     * @tc.number    SUB_ACE_BASIC_ETS_JSVM_0026
     * @tc.name      JsvmTest026
     * @tc.desc      JsvmTest
     */
    it('JsvmTest026', 0, async function (done) {
      console.info('JsvmTest026 START');
      value = napitest.testDefinePropertyHandle(0)
      console.info('JsvmTest026 testString result is:'+ value + "--" + JSON.stringify(value) );
      expect(value).assertEqual(0);
      done();
    });
    /**
     * @tc.number    SUB_ACE_BASIC_ETS_JSVM_0027
     * @tc.name      JsvmTest027
     * @tc.desc      JsvmTest
     */
    it('JsvmTest027', 0, async function (done) {
      console.info('JsvmTest027 START');
      value = napitest.testDefinePropertyHandle(1)
      console.info('JsvmTest027 testString result is:'+ value + "--" + JSON.stringify(value) );
      expect(value).assertEqual(0);
      done();
    });
      /**
     * @tc.number    SUB_ACE_BASIC_ETS_JSVM_0028
     * @tc.name      JsvmTest028
     * @tc.desc      JsvmTest
     */
    it('JsvmTest028', 0, async function (done) {
      console.info('JsvmTest028 START');
      value = napitest.testDefinePropertyHandle(2)
      console.info('JsvmTest028 testString result is:'+ value + "--" + JSON.stringify(value) );
      expect(value).assertEqual(0);
      done();
    });
      /**
     * @tc.number    SUB_ACE_BASIC_ETS_JSVM_0029
     * @tc.name      JsvmTest029
     * @tc.desc      JsvmTest
     */
    it('JsvmTest029', 0, async function (done) {
      console.info('JsvmTest029 START');
      value = napitest.testDefinePropertyHandle(3)
      console.info('JsvmTest029 testString result is:'+ value + "--" + JSON.stringify(value) );
      expect(value).assertEqual(0);
      done();
    });
      /**
     * @tc.number    SUB_ACE_BASIC_ETS_JSVM_0030
     * @tc.name      JsvmTest030
     * @tc.desc      JsvmTest
     */
    it('JsvmTest030', 0, async function (done) {
      console.info('JsvmTest030 START');
      value = napitest.testDefinePropertyHandle(4)
      console.info('JsvmTest030 testString result is:'+ value + "--" + JSON.stringify(value) );
      expect(value).assertEqual(0);
      done();
    });
      /**
     * @tc.number    SUB_ACE_BASIC_ETS_JSVM_0031
     * @tc.name      JsvmTest031
     * @tc.desc      JsvmTest
     */
    it('JsvmTest031', 0, async function (done) {
      console.info('JsvmTest031 START');
      value = napitest.testDefinePropertyHandle(5)
      console.info('JsvmTest031 testString result is:'+ value + "--" + JSON.stringify(value) );
      expect(value).assertEqual(0);
      done();
    });
      /**
     * @tc.number    SUB_ACE_BASIC_ETS_JSVM_0032
     * @tc.name      JsvmTest032
     * @tc.desc      JsvmTest
     */
    it('JsvmTest032', 0, async function (done) {
      console.info('JsvmTest032 START');
      value = napitest.testDefinePropertyHandle(6)
      console.info('JsvmTest032 testString result is:'+ value + "--" + JSON.stringify(value) );
      expect(value).assertEqual(0);
      done();
    });
      /**
     * @tc.number    SUB_ACE_BASIC_ETS_JSVM_0033
     * @tc.name      JsvmTest033
     * @tc.desc      JsvmTest
     */
    it('JsvmTest033', 0, async function (done) {
      console.info('JsvmTest033 START');
      value = napitest.testDefinePropertyHandle(7)
      console.info('JsvmTest033 testString result is:'+ value + "--" + JSON.stringify(value) );
      expect(value).assertEqual(0);
      done();
    });
      /**
     * @tc.number    SUB_ACE_BASIC_ETS_JSVM_0034
     * @tc.name      JsvmTest034
     * @tc.desc      JsvmTest
     */
    it('JsvmTest034', 0, async function (done) {
      console.info('JsvmTest034 START');
      value = napitest.testDefinePropertyHandle(8)
      console.info('JsvmTest034 testString result is:'+ value + "--" + JSON.stringify(value) );
      expect(value).assertEqual(0);
      done();
    });
      /**
     * @tc.number    SUB_ACE_BASIC_ETS_JSVM_0035
     * @tc.name      JsvmTest035
     * @tc.desc      JsvmTest
     */
    it('JsvmTest035', 0, async function (done) {
      console.info('JsvmTest035 START');
      value = napitest.testDefinePropertyHandle(9)
      console.info('JsvmTest035 testString result is:'+ value + "--" + JSON.stringify(value) );
      expect(value).assertEqual(0);
      done();
    });
      /**
     * @tc.number    SUB_ACE_BASIC_ETS_JSVM_0036
     * @tc.name      JsvmTest036
     * @tc.desc      JsvmTest
     */
    it('JsvmTest036', 0, async function (done) {
      console.info('JsvmTest036 START');
      value = napitest.testDefinePropertyHandle(10)
      console.info('JsvmTest036 testString result is:'+ value + "--" + JSON.stringify(value) );
      expect(value).assertEqual(0);
      done();
    });
      /**
     * @tc.number    SUB_ACE_BASIC_ETS_JSVM_0037
     * @tc.name      JsvmTest037
     * @tc.desc      JsvmTest
     */
    it('JsvmTest037', 0, async function (done) {
      console.info('JsvmTest037 START');
      value = napitest.testDefinePropertyHandle(11)
      console.info('JsvmTest037 testString result is:'+ value + "--" + JSON.stringify(value) );
      expect(value).assertEqual(0);
      done();
    });
      /**
     * @tc.number    SUB_ACE_BASIC_ETS_JSVM_0038
     * @tc.name      JsvmTest038
     * @tc.desc      JsvmTest
     */
    it('JsvmTest038', 0, async function (done) {
      console.info('JsvmTest038 START');
      value = napitest.testDefinePropertyHandle(12)
      console.info('JsvmTest038 testString result is:'+ value + "--" + JSON.stringify(value) );
      expect(value).assertEqual(0);
      done();
    });
      /**
     * @tc.number    SUB_ACE_BASIC_ETS_JSVM_0039
     * @tc.name      JsvmTest039
     * @tc.desc      JsvmTest
     */
    it('JsvmTest039', 0, async function (done) {
      console.info('JsvmTest039 START');
      value = napitest.testDefinePropertyHandle(13)
      console.info('JsvmTest039 testString result is:'+ value + "--" + JSON.stringify(value) );
      expect(value).assertEqual(0);
      done();
    });
      /**
     * @tc.number    SUB_ACE_BASIC_ETS_JSVM_0040
     * @tc.name      JsvmTest040
     * @tc.desc      JsvmTest
     */
    it('JsvmTest040', 0, async function (done) {
      console.info('JsvmTest040 START');
      value = napitest.testDefinePropertyHandle(14)
      console.info('JsvmTest040 testString result is:'+ value + "--" + JSON.stringify(value) );
      expect(value).assertEqual(0);
      done();
    });
      /**
     * @tc.number    SUB_ACE_BASIC_ETS_JSVM_0041
     * @tc.name      JsvmTest041
     * @tc.desc      JsvmTest
     */
    it('JsvmTest041', 0, async function (done) {
      console.info('JsvmTest041 START');
      value = napitest.testDefinePropertyHandle(15)
      console.info('JsvmTest041 testString result is:'+ value + "--" + JSON.stringify(value) );
      expect(value).assertEqual(0);
      done();
    });
      /**
     * @tc.number    SUB_ACE_BASIC_ETS_JSVM_0042
     * @tc.name      JsvmTest042
     * @tc.desc      JsvmTest
     */
    it('JsvmTest042', 0, async function (done) {
      console.info('JsvmTest042 START');
      value = napitest.testDefinePropertyHandle(16)
      console.info('JsvmTest042 testString result is:'+ value + "--" + JSON.stringify(value) );
      expect(value).assertEqual(0);
      done();
    });
      /**
     * @tc.number    SUB_ACE_BASIC_ETS_JSVM_0043
     * @tc.name      JsvmTest043
     * @tc.desc      JsvmTest
     */
    it('JsvmTest043', 0, async function (done) {
      console.info('JsvmTest043 START');
      value = napitest.testDefinePropertyHandle(17)
      console.info('JsvmTest043 testString result is:'+ value + "--" + JSON.stringify(value) );
      expect(value).assertEqual(0);
      done();
    });
      /**
     * @tc.number    SUB_ACE_BASIC_ETS_JSVM_0044
     * @tc.name      JsvmTest044
     * @tc.desc      JsvmTest
     */
    it('JsvmTest044', 0, async function (done) {
      console.info('JsvmTest044 START');
      value = napitest.testDefinePropertyHandle(18)
      console.info('JsvmTest044 testString result is:'+ value + "--" + JSON.stringify(value) );
      expect(value).assertEqual(0);
      done();
    });
      /**
     * @tc.number    SUB_ACE_BASIC_ETS_JSVM_0045
     * @tc.name      JsvmTest045
     * @tc.desc      JsvmTest
     */
    it('JsvmTest045', 0, async function (done) {
      console.info('JsvmTest045 START');
      value = napitest.testDefinePropertyHandle(19)
      console.info('JsvmTest045 testString result is:'+ value + "--" + JSON.stringify(value) );
      expect(value).assertEqual(0);
      done();
    });
      /**
     * @tc.number    SUB_ACE_BASIC_ETS_JSVM_0046
     * @tc.name      JsvmTest046
     * @tc.desc      JsvmTest
     */
    it('JsvmTest046', 0, async function (done) {
      console.info('JsvmTest046 START');
      value = napitest.testDefinePropertyHandle(20)
      console.info('JsvmTest046 testString result is:'+ value + "--" + JSON.stringify(value) );
      expect(value).assertEqual(0);
      done();
    });
      /**
     * @tc.number    SUB_ACE_BASIC_ETS_JSVM_0047
     * @tc.name      JsvmTest047
     * @tc.desc      JsvmTest
     */
    it('JsvmTest047', 0, async function (done) {
      console.info('JsvmTest047 START');
      value = napitest.testDefinePropertyHandle(21)
      console.info('JsvmTest047 testString result is:'+ value + "--" + JSON.stringify(value) );
      expect(value).assertEqual(0);
      done();
    });

      /**
     * @tc.number    SUB_ACE_BASIC_ETS_JSVM_0048
     * @tc.name      JsvmTest047
     * @tc.desc      JsvmTest
     */
    it('JsvmTest048', 0, async function (done) {
      console.info('JsvmTest048 START');
      let value = napitest.runJsVm();
      expect(value).assertEqual(0);
      done();
    });

	it('testCreateArray001', 0, function () {
      let script: string = `
         function testCreateArray() {
            return createArray();
         }
         testCreateArray()
       `
      try {
        let result = testNapi.runJsVm(script);
        console.log("JSVM  testCreateArray:" + result);
      } catch (e) {
        console.error("JSVM  testCreateArray:", e);
      }
    });

    it('testCreateArrayWithLength001', 0, function () {
      let num = 6;
      let script: string = `
         function testCreateArrayWithLength(num) {
            return createArrayWithLength(num);
         }
         testCreateArrayWithLength(${num})
       `
      try {
        let result = testNapi.runJsVm(script);
        console.log("JSVM  testCreateArrayWithLength:" + result);
      } catch (e) {
        console.error("JSVM  testCreateArrayWithLength:", e);
      }
    });

    it('testCreateArraybuffer001', 0, function () {
      let script: string = `
         function testCreateArraybuffer() {
            return createArraybuffer(6);
         }
         testCreateArraybuffer()
       `
      try {
        let result = testNapi.runJsVm(script);
        console.log("JSVM  CreateArraybuffer:" + result);
      } catch (e) {
        console.error("JSVM  CreateArraybuffer:", e);
      }
    });

    it('testCreateInt32_001', 0, function () {
      let script: string = `
         function testCreateInt32() {
            return createInt32();
         }
         testCreateInt32()
       `
      try {
        let result = testNapi.runJsVm(script);
        console.log("JSVM  CreateInt32:" + result);
      } catch (e) {
        console.error("JSVM  CreateInt32:", e);
      }
    });

    it('testGetValueInt32_001', 0, function () {
      let num = -110;
      let script: string = `
         function testGetValueInt32(num) {
            return getValueInt32(num);
         }
         testGetValueInt32(${num})
       `
      try {
        let result = testNapi.runJsVm(script);
        console.log("JSVM  GetValueInt32:" + result);
      } catch (e) {
        console.error("JSVM  GetValueInt32:", e);
      }
    });


    it('testCreateUInt32_001', 0, function () {
      let script: string = `
         function testCreateUInt32() {
            return createUInt32();
         }
         testCreateUInt32()
       `
      try {
        let result = testNapi.runJsVm(script);
        console.log("JSVM  CreateUInt32:" + result);
      } catch (e) {
        console.error("JSVM  CreateUInt32:", e);
      }
    });

    it('testGetValueUint32_001', 0, function () {
      let num = -110;
      let script: string = `
         function testGetValueUint32(num) {
            return getValueUint32(num);
         }
         testGetValueUint32(${num})
       `
      try {
        let result = testNapi.runJsVm(script);
        console.log("JSVM  GetValueUint32:" + result);
      } catch (e) {
        console.error("JSVM  GetValueUint32:", e);
      }
    });


    it('testCreateInt64_001', 0, function () {
      let script: string = `
         function testCreateInt64() {
            return createInt64();
         }
         testCreateInt64()
       `
      try {
        let result = testNapi.runJsVm(script);
        console.log("JSVM  CreateInt64:" + result);
      } catch (e) {
        console.error("JSVM  CreateInt64:", e);
      }
    });

    it('testGetValueInt64_001', 0, function () {
      let num = -110;
      let script: string = `
         function testGetValueInt64(num) {
            return getValueInt64(num);
         }
         testGetValueInt64(${num})
       `
      try {
        let result = testNapi.runJsVm(script);
        console.log("JSVM  GetValueInt64:" + result);
      } catch (e) {
        console.error("JSVM  GetValueInt64:", e);
      }
    });


    it('testCreateDouble001', 0, function () {
      let script: string = `
         function testCreateDouble() {
            return createDouble();
         }
         testCreateDouble()
       `
      try {
        let result = testNapi.runJsVm(script);
        console.log("JSVM  CreateDouble:" + result);
      } catch (e) {
        console.error("JSVM  CreateDouble:", e);
      }
    });

    it('testGetDouble001', 0, function () {
      let num = -110.0456;
      let script: string = `
         function testGetDouble(num) {
            return getDouble(num);
         }
         testGetDouble(${num})
       `
      try {
        let result = testNapi.runJsVm(script);
        console.log("JSVM  GetDouble:" + result);
      } catch (e) {
        console.error("JSVM  GetDouble:", e);
      }
    });

    it('testGetBoolean001', 0, function () {
      let data = 1;
      let value = 2;
      let script: string = `
         function testGetBoolean(data, value) {
            return getBoolean(data, value);
         }
         testGetBoolean(${data}, ${value})
       `
      try {
        let result = testNapi.runJsVm(script);
        console.log("JSVM  GetBoolean:" + result);
      } catch (e) {
        console.error("JSVM  GetBoolean:", e);
      }
    });

    it('testGetBoolean002', 0, function () {
      let data = 11;
      let value = 11;
      let script: string = `
         function testGetBoolean(data, value) {
            return getBoolean(data, value);
         }
         testGetBoolean(${data}, ${value})
       `
      try {
        let result = testNapi.runJsVm(script);
        console.log("JSVM  GetBoolean:" + result);
      } catch (e) {
        console.error("JSVM  GetBoolean:", e);
      }
    });

    it('testGetValueBool001', 0, function () {
      let data = true;
      let script: string = `
         function testGetValueBool(data) {
            return getValueBool(data);
         }
         testGetValueBool(${data})
       `
      try {
        let result = testNapi.runJsVm(script);
        console.log("JSVM  GetValueBool:" + result);
      } catch (e) {
        console.error("JSVM  GetValueBool:", e);
      }
    });

    it('testGetValueBool002', 0, function () {
      let data = 11;
      let script: string = `
         function testGetValueBool(data) {
            return getValueBool(data);
         }
         testGetValueBool(${data})
       `
      try {
        let result = testNapi.runJsVm(script);
        console.log("JSVM  GetValueBool:" + result);
      } catch (e) {
        console.error("JSVM  GetValueBool:", e);
      }
    });

    it('testCreateStringUtf8001', 0, function () {
      let script: string = `
           createStringUtf8()
       `
      try {
        let result = testNapi.runJsVm(script);
        console.log("JSVM  CreateStringUtf8:" + result);
      } catch (e) {
        console.error("JSVM  CreateStringUtf8:", e);
      }
    });

    it('testGetValueStringUtf8001', 0, function () {
      let data = `"aaBC+-$%^你好123"`;
      let script: string = `
           getValueStringUtf8(${data})
       `
      try {
        let result = testNapi.runJsVm(script);
        console.log("JSVM  GetValueStringUtf8:" + result);
      } catch (e) {
        console.error("JSVM  GetValueStringUtf8:", e);
      }
    });

    it('testCreateStringUtf16001', 0, function () {
      let script: string = `
           createStringUtf16()
       `
      try {
        let result = testNapi.runJsVm(script);
        console.log("JSVM  CreateStringUtf16:" + result);
      } catch (e) {
        console.error("JSVM  CreateStringUtf16:", e);
      }
    });

    it('testGetValueStringUtf16001', 0, function () {
      let data = `"ahello。"`;
      let script: string = `
           getValueStringUtf16(${data})
       `
      try {
        let result = testNapi.runJsVm(script);
        console.log("JSVM  GetValueStringUtf16:" + result);
      } catch (e) {
        console.error("JSVM  GetValueStringUtf16:", e);
      }
    });


    it('testCreateStringLatin1001', 0, function () {
      let script: string = `
           createStringLatin1()
       `
      try {
        let result = testNapi.runJsVm(script);
        console.log("JSVM  CreateStringLatin1:" + result);
      } catch (e) {
        console.error("JSVM  CreateStringLatin1:", e);
      }
    });

    it('testGetValueStringLatin1001', 0, function () {
      let data = `"中文"`;
      let script: string = `
           getValueStringLatin1(${data})
       `
      try {
        let result = testNapi.runJsVm(script);
        console.log("JSVM  GetValueStringLatin1:" + result);
      } catch (e) {
        console.error("JSVM  GetValueStringLatin1:", e);
      }
    });


    it('testGetArrayLength001', 0, function () {
      let data = '[0, 1, 2, 3, 4, 5]';
      let script: string = `
           getArrayLength(${data})
       `
      try {
        let result = testNapi.runJsVm(script);
        console.log("JSVM  GetArrayLength:" + result);
      } catch (e) {
        console.error("JSVM  GetArrayLength:", e);
      }
    });


    it('testCreateBigintUint64t001', 0, function () {
      let script: string = `
           createBigintUint64t()
       `
      try {
        let result = testNapi.runJsVm(script);
        console.log("JSVM  CreateBigintUint64t:" + result);
      } catch (e) {
        console.error("JSVM  CreateBigintUint64t:", e);
      }
    });

    it('testGetValueBigintUint64t001', 0, function () {
      let script: string = `
           getValueBigintUint64t(BigInt(5555555555555555))
       `
      try {
        let result = testNapi.runJsVm(script);
        console.log("JSVM  GetValueBigintUint64t:" + result);
      } catch (e) {
        console.error("JSVM  GetValueBigintUint64t:", e);
      }
    });


    it('testCreateBigintInt64t001', 0, function () {
      let script: string = `
           createBigintInt64t()
       `
      try {
        let result = napitest.runJsVm(script);
        console.log("JSVM  CreateBigintInt64t:" + result);
      } catch (e) {
        console.error("JSVM  CreateBigintInt64t:", e);
      }
    });

    it('testGetBigintInt64t001', 0, function () {
      let script: string = `
           getBigintInt64t(BigInt(-5555555555555555))
       `
      try {
        let result = napitest.runJsVm(script);
        console.log("JSVM  GetBigintInt64t:" + result);
      } catch (e) {
        console.error("JSVM  GetBigintInt64t:", e);
      }
    });

    it('testCreateBigintWords001', 0, function () {
      let script: string = `
           createBigintWords()
       `
      try {
        let result = napitest.runJsVm(script);
        console.log("JSVM  CreateBigintWords:" + result);
      } catch (e) {
        console.error("JSVM  CreateBigintWords:", e);
      }
    });

    it('testGetValueBigintWords001', 0, function () {
      let script: string = `
           getValueBigintWords(BigInt(5555555555555555))
       `
      try {
        let result = napitest.runJsVm(script);
        console.log("JSVM  GetValueBigintWords:" + result);
      } catch (e) {
        console.error("JSVM  GetValueBigintWords:", e);
      }
    });

    it('testCreateExternal001', 0, function () {
      let script: string = `
           createExternal()
       `
      try {
        let result = napitest.runJsVm(script);
        console.log("JSVM  CreateExternal:" + result);
      } catch (e) {
        console.error("JSVM  CreateExternal:", e);
      }
    });


    it('testGetValueExternal001', 0, function () {
      let script: string = `
           getValueExternal()
       `
      try {
        let result = napitest.runJsVm(script);
        console.log("JSVM  GetValueExternal:" + result);
      } catch (e) {
        console.error("JSVM  GetValueExternal:", e);
      }
    });

    it('testGetNull001', 0, function () {
      let script: string = `
           getNull()
       `
      try {
        let result = napitest.runJsVm(script);
        console.log("JSVM  GetNull:" + result);
      } catch (e) {
        console.error("JSVM  GetNull:", e);
      }
    });

    it('testNewSymbol001', 0, function () {
      let script: string = `
           newSymbol()
       `
      try {
        let result = napitest.runJsVm(script);
        console.log("JSVM  NewSymbol:" + typeof result);
      } catch (e) {
        console.error("JSVM  NewSymbol:", e);
      }
    });

    it('testSymbolFor001', 0, function () {
      let script: string = `
           symbolFor()
       `
      try {
        let result = napitest.runJsVm(script);
        console.log("JSVM  SymbolFor:" + typeof result);
      } catch (e) {
        console.error("JSVM  SymbolFor:", e);
      }
    });

    it('testGetArraybufferInfo001', 0, function () {
      let script: string = `
           getArraybufferInfo(new ArrayBuffer(10))
       `
      try {
        let result: any = napitest.runJsVm(script);
        console.log("JSVM  GetArraybufferInfo:" + result.buffer);
        console.log("JSVM  GetArraybufferInfo:" + result.byteLength);
      } catch (e) {
        console.error("JSVM  GetArraybufferInfo:", e);
      }
    });

    it('testCreateDate001', 0, function () {
      let script: string = `
           createDate()
       `
      try {
        let result = napitest.runJsVm(script);
        console.log("JSVM  CreateDate:" + result);
      } catch (e) {
        console.error("JSVM  CreateDate:", e);
      }
    });

    it('testGetDateValue001', 0, function () {
      let script: string = `
           getDateValue(new Date(Date.now()))
       `
      try {
        let result = napitest.runJsVm(script);
        console.log("JSVM  GetDateValue:" + result);
      } catch (e) {
        console.error("JSVM  GetDateValue:", e);
      }
    });

    it('testCoerceToBool001', 0, function () {
      let script: string = `
           coerceToBool("123")
       `
      let result = napitest.runJsVm(script);
      expect(result).assertEqual(true)
    });

    it('testCoerceToBool002', 0, function () {
      let script: string = `
           coerceToBool(0)
       `
      let result = napitest.runJsVm(script);
      expect(result).assertEqual(false)
    });

    it('testCoerceToBool003', 0, function () {
      let script: string = `
           coerceToBool("true")
       `
      let result = napitest.runJsVm(script);
      expect(result).assertEqual(true)
    });

    it('testCoerceToBool004', 0, function () {
      let script: string = `
           coerceToBool("")
       `
      let result = napitest.runJsVm(script);
      expect(result).assertEqual(false)
    });

    it('testCoerceToBool005', 0, function () {
      let script: string = `
           let obj = { value:1 }
           coerceToBool(obj)
       `
      let result = napitest.runJsVm(script);
      expect(result).assertEqual(true)
    });

    it('testCoerceToNumber001', 0, function () {
      let script: string = `
           coerceToNumber(true)
       `
      let result = napitest.runJsVm(script);
      expect(result).assertEqual(1)
    });

    it('testCoerceToNumber002', 0, function () {
      let script: string = `
           coerceToNumber(false)
       `
      let result = napitest.runJsVm(script);
      expect(result).assertEqual(0)
    });

    it('testCoerceToNumber003', 0, function () {
      let data = '123'
      let script: string = `
           coerceToNumber(${data})
       `
      let result = napitest.runJsVm(script);
      expect(result).assertEqual(123)
    });

    it('testCoerceToNumber004', 0, function () {
      let obj = `{ data : 1}`
      let script: string = `
           coerceToNumber(${obj})
       `
      let result = napitest.runJsVm(script);
      expect(result).assertEqual(0)
    });

    it('testCoerceToNumber005', 0, function () {
      let script: string = `
           coerceToNumber('sss')
       `
      let result = napitest.runJsVm(script);
      expect(result).assertEqual(0)
    });

    it('testCoerceToObject001', 0, function () {
      let script: string = `
           coerceToObject("dad")
       `
      let result = napitest.runJsVm(script);
      expect(result).assertEqual(true)
    });

    it('testCoerceToObject002', 0, function () {
      let script: string = `
           coerceToObject(11111111)
       `
      let result = napitest.runJsVm(script);
      expect(result).assertEqual(true)
    });

    it('testCoerceToObject003', 0, function () {
      let script: string = `
           coerceToObject(true)
       `
      let result = napitest.runJsVm(script);
      expect(result).assertEqual(true)
    });

    it('testCoerceToString001', 0, function () {
      let script: string = `
           coerceToString(22222)
       `
      let result = napitest.runJsVm(script);
      expect(result).assertEqual("22222")
    });

    it('testCoerceToString002', 0, function () {
      let script: string = `
           coerceToString(true)
       `
      let result = napitest.runJsVm(script);
      expect(result).assertEqual("true")
    });

    it('testCoerceToString003', 0, function () {
      let script: string = `
        let obj = {
             data: 1
            }
        coerceToString(obj)
       `
      let result = napitest.runJsVm(script);
      expect(typeof result).assertEqual("string")
    });

    it('testCoerceToString004', 0, function () {
      let script: string = `
        coerceToString(undefined)
       `
      let result = napitest.runJsVm(script);
      expect(result).assertEqual("undefined")
    });

    it('testCoerceToString005', 0, function () {
      let script: string = `
        coerceToString(null)
       `
      let result = napitest.runJsVm(script);
      expect(result).assertEqual("null")
    });

    it("testGetTypeof001", 0, function () {
      let script: string = `
      getTypeof(1111);
        `;
      let result = napitest.runJsVm(script);
      expect(result).assertEqual("number")
    })

    it("testGetTypeof002", 0, function () {
      let script: string = `
      getTypeof("1111");
        `;
      let result = napitest.runJsVm(script);
      expect(result).assertEqual("string")
    })

    it("testGetTypeof003", 0, function () {
      let script: string = `
      getTypeof(true);
        `;
      let result = napitest.runJsVm(script);
      expect(result).assertEqual("boolean")
    })

    it("testGetTypeof004", 0, function () {
      let script: string = `
      let obj = {
        data: 1
      }
      getTypeof(obj);
        `;
      let result = napitest.runJsVm(script);
      expect(result).assertEqual("object")
    })

    it("testGetTypeof005", 0, function () {
      let script: string = `
      getTypeof(null);
        `;
      let result = napitest.runJsVm(script);
      expect(result).assertEqual("null")
    })

    it("testInstanceOf001", 0, function () {
      let script: string = `
      class Person {
        name;
        age;
        constructor(name, age) {
          this.name = name;
          this.age = age;
        }
      }
     instanceOf(new Person('Alice', 30), Person);
     ;
        `;
      let result = napitest.runJsVm(script);
      expect(result).assertEqual(true)
    })

    it("testInstanceOf002", 0, function () {
      let script: string = `
      class Person {
        name;
        age;
        constructor(name, age) {
          this.name = name;
          this.age = age;
        }
      }
      let obj = { data : 1 }
      instanceOf(obj, Person);
     ;
        `;
      let result = napitest.runJsVm(script);
      expect(result).assertEqual(false)
    })

    it("testInstanceOf003", 0, function () {
      let script: string = `
     class Person {
      name;
      age;
      constructor(name, age) {
        this.name = name;
        this.age = age;
      }
    }
    class Animal {
      type;
      constructor(type) {
        this.type = type;
      }
    }
    instanceOf(new Animal('Dog'), Person);
  `;
      let result = napitest.runJsVm(script);
      expect(result).assertEqual(false);
    });

    it("testInstanceOf004", 0, function () {
      let script: string = `
    class Person {
      name;
      age;
      constructor(name, age) {
        this.name = name;
        this.age = age;
      }
    }
    let obj = {};
    instanceOf(obj, Person);
  `;
      let result = napitest.runJsVm(script);
      expect(result).assertEqual(false);
    });

    it("testInstanceOf005", 0, function () {
      let script: string = `
   class Person {
    name;
    age;
    constructor(name, age) {
      this.name = name;
      this.age = age;
    }
  }
  class Employee extends Person {
    job;
    constructor(name, age, job) {
      super(name, age);
      this.job = job;
    }
  }
  let obj = new Employee('Bob', 25, 'Engineer');
  instanceOf(obj, Person);
  `;
      let result = napitest.runJsVm(script);
      expect(result).assertEqual(true);
    });
    it("testIsArray001", 0, function () {
      let data = '[1, 2, 3, 4, 5]';
      let script: string = `
         isArray(${data})
       `
      let result = napitest.runJsVm(script);
      expect(result).assertEqual(true)
    });

    it("testIsArray002", 0, function () {
      let data = "2,3,4,5";
      let script: string = `
         isArray(${data})
       `
      let result = napitest.runJsVm(script);
      expect(result).assertEqual(false)
    });

    it("testIsArray003", 0, function () {
      let script: string = `
          let data = [{
             data: 1
           }]
           isArray(data)
       `
      let result = napitest.runJsVm(script);
      expect(result).assertEqual(true)
    });

    it("testIsArray004", 0, function () {
      let script: string = `
          let data = []
           isArray(data)
       `
      let result = napitest.runJsVm(script);
      expect(result).assertEqual(true)
    });

    it("testIsArray005", 0, function () {
      let script: string = `
          let data = 'Hello';
          isArray(data);
       `;
      let result = napitest.runJsVm(script);
      expect(result).assertEqual(false);
    });

    it("testIsArrayBuffer001", 0, function () {
      let script: string = `
         isArrayBuffer(new ArrayBuffer(8))
       `
      let result = napitest.runJsVm(script);
      expect(result).assertEqual(true)
    });

    it("testIsArrayBuffer002", 0, function () {
      let script: string = `
      isArrayBuffer('hello')
      `;
      let result = napitest.runJsVm(script);
      expect(result).assertEqual(false);
    });

    it("testIsArrayBuffer003", 0, function () {
      let script: string = `
      isArrayBuffer(new Uint8Array([1, 2, 3]).buffer)
       `;
      let result = napitest.runJsVm(script);
      expect(result).assertEqual(true);
    });

    it("testIsArrayBuffer004", 0, function () {
      let script: string = `
      isArrayBuffer(null)
      `;
      let result = napitest.runJsVm(script);
      expect(result).assertEqual(false);
    });

    it("testIsArrayBuffer005", 0, function () {
      let script: string = `
      isArrayBuffer({})
      `;
      let result = napitest.runJsVm(script);
      expect(result).assertEqual(false);
    });

    it("testIsDate001", 0, function () {
      let script: string = `
         isDate(new Date())
       `
      let result = napitest.runJsVm(script);
      expect(result).assertEqual(true);
    })

    it("testIsDate002", 0, function () {
      let script: string = `
    isDate('2024-04-16T12:00:00')
  `;
      let result = napitest.runJsVm(script);
      expect(result).assertEqual(false);
    });

    it("testIsDate003", 0, function () {
      let script: string = `
    isDate(1649942400000)
  `;
      let result = napitest.runJsVm(script);
      expect(result).assertEqual(false);
    });

    it("testIsDate004", 0, function () {
      let script: string = `
    isDate('Invalid Date')
  `;
      let result = napitest.runJsVm(script);
      expect(result).assertEqual(false);
    });

    it("testIsDate005", 0, function () {
      let script: string = `
    isDate({})
  `;
      let result = napitest.runJsVm(script);
      expect(result).assertEqual(false);
    });

    it("testIsTypedArray001", 0, function () {
      let script: string = `
         isTypedarray(new Uint16Array([1, 2, 3, 4]))
       `
      let result = napitest.runJsVm(script);
      expect(result).assertEqual(true);
    })

    it("testIsTypedArray002", 0, function () {
      let script: string = `
    isTypedarray('hello')
  `;
      let result = napitest.runJsVm(script);
      expect(result).assertEqual(false);
    });

    it("testIsTypedArray003", 0, function () {
      let script: string = `
    isTypedarray(new Uint8Array([1, 2, 3]))
  `;
      let result = napitest.runJsVm(script);
      expect(result).assertEqual(true);
    });

    it("testIsTypedArray004", 0, function () {
      let script: string = `
    isTypedarray(null)
  `;
      let result = napitest.runJsVm(script);
      expect(result).assertEqual(false);
    });

    it("testIsTypedArray005", 0, function () {
      let script: string = `
    isTypedarray({})
  `;
      let result = napitest.runJsVm(script);
      expect(result).assertEqual(false);
    });

    it("testIsDataView001", 0, function () {
      let script: string = `
      let buffer = new ArrayBuffer(16);
      let dataView = new DataView(buffer);
      isDataView(dataView);
        `;
      let result = napitest.runJsVm(script);
      expect(result).assertEqual(true);
    })

    it("testIsDataView002", 0, function () {
      let script: string = `
    isDataView('hello')
  `;
      let result = napitest.runJsVm(script);
      expect(result).assertEqual(false);
    });

    it("testIsDataView003", 0, function () {
      let script: string = `
    let buffer = new ArrayBuffer(32);
    let dataView = new DataView(buffer, 8, 16);
    isDataView(dataView);
  `;
      let result = napitest.runJsVm(script);
      expect(result).assertEqual(true);
    });

    it("testIsDataView004", 0, function () {
      let script: string = `
    isDataView(null)
  `;
      let result = napitest.runJsVm(script);
      expect(result).assertEqual(false);
    });

    it("testIsDataView005", 0, function () {
      let script: string = `
    isDataView({})
  `;
      let result = napitest.runJsVm(script);
      expect(result).assertEqual(false);
    });

    it("testIsStrictEquals001", 0, function () {
      let script: string = `
      let str = '123';
      let num = 123;
      isStrictEquals(str,num);
        `;
      let result = napitest.runJsVm(script);
      expect(result).assertEqual(false);
    })

    it("testIsStrictEquals002", 0, function () {
      let script: string = `
      let str = 'hello';
      let testStr = 'hello';
      isStrictEquals(str, testStr);
  `;
      let result = napitest.runJsVm(script);
      expect(result).assertEqual(true);
    })

    it("testIsStrictEquals003", 0, function () {
      let script: string = `
      let str = 'hello';
      let testStr = 'hell';
      isStrictEquals(str, testStr);
  `;
      let result = napitest.runJsVm(script);
      expect(result).assertEqual(false);
    })

    it("testIsStrictEquals004", 0, function () {
      let script: string = `
      let testNum = 123;
      let num = 123;
      isStrictEquals(num,testNum);
        `;
      let result = napitest.runJsVm(script);
      expect(result).assertEqual(true);
    })

    it("testIsStrictEquals005", 0, function () {
      let script: string = `
        let obj = {
            data: 1
        };
        let testObj = obj
        isStrictEquals(obj, testObj);
    `;
      let result = napitest.runJsVm(script);
      expect(result).assertEqual(true);
    })

    it("testIsDetachedArraybuffer001", 0, function () {
      let script: string = `
          let arrayBuffer = new ArrayBuffer(10);
          isDetachedArraybuffer(arrayBuffer);
        `;
      let result = napitest.runJsVm(script);
      expect(result).assertEqual(true);
    })

    it("testIsDetachedArraybuffer002", 0, function () {
      let script: string = `
          let arrayBuffer = new ArrayBuffer(10);
          isDetachedArraybuffer(isDetachedArraybuffer(arrayBuffer));
        `;
      let result = napitest.runJsVm(script);
      expect(result).assertEqual(false);
    })

    it("testIsPromise001", 0, function () {
      let script: string = `
          let value = Promise.resolve();
          isPromise(value);
        `;
      let result = napitest.runJsVm(script);
      expect(result).assertEqual(true);
    })

    it("testIsPromise002", 0, function () {
      let script: string = `
          let value = Promise.resolve();
          isPromise(value);
        `;
      let result = napitest.runJsVm(script);
      expect(typeof result).assertEqual('boolean');
    })

    it("testIsPromise003", 0, function () {
      let script: string = `
          let value = 111;
          isPromise(value);
        `;
      let result = napitest.runJsVm(script);
      expect(typeof result).assertEqual('boolean');
    })

    it("testIsPromise004", 0, function () {
      let script: string = `
          let value = 111;
          isPromise(value);
        `;
      let result = napitest.runJsVm(script);
      expect(result).assertEqual(false);
    })

    it("testIsPromise005", 0, function () {
      let script: string = `
          let value = Promise.reject();
          isPromise(value);
        `;
      let result = napitest.runJsVm(script);
      expect(result).assertEqual(true);
    })

    it("testCreatePromise001", 0, function () {
      let script: string = `
          createPromise();
        `;
      let result = napitest.runJsVm(script);
      expect(result).assertEqual(true);
    })

    it("testCreatePromise002", 0, function () {
      let script: string = `
          createPromise();
        `;
      let result = napitest.runJsVm(script);
      expect(typeof result).assertEqual('boolean');
    })

    it("testResolveRejectDeferred001", 0, function () {
      let script: string = `
         resolveRejectDeferred('success','fail', true)
        `;
      let result = napitest.runJsVm(script);
      expect(typeof result).assertEqual('boolean');
    })

    it("testResolveRejectDeferred002", 0, function () {
      let script: string = `
         resolveRejectDeferred('success','fail', true)
        `;
      let result = napitest.runJsVm(script);
      expect(result).assertEqual(true);
    })

    it('testGetCbArgs001', 0, function () {
      let script: string = `
         const str = 'message';
         getCbArgs(str);
        `;
      let result = napitest.runJsVm(script);
      expect(result).assertEqual('message');
    })

    it('testGetCbArgs002', 0, function () {
      let script: string = `
         const str = 'message';
         getCbArgs(str);
        `;
      let result = napitest.runJsVm(script);
      expect(typeof result).assertEqual('string');
    })

    it('testNewInstance001', 0, function () {
      let script: string = `
         function Fruit(name) {
             this.name = name;
         }
         newInstance(Fruit, "apple");
        `;
      let result = napitest.runJsVm(script);
      expect(typeof result).assertEqual('object')
    })

    it('testNewInstance002', 0, function () {
      let script: string = `
         function Fruit(name) {
             this.name = name;
         }
         newInstance(Fruit, "apple");
        `;
      let result = napitest.runJsVm(script);
      expect(result.name).assertEqual('apple')
    })

    it('testGetGlobal001', 0, function () {
      let script: string = `
           getGlobal()
       `
      let result = napitest.runJsVm(script);
      expect(result.Row).assertEqual(1);
    });

    it('testGetGlobal002', 0, function () {
      let script: string = `
           getGlobal()
       `
      let result = napitest.runJsVm(script);
      expect(typeof result).assertEqual("object");
    });

    it('testSetTypeTagToObject001', 0, function () {
      let script: string = `
         class Obj {
           data;
           message;
         }
         let obj= { data: 0, message: "hello world"};
         setTypeTagToObject(obj, 0)
       `
      let result = napitest.runJsVm(script);
      expect(typeof result).assertEqual("boolean");
    });

    it('testSetTypeTagToObject002', 0, function () {
      let script: string = `
         class Obj {
           data;
           message;
         }
         let obj= { data: 0, message: "hello world"};
         setTypeTagToObject(obj, 0)
       `
      let result = napitest.runJsVm(script);
      expect(result).assertEqual(true);
    });

    it('testCheckObjectTypeTag001', 0, function () {
      let script: string = `
         class Obj {
           data;
           message;
         }
         let obj= { data: 0, message: "hello world"};
         setTypeTagToObject(obj,0)
         checkObjectTypeTag(obj,0);
       `
      let result = napitest.runJsVm(script);
      expect(result).assertEqual(true);
    });

    it('testCheckObjectTypeTag002', 0, function () {
      let script: string = `
         class Obj {
           data;
           message;
         }
         let obj= { data: 0, message: "hello world"};
         setTypeTagToObject(obj,0)
         checkObjectTypeTag(obj,0);
       `
      let result = napitest.runJsVm(script);
      expect(typeof result).assertEqual('boolean');
    });

    it("testAdjustExternalMemory001", 0, function () {
      let script: string = `
         adjustExternalMemory()
        `;
      let result = napitest.runJsVm(script);
      expect(typeof result).assertEqual('boolean');
    })

    it("testAdjustExternalMemory002", 0, function () {
      let script: string = `
         adjustExternalMemory()
        `;
      let result = napitest.runJsVm(script);
      expect(result).assertEqual(true);
    })

    it("testMemoryPressureNotification001", 0, function () {
      let script: string = `
         memoryPressureNotification();
        `;
      let result = napitest.runJsVm(script);
      expect(result).assertEqual(0);
    })

    it("testMemoryPressureNotification002", 0, function () {
      let script: string = `
         memoryPressureNotification();
        `;
      let result = napitest.runJsVm(script);
      expect(typeof result).assertEqual('number');
    })

    it("testWrapObject001", 0, function () {
      class Obj {}
      let obj: Obj = `{}`;
      let script: string = `
        wrapObject(${obj});
        `;
      let result = napitest.runJsVm(script);
      expect(typeof result).assertEqual('boolean');
    })

    it("testWrapObject002", 0, function () {
      class Obj {}
      let obj: Obj = `{}`;
      let script: string = `
        wrapObject(${obj});
        `;
      let result = napitest.runJsVm(script);
      expect(result).assertEqual(true);
    })

    it("testRemoveWrap001", 0, function () {
      class Obj {}
      let obj: Obj = `{}`;
      let script: string = `
        removeWrap(${obj});
        `;
      let result = napitest.runJsVm(script);
      expect(result).assertEqual(true);
    })

    it("testRemoveWrap002", 0, function () {
      class Obj {}
      let obj: Obj = `{}`;
      let script: string = `
        removeWrap(${obj});
        `;
      let result = napitest.runJsVm(script);
      expect(typeof  result).assertEqual('boolean');
    })

    it("testDefineClass001", 0, function () {
      let result = napitest.runJsVm("defineClass");
      expect(JSON.parse(result).name).assertEqual('lilei');
    })

    it("testDefineClass002", 0, function () {
      let result = napitest.runJsVm("defineClass");
      expect(JSON.parse(result).age).assertEqual(18);
    })
  })
}

