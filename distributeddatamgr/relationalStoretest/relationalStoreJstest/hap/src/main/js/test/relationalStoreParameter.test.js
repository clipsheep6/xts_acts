/*
 * Copyright (C) 2021-2022 Huawei Device Co., Ltd.
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
import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from '@ohos/hypium'
import data_Rdb from '@ohos.data.relationalStore';
import ability_featureAbility from '@ohos.ability.featureAbility'

//const TAG = '[RelationalStore_JSKITS_TEST]'
const TAG = '[ttt] '
const CREATE_TABLE_TEST = 'CREATE TABLE IF NOT EXISTS test ('
+ 'id INTEGER PRIMARY KEY AUTOINCREMENT, '
+ 'name TEXT NOT NULL, '
+ 'age INTEGER, '
+ 'salary REAL, '
+ 'blobType BLOB)';

let rdbStore = undefined;
let context = ability_featureAbility.getContext()

const STORE_CONFIG = {
    name: 'relationalStoreParameter.db',
    securityLevel: data_Rdb.SecurityLevel.S1,
    encrypt: undefined
}

export default function relationalStoreParameter() {
    describe('relationalStoreParameter', function () {
        beforeAll(function () {
            console.info(TAG + 'beforeAll')
        })

        beforeEach(async function () {
            console.info(TAG + 'beforeEach')
            rdbStore = await data_Rdb.getRdbStore(context, STORE_CONFIG);
            await rdbStore.executeSql(CREATE_TABLE_TEST, undefined);
            let u8 = new Uint8Array([1, 2, 3])
            {
                const valueBucket = {
                    'name': 'zhangsan',
                    'age': 18,
                    'salary': 100.5,
                    'blobType': u8,
                }
                await rdbStore.insert('test', valueBucket)
            }
            {
                const valueBucket = {
                    'name': 'lisi',
                    'age': 28,
                    'salary': 100.5,
                    'blobType': u8,
                }
                await rdbStore.insert('test', valueBucket)
            }
            {
                const valueBucket = {
                    'name': 'lisi',
                    'age': 38,
                    'salary': 100.5,
                    'blobType': u8,
                }
                await rdbStore.insert('test', valueBucket)
            }
        })

        afterEach(async function () {
            console.info(TAG + 'afterEach')
            await rdbStore.executeSql('DELETE FROM test');
            rdbStore = null
            await data_Rdb.deleteRdbStore(context, 'Delete.db');
        })

        afterAll(async function () {
            console.info(TAG + 'afterAll')
        })

        console.info(TAG + '*************Unit Test Begin*************');

        /**
         * @tc.name RelationalStore executeSql test
         * @tc.number SUB_DDM_RelationalStore_executeSql_bindargs_Undefined_0010
         * @tc.desc RelationalStore executeSql test
         */
        it('SUB_DDM_RelationalStore_executeSql_bindargs_Undefined_0010', 0, async function (done) {
            console.info(TAG + '************* SUB_DDM_RelationalStore_executeSql_bindargs_Undefined_0010 start *************');
            //executeSql
            const CREATE_TABLE_TEST1 = 'CREATE TABLE IF NOT EXISTS test1 ('
            + 'id INTEGER PRIMARY KEY AUTOINCREMENT, '
            + 'name TEXT NOT NULL, '
            + 'age INTEGER, '
            + 'salary REAL, '
            + 'blobType BLOB)';
            await rdbStore.executeSql(CREATE_TABLE_TEST1,undefined).then(() => {
                console.info(TAG + `ExecuteSql successful`);
                expect(true).assertTrue();
            }).catch((err) => {
                console.info(TAG +"ExecuteSql failed, err: " + err)
                expect(null).assertFail();
            })
            done();
        })
        /**
         * @tc.name RelationalStore executeSql test
         * @tc.number SUB_DDM_RelationalStore_executeSql_bindargs_null_0020
         * @tc.desc RelationalStore executeSql test
         */
        it('SUB_DDM_RelationalStore_executeSql_bindargs_null_0020', 0, async function (done) {
            console.info(TAG + '************* SUB_DDM_RelationalStore_executeSql_bindargs_null_0020 start *************');
            //executeSql
            const CREATE_TABLE_TEST1 = 'CREATE TABLE IF NOT EXISTS test1 ('
            + 'id INTEGER PRIMARY KEY AUTOINCREMENT, '
            + 'name TEXT NOT NULL, '
            + 'age INTEGER, '
            + 'salary REAL, '
            + 'blobType BLOB)';
            await rdbStore.executeSql(CREATE_TABLE_TEST1,null).then(() => {
                console.info(TAG + `ExecuteSql successful`);
                expect(true).assertTrue();
            }).catch((err) => {
                console.info(TAG +"ExecuteSql failed, err: " + err)
                expect(null).assertFail();
            })
            done();
        })
        /**
         * @tc.name RelationalStore executeSql test
         * @tc.number SUB_DDM_RelationalStore_executeSql_bindargs_empty_0030
         * @tc.desc RelationalStore executeSql test
         */
        it('SUB_DDM_RelationalStore_executeSql_bindargs_empty_0030', 0, async function (done) {
            console.info(TAG + '************* SUB_DDM_RelationalStore_executeSql_bindargs_empty_0030 start *************');
            //executeSql
            const CREATE_TABLE_TEST1 = 'CREATE TABLE IF NOT EXISTS test1 ('
            + 'id INTEGER PRIMARY KEY AUTOINCREMENT, '
            + 'name TEXT NOT NULL, '
            + 'age INTEGER, '
            + 'salary REAL, '
            + 'blobType BLOB)';
            await rdbStore.executeSql(CREATE_TABLE_TEST1).then(() => {
                console.info(TAG + `ExecuteSql successful`);
                expect(true).assertTrue();
            }).catch((err) => {
                console.info(TAG +"ExecuteSql failed, err: " + err)
                expect(null).assertFail();
            })
            done();
        })
        /**
         * @tc.name RelationalStore query test
         * @tc.number SUB_DDM_RelationalStore_Query_columns_Undefined_0010
         * @tc.desc RelationalStore query test
         */
        it('SUB_DDM_RelationalStore_Query_columns_Undefined_0010', 0, async function (done) {
            console.info(TAG + '************* SUB_DDM_RelationalStore_Query_columns_Undefined_0010 start *************');
            //query
            let predicates = new data_Rdb.RdbPredicates("test");
            predicates.equalTo("name", "lisi");
            let promise = rdbStore.query(predicates, undefined);
            promise.then((resultSet) => {
                console.info(TAG + `query ResultSet rowCount = ` + resultSet.rowCount);
                expect(2).assertEqual(resultSet.rowCount)
                done();
            }).catch((err) => {
                console.info(TAG + `Failed to query; code is ${err.code},message is ${err.message}`);
                expect(null).assertFail();
                done();
            })
        })
        /**
         * @tc.name RelationalStore query test
         * @tc.number SUB_DDM_RelationalStore_Query_columns_null_0020
         * @tc.desc RelationalStore query test
         */
        it('SUB_DDM_RelationalStore_Query_columns_null_0020', 0, async function (done) {
            console.info(TAG + '************* SUB_DDM_RelationalStore_Query_columns_null_0020 start *************');
            //query
            let predicates = new data_Rdb.RdbPredicates("test");
            predicates.equalTo("name", "lisi");
            let promise = rdbStore.query(predicates, null);
            promise.then((resultSet) => {
                console.info(TAG + `query ResultSet rowCount = ` + resultSet.rowCount);
                expect(2).assertEqual(resultSet.rowCount)
                done();
            }).catch((err) => {
                console.info(TAG + `Failed to query; code is ${err.code},message is ${err.message}`);
                expect(null).assertFail();
                done();
            })
        })
        /**
         * @tc.name RelationalStore query test
         * @tc.number SUB_DDM_RelationalStore_Query_columns_empty_0030
         * @tc.desc RelationalStore query test
         */
        it('SUB_DDM_RelationalStore_Query_columns_empty_0030', 0, async function (done) {
            console.info(TAG + '************* SUB_DDM_RelationalStore_Query_columns_empty_0030 start *************');
            //query
            let predicates = new data_Rdb.RdbPredicates("test");
            predicates.equalTo("name", "lisi");
            let promise = rdbStore.query(predicates);
            promise.then((resultSet) => {
                console.info(TAG + `query ResultSet rowCount = ` + resultSet.rowCount);
                expect(2).assertEqual(resultSet.rowCount)
                done();
            }).catch((err) => {
                console.info(TAG + `Failed to query; code is ${err.code},message is ${err.message}`);
                expect(null).assertFail();
                done();
            })
        })
        /**
         * @tc.name RelationalStore querySql test
         * @tc.number SUB_DDM_RelationalStore_QuerySql_Undefined_0010
         * @tc.desc RelationalStore querySql test
         */
        it('SUB_DDM_RelationalStore_QuerySql_Undefined_0010', 0, async function (done) {
            //querySql
            let querySqlPromise = rdbStore.querySql("SELECT * FROM test",undefined)
            querySqlPromise.then( (resultSet) => {
                console.info(TAG + `querySql ResultSet rowCount = ` + resultSet.rowCount);
                expect(3).assertEqual(resultSet.rowCount)
                done();
            }).catch((err) => {
                console.info(TAG + `Failed to querySql; code is ${err.code},message is ${err.message}`);
                expect(null).assertFail();
                done();
            })
        })
        /**
         * @tc.name RelationalStore querySql test
         * @tc.number SUB_DDM_RelationalStore_QuerySql_null_0020
         * @tc.desc RelationalStore querySql test
         */
        it('SUB_DDM_RelationalStore_QuerySql_null_0020', 0, async function (done) {
            //querySql
            let querySqlPromise = rdbStore.querySql("SELECT * FROM test",null)
            querySqlPromise.then( (resultSet) => {
                console.info(TAG + `querySql ResultSet rowCount = ` + resultSet.rowCount);
                expect(3).assertEqual(resultSet.rowCount)
                done();
            }).catch((err) => {
                console.info(TAG + `Failed to querySql; code is ${err.code},message is ${err.message}`);
                expect(null).assertFail();
                done();
            })
        })
        /**
         * @tc.name RelationalStore querySql test
         * @tc.number SUB_DDM_RelationalStore_QuerySql_empty_0030
         * @tc.desc RelationalStore querySql test
         */
        it('SUB_DDM_RelationalStore_QuerySql_empty_0030', 0, async function (done) {
            //querySql
            let querySqlPromise = rdbStore.querySql("SELECT * FROM test")
            querySqlPromise.then( (resultSet) => {
                console.info(TAG + `querySql ResultSet rowCount = ` + resultSet.rowCount);
                expect(3).assertEqual(resultSet.rowCount)
                done();
            }).catch((err) => {
                console.info(TAG + `Failed to querySql; code is ${err.code},message is ${err.message}`);
                expect(null).assertFail();
                done();
            })
        })

        console.info(TAG + '*************Unit Test End*************');
    })}
