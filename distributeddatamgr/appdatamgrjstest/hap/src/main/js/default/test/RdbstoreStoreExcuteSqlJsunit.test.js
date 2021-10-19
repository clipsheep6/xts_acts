/*
 * Copyright (C) 2021 Huawei Device Co., Ltd.
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
import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from 'deccjsunit/index'
import ohos_data_rdb from '@ohos.data.rdb';

const TAG = "[RDB_JSKITS_TEST]"
const CREATE_TABLE_TEST = "CREATE TABLE IF NOT EXISTS test (" + "id INTEGER PRIMARY KEY AUTOINCREMENT, " + "name NOT NULL, " + "age INTEGER, " + "salary REAL, " + "blobType BLOB)";

const STORE_CONFIG = {
    name: "ExcuteSqlTest.db",
}
var rdbStore = undefined;

describe('rdbStoreInsertTest', function () {
    beforeAll(async function () {
        console.info(TAG + 'beforeAll')
        rdbStore = await ohos_data_rdb.getRdbStore(STORE_CONFIG, 1);
        await rdbStore.executeSql(CREATE_TABLE_TEST, null);
    })

    beforeEach(async function () {
        await rdbStore.executeSql("DELETE FROM test");
        console.info(TAG + 'beforeEach')
    })

    afterEach(function () {
        console.info(TAG + 'afterEach')
    })

    afterAll(async function () {
        console.info(TAG + 'afterAll')
        rdbStore = null
        await ohos_data_rdb.deleteRdbStore("ExcuteSqlTest.db");
    })

    /**
     * @tc.name resultSet ExcuteSql normal test
     * @tc.number SUB_DDM_AppDataFWK_JSRDB_ExcuteSql_0010
     * @tc.desc resultSet ExcuteSql normal test
     */
    it('ExcuteSqlTest0001', 0, async function (done) {
        console.log(TAG + "************* ExcuteSqlTest0001 start *************");
        var u8 = new Uint8Array([1, 2, 3])
        //插入
        {
            const valueBucket = {
                "name": "zhangsan",
                "age": 18,
                "salary": 100.5,
                "blobType": u8,
            }
            let insertPromise = rdbStore.insert("test", valueBucket)
            insertPromise.then(async (ret) => {
                expect(1).assertEqual(ret);
                await console.log(TAG + "insert done: " + ret);
            }).catch((err) => {
                expect(null).assertFail();
            })
            await insertPromise
        }
        {
            const valueBucket = {
                "name": "lisi",
                "age": 18,
                "salary": 100.5,
                "blobType": u8,
            }
            let insertPromise = rdbStore.insert("test", valueBucket)
            insertPromise.then(async (ret) => {
                expect(2).assertEqual(ret);
                await console.log(TAG + "insert done: " + ret);
            }).catch((err) => {
                expect(null).assertFail();
            })
            await insertPromise
        }
        {
            const valueBucket = {
                "name": "lisi",
                "age": 20,
                "salary": 100.5,
                "blobType": u8,
            }
            let insertPromise = rdbStore.insert("test", valueBucket)
            insertPromise.then(async (ret) => {
                expect(3).assertEqual(ret);
                await console.log(TAG + "insert done: " + ret);
            }).catch((err) => {
                expect(null).assertFail();
            })
            await insertPromise
        }
        //sql删除
        {
            let executeSqlPromise = rdbStore.executeSql("DELETE FROM test WHERE age = ? OR age = ?", ["18", "20"])
            executeSqlPromise.then(async (resultSet) => {
                await console.log(TAG + "executeSql done: " + resultSet);
            }).catch((err) => {
                expect(null).assertFail();
            })
            await executeSqlPromise
        }
        {
            let querySqlPromise = rdbStore.querySql("SELECT * FROM test")
            querySqlPromise.then(async (resultSet) => {
                await expect(0).assertEqual(resultSet.rowCount)
            }).catch((err) => {
                expect(null).assertFail();
            })
            await querySqlPromise
        }
        done();
        console.log(TAG + "************* ExcuteSqlTest0001 end   *************");
    })

    /**
     * @tc.name resultSet ExcuteSql normal test
     * @tc.number SUB_DDM_AppDataFWK_JSRDB_ExcuteSql_0020
     * @tc.desc resultSet ExcuteSql normal test
     */
    it('ExcuteSqlTest0002', 0, async function (done) {
        console.log(TAG + "************* ExcuteSqlTest0002 start *************");
        var u8 = new Uint8Array([2, 3, 4])
        //插入
        {
            const valueBucket = {
                "name": "zhangsan",
                "age": 18,
                "salary": 100.5,
                "blobType": u8,
            }
            let insertPromise = rdbStore.insert("test", valueBucket)
            insertPromise.then(async (ret) => {
                expect(4).assertEqual(ret);
                await console.log(TAG + "insert done: " + ret);
            }).catch((err) => {
                expect(null).assertFail();
            })
            await insertPromise
        }
        {
            const valueBucket = {
                "name": "lisi",
                "age": 19,
                "salary": 100.5,
                "blobType": u8,
            }
            let insertPromise = rdbStore.insert("test", valueBucket)
            insertPromise.then(async (ret) => {
                expect(5).assertEqual(ret);
                await console.log(TAG + "insert done: " + ret);
            }).catch((err) => {
                expect(null).assertFail();
            })
            await insertPromise
        }
        {
            const valueBucket = {
                "name": "lisi",
                "age": 20,
                "salary": 100.5,
                "blobType": u8,
            }
            let insertPromise = rdbStore.insert("test", valueBucket)
            insertPromise.then(async (ret) => {
                expect(6).assertEqual(ret);
                await console.log(TAG + "insert done: " + ret);
            }).catch((err) => {
                expect(null).assertFail();
            })
            await insertPromise
        }
        {
            let executeSqlPromise = rdbStore.executeSql("DELETE FROM test WHERE name = 'lisi'")
            executeSqlPromise.then(async () => {
                await console.log(TAG + "executeSql done");
            }).catch((err) => {
                expect(null).assertFail();
            })
            await executeSqlPromise
        }
        {
            let querySqlPromise = rdbStore.querySql("SELECT * FROM test")
            querySqlPromise.then(async (resultSet) => {
                await expect(1).assertEqual(resultSet.rowCount)
            }).catch((err) => {
                expect(null).assertFail();
            })
            await querySqlPromise
        }
        done();
        console.log(TAG + "************* ExcuteSqlTest0002 end   *************");
    })

    /**
     * @tc.name resultSet ExcuteSql normal test
     * @tc.number SUB_DDM_AppDataFWK_JSRDB_ExcuteSql_0030
     * @tc.desc resultSet ExcuteSql normal test
     */
    it('ExcuteSqlTest0003', 0, async function (done) {
        console.log(TAG + "************* ExcuteSqlTest0003 start *************");
        var u8 = new Uint8Array([3, 4, 5])
        //插入
        {
            const valueBucket = {
                "name": "zhangsan",
                "age": 18,
                "salary": 100.5,
                "blobType": u8,
            }
            let insertPromise = rdbStore.insert("test", valueBucket)
            insertPromise.then(async (ret) => {
                expect(7).assertEqual(ret);
                await console.log(TAG + "insert done: " + ret);
            }).catch((err) => {
                expect(null).assertFail();
            })
            await insertPromise
        }
        {
            const valueBucket = {
                "name": "lisi",
                "age": 19,
                "salary": 100.5,
                "blobType": u8,
            }
            let insertPromise = rdbStore.insert("test", valueBucket)
            insertPromise.then(async (ret) => {
                expect(8).assertEqual(ret);
                await console.log(TAG + "insert done: " + ret);
            }).catch((err) => {
                expect(null).assertFail();
            })
            await insertPromise
        }
        {
            const valueBucket = {
                "name": "lisi",
                "age": 28,
                "salary": 100.5,
                "blobType": u8,
            }
            let insertPromise = rdbStore.insert("test", valueBucket)
            insertPromise.then(async (ret) => {
                expect(9).assertEqual(ret);
                await console.log(TAG + "insert done: " + ret);
            }).catch((err) => {
                expect(null).assertFail();
            })
            await insertPromise
        }
        {
            let QuerySqlPromise = rdbStore.executeSql("DROP TABLE IF EXISTS test")
            QuerySqlPromise.then(async (resultSet) => {
                await console.log(TAG + "executeSql done: " + resultSet);
            }).catch((err) => {
                expect(null).assertFail();
            })
            await QuerySqlPromise
        }
        done();
        console.log(TAG + "************* ExcuteSqlTest0003 end   *************");
    })

    /**
     * @tc.name resultSet ExcuteSql normal test
     * @tc.number SUB_DDM_AppDataFWK_JSRDB_ExcuteSql_0031
     * @tc.desc resultSet ExcuteSql normal test
     */

    it('testRdbStoreExecuteSql001', 0, async function (done) {
        console.log(TAG + '*********** testRdbStoreExecuteSql001 start *********');
        {
            let u8 = new Uint8Array([1, 2, 3]);
            let ValuesBucket = {
                'name': ' zhangsan',
                'age': 18,
                'salary': 100.5,
                'blobType': u8
            }
            let insertPromise = await rdbStore.insert('test', ValuesBucket);
            await console.log(TAG + 'insert001 first done' + insertPromise)
            await expect(1).assertEqual(insertPromise);
        }
        rdbStore.version = 3;
        await console.log(TAG + 'version done');
        let predicates = new ohosDataRdb.RdbPredicates('test');
        predicates.equalTo('id', '1');
        let resultSet = await rdbStore.query(predicates, ['id', 'name', 'age', 'salary', 'blobType'])
        await console.log(TAG + 'predicates done');
        await rdbStore.executeSql('SELECT * FROM test WHERE name = ?', ['zhangsan']);
        await console.log(TAG + 'executeSql01 done');
        await expect(true).assertEqual(resultSet.goToFirstRow());
        await expect(false).assertEqual(resultSet.goToNextRow());
        let versionValues = rdbStore.version;
        await console.log('version001' + versionValues);
        await expect(0).assertEqual(versionValues);
        await console.log(TAG + 'test001 done');
        done();
        await console.log(TAG + '************* testRdbStoreExecuteSql001 end ***********');
    })

    /**
     * @tc.name resultSet ExcuteSql normal test
     * @tc.number SUB_DDM_AppDataFWK_JSRDB_ExcuteSql_0032
     * @tc.desc resultSet ExcuteSql normal test
     */

    it('testRdbStoreExecuteSql002', 0, async function (done) {
        console.log(TAG + '*********** testRdbStoreExecuteSql002 start *********');
        {
            let u8 = new Uint8Array([1, 2, 3]);
            let ValuesBucket = {
                'name': ' zhangsan',
                'age': 18,
                'salary': 100.5,
                'blobType': u8
            }
            let insertPromise = await rdbStore.insert('test', ValuesBucket);
            await expect(2).assertEqual(insertPromise);
            await console.log(TAG + 'insert001 first done' + insertPromise)
        }
        rdbStore.version = -1;
        await rdbStore.executeSql('DELETE FROM test WHERE age = ? OR age= ?', ['25', '30']);
        await console.log(TAG + 'executeSql02 done');
        let predicates = new ohosDataRdb.RdbPredicates('test');
        let resultSet = await rdbStore.query(predicates, ['id', 'name', 'age', 'salary', 'blobType']);
        let number = await rdbStore.count(predicates);
        await expect(2).assertEqual(number);
        await expect(true).assertEqual(resultSet.goToFirstRow());
        await expect(true).assertEqual(resultSet.goToNextRow());
        await console.log('executeSql002 end');
        let versionValues = rdbStore.version;
        await expect(0).assertEqual(versionValues);
        await console.log(TAG + 'test002 done');
        done();
        await console.log(TAG + '*************testRdbStoreExecuteSql002 end ***********');
    })

    /**
     * @tc.name resultSet ExcuteSql normal test
     * @tc.number SUB_DDM_AppDataFWK_JSRDB_ExcuteSql_0033
     * @tc.desc resultSet ExcuteSql normal test
     */

    it('testRdbStoreExecuteSql003', 0, async function (done) {
        console.log(TAG + '*********** testRdbStoreExecuteSql003 start *********');
        {
            let u8 = new Uint8Array([1, 2, 3]);
            let ValuesBucket = {
                'name': ' zhangsan',
                'age': 18,
                'salary': 100.5,
                'blobType': u8
            }
            let insertPromise = await rdbStore.insert('test', ValuesBucket);
            await expect(3).assertEqual(insertPromise);
            await console.log(TAG + 'insert001 first done' + insertPromise)
        }
        rdbStore.version = '1';
        let versionValues = rdbStore.version;
        await console.log('version003' + versionValues);
        await rdbStore.executeSql('DELETE FROM test WHERE age = ? OR age= ?', ['']);
        await console.log(TAG + 'test003 done');
        done();
        await console.log(TAG + '*************testRdbStoreExecuteSql003 end ***********');
    })

    /**
     * @tc.name resultSet ExcuteSql normal test
     * @tc.number SUB_DDM_AppDataFWK_JSRDB_ExcuteSql_0034
     * @tc.desc resultSet ExcuteSql normal test
     */

    it('testRdbStoreExecuteSql004', 0, async function (done) {
        console.log(TAG + '*********** testRdbStoreExecuteSql004 start *********');
        let statement = rdbStore.executeSql('DELETE FROM test WHERE age = ? OR age= ?', null);
        await console.log(TAG + 'test004 done' + statement);
        rdbStore.version = '';
        let versionValues = rdbStore.version;
        done();
        await console.log(TAG + '************* testRdbStoreExecuteSql004 end ***********');
    })

    console.log(TAG + "*************Unit Test End*************");
})