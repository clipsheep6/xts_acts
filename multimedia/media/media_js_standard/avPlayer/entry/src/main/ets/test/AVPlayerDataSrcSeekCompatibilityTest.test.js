/*
 * Copyright (C) 2023 Huawei Device Co., Ltd.
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
import mediaLibrary from '@ohos.multimedia.mediaLibrary';
import {testAVPlayerFun, copySourceFromRawToPath} from '../../../../../../AVPlayerTestBase.js';
import * as mediaTestBase from '../../../../../../MediaTestBase.js';
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from 'deccjsunit/index';
import fs from '@ohos.file.fs'
export default function AVPlayerDataSrcSeekCompatibilityTest() {
    describe('AVPlayerDataSrcSeekCompatibilityTest', function () {
        const PLAY_TIME = 3000;
        let avPlayer = null;
        let avPlayTest = {
            width: 0,
            height: 0,
            duration: -1,
        }
        let pathDir = globalThis.abilityContext.filesDir;
        let filePath =  pathDir + "/01.mp3";
        let TAG = '';
        let stream = null;
        let fd = null;
        let fileSize = -1;

        beforeAll(async function() {
            console.info('beforeAll case');
        })

        beforeEach(async function() {
            console.info('beforeEach case');
        })

        afterEach(async function() {
            console.info('afterEach case');
        })

        afterAll(async function() {
            console.info('afterAll case');
            if (avPlayer != null) {
                avPlayer.release().then(() => {
                }, mediaTestBase.failureCallback).catch(mediaTestBase.catchCallback);
            }
        })
        
        function readAtSeek(buf, length, pos) {
            console.info(' readAtSeek:' + length + ' pos: ' + pos);
            let num = 0;
            if (buf == undefined || length == undefined || pos == undefined) {
                expect().assertFail();
                return -1;
            }
            num = fileio.readSync(fd, buf, {offset: 0, length: length, position: pos});
            if (num > 0) {
                return num;
            }
            return -1;
        }
        /* *
            * @tc.number    : SUB_MULTIMEDIA_MEDIA_AVPLAYER_DATASRC_SEEK_M4A_0100
            * @tc.name      : 0100.aac_48ksr_16kbr_1ch 
            * @tc.desc      : data source compatibility test
            * @tc.size      : MediumTest
            * @tc.type      : compatibility test
            * @tc.level     : Level1
        */
        it('SUB_MULTIMEDIA_MEDIA_AVPLAYER_DATASRC_SEEK_M4A_0100', 0, async function (done) {
            let fileName = "55_15s.m4a";
            filePath =  pathDir + "/" + fileName;
            console.info(`case filePath is ${filePath}`);
            copySourceFromRawToPath(fileName, filePath);
            fd = fileio.openSync(filePath, 0o0);
            console.info(`end case fd is ${fd}`);
            fileSize = fileio.statSync(filePath).size;
            let src = {
                fileSize: fileSize,
                callback: readAtSeek
            }
            avPlayTest = { width: 0, height: 0, duration: 15019 };
            await testAVPlayerFun(src, avPlayer, avPlayTest, PLAY_TIME, done);
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_MEDIA_AVPLAYER_DATASRC_SEEK_MP3_0100
            * @tc.name      : 0100.mp3
            * @tc.desc      : data source compatibility test
            * @tc.size      : MediumTest
            * @tc.type      : compatibility test
            * @tc.level     : Level1
        */
        it('SUB_MULTIMEDIA_MEDIA_AVPLAYER_DATASRC_SEEK_MP3_0100', 0, async function (done) {
            let fileName = "01_15s.mp3";
            filePath =  pathDir + "/" + fileName;
            console.info(`case filePath is ${filePath}`);
            copySourceFromRawToPath(fileName, filePath);
            fd = fileio.openSync(filePath, 0o0);
            console.info(`end case fd is ${fd}`);
            fileSize = fileio.statSync(filePath).size;
            let src = {
                fileSize: fileSize,
                callback: readAtSeek
            }
            avPlayTest = { width: 0, height: 0, duration: 15024 };
            await testAVPlayerFun(src, avPlayer, avPlayTest, PLAY_TIME, done);
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_MEDIA_AVPLAYER_DATASRC_SEEK_AAC_0100
            * @tc.name      : 0100.aac_48ksr_16kbr_1ch 
            * @tc.desc      : data source compatibility test
            * @tc.size      : MediumTest
            * @tc.type      : compatibility test
            * @tc.level     : Level1
        */
        it('SUB_MULTIMEDIA_MEDIA_AVPLAYER_DATASRC_SEEK_AAC_0100', 0, async function (done) {
            let fileName = "aac_48ksr_16kbr_1ch.aac";
            filePath =  pathDir + "/" + fileName;
            console.info(`case filePath is ${filePath}`);
            copySourceFromRawToPath(fileName, filePath);
            fd = fileio.openSync(filePath, 0o0);
            console.info(`end case fd is ${fd}`);
            fileSize = fileio.statSync(filePath).size;
            let src = {
                fileSize: fileSize,
                callback: readAtSeek
            }
            avPlayTest = { width: 0, height: 0, duration: 10024 };
            await testAVPlayerFun(src, avPlayer, avPlayTest, PLAY_TIME, done);
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_MEDIA_AVPLAYER_DATASRC_SEEK_OGG_0100
            * @tc.name      : 0100.vorbis_48ksr_32kbr_1ch 
            * @tc.desc      : data source compatibility test
            * @tc.size      : MediumTest
            * @tc.type      : compatibility test
            * @tc.level     : Level1
        */
        it('SUB_MULTIMEDIA_MEDIA_AVPLAYER_DATASRC_SEEK_OGG_0100', 0, async function (done) {
            let fileName = "vorbis_48ksr_32kbr_1ch.ogg";
            filePath =  pathDir + "/" + fileName;
            console.info(`case filePath is ${filePath}`);
            copySourceFromRawToPath(fileName, filePath);
            fd = fileio.openSync(filePath, 0o0);
            console.info(`end case fd is ${fd}`);
            fileSize = fileio.statSync(filePath).size;
            let src = {
                fileSize: fileSize,
                callback: readAtSeek
            }
            avPlayTest = { width: 0, height: 0, duration: 10009 };
            await testAVPlayerFun(src, avPlayer, avPlayTest, PLAY_TIME, done);
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_MEDIA_AVPLAYER_DATASRC_SEEK_WAV_0100
            * @tc.name      : 0100.pcm_96ksr_64kbr_2ch 
            * @tc.desc      : data source compatibility test
            * @tc.size      : MediumTest
            * @tc.type      : compatibility test
            * @tc.level     : Level1
        */
        it('SUB_MULTIMEDIA_MEDIA_AVPLAYER_DATASRC_SEEK_WAV_0100', 0, async function (done) {
            let fileName = "pcm_96ksr_64kbr_2ch.wav";
            filePath =  pathDir + "/" + fileName;
            console.info(`case filePath is ${filePath}`);
            copySourceFromRawToPath(fileName, filePath);
            fd = fileio.openSync(filePath, 0o0);
            console.info(`end case fd is ${fd}`);
            fileSize = fileio.statSync(filePath).size;
            let src = {
                fileSize: fileSize,
                callback: readAtSeek
            }
            avPlayTest = { width: 0, height: 0, duration: 5461 };
            await testAVPlayerFun(src, avPlayer, avPlayTest, PLAY_TIME, done);
        })

        /* *
            * @tc.number    : SUB_MULTIMEDIA_MEDIA_AVPLAYER_DATASRC_SEEK_FLAC_0100
            * @tc.name      : 0100.flac_48ksr_32kbr_2ch 
            * @tc.desc      : data source compatibility test
            * @tc.size      : MediumTest
            * @tc.type      : compatibility test
            * @tc.level     : Level1
        */
        it('SUB_MULTIMEDIA_MEDIA_AVPLAYER_DATASRC_SEEK_FLAC_0100', 0, async function (done) {
            let fileName = "flac_48ksr_32kbr_2ch.flac";
            filePath =  pathDir + "/" + fileName;
            console.info(`case filePath is ${filePath}`);
            copySourceFromRawToPath(fileName, filePath);
            fd = fileio.openSync(filePath, 0o0);
            console.info(`end case fd is ${fd}`);
            fileSize = fileio.statSync(filePath).size;
            let src = {
                fileSize: fileSize,
                callback: readAtSeek
            }
            avPlayTest = { width: 0, height: 0, duration: 10000 };
            await testAVPlayerFun(src, avPlayer, avPlayTest, PLAY_TIME, done);
        })
    });
}