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
import { describe, it, expect } from 'deccjsunit/index'

import {
  photoKeys,
  fetchOption,
  createSandboxFileUri,
} from '../../../../../../../common'

export default function requestVideoTest() {
  describe('requestVideoTest', function (done) {
    let helper = photoAccessHelper.getPhotoAccessHelper(globalThis.abilityContext);
    let TestHandler: photoAccessHelper.MediaAssetProgressHandler = {
    onProgress(progress: number) {
      console.info(`on video request onProgress: ${progress}`);
    }
  };
    async function requestVideoRequestOptions(testNum, done, requestOptions) {
      try {
        let fetchOps = fetchOption(testNum, photoKeys.DISPLAY_NAME, "request_video.mp4");
        let fetchResult = await helper.getAssets(fetchOps);
        let photoAsset = await fetchResult.getFirstObject();
        let destUri = createSandboxFileUri('mp4');
        class MediaHandler implements photoAccessHelper.MediaAssetDataHandler<boolean> {
          async onDataPrepared(data : boolean) {
            console.info(`${testNum} succeed`);
            expect(data).assertTrue();
            done();
          }
        }
        const handler = new MediaHandler();
        await photoAccessHelper.MediaAssetManager.requestVideoFile(
          globalThis.abilityContext, photoAsset, requestOptions, destUri, handler)
      } catch (error) {
        console.error(`${testNum} failed; error: ${error.code}  ${error.message}`);
        expect(false).assertTrue();
        done();
      }
    }

    async function requestVideoRequestOptionsError(testNum, done, requestOptions) {
      try {
        let fetchOps = fetchOption(testNum, photoKeys.DISPLAY_NAME, "request_video.mp4");
        let fetchResult = await helper.getAssets(fetchOps);
        let photoAsset = await fetchResult.getFirstObject();
        let destUri = createSandboxFileUri('mp4');
        class MediaHandler implements photoAccessHelper.MediaAssetDataHandler<boolean> {
          onDataPrepared(data : boolean) {
            console.info(`${testNum} failed`);
            expect(data).assertTrue();
            done();
          }
        }
        const handler = new MediaHandler();
        await photoAccessHelper.MediaAssetManager.requestVideoFile(
          globalThis.abilityContext, photoAsset, requestOptions, destUri, handler)
      } catch (error) {
        console.error(`${testNum} failed; error: ${error.code}  ${error.message}`);
        expect(error.code).assertEqual('401');
        done();
      }
    }

    async function requestVideoPhotoAssetError(testNum, done, photoAsset) {
      try {
        let destUri = createSandboxFileUri('mp4');
        class MediaHandler implements photoAccessHelper.MediaAssetDataHandler<boolean> {
          onDataPrepared(data : boolean) {
            console.info(`${testNum} failed`);
            expect(false).assertTrue();
            done();
          }
        }
        let requestOptions : photoAccessHelper.RequestOptions = {
        deliveryMode: photoAccessHelper.DeliveryMode.FAST_MODE,
        sourceMode: photoAccessHelper.SourceMode.ORIGINAL_MODE,
        compatibleMode: photoAccessHelper.CompatibleMode.ORIGINAL_FORMAT_MODE,
      }
        const handler = new MediaHandler();
        await photoAccessHelper.MediaAssetManager.requestVideoFile(
          globalThis.abilityContext, photoAsset, requestOptions, destUri, handler)
      } catch (error) {
        console.error(`${testNum} failed; error: ${error.code} ${error.message}`);
        expect(error.code).assertEqual('401');
        done();
      }
    }

    async function requestVideoPhotoAssetErrorTranscode(testNum, done, photoAsset) {
      try {
        let destUri = createSandboxFileUri('mp4');
        class MediaHandler implements photoAccessHelper.MediaAssetDataHandler<boolean> {
          onDataPrepared(data : boolean) {
            console.info(`${testNum} failed`);
            expect(false).assertTrue();
            done();
          }
        }
        let requestOptions : photoAccessHelper.RequestOptions = {
        deliveryMode: photoAccessHelper.DeliveryMode.FAST_MODE,
        sourceMode: photoAccessHelper.SourceMode.ORIGINAL_MODE,
        compatibleMode: photoAccessHelper.CompatibleMode.COMPATIBLE_FORMAT_MODE,
        mediaAssetProgressHandler: TestHandler,
      }
        const handler = new MediaHandler();
        await photoAccessHelper.MediaAssetManager.requestVideoFile(
          globalThis.abilityContext, photoAsset, requestOptions, destUri, handler)
      } catch (error) {
        console.error(`${testNum} failed; error: ${error.code} ${error.message}`);
        expect(error.code).assertEqual('401');
        done();
      }
    }

    async function requestVideoDestUriError(testNum, done, destUri, errCode) {
      try {
        let fetchOps = fetchOption(testNum, photoKeys.DISPLAY_NAME, "request_video.mp4");
        let fetchResult = await helper.getAssets(fetchOps);
        let photoAsset = await fetchResult.getFirstObject();
        class MediaHandler implements photoAccessHelper.MediaAssetDataHandler<boolean> {
          onDataPrepared(data : boolean) {
            console.info(`${testNum} failed`);
            expect(false).assertTrue();
            done();
          }
        }
        let requestOptions : photoAccessHelper.RequestOptions = {
        deliveryMode: photoAccessHelper.DeliveryMode.FAST_MODE,
        sourceMode: photoAccessHelper.SourceMode.ORIGINAL_MODE,
        compatibleMode: photoAccessHelper.CompatibleMode.ORIGINAL_FORMAT_MODE,
      }
        const handler = new MediaHandler();
        await photoAccessHelper.MediaAssetManager.requestVideoFile(
          globalThis.abilityContext, photoAsset, requestOptions, destUri, handler)
      } catch (error) {
        console.error(`${testNum} failed; error: ${error.code} ${error.message}`);
        expect(error.code).assertEqual(errCode);
        done();
      }
    }

    async function requestVideoDestUriErrorTranscode(testNum, done, destUri, errCode) {
      try {
        let fetchOps = fetchOption(testNum, photoKeys.DISPLAY_NAME, "request_video.mp4");
        let fetchResult = await helper.getAssets(fetchOps);
        let photoAsset = await fetchResult.getFirstObject();
        class MediaHandler implements photoAccessHelper.MediaAssetDataHandler<boolean> {
          onDataPrepared(data : boolean) {
            console.info(`${testNum} failed`);
            expect(false).assertTrue();
            done();
          }
        }
        let requestOptions : photoAccessHelper.RequestOptions = {
        deliveryMode: photoAccessHelper.DeliveryMode.FAST_MODE,
        sourceMode: photoAccessHelper.SourceMode.ORIGINAL_MODE,
        compatibleMode: photoAccessHelper.CompatibleMode.COMPATIBLE_FORMAT_MODE,
        mediaAssetProgressHandler: TestHandler,
      }
        const handler = new MediaHandler();
        await photoAccessHelper.MediaAssetManager.requestVideoFile(
          globalThis.abilityContext, photoAsset, requestOptions, destUri, handler)
      } catch (error) {
        console.error(`${testNum} failed; error: ${error.code} ${error.message}`);
        expect(error.code).assertEqual(errCode);
        done();
      }
    }

    /**
     * @tc.number    : SUB_PHOTOACCESS_HELPER_REQUEST_VIDEO_0000
     * @tc.name      : request_video_000
     * @tc.desc      : request video with deliveryMode: fastMode and sourceMode: originalMode
     *                 and compatibleMode: ORIGINAL_FORMAT_MODE
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('request_video_delivery_fast_source_original', 0, async function (done) {
      let testNum = 'request_video_delivery_fast_source_original';
      let requestOptions : photoAccessHelper.RequestOptions = {
        deliveryMode: photoAccessHelper.DeliveryMode.FAST_MODE,
        sourceMode: photoAccessHelper.SourceMode.ORIGINAL_MODE,
        compatibleMode: photoAccessHelper.CompatibleMode.ORIGINAL_FORMAT_MODE,
      }
      await requestVideoRequestOptions(testNum, done, requestOptions)
    });

    /**
     * @tc.number    : SUB_PHOTOACCESS_HELPER_REQUEST_VIDEO_0100
     * @tc.name      : test requestVideo with hignQualityMode and sourceMode: originalMode and
     *                 compatibleMode: ORIGINAL_FORMAT_MODE
     * @tc.desc      : request video with deliveryMode: hignQualityMode and sourceMode: originalMode and
     *                 compatibleMode: ORIGINAL_FORMAT_MODE
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('request_video_delivery_high_source_original', 0, async function (done) {
      let testNum = 'request_video_delivery_high_source_original';
      let requestOptions : photoAccessHelper.RequestOptions = {
        deliveryMode: photoAccessHelper.DeliveryMode.HIGH_QUALITY_MODE,
        sourceMode: photoAccessHelper.SourceMode.ORIGINAL_MODE,
        compatibleMode: photoAccessHelper.CompatibleMode.ORIGINAL_FORMAT_MODE,
      }
      await requestVideoRequestOptions(testNum, done, requestOptions)
    });

    /**
     * @tc.number    : SUB_PHOTOACCESS_HELPER_REQUEST_VIDEO_0200
     * @tc.name      : test requestVideo with balancedMode and sourceMode: originalMode and
     *                 compatibleMode: ORIGINAL_FORMAT_MODE
     * @tc.desc      : request image with deliveryMode: balancedMode and sourceMode: originalMode and
     *                 compatibleMode: ORIGINAL_FORMAT_MODE
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('request_video_delivery_balance_source_original', 0, async function (done) {
      let testNum = 'request_video_delivery_balance_source_original';
      let requestOptions : photoAccessHelper.RequestOptions = {
        deliveryMode: photoAccessHelper.DeliveryMode.BALANCE_MODE,
        sourceMode: photoAccessHelper.SourceMode.ORIGINAL_MODE,
        compatibleMode: photoAccessHelper.CompatibleMode.ORIGINAL_FORMAT_MODE,
      }
      await requestVideoRequestOptions(testNum, done, requestOptions)
    });

    /**
     * @tc.number    : SUB_PHOTOACCESS_HELPER_REQUEST_VIDEO_0300
     * @tc.name      : test requestVideo with fastMode and sourceMode: editedMode and
     *                 compatibleMode: ORIGINAL_FORMAT_MODE
     * @tc.desc      : request video with deliveryMode: fastMode and sourceMode: editedMode and
     *                 compatibleMode: ORIGINAL_FORMAT_MODE
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('request_video_delivery_fast_source_edited', 0, async function (done) {
      let testNum = 'request_video_delivery_fast_source_edited';
      let requestOptions : photoAccessHelper.RequestOptions = {
        deliveryMode: photoAccessHelper.DeliveryMode.FAST_MODE,
        sourceMode: photoAccessHelper.SourceMode.EDITED_MODE,
        compatibleMode: photoAccessHelper.CompatibleMode.ORIGINAL_FORMAT_MODE,
      }
      await requestVideoRequestOptions(testNum, done, requestOptions)
    });

    /**
     * @tc.number    : SUB_PHOTOACCESS_HELPER_REQUEST_VIDEO_0400
     * @tc.name      : test requestVideo with hignQualityMode and sourceMode: editedMode and
     *                 compatibleMode: ORIGINAL_FORMAT_MODE
     * @tc.desc      : request video with deliveryMode: hignQualityMode and sourceMode: editedMode and
     *                 compatibleMode: ORIGINAL_FORMAT_MODE
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('request_video_delivery_high_source_edited', 0, async function (done) {
      let testNum = 'request_video_delivery_high_source_edited';
      let requestOptions : photoAccessHelper.RequestOptions = {
        deliveryMode: photoAccessHelper.DeliveryMode.HIGH_QUALITY_MODE,
        sourceMode: photoAccessHelper.SourceMode.EDITED_MODE,
        compatibleMode: photoAccessHelper.CompatibleMode.ORIGINAL_FORMAT_MODE,
      }
      await requestVideoRequestOptions(testNum, done, requestOptions)
    });

    /**
     * @tc.number    : SUB_PHOTOACCESS_HELPER_REQUEST_VIDEO_0500
     * @tc.name      : test requestVideo with balancedMode and sourceMode: editedMode and
     *                 compatibleMode: ORIGINAL_FORMAT_MODE
     * @tc.desc      : request video with deliveryMode: balancedMode and sourceMode: editedMode and
     *                 compatibleMode: ORIGINAL_FORMAT_MODE
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('request_video_delivery_balance_source_edited', 0, async function (done) {
      let testNum = 'request_video_delivery_balance_source_edited';
      let requestOptions : photoAccessHelper.RequestOptions = {
        deliveryMode: photoAccessHelper.DeliveryMode.BALANCE_MODE,
        sourceMode: photoAccessHelper.SourceMode.EDITED_MODE,
        compatibleMode: photoAccessHelper.CompatibleMode.ORIGINAL_FORMAT_MODE,
      }
      await requestVideoRequestOptions(testNum, done, requestOptions)
    });

    /**
     * @tc.number    : SUB_PHOTOACCESS_HELPER_REQUEST_VIDEO_0600
     * @tc.name      : test requestVideo with balancedMode and sourceMode: null and
     *                 compatibleMode: ORIGINAL_FORMAT_MODE
     * @tc.desc      : request video with deliveryMode: balancedMode and sourceMode: null and
     *                 compatibleMode: ORIGINAL_FORMAT_MODE
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('request_video_source_mode_null', 0, async function (done) {
      let testNum = 'request_video_source_mode_null';
      let requestOptions : photoAccessHelper.RequestOptions = {
        deliveryMode: photoAccessHelper.DeliveryMode.BALANCE_MODE,
        sourceMode: null,
        compatibleMode: photoAccessHelper.CompatibleMode.ORIGINAL_FORMAT_MODE,
      }
      await requestVideoRequestOptionsError(testNum, done, requestOptions)
    });

    /**
     * @tc.number    : SUB_PHOTOACCESS_HELPER_REQUEST_VIDEO_0700
     * @tc.name      : test requestVideo with balancedMode and sourceMode: undefined and
     *                 compatibleMode: ORIGINAL_FORMAT_MODE
     * @tc.desc      : request video with deliveryMode: balancedMode and sourceMode: undefined and
     *                 compatibleMode: ORIGINAL_FORMAT_MODE
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('request_video_source_mode_undefined', 0, async function (done) {
      let testNum = 'request_video_source_mode_undefined';
      let requestOptions : photoAccessHelper.RequestOptions = {
        deliveryMode: photoAccessHelper.DeliveryMode.BALANCE_MODE,
        sourceMode: undefined,
        compatibleMode: photoAccessHelper.CompatibleMode.ORIGINAL_FORMAT_MODE,
      }
      await requestVideoRequestOptionsError(testNum, done, requestOptions)
    });

    /**
     * @tc.number    : SUB_PHOTOACCESS_HELPER_REQUEST_VIDEO_0800
     * @tc.name      : test requestVideo with deliveryMode: balancedMode and sourceMode: -100 and
     *                 compatibleMode: ORIGINAL_FORMAT_MODE
     * @tc.desc      : request video with deliveryMode: balancedMode and sourceMode: -100 and
     *                 compatibleMode: ORIGINAL_FORMAT_MODE
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('request_video_source_mode_100', 0, async function (done) {
      let testNum = 'request_video_source_mode_100';
      let requestOptions : photoAccessHelper.RequestOptions = {
        deliveryMode: photoAccessHelper.DeliveryMode.BALANCE_MODE,
        sourceMode: -100,
        compatibleMode: photoAccessHelper.CompatibleMode.ORIGINAL_FORMAT_MODE,
      }
      await requestVideoRequestOptionsError(testNum, done, requestOptions)
    });

   /**
     * @tc.number    : SUB_PHOTOACCESS_HELPER_REQUEST_VIDEO_0900
     * @tc.name      : test requestVideo with deliveryMode: null and sourceMode: EDITED_MODE and
     *                 compatibleMode: ORIGINAL_FORMAT_MODE
     * @tc.desc      : request video with deliveryMode: null and sourceMode: EDITED_MODE and
     *                 compatibleMode: ORIGINAL_FORMAT_MODE
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('request_video_delivery_mode_null', 0, async function (done) {
      let testNum = 'request_video_delivery_mode_null';
      let requestOptions : photoAccessHelper.RequestOptions = {
        deliveryMode: null,
        sourceMode: photoAccessHelper.SourceMode.EDITED_MODE,
        compatibleMode: photoAccessHelper.CompatibleMode.ORIGINAL_FORMAT_MODE,
      }
      await requestVideoRequestOptionsError(testNum, done, requestOptions)
    });

    /**
     * @tc.number    : SUB_PHOTOACCESS_HELPER_REQUEST_VIDEO_1000
     * @tc.name      : test requestVideo with deliveryMode: undefined and sourceMode: EDITED_MODE and
     *                 compatibleMode: ORIGINAL_FORMAT_MODE
     * @tc.desc      : request video with deliveryMode: undefined and sourceMode: EDITED_MODE and
     *                 compatibleMode: ORIGINAL_FORMAT_MODE
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('request_video_delivery_mode_undefined', 0, async function (done) {
      let testNum = 'request_video_delivery_mode_undefined';
      let requestOptions : photoAccessHelper.RequestOptions = {
        deliveryMode: undefined,
        sourceMode: photoAccessHelper.SourceMode.EDITED_MODE,
        compatibleMode: photoAccessHelper.CompatibleMode.ORIGINAL_FORMAT_MODE,
      }
      await requestVideoRequestOptionsError(testNum, done, requestOptions)
    });

    /**
     * @tc.number    : SUB_PHOTOACCESS_HELPER_REQUEST_VIDEO_1100
     * @tc.name      : test requestVideo with deliveryMode: -100 and sourceMode: EDITED_MODE and
     *                 compatibleMode: ORIGINAL_FORMAT_MODE
     * @tc.desc      : request video with deliveryMode: -100 and sourceMode: EDITED_MODE and
     *                 compatibleMode: ORIGINAL_FORMAT_MODE
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('request_video_delivery_mode_100', 0, async function (done) {
      let testNum = 'request_video_delivery_mode_100';
      let requestOptions : photoAccessHelper.RequestOptions = {
        deliveryMode: -100,
        sourceMode: photoAccessHelper.SourceMode.EDITED_MODE,
        compatibleMode: photoAccessHelper.CompatibleMode.ORIGINAL_FORMAT_MODE,
      }
      await requestVideoRequestOptionsError(testNum, done, requestOptions)
    });

    /**
     * @tc.number    : SUB_PHOTOACCESS_HELPER_REQUEST_VIDEO_1200
     * @tc.name      : test requestVideo with photoAsset = null
     * @tc.desc      : request video with photoAsset = null
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('request_video_photo_asset_null', 0, async function (done) {
      let testNum = 'request_video_photo_asset_null';
      let photoAsset = null
      await requestVideoPhotoAssetError(testNum, done, photoAsset)
    });

    /**
     * @tc.number    : SUB_PHOTOACCESS_HELPER_REQUEST_VIDEO_1300
     * @tc.name      : test requestVideo with photoAsset = undefined
     * @tc.desc      : request video with photoAsset = undefined
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('request_video_photo_asset_undefined', 0, async function (done) {
      let testNum = 'request_video_photo_asset_undefined';
      let photoAsset = undefined
      await requestVideoPhotoAssetError(testNum, done, photoAsset)
    });

    /**
     * @tc.number    : SUB_PHOTOACCESS_HELPER_REQUEST_VIDEO_1400
     * @tc.name      : test requestVideo with photoAsset = 'test'
     * @tc.desc      : request video with photoAsset = 'test'
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('request_video_photo_asset_test_string', 0, async function (done) {
      let testNum = 'request_video_photo_asset_test_string';
      let photoAsset = 'test'
      await requestVideoPhotoAssetError(testNum, done, photoAsset)
    });

    /**
     * @tc.number    : SUB_PHOTOACCESS_HELPER_REQUEST_VIDEO_1500
     * @tc.name      : test requestVideo with photoAsset = true
     * @tc.desc      : request video with photoAsset = true
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('request_video_photo_asset_true', 0, async function (done) {
      let testNum = 'request_video_photo_asset_true';
      let photoAsset = true
      await requestVideoPhotoAssetError(testNum, done, photoAsset)
    });

    /**
     * @tc.number    : SUB_PHOTOACCESS_HELPER_REQUEST_VIDEO_1600
     * @tc.name      : test requestVideo with photoAsset = {a: 10}
     * @tc.desc      : request video with photoAsset = {a: 10}
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('request_video_photo_asset_object', 0, async function (done) {
      let testNum = 'request_video_photo_asset_object';
      let photoAsset = {a: 10}
      await requestVideoPhotoAssetError(testNum, done, photoAsset)
    });

    /**
     * @tc.number    : SUB_PHOTOACCESS_HELPER_REQUEST_VIDEO_1700
     * @tc.name      : test requestVideo with fileUri = null
     * @tc.desc      : request video with fileUri = null
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('request_video_fileUri_null', 0, async function (done) {
      let testNum = 'request_video_fileUri_null';
      let fileUri = null
      let errCode = '401'
      await requestVideoDestUriError(testNum, done, fileUri, errCode)
    });

    /**
     * @tc.number    : SUB_PHOTOACCESS_HELPER_REQUEST_VIDEO_1800
     * @tc.name      : test requestVideo with fileUri = undefined
     * @tc.desc      : request video with fileUri = undefined
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('request_video_fileUri_undefined', 0, async function (done) {
      let testNum = 'request_video_fileUri_undefined';
      let fileUri = undefined
      let errCode = '401'
      await requestVideoDestUriError(testNum, done, fileUri, errCode)
    });

    /**
     * @tc.number    : SUB_PHOTOACCESS_HELPER_REQUEST_VIDEO_1900
     * @tc.name      : test requestVideo with fileUri = true
     * @tc.desc      : request video with fileUri = true
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('request_video_fileUri_true', 0, async function (done) {
      let testNum = 'request_video_fileUri_true';
      let fileUri = true
      let errCode = '401'
      await requestVideoDestUriError(testNum, done, fileUri, errCode)
    });

    /**
     * @tc.number    : SUB_PHOTOACCESS_HELPER_REQUEST_VIDEO_2000
     * @tc.name      : test requestVideo with fileUri = 'aaaaa.....mp4'(length = 384)
     * @tc.desc      : request video with fileUri = 'aaaaa.....mp4'(length = 384)
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('request_video_fileUri_test_string', 0, async function (done) {
      let testNum = 'request_video_fileUri_test_string';
      let fileUri = ''
      for (let i = 0; i < 380; i++) {
        fileUri += 'a'
      }
      fileUri+= '.mp4'
      let errCode = '401' 
      await requestVideoDestUriError(testNum, done, fileUri, errCode)
    });

    /**
     * @tc.number    : SUB_PHOTOACCESS_HELPER_REQUEST_VIDEO_2100
     * @tc.name      : test requestVideo with fileUri = '⛰ * ⛪ ⛩ ⛲ ⛺ ♨ ⛽ ⚓ '
     * @tc.desc      : request video with fileUri = '⛰ * ⛪ ⛩ ⛲ ⛺ ♨ ⛽ ⚓ '
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('request_video_special_chat', 0, async function (done) {
      let testNum = 'request_video_special_chat';
      let fileUri = '⛰ * ⛪ ⛩ ⛲ ⛺ ♨ ⛽ ⚓ '
      let errCode = '401'
      await requestVideoDestUriError(testNum, done, fileUri, errCode)
    });

    /**
     * @tc.number    : SUB_PHOTOACCESS_HELPER_REQUEST_VIDEO_2200
     * @tc.name      : test requestVideo with fileUri = 'a...a'(length = 385)
     * @tc.desc      : request video with fileUri = 'a...a'(length = 385)
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('request_video_fileUri_extr_long_string', 0, async function (done) {
      let testNum = 'request_video_fileUri_extr_long_string';
      let fileUri = ''
      for (let i = 0; i < 385; i++) {
        fileUri += 'a'
      }
      let errCode = '401'
      await requestVideoDestUriError(testNum, done, fileUri, errCode)
    });

    /**
     * @tc.number    : SUB_PHOTOACCESS_HELPER_REQUEST_VIDEO_2300
     * @tc.name      : test requestVideo with photoAsset : imageAsset
     * @tc.desc      : request video with photoAsset : imageAsset
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('request_video_photoAsset_imageAsset', 0, async function (done) {
      let testNum = 'request_video_photoAsset_imageAsset';
      try {
        let fetchOps = fetchOption(testNum, photoKeys.DISPLAY_NAME, "request_image.jpg");
        let fetchResult = await helper.getAssets(fetchOps);
        let photoAsset = await fetchResult.getFirstObject();
        let destUri = createSandboxFileUri('mp4');
        class MediaHandler implements photoAccessHelper.MediaAssetDataHandler<boolean> {
          onDataPrepared(data : boolean) {
            console.info(`${testNum} succeed`);
            expect(false).assertTrue();
            done();
          }
        }
        let requestOptions : photoAccessHelper.RequestOptions = {
          deliveryMode: photoAccessHelper.DeliveryMode.FAST_MODE,
          sourceMode: photoAccessHelper.SourceMode.ORIGINAL_MODE,
          compatibleMode: photoAccessHelper.CompatibleMode.ORIGINAL_FORMAT_MODE,
        }
        const handler = new MediaHandler();
        await photoAccessHelper.MediaAssetManager.requestVideoFile(
          globalThis.abilityContext, photoAsset, requestOptions, destUri, handler)
      } catch (error) {
        console.error(`${testNum} failed; error: ${error.code}  ${error.message}`);
        expect(error.code).assertEqual('401');
        done();
      }
    });

    /**
     * @tc.number    : SUB_PHOTOACCESS_HELPER_REQUEST_VIDEO_2400
     * @tc.name      : test requestVideo fileUri : ***.jpg
     * @tc.desc      : request video with fileUri : ***.jpg
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('request_video_fileUri_image', 0, async function (done) {
      let testNum = 'request_video_fileUri_image';
      try {
        let fetchOps = fetchOption(testNum, photoKeys.DISPLAY_NAME, "request_video.mp4");
        let fetchResult = await helper.getAssets(fetchOps);
        let photoAsset = await fetchResult.getFirstObject();
        let destUri = createSandboxFileUri('jpg');
        class MediaHandler implements photoAccessHelper.MediaAssetDataHandler<boolean> {
          onDataPrepared(data : boolean) {
            console.info(`${testNum} succeed`);
            expect(false).assertTrue();
            done();
          }
        }
        let requestOptions : photoAccessHelper.RequestOptions = {
          deliveryMode: photoAccessHelper.DeliveryMode.FAST_MODE,
          sourceMode: photoAccessHelper.SourceMode.ORIGINAL_MODE,
          compatibleMode: photoAccessHelper.CompatibleMode.ORIGINAL_FORMAT_MODE,
        }
        const handler = new MediaHandler();
        await photoAccessHelper.MediaAssetManager.requestVideoFile(
          globalThis.abilityContext, photoAsset, requestOptions, destUri, handler)
      } catch (error) {
        console.error(`${testNum} failed; error: ${error.code}  ${error.message}`);
        expect(error.code).assertEqual('401');
        done();
      }
    });

    /**
     * @tc.number    : SUB_PHOTOACCESS_HELPER_REQUEST_VIDEO_2500
     * @tc.name      : test requestVideo with fileUri: ***.jpg, photoAsset: imageAsset
     * @tc.desc      : request video with fileUri: ***.jpg, photoAsset: imageAsset
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('request_video_fileUri_imageUri_photoAsset_imageAsset', 0, async function (done) {
      let testNum = 'request_video_fileUri_imageUri_photoAsset_imageAsset';
      try {
        let fetchOps = fetchOption(testNum, photoKeys.DISPLAY_NAME, "request_image.jpg");
        let fetchResult = await helper.getAssets(fetchOps);
        let photoAsset = await fetchResult.getFirstObject();
        let destUri = createSandboxFileUri('jpg');
        class MediaHandler implements photoAccessHelper.MediaAssetDataHandler<boolean> {
          onDataPrepared(data : boolean) {
            console.info(`${testNum} succeed`);
            expect(false).assertTrue();
            done();
          }
        }
        let requestOptions : photoAccessHelper.RequestOptions = {
          deliveryMode: photoAccessHelper.DeliveryMode.FAST_MODE,
          sourceMode: photoAccessHelper.SourceMode.ORIGINAL_MODE,
          compatibleMode: photoAccessHelper.CompatibleMode.ORIGINAL_FORMAT_MODE,
        }
        const handler = new MediaHandler();
        await photoAccessHelper.MediaAssetManager.requestVideoFile(
          globalThis.abilityContext, photoAsset, requestOptions, destUri, handler)
      } catch (error) {
        console.error(`${testNum} failed; error: ${error.code}  ${error.message}`);
        expect(error.code).assertEqual('401');
        done();
      }
    });

    /**
     * @tc.number    : SUB_PHOTOACCESS_HELPER_REQUEST_VIDEO_2600
     * @tc.name      : test requestVideo with fileUri = 'test.mp4'
     * @tc.desc      : request video with fileUri = 'test.mp4'
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('request_video_fileUri_empty_string', 0, async function (done) {
      let testNum = 'request_video_fileUri_empty_string';
      let fileUri = ''
      let errCode = '401' 
      await requestVideoDestUriError(testNum, done, fileUri, errCode)
    });

    /**
     * @tc.number    : SUB_PHOTOACCESS_HELPER_REQUEST_VIDEO_2700
     * @tc.name      : request_video_000
     * @tc.desc      : request video with deliveryMode: fastMode and sourceMode: originalMode and
     *                 compatibleMode: COMPATIBLE_FORMAT_MODE and onProgress
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('request_video_transcoding_fast_source_original', 0, async function (done) {
      let testNum = 'request_video_transcoding_fast_source_original';
      let requestOptions : photoAccessHelper.RequestOptions = {
        deliveryMode: photoAccessHelper.DeliveryMode.FAST_MODE,
        sourceMode: photoAccessHelper.SourceMode.ORIGINAL_MODE,
        compatibleMode: photoAccessHelper.CompatibleMode.COMPATIBLE_FORMAT_MODE,
        mediaAssetProgressHandler: TestHandler,
      }
      await requestVideoRequestOptions(testNum, done, requestOptions)
    });

    /**
     * @tc.number    : SUB_PHOTOACCESS_HELPER_REQUEST_VIDEO_2800
     * @tc.name      : test requestVideo with hignQualityMode and sourceMode: originalMode and
     *                 compatibleMode: COMPATIBLE_FORMAT_MODE and onProgress
     * @tc.desc      : request video with deliveryMode: hignQualityMode and sourceMode: originalMode and
     *                 compatibleMode: COMPATIBLE_FORMAT_MODE and onProgress
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('request_video_transcoding_high_source_original', 0, async function (done) {
      let testNum = 'request_video_transcoding_high_source_original';
      let requestOptions : photoAccessHelper.RequestOptions = {
        deliveryMode: photoAccessHelper.DeliveryMode.HIGH_QUALITY_MODE,
        sourceMode: photoAccessHelper.SourceMode.ORIGINAL_MODE,
        compatibleMode: photoAccessHelper.CompatibleMode.COMPATIBLE_FORMAT_MODE,
        mediaAssetProgressHandler: TestHandler,
      }
      await requestVideoRequestOptions(testNum, done, requestOptions)
    });

    /**
     * @tc.number    : SUB_PHOTOACCESS_HELPER_REQUEST_VIDEO_2900
     * @tc.name      : test requestVideo with balancedMode and sourceMode: originalMode and
     *                 compatibleMode: COMPATIBLE_FORMAT_MODE and onProgress
     * @tc.desc      : request image with deliveryMode: balancedMode and sourceMode: originalMode and
     *                 compatibleMode: COMPATIBLE_FORMAT_MODE and onProgress
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('request_video_transcoding_balance_source_original', 0, async function (done) {
      let testNum = 'request_video_transcoding_balance_source_original';
      let requestOptions : photoAccessHelper.RequestOptions = {
        deliveryMode: photoAccessHelper.DeliveryMode.BALANCE_MODE,
        sourceMode: photoAccessHelper.SourceMode.ORIGINAL_MODE,
        compatibleMode: photoAccessHelper.CompatibleMode.COMPATIBLE_FORMAT_MODE,
        mediaAssetProgressHandler: TestHandler,
      }
      await requestVideoRequestOptions(testNum, done, requestOptions)
    });

    /**
     * @tc.number    : SUB_PHOTOACCESS_HELPER_REQUEST_VIDEO_3000
     * @tc.name      : test requestVideo with fastMode and sourceMode: editedMode and
     *                 compatibleMode: COMPATIBLE_FORMAT_MODE and onProgress
     * @tc.desc      : request video with deliveryMode: fastMode and sourceMode: editedMode and
     *                 compatibleMode: COMPATIBLE_FORMAT_MODE and onProgress
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('request_video_transcoding_fast_source_edited', 0, async function (done) {
      let testNum = 'request_video_transcoding_fast_source_edited';
      let requestOptions : photoAccessHelper.RequestOptions = {
        deliveryMode: photoAccessHelper.DeliveryMode.FAST_MODE,
        sourceMode: photoAccessHelper.SourceMode.EDITED_MODE,
        compatibleMode: photoAccessHelper.CompatibleMode.COMPATIBLE_FORMAT_MODE,
        mediaAssetProgressHandler: TestHandler,
      }
      await requestVideoRequestOptions(testNum, done, requestOptions)
    });

    /**
     * @tc.number    : SUB_PHOTOACCESS_HELPER_REQUEST_VIDEO_3100
     * @tc.name      : test requestVideo with hignQualityMode and sourceMode: editedMode and
     *                 compatibleMode: COMPATIBLE_FORMAT_MODE and onProgress
     * @tc.desc      : request video with deliveryMode: hignQualityMode and sourceMode: editedMode and
     *                 compatibleMode: COMPATIBLE_FORMAT_MODE and onProgress
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('request_video_transcoding_high_source_edited', 0, async function (done) {
      let testNum = 'request_video_transcoding_high_source_edited';
      let requestOptions : photoAccessHelper.RequestOptions = {
        deliveryMode: photoAccessHelper.DeliveryMode.HIGH_QUALITY_MODE,
        sourceMode: photoAccessHelper.SourceMode.EDITED_MODE,
        compatibleMode: photoAccessHelper.CompatibleMode.COMPATIBLE_FORMAT_MODE,
        mediaAssetProgressHandler: TestHandler,
      }
      await requestVideoRequestOptions(testNum, done, requestOptions)
    });

    /**
     * @tc.number    : SUB_PHOTOACCESS_HELPER_REQUEST_VIDEO_3200
     * @tc.name      : test requestVideo with balancedMode and sourceMode: editedMode and
     *                 compatibleMode: COMPATIBLE_FORMAT_MODE and onProgress
     * @tc.desc      : request video with deliveryMode: balancedMode and sourceMode: editedMode and
     *                 compatibleMode: COMPATIBLE_FORMAT_MODE and onProgress
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('request_video_transcoding_balance_source_edited', 0, async function (done) {
      let testNum = 'request_video_transcoding_balance_source_edited';
      let requestOptions : photoAccessHelper.RequestOptions = {
        deliveryMode: photoAccessHelper.DeliveryMode.BALANCE_MODE,
        sourceMode: photoAccessHelper.SourceMode.EDITED_MODE,
        compatibleMode: photoAccessHelper.CompatibleMode.COMPATIBLE_FORMAT_MODE,
        mediaAssetProgressHandler: TestHandler,
      }
      await requestVideoRequestOptions(testNum, done, requestOptions)
    });

    /**
     * @tc.number    : SUB_PHOTOACCESS_HELPER_REQUEST_VIDEO_3300
     * @tc.name      : test requestVideo with balancedMode and sourceMode: null and
     *                 compatibleMode: COMPATIBLE_FORMAT_MODE and onProgress
     * @tc.desc      : request video with deliveryMode: balancedMode and sourceMode: null and
     *                 compatibleMode: COMPATIBLE_FORMAT_MODE and onProgress
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('request_transcoding_video_source_mode_null', 0, async function (done) {
      let testNum = 'request_transcoding_video_source_mode_null';
      let requestOptions : photoAccessHelper.RequestOptions = {
        deliveryMode: photoAccessHelper.DeliveryMode.BALANCE_MODE,
        sourceMode: null,
        compatibleMode: photoAccessHelper.CompatibleMode.COMPATIBLE_FORMAT_MODE,
        mediaAssetProgressHandler: TestHandler,
      }
      await requestVideoRequestOptionsError(testNum, done, requestOptions)
    });

    /**
     * @tc.number    : SUB_PHOTOACCESS_HELPER_REQUEST_VIDEO_3400
     * @tc.name      : test requestVideo with balancedMode and sourceMode: undefined and
     *                 compatibleMode: COMPATIBLE_FORMAT_MODE and onProgress
     * @tc.desc      : request video with deliveryMode: balancedMode and sourceMode: undefined and
     *                 compatibleMode: COMPATIBLE_FORMAT_MODE and onProgress
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('request_transcoding_video_source_mode_undefined', 0, async function (done) {
      let testNum = 'request_transcoding_video_source_mode_undefined';
      let requestOptions : photoAccessHelper.RequestOptions = {
        deliveryMode: photoAccessHelper.DeliveryMode.BALANCE_MODE,
        sourceMode: undefined,
        compatibleMode: photoAccessHelper.CompatibleMode.COMPATIBLE_FORMAT_MODE,
        mediaAssetProgressHandler: TestHandler,
      }
      await requestVideoRequestOptionsError(testNum, done, requestOptions)
    });

    /**
     * @tc.number    : SUB_PHOTOACCESS_HELPER_REQUEST_VIDEO_3500
     * @tc.name      : test requestVideo with deliveryMode: balancedMode and sourceMode: -100 and
     *                 compatibleMode: COMPATIBLE_FORMAT_MODE and onProgress
     * @tc.desc      : request video with deliveryMode: balancedMode and sourceMode: -100 and
     *                 compatibleMode: COMPATIBLE_FORMAT_MODE and onProgress
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('request_transcoding_video_source_mode_100', 0, async function (done) {
      let testNum = 'request_transcoding_video_source_mode_100';
      let requestOptions : photoAccessHelper.RequestOptions = {
        deliveryMode: photoAccessHelper.DeliveryMode.BALANCE_MODE,
        sourceMode: -100,
        compatibleMode: photoAccessHelper.CompatibleMode.COMPATIBLE_FORMAT_MODE,
        mediaAssetProgressHandler: TestHandler,
      }
      await requestVideoRequestOptionsError(testNum, done, requestOptions)
    });

   /**
     * @tc.number    : SUB_PHOTOACCESS_HELPER_REQUEST_VIDEO_3600
     * @tc.name      : test requestVideo with deliveryMode: null and sourceMode: EDITED_MODE and
     *                 compatibleMode: COMPATIBLE_FORMAT_MODE and onProgress
     * @tc.desc      : request video with deliveryMode: null and sourceMode: EDITED_MODE and
     *                 compatibleMode: COMPATIBLE_FORMAT_MODE and onProgress
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('request_video_dtranscoding_mode_null', 0, async function (done) {
      let testNum = 'request_video_dtranscoding_mode_null';
      let requestOptions : photoAccessHelper.RequestOptions = {
        deliveryMode: null,
        sourceMode: photoAccessHelper.SourceMode.EDITED_MODE,
        compatibleMode: photoAccessHelper.CompatibleMode.COMPATIBLE_FORMAT_MODE,
        mediaAssetProgressHandler: TestHandler,
      }
      await requestVideoRequestOptionsError(testNum, done, requestOptions)
    });

    /**
     * @tc.number    : SUB_PHOTOACCESS_HELPER_REQUEST_VIDEO_3700
     * @tc.name      : test requestVideo with deliveryMode: undefined and sourceMode: EDITED_MODE and
     *                 compatibleMode: COMPATIBLE_FORMAT_MODE and onProgress
     * @tc.desc      : request video with deliveryMode: undefined and sourceMode: EDITED_MODE and
     *                 compatibleMode: COMPATIBLE_FORMAT_MODE and onProgress
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('request_video_transcoding_mode_undefined', 0, async function (done) {
      let testNum = 'request_video_transcoding_mode_undefined';
      let requestOptions : photoAccessHelper.RequestOptions = {
        deliveryMode: undefined,
        sourceMode: photoAccessHelper.SourceMode.EDITED_MODE,
        compatibleMode: photoAccessHelper.CompatibleMode.COMPATIBLE_FORMAT_MODE,
        mediaAssetProgressHandler: TestHandler,
      }
      await requestVideoRequestOptionsError(testNum, done, requestOptions)
    });

    /**
     * @tc.number    : SUB_PHOTOACCESS_HELPER_REQUEST_VIDEO_3800
     * @tc.name      : test requestVideo with deliveryMode: -100 and sourceMode: EDITED_MODE and
     *                 compatibleMode: COMPATIBLE_FORMAT_MODE and onProgress
     * @tc.desc      : request video with deliveryMode: -100 and sourceMode: EDITED_MODE and
     *                 compatibleMode: COMPATIBLE_FORMAT_MODE and onProgress
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('request_video_transcoding_mode_100', 0, async function (done) {
      let testNum = 'request_video_transcoding_mode_100';
      let requestOptions : photoAccessHelper.RequestOptions = {
        deliveryMode: -100,
        sourceMode: photoAccessHelper.SourceMode.EDITED_MODE,
        compatibleMode: photoAccessHelper.CompatibleMode.COMPATIBLE_FORMAT_MODE,
        mediaAssetProgressHandler: TestHandler,
      }
      await requestVideoRequestOptionsError(testNum, done, requestOptions)
    });

    /**
     * @tc.number    : SUB_PHOTOACCESS_HELPER_REQUEST_VIDEO_3900
     * @tc.name      : test requestVideo with photoAsset = null
     * @tc.desc      : request video with photoAsset = null
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('request_transcoding_video_photo_asset_null', 0, async function (done) {
      let testNum = 'request_transcoding_video_photo_asset_null';
      let photoAsset = null
      await requestVideoPhotoAssetErrorTranscode(testNum, done, photoAsset)
    });

    /**
     * @tc.number    : SUB_PHOTOACCESS_HELPER_REQUEST_VIDEO_4000
     * @tc.name      : test requestVideo with photoAsset = undefined
     * @tc.desc      : request video with photoAsset = undefined
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('request_transcoding_video_photo_asset_undefined', 0, async function (done) {
      let testNum = 'request_transcoding_video_photo_asset_undefined';
      let photoAsset = undefined
      await requestVideoPhotoAssetErrorTranscode(testNum, done, photoAsset)
    });

    /**
     * @tc.number    : SUB_PHOTOACCESS_HELPER_REQUEST_VIDEO_4100
     * @tc.name      : test requestVideo with photoAsset = 'test'
     * @tc.desc      : request video with photoAsset = 'test'
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('request_transcoding_video_photo_asset_test_string', 0, async function (done) {
      let testNum = 'request_transcoding_video_photo_asset_test_string';
      let photoAsset = 'test'
      await requestVideoPhotoAssetErrorTranscode(testNum, done, photoAsset)
    });

    /**
     * @tc.number    : SUB_PHOTOACCESS_HELPER_REQUEST_VIDEO_4200
     * @tc.name      : test requestVideo with photoAsset = true
     * @tc.desc      : request video with photoAsset = true
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('request_transcoding_video_photo_asset_true', 0, async function (done) {
      let testNum = 'request_transcoding_video_photo_asset_true';
      let photoAsset = true
      await requestVideoPhotoAssetErrorTranscode(testNum, done, photoAsset)
    });

    /**
     * @tc.number    : SUB_PHOTOACCESS_HELPER_REQUEST_VIDEO_4300
     * @tc.name      : test requestVideo with photoAsset = {a: 10}
     * @tc.desc      : request video with photoAsset = {a: 10}
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('request_transcoding_video_photo_asset_object', 0, async function (done) {
      let testNum = 'request_transcoding_video_photo_asset_object';
      let photoAsset = {a: 10}
      await requestVideoPhotoAssetErrorTranscode(testNum, done, photoAsset)
    });

    /**
     * @tc.number    : SUB_PHOTOACCESS_HELPER_REQUEST_VIDEO_4400
     * @tc.name      : test requestVideo with fileUri = null
     * @tc.desc      : request video with fileUri = null
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('request_transcoding_video_fileUri_null', 0, async function (done) {
      let testNum = 'request_transcoding_video_fileUri_null';
      let fileUri = null
      let errCode = '401'
      await requestVideoDestUriErrorTranscode(testNum, done, fileUri, errCode)
    });

    /**
     * @tc.number    : SUB_PHOTOACCESS_HELPER_REQUEST_VIDEO_4500
     * @tc.name      : test requestVideo with fileUri = undefined
     * @tc.desc      : request video with fileUri = undefined
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('request_transcoding_video_fileUri_undefined', 0, async function (done) {
      let testNum = 'request_transcoding_video_fileUri_undefined';
      let fileUri = undefined
      let errCode = '401'
      await requestVideoDestUriErrorTranscode(testNum, done, fileUri, errCode)
    });

    /**
     * @tc.number    : SUB_PHOTOACCESS_HELPER_REQUEST_VIDEO_4600
     * @tc.name      : test requestVideo with fileUri = true
     * @tc.desc      : request video with fileUri = true
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('request_transcoding_video_fileUri_true', 0, async function (done) {
      let testNum = 'request_transcoding_video_fileUri_true';
      let fileUri = true
      let errCode = '401'
      await requestVideoDestUriErrorTranscode(testNum, done, fileUri, errCode)
    });

    /**
     * @tc.number    : SUB_PHOTOACCESS_HELPER_REQUEST_VIDEO_4700
     * @tc.name      : test requestVideo with fileUri = 'aaaaa.....mp4'(length = 384)
     * @tc.desc      : request video with fileUri = 'aaaaa.....mp4'(length = 384)
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('request_transcoding_video_fileUri_test_string', 0, async function (done) {
      let testNum = 'request_transcoding_video_fileUri_test_string';
      let fileUri = ''
      for (let i = 0; i < 380; i++) {
        fileUri += 'a'
      }
      fileUri+= '.mp4'
      let errCode = '401' 
      await requestVideoDestUriErrorTranscode(testNum, done, fileUri, errCode)
    });

    /**
     * @tc.number    : SUB_PHOTOACCESS_HELPER_REQUEST_VIDEO_4800
     * @tc.name      : test requestVideo with fileUri = '⛰ * ⛪ ⛩ ⛲ ⛺ ♨ ⛽ ⚓ '
     * @tc.desc      : request video with fileUri = '⛰ * ⛪ ⛩ ⛲ ⛺ ♨ ⛽ ⚓ '
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('request_transcoding_video_special_chat', 0, async function (done) {
      let testNum = 'request_transcoding_video_special_chat';
      let fileUri = '⛰ * ⛪ ⛩ ⛲ ⛺ ♨ ⛽ ⚓ '
      let errCode = '401'
      await requestVideoDestUriErrorTranscode(testNum, done, fileUri, errCode)
    });

    /**
     * @tc.number    : SUB_PHOTOACCESS_HELPER_REQUEST_VIDEO_4900
     * @tc.name      : test requestVideo with fileUri = 'a...a'(length = 385)
     * @tc.desc      : request video with fileUri = 'a...a'(length = 385)
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('request_transcoding_video_fileUri_extr_long_string', 0, async function (done) {
      let testNum = 'request_transcoding_video_fileUri_extr_long_string';
      let fileUri = ''
      for (let i = 0; i < 385; i++) {
        fileUri += 'a'
      }
      let errCode = '401'
      await requestVideoDestUriErrorTranscode(testNum, done, fileUri, errCode)
    });

    /**
     * @tc.number    : SUB_PHOTOACCESS_HELPER_REQUEST_VIDEO_5000
     * @tc.name      : test requestVideo with fileUri = 'test.mp4'
     * @tc.desc      : request video with fileUri = 'test.mp4'
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('request_transcoding_video_fileUri_empty_string', 0, async function (done) {
      let testNum = 'request_transcoding_video_fileUri_empty_string';
      let fileUri = ''
      let errCode = '401' 
      await requestVideoDestUriErrorTranscode(testNum, done, fileUri, errCode)
    });

  });
}