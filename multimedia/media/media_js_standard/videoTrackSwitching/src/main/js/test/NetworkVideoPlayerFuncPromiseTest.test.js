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

import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from 'deccjsunit/index';
import * as mediaTestBase from '../../../../../MediaTestBase.js';
import * as trackSwitchingBase from './TrackSwitchingBase.js';

describe('NetworkVideoPlayerFuncPromiseTest', function () {

    let videoPlayer = trackSwitchingBase.videoPlayer;
    let allDescription = null;
    let allDescriptionIndex = [];
    let currentDescription = [];
    let currentDescriptionIndex = [];
    let differentTracks = [];
    let selectTrackData = 0;
    const TIMEOUT = 2000;

    async function sleep(time) {
        return new Promise((resolve) => setTimeout(resolve, time))
    }

    beforeEach(async function () {
        console.info('------------------------beforeEach start------------------------');
        await mediaTestBase.toNewPage
        (trackSwitchingBase.pagePath1, trackSwitchingBase.pagePath2, trackSwitchingBase.pageId);
        trackSwitchingBase.pageId = (trackSwitchingBase.pageId + 1) % 2;
        await sleep(TIMEOUT);
        trackSwitchingBase.surfaceID = globalThis.value;
        console.info('surfaceID is : ' + trackSwitchingBase.surfaceID);
        console.info('beforeEach end');
    })

    afterEach(async function () {
        console.info('afterEach start');
        await mediaTestBase.closeFileDescriptor(trackSwitchingBase.H263_MP3_3TRK_MKV);
        await mediaTestBase.clearRouter();
        await sleep(TIMEOUT);
        videoPlayer.release();
        console.info('afterEach end');
    })

    function getTrackDescriptionData(videoPlayer, flag, done) {
        videoPlayer.getTrackDescription().then((allList) => {
            allDescription = null;
            allDescriptionIndex = [];
            if (allList.length != 0) {
                allDescription = allList;
                if (flag == trackSwitchingBase.FLAG1) {
                    console.info('getTrackDescription success, allDescription is : ' + JSON.stringify(allDescription));
                    expect(true).assertTrue();
                    videoPlayer.play();
                    setTimeout(function () {
                        done();
                    }, TIMEOUT)
                } else if (flag == trackSwitchingBase.FLAG2) {
                    for (let i = 0; i < allList.length; i++) {
                        allDescriptionIndex.push(i);
                    }
                    console.info('allDescriptionIndex is : ' + JSON.stringify(allDescriptionIndex));
                    expect(true).assertTrue();
                    return allDescriptionIndex;
                } else if (flag == trackSwitchingBase.FLAG3) {
                    console.info('getTrackDescription success, allDescription is : ' + JSON.stringify(allDescription));
                    expect(true).assertTrue();
                    done();
                }
            } else {
                console.info('getTrackDescription is failed');
                expect().assertFail();
                done();
            }
        }).catch((err) => {
            console.info('getTrackDescription is fail, err: ' + err);
            expect().assertFail();
            done();
        })
    }

    function getSelectedTracksData(videoPlayer, flag, done) {
        videoPlayer.getSelectedTracks().then((currentList) => {
            if (typeof (currentList) != 'undefined') {
                currentDescription = currentList;
                if (flag == trackSwitchingBase.FLAG1) {
                    console.info('getSelectedTracks is success, currentDescription is: ' + currentDescription);
                    expect(true).assertTrue();
                    videoPlayer.play();
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
        for (let i = 0; i < allDescriptionIndex.length; i++) {
            if (currentDescriptionIndex != allDescriptionIndex[i]) {
                differentTrackArr.push(allDescriptionIndex[i]);
            }
        }
        console.info('differentTracks is : ' + differentTrackArr);
        return differentTrackArr;
    }

    function selectTrack(videoPlayer, index) {
        videoPlayer.selectTrack(index).then((data) => {
            selectTrackData = data;
            console.info('track switching succeeded, selectTrackData: ' + selectTrackData);
            expect(data == 0).assertTrue();
        }).catch((err) => {
            console.info('track switching failed, err: ' + err);
            expect().assertFail();
        })
    }

    function getDescriptionBeforePlaying(videoPlayer, done) {
        getTrackDescriptionData(videoPlayer, trackSwitchingBase.FLAG1, done);
    }

    function getSelectedTracksBeforePlaying(videoPlayer, done) {
        getSelectedTracksData(videoPlayer, trackSwitchingBase.FLAG1, done);
    }

    function selectedTracksBeforePlaying(videoPlayer, step, done) {
        allDescriptionIndex = getTrackDescriptionData(videoPlayer, trackSwitchingBase.FLAG2, done);
        videoPlayer.getSelectedTracks().then((currentList) => {
            currentDescriptionIndex = currentList[0];
            console.info('getSelectedTracks is success, currentDescriptionIndex is : ' + currentDescriptionIndex);
            switch (step) {
                case 'SAME_AND_DIFFERENT_TRACKS_TWICE':
                    console.info('step is SAME_AND_DIFFERENT_TRACKS_TWICE');
                    differentTracks = [];
                    differentTracks = getDifferentTracks(allDescriptionIndex, currentDescriptionIndex);
                    selectTrack(videoPlayer, currentDescriptionIndex);
                    selectTrack(videoPlayer, currentDescriptionIndex);
                    selectTrack(videoPlayer, differentTracks[0]);
                    selectTrack(videoPlayer, differentTracks[1]);
                    setTimeout(function () {
                        videoPlayer.play();
                        done();
                    }, TIMEOUT)
                    break;
                case 'DIFFERENT_TRACKS':
                    console.info('step is DIFFERENT_TRACKS');
                    differentTracks = [];
                    differentTracks = getDifferentTracks(allDescriptionIndex, currentDescriptionIndex);
                    selectTrack(videoPlayer, differentTracks[0]);
                    setTimeout(function () {
                        videoPlayer.play();
                        done();
                    }, TIMEOUT)
                    break;
                default:
                    console.info('step is BOUNDARY_TRACKS');
                    selectTrack(videoPlayer, allDescriptionIndex[0]);
                    selectTrack(videoPlayer, allDescriptionIndex[allDescriptionIndex.length-1]);
                    setTimeout(function () {
                        videoPlayer.play();
                        done();
                    }, TIMEOUT)
                    break;
            }
        }).catch((err) => {
            console.info('getSelectedTracks is fail, err: ' + err);
            expect().assertFail();
            done();
        })
    }

    async function getDescriptionAfterPlaying(videoPlayer, step, done) {
        videoPlayer.play().then(async (data) => {
            console.info('play is success, data: ' + data);
            switch (step) {
                case 'PLAY':
                    console.info('step is PLAY');
                    getTrackDescriptionData(videoPlayer, trackSwitchingBase.FLAG3, done);
                    break;
                case 'PAUSE':
                    console.info('step is PAUSE')
                    videoPlayer.pause().then((data) => {
                        console.info('pause is success, data: ' + data);
                        getTrackDescriptionData(videoPlayer, trackSwitchingBase.FLAG3, done);
                    }).catch((err) => {
                        console.info('pause is fail, err: ' + err);
                        expect().assertFail();
                        done();
                    })
                    break;
                case 'STOP':
                    console.info('step is STOP');
                    videoPlayer.stop().then((data) => {
                        console.info('stop is success, data: ' + data);
                        getTrackDescriptionData(videoPlayer, trackSwitchingBase.FLAG3, done);
                    }).catch((err) => {
                        console.info('stop is fail, err: ' + err);
                        expect().assertFail();
                        done();
                    })
                    break;
                case 'SEEK_50':
                    console.info('step is SEEK_50');
                    await videoPlayer.seek(Math.floor(videoPlayer.duration / 2)).then((data) => {
                        console.info('seek 50% success, data: ' + data);
                        getTrackDescriptionData(videoPlayer, trackSwitchingBase.FLAG3, done);
                    }).catch((err) => {
                        console.info('seek is fail, err: ' + err);
                        expect().assertFail();
                        done();
                    })
                    break;
                case 'SEEK_50_0':
                    console.info('step is SEEK_50_0');
                    await videoPlayer.seek(Math.floor(videoPlayer.duration / 2)).then((data) => {
                        console.info('seek 50% is success, data: ' + data);
                        expect(true).assertTrue();
                    }).catch((err) => {
                        console.info('seek is fail, err: ' + err);
                        expect().assertFail();
                    })
                    await videoPlayer.seek(0).then((data) => {
                        console.info('seek 0% is success, data: ' + data);
                        getTrackDescriptionData(videoPlayer, trackSwitchingBase.FLAG3, done);
                    }).catch((err) => {
                        console.info('seek is fail, err: ' + err);
                        expect().assertFail();
                        done();
                    })
                    break;
                case 'SEEK_50_30':
                    console.info('step is SEEK_50_30');
                    await videoPlayer.seek(Math.floor(videoPlayer.duration / 2)).then((data) => {
                        console.info('seek 50% is success, data: ' + data);
                        expect(true).assertTrue();
                    }).catch((err) => {
                        console.info('seek is fail, err: ' + err);
                        expect().assertFail();
                    })
                    await videoPlayer.seek(Math.floor(videoPlayer.duration / 10 * 3)).then((data) => {
                        console.info('seek 30% is success, data: ' + data);
                        getTrackDescriptionData(videoPlayer, trackSwitchingBase.FLAG3, done);
                    }).catch((err) => {
                        console.info('seek is fail, err: ' + err);
                        expect().assertFail();
                        done();
                    })
                    break;
                case 'SEEK_50_80':
                    console.info('step is SEEK_50_80');
                    await videoPlayer.seek(Math.floor(videoPlayer.duration / 2)).then((data) => {
                        console.info('seek 50% is success, data: ' + data);
                        expect(true).assertTrue();
                    }).catch((err) => {
                        console.info('seek is fail, err: ' + err);
                        expect().assertFail();
                    })
                    await videoPlayer.seek(Math.floor(videoPlayer.duration / 10 * 8)).then((data) => {
                        console.info('seek 80% is success, data: ' + data);
                        getTrackDescriptionData(videoPlayer, trackSwitchingBase.FLAG3, done);
                    }).catch((err) => {
                        console.info('seek is fail, err: ' + err);
                        expect().assertFail();
                        done();
                    })
                    break;
                default:
                    console.info('step is SEEK_50_100');
                    await videoPlayer.seek(Math.floor(videoPlayer.duration / 2)).then((data) => {
                        console.info('seek 50% is success, data: ' + data);
                        expect(true).assertTrue();
                    }).catch((err) => {
                        console.info('seek is fail, err: ' + err);
                        expect().assertFail();
                    })
                    await videoPlayer.seek(videoPlayer.duration).then((data) => {
                        console.info('seek 100% is success, data: ' + data);
                        getTrackDescriptionData(videoPlayer, trackSwitchingBase.FLAG3, done);
                    }).catch((err) => {
                        console.info('seek is fail, err: ' + err);
                        expect().assertFail();
                        done();
                    })
                    break;
            }
        }).catch((err) => {
            console.info('play is fail, err: ' + err);
            done();
        });
    }

    async function getSelectedTracksAfterPlaying(videoPlayer, step, done) {
        videoPlayer.play().then(async (data) => {
            console.info('play is success, data: ' + data);
            switch (step) {
                case 'PLAY':
                    console.info('step is PLAY');
                    getSelectedTracksData(videoPlayer, trackSwitchingBase.FLAG2, done);
                    break;
                case 'PAUSE':
                    console.info('step is PAUSE');
                    videoPlayer.pause().then((data) => {
                        console.info('pause is success, data: ' + data);
                        getSelectedTracksData(videoPlayer, trackSwitchingBase.FLAG2, done);
                    }).catch((err) => {
                        console.info('pause is fail, err: ' + err);
                        expect().assertFail();
                        done();
                    })
                    break;
                case 'STOP':
                    console.info('step is STOP');
                    videoPlayer.stop().then((data) => {
                        console.info('stop is success, data: ' + data);
                        getSelectedTracksData(videoPlayer, trackSwitchingBase.FLAG2, done);
                    }).catch((err) => {
                        console.info('stop is fail, err: ' + err);
                        expect().assertFail();
                        done();
                    })
                    break;
                case 'SEEK_50':
                    console.info('step is SEEK_50');
                    await videoPlayer.seek(Math.floor(videoPlayer.duration / 2)).then((data) => {
                        console.info('seek is success, data: ' + data);
                        getSelectedTracksData(videoPlayer, trackSwitchingBase.FLAG2, done);
                    }).catch((err) => {
                        console.info('seek is fail, err: ' + err);
                        expect().assertFail();
                        done();
                    })
                    break;
                case 'SEEK_50_0':
                    console.info('step is SEEK_50_0');
                    await videoPlayer.seek(Math.floor(videoPlayer.duration / 2)).then((data) => {
                        console.info('seek 50% is success, data: ' + data);
                        expect(true).assertTrue();
                    }).catch((err) => {
                        console.info('seek is fail, err: ' + err);
                        expect().assertFail();
                    })
                    await videoPlayer.seek(0).then((data) => {
                        console.info('seek 0% is success, data: ' + data);
                        getSelectedTracksData(videoPlayer, trackSwitchingBase.FLAG2, done);
                    }).catch((err) => {
                        console.info('seek is fail, err: ' + err);
                        expect().assertFail();
                        done();
                    })
                    break;
                case 'SEEK_50_30':
                    console.info('step is SEEK_50_30');
                    await videoPlayer.seek(Math.floor(videoPlayer.duration / 2)).then((data) => {
                        console.info('seek 50% is success, data: ' + data);
                        expect(true).assertTrue();
                    }).catch((err) => {
                        console.info('seek is fail, err: ' + err);
                        expect().assertFail();
                    })
                    await videoPlayer.seek(Math.floor(videoPlayer.duration / 10 * 3)).then((data) => {
                        console.info('seek 30% is success, data: ' + data);
                        getSelectedTracksData(videoPlayer, trackSwitchingBase.FLAG2, done);
                    }).catch((err) => {
                        console.info('seek is fail, err: ' + err);
                        expect().assertFail();
                        done();
                    })
                    break;
                case 'SEEK_50_80':
                    console.info('step is SEEK_50_80');
                    await videoPlayer.seek(Math.floor(videoPlayer.duration / 2)).then((data) => {
                        console.info('seek 50% is success, data: ' + data);
                        expect(true).assertTrue();
                    }).catch((err) => {
                        console.info('seek is fail, err: ' + err);
                        expect().assertFail();
                    })
                    await videoPlayer.seek(Math.floor(videoPlayer.duration / 10 * 8)).then((data) => {
                        console.info('seek 80% is success, data: ' + data);
                        getSelectedTracksData(videoPlayer, trackSwitchingBase.FLAG2, done);
                    }).catch((err) => {
                        console.info('seek is fail, err: ' + err);
                        expect().assertFail();
                        done();
                    })
                    break;
                default:
                    console.info('step is SEEK_50_100');
                    await videoPlayer.seek(Math.floor(videoPlayer.duration / 2)).then((data) => {
                        console.info('seek 50% is success, data: ' + data);
                        expect(true).assertTrue();
                    }).catch((err) => {
                        console.info('seek is fail, err: ' + err);
                        expect().assertFail();
                    })
                    await videoPlayer.seek(videoPlayer.duration).then((data) => {
                        console.info('seek 100% is success, data: ' + data);
                        getSelectedTracksData(videoPlayer, trackSwitchingBase.FLAG2, done);
                    }).catch((err) => {
                        console.info('seek is fail, err: ' + err);
                        expect().assertFail();
                        done();
                    })
                    break;
            }
        }).catch((err) => {
            console.info('play is fail, err: ' + err);
            done();
        });
    }

    async function selectedTracksAfterPlaying(videoPlayer, step, done) {
        videoPlayer.play().then(async (data) => {
            console.info('play is success, data is : ' + data);
            allDescriptionIndex = [];
            allDescriptionIndex = getTrackDescriptionData(videoPlayer, trackSwitchingBase.FLAG2, done);

            videoPlayer.getSelectedTracks().then(async (currentList) => {
                currentDescriptionIndex = currentList[0];
                console.info('getSelectedTracks is success, currentDescriptionIndex is : ' + currentDescriptionIndex);

                switch (step) {
                    case 'PLAY_SAME_AND_DIFFERENT_TRACKS_TWICE':
                        console.info('step is PLAY_SAME_AND_DIFFERENT_TRACKS_TWICE');
                        differentTracks = [];
                        differentTracks = getDifferentTracks(allDescriptionIndex, currentDescriptionIndex);
                        selectTrack(videoPlayer, currentDescriptionIndex);
                        selectTrack(videoPlayer, currentDescriptionIndex);
                        selectTrack(videoPlayer, differentTracks[0]);
                        selectTrack(videoPlayer, differentTracks[1]);
                        setTimeout(function () {
                            done();
                        }, TIMEOUT)
                        break;
                    case 'PLAY_DIFFERENT_TRACKS':
                        console.info('step is PLAY_DIFFERENT_TRACKS');
                        differentTracks = [];
                        differentTracks = getDifferentTracks(allDescriptionIndex, currentDescriptionIndex);
                        selectTrack(videoPlayer, differentTracks[0]);
                        setTimeout(function () {
                            done();
                        }, TIMEOUT)
                        break;
                    case 'PAUSE_DIFFERENT_TRACKS':
                        console.info('step is PAUSE_DIFFERENT_TRACKS');
                        videoPlayer.pause().then((data) => {
                            console.info('pause is success, data: ' + data);
                            differentTracks = [];
                            differentTracks = getDifferentTracks(allDescriptionIndex, currentDescriptionIndex);
                            selectTrack(videoPlayer, differentTracks[0]);
                            setTimeout(function () {
                                done();
                            }, TIMEOUT)
                        }).catch((err) => {
                            console.info('pause is fail, err: ' + err);
                            expect().assertFail();
                            done();
                        })
                        break;
                    case 'SEEK_50_DIFFERENT_TRACKS':
                        console.info('step is SEEK_50_DIFFERENT_TRACKS');
                        await videoPlayer.seek(Math.floor(videoPlayer.duration / 2)).then((data) => {
                            console.info('seek 50% is success, data: ' + data);
                            differentTracks = [];
                            differentTracks = getDifferentTracks(allDescriptionIndex, currentDescriptionIndex);
                            selectTrack(videoPlayer, differentTracks[0]);
                            setTimeout(function () {
                                done();
                            }, TIMEOUT)
                        }).catch((err) => {
                            console.info('seek is fail, err: ' + err);
                            expect().assertFail();
                            done();
                        })
                        break;
                    case 'SEEK_50_0_DIFFERENT_TRACKS':
                        console.info('step is SEEK_50_0_DIFFERENT_TRACKS');
                        differentTracks = [];
                        await videoPlayer.seek(Math.floor(videoPlayer.duration / 2)).then((data) => {
                            console.info('seek 50% is success, data: ' + data);
                            expect(true).assertTrue();
                        }).catch((err) => {
                            console.info('seek is fail, err: ' + err);
                            expect().assertFail();
                        })
                        await videoPlayer.seek(0).then((data) => {
                            console.info('seek 0% is success, data: ' + data);
                            differentTracks = getDifferentTracks(allDescriptionIndex, currentDescriptionIndex);
                            selectTrack(videoPlayer, differentTracks[0]);
                            setTimeout(function () {
                                done();
                            }, TIMEOUT)
                        }).catch((err) => {
                            console.info('seek is fail, err: ' + err);
                            expect().assertFail();
                            done();
                        })
                        break;
                    case 'SEEK_50_30_DIFFERENT_TRACKS':
                        console.info('step is SEEK_50_30_DIFFERENT_TRACKS');
                        differentTracks = []
                        await videoPlayer.seek(Math.floor(videoPlayer.duration / 2)).then((data) => {
                            console.info('seek 50% is success, data: ' + data);
                            expect(true).assertTrue();
                        }).catch((err) => {
                            console.info('seek is fail, err: ' + err);
                            expect().assertFail();
                        })
                        await videoPlayer.seek(Math.floor(videoPlayer.duration / 10 * 3)).then((data) => {
                            console.info('seek 30% is success, data: ' + data);
                            differentTracks = getDifferentTracks(allDescriptionIndex, currentDescriptionIndex);
                            selectTrack(videoPlayer, differentTracks[0]);
                            setTimeout(function () {
                                done();
                            }, TIMEOUT)
                        }).catch((err) => {
                            console.info('seek is fail, err: ' + err);
                            expect().assertFail();
                            done();
                        })
                        break;
                    case 'SEEK_50_80_DIFFERENT_TRACKS':
                        console.info('step is SEEK_50_80_DIFFERENT_TRACKS');
                        differentTracks = [];
                        await videoPlayer.seek(Math.floor(videoPlayer.duration / 2)).then((data) => {
                            console.info('seek 50% is success, data: ' + data);
                            expect(true).assertTrue();
                        }).catch((err) => {
                            console.info('seek is fail, err: ' + err);
                            expect().assertFail();
                        })
                        await videoPlayer.seek(Math.floor(videoPlayer.duration / 10 * 8)).then((data) => {
                            console.info('seek 80% is success, data: ' + data);
                            differentTracks = getDifferentTracks(allDescriptionIndex, currentDescriptionIndex);
                            selectTrack(videoPlayer, differentTracks[0]);
                            setTimeout(function () {
                                done();
                            }, TIMEOUT)
                        }).catch((err) => {
                            console.info('seek is fail, err: ' + err);
                            expect().assertFail();
                            done();
                        })
                        break;
                    case 'SEEK_50_100_DIFFERENT_TRACKS':
                        console.info('step is SEEK_50_100_DIFFERENT_TRACKS');
                        differentTracks = [];
                        await videoPlayer.seek(Math.floor(videoPlayer.duration / 2)).then((data) => {
                            console.info('seek 50% is success, data: ' + data);
                            expect(true).assertTrue();
                        }).catch((err) => {
                            console.info('seek is fail, err: ' + err);
                            expect().assertFail();
                        })
                        await videoPlayer.seek(videoPlayer.duration).then((data) => {
                            console.info('seek 100% is success, data: ' + data);
                            differentTracks = getDifferentTracks(allDescriptionIndex, currentDescriptionIndex);
                            selectTrack(videoPlayer, differentTracks[0]);
                            setTimeout(function () {
                                done();
                            }, TIMEOUT)
                        }).catch((err) => {
                            console.info('seek is fail, err: ' + err);
                            expect().assertFail();
                            done();
                        })
                        break;
                    default:
                        console.info('step is BOUNDARY_TRACKS');
                        selectTrack(videoPlayer, allDescriptionIndex[0]);
                        selectTrack(videoPlayer, allDescriptionIndex[allDescriptionIndex.length-1]);
                        setTimeout(function () {
                            done();
                        }, TIMEOUT)
                        break;
                }
            }).catch((err) => {
                console.info('getSelectedTracks is fail, err: ' + err);
                expect().assertFail();
                done();
            })
        }).catch((err) => {
            console.info('play is fail, err: ' + err);
            expect().assertFail();
            done();
        })
    }

    /* *
       * @tc.number    : SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_0100
       * @tc.name      : Get all track information before audio and video playback
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level0
     */
    it('SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_0100', 0, async function (done) {
        console.info('-----------SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_0100 is start-----------')
        videoPlayer = await trackSwitchingBase.initHttpVideoPlayer
        (trackSwitchingBase.VIDEO_HTTP_PATH + trackSwitchingBase.H263_MP3_3TRK_MKV, trackSwitchingBase.surfaceID);
        getDescriptionBeforePlaying(videoPlayer, done);
        console.info('-----------SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_0100 is end-----------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_0200
       * @tc.name      : Get the current track information before playing audio and video
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level0
     */
    it('SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_0200', 0, async function (done) {
        console.info('-----------SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_0200 is start-----------')
        videoPlayer = await trackSwitchingBase.initHttpVideoPlayer
        (trackSwitchingBase.VIDEO_HTTP_PATH + trackSwitchingBase.H263_MP3_3TRK_MKV, trackSwitchingBase.surfaceID);
        getSelectedTracksBeforePlaying(videoPlayer, done);
        console.info('-----------SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_0200 is end-----------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_0300
       * @tc.name      : Before playing audio and video, switch tracks that are consistent with and inconsistent
                         with the current track index for many times
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level1
     */
    it('SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_0300', 0, async function (done) {
        console.info('-----------SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_0300 is start-----------')
        videoPlayer = await trackSwitchingBase.initHttpVideoPlayer
        (trackSwitchingBase.VIDEO_HTTP_PATH + trackSwitchingBase.H263_MP3_3TRK_MKV, trackSwitchingBase.surfaceID);
        selectedTracksBeforePlaying(videoPlayer, 'SAME_AND_DIFFERENT_TRACKS_TWICE', done);
        console.info('-----------SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_0300 is end-----------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_0400
       * @tc.name      : Before audio and video playback, input the track index according to the boundary
                         value to switch the track
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level2
     */
    it('SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_0400', 0, async function (done) {
        console.info('-----------SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_0400 is start-----------')
        videoPlayer = await trackSwitchingBase.initHttpVideoPlayer
        (trackSwitchingBase.VIDEO_HTTP_PATH + trackSwitchingBase.H263_MP3_3TRK_MKV, trackSwitchingBase.surfaceID);
        selectedTracksBeforePlaying(videoPlayer, 'BOUNDARY_TRACKS', done);
        console.info('-----------SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_0400 is end-----------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_0500
       * @tc.name      : Audio track switching of different encoding and decoding formats before audio and
                         video playback
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level2
     */
    it('SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_0500', 0, async function (done) {
        console.info('-----------SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_0500 is start-----------')
        videoPlayer = await trackSwitchingBase.initHttpVideoPlayer
        (trackSwitchingBase.VIDEO_HTTP_PATH + trackSwitchingBase.H263_AAC_1TRK_MP3_1TRK_MKV,
            trackSwitchingBase.surfaceID);
        selectedTracksBeforePlaying(videoPlayer, 'DIFFERENT_TRACKS', done);
        console.info('-----------SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_0500 is end-----------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_0600
       * @tc.name      : Before audio and video playback, the audio track of audio and video files in
                         aac+h.263 format is switched
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level2
     */
    it('SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_0600', 0, async function (done) {
        console.info('-----------SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_0600 is start-----------')
        videoPlayer = await trackSwitchingBase.initHttpVideoPlayer
        (trackSwitchingBase.VIDEO_HTTP_PATH + trackSwitchingBase.H263_AAC_3TRK_MKV, trackSwitchingBase.surfaceID);
        selectedTracksBeforePlaying(videoPlayer, 'DIFFERENT_TRACKS', done);
        console.info('-----------SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_0600 is end-----------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_0700
       * @tc.name      : Before audio and video playback, mp3+h.263 format audio and video file track switching
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level2
     */
    it('SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_0700', 0, async function (done) {
        console.info('-----------SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_0700 is start-----------')
        videoPlayer = await trackSwitchingBase.initHttpVideoPlayer
        (trackSwitchingBase.VIDEO_HTTP_PATH + trackSwitchingBase.H263_MP3_3TRK_MKV, trackSwitchingBase.surfaceID);
        selectedTracksBeforePlaying(videoPlayer, 'DIFFERENT_TRACKS', done);
        console.info('-----------SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_0700 is end-----------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_0800
       * @tc.name      : Before audio and video playback, audio track switching of audio and video files
                         in aac+h.264 format
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level2
     */
    it('SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_0800', 0, async function (done) {
        console.info('-----------SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_0800 is start-----------')
        videoPlayer = await trackSwitchingBase.initHttpVideoPlayer
        (trackSwitchingBase.VIDEO_HTTP_PATH + trackSwitchingBase.H264_AAC_3TRK_MKV, trackSwitchingBase.surfaceID);
        selectedTracksBeforePlaying(videoPlayer, 'DIFFERENT_TRACKS', done);
        console.info('-----------SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_0800 is end-----------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_0900
       * @tc.name      : Before audio and video playback, mp3+h.264 format audio and video file track switching
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level2
     */
    it('SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_0900', 0, async function (done) {
        console.info('-----------SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_0900 is start-----------')
        videoPlayer = await trackSwitchingBase.initHttpVideoPlayer
        (trackSwitchingBase.VIDEO_HTTP_PATH + trackSwitchingBase.H264_MP3_3TRK_MKV, trackSwitchingBase.surfaceID);
        selectedTracksBeforePlaying(videoPlayer, 'DIFFERENT_TRACKS', done);
        console.info('-----------SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_0900 is end-----------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_1000
       * @tc.name      : Before audio and video playback, the audio track of audio and video files in
                         aac+mpeg2 format is switched
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level2
     */
    it('SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_1000', 0, async function (done) {
        console.info('-----------SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_1000 is start-----------')
        videoPlayer = await trackSwitchingBase.initHttpVideoPlayer
        (trackSwitchingBase.VIDEO_HTTP_PATH + trackSwitchingBase.MPEG2_AAC_3TRK_MKV, trackSwitchingBase.surfaceID);
        selectedTracksBeforePlaying(videoPlayer, 'DIFFERENT_TRACKS', done);
        console.info('-----------SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_1000 is end-----------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_1100
       * @tc.name      : Before audio and video playback, mp3+mpeg2 format audio and video file track switching
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level2
     */
    it('SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_1100', 0, async function (done) {
        console.info('-----------SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_1100 is start-----------')
        videoPlayer = await trackSwitchingBase.initHttpVideoPlayer
        (trackSwitchingBase.VIDEO_HTTP_PATH + trackSwitchingBase.MPEG2_MP3_3TRK_MKV, trackSwitchingBase.surfaceID);
        selectedTracksBeforePlaying(videoPlayer, 'DIFFERENT_TRACKS', done);
        console.info('-----------SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_1100 is end-----------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_1200
       * @tc.name      : Before audio and video playback, audio and video files in aac+mpeg4 format are switched
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level2
     */
    it('SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_1200', 0, async function (done) {
        console.info('-----------SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_1200 is start-----------')
        videoPlayer = await trackSwitchingBase.initHttpVideoPlayer
        (trackSwitchingBase.VIDEO_HTTP_PATH + trackSwitchingBase.MPEG4_AAC_3TRK_MKV, trackSwitchingBase.surfaceID);
        selectedTracksBeforePlaying(videoPlayer, 'DIFFERENT_TRACKS', done);
        console.info('-----------SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_1200 is end-----------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_1300
       * @tc.name      : Before audio and video playback, mp3+mpeg4 format audio and video file track switching
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level2
     */
    it('SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_1300', 0, async function (done) {
        console.info('-----------SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_1300 is start-----------')
        videoPlayer = await trackSwitchingBase.initHttpVideoPlayer
        (trackSwitchingBase.VIDEO_HTTP_PATH + trackSwitchingBase.MPEG4_MP3_3TRK_MKV, trackSwitchingBase.surfaceID);
        selectedTracksBeforePlaying(videoPlayer, 'DIFFERENT_TRACKS', done);
        console.info('-----------SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_1300 is end-----------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_1400
       * @tc.name      : Before audio and video playback, audio files with 16 audio tracks are switched
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level2
     */
    it('SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_1400', 0, async function (done) {
        console.info('-----------SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_1400 is start-----------')
        videoPlayer = await trackSwitchingBase.initHttpVideoPlayer
        (trackSwitchingBase.VIDEO_HTTP_PATH + trackSwitchingBase.H263_AAC_16TRK_MKV, trackSwitchingBase.surfaceID);
        selectedTracksBeforePlaying(videoPlayer, 'DIFFERENT_TRACKS', done);
        console.info('-----------SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_1400 is end-----------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_1500
       * @tc.name      : Get all track information after audio and video playback
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level0
     */
    it('SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_1500', 0, async function (done) {
        console.info('-----------SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_1500 is start-----------')
        videoPlayer = await trackSwitchingBase.initHttpVideoPlayer
        (trackSwitchingBase.VIDEO_HTTP_PATH + trackSwitchingBase.H263_AAC_3TRK_MKV, trackSwitchingBase.surfaceID);
        await getDescriptionAfterPlaying(videoPlayer, 'PLAY', done);
        console.info('-----------SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_1500 is end-----------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_1600
       * @tc.name      : Pause after audio and video playback to obtain all track information
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level0
     */
    it('SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_1600', 0, async function (done) {
        console.info('-----------SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_1600 is start-----------')
        videoPlayer = await trackSwitchingBase.initHttpVideoPlayer
        (trackSwitchingBase.VIDEO_HTTP_PATH + trackSwitchingBase.H263_AAC_3TRK_MKV, trackSwitchingBase.surfaceID);
        await getDescriptionAfterPlaying(videoPlayer, 'PAUSE', done);
        console.info('-----------SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_1600 is end-----------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_1700
       * @tc.name      : Stop playing audio and video and get all track information
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level1
     */
    it('SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_1700', 0, async function (done) {
        console.info('-----------SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_1700 is start-----------')
        videoPlayer = await trackSwitchingBase.initHttpVideoPlayer
        (trackSwitchingBase.VIDEO_HTTP_PATH + trackSwitchingBase.H263_AAC_3TRK_MKV, trackSwitchingBase.surfaceID);
        await getDescriptionAfterPlaying(videoPlayer, 'STOP', done);
        console.info('-----------SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_1700 is end-----------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_1800
       * @tc.name      : After playing the audio, seek it to 50% of the progress bar to obtain all track information
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level1
     */
    it('SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_1800', 0, async function (done) {
        console.info('-----------SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_1800 is start-----------')
        videoPlayer = await trackSwitchingBase.initHttpVideoPlayer
        (trackSwitchingBase.VIDEO_HTTP_PATH + trackSwitchingBase.H263_AAC_3TRK_MKV, trackSwitchingBase.surfaceID);
        await getDescriptionAfterPlaying(videoPlayer, 'SEEK_50', done);
        console.info('-----------SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_1800 is end-----------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_1900
       * @tc.name      : After audio and video is played, seek to 50% of the progress bar, and then seek to 0%
                         of the progress bar to obtain all track information
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level1
     */
    it('SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_1900', 0, async function (done) {
        console.info('-----------SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_1900 is start-----------')
        videoPlayer = await trackSwitchingBase.initHttpVideoPlayer
        (trackSwitchingBase.VIDEO_HTTP_PATH + trackSwitchingBase.H263_AAC_3TRK_MKV, trackSwitchingBase.surfaceID);
        await getDescriptionAfterPlaying(videoPlayer, 'SEEK_50_0', done);
        console.info('-----------SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_1900 is end-----------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_2000
       * @tc.name      : After audio and video is played, seek to 50% of the progress bar, and then seek to 30% of
                         the progress bar to obtain all track information
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level1
     */
    it('SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_2000', 0, async function (done) {
        console.info('-----------SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_2000 is start-----------')
        videoPlayer = await trackSwitchingBase.initHttpVideoPlayer
        (trackSwitchingBase.VIDEO_HTTP_PATH + trackSwitchingBase.H263_AAC_3TRK_MKV, trackSwitchingBase.surfaceID);
        await getDescriptionAfterPlaying(videoPlayer, 'SEEK_50_30', done);
        console.info('-----------SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_2000 is end-----------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_2100
       * @tc.name      : After audio and video is played, seek to 50% of the progress bar, and then seek to 80% of
                         the progress bar to obtain all track information
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level1
     */
    it('SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_2100', 0, async function (done) {
        console.info('-----------SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_2100 is start-----------')
        videoPlayer = await trackSwitchingBase.initHttpVideoPlayer
        (trackSwitchingBase.VIDEO_HTTP_PATH + trackSwitchingBase.H263_AAC_3TRK_MKV, trackSwitchingBase.surfaceID);
        await getDescriptionAfterPlaying(videoPlayer, 'SEEK_50_80', done);
        console.info('-----------SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_2100 is end-----------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_2200
       * @tc.name      : After audio and video is played, seek to 50% of the progress bar, and then seek to 100%
                         of the progress bar to obtain all track information
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level1
     */
    it('SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_2200', 0, async function (done) {
        console.info('-----------SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_2200 is start-----------')
        videoPlayer = await trackSwitchingBase.initHttpVideoPlayer
        (trackSwitchingBase.VIDEO_HTTP_PATH + trackSwitchingBase.H263_AAC_3TRK_MKV, trackSwitchingBase.surfaceID);
        await getDescriptionAfterPlaying(videoPlayer, 'SEEK_50_100', done);
        console.info('-----------SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_2200 is end-----------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_2300
       * @tc.name      : After audio and video playback, obtain the current track information
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level0
     */
    it('SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_2300', 0, async function (done) {
        console.info('-----------SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_2300 is start-----------')
        videoPlayer = await trackSwitchingBase.initHttpVideoPlayer
        (trackSwitchingBase.VIDEO_HTTP_PATH + trackSwitchingBase.H263_AAC_3TRK_MKV, trackSwitchingBase.surfaceID);
        await getSelectedTracksAfterPlaying(videoPlayer, 'PLAY', done);
        console.info('-----------SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_2300 is end-----------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_2400
       * @tc.name      : Pause after audio and video playback to obtain the current track information
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level1
     */
    it('SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_2400', 0, async function (done) {
        console.info('-----------SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_2400 is start-----------')
        videoPlayer = await trackSwitchingBase.initHttpVideoPlayer
        (trackSwitchingBase.VIDEO_HTTP_PATH + trackSwitchingBase.H263_AAC_3TRK_MKV, trackSwitchingBase.surfaceID);
        await getSelectedTracksAfterPlaying(videoPlayer, 'PAUSE', done);
        console.info('-----------SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_2400 is end-----------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_2500
       * @tc.name      : Stop playing audio and video, and get the current track information
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level1
     */
    it('SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_2500', 0, async function (done) {
        console.info('-----------SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_2500 is start-----------')
        videoPlayer = await trackSwitchingBase.initHttpVideoPlayer
        (trackSwitchingBase.VIDEO_HTTP_PATH + trackSwitchingBase.H263_AAC_3TRK_MKV, trackSwitchingBase.surfaceID);
        await getSelectedTracksAfterPlaying(videoPlayer, 'STOP', done);
        console.info('-----------SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_2500 is end-----------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_2600
       * @tc.name      : After playing the audio, play it to 50% of the progress bar to obtain the
                         current track information
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level1
     */
    it('SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_2600', 0, async function (done) {
        console.info('-----------SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_2600 is start-----------')
        videoPlayer = await trackSwitchingBase.initHttpVideoPlayer
        (trackSwitchingBase.VIDEO_HTTP_PATH + trackSwitchingBase.H263_AAC_3TRK_MKV, trackSwitchingBase.surfaceID);
        await getSelectedTracksAfterPlaying(videoPlayer, 'SEEK_50', done);
        console.info('-----------SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_2600 is end-----------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_2700
       * @tc.name      : After the audio is played, seek to 50% of the progress bar, and then seek to 0% of the
                         progress bar to obtain the current track information
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level1
     */
    it('SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_2700', 0, async function (done) {
        console.info('-----------SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_2700 is start-----------')
        videoPlayer = await trackSwitchingBase.initHttpVideoPlayer
        (trackSwitchingBase.VIDEO_HTTP_PATH + trackSwitchingBase.H263_AAC_3TRK_MKV, trackSwitchingBase.surfaceID);
        await getSelectedTracksAfterPlaying(videoPlayer, 'SEEK_50_0', done);
        console.info('-----------SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_2700 is end-----------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_2800
       * @tc.name      : After the audio is played, seek to 50% of the progress bar, and then seek to 30% of the
                         progress bar to obtain the current track information
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level1
     */
    it('SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_2800', 0, async function (done) {
        console.info('-----------SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_2800 is start-----------')
        videoPlayer = await trackSwitchingBase.initHttpVideoPlayer
        (trackSwitchingBase.VIDEO_HTTP_PATH + trackSwitchingBase.H263_AAC_3TRK_MKV, trackSwitchingBase.surfaceID);
        await getSelectedTracksAfterPlaying(videoPlayer, 'SEEK_50_30', done);
        console.info('-----------SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_2800 is end-----------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_2900
       * @tc.name      : After the audio is played, seek to 50% of the progress bar, and then seek to 80% of the
                         progress bar to obtain the current track information
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level1
     */
    it('SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_2900', 0, async function (done) {
        console.info('-----------SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_2900 is start-----------')
        videoPlayer = await trackSwitchingBase.initHttpVideoPlayer
        (trackSwitchingBase.VIDEO_HTTP_PATH + trackSwitchingBase.H263_AAC_3TRK_MKV, trackSwitchingBase.surfaceID);
        await getSelectedTracksAfterPlaying(videoPlayer, 'SEEK_50_80', done);
        console.info('-----------SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_2900 is end-----------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_3000
       * @tc.name      : After the audio is played, seek to 50% of the progress bar, and then seek to 100% of the
                         progress bar to obtain the current track information
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level1
     */
    it('SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_3000', 0, async function (done) {
        console.info('-----------SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_3000 is start-----------')
        videoPlayer = await trackSwitchingBase.initHttpVideoPlayer
        (trackSwitchingBase.VIDEO_HTTP_PATH + trackSwitchingBase.H263_AAC_3TRK_MKV, trackSwitchingBase.surfaceID);
        await getSelectedTracksAfterPlaying(videoPlayer, 'SEEK_50_100', done);
        console.info('-----------SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_3000 is end-----------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_3100
       * @tc.name      : After audio and video playback, switch tracks that are consistent with and inconsistent
                         with the current track index for many times
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level1
     */
    it('SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_3100', 0, async function (done) {
        console.info('-----------SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_3100 is start-----------')
        videoPlayer = await trackSwitchingBase.initHttpVideoPlayer
        (trackSwitchingBase.VIDEO_HTTP_PATH + trackSwitchingBase.H263_AAC_3TRK_MKV, trackSwitchingBase.surfaceID);
        await selectedTracksAfterPlaying(videoPlayer, 'PLAY_SAME_AND_DIFFERENT_TRACKS_TWICE', done);
        console.info('-----------SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_3100 is end-----------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_3200
       * @tc.name      : Pause after audio and video playback, and transfer the audio track index inconsistent with
                         the current track for audio track switching
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level1
     */
    it('SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_3200', 0, async function (done) {
        console.info('-----------SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_3200 is start-----------')
        videoPlayer = await trackSwitchingBase.initHttpVideoPlayer
        (trackSwitchingBase.VIDEO_HTTP_PATH + trackSwitchingBase.H263_AAC_3TRK_MKV, trackSwitchingBase.surfaceID);
        await selectedTracksAfterPlaying(videoPlayer, 'PAUSE_DIFFERENT_TRACKS', done);
        console.info('-----------SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_3200 is end-----------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_3300
       * @tc.name      : When the audio and video are played to 50%, the audio track index inconsistent with the
                         current track is transmitted for audio track switching
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level1
     */
    it('SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_3300', 0, async function (done) {
        console.info('-----------SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_3300 is start-----------')
        videoPlayer = await trackSwitchingBase.initHttpVideoPlayer
        (trackSwitchingBase.VIDEO_HTTP_PATH + trackSwitchingBase.H263_AAC_3TRK_MKV, trackSwitchingBase.surfaceID);
        await selectedTracksAfterPlaying(videoPlayer, 'SEEK_50_DIFFERENT_TRACKS', done);
        console.info('-----------SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_3300 is end-----------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_3400
       * @tc.name      : After the audio and video are played, seek to 50% of the progress bar, and then seek to 0%
                         of the progress bar. Pass in the track index that is inconsistent with the current track for
                         track switching
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level1
     */
    it('SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_3400', 0, async function (done) {
        console.info('-----------SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_3400 is start-----------')
        videoPlayer = await trackSwitchingBase.initHttpVideoPlayer
        (trackSwitchingBase.VIDEO_HTTP_PATH + trackSwitchingBase.H263_AAC_3TRK_MKV, trackSwitchingBase.surfaceID);
        await selectedTracksAfterPlaying(videoPlayer, 'SEEK_50_0_DIFFERENT_TRACKS', done);
        console.info('-----------SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_3400 is end-----------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_3500
       * @tc.name      : After the audio and video are played, seek to 50% of the progress bar, and then seek to 30%
                         of the progress bar. Pass in the track index that is inconsistent with the current track for
                         track switching
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level1
     */
    it('SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_3500', 0, async function (done) {
        console.info('-----------SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_3500 is start-----------')
        videoPlayer = await trackSwitchingBase.initHttpVideoPlayer
        (trackSwitchingBase.VIDEO_HTTP_PATH + trackSwitchingBase.H263_AAC_3TRK_MKV, trackSwitchingBase.surfaceID);
        await selectedTracksAfterPlaying(videoPlayer, 'SEEK_50_30_DIFFERENT_TRACKS', done);
        console.info('-----------SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_3500 is end-----------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_3600
       * @tc.name      : After the audio and video are played, seek to 50% of the progress bar, and then seek to 80%
                         of the progress bar. Pass in the track index that is inconsistent with the current track
                         for track switching
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level1
     */
    it('SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_3600', 0, async function (done) {
        console.info('-----------SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_3600 is start-----------')
        videoPlayer = await trackSwitchingBase.initHttpVideoPlayer
        (trackSwitchingBase.VIDEO_HTTP_PATH + trackSwitchingBase.H263_AAC_3TRK_MKV, trackSwitchingBase.surfaceID);
        await selectedTracksAfterPlaying(videoPlayer, 'SEEK_50_80_DIFFERENT_TRACKS', done);
        console.info('-----------SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_3600 is end-----------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_3700
       * @tc.name      : After the audio and video are played, seek to 50% of the progress bar, and then seek to 100%
                         of the progress bar. Pass in the track index that is inconsistent with the current track for
                         track switching
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level1
     */
    it('SUB_MEDIA_LOCAL_AUDIO_AND_VIDEO_PLAYER_FUNCTION_llPROMISE_3700', 0, async function (done) {
        console.info('-----------SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_3700 is start-----------')
        videoPlayer = await trackSwitchingBase.initHttpVideoPlayer
        (trackSwitchingBase.VIDEO_HTTP_PATH + trackSwitchingBase.H263_AAC_3TRK_MKV, trackSwitchingBase.surfaceID);
        await selectedTracksAfterPlaying(videoPlayer, 'SEEK_50_100_DIFFERENT_TRACKS', done);
        console.info('-----------SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_3700 is end-----------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_3800
       * @tc.name      : After audio and video playback, input the track index according to the boundary value,
                         and switch the audio track
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level2
     */
    it('SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_3800', 0, async function (done) {
        console.info('-----------SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_3800 is start-----------')
        videoPlayer = await trackSwitchingBase.initHttpVideoPlayer
        (trackSwitchingBase.VIDEO_HTTP_PATH + trackSwitchingBase.H263_AAC_3TRK_MKV, trackSwitchingBase.surfaceID);
        await selectedTracksAfterPlaying(videoPlayer, 'BOUNDARY_TRACKS', done);
        console.info('-----------SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_3800 is end-----------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_3900
       * @tc.name      : After audio and video playback, audio track switching of different encoding and
                         decoding formats
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level2
     */
    it('SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_3900', 0, async function (done) {
        console.info('-----------SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_3900 is start-----------')
        videoPlayer = await trackSwitchingBase.initHttpVideoPlayer
        (trackSwitchingBase.VIDEO_HTTP_PATH + trackSwitchingBase.H263_AAC_3TRK_MKV, trackSwitchingBase.surfaceID);
        await selectedTracksAfterPlaying(videoPlayer, 'PLAY_DIFFERENT_TRACKS', done);
        console.info('-----------SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_3900 is end-----------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_4000
       * @tc.name      : After audio and video playback, the audio track of audio and video files in
                         aac+h.263 format is switched
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level2
     */
    it('SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_4000', 0, async function (done) {
        console.info('-----------SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_4000 is start-----------')
        videoPlayer = await trackSwitchingBase.initHttpVideoPlayer
        (trackSwitchingBase.VIDEO_HTTP_PATH + trackSwitchingBase.H263_AAC_3TRK_MKV, trackSwitchingBase.surfaceID);
        await selectedTracksAfterPlaying(videoPlayer, 'PLAY_DIFFERENT_TRACKS', done);
        console.info('-----------SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_4000 is end-----------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_4100
       * @tc.name      : After audio and video playback, mp3+h.263 format audio and video file track switching
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level2
     */
    it('SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_4100', 0, async function (done) {
        console.info('-----------SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_4100 is start-----------')
        videoPlayer = await trackSwitchingBase.initHttpVideoPlayer
        (trackSwitchingBase.VIDEO_HTTP_PATH + trackSwitchingBase.H263_AAC_3TRK_MKV, trackSwitchingBase.surfaceID);
        await selectedTracksAfterPlaying(videoPlayer, 'PLAY_DIFFERENT_TRACKS', done);
        console.info('-----------SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_4100 is end-----------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_4200
       * @tc.name      : After audio and video playback, audio and video files in aac+h.264 format are switched
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level2
     */
    it('SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_4200', 0, async function (done) {
        console.info('-----------SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_4200 is start-----------')
        videoPlayer = await trackSwitchingBase.initHttpVideoPlayer
        (trackSwitchingBase.VIDEO_HTTP_PATH + trackSwitchingBase.H264_AAC_3TRK_MKV, trackSwitchingBase.surfaceID);
        await selectedTracksAfterPlaying(videoPlayer, 'PLAY_DIFFERENT_TRACKS', done);
        console.info('-----------SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_4200 is end-----------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_4300
       * @tc.name      : After audio and video playback, mp3+h.264 format audio and video file track switching
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level2
     */
    it('SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_4300', 0, async function (done) {
        console.info('-----------SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_4300 is start-----------')
        videoPlayer = await trackSwitchingBase.initHttpVideoPlayer
        (trackSwitchingBase.VIDEO_HTTP_PATH + trackSwitchingBase.H264_MP3_3TRK_MKV, trackSwitchingBase.surfaceID);
        await selectedTracksAfterPlaying(videoPlayer, 'PLAY_DIFFERENT_TRACKS', done);
        console.info('-----------SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_4300 is end-----------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_4400
       * @tc.name      : After audio and video playback, audio and video files in aac+mpeg2 format are switched
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level2
     */
    it('SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_4400', 0, async function (done) {
        console.info('-----------SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_4400 is start-----------')
        videoPlayer = await trackSwitchingBase.initHttpVideoPlayer
        (trackSwitchingBase.VIDEO_HTTP_PATH + trackSwitchingBase.MPEG2_AAC_3TRK_MKV, trackSwitchingBase.surfaceID);
        await selectedTracksAfterPlaying(videoPlayer, 'PLAY_DIFFERENT_TRACKS', done);
        console.info('-----------SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_4400 is end-----------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_4500
       * @tc.name      : After audio and video playback, mp3+mpeg2 format audio and video file track switching
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level2
     */
    it('SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_4500', 0, async function (done) {
        console.info('-----------SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_4500 is start-----------')
        videoPlayer = await trackSwitchingBase.initHttpVideoPlayer
        (trackSwitchingBase.VIDEO_HTTP_PATH + trackSwitchingBase.MPEG2_MP3_3TRK_MKV, trackSwitchingBase.surfaceID);
        await selectedTracksAfterPlaying(videoPlayer, 'PLAY_DIFFERENT_TRACKS', done);
        console.info('-----------SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_4500 is end-----------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_4600
       * @tc.name      : After audio and video playback, audio and video files in aac+mpeg4 format are switched
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level2
     */
    it('SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_4600', 0, async function (done) {
        console.info('-----------SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_4600 is start-----------')
        videoPlayer = await trackSwitchingBase.initHttpVideoPlayer
        (trackSwitchingBase.VIDEO_HTTP_PATH + trackSwitchingBase.MPEG4_AAC_3TRK_MKV, trackSwitchingBase.surfaceID);
        await selectedTracksAfterPlaying(videoPlayer, 'PLAY_DIFFERENT_TRACKS', done);
        console.info('-----------SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_4600 is end-----------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_4700
       * @tc.name      : After audio and video playback, mp3+mpeg4 format audio and video file track switching
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level2
     */
    it('SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_4700', 0, async function (done) {
        console.info('-----------SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_4700 is start-----------')
        videoPlayer = await trackSwitchingBase.initHttpVideoPlayer
        (trackSwitchingBase.VIDEO_HTTP_PATH + trackSwitchingBase.MPEG4_MP3_3TRK_MKV, trackSwitchingBase.surfaceID);
        await selectedTracksAfterPlaying(videoPlayer, 'PLAY_DIFFERENT_TRACKS', done);
        console.info('-----------SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_4700 is end-----------')
    })

    /* *
       * @tc.number    : SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_4800
       * @tc.name      : After audio and video playback, audio files with 16 audio tracks are switched
       * @tc.desc      : Audio and video track switching
       * @tc.size      : MediumTest
       * @tc.type      : Function test
       * @tc.level     : Level2
     */
    it('SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_4800', 0, async function (done) {
        console.info('-----------SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_4800 is start-----------')
        videoPlayer = await trackSwitchingBase.initHttpVideoPlayer
        (trackSwitchingBase.VIDEO_HTTP_PATH + trackSwitchingBase.H263_AAC_16TRK_MKV, trackSwitchingBase.surfaceID);
        await selectedTracksAfterPlaying(videoPlayer, 'PLAY_DIFFERENT_TRACKS', done);
        console.info('-----------SUB_MEDIA_NETWORK_AUDIO_AND_VIDEO_PLAYER_FUNCTION_PROMISE_4800 is end-----------')
    })

})
