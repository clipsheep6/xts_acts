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
    FILEKEY,
    allFetchOp,
    albumFetchOps,
    albumTwoTypesFetchOps,
    albumThreeTypesFetchOps,
    checkPresetsAssets,
    checkAlbumsCount,
} from '../../../../../../common';


export default function albumTestCallbackTest(abilityContext) {
    describe('albumTestCallbackTest', function () {
        const userfile_mgr = userfile_manager.getUserFileMgr(abilityContext);
        beforeAll(async function () {
            console.info('beforeAll case');
            await checkPresetsAssets(userfile_mgr, 'ActsUserFileMgrAlbum');
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

        function printAlbumMessage(testNum, album) {
            console.info(`${testNum}
                album.albumName: ${album.albumName}
                album.albumUri: ${album.albumUri}
                album.dateModified: ${album.dateModified}
                album.count: ${album.count}
                album.relativePath: ${album.relativePath}
                album.coverUri: ${album.coverUri}`);
        }

        const props = {
            albumName: 'Static',
            albumUri: 'datashare:///userfile_mgr/album/',
            count: 5
        }
        const checkProps = async function (done, testNum, album, relativePaths) {
            printAlbumMessage(testNum, album);
            if (album.coverUri == undefined) {
                console.info(`${testNum}, album.coverUri is undefined`);
                expect(false).assertTrue();
                done();
                return;
            }
            expect(album.albumName).assertEqual(props.albumName);
            expect(album.count).assertEqual(props.count);
            if (Array.isArray(relativePaths)) {
                let i = relativePaths.indexOf(album.relativePath);
                if (i > -1) {
                    relativePaths.splice(i, 1)
                } else {
                    expect(false).assertTrue();
                    done();
                }
            } else {
                expect(album.relativePath).assertEqual(relativePaths);
            }
        }
        const checkAlbumInfo = async function (done, testNum, media_type, fetchOp, relativePaths, expectAlbumCount) {
            try {
                userfile_mgr.getAlbums(media_type, fetchOp, async (err, albumList) => {
                    if(err) {
                        console.info(`${testNum}, err: ${err}`)
                        expect(false).assertTrue();
                        done();
                        return;
                    }
                    const albumCountPass = await checkAlbumsCount(done, testNum, albumList, expectAlbumCount);
                    if (!albumCountPass) return;
                    if (expectAlbumCount == 1) {
                        const album = albumList[0];
                        checkProps(done, testNum, album, relativePaths);
                        done();
                    } else {
                        let count = 0
                        for (const album of albumList) {
                            checkProps(done, testNum, album, relativePaths);
                            count++;
                        }
                        expect(count).assertEqual(expectAlbumCount);
                        expect(relativePaths.length).assertEqual(0);
                        done();
                    }
                });
            } catch (error) {
                console.info(`${testNum}, failed: ${error}`);
                expect(false).assertTrue();
                done();
            }
        }

        /**
         * @tc.number    : SUB_USERFILE_MGR_GETALBUM_CALLBACK_001_01
         * @tc.name      : getAlbums
         * @tc.desc      : Get Album by allTypeInfofetchOp, print all album info,
         *                 print all asset info, check asset info (mediaType, albumUri, albumName)
         * @tc.size      : MEDIUM
         * @tc.type      : Function
         * @tc.level     : Level 0
         */
        it('SUB_USERFILE_MGR_GETALBUM_CALLBACK_001_01', 0, async function (done) {
            let testNum = 'SUB_USERFILE_MGR_GETALBUM_CALLBACK_001_01';
            let media_type = [IMAGE_TYPE];
            let currentFetchOp = albumFetchOps(testNum, 'Pictures/', 'Static', IMAGE_TYPE);
            let relativePaths = 'Pictures/';
            let expectAlbumCount = 1;
            await checkAlbumInfo(done, testNum, media_type, currentFetchOp, relativePaths, expectAlbumCount);
        });

        /**
         * @tc.number    : SUB_USERFILE_MGR_MODIFYALBUM_CALLBACK_003_01
         * @tc.name      : commitModify
         * @tc.desc      : Modify Album name to 'hello'
         * @tc.size      : MEDIUM
         * @tc.type      : Function
         * @tc.level     : Level 0
         */
        it('SUB_USERFILE_MGR_MODIFYALBUM_CALLBACK_003_01', 0, async function (done) {
            const testNum = 'SUB_USERFILE_MGR_MODIFYALBUM_CALLBACK_003_01';
            try {
                let media_type = [IMAGE_TYPE];
                let currentFetchOp = albumFetchOps(testNum, 'Pictures/', 'DynamicCb1', IMAGE_TYPE);
                const albumList = await userfile_mgr.getAlbums(media_type, currentFetchOp);
                const expectAlbumCount = 1;
                const albumCountPass = await checkAlbumsCount(done, testNum, albumList, expectAlbumCount);
                if (!albumCountPass) return;
                const album = albumList[0];
                console.info(`${testNum}, album.albumName(old): ${album.albumName}`)
                const newName = 'albumName' + new Date().getTime();
                album.albumName = newName;
                album.commitModify(async () => {
                    expect(true).assertTrue();
                    done();
                });

            } catch (error) {
                console.info(`${testNum}, failed error: ${error}`)
                expect(false).assertTrue();
                done();
            }
        });
    });
}


