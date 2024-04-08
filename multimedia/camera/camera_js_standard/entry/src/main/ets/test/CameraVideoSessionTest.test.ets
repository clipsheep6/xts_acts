/*
 * Copyright (C) 2024 Huawei Device Co., Ltd.
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

import cameraObj from '@ohos.multimedia.camera';
import colorSpaceManager from '@ohos.graphics.colorSpaceManager';
import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from '@ohos/hypium';
import {sleep, createVideoSessionInstance, releaseSessionInstance, createInput, releaseInput,
    createPreviewOutput, createVideoOutput, releaseOutput} from './Common.ets';
const TAG:string = "CameraVideoSessionTest: ";

let mCameraInput:cameraObj.CameraInput;
let mPreviewOutput:cameraObj.PreviewOutput;
let mVideoOutput:cameraObj.VideoOutput;
let mVideoSession:cameraObj.VideoSession;

export default function cameraVideoSessionTest() {
    describe('CameraVideoSessionTest', () => {
        console.info(TAG + '----------CameraVideoSessionTest--------------')

        beforeAll(async () => {
            await sleep(TAG, 100);
            mCameraInput = await createInput(TAG, 0);
            mPreviewOutput = createPreviewOutput(TAG, 0);
            mVideoOutput = createVideoOutput(TAG, 0);
            mVideoSession = createVideoSessionInstance(TAG);
            mVideoSession.beginConfig();
            mVideoSession.addInput(mCameraInput);
            mVideoSession.addOutput(mPreviewOutput);
            mVideoSession.addOutput(mVideoOutput);
            await mVideoSession.commitConfig();
            console.info('beforeAll case');
        })

        beforeEach(async () => {
            await sleep(TAG, 100);
            console.info('beforeEach case');
            await sleep(TAG, 100);
        })

        afterEach(async () => {
            console.info('afterEach case');
            await sleep(TAG, 100);
        })

        afterAll(async () => {
            releaseInput(TAG, mCameraInput);
            releaseOutput(TAG, mPreviewOutput);
            releaseOutput(TAG, mVideoOutput);
            releaseSessionInstance(TAG, mVideoSession);
            await sleep(TAG, 100);
            console.info('afterAll case');
        })

       /**
        * @tc.number    : SUB_MULTIMEDIA_PHOTO_SESSION_GET_SUPPORTED_COLOR_SPACES_0100
        * @tc.name      : Check photo session get support color space
        * @tc.desc      : Check photo session get support color space
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 2
        */
        it('SUB_MULTIMEDIA_PHOTO_SESSION_GET_SUPPORTED_COLOR_SPACES_0100', 2, async () => {
            console.info(TAG + "--------------SUB_MULTIMEDIA_PHOTO_SESSION_GET_SUPPORTED_COLOR_SPACES_0100--------------");
            let colorSpaces: Array<colorSpaceManager.ColorSpace> = mVideoSession.getSupportedColorSpaces();
            console.info(TAG + "SUB_MULTIMEDIA_PHOTO_SESSION_GET_SUPPORTED_COLOR_SPACES_0100 colorSpaces length:" + colorSpaces.length);
            for (let i = 0; i < colorSpaces.length; i++) {
                console.info(TAG + "SUB_MULTIMEDIA_PHOTO_SESSION_GET_SUPPORTED_COLOR_SPACES_0100 colorSpace:" + colorSpaces[i]);
            }
        })

       /**
        * @tc.number    : SUB_MULTIMEDIA_PHOTO_SESSION_SET_COLOR_SPACES_0100
        * @tc.name      : Check photo session set color space
        * @tc.desc      : Check photo session set color space
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 2
        */
        it('SUB_MULTIMEDIA_PHOTO_SESSION_SET_COLOR_SPACES_0100', 2, async () => {
            console.info(TAG + "--------------SUB_MULTIMEDIA_PHOTO_SESSION_SET_COLOR_SPACES_0100--------------");
            let colorSpaces: Array<colorSpaceManager.ColorSpace> = mVideoSession.getSupportedColorSpaces();
            if (colorSpaces.length == 0) {
                console.info(TAG + "SUB_MULTIMEDIA_PHOTO_SESSION_SET_COLOR_SPACES_0100 colorSpace is not support");
            } else {
                for (let i = 0; i < colorSpaces.length; i++) {
                    console.info(TAG + "SUB_MULTIMEDIA_PHOTO_SESSION_SET_COLOR_SPACES_0100 colorSpace:" + colorSpaces[i]);
                    mVideoSession.setColorSpace(colorSpaces[i]);
                }
            }
        })

       /**
        * @tc.number    : SUB_MULTIMEDIA_PHOTO_SESSION_GET_ACTIVE_COLOR_SPACES_0100
        * @tc.name      : Check photo session get active color space
        * @tc.desc      : Check photo session get active color space
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 2
        */
        it('SUB_MULTIMEDIA_PHOTO_SESSION_GET_ACTIVE_COLOR_SPACES_0100', 2, async () => {
            console.info(TAG + "--------------SUB_MULTIMEDIA_PHOTO_SESSION_GET_ACTIVE_COLOR_SPACES_0100--------------");
            let colorSpaces: Array<colorSpaceManager.ColorSpace> = mVideoSession.getSupportedColorSpaces();
            if (colorSpaces.length == 0) {
                console.info(TAG + "SUB_MULTIMEDIA_PHOTO_SESSION_GET_ACTIVE_COLOR_SPACES_0100 colorSpace is not support");
            } else {
                for (let i = 0; i < colorSpaces.length; i++) {
                    console.info(TAG + "SUB_MULTIMEDIA_PHOTO_SESSION_SET_COLOR_SPACES_0100 colorSpace:" + colorSpaces[i]);
                    mVideoSession.setColorSpace(colorSpaces[i]);
                    let activeColorSpace: colorSpaceManager.ColorSpace = mVideoSession.getActiveColorSpace();
                    expect(activeColorSpace == colorSpaces[i]).assertTrue();
                }
            }
        })

    });
}