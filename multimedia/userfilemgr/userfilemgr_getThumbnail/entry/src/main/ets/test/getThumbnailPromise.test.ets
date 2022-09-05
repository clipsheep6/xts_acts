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

import userfile_manager from '@ohos.filemanagement.userfile_manager';
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from 'deccjsunit/index';
import image from '@ohos.multimedia.image';
import {
    sleep,
    IMAGE_TYPE,
    VIDEO_TYPE,
    AUDIO_TYPE,
    FILEKEY,
    checkPresetsAssets,
    checkAssetsCount,
    fetchOps,
    getPermission,
} from '../../../../../../common';

export default function getThumbnailPromise(abilityContext) {
    describe('getThumbnailPromise', function () {
        image.createPixelMap(new ArrayBuffer(4096), { size: { height: 1, width: 2 } }).then((pixelmap) => { });
        const userfile_mgr = userfile_manager.getUserFileMgr(abilityContext);
        beforeAll(async function () {
            console.info('beforeAll case');
            await getPermission();
            await checkPresetsAssets(userfile_mgr, 'ActsUserFileMgrGetThumbnailTest');
        });
        beforeEach(function () {
            console.info('beforeEach case');
        });
        afterEach(async function () {
            console.info('afterEach case');
            await sleep()
        });
        afterAll(function () {
            console.info('afterAll case');
        });

        async function testGetThumbnail(done, testNum, media_type, dOp, size,) {
            try {
                let fetchFileResult = await userfile_mgr.getFileAssets(media_type, dOp);
                let checkAssetCountPass = await checkAssetsCount(done, testNum, fetchFileResult, 1);
                if (!checkAssetCountPass) return;
                let asset = await fetchFileResult.getFirstObject();
                console.info(`${testNum}:displayName ${asset.displayName}`)
                let pixelmap = await asset.getThumbnail(size);
                expect(pixelmap != undefined).assertTrue();
                //let info = await pixelmap.getImageInfo();
                //expect(info.size.width).assertEqual(size.width);
                //expect(info.size.height).assertEqual(size.height);
                done();
            } catch (error) {
                console.info(`${testNum}:: error :${error}`);
                expect(false).assertTrue();
                done();
            }
        }

        // ------------------------------ image type start -----------------------
        /**
         * @tc.number    : SUB_USERFILE_MGR_GETTHUMBNAIL_PROMISE_001_01
         * @tc.name      : getThumbnail
         * @tc.desc      : getThumbnail(image) by { width: 128, height: 128 }
         * @tc.size      : MEDIUM
         * @tc.type      : Function
         * @tc.level     : Level 0
         */
        it('SUB_USERFILE_MGR_GETTHUMBNAIL_PROMISE_001_01', 0, async function (done) {
            let testNum = 'SUB_USERFILE_MGR_GETTHUMBNAIL_PROMISE_001_01';
            let media_type = [IMAGE_TYPE];
            let dOp = fetchOps(testNum, 'Pictures/Thumbnail/', IMAGE_TYPE);
            let size = { width: 128, height: 128 };
            await testGetThumbnail(done, testNum, media_type, dOp, size)
        });
    });
}

