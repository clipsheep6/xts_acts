/**
 * Copyright (c) 2022 Shenzhen Kaihong Digital Industry Development Co., Ltd.
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

import media from '@ohos.multimedia.media'
import * as mediaTestBase from './MediaTestBase.js';

export function resourceName(){
    let timestamp = Date.now();
    let filename = `avRecorder_${timestamp}.m4a`;
    return filename;
}

export async function idleCallback(avRecorder, avConfig, done) {
    console.info('case idleCallback called');
    media.createAVRecorder((error, recorder) => {
        if (recorder != null) {
            avRecorder = recorder;
            console.info('createAVRecorder idleCallback success');
            avRecorder.prepare(avConfig)
            releaseDone(avRecorder, done)
        } else {
            console.info(`createAVRecorder idleCallback fail, error:${error}`);
        }
    });
}

// create avRecorder(promise)
export async function idle(avRecorder) {
    console.info('case createAVRecorder called');
    await media.createAVRecorder().then((recorder) => {
        if (recorder != null) {
            avRecorder = recorder;
            console.info('createAVRecorder success');
        } else {
            console.info('createAVRecorder fail');
        }
    }).catch((error) => {
        console.info(`createAVRecorder catchCallback, error:${error}`);
    });
    return avRecorder;
}

export const AV_RECORDER_STATE = {
    IDLE : 'idle',
    PREPARED : 'prepared',
    STARTED : 'started',
    PAUSED : 'paused',
    STOPPED : 'stopped',
    RELEASED : 'released',
    ERROR : 'error',
}

export function prepareCallback(avRecorder, avConfig) {
    if (typeof(avRecorder) === 'undefined') {
        return;
    }
    avRecorder.prepare(avConfig, (err) => {
        console.info('case prepare called' + err);
        if (err == null) {
            sleep(200)
            console.error(`case prepare success, state is ${avRecorder.state}`);
            expect(avRecorder.state).assertEqual(AV_RECORDER_STATE.PREPARED);
            console.info('prepare success');
        } else {
            console.error(`case prepare error, errMessage is ${err.message}`);
        }
    })
}

export async function preparePromise(avRecorder, avConfig) {
    if (typeof(avRecorder) == 'undefined') {
        return;
    }
    await avRecorder.prepare(avConfig).then(() => {
        expect(avRecorder.state).assertEqual(AV_RECORDER_STATE.PREPARED);
        console.info('prepare success');
    }).catch((err) => {
        console.info('prepare failed and catch error is ' + err.message);
    });
}

export async function getInputSurfacePromise(avRecorder) {
    let surfaceID = null;
    if (typeof(avRecorder) == 'undefined') {
        return;
    }
    await avRecorder.getInputSurface().then((surfaceId) => {
        console.info('getInputSurface success');
        surfaceID = surfaceId;
    }).catch((err) => {
        console.info('getInputSurface failed and catch error is ' + err.message);
    });
}

export function getInputSurfaceCallback(avRecorder) {
    if (typeof(avRecorder) == 'undefined') {
        return;
    }
    let surfaceID = null;
    avRecorder.getInputSurface((err, surfaceId) => {
        if (err == null) {
            console.info('getInputSurface success');
            surfaceID = surfaceId;
        } else {
            console.info('getInputSurface failed and error is ' + err.message);
        }
    });
}

export async function getAVRecorderConfigPromise(avConfig, avRecorder) {
    if (typeof(avRecorder) === 'undefined') {
        return;
    }
    await avRecorder.getAVRecorderConfig().then((config) => {
        console.info('getAVRecorderConfig success');
        expect(config.audioSourceType).assertEqual(avConfig.audioSourceType);
        expect(config.audioBitrate).assertEqual(avConfig.audioBitrate);
    }).catch((err) => {
        console.info('getAVRecorderConfig failed and catch error is ' + err.message);
    });
}

export function getAVRecorderConfigCallback(avRecorder) {
    if (typeof(avRecorder) === 'undefined') {
        return;
    }
    let avRecorderConfig = null;
    avRecorder.getAVRecorderConfig((err, config) => {
        if (err == null) {
            console.info('getAVRecorderConfig success');
            avRecorderConfig = config;
        } else {
            console.info('getAVRecorderConfig failed and error is ' + err.message);
        }
    });
}


export async function startCallback(avRecorder, recorderTime) {
    if (typeof(avRecorder) == 'undefined') {
        return;
    }
    await avRecorder.start((err) => {
        console.info('case start called');
        if (err == null) {
            expect(avRecorder.state).assertEqual(AV_RECORDER_STATE.STARTED);
            console.info('start AVRecorder success');
            if (recorderTime != undefined) {
                setTimeout(() => {
                    console.info('startCallback setTimeout success');
                }, recorderTime);
            }
        } else {
            console.info('start AVRecorder failed and error is ' + err.message);
        }
    })
}

export async function startPromise(avRecorder, recorderTime) {
    if (typeof(avRecorder) == 'undefined') {
        return;
    }
    await avRecorder.start().then(() => {
        expect(avRecorder.state).assertEqual(AV_RECORDER_STATE.STARTED);
        console.info('start success');
        if (recorderTime != undefined) {
            setTimeout(() => {
                console.info('startPromise setTimeout success');
            }, recorderTime);
        }
    }).catch((err) => {
        console.info('start failed and catch error is ' + err.message);
    });
}

export async function pauseCallback(avRecorder) {
    if (typeof(avRecorder) == 'undefined') {
        return;
    }
    await avRecorder.pause((err) => {
        console.info('case pause called');
        if (err == null) {
            expect(avRecorder.state).assertEqual(AV_RECORDER_STATE.PAUSED);
            console.info('pause AVRecorder success');
        } else {
            console.info('pause AVRecorder failed and error is ' + err.message);
        }
    })
}

export async function pausePromise(avRecorder) {
    if (typeof(avRecorder) == 'undefined') {
        return;
    }
    await avRecorder.pause().then(() => {
        expect(avRecorder.state).assertEqual(AV_RECORDER_STATE.PAUSED);
        console.info('pause success');
    }).catch((err) => {
        console.info('pause failed and catch error is ' + err.message);
    });
}

export async function resumeCallback(avRecorder) {
    if (typeof(avRecorder) == 'undefined') {
        return;
    }
    await avRecorder.resume((err) => {
        console.info('case resume called');
        if (err == null) {
            console.info('resume AVRecorder success');
        } else {
            console.info('resume AVRecorder failed and error is ' + err.message);
        }
    })
}

export async function resumePromise(avRecorder) {
    if (typeof(avRecorder) == 'undefined') {
        return;
    }
    await avRecorder.resume().then(() => {
        console.info('resume success');
    }, mediaTestBase.failureCallback).catch(mediaTestBase.catchCallback);
}

export function stopCallback(avRecorder) {
    if (typeof(avRecorder) == 'undefined') {
        return;
    }
    avRecorder.stop((err) => {
        console.info('case stop called');
        if (err == null) {
            expect(avRecorder.state).assertEqual(AV_RECORDER_STATE.STOPPED);
            console.info('stop AVRecorder success');
        } else {
            console.info('stop AVRecorder failed and error is ' + err.message);
        }
    })
}

export async function stopPromise(avRecorder) {
    if (typeof(avRecorder) == 'undefined') {
        return;
    }
    await avRecorder.stop().then(() => {
        expect(avRecorder.state).assertEqual(AV_RECORDER_STATE.STOPPED);
        console.info('stop success');
    }).catch((err) => {
        console.info('stop failed and catch error is ' + err.message);
    });
}

export async function resetCallback(avRecorder) {
    if (typeof(avRecorder) == 'undefined') {
        return;
    }
    await avRecorder.reset((err) => {
        console.info('case reset called');
        if (err == null) {
            expect(avRecorder.state).assertEqual(AV_RECORDER_STATE.IDLE);
            console.info('reset AVRecorder success');
        } else {
            console.info('reset AVRecorder failed and error is ' + err.message);
        }
    })
}

export async function resetPromise(avRecorder) {
    if (typeof(avRecorder) == 'undefined') {
        return;
    }
    await avRecorder.reset().then(() => {
        expect(avRecorder.state).assertEqual(AV_RECORDER_STATE.IDLE);
    }).catch((err) => {
        console.info('reset AVRecorder failed and catch error is ' + err.message);
    });
}

export async function releaseCallback(avRecorder) {
    if (typeof(avRecorder) == 'undefined') {
        return;
    }
    avRecorder.release((err) => {
        console.info('case release called');
        if (err == null) {
            expect(avRecorder.state).assertEqual(AV_RECORDER_STATE.RELEASED);
            console.info('release AVRecorder success');
        } else {
            console.info('release AVRecorder failed and error is ' + err.message);
        }
    })
}

export async function releasePromise(avRecorder) {
    if (typeof(avRecorder) == 'undefined') {
        return;
    }
    await avRecorder.release().then(() => {
        expect(avRecorder.state).assertEqual(AV_RECORDER_STATE.RELEASED);
    }).catch((err) => {
        console.info('release AVRecorder failed and catch error is ' + err.message);
    });
}

export async function releaseDone(avRecorder, done){
    await avRecorder.release().then(() => {
        console.info('releaseDone avRecorder.state is ' + avRecorder.state);
        expect(avRecorder.state).assertEqual(AV_RECORDER_STATE.RELEASED);
        done();
    }).catch((err) => {
        console.info('release releaseDone failed and catch error is ' + err.message);
    });
}

export function sleep(ms) {
    return new Promise(resolve => setTimeout(resolve, ms));
}

export function offCallback(avRecorder, typeArr)
{
    if (avRecorder == null) {
        return;
    }
    for (let i = 0; i < typeArr.length; i++) {
        switch (typeArr[i]) {
            case 'stateChange':
                avRecorder.off('stateChange');
                break;
            case 'error':
                avRecorder.off('error');
                break;
            default:
                break;
        }
    }
}

export async function setOnCallback(avConfig, avRecorder, recorderTime, done) {
    console.info(`case setOnCallback in`);
    avRecorder.on('stateChange', async (state, reason) => {
        console.info('case state has changed, new state is :' + state);
        switch (state) {
            case AV_RECORDER_STATE.IDLE:
                console.info(`case avRecorderWithCallBack is idle`);
                expect(avRecorder.state).assertEqual("idle");
            // start->stop->release
                prepareCallback(avRecorder, avConfig);
                break;
            case AV_RECORDER_STATE.PREPARED:
                console.info(`case avRecorderWithCallBack is prepared`);
                expect(avRecorder.state).assertEqual('prepared');
                startCallback(avRecorder);
                break;
            case AV_RECORDER_STATE.STARTED:
                console.info(`case avRecorderWithCallBack is started`)
                expect(avRecorder.state).assertEqual('started');
                await sleep(recorderTime);
                stopCallback(avRecorder);
                break;
            case AV_RECORDER_STATE.PAUSED:
                console.info(`case avRecorderWithCallBackis paused`)
                expect(avRecorder.state).assertEqual('paused');
                break;
            case AV_RECORDER_STATE.STOPPED:
                console.info(`case avRecorderWithCallBack is stopped`)
                expect(avRecorder.state).assertEqual('stopped');
                releasePromise(avRecorder)
                break;
            case AV_RECORDER_STATE.RELEASED:
                console.info(`case avRecorderWithCallBack is released`);
                expect(avRecorder.state).assertEqual('released');
                done();
                break;
            case AV_RECORDER_STATE.ERROR:
                console.info(`case avRecorderWithCallBack is error`)
                expect(avRecorder.state).assertEqual('error');
                break;
            default:
                console.info('case state is unknown');
        }
    });

    avRecorder.on('error', (err) => {
        console.info('case avRecorder.on(error) called, errMessage is ' + err.message);
    });
}

export async function setOnaudioCaptureChangeCallback(avConfig, avRecorder, recorderTime, done) {
    console.info(`case setOnaudioCaptureChangeCallback in`);
    let audioCaptureChangeInfo = null;
    avRecorder.on('audioCaptureChange', async (audioCaptureChangeInfo) => {
        if (state === AV_RECORDER_STATE.STARTED) {
            expect(audioCaptureChangeInfo.capturerState).assertEqual(2);
        }
        if (state === AV_RECORDER_STATE.STOPPED) {
            expect(audioCaptureChangeInfo.capturerState).assertEqual(3);
        }
        console.info('case avRecorder.on(audioCaptureChange) called, errMessage is ' + audioCaptureChangeInfo);
    });
}

export async function setPrepareOnCallback(avConfig, avRecorder, recorderTime, done) {
    console.info(`case setOnCallback in`);
    avRecorder.on('stateChange', async (state, reason) => {
        console.info('case state has changed, new state is :' + state);
        switch (state) {
            case AV_RECORDER_STATE.PREPARED:
                console.info(`case AV_RECORDER_STATE.PREPARED`);
                expect(avRecorder.state).assertEqual('prepared');
                releaseCallback(avRecorder);
                break;
            case AV_RECORDER_STATE.RELEASED:
                console.info(`case setPrepareOnCallback is released`);
                expect(avRecorder.state).assertEqual('released');
                done();
                break;
            case AV_RECORDER_STATE.ERROR:
                console.info(`case AV_RECORDER_STATE.ERROR`)
                expect(avRecorder.state).assertEqual('error');
                break;
            default:
                console.info('case state is unknown');
        }
    });
}

export async function avRecorderWithCallBack(avConfig, avRecorder, recorderTime, done) {
    // Create an instance
    avRecorder = await idle(avRecorder)
    setOnCallback(avConfig, avRecorder, recorderTime, done);
    await avRecorder.prepare(avConfig)
}

export async function avRecorderWithCallBack2(avConfig, avRecorder, recorderTime, done) {
    avRecorder = await idle(avRecorder);
    console.info('case avConfig.url is ' + avConfig.url);
    await preparePromise(avRecorder, avConfig);
    await startPromise(avRecorder, recorderTime);
    await pausePromise(avRecorder);
    await stopPromise(avRecorder);
    await avRecorder.reset().then(() => {
        console.info('reset avRecorderWithCallBack2 success');
        expect(avRecorder.state).assertEqual(AV_RECORDER_STATE.IDLE);
    }).catch((err) => {
        console.info('reset avRecorderWithCallBack2 failed and catch error is ' + err.message);
    });
    await releaseDone(avRecorder, done)
}

export async function avRecorderWithCallBack3(avConfig, avRecorder, recorderTime, done) {
    avRecorder = await idle(avRecorder);
    console.info('case avConfig.url is ' + avConfig.url);
    await preparePromise(avRecorder, avConfig);
    await startPromise(avRecorder, recorderTime);
    await pausePromise(avRecorder);
    await resumePromise(avRecorder);
    await stopPromise(avRecorder);
    await avRecorder.reset().then(() => {
        console.info('reset avRecorderWithCallBack3 success');
        expect(avRecorder.state).assertEqual(AV_RECORDER_STATE.IDLE);
    }).catch((err) => {
        console.info('reset avRecorderWithCallBack3 failed and catch error is ' + err.message);
    });
    await releaseDone(avRecorder, done)
}

export async function avRecorderWithCallBack4(avConfig, avRecorder, recorderTime, done) {
    avRecorder = await idle(avRecorder);
    console.info('case avConfig.url is ' + avConfig.url);
    await preparePromise(avRecorder, avConfig);
    await startPromise(avRecorder, recorderTime);
    await stopPromise(avRecorder);
    await avRecorder.reset().then(() => {
        console.info('reset avRecorderWithCallBack4 success');
        expect(avRecorder.state).assertEqual(AV_RECORDER_STATE.IDLE);
    }).catch((err) => {
        console.info('reset avRecorderWithCallBack4 failed and catch error is ' + err.message);
    });
    await releaseDone(avRecorder, done)
}

export async function avRecorderWithCallBack5(avConfig, avRecorder, recorderTime, done) {
    avRecorder = await idle(avRecorder);
    console.info('case avConfig.url is ' + avConfig.url);
    await preparePromise(avRecorder, avConfig);
    await startPromise(avRecorder, recorderTime);
    await pausePromise(avRecorder);
    await resumePromise(avRecorder);
    await avRecorder.reset().then(() => {
        console.info('reset avRecorderWithCallBack5 success');
        expect(avRecorder.state).assertEqual(AV_RECORDER_STATE.IDLE);
    }).catch((err) => {
        console.info('reset avRecorderWithCallBack5 failed and catch error is ' + err.message);
    });
    await releaseDone(avRecorder, done)
}

export async function avRecorderWithCallBack6(avConfig, avRecorder, recorderTime, done) {
    avRecorder = await idle(avRecorder);
    console.info('case avConfig.url is ' + avConfig.url);
    await preparePromise(avRecorder, avConfig);
    await startPromise(avRecorder, recorderTime);
    await pausePromise(avRecorder);
    await startPromise(avRecorder, recorderTime);
    await avRecorder.reset().then(() => {
        console.info('reset avRecorderWithCallBack6 success');
        expect(avRecorder.state).assertEqual(AV_RECORDER_STATE.IDLE);
    }).catch((err) => {
        console.info('reset avRecorderWithCallBack6 failed and catch error is ' + err.message);
    });
    await releaseDone(avRecorder, done)
}

export async function avRecorderWithCallBack7(avConfig, avRecorder, recorderTime, done) {
    avRecorder = await idle(avRecorder);
    console.info('case avConfig.url is ' + avConfig.url);
    await preparePromise(avRecorder, avConfig);
    await startPromise(avRecorder, recorderTime);
    await pausePromise(avRecorder);
    await resumePromise(avRecorder);
    await pausePromise(avRecorder);
    await avRecorder.reset().then(() => {
        console.info('reset avRecorderWithCallBack7 success');
        expect(avRecorder.state).assertEqual(AV_RECORDER_STATE.IDLE);
    }).catch((err) => {
        console.info('reset avRecorderWithCallBack7 failed and catch error is ' + err.message);
    });
    await releaseDone(avRecorder, done)
}

export async function avRecorderWithCallBack8(avConfig, avRecorder, recorderTime, done) {
    avRecorder = await idle(avRecorder);
    console.info('case avConfig.url is ' + avConfig.url);
    await preparePromise(avRecorder, avConfig);
    await startPromise(avRecorder, recorderTime);
    await pausePromise(avRecorder);
    await stopPromise(avRecorder);
    await startPromise(avRecorder, recorderTime);
    await pausePromise(avRecorder);
    await avRecorder.reset().then(() => {
        console.info('reset avRecorderWithCallBack8 success');
        expect(avRecorder.state).assertEqual(AV_RECORDER_STATE.IDLE);
    }).catch((err) => {
        console.info('reset avRecorderWithCallBack8 failed and catch error is ' + err.message);
    });
    await releaseDone(avRecorder, done)
}

export async function avRecorderWithCallBack9(avConfig, avRecorder, recorderTime, done) {
    avRecorder = await idle(avRecorder);
    console.info('case avConfig.url is ' + avConfig.url);
    await preparePromise(avRecorder, avConfig);
    await startPromise(avRecorder, recorderTime);
    await stopPromise(avRecorder);
    await avRecorder.reset().then(() => {
        console.info('reset avRecorderWithCallBack9 success');
        expect(avRecorder.state).assertEqual(AV_RECORDER_STATE.IDLE);
    }).catch((err) => {
        console.info('reset avRecorderWithCallBack9 failed and catch error is ' + err.message);
    });
    await releaseDone(avRecorder, done)
}

export async function avRecorderWithCallBack10(avConfig, avRecorder, recorderTime, done) {
    avRecorder = await idle(avRecorder);
    console.info('case avConfig.url is ' + avConfig.url);
    await preparePromise(avRecorder, avConfig);
    await startPromise(avRecorder, recorderTime);
    await stopPromise(avRecorder);
    await pausePromise(avRecorder);
    await avRecorder.reset().then(() => {
        console.info('reset AVRecorder success');
        expect(avRecorder.state).assertEqual(AV_RECORDER_STATE.IDLE);
    }).catch((err) => {
        console.info('reset AVRecorder failed and catch error is ' + err.message);
    });
    await releaseDone(avRecorder, done)
}

export async function avRecorderWithCallBack11(avConfig, avRecorder, recorderTime, done) {
    avRecorder = await idle(avRecorder);
    console.info('case avConfig.url is ' + avConfig.url);
    await preparePromise(avRecorder, avConfig);
    await startPromise(avRecorder, recorderTime);
    await pausePromise(avRecorder);
    await avRecorder.reset().then(() => {
        console.info('avRecorderWithCallBack11 reset AVRecorder success');
        expect(avRecorder.state).assertEqual(AV_RECORDER_STATE.IDLE);
    }).catch((err) => {
        console.info('avRecorderWithCallBack11 reset AVRecorder failed and catch error is ' + err.message);
    });
    await releaseDone(avRecorder, done)
}

export async function avRecorderWithCallBack13(avConfig, avRecorder, recorderTime, done) {
    avRecorder = await idle(avRecorder);
    console.info('case avConfig.url is ' + avConfig.url);
    await preparePromise(avRecorder, avConfig);
    await startPromise(avRecorder, recorderTime);
    await pausePromise(avRecorder);
    await resumePromise(avRecorder);
    await sleep(recorderTime);
    await stopPromise(avRecorder);
    await avRecorder.release().then(() => {
        expect(avRecorder.state).assertEqual(AV_RECORDER_STATE.RELEASED);
        console.info('release success');
        done();
    }).catch((err) => {
        console.info('release failed and catch error is ' + err.message);
    });
}

export async function avRecorderWithPreparePromise(avConfig, avRecorder, loopTimes, done) {
    avRecorder = await idle(avRecorder);
    console.info('case avConfig.url is ' + avConfig.url);
    while (loopTimes > 0) {
        await preparePromise(avRecorder, avConfig);
        loopTimes--;
    }
    await releaseDone(avRecorder, done)
}

export async function avRecorderWithStartPromise(avConfig, avRecorder, loopTimes, done) {
    avRecorder = await idle(avRecorder);
    console.info('case avConfig.url is ' + avConfig.url);
    await preparePromise(avRecorder, avConfig);
    while (loopTimes > 0) {
        await startPromise(avRecorder);
        loopTimes--;
    }
    await releaseDone(avRecorder, done)
}

export async function avRecorderWithPausePromise(avConfig, avRecorder, recorderTime, loopTimes, done) {
    avRecorder = await idle(avRecorder);
    console.info('case avConfig.url is ' + avConfig.url);
    await preparePromise(avRecorder, avConfig);
    await startPromise(avRecorder, recorderTime);
    while (loopTimes > 0) {
        await pausePromise(avRecorder);
        loopTimes--;
    }
    await releaseDone(avRecorder, done)
}

export async function avRecorderWithResumePromise(avConfig, avRecorder, recorderTime, loopTimes, done) {
    avRecorder = await idle(avRecorder);
    console.info('case avConfig.url is ' + avConfig.url);
    await preparePromise(avRecorder, avConfig);
    await startPromise(avRecorder, recorderTime);
    await pausePromise(avRecorder);
    while (loopTimes > 0) {
        await resumePromise(avRecorder);
        loopTimes--;
    }
    await releaseDone(avRecorder, done)
}

export async function avRecorderWithStopPromise(avConfig, avRecorder, recorderTime, loopTimes, done) {
    avRecorder = await idle(avRecorder);
    console.info('case avConfig.url is ' + avConfig.url);
    await preparePromise(avRecorder, avConfig);
    await startPromise(avRecorder, recorderTime);
    while (loopTimes > 0) {
        await stopPromise(avRecorder);
        loopTimes--;
    }
    await releaseDone(avRecorder, done)
}

export async function avRecorderWithResetPromise(avConfig, avRecorder, recorderTime, loopTimes, done) {
    avRecorder = await idle(avRecorder);
    console.info('case avConfig.url is ' + avConfig.url);
    await preparePromise(avRecorder, avConfig);
    await startPromise(avRecorder, recorderTime);
    while (loopTimes > 0) {
        await resetPromise(avRecorder);
        loopTimes--;
    }
    await releaseDone(avRecorder, done)
}

export async function avRecorderWithReleasePromise(avConfig, avRecorder, recorderTime, loopTimes, done) {
    avRecorder = await idle(avRecorder);
    console.info('case avConfig.url is ' + avConfig.url);
    await preparePromise(avRecorder, avConfig);
    await startPromise(avRecorder, recorderTime);
    while (loopTimes > 0) {
        await releasePromise(avRecorder);
        loopTimes--;
    }
    done();
}

export async function avRecorderWithPrepareCallback(avConfig, avRecorder, loopTimes, done) {
    avRecorder = await idle(avRecorder);
    console.info('case avConfig.url is ' + avConfig.url);
    while (loopTimes > 0) {
        if(loopTimes == 1){
            avRecorder.release()
            done();
        }
        prepareCallback(avRecorder, avConfig);
        loopTimes--;
    }
}

export async function avRecorderWithStartCallback(avConfig, avRecorder, loopTimes, done) {
    avRecorder = await idle(avRecorder);
    sleep(300)
    await avRecorder.prepare(avConfig).then(() => {
        expect(avRecorder.state).assertEqual(AV_RECORDER_STATE.PREPARED);
        console.info('prepare success');
    }).catch((err) => {
        console.info('prepare failed and catch error is ' + err.message);
    });
    await sleep(300)
    while (loopTimes > 0) {
        console.info(`avRecorderWithStartCallback loop time is :${loopTimes}`)
        startCallback(avRecorder);
        await sleep(200)
        loopTimes--;
        if(loopTimes == 0){
            await avRecorder.release().then(() => {
                console.info(`avRecorderWithStartCallback release success`)
                done();
            }).catch((err) => {
                console.info('release avRecorderWithStartCallback failed and catch error is ' + err.message);
            });
            done();
        }
    }
}

export async function avRecorderWithPauseCallback(avConfig, avRecorder, recorderTime, loopTimes, done) {
    avRecorder = await idle(avRecorder);
    console.info('case avRecorderWithPauseCallback avConfig.url is ' + avConfig.url);
    await preparePromise(avRecorder, avConfig);
    await startPromise(avRecorder, recorderTime);
    for(var i = 0;i < 1001;i++){
        if(i == 1000){
            avRecorder.release()
            done();
        }else{
            console.info(`avRecorderWithPauseCallback loop time is :${i}`)
        }
        await pauseCallback(avRecorder, avConfig);
    }
}

export async function avRecorderWithResumeCallback(avConfig, avRecorder, recorderTime, loopTimes, done) {
    avRecorder = await idle(avRecorder);
    console.info('case avRecorderWithPauseCallback avConfig.url is ' + avConfig.url);
    await preparePromise(avRecorder, avConfig);
    await startPromise(avRecorder, recorderTime);
    await pausePromise(avRecorder);
    for(var i = 0;i < 1001;i++){
        if(i == 1000){
            avRecorder.release()
            done();
        }else{
            console.info(`avRecorderWithResumeCallback loop time is :${i}`)
        }
        await resumeCallback(avRecorder);
    }
}

export async function avRecorderWithStopCallback(avConfig, avRecorder, recorderTime, loopTimes, done) {
    avRecorder = await idle(avRecorder);
    console.info('case avRecorderWithStopCallback avConfig.url is ' + avConfig.url);
    await preparePromise(avRecorder, avConfig);
    await startPromise(avRecorder, recorderTime);
    while (loopTimes > 0) {
        if(loopTimes == 1){
            avRecorder.release()
            done();
        }
        stopCallback(avRecorder, avConfig);
        loopTimes--;
    }
    //    await releaseDone(avRecorder, done)
}

export async function avRecorderWithResetCallback(avConfig, avRecorder, recorderTime, loopTimes, done) {
    avRecorder = await idle(avRecorder);
    console.info('case avRecorderWithResetCallback avConfig.url is ' + avConfig.url);
    await preparePromise(avRecorder, avConfig);
    await startPromise(avRecorder, recorderTime);
    while (loopTimes > 0) {
        if(loopTimes == 1){
            avRecorder.release()
            done();
        }
        await resetCallback(avRecorder);
        loopTimes--;
    }
    //    await releaseDone(avRecorder, done)
}

export async function avRecorderWithReleaseCallback(avConfig, avRecorder, recorderTime, loopTimes, done) {
    avRecorder = await idle(avRecorder);
    console.info('case avRecorderWithReleaseCallback avConfig.url is ' + avConfig.url);
    await preparePromise(avRecorder, avConfig);
    await startPromise(avRecorder, recorderTime);
    while (loopTimes > 0) {
        if(loopTimes == 1){
            avRecorder.release()
            done();
        }
        releaseCallback(avRecorder, avConfig);
        loopTimes--;
    }
}

///xxxxx
export async function avRecorderLoopPrepare2ResetWithPromise(avConfig, avRecorder, loopTimes, done) {
    avRecorder = await idle(avRecorder);
    sleep(300)
    console.info('case avRecorderLoopPrepare2ResetWithPromise avConfig.url is ' + avConfig.url);
    while (loopTimes > 0) {
        await preparePromise(avRecorder, avConfig);
        await startPromise(avRecorder);
        await resetPromise(avRecorder);
        console.info(`avRecorderLoopPrepare2ResetWithPromise loop time is :${loopTimes}`)
        loopTimes--;
        if(loopTimes == 0){
            await avRecorder.release().then(() => {
                console.info(`avRecorderLoopPrepare2ResetWithPromise release success`)
                done();
            }).catch((err) => {
                console.info('release avRecorderLoopPrepare2ResetWithPromise failed and catch error is ' + err.message);
            });
            done();
        }
    }
    //    await releaseDone(avRecorder, done)
}

export async function avRecorderLoopCreate2ReleaseWithPromise(avConfig, avRecorder, loopTimes, done) {
    console.info(`avRecorderLoopCreate2ReleaseWithPromise loop begin`)
    while (loopTimes > 0) {
        avRecorder = await idle(avRecorder);
        await preparePromise(avRecorder, avConfig);
        await startPromise(avRecorder);
        await resetPromise(avRecorder);
        await releasePromise(avRecorder);
        console.info(`avRecorderLoopCreate2ReleaseWithPromise loop time is :${loopTimes}`)
        loopTimes--;
        if(loopTimes == 0){
            done();
        }
    }
}


export async function avRecorderLoopPrepare2StopWithPromise(avConfig, avRecorder, loopTimes, done) {
    avRecorder = await idle(avRecorder);
    console.info('case avConfig.url is ' + avConfig.url);
    await preparePromise(avRecorder, avConfig);
    while (loopTimes > 0) {
        await startPromise(avRecorder);
        await stopPromise(avRecorder);
        loopTimes--;
        console.info(`avRecorderLoopPrepare2StopWithPromise loop time is :${loopTimes}`)
        if(loopTimes == 0){
            await avRecorder.release().then(() => {
                done();
                console.info(`avRecorderLoopPrepare2StopWithPromise release success`)
            }).catch((err) => {
                console.info('release avRecorderLoopPrepare2StopWithPromise failed and catch error is ' + err.message);
            });
        }
    }
    //    await releaseDone(avRecorder, done)
}

export async function avRecorderLoopPause2ResumeWithPromise(avConfig, avRecorder, loopTimes, done) {
    avRecorder = await idle(avRecorder);
    sleep(200)
    console.info('case avConfig.url is ' + avConfig.url);
    await preparePromise(avRecorder, avConfig);
    sleep(200)
    await startPromise(avRecorder);
    while (loopTimes > 0) {
        await pausePromise(avRecorder);
        await sleep(20)
        await resumePromise(avRecorder);
        console.info(`avRecorderLoopPause2ResumeWithPromise loop time is :${loopTimes}`)
        loopTimes--;
        if(loopTimes == 0){
            await sleep(2000)
            await avRecorder.release().then(() => {
                console.info(`avRecorderLoopPause2ResumeWithPromise release success`)
                done();
            }).catch((err) => {
                console.info('release avRecorderLoopPause2ResumeWithPromise failed and catch error is ' + err.message);
            });
        }
    }
    //    await releaseDone(avRecorder, done)
}

export async function avRecorderLoopCreate2Release2WithPromise(avConfig, avRecorder, loopTimes, done) {
    while (loopTimes > 0) {
        avRecorder = await idle(avRecorder);
        console.info('case avConfig.url is ' + avConfig.url);
        await releasePromise(avRecorder);
        console.info(`avRecorderLoopCreate2Release2WithPromise loop time is :${loopTimes}`)
        loopTimes--;
        if(loopTimes == 0){
            avRecorder.release()
            done();
        }
    }
}

export async function avRecorderLoopPrepare2ResetWithCallback(avConfig, avRecorder, loopTimes, done) {
    avRecorder = await idle(avRecorder);
    sleep(200)
    while (loopTimes > 0) {
        await avRecorder.prepare(avConfig).then(() => {
            expect(avRecorder.state).assertEqual(AV_RECORDER_STATE.PREPARED);
            console.info('prepare success');
        }).catch((err) => {
            console.info('prepare failed and catch error is ' + err.message);
        });
        await sleep(100)
        await startCallback(avRecorder);
        await sleep(100)
        await resetCallback(avRecorder);
        loopTimes--;
        console.info(`avRecorderLoopPrepare2ResetWithCallback loop time is :${loopTimes}`)
        if(loopTimes == 0){
            await sleep(2000)
            await avRecorder.release().then(() => {
                console.info(`avRecorderLoopPrepare2ResetWithCallback release success`)
                done();
            }).catch((err) => {
                console.info('release avRecorderLoopPrepare2ResetWithCallback failed and catch error is ' + err.message);
            });
        }
    }
}

export async function avRecorderLoopCreate2ReleaseWithCallback(avConfig, avRecorder, loopTimes, done) {
    while (loopTimes > 0) {
        console.info(`avRecorderLoopCreate2ReleaseWithCallback test loop start1 `)
        avRecorder = await idle(avRecorder);
        await sleep(200)
        console.info(`avRecorderLoopCreate2ReleaseWithCallback test loop start2 `)
        await avRecorder.prepare(avConfig).then(() => {
            expect(avRecorder.state).assertEqual(AV_RECORDER_STATE.PREPARED);
            console.info('prepare success');
        }).catch((err) => {
            console.info('prepare failed and catch error is ' + err.message);
        });
        console.info(`avRecorderLoopCreate2ReleaseWithCallback test loop start3 `)
        await startCallback(avRecorder);
        await sleep(100)
        console.info(`avRecorderLoopCreate2ReleaseWithCallback test loop start4 `)
        await resetCallback(avRecorder);
        console.info(`avRecorderLoopCreate2ReleaseWithCallback test loop start5 `)
        console.info(`avRecorderLoopCreate2ReleaseWithCallback loop time is :${loopTimes}`)
        loopTimes--;
        avRecorder.release((err) => {
            if (err == null) {
                console.info('release AVRecorder success');
                if(loopTimes == 0){
                    done();
                }
            } else {
                console.info('release AVRecorder failed and error is ' + err.message);
            }
        });
    }
}

export async function avRecorderLoopPrepare2StopWithCallback(avConfig, avRecorder, done, eventEmitter, mySteps) {
    avRecorder = await idle(avRecorder);
    sleep(200)
    eventEmitter.emit(mySteps[0], avRecorder, avConfig, 3000, mySteps, done);
}


export async function avRecorderLoopPause2ResumeWithCallback(avConfig, avRecorder, done, eventEmitter, mySteps) {
    avRecorder = await idle(avRecorder);
    console.info('case avConfig.url is ' + avConfig.url);
    await preparePromise(avRecorder, avConfig);
    sleep(2000)
    await startPromise(avRecorder);
    eventEmitter.emit(mySteps[0], avRecorder, avConfig, 3000, mySteps, done);
}

export async function avRecorderLoopCreate2Release2WithCallback(avConfig, avRecorder, loopTimes, done) {
    while (loopTimes > 0) {
        avRecorder = await idle(avRecorder);
        console.info('case avConfig.url is ' + avConfig.url);
        releaseCallback(avRecorder);
        console.info(`avRecorderLoopCreate2Release2WithCallback loop time is :${loopTimes}`)
        loopTimes--;
        if(loopTimes == 0){
            sleep(2000)
            done();
        }
    }
}

export async function avRecorderReliabilitTest01(avConfig, avRecorder, recorderTime, done) {
    let result = true;
    avRecorder = await idle(avRecorder);
    sleep(2000)
    await avRecorder.pause((err) => {
        if (err == null) {
            console.info('pause avRecorderReliabilitTest01 success');
        } else {
            result = false
            expect(result).assertEqual(false);
            console.info('pause avRecorderReliabilitTest01 failed and error is ' + err.message);
            sleep(1000)
        }
    });
    sleep(2000)
    console.info('pause avRecorderReliabilitTest01 001');
    await releaseDone(avRecorder, done)
}

export async function avRecorderReliabilitTest02(avConfig, avRecorder, recorderTime, done) {
    avRecorder = await idle(avRecorder);
    await preparePromise(avRecorder, avConfig)
    await releaseDone(avRecorder, done)
}

export async function avRecorderReliabilitTest03(avConfig, avRecorder, recorderTime, done) {
    avRecorder = await idle(avRecorder);
    setPrepareOnCallback(avConfig, avRecorder, recorderTime, done)
    await avRecorder.prepare(avConfig)
}

export async function avRecorderReliabilitTest001(avConfig, avRecorder, recorderTime, done) {
    idleCallback(avRecorder, avConfig, done)
}

export async function avRecorderReliabilitTest04(avConfig, avRecorder, recorderTime, done) {
    let result = true;
    avRecorder = await idle(avRecorder);
    await avRecorder.resume().then(() => {
        console.info('resume avRecorderReliabilitTest04 success');
    }).catch((err) => {
        console.info('resume avRecorderReliabilitTest04 failed and catch error is ' + err.message);
        result = false
    });
    expect(result).assertEqual(false);
    await preparePromise(avRecorder, avConfig)
    await releaseDone(avRecorder, done)
}

export async function avRecorderReliabilitTest05(avConfig, avRecorder, recorderTime, done) {
    avRecorder = await idle(avRecorder);
    await prepareCallback(avRecorder, avConfig)
    await releaseDone(avRecorder, done)
}

export async function avRecorderReliabilitTest06(avConfig, avRecorder, recorderTime, done) {
    avRecorder = await idle(avRecorder);
    await preparePromise(avRecorder, avConfig)
    await startPromise(avRecorder)
    await pausePromise(avRecorder)
    await startPromise(avRecorder)
    await releaseDone(avRecorder, done)
}

export async function avRecorderReliabilitTest07(avConfig, avRecorder, recorderTime, done) {
    avRecorder = await idle(avRecorder);
    await preparePromise(avRecorder, avConfig)
    await startPromise(avRecorder)
    await resumePromise(avRecorder)
    await startPromise(avRecorder)
    await releaseDone(avRecorder, done)
}

export async function avRecorderReliabilitTest08(avConfig, avRecorder, recorderTime, done) {
    let result = true;
    avRecorder = await idle(avRecorder);
    await avRecorder.pause().then(() => {
        console.info('pause avRecorderReliabilitTest08 success');
    }).catch((err) => {
        console.info('pause avRecorderReliabilitTest08 failed and catch error is ' + err.message);
        result = false
    });
    expect(result).assertEqual(false);
    await releaseDone(avRecorder, done)
}

export async function avRecorderReliabilitTest09(avConfig, avRecorder, recorderTime, done) {
    let result = true;
    avRecorder = await idle(avRecorder);
    await preparePromise(avRecorder, avConfig)
    await avRecorder.pause().then(() => {
        console.info('pause avRecorderReliabilitTest09 success');
    }).catch((err) => {
        console.info('pause avRecorderReliabilitTest09 failed and catch error is ' + err.message);
        result = false
    });
    expect(result).assertEqual(false);
    await releaseDone(avRecorder, done)
}

export async function avRecorderReliabilitTest10(avConfig, avRecorder, recorderTime, done) {
    avRecorder = await idle(avRecorder);
    await preparePromise(avRecorder, avConfig)
    await startPromise(avRecorder)
    await pausePromise(avRecorder)
    await releaseDone(avRecorder, done)
}

export async function avRecorderReliabilitTest11(avConfig, avRecorder, recorderTime, done) {
    avRecorder = await idle(avRecorder);
    await preparePromise(avRecorder, avConfig)
    await startPromise(avRecorder)
    await resumePromise(avRecorder)
    await pausePromise(avRecorder)
    await releaseDone(avRecorder, done)
}

export async function avRecorderReliabilitTest12(avConfig, avRecorder, recorderTime, done) {
    let result = true;
    avRecorder = await idle(avRecorder);
    await preparePromise(avRecorder, avConfig)
    await startPromise(avRecorder)
    await stopPromise(avRecorder)
    await avRecorder.pause().then(() => {
        console.info('pause avRecorderReliabilitTest12 success');
    }).catch((err) => {
        console.info('pause avRecorderReliabilitTest12 failed and catch error is ' + err.message);
        result = false
    });
    expect(result).assertEqual(false);
    await releaseDone(avRecorder, done)
}

export async function avRecorderReliabilitTest13(avConfig, avRecorder, recorderTime, done) {
    let result = true;
    avRecorder = await idle(avRecorder);
    await preparePromise(avRecorder, avConfig)
    await startPromise(avRecorder)
    await stopPromise(avRecorder)
    await resetPromise(avRecorder)
    await avRecorder.pause().then(() => {
        console.info('pause avRecorderReliabilitTest13 success');
    }).catch((err) => {
        console.info('pause avRecorderReliabilitTest13 failed and catch error is ' + err.message);
        result = false
    });
    expect(result).assertEqual(false);
    await releaseDone(avRecorder, done)
}

export async function avRecorderReliabilitTest14(avConfig, avRecorder, recorderTime, done) {
    let result1 = true;
    let result2 = true;
    let result3 = true;
    let result4 = true;
    let result5 = true;

    avRecorder = await idle(avRecorder);
    await avRecorder.pause().then(() => {
        console.info('pause avRecorderReliabilitTest14 success');
    }).catch((err) => {
        console.info('pause avRecorderReliabilitTest14 failed and catch error is ' + err.message);
        result1 = false
    });
    expect(result1).assertEqual(false);

    await preparePromise(avRecorder, avConfig)
    await avRecorder.pause().then(() => {
        console.info('pause avRecorderReliabilitTest14 success');
    }).catch((err) => {
        console.info('pause avRecorderReliabilitTest14 failed and catch error is ' + err.message);
        result2 = false
    });
    expect(result2).assertEqual(false);

    await startPromise(avRecorder)
    await avRecorder.pause().then(() => {
        console.info('pause avRecorderReliabilitTest14 success');
    }).catch((err) => {
        console.info('pause avRecorderReliabilitTest14 failed and catch error is ' + err.message);
        result3 = false
    });
    expect(result3).assertEqual(true);

    await stopPromise(avRecorder)
    await avRecorder.pause().then(() => {
        console.info('pause avRecorderReliabilitTest14 success');
    }).catch((err) => {
        console.info('pause avRecorderReliabilitTest14 failed and catch error is ' + err.message);
        result4 = false
    });
    expect(result4).assertEqual(false);

    await resetPromise(avRecorder)
    await avRecorder.pause().then(() => {
        console.info('pause avRecorderReliabilitTest14 success');
    }).catch((err) => {
        console.info('pause avRecorderReliabilitTest14 failed and catch error is ' + err.message);
        result5 = false
    });
    expect(result5).assertEqual(false);

    await releaseDone(avRecorder, done)
}

export async function avRecorderReliabilitTest15(avConfig, avRecorder, recorderTime, done) {
    let result1 = true;
    let result2 = true;
    let result3 = true;

    avRecorder = await idle(avRecorder);
    await preparePromise(avRecorder, avConfig)
    await startPromise(avRecorder)
    await avRecorder.pause().then(() => {
        console.info('pause avRecorderReliabilitTest15 success');
    }).catch((err) => {
        console.info('pause avRecorderReliabilitTest15 failed and catch error is ' + err.message);
        result1 = false
    });
    expect(result1).assertEqual(true);

    await avRecorder.pause().then(() => {
        console.info('pause avRecorderReliabilitTest15 success');
    }).catch((err) => {
        console.info('pause avRecorderReliabilitTest15 failed and catch error is ' + err.message);
        result2 = false
    });
    expect(result2).assertEqual(true);

    await avRecorder.pause().then(() => {
        console.info('pause avRecorderReliabilitTest15 success');
    }).catch((err) => {
        console.info('pause avRecorderReliabilitTest15 failed and catch error is ' + err.message);
        result3 = false
    });
    expect(result3).assertEqual(true);

    await releaseDone(avRecorder, done)
}

export async function avRecorderReliabilitTest16(avConfig, avRecorder, recorderTime, done) {
    let result = true;
    avRecorder = await idle(avRecorder);
    await avRecorder.resume().then(() => {
        console.info('resume AVRecorder success');
    }).catch((err) => {
        console.info('resume AVRecorder failed and catch error is ' + err.message);
        result = false
    });
    expect(result).assertEqual(false);
    await releaseDone(avRecorder, done)
}

export async function avRecorderReliabilitTest17(avConfig, avRecorder, recorderTime, done) {
    let result = true;
    avRecorder = await idle(avRecorder);
    await preparePromise(avRecorder, avConfig)
    await avRecorder.resume().then(() => {
        console.info('resume AVRecorder success');
    }).catch((err) => {
        console.info('resume AVRecorder failed and catch error is ' + err.message);
        result = false
    });
    expect(result).assertEqual(false);
    await releaseDone(avRecorder, done)
}

export async function avRecorderReliabilitTest18(avConfig, avRecorder, recorderTime, done) {
    let result = true;
    avRecorder = await idle(avRecorder);
    await preparePromise(avRecorder, avConfig)
    await startPromise(avRecorder)
    await avRecorder.resume().then(() => {
        console.info('avRecorderReliabilitTest18 resume AVRecorder success');
    }).catch((err) => {
        console.info('avRecorderReliabilitTest18 resume AVRecorder failed and catch error is ' + err.message);
        result = false
    });
    expect(result).assertEqual(true);
    await releaseDone(avRecorder, done)
}

export async function avRecorderReliabilitTest19(avConfig, avRecorder, recorderTime, done) {
    let result = true;
    avRecorder = await idle(avRecorder);
    await preparePromise(avRecorder, avConfig)
    await startPromise(avRecorder)
    await pausePromise(avRecorder)
    await avRecorder.resume().then(() => {
        console.info('avRecorderReliabilitTest19 resume AVRecorder success');
    }).catch((err) => {
        console.info('avRecorderReliabilitTest19 resume AVRecorder failed and catch error is ' + err.message);
        result = false
    });
    expect(result).assertEqual(true);
    await releaseDone(avRecorder, done)
}

export async function avRecorderReliabilitTest20(avConfig, avRecorder, recorderTime, done) {
    let result = true;
    avRecorder = await idle(avRecorder);
    await preparePromise(avRecorder, avConfig)
    await startPromise(avRecorder)
    await stopPromise(avRecorder)
    await avRecorder.resume().then(() => {
        console.info('avRecorderReliabilitTest20 resume AVRecorder success');
    }).catch((err) => {
        console.info('avRecorderReliabilitTest20 resume AVRecorder failed and catch error is ' + err.message);
        result = false
    });
    expect(result).assertEqual(false);
    await releaseDone(avRecorder, done)
}

export async function avRecorderReliabilitTest21(avConfig, avRecorder, recorderTime, done) {
    let result = true;
    avRecorder = await idle(avRecorder);
    await preparePromise(avRecorder, avConfig)
    await startPromise(avRecorder)
    await pausePromise(avRecorder)
    await resetPromise(avRecorder)
    await avRecorder.resume().then(() => {
        console.info('avRecorderReliabilitTest20 resume AVRecorder success');
    }).catch((err) => {
        console.info('avRecorderReliabilitTest20 resume AVRecorder failed and catch error is ' + err.message);
        result = false
    });
    expect(result).assertEqual(false);
    await releaseDone(avRecorder, done)
}

export async function avRecorderReliabilitTest22(avConfig, avRecorder, recorderTime, done) {
    let result1 = true;
    let result2 = true;
    let result3 = true;
    let result4 = true;
    let result5 = true;

    avRecorder = await idle(avRecorder);
    await avRecorder.resume().then(() => {
        console.info('avRecorderReliabilitTest22 resume avRecorder success');
    }).catch((err) => {
        console.info('avRecorderReliabilitTest22 resume avRecorder failed and catch error is ' + err.message);
        result1 = false
    });
    expect(result1).assertEqual(false);

    await preparePromise(avRecorder, avConfig)
    await avRecorder.resume().then(() => {
        console.info('avRecorderReliabilitTest22 resume avRecorder success');
    }).catch((err) => {
        console.info('avRecorderReliabilitTest22 resume avRecorder failed and catch error is ' + err.message);
        result2 = false
    });
    expect(result2).assertEqual(false);

    await startPromise(avRecorder)
    await avRecorder.resume().then(() => {
        console.info('avRecorderReliabilitTest22 resume avRecorder success');
    }).catch((err) => {
        console.info('avRecorderReliabilitTest22 resume avRecorder failed and catch error is ' + err.message);
        result3 = false
    });
    expect(result3).assertEqual(true);

    await pausePromise(avRecorder)
    await avRecorder.resume().then(() => {
        console.info('avRecorderReliabilitTest22 resume avRecorder success');
    }).catch((err) => {
        console.info('avRecorderReliabilitTest22 resume avRecorder failed and catch error is ' + err.message);
        result4 = false
    });
    expect(result4).assertEqual(true);

    await resetPromise(avRecorder)
    await avRecorder.resume().then(() => {
        console.info('avRecorderReliabilitTest22 resume avRecorder success');
    }).catch((err) => {
        console.info('avRecorderReliabilitTest22 resume avRecorder failed and catch error is ' + err.message);
        result5 = false
    });
    expect(result5).assertEqual(false);

    await releaseDone(avRecorder, done)
}

export async function avRecorderReliabilitTest23(avConfig, avRecorder, recorderTime, done) {
    let result1 = true;
    let result2 = true;
    let result3 = true;

    avRecorder = await idle(avRecorder);
    await preparePromise(avRecorder, avConfig)
    await startPromise(avRecorder)
    await pausePromise(avRecorder)
    await avRecorder.resume().then(() => {
        console.info('avRecorderReliabilitTest23 resume avRecorder success');
    }).catch((err) => {
        console.info('avRecorderReliabilitTest23 resume avRecorder failed and catch error is ' + err.message);
        result1 = false
    });
    expect(result1).assertEqual(true);

    await avRecorder.resume().then(() => {
        console.info('avRecorderReliabilitTest23 resume avRecorder success');
    }).catch((err) => {
        console.info('avRecorderReliabilitTest23 resume avRecorder failed and catch error is ' + err.message);
        result2 = false
    });
    expect(result2).assertEqual(true);

    await avRecorder.resume().then(() => {
        console.info('avRecorderReliabilitTest23 resume avRecorder success');
    }).catch((err) => {
        console.info('avRecorderReliabilitTest23 resume avRecorder failed and catch error is ' + err.message);
        result3 = false
    });
    expect(result3).assertEqual(true);

    await releaseDone(avRecorder, done)
}

export async function avRecorderReliabilitTest24(avConfig, avRecorder, recorderTime, done) {
    let result = true;
    avRecorder = await idle(avRecorder);
    await preparePromise(avRecorder, avConfig)
    await startPromise(avRecorder, recorderTime)
    await pausePromise(avRecorder)
    await avRecorder.stop().then(() => {
        console.info('avRecorderReliabilitTest24 stop avRecorder success');
    }).catch((err) => {
        console.info('avRecorderReliabilitTest24 stop avRecorder failed and catch error is ' + err.message);
        result = false
    });
    expect(result).assertEqual(true);
    await releaseDone(avRecorder, done)
}

export async function avRecorderReliabilitTest25(avConfig, avRecorder, recorderTime, done) {
    let result = true;
    avRecorder = await idle(avRecorder);
    await preparePromise(avRecorder, avConfig)
    await startPromise(avRecorder, recorderTime)
    await pausePromise(avRecorder)
    await resumePromise(avRecorder)
    await avRecorder.stop().then(() => {
        console.info('avRecorderReliabilitTest25 stop avRecorder success');
    }).catch((err) => {
        console.info('avRecorderReliabilitTest25 stop avRecorder failed and catch error is ' + err.message);
        result = false
    });
    expect(result).assertEqual(true);
    await releaseDone(avRecorder, done)
}

export async function avRecorderReliabilitTest26(avConfig, avRecorder, recorderTime, done) {
    let result = true;
    avRecorder = await idle(avRecorder);
    await preparePromise(avRecorder, avConfig)
    await startPromise(avRecorder)
    await pausePromise(avRecorder)
    await avRecorder.reset().then(() => {
        console.info('avRecorderReliabilitTest26 reset avRecorder success');
    }).catch((err) => {
        console.info('avRecorderReliabilitTest26 reset avRecorder failed and catch error is ' + err.message);
        result = false
    });
    expect(result).assertEqual(true);
    await releaseDone(avRecorder, done)
}

export async function avRecorderReliabilitTest27(avConfig, avRecorder, recorderTime, done) {
    let result = true;
    avRecorder = await idle(avRecorder);
    await preparePromise(avRecorder, avConfig)
    await startPromise(avRecorder)
    await pausePromise(avRecorder)
    await resumePromise(avRecorder)
    await avRecorder.reset().then(() => {
        console.info('avRecorderReliabilitTest27 reset avRecorder success');
    }).catch((err) => {
        console.info('avRecorderReliabilitTest27 reset avRecorder failed and catch error is ' + err.message);
        result = false
    });
    expect(result).assertEqual(true);
    await releaseDone(avRecorder, done)
}

export async function avRecorderReliabilitTest28(avConfig, avRecorder, recorderTime, done) {
    let result = true;
    avRecorder = await idle(avRecorder);
    await preparePromise(avRecorder, avConfig)
    await startPromise(avRecorder)
    await pausePromise(avRecorder)
    await avRecorder.release().then(() => {
        console.info('avRecorderReliabilitTest28 release avRecorder success');
    }).catch((err) => {
        console.info('avRecorderReliabilitTest28 release avRecorder failed and catch error is ' + err.message);
        result = false
    });
    expect(result).assertEqual(true);
    await releaseDone(avRecorder, done)
}

export async function avRecorderReliabilitTest29(avConfig, avRecorder, recorderTime, done) {
    let result = true;
    avRecorder = await idle(avRecorder);
    await preparePromise(avRecorder, avConfig)
    await startPromise(avRecorder)
    await pausePromise(avRecorder)
    await resumePromise(avRecorder)
    await avRecorder.release().then(() => {
        console.info('avRecorderReliabilitTest29 release avRecorder success');
    }).catch((err) => {
        console.info('avRecorderReliabilitTest29 release avRecorder failed and catch error is ' + err.message);
        result = false
    });
    expect(result).assertEqual(true);
    await releaseDone(avRecorder, done)
}

export async function avRecorderReliabilitTest30(avConfig, avRecorder, recorderTime, done) {
    let result1 = true;
    let result2 = true;
    let result3 = true;

    avRecorder = await idle(avRecorder);
    await preparePromise(avRecorder, avConfig)
    await startPromise(avRecorder)
    await pausePromise(avRecorder)
    await avRecorder.release().then(() => {
        console.info('avRecorderReliabilitTest30 release avRecorder success');
    }).catch((err) => {
        console.info('avRecorderReliabilitTest30 release avRecorder failed and catch error is ' + err.message);
        result1 = false
    });
    expect(result1).assertEqual(true);

    await avRecorder.release().then(() => {
        console.info('avRecorderReliabilitTest30 release avRecorder success');
    }).catch((err) => {
        console.info('avRecorderReliabilitTest30 release avRecorder failed and catch error is ' + err.message);
        result2 = false
    });
    expect(result2).assertEqual(true);

    await avRecorder.release().then(() => {
        console.info('avRecorderReliabilitTest30 release avRecorder success');
    }).catch((err) => {
        console.info('avRecorderReliabilitTest30 release avRecorder failed and catch error is ' + err.message);
        result3 = false
    });
    expect(result3).assertEqual(true);
    done();
}

export async function avRecorderReliabilitTest31(avConfig, avRecorder, recorderTime, done) {
    let surfaceID = null;
    let result = true;
    avRecorder = await idle(avRecorder);
    await avRecorder.getInputSurface().then((surfaceId) => {
        console.info('avRecorderReliabilitTest31 getInputSurface success');
        surfaceID = surfaceId;
    }).catch((err) => {
        console.info('avRecorderReliabilitTest31 getInputSurface failed and catch error is ' + err.message);
        result = false
    });
    expect(result).assertEqual(false);
    await releaseDone(avRecorder, done)
}


export async function getInputSurfaceTest32(avConfig, avRecorder, recorderTime, done) {
    console.info(`case getInputSurfaceTest in`);
    avRecorder.on('stateChange', async (state, reason) => {
        console.info('case state has changed, new state is :' + state);
        switch (state) {
            case AV_RECORDER_STATE.PREPARED:
                console.info(`case getInputSurfaceTest32 state is PREPARED`);
                expect(avRecorder.state).assertEqual('prepared');
                setTimeout(async () => {
                    await getInputSurfacePromise(avRecorder)
                    await releasePromise(avRecorder)
                }, 2000);

                break;
            case AV_RECORDER_STATE.RELEASED:
                console.info(`case getInputSurfaceTest32 state is released`);
                expect(avRecorder.state).assertEqual('released');
                done();
                break;
            case AV_RECORDER_STATE.ERROR:
                console.info(`case getInputSurfaceTest32 state is ERROR`)
                expect(avRecorder.state).assertEqual('error');
                break;
            default:
                console.info('case state is unknown');
        }
    });
    avRecorder.on('error', (err) => {
        console.info('case getInputSurfaceTest32 avRecorder.on(error) called, errMessage is ' + err.message);
        done();
    });
}

export async function avRecorderReliabilitTest32(avConfig, avRecorder, recorderTime, done) {
    avRecorder = await idle(avRecorder);
    getInputSurfaceTest32(avConfig, avRecorder, recorderTime, done)
    await preparePromise(avRecorder, avConfig)
}

export async function getInputSurfaceTest33(avConfig, avRecorder, recorderTime, done) {
    console.info(`case getInputSurfaceTest33 in`);
    avRecorder.on('stateChange', async (state, reason) => {
        console.info('case state has changed, new state is :' + state);
        switch (state) {
            case AV_RECORDER_STATE.PREPARED:
                console.info(`case getInputSurfaceTest33 state is PREPARED`);
                expect(avRecorder.state).assertEqual('prepared');
                getInputSurfacePromise(avRecorder)
                startPromise(avRecorder)
                break;
            case AV_RECORDER_STATE.STARTED:
                console.info(`case getInputSurfaceTest33 state is started`)
                expect(avRecorder.state).assertEqual('started');
                await sleep(recorderTime);
                console.info(`case getInputSurfaceTest33 111`)
                getInputSurfacePromise(avRecorder)
                console.info(`case getInputSurfaceTest33 222`)
                releasePromise(avRecorder)
                break;
            case AV_RECORDER_STATE.RELEASED:
                console.info(`case getInputSurfaceTest33 state is released`);
                expect(avRecorder.state).assertEqual('released');
                done();
                break;
            case AV_RECORDER_STATE.ERROR:
                console.info(`case getInputSurfaceTest33 state is ERROR`)
                expect(avRecorder.state).assertEqual('error');
                break;
            default:
                console.info('case state is unknown');
        }
    });
    avRecorder.on('error', (err) => {
        console.info('case avRecorder.on(error) called, errMessage is ' + err.message);
        done();
    });
}

export async function avRecorderReliabilitTest33(avConfig, avRecorder, recorderTime, done) {
    avRecorder = await idle(avRecorder);
    getInputSurfaceTest33(avConfig, avRecorder, recorderTime, done)
    await preparePromise(avRecorder, avConfig)
}

export async function getInputSurfaceTest34(avConfig, avRecorder, recorderTime, done) {
    console.info(`case getInputSurfaceTest34 in`);
    avRecorder.on('stateChange', async (state, reason) => {
        console.info('case state has changed, new state is :' + state);
        switch (state) {
            case AV_RECORDER_STATE.PREPARED:
                console.info(`case getInputSurfaceTest34 state is PREPARED`);
                expect(avRecorder.state).assertEqual('prepared');
                getInputSurfacePromise(avRecorder)
                startPromise(avRecorder)
                break;
            case AV_RECORDER_STATE.STARTED:
                console.info(`case getInputSurfaceTest34 state is started`)
                expect(avRecorder.state).assertEqual('started');
                await sleep(recorderTime);
                pausePromise(avRecorder)
                break;
            case AV_RECORDER_STATE.PAUSED:
                console.info(`case getInputSurfaceTest34 state is paused`)
                expect(avRecorder.state).assertEqual('paused');
                getInputSurfacePromise(avRecorder)
                releasePromise(avRecorder)
                break;
            case AV_RECORDER_STATE.RELEASED:
                console.info(`case getInputSurfaceTest34 state is released`);
                expect(avRecorder.state).assertEqual('released');
                done();
                break;
            case AV_RECORDER_STATE.ERROR:
                console.info(`case getInputSurfaceTest34 state is ERROR`)
                expect(avRecorder.state).assertEqual('error');
                break;
            default:
                console.info('case state is unknown');
        }
    });
    avRecorder.on('error', (err) => {
        console.info('case avRecorder.on(error) called, errMessage is ' + err.message);
        done();
    });
}

export async function avRecorderReliabilitTest34(avConfig, avRecorder, recorderTime, done) {
    avRecorder = await idle(avRecorder);
    getInputSurfaceTest34(avConfig, avRecorder, recorderTime, done)
    await preparePromise(avRecorder, avConfig)
}

export async function getInputSurfaceTest35(avConfig, avRecorder, recorderTime, done) {
    console.info(`case getInputSurfaceTest35 in`);
    avRecorder.on('stateChange', async (state, reason) => {
        console.info('case state has changed, new state is :' + state);
        switch (state) {
            case AV_RECORDER_STATE.PREPARED:
                console.info(`case getInputSurfaceTest35 state is PREPARED`);
                expect(avRecorder.state).assertEqual('prepared');
                await getInputSurfacePromise(avRecorder)
                await startPromise(avRecorder)
                break;
            case AV_RECORDER_STATE.STARTED:
                console.info(`case getInputSurfaceTest35 state is started`)
                expect(avRecorder.state).assertEqual('started');
                setTimeout(async () => {
                    console.info('getInputSurfaceTest35 setTimeout success');
                    await pausePromise(avRecorder)
                }, recorderTime);
                break;
            case AV_RECORDER_STATE.PAUSED:
                console.info(`case getInputSurfaceTest35 state is paused`)
                expect(avRecorder.state).assertEqual('paused');
                await resumePromise(avRecorder)
                await getInputSurfacePromise(avRecorder)
                await releasePromise(avRecorder)
                break;
            case AV_RECORDER_STATE.RELEASED:
                console.info(`case getInputSurfaceTest35 state is released`);
                expect(avRecorder.state).assertEqual('released');
                done();
                break;
            case AV_RECORDER_STATE.ERROR:
                console.info(`case getInputSurfaceTest35 state is ERROR`)
                expect(avRecorder.state).assertEqual('error');
                break;
            default:
                console.info('case state is unknown');
        }
    });
    avRecorder.on('error', (err) => {
        console.info('case avRecorder.on(error) called, errMessage is ' + err.message);
        done();
    });
}

export async function avRecorderReliabilitTest35(avConfig, avRecorder, recorderTime, done) {
    avRecorder = await idle(avRecorder);
    getInputSurfaceTest35(avConfig, avRecorder, recorderTime, done)
    await preparePromise(avRecorder, avConfig)
}

export async function getInputSurfaceTest36(avConfig, avRecorder, recorderTime, done) {
    console.info(`case getInputSurfaceTest36 in`);
    avRecorder.on('stateChange', async (state, reason) => {
        console.info('case state has changed, new state is :' + state);
        switch (state) {
            case AV_RECORDER_STATE.PREPARED:
                console.info(`case getInputSurfaceTest36 state is PREPARED`);
                expect(avRecorder.state).assertEqual('prepared');
                await getInputSurfacePromise(avRecorder)
                await startPromise(avRecorder)
                break;
            case AV_RECORDER_STATE.STARTED:
                console.info(`case getInputSurfaceTest36 state is started`)
                expect(avRecorder.state).assertEqual('started');
                await sleep(recorderTime);
                setTimeout(async () => {
                    console.info('getInputSurfaceTest36 setTimeout success');
                    await stopPromise(avRecorder)
                }, recorderTime);
                break;
            case AV_RECORDER_STATE.STOPPED:
                console.info(`case getInputSurfaceTest36 state is stopped`)
                expect(avRecorder.state).assertEqual('stopped');
                await getInputSurfacePromise(avRecorder)
                await releasePromise(avRecorder)
                break;
            case AV_RECORDER_STATE.RELEASED:
                console.info(`case getInputSurfaceTest36 state is released`);
                expect(avRecorder.state).assertEqual('released');
                done();
                break;
            case AV_RECORDER_STATE.ERROR:
                console.info(`case getInputSurfaceTest36 state is ERROR`)
                expect(avRecorder.state).assertEqual('error');
                break;
            default:
                console.info('case state is unknown');
        }
    });
    avRecorder.on('error', (err) => {
        console.info('case avRecorder.on(error) called, errMessage is ' + err.message);
        done();
    });
}

export async function avRecorderReliabilitTest36(avConfig, avRecorder, recorderTime, done) {
    avRecorder = await idle(avRecorder);
    getInputSurfaceTest36(avConfig, avRecorder, recorderTime, done)
    await preparePromise(avRecorder, avConfig)
}

export async function getInputSurfaceTest37(avConfig, avRecorder, recorderTime, done) {
    console.info(`case getInputSurfaceTest37 in`);
    avRecorder.on('stateChange', async (state, reason) => {
        console.info('case state has changed, new state is :' + state);
        switch (state) {
            case AV_RECORDER_STATE.IDLE:
                console.info(`case getInputSurfaceTest37 state is idle`);
                expect(avRecorder.state).assertEqual("idle");
                await getInputSurfacePromise(avRecorder)
                await releasePromise(avRecorder)
                break;
            case AV_RECORDER_STATE.PREPARED:
                console.info(`case getInputSurfaceTest37 state isPREPARED`);
                expect(avRecorder.state).assertEqual('prepared');
                await getInputSurfacePromise(avRecorder)
                await startPromise(avRecorder)
                break;
            case AV_RECORDER_STATE.STARTED:
                console.info(`case getInputSurfaceTest37 state isstarted`)
                expect(avRecorder.state).assertEqual('started');
                setTimeout(async () => {
                    console.info('getInputSurfaceTest37 setTimeout success');
                    await resetPromise(avRecorder)
                }, recorderTime);
                break;
            case AV_RECORDER_STATE.RELEASED:
                console.info(`case getInputSurfaceTest37 state is released`);
                expect(avRecorder.state).assertEqual('released');
                done();
                break;
            case AV_RECORDER_STATE.ERROR:
                console.info(`case getInputSurfaceTest37 state is ERROR`)
                expect(avRecorder.state).assertEqual('error');
                break;
            default:
                console.info('case state is unknown');
        }
    });
    avRecorder.on('error', (err) => {
        console.info('case avRecorder.on(error) called, errMessage is ' + err.message);
        done();
    });
}

export async function avRecorderReliabilitTest37(avConfig, avRecorder, recorderTime, done) {
    avRecorder = await idle(avRecorder);
    getInputSurfaceTest37(avConfig, avRecorder, recorderTime, done)
    await preparePromise(avRecorder, avConfig)
}

async function  getInputSurfaceCatachError(avRecorder, result, surfaceID){
    await avRecorder.getInputSurface().then((surfaceId) => {
        console.info('getInputSurfaceTest38 getInputSurface success');
        surfaceID = surfaceId;
    }).catch((err) => {
        console.info('getInputSurfaceTest38 getInputSurface failed and catch error is ' + err.message);
        result = false
        console.info('getInputSurfaceTest38 getInputSurface result is ' + result);
        expect(result).assertEqual(false);
    });
}

export async function getInputSurfaceTest38(avConfig, avRecorder, recorderTime, done) {
    let result1 = true;
    let result2 = true;
    let result3 = true;
    let surfaceID = null;
    console.info(`case getInputSurfaceTest38 in`);
    avRecorder.on('stateChange', async (state, reason) => {
        console.info('case state has changed, new state is :' + state);
        switch (state) {
            case AV_RECORDER_STATE.PREPARED:
                console.info(`case getInputSurfaceTest38 state is PREPARED`);
                expect(avRecorder.state).assertEqual('prepared');
                getInputSurfaceCatachError(avRecorder, result1, surfaceID)
                getInputSurfaceCatachError(avRecorder, result2, surfaceID)
                getInputSurfaceCatachError(avRecorder, result3, surfaceID)
                releasePromise(avRecorder)
                break;
            case AV_RECORDER_STATE.RELEASED:
                console.info(`case getInputSurfaceTest38 state is released`);
                expect(avRecorder.state).assertEqual('released');
                done();
                break;
            case AV_RECORDER_STATE.ERROR:
                console.info(`case getInputSurfaceTest38 state is ERROR`)
                expect(avRecorder.state).assertEqual('error');
                break;
            default:
                console.info('case state is unknown');
        }
    });
    avRecorder.on('error', (err) => {
        console.info('case avRecorder.on(error) called, errMessage is ' + err.message);
        done();
    });
}

export async function avRecorderReliabilitTest38(avConfig, avRecorder, recorderTime, done) {
    avRecorder = await idle(avRecorder);
    getInputSurfaceTest38(avConfig, avRecorder, recorderTime, done)
    await preparePromise(avRecorder, avConfig)
}

export async function avRecorderReliabilitTest39(avConfig, avRecorder, recorderTime, done) {
    let avRecorderConfig = null;
    let result = true;
    avRecorder = await idle(avRecorder);
    await avRecorder.getAVRecorderConfig().then((config) => {
        console.info('avRecorderReliabilitTest39 getAVRecorderConfig success');
        avRecorderConfig = config;
    }).catch((err) => {
        console.info('avRecorderReliabilitTest31 getAVRecorderConfig failed and catch error is ' + err.message);
        result = false
    });
    expect(result).assertEqual(false);
    await releaseDone(avRecorder, done)
}

export async function getAVRecorderConfigTest40(avConfig, avRecorder, recorderTime, done) {
    console.info(`case getAVRecorderConfigTest40 in`);
    avRecorder.on('stateChange', async (state, reason) => {
        console.info('case state has changed, new state is :' + state);
        switch (state) {
            case AV_RECORDER_STATE.PREPARED:
                console.info(`case getAVRecorderConfigTest40 state is PREPARED`);
                expect(avRecorder.state).assertEqual('prepared');
                setTimeout(async () => {
                    await getAVRecorderConfigPromise(avConfig, avRecorder)
                    await releasePromise(avRecorder)
                }, 2000);
                break;
            case AV_RECORDER_STATE.RELEASED:
                console.info(`case getAVRecorderConfigTest40 state is released`);
                expect(avRecorder.state).assertEqual('released');
                done();
                break;
            case AV_RECORDER_STATE.ERROR:
                console.info(`case getAVRecorderConfigTest40 state is ERROR`)
                expect(avRecorder.state).assertEqual('error');
                break;
            default:
                console.info('case state is unknown');
        }
    });
    avRecorder.on('error', (err) => {
        console.info('case getAVRecorderConfigTest40 avRecorder.on(error) called, errMessage is ' + err.message);
        done();
    });
}

export async function avRecorderReliabilitTest40(avConfig, avRecorder, recorderTime, done) {
    avRecorder = await idle(avRecorder);
    getAVRecorderConfigTest40(avConfig, avRecorder, recorderTime, done)
    await preparePromise(avRecorder, avConfig)
}

export async function getAVRecorderConfigTest41(avConfig, avRecorder, recorderTime, done) {
    console.info(`case getAVRecorderConfigTest41 in`);
    avRecorder.on('stateChange', async (state, reason) => {
        console.info('case state has changed, new state is :' + state);
        switch (state) {
            case AV_RECORDER_STATE.PREPARED:
                console.info(`case getAVRecorderConfigTest41 state is PREPARED`);
                expect(avRecorder.state).assertEqual('prepared');
                getAVRecorderConfigPromise(avConfig, avRecorder)
                startPromise(avRecorder)
                break;
            case AV_RECORDER_STATE.STARTED:
                console.info(`case getAVRecorderConfigTest41 state is started`)
                expect(avRecorder.state).assertEqual('started');
                await sleep(recorderTime);
                console.info(`case getAVRecorderConfigTest41 111`)
                getAVRecorderConfigPromise(avConfig, avRecorder)
                console.info(`case getAVRecorderConfigTest41 222`)
                releasePromise(avRecorder)
                break;
            case AV_RECORDER_STATE.RELEASED:
                console.info(`case getAVRecorderConfigTest41 state is released`);
                expect(avRecorder.state).assertEqual('released');
                done();
                break;
            case AV_RECORDER_STATE.ERROR:
                console.info(`case getAVRecorderConfigTest41 state is ERROR`)
                expect(avRecorder.state).assertEqual('error');
                break;
            default:
                console.info('case state is unknown');
        }
    });
    avRecorder.on('error', (err) => {
        console.info('case avRecorder.on(error) called, errMessage is ' + err.message);
        done();
    });
}

export async function avRecorderReliabilitTest41(avConfig, avRecorder, recorderTime, done) {
    avRecorder = await idle(avRecorder);
    getAVRecorderConfigTest41(avConfig, avRecorder, recorderTime, done)
    await preparePromise(avRecorder, avConfig)
}

export async function getAVRecorderConfigTest42(avConfig, avRecorder, recorderTime, done) {
    console.info(`case getAVRecorderConfigTest42 in`);
    avRecorder.on('stateChange', async (state, reason) => {
        console.info('case state has changed, new state is :' + state);
        switch (state) {
            case AV_RECORDER_STATE.PREPARED:
                console.info(`case getAVRecorderConfigTest42 state is PREPARED`);
                expect(avRecorder.state).assertEqual('prepared');
                getAVRecorderConfigPromise(avConfig, avRecorder)
                startPromise(avRecorder)
                break;
            case AV_RECORDER_STATE.STARTED:
                console.info(`case getAVRecorderConfigTest42 state is started`)
                expect(avRecorder.state).assertEqual('started');
                await sleep(recorderTime);
                pausePromise(avRecorder)
                break;
            case AV_RECORDER_STATE.PAUSED:
                console.info(`case getAVRecorderConfigTest42 state is paused`)
                expect(avRecorder.state).assertEqual('paused');
                getAVRecorderConfigPromise(avConfig, avRecorder)
                releasePromise(avRecorder)
                break;
            case AV_RECORDER_STATE.RELEASED:
                console.info(`case getAVRecorderConfigTest42 state is released`);
                expect(avRecorder.state).assertEqual('released');
                done();
                break;
            case AV_RECORDER_STATE.ERROR:
                console.info(`case getAVRecorderConfigTest42 state is ERROR`)
                expect(avRecorder.state).assertEqual('error');
                break;
            default:
                console.info('case state is unknown');
        }
    });
    avRecorder.on('error', (err) => {
        console.info('case avRecorder.on(error) called, errMessage is ' + err.message);
        done();
    });
}

export async function avRecorderReliabilitTest42(avConfig, avRecorder, recorderTime, done) {
    avRecorder = await idle(avRecorder);
    getAVRecorderConfigTest42(avConfig, avRecorder, recorderTime, done)
    await preparePromise(avRecorder, avConfig)
}

export async function getAVRecorderConfigTest43(avConfig, avRecorder, recorderTime, done) {
    console.info(`case getAVRecorderConfigTest43 in`);
    avRecorder.on('stateChange', async (state, reason) => {
        console.info('case state has changed, new state is :' + state);
        switch (state) {
            case AV_RECORDER_STATE.PREPARED:
                console.info(`case getAVRecorderConfigTest43 state is PREPARED`);
                expect(avRecorder.state).assertEqual('prepared');
                await getAVRecorderConfigPromise(avConfig, avRecorder)
                await startPromise(avRecorder)
                break;
            case AV_RECORDER_STATE.STARTED:
                console.info(`case getAVRecorderConfigTest43 state is started`)
                expect(avRecorder.state).assertEqual('started');
                setTimeout(async () => {
                    console.info('getAVRecorderConfigTest43 setTimeout success');
                    await pausePromise(avRecorder)
                }, recorderTime);
                break;
            case AV_RECORDER_STATE.PAUSED:
                console.info(`case getAVRecorderConfigTest43 state is paused`)
                expect(avRecorder.state).assertEqual('paused');
                await resumePromise(avRecorder)
                await getAVRecorderConfigPromise(avConfig, avRecorder)
                await releasePromise(avRecorder)
                break;
            case AV_RECORDER_STATE.RELEASED:
                console.info(`case getAVRecorderConfigTest43 state is released`);
                expect(avRecorder.state).assertEqual('released');
                done();
                break;
            case AV_RECORDER_STATE.ERROR:
                console.info(`case getAVRecorderConfigTest43 state is ERROR`)
                expect(avRecorder.state).assertEqual('error');
                break;
            default:
                console.info('case state is unknown');
        }
    });
    avRecorder.on('error', (err) => {
        console.info('case avRecorder.on(error) called, errMessage is ' + err.message);
        done();
    });
}

export async function avRecorderReliabilitTest43(avConfig, avRecorder, recorderTime, done) {
    avRecorder = await idle(avRecorder);
    getAVRecorderConfigTest43(avConfig, avRecorder, recorderTime, done)
    await preparePromise(avRecorder, avConfig)
}

export async function getAVRecorderConfigTest44(avConfig, avRecorder, recorderTime, done) {
    console.info(`case getAVRecorderConfigTest44 in`);
    avRecorder.on('stateChange', async (state, reason) => {
        console.info('case state has changed, new state is :' + state);
        switch (state) {
            case AV_RECORDER_STATE.PREPARED:
                console.info(`case getAVRecorderConfigTest44 state is PREPARED`);
                expect(avRecorder.state).assertEqual('prepared');
                await getAVRecorderConfigPromise(avConfig, avRecorder)
                await startPromise(avRecorder)
                break;
            case AV_RECORDER_STATE.STARTED:
                console.info(`case getAVRecorderConfigTest44 state is started`)
                expect(avRecorder.state).assertEqual('started');
                await sleep(recorderTime);
                setTimeout(async () => {
                    console.info('getAVRecorderConfigTest44 setTimeout success');
                    await stopPromise(avRecorder)
                }, recorderTime);
                break;
            case AV_RECORDER_STATE.STOPPED:
                console.info(`case getAVRecorderConfigTest44 state is stopped`)
                expect(avRecorder.state).assertEqual('stopped');
                await getAVRecorderConfigPromise(avConfig, avRecorder)
                await releasePromise(avRecorder)
                break;
            case AV_RECORDER_STATE.RELEASED:
                console.info(`case getAVRecorderConfigTest44 state is released`);
                expect(avRecorder.state).assertEqual('released');
                done();
                break;
            case AV_RECORDER_STATE.ERROR:
                console.info(`case getAVRecorderConfigTest44 state is ERROR`)
                expect(avRecorder.state).assertEqual('error');
                break;
            default:
                console.info('case state is unknown');
        }
    });
    avRecorder.on('error', (err) => {
        console.info('case avRecorder.on(error) called, errMessage is ' + err.message);
        done();
    });
}

export async function avRecorderReliabilitTest44(avConfig, avRecorder, recorderTime, done) {
    avRecorder = await idle(avRecorder);
    getAVRecorderConfigTest44(avConfig, avRecorder, recorderTime, done)
    await preparePromise(avRecorder, avConfig)
}

export async function getAVRecorderConfigTest45(avConfig, avRecorder, recorderTime, done) {
    console.info(`case getAVRecorderConfigTest45 in`);
    avRecorder.on('stateChange', async (state, reason) => {
        console.info('case state has changed, new state is :' + state);
        switch (state) {
            case AV_RECORDER_STATE.IDLE:
                console.info(`case getAVRecorderConfigTest45 state is idle`);
                expect(avRecorder.state).assertEqual("idle");
                await getAVRecorderConfigPromise(avConfig, avRecorder)
                await releasePromise(avRecorder)
                break;
            case AV_RECORDER_STATE.PREPARED:
                console.info(`case getAVRecorderConfigTest45 state isPREPARED`);
                expect(avRecorder.state).assertEqual('prepared');
                await getAVRecorderConfigPromise(avConfig, avRecorder)
                await startPromise(avRecorder)
                break;
            case AV_RECORDER_STATE.STARTED:
                console.info(`case getAVRecorderConfigTest45 state isstarted`)
                expect(avRecorder.state).assertEqual('started');
                setTimeout(async () => {
                    console.info('getAVRecorderConfigTest45 setTimeout success');
                    await resetPromise(avRecorder)
                }, recorderTime);
                break;
            case AV_RECORDER_STATE.RELEASED:
                console.info(`case getAVRecorderConfigTest45 state is released`);
                expect(avRecorder.state).assertEqual('released');
                done();
                break;
            case AV_RECORDER_STATE.ERROR:
                console.info(`case getAVRecorderConfigTest45 state is ERROR`)
                expect(avRecorder.state).assertEqual('error');
                break;
            default:
                console.info('case state is unknown');
        }
    });
    avRecorder.on('error', (err) => {
        console.info('case avRecorder.on(error) called, errMessage is ' + err.message);
        done();
    });
}

export async function avRecorderReliabilitTest45(avConfig, avRecorder, recorderTime, done) {
    avRecorder = await idle(avRecorder);
    getAVRecorderConfigTest45(avConfig, avRecorder, recorderTime, done)
    await preparePromise(avRecorder, avConfig)
}

export async function createTimeTestCallback(avConfig, avRecorder, recorderTime, done) {
    let totalTime = 0;
    for(var i = 0;i < 10;i++){
        let start = Date.now();
        console.info(`createTimeTestCallback start time is : ${start}`)
        avRecorder = await idle(avRecorder);
        let end = Date.now()
        let execution = parseInt(end - start)
        console.info("createTimeTestCallback execution time  is :" + execution)
        totalTime = totalTime + execution;
        await avRecorder.release().then(() => {
            console.info('createTimeTestCallback avPlayer is release')
            console.info(`createTimeTestCallback avRecorder.state is : ${avRecorder.state}`)
            expect(avRecorder.state).assertEqual(AV_RECORDER_STATE.RELEASED);
            if(i == 9){
                let avg = totalTime/10;
                console.info("createTimeTest avg time  is :" + avg)
                done();
            }
        }, mediaTestBase.failureCallback).catch(mediaTestBase.catchCallback);
    }
}

export async function prepareTimeCallback(avConfig, avRecorder, recorderTime, done) {
    let totalTime = 0;
    for(var i = 0;i < 10;i++){
        avRecorder = await idle(avRecorder);
        await sleep(20)
        let start = Date.now();
        console.info(`prepareTimeWithoutCallback start time is : ${start}`)
        let end;
        await avRecorder.prepare(avConfig, (err) => {
            if (err == null) {
                expect(avRecorder.state).assertEqual(AV_RECORDER_STATE.PREPARED);
                console.info('prepareTimeWithoutCallback avPlayer state is prepared')
                end = Date.now()
                console.info(`prepareTimeWithoutCallback end time is : ${end}`)
            } else {
                console.info('prepare failed and error is ' + err.message);
            }
        })
        let execution = parseInt(end - start)
        console.info("prepareTimeWithoutCallback execution time  is :" + execution)
        totalTime = totalTime + execution;
        await avRecorder.release().then(() => {
            console.info('prepareTimeWithoutCallback avPlayer is release')
            expect(avRecorder.state).assertEqual(AV_RECORDER_STATE.RELEASED);
        }, mediaTestBase.failureCallback).catch(mediaTestBase.catchCallback);
    }
    let avg = totalTime/10;
    console.info("prepareTimeWithoutCallback avg time  is :" + avg)
    done();
}

export async function getInputSurfaceTimeTestCallback(avConfig, avRecorder, recorderTime, done) {
    let totalTime = 0;
    let surfaceID = null;
    for(var i = 0;i < 10;i++){
        avRecorder = await idle(avRecorder);
        await sleep(20)
        let end;
        await avRecorder.prepare(avConfig).then(() => {
            expect(avRecorder.state).assertEqual(AV_RECORDER_STATE.PREPARED);
            console.info('getInputSurfaceTimeTestCallback avPlayer state is prepared')
        }, mediaTestBase.failureCallback).catch(mediaTestBase.catchCallback);

        let start = Date.now();
        console.info(`getInputSurfaceTimeTestCallback start time is : ${start}`)
        await avRecorder.getInputSurface((err, surfaceId) => {
            if (err == null) {
                console.info('getInputSurfaceTimeTestCallback success');
                surfaceID = surfaceId;
                end = Date.now()
                console.info(`getInputSurfaceTimeTestCallback end time is : ${end}`)
                let execution = parseInt(end - start)
                console.info("getInputSurfaceTimeTestCallback execution time  is :" + execution)
                totalTime = totalTime + execution;
            } else {
                console.info('getInputSurfaceTimeTestCallback failed and error is ' + err.message);
            }
        });
        await avRecorder.release().then(() => {
            console.info('getInputSurfaceTimeTestCallback avPlayer is release')
            expect(avRecorder.state).assertEqual(AV_RECORDER_STATE.RELEASED);
        }, mediaTestBase.failureCallback).catch(mediaTestBase.catchCallback);
    }
    let avg = totalTime/10;
    console.info("getInputSurfaceTimeTestCallback avg time  is :" + avg)
    done();
}

export async function startTimeTestCallback(avConfig, avRecorder, recorderTime, done) {
    let totalTime = 0;
    for(var i = 0;i < 10;i++){
        avRecorder = await idle(avRecorder);
        await sleep(20)
        let end;
        await avRecorder.prepare(avConfig).then(() => {
            expect(avRecorder.state).assertEqual(AV_RECORDER_STATE.PREPARED);
            console.info('startTimeTestCallback avPlayer state is prepared')
        }, mediaTestBase.failureCallback).catch(mediaTestBase.catchCallback);
        let start = Date.now();
        console.info(`startTimeTestCallback start time is : ${start}`)
        await avRecorder.start((err) => {
            if (err == null) {
                end = Date.now()
                console.info(`startTimeTestCallback end time is : ${end}`)
                console.info('startTimeTestCallback avRecorder success');
                let execution = parseInt(end - start)
                console.info("startTimeTestCallback execution time  is :" + execution)
                totalTime = totalTime + execution;
            } else {
                console.info('startTimeTestCallback failed and error is ' + err.message);
            }
        });
        await avRecorder.release().then(() => {
            console.info('startTimeTestCallback avPlayer is release')
            expect(avRecorder.state).assertEqual(AV_RECORDER_STATE.RELEASED);
        }, mediaTestBase.failureCallback).catch(mediaTestBase.catchCallback);
    }
    let avg = totalTime/10;
    console.info("startTimeTestCallback avg time  is :" + avg)
    done();
}

export async function pauseTimeTestCallback(avConfig, avRecorder, recorderTime, done) {
    let totalTime = 0;
    for(var i = 0;i < 10;i++){
        avRecorder = await idle(avRecorder);
        await sleep(20)
        await avRecorder.prepare(avConfig).then(() => {
            expect(avRecorder.state).assertEqual(AV_RECORDER_STATE.PREPARED);
            console.info('pauseTimeTestCallback avPlayer state is prepared')
        }, mediaTestBase.failureCallback).catch(mediaTestBase.catchCallback);

        await avRecorder.start().then(() => {
            console.info('start avRecorder success');
        }).catch((err) => {
            console.info('pauseTimeTestCallback start avRecorder failed and catch error is ' + err.message);
        });
        let start = Date.now();
        console.info(`pauseTimeTestCallback start time is : ${start}`)
        let end;
        await avRecorder.pause((err) => {
            if (err == null) {
                end = Date.now()
                console.info(`pauseTimeTestCallback end time is : ${end}`)
                console.info('pause pauseTimeTestCallback success');
                let execution = parseInt(end - start)
                console.info("pauseTimeTestCallback execution time  is :" + execution)
                totalTime = totalTime + execution;
            } else {
                console.info('pause pauseTimeTestCallback failed and error is ' + err.message);
            }
        });
        await avRecorder.release().then(() => {
            console.info('pauseTimeTestCallback avPlayer is release')
            expect(avRecorder.state).assertEqual(AV_RECORDER_STATE.RELEASED);
        }, mediaTestBase.failureCallback).catch(mediaTestBase.catchCallback);
    }
    let avg = totalTime/10;
    console.info("pauseTimeTestCallback avg time  is :" + avg)
    done();
}

export async function resumeTimeTestCallback(avConfig, avRecorder, recorderTime, done) {
    let totalTime = 0;
    for(var i = 0;i < 10;i++){
        avRecorder = await idle(avRecorder);
        await sleep(20)
        await avRecorder.prepare(avConfig).then(() => {
            expect(avRecorder.state).assertEqual(AV_RECORDER_STATE.PREPARED);
            console.info('resumeTimeTestCallback avPlayer state is prepared')
        }, mediaTestBase.failureCallback).catch(mediaTestBase.catchCallback);

        await avRecorder.start().then(() => {
            console.info('start resumeTimeTestCallback success');
        }).catch((err) => {
            console.info('resumeTimeTestCallback start avRecorder failed and catch error is ' + err.message);
        });
        let end;
        await avRecorder.pause((err) => {
            if (err == null) {
                console.info('pause resumeTimeTestCallback success');
            } else {
                console.info('pause resumeTimeTestCallback failed and error is ' + err.message);
            }
        });
        let start = Date.now();
        console.info(`resumeTimeTestCallback start time is : ${start}`)
        await avRecorder.resume((err) => {
            if (err == null) {
                console.info('resume resumeTimeTestCallback success');
                end = Date.now()
                console.info(`resumeTimeTestCallback end time is : ${end}`)
                let execution = parseInt(end - start)
                console.info("resumeTimeTestCallback execution time  is :" + execution)
                totalTime = totalTime + execution;
            } else {
                console.info('resume resumeTimeTestCallback failed and error is ' + err.message);
            }
        });
        await avRecorder.release().then(() => {
            console.info('resumeTimeTestCallback avPlayer is release')
            expect(avRecorder.state).assertEqual(AV_RECORDER_STATE.RELEASED);
        }, mediaTestBase.failureCallback).catch(mediaTestBase.catchCallback);
    }
    let avg = totalTime/10;
    console.info("resumeTimeTestCallback avg time  is :" + avg)
    done();
}

export async function stopTimeTestCallback(avConfig, avRecorder, recorderTime, done) {
    let totalTime = 0;
    for(var i = 0;i < 10;i++){
        avRecorder = await idle(avRecorder);
        await sleep(20)
        await avRecorder.prepare(avConfig).then(() => {
            expect(avRecorder.state).assertEqual(AV_RECORDER_STATE.PREPARED);
            console.info('stopTimeTestCallback avPlayer state is prepared')
        }, mediaTestBase.failureCallback).catch(mediaTestBase.catchCallback);

        await avRecorder.start().then(() => {
            console.info('start stopTimeTestCallback success');
        }).catch((err) => {
            console.info('stopTimeTestCallback start avRecorder failed and catch error is ' + err.message);
        });
        let end;
        let start = Date.now();
        console.info(`stopTimeTestCallback start time is : ${start}`)
        await avRecorder.stop((err) => {
            if (err == null) {
                console.info('resume stopTimeTestCallback success');
                end = Date.now()
                console.info(`stopTimeTestCallback end time is : ${end}`)
                let execution = parseInt(end - start)
                console.info("stopTimeTestCallback execution time  is :" + execution)
                totalTime = totalTime + execution;
            } else {
                console.info('resume stopTimeTestCallback failed and error is ' + err.message);
            }
        });
        await avRecorder.release().then(() => {
            console.info('stopTimeTestCallback avPlayer is release')
            expect(avRecorder.state).assertEqual(AV_RECORDER_STATE.RELEASED);
        }, mediaTestBase.failureCallback).catch(mediaTestBase.catchCallback);
    }
    let avg = totalTime/10;
    console.info("stopTimeTestCallback avg time  is :" + avg)
    done();
}

export async function resetTimeTestCallback(avConfig, avRecorder, recorderTime, done) {
    let totalTime = 0;
    for(var i = 0;i < 10;i++){
        avRecorder = await idle(avRecorder);
        await sleep(20)
        await avRecorder.prepare(avConfig).then(() => {
            expect(avRecorder.state).assertEqual(AV_RECORDER_STATE.PREPARED);
            console.info('resetTimeTestCallback avPlayer state is prepared')
        }, mediaTestBase.failureCallback).catch(mediaTestBase.catchCallback);

        await avRecorder.start().then(() => {
            console.info('start resetTimeTestCallback success');
        }).catch((err) => {
            console.info('resetTimeTestCallback start avRecorder failed and catch error is ' + err.message);
        });
        let end;
        let start = Date.now();
        console.info(`resetTimeTestCallback start time is : ${start}`)
        await avRecorder.reset((err) => {
            if (err == null) {
                console.info('resume resetTimeTestCallback success');
                end = Date.now()
                console.info(`resetTimeTestCallback end time is : ${end}`)
                let execution = parseInt(end - start)
                console.info("resetTimeTestCallback execution time  is :" + execution)
                totalTime = totalTime + execution;
            } else {
                console.info('resume resetTimeTestCallback failed and error is ' + err.message);
            }
        });
        await avRecorder.release().then(() => {
            console.info('resetTimeTestCallback avPlayer is release')
            expect(avRecorder.state).assertEqual(AV_RECORDER_STATE.RELEASED);
        }, mediaTestBase.failureCallback).catch(mediaTestBase.catchCallback);
    }
    let avg = totalTime/10;
    console.info("resetTimeTestCallback avg time  is :" + avg)
    done();
}

export async function releaseTimeTestCallback(avConfig, avRecorder, recorderTime, done) {
    let totalTime = 0;
    for(var i = 0;i < 10;i++){
        avRecorder = await idle(avRecorder);
        await sleep(20)
        await avRecorder.prepare(avConfig).then(() => {
            expect(avRecorder.state).assertEqual(AV_RECORDER_STATE.PREPARED);
            console.info('releaseTimeTestCallback avPlayer state is prepared')
        }, mediaTestBase.failureCallback).catch(mediaTestBase.catchCallback);

        await avRecorder.start().then(() => {
            console.info('start releaseTimeTestCallback success');
        }).catch((err) => {
            console.info('releaseTimeTestCallback start avRecorder failed and catch error is ' + err.message);
        });
        let end;
        let start = Date.now();
        console.info(`releaseTimeTestCallback start time is : ${start}`)
        await avRecorder.release((err) => {
            if (err == null) {
                console.info(`releaseTimeTestCallback current state is : ${avRecorder.state}`)
                console.info('release releaseTimeTestCallback success');
                end = Date.now()
                console.info(`releaseTimeTestCallback end time is : ${end}`)
                let execution = parseInt(end - start)
                console.info("releaseTimeTestCallback execution time  is :" + execution)
                totalTime = totalTime + execution;
                if(i == 9){
                    let avg = totalTime/10;
                    console.info("releaseTimeTestCallback avg time  is :" + avg)
                    done();
                }
            } else {
                console.info('resume releaseTimeTestCallback failed and error is ' + err.message);
            }
        });
    }
}

export async function createTimeTestPromise(avConfig, avRecorder, recorderTime, done) {
    let totalTime = 0;
    for(var i = 0;i < 10;i++){
        let start = Date.now();
        console.info(`createTimeTestPromise start time is : ${start}`)
        avRecorder = await idle(avRecorder);
        let end = Date.now()
        let execution = parseInt(end - start)
        console.info("createTimeTestPromise execution time  is :" + execution)
        totalTime = totalTime + execution;
        await avRecorder.release().then(() => {
            console.info('createTimeTestPromise avPlayer is release')
            expect(avRecorder.state).assertEqual(AV_RECORDER_STATE.RELEASED);
        }, mediaTestBase.failureCallback).catch(mediaTestBase.catchCallback);
    }
    let avg = totalTime/10;
    console.info("createTimeTestPromise avg time  is :" + avg)
    done();
}

export async function prepareTimePromise(avConfig, avRecorder, recorderTime, done) {
    let totalTime = 0;
    for(var i = 0;i < 10;i++){
        avRecorder = await idle(avRecorder);
        await sleep(20)
        let start = Date.now();
        console.info(`prepareTimeWithoutPromise start time is : ${start}`)
        let end;
        await avRecorder.prepare(avConfig).then(() => {
            console.info('prepare success');
            expect(avRecorder.state).assertEqual(AV_RECORDER_STATE.PREPARED);
            console.info('prepareTimeWithoutPromise avPlayer state is prepared')
            end = Date.now()
            console.info(`prepareTimeWithoutPromise end time is : ${end}`)
        }).catch((err) => {
            console.info('prepare failed and catch error is ' + err.message);
        });
        let execution = parseInt(end - start)
        console.info("prepareTimeWithoutPromise execution time  is :" + execution)
        totalTime = totalTime + execution;
        await avRecorder.release().then(() => {
            console.info('prepareTimeWithoutPromise avPlayer is release')
            expect(avRecorder.state).assertEqual(AV_RECORDER_STATE.RELEASED);
        }, mediaTestBase.failurePromise).catch(mediaTestBase.catchPromise);
    }
    let avg = totalTime/10;
    console.info("prepareTimeWithoutPromise avg time  is :" + avg)
    done();
}

export async function getInputSurfaceTimeTestPromise(avConfig, avRecorder, recorderTime, done) {
    let totalTime = 0;
    let surfaceID = null;
    for(var i = 0;i < 10;i++){
        avRecorder = await idle(avRecorder);
        await sleep(20)
        let end;
        await avRecorder.prepare(avConfig).then(() => {
            expect(avRecorder.state).assertEqual(AV_RECORDER_STATE.PREPARED);
            console.info('getInputSurfaceTimeTestPromise avPlayer state is prepared')
        }, mediaTestBase.failurePromise).catch(mediaTestBase.catchPromise);
        let start = Date.now();
        console.info(`getInputSurfaceTimeTestPromise start time is : ${start}`)
        await avRecorder.getInputSurface().then((surfaceId) => {
            console.info('getInputSurfaceTimeTestPromise success');
            surfaceID = surfaceId;
            end = Date.now()
            console.info(`getInputSurfaceTimeTestPromise end time is : ${end}`)
            let execution = parseInt(end - start)
            console.info("getInputSurfaceTimeTestPromise execution time  is :" + execution)
            totalTime = totalTime + execution;
        }).catch((err) => {
            console.info('getInputSurface failed and catch error is ' + err.message);
        });
        await avRecorder.release().then(() => {
            console.info('getInputSurfaceTimeTestPromise avPlayer is release')
            expect(avRecorder.state).assertEqual(AV_RECORDER_STATE.RELEASED);
        }, mediaTestBase.failurePromise).catch(mediaTestBase.catchPromise);
    }
    let avg = totalTime/10;
    console.info("getInputSurfaceTimeTestPromise avg time  is :" + avg)
    done();
}

export async function startTimeTestPromise(avConfig, avRecorder, recorderTime, done) {
    let totalTime = 0;
    for(var i = 0;i < 10;i++){
        avRecorder = await idle(avRecorder);
        await sleep(20)
        let end;
        await avRecorder.prepare(avConfig).then(() => {
            expect(avRecorder.state).assertEqual(AV_RECORDER_STATE.PREPARED);
            console.info('startTimeTestPromise avPlayer state is prepared')
        }, mediaTestBase.failurePromise).catch(mediaTestBase.catchPromise);
        let start = Date.now();
        console.info(`startTimeTestPromise start time is : ${start}`)
        await avRecorder.start().then(() => {
            console.info('start AVRecorder success');
            end = Date.now()
            console.info(`startTimeTestPromise end time is : ${end}`)
            let execution = parseInt(end - start)
            console.info("startTimeTestPromise execution time  is :" + execution)
            totalTime = totalTime + execution;
            console.info('startTimeTestPromise avRecorder success');
        }).catch((err) => {
            console.info('start AVRecorder failed and catch error is ' + err.message);
        });
        await avRecorder.release().then(() => {
            console.info('startTimeTestPromise avPlayer is release')
            expect(avRecorder.state).assertEqual(AV_RECORDER_STATE.RELEASED);
        }, mediaTestBase.failurePromise).catch(mediaTestBase.catchPromise);
    }
    let avg = totalTime/10;
    console.info("startTimeTestPromise avg time  is :" + avg)
    done();
}

export async function pauseTimeTestPromise(avConfig, avRecorder, recorderTime, done) {
    let totalTime = 0;
    for(var i = 0;i < 10;i++){
        avRecorder = await idle(avRecorder);
        await sleep(20)
        await avRecorder.prepare(avConfig).then(() => {
            expect(avRecorder.state).assertEqual(AV_RECORDER_STATE.PREPARED);
            console.info('pauseTimeTestPromise avPlayer state is prepared')
        }, mediaTestBase.failurePromise).catch(mediaTestBase.catchPromise);
        await avRecorder.start().then(() => {
            console.info('start avRecorder success');
        }).catch((err) => {
            console.info('pauseTimeTestPromise start avRecorder failed and catch error is ' + err.message);
        });
        let start = Date.now();
        console.info(`pauseTimeTestPromise start time is : ${start}`)
        let end;
        await avRecorder.pause().then(() => {
            console.info('pause AVRecorder success');
            end = Date.now()
            console.info(`pauseTimeTestPromise end time is : ${end}`)
            let execution = parseInt(end - start)
            console.info("pauseTimeTestPromise execution time  is :" + execution)
            totalTime = totalTime + execution;
            console.info('pause pauseTimeTestPromise success');
        }).catch((err) => {
            console.info('pause AVRecorder failed and catch error is ' + err.message);
        });
        await avRecorder.release().then(() => {
            console.info('pauseTimeTestPromise avPlayer is release')
            expect(avRecorder.state).assertEqual(AV_RECORDER_STATE.RELEASED);
        }, mediaTestBase.failurePromise).catch(mediaTestBase.catchPromise);
    }
    let avg = totalTime/10;
    console.info("pauseTimeTestPromise avg time  is :" + avg)
    done();
}

export async function resumeTimeTestPromise(avConfig, avRecorder, recorderTime, done) {
    let totalTime = 0;
    for(var i = 0;i < 10;i++){
        avRecorder = await idle(avRecorder);
        await sleep(20)
        await avRecorder.prepare(avConfig).then(() => {
            expect(avRecorder.state).assertEqual(AV_RECORDER_STATE.PREPARED);
            console.info('resumeTimeTestPromise avPlayer state is prepared')
        }, mediaTestBase.failurePromise).catch(mediaTestBase.catchPromise);

        await avRecorder.start().then(() => {
            console.info('start resumeTimeTestPromise success');
        }).catch((err) => {
            console.info('resumeTimeTestPromise start avRecorder failed and catch error is ' + err.message);
        });
        let end;
        await avRecorder.pause((err) => {
            if (err == null) {
                console.info('pause resumeTimeTestPromise success');
            } else {
                console.info('pause resumeTimeTestPromise failed and error is ' + err.message);
            }
        });
        let start = Date.now();
        console.info(`resumeTimeTestPromise start time is : ${start}`)
        await avRecorder.resume().then(() => {
            console.info('resume AVRecorder success');
            console.info('resume resumeTimeTestPromise success');
            end = Date.now()
            console.info(`resumeTimeTestPromise end time is : ${end}`)
            let execution = parseInt(end - start)
            console.info("resumeTimeTestPromise execution time  is :" + execution)
            totalTime = totalTime + execution;
        }).catch((err) => {
            console.info('resume AVRecorder failed and catch error is ' + err.message);
        });
        await avRecorder.release().then(() => {
            console.info('resumeTimeTestPromise avPlayer is release')
            expect(avRecorder.state).assertEqual(AV_RECORDER_STATE.RELEASED);
        }, mediaTestBase.failurePromise).catch(mediaTestBase.catchPromise);
    }
    let avg = totalTime/10;
    console.info("resumeTimeTestPromise avg time  is :" + avg)
    done();
}

export async function stopTimeTestPromise(avConfig, avRecorder, recorderTime, done) {
    let totalTime = 0;
    for(var i = 0;i < 10;i++){
        avRecorder = await idle(avRecorder);
        await sleep(20)
        await avRecorder.prepare(avConfig).then(() => {
            expect(avRecorder.state).assertEqual(AV_RECORDER_STATE.PREPARED);
            console.info('stopTimeTestPromise avPlayer state is prepared')
        }, mediaTestBase.failurePromise).catch(mediaTestBase.catchPromise);

        await avRecorder.start().then(() => {
            console.info('start stopTimeTestPromise success');
        }).catch((err) => {
            console.info('stopTimeTestPromise start avRecorder failed and catch error is ' + err.message);
        });
        let end;
        let start = Date.now();
        console.info(`stopTimeTestPromise start time is : ${start}`)
        await avRecorder.stop().then(() => {
            console.info('stop AVRecorder success');
            console.info('resume stopTimeTestPromise success');
            end = Date.now()
            console.info(`stopTimeTestPromise end time is : ${end}`)
            let execution = parseInt(end - start)
            console.info("stopTimeTestPromise execution time  is :" + execution)
            totalTime = totalTime + execution;
        }).catch((err) => {
            console.info('stop AVRecorder failed and catch error is ' + err.message);
        });
        await avRecorder.release().then(() => {
            console.info('stopTimeTestPromise avPlayer is release')
            expect(avRecorder.state).assertEqual(AV_RECORDER_STATE.RELEASED);
        }, mediaTestBase.failurePromise).catch(mediaTestBase.catchPromise);
    }
    let avg = totalTime/10;
    console.info("stopTimeTestPromise avg time  is :" + avg)
    done();
}

export async function resetTimeTestPromise(avConfig, avRecorder, recorderTime, done) {
    let totalTime = 0;
    for(var i = 0;i < 10;i++){
        avRecorder = await idle(avRecorder);
        await sleep(20)
        await avRecorder.prepare(avConfig).then(() => {
            expect(avRecorder.state).assertEqual(AV_RECORDER_STATE.PREPARED);
            console.info('resetTimeTestPromise avPlayer state is prepared')
        }, mediaTestBase.failurePromise).catch(mediaTestBase.catchPromise);

        await avRecorder.start().then(() => {
            console.info('start resetTimeTestPromise success');
        }).catch((err) => {
            console.info('resetTimeTestPromise start avRecorder failed and catch error is ' + err.message);
        });
        let end;
        let start = Date.now();
        console.info(`resetTimeTestPromise start time is : ${start}`)
        await avRecorder.reset().then(() => {
            console.info('reset AVRecorder success');
            console.info('resume resetTimeTestPromise success');
            end = Date.now()
            console.info(`resetTimeTestPromise end time is : ${end}`)
            let execution = parseInt(end - start)
            console.info("resetTimeTestPromise execution time  is :" + execution)
            totalTime = totalTime + execution;
        }).catch((err) => {
            console.info('resume resetTimeTestPromise failed and error is ' + err.message);
        });
        await avRecorder.release().then(() => {
            console.info('resetTimeTestPromise avPlayer is release')
            expect(avRecorder.state).assertEqual(AV_RECORDER_STATE.RELEASED);
        }, mediaTestBase.failurePromise).catch(mediaTestBase.catchPromise);
    }
    let avg = totalTime/10;
    console.info("resetTimeTestPromise avg time  is :" + avg)
    done();
}

export async function releaseTimeTestPromise(avConfig, avRecorder, recorderTime, done) {
    let totalTime = 0;
    for(var i = 0;i < 10;i++){
        avRecorder = await idle(avRecorder);
        await sleep(20)
        await avRecorder.prepare(avConfig).then(() => {
            expect(avRecorder.state).assertEqual(AV_RECORDER_STATE.PREPARED);
            console.info('releaseTimeTestPromise avPlayer state is prepared')
        }, mediaTestBase.failurePromise).catch(mediaTestBase.catchPromise);

        await avRecorder.start().then(() => {
            console.info('start releaseTimeTestPromise success');
        }).catch((err) => {
            console.info('releaseTimeTestPromise start avRecorder failed and catch error is ' + err.message);
        });
        let end;
        let start = Date.now();
        console.info(`releaseTimeTestPromise start time is : ${start}`)
        await avRecorder.release().then(() => {
            expect(avRecorder.state).assertEqual(AV_RECORDER_STATE.RELEASED);
            console.info('release AVRecorder success');
            console.info('resume releaseTimeTestPromise success');
            end = Date.now()
            let execution = parseInt(end - start)
            console.info("releaseTimeTestPromise execution time  is :" + execution)
            totalTime = totalTime + execution;
            console.info(`releaseTimeTestPromise end time is : ${end}`)
        }).catch((err) => {
            console.info('resume releaseTimeTestPromise failed and error is ' + err.message);
        });
    }
    let avg = totalTime/10;
    console.info("releaseTimeTestPromise avg time  is :" + avg)
    done();
}















