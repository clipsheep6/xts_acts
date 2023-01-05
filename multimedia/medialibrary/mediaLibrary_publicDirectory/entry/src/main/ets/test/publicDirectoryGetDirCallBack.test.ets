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
    getPermission
} from "../../../../../../common";

let MEDIALIBRARY_INNER_FAIL = 14000011;
let dirCamera = mediaLibrary.DirectoryType.DIR_CAMERA;
let dirVideo = mediaLibrary.DirectoryType.DIR_VIDEO;
let dirImage = mediaLibrary.DirectoryType.DIR_IMAGE;
let dirAudio = mediaLibrary.DirectoryType.DIR_AUDIO;
let dirDocuments = mediaLibrary.DirectoryType.DIR_DOCUMENTS;
let dirDownload = mediaLibrary.DirectoryType.DIR_DOWNLOAD;

export default function publicDirectoryGetDirCallBack(abilityContext) {
    describe("publicDirectoryGetDirCallBack", function () {
        const media = mediaLibrary.getMediaLibrary(abilityContext);
        beforeAll(async function () {
            console.info("beforeAll case");
            await getPermission(null, abilityContext);
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

        async function getDirectoryCallBack(done, dirType, dirName, testNo) {
            try {
                media.getPublicDirectory(dirType, async (err, dirResult) => {
                    expect(dirResult == dirName).assertTrue();
                    done();
                });
            } catch (error) {
                console.info(`${testNo} failed, message: ${error}`);
                expect(false).assertTrue();
                done();
            }
        };

        async function getDirectoryAbnormalCallBack(done, dirType, errorNo, testNo) {
            try {
                media.getPublicDirectory(dirType, async (err, dirResult) => {
                    if(err){
                        console.info(`${testNo} passed, err = ${err}, err.code = ${err.code}`);
                        expect(err.code == errorNo).assertTrue();
                        done();
                    }
                    else{
                        expect(false).assertTrue();
                        done();
                    }
                });
            } catch (error) {
                console.info(`${testNo} passed, error = ${error}, error.code = ${error.code}`);
                expect(error.code == errorNo).assertTrue();
                done();
            }
        };

        /**
        * @tc.number : SUB_MEDIA_GETPUBLICDIRECTORY_C_004_002_001
        * @tc.name 	 : getPublicDirectory
        * @tc.desc 	 : getPublicDirectory DIR_CAMERA
        * @tc.size 	 : MEDIUM
        * @tc.type 	 : Function
        * @tc.level	 : Level 0
        */
        it('SUB_MEDIA_GETPUBLICDIRECTORY_C_004_002_001', 0, async function (done) {
            const testNo = 'SUB_MEDIA_GETPUBLICDIRECTORY_C_004_002_001'
            getDirectoryCallBack(done, dirCamera, 'Camera/', testNo)
        });

        /**
        * @tc.number : SUB_MEDIA_GETPUBLICDIRECTORY_C_004_002_002
        * @tc.name 	 : getPublicDirectory
        * @tc.desc 	 : getPublicDirectory DIR_VIDEO
        * @tc.size 	 : MEDIUM
        * @tc.type 	 : Function
        * @tc.level	 : Level 0
        */
        it('SUB_MEDIA_GETPUBLICDIRECTORY_C_004_002_002', 0, async function (done) {
            const testNo = 'SUB_MEDIA_GETPUBLICDIRECTORY_C_004_002_002'
            await getDirectoryCallBack(done, dirVideo, 'Videos/', testNo)
        });

        /**
        * @tc.number : SUB_MEDIA_GETPUBLICDIRECTORY_C_004_002_003
        * @tc.name 	 : getPublicDirectory
        * @tc.desc 	 : getPublicDirectory DIR_IMAGE
        * @tc.size 	 : MEDIUM
        * @tc.type 	 : Function
        * @tc.level	 : Level 0
        */
        it('SUB_MEDIA_GETPUBLICDIRECTORY_C_004_002_003', 0, async function (done) {
            const testNo = 'SUB_MEDIA_GETPUBLICDIRECTORY_C_004_002_003'
            await getDirectoryCallBack(done, dirImage, 'Pictures/', testNo)
        });

        /**
        * @tc.number : SUB_MEDIA_GETPUBLICDIRECTORY_C_004_002_004
        * @tc.name 	 : getPublicDirectory
        * @tc.desc 	 : getPublicDirectory DIR_AUDIO
        * @tc.size 	 : MEDIUM
        * @tc.type 	 : Function
        * @tc.level	 : Level 0
        */
        it('SUB_MEDIA_GETPUBLICDIRECTORY_C_004_002_004', 0, async function (done) {
            const testNo = 'SUB_MEDIA_GETPUBLICDIRECTORY_C_004_002_004'
            await getDirectoryCallBack(done, dirAudio, 'Audios/', testNo)
        });

        /**
        * @tc.number : SUB_MEDIA_GETPUBLICDIRECTORY_C_004_002_005
        * @tc.name 	 : getPublicDirectory
        * @tc.desc 	 : getPublicDirectory DIR_DOCUMENTS
        * @tc.size 	 : MEDIUM
        * @tc.type 	 : Function
        * @tc.level	 : Level 0
        */
        it('SUB_MEDIA_GETPUBLICDIRECTORY_C_004_002_005', 0, async function (done) {
            const testNo = 'SUB_MEDIA_GETPUBLICDIRECTORY_C_004_002_005'
            await getDirectoryCallBack(done, dirDocuments, 'Documents/', testNo)
        });

        /**
        * @tc.number : SUB_MEDIA_GETPUBLICDIRECTORY_C_004_002_006
        * @tc.name 	 : getPublicDirectory
        * @tc.desc 	 : getPublicDirectory DIR_DOWNLOAD
        * @tc.size 	 : MEDIUM
        * @tc.type 	 : Function
        * @tc.level	 : Level 0
        */
        it('SUB_MEDIA_GETPUBLICDIRECTORY_C_004_002_006', 0, async function (done) {
            const testNo = 'SUB_MEDIA_GETPUBLICDIRECTORY_C_004_002_006'
            await getDirectoryCallBack(done, dirDownload, 'Download/', testNo)
        });

        /**
        * @tc.number    : SUB_MEDIA_GETPUBLICDIRECTORY_C_004_002_007
        * @tc.name      : getPublicDirectory
        * @tc.desc      : getPublicDirectory incorrect parameter: 110
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
        */
        it('SUB_MEDIA_GETPUBLICDIRECTORY_C_004_002_007', 0, async function (done) {
            const testNo = 'SUB_MEDIA_GETPUBLICDIRECTORY_C_004_002_007'
            await getDirectoryAbnormalCallBack(done, 110, MEDIALIBRARY_INNER_FAIL, testNo)
        });

        /**
        * @tc.number    : SUB_MEDIA_GETPUBLICDIRECTORY_C_004_002_008
        * @tc.name      : getPublicDirectory
        * @tc.desc      : getPublicDirectory incorrect parameter: -1
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
        */
        it('SUB_MEDIA_GETPUBLICDIRECTORY_C_004_002_008', 0, async function (done) {
            const testNo = 'SUB_MEDIA_GETPUBLICDIRECTORY_C_004_002_008'
            await getDirectoryAbnormalCallBack(done, -1, MEDIALIBRARY_INNER_FAIL, testNo)
        });

        /**
        * @tc.number    : SUB_MEDIA_GETPUBLICDIRECTORY_C_004_002_009
        * @tc.name      : getPublicDirectory
        * @tc.desc      : getPublicDirectory incorrect parameter: 0
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
        */
        it('SUB_MEDIA_GETPUBLICDIRECTORY_C_004_002_009', 0, async function (done) {
            const testNo = 'SUB_MEDIA_GETPUBLICDIRECTORY_C_004_002_009'
            await getDirectoryCallBack(done, 0, 'Camera/', testNo)
        });

        /**
        * @tc.number    : SUB_MEDIA_GETPUBLICDIRECTORY_C_004_002_010
        * @tc.name      : getPublicDirectory
        * @tc.desc      : getPublicDirectory incorrect parameter: 1
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
        */
        it('SUB_MEDIA_GETPUBLICDIRECTORY_C_004_002_010', 0, async function (done) {
            const testNo = 'SUB_MEDIA_GETPUBLICDIRECTORY_C_004_002_010'
            await getDirectoryCallBack(done, 1, 'Videos/', testNo)
        });

        /**
        * @tc.number    : SUB_MEDIA_GETPUBLICDIRECTORY_C_004_002_011
        * @tc.name      : getPublicDirectory
        * @tc.desc      : getPublicDirectory incorrect parameter: ''
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
        */
        it('SUB_MEDIA_GETPUBLICDIRECTORY_C_004_002_011', 0, async function (done) {
            const testNo = 'SUB_MEDIA_GETPUBLICDIRECTORY_C_004_002_011'
            await getDirectoryAbnormalCallBack(done, '', undefined, testNo)
        });

        /**
        * @tc.number    : SUB_MEDIA_GETPUBLICDIRECTORY_C_004_002_012
        * @tc.name      : getPublicDirectory
        * @tc.desc      : getPublicDirectory incorrect parameter: ""
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
        */
        it('SUB_MEDIA_GETPUBLICDIRECTORY_C_004_002_012', 0, async function (done) {
            const testNo = 'SUB_MEDIA_GETPUBLICDIRECTORY_C_004_002_012'
            await getDirectoryAbnormalCallBack(done, "", undefined, testNo)
        });

        /**
        * @tc.number    : SUB_MEDIA_GETPUBLICDIRECTORY_C_004_002_013
        * @tc.name      : getPublicDirectory
        * @tc.desc      : getPublicDirectory incorrect parameter: 'c'
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
        */
        it('SUB_MEDIA_GETPUBLICDIRECTORY_C_004_002_013', 0, async function (done) {
            const testNo = 'SUB_MEDIA_GETPUBLICDIRECTORY_C_004_002_013'
            await getDirectoryAbnormalCallBack(done, 'c', undefined, testNo)
        });

        /**
        * @tc.number    : SUB_MEDIA_GETPUBLICDIRECTORY_C_004_002_014
        * @tc.name      : getPublicDirectory
        * @tc.desc      : getPublicDirectory incorrect parameter: "str"
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
        */
        it('SUB_MEDIA_GETPUBLICDIRECTORY_C_004_002_014', 0, async function (done) {
            const testNo = 'SUB_MEDIA_GETPUBLICDIRECTORY_C_004_002_014'
            await getDirectoryAbnormalCallBack(done, "str", undefined, testNo)
        });
    });
}
