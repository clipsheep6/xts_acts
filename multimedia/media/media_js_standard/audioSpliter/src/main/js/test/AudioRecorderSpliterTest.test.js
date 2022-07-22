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
import * as spliterTestBase from '../../../../../SpliterTestBase.js';
import {RECORDER_SEGMENTATION, MEDIA_CONFIG} from '../../../../../RecorderParams.js';
import fileIo from '@ohos.fileio'
import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from 'deccjsunit/index'

describe('AudioRecorderSpliterTest', function () {
    let audioRecorder = undefined;
    let fdPath;
    let fileAsset;
    let fdNumber;
    let videoArr = [];
    let judgeCallback = null;
    let perActCallback = null;
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
    const SIZE_BUFFER = RECORDER_SEGMENTATION.SIZE_BUFFER;

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
        perActCallback = null;
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
                duration: audioConfig.maxDuration,
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
            if (perActCallback != null) {
                perActCallback();
            }
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
        await toInitFdData(filename, done);
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
        await toInitFdData(filename, done);
        audioRecorder.setSubsequentFile(fdPath, (err) => {
            console.info('setSubsequentFile is called');
            if (!!err) {
                failureCallback(err, done)
            }
        });
    }

    async function toCheckVideo(done) {
        await spliterTestBase.toCheckVideo(done, videoArr, audioConfig, null, 'audio_track');
    }

    function setDurationOfPath(duration) {
        if (videoArr.length > 0) {
            videoArr[videoArr.length - 1].duration = duration;
        }
    }

    async function waitForSeconds(seconds) {
        await mediaTestBase.msleepAsync(seconds).then(
            () => {
            }, mediaTestBase.failureCallback).catch(mediaTestBase.catchCallback);
    }

    function setDurationOfPath(duration) {
        if (videoArr.length > 0) {
            videoArr[videoArr.length - 1].duration = duration;
        }
    }

    /* *
       * @tc.number    : SUB_MEDIA_AUDIO_RECORDER_SPLITER_PROMISE_TEST_0100
       * @tc.name      : set maxsize is min to spliter for audio
       * @tc.desc      : start, To 90% trigger setsubsequentfile
       * @tc.size      : MediumTest
       * @tc.type      : Function
       * @tc.level     : Level0
       */
    it('SUB_MEDIA_AUDIO_RECORDER_SPLITER_PROMISE_TEST_0100', 0, async function (done) {
        console.info('[AudioRecorder] SUB_MEDIA_AUDIO_RECORDER_SPLITER_PROMISE_TEST_0100 start');
        audioConfig.maxSize = SIZE_LOWER_LIMIT;
        await toInitFdData('01fp.m4a', done);
        audioConfig.uri = fdPath;
        initAudioRecorder(done);
        judgeCallback = async (type, done) => {
            if (type === INFO_MAX_DURATION_APPROACHING || type === INFO_MAX_DURATION_REACHED) {
                unExpectFail(done);
            }
            if (type === INFO_MAX_SIZE_APPROACHING) {
                toSetSubsequentFileWithPromise(AUDIO_SUB_STR + '01fp.m4a', done);
            } else if (type === INFO_NEXT_FILE_STARTED) {
                await waitForSeconds(10000);
                await toCheckFile(preFdNumber, REACHED_SIZE_STATE, done);
                await toCheckFile(fdNumber, IGNORE_SIZE_STATE, done);
                audioRecorder.stop();
                audioRecorder.release();
                await toCheckVideo(done);
                done();
            }
        };
        perActCallback = () => {
            audioRecorder.start();
        };
        audioRecorder.prepare(audioConfig);
    })

    /* *
       * @tc.number    : SUB_MEDIA_AUDIO_RECORDER_SPLITER_PROMISE_TEST_0200
       * @tc.name      : set maxsize is min to spliter for audio
       * @tc.desc      : start->pause->resume,To 90% trigger setsubsequentfile,stop
       * @tc.size      : MediumTest
       * @tc.type      : Function
       * @tc.level     : Level0
       */
    it('SUB_MEDIA_AUDIO_RECORDER_SPLITER_PROMISE_TEST_0200', 0, async function (done) {
        console.info('[AudioRecorder] SUB_MEDIA_AUDIO_RECORDER_SPLITER_PROMISE_TEST_0200 start');
        audioConfig.maxSize = SIZE_LOWER_LIMIT;
        await toInitFdData('02fp.m4a', done);
        audioConfig.uri = fdPath;
        initAudioRecorder(done);
        judgeCallback = async (type, done) => {
            if (type === INFO_MAX_DURATION_APPROACHING || type === INFO_MAX_DURATION_REACHED) {
                unExpectFail(done);
            }
            if (type === INFO_MAX_SIZE_APPROACHING) {
                toSetSubsequentFileWithPromise(AUDIO_SUB_STR + '02fp.m4a', done);
            } else if (type === INFO_NEXT_FILE_STARTED) {
                await waitForSeconds(10000);
                await toCheckFile(preFdNumber, REACHED_SIZE_STATE, done);
                await toCheckFile(fdNumber, IGNORE_SIZE_STATE, done);
                audioRecorder.stop();
                audioRecorder.release();
                await toCheckVideo(done);
                done();
            }
        };
        perActCallback = () => {
            audioRecorder.start();
            audioRecorder.pause();
            audioRecorder.resume();
        };
        audioRecorder.prepare(audioConfig);
    })

    /* *
       * @tc.number    : SUB_MEDIA_AUDIO_RECORDER_SPLITER_PROMISE_TEST_0300
       * @tc.name      : set maxsize is min to spliter for audio
       * @tc.desc      : start->reset->prepare->start,To 90% trigger setsubsequentfile,stop
       * @tc.size      : MediumTest
       * @tc.type      : Function
       * @tc.level     : Level0
       */
    it('SUB_MEDIA_AUDIO_RECORDER_SPLITER_PROMISE_TEST_0300', 0, async function (done) {
        console.info('[AudioRecorder] SUB_MEDIA_AUDIO_RECORDER_SPLITER_PROMISE_TEST_0300 start');
        audioConfig.maxSize = SIZE_LOWER_LIMIT;
        await toInitFdData('03fp.m4a', done);
        audioConfig.uri = fdPath;
        initAudioRecorder(done);
        judgeCallback = async (type, done) => {
            if (type === INFO_MAX_DURATION_APPROACHING || type === INFO_MAX_DURATION_REACHED) {
                unExpectFail(done);
            }
            if (type === INFO_MAX_SIZE_APPROACHING) {
                toSetSubsequentFileWithPromise(AUDIO_SUB_STR + '03fp.m4a', done);
            } else if (type === INFO_NEXT_FILE_STARTED) {
                await waitForSeconds(10000);
                await toCheckFile(preFdNumber, REACHED_SIZE_STATE, done);
                await toCheckFile(fdNumber, IGNORE_SIZE_STATE, done);
                audioRecorder.stop();
                audioRecorder.release();
                await toCheckVideo(done);
                done();
            }
        };
        perActCallback = () => {
            audioRecorder.start();
            audioRecorder.reset();
            audioRecorder.prepare(audioConfig);
            perActCallback = () => {
                audioRecorder.start();
            }
        };
        audioRecorder.prepare(audioConfig);
    })

    /* *
       * @tc.number    : SUB_MEDIA_AUDIO_RECORDER_SPLITER_PROMISE_TEST_0400
       * @tc.name      : set maxsize is min to spliter for audio
       * @tc.desc      : set maxduration is min,To 90% trigger setsubsequentfile,stop
       * @tc.size      : MediumTest
       * @tc.type      : Function
       * @tc.level     : Level0
       */
    it('SUB_MEDIA_AUDIO_RECORDER_SPLITER_PROMISE_TEST_0400', 0, async function (done) {
        console.info('[AudioRecorder] SUB_MEDIA_AUDIO_RECORDER_SPLITER_PROMISE_TEST_0400 start');
        audioConfig.maxDuration = DURATION_LOWER_LIMIT;
        await toInitFdData('04fp.m4a', done);
        audioConfig.uri = fdPath;
        initAudioRecorder(done);
        judgeCallback = async (type, done) => {
            if (type === INFO_MAX_SIZE_APPROACHING || type === INFO_MAX_SIZE_REACHED) {
                unExpectFail(done);
            }
            if (type === INFO_MAX_DURATION_APPROACHING) {
                audioRecorder.stop();
                audioRecorder.release();
                setDurationOfPath(audioConfig.maxDuration * 0.9)
                await toCheckFile(fdNumber, IGNORE_SIZE_STATE, done);
                await waitForSeconds(3000);
                await toCheckVideo(done);
                done();
            }
        };
        perActCallback = () => {
            audioRecorder.start();
        };
        audioRecorder.prepare(audioConfig);
    })

    /* *
       * @tc.number    : SUB_MEDIA_AUDIO_RECORDER_SPLITER_PROMISE_TEST_0500
       * @tc.name      : set maxsize is min to spliter for audio
       * @tc.desc      : set maxsize is 10M,start,To 90% trigger setsubsequentfile,stop
       * @tc.size      : MediumTest
       * @tc.type      : Function
       * @tc.level     : Level0
       */
    it('SUB_MEDIA_AUDIO_RECORDER_SPLITER_PROMISE_TEST_0500', 0, async function (done) {
        console.info('[AudioRecorder] SUB_MEDIA_AUDIO_RECORDER_SPLITER_PROMISE_TEST_0500 start');
        audioConfig.maxSize = 10 * 1024 * 1024;
        await toInitFdData('05fp.m4a', done);
        audioConfig.uri = fdPath;
        initAudioRecorder(done);
        judgeCallback = async (type, done) => {
            if (type === INFO_MAX_DURATION_APPROACHING || type === INFO_MAX_DURATION_REACHED) {
                unExpectFail(done);
            }
            if (type === INFO_MAX_SIZE_APPROACHING) {
                audioRecorder.stop();
                await toCheckFile(fdNumber, APPROACHING_SIZE_STATE, done);
                audioRecorder.release();
                await waitForSeconds(3000);
                await toCheckVideo(done);
                done();
            }
        };
        perActCallback = () => {
            audioRecorder.start();
        };
        audioRecorder.prepare(audioConfig);
    })

    /* *
       * @tc.number    : SUB_MEDIA_AUDIO_RECORDER_SPLITER_PROMISE_TEST_0600
       * @tc.name      : set maxsize is min to spliter for audio
       * @tc.desc      : set maxduration is min,250S starts recording,To 90% trigger setsubsequentfile
       * @tc.size      : MediumTest
       * @tc.type      : Function
       * @tc.level     : Level0
       */
    it('SUB_MEDIA_AUDIO_RECORDER_SPLITER_PROMISE_TEST_0600', 0, async function (done) {
        console.info('[AudioRecorder] SUB_MEDIA_AUDIO_RECORDER_SPLITER_PROMISE_TEST_0600 start');
        audioConfig.maxDuration = DURATION_LOWER_LIMIT;
        await toInitFdData('06fp.m4a', done);
        audioConfig.uri = fdPath;
        initAudioRecorder(done);
        let audioCount = 1;
        judgeCallback = async (type, done) => {
            if (type === INFO_MAX_SIZE_APPROACHING || type === INFO_MAX_SIZE_REACHED) {
                unExpectFail(done);
            }
            if (type === INFO_MAX_DURATION_APPROACHING) {
                await toCheckFile(fdNumber, IGNORE_SIZE_STATE, done);
                toSetSubsequentFileWithPromise(AUDIO_SUB_STR + '06-' + audioCount + 'fp.m4a', done);
                audioCount++;
            }
        };
        perActCallback = () => {
            audioRecorder.start();
        };
        audioRecorder.prepare(audioConfig);
        // wait for 214S
        setTimeout(async () => {
            console.info('setTimeout called, audioCount: ' + audioCount);
            if (audioCount < 5) {
                expect(false).assertTrue();
                done();
            } else {
                expect(true).assertTrue();
            }
            setDurationOfPath(0);
            await toCheckFile(fdNumber, IGNORE_SIZE_STATE, done);
            audioRecorder.stop();
            audioRecorder.release();
            await toCheckVideo(done);
            done();
        }, 250000)
    })

    /* *
       * @tc.number    : SUB_MEDIA_AUDIO_RECORDER_SPLITER_PROMISE_TEST_0700
       * @tc.name      : set maxsize is min to spliter for audio
       * @tc.desc      : set maxsize is min,pause and resume,To 90% trigger setsubsequentfile,stop
       * @tc.size      : MediumTest
       * @tc.type      : Function
       * @tc.level     : Level0
       */
    it('SUB_MEDIA_AUDIO_RECORDER_SPLITER_PROMISE_TEST_0700', 0, async function (done) {
        console.info('[AudioRecorder] SUB_MEDIA_AUDIO_RECORDER_SPLITER_PROMISE_TEST_0700 start');
        audioConfig.maxSize = SIZE_LOWER_LIMIT;
        await toInitFdData('07fp.m4a', done);
        audioConfig.uri = fdPath;
        initAudioRecorder(done);
        judgeCallback = async (type, done) => {
            if (type === INFO_MAX_DURATION_APPROACHING || type === INFO_MAX_DURATION_REACHED) {
                unExpectFail(done);
            }
            if (type === INFO_MAX_SIZE_APPROACHING) {
                audioRecorder.pause();
                audioRecorder.resume();
                toSetSubsequentFileWithPromise(AUDIO_SUB_STR + '07fp.m4a', done);
            } else if (type === INFO_NEXT_FILE_STARTED) {
                await waitForSeconds(10000);
                await toCheckFile(preFdNumber, REACHED_SIZE_STATE, done);
                await toCheckFile(fdNumber, IGNORE_SIZE_STATE, done);
                audioRecorder.stop();
                audioRecorder.release();
                await toCheckVideo(done);
                done();
            }
        };
        perActCallback = () => {
            audioRecorder.start();
        };
        audioRecorder.prepare(audioConfig);
    })

    /* *
       * @tc.number    : SUB_MEDIA_AUDIO_RECORDER_SPLITER_PROMISE_TEST_0800
       * @tc.name      : set maxsize is min to spliter for audio
       * @tc.desc      : set maxsize is 10M and set maxduration is min to 90% trigger setsubsequentfile
       * @tc.size      : MediumTest
       * @tc.type      : Function
       * @tc.level     : Level0
       */
    it('SUB_MEDIA_AUDIO_RECORDER_SPLITER_PROMISE_TEST_0800', 0, async function (done) {
        console.info('[AudioRecorder] SUB_MEDIA_AUDIO_RECORDER_SPLITER_PROMISE_TEST_0800 start');
        audioConfig.maxSize = 10 * 1024 * 1024;
        audioConfig.maxDuration = DURATION_LOWER_LIMIT;
        await toInitFdData('08fp.m4a', done);
        audioConfig.uri = fdPath;
        initAudioRecorder(done);
        let isSizeType = false;
        judgeCallback = async (type, done) => {
            if (type === INFO_MAX_SIZE_APPROACHING) {
                isSizeType = true;
                setDurationOfPath(0);
                toSetSubsequentFileWithPromise(AUDIO_SUB_STR + '08fp.m4a', done);
            } else if (type === INFO_MAX_DURATION_APPROACHING) {
                toSetSubsequentFileWithPromise(AUDIO_SUB_STR + '08fp.m4a', done);
            } else if (type === INFO_NEXT_FILE_STARTED) {
                await waitForSeconds(10000);
                setDurationOfPath(0);
                await toCheckFile(preFdNumber, isSizeType ? REACHED_SIZE_STATE : IGNORE_SIZE_STATE, done);
                await toCheckFile(fdNumber, IGNORE_SIZE_STATE, done);
                audioRecorder.stop();
                audioRecorder.release();
                await toCheckVideo(done);
                done();
            }
        };
        perActCallback = () => {
            audioRecorder.start();
        };
        audioRecorder.prepare(audioConfig);
    })

    /* *
       * @tc.number    : SUB_MEDIA_AUDIO_RECORDER_SPLITER_PROMISE_TEST_0900
       * @tc.name      : set maxsize is min to spliter for audio
       * @tc.desc      : set maxsize is min and set maxduration is min to 90% trigger setsubsequentfile
       * @tc.size      : MediumTest
       * @tc.type      : Function
       * @tc.level     : Level0
       */
    it('SUB_MEDIA_AUDIO_RECORDER_SPLITER_PROMISE_TEST_0900', 0, async function (done) {
        console.info('[AudioRecorder] SUB_MEDIA_AUDIO_RECORDER_SPLITER_PROMISE_TEST_0900 start');
        audioConfig.maxSize = SIZE_LOWER_LIMIT;
        audioConfig.maxDuration = DURATION_LOWER_LIMIT;
        await toInitFdData('09fp.m4a', done);
        audioConfig.uri = fdPath;
        initAudioRecorder(done);
        let isSizeType = false;
        judgeCallback = async (type, done) => {
            if (type === INFO_MAX_SIZE_APPROACHING) {
                isSizeType = true;
                setDurationOfPath(0);
                toSetSubsequentFileWithPromise(AUDIO_SUB_STR + '09fp.m4a', done);
            } else if (type === INFO_MAX_DURATION_APPROACHING) {
                toSetSubsequentFileWithPromise(AUDIO_SUB_STR + '09fp.m4a', done);
            } else if (type === INFO_NEXT_FILE_STARTED) {
                await waitForSeconds(10000);
                setDurationOfPath(0);
                await toCheckFile(preFdNumber, isSizeType ? REACHED_SIZE_STATE : IGNORE_SIZE_STATE, done);
                await toCheckFile(fdNumber, IGNORE_SIZE_STATE, done);
                audioRecorder.stop();
                audioRecorder.release();
                await toCheckVideo(done);
                done();
            }
        };
        perActCallback = () => {
            audioRecorder.start();
        };
        audioRecorder.prepare(audioConfig);
    })

    /* *
       * @tc.number    : SUB_MEDIA_AUDIO_RECORDER_SPLITER_PROMISE_TEST_1000
       * @tc.name      : set maxsize is min to spliter for audio
       * @tc.desc      : set maxsize is min to 90% trigger setsubsequentfile cycle 5 times
       * @tc.size      : MediumTest
       * @tc.type      : Function
       * @tc.level     : Level0
       */
    it('SUB_MEDIA_AUDIO_RECORDER_SPLITER_PROMISE_TEST_1000', 0, async function (done) {
        console.info('[AudioRecorder] SUB_MEDIA_AUDIO_RECORDER_SPLITER_PROMISE_TEST_1000 start');
        audioConfig.maxSize = SIZE_LOWER_LIMIT;
        await toInitFdData('10fp.m4a', done);
        audioConfig.uri = fdPath;
        initAudioRecorder(done);
        judgeCallback = async (type, done) => {
            if (type === INFO_MAX_DURATION_APPROACHING || type === INFO_MAX_DURATION_REACHED) {
                unExpectFail(done);
            }
            if (type === INFO_MAX_SIZE_APPROACHING) {
                await toSetSubsequentFileWithPromise(AUDIO_SUB_STR + '10fp.m4a', done);
                isUnExpectSetSub = true;
                // repeat 4 times
                for (let i = 0; i < 4; i++) {
                    audioRecorder.setSubsequentFile(fdPath).then((res) => {
                        if (!res) {
                            failureCallback(res, done)
                        }
                    }, err => {
                        failureCallback(err, done)
                    })
                }
            } else if (type === INFO_NEXT_FILE_STARTED) {
                await waitForSeconds(10000);
                audioRecorder.stop();
                audioRecorder.release();
                await toCheckFile(preFdNumber, REACHED_SIZE_STATE, done);
                await toCheckFile(fdNumber, IGNORE_SIZE_STATE, done);
                await toCheckVideo(done);
                done();
            }
        };
        perActCallback = () => {
            audioRecorder.start();
        };
        audioRecorder.prepare(audioConfig);
    })

    /* *
       * @tc.number    : SUB_MEDIA_AUDIO_RECORDER_SPLITER_PROMISE_TEST_1100
       * @tc.name      : set maxsize is min to spliter for audio
       * @tc.desc      : set maxsize is min and maxduration is max to 90% trigger setsubsequentfile
       * @tc.size      : MediumTest
       * @tc.type      : Function
       * @tc.level     : Level0
       */
    it('SUB_MEDIA_AUDIO_RECORDER_SPLITER_PROMISE_TEST_1100', 0, async function (done) {
        console.info('[AudioRecorder] SUB_MEDIA_AUDIO_RECORDER_SPLITER_PROMISE_TEST_1100 start');
        audioConfig.maxSize = SIZE_LOWER_LIMIT;
        audioConfig.maxDuration = 1800 * 1000;
        await toInitFdData('11fp.m4a', done);
        audioConfig.uri = fdPath;
        initAudioRecorder(done);
        let isSizeType = false;
        judgeCallback = async (type, done) => {
            if (type === INFO_MAX_SIZE_APPROACHING) {
                isSizeType = true;
                setDurationOfPath(0);
                toSetSubsequentFileWithPromise(AUDIO_SUB_STR + '11fp.m4a', done);
            } else if (type === INFO_MAX_DURATION_APPROACHING) {
                toSetSubsequentFileWithPromise(AUDIO_SUB_STR + '11fp.m4a', done);
            } else if (type === INFO_NEXT_FILE_STARTED) {
                await waitForSeconds(10000);
                setDurationOfPath(0);
                await toCheckFile(preFdNumber, isSizeType ? REACHED_SIZE_STATE : IGNORE_SIZE_STATE, done);
                await toCheckFile(fdNumber, IGNORE_SIZE_STATE, done);
                audioRecorder.stop();
                audioRecorder.release();
                await toCheckVideo(done);
                done();
            }
        };
        perActCallback = () => {
            audioRecorder.start();
        };
        audioRecorder.prepare(audioConfig);
    })

    /* *
       * @tc.number    : SUB_MEDIA_AUDIO_RECORDER_SPLITER_PROMISE_TEST_1200
       * @tc.name      : set maxduration is min to spliter for audio
       * @tc.desc      : set maxduration is min to 90% trigger setsubsequentfile
       * @tc.size      : MediumTest
       * @tc.type      : Function
       * @tc.level     : Level0
       */
    it('SUB_MEDIA_AUDIO_RECORDER_SPLITER_PROMISE_TEST_1200', 0, async function (done) {
        console.info('[AudioRecorder] SUB_MEDIA_AUDIO_RECORDER_SPLITER_PROMISE_TEST_1200 start');
        audioConfig.maxDuration = DURATION_LOWER_LIMIT;
        await toInitFdData('12fp.m4a', done);
        audioConfig.uri = fdPath;
        initAudioRecorder(done);
        judgeCallback = async (type, done) => {
            if (type === INFO_MAX_SIZE_APPROACHING || type === INFO_MAX_SIZE_REACHED) {
                unExpectFail(done);
            }
            if (type === INFO_MAX_DURATION_APPROACHING) {
                setDurationOfPath(audioConfig.maxDuration);
                toSetSubsequentFileWithPromise(AUDIO_SUB_STR + '12fp.m4a', done);
            } else if (type === INFO_NEXT_FILE_STARTED) {
                await waitForSeconds(10000);
                await toCheckFile(preFdNumber, REACHED_SIZE_STATE, done);
                await toCheckFile(fdNumber, IGNORE_SIZE_STATE, done);
                audioRecorder.stop();
                audioRecorder.release();
                await toCheckVideo(done);
                done();
            }
        };
        perActCallback = () => {
            audioRecorder.start();
        };
        audioRecorder.prepare(audioConfig);
    })

    //	-------------------------------------------------------------------------------------------

    /* *
       * @tc.number    : SUB_MEDIA_AUDIO_RECORDER_SPLITER_CALLBACK_TEST_0100
       * @tc.name      : set maxsize is min to spliter for audio
       * @tc.desc      : start, To 90% trigger setsubsequentfile
       * @tc.size      : MediumTest
       * @tc.type      : Function
       * @tc.level     : Level0
       */
    it('SUB_MEDIA_AUDIO_RECORDER_SPLITER_CALLBACK_TEST_0100', 0, async function (done) {
        console.info('[AudioRecorder] SUB_MEDIA_AUDIO_RECORDER_SPLITER_CALLBACK_TEST_0100 start');
        audioConfig.maxSize = SIZE_LOWER_LIMIT;
        await toInitFdData('01fc.m4a', done);
        audioConfig.uri = fdPath;
        initAudioRecorder(done);
        judgeCallback = async (type, done) => {
            if (type === INFO_MAX_DURATION_APPROACHING || type === INFO_MAX_DURATION_REACHED) {
                unExpectFail(done);
            }
            if (type === INFO_MAX_SIZE_APPROACHING) {
                toSetSubsequentFileWithCallback(AUDIO_SUB_STR + '01fc.m4a', done);
            } else if (type === INFO_NEXT_FILE_STARTED) {
                await waitForSeconds(10000);
                await toCheckFile(preFdNumber, REACHED_SIZE_STATE, done);
                await toCheckFile(fdNumber, IGNORE_SIZE_STATE, done);
                audioRecorder.stop();
                audioRecorder.release();
                await toCheckVideo(done);
                done();
            }
        };
        perActCallback = () => {
            audioRecorder.start();
        };
        audioRecorder.prepare(audioConfig);
    })

    /* *
       * @tc.number    : SUB_MEDIA_AUDIO_RECORDER_SPLITER_CALLBACK_TEST_0200
       * @tc.name      : set maxsize is min to spliter for audio
       * @tc.desc      : start->pause->resume,To 90% trigger setsubsequentfile,stop
       * @tc.size      : MediumTest
       * @tc.type      : Function
       * @tc.level     : Level0
       */
    it('SUB_MEDIA_AUDIO_RECORDER_SPLITER_CALLBACK_TEST_0200', 0, async function (done) {
        console.info('[AudioRecorder] SUB_MEDIA_AUDIO_RECORDER_SPLITER_CALLBACK_TEST_0200 start');
        audioConfig.maxSize = SIZE_LOWER_LIMIT;
        await toInitFdData('02fc.m4a', done);
        audioConfig.uri = fdPath;
        initAudioRecorder(done);
        judgeCallback = async (type, done) => {
            if (type === INFO_MAX_DURATION_APPROACHING || type === INFO_MAX_DURATION_REACHED) {
                unExpectFail(done);
            }
            if (type === INFO_MAX_SIZE_APPROACHING) {
                toSetSubsequentFileWithCallback(AUDIO_SUB_STR + '02fc.m4a', done);
            } else if (type === INFO_NEXT_FILE_STARTED) {
                await waitForSeconds(10000);
                await toCheckFile(preFdNumber, REACHED_SIZE_STATE, done);
                await toCheckFile(fdNumber, IGNORE_SIZE_STATE, done);
                audioRecorder.stop();
                audioRecorder.release();
                await toCheckVideo(done);
                done();
            }
        };
        perActCallback = () => {
            audioRecorder.start();
            audioRecorder.pause();
            audioRecorder.resume();
        };
        audioRecorder.prepare(audioConfig);
    })

    /* *
       * @tc.number    : SUB_MEDIA_AUDIO_RECORDER_SPLITER_CALLBACK_TEST_0300
       * @tc.name      : set maxsize is min to spliter for audio
       * @tc.desc      : start->reset->prepare->start,To 90% trigger setsubsequentfile,stop
       * @tc.size      : MediumTest
       * @tc.type      : Function
       * @tc.level     : Level0
       */
    it('SUB_MEDIA_AUDIO_RECORDER_SPLITER_CALLBACK_TEST_0300', 0, async function (done) {
        console.info('[AudioRecorder] SUB_MEDIA_AUDIO_RECORDER_SPLITER_CALLBACK_TEST_0300 start');
        audioConfig.maxSize = SIZE_LOWER_LIMIT;
        await toInitFdData('03fc.m4a', done);
        audioConfig.uri = fdPath;
        initAudioRecorder(done);
        judgeCallback = async (type, done) => {
            if (type === INFO_MAX_DURATION_APPROACHING || type === INFO_MAX_DURATION_REACHED) {
                unExpectFail(done);
            }
            if (type === INFO_MAX_SIZE_APPROACHING) {
                toSetSubsequentFileWithCallback(AUDIO_SUB_STR + '03fc.m4a', done);
            } else if (type === INFO_NEXT_FILE_STARTED) {
                await waitForSeconds(10000);
                await toCheckFile(preFdNumber, REACHED_SIZE_STATE, done);
                await toCheckFile(fdNumber, IGNORE_SIZE_STATE, done);
                audioRecorder.stop();
                audioRecorder.release();
                await toCheckVideo(done);
                done();
            }
        };
        perActCallback = () => {
            audioRecorder.start();
            audioRecorder.reset();
            audioRecorder.prepare(audioConfig);
            perActCallback = () => {
                audioRecorder.start();
            }
        };
        audioRecorder.prepare(audioConfig);
    })

    /* *
       * @tc.number    : SUB_MEDIA_AUDIO_RECORDER_SPLITER_CALLBACK_TEST_0400
       * @tc.name      : set maxsize is min to spliter for audio
       * @tc.desc      : set maxduration is min,To 90% trigger setsubsequentfile,stop
       * @tc.size      : MediumTest
       * @tc.type      : Function
       * @tc.level     : Level0
       */
    it('SUB_MEDIA_AUDIO_RECORDER_SPLITER_CALLBACK_TEST_0400', 0, async function (done) {
        console.info('[AudioRecorder] SUB_MEDIA_AUDIO_RECORDER_SPLITER_CALLBACK_TEST_0400 start');
        audioConfig.maxDuration = DURATION_LOWER_LIMIT;
        await toInitFdData('04fc.m4a', done);
        audioConfig.uri = fdPath;
        initAudioRecorder(done);
        judgeCallback = async (type, done) => {
            if (type === INFO_MAX_SIZE_APPROACHING || type === INFO_MAX_SIZE_REACHED) {
                unExpectFail(done);
            }
            if (type === INFO_MAX_DURATION_APPROACHING) {
                audioRecorder.stop();
                audioRecorder.release();
                setDurationOfPath(audioConfig.maxDuration * 0.9)
                await toCheckFile(fdNumber, IGNORE_SIZE_STATE, done);
                await waitForSeconds(3000);
                await toCheckVideo(done);
                done();
            }
        };
        perActCallback = () => {
            audioRecorder.start();
        };
        audioRecorder.prepare(audioConfig);
    })

    /* *
       * @tc.number    : SUB_MEDIA_AUDIO_RECORDER_SPLITER_CALLBACK_TEST_0500
       * @tc.name      : set maxsize is min to spliter for audio
       * @tc.desc      : set maxsize is 10M,start,To 90% trigger setsubsequentfile,stop
       * @tc.size      : MediumTest
       * @tc.type      : Function
       * @tc.level     : Level0
       */
    it('SUB_MEDIA_AUDIO_RECORDER_SPLITER_CALLBACK_TEST_0500', 0, async function (done) {
        console.info('[AudioRecorder] SUB_MEDIA_AUDIO_RECORDER_SPLITER_CALLBACK_TEST_0500 start');
        audioConfig.maxSize = 10 * 1024 * 1024;
        await toInitFdData('05fc.m4a', done);
        audioConfig.uri = fdPath;
        initAudioRecorder(done);
        judgeCallback = async (type, done) => {
            if (type === INFO_MAX_DURATION_APPROACHING || type === INFO_MAX_DURATION_REACHED) {
                unExpectFail(done);
            }
            if (type === INFO_MAX_SIZE_APPROACHING) {
                audioRecorder.stop();
                await toCheckFile(fdNumber, APPROACHING_SIZE_STATE, done);
                audioRecorder.release();
                await waitForSeconds(3000);
                await toCheckVideo(done);
                done();
            }
        };
        perActCallback = () => {
            audioRecorder.start();
        };
        audioRecorder.prepare(audioConfig);
    })

    /* *
       * @tc.number    : SUB_MEDIA_AUDIO_RECORDER_SPLITER_CALLBACK_TEST_0600
       * @tc.name      : set maxsize is min to spliter for audio
       * @tc.desc      : set maxduration is min,250S starts recording,To 90% trigger setsubsequentfile
       * @tc.size      : MediumTest
       * @tc.type      : Function
       * @tc.level     : Level0
       */
    it('SUB_MEDIA_AUDIO_RECORDER_SPLITER_CALLBACK_TEST_0600', 0, async function (done) {
        console.info('[AudioRecorder] SUB_MEDIA_AUDIO_RECORDER_SPLITER_CALLBACK_TEST_0600 start');
        audioConfig.maxDuration = DURATION_LOWER_LIMIT;
        await toInitFdData('06fc.m4a', done);
        audioConfig.uri = fdPath;
        initAudioRecorder(done);
        let audioCount = 1;
        judgeCallback = async (type, done) => {
            if (type === INFO_MAX_SIZE_APPROACHING || type === INFO_MAX_SIZE_REACHED) {
                unExpectFail(done);
            }
            if (type === INFO_MAX_DURATION_APPROACHING) {
                await toCheckFile(fdNumber, IGNORE_SIZE_STATE, done);
                toSetSubsequentFileWithCallback(AUDIO_SUB_STR + '06-' + audioCount + 'fc.m4a', done);
                audioCount++;
            }
        };
        perActCallback = () => {
            audioRecorder.start();
        };
        audioRecorder.prepare(audioConfig);
        // wait for 214S
        setTimeout(async () => {
            console.info('setTimeout called, audioCount: ' + audioCount);
            if (audioCount < 5) {
                expect(false).assertTrue();
                done();
            } else {
                expect(true).assertTrue();
            }
            setDurationOfPath(0);
            await toCheckFile(fdNumber, IGNORE_SIZE_STATE, done);
            audioRecorder.stop();
            audioRecorder.release();
            await toCheckVideo(done);
            done();
        }, 250000)
    })

    /* *
       * @tc.number    : SUB_MEDIA_AUDIO_RECORDER_SPLITER_CALLBACK_TEST_0700
       * @tc.name      : set maxsize is min to spliter for audio
       * @tc.desc      : set maxsize is min,pause and resume,To 90% trigger setsubsequentfile,stop
       * @tc.size      : MediumTest
       * @tc.type      : Function
       * @tc.level     : Level0
       */
    it('SUB_MEDIA_AUDIO_RECORDER_SPLITER_CALLBACK_TEST_0700', 0, async function (done) {
        console.info('[AudioRecorder] SUB_MEDIA_AUDIO_RECORDER_SPLITER_CALLBACK_TEST_0700 start');
        audioConfig.maxSize = SIZE_LOWER_LIMIT;
        await toInitFdData('07fc.m4a', done);
        audioConfig.uri = fdPath;
        initAudioRecorder(done);
        judgeCallback = async (type, done) => {
            if (type === INFO_MAX_DURATION_APPROACHING || type === INFO_MAX_DURATION_REACHED) {
                unExpectFail(done);
            }
            if (type === INFO_MAX_SIZE_APPROACHING) {
                audioRecorder.pause();
                audioRecorder.resume();
                toSetSubsequentFileWithCallback(AUDIO_SUB_STR + '07fc.m4a', done);
            } else if (type === INFO_NEXT_FILE_STARTED) {
                await waitForSeconds(10000);
                await toCheckFile(preFdNumber, REACHED_SIZE_STATE, done);
                await toCheckFile(fdNumber, IGNORE_SIZE_STATE, done);
                audioRecorder.stop();
                audioRecorder.release();
                await toCheckVideo(done);
                done();
            }
        };
        perActCallback = () => {
            audioRecorder.start();
        };
        audioRecorder.prepare(audioConfig);
    })

    /* *
       * @tc.number    : SUB_MEDIA_AUDIO_RECORDER_SPLITER_CALLBACK_TEST_0800
       * @tc.name      : set maxsize is min to spliter for audio
       * @tc.desc      : set maxsize is 10M and set maxduration is min to 90% trigger setsubsequentfile
       * @tc.size      : MediumTest
       * @tc.type      : Function
       * @tc.level     : Level0
       */
    it('SUB_MEDIA_AUDIO_RECORDER_SPLITER_CALLBACK_TEST_0800', 0, async function (done) {
        console.info('[AudioRecorder] SUB_MEDIA_AUDIO_RECORDER_SPLITER_CALLBACK_TEST_0800 start');
        audioConfig.maxSize = 10 * 1024 * 1024;
        audioConfig.maxDuration = DURATION_LOWER_LIMIT;
        await toInitFdData('08fc.m4a', done);
        audioConfig.uri = fdPath;
        initAudioRecorder(done);
        let isSizeType = false;
        judgeCallback = async (type, done) => {
            if (type === INFO_MAX_SIZE_APPROACHING) {
                isSizeType = true;
                setDurationOfPath(0);
                toSetSubsequentFileWithCallback(AUDIO_SUB_STR + '08fc.m4a', done);
            } else if (type === INFO_MAX_DURATION_APPROACHING) {
                toSetSubsequentFileWithCallback(AUDIO_SUB_STR + '08fc.m4a', done);
            } else if (type === INFO_NEXT_FILE_STARTED) {
                await waitForSeconds(10000);
                setDurationOfPath(0);
                await toCheckFile(preFdNumber, isSizeType ? REACHED_SIZE_STATE : IGNORE_SIZE_STATE, done);
                await toCheckFile(fdNumber, IGNORE_SIZE_STATE, done);
                audioRecorder.stop();
                audioRecorder.release();
                await toCheckVideo(done);
                done();
            }
        };
        perActCallback = () => {
            audioRecorder.start();
        };
        audioRecorder.prepare(audioConfig);
    })

    /* *
       * @tc.number    : SUB_MEDIA_AUDIO_RECORDER_SPLITER_CALLBACK_TEST_0900
       * @tc.name      : set maxsize is min to spliter for audio
       * @tc.desc      : set maxsize is min and set maxduration is min to 90% trigger setsubsequentfile
       * @tc.size      : MediumTest
       * @tc.type      : Function
       * @tc.level     : Level0
       */
    it('SUB_MEDIA_AUDIO_RECORDER_SPLITER_CALLBACK_TEST_0900', 0, async function (done) {
        console.info('[AudioRecorder] SUB_MEDIA_AUDIO_RECORDER_SPLITER_CALLBACK_TEST_0900 start');
        audioConfig.maxSize = SIZE_LOWER_LIMIT;
        audioConfig.maxDuration = DURATION_LOWER_LIMIT;
        await toInitFdData('09fc.m4a', done);
        audioConfig.uri = fdPath;
        initAudioRecorder(done);
        let isSizeType = false;
        judgeCallback = async (type, done) => {
            if (type === INFO_MAX_SIZE_APPROACHING) {
                isSizeType = true;
                setDurationOfPath(0);
                toSetSubsequentFileWithCallback(AUDIO_SUB_STR + '09fc.m4a', done);
            } else if (type === INFO_MAX_DURATION_APPROACHING) {
                toSetSubsequentFileWithCallback(AUDIO_SUB_STR + '09fc.m4a', done);
            } else if (type === INFO_NEXT_FILE_STARTED) {
                await waitForSeconds(10000);
                setDurationOfPath(0);
                await toCheckFile(preFdNumber, isSizeType ? REACHED_SIZE_STATE : IGNORE_SIZE_STATE, done);
                await toCheckFile(fdNumber, IGNORE_SIZE_STATE, done);
                audioRecorder.stop();
                audioRecorder.release();
                await toCheckVideo(done);
                done();
            }
        };
        perActCallback = () => {
            audioRecorder.start();
        };
        audioRecorder.prepare(audioConfig);
    })

    /* *
       * @tc.number    : SUB_MEDIA_AUDIO_RECORDER_SPLITER_CALLBACK_TEST_1000
       * @tc.name      : set maxsize is min to spliter for audio
       * @tc.desc      : set maxsize is min to 90% trigger setsubsequentfile cycle 5 times
       * @tc.size      : MediumTest
       * @tc.type      : Function
       * @tc.level     : Level0
       */
    it('SUB_MEDIA_AUDIO_RECORDER_SPLITER_CALLBACK_TEST_1000', 0, async function (done) {
        console.info('[AudioRecorder] SUB_MEDIA_AUDIO_RECORDER_SPLITER_CALLBACK_TEST_1000 start');
        audioConfig.maxSize = SIZE_LOWER_LIMIT;
        await toInitFdData('10fc.m4a', done);
        audioConfig.uri = fdPath;
        initAudioRecorder(done);
        judgeCallback = async (type, done) => {
            if (type === INFO_MAX_DURATION_APPROACHING || type === INFO_MAX_DURATION_REACHED) {
                unExpectFail(done);
            }
            if (type === INFO_MAX_SIZE_APPROACHING) {
                await toInitFdData(AUDIO_SUB_STR + '10fc.m4a', done);
                isUnExpectSetSub = true;
                // repeat 5 times
                for (let i = 0; i < 5; i++) {
                    audioRecorder.setSubsequentFile(fdPath, (err) => {
                        console.info('setSubsequentFile is called');
                        if (!!err) {
                            failureCallback(err, done)
                        }
                    });
                }
            } else if (type === INFO_NEXT_FILE_STARTED) {
                await waitForSeconds(10000);
                audioRecorder.stop();
                audioRecorder.release();
                await toCheckFile(preFdNumber, REACHED_SIZE_STATE, done);
                await toCheckFile(fdNumber, IGNORE_SIZE_STATE, done);
                await toCheckVideo(done);
                done();
            }
        };
        perActCallback = () => {
            audioRecorder.start();
        };
        audioRecorder.prepare(audioConfig);
    })

    /* *
       * @tc.number    : SUB_MEDIA_AUDIO_RECORDER_SPLITER_CALLBACK_TEST_1100
       * @tc.name      : set maxsize is min to spliter for audio
       * @tc.desc      : set maxsize is min and maxduration is max to 90% trigger setsubsequentfile
       * @tc.size      : MediumTest
       * @tc.type      : Function
       * @tc.level     : Level0
       */
    it('SUB_MEDIA_AUDIO_RECORDER_SPLITER_CALLBACK_TEST_1100', 0, async function (done) {
        console.info('[AudioRecorder] SUB_MEDIA_AUDIO_RECORDER_SPLITER_CALLBACK_TEST_1100 start');
        audioConfig.maxSize = SIZE_LOWER_LIMIT;
        audioConfig.maxDuration = 1800 * 1000;
        await toInitFdData('11fc.m4a', done);
        audioConfig.uri = fdPath;
        initAudioRecorder(done);
        let isSizeType = false;
        judgeCallback = async (type, done) => {
            if (type === INFO_MAX_SIZE_APPROACHING) {
                isSizeType = true;
                setDurationOfPath(0);
                toSetSubsequentFileWithCallback(AUDIO_SUB_STR + '11fc.m4a', done);
            } else if (type === INFO_MAX_DURATION_APPROACHING) {
                toSetSubsequentFileWithCallback(AUDIO_SUB_STR + '11fc.m4a', done);
            } else if (type === INFO_NEXT_FILE_STARTED) {
                await waitForSeconds(10000);
                setDurationOfPath(0);
                await toCheckFile(preFdNumber, isSizeType ? REACHED_SIZE_STATE : IGNORE_SIZE_STATE, done);
                await toCheckFile(fdNumber, IGNORE_SIZE_STATE, done);
                audioRecorder.stop();
                audioRecorder.release();
                await toCheckVideo(done);
                done();
            }
        };
        perActCallback = () => {
            audioRecorder.start();
        };
        audioRecorder.prepare(audioConfig);
    })

    /* *
       * @tc.number    : SUB_MEDIA_AUDIO_RECORDER_SPLITER_CALLBACK_TEST_1200
       * @tc.name      : set maxduration is min to spliter for audio
       * @tc.desc      : set maxduration is min to 90% trigger setsubsequentfile
       * @tc.size      : MediumTest
       * @tc.type      : Function
       * @tc.level     : Level0
       */
    it('SUB_MEDIA_AUDIO_RECORDER_SPLITER_CALLBACK_TEST_1200', 0, async function (done) {
        console.info('[AudioRecorder] SUB_MEDIA_AUDIO_RECORDER_SPLITER_CALLBACK_TEST_1200 start');
        audioConfig.maxDuration = DURATION_LOWER_LIMIT;
        await toInitFdData('12fc.m4a', done);
        audioConfig.uri = fdPath;
        initAudioRecorder(done);
        judgeCallback = async (type, done) => {
            if (type === INFO_MAX_SIZE_APPROACHING || type === INFO_MAX_SIZE_REACHED) {
                unExpectFail(done);
            }
            if (type === INFO_MAX_DURATION_APPROACHING) {
                setDurationOfPath(audioConfig.maxDuration);
                toSetSubsequentFileWithCallback(AUDIO_SUB_STR + '12fc.m4a', done);
            } else if (type === INFO_NEXT_FILE_STARTED) {
                await waitForSeconds(10000);
                await toCheckFile(preFdNumber, REACHED_SIZE_STATE, done);
                await toCheckFile(fdNumber, IGNORE_SIZE_STATE, done);
                audioRecorder.stop();
                audioRecorder.release();
                await toCheckVideo(done);
                done();
            }
        };
        perActCallback = () => {
            audioRecorder.start();
        };
        audioRecorder.prepare(audioConfig);
    })
})