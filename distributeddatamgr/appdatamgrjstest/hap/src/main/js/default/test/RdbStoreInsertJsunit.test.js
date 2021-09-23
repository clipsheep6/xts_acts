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
const CREATE_TABLE_TEST = "CREATE TABLE IF NOT EXISTS test (" + "id INTEGER PRIMARY KEY AUTOINCREMENT, " + "name TEXT NOT NULL, " + "age INTEGER, " + "salary REAL, " + "blobType BLOB)";
const STORE_CONFIG = {
    name: "insert.db",
}
var rdbStore = undefined;
describe('rdbStoreInsertTest', function () {
    beforeAll(async function () {
        console.info(TAG + 'beforeAll' + STORE_CONFIG.storageMode)
        rdbStore = await ohos_data_rdb.getRdbStore(STORE_CONFIG, 1);
        await rdbStore.executeSql(CREATE_TABLE_TEST, null);
    })
    beforeEach(function () {
        console.info(TAG + 'beforeEach')
    })
    afterEach(function () {
        console.info(TAG + 'afterEach')
    })
    afterAll(async function () {
        console.info(TAG + 'afterAll')
        rdbStore = null
        await ohos_data_rdb.deleteRdbStore("insert.db");
    })
    /**
     * @tc.name RdbStore Insert interface test
     * @tc.number SUB_DDM_AppDataFWK_JSRdbStore_0010
     * @tc.desc RdbStore Insert interface test
     */
    it('testRdbStoreInsert0001', 0, async function (done) {
        console.log(TAG + "************* testRdbStoreInsert0001 start *************");
        var u8 = new Uint8Array([3, 4, 5])
        {
            const valueBucket = {
                "name": "zhangsan",
                "age": 18,
                "salary": 100.5,
                "blobType": u8,
            }
            let insertPromise = await rdbStore.insert("test", valueBucket)
            await expect(1).assertEqual(insertPromise);
            await console.log(TAG + "insert first done: " + insertPromise);
        }
        {
            const valueBucket = {
                "name": "lisi",
                "age": 18,
                "salary": 100.5,
                "blobType": u8,
            }
            let insertPromise = await rdbStore.insert("test", valueBucket)
            await expect(2).assertEqual(insertPromise);
            await console.log(TAG + "insert second done: " + insertPromise);

        }
        {
            const valueBucket = {
                "name": "lisi",
                "age": 20,
                "salary": 100.5,
                "blobType": u8,
            }
            let insertPromise = await rdbStore.insert("test", valueBucket)
            await expect(3).assertEqual(insertPromise);
            await console.log(TAG + "insert third done: " + insertPromise);

        }
        let resultSet = await rdbStore.querySql("SELECT * FROM test WHERE name=?", ["zhangsan"]);
        let predicates = new ohos_data_rdb.RdbPredicates("test");
        try {
            await console.log(TAG + "resultSet query done");
            await expect(true).assertEqual(resultSet.goToFirstRow())
            const id = await resultSet.getLong(await resultSet.getColumnIndex("id"))
            const name = await resultSet.getString(await resultSet.getColumnIndex("name"))
            const age = await resultSet.getLong(await resultSet.getColumnIndex("age"))
            const salary = await resultSet.getDouble(await resultSet.getColumnIndex("salary"))
            const blobType = await resultSet.getBlob(await resultSet.getColumnIndex("blobType"))
            console.log(TAG + "{id=" + id + ", name=" + name + ", age=" + age + ", salary=" + salary + ", blobType=" + blobType);
            expect(1).assertEqual(id);
            expect("zhangsan").assertEqual(name);
            expect(18).assertEqual(age);
            expect(100.5).assertEqual(salary);
            expect(4).assertEqual(blobType[1]);
            expect(false).assertEqual(resultSet.goToNextRow())
            console.log(TAG + "resultSet goToNextRow done");
            expect(5).assertEqual(resultSet.columnCount)
            console.log("resultSet columnCount done");
            columnnames = resultSet.columnNames
            console.log('columnnames' + columnnames);
        } catch (e) {
            await console.log("insert1 error " + e);
        }
        done()
        console.log(TAG + "************* testRdbStoreDelete0001 end   *************");
    })

    /**
     * @tc.name RdbStore Insert interface test
     * @tc.number SUB_DDM_AppDataFWK_JSRdbStore_0020
     * @tc.desc RdbStore Insert interface test
     */
    it('testRdbStoreInsert0002', 0, async function (done) {
        console.log(TAG + "************* testRdbStoreInsert0002 start *************");
        try {
            let insertPromise = await rdbStore.insert("test", null)
            await console.log(TAG + "insert first done: " + insertPromise);
            await expect(null).assertFail();
        } catch (e) {
            await console.log("insert2 error " + e);
        }
        done()
        console.log(TAG + "************* testRdbStoreInsert0002 end   *************");
    })

    /**
     * @tc.name RdbStore Insert interface test
     * @tc.number SUB_DDM_AppDataFWK_JSRdbStore_0030
     * @tc.desc RdbStore Insert interface test
     */
    it('testRdbStoreInsert0003', 0, async function (done) {
        console.log(TAG + "************* testRdbStoreInsert0003 start *************");
        try {
            const valueBucket = {
                "name": "zhangsan",
                "age": 18,
                "salary": 100.5,
            }
            let insertPromise = await rdbStore.insert(null, valueBucket)
            await expect(null).assertFail();
        } catch (e) {
            await console.log("delete1 error " + e);
        }
        done()
        console.log(TAG + "************* testRdbStoreDelete0003 end   *************");
    })

    /**
     * @tc.name RdbStore Insert interface test
     * @tc.number SUB_DDM_AppDataFWK_JSRdbStore_0040
     * @tc.desc RdbStore Insert interface test
     */
    it('testRdbStoreInsert0004', 0, async function (done) {
        console.log(TAG + "************* testRdbStoreInsert0004 start *************");
        try {
            const valueBucket = {
                "name": "zhangsan",
                "age": 18,
                "salary": 100.5,
            }
            let insertPromise = await rdbStore.insert("tests", valueBucket)
            await expect(null).assertFail();
        } catch (e) {
            await console.log("delete1 error " + e);
        }
        done()
        console.log(TAG + "************* testRdbStoreDelete0004 end   *************");
    })
})