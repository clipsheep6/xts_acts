/*
 * Copyright (C) 2021 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http:// www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
import call from  '@ohos.telephony.call'

import audio from '@ohos.multimedia.audio';
import {
    describe,
    beforeAll,
    beforeEach,
    afterEach,
    afterAll,
    it,
    expect
} from '@ohos/hypium';
export default function audioManagerApi9() {

    describe('audioManagerApi9', function () {
        let TagFrmwk = "audioManagerApi9Test";
        console.info(`${TagFrmwk}: Create AudioManger Object JS Framework`);
        let audioManager = null;
        let streamManager = null;
        let audioMedia = 3;
        let audioRingtone = 2;
        let minVol = 0;
        let maxVol = 15;
        let maxVolPc = 20;
        let lowVol = 5;
        let highVol = 14;
        let outOfRangeVol = 28;
        let longValue = '28374837458743875804735081439085918459801437584738967509184509813904850914375904790589104801843';
        let volNetworkId = null;
        let volGroupId = null;
        let volMappingId = null;
        let volGroupName = null;
        let volConnectType = null;
        let onMicStateChangeFlag1 = null
        let onMicStateChangeFlag2 = null
        let onMicStateChangeFlag3 = null
        let onMicStateChangeFlag4 = null
        let onMicStateChangeFlag5 = null
        let voice = call.hasVoiceCapability()
        
        function displayVolumeGroupProp(value, index, array) {
            console.info('audioManagerApi9Test: volume group networkId:' + value.networkId);
            volNetworkId = value.networkId;
            console.info('audioManagerApi9Test: volume group id:' + value.groupId);
            volGroupId = value.groupId;
            console.info('audioManagerApi9Test: volume group mappingId:' + value.mappingId);
            volMappingId = value.mappingId;
            console.info('audioManagerApi9Test: volume group name:' + value.groupName);
            volGroupName = value.groupName;
            console.info('audioManagerApi9Test: volume group connect type:' + value.ConnectType);
            volConnectType = value.ConnectType;
        }

        function getAudioManager() {
            audioManager = audio.getAudioManager();
            if (audioManager != null) {
                console.info(`${TagFrmwk}: getAudioManger : PASS`);
            } else {
                console.info(`${TagFrmwk}: getAudioManger : FAIL`);
            }
        }

        function getStreamManager() {
            streamManager = audioManager.getStreamManager();
            if (streamManager != null) {
                console.info(`${TagFrmwk}: getStreamManager : PASS`);
            } else {
                console.info(`${TagFrmwk}: getStreamManager : FAIL`);
            }
        }

        function sleep(ms) {
            return new Promise(resolve => setTimeout(resolve, ms));
        }

        beforeAll(async function () {
            console.info(`${TagFrmwk}: beforeAll: Prerequisites at the test suite level`);
            await sleep(100);
            await getAudioManager();
            getStreamManager();
            console.info(`${TagFrmwk}: beforeAll: END`);
        })

        beforeEach(async function () {
            console.info(`${TagFrmwk}: beforeEach: Prerequisites at the test case level`);
            await sleep(100);
        })

        afterEach(async function () {
            console.info(`${TagFrmwk}: afterEach: Test case-level clearance conditions`);
            await sleep(100);
        })

        afterAll(function () {
            console.info(`${TagFrmwk}: afterAll: Test suite-level cleanup condition`);
        })


        /**
         *@tc.number    : SUB_MULTIMEDIA_AUDIO_ERRORS_0100
         *@tc.name      : AUDIO_ERRORS
         *@tc.desc      : AUDIO_ERRORS
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 2
         */
        it('SUB_MULTIMEDIA_AUDIO_ERRORS_0100', 2, async function (done) {
            expect(audio.AudioErrors.ERROR_INVALID_PARAM).assertEqual(6800101);
            expect(audio.AudioErrors.ERROR_NO_MEMORY).assertEqual(6800102);
            expect(audio.AudioErrors.ERROR_ILLEGAL_STATE).assertEqual(6800103);
            expect(audio.AudioErrors.ERROR_UNSUPPORTED).assertEqual(6800104);
            expect(audio.AudioErrors.ERROR_TIMEOUT).assertEqual(6800105);
            expect(audio.AudioErrors.ERROR_STREAM_LIMIT).assertEqual(6800201);
            expect(audio.AudioErrors.ERROR_SYSTEM).assertEqual(6800301);
            await sleep(50);
            done();
        })

        /**
         *@tc.number    : SUB_MULTIMEDIA_DEFAULT_VOLUME_GROUP_ID_0100
         *@tc.name      : DEFAULT_VOLUME_GROUP_ID
         *@tc.desc      : DEFAULT_VOLUME_GROUP_ID
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 2
         */
        it('SUB_MULTIMEDIA_DEFAULT_VOLUME_GROUP_ID_0100', 2, async function (done) {
            expect(audio.DEFAULT_VOLUME_GROUP_ID).assertEqual(1);
            await sleep(50);
            done();
        })

        /**
         *@tc.number    : SUB_MULTIMEDIA_DEFAULT_INTERRUPT_GROUP_ID_0100
         *@tc.name      : DEFAULT_INTERRUPT_GROUP_ID
         *@tc.desc      : DEFAULT_INTERRUPT_GROUP_ID
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 2
         */
        it('SUB_MULTIMEDIA_DEFAULT_INTERRUPT_GROUP_ID_0100', 2, async function (done) {
            expect(audio.DEFAULT_INTERRUPT_GROUP_ID).assertEqual(1);
            await sleep(50);
            done();
        })

        /**
         *@tc.number    : SUB_MULTIMEDIA_COMUNICATIONDEVICETYPE_0100
         *@tc.name      : COMUNICATIONDEVICETYPE
         *@tc.desc      : COMUNICATIONDEVICETYPE
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 2
         */
        it('SUB_MULTIMEDIA_COMUNICATIONDEVICETYPE_0100', 2, async function (done) {
            expect(audio.CommunicationDeviceType.SPEAKER).assertEqual(2);
            await sleep(50);
            done();
        })



        /**
         * @tc.number    : SUB_MULTIMEDIA_AUDIO_VOLUME_GROUP_MANAGER_SYNC_0100
         * @tc.name      : getVolumeGroupManagerSync - Sync
         * @tc.desc      : getVolumeGroupManagerSync
         * @tc.size      : MEDIUM
         * @tc.type      : Function
         * @tc.level     : Level 3
         */
        it('SUB_MULTIMEDIA_AUDIO_VOLUME_GROUP_MANAGER_SYNC_0100', 3, async function (done) {
            let audioVolumeManager = audioManager.getVolumeManager();
            try {
                let groupManager = audioVolumeManager.getVolumeGroupManagerSync(audio.DEFAULT_VOLUME_GROUP_ID)
                if ((typeof groupManager) == 'object') {
                    console.info('audioManagerApi9Test: Promise: getGroupManager  :  PASS');
                    expect(true).assertTrue();
                    done();
                } else {
                    console.info('audioManagerApi9Test: Promise: getGroupManager  :  FAIL');
                    expect(false).assertTrue();
                    done();
                }
            } catch (error) {
                console.error(`audioManagerApi9Test: failed to getGroupManager: Callback:  ${error.message}`);
                expect(false).assertTrue();
                done();
            }

        })
        /**
         * @tc.number    : SUB_MULTIMEDIA_AUDIO_VOLUME_GROUP_MANAGER_SYNC_0200
         * @tc.name      : getVolumeGroupManagerSync - Null_Parameter - 401
         * @tc.desc      : getVolumeGroupManagerSync - Null_Parameter - 401
         * @tc.size      : MEDIUM
         * @tc.type      : Function
         * @tc.level     : Level 3
         */
        it('SUB_MULTIMEDIA_AUDIO_VOLUME_GROUP_MANAGER_SYNC_0200', 3, async function (done) {
            let audioVolumeManager = audioManager.getVolumeManager();
            try {
                let groupManager = audioVolumeManager.getVolumeGroupManagerSync();
                console.info(`audioManagerApi9Test: Promise: getGroupManager  :  FAIL`);
                expect(false).assertTrue();
                done();   
            } catch (error) {
                console.error(`audioManagerApi9Test: failed to getGroupManager: Callback:  ${error.message},code:${error.code}`);
                expect(Number(error.code)).assertEqual(401);
                done();
            }

        })
        /**
         * @tc.number    : SUB_MULTIMEDIA_AUDIO_VOLUME_GROUP_MANAGER_SYNC_0300
         * @tc.name      : getVolumeGroupManagerSync - String_Parameter - 401
         * @tc.desc      : getVolumeGroupManagerSync - String_Parameter - 401
         * @tc.size      : MEDIUM
         * @tc.type      : Function
         * @tc.level     : Level 3
         */
        it('SUB_MULTIMEDIA_AUDIO_VOLUME_GROUP_MANAGER_SYNC_0300', 3, async function (done) {
            let audioVolumeManager = audioManager.getVolumeManager();
            try {
                let groupManager = audioVolumeManager.getVolumeGroupManagerSync('123');
                console.info(`audioManagerApi9Test: Promise: getGroupManager  :  FAIL`);
                expect(false).assertTrue();
                done();   
            } catch (error) {
                console.error(`audioManagerApi9Test: failed to getGroupManager: Callback:  ${error.message},code:${error.code}`);
                expect(Number(error.code)).assertEqual(401);
                done();
            }

        })
        /**
         * @tc.number    : SUB_MULTIMEDIA_AUDIO_VOLUME_GROUP_MANAGER_0100
         * @tc.name      : getVolumeGroupManager - callback
         * @tc.desc      : getVolumeGroupManager
         * @tc.size      : MEDIUM
         * @tc.type      : Function
         * @tc.level     : Level 3
         */
        it('SUB_MULTIMEDIA_AUDIO_VOLUME_GROUP_MANAGER_0100', 3, async function (done) {
            let audioVolumeManager = audioManager.getVolumeManager();
            audioVolumeManager.getVolumeGroupManager(audio.DEFAULT_VOLUME_GROUP_ID, (err, groupManager) => {
                if (err) {
                    console.error(`audioManagerApi9Test: failed to getGroupManager: Callback:  ${err.message}`);
                    expect(false).assertTrue();
                } else {
                    if ((typeof groupManager) == 'object') {
                        console.info('audioManagerApi9Test: Promise: getGroupManager  :  PASS');
                        expect(true).assertTrue();
                    } else {
                        console.info('audioManagerApi9Test: Promise: getGroupManager  :  FAIL');
                        expect(false).assertTrue();
                    }
                }
                done();
            })
        })


        /**
         * @tc.number    : SUB_MULTIMEDIA_AUDIO_VOLUME_GROUP_MANAGER_0200
         * @tc.name      : getVolumeGroupManager - prmiose
         * @tc.desc      : getVolumeGroupManager
         * @tc.size      : MEDIUM
         * @tc.type      : Function
         * @tc.level     : Level 3
         */
        it('SUB_MULTIMEDIA_AUDIO_VOLUME_GROUP_MANAGER_0200', 3, async function (done) {
            try {
                let audioVolumeManager = audioManager.getVolumeManager();
                let groupManager = await audioVolumeManager.getVolumeGroupManager(audio.DEFAULT_VOLUME_GROUP_ID);
                if ((typeof groupManager) == 'object') {
                    console.info('audioManagerApi9Test: Promise: getGroupManager  :  PASS');
                    expect(true).assertTrue();
                } else {
                    console.info('audioManagerApi9Test: Promise: getGroupManager  :  FAIL');
                    expect(false).assertTrue();
                }
            } catch (err) {
                console.info('audioManagerApi9Test: getGroupManager: parameter err:' + err.message);
                expect(false).assertTrue();
                done();
            }
            done();
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_AUDIO_VOLUME_GROUP_MANAGER_GETVOLUME_0100
         * @tc.name      : group manager getVolume - MEDIA - Callback
         * @tc.desc      : group manager getvolume
         * @tc.size      : MEDIUM
         * @tc.type      : Function
         * @tc.level     : Level 3
         */
        it('SUB_MULTIMEDIA_AUDIO_VOLUME_GROUP_MANAGER_GETVOLUME_0100', 3, async function (done) {
            let groupManager;
            try {
                let audioVolumeManager = audioManager.getVolumeManager();
                groupManager = await audioVolumeManager.getVolumeGroupManager(audio.DEFAULT_VOLUME_GROUP_ID);
            } catch (err) {
                console.info('audioManagerApi9Test: getVolumeGroupManager : err:' + err.message);
                expect(false).assertTrue();
                done();
            }
            groupManager.getVolume(audio.AudioVolumeType.MEDIA, (err, value) => {
                if (err) {
                    console.error(`audioManagerApi9Test: callback : Meida: failed to get volume ${err.message}`);
                    expect(false).assertTrue();
                } else if (value >= minVol && value <= maxVolPc) {
                    console.info('audioManagerApi9Test: callback : Meida getVolume: PASS :' + value);
                    expect(true).assertTrue();
                } else {
                    console.info('audioManagerApi9Test: callback : Meida getVolume: FAIL :' + value);
                    expect(false).assertTrue();
                }
                done();
            });
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_AUDIO_VOLUME_GROUP_MANAGER_GETVOLUME_0200
         * @tc.name      : group manager getVolume - MEDIA - Promise
         * @tc.desc      : group manager getvolume
         * @tc.size      : MEDIUM
         * @tc.type      : Function
         * @tc.level     : Level 3
         */
        it('SUB_MULTIMEDIA_AUDIO_VOLUME_GROUP_MANAGER_GETVOLUME_0200', 3, async function (done) {
            try {
                let audioVolumeManager = audioManager.getVolumeManager();
                let groupManager = await audioVolumeManager.getVolumeGroupManager(audio.DEFAULT_VOLUME_GROUP_ID);
                let value = await groupManager.getVolume(audio.AudioVolumeType.MEDIA);
                if (value >= minVol && value <= maxVolPc) {
                    console.info('audioManagerApi9Test: callback : Meida getVolume: PASS :' + value);
                    expect(true).assertTrue();
                } else {
                    console.info('audioManagerApi9Test: callback : Meida getVolume: FAIL :' + value);
                    expect(false).assertTrue();
                }
                done();
            } catch (err) {
                console.info('audioManagerApi9Test: getVolumeGroupManager : err:' + err.message);
                expect(false).assertTrue();
                done();
            }
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_AUDIO_VOLUME_GROUP_MANAGER_GETMAXVOLUME_0100
         * @tc.name      : getMaxVolume - RINGTONE - Callback
         * @tc.desc      : getMaxVolume
         * @tc.size      : MEDIUM
         * @tc.type      : Function
         * @tc.level     : Level 3
         */
        it('SUB_MULTIMEDIA_AUDIO_VOLUME_GROUP_MANAGER_GETMAXVOLUME_0100', 3, async function (done) {
            try {
                let audioVolumeManager = audioManager.getVolumeManager();
                let groupManager = await audioVolumeManager.getVolumeGroupManager(audio.DEFAULT_VOLUME_GROUP_ID);
                groupManager.getMaxVolume(audio.AudioVolumeType.RINGTONE, (err, data) => {
                    if (err) {
                        console.error(`audioManagerApi9Test: failed to getMaxVolume: Callback:  ${err.message}`);
                        expect(false).assertTrue();
                    } else {
                        if (data == maxVol) {
                            console.info('audioManagerApi9Test: callback : Ringtone getMaxVolume: PASS :' + data);
                            expect(true).assertTrue();
                        } else if(data == maxVolPc){
                            console.info('audioManagerApi9Test: callback : Ringtone getMaxVolume: PASS :' + data);
                            expect(true).assertTrue();
                        }else{
                            console.info('audioManagerApi9Test: callback : Ringtone getMaxVolume: FAIL :' + data);
                            expect(false).assertTrue();
                        }
                    }
                    done();
                });
            } catch (err) {
                console.info('audioManagerApi9Test: getVolumeGroupManager : err:' + err.message);
                expect(false).assertTrue();
                done();
            }
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_AUDIO_VOLUME_GROUP_MANAGER_GETMAXVOLUME_0200
         * @tc.name      : getMaxVolume - RINGTONE - Promise
         * @tc.desc      : getMaxVolume
         * @tc.size      : MEDIUM
         * @tc.type      : Function
         * @tc.level     : Level 3
         */
        it('SUB_MULTIMEDIA_AUDIO_VOLUME_GROUP_MANAGER_GETMAXVOLUME_0200', 3, async function (done) {
            try {
                let audioVolumeManager = audioManager.getVolumeManager();
                let groupManager = await audioVolumeManager.getVolumeGroupManager(audio.DEFAULT_VOLUME_GROUP_ID);
                let maxVolume = await groupManager.getMaxVolume(audio.AudioVolumeType.RINGTONE);
                if (maxVolume == maxVol) {
                    console.info('audioManagerApi9Test: promise : Ringtone getMaxVolume: PASS :' + maxVolume);
                    expect(true).assertTrue();
                } else if(maxVolume == maxVolPc){
                    console.info('audioManagerApi9Test: promise : Ringtone getMaxVolume: PASS :' + maxVolume);
                    expect(true).assertTrue();
                }else{
                    console.info('audioManagerApi9Test: promise : Ringtone getMaxVolume: FAIL :' + maxVolume);
                    expect(false).assertTrue();
                }
            } catch (err) {
                console.info('audioManagerApi9Test: getVolumeGroupManager : err:' + err.message);
                expect(false).assertTrue();
            }
            done();
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_AUDIO_VOLUME_GROUP_MANAGER_GETMINVOLUME_0100
         * @tc.name      : getMinVolume - RINGTONE - Callback
         * @tc.desc      : getMinVolume
         * @tc.size      : MEDIUM
         * @tc.type      : Function
         * @tc.level     : Level 2
         */
        it('SUB_MULTIMEDIA_AUDIO_VOLUME_GROUP_MANAGER_GETMINVOLUME_0100', 2, async function (done) {
            try {
                let audioVolumeManager = audioManager.getVolumeManager();
                let groupManager = await audioVolumeManager.getVolumeGroupManager(audio.DEFAULT_VOLUME_GROUP_ID);
                groupManager.getMinVolume(audio.AudioVolumeType.RINGTONE, (err, data) => {
                    if (err) {
                        console.error(`audioManagerApi9Test: failed to getMinVolume : Callback:  ${err.message}`);
                        expect(false).assertTrue();
                    } else {
                        if (data == minVol) {
                            console.info('audioManagerApi9Test: callback : Ringtone getMinVolume: PASS :' + data);
                            expect(true).assertTrue();
                        } else {
                            console.info('audioManagerApi9Test: callback : Ringtone getMinVolume: FAIL :' + data);
                            expect(false).assertTrue();
                        }
                    }
                    done();
                });
            } catch (err) {
                console.info('audioManagerApi9Test: getVolumeGroupManager : err:' + err.message);
                expect(false).assertTrue();
                done();
            }
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_AUDIO_VOLUME_GROUP_MANAGER_GETMINVOLUME_0200
         * @tc.name      : getMaxVolume - RINGTONE - Promise
         * @tc.desc      : getMaxVolume
         * @tc.size      : MEDIUM
         * @tc.type      : Function
         * @tc.level     : Level 3
         */
        it('SUB_MULTIMEDIA_AUDIO_VOLUME_GROUP_MANAGER_GETMINVOLUME_0200', 3, async function (done) {
            try {
                let audioVolumeManager = audioManager.getVolumeManager();
                let groupManager = await audioVolumeManager.getVolumeGroupManager(audio.DEFAULT_VOLUME_GROUP_ID);
                let minVolume = await groupManager.getMinVolume(audio.AudioVolumeType.RINGTONE);
                if (minVolume == minVol) {
                    console.info('audioManagerApi9Test: promise : Ringtone getMinVolume: PASS :' + minVolume);
                    expect(true).assertTrue();
                } else {
                    console.info('audioManagerApi9Test: promise : Ringtone getMinVolume: FAIL :' + minVolume);
                    expect(false).assertTrue();
                }
            } catch (err) {
                console.info('audioManagerApi9Test: getVolumeGroupManager : err:' + err.message);
                expect(false).assertTrue();
            }
            done();
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_AUDIO_VOLUME_GROUP_MANAGER_ISMUTE_0100
         * @tc.name      : group manager ismute - RINGTONE - Callback
         * @tc.desc      : ismute - RINGTONE - Callback
         * @tc.size      : MEDIUM
         * @tc.type      : Function
         * @tc.level     : Level 3
         */
        it('SUB_MULTIMEDIA_AUDIO_VOLUME_GROUP_MANAGER_ISMUTE_0100', 3, async function (done) {
            let groupManager;
            try {
                let audioVolumeManager = audioManager.getVolumeManager();
                groupManager = await audioVolumeManager.getVolumeGroupManager(audio.DEFAULT_VOLUME_GROUP_ID);
            } catch (err) {
                console.info('audioManagerApi9Test: getGroupManager mute : parameter err:' + err.message);
                expect(false).assertTrue();
                done();
            }

            groupManager.isMute(audio.AudioVolumeType.RINGTONE, (err, data) => {
                if (err) {
                    console.error(`audioManagerApi9Test: failed to isMute : Callback:  ${err.message}`);
                    expect(false).assertTrue();
                } else {
                    console.log(`audioManagerApi9Test: Promise:
                    Is Stream GroupManager Mute RINGTONE: FALSE: PASS:` + data);
                    expect(true).assertTrue();
                }
                done();
            })
        })

        /**
         * @tc.number    : SUB_MULTIMEDIA_AUDIO_VOLUME_GROUP_MANAGER_ISMUTE_0200
         * @tc.name      : group manager ismute - RINGTONE - Promise
         * @tc.desc      : ismute - RINGTONE - Promise
         * @tc.size      : MEDIUM
         * @tc.type      : Function
         * @tc.level     : Level 3
         */
        it('SUB_MULTIMEDIA_AUDIO_VOLUME_GROUP_MANAGER_ISMUTE_0200', 3, async function (done) {
            try {
                let audioVolumeManager = audioManager.getVolumeManager();
                let groupManager = await audioVolumeManager.getVolumeGroupManager(audio.DEFAULT_VOLUME_GROUP_ID);
                await groupManager.isMute(audio.AudioVolumeType.RINGTONE).then(function (data) {
                    console.log(`audioManagerApi9Test: Promise:
                    Is Stream GroupManager Mute RINGTONE: FALSE: PASS:` + data);
                    expect(true).assertTrue();
                    done();
                }).catch((err) => {
                    console.info(`audioManagerApi9Test: Promise:
                    Is Stream GroupManager Mute RINGTONE: FALSE: ERROR:` + err.message);
                    expect(false).assertTrue();
                    done();
                });
            } catch (err) {
                console.info('audioManagerApi9Test: getGroupManager ismute : parameter err:' + err.message);
                expect(false).assertTrue();
                done();
            }
        })



        /**
         * @tc.number    : SUB_MULTIMEDIA_AUDIO_VOLUME_GROUP_MANAGER_GETRINGERMODE_0100
         * @tc.name      : group manager getRingerMode - RINGTONE - Callback
         * @tc.desc      : getRingerMode - RINGTONE - Callback
         * @tc.size      : MEDIUM
         * @tc.type      : Function
         * @tc.level     : Level 3
         */
        it('SUB_MULTIMEDIA_AUDIO_VOLUME_GROUP_MANAGER_GETRINGERMODE_0100', 3, async function (done) {
            let groupManager;
            try {
                let audioVolumeManager = audioManager.getVolumeManager();
                groupManager = await audioVolumeManager.getVolumeGroupManager(audio.DEFAULT_VOLUME_GROUP_ID);
            } catch (err) {
                console.info('audioManagerApi9Test: getGroupManager mute : parameter err:' + err.message);
                expect(false).assertTrue();
                done();
            }
            groupManager.getRingerMode((err, data) => {
                if (err) {
                    console.error(`audioManagerApi9Test: failed to getRingerMode : Callback:  ${err.message}`);
                    expect(false).assertTrue();
                } else {
                    if (data == audio.AudioRingMode.RINGER_MODE_SILENT ||
                        data == audio.AudioRingMode.RINGER_MODE_VIBRATE ||
                        data == audio.AudioRingMode.RINGER_MODE_NORMAL) {
                        console.log(`audioManagerApi9Test: Promise:
                    getRingerMode : PASS:` + data);
                        expect(true).assertTrue();
                    } else {
                        console.log(`audioManagerApi9Test: Promise:
                    getRingerMode : FAIL: ` + data);
                        expect(false).assertTrue();
                    }
                }
                done();
            })
        })

        /**
         *@tc.number    : SUB_MULTIMEDIA_AUDIO_VOLUME_GROUP_MANAGER_SETRINGERMODE_0200
         *@tc.name      : setRingerMode - Normal Mode - Promise - ENAME
         *@tc.desc      : setRingerMode - Set Ring more to Normal Mode
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 3
         */
        it('SUB_MULTIMEDIA_AUDIO_VOLUME_GROUP_MANAGER_SETRINGERMODE_0200', 3, async function (done) {
            try {
                let audioVolumeManager = audioManager.getVolumeManager();
                let groupManager = await audioVolumeManager.getVolumeGroupManager(audio.DEFAULT_VOLUME_GROUP_ID);
                let value = await groupManager.getRingerMode();
                if (value == audio.AudioRingMode.RINGER_MODE_SILENT ||
                    value == audio.AudioRingMode.RINGER_MODE_VIBRATE ||
                    value == audio.AudioRingMode.RINGER_MODE_NORMAL) {
                    console.info(`${TagFrmwk}: Promise: setRingerMode RINGER_MODE_NORMAL: PASS :${value}`);
                    expect(true).assertTrue();
                } else {
                    console.info(`${TagFrmwk}: Promise: setRingerMode RINGER_MODE_NORMAL: FAIL :${value}`);
                    expect(false).assertTrue();
                }
            } catch (err) {
                console.log('err :' + err.message);
                expect(false).assertTrue();
            }
            done();
        })

        /**
         *@tc.number    : SUB_MULTIMEDIA_AUDIO_VOLUME_GROUP_MANAGER_ONRINGMODECHANGE_0100
         *@tc.name      : OnRingMode - RINGER_MODE_NORMAL
         *@tc.desc      : OnRingMode - RINGER_MODE_NORMAL
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 3
         */
        it('SUB_MULTIMEDIA_AUDIO_VOLUME_GROUP_MANAGER_ONRINGMODECHANGE_0100', 3, async function (done) {
            try {
                let audioVolumeManager = audioManager.getVolumeManager();
                let groupManager = await audioVolumeManager.getVolumeGroupManager(audio.DEFAULT_VOLUME_GROUP_ID);
                groupManager.on('ringerModeChange', (AudioRingMode) => {});
                expect(true).assertTrue();
                done();
            } catch (err) {
                console.log('err :' + err.message)
                expect(false).assertTrue();
                done();
            }
        })

        /**
         *@tc.number    : SUB_MULTIMEDIA_AUDIO_VOLUME_GROUP_MANAGER_SETMICROPHONEMUTE_0100
         *@tc.name      : setMicrophoneMute - true - Callback
         *@tc.desc      : Enable mic mute
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 2
         */
        it('SUB_MULTIMEDIA_AUDIO_VOLUME_GROUP_MANAGER_SETMICROPHONEMUTE_0100', 2, async function (done) {
            let audioVolumeManager = audioManager.getVolumeManager();
            let groupManager = await audioVolumeManager.getVolumeGroupManager(audio.DEFAULT_VOLUME_GROUP_ID);
            groupManager.setMicrophoneMute(true, (err, data) => {
                if (err) {
                    console.error(`audioManagerApi9Test: failed to setMicrophoneMute : Callback:  ${err.message}`);
                    expect(false).assertTrue();
                } else {
                    groupManager.isMicrophoneMute((err, data) => {
                        if (err) {
                            console.error(`audioManagerApi9Test: failed to isMicrophoneMute : Callback:  ${err.message}`);
                            expect(false).assertTrue();
                        } else {
                            if (data == true) {
                                console.log(`${TagFrmwk}: Callback: isMicrophoneMute: TRUE: PASS:${data}`);
                                expect(true).assertTrue();
                            } else {
                                console.log(`${TagFrmwk}: Callback: isMicrophoneMute: TRUE: FAIL: ${data}`);
                                expect(false).assertTrue();
                            }
                        }
                        done();
                    })
                }
            });
        })

        /**
         *@tc.number    : SUB_MULTIMEDIA_AUDIO_VOLUME_GROUP_MANAGER_SETMICROPHONEMUTE_0200
         *@tc.name      : setMicrophoneMute - true - Promise
         *@tc.desc      : Enable mic mute
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 2
         */
        it('SUB_MULTIMEDIA_AUDIO_VOLUME_GROUP_MANAGER_SETMICROPHONEMUTE_0200', 2, async function (done) {
            try {
                let audioVolumeManager = audioManager.getVolumeManager();
                let groupManager = await audioVolumeManager.getVolumeGroupManager(audio.DEFAULT_VOLUME_GROUP_ID);
                await groupManager.setMicrophoneMute(true);
                let data = await groupManager.isMicrophoneMute();
                if (data == true) {
                    console.log(`${TagFrmwk}: Promise: isMicrophoneMute: TRUE: PASS:${data}`);
                    expect(true).assertTrue();
                } else {
                    console.log(`${TagFrmwk}: Promise: isMicrophoneMute: TRUE: FAIL: ${data}`);
                    expect(false).assertTrue();
                }
            } catch (err) {
                console.log('err :' + err.message);
                expect(false).assertTrue();
            }
            done();
        })

        /**
         *@tc.number    : SUB_MULTIMEDIA_AUDIO_VOLUME_GROUP_MANAGER_ONMICSTATECHANGE_0100
         *@tc.name      : OnMicStateChange
         *@tc.desc      : OnMicStateChange
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 3
         */
        it('SUB_MULTIMEDIA_AUDIO_VOLUME_GROUP_MANAGER_ONMICSTATECHANGE_0100', 2, async function (done) {
            let audioVolumeManager = audioManager.getVolumeManager();
            let groupManager = await audioVolumeManager.getVolumeGroupManager(audio.DEFAULT_VOLUME_GROUP_ID);
            try {
                await groupManager.setMicrophoneMute(false);
                console.info('setMicrophoneMute success')
            } catch (err) {
                console.log('err :' + err.message)
                expect(false).assertTrue();
                done();
            }
            onMicStateChangeFlag1 = true
            groupManager.on('micStateChange', (MicStateChangeEvent) => {
                if (onMicStateChangeFlag1 == true) {
                    console.log(`${TagFrmwk}: Mic State Change Event is called`);
                    if (MicStateChangeEvent.mute == true) {
                        console.info(`${TagFrmwk}: MEDIA CallBack : PASS : ${MicStateChangeEvent.mute}`);
                        onMicStateChangeFlag1 = false
                        expect(true).assertTrue();
                    } else {
                        console.info(`${TagFrmwk}: Audio MicStateChangeEvent is : ${MicStateChangeEvent}`);
                        expect(false).assertTrue();
                    }
                    done();
                }
            });
            try {
                await groupManager.setMicrophoneMute(true);
                console.info('setMicrophoneMute success')
            } catch (err) {
                console.log('err :' + err.message)
                expect(false).assertTrue();
                done();
            }
        })

        /**
         *@tc.number    : SUB_MULTIMEDIA_AUDIO_STREAM_MANAGER_ISACTIVE_0100
         *@tc.name      : isActive - Media - Promise
         *@tc.desc      : isActive - Media - Promise - When stream is NOT playing
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 1
         */
        it('SUB_MULTIMEDIA_AUDIO_STREAM_MANAGER_ISACTIVE_0100', 1, async function (done) {
            console.log(`${TagFrmwk}: Promise : isActive Media: NOTE: audio NOT PLAYING as MEDIA for the test case to PASS`);
            const PROMISE = streamManager.isActive(audioMedia);
            PROMISE.then(function (data) {
                if (data == false) {
                    console.log(`${TagFrmwk}: Promise: isActive: Media: TRUE: PASS:${data}`);
                    expect(true).assertTrue();
                } else {
                    console.log(`${TagFrmwk}: Promise: isActive: Media: TRUE: FAIL: ${data}`);
                    expect(false).assertTrue();
                }
            }).catch(err => {
                console.log('err :' + JSON.stringify(err));
                expect().assertFail();
            });
            await PROMISE;
            done();
        })

        /**
         *@tc.number    : SUB_MULTIMEDIA_AUDIO_STREAM_MANAGER_ISACTIVE_0200
         *@tc.name      : isActive - Media - Callback
         *@tc.desc      : isActive - Media - Callback - When stream is NOT playing
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 1
         */
        it('SUB_MULTIMEDIA_AUDIO_STREAM_MANAGER_ISACTIVE_0200', 1, function (done) {
            console.log(`${TagFrmwk}: Callback : isActive Media: NOTE: audio NOT PLAYING as MEDIA for the test case to PASS`);
            streamManager.isActive(audioMedia, (err, data) => {
                if (err) {
                    console.error(`${TagFrmwk}: Callback : Media : isActive: failed  ${err.message}`);
                    expect().assertFail();
                } else if (data == false) {
                    console.log(`${TagFrmwk}: Callback: isActive: Media: TRUE: PASS:${data}`);
                    expect(true).assertTrue();
                } else {
                    console.log(`${TagFrmwk}: Callback: isActive: Media: TRUE: FAIL: ${data}`);
                    expect(false).assertTrue();
                }
                done();
            });
        })

        /**
         *@tc.number    : SUB_MULTIMEDIA_AUDIO_STREAM_MANAGER_ISACTIVE_SYNC_0100
         *@tc.name      : isActive - Media - Sync
         *@tc.desc      : isActive - Media - Sync - When stream is NOT playing
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 1
         */
        it('SUB_MULTIMEDIA_AUDIO_STREAM_MANAGER_ISACTIVE_SYNC_0100', 1, function (done) {
            console.log(`${TagFrmwk}: Callback : isActive Media: NOTE: audio NOT PLAYING as MEDIA for the test case to PASS`);
            try {
                let data = streamManager.isActiveSync(audioMedia)
                if (data == false) {
                    console.log(`${TagFrmwk}: Callback: isActive: Media: TRUE: PASS:${data}`);
                    expect(true).assertTrue();
                } else {
                    console.log(`${TagFrmwk}: Callback: isActive: Media: TRUE: FAIL: ${data}`);
                    expect(false).assertTrue();
                }
            } catch (error) {
                console.error(`${TagFrmwk}: Callback : Media : isActive: failed  ${error.message}`);
                expect().assertFail();
            }
            done();

        })

        /**
         *@tc.number    : SUB_MULTIMEDIA_AUDIO_STREAM_MANAGER_ISACTIVE_SYNC_0200
         *@tc.name      : isActiveSync - Null_Parameter - 401
         *@tc.desc      : isActiveSync - Null_Parameter - 401
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 1
         */
         it('SUB_MULTIMEDIA_AUDIO_STREAM_MANAGER_ISACTIVE_SYNC_0200', 1, function (done) {
            try {
                let data = streamManager.isActiveSync();
                console.log(`${TagFrmwk}: isActiveSync data::${data}`);
                expect(false).assertTrue();
                done();
            } catch (error) {
                console.error(`${TagFrmwk}: isActiveSync: failed  ${error.message},code:${error.code}`);
                expect(Number(error.code)).assertEqual(401);
                done();
            }
        })
        /**
         *@tc.number    : SUB_MULTIMEDIA_AUDIO_STREAM_MANAGER_ISACTIVE_SYNC_0300
         *@tc.name      : isActiveSync - Invaild_Number_Parameter - 6800101
         *@tc.desc      : isActiveSync - Invaild_Number_Parameter - 6800101
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 1
         */
         it('SUB_MULTIMEDIA_AUDIO_STREAM_MANAGER_ISACTIVE_SYNC_0300', 1, function (done) {
            try {
                let data = streamManager.isActiveSync(123);
                console.log(`${TagFrmwk}: isActiveSync data::${data}`);
                expect(false).assertTrue();
                done();
            } catch (error) {
                console.error(`${TagFrmwk}: isActiveSync: failed  ${error.message},code:${error.code}`);
                expect(Number(error.code)).assertEqual(audio.AudioErrors.ERROR_INVALID_PARAM);
                done();
            }
        })

        /**
         *@tc.number    : SUB_MULTIMEDIA_AUDIO_STREAM_MANAGER_ISACTIVE_SYNC_0400
         *@tc.name      : isActiveSync - String_Parameter - 401
         *@tc.desc      : isActiveSync - String_Parameter - 401
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 1
         */
         it('SUB_MULTIMEDIA_AUDIO_STREAM_MANAGER_ISACTIVE_SYNC_0400', 1, function (done) {
            try {
                let data = streamManager.isActiveSync('123');
                console.log(`${TagFrmwk}: isActiveSync data::${data}`);
                expect(false).assertTrue();
                done();
            } catch (error) {
                console.error(`${TagFrmwk}: isActiveSync: failed  ${error.message},code:${error.code}`);
                expect(Number(error.code)).assertEqual(401);
                done();
            }
        })
        /**
         *@tc.number    : SUB_MULTIMEDIA_AUDIO_ROUTING_MANAGER_ISCOMMUNICATIONDEVICE_SYNC_0100
         *@tc.name      : isCommunicationDeviceActiveSync - SPEAKER - deactivate 
         *@tc.desc      : isCommunicationDeviceActiveSync speaker 
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 1
         */
        it('SUB_MULTIMEDIA_AUDIO_ROUTING_MANAGER_ISCOMMUNICATIONDEVICE_SYNC_0100', 1, async function (done) {
            try {
                let flag = null;
                let AudioRoutingManager = audioManager.getRoutingManager();
                let outputDeviceDescription = await AudioRoutingManager.getDevices(audio.DeviceFlag.OUTPUT_DEVICES_FLAG);
                console.info(`SUB_MULTIMEDIA_AUDIO_ROUTING_MANAGER_SETCOMMUNICATIONDEVICE_0100
                outputDeviceDescription is ${JSON.stringify(outputDeviceDescription)}`);
                if (outputDeviceDescription.length == 1 && outputDeviceDescription[0].deviceType == audio.DeviceType.SPEAKER) {
                    flag = true;
                }
                if (outputDeviceDescription.length == 2 && outputDeviceDescription[0].deviceType == audio.DeviceType.EARPIECE && outputDeviceDescription[1].deviceType == audio.DeviceType.SPEAKER) {
                    flag = false;
                }
                await AudioRoutingManager.setCommunicationDevice(2, false).then(() => {
                    console.info(`SUB_MULTIMEDIA_AUDIO_ROUTING_MANAGER_SETCOMMUNICATIONDEVICE_0100
                    Promise returned to indicate that the device is set to the active status.`);
                });
                let value = AudioRoutingManager.isCommunicationDeviceActiveSync(audio.ActiveDeviceType.SPEAKER)
                console.info(`SUB_MULTIMEDIA_AUDIO_ROUTING_MANAGER_SETCOMMUNICATIONDEVICE_0100
                        isCommunicationDeviceActive : SPEAKER: Deactivate : PASS :${value} flag is ${flag}`);
                if (flag == true && value == true) {
                    console.info(`SUB_MULTIMEDIA_AUDIO_ROUTING_MANAGER_SETCOMMUNICATIONDEVICE_0100
                        isCommunicationDeviceActive : SPEAKER: Deactivate : PASS :${value} flag is ${flag}`);
                    expect(true).assertTrue();
                } else if (flag == false && value == true) {
                    console.info(`SUB_MULTIMEDIA_AUDIO_ROUTING_MANAGER_SETCOMMUNICATIONDEVICE_0100
                        isCommunicationDeviceActive : SPEAKER: Deactivate : PASS :${value} flag is ${flag}`);
                    expect(true).assertTrue();
                } else {
                    console.info(`SUB_MULTIMEDIA_AUDIO_ROUTING_MANAGER_SETCOMMUNICATIONDEVICE_0100
                        isCommunicationDeviceActive : SPEAKER: Deactivate : fail :${value} flag is ${flag}`);
                    expect(false).assertTrue();
                }

            } catch (err) {
                console.log('err :' + JSON.stringify(err));
                expect(false).assertTrue();
            }
            done();
        })
        /**
         *@tc.number    : SUB_MULTIMEDIA_AUDIO_ROUTING_MANAGER_ISCOMMUNICATIONDEVICE_SYNC_0200
         *@tc.name      : isCommunicationDeviceActiveSync - Null_Parameters - 401
         *@tc.desc      : isCommunicationDeviceActiveSync - Null_Parameters - 401 
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 1
         */
         it('SUB_MULTIMEDIA_AUDIO_ROUTING_MANAGER_ISCOMMUNICATIONDEVICE_SYNC_0200', 1, async function (done) {
            let AudioRoutingManager = audioManager.getRoutingManager();
            try {
                let value = AudioRoutingManager.isCommunicationDeviceActiveSync()
                console.info(`SUB_MULTIMEDIA_AUDIO_ROUTING_MANAGER_ISCOMMUNICATIONDEVICE_SYNC_0200
                        isCommunicationDeviceActive : Null_Parameters : PASS :${value}`);
                expect(false).assertTrue();
                done();
            } catch (err) {
                console.info(`isCommunicationDeviceActive : Null_Parameters Fail,error:${err},ErrorCode:${err.code},${typeof(err.code)}`);
                expect(Number(err.code)).assertEqual(401);
                expect(true).assertTrue();
                done();
            }
        })
        /**
         *@tc.number    : SUB_MULTIMEDIA_AUDIO_ROUTING_MANAGER_ISCOMMUNICATIONDEVICE_SYNC_0300
         *@tc.name      : isCommunicationDeviceActiveSync - Number_Invalid_Parameters - 6800101
         *@tc.desc      : isCommunicationDeviceActiveSync - Number_Invalid_Parameters - 6800101
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 1
         */
         it('SUB_MULTIMEDIA_AUDIO_ROUTING_MANAGER_ISCOMMUNICATIONDEVICE_SYNC_0300', 1, async function (done) {
            let AudioRoutingManager = audioManager.getRoutingManager();
            try {
                let value = AudioRoutingManager.isCommunicationDeviceActiveSync(123)
                console.info(`SUB_MULTIMEDIA_AUDIO_ROUTING_MANAGER_ISCOMMUNICATIONDEVICE_SYNC_0300
                        isCommunicationDeviceActive : Number_Invalid_Parameters : PASS :${value}`);
                expect(false).assertTrue();
                done();
            } catch (err) {
                console.info(`isCommunicationDeviceActive : Number_Invalid_Parameters Fail,error:${err},ErrorCode:${err.code},${typeof(err.code)}`);
                expect(Number(err.code)).assertEqual(audio.AudioErrors.ERROR_INVALID_PARAM);
                expect(true).assertTrue();
                done();
            }
        })
        /**
         *@tc.number    : SUB_MULTIMEDIA_AUDIO_ROUTING_MANAGER_ISCOMMUNICATIONDEVICE_SYNC_0400
         *@tc.name      : isCommunicationDeviceActiveSync - String_Parameters - 401
         *@tc.desc      : isCommunicationDeviceActiveSync - String_Parameters - 401
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 1
         */
         it('SUB_MULTIMEDIA_AUDIO_ROUTING_MANAGER_ISCOMMUNICATIONDEVICE_SYNC_0400', 1, async function (done) {
            let AudioRoutingManager = audioManager.getRoutingManager();
            try {
                let value = AudioRoutingManager.isCommunicationDeviceActiveSync('123');
                console.info(`SUB_MULTIMEDIA_AUDIO_ROUTING_MANAGER_ISCOMMUNICATIONDEVICE_SYNC_0400
                        isCommunicationDeviceActive : String_Parameters : PASS :${value}`);
                expect(false).assertTrue();
                done();
            } catch (err) {
                console.info(`isCommunicationDeviceActive : String_Parameters Fail,error:${err},ErrorCode:${err.code},${typeof(err.code)}`);
                expect(Number(err.code)).assertEqual(401);
                expect(true).assertTrue();
                done();
            }
        })
        /**
         *@tc.number    : SUB_MULTIMEDIA_AUDIO_ROUTING_MANAGER_SETCOMMUNICATIONDEVICE_0100
         *@tc.name      : setCommunicationDevice - SPEAKER - deactivate - Promise
         *@tc.desc      : setCommunicationDevice speaker - Promise
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 1
         */
        it('SUB_MULTIMEDIA_AUDIO_ROUTING_MANAGER_SETCOMMUNICATIONDEVICE_0100', 1, async function (done) {
            try {
                let flag = null;
                let AudioRoutingManager = audioManager.getRoutingManager();
                let outputDeviceDescription = await AudioRoutingManager.getDevices(audio.DeviceFlag.OUTPUT_DEVICES_FLAG);
                console.info(`SUB_MULTIMEDIA_AUDIO_ROUTING_MANAGER_SETCOMMUNICATIONDEVICE_0100
                outputDeviceDescription is ${JSON.stringify(outputDeviceDescription)}`);
                if (outputDeviceDescription.length == 1 && outputDeviceDescription[0].deviceType == audio.DeviceType.SPEAKER) {
                    flag = true;
                }
                if (outputDeviceDescription.length == 2 && outputDeviceDescription[0].deviceType == audio.DeviceType.EARPIECE && outputDeviceDescription[1].deviceType == audio.DeviceType.SPEAKER) {
                    flag = false;
                }
                await AudioRoutingManager.setCommunicationDevice(2, false).then(() => {
                    console.info(`SUB_MULTIMEDIA_AUDIO_ROUTING_MANAGER_SETCOMMUNICATIONDEVICE_0100
                    Promise returned to indicate that the device is set to the active status.`);
                });
                await AudioRoutingManager.isCommunicationDeviceActive(audio.ActiveDeviceType.SPEAKER).then(function (value) {
                    if (flag == true && value == true) {
                        console.info(`SUB_MULTIMEDIA_AUDIO_ROUTING_MANAGER_SETCOMMUNICATIONDEVICE_0100
                        isCommunicationDeviceActive : SPEAKER: Deactivate : PASS :${value} flag is ${flag}`);
                        expect(true).assertTrue();
                    } else if (flag == false && value == true) {
                        console.info(`SUB_MULTIMEDIA_AUDIO_ROUTING_MANAGER_SETCOMMUNICATIONDEVICE_0100
                        isCommunicationDeviceActive : SPEAKER: Deactivate : PASS :${value} flag is ${flag}`);
                        expect(true).assertTrue();
                    } else {
                        console.info(`SUB_MULTIMEDIA_AUDIO_ROUTING_MANAGER_SETCOMMUNICATIONDEVICE_0100
                        isCommunicationDeviceActive : SPEAKER: Deactivate : fail :${value} flag is ${flag}`);
                        expect(false).assertTrue();
                    }
                }).catch((err) => {
                    console.log('err :' + JSON.stringify(err.message));
                    expect(false).assertTrue();
                });
            } catch (err) {
                console.log('err :' + JSON.stringify(err.message));
                expect(false).assertTrue();
            }
            done();
        })

        /**
         *@tc.number    : SUB_MULTIMEDIA_AUDIO_ROUTING_MANAGER_SETCOMMUNICATIONDEVICE_0200
         *@tc.name      : setCommunicationDevice - SPEAKER - deactivate - Callback
         *@tc.desc      : setCommunicationDevice speaker - Callback
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 2
         */
        it('SUB_MULTIMEDIA_AUDIO_ROUTING_MANAGER_SETCOMMUNICATIONDEVICE_0200', 2, async function (done) {
            let flag = null;
            let AudioRoutingManager = audioManager.getRoutingManager();
            let outputDeviceDescription = await AudioRoutingManager.getDevices(audio.DeviceFlag.OUTPUT_DEVICES_FLAG);
            console.info(`SUB_MULTIMEDIA_AUDIO_ROUTING_MANAGER_SETCOMMUNICATIONDEVICE_0200
            outputDeviceDescription is ${JSON.stringify(outputDeviceDescription)}`);
            if (outputDeviceDescription.length == 1 && outputDeviceDescription[0].deviceType == audio.DeviceType.SPEAKER) {
                flag = true;
            }
            if (outputDeviceDescription.length == 2 && outputDeviceDescription[0].deviceType == audio.DeviceType.EARPIECE && outputDeviceDescription[1].deviceType == audio.DeviceType.SPEAKER) {
                flag = false;
            }
            AudioRoutingManager.setCommunicationDevice(audio.ActiveDeviceType.SPEAKER, false, (err) => {
                if (err) {
                    console.error(`${TagFrmwk}: Device Test: Callback : setCommunicationDevice : SPEAKER: Deactivate: Error: ${err.message}`);
                    expect(false).assertTrue();
                    done();
                } else {
                    console.info(`${TagFrmwk}: Device Test: Callback : setCommunicationDevice : SPEAKER: Active`);
                    AudioRoutingManager.isCommunicationDeviceActive(2, (err, value) => {
                        if (err) {
                            console.error(`${TagFrmwk}: Device Test: Callback : isCommunicationDeviceActive : SPEAKER: Deactivate: Error: ${err.message}`);
                            expect(false).assertTrue();
                        } else if (value == true && flag == true) {
                            console.info(`${TagFrmwk}: Device Test: Callback : isCommunicationDeviceActive : SPEAKER: Deactivate : PASS :${value} flag is ${flag}`);
                            expect(true).assertTrue();
                        } else if (value == true && flag == false) {
                            console.info(`${TagFrmwk}: Device Test: Callback : isCommunicationDeviceActive : SPEAKER: Deactivate : PASS :${value} flag is ${flag}`);
                            expect(true).assertTrue();
                        } else {
                            console.info(`SUB_MULTIMEDIA_AUDIO_ROUTING_MANAGER_SETCOMMUNICATIONDEVICE_0200 ${TagFrmwk}: Device Test: Callback : isCommunicationDeviceActive : SPEAKER: Deactivate : FAIL :${value} flag is ${flag}`);
                            expect(false).assertTrue();
                        }
                        done();
                    });
                }
            });
        })

        /**
         *@tc.number    : SUB_MULTIMEDIA_AUDIO_ROUTING_MANAGER_MICSTATECHANGE_0100
         *@tc.name      : SUB_MULTIMEDIA_AUDIO_ROUTING_MANAGER_MICSTATECHANGE_0100
         *@tc.desc      : micStateChange
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 2
         */
        it('SUB_MULTIMEDIA_AUDIO_ROUTING_MANAGER_MICSTATECHANGE_0100', 2, async function (done) {
            let audioVolumeManager = audioManager.getVolumeManager();
            let VolumeGroupManager = await audioVolumeManager.getVolumeGroupManager(audio.DEFAULT_VOLUME_GROUP_ID);
            let count = 0;
            console.info('getVolumeGroupManager Callback START.');
            onMicStateChangeFlag2 = true
            VolumeGroupManager.on('micStateChange', async (micStateChange) => {
                if (onMicStateChangeFlag2 == true) {
                    console.info('micStateChange is ' + micStateChange.mute);
                    onMicStateChangeFlag2 = false
                    count++;
                }
            })
            try {
                let data = await audioManager.isMicrophoneMute();
                console.info('Promise isMicrophoneMute PASS:' + data);
                await audioManager.setMicrophoneMute(data);
                console.info('Promise setMicrophoneMute PASS.');
                let data1 = await audioManager.isMicrophoneMute();
                console.info('Promise isMicrophoneMute PASS.' + data1);
            } catch (err) {
                console.log('ERROR:' + JSON.stringify(err))
                expect(false).assertTrue();
                done();
            }
            await sleep(2000);
            expect(count).assertEqual(0);
            done();
        })

        /**
         *@tc.number    : SUB_MULTIMEDIA_AUDIO_ROUTING_MANAGER_MICSTATECHANGE_0200
         *@tc.name      : SUB_MULTIMEDIA_AUDIO_ROUTING_MANAGER_MICSTATECHANGE_0200
         *@tc.desc      : micStateChange
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 2
         */
        it('SUB_MULTIMEDIA_AUDIO_ROUTING_MANAGER_MICSTATECHANGE_0200', 2, async function (done) {
            let audioVolumeManager = audioManager.getVolumeManager();
            let VolumeGroupManager = await audioVolumeManager.getVolumeGroupManager(audio.DEFAULT_VOLUME_GROUP_ID);
            console.info('getVolumeGroupManager Callback START.');
            let count = 0;
            onMicStateChangeFlag3 = true
            VolumeGroupManager.on('micStateChange', async (micStateChange) => {
                if (onMicStateChangeFlag3 == true) {
                    console.info("Updated micState:" + JSON.stringify(micStateChange));
                    onMicStateChangeFlag3 = false
                    count++;
                }
            })
            try {
                let data = await audioManager.isMicrophoneMute();
                console.info('Promise isMicrophoneMute PASS:' + data);
                let micStatus = !data;
                await audioManager.setMicrophoneMute(micStatus);
                console.info('Promise setMicrophoneMute PASS:' + micStatus);
            } catch (err) {
                console.log('ERROR:' + JSON.stringify(err))
                expect(false).assertTrue();
                done();
            }
            await sleep(2000);
            expect(count).assertEqual(1);
            done();
        })

        /**
         *@tc.number    : SUB_MULTIMEDIA_AUDIO_ROUTING_MANAGER_MICSTATECHANGE_0300
         *@tc.name      : SUB_MULTIMEDIA_AUDIO_ROUTING_MANAGER_MICSTATECHANGE_0300
         *@tc.desc      : micStateChange
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 2
         */
        it('SUB_MULTIMEDIA_AUDIO_ROUTING_MANAGER_MICSTATECHANGE_0300', 2, async function (done) {
            let audioVolumeManager = audioManager.getVolumeManager();
            let VolumeGroupManager = await audioVolumeManager.getVolumeGroupManager(audio.DEFAULT_VOLUME_GROUP_ID);
            console.info('getVolumeGroupManager Callback START.');
            let count = 0;
            onMicStateChangeFlag4 = true
            VolumeGroupManager.on('micStateChange', async (micStateChange) => {
                if (onMicStateChangeFlag4 == true) {
                    console.info("Updated micState:" + JSON.stringify(micStateChange));
                    count++;
                }
            })
            try {
                let data = await audioManager.isMicrophoneMute();
                console.info('Promise isMicrophoneMute PASS:' + data);
                let micStatus = !data;
                await audioManager.setMicrophoneMute(micStatus);
                console.info('Promise setMicrophoneMute PASS:' + micStatus);
                await audioManager.setMicrophoneMute(!micStatus);
                console.info('Promise setMicrophoneMute PASS:' + (!micStatus));
            } catch (err) {
                console.log('ERROR:' + JSON.stringify(err))
                expect(false).assertTrue();
                done();
            }
            await sleep(2000);
            expect(count).assertEqual(2);
            onMicStateChangeFlag4 = false
            done();
        })

        /**
         *@tc.number    : SUB_MULTIMEDIA_AUDIO_ROUTING_MANAGER_MICSTATECHANGE_0400
         *@tc.name      : SUB_MULTIMEDIA_AUDIO_ROUTING_MANAGER_MICSTATECHANGE_0400
         *@tc.desc      : micStateChange
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 2
         */
        it('SUB_MULTIMEDIA_AUDIO_ROUTING_MANAGER_MICSTATECHANGE_0400', 2, async function (done) {
            let audioVolumeManager = audioManager.getVolumeManager();
            let VolumeGroupManager = await audioVolumeManager.getVolumeGroupManager(audio.DEFAULT_VOLUME_GROUP_ID);
            let count = 0;
            try {
                console.info("enter SUB_MULTIMEDIA_AUDIO_ROUTING_MANAGER_MICSTATECHANGE_0400");
                onMicStateChangeFlag5 = true
                VolumeGroupManager.on('micStateChange', async (micStateChange1) => {
                    if (onMicStateChangeFlag5 = true) {
                        console.info("Updated micState--001:" + JSON.stringify(micStateChange1));
                        VolumeGroupManager.on('micStateChange', async (micStateChange) => {
                            console.info("Updated micState--002:" + JSON.stringify(micStateChange));
                            onMicStateChangeFlag5 = false
                            count++
                        })
                        let data = await audioManager.isMicrophoneMute();
                        console.info('Second Promise isMicrophoneMute PASS:' + data);
                        await audioManager.setMicrophoneMute(!data);
                        console.info('Second:Promise setMicrophoneMute PASS:' + (!data));
                    }
                })
                let data = await audioManager.isMicrophoneMute();
                console.info('First Promise isMicrophoneMute PASS:' + data);
                await audioManager.setMicrophoneMute(!data);
                console.info('First:Promise setMicrophoneMute PASS:' + (!data));
            } catch (err) {
                console.log('ERROR:' + JSON.stringify(err))
                expect(false).assertTrue();
                done();
            }
            await sleep(2000);
            expect(count).assertEqual(1);
            done();
        })

        /**
         *@tc.number    : SUB_MULTIMEDIA_AUDIO_MANAGER_MUTE_2900
         *@tc.name      : mute - ALARM - Promise - SetVolume
         *@tc.desc      : mute - ALARM - Promise - Enable mute -SetVolume
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 2
         */
        it('SUB_MULTIMEDIA_AUDIO_MANAGER_MUTE_2900', 2, async function (done) {
            try {
                await audioManager.setVolume(audio.AudioVolumeType.ALARM, 1);
                await audioManager.mute(audio.AudioVolumeType.ALARM, true);
                let data = await audioManager.isMute(audio.AudioVolumeType.ALARM);
                if (data == false) {
                    console.log(`${TagFrmwk}: Promise: Is Stream Mute ALARM: SetVolume: PASS:${data}`);
                    let value = await audioManager.getVolume(audio.AudioVolumeType.ALARM);
                    console.info("value is " + value)
                    if (value == 1) {
                        let data1 = await audioManager.isMute(audio.AudioVolumeType.ALARM);
                        console.info("data1 is " + data1);
                        if (data1 == false) {
                            let MinData = await audioManager.getMinVolume(audio.AudioVolumeType.ALARM);
                            console.info('MinData is ' + MinData)
                            expect(MinData).assertEqual(1);
                        } else {
                            expect(false).assertTrue();
                            console.log(`${TagFrmwk}: Promise: Is Stream Mute ALARM: isMute: Fail:${data}`);
                        }
                    } else {
                        console.log(`${TagFrmwk}: Promise: Is Stream Mute ALARM: getVolume: Fail:${value}`);
                        expect(false).assertTrue();
                    }
                    done();
                } else {
                    console.log(`${TagFrmwk}: Promise: Is Stream Mute ALARM: SetVolume: Fail:${data}`);
                    expect(false).assertTrue();
                }
                done();
            } catch (err) {
                console.info('err :' + JSON.stringify(err.message));
                expect(false).assertTrue();
                done();
            }
        })


        /**
         *@tc.number    : SUB_MULTIMEDIA_AUDIO_MANAGER_MUTE_2901
         *@tc.name      : mute - ALARM - Promise - SetVolume
         *@tc.desc      : mute - ALARM - Promise - Enable mute -SetVolume
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 2
         */
        it('SUB_MULTIMEDIA_AUDIO_MANAGER_MUTE_2901', 2, async function (done) {
            try {
                
                await audioManager.setVolume(audio.AudioVolumeType.ALARM, 15);
                await audioManager.mute(audio.AudioVolumeType.ALARM, true);
                let data = await audioManager.isMute(audio.AudioVolumeType.ALARM);
                if (data == false) {
                    console.log(`${TagFrmwk}: Promise: Is Stream Mute ALARM: SetVolume: PASS:${data}`);
                    let value = await audioManager.getVolume(audio.AudioVolumeType.ALARM);
                    console.info("value is " + value)
                    if (value == maxVol) {
                        let data1 = await audioManager.isMute(audio.AudioVolumeType.ALARM);
                        console.info("data1 is " + data1);
                        if (data1 == false) {
                            let MaxData = await audioManager.getMaxVolume(audio.AudioVolumeType.ALARM);
                            console.info('MaxData is ' + MaxData)
                            expect(MaxData).assertEqual(maxVol);
                        } else {
                            expect(false).assertTrue();
                            console.log(`${TagFrmwk}: Promise: Is Stream Mute ALARM: isMute: Fail:${data}`);
                        }
                    } else if(value == maxVolPc){
                        let data1 = await audioManager.isMute(audio.AudioVolumeType.ALARM);
                        console.info("data1 is " + data1);
                        if (data1 == false) {
                            let MaxData = await audioManager.getMaxVolume(audio.AudioVolumeType.ALARM);
                            console.info('MaxData is ' + MaxData)
                            expect(MaxData).assertEqual(maxVolPc);
                        } else {
                            expect(false).assertTrue();
                            console.log(`${TagFrmwk}: Promise: Is Stream Mute ALARM: isMute: Fail:${data}`);
                        }
                    }else{
                        console.log(`${TagFrmwk}: Promise: Is Stream Mute ALARM: getVolume: Fail:${value}`);
                        expect(false).assertTrue();
                    }
                    done();
                } else {
                    console.log(`${TagFrmwk}: Promise: Is Stream Mute ALARM: SetVolume: Fail:${data}`);
                    expect(false).assertTrue();
                }
                done();
            } catch (err) {
                console.info('err :' + JSON.stringify(err.message));
                expect(false).assertTrue();
                done();
            }
        })

        /**
         *@tc.number    : SUB_MULTIMEDIA_AUDIO_MANAGER_MUTE_2902
         *@tc.name      : mute - ALARM - Promise - SetVolume
         *@tc.desc      : mute - ALARM - Promise - Enable mute -SetVolume
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 2
         */
        it('SUB_MULTIMEDIA_AUDIO_MANAGER_MUTE_2902', 2, async function (done) {
            try {
                if (voice){
                    await audioManager.setVolume(audio.AudioVolumeType.ALARM, 16);
                }else{
                    await audioManager.setVolume(audio.AudioVolumeType.ALARM, 21);
                }
                await audioManager.mute(audio.AudioVolumeType.ALARM, true);
                let data = await audioManager.isMute(audio.AudioVolumeType.ALARM);
                if (data == false) {
                    console.log(`${TagFrmwk}: Promise: Is Stream Mute ALARM: SetVolume: PASS:${data}`);
                    let value = await audioManager.getVolume(audio.AudioVolumeType.ALARM);
                    console.info("value is " + value)
                    if (value == maxVol) {
                        let data1 = await audioManager.isMute(audio.AudioVolumeType.ALARM);
                        console.info("data1 is " + data1);
                        if (data1 == false) {
                            let MaxData = await audioManager.getMaxVolume(audio.AudioVolumeType.ALARM);
                            console.info('MaxData is ' + MaxData)
                            expect(MaxData).assertEqual(maxVol);
                        } else {
                            expect(false).assertTrue();
                            console.log(`${TagFrmwk}: Promise: Is Stream Mute ALARM: isMute: Fail:${data}`);
                        }
                    } else if(value == maxVolPc) {
                        let data1 = await audioManager.isMute(audio.AudioVolumeType.ALARM);
                        console.info("data1 is " + data1);
                        if (data1 == false) {
                            let MaxData = await audioManager.getMaxVolume(audio.AudioVolumeType.ALARM);
                            console.info('MaxData is ' + MaxData)
                            expect(MaxData).assertEqual(maxVolPc);
                        } else {
                            expect(false).assertTrue();
                            console.log(`${TagFrmwk}: Promise: Is Stream Mute ALARM: isMute: Fail:${data}`);
                        }
                    }else {
                        console.log(`${TagFrmwk}: Promise: Is Stream Mute ALARM: getVolume: Fail:${value}`);
                        expect(false).assertTrue();
                    }
                    done();
                } else {
                    console.log(`${TagFrmwk}: Promise: Is Stream Mute ALARM: SetVolume: Fail:${data}`);
                    expect(false).assertTrue();
                }
                done();
            } catch (err) {
                console.info('err :' + JSON.stringify(err.message));
                console.info('err code :' + JSON.stringify(err.code));
                expect(err.code).assertEqual(6800104);
                done();
            }
        })

        /**
         *@tc.number    : SUB_MULTIMEDIA_AUDIO_MANAGER_MUTE_2903
         *@tc.name      : mute - ALARM - Promise - SetVolume
         *@tc.desc      : mute - ALARM - Promise - Enable mute -SetVolume
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 2
         */
        it('SUB_MULTIMEDIA_AUDIO_MANAGER_MUTE_2903', 2, async function (done) {
            try {
                await audioManager.setVolume(audio.AudioVolumeType.ALARM, -1);
                await audioManager.mute(audio.AudioVolumeType.ALARM, true);
                let data = await audioManager.isMute(audio.AudioVolumeType.ALARM);
                if (data == false) {
                    console.log(`${TagFrmwk}: Promise: Is Stream Mute ALARM: SetVolume: PASS:${data}`);
                    let value = await audioManager.getVolume(audio.AudioVolumeType.ALARM);
                    console.info("value is " + value)
                    if (value == maxVol) {
                        let data1 = await audioManager.isMute(audio.AudioVolumeType.ALARM);
                        console.info("data1 is " + data1);
                        if (data1 == false) {
                            let MaxData = await audioManager.getMaxVolume(audio.AudioVolumeType.ALARM);
                            console.info('MaxData is ' + MaxData)
                            expect(MaxData).assertEqual(maxVol);
                        } else {
                            expect(false).assertTrue();
                            console.log(`${TagFrmwk}: Promise: Is Stream Mute ALARM: isMute: Fail:${data}`);
                        }
                    } else if(value == maxVolPc) {
                        let data1 = await audioManager.isMute(audio.AudioVolumeType.ALARM);
                        console.info("data1 is " + data1);
                        if (data1 == false) {
                            let MaxData = await audioManager.getMaxVolume(audio.AudioVolumeType.ALARM);
                            console.info('MaxData is ' + MaxData)
                            expect(MaxData).assertEqual(maxVolPc);
                        } else {
                            expect(false).assertTrue();
                            console.log(`${TagFrmwk}: Promise: Is Stream Mute ALARM: isMute: Fail:${data}`);
                        }
                    }else{
                        console.log(`${TagFrmwk}: Promise: Is Stream Mute ALARM: getVolume: Fail:${value}`);
                        expect(false).assertTrue();
                    }
                    done();
                } else {
                    console.log(`${TagFrmwk}: Promise: Is Stream Mute ALARM: SetVolume: Fail:${data}`);
                    expect(false).assertTrue();
                }
                done();
            } catch (err) {
                console.info('err :' + JSON.stringify(err.message));
                console.info('err code :' + JSON.stringify(err.code));
                expect(err.code).assertEqual(6800104);
                done();
            }
        })

        /**
         *@tc.number    : SUB_MULTIMEDIA_AUDIO_MANAGER_MUTE_3000
         *@tc.name      : mute - ACCESSIBILITY - Promise - SetVolume
         *@tc.desc      : mute - ACCESSIBILITY - Promise - Enable mute -SetVolume
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 2
         */
        it('SUB_MULTIMEDIA_AUDIO_MANAGER_MUTE_3000', 2, async function (done) {
            try {
                await audioManager.setVolume(audio.AudioVolumeType.ACCESSIBILITY, 1);
                await audioManager.mute(audio.AudioVolumeType.ACCESSIBILITY, true);
                let data = await audioManager.isMute(audio.AudioVolumeType.ACCESSIBILITY);
                if (data == false) {
                    console.log(`${TagFrmwk}: Promise: Is Stream Mute ACCESSIBILITY: SetVolume: PASS:${data}`);
                    let value = await audioManager.getVolume(audio.AudioVolumeType.ACCESSIBILITY);
                    console.info("value is " + value)
                    if (value == 1) {
                        let data1 = await audioManager.isMute(audio.AudioVolumeType.ACCESSIBILITY);
                        console.info("data1 is " + data1);
                        if (data1 == false) {
                            let MinData = await audioManager.getMinVolume(audio.AudioVolumeType.ACCESSIBILITY);
                            console.info('MinData is ' + MinData)
                            expect(MinData).assertEqual(1);
                        } else {
                            expect(false).assertTrue();
                            console.log(`${TagFrmwk}: Promise: Is Stream Mute ACCESSIBILITY: isMute: Fail:${data}`);
                        }
                    } else {
                        console.log(`${TagFrmwk}: Promise: Is Stream Mute ACCESSIBILITY: getVolume: Fail:${value}`);
                        expect(false).assertTrue();
                    }
                    done();
                } else {
                    console.log(`${TagFrmwk}: Promise: Is Stream Mute ACCESSIBILITY: SetVolume: Fail:${data}`);
                    expect(false).assertTrue();
                }
                done();
            } catch (err) {
                console.info('err :' + JSON.stringify(err.message));
                expect(false).assertTrue();
                done();
            }
        })

        /**
         *@tc.number    : SUB_MULTIMEDIA_AUDIO_MANAGER_MUTE_2901
         *@tc.name      : mute - ACCESSIBILITY - Promise - SetVolume
         *@tc.desc      : mute - ACCESSIBILITY - Promise - Enable mute -SetVolume
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 2
         */
        it('SUB_MULTIMEDIA_AUDIO_MANAGER_MUTE_3001', 2, async function (done) {
            try {
                
                await audioManager.setVolume(audio.AudioVolumeType.ACCESSIBILITY, 15);
                await audioManager.mute(audio.AudioVolumeType.ACCESSIBILITY, true);
                let data = await audioManager.isMute(audio.AudioVolumeType.ACCESSIBILITY);
                if (data == false) {
                    console.log(`${TagFrmwk}: Promise: Is Stream Mute ACCESSIBILITY: SetVolume: PASS:${data}`);
                    let value = await audioManager.getVolume(audio.AudioVolumeType.ACCESSIBILITY);
                    console.info("value is " + value)
                    if (value == maxVol) {
                        let data1 = await audioManager.isMute(audio.AudioVolumeType.ACCESSIBILITY);
                        console.info("data1 is " + data1);
                        if (data1 == false) {
                            let MaxData = await audioManager.getMaxVolume(audio.AudioVolumeType.ACCESSIBILITY);
                            console.info('MaxData is ' + MaxData)
                            expect(MaxData).assertEqual(maxVol);
                        } else {
                            expect(false).assertTrue();
                            console.log(`${TagFrmwk}: Promise: Is Stream Mute ACCESSIBILITY: isMute: Fail:${data}`);
                        }
                    } else if(value == maxVolPc) {
                        let data1 = await audioManager.isMute(audio.AudioVolumeType.ACCESSIBILITY);
                        console.info("data1 is " + data1);
                        if (data1 == false) {
                            let MaxData = await audioManager.getMaxVolume(audio.AudioVolumeType.ACCESSIBILITY);
                            console.info('MaxData is ' + MaxData)
                            expect(MaxData).assertEqual(maxVolPc);
                        } else {
                            expect(false).assertTrue();
                            console.log(`${TagFrmwk}: Promise: Is Stream Mute ACCESSIBILITY: isMute: Fail:${data}`);
                        }
                    }else{
                        console.log(`${TagFrmwk}: Promise: Is Stream Mute ACCESSIBILITY: getVolume: Fail:${value}`);
                        expect(false).assertTrue();
                    }
                    done();
                } else {
                    console.log(`${TagFrmwk}: Promise: Is Stream Mute ACCESSIBILITY: SetVolume: Fail:${data}`);
                    expect(false).assertTrue();
                }
                done();
            } catch (err) {
                console.info('err :' + JSON.stringify(err.message));
                expect(false).assertTrue();
                done();
            }
        })

        /**
         *@tc.number    : SUB_MULTIMEDIA_AUDIO_MANAGER_MUTE_2902
         *@tc.name      : mute - ACCESSIBILITY - Promise - SetVolume
         *@tc.desc      : mute - ACCESSIBILITY - Promise - Enable mute -SetVolume
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 2
         */
        it('SUB_MULTIMEDIA_AUDIO_MANAGER_MUTE_3002', 2, async function (done) {
            try {
                if (voice){
                    await audioManager.setVolume(audio.AudioVolumeType.ACCESSIBILITY, 16);
                }else{
                    await audioManager.setVolume(audio.AudioVolumeType.ACCESSIBILITY, 21);
                }
                await audioManager.mute(audio.AudioVolumeType.ACCESSIBILITY, true);
                let data = await audioManager.isMute(audio.AudioVolumeType.ACCESSIBILITY);
                if (data == false) {
                    console.log(`${TagFrmwk}: Promise: Is Stream Mute ACCESSIBILITY: SetVolume: PASS:${data}`);
                    let value = await audioManager.getVolume(audio.AudioVolumeType.ACCESSIBILITY);
                    console.info("value is " + value)
                    if (value == maxVol) {
                        let data1 = await audioManager.isMute(audio.AudioVolumeType.ACCESSIBILITY);
                        console.info("data1 is " + data1);
                        if (data1 == false) {
                            let MaxData = await audioManager.getMaxVolume(audio.AudioVolumeType.ACCESSIBILITY);
                            console.info('MaxData is ' + MaxData)
                            expect(MaxData).assertEqual(maxVol);
                        } else {
                            expect(false).assertTrue();
                            console.log(`${TagFrmwk}: Promise: Is Stream Mute ACCESSIBILITY: isMute: Fail:${data}`);
                        }
                    } else if(value == maxVolPc){
                        let data1 = await audioManager.isMute(audio.AudioVolumeType.ACCESSIBILITY);
                        console.info("data1 is " + data1);
                        if (data1 == false) {
                            let MaxData = await audioManager.getMaxVolume(audio.AudioVolumeType.ACCESSIBILITY);
                            console.info('MaxData is ' + MaxData)
                            expect(MaxData).assertEqual(maxVolPc);
                        } else {
                            expect(false).assertTrue();
                            console.log(`${TagFrmwk}: Promise: Is Stream Mute ACCESSIBILITY: isMute: Fail:${data}`);
                        }
                    }else{
                        console.log(`${TagFrmwk}: Promise: Is Stream Mute ACCESSIBILITY: getVolume: Fail:${value}`);
                        expect(false).assertTrue();
                    }
                    done();
                } else {
                    console.log(`${TagFrmwk}: Promise: Is Stream Mute ACCESSIBILITY: SetVolume: Fail:${data}`);
                    expect(false).assertTrue();
                }
                done();
            } catch (err) {
                console.info('err :' + JSON.stringify(err.message));
                console.info('err code :' + JSON.stringify(err.code));
                expect(err.code).assertEqual(6800104);
                done();
            }
        })

        /**
         *@tc.number    : SUB_MULTIMEDIA_AUDIO_MANAGER_MUTE_2903
         *@tc.name      : mute - ACCESSIBILITY - Promise - SetVolume
         *@tc.desc      : mute - ACCESSIBILITY - Promise - Enable mute -SetVolume
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 2
         */
        it('SUB_MULTIMEDIA_AUDIO_MANAGER_MUTE_3003', 2, async function (done) {
            try {
                await audioManager.setVolume(audio.AudioVolumeType.ACCESSIBILITY, -1);
                await audioManager.mute(audio.AudioVolumeType.ACCESSIBILITY, true);
                let data = await audioManager.isMute(audio.AudioVolumeType.ACCESSIBILITY);
                if (data == false) {
                    console.log(`${TagFrmwk}: Promise: Is Stream Mute ACCESSIBILITY: SetVolume: PASS:${data}`);
                    let value = await audioManager.getVolume(audio.AudioVolumeType.ACCESSIBILITY);
                    console.info("value is " + value)
                    if (value == maxVol) {
                        let data1 = await audioManager.isMute(audio.AudioVolumeType.ACCESSIBILITY);
                        console.info("data1 is " + data1);
                        if (data1 == false) {
                            let MaxData = await audioManager.getMaxVolume(audio.AudioVolumeType.ACCESSIBILITY);
                            console.info('MaxData is ' + MaxData)
                            expect(MaxData).assertEqual(maxVol);
                        } else {
                            expect(false).assertTrue();
                            console.log(`${TagFrmwk}: Promise: Is Stream Mute ACCESSIBILITY: isMute: Fail:${data}`);
                        }
                    } else if(value == maxVolPc){
                        let data1 = await audioManager.isMute(audio.AudioVolumeType.ACCESSIBILITY);
                        console.info("data1 is " + data1);
                        if (data1 == false) {
                            let MaxData = await audioManager.getMaxVolume(audio.AudioVolumeType.ACCESSIBILITY);
                            console.info('MaxData is ' + MaxData)
                            expect(MaxData).assertEqual(maxVolPc);
                        } else {
                            expect(false).assertTrue();
                            console.log(`${TagFrmwk}: Promise: Is Stream Mute ACCESSIBILITY: isMute: Fail:${data}`);
                        }
                    }else{
                        console.log(`${TagFrmwk}: Promise: Is Stream Mute ACCESSIBILITY: getVolume: Fail:${value}`);
                        expect(false).assertTrue();
                    }
                    done();
                } else {
                    console.log(`${TagFrmwk}: Promise: Is Stream Mute ACCESSIBILITY: SetVolume: Fail:${data}`);
                    expect(false).assertTrue();
                }
                done();
            } catch (err) {
                console.info('err :' + JSON.stringify(err.message));
                console.info('err code :' + JSON.stringify(err.code));
                expect(err.code).assertEqual(6800104);
                done();
            }
        })

        /**
         *@tc.number    : SUB_MULTIMEDIA_AUDIO_VOLUME_MANAGER_ONOFF_VOLUMECHANGE_0100
         *@tc.name      : OnVolumeChange - setVolume - MEDIA
         *@tc.desc      : OnVolumeChange - setVolume - MEDIA
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 3
         */
         it('SUB_MULTIMEDIA_AUDIO_VOLUME_MANAGER_ONOFF_VOLUMECHANGE_0100', 3, async function (done) {
            let audioVolumeManager = audioManager.getVolumeManager();
            let result = false;
            let maxVolume = await audioManager.getMaxVolume(audio.AudioVolumeType.MEDIA)
            let minVolume = await audioManager.getMinVolume(audio.AudioVolumeType.MEDIA)
            await audioManager.setVolume(audio.AudioVolumeType.MEDIA, maxVolume)
            audioVolumeManager.on('volumeChange', (VolumeEvent) => {
                console.info(`SUB_MULTIMEDIA_AUDIO_VOLUME_MANAGER_ONOFF_VOLUMECHANGE_0100 VolumeEvent.volumeType: ${VolumeEvent.volumeType}, VolumeEvent.volume:${VolumeEvent.volume}, VolumeEvent.updateUi:${VolumeEvent.updateUi}`);
                expect(VolumeEvent.volumeType).assertEqual(audio.AudioVolumeType.MEDIA);
                expect(VolumeEvent.volume).assertEqual(minVolume);
                expect(VolumeEvent.updateUi).assertEqual(false);
                result = !result;
                done();
            });
            await audioManager.setVolume(audio.AudioVolumeType.MEDIA, minVolume)
            audioVolumeManager.off('volumeChange');
            await audioManager.setVolume(audio.AudioVolumeType.MEDIA, maxVolume)
            expect(result).assertTrue();
            done();
        })

        /**
         *@tc.number    : SUB_MULTIMEDIA_AUDIO_VOLUME_MANAGER_OFF_VOLUMECHANGE_0100
         *@tc.name      : OffVolumeChange - off-ERROR-INPUT_NUMDER_PARAMETER
         *@tc.desc      : OffVolumeChange - off-ERROR-INPUT_NUMDER_PARAMETER
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 3
         */
         it('SUB_MULTIMEDIA_AUDIO_VOLUME_MANAGER_OFF_VOLUMECHANGE_0100', 3, async function (done) {
            let audioVolumeManager = audioManager.getVolumeManager();
            try {
                audioVolumeManager.off(-1, (data) => {
                    console.info(` off-VolumeChange Success! test fail!`);
                    expect(false).assertTrue();
                    done();
                });
            } catch (error) {
                console.error(`off-VolumeChange input parameter type -1: ${error.message}, ${error.code}`);
                expect(Number(error.code)).assertEqual(401);
                done();
            }
        })

        /**
         *@tc.number    : SUB_MULTIMEDIA_AUDIO_VOLUME_MANAGER_OFF_VOLUMECHANGE_0200
         *@tc.name      : OffVolumeChange - off-ERROR-INPUT_NUMDER_PARAMETER
         *@tc.desc      : OffVolumeChange - off-ERROR-INPUT_NUMDER_PARAMETER
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 3
         */
        it('SUB_MULTIMEDIA_AUDIO_VOLUME_MANAGER_OFF_VOLUMECHANGE_0200', 3, async function (done) {
            let audioVolumeManager = audioManager.getVolumeManager();
            try {
                audioVolumeManager.off('123', (data) => {
                    console.info(` off-VolumeChange Success! test fail!`);
                    expect(false).assertTrue();
                    done();
                });
            } catch (error) {
                console.error(`off-VolumeChange invalid parameter type '123': ${error.message}, ${error.code}`);
                expect(Number(error.code)).assertEqual(6800101);
                done();
            }
        })

        /**
         *@tc.number    : SUB_MULTIMEDIA_AUDIO_VOLUME_MANAGER_OFF_VOLUMECHANGE_0300
         *@tc.name      : OffVolumeChange - off-ERROR-INPUT_NUMDER_PARAMETER
         *@tc.desc      : OffVolumeChange - off-ERROR-INPUT_NUMDER_PARAMETER
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 3
         */
        it('SUB_MULTIMEDIA_AUDIO_VOLUME_MANAGER_OFF_VOLUMECHANGE_0300', 3, async function (done) {
            let audioVolumeManager = audioManager.getVolumeManager();
            try {
                audioVolumeManager.off((data) => {
                    console.info(` off-VolumeChange Success! test fail!`);
                    expect(false).assertTrue();
                    done();
                });
            } catch (error) {
                console.error(`off-VolumeChange no input parameter: ${error.message}, ${error.code}`);
                expect(Number(error.code)).assertEqual(401);
                done();
            }
        })
    })
}