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
    name: 'rdbStoreTest.db'
}
var rdbStore = undefined;
describe('RdbStoreAddAttachTest', function () {
    beforeAll(async function () {
        console.info(TAG + 'beforeAll' + STORE_CONFIG.storageMode)
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
    })

    /*
     * @tc.name RdbStore RdbStore interface test
     * @tc.number SUB_DDM_AppDataFWK_JSRdbStore_0010
     * @tc.desc RdbStore RdbStore interface test
     */

    it('testRdbStore001', 0, async function (done) {
        var u8 = new Uint8Array([1, 2, 3])
        console.log(TAG + '**********testRdbStore001 start*********');
        try {
            rdbStore = await ohosDataRdb.getRdbStore(STORE_CONFIG, 1);
            await rdbStore.executeSql(createTableTest, null);
            var u8 = new Uint8Array([1, 2, 3]);
            let predicates = new ohosDataRdb.RdbPredicates('test');
            const valueBucket = {
                'name': 'zhangsan',
                'age': 18,
                'salary': 100.5,
                'blobType': u8,
            }
            let insertPromise = await rdbStore.insert('test', valueBucket);
            await console.log('insert1 done' + insertPromise);
            await expect(1).assertEqual(insertPromise);
            predicates.equalTo('name', 'zhangsan')
            let resultSet = await rdbStore.query(predicates, ['id', 'name', 'age', 'salary', 'blobType']);
            await expect(true).assertEqual(resultSet.goToFirstRow());
            let count = await rdbStore.count(predicates);
            await expect(1).assertEqual(count);
            await ohosDataRdb.deleteRdbStore('rdbStoreTest.db');
        } catch (e) {
            await console.log('testRdbStore001 error ' + e);
        }
        done();
        console.log(TAG + '****************testRdbStore001 end****************');
    })

    /*
     * @tc.name RdbStore RdbStore interface test
     * @tc.number SUB_DDM_AppDataFWK_JSRdbStore_0020
     * @tc.desc RdbStore RdbStore interface test
     */

    it('testRdbStore002', 0, async function (done) {
        var u8 = new Uint8Array([1, 2, 3])
        console.log(TAG + '**********testRdbStore002 start*********');
        try {
            rdbStore = await ohosDataRdb.getRdbStore(STORE_CONFIG, 1);
            await rdbStore.executeSql(createTableTest, null);
            var u8 = new Uint8Array([1, 2, 3]);
            let predicates = new ohosDataRdb.RdbPredicates('test');
            const valueBucket = {
                'name': 'zhangsan',
                'age': 18,
                'salary': 100.5,
                'blobType': u8,
            }
            let insertPromise = await rdbStore.insert('test', valueBucket);
            await console.log('insert2 done' + insertPromise);
            await expect(2).assertEqual(insertPromise);
            predicates.equalTo('name', 'zhangsan')
            let resultSet = await rdbStore.query(predicates, ['id', 'name', 'age', 'salary', 'blobType']);
            await expect(true).assertEqual(resultSet.goToFirstRow());
            let count = await rdbStore.count(predicates);
            await expect(2).assertEqual(count);
            await ohosDataRdb.deleteRdbStore('rdbStoreTests.db');
        } catch (e) {
            await console.log('testRdbStore002 error ' + e);
        }
        done();
        console.log(TAG + '****************testRdbStore002 end****************');
    })

    /*
     * @tc.name RdbStore RdbStore interface test
     * @tc.number SUB_DDM_AppDataFWK_JSRdbStore_0030
     * @tc.desc RdbStore RdbStore interface test
     */

    it('testRdbStore003', 0, async function (done) {
        var u8 = new Uint8Array([1, 2, 3])
        console.log(TAG + '**********testRdbStore003 start*********');
        try {
            rdbStore = await ohosDataRdb.getRdbStore(STORE_CONFIG, 0);
            await rdbStore.executeSql(createTableTest, null);
            var u8 = new Uint8Array([1, 2, 3]);
            let predicates = new ohosDataRdb.RdbPredicates('test');
            const valueBucket = {
                'name': 'lisi',
                'age': 18,
                'salary': 100.5,
                'blobType': u8,
            }
            let insertPromise = await rdbStore.insert('test', valueBucket);
            await console.log('insert3 done' + insertPromise);
            await expect(3).assertEqual(insertPromise);
            predicates.equalTo('name', 'lisi')
            let resultSet = await rdbStore.query(predicates, ['id', 'name', 'age', 'salary', 'blobType']);
            await expect(true).assertEqual(resultSet.goToFirstRow());
            let count = await rdbStore.count(predicates);
            await expect(1).assertEqual(count);
            await ohosDataRdb.deleteRdbStore('abcd.db');
        } catch (e) {
            await console.log('testRdbStore003 error ' + e);
        }
        done();
        console.log(TAG + '****************testRdbStore003 end****************');
    })

    /*
     * @tc.name RdbStore RdbStore interface test
     * @tc.number SUB_DDM_AppDataFWK_JSRdbStore_0040
     * @tc.desc RdbStore RdbStore interface test
     */

    it('testRdbStore004', 0, async function (done) {
        var u8 = new Uint8Array([1, 2, 3])
        console.log(TAG + '**********testRdbStore004 start*********');
        try {
            rdbStore = await ohosDataRdb.getRdbStore(STORE_CONFIG);
            await rdbStore.executeSql(createTableTest, 1, null);
            var u8 = new Uint8Array([1, 2, 3]);
            let predicates = new ohosDataRdb.RdbPredicates('test');
            const valueBucket = {
                'name': 'zhangsan',
                'age': 18,
                'salary': 100.5,
                'blobType': u8,
            }
            let insertPromise = await rdbStore.insert('test', valueBucket);
            await console.log('insert4 done' + insertPromise);
            await expect(4).assertEqual(insertPromise);
            let count = await rdbStore.count(predicates);
            await expect(4).assertEqual(count);
            await ohosDataRdb.deleteRdbStore('null');
        } catch (e) {
            await console.log('testRdbStore004 error ' + e);
        }
        done();
        console.log(TAG + '****************testRdbStore004 end****************');
    })
    console.log(TAG + '*************Unit Test End*************');
})


