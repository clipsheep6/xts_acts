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
    IMAGE_TYPE,
    AUDIO_TYPE,
    VIDEO_TYPE,
    FILE_TYPE,
    fetchOps,
    getPermission,
    albumFetchOps,
    fileIdFetchOps,
    checkPresetsAssets,
    isNum,
    checkAssetsCount,
} from "../../../../../../common";

export default function pendingCallbackA(abilityContext) {
    describe("pendingCallbackA", function () {
        beforeAll(async function () {
            await getPermission(null, abilityContext);
            console.info("beforeAll case");
            await checkPresetsAssets(media, "ActsMediaLibraryPendingJsTest");
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

        const media = mediaLibrary.getMediaLibrary(abilityContext);

        async function isPendingTest(done, testNum, media_type, displayName, path) {
            try {
                let creatAsset = await media.createAsset(media_type, displayName, path);
                let assetOp = fileIdFetchOps(testNum, creatAsset.id);
                let fetchFileResult = await media.getFileAssets(assetOp);
                let checkAssetCountPass = await checkAssetsCount(done, testNum, fetchFileResult, 1);
                if (!checkAssetCountPass) return;
                const asset = await fetchFileResult.getFirstObject();
                expect(asset.pendingTime).assertEqual(0);
                asset.isPending(async (err, state) => {
                    if (err) {
                        expect(false).assertTrue();
                        done();
                        return;
                    }
                    expect(state).assertEqual(false);
                    await fetchFileResult.close();
                    done();
                });
            } catch (error) {
                console.info(`${testNum} error : ${error}`);
                expect(false).assertTrue();
                done();
            }
        }

        async function setPendingTest(done, testNum, media_type, displayName, path, state) {
            try {
                let creatAsset = await media.createAsset(media_type, displayName, path);
                let assetOp = fileIdFetchOps(testNum, creatAsset.id);
                let fetchFileResult = await media.getFileAssets(assetOp);
                let checkAssetCountPass = await checkAssetsCount(done, testNum, fetchFileResult, 1);
                if (!checkAssetCountPass) return;
                let asset = await fetchFileResult.getFirstObject();
                if (!state) {
                    await asset.setPending(true);
                }
                let oldTime = new Date().getTime();
                asset.setPending(state, async (err) => {
                    if (err) {
                        console.info(`${testNum} err : ${err}`);
                        expect(false).assertTrue();
                        done();
                        return;
                    }
                    await fetchFileResult.close();
                    fetchFileResult = await media.getFileAssets(assetOp);
                    asset = await fetchFileResult.getFirstObject();
                    let currentTime = new Date().getTime();
                    expect(asset.pendingTime < currentTime && asset.pendingTime > oldTime).assertTrue();

                    expect(await asset.isPending()).assertEqual(state);
                    await fetchFileResult.close();
                    done();
                });
            } catch (error) {
                console.info(`${testNum} error : ${error}`);
                expect(false).assertTrue();
                done();
            }
        }
        async function isPendingOpenTest(done, testNum, media_type, displayName, path) {
            try {
                let creatAsset = await media.createAsset(media_type, displayName, path);
                let assetOp = fileIdFetchOps(testNum, creatAsset.id);
                let fetchFileResult = await media.getFileAssets(assetOp);
                let checkAssetCountPass = await checkAssetsCount(done, testNum, fetchFileResult, 1);
                if (!checkAssetCountPass) return;
                let asset = await fetchFileResult.getFirstObject();
                asset.setPending(true, async (err) => {
                    if (err) {
                        console.info(`${testNum} err : ${err}`);
                        expect(false).assertTrue();
                        done();
                        return;
                    }
                    await fetchFileResult.close();
                    fetchFileResult = await media.getFileAssets(assetOp);
                    asset = await fetchFileResult.getFirstObject();
                    let fd = asset.open("rw");
                    expect(isNum(fd)).assertTrue();
                    await fetchFileResult.close();
                    done();
                });
            } catch (error) {
                console.info(`${testNum} error : ${error}`);
                expect(false).assertTrue();
                done();
            }
        }

        async function isPendingGetThumbnailsTest(done, testNum, media_type, displayName, path) {
            // try {
            //     let creatAsset = await media.createAsset(media_type, displayName, path);
            //     let assetOp = fileIdFetchOps(testNum, creatAsset.id);
            //     let fetchFileResult = await media.getFileAssets(assetOp);
            //     let checkAssetCountPass = await checkAssetsCount(done, testNum, fetchFileResult, 1);
            //     if (!checkAssetCountPass) return;
            //     let asset = await fetchFileResult.getFirstObject();
            //     asset.setPending(true, async (err) => {
            //         if (err) {
            //             console.info(`${testNum} err : ${err}`);
            //             expect(false).assertTrue();
            //             done();
            //             return;
            //         }
            //         await fetchFileResult.close();
            //         try {
            //             await media.getThumbnails([asset.uri], 0, 1);
            //             expect(false).assertTrue();
            //             done();
            //         } catch (error) {
            //             expect(true).assertTrue();
            //             done();
            //         }
            //     });
            // } catch (error) {
            //     console.info(`${testNum} error : ${error}`);
            //     expect(false).assertTrue();
            //     done();
            // }
        }
        async function setPendingAbnormalTest(done, testNum, media_type, displayName, path, val) {
            try {
                let creatAsset = await media.createAsset(media_type, displayName, path);
                let assetOp = fileIdFetchOps(testNum, creatAsset.id);
                let fetchFileResult = await media.getFileAssets(assetOp);
                let checkAssetCountPass = await checkAssetsCount(done, testNum, fetchFileResult, 1);
                if (!checkAssetCountPass) return;
                let asset = await fetchFileResult.getFirstObject();
                asset.setPending(val, async (err) => {
                    if (err) {
                        console.info(`${testNum} err : ${err}`);
                        expect(true).assertTrue();
                        done();
                        return;
                    }
                    expect(false).assertTrue();
                    done();
                });
            } catch (error) {
                console.info(`${testNum} error : ${error}`);
                expect(false).assertTrue();
                done();
            }
        }
        // "mkdir -pv /storage/media/100/local/files/Pictures/pendingA/{ispending,setPeningT,setPendingF,ispendingOpen,ispendingGetThumbnails,ispendingError}",

        /**
         * @tc.number	 : SUB_MEDIA_MEDIALIBRARY_ISPENDING_001_01
         * @tc.name 	 : ispending
         * @tc.desc 	 : image fileAsset ispending
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 2
         */
        it("SUB_MEDIA_MEDIALIBRARY_ISPENDING_001_01", 0, async function (done) {
            let testNum = "SUB_MEDIA_MEDIALIBRARY_ISPENDING_001_01";
            let displayName = `ispending${new Date().getTime()}.jpg`;
            await isPendingTest(done, testNum, IMAGE_TYPE, displayName, "Pictures/pendingA/ispending/");
        });

        /**
         * @tc.number	 : SUB_MEDIA_MEDIALIBRARY_SETPENDING_CALLBACK_002_01
         * @tc.name 	 : ispending
         * @tc.desc 	 : image setPending true
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 2
         */
        it("SUB_MEDIA_MEDIALIBRARY_SETPENDING_CALLBACK_002_01", 0, async function (done) {
            let testNum = "SUB_MEDIA_MEDIALIBRARY_SETPENDING_CALLBACK_002_01";
            let displayName = `setPeningT${new Date().getTime()}.jpg`;
            await setPendingTest(done, testNum, IMAGE_TYPE, displayName, "Pictures/pendingA/setPeningT/", true);
        });

        // /**
        //  * @tc.number	 : SUB_MEDIA_MEDIALIBRARY_SETPENDING_CALLBACK_003_01
        //  * @tc.name 	 : ispending
        //  * @tc.desc 	 : image setPending false
        //  * @tc.size 	 : MEDIUM
        //  * @tc.type 	 : Function
        //  * @tc.level	 : Level 2
        //  */
        // it("SUB_MEDIA_MEDIALIBRARY_SETPENDING_CALLBACK_003_01", 0, async function (done) {
        //     let testNum = "SUB_MEDIA_MEDIALIBRARY_SETPENDING_CALLBACK_003_01";
        //     let displayName = "setPendingF.jpg";
        //     await setPendingTest(done, testNum, IMAGE_TYPE, displayName, "Pictures/pendingA/setPendingF/", false);
        // });

        // /**
        //  * @tc.number	 : SUB_MEDIA_MEDIALIBRARY_SETPENDING_004_01
        //  * @tc.name 	 : ispending
        //  * @tc.desc 	 : image setPending true can open
        //  * @tc.size 	 : MEDIUM
        //  * @tc.type 	 : Function
        //  * @tc.level	 : Level 2
        //  */
        // it("SUB_MEDIA_MEDIALIBRARY_SETPENDING_004_01", 0, async function (done) {
        //     let testNum = "SUB_MEDIA_MEDIALIBRARY_SETPENDING_004_01";
        //     let displayName = "ispendingOpen.jpg";
        //     await isPendingOpenTest(done, testNum, IMAGE_TYPE, displayName, "Pictures/pendingA/ispendingOpen/");
        // });

        // /**
        //  * @tc.number	 : SUB_MEDIA_MEDIALIBRARY_SETPENDING_005_01
        //  * @tc.name 	 : ispending
        //  * @tc.desc 	 : image setPending true can open
        //  * @tc.size 	 : MEDIUM
        //  * @tc.type 	 : Function
        //  * @tc.level	 : Level 2
        //  */
        // it("SUB_MEDIA_MEDIALIBRARY_SETPENDING_005_01", 0, async function (done) {
        //     let testNum = "SUB_MEDIA_MEDIALIBRARY_SETPENDING_005_01";
        //     let displayName = "ispendingGetThumbnails.jpg";
        //     await isPendingGetThumbnailsTest(
        //         done,
        //         testNum,
        //         IMAGE_TYPE,
        //         displayName,
        //         "Pictures/pendingA/ispendingGetThumbnails/"
        //     );
        // });

        // /**
        //  * @tc.number	 : SUB_MEDIA_MEDIALIBRARY_SETPENDING_ABNORMAL_CALLBACK_006_01
        //  * @tc.name 	 : ispending
        //  * @tc.desc 	 : image setPending 1
        //  * @tc.size 	 : MEDIUM
        //  * @tc.type 	 : Function
        //  * @tc.level	 : Level 2
        //  */
        // it("SUB_MEDIA_MEDIALIBRARY_SETPENDING_ABNORMAL_CALLBACK_006_01", 0, async function (done) {
        //     let testNum = "SUB_MEDIA_MEDIALIBRARY_SETPENDING_ABNORMAL_CALLBACK_006_01";
        //     let displayName = "setPendingF.jpg";
        //     await setPendingAbnormalTest(
        //         done,
        //         testNum,
        //         IMAGE_TYPE,
        //         displayName,
        //         "Pictures/pendingA/ispendingError/",
        //         1
        //     );
        // });
    });
}
