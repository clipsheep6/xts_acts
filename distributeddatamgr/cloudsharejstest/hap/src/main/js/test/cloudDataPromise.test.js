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
import cloudData from '@ohos.data.cloudData';
import data_Rdb from '@ohos.data.relationalStore';
import featureAbility from '@ohos.ability.featureAbility';

const TAG = "[CLOUD_SHARE_JSKITS_TEST]"
const STORE_NAME = "cloud_rdb.db"
let rdbStore = null;
let context = featureAbility.getContext()
const SHARING_RESOURCE = "test sharing resource"
const INVITATION_CODE = "test invitation code"
let privilegeEnable = {
  writable: true,
  readable: true,
  creatable: true,
  deletable: true,
  shareable: true
}
let privilegeDisable = {
  writable: false,
  readable: false,
  creatable: false,
  deletable: false,
  shareable: false
}
let participants1 = {
  identity: '11111111',
  role: cloudData.sharing.Role.ROLE_INVITER,
  state: cloudData.sharing.State.STATE_UNKNOWN,
  privilege: privilegeEnable,
  attachInfo: 'attachInfo1'
}
let participants2 = {
  identity: '2222222',
  role: cloudData.sharing.Role.ROLE_INVITER,
  state: cloudData.sharing.State.STATE_UNKNOWN,
  privilege: privilegeDisable,
  attachInfo: 'attachInfo2'
}
let participants = [participants1, participants2];
//const rowCount = 1;

export default function cloudSharingTestPromise() {
  describe('cloudSharingTestPromise', function () {
    beforeAll(async function (done) {
      console.log(TAG+"************* Unit Test Start *************")
      console.info("beforeAll");
      const config = {
        name: STORE_NAME,
        securityLevel: data_Rdb.SecurityLevel.S1,
      }
      try {
        rdbStore = await data_Rdb.getRdbStore(context, config);
        console.log(TAG + "create rdb store success")
        let sqlStatement = "CREATE TABLE IF NOT EXISTS employee (" +
        "id INTEGER PRIMARY KEY AUTOINCREMENT," +
        "name TEXT NOT NULL," +
        "age INTEGER)"
        await rdbStore.executeSql(sqlStatement, null)
        console.log(TAG + "create table employee success")
        const valueBucket = {
          id: 1,
          name: "Linda",
          age: 18
        }
        await rdbStore.insert("employee", valueBucket).then((ret) => {
          console.info(`Insert is successful, ret = ${ret}`);
        });
        done();
      } catch (err) {
        console.log(TAG + "create rdb store failed" + `, error code is ${err.code}, message is ${err.message}`)
        expect(null).assertFail()
      }
    })

    beforeEach(function () {
      console.info("beforeEach");
    })

    afterEach(function () {
      console.info("afterEach");
    })

    afterAll(async function () {
      console.info("afterAll");
      const DROP_TABLE_EMPLOYEE = "DROP TABLE IF EXISTS employee";
      await rdbStore.executeSql(DROP_TABLE_EMPLOYEE, null);
      await data_Rdb.deleteRdbStore(context, STORE_NAME);
      rdbStore = null;
      console.log(TAG+"************* Unit Test end *************")
    })
    /**
     * @tc.name allocResourceAndShare storeid value is undefined(promise)
     * @tc.number SUB_DDM_CloudData_0100
     * @tc.desc allocResourceAndShare storeid value is undefined(promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it('allocResourceAndShareTest001', 0, async function (done) {
      console.log(TAG + "************* allocResourceAndShareTest001 start *************");
      try {
        let predicates = new data_Rdb.RdbPredicates("employee");
        predicates.equalTo("id", 1);
        await cloudData.sharing.allocResourceAndShare(undefined, predicates, participants).then(async(resultSet) =>
        {
           expect(null).assertFail();
           done()
         }).catch((err)=>{
           expect(null).assertFail();
           console.log(TAG+"err.code:"+err.code+"err.message"+err.message)
          done()
         })
      } catch (err) {
        expect(err.code == 401).assertTrue();
        console.log(TAG+"err.code:"+err.code)
        done()
      }
      console.log(TAG + "************* allocResourceAndShareTest001 end *************");
    })
    /**
     * @tc.name allocResourceAndShare storeid value is null(promise)
     * @tc.number SUB_DDM_CloudData_0200
     * @tc.desc allocResourceAndShare storeid value is null(promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it('allocResourceAndShareTest002', 0, async function (done) {
      console.log(TAG + "************* allocResourceAndShareTest002 start *************");
      try {
        let predicates = new data_Rdb.RdbPredicates("employee");
        predicates.equalTo("id", 1);
        await cloudData.sharing.allocResourceAndShare(null, predicates, participants).then(async(resultSet)=> {
          expect(null).assertFail();
          done()
          }).catch((err)=>{
          expect(null).assertFail();
          console.log(TAG+"err.code:"+err.code+"err.message"+err.message)
          done()
          })
      } catch (err) {
        expect(err.code == 401).assertTrue();
        console.log(TAG+"err.code:"+err.code)
        done()
      }
      console.log(TAG + "************* allocResourceAndShareTest002 end *************");
    })
    /**
     * @tc.name allocResourceAndShare storeid value is "AAA"(promise)
     * @tc.number SUB_DDM_CloudData_0300
     * @tc.desc allocResourceAndShare storeid value is "AAA"(promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it('allocResourceAndShareTest003', 0, async function (done) {
      console.log(TAG + "************* allocResourceAndShareTest003 start *************");
      try {
        let predicates = new data_Rdb.RdbPredicates("employee");
        predicates.equalTo("id", 1);
        await cloudData.sharing.allocResourceAndShare("AAA", predicates, participants).then(async(resultSet)=>{
          expect(null).assertFail();
          done()
        }).catch((err)=>{
          expect(err.code == 202).assertTrue();
          console.log(TAG+"err.code:"+err.code+"err.message"+err.message)
          done()
        })
      } catch (err) {
        expect(null).assertFail();
        console.log(TAG+"err.code:"+err.code)
        done()
      }
      console.log(TAG + "************* allocResourceAndShareTest003 end *************");
    })
    /**
     * @tc.name allocResourceAndShare storeid value is '#'(promise)
     * @tc.number SUB_DDM_CloudData_0400
     * @tc.desc allocResourceAndShare storeid value is '#'(promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it('allocResourceAndShareTest004', 0, async function (done) {
      console.log(TAG + "************* allocResourceAndShareTest004 start *************");
      try {
        let predicates = new data_Rdb.RdbPredicates("employee");
        predicates.equalTo("id", 1);
        await cloudData.sharing.allocResourceAndShare('#', predicates, participants).then(async(resultSet)=>{
          expect(null).assertFail();
          done()
        }).catch((err)=>{
          expect(err.code == 202).assertTrue();
          console.log(TAG+"err.code:"+err.code+"err.message"+err.message)
          done()
        })
      } catch (err) {
        expect(null).assertFail();
        console.log(TAG+"err.code:"+err.code)
        done()
      }
      console.log(TAG + "************* allocResourceAndShareTest004 end *************");
    })
    /**
     * @tc.name allocResourceAndShare storeid value is 123(promise)
     * @tc.number SUB_DDM_CloudData_0500
     * @tc.desc allocResourceAndShare storeid value is 123(promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it('allocResourceAndShareTest005', 0, async function (done) {
      console.log(TAG + "************* allocResourceAndShareTest005 start *************");
      try {
        let predicates = new data_Rdb.RdbPredicates("employee");
        predicates.equalTo("id", 1);
        await cloudData.sharing.allocResourceAndShare(123, predicates, participants).then(async(resultSet)=>{
            expect(null).assertFail();
            done()
        }).catch((err)=>{
            expect(null).assertFail();
            console.log(TAG+"err.code:"+err.code+"err.message"+err.message)
          done()
        })
      } catch (err) {
        expect(err.code == 401).assertTrue();
        console.log(TAG+"err.code:"+err.code)
        done()
      }
      console.log(TAG + "************* allocResourceAndShareTest005 end *************");
    })
    /**
     * @tc.name allocResourceAndShare storeid value is (promise)
     * @tc.number SUB_DDM_CloudData_0600
     * @tc.desc allocResourceAndShare storeid value is (promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it('allocResourceAndShareTest006', 0, async function (done) {
      console.log(TAG + "************* allocResourceAndShareTest006 start *************");
      try {
        let predicates = new data_Rdb.RdbPredicates("employee");
        predicates.equalTo("id", 1);
        await cloudData.sharing.allocResourceAndShare(predicates, participants).then(async(resultSet)=>{
          expect(null).assertFail();
          done()
        }).catch((err)=>{
           expect(null).assertFail();
           console.log(TAG+"err.code:"+err.code+"err.message"+err.message)
          done()
        })
      } catch (err) {
        expect(err.code == 401).assertTrue();
        console.log(TAG+"err.code:"+err.code)
        done()
      }
      console.log(TAG + "************* allocResourceAndShareTest006 end *************");
    })
    /**
     * @tc.name allocResourceAndShare predicates value is undefined(promise)
     * @tc.number SUB_DDM_CloudData_0700
     * @tc.desc allocResourceAndShare predicates value is undefined(promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it('allocResourceAndShareTest007', 0, async function (done) {
      console.log(TAG + "************* allocResourceAndShareTest007 start *************");
      try {
        await cloudData.sharing.allocResourceAndShare(STORE_NAME, undefined, participants).then(async(resultSet)=>{
          expect(null).assertFail();
          done()
        }).catch((err)=>{
          expect(null).assertFail();
          console.log(TAG+"err.code:"+err.code+"err.message"+err.message)
          done()
        })
      } catch (err) {
        expect(err.code == 401).assertTrue();
        console.log(TAG+"err.code:"+err.code)
        done()
      }
      console.log(TAG + "************* allocResourceAndShareTest007 end *************");
    })
    /**
     * @tc.name allocResourceAndShare predicates value is null(promise)
     * @tc.number SUB_DDM_CloudData_0800
     * @tc.desc allocResourceAndShare predicates value is null(promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it('allocResourceAndShareTest008', 0, async function (done) {
      console.log(TAG + "************* allocResourceAndShareTest008 start *************");
      try {
        await cloudData.sharing.allocResourceAndShare(STORE_NAME, null, participants).then(async(resultSet)=>{
          expect(null).assertFail();
          done()
        }).catch((err)=>{
          expect(null).assertFail();
          console.log(TAG+"err.code:"+err.code+"err.message"+err.message)
          done()
        })
      } catch (err) {
        expect(err.code == 401).assertTrue();
        console.log(TAG + "err.code:" + err.code)
        done()
      }
      console.log(TAG + "************* allocResourceAndShareTest008 end *************");
    })
    /**
     * @tc.name allocResourceAndShare predicates value is not predicates.equalTo(promise)
     * @tc.number SUB_DDM_CloudData_0900
     * @tc.desc allocResourceAndShare predicates  value is not predicates.equalTo(promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it('allocResourceAndShareTest009', 0, async function (done) {
      console.log(TAG + "************* allocResourceAndShareTest009 start *************");
      try {
        let predicates = new data_Rdb.RdbPredicates("employee");
        //predicates.equalTo("id", 1);
        await cloudData.sharing.allocResourceAndShare(STORE_NAME,predicates, participants).then(async(resultSet)=>{
          expect(null).assertFail();
          done()
        }).catch((err)=>{
          expect(err.code == 202).assertTrue();
          console.log(TAG+"err.code"+err.code+"err.message"+err.message)
          done()
        })
      } catch (err) {
        expect(null).assertFail();
        console.log(TAG+"err.code:"+err.code)
        done()
      }
      console.log(TAG + "************* allocResourceAndShareTest009 end *************");
    })
    /**
     * @tc.name allocResourceAndShare predicates value is 123(promise)
     * @tc.number SUB_DDM_CloudData_1000
     * @tc.desc allocResourceAndShare predicates  value is 123(promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it('allocResourceAndShareTest010', 0, async function (done) {
      console.log(TAG + "************* allocResourceAndShareTest010 start *************");
      try {
        await cloudData.sharing.allocResourceAndShare(STORE_NAME,123, participants).then(async(resultSet)=>{
          expect(null).assertFail();
          done()
        }).catch((err)=>{
          expect(null).assertFail();
          console.log(TAG+"err.code:"+err.code+"err.message"+err.message)
          done()
        })
      } catch (err) {
        expect(err.code == 401).assertTrue();
        console.log(TAG+"err.code:"+err.code)
        done()
      }
      console.log(TAG + "************* allocResourceAndShareTest010 end *************");
    })
    /**
     * @tc.name allocResourceAndShare predicates value is "AAA"(promise)
     * @tc.number SUB_DDM_CloudData_1100
     * @tc.desc allocResourceAndShare predicates  value is "AAA"(promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it('allocResourceAndShareTest011', 0, async function (done) {
      console.log(TAG + "************* allocResourceAndShareTest011 start *************");
      try {
        await cloudData.sharing.allocResourceAndShare(STORE_NAME, "AAA",participants).then(async(resultSet)=>{
          expect(null).assertFail();
          done()
        }).catch((err)=>{
          expect(null).assertFail();
          console.log(TAG+"err.code:"+err.code+"err.message"+err.message)
          done()
        })
      }catch (err) {
        expect(err.code == 401).assertTrue();
        console.log(TAG+"err.code:"+err.code)
        done()
      }
      console.log(TAG + "************* allocResourceAndShareTest011 end *************");
    })
    /**
     * @tc.name allocResourceAndShare predicates value is (promise)
     * @tc.number SUB_DDM_CloudData_1200
     * @tc.desc allocResourceAndShare predicates  value is (promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it('allocResourceAndShareTest012', 0, async function (done) {
      console.log(TAG + "************* allocResourceAndShareTest012 start *************");
      try {
        await cloudData.sharing.allocResourceAndShare(STORE_NAME,participants).then(async(resultSet)=>{
          expect(null).assertFail();
          done()
        }).catch((err)=>{
          expect(null).assertFail();
          console.log(TAG+"err.code:"+err.code+"err.message"+err.message)
          done()
        })
      } catch (err) {
        expect(err.code == 401).assertTrue();
        console.log(TAG+"err.code:"+err.code)
        done()
      }
      console.log(TAG + "************* allocResourceAndShareTest012 end *************");
    })
    /**
     * @tc.name allocResourceAndShare participants value is undefined(promise)
     * @tc.number SUB_DDM_CloudData_1300
     * @tc.desc allocResourceAndShare participants  value is undefined(promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it('allocResourceAndShareTest013', 0, async function (done) {
      console.log(TAG + "************* allocResourceAndShareTest013 start *************");
      try {
        let predicates = new data_Rdb.RdbPredicates("employee");
        predicates.equalTo("id", 1);
        await cloudData.sharing.allocResourceAndShare(STORE_NAME, predicates, undefined).then(async(resultSet)=>{
          expect(null).assertFail();
          done()
        }).catch((err)=>{
          expect(null).assertFail();
          console.log(TAG+"err.code:"+err.code+"err.message"+err.message)
          done()
        })
      }catch (err) {
        expect(err.code == 401).assertTrue();
        console.log(TAG+"err.code:"+err.code)
        done()
      }
      console.log(TAG + "************* allocResourceAndShareTest013 end *************");
    })
    /**
     * @tc.name allocResourceAndShare participants value is null(promise)
     * @tc.number SUB_DDM_CloudData_1400
     * @tc.desc allocResourceAndShare participants  value is null(promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it('allocResourceAndShareTest014', 0, async function (done) {
      console.log(TAG + "************* allocResourceAndShareTest014 start *************");
      try {
        let predicates = new data_Rdb.RdbPredicates("employee");
        predicates.equalTo("id", 1);
        await cloudData.sharing.allocResourceAndShare(STORE_NAME, predicates, null).then(async(resultSet) => {
          expect(null).assertFail();
          done()
          }).catch((err)=>{
            expect(null).assertFail();
            console.log(TAG+"err.code:"+err.code+"err.message"+err.message)
            done()
          })
      } catch (err) {
        expect(err.code == 401).assertTrue();
        console.log(TAG+"err.code:"+err.code)
        done()
      }
      console.log(TAG + "************* allocResourceAndShareTest014 end *************");
    })
    /**
     * @tc.name allocResourceAndShare participants-identity value is  string(promise)
     * @tc.number SUB_DDM_CloudData_1500
     * @tc.desc allocResourceAndShare participants-identity value is  string(promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it('allocResourceAndShareTest015', 0, async function (done) {
      console.log(TAG + "************* allocResourceAndShareTest015 start *************");
      try {
        let participants3 = {
          identity: '33333'
        }
        let participants4 = {
          identity: '44444'
        }
        let participantstest = [participants3, participants4];
        let predicates = new data_Rdb.RdbPredicates("employee");
        predicates.equalTo("id", 1);
        await cloudData.sharing.allocResourceAndShare(STORE_NAME, predicates, participantstest).then(async(resultSet) => {
              expect(null).assertFail();
              done()
          }).catch((err)=>{
           expect(err.code == 202).assertTrue();
           console.log(TAG+"err.code"+err.code+"err.message"+err.message)
            done()
          })
      } catch (err) {
        expect(null).assertFail();
        console.log(TAG+"err.code:"+err.code)
        done()
      }
      console.log(TAG + "************* allocResourceAndShareTest015 end *************");
    })
    /**
     * @tc.name allocResourceAndShare participants-identity value is null(promise)
     * @tc.number SUB_DDM_CloudData_1600
     * @tc.desc allocResourceAndShare participants-identity value is null(promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it('allocResourceAndShareTest016', 0, async function (done) {
      console.log(TAG + "************* allocResourceAndShareTest016 start *************");
      try {
        let participants3 = {
          identity: null
        }
        let participants4 = {
          identity: null
        }
        let participantstest = [participants3, participants4];
        let predicates = new data_Rdb.RdbPredicates("employee");
        predicates.equalTo("id", 1);
        await cloudData.sharing.allocResourceAndShare(STORE_NAME, predicates, participantstest).then(async(resultSet) => {
            expect(null).assertFail();
            done()
          }).catch((err)=>{
            expect(null).assertFail();
            console.log(TAG+"err.code:"+err.code+"err.message"+err.message)
            done()
          })
      } catch (err) {
        expect(err.code).assertEqual('401')
        console.log(TAG+"err.code:"+err.code)
        done()
      }
      console.log(TAG + "************* allocResourceAndShareTest016 end *************");
    })
    /**
     * @tc.name allocResourceAndShare participants-identity value is undefined(promise)
     * @tc.number SUB_DDM_CloudData_1700
     * @tc.desc allocResourceAndShare participants-identity value is undefined(promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it('allocResourceAndShareTest017', 0, async function (done) {
      console.log(TAG + "************* allocResourceAndShareTest017 start *************");
      try {
        let participants3 = {
          identity: undefined
        }
        let participants4 = {
          identity: undefined
        }
        let participantstest = [participants3, participants4];
        let predicates = new data_Rdb.RdbPredicates("employee");
        predicates.equalTo("id", 1);
        await cloudData.sharing.allocResourceAndShare(STORE_NAME, predicates, participantstest).then(async(resultSet) => {
          expect(null).assertFail();
          done()
          }).catch((err)=>{
          expect(null).assertFail();
          console.log(TAG+"err.code:"+err.code+"err.message"+err.message)
          done()
          })
      } catch (err) {
        expect(err.code).assertEqual('401')
        console.log(TAG+"err.code:"+err.code)
        done()
      }
      console.log(TAG + "************* allocResourceAndShareTest017 end *************");
    })
    /**
     * @tc.name allocResourceAndShare participants-identity value is string, Other parameters value is null(promise)
     * @tc.number SUB_DDM_CloudData_1800
     * @tc.desc allocResourceAndShare participants-identity value is string, Other parameters value is null(promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it('allocResourceAndShareTest018', 0, async function (done) {
      console.log(TAG + "************* allocResourceAndShareTest018 start *************");
      try {
        let participants3 = {
          identity: '55555',
          role: null,
          state: null,
          privilege: null,
          attachInfo: null
        }
        let participants4 = {
          identity: '6666',
          role: null,
          state: null,
          privilege: null,
          attachInfo: null
        }
        let participantstest = [participants3, participants4];
        let predicates = new data_Rdb.RdbPredicates("employee");
        predicates.equalTo("id", 1);
        await cloudData.sharing.allocResourceAndShare(STORE_NAME, predicates, participantstest).then(async(resultSet) => {
           expect(null).assertFail()
           done()
          }).catch((err)=>{
           expect(err.code == 202).assertTrue();
           console.log(TAG+"err.code"+err.code+"err.message"+err.message)
           done()
          })
      } catch (err) {
        expect(null).assertFail();
        console.log(TAG+"err.code:"+err.code)
        done()
      }

      console.log(TAG + "************* allocResourceAndShareTest018 end *************");
    })
    /**
     * @tc.name allocResourceAndShare participants-identity value is string, Other parameters value is undefined(promise)
     * @tc.number SUB_DDM_CloudData_1900
     * @tc.desc allocResourceAndShare participants-identity value is string, Other parameters value is undefined(promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it('allocResourceAndShareTest019', 0, async function (done) {
      console.log(TAG + "************* allocResourceAndShareTest019 start *************");
      try {
        let participants3 = {
          identity: '55555',
          role: undefined,
          state: undefined,
          privilege: undefined,
          attachInfo: undefined
        }
        let participants4 = {
          identity: '6666',
          role: undefined,
          state: undefined,
          privilege: undefined,
          attachInfo: undefined
        }
        let participantstest = [participants3, participants4];
        let predicates = new data_Rdb.RdbPredicates("employee");
        predicates.equalTo("id", 1);
        await cloudData.sharing.allocResourceAndShare(STORE_NAME, predicates, participantstest).then(async(resultSet) => {
          expect(null).assertFail()
          done()
        }).catch((err)=>{
          expect(err.code == 202).assertTrue();
          console.log(TAG+"err.code"+err.code+"err.message"+err.message)
          done()
        })
      } catch (err) {
        expect(null).assertFail();
        console.log(TAG+"err.code:"+err.code)
        done()
      }
      console.log(TAG + "************* allocResourceAndShareTest019 end *************");
    })
    /**
     * @tc.name allocResourceAndShare participants-identity value is int, Other parameters value is undefined(promise)
     * @tc.number SUB_DDM_CloudData_2000
     * @tc.desc allocResourceAndShare participants-identity value is int, Other parameters value is undefined(promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it('allocResourceAndShareTest020', 0, async function (done) {
      console.log(TAG + "************* allocResourceAndShareTest020 start *************");
      try {
        let participants3 = {
          identity: 123,
          role: undefined,
          state: undefined,
          privilege: undefined,
          attachInfo: undefined
        }
        let participants4 = {
          identity: 456,
          role: undefined,
          state: undefined,
          privilege: undefined,
          attachInfo: undefined
        }
        let participantstest = [participants3, participants4];
        let predicates = new data_Rdb.RdbPredicates("employee");
        predicates.equalTo("id", 1);
        await cloudData.sharing.allocResourceAndShare(STORE_NAME, predicates, participantstest).then(async(resultSet) => {
           expect(null).assertFail();
           done()
          }).catch((err)=>{
            expect(null).assertFail();
            console.log(TAG+"err.code:"+err.code+"err.message"+err.message)
            done()
          })
      } catch (err) {
        expect(err.code).assertEqual('401')
        console.log(TAG+"err.code:"+err.code)
        done()
      }
      console.log(TAG + "************* allocResourceAndShareTest020 end *************");
    })
    /**
     * @tc.name allocResourceAndShare participants-identity value is string, Other parameters value is int(promise)
     * @tc.number SUB_DDM_CloudData_2100
     * @tc.desc allocResourceAndShare participants-identity value is string, Other parameters value is int(promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it('allocResourceAndShareTest021', 0, async function (done) {
      console.log(TAG + "************* allocResourceAndShareTest021 start *************");
      try {
        let participants3 = {
          identity: '55555',
          role: 34,
          state: 34,
          privilege: 34,
          attachInfo: 34
        }
        let participants4 = {
          identity: '6666',
          role: 33,
          state: 33,
          privilege: 33,
          attachInfo: 33
        }
        let participantstest = [participants3, participants4];
        let predicates = new data_Rdb.RdbPredicates("employee");
        predicates.equalTo("id", 1);
        await cloudData.sharing.allocResourceAndShare(STORE_NAME, predicates, participantstest).then(async(resultSet) => {
          expect(null).assertFail();
          done()
        }).catch((err)=>{
          expect(null).assertFail();
          console.log(TAG+"err.code:"+err.code+"err.message"+err.message)
          done()
        })
      } catch (err) {
        expect(err.code).assertEqual('401')
        console.log(TAG+"err.code:"+err.code)
        done()
      }
      console.log(TAG + "************* allocResourceAndShareTest021 end *************");
    })
    /**
     * @tc.name allocResourceAndShare columns value is string[](promise)
     * @tc.number SUB_DDM_CloudData_2200
     * @tc.desc allocResourceAndShare columns value is string[](promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it('allocResourceAndShareTest022', 0, async function (done) {
      console.log(TAG + "************* allocResourceAndShareTest022 start *************");
      try {
        let predicates = new data_Rdb.RdbPredicates("employee");
        predicates.equalTo("id", 1);
        let columns = ["id", "name", "age"]
        await cloudData.sharing.allocResourceAndShare(STORE_NAME, predicates, participants, columns).then(async(resultSet) => {
          expect(null).assertFail();
          done()
        }).catch((err)=>{
          expect(err.code == 202).assertTrue();
          console.log(TAG+"err.code"+err.code+"err.message"+err.message)
          done()
        })
      } catch (err) {
        expect(null).assertFail();
        console.log(TAG+"err.code:"+err.code)
        done()
      }
      console.log(TAG + "************* allocResourceAndShareTest022 end *************");
    })
    /**
     * @tc.name allocResourceAndShare columns value is null(promise)
     * @tc.number SUB_DDM_CloudData_2300
     * @tc.desc allocResourceAndShare columns value is null(promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it('allocResourceAndShareTest023', 0, async function (done) {
      console.log(TAG + "************* allocResourceAndShareTest023 start *************");
      try {
        let predicates = new data_Rdb.RdbPredicates("employee");
        predicates.equalTo("id", 1);
        await cloudData.sharing.allocResourceAndShare(STORE_NAME, predicates, participants).then(async(resultSet) => {
          expect(null).assertFail();
          done()
        }).catch((err)=>{
          expect(err.code == 202).assertTrue();
          console.log(TAG+"err.code"+err.code+"err.message"+err.message)
          done()
        })
      } catch (err) {
        expect(null).assertFail();
        console.log(TAG+"err.code:"+err.code)
        done()
      }
      console.log(TAG + "************* allocResourceAndShareTest023 end *************");
    })
    /**
     * @tc.name allocResourceAndShare columns value is undefined(promise)
     * @tc.number SUB_DDM_CloudData_2400
     * @tc.desc allocResourceAndShare columns value is undefined(promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it('allocResourceAndShareTest024', 0, async function (done) {
      console.log(TAG + "************* allocResourceAndShareTest024 start *************");
      try {
        let predicates = new data_Rdb.RdbPredicates("employee");
        predicates.equalTo("id", 1);
        await cloudData.sharing.allocResourceAndShare(STORE_NAME, predicates, participants, undefined).then(async(resultSet) => {
          expect(null).assertFail();
          done()
        }).catch((err)=>{
          expect(err.code == 202).assertTrue();
          console.log(TAG+"err.code"+err.code+"err.message"+err.message)
          done()
        })
      } catch (err) {
        expect(null).assertFail();
        console.log(TAG+"err.code:"+err.code)
        done()
      }
      console.log(TAG + "************* allocResourceAndShareTest024 end *************");
    })
    /**
     * @tc.name allocResourceAndShare columns value is int(promise)
     * @tc.number SUB_DDM_CloudData_2500
     * @tc.desc allocResourceAndShare columns value is int(promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it('allocResourceAndShareTest025', 0, async function (done) {
      console.log(TAG + "************* allocResourceAndShareTest025 start *************");
      try {
        let predicates = new data_Rdb.RdbPredicates("employee");
        predicates.equalTo("id", 1);
        await cloudData.sharing.allocResourceAndShare(STORE_NAME, predicates, participants, 123).then(async(resultSet) => {
          expect(null).assertFail();
          done()
        }).catch((err)=>{
          expect(null).assertFail();
          console.log(TAG+"err.code:"+err.code+"err.message"+err.message)
          done()
        })
      } catch (err) {
        expect(err.code).assertEqual('401')
        console.log(TAG+"err.code:"+err.code)
        done()
      }
      console.log(TAG + "************* allocResourceAndShareTest025 end *************");
    })
    /**
     * @tc.name participants-privilege value is (promise)
     * @tc.number SUB_DDM_CloudData_10300
     * @tc.desc participants-privilege value is(promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it('allocResourceAndShareTest026', 0, async function (done) {
      console.log(TAG + "************* allocResourceAndShareTest026 start *************");
      try {
        let privilege1;
        let privilege2;
        let participants3 = {
          identity: '55555',
          role: cloudData.sharing.Role.ROLE_INVITER,
          state: cloudData.sharing.State.STATE_UNKNOWN,
          privilege: privilege1,
          attachInfo: 'attachInfo1'
        }
        let participants4 = {
          identity: '6666',
          role: cloudData.sharing.Role.ROLE_INVITER,
          state: cloudData.sharing.State.STATE_UNKNOWN,
          privilege: privilege2,
          attachInfo: 'attachInfo2'
        }
        let participantstest = [participants3, participants4];
        let predicates = new data_Rdb.RdbPredicates("employee");
        predicates.equalTo("id", 1);
       await cloudData.sharing.allocResourceAndShare(STORE_NAME, predicates, participantstest).then(async(resultSet) => {
         expect(null).assertFail();
         done()
       }).catch((err)=>{
         expect(err.code == 202).assertTrue();
         console.log(TAG+"err.code"+err.code+"err.message"+err.message)
         done()
       })
      } catch (err) {
        expect(null).assertFail();
        console.log(TAG+"err.code:"+err.code)
        done()
      }
      console.log(TAG + "************* allocResourceAndShareTest026 end *************");
    })
    /**
     * @tc.name allocResourceAndShare participants-privilege value is not boolean(promise)
     * @tc.number SUB_DDM_CloudData_10400
     * @tc.desc allocResourceAndShare participants-privilege value is not boolean(promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it('allocResourceAndShareTest027', 0, async function (done) {
      console.log(TAG + "************* allocResourceAndShareTest027 start *************");
      try {
        let privilege1 = {
          writable: 5,
          readable: 5,
          creatable: 5,
          deletable: 5,
          shareable: 5
        }
        let privilege2 = {
          writable: 6,
          readable: 6,
          creatable: 6,
          deletable: 6,
          shareable: 6
        }
        let participants3 = {
          identity: '55555',
          role: cloudData.sharing.Role.ROLE_INVITER,
          state: cloudData.sharing.State.STATE_UNKNOWN,
          privilege: privilege1,
          attachInfo: 'attachInfo1'
        }
        let participants4 = {
          identity: '6666',
          role: cloudData.sharing.Role.ROLE_INVITER,
          state: cloudData.sharing.State.STATE_UNKNOWN,
          privilege: privilege2,
          attachInfo: 'attachInfo2'
        }
        let participantstest = [participants3, participants4];
        let predicates = new data_Rdb.RdbPredicates("employee");
        predicates.equalTo("id", 1);
        await cloudData.sharing.allocResourceAndShare(STORE_NAME, predicates, participantstest).then(async(resultSet) => {
          expect(null).assertFail();
          done()
        }).catch((err)=>{
           expect(null).assertFail();
          console.log(TAG+"err.code"+err.code+"err.message"+err.message)
          done()
        })
      } catch (err) {
        console.log(TAG+"err.code"+err.code)
        expect(err.code).assertEqual('401');
        done()
      }
      console.log(TAG + "************* allocResourceAndShareTest027 end *************");
    })
    /**
     * @tc.name allocResourceAndShare participants-privilege value is null(promise)
     * @tc.number SUB_DDM_CloudData_10500
     * @tc.desc allocResourceAndShare participants-privilege value is null(promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it('allocResourceAndShareTest028', 0, async function (done) {
      console.log(TAG + "************* allocResourceAndShareTest028 start *************");
      try {
        let privilege1 = {
          writable: null,
          readable: null,
          creatable: null,
          deletable: null,
          shareable: null
        }
        let privilege2 = {
          writable: null,
          readable: null,
          creatable: null,
          deletable: null,
          shareable: null
        }
        let participants3 = {
          identity: '55555',
          role: cloudData.sharing.Role.ROLE_INVITER,
          state: cloudData.sharing.State.STATE_UNKNOWN,
          privilege: privilege1,
          attachInfo: 'attachInfo1'
        }
        let participants4 = {
          identity: '66666',
          role: cloudData.sharing.Role.ROLE_INVITER,
          state: cloudData.sharing.State.STATE_UNKNOWN,
          privilege: privilege2,
          attachInfo: 'attachInfo2'
        }
        let participantstest = [participants3, participants4];
        let predicates = new data_Rdb.RdbPredicates("employee");
        predicates.equalTo("id", 1);
        await cloudData.sharing.allocResourceAndShare(STORE_NAME, predicates, participantstest).then(async(resultSet) => {
          expect(null).assertFail();
          done()
        }).catch((err)=>{
          expect(err.code == 202).assertTrue();
          console.log(TAG+"err.code"+err.code+"err.message"+err.message)
          done()
        })
      } catch (err) {
        expect(null).assertFail();
        console.log(TAG+"err.code:"+err.code)
        done()
      }
      console.log(TAG + "************* allocResourceAndShareTest028 end *************");
    })
    /**
     * @tc.name allocResourceAndShare participants-privilege value is undefined(promise)
     * @tc.number SUB_DDM_CloudData_10600
     * @tc.desc allocResourceAndShare participants-privilege value is undefined(promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it('allocResourceAndShareTest029', 0, async function (done) {
      console.log(TAG + "************* allocResourceAndShareTest029 start *************");
      try {
        let privilege1 = {
          writable: undefined,
          readable: undefined,
          creatable: undefined,
          deletable: undefined,
          shareable: undefined
        }
        let privilege2 = {
          writable: undefined,
          readable: undefined,
          creatable: undefined,
          deletable: undefined,
          shareable: undefined
        }
        let participants3 = {
          identity: '55555',
          role: cloudData.sharing.Role.ROLE_INVITER,
          state: cloudData.sharing.State.STATE_UNKNOWN,
          privilege: privilege1,
          attachInfo: 'attachInfo1'
        }
        let participants4 = {
          identity: '66666',
          role: cloudData.sharing.Role.ROLE_INVITER,
          state: cloudData.sharing.State.STATE_UNKNOWN,
          privilege: privilege2,
          attachInfo: 'attachInfo2'
        }
        let participantstest = [participants3, participants4];
        let predicates = new data_Rdb.RdbPredicates("employee");
        predicates.equalTo("id", 1);
        await cloudData.sharing.allocResourceAndShare(STORE_NAME, predicates, participantstest).then(async(resultSet) => {
          expect(null).assertFail();
          done()
        }).catch((err)=>{
          expect(err.code == 202).assertTrue();
          console.log(TAG+"err.code"+err.code+"err.message"+err.message)
          done()
        })
      } catch (err) {
        expect(null).assertFail();
        console.log(TAG+"err.code:"+err.code)
        done()
      }
      console.log(TAG + "************* allocResourceAndShareTest029 end *************");
    })
    /**
     * @tc.name allocResourceAndShare participants not contain indetity (promise)
     * @tc.number SUB_DDM_CloudData_12100
     * @tc.desc allocResourceAndShareparticipants not contain indetity(promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it('allocResourceAndShareTest030', 0, async function (done) {
      console.log(TAG + "************* allocResourceAndShareTest030 start *************");
      try {
        let participants3 = {
          role: cloudData.sharing.Role.ROLE_INVITER,
          state: cloudData.sharing.State.STATE_UNKNOWN,
          privilege: privilegeEnable,
          attachInfo: 'attachInfo1'
        }
        let participants4 = {
          role: cloudData.sharing.Role.ROLE_INVITER,
          state: cloudData.sharing.State.STATE_UNKNOWN,
          privilege: privilegeDisable,
          attachInfo: 'attachInfo2'
        }
        let participantstest = [participants3, participants4];
        let predicates = new data_Rdb.RdbPredicates("employee");
        predicates.equalTo("id", 1);
        await cloudData.sharing.allocResourceAndShare(STORE_NAME, predicates, participantstest).then(async(err, resultSet) => {
          expect(null).assertFail();
          done()
        }).catch((err)=>{
          expect(null).assertFail();
          console.log(TAG+"err.code"+err.code)
          done()
        })
      } catch (err) {
        console.log(TAG+"err.code"+err.code)
        expect(err.code).assertEqual('401');
        done()
      }
      console.log(TAG + "************* allocResourceAndShareTest030 end *************");
    })
    /**
     * @tc.name share sharingResoure value is undefined(promise)
     * @tc.number SUB_DDM_CloudData_2600
     * @tc.desc share sharingResoure value is undefined(promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it("shareTest001", 0, async function (done) {
      console.log(TAG + "************* shareTest001 start *************");
      try {
        await cloudData.sharing.share(undefined, participants).then(async(result) => {
          expect(null).assertFail();
          done()
        }).catch((err)=>{
          expect(null).assertFail();
          done()
        })
      } catch (err) {
        console.log(TAG+"err.code"+err.code)
        expect(err.code).assertEqual('401');
        done()
      }
      console.log(TAG + "************* shareTest001 end *************");
    })
    /**
     * @tc.name share participants-identity value is string,Other Parameters value is undefined(promise)
     * @tc.number SUB_DDM_CloudData_2700
     * @tc.desc share participants-identity value is string,Other Parameters value is undefined(promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it("shareTest002", 0, async function (done) {
      console.log(TAG + "************* shareTest002 start *************");
      try {
        let participants3 = {
          identity: '55555',
          role: undefined,
          state: undefined,
          privilege: undefined,
          attachInfo: undefined
        }
        let participants4 = {
          identity: '666666',
          role: undefined,
          state: undefined,
          privilege: undefined,
          attachInfo: undefined
        }
        let participantstest = [participants3, participants4];
        await cloudData.sharing.share(SHARING_RESOURCE, participantstest).then(async(result) => {
          expect(null).assertFail();
          done()
        }).catch((err)=>{
          expect(err.code == 202).assertTrue();
          console.log(TAG+"err.code"+err.code+"err.message"+err.message)
          done()
        })
      } catch (err) {
        expect(null).assertFail();
        console.log(TAG+"err.code:"+err.code)
        done()
      }
      console.log(TAG + "************* shareTest002 end *************");
    })
    /**
     * @tc.name share participants-identity value is string,Other Parameters value is null(promise)
     * @tc.number SUB_DDM_CloudData_2800
     * @tc.desc share participants-identity value is string,Other Parameters value is null(promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it("shareTest003", 0, async function (done) {
      console.log(TAG + "************* shareTest003 start *************");
      try {
        let participants3 = {
          identity: '55555',
          role: null,
          state: null,
          privilege: null,
          attachInfo: null
        }
        let participants4 = {
          identity: '6666',
          role: null,
          state: null,
          privilege: null,
          attachInfo: null
        }
        let participantstest = [participants3, participants4];
        await cloudData.sharing.share(SHARING_RESOURCE, participantstest).then(async(result) => {
          expect(null).assertFail();
          done()
        }).catch((err)=>{
          expect(err.code == 202).assertTrue();
          console.log(TAG+"err.code"+err.code+"err.message"+err.message)
          done()
        })
      } catch (err) {
        expect(null).assertFail();
        console.log(TAG+"err.code:"+err.code)
        done()
      }
      console.log(TAG + "************* shareTest003 end *************");
    })
    /**
     * @tc.name share participants-identity value is string,Other Parameters value is (promise)
     * @tc.number SUB_DDM_CloudData_2900
     * @tc.desc share participants-identity value is string,Other Parameters value is (promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it("shareTest00311", 0, async function (done) {
      console.log(TAG + "************* shareTest00311 start *************");
      try {
        let participants3 = {
          identity: '55555',
        }
        let participants4 = {
          identity: '66666',
        }
        let participantstest = [participants3, participants4];
        await cloudData.sharing.share(SHARING_RESOURCE, participantstest).then(async(result) => {
          expect(null).assertFail();
          done()
        }).catch((err)=>{
          expect(err.code == 202).assertTrue();
          console.log(TAG+"err.code"+err.code+"err.message"+err.message)
          done()
        })
      } catch (err) {
        expect(null).assertFail();
        console.log(TAG+"err.code:"+err.code)
        done()
      }
      console.log(TAG + "************* shareTest00311 end *************");
    })
    /**
     * @tc.name share participants-identity value is undefined(promise)
     * @tc.number SUB_DDM_CloudData_3000
     * @tc.desc share participants-identity value is undefined(promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it("shareTest004", 0, async function (done) {
      console.log(TAG + "************* shareTest004 start *************");
      try {
        let participants3 = {
          identity: undefined,
        }
        let participants4 = {
          identity: undefined,
        }
        let participantstest = [participants3, participants4];
        await cloudData.sharing.share(SHARING_RESOURCE, participantstest).then(async(result) => {
          expect(null).assertFail();
          done()
        }).catch((err)=>{
          expect(null).assertFail();
          done()
        })
      } catch (err) {
        console.log(TAG+"err.code"+err.code)
        expect(err.code).assertEqual('401');
        done()
      }
      console.log(TAG + "************* shareTest004 end *************");
    })
    /**
     * @tc.name share participants-identity value is null(promise)
     * @tc.number SUB_DDM_CloudData_3100
     * @tc.desc share participants-identity value is null(promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it("shareTest005", 0, async function (done) {
      console.log(TAG + "************* shareTest005 start *************");
      try {
        let participants3 = {
          identity: null,
        }
        let participants4 = {
          identity: null,
        }
        let participantstest = [participants3, participants4];
        await cloudData.sharing.share(SHARING_RESOURCE, participantstest).then(async(result) => {
          expect(null).assertFail();
          done()
        }).catch((err)=>{
          expect(null).assertFail();
          done()
        })
      } catch (err) {
        console.log(TAG+"err.code"+err.code)
        expect(err.code).assertEqual('401');
        done()
      }

      console.log(TAG + "************* shareTest005 end *************");
    })
    /**
     * @tc.name share participants value is undefined(promise)
     * @tc.number SUB_DDM_CloudData_3200
     * @tc.desc share participants value is undefined(promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it("shareTest006", 0, async function (done) {
      console.log(TAG + "************* shareTest006 start *************");
      try {
        await cloudData.sharing.share(SHARING_RESOURCE, undefined).then(async(result) => {
          expect(null).assertFail();
          done()
        }).catch((err)=>{
          expect(null).assertFail();
          done()
        })
      } catch (err) {
        console.log(TAG+"err.code"+err.code)
        expect(err.code).assertEqual('401');
        done()
      }
      console.log(TAG + "************* shareTest006 end *************");
    })
    /**
     * @tc.name share participants value is null(promise)
     * @tc.number SUB_DDM_CloudData_3300
     * @tc.desc share participants value is null(promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it("shareTest007", 0, async function (done) {
      console.log(TAG + "************* shareTest007 start *************");
      try {
        await cloudData.sharing.share(SHARING_RESOURCE, null).then(async(result) => {
          expect(null).assertFail();
          done()
        }).catch((err)=>{
          expect(null).assertFail();
          done()
        })
      } catch (err) {
        console.log(TAG+"err.code"+err.code)
        expect(err.code).assertEqual('401');
        done()
      }
      console.log(TAG + "************* shareTest007 end *************");
    })
    /**
     * @tc.name share sharingResoure  value is null(promise)
     * @tc.number SUB_DDM_CloudData_3400
     * @tc.desc share sharingResoure value is null(promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it("shareTest008", 0, async function (done) {
      console.log(TAG + "************* shareTest008 start *************");
      try {
        await cloudData.sharing.share(null, participants).then(async(result) => {
          expect(null).assertFail();
          done()
        }).catch((err)=>{
          expect(null).assertFail();
          done()
        })
      } catch (err) {
        console.log(TAG+"err.code"+err.code)
        expect(err.code).assertEqual('401');
        done()
      }
      console.log(TAG + "************* shareTest008 end *************");
    })
    /**
     * @tc.name share sharingResoure  value is null,paiticipants value is null(promise)
     * @tc.number SUB_DDM_CloudData_3500
     * @tc.desc share sharingResoure  value is null,paiticipants value is null(promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it("shareTest009", 0, async function (done) {
      console.log(TAG + "************* shareTest009 start *************");
      try {
        await cloudData.sharing.share(null,null).then(async(result) => {
          expect(null).assertFail();
          done()
        }).catch((err)=>{
          expect(null).assertFail();
          done()
        })
      } catch (err) {
        console.log(TAG+"err.code"+err.code)
        expect(err.code).assertEqual('401');
        done()
      }
      console.log(TAG + "************* shareTest009 end *************");
    })
    /**
     * @tc.name share sharingResoure  value is undefined,paiticipants value is undefined(promise)
     * @tc.number SUB_DDM_CloudData_3600
     * @tc.desc share sharingResoure  value is undefined,paiticipants value is undefined(promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it("shareTest010", 0, async function (done) {
      console.log(TAG + "************* shareTest010 start *************");
      try {
        await cloudData.sharing.share(undefined,undefined).then(async(result) => {
          expect(null).assertFail();
          done()
        }).catch((err)=>{
          expect(null).assertFail();
          done()
        })
      } catch (err) {
        console.log(TAG+"err.code"+err.code)
        expect(err.code).assertEqual('401');
        done()
      }

      console.log(TAG + "************* shareTest010 end *************");
    })
    /**
     * @tc.name share sharingRsource value is (promise)
     * @tc.number SUB_DDM_CloudData_3700
     * @tc.desc share sharingRsource value is (promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it("shareTest011", 0, async function (done) {
      console.log(TAG + "************* shareTest011 start *************");
      try {
        await cloudData.sharing.share(participants).then(async(result) => {
          expect(null).assertFail();
          done()
        }).catch((err)=>{
          expect(null).assertFail();
          done()
        })
      } catch (err) {
        console.log(TAG+"err.code"+err.code)
        expect(err.code).assertEqual('401');
        done()
      }
      console.log(TAG + "************* shareTest011 end *************");
    })
    /**
     * @tc.name share sharingRsource value is int (promise)
     * @tc.number SUB_DDM_CloudData_3800
     * @tc.desc share sharingRsource value is int (promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it("shareTest012", 0, async function (done) {
      console.log(TAG + "************* shareTest012 start *************");
      try {
        await cloudData.sharing.share(1, participants).then(async(result) => {
          expect(null).assertFail();
          done()
        }).catch((err)=>{
          expect(null).assertFail();
          done()
        })
      } catch (err) {
        console.log(TAG+"err.code"+err.code)
        expect(err.code).assertEqual('401');
        done()
      }
      console.log(TAG + "************* shareTest012 end *************");
    })
    /**
     * @tc.name share participants value is  (promise)
     * @tc.number SUB_DDM_CloudData_3900
     * @tc.desc share participants value is  (promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it("shareTest013", 0, async function (done) {
      console.log(TAG + "************* shareTest013 start *************");
      try {
        await cloudData.sharing.share(SHARING_RESOURCE).then(async(result) => {
          expect(null).assertFail();
          done()
        }).catch((err)=>{
          expect(null).assertFail();
          done()
        })
      } catch (err) {
        console.log(TAG+"err.code"+err.code)
        expect(err.code).assertEqual('401');
        done()
      }
      console.log(TAG + "************* shareTest013 end *************");
    })
    /**
     * @tc.name share participants value is int (promise)
     * @tc.number SUB_DDM_CloudData_4000
     * @tc.desc share participants value is int (promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it("shareTest014", 0, async function (done) {
      console.log(TAG + "************* shareTest014 start *************");
      try {
        await cloudData.sharing.share(SHARING_RESOURCE,3).then(async(result) => {
          expect(null).assertFail();
          done()
        }).catch((err)=>{
          expect(null).assertFail();
          done()
        })
      } catch (err) {
        console.log(TAG+"err.code"+err.code)
        expect(err.code).assertEqual('401');
        done()
      }
      console.log(TAG + "************* shareTest014 end *************");
    })
    /**
     * @tc.name share participants-identity value is int (promise)
     * @tc.number SUB_DDM_CloudData_4100
     * @tc.desc share participants-identity value is int (promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it("shareTest015", 0, async function (done) {
      console.log(TAG + "************* shareTest015 start *************");
      try {
        let participants3 = {
          identity: 123,
          role: null,
          state: null,
          privilege: null,
          attachInfo: null
        }
        let participants4 = {
          identity: 456,
          role: null,
          state: null,
          privilege: null,
          attachInfo: null
        }
        let participantstest = [participants3, participants4];
        await cloudData.sharing.share(SHARING_RESOURCE, participantstest).then(async(result) => {
          expect(null).assertFail();
          done()
        }).catch((err)=>{
          expect(null).assertFail();
          done()
        })
      } catch (err) {
        console.log(TAG+"err.code"+err.code)
        expect(err.code).assertEqual('401');
        done()
      }
      console.log(TAG + "************* shareTest015 end *************");
    })
    /**
     * @tc.name share participants-identity value is string,other Parameters value is int (promise)
     * @tc.number SUB_DDM_CloudData_4200
     * @tc.desc shareparticipants-identity value is string,other Parameters value is int (promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it("shareTest016", 0, async function (done) {
      console.log(TAG + "************* shareTest016 start *************");
      try {
        let participants3 = {
          identity: "333333",
          role: 11,
          state: 11,
          privilege: 11,
          attachInfo: 11
        }
        let participants4 = {
          identity: "44444",
          role: 12,
          state: 12,
          privilege: 12,
          attachInfo: 12
        }
        let participantstest = [participants3, participants4];
        await cloudData.sharing.share(SHARING_RESOURCE, participantstest).then(async(result) => {
          expect(null).assertFail();
          done()
        }).catch((err)=>{
          expect(null).assertFail();
          done()
        })
      } catch (err) {
        console.log(TAG+"err.code"+err.code)
        expect(err.code).assertEqual('401');
        done()
      }
      console.log(TAG + "************* shareTest016 end *************");
    })
    /**
     * @tc.name share participants-privilege value is (promise)
     * @tc.number SUB_DDM_CloudData_10700
     * @tc.desc share participants-privilege value is(promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it('shareTest017', 0, async function (done) {
      console.log(TAG + "************* shareTest017 start *************");
      try {
        let privilege1;
        let privilege2;
        let participants3 = {
          identity: '55555',
          role: cloudData.sharing.Role.ROLE_INVITER,
          state: cloudData.sharing.State.STATE_UNKNOWN,
          privilege: privilege1,
          attachInfo: 'attachInfo1'
        }
        let participants4 = {
          identity: '66666',
          role: cloudData.sharing.Role.ROLE_INVITER,
          state: cloudData.sharing.State.STATE_UNKNOWN,
          privilege: privilege2,
          attachInfo: 'attachInfo2'
        }
        let participantstest = [participants3, participants4];
        await cloudData.sharing.share(SHARING_RESOURCE, participantstest).then(async(result) => {
          expect(null).assertFail();
          done()
        }).catch((err)=>{
          expect(err.code == 202).assertTrue();
          console.log(TAG+"err.code"+err.code+"err.message"+err.message)
          done()
        })
      } catch (err) {
        expect(null).assertFail();
        console.log(TAG+"err.code:"+err.code)
        done()
      }
      console.log(TAG + "************* shareTest017 end *************");
    })
    /**
     * @tc.name Share participants-privilege value is not boolean(promise)
     * @tc.number SUB_DDM_CloudData_10800
     * @tc.desc Share participants-privilege value is not boolean(promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it('shareTest018', 0, async function (done) {
      console.log(TAG + "************* shareTest018 start *************");
      try {
        let privilege1 = {
          writable: 5,
          readable: 5,
          creatable: 5,
          deletable: 5,
          shareable: 5
        }
        let privilege2 = {
          writable: 6,
          readable: 6,
          creatable: 6,
          deletable: 6,
          shareable: 6
        }
        let participants3 = {
          identity: '55555',
          role: cloudData.sharing.Role.ROLE_INVITER,
          state: cloudData.sharing.State.STATE_UNKNOWN,
          privilege: privilege1,
          attachInfo: 'attachInfo1'
        }
        let participants4 = {
          identity: '66666',
          role: cloudData.sharing.Role.ROLE_INVITER,
          state: cloudData.sharing.State.STATE_UNKNOWN,
          privilege: privilege2,
          attachInfo: 'attachInfo2'
        }
        let participantstest = [participants3, participants4];
        await cloudData.sharing.share(SHARING_RESOURCE, participantstest).then(async(result) => {
          expect(null).assertFail();
          done()
        }).catch((err)=>{
          expect(null).assertFail();
          done()
        })
      } catch (err) {
        console.log(TAG+"err.code"+err.code)
        expect(err.code).assertEqual('401');
        done()
      }
      console.log(TAG + "************* shareTest018 end *************");
    })
    /**
     * @tc.name Share participants-privilege value is null(promise)
     * @tc.number SUB_DDM_CloudData_10900
     * @tc.desc Share participants-privilege value is null(promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it('shareTest019', 0, async function (done) {
      console.log(TAG + "************* shareTest019 start *************");
      try {
        let privilege1 = {
          writable: null,
          readable: null,
          creatable: null,
          deletable: null,
          shareable: null
        }
        let privilege2 = {
          writable: null,
          readable: null,
          creatable: null,
          deletable: null,
          shareable: null
        }
        let participants3 = {
          identity: '55555',
          role: cloudData.sharing.Role.ROLE_INVITER,
          state: cloudData.sharing.State.STATE_UNKNOWN,
          privilege: privilege1,
          attachInfo: 'attachInfo1'
        }
        let participants4 = {
          identity: '66666',
          role: cloudData.sharing.Role.ROLE_INVITER,
          state: cloudData.sharing.State.STATE_UNKNOWN,
          privilege: privilege2,
          attachInfo: 'attachInfo2'
        }
        let participantstest = [participants3, participants4];
        await cloudData.sharing.share(SHARING_RESOURCE, participantstest).then(async(result) => {
          expect(null).assertFail();
          done()
        }).catch((err)=>{
          expect(err.code == 202).assertTrue();
          console.log(TAG+"err.code"+err.code+"err.message"+err.message)
          done()
        })
      } catch (err) {
        expect(null).assertFail();
        console.log(TAG+"err.code:"+err.code)
        done()
      }
      console.log(TAG + "************* shareTest019 end *************");
    })
    /**
     * @tc.name Share participants-privilege value is undefined(promise)
     * @tc.number SUB_DDM_CloudData_11000
     * @tc.desc Share participants-privilege value is undefined(promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it('shareTest020', 0, async function (done) {
      console.log(TAG + "************* shareTest020 start *************");
      try {
        let privilege1 = {
          writable: undefined,
          readable: undefined,
          creatable: undefined,
          deletable: undefined,
          shareable: undefined
        }
        let privilege2 = {
          writable: undefined,
          readable: undefined,
          creatable: undefined,
          deletable: undefined,
          shareable: undefined
        }
        let participants3 = {
          identity: '55555',
          role: cloudData.sharing.Role.ROLE_INVITER,
          state: cloudData.sharing.State.STATE_UNKNOWN,
          privilege: privilege1,
          attachInfo: 'attachInfo1'
        }
        let participants4 = {
          identity: '66666',
          role: cloudData.sharing.Role.ROLE_INVITER,
          state: cloudData.sharing.State.STATE_UNKNOWN,
          privilege: privilege2,
          attachInfo: 'attachInfo2'
        }
        let participantstest = [participants3, participants4];
        await cloudData.sharing.share(SHARING_RESOURCE, participantstest).then(async(result) => {
          expect(null).assertFail();
          done()
        }).catch((err)=>{
          expect(err.code == 202).assertTrue();
          console.log(TAG+"err.code"+err.code+"err.message"+err.message)
          done()
        })
      } catch (err) {
        expect(null).assertFail();
        console.log(TAG+"err.code:"+err.code)
        done()
      }
      console.log(TAG + "************* shareTest020 end *************");
    })
    /**
     * @tc.name Share participants not contain identity(promise)
     * @tc.number SUB_DDM_CloudData_12200
     * @tc.desc Share participants not contain identity(promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it('shareTest021', 0, async function (done) {
      console.log(TAG + "************* shareTest021 start *************");
      try {
        let participants3 = {
          role: cloudData.sharing.Role.ROLE_INVITER,
          state: cloudData.sharing.State.STATE_UNKNOWN,
          privilege: privilegeEnable,
          attachInfo: 'attachInfo1'
        }
        let participants4 = {
          role: cloudData.sharing.Role.ROLE_INVITER,
          state: cloudData.sharing.State.STATE_UNKNOWN,
          privilege: privilegeDisable,
          attachInfo: 'attachInfo2'
        }
        let participantstest = [participants3, participants4];
        await cloudData.sharing.share(SHARING_RESOURCE, participantstest).then(async(result) => {
            expect(null).assertFail();
            done()
          }).catch((err)=>{
            expect(null).assertFail();
            done()
          })
      } catch (err) {
        console.log(TAG+"err.code"+err.code)
        expect(err.code).assertEqual('401');
        done()
      }
      console.log(TAG + "************* shareTest021 end *************");
    })
    /**
     * @tc.name unshare sharingResoure value is undefined (promise)
     * @tc.number SUB_DDM_CloudData_4300
     * @tc.desc unshare sharingResoure value is undefined (promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it("unshareTest001", 0, async function (done) {
      console.log(TAG + "************* unshareTest001 start *************");
      try {
        await cloudData.sharing.unshare(undefined, participants).then(async(result) => {
          expect(null).assertFail();
          done()
        }).catch((err)=>{
          expect(null).assertFail();
          done()
        })
      } catch (err) {
        expect(err.code == 401).assertTrue();
        console.log(TAG+"err.code"+err.code)
        done()
      }
      console.log(TAG + "************* unshareTest001 end *************");
    })

    /**
     * @tc.name unshare participants value is undefined (promise)
     * @tc.number SUB_DDM_CloudData_4400
     * @tc.desc unshare participants value is undefined (promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it("unshareTest002", 0, async function (done) {
      console.log(TAG + "************* unshareTest002 start *************");
      try {
        await cloudData.sharing.unshare(SHARING_RESOURCE, undefined).then(async(result) => {
          expect(null).assertFail();
          done()
        }).catch((err)=>{
          expect(null).assertFail();
          done()
        })
      } catch (err) {
        expect(err.code == 401).assertTrue();
        console.log(TAG+"err.code"+err.code)
        done()
      }
      console.log(TAG + "************* unshareTest002 end *************");
    })
    /**
     * @tc.name unshare participants value is null (promise)
     * @tc.number SUB_DDM_CloudData_4500
     * @tc.desc unshare participants value is null (promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it("unshareTest003", 0, async function (done) {
      console.log(TAG + "************* unshareTest003 start *************");
      try {
        await cloudData.sharing.unshare(SHARING_RESOURCE, null).then(async(result) => {
          expect(null).assertFail();
          done()
        }).catch((err)=>{
          expect(null).assertFail();
          done()
        })
      } catch (err) {
        expect(err.code == 401).assertTrue();
        console.log(TAG+"err.code"+err.code)
        done()
      }
      console.log(TAG + "************* unshareTest003 end *************");
    })
    /**
     * @tc.name unshare sharingResoure value is null (promise)
     * @tc.number SUB_DDM_CloudData_4600
     * @tc.desc unshare sharingResoure value is null (promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it("unshareTest004", 0, async function (done) {
      console.log(TAG + "************* unshareTest004 start *************");
      try {
        await cloudData.sharing.unshare(null, participants).then(async(result) => {
          expect(null).assertFail();
          done()
        }).catch((err)=>{
          expect(null).assertFail();
          done()
        })
      } catch (err) {
        expect(err.code == 401).assertTrue();
        console.log(TAG+"err.code"+err.code)
        done()
      }
      console.log(TAG + "************* unshareTest004 end *************");
    })
    /**
     * @tc.name unshare sharingResoure value is null,participants value is null (promise)
     * @tc.number SUB_DDM_CloudData_4700
     * @tc.desc unshare sharingResoure value is null,participants value is null (promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it("unshareTest005", 0, async function (done) {
      console.log(TAG + "************* unshareTest005 start *************");
      try {
        await cloudData.sharing.unshare(null, null).then(async(result) => {
          expect(null).assertFail();
          done()
        }).catch((err)=>{
          expect(null).assertFail();
          done()
        })
      } catch (err) {
        expect(err.code == 401).assertTrue();
        console.log(TAG+"err.code"+err.code)
        done()
      }

      console.log(TAG + "************* unshareTest005 end *************");
    })
    /**
     * @tc.name unshare sharingResoure value is undefined,participants value is undefined (promise)
     * @tc.number SUB_DDM_CloudData_4800
     * @tc.desc unshare sharingResoure value is undefined,participants value is undefined (promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it("unshareTest006", 0, async function (done) {
      console.log(TAG + "************* unshareTest006 start *************");
      try {
        await cloudData.sharing.unshare(undefined, undefined).then(async(result) => {
          expect(null).assertFail();
          done()
        }).catch((err)=>{
          expect(null).assertFail();
          done()
        })
      } catch (err) {
        expect(err.code == 401).assertTrue();
        console.log(TAG+"err.code"+err.code)
        done()
      }
      console.log(TAG + "************* unshareTest006 end *************");
    })
    /**
     * @tc.name unshare participants-identity value is string,other parameters value is undenfined (promise)
     * @tc.number SUB_DDM_CloudData_4900
     * @tc.desc unshare participants-identity value is string,other parameters value is undenfined (promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it("unshareTest007", 0, async function (done) {
      console.log(TAG + "************* unshareTest007 start *************");
      try {
        let participants3 = {
          identity: '55555',
          role: undefined,
          state: undefined,
          privilege: undefined,
          attachInfo: undefined
        }
        let participants4 = {
          identity: '6666',
          role: undefined,
          state: undefined,
          privilege: undefined,
          attachInfo: undefined
        }
        let participantstest = [participants3, participants4]
        await cloudData.sharing.unshare(SHARING_RESOURCE, participantstest).then(async(result) => {
          expect(null).assertFail();
          done()
        }).catch((err)=>{
          expect(err.code == 202).assertTrue();
          console.log(TAG+"err.code"+err.code+"err.message"+err.message)
          done()
        })
      } catch (err) {
        expect(null).assertFail();
        console.log(TAG+"err.code:"+err.code)
        done()
      }
      console.log(TAG + "************* unshareTest007 end *************");
    })
    /**
     * @tc.name unshare participants-identity value is string,other parameters value is null (promise)
     * @tc.number SUB_DDM_CloudData_5000
     * @tc.desc unshare participants-identity value is string,other parameters value is null (promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it("unshareTest008", 0, async function (done) {
      console.log(TAG + "************* unshareTest008 start *************");
      try {
        let participants3 = {
          identity: '55555',
          role: null,
          state: null,
          privilege: null,
          attachInfo: null
        }
        let participants4 = {
          identity: '6666',
          role: null,
          state: null,
          privilege: null,
          attachInfo: null
        }
        let participantstest = [participants3, participants4]
        await cloudData.sharing.unshare(SHARING_RESOURCE, participantstest).then(async(result) => {
          expect(null).assertFail();
          done()
        }).catch((err)=>{
          expect(err.code == 202).assertTrue();
          console.log(TAG+"err.code"+err.code+"err.message"+err.message)
          done()
        })
      } catch (err) {
        expect(null).assertFail();
        console.log(TAG+"err.code:"+err.code)
        done()
      }
      console.log(TAG + "************* unshareTest008 end *************");
    })
    /**
     * @tc.name unshare participants-identity value is string(promise)
     * @tc.number SUB_DDM_CloudData_5100
     * @tc.desc unshare participants-identity value is string(promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it("unshareTest009", 0, async function (done) {
      console.log(TAG + "************* unshareTest009 start *************");
      try {
        let participants3 = {
          identity: '55555'
        }
        let participants4 = {
          identity: '6666'
        }
        let participantstest = [participants3, participants4]
        await cloudData.sharing.unshare(SHARING_RESOURCE, participantstest).then(async(result) => {
          expect(null).assertFail();
          done()
        }).catch((err)=>{
          expect(err.code == 202).assertTrue();
          console.log(TAG+"err.code"+err.code+"err.message"+err.message)
          done()
        })
      } catch (err) {
        expect(null).assertFail();
        console.log(TAG+"err.code:"+err.code)
        done()
      }
      console.log(TAG + "************* unshareTest009 end *************");
    })
    /**
     * @tc.name unshare participants-identity value is undefined(promise)
     * @tc.number SUB_DDM_CloudData_5200
     * @tc.desc unshare participants-identity value is undefined(promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it("unshareTest010", 0, async function (done) {
      console.log(TAG + "************* unshareTest010 start *************");
      try {
        let participants3 = {
          identity: undefined
        }
        let participants4 = {
          identity: undefined
        }
        let participantstest = [participants3, participants4]
        await cloudData.sharing.unshare(SHARING_RESOURCE, participantstest).then(async(result) => {
          expect(null).assertFail();
          done()
        }).catch((err)=>{
          expect(null).assertFail();
          done()
        })
      } catch (err) {
        expect(err.code == 401).assertTrue();
        console.log(TAG+"err.code"+err.code)
        done()
      }
      console.log(TAG + "************* unshareTest010 end *************");
    })
    /**
     * @tc.name unshare participants-identity value is null(promise)
     * @tc.number SUB_DDM_CloudData_5300
     * @tc.desc unshare participants-identity value is null(promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it("unshareTest011", 0, async function (done) {
      try {
        let participants3 = {
          identity: null
        }
        let participants4 = {
          identity: null
        }
        let participantstest = [participants3, participants4]
        await cloudData.sharing.unshare(SHARING_RESOURCE, participantstest).then(async(result) => {
          expect(null).assertFail();
          done()
        }).catch((err)=>{
          expect(null).assertFail();
          done()
        })
      } catch (err) {
        expect(err.code == 401).assertTrue();
        console.log(TAG+"err.code"+err.code)
        done()
      }
      console.log(TAG + "************* unshareTest011 end *************");
    })
    /**
     * @tc.name unshare sharingResoure  value is null(promise)
     * @tc.number SUB_DDM_CloudData_5400
     * @tc.desc unshare sharingResoure  value is null(promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it("unshareTest012", 0, async function (done) {
      console.log(TAG + "************* unshareTest012 start *************");
      try {
        await cloudData.sharing.unshare(participants).then(async(result) => {
          expect(null).assertFail();
          done()
        }).catch((err)=>{
          expect(null).assertFail();
          done()
        })
      } catch (err) {
        expect(err.code == 401).assertTrue();
        console.log(TAG+"err.code"+err.code)
        done()
      }
      console.log(TAG + "************* unshareTest012 end *************");
    })
    /**
     * @tc.name unshare sharingResoure  value is int(promise)
     * @tc.number SUB_DDM_CloudData_5500
     * @tc.desc unshare sharingResoure  value is int(promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it("unshareTest013", 0, async function (done) {
      console.log(TAG + "************* unshareTest013 start *************");
      try {
        await cloudData.sharing.unshare(1,participants).then(async(result) => {
          expect(null).assertFail();
          done()
        }).catch((err)=>{
          expect(null).assertFail();
          done()
        })
      } catch (err) {
        expect(err.code == 401).assertTrue();
        console.log(TAG+"err.code"+err.code)
        done()
      }
      console.log(TAG + "************* unshareTest013 end *************");
    })
    /**
     * @tc.name unshare participants  value is (promise)
     * @tc.number SUB_DDM_CloudData_5600
     * @tc.desc unshare participants  value is (promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it("unshareTest014", 0, async function (done) {
      console.log(TAG + "************* unshareTest014 start *************");
      try {
        await cloudData.sharing.unshare(SHARING_RESOURCE).then(async(result) => {
          expect(null).assertFail();
          done()
        }).catch((err)=>{
          expect(null).assertFail();
          done()
        })
      } catch (err) {
        expect(err.code == 401).assertTrue();
        console.log(TAG+"err.code"+err.code)
        done()
      }
      console.log(TAG + "************* unshareTest014 end *************");
    })
    /**
     * @tc.name unshare participants  value is int (promise)
     * @tc.number SUB_DDM_CloudData_5700
     * @tc.desc unshare participants  value int (promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it("unshareTest015", 0, async function (done) {
      console.log(TAG + "************* unshareTest015 start *************");
      try {
        await cloudData.sharing.unshare(SHARING_RESOURCE,3).then(async(result) => {
          expect(null).assertFail();
          done()
        }).catch((err)=>{
          expect(null).assertFail();
          done()
        })
      } catch (err) {
        expect(err.code == 401).assertTrue();
        console.log(TAG+"err.code"+err.code)
        done()
      }
      console.log(TAG + "************* unshareTest015 end *************");
    })
    /**
     * @tc.name unshare participants-identity  value is int (promise)
     * @tc.number SUB_DDM_CloudData_5800
     * @tc.desc nshare participants-identity  value is int (promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it("unshareTest016", 0, async function (done) {
      console.log(TAG + "************* unshareTest016 start *************");
      try {
        let participants3 = {
          identity: 123,
          role: null,
          state: null,
          privilege: null,
          attachInfo: null
        }
        let participants4 = {
          identity: 456,
          role: null,
          state: null,
          privilege: null,
          attachInfo: null
        }
        let participantstest = [participants3, participants4];
        await cloudData.sharing.unshare(SHARING_RESOURCE, participantstest).then(async(result) => {
          expect(null).assertFail();
          done()
        }).catch((err)=>{
          expect(null).assertFail();
          done()
        })
      } catch (err) {
        expect(err.code == 401).assertTrue();
        console.log(TAG+"err.code"+err.code)
        done()
      }
      console.log(TAG + "************* unshareTest016 end *************");
    })
    /**
     * @tc.name unshare participants-identity  value is string,other parameters value is int(promise)
     * @tc.number SUB_DDM_CloudData_5900
     * @tc.desc nshare participants-identity  value is string,other parameters value is int (promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it("unshareTest017", 0, async function (done) {
      console.log(TAG + "************* unshareTest017 start *************");
      try {
        let participants3 = {
          identity: "333333",
          role: 11,
          state: 11,
          privilege: 11,
          attachInfo: 11
        }
        let participants4 = {
          identity: "44444",
          role: 12,
          state: 12,
          privilege: 12,
          attachInfo: 12
        }
        let participantstest = [participants3, participants4];
        await cloudData.sharing.unshare(SHARING_RESOURCE, participantstest).then(async(result) => {
          expect(null).assertFail();
          done()
        }).catch((err)=>{
          expect(null).assertFail();
          done()
        })
      } catch (err) {
        expect(err.code == 401).assertTrue();
        console.log(TAG+"err.code"+err.code)
        done()
      }
      console.log(TAG + "************* unshareTest017 end *************");
    })
    /**
     * @tc.name unshare participants-privilege value is (promise)
     * @tc.number SUB_DDM_CloudData_11100
     * @tc.desc unshare participants-privilege value is(promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it('unshareTest018', 0, async function (done) {
      console.log(TAG + "************* unshareTest018 start *************");
      try {
        let privilege1;
        let privilege2;
        let participants3 = {
          identity: '55555',
          role: cloudData.sharing.Role.ROLE_INVITER,
          state: cloudData.sharing.State.STATE_UNKNOWN,
          privilege: privilege1,
          attachInfo: 'attachInfo1'
        }
        let participants4 = {
          identity: '66666',
          role: cloudData.sharing.Role.ROLE_INVITER,
          state: cloudData.sharing.State.STATE_UNKNOWN,
          privilege: privilege2,
          attachInfo: 'attachInfo2'
        }
        let participantstest = [participants3, participants4];
        await cloudData.sharing.unshare(SHARING_RESOURCE, participantstest).then(async(result) => {
          expect(null).assertFail();
          done()
        }).catch((err)=>{
          expect(err.code == 202).assertTrue();
          console.log(TAG+"err.code"+err.code+"err.message"+err.message)
          done()
        })
      } catch (err) {
        expect(null).assertFail();
        console.log(TAG+"err.code:"+err.code)
        done()
      }
      console.log(TAG + "************* unshareTest018 end *************");
    })
    /**
     * @tc.name unShare participants-privilege value is not boolean(promise)
     * @tc.number SUB_DDM_CloudData_11200
     * @tc.desc unShare participants-privilege value is not boolean(promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it('unshareTest019', 0, async function (done) {
      console.log(TAG + "************* unshareTest019 start *************");
      try {
        let privilege1 = {
          writable: 5,
          readable: 5,
          creatable: 5,
          deletable: 5,
          shareable: 5
        }
        let privilege2 = {
          writable: 6,
          readable: 6,
          creatable: 6,
          deletable: 6,
          shareable: 6
        }
        let participants3 = {
          identity: '55555',
          role: cloudData.sharing.Role.ROLE_INVITER,
          state: cloudData.sharing.State.STATE_UNKNOWN,
          privilege: privilege1,
          attachInfo: 'attachInfo1'
        }
        let participants4 = {
          identity: '66666',
          role: cloudData.sharing.Role.ROLE_INVITER,
          state: cloudData.sharing.State.STATE_UNKNOWN,
          privilege: privilege2,
          attachInfo: 'attachInfo2'
        }
        let participantstest = [participants3, participants4];
        await cloudData.sharing.unshare(SHARING_RESOURCE, participantstest).then(async(result) => {
          expect(null).assertFail();
          done()
        }).catch((err)=>{
          expect(null).assertFail();
          done()
        })
      } catch (err) {
          console.log(TAG+"err.code"+err.code)
          expect(err.code).assertEqual('401');
        done()
      }
      console.log(TAG + "************* unshareTest019 end *************");
    })
    /**
     * @tc.name unShare participants-privilege value is null(promise)
     * @tc.number SUB_DDM_CloudData_11300
     * @tc.desc unShare participants-privilege value is null(promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it('unshareTest020', 0, async function (done) {
      console.log(TAG + "************* unshareTest020 start *************");
      try {
        let privilege1 = {
          writable: null,
          readable: null,
          creatable: null,
          deletable: null,
          shareable: null
        }
        let privilege2 = {
          writable: null,
          readable: null,
          creatable: null,
          deletable: null,
          shareable: null
        }
        let participants3 = {
          identity: '55555',
          role: cloudData.sharing.Role.ROLE_INVITER,
          state: cloudData.sharing.State.STATE_UNKNOWN,
          privilege: privilege1,
          attachInfo: 'attachInfo1'
        }
        let participants4 = {
          identity: '66666',
          role: cloudData.sharing.Role.ROLE_INVITER,
          state: cloudData.sharing.State.STATE_UNKNOWN,
          privilege: privilege2,
          attachInfo: 'attachInfo2'
        }
        let participantstest = [participants3, participants4];
        await cloudData.sharing.unshare(SHARING_RESOURCE, participantstest).then(async(result) => {
          expect(null).assertFail();
          done()
        }).catch((err)=>{
          expect(err.code == 202).assertTrue();
          console.log(TAG+"err.code"+err.code+"err.message"+err.message)
          done()
        })
      } catch (err) {
        expect(null).assertFail();
        console.log(TAG+"err.code:"+err.code)
        done()
      }
      console.log(TAG + "************* unshareTest020 end *************");
    })
    /**
     * @tc.name unShare participants-privilege value is undefined(promise)
     * @tc.number SUB_DDM_CloudData_11400
     * @tc.desc unShare participants-privilege value is undefined(promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it('unshareTest021', 0, async function (done) {
      console.log(TAG + "************* unshareTest021 start *************");
      try {
        let privilege1 = {
          writable: undefined,
          readable: undefined,
          creatable: undefined,
          deletable: undefined,
          shareable: undefined
        }
        let privilege2 = {
          writable: undefined,
          readable: undefined,
          creatable: undefined,
          deletable: undefined,
          shareable: undefined
        }
        let participants3 = {
          identity: '55555',
          role: cloudData.sharing.Role.ROLE_INVITER,
          state: cloudData.sharing.State.STATE_UNKNOWN,
          privilege: privilege1,
          attachInfo: 'attachInfo1'
        }
        let participants4 = {
          identity: '66666',
          role: cloudData.sharing.Role.ROLE_INVITER,
          state: cloudData.sharing.State.STATE_UNKNOWN,
          privilege: privilege2,
          attachInfo: 'attachInfo2'
        }
        let participantstest = [participants3, participants4];
        await cloudData.sharing.unshare(SHARING_RESOURCE, participantstest).then(async(result) => {
          expect(null).assertFail();
          done()
        }).catch((err)=>{
          expect(err.code == 202).assertTrue();
          console.log(TAG+"err.code"+err.code+"err.message"+err.message)
          done()
        })
      } catch (err) {
        expect(null).assertFail();
        console.log(TAG+"err.code:"+err.code)
        done()
      }
      console.log(TAG + "************* unshareTest021 end *************");
    })
    /**
     * @tc.name unShare participants not contain identity(promise)
     * @tc.number SUB_DDM_CloudData_12300
     * @tc.desc unShare participants not contain identity(promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it('unshareTest022', 0, async function (done) {
      console.log(TAG + "************* unshareTest022 start *************");
      try {
        let participants3 = {
          role: cloudData.sharing.Role.ROLE_INVITER,
          state: cloudData.sharing.State.STATE_UNKNOWN,
          privilege: privilegeEnable,
          attachInfo: 'attachInfo1'
        }
        let participants4 = {
          role: cloudData.sharing.Role.ROLE_INVITER,
          state: cloudData.sharing.State.STATE_UNKNOWN,
          privilege: privilegeDisable,
          attachInfo: 'attachInfo2'
        }
        let participantstest = [participants3, participants4];
        await cloudData.sharing.unshare(SHARING_RESOURCE, participantstest).then(async(result) => {
            expect(null).assertFail();
            done()
          }).catch((err)=>{
             expect(null).assertFail();
             done()
          })
      } catch (err) {
        console.log(TAG+"err.code"+err.code)
        expect(err.code).assertEqual('401');
        done()
      }
      console.log(TAG + "************* unshareTest022 end *************");
    })
    /**
     * @tc.name exit sharingResoure value is undefined(promise)
     * @tc.number SUB_DDM_CloudData_6000
     * @tc.desc exit sharingResoure value is undefined(promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it("exitTest001", 0, async function (done) {
      console.log(TAG + "************* exitTest001 start *************");
      try {
        await cloudData.sharing.exit(undefined).then(async(result) => {
          expect(null).assertFail();
          done()
        }).catch((err)=>{
          expect(null).assertFail();
          done()
        })
      } catch (err) {
        expect(err.code == 401).assertTrue();
        console.log(TAG+"err.code"+err.code)
        done();
      }
      console.log(TAG + "************* exitTest001 end *************");
    })
    /**
     * @tc.name exit sharingResoure value is null(promise)
     * @tc.number SUB_DDM_CloudData_6100
     * @tc.desc exit sharingResoure value is null(promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it("exitTest002", 0, async function (done) {
      console.log(TAG + "************* exitTest002 start *************");
      try {
        await cloudData.sharing.exit(null).then(async(result) => {
          expect(null).assertFail();
          done()
        }).catch((err)=>{
          expect(null).assertFail();
          done()
        })
      } catch (err) {
        expect(err.code == 401).assertTrue();
        console.log(TAG+"err.code"+err.code)
        done();
      }
      console.log(TAG + "************* exitTest002 end *************");
    })
    /**
     * @tc.name exit sharingResoure value is (promise)
     * @tc.number SUB_DDM_CloudData_6200
     * @tc.desc exit sharingResoure value is (promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it("exitTest003", 0, async function (done) {
      console.log(TAG + "************* exitTest003 start *************");
      try {
        await cloudData.sharing.exit().then(async(result) => {
          expect(null).assertFail();
          done()
        }).catch((err)=>{
          expect(null).assertFail();
          done()
        })
      } catch (err) {
        expect(err.code == 401).assertTrue();
        console.log(TAG+"err.code"+err.code)
        done();
      }
      console.log(TAG + "************* exitTest003 end *************");
    })
    /**
     * @tc.name exit sharingResoure value is int (promise)
     * @tc.number SUB_DDM_CloudData_6300
     * @tc.desc exit sharingResoure value is int (promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it("exitTest004", 0, async function (done) {
      console.log(TAG + "************* exitTest004 start *************");
      try {
        await cloudData.sharing.exit(1).then(async(result) => {
          expect(null).assertFail();
          done()
          }).catch((err)=>{
          expect(null).assertFail();
          done()
          })
      } catch (err) {
        expect(err.code == 401).assertTrue();
        console.log(TAG+"err.code"+err.code)
        done();
      }
      console.log(TAG + "************* exitTest004 end *************");
    })
    /**
     * @tc.name changePrivilegeTest sharingResoure value is undefined (promise)
     * @tc.number SUB_DDM_CloudData_6400
     * @tc.desc changePrivilegeTest sharingResoure value is undefined(promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it("changePrivilegeTest001", 0, async function (done) {
      console.log(TAG + "************* changePrivilegeTest001 start *************");
      try {
        let changed1 = participants1;
        changed1.privilege = privilegeDisable;
        let changed2 = participants2;
        changed2.privilege = privilegeEnable;
        const changePart = [changed1, changed2];
        await cloudData.sharing.changePrivilege(undefined, changePart).then(async(result) => {
          expect(null).assertFail();
          done()
        }).catch((err)=>{
          expect(null).assertFail();
          done()
        })
      } catch (err) {
        expect(err.code == 401).assertTrue();
        console.log(TAG+"err.code"+err.code)
        done()
      }

      console.log(TAG + "************* changePrivilegeTest001 end *************");
    })

    /**
     * @tc.name changePrivilegeTest participants value is undefined (promise)
     * @tc.number SUB_DDM_CloudData_6500
     * @tc.desc changePrivilegeTest participants value is undefined(promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it("changePrivilegeTest002", 0, async function (done) {
      console.log(TAG + "************* changePrivilegeTest002 start *************");
      try {
        await cloudData.sharing.changePrivilege(SHARING_RESOURCE, undefined).then(async(result) => {
          expect(null).assertFail();
          done()
        }).catch((err)=>{
          expect(null).assertFail();
          done()
        })
      } catch (err) {
        expect(err.code == 401).assertTrue();
        console.log(TAG+"err.code"+err.code)
        done()
      }
      console.log(TAG + "************* changePrivilegeTest002 end *************");
    })
    /**
     * @tc.name changePrivilegeTest participants value is null (promise)
     * @tc.number SUB_DDM_CloudData_6600
     * @tc.desc changePrivilegeTest participants value is null(promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it("changePrivilegeTest003", 0, async function (done) {
      console.log(TAG + "************* changePrivilegeTest003 start *************");
      try {
        await cloudData.sharing.changePrivilege(SHARING_RESOURCE, null).then(async(result) => {
          expect(null).assertFail();
          done()
        }).catch((err)=>{
          expect(null).assertFail();
          done()
        })
      } catch (err) {
        expect(err.code == 401).assertTrue();
        console.log(TAG+"err.code"+err.code)
        done()
      }
      console.log(TAG + "************* changePrivilegeTest003 end *************");
    })
    /**
     * @tc.name changePrivilegeTest sharingResoure  value is null (promise)
     * @tc.number SUB_DDM_CloudData_6700
     * @tc.desc changePrivilegeTest sharingResoure  value is null(promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it("changePrivilegeTest004", 0, async function (done) {
      console.log(TAG + "************* changePrivilegeTest004 start *************");
      try {
        let changed1 = participants1;
        changed1.privilege = privilegeDisable;
        let changed2 = participants2;
        changed2.privilege = privilegeEnable;
        const changePart = [changed1, changed2];
        await cloudData.sharing.changePrivilege(null,changePart).then(async(result) => {
          expect(null).assertFail();
          done()
        }).catch((err)=>{
          expect(null).assertFail();
          done()
        })
      } catch (err) {
        expect(err.code == 401).assertTrue();
        console.log(TAG+"err.code"+err.code)
        done()
      }
      console.log(TAG + "************* changePrivilegeTest004 end *************");
    })
    /**
     * @tc.name changePrivilegeTest sharingResoure value is null,participants value is null(promise)
     * @tc.number SUB_DDM_CloudData_6800
     * @tc.desc changePrivilegeTest sharingResoure value is null,participants value is null(promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it("changePrivilegeTest005", 0, async function (done) {
      console.log(TAG + "************* changePrivilegeTest005 start *************");
      try {
        await cloudData.sharing.changePrivilege(null,null).then(async(result) => {
          expect(null).assertFail();
          done()
        }).catch((err)=>{
          expect(null).assertFail();
          done()
        })
      } catch (err) {
        expect(err.code == 401).assertTrue();
        console.log(TAG+"err.code"+err.code)
        done()
      }
      console.log(TAG + "************* changePrivilegeTest005 end *************");
    })
    /**
     * @tc.name changePrivilegeTest sharingResoure value is undefined,participants value is undefined(promise)
     * @tc.number SUB_DDM_CloudData_6900
     * @tc.desc changePrivilegeTest sharingResoure value is undefined,participants value is undefined(promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it("changePrivilegeTest006", 0, async function (done) {
      console.log(TAG + "************* changePrivilegeTest006 start *************");
      try {
        await cloudData.sharing.changePrivilege(undefined,undefined).then(async(result) => {
          expect(null).assertFail();
          done()
        }).catch((err)=>{
          expect(null).assertFail();
          done()
        })
      } catch (err) {
        expect(err.code == 401).assertTrue();
        console.log(TAG+"err.code"+err.code)
        done()
      }
      console.log(TAG + "************* changePrivilegeTest006 end *************");
    })
    /**
     * @tc.name changePrivilegeTest sharingResoure value is ,participants value is (promise)
     * @tc.number SUB_DDM_CloudData_7000
     * @tc.desc changePrivilegeTest sharingResoure value is ,participants value is (promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it("changePrivilegeTest007", 0, async function (done) {
      console.log(TAG + "************* changePrivilegeTest007 start *************");
      try {
        await cloudData.sharing.changePrivilege().then(async(result) => {
          expect(null).assertFail();
          done()
        }).catch((err)=>{
          expect(null).assertFail();
          done()
        })
      } catch (err) {
        expect(err.code == 401).assertTrue();
        console.log(TAG+"err.code"+err.code)
        done()
      }
      console.log(TAG + "************* changePrivilegeTest008 end *************");
    })
    /**
     * @tc.name changePrivilegeTest participants value is int(promise)
     * @tc.number SUB_DDM_CloudData_7100
     * @tc.desc changePrivilegeTest participants value is int (promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it("changePrivilegeTest009", 0, async function (done) {
      console.log(TAG + "************* changePrivilegeTest009 start *************");
      try {
        await cloudData.sharing.changePrivilege(SHARING_RESOURCE,3).then(async(result) => {
          expect(null).assertFail();
          done()
        }).catch((err)=>{
          expect(null).assertFail();
          done()
        })
      } catch (err) {
        expect(err.code == 401).assertTrue();
        console.log(TAG+"err.code"+err.code)
        done()
      }
      console.log(TAG + "************* changePrivilegeTest009 end *************");
    })
    /**
     * @tc.name changePrivilegeTest sharingResoure value is int(promise)
     * @tc.number SUB_DDM_CloudData_7200
     * @tc.desc changePrivilegeTest sharingResoure value is int (promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it("changePrivilegeTest010", 0, async function (done) {
      console.log(TAG + "************* changePrivilegeTest010 start *************");
      try {
        let changed1 = participants1;
        changed1.privilege = privilegeDisable;
        let changed2 = participants2;
        changed2.privilege = privilegeEnable;
        const changePart = [changed1, changed2];
        await cloudData.sharing.changePrivilege(1,changePart).then(async(result) => {
          expect(null).assertFail();
          done()
        }).catch((err)=>{
          expect(null).assertFail();
          done()
        })
      } catch (err) {
        expect(err.code == 401).assertTrue();
        console.log(TAG+"err.code"+err.code)
        done()
      }
      console.log(TAG + "************* changePrivilegeTest010 end *************");
    })
    /**
     * @tc.name changePrivilegeTest sharingResoure value is (promise)
     * @tc.number SUB_DDM_CloudData_7300
     * @tc.desc changePrivilegeTest sharingResoure value is (promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it("changePrivilegeTest011", 0, async function (done) {
      console.log(TAG + "************* changePrivilegeTest011 start *************");
      try {
        let changed1 = participants1;
        changed1.privilege = privilegeDisable;
        let changed2 = participants2;
        changed2.privilege = privilegeEnable;
        const changePart = [changed1, changed2];
        await cloudData.sharing.changePrivilege(changePart).then(async(result) => {
          expect(null).assertFail();
          done()
          }).catch((err)=>{
          expect(null).assertFail();
          done()
        })
      } catch (err) {
        expect(err.code == 401).assertTrue();
        console.log(TAG+"err.code"+err.code)
        done()
      }
      console.log(TAG + "************* changePrivilegeTest011 end *************");
    })
    /**
     * @tc.name changePrivilege participants-privilege value is (promise)
     * @tc.number SUB_DDM_CloudData_11500
     * @tc.desc changePrivilege participants-privilege value is(promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it('changePrivilegeTest012', 0, async function (done) {
      console.log(TAG + "************* changePrivilegeTest012 start *************");
      try {
        let privilege1;
        let privilege2;
        let participants3 = {
          identity: '55555',
          role: cloudData.sharing.Role.ROLE_INVITER,
          state: cloudData.sharing.State.STATE_UNKNOWN,
          privilege: privilege1,
          attachInfo: 'attachInfo1'
        }
        let participants4 = {
          identity: '66666',
          role: cloudData.sharing.Role.ROLE_INVITER,
          state: cloudData.sharing.State.STATE_UNKNOWN,
          privilege: privilege2,
          attachInfo: 'attachInfo2'
        }
        let participantstest = [participants3, participants4];
        await cloudData.sharing.changePrivilege(SHARING_RESOURCE, participantstest).then(async(result) => {
          expect(null).assertFail();
          done()
        }).catch((err)=>{
          expect(err.code == 202).assertTrue();
          console.log(TAG+"err.code"+err.code+"err.message"+err.message)
          done()
        })
      } catch (err) {
        expect(null).assertFail();
        console.log(TAG+"err.code:"+err.code)
        done()
      }
      console.log(TAG + "************* changePrivilegeTest012 end *************");
    })
    /**
     * @tc.name changePrivilege participants-privilege value is not boolean(promise)
     * @tc.number SUB_DDM_CloudData_11600
     * @tc.desc changePrivilege participants-privilege value is not boolean(promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it('changePrivilegeTest013', 0, async function (done) {
      console.log(TAG + "************* changePrivilegeTest013 start *************");
      try {
        let privilege1 = {
          writable: 5,
          readable: 5,
          creatable: 5,
          deletable: 5,
          shareable: 5
        }
        let privilege2 = {
          writable: 6,
          readable: 6,
          creatable: 6,
          deletable: 6,
          shareable: 6
        }
        let participants3 = {
          identity: '55555',
          role: cloudData.sharing.Role.ROLE_INVITER,
          state: cloudData.sharing.State.STATE_UNKNOWN,
          privilege: privilege1,
          attachInfo: 'attachInfo1'
        }
        let participants4 = {
          identity: '66666',
          role: cloudData.sharing.Role.ROLE_INVITER,
          state: cloudData.sharing.State.STATE_UNKNOWN,
          privilege: privilege2,
          attachInfo: 'attachInfo2'
        }
        let participantstest = [participants3, participants4];
        await cloudData.sharing.changePrivilege(SHARING_RESOURCE, participantstest).then(async(result) => {
          expect(null).assertFail();
          done()
        }).catch((err)=>{
          expect(null).assertFail();
          done()
        })
      } catch (err) {
        console.log(TAG+"err.code"+err.code)
        expect(err.code).assertEqual('401');
        done()
      }
      console.log(TAG + "************* changePrivilegeTest013 end *************");
    })
    /**
     * @tc.name changePrivilege participants-privilege value is null(promise)
     * @tc.number SUB_DDM_CloudData_11700
     * @tc.desc changePrivilege participants-privilege value is null(promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it('changePrivilegeTest014', 0, async function (done) {
      console.log(TAG + "************* changePrivilegeTest014 start *************");
      try {
        let privilege1 = {
          writable: null,
          readable: null,
          creatable: null,
          deletable: null,
          shareable: null
        }
        let privilege2 = {
          writable: null,
          readable: null,
          creatable: null,
          deletable: null,
          shareable: null
        }
        let participants3 = {
          identity: '55555',
          role: cloudData.sharing.Role.ROLE_INVITER,
          state: cloudData.sharing.State.STATE_UNKNOWN,
          privilege: privilege1,
          attachInfo: 'attachInfo1'
        }
        let participants4 = {
          identity: '66666',
          role: cloudData.sharing.Role.ROLE_INVITER,
          state: cloudData.sharing.State.STATE_UNKNOWN,
          privilege: privilege2,
          attachInfo: 'attachInfo2'
        }
        let participantstest = [participants3, participants4];
        await cloudData.sharing.changePrivilege(SHARING_RESOURCE, participantstest).then(async(result) => {
          expect(null).assertFail();
          done()
        }).catch((err)=>{
          expect(err.code == 202).assertTrue();
          console.log(TAG+"err.code"+err.code+"err.message"+err.message)
          done()
        })
      } catch (err) {
        expect(null).assertFail();
        console.log(TAG+"err.code:"+err.code)
        done()
      }
      console.log(TAG + "************* changePrivilegeTest014 end *************");
    })
    /**
     * @tc.name changePrivilege participants-privilege value is undefined(promise)
     * @tc.number SUB_DDM_CloudData_11800
     * @tc.desc changePrivilege participants-privilege value is undefined(promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it('changePrivilegeTest015', 0, async function (done) {
      console.log(TAG + "************* changePrivilegeTest015 start *************");
      try {
        let privilege1 = {
          writable: undefined,
          readable: undefined,
          creatable: undefined,
          deletable: undefined,
          shareable: undefined
        }
        let privilege2 = {
          writable: undefined,
          readable: undefined,
          creatable: undefined,
          deletable: undefined,
          shareable: undefined
        }
        let participants3 = {
          identity: '55555',
          role: cloudData.sharing.Role.ROLE_INVITER,
          state: cloudData.sharing.State.STATE_UNKNOWN,
          privilege: privilege1,
          attachInfo: 'attachInfo1'
        }
        let participants4 = {
          identity: '66666',
          role: cloudData.sharing.Role.ROLE_INVITER,
          state: cloudData.sharing.State.STATE_UNKNOWN,
          privilege: privilege2,
          attachInfo: 'attachInfo2'
        }
        let participantstest = [participants3, participants4];
        await cloudData.sharing.changePrivilege(SHARING_RESOURCE, participantstest).then(async(result) => {
          expect(null).assertFail();
          done()
        }).catch((err)=>{
          expect(err.code == 202).assertTrue();
          console.log(TAG+"err.code"+err.code+"err.message"+err.message)
          done()
        })
      } catch (err) {
        expect(null).assertFail();
        console.log(TAG+"err.code:"+err.code)
        done()
      }
      console.log(TAG + "************* changePrivilegeTest015 end *************");
    })
    /**
     * @tc.name changePrivilege participants not contain identity(promise)
     * @tc.number SUB_DDM_CloudData_12400
     * @tc.desc changePrivilege participants not contain identity(promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it('changePrivilegeTest016', 0, async function (done) {
      console.log(TAG + "************* changePrivilegeTest016 start *************");
      try {
        let participants3 = {
          role: cloudData.sharing.Role.ROLE_INVITER,
          state: cloudData.sharing.State.STATE_UNKNOWN,
          privilege: privilegeEnable,
          attachInfo: 'attachInfo1'
        }
        let participants4 = {
          role: cloudData.sharing.Role.ROLE_INVITER,
          state: cloudData.sharing.State.STATE_UNKNOWN,
          privilege: privilegeDisable,
          attachInfo: 'attachInfo2'
        }
        let participantstest = [participants3, participants4];
        await cloudData.sharing.changePrivilege(SHARING_RESOURCE, participantstest).then(async(result) => {
            expect(null).assertFail();
            done()
          }).catch((err)=>{
             expect(null).assertFail();
             done()
          })
      } catch (err) {
        console.log(TAG+"err.code"+err.code)
        expect(err.code).assertEqual('401');
        done()
      }
      console.log(TAG + "************* changePrivilegeTest016 end *************");
    })
    /**
     * @tc.name queryParticipants sharingResoure value is undefined(promise)
     * @tc.number SUB_DDM_CloudData_7400
     * @tc.desc queryParticipants sharingResoure value is undefined (promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it("queryParticipantsTest001", 0, async function (done) {
      console.log(TAG + "************* queryParticipantsTest001 start *************");
      try {
        await cloudData.sharing.queryParticipants(undefined).then(async(result) => {
          expect(null).assertFail();
          done()
        }).catch((err)=>{
          expect(null).assertFail();
          done()
        })
      } catch (err) {
        console.log(TAG+"err.code"+err.code)
        expect(err.code == 401).assertTrue();
        done()
      }
      console.log(TAG + "************* queryParticipantsTest002 end *************");
    })
    /**
     * @tc.name queryParticipants sharingResoure value is null(promise)
     * @tc.number SUB_DDM_CloudData_7500
     * @tc.desc queryParticipants sharingResoure value is null (promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it("queryParticipantsTest002", 0, async function (done) {
      console.log(TAG + "************* queryParticipantsTest002 start *************");
      try {
        await cloudData.sharing.queryParticipants(null).then(async(result) => {
          expect(null).assertFail();
          done()
        }).catch((err)=>{
          expect(null).assertFail();
          done()
        })
      } catch (err) {
        console.log(TAG+"err.code"+err.code)
        expect(err.code == 401).assertTrue();
        done()
      }
      console.log(TAG + "************* queryParticipantsTest002 end *************");
    })
    /**
     * @tc.name queryParticipants sharingResoure value is int(promise)
     * @tc.number SUB_DDM_CloudData_7600
     * @tc.desc queryParticipants sharingResoure value is int (promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it("queryParticipantsTest003", 0, async function (done) {
      console.log(TAG + "************* queryParticipantsTest003 start *************");
      try {
        await cloudData.sharing.queryParticipants(1).then(async(result) => {
          expect(null).assertFail();
          done()
        }).catch((err)=>{
          expect(null).assertFail();
          done()
        })
      } catch (err) {
        console.log(TAG+"err.code"+err.code)
        expect(err.code == 401).assertTrue();
        done()
      }
      console.log(TAG + "************* queryParticipantsTest003 end *************");
    })
    /**
     * @tc.name queryParticipants sharingResoure value is (promise)
     * @tc.number SUB_DDM_CloudData_7700
     * @tc.desc queryParticipants sharingResoure value is (promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it("queryParticipantsTest004", 0, async function (done) {
      console.log(TAG + "************* queryParticipantsTest004 start *************");
      try {
        await cloudData.sharing.queryParticipants().then(async(result) => {
          expect(null).assertFail();
          done()
        }).catch((err)=>{
          expect(null).assertFail();
          done()
        })
      } catch (err) {
        console.log(TAG+"err.code"+err.code)
        expect(err.code == 401).assertTrue();
        done()
      }
      console.log(TAG + "************* queryParticipantsTest004 end *************");
    })
    /**
     * @tc.name queryParticipantsByInvitation sharingResoure value is undefined(promise)
     * @tc.number SUB_DDM_CloudData_7800
     * @tc.desc queryParticipantsByInvitation sharingResoure value is undefined (promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it("queryParticipantsByInvitationTest001", 0, async function (done) {
      console.log(TAG + "************* queryParticipantsByInvitationTest001 start *************");
      try {
        await cloudData.sharing.queryParticipantsByInvitation(undefined).then(async(result) => {
          expect(null).assertFail();
          done()
        }).catch((err)=>{
          expect(null).assertFail();
          done()
        })
      } catch (err) {
        console.log(TAG+"err.code"+err.code)
        expect(err.code == 401).assertTrue();
        done()
      }
      console.log(TAG + "************* queryParticipantsByInvitationTest001 end *************");
    })
    /**
     * @tc.name queryParticipantsByInvitation sharingResoure value is null(promise)
     * @tc.number SUB_DDM_CloudData_7900
     * @tc.desc queryParticipantsByInvitation sharingResoure value is null (promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it("queryParticipantsByInvitationTest002", 0, async function (done) {
      console.log(TAG + "************* queryParticipantsByInvitationTest002 start *************");
      try {
        await cloudData.sharing.queryParticipantsByInvitation(null).then(async(result) => {
          expect(null).assertFail();
          done()
        }).catch((err)=>{
          expect(null).assertFail();
          done()
        })
      } catch (err) {
        console.log(TAG+"err.code"+err.code)
        expect(err.code == 401).assertTrue();
        done()
      }
      console.log(TAG + "************* queryParticipantsByInvitationTest002 end *************");
    })
    /**
     * @tc.name queryParticipantsByInvitation sharingResoure value is int(promise)
     * @tc.number SUB_DDM_CloudData_8000
     * @tc.desc queryParticipantsByInvitation sharingResoure value is int (promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it("queryParticipantsByInvitationTest003", 0, async function (done) {
      console.log(TAG + "************* queryParticipantsByInvitationTest003 start *************");
      try {
        await cloudData.sharing.queryParticipantsByInvitation(1).then(async(result) => {
          expect(null).assertFail();
          done()
        }).catch((err)=>{
          expect(null).assertFail();
          done()
        })
      } catch (err) {
        console.log(TAG+"err.code"+err.code)
        expect(err.code == 401).assertTrue();
        done()
      }
      console.log(TAG + "************* queryParticipantsByInvitationTest003 end *************");
    })
    /**
     * @tc.name queryParticipantsByInvitation sharingResoure value is (promise)
     * @tc.number SUB_DDM_CloudData_8100
     * @tc.desc queryParticipantsByInvitation sharingResoure value is (promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it("queryParticipantsByInvitationTest004", 0, async function (done) {
      console.log(TAG + "************* queryParticipantsByInvitationTest004 start *************");
      try {
        await cloudData.sharing.queryParticipantsByInvitation().then(async(result) => {
          expect(null).assertFail();
          done()
        }).catch((err)=>{
          expect(null).assertFail();
          done()
        })
      } catch (err) {
        console.log(TAG+"err.code"+err.code)
        expect(err.code == 401).assertTrue();
        done()
      }
      console.log(TAG + "************* queryParticipantsByInvitationTest004 end *************");
    })
    /**
     * @tc.name confirmInvitation invitationCode value undefined (promise)
     * @tc.number SUB_DDM_CloudData_8200
     * @tc.desc confirmInvitation invitationCode value undefined (promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it("confirmInvitationTest001", 0, async function (done) {
      console.log(TAG + "************* confirmInvitationTest001 start *************");
      try {
        await cloudData.sharing.confirmInvitation(undefined, cloudData.sharing.State.STATE_SUSPENDED).then(async(result) => {
          expect(null).assertFail();
          done()
        }).catch((err)=>{
          expect(null).assertFail();
          done()
        })
      } catch (err) {
        console.log(TAG+"err.code"+err.code)
        expect(err.code == 401).assertTrue();
        done()
      }

      console.log(TAG + "************* confirmInvitationTest001 end *************");
    })
    /**
     * @tc.name confirmInvitation invitationCode value null (promise)
     * @tc.number SUB_DDM_CloudData_8300
     * @tc.desc confirmInvitation invitationCode value null (promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it("confirmInvitationTest002", 0, async function (done) {
      console.log(TAG + "************* confirmInvitationTest002 start *************");
      try {
        await cloudData.sharing.confirmInvitation(null, cloudData.sharing.State.STATE_SUSPENDED).then(async(result) => {
          expect(null).assertFail();
          done()
        }).catch((err)=>{
          expect(null).assertFail();
          done()
        })
      } catch (err) {
        console.log(TAG+"err.code"+err.code)
        expect(err.code == 401).assertTrue();
        done()
      }
      console.log(TAG + "************* confirmInvitationTest002 end *************");
    })
    /**
     * @tc.name confirmInvitation state value int (promise)
     * @tc.number SUB_DDM_CloudData_8400
     * @tc.desc confirmInvitation state value int (promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it("confirmInvitationTest003", 0, async function (done) {
      console.log(TAG + "************* confirmInvitationTest003 start *************");
      try {
        await cloudData.sharing.confirmInvitation(INVITATION_CODE, 100).then(async(result) => {
          expect(null).assertFail();
          done()
        }).catch((err)=>{
          expect(null).assertFail();
          done()
        })
      } catch (err) {
        console.log(TAG+"err.code"+err.code)
        expect(err.code == 401).assertTrue();
        done()
      }
      console.log(TAG + "************* confirmInvitationTest003 end *************");
    })

    /**
     * @tc.name confirmInvitation state value undefined (promise)
     * @tc.number SUB_DDM_CloudData_8500
     * @tc.desc confirmInvitation state value undefined (promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it("confirmInvitationTest004", 0, async function (done) {
      console.log(TAG + "************* confirmInvitationTest004 start *************");
      try {
        await cloudData.sharing.confirmInvitation(INVITATION_CODE, undefined).then(async(result) => {
          expect(null).assertFail();
          done()
        }).catch((err)=>{
          expect(null).assertFail();
          done()
        })
      } catch (err) {
        console.log(TAG+"err.code"+err.code)
        expect(err.code == 401).assertTrue();
        done()
      }
      console.log(TAG + "************* confirmInvitationTest004 end *************");
    })
    /**
     * @tc.name confirmInvitation state value null (promise)
     * @tc.number SUB_DDM_CloudData_8500
     * @tc.desc confirmInvitation state value null (promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it("confirmInvitationTest005", 0, async function (done) {
      console.log(TAG + "************* confirmInvitationTest005 start *************");
      try {
        await cloudData.sharing.confirmInvitation(INVITATION_CODE, null).then(async(result) => {
          expect(null).assertFail();
          done()
        }).catch((err)=>{
          expect(null).assertFail();
          done()
        })
      } catch (err) {
        console.log(TAG+"err.code"+err.code)
        expect(err.code == 401).assertTrue();
        done()
      }
      console.log(TAG + "************* confirmInvitationTest005 end *************");
    })
    /**
     * @tc.name confirmInvitation invitationCode value is null,state value is null (promise)
     * @tc.number SUB_DDM_CloudData_8600
     * @tc.desc confirmInvitation invitationCode value is null,state value is null (promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it("confirmInvitationTest006", 0, async function (done) {
      console.log(TAG + "************* confirmInvitationTest006 start *************");
      try {
        await cloudData.sharing.confirmInvitation(null,null).then(async(result) => {
          expect(null).assertFail();
          done()
        }).catch((err)=>{
          expect(null).assertFail();
          done()
        })
      } catch (err) {
        console.log(TAG+"err.code"+err.code)
        expect(err.code == 401).assertTrue();
        done()
      }
      console.log(TAG + "************* confirmInvitationTest006 end *************");
    })
    /**
     * @tc.name confirmInvitation invitationCode value is undefined,state value is undefined (promise)
     * @tc.number SUB_DDM_CloudData_8700
     * @tc.desc confirmInvitation invitationCode value is undefined,state value is undefined (promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it("confirmInvitationTest007", 0, async function (done) {
      console.log(TAG + "************* confirmInvitationTest007 start *************");
      try {
        await cloudData.sharing.confirmInvitation(undefined,undefined).then(async(result) => {
          expect(null).assertFail();
          done()
        }).catch((err)=>{
          expect(null).assertFail();
          done()
        })
      } catch (err) {
        console.log(TAG+"err.code"+err.code)
        expect(err.code == 401).assertTrue();
        done()
      }
      console.log(TAG + "************* confirmInvitationTest007 end *************");
    })
    /**
     * @tc.name confirmInvitation invitationCode value is (promise)
     * @tc.number SUB_DDM_CloudData_8800
     * @tc.desc confirmInvitation invitationCode value is (promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it("confirmInvitationTest008", 0, async function (done) {
      console.log(TAG + "************* confirmInvitationTest008 start *************");
      try {
        await cloudData.sharing.confirmInvitation(cloudData.sharing.State.STATE_SUSPENDED).then(async(result) => {
          expect(null).assertFail();
          done()
        }).catch((err)=>{
          expect(null).assertFail();
          done()
        })
      } catch (err) {
        console.log(TAG+"err.code"+err.code)
        expect(err.code == 401).assertTrue();
        done()
      }
      console.log(TAG + "************* confirmInvitationTest008 end *************");
    })
    /**
     * @tc.name confirmInvitation invitationCode value is int(promise)
     * @tc.number SUB_DDM_CloudData_8900
     * @tc.desc confirmInvitation invitationCode value is int (promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it("confirmInvitationTest009", 0, async function (done) {
      console.log(TAG + "************* confirmInvitationTest009 start *************");
      try {
        await cloudData.sharing.confirmInvitation(12,cloudData.sharing.State.STATE_SUSPENDED).then(async(result) => {
          expect(null).assertFail();
          done()
        }).catch((err)=>{
          expect(null).assertFail();
          done()
        })
      } catch (err) {
        console.log(TAG+"err.code"+err.code)
        expect(err.code == 401).assertTrue();
        done()
      }
      console.log(TAG + "************* confirmInvitationTest009 end *************");
    })
    /**
     * @tc.name confirmInvitation invitationCode value is ,state value is  (promise)
     * @tc.number SUB_DDM_CloudData_9000
     * @tc.desc confirmInvitation invitationCode value is ,state value is  (promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it("confirmInvitationTest010", 0, async function (done) {
      console.log(TAG + "************* confirmInvitationTest010 start *************");
      try {
        await cloudData.sharing.confirmInvitation().then(async(result) => {
          expect(null).assertFail();
          done()
        }).catch((err)=>{
          expect(null).assertFail();
          done()
        })
      } catch (err) {
        console.log(TAG+"err.code"+err.code)
        expect(err.code == 401).assertTrue();
        done()
      }
      console.log(TAG + "************* confirmInvitationTest010 end *************");
    })
    /**
     * @tc.name confirmInvitation state value is  (promise)
     * @tc.number SUB_DDM_CloudData_9100
     * @tc.desc confirmInvitation state value is  (promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it("confirmInvitationTest011", 0, async function (done) {
      console.log(TAG + "************* confirmInvitationTest011 start *************");
      try {
        await cloudData.sharing.confirmInvitation(INVITATION_CODE).then(async(result) => {
          expect(null).assertFail();
          done()
        }).catch((err)=>{
          expect(null).assertFail();
          done()
        })
      } catch (err) {
        console.log(TAG+"err.code"+err.code)
        expect(err.code == 401).assertTrue();
        done()
      }
      console.log(TAG + "************* confirmInvitationTest011 end *************");
    })
    /**
     * @tc.name changeConfirmation sharingResource value is  undefined (promise)
     * @tc.number SUB_DDM_CloudData_9200
     * @tc.desc changeConfirmation sharingResource value is  undefined (promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it("changeConfirmationTest001", 0, async function (done) {
      console.log(TAG + "************* changeConfirmationTest001 start *************");
      try {
        await cloudData.sharing.changeConfirmation(undefined, cloudData.sharing.State.STATE_SUSPENDED).then(async(result) => {
          expect(null).assertFail();
          done()
        }).catch((err)=>{
          expect(null).assertFail();
          done()
        })
      } catch (err) {
        console.log(TAG+"err.code"+err.code)
        expect(err.code == 401).assertTrue();
        done()
      }
      console.log(TAG + "************* changeConfirmationTest001 end *************");
    })

    /**
     * @tc.name changeConfirmation state value is  int (promise)
     * @tc.number SUB_DDM_CloudData_9300
     * @tc.desc changeConfirmation state value is  int (promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it("changeConfirmationTest002", 0, async function (done) {
      console.log(TAG + "************* changeConfirmationTest002 start *************");
      try {
        await cloudData.sharing.changeConfirmation(SHARING_RESOURCE, 100).then(async(result) => {
          expect(null).assertFail();
          done()
        }).catch((err)=>{
          expect(null).assertFail();
          done()
        })
      } catch (err) {
        console.log(TAG+"err.code"+err.code)
        expect(err.code == 401).assertTrue();
        done()
      }
      console.log(TAG + "************* changeConfirmationTest002 end *************");
    })

    /**
     * @tc.name changeConfirmation state value is  undefined (promise)
     * @tc.number SUB_DDM_CloudData_9400
     * @tc.desc changeConfirmation state value is  undefined (promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it("changeConfirmationTest003", 0, async function (done) {
      console.log(TAG + "************* changeConfirmationTest003 start *************");
      try {
        await cloudData.sharing.changeConfirmation(SHARING_RESOURCE, undefined).then(async(result) => {
          expect(null).assertFail();
          done()
        }).catch((err)=>{
          expect(null).assertFail();
          done()
        })
      } catch (err) {
        console.log(TAG+"err.code"+err.code)
        expect(err.code == 401).assertTrue();
        done()
      }
      console.log(TAG + "************* changeConfirmationTest003 end *************");
    })
    /**
     * @tc.name changeConfirmation sharingResource value is null,state value is  null (promise)
     * @tc.number SUB_DDM_CloudData_9500
     * @tc.desc changeConfirmation sharingResource value is null,state value is  null (promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it("changeConfirmationTest004", 0, async function (done) {
      console.log(TAG + "************* changeConfirmationTest004 start *************");
      try {
        await cloudData.sharing.changeConfirmation(null, null).then(async(result) => {
          expect(null).assertFail();
          done()
        }).catch((err)=>{
          expect(null).assertFail();
          done()
        })
      } catch (err) {
        console.log(TAG+"err.code"+err.code)
        expect(err.code == 401).assertTrue();
        done()
      }
      console.log(TAG + "************* changeConfirmationTest004 end *************");
    })
    /**
     * @tc.name changeConfirmation sharingResource value is undefined,state value is undefined (promise)
     * @tc.number SUB_DDM_CloudData_9600
     * @tc.desc changeConfirmation sharingResource value is undefined,state value is undefined (promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it("changeConfirmationTest005", 0, async function (done) {
      console.log(TAG + "************* changeConfirmationTest005 start *************");
      try {
        await cloudData.sharing.changeConfirmation(undefined, undefined).then(async(result) => {
          expect(null).assertFail();
          done()
        }).catch((err)=>{
          expect(null).assertFail();
          done()
        })
      } catch (err) {
        console.log(TAG+"err.code"+err.code)
        expect(err.code == 401).assertTrue();
        done()
      }
      console.log(TAG + "************* changeConfirmationTest005 end *************");
    })
    /**
     * @tc.name changeConfirmation state value is null (promise)
     * @tc.number SUB_DDM_CloudData_9700
     * @tc.desc changeConfirmation state value is null (promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it("changeConfirmationTest006", 0, async function (done) {
      console.log(TAG + "************* changeConfirmationTest006 start *************");
      try {
        await cloudData.sharing.changeConfirmation(SHARING_RESOURCE, null).then(async(result) => {
          expect(null).assertFail();
          done()
        }).catch((err)=>{
          expect(null).assertFail();
          done()
        })
      } catch (err) {
        console.log(TAG+"err.code"+err.code)
        expect(err.code == 401).assertTrue();
        done()
      }
      console.log(TAG + "************* changeConfirmationTest006 end *************");
    })
    /**
     * @tc.name changeConfirmation sharingResource value is null(promise)
     * @tc.number SUB_DDM_CloudData_9800
     * @tc.desc changeConfirmation sharingResource value is null(promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it("changeConfirmationTest007", 0, async function (done) {
      console.log(TAG + "************* changeConfirmationTest007 start *************");
      try {
        await cloudData.sharing.changeConfirmation(null, cloudData.sharing.State.STATE_SUSPENDED).then(async(result) => {
          expect(null).assertFail();
          done()
        }).catch((err)=>{
          expect(null).assertFail();
          done()
        })
      } catch (err) {
        console.log(TAG+"err.code"+err.code)
        expect(err.code == 401).assertTrue();
        done()
      }
      console.log(TAG + "************* changeConfirmationTest007 end *************");
    })
    /**
     * @tc.name changeConfirmation sharingResource value is int (promise)
     * @tc.number SUB_DDM_CloudData_9900
     * @tc.desc changeConfirmation sharingResource value is int (promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it("changeConfirmationTest008", 0, async function (done) {
      console.log(TAG + "************* changeConfirmationTest008 start *************");
      try {
        await cloudData.sharing.changeConfirmation(1, cloudData.sharing.State.STATE_SUSPENDED).then(async(result) => {
          expect(null).assertFail();
          done()
        }).catch((err)=>{
          expect(null).assertFail();
          done()
        })
      } catch (err) {
        console.log(TAG+"err.code"+err.code)
        expect(err.code == 401).assertTrue();
        done()
      }
      console.log(TAG + "************* changeConfirmationTest008 end *************");
    })
    /**
     * @tc.name changeConfirmation sharingResource value is ,state value is  (promise)
     * @tc.number SUB_DDM_CloudData_10000
     * @tc.desc changeConfirmation sharingResource value is ,state value is  (promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it("changeConfirmationTest009", 0, async function (done) {
      console.log(TAG + "************* changeConfirmationTest009 start *************");
      try {
        await cloudData.sharing.changeConfirmation().then(async(result) => {
          expect(null).assertFail();
          done()
        }).catch((err)=>{
          expect(null).assertFail();
          done()
        })
      } catch (err) {
        console.log(TAG+"err.code"+err.code)
        expect(err.code == 401).assertTrue();
        done()
      }
      console.log(TAG + "************* changeConfirmationTest009 end *************");
    })
    /**
     * @tc.name changeConfirmation sharingResource value is (promise)
     * @tc.number SUB_DDM_CloudData_10100
     * @tc.desc changeConfirmation sharingResource value is  (promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it("changeConfirmationTest010", 0, async function (done) {
      console.log(TAG + "************* changeConfirmationTest010 start *************");
      try {
        await cloudData.sharing.changeConfirmation(cloudData.sharing.State.STATE_SUSPENDED).then(async(result) => {
          expect(null).assertFail();
          done()
        }).catch((err)=>{
          expect(null).assertFail();
          done()
        })
      } catch (err) {
        console.log(TAG+"err.code"+err.code)
        expect(err.code == 401).assertTrue();
        done()
      }

      console.log(TAG + "************* changeConfirmationTest010 end *************");
    })
    /**
     * @tc.name changeConfirmation state value is (promise)
     * @tc.number SUB_DDM_CloudData_10200
     * @tc.desc changeConfirmation state value is  (promise)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it("changeConfirmationTest011", 0, async function (done) {
      console.log(TAG + "************* changeConfirmationTest011 start *************");
      try {
        await cloudData.sharing.changeConfirmation(SHARING_RESOURCE).then(async(result) => {
            expect(null).assertFail();
            done()
          }).catch((err)=>{
            expect(null).assertFail();
            done()
          })
      } catch (err) {
        console.log(TAG+"err.code"+err.code)
        expect(err.code == 401).assertTrue();
        done()
      }
      console.log(TAG + "************* changeConfirmationTest011 end *************");
    })
    /**
     * @tc.name changeConfirmation sharingResource value is string, state value is State (callback)
     * @tc.number SUB_DDM_CloudData_11900
     * @tc.desc changeConfirmation sharingResource  value is string, state value is State (callback)
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level Level 1
     */
    it("changeConfirmationTest012", 0, async function (done) {
      console.log(TAG + "************* changeConfirmationTest012 start *************");
      try {
        await cloudData.sharing.changeConfirmation(SHARING_RESOURCE, cloudData.sharing.State.STATE_SUSPENDED).then(async(result) => {
          expect(null).assertFail();
          done()
        }).catch((err)=>{
          expect(err.code == 202).assertTrue();
          console.log(TAG + "err.code" + err.code + "err.message" + err.message)
          done()
        })
      } catch (err) {
        console.log(TAG+"err.code"+err.code)
        expect(null).assertFail();
        done()
      }
      console.log(TAG + "************* changeConfirmationTest012 end *************");
    })
  })
}