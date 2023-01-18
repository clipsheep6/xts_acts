/*
 * Copyright (C) 2023 Huawei Device Co., Ltd.
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

let MEDIALIBRARY_INNER_FAIL = 14000011;
let dirCamera = mediaLibrary.DirectoryType.DIR_CAMERA;
let dirVideo = mediaLibrary.DirectoryType.DIR_VIDEO;
let dirImage = mediaLibrary.DirectoryType.DIR_IMAGE;
let dirAudio = mediaLibrary.DirectoryType.DIR_AUDIO;
let dirDocuments = mediaLibrary.DirectoryType.DIR_DOCUMENTS;
let dirDownload = mediaLibrary.DirectoryType.DIR_DOWNLOAD;


export default function publicDirectoryGetDirPromise(abilityContext) {
    describe("publicDirectoryGetDirPromise", function () {
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
  
        async function getDirectory(done, dirType, dirName, testNo) {
            try {
                const dicResult = await media.getPublicDirectory(dirType);
                expect(dicResult == dirName).assertTrue();
                done();
            } catch (error) {
                console.info(`${testNo} failed, message: ${error}`);
                expect(false).assertTrue();
                done();
            }
        }

        async function getDirectoryAbnormal(done, dirType, errorNo, testNo) {
            try {
                await media.getPublicDirectory(dirType);
                expect(false).assertTrue();
                done();
            } catch (error) {
                console.info(`${testNo} passed, error = ${error}, error.code = ${error.code}`);
                expect(error.code == errorNo).assertTrue();
                done();
            }
        }
        
        /**
        * @tc.number : SUB_MEDIA_GETPUBLICDIRECTORY_P_004_002_001
        * @tc.name 	 : getPublicDirectory
        * @tc.desc 	 : getPublicDirectory DIR_CAMERA
        * @tc.size 	 : MEDIUM
        * @tc.type 	 : Function
        * @tc.level	 : Level 0
        */
        it('SUB_MEDIA_GETPUBLICDIRECTORY_P_004_002_001', 0, async function (done) {
            const testNo = 'SUB_MEDIA_GETPUBLICDIRECTORY_P_004_002_001'
            getDirectory(done, dirCamera, 'Camera/', testNo)
        });

        /**
        * @tc.number : SUB_MEDIA_GETPUBLICDIRECTORY_P_004_002_002
        * @tc.name 	 : getPublicDirectory
        * @tc.desc 	 : getPublicDirectory DIR_VIDEO
        * @tc.size 	 : MEDIUM
        * @tc.type 	 : Function
        * @tc.level	 : Level 0
        */

        it('SUB_MEDIA_GETPUBLICDIRECTORY_P_004_002_002', 0, async function (done) {
            const testNo = 'SUB_MEDIA_GETPUBLICDIRECTORY_P_004_002_002'
            await getDirectory(done, dirVideo, 'Videos/', testNo)
        });

        /**
        * @tc.number : SUB_MEDIA_GETPUBLICDIRECTORY_P_004_002_003
        * @tc.name 	 : getPublicDirectory
        * @tc.desc 	 : getPublicDirectory DIR_IMAGE
        * @tc.size 	 : MEDIUM
        * @tc.type 	 : Function
        * @tc.level	 : Level 0
        */
        it('SUB_MEDIA_GETPUBLICDIRECTORY_P_004_002_003', 0, async function (done) {
            const testNo = 'SUB_MEDIA_GETPUBLICDIRECTORY_P_004_002_003'
            await getDirectory(done, dirImage, 'Pictures/', testNo)
        });

        /**
        * @tc.number : SUB_MEDIA_GETPUBLICDIRECTORY_P_004_002_004
        * @tc.name 	 : getPublicDirectory
        * @tc.desc 	 : getPublicDirectory DIR_AUDIO
        * @tc.size 	 : MEDIUM
        * @tc.type 	 : Function
        * @tc.level	 : Level 0
        */
        it('SUB_MEDIA_GETPUBLICDIRECTORY_P_004_002_004', 0, async function (done) {
            const testNo = 'SUB_MEDIA_GETPUBLICDIRECTORY_P_004_002_004'
            await getDirectory(done, dirAudio, 'Audios/', testNo)
        });

        /**
        * @tc.number : SUB_MEDIA_GETPUBLICDIRECTORY_P_004_002_005
        * @tc.name 	 : getPublicDirectory
        * @tc.desc 	 : getPublicDirectory DIR_DOCUMENTS
        * @tc.size 	 : MEDIUM
        * @tc.type 	 : Function
        * @tc.level	 : Level 0
        */
        it('SUB_MEDIA_GETPUBLICDIRECTORY_P_004_002_005', 0, async function (done) {
            const testNo = 'SUB_MEDIA_GETPUBLICDIRECTORY_P_004_002_005'
            await getDirectory(done, dirDocuments, 'Documents/', testNo)
        });

        /**
        * @tc.number : SUB_MEDIA_GETPUBLICDIRECTORY_P_004_002_006
        * @tc.name 	 : getPublicDirectory
        * @tc.desc 	 : getPublicDirectory DIR_DOWNLOAD
        * @tc.size 	 : MEDIUM
        * @tc.type 	 : Function
        * @tc.level	 : Level 0
        */
        it('SUB_MEDIA_GETPUBLICDIRECTORY_P_004_002_006', 0, async function (done) {
            const testNo = 'SUB_MEDIA_GETPUBLICDIRECTORY_P_004_002_006'
            await getDirectory(done, dirDownload, 'Download/', testNo)
        });

        /**
        * @tc.number    : SUB_MEDIA_GETPUBLICDIRECTORY_P_004_002_007
        * @tc.name      : getPublicDirectory
        * @tc.desc      : getPublicDirectory incorrect parameter: 110
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
        */
        it('SUB_MEDIA_GETPUBLICDIRECTORY_P_004_002_007', 0, async function (done) {
            const testNo = 'SUB_MEDIA_GETPUBLICDIRECTORY_P_004_002_007'
            await getDirectoryAbnormal(done, 110, MEDIALIBRARY_INNER_FAIL, testNo)
        });

        /**
        * @tc.number    : SUB_MEDIA_GETPUBLICDIRECTORY_P_004_002_008
        * @tc.name      : getPublicDirectory
        * @tc.desc      : getPublicDirectory incorrect parameter: -1
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
        */
        it('SUB_MEDIA_GETPUBLICDIRECTORY_P_004_002_008', 0, async function (done) {
            const testNo = 'SUB_MEDIA_GETPUBLICDIRECTORY_P_004_002_008'
            await getDirectoryAbnormal(done, -1, MEDIALIBRARY_INNER_FAIL, testNo)
        });

        /**
        * @tc.number    : SUB_MEDIA_GETPUBLICDIRECTORY_P_004_002_009
        * @tc.name      : getPublicDirectory
        * @tc.desc      : getPublicDirectory incorrect parameter: 0
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
        */
        it('SUB_MEDIA_GETPUBLICDIRECTORY_P_004_002_009', 0, async function (done) {
            const testNo = 'SUB_MEDIA_GETPUBLICDIRECTORY_P_004_002_009'
            await getDirectory(done, 0, 'Camera/', testNo)
        });

        /**
        * @tc.number    : SUB_MEDIA_GETPUBLICDIRECTORY_P_004_002_010
        * @tc.name      : getPublicDirectory
        * @tc.desc      : getPublicDirectory incorrect parameter: 1
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
        */
        it('SUB_MEDIA_GETPUBLICDIRECTORY_P_004_002_010', 0, async function (done) {
            const testNo = 'SUB_MEDIA_GETPUBLICDIRECTORY_P_004_002_010'
            await getDirectory(done, 1, 'Videos/', testNo)
        });

        /**
        * @tc.number    : SUB_MEDIA_GETPUBLICDIRECTORY_P_004_002_011
        * @tc.name      : getPublicDirectory
        * @tc.desc      : getPublicDirectory incorrect parameter: ''
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
        */
        it('SUB_MEDIA_GETPUBLICDIRECTORY_P_004_002_011', 0, async function (done) {
            const testNo = 'SUB_MEDIA_GETPUBLICDIRECTORY_P_004_002_011'
            await getDirectoryAbnormal(done, '', undefined, testNo)
        });

        /**
        * @tc.number    : SUB_MEDIA_GETPUBLICDIRECTORY_P_004_002_012
        * @tc.name      : getPublicDirectory
        * @tc.desc      : getPublicDirectory incorrect parameter: ""
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
        */
        it('SUB_MEDIA_GETPUBLICDIRECTORY_P_004_002_012', 0, async function (done) {
            const testNo = 'SUB_MEDIA_GETPUBLICDIRECTORY_P_004_002_012'
            await getDirectoryAbnormal(done, "", undefined, testNo)
        });

        /**
        * @tc.number    : SUB_MEDIA_GETPUBLICDIRECTORY_P_004_002_013
        * @tc.name      : getPublicDirectory
        * @tc.desc      : getPublicDirectory incorrect parameter: 'c'
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
        */
        it('SUB_MEDIA_GETPUBLICDIRECTORY_P_004_002_013', 0, async function (done) {
            const testNo = 'SUB_MEDIA_GETPUBLICDIRECTORY_P_004_002_013'
            await getDirectoryAbnormal(done, 'c', undefined, testNo)
        });

        /**
        * @tc.number    : SUB_MEDIA_GETPUBLICDIRECTORY_P_004_002_014
        * @tc.name      : getPublicDirectory
        * @tc.desc      : getPublicDirectory incorrect parameter: "str"
        * @tc.size      : MEDIUM
        * @tc.type      : Function
        * @tc.level     : Level 0
        */
        it('SUB_MEDIA_GETPUBLICDIRECTORY_P_004_002_014', 0, async function (done) {
            const testNo = 'SUB_MEDIA_GETPUBLICDIRECTORY_P_004_002_014'
            await getDirectoryAbnormal(done, "str", undefined, testNo)
        });
    });
}
