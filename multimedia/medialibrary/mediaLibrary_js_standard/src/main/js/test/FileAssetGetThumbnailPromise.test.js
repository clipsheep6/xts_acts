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

import mediaLibrary from '@ohos.multimedia.medialibrary';
import featureAbility from '@ohos.ability.featureAbility';

import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from 'deccjsunit/index';

describe('GetFileAssets_GetCount_GetAllObjects', function () {
    var context = featureAbility.getContext();
    console.info('MediaLibraryTest : getMediaLibrary IN');
    var media = mediaLibrary.getMediaLibrary(context);
    console.info('MediaLibraryTest : getMediaLibrary OUT');
    let fileKeyObj = mediaLibrary.FileKey;
    let imagetype = mediaLibrary.MediaType.IMAGE;
    let videoType = mediaLibrary.MediaType.VIDEO;
    let audioType = mediaLibrary.MediaType.AUDIO;
    let imageFetchOp = {
        selections: fileKeyObj.MEDIA_TYPE + '=?',
        selectionArgs: [imagetype.toString()],
        order: fileKeyObj.dateAdded,
    };
    let videoFetchOp = {
        selections: fileKeyObj.MEDIA_TYPE + '=?',
        selectionArgs: [videoType.toString()],
        order: fileKeyObj.dateAdded,
    };
    let audioFetchOp = {
        selections: fileKeyObj.MEDIA_TYPE + '=?',
        selectionArgs: [audioType.toString()],
        order: fileKeyObj.dateAdded,
    };
    beforeAll(function () {
        //onsole.info('beforeAll: Prerequisites at the test suite level, which are executed before the test suite is executed.');
    });
    beforeEach(function () {
        //console.info('MediaLibraryTest: beforeEach: Prerequisites at the test case level, which are executed before each test case is executed.');
    });
    afterEach(function () {
        //console.info('MediaLibraryTest: afterEach: Test case-level clearance conditions, which are executed after each test case is executed.');
    });
    afterAll(function () {
        //console.info('MediaLibraryTest: afterAll: Test suite-level cleanup condition, which is executed after the test suite is executed');
    });

    // ------------------------------ image type start -----------------------
    /**
     * @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETTHUMBNAIL_PROMISE_001_01
     * @tc.name      : getThumbnail
     * @tc.desc      : getThumbnail(image) by { width: 80, height: 80 }
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('SUB_MEDIA_MEDIALIBRARY_GETTHUMBNAIL_PROMISE_001_01', 0, async function (done) {
        try {
            const dataList = await media.getFileAssets(imageFetchOp);
            console.info('MediaLibraryTest : getFileAssets 001_01 Successfull ' + dataList.getCount());
            const asset = await data.dataList[0];
            let size = { width: 80, height: 80 };
            const pixelmap = await asset.getThumbnail(size);
            console.info('MediaLibraryTest : getThumbnail 001_01 Successfull ' + pixelmap);
            const info = pixelmap.getImageInfo();
            console.info('MediaLibraryTest : 001_01 pixel image info ' + info);
            console.info('MediaLibraryTest : 001_01 pixel width ' + info.size.width);
            console.info('MediaLibraryTest : 001_01 pixel height ' + info.size.height);
            expect(info.size.width == size.width).assertTrue();
            expect(info.size.height == size.height).assertTrue();
            done();
        } catch (error) {
            console.info('MediaLibraryTest : 001_01 getThumbnail fail ' + error.message);
            expect(false).assertTrue();
            done();
        }
    });

    /**
     * @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETTHUMBNAIL_PROMISE_001_02
     * @tc.name      : getThumbnail
     * @tc.desc      : getThumbnail(image) by { width: 400, height: 400 }
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('SUB_MEDIA_MEDIALIBRARY_GETTHUMBNAIL_PROMISE_001_02', 0, async function (done) {
        try {
            const dataList = await media.getFileAssets(imageFetchOp);
            console.info('MediaLibraryTest : getFileAssets 001_02 Successfull ' + dataList.getCount());
            const asset = await data.dataList[1];
            let size = { width: 400, height: 400 };
            const pixelmap = await asset.getThumbnail(size);
            console.info('MediaLibraryTest : getThumbnail 001_02 Successfull ' + pixelmap);
            const info = pixelmap.getImageInfo();
            console.info('MediaLibraryTest : 001_02 pixel image info ' + info);
            console.info('MediaLibraryTest : 001_02 pixel width ' + info.size.width);
            console.info('MediaLibraryTest : 001_02 pixel height ' + info.size.height);
            expect(info.size.width == size.width).assertTrue();
            expect(info.size.height == size.height).assertTrue();
            done();
        } catch (error) {
            console.info('MediaLibraryTest : getThumbnail 001_02 fail ' + error.message);
            expect(false).assertTrue();
            done();
        }
    });

    /**
     * @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETTHUMBNAIL_PROMISE_001_03
     * @tc.name      : getThumbnail
     * @tc.desc      : getThumbnail(image) by no arg
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('SUB_MEDIA_MEDIALIBRARY_GETTHUMBNAIL_PROMISE_001_03', 0, async function (done) {
        try {
            const dataList = await media.getFileAssets(imageFetchOp);
            console.info('MediaLibraryTest : getFileAssets 001_03 Successfull ' + dataList.getCount());
            const asset = await data.dataList[2];
            let size = { width: 256, height: 256 };
            const pixelmap = await asset.getThumbnail();
            console.info('MediaLibraryTest : getThumbnail 001_03 Successfull ' + pixelmap);
            const info = pixelmap.getImageInfo();
            console.info('MediaLibraryTest : 001_03 pixel image info ' + info);
            console.info('MediaLibraryTest : 001_03 pixel width ' + info.size.width);
            console.info('MediaLibraryTest : 001_03 pixel height ' + info.size.height);
            expect(info.size.width == size.width).assertTrue();
            expect(info.size.height == size.height).assertTrue();
            done();
        } catch (error) {
            console.info('MediaLibraryTest : getThumbnail 001_03 fail ' + error.message);
            expect(false).assertTrue();
            done();
        }
    });

    /**
     * @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETTHUMBNAIL_PROMISE_001_04
     * @tc.name      : getThumbnail
     * @tc.desc      : getThumbnail(image) by { width: 1, height: 1 }
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('SUB_MEDIA_MEDIALIBRARY_GETTHUMBNAIL_PROMISE_001_04', 0, async function (done) {
        try {
            const dataList = await media.getFileAssets(imageFetchOp);
            console.info('MediaLibraryTest : getFileAssets 001_04 Successfull ' + dataList.getCount());
            const asset = await data.dataList[3];
            let size = { width: 1, height: 1 };
            const pixelmap = await asset.getThumbnail(size);
            console.info('MediaLibraryTest : getThumbnail 001_04 Successfull ' + pixelmap);
            const info = pixelmap.getImageInfo();
            console.info('MediaLibraryTest : 001_04 pixel image info ' + info);
            console.info('MediaLibraryTest : 001_04 pixel width ' + info.size.width);
            console.info('MediaLibraryTest : 001_04 pixel height ' + info.size.height);
            expect(info.size.width == size.width).assertTrue();
            expect(info.size.height == size.height).assertTrue();
            done();
        } catch (error) {
            console.info('MediaLibraryTest : getFileAssets 001_04 fail ' + error.message);
            expect(false).assertTrue();
            done();
        }
    });

    /**
     * @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETTHUMBNAIL_PROMISE_001_05
     * @tc.name      : getThumbnail
     * @tc.desc      : getThumbnail(image) by { width: 0, height: 0 }
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('SUB_MEDIA_MEDIALIBRARY_GETTHUMBNAIL_PROMISE_001_05', 0, async function (done) {
        try {
            const dataList = await media.getFileAssets(imageFetchOp);
            console.info('MediaLibraryTest : getFileAssets 001_05 Successfull ' + dataList.getCount());
            const asset = await data.dataList[4];
            let size = { width: 0, height: 0 };
            const pixelmap = await asset.getThumbnail(size);
            console.info('MediaLibraryTest : getThumbnail 001_05 Successfull ' + pixelmap);
            const info = pixelmap.getImageInfo();
            console.info('MediaLibraryTest : 001_05 pixel image info ' + info);
            console.info('MediaLibraryTest : 001_05 pixel width ' + info.size.width);
            console.info('MediaLibraryTest : 001_05 pixel height ' + info.size.height);
            expect(false).assertTrue();
            done();
        } catch (error) {
            console.info('MediaLibraryTest : getFileAssets 001_05 fail ' + error.message);
            expect(true).assertTrue();
            done();
        }
    });

    /**
     * @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETTHUMBNAIL_PROMISE_001_06
     * @tc.name      : getThumbnail
     * @tc.desc      : getThumbnail(image) by { width: -80, height: -80 }
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('SUB_MEDIA_MEDIALIBRARY_GETTHUMBNAIL_PROMISE_001_06', 0, async function (done) {
        try {
            const dataList = await media.getFileAssets(imageFetchOp);
            console.info('MediaLibraryTest : getFileAssets 001_06 Successfull ' + dataList.getCount());
            const asset = await data.dataList[5];
            let size = { width: -80, height: -80 };
            const pixelmap = await asset.getThumbnail(size);
            console.info('MediaLibraryTest : getThumbnail 001_06 Successfull ' + pixelmap);
            const info = pixelmap.getImageInfo();
            console.info('MediaLibraryTest : 001_06 pixel image info ' + info);
            console.info('MediaLibraryTest : 001_06 pixel width ' + info.size.width);
            console.info('MediaLibraryTest : 001_06 pixel height ' + info.size.height);
            expect(false).assertTrue();
            done();
        } catch (error) {
            console.info('MediaLibraryTest : getFileAssets 001_06 fail ' + error.message);
            expect(true).assertTrue();
            done();
        }
    });
    // ------------------------------image type end--------------------------

    // ------------------------------video type start -----------------------
    /**
     * @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETTHUMBNAIL_PROMISE_002_01
     * @tc.name      : getThumbnail
     * @tc.desc      : getThumbnail(video) by { width: 80, height: 80 }
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('SUB_MEDIA_MEDIALIBRARY_GETTHUMBNAIL_PROMISE_002_01', 0, async function (done) {
        try {
            const dataList = await media.getFileAssets(videoFetchOp);
            console.info('MediaLibraryTest : getFileAssets 002_01 Successfull ' + dataList.getCount());
            const asset = await data.dataList[0];
            let size = { width: 80, height: 80 };
            const pixelmap = await asset.getThumbnail(size);
            console.info('MediaLibraryTest : getThumbnail 002_01 Successfull ' + pixelmap);
            const info = pixelmap.getImageInfo();
            console.info('MediaLibraryTest : 002_01 pixel image info ' + info);
            console.info('MediaLibraryTest : 002_01 pixel width ' + info.size.width);
            console.info('MediaLibraryTest : 002_01 pixel height ' + info.size.height);
            expect(info.size.width == size.width).assertTrue();
            expect(info.size.height == size.height).assertTrue();
            done();
        } catch (error) {
            console.info('MediaLibraryTest : 002_01 getThumbnail fail ' + error.message);
            expect(false).assertTrue();
            done();
        }
    });

    /**
     * @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETTHUMBNAIL_PROMISE_002_02
     * @tc.name      : getThumbnail
     * @tc.desc      : getThumbnail(video) by { width: 400, height: 400 }
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('SUB_MEDIA_MEDIALIBRARY_GETTHUMBNAIL_PROMISE_002_02', 0, async function (done) {
        try {
            const dataList = await media.getFileAssets(videoFetchOp);
            console.info('MediaLibraryTest : getFileAssets 002_02 Successfull ' + dataList.getCount());
            const asset = await data.dataList[1];
            let size = { width: 400, height: 400 };
            const pixelmap = await asset.getThumbnail(size);
            console.info('MediaLibraryTest : getThumbnail 002_02 Successfull ' + pixelmap);
            const info = pixelmap.getImageInfo();
            console.info('MediaLibraryTest : 002_02 pixel image info ' + info);
            console.info('MediaLibraryTest : 002_02 pixel width ' + info.size.width);
            console.info('MediaLibraryTest : 002_02 pixel height ' + info.size.height);
            expect(info.size.width == size.width).assertTrue();
            expect(info.size.height == size.height).assertTrue();
            done();
        } catch (error) {
            console.info('MediaLibraryTest : getThumbnail 002_02 fail ' + error.message);
            expect(false).assertTrue();
            done();
        }
    });

    /**
     * @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETTHUMBNAIL_PROMISE_002_03
     * @tc.name      : getThumbnail
     * @tc.desc      : getThumbnail(video) by no arg
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('SUB_MEDIA_MEDIALIBRARY_GETTHUMBNAIL_PROMISE_002_03', 0, async function (done) {
        try {
            const dataList = await media.getFileAssets(videoFetchOp);
            console.info('MediaLibraryTest : getFileAssets 002_03 Successfull ' + dataList.getCount());
            const asset = await data.dataList[2];
            let size = { width: 256, height: 256 };
            const pixelmap = await asset.getThumbnail();
            console.info('MediaLibraryTest : getThumbnail 002_03 Successfull ' + pixelmap);
            const info = pixelmap.getImageInfo();
            console.info('MediaLibraryTest : 002_03 pixel image info ' + info);
            console.info('MediaLibraryTest : 002_03 pixel width ' + info.size.width);
            console.info('MediaLibraryTest : 002_03 pixel height ' + info.size.height);
            expect(info.size.width == size.width).assertTrue();
            expect(info.size.height == size.height).assertTrue();
            done();
        } catch (error) {
            console.info('MediaLibraryTest : getThumbnail 002_03 fail ' + error.message);
            expect(false).assertTrue();
            done();
        }
    });

    /**
     * @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETTHUMBNAIL_PROMISE_002_04
     * @tc.name      : getThumbnail
     * @tc.desc      : getThumbnail(video) by { width: 1, height: 1 }
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('SUB_MEDIA_MEDIALIBRARY_GETTHUMBNAIL_PROMISE_002_04', 0, async function (done) {
        try {
            const dataList = await media.getFileAssets(videoFetchOp);
            console.info('MediaLibraryTest : getFileAssets 002_04 Successfull ' + dataList.getCount());
            const asset = await data.dataList[3];
            let size = { width: 1, height: 1 };
            const pixelmap = await asset.getThumbnail(size);
            console.info('MediaLibraryTest : getThumbnail 002_04 Successfull ' + pixelmap);
            const info = pixelmap.getImageInfo();
            console.info('MediaLibraryTest : 002_04 pixel image info ' + info);
            console.info('MediaLibraryTest : 002_04 pixel width ' + info.size.width);
            console.info('MediaLibraryTest : 002_04 pixel height ' + info.size.height);
            expect(info.size.width == size.width).assertTrue();
            expect(info.size.height == size.height).assertTrue();
            done();
        } catch (error) {
            console.info('MediaLibraryTest : getFileAssets 002_04 fail ' + error.message);
            expect(false).assertTrue();
            done();
        }
    });

    /**
     * @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETTHUMBNAIL_PROMISE_002_05
     * @tc.name      : getThumbnail
     * @tc.desc      : getThumbnail(video) by { width: 0, height: 0 }
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('SUB_MEDIA_MEDIALIBRARY_GETTHUMBNAIL_PROMISE_002_05', 0, async function (done) {
        try {
            const dataList = await media.getFileAssets(videoFetchOp);
            console.info('MediaLibraryTest : getFileAssets 001_05 Successfull ' + dataList.getCount());
            const asset = await data.dataList[4];
            let size = { width: 0, height: 0 };
            const pixelmap = await asset.getThumbnail(size);
            console.info('MediaLibraryTest : getThumbnail 001_05 Successfull ' + pixelmap);
            const info = pixelmap.getImageInfo();
            console.info('MediaLibraryTest : 002_05 pixel image info ' + info);
            console.info('MediaLibraryTest : 002_05 pixel width ' + info.size.width);
            console.info('MediaLibraryTest : 002_05 pixel height ' + info.size.height);
            expect(false).assertTrue();
            done();
        } catch (error) {
            console.info('MediaLibraryTest : getFileAssets 001_05 fail ' + error.message);
            expect(true).assertTrue();
            done();
        }
    });

    /**
     * @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETTHUMBNAIL_PROMISE_002_06
     * @tc.name      : getThumbnail
     * @tc.desc      : getThumbnail(video) by { width: -80, height: -80 }
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('SUB_MEDIA_MEDIALIBRARY_GETTHUMBNAIL_PROMISE_002_06', 0, async function (done) {
        try {
            const dataList = await media.getFileAssets(videoFetchOp);
            console.info('MediaLibraryTest : getFileAssets 002_06 Successfull ' + dataList.getCount());
            const asset = await data.dataList[5];
            let size = { width: -80, height: -80 };
            const pixelmap = await asset.getThumbnail(size);
            console.info('MediaLibraryTest : getThumbnail 002_06 Successfull ' + pixelmap);
            const info = pixelmap.getImageInfo();
            console.info('MediaLibraryTest : 002_06 pixel image info ' + info);
            console.info('MediaLibraryTest : 002_06 pixel width ' + info.size.width);
            console.info('MediaLibraryTest : 002_06 pixel height ' + info.size.height);
            expect(false).assertTrue();
            done();
        } catch (error) {
            console.info('MediaLibraryTest : getFileAssets 002_06 fail ' + error.message);
            expect(true).assertTrue();
            done();
        }
    });
    // ------------------------------video type end--------------------------

    // ------------------------------audio type start -----------------------
    /**
     * @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETTHUMBNAIL_PROMISE_003_01
     * @tc.name      : getThumbnail
     * @tc.desc      : getThumbnail(audio) by { width: 80, height: 80 }
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('SUB_MEDIA_MEDIALIBRARY_GETTHUMBNAIL_PROMISE_003_01', 0, async function (done) {
        try {
            const dataList = await media.getFileAssets(audioFetchOp);
            console.info('MediaLibraryTest : getFileAssets 003_01 Successfull ' + dataList.getCount());
            const asset = await data.dataList[0];
            let size = { width: 80, height: 80 };
            const pixelmap = await asset.getThumbnail(size);
            console.info('MediaLibraryTest : getThumbnail 003_01 Successfull ' + pixelmap);
            const info = pixelmap.getImageInfo();
            console.info('MediaLibraryTest : 003_01 pixel image info ' + info);
            console.info('MediaLibraryTest : 003_01 pixel width ' + info.size.width);
            console.info('MediaLibraryTest : 003_01 pixel height ' + info.size.height);
            expect(info.size.width == size.width).assertTrue();
            expect(info.size.height == size.height).assertTrue();
            done();
        } catch (error) {
            console.info('MediaLibraryTest : 003_01 getThumbnail fail ' + error.message);
            expect(false).assertTrue();
            done();
        }
    });

    /**
     * @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETTHUMBNAIL_PROMISE_003_02
     * @tc.name      : getThumbnail
     * @tc.desc      : getThumbnail(audio) by { width: 400, height: 400 }
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('SUB_MEDIA_MEDIALIBRARY_GETTHUMBNAIL_PROMISE_003_02', 0, async function (done) {
        try {
            const dataList = await media.getFileAssets(audioFetchOp);
            console.info('MediaLibraryTest : getFileAssets 003_02 Successfull ' + dataList.getCount());
            const asset = await data.dataList[1];
            let size = { width: 400, height: 400 };
            const pixelmap = await asset.getThumbnail(size);
            console.info('MediaLibraryTest : getThumbnail 003_02 Successfull ' + pixelmap);
            const info = pixelmap.getImageInfo();
            console.info('MediaLibraryTest : 003_02 pixel image info ' + info);
            console.info('MediaLibraryTest : 003_02 pixel width ' + info.size.width);
            console.info('MediaLibraryTest : 003_02 pixel height ' + info.size.height);
            expect(info.size.width == size.width).assertTrue();
            expect(info.size.height == size.height).assertTrue();
            done();
        } catch (error) {
            console.info('MediaLibraryTest : getThumbnail 003_02 fail ' + error.message);
            expect(false).assertTrue();
            done();
        }
    });

    /**
     * @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETTHUMBNAIL_PROMISE_003_03
     * @tc.name      : getThumbnail
     * @tc.desc      : getThumbnail(audio) by no arg
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('SUB_MEDIA_MEDIALIBRARY_GETTHUMBNAIL_PROMISE_003_03', 0, async function (done) {
        try {
            const dataList = await media.getFileAssets(audioFetchOp);
            console.info('MediaLibraryTest : getFileAssets 003_03 Successfull ' + dataList.getCount());
            const asset = await data.dataList[2];
            let size = { width: 256, height: 256 };
            const pixelmap = await asset.getThumbnail();
            console.info('MediaLibraryTest : getThumbnail 003_03 Successfull ' + pixelmap);
            const info = pixelmap.getImageInfo();
            console.info('MediaLibraryTest : 003_03 pixel image info ' + info);
            console.info('MediaLibraryTest : 003_03 pixel width ' + info.size.width);
            console.info('MediaLibraryTest : 003_03 pixel height ' + info.size.height);
            expect(info.size.width == size.width).assertTrue();
            expect(info.size.height == size.height).assertTrue();
            done();
        } catch (error) {
            console.info('MediaLibraryTest : getThumbnail 003_03 fail ' + error.message);
            expect(false).assertTrue();
            done();
        }
    });

    /**
     * @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETTHUMBNAIL_PROMISE_003_04
     * @tc.name      : getThumbnail
     * @tc.desc      : getThumbnail(audio) by { width: 1, height: 1 }
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('SUB_MEDIA_MEDIALIBRARY_GETTHUMBNAIL_PROMISE_003_04', 0, async function (done) {
        try {
            const dataList = await media.getFileAssets(audioFetchOp);
            console.info('MediaLibraryTest : getFileAssets 003_04 Successfull ' + dataList.getCount());
            const asset = await data.dataList[3];
            let size = { width: 1, height: 1 };
            const pixelmap = await asset.getThumbnail(size);
            console.info('MediaLibraryTest : getThumbnail 003_04 Successfull ' + pixelmap);
            const info = pixelmap.getImageInfo();
            console.info('MediaLibraryTest : 003_04 pixel image info ' + info);
            console.info('MediaLibraryTest : 003_04 pixel width ' + info.size.width);
            console.info('MediaLibraryTest : 003_04 pixel height ' + info.size.height);
            expect(info.size.width == size.width).assertTrue();
            expect(info.size.height == size.height).assertTrue();
            done();
        } catch (error) {
            console.info('MediaLibraryTest : getFileAssets 003_04 fail ' + error.message);
            expect(false).assertTrue();
            done();
        }
    });

    /**
     * @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETTHUMBNAIL_PROMISE_003_05
     * @tc.name      : getThumbnail
     * @tc.desc      : getThumbnail(audio) by { width: 0, height: 0 }
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('SUB_MEDIA_MEDIALIBRARY_GETTHUMBNAIL_PROMISE_003_05', 0, async function (done) {
        try {
            const dataList = await media.getFileAssets(audioFetchOp);
            console.info('MediaLibraryTest : getFileAssets 003_05 Successfull ' + dataList.getCount());
            const asset = await data.dataList[4];
            let size = { width: 0, height: 0 };
            const pixelmap = await asset.getThumbnail(size);
            console.info('MediaLibraryTest : getThumbnail 003_05 Successfull ' + pixelmap);
            const info = pixelmap.getImageInfo();
            console.info('MediaLibraryTest : 003_05 pixel image info ' + info);
            console.info('MediaLibraryTest : 003_05 pixel width ' + info.size.width);
            console.info('MediaLibraryTest : 003_05 pixel height ' + info.size.height);
            expect(false).assertTrue();
            done();
        } catch (error) {
            console.info('MediaLibraryTest : getFileAssets 003_05 fail ' + error.message);
            expect(true).assertTrue();
            done();
        }
    });

    /**
     * @tc.number    : SUB_MEDIA_MEDIALIBRARY_GETTHUMBNAIL_PROMISE_003_06
     * @tc.name      : getThumbnail
     * @tc.desc      : getThumbnail(audio) by { width: -80, height: -80 }
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('SUB_MEDIA_MEDIALIBRARY_GETTHUMBNAIL_PROMISE_003_06', 0, async function (done) {
        try {
            const dataList = await media.getFileAssets(audioFetchOp);
            console.info('MediaLibraryTest : getFileAssets 003_06 Successfull ' + dataList.getCount());
            const asset = await data.dataList[5];
            let size = { width: -80, height: -80 };
            const pixelmap = await asset.getThumbnail(size);
            console.info('MediaLibraryTest : getThumbnail 003_06 Successfull ' + pixelmap);
            const info = pixelmap.getImageInfo();
            console.info('MediaLibraryTest : 003_06 pixel image info ' + info);
            console.info('MediaLibraryTest : 003_06 pixel width ' + info.size.width);
            console.info('MediaLibraryTest : 003_06 pixel height ' + info.size.height);
            expect(false).assertTrue();
        } catch (error) {
            console.info('MediaLibraryTest : getFileAssets 003_06 fail ' + error.message);
            expect(true).assertTrue();
        }
        done();
    });
    // ------------------------------audio type end--------------------------
});

