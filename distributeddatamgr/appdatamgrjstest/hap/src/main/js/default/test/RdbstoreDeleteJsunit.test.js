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
import ohosDataRdb from '@ohos.data.rdb';

const TAG = "[RDB_JSKITS_TEST]"
const CREATE_TABLE_TEST = "CREATE TABLE IF NOT EXISTS test (" + "id INTEGER PRIMARY KEY AUTOINCREMENT, " + 
"name TEXT NOT NULL, " + "age INTEGER, " + "salary REAL, " + "blobType BLOB)";

const STORE_CONFIG = {
    name: "Delete.db",
}
var rdbStore = undefined;

describe('rdbStoreDeleteTest', function () {
    beforeAll(function () {
        console.info(TAG + 'beforeAll')
    })

    beforeEach(async function () {
        console.info(TAG + 'beforeEach')
        rdbStore = await ohosDataRdb.getRdbStore(STORE_CONFIG, 1);
        await rdbStore.executeSql(CREATE_TABLE_TEST, null);
    })

    afterEach(async function () {
        console.info(TAG + 'afterEach')
        await rdbStore.executeSql("DELETE FROM test");
        rdbStore = null
        await ohosDataRdb.deleteRdbStore("Delete.db");
    })

    afterAll(async function () {
        console.info(TAG + 'afterAll')
    })

    console.log(TAG + "*************Unit Test Begin*************");
    /**
     * @tc.name rdb delete test
     * @tc.number SUB_DDM_AppDataFWK_JSRDB_Delete_0010
     * @tc.desc rdb delete test
     */
    it('testRdbStoreDelete0001', 0, async function (done) {
        console.log(TAG + "************* testRdbStoreDelete0001 start *************");
        var u8 = new Uint8Array([1, 2, 3])
        {
            const valueBucket = {
                "name": "zhangsan",
                "age": 18,
                "salary": 100.5,
                "blobType": u8,
            }
            await rdbStore.insert("test", valueBucket)
        }
        {
            const valueBucket = {
                "name": "lisi",
                "age": 28,
                "salary": 100.5,
                "blobType": u8,
            }
            await rdbStore.insert("test", valueBucket)
        }
        {
            const valueBucket = {
                "name": "lisi",
                "age": 38,
                "salary": 100.5,
                "blobType": u8,
            }
            await rdbStore.insert("test", valueBucket)
        }
        //删除
        {
            let predicates = await new ohosDataRdb.RdbPredicates("test")
            let deletePromise = rdbStore.delete(predicates)
            deletePromise.then(async (ret) => {
                expect(3).assertEqual(ret)
                console.log(TAG + "Delete done: " + ret)
            }).catch((err) => {
                expect(null).assertFail()
            })
            await deletePromise
        }
        done()
        console.log(TAG + "************* testRdbStoreDelete0001 end *************");
    })

    /**
     * @tc.name rdb delete test
     * @tc.number SUB_DDM_AppDataFWK_JSRDB_Delete_0020
     * @tc.desc rdb delete test
     */
    it('testRdbStoreDelete0002', 0, async function (done) {
        console.log(TAG + "************* testRdbStoreDelete0002 start *************");
        var u8 = new Uint8Array([1, 2, 3])
        {
            const valueBucket = {
                "name": "zhangsan",
                "age": 18,
                "salary": 100.5,
                "blobType": u8,
            }
            await rdbStore.insert("test", valueBucket)
        }
        {
            const valueBucket = {
                "name": "lisi",
                "age": 28,
                "salary": 100.5,
                "blobType": u8,
            }
            await rdbStore.insert("test", valueBucket)
        }
        {
            const valueBucket = {
                "name": "lisi",
                "age": 38,
                "salary": 100.5,
                "blobType": u8,
            }
            await rdbStore.insert("test", valueBucket)
        }
        //删除
        {
            let predicates = await new ohosDataRdb.RdbPredicates("test")
            predicates.equalTo("name", "zhangsan")
            let deletePromise = rdbStore.delete(predicates)
            deletePromise.then(async (ret) => {
                await expect(1).assertEqual(ret)
                await console.log(TAG + "Delete done: " + ret)
            }).catch((err) => {
                expect(null).assertFail()
            })
            await deletePromise
        }
        done()
        console.log(TAG + "************* testRdbStoreDelete0002 end *************");
    })

    /**
     * @tc.name rdb delete test
     * @tc.number SUB_DDM_AppDataFWK_JSRDB_Delete_0030
     * @tc.desc rdb delete test
     */
    it('testRdbStoreDelete0003', 0, async function (done) {
        console.log(TAG + "************* testRdbStoreDelete0003 start *************");
        var u8 = new Uint8Array([1, 2, 3])
        {
            const valueBucket = {
                "name": "zhangsan",
                "age": 18,
                "salary": 100.5,
                "blobType": u8,
            }
            await rdbStore.insert("test", valueBucket)
        }
        {
            const valueBucket = {
                "name": "lisi",
                "age": 28,
                "salary": 100.5,
                "blobType": u8,
            }
            await rdbStore.insert("test", valueBucket)
        }
        //删除前查询
        {
            let predicates = await new ohosDataRdb.RdbPredicates("test")
            predicates.equalTo("age", 28)
            let resultSet = await rdbStore.query(predicates)
            expect(1).assertEqual(resultSet.rowCount)
        }
        //删除
        {
            let predicates = await new ohosDataRdb.RdbPredicates("test")
            predicates.equalTo("age", 28)
            let deletePromise = rdbStore.delete(predicates)
            deletePromise.then(async (ret) => {
                expect(1).assertEqual(ret)
                console.log(TAG + "Delete done: " + ret)
            }).catch((err) => {
                expect(null).assertFail()
            })
            await deletePromise
        }
        //删除后查询
        {
            let predicates = await new ohosDataRdb.RdbPredicates("test")
            predicates.equalTo("age", 28)
            let resultSet = await rdbStore.query(predicates)
            expect(0).assertEqual(resultSet.rowCount)
        }
        done()
        console.log(TAG + "************* testRdbStoreDelete0003 end *************");
    })

    /**
     * @tc.name rdb delete test
     * @tc.number SUB_DDM_AppDataFWK_JSRDB_Delete_0040
     * @tc.desc rdb delete test
     */
    it('testRdbStoreDelete0004', 0, async function (done) {
        console.log(TAG + "************* testRdbStoreDelete0004 start *************");
        var u8 = new Uint8Array([1, 2, 3])
        {
            const valueBucket = {
                "name": "zhangsan",
                "age": 18,
                "salary": 100.5,
                "blobType": u8,
            }
            await rdbStore.insert("test", valueBucket)
        }
        {
            const valueBucket = {
                "name": "lisi",
                "age": 28,
                "salary": 100.5,
                "blobType": u8,
            }
            await rdbStore.insert("test", valueBucket)
        }
        {
            const valueBucket = {
                "name": "lisi",
                "age": 38,
                "salary": 100.5,
                "blobType": u8,
            }
            await rdbStore.insert("test", valueBucket)
        }
        //删除
        {
            let predicates = await new ohosDataRdb.RdbPredicates("test")
            predicates.equalTo("aaa id", 1)
            let deletePromise = rdbStore.delete(predicates)
            deletePromise.then(async (ret) => {
                console.log(TAG + "delete done: " + ret)
                expect(null).assertFail()
            }).catch((err) => {
                console.log(TAG + "delete with wrong conditions")
            })
        }
        done()
        console.log(TAG + "************* testRdbStoreDelete0004 end *************");
    })

    /**
     * @tc.name rdb delete test
     * @tc.number SUB_DDM_AppDataFWK_JSRDB_Delete_0050
     * @tc.desc rdb delete test
     */
    it('testRdbStoreDelete0005', 0, async function (done) {
        console.log(TAG + "************* testRdbStoreDelete0005 start *************");
        var u8 = new Uint8Array([1, 2, 3])
        {
            const valueBucket = {
                "name": "zhangsan",
                "age": 18,
                "salary": 100.5,
                "blobType": u8,
            }
            await rdbStore.insert("test", valueBucket)
        }
        {
            const valueBucket = {
                "name": "lisi",
                "age": 28,
                "salary": 100.5,
                "blobType": u8,
            }
            await rdbStore.insert("test", valueBucket)
        }
        {
            const valueBucket = {
                "name": "lisi",
                "age": 38,
                "salary": 100.5,
                "blobType": u8,
            }
            await rdbStore.insert("test", valueBucket)
        }
        //删除
        {
            let predicates = await new ohosDataRdb.RdbPredicates("test")
            predicates.equalTo("name", "lisi")
            let deletePromise = rdbStore.delete(predicates)
            deletePromise.then(async (ret) => {
                expect(2).assertEqual(ret)
                console.log(TAG + "Delete done: " + ret)
            }).catch((err) => {
                expect(null).assertFail()
            })
            await deletePromise
        }
        done()
        console.log(TAG + "************* testRdbStoreDelete0005 end *************");
    })

    /**
     * @tc.name rdb delete test
     * @tc.number SUB_DDM_AppDataFWK_JSRDB_Delete_0060
     * @tc.desc rdb delete test
     */
    it('testRdbStoreDelete0006', 0, async function (done) {
        console.log(TAG + "************* testRdbStoreDelete0006 start *************");
        var u8 = new Uint8Array([1, 2, 3])
        {
            const valueBucket = {
                "name": "zhangsan",
                "age": 18,
                "salary": 100.5,
                "blobType": u8,
            }
            await rdbStore.insert("test", valueBucket)
        }
        {
            const valueBucket = {
                "name": "lisi",
                "age": 28,
                "salary": 100.5,
                "blobType": u8,
            }
            await rdbStore.insert("test", valueBucket)
        }
        {
            const valueBucket = {
                "name": "lisi",
                "age": 38,
                "salary": 100.5,
                "blobType": u8,
            }
            await rdbStore.insert("test", valueBucket)
        }
        //删除
        {
            let predicates = await new ohosDataRdb.RdbPredicates("")
            let deletePromise = rdbStore.delete(predicates)
            deletePromise.then(async (ret) => {
                console.log(TAG + "delete done: " + ret)
                expect(null).assertFail()
            }).catch((err) => {
                console.log(TAG + "delete with null")
            })
        }
        done()
        console.log(TAG + "************* testRdbStoreDelete0006 end *************");
    })


    /**
     * @tc.name rdb delete test
     * @tc.number SUB_DDM_AppDataFWK_JSRDB_Delete_0070
     * @tc.desc rdb delete test
     */

    it('testRdbStoreDelete0001', 0, async function (done) {
        console.log(TAG + '************* testRdbStoreDelete0001 start *************');
        var u8 = new Uint8Array([3, 4, 5])
        {
            const valueBucket = {
                'name': 'zhangsan',
                'age': 18,
                'salary': 100.5,
                'blobType': u8,
            }
            let insertPromise = await rdbStore.insert('test', valueBucket)
            await expect(1).assertEqual(insertPromise);
            await console.log(TAG + 'insert first done: ' + insertPromise);
        }
        {
            const valueBucket = {
                'name': 'lisi',
                'age': 18,
                'salary': 100.5,
                'blobType': u8,
            }
            let insertPromise = await rdbStore.insert('test', valueBucket)
            await expect(2).assertEqual(insertPromise);
            await console.log(TAG + 'insert second done: ' + insertPromise);
        }
        {
            const valueBucket = {
                'name': 'lisi',
                'age': 20,
                'salary': 100.5,
                'blobType': u8,
            }
            let insertPromise = await rdbStore.insert('test', valueBucket)
            await expect(3).assertEqual(insertPromise);
            await console.log(TAG + 'insert third done: ' + insertPromise);
        }
        let predicates = new ohosDataRdb.RdbPredicates('test');
        let resultSet = await rdbStore.query(predicates, ['id', 'name', 'age', 'salary', 'blobType']);
        try {
            let count = await rdbStore.delete(predicates);
            await expect(3).assertEqual(count);
            let result = await rdbStore.querySql('SELECT * FROM test', null);
            await expect(false).assertEqual(resultSet.goToFirstRow());
            await console.log('delete1 done ' + count);
        } catch (e) {
            await console.log('delete1 error ' + e);
        }
        done()
        console.log(TAG + '************* testRdbStoreDelete0001 end   *************');
    })

    /**
     * @tc.name rdb delete test
     * @tc.number SUB_DDM_AppDataFWK_JSRDB_Delete_0080
     * @tc.desc rdb delete test
     */

    it('testRdbStoreDelete0002', 0, async function (done) {
        console.log(TAG + '************* testRdbStoreDelete0002 start *************');
        var u8 = new Uint8Array([3, 4, 5])
        {
            const valueBucket = {
                'name': 'zhangsan',
                'age': 18,
                'salary': 100.5,
                'blobType': u8,
            }
            let insertPromise = await rdbStore.insert('test', valueBucket)
            await expect(4).assertEqual(insertPromise);
            await console.log(TAG + 'insert first done: ' + insertPromise);
        }
        {
            const valueBucket = {
                'name': 'lisi',
                'age': 18,
                'salary': 100.5,
                'blobType': u8,
            }
            let insertPromise = await rdbStore.insert('test', valueBucket)
            await expect(5).assertEqual(insertPromise);
            await console.log(TAG + 'insert second done: ' + insertPromise);
        }
        let predicates = new ohosDataRdb.RdbPredicates('test');
        let resultSet = await rdbStore.query(predicates, ['id', 'name', 'age', 'salary', 'blobType']);
        predicates.equalTo('id', '1')
        try {
            let count = await rdbStore.delete(predicates);
            await expect(0).assertEqual(count);
            await console.log('delete2 done ' + count);
            let result = await rdbStore.querySql('SELECT * FROM test', ['id', '1']);
            await expect(true).assertEqual(resultSet.goToFirstRow());
        } catch (e) {
            await console.log('delete2 error ' + e);
        }
        done();
        console.log(TAG + '************* testRdbStoreDelete0002 end   *************');
    })

    /**
     * @tc.name rdb delete test
     * @tc.number SUB_DDM_AppDataFWK_JSRDB_Delete_0090
     * @tc.desc rdb delete test
     */

    it('testRdbStoreDelete0003', 0, async function (done) {
        console.log(TAG + '************* testRdbStoreDelete0003 start *************');
        var u8 = new Uint8Array([3, 4, 5])
        {
            const valueBucket = {
                'name': 'zhangsan',
                'age': 18,
                'salary': 100.5,
                'blobType': u8,
            }
            let insertPromise = await rdbStore.insert('test', valueBucket)
            await expect(6).assertEqual(insertPromise);
            await console.log(TAG + 'insert first done: ' + insertPromise);
        }
        {
            const valueBucket = {
                'name': 'lisi',
                'age': 18,
                'salary': 100.5,
                'blobType': u8,
            }
            let insertPromise = await rdbStore.insert('test', valueBucket)
            await expect(7).assertEqual(insertPromise);
            await console.log(TAG + 'insert second done: ' + insertPromise);
        }
        let predicates = new ohosDataRdb.RdbPredicates('test1');
        predicates.equalTo('id', '1');
        try {
            let count = await rdbStore.delete(predicates);
            await console.log('delete3 done ' + count);
            await expect(null).assertFail();
        } catch (e) {
            await console.log('delete3 error ' + e);
        }
        done();
        console.log(TAG + '************* testRdbStoreDelete0003 end   *************');
    })

    /**
     * @tc.name rdb delete test
     * @tc.number SUB_DDM_AppDataFWK_JSRDB_Delete_00100
     * @tc.desc rdb delete test
     */

    it('testRdbStoreDelete0004', 0, async function (done) {
        console.log(TAG + '************* testRdbStoreDelete0004 start *************');
        var u8 = new Uint8Array([3, 4, 5])
        {
            const valueBucket = {
                'name': 'zhangsan',
                'age': 18,
                'salary': 100.5,
                'blobType': u8,
            }
            let insertPromise = await rdbStore.insert('test', valueBucket)
            await expect(8).assertEqual(insertPromise);
            await console.log(TAG + 'insert first done: ' + insertPromise);
        }
        {
            const valueBucket = {
                'name': 'lisi',
                'age': 18,
                'salary': 100.5,
                'blobType': u8,
            }
            let insertPromise = await rdbStore.insert('test', valueBucket)
            await expect(9).assertEqual(insertPromise);
            await console.log(TAG + 'insert second done: ' + insertPromise);
        }
        {
            const valueBucket = {
                'name': 'lisi',
                'age': 20,
                'salary': 100.5,
                'blobType': u8,
            }
            let insertPromise = await rdbStore.insert('test', valueBucket)
            await expect(10).assertEqual(insertPromise);
            await console.log(TAG + 'insert third done: ' + insertPromise);
        }
        let predicates = new ohosDataRdb.RdbPredicates('test1');
        predicates.equalTo('aaaid', '1');
        try {
            let count = await rdbStore.delete(predicates);
            await console.log('delete4 done ' + count);
            await expect(null).assertFail();
        } catch (e) {
            await console.log('delete4 error ' + e);
        }
        done();
        console.log(TAG + '************* testRdbStoreDelete0004 end   *************');
    })

    console.log(TAG + "*************Unit Test End*************");
})