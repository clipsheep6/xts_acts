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
    checkAssetsCount,
    fetchOps,
    albumFetchOps,
    getPermission,
    checkAlbumsCount,
} from '../../../../../../common';

export default function userFileMgrTestPromiseOnOffTest(abilityContext) {
    describe('userFileMgrTestPromiseOnOffTest', function () {
        const userfile_mgr = userfile_manager.getUserFileMgr(abilityContext);
        beforeAll(async function () {
            console.info('beforeAll case');
            await getPermission();
            await checkPresetsAssets(userfile_mgr, 'ActsUserFileMgrBase');
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

        const onTest = async (done, testNum, media_type, fetchOps, type) => {
            try {
                let count = 0;
                userfile_mgr.on(type, () => { count++; });
                const fetchFileResult = await userfile_mgr.getFileAssets(media_type, fetchOps);
                let checkAssetCountPass = await checkAssetsCount(done, testNum, fetchFileResult, 1);
                if (!checkAssetCountPass) return;
                const asset = await fetchFileResult.getFirstObject();
                asset.title = asset.title + 'changename';
                await asset.commitModify();
                await sleep(1000)
                expect(count > 0).assertTrue();
                done();
            } catch (error) {
                console.info(`${testNum}:: error :${error}`);
                expect(false).assertTrue();
                done();
            }
        }
        const offTest = async (done, testNum, media_type, fetchOps, type) => {
            try {
                let count = 0;
                userfile_mgr.on(type, () => {
                    count++;
                });
                const fetchFileResult = await userfile_mgr.getFileAssets(media_type, fetchOps);
                let checkAssetCountPass = await checkAssetsCount(done, testNum, fetchFileResult, 1);
                if (!checkAssetCountPass) return;
                const asset = await fetchFileResult.getFirstObject();
                asset.title = asset.title + 'changename';
                userfile_mgr.off(type);
                await asset.commitModify();
                await sleep(1000)
                expect(count).assertEqual(0);
                done();
            } catch (error) {
                console.info(`${testNum}:: error :${error}`);
                expect(false).assertTrue();
                done();
            }
        }
        /** 
         * @tc.number    : SUB_USERFILE_MGR_PROMISE_ON_001
         * @tc.name      : ON
         * @tc.desc      : ON Image ASSET
         * @tc.size      : MEDIUM
         * @tc.type      : Function
         * @tc.level     : Level 0
         */
        it('SUB_USERFILE_MGR_PROMISE_ON_001', 0, async function (done) {
            let testNum = 'SUB_USERFILE_MGR_PROMISE_ON_001';
            let media_type = [IMAGE_TYPE];
            let currentFetchOps = fetchOps(testNum, 'Pictures/On/', IMAGE_TYPE);
            let type = 'imageChange'
            await onTest(done, testNum, media_type, currentFetchOps, type)
        });

        /**
         * @tc.number    : SUB_USERFILE_MGR_PROMISE_ON_005
         * @tc.name      : ON
         * @tc.desc      : ON ALBUM
         * @tc.size      : MEDIUM
         * @tc.type      : Function
         * @tc.level     : Level 0
         */
        it('SUB_USERFILE_MGR_PROMISE_ON_005', 0, async function (done) {
            let testNum = 'SUB_USERFILE_MGR_PROMISE_ON_005'
            try {
                let count = 0;
                userfile_mgr.on('albumChange', () => {
                    count++;
                });
                let media_type = [IMAGE_TYPE];
                let currentFetchOps = albumFetchOps(testNum, 'Pictures/', 'OnAlbum', IMAGE_TYPE);
                const albumList = await userfile_mgr.getAlbums(media_type, currentFetchOps);
                const albumCountPass = await checkAlbumsCount(done, testNum, albumList, 1);
                if (!albumCountPass) return;
                const album = albumList[0];
                const oldName = album.albumName
                album.albumName = album.albumName + 'changename';
                await album.commitModify();
                await sleep(1000)
                expect(count > 0).assertTrue();
                album.albumName = oldName;
                await album.commitModify();
                done();
            } catch (error) {
                console.info(`${testNum}:: error :${error}`);
                expect(false).assertTrue();
                done();
            }
        });

        /**
         * @tc.number    : SUB_USERFILE_MGR_PROMISE_OFF_001
         * @tc.name      : off
         * @tc.desc      : off Image ASSET
         * @tc.size      : MEDIUM
         * @tc.type      : Function
         * @tc.level     : Level 0
         */
        it('SUB_USERFILE_MGR_PROMISE_OFF_001', 0, async function (done) {
            let testNum = 'SUB_USERFILE_MGR_PROMISE_OFF_001';
            let media_type = [IMAGE_TYPE];
            let currentFetchOps = fetchOps(testNum, 'Pictures/Off/', IMAGE_TYPE);
            let type = 'imageChange'
            await offTest(done, testNum, media_type, currentFetchOps, type)
        });

        /**
        * @tc.number    : SUB_USERFILE_MGR_PROMISE_OFF_005
        * @tc.name      : off
        * @tc.desc      : off album 
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
        */
        it('SUB_USERFILE_MGR_PROMISE_OFF_005', 0, async function (done) {
            let testNum = 'SUB_USERFILE_MGR_PROMISE_OFF_005'
            try {
                let count = 0;
                userfile_mgr.on('albumChange', () => {
                    count++;
                });
                await sleep(300)
                userfile_mgr.off('albumChange');
                let media_type = [IMAGE_TYPE];
                let currentFetchOps = albumFetchOps(testNum, 'Pictures/', 'OffAlbum', IMAGE_TYPE);
                const albumList = await userfile_mgr.getAlbums(media_type, currentFetchOps);
                const albumCountPass = await checkAlbumsCount(done, testNum, albumList, 1);
                if (!albumCountPass) return;
                const album = albumList[0]
                const oldName = album.albumName
                album.albumName = album.albumName + 'changename';
                await sleep(1000)
                await album.commitModify();
                await sleep(300)
                album.albumName = oldName;
                await album.commitModify();
                expect(count).assertEqual(0);
                done();
            } catch (error) {
                console.info(`${testNum}:: error :${error}`);
                expect(false).assertTrue();
                done();
            }
        });
        
        /**
         * @tc.number    : SUB_USERFILE_MGR_PROMISE_RELEASE_001
         * @tc.name      : release
         * @tc.desc      : Release MediaLibrary instance
         * @tc.size      : MEDIUM
         * @tc.type      : Function
         * @tc.level     : Level 0
         */
        it('SUB_USERFILE_MGR_PROMISE_RELEASE_001', 0, async function (done) {
            try {
                await userfile_mgr.release();
                expect(true).assertTrue();
                done();
            } catch (error) {
                expect(false).assertTrue();
                done();
            }
        });
    });
}


