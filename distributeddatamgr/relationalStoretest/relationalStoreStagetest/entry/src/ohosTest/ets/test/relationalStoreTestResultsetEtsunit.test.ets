/*
 * Copyright (C) 2022 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
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
import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from '@ohos/hypium';
import dataRdb from '@ohos.data.relationalStore';
import common from '@ohos.app.ability.common';

const TAG = '[RDB_JSKITS_TEST]';
const CREATE_TABLE_TEST = 'CREATE TABLE IF NOT EXISTS test (' + 'id INTEGER PRIMARY KEY AUTOINCREMENT, ' + 'data1 text,' + 'data2 long, ' + 'data3 double,' + 'data4 blob)';
let context: common.UIAbilityContext;
const STORE_CONFIG: dataRdb.StoreConfig = {
    name: 'Resultset.db',
    securityLevel: dataRdb.SecurityLevel.S1
};

const COLOUNM_NAMES = ["id","data1","data2","data3","data4"];
let rdbStore: dataRdb.RdbStore;
let resultSet: dataRdb.ResultSet | null = null;

    //插入数据
    async function createTest() {
        console.info(TAG + 'createTest data start');
        {
            let u8 = new Uint8Array([1, 2, 3]);
            const valueBucket: dataRdb.ValuesBucket = {
                'data1': 'hello',
                'data2': 10,
                'data3': 1.0,
                'data4': u8,
            };
            await rdbStore.insert('test', valueBucket);
        }
        {
            let u8 = new Uint8Array([3, 4, 5]);
            const valueBucket: dataRdb.ValuesBucket = {
                'data1': '2',
                'data2': -5,
                'data3': 2.5,
                'data4': u8,
            };
            await rdbStore.insert('test', valueBucket);
        }
        {
            let u8 = new Uint8Array(0);
            const valueBucket: dataRdb.ValuesBucket = {
                'data1': 'hello world',
                'data2': 3,
                'data3': 1.8,
                'data4': u8,
            };
            await rdbStore.insert('test', valueBucket);
        }
        console.info(TAG + 'createTest data end');
    }

export default function relationalStoreResultSetTest() {
describe('relationalStoreResultSetTest', () => {
    beforeAll(async () => {
        console.info(TAG + 'beforeAll');
        context = AppStorage.Get<common.UIAbilityContext>("TestAbilityContext") as common.UIAbilityContext;
        rdbStore = await dataRdb.getRdbStore(context, STORE_CONFIG);
        await rdbStore.executeSql(CREATE_TABLE_TEST, null);
        await createTest();
    })

    beforeEach(async () => {
        console.info(TAG + 'beforeEach');
    })

    afterEach(() => {
        console.info(TAG + 'afterEach');
    })

    afterAll(async () => {
        console.info(TAG + 'afterAll');
        let rdbStore: dataRdb.RdbStore;
        await dataRdb.deleteRdbStore(context, 'Resultset.db');
    })

    /**
     * @tc.name SUB_DDM_RELATIONALETS_RESULTSET_0010
     * @tc.number SUB_DistributedData_RelationalStore_SDK_ResultSetJsApiTest_8400
     * @tc.desc resultSet getBlob normal test
	 * @tc.size MediumTest
	 * @tc.type Function
     * @tc.level Level 2
     */
    it('SUB_DDM_RELATIONALETS_RESULTSET_0010', 0, async (done: Function) => {
        console.info(TAG + '************* SUB_DDM_RELATIONALETS_RESULTSET_0010 start *************');
        let predicates = await new dataRdb.RdbPredicates('test');
        let resultSet: dataRdb.ResultSet = await rdbStore.query(predicates);
        try {
            {
                expect(true).assertEqual(resultSet.goToFirstRow());
                const id = resultSet.getLong(resultSet.getColumnIndex('id'));
                const data4 = resultSet.getBlob(resultSet.getColumnIndex('data4'));
                console.info(TAG + 'id=' + id + ', data4=' + data4);
                expect(1).assertEqual(data4[0]);
                expect(2).assertEqual(data4[1]);
                expect(3).assertEqual(data4[2]);
            }
            resultSet.close();
            expect(true).assertEqual(resultSet.isClosed);
        } catch (e) {
            expect(null).assertFail();
        }
        
        done();
        console.info(TAG + '************* SUB_DDM_RELATIONALETS_RESULTSET_0010 end *************');
    })
	/**
   * @tc.name SUB_DDM_RELATIONALETS_RESULTSET_0020
   * @tc.number SUB_DistributedData_RelationalStore_SDK_ResultSetJsApiTest_8300
   * @tc.desc resultSet getRow normal test
   * @tc.size MediumTest
   * @tc.type Function
   * @tc.level Level 2
   */
    it('SUB_DDM_RELATIONALETS_RESULTSET_0020', 0, async (done: Function) => {
      console.info(TAG + '************* SUB_DDM_RELATIONALETS_RESULTSET_0020 start *************');
      let predicates = new dataRdb.RdbPredicates('test');
      let resultSet = await rdbStore.query(predicates);
      try {
        {
          expect(true).assertEqual(resultSet.goToFirstRow());
          let row = (resultSet as dataRdb.ResultSet).getRow();
          console.log(TAG + JSON.stringify(row));
          expect('hello').assertEqual(row.data1);
          expect(10).assertEqual(row.data2);
          expect(1.0).assertEqual(row.data3);
        }
        resultSet.close();
        expect(true).assertEqual(resultSet.isClosed);
      } catch (e) {
        expect(null).assertFail();
      }
      
      done();
      console.info(TAG + '************* SUB_DDM_RELATIONALETS_RESULTSET_0020 end *************');
    })
    console.info(TAG + '*************Unit Test End*************');
})
}
