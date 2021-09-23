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
    name: "countTest.db"
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
        await ohos_data_rdb.deleteRdbStore("countTest.db");
    })
    console.log(TAG + "*************Unit Test Begin*************");

    /**
     * @tc.name RdbStore Count interface test
     * @tc.number SUB_DDM_AppDataFWK_JSRdbStore_0010
     * @tc.desc RdbStore Count interface test
     */
    it('countTest001', 0, async function (done){
        var u8 = new Uint8Array([3, 4, 5]);
        console.log(TAG + "************* countTest001 start *************");
        {
            const valueBucket = {
                "name": "zhangsan",
                "age": 18,
                "salary": 100.5,
                "blobType": u8,
            }
            let insertPromise =await rdbStore.insert("test", valueBucket);
            await console.log(TAG + "insert first done: " + insertPromise);
            await expect(1).assertEqual(insertPromise);
        }
        {
            const valueBucket = {
                "name": "lisi",
                "age": 18,
                "salary": 100.5,
                "blobType": u8,
            }
            let insertPromise = await rdbStore.insert("test", valueBucket)
            await console.log(TAG + "insert second done: " + insertPromise);
            await expect(2).assertEqual(insertPromise);
        }
        {
            const valueBucket = {
                "name": "lisi",
                "age": 20,
                "salary": 100.5,
                "blobType": u8,
            }
            let insertPromise =await rdbStore.insert("test", valueBucket)
            await console.log(TAG + "insert third done: " + insertPromise);
            await expect(3).assertEqual(insertPromise);
        }
        {
            let predicates = new ohos_data_rdb.RdbPredicates("test");
            predicates.equalTo("name", "lisi")
            let resultSet = await rdbStore.query(predicates, ["id", "name", "age", "salary", "blobType"]);
            try {
                await expect(true).assertEqual(resultSet.goToFirstRow())
                let number = await rdbStore.count(predicates);
                await console.log(TAG + "rdbStore count011 done: " + number);
                await expect(2).assertEqual(number);
            } catch (e) {
                await console.log(TAG + "rdbStore count011 error: " + e);
            }
        }
        {
            let predicates = new ohos_data_rdb.RdbPredicates("test");
            predicates.equalTo("age", 20)
            let resultSet = await rdbStore.query(predicates, ["id", "name", "age", "salary", "blobType"]);
            try {
                await expect(true).assertEqual(resultSet.goToFirstRow())
                let number = await rdbStore.count(predicates);
                await console.log(TAG + "resultSet count13 done: " + number);
                await expect(1).assertEqual(number);
            } catch (e) {
                await console.log(TAG + "resultSet count13 error: " + e);
            }
        }
        {
            let predicates = new ohos_data_rdb.RdbPredicates("test");
            predicates.equalTo("salary", "100.5")
            let resultSet = await rdbStore.query(predicates, ["id", "name", "age", "salary", "blobType"]);
            try {
                await expect(true).assertEqual(resultSet.goToFirstRow())
                let number = await rdbStore.count(predicates);
                await console.log(TAG + "resultSet count12 done: " + number);
                await expect(3).assertEqual(number);
            } catch (e) {
                await console.log(TAG + "resultSet count12 error: " + e);
            }
        }
        {
            let predicates = new ohos_data_rdb.RdbPredicates("test");
            let resultSet = await rdbStore.query(predicates, ["id", "name", "age", "salary", "blobType"]);
            try {
                await expect(true).assertEqual(resultSet.goToFirstRow())
                let number = await rdbStore.count(predicates);
                await console.log(TAG + "resultSet count13 done: " + number);
                await expect(3).assertEqual(number);
            } catch (e) {
                await console.log(TAG + "resultSet count13 error: " + e);
            }
        }
        done();
        console.log(TAG + "************* countTest001 end   *************");
    })

    /**
     * @tc.name RdbStore Count interface test
     * @tc.number SUB_DDM_AppDataFWK_JSRdbStore_0020
     * @tc.desc RdbStore Count interface test
     */
    it('countTest002', 0, async function (done) {
        var u8 = new Uint8Array([3, 4, 5])
        console.log(TAG + "************* countTest002 start *************");
        let predicates = new ohos_data_rdb.RdbPredicates("test");
        let resultSet = await rdbStore.query(predicates, ["id", "name", "age", "salary", "blobType"]);
        try {
            await expect(true).assertEqual(resultSet.goToFirstRow())
            let number = await rdbStore.count("bazhahei");
            await console.log(TAG + "resultSet count2 done: " + number);
            await expect(null).assertFail();
        } catch (e) {
            await console.log(TAG + "resultSet count2 error: " + e);
        }
        done();
        console.log(TAG + "************* countTest002 end   *************");
    })
    /**
     * @tc.name RdbStore Count interface test
     * @tc.number SUB_DDM_AppDataFWK_JSRdbStore_0030
     * @tc.desc RdbStore Count interface test
     */
    it('countTest003', 0, async function (done) {
        var u8 = new Uint8Array([3, 4, 5])
        console.log(TAG + "************* countTest003 start *************");
        {
            const valueBucket = {
                "name": "zhangsan",
                "age": 18,
                "salary": 100.5,
                "blobType": u8,
            }
            let insertPromise = await rdbStore.insert("test", valueBucket);
            await expect(4).assertEqual(insertPromise);
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
            await expect(5).assertEqual(insertPromise);
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
            await expect(6).assertEqual(insertPromise);
            await console.log(TAG + "insert third done: " + insertPromise);
        }
        let predicates = new ohos_data_rdb.RdbPredicates("test");
        predicates.equalTo("name", "lisi")
        predicates.equalTo("age", 18)
        let resultSet = await rdbStore.query(predicates, ["id", "name", "age", "salary", "blobType"]);
        try {
            await expect(true).assertEqual(resultSet.goToFirstRow())
            let number = await rdbStore.count(predicates);
            await console.log(TAG + "resultSet count3 done: " + number);
            await expect(2).assertEqual(number);
        } catch (e) {
            await console.log("resultSet count3 error: " + e);
        }
        done();
        console.log(TAG + "************* countTest003 end   *************");
    })
    /**
     * @tc.name RdbStore Count interface test
     * @tc.number SUB_DDM_AppDataFWK_JSRdbStore_0040
     * @tc.desc RdbStore Count interface test
     */
    it('countTest004', 0, async function (done) {
        var u8 = new Uint8Array([3, 4, 5])
        console.log(TAG + "************* countTest004 start *************");
        {
            const valueBucket = {
                "name": "zhangsan",
                "age": 18,
                "salary": 100.5,
                "blobType": u8,
            }
            let insertPromise =await rdbStore.insert("test", valueBucket);
            await expect(7).assertEqual(insertPromise);
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
            await expect(8).assertEqual(insertPromise);
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
            await expect(9).assertEqual(insertPromise);
            await console.log(TAG + "insert third done: " + insertPromise);
        }
        let predicates = new ohos_data_rdb.RdbPredicates("test");
        predicates.equalTo("age", "18")
        let resultSet = await rdbStore.query(predicates, ["id", "name", "age", "salary", "blobType"]);
        try {
            await expect(true).assertEqual(resultSet.goToFirstRow())
            let number = await rdbStore.count(predicates);
            await console.log(TAG + "resultSet count4 done: " + number);
            await expect(6).assertEqual(number);
        } catch (e) {
            await console.log(TAG + "resultSet count4 error: " + e);
        }
        done();
        console.log(TAG + "************* countTest004 end   *************");
    })
    console.log(TAG + "*************Unit Test End*************");
})