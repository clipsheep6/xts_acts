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
import * as mediaTestBase from './MediaTestBase.js'
import * as trackSwitchingBase from './TrackSwitchingBase.js'

describe('LocalVideoPlayerReliabilityPromiseTest', function () {

    let videoPlayer = trackSwitchingBase.videoPlayer;
    let allDescription = null;
    let allDescriptionIndex = [];
    let currentDescription = [];
    let currentDescriptionIndex = [];
    let differentTracks = [];
    let selectTrackData = 0;

    async function sleep(time) {
        return new Promise((resolve) => setTimeout(resolve, time))
    }

    beforeEach(async function () {
        console.info('----------------beforeEach start----------------');
        await mediaTestBase.toNewPage
        (trackSwitchingBase.pagePath1, trackSwitchingBase.pagePath2, trackSwitchingBase.pageId);
        trackSwitchingBase.pageId = (trackSwitchingBase.pageId + 1) % 2;
        await sleep(2000);
        trackSwitchingBase.surfaceID = globalThis.value;
        console.info('surfaceID is : ' + trackSwitchingBase.surfaceID);
        console.info('beforeEach end');
    })

    afterEach(async function () {
        console.info('afterEach start');
        await mediaTestBase.closeFileDescriptor(trackSwitchingBase.VIDEO_SOURCE);
        await mediaTestBase.clearRouter();
        await sleep(2000);
        videoPlayer.release();
        console.info('afterEach end');
    })

    async function getDescriptionBeforeGetSource(videoPlayer) {
        videoPlayer.getTrackDescription().then((allList) => {
            if (allList.length != 0) {
                allDescription = allList;
                console.info('getTrackDescription is success, allDescription is : ' + JSON.stringify(allDescription));
                expect().assertFail();
            } else {
                console.info('getTrackDescription is failed');
                expect().assertFail();
            }
        }).catch((err) => {
            console.info('getTrackDescription is fail, err: ' + err);
            expect(err.code == 6).assertTrue();
        })
    }

    async function getSelectedTrackBeforeGetSource(videoPlayer) {
        videoPlayer.getSelectedTracks().then((currentList) => {
            currentDescription = currentList;
            console.info('getSelectedTracks is success, currentDescription is : ' + currentDescription);
            expect().assertFail();
        }).catch((err) => {
            console.info('getSelectedTracks is fail, err: ' + err);
            expect(err.code == 6).assertTrue();
        })
    }

    async function selectedTracksBeforeGetSource(videoPlayer) {
        videoPlayer.selectTrack(0).then((data) => {
            console.info('Same track switching succeeded, data: ' + data);
            expect().assertFail();
        }).catch((err) => {
            console.info('Same track switching failed, err: ' + err);
            expect(err.code == 6).assertTrue();
        })
    }

    function getTrackDescriptionData(videoPlayer, flag, done) {
        videoPlayer.getTrackDescription().then((allList) => {
            allDescription = null;
            allDescriptionIndex = [];
            if (allList.length != 0) {
                allDescription = allList;
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
                    expect().assertFail();
                } else if (flag == trackSwitchingBase.FLAG4) {
                    expect().assertFail();
                    done();
                }
            } else {
                console.info('getTrackDescription is failed');
                expect().assertFail();
            }
        }).catch((err) => {
            if (flag == trackSwitchingBase.FLAG1 || flag == trackSwitchingBase.FLAG2) {
                expect().assertFail();
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

    function getSelectedTracksData(videoPlayer, flag, done) {
        videoPlayer.getSelectedTracks().then((currentList) => {
            currentDescription = currentList;
            if (flag == trackSwitchingBase.FLAG1) {
                console.info('getSelectedTracks is success, currentDescription is : ' + currentDescription);
                expect(true).assertTrue();
            } else if (flag == trackSwitchingBase.FLAG2) {
                expect().assertFail();
            } else if (flag == trackSwitchingBase.FLAG3) {
                expect().assertFail();
                done();
            }
        }).catch((err) => {
            if (flag == trackSwitchingBase.FLAG1) {
                expect().assertFail();
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
                differentTrackArr.push(allDescriptionIndex[i]);
            }
        }
        console.info('differentTracks is : ' + differentTrackArr);
        return differentTrackArr;
    }

    function selectTrack(videoPlayer, index, flag, done) {
        videoPlayer.selectTrack(index).then((data) => {
            selectTrackData = data;
            console.info('track switching succeeded, selectTrackData: ' + selectTrackData);
            if (flag == trackSwitchingBase.FLAG1) {
                expect(data == 0).assertTrue();
            } else if (flag == trackSwitchingBase.FLAG2) {
                expect(data == 0).assertTrue();
                done();
            } else if (flag == trackSwitchingBase.FLAG3 || flag == trackSwitchingBase.FLAG4) {
                expect().assertFail();
            } else if (flag == trackSwitchingBase.FLAG5 || flag == trackSwitchingBase.FLAG6) {
                expect().assertFail();
                done();
            }
        }).catch((err) => {
            console.info('track switching failed, err: ' + err);
            if (flag == trackSwitchingBase.FLAG1) {
                expect().assertFail();
            } else if (flag == trackSwitchingBase.FLAG2) {
                expect().assertFail();
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

    function selectedTracksBeforePlaying(videoPlayer, step, done) {
        allDescriptionIndex = getTrackDescriptionData(videoPlayer, trackSwitchingBase.FLAG1, done);
        videoPlayer.getSelectedTracks().then((currentList) => {
            currentDescriptionIndex = currentList[0];
            console.info('getSelectedTracks is success, currentDescriptionIndex is : ' + currentDescriptionIndex);
            if (step == 'SAME_TRACKS') {
                console.info('step is SAME_TRACKS');
                selectTrack(videoPlayer, currentDescriptionIndex, trackSwitchingBase.FLAG2, done);
                setTimeout(function () {
                    videoPlayer.play();
                    done();
                }, 1000)
            } else {
                console.info('step is BOUNDARY_TRACKS');
                selectTrack(videoPlayer, allDescriptionIndex[-1], trackSwitchingBase.FLAG3, done);
                selectTrack(videoPlayer, allDescriptionIndex[allDescriptionIndex.length],
                    trackSwitchingBase.FLAG3, done);
                setTimeout(function () {
                    videoPlayer.play();
                    done();
                }, 1000)
            }
        }).catch((err) => {
            console.info('getSelectedTracks is fail, err: ' + err);
            expect().assertFail();
        })
    }

    function getDescriptionAfterPlaying(videoPlayer, step, done) {
        allDescription = null;
        switch (step) {
            case 'RESET':
                console.info('step is RESET');
                videoPlayer.play().then((data) => {
                    console.info('play is success, data: ' + data);
                    videoPlayer.reset().then((data) => {
                        console.info('reset is success, data: ' + data);
                        getTrackDescriptionData(videoPlayer, trackSwitchingBase.FLAG4, done)
                    }).catch((err) => {
                        console.info('reset is fail, err: ' + err);
                        expect().assertFail();
                        done();
                    })
                }).catch((err) => {
                    console.info('play is fail, err: ' + err);
                });
                break;
            case 'RELEASE':
                console.info('step is RELEASE');
                videoPlayer.play().then((data) => {
                    console.info('play is success, data: ' + data);
                    videoPlayer.release().then((data) => {
                        console.info('release is success, data: ' + data);
                        getTrackDescriptionData(videoPlayer, trackSwitchingBase.FLAG4, done);
                    }).catch((err) => {
                        console.info('release is fail, err: ' + err);
                        expect().assertFail();
                        done();
                    })
                }).catch((err) => {
                    console.info('play is fail, err: ' + err);
                });
                break;
            default:
                console.info('step is COMBINATION');
                videoPlayer.play().then((data) => {
                    console.info('play is success, data: ' + data);
                    getTrackDescriptionData(videoPlayer, trackSwitchingBase.FLAG2, done);
                    videoPlayer.pause().then((data) => {
                        console.info('pause is success, data: ' + data);
                        getTrackDescriptionData(videoPlayer, trackSwitchingBase.FLAG2, done);
                        videoPlayer.stop().then(() => {
                            console.info('stop is success, data: ');
                            getTrackDescriptionData(videoPlayer, trackSwitchingBase.FLAG2, done);
                            videoPlayer.reset().then((data) => {
                                console.info('reset is success, data: ' + data);
                                getTrackDescriptionData(videoPlayer, trackSwitchingBase.FLAG3, done);
                                videoPlayer.release().then((data) => {
                                    console.info('release is success, data: ' + data);
                                    getTrackDescriptionData(videoPlayer, trackSwitchingBase.FLAG4, done);
                                }).catch((err) => {
                                    console.info('release is fail, err: ' + err);
                                    expect().assertFail();
                                    done();
                                })
                            }).catch((err) => {
                                console.info('reset is fail, err: ' + err);
                                expect().assertFail();
                            })
                        }).catch((err) => {
                            console.info('stop is fail, err: ' + err);
                            expect().assertFail();
                        })
                    }).catch((err) => {
                        console.info('pause is fail, err: ' + err);
                        expect().assertFail();
                    })
                }).catch((err) => {
                    console.info('play is fail, err: ' + err);
                });
        }
    }

    function getSelectedTracksAfterPlaying(videoPlayer, step, done) {
        videoPlayer.play().then((data) => {
            console.info('play is success, data: ' + data);
            switch (step) {
                case 'RESET':
                    console.info('step is RESET')
                    videoPlayer.reset().then((data) => {
                        console.info('reset is success, data: ' + data);
                        getSelectedTracksData(videoPlayer, trackSwitchingBase.FLAG3, done);
                    }).catch((err) => {
                        console.info('reset is fail, err: ' + err);
                        expect().assertFail();
                        done();
                    })
                    break;
                case 'RELEASE':
                    console.info('step is RELEASE');
                    videoPlayer.release().then((data) => {
                        console.info('release is success, data: ' + data);
                        getSelectedTracksData(videoPlayer, trackSwitchingBase.FLAG3, done);
                    }).catch((err) => {
                        console.info('release is fail, err: ' + err);
                        expect().assertFail();
                        done();
                    })
                    break;
                default:
                    console.info('step is COMBINATION');
                    videoPlayer.play().then((data) => {
                        console.info('play is success, data: ' + data);
                        getSelectedTracksData(videoPlayer, trackSwitchingBase.FLAG1, done);
                        videoPlayer.pause().then((data) => {
                            console.info('pause is success, data: ' + data);
                            getSelectedTracksData(videoPlayer, trackSwitchingBase.FLAG1, done);
                            videoPlayer.stop().then((data) => {
                                console.info('stop is success, data: ' + data);
                                getSelectedTracksData(videoPlayer, trackSwitchingBase.FLAG1, done);
                                videoPlayer.reset().then((data) => {
                                    console.info('reset is success, data: ' + data);
                                    getSelectedTracksData(videoPlayer, trackSwitchingBase.FLAG2, done);
                                    videoPlayer.release().then((data) => {
                                        console.info('release is success, data: ' + data);
                                        getSelectedTracksData(videoPlayer, trackSwitchingBase.FLAG3, done);
                                    }).catch((err) => {
                                        console.info('release is fail, err: ' + err);
                                        expect().assertFail();
                                        done();
                                    })
                                }).catch((err) => {
                                    console.info('reset is fail, err: ' + err);
                                    expect().assertFail();
                                })
                            }).catch((err) => {
                                console.info('stop is fail, err: ' + err);
                                expect().assertFail();
                            })
                        }).catch((err) => {
                            console.info('pause is fail, err: ' + err);
                            expect().assertFail();
                        })
                    }).catch((err) => {
                        console.info('play is fail, err: ' + err);
                    });
            }
        }).catch((err) => {
            console.info('play is fail, err: ' + err);
        });
    }

    function selectedTracksAfterPlaying(videoPlayer, step, done) {
        videoPlayer.play().then((data) => {
            console.info('play is success, data is : ' + data);
            allDescriptionIndex = getTrackDescriptionData(videoPlayer, trackSwitchingBase.FLAG1, done);

            videoPlayer.getSelectedTracks().then((currentList) => {
                currentDescriptionIndex = currentList[0];
                console.info('getSelectedTracks is success, currentDescriptionIndex is : ' + currentDescriptionIndex);

                switch (step) {
                    case 'VIDEO_TRACKS':
                        selectTrack(videoPlayer, currentDescriptionIndex, trackSwitchingBase.FLAG2, done);
                        break;
                    case 'STOP_DIFFERENT_TRACKS':
                        console.info('step is STOP_DIFFERENT_TRACKS');
                        videoPlayer.stop().then((data) => {
                            console.info('stop is success, data: ' + data);
                            differentTracks = [];
                            differentTracks = getDifferentTracks(allDescriptionIndex, currentDescriptionIndex);
                            selectTrack(videoPlayer, differentTracks[0], trackSwitchingBase.FLAG6, done);
                        }).catch((err) => {
                            console.info('stop is fail, err: ' + err);
                            expect().assertFail();
                            done();
                        })
                        break;
                    case 'RESET_DIFFERENT_TRACKS':
                        console.info('step is RESET_DIFFERENT_TRACKS');
                        videoPlayer.reset().then((data) => {
                            console.info('reset is success, data: ' + data);
                            differentTracks = [];
                            differentTracks = getDifferentTracks(allDescriptionIndex, currentDescriptionIndex);
                            selectTrack(videoPlayer, differentTracks[0], trackSwitchingBase.FLAG6, done);
                        }).catch((err) => {
                            console.info('reset is fail, err: ' + err);
                            expect().assertFail();
                            done();
                        })
                        break;
                    case 'RELEASE_DIFFERENT_TRACKS':
                        console.info('step is RELEASE_DIFFERENT_TRACKS');
                        videoPlayer.release().then((data) => {
                            console.info('release is success, data: ' + data);
                            differentTracks = [];
                            differentTracks = getDifferentTracks(allDescriptionIndex, currentDescriptionIndex);
                            selectTrack(videoPlayer, differentTracks[0], trackSwitchingBase.FLAG6, done);
                        }).catch((err) => {
                            console.info('release is fail, err: ' + err);
                            expect().assertFail();
                            done();
                        })
                        break;
                    case 'COMBINATION_DIFFERENT_TRACKS':
                        console.info('step is COMBINATION_DIFFERENT_TRACKS');
                        differentTracks = [];
                        differentTracks = getDifferentTracks(allDescriptionIndex, currentDescriptionIndex);
                        videoPlayer.play().then((data) => {
                            console.info('play is success, data: ' + data);
                            selectTrack(videoPlayer, differentTracks[0], trackSwitchingBase.FLAG1, done);
                            videoPlayer.pause().then((data) => {
                                console.info('pause is success, data: ' + data);
                                selectTrack(videoPlayer, differentTracks[1], trackSwitchingBase.FLAG1, done);
                                videoPlayer.stop().then((data) => {
                                    console.info('stop is success, data: ' + data);
                                    selectTrack(videoPlayer, differentTracks[0], trackSwitchingBase.FLAG4, done);
                                    videoPlayer.reset().then((data) => {
                                        console.info('reset is success, data: ' + data);
                                        selectTrack(videoPlayer, differentTracks[1], trackSwitchingBase.FLAG4, done);
                                        videoPlayer.release().then((data) => {
                                            console.info('release is success, data: ' + data);
                                            selectTrack(videoPlayer, differentTracks[0],trackSwitchingBase.FLAG6, done);
                                        }).catch((err) => {
                                            console.info('release is fail, err: ' + err);
                                            expect().assertFail();
                                            done();
                                        })
                                    }).catch((err) => {
                                        console.info('reset is fail, err: ' + err);
                                        expect().assertFail();
                                    })
                                }).catch((err) => {
                                    console.info('stop is fail, err: ' + err);
                                    expect().assertFail();
                                })
                            }).catch((err) => {
                                console.info('pause is fail, err: ' + err);
                                expect().assertFail();
                            })
                        }).catch((err) => {
                            console.info('play is fail, err: ' + err);
                        });
                        break;
                    default:
                        console.info('step is BOUNDARY_DIFFERENT_TRACKS');
                        videoPlayer.play().then((data) => {
                            console.info('play is success, data: ' + data);
                            selectTrack(videoPlayer, allDescriptionIndex[-1], trackSwitchingBase.FLAG3, done);
                            selectTrack(videoPlayer, allDescriptionIndex[allDescriptionIndex.length],
                                trackSwitchingBase.FLAG5, done);
                        }).catch((err) => {
                            console.info('play is fail, err: ' + err);
                            expect().assertFail();
                            done();
                        })
                }
            }).catch((err) => {
                console.info('getSelectedTracks is fail, err: ' + err);
                expect().assertFail();
            })
        }).catch((err) => {
            console.info('play is fail, err: ' + err);
            expect().assertFail();
        })
    }

    /* *
       * @tc.number    : SUB_MEDIA_LOCAL_AUDIO_AND_VIDEO_PLAYER_RELIABILITY_PROMISE_0100
       * @tc.name      : Switch to video track before audio and video playback
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level3
    */
    it('SUB_MEDIA_LOCAL_AUDIO_AND_VIDEO_PLAYER_RELIABILITY_PROMISE_0100', 0, async function (done) {
        console.info('-------SUB_MEDIA_LOCAL_AUDIO_AND_VIDEO_PLAYER_RELIABILITY_PROMISE_0100 is start----------')
        videoPlayer = await trackSwitchingBase.initVideoPlayer
        (trackSwitchingBase.VIDEO_SOURCE, trackSwitchingBase.surfaceID);
        selectedTracksBeforePlaying(videoPlayer, 'SAME_TRACKS', done);
        console.info('-------SUB_MEDIA_LOCAL_AUDIO_AND_VIDEO_PLAYER_RELIABILITY_PROMISE_0100 is end----------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_LOCAL_AUDIO_AND_VIDEO_PLAYER_RELIABILITY_PROMISE_0200
       * @tc.name      : Before audio and video playback, input the nonexistent track index (1 smaller than
                         the minimum and 1 larger than the maximum) for track switching
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level3
    */
    it('SUB_MEDIA_LOCAL_AUDIO_AND_VIDEO_PLAYER_RELIABILITY_PROMISE_0200', 0, async function (done) {
        console.info('-------SUB_MEDIA_LOCAL_AUDIO_AND_VIDEO_PLAYER_RELIABILITY_PROMISE_0200 is start----------')
        videoPlayer = await trackSwitchingBase.initVideoPlayer
        (trackSwitchingBase.VIDEO_SOURCE, trackSwitchingBase.surfaceID);
        selectedTracksBeforePlaying(videoPlayer, 'BOUNDARY_TRACKS', done);
        console.info('-------SUB_MEDIA_LOCAL_AUDIO_AND_VIDEO_PLAYER_RELIABILITY_PROMISE_0200 is end----------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_LOCAL_AUDIO_AND_VIDEO_PLAYER_RELIABILITY_PROMISE_0300
       * @tc.name      : Reset after audio and video playback to obtain all track information
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level2
    */
    it('SUB_MEDIA_LOCAL_AUDIO_AND_VIDEO_PLAYER_RELIABILITY_PROMISE_0300', 0, async function (done) {
        console.info('-------SUB_MEDIA_LOCAL_AUDIO_AND_VIDEO_PLAYER_RELIABILITY_PROMISE_0300 is start----------')
        videoPlayer = await trackSwitchingBase.initVideoPlayer
        (trackSwitchingBase.VIDEO_SOURCE, trackSwitchingBase.surfaceID);
        getDescriptionAfterPlaying(videoPlayer, 'RESET', done);
        console.info('-------SUB_MEDIA_LOCAL_AUDIO_AND_VIDEO_PLAYER_RELIABILITY_PROMISE_0300 is end----------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_LOCAL_AUDIO_AND_VIDEO_PLAYER_RELIABILITY_PROMISE_0400
       * @tc.name      : Release after audio and video playback to obtain all track information
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level2
    */
    it('SUB_MEDIA_LOCAL_AUDIO_AND_VIDEO_PLAYER_RELIABILITY_PROMISE_0400', 0, async function (done) {
        console.info('-------SUB_MEDIA_LOCAL_AUDIO_AND_VIDEO_PLAYER_RELIABILITY_PROMISE_0400 is start----------')
        videoPlayer = await trackSwitchingBase.initVideoPlayer
        (trackSwitchingBase.VIDEO_SOURCE, trackSwitchingBase.surfaceID);
        getDescriptionAfterPlaying(videoPlayer, 'RELEASE', done);
        console.info('-------SUB_MEDIA_LOCAL_AUDIO_AND_VIDEO_PLAYER_RELIABILITY_PROMISE_0400 is end----------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_LOCAL_AUDIO_AND_VIDEO_PLAYER_RELIABILITY_PROMISE_0500
       * @tc.name      : Pause playback after audio and video playback, stop playback, reset audio, release audio
                         and video, and obtain all track information
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level2
    */
    it('SUB_MEDIA_LOCAL_AUDIO_AND_VIDEO_PLAYER_RELIABILITY_PROMISE_0500', 0, async function (done) {
        console.info('-------SUB_MEDIA_LOCAL_AUDIO_AND_VIDEO_PLAYER_RELIABILITY_PROMISE_0500 is start----------')
        videoPlayer = await trackSwitchingBase.initVideoPlayer
        (trackSwitchingBase.VIDEO_SOURCE, trackSwitchingBase.surfaceID);
        getDescriptionAfterPlaying(videoPlayer, 'COMBINATION', done);
        console.info('-------SUB_MEDIA_LOCAL_AUDIO_AND_VIDEO_PLAYER_RELIABILITY_PROMISE_0500 is end----------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_LOCAL_AUDIO_AND_VIDEO_PLAYER_RELIABILITY_PROMISE_0600
       * @tc.name      : Reset after audio and video playback to obtain the current track information
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level2
    */
    it('SUB_MEDIA_LOCAL_AUDIO_AND_VIDEO_PLAYER_RELIABILITY_PROMISE_0600', 0, async function (done) {
        console.info('-------SUB_MEDIA_LOCAL_AUDIO_AND_VIDEO_PLAYER_RELIABILITY_PROMISE_0600 is start----------')
        videoPlayer = await trackSwitchingBase.initVideoPlayer
        (trackSwitchingBase.VIDEO_SOURCE, trackSwitchingBase.surfaceID);
        getSelectedTracksAfterPlaying(videoPlayer, 'RESET', done);
        console.info('-------SUB_MEDIA_LOCAL_AUDIO_AND_VIDEO_PLAYER_RELIABILITY_PROMISE_0600 is end----------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_LOCAL_AUDIO_AND_VIDEO_PLAYER_RELIABILITY_PROMISE_0700
       * @tc.name      : Release after audio and video playback to obtain the current track information
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level2
    */
    it('SUB_MEDIA_LOCAL_AUDIO_AND_VIDEO_PLAYER_RELIABILITY_PROMISE_0700', 0, async function (done) {
        console.info('-------SUB_MEDIA_LOCAL_AUDIO_AND_VIDEO_PLAYER_RELIABILITY_PROMISE_0700 is start----------')
        videoPlayer = await trackSwitchingBase.initVideoPlayer
        (trackSwitchingBase.VIDEO_SOURCE, trackSwitchingBase.surfaceID);
        getSelectedTracksAfterPlaying(videoPlayer, 'RELEASE', done);
        console.info('-------SUB_MEDIA_LOCAL_AUDIO_AND_VIDEO_PLAYER_RELIABILITY_PROMISE_0700 is end----------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_LOCAL_AUDIO_AND_VIDEO_PLAYER_RELIABILITY_PROMISE_0800
       * @tc.name      : Pause playback after audio and video playback, reset audio and video, replay, stop playback,
                         release audio and video, and obtain all track information
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level2
    */
    it('SUB_MEDIA_LOCAL_AUDIO_AND_VIDEO_PLAYER_RELIABILITY_PROMISE_0800', 0, async function (done) {
        console.info('-------SUB_MEDIA_LOCAL_AUDIO_AND_VIDEO_PLAYER_RELIABILITY_PROMISE_0800 is start----------')
        videoPlayer = await trackSwitchingBase.initVideoPlayer
        (trackSwitchingBase.VIDEO_SOURCE, trackSwitchingBase.surfaceID);
        getSelectedTracksAfterPlaying(videoPlayer, 'COMBINATION', done);
        console.info('-------SUB_MEDIA_LOCAL_AUDIO_AND_VIDEO_PLAYER_RELIABILITY_PROMISE_0800 is end----------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_LOCAL_AUDIO_AND_VIDEO_PLAYER_RELIABILITY_PROMISE_0900
       * @tc.name      : The audio and video playback stops, and the audio track index inconsistent with the
                         current track is transmitted for audio track switching
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level2
    */
    it('SUB_MEDIA_LOCAL_AUDIO_AND_VIDEO_PLAYER_RELIABILITY_PROMISE_0900', 0, async function (done) {
        console.info('-------SUB_MEDIA_LOCAL_AUDIO_AND_VIDEO_PLAYER_RELIABILITY_PROMISE_0900 is start----------')
        videoPlayer = await trackSwitchingBase.initVideoPlayer
        (trackSwitchingBase.VIDEO_SOURCE, trackSwitchingBase.surfaceID);
        selectedTracksAfterPlaying(videoPlayer, 'STOP_DIFFERENT_TRACKS', done);
        console.info('-------SUB_MEDIA_LOCAL_AUDIO_AND_VIDEO_PLAYER_RELIABILITY_PROMISE_0900 is end----------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_LOCAL_AUDIO_AND_VIDEO_PLAYER_RELIABILITY_PROMISE_1000
       * @tc.name      : Reset after audio and video playback, input the audio track index that is inconsistent
                         with the current track for audio track switching
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level2
    */
    it('SUB_MEDIA_LOCAL_AUDIO_AND_VIDEO_PLAYER_RELIABILITY_PROMISE_1000', 0, async function (done) {
        console.info('-------SUB_MEDIA_LOCAL_AUDIO_AND_VIDEO_PLAYER_RELIABILITY_PROMISE_1000 is start----------')
        videoPlayer = await trackSwitchingBase.initVideoPlayer
        (trackSwitchingBase.VIDEO_SOURCE, trackSwitchingBase.surfaceID);
        selectedTracksAfterPlaying(videoPlayer, 'RESET_DIFFERENT_TRACKS', done);
        console.info('-------SUB_MEDIA_LOCAL_AUDIO_AND_VIDEO_PLAYER_RELIABILITY_PROMISE_1000 is end----------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_LOCAL_AUDIO_AND_VIDEO_PLAYER_RELIABILITY_PROMISE_1100
       * @tc.name      : The audio and video are released after playing, and the audio track index inconsistent with
                         the current track is transmitted for audio track switching
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level2
    */
    it('SUB_MEDIA_LOCAL_AUDIO_AND_VIDEO_PLAYER_RELIABILITY_PROMISE_1100', 0, async function (done) {
        console.info('-------SUB_MEDIA_LOCAL_AUDIO_AND_VIDEO_PLAYER_RELIABILITY_PROMISE_1100 is start----------')
        videoPlayer = await trackSwitchingBase.initVideoPlayer
        (trackSwitchingBase.VIDEO_SOURCE, trackSwitchingBase.surfaceID);
        selectedTracksAfterPlaying(videoPlayer, 'RELEASE_DIFFERENT_TRACKS', done);
        console.info('-------SUB_MEDIA_LOCAL_AUDIO_AND_VIDEO_PLAYER_RELIABILITY_PROMISE_1100 is end----------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_LOCAL_AUDIO_AND_VIDEO_PLAYER_RELIABILITY_PROMISE_1200
       * @tc.name      : Pause playback after audio and video playback, reset audio and video, replay, stop playback,
                         release audio and video, and obtain all track information
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level2
    */
    it('SUB_MEDIA_LOCAL_AUDIO_AND_VIDEO_PLAYER_RELIABILITY_PROMISE_1200', 0, async function (done) {
        console.info('-------SUB_MEDIA_LOCAL_AUDIO_AND_VIDEO_PLAYER_RELIABILITY_PROMISE_1200 is start----------')
        videoPlayer = await trackSwitchingBase.initVideoPlayer
        (trackSwitchingBase.VIDEO_SOURCE, trackSwitchingBase.surfaceID);
        selectedTracksAfterPlaying(videoPlayer, 'COMBINATION_DIFFERENT_TRACKS', done);
        console.info('-------SUB_MEDIA_LOCAL_AUDIO_AND_VIDEO_PLAYER_RELIABILITY_PROMISE_1200 is end----------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_LOCAL_AUDIO_AND_VIDEO_PLAYER_RELIABILITY_PROMISE_1300
       * @tc.name      : After the audio and video are played, the non-existent track index (1 smaller than the minimum
                         and 1 larger than the maximum) is passed in for track switching
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level3
    */
    it('SUB_MEDIA_LOCAL_AUDIO_AND_VIDEO_PLAYER_RELIABILITY_PROMISE_1300', 0, async function (done) {
        console.info('-------SUB_MEDIA_LOCAL_AUDIO_AND_VIDEO_PLAYER_RELIABILITY_PROMISE_1300 is start----------')
        videoPlayer = await trackSwitchingBase.initVideoPlayer
        (trackSwitchingBase.VIDEO_SOURCE, trackSwitchingBase.surfaceID);
        selectedTracksAfterPlaying(videoPlayer, 'BOUNDARY_DIFFERENT_TRACKS', done);
        console.info('-------SUB_MEDIA_LOCAL_AUDIO_AND_VIDEO_PLAYER_RELIABILITY_PROMISE_1300 is end----------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_LOCAL_AUDIO_AND_VIDEO_PLAYER_RELIABILITY_PROMISE_1400
       * @tc.name      : Switch to video track after audio and video playback
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level3
    */
    it('SUB_MEDIA_LOCAL_AUDIO_AND_VIDEO_PLAYER_RELIABILITY_PROMISE_1400', 0, async function (done) {
        console.info('-------SUB_MEDIA_LOCAL_AUDIO_AND_VIDEO_PLAYER_RELIABILITY_PROMISE_1400 is start----------')
        videoPlayer = await trackSwitchingBase.initVideoPlayer
        (trackSwitchingBase.VIDEO_SOURCE, trackSwitchingBase.surfaceID);
        selectedTracksAfterPlaying(videoPlayer, 'VIDEO_TRACKS', done);
        console.info('-------SUB_MEDIA_LOCAL_AUDIO_AND_VIDEO_PLAYER_RELIABILITY_PROMISE_1400 is end----------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_LOCAL_AUDIO_AND_VIDEO_PLAYER_RELIABILITY_PROMISE_1500
       * @tc.name      : Get all track information before setting the source
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level3
    */
    it('SUB_MEDIA_LOCAL_AUDIO_AND_VIDEO_PLAYER_RELIABILITY_PROMISE_1500', 0, async function (done) {
        console.info('-------SUB_MEDIA_LOCAL_AUDIO_AND_VIDEO_PLAYER_RELIABILITY_PROMISE_1500 is start----------')
        videoPlayer = await trackSwitchingBase.createVideoPlayer();
        await getDescriptionBeforeGetSource(videoPlayer);
        await trackSwitchingBase.setVideoSource(videoPlayer, trackSwitchingBase.VIDEO_SOURCE);
        await trackSwitchingBase.setSurface(videoPlayer, trackSwitchingBase.surfaceID);
        await trackSwitchingBase.videoPrepare(videoPlayer);
        await sleep(1000);
        done();
        console.info('-------SUB_MEDIA_LOCAL_AUDIO_AND_VIDEO_PLAYER_RELIABILITY_PROMISE_1500 is end----------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_LOCAL_AUDIO_AND_VIDEO_PLAYER_RELIABILITY_PROMISE_1600
       * @tc.name      : Get the current track information before setting the source
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level3
    */
    it('SUB_MEDIA_LOCAL_AUDIO_AND_VIDEO_PLAYER_RELIABILITY_PROMISE_1600', 0, async function (done) {
        console.info('-------SUB_MEDIA_LOCAL_AUDIO_AND_VIDEO_PLAYER_RELIABILITY_PROMISE_1600 is start----------')
        videoPlayer = await trackSwitchingBase.createVideoPlayer();
        await getSelectedTrackBeforeGetSource(videoPlayer);
        await trackSwitchingBase.setVideoSource(videoPlayer, trackSwitchingBase.VIDEO_SOURCE);
        await trackSwitchingBase.setSurface(videoPlayer, trackSwitchingBase.surfaceID);
        await trackSwitchingBase.videoPrepare(videoPlayer);
        await sleep(1000);
        done();
        console.info('-------SUB_MEDIA_LOCAL_AUDIO_AND_VIDEO_PLAYER_RELIABILITY_PROMISE_1600 is end----------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_LOCAL_AUDIO_AND_VIDEO_PLAYER_RELIABILITY_PROMISE_1700
       * @tc.name      : Switch tracks before setting the source
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level3
    */
    it('SUB_MEDIA_LOCAL_AUDIO_AND_VIDEO_PLAYER_RELIABILITY_PROMISE_1700', 0, async function (done) {
        console.info('-------SUB_MEDIA_LOCAL_AUDIO_AND_VIDEO_PLAYER_RELIABILITY_PROMISE_1700 is start----------')
        videoPlayer = await trackSwitchingBase.createVideoPlayer();
        await selectedTracksBeforeGetSource(videoPlayer);
        await trackSwitchingBase.setVideoSource(videoPlayer, trackSwitchingBase.VIDEO_SOURCE);
        await trackSwitchingBase.setSurface(videoPlayer, trackSwitchingBase.surfaceID);
        await trackSwitchingBase.videoPrepare(videoPlayer);
        await sleep(1000);
        done();
        console.info('-------SUB_MEDIA_LOCAL_AUDIO_AND_VIDEO_PLAYER_RELIABILITY_PROMISE_1700 is end----------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_LOCAL_AUDIO_AND_VIDEO_PLAYER_RELIABILITY_PROMISE_1800
       * @tc.name      : Switch tracks before setting the source
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level3
    */
    it('SUB_MEDIA_LOCAL_AUDIO_AND_VIDEO_PLAYER_RELIABILITY_PROMISE_1800', 0, async function (done) {
        console.info('-------SUB_MEDIA_LOCAL_AUDIO_AND_VIDEO_PLAYER_RELIABILITY_PROMISE_1800 is start----------')
        videoPlayer = await trackSwitchingBase.createVideoPlayer();
        await trackSwitchingBase.setVideoSource(videoPlayer, trackSwitchingBase.VIDEO_SOURCE);
        await getDescriptionBeforeGetSource(videoPlayer);
        await trackSwitchingBase.setSurface(videoPlayer, trackSwitchingBase.surfaceID);
        await trackSwitchingBase.videoPrepare(videoPlayer);
        await sleep(1000);
        done();
        console.info('-------SUB_MEDIA_LOCAL_AUDIO_AND_VIDEO_PLAYER_RELIABILITY_PROMISE_1800 is end----------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_LOCAL_AUDIO_AND_VIDEO_PLAYER_RELIABILITY_PROMISE_1900
       * @tc.name      : Get the current track information before setting up videosurface
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level3
    */
    it('SUB_MEDIA_LOCAL_AUDIO_AND_VIDEO_PLAYER_RELIABILITY_PROMISE_1900', 0, async function (done) {
        console.info('-------SUB_MEDIA_LOCAL_AUDIO_AND_VIDEO_PLAYER_RELIABILITY_PROMISE_1900 is start----------')
        videoPlayer = await trackSwitchingBase.createVideoPlayer();
        await trackSwitchingBase.setVideoSource(videoPlayer, trackSwitchingBase.VIDEO_SOURCE);
        await getSelectedTrackBeforeGetSource(videoPlayer);
        await trackSwitchingBase.setSurface(videoPlayer, trackSwitchingBase.surfaceID);
        await trackSwitchingBase.videoPrepare(videoPlayer);
        await sleep(1000);
        done();
        console.info('-------SUB_MEDIA_LOCAL_AUDIO_AND_VIDEO_PLAYER_RELIABILITY_PROMISE_1900 is end----------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_LOCAL_AUDIO_AND_VIDEO_PLAYER_RELIABILITY_PROMISE_2000
       * @tc.name      : Switch tracks before setting up videosurface
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level3
    */
    it('SUB_MEDIA_LOCAL_AUDIO_AND_VIDEO_PLAYER_RELIABILITY_PROMISE_2000', 0, async function (done) {
        console.info('-------SUB_MEDIA_LOCAL_AUDIO_AND_VIDEO_PLAYER_RELIABILITY_PROMISE_2000 is start----------')
        videoPlayer = await trackSwitchingBase.createVideoPlayer();
        await trackSwitchingBase.setVideoSource(videoPlayer, trackSwitchingBase.VIDEO_SOURCE);
        await selectedTracksBeforeGetSource(videoPlayer);
        await trackSwitchingBase.setSurface(videoPlayer, trackSwitchingBase.surfaceID);
        await trackSwitchingBase.videoPrepare(videoPlayer);
        await sleep(1000);
        done();
        console.info('-------SUB_MEDIA_LOCAL_AUDIO_AND_VIDEO_PLAYER_RELIABILITY_PROMISE_2000 is end----------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_LOCAL_AUDIO_AND_VIDEO_PLAYER_RELIABILITY_PROMISE_2100
       * @tc.name      : Get all track information before prepare
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level3
    */
    it('SUB_MEDIA_LOCAL_AUDIO_AND_VIDEO_PLAYER_RELIABILITY_PROMISE_2100', 0, async function (done) {
        console.info('-------SUB_MEDIA_LOCAL_AUDIO_AND_VIDEO_PLAYER_RELIABILITY_PROMISE_2100 is start----------')
        videoPlayer = await trackSwitchingBase.createVideoPlayer();
        await trackSwitchingBase.setVideoSource(videoPlayer, trackSwitchingBase.VIDEO_SOURCE);
        await trackSwitchingBase.setSurface(videoPlayer, trackSwitchingBase.surfaceID);
        await getDescriptionBeforeGetSource(videoPlayer);
        await trackSwitchingBase.videoPrepare(videoPlayer);
        await sleep(1000);
        done();
        console.info('-------SUB_MEDIA_LOCAL_AUDIO_AND_VIDEO_PLAYER_RELIABILITY_PROMISE_2100 is end----------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_LOCAL_AUDIO_AND_VIDEO_PLAYER_RELIABILITY_PROMISE_2200
       * @tc.name      : Get the current track information before prepare
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level3
    */
    it('SUB_MEDIA_LOCAL_AUDIO_AND_VIDEO_PLAYER_RELIABILITY_PROMISE_2200', 0, async function (done) {
        console.info('-------SUB_MEDIA_LOCAL_AUDIO_AND_VIDEO_PLAYER_RELIABILITY_PROMISE_2200 is start----------')
        videoPlayer = await trackSwitchingBase.createVideoPlayer();
        await trackSwitchingBase.setVideoSource(videoPlayer, trackSwitchingBase.VIDEO_SOURCE);
        await trackSwitchingBase.setSurface(videoPlayer, trackSwitchingBase.surfaceID);
        await getSelectedTrackBeforeGetSource(videoPlayer);
        await trackSwitchingBase.videoPrepare(videoPlayer);
        await sleep(1000);
        done();
        console.info('-------SUB_MEDIA_LOCAL_AUDIO_AND_VIDEO_PLAYER_RELIABILITY_PROMISE_2200 is end----------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_LOCAL_AUDIO_AND_VIDEO_PLAYER_RELIABILITY_PROMISE_2300
       * @tc.name      : Switch tracks before prepare
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Reliability test
       * @tc.level     : Level3
    */
    it('SUB_MEDIA_LOCAL_AUDIO_AND_VIDEO_PLAYER_RELIABILITY_PROMISE_2300', 0, async function (done) {
        console.info('-------SUB_MEDIA_LOCAL_AUDIO_AND_VIDEO_PLAYER_RELIABILITY_PROMISE_2300 is start----------')
        videoPlayer = await trackSwitchingBase.createVideoPlayer();
        await trackSwitchingBase.setVideoSource(videoPlayer, trackSwitchingBase.VIDEO_SOURCE);
        await trackSwitchingBase.setSurface(videoPlayer, trackSwitchingBase.surfaceID);
        await selectedTracksBeforeGetSource(videoPlayer);
        await trackSwitchingBase.videoPrepare(videoPlayer);
        await sleep(1000);
        done();
        console.info('-------SUB_MEDIA_LOCAL_AUDIO_AND_VIDEO_PLAYER_RELIABILITY_PROMISE_2300 is end----------')
    })
})
