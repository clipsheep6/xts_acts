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
import ability_featureAbility from '@ohos.ability.featureAbility';

const TAG = "[RDB_JSKITS_TEST]"
const CREATE_TABLE_TEST = "CREATE TABLE IF NOT EXISTS test (" + "id INTEGER PRIMARY KEY AUTOINCREMENT, " + "name TEXT NOT NULL, " + "age INTEGER, " + "salary REAL, " + "blobType BLOB)";

const STORE_CONFIG = {
    name: "InsertTest.db",
}

var rdbStore = undefined;
var context = undefined;

describe('rdbStoreInsertTest', function () {
    beforeAll(async function () {
        console.info(TAG + 'beforeAll')
        context = await ability_featureAbility.getContext();
        rdbStore = await ohos_data_rdb.getRdbStore(context, STORE_CONFIG, 1);
        await rdbStore.executeSql(CREATE_TABLE_TEST, null);
    })

    beforeEach(async function () {
        console.info(TAG + 'beforeEach')
        await rdbStore.executeSql("DELETE FROM test");
    })

    afterEach(async function () {
        console.info(TAG + 'afterEach')
    })

    afterAll(async function () {
        console.info(TAG + 'afterAll')
        rdbStore = null
        await ohos_data_rdb.deleteRdbStore(context, "InsertTest.db");
    })

    console.log(TAG + "*************Unit Test Begin*************");

    /**
     * @tc.name rdb insert test
     * @tc.number SUB_DDM_AppDataFWK_JSRDB_Insert_0010
     * @tc.desc rdb insert test
     */
    it('testRdbStoreInsert0001', 0, async function (done) {
        console.log(TAG + "************* testRdbStoreInsert0001 start *************");
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
                "age": 18,
                "salary": 100.5,
                "blobType": u8,
            }
            await rdbStore.insert("test", valueBucket)
        }
        {
            const valueBucket = {
                "name": "lisi",
                "age": 20,
                "salary": 100.5,
                "blobType": u8,
            }
            await rdbStore.insert("test", valueBucket)
        }

        let predicates = new ohos_data_rdb.RdbPredicates("test");
        predicates.equalTo("name", "zhangsan")
        let resultSet = await rdbStore.query(predicates)
        try {
            console.log(TAG + "resultSet query done");
            expect(true).assertEqual(resultSet.goToFirstRow())
            const id = resultSet.getLong(resultSet.getColumnIndex("id"))
            const name = resultSet.getString(resultSet.getColumnIndex("name"))
            const age = resultSet.getLong(resultSet.getColumnIndex("age"))
            const salary = resultSet.getDouble(resultSet.getColumnIndex("salary"))
            const blobType = resultSet.getBlob(resultSet.getColumnIndex("blobType"))
            console.log(TAG + "id=" + id + ", name=" + name + ", age=" + age + ", salary=" + salary + ", blobType=" + blobType);
            expect(1).assertEqual(id);
            expect("zhangsan").assertEqual(name)
            expect(18).assertEqual(age)
            expect(100.5).assertEqual(salary)
            expect(1).assertEqual(blobType[0])
            expect(2).assertEqual(blobType[1])
            expect(3).assertEqual(blobType[2])
            expect(false).assertEqual(resultSet.goToNextRow())
        } catch (e) {
            console.log("insert1 error " + e);
        }
        resultSet = null
        done()
        console.log(TAG + "************* testRdbStoreInsert0001 end *************");
    })

    /**
     * @tc.name rdb insert test
     * @tc.number SUB_DDM_AppDataFWK_JSRDB_Insert_0020
     * @tc.desc rdb insert test
     */
    it('testRdbStoreInsert0002', 0, async function (done) {
        console.log(TAG + "************* testRdbStoreInsert0002 start *************");
        var u8 = new Uint8Array([1, 2, 3])
        {
            const valueBucket = {
                "name": "zhangsan",
                "age": 18,
                "salary": 100.5,
                "blobType": u8,
            }
            let insertPromise = rdbStore.insert("wrong", valueBucket)
            insertPromise.then(async (ret) => {
                expect(1).assertEqual(ret)
                console.log(TAG + "insert first done: " + ret)
                expect(null).assertFail()
            }).catch((err) => {
                console.log(TAG + "insert with wrong table")
            })
        }
        done()
        console.log(TAG + "************* testRdbStoreInsert0002 end   *************");
    })

    /**
     * @tc.name rdb insert test
     * @tc.number SUB_DDM_AppDataFWK_JSRDB_Insert_0030
     * @tc.desc rdb insert test
     */
    it('testRdbStoreInsert0003', 0, async function (done) {
        console.log(TAG + "************* testRdbStoreInsert0003 start *************");
        var u8 = new Uint8Array([1, 2, 3])
        {
            const valueBucket = {
                "name": "zhangsan",
                "age": 18,
                "salary": 100.5,
                "blobType": u8,
            }
            let insertPromise = rdbStore.insert(null, valueBucket)
            insertPromise.then(async (ret) => {
                expect(1).assertEqual(ret)
                console.log(TAG + "insert first done: " + ret)
                expect(null).assertFail()
            }).catch((err) => {
                console.log(TAG + "insert with null table")
            })
        }
        done()
        console.log(TAG + "************* testRdbStoreInsert0003 end   *************");
    })

    /**
     * @tc.name rdb insert test
     * @tc.number SUB_DDM_AppDataFWK_JSRDB_Insert_0040
     * @tc.desc rdb insert test
     */

    it('testRdbStoreInsert0004', 0, async function (done) {
        console.log(TAG + '************* testRdbStoreInsert0004 start *************');
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
        let resultSet = await rdbStore.querySql('SELECT * FROM test WHERE name=?', ['zhangsan']);
        let predicates = new ohosDataRdb.RdbPredicates('test');
        try {
            await console.log(TAG + 'resultSet query done');
            await expect(true).assertEqual(resultSet.goToFirstRow())
            const id = await resultSet.getLong(await resultSet.getColumnIndex('id'))
            const name = await resultSet.getString(await resultSet.getColumnIndex('name'))
            const age = await resultSet.getLong(await resultSet.getColumnIndex('age'))
            const salary = await resultSet.getDouble(await resultSet.getColumnIndex('salary'))
            const blobType = await resultSet.getBlob(await resultSet.getColumnIndex('blobType'))
            console.log(TAG + '{id=' + id + ', name=' + name + ', age=' + age + ', salary='
            + salary + ', blobType=' + blobType);
            expect(1).assertEqual(id);
            expect('zhangsan').assertEqual(name);
            expect(18).assertEqual(age);
            expect(100.5).assertEqual(salary);
            expect(4).assertEqual(blobType[1]);
            expect(false).assertEqual(resultSet.goToNextRow())
            console.log(TAG + 'resultSet goToNextRow done');
            expect(5).assertEqual(resultSet.columnCount)
            console.log('resultSet columnCount done');
            let columnnames = resultSet.columnNames
            console.log('columnnames' + columnnames);
        } catch (e) {
            await console.log('insert1 error ' + e);
        }
        done()
        console.log(TAG + '************* testRdbStoreDelete0004 end   *************');
    })

    /**
     * @tc.name rdb insert test
     * @tc.number SUB_DDM_AppDataFWK_JSRDB_Insert_0050
     * @tc.desc rdb insert test
     */

    it('testRdbStoreInsert0005', 0, async function (done) {
        console.log(TAG + '************* testRdbStoreInsert0005 start *************');
        try {
            let insertPromise = await rdbStore.insert('test', null)
            await console.log(TAG + 'insert first done: ' + insertPromise);
            await expect(null).assertFail();
        } catch (e) {
            await console.log('insert2 error ' + e);
        }
        done()
        console.log(TAG + '************* testRdbStoreInsert0005 end   *************');
    })

    /**
     * @tc.name rdb insert test
     * @tc.number SUB_DDM_AppDataFWK_JSRDB_Insert_0060
     * @tc.desc rdb insert test
     */

    it('testRdbStoreInsert0006', 0, async function (done) {
        console.log(TAG + '************* testRdbStoreInsert0006 start *************');
        try {
            const valueBucket = {
                'name': 'zhangsan',
                'age': 18,
                'salary': 100.5,
            }
            let insertPromise = await rdbStore.insert(null, valueBucket)
            await expect(null).assertFail();
        } catch (e) {
            await console.log('delete1 error ' + e);
        }
        done()
        console.log(TAG + '************* testRdbStoreDelete0006 end   *************');
    })

    /**
     * @tc.name rdb insert test
     * @tc.number SUB_DDM_AppDataFWK_JSRDB_Insert_0070
     * @tc.desc rdb insert test
     */

    it('testRdbStoreInsert0007', 0, async function (done) {
        console.log(TAG + '************* testRdbStoreInsert0007 start *************');
        try {
            const valueBucket = {
                'name': 'zhangsan',
                'age': 18,
                'salary': 100.5,
            }
            let insertPromise = await rdbStore.insert('tests', valueBucket)
            await expect(null).assertFail();
        } catch (e) {
            await console.log('delete1 error ' + e);
        }
        done()
        console.log(TAG + '************* testRdbStoreDelete0007 end   *************');
    })

    console.log(TAG + "*************Unit Test End*************");
})