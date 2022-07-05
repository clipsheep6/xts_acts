/*
 * Copyright (C) 2022 Huawei Device Co., Ltd.
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

import media from '@ohos.multimedia.media'
import * as mediaTestBase from '../../../../../MediaTestBase.js';
import * as videoRecorderTestBase from '../../../../../VideoRecorderTestBase.js';
import {COMMON_CONST} from '../../../../../commenConst.js';
import fileIo from '@ohos.fileio'
import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from 'deccjsunit/index'

describe('AudioRecorderSpliterStabilityTest', function () {
    let audioRecorder = undefined;
    const CHANNEL_TWO = 2;
    const FORMAT_M4A = 6;
    const SOURCE_TYPE = 1;
    const ENCORDER_AACLC = 3;
    const AUDIO_TRACK = 'audio_track';
    let fdPath;
    let fileAsset;
    let fdNumber;
    let videoArr = [];
    let judgeCallback = null;
    let preFdNumber = '';
    let isUnExpectSetSub = false;
    let isIllegalConfig = false;

    const AUDIO_PER_STR = 'AudioRecorderSpliterTest';
    const AUDIO_SUB_STR = 'Sub';

    const INFO_MAX_SIZE_APPROACHING = media.RecorderInfoType.INFO_MAX_SIZE_APPROACHING;
    const INFO_MAX_DURATION_APPROACHING = media.RecorderInfoType.INFO_MAX_DURATION_APPROACHING;
    const INFO_MAX_SIZE_REACHED = media.RecorderInfoType.INFO_MAX_SIZE_REACHED;
    const INFO_MAX_DURATION_REACHED = media.RecorderInfoType.INFO_MAX_DURATION_REACHED;
    const INFO_NEXT_FILE_STARTED = media.RecorderInfoType.INFO_NEXT_FILE_STARTED;
    const SIZE_BUFFER = COMMON_CONST.SIZE_BUFFER;

    const IGNORE_SIZE_STATE = '-1';
    const APPROACHING_SIZE_STATE = '-2';
    const REACHED_SIZE_STATE = '-3';
    const BEYOND_SIZE_STATE = '-4';

    const SIZE_UPPER_LIMIT = COMMON_CONST.SIZE_UPPER_LIMIT;
    const SIZE_LOWER_LIMIT = COMMON_CONST.SIZE_LOWER_LIMIT;
    const DURATION_UPPER_LIMIT = COMMON_CONST.DURATION_UPPER_LIMIT;
    const DURATION_LOWER_LIMIT = COMMON_CONST.DURATION_LOWER_LIMIT;

    let audioConfig = {
        audioSourceType: SOURCE_TYPE,
        audioEncoder: ENCORDER_AACLC,
        audioEncodeBitRate: 300923,
        audioSampleRate: 48000,
        numberOfChannels: CHANNEL_TWO,
        format: FORMAT_M4A,
        uri: 'file:///data/media/test.m4a',
        location: { latitude: 1, longitude: 1 },
        maxSize: 0,
        maxDuration: 0
    }

    beforeAll(async function () {
        console.info('[AudioRecorder] beforeAll');
        let permissionNames = [
            'ohos.permission.MICROPHONE',
            'ohos.permission.MEDIA_LOCATION',
            'ohos.permission.READ_MEDIA',
            'ohos.permission.WRITE_MEDIA'
        ];
        let applicationName = 'ohos.acts.multimedia.audio.audiorecorder';
        await mediaTestBase.applyPermission(applicationName, permissionNames);
    })

    beforeEach(async function () {
        audioConfig.maxDuration = 0;
        audioConfig.maxSize = 0;
        judgeCallback = null;
        videoArr = [];
        audioRecorder = undefined;
        isUnExpectSetSub = false;
        isIllegalConfig = false;
        console.info('[AudioRecorder] beforeEach');
    })

    afterEach(async function () {
        if (!!audioRecorder) {
            audioRecorder.release();
            audioRecorder = undefined;
        }
        let length = videoArr.length;
        for (let i = 0; i < length; i++) {
            await mediaTestBase.closeFd(videoArr[i].fileAsset, videoArr[i].fdNumber);
        }
        console.info('[AudioRecorder] afterEach');
    })

    afterAll(function () {
        console.info('[AudioRecorder] afterAll');
    })

    function initAudioRecorder(done) {
        console.info('[AudioRecorder] create audio recorder');
        audioRecorder = media.createAudioRecorder();
        onInfoCallBack(audioRecorder, done);
        onCommonCallback(done);
    }

    async function toIniFdData(pathName, done) {
        console.info('toIniFdData start');
        if (fdNumber !== null) {
            preFdNumber = fdNumber
        }
        let displayName = AUDIO_PER_STR + pathName;
        let fdObject = await mediaTestBase.getFd(displayName);
        if (fdObject.fileAsset == null || fdObject.fdNumber == null) {
            expect().assertFail();
            done();
        } else {
            fileAsset = fdObject.fileAsset;
            fdNumber = fdObject.fdNumber;
            fdPath = 'fd://' + fdNumber.toString();
            videoArr.push({
                fdPath: fdPath,
                duration: 0,
                fileAsset: fileAsset,
                fdNumber: fdNumber
            });
            console.info('fdPath: ' + fdPath);
        }
    }

    function failureCallback(error, done) {
        console.info(`[AudioRecorder] failureCallback error called,errMessage is ${error.message}`);
        if (isUnExpectSetSub) {
            expect(true).assertTrue();
        } else if ((!!videoConfig.maxSize && videoConfig.maxSize < SIZE_LOWER_LIMIT) ||
        (!!videoConfig.maxDuration && videoConfig.maxDuration < DURATION_LOWER_LIMIT) ||
        videoConfig.maxSize > SIZE_UPPER_LIMIT ||
        videoConfig.maxDuration > DURATION_UPPER_LIMIT) {
            console.info(`[AudioRecorder] out of bounds , audioConfig.maxSize is ${audioConfig.maxSize}`);
            console.info(`[AudioRecorder] out of bounds , audioConfig.maxDuration is ${audioConfig.maxDuration}`);
            expect(true).assertTrue();
            done();
        } else {
            expect().assertFail();
            done();
        }
    }

    function onInfoCallBack(recorder, done) {
        recorder.on('info', async (infoType) => {
            console.info('[AudioRecorder] info callback is called：：：' + infoType);
            console.info('[AudioRecorder] judgeCallback：：：' + (judgeCallback != null));
            if (judgeCallback != null) {
                judgeCallback(infoType, done);
            }
        });
    }

    function unExpectFail(done) {
        console.info('unExpectFail called');
        expect().assertFail();
        done();
    }

    function onCommonCallback(done) {
        audioRecorder.on('prepare', () => {
            console.info('[AudioRecorder] prepare is called');
            audioRecorder.start();
        });
        audioRecorder.on('start', () => {
            console.info('[AudioRecorder] start is called');
        });
        audioRecorder.on('stop', () => {
            console.info('[AudioRecorder] stop is called');
        });
        audioRecorder.on('release', () => {
            console.info('[AudioRecorder] release is called');
            audioRecorder = undefined;
        });
        audioRecorder.on('error', (err) => {
            console.info('[AudioRecorder] listener call error; err:' + err);
            expect(isIllegalConfig || isUnExpectSetSub).assertTrue();
            done();
        });
    }

    async function toCheckFile(fdNumber, expectType, done) {
        await fileIo.fstat(fdNumber).then((state) => {
            switch (expectType) {
                case APPROACHING_SIZE_STATE:
                    expect(state.size).assertClose(audioConfig.maxSize * 0.9, SIZE_BUFFER);
                    break;
                case REACHED_SIZE_STATE:
                    expect(state.size).assertClose(audioConfig.maxSize, SIZE_BUFFER);
                    break;
                case BEYOND_SIZE_STATE:
                    expect(state.size).assertLess(audioConfig.maxSize + SIZE_BUFFER);
                    break;
                default:
                    break;
            }
            console.info('fileIo fstat success, size: ' + state.size)
        }).catch((err) => {
            console.info('fileIo fstat error, type: ' + type)
            failureCallback(err, done)
        });
    }

    async function toSetSubsequentFileWithPromise(filename, done) {
        console.info('setSubsequentFile with promise is called');
        await toIniFdData(filename, done);
        audioRecorder.setSubsequentFile(fdPath).then((res) => {
            if (!res) {
                failureCallback(res, done)
            }
        }, err => {
            failureCallback(err, done)
        })
    }

    async function toSetSubsequentFileWithCallback(filename, done) {
        console.info('setSubsequentFile with callback is called');
        await toIniFdData(filename, done);
        audioRecorder.setSubsequentFile(fdPath, (err) => {
            console.info('setSubsequentFile is called');
            if (!!err) {
                failureCallback(err, done)
            }
        });
    }

    async function toCheckVideo(done) {
        if (!videoArr.length) {
            console.info('fdPath is empty');
            expect().assertFail();
            done();
        }
        let trackArray = getTrackArray(audioConfig);
        for (let i = 0; i < videoArr.length; i++) {
            await videoRecorderTestBase.checkVideos(
                videoArr[i].fdPath,
                videoArr[i].duration,
                trackArray,
                null);
        }
    }

    function getTrackArray(recorderConfigFile) {
        let audioTrack = new Array(recorderConfigFile.audioEncodeBitRate, recorderConfigFile.numberOfChannels,
            'audio/mpeg', recorderConfigFile.audioSampleRate);
        let trackArray = new Array(audioTrack);
        return trackArray;
    }

    function setDurationOfPath(duration) {
        if (videoArr.length > 0) {
            videoArr[videoArr.length - 1].duration = duration;
        }
    }

    async function waitForSeconds() {
        await mediaTestBase.msleepAsync(10000).then(
            () => {
            }, mediaTestBase.failureCallback).catch(mediaTestBase.catchCallback);
    }

    /* *
       * @tc.number    : SUB_MEDIA_VIDEO_RECORDER_SPLITER_PROMISE_STABILITY_TEST_0100
       * @tc.name      : spliter recorder mp4: audio
       * @tc.desc      : spliter recorder mp4 audio file when maxSize is approaching
       * @tc.size      : MediumTest
       * @tc.type      : Stability test
       * @tc.level     : Level0
      */
    it('SUB_MEDIA_VIDEO_RECORDER_SPLITER_PROMISE_STABILITY_TEST_0100', 0, async function (done) {
        console.info('[AudioRecorder] SUB_MEDIA_VIDEO_RECORDER_SPLITER_PROMISE_STABILITY_TEST_0100 start');
        audioConfig.maxSize = 10 * 1024 * 1024;
        await toIniFdData('11p.mp4', done);
        audioConfig.uri = fdPath;
        initAudioRecorder(done);
        judgeCallback = async (type, done) => {
            if (type === INFO_MAX_DURATION_APPROACHING || type === INFO_MAX_DURATION_REACHED) {
                unExpectFail(done);
            }
            if (type === INFO_MAX_SIZE_APPROACHING) {
                toSetSubsequentFileWithPromise(AUDIO_SUB_STR + '11p.mp4', done);
            } else if (type === INFO_NEXT_FILE_STARTED) {
                await waitForSeconds(done);
                await toCheckFile(preFdNumber, REACHED_SIZE_STATE, done);
                await toCheckFile(fdNumber, IGNORE_SIZE_STATE, done);
                audioRecorder.stop();
                audioRecorder.release();
                await toCheckVideo(done);
                done();
            }
        }
        audioRecorder.prepare(audioConfig);
    })	
	
    /* *
       * @tc.number    : SUB_MEDIA_VIDEO_RECORDER_SPLITER_PROMISE_STABILITY_TEST_0200
       * @tc.name      : spliter recorder m4a: audio
       * @tc.desc      : spliter recorder m4a audio file when maxSize is approaching
       * @tc.size      : MediumTest
       * @tc.type      : Stability test
       * @tc.level     : Level0
      */
    it('SUB_MEDIA_VIDEO_RECORDER_SPLITER_PROMISE_STABILITY_TEST_0200', 0, async function (done) {
        console.info('[AudioRecorder] SUB_MEDIA_VIDEO_RECORDER_SPLITER_PROMISE_STABILITY_TEST_0200 start');
        audioConfig.maxSize = 10 * 1024 * 1024;
        await toIniFdData('12p.m4a', done);
        audioConfig.uri = fdPath;
        initAudioRecorder(done);
        judgeCallback = async (type, done) => {
            if (type === INFO_MAX_DURATION_APPROACHING || type === INFO_MAX_DURATION_REACHED) {
                unExpectFail(done);
            }
            if (type === INFO_MAX_SIZE_APPROACHING) {
                toSetSubsequentFileWithPromise(AUDIO_SUB_STR + '12p.m4a', done);
            } else if (type === INFO_NEXT_FILE_STARTED) {
                await waitForSeconds(done);
                await toCheckFile(preFdNumber, REACHED_SIZE_STATE, done);
                await toCheckFile(fdNumber, IGNORE_SIZE_STATE, done);
                audioRecorder.stop();
                audioRecorder.release();
                await toCheckVideo(done);
                done();
            }
        }
        audioRecorder.prepare(audioConfig);
    })	
		
    /* *
       * @tc.number    : SUB_MEDIA_VIDEO_RECORDER_SPLITER_CALLBACK_COMPATIBILITY_TEST_0100
       * @tc.name      : spliter recorder mp4: audio
       * @tc.desc      : spliter recorder mp4 audio file when maxSize is approaching
       * @tc.size      : MediumTest
       * @tc.type      : Stability test
       * @tc.level     : Level0
      */
    it('SUB_MEDIA_VIDEO_RECORDER_SPLITER_CALLBACK_COMPATIBILITY_TEST_0100', 0, async function (done) {
        console.info('[AudioRecorder] SUB_MEDIA_VIDEO_RECORDER_SPLITER_CALLBACK_COMPATIBILITY_TEST_0100 enter');
        audioConfig.maxSize = 10 * 1024 * 1024;
        await toIniFdData('11c.mp4', done);
        audioConfig.uri = fdPath;
        initAudioRecorder(done);
        judgeCallback = async (type, done) => {
            if (type === INFO_MAX_DURATION_APPROACHING || type === INFO_MAX_DURATION_REACHED) {
                unExpectFail(done);
            }
            if (type === INFO_MAX_SIZE_APPROACHING) {
                toSetSubsequentFileWithCallback(AUDIO_SUB_STR + '11c.mp4', done);
            } else if (type === INFO_NEXT_FILE_STARTED) {
                await waitForSeconds(done);
                await toCheckFile(preFdNumber, REACHED_SIZE_STATE, done);
                await toCheckFile(fdNumber, IGNORE_SIZE_STATE, done);
                audioRecorder.stop();
                audioRecorder.release();
                await toCheckVideo(done);
                done();
            }
        }
        audioRecorder.prepare(audioConfig);
    })

    /* *
       * @tc.number    : SUB_MEDIA_VIDEO_RECORDER_SPLITER_CALLBACK_COMPATIBILITY_TEST_0200
       * @tc.name      : spliter recorder m4a: audio
       * @tc.desc      : spliter recorder m4a audio file when maxSize is approaching
       * @tc.size      : MediumTest
       * @tc.type      : Stability test
       * @tc.level     : Level0
      */
    it('SUB_MEDIA_VIDEO_RECORDER_SPLITER_CALLBACK_COMPATIBILITY_TEST_0200', 0, async function (done) {
        console.info('[AudioRecorder] SUB_MEDIA_VIDEO_RECORDER_SPLITER_CALLBACK_COMPATIBILITY_TEST_1200 enter');
        audioConfig.maxSize = 10 * 1024 * 1024;
        await toIniFdData('12c.m4a', done);
        audioConfig.uri = fdPath;
        initAudioRecorder(done);
        judgeCallback = async (type, done) => {
            if (type === INFO_MAX_DURATION_APPROACHING || type === INFO_MAX_DURATION_REACHED) {
                unExpectFail(done);
            }
            if (type === INFO_MAX_SIZE_APPROACHING) {
                toSetSubsequentFileWithCallback(AUDIO_SUB_STR + '12c.m4a', done);
            } else if (type === INFO_NEXT_FILE_STARTED) {
                await waitForSeconds(done);
                await toCheckFile(preFdNumber, REACHED_SIZE_STATE, done);
                await toCheckFile(fdNumber, IGNORE_SIZE_STATE, done);
                audioRecorder.stop();
                audioRecorder.release();
                await toCheckVideo(done);
                done();
            }
        }
        audioRecorder.prepare(audioConfig);
    })
})