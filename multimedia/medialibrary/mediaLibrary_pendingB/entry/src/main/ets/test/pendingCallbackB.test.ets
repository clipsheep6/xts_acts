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
    fetchOps,
    getPermission,
    fileIdFetchOps,
    checkPresetsAssets,
    checkAssetsCount,
    isNum,
} from "../../../../../../common";

export default function pendingCallbackB(abilityContext) {
    describe("pendingCallbackB", function () {
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

        async function isPendingTest(done, testNum, path1, path2, media_type) {
            try {
                let pendingFalse = fetchOps(testNum, path1, media_type);
                let pendingTrue = fetchOps(testNum, path2, media_type);
                let fetchFileResult1 = await media.getFileAssets(pendingFalse);
                let checkAssetCountPass1 = await checkAssetsCount(done, testNum, fetchFileResult1, 1);
                if (!checkAssetCountPass1) return;
                let fetchFileResult2 = await media.getFileAssets(pendingTrue);
                let checkAssetCountPass2 = await checkAssetsCount(done, testNum, fetchFileResult2, 0);
                if (!checkAssetCountPass2) return;
                await fetchFileResult1.close();
                await fetchFileResult2.close();
                expect(true).assertTrue();
                done();
            } catch (error) {
                console.info(`${testNum} error : ${error}`);
                expect(false).assertTrue();
                done();
            }
        }

        async function isPendingOpenTest(done, testNum, path, media_type) {
            try {
                let assetOp = fetchOps(testNum, path, media_type);
                let fetchFileResult = await media.getFileAssets(assetOp);
                let checkAssetCountPass = await checkAssetsCount(done, testNum, fetchFileResult, 1);
                if (!checkAssetCountPass) return;
                let asset = await fetchFileResult.getFirstObject();
                let state = await asset.isPending();
                expect(state).assertEqual(false);
                let fd = await asset.open("rw");
                expect(isNum(fd)).assertTrue();
                await fetchFileResult.close();
                done();
            } catch (error) {
                console.info(`${testNum} error : ${error}`);
                expect(false).assertTrue();
                done();
            }
        }

        async function setPendingBTest(done, testNum, path, media_type, displayName) {
            try {
                let creatAsset = await media.createAsset(media_type, displayName, path);
                let assetOp = fileIdFetchOps(testNum, creatAsset.id);
                let fetchFileResult = await media.getFileAssets(assetOp);
                let checkAssetCountPass = await checkAssetsCount(done, testNum, fetchFileResult, 1);
                if (!checkAssetCountPass) return;
                let asset = await fetchFileResult.getFirstObject();
                await asset.setPending(true);
                await fetchFileResult.close();
                fetchFileResult = await media.getFileAssets(assetOp);
                asset = await fetchFileResult.getFirstObject();
                expect(await asset.isPending()).assertEqual(true);
                await fetchFileResult.close();
                done();
            } catch (error) {
                console.info(`${testNum} error : ${error}`);
                expect(false).assertTrue();
                done();
            }
        }

        async function setPendingATest(done, testNum, path, media_type) {
            try {
                let assetOp = fetchOps(testNum, path, media_type);
                let fetchFileResult = await media.getFileAssets(assetOp);
                let checkAssetCountPass = await checkAssetsCount(done, testNum, fetchFileResult, 1);
                if (!checkAssetCountPass) return;
                let asset = await fetchFileResult.getFirstObject();
                await fetchFileResult.close();
                expect(await asset.isPending()).assertEqual(false);
                try {
                    await asset.setPending(true);
                    fetchFileResult = await media.getFileAssets(assetOp);
                    asset = await fetchFileResult.getFirstObject();
                    expect(await asset.isPending()).assertEqual(false);
                    await fetchFileResult.close();
                    done();
                } catch (error) {
                    console.info(`${testNum} error : ${error}`);
                    expect(false).assertTrue();
                    done();
                }
            } catch (error) {
                console.info(`${testNum} error : ${error}`);
                expect(false).assertTrue();
                done();
            }
        }

        /**
         * @tc.number	 : SUB_MEDIA_MEDIALIBRARY_SETPENDING_CALLBACK_007_01
         * @tc.name 	 : setPending
         * @tc.desc 	 : find image asset ispending is true & false from hapA
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 2
         */
        it("SUB_MEDIA_MEDIALIBRARY_SETPENDING_CALLBACK_007_01", 0, async function (done) {
            let testNum = "SUB_MEDIA_MEDIALIBRARY_SETPENDING_CALLBACK_007_01";
            await isPendingTest(
                done,
                testNum,
                "Pictures/pendingA/cb/ispending/",
                "Pictures/pendingA/cb/setPendingT/",
                IMAGE_TYPE
            );
        });

        /**
         * @tc.number	 : SUB_MEDIA_MEDIALIBRARY_SETPENDING_CALLBACK_007_02
         * @tc.name 	 : setPending
         * @tc.desc 	 : open hapA image asset ispending is false
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 2
         */
        it("SUB_MEDIA_MEDIALIBRARY_SETPENDING_CALLBACK_007_02", 0, async function (done) {
            let testNum = "SUB_MEDIA_MEDIALIBRARY_SETPENDING_CALLBACK_007_02";
            await isPendingOpenTest(done, testNum, "Pictures/pendingA/cb/ispending/", IMAGE_TYPE);
        });

        /**
         * @tc.number	 : SUB_MEDIA_MEDIALIBRARY_SETPENDING_CALLBACK_007_03
         * @tc.name 	 : setPending
         * @tc.desc 	 : image asset setPending by true
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 2
         */
        it("SUB_MEDIA_MEDIALIBRARY_SETPENDING_CALLBACK_007_03", 0, async function (done) {
            let testNum = "SUB_MEDIA_MEDIALIBRARY_SETPENDING_CALLBACK_007_03";
            let displayName = `ispending${new Date().getTime()}.jpg`;
            await setPendingBTest(done, testNum, "Pictures/pendingB/", IMAGE_TYPE, displayName);
        });

        /**
         * @tc.number	 : SUB_MEDIA_MEDIALIBRARY_SETPENDING_CALLBACK_007_04
         * @tc.name 	 : setPending
         * @tc.desc 	 : hapA image asset setPending by true
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 2
         */
        it("SUB_MEDIA_MEDIALIBRARY_SETPENDING_CALLBACK_007_04", 0, async function (done) {
            let testNum = "SUB_MEDIA_MEDIALIBRARY_SETPENDING_CALLBACK_007_04";
            await setPendingATest(done, testNum, "Pictures/pendingA/cb/ispending/", IMAGE_TYPE);
        });
    });
}
