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

describe('LocalAudioPlayerFuncPromiseTest', function () {

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

    function getTrackDescriptionData(audioPlayer, flag, done) {
        audioPlayer.getTrackDescription().then((allList) => {
            allDescription = null;
            allDescriptionIndex = [];
            if (allList.length != 0) {
                allDescription = allList;
                console.info('getTrackDescription is success, allDescription is : ' + JSON.stringify(allDescription));
                if (flag == trackSwitchingBase.FLAG1) {
                    expect(true).assertTrue();
                    audioPlayer.play();
                    done();
                } else if (flag == trackSwitchingBase.FLAG2) {
                    for (let i = 0; i < allDescription.length; i++) {
                        allDescriptionIndex.push(i);
                    }
                    console.info('allDescriptionIndex is : ' + JSON.stringify(allDescriptionIndex));
                    expect(true).assertTrue();
                    return allDescriptionIndex;
                } else if (flag == trackSwitchingBase.FLAG3) {
                    expect(true).assertTrue();
                    done();
                }
            } else {
                console.info('getTrackDescription is failed');
                expect().assertFail();
            }
        }).catch((err) => {
            console.info('getTrackDescription is fail, err: ' + err);
            expect().assertFail();
        })
    }

    function getSelectedTracksData(audioPlayer, flag, done) {
        audioPlayer.getSelectedTracks().then((currentList) => {
            if (typeof (currentList) != 'undefined') {
                currentDescription = currentList;
                if (flag == trackSwitchingBase.FLAG1) {
                    console.info('getSelectedTracks is success, currentDescription is: ' + currentDescription);
                    expect(true).assertTrue();
                    audioPlayer.play();
                    done();
                } else {
                    console.info('getSelectedTracks is success, currentDescription is: ' + currentDescription);
                    expect(true).assertTrue();
                    done();
                }
            } else {
                console.info('getSelectedTracks is failed');
                expect().assertFail();
                done();
            }
        }).catch((err) => {
            console.info('getSelectedTracks is fail, err: ' + err);
            expect().assertFail();
            done();
        })
    }

    function getDifferentTracks(allDescriptionIndex, currentDescriptionIndex) {
        let differentTrackArr = [];
        for (let i=0; i<allDescriptionIndex.length; i++) {
            if (currentDescriptionIndex != allDescriptionIndex[i]) {
                differentTrackArr.push(allDescriptionIndex[i]);
            }
        }
        console.info('differentTracks is : ' + differentTrackArr);
        return differentTrackArr;
    }

    function selectTrack(audioPlayer, index) {
        audioPlayer.selectTrack(index).then((data) => {
            selectTrackData = data;
            console.info('track switching succeeded, selectTrackData: ' + selectTrackData);
            expect(data == 0).assertTrue();
        }).catch((err) => {
            console.info('track switching failed, err: ' + err);
            expect().assertFail();
        })
    }

    function getDescriptionBeforePlaying(audioPlayer, done) {
        audioPlayer.on('dataLoad', () => {
            console.info('dataLoad state.');
            getTrackDescriptionData(audioPlayer, trackSwitchingBase.FLAG1, done);
        })
    }

    function getSelectedTracksBeforePlaying(audioPlayer, done) {
        audioPlayer.on('dataLoad', () => {
            console.info('dataLoad state.');
            getSelectedTracksData(audioPlayer, trackSwitchingBase.FLAG1, done);
        })
    }

    function selectedTracksBeforePlaying(audioPlayer, step, done){
        audioPlayer.on('dataLoad', () => {
            console.info('dataLoad end.');
            allDescriptionIndex = getTrackDescriptionData(audioPlayer, trackSwitchingBase.FLAG2, done);

            audioPlayer.getSelectedTracks().then((currentList) => {
                console.info('getSelectedTracks is success, data is : ' + JSON.stringify(currentList));
                currentDescriptionIndex = currentList[0];
                switch (step) {
                    case 'SAME_AND_DIFFERENT_TRACKS_TWICE':
                        console.info('step is SAME_AND_DIFFERENT_TRACKS_TWICE');
                        differentTracks = [];
                        differentTracks = getDifferentTracks(allDescriptionIndex, currentDescriptionIndex);
                        selectTrack(audioPlayer, currentDescriptionIndex);
                        selectTrack(audioPlayer, currentDescriptionIndex);
                        selectTrack(audioPlayer, differentTracks[0]);
                        selectTrack(audioPlayer, differentTracks[1]);
                        setTimeout(function() {
                            audioPlayer.play();
                            done();
                        }, 1000)
                    break;
                    case 'SAME_DIFFERENT_TRACKS':
                        console.info('step is SAME_DIFFERENT_TRACKS');
                        differentTracks = [];
                        differentTracks = getDifferentTracks(allDescriptionIndex, currentDescriptionIndex);
                        selectTrack(audioPlayer, currentDescriptionIndex);
                        selectTrack(audioPlayer, differentTracks[0]);
                        setTimeout(function() {
                            audioPlayer.play();
                            done();
                        }, 1000)
                        break;
                    case 'DIFFERENT_TRACKS':
                        console.info('step is DIFFERENT_TRACKS');
                        differentTracks = [];
                        differentTracks = getDifferentTracks(allDescriptionIndex, currentDescriptionIndex);
                        selectTrack(audioPlayer, differentTracks[0]);
                        setTimeout(function() {
                            audioPlayer.play();
                            done();
                        }, 1000)
                        break;
                    default:
                        console.info('step is BOUNDARY_TRACKS');
                        selectTrack(audioPlayer, allDescriptionIndex[0]);
                        selectTrack(audioPlayer, allDescriptionIndex[allDescriptionIndex.length-1]);
                        setTimeout(function() {
                            audioPlayer.play();
                            done();
                        }, 1000)
                        break;
                }
            }).catch((err) => {
                console.info('getSelectedTracks is fail, err: ' + err);
                expect().assertFail();
            })
        })
    }

    function getDescriptionAfterPlaying(audioPlayer, step, done) {
        audioPlayer.on('dataLoad', () => {
            console.info('dataLoad start.');
            audioPlayer.play();
        })
        switch(step) {
            case 'PLAY':
                console.info('step is PLAY');
                audioPlayer.on('play', () => {
                    getTrackDescriptionData(audioPlayer, trackSwitchingBase.FLAG3, done);
                })
            break;
            case 'PAUSE':
                console.info('step is PAUSE');
                audioPlayer.on('play', () => {
                    console.info('play state.');
                    audioPlayer.pause();
                })
                audioPlayer.on('pause', () => {
                    console.info('pause state.');
                    getTrackDescriptionData(audioPlayer, trackSwitchingBase.FLAG3, done);
                })
                break;
            case 'STOP':
                console.info('step is STOP')
                audioPlayer.on('play', () => {
                    console.info('play state.');
                    audioPlayer.stop();
                })
                audioPlayer.on('stop', () => {
                    console.info('stop state.');
                    getTrackDescriptionData(audioPlayer, trackSwitchingBase.FLAG3, done);
                })
                break;
            case 'SEEK_50':
                console.info('step is SEEK_50')
                audioPlayer.on('timeUpdate', (seekDoneTime) => {
                    console.info('timeUpdate state.');
                    if (typeof (seekDoneTime) == 'undefined') {
                        console.info(`case seek filed,errcode is ${seekDoneTime}`);
                        audioPlayer.release();
                        expect().assertFail();
                        done();
                    } else {
                        getTrackDescriptionData(audioPlayer, trackSwitchingBase.FLAG3, done);
                    }
                })
                audioPlayer.on('play', () => {
                    console.info('play state.');
                    console.info('seek state.');
                    audioPlayer.seek(Math.floor(audioPlayer.duration / 2));
                    console.info('audioPlayer.duration is : ' + Math.floor(audioPlayer.duration / 2));
                })
                break;
            case 'SEEK_50_0':
                console.info('step is SEEK_50_0')
                audioPlayer.on('timeUpdate', (seekDoneTime) => {
                    console.info('timeUpdate state.');
                    if (typeof (seekDoneTime) == 'undefined') {
                        console.info(`case seek filed,errcode is ${seekDoneTime}`);
                        audioPlayer.release();
                        expect().assertFail();
                        return;
                    }else{
                        audioPlayer.on('timeUpdate', (seekDoneTime2)=> {
                            console.info('timeUpdate2 state.');
                            if (typeof (seekDoneTime2) == 'undefined') {
                                console.info(`case seek filed,errcode is ${seekDoneTime2}`);
                                audioPlayer.release();
                                expect().assertFail();
                                done();
                            } else {
                                getTrackDescriptionData(audioPlayer, trackSwitchingBase.FLAG3, done);
                            }
                        })
                        audioPlayer.seek(0);
                        console.info('seek2 state.');
                    }
                })
                audioPlayer.on('play', () => {
                    console.info('play state.');
                    console.info('seek state.');
                    audioPlayer.seek(Math.floor(audioPlayer.duration / 2));
                    console.info('audioPlayer.duration is : ' + Math.floor(audioPlayer.duration / 2));
                })
                break;
            case 'SEEK_50_30':
                console.info('step is SEEK_50_30');
                audioPlayer.on('timeUpdate', (seekDoneTime) => {
                    console.info('timeUpdate state.');
                    if (typeof (seekDoneTime) == 'undefined') {
                        console.info(`case seek filed,errcode is ${seekDoneTime}`);
                        audioPlayer.release();
                        expect().assertFail();
                        return;
                    }else{
                        audioPlayer.on('timeUpdate', (seekDoneTime2) => {
                            console.info('timeUpdate2 state.');
                            if (typeof (seekDoneTime2) == 'undefined') {
                                console.info(`case seek filed,errcode is ${seekDoneTime2}`);
                                audioPlayer.release();
                                expect().assertFail();
                                done();
                            }else{
                                getTrackDescriptionData(audioPlayer, trackSwitchingBase.FLAG3, done);
                            }
                        })
                        console.info('seek2 state.');
                        audioPlayer.seek(Math.floor(audioPlayer.duration / 10 * 3));
                        console.info('audioPlayer.duration is : ' + Math.floor(audioPlayer.duration / 10 * 3));
                    }
                })
                audioPlayer.on('play', () => {
                    console.info('play state.');
                    console.info('seek state.');
                    audioPlayer.seek(Math.floor(audioPlayer.duration / 2));
                    console.info('audioPlayer.duration is : ' + Math.floor(audioPlayer.duration / 2));
                })
                break;
            case 'SEEK_50_80':
                console.info('step is SEEK_50_80')
                audioPlayer.on('timeUpdate', (seekDoneTime) => {
                    console.info('timeUpdate state.');
                    if (typeof (seekDoneTime) == 'undefined') {
                        console.info(`case seek filed,errcode is ${seekDoneTime}`);
                        audioPlayer.release();
                        expect().assertFail();
                        return;
                    } else {
                        audioPlayer.on('timeUpdate', (seekDoneTime2) => {
                            console.info('timeUpdate2 state.');
                            if (typeof (seekDoneTime2) == 'undefined') {
                                console.info(`case seek filed,errcode is ${seekDoneTime2}`);
                                audioPlayer.release();
                                expect().assertFail();
                                done();
                            } else {
                                getTrackDescriptionData(audioPlayer, trackSwitchingBase.FLAG3, done);
                            }
                        })
                        console.info('seek2 state.');
                        audioPlayer.seek(Math.floor(audioPlayer.duration / 10 * 8));
                        console.info('audioPlayer.duration is : ' + Math.floor(audioPlayer.duration / 10 * 8));
                    }
                })
                audioPlayer.on('play', () => {
                    console.info('play state.');
                    console.info('seek state.');
                    audioPlayer.seek(Math.floor(audioPlayer.duration / 2));
                    console.info('audioPlayer.duration is : ' + Math.floor(audioPlayer.duration / 2));
                })
                break;
            default:
                console.info('step is SEEK_50_100');
                audioPlayer.on('timeUpdate', (seekDoneTime) => {
                    console.info('timeUpdate state.');
                    if (typeof (seekDoneTime) == 'undefined') {
                        console.info(`case seek filed,errcode is ${seekDoneTime}`);
                        audioPlayer.release();
                        expect().assertFail();
                        return;
                    } else {
                        audioPlayer.on('timeUpdate', (seekDoneTime2)=> {
                            console.info('timeUpdate2 state.');
                            if (typeof (seekDoneTime2) == 'undefined') {
                                console.info(`case seek filed,errcode is ${seekDoneTime2}`);
                                audioPlayer.release();
                                expect().assertFail();
                                done();
                            } else {
                                getTrackDescriptionData(audioPlayer, trackSwitchingBase.FLAG3, done);
                            }
                        })
                        console.info('seek2 state.');
                        audioPlayer.seek(Math.floor(audioPlayer.duration));
                        console.info('audioPlayer.duration is : ' + Math.floor(audioPlayer.duration));
                    }
                })
                audioPlayer.on('play', () => {
                    console.info('play state.');
                    console.info('seek state.');
                    audioPlayer.seek(Math.floor(audioPlayer.duration / 2));
                    console.info('audioPlayer.duration is : ' + Math.floor(audioPlayer.duration / 2));
                })
                break;
        }
    }

    function getSelectedTracksAfterPlaying(audioPlayer, step, done) {
        audioPlayer.on('dataLoad', () => {
            console.info('dataLoad state.');
            audioPlayer.play();
        })

        switch(step) {
            case 'PLAY':
                console.info('step is PLAY')
                audioPlayer.on('play', () => {
                    console.info('play state.');
                    getSelectedTracksData(audioPlayer, trackSwitchingBase.FLAG2, done);
                })
                break;
            case 'PAUSE':
                console.info('step is PAUSE')
                audioPlayer.on('play', () => {
                    console.info('play state.');
                    audioPlayer.pause();
                })
                audioPlayer.on('pause', () => {
                    console.info('pause state.');
                    getSelectedTracksData(audioPlayer, trackSwitchingBase.FLAG2, done);
                })
                break;
            case 'STOP':
                console.info('step is STOP');
                audioPlayer.on('play', () => {
                    console.info('play state.');
                    audioPlayer.stop();
                })
                audioPlayer.on('stop', () => {
                    console.info('stop state.');
                    getSelectedTracksData(audioPlayer, trackSwitchingBase.FLAG2, done);
                })
                break;
            case 'SEEK_50':
                console.info('step is SEEK_50');
                audioPlayer.on('timeUpdate', (seekDoneTime) => {
                    console.info('timeUpdate state.');
                    if (typeof (seekDoneTime) == 'undefined') {
                        console.info(`case seek filed,errcode is ${seekDoneTime}`);
                        audioPlayer.release();
                        expect().assertFail();
                        done();
                    } else {
                        getSelectedTracksData(audioPlayer, trackSwitchingBase.FLAG2, done);
                    }
                })
                audioPlayer.on('play', () => {
                    console.info('play state.');
                    console.info('seek state.');
                    audioPlayer.seek(Math.floor(audioPlayer.duration / 2));
                    console.info('audioPlayer.duration is : ' + Math.floor(audioPlayer.duration / 2));
                })
                break;
            case 'SEEK_50_0':
                console.info('step is SEEK_50_0');
                audioPlayer.on('timeUpdate', (seekDoneTime) => {
                    console.info('timeUpdate state.');
                    if (typeof (seekDoneTime) == 'undefined') {
                        console.info(`case seek filed,errcode is ${seekDoneTime}`);
                        audioPlayer.release();
                        expect().assertFail();
                        return;
                    } else {
                        audioPlayer.on('timeUpdate', (seekDoneTime2) => {
                            console.info('timeUpdate2 state.');
                            if (typeof (seekDoneTime2) == 'undefined') {
                                console.info(`case seek filed,errcode is ${seekDoneTime2}`);
                                audioPlayer.release();
                                expect().assertFail();
                                done();
                            } else {
                                getSelectedTracksData(audioPlayer, trackSwitchingBase.FLAG2, done);
                            }
                        })
                        audioPlayer.seek(0);
                        console.info('seek2 state.');
                    }
                })
                audioPlayer.on('play', () => {
                    console.info('play state.');
                    console.info('seek state.');
                    audioPlayer.seek(Math.floor(audioPlayer.duration / 2));
                    console.info('audioPlayer.duration is : ' + Math.floor(audioPlayer.duration / 2));
                })
                break;
            case 'SEEK_50_30':
                console.info('step is SEEK_50_30');
                audioPlayer.on('timeUpdate', (seekDoneTime) => {
                    console.info('timeUpdate state.');
                    if (typeof (seekDoneTime) == 'undefined') {
                        console.info(`case seek filed,errcode is ${seekDoneTime}`);
                        audioPlayer.release();
                        expect().assertFail();
                        return;
                    } else {
                        audioPlayer.on('timeUpdate', (seekDoneTime2) => {
                            console.info('timeUpdate2 state.');
                            if (typeof (seekDoneTime2) == 'undefined') {
                                console.info(`case seek filed,errcode is ${seekDoneTime2}`);
                                audioPlayer.release();
                                expect().assertFail();
                                done();
                            } else {
                                getSelectedTracksData(audioPlayer, trackSwitchingBase.FLAG2, done);
                            }
                        })
                        console.info('seek2 state.');
                        audioPlayer.seek(Math.floor(audioPlayer.duration / 10 * 3));
                        console.info('audioPlayer.duration is : ' + Math.floor(audioPlayer.duration / 10 * 3));
                    }
                })
                audioPlayer.on('play', () => {
                    console.info('play state.');
                    console.info('seek state.');
                    audioPlayer.seek(Math.floor(audioPlayer.duration / 2));
                    console.info('audioPlayer.duration is : ' + Math.floor(audioPlayer.duration / 2));
                })
                break;
            case 'SEEK_50_80':
                console.info('step is SEEK_50_80');
                audioPlayer.on('timeUpdate', (seekDoneTime) => {
                    console.info('timeUpdate state.');
                    if (typeof (seekDoneTime) == 'undefined') {
                        console.info(`case seek filed,errcode is ${seekDoneTime}`);
                        audioPlayer.release();
                        expect().assertFail();
                        return;
                    } else {
                        audioPlayer.on('timeUpdate', (seekDoneTime2) => {
                            console.info('timeUpdate2 state.');
                            if (typeof (seekDoneTime2) == 'undefined') {
                                console.info(`case seek filed,errcode is ${seekDoneTime2}`);
                                audioPlayer.release();
                                expect().assertFail();
                                done();
                                return;
                            } else {
                                getSelectedTracksData(audioPlayer, trackSwitchingBase.FLAG2, done);
                            }
                        })
                        console.info('seek2 state.');
                        audioPlayer.seek(Math.floor(audioPlayer.duration / 10 * 8));
                        console.info('audioPlayer.duration is : ' + Math.floor(audioPlayer.duration / 10 * 8));
                    }
                })
                audioPlayer.on('play', () => {
                    console.info('play state.');
                    console.info('seek state.');
                    audioPlayer.seek(Math.floor(audioPlayer.duration / 2));
                    console.info('audioPlayer.duration is : ' + Math.floor(audioPlayer.duration / 2));
                })
                break;
            default:
                console.info('step is SEEK_50_100');
                audioPlayer.on('timeUpdate', (seekDoneTime) => {
                    console.info('timeUpdate state.');
                    if (typeof (seekDoneTime) == 'undefined') {
                        console.info(`case seek filed,errcode is ${seekDoneTime}`);
                        audioPlayer.release();
                        expect().assertFail();
                        return;
                    }else{
                        audioPlayer.on('timeUpdate', (seekDoneTime2) => {
                            console.info('timeUpdate2 state.');
                            if (typeof (seekDoneTime2) == 'undefined') {
                                console.info(`case seek filed,errcode is ${seekDoneTime2}`);
                                audioPlayer.release();
                                expect().assertFail();
                                done();
                            } else {
                                getSelectedTracksData(audioPlayer, trackSwitchingBase.FLAG2, done);
                            }
                        })
                        console.info('seek2 state.');
                        audioPlayer.seek(Math.floor(audioPlayer.duration));
                        console.info('audioPlayer.duration is : ' + Math.floor(audioPlayer.duration));
                    }
                })
                audioPlayer.on('play', () => {
                    console.info('play state.');
                    console.info('seek state.');
                    audioPlayer.seek(Math.floor(audioPlayer.duration / 2));
                    console.info('audioPlayer.duration is : ' + Math.floor(audioPlayer.duration / 2));
                })
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
            console.info('play state.');
            allDescriptionIndex = [];
            allDescriptionIndex = getTrackDescriptionData(audioPlayer, trackSwitchingBase.FLAG2, done);

            audioPlayer.getSelectedTracks().then((currentList) => {
                currentDescriptionIndex = currentList[0];
                console.info('getSelectedTracks is success, currentDescriptionIndex is : ' + currentDescriptionIndex);

                switch (step) {
                    case 'PLAY_SAME_AND_DIFFERENT_TRACKS_TWICE':
                        console.info('step is PLAY_SAME_AND_DIFFERENT_TRACKS_TWICE');
                        differentTracks = [];
                        differentTracks = getDifferentTracks(allDescriptionIndex, currentDescriptionIndex);
                        selectTrack(audioPlayer, currentDescriptionIndex);
                        selectTrack(audioPlayer, currentDescriptionIndex);
                        selectTrack(audioPlayer, differentTracks[0]);
                        selectTrack(audioPlayer, differentTracks[1]);
                        setTimeout(function() {
                            done();
                        }, 1000)
                        break;
                    case 'PLAY_DIFFERENT_TRACKS':
                        console.info('step is PLAY_DIFFERENT_TRACKS');
                        differentTracks = [];
                        differentTracks = getDifferentTracks(allDescriptionIndex, currentDescriptionIndex);
                        selectTrack(audioPlayer, differentTracks[0]);
                        setTimeout(function() {
                            done();
                        }, 1000)
                        break;
                    case 'PAUSE_DIFFERENT_TRACKS':
                        console.info('step is PAUSE_DIFFERENT_TRACKS');
                        differentTracks = [];
                        audioPlayer.pause();
                        audioPlayer.on('pause', () => {
                            console.info('pause state.');
                            differentTracks = [];
                            differentTracks = getDifferentTracks(allDescriptionIndex, currentDescriptionIndex);
                            selectTrack(audioPlayer, differentTracks[0]);
                            setTimeout(function() {
                                done();
                            }, 1000)
                        })
                        break;
                    case 'SEEK_50_DIFFERENT_TRACKS':
                        console.info('step is SEEK_50_DIFFERENT_TRACKS');
                        differentTracks = [];
                        audioPlayer.on('timeUpdate', (seekDoneTime) => {
                            console.info('timeUpdate state.');
                            if (typeof (seekDoneTime) == 'undefined') {
                                console.info(`case seek filed,errcode is ${seekDoneTime}`);
                                audioPlayer.release();
                                expect().assertFail();
                                done();
                            } else {
                                differentTracks = [];
                                differentTracks = getDifferentTracks(allDescriptionIndex, currentDescriptionIndex);
                                selectTrack(audioPlayer, differentTracks[0]);
                                setTimeout(function() {
                                    done();
                                }, 1000)
                            }
                        })
                        console.info('play state.');
                        console.info('seek state.');
                        audioPlayer.seek(Math.floor(audioPlayer.duration / 2));
                        console.info('audioPlayer.duration is : ' + Math.floor(audioPlayer.duration / 2));
                        break;
                    case 'SEEK_50_0_DIFFERENT_TRACKS':
                        console.info('step is SEEK_50_0_DIFFERENT_TRACKS');
                        differentTracks = [];
                        audioPlayer.on('timeUpdate', (seekDoneTime) => {
                            console.info('timeUpdate state.');
                            if (typeof (seekDoneTime) == 'undefined') {
                                console.info(`case seek filed,errcode is ${seekDoneTime}`);
                                audioPlayer.release();
                                expect().assertFail();
                                return;
                            } else {
                                audioPlayer.on('timeUpdate', (seekDoneTime2) => {
                                    console.info('timeUpdate2 state.');
                                    if (typeof (seekDoneTime2) == 'undefined') {
                                        console.info(`case seek filed,errcode is ${seekDoneTime2}`);
                                        audioPlayer.release();
                                        expect().assertFail();
                                        done();
                                    } else {
                                        differentTracks = [];
                                        differentTracks = getDifferentTracks
                                        (allDescriptionIndex, currentDescriptionIndex);
                                        selectTrack(audioPlayer, differentTracks[0]);
                                        setTimeout(function() {
                                            done();
                                        }, 1000)
                                    }
                                })
                                audioPlayer.seek(0);
                                console.info('seek2 state.');
                            }
                        })
                        console.info('play state.');
                        console.info('seek state.');
                        audioPlayer.seek(Math.floor(audioPlayer.duration / 2));
                        console.info('audioPlayer.duration is : ' + Math.floor(audioPlayer.duration / 2));
                        break;
                    case 'SEEK_50_30_DIFFERENT_TRACKS':
                        console.info('step is SEEK_50_30_DIFFERENT_TRACKS');
                        differentTracks = [];
                        audioPlayer.on('timeUpdate', (seekDoneTime) => {
                            console.info('timeUpdate state.');
                            if (typeof (seekDoneTime) == 'undefined') {
                                console.info(`case seek filed,errcode is ${seekDoneTime}`);
                                audioPlayer.release();
                                expect().assertFail();
                                return;
                            } else {
                                audioPlayer.on('timeUpdate', (seekDoneTime2)=> {
                                    console.info('timeUpdate2 state.');
                                    if (typeof (seekDoneTime2) == 'undefined') {
                                        console.info(`case seek filed,errcode is ${seekDoneTime2}`);
                                        audioPlayer.release();
                                        expect().assertFail();
                                        done();
                                        return;
                                    }else{
                                        differentTracks = []
                                        differentTracks = getDifferentTracks
                                        (allDescriptionIndex, currentDescriptionIndex);
                                        selectTrack(audioPlayer, differentTracks[0]);
                                        setTimeout(function() {
                                            done();
                                        }, 1000)
                                    }
                                })
                                console.info('seek2 state.');
                                audioPlayer.seek(Math.floor(audioPlayer.duration / 10 * 3));
                                console.info('audioPlayer.duration is : ' + Math.floor(audioPlayer.duration / 10 * 3));
                            }
                        })
                        console.info('play state.');
                        console.info('seek state.');
                        audioPlayer.seek(Math.floor(audioPlayer.duration / 2));
                        console.info('audioPlayer.duration is : ' + Math.floor(audioPlayer.duration / 2));
                        break;
                    case 'SEEK_50_80_DIFFERENT_TRACKS':
                        console.info('step is SEEK_50_80_DIFFERENT_TRACKS');
                        differentTracks = [];
                        audioPlayer.on('timeUpdate', (seekDoneTime) => {
                            console.info('timeUpdate state.');
                            if (typeof (seekDoneTime) == 'undefined') {
                                console.info(`case seek filed,errcode is ${seekDoneTime}`);
                                audioPlayer.release();
                                expect().assertFail();
                                return;
                            } else {
                                audioPlayer.on('timeUpdate', (seekDoneTime2) => {
                                    console.info('timeUpdate2 state.');
                                    if (typeof (seekDoneTime2) == 'undefined') {
                                        console.info(`case seek filed,errcode is ${seekDoneTime2}`);
                                        audioPlayer.release();
                                        expect().assertFail();
                                        done();
                                    } else {
                                        differentTracks = [];
                                        differentTracks = getDifferentTracks
                                        (allDescriptionIndex, currentDescriptionIndex);
                                        selectTrack(audioPlayer, differentTracks[0]);
                                        setTimeout(function() {
                                            done();
                                        }, 1000)
                                    }
                                })
                                console.info('seek2 state.');
                                audioPlayer.seek(Math.floor(audioPlayer.duration / 10 * 8));
                                console.info('audioPlayer.duration is : ' + Math.floor(audioPlayer.duration / 10 * 8));
                            }
                        })
                        console.info('play state.');
                        console.info('seek state.');
                        audioPlayer.seek(Math.floor(audioPlayer.duration / 2));
                        console.info('audioPlayer.duration is : ' + Math.floor(audioPlayer.duration / 2));
                        break;
                    case 'SEEK_50_100_DIFFERENT_TRACKS':
                        console.info('step is SEEK_50_100_DIFFERENT_TRACKS');
                        differentTracks = [];
                        audioPlayer.on('timeUpdate', (seekDoneTime) => {
                            console.info('timeUpdate state.');
                            if (typeof (seekDoneTime) == 'undefined') {
                                console.info(`case seek filed,errcode is ${seekDoneTime}`);
                                audioPlayer.release();
                                expect().assertFail();
                                return;
                            } else {
                                audioPlayer.on('timeUpdate', (seekDoneTime2) => {
                                    console.info('timeUpdate2 state.');
                                    if (typeof (seekDoneTime2) == 'undefined') {
                                        console.info(`case seek filed,errcode is ${seekDoneTime2}`);
                                        audioPlayer.release();
                                        expect().assertFail();
                                        done();
                                    } else {
                                        differentTracks = [];
                                        differentTracks = getDifferentTracks
                                        (allDescriptionIndex, currentDescriptionIndex);
                                        selectTrack(audioPlayer, differentTracks[0]);
                                        setTimeout(function() {
                                            done();
                                        }, 1000)
                                    }
                                })
                                console.info('seek2 state.');
                                audioPlayer.seek(Math.floor(audioPlayer.duration));
                                console.info('audioPlayer.duration is : ' + Math.floor(audioPlayer.duration));
                            }
                        })
                        console.info('play state.');
                        console.info('seek state.');
                        audioPlayer.seek(Math.floor(audioPlayer.duration / 2));
                        console.info('audioPlayer.duration is : ' + Math.floor(audioPlayer.duration / 2));
                        break;
                    default:
                        console.info('step is PLAY_BOUNDARY_TRACKS');
                        selectTrack(audioPlayer, allDescriptionIndex[0]);
                        selectTrack(audioPlayer, allDescriptionIndex[allDescriptionIndex.length-1]);
                        setTimeout(function(){
                            done();
                        }, 1000)
                        break;
                }
            }).catch((err) => {
                console.info('getSelectedTracks is fail, err: ' + err);
                expect().assertFail();
            })
        })
    }

    /* *
       * @tc.number    : SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_0100
       * @tc.name      : Obtain all audio track information before audio playback
       * @tc.desc      : Audio track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level0
    */
    it('SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_0100', 0, async function (done) {
        console.info('-----------SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_0100 is start--------------')
        audioPlayer = await trackSwitchingBase.initAudioPlayer();
        getDescriptionBeforePlaying(audioPlayer, done);
        await trackSwitchingBase.getLocalFd(audioPlayer, trackSwitchingBase.AUDIO_SOURCE);
        console.info('-----------SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_0100 is end--------------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_0200
       * @tc.name      : Obtain the current audio track information before audio playback
       * @tc.desc      : Audio track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level0
    */
    it('SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_0200', 0, async function (done) {
        console.info('-----------SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_0200 is start--------------')
        audioPlayer = await trackSwitchingBase.initAudioPlayer();
        getSelectedTracksBeforePlaying(audioPlayer, done);
        await trackSwitchingBase.getLocalFd(audioPlayer, trackSwitchingBase.AUDIO_SOURCE);
        console.info('-----------SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_0200 is end--------------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_0300
       * @tc.name      : Before audio playback, switch tracks that are consistent with and inconsistent with
                         the current track index for many times
       * @tc.desc      : Audio track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level1
    */
    it('SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_0300', 0, async function (done) {
        console.info('-----------SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_0300 is start--------------')
        audioPlayer = await trackSwitchingBase.initAudioPlayer();
        selectedTracksBeforePlaying(audioPlayer, 'SAME_AND_DIFFERENT_TRACKS_TWICE', done);
        await trackSwitchingBase.getLocalFd(audioPlayer, trackSwitchingBase.AUDIO_SOURCE);
        console.info('-----------SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_0300 is end--------------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_0400
       * @tc.name      : Before audio playback, input the track index according to the
                         boundary value for track switching
       * @tc.desc      : Audio track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level2
    */
    it('SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_0400', 0, async function (done) {
        console.info('-----------SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_0400 is start--------------')
        audioPlayer = await trackSwitchingBase.initAudioPlayer();
        selectedTracksBeforePlaying(audioPlayer, 'BOUNDARY_TRACKS', done);
        await trackSwitchingBase.getLocalFd(audioPlayer, trackSwitchingBase.AUDIO_SOURCE);
        console.info('-----------SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_0400 is end--------------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_0500
       * @tc.name      : Audio track switching of different encoding and decoding formats before audio playback
       * @tc.desc      : Audio track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level2
    */
    it('SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_0500', 0, async function (done) {
        console.info('-----------SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_0500 is start--------------')
        audioPlayer = await trackSwitchingBase.initAudioPlayer();
        selectedTracksBeforePlaying(audioPlayer, 'DIFFERENT_TRACKS', done);
        await trackSwitchingBase.getLocalFd(audioPlayer, trackSwitchingBase.AUDIO_DIFFERENT_CODES_SOURCE);
        console.info('-----------SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_0500 is end--------------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_0600
       * @tc.name      : Before audio playback, track switching of audio files in AAC format
       * @tc.desc      : Audio track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level2
    */
    it('SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_0600', 0, async function (done) {
        console.info('-----------SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_0600 is start--------------')
        audioPlayer = await trackSwitchingBase.initAudioPlayer();
        selectedTracksBeforePlaying(audioPlayer, 'SAME_DIFFERENT_TRACKS', done);
        await trackSwitchingBase.getLocalFd(audioPlayer, trackSwitchingBase.AAC_CODES_SOURCE);
        console.info('-----------SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_0600 is end--------------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_0700
       * @tc.name      : Audio track switching of MP3 format audio file before audio playback
       * @tc.desc      : Audio track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level2
    */
    it('SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_0700', 0, async function (done) {
        console.info('-----------SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_0700 is start--------------')
        audioPlayer = await trackSwitchingBase.initAudioPlayer();
        selectedTracksBeforePlaying(audioPlayer, 'SAME_DIFFERENT_TRACKS', done);
        await trackSwitchingBase.getLocalFd(audioPlayer, trackSwitchingBase.MP3_CODES_SOURCE);
        console.info('-----------SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_0700 is end--------------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_0800
       * @tc.name      : Before audio playback, audio files with 16 tracks are switched
       * @tc.desc      : Audio track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level2
    */
    it('SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_0800', 0, async function (done) {
        console.info('-----------SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_0800 is start--------------')
        audioPlayer = await trackSwitchingBase.initAudioPlayer();
        selectedTracksBeforePlaying(audioPlayer, 'SAME_DIFFERENT_TRACKS', done);
        await trackSwitchingBase.getLocalFd(audioPlayer, trackSwitchingBase.AAC_CODES_16TRACK);
        console.info('-----------SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_0800 is end--------------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_0900
       * @tc.name      : Obtain all audio track information after audio playback
       * @tc.desc      : Audio track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level0
    */
    it('SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_0900', 0, async function (done) {
        console.info('-----------SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_0900 is start--------------')
        audioPlayer = await trackSwitchingBase.initAudioPlayer();
        getDescriptionAfterPlaying(audioPlayer, 'PLAY', done);
        await trackSwitchingBase.getLocalFd(audioPlayer, trackSwitchingBase.AUDIO_SOURCE);
        console.info('-----------SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_0900 is end--------------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_1000
       * @tc.name      : Pause playback after audio playback, test gettrackdescription
       * @tc.desc      : Audio track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level1
    */
    it('SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_1000', 0, async function (done) {
        console.info('-----------SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_1000 is start--------------')
        audioPlayer = await trackSwitchingBase.initAudioPlayer();
        getDescriptionAfterPlaying(audioPlayer, 'PAUSE', done);
        await trackSwitchingBase.getLocalFd(audioPlayer, trackSwitchingBase.AUDIO_SOURCE);
        console.info('-----------SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_1000 is end--------------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_1100
       * @tc.name      : Stop playing after audio playing, test gettrackdescription
       * @tc.desc      : Audio track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level1
    */
    it('SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_1100', 0, async function (done) {
        console.info('-----------SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_1100 is start--------------')
        audioPlayer = await trackSwitchingBase.initAudioPlayer();
        getDescriptionAfterPlaying(audioPlayer, 'STOP', done);
        await trackSwitchingBase.getLocalFd(audioPlayer, trackSwitchingBase.AUDIO_SOURCE);
        console.info('-----------SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_1100 is end--------------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_1200
       * @tc.name      : After audio playback, seek to 50% of the progress bar to obtain all audio track information
       * @tc.desc      : Audio track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level1
    */
    it('SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_1200', 0, async function (done) {
        console.info('-----------SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_1200 is start--------------')
        audioPlayer = await trackSwitchingBase.initAudioPlayer();
        getDescriptionAfterPlaying(audioPlayer, 'SEEK_50', done);
        await trackSwitchingBase.getLocalFd(audioPlayer, trackSwitchingBase.AUDIO_SOURCE);
        console.info('-----------SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_1200 is end--------------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_1300
       * @tc.name      : After audio playback, seek to 50% of the progress bar, and then seek to 0% of the progress bar
                         to obtain all audio track information
       * @tc.desc      : Audio track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level1
    */
    it('SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_1300', 0, async function (done) {
        console.info('-----------SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_1300 is start--------------')
        audioPlayer = await trackSwitchingBase.initAudioPlayer();
        getDescriptionAfterPlaying(audioPlayer, 'SEEK_50_0', done);
        await trackSwitchingBase.getLocalFd(audioPlayer, trackSwitchingBase.AUDIO_SOURCE);
        console.info('-----------SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_1300 is end--------------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_1400
       * @tc.name      : After audio playback, seek to 50% of the progress bar, and then seek to 30% of the progress
                         bar to obtain all audio track information
       * @tc.desc      : Audio track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level1
    */
    it('SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_1400', 0, async function (done) {
        console.info('-----------SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_1400 is start--------------')
        audioPlayer = await trackSwitchingBase.initAudioPlayer();
        getDescriptionAfterPlaying(audioPlayer, 'SEEK_50_30', done);
        await trackSwitchingBase.getLocalFd(audioPlayer, trackSwitchingBase.AUDIO_SOURCE);
        console.info('-----------SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_1400 is end--------------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_1500
       * @tc.name      : After audio playback, seek to 50% of the progress bar, and then seek to 80% of the progress
                         bar to obtain all audio track information
       * @tc.desc      : Audio track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level1
    */
    it('SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_1500', 0, async function (done) {
        console.info('-----------SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_1500 is start--------------')
        audioPlayer = await trackSwitchingBase.initAudioPlayer();
        getDescriptionAfterPlaying(audioPlayer, 'SEEK_50_80', done);
        await trackSwitchingBase.getLocalFd(audioPlayer, trackSwitchingBase.AUDIO_SOURCE);
        console.info('-----------SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_1500 is end--------------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_1600
       * @tc.name      : After audio playback, seek to 50% of the progress bar, and then seek to 100% of the progress
                         bar to obtain all audio track information
       * @tc.desc      : Audio track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level1
    */
    it('SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_1600', 0, async function (done) {
        console.info('-----------SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_1600 is start--------------')
        audioPlayer = await trackSwitchingBase.initAudioPlayer();
        getDescriptionAfterPlaying(audioPlayer, 'SEEK_50_100', done);
        await trackSwitchingBase.getLocalFd(audioPlayer, trackSwitchingBase.AUDIO_SOURCE);
        console.info('-----------SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_1600 is end--------------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_1700
       * @tc.name      : Test getselectedtracks after audio playback
       * @tc.desc      : Audio track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level0
    */
    it('SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_1700', 0, async function (done) {
        console.info('-----------SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_1700 is start--------------')
        audioPlayer = await trackSwitchingBase.initAudioPlayer();
        getSelectedTracksAfterPlaying(audioPlayer, 'PLAY', done);
        await trackSwitchingBase.getLocalFd(audioPlayer, trackSwitchingBase.AUDIO_SOURCE);
        console.info('-----------SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_1700 is end--------------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_1800
       * @tc.name      : Pause the playback after audio playback to obtain the current track information
       * @tc.desc      : Audio track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level1
    */
    it('SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_1800', 0, async function (done) {
        console.info('-----------SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_1800 is start--------------')
        audioPlayer = await trackSwitchingBase.initAudioPlayer();
        getSelectedTracksAfterPlaying(audioPlayer, 'PAUSE', done);
        await trackSwitchingBase.getLocalFd(audioPlayer, trackSwitchingBase.AUDIO_SOURCE);
        console.info('-----------SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_1800 is end--------------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_1900
       * @tc.name      : Stop playing after the audio is played to obtain the current track information
       * @tc.desc      : Audio track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level1
    */
    it('SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_1900', 0, async function (done) {
        console.info('-----------SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_1900 is start--------------')
        audioPlayer = await trackSwitchingBase.initAudioPlayer();
        getSelectedTracksAfterPlaying(audioPlayer, 'STOP', done);
        await trackSwitchingBase.getLocalFd(audioPlayer, trackSwitchingBase.AUDIO_SOURCE);
        console.info('-----------SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_1900 is end--------------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_2000
       * @tc.name      : After the audio is played, seek to 50% of the progress bar to obtain
                         the current track information
       * @tc.desc      : Audio track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level1
    */
    it('SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_2000', 0, async function (done) {
        console.info('-----------SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_2000 is start--------------')
        audioPlayer = await trackSwitchingBase.initAudioPlayer();
        getSelectedTracksAfterPlaying(audioPlayer, 'SEEK_50', done);
        await trackSwitchingBase.getLocalFd(audioPlayer, trackSwitchingBase.AUDIO_SOURCE);
        console.info('-----------SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_2000 is end--------------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_2100
       * @tc.name      : After the audio is played, seek to 50% of the progress bar, and then seek to 0% of the
                         progress bar to obtain the current track information
       * @tc.desc      : Audio track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level1
    */
    it('SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_2100', 0, async function (done) {
        console.info('-----------SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_2100 is start--------------')
        audioPlayer = await trackSwitchingBase.initAudioPlayer();
        getSelectedTracksAfterPlaying(audioPlayer, 'SEEK_50_0', done);
        await trackSwitchingBase.getLocalFd(audioPlayer, trackSwitchingBase.AUDIO_SOURCE);
        console.info('-----------SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_2100 is end--------------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_2200
       * @tc.name      : After the audio is played, seek to 50% of the progress bar, and then seek to 30% of the
                         progress bar to obtain the current track information
       * @tc.desc      : Audio track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level1
    */
    it('SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_2200', 0, async function (done) {
        console.info('-----------SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_2200 is start--------------')
        audioPlayer = await trackSwitchingBase.initAudioPlayer();
        getSelectedTracksAfterPlaying(audioPlayer, 'SEEK_50_30', done);
        await trackSwitchingBase.getLocalFd(audioPlayer, trackSwitchingBase.AUDIO_SOURCE);
        console.info('-----------SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_2200 is end--------------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_2300
       * @tc.name      : After the audio is played, seek to 50% of the progress bar, and then seek to 80% of the
                         progress bar to obtain the current track information
       * @tc.desc      : Audio track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level1
    */
    it('SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_2300', 0, async function (done) {
        console.info('-----------SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_2300 is start--------------')
        audioPlayer = await trackSwitchingBase.initAudioPlayer();
        getSelectedTracksAfterPlaying(audioPlayer, 'SEEK_50_80', done);
        await trackSwitchingBase.getLocalFd(audioPlayer, trackSwitchingBase.AUDIO_SOURCE);
        console.info('-----------SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_2300 is end--------------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_2400
       * @tc.name      : After the audio is played, seek to 50% of the progress bar, and then seek to 100% of the
                         progress bar to obtain the current track information
       * @tc.desc      : Audio track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level1
    */
    it('SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_2400', 0, async function (done) {
        console.info('-----------SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_2400 is start--------------')
        audioPlayer = await trackSwitchingBase.initAudioPlayer();
        getSelectedTracksAfterPlaying(audioPlayer, 'SEEK_50_100', done);
        await trackSwitchingBase.getLocalFd(audioPlayer, trackSwitchingBase.AUDIO_SOURCE);
        console.info('-----------SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_2400 is end--------------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_2500
       * @tc.name      : After audio playback, switch tracks that are consistent with and inconsistent with the
                         current track index for many times
       * @tc.desc      : Audio track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level1
    */
    it('SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_2500', 0, async function (done) {
        console.info('-----------SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_2500 is start--------------')
        audioPlayer = await trackSwitchingBase.initAudioPlayer();
        selectedTracksAfterPlaying(audioPlayer, 'PLAY_SAME_AND_DIFFERENT_TRACKS_TWICE', done);
        await trackSwitchingBase.getLocalFd(audioPlayer, trackSwitchingBase.AUDIO_SOURCE);
        console.info('-----------SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_2500 is end--------------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_2600
       * @tc.name      : Pause playback after audio playback, test selecttrack, and pass in the track index that is
                         inconsistent with the current track
       * @tc.desc      : Audio track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level1
    */
    it('SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_2600', 0, async function (done) {
        console.info('-----------SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_2600 is start--------------')
        audioPlayer = await trackSwitchingBase.initAudioPlayer();
        selectedTracksAfterPlaying(audioPlayer, 'PAUSE_DIFFERENT_TRACKS', done);
        await trackSwitchingBase.getLocalFd(audioPlayer, trackSwitchingBase.AUDIO_SOURCE);
        console.info('-----------SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_2600 is end--------------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_2700
       * @tc.name      : After the audio is played, it will be played to 50% of the progress bar, and the track index
                         inconsistent with the current track will be passed in for track switching
       * @tc.desc      : Audio track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level1
    */
    it('SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_2700', 0, async function (done) {
        console.info('-----------SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_2700 is start--------------')
        audioPlayer = await trackSwitchingBase.initAudioPlayer();
        selectedTracksAfterPlaying(audioPlayer, 'SEEK_50_DIFFERENT_TRACKS', done);
        await trackSwitchingBase.getLocalFd(audioPlayer, trackSwitchingBase.AUDIO_SOURCE);
        console.info('-----------SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_2700 is end--------------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_2800
       * @tc.name      : After the audio is played, seek to 50% of the progress bar, and then seek
                         to 0% of the progress bar. Pass in the track index that is inconsistent with
                         the current track for track switching
       * @tc.desc      : Audio track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level1
    */
    it('SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_2800', 0, async function (done) {
        console.info('-----------SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_2800 is start--------------')
        audioPlayer = await trackSwitchingBase.initAudioPlayer();
        selectedTracksAfterPlaying(audioPlayer, 'SEEK_50_0_DIFFERENT_TRACKS', done);
        await trackSwitchingBase.getLocalFd(audioPlayer, trackSwitchingBase.AUDIO_SOURCE);
        console.info('-----------SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_2800 is end--------------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_2900
       * @tc.name      : After the audio is played, seek to 50% of the progress bar, and then seek
                         to 30% of the progress bar. Input the track index that is inconsistent with
                         the current track for track switching
       * @tc.desc      : Audio track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level1
    */
    it('SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_2900', 0, async function (done) {
        console.info('-----------SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_2900 is start--------------')
        audioPlayer = await trackSwitchingBase.initAudioPlayer();
        selectedTracksAfterPlaying(audioPlayer, 'SEEK_50_30_DIFFERENT_TRACKS', done);
        await trackSwitchingBase.getLocalFd(audioPlayer, trackSwitchingBase.AUDIO_SOURCE);
        console.info('-----------SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_2900 is end--------------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_3000
       * @tc.name      : After the audio is played, seek to 50% of the progress bar, and then seek
                         to 80% of the progress bar. Pass in the track index that is inconsistent with
                         the current track for track switching
       * @tc.desc      : Audio track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level1
    */
    it('SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_3000', 0, async function (done) {
        console.info('-----------SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_3000 is start--------------')
        audioPlayer = await trackSwitchingBase.initAudioPlayer();
        selectedTracksAfterPlaying(audioPlayer, 'SEEK_50_80_DIFFERENT_TRACKS', done);
        await trackSwitchingBase.getLocalFd(audioPlayer, trackSwitchingBase.AUDIO_SOURCE);
        console.info('-----------SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_3000 is end--------------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_3100
       * @tc.name      : After the audio is played, seek to 50% of the progress bar, and then seek
                         to 100% of the progress bar. Pass in the track index that is inconsistent with
                         the current track for track switching
       * @tc.desc      : Audio track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level1
    */
    it('SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_3100', 0, async function (done) {
        console.info('-----------SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_3100 is start--------------')
        audioPlayer = await trackSwitchingBase.initAudioPlayer();
        selectedTracksAfterPlaying(audioPlayer, 'SEEK_50_100_DIFFERENT_TRACKS', done);
        await trackSwitchingBase.getLocalFd(audioPlayer, trackSwitchingBase.AUDIO_SOURCE);
        console.info('-----------SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_3100 is end--------------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_3200
       * @tc.name      : After audio playback, input the track index according to the boundary value for track switching
       * @tc.desc      : Audio track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level2
    */
    it('SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_3200', 0, async function (done) {
        console.info('-----------SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_3200 is start--------------')
        audioPlayer = await trackSwitchingBase.initAudioPlayer();
        selectedTracksAfterPlaying(audioPlayer, 'PLAY_BOUNDARY_TRACKS', done);
        await trackSwitchingBase.getLocalFd(audioPlayer, trackSwitchingBase.AUDIO_SOURCE);
        console.info('-----------SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_3200 is end--------------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_3300
       * @tc.name      : After audio playback, audio track switching of different encoding and decoding formats
       * @tc.desc      : Audio track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level2
    */
    it('SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_3300', 0, async function (done) {
        console.info('-----------SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_3300 is start--------------')
        audioPlayer = await trackSwitchingBase.initAudioPlayer();
        selectedTracksAfterPlaying(audioPlayer, 'PLAY_DIFFERENT_TRACKS', done);
        await trackSwitchingBase.getLocalFd(audioPlayer, trackSwitchingBase.AUDIO_DIFFERENT_CODES_SOURCE);
        console.info('-----------SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_3300 is end--------------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_3400
       * @tc.name      : After the audio is played, the audio track of the AAC format audio file is switched
       * @tc.desc      : Audio track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level2
    */
    it('SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_3400', 0, async function (done) {
        console.info('-----------SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_3400 is start--------------')
        audioPlayer = await trackSwitchingBase.initAudioPlayer();
        selectedTracksAfterPlaying(audioPlayer, 'PLAY_DIFFERENT_TRACKS', done);
        await trackSwitchingBase.getLocalFd(audioPlayer, trackSwitchingBase.AAC_CODES_SOURCE);
        console.info('-----------SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_3400 is end--------------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_3500
       * @tc.name      : After the audio is played, the audio track of MP3 format audio file is switched
       * @tc.desc      : Audio track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level2
    */
    it('SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_3500', 0, async function (done) {
        console.info('-----------SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_3500 is start--------------')
        audioPlayer = await trackSwitchingBase.initAudioPlayer();
        selectedTracksAfterPlaying(audioPlayer, 'PLAY_DIFFERENT_TRACKS', done);
        await trackSwitchingBase.getLocalFd(audioPlayer, trackSwitchingBase.MP3_CODES_SOURCE);
        console.info('-----------SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_3500 is end--------------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_3600
       * @tc.name      : After the audio is played, the audio files with 16 audio tracks are switched
       * @tc.desc      : Audio track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level2
    */
    it('SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_3600', 0, async function (done) {
        console.info('-----------SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_3600 is start--------------')
        audioPlayer = await trackSwitchingBase.initAudioPlayer();
        selectedTracksAfterPlaying(audioPlayer, 'PLAY_DIFFERENT_TRACKS', done);
        await trackSwitchingBase.getLocalFd(audioPlayer, trackSwitchingBase.AAC_CODES_16TRACK);
        console.info('-----------SUB_MEDIA_LOCAL_AUDIO_PLAYER_FUNCTION_PROMISE_3600 is end--------------')
    })

})
