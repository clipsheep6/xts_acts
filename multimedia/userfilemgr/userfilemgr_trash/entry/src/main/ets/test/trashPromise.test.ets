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
import userfile_manager from '@ohos.filemanagement.userfile_manager';
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from "deccjsunit/index";
import {
    sleep,
    IMAGE_TYPE,
    AUDIO_TYPE,
    VIDEO_TYPE,
    FILE_TYPE,
    fetchOps,
    fileIdFetchOps,
    albumFetchOps,
} from "../../../../../../common";

export default function trashPromise(abilityContext) {
    describe("trashPromise", function () {
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
        afterAll(async function () {
            console.info("afterAll case");
        });

        const userfile_mgr = userfile_manager.getUserFileMgr(abilityContext);
        async function setTrash(done, testNum, media_type, databasefFetchOps, ablumFetchOps, noAlbum = false) {
            try {
                // database info
                let databaseFetchFileResult = await userfile_mgr.getFileAssets(media_type, databasefFetchOps);
                let count = databaseFetchFileResult.getCount();

                //album info
                if (!noAlbum) {
                    var albumList = await userfile_mgr.getAlbums(media_type, ablumFetchOps);
                    var album = albumList[0];
                    var albumFetchFileResult = await album.getFileAssets(media_type);
                    var albumFilesCount = albumFetchFileResult.getCount();
                    expect(albumFilesCount).assertEqual(count);
                }

                // file info
                let asset = await databaseFetchFileResult.getFirstObject();
                let istrash = await asset.isTrash();
                expect(istrash).assertFalse();
                // trash operation
                await asset.trash(true);
                istrash = await asset.isTrash();
                console.info(`${testNum} istrash: ${istrash}`);
                databaseFetchFileResult = await userfile_mgr.getFileAssets(media_type, databasefFetchOps);
                let databaseCount = databaseFetchFileResult.getCount();
                expect(databaseCount).assertEqual(count - 1);
                //album info
                if (!noAlbum) {
                    var albumList = await userfile_mgr.getAlbums(media_type, ablumFetchOps);
                    var album = albumList[0];
                    var albumFetchFileResult = await album.getFileAssets(media_type);
                    var albumFilesCount = albumFetchFileResult.getCount();
                    expect(databaseCount).assertEqual(count - 1);
                }

                await asset.trash(false);
                done();
            } catch (error) {
                console.info(`${testNum} error: ${error}`);
                expect(false).assertTrue();
                done();
            }
        }

        async function recovery(done, testNum, media_type, databasefFetchOps, ablumFetchOps, noAlbum) {
            try {
                let databaseFetchFileResult = await userfile_mgr.getFileAssets(media_type, databasefFetchOps);
                let count = databaseFetchFileResult.getCount();
                let asset = await databaseFetchFileResult.getFirstObject();
                await asset.trash(true);

                let istrash = await asset.isTrash();
                if (!istrash) {
                    console.info(`${testNum} istrash failed: ${istrash}`);
                    expect(istrash).assertFalse();
                    return;
                }
                await asset.trash(false);

                databaseFetchFileResult = await userfile_mgr.getFileAssets(media_type, databasefFetchOps);
                let databaseCount = databaseFetchFileResult.getCount();
                expect(databaseCount).assertEqual(count);
                //album info
                if (!noAlbum) {
                    let albumList = await userfile_mgr.getAlbums(media_type, ablumFetchOps);
                    let album = albumList[0];
                    let albumFetchFileResult = await album.getFileAssets(media_type);
                    let albumFilesCount = albumFetchFileResult.getCount();
                    expect(albumFilesCount).assertEqual(count);
                }
                done();
            } catch (error) {
                console.info(`${testNum} error: ${error}`);
                expect(false).assertTrue();
                done();
            }
        }
        /**
         * @tc.number	 : SUB_USERFILE_MGR_TRASH_PROMISE_01_001
         * @tc.name 	 : trash
         * @tc.desc 	 : image asset Trash by true
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 2
         */
        it("SUB_USERFILE_MGR_TRASH_PROMISE_01_001", 0, async function (done) {
            let testNum = "SUB_USERFILE_MGR_TRASH_PROMISE_01_001";
             let media_type = [IMAGE_TYPE];
            let rOps: mediaLibrary.MediaFetchOptions = fetchOps(testNum, "Pictures/trash/", IMAGE_TYPE);
            let aOps: mediaLibrary.MediaFetchOptions = albumFetchOps(testNum, "Pictures/", IMAGE_TYPE);
            let noAlbum = true;
            await setTrash(done, testNum, media_type, rOps, aOps, noAlbum);
        });

        /**
         * @tc.number : SUB_USERFILE_MGR_TRASH_RECOVERY_PROMISE_03_001
         * @tc.name 	 : trash
         * @tc.desc 	 : image asset Trash by false
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 2
         */
        it("SUB_USERFILE_MGR_TRASH_RECOVERY_PROMISE_03_001", 0, async function (done) {
            let testNum = "SUB_USERFILE_MGR_TRASH_RECOVERY_PROMISE_03_001";
            let media_type = [IMAGE_TYPE];
            let rOps: mediaLibrary.MediaFetchOptions = fetchOps(testNum, "Pictures/trash/", IMAGE_TYPE);
            let aOps = albumFetchOps(testNum, "Pictures/", IMAGE_TYPE);
            let noAlbum = true;
            await recovery(done, testNum, media_type, rOps, aOps, noAlbum);
        });
    });
}
