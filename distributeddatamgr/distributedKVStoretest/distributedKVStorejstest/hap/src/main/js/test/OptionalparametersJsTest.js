import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from '@ohos/hypium'
import factory from '@ohos.data.distributedKVStore'
import abilityFeatureAbility from '@ohos.ability.featureAbility'
import deviceManager from '@ohos.distributedHardware.deviceManager';

var context = abilityFeatureAbility.getContext();

const TEST_BUNDLE_NAME = 'ohos.acts.distributedKvStore';
const TEST_STORE_ID = 'storeId';
var kvManager = null;
var kvStore = null;
let TAG = "[ttt]"

export default function OptionalparametersJsTest(){
    describe('OptionalparametersJsTest', function () {
        const config = {
            bundleName : TEST_BUNDLE_NAME,
            context: context
        }
        const options = {
            createIfMissing : true,
            encrypt : false,
            backup : false,
            autoSync : true,
            kvStoreType : factory.KVStoreType.SINGLE_VERSION,
            schema : '',
            securityLevel : factory.SecurityLevel.S2,
        }


        beforeAll(async function (done) {
            console.info(TAG + 'beforeAll config:'+ JSON.stringify(config));
            kvManager = factory.createKVManager(config)
            console.info(TAG + 'beforeAll end');
            done();
        })

        afterAll(async function (done) {
            console.info(TAG + 'afterAll');
            kvManager = null;
            kvStore = null;
            done();
        })

        beforeEach(async function (done) {
            console.info(+ JSON.stringify(options));
            await kvManager.getKVStore(TEST_STORE_ID, options).then((store) => {
                kvStore = store;
                console.info(TAG + 'beforeEach getKVStore success');
            }).catch((err) => {
                console.info(TAG + 'beforeEach getKVStore err ' + `, error code is ${err.code}, message is ${err.message}`);
            });
            console.info(TAG + 'beforeEach end');
            done();
        })

        afterEach(async function (done) {
            console.info(TAG + 'afterEach');
            await kvManager.closeKVStore(TEST_BUNDLE_NAME, TEST_STORE_ID).then(async () => {
                console.info(TAG + 'afterEach closeKVStore success');
                await kvManager.deleteKVStore(TEST_BUNDLE_NAME, TEST_STORE_ID).then(() => {
                    console.info(TAG + 'afterEach deleteKVStore success');
                }).catch((err) => {
                    console.info(TAG + 'afterEach deleteKVStore err ' + `, error code is ${err.code}, message is ${err.message}`);
                });
            }).catch((err) => {
                console.info(TAG + 'afterEach closeKVStore err ' + `, error code is ${err.code}, message is ${err.message}`);
            });
            kvStore = null;
            done();
        })

        /**
         * @tc.number KVMANAGER_GETKVSTORE_0100
         * @tc.desc Test Js Api KVManager.GetKVStore() testcase 001
         * @tc.name Test Js Api KVManager.GetKVStore() testcase 001
         */
        it('KVMANAGER_GETKVSTORE_0100', 0, async function (done) {
            console.info(TAG + 'KVMANAGER_GETKVSTORE_0100');
            const optionsInfo = {
                createIfMissing : "",
                encrypt : "",
                backup : "",
                autoSync : "",
                kvStoreType : "",
                schema : "",
                securityLevel : factory.SecurityLevel.S2,
            }
            kvManager.getKVStore(TEST_STORE_ID, optionsInfo, function (err, store) {
                if (err != null) {
                    console.info(TAG + `getKVStore error: ${err}`)
                    expect(null).assertFail();
                    done();
                } else {
                    console.info(TAG +"getKVStore success");
                    kvStore = store;
                    expect(kvStore != null).assertTrue();
                    done();
                }
            })
        })
        
        /**
         * @tc.number KVMANAGER_GETKVSTORE_0200
         * @tc.desc Test Js Api KVManager.GetKVStore() testcase 002
         * @tc.name Test Js Api KVManager.GetKVStore() testcase 002
         */
        it('KVMANAGER_GETKVSTORE_0200', 0, async function (done) {
            console.info(TAG + 'KVMANAGER_GETKVSTORE_0200');
            const optionsInfo = {
                createIfMissing : undefined,
                encrypt : undefined,
                backup : undefined,
                autoSync : undefined,
                kvStoreType : undefined,
                schema : undefined,
                securityLevel : factory.SecurityLevel.S2,
            }
            kvManager.getKVStore(TEST_STORE_ID, optionsInfo, function (err, store) {
                if (err != null) {
                    console.info(TAG + `getKVStore error: ${err}`)
                    expect(null).assertFail();
                    done();
                } else {
                    console.info(TAG +"getKVStore success");
                    kvStore = store;
                    expect(kvStore != null).assertTrue();
                    done();
                }
            })
        })
        
        /**
         * @tc.number KVMANAGER_GETKVSTORE_0300
         * @tc.desc Test Js Api KVManager.GetKVStore() testcase 003
         * @tc.name Test Js Api KVManager.GetKVStore() testcase 003
         */
        it('KVMANAGER_GETKVSTORE_0300', 0, async function (done) {
            console.info(TAG + 'KVMANAGER_GETKVSTORE_0300');
            const optionsInfo = {
                createIfMissing : null,
                encrypt : null,
                backup : null,
                autoSync : null,
                kvStoreType : null,
                schema : null,
                securityLevel : factory.SecurityLevel.S2,
            }
            kvManager.getKVStore(TEST_STORE_ID, optionsInfo, function (err, store) {
                if (err != null) {
                    console.info(TAG + `getKVStore error: ${err}`)
                    expect(null).assertFail();
                    done();
                } else {
                    console.info(TAG +"getKVStore success");
                    kvStore = store;
                    expect(kvStore != null).assertTrue();
                    done();
                }
            })
        })

        /**
         * @tc.number KVMANAGER_GETKVSTORE_0400
         * @tc.desc Test Js Api KVManager.GetKVStore() testcase 004
         * @tc.name Test Js Api KVManager.GetKVStore() testcase 004
         */
        it('KVMANAGER_GETKVSTORE_0400', 0, async function (done) {
            console.info(TAG + 'KVMANAGER_GETKVSTORE_0400');
            const optionsInfo = {
                createIfMissing : "strings",
                encrypt : "strings",
                backup : "strings",
                autoSync : "strings",
                kvStoreType : "strings",
                schema : "strings",
                securityLevel : factory.SecurityLevel.S2,
            }
            kvManager.getKVStore(TEST_STORE_ID, optionsInfo, function (err, store) {
                try{
                    if (err != null) {
                        console.info(TAG + `getKVStore error: ${err}`)
                        console.info(TAG + `getKVStore error: ${err.code}`)
                        expect(err.code).assertEqual("401");
                    } else {
                        console.info(TAG +"getKVStore success");
                        kvStore = store;
                        expect(null).assertFail();
                    }
                }catch (e){
                    console.info(TAG + `KVMANAGER_GETKVSTORE_0300 error.code is ${e.code},message is ${e.message}`);
                }
                done();
            })
        })

        /**
         * @tc.number SINGLEKVSTORE_SYNC_0100
         * @tc.name Test Js Api SingleKvStore.SyncComplete()
         * @tc.desc SingleKvStore sync not have delayMs parameters
         */
        it('SINGLEKVSTORE_SYNC_0100', 0, async function (done) {
            let devManager;
            await deviceManager.createDeviceManager(TEST_BUNDLE_NAME, (err, value) => {
                if (!err) {
                    devManager = value;
                    let deviceIds = [];
                    if (devManager != null) {
                        var devices = devManager.getTrustedDeviceListSync();
                        for (var i = 0; i < devices.length; i++) {
                            deviceIds[i] = devices[i].deviceId;
                        }
                    }
                    kvStore.put('testSync001', 'Syncvalue001', function (err, data) {
                        if (err != undefined) {
                            console.log(TAG + "put err: " + JSON.stringify(err));
                            return;
                        }
                        console.log(TAG + 'Succeeded in putting data');
                        const mode = factory.SyncMode.PULL_ONLY;
                        try {
                            kvStore.sync(deviceIds, mode);
                            console.log(TAG + 'Sync success');
                            expect(true).assertTrue();
                        } catch (e) {
                            console.log(TAG + 'Sync e' + e);
                            expect(null).assertFail();
                        }
                        done();
                    });
                }else{
                    console.info(TAG + ' err ' + err);
                }
            });
        })
        
        /**
         * @tc.number SINGLEKVSTORE_SYNC_0200
         * @tc.name Test Js Api SingleKvStore.SyncComplete()
         * @tc.desc SingleKvStore sync delayMs parameters is undefined
         */
        it('SINGLEKVSTORE_SYNC_0200', 0, async function (done) {
            let devManager;
            await deviceManager.createDeviceManager(TEST_BUNDLE_NAME, (err, value) => {
                if (!err) {
                    devManager = value;
                    let deviceIds = [];
                    if (devManager != null) {
                        var devices = devManager.getTrustedDeviceListSync();
                        for (var i = 0; i < devices.length; i++) {
                            deviceIds[i] = devices[i].deviceId;
                        }
                    }
                    kvStore.put('testSync001', 'Syncvalue001', function (err, data) {
                        if (err != undefined) {
                            console.log(TAG + "put err: " + JSON.stringify(err));
                            return;
                        }
                        console.log(TAG + 'Succeeded in putting data');
                        const mode = factory.SyncMode.PULL_ONLY;
                        try {
                            kvStore.sync(deviceIds, mode,undefined);
                            console.log(TAG + 'Sync success');
                            expect(true).assertTrue();
                        } catch (e) {
                            console.log(TAG + 'Sync e' + e);
                            expect(null).assertFail();
                        }
                        done();
                    });
                }else{
                    console.info(TAG + ' err ' + err);
                }
            });
        })

        /**
         * @tc.number SINGLEKVSTORE_SYNC_0300
         * @tc.name Test Js Api SingleKvStore.OnSyncComplete()
         * @tc.desc SingleKvStore sync delayMs parameters is null
         */
        it('SINGLEKVSTORE_SYNC_0300', 0, async function (done) {
            let devManager;
            await deviceManager.createDeviceManager(TEST_BUNDLE_NAME, (err, value) => {
                if (!err) {
                    devManager = value;
                    let deviceIds = [];
                    if (devManager != null) {
                        var devices = devManager.getTrustedDeviceListSync();
                        for (var i = 0; i < devices.length; i++) {
                            deviceIds[i] = devices[i].deviceId;
                        }
                    }
                    kvStore.put('testSync001', 'Syncvalue001', function (err, data) {
                        if (err != undefined) {
                            console.log(TAG + "put err: " + JSON.stringify(err));
                            return;
                        }
                        console.log(TAG + 'Succeeded in putting data');
                        const mode = factory.SyncMode.PULL_ONLY;
                        try {
                            kvStore.sync(deviceIds, mode,null);
                            console.log(TAG + 'Sync success');
                            expect(true).assertTrue();
                        } catch (e) {
                            console.log(TAG + 'Sync e' + e);
                            expect(null).assertFail();
                        }
                        done();
                    });
                }else{
                    console.info(TAG + ' err ' + err);
                }
            });
        })
        
        /**
         * @tc.number SINGLEKVSTORE_SYNC_0400
         * @tc.name Test Js Api SingleKvStore.OnSyncComplete()
         * @tc.desc SingleKvStore sync failed,type of parameter "record" is string
         */
        it('SINGLEKVSTORE_SYNC_0400', 0, async function (done) {
            let devManager;
            await deviceManager.createDeviceManager(TEST_BUNDLE_NAME, (err, value) => {
                if (!err) {
                    devManager = value;
                    let deviceIds = [];
                    if (devManager != null) {
                        var devices = devManager.getTrustedDeviceListSync();
                        for (var i = 0; i < devices.length; i++) {
                            deviceIds[i] = devices[i].deviceId;
                        }
                    }
                    kvStore.put('testSync001', 'Syncvalue001', function (err, data) {
                        if (err != undefined) {
                            console.log(TAG + "put err: " + JSON.stringify(err));
                            return;
                        }
                        console.log(TAG + 'Succeeded in putting data');
                        const mode = factory.SyncMode.PULL_ONLY;
                        try {
                            kvStore.sync(deviceIds, mode,"strings");
                            console.log(TAG + 'Sync success');
                            expect(null).assertFail();
                        } catch (e) {
                            console.log(TAG + 'Sync e' + e);
                            expect(e.code).assertEqual("401");
                        }
                        done();
                    });
                }else{
                    console.info(TAG + ' err ' + err);
                }
            });
        })
        
        /**
         * @tc.number SINGLEKVSTORE_SYNC_QUERY_0100
         * @tc.name Test Js Api SingleKvStore.OnSyncComplete()
         * @tc.desc SingleKvStore sync(query) not have delayMs parameters
         */
        it('SINGLEKVSTORE_SYNC_QUERY_0100', 0, async function (done) {
            let devManager;
            await deviceManager.createDeviceManager(TEST_BUNDLE_NAME, (err, value) => {
                if (!err) {
                    devManager = value;
                    let deviceIds = [];
                    if (devManager != null) {
                        var devices = devManager.getTrustedDeviceListSync();
                        for (var i = 0; i < devices.length; i++) {
                            deviceIds[i] = devices[i].deviceId;
                        }
                    }
                    kvStore.put('testSync001', 'Syncvalue001', function (err, data) {
                        if (err != undefined) {
                            console.log(TAG + "put err: " + JSON.stringify(err));
                            return;
                        }
                        console.log(TAG + 'Succeeded in putting data');
                        const mode = factory.SyncMode.PULL_ONLY;
                        const query = new factory.Query();
                        query.prefixKey("test");
                        try {
                            kvStore.sync(deviceIds,query, mode);
                            console.log(TAG + 'Sync success');
                            expect(true).assertTrue();
                        } catch (e) {
                            console.log(TAG + 'Sync e' + e);
                            expect(null).assertFail();
                        }
                        done();
                    });
                }else{
                    console.info(TAG + ' err ' + err);
                }
            });
        })
        
        /**
         * @tc.number SINGLEKVSTORE_SYNC_QUERY_0200
         * @tc.name Test Js Api SingleKvStore.OnSyncComplete()
         * @tc.desc SingleKvStore sync(query) delayMs parameters is undefined
         */
        it('SINGLEKVSTORE_SYNC_QUERY_0200', 0, async function (done) {
            let devManager;
            await deviceManager.createDeviceManager(TEST_BUNDLE_NAME, (err, value) => {
                if (!err) {
                    devManager = value;
                    let deviceIds = [];
                    if (devManager != null) {
                        var devices = devManager.getTrustedDeviceListSync();
                        for (var i = 0; i < devices.length; i++) {
                            deviceIds[i] = devices[i].deviceId;
                        }
                    }
                    kvStore.put('testSync001', 'Syncvalue001', function (err, data) {
                        if (err != undefined) {
                            console.log(TAG + "put err: " + JSON.stringify(err));
                            return;
                        }
                        console.log(TAG + 'Succeeded in putting data');
                        const mode = factory.SyncMode.PULL_ONLY;
                        const query = new factory.Query();
                        query.prefixKey("test");
                        try {
                            kvStore.sync(deviceIds,query, mode,undefined);
                            console.log(TAG + 'Sync success');
                            expect(true).assertTrue();
                        } catch (e) {
                            console.log(TAG + 'Sync e' + e);
                            expect(null).assertFail();
                        }
                        done();
                    });
                }else{
                    console.info(TAG + ' err ' + err);
                }
            });
        })

        /**
         * @tc.number SINGLEKVSTORE_SYNC_QUERY_0300
         * @tc.name Test Js Api SingleKvStore.OnSyncComplete()
         * @tc.desc SingleKvStore sync(query) delayMs parameters is null
         */
        it('SINGLEKVSTORE_SYNC_QUERY_0300', 0, async function (done) {
            let devManager;
            await deviceManager.createDeviceManager(TEST_BUNDLE_NAME, (err, value) => {
                if (!err) {
                    devManager = value;
                    let deviceIds = [];
                    if (devManager != null) {
                        var devices = devManager.getTrustedDeviceListSync();
                        for (var i = 0; i < devices.length; i++) {
                            deviceIds[i] = devices[i].deviceId;
                        }
                    }
                    kvStore.put('testSync001', 'Syncvalue001', function (err, data) {
                        if (err != undefined) {
                            console.log(TAG + "put err: " + JSON.stringify(err));
                            return;
                        }
                        console.log(TAG + 'Succeeded in putting data');
                        const mode = factory.SyncMode.PULL_ONLY;
                        const query = new factory.Query();
                        query.prefixKey("test");
                        try {
                            kvStore.sync(deviceIds,query, mode,null);
                            console.log(TAG + 'Sync success');
                            expect(true).assertTrue();
                        } catch (e) {
                            console.log(TAG + 'Sync e' + e);
                            expect(null).assertFail();
                        }
                        done();
                    });
                }else{
                    console.info(TAG + ' err ' + err);
                }
            });
        })
        
        /**
         * @tc.number SINGLEKVSTORE_SYNC_QUERY_0400
         * @tc.name Test Js Api SingleKvStore.OnSyncComplete()
         * @tc.desc SingleKvStore sync(query) failed,type of parameter "record" is string
         */
        it('SINGLEKVSTORE_SYNC_QUERY_0400', 0, async function (done) {
            let devManager;
            await deviceManager.createDeviceManager(TEST_BUNDLE_NAME, (err, value) => {
                if (!err) {
                    devManager = value;
                    let deviceIds = [];
                    if (devManager != null) {
                        var devices = devManager.getTrustedDeviceListSync();
                        for (var i = 0; i < devices.length; i++) {
                            deviceIds[i] = devices[i].deviceId;
                        }
                    }
                    kvStore.put('testSync001', 'Syncvalue001', function (err, data) {
                        if (err != undefined) {
                            console.log(TAG + "put err: " + JSON.stringify(err));
                            return;
                        }
                        console.log(TAG + 'Succeeded in putting data');
                        const mode = factory.SyncMode.PULL_ONLY;
                        const query = new factory.Query();
                        query.prefixKey("test");
                        try {
                            kvStore.sync(deviceIds,query, mode,'strings');
                            console.log(TAG + 'Sync success');
                            expect(null).assertFail();
                        } catch (e) {
                            console.log(TAG + 'Sync e' + e);
                            expect(e.code).assertEqual("401");
                        }
                        done();
                    });
                }else{
                    console.info(TAG + ' err ' + err);
                }
            });
        })
    })
}