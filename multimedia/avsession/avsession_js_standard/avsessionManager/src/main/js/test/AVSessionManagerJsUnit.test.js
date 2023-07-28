/*
 * Copyright (c) 2022 Huawei Device Co., Ltd.
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

import rpc from "@ohos.rpc";
import avSession from "@ohos.multimedia.avsession";
import featureAbility from '@ohos.ability.featureAbility';
import deviceManager from '@ohos.distributedHardware.deviceManager';
import process from "@ohos.process";
import audio from "@ohos.multimedia.audio";
import TestService from "./testService";
import "./testService";
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium';
import { UiDriver, BY } from '@ohos.UiTest'

export default function AVSessionManagerJsUnit() {
    describe('AVSessionManagerJsUnit', function () {
        console.info("----------AVSession_Manager_Distributed JS Test is starting----------");
        const CODE_CAST_AUDIO = 1;
        let tag = "Application";
        let type = 'audio';
        let context = featureAbility.getContext();
        let session = null;
        let controller = null;
        let sessionId = "";
        let pid = process.pid;
        let uid = process.uid;
        let sessionToken = null;
        let audioDevices = [];
        let remoteDeviceId = 0;
        let metadata1 = {
            assetId: "121278",
            artist: "Eminem",
        };
        let gIRemoteObject = null;
        let audioManager = null;
        let localAudioDevice;
        let testservice = null;
        let localDeviceId = undefined;
        let dvList = [];
        let dvId = null;

        deviceManager.createDeviceManager('com.example.myapplication', async (error, deviceManager) => {
            console.info("Client ceate device manager success");
            localDeviceId = deviceManager.getLocalDeviceInfoSync().deviceId;
            console.info("local device id is: " + localDeviceId);
            let deviceList = deviceManager.getTrustedDeviceListSync();
            dvList = deviceList;
            let deviceId = deviceList[0].deviceId;
            dvId = deviceId;
            console.info("deviceid is: " + deviceId)
            console.info("deviceList is: " + JSON.stringify(deviceList))
        })

        async function sleep(time) {
            return new Promise(resolve => setTimeout(resolve, time));
        }

        async function getPermission() {
            console.info(`getPermission is start`);
            let permissions = ['ohos.permission.DISTRIBUTED_DATASYNC'];
            let context = featureAbility.getContext()
            context.requestPermissionsFromUser(permissions, 666, (data) => {
                console.info("request success" + JSON.stringify(data));
            })
        }
        async function driveFn() {
            try {
                let driver = await UiDriver.create()
                console.info(`come in driveFn`)
                console.info(`driver is ${JSON.stringify(driver)}`)
                await sleep(2000);
                let button = await driver.findComponent(BY.text('允许'));
                console.info(`button is ${JSON.stringify(button)}`);
                await sleep(5000);
                await button.click();
            } catch (err) {
                console.info('err is ' + err);
                return;
            }
        }

        beforeAll(async function (done) {
            console.info('beforeAll called avsession server');
            await getPermission();
            sleep(5000);
            await driveFn();
            sleep(100);

            await avSession.createAVSession(context, tag, type).then(async (data) => {
                session = data;
                sessionId = session.sessionId;
                sessionToken = { sessionId, pid, uid };
                console.info(sessionToken.pid);
                console.info(sessionToken.uid);
                globalThis.avController = await avSession.createController(sessionId);
                console.info("Get controller finished");
            }).catch((err) => {
                console.info(`Session create BusinessError: ${err.code}, message: ${err.message}`);
                expect(false).assertTrue();
            });
            await session.activate().then(() => {
                console.info('Session activate');
            }).catch((err) => {
                console.info(`Session activate BusinessError: ${err.code}, message: ${err.message}`);
                expect(false).assertTrue();
            })

            await session.setAVMetadata(metadata1).then(() => {
                console.info('Set artist successfully');
            }).catch((err) => {
                console.info(`Set artist BusinessError: ${err.code}, message: ${err.message}`);
                expect(false).assertTrue();
            })
            audioManager = audio.getAudioManager().getRoutingManager();
            await audioManager.getDevices(audio.DeviceFlag.OUTPUT_DEVICES_FLAG).then((data) => {
                console.info('get remote device success');
                audioDevices = data;
                remoteDeviceId = audioDevices[0].id;
                audioDevices[0].name = 'name';
                audioDevices[0].address = 'address';
            }).catch((err) => {
                console.info(`Get device BusinessError: ${err.code}, message: ${err.message}`);
                expect(false).assertTrue();
            });

            await audioManager.getDevices(audio.DeviceFlag.OUTPUT_DEVICES_FLAG).then((data) => {
                console.info('get localDevice successfully');
                localAudioDevice = data;
                localAudioDevice[0].name = 'name';
                localAudioDevice[0].address = 'address';
            }).catch((err) => {
                console.info(`Get device BusinessError: ${err.code}, message: ${err.message}`);
                expect(false).assertTrue();
            });

            sleep(1500);
            testservice = new TestService
            await testservice.toConnectAbility().then(() => {
                console.info("toConnectAbility data");
            })
            done();
            console.info('beforeAll done');
        })
        beforeEach(async function () {
            await sleep(1000);
            console.info('beforeEach called');
        })
        afterEach(function () {
            console.info('afterEach called');
        })
        afterAll(async function (done) {
            console.info('afterAll called');
            await session.destroy();
            done();
        })

        it("SUB_MULTIMEDIA_AVSESSION_CAST_START_DISCOVERY_0100", 0, async function (done) {
            try {
                if (Object.keys(audioDevices).length === 0) {
                    expect(true).assertTrue();
                    done();
                } else {
                    let flag = false;
                    avSession.on('deviceAvailable', (async (device) => {
                        console.info("AVSession Cast DCTS: deviceAvailable received devices " + JSON.stringify(device));
                        flag = true;
                        globalThis.outputDeviceInfo = device;
                    }))
                    await sleep(1000);
                    await avSession.startCastDeviceDiscovery();
                    console.info("AVSession Cast DCTS: startCastDeviceDiscovery ");
                    await sleep(3000);
                    expect(flag).assertTrue();
                    done();
                }
            } catch(err) {
                expect(false).assertTrue();
            }
            done();
        })
        
        it("SUB_MULTIMEDIA_AVSESSION_CAST_START_CAST_0100", 0, async function (done) {
            try {
                if (Object.keys(audioDevices).length === 0) {
                    expect(true).assertTrue();
                    done();
                } else {
                    let flag = false;
                    globalThis.isSetMediaInfo = false;
                    globalThis.avController.on('outputDeviceChange', async (state, outputDeviceInfo) => {
                        flag = true;
                        if (state == 1) {
                            globalThis.castController = await avSession.getAVCastController(session.sessionId);
                            await globalThis.castController.prepare({
                                itemId: 1,
                                description: {mediaId: "1"}
                            });
                            await globalThis.castController.start({
                                itemId: 1,
                                description: {
                                    mediaId: "mediaId",
                                    title: "title",
                                    mediaUri: 'http://k6.kekenet.com/Sound/2021/11/happy_4323435mED.mp3',
                                    meidaType: 'AUDIO'
                                }
                            })
                            globalThis.isSetMediaInfo = true;
                        }
                    })
                    await avSession.startCasting({ sessionId: session.sessionId }, globalThis.outputDeviceInfo);
                    await sleep(5000);
                    expect(flag).assertTrue();
                }
            } catch(err) {
                expect(false).assertTrue();
            }
            done();
        })

        it("SUB_MULTIMEDIA_AVSESSION_CAST_SEND_COMMAND_0100", 0, async function (done) {
            try {
                if (Object.keys(audioDevices).length === 0) {
                    expect(true).assertTrue();
                    done();
                } else {
                    if (globalThis.isSetMediaInfo) {
                        await globalThis.castController.sendControlCommand({
                            command: "play"
                        });
                        await sleep(3000);
                        await globalThis.castController.sendControlCommand({
                            command: "pause"
                        });
                    }
                }
            } catch(err) {
                expect(false).assertTrue();
            }
            done();
        })

        it("SUB_MULTIMEDIA_AVSESSION_CAST_GET_PLAYBACK_STATE_0100", 0, async function (done) {
            try {
                if (Object.keys(audioDevices).length === 0) {
                    expect(true).assertTrue();
                    done();
                } else {
                    if (globalThis.isSetMediaInfo) {
                        await globalThis.castController.sendControlCommand({
                            command: "play"
                        });
                        await sleep(3000);
                        let currentState = await globalThis.castController.getAVPlaybackState();
                        expect(currentState.state == 2).assertTrue();
                    }
                }
            } catch(err) {
                expect(false).assertTrue();
            }
            done();
        })

        it("SUB_MULTIMEDIA_AVSESSION_CAST_GET_CURRENT_ITEM_0100", 0, async function (done) {
            try {
                if (Object.keys(audioDevices).length === 0) {
                    expect(true).assertTrue();
                    done();
                } else {
                    if (globalThis.isSetMediaInfo) {
                        let currentItem = await globalThis.castController.getCurrentItem();
                    }
                }
            } catch(err) {
                expect(false).assertTrue();
            }
            done();
        })

        it("SUB_MULTIMEDIA_AVSESSION_CAST_ON_PLAYBACK_STATE_CHANGE_0100", 0, async function (done) {
            try {
                if (Object.keys(audioDevices).length === 0) {
                    expect(true).assertTrue();
                    done();
                } else {
                    if (globalThis.isSetMediaInfo) {
                        let flag = false;
                        globalThis.castController.on('playbackStateChange', 'all', async (state) =>{
                            flag = true;
                            await globalThis.castController.sendControlCommand({
                                command: "play"
                            });
                        })
                        await globalThis.castController.sendControlCommand({
                            command: "pause"
                        });
                        await sleep(3000);
                        expect(flag).assertTrue();
                    }
                }
            } catch(err) {
                expect(false).assertTrue();
            }
            done();
        })
  
        it("SUB_MULTIMEDIA_AVSESSION_CAST_ON_MEDIA_ITEM_CHANGE_0100", 0, async function (done) {
            try {
                if (Object.keys(audioDevices).length === 0) {
                    expect(true).assertTrue();
                    done();
                } else {
                    if (globalThis.isSetMediaInfo) {
                        let flag = false;
                        globalThis.castController.on('mediaItemChange', async (state) =>{
                            flag = true;
                        })
                        await globalThis.castController.start({
                            itemId: 2,
                            description: {
                                mediaId: "mediaId2",
                                title: "title2",
                                mediaUri: 'http://k6.kekenet.com/Sound/2021/11/happy_4323435mED.mp3',
                                meidaType: 'AUDIO'
                            }
                        })
                        await sleep(3000);
                        expect(flag).assertTrue();
                    }
                }
            } catch(err) {
                expect(false).assertTrue();
            }
            done();
        })

        it("SUB_MULTIMEDIA_AVSESSION_CAST_ON_FUNCTION_0100", 0, async function (done) {
            try {
                if (Object.keys(audioDevices).length === 0) {
                    expect(true).assertTrue();
                    done();
                } else {
                    globalThis.castController.on('playNext', () => {});
                    globalThis.castController.on('playPrevious', () => {});
                    globalThis.castController.on('seekDone', () => {});
                    globalThis.castController.on('videoSizeChange', () => {});
                    globalThis.castController.on('error', () => {});
                    expect(true).assertTrue();
                }
            } catch(err) {
                expect(false).assertTrue();
            }
            done();
        })


        it("SUB_MULTIMEDIA_AVSESSION_CAST_ON_FUNCTION_0100", 0, async function (done) {
            try {
                if (Object.keys(audioDevices).length === 0) {
                    expect(true).assertTrue();
                    done();
                } else {
                    await avSession.stopCastDeviceDiscovery();
                    await avSession.stopCasting({
                        sessionId: session.sessionId
                    })
                    expect(true).assertTrue();
                }
            } catch(err) {
                expect(false).assertTrue();
            }
            done();
        })
        console.info("----------SUB_Multimedia_AV_Session_Distributed JS Test is end----------");
    });
}