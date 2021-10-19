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
const createUserTableTest = "CREATE TABLE IF NOT EXISTS user (" + "id INTEGER PRIMARY KEY AUTOINCREMENT, "
+ "name TEXT NOT NULL, " + "age INTEGER, " + "salary REAL)";
const createBookTableTest = "CREATE TABLE IF NOT EXISTS book (" + "id INTEGER PRIMARY KEY AUTOINCREMENT, "
+ "name TEXT NOT NULL, " + "userId INTEGER)";
const STORE_CONFIG = {
    name: "joinTest.db",
    storageMode: 0, // ohosDataRdb.StorageMode.MODE_DISK,
    readOnly: false,
    fileType: 0, //ohosDataRdb.DatabaseFileType.NORMAL,
    encryptKey: [1, 2, 3, 4, 5, 6, 7],
    journalMode: 0, // ohosDataRdb.JournalMode.MODE_DELETE,
    syncMode: 0, //ohosDataRdb.SyncMode.MODE_OFF

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
describe('rdbStoreJoinTest', function () {
    beforeAll(async function () {
        rdbStore = await ohosDataRdb.getRdbStore(STORE_CONFIG, 1, CALL_BACK);
        await rdbStore.executeSql(createUserTableTest, null);
        await rdbStore.executeSql(createBookTableTest, null);
        const valueBucket = {
            "name": "zhangsan",
            "age": 29,
            "salary": 100.5,
        }
        const valueBucket1 = {
            "name": "lisi",
            "age": 30,
            "salary": 200.5,
        }
        const valueBucket2 = {
            "name": "wangwu",
            "age": 30,
            "salary": 300.5,
        }
        const valueBucket3 = {
            "name": "sunliu",
            "age": 30,
            "salary": 400.5,
        }
        const valueBucket4 = {
            "name": "maqi",
            "age": 30,
            "salary": 500.5,
        }
        let User = [valueBucket, valueBucket1, valueBucket2, valueBucket3, valueBucket4];
        for (var i = 0; i < User.length; i++) {
            let object1 = [];
            object1.add(User[i].id);
            object1.add(User[i].name);
            object1.add(User[i].age);
            object1.add(User[i].salary);
            await rdbStore.executeSql(createUserTableTest, object1);
        }
        const valueBucket5 = {
            "name": "sanguo",
            "userId": 1,
        }
        const valueBucket6 = {
            "name": "xiyouji",
            "userId": 2,
        }
        const valueBucket7 = {
            "name": "shuihuchuan",
            "userId": 3,
        }
        let books = [valueBucket5, valueBucket6, valueBucket7];
        for (var i = 0;i < books.length; i++) {
            let object = [];
            object.add(books[i].id);
            object.add(books[i].name);
            object.add(books[i].userId);
            await rdbStore.executeSql(createBookTableTest, object);
        }
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
        await ohosDataRdb.deleteRdbStore("joinTest.db");
    })
    console.log(TAG + "*************Unit Test Begin*************");

    /*
     * @tc.name RdbStore Join interface test
     * @tc.number SUB_DDM_AppDataFWK_JSRdbStore_0010
     * @tc.desc RdbStore Join interface test
     */

    it('JoinTest0001', 0, async function (done) {
        console.log(TAG + "************* JoinTest0001 start *************");
        let predicates = new ohosDataRdb.RdbPredicates("user");
        predicates.innerJoin("book").on("user.id = book.userId").equalTo("name", "sanguo");
        await console.log("predicates join1 done");
        let resultSet = await rdbStore.query(predicates, ["id", "name", "age", "salary"]);
        await console.log("aaaa1")
        await expect(false).assertEqual(resultSet.goToFirstRow());
        await expect(false).assertEqual(resultSet.goToNextRow())
        done();
        console.log(TAG + "************* JoinTest0001 end   *************");
    })

    /*
     * @tc.name RdbStore Join interface test
     * @tc.number SUB_DDM_AppDataFWK_JSRdbStore_0020
     * @tc.desc RdbStore Join interface test
     */

    it('JoinTest0002', 0, async function (done) {
        console.log(TAG + "************* JoinTest0002 start *************");
        let predicates = new ohosDataRdb.RdbPredicates("user");
        predicates.crossJoin("book").on("user.userId = book.id");
        await console.log("predicates join2 done");
        let resultSet = await rdbStore.query(predicates, ["id", "name", "age", "salary"]);
        await console.log("aaaa3" + resultSet.goToNextRow());
        let count = 0;
        if (!resultSet.goToFirstRow()) {
            count = 0;
        } else {
            while (resultSet.goToNextRow()) {
                count++
            }
        }
        await console.log("aaaa4 " + count);
        await expect(0).assertEqual(count);
        done();
        console.log(TAG + "************* JoinTest0002 end   *************");
    })

    /*
     * @tc.name RdbStore Join interface test
     * @tc.number SUB_DDM_AppDataFWK_JSRdbStore_0030
     * @tc.desc RdbStore Join interface test
     */

    it('JoinTest0003', 0, async function (done) {
        console.log(TAG + "************* JoinTest0003 start *************");
        let predicates = new ohosDataRdb.RdbPredicates("user");
        predicates.leftOuterJoin("book").on("user.userId = book.id");
        await console.log("predicates join3 done");
        let resultSet = await rdbStore.query(predicates, ["id", "name", "age", "salary"]);
        await console.log("leftOuterJoin3 resultSet");
        let count = 0;
        if (!resultSet.goToFirstRow()) {
            count = 0;
        } else {
            while (resultSet.goToNextRow()) {
                count++
            }
        }
        await expect(0).assertEqual(count);
        await console.log("leftOuterJoin33 done" + count);
        done();
        console.log(TAG + "************* JoinTest0003 end   *************");
    })

    /*
     * @tc.name RdbStore Join interface test
     * @tc.number SUB_DDM_AppDataFWK_JSRdbStore_0040
     * @tc.desc RdbStore Join interface test
     */

    it('JoinTest0004', 0, async function (done) {
        console.log(TAG + "************* JoinTest0004 start *************");
        let predicates = new ohosDataRdb.RdbPredicates("user");
        predicates.innerJoin("book").using("userId").equalTo("name", "sanguo");
        await console.log("predicates join4 done");
        let resultSet = await rdbStore.query(predicates, ["id", "name", "age", "salary"]);
        const id = await resultSet.getLong(await resultSet.getColumnIndex("id"));
        const name = await resultSet.getString(await resultSet.getColumnIndex("name"));
        const age = await resultSet.getLong(await resultSet.getColumnIndex("age"));
        const salary = await resultSet.getDouble(await resultSet.getColumnIndex("salary"));
        await console.log(TAG + "id=" + id + ", name=" + name + ", age="
        + age + ", salary=" + salary);
        await expect(false).assertEqual(resultSet.goToNextRow())
        await console.log(TAG + "resultSet goToNextRow done");
        await console.log("innerJoin4 done" + predicates.joinCount);
        await expect(1).assertEqual(predicates.joinCount)
        done();
        console.log(TAG + "************* JoinTest0004 end   *************");
    })
    console.log(TAG + "*************Unit Test End*************");
})