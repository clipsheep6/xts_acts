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

import photoAccessHelper from '@ohos.file.photoAccessHelper'
import { describe, it, expect, beforeAll } from '@ohos/hypium'
import sendablePhotoAccessHelper from '@ohos.file.sendablePhotoAccessHelper'
import {
  sleep,
  getPermission
} from '../../../../../../../common';

export default function createAssetTest () {
  describe('createAssetTest', () => {

    beforeAll(async function () {
      console.info('beforeAll case');
      await getPermission();
      await sleep()
    });

    let sendablePhAccessHelper = sendablePhotoAccessHelper.getPhotoAccessHelper(globalThis.abilityContext);

    const createAssetPromise1 = async (done: Function, testNum: string, type: sendablePhotoAccessHelper.PhotoType,
      extension: string, options: photoAccessHelper.CreateOptions) => {
      try {
        await sendablePhAccessHelper.createAsset(type, extension, options);
        done();
      } catch (error) {
        console.info(`${testNum} failed; error: ${error}`);
        expect(false).assertTrue();
        done();
      }
    }

    const createAssetPromise2 = async (done: Function, testNum: string, type: sendablePhotoAccessHelper.PhotoType,
      extension: string) => {
      try {
        await sendablePhAccessHelper.createAsset(type, extension);
        done();
      } catch (error) {
        console.info(`${testNum} failed; error: ${error}`);
        expect(false).assertTrue();
        done();
      }
    }

    const createAssetAbnormalPromise1 = async (done: Function, testNum: string,
      type: sendablePhotoAccessHelper.PhotoType | undefined, extension: string | undefined,
      options: photoAccessHelper.CreateOptions | undefined) => {
      try {
        await sendablePhAccessHelper.createAsset(type, extension, options);
        expect(false).assertTrue();
        done();
      } catch (error) {
        console.info(`${testNum} failed; error: ${error}`);
        expect(true).assertTrue();
        done();
      }
    }

    /**
     * @tc.number    : SUB_PHOTOACCESS_HELPER_PROMISE_CREATE_IMAGE_0000
     * @tc.name      : createImage_promise_000
     * @tc.desc      : createAsset
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('createImage_promise_000', 0, async (done: Function) => {
      const testNum = 'createImage_promise_000';
      const type = sendablePhotoAccessHelper.PhotoType.IMAGE;
      const extension = 'jpg';
      const options: photoAccessHelper.CreateOptions = {
        title: testNum
      };
      await createAssetPromise1(done, testNum, type, extension, options);
    });
    /**
     * @tc.number    : SUB_PHOTOACCESS_HELPER_PROMISE_CREATE_IMAGE_0100
     * @tc.name      : createImage_promise_001
     * @tc.desc      : createAsset without CreateOptions
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('createImage_promise_001', 0, async (done: Function) => {
      const testNum = 'createImage_promise_001';
      const type = sendablePhotoAccessHelper.PhotoType.IMAGE;
      const extension = 'jpg';
      await createAssetPromise2(done, testNum, type, extension);
    });
    /**
     * @tc.number    : SUB_PHOTOACCESS_HELPER_PROMISE_CREATE_IMAGE_0200
     * @tc.name      : createImage_promise_002
     * @tc.desc      : createAsset with undefined photoType
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('createImage_promise_002', 2, async (done: Function) => {
      const testNum = 'createImage_promise_002';
      const type = undefined;
      const extension = 'jpg';
      const options: photoAccessHelper.CreateOptions = {
        title: testNum
      };
      await createAssetAbnormalPromise1(done, testNum, type, extension, options);
    });
    /**
     * @tc.number    : SUB_PHOTOACCESS_HELPER_PROMISE_CREATE_IMAGE_0300
     * @tc.name      : createImage_promise_003
     * @tc.desc      : createAsset with invalid extension
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('createImage_promise_003', 2, async (done: Function) => {
      const testNum = 'createImage_promise_003';
      const type = sendablePhotoAccessHelper.PhotoType.IMAGE;
      const extension = '123';
      const options: photoAccessHelper.CreateOptions = {
        title: testNum
      };
      await createAssetAbnormalPromise1(done, testNum, type, extension, options);
    });
    /**
     * @tc.number    : SUB_PHOTOACCESS_HELPER_PROMISE_CREATE_IMAGE_0400
     * @tc.name      : createImage_promise_004
     * @tc.desc      : createAsset with undefined extension
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('createImage_promise_004', 2, async (done: Function) => {
      const testNum = 'createImage_promise_004';
      const type = sendablePhotoAccessHelper.PhotoType.IMAGE;
      const extension = undefined;
      const options: photoAccessHelper.CreateOptions = {
        title: testNum
      };
      await createAssetAbnormalPromise1(done, testNum, type, extension, options);
    });
    /**
     * @tc.number    : SUB_PHOTOACCESS_HELPER_PROMISE_CREATE_IMAGE_0500
     * @tc.name      : createImage_promise_005
     * @tc.desc      : createAsset with undefined title
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('createImage_promise_005', 2, async (done: Function) => {
      const testNum = 'createImage_promise_005';
      const type = sendablePhotoAccessHelper.PhotoType.IMAGE;
      const extension = 'jpg';
      const options: photoAccessHelper.CreateOptions = {
        title: undefined
      };
      await createAssetPromise1(done, testNum, type, extension, options);
    });
    /**
     * @tc.number    : SUB_PHOTOACCESS_HELPER_PROMISE_CREATE_IMAGE_0600
     * @tc.name      : createImage_promise_006
     * @tc.desc      : createAsset with undefined CreateOptions
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('createImage_promise_006', 2, async (done: Function) => {
      const testNum = 'createImage_promise_006';
      const type = sendablePhotoAccessHelper.PhotoType.IMAGE;
      const extension = 'jpg';
      const options: photoAccessHelper.CreateOptions | undefined = undefined;
      await createAssetAbnormalPromise1(done, testNum, type, extension, options);
    });

    /**
     * @tc.number    : SUB_PHOTOACCESS_HELPER_PROMISE_CREATE_VIDEO_0000
     * @tc.name      : createVideo_promise_000
     * @tc.desc      : createAsset
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('createVideo_promise_000', 0, async (done: Function) => {
      const testNum = 'createVideo_promise_000';
      const type = sendablePhotoAccessHelper.PhotoType.VIDEO;
      const extension = 'mp4';
      const options: photoAccessHelper.CreateOptions = {
        title: testNum
      };
      await createAssetPromise1(done, testNum, type, extension, options);
    });
    /**
     * @tc.number    : SUB_PHOTOACCESS_HELPER_PROMISE_CREATE_VIDEO_0100
     * @tc.name      : createVideo_promise_001
     * @tc.desc      : createAsset without CreateOptions
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('createVideo_promise_001', 0, async (done: Function) => {
      const testNum = 'createVideo_promise_001';
      const type = sendablePhotoAccessHelper.PhotoType.VIDEO;
      const extension = 'mp4';
      await createAssetPromise2(done, testNum, type, extension);
    });
    /**
     * @tc.number    : SUB_PHOTOACCESS_HELPER_PROMISE_CREATE_VIDEO_0200
     * @tc.name      : createVideo_promise_002
     * @tc.desc      : createAsset with undefined photoType
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('createVideo_promise_002', 2, async (done: Function) => {
      const testNum = 'createVideo_promise_002';
      const type = undefined;
      const extension = 'mp4';
      const options: photoAccessHelper.CreateOptions = {
        title: testNum
      };
      await createAssetAbnormalPromise1(done, testNum, type, extension, options);
    });
    /**
     * @tc.number    : SUB_PHOTOACCESS_HELPER_PROMISE_CREATE_VIDEO_0300
     * @tc.name      : createVideo_promise_003
     * @tc.desc      : createAsset with invalid extension
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('createVideo_promise_003', 2, async (done: Function) => {
      const testNum = 'createVideo_promise_003';
      const type = sendablePhotoAccessHelper.PhotoType.VIDEO;
      const extension = '123';
      const options: photoAccessHelper.CreateOptions = {
        title: testNum
      };
      await createAssetAbnormalPromise1(done, testNum, type, extension, options);
    });
    /**
     * @tc.number    : SUB_PHOTOACCESS_HELPER_PROMISE_CREATE_VIDEO_0400
     * @tc.name      : createVideo_promise_004
     * @tc.desc      : createAsset with undefined extension
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('createVideo_promise_004', 2, async (done: Function) => {
      const testNum = 'createVideo_promise_004';
      const type = sendablePhotoAccessHelper.PhotoType.VIDEO;
      const extension = undefined;
      const options: photoAccessHelper.CreateOptions = {
        title: testNum
      };
      await createAssetAbnormalPromise1(done, testNum, type, extension, options);
    });
    /**
     * @tc.number    : SUB_PHOTOACCESS_HELPER_PROMISE_CREATE_VIDEO_0500
     * @tc.name      : createVideo_promise_005
     * @tc.desc      : createAsset with undefined title
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('createVideo_promise_005', 2, async (done: Function) => {
      const testNum = 'createVideo_promise_005';
      const type = sendablePhotoAccessHelper.PhotoType.VIDEO;
      const extension = 'mp4';
      const options: photoAccessHelper.CreateOptions = {
        title: undefined
      };
      await createAssetPromise1(done, testNum, type, extension, options);
    });
    /**
     * @tc.number    : SUB_PHOTOACCESS_HELPER_PROMISE_CREATE_VIDEO_0600
     * @tc.name      : createVideo_promise_006
     * @tc.desc      : createAsset with undefined CreateOptions
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('createVideo_promise_006', 2, async (done: Function) => {
      const testNum = 'createVideo_promise_006';
      const type = sendablePhotoAccessHelper.PhotoType.VIDEO;
      const extension = 'mp4';
      const options: photoAccessHelper.CreateOptions | undefined = undefined;
      await createAssetAbnormalPromise1(done, testNum, type, extension, options);
    });
  })
}