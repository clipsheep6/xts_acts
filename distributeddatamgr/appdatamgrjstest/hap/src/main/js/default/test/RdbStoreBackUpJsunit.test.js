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
const CREATE_TABLE_TEST = "CREATE TABLE IF NOT EXISTS test (" + "id INTEGER PRIMARY KEY AUTOINCREMENT, " + "name TEXT NOT NULL, " 
+ "age INTEGER, " + "salary REAL, " + "blobType BLOB)";
const STORE_CONFIG = {
    name: "BackupTest.db"
}
const CALL_BACK = {
    onCreate: () => {
        console.info(TAG + "onCreate on called")
    },
    onUpgrade: (versionAction) => {
        console.info(TAG + "onUpgrade on called:currentVersion = " + versionAction.currentVersion 
        + ", targetVersion = " + versionAction.targetVersion)
    },
    onDowngrade: (versionAction) => {
        console.info(TAG + "onDowngrade on called:currentVersion = " + versionAction.currentVersion 
        + ", targetVersion = " + versionAction.targetVersion)
    },
    onOpen: () => {
        console.info(TAG + "onOpen on called")
    },
    onCorruption: (databaseFile) => {
        console.info(TAG + "onOpen on called:databaseFile = " + databaseFile)
    },
}
var rdbStore = undefined;
describe('RdbStoreBackupTest', function () {
    beforeAll(async function () {
        console.info(TAG + 'beforeAll' + STORE_CONFIG.storageMode)
        rdbStore = await ohosDataRdb.getRdbStore(STORE_CONFIG, 1);
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
        await ohosDataRdb.deleteRdbStore("BackupTest.db");
    })

    /**
     * @tc.name RdbStore BackUp interface test
     * @tc.number SUB_DDM_AppDataFWK_JSRdbStore_0010
     * @tc.desc RdbStore BackUp interface test
     */
    it('testRdbStoreBackup001', 0, async function (done){
        console.log(TAG + "**********testRdbStoreBackup001 start*********");
        {
            let u8 = new Uint8Array([1, 2, 3]);
            let ValuesBucket = {
                'name': 'zhangsan',
                'age': 18,
                'salary': 100.5,
                'blobType': u8,
            };
            let insertPromise = await rdbStore.insert("test", ValuesBucket);
            await console.log("insert done1 " + insertPromise)
            await expect(1).assertEqual(insertPromise);
        }
        {
            let u8 = new Uint8Array([1, 2, 3]);
            let ValuesBucket = {
                'name': 'lisi',
                'age': 18,
                'salary': 100.5,
                'blobType': u8,
            };
            let insertPromise = await rdbStore.insert("test", ValuesBucket);
            await console.log("insert done2 " + insertPromise)
            await  expect(2).assertEqual(insertPromise);
        }
        {
            let u8 = new Uint8Array([1, 2, 3]);
            let ValuesBucket = {
                'name': 'lisi',
                'age': 20,
                'salary': 100.5,
                'blobType': u8,
            };
            let insertPromise = await rdbStore.insert("test", ValuesBucket);
            await console.log("insert done3 " + insertPromise)
            await expect(3).assertEqual(insertPromise);
        }
        try {
            var u8 = new Uint8Array([1, 2, 3]);
            let store = await rdbStore.backup("BackupTest.db", u8);
            await expect(true).assertEqual(store)
        } catch (e) {
            await console.log("backUp001 error " + e);
        }
        done();
        console.log(TAG + "****************testRdbStoreBackup001 end****************");
    })

    /**
     * @tc.name RdbStore BackUp interface test
     * @tc.number SUB_DDM_AppDataFWK_JSRdbStore_0020
     * @tc.desc RdbStore BackUp interface test
     */
    it('testRdbStoreBackup002', 0, async function (done){
        console.log(TAG + "**********testRdbStoreBackup002 start*********");
        {
            let u8 = new Uint8Array([1, 2, 3]);
            let ValuesBucket = {
                'name': 'zhangsan',
                'age': 18,
                'salary': 100.5,
                'blobType': u8,
            };

            let insertPromise = await rdbStore.insert("test", ValuesBucket);
            await console.log("insert done4" + insertPromise)
            await expect(4).assertEqual(insertPromise);
        }
        {
            let u8 = new Uint8Array([1, 2, 3]);
            let ValuesBucket = {
                'name': 'lisi',
                'age': 18,
                'salary': 100.5,
                'blobType': u8,
            };
            let insertPromise = await rdbStore.insert("test", ValuesBucket);
            await console.log("insert done5" + insertPromise)
            await  expect(5).assertEqual(insertPromise);
        }
        {
            let u8 = new Uint8Array([1, 2, 3]);
            let ValuesBucket = {
                'name': 'lisi',
                'age': 20,
                'salary': 100.5,
                'blobType': u8,
            };
            let insertPromise = await rdbStore.insert("test", ValuesBucket);
            await console.log("insert done6" + insertPromise)
            await expect(6).assertEqual(insertPromise);
        }
        try {
            let u8 = new Uint8Array([1, 2, 3]);
            await rdbStore.executeSql("DELETE FROM test WHERE age = ?", ["18"]);
            let store = await rdbStore.backup("RdbStoreBackupTest", u8);
            await console.log("backUp002 done " + store)
            await expect(true).assertEqual(store);
        } catch (e) {
            await console.log("backUp002 error " + e);
        }
        done();
        console.log(TAG + "****************testRdbStoreBackup002 end****************");
    })

    /**
     * @tc.name RdbStore BackUp interface test
     * @tc.number SUB_DDM_AppDataFWK_JSRdbStore_0030
     * @tc.desc RdbStore BackUp interface test
     */
    it('testRdbStoreBackup003', 0, async function (done){
        console.log(TAG + "**********testRdbStoreBackup003 start*********");
        {
            let u8 = new Uint8Array([1, 2, 3]);
            let ValuesBucket = {
                'name': 'zhangsan',
                'age': 18,
                'salary': 100.5,
                'blobType': u8,
            };

            let insertPromise = await rdbStore.insert("test", ValuesBucket);
            await console.log("insert done7" + insertPromise)
            await expect(7).assertEqual(insertPromise);
        }
        {
            let u8 = new Uint8Array([1, 2, 3]);
            let ValuesBucket = {
                'name': 'lisi',
                'age': 18,
                'salary': 100.5,
                'blobType': u8,
            };
            let insertPromise = await rdbStore.insert("test", ValuesBucket);
            await console.log("insert done8" + insertPromise)
            await  expect(8).assertEqual(insertPromise);
        }
        {
            let u8 = new Uint8Array([1, 2, 3]);
            let ValuesBucket = {
                'name': 'lisi',
                'age': 20,
                'salary': 100.5,
                'blobType': u8,
            };

            let insertPromise = await rdbStore.insert("test", ValuesBucket);
            await console.log("insert done9" + insertPromise)
            await expect(9).assertEqual(insertPromise);
        }
        try {
            let store = await rdbStore.backup("");
            await console.log("backUp003 done " + store);
        } catch (e) {
            await console.log("backUp003 error " + e);
            await  expect(null).assertFail();
        }
        try {
            let store = await rdbStore.backup("/data/test");
            await console.log("backUp003 done " + store);
        } catch (e) {
            await console.log("backUp003 error " + e);
        }
        done();
        console.log(TAG + "****************testRdbStoreBackup003 end****************");
    })

    /**
     * @tc.name RdbStore BackUp interface test
     * @tc.number SUB_DDM_AppDataFWK_JSRdbStore_0040
     * @tc.desc RdbStore BackUp interface test
     */
    it('testRdbStoreBackup004', 0, async function (done){
        console.log(TAG + "**********testRdbStoreBackup004 start*********");
        {
            let u8 = new Uint8Array([1, 2, 3]);
            let ValuesBucket = {
                'name': 'zhangsan',
                'age': 18,
                'salary': 100.5,
                'blobType': u8,
            };

            let insertPromise = await rdbStore.insert("test", ValuesBucket);
            await console.log("insert done10 " + insertPromise)
            await expect(10).assertEqual(insertPromise);
        }
        {
            let u8 = new Uint8Array([1, 2, 3]);
            let ValuesBucket = {
                'name': 'lisi',
                'age': 18,
                'salary': 100.5,
                'blobType': u8,
            };
            let insertPromise = await rdbStore.insert("test", ValuesBucket);
            await console.log("insert done11 " + insertPromise)
            await  expect(11).assertEqual(insertPromise);
        }
        {
            let u8 = new Uint8Array([1, 2, 3]);
            let ValuesBucket = {
                'name': 'lisi',
                'age': 20,
                'salary': 100.5,
                'blobType': u8,
            };
            let insertPromise = await rdbStore.insert("test", ValuesBucket);
            await console.log("insert done12 " + insertPromise)
            await expect(12).assertEqual(insertPromise);
        }
        await rdbStore.beginTransaction();
        try {
            let store = await rdbStore.backup("backUp004.db");
            await console.log("backUp004 done " + store);
            await  expect(null).assertFail();
        } catch (e) {
            await console.log("backUp004 error " + e);
        }
        await rdbStore.endTransaction();
        done();
        console.log(TAG + "****************testRdbStoreBackup004 end****************");
    })
    console.log(TAG + "*************Unit Test End*************");
})


