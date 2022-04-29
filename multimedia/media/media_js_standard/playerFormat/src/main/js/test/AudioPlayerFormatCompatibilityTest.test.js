/*
 * Copyright (C) 2022 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the 'License');
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an 'AS IS' BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

import media from '@ohos.multimedia.media'
import {getFileDescriptor, closeFileDescriptor, isFileOpen} from '../../../../../MediaTestBase.js';
import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from 'deccjsunit/index'


describe('AudioPlayerFormatCompatibilityTest', function () {
    const PLAY_TIME = 2000;
    const SEEK_TIME = 3000;
    const MAX_VOLUME = 1;
    let isToSeek = false;
    let isToDuration = false;

    const audio_source = undefined;
    let fileDescriptor = undefined;
    let fdHead = 'fd://';

    beforeAll(function() {
        console.info('beforeAll case');
    })

    beforeEach(async function() {
        isToSeek = false;
        isToDuration = false;
        console.info('beforeEach case');
    })

    afterEach(async function() {
        await closeFileDescriptor(audio_source);
        console.info('afterEach case');
    })

    afterAll(function() {
        console.info('afterAll case');
    })

    function sleep(time) {
        for(let t = Date.now(); Date.now() - t <= time;);
    }

    async function playAudioSource(audioSource, done) {
        console.info(`case media source audio_source: ${audioSource}`)
        await getFileDescriptor(audioSource).then((res) => {
            fileDescriptor = res;
        });

        let audioPlayer = media.createAudioPlayer();
        audioPlayer.on('dataLoad', () => {
            console.info('case set source success');
            expect(audioPlayer.state).assertEqual('paused');
            expect(audioPlayer.currentTime).assertEqual(0);
            audioPlayer.play();
        });
        audioPlayer.on('play', () => {
            console.info('case start to play');
            expect(audioPlayer.state).assertEqual('playing');
            sleep(PLAY_TIME);
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
                console.error(`case seek filed, errcode is ${seekDoneTime}`);
                audioPlayer.release();
                expect().assertFail();
                done();
                return;
            }
            console.info('case seek success, and seek time is ' + seekDoneTime);
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
            console.error(`case error called, ${err.name}, ${err.code}, ${err.message}`);
            audioPlayer.release();
            expect().assertFail();
            done();
        });

        isFileOpen(fileDescriptor, done);
        audioPlayer.src = fdHead + fileDescriptor.fd;
    }

    /* *
        * @tc.number    : SUB_MEDIA_PLAYER_LOCAL_FORMAT_AAC_0100
        * @tc.name      : aac_48ksr_16kbr_1ch
        * @tc.desc      : format compatibility test
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_PLAYER_LOCAL_FORMAT_AAC_0100', 0, async function (done) {
        let audio_source = 'aac_48ksr_16kbr_1ch.aac';
        await playAudioSource(audio_source, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_PLAYER_LOCAL_FORMAT_AAC_0200
        * @tc.name      : aac_48ksr_32kbr_2ch
        * @tc.desc      : format compatibility test
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_PLAYER_LOCAL_FORMAT_AAC_0200', 0, async function (done) {
        let audio_source = 'aac_48ksr_32kbr_2ch.aac';
        await playAudioSource(audio_source, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_PLAYER_LOCAL_FORMAT_AAC_0300
        * @tc.name      : aac_48ksr_64kbr_1ch
        * @tc.desc      : format compatibility test
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_PLAYER_LOCAL_FORMAT_AAC_0300', 0, async function (done) {
        let audio_source = 'aac_48ksr_64kbr_1ch.aac';
        await playAudioSource(audio_source, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_PLAYER_LOCAL_FORMAT_AAC_0400
        * @tc.name      : aac_96ksr_16kbr_1ch
        * @tc.desc      : format compatibility test
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_PLAYER_LOCAL_FORMAT_AAC_0400', 0, async function (done) {
        let audio_source = 'aac_96ksr_16kbr_1ch.aac';
        await playAudioSource(audio_source, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_PLAYER_LOCAL_FORMAT_AAC_0500
        * @tc.name      : aac_96ksr_32kbr_2ch
        * @tc.desc      : format compatibility test
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_PLAYER_LOCAL_FORMAT_AAC_0500', 0, async function (done) {
        let audio_source = 'aac_96ksr_32kbr_2ch.aac';
        await playAudioSource(audio_source, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_PLAYER_LOCAL_FORMAT_AAC_0600
        * @tc.name      : aac_96ksr_64kbr_2ch
        * @tc.desc      : format compatibility test
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_PLAYER_LOCAL_FORMAT_AAC_0600', 0, async function (done) {
        let audio_source = 'aac_96ksr_64kbr_2ch.aac';
        await playAudioSource(audio_source, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_PLAYER_LOCAL_FORMAT_OGG_0100
        * @tc.name      : vorbis_48ksr_32kbr_1ch
        * @tc.desc      : format compatibility test
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_PLAYER_LOCAL_FORMAT_OGG_0100', 0, async function (done) {
        let audio_source = 'vorbis_48ksr_32kbr_1ch.ogg';
        await playAudioSource(audio_source, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_PLAYER_LOCAL_FORMAT_OGG_0200
        * @tc.name      : vorbis_48ksr_64kbr_1ch
        * @tc.desc      : format compatibility test
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_PLAYER_LOCAL_FORMAT_OGG_0200', 0, async function (done) {
        let audio_source = 'vorbis_48ksr_64kbr_1ch.ogg';
        await playAudioSource(audio_source, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_PLAYER_LOCAL_FORMAT_OGG_0300
        * @tc.name      : vorbis_48ksr_64kbr_2ch
        * @tc.desc      : format compatibility test
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_PLAYER_LOCAL_FORMAT_OGG_0300', 0, async function (done) {
        let audio_source = 'vorbis_48ksr_64kbr_2ch.ogg';
        await playAudioSource(audio_source, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_PLAYER_LOCAL_FORMAT_WAV_0100
        * @tc.name      : pcm_48ksr_16kbr_1ch
        * @tc.desc      : format compatibility test
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_PLAYER_LOCAL_FORMAT_WAV_0100', 0, async function (done) {
        let audio_source = 'pcm_48ksr_16kbr_1ch.wav';
        await playAudioSource(audio_source, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_PLAYER_LOCAL_FORMAT_WAV_0200
        * @tc.name      : pcm_48ksr_32kbr_2ch
        * @tc.desc      : format compatibility test
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_PLAYER_LOCAL_FORMAT_WAV_0200', 0, async function (done) {
        let audio_source = 'pcm_48ksr_32kbr_2ch.wav';
        await playAudioSource(audio_source, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_PLAYER_LOCAL_FORMAT_WAV_0300
        * @tc.name      : pcm_48ksr_64kbr_1ch
        * @tc.desc      : format compatibility test
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_PLAYER_LOCAL_FORMAT_WAV_0300', 0, async function (done) {
        let audio_source = 'pcm_48ksr_64kbr_1ch.wav';
        await playAudioSource(audio_source, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_PLAYER_LOCAL_FORMAT_WAV_0400
        * @tc.name      : pcm_96ksr_16kbr_1ch
        * @tc.desc      : format compatibility test
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_PLAYER_LOCAL_FORMAT_WAV_0400', 0, async function (done) {
        let audio_source = 'pcm_96ksr_16kbr_1ch.wav';
        await playAudioSource(audio_source, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_PLAYER_LOCAL_FORMAT_WAV_0500
        * @tc.name      : pcm_96ksr_32kbr_2ch
        * @tc.desc      : format compatibility test
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_PLAYER_LOCAL_FORMAT_WAV_0500', 0, async function (done) {
        let audio_source = 'pcm_96ksr_32kbr_2ch.wav';
        await playAudioSource(audio_source, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_PLAYER_LOCAL_FORMAT_WAV_0600
        * @tc.name      : pcm_96ksr_64kbr_2ch
        * @tc.desc      : format compatibility test
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_PLAYER_LOCAL_FORMAT_WAV_0600', 0, async function (done) {
        let audio_source = 'pcm_96ksr_64kbr_2ch.wav';
        await playAudioSource(audio_source, done);
    })


    /* *
        * @tc.number    : SUB_MEDIA_PLAYER_LOCAL_FORMAT_FLAC_0100
        * @tc.name      : flac_48ksr_16kbr_1ch
        * @tc.desc      : format compatibility test
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_PLAYER_LOCAL_FORMAT_FLAC_0100', 0, async function (done) {
        let audio_source = 'flac_48ksr_16kbr_1ch.flac';
        await playAudioSource(audio_source, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_PLAYER_LOCAL_FORMAT_FLAC_0200
        * @tc.name      : flac_48ksr_32kbr_2ch
        * @tc.desc      : format compatibility test
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_PLAYER_LOCAL_FORMAT_FLAC_0200', 0, async function (done) {
        let audio_source = 'flac_48ksr_32kbr_2ch.flac';
        await playAudioSource(audio_source, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_PLAYER_LOCAL_FORMAT_FLAC_0300
        * @tc.name      : flac_48ksr_64kbr_1ch
        * @tc.desc      : format compatibility test
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_PLAYER_LOCAL_FORMAT_FLAC_0300', 0, async function (done) {
        let audio_source = 'flac_48ksr_64kbr_1ch.flac';
        await playAudioSource(audio_source, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_PLAYER_LOCAL_FORMAT_FLAC_0400
        * @tc.name      : flac_96ksr_16kbr_1ch
        * @tc.desc      : format compatibility test
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_PLAYER_LOCAL_FORMAT_FLAC_0400', 0, async function (done) {
        let audio_source = 'flac_96ksr_16kbr_1ch.flac';
        await playAudioSource(audio_source, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_PLAYER_LOCAL_FORMAT_FLAC_0500
        * @tc.name      : flac_96ksr_32kbr_2ch
        * @tc.desc      : format compatibility test
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_PLAYER_LOCAL_FORMAT_FLAC_0500', 0, async function (done) {
        let audio_source = 'flac_96ksr_32kbr_2ch.flac';
        await playAudioSource(audio_source, done);
    })

    /* *
        * @tc.number    : SUB_MEDIA_PLAYER_LOCAL_FORMAT_FLAC_0600
        * @tc.name      : flac_96ksr_64kbr_2ch
        * @tc.desc      : format compatibility test
        * @tc.size      : MediumTest
        * @tc.type      : Function test
        * @tc.level     : Level1
    */
    it('SUB_MEDIA_PLAYER_LOCAL_FORMAT_FLAC_0600', 0, async function (done) {
        let audio_source = 'flac_96ksr_64kbr_2ch.flac';
        await playAudioSource(audio_source, done);
    })

})

