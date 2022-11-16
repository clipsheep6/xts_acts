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

import mediaLibrary from '@ohos.multimedia.mediaLibrary';
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from 'deccjsunit/index';
import { sleep } from './common.ets';
const erroMsg = 'Error: assertion (false) failed: type mismatch';
const errCode = -202;

export default function medialibrarySmartAlbumPromise(abilityContext) {
    describe('medialibrarySmartAlbumPromise', function () {
        beforeAll(function () { });
        beforeEach(async function () {
            await sleep(1000)
        });
        afterEach(function () { });
        afterAll(function () { });
        const media = mediaLibrary.getMediaLibrary(abilityContext);
        const parentId = 0;
        const albumName = "LevelOne";

        async function createSmartAlbum(done, testNo) {
            try {
                media.createSmartAlbum(parentId, albumName, (err, virtualAlbum) => {
                    expect(virtualAlbum.albumName == albumName).assertTrue();
                    done();
                });
            } catch (error) {
                console.info(`${testNo} failed, message: ${error}`);
                expect(false).assertTrue();
                done();
            }
        }

        async function createAbnormalName(done, abnormalAlbumName, testNo) {
            try {
                media.createSmartAlbum(parentId, abnormalAlbumName, () => {
                    expect(false).assertTrue();
                    done();
                });
            } catch (error) {
                console.info(`${testNo} failed, message: ${error}`);

                expect(error && error == erroMsg).assertTrue();
                done();
            }
        }

        async function createParentId(done, parentId, testNo) {
            try {
                media.createSmartAlbum(parentId, albumName, (err, virtualAlbum) => {
                    expect(virtualAlbum.albumName == albumName).assertTrue();
                    done();
                });
            } catch (error) {
                console.info(`${testNo} failed, message: ${error}`);
                expect(false).assertTrue();
                done();
            }
        }

        async function createAbnormalParentId(done, abnormalParentId, testNo) {
            try {
                media.createSmartAlbum(abnormalParentId, albumName, () => {
                    expect(false).assertTrue();
                    done();
                });
            } catch (error) {
                console.info(`${testNo} failed, message: ${error}`);
                expect(error && error == erroMsg).assertTrue();

                done();
            }
        }

        async function getSmartAlbum(done, albumName, childAlbumName, testNo) {
            try {
                let albumRoot = await media.createSmartAlbum(0, albumName);
                console.info(`${albumRoot.albumId} :: albumRoot.albumId`);
                let AlbumChildOne = await media.createSmartAlbum(albumRoot.albumId, childAlbumName);
                media.getSmartAlbum(albumRoot.albumId, (err, smartAlbumList) => {
                    console.info(`${smartAlbumList[0].albumName} :: smartAlbumList[0].albumName`);
                    console.info(`${AlbumChildOne.albumName} :: AlbumChildOne.albumName`);
                    expect(AlbumChildOne.albumName == smartAlbumList[0].albumName).assertTrue();
                    done();
                });
            } catch (error) {
                console.info(`${testNo} failed, message: ${error}`);
                expect(false).assertTrue();
                done();
            }
        }

        async function getSmartAlbumAlbumId(done, albumId, testNo) {
            try {
                media.getSmartAlbum(albumId, () => {
                    expect(true).assertTrue();
                    done();
                });
            } catch (error) {
                console.info(`${testNo} failed, message: ${error}`);
                expect(false).assertTrue();
                done();
            }
        }

        async function getSmartAlbumAbnormal(done, abnormalAlbumId, testNo) {
            try {
                media.getSmartAlbum(abnormalAlbumId, () => {
                    expect(false).assertTrue();
                    done();
                });
            } catch (error) {
                console.info(`${testNo} failed, message: ${error}`);
                expect(error && error == erroMsg).assertTrue();

                done();
            }
        }

        async function deleteSmartAlbum(done, albumName, childAlbumNameOne, childAlbumNameTwo, testNo) {
            try {
                let albumRoot = await media.createSmartAlbum(0, albumName);
                let albumChildOne = await media.createSmartAlbum(albumRoot.albumId, childAlbumNameOne);
                let albumChildTwo = await media.createSmartAlbum(albumRoot.albumId, childAlbumNameTwo);
                console.info(`${albumChildOne.albumId} :: AlbumChildOne.albumId`);
                console.info(`${albumChildTwo.albumId} :: albumChildTwo.albumId`);
                media.deleteSmartAlbum(albumChildOne.albumId, async () => {
                    let smartAlbumList = await media.getSmartAlbum(albumRoot.albumId);
                    console.info(`${smartAlbumList[0].albumId} :: smartAlbumList[0].albumId`);
                    expect(albumChildTwo.albumId == smartAlbumList[0].albumId).assertTrue();
                    done();
                });
            } catch (error) {
                console.info(`${testNo} failed, message: ${error}, error.code: ${error.code}`);
                expect(false).assertTrue();
                done();
            }
        }

        async function deleteSmartAlbumAbnormal(done, abnormalAlbumId, testNo) {
            try {
                media.deleteSmartAlbum(abnormalAlbumId, () => {
                    expect(false).assertTrue();
                    done();
                });
            } catch (error) {
                console.info(`${testNo} failed, message: ${error}`);
                expect(error && error == erroMsg).assertTrue();
                done();
            }
        }
        
        async function createName(done, albumNameInput, testNo) {
            try {
                media.createSmartAlbum(parentId, albumNameInput, () => {
                    expect(true).assertTrue();
                    done();
                });

            } catch (error) {
                console.info(`${testNo} failed, message: ${error}, error.code: ${error.code}`);
                expect(false).assertTrue();
                done();
            }
        }

        /**
        * @tc.number    : MEDIALIBRARY_CREATESMARTALBUM_CB_003010_001
        * @tc.name      : createSmartAlbum
        * @tc.desc      : createSmartAlbum
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
        */
        it('MEDIALIBRARY_CREATESMARTALBUM_CB_003010_001', 0, async function (done) {
            let testNo = 'MEDIALIBRARY_CREATESMARTALBUM_CB_003010_001';
            await createSmartAlbum(done, testNo);
        });

        /**
        * @tc.number    : MEDIALIBRARY_CREATESMARTALBUM_CB_003010_002
        * @tc.name      : createSmartAlbum
        * @tc.desc      : createSmartAlbum with incorrect albumName
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
        */
        it('MEDIALIBRARY_CREATESMARTALBUM_CB_003010_002', 0, async function (done) {
            let testNo = 'MEDIALIBRARY_CREATESMARTALBUM_CB_003010_002';
            var albumName = null;
            await createAbnormalName(done, albumName, testNo);
        });

        /**
        * @tc.number    : MEDIALIBRARY_CREATESMARTALBUM_CB_003010_003
        * @tc.name      : createSmartAlbum
        * @tc.desc      : createSmartAlbum with incorrect albumName
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
        */
        it('MEDIALIBRARY_CREATESMARTALBUM_CB_003010_003', 0, async function (done) {
            let testNo = 'MEDIALIBRARY_CREATESMARTALBUM_CB_003010_003';
            var albumName;
            await createAbnormalName(done, albumName, testNo);
        });

        /**
        * @tc.number    : MEDIALIBRARY_CREATESMARTALBUM_CB_003010_004
        * @tc.name      : createSmartAlbum
        * @tc.desc      : createSmartAlbum with incorrect albumName
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
        */
        it('MEDIALIBRARY_CREATESMARTALBUM_CB_003010_004', 0, async function (done) {
            let testNo = 'MEDIALIBRARY_CREATESMARTALBUM_CB_003010_004';
            var albumName = Number.MAX_VALUE;
            await createAbnormalName(done, albumName, testNo);
        });

        /**
        * @tc.number    : MEDIALIBRARY_CREATESMARTALBUM_CB_003010_005
        * @tc.name      : createSmartAlbum
        * @tc.desc      : createSmartAlbum with incorrect albumName
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
        */
        it('MEDIALIBRARY_CREATESMARTALBUM_CB_003010_005', 0, async function (done) {
            let testNo = 'MEDIALIBRARY_CREATESMARTALBUM_CB_003010_005';
            var albumName = Number.MIN_VALUE;
            await createAbnormalName(done, albumName, testNo);
        });

        /**
        * @tc.number    : MEDIALIBRARY_CREATESMARTALBUM_CB_003010_006
        * @tc.name      : createSmartAlbum
        * @tc.desc      : createSmartAlbum with incorrect albumName
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
        */
        it('MEDIALIBRARY_CREATESMARTALBUM_CB_003010_006', 0, async function (done) {
            let testNo = 'MEDIALIBRARY_CREATESMARTALBUM_CB_003010_006';
            var albumName = Number.MAX_SAFE_INTEGER;
            await createAbnormalName(done, albumName, testNo);
        });

        /**
        * @tc.number    : MEDIALIBRARY_CREATESMARTALBUM_CB_003010_007
        * @tc.name      : createSmartAlbum
        * @tc.desc      : createSmartAlbum with correct albumName
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
        */
        it('MEDIALIBRARY_CREATESMARTALBUM_CB_003010_007', 0, async function (done) {
            let testNo = 'MEDIALIBRARY_CREATESMARTALBUM_CB_003010_007';
            var albumName = 'c';
            await createName(done, albumName, testNo);
        });

        /**
        * @tc.number    : MEDIALIBRARY_CREATESMARTALBUM_CB_003010_008
        * @tc.name      : createSmartAlbum
        * @tc.desc      : createSmartAlbum with incorrect albumName
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
        */
        it('MEDIALIBRARY_CREATESMARTALBUM_CB_003010_008', 0, async function (done) {
            let testNo = 'MEDIALIBRARY_CREATESMARTALBUM_CB_003010_008';
            var albumName = '';
            await createAbnormalName(done, albumName, testNo);
        });

        /**
        * @tc.number    : MEDIALIBRARY_CREATESMARTALBUM_CB_003010_009
        * @tc.name      : createSmartAlbum
        * @tc.desc      : createSmartAlbum with incorrect albumName
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
        */
        it('MEDIALIBRARY_CREATESMARTALBUM_CB_003010_009', 0, async function (done) {
            let testNo = 'MEDIALIBRARY_CREATESMARTALBUM_CB_003010_009';
            var albumName = "";
            await createAbnormalName(done, albumName, testNo);
        });

        /**
        * @tc.number    : MEDIALIBRARY_CREATESMARTALBUM_CB_003010_010
        * @tc.name      : createSmartAlbum
        * @tc.desc      : createSmartAlbum with incorrect albumName
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
        */
        it('MEDIALIBRARY_CREATESMARTALBUM_CB_003010_010', 0, async function (done) {
            let testNo = 'MEDIALIBRARY_CREATESMARTALBUM_CB_003010_010';
            var albumName = [true, "abc", 123];
            await createAbnormalName(done, albumName, testNo);
        });

        /**
        * @tc.number    : MEDIALIBRARY_CREATESMARTALBUM_CB_003010_012
        * @tc.name      : createSmartAlbum
        * @tc.desc      : createSmartAlbum with incorrect parentId
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
        */
        it('MEDIALIBRARY_CREATESMARTALBUM_CB_003010_012', 0, async function (done) {
            let testNo = 'MEDIALIBRARY_CREATESMARTALBUM_CB_003010_012';
            var parentId = null;
            await createAbnormalParentId(done, parentId, testNo);
        });

        /**
        * @tc.number    : MEDIALIBRARY_CREATESMARTALBUM_CB_003010_013
        * @tc.name      : createSmartAlbum
        * @tc.desc      : createSmartAlbum with incorrect parentId
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
        */
        it('MEDIALIBRARY_CREATESMARTALBUM_CB_003010_013', 0, async function (done) {
            let testNo = 'MEDIALIBRARY_CREATESMARTALBUM_CB_003010_013';
            var parentId;
            await createAbnormalParentId(done, parentId, testNo);
        });

        /**
        * @tc.number    : MEDIALIBRARY_CREATESMARTALBUM_CB_003010_014
        * @tc.name      : createSmartAlbum
        * @tc.desc      : createSmartAlbum with correct parentId
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
        */
        it('MEDIALIBRARY_CREATESMARTALBUM_CB_003010_014', 0, async function (done) {
            let testNo = 'MEDIALIBRARY_CREATESMARTALBUM_CB_003010_014';
            var parentId = Number.MAX_VALUE;
            await createParentId(done, parentId, testNo);
        });

        /**
        * @tc.number    : MEDIALIBRARY_CREATESMARTALBUM_CB_003010_015
        * @tc.name      : createSmartAlbum
        * @tc.desc      : createSmartAlbum with correct parentId
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
        */
        it('MEDIALIBRARY_CREATESMARTALBUM_CB_003010_015', 0, async function (done) {
            let testNo = 'MEDIALIBRARY_CREATESMARTALBUM_CB_003010_015';
            var parentId = Number.MIN_VALUE;
            await createParentId(done, parentId, testNo);
        });

        /**
        * @tc.number    : MEDIALIBRARY_CREATESMARTALBUM_CB_003010_016
        * @tc.name      : createSmartAlbum
        * @tc.desc      : createSmartAlbum with correct parentId
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
        */
        it('MEDIALIBRARY_CREATESMARTALBUM_CB_003010_016', 0, async function (done) {
            let testNo = 'MEDIALIBRARY_CREATESMARTALBUM_CB_003010_016';
            var parentId = Number.MAX_SAFE_INTEGER;
            await createAbnormalParentId(done, parentId, testNo);
        });

        /**
        * @tc.number    : MEDIALIBRARY_CREATESMARTALBUM_CB_003010_017
        * @tc.name      : createSmartAlbum
        * @tc.desc      : createSmartAlbum with incorrect parentId
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
        */
        it('MEDIALIBRARY_CREATESMARTALBUM_CB_003010_017', 0, async function (done) {
            let testNo = 'MEDIALIBRARY_CREATESMARTALBUM_CB_003010_017';
            var parentId = 'c';
            await createAbnormalParentId(done, parentId, testNo);
        });

        /**
        * @tc.number    : MEDIALIBRARY_CREATESMARTALBUM_CB_003010_018
        * @tc.name      : createSmartAlbum
        * @tc.desc      : createSmartAlbum with incorrect parentId
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
        */
        it('MEDIALIBRARY_CREATESMARTALBUM_CB_003010_018', 0, async function (done) {
            let testNo = 'MEDIALIBRARY_CREATESMARTALBUM_CB_003010_018';
            var parentId = '';
            await createAbnormalParentId(done, parentId, testNo);
        });

        /**
        * @tc.number    : MEDIALIBRARY_CREATESMARTALBUM_CB_003010_019
        * @tc.name      : createSmartAlbum
        * @tc.desc      : createSmartAlbum with incorrect parentId
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
        */
        it('MEDIALIBRARY_CREATESMARTALBUM_CB_003010_019', 0, async function (done) {
            let testNo = 'MEDIALIBRARY_CREATESMARTALBUM_CB_003010_019';
            var parentId = "str";
            await createAbnormalParentId(done, parentId, testNo);
        });

        /**
        * @tc.number    : MEDIALIBRARY_CREATESMARTALBUM_CB_003010_020
        * @tc.name      : createSmartAlbum
        * @tc.desc      : createSmartAlbum with incorrect parentId
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
        */
        it('MEDIALIBRARY_CREATESMARTALBUM_CB_003010_020', 0, async function (done) {
            let testNo = 'MEDIALIBRARY_CREATESMARTALBUM_CB_003010_020';
            var parentId = "";
            await createAbnormalParentId(done, parentId, testNo);
        });

        /**
        * @tc.number    : MEDIALIBRARY_CREATESMARTALBUM_CB_003010_021
        * @tc.name      : createSmartAlbum
        * @tc.desc      : createSmartAlbum with incorrect parentId
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
        */
        it('MEDIALIBRARY_CREATESMARTALBUM_CB_003010_021', 0, async function (done) {
            let testNo = 'MEDIALIBRARY_CREATESMARTALBUM_CB_003010_021';
            var parentId = [true, "abc", 123];
            await createAbnormalParentId(done, parentId, testNo);
        });

        //--------------------------------------------------------------------------------------------------

        /**
        * @tc.number    : MEDIALIBRARY_CREATESMARTALBUM_CB_003010_023
        * @tc.name      : getSmartAlbum
        * @tc.desc      : getSmartAlbum
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
        */
        it('MEDIALIBRARY_CREATESMARTALBUM_CB_003010_023', 0, async function (done) {
            let testNo = 'MEDIALIBRARY_CREATESMARTALBUM_CB_003010_023';
            let albumName = 'P_003010_023';
            var childAlbumName = "childAlbumName";
            await getSmartAlbum(done, albumName, childAlbumName, testNo);
        });

        /**
        * @tc.number    : MEDIALIBRARY_CREATESMARTALBUM_CB_003010_024
        * @tc.name      : getSmartAlbum
        * @tc.desc      : getSmartAlbum with incorrect albumId
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
        */
        it('MEDIALIBRARY_CREATESMARTALBUM_CB_003010_024', 0, async function (done) {
            let testNo = 'MEDIALIBRARY_CREATESMARTALBUM_CB_003010_024';
            var abnormalAlbumId = null;
            await getSmartAlbumAbnormal(done, abnormalAlbumId, testNo);
        });

        /**
        * @tc.number    : MEDIALIBRARY_CREATESMARTALBUM_CB_003010_025
        * @tc.name      : getSmartAlbum
        * @tc.desc      : getSmartAlbum with incorrect albumId
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
        */
        it('MEDIALIBRARY_CREATESMARTALBUM_CB_003010_025', 0, async function (done) {
            let testNo = 'MEDIALIBRARY_CREATESMARTALBUM_CB_003010_025';
            var abnormalAlbumId;
            await getSmartAlbumAbnormal(done, abnormalAlbumId, testNo);
        });

        /**
        * @tc.number    : MEDIALIBRARY_CREATESMARTALBUM_CB_003010_026
        * @tc.name      : getSmartAlbum
        * @tc.desc      : getSmartAlbum with correct albumId
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
        */
        it('MEDIALIBRARY_CREATESMARTALBUM_CB_003010_026', 0, async function (done) {
            let testNo = 'MEDIALIBRARY_CREATESMARTALBUM_CB_003010_026';
            var abnormalAlbumId = Number.MAX_VALUE;
            await getSmartAlbumAlbumId(done, abnormalAlbumId, testNo);
        });

        /**
        * @tc.number    : MEDIALIBRARY_CREATESMARTALBUM_CB_003010_027
        * @tc.name      : getSmartAlbum
        * @tc.desc      : getSmartAlbum with correct albumId
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
        */
        it('MEDIALIBRARY_CREATESMARTALBUM_CB_003010_027', 0, async function (done) {
            let testNo = 'MEDIALIBRARY_CREATESMARTALBUM_CB_003010_027';
            var abnormalAlbumId = Number.MIN_VALUE;
            await getSmartAlbumAlbumId(done, abnormalAlbumId, testNo);
        });

        /**
        * @tc.number    : MEDIALIBRARY_CREATESMARTALBUM_CB_003010_028
        * @tc.name      : getSmartAlbum
        * @tc.desc      : getSmartAlbum with correct albumId
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
        */
        it('MEDIALIBRARY_CREATESMARTALBUM_CB_003010_028', 0, async function (done) {
            let testNo = 'MEDIALIBRARY_CREATESMARTALBUM_CB_003010_028';
            var abnormalAlbumId = Number.MAX_SAFE_INTEGER;
            await getSmartAlbumAbnormal(done, abnormalAlbumId, testNo);
        });

        /**
        * @tc.number    : MEDIALIBRARY_CREATESMARTALBUM_CB_003010_029
        * @tc.name      : getSmartAlbum
        * @tc.desc      : getSmartAlbum with incorrect albumId
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
        */
        it('MEDIALIBRARY_CREATESMARTALBUM_CB_003010_029', 0, async function (done) {
            let testNo = 'MEDIALIBRARY_CREATESMARTALBUM_CB_003010_029';
            var abnormalAlbumId = 'c';
            await getSmartAlbumAbnormal(done, abnormalAlbumId, testNo);
        });

        /**
        * @tc.number    : MEDIALIBRARY_CREATESMARTALBUM_CB_003010_030
        * @tc.name      : getSmartAlbum
        * @tc.desc      : getSmartAlbum with incorrect albumId
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
        */
        it('MEDIALIBRARY_CREATESMARTALBUM_CB_003010_030', 0, async function (done) {
            let testNo = 'MEDIALIBRARY_CREATESMARTALBUM_CB_003010_030';
            var abnormalAlbumId = '';
            await getSmartAlbumAbnormal(done, abnormalAlbumId, testNo);
        });

        /**
        * @tc.number    : MEDIALIBRARY_CREATESMARTALBUM_CB_003010_031
        * @tc.name      : getSmartAlbum
        * @tc.desc      : getSmartAlbum with incorrect albumId
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
        */
        it('MEDIALIBRARY_CREATESMARTALBUM_CB_003010_031', 0, async function (done) {
            let testNo = 'MEDIALIBRARY_CREATESMARTALBUM_CB_003010_031';
            var abnormalAlbumId = "str";
            await getSmartAlbumAbnormal(done, abnormalAlbumId, testNo);
        });

        /**
        * @tc.number    : MEDIALIBRARY_CREATESMARTALBUM_CB_003010_032
        * @tc.name      : getSmartAlbum
        * @tc.desc      : getSmartAlbum with incorrect albumId
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
        */
        it('MEDIALIBRARY_CREATESMARTALBUM_CB_003010_032', 0, async function (done) {
            let testNo = 'MEDIALIBRARY_CREATESMARTALBUM_CB_003010_032';
            var abnormalAlbumId = "";
            await getSmartAlbumAbnormal(done, abnormalAlbumId, testNo);
        });

        /**
        * @tc.number    : MEDIALIBRARY_CREATESMARTALBUM_CB_003010_033
        * @tc.name      : getSmartAlbum
        * @tc.desc      : getSmartAlbum with incorrect albumId
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
        */
        it('MEDIALIBRARY_CREATESMARTALBUM_CB_003010_033', 0, async function (done) {
            let testNo = 'MEDIALIBRARY_CREATESMARTALBUM_CB_003010_033';
            var abnormalAlbumId = [true, "abc", 123];
            await getSmartAlbumAbnormal(done, abnormalAlbumId, testNo);
        });

        /**
        * @tc.number    : MEDIALIBRARY_CREATESMARTALBUM_CB_003010_035
        * @tc.name      : deleteSmartAlbum
        * @tc.desc      : deleteSmartAlbum
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
        */
        it('MEDIALIBRARY_CREATESMARTALBUM_CB_003010_035', 0, async function (done) {
            let testNo = 'MEDIALIBRARY_CREATESMARTALBUM_CB_003010_035';
            let albumName = 'P_003010_035';
            var childAlbumNameOne = "childAlbumNameOne";
            var childAlbumNameTwo = "childAlbumNameTwo";
            await deleteSmartAlbum(done, albumName, childAlbumNameOne, childAlbumNameTwo, testNo);
        });

        /**
        * @tc.number    : MEDIALIBRARY_CREATESMARTALBUM_CB_003010_036
        * @tc.name      : deleteSmartAlbum
        * @tc.desc      : deleteSmartAlbum with incorrect albumId
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
        */
        it('MEDIALIBRARY_CREATESMARTALBUM_CB_003010_036', 0, async function (done) {
            let testNo = 'MEDIALIBRARY_CREATESMARTALBUM_CB_003010_036';
            let abnormalAlbumId = null;
            await deleteSmartAlbumAbnormal(done, abnormalAlbumId, testNo)
        });

        /**
        * @tc.number    : MEDIALIBRARY_CREATESMARTALBUM_CB_003010_037
        * @tc.name      : deleteSmartAlbum
        * @tc.desc      : deleteSmartAlbum with incorrect albumId
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
        */
        it('MEDIALIBRARY_CREATESMARTALBUM_CB_003010_037', 0, async function (done) {
            let testNo = 'MEDIALIBRARY_CREATESMARTALBUM_CB_003010_037';
            let abnormalAlbumId;
            await deleteSmartAlbumAbnormal(done, abnormalAlbumId, testNo)
        });

        /**
        * @tc.number    : MEDIALIBRARY_CREATESMARTALBUM_CB_003010_040
        * @tc.name      : deleteSmartAlbum
        * @tc.desc      : deleteSmartAlbum with incorrect albumId
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
        */
        it('MEDIALIBRARY_CREATESMARTALBUM_CB_003010_040', 0, async function (done) {
            let testNo = 'MEDIALIBRARY_CREATESMARTALBUM_CB_003010_040';
            let abnormalAlbumId = Number.MAX_SAFE_INTEGER;
            await deleteSmartAlbumAbnormal(done, abnormalAlbumId, testNo)
        });

        /**
        * @tc.number    : MEDIALIBRARY_CREATESMARTALBUM_CB_003010_041
        * @tc.name      : deleteSmartAlbum
        * @tc.desc      : deleteSmartAlbum with incorrect albumId
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
        */
        it('MEDIALIBRARY_CREATESMARTALBUM_CB_003010_041', 0, async function (done) {
            let testNo = 'MEDIALIBRARY_CREATESMARTALBUM_CB_003010_041';
            let abnormalAlbumId = 'c';
            await deleteSmartAlbumAbnormal(done, abnormalAlbumId, testNo)
        });

        /**
        * @tc.number    : MEDIALIBRARY_CREATESMARTALBUM_CB_003010_042
        * @tc.name      : deleteSmartAlbum
        * @tc.desc      : deleteSmartAlbum with incorrect albumId
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
        */
        it('MEDIALIBRARY_CREATESMARTALBUM_CB_003010_042', 0, async function (done) {
            let testNo = 'MEDIALIBRARY_CREATESMARTALBUM_CB_003010_042';
            let abnormalAlbumId = '';
            await deleteSmartAlbumAbnormal(done, abnormalAlbumId, testNo)
        });

        /**
        * @tc.number    : MEDIALIBRARY_CREATESMARTALBUM_CB_003010_043
        * @tc.name      : deleteSmartAlbum
        * @tc.desc      : deleteSmartAlbum with incorrect albumId
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
        */
        it('MEDIALIBRARY_CREATESMARTALBUM_CB_003010_043', 0, async function (done) {
            let testNo = 'MEDIALIBRARY_CREATESMARTALBUM_CB_003010_043';
            let abnormalAlbumId = "str";
            await deleteSmartAlbumAbnormal(done, abnormalAlbumId, testNo)
        });

        /**
        * @tc.number    : MEDIALIBRARY_CREATESMARTALBUM_CB_003010_044
        * @tc.name      : deleteSmartAlbum
        * @tc.desc      : deleteSmartAlbum with incorrect albumId
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
        */
        it('MEDIALIBRARY_CREATESMARTALBUM_CB_003010_044', 0, async function (done) {
            let testNo = 'MEDIALIBRARY_CREATESMARTALBUM_CB_003010_044';
            let abnormalAlbumId = "";
            await deleteSmartAlbumAbnormal(done, abnormalAlbumId, testNo)
        });

        /**
        * @tc.number    : MEDIALIBRARY_CREATESMARTALBUM_CB_003010_045
        * @tc.name      : deleteSmartAlbum
        * @tc.desc      : deleteSmartAlbum with incorrect albumId
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
        */
        it('MEDIALIBRARY_CREATESMARTALBUM_CB_003010_045', 0, async function (done) {
            let testNo = 'MEDIALIBRARY_CREATESMARTALBUM_CB_003010_045';
            let abnormalAlbumId = [true, "abc", 123];
            await deleteSmartAlbumAbnormal(done, abnormalAlbumId, testNo)
        });
    });
}

