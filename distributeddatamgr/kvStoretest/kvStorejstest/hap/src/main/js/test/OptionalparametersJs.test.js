/*
* Copyright (c) 2022 Huawei Device Co., Ltd.
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
* http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/
import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from '@ohos/hypium'
import factory from '@ohos.data.distributedData'
import deviceManager from '@ohos.distributedHardware.deviceManager';

const TEST_BUNDLE_NAME = 'ohos.acts.kvStore';
const TEST_STORE_ID = 'storeId';
var kvManager = null;
var kvStore = null;
let TAG = "[ttt]"


var kvManager = null;
var kvStore = null;

export default function OptionalparametersJsTest(){
    describe('OptionalparametersJsTest', function () {
        const config = {
            bundleName : TEST_BUNDLE_NAME,
            userInfo : {
                userId : '0',
                userType : factory.UserType.SAME_USER_ID
            }
        }

        const singleoptions = {
            createIfMissing : true,
            encrypt : false,
            backup : false,
            autoSync : true,
            kvStoreType : factory.KVStoreType.SINGLE_VERSION,
            schema : '',
            securityLevel : factory.SecurityLevel.S2,
        }

        const deviceoptions = {
            createIfMissing : true,
            encrypt : false,
            backup : false,
            autoSync : true,
            kvStoreType : factory.KVStoreType.DEVICE_COLLABORATION,
            schema : '',
            securityLevel : factory.SecurityLevel.S2,
        }

        beforeAll(async function (done) {
            console.info(TAG + 'beforeAll config:'+ JSON.stringify(config));
            await factory.createKVManager(config).then((manager) => {
                kvManager = manager;
                console.info(TAG + 'beforeAll createKVManager success');
            }).catch((err) => {
                console.info(TAG + 'beforeAll createKVManager err ' + err);
            });
            console.info(TAG + 'beforeAll end');
            done();
        })

        beforeEach(async function (done) {
            console.info(TAG + 'beforeEach end');
            done();
        })

        afterEach(async function (done) {
            console.info(TAG + 'afterEach');
            await kvManager.closeKVStore(TEST_BUNDLE_NAME, TEST_STORE_ID, kvStore).then(async () => {
                console.info(TAG + 'afterEach closeKVStore success');
                await kvManager.deleteKVStore(TEST_BUNDLE_NAME, TEST_STORE_ID).then(() => {
                    console.info(TAG + 'afterEach deleteKVStore success');
                }).catch((err) => {
                    console.info(TAG + 'afterEach deleteKVStore err ' + err);
                });
            }).catch((err) => {
                console.info(TAG + 'afterEach closeKVStore err ' + err);
            });
            kvStore = null;
            done();
        })

        afterAll(async function (done) {
            console.info(TAG + 'afterAll');
            kvManager = null;
            kvStore = null;
            done();
        })
       
        /**
         * @tc.number DISTRIBUTEDDATAMGR_CREATEKVMANAGER_0100
         * @tc.name [JS-API8]createKVManager testcase 001
         * @tc.desc Test Js Api createKVManager testcase 001
         */
        it('DISTRIBUTEDDATAMGR_CREATEKVMANAGER_0100', 0, async function (done) {
            console.info(TAG + 'DISTRIBUTEDDATAMGR_CREATEKVMANAGER_0100 start');
            const kvManagerConfig = {
                bundleName : TEST_BUNDLE_NAME,
                userInfo : {
                    userId : "",
                    userType : ""
                }
            }
            factory.createKVManager(kvManagerConfig, (err, data) => {
                if(err != null){
                    console.info(TAG + `Create kvManager1 error: ${err}`)
                    expect(true).assertFalse();
                    done();
                }else{
                    console.info(TAG + "Create kvManager success")
                    expect(data != null).assertTrue();
                    done();
                }
            })
        })

        /**
         * @tc.number DISTRIBUTEDDATAMGR_CREATEKVMANAGER_0200
         * @tc.name [JS-API8]createKVManager testcase 002
         * @tc.desc Test Js Api createKVManager testcase 002
         */
        it('DISTRIBUTEDDATAMGR_CREATEKVMANAGER_0200', 0, async function (done) {
            console.info(TAG + 'DISTRIBUTEDDATAMGR_CREATEKVMANAGER_0200 start');
            const kvManagerConfig = {
                bundleName : TEST_BUNDLE_NAME,
                userInfo : {
                    userId : undefined,
                    userType : undefined
                }
            }
            factory.createKVManager(kvManagerConfig, (err, data) => {
                if(err != null){
                    console.info(TAG + `Create kvManager error: ${err}`)
                    expect(true).assertFalse();
                    done();
                }else{
                    console.info(TAG + "Create kvManager success")
                    expect(data != null).assertTrue();
                    done();
                }
            })
        })

        /**
         * @tc.number DISTRIBUTEDDATAMGR_CREATEKVMANAGER_0300
         * @tc.name [JS-API8]createKVManager testcase 003
         * @tc.desc Test Js Api createKVManager testcase 003
         */
        it('DISTRIBUTEDDATAMGR_CREATEKVMANAGER_0300', 0, async function (done) {
            console.info(TAG + 'DISTRIBUTEDDATAMGR_CREATEKVMANAGER_0300 start');
            const kvManagerConfig = {
                bundleName : TEST_BUNDLE_NAME,
                userInfo : {
                    userId : null,
                    userType : null
                }
            }
            factory.createKVManager(kvManagerConfig, (err, data) => {
                if(err != null){
                    console.info(TAG + `Create kvManager error: ${err}`)
                    expect(true).assertFalse();
                    done();
                }else{
                    console.info(TAG + "Create kvManager success")
                    expect(data != null).assertTrue();
                    done();
                }
            })
        })
        
        /**
         * @tc.number DISTRIBUTEDDATAMGR_CREATEKVMANAGER_0400
         * @tc.name [JS-API8]createKVManager testcase 004
         * @tc.desc Test Js Api createKVManager testcase 004
         */
        it('DISTRIBUTEDDATAMGR_CREATEKVMANAGER_0400', 0, async function (done) {
            console.info(TAG + 'DISTRIBUTEDDATAMGR_CREATEKVMANAGER_0400 start');
            const kvManagerConfig = {
                bundleName : TEST_BUNDLE_NAME,
                userInfo : {
                    userId : 1,
                    userType : 1
                }
            }
            factory.createKVManager(kvManagerConfig, (err, data) => {
                try{
                    if(err != null){
                        console.info(TAG + `Create kvManager1 error: ${err}`)
                        expect(err != null).assertTrue();
                        done();
                    }else{
                        console.info(TAG + "Create kvManager success")
                        expect(true).assertFalse();
                    }
                }catch (err){
                    console.info(TAG + `Create kvManager2 error: ${err}`)
                }
                done();
            })
        })
        
        /**
         * @tc.number KVMANAGER_GETKVSTORE_0100
         * @tc.name [JS-API8]KVManager.GetKVStore() testcase 001
         * @tc.desc Test Js Api KVManager.GetKVStore() testcase 001
         */
        it('KVMANAGER_GETKVSTORE_0100', 0, async function (done) {
            console.info(TAG + 'KVMANAGER_GETKVSTORE_0100');
            const options = {
                createIfMissing : "",
                encrypt : "",
                backup : "",
                autoSync : "",
                kvStoreType : "",
                schema : "",
                securityLevel : "",
            }
            console.info(TAG + JSON.stringify(options));
            kvManager.getKVStore(TEST_STORE_ID, options, function (err, store) {
                if (err != null) {
                    console.info(TAG + `getKVStore error: ${err}`)
                    expect(true).assertFalse();
                    done();
                } else {
                    console.log(TAG +"getKVStore success");
                    kvStore = store;
                    expect(kvStore != null).assertTrue();
                    done();
                }
            })
        })

        /**
         * @tc.number KVMANAGER_GETKVSTORE_0200
         * @tc.name [JS-API8]KVManager.GetKVStore() testcase 002
         * @tc.desc Test Js Api KVManager.GetKVStore() testcase 002
         */
        it('KVMANAGER_GETKVSTORE_0200', 0, async function (done) {
            console.info(TAG + 'KVMANAGER_GETKVSTORE_0200');
            const options = {
                createIfMissing : undefined,
                encrypt : undefined,
                backup : undefined,
                autoSync : undefined,
                kvStoreType : undefined,
                schema : undefined,
                securityLevel : undefined,
            }
            console.info(TAG + JSON.stringify(options));
            kvManager.getKVStore(TEST_STORE_ID, options, function (err, store) {
                if (err != null) {
                    console.info(TAG + `getKVStore error: ${err}`)
                    expect(true).assertFalse();
                    done();
                } else {
                    console.log(TAG +"getKVStore success");
                    expect(kvStore != null).assertTrue();
                    kvStore = store;
                    done();
                }
            })
        })

        /**
         * @tc.number KVMANAGER_GETKVSTORE_0300
         * @tc.name [JS-API8]KVManager.GetKVStore() testcase 003
         * @tc.desc Test Js Api KVManager.GetKVStore() testcase 003
         */
        it('KVMANAGER_GETKVSTORE_0300', 0, async function (done) {
            console.info(TAG + 'KVMANAGER_GETKVSTORE_0300');
            const options = {
                createIfMissing : null,
                encrypt : null,
                backup : null,
                autoSync : null,
                kvStoreType : null,
                schema : null,
                securityLevel : null,
            }
            console.info(TAG + JSON.stringify(options));
            kvManager.getKVStore(TEST_STORE_ID, options, function (err, store) {
                if (err != null) {
                    console.info(TAG + `getKVStore error: ${err}`)
                    expect(true).assertFalse();
                    done();
                } else {
                    console.log(TAG +"getKVStore success");
                    expect(kvStore != null).assertTrue();
                    kvStore = store;
                    done();
                }
            })
        })
        
        /**
         * @tc.number KVMANAGER_GETKVSTORE_0400
         * @tc.name [JS-API8]KVManager.GetKVStore() testcase 004
         * @tc.desc Test Js Api KVManager.GetKVStore() testcase 004
         */
        it('KVMANAGER_GETKVSTORE_0400', 0, async function (done) {
            console.info(TAG + 'KVMANAGER_GETKVSTORE_0400');
            const options = {
                createIfMissing : "strings",
                encrypt : "strings",
                backup : "strings",
                autoSync : "strings",
                kvStoreType : "strings",
                schema : "strings",
                securityLevel : "strings",
            }
            console.info(TAG + JSON.stringify(options));
            kvManager.getKVStore(TEST_STORE_ID, options, function (err, store) {
                try{
                    if (err != undefined) {
                        console.info(TAG + `getKVStore1 error: ${err}`)
                        expect(err != undefined).assertFalse();
                    } else {
                        console.log(TAG +"getKVStore success : " + err + "  "+ store);
                        kvStore = store;
                        expect(kvStore != null).assertFalse();
                    }
                }catch (err){
                    console.info(TAG + `getKVStore2 error: ${err}`)
                }
                done();
            })
        })

        /**
         * @tc.number DISTRIBUTEDDATAMGR_SINGLEKVSTORE_SYNC_0100
         * @tc.name [JS-API8]SingleKvStore.SyncComplete()
         * @tc.desc SingleKvStore sync not have delayMs parameters
         */
        it('DISTRIBUTEDDATAMGR_SINGLEKVSTORE_SYNC_0100', 0, async function (done) {
            let devManager;
            await kvManager.getKVStore(TEST_STORE_ID, singleoptions).then((store) => {
                kvStore = store;
                console.info(TAG + 'getKVStore success');
            }).catch((err) => {
                console.info(TAG + 'getKVStore err ' + err);
            });
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
         * @tc.number DISTRIBUTEDDATAMGR_SINGLEKVSTORE_SYNC_0200
         * @tc.name [JS-API8]SingleKvStore.SyncComplete()
         * @tc.desc SingleKvStore sync delayMs parameters is undefined
         */
        it('DISTRIBUTEDDATAMGR_SINGLEKVSTORE_SYNC_0200', 0, async function (done) {
            let devManager;
            await kvManager.getKVStore(TEST_STORE_ID, singleoptions).then((store) => {
                kvStore = store;
                console.info(TAG + 'getKVStore success');
            }).catch((err) => {
                console.info(TAG + 'getKVStore err ' + err);
            });
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
         * @tc.number DISTRIBUTEDDATAMGR_SINGLEKVSTORE_SYNC_0300
         * @tc.name [JS-API8]SingleKvStore.SyncComplete()
         * @tc.desc SingleKvStore sync delayMs parameters is null
         */
        it('DISTRIBUTEDDATAMGR_SINGLEKVSTORE_SYNC_0300', 0, async function (done) {
            let devManager;
            await kvManager.getKVStore(TEST_STORE_ID, singleoptions).then((store) => {
                kvStore = store;
                console.info(TAG + 'getKVStore success');
            }).catch((err) => {
                console.info(TAG + 'getKVStore err ' + err);
            });
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
         * @tc.number DISTRIBUTEDDATAMGR_SINGLEKVSTORE_SYNC_0400
         * @tc.name [JS-API8]SingleKvStore.SyncComplete()
         * @tc.desc SingleKvStore sync failed,type of parameter "record" is string
         */
        it('DISTRIBUTEDDATAMGR_SINGLEKVSTORE_SYNC_0400', 0, async function (done) {
            let devManager;
            await kvManager.getKVStore(TEST_STORE_ID, singleoptions).then((store) => {
                kvStore = store;
                console.info(TAG + 'getKVStore success');
            }).catch((err) => {
                console.info(TAG + 'getKVStore err ' + err);
            });
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
                            expect(e != undefined).assertTrue();
                        }
                        done();
                    });
                }else{
                    console.info(TAG + ' err ' + err);
                }
            });
        })

        /**
         * @tc.number DISTRIBUTEDDATAMGR_DEVICEKVSTORE_SYNC_0100
         * @tc.name [JS-API8]DeviceKvStore.SyncComplete()
         * @tc.desc DeviceKvStore sync not have delayMs parameters
         */
        it('DISTRIBUTEDDATAMGR_DEVICEKVSTORE_SYNC_0100', 0, async function (done) {
            let devManager;
            await kvManager.getKVStore(TEST_STORE_ID, deviceoptions).then((store) => {
                kvStore = store;
                console.info(TAG + 'getKVStore success');
            }).catch((err) => {
                console.info(TAG + 'getKVStore err ' + err);
            });
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
         * @tc.number DISTRIBUTEDDATAMGR_DEVICEKVSTORE_SYNC_0200
         * @tc.name [JS-API8]DeviceKvStore.OnSyncComplete()
         * @tc.desc DeviceKvStore sync delayMs parameters is undefined
         */
        it('DISTRIBUTEDDATAMGR_DEVICEKVSTORE_SYNC_0200', 0, async function (done) {
            let devManager;
            await kvManager.getKVStore(TEST_STORE_ID, deviceoptions).then((store) => {
                kvStore = store;
                console.info(TAG + 'getKVStore success');
            }).catch((err) => {
                console.info(TAG + 'getKVStore err ' + err);
            });
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
         * @tc.number DISTRIBUTEDDATAMGR_DEVICEKVSTORE_SYNC_0300
         * @tc.name [JS-API8]DeviceKvStore.OnSyncComplete()
         * @tc.desc DeviceKvStore sync delayMs parameters is null
         */
        it('DISTRIBUTEDDATAMGR_DEVICEKVSTORE_SYNC_0300', 0, async function (done) {
            let devManager;
            await kvManager.getKVStore(TEST_STORE_ID, deviceoptions).then((store) => {
                kvStore = store;
                console.info(TAG + 'getKVStore success');
            }).catch((err) => {
                console.info(TAG + 'getKVStore err ' + err);
            });
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
         * @tc.number DISTRIBUTEDDATAMGR_DEVICEKVSTORE_SYNC_0400
         * @tc.name [JS-API8]DeviceKvStore.OnSyncComplete()
         * @tc.desc DeviceKvStore sync failed,type of parameter "record" is string
         */
        it('DISTRIBUTEDDATAMGR_DEVICEKVSTORE_SYNC_0400', 0, async function (done) {
            let devManager;
            await kvManager.getKVStore(TEST_STORE_ID, deviceoptions).then((store) => {
                kvStore = store;
                console.info(TAG + 'getKVStore success');
            }).catch((err) => {
                console.info(TAG + 'getKVStore err ' + err);
            });
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
                            expect(e != undefined).assertTrue();
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