// @ts-nocheck
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

import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from 'deccjsunit/index'
import * as trackSwitchingBase from './TrackSwitchingBase.js'
import * as mediaTestBase from './MediaTestBase.js'

describe('LocalAudioPlayerReliabilityCallbackTest', function () {

    let audioPlayer = trackSwitchingBase.audioPlayer;
    let allDescription = null;
    let allDescriptionIndex = [];
    let currentDescription = [];
    let currentDescriptionIndex = [];
    let differentTracks = [];
    let selectTrackData = 0;

    afterEach(async function () {
        console.info('afterEach start');
        await mediaTestBase.closeFileDescriptor(trackSwitchingBase.AUDIO_SOURCE);
        audioPlayer.release();
        console.info('afterEach end');
    })

    function getDescriptionBeforeGetSource() {
        audioPlayer.getTrackDescription((err, allList) => {
            if (allList.length != 0) {
                allDescription = allList;
                console.info('getTrackDescription success, allDescription is : ' + JSON.stringify(allDescription));
                expect().assertFail();
            } else {
                console.info('getTrackDescription is failed, err is : ' + err);
                expect(err.code == 6).assertTrue();
            }
        })
    }

    function getSelectedTrackBeforeGetSource() {
        audioPlayer.getSelectedTracks((err, currentList) => {
            currentDescription = currentList;
            console.info('getSelectedTracks err is : ' + err + ', currentDescription is : ' + currentDescription);
            expect(err.code == 6).assertTrue();
        })
    }

    function selectedTracksBeforeGetSource() {
        audioPlayer.selectTrack(0, (err, data) => {
            selectTrackData = data;
            console.info('track switching, err: ' + err + ', selectTrackData: ' + selectTrackData);
            expect(err.code == 6).assertTrue();
        })
    }

    function selectedTracksBeforePlaying(audioPlayer, done) {
        audioPlayer.on('dataLoad', () => {
            console.log('dataLoad state.');
            allDescriptionIndex = getTrackDescriptionData(audioPlayer, trackSwitchingBase.FLAG1, done);
            audioPlayer.getSelectedTracks((err, currentList) => {
                currentDescriptionIndex = currentList[0];
                console.info('getSelectedTracks err is : , currentDescriptionIndex is : ' + currentDescriptionIndex);
                selectTrack(audioPlayer, allDescriptionIndex[-1], 2, done);
                selectTrack(audioPlayer, allDescriptionIndex[allDescriptionIndex.length], 2, done);
                setTimeout(function () {
                    audioPlayer.play();
                    done();
                }, 1000)
            })
        })
    }

    function getTrackDescriptionData(audioPlayer, flag, done) {
        audioPlayer.getTrackDescription((err, allList) => {
            allDescription = null;
            allDescriptionIndex = [];
            if (flag == trackSwitchingBase.FLAG1) {
                for (let i = 0; i < allList.length; i++) {
                    allDescriptionIndex.push(i);
                }
                console.info('getTrackDescription success, allDescriptionIndex is : ' + allDescriptionIndex);
                expect(true).assertTrue();
                return allDescriptionIndex;
            } else if (flag == trackSwitchingBase.FLAG2) {
                console.info('getTrackDescription success, allDescription is : ' + JSON.stringify(allDescription));
                expect(true).assertTrue();
            } else if (flag == trackSwitchingBase.FLAG3) {
                console.info('getTrackDescription is fail, err: ' + err);
                expect(err.code == 6).assertTrue();
            } else if (flag == trackSwitchingBase.FLAG4) {
                console.info('getTrackDescription is fail, err: ' + err);
                expect(err.code == 6).assertTrue();
                done();
            }
        })
    }

    function getSelectedTracksData(audioPlayer, flag, done) {
        audioPlayer.getSelectedTracks((err, currentList) => {
            currentDescription = currentList;
            if (flag == trackSwitchingBase.FLAG1) {
                console.info('getSelectedTracks is success, currentDescription : ' + currentDescription);
                expect(true).assertTrue();
            } else if (flag == trackSwitchingBase.FLAG2) {
                console.info('getSelectedTracks is fail, err: ' + err);
                expect(err.code == 6).assertTrue();
            } else if (flag == trackSwitchingBase.FLAG3) {
                console.info('getSelectedTracks is fail, err: ' + err);
                expect(err.code == 6).assertTrue();
                done();
            }
        })
    }

    function getDifferentTracks(allDescriptionIndex, currentDescriptionIndex) {
        let differentTrackArr = [];
        for (let i = 0; i < allDescriptionIndex.length; i++) {
            if (currentDescriptionIndex != allDescriptionIndex[i]) {
                differentTrackArr.push(allDescriptionIndex[i])
            }
        }
        console.info('differentTracks is : ' + differentTrackArr);
        return differentTrackArr;
    }

    function selectTrack(audioPlayer, index, flag, done) {
        audioPlayer.selectTrack(index, (err, data) => {
            selectTrackData = data;
            console.info('track switching, err:' + err + ', selectTrackData: ' + selectTrackData);
            if (flag == trackSwitchingBase.FLAG1) {
                expect(data == 0).assertTrue();
            } else if (flag == trackSwitchingBase.FLAG2) {
                expect(data == 0).assertTrue();
                done();
            } else if (flag == trackSwitchingBase.FLAG3) {
                expect(err.code == 3).assertTrue();
            } else if (flag == trackSwitchingBase.FLAG4) {
                expect(err.code == 6).assertTrue();
            } else if (flag == trackSwitchingBase.FLAG5) {
                expect(err.code == 3).assertTrue();
                done();
            } else if (flag == trackSwitchingBase.FLAG6) {
                expect(err.code == 6).assertTrue();
                done();
            }
        })
    }

    function getDescriptionAfterPlaying(audioPlayer, step, done) {
        audioPlayer.on('dataLoad', () => {
            console.info('dataLoad state.');
            audioPlayer.play();
        })
        switch (step) {
            case 'RESET':
                console.info('step is RESET');
                audioPlayer.on('play', () => {
                    console.info('play state.');
                    audioPlayer.reset();
                })
                audioPlayer.on('reset', () => {
                    console.info('reset state.');
                    getTrackDescriptionData(audioPlayer, trackSwitchingBase.FLAG4, done);
                })
                break;
            case 'RELEASE':
                console.info('step is RESET');
                audioPlayer.on('play', () => {
                    console.info('play state.');
                    audioPlayer.release();
                    console.info('release state.');
                })
                setTimeout(function () {
                    if (typeof (audioPlayer) == 'undefined') {
                        console.info('AudioPlayer does not exist');
                        expect(true).assertTrue();
                    } else {
                        getTrackDescriptionData(audioPlayer, trackSwitchingBase.FLAG4, done);
                    }
                }, 3000)
                break;
            default:
                console.info('step is COMBINATION');
                audioPlayer.on('play', () => {
                    console.info('play state.');
                    getTrackDescriptionData(audioPlayer, trackSwitchingBase.FLAG2, done);
                    audioPlayer.pause();
                })
                audioPlayer.on('pause', () => {
                    console.info('pause state.');
                    getTrackDescriptionData(audioPlayer, trackSwitchingBase.FLAG2, done);
                    audioPlayer.stop();
                })
                audioPlayer.on('stop', () => {
                    console.info('stop state.');
                    getTrackDescriptionData(audioPlayer, trackSwitchingBase.FLAG2, done);
                    audioPlayer.reset();
                })
                audioPlayer.on('reset', () => {
                    console.info('reset state.');
                    getTrackDescriptionData(audioPlayer, trackSwitchingBase.FLAG3, done);
                    audioPlayer.release();
                })
                setTimeout(function () {
                    console.info('release state.');
                    if (typeof (audioPlayer) == 'undefined') {
                        console.info('AudioPlayer does not exist');
                        expect(true).assertTrue();
                        done();
                    } else {
                        getTrackDescriptionData(audioPlayer, trackSwitchingBase.FLAG4, done);
                    }
                }, 3000)
                break;
        }
    }

    function getSelectedTracksAfterPlaying(audioPlayer, step, done) {
        allDescription = null;
        audioPlayer.on('dataLoad', () => {
            console.info('dataLoad state.');
            audioPlayer.play();
        })

        switch (step) {
            case 'RESET':
                console.info('step is RESET');
                audioPlayer.on('play', () => {
                    console.info('play state.');
                    audioPlayer.reset();
                })
                audioPlayer.on('reset', () => {
                    console.info('reset state.');
                    getSelectedTracksData(audioPlayer, trackSwitchingBase.FLAG3, done);
                })
                break;
            case 'RELEASE':
                console.info('step is RESET');
                audioPlayer.on('play', () => {
                    console.info('play state.');
                    audioPlayer.release();
                    console.info('release state.');
                })
                setTimeout(function () {
                    if (typeof (audioPlayer) == 'undefined') {
                        console.info('AudioPlayer does not exist');
                        expect(true).assertTrue();
                        done();
                    } else {
                        getSelectedTracksData(audioPlayer, trackSwitchingBase.FLAG3, done);
                    }
                }, 3000)
                break;
            default:
                console.info('step is COMBINATION');
                audioPlayer.on('play', () => {
                    console.info('play state.');
                    getSelectedTracksData(audioPlayer, trackSwitchingBase.FLAG1, done);
                    audioPlayer.pause();
                })
                audioPlayer.on('pause', () => {
                    console.info('pause state.');
                    getSelectedTracksData(audioPlayer, trackSwitchingBase.FLAG1, done);
                    audioPlayer.stop();
                })
                audioPlayer.on('stop', () => {
                    console.info('stop state.');
                    getSelectedTracksData(audioPlayer, trackSwitchingBase.FLAG1, done);
                    audioPlayer.reset();
                })
                audioPlayer.on('reset', () => {
                    console.info('reset state.');
                    getSelectedTracksData(audioPlayer, trackSwitchingBase.FLAG2, done);
                    audioPlayer.release();
                })
                setTimeout(function () {
                    console.info('release state.');
                    if (typeof (audioPlayer) == 'undefined') {
                        console.info('AudioPlayer does not exist');
                        expect(true).assertTrue();
                        done();
                    } else {
                        getSelectedTracksData(audioPlayer, trackSwitchingBase.FLAG3, done);
                    }
                }, 3000)
                break;
        }
    }

    function selectedTracksAfterPlaying(audioPlayer, step, done) {
        allDescription = null;
        audioPlayer.on('dataLoad', () => {
            console.info('dataLoad state.');
            audioPlayer.play();
        })

        audioPlayer.on('play', () => {
            console.log('play state.');
            allDescriptionIndex = getTrackDescriptionData(audioPlayer, trackSwitchingBase.FLAG1, done);

            audioPlayer.getSelectedTracks((err, currentList) => {
                currentDescriptionIndex = currentList[0];
                console.info('getSelectedTracks err:' + err + ', currentDescriptionIndex: ' + currentDescriptionIndex);
                switch (step) {
                    case 'STOP_DIFFERENT_TRACKS':
                        console.info('step is STOP_DIFFERENT_TRACKS');
                        audioPlayer.stop();
                        break;
                    case 'RESET_DIFFERENT_TRACKS':
                        console.info('step is RESET_DIFFERENT_TRACKS');
                        audioPlayer.reset();
                        break;
                    case 'RELEASE_DIFFERENT_TRACKS':
                        console.info('step is RELEASE_DIFFERENT_TRACKS');
                        differentTracks = [];
                        audioPlayer.release();
                        console.info('release state.');
                        break;
                    case 'COMBINATION_DIFFERENT_TRACKS':
                        console.info('step is COMBINATION_DIFFERENT_TRACKS');
                        differentTracks = [];
                        differentTracks = getDifferentTracks(allDescriptionIndex, currentDescriptionIndex);
                        selectTrack(audioPlayer, differentTracks[0], trackSwitchingBase.FLAG1, done);
                        audioPlayer.pause();
                        break;
                    default:
                        console.info('step is BOUNDARY_DIFFERENT_TRACKS');
                        selectTrack(audioPlayer, allDescriptionIndex[-1], trackSwitchingBase.FLAG3, done);
                        selectTrack(audioPlayer, allDescriptionIndex[allDescriptionIndex.length],
                            trackSwitchingBase.FLAG5, done);
                }
            })
        })
        switch (step) {
            case 'STOP_DIFFERENT_TRACKS':
                console.info('--step is STOP_DIFFERENT_TRACKS');
                audioPlayer.on('stop', () => {
                    console.info('stop state.');
                    differentTracks = [];
                    differentTracks = getDifferentTracks(allDescriptionIndex, currentDescriptionIndex);
                    selectTrack(audioPlayer, differentTracks[0], trackSwitchingBase.FLAG6, done);
                })
                break;
            case 'RESET_DIFFERENT_TRACKS':
                console.info('--step is RESET_DIFFERENT_TRACKS');
                audioPlayer.on('reset', () => {
                    console.info('reset state.');
                    differentTracks = [];
                    differentTracks = getDifferentTracks(allDescriptionIndex, currentDescriptionIndex);
                    selectTrack(audioPlayer, differentTracks[0], trackSwitchingBase.FLAG6, done);
                })
                break;
            case 'RELEASE_DIFFERENT_TRACKS':
                console.info('--step is RELEASE_DIFFERENT_TRACKS');
                setTimeout(function () {
                    if (typeof (audioPlayer) == 'undefined') {
                        console.info('AudioPlayer does not exist');
                        expect(true).assertTrue();
                        done();
                    } else {
                        differentTracks = [];
                        differentTracks = getDifferentTracks(allDescriptionIndex, currentDescriptionIndex);
                        selectTrack(audioPlayer, differentTracks[0], trackSwitchingBase.FLAG6, done);
                    }
                }, 2000)
                break;
            case 'COMBINATION_DIFFERENT_TRACKS':
                console.info('--step is COMBINATION_DIFFERENT_TRACKS');
                audioPlayer.on('pause', () => {
                    console.info('pause state.');
                    selectTrack(audioPlayer, differentTracks[1], trackSwitchingBase.FLAG1, done);
                    audioPlayer.stop();
                })
                audioPlayer.on('stop', () => {
                    console.info('stop state.');
                    selectTrack(audioPlayer, differentTracks[0], trackSwitchingBase.FLAG4, done);
                    audioPlayer.reset();
                })
                audioPlayer.on('reset', () => {
                    console.info('reset state.');
                    selectTrack(audioPlayer, differentTracks[1], trackSwitchingBase.FLAG4, done);
                    audioPlayer.release();
                    console.info('release state.');
                })
                setTimeout(function () {
                    if (typeof (audioPlayer) == 'undefined') {
                        console.info('AudioPlayer does not exist');
                        expect(true).assertTrue();
                        done();
                    } else {
                        selectTrack(audioPlayer, differentTracks[0], trackSwitchingBase.FLAG6, done);
                    }
                }, 2000)
                break;
        }
    }

    /* *
       * @tc.number    : SUB_MEDIA_LOCAL_AUDIO_PLAYER_RELIABILITY_CALLBACK_0100
       * @tc.name      : Before audio playback, input the nonexistent track index (1 smaller than the minimum and 1
                         larger than the maximum) to switch tracks
       * @tc.desc      : Audio track switching
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level3
    */
    it('SUB_MEDIA_LOCAL_AUDIO_PLAYER_RELIABILITY_CALLBACK_0100', 0, async function (done) {
        console.info('-----------SUB_MEDIA_LOCAL_AUDIO_PLAYER_RELIABILITY_CALLBACK_0100 is start--------------')
        audioPlayer = await trackSwitchingBase.initAudioPlayer();
        selectedTracksBeforePlaying(audioPlayer, done);
        await trackSwitchingBase.getLocalFd(audioPlayer, trackSwitchingBase.AUDIO_SOURCE);
        console.info('-----------SUB_MEDIA_LOCAL_AUDIO_PLAYER_RELIABILITY_CALLBACK_0100 is end--------------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_LOCAL_AUDIO_PLAYER_RELIABILITY_CALLBACK_0200
       * @tc.name      : Reset after audio playback to obtain all track information
       * @tc.desc      : Audio track switching
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level2
    */
    it('SUB_MEDIA_LOCAL_AUDIO_PLAYER_RELIABILITY_CALLBACK_0200', 0, async function (done) {
        console.info('-----------SUB_MEDIA_LOCAL_AUDIO_PLAYER_RELIABILITY_CALLBACK_0200 is start--------------')
        audioPlayer = await trackSwitchingBase.initAudioPlayer();
        getDescriptionAfterPlaying(audioPlayer, 'RESET', done);
        await trackSwitchingBase.getLocalFd(audioPlayer, trackSwitchingBase.AUDIO_SOURCE);
        console.info('-----------SUB_MEDIA_LOCAL_AUDIO_PLAYER_RELIABILITY_CALLBACK_0200 is end--------------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_LOCAL_AUDIO_PLAYER_RELIABILITY_CALLBACK_0300
       * @tc.name      : Release after audio playback to obtain all track information
       * @tc.desc      : Audio track switching
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level2
    */
    it('SUB_MEDIA_LOCAL_AUDIO_PLAYER_RELIABILITY_CALLBACK_0300', 0, async function (done) {
        console.info('-----------SUB_MEDIA_LOCAL_AUDIO_PLAYER_RELIABILITY_CALLBACK_0300 is start--------------')
        audioPlayer = await trackSwitchingBase.initAudioPlayer();
        getDescriptionAfterPlaying(audioPlayer, 'RELEASE', done);
        await trackSwitchingBase.getLocalFd(audioPlayer, trackSwitchingBase.AUDIO_SOURCE);
        console.info('-----------SUB_MEDIA_LOCAL_AUDIO_PLAYER_RELIABILITY_CALLBACK_0300 is end--------------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_LOCAL_AUDIO_PLAYER_RELIABILITY_CALLBACK_0400
       * @tc.name      : Pause playback after audio playback, stop playback, reset audio, release audio, and
                         obtain all track information
       * @tc.desc      : Audio track switching
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level2
    */
    it('SUB_MEDIA_LOCAL_AUDIO_PLAYER_RELIABILITY_CALLBACK_0400', 0, async function (done) {
        console.info('-----------SUB_MEDIA_LOCAL_AUDIO_PLAYER_RELIABILITY_CALLBACK_0400 is start--------------')
        audioPlayer = await trackSwitchingBase.initAudioPlayer();
        getDescriptionAfterPlaying(audioPlayer, 'COMBINATION', done);
        await trackSwitchingBase.getLocalFd(audioPlayer, trackSwitchingBase.AUDIO_SOURCE);
        console.info('-----------SUB_MEDIA_LOCAL_AUDIO_PLAYER_RELIABILITY_CALLBACK_0400 is end--------------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_LOCAL_AUDIO_PLAYER_RELIABILITY_CALLBACK_0500
       * @tc.name      : Reset after audio playback to obtain the current track information
       * @tc.desc      : Audio track switching
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level2
    */
    it('SUB_MEDIA_LOCAL_AUDIO_PLAYER_RELIABILITY_CALLBACK_0500', 0, async function (done) {
        console.info('-----------SUB_MEDIA_LOCAL_AUDIO_PLAYER_RELIABILITY_CALLBACK_0500 is start--------------')
        audioPlayer = await trackSwitchingBase.initAudioPlayer();
        getSelectedTracksAfterPlaying(audioPlayer, 'RESET', done);
        await trackSwitchingBase.getLocalFd(audioPlayer, trackSwitchingBase.AUDIO_SOURCE);
        console.info('-----------SUB_MEDIA_LOCAL_AUDIO_PLAYER_RELIABILITY_CALLBACK_0500 is end--------------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_LOCAL_AUDIO_PLAYER_RELIABILITY_CALLBACK_0600
       * @tc.name      : Release after audio playback to obtain the current track information
       * @tc.desc      : Audio track switching
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level2
    */
    it('SUB_MEDIA_LOCAL_AUDIO_PLAYER_RELIABILITY_CALLBACK_0600', 0, async function (done) {
        console.info('-----------SUB_MEDIA_LOCAL_AUDIO_PLAYER_RELIABILITY_CALLBACK_0600 is start--------------')
        audioPlayer = await trackSwitchingBase.initAudioPlayer();
        getSelectedTracksAfterPlaying(audioPlayer, 'RELEASE', done);
        await trackSwitchingBase.getLocalFd(audioPlayer, trackSwitchingBase.AUDIO_SOURCE);
        console.info('-----------SUB_MEDIA_LOCAL_AUDIO_PLAYER_RELIABILITY_CALLBACK_0600 is end--------------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_LOCAL_AUDIO_PLAYER_RELIABILITY_CALLBACK_0700
       * @tc.name      : Pause the playback after the audio playback, stop the playback, reset the audio, release the
                         audio, and obtain the current track information
       * @tc.desc      : Audio track switching
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level2
    */
    it('SUB_MEDIA_LOCAL_AUDIO_PLAYER_RELIABILITY_CALLBACK_0700', 0, async function (done) {
        console.info('-----------SUB_MEDIA_LOCAL_AUDIO_PLAYER_RELIABILITY_CALLBACK_0700 is start--------------')
        audioPlayer = await trackSwitchingBase.initAudioPlayer();
        getSelectedTracksAfterPlaying(audioPlayer, 'COMBINATION', done);
        await trackSwitchingBase.getLocalFd(audioPlayer, trackSwitchingBase.AUDIO_SOURCE);
        console.info('-----------SUB_MEDIA_LOCAL_AUDIO_PLAYER_RELIABILITY_CALLBACK_0700 is end--------------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_LOCAL_AUDIO_PLAYER_RELIABILITY_CALLBACK_0800
       * @tc.name      : Stop playing the audio after playing, and transfer the track index inconsistent with the
                         current track for track switching
       * @tc.desc      : Audio track switching
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level2
    */
    it('SUB_MEDIA_LOCAL_AUDIO_PLAYER_RELIABILITY_CALLBACK_0800', 0, async function (done) {
        console.info('-----------SUB_MEDIA_LOCAL_AUDIO_PLAYER_RELIABILITY_CALLBACK_0800 is start--------------')
        audioPlayer = await trackSwitchingBase.initAudioPlayer();
        selectedTracksAfterPlaying(audioPlayer, 'STOP_DIFFERENT_TRACKS', done);
        await trackSwitchingBase.getLocalFd(audioPlayer, trackSwitchingBase.AUDIO_SOURCE);
        console.info('-----------SUB_MEDIA_LOCAL_AUDIO_PLAYER_RELIABILITY_CALLBACK_0800 is end--------------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_LOCAL_AUDIO_PLAYER_RELIABILITY_CALLBACK_0900
       * @tc.name      : Reset after audio playback, input the track index inconsistent with the current track
                         for track switching
       * @tc.desc      : Audio track switching
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level2
    */
    it('SUB_MEDIA_LOCAL_AUDIO_PLAYER_RELIABILITY_CALLBACK_0900', 0, async function (done) {
        console.info('-----------SUB_MEDIA_LOCAL_AUDIO_PLAYER_RELIABILITY_CALLBACK_0900 is start--------------')
        audioPlayer = await trackSwitchingBase.initAudioPlayer();
        selectedTracksAfterPlaying(audioPlayer, 'RESET_DIFFERENT_TRACKS', done);
        await trackSwitchingBase.getLocalFd(audioPlayer, trackSwitchingBase.AUDIO_SOURCE);
        console.info('-----------SUB_MEDIA_LOCAL_AUDIO_PLAYER_RELIABILITY_CALLBACK_0900 is end--------------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_LOCAL_AUDIO_PLAYER_RELIABILITY_CALLBACK_1000
       * @tc.name      : The audio is released after playing, and the track index inconsistent with the current track
                       is transmitted for track switching
       * @tc.desc      : Audio track switching
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level2
    */
    it('SUB_MEDIA_LOCAL_AUDIO_PLAYER_RELIABILITY_CALLBACK_1000', 0, async function (done) {
        console.info('-----------SUB_MEDIA_LOCAL_AUDIO_PLAYER_RELIABILITY_CALLBACK_1000 is start--------------')
        audioPlayer = await trackSwitchingBase.initAudioPlayer();
        selectedTracksAfterPlaying(audioPlayer, 'RELEASE_DIFFERENT_TRACKS', done);
        await trackSwitchingBase.getLocalFd(audioPlayer, trackSwitchingBase.AUDIO_SOURCE);
        console.info('-----------SUB_MEDIA_LOCAL_AUDIO_PLAYER_RELIABILITY_CALLBACK_1000 is end--------------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_LOCAL_AUDIO_PLAYER_RELIABILITY_CALLBACK_1100
       * @tc.name      : Pause the playback after the audio playback, stop the playback, reset the audio, release the
                         audio, and input the track index that is inconsistent with the current track
                         for track switching
       * @tc.desc      : Audio track switching
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level2
    */
    it('SUB_MEDIA_LOCAL_AUDIO_PLAYER_RELIABILITY_CALLBACK_1100', 0, async function (done) {
        console.info('-----------SUB_MEDIA_LOCAL_AUDIO_PLAYER_RELIABILITY_CALLBACK_1100 is start--------------')
        audioPlayer = await trackSwitchingBase.initAudioPlayer();
        selectedTracksAfterPlaying(audioPlayer, 'COMBINATION_DIFFERENT_TRACKS', done);
        await trackSwitchingBase.getLocalFd(audioPlayer, trackSwitchingBase.AUDIO_SOURCE);
        console.info('-----------SUB_MEDIA_LOCAL_AUDIO_PLAYER_RELIABILITY_CALLBACK_1100 is end--------------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_LOCAL_AUDIO_PLAYER_RELIABILITY_CALLBACK_1200
       * @tc.name      : After the audio is played, input the nonexistent track index (1 smaller than the minimum and 1
                         larger than the maximum) for track switching
       * @tc.desc      : Audio track switching
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level3
    */
    it('SUB_MEDIA_LOCAL_AUDIO_PLAYER_RELIABILITY_CALLBACK_1200', 0, async function (done) {
        console.info('-----------SUB_MEDIA_LOCAL_AUDIO_PLAYER_RELIABILITY_CALLBACK_1200 is start--------------')
        audioPlayer = await trackSwitchingBase.initAudioPlayer();
        selectedTracksAfterPlaying(audioPlayer, 'BOUNDARY_DIFFERENT_TRACKS', done);
        await trackSwitchingBase.getLocalFd(audioPlayer, trackSwitchingBase.AUDIO_SOURCE);
        console.info('-----------SUB_MEDIA_LOCAL_AUDIO_PLAYER_RELIABILITY_CALLBACK_1200 is end--------------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_LOCAL_AUDIO_PLAYER_RELIABILITY_CALLBACK_1300
       * @tc.name      : Get all track information before setting the source
       * @tc.desc      : Audio track switching
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level3
    */
    it('SUB_MEDIA_LOCAL_AUDIO_PLAYER_RELIABILITY_CALLBACK_1300', 0, async function (done) {
        console.info('-----------SUB_MEDIA_LOCAL_AUDIO_PLAYER_RELIABILITY_CALLBACK_1300 is start--------------')
        audioPlayer = await trackSwitchingBase.initAudioPlayer();
        getDescriptionBeforeGetSource(audioPlayer);
        await trackSwitchingBase.getLocalFd(audioPlayer, trackSwitchingBase.AUDIO_SOURCE);
        done();
        console.info('-----------SUB_MEDIA_LOCAL_AUDIO_PLAYER_RELIABILITY_CALLBACK_1300 is end--------------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_LOCAL_AUDIO_PLAYER_RELIABILITY_CALLBACK_1400
       * @tc.name      : Get the current track information before setting the source
       * @tc.desc      : Audio track switching
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level3
    */
    it('SUB_MEDIA_LOCAL_AUDIO_PLAYER_RELIABILITY_CALLBACK_1400', 0, async function (done) {
        console.info('-----------SUB_MEDIA_LOCAL_AUDIO_PLAYER_RELIABILITY_CALLBACK_1400 is start--------------')
        audioPlayer = await trackSwitchingBase.initAudioPlayer();
        getSelectedTrackBeforeGetSource(audioPlayer);
        await trackSwitchingBase.getLocalFd(audioPlayer, trackSwitchingBase.AUDIO_SOURCE);
        done();
        console.info('-----------SUB_MEDIA_LOCAL_AUDIO_PLAYER_RELIABILITY_CALLBACK_1400 is end--------------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_LOCAL_AUDIO_PLAYER_RELIABILITY_CALLBACK_1500
       * @tc.name      : Switch tracks before setting the source
       * @tc.desc      : Audio track switching
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level3
    */
    it('SUB_MEDIA_LOCAL_AUDIO_PLAYER_RELIABILITY_CALLBACK_1500', 0, async function (done) {
        console.info('-----------SUB_MEDIA_LOCAL_AUDIO_PLAYER_RELIABILITY_CALLBACK_1500 is start--------------')
        audioPlayer = await trackSwitchingBase.initAudioPlayer();
        selectedTracksBeforeGetSource(audioPlayer);
        await trackSwitchingBase.getLocalFd(audioPlayer, trackSwitchingBase.AUDIO_SOURCE);
        done();
        console.info('-----------SUB_MEDIA_LOCAL_AUDIO_PLAYER_RELIABILITY_CALLBACK_1500 is end--------------')
    })
})
