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
import fileio from '@ohos.fileio'
import abilityAccessCtrl from '@ohos.abilityAccessCtrl'
import bundle from '@ohos.bundle'
import featureAbility from '@ohos.ability.featureAbility'
import mediaLibrary from '@ohos.multimedia.mediaLibrary'
import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from 'deccjsunit/index'

describe('AudioEncoderFuncCallback', function () {
    let audioEncodeProcessor;
    let eosframenum = 0;
    let stopAtEOS = false;
    let resetAtEOS = false;
    let flushAtEOS = false;
    let workdoneAtEOS = false;
    let needGetMediaDes = false;
    let needrelease = false;
    let frameCnt = 1;
    let timestamp = 0;
    let sawInputEOS = false;
    let sawOutputEOS = false;
    let inputQueue = [];
    let outputQueue = [];
    const ES = [0, 4096];
    let ES_LENGTH = 1500;
    let fd_read;
    let fd_write;
    let fileAsset_read;
    let fileAsset_write;
    const context = featureAbility.getContext();
    const mediaTest = mediaLibrary.getMediaLibrary(context);
    let fileKeyObj = mediaLibrary.FileKey;
    
    beforeAll(async function() {
        console.info('beforeAll case 1');
        await applyPermission();
        console.info('beforeAll case after get permission');
    })

    beforeEach(function() {
        console.info('beforeEach case');
        audioEncodeProcessor = null;
        eosframenum = 0;
        stopAtEOS = false;
        resetAtEOS = false;
        flushAtEOS = false;
        workdoneAtEOS = false;
        needGetMediaDes = false;
        needrelease = false;
        frameCnt = 1;
        timestamp = 0;
        sawInputEOS = false;
        sawOutputEOS = false;
        inputQueue = [];
        outputQueue = [];
        ES_LENGTH = 1500;
    })

    afterEach(async function() {
        console.info('afterEach case');
        if (audioEncodeProcessor != null) {
            console.info('case audioEncodeProcessor is not null');
            await audioEncodeProcessor.release().then(() => {
                console.info('audioEncodeProcessor release success');
                audioEncodeProcessor = null;
            }, failCallback).catch(failCatch);
        }
        await closeFdRead();
        await closeFdWrite();
    })

    afterAll(function() {
        console.info('afterAll case');
    })

    function resetParam() {
        eosframenum = 0;
        stopAtEOS = false;
        resetAtEOS = false;
        flushAtEOS = false;
        workdoneAtEOS = false;
        needGetMediaDes = false;
        needrelease = false;
        frameCnt = 1;
        timestamp = 0;
        sawInputEOS = false;
        sawOutputEOS = false;
        inputQueue = [];
        outputQueue = [];
    }

    async function applyPermission() {
        let appInfo = await bundle.getApplicationInfo('ohos.acts.multimedia.audio.audioencoder', 0, 100);
        let atManager = abilityAccessCtrl.createAtManager();
        if (atManager != null) {
            let tokenID = appInfo.accessTokenId;
            console.info('[permission] case accessTokenID is ' + tokenID);
            let permissionName1 = 'ohos.permission.MEDIA_LOCATION';
            let permissionName2 = 'ohos.permission.READ_MEDIA';
            let permissionName3 = 'ohos.permission.WRITE_MEDIA';
            await atManager.grantUserGrantedPermission(tokenID, permissionName1, 1).then((result) => {
                console.info('[permission] case grantUserGrantedPermission success :' + result);
            }).catch((err) => {
                console.info('[permission] case grantUserGrantedPermission failed :' + err);
            });
            await atManager.grantUserGrantedPermission(tokenID, permissionName2, 1).then((result) => {
                console.info('[permission] case grantUserGrantedPermission success :' + result);
            }).catch((err) => {
                console.info('[permission] case grantUserGrantedPermission failed :' + err);
            });
            await atManager.grantUserGrantedPermission(tokenID, permissionName3, 1).then((result) => {
                console.info('[permission] case grantUserGrantedPermission success :' + result);
            }).catch((err) => {
                console.info('[permission] case grantUserGrantedPermission failed :' + err);
            });
        } else {
            console.info('[permission] case apply permission failed, createAtManager failed');
        }
    }

    async function getFdWrite(pathName) {
        console.info('[mediaLibrary] case start getFdWrite');
        console.info('[mediaLibrary] case getFdWrite pathName is ' + pathName);
        let mediaType = mediaLibrary.MediaType.AUDIO;
        console.info('[mediaLibrary] case mediaType is ' + mediaType);
        let publicPath = await mediaTest.getPublicDirectory(mediaLibrary.DirectoryType.DIR_AUDIO);
        console.info('[mediaLibrary] case getFdWrite publicPath is ' + publicPath);
        let dataUri = await mediaTest.createAsset(mediaType, pathName, publicPath);
        if (dataUri != undefined) {
            let args = dataUri.id.toString();
            let fetchOp = {
                selections : fileKeyObj.ID + "=?",
                selectionArgs : [args],
            }
            let fetchWriteFileResult = await mediaTest.getFileAssets(fetchOp);
            console.info('[mediaLibrary] case getFdWrite getFileAssets() success');
            fileAsset_write = await fetchWriteFileResult.getAllObject();
            console.info('[mediaLibrary] case getFdWrite getAllObject() success');
            fd_write = await fileAsset_write[0].open('Rw');
            console.info('[mediaLibrary] case getFdWrite fd_write is ' + fd_write);
        }
    }

    async function getFdRead() {
        console.info('[mediaLibrary] case start getFdRead');
        let getFileOp = {
            selections : fileKeyObj.DISPLAY_NAME + '= ? AND ' + fileKeyObj.RELATIVE_PATH + '= ?',
            selectionArgs : ['S16LE.pcm', 'AudioEncode/'],
        }
        console.info('[mediaLibrary] case getFdRead getFileOp success');
        let fetchReadFileResult = await mediaTest.getFileAssets(getFileOp);
        console.info('[mediaLibrary] case getFdRead getFileAssets success');
        let count = fetchReadFileResult.getCount();
        console.info('[mediaLibrary] case getFdRead getCount is ' + count);
        fileAsset_read = await fetchReadFileResult.getAllObject();
        console.info('[mediaLibrary] case getFdRead getAllObject success');
        if (fileAsset_read != undefined) {
            console.info('[mediaLibrary] case getFdRead fileAsset_read is not undefined');
            await fileAsset_read[0].open('rw').then((fd) => {
                if (fd == undefined) {
                    console.info('[mediaLibrary] case getFdRead open fd failed');
                } else {
                    fd_read = fd;
                    console.info('[mediaLibrary] case getFdRead open fd success, fd = ' + fd_read);   
                }
            }).catch((err) => {
                console.info('[mediaLibrary]case open fd failed');
            });
        } else {
            console.info('[mediaLibrary] case getFdRead getAllObject failed');
        }
    }

    async function closeFdWrite() {
        if (fileAsset_write != null) {
            await fileAsset_write[0].close(fd_write).then(() => {
                console.info('[mediaLibrary] case close fd_write success, fd is ' + fd_write);
            }).catch((err) => {
                console.info('[mediaLibrary] case close fd_write failed');
            });
        } else {
            console.info('[mediaLibrary] case fileAsset_write is null');
        }
    }

    async function closeFdRead() {
        if (fileAsset_read != null) {
            await fileAsset_read[0].close(fd_read).then(() => {
                console.info('[mediaLibrary] case close fd_read success, fd is ' + fd_read);
            }).catch((err) => {
                console.info('[mediaLibrary] case close fd_read failed');
            });
        } else {
            console.info('[mediaLibrary] case fileAsset_read is null');
        }
    }

    function writeHead(len) {
        try{
            let head = new ArrayBuffer(7);
            addADTStoPacket(head, len);
            let res = fileio.write(fd_write, head, {length: 7});
            console.info('case fileio.write head success');
        } catch(e) {
            console.info('case fileio.write head error is ' + e);
        }
    }

    function writeFile(buf, len) {
        try{
            let res = fileio.write(fd_write, buf, {length: len});
            console.info('case fileio.write buffer success');
        } catch(e) {
            console.info('case fileio.write buffer error is ' + e);
        }
    }

    function getContent(buf, len) {
        console.info("case start get content");
        let res = fileio.read(fd_read, buf, {length: len});
        console.info('case fileio.read buffer success');
    }

    function addADTStoPacket(head, len) {
        let view = new Uint8Array(head);
        console.info("case start add ADTS to Packet");
        let packetLen = len + 7; // 7: head length
        let profile = 2; // 2: AAC LC  
        let freqIdx = 4; // 4: 44100HZ 
        let chanCfg = 2; // 2: 2 channel
        view[0] = 0xFF;
        view[1] = 0xF9;
        view[2] = ((profile - 1) << 6) + (freqIdx << 2) + (chanCfg >> 2);
        view[3] = ((chanCfg & 3) << 6) + (packetLen >> 11);
        view[4] = (packetLen & 0x7FF) >> 3;
        view[5] = ((packetLen & 7) << 5) + 0x1F;
        view[6] = 0xFC;
        console.info("case end add ADTS to Packet");
    }

    async function stopWork() {
        audioEncodeProcessor.stop((err) => {
            expect(err).assertUndefined();
            console.info("case stop success")
        })
    }

    async function resetWork() {
        resetParam();
        audioEncodeProcessor.reset((err) => {
            expect(err).assertUndefined();
            console.info("case reset success");
            if (needrelease) {
                audioEncodeProcessor.release((err) => {
                    expect(err).assertUndefined();
                    console.info("case release success");
                    audioEncodeProcessor = null;
                })
            }
        })
    }

    async function flushWork() {
        inputQueue = [];
        outputQueue = [];
        audioEncodeProcessor.flush((err) => {
            expect(err).assertUndefined();
            console.info("case flush at inputeos success");
            resetParam();
            workdoneAtEOS =true;
        })
    }

    async function doneWork(done) {
        audioEncodeProcessor.stop((err) => {
            expect(err).assertUndefined();
            console.info("case stop success");
            resetParam();
            audioEncodeProcessor.reset((err) => {
                expect(err).assertUndefined();
                audioEncodeProcessor.release((err) => {
                    expect(err).assertUndefined();
                    console.log("case release success");
                    audioEncodeProcessor = null;
                    done();
                })
            })
        })
    }

    function sleep(time) {
        return new Promise((resolve) => setTimeout(resolve, time));
    }

    function wait(time) {
        for(let t = Date.now(); Date.now() - t <= time;);
    }

    async function enqueueAllInputs(queue) {
        while (queue.length > 0 && !sawInputEOS) {
            let inputobject = queue.shift();
            if (frameCnt == eosframenum || frameCnt == ES_LENGTH + 1) {
                console.info("EOS frame seperately")
                inputobject.flags = 1;
                inputobject.timeMs = 0;
                inputobject.length = 0;
                sawInputEOS = true;
            } else {
                console.info("read frame from file");
                inputobject.timeMs = timestamp;
                inputobject.offset = 0;
                inputobject.length = ES[1];
                getContent(inputobject.data, ES[1]);
                inputobject.flags = 0;
            }
            timestamp += 23;
            frameCnt += 1;
            audioEncodeProcessor.pushInputData(inputobject, () => {
                console.info('queueInput success');
            })
        }
    }

    async function dequeueAllOutputs(queue, done) {
        while (queue.length > 0 && !sawOutputEOS) {
            let outputobject = queue.shift();
            if (outputobject.flags == 1) {
                sawOutputEOS = true;
                if (stopAtEOS) {
                    await stopWork();
                } else if (resetAtEOS) {
                    await resetWork();
                } else if (flushAtEOS) {
                    await flushWork();
                } else if (workdoneAtEOS) {
                    await doneWork(done);
                } else {
                    console.info("sawOutputEOS = true");
                }
            }
            else{
                writeHead(outputobject.length);
                writeFile(outputobject.data, outputobject.length);
                console.info("write to file success");
            }
            audioEncodeProcessor.freeOutputBuffer(outputobject, () => {
                console.info('release output success');
            })
        }
    }

    function setCallback(done) {
        console.info('case callback');
        audioEncodeProcessor.on('needInputData', async(inBuffer) => {
            console.info('case inputBufferAvailable');
            inputQueue.push(inBuffer);
            await enqueueAllInputs(inputQueue);
        });
        audioEncodeProcessor.on('newOutputData', async(outBuffer) => {
            console.info('case outputBufferAvailable');
            if (needGetMediaDes) {
                audioEncodeProcessor.getOutputMediaDescription((err, MediaDescription) => {
                    expect(err).assertUndefined();
                    console.info("case get OutputMediaDescription success");
                    console.info('get outputMediaDescription : ' + MediaDescription);
                    needGetMediaDes=false;
                });
            }
            outputQueue.push(outBuffer);
            await dequeueAllOutputs(outputQueue, done);
        });
        audioEncodeProcessor.on('error',(err) => {
            console.info('case error called,errName is' + err);
        });
        audioEncodeProcessor.on('streamChanged',(format) => {
            console.info('case Output format changed: ' + format);
        });
    }

    /* *
        * @tc.number    : SUB_MEDIA_AUDIO_ENCODER_FUNCTION_CALLBACK_00_0100
        * @tc.name      : 000.test set EOS after last frame and reset
        * @tc.desc      : basic Encode function
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_AUDIO_ENCODER_FUNCTION_CALLBACK_00_0100', 0, async function (done) {
        console.info("test set EOS after last frame and reset");
        let events = require('events');
        let eventEmitter = new events.EventEmitter();
        let mediaDescription = {
            "channel_count": 2,
            "sample_rate": 44100,
            "audio_sample_format": 1,
        }
        let mediaDescription2 = {
            "codec_mime": 'audio/mp4a-latm',
        }
        await getFdWrite('audioEncode_callback_0000.aac');
        console.info('case getFdWrite success');
        await getFdRead();
        console.info('case getFdRead success');
        needGetMediaDes = true;
        workdoneAtEOS = true;
        eventEmitter.on('getAudioEncoderCaps', () => {
            audioEncodeProcessor.getAudioEncoderCaps((err, AudioCaps) => {
                expect(err).assertUndefined();
                console.info(`case getAudioEncoderCaps 1`);
                console.info(`AudioCaps: ` + AudioCaps);
                eventEmitter.emit('configure', mediaDescription);
            })
        });
        eventEmitter.on('configure', (mediaDescription) => {
            audioEncodeProcessor.configure(mediaDescription, (err) => {
                expect(err).assertUndefined();
                console.info(`case configure 1`);
                eventEmitter.emit('prepare');
            })
        });
        eventEmitter.on('prepare', () => {
            audioEncodeProcessor.prepare((err) => {
                expect(err).assertUndefined();
                console.info(`case prepare 1`);
                setCallback(done);
                eventEmitter.emit('start');
            })
        });
        eventEmitter.on('start', () => {
            audioEncodeProcessor.start((err) => {
                expect(err).assertUndefined();
                console.info(`case start 1`);
            })
        });
        media.getMediaCapability((err, mediaCaps) => {
            expect(err).assertUndefined();
            console.info(`case getMediaCapability 1`);
            mediaCaps.getAudioEncoderCaps((err, audioCaps) => {
                expect(err).assertUndefined();
                console.info('getAudioDecoderCaps success');
                if (typeof (audioCaps) != 'undefined') {
                    console.info("case audioCaps " + audioCaps);
                } else {
                    console.info("case audioCaps is not defined");
                }
            })
            mediaCaps.findAudioEncoder(mediaDescription2, (err, codecname) => {
                expect(err).assertUndefined();
                console.info('findAudioEncoder success');
                if (typeof (codecname) != 'undefined') {
                    console.info("case codecname " + codecname);
                } else {
                    console.info("case codecname is not defined");
                }
            })
        })
        media.createAudioEncoderByName('avenc_aac', (err, processor) => {
            expect(err).assertUndefined();
            console.info(`case createAudioEncoder by mime 1`);
            audioEncodeProcessor = processor;
            eventEmitter.emit('getAudioEncoderCaps');
        })
    })

    /* *
        * @tc.number    : SUB_MEDIA_AUDIO_ENCODER_FUNCTION_CALLBACK_01_0100
        * @tc.name      : 001.test set EOS manually before last frame and reset
        * @tc.desc      : basic Encode function
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_AUDIO_ENCODER_FUNCTION_CALLBACK_01_0100', 0, async function (done) {
        console.info("case test set EOS manually before last frame and reset");
        let events = require('events');
        let eventEmitter = new events.EventEmitter();
        let mediaDescription = {
            "channel_count": 2,
            "sample_rate": 44100,
            "audio_sample_format": 1,
        }
        await getFdWrite('audioEncode_callback_0100.aac');
        console.info('case getFdWrite success');
        await getFdRead();
        console.info('case getFdRead success');
        eosframenum = 500;
        workdoneAtEOS = true;
        eventEmitter.on('getAudioEncoderCaps', () => {
            audioEncodeProcessor.getAudioEncoderCaps((err, Audiocaps) => {
                expect(err).assertUndefined();
                console.info(`case getAudioEncoderCaps 1`);
                console.info("AudioCaps: " + Audiocaps);
                eventEmitter.emit('configure', mediaDescription);
            })
        });
        eventEmitter.on('configure', (mediaDescription) => {
            audioEncodeProcessor.configure(mediaDescription, (err) => {
                expect(err).assertUndefined();
                console.info(`case configure 1`);
                eventEmitter.emit('prepare');
            })
        });
        eventEmitter.on('prepare', () => {
            audioEncodeProcessor.prepare((err) => {
                expect(err).assertUndefined();
                console.info(`case prepare 1`);
                setCallback(done);
                eventEmitter.emit('start');
            })
        });
        eventEmitter.on('start', () => {
            audioEncodeProcessor.start((err) => {
                expect(err).assertUndefined();
                console.info(`case start 1`);
            })
        });
        media.createAudioEncoderByMime('audio/mp4a-latm', (err, processor) => {
            expect(err).assertUndefined();
            console.info(`case createAudioEncoder 1`);
            audioEncodeProcessor = processor;
            eventEmitter.emit('getAudioEncoderCaps');
        })
    })

    /* *
        * @tc.number    : SUB_MEDIA_AUDIO_ENCODER_FUNCTION_CALLBACK_01_0200
        * @tc.name      : 002.test flush at running state
        * @tc.desc      : basic Encode function
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_AUDIO_ENCODER_FUNCTION_CALLBACK_01_0200', 0, async function (done) {
        console.info("case test flush at running state");
        let events = require('events');
        let eventEmitter = new events.EventEmitter();
        let mediaDescription = {
            "channel_count": 2,
            "sample_rate": 44100,
            "audio_sample_format": 1,
        }
        await getFdWrite('audioEncode_callback_0200.aac');
        console.info('case getFdWrite success');
        await getFdRead();
        console.info('case getFdRead success');
        workdoneAtEOS = true;
        eventEmitter.on('getAudioEncoderCaps', () => {
            audioEncodeProcessor.getAudioEncoderCaps((err, Audiocaps) => {
                expect(err).assertUndefined();
                console.info(`case getAudioEncoderCaps 1`);
                console.info("AudioCaps: " + Audiocaps);
                eventEmitter.emit('configure', mediaDescription);
            })
        });
        eventEmitter.on('configure', (mediaDescription) => {
            audioEncodeProcessor.configure(mediaDescription, (err) => {
                expect(err).assertUndefined();
                console.info(`case configure 1`);
                eventEmitter.emit('prepare');
            })
        });
        eventEmitter.on('prepare', () => {
            audioEncodeProcessor.prepare((err) => {
                expect(err).assertUndefined();
                console.info(`case prepare 1`);
                setCallback(done);
                eventEmitter.emit('start');
            })
        });
        eventEmitter.on('start', () => {
            audioEncodeProcessor.start((err) => {
                expect(err).assertUndefined();
                console.info(`case start 1`);
                setTimeout(() => {eventEmitter.emit('flush')},5000)
            })
        });
        eventEmitter.on('flush', () => {
            inputQueue = [];
            outputQueue = [];
            audioEncodeProcessor.flush((err) => {
                expect(err).assertUndefined();
                console.info(`case flush after 5s`);
            })
        });
        media.createAudioEncoderByMime('audio/mp4a-latm', (err, processor) => {
            expect(err).assertUndefined();
            console.info(`case createAudioEncoder 1`);
            audioEncodeProcessor = processor;
            eventEmitter.emit('getAudioEncoderCaps');
        })
    })

    /* *
        * @tc.number    : SUB_MEDIA_AUDIO_ENCODER_FUNCTION_CALLBACK_01_0300
        * @tc.name      : 003. test flush at EOS state
        * @tc.desc      : basic Encode function
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_AUDIO_ENCODER_FUNCTION_CALLBACK_01_0300', 0, async function (done) {
        console.info("case test flush at EOS state");
        let events = require('events');
        let eventEmitter = new events.EventEmitter();
        let mediaDescription = {
            "channel_count": 2,
            "sample_rate": 44100,
            "audio_sample_format": 1,
        }
        await getFdWrite('audioEncode_callback_0300.aac');
        console.info('case getFdWrite success');
        await getFdRead();
        console.info('case getFdRead success');
        eosframenum = 500;
        flushAtEOS = true;
        eventEmitter.on('getAudioEncoderCaps', () => {
            audioEncodeProcessor.getAudioEncoderCaps((err, Audiocaps) => {
                expect(err).assertUndefined();
                console.info(`case getAudioEncoderCaps 1`);
                console.info("AudioCaps: " + Audiocaps);
                eventEmitter.emit('configure', mediaDescription);
            })
        });
        eventEmitter.on('configure', (mediaDescription) => {
            audioEncodeProcessor.configure(mediaDescription, (err) => {
                expect(err).assertUndefined();
                console.info(`case configure 1`);
                eventEmitter.emit('prepare');
            })
        });
        eventEmitter.on('prepare', () => {
            audioEncodeProcessor.prepare((err) => {
                expect(err).assertUndefined();
                console.info(`case prepare 1`);
                setCallback(done);
                eventEmitter.emit('start');
            })
        });
        eventEmitter.on('start', () => {
            audioEncodeProcessor.start((err) => {
                expect(err).assertUndefined();
                console.info(`case start 1`);
            })
        });
        media.createAudioEncoderByMime('audio/mp4a-latm', (err, processor) => {
            expect(err).assertUndefined();
            console.info(`case createAudioEncoder 1`);
            audioEncodeProcessor = processor;
            eventEmitter.emit('getAudioEncoderCaps');
        })
    })

    /* *
        * @tc.number    : SUB_MEDIA_AUDIO_ENCODER_FUNCTION_CALLBACK_01_0400
        * @tc.name      : 004.test stop at running state and reset
        * @tc.desc      : basic Encode function
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_AUDIO_ENCODER_FUNCTION_CALLBACK_01_0400', 0, async function (done) {
        console.info("case test stop at running state and reset");
        let events = require('events');
        let eventEmitter = new events.EventEmitter();
        let mediaDescription = {
            "channel_count": 2,
            "sample_rate": 44100,
            "audio_sample_format": 1,
        }
        await getFdWrite('audioEncode_callback_0400.aac');
        console.info('case getFdWrite success');
        await getFdRead();
        console.info('case getFdRead success');
        eventEmitter.on('getAudioEncoderCaps', () => {
            audioEncodeProcessor.getAudioEncoderCaps((err, Audiocaps) => {
                expect(err).assertUndefined();
                console.info(`case getAudioEncoderCaps 1`);
                console.info("AudioCaps: " + Audiocaps);
                eventEmitter.emit('configure', mediaDescription);
            })
        });
        eventEmitter.on('configure', (mediaDescription) => {
            audioEncodeProcessor.configure(mediaDescription, (err) => {
                expect(err).assertUndefined();
                console.info(`case configure 1`);
                eventEmitter.emit('prepare');
            })
        });
        eventEmitter.on('prepare', () => {
            audioEncodeProcessor.prepare((err) => {
                expect(err).assertUndefined();
                console.info(`case prepare 1`);
                setCallback(done);
                eventEmitter.emit('start');
            })
        });
        eventEmitter.on('start', () => {
            audioEncodeProcessor.start((err) => {
                expect(err).assertUndefined();
                console.info(`case start 1`);
                eventEmitter.emit('stop');
            })
        });
        eventEmitter.on('stop', () => {
            sleep(5000).then(() => {
                audioEncodeProcessor.stop((err) => {
                    expect(err).assertUndefined();
                    console.info(`case stop 1`);
                    eventEmitter.emit('reset');
                })
            })
        });
        eventEmitter.on('reset', () => {
            resetParam();
            audioEncodeProcessor.reset((err) => {
                expect(err).assertUndefined();
                console.info(`case reset 1`);
                eventEmitter.emit('release');
            })
        });
        eventEmitter.on('release', () => {
            audioEncodeProcessor.release((err) => {
                expect(err).assertUndefined();
                console.info(`case release 1`);
                audioEncodeProcessor = null;
                done();
            })
        });
        media.createAudioEncoderByMime('audio/mp4a-latm', (err, processor) => {
            expect(err).assertUndefined();
            console.info(`case createAudioEncoder 1`);
            audioEncodeProcessor = processor;
            eventEmitter.emit('getAudioEncoderCaps');
        })
    })

    /* *
        * @tc.number    : SUB_MEDIA_AUDIO_ENCODER_FUNCTION_CALLBACK_01_0500
        * @tc.name      : 005.test stop and restart
        * @tc.desc      : basic Encode function
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_AUDIO_ENCODER_FUNCTION_CALLBACK_01_0500', 0, async function (done) {
        console.info("case test stop and restart");
        let events = require('events');
        let eventEmitter = new events.EventEmitter();
        let mediaDescription = {
            "channel_count": 2,
            "sample_rate": 44100,
            "audio_sample_format": 1,
        }
        await getFdWrite('audioEncode_callback_0500.aac');
        console.info('case getFdWrite success');
        await getFdRead();
        console.info('case getFdRead success');
        eosframenum = 100;
        eventEmitter.on('getAudioEncoderCaps', () => {
            audioEncodeProcessor.getAudioEncoderCaps((err, Audiocaps) => {
                expect(err).assertUndefined();
                console.info(`case getAudioEncoderCaps 1`);
                console.info("AudioCaps: " + Audiocaps);
                eventEmitter.emit('configure', mediaDescription);
            })
        });
        eventEmitter.on('configure', (mediaDescription) => {
            audioEncodeProcessor.configure(mediaDescription, (err) => {
                expect(err).assertUndefined();
                console.info(`case configure 1`);
                eventEmitter.emit('prepare');
            })
        });
        eventEmitter.on('prepare', () => {
            audioEncodeProcessor.prepare((err) => {
                expect(err).assertUndefined();
                console.info(`case prepare 1`);
                setCallback(done);
                eventEmitter.emit('start');
            })
        });
        eventEmitter.on('start', () => {
            audioEncodeProcessor.start((err) => {
                expect(err).assertUndefined();
                console.info(`case start 1`);
                eventEmitter.emit('stop');
            })
        });
        eventEmitter.on('stop', () => {
            sleep(5000).then(() => {
                audioEncodeProcessor.stop((err) => {
                    expect(err).assertUndefined();
                    console.info(`stop after 5s`);
                    resetParam();
                    eventEmitter.emit('restart');
                })
            })
        });
        eventEmitter.on('restart', () => {
            sleep(2000).then(() => {
                audioEncodeProcessor.start((err) => {
                    expect(err).assertUndefined();
                    console.info(`restart after 2s`);
                    workdoneAtEOS = true;
                    enqueueAllInputs(inputQueue);
                })
            })
        });
        media.createAudioEncoderByMime('audio/mp4a-latm', (err, processor) => {
            expect(err).assertUndefined();
            console.info(`case createAudioEncoder 1`);
            audioEncodeProcessor = processor;
            eventEmitter.emit('getAudioEncoderCaps');
        })
    })

    /* *
        * @tc.number    : SUB_MEDIA_AUDIO_ENCODER_FUNCTION_CALLBACK_01_0600
        * @tc.name      : 006.test reconfigure for new file with the same format
        * @tc.desc      : basic Encode function
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_AUDIO_ENCODER_FUNCTION_CALLBACK_01_0600', 0, async function (done) {
        console.info("case test reconfigure for new file with the same format");
        let events = require('events');
        let eventEmitter = new events.EventEmitter();
        let mediaDescription = {
            "channel_count": 2,
            "sample_rate": 44100,
            "audio_sample_format": 1,
        }
        await getFdWrite('audioEncode_callback_0600.aac');
        console.info('case getFdWrite success');
        await getFdRead();
        console.info('case getFdRead success');
        eosframenum = 100;
        resetAtEOS = true;
        let mediaDescription2 = {
            "channel_count": 2,
            "sample_rate": 44100,
            "audio_sample_format": 1,
        }
        let hasreconfigured = false;
        eventEmitter.on('getAudioEncoderCaps', () => {
            audioEncodeProcessor.getAudioEncoderCaps((err, Audiocaps) => {
                expect(err).assertUndefined();
                console.info(`case getAudioEncoderCaps 1`);
                console.info("AudioCaps: " + Audiocaps);
                eventEmitter.emit('configure', mediaDescription);
            })
        });
        eventEmitter.on('configure', (mediaDescription) => {
            audioEncodeProcessor.configure(mediaDescription, (err) => {
                expect(err).assertUndefined();
                console.info(`case configure 1`);
                eventEmitter.emit('prepare');
            })
        });
        eventEmitter.on('prepare', () => {
            audioEncodeProcessor.prepare((err) => {
                expect(err).assertUndefined();
                console.info(`case prepare 1`);
                setCallback(done);
                eventEmitter.emit('start');
            })
        });
        eventEmitter.on('start', () => {
            audioEncodeProcessor.start((err) => {
                expect(err).assertUndefined();
                console.info(`case start 1`);
                if (!hasreconfigured) {
                    eventEmitter.emit('reconfigure', mediaDescription2);
                }
            })
        });
        eventEmitter.on('reconfigure', (mediaDescription2) => {
            sleep(10000).then(() => {
                await closeFdRead();
                await closeFdWrite();
                audioEncodeProcessor.configure(mediaDescription2, (err) => {
                    expect(err).assertUndefined();
                    console.info(`case configure 2`);
                    resetParam();
                    await getFdWrite('audioEncode_callback_0601.aac');
                    console.info('case getFdWrite success');
                    await getFdRead();
                    console.info('case getFdRead success');
                    workdoneAtEOS = true;
                    hasreconfigured = true;
                    eventEmitter.emit('prepare');
                })
            })
        });
        media.createAudioEncoderByMime('audio/mp4a-latm', (err, processor) => {
            expect(err).assertUndefined();
            console.info(`case createAudioEncoder 1`);
            audioEncodeProcessor = processor;
            eventEmitter.emit('getAudioEncoderCaps');
        })
    })
})