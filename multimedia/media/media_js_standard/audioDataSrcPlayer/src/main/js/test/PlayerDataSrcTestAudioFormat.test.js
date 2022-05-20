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
import Fileio from '@ohos.fileio'
import featureAbility from '@ohos.ability.featureAbility'
import * as mediaTestBase from '../../../../../MediaTestBase.js';
import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from 'deccjsunit/index'

describe('PlayerDataSrcTestAudioFormat', function () {
    let dataSrc = media.createAVDataSource();
    let audioPlayer = media.createAudioPlayer();
    let isTimeOut = false;
    let readStreamSync = undefined;
    let datasrcLen = -1;
    const AUDIO_SOURCE = '/files/01.m4a';
    const PLAY_TIME = 3000;
    const DURATION_TIME = 119600;
    const DELTA_TIME  = 1000;
    const END_STATE = 0;
    const SRC_STATE = 1;
    const PLAY_STATE = 2;
    const PAUSE_STATE = 3;
    const STOP_STATE = 4;
    const RESET_STATE = 5;
    const SEEK_STATE = 6;
    const VOLUME_STATE = 7;
    const RELEASE_STATE = 8;
    const ERROR_STATE = 9;
    const FINISH_STATE = 10;
    const LOOP_STATE = 11;
    const FDSRC_STATE = 12;
    const SECOND_INDEX = 1;
    const RAND_NUM = 5;
    const TIME_OUT = 40000;
    const MAX_VOLUME = 1;
    const SEEK_TIME = 10000; // 10s
    let isToSeek = false;
    let isToDuration = false;
    let fileDescriptor = undefined;

    beforeAll(function() {
        console.info('beforeAll case');
    })

    beforeEach(function() {
        isToSeek = false;
        isToDuration = false;
        console.info('beforeEach case');
    })

    afterEach(function() {
        console.info('afterEach case');
    })

    afterAll(async function() {
        console.info('afterAll case');
    })


    function getTotalLen() {
        let buf = new ArrayBuffer(READ_DATA_SIZE_MAX);
        let totalLength = readStreamSync.readSync(buf);
        dataSrc.size = totalLength;
    }

    function getContent(mem, len, pos) {
        let lenReal = -1;
        if (pos == -1) {
            lenReal = readStreamSync.readSync(mem, {
                length: len,
            });
        } else {
            lenReal= readStreamSync.readSync(mem, {
                position: pos,
                length: len,
            });

        }
        return lenReal;
    }

    function readFile(path) {
        console.info('case MusicPlayer[PlayerModel] Launcher FileUtil readFile start execution');
        try {
            console.info('case MusicPlayer[PlayerModel] readFile: ' + path);
            readStreamSync = Fileio.createStreamSync(path, 'r+');
        } catch (e) {
            console.info('case MusicPlayer Launcher FileUtil readFile ' + e);
        }
    }

    function setDataSrcSeekAble(audioSource) {
        var context = featureAbility.getContext();
        context.getOrCreateLocalDir((err, data) => {
            console.info("data=" + data);
            let publicPath = data + audioSource;
            readFile(publicPath);
            if (readStreamSync == undefined) {
                console.info('case MusicPlayer Launcher FileUtil is null');
                return;
            }
            getTotalLen();
            dataSrc.size = totalLength;
            dataSrc.on('readAt', (length, mem, pos) => {
                console.info('MusicPlayer[PlayerModel] readAt:' + length + 'pos' + pos);
                datasrcLen = getContent(mem, length, pos);
                if (datasrcLen > 0) {
                    console.info('case MusicPlayer[PlayerModel] readAt end:' + datasrcLen);
                    return datasrcLen;
                }
                return -1;
            });
        })
    }
    async function playSource(audioFile, done) {
        console.info("1122334 0");
        let dataSrc = media.createAVDataSource();
        console.info("1122334 1");
        let audioPlayer = media.createAudioPlayer();
        console.info("1122334 2");
        audioSource = audioFile;
        console.info("1122334 3");
        setDataSrcSeekAble(audioSource);
        console.info("1122334 4");
        audioPlayer.dataSrc = dataSrc;
        audioPlayer.on('dataLoad', () => {
            console.info('case set source success');
            expect(audioPlayer.state).assertEqual('paused');
            expect(audioPlayer.currentTime).assertEqual(0);
            audioPlayer.play();
        });
        audioPlayer.on('play', () => {
            console.info('case start to play');
            expect(audioPlayer.state).assertEqual('playing');
            mediaTestBase.msleep(PLAY_TIME);
            if (!isToSeek) {
                audioPlayer.pause();
            } else {
                audioPlayer.seek(SEEK_TIME);
            }
        });
        audioPlayer.on('pause', () => {
            console.info('case now is paused');
            expect(audioPlayer.state).assertEqual('paused');
            audioPlayer.setVolume(MAX_VOLUME);
        });
        audioPlayer.on('stop', () => {
            console.info('case stop success');
            expect(audioPlayer.state).assertEqual('stopped');
            audioPlayer.reset();
        });
        audioPlayer.on('reset', () => {
            console.info('case reset success');
            expect(audioPlayer.state).assertEqual('idle');
            audioPlayer.release();
            audioPlayer = undefined;
            done();
        });
        audioPlayer.on('timeUpdate', (seekDoneTime) => {
            if (typeof (seekDoneTime) == "undefined") {
                console.info(`case seek filed,errcode is ${seekDoneTime}`);
                audioPlayer.release();
                expect().assertFail();
                done();
                return;
            }
            console.info('case seek success, and seek time is ' + seekDoneTime);
            if (!isToDuration) {
                expect(SEEK_TIME).assertEqual(seekDoneTime);
                isToDuration = true;
                mediaTestBase.msleep(PLAY_TIME);
                audioPlayer.seek(audioPlayer.duration);
            } else {
                expect(audioPlayer.duration).assertEqual(seekDoneTime);
            }
        });
        audioPlayer.on('volumeChange', () => {
            console.info('case set volume value to ' + MAX_VOLUME);
            audioPlayer.play();
            isToSeek = true;
        });
        audioPlayer.on('finish', () => {
            console.info('case play end');
            expect(audioPlayer.state).assertEqual('stopped');
            audioPlayer.stop();
        });
        audioPlayer.on('error', (err) => {
            console.info(`case error called,errName is ${err.name}`);
            console.info(`case error called,errCode is ${err.code}`);
            console.info(`case error called,errMessage is ${err.message}`);
            audioPlayer.release();
            expect().assertFail();
            done();
        });
    }

    /* *
        * @tc.number    : SUB_MEDIA_PLAYER_DATASRC_FORMAT_MP3_0100
        * @tc.name      : 001.Playing mp3 streams
        * @tc.desc      : Format : MP3
                          Codec : MP3
                          Samplerate : 48000
                          Bitrate : 32
                          Channel : 1
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_PLAYER_DATASRC_FORMAT_MP3_0100', 0, async function (done) {
        playSource('/files/MP3_48000_32_1.mp3', done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_PLAYER_DATASRC_FORMAT_MP4_0200
        * @tc.name      : 001.Playing mp4 streams
        * @tc.desc      : Format : MP4
                          Codec : AAC LC
                          Samplerate : 48000
                          Bitrate : 32
                          Channel : 1
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_PLAYER_DATASRC_FORMAT_MP4_0200', 0, async function (done) {
        playSource('/files/H264_AAC.mp4', done);
        done();
    })


    /* *
        * @tc.number    : SUB_MEDIA_PLAYER_DATASRC_FORMAT_MP4_0300
        * @tc.name      : 002.Playing mp4 streams
        * @tc.desc      : Format : MP4
                          Codec : AAC LC
                          Samplerate : 48000
                          Bitrate : 64
                          Channel : 2
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_PLAYER_DATASRC_FORMAT_MP4_0300', 0, async function (done) {
        playSource('/files/H264_MP3.mp4', done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_PLAYER_DATASRC_FORMAT_MP4_0400
        * @tc.name      : 003.Playing mp4 streams
        * @tc.desc      : Format : MP4
                          Codec : AAC LC
                          Samplerate : 48000
                          Bitrate : 32
                          Channel : 2
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_PLAYER_DATASRC_FORMAT_MP4_0400', 0, async function (done) {
        playSource('/files/MPEG2_AAC.mp4', done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_PLAYER_DATASRC_FORMAT_MP4_0500
        * @tc.name      : 004.Playing mp4 streams
        * @tc.desc      : Format : MP4
                          Codec : AAC LC
                          Samplerate : 96000
                          Bitrate : 32
                          Channel : 1
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_PLAYER_DATASRC_FORMAT_MP4_0500', 0, async function (done) {
        playSource('/files/MPEG2_MP3.mp4', done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_PLAYER_DATASRC_FORMAT_MP4_0600
        * @tc.name      : 005.Playing mp4 streams
        * @tc.desc      : Format : MP4
                          Codec : AAC LC
                          Samplerate : 96000
                          Bitrate : 64
                          Channel : 2
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_PLAYER_DATASRC_FORMAT_MP4_0600', 0, async function (done) {
        playSource('/files/MPEG4_AAC.mp4', done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_PLAYER_DATASRC_FORMAT_MP4_0700
        * @tc.name      : 006.Playing mp4 streams
        * @tc.desc      : Format : MP4
                          Codec : MP3
                          Samplerate : 48000
                          Bitrate : 32
                          Channel : 1
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_PLAYER_DATASRC_FORMAT_MP4_0700', 0, async function (done) {
        playSource('/files/MPEG4_MP3.mp4', done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_PLAYER_DATASRC_FORMAT_MP4_0800
        * @tc.name      : 007.Playing mp4 streams
        * @tc.desc      : Format : MP4
                          Codec : MP3
                          Samplerate : 48000
                          Bitrate : 16
                          Channel : 2
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_PLAYER_DATASRC_FORMAT_MP4_0800', 0, async function (done) {
        playSource('/files/h264_1280x720_30.mp4', done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_PLAYER_DATASRC_FORMAT_MP4_0900
        * @tc.name      : 008.Playing mp4 streams
        * @tc.desc      : Format : MP4
                          Codec : MP3
                          Samplerate : 48000
                          Bitrate : 64
                          Channel : 2
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_PLAYER_DATASRC_FORMAT_MP4_0900', 0, async function (done) {
        playSource('/files/hevc_1280x720_30.mp4', done);
        done();
    })


    /* *
        * @tc.number    : SUB_MEDIA_PLAYER_DATASRC_FORMAT_M4A_1000
        * @tc.name      : 001.Playing m4a streams
        * @tc.desc      : Format : M4A
                          Codec : AAC LC
                          Samplerate : 48000
                          Bitrate : 32
                          Channel : 1
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_PLAYER_DATASRC_FORMAT_M4A_1000', 0, async function (done) {
        playSource('/files/AAC_48000_32_1.aac', done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_PLAYER_DATASRC_FORMAT_WAV_1100
        * @tc.name      : 007.Playing m4v streams
        * @tc.desc      : Format : M4v
                          Codec : AAC LC
                          Samplerate : 96000
                          Bitrate : 64
                          Channel : 2
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_PLAYER_DATASRC_FORMAT_WAV_1100', 0, async function (done) {
        playSource('/files/vorbis_48000_32_1.wav', done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_PLAYER_DATASRC_FORMAT_MPEG-TS_1200
        * @tc.name      : 007.Playing mpeg-ts streams
        * @tc.desc      : Format : MPEG-TS
                          Codec : AAC LC
                          Samplerate : 96000
                          Bitrate : 64
                          Channel : 2
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_PLAYER_DATASRC_FORMAT_MPEG-TS_1200', 0, async function (done) {
        playSource('/files/mpeg1video_1920x1080_60.ts', done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_PLAYER_DATASRC_FORMAT_MPEG-TS_1300
        * @tc.name      : 007.Playing mpeg-ts streams
        * @tc.desc      : Format : MPEG-TS
                          Codec : AAC LC
                          Samplerate : 96000
                          Bitrate : 64
                          Channel : 2
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_PLAYER_DATASRC_FORMAT_MPEG-TS_1300', 0, async function (done) {
        playSource('/files/mpeg2video_1280x720_30.ts', done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_PLAYER_DATASRC_FORMAT_MPEG-TS_1400
        * @tc.name      : 007.Playing mpeg-ts streams
        * @tc.desc      : Format : MPEG-TS
                          Codec : AAC LC
                          Samplerate : 96000
                          Bitrate : 64
                          Channel : 2
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_PLAYER_DATASRC_FORMAT_MPEG-TS_1400', 0, async function (done) {
        playSource('/files/mpeg4_320x240_60.ts', done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_PLAYER_DATASRC_FORMAT_MPEG-TS_1500
        * @tc.name      : 007.Playing mpeg-ts streams
        * @tc.desc      : Format : MPEG-TS
                          Codec : AAC LC
                          Samplerate : 96000
                          Bitrate : 64
                          Channel : 2
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_PLAYER_DATASRC_FORMAT_MPEG-TS_1500', 0, async function (done) {
        playSource('/files/libvpx_720x480_60.ts', done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_PLAYER_DATASRC_FORMAT_MPEG-TS_1600
        * @tc.name      : 007.Playing mpeg-ts streams
        * @tc.desc      : Format : MPEG-TS
                          Codec : AAC LC
                          Samplerate : 96000
                          Bitrate : 64
                          Channel : 2
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_PLAYER_DATASRC_FORMAT_MPEG-TS_1600', 0, async function (done) {
        playSource('/files/libvpx_320x240_60.ts', done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_PLAYER_DATASRC_FORMAT_MPEG-TS_1700
        * @tc.name      : 007.Playing mpeg-ts streams
        * @tc.desc      : Format : MPEG-TS
                          Codec : AAC LC
                          Samplerate : 96000
                          Bitrate : 64
                          Channel : 2
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_PLAYER_DATASRC_FORMAT_MPEG-TS_1700', 0, async function (done) {
        playSource('/files/libvpx-vp9_720x480_30.ts', done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_PLAYER_DATASRC_FORMAT_MPEG-TS_1800
        * @tc.name      : 007.Playing mpeg-ts streams
        * @tc.desc      : Format : MPEG-TS
                          Codec : AAC LC
                          Samplerate : 96000
                          Bitrate : 64
                          Channel : 2
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_PLAYER_DATASRC_FORMAT_MPEG-TS_1800', 0, async function (done) {
        playSource('/files/hevc_720x480_30.ts', done);
        done();
    })

    /* *
        * @tc.number    : SUB_MEDIA_PLAYER_DATASRC_FORMAT_MPEG-TS_1900
        * @tc.name      : 007.Playing mpeg-ts streams
        * @tc.desc      : Format : MPEG-TS
                          Codec : AAC LC
                          Samplerate : 96000
                          Bitrate : 64
                          Channel : 2
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level0
    */
    it('SUB_MEDIA_PLAYER_DATASRC_FORMAT_MPEG-TS_1900', 0, async function (done) {
        playSource('/files/h264_320x240_60.ts', done);
        done();
    })
})


