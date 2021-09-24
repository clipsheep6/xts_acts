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
import ohos_data_ability from '@ohos.ability.dataability';

const TAG = "[RDB_JSKITS_TEST]"
const CREATE_TABLE_TEST = "CREATE TABLE IF NOT EXISTS test (" + "id INTEGER PRIMARY KEY AUTOINCREMENT, " +
"name TEXT NOT NULL, " + "age INTEGER, " + "salary REAL, " + "blobType BLOB)";

const STORE_CONFIG = {
    path: "/data/user/0/com.huawei.samples.showcase/database/db/InsertTest.db"
}

const CALL_BACK = {
    onCreate: (rdbStore) => {
        rdbStore.executeSql(CREATE_TABLE_TEST)
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
        await ohos_data_rdb.deleteRdbStore("/data/user/0/com.huawei.samples.showcase/InsertTest.db");
    })

    console.log(TAG + "*************Unit Test Begin*************");
    it('testRdbStoreInsert0001', 0, async function (done) {
        var b = new ArrayBuffer(3)
        var u8 = new Uint8Array(5)
        u8[0] = 1;
        u8[1] = 2;
        u8[2] = 3;
        u8[3] = 4;
        u8[4] = 5;
        //var u8 = [1, 2, 3]
        console.log(TAG + "************* testRdbStoreInsert0001 start *************");
        {
            const valueBucket = {
                "name": "zhangsan",
                "age": 18,
                "salary": 100.5,
                "blobType": u8,
            }
            let insertPromise = rdbStore.insert("test", valueBucket)
            insertPromise.then(async (ret) => {
                expect(1).assertEqual(ret);
                await console.log(TAG + "insert first done: " + ret);
            }).catch((err) => {
                expect(null).assertFail();
            })
            await insertPromise
        }
        {
            const valueBucket = {
                "name": "lisi",
                "age": 18,
                "salary": 100.5,
                "blobType": u8,
            }
            let insertPromise = rdbStore.insert("test", valueBucket)
            insertPromise.then(async (ret) => {
                expect(2).assertEqual(ret);
                await console.log(TAG + "insert second done: " + ret);
            }).catch((err) => {
                expect(null).assertFail();
            })
            await insertPromise
        }
        {
            const valueBucket = {
                "name": "lisi",
                "age": 20,
                "salary": 150.5,
                "blobType": u8,
            }
            let insertPromise = rdbStore.insert("test", valueBucket)
            insertPromise.then(async (ret) => {
                expect(3).assertEqual(ret);
                await console.log(TAG + "insert third done: " + ret);
            }).catch((err) => {
                expect(null).assertFail();
            })
            await insertPromise
        }
        {
            const valueBucket = {
                "name": "rose",
                "age": 22,
                "salary": 200.5,
                "blobType": u8,
            }
            let predicates = new ohos_data_rdb.RdbPredicates("test")
            predicates.equalTo("name", "lisi").between("age", 16, 30).equalTo("age", 20)
            let changedRows = await rdbStore.update(valueBucket, predicates)
            expect(1).assertEqual(changedRows)
            await console.log(TAG + "updated row count: " + changedRows);
        }
        {
            let predicates = new ohos_data_rdb.RdbPredicates("test")
            predicates.equalTo("name", "zhangsan");
            let deletedRows = await rdbStore.delete(predicates)
            expect(1).assertEqual(deletedRows)
            await console.log(TAG + "deleted row count: " + deletedRows);
        }

        {
            let da = new ohos_data_ability.DataAbilityPredicates()
            da.equalTo("name", "rose").equalTo("age", 15).and().notEqualTo("name", "rose").between("name", "10", "50").or()
            .notBetween("age", "100", "500").limitAs(3).orderByDesc("name").distinct().groupBy(["age"]).indexedBy("age").offsetAs(2)

            console.log(TAG + "DataAbilityPredicates whereClause:" + da.whereClause )
            console.log(TAG + "DataAbilityPredicates whereArgs:" + da.whereArgs )
            console.log(TAG + "DataAbilityPredicates order:" + da.order )
            console.log(TAG + "DataAbilityPredicates limit:" + da.limit )
            console.log(TAG + "DataAbilityPredicates offset:" + da.offset )
            console.log(TAG + "DataAbilityPredicates distinct:" + da.isDistinct )
            console.log(TAG + "DataAbilityPredicates group:" + da.group )
            console.log(TAG + "DataAbilityPredicates index:" + da.index )
            console.log(TAG + "DataAbilityPredicates needAnd:" + da.isNeedAnd )
            console.log(TAG + "DataAbilityPredicates sorted:" + da.isSorted)
        }


        let dataAbilityPredicates = new ohos_data_ability.DataAbilityPredicates()
        dataAbilityPredicates.equalTo("name", "rose")
        let predicates = ohos_data_ability.createRdbPredicates("test", dataAbilityPredicates)

        // let predicates = new ohos_data_rdb.RdbPredicates("test")
        // predicates.equalTo("name", "rose")

        let resultSet = await rdbStore.query(predicates, ["id", "name", "age", "salary", "blobType"])
        try {
            await console.log(TAG + "resultSet query done");
            console.log(TAG + "===========resultSet sharedBlockName:" + resultSet.sharedBlockName);
            console.log(TAG + "===========resultSet sharedBlockAshmemFd:" + resultSet.sharedBlockAshmemFd);

            await console.log(TAG + "resultSet columnNames:" + resultSet.columnNames);
            await console.log(TAG + "resultSet columnCount:" + resultSet.columnCount);
            await console.log(TAG + "resultSet isEnded:" + resultSet.isEnded);
            await console.log(TAG + "resultSet isStarted:" + resultSet.isStarted);
            await console.log(TAG + "resultSet isClose:" + resultSet.isClose);
            await expect(true).assertEqual(resultSet.goToFirstRow())

            const id = resultSet.getLong(await resultSet.getColumnIndex("id"))
            const name = resultSet.getString(await resultSet.getColumnIndex("name"))
            const age = resultSet.getLong(await resultSet.getColumnIndex("age"))
            const salary = resultSet.getDouble(await resultSet.getColumnIndex("salary"))
            const blobType = resultSet.getBlob(await resultSet.getColumnIndex("blobType"))
            console.log(TAG + "{id=" + id + ", name=" + name + ", age=" + age + ", salary=" + salary + ", blobType=[" + blobType[0]+ ", " + blobType[3]+ ", " + blobType[4]+ "]");

            await expect(3).assertEqual(id);
            await expect("rose").assertEqual(name);
            await expect(22).assertEqual(age);
            await expect(200.5).assertEqual(salary);
            await expect(u8).assertEqual(blobType);
            await expect(u8[0]).assertEqual(blobType[0]);
            await expect(u8[1]).assertEqual(blobType[1]);
            await expect(u8[2]).assertEqual(blobType[2]);

            await expect(true).assertEqual(resultSet.goToNextRow())
            await console.log(TAG + "resultSet goToNextRow done");
        } catch (e) {
            await console.log(TAG + "resultSet exception accured.");
            expect(null).assertFail();
        }
        resultSet.close();
        await console.log(TAG + "resultSet isClose:" + resultSet.isClose);
        resultSet = null

        done();
        console.log(TAG + "************* testRdbStoreInsert0001 end   *************");
    })

    it('testRdbStoreInsert0002', 0, async function (done) {
        console.log(TAG + "************* testRdbStoreInsert0002 start *************");
        console.log(TAG + "************* testRdbStoreInsert0002 end   *************");
    })
    console.log(TAG + "*************Unit Test End*************");
})