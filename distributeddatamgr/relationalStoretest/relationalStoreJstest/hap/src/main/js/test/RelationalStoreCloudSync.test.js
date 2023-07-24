/*
 * Copyright (C) 2023 Huawei Device Co., Ltd.
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

import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from '@ohos/hypium'
import relationalStore from '@ohos.data.relationalStore';
import ability_featureAbility from '@ohos.ability.featureAbility';

const TAG = "[RELATIONAL_STORE_JSKITS_TEST]";
const STORE_NAME = "cloud_sync_rdb.db";
let rdbStore = undefined;
let context = ability_featureAbility.getContext();
let syncProgressDetail = undefined;

function sleep(ms) {
    return new Promise(resolve => setTimeout(resolve, ms));
}

function Progess(ProgressDetail) {
    console.log(TAG + ` Progess:` + JSON.stringify(ProgressDetail));
    syncProgressDetail = ProgressDetail;
}

export default function relationalStoreCloudSyncTest() {
    describe('relationalStoreCloudSyncTest', function () {
        beforeAll(async function (done) {
            console.info(TAG + 'beforeAll')
            const config = {
                "name": STORE_NAME,
                securityLevel: relationalStore.SecurityLevel.S1,
            }
            try {
                console.log(TAG + "create rdb store before");
                try{
                    rdbStore = await relationalStore.getRdbStore(context, config);
                    console.log(TAG + "create rdb store success");
                }catch(err){
                    console.log(TAG + "create rdb store failed" + `, error code is ${err.code}, message is ${err.message}`);
                    expect(null).assertFail();
                    done();
                }

                let sql_text = "CREATE TABLE IF NOT EXISTS cloud_text (" +
                "data TEXT, " +
                "recycled BOOLEAN, " +
                "recycledTime INTEGER, " +
                "num TEXT PRIMARY KEY)";
                let sql_int = "CREATE TABLE IF NOT EXISTS cloud_int (" +
                "data TEXT, " +
                "recycled BOOLEAN, " +
                "recycledTime INTEGER, " +
                "num INTEGER PRIMARY KEY)";
                let sql_integer = "CREATE TABLE IF NOT EXISTS cloud_integer (" +
                "data TEXT, " +
                "recycled BOOLEAN, " +
                "recycledTime INTEGER, " +
                "num INTEGER PRIMARY KEY)";
                try {
                    await rdbStore.executeSql(sql_text, null);
                    await rdbStore.executeSql(sql_int, null);
                    await rdbStore.executeSql(sql_integer, null);
                    console.log(TAG + "create table cloud_text cloud_int cloud_integer success");
                } catch (err) {
                    console.log(TAG + "create table cloud_text cloud_int cloud_integer failed" + `, error code is ${err.code}, message is ${err.message}`)
                    expect(null).assertFail();
                }

                let tableArray = ["cloud_text", "cloud_integer"];
                const setConfig = {
                    autoSync: false,
                }
                let promise = rdbStore.setDistributedTables(
                    tableArray, relationalStore.DistributedType.DISTRIBUTED_CLOUD, setConfig);
                await promise.then(() => {
                    console.log(TAG + "set disTable success");
                }).catch((err) => {
                    console.log(TAG + "set disTable fail" + `, error code is ${err.code}, message is ${err.message}`);
                })
                let vBucketArray1 = new Array();
                for (let i = 0; i < 5; i++) {
                    let valueBucket = {
                        "data": "cloud_sync_insert",
                        "recycled": true,
                        "recycledTime": 12345,
                        "num": "test_key" + i.toString(),
                    }
                    vBucketArray1.push(valueBucket);
                }
                await rdbStore.batchInsert("cloud_text", vBucketArray1);
                let vBucketArray2 = new Array();
                for (let i = 0; i < 5; i++) {
                    let valueBucket = {
                        "data": "cloud_sync_insert",
                        "recycled": true,
                        "recycledTime": 12345,
                        "num": i,
                    }
                    vBucketArray2.push(valueBucket);
                }
                await rdbStore.batchInsert("cloud_integer", vBucketArray2);
                console.log(TAG + "create rdb store success");
            } catch (err) {
                console.log(TAG + "create rdb store failed" + `, error code is ${err.code}, message is ${err.message}`);
                expect(null).assertFail();
            }
            done();
        })

        beforeEach(async function () {
            console.info(TAG + 'beforeEach');
        })

        afterEach(async function () {
            console.info(TAG + 'afterEach');
        })

        afterAll(async function () {
            console.info(TAG + 'afterAll');
            rdbStore = null;
            await rdbStore.deleteRdbStore(context, STORE_NAME);
        })

        console.log(TAG + "*************Unit Test Begin*************");


        /**
         * @tc.name get modify time using wrong table null
         * @tc.number SUB_DDM_AppDataFWK_JSRDB_GetModifyTime_0001
         * @tc.desc rdb get modify time using wrong table null
         */
        it('testRdbStoreGetModifyTime0001', 0, async function (done) {
            console.log(TAG + "************* testRdbStoreGetModifyTime0001 start *************");
            try {
                let PRIKey = ["test_key1", "test_key2"];
                rdbStore.getModifyTime(null, "num", PRIKey, function (err, data) {
                    console.log(TAG + 'modifyTime success');
                    expect(null).assertFail();
                    done();
                });
            } catch (err) {
                console.log(TAG + `get modify time, err code is ${err.code}, message is ${err.message}.`);
                expect(err.code).assertEqual('401');
                done();
            }
            console.log(TAG + "************* testRdbStoreGetModifyTime0001 end *************");
        })

        /**
         * @tc.name get modify time using wrong table undefined
         * @tc.number SUB_DDM_AppDataFWK_JSRDB_GetModifyTime_0002
         * @tc.desc rdb get modify time using wrong table undefined
         */
        it('testRdbStoreGetModifyTime0002', 0, async function (done) {
            console.log(TAG + "************* testRdbStoreGetModifyTime0002 start *************");
            try {
                let PRIKey = ["test_key1", "test_key2"];
                rdbStore.getModifyTime(undefined, "num", PRIKey, function (err, data) {
                    console.log(TAG + 'modifyTime success');
                    expect(null).assertFail();
                    done();
                });
            } catch (err) {
                console.log(TAG + `get modify time, err code is ${err.code}, message is ${err.message}.`);
                expect(err.code).assertEqual('401');
                done();
            }
            console.log(TAG + "************* testRdbStoreGetModifyTime0002 end *************");
        })

        /**
         * @tc.name get modify time using wrong table 123456
         * @tc.number SUB_DDM_AppDataFWK_JSRDB_GetModifyTime_0003
         * @tc.desc rdb get modify time using wrong table 123456
         */
        it('testRdbStoreGetModifyTime0003', 0, async function (done) {
            console.log(TAG + "************* testRdbStoreGetModifyTime0003 start *************");
            try {
                let PRIKey = ["test_key1", "test_key2"];
                rdbStore.getModifyTime(123456, "num", PRIKey, function (err, data) {
                    console.log(TAG + 'modifyTime success');
                    expect(null).assertFail();
                    done();
                });
            } catch (err) {
                console.log(TAG + `get modify time, err code is ${err.code}, message is ${err.message}.`);
                expect(err.code).assertEqual('401');
                done();
            }
            console.log(TAG + "************* testRdbStoreGetModifyTime0003 end *************");
        })
        /**
         * @tc.name get modify time using wrong columnName null
         * @tc.number SUB_DDM_AppDataFWK_JSRDB_GetModifyTime_0004
         * @tc.desc rdb get modify time using wrong columnName null
         */
        it('testRdbStoreGetModifyTime0004', 0, async function (done) {
            console.log(TAG + "************* testRdbStoreGetModifyTime0004 start *************");
            try {
                let PRIKey = ["test_key1", "test_key2"];
                rdbStore.getModifyTime("cloud_text", null, PRIKey, function (err, data) {
                    console.log(TAG + 'modifyTime success');
                    expect(null).assertFail();
                    done();
                });
            } catch (err) {
                console.log(TAG + `get modify time, err code is ${err.code}, message is ${err.message}.`);
                expect(err.code).assertEqual('401');
                done();
            }
            console.log(TAG + "************* testRdbStoreGetModifyTime0004 end *************");
        })

        /**
         * @tc.name get modify time using wrong columnName undefined
         * @tc.number SUB_DDM_AppDataFWK_JSRDB_GetModifyTime_0005
         * @tc.desc rdb get modify time using wrong columnName undefined
         */
        it('testRdbStoreGetModifyTime0005', 0, async function (done) {
            console.log(TAG + "************* testRdbStoreGetModifyTime0005 start *************");
            try {
                let PRIKey = ["test_key1", "test_key2"];
                rdbStore.getModifyTime("cloud_text", undefined, PRIKey, function (err, data) {
                    console.log(TAG + 'modifyTime success');
                    expect(null).assertFail();
                    done();
                });
            } catch (err) {
                console.log(TAG + `get modify time, err code is ${err.code}, message is ${err.message}.`);
                expect(err.code).assertEqual('401');
                done();
            }
            console.log(TAG + "************* testRdbStoreGetModifyTime0005 end *************");
        })

        /**
         * @tc.name get modify time using wrong columnName 123456
         * @tc.number SUB_DDM_AppDataFWK_JSRDB_GetModifyTime_0006
         * @tc.desc rdb get modify time using wrong columnName 123456
         */
        it('testRdbStoreGetModifyTime0006', 0, async function (done) {
            console.log(TAG + "************* testRdbStoreGetModifyTime0006 start *************");
            try {
                let PRIKey = ["test_key1", "test_key2"];
                rdbStore.getModifyTime("cloud_text", 123456, PRIKey, function (err, data) {
                    console.log(TAG + 'modifyTime success');
                    expect(null).assertFail();
                    done();
                });
            } catch (err) {
                console.log(TAG + `get modify time, err code is ${err.code}, message is ${err.message}.`);
                expect(err.code).assertEqual('401');
                done();
            }
            console.log(TAG + "************* testRdbStoreGetModifyTime0006 end *************");
        })

        /**
         * @tc.name get modify time using wrong PRIKey null
         * @tc.number SUB_DDM_AppDataFWK_JSRDB_GetModifyTime_0007
         * @tc.desc rdb get modify time using wrong PRIKey null
         */
        it('testRdbStoreGetModifyTime0007', 0, async function (done) {
            console.log(TAG + "************* testRdbStoreGetModifyTime0007 start *************");
            try {
                let PRIKey = ["test_key1", "test_key2"];
                rdbStore.getModifyTime("cloud_text", "num", null, function (err, data) {
                    console.log(TAG + 'modifyTime success');
                    expect(null).assertFail();
                    done();
                });
            } catch (err) {
                console.log(TAG + `get modify time, err code is ${err.code}, message is ${err.message}.`);
                expect(err.code).assertEqual('401');
                done();
            }
            console.log(TAG + "************* testRdbStoreGetModifyTime0007 end *************");
        })

        /**
         * @tc.name get modify time using wrong PRIKey undefined
         * @tc.number SUB_DDM_AppDataFWK_JSRDB_GetModifyTime_0008
         * @tc.desc rdb get modify time using wrong PRIKey undefined
         */
        it('testRdbStoreGetModifyTime0008', 0, async function (done) {
            console.log(TAG + "************* testRdbStoreGetModifyTime0008 start *************");
            try {
                let PRIKey = ["test_key1", "test_key2"];
                rdbStore.getModifyTime("cloud_text", "num", undefined, function (err, data) {
                    console.log(TAG + 'modifyTime success');
                    expect(null).assertFail();
                    done();
                });
            } catch (err) {
                console.log(TAG + `get modify time, err code is ${err.code}, message is ${err.message}.`);
                expect(err.code).assertEqual('401');
                done();
            }
            console.log(TAG + "************* testRdbStoreGetModifyTime0008 end *************");
        })

        /**
         * @tc.name get modify time using wrong PRIKey 123
         * @tc.number SUB_DDM_AppDataFWK_JSRDB_GetModifyTime_0009
         * @tc.desc rdb get modify time using wrong PRIKey 123
         */
        it('testRdbStoreGetModifyTime0009', 0, async function (done) {
            console.log(TAG + "************* testRdbStoreGetModifyTime0009 start *************");
            try {
                let PRIKey = ["test_key1", "test_key2"];
                rdbStore.getModifyTime("cloud_text", "num", 123, function (err, data) {
                    console.log(TAG + 'modifyTime success');
                    expect(null).assertFail();
                    done();
                });
            } catch (err) {
                console.log(TAG + `get modify time, err code is ${err.code}, message is ${err.message}.`);
                expect(err.code).assertEqual('401');
                done();
            }
            console.log(TAG + "************* testRdbStoreGetModifyTime0009 end *************");
        })


        /**
         * @tc.name get modify time using wrong primary key type
         * @tc.number SUB_DDM_AppDataFWK_JSRDB_CLOUD_SYNC_0001
         * @tc.desc rdb get modify time using wrong primary key type
         */
        it('testRdbStoreCloudSync0001', 0, async function (done) {
            console.log(TAG + "************* testRdbStoreCloudSync0001 start *************");
            try {
                let key = new Array();
                let PRIKey = [key, "test_key1", "test_key2"];
                rdbStore.getModifyTime("cloud_text", "num", PRIKey, function (err, modifyTime) {
                    console.log(TAG + 'modifyTime:' + JSON.stringify(modifyTime));
                    expect(null).assertFail();
                    done();
                });
            } catch (err) {
                console.log(TAG + `get modify time, err code is ${err.code}, message is ${err.message}.`);
                expect(err.code).assertEqual('401');
                done();
            }
            console.log(TAG + "************* testRdbStoreCloudSync0001 end *************");
        })

        /**
         * @tc.name get modify time using string primary key type and callback method
         * @tc.number SUB_DDM_AppDataFWK_JSRDB_CLOUD_SYNC_0002
         * @tc.desc get modify time using string primary key type and callback method
         */
        it('testRdbStoreCloudSync0002', 0, async function (done) {
            console.log(TAG + "************* testRdbStoreCloudSync0002 start *************");
            try {
                let PRIKey = ["test_key1", "test_key2"];
                rdbStore.getModifyTime("cloud_text", "num", PRIKey, function (err, data) {
                    console.log(TAG + 'modifyTime:' + JSON.stringify(data) );
                    expect(err == undefined).assertTrue();
                    let size = Object.keys(data).length ;
                    console.log(TAG + 'size=' + size);
                    expect( size == 2 ).assertTrue();
                    done();
                });
            } catch (err) {
                console.log(TAG + `get modify time fail, err code is ${err.code}, message is ${err.message}.`);
                expect(null).assertFail();
                done();
            }
            console.log(TAG + "************* testRdbStoreCloudSync0002 end *************");
        })

        /**
         * @tc.name get modify time using string primary key type and promise method
         * @tc.number SUB_DDM_AppDataFWK_JSRDB_CLOUD_SYNC_0003
         * @tc.desc get modify time using string primary key type and promise method
         */
        it('testRdbStoreCloudSync0003', 0, async function (done) {
            console.log(TAG + "************* testRdbStoreCloudSync0003 start *************");
            try {
                let PRIKey = ["test_key1", "test_key2"];
                await rdbStore.getModifyTime("cloud_text", "num", PRIKey).then((data) => {
                    console.log(TAG + `modifyTime:` + JSON.stringify(data));
                    let size = Object.keys(data).length ;
                    console.log(TAG + 'size=' + size);
                    expect( size == 2 ).assertTrue();
                    done();
                });
            } catch (err) {
                console.log(TAG + `get modify time fail, err code is ${err.code}, message is ${err.message}.`);
                expect(null).assertFail();
                done();
            }
            console.log(TAG + "************* testRdbStoreCloudSync0003 end *************");
        })

        /**
         * @tc.name get modify time using rowid and callback method
         * @tc.number SUB_DDM_AppDataFWK_JSRDB_CLOUD_SYNC_0004
         * @tc.desc get modify time using rowid and callback method
         */
        it('testRdbStoreCloudSync0004', 0, async function (done) {
            console.log(TAG + "************* testRdbStoreCloudSync0004 start *************");
            try {
                let PRIKey = [1, 3, 4];
                rdbStore.getModifyTime("cloud_text", "rowid", PRIKey, function (err, data) {
                    console.log(TAG + `modifyTime:` + JSON.stringify(data));
                    expect(err == undefined).assertTrue();
                    let size = Object.keys(data).length ;
                    console.log(TAG + 'size=' + size);
                    expect( size == 3 ).assertTrue();
                    done();
                });
            } catch (err) {
                console.log(TAG + `get modify time fail, err code is ${err.code}, message is ${err.message}.`);
                expect(null).assertFail();
                done();
            }
            console.log(TAG + "************* testRdbStoreCloudSync0004 end *************");
        })

        /**
         * @tc.name get modify time using rowid and promise method
         * @tc.number SUB_DDM_AppDataFWK_JSRDB_CLOUD_SYNC_0005
         * @tc.desc get modify time using rowid and promise method
         */
        it('testRdbStoreCloudSync0005', 0, async function (done) {
            console.log(TAG + "************* testRdbStoreCloudSync0005 start *************");
            try {
                let PRIKey = [2, 4];
                await rdbStore.getModifyTime("cloud_text", "roWId", PRIKey).then((data) => {
                    console.log(TAG + `modifyTime:` + JSON.stringify(data));
                    let size = Object.keys(data).length ;
                    console.log(TAG + 'size=' + size);
                    expect( size == 2 ).assertTrue();
                    done();
                });
            } catch (err) {
                console.log(TAG + `get modify time fail, err code is ${err.code}, message is ${err.message}.`);
                expect(null).assertFail();
                done();
            }
            console.log(TAG + "************* testRdbStoreCloudSync0005 end *************");
        })

        /**
         * @tc.name get modify time, but not set distributed table
         * @tc.number SUB_DDM_AppDataFWK_JSRDB_CLOUD_SYNC_0006
         * @tc.desc get modify time, but not set distributed table
         */
        it('testRdbStoreCloudSync0006', 0, async function (done) {
            console.log(TAG + "************* testRdbStoreCloudSync0006 start *************");
            try {
                for (let i = 0; i < 5; i++) {
                    let valueBucket = {
                        "data": "cloud_sync_insert",
                        "recycled": true,
                        "recycledTime": 12345,
                        "uuid": i,
                    }
                    let vBucketArray = new Array();
                    vBucketArray.push(valueBucket);
                    await rdbStore.batchInsert("cloud_int", vBucketArray);
                }
                let PRIKey = [0, 1, 2];
                await rdbStore.getModifyTime("cloud_int", "num", PRIKey).then((data) => {
                    console.log(TAG + `modifyTime:` + JSON.stringify(data));
                    expect(null).assertFail();
                    done();
                })
            } catch (err) {
                console.log(TAG + `get modify time fail, err code is ${err.code}, message is ${err.message}.`);
                expect(err.code == 14800000).assertTrue();
                done();
            }
            console.log(TAG + "************* testRdbStoreCloudSync0006 end *************");
        })

        /**
         * @tc.name get modify time using int primary key type and callback method
         * @tc.number SUB_DDM_AppDataFWK_JSRDB_CLOUD_SYNC_0007
         * @tc.desc get modify time using int primary key type and callback method
         */
        it('testRdbStoreCloudSync0007', 0, async function (done) {
            console.log(TAG + "************* testRdbStoreCloudSync0007 start *************");
            try {
                let PRIKey = [1, 2, 4];
                rdbStore.getModifyTime("cloud_integer", "num", PRIKey, function (err, data) {
                    console.log(TAG + `modifyTime:` + JSON.stringify(data));
                    expect(err == undefined).assertTrue();
                    let size = Object.keys(data).length ;
                    console.log(TAG + 'size=' + size);
                    expect( size == 3 ).assertTrue();
                    done();
                });
            } catch (err) {
                console.log(TAG + `get modify time fail, err code is ${err.code}, message is ${err.message}.`);
                expect(null).assertFail();
                done();
            }
            console.log(TAG + "************* testRdbStoreCloudSync0007 end *************");
        })

        /**
         * @tc.name get modify time using int primary key type and promise method
         * @tc.number SUB_DDM_AppDataFWK_JSRDB_CLOUD_SYNC_0008
         * @tc.desc get modify time using int primary key type and promise method
         */
        it('testRdbStoreCloudSync0008', 0, async function (done) {
            console.log(TAG + "************* testRdbStoreCloudSync0008 start *************");
            try {
                let PRIKey = [2, 4];
                await rdbStore.getModifyTime("cloud_integer", "num", PRIKey).then((data) => {
                    console.log(TAG + `modifyTime:` + JSON.stringify(data));
                    let size = Object.keys(data).length ;
                    console.log(TAG + 'size=' + size);
                    expect( size == 2 ).assertTrue();
                    done();
                });
            } catch (err) {
                console.log(TAG + `get modify time fail, err code is ${err.code}, message is ${err.message}.`);
                expect(null).assertFail();
                done();
            }
            console.log(TAG + "************* testRdbStoreCloudSync0008 end *************");
        })

        /**
         * @tc.name cloud sync with no table, SyncMode is SYNC_MODE_TIME_FIRST and callback method
         * @tc.number SUB_DDM_AppDataFWK_JSRDB_CLOUD_SYNC_0009
         * @tc.desc cloud sync with no table, SyncMode is SYNC_MODE_TIME_FIRST and callback method
         */
        it('testRdbStoreCloudSync0009', 0, async function (done) {
            console.log(TAG + "************* 1111  testRdbStoreCloudSync0009 start *************");
            try {
                rdbStore.cloudSync(relationalStore.SyncMode.SYNC_MODE_TIME_FIRST, Progess , function (err) {
                    console.log(TAG + `cloud sync success:`);
                    expect(err == undefined).assertTrue();
                });
                await sleep(1000);
                expect( syncProgressDetail["schedule"] == relationalStore.Progress.SYNC_FINISH ).assertTrue();
                expect( syncProgressDetail["code"] != 0 ).assertTrue();
                done();
            } catch (err) {
                console.log(TAG + `cloud sync fail, err code is ${err.code}, message is ${err.message}.`);
                expect(null).assertFail();
                done();
            }
            console.log(TAG + "************* testRdbStoreCloudSync0009 end *************");
        })

        /**
         * @tc.name cloud sync with no table, SyncMode is SYNC_MODE_TIME_FIRST and promise method
         * @tc.number SUB_DDM_AppDataFWK_JSRDB_CLOUD_SYNC_0010
         * @tc.desc cloud sync with no table, SyncMode is SYNC_MODE_TIME_FIRST and promise method
         */
        it('testRdbStoreCloudSync0010', 0, async function (done) {
            console.log(TAG + "************* testRdbStoreCloudSync0010 start *************");
            try {
                await rdbStore.cloudSync(relationalStore.SyncMode.SYNC_MODE_TIME_FIRST, Progess).then(() => {
                    console.log(TAG + `cloud sync success:`);
                });
                await sleep(1000);
                expect( syncProgressDetail["schedule"] == relationalStore.Progress.SYNC_FINISH ).assertTrue();
                expect( syncProgressDetail["code"] != 0 ).assertTrue();
                done();
            } catch (err) {
                console.log(TAG + `cloud sync fail, err code is ${err.code}, message is ${err.message}.`);
                expect(null).assertFail();
                done();
            }
            console.log(TAG + "************* testRdbStoreCloudSync0010 end *************");
        })

        /**
         * @tc.name cloud sync with table, SyncMode is SYNC_MODE_TIME_FIRST and callback method
         * @tc.number SUB_DDM_AppDataFWK_JSRDB_CLOUD_SYNC_0011
         * @tc.desc cloud sync with table, SyncMode is SYNC_MODE_TIME_FIRST and callback method
         */
        it('testRdbStoreCloudSync0011', 0, async function (done) {
            console.log(TAG + "************* testRdbStoreCloudSync0011 start *************");
            try {
                let tableArray = ["cloud_text"];
                rdbStore.cloudSync(relationalStore.SyncMode.SYNC_MODE_TIME_FIRST, tableArray, Progess , function (err) {
                    console.log(TAG + `cloud sync success:` + err);
                    expect(err == undefined).assertTrue();
                });
                await sleep(1000);
                expect( syncProgressDetail["schedule"] == relationalStore.Progress.SYNC_FINISH ).assertTrue();
                expect( syncProgressDetail["code"] != 0 ).assertTrue();
                done();
            } catch (err) {
                console.log(TAG + `cloud sync fail, err code is ${err.code}, message is ${err.message}.`);
                expect(null).assertFail();
                done();
            }
            console.log(TAG + "************* testRdbStoreCloudSync0011 end *************");
        })

        /**
         * @tc.name cloud sync with table, SyncMode is SYNC_MODE_TIME_FIRST and promise method
         * @tc.number SUB_DDM_AppDataFWK_JSRDB_CLOUD_SYNC_0012
         * @tc.desc cloud sync with table, SyncMode is SYNC_MODE_TIME_FIRST and promise method
         */
        it('testRdbStoreCloudSync0012', 0, async function (done) {
            console.log(TAG + "************* testRdbStoreCloudSync0012 start *************");
            try {
                let tableArray = ["cloud_text"];
                await rdbStore.cloudSync(
                    relationalStore.SyncMode.SYNC_MODE_TIME_FIRST, tableArray, Progess).then(() => {
                    console.log(TAG + `cloud sync success:`);
                });
                await sleep(1000);
                expect( syncProgressDetail["schedule"] == relationalStore.Progress.SYNC_FINISH ).assertTrue();
                expect( syncProgressDetail["code"] != 0 ).assertTrue();
                done();
            } catch (err) {
                console.log(TAG + `cloud sync fail, err code is ${err.code}, message is ${err.message}.`);
                expect(null).assertFail();
                done();
            }
            console.log(TAG + "************* testRdbStoreCloudSync0012 end *************");
        })

        /**
         * @tc.name cloud sync with table, SyncMode is SYNC_MODE_NATIVE_FIRST and promise method
         * @tc.number SUB_DDM_AppDataFWK_JSRDB_CLOUD_SYNC_0013
         * @tc.desc cloud sync with table, SyncMode is SYNC_MODE_NATIVE_FIRST and promise method
         */
        it('testRdbStoreCloudSync0013', 0, async function (done) {
            console.log(TAG + "************* testRdbStoreCloudSync0013 start *************");
            try {
                let tableArray = ["cloud_text"];
                await rdbStore.cloudSync(
                    relationalStore.SyncMode.SYNC_MODE_NATIVE_FIRST, tableArray, Progess).then(() => {
                    console.log(TAG + `cloud sync success`);
                });
                await sleep(1000);
                expect( syncProgressDetail["schedule"] == relationalStore.Progress.SYNC_FINISH ).assertTrue();
                expect( syncProgressDetail["code"] != 0 ).assertTrue();
                done();
            } catch (err) {
                console.log(TAG + `cloud sync fail, err code is ${err.code}, message is ${err.message}.`);
                expect(null).assertFail();
                done();
            }
            console.log(TAG + "************* testRdbStoreCloudSync0013 end *************");
        })

        /**
         * @tc.name cloud sync with table, SyncMode is SYNC_MODE_CLOUD_FIRST and promise method
         * @tc.number SUB_DDM_AppDataFWK_JSRDB_CLOUD_SYNC_0014
         * @tc.desc cloud sync with table, SyncMode is SYNC_MODE_CLOUD_FIRST and promise method
         */
        it('testRdbStoreCloudSync0014', 0, async function (done) {
            console.log(TAG + "************* testRdbStoreCloudSync0014 start *************");
            try {
                let tableArray = ["cloud_text"];
                await rdbStore.cloudSync(
                    relationalStore.SyncMode.SYNC_MODE_CLOUD_FIRST, tableArray, Progess).then(() => {
                    console.log(TAG + `cloud sync success:`);
                });
                await sleep(1000);
                expect( syncProgressDetail["schedule"] == relationalStore.Progress.SYNC_FINISH ).assertTrue();
                expect( syncProgressDetail["code"] != 0 ).assertTrue();
                done();
            } catch (err) {
                console.log(TAG + `cloud sync fail, err code is ${err.code}, message is ${err.message}.`);
                expect(null).assertFail();
                done();
            }
            console.log(TAG + "************* testRdbStoreCloudSync0014 end *************");
        })

        /**
         * @tc.name cloud sync with wrong no SyncMode
         * @tc.number SUB_DDM_AppDataFWK_JSRDB_CLOUD_SYNC_0015
         * @tc.desc cloud sync with table, SyncMode is SYNC_MODE_CLOUD_FIRST and promise method
         */
        it('testRdbStoreCloudSync0015', 0, async function (done) {
            console.log(TAG + "************* testRdbStoreCloudSync0015 start *************");
            try {
                await rdbStore.cloudSync( Progess ).then(() => {
                    console.log(TAG + `cloud sync success`);
                    expect(null).assertFail();
                    done();
                });
            } catch (err) {
                console.log(TAG + `cloud sync fail, err code is ${err.code}, message is ${err.message}.`);
                expect(err.code == 401).assertTrue();
                done();
            }
            console.log(TAG + "************* testRdbStoreCloudSync0015 end *************");
        })

        /**
         * @tc.name cloud sync with wrong SyncMode err
         * @tc.number SUB_DDM_AppDataFWK_JSRDB_CLOUD_SYNC_0016
         * @tc.desc cloud sync with table, SyncMode is SYNC_MODE_CLOUD_FIRST and promise method
         */
        it('testRdbStoreCloudSync0016', 0, async function (done) {
            console.log(TAG + "************* testRdbStoreCloudSync0016 start *************");
            try {
                let tableArray = ["cloud_text"];
                await rdbStore.cloudSync(
                    relationalStore.SyncMode.SYNC_MODE, tableArray, Progess).then(() => {
                    console.log(TAG + `cloud sync success:`);
                    expect(null).assertFail();
                    done();
                });
            } catch (err) {
                console.log(TAG + `cloud sync fail, err code is ${err.code}, message is ${err.message}.`);
                expect(err.code == 401).assertTrue();
                done();
            }
            console.log(TAG + "************* testRdbStoreCloudSync0016 end *************");
        })
        /**
         * @tc.name cloud sync with wrong SyncMode null
         * @tc.number SUB_DDM_AppDataFWK_JSRDB_CLOUD_SYNC_TABLE_0001
         * @tc.desc cloud sync with table, SyncMode is SYNC_MODE_CLOUD_FIRST and promise method
         */
        it('testRdbStoreCloudSyncTable0001', 0, async function (done) {
            console.log(TAG + "************* testRdbStoreCloudSyncTable0001 start *************");
            try {
                let tableArray = ["cloud_text"];
                await rdbStore.cloudSync(null, tableArray, Progess).then(() => {
                    console.log(TAG + `cloud sync success:`);
                    expect(null).assertFail();
                    done();
                });
            } catch (err) {
                console.log(TAG + `cloud sync fail, err code is ${err.code}, message is ${err.message}.`);
                expect(err.code == 401).assertTrue();
                done();
            }
            console.log(TAG + "************* testRdbStoreCloudSyncTable0001 end *************");
        })

        /**
         * @tc.name cloud sync with wrong SyncMode undefined
         * @tc.number SUB_DDM_AppDataFWK_JSRDB_CLOUD_SYNC_TABLE_0002
         * @tc.desc cloud sync with table, SyncMode is SYNC_MODE_CLOUD_FIRST and promise method
         */
        it('testRdbStoreCloudSyncTable0002', 0, async function (done) {
            console.log(TAG + "************* testRdbStoreCloudSyncTable0002 start *************");
            try {
                let tableArray = ["cloud_text"];
                await rdbStore.cloudSync(undefined, tableArray, Progess).then(() => {
                    console.log(TAG + `cloud sync success:`);
                    expect(null).assertFail();
                    done();
                });
            } catch (err) {
                console.log(TAG + `cloud sync fail, err code is ${err.code}, message is ${err.message}.`);
                expect(err.code == 401).assertTrue();
                done();
            }
            console.log(TAG + "************* testRdbStoreCloudSyncTable0002 end *************");
        })

        /**
         * @tc.name cloud sync with wrong SyncMode 123
         * @tc.number SUB_DDM_AppDataFWK_JSRDB_CLOUD_SYNC_TABLE_0003
         * @tc.desc cloud sync with table, SyncMode is SYNC_MODE_CLOUD_FIRST and promise method
         */
        it('testRdbStoreCloudSyncTable0003', 0, async function (done) {
            console.log(TAG + "************* testRdbStoreCloudSyncTable0003 start *************");
            try {
                let tableArray = ["cloud_text"];
                await rdbStore.cloudSync(123, tableArray, Progess).then(() => {
                    console.log(TAG + `cloud sync success:`);
                    expect(null).assertFail();
                    done();
                });
            } catch (err) {
                console.log(TAG + `cloud sync fail, err code is ${err.code}, message is ${err.message}.`);
                expect(err.code == 401).assertTrue();
                done();
            }
            console.log(TAG + "************* testRdbStoreCloudSyncTable0003 end *************");
        })

        /**
         * @tc.name cloud sync with wrong table null
         * @tc.number SUB_DDM_AppDataFWK_JSRDB_CLOUD_SYNC_TABLE_0004
         * @tc.desc cloud sync with table, SyncMode is SYNC_MODE_CLOUD_FIRST and promise method
         */
        it('testRdbStoreCloudSyncTable0004', 0, async function (done) {
            console.log(TAG + "************* testRdbStoreCloudSyncTable0004 start *************");
            try {
                await rdbStore.cloudSync(relationalStore.SyncMode.SYNC_MODE_TIME_FIRST, null, Progess).then(() => {
                    console.log(TAG + `cloud sync success:`);
                    expect(null).assertFail();
                    done();
                });
            } catch (err) {
                console.log(TAG + `cloud sync fail, err code is ${err.code}, message is ${err.message}.`);
                expect(err.code == 401).assertTrue();
                done();
            }
            console.log(TAG + "************* testRdbStoreCloudSyncTable0004 end *************");
        })

        /**
         * @tc.name cloud sync with wrong table undefined
         * @tc.number SUB_DDM_AppDataFWK_JSRDB_CLOUD_SYNC_TABLE_0005
         * @tc.desc cloud sync with table, SyncMode is SYNC_MODE_CLOUD_FIRST and promise method
         */
        it('testRdbStoreCloudSyncTable0005', 0, async function (done) {
            console.log(TAG + "************* testRdbStoreCloudSyncTable0005 start *************");
            try {
                await rdbStore.cloudSync(relationalStore.SyncMode.SYNC_MODE_TIME_FIRST, undefined, Progess).then(() => {
                    console.log(TAG + `cloud sync success:`);
                    expect(null).assertFail();
                    done();
                });
            } catch (err) {
                console.log(TAG + `cloud sync fail, err code is ${err.code}, message is ${err.message}.`);
                expect(err.code == 401).assertTrue();
                done();
            }
            console.log(TAG + "************* testRdbStoreCloudSyncTable0005 end *************");
        })

        /**
         * @tc.name cloud sync with wrong table 123
         * @tc.number SUB_DDM_AppDataFWK_JSRDB_CLOUD_SYNC_TABLE_0006
         * @tc.desc cloud sync with table, SyncMode is SYNC_MODE_CLOUD_FIRST and promise method
         */
        it('testRdbStoreCloudSyncTable0006', 0, async function (done) {
            console.log(TAG + "************* testRdbStoreCloudSyncTable0006 start *************");
            try {
                await rdbStore.cloudSync(relationalStore.SyncMode.SYNC_MODE_TIME_FIRST, 123, Progess).then(() => {
                    console.log(TAG + `cloud sync success:`);
                    expect(null).assertFail();
                    done();
                });
            } catch (err) {
                console.log(TAG + `cloud sync fail, err code is ${err.code}, message is ${err.message}.`);
                expect(err.code == 401).assertTrue();
                done();
            }
            console.log(TAG + "************* testRdbStoreCloudSyncTable0006 end *************");
        })

        /**
         * @tc.name cloud sync with wrong table ""
         * @tc.number SUB_DDM_AppDataFWK_JSRDB_CLOUD_SYNC_TABLE_0007
         * @tc.desc cloud sync with table, SyncMode is SYNC_MODE_CLOUD_FIRST and promise method
         */
        it('testRdbStoreCloudSyncTable0007', 0, async function (done) {
            console.log(TAG + "************* testRdbStoreCloudSyncTable0007 start *************");
            try {
                await rdbStore.cloudSync(relationalStore.SyncMode.SYNC_MODE_TIME_FIRST, "", Progess).then(() => {
                    console.log(TAG + `cloud sync success:`);
                    expect(null).assertFail();
                    done();
                });
            } catch (err) {
                console.log(TAG + `cloud sync fail, err code is ${err.code}, message is ${err.message}.`);
                expect(err.code == 401).assertTrue();
                done();
            }
            console.log(TAG + "************* testRdbStoreCloudSyncTable0007 end *************");
        })

        /**
         * @tc.name cloud sync with wrong table "table123"
         * @tc.number SUB_DDM_AppDataFWK_JSRDB_CLOUD_SYNC_TABLE_0008
         * @tc.desc cloud sync with table, SyncMode is SYNC_MODE_CLOUD_FIRST and promise method
         */
        it('testRdbStoreCloudSyncTable0008', 0, async function (done) {
            console.log(TAG + "************* testRdbStoreCloudSyncTable0008 start *************");
            try {
                await rdbStore.cloudSync(relationalStore.SyncMode.SYNC_MODE_TIME_FIRST, "table123", Progess).then(() => {
                    console.log(TAG + `cloud sync success:`);
                    expect(null).assertFail();
                    done();
                });
            } catch (err) {
                console.log(TAG + `cloud sync fail, err code is ${err.code}, message is ${err.message}.`);
                expect(err.code == 401).assertTrue();
                done();
            }
            console.log(TAG + "************* testRdbStoreCloudSyncTable0008 end *************");
        })

        /**
         * @tc.name cloud sync with wrong Progess null
         * @tc.number SUB_DDM_AppDataFWK_JSRDB_CLOUD_SYNC_TABLE_0009
         * @tc.desc cloud sync with table, SyncMode is SYNC_MODE_CLOUD_FIRST and promise method
         */
        it('testRdbStoreCloudSyncTable0009', 0, async function (done) {
            console.log(TAG + "************* testRdbStoreCloudSyncTable0009 start *************");
            try {
                let tableArray = ["cloud_text"];
                await rdbStore.cloudSync(relationalStore.SyncMode.SYNC_MODE_TIME_FIRST, tableArray, null).then(() => {
                    console.log(TAG + `cloud sync success:`);
                    expect(null).assertFail();
                    done();
                });
            } catch (err) {
                console.log(TAG + `cloud sync fail, err code is ${err.code}, message is ${err.message}.`);
                expect(err.code == 401).assertTrue();
                done();
            }
            console.log(TAG + "************* testRdbStoreCloudSyncTable0009 end *************");
        })

        /**
         * @tc.name cloud sync with wrong Progess undefined
         * @tc.number SUB_DDM_AppDataFWK_JSRDB_CLOUD_SYNC_TABLE_0010
         * @tc.desc cloud sync with table, SyncMode is SYNC_MODE_CLOUD_FIRST and promise method
         */
        it('testRdbStoreCloudSyncTable0010', 0, async function (done) {
            console.log(TAG + "************* testRdbStoreCloudSyncTable0010 start *************");
            try {
                let tableArray = ["cloud_text"];
                await rdbStore.cloudSync(relationalStore.SyncMode.SYNC_MODE_TIME_FIRST, tableArray, undefined).then(() => {
                    console.log(TAG + `cloud sync success:`);
                    expect(null).assertFail();
                    done();
                });
            } catch (err) {
                console.log(TAG + `cloud sync fail, err code is ${err.code}, message is ${err.message}.`);
                expect(err.code == 401).assertTrue();
                done();
            }
            console.log(TAG + "************* testRdbStoreCloudSyncTable0010 end *************");
        })

        /**
         * @tc.name cloud sync with wrong Progess "progess"
         * @tc.number SUB_DDM_AppDataFWK_JSRDB_CLOUD_SYNC_TABLE_0011
         * @tc.desc cloud sync with table, SyncMode is SYNC_MODE_CLOUD_FIRST and promise method
         */
        it('testRdbStoreCloudSyncTable0011', 0, async function (done) {
            console.log(TAG + "************* testRdbStoreCloudSyncTable0011 start *************");
            try {
                let tableArray = ["cloud_text"];
                await rdbStore.cloudSync(relationalStore.SyncMode.SYNC_MODE_TIME_FIRST, tableArray, "progess").then(() => {
                    console.log(TAG + `cloud sync success:`);
                    expect(null).assertFail();
                    done();
                });
            } catch (err) {
                console.log(TAG + `cloud sync fail, err code is ${err.code}, message is ${err.message}.`);
                expect(err.code == 401).assertTrue();
                done();
            }
            console.log(TAG + "************* testRdbStoreCloudSyncTable0011 end *************");
        })

        /**
         * @tc.name cloud sync with wrong Progess no
         * @tc.number SUB_DDM_AppDataFWK_JSRDB_CLOUD_SYNC_TABLE_0012
         * @tc.desc cloud sync with table, SyncMode is SYNC_MODE_CLOUD_FIRST and promise method
         */
        it('testRdbStoreCloudSyncTable0012', 0, async function (done) {
            console.log(TAG + "************* testRdbStoreCloudSyncTable0012 start *************");
            try {
                let tableArray = ["cloud_text"];
                await rdbStore.cloudSync(relationalStore.SyncMode.SYNC_MODE_TIME_FIRST, tableArray).then(() => {
                    console.log(TAG + `cloud sync success:`);
                    expect(null).assertFail();
                    done();
                });
            } catch (err) {
                console.log(TAG + `cloud sync fail, err code is ${err.code}, message is ${err.message}.`);
                expect(err.code == 401).assertTrue();
                done();
            }
            console.log(TAG + "************* testRdbStoreCloudSyncTable0012 end *************");
        })

        /**
         * @tc.name test PRIKeyType string
         * @tc.number SUB_DDM_AppDataFWK_JSRDB_PRIKeyType_0010
         * @tc.desc test PRIKeyType string
         */
        it('testRdbStorePRIKeyType0010', 0, async function (done) {
            console.log(TAG + "************* testRdbStorePRIKeyType0010 start *************");
            try {
                relationalStore.PRIKeyType = ["test_key1", "test_key2"];
                rdbStore.getModifyTime("cloud_text", "num", relationalStore.PRIKeyType, function (err, data) {
                    console.log(TAG + 'modifyTime:' + JSON.stringify(data) );
                    expect(err == undefined).assertTrue();
                    let size = Object.keys(data).length ;
                    console.log(TAG + 'size=' + size);
                    expect( size == 2 ).assertTrue();
                    done();
                });
            } catch (err) {
                console.log(TAG + `get modify time fail, err code is ${err.code}, message is ${err.message}.`);
                expect(null).assertFail();
                done();
            }
            console.log(TAG + "************* testRdbStorePRIKeyType0010 end *************");
        })

        /**
         * @tc.name test PRIKeyType number
         * @tc.number SUB_DDM_AppDataFWK_JSRDB_PRIKeyType_0020
         * @tc.desc test PRIKeyType number
         */
        it('testRdbStorePRIKeyType0020', 0, async function (done) {
            console.log(TAG + "************* testRdbStorePRIKeyType0020 start *************");
            try {
                relationalStore.PRIKeyType = [2, 4];
                await rdbStore.getModifyTime("cloud_integer", "num", relationalStore.PRIKeyType).then((data) => {
                    console.log(TAG + `modifyTime:` + JSON.stringify(data));
                    let size = Object.keys(data).length ;
                    console.log(TAG + 'size=' + size);
                    expect( size == 2 ).assertTrue();
                    done();
                });
            } catch (err) {
                console.log(TAG + `get modify time fail, err code is ${err.code}, message is ${err.message}.`);
                expect(null).assertFail();
                done();
            }
            console.log(TAG + "************* testRdbStorePRIKeyType0020 end *************");
        })

        /**
         * @tc.name test UTCTime type
         * @tc.number SUB_DDM_AppDataFWK_JSRDB_UTCTime_0010
         * @tc.desc test UTCTime type
         */
        it('testRdbStoreUTCTime0010', 0, async function (done) {
            console.log(TAG + "************* testRdbStoreUTCTime0010 start *************");
            try {
                let time = new Date();
                relationalStore.UTCTime = time;
                expect(relationalStore.UTCTime == time).assertTrue();
                done();
            } catch (err) {
                console.log(TAG + `testRdbStoreUTCTime0010 fail, err code is ${err.code}, message is ${err.message}.`);
                expect(null).assertFail();
                done();
            }
            console.log(TAG + "************* testRdbStoreUTCTime0010 end *************");
        })

        /**
         * @tc.name test ModifyTime type
         * @tc.number SUB_DDM_AppDataFWK_JSRDB_ModifyTime_0010
         * @tc.desc test ModifyTime type
         */
        it('testRdbStoreModifyTime0010', 0, async function (done) {
            console.log(TAG + "************* testRdbStoreModifyTime0010 start *************");
            try {
                let time1 = new Date();
                let time2 = new Date();
                relationalStore.ModifyTime = {"test_key1":time1,"test_key2":time2};
                expect(relationalStore.ModifyTime["test_key1"] == time1).assertTrue();
                expect(relationalStore.ModifyTime["test_key2"] == time2).assertTrue();
                done();
            } catch (err) {
                console.log(TAG + `testRdbStoreModifyTime0010 fail, err code is ${err.code}, message is ${err.message}.`);
                expect(null).assertFail();
                done();
            }
            console.log(TAG + "************* testRdbStoreModifyTime0010 end *************");
        })
        /**
         * @tc.name test Progress type
         * @tc.number SUB_DDM_AppDataFWK_JSRDB_Progress_0010
         * @tc.desc test Progress type
         */
        it('testRdbStoreProgress0010', 0, async function (done) {
            console.log(TAG + "************* testRdbStoreProgress0010 start *************");
            try {
                expect(relationalStore.Progress.SYNC_BEGIN == 0).assertTrue();
                expect(relationalStore.Progress.SYNC_IN_PROGRESS == 1).assertTrue();
                expect(relationalStore.Progress.SYNC_FINISH == 2).assertTrue();
                done();
            } catch (err) {
                console.log(TAG + `testRdbStoreProgress0010 fail, err code is ${err.code}, message is ${err.message}.`);
                expect(null).assertFail();
                done();
            }
            console.log(TAG + "************* testRdbStoreProgress0010 end *************");
        })
        /**
         * @tc.name test Statistic
         * @tc.number SUB_DDM_AppDataFWK_JSRDB_Statistic_0010
         * @tc.desc test Statistic
         */
        it('testRdbStoreStatistic0010', 0, async function (done) {
            console.log(TAG + "************* testRdbStoreStatistic0010 start *************");
            try {
                relationalStore.Statistic = {"total":10, "success":6, "failed":3, "remained":1};
                expect(relationalStore.Statistic.total == 10 ).assertTrue();
                expect(relationalStore.Statistic.success == 6 ).assertTrue();
                expect(relationalStore.Statistic.failed == 3 ).assertTrue();
                expect(relationalStore.Statistic.remained == 1 ).assertTrue();
                done();
            } catch (err) {
                console.log(TAG + `testRdbStoreStatistic0010 fail, err code is ${err.code}, message is ${err.message}.`);
                expect(null).assertFail();
                done();
            }
            console.log(TAG + "************* testRdbStoreStatistic0010 end *************");
        })

        /**
         * @tc.name test TableDetails
         * @tc.number SUB_DDM_AppDataFWK_JSRDB_TableDetails_0010
         * @tc.desc test TableDetails
         */
        it('testRdbStoreTableDetails0010', 0, async function (done) {
            console.log(TAG + "************* testRdbStoreTableDetails0010 start *************");
            try {
                relationalStore.Statistic1 = {"total":10, "success":6, "failed":3, "remained":1};
                relationalStore.Statistic2 = {"total":100, "success":60, "failed":30, "remained":10};
                relationalStore.TableDetails = {"upload": relationalStore.Statistic1, "download": relationalStore.Statistic2};

                expect(relationalStore.TableDetails.upload == relationalStore.Statistic1 ).assertTrue();
                expect(relationalStore.TableDetails.download == relationalStore.Statistic2 ).assertTrue();
                done();
            } catch (err) {
                console.log(TAG + `testRdbStoreTableDetails0010 fail, err code is ${err.code}, message is ${err.message}.`);
                expect(null).assertFail();
                done();
            }
            console.log(TAG + "************* testRdbStoreTableDetails0010 end *************");
        })

        /**
         * @tc.name test ProgressCode
         * @tc.number SUB_DDM_AppDataFWK_JSRDB_ProgressCode_0010
         * @tc.desc test ProgressCode
         */
        it('testRdbStoreProgressCode0010', 0, async function (done) {
            console.log(TAG + "************* testRdbStoreProgressCode0010 start *************");
            try {
                console.log(TAG + "SUCCESS=" + relationalStore.ProgressCode.SUCCESS);

                expect(relationalStore.ProgressCode.SUCCESS == 0).assertTrue();
                expect(relationalStore.ProgressCode.UNKNOWN_ERROR == 1).assertTrue();
                expect(relationalStore.ProgressCode.NETWORK_ERROR == 2).assertTrue();
                expect(relationalStore.ProgressCode.CLOUD_DISABLED == 3).assertTrue();
                expect(relationalStore.ProgressCode.LOCKED_BY_OTHERS == 4).assertTrue();
                expect(relationalStore.ProgressCode.RECORD_LIMIT_EXCEEDED == 5).assertTrue();
                expect(relationalStore.ProgressCode.NO_SPACE_FOR_ASSET == 6).assertTrue();
                done();
            } catch (err) {
                console.log(TAG + `testRdbStoreProgressCode0010 fail, err code is ${err.code}, message is ${err.message}.`);
                expect(null).assertFail();
                done();
            }
            console.log(TAG + "************* testRdbStoreProgressCode0010 end *************");
        })

        /**
         * @tc.name test ProgressDetails
         * @tc.number SUB_DDM_AppDataFWK_JSRDB_ProgressDetails_0010
         * @tc.desc test ProgressDetails
         */
        it('testRdbStoreProgressDetails0010', 0, async function (done) {
            console.log(TAG + "************* testRdbStoreProgressDetails0010 start *************");
            try {
                relationalStore.Statistic1 = {"total":10, "success":6, "failed":3, "remained":1};
                relationalStore.Statistic2 = {"total":100, "success":60, "failed":30, "remained":10};
                relationalStore.TableDetails = {"upload": relationalStore.Statistic1, "download": relationalStore.Statistic2};

                relationalStore.ProgressDetails = {"schedule":2,"code":0,"details":relationalStore.TableDetails};
                expect(relationalStore.ProgressDetails.schedule == 2).assertTrue();
                expect(relationalStore.ProgressDetails.code == 0).assertTrue();
                expect(relationalStore.ProgressDetails.details == relationalStore.TableDetails).assertTrue();
                done();
            } catch (err) {
                console.log(TAG + `testRdbStoreProgressDetails0010 fail, err code is ${err.code}, message is ${err.message}.`);
                expect(null).assertFail();
                done();
            }
            console.log(TAG + "************* testRdbStoreProgressDetails0010 end *************");
        })


        console.log(TAG + "*************Unit Test End*************");
    })}
