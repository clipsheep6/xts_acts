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
const createTableTest = "CREATE TABLE IF NOT EXISTS test (" + "id INTEGER PRIMARY KEY AUTOINCREMENT, " + "name TEXT NOT NULL, " + "age INTEGER, " + "salary REAL, " + "blobType BLOB)";
const STORE_CONFIG = {
    name: "attachTest.db",
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
describe('RdbStoreAddAttachTest', function () {
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
        await ohosDataRdb.deleteRdbStore("attachTest.db");
    })

    /*
     * @tc.name RdbStore Attach interface test
     * @tc.number SUB_DDM_AppDataFWK_JSRdbStore_0010
     * @tc.desc RdbStore Attach interface test
     */

    it('testRdbStoreAddAttach001', 0, async function (done){
        var u8 = new Uint8Array([1, 2, 3])
        console.log(TAG + "**********testRdbStoreAddAttach001 start*********");
        try {
            var u8 = new Uint8Array([1, 2, 3]);
            await rdbStore.addAttach("test", "attach.db", u8);
            await console.log("attach1 done");
            let predicates = new ohosDataRdb.RdbPredicates("test");
            const valueBucket = {
                'name': 'zhangsan',
                'age': 18,
                'salary': 100.5,
                'blobType': u8,
            }
            let insertPromise = await rdbStore.insert("test", valueBucket);
            await console.log("insert1 done" + insertPromise);
            await expect(1).assertEqual(insertPromise);
            let count = await rdbStore.count(predicates);
            await expect(1).assertEqual(insertPromise);
            await console.log("addattach1 close");
        } catch (e) {
            await console.log("addattach1 error " + e);
        }
        done();
        console.log(TAG + "****************testRdbStoreAddAttach001 end****************");
    })

    /*
     * @tc.name RdbStore Attach interface test
     * @tc.number SUB_DDM_AppDataFWK_JSRdbStore_0020
     * @tc.desc RdbStore Attach interface test
     */

    it('testRdbStoreAddAttach002', 0, async function (done){
        console.log(TAG + "**********testRdbStoreAddAttach002 start*********");
        try {
            var u8 = new Uint8Array([]);
            await rdbStore.addAttach("test", "attach.db", u8);
            await console.log("addattach2 done");
            let predicates = new ohosDataRdb.RdbPredicates("test");
            const valueBucket = {
                'name': 'zhangsan',
                'age': 18,
                'salary': 100.5,
                'blobType': u8,
            }
            let insertPromise = await rdbStore.insert("test", valueBucket);
            await console.log("insert2 done " + insertPromise);
            await expect(2).assertEqual(insertPromise);
            let count = await rdbStore.count(predicates);
            await expect(2).assertEqual(insertPromise);
            await console.log("addattach2 close ");
        } catch (e) {
            await console.log("addattach2 error " + e);
        }
        done();
        console.log(TAG + "****************testRdbStoreAddAttach002 end****************");
    })

    /*
     * @tc.name RdbStore Attach interface test
     * @tc.number SUB_DDM_AppDataFWK_JSRdbStore_0030
     * @tc.desc RdbStore Attach interface test
     */

    it('testRdbStoreAddAttach003', 0, async function (done){
        console.log(TAG + "**********testRdbStoreAddAttach003 start*********");
        try {
            var u8 = new Uint8Array([1, 2, 3]);
            await rdbStore.addAttach("test", "attach.db", null);
            await console.log("addattach3 done ");
            let predicates = new ohosDataRdb.RdbPredicates("test");
            const valueBucket = {
                'name': 'zhangsan',
                'age': 18,
                'salary': 100.5,
                'blobType': u8,
            }
            let insertPromise = await rdbStore.insert("test", valueBucket);
            await console.log("insert3 done " + insertPromise);
            await expect(3).assertEqual(insertPromise);
            let count = await rdbStore.count(predicates);
            await expect(3).assertEqual(insertPromise);
            await console.log("addattach3 close ");
        } catch (e) {
            await console.log("addattach3 error " + e);
        }
        done();
        console.log(TAG + "****************testRdbStoreAddAttach003 end****************");
    })

    /*
     * @tc.name RdbStore Attach interface test
     * @tc.number SUB_DDM_AppDataFWK_JSRdbStore_0040
     * @tc.desc RdbStore Attach interface test
     */

    it('testRdbStoreAddAttach004', 0, async function (done){
        console.log(TAG + "**********testRdbStoreAddAttach004 start*********");
        try {
            await rdbStore.addAttach("test", null);
            await console.log("addattach4 done");
            await expect(null).assertFail();
        } catch (e) {
            await console.log("addattach4 error " + e);
        }
        done();
        console.log(TAG + "****************testRdbStoreAddAttach004 end****************");
    })
    console.log(TAG + "*************Unit Test End*************");
})


