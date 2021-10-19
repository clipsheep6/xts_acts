/*
 * Copyright (C) 2021 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the 'License');
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

import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from 'deccjsunit/index'
import ohosDataRdb from '@ohos.data.rdb';

const TAG = '[RDB_JSKITS_TEST]'
const createTableTest = 'CREATE TABLE IF NOT EXISTS test (' + 'id INTEGER PRIMARY KEY AUTOINCREMENT, '
+ 'name TEXT NOT NULL, ' + 'age INTEGER, ' + 'salary REAL, ' + 'blobType BLOB)';
const STORE_CONFIG = {
    name: 'RdbStoreChangeEncryptKeyTest.db'
}
var rdbStore = undefined;
describe('RdbStoreChangeEncryptKeyTest', function () {
    beforeAll(async function () {
        console.info(TAG + 'beforeAll' + STORE_CONFIG.storageMode)
        rdbStore = await ohosDataRdb.getRdbStore(STORE_CONFIG, 17);
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
        await ohosDataRdb.deleteRdbStore('RdbStoreChangeEncryptKeyTest.db');
    })

    /*
     * @tc.name RdbStore changeEncryptKey interface test
     * @tc.number SUB_DDM_AppDataFWK_JSRdbStore_0010
     * @tc.desc RdbStore changeEncryptKey interface test
     */

    it('testRdbStoreChangeEncryptKey001', 0, async function (done) {
        console.log(TAG + '********** testRdbStoreChangeEncryptKey001 start *********');
        try {
            var u8 = new Uint8Array([1, 2, 3]);
            let isopen = rdbStore.isOpen;
            await expect(true).assertEqual(isopen);
            let isready = rdbStore.isReadOnly;
            await expect(false).assertEqual(isready);
            await console.log('isopen ' + isopen);
            await console.log('isready ' + isready);
            await rdbStore.changeEncryptKey(u8);
            await console.log('changeEncryptKey done ');
        } catch (e) {
            await console.log('changeEncryptKey error: ' + e);
        }
        done();
        console.log(TAG + '**************** testRdbStoreChangeEncryptKey001 end ****************');
    })

    /*
     * @tc.name RdbStore changeEncryptKey interface test
     * @tc.number SUB_DDM_AppDataFWK_JSRdbStore_0020
     * @tc.desc RdbStore changeEncryptKey interface test
     */

    it('testRdbStoreChangeEncryptKey002', 0, async function (done) {
        console.log(TAG + '********** testRdbStoreChangeEncryptKey002 start *********');
        try {
            let u8 = new Uint8Array([]);
            let isopen = rdbStore.isOpen;
            await expect(true).assertEqual(isopen);
            let isready = rdbStore.isReadOnly;
            await expect(false).assertEqual(isready);
            await rdbStore.changeEncryptKey(u8);
            await console.log('changeEncryptKey2 done ');

        } catch (e) {
            await console.log('changeEncryptKey2 error: ' + e);
        }
        done();
        console.log(TAG + '**************** testRdbStoreChangeEncryptKey002 end ****************');
    })

    /*
     * @tc.name RdbStore changeEncryptKey interface test
     * @tc.number SUB_DDM_AppDataFWK_JSRdbStore_0030
     * @tc.desc RdbStore changeEncryptKey interface test
     */

    it('testRdbStoreChangeEncryptKey003', 0, async function (done) {
        console.log(TAG + '********** testRdbStoreChangeEncryptKey003 start *********');
        try {
            let isopen = rdbStore.isOpen;
            await expect(true).assertEqual(isopen);
            let isready = rdbStore.isReadOnly;
            await expect(false).assertEqual(isready);
            await rdbStore.changeEncryptKey('u8');
            await console.log('changeEncryptKey3 done ');
            await expect(null).assertFail();
        } catch (e) {
            await console.log('changeEncryptKey3 error ');
        }
        done();
        console.log(TAG + '**************** testRdbStoreChangeEncryptKey003 end ****************');
    })

    /*
     * @tc.name RdbStore changeEncryptKey interface test
     * @tc.number SUB_DDM_AppDataFWK_JSRdbStore_0040
     * @tc.desc RdbStore changeEncryptKey interface test
     */

    it('testRdbStoreChangeEncryptKey004', 0, async function (done) {
        console.log(TAG + '********** testRdbStoreChangeEncryptKey004 start *********');
        try {
            let isopen = rdbStore.isOpen;
            await expect(true).assertEqual(isopen);
            let isready = rdbStore.isReadOnly;
            await expect(false).assertEqual(isready);
            await rdbStore.changeEncryptKey('u8');
            await rdbStore.changeEncryptKey(null);
            await console.log('changeEncryptKey4 done ');
            await expect(null).assertFail();
        } catch (e) {
            await console.log('changeEncryptKey4 error ');
        }
        done();
        console.log(TAG + '**************** testRdbStoreChangeEncryptKey004 end ****************');
    })
    console.log(TAG + '*************Unit Test End*************');
})


