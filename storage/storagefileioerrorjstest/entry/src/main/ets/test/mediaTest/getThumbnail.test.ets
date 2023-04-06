/*
 * Copyright (C) 2023 Huawei Device Co., Ltd.
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

import { describe, it, expect } from '@ohos/hypium'
import hilog from '@ohos.hilog'
import image from '@ohos.multimedia.image';
import { initGetThumbnailEnv } from "../common"

const DOMAIN_CODE = 0x0001;
const TAG = 'getThumbnailTest';

export default function getThumbnailTest(helper) {

  describe('mediaGetThumbnailTest', function () {
    image.createPixelMap(new ArrayBuffer(4096), { size: { height: 1, width: 2 } }).then(() => { });

    let fileName = initGetThumbnailEnv("Picture_001.jpg", helper);
    const imageRelativePath = "Download/" + fileName;
    fileName = initGetThumbnailEnv("Video_001.mp4", helper);
    const videoRelativePath = "Download/" + fileName;
    fileName = initGetThumbnailEnv("Audio_001.mp3", helper);
    const audioRelativePath = "Download/" + fileName;

    async function getThumbnail(done, testNum, mediaType, size) {
      hilog.info(DOMAIN_CODE, TAG, `${testNum}:: in`);
      try {
        let fileinfo;
        if (mediaType == 'image') {
          fileinfo = await helper.getFileInfoFromRelativePath(imageRelativePath);
        } else if (mediaType == 'video') {
          fileinfo = await helper.getFileInfoFromRelativePath(videoRelativePath);
        } else if (mediaType == 'audio') {
          fileinfo = await helper.getFileInfoFromRelativePath(audioRelativePath);
        } else {
          hilog.error(DOMAIN_CODE, TAG, `${testNum}:: error : mediaType mismatch`);
          expect(false).assertTrue();
        }

        let pixelmap = await helper.getThumbnail(fileinfo.uri, size);
        let info = await pixelmap.getImageInfo();
        expect(info.size.width).assertEqual(size.width);
        expect(info.size.height).assertEqual(size.height);
        done();
      } catch (error) {
        hilog.error(DOMAIN_CODE, TAG, `${testNum}:: error : ${error}`);
        expect(false).assertTrue();
      }
    }

    async function getThumbnailAbnormalSize(done, testNum, mediaType, size) {
      try {
        let fileinfo;
        if (mediaType == 'image') {
          fileinfo = await helper.getFileInfoFromRelativePath(imageRelativePath);
        } else if (mediaType == 'video') {
          fileinfo = await helper.getFileInfoFromRelativePath(videoRelativePath);
        } else if (mediaType == 'audio') {
          fileinfo = await helper.getFileInfoFromRelativePath(audioRelativePath);
        } else {
          hilog.error(DOMAIN_CODE, TAG, `${testNum}:: error : mediaType mismatch`);
          expect(false).assertTrue();
        }
        await helper.getThumbnail(fileinfo.uri, size);
        expect(false).assertTrue();
      } catch (error) {
        hilog.info(DOMAIN_CODE, TAG, `${testNum}:: error :${error}`);
        expect(true).assertTrue();
        done();
      }
    }

    async function getThumbnailAbnormalUri(done, testNum, mediaType, uri, size) {
      try {
        let pixelmap;
        if (mediaType == 'image') {
          pixelmap = await helper.getThumbnail(uri, size);
        } else if (mediaType == 'video') {
          pixelmap = await helper.getThumbnail(uri, size);
        } else if (mediaType == 'audio') {
          pixelmap = await helper.getThumbnail(uri, size);
        }
        hilog.error(DOMAIN_CODE, TAG, `${testNum}:: error : mediaType mismatch`);
        expect(false).assertTrue();
      } catch (error) {
        hilog.info(DOMAIN_CODE, TAG, `${testNum}:: error :${error}`);
        expect(true).assertTrue();
        done();
      }
    }

    async function getThumbnailCallback(done, testNum, mediaType, size) {
      hilog.info(DOMAIN_CODE, TAG, `${testNum}:: in`);
      try {
        let fileinfo;
        if (mediaType == 'image') {
          fileinfo = await helper.getFileInfoFromRelativePath(imageRelativePath);
        } else if (mediaType == 'video') {
          fileinfo = await helper.getFileInfoFromRelativePath(videoRelativePath);
        } else if (mediaType == 'audio') {
          fileinfo = await helper.getFileInfoFromRelativePath(audioRelativePath);
        } else {
          hilog.error(DOMAIN_CODE, TAG, `${testNum}:: error : mediaType mismatch`);
          expect(false).assertTrue();
        }

        helper.getThumbnail(fileinfo.uri, size, async (err, pixelmap) => {
          if (err) {
            hilog.error(DOMAIN_CODE, TAG,
              "Failed to getThumbnail in async, err.code:" + err.code + ", errMessage:" + err.message);
            return;
          }
          let info = await pixelmap.getImageInfo();
          expect(info.size.width).assertEqual(size.width);
          expect(info.size.height).assertEqual(size.height);
          done();
        })
      } catch (error) {
        hilog.error(DOMAIN_CODE, TAG, `${testNum}:: error : ${error}`);
        expect(false).assertTrue();
      }
    }

    async function getThumbnailCallbackAbnormalSize(done, testNum, mediaType, size) {
      try {
        let fileinfo;
        if (mediaType == 'image') {
          fileinfo = await helper.getFileInfoFromRelativePath(imageRelativePath);
        } else if (mediaType == 'video') {
          fileinfo = await helper.getFileInfoFromRelativePath(videoRelativePath);
        } else if (mediaType == 'audio') {
          fileinfo = await helper.getFileInfoFromRelativePath(audioRelativePath);
        } else {
          hilog.error(DOMAIN_CODE, TAG, `${testNum}:: error : mediaType mismatch`);
          expect(false).assertTrue();
        }
        helper.getThumbnail(fileinfo.uri, size, async (err) => {
          if (err) {
            hilog.info(DOMAIN_CODE, TAG, `${testNum}:: err :${err}`);
            expect(true).assertTrue();
            done();
          }
        })
      } catch (error) {
        hilog.info(DOMAIN_CODE, TAG, `${testNum}:: error :${error}`);
        expect(true).assertTrue();
        done();
      }
    }

    async function getThumbnailCallbackAbnormalUri(done, testNum, uri, size) {
      try {
        helper.getThumbnail(uri, size, async (err) => {
          if (err) {
            hilog.info(DOMAIN_CODE, TAG, `${testNum}:: err :${err}`);
            expect(true).assertTrue();
            done();
          }
        })
      } catch (error) {
        hilog.error(DOMAIN_CODE, TAG, `${testNum}:: error :${error}`);
        expect(false).assertTrue();
      }
    }

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_GET_THUMBNAIL_PROMISE_0000
     * @tc.name media_file_access_test_get_thumbnail_promise_000
     * @tc.desc Test getThumbnail() interfaces, return in promise mode.
     *  getThumbnail(image) by { width: 128, height: 128 }
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('sub_df_media_file_access_get_thumbnail_promise_0000', 0, async function (done) {
      let testNum = 'SUB_DF_MEDIA_FILE_ACCESS_GET_THUMBNAIL_PROMISE_0000';
      let mediaType = 'image';
      let size = { width: 128, height: 128 };
      await getThumbnail(done, testNum, mediaType, size);
    });

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_GET_THUMBNAIL_PROMISE_0100
     * @tc.name media_file_access_test_get_thumbnail_promise_001
     * @tc.desc Test getThumbnail() interfaces, return in promise mode.
     *  getThumbnail(image) by { width: 128, height: 256 }
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 3
     * @tc.require
     */
    it('sub_df_media_file_access_get_thumbnail_promise_0100', 0, async function (done) {
      let testNum = 'SUB_DF_MEDIA_FILE_ACCESS_GET_THUMBNAIL_PROMISE_0100';
      let mediaType = 'image';
      let size = { width: 128, height: 256 };
      await getThumbnail(done, testNum, mediaType, size)
    });

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_GET_THUMBNAIL_PROMISE_0200
     * @tc.name media_file_access_test_get_thumbnail_promise_002
     * @tc.desc Test getThumbnail() interfaces, return in promise mode.
     *  getThumbnail(image) by { width: 256, height: 256 }
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('sub_df_media_file_access_get_thumbnail_promise_0200', 0, async function (done) {
      let testNum = 'SUB_DF_MEDIA_FILE_ACCESS_GET_THUMBNAIL_PROMISE_0200';
      let mediaType = 'image';
      let size = { width: 256, height: 256 };
      await getThumbnail(done, testNum, mediaType, size)
    });

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_GET_THUMBNAIL_PROMISE_0300
     * @tc.name media_file_access_test_get_thumbnail_promise_003
     * @tc.desc Test getThumbnail() interfaces, return in promise mode.
     *  getThumbnail(image) by { width: 1, height: 1 }
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 3
     * @tc.require
     */
    it('sub_df_media_file_access_get_thumbnail_promise_0300', 0, async function (done) {
      let testNum = 'SUB_DF_MEDIA_FILE_ACCESS_GET_THUMBNAIL_PROMISE_0300';
      let mediaType = 'image';
      let size = { width: 1, height: 1 };
      await getThumbnail(done, testNum, mediaType, size)
    });

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_GET_THUMBNAIL_PROMISE_0400
     * @tc.name media_file_access_test_get_thumbnail_promise_004
     * @tc.desc Test getThumbnail() interfaces, return in promise mode.
     *  getThumbnail(image) by { width: 0, height: 0 }
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 3
     * @tc.require
     */
    it('sub_df_media_file_access_get_thumbnail_promise_0400', 0, async function (done) {
      let testNum = 'SUB_DF_MEDIA_FILE_ACCESS_GET_THUMBNAIL_PROMISE_0400';
      let mediaType = 'image';
      let size = { width: 0, height: 0 };
      await getThumbnailAbnormalSize(done, testNum, mediaType, size)
    });

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_GET_THUMBNAIL_PROMISE_0500
     * @tc.name media_file_access_test_get_thumbnail_promise_005
     * @tc.desc Test getThumbnail() interfaces, return in promise mode.
     *  getThumbnail(image) by { width: -128, height: -128 }
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 3
     * @tc.require
     */
    it('sub_df_media_file_access_get_thumbnail_promise_0500', 0, async function (done) {
      let testNum = 'SUB_DF_MEDIA_FILE_ACCESS_GET_THUMBNAIL_PROMISE_0500';
      let mediaType = 'image';
      let size = { width: -128, height: -128 };
      await getThumbnailAbnormalSize(done, testNum, mediaType, size)
    });

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_GET_THUMBNAIL_PROMISE_0600
     * @tc.name media_file_access_test_get_thumbnail_promise_006
     * @tc.desc Test getThumbnail() interfaces, return in promise mode.
     *  getThumbnail(image) by size is null
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 3
     * @tc.require
     */
    it('sub_df_media_file_access_get_thumbnail_promise_0600', 0, async function (done) {
      let testNum = 'SUB_DF_MEDIA_FILE_ACCESS_GET_THUMBNAIL_PROMISE_0600';
      let mediaType = 'image';
      let size = null;
      await getThumbnailAbnormalSize(done, testNum, mediaType, size)
    });

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_GET_THUMBNAIL_PROMISE_0700
     * @tc.name media_file_access_test_get_thumbnail_promise_007
     * @tc.desc Test getThumbnail() interfaces, return in promise mode.
     *  getThumbnail(image) by uri is 'notAllowed'
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 3
     * @tc.require
     */
    it('sub_df_media_file_access_get_thumbnail_promise_0700', 0, async function (done) {
      let testNum = 'SUB_DF_MEDIA_FILE_ACCESS_GET_THUMBNAIL_PROMISE_0700';
      let mediaType = 'image';
      let size = { width: 128, height: 128 };
      let uri = 'notAllowed'
      await getThumbnailAbnormalUri(done, testNum, mediaType, uri, size)
    });

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_GET_THUMBNAIL_PROMISE_0800
     * @tc.name media_file_access_test_get_thumbnail_promise_008
     * @tc.desc Test getThumbnail() interfaces, return in promise mode.
     *  getThumbnail(image) by uri is ''
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 3
     * @tc.require
     */
    it('sub_df_media_file_access_get_thumbnail_promise_0800', 0, async function (done) {
      let testNum = 'SUB_DF_MEDIA_FILE_ACCESS_GET_THUMBNAIL_PROMISE_0800';
      let mediaType = 'image';
      let size = { width: 128, height: 128 };
      let uri = ''
      await getThumbnailAbnormalUri(done, testNum, mediaType, uri, size)
    });

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_GET_THUMBNAIL_PROMISE_0900
     * @tc.name media_file_access_test_get_thumbnail_promise_009
     * @tc.desc Test getThumbnail() interfaces, return in promise mode.
     *  getThumbnail(image) by uri is '/'
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 3
     * @tc.require
     */
    it('sub_df_media_file_access_get_thumbnail_promise_0900', 0, async function (done) {
      let testNum = 'SUB_DF_MEDIA_FILE_ACCESS_GET_THUMBNAIL_PROMISE_0900';
      let mediaType = 'image';
      let size = { width: 128, height: 128 };
      let uri = '/'
      await getThumbnailAbnormalUri(done, testNum, mediaType, uri, size)
    });

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_GET_THUMBNAIL_PROMISE_1000
     * @tc.name media_file_access_test_get_thumbnail_promise_010
     * @tc.desc Test getThumbnail() interfaces, return in promise mode.
     *  getThumbnail(video) by { width: 128, height: 128 }
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('sub_df_media_file_access_get_thumbnail_promise_1000', 0, async function (done) {
      let testNum = 'SUB_DF_MEDIA_FILE_ACCESS_GET_THUMBNAIL_PROMISE_1000';
      let mediaType = 'video';
      let size = { width: 128, height: 128 };
      await getThumbnail(done, testNum, mediaType, size)
    });

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_GET_THUMBNAIL_PROMISE_1100
     * @tc.name media_file_access_test_get_thumbnail_promise_011
     * @tc.desc Test getThumbnail() interfaces, return in promise mode.
     *  getThumbnail(video) by { width: 128, height: 256 }
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 3
     * @tc.require
     */
    it('sub_df_media_file_access_get_thumbnail_promise_1100', 0, async function (done) {
      let testNum = 'SUB_DF_MEDIA_FILE_ACCESS_GET_THUMBNAIL_PROMISE_1100';
      let mediaType = 'video';
      let size = { width: 128, height: 256 };
      await getThumbnail(done, testNum, mediaType, size)
    });

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_GET_THUMBNAIL_PROMISE_1200
     * @tc.name media_file_access_test_get_thumbnail_promise_012
     * @tc.desc Test getThumbnail() interfaces, return in promise mode.
     *  getThumbnail(video) by { width: 256, height: 256 }
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('sub_df_media_file_access_get_thumbnail_promise_1200', 0, async function (done) {
      let testNum = 'SUB_DF_MEDIA_FILE_ACCESS_GET_THUMBNAIL_PROMISE_1200';
      let mediaType = 'video';
      let size = { width: 256, height: 256 };
      await getThumbnail(done, testNum, mediaType, size)
    });

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_GET_THUMBNAIL_PROMISE_1300
     * @tc.name media_file_access_test_get_thumbnail_promise_013
     * @tc.desc Test getThumbnail() interfaces, return in promise mode.
     *  getThumbnail(video) by { width: 1, height: 1 }
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 3
     * @tc.require
     */
    it('sub_df_media_file_access_get_thumbnail_promise_1300', 0, async function (done) {
      let testNum = 'SUB_DF_MEDIA_FILE_ACCESS_GET_THUMBNAIL_PROMISE_1300';
      let mediaType = 'video';
      let size = { width: 1, height: 1 };
      await getThumbnail(done, testNum, mediaType, size)
    });

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_GET_THUMBNAIL_PROMISE_1400
     * @tc.name media_file_access_test_get_thumbnail_promise_014
     * @tc.desc Test getThumbnail() interfaces, return in promise mode.
     *  getThumbnail(video) by { width: 0, height: 0 }
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 3
     * @tc.require
     */
    it('sub_df_media_file_access_get_thumbnail_promise_1400', 0, async function (done) {
      let testNum = 'SUB_DF_MEDIA_FILE_ACCESS_GET_THUMBNAIL_PROMISE_1400';
      let mediaType = 'video';
      let size = { width: 0, height: 0 };
      await getThumbnailAbnormalSize(done, testNum, mediaType, size)
    });

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_GET_THUMBNAIL_PROMISE_1500
     * @tc.name media_file_access_test_get_thumbnail_promise_015
     * @tc.desc Test getThumbnail() interfaces, return in promise mode.
     *  getThumbnail(video) by { width: -128, height: -128 }
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 3
     * @tc.require
     */
    it('sub_df_media_file_access_get_thumbnail_promise_1500', 0, async function (done) {
      let testNum = 'SUB_DF_MEDIA_FILE_ACCESS_GET_THUMBNAIL_PROMISE_1500';
      let mediaType = 'video';
      let size = { width: -128, height: -128 };
      await getThumbnailAbnormalSize(done, testNum, mediaType, size)
    });

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_GET_THUMBNAIL_PROMISE_1600
     * @tc.name media_file_access_test_get_thumbnail_promise_016
     * @tc.desc Test getThumbnail() interfaces, return in promise mode.
     *  getThumbnail(video) by size is null
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 3
     * @tc.require
     */
    it('sub_df_media_file_access_get_thumbnail_promise_1600', 0, async function (done) {
      let testNum = 'SUB_DF_MEDIA_FILE_ACCESS_GET_THUMBNAIL_PROMISE_1600';
      let mediaType = 'video';
      let size = null;
      await getThumbnailAbnormalSize(done, testNum, mediaType, size)
    });

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_GET_THUMBNAIL_PROMISE_1700
     * @tc.name media_file_access_test_get_thumbnail_promise_017
     * @tc.desc Test getThumbnail() interfaces, return in promise mode.
     *  getThumbnail(video) by uri is 'notAllowed'
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 3
     * @tc.require
     */
    it('sub_df_media_file_access_get_thumbnail_promise_1700', 0, async function (done) {
      let testNum = 'SUB_DF_MEDIA_FILE_ACCESS_GET_THUMBNAIL_PROMISE_1700';
      let mediaType = 'video';
      let size = { width: 128, height: 128 };
      let uri = 'notAllowed'
      await getThumbnailAbnormalUri(done, testNum, mediaType, uri, size)
    });

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_GET_THUMBNAIL_PROMISE_1800
     * @tc.name media_file_access_test_get_thumbnail_promise_018
     * @tc.desc Test getThumbnail() interfaces, return in promise mode.
     *  getThumbnail(video) by uri is ''
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 3
     * @tc.require
     */
    it('sub_df_media_file_access_get_thumbnail_promise_1800', 0, async function (done) {
      let testNum = 'SUB_DF_MEDIA_FILE_ACCESS_GET_THUMBNAIL_PROMISE_1800';
      let mediaType = 'video';
      let size = { width: 128, height: 128 };
      let uri = ''
      await getThumbnailAbnormalUri(done, testNum, mediaType, uri, size)
    });

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_GET_THUMBNAIL_PROMISE_1900
     * @tc.name media_file_access_test_get_thumbnail_promise_019
     * @tc.desc Test getThumbnail() interfaces, return in promise mode.
     *  getThumbnail(video) by uri is '/'
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 3
     * @tc.require
     */
    it('sub_df_media_file_access_get_thumbnail_promise_1900', 0, async function (done) {
      let testNum = 'SUB_DF_MEDIA_FILE_ACCESS_GET_THUMBNAIL_PROMISE_1900';
      let mediaType = 'video';
      let size = { width: 128, height: 128 };
      let uri = '/'
      await getThumbnailAbnormalUri(done, testNum, mediaType, uri, size)
    });

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_GET_THUMBNAIL_PROMISE_2000
     * @tc.name media_file_access_test_get_thumbnail_promise_020
     * @tc.desc Test getThumbnail() interfaces, return in promise mode.
     *  getThumbnail(audio) by { width: 128, height: 128 }
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('sub_df_media_file_access_get_thumbnail_promise_2000', 0, async function (done) {
      let testNum = 'SUB_DF_MEDIA_FILE_ACCESS_GET_THUMBNAIL_PROMISE_2000';
      let mediaType = 'audio';
      let size = { width: 128, height: 128 };
      await getThumbnail(done, testNum, mediaType, size)
    });

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_GET_THUMBNAIL_PROMISE_2100
     * @tc.name media_file_access_test_get_thumbnail_promise_021
     * @tc.desc Test getThumbnail() interfaces, return in promise mode.
     *  getThumbnail(audio) by { width: 128, height: 256 }
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 3
     * @tc.require
     */
    it('sub_df_media_file_access_get_thumbnail_promise_2100', 0, async function (done) {
      let testNum = 'SUB_DF_MEDIA_FILE_ACCESS_GET_THUMBNAIL_PROMISE_2100';
      let mediaType = 'audio';
      let size = { width: 128, height: 256 };
      await getThumbnail(done, testNum, mediaType, size)
    });

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_GET_THUMBNAIL_PROMISE_2200
     * @tc.name media_file_access_test_get_thumbnail_promise_022
     * @tc.desc Test getThumbnail() interfaces, return in promise mode.
     *  getThumbnail(audio) by { width: 256, height: 256 }
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('sub_df_media_file_access_get_thumbnail_promise_2200', 0, async function (done) {
      let testNum = 'SUB_DF_MEDIA_FILE_ACCESS_GET_THUMBNAIL_PROMISE_2200';
      let mediaType = 'audio';
      let size = { width: 256, height: 256 };
      await getThumbnail(done, testNum, mediaType, size)
    });

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_GET_THUMBNAIL_PROMISE_2300
     * @tc.name media_file_access_test_get_thumbnail_promise_023
     * @tc.desc Test getThumbnail() interfaces, return in promise mode.
     *  getThumbnail(audio) by { width: 1, height: 1 }
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 3
     * @tc.require
     */
    it('sub_df_media_file_access_get_thumbnail_promise_2300', 0, async function (done) {
      let testNum = 'SUB_DF_MEDIA_FILE_ACCESS_GET_THUMBNAIL_PROMISE_2300';
      let mediaType = 'audio';
      let size = { width: 1, height: 1 };
      await getThumbnail(done, testNum, mediaType, size)
    });

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_GET_THUMBNAIL_PROMISE_2400
     * @tc.name media_file_access_test_get_thumbnail_promise_024
     * @tc.desc Test getThumbnail() interfaces, return in promise mode.
     *  getThumbnail(audio) by { width: 0, height: 0 }
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 3
     * @tc.require
     */
    it('sub_df_media_file_access_get_thumbnail_promise_2400', 0, async function (done) {
      let testNum = 'SUB_DF_MEDIA_FILE_ACCESS_GET_THUMBNAIL_PROMISE_2400';
      let mediaType = 'audio';
      let size = { width: 0, height: 0 };
      await getThumbnailAbnormalSize(done, testNum, mediaType, size)
    });

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_GET_THUMBNAIL_PROMISE_2500
     * @tc.name media_file_access_test_get_thumbnail_promise_025
     * @tc.desc Test getThumbnail() interfaces, return in promise mode.
     *  getThumbnail(audio) by { width: -128, height: -128 }
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 3
     * @tc.require
     */
    it('sub_df_media_file_access_get_thumbnail_promise_2500', 0, async function (done) {
      let testNum = 'SUB_DF_MEDIA_FILE_ACCESS_GET_THUMBNAIL_PROMISE_2500';
      let mediaType = 'audio';
      let size = { width: -128, height: -128 };
      await getThumbnailAbnormalSize(done, testNum, mediaType, size)
    });

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_GET_THUMBNAIL_PROMISE_2600
     * @tc.name media_file_access_test_get_thumbnail_promise_026
     * @tc.desc Test getThumbnail() interfaces, return in promise mode.
     *  getThumbnail(audio) by size is null
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 3
     * @tc.require
     */
    it('sub_df_media_file_access_get_thumbnail_promise_2600', 0, async function (done) {
      let testNum = 'SUB_DF_MEDIA_FILE_ACCESS_GET_THUMBNAIL_PROMISE_2600';
      let mediaType = 'audio';
      let size = null;
      await getThumbnailAbnormalSize(done, testNum, mediaType, size)
    });

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_GET_THUMBNAIL_PROMISE_2700
     * @tc.name media_file_access_test_get_thumbnail_promise_027
     * @tc.desc Test getThumbnail() interfaces, return in promise mode.
     *  getThumbnail(audio) by uri is 'notAllowed'
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 3
     * @tc.require
     */
    it('sub_df_media_file_access_get_thumbnail_promise_2700', 0, async function (done) {
      let testNum = 'SUB_DF_MEDIA_FILE_ACCESS_GET_THUMBNAIL_PROMISE_2700';
      let mediaType = 'audio';
      let size = { width: 128, height: 128 };
      let uri = 'notAllowed'
      await getThumbnailAbnormalUri(done, testNum, mediaType, uri, size)
    });

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_GET_THUMBNAIL_PROMISE_2800
     * @tc.name media_file_access_test_get_thumbnail_promise_028
     * @tc.desc Test getThumbnail() interfaces, return in promise mode.
     *  getThumbnail(audio) by uri is ''
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 3
     * @tc.require
     */
    it('sub_df_media_file_access_get_thumbnail_promise_2800', 0, async function (done) {
      let testNum = 'SUB_DF_MEDIA_FILE_ACCESS_GET_THUMBNAIL_PROMISE_2800';
      let mediaType = 'audio';
      let size = { width: 128, height: 128 };
      let uri = ''
      await getThumbnailAbnormalUri(done, testNum, mediaType, uri, size)
    });

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_GET_THUMBNAIL_PROMISE_2900
     * @tc.name media_file_access_test_get_thumbnail_promise_029
     * @tc.desc Test getThumbnail() interfaces, return in promise mode.
     *  getThumbnail(audio) by uri is '/'
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 3
     * @tc.require
     */
    it('sub_df_media_file_access_get_thumbnail_promise_2900', 0, async function (done) {
      let testNum = 'SUB_DF_MEDIA_FILE_ACCESS_GET_THUMBNAIL_PROMISE_2900';
      let mediaType = 'audio';
      let size = { width: 128, height: 128 };
      let uri = '/'
      await getThumbnailAbnormalUri(done, testNum, mediaType, uri, size)
    });

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_GET_THUMBNAIL_PROMISE_3000
     * @tc.name media_file_access_test_get_thumbnail_promise_030
     * @tc.desc Test getThumbnail() interfaces, return in promise mode.
     *  getThumbnail(image) by { width: 1000, height: 1000 }
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 3
     * @tc.require
     */
    it('sub_df_media_file_access_get_thumbnail_promise_3000', 0, async function (done) {
      let testNum = 'SUB_DF_MEDIA_FILE_ACCESS_GET_THUMBNAIL_PROMISE_3000';
      let mediaType = 'image';
      let size = { width: 1000, height: 1000 };
      await getThumbnail(done, testNum, mediaType, size)
    });

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_GET_THUMBNAIL_CALLBACK_0000
     * @tc.name media_file_access_test_get_thumbnail_callback_000
     * @tc.desc Test getThumbnail() interfaces, return in callback mode.
     *  getThumbnail(image) by { width: 128, height: 128 }
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('sub_df_media_file_access_get_thumbnail_callback_0000', 0, async function (done) {
      let testNum = 'SUB_DF_MEDIA_FILE_ACCESS_GET_THUMBNAIL_CALLBACK_0000';
      let mediaType = 'image';
      let size = { width: 128, height: 128 };
      await getThumbnailCallback(done, testNum, mediaType, size)
    });

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_GET_THUMBNAIL_CALLBACK_0100
     * @tc.name media_file_access_test_get_thumbnail_callback_001
     * @tc.desc Test getThumbnail() interfaces, return in callback mode.
     *  getThumbnail(image) by { width: 128, height: 256 }
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 3
     * @tc.require
     */
    it('sub_df_media_file_access_get_thumbnail_callback_0100', 0, async function (done) {
      let testNum = 'SUB_DF_MEDIA_FILE_ACCESS_GET_THUMBNAIL_CALLBACK_0100';
      let mediaType = 'image';
      let size = { width: 128, height: 256 };
      await getThumbnailCallback(done, testNum, mediaType, size)
    });

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_GET_THUMBNAIL_CALLBACK_0200
     * @tc.name media_file_access_test_get_thumbnail_callback_002
     * @tc.desc Test getThumbnail() interfaces, return in callback mode.
     *  getThumbnail(image) by { width: 256, height: 256 }
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('sub_df_media_file_access_get_thumbnail_callback_0200', 0, async function (done) {
      let testNum = 'SUB_DF_MEDIA_FILE_ACCESS_GET_THUMBNAIL_CALLBACK_0200';
      let mediaType = 'image';
      let size = { width: 256, height: 256 };
      await getThumbnailCallback(done, testNum, mediaType, size)
    });

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_GET_THUMBNAIL_CALLBACK_0300
     * @tc.name media_file_access_test_get_thumbnail_callback_003
     * @tc.desc Test getThumbnail() interfaces, return in callback mode.
     *  getThumbnail(image) by { width: 1, height: 1 }
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 3
     * @tc.require
     */
    it('sub_df_media_file_access_get_thumbnail_callback_0300', 0, async function (done) {
      let testNum = 'SUB_DF_MEDIA_FILE_ACCESS_GET_THUMBNAIL_CALLBACK_0300';
      let mediaType = 'image';
      let size = { width: 1, height: 1 };
      await getThumbnailCallback(done, testNum, mediaType, size)
    });

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_GET_THUMBNAIL_CALLBACK_0400
     * @tc.name media_file_access_test_get_thumbnail_callback_004
     * @tc.desc Test getThumbnail() interfaces, return in callback mode.
     *  getThumbnail(image) by { width: 0, height: 0 }
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 3
     * @tc.require
     */
    it('sub_df_media_file_access_get_thumbnail_callback_0400', 0, async function (done) {
      let testNum = 'SUB_DF_MEDIA_FILE_ACCESS_GET_THUMBNAIL_CALLBACK_0400';
      let mediaType = 'image';
      let size = { width: 0, height: 0 };
      await getThumbnailCallbackAbnormalSize(done, testNum, mediaType, size)
    });

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_GET_THUMBNAIL_CALLBACK_0500
     * @tc.name media_file_access_test_get_thumbnail_callback_005
     * @tc.desc Test getThumbnail() interfaces, return in callback mode.
     *  getThumbnail(image) by { width: -128, height: -128 }
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 3
     * @tc.require
     */
    it('sub_df_media_file_access_get_thumbnail_callback_0500', 0, async function (done) {
      let testNum = 'SUB_DF_MEDIA_FILE_ACCESS_GET_THUMBNAIL_CALLBACK_0500';
      let mediaType = 'image';
      let size = { width: -128, height: -128 };
      await getThumbnailCallbackAbnormalSize(done, testNum, mediaType, size)
    });

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_GET_THUMBNAIL_CALLBACK_0600
     * @tc.name media_file_access_test_get_thumbnail_callback_006
     * @tc.desc Test getThumbnail() interfaces, return in callback mode.
     *  getThumbnail(image) by size is null
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 3
     * @tc.require
     */
    it('sub_df_media_file_access_get_thumbnail_callback_0600', 0, async function (done) {
      let testNum = 'SUB_DF_MEDIA_FILE_ACCESS_GET_THUMBNAIL_CALLBACK_0600';
      let mediaType = 'image';
      let size = null;
      await getThumbnailCallbackAbnormalSize(done, testNum, mediaType, size)
    });

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_GET_THUMBNAIL_CALLBACK_0700
     * @tc.name media_file_access_test_get_thumbnail_callback_007
     * @tc.desc Test getThumbnail() interfaces, return in callback mode.
     *  getThumbnail(image) by uri is 'notAllowed'
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 3
     * @tc.require
     */
    it('sub_df_media_file_access_get_thumbnail_callback_0700', 0, async function (done) {
      let testNum = 'SUB_DF_MEDIA_FILE_ACCESS_GET_THUMBNAIL_CALLBACK_0700';
      let size = { width: 128, height: 128 };
      let uri = 'notAllowed'
      await getThumbnailCallbackAbnormalUri(done, testNum, uri, size)
    });

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_GET_THUMBNAIL_CALLBACK_0800
     * @tc.name media_file_access_test_get_thumbnail_callback_008
     * @tc.desc Test getThumbnail() interfaces, return in callback mode.
     *  getThumbnail(image) by uri is ''
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 3
     * @tc.require
     */
    it('sub_df_media_file_access_get_thumbnail_callback_0800', 0, async function (done) {
      let testNum = 'SUB_DF_MEDIA_FILE_ACCESS_GET_THUMBNAIL_CALLBACK_0800';
      let size = { width: 128, height: 128 };
      let uri = ''
      await getThumbnailCallbackAbnormalUri(done, testNum, uri, size)
    });

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_GET_THUMBNAIL_CALLBACK_0900
     * @tc.name media_file_access_test_get_thumbnail_callback_009
     * @tc.desc Test getThumbnail() interfaces, return in callback mode.
     *  getThumbnail(image) by uri is '/'
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 3
     * @tc.require
     */
    it('sub_df_media_file_access_get_thumbnail_callback_0900', 0, async function (done) {
      let testNum = 'SUB_DF_MEDIA_FILE_ACCESS_GET_THUMBNAIL_CALLBACK_0900';
      let size = { width: 128, height: 128 };
      let uri = '/'
      await getThumbnailCallbackAbnormalUri(done, testNum, uri, size)
    });

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_GET_THUMBNAIL_CALLBACK_1000
     * @tc.name media_file_access_test_get_thumbnail_callback_010
     * @tc.desc Test getThumbnail() interfaces, return in callback mode.
     *  getThumbnail(video) by { width: 128, height: 128 }
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('sub_df_media_file_access_get_thumbnail_callback_1000', 0, async function (done) {
      let testNum = 'SUB_DF_MEDIA_FILE_ACCESS_GET_THUMBNAIL_CALLBACK_1000';
      let mediaType = 'video';
      let size = { width: 128, height: 128 };
      await getThumbnailCallback(done, testNum, mediaType, size)
    });

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_GET_THUMBNAIL_CALLBACK_1100
     * @tc.name media_file_access_test_get_thumbnail_callback_011
     * @tc.desc Test getThumbnail() interfaces, return in callback mode.
     *  getThumbnail(video) by { width: 128, height: 256 }
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 3
     * @tc.require
     */
    it('sub_df_media_file_access_get_thumbnail_callback_1100', 0, async function (done) {
      let testNum = 'SUB_DF_MEDIA_FILE_ACCESS_GET_THUMBNAIL_CALLBACK_1100';
      let mediaType = 'video';
      let size = { width: 128, height: 256 };
      await getThumbnailCallback(done, testNum, mediaType, size)
    });

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_GET_THUMBNAIL_CALLBACK_1200
     * @tc.name media_file_access_test_get_thumbnail_callback_012
     * @tc.desc Test getThumbnail() interfaces, return in callback mode.
     *  getThumbnail(video) by { width: 256, height: 256 }
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('sub_df_media_file_access_get_thumbnail_callback_1200', 0, async function (done) {
      let testNum = 'SUB_DF_MEDIA_FILE_ACCESS_GET_THUMBNAIL_CALLBACK_1200';
      let mediaType = 'video';
      let size = { width: 256, height: 256 };
      await getThumbnailCallback(done, testNum, mediaType, size)
    });

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_GET_THUMBNAIL_CALLBACK_1300
     * @tc.name media_file_access_test_get_thumbnail_callback_013
     * @tc.desc Test getThumbnail() interfaces, return in callback mode.
     *  getThumbnail(video) by { width: 1, height: 1 }
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 3
     * @tc.require
     */
    it('sub_df_media_file_access_get_thumbnail_callback_1300', 0, async function (done) {
      let testNum = 'SUB_DF_MEDIA_FILE_ACCESS_GET_THUMBNAIL_CALLBACK_1300';
      let mediaType = 'video';
      let size = { width: 1, height: 1 };
      await getThumbnailCallback(done, testNum, mediaType, size)
    });

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_GET_THUMBNAIL_CALLBACK_1400
     * @tc.name media_file_access_test_get_thumbnail_callback_014
     * @tc.desc Test getThumbnail() interfaces, return in callback mode.
     *  getThumbnail(video) by { width: 0, height: 0 }
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 3
     * @tc.require
     */
    it('sub_df_media_file_access_get_thumbnail_callback_1400', 0, async function (done) {
      let testNum = 'SUB_DF_MEDIA_FILE_ACCESS_GET_THUMBNAIL_CALLBACK_1400';
      let mediaType = 'video';
      let size = { width: 0, height: 0 };
      await getThumbnailCallbackAbnormalSize(done, testNum, mediaType, size)
    });

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_GET_THUMBNAIL_CALLBACK_1500
     * @tc.name media_file_access_test_get_thumbnail_callback_015
     * @tc.desc Test getThumbnail() interfaces, return in callback mode.
     *  getThumbnail(video) by { width: -128, height: -128 }
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 3
     * @tc.require
     */
    it('sub_df_media_file_access_get_thumbnail_callback_1500', 0, async function (done) {
      let testNum = 'SUB_DF_MEDIA_FILE_ACCESS_GET_THUMBNAIL_CALLBACK_1500';
      let mediaType = 'video';
      let size = { width: -128, height: -128 };
      await getThumbnailCallbackAbnormalSize(done, testNum, mediaType, size)
    });

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_GET_THUMBNAIL_CALLBACK_1600
     * @tc.name media_file_access_test_get_thumbnail_callback_016
     * @tc.desc Test getThumbnail() interfaces, return in callback mode.
     *  getThumbnail(video) by size is null
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 3
     * @tc.require
     */
    it('sub_df_media_file_access_get_thumbnail_callback_1600', 0, async function (done) {
      let testNum = 'SUB_DF_MEDIA_FILE_ACCESS_GET_THUMBNAIL_CALLBACK_1600';
      let mediaType = 'video';
      let size = null;
      await getThumbnailCallbackAbnormalSize(done, testNum, mediaType, size)
    });

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_GET_THUMBNAIL_CALLBACK_1700
     * @tc.name media_file_access_test_get_thumbnail_callback_017
     * @tc.desc Test getThumbnail() interfaces, return in callback mode.
     *  getThumbnail(video) by uri is 'notAllowed'
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 3
     * @tc.require
     */
    it('sub_df_media_file_access_get_thumbnail_callback_1700', 0, async function (done) {
      let testNum = 'SUB_DF_MEDIA_FILE_ACCESS_GET_THUMBNAIL_CALLBACK_1700';
      let mediaType = 'video';
      let size = { width: 128, height: 128 };
      let uri = 'notAllowed'
      await getThumbnailCallbackAbnormalUri(done, testNum, uri, size);
    });

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_GET_THUMBNAIL_CALLBACK_1800
     * @tc.name media_file_access_test_get_thumbnail_callback_018
     * @tc.desc Test getThumbnail() interfaces, return in callback mode.
     *  getThumbnail(video) by uri is ''
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 3
     * @tc.require
     */
    it('sub_df_media_file_access_get_thumbnail_callback_1800', 0, async function (done) {
      let testNum = 'SUB_DF_MEDIA_FILE_ACCESS_GET_THUMBNAIL_CALLBACK_1800';
      let mediaType = 'video';
      let size = { width: 128, height: 128 };
      let uri = ''
      await getThumbnailCallbackAbnormalUri(done, testNum, uri, size);
    });

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_GET_THUMBNAIL_CALLBACK_1900
     * @tc.name media_file_access_test_get_thumbnail_callback_019
     * @tc.desc Test getThumbnail() interfaces, return in callback mode.
     *  getThumbnail(video) by uri is '/'
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 3
     * @tc.require
     */
    it('sub_df_media_file_access_get_thumbnail_callback_1900', 0, async function (done) {
      let testNum = 'SUB_DF_MEDIA_FILE_ACCESS_GET_THUMBNAIL_CALLBACK_1900';
      let mediaType = 'video';
      let size = { width: 128, height: 128 };
      let uri = '/'
      await getThumbnailCallbackAbnormalUri(done, testNum, uri, size);
    });

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_GET_THUMBNAIL_CALLBACK_2000
     * @tc.name media_file_access_test_get_thumbnail_callback_020
     * @tc.desc Test getThumbnail() interfaces, return in callback mode.
     *  getThumbnail(audio) by { width: 128, height: 128 }
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('sub_df_media_file_access_get_thumbnail_callback_2000', 0, async function (done) {
      let testNum = 'SUB_DF_MEDIA_FILE_ACCESS_GET_THUMBNAIL_CALLBACK_2000';
      let mediaType = 'audio';
      let size = { width: 128, height: 128 };
      await getThumbnailCallback(done, testNum, mediaType, size)
    });

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_GET_THUMBNAIL_CALLBACK_2100
     * @tc.name media_file_access_test_get_thumbnail_callback_021
     * @tc.desc Test getThumbnail() interfaces, return in callback mode.
     *  getThumbnail(audio) by { width: 128, height: 256 }
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 3
     * @tc.require
     */
    it('sub_df_media_file_access_get_thumbnail_callback_2100', 0, async function (done) {
      let testNum = 'SUB_DF_MEDIA_FILE_ACCESS_GET_THUMBNAIL_CALLBACK_2100';
      let mediaType = 'audio';
      let size = { width: 128, height: 256 };
      await getThumbnailCallback(done, testNum, mediaType, size)
    });

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_GET_THUMBNAIL_CALLBACK_2200
     * @tc.name media_file_access_test_get_thumbnail_callback_022
     * @tc.desc Test getThumbnail() interfaces, return in callback mode.
     *  getThumbnail(audio) by { width: 256, height: 256 }
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 0
     * @tc.require
     */
    it('sub_df_media_file_access_get_thumbnail_callback_2200', 0, async function (done) {
      let testNum = 'SUB_DF_MEDIA_FILE_ACCESS_GET_THUMBNAIL_CALLBACK_2200';
      let mediaType = 'audio';
      let size = { width: 256, height: 256 };
      await getThumbnailCallback(done, testNum, mediaType, size)
    });

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_GET_THUMBNAIL_CALLBACK_2300
     * @tc.name media_file_access_test_get_thumbnail_callback_023
     * @tc.desc Test getThumbnail() interfaces, return in callback mode.
     *  getThumbnail(audio) by { width: 1, height: 1 }
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 3
     * @tc.require
     */
    it('sub_df_media_file_access_get_thumbnail_callback_2300', 0, async function (done) {
      let testNum = 'SUB_DF_MEDIA_FILE_ACCESS_GET_THUMBNAIL_CALLBACK_2300';
      let mediaType = 'audio';
      let size = { width: 1, height: 1 };
      await getThumbnailCallback(done, testNum, mediaType, size)
    });

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_GET_THUMBNAIL_CALLBACK_2400
     * @tc.name media_file_access_test_get_thumbnail_callback_024
     * @tc.desc Test getThumbnail() interfaces, return in callback mode.
     *  getThumbnail(audio) by { width: 0, height: 0 }
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 3
     * @tc.require
     */
    it('sub_df_media_file_access_get_thumbnail_callback_2400', 0, async function (done) {
      let testNum = 'SUB_DF_MEDIA_FILE_ACCESS_GET_THUMBNAIL_CALLBACK_2400';
      let mediaType = 'audio';
      let size = { width: 0, height: 0 };
      await getThumbnailCallbackAbnormalSize(done, testNum, mediaType, size)
    });

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_GET_THUMBNAIL_CALLBACK_2500
     * @tc.name media_file_access_test_get_thumbnail_callback_025
     * @tc.desc Test getThumbnail() interfaces, return in callback mode.
     *  getThumbnail(audio) by { width: -128, height: -128 }
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 3
     * @tc.require
     */
    it('sub_df_media_file_access_get_thumbnail_callback_2500', 0, async function (done) {
      let testNum = 'SUB_DF_MEDIA_FILE_ACCESS_GET_THUMBNAIL_CALLBACK_2500';
      let mediaType = 'audio';
      let size = { width: -128, height: -128 };
      await getThumbnailCallbackAbnormalSize(done, testNum, mediaType, size)
    });

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_GET_THUMBNAIL_CALLBACK_2600
     * @tc.name media_file_access_test_get_thumbnail_callback_026
     * @tc.desc Test getThumbnail() interfaces, return in callback mode.
     *  getThumbnail(audio) by size is null
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 3
     * @tc.require
     */
    it('sub_df_media_file_access_get_thumbnail_callback_2600', 0, async function (done) {
      let testNum = 'SUB_DF_MEDIA_FILE_ACCESS_GET_THUMBNAIL_CALLBACK_2600';
      let mediaType = 'audio';
      let size = null;
      await getThumbnailCallbackAbnormalSize(done, testNum, mediaType, size)
    });

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_GET_THUMBNAIL_CALLBACK_2700
     * @tc.name media_file_access_test_get_thumbnail_callback_027
     * @tc.desc Test getThumbnail() interfaces, return in callback mode.
     *  getThumbnail(audio) by uri is 'notAllowed'
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 3
     * @tc.require
     */
    it('sub_df_media_file_access_get_thumbnail_callback_2700', 0, async function (done) {
      let testNum = 'SUB_DF_MEDIA_FILE_ACCESS_GET_THUMBNAIL_CALLBACK_2700';
      let mediaType = 'audio';
      let size = { width: 128, height: 128 };
      let uri = 'notAllowed'
      await getThumbnailCallbackAbnormalUri(done, testNum, uri, size);
    });

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_GET_THUMBNAIL_CALLBACK_2800
     * @tc.name media_file_access_test_get_thumbnail_callback_028
     * @tc.desc Test getThumbnail() interfaces, return in callback mode.
     *  getThumbnail(audio) by uri is ''
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 3
     * @tc.require
     */
    it('sub_df_media_file_access_get_thumbnail_callback_2800', 0, async function (done) {
      let testNum = 'SUB_DF_MEDIA_FILE_ACCESS_GET_THUMBNAIL_CALLBACK_2800';
      let mediaType = 'audio';
      let size = { width: 128, height: 128 };
      let uri = ''
      await getThumbnailCallbackAbnormalUri(done, testNum, uri, size);
    });

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_GET_THUMBNAIL_CALLBACK_2900
     * @tc.name media_file_access_test_get_thumbnail_callback_029
     * @tc.desc Test getThumbnail() interfaces, return in callback mode.
     *  getThumbnail(audio) by uri is '/'
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 3
     * @tc.require
     */
    it('sub_df_media_file_access_get_thumbnail_callback_2900', 0, async function (done) {
      let testNum = 'SUB_DF_MEDIA_FILE_ACCESS_GET_THUMBNAIL_CALLBACK_2900';
      let mediaType = 'audio';
      let size = { width: 128, height: 128 };
      let uri = '/'
      await getThumbnailCallbackAbnormalUri(done, testNum, uri, size);
    });

    /**
     * @tc.number SUB_DF_MEDIA_FILE_ACCESS_GET_THUMBNAIL_CALLBACK_3000
     * @tc.name media_file_access_test_get_thumbnail_callback_030
     * @tc.desc Test getThumbnail() interfaces, return in callback mode.
     *  getThumbnail(image) by { width: 1000, height: 1000 }
     * @tc.size MEDIUM
     * @tc.type Function
     * @tc.level Level 3
     * @tc.require
     */
    it('sub_df_media_file_access_get_thumbnail_callback_3000', 0, async function (done) {
      let testNum = 'SUB_DF_MEDIA_FILE_ACCESS_GET_THUMBNAIL_CALLBACK_3000';
      let mediaType = 'image';
      let size = { width: 1000, height: 1000 };
      await getThumbnailCallback(done, testNum, mediaType, size)
    });
  })
}