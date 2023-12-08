/*
* Copyright (c) 2023 Huawei Device Co., Ltd.
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
import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from '@ohos/hypium';
import data_Rdb from '@ohos.data.relationalStore'
import ability_featureAbility from '@ohos.ability.featureAbility'

var context = ability_featureAbility.getContext()

const TAG = "[RELATIONAL_STORE_JSKITS_TEST]"
const CREATE_TABLE_TEST = "CREATE TABLE IF NOT EXISTS test (" + "id INTEGER PRIMARY KEY AUTOINCREMENT, " +
"data1 text," + "data2 long, " + "data3 double," + "data4 blob)";

const STORE_CONFIG = {
  name: "Resultset.db",
  securityLevel: data_Rdb.SecurityLevel.S1,
}
var rdbStore = undefined;
export default function testQuerySharingResource() {
  describe('testQuerySharingResource', function () {
    beforeAll(async function () {
      console.log(TAG + "*************Unit Test Start*************");
      console.info(TAG + 'beforeAll')
      rdbStore = await data_Rdb.getRdbStore(context, STORE_CONFIG);
      await rdbStore.executeSql(CREATE_TABLE_TEST, null);
      await createTest();
    })

    beforeEach(async function () {
      console.info(TAG + 'beforeEach')
    })

    afterEach(function () {
      console.info(TAG + 'afterEach')
    })

    afterAll(async function () {
      console.info(TAG + 'afterAll')
      rdbStore = null
      await data_Rdb.deleteRdbStore(context, "Resultset.db");
      console.log(TAG + "*************Unit Test End*************");
    })

    // insert data
    async function createTest() {
      console.log(TAG + "createTest data start");
      var u8 = new Uint8Array([1, 2, 3])
      const valueBucket1 = {
        "data1": "hello",
        "data2": 10,
        "data3": 1.0,
        "data4": u8,
      }
      await rdbStore.insert("test", valueBucket1)
      var u8 = new Uint8Array([3, 4, 5])
      const valueBucket2 = {
        "data1": "2",
        "data2": -5,
        "data3": 2.5,
      }
      await rdbStore.insert("test", valueBucket2)
      var u8 = new Uint8Array(0)
      const valueBucket3 = {
        "data1": "hello world",
        "data2": 3,
        "data3": 1.8,
        "data4": u8,
      }
      await rdbStore.insert("test", valueBucket3)
      console.log(TAG + "createTest data end");
    }
    /**
     * @tc.name testQuerySharingResource predicates value is undefined(callback)
     * @tc.number SUB_DDM_QuerySharingResource_JSRDB_0100
     * @tc.desc testQuerySharingResource predicates value is undefined(callback)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it('testQuerySharingResource001', 0, async function (done) {
      console.log(TAG + "************* testQuerySharingResource001 start *************");
      try {
        rdbStore.querySharingResource(undefined, (err,resultSet) => {
          expect(null).assertFail();
          done()
        })
      } catch (err) {
        console.log(TAG+err.code)
        expect(err.code == 401).assertTrue();
        done();
      }
      console.log(TAG + "************* testQuerySharingResource001 end *************");
    })


    /**
     * @tc.name testQuerySharingResource predicates value is null(callback)
     * @tc.number SUB_DDM_QuerySharingResource_JSRDB_0200
     * @tc.desc testQuerySharingResource predicates value is null(callback)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it('testQuerySharingResource002', 0, async function (done) {
      console.log(TAG + "************* testQuerySharingResource002 start *************");
      try {
        rdbStore.querySharingResource(null, (err,resultSet) => {
          expect(null).assertFail();
          done();
        })
      } catch (err) {
        console.log(TAG+err.code)
        expect(err.code == 401).assertTrue();
        done();
      }
      console.log(TAG + "************* testQuerySharingResource002 end *************");
    })
    /**
     * @tc.name testQuerySharingResource predicates value is(callback)
     * @tc.number SUB_DDM_QuerySharingResource_JSRDB_0300
     * @tc.desc testQuerySharingResource predicates value is(callback)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it('testQuerySharingResource003', 0, async function (done) {
      console.log(TAG + "************* testQuerySharingResource003 start *************");
      try {
        rdbStore.querySharingResource((err,resultSet) => {
          expect(null).assertFail();
          done();
        })
      } catch (err) {
        console.log(TAG+err.code)
        expect(err.code == 401).assertTrue();
        done();
      }
      console.log(TAG + "************* testQuerySharingResource003 end *************");
    })
    /**
     * @tc.name testQuerySharingResource predicates value is 1(callback)
     * @tc.number SUB_DDM_QuerySharingResource_JSRDB_0400
     * @tc.desc testQuerySharingResource predicates value is 1(callback)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it('testQuerySharingResource004', 0, async function (done) {
      console.log(TAG + "************* testQuerySharingResource004 start *************");
      try {
        rdbStore.querySharingResource(1,(err,resultSet) => {
          expect(null).assertFail();
          done();
        })
      } catch (err) {
        console.log(TAG+err.code)
        expect(err.code == 401).assertTrue();
        done();
      }
      console.log(TAG + "************* testQuerySharingResource004 end *************");
    })
    /**
     * @tc.name testQuerySharingResource predicates value is "sss"(callback)
     * @tc.number SUB_DDM_QuerySharingResource_JSRDB_0500
     * @tc.desc testQuerySharingResource predicates value is "sss"(callback)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it('testQuerySharingResource005', 0, async function (done) {
      console.log(TAG + "************* testQuerySharingResource005 start *************");
      try {
        rdbStore.querySharingResource("ssss",(err,resultSet) => {
          expect(null).assertFail();
          done();
        })
      } catch (err) {
        console.log(TAG+err.code)
        expect(err.code == 401).assertTrue();
        done();
      }
      console.log(TAG + "************* testQuerySharingResource005 end *************");
    })
    /**
     * @tc.name testQuerySharingResource predicates value is '#'(callback)
     * @tc.number SUB_DDM_QuerySharingResource_JSRDB_0600
     * @tc.desc testQuerySharingResource predicates value is '#'(callback)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it('testQuerySharingResource006', 0, async function (done) {
      console.log(TAG + "************* testQuerySharingResource006 start *************");
      try {
        rdbStore.querySharingResource('#',(err,resultSet) => {
          expect(null).assertFail();
          done();
        })
      } catch (err) {
        console.log(TAG+err.code)
        expect(err.code == 401).assertTrue();
        done();
      }
      console.log(TAG + "************* testQuerySharingResource006 end *************");
    })
    /**
     * @tc.name testQuerySharingResource predicates value is undefined,columns value is columns(callback)
     * @tc.number SUB_DDM_QuerySharingResource_JSRDB_0700
     * @tc.desc testQuerySharingResource predicates value is undefined,columns value is columns(callback)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it('testQuerySharingResource007', 0, async function (done) {
      console.log(TAG + "************* testQuerySharingResource007 start *************");
      let columns = ["data1", "data2"]
      try {
        rdbStore.querySharingResource(undefined, columns, (err,resultSet) => {
          expect(null).assertFail()
          done();
        })
      } catch (err) {
        console.log(TAG+"err.code"+err.code)
        expect(err.code == 401).assertTrue();
        done();
      }
      console.log(TAG + "************* testQuerySharingResource007 end *************");
    })
    /**
     * @tc.name testQuerySharingResource predicates value is null,columns value is columns(callback)
     * @tc.number SUB_DDM_QuerySharingResource_JSRDB_0800
     * @tc.desc testQuerySharingResource predicates value is null,columns value is columns(callback)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it('testQuerySharingResource008', 0, async function (done) {
      console.log(TAG + "************* testQuerySharingResource008 start *************");
      let columns = ["data1", "data2"]
      try {
        rdbStore.querySharingResource(null, columns, (err,resultSet) => {
          expect(null).assertFail()
          done();
        })
      } catch (err) {
        console.log(TAG+"err.code"+err.code)
        expect(err.code == 401).assertTrue();
        done();
      }
      console.log(TAG + "************* testQuerySharingResource008 end *************");
    })
    /**
     * @tc.name testQuerySharingResource predicates value is 333,columns value is columns(callback)
     * @tc.number SUB_DDM_QuerySharingResource_JSRDB_0900
     * @tc.desc testQuerySharingResource predicates value is 333,columns value is columns(callback)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it('testQuerySharingResource009', 0, async function (done) {
      console.log(TAG + "************* testQuerySharingResource009 start *************");
      let columns = ["data1", "data2"]
      try {
        rdbStore.querySharingResource(333, columns, (err,resultSet) => {
          expect(null).assertFail()
          done()
        })
      } catch (err) {
        console.log(TAG+"err.code"+err.code)
        expect(err.code == 401).assertTrue();
        done();
      }
      console.log(TAG + "************* testQuerySharingResource009 end *************");
    })
    /**
     * @tc.name testQuerySharingResource predicates value is "SSS",columns value is columns(callback)
     * @tc.number SUB_DDM_QuerySharingResource_JSRDB_1000
     * @tc.desc testQuerySharingResource predicates value is "SSS",columns value is columns(callback)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it('testQuerySharingResource010', 0, async function (done) {
      console.log(TAG + "************* testQuerySharingResource010 start *************");
      let columns = ["data1", "data2"]
      try {
        rdbStore.querySharingResource("SSS", columns, (err,resultSet) => {
          expect(null).assertFail()
          done()
        })
      } catch (err) {
        console.log(TAG+"err.code"+err.code)
        expect(err.code == 401).assertTrue();
        done();
      }
      console.log(TAG + "************* testQuerySharingResource010 end *************");
    })    /**
     * @tc.name testQuerySharingResource predicates value is '#',columns value is columns(callback)
     * @tc.number SUB_DDM_QuerySharingResource_JSRDB_1100
     * @tc.desc testQuerySharingResource predicates value is '#',columns value is columns(callback)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it('testQuerySharingResource011', 0, async function (done) {
      console.log(TAG + "************* testQuerySharingResource011 start *************");
      let columns = ["data1", "data2"]
      try {
        rdbStore.querySharingResource('#', columns, (err,resultSet) => {
          expect(null).assertFail()
          done();
        })
      } catch (err) {
        console.log(TAG+"err.code"+err.code)
        expect(err.code == 401).assertTrue();
        done();
      }
      console.log(TAG + "************* testQuerySharingResource011 end *************");
    })
    /**
     * @tc.name testQuerySharingResource predicates value is predicates,columns value is undefined(callback)
     * @tc.number SUB_DDM_QuerySharingResource_JSRDB_1200
     * @tc.desc testQuerySharingResource predicates value is predicates,columns value is undefined(callback)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it('testQuerySharingResource012', 0, async function (done) {
      console.log(TAG + "************* testQuerySharingResource012start *************");
      let predicates = new data_Rdb.RdbPredicates("test");
      predicates.equalTo("name", "wangwu");
      try {
        rdbStore.querySharingResource(predicates, undefined, (err,resultSet) => {
          if(err)
          {
            expect(null).assertFail();
          }
          expect(null).assertFail();
          done();
        })
      } catch (err) {
        expect(err.code).assertEqual('202')
        console.log(TAG+"" + "err.code"+err.code)
        done()
      }
      console.log(TAG + "************* testQuerySharingResource012 end *************");
    })
    /**
     * @tc.name testQuerySharingResource predicates value is predicates,columns value is null(callback)
     * @tc.number SUB_DDM_QuerySharingResource_JSRDB_1300
     * @tc.desc testQuerySharingResource predicates value is predicates,columns value is null(callback)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it('testQuerySharingResource013', 0, async function (done) {
      console.log(TAG + "************* testQuerySharingResource013start *************");
      let predicates = new data_Rdb.RdbPredicates("test");
      predicates.equalTo("name", "wangwu");
      try {
        rdbStore.querySharingResource(predicates, null, (err,resultSet) => {
          if(err)
          {
            expect(null).assertFail();
          }
          expect(null).assertFail();
          done();
        })
      } catch (err) {
        expect(err.code).assertEqual('202')
        console.log(TAG+"" + "err.code"+err.code)
        done()
      }
      console.log(TAG + "************* testQuerySharingResource013 end *************");
    })
    /**
     * @tc.name testQuerySharingResource predicates value is undefined,columns value is 333(callback)
     * @tc.number SUB_DDM_QuerySharingResource_JSRDB_1400
     * @tc.desc testQuerySharingResource predicates value is predicates,columns value is 333(callback)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it('testQuerySharingResource014', 0, async function (done) {
      console.log(TAG + "************* testQuerySharingResource014 start *************");
      let predicates = new data_Rdb.RdbPredicates("test");
      predicates.equalTo("name", "wangwu");
      try {
        rdbStore.querySharingResource(predicates, 333, (err,resultSet) => {
          if(err)
          {
            console.log(TAG+"err.code"+err.code)
            expect(null).assertFail()
          }
          expect(null).assertFail()
          done()
        })
      } catch (err) {
        console.log(TAG+"err.code"+err.code+"err.message"+err.message)
        expect(err.code).assertEqual('401')
        done()
      }
      console.log(TAG + "************* testQuerySharingResource014 end *************");
    })
    /**
     * @tc.name testQuerySharingResource predicates value is undefined,columns value is "SSS"(callback)
     * @tc.number SUB_DDM_QuerySharingResource_JSRDB_1500
     * @tc.desc testQuerySharingResource predicates value is predicates,columns value is "SSS"(callback)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it('testQuerySharingResource015', 0, async function (done) {
      console.log(TAG + "************* testQuerySharingResource015 start *************");
      let predicates = new data_Rdb.RdbPredicates("test");
      predicates.equalTo("name", "wangwu");
      try {
        rdbStore.querySharingResource(predicates, "SSS", (err,resultSet) => {
          if(err)
          {
            console.log(TAG+"err.code"+err.code)
            expect(null).assertFail()
          }
          expect(null).assertFail()
          done()
        })
      } catch (err) {
        console.log(TAG+"err.code"+err.code+"err.message"+err.message)
        expect(err.code).assertEqual('401')
        done()
      }
      console.log(TAG + "************* testQuerySharingResource015 end *************");
    })
    /**
     * @tc.name testQuerySharingResource predicates value is undefined,columns value is '#'(callback)
     * @tc.number SUB_DDM_QuerySharingResource_JSRDB_1600
     * @tc.desc testQuerySharingResource predicates value is predicates,columns value is '#'(callback)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it('testQuerySharingResource016', 0, async function (done) {
      console.log(TAG + "************* testQuerySharingResource016 start *************");
      let predicates = new data_Rdb.RdbPredicates("test");
      predicates.equalTo("name", "wangwu");
      try {
        rdbStore.querySharingResource(predicates, '#', (err,resultSet) => {
          if(err)
          {
            console.log(TAG+"err.code"+err.code)
            expect(null).assertFail()
          }
          expect(null).assertFail()
          done()
        })
      } catch (err) {
        console.log(TAG+"err.code"+err.code+"err.message"+err.message)
        expect(err.code).assertEqual('401')
        done()
      }
      console.log(TAG + "************* testQuerySharingResource016 end *************");
    })
    /**
     * @tc.name testQuerySharingResource predicates value is 11,columns value is 12(callback)
     * @tc.number SUB_DDM_QuerySharingResource_JSRDB_1700
     * @tc.desc testQuerySharingResource predicates value is 11,columns value is 12(callback)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it('testQuerySharingResource017', 0, async function (done) {
      console.log(TAG + "************* testQuerySharingResource017 start *************");
      let predicates = new data_Rdb.RdbPredicates("test");
      predicates.equalTo("name", "wangwu");
      try {
        rdbStore.querySharingResource(11, 12, (err,resultSet) => {
          expect(null).assertFail()
          done()
        })
      } catch (err) {
        console.log(TAG+"err.code"+err.code)
        expect(err.code == 401).assertTrue();
        done();
      }
      console.log(TAG + "************* testQuerySharingResource017 end *************");
    })
    /**
     * @tc.name testQuerySharingResource predicates value is null,columns value is null(callback)
     * @tc.number SUB_DDM_QuerySharingResource_JSRDB_1800
     * @tc.desc testQuerySharingResource predicates value is null,columns value is null(callback)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it('testQuerySharingResource018', 0, async function (done) {
      console.log(TAG + "************* testQuerySharingResource018 start *************");
      let predicates = new data_Rdb.RdbPredicates("test");
      predicates.equalTo("name", "wangwu");
      try {
        rdbStore.querySharingResource(null, null, (err,resultSet) => {
          expect(null).assertFail()
          done();
        })
      } catch (err) {
        console.log(TAG+"err.code"+err.code)
        expect(err.code == 401).assertTrue();
        done();
      }
      console.log(TAG + "************* testQuerySharingResource018 end *************");
    })
    /**
     * @tc.name testQuerySharingResource predicates value is undefined,columns value is undefined(callback)
     * @tc.number SUB_DDM_QuerySharingResource_JSRDB_1900
     * @tc.desc testQuerySharingResource predicates value is undefined,columns value is undefined(callback)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it('testQuerySharingResource019', 0, async function (done) {
      console.log(TAG + "************* testQuerySharingResource019 start *************");
      let predicates = new data_Rdb.RdbPredicates("test");
      predicates.equalTo("name", "wangwu");
      try {
        rdbStore.querySharingResource(undefined, undefined, (err,resultSet) => {
          expect(null).assertFail()
          done();
        })
      } catch (err) {
        console.log(TAG+"err.code"+err.code)
        expect(err.code == 401).assertTrue();
        done();
      }
      console.log(TAG + "************* testQuerySharingResource019 end *************");
    })
    /**
     * @tc.name testQuerySharingResource predicates value is undefined(promise)
     * @tc.number SUB_DDM_QuerySharingResource_JSRDB_2000
     * @tc.desc testQuerySharingResource predicates value is undefined(promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it('testQuerySharingResource020', 0, async function (done) {
      console.log(TAG + "************* testQuerySharingResource020 start *************");
      try {
        await rdbStore.querySharingResource(undefined).then((resultSet) => {
          expect(null).assertFail();
        }).catch((err) => {
          expect(null).assertFail();
          console.log(TAG+"err.code"+err.code+"err.message"+err.message)
        });
      } catch (err) {
        expect(err.code == 401).assertTrue();
        console.log(TAG+"err.code"+err.code)
      }
      done();
      console.log(TAG + "************* testQuerySharingResource020 end *************");
    })
    /**
     * @tc.name testQuerySharingResource predicates value is null(promise)
     * @tc.number SUB_DDM_QuerySharingResource_JSRDB_2100
     * @tc.desc testQuerySharingResource predicates value is null(promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it('testQuerySharingResource021', 0, async function (done) {
      console.log(TAG + "************* testQuerySharingResource021 start *************");
      try {
        await rdbStore.querySharingResource(null).then((resultSet) => {
          expect(null).assertFail();
        }).catch((err) => {
          expect(null).assertFail();
          console.log(TAG+"err.code"+err.code+"err.message"+err.message)
        });
      } catch (err) {
        expect(err.code == 401).assertTrue();
        console.log(TAG+"err.code"+err.code)
      }
      done();
      console.log(TAG + "************* testQuerySharingResource021 end *************");
    })
    /**
     * @tc.name testQuerySharingResource predicates value is 1(promise)
     * @tc.number SUB_DDM_QuerySharingResource_JSRDB_2200
     * @tc.desc testQuerySharingResource predicates value is 1(promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it('testQuerySharingResource022', 0, async function (done) {
      console.log(TAG + "************* testQuerySharingResource022 start *************");
      try {
        await rdbStore.querySharingResource(1).then((resultSet) => {
          expect(null).assertFail();
        }).catch((err) => {
          expect(null).assertFail();
          console.log(TAG+"err.code"+err.code+"err.message"+err.message)
        });
      } catch (err) {
        expect(err.code == 401).assertTrue();
        console.log(TAG+"err.code"+err.code)
      }
      done();
      console.log(TAG + "************* testQuerySharingResource022 end *************");
    })
    /**
     * @tc.name testQuerySharingResource predicates value is '#'(promise)
     * @tc.number SUB_DDM_QuerySharingResource_JSRDB_2300
     * @tc.desc testQuerySharingResource predicates value is '#'(promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it('testQuerySharingResource023', 0, async function (done) {
      console.log(TAG + "************* testQuerySharingResource023 start *************");
      try {
        await rdbStore.querySharingResource('#').then((resultSet) => {
          expect(null).assertFail();
        }).catch((err) => {
          expect(null).assertFail();
          console.log(TAG+"err.code"+err.code+"err.message"+err.message)
        });
      } catch (err) {
        expect(err.code == 401).assertTrue();
        console.log(TAG+"err.code"+err.code)
      }
      done();
      console.log(TAG + "************* testQuerySharingResource023 end *************");
    })
    /**
     * @tc.name testQuerySharingResource predicates value is "AAA"(promise)
     * @tc.number SUB_DDM_QuerySharingResource_JSRDB_2400
     * @tc.desc testQuerySharingResource predicates value is "AAA"(promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it('testQuerySharingResource024', 0, async function (done) {
      console.log(TAG + "************* testQuerySharingResource024 start *************");
      try {
        await rdbStore.querySharingResource("AAA").then((resultSet) => {
          expect(null).assertFail();
        }).catch((err) => {
          expect(null).assertFail();
          console.log(TAG+"err.code"+err.code+"err.message"+err.message)
        });
      } catch (err) {
        expect(err.code == 401).assertTrue();
        console.log(TAG+"err.code"+err.code)
      }
      done();
      console.log(TAG + "************* testQuerySharingResource024 end *************");
    })
    /**
     * @tc.name testQuerySharingResource predicates value is undefined,columns value is columns(promise)
     * @tc.number SUB_DDM_QuerySharingResource_JSRDB_2500
     * @tc.desc testQuerySharingResource predicates value is undefined,columns value is columns(promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it('testQuerySharingResource025', 0, async function (done) {
      console.log(TAG + "************* testQuerySharingResource025 start *************");
      try {
        let columns = ["data1", "data2"]
        await rdbStore.querySharingResource(undefined, columns).then((resultSet) => {
          expect(null).assertFail();
        }).catch((err) => {
          expect(null).assertFail();
        });
      } catch (err) {
        console.log(TAG+"err.code:"+err.code+"err.message:"+err.message);
        expect(err.code == 401).assertTrue();
      }
      done();
      console.log(TAG + "************* testQuerySharingResource025 end *************");
    })

    /**
     * @tc.name testQuerySharingResource predicates value is predicates,columns value is undefined(promise)
     * @tc.number SUB_DDM_QuerySharingResource_JSRDB_2600
     * @tc.desc testQuerySharingResource predicates value is predicates,columns value is undefined(promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it('testQuerySharingResource026', 0, async function (done) {
      console.log(TAG + "************* testQuerySharingResource026 start *************");
      let predicates = new data_Rdb.RdbPredicates("test");
      predicates.equalTo("data1", "2");
      try {
        await rdbStore.querySharingResource(predicates, undefined).then((resultSet) => {
          expect(null).assertFail()
        }).catch((err) => {
          expect(null).assertFail()
        });
      } catch (err) {
        console.log(TAG+"err.code"+err.code+"err.message"+err.message);
        expect(err.code).assertEqual('202');
      }
      done();
      console.log(TAG + "************* testQuerySharingResource026 end *************");
    })
    /**
     * @tc.name testQuerySharingResource predicates value is,columns value is (promise)
     * @tc.number SUB_DDM_QuerySharingResource_JSRDB_2700
     * @tc.desc testQuerySharingResource predicates value is ,columns value is (promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it('testQuerySharingResource027', 0, async function (done) {
      console.log(TAG + "************* testQuerySharingResource027 start *************");
      try {
        await rdbStore.querySharingResource().then((resultSet) => {
          expect(null).assertFail();
        }).catch((err) => {
          expect(null).assertFail();
          console.log(TAG+"err.code"+err.code+"err.message"+err.message)
        });
      } catch (err) {
        expect(err.code == 401).assertTrue();
        console.log(TAG+"err.code"+err.code)
      }
      done();
      console.log(TAG + "************* testQuerySharingResource027 end *************");
    })
    /**
     * @tc.name testQuerySharingResource predicates value is 11,columns value is 12(promise)
     * @tc.number SUB_DDM_QuerySharingResource_JSRDB_2800
     * @tc.desc testQuerySharingResource predicates value is 11,columns value is 12(promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it('testQuerySharingResource028', 0, async function (done) {
      console.log(TAG + "************* testQuerySharingResource028 start *************");
      try {
        await rdbStore.querySharingResource(11,12).then((resultSet) => {
          expect(null).assertFail();
        }).catch((err) => {
          expect(null).assertFail();
          console.log(TAG+"err.code"+err.code+"err.message"+err.message)
        });
      } catch (err) {
        expect(err.code == 401).assertTrue();
        console.log(TAG+"err.code"+err.code)
      }
      done();
      console.log(TAG + "************* testQuerySharingResource028 end *************");
    })
    /**
     * @tc.name testQuerySharingResource predicates value is null,columns value is columns(promise)
     * @tc.number SUB_DDM_QuerySharingResource_JSRDB_2900
     * @tc.desc testQuerySharingResource predicates value is null,columns value is columns(promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it('testQuerySharingResource029', 0, async function (done) {
      console.log(TAG + "************* testQuerySharingResource029 start *************");
      try {
        let columns = ["data1","data2"]
        await rdbStore.querySharingResource(null,columns).then((resultSet) => {
          expect(null).assertFail();
        }).catch((err) => {
          expect(null).assertFail();
          console.log(TAG+"err.code"+err.code+"err.message"+err.message)
        });
      } catch (err) {
        expect(err.code == 401).assertTrue();
        console.log(TAG+"err.code"+err.code)
      }
      done();
      console.log(TAG + "************* testQuerySharingResource029 end *************");
    })
    /**
     * @tc.name testQuerySharingResource predicates value is predicates,columns value is "SSS"(promise)
     * @tc.number SUB_DDM_QuerySharingResource_JSRDB_3000
     * @tc.desc testQuerySharingResource predicates value is predicates,columns value is "SSS"(promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it('testQuerySharingResource030', 0, async function (done) {
      console.log(TAG + "************* testQuerySharingResource030 start *************");
      try {
        let predicates = new data_Rdb.RdbPredicates("test");
        predicates.equalTo("data1", "2");
        await rdbStore.querySharingResource(predicates,"SSS").then((resultSet) => {
          expect(null).assertFail();
        }).catch((err) => {
          expect(null).assertFail();
          console.log(TAG+"err.code"+err.code+"err.message"+err.message)
        });
      } catch (err) {
        expect(err.code == 401).assertTrue();
        console.log(TAG+"err.code"+err.code)
      }
      done();
      console.log(TAG + "************* testQuerySharingResource030 end *************");
    })
    /**
     * @tc.name testQuerySharingResource predicates value is predicates,columns value is '#'(promise)
     * @tc.number SUB_DDM_QuerySharingResource_JSRDB_3100
     * @tc.desc testQuerySharingResource predicates value is predicates,columns value is '#'(promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it('testQuerySharingResource031', 0, async function (done) {
      console.log(TAG + "************* testQuerySharingResource031 start *************");
      try {
        let predicates = new data_Rdb.RdbPredicates("test");
        predicates.equalTo("data1", "2");
        await rdbStore.querySharingResource(predicates,'#').then((resultSet) => {
          expect(null).assertFail();
        }).catch((err) => {
          expect(null).assertFail();
          console.log(TAG+"err.code"+err.code+"err.message"+err.message)
        });
      } catch (err) {
        expect(err.code == 401).assertTrue();
        console.log(TAG+"err.code"+err.code)
      }
      done();
      console.log(TAG + "************* testQuerySharingResource031 end *************");
    })
    /**
     * @tc.name testQuerySharingResource predicates value is predicates,columns value is null(promise)
     * @tc.number SUB_DDM_QuerySharingResource_JSRDB_3200
     * @tc.desc testQuerySharingResource predicates value is predicates,columns value is null(promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it('testQuerySharingResource032', 0, async function (done) {
      console.log(TAG + "************* testQuerySharingResource032 start *************");
      let predicates = new data_Rdb.RdbPredicates("test");
      predicates.equalTo("data1", "2");
      try {
        await rdbStore.querySharingResource(predicates, null).then((resultSet) => {
          expect(null).assertFail()
        }).catch((err) => {
          expect(null).assertFail()
        });
      } catch (err) {
        console.log(TAG+"err.code"+err.code+"err.message"+err.message);
        expect(err.code).assertEqual('202');
      }
      done();
      console.log(TAG + "************* testQuerySharingResource032 end *************");
    })
    /**
     * @tc.name testQuerySharingResource predicates value is predicates,columns value is 555(promise)
     * @tc.number SUB_DDM_QuerySharingResource_JSRDB_3300
     * @tc.desc testQuerySharingResource predicates value is predicates,columns value is 555(promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it('testQuerySharingResource033', 0, async function (done) {
      console.log(TAG + "************* testQuerySharingResource033 start *************");
      let predicates = new data_Rdb.RdbPredicates("test");
      predicates.equalTo("data1", "2");
      try {
        await rdbStore.querySharingResource(predicates, 555).then((resultSet) => {
          expect(null).assertFail();
        }).catch((err) => {
          expect(null).assertFail();
          console.log(TAG+"err.code"+err.code+"err.message"+err.message)
        });
      } catch (err) {
        expect(err.code == 401).assertTrue();
        console.log(TAG+"err.code"+err.code)
      }
      done();
      console.log(TAG + "************* testQuerySharingResource033 end *************");
    })
    /**
     * @tc.name testQuerySharingResource predicates value is null,columns value is null(promise)
     * @tc.number SUB_DDM_QuerySharingResource_JSRDB_3400
     * @tc.desc testQuerySharingResource predicates value is null,columns value is null(promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it('testQuerySharingResource034', 0, async function (done) {
      console.log(TAG + "************* testQuerySharingResource034 start *************");
      try {
        await rdbStore.querySharingResource(null, null).then((resultSet) => {
          expect(null).assertFail();
        }).catch((err) => {
          console.log(TAG+"err.code"+err.code+"err.message"+err.message);
          expect(null).assertFail();
        });
      } catch (err) {
        expect(err.code).assertEqual('401')
        console.log(TAG+"err.code"+err.code);
      }
      done();
      console.log(TAG + "************* testQuerySharingResource034 end *************");
    })
    /**
     * @tc.name testQuerySharingResource predicates value is undefined,columns value is undefined(promise)
     * @tc.number SUB_DDM_QuerySharingResource_JSRDB_3500
     * @tc.desc testQuerySharingResource predicates value is undefined,columns value is undefined(promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it('testQuerySharingResource035', 0, async function (done) {
      console.log(TAG + "************* testQuerySharingResource035 start *************");;
      try {
        await rdbStore.querySharingResource(undefined, undefined).then((resultSet) => {
          expect(null).assertFail();
        }).catch((err) => {
          console.log(TAG+"err.code"+err.code+"err.message"+err.message);
          expect(null).assertFail();
        });
      } catch (err) {
        expect(err.code).assertEqual('401')
        console.log(TAG+"err.code"+err.code);
      }
      done();
      console.log(TAG + "************* testQuerySharingResource035 end *************");
    })
    /**
     * @tc.name testQuerySharingResource predicates value is null,columns value is columns(promise)
     * @tc.number SUB_DDM_QuerySharingResource_JSRDB_3600
     * @tc.desc testQuerySharingResource predicates value is null,columns value is columns(promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it('testQuerySharingResource036', 0, async function (done) {
      console.log(TAG + "************* testQuerySharingResource036 start *************");
      try {
        let columns = ["data1","data2"]
        await rdbStore.querySharingResource(333,columns).then((resultSet) => {
          expect(null).assertFail();
        }).catch((err) => {
          expect(null).assertFail();
          console.log(TAG+"err.code"+err.code+"err.message"+err.message)
        });
      } catch (err) {
        expect(err.code == 401).assertTrue();
        console.log(TAG+"err.code"+err.code)
      }
      done();
      console.log(TAG + "************* testQuerySharingResource036 end *************");
    })
    /**
     * @tc.name testQuerySharingResource predicates value is null,columns value is columns(promise)
     * @tc.number SUB_DDM_QuerySharingResource_JSRDB_3700
     * @tc.desc testQuerySharingResource predicates value is null,columns value is columns(promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it('testQuerySharingResource037', 0, async function (done) {
      console.log(TAG + "************* testQuerySharingResource037 start *************");
      try {
        let columns = ["data1","data2"]
        await rdbStore.querySharingResource("SSS",columns).then((resultSet) => {
          expect(null).assertFail();
        }).catch((err) => {
          expect(null).assertFail();
          console.log(TAG+"err.code"+err.code+"err.message"+err.message)
        });
      } catch (err) {
        expect(err.code == 401).assertTrue();
        console.log(TAG+"err.code"+err.code)
      }
      done();
      console.log(TAG + "************* testQuerySharingResource037 end *************");
    })
    /**
     * @tc.name testQuerySharingResource predicates value is null,columns value is columns(promise)
     * @tc.number SUB_DDM_QuerySharingResource_JSRDB_3800
     * @tc.desc testQuerySharingResource predicates value is null,columns value is columns(promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it('testQuerySharingResource038', 0, async function (done) {
      console.log(TAG + "************* testQuerySharingResource038 start *************");
      try {
        let columns = ["data1","data2"]
        await rdbStore.querySharingResource('#',columns).then((resultSet) => {
          expect(null).assertFail();
        }).catch((err) => {
          expect(null).assertFail();
          console.log(TAG+"err.code"+err.code+"err.message"+err.message)
        });
      } catch (err) {
        expect(err.code == 401).assertTrue();
        console.log(TAG+"err.code"+err.code)
      }
      done();
      console.log(TAG + "************* testQuerySharingResource038 end *************");
    })
  })
}
