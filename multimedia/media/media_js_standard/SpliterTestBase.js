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

import * as videoRecorderTestBase from './VideoRecorderTestBase.js';

export async function toCheckVideo(done, videoArr, profile, playerSurfaceId, mediaType) {
    if (!videoArr.length) {
        console.info('fdPath is empty');
        expect().assertFail();
        done();
    }
    let trackArray = videoRecorderTestBase.getTrackArray(mediaType, profile);
    for (let i = 0; i < videoArr.length; i++) {
        await videoRecorderTestBase.checkVideos(
            videoArr[i].fdPath,
            videoArr[i].duration,
            trackArray,
            playerSurfaceId
        );
    }
}

