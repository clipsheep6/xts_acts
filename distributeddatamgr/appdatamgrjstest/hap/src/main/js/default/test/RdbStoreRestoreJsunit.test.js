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
    name: 'reStoreTest.db'
}
var rdbStore = undefined;
describe('rdbStoreRestoreTest', function () {
    beforeAll(async function () {
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
        await ohosDataRdb.deleteRdbStore('reStoreTest.db');
    })

    /**
     * @tc.name RdbStore ReStore interface test
     * @tc.number SUB_DDM_AppDataFWK_JSRdbStore_0010
     * @tc.desc RdbStore ReStore interface test
     */

    it('testRdbStoreRestore001', 0, async function (done) {
        console.log(TAG + '************* testRdbStoreRestore001 start *************');
        {
            let u8 = new Uint8Array([1, 2, 3]);
            let valueBucket = {
                'name': 'zhangsan',
                'age': 18,
                'salary': 100.5,
                'blobType': u8
            }
            let insertPromise = await rdbStore.insert('test', valueBucket);
            await expect(1).assertEqual(insertPromise);
            await console.log(TAG + 'insert first done: ' + insertPromise);
        }
        let resultSet = await rdbStore.querySql('SELECT * FROM test WHERE name=?', ['zhangsan']);
        await expect(true).assertEqual(resultSet.goToFirstRow())
        let u8 = new Uint8Array([1, 2, 3]);
        await rdbStore.restore('reStoreTest.db', 'reStoreTest2.db', u8);
        await console.log('reStore1 done ');
        let open = rdbStore.isOpen;
        let readOnly = rdbStore.isReadOnly;
        console.log('isOpen is ' + open + 'readonly is: ' + readOnly);
        await expect(true).assertEqual(open);
        await expect(false).assertEqual(readOnly);
        await console.log('reStore1 close ');
        done();
        console.log(TAG + '************* testRdbStoreRestore001 end *************');
    })

    /*
     * @tc.name RdbStore ReStore interface test
     * @tc.number SUB_DDM_AppDataFWK_JSRdbStore_0020
     * @tc.desc RdbStore ReStore interface test
     */

    it('testRdbStoreRestore002', 0, async function (done) {
        console.log(TAG + '************* testRdbStoreRestore002 start *************');
        let u8 = new Uint8Array([1, 2, 3]);
        try {
            await rdbStore.restore('Backup002', 'RdbRestore002.db', u8);
            await console.log(TAG + 'reStore2 done: ');
            let open = rdbStore.isOpen;
            let readOnly = rdbStore.isReadOnly;
            console.log('isOpen is ' + open + 'readonly is: ' + readOnly);
            await expect(true).assertEqual(open);
            await expect(false).assertEqual(readOnly);
            await console.log('reStore2 close ' + open + readOnly);
        } catch (e) {
            await console.log('reStore2 error ' + e);
        }
        done();
        console.log(TAG + '************* testRdbStoreRestore002 end *************');
    })

    /*
     * @tc.name RdbStore ReStore interface test
     * @tc.number SUB_DDM_AppDataFWK_JSRdbStore_0030
     * @tc.desc RdbStore ReStore interface test
     */

    it('testRdbStoreRestore003', 0, async function (done) {
        console.log(TAG + '************* testRdbStoreRestore003 start *************');
        try {
            var u8 = new Uint8Array([1, 2, 3]);
            await rdbStore.restore('/data/mydata/Backup002', null, u8);
            await console.log(TAG + 'reStore3 done: ');
            let open = rdbStore.isOpen;
            let readOnly = rdbStore.isReadOnly;
            console.log('isOpen is ' + open + 'readonly is: ' + readOnly);
            await expect(true).assertEqual(open);
            await expect(false).assertEqual(readOnly);
            await console.log('reStore1 close ');
        } catch (e) {
            await console.log('reStore3 error ' + e);
        }
        done();
        console.log(TAG + '************* testRdbStoreRestore003 end *************');
    })

    /*
     * @tc.name RdbStore ReStore interface test
     * @tc.number SUB_DDM_AppDataFWK_JSRdbStore_0040
     * @tc.desc RdbStore ReStore interface test
     */

    it('testRdbStoreRestore004', 0, async function (done) {
        console.log(TAG + '************* testRdbStoreRestore004 start *************');
        try {
            let u8 = new Uint8Array([1, 2, 3]);
            await rdbStore.restore(null, null, u8);
            await console.log(TAG + 'reStore4 done: ');
            let open = rdbStore.isOpen;
            let readOnly = rdbStore.isReadOnly;
            console.log('isOpen is ' + open + 'readonly is: ' + readOnly);
            await expect(true).assertEqual(open);
            await expect(false).assertEqual(readOnly);
            await console.log('reStore1 close ');
        } catch (e) {
            await console.log('reStore4 error ' + e);
        }
        done();
        console.log(TAG + '************* testRdbStoreRestore004 end *************');
    })
})
