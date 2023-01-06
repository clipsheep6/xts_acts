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

import { sleep, IMAGE_TYPE, FILEKEY, checkAssetsCount, nameFetchOps } from "../../../../../../common";

let ERR_RELATIVE_PATH_NOT_EXIST_OR_INVALID = 14000010;
let DATA_ABILITY_CHECK_MEDIATYPE_MATCH_EXTENSION_FAIL = -2004;
let DATA_ABILITY_CHECK_MEDIATYPE_FAIL = -2002;

let dirCamera = mediaLibrary.DirectoryType.DIR_CAMERA;
let dirVideo = mediaLibrary.DirectoryType.DIR_VIDEO;
let dirImage = mediaLibrary.DirectoryType.DIR_IMAGE;
let dirAudio = mediaLibrary.DirectoryType.DIR_AUDIO;
let dirDocument = mediaLibrary.DirectoryType.DIR_DOCUMENTS;
let dirDownload = mediaLibrary.DirectoryType.DIR_DOWNLOAD;

let imageType = mediaLibrary.MediaType.IMAGE;
let videoType = mediaLibrary.MediaType.VIDEO;
let audioType = mediaLibrary.MediaType.AUDIO;
let fileType = mediaLibrary.MediaType.FILE;

export default function publicDirectoryCreateAssetPromise(abilityContext) {
    describe("publicDirectoryCreateAssetPromise", function () {
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
  
        async function getDirectoryAndCreateAsset(done, 
                            dirType, mediaType, mediaName, testNo) {
            try {
                const dirPath = await media.getPublicDirectory(dirType);
                await media.createAsset(mediaType, mediaName, dirPath);
                expect(true).assertTrue();
                done();
            } catch (error) {
                console.info(`${testNo} failed, message: ${error}, error.code: ${error.code}`);
                expect(false).assertTrue();
                done();
            }
        };
        async function getDirectoryAndCreateAssetAbnormal(done, 
                            dirType, mediaType, mediaName, errorCode, testNo) {
            try {
                const dirPath = await media.getPublicDirectory(dirType);
                await media.createAsset(mediaType, mediaName, dirPath);
                console.info(`${testNo} failed`);
                expect(false).assertTrue();
                done();
            } catch (error) {
                expect(errorCode == error.code).assertTrue();
                console.info(`${testNo} passed, message: ${error}, error.code: ${error.code}`);
                done();
            }
        };
        /**
        * @tc.number : SUB_MEDIA_GETPUBLICDIRECTORY_P_004_003_001_001
        * @tc.name 	 : createAsset
        * @tc.desc 	 : Create image in Camera/
        * @tc.size 	 : MEDIUM
        * @tc.type 	 : Function
        * @tc.level	 : Level 0
        */
        it('SUB_MEDIA_GETPUBLICDIRECTORY_P_004_003_001_001', 0, async function (done) {
            const testNo = 'SUB_MEDIA_GETPUBLICDIRECTORY_P_004_003_001_001'
            await getDirectoryAndCreateAsset(done, 
                    dirCamera, imageType, `${new Date().getTime()}.jpg`, testNo)
        });

        /*
        * @tc.number : SUB_MEDIA_GETPUBLICDIRECTORY_P_004_003_001_002
        * @tc.name 	 : createAsset
        * @tc.desc 	 : Create video in Camera/
        * @tc.size 	 : MEDIUM
        * @tc.type 	 : Function
        * @tc.level	 : Level 0
        */
        it('SUB_MEDIA_GETPUBLICDIRECTORY_P_004_003_001_002', 0, async function (done) {
            const testNo = 'SUB_MEDIA_GETPUBLICDIRECTORY_P_004_003_001_002'
            await getDirectoryAndCreateAsset(done, 
                    dirCamera, videoType, `${new Date().getTime()}.mp4`, testNo)
        });

        /*
        * @tc.number : SUB_MEDIA_GETPUBLICDIRECTORY_P_004_003_001_003
        * @tc.name 	 : createAsset
        * @tc.desc 	 : Create video in Videos/
        * @tc.size 	 : MEDIUM
        * @tc.type 	 : Function
        * @tc.level	 : Level 0
        */
        it('SUB_MEDIA_GETPUBLICDIRECTORY_P_004_003_001_003', 0, async function (done) {
            const testNo = 'SUB_MEDIA_GETPUBLICDIRECTORY_P_004_003_001_003'
            await getDirectoryAndCreateAsset(done, 
                    dirVideo, videoType, `${new Date().getTime()}.mp4`, testNo)
        });

        /*
        * @tc.number : SUB_MEDIA_GETPUBLICDIRECTORY_P_004_003_001_004
        * @tc.name 	 : createAsset
        * @tc.desc 	 : Create image in Pictures/
        * @tc.size 	 : MEDIUM
        * @tc.type 	 : Function
        * @tc.level	 : Level 0
        */
        it('SUB_MEDIA_GETPUBLICDIRECTORY_P_004_003_001_004', 0, async function (done) {
            const testNo = 'SUB_MEDIA_GETPUBLICDIRECTORY_P_004_003_001_004'
            await getDirectoryAndCreateAsset(done, 
                    dirImage, imageType, `${new Date().getTime()}.jpg`, testNo)
        });

        /*
        * @tc.number : SUB_MEDIA_GETPUBLICDIRECTORY_P_004_003_001_005
        * @tc.name 	 : createAsset
        * @tc.desc 	 : Create File Asset audio in Audios/
        * @tc.size 	 : MEDIUM
        * @tc.type 	 : Function
        * @tc.level	 : Level 0
        */
        it('SUB_MEDIA_GETPUBLICDIRECTORY_P_004_003_001_005', 0, async function (done) {
            const testNo = 'SUB_MEDIA_GETPUBLICDIRECTORY_P_004_003_001_005'
            await getDirectoryAndCreateAsset(done, 
                    dirAudio, audioType, `${new Date().getTime()}.mp3`, testNo)
        });

        /*
        * @tc.number : SUB_MEDIA_GETPUBLICDIRECTORY_P_004_003_001_006
        * @tc.name 	 : createAsset
        * @tc.desc 	 : Create File Asset file in Documents/
        * @tc.size 	 : MEDIUM
        * @tc.type 	 : Function
        * @tc.level	 : Level 0
        */
        it('SUB_MEDIA_GETPUBLICDIRECTORY_P_004_003_001_006', 0, async function (done) {
            const testNo = 'SUB_MEDIA_GETPUBLICDIRECTORY_P_004_003_001_006'
            await getDirectoryAndCreateAsset(done, 
                    dirDocument, fileType, `${new Date().getTime()}.dat`, testNo)
        });

        /*
        * @tc.number : SUB_MEDIA_GETPUBLICDIRECTORY_P_004_003_001_007
        * @tc.name 	 : createAsset
        * @tc.desc 	 : Create File Asset file in Download/
        * @tc.size 	 : MEDIUM
        * @tc.type 	 : Function
        * @tc.level	 : Level 0
        */
        it('SUB_MEDIA_GETPUBLICDIRECTORY_P_004_003_001_007', 0, async function (done) {
            const testNo = 'SUB_MEDIA_GETPUBLICDIRECTORY_P_004_003_001_007'
            await getDirectoryAndCreateAsset(done, 
                    dirDownload, fileType, `${new Date().getTime()}.txt`, testNo)
        });

        /*
        * @tc.number : SUB_MEDIA_GETPUBLICDIRECTORY_P_004_003_001_008
        * @tc.name 	 : createAsset
        * @tc.desc 	 : Create File Asset Audio in Camera/
        * @tc.size 	 : MEDIUM
        * @tc.type 	 : Function
        * @tc.level	 : Level 0
        */
        it('SUB_MEDIA_GETPUBLICDIRECTORY_P_004_003_001_008', 0, async function (done) {
            const errorCode  = ERR_RELATIVE_PATH_NOT_EXIST_OR_INVALID;
            const testNo = 'SUB_MEDIA_GETPUBLICDIRECTORY_P_004_003_001_008';
            await getDirectoryAndCreateAssetAbnormal(done, 
                    dirCamera, audioType, `${new Date().getTime()}.mp3`, errorCode, testNo)
        });

        /*
        * @tc.number : SUB_MEDIA_GETPUBLICDIRECTORY_P_004_003_001_009
        * @tc.name 	 : createAsset
        * @tc.desc 	 : Create File Asset video in Camera/
        * @tc.size 	 : MEDIUM
        * @tc.type 	 : Function
        * @tc.level	 : Level 0
        */
        it('SUB_MEDIA_GETPUBLICDIRECTORY_P_004_003_001_009', 0, async function (done) {
            const errorCode  = DATA_ABILITY_CHECK_MEDIATYPE_MATCH_EXTENSION_FAIL;
            const testNo = 'SUB_MEDIA_GETPUBLICDIRECTORY_P_004_003_001_009';
            await getDirectoryAndCreateAssetAbnormal(done, 
                    dirCamera, imageType, `${new Date().getTime()}.mp4`, errorCode, testNo)
        });

        /*
        * @tc.number : SUB_MEDIA_GETPUBLICDIRECTORY_P_004_003_001_010
        * @tc.name 	 : createAsset
        * @tc.desc 	 : Create File Asset video in Camera/
        * @tc.size 	 : MEDIUM
        * @tc.type 	 : Function
        * @tc.level	 : Level 0
        */
        it('SUB_MEDIA_GETPUBLICDIRECTORY_P_004_003_001_010', 0, async function (done) {
            const errorCode  = DATA_ABILITY_CHECK_MEDIATYPE_MATCH_EXTENSION_FAIL;
            const testNo = 'SUB_MEDIA_GETPUBLICDIRECTORY_P_004_003_001_010';
            await getDirectoryAndCreateAssetAbnormal(done, 
                    dirCamera, videoType, `${new Date().getTime()}.jpg`, errorCode, testNo)
        });

        /*
        * @tc.number : SUB_MEDIA_GETPUBLICDIRECTORY_P_004_003_001_011
        * @tc.name 	 : createAsset
        * @tc.desc 	 : Create File Asset file in Camera/
        * @tc.size 	 : MEDIUM
        * @tc.type 	 : Function
        * @tc.level	 : Level 0
        */
        it('SUB_MEDIA_GETPUBLICDIRECTORY_P_004_003_001_011', 0, async function (done) {
            const errorCode  = ERR_RELATIVE_PATH_NOT_EXIST_OR_INVALID;
            const testNo = 'SUB_MEDIA_GETPUBLICDIRECTORY_P_004_003_001_011';
            await getDirectoryAndCreateAssetAbnormal(done, 
                    dirCamera, fileType, `${new Date().getTime()}.txt`, errorCode, testNo)
        });

        /*
        * @tc.number : SUB_MEDIA_GETPUBLICDIRECTORY_P_004_003_001_012
        * @tc.name 	 : createAsset
        * @tc.desc 	 : Create File Asset Picture in Videos/
        * @tc.size 	 : MEDIUM
        * @tc.type 	 : Function
        * @tc.level	 : Level 0
        */
        it('SUB_MEDIA_GETPUBLICDIRECTORY_P_004_003_001_012', 0, async function (done) {
            const errorCode  = ERR_RELATIVE_PATH_NOT_EXIST_OR_INVALID;
            const testNo = 'SUB_MEDIA_GETPUBLICDIRECTORY_P_004_003_001_012';
            await getDirectoryAndCreateAssetAbnormal(done, 
                    dirVideo, imageType, `${new Date().getTime()}.jpg`, errorCode, testNo)
        });

        /*
        * @tc.number : SUB_MEDIA_GETPUBLICDIRECTORY_P_004_003_001_013
        * @tc.name 	 : createAsset
        * @tc.desc 	 : Create File Asset Audio in Videos/
        * @tc.size 	 : MEDIUM
        * @tc.type 	 : Function
        * @tc.level	 : Level 0
        */
        it('SUB_MEDIA_GETPUBLICDIRECTORY_P_004_003_001_013', 0, async function (done) {
            const errorCode  = ERR_RELATIVE_PATH_NOT_EXIST_OR_INVALID;
            const testNo = 'SUB_MEDIA_GETPUBLICDIRECTORY_P_004_003_001_013';
            await getDirectoryAndCreateAssetAbnormal(done, 
                    dirVideo, audioType, `${new Date().getTime()}.mp3`, errorCode, testNo)
        });

        /*
        * @tc.number : SUB_MEDIA_GETPUBLICDIRECTORY_P_004_003_001_014
        * @tc.name 	 : createAsset
        * @tc.desc 	 : Create File Asset file in Videos/
        * @tc.size 	 : MEDIUM
        * @tc.type 	 : Function
        * @tc.level	 : Level 0
        */
        it('SUB_MEDIA_GETPUBLICDIRECTORY_P_004_003_001_014', 0, async function (done) {
            const errorCode  = ERR_RELATIVE_PATH_NOT_EXIST_OR_INVALID;
            const testNo = 'SUB_MEDIA_GETPUBLICDIRECTORY_P_004_003_001_014';
            await getDirectoryAndCreateAssetAbnormal(done, 
                    dirVideo, fileType, `${new Date().getTime()}.txt`, errorCode, testNo)
        });

        /*
        * @tc.number : SUB_MEDIA_GETPUBLICDIRECTORY_P_004_003_001_015
        * @tc.name 	 : createAsset
        * @tc.desc 	 : Create File Asset video in Pictures/
        * @tc.size 	 : MEDIUM
        * @tc.type 	 : Function
        * @tc.level	 : Level 0
        */
        it('SUB_MEDIA_GETPUBLICDIRECTORY_P_004_003_001_015', 0, async function (done) {
            const errorCode  = DATA_ABILITY_CHECK_MEDIATYPE_FAIL;
            const testNo = 'SUB_MEDIA_GETPUBLICDIRECTORY_P_004_003_001_015';
            await getDirectoryAndCreateAssetAbnormal(done, 
                    dirImage, videoType, `${new Date().getTime()}.mp4`, errorCode, testNo)
        });

        /*
        * @tc.number : SUB_MEDIA_GETPUBLICDIRECTORY_P_004_003_001_016
        * @tc.name 	 : createAsset
        * @tc.desc 	 : Create File Asset Audio in Pictures/
        * @tc.size 	 : MEDIUM
        * @tc.type 	 : Function
        * @tc.level	 : Level 0
        */
        it('SUB_MEDIA_GETPUBLICDIRECTORY_P_004_003_001_016', 0, async function (done) {
            const errorCode  = ERR_RELATIVE_PATH_NOT_EXIST_OR_INVALID;
            const testNo = 'SUB_MEDIA_GETPUBLICDIRECTORY_P_004_003_001_016';
            await getDirectoryAndCreateAssetAbnormal(done, 
                    dirImage, audioType, `${new Date().getTime()}.mp3`, errorCode, testNo)
        });

        /*
        * @tc.number : SUB_MEDIA_GETPUBLICDIRECTORY_P_004_003_001_017
        * @tc.name 	 : createAsset
        * @tc.desc 	 : Create File Asset file in Pictures/
        * @tc.size 	 : MEDIUM
        * @tc.type 	 : Function
        * @tc.level	 : Level 0
        */
        it('SUB_MEDIA_GETPUBLICDIRECTORY_P_004_003_001_017', 0, async function (done) {
            const errorCode  = ERR_RELATIVE_PATH_NOT_EXIST_OR_INVALID;
            const testNo = 'SUB_MEDIA_GETPUBLICDIRECTORY_P_004_003_001_017';
            await getDirectoryAndCreateAssetAbnormal(done, 
                    dirImage, fileType, `${new Date().getTime()}.dat`, errorCode, testNo)
        });

        /*
        * @tc.number : SUB_MEDIA_GETPUBLICDIRECTORY_P_004_003_001_018
        * @tc.name 	 : createAsset
        * @tc.desc 	 : Create File Asset image in Audios/
        * @tc.size 	 : MEDIUM
        * @tc.type 	 : Function
        * @tc.level	 : Level 0
        */
        it('SUB_MEDIA_GETPUBLICDIRECTORY_P_004_003_001_018', 0, async function (done) {
            const errorCode  = ERR_RELATIVE_PATH_NOT_EXIST_OR_INVALID;
            const testNo = 'SUB_MEDIA_GETPUBLICDIRECTORY_P_004_003_001_018';
            await getDirectoryAndCreateAssetAbnormal(done, 
                    dirAudio, imageType, `${new Date().getTime()}.jpg`, errorCode, testNo)
        });

        /*
        * @tc.number : SUB_MEDIA_GETPUBLICDIRECTORY_P_004_003_001_019
        * @tc.name 	 : createAsset
        * @tc.desc 	 : Create File Asset video in Audios/
        * @tc.size 	 : MEDIUM
        * @tc.type 	 : Function
        * @tc.level	 : Level 0
        */
        it('SUB_MEDIA_GETPUBLICDIRECTORY_P_004_003_001_019', 0, async function (done) {
            const errorCode  = ERR_RELATIVE_PATH_NOT_EXIST_OR_INVALID;
            const testNo = 'SUB_MEDIA_GETPUBLICDIRECTORY_P_004_003_001_019';
            await getDirectoryAndCreateAssetAbnormal(done, 
                    dirAudio, videoType, `${new Date().getTime()}.mp4`, errorCode, testNo)
        });

        /*
        * @tc.number : SUB_MEDIA_GETPUBLICDIRECTORY_P_004_003_001_020
        * @tc.name 	 : createAsset
        * @tc.desc 	 : Create File Asset file in Audios/
        * @tc.size 	 : MEDIUM
        * @tc.type 	 : Function
        * @tc.level	 : Level 0
        */
        it('SUB_MEDIA_GETPUBLICDIRECTORY_P_004_003_001_020', 0, async function (done) {
            const errorCode  = ERR_RELATIVE_PATH_NOT_EXIST_OR_INVALID;
            const testNo = 'SUB_MEDIA_GETPUBLICDIRECTORY_P_004_003_001_020';
            await getDirectoryAndCreateAssetAbnormal(done, 
                    dirAudio, fileType, `${new Date().getTime()}.dat`, errorCode, testNo)
        });

        /**
        * @tc.number : SUB_MEDIA_GETPUBLICDIRECTORY_P_004_003_001_021
        * @tc.name 	 : createAsset
        * @tc.desc 	 : Create File Asset image in Documents/
        * @tc.size 	 : MEDIUM
        * @tc.type 	 : Function
        * @tc.level	 : Level 0
        */
         it('SUB_MEDIA_GETPUBLICDIRECTORY_P_004_003_001_021', 0, async function (done) {
            const errorCode  = ERR_RELATIVE_PATH_NOT_EXIST_OR_INVALID;
            const testNo = 'SUB_MEDIA_GETPUBLICDIRECTORY_P_004_003_001_021';
            await getDirectoryAndCreateAssetAbnormal(done, 
                    dirAudio, imageType, `${new Date().getTime()}.jpg`, errorCode, testNo)
        });

        /*
        * @tc.number : SUB_MEDIA_GETPUBLICDIRECTORY_P_004_003_001_022
        * @tc.name 	 : createAsset
        * @tc.desc 	 : Create File Asset video in Documents/
        * @tc.size 	 : MEDIUM
        * @tc.type 	 : Function
        * @tc.level	 : Level 0
        */
        it('SUB_MEDIA_GETPUBLICDIRECTORY_P_004_003_001_022', 0, async function (done) {
            const errorCode  = DATA_ABILITY_CHECK_MEDIATYPE_FAIL;
            const testNo = 'SUB_MEDIA_GETPUBLICDIRECTORY_P_004_003_001_022';
            await getDirectoryAndCreateAssetAbnormal(done, 
                    dirImage, videoType, `${new Date().getTime()}.mp4`, errorCode, testNo)
        });

        /*
        * @tc.number : SUB_MEDIA_GETPUBLICDIRECTORY_P_004_003_001_023
        * @tc.name 	 : createAsset
        * @tc.desc 	 : Create File Asset Audio in Documents/
        * @tc.size 	 : MEDIUM
        * @tc.type 	 : Function
        * @tc.level	 : Level 0
        */
        it('SUB_MEDIA_GETPUBLICDIRECTORY_P_004_003_001_023', 0, async function (done) {
            const errorCode  = ERR_RELATIVE_PATH_NOT_EXIST_OR_INVALID;
            const testNo = 'SUB_MEDIA_GETPUBLICDIRECTORY_P_004_003_001_023';
            await getDirectoryAndCreateAssetAbnormal(done, 
                    dirImage, audioType, `${new Date().getTime()}.mp3`, errorCode, testNo)
        });

        /*
        * @tc.number : SUB_MEDIA_GETPUBLICDIRECTORY_P_004_003_001_024
        * @tc.name 	 : createAsset
        * @tc.desc 	 : Create no extension File Asset in Download/
        * @tc.size 	 : MEDIUM
        * @tc.type 	 : Function
        * @tc.level	 : Level 0
        */
        it('SUB_MEDIA_GETPUBLICDIRECTORY_P_004_003_001_024', 0, async function (done) {
            const testNo = 'SUB_MEDIA_GETPUBLICDIRECTORY_P_004_003_001_024'
            await getDirectoryAndCreateAsset(done, 
                    dirDownload, fileType, `${new Date().getTime()}`, testNo)
        });
        /*
        * @tc.number : SUB_MEDIA_GETPUBLICDIRECTORY_P_004_003_001_025
        * @tc.name 	 : createAsset
        * @tc.desc 	 : Create no extension File Asset in Documents/
        * @tc.size 	 : MEDIUM
        * @tc.type 	 : Function
        * @tc.level	 : Level 0
        */
        it('SUB_MEDIA_GETPUBLICDIRECTORY_P_004_003_001_025', 0, async function (done) {
            const testNo = 'SUB_MEDIA_GETPUBLICDIRECTORY_P_004_003_001_025'
            await getDirectoryAndCreateAsset(done, 
                    dirDocument, fileType, `${new Date().getTime()}`, testNo)
        });
        /**
        * @tc.number : SUB_MEDIA_GETPUBLICDIRECTORY_P_004_003_001_026
        * @tc.name 	 : createAsset
        * @tc.desc 	 : Create  ".j" extension File Asset in Download/
        * @tc.size 	 : MEDIUM
        * @tc.type 	 : Function
        * @tc.level	 : Level 0
        */
        it('SUB_MEDIA_GETPUBLICDIRECTORY_P_004_003_001_026', 0, async function (done) {
            const testNo = 'SUB_MEDIA_GETPUBLICDIRECTORY_P_004_003_001_026';
            await getDirectoryAndCreateAsset(done,
                    dirDownload, fileType, `${new Date().getTime()}.j`, testNo)
        });

        /**
        * @tc.number : SUB_MEDIA_GETPUBLICDIRECTORY_P_004_003_001_027
        * @tc.name 	 : createAsset
        * @tc.desc 	 : Create ".j" extension File Asset in Documents/
        * @tc.size 	 : MEDIUM
        * @tc.type 	 : Function
        * @tc.level	 : Level 0
        */
        it('SUB_MEDIA_GETPUBLICDIRECTORY_P_004_003_001_027', 0, async function (done) {
            const testNo = 'SUB_MEDIA_GETPUBLICDIRECTORY_P_004_003_001_027';
            await getDirectoryAndCreateAsset(done,
                    dirDocument, fileType, `${new Date().getTime()}.j`, testNo)
        });
    });
}
