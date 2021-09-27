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
import data_dataability from '@ohos.data.dataability';

const TAG = "[RDB_JSKITS _TEST]"
const CREATE_TABLE_ALL_DATA_TYPE_SQL = "CREATE TABLE IF NOT EXISTS AllDataType "
+ "(id INTEGER PRIMARY KEY AUTOINCREMENT, "
+ "integerValue INTEGER , longValue INTEGER , shortValue INTEGER , booleanValue INTEGER , "
+ "doubleValue REAL , floatValue REAL , stringValue TEXT , blobValue BLOB , clobValue TEXT , "
+ "byteValue INTEGER , dateValue INTEGER , timeValue INTEGER , timestampValue INTEGER , "
+ "calendarValue INTEGER , characterValue TEXT , primIntValue INTEGER , primLongValue INTEGER , "
+ "primShortValue INTEGER , primFloatValue REAL , primDoubleValue REAL , "
+ "primBooleanValue INTEGER , primByteValue INTEGER , primCharValue TEXT, `order` INTEGER);";

const STORE_CONFIG = {
    name: "Predicates.db",
}
var rdbStore = undefined;

describe('dataAbilityPredicatesTest', function () {
    beforeAll(async function () {
        console.info(TAG + 'beforeAll')
        rdbStore = await ohos_data_rdb.getRdbStore(STORE_CONFIG, 1);
        await rdbStore.executeSql(CREATE_TABLE_ALL_DATA_TYPE_SQL, null);
        await buildAllDataType1();
        await buildAllDataType2();
        await buildAllDataType3();
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
        await ohos_data_rdb.deleteRdbStore("Predicates.db");
    })

    function resultSize(resultSet) {
        if (!resultSet.goToFirstRow()) {
            return 0;
        }
        let count = 1;
        while (resultSet.goToNextRow()) {
            count++;
        }
        return count;
    }

    async function buildAllDataType1() {
        console.log(TAG + "buildAllDataType1 start");
        {
            var u8 = new Uint8Array([1, 2, 3])
            const valueBucket = {
                "integerValue": 2147483647,
                "doubleValue": Number.MAX_VALUE,
                "booleanValue": true,
                "floatValue": -0.123,
                "longValue": 9223372036854775807,
                "shortValue": 32767,
                "characterValue": ' ',
                "stringValue": "ABCDEFGHIJKLMN",
                "blobValue": u8,
                "byteValue": 127,
            }
            await rdbStore.insert("AllDataType", valueBucket)
        }
    }

    async function buildAllDataType2() {
        console.log(TAG + "buildAllDataType2 start");
        {
            var u8 = new Uint8Array([1, 2, 3])
            const valueBucket = {
                "integerValue": 1,
                "doubleValue": 1.0,
                "booleanValue": false,
                "floatValue": 1.0,
                "longValue": 1,
                "shortValue": 1,
                "characterValue": ' ',
                "stringValue": "ABCDEFGHIJKLMN",
                "blobValue": u8,
                "byteValue": 1,
            }
            await rdbStore.insert("AllDataType", valueBucket)
        }
    }

    async function buildAllDataType3() {
        console.log(TAG + "buildAllDataType3 start");
        {
            var u8 = new Uint8Array([1, 2, 3])
            const valueBucket = {
                "integerValue": -2147483648,
                "doubleValue": Number.MIN_VALUE,
                "booleanValue": false,
                "floatValue": 0.1234567,
                "longValue": -9223372036854775808,
                "shortValue": -32768,
                "characterValue": ' ',
                "stringValue": "ABCDEFGHIJKLMN",
                "blobValue": u8,
                "byteValue": -128,
            }
            await rdbStore.insert("AllDataType", valueBucket)
        }
    }

    async function basicDataTypeTest001(){
        {
            let dataAbilityPredicates = await new data_dataability.DataAbilityPredicates();
            await dataAbilityPredicates.equalTo("booleanValue", true);
            let predicates = data_dataability.createRdbPredicates("AllDataType", dataAbilityPredicates);
            let result = await rdbStore.query(predicates);
            await expect(1).assertEqual(result.rowCount);
            result = null
        }
        {
            let dataAbilityPredicates = await new data_dataability.DataAbilityPredicates();
            await dataAbilityPredicates.equalTo("byteValue", -128).or().equalTo("byteValue", 1);
            let predicates = data_dataability.createRdbPredicates("AllDataType", dataAbilityPredicates);
            let result = await rdbStore.query(predicates);
            await expect(2).assertEqual(result.rowCount);
            result = null
        }
        {
            let dataAbilityPredicates = await new data_dataability.DataAbilityPredicates();
            await dataAbilityPredicates.equalTo("stringValue", "ABCDEFGHIJKLMN");
            let predicates = data_dataability.createRdbPredicates("AllDataType", dataAbilityPredicates);

            let result = await rdbStore.query(predicates);
            await expect(3).assertEqual(result.rowCount);
            result = null
        }
        {
            let dataAbilityPredicates = await new data_dataability.DataAbilityPredicates();
            await dataAbilityPredicates.equalTo("doubleValue", Number.MAX_VALUE);
            let predicates = data_dataability.createRdbPredicates("AllDataType", dataAbilityPredicates);

            let result = await rdbStore.query(predicates);
            await expect(1).assertEqual(result.rowCount);
            result = null
        }
        {
            let dataAbilityPredicates = await new data_dataability.DataAbilityPredicates();
            await dataAbilityPredicates.equalTo("shortValue", -32768.0);
            let predicates = data_dataability.createRdbPredicates("AllDataType", dataAbilityPredicates);

            let result = await rdbStore.query(predicates);
            await expect(1).assertEqual(result.rowCount);
            result = null
        }
        {
            let dataAbilityPredicates = await new data_dataability.DataAbilityPredicates();
            await dataAbilityPredicates.equalTo("integerValue", 1);
            let predicates = data_dataability.createRdbPredicates("AllDataType", dataAbilityPredicates);

            let result = await rdbStore.query(predicates);
            await expect(true).assertEqual(result.goToFirstRow());
            await expect(2).assertEqual(result.getLong(0));
        }
        {
            let dataAbilityPredicates = await new data_dataability.DataAbilityPredicates();
            await dataAbilityPredicates.equalTo("longValue", 1);
            let predicates = data_dataability.createRdbPredicates("AllDataType", dataAbilityPredicates);

            let result = await rdbStore.query(predicates);
            await expect(true).assertEqual(result.goToFirstRow());
            await expect(2).assertEqual(result.getLong(0))
        }
        {
            let dataAbilityPredicates = await new data_dataability.DataAbilityPredicates();
            await dataAbilityPredicates.equalTo("floatValue", -0.123);
            let predicates = data_dataability.createRdbPredicates("AllDataType", dataAbilityPredicates);

            let result = await rdbStore.query(predicates);
            await expect(true).assertEqual(result.goToFirstRow());
            await expect(1).assertEqual(result.getLong(0))
            result = null
        }
    }

    async function basicDataTypeTest002() {
        {
            let dataAbilityPredicates = await new data_dataability.DataAbilityPredicates();
            await dataAbilityPredicates.notEqualTo("booleanValue", true);
            let predicates = data_dataability.createRdbPredicates("AllDataType", dataAbilityPredicates);

            let result = await rdbStore.query(predicates);
            await expect(2).assertEqual(result.rowCount);
            result = null
        }
        {
            let dataAbilityPredicates = await new data_dataability.DataAbilityPredicates();
            await dataAbilityPredicates.notEqualTo("byteValue", -128);
            await dataAbilityPredicates.notEqualTo("byteValue", 1);
            let predicates = data_dataability.createRdbPredicates("AllDataType", dataAbilityPredicates);

            let result = await rdbStore.query(predicates);
            await expect(1).assertEqual(result.rowCount);
            result = null
        }
        {
            let dataAbilityPredicates = await new data_dataability.DataAbilityPredicates();
            await dataAbilityPredicates.notEqualTo("stringValue", "ABCDEFGHIJKLMN");
            let predicates = data_dataability.createRdbPredicates("AllDataType", dataAbilityPredicates);

            let result = await rdbStore.query(predicates);
            await expect(0).assertEqual(result.rowCount);
            result = null
        }
        {
            let dataAbilityPredicates = await new data_dataability.DataAbilityPredicates();
            await dataAbilityPredicates.notEqualTo("doubleValue", Number.MAX_VALUE);
            let predicates = data_dataability.createRdbPredicates("AllDataType", dataAbilityPredicates);

            let result = await rdbStore.query(predicates);
            await expect(2).assertEqual(result.rowCount);
            result = null
        }
        {
            let dataAbilityPredicates = await new data_dataability.DataAbilityPredicates();
            await dataAbilityPredicates.notEqualTo("shortValue", -32768);
            let predicates = data_dataability.createRdbPredicates("AllDataType", dataAbilityPredicates);

            let result = await rdbStore.query(predicates);
            await expect(2).assertEqual(result.rowCount);
            result = null
        }
        {
            let dataAbilityPredicates = await new data_dataability.DataAbilityPredicates();
            await dataAbilityPredicates.notEqualTo("integerValue", 1);
            let predicates = data_dataability.createRdbPredicates("AllDataType", dataAbilityPredicates);

            let result = await rdbStore.query(predicates);
            await expect(2).assertEqual(result.rowCount);
            result = null
        }
        {
            let dataAbilityPredicates = await new data_dataability.DataAbilityPredicates();
            await dataAbilityPredicates.notEqualTo("longValue", 1);
            let predicates = data_dataability.createRdbPredicates("AllDataType", dataAbilityPredicates);

            let result = await rdbStore.query(predicates);
            await expect(2).assertEqual(result.rowCount);
            result = null
        }
        {
            let dataAbilityPredicates = await new data_dataability.DataAbilityPredicates();
            await dataAbilityPredicates.notEqualTo("floatValue", -0.123);
            let predicates = data_dataability.createRdbPredicates("AllDataType", dataAbilityPredicates);

            let result = await rdbStore.query(predicates);
            await expect(2).assertEqual(result.rowCount);
            result = null
        }
    }

    console.log(TAG + "*************Unit Test Begin*************");

    /**
     * @tc.name resultSet equalTo normal test
     * @tc.number SUB_DDM_AppDataFWK_JSRDB_Predicates_0010
     * @tc.desc resultSet equalTo normal test
     */
    it('testEqualTo0001', 0, async function (done) {
        console.log(TAG + "************* testEqualTo0001 start *************");
        await basicDataTypeTest001();
        done();
        console.log(TAG + "************* testEqualTo0001 end   *************");
    })

    /**
     * @tc.name resultSet notEqualTo normal test
     * @tc.number SUB_DDM_AppDataFWK_JSRDB_Predicates_0020
     * @tc.desc resultSet notEqualTo normal test
     */
    it('testNotEqualTo0001', 0, async function (done) {
        console.log(TAG + "************* testNotEqualTo0001 start *************");
        await basicDataTypeTest002();
        done();
        console.log(TAG + "************* testNotEqualTo0001 end *************");
    })

    //dataAbilityPredicates-测试用例3-isNull
    /**
     * @tc.name resultSet isNull normal test
     * @tc.number SUB_DDM_AppDataFWK_JSRDB_Predicates_0030
     * @tc.desc resultSet isNull normal test
     */
    it('testIsNull0001', 0, async function (done) {
        console.log(TAG + "************* testIsNull001 start *************");
        let dataAbilityPredicates = await new data_dataability.DataAbilityPredicates();
        await dataAbilityPredicates.isNull("primLongValue");
        let predicates = data_dataability.createRdbPredicates("AllDataType", dataAbilityPredicates);

        let result = await rdbStore.query(predicates);
        await expect(3).assertEqual(result.rowCount);
        result = null
        done();
        console.log(TAG + "************* testIsNull0001 end *************");
    })

    //dataAbilityPredicates-测试用例4-isNotNull
    /**
     * @tc.name resultSet isNotNull normal test
     * @tc.number SUB_DDM_AppDataFWK_JSRDB_Predicates_0040
     * @tc.desc resultSet isNotNull normal test
     */
    it('testIsNotNull0001', 0, async function (done) {
        console.log(TAG + "************* testIsNotNull0001 start *************");
        let dataAbilityPredicates = await new data_dataability.DataAbilityPredicates();
        await dataAbilityPredicates.isNotNull("primLongValue");
        let predicates = data_dataability.createRdbPredicates("AllDataType", dataAbilityPredicates);

        let result = await rdbStore.query(predicates);
        await expect(0).assertEqual(result.rowCount);
        result = null
        done();
        console.log(TAG + "************* testIsNotNull0001 end *************");
    })

    /**
     * @tc.name resultSet greaterThan normal test
     * @tc.number SUB_DDM_AppDataFWK_JSRDB_Predicates_0050
     * @tc.desc resultSet greaterThan normal test
     */
    it('testGreaterThan0001', 0, async function (done) {
        console.log(TAG + "************* testGreaterThan0001 start *************");
        {
            let dataAbilityPredicates = await new data_dataability.DataAbilityPredicates();
            await dataAbilityPredicates.greaterThan("stringValue", "ABC");
            let predicates = data_dataability.createRdbPredicates("AllDataType", dataAbilityPredicates);

            let result = await rdbStore.query(predicates);
            await expect(3).assertEqual(result.rowCount);
            result = null
        }
        {
            let dataAbilityPredicates = await new data_dataability.DataAbilityPredicates();
            await dataAbilityPredicates.greaterThan("doubleValue", 0.0);
            let predicates = data_dataability.createRdbPredicates("AllDataType", dataAbilityPredicates);

            let result = await rdbStore.query(predicates);
            await expect(3).assertEqual(result.rowCount);
            result = null
        }
        {
            let dataAbilityPredicates = await new data_dataability.DataAbilityPredicates();
            await dataAbilityPredicates.greaterThan("integerValue", 1);
            let predicates = data_dataability.createRdbPredicates("AllDataType", dataAbilityPredicates);

            let result = await rdbStore.query(predicates);
            await expect(1).assertEqual(result.rowCount);
            result = null
        }
        {
            let dataAbilityPredicates = await new data_dataability.DataAbilityPredicates();
            await dataAbilityPredicates.greaterThan("longValue", 1);
            let predicates = data_dataability.createRdbPredicates("AllDataType", dataAbilityPredicates);

            let result = await rdbStore.query(predicates);
            await expect(1).assertEqual(result.rowCount);
            result = null
        }
        done();
        console.log(TAG + "************* testGreaterThan0001 end *************");
    })

    /**
     * @tc.name resultSet greaterThanOrEqualTo normal test
     * @tc.number SUB_DDM_AppDataFWK_JSRDB_Predicates_0060
     * @tc.desc resultSet greaterThanOrEqualTo normal test
     */
    it('testGreaterThanOrEqualTo0001', 0, async function (done) {
        console.log(TAG + "************* testGreaterThanOrEqualTo0001 start *************");
        {
            let dataAbilityPredicates = await new data_dataability.DataAbilityPredicates();
            await dataAbilityPredicates.greaterThanOrEqualTo("stringValue", "ABC");
            let predicates = data_dataability.createRdbPredicates("AllDataType", dataAbilityPredicates);

            let result = await rdbStore.query(predicates);
            await expect(3).assertEqual(result.rowCount);
            result = null
        }
        {
            let dataAbilityPredicates = await new data_dataability.DataAbilityPredicates();
            await dataAbilityPredicates.greaterThanOrEqualTo("doubleValue", 0.0);
            let predicates = data_dataability.createRdbPredicates("AllDataType", dataAbilityPredicates);

            let result = await rdbStore.query(predicates);
            await expect(3).assertEqual(result.rowCount);
            result = null
        }
        {
            let dataAbilityPredicates = await new data_dataability.DataAbilityPredicates();
            await dataAbilityPredicates.greaterThanOrEqualTo("integerValue", 1);
            let predicates = data_dataability.createRdbPredicates("AllDataType", dataAbilityPredicates);

            let result = await rdbStore.query(predicates);
            await expect(2).assertEqual(result.rowCount);
            result = null
        }
        {
            let dataAbilityPredicates = await new data_dataability.DataAbilityPredicates();
            await dataAbilityPredicates.greaterThanOrEqualTo("longValue", 1);
            let predicates = data_dataability.createRdbPredicates("AllDataType", dataAbilityPredicates);

            let result = await rdbStore.query(predicates);
            await expect(2).assertEqual(result.rowCount);
            result = null
        }
        done();
        console.log(TAG + "************* testGreaterThanOrEqualTo0001 end *************");
    })

    /**
     * @tc.name resultSet lessThan normal test
     * @tc.number SUB_DDM_AppDataFWK_JSRDB_Predicates_0070
     * @tc.desc resultSet lessThan normal test
     */
    it('testLessThan0001', 0, async function (done) {
        console.log(TAG + "************* testLessThan0001 start *************");
        {
            let dataAbilityPredicates = await new data_dataability.DataAbilityPredicates();
            await dataAbilityPredicates.lessThan("stringValue", "ABD");
            let predicates = data_dataability.createRdbPredicates("AllDataType", dataAbilityPredicates);

            let result = await rdbStore.query(predicates);
            await expect(3).assertEqual(result.rowCount);
            result = null
        }
        {
            let dataAbilityPredicates = await new data_dataability.DataAbilityPredicates();
            await dataAbilityPredicates.lessThan("doubleValue", 0.0);
            let predicates = data_dataability.createRdbPredicates("AllDataType", dataAbilityPredicates);

            let result = await rdbStore.query(predicates);
            await expect(0).assertEqual(result.rowCount);
            result = null
        }
        {
            let dataAbilityPredicates = await new data_dataability.DataAbilityPredicates();
            await dataAbilityPredicates.lessThan("integerValue", 1);
            let predicates = data_dataability.createRdbPredicates("AllDataType", dataAbilityPredicates);

            let result = await rdbStore.query(predicates);
            await expect(1).assertEqual(result.rowCount);
            result = null
        }
        {
            let dataAbilityPredicates = await new data_dataability.DataAbilityPredicates();
            await dataAbilityPredicates.lessThan("longValue", 1);
            let predicates = data_dataability.createRdbPredicates("AllDataType", dataAbilityPredicates);

            let result = await rdbStore.query(predicates);
            await expect(1).assertEqual(result.rowCount);
            result = null
        }
        done();
        console.log(TAG + "************* testLessThan0001 end *************");
    })
    
    /**
     * @tc.name resultSet lessThanOrEqualTo normal test
     * @tc.number SUB_DDM_AppDataFWK_JSRDB_Predicates_0080
     * @tc.desc resultSet lessThanOrEqualTo normal test
     */
    it('testLessThanOrEqualTo0001', 0, async function (done) {
        console.log(TAG + "************* testLessThanOrEqualTo0001 start *************");
        {
            let dataAbilityPredicates = await new data_dataability.DataAbilityPredicates();
            await dataAbilityPredicates.lessThanOrEqualTo("stringValue", "ABD");
            let predicates = data_dataability.createRdbPredicates("AllDataType", dataAbilityPredicates);

            let result = await rdbStore.query(predicates);
            await expect(3).assertEqual(result.rowCount);
            result = null
        }
        {
            let dataAbilityPredicates = await new data_dataability.DataAbilityPredicates();
            await dataAbilityPredicates.lessThanOrEqualTo("doubleValue", 0.0);
            let predicates = data_dataability.createRdbPredicates("AllDataType", dataAbilityPredicates);

            let result = await rdbStore.query(predicates);
            await expect(0).assertEqual(result.rowCount);
            result = null
        }
        {
            let dataAbilityPredicates = await new data_dataability.DataAbilityPredicates();
            await dataAbilityPredicates.lessThanOrEqualTo("integerValue", 1);
            let predicates = data_dataability.createRdbPredicates("AllDataType", dataAbilityPredicates);

            let result = await rdbStore.query(predicates);
            await expect(2).assertEqual(result.rowCount);
            result = null
        }
        {
            let dataAbilityPredicates = await new data_dataability.DataAbilityPredicates();
            await dataAbilityPredicates.lessThanOrEqualTo("longValue", 1);
            let predicates = data_dataability.createRdbPredicates("AllDataType", dataAbilityPredicates);

            let result = await rdbStore.query(predicates);
            await expect(2).assertEqual(result.rowCount);
            result = null
        }
        done();
        console.log(TAG + "************* testLessThanOrEqualTo0001 end *************");
    })

    /**
     * @tc.name resultSet between normal test
     * @tc.number SUB_DDM_AppDataFWK_JSRDB_Predicates_0090
     * @tc.desc resultSet between normal test
     */
    it('testBetween0001', 0, async function (done) {
        console.log(TAG + "************* testBetween0001 start *************");
        {
            let dataAbilityPredicates = await new data_dataability.DataAbilityPredicates();
            await dataAbilityPredicates.between("stringValue", "ABB", "ABD");
            let predicates = data_dataability.createRdbPredicates("AllDataType", dataAbilityPredicates);

            let result = await rdbStore.query(predicates);
            await expect(3).assertEqual(result.rowCount);
            result = null
        }
        {
            let dataAbilityPredicates = await new data_dataability.DataAbilityPredicates();
            await dataAbilityPredicates.between("doubleValue", 0.0, Number.MAX_VALUE);
            let predicates = data_dataability.createRdbPredicates("AllDataType", dataAbilityPredicates);

            let result = await rdbStore.query(predicates);
            await expect(3).assertEqual(result.rowCount);
            result = null
        }
        {
            let dataAbilityPredicates = await new data_dataability.DataAbilityPredicates();
            await dataAbilityPredicates.between("integerValue", 0, 1);
            let predicates = data_dataability.createRdbPredicates("AllDataType", dataAbilityPredicates);

            let result = await rdbStore.query(predicates);
            await expect(1).assertEqual(result.rowCount);
            result = null
        }
        {
            let dataAbilityPredicates = await new data_dataability.DataAbilityPredicates();
            await dataAbilityPredicates.between("longValue", 0, 2);
            let predicates = data_dataability.createRdbPredicates("AllDataType", dataAbilityPredicates);

            let result = await rdbStore.query(predicates);
            await expect(1).assertEqual(result.rowCount);
            result = null
        }
        done();
        console.log(TAG + "************* testBetween0001 end *************");
    })

    /**
     * @tc.name resultSet contains normal test
     * @tc.number SUB_DDM_AppDataFWK_JSRDB_Predicates_0100
     * @tc.desc resultSet contains normal test
     */
    it('testContains0001', 0, async function (done) {
        console.log(TAG + "************* testContains0001 start *************");
        let dataAbilityPredicates = await new data_dataability.DataAbilityPredicates();
        await dataAbilityPredicates.contains("stringValue", "DEF");
        let predicates = data_dataability.createRdbPredicates("AllDataType", dataAbilityPredicates);

        let result = await rdbStore.query(predicates);
        await expect(3).assertEqual(result.rowCount);
        result = null
        done();
        console.log(TAG + "************* testContains0001 end *************");
    })

    /**
     * @tc.name resultSet beginsWith normal test
     * @tc.number SUB_DDM_AppDataFWK_JSRDB_Predicates_0110
     * @tc.desc resultSet beginsWith normal test
     */
    it('testBeginsWith0001', 0, async function (done) {
        console.log(TAG + "************* testBeginsWith0001 start *************");
        let dataAbilityPredicates = await new data_dataability.DataAbilityPredicates();
        await dataAbilityPredicates.beginsWith("stringValue", "ABC");
        let predicates = data_dataability.createRdbPredicates("AllDataType", dataAbilityPredicates);

        let result = await rdbStore.query(predicates);
        await expect(3).assertEqual(result.rowCount);
        result = null
        done();
        console.log(TAG + "************* testBeginsWith0001 end *************");
    })

    /**
     * @tc.name resultSet endsWith normal test
     * @tc.number SUB_DDM_AppDataFWK_JSRDB_Predicates_0120
     * @tc.desc resultSet endsWith normal test
     */
    it('testEndsWith0001', 0, async function (done) {
        console.log(TAG + "************* testEndsWith0001 start *************");
        let dataAbilityPredicates = await new data_dataability.DataAbilityPredicates();
        await dataAbilityPredicates.endsWith("stringValue", "LMN");
        let predicates = data_dataability.createRdbPredicates("AllDataType", dataAbilityPredicates);

        let result = await rdbStore.query(predicates);
        await expect(3).assertEqual(result.rowCount);
        result = null
        done();
        console.log(TAG + "************* testEndsWith0001 end *************");
    })

    /**
     * @tc.name resultSet like normal test
     * @tc.number SUB_DDM_AppDataFWK_JSRDB_Predicates_0130
     * @tc.desc resultSet like normal test
     */
    it('testLike0001', 0, async function (done) {
        console.log(TAG + "************* testLike0001 start *************");
        let dataAbilityPredicates = await new data_dataability.DataAbilityPredicates();
        await dataAbilityPredicates.like("stringValue", "%LMN%");
        let predicates = data_dataability.createRdbPredicates("AllDataType", dataAbilityPredicates);

        let result = await rdbStore.query(predicates);
        await expect(3).assertEqual(result.rowCount);
        result = null
        done();
        console.log(TAG + "************* testLike0001 end *************");
    })

    /**
     * @tc.name resultSet beginWrap normal test
     * @tc.number SUB_DDM_AppDataFWK_JSRDB_Predicates_0140
     * @tc.desc resultSet beginWrap normal test
     */
    it('testBeginWrap0001', 0, async function (done) {
        console.log(TAG + "************* testBeginWrap0001 start *************");
        {
            let dataAbilityPredicates = await new data_dataability.DataAbilityPredicates();
            await dataAbilityPredicates.equalTo("stringValue", "ABCDEFGHIJKLMN")
                .beginWrap()
                .equalTo("integerValue", 1)
                .or()
                .equalTo("integerValue", 2147483647)
                .endWrap();
            let predicates = data_dataability.createRdbPredicates("AllDataType", dataAbilityPredicates);

            let result = await rdbStore.query(predicates);
            await expect(2).assertEqual(result.rowCount);
            result = null
        }
        {
            let dataAbilityPredicates = await new data_dataability.DataAbilityPredicates();
            await dataAbilityPredicates.equalTo("stringValue", "ABCDEFGHIJKLMN")
                .and()
                .equalTo("integerValue", 1);
            let predicates = data_dataability.createRdbPredicates("AllDataType", dataAbilityPredicates);

            let result = await rdbStore.query(predicates);
            await expect(1).assertEqual(result.rowCount);
            result = null
        }
        done();
        console.log(TAG + "************* testBeginWrap0001 end *************");
    })

    /**
     * @tc.name resultSet and normal test
     * @tc.number SUB_DDM_AppDataFWK_JSRDB_Predicates_0150
     * @tc.desc resultSet and normal test
     */
    it('testAnd0001', 0, async function (done) {
        console.log(TAG + "************* testAnd0001 start *************");
        {
            let dataAbilityPredicates = await new data_dataability.DataAbilityPredicates();
            await dataAbilityPredicates.equalTo("stringValue", "ABCDEFGHIJKLMN")
                .beginWrap()
                .equalTo("integerValue", 1)
                .or()
                .equalTo("integerValue", 2147483647)
                .endWrap();
            let predicates = data_dataability.createRdbPredicates("AllDataType", dataAbilityPredicates);

            let result = await rdbStore.query(predicates);
            await expect(2).assertEqual(result.rowCount);
            result = null
        }
        {
            let dataAbilityPredicates = await new data_dataability.DataAbilityPredicates();
            await dataAbilityPredicates.equalTo("stringValue", "ABCDEFGHIJKLMN")
                .and()
                .equalTo("integerValue", 1);
            let predicates = data_dataability.createRdbPredicates("AllDataType", dataAbilityPredicates);

            let result = await rdbStore.query(predicates);
            await expect(1).assertEqual(result.rowCount);
            result = null
        }
        {
            let dataAbilityPredicates = await new data_dataability.DataAbilityPredicates();
            await dataAbilityPredicates.equalTo("stringValue", "ABCDEFGHIJKLMN").or().or().equalTo("integerValue", 1);
            let predicates = data_dataability.createRdbPredicates("AllDataType", dataAbilityPredicates);

            console.log(TAG + "you are starting a sql request with predicate or or,"
            + "using function or() immediately after another or(). that is ridiculous.");
        }
        {
            let dataAbilityPredicates = await new data_dataability.DataAbilityPredicates();
            await dataAbilityPredicates.equalTo("stringValue", "ABCDEFGHIJKLMN").or().and().equalTo("integerValue", 1);
            let predicates = data_dataability.createRdbPredicates("AllDataType", dataAbilityPredicates);

            console.log(TAG + "you should not start a request" + " with \"and\" or use or() before this function");
        }
        done();
        console.log(TAG + "************* testAnd0001 end *************");
    })

    /**
     * @tc.name resultSet order normal test
     * @tc.number SUB_DDM_AppDataFWK_JSRDB_Predicates_0160
     * @tc.desc resultSet order normal test
     */
    it('testOrder0001', 0, async function (done) {
        console.log(TAG + "************* testOrder0001 start *************");
        {
            let dataAbilityPredicates = await new data_dataability.DataAbilityPredicates();
            await dataAbilityPredicates.equalTo("stringValue", "ABCDEFGHIJKLMN").orderByAsc("integerValue").distinct();
            let predicates = data_dataability.createRdbPredicates("AllDataType", dataAbilityPredicates);

            let result = await rdbStore.query(predicates);
            await expect(3).assertEqual(result.rowCount);
            await expect(true).assertEqual(result.goToFirstRow())
            await expect(3).assertEqual(result.getLong(0));
            await expect(true).assertEqual(result.goToNextRow())
            await expect(2).assertEqual(result.getLong(0));
            await expect(true).assertEqual(result.goToNextRow())
            await expect(1).assertEqual(result.getLong(0));
            result = null
        }
        {
            let dataAbilityPredicates = await new data_dataability.DataAbilityPredicates();
            await dataAbilityPredicates.equalTo("stringValue", "ABCDEFGHIJKLMN").orderByDesc("integerValue").distinct();
            let predicates = data_dataability.createRdbPredicates("AllDataType", dataAbilityPredicates);

            let result = await rdbStore.query(predicates);
            await expect(3).assertEqual(result.rowCount);
            await expect(true).assertEqual(result.goToFirstRow())
            await expect(1).assertEqual(result.getLong(0));
            await expect(true).assertEqual(result.goToNextRow())
            await expect(2).assertEqual(result.getLong(0));
            await expect(true).assertEqual(result.goToNextRow())
            await expect(3).assertEqual(result.getLong(0));
            result = null
        }
        done();
        console.log(TAG + "************* testOrder0001 end *************");
    })

    /**
     * @tc.name resultSet limit normal test
     * @tc.number SUB_DDM_AppDataFWK_JSRDB_Predicates_0170
     * @tc.desc resultSet limit normal test
     */
    it('testLimit0001', 0, async function (done) {
        console.log(TAG + "************* testLimit0001 start *************");
        let dataAbilityPredicates = await new data_dataability.DataAbilityPredicates();
        await dataAbilityPredicates.like("stringValue", "ABCDEFGHIJKLMN");
        await dataAbilityPredicates.like("stringValue", "ABCDEFGHIJKLMN").limitAs(1);
        let predicates = data_dataability.createRdbPredicates("AllDataType", dataAbilityPredicates);

        let result = await rdbStore.query(predicates);
        await expect(1).assertEqual(result.rowCount);
        result = null
        done();
        console.log(TAG + "************* testLimit0001 end *************");
    })

    /**
     * @tc.name resultSet setJoinTypes normal test
     * @tc.number SUB_DDM_AppDataFWK_JSRDB_Predicates_0180
     * @tc.desc resultSet setJoinTypes normal test
     */
    it('testSetJoinTypes0001', 0, async function (done) {
        console.log(TAG + "************* testSetJoinTypes0001 start *************");
        let dataAbilityPredicates = await new data_dataability.DataAbilityPredicates();
        await dataAbilityPredicates.like("stringValue", "ABCDEFGHIJKLMN").limitAs(1);
        let predicates = data_dataability.createRdbPredicates("AllDataType", dataAbilityPredicates);
        let result = await rdbStore.query(predicates);
        await expect(1).assertEqual(result.rowCount);
        result = null
        done();
        console.log(TAG + "************* testSetJoinTypes0001 end *************");
    })
    console.log(TAG + "*************Unit Test End*************");
})