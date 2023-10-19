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
import fs from '@ohos.file.fs';
import featureAbility from '@ohos.ability.featureAbility'
import {afterAll, afterEach, beforeAll, beforeEach, describe, expect, it} from '@ohos/hypium';

export default function effectManagerEffectService() {

    describe('effectManagerEffectService', function () {
        let TAG = "[effectManagerEffectService] ";
        let testCaseName = '';
        let TESTFAILED = -1;
        let LONGTIME = 28800000;
        //let LONGTIME = 8888;
        let IntervalTime = 500;
        let audioSteamManager = audio.getAudioManager().getStreamManager();
        let contentType = audio.ContentType.CONTENT_TYPE_MOVIE;
        let streamUsage = audio.StreamUsage.STREAM_USAGE_MEDIA;
        // 流数量 表示开几路流
        let streamNum = 0;
        //  表示audioRenderer数组
        let audioRendererList = [];
        let audioRendererOptionsList = []
        let audioEffectModeList = [];
        let writeArray = [];
        let bufferSizeList = [];
        let asyncWriteFuncList = [];
        let pathDir = ''
        let audioPaths = [
            'files/f48000fs250_music.wav',
            'files/f48000fs500_movie.wav',
            'files/f48000fs1000_game.wav',
            'files/f48000fs2000_speech.wav',
            'files/f48000fs3000_ring.wav',
            'files/f48000fs4000_others.wav',
        ]
        let audioRendererOptions = {
            streamInfo: {
                samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
                channels: audio.AudioChannel.CHANNEL_2,
                sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
                encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
            },
            rendererInfo: {
                content: audio.ContentType.CONTENT_TYPE_SPEECH,
                usage: audio.StreamUsage.STREAM_USAGE_VOICE_COMMUNICATION,
                rendererFlags: 0
            }
        }
        beforeAll(async function () {
            console.info(TAG + 'TestLog: Start Testing AudioFrameworkTest Interfaces');
        })

        beforeEach(async function () {
            console.info(TAG + 'AudioFrameworkTest: beforeEach: Prerequisites at the test case level');
        })

        afterEach(function () {
            console.info(TAG + 'AudioFrameworkTest: afterEach: Test case-level clearance conditions');
        })

        afterAll(function () {
            console.info(TAG + 'AudioFrameworkTest: afterAll: Test suite-level cleanup condition');
        })

        function generateMixed(n) {
            var chars = ['0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
                'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
                'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'];
            var res = "";
            for (var i = 0; i < n; i++) {
                var id = Math.floor(Math.random() * 36);
                res += chars[id];
            }
            return res;
        }

        async function getPath() {
            console.log(TAG + 'TestLog: Start Testing getPath ');
            let context = await featureAbility .getContext()
            await context.getFilesDir().then((data) => {
                pathDir = data.split('haps/entry/')[0]
                console.log(TAG + testCaseName + `TestLog: Start Testing getPath ${pathDir} `);
            })
        }

        /**
         *  创建音频render
         * @returns {Promise<void>}
         */
        async function createAudioRendererFunc(assertFunction, done) {
            if (audioRendererList && audioRendererList.length) {
                audioRendererList.map(async (audioRenderer, index) => {
                    console.log('create audio renderer release ' + `index:  ${index} length : ${audioRendererList.length}`)
                    if (audioRendererList[index]) {
                        await audioRendererList[index].release();
                        audioRendererList[index] = null;
                    }
                })
            }
            for (let index = 0; index < streamNum; index++) {
                console.log(TAG + testCaseName + `create  render index {index}  ${JSON.stringify(audioRendererOptionsList[index])}  `);
                audioRendererList[index] = await audio.createAudioRenderer(audioRendererOptionsList[index]).then((data) => {
                    console.log(TAG + testCaseName + `create1  ${JSON.stringify(data)} `);
                    return data
                }).catch((err) => {
                    console.log(TAG + testCaseName + `create Error  ${JSON.stringify(err)} `);
                    assertFunction();
                    done()
                });
                console.log(TAG + testCaseName + `create  ${JSON.stringify(audioRendererList[index])} `);
                console.log(TAG + testCaseName + 'TestLog: Start Testing createAudioRendererFunc ' + `create ${index} rendererObj`);
            }
        }

        function isCheckAudioRendererObj() {
            let status = true
            for (let index = 0; index < audioRendererList.length; index++) {
                console.log('isCheckAudioRendererObj status ' + audioRendererList[index] === null)
                console.log('isCheckAudioRendererObj audioRendererList[index] ' + audioRendererList[index] + `length : ${audioRendererList.length} `)
                if (audioRendererList[index] === null) {
                    status = false
                    return status
                }
            }
            return status
        }


        async function setAudioEffectMode(assertFunction, done) {
            //  检查音频render是否为null
            if (isCheckAudioRendererObj()) {
                for (let index = 0; index < audioRendererList.length; index++) {
                    await audioRendererList[index].setAudioEffectMode(audioEffectModeList[index]).then(() => {
                        console.log(TAG + testCaseName + `setAudioEffectMode audioRendererList ${index} success `);
                    }).catch((err) => {
                        console.log(TAG + testCaseName + `setAudioEffectMode audioRendererList ${index} failed `);
                        assertFunction();
                        done()
                    })
                }
            } else {
                assertFunction();
                done()
            }
        }

        function isCheckAllWriteSuccess(arr) {
            if (Array.isArray(arr) && arr.length > 0) {
                return arr.every(v => v === true)
            } else {
                return false
            }
        }

        async function start(assertFunction, done) {
            let stateGroup = [audio.AudioState.STATE_PREPARED, audio.AudioState.STATE_PAUSED, audio.AudioState.STATE_STOPPED]
            if (isCheckAudioRendererObj()) {
                for (let index = 0; index < audioRendererList.length; index++) {
                    console.log('current audio renderer state : ' + audioRendererList[index].state)
                    if (stateGroup.indexOf(audioRendererList[index].state) === -1) {
                        console.log(TAG + testCaseName + `start state ${index} faile `);
                        assertFunction();
                        done()
                    } else {
                        await audioRendererList[index].start().then(() => {
                            console.log(TAG + testCaseName + `start audioRendererList ${index} success `);
                        }).catch((err) => {
                            console.log(TAG + testCaseName + `start audioRendererList ${index} failed `);
                            assertFunction();
                            done()
                        })
                    }
                }
            } else {
                console.log('start is isCheckAudioRendererObj Fail')
                assertFunction();
                done()
            }
        }

        async function writeRender(assertFunction, done) {
            console.log(TAG + ' writeRender start');
            if (isCheckAudioRendererObj()) {
                await Promise.all(audioRendererList.map((item, index) => asyncWriteFunc(index))).then((resArray) => {
                    console.log(TAG + testCaseName + `writeRender end  ${JSON.stringify(resArray)}`)
                    if (isCheckAllWriteSuccess(resArray)) {
                        console.log(TAG + testCaseName + `all write render  success ; status ${JSON.stringify(resArray)}`)
                    } else {
                        console.log(TAG + testCaseName + `all write render  fail ; status ${JSON.stringify(resArray)}`)
                        assertFunction()
                        done()
                    }
                }).catch((errArray) => {
                    console.log(TAG + testCaseName + `writeRender error ${JSON.stringify(errArray)}`)
                    console.log(TAG + testCaseName + `all write render  fail ; status ${JSON.stringify(errArray)}`)
                    assertFunction()
                    done()
                })
            } else {
                assertFunction();
                done()
            }
        }

        function asyncWriteFunc(index) {
            return new Promise(async (resolve, reject) => {
                let bfsize = 0;
                let sr = audioRendererOptionsList[index].streamInfo.samplingRate;
                let chn = audioRendererOptionsList[index].streamInfo.channels;
                bufferSizeList[index] = await audioRendererList[index].getBufferSize()
                console.log(TAG + testCaseName + `getBufferSize audioRendererList ${index} ${bufferSizeList[index]} SUCCESS`);
                let path = pathDir + audioPaths[index]
                console.log(TAG + testCaseName + `audio  path ${path} `);
                try {
                    console.log(TAG + testCaseName + 'fs start');
                    let stat = await fs.stat(path);
                    console.log(TAG + testCaseName + "fs stat SUCCESS");
                    let len = stat.size % bufferSizeList[index] == 0 ? Math.floor(stat.size / bufferSizeList[index]) : Math.floor(stat.size / bufferSizeList[index] + 1);
                    console.log(TAG + testCaseName + `len ${len}`);
                    let file = await fs.open(path, 0o0);
                    console.log(TAG + testCaseName + "open SUCCESS");
                    let buf = new ArrayBuffer(bufferSizeList[index]);
                    while (true) {
                        for (let i = 0; i < len; i++) {
                            let options = {
                                offset: i * bufferSizeList[index],
                                length: bufferSizeList[index]
                            }
                            let readsize = await fs.read(file.fd, buf, options);
                            let time = Date.now();
                            let writeSize = await new Promise((resolve, reject) => {
                                audioRendererList[index].write(buf, (err, writeSize) => {
                                    time = Date.now();
                                    if (err) {
                                        reject(err)
                                    } else {
                                        resolve(writeSize)
                                    }
                                })
                            })
                        }
                        break
                    }
                    console.log(TAG + testCaseName + "writeRender success" + `audioRendererList ${index} write end, state:${audioRendererList[index].state}\n`);
                    console.log(TAG + testCaseName + "writeRender " + ` file descriptor:  ${file.fd} `);
                    await fs.close(file.fd).then(() => {
                        console.log(TAG + testCaseName + "writeRender success" + `audioRendererList close success`);
                        resolve(true)
                    }).catch((err) => {
                        console.log(TAG + testCaseName + "writeRender failed" + `audioRendererList close : Error: ${JSON.stringify(err)}\n`);
                        resolve(false)
                    })
                } catch (err) {
                    console.log(TAG + testCaseName + "writeRender failed" + `audioRendererList write : Error: ${JSON.stringify(err)}\n`);
                    reject(false)
                }
            })
        }

        async function writeStandRender(index, path, assertFunction, done) {
            let bfsize = 0;
            let sr = audioRendererOptionsList[index].streamInfo.samplingRate;
            let chn = audioRendererOptionsList[index].streamInfo.channels;
            bufferSizeList[index] = await audioRendererList[index].getBufferSize()
            console.log(TAG + testCaseName + `getBufferSize audioRendererList ${index} ${bufferSizeList[index]} SUCCESS`);
            console.log(TAG + testCaseName + `audio  path ${path} `);
            try {
                console.log(TAG + testCaseName + 'fs start');
                let stat = await fs.stat(path);
                console.log(TAG + testCaseName + "fs stat SUCCESS");
                let len = stat.size % bufferSizeList[index] == 0 ? Math.floor(stat.size / bufferSizeList[index]) : Math.floor(stat.size / bufferSizeList[index] + 1);
                console.log(TAG + testCaseName + `len ${len}`);
                let file = await fs.open(path, 0o0);
                console.log(TAG + testCaseName + "open SUCCESS");
                let buf = new ArrayBuffer(bufferSizeList[index]);
                while (true) {
                    for (let i = 0; i < len; i++) {
                        let options = {
                            offset: i * bufferSizeList[index],
                            length: bufferSizeList[index]
                        }
                        let readsize = await fs.read(file.fd, buf, options);
                        let time = Date.now();
                        let writeSize = await new Promise((resolve, reject) => {
                            audioRendererList[index].write(buf, (err, writeSize) => {
                                time = Date.now();
                                if (err) {
                                    reject(err)
                                } else {
                                    resolve(writeSize)
                                }
                            })
                        })
                    }
                    break
                }
                console.log(TAG + testCaseName + "writeRender success" + `audioRendererList ${index} write end, state:${audioRendererList[index].state}\n`);
                console.log(TAG + testCaseName + "writeRender " + ` file descriptor:  ${file.fd} `);
                await fs.close(file.fd).then(() => {
                    console.log(TAG + testCaseName + "writeRender success" + `audioRendererList close success`);
                }).catch((err) => {
                    console.log(TAG + testCaseName + "writeRender failed" + `audioRendererList close : Error: ${JSON.stringify(err)}\n`);
                })
            } catch (err) {
                console.log(TAG + testCaseName + "writeRender failed" + `audioRendererList write : Error: ${JSON.stringify(err)}\n`);
                assertFunction()
                done()
            }
        }

        async function writeRenderChange(assertFunction, done) {
            console.log(TAG + ' writeRender start');
            if (isCheckAudioRendererObj()) {
                await Promise.all(audioRendererList.map((item, index) => asyncWriteChangeFunc(index))).then((resArray) => {
                    console.log(TAG + testCaseName + `writeRender end  ${JSON.stringify(resArray)}`)
                    if (isCheckAllWriteSuccess(resArray)) {
                        console.log(TAG + testCaseName + `all write render  success ; status ${JSON.stringify(resArray)}`)
                    } else {
                        console.log(TAG + testCaseName + `all write render  fail ; status ${JSON.stringify(resArray)}`)
                        assertFunction()
                        done()
                    }
                }).catch((errArray) => {
                    console.log(TAG + testCaseName + `writeRender error ${JSON.stringify(errArray)}`)
                    console.log(TAG + testCaseName + `all write render  fail ; status ${JSON.stringify(errArray)}`)
                    assertFunction()
                    done()
                })
            } else {
                assertFunction();
                done()
            }
        }

        function asyncWriteChangeFunc(index) {
            return new Promise(async (resolve, reject) => {
                let bfsize = 0;
                let sr = audioRendererOptionsList[index].streamInfo.samplingRate;
                let chn = audioRendererOptionsList[index].streamInfo.channels;
                bufferSizeList[index] = await audioRendererList[index].getBufferSize()
                console.log(TAG + testCaseName + `getBufferSize audioRendererList ${index} ${bufferSizeList[index]} SUCCESS`);
                let path = pathDir + audioPaths[index]
                console.log(TAG + testCaseName + `audio  path ${path} `);
                try {
                    console.log(TAG + testCaseName + 'fs start');
                    let stat = await fs.stat(path);
                    console.log(TAG + testCaseName + "fs stat SUCCESS");
                    let len = stat.size % bufferSizeList[index] == 0 ? Math.floor(stat.size / bufferSizeList[index]) : Math.floor(stat.size / bufferSizeList[index] + 1);
                    console.log(TAG + testCaseName + `len ${len}`);
                    let file = await fs.open(path, 0o0);
                    console.log(TAG + testCaseName + "open SUCCESS");
                    let buf = new ArrayBuffer(bufferSizeList[index]);
                    while (true) {
                        for (let i = 0; i < len; i++) {
                            if (i === Math.floor(len / 2)) {
                                if (index === 1) {
                                    await audioRendererList[index].setAudioEffectMode(audio.AudioEffectMode.EFFECT_NONE)
                                }
                            }
                            let options = {
                                offset: i * bufferSizeList[index],
                                length: bufferSizeList[index]
                            }
                            let readsize = await fs.read(file.fd, buf, options);
                            let time = Date.now();
                            let writeSize = await new Promise((resolve, reject) => {
                                audioRendererList[index].write(buf, (err, writeSize) => {
                                    time = Date.now();
                                    if (err) {
                                        reject(err)
                                    } else {
                                        resolve(writeSize)
                                    }
                                })
                            })
                        }
                        break
                    }
                    console.log(TAG + testCaseName + "writeRender success" + `audioRendererList ${index} write end, state:${audioRendererList[index].state}\n`);
                    console.log(TAG + testCaseName + "writeRender " + ` file descriptor:  ${file.fd} `);
                    await fs.close(file.fd).then(() => {
                        console.log(TAG + testCaseName + "writeRender success" + `audioRendererList close success`);
                        resolve(true)
                    }).catch((err) => {
                        console.log(TAG + testCaseName + "writeRender failed" + `audioRendererList close : Error: ${JSON.stringify(err)}\n`);
                        resolve(false)
                    })
                } catch (err) {
                    console.log(TAG + testCaseName + "writeRender failed" + `audioRendererList write : Error: ${JSON.stringify(err)}\n`);
                    reject(false)
                }
            })

        }


        async function release(assertFunction, done) {
            if (isCheckAudioRendererObj()) {
                for (let index = 0; index < audioRendererList.length; index++) {
                    // if (audioRendererList[index].state === audio.AudioState.STATE_RELEASED) {
                    //     console.log(TAG + testCaseName + `audioRenderer ${index} release not need \n`);
                    // } else {
                    // await audioRendererList[index].release((err) => {
                    //     if (err) {
                    //         audioRendererList[index] = null
                    //         console.log(TAG + testCaseName + `audioRenderer release : Error audioRendererList:${index}  : ${JSON.stringify(err)}\n`);
                    //         assertFunction();
                    //         done()
                    //     } else {
                    //         console.log(TAG + testCaseName + `audioRenderer  release SUCCESS \n`);
                    //         audioRendererList[index] = null
                    //     }
                    // })

                    // }
                    await audioRendererList[index].release()
                    audioRendererList[index] = null
                    // if (audioRendererList[index].state === audio.AudioState.STATE_RELEASED) {
                    //     console.log(TAG + testCaseName + `audioRenderer ${index} release SUCCESS \n`);
                    // } else {
                    //     console.log(TAG + testCaseName + `audioRenderer ${index} release fail \n`);
                    // }
                }
            } else {
                assertFunction();
                done()
            }
        }


        /**
         *@tc.number    : OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_003
         *@tc.name      : EFFECTMANAGER_SR2_STABLITY_TEST
         *@tc.desc      : getAudioEffcetInfoArray promise longtime test
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 1
         */
        it('OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_003', 1, async function (done) {
            testCaseName = '[OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_003]'
            console.info(TAG + testCaseName + 'start')
            streamNum = 1
            audioRendererList = []
            await getPath()
            audioRendererOptionsList = [{
                streamInfo: {
                    samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
                    channels: audio.AudioChannel.CHANNEL_2,
                    sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
                    encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
                },
                rendererInfo: {
                    content: audio.ContentType.CONTENT_TYPE_UNKNOWN,
                    usage: audio.StreamUsage.STREAM_USAGE_UNKNOWN,
                    rendererFlags: 0
                }
            }]
            audioEffectModeList = [
                audio.AudioEffectMode.EFFECT_DEFAULT
            ];
            audioPaths = [
                'files/f48000fs250_music.wav',
            ]
            console.log(TAG + testCaseName + 'TestLog: Start Testing createAudioRendererFunc function');
            await createAudioRendererFunc(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing start function');
            await start(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing setAudioEffectMode function');
            await setAudioEffectMode(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing writeRender function');
            await writeRender(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing release function');
            await release(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing end');
            done()
        })

        /**
         *@tc.number    : OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_004
         *@tc.name      : EFFECTMANAGER_SR2_STABLITY_TEST
         *@tc.desc      : getAudioEffcetInfoArray promise longtime test
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 1
         */
        it('OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_004', 1, async function (done) {
            testCaseName = '[OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_004]'
            console.info(TAG + testCaseName + 'start')
            streamNum = 1
            await getPath()
            audioRendererList = []
            audioRendererOptionsList = [{
                streamInfo: {
                    samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
                    channels: audio.AudioChannel.CHANNEL_2,
                    sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
                    encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
                },
                rendererInfo: {
                    content: audio.ContentType.CONTENT_TYPE_SONIFICATION,
                    usage: audio.StreamUsage.STREAM_USAGE_MEDIA,
                    rendererFlags: 0
                }
            }]
            audioEffectModeList = [
                audio.AudioEffectMode.EFFECT_DEFAULT
            ];
            audioPaths = [
                'files/f48000fs500_movie.wav',
            ]
            console.log(TAG + testCaseName + 'TestLog: Start Testing createAudioRendererFunc function');
            await createAudioRendererFunc(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing start function');
            await start(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing setAudioEffectMode function');
            await setAudioEffectMode(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing writeRender function');
            await writeRender(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing release function');
            await release(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing end');
            done()
        })

        /**
         *@tc.number    : OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_005
         *@tc.name      : EFFECTMANAGER_SR2_STABLITY_TEST
         *@tc.desc      : getAudioEffcetInfoArray promise longtime test
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 1
         */
        it('OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_005', 1, async function (done) {
            testCaseName = '[OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_005]'
            console.info(TAG + testCaseName + 'start')
            streamNum = 1
            await getPath()
            audioRendererList = []
            audioRendererOptionsList = [{
                streamInfo: {
                    samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
                    channels: audio.AudioChannel.CHANNEL_2,
                    sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
                    encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
                },
                rendererInfo: {
                    content: audio.ContentType.CONTENT_TYPE_SPEECH,
                    usage: audio.StreamUsage.STREAM_USAGE_ACCESSIBILITY,
                    rendererFlags: 0
                }
            }]
            audioEffectModeList = [
                audio.AudioEffectMode.EFFECT_DEFAULT
            ];
            audioPaths = [
                'files/f48000fs1000_game.wav',
            ]
            console.log(TAG + testCaseName + 'TestLog: Start Testing createAudioRendererFunc function');
            await createAudioRendererFunc(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing start function');
            await start(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing setAudioEffectMode function');
            await setAudioEffectMode(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing writeRender function');
            await writeRender(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing release function');
            await release(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing end');
            done()
        })

        /**
         *@tc.number    : OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_006
         *@tc.name      : EFFECTMANAGER_SR2_STABLITY_TEST
         *@tc.desc      : getAudioEffcetInfoArray promise longtime test
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 1
         */
        it('OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_006', 1, async function (done) {
            testCaseName = '[OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_006]'
            console.info(TAG + testCaseName + 'start')
            streamNum = 1
            await getPath()
            audioRendererList = []
            audioRendererOptionsList = [{
                streamInfo: {
                    samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
                    channels: audio.AudioChannel.CHANNEL_2,
                    sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
                    encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
                },
                rendererInfo: {
                    content: audio.ContentType.CONTENT_TYPE_SPEECH,
                    usage: audio.StreamUsage.STREAM_USAGE_VOICE_ASSISTANT,
                    rendererFlags: 0
                }
            }]
            audioEffectModeList = [
                audio.AudioEffectMode.EFFECT_DEFAULT
            ];
            audioPaths = [
                'files/f48000fs2000_speech.wav',
            ]
            console.log(TAG + testCaseName + 'TestLog: Start Testing createAudioRendererFunc function');
            await createAudioRendererFunc(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing start function');
            await start(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing setAudioEffectMode function');
            await setAudioEffectMode(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing writeRender function');
            await writeRender(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing release function');
            await release(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing end');
            done()
        })

        /**
         *@tc.number    : OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_007
         *@tc.name      : EFFECTMANAGER_SR2_STABLITY_TEST
         *@tc.desc      : getAudioEffcetInfoArray promise longtime test
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 1
         */
        it('OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_007', 1, async function (done) {
            testCaseName = '[OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_007]'
            console.info(TAG + testCaseName + 'start')
            streamNum = 1
            await getPath()
            audioRendererList = []
            audioRendererOptionsList = [{
                streamInfo: {
                    samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
                    channels: audio.AudioChannel.CHANNEL_2,
                    sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
                    encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
                },
                rendererInfo: {
                    content: audio.ContentType.CONTENT_TYPE_RINGTONE,
                    usage: audio.StreamUsage.STREAM_USAGE_MEDIA,
                    rendererFlags: 0
                }
            }]
            audioEffectModeList = [
                audio.AudioEffectMode.EFFECT_DEFAULT
            ];
            audioPaths = [
                'files/f48000fs3000_ring.wav',
            ]
            console.log(TAG + testCaseName + 'TestLog: Start Testing createAudioRendererFunc function');
            await createAudioRendererFunc(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing start function');
            await start(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing setAudioEffectMode function');
            await setAudioEffectMode(expect().assertFail, done)
            // console.log(TAG + testCaseName + 'TestLog: Start Testing start function');
            // await start(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing writeRender function');
            await writeRender(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing release function');
            await release(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing end');
            done()
        })

        /**
         *@tc.number    : OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_008
         *@tc.name      : EFFECTMANAGER_SR2_STABLITY_TEST
         *@tc.desc      : getAudioEffcetInfoArray promise longtime test
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 1
         */
        it('OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_008', 1, async function (done) {
            testCaseName = '[OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_008]'
            console.info(TAG + testCaseName + 'start')
            streamNum = 1
            await getPath()
            audioRendererList = []
            audioRendererOptionsList = [{
                streamInfo: {
                    samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
                    channels: audio.AudioChannel.CHANNEL_2,
                    sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
                    encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
                },
                rendererInfo: {
                    content: audio.ContentType.CONTENT_TYPE_SPEECH,
                    usage: audio.StreamUsage.STREAM_USAGE_VOICE_COMMUNICATION,
                    rendererFlags: 0
                }
            }]
            audioEffectModeList = [
                audio.AudioEffectMode.EFFECT_DEFAULT
            ];
            audioPaths = [
                'files/f48000fs4000_others.wav',
            ]
            console.log(TAG + testCaseName + 'TestLog: Start Testing createAudioRendererFunc function');
            await createAudioRendererFunc(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing setAudioEffectMode function');
            await setAudioEffectMode(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing start function');
            await start(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing writeRender function');
            await writeRender(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing release function');
            await release(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing end');
            done()
        })


        /**
         *@tc.number    : OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_009
         *@tc.name      : EFFECTMANAGER_SR2_STABLITY_TEST
         *@tc.desc      : getAudioEffcetInfoArray promise longtime test
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 1
         */
        it('OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_009', 1, async function (done) {
            testCaseName = '[OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_009]'
            console.info(TAG + testCaseName + 'start')
            streamNum = 1
            await getPath()
            audioRendererList = []
            audioRendererOptionsList = [{
                streamInfo: {
                    samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
                    channels: audio.AudioChannel.CHANNEL_2,
                    sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
                    encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
                },
                rendererInfo: {
                    content: audio.ContentType.CONTENT_TYPE_UNKNOWN,
                    usage: audio.StreamUsage.STREAM_USAGE_UNKNOWN,
                    rendererFlags: 0
                }
            }]
            audioEffectModeList = [
                audio.AudioEffectMode.EFFECT_NONE
            ];
            audioPaths = [
                'files/f48000fs250_music.wav',
            ]
            console.log(TAG + testCaseName + 'TestLog: Start Testing createAudioRendererFunc function');
            await createAudioRendererFunc(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing setAudioEffectMode function');
            await setAudioEffectMode(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing start function');
            await start(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing writeRender function');
            await writeRender(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing release function');
            await release(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing end');
            done()
        })

        /**
         *@tc.number    : OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_010
         *@tc.name      : EFFECTMANAGER_SR2_STABLITY_TEST
         *@tc.desc      : getAudioEffcetInfoArray promise longtime test
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 1
         */
        it('OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_010', 1, async function (done) {
            testCaseName = '[OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_010]'
            console.info(TAG + testCaseName + 'start')
            streamNum = 1
            await getPath()
            audioRendererList = []
            audioRendererOptionsList = [{
                streamInfo: {
                    samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
                    channels: audio.AudioChannel.CHANNEL_2,
                    sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
                    encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
                },
                rendererInfo: {
                    content: audio.ContentType.CONTENT_TYPE_SONIFICATION,
                    usage: audio.StreamUsage.STREAM_USAGE_MEDIA,
                    rendererFlags: 0
                }
            }]
            audioEffectModeList = [
                audio.AudioEffectMode.EFFECT_NONE
            ];
            audioPaths = [
                'files/f48000fs500_movie.wav',
            ]
            console.log(TAG + testCaseName + 'TestLog: Start Testing createAudioRendererFunc function');
            await createAudioRendererFunc(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing setAudioEffectMode function');
            await setAudioEffectMode(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing start function');
            await start(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing writeRender function');
            await writeRender(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing release function');
            await release(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing end');
            done()
        })

        /**
         *@tc.number    : OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_011
         *@tc.name      : EFFECTMANAGER_SR2_STABLITY_TEST
         *@tc.desc      : getAudioEffcetInfoArray promise longtime test
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 1
         */
        it('OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_011', 1, async function (done) {
            testCaseName = '[OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_011]'
            console.info(TAG + testCaseName + 'start')
            streamNum = 1
            await getPath()
            audioRendererList = []
            audioRendererOptionsList = [{
                streamInfo: {
                    samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
                    channels: audio.AudioChannel.CHANNEL_2,
                    sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
                    encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
                },
                rendererInfo: {
                    content: audio.ContentType.CONTENT_TYPE_SPEECH,
                    usage: audio.StreamUsage.STREAM_USAGE_ACCESSIBILITY,
                    rendererFlags: 0
                }
            }]
            audioEffectModeList = [
                audio.AudioEffectMode.EFFECT_NONE
            ];
            audioPaths = [
                'files/f48000fs1000_game.wav',
            ]
            console.log(TAG + testCaseName + 'TestLog: Start Testing createAudioRendererFunc function');
            await createAudioRendererFunc(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing setAudioEffectMode function');
            await setAudioEffectMode(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing start function');
            await start(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing writeRender function');
            await writeRender(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing release function');
            await release(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing end');
            done()
        })

        /**
         *@tc.number    : OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_012
         *@tc.name      : EFFECTMANAGER_SR2_STABLITY_TEST
         *@tc.desc      : getAudioEffcetInfoArray promise longtime test
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 1
         */
        it('OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_012', 1, async function (done) {
            testCaseName = '[OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_012]'
            console.info(TAG + testCaseName + 'start')
            streamNum = 1
            await getPath()
            audioRendererList = []
            audioRendererOptionsList = [{
                streamInfo: {
                    samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
                    channels: audio.AudioChannel.CHANNEL_2,
                    sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
                    encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
                },
                rendererInfo: {
                    content: audio.ContentType.CONTENT_TYPE_SPEECH,
                    usage: audio.StreamUsage.STREAM_USAGE_VOICE_ASSISTANT,
                    rendererFlags: 0
                }
            }]
            audioEffectModeList = [
                audio.AudioEffectMode.EFFECT_NONE
            ];
            audioPaths = [
                'files/f48000fs2000_speech.wav',
            ]
            console.log(TAG + testCaseName + 'TestLog: Start Testing createAudioRendererFunc function');
            await createAudioRendererFunc(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing setAudioEffectMode function');
            await setAudioEffectMode(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing start function');
            await start(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing writeRender function');
            await writeRender(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing release function');
            await release(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing end');
            done()
        })

        /**
         *@tc.number    : OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_013
         *@tc.name      : EFFECTMANAGER_SR2_STABLITY_TEST
         *@tc.desc      : getAudioEffcetInfoArray promise longtime test
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 1
         */
        it('OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_013', 1, async function (done) {
            testCaseName = '[OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_013]'
            console.info(TAG + testCaseName + 'start')
            streamNum = 1
            await getPath()
            audioRendererList = []
            audioRendererOptionsList = [{
                streamInfo: {
                    samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
                    channels: audio.AudioChannel.CHANNEL_2,
                    sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
                    encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
                },
                rendererInfo: {
                    content: audio.ContentType.CONTENT_TYPE_RINGTONE,
                    usage: audio.StreamUsage.STREAM_USAGE_MEDIA,
                    rendererFlags: 0
                }
            }]
            audioEffectModeList = [
                audio.AudioEffectMode.EFFECT_NONE
            ];
            audioPaths = [
                'files/f48000fs3000_ring.wav',
            ]
            console.log(TAG + testCaseName + 'TestLog: Start Testing createAudioRendererFunc function');
            await createAudioRendererFunc(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing setAudioEffectMode function');
            await setAudioEffectMode(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing start function');
            await start(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing writeRender function');
            await writeRender(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing release function');
            await release(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing end');
            done()
        })

        /**
         *@tc.number    : OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_014
         *@tc.name      : EFFECTMANAGER_SR2_STABLITY_TEST
         *@tc.desc      : getAudioEffcetInfoArray promise longtime test
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 1
         */
        it('OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_014', 1, async function (done) {
            testCaseName = '[OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_014]'
            console.info(TAG + testCaseName + 'start')
            streamNum = 1
            await getPath()
            audioRendererList = []
            audioRendererOptionsList = [{
                streamInfo: {
                    samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
                    channels: audio.AudioChannel.CHANNEL_2,
                    sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
                    encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
                },
                rendererInfo: {
                    content: audio.ContentType.CONTENT_TYPE_SPEECH,
                    usage: audio.StreamUsage.STREAM_USAGE_VOICE_COMMUNICATION,
                    rendererFlags: 0
                }
            }]
            audioEffectModeList = [
                audio.AudioEffectMode.EFFECT_NONE
            ];
            audioPaths = [
                'files/f48000fs4000_others.wav',
            ]
            console.log(TAG + testCaseName + 'TestLog: Start Testing createAudioRendererFunc function');
            await createAudioRendererFunc(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing setAudioEffectMode function');
            await setAudioEffectMode(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing start function');
            await start(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing writeRender function');
            await writeRender(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing release function');
            await release(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing end');
            done()
        })

        /**
         *@tc.number    : OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_015
         *@tc.name      : EFFECTMANAGER_SR2_STABLITY_TEST
         *@tc.desc      : getAudioEffcetInfoArray promise longtime test
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 1
         */
        it('OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_015', 1, async function (done) {
            testCaseName = '[OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_015]'
            console.info(TAG + testCaseName + 'start')
            streamNum = 2
            audioRendererList = []
            audioRendererOptionsList = [{
                streamInfo: {
                    samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
                    channels: audio.AudioChannel.CHANNEL_2,
                    sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
                    encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
                },
                rendererInfo: {
                    content: audio.ContentType.CONTENT_TYPE_MUSIC,
                    usage: audio.StreamUsage.STREAM_USAGE_MEDIA,
                    rendererFlags: 0
                }
            }, {
                streamInfo: {
                    samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
                    channels: audio.AudioChannel.CHANNEL_2,
                    sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
                    encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
                },
                rendererInfo: {
                    content: audio.ContentType.CONTENT_TYPE_MUSIC,
                    usage: audio.StreamUsage.STREAM_USAGE_MEDIA,
                    rendererFlags: 0
                }
            }]
            audioPaths = [
                'files/f48000fs250_music.wav',
                'files/f48000fs250_music.wav',
            ]
            audioEffectModeList = [
                audio.AudioEffectMode.EFFECT_DEFAULT,
                audio.AudioEffectMode.EFFECT_NONE,
            ];
            await getPath()
            audioRendererList = []
            console.log(TAG + testCaseName + 'TestLog: Start Testing createAudioRendererFunc function');
            await createAudioRendererFunc(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing setAudioEffectMode function');
            await setAudioEffectMode(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing start function');
            await start(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing writeRender function');
            await writeRender(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing release function');
            await release(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing end');
            done()
        })
        /**
         *@tc.number    : OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_016
         *@tc.name      : EFFECTMANAGER_SR2_STABLITY_TEST
         *@tc.desc      : getAudioEffcetInfoArray promise longtime test
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 1
         */
        it('OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_016', 1, async function (done) {
            testCaseName = '[OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_016]'
            console.info(TAG + testCaseName + 'start')
            streamNum = 2
            audioRendererOptionsList = [{
                streamInfo: {
                    samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
                    channels: audio.AudioChannel.CHANNEL_2,
                    sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
                    encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
                },
                rendererInfo: {
                    content: audio.ContentType.CONTENT_TYPE_MUSIC,
                    usage: audio.StreamUsage.STREAM_USAGE_MEDIA,
                    rendererFlags: 0
                }
            }, {
                streamInfo: {
                    samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
                    channels: audio.AudioChannel.CHANNEL_2,
                    sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
                    encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
                },
                rendererInfo: {
                    content: audio.ContentType.CONTENT_TYPE_MUSIC,
                    usage: audio.StreamUsage.STREAM_USAGE_MEDIA,
                    rendererFlags: 0
                }
            }]
            audioPaths = [
                'files/f48000fs250_music.wav',
                'files/f48000fs250_music.wav',
            ]
            audioEffectModeList = [
                audio.AudioEffectMode.EFFECT_DEFAULT,
                audio.AudioEffectMode.EFFECT_DEFAULT,
            ];
            await getPath()
            audioRendererList = []
            console.log(TAG + testCaseName + 'TestLog: Start Testing createAudioRendererFunc function');
            await createAudioRendererFunc(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing setAudioEffectMode function');
            await setAudioEffectMode(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing start function');
            await start(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing writeRender function');
            await writeRender(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing release function');
            await release(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing end');
            done()
        })
        /**
         *@tc.number    : OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_017
         *@tc.name      : EFFECTMANAGER_SR2_STABLITY_TEST
         *@tc.desc      : getAudioEffcetInfoArray promise longtime test
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 1
         */
        it('OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_017', 1, async function (done) {
            testCaseName = '[OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_017]'
            console.info(TAG + testCaseName + 'start')
            streamNum = 2
            audioRendererOptionsList = [{
                streamInfo: {
                    samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
                    channels: audio.AudioChannel.CHANNEL_2,
                    sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
                    encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
                },
                rendererInfo: {
                    content: audio.ContentType.CONTENT_TYPE_MUSIC,
                    usage: audio.StreamUsage.STREAM_USAGE_MEDIA,
                    rendererFlags: 0
                }
            }, {
                streamInfo: {
                    samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
                    channels: audio.AudioChannel.CHANNEL_2,
                    sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
                    encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
                },
                rendererInfo: {
                    content: audio.ContentType.CONTENT_TYPE_MUSIC,
                    usage: audio.StreamUsage.STREAM_USAGE_MEDIA,
                    rendererFlags: 0
                }
            }]
            audioPaths = [
                'files/f48000fs250_music.wav',
                'files/f48000fs250_music.wav',
            ]
            audioEffectModeList = [
                audio.AudioEffectMode.EFFECT_NONE,
                audio.AudioEffectMode.EFFECT_NONE,
            ];
            await getPath()
            audioRendererList = []
            console.log(TAG + testCaseName + 'TestLog: Start Testing createAudioRendererFunc function');
            await createAudioRendererFunc(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing setAudioEffectMode function');
            await setAudioEffectMode(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing start function');
            await start(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing writeRender function');
            await writeRender(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing release function');
            await release(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing end');
            done()
        })
        /**
         *@tc.number    : OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_018
         *@tc.name      : EFFECTMANAGER_SR2_STABLITY_TEST
         *@tc.desc      : getAudioEffcetInfoArray promise longtime test
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 1
         */
        it('OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_018', 1, async function (done) {
            testCaseName = '[OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_018]'
            console.info(TAG + testCaseName + 'start')
            streamNum = 2
            audioRendererOptionsList = [{
                streamInfo: {
                    samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
                    channels: audio.AudioChannel.CHANNEL_2,
                    sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
                    encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
                },
                rendererInfo: {
                    content: audio.ContentType.CONTENT_TYPE_SONIFICATION,
                    usage: audio.StreamUsage.STREAM_USAGE_MEDIA,
                    rendererFlags: 0
                }
            }, {
                streamInfo: {
                    samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
                    channels: audio.AudioChannel.CHANNEL_2,
                    sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
                    encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
                },
                rendererInfo: {
                    content: audio.ContentType.CONTENT_TYPE_MUSIC,
                    usage: audio.StreamUsage.STREAM_USAGE_MEDIA,
                    rendererFlags: 0
                }
            }]
            audioPaths = [
                'files/f48000fs500_movie.wav',
                'files/f48000fs250_music.wav',
            ]
            audioEffectModeList = [
                audio.AudioEffectMode.EFFECT_DEFAULT,
                audio.AudioEffectMode.EFFECT_NONE,
            ];
            await getPath()
            audioRendererList = []
            console.log(TAG + testCaseName + 'TestLog: Start Testing createAudioRendererFunc function');
            await createAudioRendererFunc(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing setAudioEffectMode function');
            await setAudioEffectMode(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing start function');
            await start(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing writeRender function');
            await writeRender(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing release function');
            await release(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing end');
            done()
        })
        /**
         *@tc.number    : OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_019
         *@tc.name      : EFFECTMANAGER_SR2_STABLITY_TEST
         *@tc.desc      : getAudioEffcetInfoArray promise longtime test
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 1
         */
        it('OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_019', 1, async function (done) {
            testCaseName = '[OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_019]'
            console.info(TAG + testCaseName + 'start')
            streamNum = 2
            audioRendererOptionsList = [{
                streamInfo: {
                    samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
                    channels: audio.AudioChannel.CHANNEL_2,
                    sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
                    encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
                },
                rendererInfo: {
                    content: audio.ContentType.CONTENT_TYPE_SONIFICATION,
                    usage: audio.StreamUsage.STREAM_USAGE_MEDIA,
                    rendererFlags: 0
                }
            }, {
                streamInfo: {
                    samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
                    channels: audio.AudioChannel.CHANNEL_2,
                    sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
                    encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
                },
                rendererInfo: {
                    content: audio.ContentType.CONTENT_TYPE_SONIFICATION,
                    usage: audio.StreamUsage.STREAM_USAGE_MEDIA,
                    rendererFlags: 0
                }
            }]
            audioPaths = [
                'files/f48000fs500_movie.wav',
                'files/f48000fs500_movie.wav',
            ]
            audioEffectModeList = [
                audio.AudioEffectMode.EFFECT_DEFAULT,
                audio.AudioEffectMode.EFFECT_DEFAULT,
            ];
            await getPath()
            audioRendererList = []
            console.log(TAG + testCaseName + 'TestLog: Start Testing createAudioRendererFunc function');
            await createAudioRendererFunc(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing setAudioEffectMode function');
            await setAudioEffectMode(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing start function');
            await start(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing writeRender function');
            await writeRender(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing release function');
            await release(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing end');
            done()
        })
        /**
         *@tc.number    : OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_020
         *@tc.name      : EFFECTMANAGER_SR2_STABLITY_TEST
         *@tc.desc      : getAudioEffcetInfoArray promise longtime test
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 1
         */
        it('OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_020', 1, async function (done) {
            testCaseName = '[OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_020]'
            console.info(TAG + testCaseName + 'start')
            streamNum = 2
            audioRendererOptionsList = [{
                streamInfo: {
                    samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
                    channels: audio.AudioChannel.CHANNEL_2,
                    sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
                    encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
                },
                rendererInfo: {
                    content: audio.ContentType.CONTENT_TYPE_SONIFICATION,
                    usage: audio.StreamUsage.STREAM_USAGE_MEDIA,
                    rendererFlags: 0
                }
            }, {
                streamInfo: {
                    samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
                    channels: audio.AudioChannel.CHANNEL_2,
                    sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
                    encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
                },
                rendererInfo: {
                    content: audio.ContentType.CONTENT_TYPE_SONIFICATION,
                    usage: audio.StreamUsage.STREAM_USAGE_MEDIA,
                    rendererFlags: 0
                }
            }]
            audioPaths = [
                'files/f48000fs500_movie.wav',
                'files/f48000fs500_movie.wav',
            ]
            audioEffectModeList = [
                audio.AudioEffectMode.EFFECT_NONE,
                audio.AudioEffectMode.EFFECT_NONE,
            ];
            await getPath()
            audioRendererList = []
            console.log(TAG + testCaseName + 'TestLog: Start Testing createAudioRendererFunc function');
            await createAudioRendererFunc(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing setAudioEffectMode function');
            await setAudioEffectMode(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing start function');
            await start(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing writeRender function');
            await writeRender(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing release function');
            await release(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing end');
            done()
        })


        /**
         *@tc.number    : OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_021
         *@tc.name      : EFFECTMANAGER_SR2_STABLITY_TEST
         *@tc.desc      : getAudioEffcetInfoArray promise longtime test
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 1
         */
        it('OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_021', 1, async function (done) {
            testCaseName = '[OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_021]'
            console.info(TAG + testCaseName + 'start')
            streamNum = 2
            audioRendererOptionsList = [{
                streamInfo: {
                    samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
                    channels: audio.AudioChannel.CHANNEL_2,
                    sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
                    encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
                },
                rendererInfo: {
                    content: audio.ContentType.CONTENT_TYPE_SPEECH,
                    usage: audio.StreamUsage.STREAM_USAGE_ACCESSIBILITY,
                    rendererFlags: 0
                }
            }, {
                streamInfo: {
                    samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
                    channels: audio.AudioChannel.CHANNEL_2,
                    sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
                    encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
                },
                rendererInfo: {
                    content: audio.ContentType.CONTENT_TYPE_MUSIC,
                    usage: audio.StreamUsage.STREAM_USAGE_MEDIA,
                    rendererFlags: 0
                }
            }]
            audioPaths = [
                'files/f48000fs1000_game.wav',
                'files/f48000fs250_music.wav',
            ]
            audioEffectModeList = [
                audio.AudioEffectMode.EFFECT_DEFAULT,
                audio.AudioEffectMode.EFFECT_NONE,
            ];
            await getPath()
            audioRendererList = []
            console.log(TAG + testCaseName + 'TestLog: Start Testing createAudioRendererFunc function');
            await createAudioRendererFunc(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing setAudioEffectMode function');
            await setAudioEffectMode(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing start function');
            await start(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing writeRender function');
            await writeRender(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing release function');
            await release(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing end');
            done()
        })

        /**
         *@tc.number    : OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_022
         *@tc.name      : EFFECTMANAGER_SR2_STABLITY_TEST
         *@tc.desc      : getAudioEffcetInfoArray promise longtime test
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 1
         */
        it('OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_022', 1, async function (done) {
            testCaseName = '[OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_022]'
            console.info(TAG + testCaseName + 'start')
            streamNum = 2
            audioRendererOptionsList = [{
                streamInfo: {
                    samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
                    channels: audio.AudioChannel.CHANNEL_2,
                    sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
                    encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
                },
                rendererInfo: {
                    content: audio.ContentType.CONTENT_TYPE_SPEECH,
                    usage: audio.StreamUsage.STREAM_USAGE_ACCESSIBILITY,
                    rendererFlags: 0
                }
            }, {
                streamInfo: {
                    samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
                    channels: audio.AudioChannel.CHANNEL_2,
                    sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
                    encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
                },
                rendererInfo: {
                    content: audio.ContentType.CONTENT_TYPE_SPEECH,
                    usage: audio.StreamUsage.STREAM_USAGE_ACCESSIBILITY,
                    rendererFlags: 0
                }
            }]
            audioPaths = [
                'files/f48000fs1000_game.wav',
                'files/f48000fs1000_game.wav',
            ]
            audioEffectModeList = [
                audio.AudioEffectMode.EFFECT_DEFAULT,
                audio.AudioEffectMode.EFFECT_DEFAULT,
            ];
            await getPath()
            audioRendererList = []
            console.log(TAG + testCaseName + 'TestLog: Start Testing createAudioRendererFunc function');
            await createAudioRendererFunc(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing setAudioEffectMode function');
            await setAudioEffectMode(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing start function');
            await start(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing writeRender function');
            await writeRender(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing release function');
            await release(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing end');
            done()
        })

        /**
         *@tc.number    : OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_023
         *@tc.name      : EFFECTMANAGER_SR2_STABLITY_TEST
         *@tc.desc      : getAudioEffcetInfoArray promise longtime test
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 1
         */
        it('OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_023', 1, async function (done) {
            testCaseName = '[OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_023]'
            console.info(TAG + testCaseName + 'start')
            streamNum = 2
            audioRendererOptionsList = [{
                streamInfo: {
                    samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
                    channels: audio.AudioChannel.CHANNEL_2,
                    sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
                    encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
                },
                rendererInfo: {
                    content: audio.ContentType.CONTENT_TYPE_SPEECH,
                    usage: audio.StreamUsage.STREAM_USAGE_ACCESSIBILITY,
                    rendererFlags: 0
                }
            }, {
                streamInfo: {
                    samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
                    channels: audio.AudioChannel.CHANNEL_2,
                    sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
                    encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
                },
                rendererInfo: {
                    content: audio.ContentType.CONTENT_TYPE_SPEECH,
                    usage: audio.StreamUsage.STREAM_USAGE_ACCESSIBILITY,
                    rendererFlags: 0
                }
            }]
            audioPaths = [
                'files/f48000fs1000_game.wav',
                'files/f48000fs1000_game.wav',
            ]
            audioEffectModeList = [
                audio.AudioEffectMode.EFFECT_NONE,
                audio.AudioEffectMode.EFFECT_NONE,
            ];
            await getPath()
            audioRendererList = []
            console.log(TAG + testCaseName + 'TestLog: Start Testing createAudioRendererFunc function');
            await createAudioRendererFunc(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing setAudioEffectMode function');
            await setAudioEffectMode(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing start function');
            await start(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing writeRender function');
            await writeRender(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing release function');
            await release(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing end');
            done()
        })


        /**
         *@tc.number    : OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_024
         *@tc.name      : EFFECTMANAGER_SR2_STABLITY_TEST
         *@tc.desc      : getAudioEffcetInfoArray promise longtime test
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 1
         */
        it('OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_024', 1, async function (done) {
            testCaseName = '[OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_024]'
            console.info(TAG + testCaseName + 'start')
            streamNum = 2
            audioRendererOptionsList = [{
                streamInfo: {
                    samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
                    channels: audio.AudioChannel.CHANNEL_2,
                    sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
                    encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
                },
                rendererInfo: {
                    content: audio.ContentType.CONTENT_TYPE_SPEECH,
                    usage: audio.StreamUsage.STREAM_USAGE_VOICE_ASSISTANT,
                    rendererFlags: 0
                }
            }, {
                streamInfo: {
                    samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
                    channels: audio.AudioChannel.CHANNEL_2,
                    sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
                    encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
                },
                rendererInfo: {
                    content: audio.ContentType.CONTENT_TYPE_MUSIC,
                    usage: audio.StreamUsage.STREAM_USAGE_MEDIA,
                    rendererFlags: 0
                }
            }]
            audioPaths = [
                'files/f48000fs2000_speech.wav',
                'files/f48000fs250_music.wav',
            ]
            audioEffectModeList = [
                audio.AudioEffectMode.EFFECT_DEFAULT,
                audio.AudioEffectMode.EFFECT_NONE,
            ];
            await getPath()
            audioRendererList = []
            console.log(TAG + testCaseName + 'TestLog: Start Testing createAudioRendererFunc function');
            await createAudioRendererFunc(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing setAudioEffectMode function');
            await setAudioEffectMode(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing start function');
            await start(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing writeRender function');
            await writeRender(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing release function');
            await release(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing end');
            done()
        })

        /**
         *@tc.number    : OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_025
         *@tc.name      : EFFECTMANAGER_SR2_STABLITY_TEST
         *@tc.desc      : getAudioEffcetInfoArray promise longtime test
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 1
         */
        it('OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_025', 1, async function (done) {
            testCaseName = '[OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_025]'
            console.info(TAG + testCaseName + 'start')
            streamNum = 2
            audioRendererOptionsList = [{
                streamInfo: {
                    samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
                    channels: audio.AudioChannel.CHANNEL_2,
                    sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
                    encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
                },
                rendererInfo: {
                    content: audio.ContentType.CONTENT_TYPE_SPEECH,
                    usage: audio.StreamUsage.STREAM_USAGE_VOICE_ASSISTANT,
                    rendererFlags: 0
                }
            }, {
                streamInfo: {
                    samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
                    channels: audio.AudioChannel.CHANNEL_2,
                    sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
                    encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
                },
                rendererInfo: {
                    content: audio.ContentType.CONTENT_TYPE_SPEECH,
                    usage: audio.StreamUsage.STREAM_USAGE_VOICE_ASSISTANT,
                    rendererFlags: 0
                }
            }]
            audioPaths = [
                'files/f48000fs2000_speech.wav',
                'files/f48000fs2000_speech.wav',
            ]
            audioEffectModeList = [
                audio.AudioEffectMode.EFFECT_DEFAULT,
                audio.AudioEffectMode.EFFECT_DEFAULT,
            ];
            await getPath()
            audioRendererList = []
            console.log(TAG + testCaseName + 'TestLog: Start Testing createAudioRendererFunc function');
            await createAudioRendererFunc(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing setAudioEffectMode function');
            await setAudioEffectMode(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing start function');
            await start(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing writeRender function');
            await writeRender(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing release function');
            await release(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing end');
            done()
        })

        /**
         *@tc.number    : OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_026
         *@tc.name      : EFFECTMANAGER_SR2_STABLITY_TEST
         *@tc.desc      : getAudioEffcetInfoArray promise longtime test
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 1
         */
        it('OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_026', 1, async function (done) {
            testCaseName = '[OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_026]'
            console.info(TAG + testCaseName + 'start')
            streamNum = 2
            audioRendererOptionsList = [{
                streamInfo: {
                    samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
                    channels: audio.AudioChannel.CHANNEL_2,
                    sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
                    encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
                },
                rendererInfo: {
                    content: audio.ContentType.CONTENT_TYPE_SPEECH,
                    usage: audio.StreamUsage.STREAM_USAGE_VOICE_ASSISTANT,
                    rendererFlags: 0
                }
            }, {
                streamInfo: {
                    samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
                    channels: audio.AudioChannel.CHANNEL_2,
                    sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
                    encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
                },
                rendererInfo: {
                    content: audio.ContentType.CONTENT_TYPE_SPEECH,
                    usage: audio.StreamUsage.STREAM_USAGE_VOICE_ASSISTANT,
                    rendererFlags: 0
                }
            }]
            audioPaths = [
                'files/f48000fs2000_speech.wav',
                'files/f48000fs2000_speech.wav',
            ]
            audioEffectModeList = [
                audio.AudioEffectMode.EFFECT_NONE,
                audio.AudioEffectMode.EFFECT_NONE,
            ];
            await getPath()
            audioRendererList = []
            console.log(TAG + testCaseName + 'TestLog: Start Testing createAudioRendererFunc function');
            await createAudioRendererFunc(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing setAudioEffectMode function');
            await setAudioEffectMode(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing start function');
            await start(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing writeRender function');
            await writeRender(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing release function');
            await release(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing end');
            done()
        })


        /**
         *@tc.number    : OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_027
         *@tc.name      : EFFECTMANAGER_SR2_STABLITY_TEST
         *@tc.desc      : getAudioEffcetInfoArray promise longtime test
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 1
         */
        it('OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_027', 1, async function (done) {
            testCaseName = '[OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_027]'
            console.info(TAG + testCaseName + 'start')
            streamNum = 2
            audioRendererOptionsList = [{
                streamInfo: {
                    samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
                    channels: audio.AudioChannel.CHANNEL_2,
                    sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
                    encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
                },
                rendererInfo: {
                    content: audio.ContentType.CONTENT_TYPE_RINGTONE,
                    usage: audio.StreamUsage.STREAM_USAGE_MEDIA,
                    rendererFlags: 0
                }
            }, {
                streamInfo: {
                    samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
                    channels: audio.AudioChannel.CHANNEL_2,
                    sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
                    encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
                },
                rendererInfo: {
                    content: audio.ContentType.CONTENT_TYPE_MUSIC,
                    usage: audio.StreamUsage.STREAM_USAGE_MEDIA,
                    rendererFlags: 0
                }
            }]
            audioPaths = [
                'files/f48000fs3000_ring.wav',
                'files/f48000fs250_music.wav',
            ]
            audioEffectModeList = [
                audio.AudioEffectMode.EFFECT_DEFAULT,
                audio.AudioEffectMode.EFFECT_NONE,
            ];
            await getPath()
            audioRendererList = []
            console.log(TAG + testCaseName + 'TestLog: Start Testing createAudioRendererFunc function');
            await createAudioRendererFunc(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing setAudioEffectMode function');
            await setAudioEffectMode(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing start function');
            await start(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing writeRender function');
            await writeRender(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing release function');
            await release(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing end');
            done()
        })

        /**
         *@tc.number    : OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_028
         *@tc.name      : EFFECTMANAGER_SR2_STABLITY_TEST
         *@tc.desc      : getAudioEffcetInfoArray promise longtime test
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 1
         */
        it('OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_028', 1, async function (done) {
            testCaseName = '[OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_028]'
            console.info(TAG + testCaseName + 'start')
            streamNum = 2
            audioRendererOptionsList = [{
                streamInfo: {
                    samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
                    channels: audio.AudioChannel.CHANNEL_2,
                    sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
                    encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
                },
                rendererInfo: {
                    content: audio.ContentType.CONTENT_TYPE_RINGTONE,
                    usage: audio.StreamUsage.STREAM_USAGE_MEDIA,
                    rendererFlags: 0
                }
            }, {
                streamInfo: {
                    samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
                    channels: audio.AudioChannel.CHANNEL_2,
                    sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
                    encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
                },
                rendererInfo: {
                    content: audio.ContentType.CONTENT_TYPE_RINGTONE,
                    usage: audio.StreamUsage.STREAM_USAGE_MEDIA,
                    rendererFlags: 0
                }
            }]
            audioPaths = [
                'files/f48000fs3000_ring.wav',
                'files/f48000fs3000_ring.wav',
            ]
            audioEffectModeList = [
                audio.AudioEffectMode.EFFECT_DEFAULT,
                audio.AudioEffectMode.EFFECT_DEFAULT,
            ];
            await getPath()
            audioRendererList = []
            console.log(TAG + testCaseName + 'TestLog: Start Testing createAudioRendererFunc function');
            await createAudioRendererFunc(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing setAudioEffectMode function');
            await setAudioEffectMode(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing start function');
            await start(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing writeRender function');
            await writeRender(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing release function');
            await release(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing end');
            done()
        })

        /**
         *@tc.number    : OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_029
         *@tc.name      : EFFECTMANAGER_SR2_STABLITY_TEST
         *@tc.desc      : getAudioEffcetInfoArray promise longtime test
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 1
         */
        it('OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_029', 1, async function (done) {
            testCaseName = '[OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_029]'
            console.info(TAG + testCaseName + 'start')
            streamNum = 2
            audioRendererOptionsList = [{
                streamInfo: {
                    samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
                    channels: audio.AudioChannel.CHANNEL_2,
                    sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
                    encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
                },
                rendererInfo: {
                    content: audio.ContentType.CONTENT_TYPE_RINGTONE,
                    usage: audio.StreamUsage.STREAM_USAGE_MEDIA,
                    rendererFlags: 0
                }
            }, {
                streamInfo: {
                    samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
                    channels: audio.AudioChannel.CHANNEL_2,
                    sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
                    encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
                },
                rendererInfo: {
                    content: audio.ContentType.CONTENT_TYPE_RINGTONE,
                    usage: audio.StreamUsage.STREAM_USAGE_MEDIA,
                    rendererFlags: 0
                }
            }]
            audioPaths = [
                'files/f48000fs3000_ring.wav',
                'files/f48000fs3000_ring.wav',
            ]
            audioEffectModeList = [
                audio.AudioEffectMode.EFFECT_NONE,
                audio.AudioEffectMode.EFFECT_NONE,
            ];
            await getPath()
            audioRendererList = []
            console.log(TAG + testCaseName + 'TestLog: Start Testing createAudioRendererFunc function');
            await createAudioRendererFunc(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing setAudioEffectMode function');
            await setAudioEffectMode(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing start function');
            await start(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing writeRender function');
            await writeRender(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing release function');
            await release(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing end');
            done()
        })

        /**
         *@tc.number    : OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_030
         *@tc.name      : EFFECTMANAGER_SR2_STABLITY_TEST
         *@tc.desc      : getAudioEffcetInfoArray promise longtime test
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 1
         */
        it('OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_030', 1, async function (done) {
            testCaseName = '[OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_030]'
            console.info(TAG + testCaseName + 'start')
            streamNum = 2
            audioRendererOptionsList = [{
                streamInfo: {
                    samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
                    channels: audio.AudioChannel.CHANNEL_2,
                    sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
                    encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
                },
                rendererInfo: {
                    content: audio.ContentType.CONTENT_TYPE_SPEECH,
                    usage: audio.StreamUsage.STREAM_USAGE_VOICE_COMMUNICATION,
                    rendererFlags: 0
                }
            }, {
                streamInfo: {
                    samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
                    channels: audio.AudioChannel.CHANNEL_2,
                    sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
                    encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
                },
                rendererInfo: {
                    content: audio.ContentType.CONTENT_TYPE_MUSIC,
                    usage: audio.StreamUsage.STREAM_USAGE_MEDIA,
                    rendererFlags: 0
                }
            }]
            audioPaths = [
                'files/f48000fs4000_others.wav',
                'files/f48000fs250_music.wav',
            ]
            audioEffectModeList = [
                audio.AudioEffectMode.EFFECT_DEFAULT,
                audio.AudioEffectMode.EFFECT_NONE,
            ];
            await getPath()
            audioRendererList = []
            console.log(TAG + testCaseName + 'TestLog: Start Testing createAudioRendererFunc function');
            await createAudioRendererFunc(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing setAudioEffectMode function');
            await setAudioEffectMode(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing start function');
            await start(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing writeRender function');
            await writeRender(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing release function');
            await release(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing end');
            done()
        })

        /**
         *@tc.number    : OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_031
         *@tc.name      : EFFECTMANAGER_SR2_STABLITY_TEST
         *@tc.desc      : getAudioEffcetInfoArray promise longtime test
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 1
         */
        it('OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_031', 1, async function (done) {
            testCaseName = '[OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_031]'
            console.info(TAG + testCaseName + 'start')
            streamNum = 2
            audioRendererOptionsList = [{
                streamInfo: {
                    samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
                    channels: audio.AudioChannel.CHANNEL_2,
                    sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
                    encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
                },
                rendererInfo: {
                    content: audio.ContentType.CONTENT_TYPE_SPEECH,
                    usage: audio.StreamUsage.STREAM_USAGE_VOICE_COMMUNICATION,
                    rendererFlags: 0
                }
            }, {
                streamInfo: {
                    samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
                    channels: audio.AudioChannel.CHANNEL_2,
                    sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
                    encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
                },
                rendererInfo: {
                    content: audio.ContentType.CONTENT_TYPE_SPEECH,
                    usage: audio.StreamUsage.STREAM_USAGE_VOICE_COMMUNICATION,
                    rendererFlags: 0
                }
            }]
            audioPaths = [
                'files/f48000fs4000_others.wav',
                'files/f48000fs4000_others.wav',
            ]
            audioEffectModeList = [
                audio.AudioEffectMode.EFFECT_DEFAULT,
                audio.AudioEffectMode.EFFECT_DEFAULT,
            ];
            await getPath()
            audioRendererList = []
            console.log(TAG + testCaseName + 'TestLog: Start Testing createAudioRendererFunc function');
            await createAudioRendererFunc(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing setAudioEffectMode function');
            await setAudioEffectMode(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing start function');
            await start(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing writeRender function');
            await writeRender(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing release function');
            await release(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing end');
            done()
        })


        /**
         *@tc.number    : OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_032
         *@tc.name      : EFFECTMANAGER_SR2_STABLITY_TEST
         *@tc.desc      : getAudioEffcetInfoArray promise longtime test
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 1
         */
        it('OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_032', 1, async function (done) {
            testCaseName = '[OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_032]'
            console.info(TAG + testCaseName + 'start')
            streamNum = 2
            audioRendererOptionsList = [{
                streamInfo: {
                    samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
                    channels: audio.AudioChannel.CHANNEL_2,
                    sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
                    encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
                },
                rendererInfo: {
                    content: audio.ContentType.CONTENT_TYPE_SPEECH,
                    usage: audio.StreamUsage.STREAM_USAGE_VOICE_COMMUNICATION,
                    rendererFlags: 0
                }
            }, {
                streamInfo: {
                    samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
                    channels: audio.AudioChannel.CHANNEL_2,
                    sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
                    encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
                },
                rendererInfo: {
                    content: audio.ContentType.CONTENT_TYPE_SPEECH,
                    usage: audio.StreamUsage.STREAM_USAGE_VOICE_COMMUNICATION,
                    rendererFlags: 0
                }
            }]
            audioPaths = [
                'files/f48000fs4000_others.wav',
                'files/f48000fs4000_others.wav',
            ]
            audioEffectModeList = [
                audio.AudioEffectMode.EFFECT_NONE,
                audio.AudioEffectMode.EFFECT_NONE,
            ];
            await getPath()
            audioRendererList = []
            console.log(TAG + testCaseName + 'TestLog: Start Testing createAudioRendererFunc function');
            await createAudioRendererFunc(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing setAudioEffectMode function');
            await setAudioEffectMode(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing start function');
            await start(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing writeRender function');
            await writeRender(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing release function');
            await release(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing end');
            done()
        })


        /**
         *@tc.number    : OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_033
         *@tc.name      : EFFECTMANAGER_SR2_STABLITY_TEST
         *@tc.desc      : getAudioEffcetInfoArray promise longtime test
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 1
         */
        it('OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_033', 1, async function (done) {
            testCaseName = '[OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_033]'
            console.info(TAG + testCaseName + 'start')
            streamNum = 2
            audioRendererOptionsList = [{
                streamInfo: {
                    samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
                    channels: audio.AudioChannel.CHANNEL_2,
                    sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
                    encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
                },
                rendererInfo: {
                    content: audio.ContentType.CONTENT_TYPE_MUSIC,
                    usage: audio.StreamUsage.STREAM_USAGE_MEDIA,
                    rendererFlags: 0
                }
            }, {
                streamInfo: {
                    samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
                    channels: audio.AudioChannel.CHANNEL_2,
                    sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
                    encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
                },
                rendererInfo: {
                    content: audio.ContentType.CONTENT_TYPE_SONIFICATION,
                    usage: audio.StreamUsage.STREAM_USAGE_MEDIA,
                    rendererFlags: 0
                }
            }]
            audioPaths = [
                'files/f48000fs250_music.wav',
                'files/f48000fs500_movie.wav',
            ]
            audioEffectModeList = [
                audio.AudioEffectMode.EFFECT_DEFAULT,
                audio.AudioEffectMode.EFFECT_DEFAULT,
            ];
            await getPath()
            audioRendererList = []
            console.log(TAG + testCaseName + 'TestLog: Start Testing createAudioRendererFunc function');
            await createAudioRendererFunc(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing setAudioEffectMode function');
            await setAudioEffectMode(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing start function');
            await start(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing writeRender function');
            await writeRender(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing release function');
            await release(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing end');
            done()
        })


        /**
         *@tc.number    : OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_034
         *@tc.name      : EFFECTMANAGER_SR2_STABLITY_TEST
         *@tc.desc      : getAudioEffcetInfoArray promise longtime test
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 1
         */
        it('OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_034', 1, async function (done) {
            testCaseName = '[OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_034]'
            console.info(TAG + testCaseName + 'start')
            streamNum = 2
            audioRendererOptionsList = [{
                streamInfo: {
                    samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
                    channels: audio.AudioChannel.CHANNEL_2,
                    sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
                    encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
                },
                rendererInfo: {
                    content: audio.ContentType.CONTENT_TYPE_MUSIC,
                    usage: audio.StreamUsage.STREAM_USAGE_MEDIA,
                    rendererFlags: 0
                }
            }, {
                streamInfo: {
                    samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
                    channels: audio.AudioChannel.CHANNEL_2,
                    sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
                    encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
                },
                rendererInfo: {
                    content: audio.ContentType.CONTENT_TYPE_SPEECH,
                    usage: audio.StreamUsage.STREAM_USAGE_ACCESSIBILITY,
                    rendererFlags: 0
                }
            }]
            audioPaths = [
                'files/f48000fs250_music.wav',
                'files/f48000fs1000_game.wav',
            ]
            audioEffectModeList = [
                audio.AudioEffectMode.EFFECT_DEFAULT,
                audio.AudioEffectMode.EFFECT_DEFAULT,
            ];
            await getPath()
            audioRendererList = []
            console.log(TAG + testCaseName + 'TestLog: Start Testing createAudioRendererFunc function');
            await createAudioRendererFunc(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing setAudioEffectMode function');
            await setAudioEffectMode(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing start function');
            await start(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing writeRender function');
            await writeRender(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing release function');
            await release(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing end');
            done()
        })

        /**
         *@tc.number    : OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_035
         *@tc.name      : EFFECTMANAGER_SR2_STABLITY_TEST
         *@tc.desc      : getAudioEffcetInfoArray promise longtime test
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 1
         */
        it('OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_035', 1, async function (done) {
            testCaseName = '[OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_035]'
            console.info(TAG + testCaseName + 'start')
            streamNum = 2
            audioRendererOptionsList = [{
                streamInfo: {
                    samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
                    channels: audio.AudioChannel.CHANNEL_2,
                    sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
                    encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
                },
                rendererInfo: {
                    content: audio.ContentType.CONTENT_TYPE_MUSIC,
                    usage: audio.StreamUsage.STREAM_USAGE_MEDIA,
                    rendererFlags: 0
                }
            }, {
                streamInfo: {
                    samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
                    channels: audio.AudioChannel.CHANNEL_2,
                    sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
                    encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
                },
                rendererInfo: {
                    content: audio.ContentType.CONTENT_TYPE_SPEECH,
                    usage: audio.StreamUsage.STREAM_USAGE_ACCESSIBILITY,
                    rendererFlags: 0
                }
            }]
            audioPaths = [
                'files/f48000fs250_music.wav',
                'files/f48000fs2000_speech.wav',
            ]
            audioEffectModeList = [
                audio.AudioEffectMode.EFFECT_DEFAULT,
                audio.AudioEffectMode.EFFECT_DEFAULT,
            ];
            await getPath()
            audioRendererList = []
            console.log(TAG + testCaseName + 'TestLog: Start Testing createAudioRendererFunc function');
            await createAudioRendererFunc(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing setAudioEffectMode function');
            await setAudioEffectMode(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing start function');
            await start(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing writeRender function');
            await writeRender(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing release function');
            await release(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing end');
            done()
        })

        /**
         *@tc.number    : OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_036
         *@tc.name      : EFFECTMANAGER_SR2_STABLITY_TEST
         *@tc.desc      : getAudioEffcetInfoArray promise longtime test
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 1
         */
        it('OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_036', 1, async function (done) {
            testCaseName = '[OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_036]'
            console.info(TAG + testCaseName + 'start')
            streamNum = 2
            audioRendererOptionsList = [{
                streamInfo: {
                    samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
                    channels: audio.AudioChannel.CHANNEL_2,
                    sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
                    encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
                },
                rendererInfo: {
                    content: audio.ContentType.CONTENT_TYPE_MUSIC,
                    usage: audio.StreamUsage.STREAM_USAGE_MEDIA,
                    rendererFlags: 0
                }
            }, {
                streamInfo: {
                    samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
                    channels: audio.AudioChannel.CHANNEL_2,
                    sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
                    encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
                },
                rendererInfo: {
                    content: audio.ContentType.CONTENT_TYPE_RINGTONE,
                    usage: audio.StreamUsage.STREAM_USAGE_MEDIA,
                    rendererFlags: 0
                }
            }]
            audioPaths = [
                'files/f48000fs250_music.wav',
                'files/f48000fs3000_ring.wav',
            ]
            audioEffectModeList = [
                audio.AudioEffectMode.EFFECT_DEFAULT,
                audio.AudioEffectMode.EFFECT_DEFAULT,
            ];
            await getPath()
            audioRendererList = []
            console.log(TAG + testCaseName + 'TestLog: Start Testing createAudioRendererFunc function');
            await createAudioRendererFunc(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing setAudioEffectMode function');
            await setAudioEffectMode(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing start function');
            await start(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing writeRender function');
            await writeRender(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing release function');
            await release(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing end');
            done()
        })

        /**
         *@tc.number    : OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_037
         *@tc.name      : EFFECTMANAGER_SR2_STABLITY_TEST
         *@tc.desc      : getAudioEffcetInfoArray promise longtime test
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 1
         */
        it('OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_037', 1, async function (done) {
            testCaseName = '[OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_037]'
            console.info(TAG + testCaseName + 'start')
            streamNum = 2
            audioRendererOptionsList = [{
                streamInfo: {
                    samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
                    channels: audio.AudioChannel.CHANNEL_2,
                    sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
                    encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
                },
                rendererInfo: {
                    content: audio.ContentType.CONTENT_TYPE_MUSIC,
                    usage: audio.StreamUsage.STREAM_USAGE_MEDIA,
                    rendererFlags: 0
                }
            }, {
                streamInfo: {
                    samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
                    channels: audio.AudioChannel.CHANNEL_2,
                    sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
                    encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
                },
                rendererInfo: {
                    content: audio.ContentType.CONTENT_TYPE_SPEECH,
                    usage: audio.StreamUsage.STREAM_USAGE_VOICE_COMMUNICATION,
                    rendererFlags: 0
                }
            }]
            audioPaths = [
                'files/f48000fs250_music.wav',
                'files/f48000fs4000_others.wav',
            ]
            audioEffectModeList = [
                audio.AudioEffectMode.EFFECT_DEFAULT,
                audio.AudioEffectMode.EFFECT_DEFAULT,
            ];
            await getPath()
            audioRendererList = []
            console.log(TAG + testCaseName + 'TestLog: Start Testing createAudioRendererFunc function');
            await createAudioRendererFunc(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing setAudioEffectMode function');
            await setAudioEffectMode(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing start function');
            await start(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing writeRender function');
            await writeRender(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing release function');
            await release(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing end');
            done()
        })

        /**
         *@tc.number    : OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_038
         *@tc.name      : EFFECTMANAGER_SR2_STABLITY_TEST
         *@tc.desc      : getAudioEffcetInfoArray promise longtime test
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 1
         */
        it('OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_038', 1, async function (done) {
            testCaseName = '[OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_038]'
            console.info(TAG + testCaseName + 'start')
            streamNum = 2
            audioRendererOptionsList = [{
                streamInfo: {
                    samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
                    channels: audio.AudioChannel.CHANNEL_2,
                    sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
                    encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
                },
                rendererInfo: {
                    content: audio.ContentType.CONTENT_TYPE_SONIFICATION,
                    usage: audio.StreamUsage.STREAM_USAGE_MEDIA,
                    rendererFlags: 0
                }
            }, {
                streamInfo: {
                    samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
                    channels: audio.AudioChannel.CHANNEL_2,
                    sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
                    encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
                },
                rendererInfo: {
                    content: audio.ContentType.CONTENT_TYPE_SPEECH,
                    usage: audio.StreamUsage.STREAM_USAGE_ACCESSIBILITY,
                    rendererFlags: 0
                }
            }]
            audioPaths = [
                'files/f48000fs500_movie.wav',
                'files/f48000fs1000_game.wav',
            ]
            audioEffectModeList = [
                audio.AudioEffectMode.EFFECT_DEFAULT,
                audio.AudioEffectMode.EFFECT_DEFAULT,
            ];
            await getPath()
            audioRendererList = []
            console.log(TAG + testCaseName + 'TestLog: Start Testing createAudioRendererFunc function');
            await createAudioRendererFunc(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing setAudioEffectMode function');
            await setAudioEffectMode(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing start function');
            await start(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing writeRender function');
            await writeRender(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing release function');
            await release(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing end');
            done()
        })

        /**
         *@tc.number    : OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_039
         *@tc.name      : EFFECTMANAGER_SR2_STABLITY_TEST
         *@tc.desc      : getAudioEffcetInfoArray promise longtime test
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 1
         */
        it('OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_039', 1, async function (done) {
            testCaseName = '[OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_039]'
            console.info(TAG + testCaseName + 'start')
            streamNum = 2
            audioRendererOptionsList = [{
                streamInfo: {
                    samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
                    channels: audio.AudioChannel.CHANNEL_2,
                    sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
                    encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
                },
                rendererInfo: {
                    content: audio.ContentType.CONTENT_TYPE_SONIFICATION,
                    usage: audio.StreamUsage.STREAM_USAGE_MEDIA,
                    rendererFlags: 0
                }
            }, {
                streamInfo: {
                    samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
                    channels: audio.AudioChannel.CHANNEL_2,
                    sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
                    encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
                },
                rendererInfo: {
                    content: audio.ContentType.CONTENT_TYPE_SPEECH,
                    usage: audio.StreamUsage.STREAM_USAGE_VOICE_ASSISTANT,
                    rendererFlags: 0
                }
            }]
            audioPaths = [
                'files/f48000fs500_movie.wav',
                'files/f48000fs2000_speech.wav',
            ]
            audioEffectModeList = [
                audio.AudioEffectMode.EFFECT_DEFAULT,
                audio.AudioEffectMode.EFFECT_DEFAULT,
            ];
            await getPath()
            audioRendererList = []
            console.log(TAG + testCaseName + 'TestLog: Start Testing createAudioRendererFunc function');
            await createAudioRendererFunc(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing setAudioEffectMode function');
            await setAudioEffectMode(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing start function');
            await start(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing writeRender function');
            await writeRender(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing release function');
            await release(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing end');
            done()
        })

        /**
         *@tc.number    : OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_040
         *@tc.name      : EFFECTMANAGER_SR2_STABLITY_TEST
         *@tc.desc      : getAudioEffcetInfoArray promise longtime test
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 1
         */
        it('OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_040', 1, async function (done) {
            testCaseName = '[OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_040]'
            console.info(TAG + testCaseName + 'start')
            streamNum = 2
            audioRendererOptionsList = [{
                streamInfo: {
                    samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
                    channels: audio.AudioChannel.CHANNEL_2,
                    sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
                    encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
                },
                rendererInfo: {
                    content: audio.ContentType.CONTENT_TYPE_SONIFICATION,
                    usage: audio.StreamUsage.STREAM_USAGE_MEDIA,
                    rendererFlags: 0
                }
            }, {
                streamInfo: {
                    samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
                    channels: audio.AudioChannel.CHANNEL_2,
                    sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
                    encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
                },
                rendererInfo: {
                    content: audio.ContentType.CONTENT_TYPE_RINGTONE,
                    usage: audio.StreamUsage.STREAM_USAGE_MEDIA,
                    rendererFlags: 0
                }
            }]
            audioPaths = [
                'files/f48000fs500_movie.wav',
                'files/f48000fs3000_ring.wav',
            ]
            audioEffectModeList = [
                audio.AudioEffectMode.EFFECT_DEFAULT,
                audio.AudioEffectMode.EFFECT_DEFAULT,
            ];
            await getPath()
            audioRendererList = []
            console.log(TAG + testCaseName + 'TestLog: Start Testing createAudioRendererFunc function');
            await createAudioRendererFunc(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing setAudioEffectMode function');
            await setAudioEffectMode(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing start function');
            await start(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing writeRender function');
            await writeRender(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing release function');
            await release(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing end');
            done()
        })


        /**
         *@tc.number    : OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_041
         *@tc.name      : EFFECTMANAGER_SR2_STABLITY_TEST
         *@tc.desc      : getAudioEffcetInfoArray promise longtime test
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 1
         */
        it('OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_041', 1, async function (done) {
            testCaseName = '[OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_041]'
            console.info(TAG + testCaseName + 'start')
            streamNum = 2
            audioRendererOptionsList = [{
                streamInfo: {
                    samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
                    channels: audio.AudioChannel.CHANNEL_2,
                    sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
                    encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
                },
                rendererInfo: {
                    content: audio.ContentType.CONTENT_TYPE_SONIFICATION,
                    usage: audio.StreamUsage.STREAM_USAGE_MEDIA,
                    rendererFlags: 0
                }
            }, {
                streamInfo: {
                    samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
                    channels: audio.AudioChannel.CHANNEL_2,
                    sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
                    encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
                },
                rendererInfo: {
                    content: audio.ContentType.CONTENT_TYPE_SPEECH,
                    usage: audio.StreamUsage.STREAM_USAGE_VOICE_COMMUNICATION,
                    rendererFlags: 0
                }
            }]
            audioPaths = [
                'files/f48000fs500_movie.wav',
                'files/f48000fs4000_others.wav',
            ]
            audioEffectModeList = [
                audio.AudioEffectMode.EFFECT_DEFAULT,
                audio.AudioEffectMode.EFFECT_DEFAULT,
            ];
            await getPath()
            audioRendererList = []
            console.log(TAG + testCaseName + 'TestLog: Start Testing createAudioRendererFunc function');
            await createAudioRendererFunc(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing setAudioEffectMode function');
            await setAudioEffectMode(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing start function');
            await start(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing writeRender function');
            await writeRender(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing release function');
            await release(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing end');
            done()
        })

        /**
         *@tc.number    : OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_042
         *@tc.name      : EFFECTMANAGER_SR2_STABLITY_TEST
         *@tc.desc      : getAudioEffcetInfoArray promise longtime test
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 1
         */
        it('OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_042', 1, async function (done) {
            testCaseName = '[OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_042]'
            console.info(TAG + testCaseName + 'start')
            streamNum = 2
            audioRendererOptionsList = [{
                streamInfo: {
                    samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
                    channels: audio.AudioChannel.CHANNEL_2,
                    sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
                    encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
                },
                rendererInfo: {
                    content: audio.ContentType.CONTENT_TYPE_SPEECH,
                    usage: audio.StreamUsage.STREAM_USAGE_ACCESSIBILITY,
                    rendererFlags: 0
                }
            }, {
                streamInfo: {
                    samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
                    channels: audio.AudioChannel.CHANNEL_2,
                    sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
                    encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
                },
                rendererInfo: {
                    content: audio.ContentType.CONTENT_TYPE_SPEECH,
                    usage: audio.StreamUsage.STREAM_USAGE_VOICE_ASSISTANT,
                    rendererFlags: 0
                }
            }]
            audioPaths = [
                'files/f48000fs1000_game.wav',
                'files/f48000fs2000_speech.wav',
            ]
            audioEffectModeList = [
                audio.AudioEffectMode.EFFECT_DEFAULT,
                audio.AudioEffectMode.EFFECT_DEFAULT,
            ];
            await getPath()
            audioRendererList = []
            console.log(TAG + testCaseName + 'TestLog: Start Testing createAudioRendererFunc function');
            await createAudioRendererFunc(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing setAudioEffectMode function');
            await setAudioEffectMode(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing start function');
            await start(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing writeRender function');
            await writeRender(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing release function');
            await release(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing end');
            done()
        })


        /**
         *@tc.number    : OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_043
         *@tc.name      : EFFECTMANAGER_SR2_STABLITY_TEST
         *@tc.desc      : getAudioEffcetInfoArray promise longtime test
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 1
         */
        it('OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_043', 1, async function (done) {
            testCaseName = '[OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_043]'
            console.info(TAG + testCaseName + 'start')
            streamNum = 2
            audioRendererOptionsList = [{
                streamInfo: {
                    samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
                    channels: audio.AudioChannel.CHANNEL_2,
                    sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
                    encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
                },
                rendererInfo: {
                    content: audio.ContentType.CONTENT_TYPE_SPEECH,
                    usage: audio.StreamUsage.STREAM_USAGE_ACCESSIBILITY,
                    rendererFlags: 0
                }
            }, {
                streamInfo: {
                    samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
                    channels: audio.AudioChannel.CHANNEL_2,
                    sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
                    encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
                },
                rendererInfo: {
                    content: audio.ContentType.CONTENT_TYPE_RINGTONE,
                    usage: audio.StreamUsage.STREAM_USAGE_MEDIA,
                    rendererFlags: 0
                }
            }]
            audioPaths = [
                'files/f48000fs1000_game.wav',
                'files/f48000fs3000_ring.wav',
            ]
            audioEffectModeList = [
                audio.AudioEffectMode.EFFECT_DEFAULT,
                audio.AudioEffectMode.EFFECT_DEFAULT,
            ];
            await getPath()
            audioRendererList = []
            console.log(TAG + testCaseName + 'TestLog: Start Testing createAudioRendererFunc function');
            await createAudioRendererFunc(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing setAudioEffectMode function');
            await setAudioEffectMode(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing start function');
            await start(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing writeRender function');
            await writeRender(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing release function');
            await release(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing end');
            done()
        })

        /**
         *@tc.number    : OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_044
         *@tc.name      : EFFECTMANAGER_SR2_STABLITY_TEST
         *@tc.desc      : getAudioEffcetInfoArray promise longtime test
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 1
         */
        it('OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_044', 1, async function (done) {
            testCaseName = '[OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_044]'
            console.info(TAG + testCaseName + 'start')
            streamNum = 2
            audioRendererOptionsList = [{
                streamInfo: {
                    samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
                    channels: audio.AudioChannel.CHANNEL_2,
                    sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
                    encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
                },
                rendererInfo: {
                    content: audio.ContentType.CONTENT_TYPE_SPEECH,
                    usage: audio.StreamUsage.STREAM_USAGE_ACCESSIBILITY,
                    rendererFlags: 0
                }
            }, {
                streamInfo: {
                    samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
                    channels: audio.AudioChannel.CHANNEL_2,
                    sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
                    encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
                },
                rendererInfo: {
                    content: audio.ContentType.CONTENT_TYPE_SPEECH,
                    usage: audio.StreamUsage.STREAM_USAGE_VOICE_COMMUNICATION,
                    rendererFlags: 0
                }
            }]
            audioPaths = [
                'files/f48000fs1000_game.wav',
                'files/f48000fs4000_others.wav',
            ]
            audioEffectModeList = [
                audio.AudioEffectMode.EFFECT_DEFAULT,
                audio.AudioEffectMode.EFFECT_DEFAULT,
            ];
            await getPath()
            audioRendererList = []
            console.log(TAG + testCaseName + 'TestLog: Start Testing createAudioRendererFunc function');
            await createAudioRendererFunc(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing setAudioEffectMode function');
            await setAudioEffectMode(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing start function');
            await start(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing writeRender function');
            await writeRender(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing release function');
            await release(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing end');
            done()
        })

        /**
         *@tc.number    : OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_045
         *@tc.name      : EFFECTMANAGER_SR2_STABLITY_TEST
         *@tc.desc      : getAudioEffcetInfoArray promise longtime test
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 1
         */
        it('OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_045', 1, async function (done) {
            testCaseName = '[OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_045]'
            console.info(TAG + testCaseName + 'start')
            streamNum = 2
            audioRendererOptionsList = [{
                streamInfo: {
                    samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
                    channels: audio.AudioChannel.CHANNEL_2,
                    sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
                    encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
                },
                rendererInfo: {
                    content: audio.ContentType.CONTENT_TYPE_SPEECH,
                    usage: audio.StreamUsage.STREAM_USAGE_VOICE_ASSISTANT,
                    rendererFlags: 0
                }
            }, {
                streamInfo: {
                    samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
                    channels: audio.AudioChannel.CHANNEL_2,
                    sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
                    encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
                },
                rendererInfo: {
                    content: audio.ContentType.CONTENT_TYPE_RINGTONE,
                    usage: audio.StreamUsage.STREAM_USAGE_MEDIA,
                    rendererFlags: 0
                }
            }]
            audioPaths = [
                'files/f48000fs2000_speech.wav',
                'files/f48000fs3000_ring.wav',
            ]
            audioEffectModeList = [
                audio.AudioEffectMode.EFFECT_DEFAULT,
                audio.AudioEffectMode.EFFECT_DEFAULT,
            ];
            await getPath()
            audioRendererList = []
            console.log(TAG + testCaseName + 'TestLog: Start Testing createAudioRendererFunc function');
            await createAudioRendererFunc(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing setAudioEffectMode function');
            await setAudioEffectMode(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing start function');
            await start(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing writeRender function');
            await writeRender(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing release function');
            await release(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing end');
            done()
        })


        /**
         *@tc.number    : OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_046
         *@tc.name      : EFFECTMANAGER_SR2_STABLITY_TEST
         *@tc.desc      : getAudioEffcetInfoArray promise longtime test
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 1
         */
        it('OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_046', 1, async function (done) {
            testCaseName = '[OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_046]'
            console.info(TAG + testCaseName + 'start')
            streamNum = 2
            audioRendererOptionsList = [{
                streamInfo: {
                    samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
                    channels: audio.AudioChannel.CHANNEL_2,
                    sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
                    encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
                },
                rendererInfo: {
                    content: audio.ContentType.CONTENT_TYPE_SPEECH,
                    usage: audio.StreamUsage.STREAM_USAGE_VOICE_ASSISTANT,
                    rendererFlags: 0
                }
            }, {
                streamInfo: {
                    samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
                    channels: audio.AudioChannel.CHANNEL_2,
                    sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
                    encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
                },
                rendererInfo: {
                    content: audio.ContentType.CONTENT_TYPE_SPEECH,
                    usage: audio.StreamUsage.STREAM_USAGE_VOICE_COMMUNICATION,
                    rendererFlags: 0
                }
            }]
            audioPaths = [
                'files/f48000fs2000_speech.wav',
                'files/f48000fs4000_others.wav',
            ]
            audioEffectModeList = [
                audio.AudioEffectMode.EFFECT_DEFAULT,
                audio.AudioEffectMode.EFFECT_DEFAULT,
            ];
            await getPath()
            audioRendererList = []
            console.log(TAG + testCaseName + 'TestLog: Start Testing createAudioRendererFunc function');
            await createAudioRendererFunc(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing setAudioEffectMode function');
            await setAudioEffectMode(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing start function');
            await start(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing writeRender function');
            await writeRender(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing release function');
            await release(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing end');
            done()
        })

        /**
         *@tc.number    : OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_047
         *@tc.name      : EFFECTMANAGER_SR2_STABLITY_TEST
         *@tc.desc      : getAudioEffcetInfoArray promise longtime test
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 1
         */
        it('OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_047', 1, async function (done) {
            testCaseName = '[OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_047]'
            console.info(TAG + testCaseName + 'start')
            streamNum = 2
            audioRendererOptionsList = [{
                streamInfo: {
                    samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
                    channels: audio.AudioChannel.CHANNEL_2,
                    sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
                    encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
                },
                rendererInfo: {
                    content: audio.ContentType.CONTENT_TYPE_RINGTONE,
                    usage: audio.StreamUsage.STREAM_USAGE_MEDIA,
                    rendererFlags: 0
                }
            }, {
                streamInfo: {
                    samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
                    channels: audio.AudioChannel.CHANNEL_2,
                    sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
                    encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
                },
                rendererInfo: {
                    content: audio.ContentType.CONTENT_TYPE_SPEECH,
                    usage: audio.StreamUsage.STREAM_USAGE_VOICE_COMMUNICATION,
                    rendererFlags: 0
                }
            }]
            audioPaths = [
                'files/f48000fs3000_ring.wav',
                'files/f48000fs4000_others.wav',
            ]
            audioEffectModeList = [
                audio.AudioEffectMode.EFFECT_DEFAULT,
                audio.AudioEffectMode.EFFECT_DEFAULT,
            ];
            await getPath()
            audioRendererList = []
            console.log(TAG + testCaseName + 'TestLog: Start Testing createAudioRendererFunc function');
            await createAudioRendererFunc(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing setAudioEffectMode function');
            await setAudioEffectMode(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing start function');
            await start(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing writeRender function');
            await writeRender(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing release function');
            await release(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing end');
            done()
        })


        /**
         *@tc.number    : OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_048
         *@tc.name      : EFFECTMANAGER_SR2_STABLITY_TEST
         *@tc.desc      : getAudioEffcetInfoArray promise longtime test
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 1
         */
        it('OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_048', 1, async function (done) {
            testCaseName = '[OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_048]'
            console.info(TAG + testCaseName + 'start')
            streamNum = 6
            audioRendererOptionsList = [{
                streamInfo: {
                    samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
                    channels: audio.AudioChannel.CHANNEL_2,
                    sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
                    encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
                },
                rendererInfo: {
                    content: audio.ContentType.CONTENT_TYPE_MUSIC,
                    usage: audio.StreamUsage.STREAM_USAGE_MEDIA,
                    rendererFlags: 0
                }
            }, {
                streamInfo: {
                    samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
                    channels: audio.AudioChannel.CHANNEL_2,
                    sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
                    encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
                },
                rendererInfo: {
                    content: audio.ContentType.CONTENT_TYPE_SONIFICATION,
                    usage: audio.StreamUsage.STREAM_USAGE_MEDIA,
                    rendererFlags: 0
                }
            },
                {
                    streamInfo: {
                        samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
                        channels: audio.AudioChannel.CHANNEL_2,
                        sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
                        encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
                    },
                    rendererInfo: {
                        content: audio.ContentType.CONTENT_TYPE_SPEECH,
                        usage: audio.StreamUsage.STREAM_USAGE_ACCESSIBILITY,
                        rendererFlags: 0
                    }
                },
                {
                    streamInfo: {
                        samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
                        channels: audio.AudioChannel.CHANNEL_2,
                        sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
                        encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
                    },
                    rendererInfo: {
                        content: audio.ContentType.CONTENT_TYPE_SPEECH,
                        usage: audio.StreamUsage.STREAM_USAGE_VOICE_ASSISTANT,
                        rendererFlags: 0
                    }
                },
                {
                    streamInfo: {
                        samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
                        channels: audio.AudioChannel.CHANNEL_2,
                        sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
                        encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
                    },
                    rendererInfo: {
                        content: audio.ContentType.CONTENT_TYPE_RINGTONE,
                        usage: audio.StreamUsage.STREAM_USAGE_MEDIA,
                        rendererFlags: 0
                    }
                },
                {
                    streamInfo: {
                        samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
                        channels: audio.AudioChannel.CHANNEL_2,
                        sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
                        encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
                    },
                    rendererInfo: {
                        content: audio.ContentType.CONTENT_TYPE_SPEECH,
                        usage: audio.StreamUsage.STREAM_USAGE_VOICE_COMMUNICATION,
                        rendererFlags: 0
                    }
                }
            ]
            audioPaths = [
                'files/f48000fs250_music.wav',
                'files/f48000fs500_movie.wav',
                'files/f48000fs1000_game.wav',
                'files/f48000fs2000_speech.wav',
                'files/f48000fs3000_ring.wav',
                'files/f48000fs4000_others.wav'
            ]
            audioEffectModeList = [
                audio.AudioEffectMode.EFFECT_DEFAULT,
                audio.AudioEffectMode.EFFECT_DEFAULT,
                audio.AudioEffectMode.EFFECT_DEFAULT,
                audio.AudioEffectMode.EFFECT_DEFAULT,
                audio.AudioEffectMode.EFFECT_DEFAULT,
                audio.AudioEffectMode.EFFECT_DEFAULT,
            ];
            await getPath()
            audioRendererList = []
            console.log(TAG + testCaseName + 'TestLog: Start Testing createAudioRendererFunc function');
            await createAudioRendererFunc(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing setAudioEffectMode function');
            await setAudioEffectMode(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing start function');
            await start(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing writeRender function');
            await writeRender(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing release function');
            await release(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing end');
            done()
        })


        /**
         *@tc.number    : OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_049
         *@tc.name      : EFFECTMANAGER_SR2_STABLITY_TEST
         *@tc.desc      : getAudioEffcetInfoArray promise longtime test
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 1
         */
        it('OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_049', 1, async function (done) {
            testCaseName = '[OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_049]'
            console.info(TAG + testCaseName + 'start')
            streamNum = 6
            audioRendererOptionsList = [{
                streamInfo: {
                    samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
                    channels: audio.AudioChannel.CHANNEL_2,
                    sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
                    encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
                },
                rendererInfo: {
                    content: audio.ContentType.CONTENT_TYPE_MUSIC,
                    usage: audio.StreamUsage.STREAM_USAGE_MEDIA,
                    rendererFlags: 0
                }
            }, {
                streamInfo: {
                    samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
                    channels: audio.AudioChannel.CHANNEL_2,
                    sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
                    encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
                },
                rendererInfo: {
                    content: audio.ContentType.CONTENT_TYPE_SONIFICATION,
                    usage: audio.StreamUsage.STREAM_USAGE_MEDIA,
                    rendererFlags: 0
                }
            },
                {
                    streamInfo: {
                        samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
                        channels: audio.AudioChannel.CHANNEL_2,
                        sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
                        encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
                    },
                    rendererInfo: {
                        content: audio.ContentType.CONTENT_TYPE_SPEECH,
                        usage: audio.StreamUsage.STREAM_USAGE_ACCESSIBILITY,
                        rendererFlags: 0
                    }
                },
                {
                    streamInfo: {
                        samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
                        channels: audio.AudioChannel.CHANNEL_2,
                        sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
                        encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
                    },
                    rendererInfo: {
                        content: audio.ContentType.CONTENT_TYPE_SPEECH,
                        usage: audio.StreamUsage.STREAM_USAGE_VOICE_ASSISTANT,
                        rendererFlags: 0
                    }
                },
                {
                    streamInfo: {
                        samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
                        channels: audio.AudioChannel.CHANNEL_2,
                        sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
                        encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
                    },
                    rendererInfo: {
                        content: audio.ContentType.CONTENT_TYPE_RINGTONE,
                        usage: audio.StreamUsage.STREAM_USAGE_MEDIA,
                        rendererFlags: 0
                    }
                },
                {
                    streamInfo: {
                        samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
                        channels: audio.AudioChannel.CHANNEL_2,
                        sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
                        encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
                    },
                    rendererInfo: {
                        content: audio.ContentType.CONTENT_TYPE_SPEECH,
                        usage: audio.StreamUsage.STREAM_USAGE_VOICE_COMMUNICATION,
                        rendererFlags: 0
                    }
                }
            ]
            audioPaths = [
                'files/f48000fs250_music.wav',
                'files/f48000fs500_movie.wav',
                'files/f48000fs1000_game.wav',
                'files/f48000fs2000_speech.wav',
                'files/f48000fs3000_ring.wav',
                'files/f48000fs4000_others.wav'
            ]
            audioEffectModeList = [
                audio.AudioEffectMode.EFFECT_NONE,
                audio.AudioEffectMode.EFFECT_NONE,
                audio.AudioEffectMode.EFFECT_NONE,
                audio.AudioEffectMode.EFFECT_NONE,
                audio.AudioEffectMode.EFFECT_NONE,
                audio.AudioEffectMode.EFFECT_NONE,
            ];
            await getPath()
            audioRendererList = []
            console.log(TAG + testCaseName + 'TestLog: Start Testing createAudioRendererFunc function');
            await createAudioRendererFunc(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing setAudioEffectMode function');
            await setAudioEffectMode(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing start function');
            await start(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing writeRender function');
            await writeRender(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing release function');
            await release(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing end');
            done()
        })


        /**
         *@tc.number    : OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_050
         *@tc.name      : EFFECTMANAGER_SR2_STABLITY_TEST
         *@tc.desc      : getAudioEffcetInfoArray promise longtime test
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 1
         */
        it('OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_050', 1, async function (done) {
            testCaseName = '[OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_050]'
            console.info(TAG + testCaseName + 'start')
            streamNum = 2
            audioRendererOptionsList = [{
                streamInfo: {
                    samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
                    channels: audio.AudioChannel.CHANNEL_2,
                    sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
                    encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
                },
                rendererInfo: {
                    content: audio.ContentType.CONTENT_TYPE_MUSIC,
                    usage: audio.StreamUsage.STREAM_USAGE_MEDIA,
                    rendererFlags: 0
                }
            }, {
                streamInfo: {
                    samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
                    channels: audio.AudioChannel.CHANNEL_2,
                    sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
                    encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
                },
                rendererInfo: {
                    content: audio.ContentType.CONTENT_TYPE_SPEECH,
                    usage: audio.StreamUsage.STREAM_USAGE_VOICE_COMMUNICATION,
                    rendererFlags: 0
                }
            }
            ]
            audioPaths = [
                'files/f48000fs250_music.wav',
                'files/f48000fs4000_others.wav'
            ]
            audioEffectModeList = [
                audio.AudioEffectMode.EFFECT_DEFAULT,
                audio.AudioEffectMode.EFFECT_DEFAULT,
            ];
            await getPath()
            audioRendererList = []
            console.log(TAG + testCaseName + 'TestLog: Start Testing createAudioRendererFunc function');
            await createAudioRendererFunc(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing setAudioEffectMode function');
            await setAudioEffectMode(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing start function');
            await start(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing writeRender function');

            await writeRenderChange(expect().assertFail, done)

            console.log(TAG + testCaseName + 'TestLog: Start Testing release function');
            await release(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing end');
            done()
        })


        /**
         *@tc.number    : OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_051
         *@tc.name      : EFFECTMANAGER_SR2_STABLITY_TEST
         *@tc.desc      : getAudioEffcetInfoArray promise longtime test
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 1
         */
        it('OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_051', 1, async function (done) {
            testCaseName = '[OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_051]'
            console.info(TAG + testCaseName + 'start')
            streamNum = 1
            audioRendererOptionsList = [{
                streamInfo: {
                    samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
                    channels: audio.AudioChannel.CHANNEL_2,
                    sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
                    encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
                },
                rendererInfo: {
                    content: audio.ContentType.CONTENT_TYPE_SPEECH,
                    usage: audio.StreamUsage.STREAM_USAGE_VOICE_COMMUNICATION,
                    rendererFlags: 0
                }
            }
            ]
            audioPaths = [
                'files/f48000fs4000_others.wav'
            ]
            audioEffectModeList = [
                audio.AudioEffectMode.EFFECT_DEFAULT,
            ];
            await getPath()
            audioRendererList = []
            console.log(TAG + testCaseName + 'TestLog: Start Testing createAudioRendererFunc function');
            await createAudioRendererFunc(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing setAudioEffectMode function');
            await setAudioEffectMode(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing start function');
            await start(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing writeRender function');
            let index = 0
            bufferSizeList[index] = await audioRendererList[index].getBufferSize()
            console.log(TAG + testCaseName + `getBufferSize audioRendererList ${index} ${bufferSizeList[index]} SUCCESS`);
            let path = pathDir + audioPaths[index]
            console.log(TAG + testCaseName + `audio  path ${path} `);
            try {
                console.log(TAG + testCaseName + 'fs start');
                let stat = await fs.stat(path);
                console.log(TAG + testCaseName + "fs stat SUCCESS");
                let len = stat.size % bufferSizeList[index] == 0 ? Math.floor(stat.size / bufferSizeList[index]) : Math.floor(stat.size / bufferSizeList[index] + 1);
                console.log(TAG + testCaseName + `len ${len}`);
                let file = await fs.open(path, 0o0);
                console.log(TAG + testCaseName + "open SUCCESS");
                let buf = new ArrayBuffer(bufferSizeList[index]);
                while (true) {
                    for (let i = 0; i < len; i++) {
                        if (i === Math.floor(len / 2)) {
                            await audioRendererList[index].setAudioEffectMode(audio.AudioEffectMode.EFFECT_NONE)
                        }
                        let options = {
                            offset: i * bufferSizeList[index],
                            length: bufferSizeList[index]
                        }
                        let readsize = await fs.read(file.fd, buf, options);
                        let time = Date.now();
                        let writeSize = await new Promise((resolve, reject) => {
                            audioRendererList[index].write(buf, (err, writeSize) => {
                                time = Date.now();
                                if (err) {
                                    reject(err)
                                } else {
                                    resolve(writeSize)
                                }
                            })
                        })
                    }
                    break
                }
                console.log(TAG + testCaseName + "writeRender success" + `audioRendererList ${index} write end, state:${audioRendererList[index].state}\n`);
                console.log(TAG + testCaseName + "writeRender " + ` file descriptor:  ${file.fd} `);
                await fs.close(file.fd).then(() => {
                    console.log(TAG + testCaseName + "writeRender success" + `audioRendererList close success`);
                }).catch((err) => {
                    console.log(TAG + testCaseName + "writeRender failed" + `audioRendererList close : Error: ${JSON.stringify(err)}\n`);
                    resolve(false)
                })
            } catch (err) {
                console.log(TAG + testCaseName + "writeRender failed" + `audioRendererList write : Error: ${JSON.stringify(err)}\n`);
            }

            console.log(TAG + testCaseName + 'TestLog: Start Testing release function');
            await release(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing end');
            done()
        })


        /**
         *@tc.number    : OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_052
         *@tc.name      : EFFECTMANAGER_SR2_STABLITY_TEST
         *@tc.desc      : getAudioEffcetInfoArray promise longtime test
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 1
         */
        it('OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_052', 1, async function (done) {
            testCaseName = '[OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_052]'
            console.info(TAG + testCaseName + 'start')
            streamNum = 1
            audioRendererOptionsList = [{
                streamInfo: {
                    samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
                    channels: audio.AudioChannel.CHANNEL_2,
                    sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
                    encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
                },
                rendererInfo: {
                    content: audio.ContentType.CONTENT_TYPE_SPEECH,
                    usage: audio.StreamUsage.STREAM_USAGE_VOICE_COMMUNICATION,
                    rendererFlags: 0
                }
            }
            ]
            audioPaths = [
                'files/f48000fs4000_others.wav'
            ]
            audioEffectModeList = [
                audio.AudioEffectMode.EFFECT_NONE,
            ];
            await getPath()
            audioRendererList = []
            console.log(TAG + testCaseName + 'TestLog: Start Testing createAudioRendererFunc function');
            await createAudioRendererFunc(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing setAudioEffectMode function');
            await setAudioEffectMode(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing start function');
            await start(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing writeRender function');
            let index = 0
            bufferSizeList[index] = await audioRendererList[index].getBufferSize()
            console.log(TAG + testCaseName + `getBufferSize audioRendererList ${index} ${bufferSizeList[index]} SUCCESS`);
            let path = pathDir + audioPaths[index]
            console.log(TAG + testCaseName + `audio  path ${path} `);
            try {
                console.log(TAG + testCaseName + 'fs start');
                let stat = await fs.stat(path);
                console.log(TAG + testCaseName + "fs stat SUCCESS");
                let len = stat.size % bufferSizeList[index] == 0 ? Math.floor(stat.size / bufferSizeList[index]) : Math.floor(stat.size / bufferSizeList[index] + 1);
                console.log(TAG + testCaseName + `len ${len}`);
                let file = await fs.open(path, 0o0);
                console.log(TAG + testCaseName + "open SUCCESS");
                let buf = new ArrayBuffer(bufferSizeList[index]);
                while (true) {
                    for (let i = 0; i < len; i++) {
                        if (i === Math.floor(len / 2)) {
                            await audioRendererList[index].setAudioEffectMode(audio.AudioEffectMode.EFFECT_DEFAULT)
                        }
                        let options = {
                            offset: i * bufferSizeList[index],
                            length: bufferSizeList[index]
                        }
                        let readsize = await fs.read(file.fd, buf, options);
                        let time = Date.now();
                        let writeSize = await new Promise((resolve, reject) => {
                            audioRendererList[index].write(buf, (err, writeSize) => {
                                time = Date.now();
                                if (err) {
                                    reject(err)
                                } else {
                                    resolve(writeSize)
                                }
                            })
                        })
                    }
                    break
                }
                console.log(TAG + testCaseName + "writeRender success" + `audioRendererList ${index} write end, state:${audioRendererList[index].state}\n`);
                console.log(TAG + testCaseName + "writeRender " + ` file descriptor:  ${file.fd} `);
                await fs.close(file.fd).then(() => {
                    console.log(TAG + testCaseName + "writeRender success" + `audioRendererList close success`);
                }).catch((err) => {
                    console.log(TAG + testCaseName + "writeRender failed" + `audioRendererList close : Error: ${JSON.stringify(err)}\n`);
                    resolve(false)
                })
            } catch (err) {
                console.log(TAG + testCaseName + "writeRender failed" + `audioRendererList write : Error: ${JSON.stringify(err)}\n`);
            }

            console.log(TAG + testCaseName + 'TestLog: Start Testing release function');
            await release(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing end');
            done()
        })


        /**
         *@tc.number    : OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_053
         *@tc.name      : EFFECTMANAGER_SR2_STABLITY_TEST
         *@tc.desc      : getAudioEffcetInfoArray promise longtime test
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 1
         */
        it('OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_053', 1, async function (done) {
            testCaseName = '[OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_053]'
            console.info(TAG + testCaseName + 'start')
            streamNum = 1
            await getPath()
            audioRendererList = []
            audioRendererOptionsList = [{
                streamInfo: {
                    samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
                    channels: audio.AudioChannel.CHANNEL_2,
                    sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
                    encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
                },
                rendererInfo: {
                    content: audio.ContentType.CONTENT_TYPE_SPEECH,
                    usage: audio.StreamUsage.STREAM_USAGE_VOICE_COMMUNICATION,
                    rendererFlags: 0
                }
            }]
            audioEffectModeList = [
                audio.AudioEffectMode.EFFECT_DEFAULT
            ];
            audioPaths = [
                'files/f48000fs4000_others.wav',
            ]
            console.log(TAG + testCaseName + 'TestLog: Start Testing createAudioRendererFunc function');
            await createAudioRendererFunc(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing setAudioEffectMode function');
            await setAudioEffectMode(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing start function');
            await start(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing writeRender function');
            await writeRender(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing release function');
            await release(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing end');
            done()
        })


        /**
         *@tc.number    : OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_054
         *@tc.name      : EFFECTMANAGER_SR2_STABLITY_TEST
         *@tc.desc      : getAudioEffcetInfoArray promise longtime test
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 1
         */
        it('OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_054', 1, async function (done) {
            testCaseName = '[OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_054]'
            console.info(TAG + testCaseName + 'start')
            streamNum = 1
            await getPath()
            audioRendererList = []
            audioRendererOptionsList = [{
                streamInfo: {
                    samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
                    channels: audio.AudioChannel.CHANNEL_2,
                    sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
                    encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
                },
                rendererInfo: {
                    content: audio.ContentType.CONTENT_TYPE_MUSIC,
                    usage: audio.StreamUsage.STREAM_USAGE_MEDIA,
                    rendererFlags: 0
                }
            }]
            audioEffectModeList = [
                audio.AudioEffectMode.EFFECT_DEFAULT
            ];
            audioPaths = [
                'files/f48000fs250_music.wav',
            ]
            console.log(TAG + testCaseName + 'TestLog: Start Testing createAudioRendererFunc function');
            await createAudioRendererFunc(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing setAudioEffectMode function');
            await setAudioEffectMode(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing start function');
            await start(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing writeRender function');
            await writeRender(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing release function');
            await release(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing end');
            done()
        })

        /**
         *@tc.number    : OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_055
         *@tc.name      : EFFECTMANAGER_SR2_STABLITY_TEST
         *@tc.desc      : getAudioEffcetInfoArray promise longtime test
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 1
         */
        it('OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_055', 1, async function (done) {
            testCaseName = '[OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_055]'
            console.info(TAG + testCaseName + 'start')
            streamNum = 1
            await getPath()
            audioRendererList = []
            audioRendererOptionsList = [{
                streamInfo: {
                    samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
                    channels: audio.AudioChannel.CHANNEL_2,
                    sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
                    encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
                },
                rendererInfo: {
                    content: audio.ContentType.CONTENT_TYPE_SONIFICATION,
                    usage: audio.StreamUsage.STREAM_USAGE_MEDIA,
                    rendererFlags: 0
                }
            }]
            audioEffectModeList = [
                audio.AudioEffectMode.EFFECT_DEFAULT
            ];
            audioPaths = [
                'files/f48000fs500_movie.wav',
            ]
            console.log(TAG + testCaseName + 'TestLog: Start Testing createAudioRendererFunc function');
            await createAudioRendererFunc(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing setAudioEffectMode function');
            await setAudioEffectMode(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing start function');
            await start(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing writeRender function');
            await writeRender(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing release function');
            await release(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing end');
            done()
        })

        /**
         *@tc.number    : OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_056
         *@tc.name      : EFFECTMANAGER_SR2_STABLITY_TEST
         *@tc.desc      : getAudioEffcetInfoArray promise longtime test
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 1
         */
        it('OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_056', 1, async function (done) {
            testCaseName = '[OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_056]'
            console.info(TAG + testCaseName + 'start')
            streamNum = 1
            await getPath()
            audioRendererList = []
            audioRendererOptionsList = [{
                streamInfo: {
                    samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
                    channels: audio.AudioChannel.CHANNEL_2,
                    sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
                    encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
                },
                rendererInfo: {
                    content: audio.ContentType.CONTENT_TYPE_SPEECH,
                    usage: audio.StreamUsage.STREAM_USAGE_ACCESSIBILITY,
                    rendererFlags: 0
                }
            }]
            audioEffectModeList = [
                audio.AudioEffectMode.EFFECT_DEFAULT
            ];
            audioPaths = [
                'files/f48000fs1000_game.wav',
            ]
            console.log(TAG + testCaseName + 'TestLog: Start Testing createAudioRendererFunc function');
            await createAudioRendererFunc(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing setAudioEffectMode function');
            await setAudioEffectMode(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing start function');
            await start(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing writeRender function');
            await writeRender(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing release function');
            await release(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing end');
            done()
        })

        /**
         *@tc.number    : OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_057
         *@tc.name      : EFFECTMANAGER_SR2_STABLITY_TEST
         *@tc.desc      : getAudioEffcetInfoArray promise longtime test
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 1
         */
        it('OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_057', 1, async function (done) {
            testCaseName = '[OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_057]'
            console.info(TAG + testCaseName + 'start')
            streamNum = 1
            await getPath()
            audioRendererList = []
            audioRendererOptionsList = [{
                streamInfo: {
                    samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
                    channels: audio.AudioChannel.CHANNEL_2,
                    sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
                    encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
                },
                rendererInfo: {
                    content: audio.ContentType.CONTENT_TYPE_SPEECH,
                    usage: audio.StreamUsage.STREAM_USAGE_VOICE_ASSISTANT,
                    rendererFlags: 0
                }
            }]
            audioEffectModeList = [
                audio.AudioEffectMode.EFFECT_DEFAULT
            ];
            audioPaths = [
                'files/f48000fs2000_speech.wav',
            ]
            console.log(TAG + testCaseName + 'TestLog: Start Testing createAudioRendererFunc function');
            await createAudioRendererFunc(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing setAudioEffectMode function');
            await setAudioEffectMode(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing start function');
            await start(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing writeRender function');
            await writeRender(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing release function');
            await release(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing end');
            done()
        })

        /**
         *@tc.number    : OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_058
         *@tc.name      : EFFECTMANAGER_SR2_STABLITY_TEST
         *@tc.desc      : getAudioEffcetInfoArray promise longtime test
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 1
         */
        it('OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_058', 1, async function (done) {
            testCaseName = '[OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_058]'
            console.info(TAG + testCaseName + 'start')
            streamNum = 1
            await getPath()
            audioRendererList = []
            audioRendererOptionsList = [{
                streamInfo: {
                    samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
                    channels: audio.AudioChannel.CHANNEL_2,
                    sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
                    encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
                },
                rendererInfo: {
                    content: audio.ContentType.CONTENT_TYPE_RINGTONE,
                    usage: audio.StreamUsage.STREAM_USAGE_MEDIA,
                    rendererFlags: 0
                }
            }]
            audioEffectModeList = [
                audio.AudioEffectMode.EFFECT_DEFAULT
            ];
            audioPaths = [
                'files/f48000fs3000_ring.wav',
            ]
            console.log(TAG + testCaseName + 'TestLog: Start Testing createAudioRendererFunc function');
            await createAudioRendererFunc(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing setAudioEffectMode function');
            await setAudioEffectMode(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing start function');
            await start(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing writeRender function');
            await writeRender(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing release function');
            await release(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing end');
            done()
        })

        /**
         *@tc.number    : OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_059
         *@tc.name      : EFFECTMANAGER_SR2_STABLITY_TEST
         *@tc.desc      : getAudioEffcetInfoArray promise longtime test
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 1
         */
        it('OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_059', 1, async function (done) {
            testCaseName = '[OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_059]'
            console.info(TAG + testCaseName + 'start')
            streamNum = 1
            await getPath()
            audioRendererList = []
            audioRendererOptionsList = [{
                streamInfo: {
                    samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
                    channels: audio.AudioChannel.CHANNEL_2,
                    sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
                    encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
                },
                rendererInfo: {
                    content: audio.ContentType.CONTENT_TYPE_SPEECH,
                    usage: audio.StreamUsage.STREAM_USAGE_VOICE_COMMUNICATION,
                    rendererFlags: 0
                }
            }]
            audioEffectModeList = [
                audio.AudioEffectMode.EFFECT_DEFAULT
            ];
            audioPaths = [
                'files/f48000fs4000_others.wav',
            ]
            console.log(TAG + testCaseName + 'TestLog: Start Testing createAudioRendererFunc function');
            await createAudioRendererFunc(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing setAudioEffectMode function');
            await setAudioEffectMode(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing start function');
            await start(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing writeRender function');
            await writeRender(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing release function');
            await release(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing end');
            done()
        })


        /**
         *@tc.number    : OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_060
         *@tc.name      : EFFECTMANAGER_SR2_STABLITY_TEST
         *@tc.desc      : getAudioEffcetInfoArray promise longtime test
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 1
         */
        it('OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_060', 1, async function (done) {
            testCaseName = '[OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_060]'
            console.info(TAG + testCaseName + 'start')
            streamNum = 1
            await getPath()
            audioRendererList = []
            audioRendererOptionsList = [{
                streamInfo: {
                    samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
                    channels: audio.AudioChannel.CHANNEL_2,
                    sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
                    encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
                },
                rendererInfo: {
                    content: audio.ContentType.CONTENT_TYPE_SPEECH,
                    usage: audio.StreamUsage.STREAM_USAGE_VOICE_COMMUNICATION,
                    rendererFlags: 0
                }
            }]
            audioEffectModeList = [
                audio.AudioEffectMode.EFFECT_NONE
            ];
            audioPaths = [
                'files/f48000fs4000_others.wav',
            ]
            console.log(TAG + testCaseName + 'TestLog: Start Testing createAudioRendererFunc function');
            await createAudioRendererFunc(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing setAudioEffectMode function');
            await setAudioEffectMode(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing start function');
            await start(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing writeRender function');
            let index = 0;
            let bfsize = 0;
            let sr = audioRendererOptionsList[index].streamInfo.samplingRate;
            let chn = audioRendererOptionsList[index].streamInfo.channels;
            bufferSizeList[index] = await audioRendererList[index].getBufferSize()
            console.log(TAG + testCaseName + `getBufferSize audioRendererList ${index} ${bufferSizeList[index]} SUCCESS`);
            let path = pathDir + audioPaths[index]
            console.log(TAG + testCaseName + `audio  path ${path} `);
            let flage = false;
            try {
                console.log(TAG + testCaseName + 'fs start');
                let stat = await fs.stat(path);
                console.log(TAG + testCaseName + "fs stat SUCCESS");
                let len = stat.size % bufferSizeList[index] == 0 ? Math.floor(stat.size / bufferSizeList[index]) : Math.floor(stat.size / bufferSizeList[index] + 1);
                console.log(TAG + testCaseName + `len ${len}`);
                let file = await fs.open(path, 0o0);
                console.log(TAG + testCaseName + "open SUCCESS");
                let buf = new ArrayBuffer(bufferSizeList[index]);
                let initVal = 1
                while (true) {
                    for (let i = 0; i < len; i++) {
                        if (i === Math.floor(len / 10) * initVal) {
                            flage = !flage
                            initVal = initVal + 1
                            if (flage) {
                                await audioRendererList[index].setAudioEffectMode(audio.AudioEffectMode.EFFECT_DEFAULT)
                            } else {
                                await audioRendererList[index].setAudioEffectMode(audio.AudioEffectMode.EFFECT_NONE)
                            }
                        }

                        let options = {
                            offset: i * bufferSizeList[index],
                            length: bufferSizeList[index]
                        }
                        let readsize = await fs.read(file.fd, buf, options);
                        let time = Date.now();
                        let writeSize = await new Promise((resolve, reject) => {
                            audioRendererList[index].write(buf, (err, writeSize) => {
                                time = Date.now();
                                if (err) {
                                    reject(err)
                                } else {
                                    resolve(writeSize)
                                }
                            })
                        })
                    }
                    break
                }
                console.log(TAG + testCaseName + "writeRender success" + `audioRendererList ${index} write end, state:${audioRendererList[index].state}\n`);
                console.log(TAG + testCaseName + "writeRender " + ` file descriptor:  ${file.fd} `);
                await fs.close(file.fd).then(() => {
                    console.log(TAG + testCaseName + "writeRender success" + `audioRendererList close success`);
                }).catch((err) => {
                    console.log(TAG + testCaseName + "writeRender failed" + `audioRendererList close : Error: ${JSON.stringify(err)}\n`);
                })
            } catch (err) {
                console.log(TAG + testCaseName + "writeRender failed" + `audioRendererList write : Error: ${JSON.stringify(err)}\n`);
            }
            console.log(TAG + testCaseName + 'TestLog: Start Testing release function');
            await release(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing end');
            done()
        })


        /**
         *@tc.number    : OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_061
         *@tc.name      : EFFECTMANAGER_SR2_STABLITY_TEST
         *@tc.desc      : getAudioEffcetInfoArray promise longtime test
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 1
         */
        it('OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_061', 1, async function (done) {
            testCaseName = '[OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_061]'
            console.info(TAG + testCaseName + 'start')
            streamNum = 1
            await getPath()
            audioRendererList = []
            audioRendererOptionsList = [{
                streamInfo: {
                    samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_8000,
                    channels: audio.AudioChannel.CHANNEL_2,
                    sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
                    encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
                },
                rendererInfo: {
                    content: audio.ContentType.CONTENT_TYPE_SPEECH,
                    usage: audio.StreamUsage.STREAM_USAGE_ACCESSIBILITY,
                    rendererFlags: 0
                }
            }]
            audioEffectModeList = [
                audio.AudioEffectMode.EFFECT_DEFAULT
            ];
            audioPaths = [
                'files/f8000fs1000.wav',
            ]
            console.log(TAG + testCaseName + 'TestLog: Start Testing createAudioRendererFunc function');
            await createAudioRendererFunc(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing setAudioEffectMode function');
            await setAudioEffectMode(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing start function');
            await start(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing writeRender function');
            await writeRender(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing release function');
            await release(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing end');
            done()
        })

        /**
         *@tc.number    : OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_062
         *@tc.name      : EFFECTMANAGER_SR2_STABLITY_TEST
         *@tc.desc      : getAudioEffcetInfoArray promise longtime test
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 1
         */
        it('OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_062', 1, async function (done) {
            testCaseName = '[OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_062]'
            console.info(TAG + testCaseName + 'start')
            streamNum = 1
            await getPath()
            audioRendererList = []
            audioRendererOptionsList = [{
                streamInfo: {
                    samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_44100,
                    channels: audio.AudioChannel.CHANNEL_2,
                    sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
                    encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
                },
                rendererInfo: {
                    content: audio.ContentType.CONTENT_TYPE_SPEECH,
                    usage: audio.StreamUsage.STREAM_USAGE_ACCESSIBILITY,
                    rendererFlags: 0
                }
            }]
            audioEffectModeList = [
                audio.AudioEffectMode.EFFECT_DEFAULT
            ];
            audioPaths = [
                'files/f44100fs1000.wav',
            ]
            console.log(TAG + testCaseName + 'TestLog: Start Testing createAudioRendererFunc function');
            await createAudioRendererFunc(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing setAudioEffectMode function');
            await setAudioEffectMode(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing start function');
            await start(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing writeRender function');
            await writeRender(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing release function');
            await release(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing end');
            done()
        })

        /**
         *@tc.number    : OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_063
         *@tc.name      : EFFECTMANAGER_SR2_STABLITY_TEST
         *@tc.desc      : getAudioEffcetInfoArray promise longtime test
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 1
         */
        it('OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_063', 1, async function (done) {
            testCaseName = '[OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_063]'
            console.info(TAG + testCaseName + 'start')
            streamNum = 1
            await getPath()
            audioRendererList = []
            audioRendererOptionsList = [{
                streamInfo: {
                    samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
                    channels: audio.AudioChannel.CHANNEL_2,
                    sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
                    encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
                },
                rendererInfo: {
                    content: audio.ContentType.CONTENT_TYPE_SPEECH,
                    usage: audio.StreamUsage.STREAM_USAGE_ACCESSIBILITY,
                    rendererFlags: 0
                }
            }]
            audioEffectModeList = [
                audio.AudioEffectMode.EFFECT_DEFAULT
            ];
            audioPaths = [
                'files/f48000fs1000.wav',
            ]
            console.log(TAG + testCaseName + 'TestLog: Start Testing createAudioRendererFunc function');
            await createAudioRendererFunc(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing setAudioEffectMode function');
            await setAudioEffectMode(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing start function');
            await start(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing writeRender function');
            await writeRender(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing release function');
            await release(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing end');
            done()
        })

        /**
         *@tc.number    : OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_064
         *@tc.name      : EFFECTMANAGER_SR2_STABLITY_TEST
         *@tc.desc      : getAudioEffcetInfoArray promise longtime test
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 1
         */
        it('OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_064', 1, async function (done) {
            testCaseName = '[OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_064]'
            console.info(TAG + testCaseName + 'start')
            streamNum = 1
            await getPath()
            audioRendererList = []
            audioRendererOptionsList = [{
                streamInfo: {
                    samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_96000,
                    channels: audio.AudioChannel.CHANNEL_2,
                    sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
                    encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
                },
                rendererInfo: {
                    content: audio.ContentType.CONTENT_TYPE_SPEECH,
                    usage: audio.StreamUsage.STREAM_USAGE_ACCESSIBILITY,
                    rendererFlags: 0
                }
            }]
            audioEffectModeList = [
                audio.AudioEffectMode.EFFECT_DEFAULT
            ];
            audioPaths = [
                'files/f96000fs1000.wav',
            ]
            console.log(TAG + testCaseName + 'TestLog: Start Testing createAudioRendererFunc function');
            await createAudioRendererFunc(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing setAudioEffectMode function');
            await setAudioEffectMode(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing start function');
            await start(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing writeRender function');
            await writeRender(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing release function');
            await release(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing end');
            done()
        })


        /**
         *@tc.number    : OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_065
         *@tc.name      : EFFECTMANAGER_SR2_STABLITY_TEST
         *@tc.desc      : getAudioEffcetInfoArray promise longtime test
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 1
         */
        it('OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_065', 1, async function (done) {
            testCaseName = '[OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_065]'
            console.info(TAG + testCaseName + 'start')
            await getPath()
            let allAudioPaths = ['files/Radetzky1.pcm', 'files/Radetzky2.pcm', 'files/Radetzky3.pcm', 'files/Radetzky4.pcm', 'files/Radetzky5.pcm',
                'files/Radetzky6.pcm', 'files/Radetzky7.pcm', 'files/Radetzky8.pcm', 'files/Radetzky9.pcm', 'files/Radetzky10.pcm',
                'files/Radetzky11.pcm', 'files/Radetzky12.pcm', 'files/Radetzky13.pcm', 'files/Radetzky14.pcm',
                'files/Radetzky15.pcm', 'files/Radetzky16.pcm', 'files/Radetzky17.pcm', 'files/Radetzky18.pcm',
                'files/Radetzky19.pcm', 'files/Radetzky20.pcm', 'files/Radetzky21.pcm', 'files/Radetzky22.pcm',
                'files/Radetzky23.pcm', 'files/Radetzky24.pcm', 'files/Radetzky25.pcm', 'files/Radetzky26.pcm',
                'files/Radetzky27.pcm', 'files/Radetzky28.pcm', 'files/Radetzky29.pcm', 'files/Radetzky30.pcm',
                'files/Radetzky31.pcm', 'files/Radetzky32.pcm', 'files/Radetzky33.pcm', 'files/Radetzky34.pcm',
                'files/Radetzky35.pcm', 'files/Radetzky36.pcm', 'files/Radetzky37.pcm', 'files/Radetzky38.pcm',
                'files/Radetzky39.pcm', 'files/Radetzky40.pcm', 'files/Radetzky41.pcm', 'files/Radetzky42.pcm',
                'files/Radetzky43.pcm', 'files/Radetzky44.pcm', 'files/Radetzky45.pcm', 'files/Radetzky46.pcm',
                'files/Radetzky47.pcm', 'files/Radetzky48.pcm', 'files/Radetzky49.pcm', 'files/Radetzky50.pcm',
                'files/Radetzky51.pcm', 'files/Radetzky52.pcm', 'files/Radetzky53.pcm', 'files/Radetzky54.pcm',
                'files/Radetzky55.pcm', 'files/Radetzky56.pcm', 'files/Radetzky57.pcm', 'files/Radetzky58.pcm',
                'files/Radetzky59.pcm', 'files/Radetzky60.pcm', 'files/Radetzky61.pcm', 'files/Radetzky62.pcm',
                'files/Radetzky63.pcm', 'files/Radetzky64.pcm', 'files/Radetzky65.pcm', 'files/Radetzky66.pcm',
                'files/Radetzky67.pcm', 'files/Radetzky68.pcm', 'files/Radetzky69.pcm', 'files/Radetzky70.pcm',
                'files/Radetzky71.pcm', 'files/Radetzky72.pcm', 'files/Radetzky73.pcm', 'files/Radetzky74.pcm',
                'files/Radetzky75.pcm', 'files/Radetzky76.pcm', 'files/Radetzky77.pcm', 'files/Radetzky78.pcm',
                'files/Radetzky79.pcm', 'files/Radetzky80.pcm', 'files/Radetzky81.pcm', 'files/Radetzky82.pcm',
                'files/Radetzky83.pcm', 'files/Radetzky84.pcm', 'files/Radetzky85.pcm', 'files/Radetzky86.pcm',
                'files/Radetzky87.pcm', 'files/Radetzky88.pcm', 'files/Radetzky89.pcm', 'files/Radetzky90.pcm',
                'files/Radetzky91.pcm', 'files/Radetzky92.pcm', 'files/Radetzky93.pcm', 'files/Radetzky94.pcm',
                'files/Radetzky95.pcm', 'files/Radetzky96.pcm', 'files/Radetzky97.pcm', 'files/Radetzky98.pcm',
                'files/Radetzky99.pcm', 'files/Radetzky100.pcm', 'files/Radetzky101.pcm', 'files/Radetzky102.pcm',
                'files/Radetzky103.pcm', 'files/Radetzky104.pcm', 'files/Radetzky105.pcm', 'files/Radetzky106.pcm',
                'files/Radetzky107.pcm', 'files/Radetzky108.pcm', 'files/Radetzky109.pcm', 'files/Radetzky110.pcm',
                'files/Radetzky111.pcm', 'files/Radetzky112.pcm', 'files/Radetzky113.pcm', 'files/Radetzky114.pcm',
                'files/Radetzky115.pcm', 'files/Radetzky116.pcm', 'files/Radetzky117.pcm', 'files/Radetzky118.pcm',
                'files/Radetzky119.pcm', 'files/Radetzky120.pcm', 'files/Radetzky121.pcm', 'files/Radetzky122.pcm',
                'files/Radetzky123.pcm', 'files/Radetzky124.pcm', 'files/Radetzky125.pcm', 'files/Radetzky126.pcm',
                'files/Radetzky127.pcm', 'files/Radetzky128.pcm', 'files/Radetzky129.pcm', 'files/Radetzky130.pcm',
                'files/Radetzky131.pcm', 'files/Radetzky132.pcm', 'files/Radetzky133.pcm', 'files/Radetzky134.pcm',
                'files/Radetzky135.pcm', 'files/Radetzky136.pcm', 'files/Radetzky137.pcm', 'files/Radetzky138.pcm',
                'files/Radetzky139.pcm', 'files/Radetzky140.pcm', 'files/Radetzky141.pcm', 'files/Radetzky142.pcm',
                'files/Radetzky143.pcm', 'files/Radetzky144.pcm', 'files/Radetzky145.pcm', 'files/Radetzky146.pcm',
                'files/Radetzky147.pcm', 'files/Radetzky148.pcm', 'files/Radetzky149.pcm', 'files/Radetzky150.pcm',
                'files/Radetzky151.pcm', 'files/Radetzky152.pcm', 'files/Radetzky153.pcm', 'files/Radetzky154.pcm',
                'files/Radetzky155.pcm', 'files/Radetzky156.pcm', 'files/Radetzky157.pcm', 'files/Radetzky158.pcm',
                'files/Radetzky159.pcm', 'files/Radetzky160.pcm', 'files/Radetzky161.pcm', 'files/Radetzky162.pcm',
                'files/Radetzky163.pcm', 'files/Radetzky164.pcm', 'files/Radetzky165.pcm', 'files/Radetzky166.pcm',
                'files/Radetzky167.pcm', 'files/Radetzky168.pcm', 'files/Radetzky169.pcm', 'files/Radetzky170.pcm',
                'files/Radetzky171.pcm', 'files/Radetzky172.pcm', 'files/Radetzky173.pcm', 'files/Radetzky174.pcm',
                'files/Radetzky175.pcm', 'files/Radetzky176.pcm', 'files/Radetzky177.pcm', 'files/Radetzky178.pcm',
                'files/Radetzky179.pcm', 'files/Radetzky180.pcm', 'files/Radetzky181.pcm', 'files/Radetzky182.pcm',
                'files/Radetzky183.pcm', 'files/Radetzky184.pcm', 'files/Radetzky185.pcm', 'files/Radetzky186.pcm',
                'files/Radetzky187.pcm', 'files/Radetzky188.pcm', 'files/Radetzky189.pcm', 'files/Radetzky190.pcm',
                'files/Radetzky191.pcm', 'files/Radetzky192.pcm', 'files/Radetzky193.pcm', 'files/Radetzky194.pcm',
                'files/Radetzky195.pcm', 'files/Radetzky196.pcm', 'files/Radetzky197.pcm', 'files/Radetzky198.pcm',
                'files/Radetzky199.pcm', 'files/Radetzky200.pcm']


            audioRendererOptionsList = [{
                streamInfo: {
                    samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
                    channels: audio.AudioChannel.CHANNEL_2,
                    sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
                    encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
                },
                rendererInfo: {
                    content: audio.ContentType.CONTENT_TYPE_MUSIC,
                    usage: audio.StreamUsage.STREAM_USAGE_MEDIA,
                    rendererFlags: 0
                }
            }, {
                streamInfo: {
                    samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
                    channels: audio.AudioChannel.CHANNEL_2,
                    sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
                    encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
                },
                rendererInfo: {
                    content: audio.ContentType.CONTENT_TYPE_SONIFICATION,
                    usage: audio.StreamUsage.STREAM_USAGE_MEDIA,
                    rendererFlags: 0
                }
            },
                {
                    streamInfo: {
                        samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
                        channels: audio.AudioChannel.CHANNEL_2,
                        sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
                        encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
                    },
                    rendererInfo: {
                        content: audio.ContentType.CONTENT_TYPE_SPEECH,
                        usage: audio.StreamUsage.STREAM_USAGE_ACCESSIBILITY,
                        rendererFlags: 0
                    }
                },
                {
                    streamInfo: {
                        samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
                        channels: audio.AudioChannel.CHANNEL_2,
                        sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
                        encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
                    },
                    rendererInfo: {
                        content: audio.ContentType.CONTENT_TYPE_SPEECH,
                        usage: audio.StreamUsage.STREAM_USAGE_VOICE_ASSISTANT,
                        rendererFlags: 0
                    }
                },
                {
                    streamInfo: {
                        samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
                        channels: audio.AudioChannel.CHANNEL_2,
                        sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
                        encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
                    },
                    rendererInfo: {
                        content: audio.ContentType.CONTENT_TYPE_RINGTONE,
                        usage: audio.StreamUsage.STREAM_USAGE_MEDIA,
                        rendererFlags: 0
                    }
                },
                {
                    streamInfo: {
                        samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
                        channels: audio.AudioChannel.CHANNEL_2,
                        sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
                        encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
                    },
                    rendererInfo: {
                        content: audio.ContentType.CONTENT_TYPE_SPEECH,
                        usage: audio.StreamUsage.STREAM_USAGE_VOICE_COMMUNICATION,
                        rendererFlags: 0
                    }
                }]
            audioEffectModeList = [
                audio.AudioEffectMode.EFFECT_DEFAULT,
                audio.AudioEffectMode.EFFECT_DEFAULT,
                audio.AudioEffectMode.EFFECT_DEFAULT,
                audio.AudioEffectMode.EFFECT_DEFAULT,
                audio.AudioEffectMode.EFFECT_DEFAULT,
                audio.AudioEffectMode.EFFECT_DEFAULT,
            ];
            audioRendererList = []
            streamNum = 6
            console.log(TAG + testCaseName + 'TestLog: Start Testing createAudioRendererFunc function');
            await createAudioRendererFunc(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing setAudioEffectMode function');
            await setAudioEffectMode(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing start function');
            await start(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing writeRender function');
            let index = 0;
            for (let i = 0; i < allAudioPaths.length; i++) {
                index = i % 6
                let path = pathDir + allAudioPaths[i]
                await writeStandRender(index, path, expect().assertFail, done)
                console.log(TAG + testCaseName + `audio fileName ${allAudioPaths[i]} random Stream end`);
            }
            console.log(TAG + testCaseName + 'TestLog: Start Testing release function');
            await release(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing end');
            done()
        })


        /**
         *@tc.number    : OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_066
         *@tc.name      : EFFECTMANAGER_SR2_STABLITY_TEST
         *@tc.desc      : getAudioEffcetInfoArray promise longtime test
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 1
         */
        it('OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_066', 1, async function (done) {
            testCaseName = '[OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_066]'
            console.info(TAG + testCaseName + 'start')
            await getPath()
            audioRendererList = []
            streamNum = 6
            audioRendererOptionsList = [{
                streamInfo: {
                    samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
                    channels: audio.AudioChannel.CHANNEL_2,
                    sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
                    encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
                },
                rendererInfo: {
                    content: audio.ContentType.CONTENT_TYPE_MUSIC,
                    usage: audio.StreamUsage.STREAM_USAGE_MEDIA,
                    rendererFlags: 0
                }
            }, {
                streamInfo: {
                    samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
                    channels: audio.AudioChannel.CHANNEL_2,
                    sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
                    encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
                },
                rendererInfo: {
                    content: audio.ContentType.CONTENT_TYPE_SONIFICATION,
                    usage: audio.StreamUsage.STREAM_USAGE_MEDIA,
                    rendererFlags: 0
                }
            },
                {
                    streamInfo: {
                        samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
                        channels: audio.AudioChannel.CHANNEL_2,
                        sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
                        encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
                    },
                    rendererInfo: {
                        content: audio.ContentType.CONTENT_TYPE_SPEECH,
                        usage: audio.StreamUsage.STREAM_USAGE_ACCESSIBILITY,
                        rendererFlags: 0
                    }
                },
                {
                    streamInfo: {
                        samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
                        channels: audio.AudioChannel.CHANNEL_2,
                        sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
                        encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
                    },
                    rendererInfo: {
                        content: audio.ContentType.CONTENT_TYPE_SPEECH,
                        usage: audio.StreamUsage.STREAM_USAGE_VOICE_ASSISTANT,
                        rendererFlags: 0
                    }
                },
                {
                    streamInfo: {
                        samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
                        channels: audio.AudioChannel.CHANNEL_2,
                        sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
                        encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
                    },
                    rendererInfo: {
                        content: audio.ContentType.CONTENT_TYPE_RINGTONE,
                        usage: audio.StreamUsage.STREAM_USAGE_MEDIA,
                        rendererFlags: 0
                    }
                },
                {
                    streamInfo: {
                        samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
                        channels: audio.AudioChannel.CHANNEL_2,
                        sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
                        encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
                    },
                    rendererInfo: {
                        content: audio.ContentType.CONTENT_TYPE_SPEECH,
                        usage: audio.StreamUsage.STREAM_USAGE_VOICE_COMMUNICATION,
                        rendererFlags: 0
                    }
                }
            ]
            audioPaths = [
                'files/f48000fs250_music.wav',
                'files/f48000fs500_movie.wav',
                'files/f48000fs1000_game.wav',
                'files/f48000fs2000_speech.wav',
                'files/f48000fs3000_ring.wav',
                'files/f48000fs4000_others.wav'
            ]
            audioEffectModeList = [
                audio.AudioEffectMode.EFFECT_NONE,
                audio.AudioEffectMode.EFFECT_NONE,
                audio.AudioEffectMode.EFFECT_NONE,
                audio.AudioEffectMode.EFFECT_NONE,
                audio.AudioEffectMode.EFFECT_NONE,
                audio.AudioEffectMode.EFFECT_NONE,
            ];
            console.log(TAG + testCaseName + 'TestLog: Start Testing createAudioRendererFunc function');
            await createAudioRendererFunc(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing setAudioEffectMode function');
            await setAudioEffectMode(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing start function');
            await start(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing writeRender function');
            for (let i = 0; i < 12 * 60 * 60 / 10; i++) {
                await writeRender(expect().assertFail, done)
            }
            console.log(TAG + testCaseName + 'TestLog: Start Testing release function');
            await release(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing end');
            done()
        })

        /**
         *@tc.number    : OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_067
         *@tc.name      : EFFECTMANAGER_SR2_STABLITY_TEST
         *@tc.desc      : getAudioEffcetInfoArray promise longtime test
         *@tc.size      : MEDIUM
         *@tc.type      : Function
         *@tc.level     : Level 1
         */
        it('OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_067', 1, async function (done) {
            testCaseName = '[OH_EFFECTSERVICE_EFFECTINFO_CHECK_TEST_067]'
            console.info(TAG + testCaseName + 'start')
            await getPath()
            audioRendererList = []
            streamNum = 6
            audioRendererOptionsList = [{
                streamInfo: {
                    samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
                    channels: audio.AudioChannel.CHANNEL_2,
                    sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
                    encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
                },
                rendererInfo: {
                    content: audio.ContentType.CONTENT_TYPE_MUSIC,
                    usage: audio.StreamUsage.STREAM_USAGE_MEDIA,
                    rendererFlags: 0
                }
            }, {
                streamInfo: {
                    samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
                    channels: audio.AudioChannel.CHANNEL_2,
                    sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
                    encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
                },
                rendererInfo: {
                    content: audio.ContentType.CONTENT_TYPE_SONIFICATION,
                    usage: audio.StreamUsage.STREAM_USAGE_MEDIA,
                    rendererFlags: 0
                }
            },
                {
                    streamInfo: {
                        samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
                        channels: audio.AudioChannel.CHANNEL_2,
                        sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
                        encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
                    },
                    rendererInfo: {
                        content: audio.ContentType.CONTENT_TYPE_SPEECH,
                        usage: audio.StreamUsage.STREAM_USAGE_ACCESSIBILITY,
                        rendererFlags: 0
                    }
                },
                {
                    streamInfo: {
                        samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
                        channels: audio.AudioChannel.CHANNEL_2,
                        sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
                        encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
                    },
                    rendererInfo: {
                        content: audio.ContentType.CONTENT_TYPE_SPEECH,
                        usage: audio.StreamUsage.STREAM_USAGE_VOICE_ASSISTANT,
                        rendererFlags: 0
                    }
                },
                {
                    streamInfo: {
                        samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
                        channels: audio.AudioChannel.CHANNEL_2,
                        sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
                        encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
                    },
                    rendererInfo: {
                        content: audio.ContentType.CONTENT_TYPE_RINGTONE,
                        usage: audio.StreamUsage.STREAM_USAGE_MEDIA,
                        rendererFlags: 0
                    }
                },
                {
                    streamInfo: {
                        samplingRate: audio.AudioSamplingRate.SAMPLE_RATE_48000,
                        channels: audio.AudioChannel.CHANNEL_2,
                        sampleFormat: audio.AudioSampleFormat.SAMPLE_FORMAT_S16LE,
                        encodingType: audio.AudioEncodingType.ENCODING_TYPE_RAW
                    },
                    rendererInfo: {
                        content: audio.ContentType.CONTENT_TYPE_SPEECH,
                        usage: audio.StreamUsage.STREAM_USAGE_VOICE_COMMUNICATION,
                        rendererFlags: 0
                    }
                }
            ]
            audioPaths = [
                'files/f48000fs250_music.wav',
                'files/f48000fs500_movie.wav',
                'files/f48000fs1000_game.wav',
                'files/f48000fs2000_speech.wav',
                'files/f48000fs3000_ring.wav',
                'files/f48000fs4000_others.wav'
            ]
            audioEffectModeList = [
                audio.AudioEffectMode.EFFECT_DEFAULT,
                audio.AudioEffectMode.EFFECT_DEFAULT,
                audio.AudioEffectMode.EFFECT_DEFAULT,
                audio.AudioEffectMode.EFFECT_DEFAULT,
                audio.AudioEffectMode.EFFECT_DEFAULT,
                audio.AudioEffectMode.EFFECT_DEFAULT,
                audio.AudioEffectMode.EFFECT_DEFAULT,
            ];
            console.log(TAG + testCaseName + 'TestLog: Start Testing createAudioRendererFunc function');
            await createAudioRendererFunc(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing setAudioEffectMode function');
            await setAudioEffectMode(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing start function');
            await start(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing writeRender function');
            for (let i = 0; i < 12 * 60 * 60 / 10; i++) {
                await writeRender(expect().assertFail, done)
            }
            console.log(TAG + testCaseName + 'TestLog: Start Testing release function');
            await release(expect().assertFail, done)
            console.log(TAG + testCaseName + 'TestLog: Start Testing end');
            done()
        })

    })
}