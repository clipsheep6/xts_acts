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
import {sleep, createPhotoSessionInstance, releaseSessionInstance, createInput, releaseInput,
    createPreviewOutput, createPhotoOutput, releaseOutput} from './Common.ets';
const TAG:string = "CameraPhotoSessionTest: ";

let mCameraInput:cameraObj.CameraInput;
let mPreviewOutput:cameraObj.PreviewOutput;
let mPhotoOutput:cameraObj.PhotoOutput;
let mPhotoSession:cameraObj.PhotoSession;

export default function cameraPhotoSessionTest() {
    describe('CameraPhotoSessionTest', () => {
        console.info(TAG + '----------CameraPhotoSessionTest--------------')

        beforeAll(async () => {
            await sleep(TAG, 100);
            mCameraInput = await createInput(TAG, 0);
            mPreviewOutput = createPreviewOutput(TAG, 0);
            mPhotoOutput = createPhotoOutput(TAG, 0);
            mPhotoSession = createPhotoSessionInstance(TAG);
            mPhotoSession.beginConfig();
            mPhotoSession.addInput(mCameraInput);
            mPhotoSession.addOutput(mPreviewOutput);
            mPhotoSession.addOutput(mPhotoOutput);
            await mPhotoSession.commitConfig();
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
            releaseOutput(TAG, mPhotoOutput);
            releaseSessionInstance(TAG, mPhotoSession);
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
            let colorSpaces: Array<colorSpaceManager.ColorSpace> = mPhotoSession.getSupportedColorSpaces();
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
            let colorSpaces: Array<colorSpaceManager.ColorSpace> = mPhotoSession.getSupportedColorSpaces();
            if (colorSpaces.length == 0) {
                console.info(TAG + "SUB_MULTIMEDIA_PHOTO_SESSION_SET_COLOR_SPACES_0100 colorSpace is not support");
            } else {
                for (let i = 0; i < colorSpaces.length; i++) {
                    console.info(TAG + "SUB_MULTIMEDIA_PHOTO_SESSION_SET_COLOR_SPACES_0100 colorSpace:" + colorSpaces[i]);
                    mPhotoSession.setColorSpace(colorSpaces[i]);
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
            let colorSpaces: Array<colorSpaceManager.ColorSpace> = mPhotoSession.getSupportedColorSpaces();
            if (colorSpaces.length == 0) {
                console.info(TAG + "SUB_MULTIMEDIA_PHOTO_SESSION_GET_ACTIVE_COLOR_SPACES_0100 colorSpace is not support");
            } else {
                for (let i = 0; i < colorSpaces.length; i++) {
                    console.info(TAG + "SUB_MULTIMEDIA_PHOTO_SESSION_SET_COLOR_SPACES_0100 colorSpace:" + colorSpaces[i]);
                    mPhotoSession.setColorSpace(colorSpaces[i]);
                    let activeColorSpace: colorSpaceManager.ColorSpace = mPhotoSession.getActiveColorSpace();
                    expect(activeColorSpace == colorSpaces[i]).assertTrue();
                }
            }
        })

    });

}