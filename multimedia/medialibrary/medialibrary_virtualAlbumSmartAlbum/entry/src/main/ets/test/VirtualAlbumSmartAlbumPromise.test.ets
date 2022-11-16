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
import featureAbility from '@ohos.ability.featureAbility';
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from 'deccjsunit/index';

import { sleep } from './common.ets';

let fileKeyObj = mediaLibrary.FileKey;

let fileType = mediaLibrary.MediaType.FILE;
let imageType = mediaLibrary.MediaType.IMAGE;
let videoType = mediaLibrary.MediaType.VIDEO;
let audioType = mediaLibrary.MediaType.AUDIO;
let constChildAlbumNameOne = 'childAlbumNameOne';
let constChildAlbumNameTwo = 'childAlbumNameTwo';

let constDescription = 'testDescription';
let constExpiredTime = 1000;
let DATA_ABILITY_VIOLATION_PARAMETERS = -210;
const erroMsg = 'Error: assertion (false) failed: type mismatch';
const PARAMETERS_ERRCODE = 3;

export default function VirtualAlbumSmartAlbumPromise(abilityContext){
    describe('VirtualAlbumSmartAlbumPromise', function () {
        beforeAll(function () {});
        beforeEach(async function () {
           await sleep(1000)
        });
        afterEach(function () {});
        afterAll(function () {});
        const media = mediaLibrary.getMediaLibrary(abilityContext);

        const albumName = "LevelOne";      

        const imageFetchOp = {
            selections: fileKeyObj.RELATIVE_PATH + '= ? AND ' + fileKeyObj.MEDIA_TYPE + '= ? ',
            selectionArgs: ['Pictures/SmartAlbumaddFileAssets/', imageType.toString()],
        };

        async function addFileAsset(done, fetchOp, testNo) {
            try {
                let albumRoot = await media.createSmartAlbum(0, albumName);
                console.info(`addFileAsset --1 ${albumRoot} :: albumRoot]`);
                let albumChildOne = await media.createSmartAlbum(albumRoot.albumId, constChildAlbumNameOne);
                console.info(`addFileAsset --2 ${albumChildOne} :: albumChildOne]`);
                let albumChildTwo = await media.createSmartAlbum(albumRoot.albumId, constChildAlbumNameTwo);
                console.info(`addFileAsset --3 ${albumChildTwo} :: albumChildTwo]`);

                const fileAssets = await media.getFileAssets(fetchOp);
                console.info(`addFileAsset --4 `);
                const dataList = await fileAssets.getAllObject();
                console.info(`addFileAsset --5 `);
                let ids = [];
                console.info(`addFileAsset --6 `);
                for (let i = 0; i < dataList.length; i++) {
                    console.info(`addFileAsset --7 `);
                    ids[i] = dataList[i].id;
                }
                for (let i = 0; i < ids.length; i++) {
                    console.info(`${ids[i]} :: ids[${i}]`);
                    console.info(`${dataList[i]} :: dataList[${i}]`);
                }
                console.info(`addFileAsset --8 `);
                await albumChildOne.addFileAssets(ids);
                console.info(`addFileAsset --9 `);
                let smartAlbumList = await media.getSmartAlbum(albumRoot.albumId);
                console.info(`addFileAsset --10 `);
                let count = 0;
                console.info(`addFileAsset --11 `);
                for (let i = 0; i < smartAlbumList.length; i++) {
                    console.info(`addFileAsset --12 `);
                    if(albumChildOne.albumName == smartAlbumList[i].albumName) {
                        console.info(`addFileAsset --13 `);
                        const fileAssets2 = await smartAlbumList[i].getFileAssets(fetchOp);
                        const dataList2 = await fileAssets2.getAllObject();
                        for (let i = 0; i < dataList2.length; i++) {
                            if(dataList2[i].id == ids[i]){
                                count++;
                            }
                            console.info(`${dataList2[i]} :: dataList2[${i}]`);
                        }
                        expect(count == ids.length).assertTrue();
                        done();
                        break;
                    }
                }
            } catch (error) {
                console.info(`${testNo} failed, message: ${error}, error.code: ${error.code}`);
                expect(false).assertTrue();
                done();
            }
        }

        async function addFileAssetsAbnormal(done, idsInput, testNo) {
            try {
                let albumRoot = await media.createSmartAlbum(0, albumName);
                let albumChildOne = await media.createSmartAlbum(albumRoot.albumId, constChildAlbumNameOne);

                let ids = idsInput;
                await albumChildOne.addFileAssets(ids);
                console.info(`${testNo} failed`);
                expect(false).assertTrue();
                done();
            } catch (error) {
                console.info(`${testNo} passed, message: ${error}, error.code: ${error.code}`);
                expect(error.code == PARAMETERS_ERRCODE).assertTrue();
                done();
            }
        }

        async function removeFileAssets(done, fetchOp, testNo) {
            try {

                console.info(`removeFileAssets --1 `);
                let albumRoot = await media.createSmartAlbum(0, albumName);
                console.info(`removeFileAssets --2 `);
                let albumChildOne = await media.createSmartAlbum(albumRoot.albumId, constChildAlbumNameOne);
                console.info(`removeFileAssets --3 `);
                let albumChildTwo = await media.createSmartAlbum(albumRoot.albumId, constChildAlbumNameTwo);
                console.info(`removeFileAssets --4 `);

                const fileAssets = await media.getFileAssets(fetchOp);
                console.info(`removeFileAssets --5 `);
                const dataList = await fileAssets.getAllObject();
                console.info(`removeFileAssets --6 `);
                let ids = [];
                console.info(`removeFileAssets --7 `);
                for (let i = 0; i < dataList.length; i++) {
                    console.info(`removeFileAssets --8 `);
                    ids[i] = dataList[i].id;
                }
                console.info(`removeFileAssets --9 `);
                await albumChildOne.addFileAssets(ids);
                console.info(`removeFileAssets --10 `);
                let ids_new = [];
                console.info(`removeFileAssets --11 `);
                for (let i = 0; i < ids.length - 1; i++) {
                    console.info(`removeFileAssets --12 `);
                    ids_new[i] = ids[i];
                    console.info(`${ids_new[i]} :: ids_new[${i}]`);
                }
                console.info(`removeFileAssets --13 `);
                await albumChildOne.removeFileAssets(ids_new);
                console.info(`removeFileAssets --14 `);
                let smartAlbumList = await media.getSmartAlbum(albumRoot.albumId);
                console.info(`removeFileAssets --15 `);
                for (let i = 0; i < smartAlbumList.length; i++) {
                    console.info(`removeFileAssets --16 `);
                    if(albumChildOne.albumName == smartAlbumList[i].albumName) {
                        console.info(`removeFileAssets --17 `);
                        const fileAssets2 = await smartAlbumList[i].getFileAssets(fetchOp);
                        console.info(`removeFileAssets --18 `);
                        const dataList2 = await fileAssets2.getAllObject();
                        console.info(`removeFileAssets --19 `);
                        for (let i = 0; i < dataList2.length; i++) {
                            console.info(`removeFileAssets --20 `);
                            if(dataList2[i].id == ids[ids.length - 1]){
                                console.info(`removeFileAssets --21 `);
                                console.info(`${dataList2[i].id} :: dataList2[${i}].id`);
                                console.info(`${ids[ids.length - 1]} :: ids[${ids.length - 1}]`);
                                expect(true).assertTrue();
                                done();
                            } else {
                                console.info(`removeFileAssets --22 `);
                                expect(false).assertTrue();
                                done();
                            }
                        }
                    }
                }
            } catch (error) {
                console.info(`${testNo} failed, message: ${error}, error.code: ${error.code}`);
                expect(false).assertTrue();
                done();
            }
        }

        async function removeFileAssetsAbnormal(done, idsInput, testNo) {
            try {
                let albumRoot = await media.createSmartAlbum(0, albumName);
                let albumChildOne = await media.createSmartAlbum(albumRoot.albumId, constChildAlbumNameOne);

                let ids = idsInput;
                await albumChildOne.removeFileAssets(ids);
                console.info(`${testNo} failed`);
                expect(false).assertTrue();
                done();
            } catch (error) {
                console.info(`${testNo} passed, message: ${error}, error.code: ${error.code}`);
                expect(error.code == PARAMETERS_ERRCODE).assertTrue();
                done();
            }
        }

        async function commitModify(done, inputDescription, inputCoverURI, inputExpiredTime, 
            childAlbumNameOne, childAlbumNameTwo, testNo) {
            try {
                console.info(`commitModify --1 `);
                let albumRoot = await media.createSmartAlbum(0, albumName);
                console.info(`commitModify --2 `);
                let albumChildOne = await media.createSmartAlbum(albumRoot.albumId, childAlbumNameOne);
                console.info(`commitModify --3 `);
                let albumChildTwo = await media.createSmartAlbum(albumRoot.albumId, childAlbumNameTwo);
                console.info(`commitModify --4 `);
                albumChildOne.description = inputDescription;
                console.info(`commitModify --5 `);
                albumChildOne.coverURI = inputCoverURI;
                console.info(`commitModify --6 `);
                albumChildOne.expiredTime = inputExpiredTime;
                console.info(`commitModify --7 `);
                await albumChildOne.commitModify();
                console.info(`commitModify --8 `);
                let smartAlbumList = await media.getSmartAlbum(albumRoot.albumId);
                console.info(`commitModify --9 `);
                for (let i = 0; i < smartAlbumList.length; i++) {
                    console.info(`${smartAlbumList[i].albumName} :: smartAlbumList[${i}].albumName`);
                    console.info(`${albumChildOne.albumName} :: albumChildOne.albumName`);
                    if(albumChildOne.albumName == smartAlbumList[i].albumName) {
                        console.info(`${smartAlbumList[i].description} :: smartAlbumList[${i}].description`);
                        console.info(`${smartAlbumList[i].coverURI} :: smartAlbumList[${i}].coverURI`);
                        console.info(`${smartAlbumList[i].expiredTime} :: smartAlbumList[${i}].expiredTime`);
                        if((smartAlbumList[i].description == inputDescription) &&
                            (smartAlbumList[i].coverURI == inputCoverURI) &&
                            (smartAlbumList[i].expiredTime == inputExpiredTime))
                        {
                            console.info(`${testNo} passed`);
                            expect(true).assertTrue();
                            console.info(`${smartAlbumList[i].albumId} :: smartAlbumList[${i}].albumId`);
                            console.info(`${smartAlbumList[i].albumType} :: smartAlbumList[${i}].albumType`);
                            console.info(`${smartAlbumList[i].albumName} :: smartAlbumList[${i}].albumName`);
                            console.info(`${smartAlbumList[i].size} :: smartAlbumList[${i}].size`);
                            console.info(`${smartAlbumList[i].selfId} :: smartAlbumList[${i}].selfId`);
                            done();
                        }
                        else{
                            console.info(`${testNo} failed, message: ${error}, error.code: ${error.code}`);
                            expect(false).assertTrue();
                            done();
                        }
                        break;
                    }
                }
            } catch (error) {
                console.info(`${testNo} failed, message: ${error}, error.code: ${error.code}`);
                expect(false).assertTrue();
                done();
            }
        }

        async function commitModifyAbnormalCoverURI(done, inputCoverURI, testNo) {
            try {
                let albumRoot = await media.createSmartAlbum(0, albumName);
                let albumChildOne = await media.createSmartAlbum(albumRoot.albumId, constChildAlbumNameOne);

                albumChildOne.description = constDescription;
                albumChildOne.coverURI = inputCoverURI;
                albumChildOne.expiredTime = constExpiredTime;

                await albumChildOne.commitModify();
                console.info(`${testNo} failed`);
                expect(false).assertTrue();
                done();
            } catch (error) {
                console.info(`${testNo} passed, message: ${error}, error.code: ${error.code}`);
                expect(error.code == DATA_ABILITY_VIOLATION_PARAMETERS).assertTrue();
                done();
            }
        }

        async function commitModifyAbnormalExpiredTime(done, inputExpiredTime, testNo) {
            try {
                let albumRoot = await media.createSmartAlbum(0, albumName);
                let albumChildOne = await media.createSmartAlbum(albumRoot.albumId, constChildAlbumNameOne);

                albumChildOne.expiredTime = inputExpiredTime;

                await albumChildOne.commitModify();
                console.info(`${testNo} failed`);
                expect(false).assertTrue();
                done();
            } catch (error) {
                console.info(`${testNo} passed, message: ${error}, error.code: ${error.code}`);
                expect(error.code == DATA_ABILITY_VIOLATION_PARAMETERS).assertTrue();
                done();
            }
        }

        async function getFileAssetsOne(done, fetchOp, testNo) {
            try {
                let albumRoot = await media.createSmartAlbum(0, albumName);
                let albumChildOne = await media.createSmartAlbum(albumRoot.albumId, constChildAlbumNameOne);
                let albumChildTwo = await media.createSmartAlbum(albumRoot.albumId, constChildAlbumNameTwo);

                const fileAssets = await media.getFileAssets(fetchOp);
                const dataList = await fileAssets.getAllObject();
                let ids = [];
                for (let i = 0; i < dataList.length; i++) {
                    ids[i] = dataList[i].id;
                }
                for (let i = 0; i < ids.length; i++) {
                    console.info(`${ids[i]} :: ids[${i}]`);
                    console.info(`${dataList[i]} :: dataList[${i}]`);
                }
                await albumChildOne.addFileAssets(ids);

                let smartAlbumList = await media.getSmartAlbum(albumRoot.albumId);
                const idOP = { selections: fileKeyObj.ID + '= ?', selectionArgs: ['' + dataList[0].id] };
                for (let i = 0; i < smartAlbumList.length; i++) {
                    if(albumChildOne.albumName == smartAlbumList[i].albumName) {
                        const fetchFileResult = await smartAlbumList[i].getFileAssets(idOP);
                        const fileasset = await fetchFileResult.getFirstObject();
                        console.info(`${dataList[i].id} :: dataList[${i}].id`);
                        console.info(`${fileasset.id} :: fileasset.id `);
                        if(dataList[i].id == fileasset.id){
                            console.info(`${testNo} passed`);
                            expect(true).assertTrue();
                            done();
                        }else{
                            console.info(`${testNo} failed`);
                            expect(false).assertTrue();
                            done();
                        }
                    }
                }
            } catch (error) {
                console.info(`${testNo} failed, message: ${error}, error.code: ${error.code}`);
                expect(false).assertTrue();
                done();
            }
        }

        async function getFileAssetsOneAbnormal(done, fetchOp, inputIdOp, testNo) {
            try {
                let albumRoot = await media.createSmartAlbum(0, albumName);
                let albumChildOne = await media.createSmartAlbum(albumRoot.albumId, constChildAlbumNameOne);
                let albumChildTwo = await media.createSmartAlbum(albumRoot.albumId, constChildAlbumNameTwo);

                const fileAssets = await media.getFileAssets(fetchOp);
                const dataList = await fileAssets.getAllObject();
                let ids = [];
                for (let i = 0; i < dataList.length; i++) {
                    ids[i] = dataList[i].id;
                }
                await albumChildOne.addFileAssets(ids);

                let smartAlbumList = await media.getSmartAlbum(albumRoot.albumId);
                const idOP = inputIdOp;
                await smartAlbumList[0].getFileAssets(idOP);
                console.info(`${testNo} failed`);
                expect(false).assertTrue();
                done();
            } catch (error) {
                console.info(`${testNo} passed, message: ${error}, error.code: ${error.code}`);
                expect(error == erroMsg).assertTrue();
                done();
            }
        }

        /**
        * @tc.number    : VIRTUALALBUM_SMARTALBUM_P_003010_001
        * @tc.name      : SmartAlbum.addFileAssets
        * @tc.desc      : SmartAlbum.addFileAssets with correct ids
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
        */
         it('VIRTUALALBUM_SMARTALBUM_P_003010_001', 0, async function (done) {
            let testNo = 'VIRTUALALBUM_SMARTALBUM_P_003010_001';
            await addFileAsset(done, imageFetchOp, testNo);
        });

        /**
        * @tc.number    : VIRTUALALBUM_SMARTALBUM_P_003010_002
        * @tc.name      : SmartAlbum.addFileAssets
        * @tc.desc      : SmartAlbum.addFileAssets with incorrect ids
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
        */
         it('VIRTUALALBUM_SMARTALBUM_P_003010_002', 0, async function (done) {
            let testNo = 'VIRTUALALBUM_SMARTALBUM_P_003010_002';
            let idsInput = null;
            await addFileAssetsAbnormal(done, idsInput, testNo);
        });

        /**
        * @tc.number    : VIRTUALALBUM_SMARTALBUM_P_003010_003
        * @tc.name      : SmartAlbum.addFileAssets
        * @tc.desc      : SmartAlbum.addFileAssets with incorrect ids
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
        */
         it('VIRTUALALBUM_SMARTALBUM_P_003010_003', 0, async function (done) {
            let testNo = 'VIRTUALALBUM_SMARTALBUM_P_003010_003';
            let idsInput;
            await addFileAssetsAbnormal(done, idsInput, testNo);
        });

        /**
        * @tc.number    : VIRTUALALBUM_SMARTALBUM_P_003010_004
        * @tc.name      : SmartAlbum.addFileAssets
        * @tc.desc      : SmartAlbum.addFileAssets with incorrect ids
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
        */
         it('VIRTUALALBUM_SMARTALBUM_P_003010_004', 0, async function (done) {
            let testNo = 'VIRTUALALBUM_SMARTALBUM_P_003010_004';
            let idsInput = Number.MAX_VALUE;
            await addFileAssetsAbnormal(done, idsInput, testNo);
        });

        /**
        * @tc.number    : VIRTUALALBUM_SMARTALBUM_P_003010_005
        * @tc.name      : SmartAlbum.addFileAssets
        * @tc.desc      : SmartAlbum.addFileAssets with incorrect ids
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
        */
         it('VIRTUALALBUM_SMARTALBUM_P_003010_005', 0, async function (done) {
            let testNo = 'VIRTUALALBUM_SMARTALBUM_P_003010_005';
            let idsInput = Number.MIN_VALUE;
            await addFileAssetsAbnormal(done, idsInput, testNo);
        });

        /**
        * @tc.number    : VIRTUALALBUM_SMARTALBUM_P_003010_006
        * @tc.name      : SmartAlbum.addFileAssets
        * @tc.desc      : SmartAlbum.addFileAssets with incorrect ids
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
        */
         it('VIRTUALALBUM_SMARTALBUM_P_003010_006', 0, async function (done) {
            let testNo = 'VIRTUALALBUM_SMARTALBUM_P_003010_006';
            let idsInput = Number.MAX_SAFE_INTEGER;
            await addFileAssetsAbnormal(done, idsInput, testNo);
        });

        /**
        * @tc.number    : VIRTUALALBUM_SMARTALBUM_P_003010_007
        * @tc.name      : SmartAlbum.addFileAssets
        * @tc.desc      : SmartAlbum.addFileAssets with incorrect ids
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
        */
         it('VIRTUALALBUM_SMARTALBUM_P_003010_007', 0, async function (done) {
            let testNo = 'VIRTUALALBUM_SMARTALBUM_P_003010_007';
            let idsInput = 'c';
            await addFileAssetsAbnormal(done, idsInput, testNo);
        });

        /**
        * @tc.number    : VIRTUALALBUM_SMARTALBUM_P_003010_008
        * @tc.name      : SmartAlbum.addFileAssets
        * @tc.desc      : SmartAlbum.addFileAssets with incorrect ids
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
        */
         it('VIRTUALALBUM_SMARTALBUM_P_003010_008', 0, async function (done) {
            let testNo = 'VIRTUALALBUM_SMARTALBUM_P_003010_008';
            let idsInput = '';
            await addFileAssetsAbnormal(done, idsInput, testNo);
        });

        /**
        * @tc.number    : VIRTUALALBUM_SMARTALBUM_P_003010_009
        * @tc.name      : SmartAlbum.addFileAssets
        * @tc.desc      : SmartAlbum.addFileAssets with incorrect ids
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
        */
         it('VIRTUALALBUM_SMARTALBUM_P_003010_009', 0, async function (done) {
            let testNo = 'VIRTUALALBUM_SMARTALBUM_P_003010_009';
            let idsInput = "str";
            await addFileAssetsAbnormal(done, idsInput, testNo);
        });

        /**
        * @tc.number    : VIRTUALALBUM_SMARTALBUM_P_003010_010
        * @tc.name      : SmartAlbum.addFileAssets
        * @tc.desc      : SmartAlbum.addFileAssets with incorrect ids
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
        */
         it('VIRTUALALBUM_SMARTALBUM_P_003010_010', 0, async function (done) {
            let testNo = 'VIRTUALALBUM_SMARTALBUM_P_003010_010';
            let idsInput = "";
            await addFileAssetsAbnormal(done, idsInput, testNo);
        });

        /**
        * @tc.number    : VIRTUALALBUM_SMARTALBUM_P_003010_011
        * @tc.name      : SmartAlbum.addFileAssets
        * @tc.desc      : SmartAlbum.addFileAssets with incorrect ids
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
        */
         it('VIRTUALALBUM_SMARTALBUM_P_003010_011', 0, async function (done) {
            let testNo = 'VIRTUALALBUM_SMARTALBUM_P_003010_011';
            let idsInput = [true,"abc",123];
            await addFileAssetsAbnormal(done, idsInput, testNo);
        });

        /**
        * @tc.number    : VIRTUALALBUM_SMARTALBUM_P_003010_013
        * @tc.name      : removeFileAssets
        * @tc.desc      : removeFileAssets with correct ids
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
        */
         it('VIRTUALALBUM_SMARTALBUM_P_003010_013', 0, async function (done) {
            let testNo = 'VIRTUALALBUM_SMARTALBUM_P_003010_013';
            await removeFileAssets(done, imageFetchOp, constChildAlbumNameOne, 
                constChildAlbumNameTwo, testNo);
        });

        /**
        * @tc.number    : VIRTUALALBUM_SMARTALBUM_P_003010_014
        * @tc.name      : removeFileAssets
        * @tc.desc      : removeFileAssets with incorrect ids
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
        */
         it('VIRTUALALBUM_SMARTALBUM_P_003010_014', 0, async function (done) {
            let testNo = 'VIRTUALALBUM_SMARTALBUM_P_003010_014';
            let idsInput = null;
            await removeFileAssetsAbnormal(done, idsInput, testNo);
        });

        /**
        * @tc.number    : VIRTUALALBUM_SMARTALBUM_P_003010_015
        * @tc.name      : removeFileAssets
        * @tc.desc      : removeFileAssets with incorrect ids
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
        */
         it('VIRTUALALBUM_SMARTALBUM_P_003010_015', 0, async function (done) {
            let testNo = 'VIRTUALALBUM_SMARTALBUM_P_003010_015';
            let idsInput;
            await removeFileAssetsAbnormal(done, idsInput, testNo);
        });

        /**
        * @tc.number    : VIRTUALALBUM_SMARTALBUM_P_003010_016
        * @tc.name      : removeFileAssets
        * @tc.desc      : removeFileAssets with incorrect ids
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
        */
         it('VIRTUALALBUM_SMARTALBUM_P_003010_016', 0, async function (done) {
            let testNo = 'VIRTUALALBUM_SMARTALBUM_P_003010_016';
            let idsInput = Number.MAX_VALUE;
            await removeFileAssetsAbnormal(done, idsInput, testNo);
        });

        /**
        * @tc.number    : VIRTUALALBUM_SMARTALBUM_P_003010_017
        * @tc.name      : removeFileAssets
        * @tc.desc      : removeFileAssets with incorrect ids
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
        */
         it('VIRTUALALBUM_SMARTALBUM_P_003010_017', 0, async function (done) {
            let testNo = 'VIRTUALALBUM_SMARTALBUM_P_003010_017';
            let idsInput = Number.MIN_VALUE;
            await removeFileAssetsAbnormal(done, idsInput, testNo);
        });

        /**
        * @tc.number    : VIRTUALALBUM_SMARTALBUM_P_003010_018
        * @tc.name      : removeFileAssets
        * @tc.desc      : removeFileAssets with incorrect ids
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
        */
         it('VIRTUALALBUM_SMARTALBUM_P_003010_018', 0, async function (done) {
            let testNo = 'VIRTUALALBUM_SMARTALBUM_P_003010_018';
            let idsInput = Number.MAX_SAFE_INTEGER;
            await removeFileAssetsAbnormal(done, idsInput, testNo);
        });

        /**
        * @tc.number    : VIRTUALALBUM_SMARTALBUM_P_003010_019
        * @tc.name      : removeFileAssets
        * @tc.desc      : removeFileAssets with incorrect ids
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
        */
         it('VIRTUALALBUM_SMARTALBUM_P_003010_019', 0, async function (done) {
            let testNo = 'VIRTUALALBUM_SMARTALBUM_P_003010_019';
            let idsInput = 'c';
            await removeFileAssetsAbnormal(done, idsInput, testNo);
        });

        /**
        * @tc.number    : VIRTUALALBUM_SMARTALBUM_P_003010_020
        * @tc.name      : removeFileAssets
        * @tc.desc      : removeFileAssets with incorrect ids
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
        */
         it('VIRTUALALBUM_SMARTALBUM_P_003010_020', 0, async function (done) {
            let testNo = 'VIRTUALALBUM_SMARTALBUM_P_003010_020';
            let idsInput = '';
            await removeFileAssetsAbnormal(done, idsInput, testNo);
        });

        /**
        * @tc.number    : VIRTUALALBUM_SMARTALBUM_P_003010_021
        * @tc.name      : removeFileAssets
        * @tc.desc      : removeFileAssets with incorrect ids
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
        */
         it('VIRTUALALBUM_SMARTALBUM_P_003010_021', 0, async function (done) {
            let testNo = 'VIRTUALALBUM_SMARTALBUM_P_003010_021';
            let idsInput = "str";
            await removeFileAssetsAbnormal(done, idsInput, testNo);
        });

        /**
        * @tc.number    : VIRTUALALBUM_SMARTALBUM_P_003010_022
        * @tc.name      : removeFileAssets
        * @tc.desc      : removeFileAssets with incorrect ids
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
        */
         it('VIRTUALALBUM_SMARTALBUM_P_003010_022', 0, async function (done) {
            let testNo = 'VIRTUALALBUM_SMARTALBUM_P_003010_022';
            let idsInput = "";
            await removeFileAssetsAbnormal(done, idsInput, testNo);
        });

        /**
        * @tc.number    : VIRTUALALBUM_SMARTALBUM_P_003010_023
        * @tc.name      : removeFileAssets
        * @tc.desc      : removeFileAssets with incorrect ids
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
        */
         it('VIRTUALALBUM_SMARTALBUM_P_003010_023', 0, async function (done) {
            let testNo = 'VIRTUALALBUM_SMARTALBUM_P_003010_023';
            let idsInput = [true,"abc",123];
            await removeFileAssetsAbnormal(done, idsInput, testNo);
        });

        /**
        * @tc.number    : VIRTUALALBUM_SMARTALBUM_P_003010_025
        * @tc.name      : commitModify
        * @tc.desc      : commitModify with correct
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
        */
         it('VIRTUALALBUM_SMARTALBUM_P_003010_025', 0, async function (done) {

            const fetchFileResult = await media.getFileAssets(imageFetchOp);
            const fileasset = await fetchFileResult.getFirstObject();
            let testNo = 'VIRTUALALBUM_SMARTALBUM_P_003010_025';
            let inputDescription = "999";
            let inputCoverURI = fileasset.uri;
            let inputExpiredTime = 333;
            await commitModify(done, inputDescription, inputCoverURI, inputExpiredTime, 
                constChildAlbumNameOne, constChildAlbumNameTwo, testNo);
        });

        /**
        * @tc.number    : VIRTUALALBUM_SMARTALBUM_P_003010_026
        * @tc.name      : commitModify
        * @tc.desc      : commitModify with incorrect coverURI
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
        */
         it('VIRTUALALBUM_SMARTALBUM_P_003010_026', 0, async function (done) {
            let testNo = 'VIRTUALALBUM_SMARTALBUM_P_003010_026';
            let inputCoverURI = null;
            await commitModifyAbnormalCoverURI(done, inputCoverURI, testNo);
        });

        /**
        * @tc.number    : VIRTUALALBUM_SMARTALBUM_P_003010_027
        * @tc.name      : commitModify
        * @tc.desc      : commitModify with incorrect coverURI
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
        */
         it('VIRTUALALBUM_SMARTALBUM_P_003010_027', 0, async function (done) {
            let testNo = 'VIRTUALALBUM_SMARTALBUM_P_003010_027';
            let inputCoverURI;
            await commitModifyAbnormalCoverURI(done, inputCoverURI, testNo);
        });

        /**
        * @tc.number    : VIRTUALALBUM_SMARTALBUM_P_003010_028
        * @tc.name      : commitModify
        * @tc.desc      : commitModify with incorrect coverURI
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
        */
         it('VIRTUALALBUM_SMARTALBUM_P_003010_028', 0, async function (done) {
            let testNo = 'VIRTUALALBUM_SMARTALBUM_P_003010_028';
            let inputCoverURI = Number.MAX_VALUE;
            await commitModifyAbnormalCoverURI(done, inputCoverURI, testNo);
        });

        /**
        * @tc.number    : VIRTUALALBUM_SMARTALBUM_P_003010_029
        * @tc.name      : commitModify
        * @tc.desc      : commitModify with incorrect coverURI
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
        */
         it('VIRTUALALBUM_SMARTALBUM_P_003010_029', 0, async function (done) {
            let testNo = 'VIRTUALALBUM_SMARTALBUM_P_003010_029';
            let inputCoverURI = Number.MIN_VALUE;
            await commitModifyAbnormalCoverURI(done, inputCoverURI, testNo);
        });

        /**
        * @tc.number    : VIRTUALALBUM_SMARTALBUM_P_003010_030
        * @tc.name      : commitModify
        * @tc.desc      : commitModify with incorrect coverURI
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
        */
         it('VIRTUALALBUM_SMARTALBUM_P_003010_030', 0, async function (done) {
            let testNo = 'VIRTUALALBUM_SMARTALBUM_P_003010_030';
            let inputCoverURI = Number.MAX_SAFE_INTEGER;
            await commitModifyAbnormalCoverURI(done, inputCoverURI, testNo);
        });

        /**
        * @tc.number    : VIRTUALALBUM_SMARTALBUM_P_003010_031
        * @tc.name      : commitModify
        * @tc.desc      : commitModify with incorrect coverURI
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
        */
         it('VIRTUALALBUM_SMARTALBUM_P_003010_031', 0, async function (done) {
            let testNo = 'VIRTUALALBUM_SMARTALBUM_P_003010_031';
            let inputCoverURI = [true,"abc",123];
            await commitModifyAbnormalCoverURI(done, inputCoverURI, testNo);
        });

        /**
        * @tc.number    : VIRTUALALBUM_SMARTALBUM_P_003010_033
        * @tc.name      : commitModify
        * @tc.desc      : commitModify with incorrect expiredTime
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
        */
         it('VIRTUALALBUM_SMARTALBUM_P_003010_033', 0, async function (done) {
            let testNo = 'VIRTUALALBUM_SMARTALBUM_P_003010_033';
            let inputExpiredTime = null;
            await commitModifyAbnormalExpiredTime(done, inputExpiredTime, testNo);
        });

        /**
        * @tc.number    : VIRTUALALBUM_SMARTALBUM_P_003010_034
        * @tc.name      : commitModify
        * @tc.desc      : commitModify with incorrect expiredTime
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
        */
         it('VIRTUALALBUM_SMARTALBUM_P_003010_034', 0, async function (done) {
            let testNo = 'VIRTUALALBUM_SMARTALBUM_P_003010_034';
            let inputExpiredTime;
            await commitModifyAbnormalExpiredTime(done, inputExpiredTime, testNo);
        });

        /**
        * @tc.number    : VIRTUALALBUM_SMARTALBUM_P_003010_035
        * @tc.name      : commitModify
        * @tc.desc      : commitModify with incorrect expiredTime
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
        */
         it('VIRTUALALBUM_SMARTALBUM_P_003010_035', 0, async function (done) {
            let testNo = 'VIRTUALALBUM_SMARTALBUM_P_003010_035';
            let inputExpiredTime = 'c';
            await commitModifyAbnormalExpiredTime(done, inputExpiredTime, testNo);
        });

        /**
        * @tc.number    : VIRTUALALBUM_SMARTALBUM_P_003010_036
        * @tc.name      : commitModify
        * @tc.desc      : commitModify with incorrect expiredTime
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
        */
         it('VIRTUALALBUM_SMARTALBUM_P_003010_036', 0, async function (done) {
            let testNo = 'VIRTUALALBUM_SMARTALBUM_P_003010_036';
            let inputExpiredTime = '';
            await commitModifyAbnormalExpiredTime(done, inputExpiredTime, testNo);
        });

        /**
        * @tc.number    : VIRTUALALBUM_SMARTALBUM_P_003010_037
        * @tc.name      : commitModify
        * @tc.desc      : commitModify with incorrect expiredTime
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
        */
         it('VIRTUALALBUM_SMARTALBUM_P_003010_037', 0, async function (done) {
            let testNo = 'VIRTUALALBUM_SMARTALBUM_P_003010_037';
            let inputExpiredTime = "str";
            await commitModifyAbnormalExpiredTime(done, inputExpiredTime, testNo);
        });

        /**
        * @tc.number    : VIRTUALALBUM_SMARTALBUM_P_003010_038
        * @tc.name      : commitModify
        * @tc.desc      : commitModify with incorrect expiredTime
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
        */
         it('VIRTUALALBUM_SMARTALBUM_P_003010_038', 0, async function (done) {
            let testNo = 'VIRTUALALBUM_SMARTALBUM_P_003010_038';
            let inputExpiredTime = "";
            await commitModifyAbnormalExpiredTime(done, inputExpiredTime, testNo);
        });

        /**
        * @tc.number    : VIRTUALALBUM_SMARTALBUM_P_003010_039
        * @tc.name      : commitModify
        * @tc.desc      : commitModify with incorrect expiredTime
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
        */
         it('VIRTUALALBUM_SMARTALBUM_P_003010_039', 0, async function (done) {
            let testNo = 'VIRTUALALBUM_SMARTALBUM_P_003010_039';
            let inputExpiredTime = [true,"abc",123];
            await commitModifyAbnormalExpiredTime(done, inputExpiredTime, testNo);
        });

        /**
        * @tc.number    : VIRTUALALBUM_SMARTALBUM_P_003010_041
        * @tc.name      : getFileAssets
        * @tc.desc      : getFileAssets with correct idOp
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
        */
         it('VIRTUALALBUM_SMARTALBUM_P_003010_041', 0, async function (done) {
            let testNo = 'VIRTUALALBUM_SMARTALBUM_P_003010_041';
            await getFileAssetsOne(done, imageFetchOp, constChildAlbumNameOne, constChildAlbumNameTwo, testNo);
        });

        /**
        * @tc.number    : VIRTUALALBUM_SMARTALBUM_P_003010_042
        * @tc.name      : getFileAssets
        * @tc.desc      : getFileAssets with incorrect idOp
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
        */
         it('VIRTUALALBUM_SMARTALBUM_P_003010_042', 0, async function (done) {
            let testNo = 'VIRTUALALBUM_SMARTALBUM_P_003010_042';
            let inputIdOp = null;
            await getFileAssetsOneAbnormal(done, imageFetchOp, inputIdOp, testNo);
        });

        /**
        * @tc.number    : VIRTUALALBUM_SMARTALBUM_P_003010_043
        * @tc.name      : getFileAssets
        * @tc.desc      : getFileAssets with incorrect idOp
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
        */
         it('VIRTUALALBUM_SMARTALBUM_P_003010_043', 0, async function (done) {
            let testNo = 'VIRTUALALBUM_SMARTALBUM_P_003010_043';
            let inputIdOp;
            await getFileAssetsOneAbnormal(done, imageFetchOp, inputIdOp, testNo);
        });

        /**
        * @tc.number    : VIRTUALALBUM_SMARTALBUM_P_003010_044
        * @tc.name      : getFileAssets
        * @tc.desc      : getFileAssets with incorrect idOp
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
        */
         it('VIRTUALALBUM_SMARTALBUM_P_003010_044', 0, async function (done) {
            let testNo = 'VIRTUALALBUM_SMARTALBUM_P_003010_044';
            let inputIdOp = Number.MAX_VALUE;
            await getFileAssetsOneAbnormal(done, imageFetchOp, inputIdOp, testNo);
        });

        /**
        * @tc.number    : VIRTUALALBUM_SMARTALBUM_P_003010_045
        * @tc.name      : getFileAssets
        * @tc.desc      : getFileAssets with incorrect idOp
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
        */
         it('VIRTUALALBUM_SMARTALBUM_P_003010_045', 0, async function (done) {
            let testNo = 'VIRTUALALBUM_SMARTALBUM_P_003010_045';
            let inputIdOp = Number.MIN_VALUE;
            await getFileAssetsOneAbnormal(done, imageFetchOp, inputIdOp, testNo);
        });

        /**
        * @tc.number    : VIRTUALALBUM_SMARTALBUM_P_003010_046
        * @tc.name      : getFileAssets
        * @tc.desc      : getFileAssets with incorrect idOp
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
        */
         it('VIRTUALALBUM_SMARTALBUM_P_003010_046', 0, async function (done) {
            let testNo = 'VIRTUALALBUM_SMARTALBUM_P_003010_046';
            let inputIdOp = Number.MAX_SAFE_INTEGER;
            await getFileAssetsOneAbnormal(done, imageFetchOp, inputIdOp, testNo);
        });

        /**
        * @tc.number    : VIRTUALALBUM_SMARTALBUM_P_003010_047
        * @tc.name      : getFileAssets
        * @tc.desc      : getFileAssets with incorrect idOp
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
        */
         it('VIRTUALALBUM_SMARTALBUM_P_003010_047', 0, async function (done) {
            let testNo = 'VIRTUALALBUM_SMARTALBUM_P_003010_047';
            let inputIdOp = 'c';
            await getFileAssetsOneAbnormal(done, imageFetchOp, inputIdOp, testNo);
        });

        /**
        * @tc.number    : VIRTUALALBUM_SMARTALBUM_P_003010_048
        * @tc.name      : getFileAssets
        * @tc.desc      : getFileAssets with incorrect idOp
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
        */
         it('VIRTUALALBUM_SMARTALBUM_P_003010_048', 0, async function (done) {
            let testNo = 'VIRTUALALBUM_SMARTALBUM_P_003010_048';
            let inputIdOp = '';
            await getFileAssetsOneAbnormal(done, imageFetchOp, inputIdOp, testNo);
        });

        /**
        * @tc.number    : VIRTUALALBUM_SMARTALBUM_P_003010_049
        * @tc.name      : getFileAssets
        * @tc.desc      : getFileAssets with incorrect idOp
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
        */
         it('VIRTUALALBUM_SMARTALBUM_P_003010_049', 0, async function (done) {
            let testNo = 'VIRTUALALBUM_SMARTALBUM_P_003010_049';
            let inputIdOp = "str";
            await getFileAssetsOneAbnormal(done, imageFetchOp, inputIdOp, testNo);
        });

        /**
        * @tc.number    : VIRTUALALBUM_SMARTALBUM_P_003010_050
        * @tc.name      : getFileAssets
        * @tc.desc      : getFileAssets with incorrect idOp
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
        */
         it('VIRTUALALBUM_SMARTALBUM_P_003010_050', 0, async function (done) {
            let testNo = 'VIRTUALALBUM_SMARTALBUM_P_003010_050';
            let inputIdOp = "";
            await getFileAssetsOneAbnormal(done, imageFetchOp, inputIdOp, testNo);
        });

        /**
        * @tc.number    : VIRTUALALBUM_SMARTALBUM_P_003010_051
        * @tc.name      : getFileAssets
        * @tc.desc      : getFileAssets with incorrect idOp
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
        */
         it('VIRTUALALBUM_SMARTALBUM_P_003010_051', 0, async function (done) {
            let testNo = 'VIRTUALALBUM_SMARTALBUM_P_003010_051';
            let inputIdOp = [true,"abc",123];
            await getFileAssetsOneAbnormal(done, imageFetchOp, inputIdOp, testNo);
        });

    });
}

