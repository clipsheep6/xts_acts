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
            console.info("pending beforeAll case");
            await checkPresetsAssets(media, "ActsMediaLibraryPendingJsTest");
        });
        beforeEach(function () {
            console.info("pending beforeEach case");
        });
        afterEach(async function () {
            console.info("pending afterEach case");
            await sleep();
        });
        afterAll(async function () {
            console.info("pending afterAll case");
        });

        const media = mediaLibrary.getMediaLibrary(abilityContext);

        async function isPendingTest(done, testNum, media_type, displayName, path) {
            console.info("pending isPendingTest IN");
            try {
                console.info("pending isPendingTest 1");
                let creatAsset = await media.createAsset(media_type, displayName, path);
                console.info("pending isPendingTest 2");
                let assetOp = fileIdFetchOps(testNum, creatAsset.id);
                console.info("pending isPendingTest 3");
                let fetchFileResult = await media.getFileAssets(assetOp);
                console.info("pending isPendingTest 4");
                let checkAssetCountPass = await checkAssetsCount(done, testNum, fetchFileResult, 1);
                console.info("pending isPendingTest 5");
                if (!checkAssetCountPass) return;
                console.info("pending isPendingTest 6");
                const asset = await fetchFileResult.getFirstObject();
                console.info("pending isPendingTest 7");
                console.info("pending isPendingTest isPending:" + asset.isPending);
                expect(asset.isPending).assertEqual(false);
                await fetchFileResult.close();
                console.info("pending isPendingTest 8");
                done();
            } catch (error) {
                console.info("pending isPendingTest "+ `${testNum} error : ${error}`);
                expect(false).assertTrue();
                done();
            }
            console.info("pending isPendingTest OUT");
        }

        async function setPendingTest(done, testNum, media_type, displayName, path, state) {
            console.info("pending setPendingTest IN");
            try {
                console.info("pending setPendingTest 1");
                let creatAsset = await media.createAsset(media_type, displayName, path);
                console.info("pending setPendingTest 2");
                let assetOp = fileIdFetchOps(testNum, creatAsset.id);
                console.info("pending setPendingTest 3");
                let fetchFileResult = await media.getFileAssets(assetOp);
                console.info("pending setPendingTest 4");
                let checkAssetCountPass = await checkAssetsCount(done, testNum, fetchFileResult, 1);
                console.info("pending setPendingTest 5");
                if (!checkAssetCountPass) return;
                console.info("pending setPendingTest 6");
                let asset = await fetchFileResult.getFirstObject();
                console.info("pending setPendingTest 7");
                if (!state) {
                    console.info("pending setPendingTest 8");
                    await asset.setPending(true);
                }
                console.info("pending setPendingTest 9");
                asset.setPending(state, async (err) => {
                    console.info("pending setPendingTest 10");
                    if (err) {
                        console.info("pending setPendingTest "+ `${testNum} err : ${err}`);
                        expect(false).assertTrue();
                        done();
                        return;
                    }
                    console.info("pending setPendingTest 10");
                    await fetchFileResult.close();
                    console.info("pending setPendingTest 11");
                    fetchFileResult = await media.getFileAssets(assetOp);
                    console.info("pending setPendingTest 12");
                    asset = await fetchFileResult.getFirstObject();
                    console.info("pending setPendingTest isPending:" + asset.isPending + ",state:" + state);
                    expect(asset.isPending).assertEqual(state);
                    console.info("pending setPendingTest 13");
                    await fetchFileResult.close();
                    done();
                });
            } catch (error) {
                console.info("pending setPendingTest " + `${testNum} error : ${error}`);
                expect(false).assertTrue();
                done();
            }
            console.info("pending setPendingTest OUI");
        }
        async function isPendingOpenTest(done, testNum, media_type, displayName, path) {
            console.info("pending isPendingOpenTest IN");
            try {
                console.info("pending isPendingOpenTest 1");
                let creatAsset = await media.createAsset(media_type, displayName, path);
                console.info("pending isPendingOpenTest 2");
                let assetOp = fileIdFetchOps(testNum, creatAsset.id);
                console.info("pending isPendingOpenTest 3");
                let fetchFileResult = await media.getFileAssets(assetOp);
                console.info("pending isPendingOpenTest 4");
                let checkAssetCountPass = await checkAssetsCount(done, testNum, fetchFileResult, 1);
                console.info("pending isPendingOpenTest 5");
                if (!checkAssetCountPass) return;
                console.info("pending isPendingOpenTest 6");
                let asset = await fetchFileResult.getFirstObject();
                console.info("pending isPendingOpenTest 7");
                asset.setPending(true, async (err) => {
                    console.info("pending isPendingOpenTest 8");
                    if (err) {
                        console.info("pending isPendingOpenTest " + `${testNum} err : ${err}`);
                        expect(false).assertTrue();
                        done();
                        return;
                    }
                    console.info("pending isPendingOpenTest 9");
                    await fetchFileResult.close();
                    console.info("pending isPendingOpenTest 10");
                    fetchFileResult = await media.getFileAssets(assetOp);
                    console.info("pending isPendingOpenTest 11");
                    asset = await fetchFileResult.getFirstObject();
                    console.info("pending isPendingOpenTest 12");
                    let fd = asset.open("rw");
                    console.info("pending isPendingOpenTest fd:" + fd);
                    expect(isNum(fd)).assertTrue();
                    await fetchFileResult.close();
                    done();
                });
            } catch (error) {
                console.info("pending isPendingOpenTest " + `${testNum} error : ${error}`);
                expect(false).assertTrue();
                done();
            }
            console.info("pending isPendingOpenTest OUT");
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
            console.info("pending setPendingAbnormalTest IN");
            try {
                console.info("pending setPendingAbnormalTest 1");
                let creatAsset = await media.createAsset(media_type, displayName, path);
                console.info("pending setPendingAbnormalTest 2");
                let assetOp = fileIdFetchOps(testNum, creatAsset.id);
                console.info("pending setPendingAbnormalTest 3");
                let fetchFileResult = await media.getFileAssets(assetOp);
                console.info("pending setPendingAbnormalTest 4");
                let checkAssetCountPass = await checkAssetsCount(done, testNum, fetchFileResult, 1);
                console.info("pending setPendingAbnormalTest 5");
                if (!checkAssetCountPass) return;
                console.info("pending setPendingAbnormalTest 6");
                let asset = await fetchFileResult.getFirstObject();
                console.info("pending setPendingAbnormalTest 7");
                asset.setPending(val, async (err) => {
                    console.info("pending setPendingAbnormalTest 8");
                    if (err) {
                        console.info("pending setPendingAbnormalTest " + `${testNum} err : ${err}`);
                        expect(true).assertTrue();
                        done();
                        return;
                    }
                    console.info("pending setPendingAbnormalTest 9");
                    expect(false).assertTrue();
                    done();
                });
            } catch (error) {
                console.info("pending setPendingAbnormalTest " + `${testNum} error : ${error}`);
                expect(false).assertTrue();
                done();
            }
            console.info("pending setPendingAbnormalTest OUT");
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
            let displayName = "ispending.jpg";
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
            let displayName = "setPeningT.jpg";
            await setPendingTest(done, testNum, IMAGE_TYPE, displayName, "Pictures/pendingA/setPeningT/", true);
        });

        /**
         * @tc.number	 : SUB_MEDIA_MEDIALIBRARY_SETPENDING_CALLBACK_003_01
         * @tc.name 	 : ispending
         * @tc.desc 	 : image setPending false
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 2
         */
        it("SUB_MEDIA_MEDIALIBRARY_SETPENDING_CALLBACK_003_01", 0, async function (done) {
            let testNum = "SUB_MEDIA_MEDIALIBRARY_SETPENDING_CALLBACK_003_01";
            let displayName = "setPendingF.jpg";
            await setPendingTest(done, testNum, IMAGE_TYPE, displayName, "Pictures/pendingA/setPendingF/", false);
        });

        /**
         * @tc.number	 : SUB_MEDIA_MEDIALIBRARY_SETPENDING_004_01
         * @tc.name 	 : ispending
         * @tc.desc 	 : image setPending true can open
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 2
         */
        it("SUB_MEDIA_MEDIALIBRARY_SETPENDING_004_01", 0, async function (done) {
            let testNum = "SUB_MEDIA_MEDIALIBRARY_SETPENDING_004_01";
            let displayName = "ispendingOpen.jpg";
            await isPendingOpenTest(done, testNum, IMAGE_TYPE, displayName, "Pictures/pendingA/ispendingOpen/");
        });

        /**
         * @tc.number	 : SUB_MEDIA_MEDIALIBRARY_SETPENDING_005_01
         * @tc.name 	 : ispending
         * @tc.desc 	 : image setPending true can open
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 2
         */
        it("SUB_MEDIA_MEDIALIBRARY_SETPENDING_005_01", 0, async function (done) {
            let testNum = "SUB_MEDIA_MEDIALIBRARY_SETPENDING_005_01";
            let displayName = "ispendingGetThumbnails.jpg";
            await isPendingGetThumbnailsTest(
                done,
                testNum,
                IMAGE_TYPE,
                displayName,
                "Pictures/pendingA/ispendingGetThumbnails/"
            );
        });

        /**
         * @tc.number	 : SUB_MEDIA_MEDIALIBRARY_SETPENDING_ABNORMAL_CALLBACK_006_01
         * @tc.name 	 : ispending
         * @tc.desc 	 : image setPending 1
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 2
         */
        it("SUB_MEDIA_MEDIALIBRARY_SETPENDING_ABNORMAL_CALLBACK_006_01", 0, async function (done) {
            let testNum = "SUB_MEDIA_MEDIALIBRARY_SETPENDING_ABNORMAL_CALLBACK_006_01";
            let displayName = "setPendingF.jpg";
            await setPendingAbnormalTest(
                done,
                testNum,
                IMAGE_TYPE,
                displayName,
                "Pictures/pendingA/ispendingError/",
                1
            );
        });
    });
}
