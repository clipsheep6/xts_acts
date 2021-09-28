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
import data_rdb from '@ohos.data.rdb'

const TAG = "[RDB_JSKITS_TEST]"
const CREATE_TABLE_TEST = "CREATE TABLE IF NOT EXISTS test (" + "id INTEGER PRIMARY KEY AUTOINCREMENT, " + "data1 text," + "data2 long, " + "data3 double," + "data4 blob)";

const STORE_CONFIG = {
    name: "Resultset.db",
}
var rdbStore = undefined;

describe('rdbResultSetTest', function () {
    beforeAll(async function () {
        console.info(TAG + 'beforeAll')
        rdbStore = await data_rdb.getRdbStore(STORE_CONFIG, 1);
        await rdbStore.executeSql(CREATE_TABLE_TEST, null);
        await createTest();
    })

    beforeEach(async function () {
        console.info(TAG + 'beforeEach')
    })

    afterEach(function () {
        console.info(TAG + 'afterEach')
    })

    afterAll(async function () {
        console.info(TAG + 'afterAll')
        rdbStore = null
        await data_rdb.deleteRdbStore("Resultset.db");
    })
    //插入数据
    async function createTest() {
        console.log(TAG + "createTest data start");
        {
            var u8 = new Uint8Array([1, 2, 3])
            const valueBucket = {
                "data1": "hello",
                "data2": 10,
                "data3": 1.0,
                "data4": u8,
            }
            await rdbStore.insert("test", valueBucket)
        }
        {
            var u8 = new Uint8Array([3, 4, 5])
            const valueBucket = {
                "data1": "2",
                "data2": -5,
                "data3": 2.5,
                "data4": u8,
            }
            await rdbStore.insert("test", valueBucket)
        }
        {
            var u8 = new Uint8Array(0)
            const valueBucket = {
                "data1": "hello world",
                "data2": 3,
                "data3": 1.8,
                "data4": u8,
            }
            await rdbStore.insert("test", valueBucket)
        }
        console.log(TAG + "createTest data end");
    }

    /**
     * @tc.name resultSet getBlob normal test
     * @tc.number SUB_DDM_AppDataFWK_JSRDB_ResultSet_0010
     * @tc.desc resultSet getBlob normal test
     */
    it('testGetBlob0001', 0, async function (done) {
        console.log(TAG + "************* testGetBlob0001 start *************");
        let predicates = await new data_rdb.RdbPredicates("test")
        let resultSet = await rdbStore.query(predicates)
        try {
            {
                expect(true).assertEqual(resultSet.goToFirstRow())
                const id = resultSet.getLong(resultSet.getColumnIndex("id"))
                const data4 = resultSet.getBlob(resultSet.getColumnIndex("data4"))
                console.log(TAG + "id=" + id + ", data4=" + data4);
                expect(1).assertEqual(data4[0]);
                expect(2).assertEqual(data4[1]);
                expect(3).assertEqual(data4[2]);
            }
            {
                expect(true).assertEqual(resultSet.goToNextRow())
                const id = resultSet.getLong(resultSet.getColumnIndex("id"))
                const data4 = resultSet.getBlob(resultSet.getColumnIndex("data4"))
                console.log(TAG + "id=" + id + ", data4=" + data4);
                expect(3).assertEqual(data4[0]);
                expect(4).assertEqual(data4[1]);
                expect(5).assertEqual(data4[2]);
            }
            {
                expect(true).assertEqual(resultSet.goToNextRow())
                const id = resultSet.getLong(resultSet.getColumnIndex("id"))
                const data4 = resultSet.getBlob(resultSet.getColumnIndex("data4"))
                console.log(TAG + "id=" + id + ", data4=" + data4);
                expect("").assertEqual(data4);
            }
            resultSet.close();
            expect(true).assertEqual(resultSet.isClosed)
        } catch (e) {
            expect(null).assertFail();
        }
        resultSet = null
        done();
        console.log(TAG + "************* testGetBlob0001 end *************");
    })

    /**
     * @tc.name resultSet isStarted normal test
     * @tc.number SUB_DDM_AppDataFWK_JSRDB_ResultSet_0020
     * @tc.desc resultSet isStarted normal test
     */
    it('testIsStarted0001', 0, async function (done) {
        console.log(TAG + "************* testIsStarted0001 start *************");
        let predicates = await new data_rdb.RdbPredicates("test")
        let resultSet = await rdbStore.query(predicates)
        try {
            expect(false).assertEqual(resultSet.isStarted)

            expect(true).assertEqual(resultSet.goToNextRow())
            expect(true).assertEqual(resultSet.isStarted)

            expect(true).assertEqual(resultSet.goToNextRow())
            expect(true).assertEqual(resultSet.isStarted)

            expect(true).assertEqual(resultSet.goToNextRow())
            expect(true).assertEqual(resultSet.isStarted)

            expect(false).assertEqual(resultSet.goToNextRow())
            expect(true).assertEqual(resultSet.isStarted)

            resultSet.close();
            expect(true).assertEqual(resultSet.isClosed)
        } catch (e) {
            expect(null).assertFail();
        }
        resultSet = null
        done();
        console.log(TAG + "************* testIsStarted0001 end *************");
    })

    /**
     * @tc.name resultSet isStarted with no result test
     * @tc.number SUB_DDM_AppDataFWK_JSRDB_ResultSet_0021
     * @tc.desc resultSet isStarted with no result test
     */
    it('testIsStarted0002', 0, async function (done) {
        console.log(TAG + "************* testIsStarted0002 start *************");
        let predicates = await new data_rdb.RdbPredicates("test")
        predicates.equalTo("name", "wangwu");
        let resultSet = await rdbStore.query(predicates)
        try {
            expect(false).assertEqual(resultSet.isStarted)
            resultSet.close();
            expect(true).assertEqual(resultSet.isClosed)
        } catch (e) {
            expect(null).assertFail();
        }
        resultSet = null
        done();
        console.log(TAG + "************* testIsStarted0002 end *************");
    })


    /**
     * @tc.name resultSet isEnded normal test
     * @tc.number SUB_DDM_AppDataFWK_JSRDB_ResultSet_0030
     * @tc.desc resultSet isEnded normal test
     */
    it('testIsEnded0001', 0, async function (done) {
        console.log(TAG + "************* testIsEnded0001 start *************");
        let predicates = await new data_rdb.RdbPredicates("test")
        let resultSet = await rdbStore.query(predicates)
        try {
            expect(false).assertEqual(resultSet.isEnded)

            expect(true).assertEqual(resultSet.goToNextRow())
            expect(false).assertEqual(resultSet.isEnded)

            expect(true).assertEqual(resultSet.goToNextRow())
            expect(false).assertEqual(resultSet.isEnded)

            expect(true).assertEqual(resultSet.goToNextRow())
            expect(false).assertEqual(resultSet.isEnded)

            expect(false).assertEqual(resultSet.goToNextRow())
            expect(true).assertEqual(resultSet.isEnded)

            resultSet.close();
            expect(true).assertEqual(resultSet.isClosed)
        } catch (e) {
            expect(null).assertFail();
        }
        resultSet = null
        done();
        console.log(TAG + "************* testIsEnded0001 end *************");
    })

    /**
     * @tc.name resultSet rowCount normal test
     * @tc.number SUB_DDM_AppDataFWK_JSRDB_ResultSet_0040
     * @tc.desc resultSet rowCount normal test
     */
    it('testRowCount0001', 0, async function (done) {
        console.log(TAG + "************* testRowCount0001 start *************");
        let predicates = await new data_rdb.RdbPredicates("test")
        let resultSet = await rdbStore.query(predicates)
        try {
            expect(3).assertEqual(resultSet.rowCount)
        } catch (e) {
            expect(null).assertFail();
        }
        resultSet = null
        done();
        console.log(TAG + "************* testRowCount0001 end *************");
    })

    /**
     * @tc.name resultSet rowCount with no result test
     * @tc.number SUB_DDM_AppDataFWK_JSRDB_ResultSet_0041
     * @tc.desc resultSet rowCount with no result test
     */
    it('testRowCount0002', 0, async function (done) {
        console.log(TAG + "************* testRowCount0002 start *************");
        let predicates = await new data_rdb.RdbPredicates("test")
        predicates.equalTo("name", "wangwu");
        let resultSet = await rdbStore.query(predicates)
        try {
            expect(-1).assertEqual(resultSet.rowCount)
        } catch (e) {
            expect(null).assertFail();
        }
        resultSet = null
        done();
        console.log(TAG + "************* testRowCount0002 end *************");
    })

    /**
     * @tc.name resultSet getLong test
     * @tc.number SUB_DDM_AppDataFWK_JSRDB_ResultSet_0050
     * @tc.desc resultSet getLong test
     */
    it('testGetLong0001', 0, async function (done) {
        console.log(TAG + "************* testGetLong0001 start *************");
        let predicates = await new data_rdb.RdbPredicates("test")
        let resultSet = await rdbStore.query(predicates)
        try {
            {
                expect(true).assertEqual(resultSet.goToFirstRow())
                const id = resultSet.getLong(resultSet.getColumnIndex("id"))
                const data2 = resultSet.getLong(resultSet.getColumnIndex("data2"))
                console.log(TAG + "id=" + id + ", data2=" + data2);
                expect(10).assertEqual(data2);
            }
            {
                expect(true).assertEqual(resultSet.goToNextRow())
                const id = resultSet.getLong(resultSet.getColumnIndex("id"))
                const data1 = resultSet.getLong(resultSet.getColumnIndex("data1"))
                const data2 = resultSet.getLong(resultSet.getColumnIndex("data2"))
                console.log(TAG + "id=" + id + ", data1=" + data1 + ", data2=" + data2);
                expect(2).assertEqual(data1);
                expect(-5).assertEqual(data2);
            }
            resultSet.close();
            expect(true).assertEqual(resultSet.isClosed)
        } catch (e) {
            expect(null).assertFail();
        }
        resultSet = null
        done();
        console.log(TAG + "************* testGetLong0001 end *************");
    })

    /**
     * @tc.name resultSet getString test
     * @tc.number SUB_DDM_AppDataFWK_JSRDB_ResultSet_0060
     * @tc.desc resultSet getString test
     */
    it('testGetString0001', 0, async function (done) {
        console.log(TAG + "************* testGetString0001 start *************");
        let predicates = await new data_rdb.RdbPredicates("test")
        let resultSet = await rdbStore.query(predicates)
        {
            expect(true).assertEqual(resultSet.goToFirstRow())
            const id = resultSet.getLong(resultSet.getColumnIndex("id"))
            const data1 = resultSet.getString(resultSet.getColumnIndex("data1"))
            const data2 = resultSet.getString(resultSet.getColumnIndex("data2"))
            const data3 = resultSet.getString(resultSet.getColumnIndex("data3"))
            console.log(TAG + "id=" + id + ", data1=" + data1 + ", data2=" + data2 + ", data3=" + data3);
            expect("hello").assertEqual(data1);
            expect("10").assertEqual(data2);
            expect("1").assertEqual(data3);
        }
        {
            expect(true).assertEqual(resultSet.goToNextRow())
            const id = resultSet.getLong(resultSet.getColumnIndex("id"))
            const data1 = resultSet.getString(resultSet.getColumnIndex("data1"))
            const data2 = resultSet.getString(resultSet.getColumnIndex("data2"))
            const data3 = resultSet.getString(resultSet.getColumnIndex("data3"))
            console.log(TAG + "id=" + id + ", data1=" + data1 + ", data2=" + data2 + ", data3=" + data3);
            expect("2").assertEqual(data1);
            expect("-5").assertEqual(data2);
            expect("2.5").assertEqual(data3);
        }
        resultSet = null
        done();
        console.log(TAG + "************* testGetString0001 end *************");
    })

    /**
     * @tc.name resultSet isClosed test
     * @tc.number SUB_DDM_AppDataFWK_JSRDB_ResultSet_0070
     * @tc.desc resultSet isClosed test
     */
    it('testIsClosed0001', 0, async function (done) {
        console.log(TAG + "************* testIsClosed0001 start *************");
        let predicates = await new data_rdb.RdbPredicates("test")
        let resultSet = await rdbStore.query(predicates)

        expect(3).assertEqual(resultSet.rowCount)
        resultSet.close();
        expect(true).assertEqual(resultSet.isClosed)

        resultSet = null
        done();
        console.log(TAG + "************* testIsClosed0001 end *************");
    })

    /**
     * @tc.name resultSet isClosed with not close test
     * @tc.number SUB_DDM_AppDataFWK_JSRDB_ResultSet_0071
     * @tc.desc resultSet isClosed with not close test
     */
    it('testIsClosed0002', 0, async function (done) {
        console.log(TAG + "************* testIsClosed0002 start *************");
        let predicates = await new data_rdb.RdbPredicates("test")
        let resultSet = await rdbStore.query(predicates)

        expect(false).assertEqual(resultSet.isClosed)

        resultSet = null
        done();
        console.log(TAG + "************* testIsClosed0002 end *************");
    })

    /**
     * @tc.name resultSet columnCount test
     * @tc.number SUB_DDM_AppDataFWK_JSRDB_ResultSet_0080
     * @tc.desc resultSet columnCount test
     */
    it('testColumnCount0001', 0, async function (done) {
        console.log(TAG + "************* testColumnCount0001 start *************");
        {
            let predicates = await new data_rdb.RdbPredicates("test")
            let resultSet = await rdbStore.query(predicates)
            expect(5).assertEqual(resultSet.columnCount);
            resultSet = null;
            done();
            console.log(TAG + "************* testColumnCount0001 end *************");
        }
    })

    /**
     * @tc.name resultSet columnCount test
     * @tc.number SUB_DDM_AppDataFWK_JSRDB_ResultSet_0081
     * @tc.desc resultSet columnCount test
     */
    it('testColumnCount0002', 0, async function (done) {
        console.log(TAG + "************* testColumnCount0002 start *************");
        {
            let predicates = await new data_rdb.RdbPredicates("test")
            predicates.equalTo("name", "wangwu");
            let resultSet = await rdbStore.query(predicates)
            expect(0).assertEqual(resultSet.columnCount);
            resultSet = null;
            done();
            console.log(TAG + "************* testColumnCount0002 end *************");
        }
    })

    /**
     * @tc.name resultSet rowIndex test
     * @tc.number SUB_DDM_AppDataFWK_JSRDB_ResultSet_0090
     * @tc.desc resultSet rowIndex test
     */
    it('testRowIndex0001', 0, async function (done) {
        console.log(TAG + "************* testRowIndex0001 *************");
        {
            let predicates = await new data_rdb.RdbPredicates("test")
            let resultSet = await rdbStore.query(predicates)
            {
                expect(true).assertEqual(resultSet.goToFirstRow())
                expect(0).assertEqual(resultSet.rowIndex)
            }

            resultSet = null;
            done();
            console.log(TAG + "************* testRowIndex0001 end *************");
        }
    })

    /**
     * @tc.name resultSet rowIndex at last row test
     * @tc.number SUB_DDM_AppDataFWK_JSRDB_ResultSet_0091
     * @tc.desc resultSet rowIndex at last row test
     */
    it('testRowIndex0002', 0, async function (done) {
        console.log(TAG + "************* testRowIndex0002 *************");
        {
            let predicates = await new data_rdb.RdbPredicates("test")
            let resultSet = await rdbStore.query(predicates)
            {
                expect(true).assertEqual(resultSet.goToLastRow())
                expect(2).assertEqual(resultSet.rowIndex)
            }

            resultSet = null;
            done();
            console.log(TAG + "************* testRowIndex0002 end *************");
        }
    })

    /**
     * @tc.name resultSet goToFirstRow normal test
     * @tc.number SUB_DDM_AppDataFWK_JSRDB_ResultSet_0100
     * @tc.desc resultSet goToFirstRow normal test
     */
    it('testGoToFirstRow0001', 0, async function (done) {
        console.log(TAG + "************* testGoToFirstRow0001 start *************");

        let predicates = await new data_rdb.RdbPredicates("test")
        let resultSet = await rdbStore.query(predicates)
        try {
            expect(true).assertEqual(resultSet.goToFirstRow())
            resultSet.close();
        } catch (e) {
            expect(null).assertFail();
        }
        resultSet = null
        done();
        console.log(TAG + "************* testGoToFirstRow0001 end *************");
    })

    /**
     * @tc.name resultSet goToFirstRow with no result test
     * @tc.number SUB_DDM_AppDataFWK_JSRDB_ResultSet_0101
     * @tc.desc resultSet goToFirstRow with no result test
     */
    it('testGoToFirstRow0002', 0, async function (done) {
        console.log(TAG + "************* testGoToFirstRow0002 start *************");

        let predicates = await new data_rdb.RdbPredicates("test")
        predicates.equalTo("name", "wangwu");
        let resultSet = await rdbStore.query(predicates)
        try {
            expect(false).assertEqual(resultSet.goToFirstRow())
        } catch (e) {
            expect(null).assertFail();
        }
        resultSet = null
        done();
        console.log(TAG + "************* testGoToFirstRow0002 end *************");
    })

    /**
     * @tc.name resultSet goToFirstRow test
     * @tc.number SUB_DDM_AppDataFWK_JSRDB_ResultSet_0102
     * @tc.desc resultSet goToFirstRow test
     */
    it('testGoToFirstRow0003', 0, async function (done) {
        console.log(TAG + "************* testGoToFirstRow0003 start *************");

        let predicates = await new data_rdb.RdbPredicates("test")
        let resultSet = await rdbStore.query(predicates)
        try {
            expect(true).assertEqual(resultSet.goToFirstRow())
            expect(true).assertEqual(resultSet.goToNextRow())
            expect(true).assertEqual(resultSet.goToFirstRow())
        } catch (e) {
            expect(null).assertFail();
        }
        resultSet = null
        done();
        console.log(TAG + "************* testGoToFirstRow0003 end *************");
    })

    /**
     * @tc.name resultSet goToLastRow test
     * @tc.number SUB_DDM_AppDataFWK_JSRDB_ResultSet_0110
     * @tc.desc resultSet goToFirstRow test
     */
    it('testGoToLastRow0001', 0, async function (done) {
        console.log(TAG + "************* testGoToLastRow0001 start *************");
        {
            let predicates = await new data_rdb.RdbPredicates("test")
            let resultSet = await rdbStore.query(predicates)
            {
                expect(true).assertEqual(resultSet.goToLastRow())
            }
            resultSet = null;
            done();
            console.log(TAG + "************* testGoToLastRow0001 end *************");
        }
    })

    /**
     * @tc.name resultSet goToLastRow with no result test
     * @tc.number SUB_DDM_AppDataFWK_JSRDB_ResultSet_0111
     * @tc.desc resultSet goToLastRow with no result test
     */
    it('testGoToLastRow0002', 0, async function (done) {
        console.log(TAG + "************* testGoToLastRow0002 start *************");
        {
            let predicates = await new data_rdb.RdbPredicates("test")
            predicates.equalTo("name", "wangwu");
            let resultSet = await rdbStore.query(predicates)
            {
                expect(false).assertEqual(resultSet.goToLastRow())
            }
            resultSet = null;
            done();
            console.log(TAG + "************* testGoToLastRow0002 end *************");
        }
    })

    /**
     * @tc.name resultSet goToLastRow test
     * @tc.number SUB_DDM_AppDataFWK_JSRDB_ResultSet_0112
     * @tc.desc resultSet goToLastRow test
     */
    it('testGoToLastRow0003', 0, async function (done) {
        console.log(TAG + "************* testGoToLastRow0003 start *************");
        {
            let predicates = await new data_rdb.RdbPredicates("test")
            let resultSet = await rdbStore.query(predicates)
            {
                expect(true).assertEqual(resultSet.goToLastRow())
                expect(true).assertEqual(resultSet.goToPreviousRow())
                expect(true).assertEqual(resultSet.goToLastRow())
            }
            resultSet = null;
            done();
            console.log(TAG + "************* testGoToLastRow0003 end *************");
        }
    })

    /**
     * @tc.name resultSet goToNextRow test
     * @tc.number SUB_DDM_AppDataFWK_JSRDB_ResultSet_0120
     * @tc.desc resultSet goToNextRow test
     */
    it('testGoToNextRow0001', 0, async function (done) {
        console.log(TAG + "************* testGoToNextRow0001 start *************");
        {
            let predicates = await new data_rdb.RdbPredicates("test")
            let resultSet = await rdbStore.query(predicates)
            {
                expect(true).assertEqual(resultSet.goToNextRow())
            }
            resultSet = null;
            done();
            console.log(TAG + "************* testGoToNextRow0001 end *************");
        }
    })

    /**
     * @tc.name resultSet goToNextRow with no result test
     * @tc.number SUB_DDM_AppDataFWK_JSRDB_ResultSet_0121
     * @tc.desc resultSet goToNextRow with no result test
     */
    it('testGoToNextRow0002', 0, async function (done) {
        console.log(TAG + "************* testGoToNextRow0002 start *************");
        {
            let predicates = await new data_rdb.RdbPredicates("test")
            predicates.equalTo("name", "wangwu");
            let resultSet = await rdbStore.query(predicates)
            {
                expect(false).assertEqual(resultSet.goToNextRow())
            }
            resultSet = null;
            done();
            console.log(TAG + "************* testGoToNextRow0002 end *************");
        }
    })

    /**
     * @tc.name resultSet goToNextRow test
     * @tc.number SUB_DDM_AppDataFWK_JSRDB_ResultSet_0122
     * @tc.desc resultSet goToNextRow test
     */
    it('testGoToNextRow0003', 0, async function (done) {
        console.log(TAG + "************* testGoToNextRow0003 start *************");
        {
            let predicates = await new data_rdb.RdbPredicates("test")
            let resultSet = await rdbStore.query(predicates)
            {
                expect(true).assertEqual(resultSet.goToFirstRow())
                expect(true).assertEqual(resultSet.goToNextRow())
                expect(true).assertEqual(resultSet.goToPreviousRow())
                expect(true).assertEqual(resultSet.goToNextRow())
            }
            resultSet = null;
            done();
            console.log(TAG + "************* testGoToNextRow0003 end *************");
        }
    })

    /**
     * @tc.name resultSet goToNextRow after last row test
     * @tc.number SUB_DDM_AppDataFWK_JSRDB_ResultSet_0123
     * @tc.desc resultSet goToNextRow after last row test
     */
    it('testGoToNextRow0004', 0, async function (done) {
        console.log(TAG + "************* testGoToNextRow0004 start *************");
        {
            let predicates = await new data_rdb.RdbPredicates("test")
            let resultSet = await rdbStore.query(predicates)
            {
                expect(true).assertEqual(resultSet.goToLastRow())
                expect(false).assertEqual(resultSet.goToNextRow())
            }
            resultSet = null;
            done();
            console.log(TAG + "************* testGoToNextRow0004 end *************");
        }
    })

    /**
     * @tc.name resultSet goToPreviousRow test
     * @tc.number SUB_DDM_AppDataFWK_JSRDB_ResultSet_0130
     * @tc.desc resultSet goToPreviousRow test
     */
    it('testGoToPreviousRow0001', 0, async function (done) {
        console.log(TAG + "************* testGoToPreviousRow0001 start *************");
        {
            let predicates = await new data_rdb.RdbPredicates("test")
            let resultSet = await rdbStore.query(predicates)
            {
                expect(false).assertEqual(resultSet.goToPreviousRow())
            }
            resultSet = null;
            done();
            console.log(TAG + "************* testGoToPreviousRow0001 end *************");
        }
    })

    /**
     * @tc.name resultSet goToPreviousRow with no result test
     * @tc.number SUB_DDM_AppDataFWK_JSRDB_ResultSet_0131
     * @tc.desc resultSet goToPreviousRow with no result test
     */
    it('testGoToPreviousRow0002', 0, async function (done) {
        console.log(TAG + "************* testGoToPreviousRow0002 start *************");
        {
            let predicates = await new data_rdb.RdbPredicates("test")
            predicates.equalTo("name", "wangwu");
            let resultSet = await rdbStore.query(predicates)
            {
                expect(false).assertEqual(resultSet.goToPreviousRow())
            }
            resultSet = null;
            done();
            console.log(TAG + "************* testGoToPreviousRow0002 end *************");
        }
    })

    /**
     * @tc.name resultSet goToPreviousRow test
     * @tc.number SUB_DDM_AppDataFWK_JSRDB_ResultSet_0132
     * @tc.desc resultSet goToPreviousRow test
     */
    it('testGoToPreviousRow0003', 0, async function (done) {
        console.log(TAG + "************* testGoToPreviousRow0003 start *************");
        {
            let predicates = await new data_rdb.RdbPredicates("test")
            let resultSet = await rdbStore.query(predicates)
            {
                expect(true).assertEqual(resultSet.goToFirstRow())
                expect(true).assertEqual(resultSet.goToNextRow())
                expect(true).assertEqual(resultSet.goToPreviousRow())
            }
            resultSet = null;
            done();
            console.log(TAG + "************* testGoToPreviousRow0003 end *************");
        }
    })

    /**
     * @tc.name resultSet goToPreviousRow after last row test
     * @tc.number SUB_DDM_AppDataFWK_JSRDB_ResultSet_0133
     * @tc.desc resultSet goToPreviousRow after last row test
     */
    it('testGoToPreviousRow0004', 0, async function (done) {
        console.log(TAG + "************* testGoToPreviousRow0004 start *************");
        {
            let predicates = await new data_rdb.RdbPredicates("test")
            let resultSet = await rdbStore.query(predicates)
            {
                expect(true).assertEqual(resultSet.goToLastRow())
                expect(true).assertEqual(resultSet.goToPreviousRow())
            }
            resultSet = null;
            done();
            console.log(TAG + "************* testGoToPreviousRow0004 end *************");
        }
    })

    /**
     * @tc.name resultSet goTo test
     * @tc.number SUB_DDM_AppDataFWK_JSRDB_ResultSet_0140
     * @tc.desc resultSet goTo test
     */
    it('testGoTo0001', 0, async function (done) {
        console.log(TAG + "************* testGoTo0001 start *************");
        {
            let predicates = await new data_rdb.RdbPredicates("test")
            let resultSet = await rdbStore.query(predicates)
            {
                expect(true).assertEqual(resultSet.goToFirstRow())
                resultSet.goTo(1)
                expect(1).assertEqual(resultSet.rowIndex)
            }
            resultSet = null;
            done();
            console.log(TAG + "************* testGoTo0001 end *************");
        }
    })

    /**
     * @tc.name resultSet goTo with no result test
     * @tc.number SUB_DDM_AppDataFWK_JSRDB_ResultSet_0141
     * @tc.desc resultSet goTo with no result test
     */
    it('testGoTo0002', 0, async function (done) {
        console.log(TAG + "************* testGoTo0002 start *************");
        {
            let predicates = await new data_rdb.RdbPredicates("test")
            predicates.equalTo("name", "wangwu");
            let resultSet = await rdbStore.query(predicates)
            {
                resultSet.goTo(1)
                expect(-1).assertEqual(resultSet.rowIndex)
            }
            resultSet = null;
            done();
            console.log(TAG + "************* testGoTo0002 end *************");
        }
    })

    /**
     * @tc.name resultSet goTo test
     * @tc.number SUB_DDM_AppDataFWK_JSRDB_ResultSet_0142
     * @tc.desc resultSet goTo test
     */
    it('testGoTo0003', 0, async function (done) {
        console.log(TAG + "************* testGoTo0003 start *************");
        {
            let predicates = await new data_rdb.RdbPredicates("test")
            let resultSet = await rdbStore.query(predicates)
            {
                expect(true).assertEqual(resultSet.goToFirstRow())
                expect(true).assertEqual(resultSet.goToNextRow())
                resultSet.goTo(1)
                expect(2).assertEqual(resultSet.rowIndex)
            }
            resultSet = null;
            done();
            console.log(TAG + "************* testGoTo0003 end *************");
        }
    })

    /**
     * @tc.name resultSet goTo after last row test
     * @tc.number SUB_DDM_AppDataFWK_JSRDB_ResultSet_0143
     * @tc.desc resultSet goTo after last row test
     */
    it('testGoTo0004', 0, async function (done) {
        console.log(TAG + "************* testGoTo0004 start *************");
        {
            let predicates = await new data_rdb.RdbPredicates("test")
            let resultSet = await rdbStore.query(predicates)
            {
                expect(true).assertEqual(resultSet.goToLastRow())
                resultSet.goTo(5)
                expect(3).assertEqual(resultSet.rowIndex)
            }
            resultSet = null;
            done();
            console.log(TAG + "************* testGoTo0004 end *************");
        }
    })

    /**
     * @tc.name resultSet goToRow test
     * @tc.number SUB_DDM_AppDataFWK_JSRDB_ResultSet_0150
     * @tc.desc resultSet goToRow test
     */
    it('testGoToRow0001', 0, async function (done) {
        console.log(TAG + "************* testGoToRow0001 start *************");
        {
            let predicates = await new data_rdb.RdbPredicates("test")
            let resultSet = await rdbStore.query(predicates)
            {
                expect(true).assertEqual(resultSet.goToFirstRow())
                resultSet.goToRow(1)
                expect(1).assertEqual(resultSet.rowIndex)
            }
            resultSet = null;
            done();
            console.log(TAG + "************* testGoToRow0001 end *************");
        }
    })

    /**
     * @tc.name resultSet goToRow with no result test
     * @tc.number SUB_DDM_AppDataFWK_JSRDB_ResultSet_0151
     * @tc.desc resultSet goToRow with no result test
     */
    it('testGoToRow0002', 0, async function (done) {
        console.log(TAG + "************* testGoToRow0002 start *************");
        {
            let predicates = await new data_rdb.RdbPredicates("test")
            predicates.equalTo("name", "wangwu");
            let resultSet = await rdbStore.query(predicates)
            {
                resultSet.goToRow(1)
                expect(-1).assertEqual(resultSet.rowIndex)
            }
            resultSet = null;
            done();
            console.log(TAG + "************* testGoToRow0002 end *************");
        }
    })

    /**
     * @tc.name resultSet goToRow test
     * @tc.number SUB_DDM_AppDataFWK_JSRDB_ResultSet_0152
     * @tc.desc resultSet goToRow test
     */
    it('testGoToRow0003', 0, async function (done) {
        console.log(TAG + "************* testGoToRow0003 start *************");
        {
            let predicates = await new data_rdb.RdbPredicates("test")
            let resultSet = await rdbStore.query(predicates)
            {
                expect(true).assertEqual(resultSet.goToFirstRow())
                expect(true).assertEqual(resultSet.goToNextRow())
                expect(true).assertEqual(resultSet.goToNextRow())
                resultSet.goToRow(1)
                expect(1).assertEqual(resultSet.rowIndex)
            }
            resultSet = null;
            done();
            console.log(TAG + "************* testGoToRow0003 end *************");
        }
    })

    /**
     * @tc.name resultSet goToRow after last row test
     * @tc.number SUB_DDM_AppDataFWK_JSRDB_ResultSet_0153
     * @tc.desc resultSet goToRow after last row test
     */
    it('testGoToRow0004', 0, async function (done) {
        console.log(TAG + "************* testGoToRow0004 start *************");
        {
            let predicates = await new data_rdb.RdbPredicates("test")
            let resultSet = await rdbStore.query(predicates)
            {
                expect(true).assertEqual(resultSet.goToLastRow())
                resultSet.goToRow(5)
                expect(3).assertEqual(resultSet.rowIndex)
            }
            resultSet = null;
            done();
            console.log(TAG + "************* testGoToRow0004 end *************");
        }
    })

    /**
     * @tc.name resultSet isAtFirstRow test
     * @tc.number SUB_DDM_AppDataFWK_JSRDB_ResultSet_0160
     * @tc.desc resultSet isAtFirstRow test
     */
    it('testIsAtFirstRow0001', 0, async function (done) {
        console.log(TAG + "************* testIsAtFirstRow0001 start *************");
        {
            let predicates = await new data_rdb.RdbPredicates("test")
            let resultSet = await rdbStore.query(predicates)
            {
                expect(true).assertEqual(resultSet.goToFirstRow())
                expect(true).assertEqual(resultSet.isAtFirstRow)
            }
            resultSet = null;
            done();
            console.log(TAG + "************* testIsAtFirstRow0001 end *************");
        }
    })

    /**
     * @tc.name resultSet isAtFirstRow with no result test
     * @tc.number SUB_DDM_AppDataFWK_JSRDB_ResultSet_0161
     * @tc.desc resultSet isAtFirstRow with no result test
     */
    it('testIsAtFirstRow0002', 0, async function (done) {
        console.log(TAG + "************* testIsAtFirstRow0002 start *************");
        {
            let predicates = await new data_rdb.RdbPredicates("test")
            predicates.equalTo("name", "wangwu");
            let resultSet = await rdbStore.query(predicates)
            {
                expect(false).assertEqual(resultSet.isAtFirstRow)
            }
            resultSet = null;
            done();
            console.log(TAG + "************* testIsAtFirstRow0002 end *************");
        }
    })

    /**
     * @tc.name resultSet isAtFirstRow test
     * @tc.number SUB_DDM_AppDataFWK_JSRDB_ResultSet_0162
     * @tc.desc resultSet isAtFirstRow test
     */
    it('testIsAtFirstRow0003', 0, async function (done) {
        console.log(TAG + "************* testIsAtFirstRow0003 start *************");
        {
            let predicates = await new data_rdb.RdbPredicates("test")
            let resultSet = await rdbStore.query(predicates)
            {
                expect(true).assertEqual(resultSet.goToFirstRow())
                expect(true).assertEqual(resultSet.goToNextRow())
                expect(false).assertEqual(resultSet.isAtFirstRow)
            }
            resultSet = null;
            done();
            console.log(TAG + "************* testIsAtFirstRow0003 end *************");
        }
    })

    /**
     * @tc.name resultSet isAtFirstRow after last row test
     * @tc.number SUB_DDM_AppDataFWK_JSRDB_ResultSet_0163
     * @tc.desc resultSet isAtFirstRow after last row test
     */
    it('testIsAtFirstRow0004', 0, async function (done) {
        console.log(TAG + "************* testIsAtFirstRow0004 start *************");
        {
            let predicates = await new data_rdb.RdbPredicates("test")
            let resultSet = await rdbStore.query(predicates)
            {
                expect(true).assertEqual(resultSet.goToLastRow())
                expect(false).assertEqual(resultSet.isAtFirstRow)
            }
            resultSet = null;
            done();
            console.log(TAG + "************* testIsAtFirstRow0004 end *************");
        }
    })

    /**
     * @tc.name resultSet isAtLastRow test
     * @tc.number SUB_DDM_AppDataFWK_JSRDB_ResultSet_0170
     * @tc.desc resultSet isAtLastRow test
     */
    it('testIsAtLastRow0001', 0, async function (done) {
        console.log(TAG + "************* testIsAtLastRow0001 start *************");
        {
            let predicates = await new data_rdb.RdbPredicates("test")
            let resultSet = await rdbStore.query(predicates)
            {
                expect(true).assertEqual(resultSet.goToFirstRow())
                expect(false).assertEqual(resultSet.isAtLastRow)
            }
            resultSet = null;
            done();
            console.log(TAG + "************* testIsAtLastRow0001 end *************");
        }
    })

    /**
     * @tc.name resultSet isAtLastRow with no result test
     * @tc.number SUB_DDM_AppDataFWK_JSRDB_ResultSet_0171
     * @tc.desc resultSet isAtLastRow with no result test
     */
    it('testIsAtLastRow0002', 0, async function (done) {
        console.log(TAG + "************* testIsAtLastRow0002 start *************");
        {
            let predicates = await new data_rdb.RdbPredicates("test")
            predicates.equalTo("name", "wangwu");
            let resultSet = await rdbStore.query(predicates)
            {
                expect(false).assertEqual(resultSet.isAtLastRow)
            }
            resultSet = null;
            done();
            console.log(TAG + "************* testIsAtLastRow0002 end *************");
        }
    })

    /**
     * @tc.name resultSet isAtLastRow test
     * @tc.number SUB_DDM_AppDataFWK_JSRDB_ResultSet_0172
     * @tc.desc resultSet isAtLastRow test
     */
    it('testIsAtLastRow0003', 0, async function (done) {
        console.log(TAG + "************* testIsAtLastRow0003 start *************");
        {
            let predicates = await new data_rdb.RdbPredicates("test")
            let resultSet = await rdbStore.query(predicates)
            {
                expect(true).assertEqual(resultSet.goToFirstRow())
                expect(true).assertEqual(resultSet.goToNextRow())
                expect(false).assertEqual(resultSet.isAtLastRow)
            }
            resultSet = null;
            done();
            console.log(TAG + "************* testIsAtLastRow0003 end *************");
        }
    })

    /**
     * @tc.name resultSet isAtLastRow after last row test
     * @tc.number SUB_DDM_AppDataFWK_JSRDB_ResultSet_0173
     * @tc.desc resultSet isAtLastRow after last row test
     */
    it('testIsAtLastRow0004', 0, async function (done) {
        console.log(TAG + "************* testIsAtLastRow0004 start *************");
        {
            let predicates = await new data_rdb.RdbPredicates("test")
            let resultSet = await rdbStore.query(predicates)
            {
                expect(true).assertEqual(resultSet.goToLastRow())
                expect(true).assertEqual(resultSet.isAtLastRow)
            }
            resultSet = null;
            done();
            console.log(TAG + "************* testIsAtLastRow0004 end *************");
        }
    })

    /**
     * @tc.name resultSet getDouble test
     * @tc.number SUB_DDM_AppDataFWK_JSRDB_ResultSet_0180
     * @tc.desc resultSet getDouble test
     */
    it('testGetDouble0001', 0, async function (done) {
        console.log(TAG + "************* testGetDouble0001 start *************");
        {
            let predicates = await new data_rdb.RdbPredicates("test")
            let resultSet = await rdbStore.query(predicates)
            {
                expect(true).assertEqual(resultSet.goToFirstRow())
                expect(true).assertEqual(resultSet.goToNextRow())
                const data2 = resultSet.getDouble(resultSet.getColumnIndex("data2"))
                const data3 = resultSet.getDouble(resultSet.getColumnIndex("data3"))
                expect(-5).assertEqual(data2)
                expect(2.5).assertEqual(data3)
            }
            resultSet = null;
            done();
            console.log(TAG + "************* testGetDouble0001 end *************");
        }
    })

    /**
     * @tc.name resultSet isColumnNull test
     * @tc.number SUB_DDM_AppDataFWK_JSRDB_ResultSet_0190
     * @tc.desc resultSet isColumnNull test
     */
    it('testIsColumnNull0001', 0, async function (done) {
        console.log(TAG + "************* testIsColumnNull0001 start *************");
        {
            let predicates = await new data_rdb.RdbPredicates("test")
            let resultSet = await rdbStore.query(predicates)
            {
                expect(true).assertEqual(resultSet.goToFirstRow())
                expect(true).assertEqual(resultSet.goToNextRow())
                expect(true).assertEqual(resultSet.goToNextRow())
                const isColumnNull1 = resultSet.isColumnNull(resultSet.getColumnIndex("data1"))
                const isColumnNull4 = resultSet.isColumnNull(resultSet.getColumnIndex("data4"))
                expect(false).assertEqual(isColumnNull1)
                expect(true).assertEqual(isColumnNull4)
            }
            resultSet = null;
            done();
            console.log(TAG + "************* testIsColumnNull0001 end *************");
        }
    })

    /**
     * @tc.name resultSet getColumnIndex test
     * @tc.number SUB_DDM_AppDataFWK_JSRDB_ResultSet_0200
     * @tc.desc resultSet getColumnIndex test
     */
    it('testGetColumnIndex0001', 0, async function (done) {
        console.log(TAG + "************* testGetColumnIndex0001 start *************");
        {
            let predicates = await new data_rdb.RdbPredicates("test")
            let resultSet = await rdbStore.query(predicates)

            expect(1).assertEqual(resultSet.getColumnIndex("data1"))
            expect(4).assertEqual(resultSet.getColumnIndex("data4"))

            resultSet = null;
            done();
            console.log(TAG + "************* testGetColumnIndex0001 end *************");
        }
    })

    /**
     * @tc.name resultSet getColumnIndex test
     * @tc.number SUB_DDM_AppDataFWK_JSRDB_ResultSet_0201
     * @tc.desc resultSet getColumnIndex test
     */
    it('testGetColumnIndex0002', 0, async function (done) {
        console.log(TAG + "************* testGetColumnIndex0002 start *************");
        {
            let predicates = await new data_rdb.RdbPredicates("test")
            predicates.equalTo("name", "wangwu");
            let resultSet = await rdbStore.query(predicates)

            expect(-1).assertEqual(resultSet.getColumnIndex("data1"))
            expect(-1).assertEqual(resultSet.getColumnIndex("data4"))

            resultSet = null;
            done();
            console.log(TAG + "************* testGetColumnIndex0002 end *************");
        }
    })

    /**
     * @tc.name resultSet getColumnName test
     * @tc.number SUB_DDM_AppDataFWK_JSRDB_ResultSet_0210
     * @tc.desc resultSet getColumnName test
     */
    it('testGetColumnName0001', 0, async function (done) {
        console.log(TAG + "************* testGetColumnIndex0001 start *************");
        {
            let predicates = await new data_rdb.RdbPredicates("test")
            let resultSet = await rdbStore.query(predicates)

            expect("data1").assertEqual(resultSet.getColumnName(1))
            expect("data4").assertEqual(resultSet.getColumnName(4))

            resultSet = null;
            done();
            console.log(TAG + "************* testGetColumnName0001 end *************");
        }
    })

    /**
     * @tc.name resultSet getColumnName test
     * @tc.number SUB_DDM_AppDataFWK_JSRDB_ResultSet_0211
     * @tc.desc resultSet getColumnName test
     */
    it('testGetColumnName0002', 0, async function (done) {
        console.log(TAG + "************* testGetColumnName0002 start *************");
        {
            let predicates = await new data_rdb.RdbPredicates("test")
            predicates.equalTo("name", "wangwu");
            let resultSet = await rdbStore.query(predicates)

            expect("").assertEqual(resultSet.getColumnName(1))
            expect("").assertEqual(resultSet.getColumnName(4))

            resultSet = null;
            done();
            console.log(TAG + "************* testGetColumnName0002 end *************");
        }
    })

    console.log(TAG + "*************Unit Test End*************");
})