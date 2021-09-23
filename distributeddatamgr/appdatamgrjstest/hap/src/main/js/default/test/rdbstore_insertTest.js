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
    storageMode:  0, // ohos_data_rdb.StorageMode.MODE_DISK,
    readOnly: false,
    fileType:  0, //ohos_data_rdb.DatabaseFileType.NORMAL,
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
describe('rdbStoreInsertTest', function () {
    beforeAll(async function () {
        console.info(TAG + 'beforeAll' + STORE_CONFIG.storageMode)
        rdbStore = await ohos_data_rdb.getRdbStore(STORE_CONFIG, 1, CALL_BACK);
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
    console.log(TAG + "*************Unit Test Begin*************");
    // testRdbStoreInsert0001
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
            let insertPromise =await rdbStore.insert("test", valueBucket)
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
            let insertPromise =await rdbStore.insert("test", valueBucket)
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
            let insertPromise =await rdbStore.insert("test", valueBucket)
            await expect(3).assertEqual(insertPromise);
            await console.log(TAG + "insert third done: " + insertPromise);

        }
        let resultSet = await rdbStore.querySql("SELECT * FROM test WHERE name=?",["zhangsan"]);
        let predicates = new ohos_data_rdb.RdbPredicates("test");
        try{
            await console.log(TAG + "resultSet query done");
            await expect(true).assertEqual(resultSet.goToFirstRow())
            const id = await resultSet.getLong(await resultSet.getColumnIndex("id"))
            const name = await resultSet.getString(await resultSet.getColumnIndex("name"))
            const age = await resultSet.getLong(await resultSet.getColumnIndex("age"))
            const salary = await resultSet.getDouble(await resultSet.getColumnIndex("salary"))
            const blobType = await resultSet.getBlob(await resultSet.getColumnIndex("blobType"))
            await console.log(TAG + "{id=" + id + ", name=" + name + ", age=" + age + ", salary=" + salary + ", blobType=" + blobType);
            await expect(1).assertEqual(id);
            await expect("zhangsan").assertEqual(name);
            await expect(18).assertEqual(age);
            await expect(100.5).assertEqual(salary);
            await expect(4).assertEqual(blobType[1]);
            await expect(false).assertEqual(resultSet.goToNextRow())
            await console.log(TAG + "resultSet goToNextRow done");
            await expect(5).assertEqual(resultSet.columnCount)
            await console.log("resultSet columnCount done");
            const columnnames = resultSet.columnNames
            await console.log('columnnames' + columnnames);
            predicates.joinConditions = ["id", "name", "age", "salary", "blobType"]
            await console.log("predicates setJoinConditions done");
            predicates.joinNames = ["id", "name", "age", "salary", "blobType"]
            await console.log("predicates setJoinNames done");
            predicates.joinTypes = ["id", "name", "age", "salary", "blobType"];
            await console.log("predicates setJoinTypes done");
            predicates.joinCount = 2;
            await console.log("predicates setJoinCount done");
            const flag = predicates.joinTypes;
            await console.log('flag=' + flag);
            await console.log("predicates getJoinTypes done");
            const flag2 = predicates.joinNames;
            await console.log("zhengzhongyang = " + flag2);
            await console.log("predicates getJoinNames done");
            const flag3 = predicates.joinConditions;
            await console.log('flag3=' + flag3);
            await console.log("predicates getJoinConditions done");
            predicates.leftOuterJoin = "asdf1234";
            await console.log("predicates leftOuterJoin done");
            predicates.using = ["id", "name", "age", "salary", "blobType"];
            await console.log("predicates using done");
            predicates.innerJoin = "blobType";
            await console.log("predicates innerJoin done");
            predicates.on = ["id", "name", "age", "salary", "blobType"]
            await console.log("predicates on done");
            const a = predicates.joinCount;
            await console.log("a = " + a);
            await console.log("predicates getJoinCount done");
            predicates.clear;
            await console.log("predicates clear done");
            predicates.crossJoin = "blobType"
            await console.log("predicates crossJoin done");
            const flag1 = predicates.isRawSelection;
            await console.log("flag1 = " + flag1);
            await console.log("predicates isRawSelection done");
        }catch(e){
            await console.log("insert1 error " + e);
        }
        done()
        console.log(TAG + "************* testRdbStoreDelete0001 end   *************");
    })
    // testRdbStoreInsert0002
    it('testRdbStoreInsert0002', 0, async function (done) {
        console.log(TAG + "************* testRdbStoreInsert0002 start *************");
        try{
            let insertPromise =await rdbStore.insert("test", null)
            await console.log(TAG + "insert first done: " + insertPromise);
            await expect(null).assertFail();
        }catch(e){
            await console.log("insert2 error " + e);
        }
        done()
        console.log(TAG + "************* testRdbStoreInsert0002 end   *************");
    })
    // testRdbStoreInsert0003
    it('testRdbStoreInsert0003', 0, async function (done) {
        console.log(TAG + "************* testRdbStoreInsert0003 start *************");
        try{
            const valueBucket = {
                "name": "zhangsan",
                "age": 18,
                "salary": 100.5,
            }
            let insertPromise = await rdbStore.insert(null, valueBucket)
            await expect(null).assertFail();
        }catch(e){
            await console.log("delete1 error " + e);
        }
        done()
        console.log(TAG + "************* testRdbStoreDelete0003 end   *************");
    })
    // testRdbStoreInsert0004
    it('testRdbStoreInsert0004', 0, async function (done) {
        console.log(TAG + "************* testRdbStoreInsert0004 start *************");
        try{
            const valueBucket = {
                "name": "zhangsan",
                "age": 18,
                "salary": 100.5,
            }
            let insertPromise =await rdbStore.insert("tests", valueBucket)
            await expect(null).assertFail();
        }catch(e){
            await console.log("delete1 error " + e);
        }
        done()
        console.log(TAG + "************* testRdbStoreDelete0004 end   *************");
    })
    console.log(TAG + "*************Unit Test End*************");
})