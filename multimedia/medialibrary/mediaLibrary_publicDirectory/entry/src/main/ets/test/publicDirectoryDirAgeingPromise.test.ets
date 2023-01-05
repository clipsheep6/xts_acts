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

import mediaLibrary from "@ohos.multimedia.mediaLibrary";

import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from "deccjsunit/index";

import { sleep } from "../../../../../../common";

let dirCamera = mediaLibrary.DirectoryType.DIR_CAMERA;
let dirVideo = mediaLibrary.DirectoryType.DIR_VIDEO;
let dirImage = mediaLibrary.DirectoryType.DIR_IMAGE;
let dirAudio = mediaLibrary.DirectoryType.DIR_AUDIO;
let dirDocuments = mediaLibrary.DirectoryType.DIR_DOCUMENTS;
let dirDownload = mediaLibrary.DirectoryType.DIR_DOWNLOAD;

let imageType = mediaLibrary.MediaType.IMAGE;
let videoType = mediaLibrary.MediaType.VIDEO;
let audioType = mediaLibrary.MediaType.AUDIO;
let fileType = mediaLibrary.MediaType.FILE;

export default function publicDirectoryDirAgeingPromise(abilityContext) {
    describe("publicDirectoryDirAgeingPromise", function () {
        const media = mediaLibrary.getMediaLibrary(abilityContext);
        beforeAll(async function () {
            console.info("beforeAll case");
        });
        beforeEach(function () {
            console.info("beforeEach case");
        });
        afterEach(async function () {
            console.info("afterEach case");
            await sleep();
        });
        afterAll(function () {
            console.info("afterAll case");
        });
  
        async function deleteAssetOneLevel(done, dirType, mediaType, mediaName, testNo) {
            let creatAsset1;
            try {
                const dirPath = await media.getPublicDirectory(dirType);
                creatAsset1 = await media.createAsset(mediaType, mediaName, dirPath);
                console.info(`${testNo} createAsset passed`);
            } catch (error) {
                console.info(`${testNo} failed, message: ${error}, error.code: ${error.code}`);
                expect(false).assertTrue();
                done();
            }
            try {
                await media.deleteAsset(creatAsset1.uri);
                console.info(`${testNo} delete passed`);
                let imageAlbumfetchOp = {
                    selections :'bucket_id = ?',
                    selectionArgs : [ (creatAsset1.parent).toString()],
                };
                const albumList = await media.getAlbums(imageAlbumfetchOp);
                expect(albumList.length == 0).assertTrue();
                done();
            } catch (error) {
                console.info(`${testNo} failed, message: ${error}, error.code: ${error.code}`);
                expect(false).assertTrue();
                done();
            }
        }

        async function deleteAssetMoreLevel(done, dirType, mediaType, mediaName, inputPath, testNo) {
            let creatAsset1;
            try {
                const dirPath = await media.getPublicDirectory(dirType);
                creatAsset1 = await media.createAsset(mediaType, mediaName, dirPath + inputPath);
            } catch (error) {
                console.info(`${testNo} failed, message: ${error}, error.code: ${error.code}`);
                expect(false).assertTrue();
                done();
            }
            try {
                await media.deleteAsset(creatAsset1.uri);
                let imageAlbumfetchOp = {
                    selections :'bucket_id = ?',
                    selectionArgs : [ (creatAsset1.parent).toString()],
                };
                const albumList = await media.getAlbums(imageAlbumfetchOp);
                expect(albumList.length == 0).assertTrue();
                done();
            } catch (error) {
                console.info(`${testNo} failed, message: ${error}, error.code: ${error.code}`);
                expect(false).assertTrue();
                done();
            }
        }
        
        async function OneLevelTwoFiles(done, dirType, mediaType, mediaNameOne, mediaNameTwo, testNo) {
            let creatAsset1;
            let creatAsset2; 
            try {
                const dirPath = await media.getPublicDirectory(dirType);
                creatAsset1 = await media.createAsset(mediaType, mediaNameOne, dirPath);
                creatAsset2 = await media.createAsset(mediaType, mediaNameTwo, dirPath);
                console.info(`${testNo} createAsset passed`);
            } catch (error) {
                console.info(`${testNo} failed, message: ${error}, error.code: ${error.code}`);
                expect(false).assertTrue();
                done();
            }
            try {
                await media.deleteAsset(creatAsset1.uri);
                console.info(`${testNo} delete passed`);
                let imageAlbumfetchOp = {
                    selections :'bucket_id = ?',
                    selectionArgs : [ (creatAsset1.parent).toString()],
                };
                const albumList = await media.getAlbums(imageAlbumfetchOp);
                console.info(`${testNo} , albumList.length: ${albumList.length}`);
                expect(albumList.length == 1).assertTrue();
                await media.deleteAsset(creatAsset2.uri);
                done();
            } catch (error) {
                console.info(`${testNo} failed, message: ${error}, error.code: ${error.code}`);
                expect(false).assertTrue();
                done();
            }
        }
        async function OneLevelTwoFilesAbnormal(done, dirType, mediaType, mediaNameOne, mediaNameTwo, testNo) {
            let creatAsset1;
            let creatAsset2; 
            try {
                const dirPath = await media.getPublicDirectory(dirType);
                creatAsset1 = await media.createAsset(mediaType, mediaNameOne, dirPath);
                creatAsset2 = await media.createAsset(mediaType, mediaNameTwo, dirPath);
                console.info(`${testNo} createAsset passed`);
            } catch (error) {
                console.info(`${testNo} failed, message: ${error}, error.code: ${error.code}`);
                expect(false).assertTrue();
                done();
            }
            try {
                await media.deleteAsset(creatAsset1.uri);
                console.info(`${testNo} delete passed`);
                let imageAlbumfetchOp = {
                    selections :'bucket_id = ?',
                    selectionArgs : [ (creatAsset1.parent).toString()],
                };
                const albumList = await media.getAlbums(imageAlbumfetchOp);
                console.info(`${testNo} , albumList.length: ${albumList.length}`);
                expect(albumList.length == 0).assertTrue();
                await media.deleteAsset(creatAsset2.uri);
                done();
            } catch (error) {
                console.info(`${testNo} failed, message: ${error}, error.code: ${error.code}`);
                expect(false).assertTrue();
                done();
            }
        }

        async function MoreLevelTwoFiles(done, 
                            dirType, mediaType, mediaNameOne, mediaNameTwo, inputPath, testNo) {
            let creatAsset1;
            let creatAsset2; 
            try {
                const dirPath = await media.getPublicDirectory(dirType);
                creatAsset1 = await media.createAsset(mediaType, mediaNameOne, dirPath + inputPath);
                creatAsset2 = await media.createAsset(mediaType, mediaNameTwo, dirPath + inputPath);
            } catch (error) {
                console.info(`${testNo} failed, message: ${error}, error.code: ${error.code}`);
                expect(false).assertTrue();
                done();
            }
            try {
                await media.deleteAsset(creatAsset1.uri);
                let imageAlbumfetchOp = {
                    selections :'bucket_id = ?',
                    selectionArgs : [ (creatAsset1.parent).toString()],
                };
                const albumList = await media.getAlbums(imageAlbumfetchOp);
                console.info(`${testNo} , albumList.length: ${albumList.length}`);
                expect(albumList.length == 1).assertTrue();
                await media.deleteAsset(creatAsset2.uri);
                done();
            } catch (error) {
                console.info(`${testNo} failed, message: ${error}, error.code: ${error.code}`);
                expect(false).assertTrue();
                done();
            }
        }

        async function MoreLevelTwoFilesAbnormal(done, 
                            dirType, mediaType, mediaNameOne, mediaNameTwo, inputPath, testNo) {
            let creatAsset1;
            let creatAsset2; 
            try {
                const dirPath = await media.getPublicDirectory(dirType);
                creatAsset1 = await media.createAsset(mediaType, mediaNameOne, dirPath + inputPath);
                creatAsset2 = await media.createAsset(mediaType, mediaNameTwo, dirPath + inputPath);
            } catch (error) {
                console.info(`${testNo} failed, message: ${error}, error.code: ${error.code}`);
                expect(false).assertTrue();
                done();
            }
            try {
                await media.deleteAsset(creatAsset1.uri);
                let imageAlbumfetchOp = {
                    selections :'bucket_id = ?',
                    selectionArgs : [ (creatAsset1.parent).toString()],
                };
                const albumList = await media.getAlbums(imageAlbumfetchOp);
                console.info(`${testNo} , albumList.length: ${albumList.length}`);
                expect(albumList.length == 0).assertTrue();
                await media.deleteAsset(creatAsset2.uri);
                done();
            } catch (error) {
                console.info(`${testNo} failed, message: ${error}, error.code: ${error.code}`);
                expect(false).assertTrue();
                done();
            }
        }
        
        /**
        * @tc.number  : SUB_MEDIA_GETPUBLICDIRECTORY_P_004_005_001
        * @tc.name	  : deleteAsset
        * @tc.desc	  : 1. create Camera/xxx.jpg
        *               2. delete Camera/xxx.jpg
        *               3. upper directory will been ageing
        * @tc.size	  : MEDIUM
        * @tc.type	  : Function
        * @tc.level	  : Level 0
        */
         it('SUB_MEDIA_GETPUBLICDIRECTORY_P_004_005_001', 0, async function (done) {
            const testNo = 'SUB_MEDIA_GETPUBLICDIRECTORY_P_004_005_001';
            const mediaName = `${new Date().getTime()}.jpg`;
            await deleteAssetOneLevel(done, dirCamera, imageType, mediaName, testNo)
        });

        /**
        * @tc.number  : SUB_MEDIA_GETPUBLICDIRECTORY_P_004_005_002
        * @tc.name	  : deleteAsset
        * @tc.desc	  : 1. create Camera/dirA/dirB/dirC/dirD/xxx.jpg
        *               2. delete Camera/dirA/dirB/dirC/dirD/xxx.jpg
        *               3. upper directory will been ageing
        * @tc.size	  : MEDIUM
        * @tc.type	  : Function
        * @tc.level	  : Level 0
        */
        it('SUB_MEDIA_GETPUBLICDIRECTORY_P_004_005_002', 0, async function (done) {
            const testNo = 'SUB_MEDIA_GETPUBLICDIRECTORY_P_004_005_002';
            const mediaName = `${new Date().getTime()}.jpg`;
            const inputPath = "dirA/dirB/dirC/dirD/P_004_005_002/"
            await deleteAssetMoreLevel(done, dirCamera, imageType, mediaName, inputPath, testNo)
        });

        /**
        * @tc.number  : SUB_MEDIA_GETPUBLICDIRECTORY_P_004_005_003
        * @tc.name 	  : deleteAsset
        * @tc.desc	  : 1. create Camera/xxx.jpg
        *               2. create Camera/P_004_005_003.jpg.jpg
        *               3. delete Camera/xxx.jpg
        *               4. upper directory will not been ageing
        * @tc.size 	  : MEDIUM
        * @tc.type 	  : Function
        * @tc.level	  : Level 0
        */
        it('SUB_MEDIA_GETPUBLICDIRECTORY_P_004_005_003', 0, async function (done) {
            const testNo = 'SUB_MEDIA_GETPUBLICDIRECTORY_P_004_005_003';
            const mediaNameOne = `${new Date().getTime()}.jpg`;
            const mediaNameTwo = `P_004_005_003.jpg`;
            await OneLevelTwoFiles(done, dirCamera, imageType, mediaNameOne, mediaNameTwo, testNo)
        });

        /**
        * @tc.number  : SUB_MEDIA_GETPUBLICDIRECTORY_P_004_005_004
        * @tc.name	  : deleteAsset
        * @tc.desc	  : 1. create Camera/dirA/dirB/dirC/dirD/P_004_005_004/xxx.jpg
        *               2. create Camera/dirA/dirB/dirC/dirD/P_004_005_004/P_004_005_004.jpg.jpg
        *               3. delete Camera/dirA/dirB/dirC/dirD/P_004_005_004/xxx.jpg
        *               4. upper directory will not been ageing
        * @tc.size	  : MEDIUM
        * @tc.type	  : Function
        * @tc.level	  : Level 0
        */
        it('SUB_MEDIA_GETPUBLICDIRECTORY_P_004_005_004', 0, async function (done) {
            const testNo = 'SUB_MEDIA_GETPUBLICDIRECTORY_P_004_005_004';
            const mediaNameOne = `${new Date().getTime()}.jpg`;
            const mediaNameTwo = `P_004_005_004.jpg`;
            const inputPath = "dirA/dirB/dirC/dirD/P_004_005_004/"
            await MoreLevelTwoFiles(done, 
                    dirCamera, imageType, mediaNameOne, mediaNameTwo, inputPath, testNo)
        });

        /**
        * @tc.number  : SUB_MEDIA_GETPUBLICDIRECTORY_P_004_005_005
        * @tc.name	  : deleteAsset
        * @tc.desc	  : delete Videos/xxx.mp4 success.
        *               delete upper directory
        *               current directory has one assert
        * @tc.size	  : MEDIUM
        * @tc.type	  : Function
        * @tc.level	  : Level 0
        */
        it('SUB_MEDIA_GETPUBLICDIRECTORY_P_004_005_005', 0, async function (done) {
            const testNo = 'SUB_MEDIA_GETPUBLICDIRECTORY_P_004_005_005';
            const mediaName = `${new Date().getTime()}.mp4`;
            await deleteAssetOneLevel(done, dirVideo, videoType, mediaName, testNo)
        });

        /**
        * @tc.number  : SUB_MEDIA_GETPUBLICDIRECTORY_P_004_005_006
        * @tc.name	  : deleteAsset
        * @tc.desc	  : delete Videos/dirA/dirB/dirC/dirD/xxx.mp4 success.
        *               delete upper directory
        *               current directory has one assert
        * @tc.size	  : MEDIUM
        * @tc.type	  : Function
        * @tc.level	  : Level 0
        */
        it('SUB_MEDIA_GETPUBLICDIRECTORY_P_004_005_006', 0, async function (done) {
            const testNo = 'SUB_MEDIA_GETPUBLICDIRECTORY_P_004_005_006';
            const mediaName = `${new Date().getTime()}.mp4`;
            const inputPath = "dirA/dirB/dirC/dirD/P_004_005_006/"
            await deleteAssetMoreLevel(done, dirVideo, videoType, mediaName, inputPath, testNo)
        });

        /**
        * @tc.number : SUB_MEDIA_GETPUBLICDIRECTORY_P_004_005_007
        * @tc.name 	 : deleteAsset
        * @tc.desc 	 : delete Videos/xxx.mp4 success.
        *              delete upper directory fail
        *              current directory has two asserts 
        * @tc.size 	 : MEDIUM
        * @tc.type 	 : Function
        * @tc.level	 : Level 0
        */
        it('SUB_MEDIA_GETPUBLICDIRECTORY_P_004_005_007', 0, async function (done) {
            const testNo = 'SUB_MEDIA_GETPUBLICDIRECTORY_P_004_005_007';
            const mediaNameOne = `${new Date().getTime()}.mp4`;
            const mediaNameTwo = `P_004_005_007.mp4`;
            await OneLevelTwoFiles(done, dirVideo, videoType, mediaNameOne, mediaNameTwo, testNo)
        });

        /**
        * @tc.number  : SUB_MEDIA_GETPUBLICDIRECTORY_P_004_005_008
        * @tc.name	  : deleteAsset
        * @tc.desc	  : delete Videos/dirA/dirB/dirC/dirD/xxx.mp4 success.
        *               delete upper directory fail
        *               current directory has two asserts 
        * @tc.size	  : MEDIUM
        * @tc.type	  : Function
        * @tc.level	  : Level 0
        */
        it('SUB_MEDIA_GETPUBLICDIRECTORY_P_004_005_008', 0, async function (done) {
            const testNo = 'SUB_MEDIA_GETPUBLICDIRECTORY_P_004_005_008';
            const mediaNameOne = `${new Date().getTime()}.mp4`;
            const mediaNameTwo = `P_004_005_008.mp4`;
            const inputPath = "dirA/dirB/dirC/dirD/P_004_005_008/"
            await MoreLevelTwoFiles(done, 
                        dirVideo, videoType, mediaNameOne, mediaNameTwo, inputPath, testNo)
        });

        /**
        * @tc.number  : SUB_MEDIA_GETPUBLICDIRECTORY_P_004_005_009
        * @tc.name	  : deleteAsset
        * @tc.desc	  : delete Pictures/xxx.jpg success.
        *               delete upper directory
        *               current directory has one assert
        * @tc.size	  : MEDIUM
        * @tc.type	  : Function
        * @tc.level	  : Level 0
        */
        it('SUB_MEDIA_GETPUBLICDIRECTORY_P_004_005_009', 0, async function (done) {
            const testNo = 'SUB_MEDIA_GETPUBLICDIRECTORY_P_004_005_009';
            const mediaName = `${new Date().getTime()}.jpg`;
            await deleteAssetOneLevel(done, dirImage, imageType, mediaName, testNo)
        });

        /**
        * @tc.number  : SUB_MEDIA_GETPUBLICDIRECTORY_P_004_005_010
        * @tc.name	  : deleteAsset
        * @tc.desc	  : delete Pictures/dirA/dirB/dirC/dirD/xxx.jpg success.
        *               delete upper directory
        *               current directory has one assert
        * @tc.size	  : MEDIUM
        * @tc.type	  : Function
        * @tc.level	  : Level 0
        */
        it('SUB_MEDIA_GETPUBLICDIRECTORY_P_004_005_010', 0, async function (done) {
            const testNo = 'SUB_MEDIA_GETPUBLICDIRECTORY_P_004_005_010';
            const mediaName = `${new Date().getTime()}.jpg`;
            const inputPath = "dirA/dirB/dirC/dirD/P_004_005_010/"
            await deleteAssetMoreLevel(done, dirImage, imageType, mediaName, inputPath, testNo)
        });

        /**
        * @tc.number : SUB_MEDIA_GETPUBLICDIRECTORY_P_004_005_011
        * @tc.name 	 : deleteAsset
        * @tc.desc 	 : delete Pictures/xxx.jpg success.
        *              delete upper directory fail
        *              current directory has two asserts
        * @tc.size 	 : MEDIUM
        * @tc.type 	 : Function
        * @tc.level	 : Level 0
        */
        it('SUB_MEDIA_GETPUBLICDIRECTORY_P_004_005_011', 0, async function (done) {
            const testNo = 'SUB_MEDIA_GETPUBLICDIRECTORY_P_004_005_011';
            const mediaNameOne = `${new Date().getTime()}.jpg`;
            const mediaNameTwo = `P_004_005_011.jpg`;
            await OneLevelTwoFiles(done, dirImage, imageType, mediaNameOne, mediaNameTwo, testNo)
        });

        /**
        * @tc.number  : SUB_MEDIA_GETPUBLICDIRECTORY_P_004_005_012
        * @tc.name	  : deleteAsset
        * @tc.desc	  : delete Pictures/dirA/dirB/dirC/dirD/xxx.jpg success.
        *               delete upper directory fail
        *               current directory has two asserts 
        * @tc.size	  : MEDIUM
        * @tc.type	  : Function
        * @tc.level	  : Level 0
        */
        it('SUB_MEDIA_GETPUBLICDIRECTORY_P_004_005_012', 0, async function (done) {
            const testNo = 'SUB_MEDIA_GETPUBLICDIRECTORY_P_004_005_012';
            const mediaNameOne = `${new Date().getTime()}.jpg`;
            const mediaNameTwo = `P_004_005_012.jpg`;
            const inputPath = "dirA/dirB/dirC/dirD/P_004_005_012/"
            await MoreLevelTwoFiles(done, 
                    dirImage, imageType, mediaNameOne, mediaNameTwo, inputPath, testNo)
        });

        /**
        * @tc.number  : SUB_MEDIA_GETPUBLICDIRECTORY_P_004_005_013
        * @tc.name	  : deleteAsset
        * @tc.desc	  : delete Audios/xxx.mp3 success.
        *               delete upper directory fail
        *               current directory has two asserts 
        * @tc.size	  : MEDIUMx
        * @tc.type	  : Function
        * @tc.level	  : Level 0
        */
        it('SUB_MEDIA_GETPUBLICDIRECTORY_P_004_005_013', 0, async function (done) {
            const testNo = 'SUB_MEDIA_GETPUBLICDIRECTORY_P_004_005_013';
            const mediaName = `${new Date().getTime()}.mp3`;
            await deleteAssetOneLevel(done, dirAudio, audioType, mediaName, testNo)
        });

        /**
        * @tc.number  : SUB_MEDIA_GETPUBLICDIRECTORY_P_004_005_014
        * @tc.name	  : deleteAsset
        * @tc.desc	  : delete Audios/dirA/dirB/dirC/dirD/xxx.mp3 success.
        *               delete upper directory
        *               current directory has one assert
        * @tc.size	  : MEDIUM
        * @tc.type	  : Function
        * @tc.level	  : Level 0
        */
        it('SUB_MEDIA_GETPUBLICDIRECTORY_P_004_005_014', 0, async function (done) {
            const testNo = 'SUB_MEDIA_GETPUBLICDIRECTORY_P_004_005_014';
            const mediaName = `${new Date().getTime()}.mp3`;
            const inputPath = "dirA/dirB/dirC/dirD/P_004_005_014/"
            await deleteAssetMoreLevel(done, dirAudio, audioType, mediaName, inputPath, testNo)
        });

        /**
        * @tc.number : SUB_MEDIA_GETPUBLICDIRECTORY_P_004_005_015
        * @tc.name 	 : deleteAsset
        * @tc.desc 	 : delete Audios/xxx.mp3 success.
        *              delete upper directory fail
        *              current directory has two asserts 
        * @tc.size 	 : MEDIUM
        * @tc.type 	 : Function
        * @tc.level	 : Level 0
        */
        it('SUB_MEDIA_GETPUBLICDIRECTORY_P_004_005_015', 0, async function (done) {
            const testNo = 'SUB_MEDIA_GETPUBLICDIRECTORY_P_004_005_015';
            const mediaNameOne = `${new Date().getTime()}.mp3`;
            const mediaNameTwo = `P_004_005_015.mp3`;
            await OneLevelTwoFiles(done, dirAudio, audioType, mediaNameOne, mediaNameTwo, testNo)
        });

        /**
        * @tc.number  : SUB_MEDIA_GETPUBLICDIRECTORY_P_004_005_016
        * @tc.name	  : deleteAsset
        * @tc.desc	  : delete Audios/dirA/dirB/dirC/dirD/xxx.mp3 success.
        *               delete upper directory fail
        *               current directory has two asserts 
        * @tc.size	  : MEDIUM
        * @tc.type	  : Function
        * @tc.level	  : Level 0
        */
        it('SUB_MEDIA_GETPUBLICDIRECTORY_P_004_005_016', 0, async function (done) {
            const testNo = 'SUB_MEDIA_GETPUBLICDIRECTORY_P_004_005_016';
            const mediaNameOne = `${new Date().getTime()}.mp3`;
            const mediaNameTwo = `P_004_005_016.mp3`;
            const inputPath = "dirA/dirB/dirC/dirD/P_004_005_016/"
            await MoreLevelTwoFiles(done, 
                    dirAudio, audioType, mediaNameOne, mediaNameTwo, inputPath, testNo)
        });

        /**
        * @tc.number : SUB_MEDIA_GETPUBLICDIRECTORY_P_004_005_017
        * @tc.name 	 : deleteAsset
        * @tc.desc 	 : delete Documents/xxx.dat success.
        *              delete upper directory fail
        *              current directory has two asserts
        * @tc.size 	 : MEDIUM
        * @tc.type 	 : Function
        * @tc.level	 : Level 0
        */
        it('SUB_MEDIA_GETPUBLICDIRECTORY_P_004_005_017', 0, async function (done) {
            const testNo = 'SUB_MEDIA_GETPUBLICDIRECTORY_P_004_005_017';
            const mediaNameOne = `${new Date().getTime()}.dat`;
            const mediaNameTwo = `P_004_005_017.dat`;
            await OneLevelTwoFilesAbnormal(done, dirDocuments, fileType, mediaNameOne, mediaNameTwo, testNo)
        });

        /**
        * @tc.number  : SUB_MEDIA_GETPUBLICDIRECTORY_P_004_005_018
        * @tc.name	  : deleteAsset
        * @tc.desc	  : delete Documents/dirA/dirB/dirC/dirD/xxx.dat success.
        *               delete upper directory fail
        *               current directory has two asserts 
        * @tc.size	  : MEDIUM
        * @tc.type	  : Function
        * @tc.level	  : Level 0
        */
        it('SUB_MEDIA_GETPUBLICDIRECTORY_P_004_005_018', 0, async function (done) {
            const testNo = 'SUB_MEDIA_GETPUBLICDIRECTORY_P_004_005_018';
            const mediaNameOne = `${new Date().getTime()}.dat`;
            const mediaNameTwo = `004_005_018.dat`;
            const inputPath = "dirA/dirB/dirC/dirD/P_004_005_018/"
            await MoreLevelTwoFilesAbnormal(done, 
                    dirDocuments, fileType, mediaNameOne, mediaNameTwo, inputPath, testNo)
        });

        /**
        * @tc.number  : SUB_MEDIA_GETPUBLICDIRECTORY_P_004_005_019
        * @tc.name	  : deleteAsset
        * @tc.desc	  : delete Download/xxx.png success.
        *               delete upper directory
        *               current directory has one assert
        * @tc.size	  : MEDIUM
        * @tc.type	  : Function
        * @tc.level	  : Level 0
        */
        it('SUB_MEDIA_GETPUBLICDIRECTORY_P_004_005_019', 0, async function (done) {
            const testNo = 'SUB_MEDIA_GETPUBLICDIRECTORY_P_004_005_019';
            const mediaName = `P_004_005_019.png`;
            await deleteAssetOneLevel(done, dirDownload, imageType, mediaName, testNo)
            
        });

        /**
        * @tc.number  : SUB_MEDIA_GETPUBLICDIRECTORY_P_004_005_020
        * @tc.name	  : deleteAsset
        * @tc.desc	  : delete Download/dirA/dirB/dirC/dirD/xxx.png success.
        *               delete upper directory
        *               current directory has one assert
        * @tc.size	  : MEDIUM
        * @tc.type	  : Function
        * @tc.level	  : Level 0
        */
        it('SUB_MEDIA_GETPUBLICDIRECTORY_P_004_005_020', 0, async function (done) {
            const testNo = 'SUB_MEDIA_GETPUBLICDIRECTORY_P_004_005_020';
            const mediaName = `${new Date().getTime()}.png`;
            const inputPath = "dirA/dirB/dirC/dirD/P_004_005_020/"
            await deleteAssetMoreLevel(done, dirDownload, imageType, mediaName, inputPath, testNo)
        });

        /**
        * @tc.number : SUB_MEDIA_GETPUBLICDIRECTORY_P_004_005_021
        * @tc.name 	 : deleteAsset
        * @tc.desc 	 : delete Download/xxx.png success.
        *              delete upper directory fail
        *              current directory has two asserts
        * @tc.size 	 : MEDIUM
        * @tc.type 	 : Function
        * @tc.level	 : Level 0
        */
        it('SUB_MEDIA_GETPUBLICDIRECTORY_P_004_005_021', 0, async function (done) {
            const testNo = 'SUB_MEDIA_GETPUBLICDIRECTORY_P_004_005_021';
            const mediaNameOne = `${new Date().getTime()}.png`;
            const mediaNameTwo = `P_004_005_021.png`;
            await OneLevelTwoFiles(done, dirDownload, imageType, mediaNameOne, mediaNameTwo, testNo)
        });

        /**
        * @tc.number  : SUB_MEDIA_GETPUBLICDIRECTORY_P_004_005_022
        * @tc.name	  : deleteAsset
        * @tc.desc	  : delete Download/dirA/dirB/dirC/dirD/xxx.png success.
        *               delete upper directory fail
        *               current directory has two asserts
        * @tc.size	  : MEDIUM
        * @tc.type	  : Function
        * @tc.level	  : Level 0
        */
        it('SUB_MEDIA_GETPUBLICDIRECTORY_P_004_005_022', 0, async function (done) {
            const testNo = 'SUB_MEDIA_GETPUBLICDIRECTORY_P_004_005_022';
            const mediaNameOne = `P_004_005_022_1.png`;
            const mediaNameTwo = `P_004_005_022-2.png`;
            const inputPath = "dirA/dirB/dirC/dirD/P_004_005_022/"
            await MoreLevelTwoFiles(done, 
                    dirDownload, imageType, mediaNameOne, mediaNameTwo, inputPath, testNo)
        });
    });
}
