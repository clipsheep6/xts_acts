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


import audio from '@ohos.multimedia.audio';
import fileio from '@ohos.fileio';
import app from '@system.app';
import bundle from '@ohos.bundle';
import abilityAccessCtrl from '@ohos.abilityAccessCtrl';
import featureAbility from '@ohos.ability.featureAbility'
import ability_featureAbility from '@ohos.ability.featureAbility';
import resourceManager from '@ohos.resourceManager';
import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from 'deccjsunit/index';

describe('audioRenderer', function () {

    var audioStreamManager;
	var audioStreamManagerCB;
    let fdRead;
    let readpath;
    const audioManager = audio.getAudioManager();
    console.info('AudioFrameworkRendererChangeLog: Create AudioManger Object JS Framework');

    beforeAll(async function () {
        await applyPermission();
        await audioManager.getStreamManager().then(async function (data) {
            audioStreamManager = data;
            console.info('AudioFrameworkRendererChangeLog: Get AudioStream Manager : Success ');
        }).catch((err) => {
            console.info('AudioFrameworkRendererChangeLog: Get AudioStream Manager : ERROR : '+err.message);
        });
		
		audioManager.getStreamManager((err, data) => {
            if (err) {
                console.error('AudioFrameworkChange: Get AudioStream Manager : ERROR : '+err.message);
            }
            else {
                audioStreamManagerCB = data;
                console.info('AudioFrameworkChange: Get AudioStream Manager : Success ');
            }
        });
        await sleep(1000);
		
        console.info('AudioFrameworkRendererChangeLog: beforeAll: Prerequisites at the test suite level');
    })

    beforeEach(async function () {
        console.info('AudioFrameworkRendererChangeLog: beforeEach: Prerequisites at the test case level');
        await sleep(1000);
    })

    afterEach(function () {
        console.info('AudioFrameworkRendererChangeLog: afterEach: Test case-level clearance conditions');
    })

    afterAll(async function () {
        console.info('AudioFrameworkRendererChangeLog: afterAll: Test suite-level cleanup condition');
    })

    function sleep (ms) {
        return new Promise(resolve => setTimeout(resolve, ms));
    }

    async function getFileDescriptor(fileName) {
        let fileDescriptor = undefined;
        await resourceManager.getResourceManager().then(async (mgr) => {
            await mgr.getRawFileDescriptor(fileName).then(value => {
                fileDescriptor = { fd: value.fd, offset: value.offset, length: value.length };
            }).catch(error => {
                console.log('AudioFrameworkRendererChangeLog:case getRawFileDescriptor err: ' + error);
            });
        });
        return fileDescriptor;
    }

    async function closeFileDescriptor(fileName) {
        await resourceManager.getResourceManager().then(async (mgr) => {
            await mgr.closeRawFileDescriptor(fileName).then(value => {
                console.log('AudioFrameworkRendererChangeLog:case closeRawFileDescriptor success for file:' + fileName);
            }).catch(error => {
                console.log('AudioFrameworkRendererChangeLog:case closeRawFileDescriptor err: ' + error);
            });
        });
    }
    async function getFdRead(pathName, done) {
        await getFileDescriptor(pathName).then((res) => {
            if (res == undefined) {
                expect().assertFail();
                console.info('AudioFrameworkRendererChangeLog:case error fileDescriptor undefined, open file fail');
                done();
            } else {
                fdRead = res.fd;
                console.info("AudioFrameworkRendererChangeLog:case 0 fdRead is: " + fdRead);
            }
        })
    }
    async function applyPermission() {
        let appInfo = await bundle.getApplicationInfo('ohos.acts.multimedia.audio.audiomanager', 0, 100);
        let atManager = abilityAccessCtrl.createAtManager();
        if (atManager != null) {
            let tokenID = appInfo.accessTokenId;
            console.info('AudioFrameworkRendererChangeLog:[permission] case accessTokenID is ' + tokenID);
            let permissionName1 = 'ohos.permission.MEDIA_LOCATION';
            let permissionName2 = 'ohos.permission.READ_MEDIA';
            let permissionName3 = 'ohos.permission.WRITE_MEDIA';
            await atManager.grantUserGrantedPermission(tokenID, permissionName1, 1).then((result) => {
                console.info('AudioFrameworkRendererChangeLog:[permission] case grantUserGrantedPermission success :' + result);
            }).catch((err) => {
                console.info('AudioFrameworkRendererChangeLog:[permission] case grantUserGrantedPermission failed :' + err);
            });
            await atManager.grantUserGrantedPermission(tokenID, permissionName2, 1).then((result) => {
                console.info('AudioFrameworkRendererChangeLog:[permission] case grantUserGrantedPermission success :' + result);
            }).catch((err) => {
                console.info('AudioFrameworkRendererChangeLog:[permission] case grantUserGrantedPermission failed :' + err);
            });
            await atManager.grantUserGrantedPermission(tokenID, permissionName3, 1).then((result) => {
                console.info('AudioFrameworkRendererChangeLog:[permission] case grantUserGrantedPermission success :' + result);
            }).catch((err) => {
                console.info('AudioFrameworkRendererChangeLog:[permission] case grantUserGrantedPermission failed :' + err);
            });
        } else {
            console.info('AudioFrameworkRendererChangeLog:[permission] case apply permission failed, createAtManager failed');
        }
    }

    /* *
    * @tc.number    : SUB_AUDIO_ON_RENDERER_CHANGE_001
    * @tc.name      : AudioRendererChange - ON_STATE_PREPARED
    * @tc.desc      : AudioRendererChange - ON_STATE_PREPARED
    * @tc.size      : MEDIUM
    * @tc.type      : Function
    * @tc.level     : Level 0
    */
    it('SUB_AUDIO_ON_RENDERER_CHANGE_001', 0,async function (done) {
        var AudioStreamInfo = {
            samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
            channels: audio.AudioChannel.CHANNEL_2,
            sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE,
            encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
        }

        var AudioRendererInfo = {
            content: audio.ContentType.CONTENT_TYPE_RINGTONE,
            usage: audio.StreamUsage.STREAM_USAGE_NOTIFICATION_RINGTONE,
            rendererFlags: 1
        }

        var AudioRendererOptions = {
            streamInfo: AudioStreamInfo,
            rendererInfo: AudioRendererInfo
        }
        var resultFlag = false;

        var audioRen;

        audioStreamManagerCB.on('audioRendererChange',  (AudioRendererChangeInfoArray) => {
            for (let i=0;i<AudioRendererChangeInfoArray.length;i++) {
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-001] ######### RendererChange on is called for element ' + i + ' ##########');
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-001] StreamId for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].streamId);
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-001] ClientUid for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].clientUid);
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-001] RendererInfo Content for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererInfo.content);
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-001] RendererInfo Stream Usage for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererInfo.usage);
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-001] RendererInfo Flags for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererInfo.rendererFlags);
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-001] RendererState for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererState);
                if (AudioRendererChangeInfoArray[i].rendererState == 1) {
                    resultFlag = true;
                    console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-001] ResultFlag for element ' + i + ' is : ' + resultFlag);
                }
            }
        });
        await sleep (500);

        await audio.createAudioRenderer(AudioRendererOptions).then(async function (data) {
            audioRen = data;
            console.info('AudioFrameworkRendererChangeLog: AudioRender Created : Success : Stream Type: SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRendererChangeLog: AudioRender Created : ERROR : '+err.message);
        });

		await sleep (500);
		
        audioStreamManagerCB.off('audioRendererChange');
        await sleep(100);
        console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-001] ######### RendererChange Off is called #########');

        await audioRen.release().then(async function () {
            console.info('AudioFrameworkRendererChangeLog: Renderer release : SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRendererChangeLog: Renderer release :ERROR : '+err.message);
        });

        expect(resultFlag).assertTrue();
        done();

    })

    /* *
           * @tc.number    : SUB_AUDIO_ON_RENDERER_CHANGE_002
           * @tc.name      : AudioRendererChange - ON_STATE_RUNNING
           * @tc.desc      : AudioRendererChange - ON_STATE_RUNNING
           * @tc.size      : MEDIUM
           * @tc.type      : Function
           * @tc.level     : Level 0
       */
    it('SUB_AUDIO_ON_RENDERER_CHANGE_002', 0, async function (done) {

        var AudioStreamInfo = {
            samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_44100,
            channels: audio.AudioChannel.CHANNEL_1,
            sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
            encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
        }

        var AudioRendererInfo = {
            content: audio.ContentType.CONTENT_TYPE_UNKNOWN,
            usage: audio.StreamUsage.STREAM_USAGE_MEDIA,
            rendererFlags: 1
        }

        var AudioRendererOptions = {
            streamInfo: AudioStreamInfo,
            rendererInfo: AudioRendererInfo
        }

        var resultFlag = false;

        var audioRen;

        await audio.createAudioRenderer(AudioRendererOptions).then(async function (data) {
            audioRen = data;
            console.info('AudioFrameworkRendererChangeLog: AudioRender Created : Success : Stream Type: SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRendererChangeLog: AudioRender Created : ERROR : '+err.message);
        });

        audioStreamManager.on('audioRendererChange',  (AudioRendererChangeInfoArray) => {
            for (let i=0;i<AudioRendererChangeInfoArray.length;i++) {
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-002] ######### RendererChange on is called for element ' + i + ' ##########');
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-002] StreamId for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].streamId);
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-002] ClientUid for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].clientUid);
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-002] RendererInfo Content for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererInfo.content);
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-002] RendererInfo Stream Usage for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererInfo.usage);
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-002] RendererInfo Flags for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererInfo.rendererFlags);
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-002] RendererState for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererState);
                if (AudioRendererChangeInfoArray[i].rendererState == 2) {
                    resultFlag = true;
                    console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-002] ResultFlag for element ' + i + ' is : ' + resultFlag);
                }
            }
        });
		
        await sleep (500);

        await audioRen.start().then(async function () {
            console.info('AudioFrameworkRendererChangeLog: renderInstant started :SUCCESS ');
        }).catch((err) => {
            console.info('AudioFrameworkRendererChangeLog: renderInstant start :ERROR : '+err.message);
        });

		await sleep(500);
		
        audioStreamManager.off('audioRendererChange');
        await sleep(100);
        console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-002] ######### RendererChange Off is called #########');


        await audioRen.stop().then(async function () {
            console.info('AudioFrameworkRendererChangeLog: Renderer stopped : SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRendererChangeLog: Renderer stop:ERROR : '+err.message);
        });

        await audioRen.release().then(async function () {
            console.info('AudioFrameworkRendererChangeLog: Renderer release : SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRendererChangeLog: Renderer release :ERROR : '+err.message);
        });
        expect(resultFlag).assertTrue();
        done();
    })

    /* *
    * @tc.number    : SUB_AUDIO_ON_RENDERER_CHANGE_003
    * @tc.name      : AudioRendererChange - ON_STATE_STOPPED
    * @tc.desc      : AudioRendererChange - ON_STATE_STOPPED
    * @tc.size      : MEDIUM
    * @tc.type      : Function
    * @tc.level     : Level 0
    */
    it('SUB_AUDIO_ON_RENDERER_CHANGE_003', 0,async function (done) {

        var AudioStreamInfo = {
            samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_24000,
            channels: audio.AudioChannel.CHANNEL_2,
            sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S24LE,
            encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
        }

        var AudioRendererInfo = {
            content: audio.ContentType.CONTENT_TYPE_SPEECH,
            usage: audio.StreamUsage.STREAM_USAGE_VOICE_COMMUNICATION,
            rendererFlags: 1
        }

        var AudioRendererOptions = {
            streamInfo: AudioStreamInfo,
            rendererInfo: AudioRendererInfo
        }

        var resultFlag = false;

        var audioRen;

        await audio.createAudioRenderer(AudioRendererOptions).then(async function (data) {
            audioRen = data;
            console.info('AudioFrameworkRendererChangeLog: AudioRender Created : Success : Stream Type: SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRendererChangeLog: AudioRender Created : ERROR : '+err.message);
        });

        await audioRen.start().then(async function () {
            console.info('AudioFrameworkRendererChangeLog: renderInstant started :SUCCESS ');
        }).catch((err) => {
            console.info('AudioFrameworkRendererChangeLog: renderInstant start :ERROR : '+err.message);
        });

        audioStreamManager.on('audioRendererChange',  (AudioRendererChangeInfoArray) => {
            for (let i=0;i<AudioRendererChangeInfoArray.length;i++) {
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-003] ######### RendererChange on is called for element ' + i + ' ##########');
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-003] StreamId for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].streamId);
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-003] ClientUid for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].clientUid);
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-003] RendererInfo Content for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererInfo.content);
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-003] RendererInfo Stream Usage for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererInfo.usage);
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-003] RendererInfo Flags for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererInfo.rendererFlags);
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-003] RendererState for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererState);
                if (AudioRendererChangeInfoArray[i].rendererState == 3) {
                    resultFlag = true;
                    console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-003] ResultFlag for element ' + i + ' is : ' + resultFlag);
                }
            }
        });
		
        await sleep (500);

        await audioRen.stop().then(async function () {
            console.info('AudioFrameworkRendererChangeLog: Renderer stopped : SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRendererChangeLog: Renderer stop:ERROR : '+err.message);
        });

		await sleep(500);
		
        audioStreamManager.off('audioRendererChange');
        await sleep(100);
        console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-003] ######### RendererChange Off is called #########');

        await audioRen.release().then(async function () {
            console.info('AudioFrameworkRendererChangeLog: Renderer release : SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRendererChangeLog: Renderer release :ERROR : '+err.message);
        });

        expect(resultFlag).assertTrue();
        done();
    })

    /* *
    * @tc.number    : SUB_AUDIO_ON_RENDERER_CHANGE_004
    * @tc.name      : AudioRendererChange - ON_STATE_RELEASED
    * @tc.desc      : AudioRendererChange - ON_STATE_RELEASED
    * @tc.size      : MEDIUM
    * @tc.type      : Function
    * @tc.level     : Level 0
    */
    it('SUB_AUDIO_ON_RENDERER_CHANGE_004', 0,async function (done) {

        var AudioStreamInfo = {
            samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
            channels: audio.AudioChannel.CHANNEL_2,
            sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE,
            encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
        }

        var AudioRendererInfo = {
            content: audio.ContentType.CONTENT_TYPE_RINGTONE,
            usage: audio.StreamUsage.STREAM_USAGE_NOTIFICATION_RINGTONE,
            rendererFlags: 1
        }

        var AudioRendererOptions = {
            streamInfo: AudioStreamInfo,
            rendererInfo: AudioRendererInfo
        }

        var resultFlag = false;

        var audioRen;

        await audio.createAudioRenderer(AudioRendererOptions).then(async function (data) {
            audioRen = data;
            console.info('AudioFrameworkRendererChangeLog: AudioRender Created : Success : Stream Type: SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRendererChangeLog: AudioRender Created : ERROR : '+err.message);
        });

        await audioRen.start().then(async function () {
            console.info('AudioFrameworkRendererChangeLog: renderInstant started :SUCCESS ');
        }).catch((err) => {
            console.info('AudioFrameworkRendererChangeLog: renderInstant start :ERROR : '+err.message);
        });

        await audioRen.stop().then(async function () {
            console.info('AudioFrameworkRendererChangeLog: Renderer stopped : SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRendererChangeLog: Renderer stop:ERROR : '+err.message);
        });

        audioStreamManager.on('audioRendererChange',  (AudioRendererChangeInfoArray) => {
            for (let i=0;i<AudioRendererChangeInfoArray.length;i++) {
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-004] ######### RendererChange on is called for element ' + i + ' ##########');
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-004] StreamId for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].streamId);
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-004] ClientUid for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].clientUid);
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-004] RendererInfo Content for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererInfo.content);
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-004] RendererInfo Stream Usage for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererInfo.usage);
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-004] RendererInfo Flags for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererInfo.rendererFlags);
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-004] RendererState for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererState);
                if (AudioRendererChangeInfoArray[i].rendererState == 4) {
                    resultFlag = true;
                    console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-004] ResultFlag for element ' + i + ' is : ' + resultFlag);
                }
            }
        });
		
        await sleep (500);

        await audioRen.release().then(async function () {
            console.info('AudioFrameworkRendererChangeLog: Renderer release : SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRendererChangeLog: Renderer release :ERROR : '+err.message);
        });

		await sleep(500);
		
        audioStreamManager.off('audioRendererChange');
        await sleep(100);
        console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-004] ######### RendererChange Off is called #########');

        expect(resultFlag).assertTrue();
        done();
    })

    /* *
    * @tc.number    : SUB_AUDIO_ON_RENDERER_CHANGE_005
    * @tc.name      : AudioRendererChange - ON_STATE_PAUSED
    * @tc.desc      : AudioRendererChange - ON_STATE_PAUSED
    * @tc.size      : MEDIUM
    * @tc.type      : Function
    * @tc.level     : Level 0
    */
    it('SUB_AUDIO_ON_RENDERER_CHANGE_005', 0,async function (done) {

        var AudioStreamInfo = {
            samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
            channels: audio.AudioChannel.CHANNEL_2,
            sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE,
            encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
        }

        var AudioRendererInfo = {
            content: audio.ContentType.CONTENT_TYPE_RINGTONE,
            usage: audio.StreamUsage.STREAM_USAGE_NOTIFICATION_RINGTONE,
            rendererFlags: 1
        }

        var AudioRendererOptions = {
            streamInfo: AudioStreamInfo,
            rendererInfo: AudioRendererInfo
        }

        var resultFlag = false;

        var audioRen;

        await audio.createAudioRenderer(AudioRendererOptions).then(async function (data) {
            audioRen = data;
            console.info('AudioFrameworkRendererChangeLog: AudioRender Created : Success : Stream Type: SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRendererChangeLog: AudioRender Created : ERROR : '+err.message);
        });

        await audioRen.start().then(async function () {
            console.info('AudioFrameworkRendererChangeLog: renderInstant started :SUCCESS ');
        }).catch((err) => {
            console.info('AudioFrameworkRendererChangeLog: renderInstant start :ERROR : '+err.message);
        });

        audioStreamManager.on('audioRendererChange',  (AudioRendererChangeInfoArray) => {
            for (let i=0;i<AudioRendererChangeInfoArray.length;i++) {
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-005] ######### RendererChange on is called for element ' + i + ' ##########');
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-005] StreamId for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].streamId);
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-005] ClientUid for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].clientUid);
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-005] RendererInfo Content for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererInfo.content);
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-005] RendererInfo Stream Usage for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererInfo.usage);
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-005] RendererInfo Flags for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererInfo.rendererFlags);
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-005] RendererState for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererState);
                if (AudioRendererChangeInfoArray[i].rendererState == 5) {
                    resultFlag = true;
                    console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-005] ResultFlag for element ' + i + ' is : ' + resultFlag);
                }
            }
        });
		
        await sleep (500);

        await audioRen.pause().then(async function () {
            console.info('AudioFrameworkRendererChangeLog: renderInstant Pause :SUCCESS ');
        }).catch((err) => {
            console.info('AudioFrameworkRendererChangeLog: renderInstant Pause :ERROR : '+err.message);
        });

		await sleep (500);
		
        audioStreamManager.off('audioRendererChange');
        await sleep(100);
        console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-005] ######### RendererChange Off is called #########');

        await audioRen.stop().then(async function () {
            console.info('AudioFrameworkRendererChangeLog: Renderer stopped : SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRendererChangeLog: Renderer stop:ERROR : '+err.message);
        });

        await audioRen.release().then(async function () {
            console.info('AudioFrameworkRendererChangeLog: Renderer release : SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRendererChangeLog: Renderer release :ERROR : '+err.message);
        });

        expect(resultFlag).assertTrue();
        done();
    })

    /* *
    * @tc.number    : SUB_AUDIO_ON_RENDERER_CHANGE_006
    * @tc.name      : AudioRendererChange - ON_CONTENT_TYPE_RINGTONE
    * @tc.desc      : AudioRendererChange - ON_CONTENT_TYPE_RINGTONE
    * @tc.size      : MEDIUM
    * @tc.type      : Function
    * @tc.level     : Level 0
    */
    it('SUB_AUDIO_ON_RENDERER_CHANGE_006', 0,async function (done) {
        var AudioStreamInfo = {
            samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
            channels: audio.AudioChannel.CHANNEL_2,
            sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE,
            encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
        }

        var AudioRendererInfo = {
            content: audio.ContentType.CONTENT_TYPE_RINGTONE,
            usage: audio.StreamUsage.STREAM_USAGE_NOTIFICATION_RINGTONE,
            rendererFlags: 1
        }

        var AudioRendererOptions = {
            streamInfo: AudioStreamInfo,
            rendererInfo: AudioRendererInfo
        }
        var resultFlag = false;

        var audioRen;

        audioStreamManagerCB.on('audioRendererChange',  (AudioRendererChangeInfoArray) => {
            for (let i=0;i<AudioRendererChangeInfoArray.length;i++) {
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-006] ######### RendererChange on is called for element ' + i + ' ##########');
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-006] StreamId for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].streamId);
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-006] ClientUid for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].clientUid);
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-006] RendererInfo Content for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererInfo.content);
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-006] RendererInfo Stream Usage for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererInfo.usage);
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-006] RendererInfo Flags for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererInfo.rendererFlags);
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-006] RendererState for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererState);
                if (AudioRendererChangeInfoArray[i].rendererInfo.content == 5) {
                    resultFlag = true;
                    console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-006] ResultFlag for element ' + i + ' is : ' + resultFlag);
                }
            }
        });
        await sleep (500);

        await audio.createAudioRenderer(AudioRendererOptions).then(async function (data) {
            audioRen = data;
            console.info('AudioFrameworkRendererChangeLog: AudioRender Created : Success : Stream Type: SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRendererChangeLog: AudioRender Created : ERROR : '+err.message);
        });

		await sleep(500);
        audioStreamManagerCB.off('audioRendererChange');
        await sleep(100);
        console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-006] ######### RendererChange Off is called #########');

        await audioRen.release().then(async function () {
            console.info('AudioFrameworkRendererChangeLog: Renderer release : SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRendererChangeLog: Renderer release :ERROR : '+err.message);
        });

        expect(resultFlag).assertTrue();
        done();

    })

/* *
    * @tc.number    : SUB_AUDIO_ON_RENDERER_CHANGE_007
    * @tc.name      : AudioRendererChange - ON_CONTENT_TYPE_UNKNOWN
    * @tc.desc      : AudioRendererChange - ON_CONTENT_TYPE_UNKNOWN
    * @tc.size      : MEDIUM
    * @tc.type      : Function
    * @tc.level     : Level 0
    */
    it('SUB_AUDIO_ON_RENDERER_CHANGE_007', 0,async function (done) {
        var AudioStreamInfo = {
            samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
            channels: audio.AudioChannel.CHANNEL_2,
            sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE,
            encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
        }

        var AudioRendererInfo = {
            content: audio.ContentType.CONTENT_TYPE_UNKNOWN,
            usage: audio.StreamUsage.STREAM_USAGE_MEDIA,
            rendererFlags: 1
        }

        var AudioRendererOptions = {
            streamInfo: AudioStreamInfo,
            rendererInfo: AudioRendererInfo
        }
        var resultFlag = false;

        var audioRen;

        audioStreamManager.on('audioRendererChange',  (AudioRendererChangeInfoArray) => {
            for (let i=0;i<AudioRendererChangeInfoArray.length;i++) {
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-007] ######### RendererChange on is called for element ' + i + ' ##########');
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-007] StreamId for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].streamId);
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-007] ClientUid for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].clientUid);
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-007] RendererInfo Content for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererInfo.content);
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-007] RendererInfo Stream Usage for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererInfo.usage);
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-007] RendererInfo Flags for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererInfo.rendererFlags);
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-007] RendererState for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererState);
                if (AudioRendererChangeInfoArray[i].rendererInfo.content == 0) {
                    resultFlag = true;
                    console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-007] ResultFlag for element ' + i + ' is : ' + resultFlag);
                }
            }
        });
        await sleep (500);

        await audio.createAudioRenderer(AudioRendererOptions).then(async function (data) {
            audioRen = data;
            console.info('AudioFrameworkRendererChangeLog: AudioRender Created : Success : Stream Type: SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRendererChangeLog: AudioRender Created : ERROR : '+err.message);
        });

		await sleep (500);
        audioStreamManager.off('audioRendererChange');
        await sleep(100);
        console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-007] ######### RendererChange Off is called #########');

        await audioRen.release().then(async function () {
            console.info('AudioFrameworkRendererChangeLog: Renderer release : SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRendererChangeLog: Renderer release :ERROR : '+err.message);
        });

        expect(resultFlag).assertTrue();
        done();

    })
	
	
	


/* *
    * @tc.number    : SUB_AUDIO_ON_RENDERER_CHANGE_008
    * @tc.name      : AudioRendererChange - ON_CONTENT_TYPE_SPEECH
    * @tc.desc      : AudioRendererChange - ON_CONTENT_TYPE_SPEECH
    * @tc.size      : MEDIUM
    * @tc.type      : Function
    * @tc.level     : Level 0
    */
    it('SUB_AUDIO_ON_RENDERER_CHANGE_008', 0,async function (done) {
        var AudioStreamInfo = {
            samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
            channels: audio.AudioChannel.CHANNEL_2,
            sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE,
            encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
        }

        var AudioRendererInfo = {
            content: audio.ContentType.CONTENT_TYPE_SPEECH,
            usage: audio.StreamUsage.STREAM_USAGE_VOICE_COMMUNICATION,
            rendererFlags: 1
        }

        var AudioRendererOptions = {
            streamInfo: AudioStreamInfo,
            rendererInfo: AudioRendererInfo
        }
        var resultFlag = false;

        var audioRen;

        audioStreamManager.on('audioRendererChange',  (AudioRendererChangeInfoArray) => {
            for (let i=0;i<AudioRendererChangeInfoArray.length;i++) {
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-008] ######### RendererChange on is called for element ' + i + ' ##########');
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-008] StreamId for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].streamId);
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-008] ClientUid for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].clientUid);
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-008] RendererInfo Content for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererInfo.content);
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-008] RendererInfo Stream Usage for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererInfo.usage);
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-008] RendererInfo Flags for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererInfo.rendererFlags);
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-008] RendererState for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererState);
                if (AudioRendererChangeInfoArray[i].rendererInfo.content == 1) {
                    resultFlag = true;
                    console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-008] ResultFlag for element ' + i + ' is : ' + resultFlag);
                }
            }
        });
        await sleep (500);

        await audio.createAudioRenderer(AudioRendererOptions).then(async function (data) {
            audioRen = data;
            console.info('AudioFrameworkRendererChangeLog: AudioRender Created : Success : Stream Type: SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRendererChangeLog: AudioRender Created : ERROR : '+err.message);
        });

		await sleep (500);
        audioStreamManager.off('audioRendererChange');
        await sleep(100);
        console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-008] ######### RendererChange Off is called #########');

        await audioRen.release().then(async function () {
            console.info('AudioFrameworkRendererChangeLog: Renderer release : SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRendererChangeLog: Renderer release :ERROR : '+err.message);
        });

        expect(resultFlag).assertTrue();
        done();

    })



/* *
    * @tc.number    : SUB_AUDIO_ON_RENDERER_CHANGE_009
    * @tc.name      : AudioRendererChange - ON_CONTENT_TYPE_MUSIC
    * @tc.desc      : AudioRendererChange - ON_CONTENT_TYPE_MUSIC
    * @tc.size      : MEDIUM
    * @tc.type      : Function
    * @tc.level     : Level 0
    */
    it('SUB_AUDIO_ON_RENDERER_CHANGE_009', 0,async function (done) {
        var AudioStreamInfo = {
            samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
            channels: audio.AudioChannel.CHANNEL_2,
            sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE,
            encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
        }

        var AudioRendererInfo = {
            content: audio.ContentType.CONTENT_TYPE_MUSIC,
            usage: audio.StreamUsage.STREAM_USAGE_UNKNOWN,
            rendererFlags: 1
        }

        var AudioRendererOptions = {
            streamInfo: AudioStreamInfo,
            rendererInfo: AudioRendererInfo
        }
        var resultFlag = false;

        var audioRen;

        audioStreamManager.on('audioRendererChange',  (AudioRendererChangeInfoArray) => {
            for (let i=0;i<AudioRendererChangeInfoArray.length;i++) {
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-009] ######### RendererChange on is called for element ' + i + ' ##########');
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-009] StreamId for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].streamId);
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-009] ClientUid for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].clientUid);
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-009] RendererInfo Content for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererInfo.content);
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-009] RendererInfo Stream Usage for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererInfo.usage);
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-009] RendererInfo Flags for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererInfo.rendererFlags);
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-009] RendererState for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererState);
                if (AudioRendererChangeInfoArray[i].rendererInfo.content == 2) {
                    resultFlag = true;
                    console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-009] ResultFlag for element ' + i + ' is : ' + resultFlag);
                }
            }
        });
        await sleep (500);

        await audio.createAudioRenderer(AudioRendererOptions).then(async function (data) {
            audioRen = data;
            console.info('AudioFrameworkRendererChangeLog: AudioRender Created : Success : Stream Type: SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRendererChangeLog: AudioRender Created : ERROR : '+err.message);
        });

		await sleep (500);
        audioStreamManager.off('audioRendererChange');
        await sleep(100);
        console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-009] ######### RendererChange Off is called #########');

        await audioRen.release().then(async function () {
            console.info('AudioFrameworkRendererChangeLog: Renderer release : SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRendererChangeLog: Renderer release :ERROR : '+err.message);
        });

        expect(resultFlag).assertTrue();
        done();

    })


/* *
    * @tc.number    : SUB_AUDIO_ON_RENDERER_CHANGE_010
    * @tc.name      : AudioRendererChange - ON_CONTENT_TYPE_MOVIES
    * @tc.desc      : AudioRendererChange - ON_CONTENT_TYPE_MOVIES
    * @tc.size      : MEDIUM
    * @tc.type      : Function
    * @tc.level     : Level 0
    */
    it('SUB_AUDIO_ON_RENDERER_CHANGE_010', 0,async function (done) {
        var AudioStreamInfo = {
            samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
            channels: audio.AudioChannel.CHANNEL_2,
            sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE,
            encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
        }

        var AudioRendererInfo = {
            content: audio.ContentType.CONTENT_TYPE_MOVIE,
            usage: audio.StreamUsage.STREAM_USAGE_MEDIA,
            rendererFlags: 1
        }

        var AudioRendererOptions = {
            streamInfo: AudioStreamInfo,
            rendererInfo: AudioRendererInfo
        }
        var resultFlag = false;

        var audioRen;

        audioStreamManager.on('audioRendererChange',  (AudioRendererChangeInfoArray) => {
            for (let i=0;i<AudioRendererChangeInfoArray.length;i++) {
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-010] ######### RendererChange on is called for element ' + i + ' ##########');
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-010] StreamId for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].streamId);
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-010] ClientUid for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].clientUid);
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-010] RendererInfo Content for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererInfo.content);
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-010] RendererInfo Stream Usage for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererInfo.usage);
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-010] RendererInfo Flags for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererInfo.rendererFlags);
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-010] RendererState for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererState);
                if (AudioRendererChangeInfoArray[i].rendererInfo.content == 3) {
                    resultFlag = true;
                    console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-010] ResultFlag for element ' + i + ' is : ' + resultFlag);
                }
            }
        });
        await sleep (500);

        await audio.createAudioRenderer(AudioRendererOptions).then(async function (data) {
            audioRen = data;
            console.info('AudioFrameworkRendererChangeLog: AudioRender Created : Success : Stream Type: SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRendererChangeLog: AudioRender Created : ERROR : '+err.message);
        });

		await sleep (500);

        audioStreamManager.off('audioRendererChange');
        await sleep(100);
        console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-010] ######### RendererChange Off is called #########');

        await audioRen.release().then(async function () {
            console.info('AudioFrameworkRendererChangeLog: Renderer release : SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRendererChangeLog: Renderer release :ERROR : '+err.message);
        });

        expect(resultFlag).assertTrue();
        done();

    })



/* *
    * @tc.number    : SUB_AUDIO_ON_RENDERER_CHANGE_011
    * @tc.name      : AudioRendererChange - ON_CONTENT_TYPE_SONIFICATION
    * @tc.desc      : AudioRendererChange - ON_CONTENT_TYPE_SONIFICATION
    * @tc.size      : MEDIUM
    * @tc.type      : Function
    * @tc.level     : Level 0
    */
    it('SUB_AUDIO_ON_RENDERER_CHANGE_011', 0,async function (done) {
        var AudioStreamInfo = {
            samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
            channels: audio.AudioChannel.CHANNEL_2,
            sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE,
            encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
        }

        var AudioRendererInfo = {
            content: audio.ContentType.CONTENT_TYPE_SONIFICATION,
            usage: audio.StreamUsage.STREAM_USAGE_NOTIFICATION_RINGTONE,
            rendererFlags: 1
        }

        var AudioRendererOptions = {
            streamInfo: AudioStreamInfo,
            rendererInfo: AudioRendererInfo
        }
        var resultFlag = false;

        var audioRen;

        audioStreamManager.on('audioRendererChange',  (AudioRendererChangeInfoArray) => {
            for (let i=0;i<AudioRendererChangeInfoArray.length;i++) {
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-011] ######### RendererChange on is called for element ' + i + ' ##########');
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-011] StreamId for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].streamId);
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-011] ClientUid for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].clientUid);
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-011] RendererInfo Content for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererInfo.content);
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-011] RendererInfo Stream Usage for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererInfo.usage);
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-011] RendererInfo Flags for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererInfo.rendererFlags);
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-011] RendererState for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererState);
                if (AudioRendererChangeInfoArray[i].rendererInfo.content == 4) {
                    resultFlag = true;
                    console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-011] ResultFlag for element ' + i + ' is : ' + resultFlag);
                }
            }
        });
        await sleep (500);

        await audio.createAudioRenderer(AudioRendererOptions).then(async function (data) {
            audioRen = data;
            console.info('AudioFrameworkRendererChangeLog: AudioRender Created : Success : Stream Type: SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRendererChangeLog: AudioRender Created : ERROR : '+err.message);
        });

		await sleep (500);

        audioStreamManager.off('audioRendererChange');
        await sleep(100);
        console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-011] ######### RendererChange Off is called #########');

        await audioRen.release().then(async function () {
            console.info('AudioFrameworkRendererChangeLog: Renderer release : SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRendererChangeLog: Renderer release :ERROR : '+err.message);
        });

        expect(resultFlag).assertTrue();
        done();

    })

/* *
    * @tc.number    : SUB_AUDIO_ON_RENDERER_CHANGE_012
    * @tc.name      : AudioRendererChange - ON_STREAM_USAGE_UNKNOWN
    * @tc.desc      : AudioRendererChange - ON_STREAM_USAGE_UNKNOWN
    * @tc.size      : MEDIUM
    * @tc.type      : Function
    * @tc.level     : Level 0
    */
    it('SUB_AUDIO_ON_RENDERER_CHANGE_012', 0,async function (done) {
        var AudioStreamInfo = {
            samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
            channels: audio.AudioChannel.CHANNEL_2,
            sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE,
            encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
        }

        var AudioRendererInfo = {
            content: audio.ContentType.CONTENT_TYPE_SPEECH,
            usage: audio.StreamUsage.STREAM_USAGE_UNKNOWN,
            rendererFlags: 1
        }

        var AudioRendererOptions = {
            streamInfo: AudioStreamInfo,
            rendererInfo: AudioRendererInfo
        }
        var resultFlag = false;

        var audioRen;

        audioStreamManagerCB.on('audioRendererChange',  (AudioRendererChangeInfoArray) => {
            for (let i=0;i<AudioRendererChangeInfoArray.length;i++) {
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-012] ######### RendererChange on is called for element ' + i + ' ##########');
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-012] StreamId for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].streamId);
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-012] ClientUid for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].clientUid);
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-012] RendererInfo Content for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererInfo.content);
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-012] RendererInfo Stream Usage for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererInfo.usage);
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-012] RendererInfo Flags for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererInfo.rendererFlags);
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-012] RendererState for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererState);
                if (AudioRendererChangeInfoArray[i].rendererInfo.usage == 0) {
                    resultFlag = true;
                    console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-012] ResultFlag for element ' + i + ' is : ' + resultFlag);
                }
            }
        });
        await sleep (500);

        await audio.createAudioRenderer(AudioRendererOptions).then(async function (data) {
            audioRen = data;
            console.info('AudioFrameworkRendererChangeLog: AudioRender Created : Success : Stream Type: SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRendererChangeLog: AudioRender Created : ERROR : '+err.message);
        });

		await sleep(500);
		
        audioStreamManagerCB.off('audioRendererChange');
        await sleep(100);
        console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-012] ######### RendererChange Off is called #########');

        await audioRen.release().then(async function () {
            console.info('AudioFrameworkRendererChangeLog: Renderer release : SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRendererChangeLog: Renderer release :ERROR : '+err.message);
        });

        expect(resultFlag).assertTrue();
        done();

    })
	
	
/* *
    * @tc.number    : SUB_AUDIO_ON_RENDERER_CHANGE_013
    * @tc.name      : AudioRendererChange - ON_STREAM_USAGE_MEDIA
    * @tc.desc      : AudioRendererChange - ON_STREAM_USAGE_MEDIA
    * @tc.size      : MEDIUM
    * @tc.type      : Function
    * @tc.level     : Level 0
    */
    it('SUB_AUDIO_ON_RENDERER_CHANGE_013', 0,async function (done) {
        var AudioStreamInfo = {
            samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
            channels: audio.AudioChannel.CHANNEL_2,
            sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE,
            encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
        }

        var AudioRendererInfo = {
            content: audio.ContentType.CONTENT_TYPE_MUSIC,
            usage: audio.StreamUsage.STREAM_USAGE_MEDIA,
            rendererFlags: 1
        }

        var AudioRendererOptions = {
            streamInfo: AudioStreamInfo,
            rendererInfo: AudioRendererInfo
        }
        var resultFlag = false;

        var audioRen;

        audioStreamManager.on('audioRendererChange',  (AudioRendererChangeInfoArray) => {
            for (let i=0;i<AudioRendererChangeInfoArray.length;i++) {
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-013] ######### RendererChange on is called for element ' + i + ' ##########');
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-013] StreamId for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].streamId);
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-013] ClientUid for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].clientUid);
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-013] RendererInfo Content for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererInfo.content);
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-013] RendererInfo Stream Usage for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererInfo.usage);
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-013] RendererInfo Flags for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererInfo.rendererFlags);
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-013] RendererState for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererState);
                if (AudioRendererChangeInfoArray[i].rendererInfo.usage == 1) {
                    resultFlag = true;
                    console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-013] ResultFlag for element ' + i + ' is : ' + resultFlag);
                }
            }
        });
        await sleep (500);

        await audio.createAudioRenderer(AudioRendererOptions).then(async function (data) {
            audioRen = data;
            console.info('AudioFrameworkRendererChangeLog: AudioRender Created : Success : Stream Type: SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRendererChangeLog: AudioRender Created : ERROR : '+err.message);
        });

		await sleep(500);

        audioStreamManager.off('audioRendererChange');
        await sleep(100);
        console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-013] ######### RendererChange Off is called #########');

        await audioRen.release().then(async function () {
            console.info('AudioFrameworkRendererChangeLog: Renderer release : SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRendererChangeLog: Renderer release :ERROR : '+err.message);
        });

        expect(resultFlag).assertTrue();
        done();

    })
	
	
	
/* *
    * @tc.number    : SUB_AUDIO_ON_RENDERER_CHANGE_014
    * @tc.name      : AudioRendererChange - ON_STREAM_USAGE_MEDIA
    * @tc.desc      : AudioRendererChange - ON_STREAM_USAGE_MEDIA
    * @tc.size      : MEDIUM
    * @tc.type      : Function
    * @tc.level     : Level 0
    */
    it('SUB_AUDIO_ON_RENDERER_CHANGE_014', 0,async function (done) {
        var AudioStreamInfo = {
            samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
            channels: audio.AudioChannel.CHANNEL_2,
            sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE,
            encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
        }

        var AudioRendererInfo = {
            content: audio.ContentType.CONTENT_TYPE_MOVIE,
            usage: audio.StreamUsage.STREAM_USAGE_VOICE_COMMUNICATION,
            rendererFlags: 1
        }

        var AudioRendererOptions = {
            streamInfo: AudioStreamInfo,
            rendererInfo: AudioRendererInfo
        }
        var resultFlag = false;

        var audioRen;

        audioStreamManager.on('audioRendererChange',  (AudioRendererChangeInfoArray) => {
            for (let i=0;i<AudioRendererChangeInfoArray.length;i++) {
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-014] ######### RendererChange on is called for element ' + i + ' ##########');
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-014] StreamId for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].streamId);
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-014] ClientUid for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].clientUid);
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-014] RendererInfo Content for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererInfo.content);
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-014] RendererInfo Stream Usage for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererInfo.usage);
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-014] RendererInfo Flags for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererInfo.rendererFlags);
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-014] RendererState for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererState);
                if (AudioRendererChangeInfoArray[i].rendererInfo.usage == 2) {
                    resultFlag = true;
                    console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-014] ResultFlag for element ' + i + ' is : ' + resultFlag);
                }
            }
        });
        await sleep (500);

        await audio.createAudioRenderer(AudioRendererOptions).then(async function (data) {
            audioRen = data;
            console.info('AudioFrameworkRendererChangeLog: AudioRender Created : Success : Stream Type: SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRendererChangeLog: AudioRender Created : ERROR : '+err.message);
        });

		await sleep(500);

        audioStreamManager.off('audioRendererChange');
        await sleep(100);
        console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-014] ######### RendererChange Off is called #########');

        await audioRen.release().then(async function () {
            console.info('AudioFrameworkRendererChangeLog: Renderer release : SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRendererChangeLog: Renderer release :ERROR : '+err.message);
        });

        expect(resultFlag).assertTrue();
        done();

    })
		
/* *
    * @tc.number    : SUB_AUDIO_ON_RENDERER_CHANGE_015
    * @tc.name      : AudioRendererChange - ON_STREAM_USAGE_MEDIA
    * @tc.desc      : AudioRendererChange - ON_STREAM_USAGE_MEDIA
    * @tc.size      : MEDIUM
    * @tc.type      : Function
    * @tc.level     : Level 0
    */
    it('SUB_AUDIO_ON_RENDERER_CHANGE_015', 0,async function (done) {
        var AudioStreamInfo = {
            samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
            channels: audio.AudioChannel.CHANNEL_2,
            sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE,
            encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
        }

        var AudioRendererInfo = {
            content: audio.ContentType.CONTENT_TYPE_SONIFICATION,
            usage: audio.StreamUsage.STREAM_USAGE_NOTIFICATION_RINGTONE,
            rendererFlags: 1
        }

        var AudioRendererOptions = {
            streamInfo: AudioStreamInfo,
            rendererInfo: AudioRendererInfo
        }
        var resultFlag = false;

        var audioRen;

        audioStreamManager.on('audioRendererChange',  (AudioRendererChangeInfoArray) => {
            for (let i=0;i<AudioRendererChangeInfoArray.length;i++) {
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-015] ######### RendererChange on is called for element ' + i + ' ##########');
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-015] StreamId for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].streamId);
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-015] ClientUid for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].clientUid);
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-015] RendererInfo Content for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererInfo.content);
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-015] RendererInfo Stream Usage for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererInfo.usage);
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-015] RendererInfo Flags for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererInfo.rendererFlags);
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-015] RendererState for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererState);
                if (AudioRendererChangeInfoArray[i].rendererInfo.usage == 6) {
                    resultFlag = true;
                    console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-015] ResultFlag for element ' + i + ' is : ' + resultFlag);
                }
            }
        });
        await sleep (500);

        await audio.createAudioRenderer(AudioRendererOptions).then(async function (data) {
            audioRen = data;
            console.info('AudioFrameworkRendererChangeLog: AudioRender Created : Success : Stream Type: SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRendererChangeLog: AudioRender Created : ERROR : '+err.message);
        });

		await sleep(500);
        audioStreamManager.off('audioRendererChange');
        await sleep(100);
        console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-015] ######### RendererChange Off is called #########');

        await audioRen.release().then(async function () {
            console.info('AudioFrameworkRendererChangeLog: Renderer release : SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRendererChangeLog: Renderer release :ERROR : '+err.message);
        });

        expect(resultFlag).assertTrue();
        done();

    })

/* *
    * @tc.number    : SUB_AUDIO_ON_RENDERER_CHANGE_016
    * @tc.name      : AudioRendererChange - STREAMID
    * @tc.desc      : AudioRendererChange - STREAMID
    * @tc.size      : MEDIUM
    * @tc.type      : Function
    * @tc.level     : Level 0
    */
    it('SUB_AUDIO_ON_RENDERER_CHANGE_016', 0,async function (done) {
        var AudioStreamInfo = {
            samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
            channels: audio.AudioChannel.CHANNEL_2,
            sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE,
            encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
        }

        var AudioRendererInfo = {
            content: audio.ContentType.CONTENT_TYPE_SONIFICATION,
            usage: audio.StreamUsage.STREAM_USAGE_NOTIFICATION_RINGTONE,
            rendererFlags: 1
        }

        var AudioRendererOptions = {
            streamInfo: AudioStreamInfo,
            rendererInfo: AudioRendererInfo
        }
        var resultFlag = false;

        var audioRen;
		
         audioStreamManager.on('audioRendererChange',  (AudioRendererChangeInfoArray) => {
            for (let i=0;i<AudioRendererChangeInfoArray.length;i++) {
				console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-016] ######### RendererChange on is called for element ' + i + ' ##########');
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-016] StreamId for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].streamId);
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-016] ClientUid for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].clientUid);
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-016] RendererInfo Content for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererInfo.content);
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-016] RendererInfo Stream Usage for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererInfo.usage);
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-016] RendererInfo Flags for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererInfo.rendererFlags);
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-016] RendererState for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererState);
                if (AudioRendererChangeInfoArray[i].streamId != undefined) {
                    resultFlag = true;
					console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-016] StreamId for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].streamId);
                }
            }
        });
        await sleep (500);

        await audio.createAudioRenderer(AudioRendererOptions).then(async function (data) {
            audioRen = data;
            console.info('AudioFrameworkRendererChangeLog: AudioRender Created : Success : Stream Type: SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRendererChangeLog: AudioRender Created : ERROR : '+err.message);
        });

		await sleep(500);
        audioStreamManager.off('audioRendererChange');
        await sleep(100);
        console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-015] ######### RendererChange Off is called #########');

        await audioRen.release().then(async function () {
            console.info('AudioFrameworkRendererChangeLog: Renderer release : SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRendererChangeLog: Renderer release :ERROR : '+err.message);
        });

        expect(resultFlag).assertTrue();
        done();

    })
	
	
	/* *
    * @tc.number    : SUB_AUDIO_ON_RENDERER_CHANGE_017
    * @tc.name      : AudioRendererChange - CLIENTUID & RENDERERFLAG
    * @tc.desc      : AudioRendererChange - CLIENTUID & RENDERERFLAG
    * @tc.size      : MEDIUM
    * @tc.type      : Function
    * @tc.level     : Level 0
    */
    it('SUB_AUDIO_ON_RENDERER_CHANGE_017', 0,async function (done) {
        var AudioStreamInfo = {
            samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
            channels: audio.AudioChannel.CHANNEL_2,
            sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE,
            encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
        }

        var AudioRendererInfo = {
            content: audio.ContentType.CONTENT_TYPE_SONIFICATION,
            usage: audio.StreamUsage.STREAM_USAGE_NOTIFICATION_RINGTONE,
            rendererFlags: 1
        }

        var AudioRendererOptions = {
            streamInfo: AudioStreamInfo,
            rendererInfo: AudioRendererInfo
        }
        var resultFlag = false;

        var audioRen;

         audioStreamManager.on('audioRendererChange',  (AudioRendererChangeInfoArray) => {
            for (let i=0;i<AudioRendererChangeInfoArray.length;i++) {
				console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-017] ######### RendererChange on is called for element ' + i + ' ##########');
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-017] StreamId for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].streamId);
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-017] ClientUid for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].clientUid);
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-017] RendererInfo Content for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererInfo.content);
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-017] RendererInfo Stream Usage for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererInfo.usage);
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-017] RendererInfo Flags for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererInfo.rendererFlags);
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-017] RendererState for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererState);
                if (AudioRendererChangeInfoArray[i].clientUid != undefined &&  AudioRendererChangeInfoArray[i].rendererInfo.rendererFlags == 1) {
                    resultFlag = true;
					console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-017] ClientUid for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].clientUid);
					console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-017] RendererInfo Flags for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererInfo.rendererFlags);
                }
            }
        });
        await sleep (500);

        await audio.createAudioRenderer(AudioRendererOptions).then(async function (data) {
            audioRen = data;
            console.info('AudioFrameworkRendererChangeLog: AudioRender Created : Success : Stream Type: SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRendererChangeLog: AudioRender Created : ERROR : '+err.message);
        });

		await sleep(500);
        audioStreamManager.off('audioRendererChange');
        await sleep(100);
        console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-ON-015] ######### RendererChange Off is called #########');

        await audioRen.release().then(async function () {
            console.info('AudioFrameworkRendererChangeLog: Renderer release : SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRendererChangeLog: Renderer release :ERROR : '+err.message);
        });

        expect(resultFlag).assertTrue();
        done();

    })
    /* *
    * @tc.number    : SUB_AUDIO_OFF_RENDERER_CHANGE_001
    * @tc.name      : AudioRendererChange - OFF_STATE_PREPARED
    * @tc.desc      : AudioRendererChange - OFF_STATE_PREPARED
    * @tc.size      : MEDIUM
    * @tc.type      : Function
    * @tc.level     : Level 0
    */
    it('SUB_AUDIO_OFF_RENDERER_CHANGE_001', 0,async function (done) {

        var AudioStreamInfo = {
            samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_32000,
            channels: audio.AudioChannel.CHANNEL_1,
            sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_U8,
            encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
        }

        var AudioRendererInfo = {
            content: audio.ContentType.CONTENT_TYPE_RINGTONE,
            usage: audio.StreamUsage.STREAM_USAGE_NOTIFICATION_RINGTONE,
            rendererFlags: 1
        }

        var AudioRendererOptions = {
            streamInfo: AudioStreamInfo,
            rendererInfo: AudioRendererInfo
        }

        var resultFlag = true;
        var audioRen;

        audioStreamManager.on('audioRendererChange',  (AudioRendererChangeInfoArray) => {
            for (let i=0;i<AudioRendererChangeInfoArray.length;i++) {
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-OFF-001] ######### RendererChange on is called for element ' + i + ' ##########');
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-OFF-001] StreamId for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].streamId);
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-OFF-001] ClientUid for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].clientUid);
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-OFF-001] RendererInfo Content for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererInfo.content);
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-OFF-001] RendererInfo Stream Usage for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererInfo.usage);
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-OFF-001] RendererInfo Flags for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererInfo.rendererFlags);
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-OFF-001] RendererState for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererState);
                resultFlag = false;
            }
        });
        await sleep (500);

        audioStreamManager.off('audioRendererChange');
        await sleep(100);
        console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-OFF-001] ######### RendererChange Off is called #########');
        console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-OFF-001] ResultFlag is : ' + resultFlag);

        await audio.createAudioRenderer(AudioRendererOptions).then(async function (data) {
            audioRen = data;
            console.info('AudioFrameworkRendererChangeLog: AudioRender Created : Success : Stream Type: SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRendererChangeLog: AudioRender Created : ERROR : '+err.message);
        });

        await audioRen.release().then(async function () {
            console.info('AudioFrameworkRendererChangeLog: Renderer release : SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRendererChangeLog: Renderer release :ERROR : '+err.message);
        });

        expect(resultFlag).assertTrue();
        done();
    })

    /* *
    * @tc.number    : SUB_AUDIO_OFF_RENDERER_CHANGE_002
    * @tc.name      : AudioRendererChange - OFF_STATE_RUNNING
    * @tc.desc      : AudioRendererChange - OFF_STATE_RUNNING
    * @tc.size      : MEDIUM
    * @tc.type      : Function
    * @tc.level     : Level 0
    */
    it('SUB_AUDIO_OFF_RENDERER_CHANGE_002', 0,async function (done) {

        var AudioStreamInfo = {
            samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_96000,
            channels: audio.AudioChannel.CHANNEL_1,
            sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE,
            encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
        }

        var AudioRendererInfo = {
            content: audio.ContentType.CONTENT_TYPE_SPEECH,
            usage: audio.StreamUsage.STREAM_USAGE_VOICE_ASSISTANT,
            rendererFlags: 1
        }

        var AudioRendererOptions = {
            streamInfo: AudioStreamInfo,
            rendererInfo: AudioRendererInfo
        }
        var resultFlag = true;
        var audioRen;

        await audio.createAudioRenderer(AudioRendererOptions).then(async function (data) {
            audioRen = data;
            console.info('AudioFrameworkRendererChangeLog: AudioRender Created : Success : Stream Type: SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRendererChangeLog: AudioRender Created : ERROR : '+err.message);
        });

        audioStreamManager.on('audioRendererChange',  (AudioRendererChangeInfoArray) => {
            for (let i=0;i<AudioRendererChangeInfoArray.length;i++) {
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-OFF-002] ######### RendererChange on is called for element ' + i + ' ##########');
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-OFF-002] StreamId for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].streamId);
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-OFF-002] ClientUid for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].clientUid);
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-OFF-002] RendererInfo Content for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererInfo.content);
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-OFF-002] RendererInfo Stream Usage for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererInfo.usage);
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-OFF-002] RendererInfo Flags for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererInfo.rendererFlags);
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-OFF-002] RendererState for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererState);
                resultFlag = false;
            }
        });
        await sleep (500);

        audioStreamManager.off('audioRendererChange');
        await sleep(100);
        console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-OFF-002] ######### RendererChange Off is called #########');
        console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-OFF-002] ResultFlag is : ' + resultFlag);

        await audioRen.start().then(async function () {
            console.info('AudioFrameworkRendererChangeLog: renderInstant started :SUCCESS ');
        }).catch((err) => {
            console.info('AudioFrameworkRendererChangeLog: renderInstant start :ERROR : '+err.message);
        });

        await audioRen.release().then(async function () {
            console.info('AudioFrameworkRendererChangeLog: Renderer release : SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRendererChangeLog: Renderer release :ERROR : '+err.message);
        });

        expect(resultFlag).assertTrue();
        done();
    })

    /* *
    * @tc.number    : SUB_AUDIO_OFF_RENDERER_CHANGE_003
    * @tc.name      : AudioRenderer - OFF_STATE_STOPPED
    * @tc.desc      : AudioRenderer - OFF_STATE_STOPPED
    * @tc.size      : MEDIUM
    * @tc.type      : Function
    * @tc.level     : Level 0
    */
    it('SUB_AUDIO_OFF_RENDERER_CHANGE_003', 0,async function (done) {
        var AudioStreamInfo = {
            samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
            channels: audio.AudioChannel.CHANNEL_2,
            sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE,
            encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
        }

        var AudioRendererInfo = {
            content: audio.ContentType.CONTENT_TYPE_RINGTONE,
            usage: audio.StreamUsage.STREAM_USAGE_NOTIFICATION_RINGTONE,
            rendererFlags: 1
        }

        var AudioRendererOptions = {
            streamInfo: AudioStreamInfo,
            rendererInfo: AudioRendererInfo
        }
        var resultFlag = true;
        var audioRen;

        await audio.createAudioRenderer(AudioRendererOptions).then(async function (data) {
            audioRen = data;
            console.info('AudioFrameworkRendererChangeLog: AudioRender Created : Success : Stream Type: SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRendererChangeLog: AudioRender Created : ERROR : '+err.message);
        });

        await audioRen.start().then(async function () {
            console.info('AudioFrameworkRendererChangeLog: renderInstant started :SUCCESS ');
        }).catch((err) => {
            console.info('AudioFrameworkRendererChangeLog: renderInstant start :ERROR : '+err.message);
        });

        audioStreamManager.on('audioRendererChange',  (AudioRendererChangeInfoArray) => {
            for (let i=0;i<AudioRendererChangeInfoArray.length;i++) {
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-OFF-003] ######### RendererChange on is called for element ' + i + ' ##########');
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-OFF-003] StreamId for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].streamId);
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-OFF-003] ClientUid for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].clientUid);
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-OFF-003] RendererInfo Content for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererInfo.content);
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-OFF-003] RendererInfo Stream Usage for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererInfo.usage);
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-OFF-003] RendererInfo Flags for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererInfo.rendererFlags);
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-OFF-003] RendererState for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererState);
                resultFlag = false;
            }
        });
        await sleep (500);

        audioStreamManager.off('audioRendererChange');
        await sleep(100);
        console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-OFF-003] ######### RendererChange Off is called #########');
        console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-OFF-003] ResultFlag is : ' + resultFlag);

        await audioRen.stop().then(async function () {
            console.info('AudioFrameworkRendererChangeLog: Renderer stopped : SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRendererChangeLog: Renderer stop:ERROR : '+err.message);
        });

        await audioRen.release().then(async function () {
            console.info('AudioFrameworkRendererChangeLog: Renderer release : SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRendererChangeLog: Renderer release :ERROR : '+err.message);
        });

        expect(resultFlag).assertTrue();
        done();
    })

    /* *
           * @tc.number    : SUB_AUDIO_OFF_RENDERER_CHANGE_004
           * @tc.name      : AudioRendererChange - OFF_STATE_RELEASED
           * @tc.desc      : AudioRendererChange - OFF_STATE_RELEASED
           * @tc.size      : MEDIUM
           * @tc.type      : Function
           * @tc.level     : Level 0
       */
    it('SUB_AUDIO_OFF_RENDERER_CHANGE_004', 0, async function (done) {

        var AudioStreamInfo = {
            samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_8000,
            channels: audio.AudioChannel.CHANNEL_1,
            sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
            encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
        }

        var AudioRendererInfo = {
            content: audio.ContentType.CONTENT_TYPE_UNKNOWN,
            usage: audio.StreamUsage.STREAM_USAGE_MEDIA,
            rendererFlags: 1
        }

        var AudioRendererOptions = {
            streamInfo: AudioStreamInfo,
            rendererInfo: AudioRendererInfo
        }

        var resultFlag = true;
        var audioRen;

        await audio.createAudioRenderer(AudioRendererOptions).then(async function (data) {
            audioRen = data;
            console.info('AudioFrameworkRendererChangeLog: AudioRender Created : Success : Stream Type: SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRendererChangeLog: AudioRender Created : ERROR : '+err.message);
        });

        await audioRen.start().then(async function () {
            console.info('AudioFrameworkRendererChangeLog: renderInstant started :SUCCESS ');
        }).catch((err) => {
            console.info('AudioFrameworkRendererChangeLog: renderInstant start :ERROR : '+err.message);
        });

        await audioRen.stop().then(async function () {
            console.info('AudioFrameworkRendererChangeLog: Renderer stopped : SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRendererChangeLog: Renderer stop:ERROR : '+err.message);
        });

        audioStreamManager.on('audioRendererChange',  (AudioRendererChangeInfoArray) => {
            for (let i=0;i<AudioRendererChangeInfoArray.length;i++) {
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-OFF-004] ######### RendererChange on is called for element ' + i + ' ##########');
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-OFF-004] StreamId for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].streamId);
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-OFF-004] ClientUid for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].clientUid);
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-OFF-004] RendererInfo Content for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererInfo.content);
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-OFF-004] RendererInfo Stream Usage for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererInfo.usage);
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-OFF-004] RendererInfo Flags for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererInfo.rendererFlags);
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-OFF-004] RendererState for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererState);
                resultFlag = false;
            }
        });
        await sleep (500);

        audioStreamManager.off('audioRendererChange');
        await sleep(100);
        console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-OFF-004] ######### RendererChange Off is called #########');
        console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-OFF-004] ResultFlag is : ' + resultFlag);

        await audioRen.release().then(async function () {
            console.info('AudioFrameworkRendererChangeLog: Renderer release : SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRendererChangeLog: Renderer release :ERROR : '+err.message);
        });

        expect(resultFlag).assertTrue();
        done();
    })

    /* *
           * @tc.number    : SUB_AUDIO_OFF_RENDERER_CHANGE_005
           * @tc.name      : AudioRendererChange - OFF_STATE_PAUSED
           * @tc.desc      : AudioRendererChange - OFF_STATE_PAUSED
           * @tc.size      : MEDIUM
           * @tc.type      : Function
           * @tc.level     : Level 0
       */
    it('SUB_AUDIO_OFF_RENDERER_CHANGE_005', 0, async function (done) {

        var AudioStreamInfo = {
            samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_8000,
            channels: audio.AudioChannel.CHANNEL_1,
            sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
            encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
        }

        var AudioRendererInfo = {
            content: audio.ContentType.CONTENT_TYPE_UNKNOWN,
            usage: audio.StreamUsage.STREAM_USAGE_MEDIA,
            rendererFlags: 1
        }

        var AudioRendererOptions = {
            streamInfo: AudioStreamInfo,
            rendererInfo: AudioRendererInfo
        }

        var resultFlag = true;
        var audioRen;

        await audio.createAudioRenderer(AudioRendererOptions).then(async function (data) {
            audioRen = data;
            console.info('AudioFrameworkRendererChangeLog: AudioRender Created : Success : Stream Type: SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRendererChangeLog: AudioRender Created : ERROR : '+err.message);
        });

        await audioRen.start().then(async function () {
            console.info('AudioFrameworkRendererChangeLog: renderInstant started :SUCCESS ');
        }).catch((err) => {
            console.info('AudioFrameworkRendererChangeLog: renderInstant start :ERROR : '+err.message);
        });

        audioStreamManagerCB.on('audioRendererChange',  (AudioRendererChangeInfoArray) => {
            for (let i=0;i<AudioRendererChangeInfoArray.length;i++) {
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-OFF-005] ######### RendererChange on is called for element ' + i + ' ##########');
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-OFF-005] StreamId for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].streamId);
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-OFF-005] ClientUid for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].clientUid);
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-OFF-005] RendererInfo Content for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererInfo.content);
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-OFF-005] RendererInfo Stream Usage for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererInfo.usage);
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-OFF-005] RendererInfo Flags for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererInfo.rendererFlags);
                console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-OFF-005] RendererState for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererState);
                resultFlag = false;
            }
        });
        await sleep (500);

        audioStreamManagerCB.off('audioRendererChange');
        await sleep(100);
        console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-OFF-005] ######### RendererChange Off is called #########');
        console.info('AudioFrameworkRendererChangeLog: [RENDERER-CHANGE-OFF-005] ResultFlag is : ' + resultFlag);

        await audioRen.pause().then(async function () {
            console.info('AudioFrameworkRendererChangeLog: renderInstant Pause :SUCCESS ');
        }).catch((err) => {
            console.info('AudioFrameworkRendererChangeLog: renderInstant Pause :ERROR : '+err.message);
        });

        await audioRen.stop().then(async function () {
            console.info('AudioFrameworkRendererChangeLog: Renderer stopped : SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRendererChangeLog: Renderer stop:ERROR : '+err.message);
        });

        await audioRen.release().then(async function () {
            console.info('AudioFrameworkRendererChangeLog: Renderer release : SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRendererChangeLog: Renderer release :ERROR : '+err.message);
        });

        expect(resultFlag).assertTrue();
        done();

    })
   
    /*         *
               * @tc.number    : SUB_AUDIO_GET_RENDERER_CHANGE_PROMISE_001
               * @tc.name      : AudioRendererChange - GET_STATE_PREPARED
               * @tc.desc      : AudioRendererChange - GET_STATE_PREPARED
               * @tc.size      : MEDIUM
               * @tc.type      : Function
               * @tc.level     : Level 0*/

    it('SUB_AUDIO_GET_RENDERER_CHANGE_PROMISE_001', 0, async function (done) {
        var audioCap ;
        var AudioStreamInfo = {
            samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_44100,
            channels: audio.AudioChannel.CHANNEL_2,
            sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
            encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
        }

        var AudioRendererInfo = {
            content: audio.ContentType.CONTENT_TYPE_RINGTONE,
            usage: audio.StreamUsage.STREAM_USAGE_NOTIFICATION_RINGTONE,
            rendererFlags: 1
        }

        var AudioRendererOptions = {
            streamInfo: AudioStreamInfo,
            rendererInfo: AudioRendererInfo
        }

        var resultFlag = false;
        audioStreamManager.on('audioRendererChange',  (AudioRendererChangeInfoArray) => {
            for (let i=0;i<AudioRendererChangeInfoArray.length;i++) {
				console.info('AudioFrameworkRendererChangeLog: [ON_GET_RENDERER_STATE_1_PROMISE] ######### RendererChange on is called for element ' + i + ' ##########');
                console.info('AudioFrameworkRendererChangeLog: [ON_GET_RENDERER_STATE_1_PROMISE] StreamId for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].streamId);
                console.info('AudioFrameworkRendererChangeLog: [ON_GET_RENDERER_STATE_1_PROMISE] ClientUid for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].clientUid);
                console.info('AudioFrameworkRendererChangeLog: [ON_GET_RENDERER_STATE_1_PROMISE] RendererInfo Content for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererInfo.content);
                console.info('AudioFrameworkRendererChangeLog: [ON_GET_RENDERER_STATE_1_PROMISE] RendererInfo Stream Usage for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererInfo.usage);
                console.info('AudioFrameworkRendererChangeLog: [ON_GET_RENDERER_STATE_1_PROMISE] RendererInfo Flags for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererInfo.rendererFlags);
                console.info('AudioFrameworkRendererChangeLog: [ON_GET_RENDERER_STATE_1_PROMISE] RendererState for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererState);
            }
        });
        await sleep (500);

        await audio.createAudioRenderer(AudioRendererOptions).then(async function (data) {
            audioCap = data;
            console.info('AudioFrameworkRecLog: AudioRenderer Created : Success : Stream Type: SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRecLog: AudioRenderer Created : ERROR : '+err.message);
        });

		await sleep(500);
	
		await audioStreamManager.getCurrentAudioRendererInfoArray().then( function (AudioRendererChangeInfoArray) {
			console.info('AudioFrameworkRendererChangeLog: [GET_RENDERER_STATE_1_PROMISE] ######### Get Promise is called ##########');
            if (AudioRendererChangeInfoArray!=null) {
                for (let i=0;i<AudioRendererChangeInfoArray.length;i++) {
					console.info('AudioFrameworkRendererChangeLog: [GET_RENDERER_STATE_1_PROMISE] StreamId for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].streamId);
					console.info('AudioFrameworkRendererChangeLog: [GET_RENDERER_STATE_1_PROMISE] ClientUid for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].clientUid);
					console.info('AudioFrameworkRendererChangeLog: [GET_RENDERER_STATE_1_PROMISE] RendererInfo Content for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererInfo.content);
					console.info('AudioFrameworkRendererChangeLog: [GET_RENDERER_STATE_1_PROMISE] RendererInfo Stream Usage for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererInfo.usage);
					console.info('AudioFrameworkRendererChangeLog: [GET_RENDERER_STATE_1_PROMISE] RendererInfo Flags for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererInfo.rendererFlags);
					console.info('AudioFrameworkRendererChangeLog: [GET_RENDERER_STATE_1_PROMISE] RendererState for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererState);
                    if (AudioRendererChangeInfoArray[i].rendererState == 1) {
                        resultFlag = true;
                        console.info('AudioFrameworkRendererChangeLog: [GET_RENDERER_STATE_1_PROMISE] Renderer State : '+AudioRendererChangeInfoArray[i].rendererState);
                    }
                }
            }
        }).catch((err) => {
            console.log('AudioFrameworkRendererChangeLog: getCurrentAudioRendererInfoArray :ERROR: '+err.message);
            resultFlag = false;
        });
		
        audioStreamManager.off('audioRendererChange');
        await sleep(100);
        console.info('AudioFrameworkRendererChangeLog: [GET_RENDERER_STATE_1_PROMISE] ######### RendererChange Off is called #########');
        
		await audioCap.release().then(async function () {
            console.info('AudioFrameworkRecLog: Renderer release : SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRecLog: Renderer release :ERROR : '+err.message);
        });
	
		expect(resultFlag).assertTrue();
        done();
    })

    /*                   *
               * @tc.number    : SUB_AUDIO_GET_RENDERER_CHANGE_PROMISE_002
               * @tc.name      : AudioRendererChange - GET_STATE_RUNNING
               * @tc.desc      : AudioRendererChange - GET_STATE_RUNNING
               * @tc.size      : MEDIUM
               * @tc.type      : Function
               * @tc.level     : Level 0
               * */


    it('SUB_AUDIO_GET_RENDERER_CHANGE_PROMISE_002', 0, async function (done) {

        var AudioStreamInfo = {
            samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_44100,
            channels: audio.AudioChannel.CHANNEL_2,
            sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
            encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
        }

        var AudioRendererInfo = {
            content: audio.ContentType.CONTENT_TYPE_RINGTONE,
            usage: audio.StreamUsage.STREAM_USAGE_NOTIFICATION_RINGTONE,
            rendererFlags: 1
        }

        var AudioRendererOptions = {
            streamInfo: AudioStreamInfo,
            rendererInfo: AudioRendererInfo
        }

        var resultFlag = false;

        var audioCap;

        await audio.createAudioRenderer(AudioRendererOptions).then(async function (data) {
            audioCap = data;
            console.info('AudioFrameworkRecLog: AudioRenderer Created : Success : Stream Type: SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRecLog: AudioRenderer Created : ERROR : '+err.message);
        });

		await sleep(500);
	
        audioStreamManagerCB.on('audioRendererChange',  (AudioRendererChangeInfoArray) => {
            for (let i=0;i<AudioRendererChangeInfoArray.length;i++) {
                console.info('AudioFrameworkRendererChangeLog: [ON_GET_RENDERER_STATE_2_PROMISE] ######### RendererChange on is called for element ' + i + ' ##########');
                console.info('AudioFrameworkRendererChangeLog: [ON_GET_RENDERER_STATE_2_PROMISE] StreamId for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].streamId);
                console.info('AudioFrameworkRendererChangeLog: [ON_GET_RENDERER_STATE_2_PROMISE] ClientUid for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].clientUid);
                console.info('AudioFrameworkRendererChangeLog: [ON_GET_RENDERER_STATE_2_PROMISE] RendererInfo Content for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererInfo.content);
                console.info('AudioFrameworkRendererChangeLog: [ON_GET_RENDERER_STATE_2_PROMISE] RendererInfo Stream Usage for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererInfo.usage);
                console.info('AudioFrameworkRendererChangeLog: [ON_GET_RENDERER_STATE_2_PROMISE] RendererInfo Flags for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererInfo.rendererFlags);
                console.info('AudioFrameworkRendererChangeLog: [ON_GET_RENDERER_STATE_2_PROMISE] RendererState for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererState);
            }
        });

        await sleep (500);
        await audioCap.start().then(async function () {
            console.info('AudioFrameworkRecLog: Renderer started :SUCCESS ');
        }).catch((err) => {
            console.info('AudioFrameworkRecLog: Renderer start :ERROR : '+err.message);
        });

		await sleep(500);
		
		await audioStreamManagerCB.getCurrentAudioRendererInfoArray().then( function (AudioRendererChangeInfoArray) {
			console.info('AudioFrameworkRendererChangeLog: [GET_RENDERER_STATE_2_PROMISE] ######### Get Promise is called ##########');
            if (AudioRendererChangeInfoArray!=null) {
                for (let i=0;i<AudioRendererChangeInfoArray.length;i++) {
					console.info('AudioFrameworkRendererChangeLog: [GET_RENDERER_STATE_2_PROMISE] StreamId for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].streamId);
					console.info('AudioFrameworkRendererChangeLog: [GET_RENDERER_STATE_2_PROMISE] ClientUid for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].clientUid);
					console.info('AudioFrameworkRendererChangeLog: [GET_RENDERER_STATE_2_PROMISE] RendererInfo Content for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererInfo.content);
					console.info('AudioFrameworkRendererChangeLog: [GET_RENDERER_STATE_2_PROMISE] RendererInfo Stream Usage for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererInfo.usage);
					console.info('AudioFrameworkRendererChangeLog: [GET_RENDERER_STATE_2_PROMISE] RendererInfo Flags for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererInfo.rendererFlags);
					console.info('AudioFrameworkRendererChangeLog: [GET_RENDERER_STATE_2_PROMISE] RendererState for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererState);
                    if (AudioRendererChangeInfoArray[i].rendererState == 2) {
                        resultFlag = true;
                        console.info('AudioFrameworkRendererChangeLog: [GET_RENDERER_STATE_2_PROMISE] Renderer State : '+AudioRendererChangeInfoArray[i].rendererState);
                    }
                }
            }
        }).catch((err) => {
            console.log('AudioFrameworkRendererChangeLog: getCurrentAudioRendererInfoArray :ERROR: '+err.message);
            resultFlag = false;
        });
		
        audioStreamManagerCB.off('audioRendererChange');
        await sleep(100);
        console.info('AudioFrameworkRendererChangeLog: [GET_RENDERER_STATE_2_PROMISE] ######### RendererChange Off is called #########');

        await audioCap.release().then(async function () {
            console.info('AudioFrameworkRecLog: Renderer release : SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRecLog: Renderer release :ERROR : '+err.message);
        });

        expect(resultFlag).assertTrue();
        done();

    })

    /*                   *
               * @tc.number    : SUB_AUDIO_GET_RENDERER_CHANGE_PROMISE_003
               * @tc.name      : AudioRendererChange - GET_STATE_STOPPED
               * @tc.desc      : AudioRendererChange - GET_STATE_STOPPED
               * @tc.size      : MEDIUM
               * @tc.type      : Function
               * @tc.level     : Level 0
               * */


    it('SUB_AUDIO_GET_RENDERER_CHANGE_PROMISE_003', 0, async function (done) {

        var AudioStreamInfo = {
            samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_44100,
            channels: audio.AudioChannel.CHANNEL_2,
            sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
            encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
        }

        var AudioRendererInfo = {
            content: audio.ContentType.CONTENT_TYPE_RINGTONE,
            usage: audio.StreamUsage.STREAM_USAGE_NOTIFICATION_RINGTONE,
            rendererFlags: 1
        }

        var AudioRendererOptions = {
            streamInfo: AudioStreamInfo,
            rendererInfo: AudioRendererInfo
        }

        var resultFlag = false;

        var audioCap;

        await audio.createAudioRenderer(AudioRendererOptions).then(async function (data) {
            audioCap = data;
            console.info('AudioFrameworkRecLog: AudioRenderer Created : Success : Stream Type: SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRecLog: AudioRenderer Created : ERROR : '+err.message);
        });
		
        await audioCap.start().then(async function () {
            console.info('AudioFrameworkRecLog: Renderer started :SUCCESS ');
        }).catch((err) => {
            console.info('AudioFrameworkRecLog: Renderer start :ERROR : '+err.message);
        });

		await sleep(500);
		
        audioStreamManager.on('audioRendererChange',  (AudioRendererChangeInfoArray) => {
            for (let i=0;i<AudioRendererChangeInfoArray.length;i++) {
				console.info('AudioFrameworkRendererChangeLog: [ON_GET_RENDERER_STATE_3_PROMISE] ######### RendererChange on is called for element ' + i + ' ##########');
				console.info('AudioFrameworkRendererChangeLog: [ON_GET_RENDERER_STATE_3_PROMISE] StreamId for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].streamId);
				console.info('AudioFrameworkRendererChangeLog: [ON_GET_RENDERER_STATE_3_PROMISE] ClientUid for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].clientUid);
				console.info('AudioFrameworkRendererChangeLog: [ON_GET_RENDERER_STATE_3_PROMISE] RendererInfo Content for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererInfo.content);
				console.info('AudioFrameworkRendererChangeLog: [ON_GET_RENDERER_STATE_3_PROMISE] RendererInfo Stream Usage for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererInfo.usage);
				console.info('AudioFrameworkRendererChangeLog: [ON_GET_RENDERER_STATE_3_PROMISE] RendererInfo Flags for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererInfo.rendererFlags);
				console.info('AudioFrameworkRendererChangeLog: [ON_GET_RENDERER_STATE_3_PROMISE] RendererState for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererState);
            }
        });

        await sleep (500);

        await audioCap.stop().then(async function () {
            console.info('AudioFrameworkRecLog: Renderer stopped : SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRecLog: Renderer stop:ERROR : '+err.message);
        });

		await sleep(500);
		
		await audioStreamManager.getCurrentAudioRendererInfoArray().then( function (AudioRendererChangeInfoArray) {
			console.info('AudioFrameworkRendererChangeLog: [GET_RENDERER_STATE_3_PROMISE] ######### Get Promise is called ##########');
            if (AudioRendererChangeInfoArray!=null) {
                for (let i=0;i<AudioRendererChangeInfoArray.length;i++) {
					console.info('AudioFrameworkRendererChangeLog: [GET_RENDERER_STATE_3_PROMISE] StreamId for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].streamId);
					console.info('AudioFrameworkRendererChangeLog: [GET_RENDERER_STATE_3_PROMISE] ClientUid for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].clientUid);
					console.info('AudioFrameworkRendererChangeLog: [GET_RENDERER_STATE_3_PROMISE] RendererInfo Content for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererInfo.content);
					console.info('AudioFrameworkRendererChangeLog: [GET_RENDERER_STATE_3_PROMISE] RendererInfo Stream Usage for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererInfo.usage);
					console.info('AudioFrameworkRendererChangeLog: [GET_RENDERER_STATE_3_PROMISE] RendererInfo Flags for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererInfo.rendererFlags);
					console.info('AudioFrameworkRendererChangeLog: [GET_RENDERER_STATE_3_PROMISE] RendererState for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererState);
                    if (AudioRendererChangeInfoArray[i].rendererState == 3) {
                        resultFlag = true;
                        console.info('AudioFrameworkRendererChangeLog: [GET_RENDERER_STATE_3_PROMISE] Renderer State : '+AudioRendererChangeInfoArray[i].rendererState);
                    }
                }
            }
        }).catch((err) => {
            console.log('AudioFrameworkRendererChangeLog: getCurrentAudioRendererInfoArray :ERROR: '+err.message);
            resultFlag = false;
        });
		
        audioStreamManager.off('audioRendererChange');
        await sleep(100);
        console.info('AudioFrameworkRendererChangeLog: [GET_RENDERER_STATE_3_PROMISE] ######### RendererChange Off is called #########');

        await audioCap.release().then(async function () {
            console.info('AudioFrameworkRecLog: Renderer release : SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRecLog: Renderer release :ERROR : '+err.message);
        });

        expect(resultFlag).assertTrue();
        done();

    })
	
	/* *
    * @tc.number    : SUB_AUDIO_GET_RENDERER_CHANGE_PROMISE_004
    * @tc.name      : AudioRendererChange - GET_STATE_PAUSED
    * @tc.desc      : AudioRendererChange - GET_STATE_PAUSED
    * @tc.size      : MEDIUM
    * @tc.type      : Function
    * @tc.level     : Level 0
    */
    it('SUB_AUDIO_GET_RENDERER_CHANGE_PROMISE_004', 0,async function (done) {

        var AudioStreamInfo = {
            samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
            channels: audio.AudioChannel.CHANNEL_2,
            sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE,
            encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
        }

        var AudioRendererInfo = {
            content: audio.ContentType.CONTENT_TYPE_RINGTONE,
            usage: audio.StreamUsage.STREAM_USAGE_NOTIFICATION_RINGTONE,
            rendererFlags: 1
        }

        var AudioRendererOptions = {
            streamInfo: AudioStreamInfo,
            rendererInfo: AudioRendererInfo
        }

        var resultFlag = false;

        var audioRen;

        await audio.createAudioRenderer(AudioRendererOptions).then(async function (data) {
            audioRen = data;
            console.info('AudioFrameworkRendererChangeLog: AudioRender Created : Success : Stream Type: SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRendererChangeLog: AudioRender Created : ERROR : '+err.message);
        });

        await audioRen.start().then(async function () {
            console.info('AudioFrameworkRendererChangeLog: renderInstant started :SUCCESS ');
        }).catch((err) => {
            console.info('AudioFrameworkRendererChangeLog: renderInstant start :ERROR : '+err.message);
        });

         audioStreamManager.on('audioRendererChange',  (AudioRendererChangeInfoArray) => {
            for (let i=0;i<AudioRendererChangeInfoArray.length;i++) {
                console.info('AudioFrameworkRendererChangeLog: [ON_GET_RENDERER_STATE_5_PROMISE] ######### RendererChange on is called for element ' + i + ' ##########');
				console.info('AudioFrameworkRendererChangeLog: [ON_GET_RENDERER_STATE_5_PROMISE] StreamId for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].streamId);
				console.info('AudioFrameworkRendererChangeLog: [ON_GET_RENDERER_STATE_5_PROMISE] ClientUid for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].clientUid);
				console.info('AudioFrameworkRendererChangeLog: [ON_GET_RENDERER_STATE_5_PROMISE] RendererInfo Content for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererInfo.content);
				console.info('AudioFrameworkRendererChangeLog: [ON_GET_RENDERER_STATE_5_PROMISE] RendererInfo Stream Usage for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererInfo.usage);
				console.info('AudioFrameworkRendererChangeLog: [ON_GET_RENDERER_STATE_5_PROMISE] RendererInfo Flags for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererInfo.rendererFlags);
				console.info('AudioFrameworkRendererChangeLog: [ON_GET_RENDERER_STATE_5_PROMISE] RendererState for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererState);
            }
        });
		
        await sleep (500);

        await audioRen.pause().then(async function () {
            console.info('AudioFrameworkRendererChangeLog: renderInstant Pause :SUCCESS ');
        }).catch((err) => {
            console.info('AudioFrameworkRendererChangeLog: renderInstant Pause :ERROR : '+err.message);
        });

		await sleep (500);
		
		await audioStreamManager.getCurrentAudioRendererInfoArray().then( function (AudioRendererChangeInfoArray) {
			console.info('AudioFrameworkRendererChangeLog: [GET_RENDERER_STATE_5_PROMISE] ######### Get Promise is called ##########');
            if (AudioRendererChangeInfoArray!=null) {
                for (let i=0;i<AudioRendererChangeInfoArray.length;i++) {
					console.info('AudioFrameworkRendererChangeLog: [GET_RENDERER_STATE_5_PROMISE] StreamId for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].streamId);
					console.info('AudioFrameworkRendererChangeLog: [GET_RENDERER_STATE_5_PROMISE] ClientUid for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].clientUid);
					console.info('AudioFrameworkRendererChangeLog: [GET_RENDERER_STATE_5_PROMISE] RendererInfo Content for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererInfo.content);
					console.info('AudioFrameworkRendererChangeLog: [GET_RENDERER_STATE_5_PROMISE] RendererInfo Stream Usage for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererInfo.usage);
					console.info('AudioFrameworkRendererChangeLog: [GET_RENDERER_STATE_5_PROMISE] RendererInfo Flags for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererInfo.rendererFlags);
					console.info('AudioFrameworkRendererChangeLog: [GET_RENDERER_STATE_5_PROMISE] RendererState for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererState);
                    if (AudioRendererChangeInfoArray[i].rendererState == 5) {
                        resultFlag = true;
                        console.info('AudioFrameworkRendererChangeLog: [GET_RENDERER_STATE_5_PROMISE] Renderer State : '+AudioRendererChangeInfoArray[i].rendererState);
                    }
                }
            }
        }).catch((err) => {
            console.log('AudioFrameworkRendererChangeLog: getCurrentAudioRendererInfoArray :ERROR: '+err.message);
            resultFlag = false;
        });
		
        audioStreamManager.off('audioRendererChange');
        await sleep(100);
        console.info('AudioFrameworkRendererChangeLog: [GET_RENDERER_STATE_5_PROMISE] ######### RendererChange Off is called #########');

        await audioRen.stop().then(async function () {
            console.info('AudioFrameworkRendererChangeLog: Renderer stopped : SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRendererChangeLog: Renderer stop:ERROR : '+err.message);
        });

        await audioRen.release().then(async function () {
            console.info('AudioFrameworkRendererChangeLog: Renderer release : SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRendererChangeLog: Renderer release :ERROR : '+err.message);
        });

        expect(resultFlag).assertTrue();
        done();
    })


	/*         *
               * @tc.number    : SUB_AUDIO_GET_RENDERER_CHANGE_CALLBACK_001
               * @tc.name      : AudioRendererChange - GET_STATE_PREPARED
               * @tc.desc      : AudioRendererChange - GET_STATE_PREPARED
               * @tc.size      : MEDIUM
               * @tc.type      : Function
               * @tc.level     : Level 0*/

    it('SUB_AUDIO_GET_RENDERER_CHANGE_CALLBACK_001', 0, async function (done) {
        var audioCap ;
        var AudioStreamInfo = {
            samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_44100,
            channels: audio.AudioChannel.CHANNEL_2,
            sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
            encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
        }

        var AudioRendererInfo = {
            content: audio.ContentType.CONTENT_TYPE_RINGTONE,
            usage: audio.StreamUsage.STREAM_USAGE_NOTIFICATION_RINGTONE,
            rendererFlags: 1
        }

        var AudioRendererOptions = {
            streamInfo: AudioStreamInfo,
            rendererInfo: AudioRendererInfo
        }

        var resultFlag = false;
        audioStreamManager.on('audioRendererChange',  (AudioRendererChangeInfoArray) => {
            for (let i=0;i<AudioRendererChangeInfoArray.length;i++) {
                console.info('AudioFrameworkRendererChangeLog: [ON_GET_RENDERER_STATE_1_CALLBACK] ######### RendererChange on is called for element ' + i + ' ##########');
				console.info('AudioFrameworkRendererChangeLog: [ON_GET_RENDERER_STATE_1_CALLBACK] StreamId for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].streamId);
				console.info('AudioFrameworkRendererChangeLog: [ON_GET_RENDERER_STATE_1_CALLBACK] ClientUid for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].clientUid);
				console.info('AudioFrameworkRendererChangeLog: [ON_GET_RENDERER_STATE_1_CALLBACK] RendererInfo Content for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererInfo.content);
				console.info('AudioFrameworkRendererChangeLog: [ON_GET_RENDERER_STATE_1_CALLBACK] RendererInfo Stream Usage for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererInfo.usage);
				console.info('AudioFrameworkRendererChangeLog: [ON_GET_RENDERER_STATE_1_CALLBACK] RendererInfo Flags for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererInfo.rendererFlags);
				console.info('AudioFrameworkRendererChangeLog: [ON_GET_RENDERER_STATE_1_CALLBACK] RendererState for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererState);
            }
        });
        await sleep (500);

        await audio.createAudioRenderer(AudioRendererOptions).then(async function (data) {
            audioCap = data;
            console.info('AudioFrameworkRecLog: AudioRenderer Created : Success : Stream Type: SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRecLog: AudioRenderer Created : ERROR : '+err.message);
        });

		await sleep(500);
	
		audioStreamManager.getCurrentAudioRendererInfoArray(async (err, AudioRendererChangeInfoArray) => {
            console.info('AudioFrameworkRendererChangeLog: [GET_RENDERER_STATE_1_CALLBACK] **** Get Callback Called ****');
            await sleep(100);
            if (err) {
                console.log('AudioFrameworkRendererChangeLog: getCurrentAudioRendererInfoArray :ERROR: '+err.message);
                resultFlag = false;
            }
            else {
                if (AudioRendererChangeInfoArray !=null) {
                    for (let i=0;i<AudioRendererChangeInfoArray.length;i++) {
						console.info('AudioFrameworkRendererChangeLog: [GET_RENDERER_STATE_1_CALLBACK] StreamId for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].streamId);
						console.info('AudioFrameworkRendererChangeLog: [GET_RENDERER_STATE_1_CALLBACK] ClientUid for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].clientUid);
						console.info('AudioFrameworkRendererChangeLog: [GET_RENDERER_STATE_1_CALLBACK] RendererInfo Content for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererInfo.content);
						console.info('AudioFrameworkRendererChangeLog: [GET_RENDERER_STATE_1_CALLBACK] RendererInfo Stream Usage for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererInfo.usage);
						console.info('AudioFrameworkRendererChangeLog: [GET_RENDERER_STATE_1_CALLBACK] RendererInfo Flags for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererInfo.rendererFlags);
						console.info('AudioFrameworkRendererChangeLog: [GET_RENDERER_STATE_1_CALLBACK] RendererState for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererState);
                        if (AudioRendererChangeInfoArray[i].rendererState ==1) {
                            resultFlag = true;
                            console.info('AudioFrameworkRendererChangeLog: [GET_RENDERER_STATE_1_CALLBACK] RendererState : '+ AudioRendererChangeInfoArray[i].rendererState);
                        }
                    }
                }
            }
        });

        await sleep(1000);
		
        audioStreamManager.off('audioRendererChange');
        await sleep(100);
        console.info('AudioFrameworkRendererChangeLog: [GET_RENDERER_STATE_1_CALLBACK] ######### RendererChange Off is called #########');
        
		await audioCap.release().then(async function () {
            console.info('AudioFrameworkRecLog: Renderer release : SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRecLog: Renderer release :ERROR : '+err.message);
        });
	
		expect(resultFlag).assertTrue();
        done();
    })

    /*                   *
               * @tc.number    : SUB_AUDIO_GET_RENDERER_CHANGE_CALLBACK_002
               * @tc.name      : AudioRendererChange - GET_STATE_RUNNING
               * @tc.desc      : AudioRendererChange - GET_STATE_RUNNING
               * @tc.size      : MEDIUM
               * @tc.type      : Function
               * @tc.level     : Level 0
               * */


    it('SUB_AUDIO_GET_RENDERER_CHANGE_CALLBACK_002', 0, async function (done) {

        var AudioStreamInfo = {
            samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_44100,
            channels: audio.AudioChannel.CHANNEL_2,
            sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
            encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
        }

        var AudioRendererInfo = {
            content: audio.ContentType.CONTENT_TYPE_RINGTONE,
            usage: audio.StreamUsage.STREAM_USAGE_NOTIFICATION_RINGTONE,
            rendererFlags: 1
        }

        var AudioRendererOptions = {
            streamInfo: AudioStreamInfo,
            rendererInfo: AudioRendererInfo
        }

        var resultFlag = false;

        var audioCap;

        await audio.createAudioRenderer(AudioRendererOptions).then(async function (data) {
            audioCap = data;
            console.info('AudioFrameworkRecLog: AudioRenderer Created : Success : Stream Type: SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRecLog: AudioRenderer Created : ERROR : '+err.message);
        });

		await sleep(500);
	
        audioStreamManagerCB.on('audioRendererChange',  (AudioRendererChangeInfoArray) => {
            for (let i=0;i<AudioRendererChangeInfoArray.length;i++) {
                console.info('AudioFrameworkRendererChangeLog: [ON_GET_RENDERER_STATE_2_CALLBACK] ######### RendererChange on is called for element ' + i + ' ##########');
				console.info('AudioFrameworkRendererChangeLog: [ON_GET_RENDERER_STATE_2_CALLBACK] StreamId for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].streamId);
				console.info('AudioFrameworkRendererChangeLog: [ON_GET_RENDERER_STATE_2_CALLBACK] ClientUid for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].clientUid);
				console.info('AudioFrameworkRendererChangeLog: [ON_GET_RENDERER_STATE_2_CALLBACK] RendererInfo Content for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererInfo.content);
				console.info('AudioFrameworkRendererChangeLog: [ON_GET_RENDERER_STATE_2_CALLBACK] RendererInfo Stream Usage for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererInfo.usage);
				console.info('AudioFrameworkRendererChangeLog: [ON_GET_RENDERER_STATE_2_CALLBACK] RendererInfo Flags for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererInfo.rendererFlags);
				console.info('AudioFrameworkRendererChangeLog: [ON_GET_RENDERER_STATE_2_CALLBACK] RendererState for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererState);
            }
        });

        await sleep (500);
        await audioCap.start().then(async function () {
            console.info('AudioFrameworkRecLog: Renderer started :SUCCESS ');
        }).catch((err) => {
            console.info('AudioFrameworkRecLog: Renderer start :ERROR : '+err.message);
        });

		await sleep(500);
		
		audioStreamManagerCB.getCurrentAudioRendererInfoArray(async (err, AudioRendererChangeInfoArray) => {
            console.info('AudioFrameworkRendererChangeLog: [GET_RENDERER_STATE_2_CALLBACK] **** Get Callback Called ****');
            await sleep(100);
            if (err) {
                console.log('AudioFrameworkRendererChangeLog: getCurrentAudioRendererInfoArray :ERROR: '+err.message);
                resultFlag = false;
            }
            else {
                if (AudioRendererChangeInfoArray !=null) {
                    for (let i=0;i<AudioRendererChangeInfoArray.length;i++) {
						console.info('AudioFrameworkRendererChangeLog: [GET_RENDERER_STATE_2_CALLBACK] StreamId for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].streamId);
						console.info('AudioFrameworkRendererChangeLog: [GET_RENDERER_STATE_2_CALLBACK] ClientUid for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].clientUid);
						console.info('AudioFrameworkRendererChangeLog: [GET_RENDERER_STATE_2_CALLBACK] RendererInfo Content for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererInfo.content);
						console.info('AudioFrameworkRendererChangeLog: [GET_RENDERER_STATE_2_CALLBACK] RendererInfo Stream Usage for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererInfo.usage);
						console.info('AudioFrameworkRendererChangeLog: [GET_RENDERER_STATE_2_CALLBACK] RendererInfo Flags for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererInfo.rendererFlags);
						console.info('AudioFrameworkRendererChangeLog: [GET_RENDERER_STATE_2_CALLBACK] RendererState for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererState);
                        if (AudioRendererChangeInfoArray[i].rendererState ==2) {
                            resultFlag = true;
                            console.info('AudioFrameworkRendererChangeLog: [GET_RENDERER_STATE_2_CALLBACK] RendererState : '+ AudioRendererChangeInfoArray[i].rendererState);
                        }
                    }
                }
            }
        });

        await sleep(1000);
		
        audioStreamManagerCB.off('audioRendererChange');
        await sleep(100);
        console.info('AudioFrameworkRendererChangeLog: [GET_RENDERER_STATE_2_CALLBACK] ######### RendererChange Off is called #########');

        await audioCap.release().then(async function () {
            console.info('AudioFrameworkRecLog: Renderer release : SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRecLog: Renderer release :ERROR : '+err.message);
        });

        expect(resultFlag).assertTrue();
        done();

    })

    /*                   *
               * @tc.number    : SUB_AUDIO_GET_RENDERER_CHANGE_CALLBACK_003
               * @tc.name      : AudioRendererChange - GET_STATE_STOPPED
               * @tc.desc      : AudioRendererChange - GET_STATE_STOPPED
               * @tc.size      : MEDIUM
               * @tc.type      : Function
               * @tc.level     : Level 0
               * */


    it('SUB_AUDIO_GET_RENDERER_CHANGE_CALLBACK_003', 0, async function (done) {

        var AudioStreamInfo = {
            samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_44100,
            channels: audio.AudioChannel.CHANNEL_2,
            sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
            encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
        }

        var AudioRendererInfo = {
            content: audio.ContentType.CONTENT_TYPE_RINGTONE,
            usage: audio.StreamUsage.STREAM_USAGE_NOTIFICATION_RINGTONE,
            rendererFlags: 1
        }

        var AudioRendererOptions = {
            streamInfo: AudioStreamInfo,
            rendererInfo: AudioRendererInfo
        }

        var resultFlag = false;

        var audioCap;

        await audio.createAudioRenderer(AudioRendererOptions).then(async function (data) {
            audioCap = data;
            console.info('AudioFrameworkRecLog: AudioRenderer Created : Success : Stream Type: SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRecLog: AudioRenderer Created : ERROR : '+err.message);
        });
		
        await audioCap.start().then(async function () {
            console.info('AudioFrameworkRecLog: Renderer started :SUCCESS ');
        }).catch((err) => {
            console.info('AudioFrameworkRecLog: Renderer start :ERROR : '+err.message);
        });

		await sleep(500);
		
        audioStreamManager.on('audioRendererChange',  (AudioRendererChangeInfoArray) => {
            for (let i=0;i<AudioRendererChangeInfoArray.length;i++) {
				console.info('AudioFrameworkRendererChangeLog: [ON_GET_RENDERER_STATE_3_CALLBACK] ######### RendererChange on is called for element ' + i + ' ##########');
				console.info('AudioFrameworkRendererChangeLog: [ON_GET_RENDERER_STATE_3_CALLBACK] StreamId for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].streamId);
				console.info('AudioFrameworkRendererChangeLog: [ON_GET_RENDERER_STATE_3_CALLBACK] ClientUid for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].clientUid);
				console.info('AudioFrameworkRendererChangeLog: [ON_GET_RENDERER_STATE_3_CALLBACK] RendererInfo Content for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererInfo.content);
				console.info('AudioFrameworkRendererChangeLog: [ON_GET_RENDERER_STATE_3_CALLBACK] RendererInfo Stream Usage for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererInfo.usage);
				console.info('AudioFrameworkRendererChangeLog: [ON_GET_RENDERER_STATE_3_CALLBACK] RendererInfo Flags for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererInfo.rendererFlags);
				console.info('AudioFrameworkRendererChangeLog: [ON_GET_RENDERER_STATE_3_CALLBACK] RendererState for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererState);
            }
        });

        await sleep (500);

        await audioCap.stop().then(async function () {
            console.info('AudioFrameworkRecLog: Renderer stopped : SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRecLog: Renderer stop:ERROR : '+err.message);
        });

		await sleep(500);
		
		audioStreamManager.getCurrentAudioRendererInfoArray(async (err, AudioRendererChangeInfoArray) => {
            console.info('AudioFrameworkRendererChangeLog: [GET_RENDERER_STATE_3_CALLBACK] **** Get Callback Called ****');
            await sleep(100);
            if (err) {
                console.log('AudioFrameworkRendererChangeLog: getCurrentAudioRendererInfoArray :ERROR: '+err.message);
                resultFlag = false;
            }
            else {
                if (AudioRendererChangeInfoArray !=null) {
                    for (let i=0;i<AudioRendererChangeInfoArray.length;i++) {
						console.info('AudioFrameworkRendererChangeLog: [GET_RENDERER_STATE_3_CALLBACK] StreamId for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].streamId);
						console.info('AudioFrameworkRendererChangeLog: [GET_RENDERER_STATE_3_CALLBACK] ClientUid for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].clientUid);
						console.info('AudioFrameworkRendererChangeLog: [GET_RENDERER_STATE_3_CALLBACK] RendererInfo Content for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererInfo.content);
						console.info('AudioFrameworkRendererChangeLog: [GET_RENDERER_STATE_3_CALLBACK] RendererInfo Stream Usage for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererInfo.usage);
						console.info('AudioFrameworkRendererChangeLog: [GET_RENDERER_STATE_3_CALLBACK] RendererInfo Flags for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererInfo.rendererFlags);
						console.info('AudioFrameworkRendererChangeLog: [GET_RENDERER_STATE_3_CALLBACK] RendererState for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererState);
                        if (AudioRendererChangeInfoArray[i].rendererState ==3) {
                            resultFlag = true;
                            console.info('AudioFrameworkRendererChangeLog: [GET_RENDERER_STATE_3_CALLBACK] RendererState : '+ AudioRendererChangeInfoArray[i].rendererState);
                        }
                    }
                }
            }
        });

        await sleep(1000);
		
        audioStreamManager.off('audioRendererChange');
        await sleep(100);
        console.info('AudioFrameworkRendererChangeLog: [GET_RENDERER_STATE_3_CALLBACK] ######### RendererChange Off is called #########');

        await audioCap.release().then(async function () {
            console.info('AudioFrameworkRecLog: Renderer release : SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRecLog: Renderer release :ERROR : '+err.message);
        });

        expect(resultFlag).assertTrue();
        done();

    })
	
	/* *
    * @tc.number    : SUB_AUDIO_GET_RENDERER_CHANGE_CALLBACK_004
    * @tc.name      : AudioRendererChange - GET_STATE_PAUSED
    * @tc.desc      : AudioRendererChange - GET_STATE_PAUSED
    * @tc.size      : MEDIUM
    * @tc.type      : Function
    * @tc.level     : Level 0
    */
    it('SUB_AUDIO_GET_RENDERER_CHANGE_CALLBACK_004', 0,async function (done) {

        var AudioStreamInfo = {
            samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
            channels: audio.AudioChannel.CHANNEL_2,
            sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S32LE,
            encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
        }

        var AudioRendererInfo = {
            content: audio.ContentType.CONTENT_TYPE_RINGTONE,
            usage: audio.StreamUsage.STREAM_USAGE_NOTIFICATION_RINGTONE,
            rendererFlags: 1
        }

        var AudioRendererOptions = {
            streamInfo: AudioStreamInfo,
            rendererInfo: AudioRendererInfo
        }

        var resultFlag = false;

        var audioRen;

        await audio.createAudioRenderer(AudioRendererOptions).then(async function (data) {
            audioRen = data;
            console.info('AudioFrameworkRendererChangeLog: AudioRender Created : Success : Stream Type: SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRendererChangeLog: AudioRender Created : ERROR : '+err.message);
        });

        await audioRen.start().then(async function () {
            console.info('AudioFrameworkRendererChangeLog: renderInstant started :SUCCESS ');
        }).catch((err) => {
            console.info('AudioFrameworkRendererChangeLog: renderInstant start :ERROR : '+err.message);
        });

         audioStreamManager.on('audioRendererChange',  (AudioRendererChangeInfoArray) => {
            for (let i=0;i<AudioRendererChangeInfoArray.length;i++) {
                console.info('AudioFrameworkRendererChangeLog: [ON_GET_RENDERER_STATE_5_CALLBACK] ######### RendererChange on is called for element ' + i + ' ##########');
				console.info('AudioFrameworkRendererChangeLog: [ON_GET_RENDERER_STATE_5_CALLBACK] StreamId for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].streamId);
				console.info('AudioFrameworkRendererChangeLog: [ON_GET_RENDERER_STATE_5_CALLBACK] ClientUid for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].clientUid);
				console.info('AudioFrameworkRendererChangeLog: [ON_GET_RENDERER_STATE_5_CALLBACK] RendererInfo Content for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererInfo.content);
				console.info('AudioFrameworkRendererChangeLog: [ON_GET_RENDERER_STATE_5_CALLBACK] RendererInfo Stream Usage for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererInfo.usage);
				console.info('AudioFrameworkRendererChangeLog: [ON_GET_RENDERER_STATE_5_CALLBACK] RendererInfo Flags for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererInfo.rendererFlags);
				console.info('AudioFrameworkRendererChangeLog: [ON_GET_RENDERER_STATE_5_CALLBACK] RendererState for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererState);
            }
        });
		
        await sleep (500);

        await audioRen.pause().then(async function () {
            console.info('AudioFrameworkRendererChangeLog: renderInstant Pause :SUCCESS ');
        }).catch((err) => {
            console.info('AudioFrameworkRendererChangeLog: renderInstant Pause :ERROR : '+err.message);
        });

		await sleep (500);
		
		audioStreamManager.getCurrentAudioRendererInfoArray(async (err, AudioRendererChangeInfoArray) => {
            console.info('AudioFrameworkRendererChangeLog: [GET_RENDERER_STATE_5_CALLBACK] **** Get Callback Called ****');
            await sleep(100);
            if (err) {
                console.log('AudioFrameworkRendererChangeLog: getCurrentAudioRendererInfoArray :ERROR: '+err.message);
                resultFlag = false;
            }
            else {
                if (AudioRendererChangeInfoArray !=null) {
                    for (let i=0;i<AudioRendererChangeInfoArray.length;i++) {
						console.info('AudioFrameworkRendererChangeLog: [GET_RENDERER_STATE_5_CALLBACK] StreamId for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].streamId);
						console.info('AudioFrameworkRendererChangeLog: [GET_RENDERER_STATE_5_CALLBACK] ClientUid for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].clientUid);
						console.info('AudioFrameworkRendererChangeLog: [GET_RENDERER_STATE_5_CALLBACK] RendererInfo Content for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererInfo.content);
						console.info('AudioFrameworkRendererChangeLog: [GET_RENDERER_STATE_5_CALLBACK] RendererInfo Stream Usage for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererInfo.usage);
						console.info('AudioFrameworkRendererChangeLog: [GET_RENDERER_STATE_5_CALLBACK] RendererInfo Flags for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererInfo.rendererFlags);
						console.info('AudioFrameworkRendererChangeLog: [GET_RENDERER_STATE_5_CALLBACK] RendererState for element ' + i + ' is : ' + AudioRendererChangeInfoArray[i].rendererState);
                        if (AudioRendererChangeInfoArray[i].rendererState ==5) {
                            resultFlag = true;
                            console.info('AudioFrameworkRendererChangeLog: [GET_RENDERER_STATE_5_CALLBACK] RendererState : '+ AudioRendererChangeInfoArray[i].rendererState);
                        }
                    }
                }
            }
        });

        await sleep(1000);
		
        audioStreamManager.off('audioRendererChange');
        await sleep(100);
        console.info('AudioFrameworkRendererChangeLog: [GET_RENDERER_STATE_5_CALLBACK] ######### RendererChange Off is called #########');

        await audioRen.stop().then(async function () {
            console.info('AudioFrameworkRendererChangeLog: Renderer stopped : SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRendererChangeLog: Renderer stop:ERROR : '+err.message);
        });

        await audioRen.release().then(async function () {
            console.info('AudioFrameworkRendererChangeLog: Renderer release : SUCCESS');
        }).catch((err) => {
            console.info('AudioFrameworkRendererChangeLog: Renderer release :ERROR : '+err.message);
        });

        expect(resultFlag).assertTrue();
        done();
    })
 
})