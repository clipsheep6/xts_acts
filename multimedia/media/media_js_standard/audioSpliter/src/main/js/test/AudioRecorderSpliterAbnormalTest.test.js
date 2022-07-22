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
import {RECORDER_SEGMENTATION, MEDIA_CONFIG} from '../../../../../RecorderParams.js';
import fileIo from '@ohos.fileio'
import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from 'deccjsunit/index'

describe('AudioRecorderSpliterAbnormalTest', function () {
    let audioRecorder = undefined;
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
    const INFO_MAX_DURATION_REACHED = media.RecorderInfoType.INFO_MAX_DURATION_REACHED;

    const IGNORE_SIZE_STATE = '-1';
    const APPROACHING_SIZE_STATE = '-2';
    const REACHED_SIZE_STATE = '-3';
    const BEYOND_SIZE_STATE = '-4';

    const SIZE_UPPER_LIMIT = RECORDER_SEGMENTATION.SIZE_UPPER_LIMIT;
    const SIZE_LOWER_LIMIT = RECORDER_SEGMENTATION.SIZE_LOWER_LIMIT;
    const DURATION_UPPER_LIMIT = RECORDER_SEGMENTATION.DURATION_UPPER_LIMIT;
    const DURATION_LOWER_LIMIT = RECORDER_SEGMENTATION.DURATION_LOWER_LIMIT;

    let audioConfig = MEDIA_CONFIG.audioConfig;

    beforeAll(async function () {
        console.info('[AudioRecorder] beforeAll');
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

    async function toInitFdData(pathName, done) {
        console.info('toInitFdData start');
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
            console.info('[AudioRecorder] info callback is called: ' + infoType);
            console.info('[AudioRecorder] judgeCallback: ' + (judgeCallback != null));
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
            console.info('[AudioRecorder] listener call error; err: ' + err);
            expect(isIllegalConfig || isUnExpectSetSub).assertTrue();
            done();
        });
    }

    /* *
       * @tc.number    : SUB_MEDIA_AUDIO_RECORDER_SPLITER_PROMISE_ABNORMAL_TEST_0100
       * @tc.name      : set maxsize larger than max
       * @tc.desc      : set max file size failed can not start record audio
       * @tc.size      : MediumTest
       * @tc.type      : Abnormal test
       * @tc.level     : Level0
       */
    it('SUB_MEDIA_AUDIO_RECORDER_SPLITER_PROMISE_ABNORMAL_TEST_0100', 0, async function (done) {
        console.info('[AudioRecorder] SUB_MEDIA_AUDIO_RECORDER_SPLITER_PROMISE_ABNORMAL_TEST_0100 start');
        audioConfig.maxSize = SIZE_UPPER_LIMIT + 1;
        await toInitFdData('01ap.m4a', done);
        audioConfig.uri = fdPath;
        initAudioRecorder(done);
        isIllegalConfig = true;
        audioRecorder.prepare(audioConfig);
    })

    /* *
       * @tc.number    : SUB_MEDIA_AUDIO_RECORDER_SPLITER_PROMISE_ABNORMAL_TEST_0200
       * @tc.name      : set maxsize less than min
       * @tc.desc      : set min file size failed can not start record audio
       * @tc.size      : MediumTest
       * @tc.type      : Abnormal test
       * @tc.level     : Level0
       */
    it('SUB_MEDIA_AUDIO_RECORDER_SPLITER_PROMISE_ABNORMAL_TEST_0200', 0, async function (done) {
        console.info('[AudioRecorder] SUB_MEDIA_AUDIO_RECORDER_SPLITER_PROMISE_ABNORMAL_TEST_0200 start');
        audioConfig.maxSize = SIZE_LOWER_LIMIT - 1;
        await toInitFdData('02ap.m4a', done);
        audioConfig.uri = fdPath;
        initAudioRecorder(done);
        isIllegalConfig = true;
        audioRecorder.prepare(audioConfig);
    })

    /* *
       * @tc.number    : SUB_MEDIA_AUDIO_RECORDER_SPLITER_PROMISE_ABNORMAL_TEST_0300
       * @tc.name      : set maxsize is -1
       * @tc.desc      : set file size is -1 failed can not start record audio
       * @tc.size      : MediumTest
       * @tc.type      : Abnormal test
       * @tc.level     : Level0
       */
    it('SUB_MEDIA_AUDIO_RECORDER_SPLITER_PROMISE_ABNORMAL_TEST_0300', 0, async function (done) {
        console.info('[AudioRecorder] SUB_MEDIA_AUDIO_RECORDER_SPLITER_PROMISE_ABNORMAL_TEST_0300 start');
        audioConfig.maxSize = -1;
        await toInitFdData('03ap.m4a', done);
        audioConfig.uri = fdPath;
        initAudioRecorder(done);
        isIllegalConfig = true;
        audioRecorder.prepare(audioConfig);
    })

    /* *
       * @tc.number    : SUB_MEDIA_AUDIO_RECORDER_SPLITER_PROMISE_ABNORMAL_TEST_0400
       * @tc.name      : set maxduration less than min
       * @tc.desc      : set min file duration failed can not start record audio
       * @tc.size      : MediumTest
       * @tc.type      : Abnormal test
       * @tc.level     : Level0
       */
    it('SUB_MEDIA_AUDIO_RECORDER_SPLITER_PROMISE_ABNORMAL_TEST_0400', 0, async function (done) {
        console.info('[AudioRecorder] SUB_MEDIA_AUDIO_RECORDER_SPLITER_PROMISE_ABNORMAL_TEST_0400 start');
        audioConfig.maxDuration = DURATION_LOWER_LIMIT - 1;
        await toInitFdData('04ap.m4a', done);
        audioConfig.uri = fdPath;
        initAudioRecorder(done);
        isIllegalConfig = true;
        audioRecorder.prepare(audioConfig);
    })

    /* *
       * @tc.number    : SUB_MEDIA_AUDIO_RECORDER_SPLITER_PROMISE_ABNORMAL_TEST_0500
       * @tc.name      : set maxduration larger than max
       * @tc.desc      : set max file duration failed can not start record audio
       * @tc.size      : MediumTest
       * @tc.type      : Abnormal test
       * @tc.level     : Level0
       */
    it('SUB_MEDIA_AUDIO_RECORDER_SPLITER_PROMISE_ABNORMAL_TEST_0500', 0, async function (done) {
        console.info('[AudioRecorder] SUB_MEDIA_AUDIO_RECORDER_SPLITER_PROMISE_ABNORMAL_TEST_0500 start');
        audioConfig.maxDuration = DURATION_UPPER_LIMIT + 1;
        await toInitFdData('05ap.m4a', done);
        audioConfig.uri = fdPath;
        initAudioRecorder(done);
        isIllegalConfig = true;
        audioRecorder.prepare(audioConfig);
    })

    /* *
       * @tc.number    : SUB_MEDIA_AUDIO_RECORDER_SPLITER_PROMISE_ABNORMAL_TEST_0600
       * @tc.name      : set maxduration is -1
       * @tc.desc      : set min file duration is -1 failed can not start record audio
       * @tc.size      : MediumTest
       * @tc.type      : Abnormal test
       * @tc.level     : Level0
       */
    it('SUB_MEDIA_AUDIO_RECORDER_SPLITER_PROMISE_ABNORMAL_TEST_0600', 0, async function (done) {
        console.info('[AudioRecorder] SUB_MEDIA_AUDIO_RECORDER_SPLITER_PROMISE_ABNORMAL_TEST_0600 start');
        audioConfig.maxDuration = -1 * 1000;
        await toInitFdData('06ap.m4a', done);
        audioConfig.uri = fdPath;
        initAudioRecorder(done);
        isIllegalConfig = true;
        audioRecorder.prepare(audioConfig);
    })

    /* *
       * @tc.number    : SUB_MEDIA_AUDIO_RECORDER_SPLITER_PROMISE_ABNORMAL_TEST_0700
       * @tc.name      : set maxsize is min and maxduration is -1
       * @tc.desc      : file size setting is valid, and the duration setting fails can not start record audio
       * @tc.size      : MediumTest
       * @tc.type      : Abnormal test
       * @tc.level     : Level0
       */
    it('SUB_MEDIA_AUDIO_RECORDER_SPLITER_PROMISE_ABNORMAL_TEST_0700', 0, async function (done) {
        console.info('[AudioRecorder] SUB_MEDIA_AUDIO_RECORDER_SPLITER_PROMISE_ABNORMAL_TEST_0700 start');
        audioConfig.maxSize = SIZE_LOWER_LIMIT;
        audioConfig.maxDuration = -1 * 1000;
        await toInitFdData('07ap.m4a', done);
        audioConfig.uri = fdPath;
        initAudioRecorder(done);
        isIllegalConfig = true;
        audioRecorder.prepare(audioConfig);
    })

    /* *
       * @tc.number    : SUB_MEDIA_AUDIO_RECORDER_SPLITER_PROMISE_ABNORMAL_TEST_0800
       * @tc.name      : set fdpath is wrong
       * @tc.desc      : set maxsize file correct and set fdpath is wrong , can not start record audio
       * @tc.size      : MediumTest
       * @tc.type      : Abnormal test
       * @tc.level     : Level0
       */
    it('SUB_MEDIA_AUDIO_RECORDER_SPLITER_PROMISE_ABNORMAL_TEST_0800', 0, async function (done) {
        console.info('[AudioRecorder] SUB_MEDIA_AUDIO_RECORDER_SPLITER_PROMISE_ABNORMAL_TEST_0800 start');
        audioConfig.maxSize = SIZE_LOWER_LIMIT;
        await toInitFdData('08ap.m4a', done);
        audioConfig.uri = fdPath;
        initAudioRecorder(done);
        judgeCallback = async (type, done) => {
            if (type === INFO_MAX_DURATION_APPROACHING || type === INFO_MAX_DURATION_REACHED) {
                unExpectFail(done);
            }
            if (type === INFO_MAX_SIZE_APPROACHING) {
                isUnExpectSetSub = true;
                let path = 'fd://-1';
                let res = await audioRecorder.setSubsequentFile(path);
                console.info(`[AudioRecorder] setSubsequentFile called,errMessage is ${res}`);
                audioRecorder.stop();
                audioRecorder.release();
            }
        }
        audioRecorder.prepare(audioConfig);
    })

    //  ----------------------------------------------------------------------------------------
    /* *
       * @tc.number    : SUB_MEDIA_AUDIO_RECORDER_SPLITER_CALLBACK_TEST_0100
       * @tc.name      : set maxsize larger than max
       * @tc.desc      : set max file size failed can not start record audio
       * @tc.size      : MediumTest
       * @tc.type      : Abnormal test
       * @tc.level     : Level0
       */
    it('SUB_MEDIA_AUDIO_RECORDER_SPLITER_CALLBACK_TEST_0100', 0, async function (done) {
        console.info('[AudioRecorder] SUB_MEDIA_AUDIO_RECORDER_SPLITER_CALLBACK_TEST_0100 enter');
        audioConfig.maxSize = SIZE_UPPER_LIMIT + 1;
        await toInitFdData('01ac.m4a', done);
        audioConfig.uri = fdPath;
        initAudioRecorder(done);
        isIllegalConfig = true;
        audioRecorder.prepare(audioConfig);
    })

    /* *
       * @tc.number    : SUB_MEDIA_AUDIO_RECORDER_SPLITER_CALLBACK_TEST_0200
       * @tc.name      : set maxsize less than min
       * @tc.desc      : set min file size failed can not start record audio
       * @tc.size      : MediumTest
       * @tc.type      : Abnormal test
       * @tc.level     : Level0
       */
    it('SUB_MEDIA_AUDIO_RECORDER_SPLITER_CALLBACK_TEST_0200', 0, async function (done) {
        console.info('[AudioRecorder] SUB_MEDIA_AUDIO_RECORDER_SPLITER_CALLBACK_TEST_0200 enter');
        audioConfig.maxSize = SIZE_LOWER_LIMIT - 1;
        await toInitFdData('02ac.m4a', done);
        audioConfig.uri = fdPath;
        initAudioRecorder(done);
        isIllegalConfig = true;
        audioRecorder.prepare(audioConfig);
    })

    /* *
       * @tc.number    : SUB_MEDIA_AUDIO_RECORDER_SPLITER_CALLBACK_TEST_0300
       * @tc.name      : set maxsize is -1
       * @tc.desc      : set file size is -1 failed can not start record audio
       * @tc.size      : MediumTest
       * @tc.type      : Abnormal test
       * @tc.level     : Level0
       */
    it('SUB_MEDIA_AUDIO_RECORDER_SPLITER_CALLBACK_TEST_0300', 0, async function (done) {
        console.info('[AudioRecorder] SUB_MEDIA_AUDIO_RECORDER_SPLITER_CALLBACK_TEST_0300 enter');
        audioConfig.maxSize = -1;
        await toInitFdData('03ac.m4a', done);
        audioConfig.uri = fdPath;
        initAudioRecorder(done);
        isIllegalConfig = true;
        audioRecorder.prepare(audioConfig);
    })

    /* *
       * @tc.number    : SUB_MEDIA_AUDIO_RECORDER_SPLITER_CALLBACK_TEST_0400
       * @tc.name      : set maxduration less than min
       * @tc.desc      : set min file duration failed can not start record audio
       * @tc.size      : MediumTest
       * @tc.type      : Abnormal test
       * @tc.level     : Level0
       */
    it('SUB_MEDIA_AUDIO_RECORDER_SPLITER_CALLBACK_TEST_0400', 0, async function (done) {
        console.info('[AudioRecorder] SUB_MEDIA_AUDIO_RECORDER_SPLITER_CALLBACK_TEST_0400 enter');
        audioConfig.maxDuration = DURATION_LOWER_LIMIT - 1;
        await toInitFdData('04ac.m4a', done);
        audioConfig.uri = fdPath;
        initAudioRecorder(done);
        isIllegalConfig = true;
        audioRecorder.prepare(audioConfig);
    })

    /* *
       * @tc.number    : SUB_MEDIA_AUDIO_RECORDER_SPLITER_CALLBACK_TEST_0500
       * @tc.name      : set maxduration larger than max 
       * @tc.desc      : set max file duration failed can not start record audio
       * @tc.size      : MediumTest
       * @tc.type      : Abnormal test
       * @tc.level     : Level0
       */
    it('SUB_MEDIA_AUDIO_RECORDER_SPLITER_CALLBACK_TEST_0500', 0, async function (done) {
        console.info('[AudioRecorder] SUB_MEDIA_AUDIO_RECORDER_SPLITER_CALLBACK_TEST_0500 enter');
        audioConfig.maxDuration = DURATION_UPPER_LIMIT + 1;
        await toInitFdData('05ac.m4a', done);
        audioConfig.uri = fdPath;
        initAudioRecorder(done);
        isIllegalConfig = true;
        audioRecorder.prepare(audioConfig);
    })

    /* *
       * @tc.number    : SUB_MEDIA_AUDIO_RECORDER_SPLITER_CALLBACK_TEST_0600
       * @tc.name      : set maxduration is -1
       * @tc.desc      : set min file duration is -1 failed can not start record audio
       * @tc.size      : MediumTest
       * @tc.type      : Abnormal test
       * @tc.level     : Level0
       */
    it('SUB_MEDIA_AUDIO_RECORDER_SPLITER_CALLBACK_TEST_0600', 0, async function (done) {
        console.info('[AudioRecorder] SUB_MEDIA_AUDIO_RECORDER_SPLITER_CALLBACK_TEST_0600 enter');
        audioConfig.maxDuration = -1 * 1000;
        await toInitFdData('06ac.m4a', done);
        audioConfig.uri = fdPath;
        initAudioRecorder(done);
        isIllegalConfig = true;
        audioRecorder.prepare(audioConfig);
    })

    /* *
       * @tc.number    : SUB_MEDIA_AUDIO_RECORDER_SPLITER_CALLBACK_TEST_0700
       * @tc.name      : set maxsize is min and maxduration is -1
       * @tc.desc      : file size setting is valid, and the duration setting fails can not start record audio
       * @tc.size      : MediumTest
       * @tc.type      : Abnormal test
       * @tc.level     : Level0
       */
    it('SUB_MEDIA_AUDIO_RECORDER_SPLITER_CALLBACK_TEST_0700', 0, async function (done) {
        console.info('[AudioRecorder] SUB_MEDIA_AUDIO_RECORDER_SPLITER_CALLBACK_TEST_0700 enter');
        audioConfig.maxSize = SIZE_LOWER_LIMIT;
        audioConfig.maxDuration = -1 * 1000;
        await toInitFdData('07ac.m4a', done);
        audioConfig.uri = fdPath;
        initAudioRecorder(done);
        isIllegalConfig = true;
        audioRecorder.prepare(audioConfig);
    })

    /* *
       * @tc.number    : SUB_MEDIA_AUDIO_RECORDER_SPLITER_CALLBACK_TEST_0800
       * @tc.name      : fd path is wrong
       * @tc.desc      : set maxsize file correct and set fdpath is wrong , can not start record audio
       * @tc.size      : MediumTest
       * @tc.type      : Abnormal test
       * @tc.level     : Level0
       */
    it('SUB_MEDIA_AUDIO_RECORDER_SPLITER_CALLBACK_TEST_0800', 0, async function (done) {
        console.info('[AudioRecorder] SUB_MEDIA_AUDIO_RECORDER_SPLITER_CALLBACK_TEST_0800 enter');
        audioConfig.maxSize = SIZE_LOWER_LIMIT;
        await toInitFdData('08ac.m4a', done);
        audioConfig.uri = fdPath;
        initAudioRecorder(done);
        judgeCallback = async (type, done) => {
            if (type === INFO_MAX_DURATION_APPROACHING || type === INFO_MAX_DURATION_REACHED) {
                unExpectFail(done);
            }
            if (type === INFO_MAX_SIZE_APPROACHING) {
                isUnExpectSetSub = true;
                let path = 'fd://-1';
                let res = await audioRecorder.setSubsequentFile(path);
                console.info(`[AudioRecorder] setSubsequentFile called,errMessage is ${res}`);
                audioRecorder.stop();
                audioRecorder.release();
            }
        }
        audioRecorder.prepare(audioConfig);
    })
})