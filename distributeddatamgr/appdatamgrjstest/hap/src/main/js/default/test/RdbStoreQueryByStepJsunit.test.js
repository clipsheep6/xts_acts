/*
 * Copyright (C) 2021 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the 'License');
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an 'AS IS' BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from 'deccjsunit/index'
import ohosDataRdb from '@ohos.data.rdb';

const TAG = '[RDB_JSKITS_TEST]'
const createTableTest = 'CREATE TABLE IF NOT EXISTS test(' + 'id INTEGER PRIMARY KEY AUTOINCREMENT,'
+ 'name NOT NULL,' + 'age INTER,' + 'salary REAL,' + 'blobType BLOB)';
const STORE_CONFIG = {
    name: 'queryByStepTest.db'
}
var rdbStore = undefined;
describe('RdbStoreQueryByStepTest', function () {
    beforeAll(async function () {
        console.info(TAG + 'beforeAll' + STORE_CONFIG.storageMode)
        rdbStore = await ohosDataRdb.getRdbStore(STORE_CONFIG, 1);
        await rdbStore.executeSql(createTableTest, null);
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
        await ohosDataRdb.deleteRdbStore('queryByStepTest.db');
    })

    /*
     * @tc.name RdbStore queryByStep interface test
     * @tc.number SUB_DDM_AppDataFWK_JSRdbStore_0010
     * @tc.desc RdbStore queryByStep interface test
     */

    it('testRdbStoreQueryByStep001', 0, async function (done) {
        var u8 = new Uint8Array([3, 4, 5])
        console.log(TAG + '**********testRdbStoreQueryByStep001 start*********');
        {
            const ValuesBucket = {
                'name': 'zhangsan',
                'age': 18,
                'salary': 100.5,
                'blobType': u8,
            }
            let insertPromise = await rdbStore.insert('test', ValuesBucket)
            await expect(1).assertEqual(insertPromise);
            await console.log(TAG + 'insert first done: ' + insertPromise);
        }
        {
            const ValuesBucket = {
                'name': 'lisi',
                'age': 18,
                'salary': 100.5,
                'blobType': u8,
            }
            let insertPromise = await rdbStore.insert('test', ValuesBucket)
            await expect(2).assertEqual(insertPromise);
            await console.log(TAG + 'insert second done: ' + insertPromise);
        }
        {
            const ValuesBucket = {
                'name': 'lisi',
                'age': 20,
                'salary': 100.5,
                'blobType': u8,
            }
            let insertPromise = await rdbStore.insert('test', ValuesBucket)
            await expect(3).assertEqual(insertPromise);
            await console.log(TAG + 'insert third done: ' + insertPromise);
        }
        let predicates = new ohosDataRdb.RdbPredicates('test')
        predicates.equalTo('name', 'zhangsan')
        let resultSet = await rdbStore.query(predicates, ['id', 'name', 'age', 'salary', 'blobType']);
        await expect(true).assertEqual(resultSet.goToFirstRow())
        try {
            let obj = await rdbStore.queryByStep('SELECT * FROM test WHERE name=?', ['zhangsan']);
            await console.log(TAG + 'queryByStep done ' + obj);
            await expect(true).assertEqual(resultSet.goToFirstRow());
            const id = await resultSet.getLong(await resultSet.getColumnIndex('id'))
            const name = await resultSet.getString(await resultSet.getColumnIndex('name'))
            const age = await resultSet.getLong(await resultSet.getColumnIndex('age'))
            const salary = await resultSet.getDouble(await resultSet.getColumnIndex('salary'))
            const blobType = await resultSet.getBlob(await resultSet.getColumnIndex('blobType'))
            await console.log(TAG + '{id=' + id + ', name=' + name + ', age='
            + age + ', salary=' + salary + ', blobType=' + blobType);
            await expect(1).assertEqual(id);
            await expect('zhangsan').assertEqual(name);
            await expect(18).assertEqual(age);
            await expect(100.5).assertEqual(salary);
            await expect(4).assertEqual(blobType[1]);
            await expect(false).assertEqual(resultSet.goToNextRow());
        } catch (e) {
            await console.log(TAG + 'queryByStep err ' + e);
        }
        done();
        console.log(TAG + '****************testRdbStoreQueryByStep001 end****************');
    })

    /*
     * @tc.name RdbStore queryByStep interface test
     * @tc.number SUB_DDM_AppDataFWK_JSRdbStore_0020
     * @tc.desc RdbStore queryByStep interface test
     */

    it('testRdbStoreQueryByStep002', 0, async function (done) {
        console.log(TAG + '**********testRdbStoreQueryByStep002 start*********');
        {
            let u8 = new Uint8Array([1, 2, 3]);
            let ValuesBucket = {
                'name': 'lisi',
                'age': 20,
                'salary': 100.5,
                'blobType': u8,
            };
            let insertPromise = await rdbStore.insert('test', ValuesBucket);
            await expect(4).assertEqual(insertPromise);
        }
        let predicates = new ohosDataRdb.RdbPredicates('test')
        predicates.equalTo('name', 'lisi')
        let resultSet = await rdbStore.query(predicates, ['id', 'name', 'age', 'salary', 'blobType']);
        await expect(true).assertEqual(resultSet.goToFirstRow())
        try {
            let number = await rdbStore.queryByStep('DELETE FROM test WHERE name = ?', ['lisi']);
            await console.log(TAG + 'queryByStep2 done ' + number);
            await expect().assertEqual(number);
        } catch (e) {
            await console.log(TAG + 'queryByStep2 error ' + e);
        }
        done();
        console.log(TAG + '****************testRdbStoreQueryByStep002 end****************');
    })

    /*
     * @tc.name RdbStore queryByStep interface test
     * @tc.number SUB_DDM_AppDataFWK_JSRdbStore_0030
     * @tc.desc RdbStore queryByStep interface test
     */

    it('testRdbStoreQueryByStep003', 0, async function (done) {
        console.log(TAG + '**********testRdbStoreQueryByStep003 start*********');
        {
            let u8 = new Uint8Array([1, 2, 3]);
            let ValuesBucket = {
                'name': 'zhangsan',
                'age': 18,
                'salary': 100.5,
                'blobType': u8,
            };
            let insertPromise = await rdbStore.insert('test', ValuesBucket);
            await expect(5).assertEqual(insertPromise);
        }
        {
            let u8 = new Uint8Array([1, 2, 3]);
            let ValuesBucket = {
                'name': 'lisi',
                'age': 18,
                'salary': 100.5,
                'blobType': u8,
            };
            let insertPromise = await rdbStore.insert('test', ValuesBucket);
            await expect(6).assertEqual(insertPromise);
        }
        {
            let u8 = new Uint8Array([1, 2, 3]);
            let ValuesBucket = {
                'name': 'lisi',
                'age': 20,
                'salary': 100.5,
                'blobType': u8,
            };
            let insertPromise = await rdbStore.insert('test', ValuesBucket);
            await expect(7).assertEqual(insertPromise);
        }
        let predicates = new ohosDataRdb.RdbPredicates('test')
        predicates.equalTo('age', 20);
        let resultSet = await rdbStore.query(predicates, ['id', 'name', 'age', 'salary', 'blobType']);
        await expect(true).assertEqual(resultSet.goToFirstRow())
        try {
            let number = await rdbStore.queryByStep('SELECT * FROM testnew WHERE name=?', ['wangwu']);
            await console.log(TAG + 'queryByStep3 done ' + number);
        } catch (e) {
            await console.log(TAG + 'queryByStep3 error ' + e);
        }
        done();
        console.log(TAG + '****************testRdbStoreQueryByStep003 end****************');
    })

    /*
     * @tc.name RdbStore queryByStep interface test
     * @tc.number SUB_DDM_AppDataFWK_JSRdbStore_0040
     * @tc.desc RdbStore queryByStep interface test
     */

    it('testRdbStoreQueryByStep004', 0, async function (done) {
        console.log(TAG + '**********testRdbStoreQueryByStep004 start*********');
        {
            let u8 = new Uint8Array([1, 2, 3]);
            let ValuesBucket = {
                'name': 'zhangsan',
                'age': 18,
                'salary': 100.5,
                'blobType': u8,
            };
            let insertPromise = await rdbStore.insert('test', ValuesBucket);
            await expect(8).assertEqual(insertPromise);
        }
        try {
            let number = await rdbStore.queryByStep(null, ['zhangsan']);
            await console.log(TAG + 'queryByStep4 done ' + number);
        } catch (e) {
            await console.log(TAG + 'queryByStep4 error ' + e);
        }
        done();
        console.log(TAG + '****************testRdbStoreQueryByStep004 end****************');
    })
    console.log(TAG + '*************Unit Test End*************');
})


