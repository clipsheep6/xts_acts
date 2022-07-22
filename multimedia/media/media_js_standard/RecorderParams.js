/*
 * Copyright (C) 2022 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License"),
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

export const RECORDER_SEGMENTATION = {
    SIZE_BUFFER: 0.2 * 1024 * 1024,
    SIZE_UPPER_LIMIT: 1024 * 1024 * 1024,
    SIZE_LOWER_LIMIT: 5 * 1024 * 1024,
    DURATION_UPPER_LIMIT: 3600 * 1000,
    DURATION_LOWER_LIMIT: 60 * 1000,
    CHANNEL_TWO: 2,
    VIDEO_FRAME_WIDTH_1280: 1280,
    VIDEO_FRAME_HEIGHT_768: 768,
    VIDEO_FRAME_RATE_30: 30,
    FORMAT_AAC_ADTS: media.AudioOutputFormat.AAC_ADTS,
    SOURCE_TYPE_MIC: media.AudioSourceType.AUDIO_SOURCE_TYPE_MIC,
    ENCODER_AAC_LC: media.AudioEncoder.AAC_LC,
}

export const MEDIA_PROFILE = {
    onlyVideoProfile: {
        durationTime: 1000,
        fileFormat: media.ContainerFormatType.CFT_MPEG_4,
        videoBitrate: 100000000,
        videoCodec: media.CodecMimeType.VIDEO_MPEG4,
        videoFrameWidth: 1280,
        videoFrameHeight: 768,
        videoFrameRate: 30
    },
    audioVideoProfile: {
        audioBitrate: 48000,
        audioChannels: 2,
        audioCodec: media.CodecMimeType.AUDIO_AAC,
        audioSampleRate: 48000,
        durationTime: 1000,
        fileFormat: media.ContainerFormatType.CFT_MPEG_4,
        videoBitrate: 100000000,
        videoCodec: media.CodecMimeType.VIDEO_MPEG4,
        videoFrameWidth: 1280,
        videoFrameHeight: 768,
        videoFrameRate: 30
    },
}

export const MEDIA_CONFIG = {
    onlyVideoConfig: {
        videoSourceType: media.VideoSourceType.VIDEO_SOURCE_TYPE_SURFACE_YUV,
        profile: MEDIA_PROFILE.onlyVideoProfile,
        url: 'file:///data/media/01.mp4',
        rotation: 0,
        location: { latitude: 30, longitude: 130 },
        maxSize: 0,
        maxDuration: 0
    },
    audioVideoConfig: {
        audioSourceType: media.AudioSourceType.AUDIO_SOURCE_TYPE_MIC,
        videoSourceType: media.VideoSourceType.VIDEO_SOURCE_TYPE_SURFACE_YUV,
        profile: MEDIA_PROFILE.audioVideoProfile,
        url: 'file:///data/media/01.mp4',
        rotation: 0,
        location: { latitude: 30, longitude: 130 },
        maxSize: 0,
        maxDuration: 0
    },
    audioConfig: {
        audioSourceType: media.AudioSourceType.AUDIO_SOURCE_TYPE_MIC,
        audioEncoder: media.AudioEncoder.AAC_LC,
        audioEncodeBitRate: 300923,
        audioSampleRate: 48000,
        numberOfChannels: 2,
        format: media.AudioOutputFormat.AAC_ADTS,
        uri: 'file:///data/media/test.m4a',
        location: { latitude: 1, longitude: 1 },
        maxSize: 0,
        maxDuration: 0
    }
}