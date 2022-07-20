// @ts-nocheck
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

import media from '@ohos.multimedia.media';
import * as mediaTestBase from './MediaTestBase.js'

export const pagePath1 = 'pages/surfaceTest/surfaceTest';
export const pagePath2 = 'pages/surfaceTest2/surfaceTest2';
export const AUDIO_HTTP_PATH = 'http://123.57.24.33:8000/04.audioplayer/multiAudioTrack/';
export const VIDEO_HTTP_PATH = 'http://123.57.24.33:8000/03.videoplayer/multiAudioTrack/';
export const AUDIO_SOURCE = 'muliaudio_aac_3trk.mkv';
export const AUDIO_DIFFERENT_CODES_SOURCE = 'muliaudio_aac_2trk_mp3_1trk.mkv';
export const AAC_CODES_SOURCE = 'muliaudio_aac_3trk.mkv';
export const MP3_CODES_SOURCE = 'muliaudio_mp3_3trk.mkv';
export const AAC_CODES_16TRACK = 'muliaudio_aac_16trk.mkv';
export const VIDEO_SOURCE = 'muliaudio_h263_1trk_aac_2trk.mkv';
export const VIDEO_DIFFERENT_CODES_SOURCE = 'muliaudio_h263_1trk_aac_1trk_mp3_1trk.mkv';
export const H263_AAC_SOURCE = 'muliaudio_h263_1trk_aac_2trk.mkv';
export const H263_MP3_SOURCE = 'muliaudio_h263_1trk_mp3_2trk.mkv';
export const H264_AAC_SOURCE = 'muliaudio_h264_1trk_aac_2trk.mkv';
export const H264_MP3_SOURCE = 'muliaudio_h264_1trk_mp3_2trk.mkv';
export const MPEG2_AAC_SOURCE = 'muliaudio_mpeg2_1trk_aac_2trk.mkv';
export const MPEG2_MP3_SOURCE = 'muliaudio_mpeg2_1trk_mp3_2trk.mkv';
export const MPEG4_AAC_SOURCE = 'muliaudio_mpeg4_1trk_aac_2trk.mkv';
export const MPEG4_MP3_SOURCE = 'muliaudio_mpeg4_1trk_mp3_2trk.mkv';
export const H263_AAC_16_SOURCE = 'muliaudio_h263_1trk_aac_16trk.mkv';
export const FLAG1 = 0;
export const FLAG2 = 1;
export const FLAG3 = 2;
export const FLAG4 = 3;
export const FLAG5 = 4;
export const FLAG6 = 5;
export let audioPlayer = media.createAudioPlayer();
export let videoPlayer = null;
export let pageId = 0;
export let surfaceID = '';
let fdLocal = 'fd://';
let fileDescriptor = undefined;

export async function sleep(time) {
    return new Promise((resolve) => setTimeout(resolve, time));
}

export async function initAudioPlayer() {
    if (typeof (audioPlayer) != 'undefined') {
        audioPlayer.release();
        audioPlayer = undefined;
        console.info("audioPlayer release success");
    }
    audioPlayer = await media.createAudioPlayer();
    if (typeof (audioPlayer) == 'undefined') {
        console.info('case create player is failed');
        expect().assertFail();
    }
    return audioPlayer;
}

export async function getLocalFd(audioPlayer, audioFile) {
    let audioSource;
    audioSource = audioFile;
    await mediaTestBase.getFileDescriptor(audioSource).then((res) => {
        fileDescriptor = res;
    });
    audioPlayer.src = fdLocal + fileDescriptor.fd;
    console.info("audioPlayer.src is : " + JSON.stringify(audioPlayer.src));
}

export async function getNetworkFd(audioPlayer, audioFile) {
    let audioSource;
    audioSource = audioFile;
    if (typeof (audioSource) == 'string') {
        audioPlayer.src = audioSource;
        console.info("audioPlayer.src is : " + audioPlayer.src);
    } else {
        audioPlayer.fdSrc = src;
        console.info("audioPlayer.fdSrc is : " + audioPlayer.fdSrc);
    }
}

export async function initVideoPlayer(videoFile, surFaceId) {
    console.info("videoFile is : " + videoFile);
    console.info("surFaceId is : " + surFaceId);
    let videoSource;
    await media.createVideoPlayer().then((video) => {
        if (typeof (video) != 'undefined') {
            videoPlayer = video;
            console.info('createVideoPlayer is success, data: ' + JSON.stringify(videoPlayer));
        } else {
            console.info('create player is failed');
        }
    }).catch((err) => {
        console.info("create player is failed, err: " + JSON.stringify(err));
        expect().assertFail();
    })

    videoSource = videoFile;
    await mediaTestBase.getFileDescriptor(videoSource).then((res) => {
        fileDescriptor = res;
    });

    await sleep(1000)
    videoPlayer.url = fdLocal + fileDescriptor.fd;
    console.info("videoPlayer.url is : " + JSON.stringify(videoPlayer.url));

    await videoPlayer.setDisplaySurface(surFaceId).then((data) => {
        console.info('setDisplaySurface is success, data: ' + +JSON.stringify(data));
    }).catch((err) => {
        console.info('setDisplaySurface is fail, err: ' + err);
    })

    await videoPlayer.prepare().then((data) => {
        console.info('prepare is success, data:  ' + +JSON.stringify(data));
    }).catch((err) => {
        console.info('prepare is fail, err:  ' + err);
    })
    await sleep(1000);
    return videoPlayer;
}

export async function initHttpVideoPlayer(videoFile, surFaceId) {
    console.info("videoFile is : " + videoFile);
    console.info("surFaceId is : " + surFaceId);
    await media.createVideoPlayer().then((video) => {
        if (typeof (video) != 'undefined') {
            videoPlayer = video;
            console.info('createVideoPlayer is success, data: ' + JSON.stringify(videoPlayer));
        } else {
            console.info('create player is failed');
        }
    }).catch((err) => {
        console.info("create player is failed, err: " + JSON.stringify(err));
        expect().assertFail();
    })

    videoPlayer.url = videoFile;
    console.info("videoPlayer.url is : " + JSON.stringify(videoPlayer.url));

    await videoPlayer.setDisplaySurface(surFaceId).then((data) => {
        console.info('setDisplaySurface is success, data: ' + +JSON.stringify(data));
    }).catch((err) => {
        console.info('setDisplaySurface is fail, err: ' + err);
    })

    await videoPlayer.prepare().then((data) => {
        console.info('prepare is success, data:  ' + +JSON.stringify(data));
    }).catch((err) => {
        console.info('prepare is fail, err:  ' + err);
    })
    await sleep(1000);
    return videoPlayer;
}

export async function createVideoPlayer() {
    console.info("createVideoPlayer is start");
    await media.createVideoPlayer().then((video) => {
        if (typeof (video) != 'undefined') {
            videoPlayer = video;
            console.info('createVideoPlayer is success, data: ' + JSON.stringify(videoPlayer));
        } else {
            console.info('create player is failed');
        }
    }).catch((err) => {
        console.info("create player is failed, err: " + JSON.stringify(err))
        expect().assertFail();
    })
    return videoPlayer;
}

export async function setVideoSource(videoPlayer, videoFile) {
    let videoSource;
    videoSource = videoFile;
    await mediaTestBase.getFileDescriptor(videoSource).then((res) => {
        fileDescriptor = res;
        console.info("fileDescriptor is : " + JSON.stringify(fileDescriptor))
    });
    await sleep(1000);
    videoPlayer.url = fdLocal + fileDescriptor.fd;
    console.info("videoPlayer.url is : " + JSON.stringify(videoPlayer.url));
}

export async function setVideoHttpSource(videoPlayer, videoFile) {
    let videoSource;
    videoSource = videoFile;
    videoPlayer.url = videoSource;
    console.info("videoPlayer.url is : " + JSON.stringify(videoPlayer.url));
}

export async function setSurface(videoPlayer, surFaceId) {
    await videoPlayer.setDisplaySurface(surFaceId).then((data) => {
        console.info('setDisplaySurface is success, data: ' + +JSON.stringify(data));
    }).catch((err) => {
        console.info('setDisplaySurface is fail, err: ' + err);
    })
}

export async function videoPrepare(videoPlayer) {
    await videoPlayer.prepare().then((data) => {
        console.info('prepare is success, data:  ' + +JSON.stringify(data));
    }).catch((err) => {
        console.info('prepare is fail, err:  ' + err);
    })
}
