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
import {
    sleep,
    IMAGE_TYPE,
    VIDEO_TYPE,
    AUDIO_TYPE,
    FILE_TYPE,
    checkPresetsAssets,
    nameFetchOps,
    checkAssetsCount,
    getPermission,
} from '../../../../../../common';

export default function favoriteTestCallbackTest(abilityContext) {
    describe('favoriteTestCallbackTest', function () {
        var userfile_mgr = userfile_manager.getUserFileMgr(abilityContext);
        beforeAll(async function () {
            console.info('beforeAll case');
            await getPermission();
            await checkPresetsAssets(userfile_mgr, 'ActsUserFileMgrFavorite');
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

        const favoriteDefaultState = async function (done, testNum, media_type, fetchOp) {
            try {
                let fetchFileResult = await userfile_mgr.getFileAssets(media_type, fetchOp);
                let checkAssetCountPass = await checkAssetsCount(done, testNum, fetchFileResult, 1);
                if (!checkAssetCountPass) return;
                let asset = await fetchFileResult.getFirstObject();
                asset.isFavorite(async (err, isFavorite) => {
                    if (err) {
                        expect(false).assertTrue();
                        await fetchFileResult.close();
                        done();
                        return;
                    }
                    expect(isFavorite).assertEqual(false);
                    await fetchFileResult.close();
                    done()
                });
            } catch (error) {
                console.info(`${testNum} failed error: ${error}`)
                expect(false).assertTrue();
                done();
            }
        }
        const favoriteByTrue = async function (done, testNum, media_type, fetchOp) {
            try {
                const fetchFileResult = await userfile_mgr.getFileAssets(media_type, fetchOp);
                let checkAssetCountPass = await checkAssetsCount(done, testNum, fetchFileResult, 1);
                if (!checkAssetCountPass) return;
                const asset = await fetchFileResult.getFirstObject();
                asset.favorite(true, async (err) => {
                    if(err) {
                        console.info(`${testNum} failed err: ${err}`)
                        expect(false).assertTrue();
                        done();
                        return;
                    }
                    let isFavorite = await asset.isFavorite();
                    expect(isFavorite).assertEqual(true);
                    await fetchFileResult.close();
                    done();
                });

            } catch (error) {
                console.info(`${testNum} failed error: ${error}`)
                expect(false).assertTrue();
                done();
            }
        }
        const favoriteByFalse = async function (done, testNum, media_type, fetchOp) {
            try {
                const fetchFileResult = await userfile_mgr.getFileAssets(media_type, fetchOp);
                let checkAssetCountPass = await checkAssetsCount(done, testNum, fetchFileResult, 1);
                if (!checkAssetCountPass) return;
                const asset = await fetchFileResult.getFirstObject();
                await asset.favorite(true);
                asset.favorite(false, async (err) => {
                    if(err) {
                        console.info(`${testNum} failed err: ${err}`)
                        expect(false).assertTrue();
                        done();
                        return;
                    }
                    let isFavorite = await asset.isFavorite();
                    expect(isFavorite).assertEqual(false);
                    await fetchFileResult.close();
                    done();
                });
            } catch (error) {
                console.info(`${testNum} failed error: ${error}`)
                expect(false).assertTrue();
                done();
            }
        }

        /**
         * @tc.number    : SUB_USERFILE_MGR_FAV_ASSET_CALLBACK_001_01
         * @tc.name      : isFavorite
         * @tc.desc      : isFavorite(image) result false
         * @tc.size      : MEDIUM
         * @tc.type      : Function
         * @tc.level     : Level 0
         */
        it('SUB_USERFILE_MGR_FAV_ASSET_CALLBACK_001_01', 0, async function (done) {
            let testNum = 'SUB_USERFILE_MGR_FAV_ASSET_CALLBACK_001_01'
            let media_type = [IMAGE_TYPE];
            let currentFetchOp = nameFetchOps(testNum, 'Pictures/StaticCb/', '01', IMAGE_TYPE)
            await favoriteDefaultState(done, testNum, media_type, currentFetchOp)
        });

        /**
         * @tc.number    : SUB_USERFILE_MGR_FAV_ASSET_CALLBACK_001_02
         * @tc.name      : favorite
         * @tc.desc      : favorite(image) by true
         * @tc.size      : MEDIUM
         * @tc.type      : Function
         * @tc.level     : Level 0
         */
        it('SUB_USERFILE_MGR_FAV_ASSET_CALLBACK_001_02', 0, async function (done) {
            let testNum = 'SUB_USERFILE_MGR_FAV_ASSET_CALLBACK_001_02'
            let media_type = [IMAGE_TYPE];
            let currentFetchOp = nameFetchOps(testNum, 'Pictures/StaticCb/', '02', IMAGE_TYPE)
            await favoriteByTrue(done, testNum, media_type, currentFetchOp)
        });

        /**
         * @tc.number    : SUB_USERFILE_MGR_FAV_ASSET_CALLBACK_001_03
         * @tc.name      : favorite
         * @tc.desc      : favorite(image) by false
         * @tc.size      : MEDIUM
         * @tc.type      : Function
         * @tc.level     : Level 0
         */
        it('SUB_USERFILE_MGR_FAV_ASSET_CALLBACK_001_03', 0, async function (done) {
            let testNum = 'SUB_USERFILE_MGR_FAV_ASSET_CALLBACK_001_03'
            let media_type = [IMAGE_TYPE];
            let currentFetchOp = nameFetchOps(testNum, 'Pictures/StaticCb/', '03', IMAGE_TYPE)
            await favoriteByFalse(done, testNum, media_type, currentFetchOp)
        });
    });
}
