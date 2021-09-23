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
    name: "replace.db"
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

describe('rdbStoreReplaceTest', function () {
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
        await ohos_data_rdb.deleteRdbStore("replace.db");
    })
    console.log(TAG + "*************Unit Test Begin*************");

    /**
     * @tc.name RdbStore Replace interface test
     * @tc.number SUB_DDM_AppDataFWK_JSRdbStore_0010
     * @tc.desc RdbStore Replace interface test
     */
    it('testRdbStoreReplace0001', 0, async function (done) {
        console.log(TAG + "************* testRdbStoreReplace0001 start *************");
        var u8 = new Uint8Array([3, 4, 5]);
        var predicates = new ohos_data_rdb.RdbPredicates("test");
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
            var valueBucket={
                "name": "wangwu",
                "age": 25,
                "salary": 300.5,
                "blobType": u8,
            };
            let isholding = rdbStore.isHoldingConnection;
            await console.log("isholding " + isholding);
            await expect(false).assertEqual(isholding);
            let isready = rdbStore.isReadOnly;
            await console.log("isready " + isready);
            await expect(false).assertEqual(isready);
            let count = await rdbStore.replace("test",valueBucket);
            await console.log("count1 " + count);
            await expect(2).assertEqual(count);
            predicates.equalTo("name","wangwu");
            let resultSet = await rdbStore.query(predicates, ["id", "name", "age", "salary", "blobType"]);
            await expect(true).assertEqual(resultSet.goToFirstRow());
            const id = await resultSet.getLong(await resultSet.getColumnIndex("id"))
            const name = await resultSet.getString(await resultSet.getColumnIndex("name"))
            const age = await resultSet.getLong(await resultSet.getColumnIndex("age"))
            const salary = await resultSet.getDouble(await resultSet.getColumnIndex("salary"))
            const blobType = await resultSet.getBlob(await resultSet.getColumnIndex("blobType"))
            await console.log(TAG + "{id=" + id + ", name=" + name + ", age=" + age + ", salary=" + salary + ", blobType=" + blobType);
            await console.log("replace first done " + count);
            await expect(false).assertEqual(resultSet.goToNextRow());
        }
        {
            var valueBucket={
                "name": "lisi",
                "age": 25,
                "salary": 300.5,
                "blobType": u8,
            };
            let count = await rdbStore.replace("test",valueBucket);
            await console.log("count2" + count);
            await expect(3).assertEqual(count);
            predicates.equalTo("name","lisi");
            let resultSet = await rdbStore.query(predicates, ["id", "name", "age", "salary", "blobType"]);
            await expect(false).assertEqual(resultSet.goToFirstRow());
            await console.log("replace first done2 " + count);
        }
        done();
        console.log(TAG + "************* testRdbStoreReplace0001 end   *************");
    })
    /**
     * @tc.name RdbStore Replace interface test
     * @tc.number SUB_DDM_AppDataFWK_JSRdbStore_0020
     * @tc.desc RdbStore Replace interface test
     */
    it('testRdbStoreReplace0002', 0, async function (done) {
        console.log(TAG + "************* testRdbStoreReplace0002 start *************");
        var u8 = new Uint8Array([3, 4, 5])
        var valueBucket={
            "name": "wangwu",
            "age": 25,
            "salary": 300.5,
            "blobType": u8,
        }
        try{
            let isholding = rdbStore.isHoldingConnection;
            await expect(false).assertEqual(isholding);
            let isready = rdbStore.isReadOnly;
            await expect(false).assertEqual(isready);
            let count = await rdbStore.replace(null,valueBucket);
            await console.log("replace second done " + count);
            await expect(null).assertFail();
        }catch(e){
            await console.log(TAG + "no table name" + e);
        }
        done();
        console.log(TAG + "************* testRdbStoreReplace0002 end   *************");
    })
    /**
     * @tc.name RdbStore Replace interface test
     * @tc.number SUB_DDM_AppDataFWK_JSRdbStore_0030
     * @tc.desc RdbStore Replace interface test
     */
    it('testRdbStoreReplace0003', 0, async function (done) {
        console.log(TAG + "************* testRdbStoreReplace0003 start *************");
        var u8 = new Uint8Array([3, 4, 5])
        let isholding = rdbStore.isHoldingConnection;
        await expect(false).assertEqual(isholding);
        let isready = rdbStore.isReadOnly;
        await expect(false).assertEqual(isready);
        {
            const valueBucket = {
                "name": "zhangsan",
                "age": 18,
                "salary": 100.5,
                "blobType": u8,
            }
            let insertPromise =await rdbStore.insert("test", valueBucket)
            await expect(4).assertEqual(insertPromise);
            await console.log(TAG + "insert first done3: " + insertPromise);
        }
        try{
            var valueBucket = new Uint8Array([3, 4, 5]);
            let count = await rdbStore.replace("tests",valueBucket);
            await console.log("replace third done3 " + count);
            await expect(null).assertFail();
        }catch(e){
            await console.log("tableName is Wrong:" + e);
        }
        done();
        console.log(TAG + "************* testRdbStoreReplace0003 end   *************");
    })
    /**
     * @tc.name RdbStore Replace interface test
     * @tc.number SUB_DDM_AppDataFWK_JSRdbStore_0040
     * @tc.desc RdbStore Replace interface test
     */
    it('testRdbStoreReplace0004', 0, async function (done) {
        console.log(TAG + "************* testRdbStoreReplace0004 start *************");
        var u8 = new Uint8Array([3, 4, 5])
        let isholding = rdbStore.isHoldingConnection;
        await expect(false).assertEqual(isholding);
        let isready = rdbStore.isReadOnly;
        await expect(false).assertEqual(isready);
        {
            const valueBucket = {
                "name": "zhangsan",
                "age": 18,
                "salary": 100.5,
                "blobType": u8,
            }
            let insertPromise =await rdbStore.insert("test", valueBucket)
            await expect(5).assertEqual(insertPromise);
            await console.log(TAG + "insert first done4: " + insertPromise);
        }
        try{
            let count=await rdbStore.replace("test",null);
            await console.log("replace fourth done4 " + count);
            await expect(null).assertFail();
        }catch(e){
            await console.log("valueBucket not allow null:" + e);
        }
        done();
        console.log(TAG + "************* testRdbStoreReplace0004 end   *************");
    })
    console.log(TAG + "*************Unit Test End*************");
})