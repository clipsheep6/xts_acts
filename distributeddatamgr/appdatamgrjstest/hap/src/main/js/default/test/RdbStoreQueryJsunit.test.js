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
const CREATE_TABLE_TEST = 'CREATE TABLE IF NOT EXISTS test (' + 'id INTEGER PRIMARY KEY AUTOINCREMENT, '
+ 'name TEXT NOT NULL, ' + 'age INTEGER, ' + 'salary REAL, ' + 'blobType BLOB)';
const STORE_CONFIG = {
    name: 'QueryTest.db',
    storageMode: 0, // ohos_data_rdb.StorageMode.MODE_DISK,
    readOnly: false,
    fileType: 0, //ohos_data_rdb.DatabaseFileType.NORMAL,
    encryptKey: [1, 2, 3, 4, 5, 6, 7],
    journalMode: 0, // ohos_data_rdb.JournalMode.MODE_DELETE,
    syncMode: 0, //ohos_data_rdb.SyncMode.MODE_OFF
}
const CALL_BACK = {
    onCreate: () => {
        console.info(TAG + "onCreate on called")
    },
    onUpgrade: (versionAction) => {
        console.info(TAG + "onUpgrade on called:currentVersion = " + versionAction.currentVersion + ", targetVersion = " + versionAction.targetVersion)
    },
    onDowngrade: (versionAction) => {
        console.info(TAG + "onDowngrade on called:currentVersion = " + versionAction.currentVersion + ", targetVersion = " + versionAction.targetVersion)
    },
    onOpen: () => {
        console.info(TAG + "onOpen on called")
    },
    onCorruption: (databaseFile) => {
        console.info(TAG + "onOpen on called:databaseFile = " + databaseFile)
    },
}
var rdbStore = undefined;
describe('RdbStoreQueryTest', function () {
    beforeAll(async function () {
        console.info(TAG + 'beforeAll' + STORE_CONFIG.storageMode)
        rdbStore = await ohosDataRdb.getRdbStore(STORE_CONFIG, 1, CALL_BACK);
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
        await ohosDataRdb.deleteRdbStore('QueryTest.db');
    })

    /*
     * @tc.name RdbStore Query interface test
     * @tc.number SUB_DDM_AppDataFWK_JSRdbStore_0010
     * @tc.desc RdbStore Query interface test
     */

    it('testRdbStoreQuery001', 0, async function (done){
        console.log(TAG + '**********testRdbStoreQuery001 start*********');
        {
            var u8 = new Uint8Array([1, 2, 3]);
            let ValuesBucket = {
                'name': 'zhangsan',
                'age': 18,
                'salary': 100.5,
                'blobType': u8,
            }
            let insertPromise = await rdbStore.insert('test', ValuesBucket);
            await expect(1).assertEqual(insertPromise);
        }
        {
            var u8 = new Uint8Array([1, 2, 3]);
            let ValuesBucket = {
                'name': 'lisi',
                'age': 18,
                'salary': 100.5,
                'blobType': u8,
            }
            let insertPromise = await rdbStore.insert('test', ValuesBucket);
            await expect(2).assertEqual(insertPromise);
        }
        {
            var u8 = new Uint8Array([1, 2, 3]);
            let ValuesBucket = {
                'name': 'lisi',
                'age': 20,
                'salary': 100.5,
                'blobType': u8,
            }
            let insertPromise = await rdbStore.insert('test', ValuesBucket);
            console.log('insert done ' + insertPromise);
            await expect(3).assertEqual(insertPromise);
        }
        let predicates = new ohosDataRdb.RdbPredicates('test')
        predicates.equalTo('name', 'zhangsan')
        try {
            let resultSet = await rdbStore.query(predicates, ['id', 'name', 'age', 'salary', 'blobType'])
            await console.log(TAG + 'resultSet query1 done');
            await expect(true).assertEqual(resultSet.goToFirstRow())
            const id = await resultSet.getLong(await resultSet.getColumnIndex('id'))
            const name = await resultSet.getString(await resultSet.getColumnIndex('name'))
            const age = await resultSet.getLong(await resultSet.getColumnIndex('age'))
            const salary = await resultSet.getDouble(await resultSet.getColumnIndex('salary'))
            const blobType = await resultSet.getBlob(await resultSet.getColumnIndex('blobType'))
            await console.log(TAG + '{id=' + id + ', name=' + name + ', age=' + age + ', salary='
            + salary + ', blobType=' + blobType);
            await expect(1).assertEqual(id);
            await expect('zhangsan').assertEqual(name);
            await expect(18).assertEqual(age);
            await expect(100.5).assertEqual(salary);
            await expect(2).assertEqual(blobType[1]);
            await expect(false).assertEqual(resultSet.goToNextRow());
            await console.log(TAG + 'resultSet goToNextRow done');
            await console.log('resultSet columnCount001 done');
            const columnCount = resultSet.columnCount;
            await console.log('resultSet columnCount001' + columnCount);
            await expect(5).assertEqual(resultSet.columnCount);
            let pathstr = rdbStore.path;
            await console.log('pathstr= ' + pathstr);
            let isMemory = rdbStore.isMemoryRdb;
            await expect(false).assertEqual(isMemory);
            resultSet = null
        } catch (e) {
            await console.log('query error1 ' + e);
        }
        done();
        console.log(TAG + '****************testRdbStoreQuery001 end****************');
    })

    /*
     * @tc.name RdbStore Query interface test
     * @tc.number SUB_DDM_AppDataFWK_JSRdbStore_0020
     * @tc.desc RdbStore Query interface test
     */

    it('testRdbStoreQuery002', 0, async function (done){
        console.log(TAG + '**********testRdbStoreQuery002 start*********');
        {
            var u8 = new Uint8Array([1, 2, 3]);
            let ValuesBucket = {
                'name': 'zhangsan',
                'age': 18,
                'salary': 100.5,
                'blobType': u8,
            }
            let insertPromise = await rdbStore.insert('test', ValuesBucket);
            await expect(4).assertEqual(insertPromise);
        }
        {
            var u8 = new Uint8Array([1, 2, 3]);
            let ValuesBucket = {
                'name': 'lisi',
                'age': 18,
                'salary': 100.5,
                'blobType': u8,
            }
            let insertPromise = await rdbStore.insert('test', ValuesBucket);
            await expect(5).assertEqual(insertPromise);
        }
        {
            var u8 = new Uint8Array([1, 2, 3]);
            let ValuesBucket = {
                'name': 'lisi',
                'age': 20,
                'salary': 100.5,
                'blobType': u8,
            }
            let insertPromise = await rdbStore.insert('test', ValuesBucket);
            console.log('insert done ' + insertPromise);
            await expect(6).assertEqual(insertPromise);
        }
        let predicates = new ohosDataRdb.RdbPredicates('test');
        predicates.equalTo('name', 'lisi');
        try {
            let pathstr = rdbStore.path;
            await console.log('pathstr= ' + pathstr);
            let isMemory = rdbStore.isMemoryRdb;
            await expect(false).assertEqual(isMemory);
            let resultSet = await rdbStore.query(predicates)
            await console.log(TAG + 'result query2 done');
            await expect(true).assertEqual(resultSet.goToFirstRow())
            await expect(true).assertEqual(resultSet.goToNextRow());
            await console.log(TAG + 'result2 goToNextRow done');
            await console.log('result columnCount002 done');
            const columnCount = resultSet.columnCount;
            await console.log('resultSet columnCount002' + columnCount);
            await expect(5).assertEqual(resultSet.columnCount)
            resultSet = null
        } catch (e) {
            await console.log('query2 error ' + e);
        }
        done();
        console.log(TAG + '****************testRdbStoreQuery002 end****************');
    })

    /*
     * @tc.name RdbStore Query interface test
     * @tc.number SUB_DDM_AppDataFWK_JSRdbStore_0030
     * @tc.desc RdbStore Query interface test
     */

    it('testRdbStoreQuery003', 0, async function (done){
        console.log(TAG + '**********testRdbStoreQuery003 start*********');
        {
            var u8 = new Uint8Array([1, 2, 3]);
            let ValuesBucket = {
                'name': 'zhangsan',
                'age': 18,
                'salary': 100.5,
                'blobType': u8,
            }
            let insertPromise = await rdbStore.insert('test', ValuesBucket);
            await expect(7).assertEqual(insertPromise);
        }
        {
            var u8 = new Uint8Array([1, 2, 3]);
            let ValuesBucket = {
                'name': 'lisi',
                'age': 18,
                'salary': 100.5,
                'blobType': u8,
            }
            let insertPromise = await rdbStore.insert('test', ValuesBucket);
            await  expect(8).assertEqual(insertPromise);
        }
        {
            var u8 = new Uint8Array([1, 2, 3]);
            let ValuesBucket = {
                'name': 'lisi',
                'age': 20,
                'salary': 100.5,
                'blobType': u8,
            }
            let insertPromise = await rdbStore.insert('test', ValuesBucket);
            console.log('insert done ' + insertPromise);
            await expect(9).assertEqual(insertPromise);
        }
        let predicates = new ohosDataRdb.RdbPredicates('test');
        predicates.equalTo('name', 'lisi');
        let resultSet = await rdbStore.query(predicates, ['id', 'names'])
        await console.log(TAG + 'resultSet query3 done' + resultSet);
        await expect(resultSet).assertInstanceOf('Object');
        let pathstr = rdbStore.path;
        await console.log('pathstr= ' + pathstr);
        let isMemory = rdbStore.isMemoryRdb;
        await expect(false).assertEqual(isMemory);
        done();
        console.log(TAG + '****************testRdbStoreQuery003 end****************');
    })

    /*
     * @tc.name RdbStore Query interface test
     * @tc.number SUB_DDM_AppDataFWK_JSRdbStore_0040
     * @tc.desc RdbStore Query interface test
     */

    it('testRdbStoreQuery004', 0, async function (done){
        console.log(TAG + '**********testRdbStoreQuery004 start*********');
        {
            var u8 = new Uint8Array([1, 2, 3]);
            let ValuesBucket = {
                'name': 'zhangsan',
                'age': 18,
                'salary': 100.5,
                'blobType': u8,
            }
            let insertPromise = await rdbStore.insert('test', ValuesBucket);
            await expect(10).assertEqual(insertPromise);
        }
        {
            var u8 = new Uint8Array([1, 2, 3]);
            let ValuesBucket = {
                'name': 'lisi',
                'age': 18,
                'salary': 100.5,
                'blobType': u8,
            }
            let insertPromise = await rdbStore.insert('test', ValuesBucket);
            await expect(11).assertEqual(insertPromise);
        }
        {
            var u8 = new Uint8Array([1, 2, 3]);
            let ValuesBucket = {
                'name': 'lisi',
                'age': 20,
                'salary': 100.5,
                'blobType': u8,
            }
            let insertPromise = await rdbStore.insert('test', ValuesBucket);
            console.log('insert done ' + insertPromise);
            await expect(12).assertEqual(insertPromise);
        }
        let predicates = new ohosDataRdb.RdbPredicates('null');
        let resultSet = await rdbStore.query(predicates, ['id', 'name', 'age', 'salary', 'blobType'])
        await console.log('resultSet query4 done' + resultSet);
        let pathstr = rdbStore.path;
        await console.log('pathstr= ' + pathstr);
        let isMemory = rdbStore.isMemoryRdb;
        await expect(false).assertEqual(isMemory);
        await expect(resultSet).assertInstanceOf('Object');
        done();
        console.log(TAG + '****************testRdbStoreQuery004 end****************');
    })
    console.log(TAG + '*************Unit Test End*************');
})