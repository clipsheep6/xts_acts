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
let fileKeyObj = mediaLibrary.FileKey;

let fileType = mediaLibrary.MediaType.FILE;
let imageType = mediaLibrary.MediaType.IMAGE;
let videoType = mediaLibrary.MediaType.VIDEO;
let audioType = mediaLibrary.MediaType.AUDIO;

let imagesfetchOp = {
    selections: fileKeyObj.MEDIA_TYPE + '= ?',
    selectionArgs: [imageType.toString()],
};

let videosfetchOp = {
    selections: fileKeyObj.MEDIA_TYPE + '= ?',
    selectionArgs: [videoType.toString()],
};

let audiosfetchOp = {
    selections: fileKeyObj.MEDIA_TYPE + '= ?',
    selectionArgs: [audioType.toString()],
};
let allsfetchOp = {
    selections: '',
    selectionArgs: [],
};

const context = featureAbility.getContext();
const media = mediaLibrary.getMediaLibrary(context);

async function getFileAssetsBy(done, op) {
    console.info("ycy 33 " + op);
    try {
        media.getFileAssets(op, async(err, fetchFileResult) => {
            if (fetchFileResult == undefined) {
                expect(false).assertTrue();
                done();
            } else {
                try {
                    const fetchCount = await fetchFileResult.getCount();
                    expect(fetchCount > 0).assertTrue();
                    done();
                } catch (error) {
                    console.log('getFileAssetsByKey failed error message = ' + error);
                }
            }
        });
    } catch (error) {
        expect(false).assertTrue();
        done();
    }
}
function printAttr (done, asset, tNum) {

}
describe('filekeyTestCallBack.test.js', async function () {
    beforeAll(function () {});
    beforeEach(function () {});
    afterEach(function () {});
    afterAll(function () {});

    /**
     * @tc.number    : test_fileKey_001
     * @tc.name      : getFileAssets
     * @tc.desc      : filekey parentOp
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */

    it('test_fileKey_001', 0, async function (done) {
        let assetOp = imagesfetchOp
        const fetchFileResult = await media.getFileAssets(assetOp);
        console.info("ycy 11 " + fetchFileResult.getCount());
        const asset = await fetchFileResult.getFirstObject();
        console.info("ycy 22 " + asset.parent);
        let op = {
            selections: mediaLibrary.FileKey.PARENT + '= ?',
            selectionArgs: [asset.parent + ''],
        };
        getFileAssetsBy(done, op);
    });

    /**
     * @tc.number    : test_fileKey_002
     * @tc.name      : getFileAssets
     * @tc.desc      : filekey mimeTypeOp
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('test_fileKey_002', 0, async function (done) {
        let assetOp = imagesfetchOp
        const fetchFileResult = await media.getFileAssets(assetOp);
        const asset = await fetchFileResult.getFirstObject();
        let op = {
            selections: mediaLibrary.FileKey.MIME_TYPE + '= ?',
            selectionArgs: [asset.mimeType + ''],
        };
        getFileAssetsBy(done, op);
    });

    /**
     * @tc.number    : test_fileKey_003
     * @tc.name      : getFileAssets
     * @tc.desc      : filekey sizeOp
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('test_fileKey_003', 0, async function (done) {
        let assetOp = imagesfetchOp
        const fetchFileResult = await media.getFileAssets(assetOp);
        const asset = await fetchFileResult.getFirstObject();
        let op = {
            selections: mediaLibrary.FileKey.SIZE + '= ?',
            selectionArgs: [asset.size + ''],
        };
        getFileAssetsBy(done, op);
    });

    /**
     * @tc.number    : test_fileKey_004
     * @tc.name      : getFileAssets
     * @tc.desc      : filekey dateAddedOp
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('test_fileKey_004', 0, async function (done) {
        let assetOp = imagesfetchOp
        const fetchFileResult = await media.getFileAssets(assetOp);
        const asset = await fetchFileResult.getFirstObject();
        let op = {
            selections: mediaLibrary.FileKey.DATE_ADDED + '= ?',
            selectionArgs: [asset.dateAdded + ''],
        };
        getFileAssetsBy(done, op);
    });

    /**
     * @tc.number    : test_fileKey_005
     * @tc.name      : getFileAssets
     * @tc.desc      : filekey dateModifiedOp
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('test_fileKey_005', 0, async function (done) {
        let assetOp = imagesfetchOp
        const fetchFileResult = await media.getFileAssets(assetOp);
        const asset = await fetchFileResult.getFirstObject();
        let op = {
            selections: mediaLibrary.FileKey.DATE_MODIFIED + '= ?',
            selectionArgs: [asset.dateModified + ''],
        };
        getFileAssetsBy(done, op);
    });

    /**
     * @tc.number    : test_fileKey_006
     * @tc.name      : getFileAssets
     * @tc.desc      : filekey dateTakenOp
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('test_fileKey_006', 0, async function (done) {
        let assetOp = imagesfetchOp
        const fetchFileResult = await media.getFileAssets(assetOp);
        const asset = await fetchFileResult.getFirstObject();
        let op = {
            selections: mediaLibrary.FileKey.DATE_TAKEN + '= ?',
            selectionArgs: [asset.dateTaken + ''],
        };
        getFileAssetsBy(done, op);
    });

    /**
     * @tc.number    : test_fileKey_007
     * @tc.name      : getFileAssets
     * @tc.desc      : filekey titleOp
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('test_fileKey_007', 0, async function (done) {
        let assetOp = imagesfetchOp
        const fetchFileResult = await media.getFileAssets(assetOp);
        const asset = await fetchFileResult.getFirstObject();
        let op = {
            selections: mediaLibrary.FileKey.TITLE + '= ?',
            selectionArgs: [asset.title + ''],
        };
        getFileAssetsBy(done, op);
    });

    /**
     * @tc.number    : test_fileKey_008
     * @tc.name      : getFileAssets
     * @tc.desc      : filekey durationOp
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('test_fileKey_008', 0, async function (done) {
        let assetOp = audiosfetchOp
        const fetchFileResult = await media.getFileAssets(assetOp);
        const asset = await fetchFileResult.getFirstObject();
        let op = {
            selections: mediaLibrary.FileKey.DURATION + '= ?',
            selectionArgs: [asset.duration + ''],
        };
        getFileAssetsBy(done, op);
    });

    /**
     * @tc.number    : test_fileKey_009
     * @tc.name      : getFileAssets
     * @tc.desc      : filekey widthOp
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('test_fileKey_009', 0, async function (done) {
        let assetOp = imagesfetchOp
        const fetchFileResult = await media.getFileAssets(assetOp);
        const asset = await fetchFileResult.getFirstObject();
        let op = {
            selections: mediaLibrary.FileKey.WIDTH + '= ?',
            selectionArgs: [asset.width + ''],
        };
        getFileAssetsBy(done, op);
    });

    /**
     * @tc.number    : test_fileKey_010
     * @tc.name      : getFileAssets
     * @tc.desc      : filekey heightOp
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('test_fileKey_010', 0, async function (done) {
        let assetOp = imagesfetchOp
        const fetchFileResult = await media.getFileAssets(assetOp);
        const asset = await fetchFileResult.getFirstObject();
        let op = {
            selections: mediaLibrary.FileKey.HEIGHT + '= ?',
            selectionArgs: [asset.height + ''],
        };
        getFileAssetsBy(done, op);
    });

    /**
     * @tc.number    : test_fileKey_011
     * @tc.name      : getFileAssets
     * @tc.desc      : filekey orientationOp
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('test_fileKey_011', 0, async function (done) {
        let assetOp = imagesfetchOp
        const fetchFileResult = await media.getFileAssets(assetOp);
        const asset = await fetchFileResult.getFirstObject();
        let op = {
            selections: mediaLibrary.FileKey.ORIENTATION + '= ?',
            selectionArgs: [asset.orientation + ''],
        };
        getFileAssetsBy(done, op);
    });

    /**
     * @tc.number    : test_fileKey_012
     * @tc.name      : getFileAssets
     * @tc.desc      : filekey widthOp
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('test_fileKey_012', 0, async function (done) {
        let assetOp = imagesfetchOp
        const fetchFileResult = await media.getFileAssets(assetOp);
        const asset = await fetchFileResult.getFirstObject();
        let op = {
            selections: mediaLibrary.FileKey.ALBUM_ID + '= ?',
            selectionArgs: [asset.albumId + ''],
        };
        getFileAssetsBy(done, op);
    });

    /**
     * @tc.number    : test_fileKey_0013
     * @tc.name      : getFileAssets
     * @tc.desc      : filekey albumNameOp
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('test_fileKey_0013', 0, async function (done) {
        let assetOp = imagesfetchOp
        const fetchFileResult = await media.getFileAssets(assetOp);
        const asset = await fetchFileResult.getFirstObject();
        let op = {
            selections: mediaLibrary.FileKey.ALBUM_NAME + '= ?',
            selectionArgs: [asset.albumName + ''],
        };
        getFileAssetsBy(done, op);
    });

    /**
     * @tc.number    : test_fileKey_0014
     * @tc.name      : getFileAssets
     * @tc.desc      : filekey artistOp
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('test_fileKey_0014', 0, async function (done) {
        let assetOp = audiosfetchOp
        const fetchFileResult = await media.getFileAssets(assetOp);
        const asset = await fetchFileResult.getFirstObject();
        let op = {
            selections: mediaLibrary.FileKey.ARTIST + '= ?',
            selectionArgs: [asset.artist + ''],
        };
        getFileAssetsBy(done, op);
    });

    /**
     * @tc.number    : test_fileKey_0015
     * @tc.name      : getFileAssets
     * @tc.desc      : filekey audioAlbumOp
     * @tc.size      : MEDIUM
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('test_fileKey_0015', 0, async function (done) {
        let assetOp = audiosfetchOp
        const fetchFileResult = await media.getFileAssets(assetOp);
        const asset = await fetchFileResult.getFirstObject();
        let op = {
            selections: mediaLibrary.FileKey.AUDIOALBUM + '= ?',
            selectionArgs: [asset.audioAlbum + ''],
        };
        getFileAssetsBy(done, op);
    });
});
