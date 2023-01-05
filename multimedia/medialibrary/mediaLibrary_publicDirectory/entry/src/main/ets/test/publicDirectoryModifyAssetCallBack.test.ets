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

import {
    sleep,
} from "../../../../../../common";

let DATA_ABILITY_CHECK_MEDIATYPE_MATCH_EXTENSION_FAIL = -2004;
let DATA_ABILITY_CHECK_MEDIATYPE_FAIL = -2002;

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

export default function publicDirectoryModifyAssetCallBack(abilityContext) {
    describe("publicDirectoryModifyAssetCallBack", function () {
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

        async function ModifyAssetCallBack(done, 
                        dirType, mediaType, mediaName, displayName, relativePath, testNo) {
            try {
                const dirPath = await media.getPublicDirectory(dirType);
                const creatAsset1 = await media.createAsset(mediaType, mediaName, dirPath);
                creatAsset1.displayName = displayName;
                creatAsset1.relativePath = relativePath;
                creatAsset1.commitModify(async () => {
                    let modifyfetchOp = {
                        selections :'file_id = ?',
                        selectionArgs : [ (creatAsset1.id).toString()],
                    };
                    const fetchFileResult = await media.getFileAssets(modifyfetchOp);
                    const assetmodify = await fetchFileResult.getFirstObject();
                    console.info(`${testNo} , assetmodify.displayName: ${assetmodify.displayName}`);
                    console.info(`${testNo} , assetmodify.relativePath: ${assetmodify.relativePath}`);
                    if((assetmodify.displayName == displayName) &&
                         (assetmodify.relativePath == relativePath)){
                        expect(true).assertTrue();
                        fetchFileResult.close();
                        done();
                    }else{
                        expect(false).assertTrue();
                        fetchFileResult.close();
                        done();
                    }
                });
            } catch (error) {
                console.info(`${testNo} failed, message: ${error}, error.code: ${error.code}`);
                expect(false).assertTrue();
                done();
            }
        }

        async function ModifyAssetAbnormalWithRelativePathCallBack(done, 
                        dirType, mediaType, mediaName, relativePath, errorNo, testNo) {
            try {
                const dirPath = await media.getPublicDirectory(dirType);
                const creatAsset1 = await media.createAsset(mediaType, mediaName, dirPath);
                creatAsset1.relativePath = relativePath;
                creatAsset1.commitModify(async () => {
                    let modifyfetchOp = {
                        selections :'file_id = ?',
                        selectionArgs : [ (creatAsset1.id).toString()],
                    };
                    const fetchFileResult = await media.getFileAssets(modifyfetchOp);
                    const assetmodify = await fetchFileResult.getFirstObject();
                    if (assetmodify.relativePath == relativePath) {
                        expect(false).assertTrue();
                        fetchFileResult.close();
                        done();
                    }else{
                        expect(true).assertTrue();
                        fetchFileResult.close();
                        done();
                    }
                });
            } catch (error) {
                console.info(`${testNo} pass, message: ${error}, error.code: ${error.code}`);
                expect(errorNo == error.code).assertTrue();
                done();
            }
        }

        async function ModifyAssetAbnormalWithDisplayNameCallBack(done, 
                        dirType, mediaType, mediaName, displayName, errorNo, testNo) {
            try {
                const dirPath = await media.getPublicDirectory(dirType);
                const creatAsset1 = await media.createAsset(mediaType, mediaName, dirPath);
                creatAsset1.displayName = displayName;
                creatAsset1.commitModify(async () => {
                    let modifyfetchOp = {
                        selections :'file_id = ?',
                        selectionArgs : [ (creatAsset1.id).toString()],
                    };
                    const fetchFileResult = await media.getFileAssets(modifyfetchOp);
                    const assetmodify = await fetchFileResult.getFirstObject();
                    if (assetmodify.displayName == displayName) {
                        expect(false).assertTrue();
                        fetchFileResult.close();
                        done();
                    }else{
                        expect(true).assertTrue();
                        fetchFileResult.close();
                        done();
                    }
                });
            } catch (error) {
                console.info(`${testNo} passed, message: ${error}, error.code: ${error.code}`);
                expect(errorNo == error.code).assertTrue();
                done();
            }
        }

        /**
        * @tc.number : SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_001
        * @tc.name 	 : createAsset
        * @tc.desc 	 : modify asset displayname with correct value in Camera
        * @tc.size 	 : MEDIUM
        * @tc.type 	 : Function
        * @tc.level	 : Level 0
        */
        it('SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_001', 0, async function (done) {
            const testNo = 'SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_001';
            const mediaName = `${new Date().getTime()}.jpg`;
            const displayName = 'C_002_001.jpg';
            const relativePath = 'Camera/';
            await ModifyAssetCallBack(done, 
                    dirCamera, imageType, mediaName, displayName, relativePath, testNo)
        });

        /**
        * @tc.number : SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_002
        * @tc.name 	 : createAsset
        * @tc.desc 	 : modify asset displayname with correct value in Camera
        * @tc.size 	 : MEDIUM
        * @tc.type 	 : Function
        * @tc.level	 : Level 0
        */
        it('SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_002', 0, async function (done) {
            const testNo = 'SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_002';
            const mediaName = `${new Date().getTime()}.mp4`;
            const displayName = 'C_002_002.mp4';
            const relativePath = 'Camera/';
            await ModifyAssetCallBack(done, 
                    dirCamera, videoType, mediaName, displayName, relativePath, testNo)
        });

        /**
        * @tc.number : SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_003
        * @tc.name 	 : createAsset
        * @tc.desc 	 : modify asset displayname with correct value in Videos
        * @tc.size 	 : MEDIUM
        * @tc.type 	 : Function
        * @tc.level	 : Level 0
        */
        it('SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_003', 0, async function (done) {
            const testNo = 'SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_003';
            const mediaName = `${new Date().getTime()}.mp4`;
            const displayName = 'C_002_003.mp4';
            const relativePath = 'Videos/';
            await ModifyAssetCallBack(done, 
                    dirVideo, videoType, mediaName, displayName, relativePath, testNo)
        });

        /**
        * @tc.number : SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_004
        * @tc.name 	 : createAsset
        * @tc.desc 	 : modify asset displayname with correct value in Pictures
        * @tc.size 	 : MEDIUM
        * @tc.type 	 : Function
        * @tc.level	 : Level 0
        */
        it('SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_004', 0, async function (done) {
            const testNo = 'SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_004';
            const mediaName = `${new Date().getTime()}.jpg`;
            const displayName = 'C_002_004.jpg';
            const relativePath = 'Pictures/';
            await ModifyAssetCallBack(done, 
                    dirImage, imageType, mediaName, displayName, relativePath, testNo)
        });

        /**
        * @tc.number : SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_005
        * @tc.name 	 : createAsset
        * @tc.desc 	 : modify asset displayname with correct value in Audios
        * @tc.size 	 : MEDIUM
        * @tc.type 	 : Function
        * @tc.level	 : Level 0
        */
        it('SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_005', 0, async function (done) {
            const testNo = 'SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_005';
            const mediaName = `${new Date().getTime()}.mp3`;
            const displayName = 'C_002_005.mp3';
            const relativePath = 'Audios/';
            await ModifyAssetCallBack(done, 
                    dirAudio, audioType, mediaName, displayName, relativePath, testNo)
        });

        /**
        * @tc.number : SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_006
        * @tc.name 	 : createAsset
        * @tc.desc 	 : modify asset displayname with correct value in Documents
        * @tc.size 	 : MEDIUM
        * @tc.type 	 : Function
        * @tc.level	 : Level 0
        */
        it('SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_006', 0, async function (done) {
            const testNo = 'SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_006';
            const mediaName = `${new Date().getTime()}.dat`;
            const displayName = 'C_002_006.dat';
            const relativePath = 'Documents/';
            await ModifyAssetCallBack(done, 
                    dirDocuments, fileType, mediaName, displayName, relativePath, testNo)
        });

        /**
        * @tc.number : SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_007
        * @tc.name 	 : createAsset
        * @tc.desc 	 : modify asset displayname with correct value in Download
        * @tc.size 	 : MEDIUM
        * @tc.type 	 : Function
        * @tc.level	 : Level 0
        */
        it('SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_007', 0, async function (done) {
            const testNo = 'SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_007';
            const mediaName = `${new Date().getTime()}.txt`;
            const displayName = 'C_002_007.txt';
            const relativePath = 'Download/';
            await ModifyAssetCallBack(done, 
                    dirDownload, fileType, mediaName, displayName, relativePath, testNo)
        });

        /**
        * @tc.number : SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_008
        * @tc.name 	 : createAsset
        * @tc.desc 	 : modify asset relativepath with incorrect value in DIR_CAMERA
        * @tc.size 	 : MEDIUM
        * @tc.type 	 : Function
        * @tc.level	 : Level 0
        */
        it('SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_008', 0, async function (done) {
            const testNo = 'SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_008';
            const mediaName = `${new Date().getTime()}.jpg`;
            const relativePath = 'Audios/';
            const errorNo = DATA_ABILITY_CHECK_MEDIATYPE_FAIL;
            await ModifyAssetAbnormalWithRelativePathCallBack(done, 
                    dirCamera, imageType, mediaName, relativePath, errorNo, testNo)
        });

        /**
        * @tc.number : SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_009
        * @tc.name 	 : createAsset
        * @tc.desc 	 : modify asset relativepath with incorrect value in DIR_CAMERA
        * @tc.size 	 : MEDIUM
        * @tc.type 	 : Function
        * @tc.level	 : Level 0
        */
        it('SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_009', 0, async function (done) {
            const testNo = 'SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_009';
            const mediaName = `${new Date().getTime()}.mp4`;
            const displayName = 'C_002_009.mp4';
            const relativePath = 'Videos/';
            await ModifyAssetCallBack(done, 
                    dirCamera, videoType, mediaName, displayName, relativePath, testNo)
        });

        /**
        * @tc.number : SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_010
        * @tc.name 	 : createAsset
        * @tc.desc 	 : modify asset relativepath with incorrect value in DIR_CAMERA
        * @tc.size 	 : MEDIUM
        * @tc.type 	 : Function
        * @tc.level	 : Level 0
        */
        it('SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_010', 0, async function (done) {
            const testNo = 'SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_010';
            const mediaName = `${new Date().getTime()}.mp4`;
            const displayName = 'C_002_010.mp4';
            const relativePath = 'Download/';
            await ModifyAssetCallBack(done, 
                    dirCamera, videoType, mediaName, displayName, relativePath, testNo)
        });

        /**
        * @tc.number : SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_011
        * @tc.name 	 : createAsset
        * @tc.desc 	 : modify asset relativepath with incorrect value in DIR_CAMERA
        * @tc.size 	 : MEDIUM
        * @tc.type 	 : Function
        * @tc.level	 : Level 0
        */
        it('SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_011', 0, async function (done) {
            const testNo = 'SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_011';
            const mediaName = `${new Date().getTime()}.jpg`;
            const displayName = 'C_002_011.jpg';
            const relativePath = 'Pictures/';
            await ModifyAssetCallBack(done, 
                    dirCamera, imageType, mediaName, displayName, relativePath, testNo)
        });

        /**
        * @tc.number : SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_012
        * @tc.name 	 : createAsset
        * @tc.desc 	 : modify asset relativepath with incorrect value in DIR_CAMERA
        * @tc.size 	 : MEDIUM
        * @tc.type 	 : Function
        * @tc.level	 : Level 0
        */
        it('SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_012', 0, async function (done) {
            const testNo = 'SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_012';
            const mediaName = `${new Date().getTime()}.jpg`;
            const displayName = 'C_002_012.jpg';
            const relativePath = 'Download/';
            await ModifyAssetCallBack(done, 
                    dirCamera, imageType, mediaName, displayName, relativePath, testNo)
        });

        /**
        * @tc.number : SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_013
        * @tc.name 	 : createAsset
        * @tc.desc 	 : modify asset relativepath with incorrect value in DIR_VIDEO
        * @tc.size 	 : MEDIUM
        * @tc.type 	 : Function
        * @tc.level	 : Level 0
        */
        it('SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_013', 0, async function (done) {
            const testNo = 'SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_013';
            const mediaName = `${new Date().getTime()}.mp4`;
            const relativePath = 'Pictures/';
            const errorNo = DATA_ABILITY_CHECK_MEDIATYPE_FAIL;
            await ModifyAssetAbnormalWithRelativePathCallBack(done, 
                    dirVideo, videoType, mediaName, relativePath, errorNo, testNo)
        });

        /**
        * @tc.number : SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_014
        * @tc.name 	 : createAsset
        * @tc.desc 	 : modify asset relativepath with incorrect value in DIR_VIDEO
        * @tc.size 	 : MEDIUM
        * @tc.type 	 : Function
        * @tc.level	 : Level 0
        */
        it('SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_014', 0, async function (done) {
            const testNo = 'SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_014';
            const mediaName = `${new Date().getTime()}.mp4`;
            const relativePath = 'Audios/';
            const errorNo = DATA_ABILITY_CHECK_MEDIATYPE_FAIL;
            await ModifyAssetAbnormalWithRelativePathCallBack(done, 
                dirVideo, videoType, mediaName, relativePath, errorNo, testNo)
        });

        /**
        * @tc.number : SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_015
        * @tc.name 	 : createAsset
        * @tc.desc 	 : modify asset relativepath with incorrect value in DIR_VIDEO
        * @tc.size 	 : MEDIUM
        * @tc.type 	 : Function
        * @tc.level	 : Level 0
        */
        it('SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_015', 0, async function (done) {
            const testNo = 'SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_015';
            const mediaName = `${new Date().getTime()}.mp4`;
            const displayName = 'C_002_015.mp4';
            const relativePath = 'Camera/';
            await ModifyAssetCallBack(done, 
                    dirVideo, videoType, mediaName, displayName, relativePath, testNo)
        });

        /**
        * @tc.number : SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_016
        * @tc.name 	 : createAsset
        * @tc.desc 	 : modify asset relativepath with incorrect value in DIR_VIDEO
        * @tc.size 	 : MEDIUM
        * @tc.type 	 : Function
        * @tc.level	 : Level 0
        */
        it('SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_016', 0, async function (done) {
            const testNo = 'SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_016';
            const mediaName = `${new Date().getTime()}.mp4`;
            const displayName = 'C_002_016.mp4';
            const relativePath = 'Download/';
            await ModifyAssetCallBack(done, 
                    dirVideo, videoType, mediaName, displayName, relativePath, testNo)
        });

        /**
        * @tc.number : SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_017
        * @tc.name 	 : createAsset
        * @tc.desc 	 : modify asset relativepath with incorrect value in DIR_IMAGE
        * @tc.size 	 : MEDIUM
        * @tc.type 	 : Function
        * @tc.level	 : Level 0
        */
        it('SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_017', 0, async function (done) {
            const testNo = 'SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_017';
            const mediaName = `${new Date().getTime()}.jpg`;
            const relativePath = 'Videos/';
            const errorNo = DATA_ABILITY_CHECK_MEDIATYPE_FAIL;
            await ModifyAssetAbnormalWithRelativePathCallBack(done, 
                    dirImage, imageType, mediaName, relativePath, errorNo, testNo)
        });

        /**
        * @tc.number : SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_018
        * @tc.name 	 : createAsset
        * @tc.desc 	 : modify asset relativepath with incorrect value in DIR_IMAGE
        * @tc.size 	 : MEDIUM
        * @tc.type 	 : Function
        * @tc.level	 : Level 0
        */
        it('SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_018', 0, async function (done) {
            const testNo = 'SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_018';
            const mediaName = `C_002_018.jpg`;
            const relativePath = 'Audios/';
            const errorNo = DATA_ABILITY_CHECK_MEDIATYPE_FAIL;
            await ModifyAssetAbnormalWithRelativePathCallBack(done, 
                    dirImage, imageType, mediaName, relativePath, errorNo, testNo)
        });

        /**
        * @tc.number : SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_019
        * @tc.name 	 : createAsset
        * @tc.desc 	 : modify asset relativepath with incorrect value in DIR_IMAGE
        * @tc.size 	 : MEDIUM
        * @tc.type 	 : Function
        * @tc.level	 : Level 0
        */
        it('SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_019', 0, async function (done) {
            const testNo = 'SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_019';
            const mediaName = `${new Date().getTime()}.jpg`;
            const displayName = 'C_002_019.jpg';
            const relativePath = 'Camera/';
            await ModifyAssetCallBack(done, 
                    dirImage, imageType, mediaName, displayName, relativePath, testNo)
        });

        /**
        * @tc.number : SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_020
        * @tc.name 	 : createAsset
        * @tc.desc 	 : modify asset relativepath with incorrect value in DIR_IMAGE
        * @tc.size 	 : MEDIUM
        * @tc.type 	 : Function
        * @tc.level	 : Level 0
        */
        it('SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_020', 0, async function (done) {
            const testNo = 'SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_020';
            const mediaName = `${new Date().getTime()}.jpg`;
            const displayName = 'C_002_020.jpg';
            const relativePath = 'Download/';
            await ModifyAssetCallBack(done, 
                    dirImage, imageType, mediaName, displayName, relativePath, testNo)
        });

        /**
        * @tc.number : SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_021
        * @tc.name 	 : createAsset
        * @tc.desc 	 : modify asset relativepath with incorrect value in DIR_AUDIO
        * @tc.size 	 : MEDIUM
        * @tc.type 	 : Function
        * @tc.level	 : Level 0
        */
        it('SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_021', 0, async function (done) {
            const testNo = 'SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_021';
            const mediaName = `${new Date().getTime()}.mp3`;
            const relativePath = 'Camera/';
            const errorNo = DATA_ABILITY_CHECK_MEDIATYPE_FAIL;
            await ModifyAssetAbnormalWithRelativePathCallBack(done, 
                    dirAudio, audioType, mediaName, relativePath, errorNo, testNo)
        });

        /**
        * @tc.number : SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_022
        * @tc.name 	 : createAsset
        * @tc.desc 	 : modify asset relativepath with incorrect value in DIR_AUDIO
        * @tc.size 	 : MEDIUM
        * @tc.type 	 : Function
        * @tc.level	 : Level 0
        */
        it('SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_022', 0, async function (done) {
            const testNo = 'SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_022';
            const mediaName = `${new Date().getTime()}.mp3`;
            const relativePath = 'Videos/';
            const errorNo = DATA_ABILITY_CHECK_MEDIATYPE_FAIL;
            await ModifyAssetAbnormalWithRelativePathCallBack(done, 
                    dirAudio, audioType, mediaName, relativePath, errorNo, testNo)
        });

        /**
        * @tc.number : SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_023
        * @tc.name 	 : createAsset
        * @tc.desc 	 : modify asset relativepath with incorrect value in DIR_AUDIO
        * @tc.size 	 : MEDIUM
        * @tc.type 	 : Function
        * @tc.level	 : Level 0
        */
        it('SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_023', 0, async function (done) {
            const testNo = 'SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_023';
            const mediaName = `${new Date().getTime()}.mp3`;
            const relativePath = 'Pictures/';
            const errorNo = DATA_ABILITY_CHECK_MEDIATYPE_FAIL;
            await ModifyAssetAbnormalWithRelativePathCallBack(done, 
                    dirAudio, audioType, mediaName, relativePath, errorNo, testNo)
        });

        /**
        * @tc.number : SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_024
        * @tc.name 	 : createAsset
        * @tc.desc 	 : modify asset relativepath with correct value in DIR_AUDIO
        * @tc.size 	 : MEDIUM
        * @tc.type 	 : Function
        * @tc.level	 : Level 0
        */
        it('SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_024', 0, async function (done) {
            const testNo = 'SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_024';
            const mediaName = `${new Date().getTime()}.mp3`;
            const displayName = 'C_002_024.mp3';
            const relativePath = 'Download/';
            await ModifyAssetCallBack(done, dirAudio, audioType, mediaName, displayName, relativePath, testNo)
        });
        
        /**
        * @tc.number : SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_025
        * @tc.name 	 : createAsset
        * @tc.desc 	 : modify asset relativepath with incorrect value in DIR_DOCUMENTS
        * @tc.size 	 : MEDIUM
        * @tc.type 	 : Function
        * @tc.level	 : Level 0
        */
         it('SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_025', 0, async function (done) {
            const testNo = 'SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_025';
            const mediaName = `${new Date().getTime()}.dat`;
            const relativePath = 'Camera/';
            const errorNo = DATA_ABILITY_CHECK_MEDIATYPE_FAIL;
            await ModifyAssetAbnormalWithRelativePathCallBack(done, 
                    dirDocuments, fileType, mediaName, relativePath, errorNo, testNo)
        });

        /**
        * @tc.number : SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_026
        * @tc.name 	 : createAsset
        * @tc.desc 	 : modify asset relativepath with incorrect value in DIR_DOCUMENTS
        * @tc.size 	 : MEDIUM
        * @tc.type 	 : Function
        * @tc.level	 : Level 0
        */
        it('SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_026', 0, async function (done) {
            const testNo = 'SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_026';
            const mediaName = `${new Date().getTime()}.dat`;
            const relativePath = 'Videos/';
            const errorNo = DATA_ABILITY_CHECK_MEDIATYPE_FAIL;
            await ModifyAssetAbnormalWithRelativePathCallBack(done, 
                    dirDocuments, fileType, mediaName, relativePath, errorNo, testNo)
        });

        /**
        * @tc.number : SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_027
        * @tc.name 	 : createAsset
        * @tc.desc 	 : modify asset relativepath with incorrect value in DIR_DOCUMENTS
        * @tc.size 	 : MEDIUM
        * @tc.type 	 : Function
        * @tc.level	 : Level 0
        */
        it('SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_027', 0, async function (done) {
            const testNo = 'SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_027';
            const mediaName = `${new Date().getTime()}.dat`;
            const relativePath = 'Pictures/';
            const errorNo = DATA_ABILITY_CHECK_MEDIATYPE_FAIL;
            await ModifyAssetAbnormalWithRelativePathCallBack(done, 
                    dirDocuments, fileType, mediaName, relativePath, errorNo, testNo)
        });

        /**
        * @tc.number : SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_028
        * @tc.name 	 : createAsset
        * @tc.desc 	 : modify asset relativepath with incorrect value in DIR_DOCUMENTS
        * @tc.size 	 : MEDIUM
        * @tc.type 	 : Function
        * @tc.level	 : Level 0
        */
        it('SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_028', 0, async function (done) {
            const testNo = 'SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_028';
            const mediaName = `${new Date().getTime()}.dat`;
            const relativePath = 'Audios/';
            const errorNo = DATA_ABILITY_CHECK_MEDIATYPE_FAIL;
            await ModifyAssetAbnormalWithRelativePathCallBack(done, 
                    dirDocuments, fileType, mediaName, relativePath, errorNo, testNo)
        });

        /**
        * @tc.number : SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_029
        * @tc.name 	 : createAsset
        * @tc.desc 	 : modify asset relativepath with correct value in DIR_DOCUMENTS
        * @tc.size 	 : MEDIUM
        * @tc.type 	 : Function
        * @tc.level	 : Level 0
        */
        it('SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_029', 0, async function (done) {
            const testNo = 'SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_029';
            const mediaName = `${new Date().getTime()}.dat`;
            const displayName = 'C_002_029.dat';
            const relativePath = 'Download/';
            await ModifyAssetCallBack(done, dirDocuments, fileType, mediaName, displayName, relativePath, testNo)
        });

        /**
        * @tc.number : SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_030
        * @tc.name 	 : createAsset
        * @tc.desc 	 : modify asset displayname with incorrect value in DIR_CAMERA
        * @tc.size 	 : MEDIUM
        * @tc.type 	 : Function
        * @tc.level	 : Level 0
        */
        it('SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_030', 0, async function (done) {
            const testNo = 'SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_030';
            const mediaName = `${new Date().getTime()}.jpg`;
            const displayName = 'C_002_030.mp3';
            const errorNo = DATA_ABILITY_CHECK_MEDIATYPE_MATCH_EXTENSION_FAIL;
            await ModifyAssetAbnormalWithDisplayNameCallBack(done, 
                    dirCamera, imageType, mediaName, displayName, errorNo, testNo)
        });

        /**
        * @tc.number : SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_031
        * @tc.name 	 : createAsset
        * @tc.desc 	 : modify asset displayname with incorrect value in DIR_CAMERA
        * @tc.size 	 : MEDIUM
        * @tc.type 	 : Function
        * @tc.level	 : Level 0
        */
        it('SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_031', 0, async function (done) {
            const testNo = 'SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_031';
            const mediaName = `${new Date().getTime()}.jpg`;
            const displayName = 'C_002_031.txt';
            const errorNo = DATA_ABILITY_CHECK_MEDIATYPE_MATCH_EXTENSION_FAIL;
            await ModifyAssetAbnormalWithDisplayNameCallBack(done, 
                    dirCamera, imageType, mediaName, displayName, errorNo, testNo)
        });

        /**
        * @tc.number : SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_032
        * @tc.name 	 : createAsset
        * @tc.desc 	 : modify asset displayname with incorrect value in DIR_VIDEO
        * @tc.size 	 : MEDIUM
        * @tc.type 	 : Function
        * @tc.level	 : Level 0
        */
        it('SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_032', 0, async function (done) {
            const testNo = 'SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_032';
            const mediaName = `${new Date().getTime()}.mp4`;
            const displayName = 'C_002_032.jpg';
            const errorNo = DATA_ABILITY_CHECK_MEDIATYPE_MATCH_EXTENSION_FAIL;
            await ModifyAssetAbnormalWithDisplayNameCallBack(done, 
                    dirVideo, videoType, mediaName, displayName, errorNo, testNo)
        });

        /**
        * @tc.number : SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_033
        * @tc.name 	 : createAsset
        * @tc.desc 	 : modify asset displayname with incorrect value in DIR_VIDEO
        * @tc.size 	 : MEDIUM
        * @tc.type 	 : Function
        * @tc.level	 : Level 0
        */
        it('SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_033', 0, async function (done) {
            const testNo = 'SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_033';
            const mediaName = `${new Date().getTime()}.mp4`;
            const displayName = 'C_002_033.mp3';
            const errorNo = DATA_ABILITY_CHECK_MEDIATYPE_MATCH_EXTENSION_FAIL;
            await ModifyAssetAbnormalWithDisplayNameCallBack(done, 
                    dirVideo, videoType, mediaName, displayName, errorNo, testNo)
        });

        /**
        * @tc.number : SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_034
        * @tc.name 	 : createAsset
        * @tc.desc 	 : modify asset displayname with incorrect value in DIR_VIDEO
        * @tc.size 	 : MEDIUM
        * @tc.type 	 : Function
        * @tc.level	 : Level 0
        */
            it('SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_034', 0, async function (done) {
            const testNo = 'SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_034';
            const mediaName = `${new Date().getTime()}.mp4`;
            const displayName = 'C_002_034.txt';
            const errorNo = DATA_ABILITY_CHECK_MEDIATYPE_MATCH_EXTENSION_FAIL;
            await ModifyAssetAbnormalWithDisplayNameCallBack(done, 
                    dirVideo, videoType, mediaName, displayName, errorNo, testNo)
        });

        /**
        * @tc.number : SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_035
        * @tc.name 	 : createAsset
        * @tc.desc 	 : modify asset displayname with incorrect value in DIR_IMAGE
        * @tc.size 	 : MEDIUM
        * @tc.type 	 : Function
        * @tc.level	 : Level 0
        */
        it('SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_035', 0, async function (done) {
            const testNo = 'SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_035';
            const mediaName = `${new Date().getTime()}.jpg`;
            const displayName = 'C_002_035.mp4';
            const errorNo = DATA_ABILITY_CHECK_MEDIATYPE_MATCH_EXTENSION_FAIL;
            await ModifyAssetAbnormalWithDisplayNameCallBack(done, 
                    dirImage, imageType, mediaName, displayName, errorNo, testNo)
        });

        /**
        * @tc.number : SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_036
        * @tc.name 	 : createAsset
        * @tc.desc 	 : modify asset displayname with incorrect value in DIR_IMAGE
        * @tc.size 	 : MEDIUM
        * @tc.type 	 : Function
        * @tc.level	 : Level 0
        */
        it('SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_036', 0, async function (done) {
            const testNo = 'SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_036';
            const mediaName = `${new Date().getTime()}.jpg`;
            const displayName = 'C_002_036.mp3';
            const errorNo = DATA_ABILITY_CHECK_MEDIATYPE_MATCH_EXTENSION_FAIL;
            await ModifyAssetAbnormalWithDisplayNameCallBack(done, 
                    dirImage, imageType, mediaName, displayName, errorNo, testNo)
        });

        /**
        * @tc.number : SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_037
        * @tc.name 	 : createAsset
        * @tc.desc 	 : modify asset displayname with incorrect value in DIR_IMAGE
        * @tc.size 	 : MEDIUM
        * @tc.type 	 : Function
        * @tc.level	 : Level 0
        */
        it('SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_037', 0, async function (done) {
            const testNo = 'SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_037';
            const mediaName = `${new Date().getTime()}.jpg`;
            const displayName = 'C_002_037.txt';
            const errorNo = DATA_ABILITY_CHECK_MEDIATYPE_MATCH_EXTENSION_FAIL;
            await ModifyAssetAbnormalWithDisplayNameCallBack(done, 
                    dirImage, imageType, mediaName, displayName, errorNo, testNo)
        });

        /**
        * @tc.number : SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_038
        * @tc.name 	 : createAsset
        * @tc.desc 	 : modify asset displayname with incorrect value in DIR_AUDIO
        * @tc.size 	 : MEDIUM
        * @tc.type 	 : Function
        * @tc.level	 : Level 0
        */
        it('SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_038', 0, async function (done) {
            const testNo = 'SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_038';
            const mediaName = `${new Date().getTime()}.mp3`;
            const displayName = 'C_002_038.mp4';
            const errorNo = DATA_ABILITY_CHECK_MEDIATYPE_MATCH_EXTENSION_FAIL;
            await ModifyAssetAbnormalWithDisplayNameCallBack(done, 
                    dirAudio, audioType, mediaName, displayName, errorNo, testNo)
        });

        /**
        * @tc.number : SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_039
        * @tc.name 	 : createAsset
        * @tc.desc 	 : modify asset displayname with incorrect value in DIR_AUDIO
        * @tc.size 	 : MEDIUM
        * @tc.type 	 : Function
        * @tc.level	 : Level 0
        */
        it('SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_039', 0, async function (done) {
            const testNo = 'SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_039';
            const mediaName = `${new Date().getTime()}.mp3`;
            const displayName = 'C_002_039.jpg';
            const errorNo = DATA_ABILITY_CHECK_MEDIATYPE_MATCH_EXTENSION_FAIL;
            await ModifyAssetAbnormalWithDisplayNameCallBack(done, 
                    dirAudio, audioType, mediaName, displayName, errorNo, testNo)
        });

        /**
        * @tc.number : SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_040
        * @tc.name 	 : createAsset
        * @tc.desc 	 : modify asset displayname with incorrect value in DIR_AUDIO
        * @tc.size 	 : MEDIUM
        * @tc.type 	 : Function
        * @tc.level	 : Level 0
        */
        it('SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_040', 0, async function (done) {
            const testNo = 'SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_040';
            const mediaName = `${new Date().getTime()}.mp3`;
            const displayName = 'C_002_040.txt';
            const errorNo = DATA_ABILITY_CHECK_MEDIATYPE_MATCH_EXTENSION_FAIL;
            await ModifyAssetAbnormalWithDisplayNameCallBack(done, 
                    dirAudio, audioType, mediaName, displayName, errorNo, testNo)
        });


        /**
        * @tc.number : SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_041
        * @tc.name 	 : createAsset
        * @tc.desc 	 : modify asset displayname with incorrect value in DIR_DOCUMENTS
        * @tc.size 	 : MEDIUM
        * @tc.type 	 : Function
        * @tc.level	 : Level 0
        */
         it('SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_041', 0, async function (done) {
            const testNo = 'SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_041';
            const mediaName = `${new Date().getTime()}.dat`;
            const displayName = 'C_002_041.jpg';
            const errorNo = DATA_ABILITY_CHECK_MEDIATYPE_MATCH_EXTENSION_FAIL;
            await ModifyAssetAbnormalWithDisplayNameCallBack(done, 
                    dirDocuments, fileType, mediaName, displayName, errorNo, testNo)
        });

        /**
        * @tc.number : SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_042
        * @tc.name 	 : createAsset
        * @tc.desc 	 : modify asset displayname with incorrect value in DIR_DOCUMENTS
        * @tc.size 	 : MEDIUM
        * @tc.type 	 : Function
        * @tc.level	 : Level 0
        */
        it('SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_042', 0, async function (done) {
            const testNo = 'SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_042';
            const mediaName = `${new Date().getTime()}.dat`;
            const displayName = 'C_002_042.mp4';
            const errorNo = DATA_ABILITY_CHECK_MEDIATYPE_MATCH_EXTENSION_FAIL;
            await ModifyAssetAbnormalWithDisplayNameCallBack(done, 
                    dirDocuments, fileType, mediaName, displayName, errorNo, testNo)
        });

        /**
        * @tc.number : SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_043
        * @tc.name 	 : createAsset
        * @tc.desc 	 : modify asset displayname with incorrect value in DIR_DOCUMENTS
        * @tc.size 	 : MEDIUM
        * @tc.type 	 : Function
        * @tc.level	 : Level 0
        */
        it('SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_043', 0, async function (done) {
            const testNo = 'SUB_MEDIA_GETPUBLICDIRECTORY_C_004_003_002_043';
            const mediaName = `${new Date().getTime()}.dat`;
            const displayName = 'C_002_043.mp3';
            const errorNo = DATA_ABILITY_CHECK_MEDIATYPE_MATCH_EXTENSION_FAIL;
            await ModifyAssetAbnormalWithDisplayNameCallBack(done, 
                    dirDocuments, fileType, mediaName, displayName, errorNo, testNo)
        });
    });
}
