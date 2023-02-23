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
import {
    sleep,
    IMAGE_TYPE,
    AUDIO_TYPE,
    VIDEO_TYPE,
    FILE_TYPE,
    fileIdFetchOps,
    checkAssetsCount,
} from "../../../../../../common";

export default function pendingPromiseA(abilityContext) {
    describe("pendingPromiseA", function () {
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
        const getSecond = () => {
            return Number(
                new Date()
                    .getTime()
                    .toString()
                    .slice(0, new Date().getTime().toString().length - 3)
            );
        };
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
                let state = await asset.isPending();
                expect(state).assertEqual(false);
                await fetchFileResult.close();
                done();
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
                let oldTime = getSecond();
                await asset.setPending(state);
                await fetchFileResult.close();
                fetchFileResult = await media.getFileAssets(assetOp);
                asset = await fetchFileResult.getFirstObject();
                let currentTime = getSecond();
                if (state) {
                    expect(asset.pendingTime <= currentTime && asset.pendingTime >= oldTime).assertTrue();
                } else {
                    expect(asset.pendingTime).assertEqual(0);
                }
                expect(await asset.isPending()).assertEqual(state);
                await fetchFileResult.close();
                done();
            } catch (error) {
                console.info(`${testNum} error : ${error}`);
                expect(false).assertTrue();
                done();
            }
        }

        async function setPendingAbnormalTest(done, testNum, media_type, displayName, path, val) {
            try {
                let creatAsset = await media.createAsset(media_type, displayName, path);
                let assetOp = fileIdFetchOps(testNum, creatAsset.id);
                let fetchFileResult = await media.getFileAssets(assetOp);
                let checkAssetCountPass = await checkAssetsCount(done, testNum, fetchFileResult, 1);
                if (!checkAssetCountPass) return;
                let asset = await fetchFileResult.getFirstObject();
                try {
                    await asset.setPending(val);
                    expect(false).assertTrue();
                    done();
                } catch {
                    expect(true).assertTrue();
                    done();
                }
            } catch (error) {
                console.info(`${testNum} error : ${error}`);
                expect(false).assertTrue();
                done();
            }
        }

        /**
         * @tc.number	 : SUB_MEDIA_MEDIALIBRARY_ISPENDING_001_01
         * @tc.name 	 : ispending
         * @tc.desc 	 : image asset default ispending
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 2
         */
        it("SUB_MEDIA_MEDIALIBRARY_ISPENDING_001_01", 0, async function (done) {
            let testNum = "SUB_MEDIA_MEDIALIBRARY_ISPENDING_001_01";
            let displayName = `ispending${new Date().getTime()}.jpg`;
            await isPendingTest(done, testNum, IMAGE_TYPE, displayName, "Pictures/pendingA/pro/ispending/");
        });

        /**
         * @tc.number	 : SUB_MEDIA_MEDIALIBRARY_ISPENDING_001_02
         * @tc.name 	 : ispending
         * @tc.desc 	 : video asset default ispending
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 2
         */
        it("SUB_MEDIA_MEDIALIBRARY_ISPENDING_001_02", 0, async function (done) {
            let testNum = "SUB_MEDIA_MEDIALIBRARY_ISPENDING_001_02";
            let displayName = `ispending${new Date().getTime()}.mp4`;
            await isPendingTest(done, testNum, VIDEO_TYPE, displayName, "Videos/pendingA/pro/ispending/");
        });

        /**
         * @tc.number	 : SUB_MEDIA_MEDIALIBRARY_ISPENDING_001_03
         * @tc.name 	 : ispending
         * @tc.desc 	 : audio asset default ispending
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 2
         */
        it("SUB_MEDIA_MEDIALIBRARY_ISPENDING_001_03", 0, async function (done) {
            let testNum = "SUB_MEDIA_MEDIALIBRARY_ISPENDING_001_03";
            let displayName = `ispending${new Date().getTime()}.mp3`;
            await isPendingTest(done, testNum, AUDIO_TYPE, displayName, "Audios/pendingA/pro/ispending/");
        });

        /**
         * @tc.number	 : SUB_MEDIA_MEDIALIBRARY_ISPENDING_001_04
         * @tc.name 	 : ispending
         * @tc.desc 	 : file asset default ispending
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 2
         */
        it("SUB_MEDIA_MEDIALIBRARY_ISPENDING_001_04", 0, async function (done) {
            let testNum = "SUB_MEDIA_MEDIALIBRARY_ISPENDING_001_04";
            let displayName = `ispending${new Date().getTime()}.dat`;
            await isPendingTest(done, testNum, FILE_TYPE, displayName, "Documents/pendingA/pro/ispending/");
        });

        /**
         * @tc.number	 : SUB_MEDIA_MEDIALIBRARY_SETPENDING_PROMISE_002_01
         * @tc.name 	 : ispending
         * @tc.desc 	 : image setPending true
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 2
         */
        it("SUB_MEDIA_MEDIALIBRARY_SETPENDING_PROMISE_002_01", 0, async function (done) {
            let testNum = "SUB_MEDIA_MEDIALIBRARY_SETPENDING_PROMISE_002_01";
            let displayName = `setPendingT${new Date().getTime()}.jpg`;
            await setPendingTest(done, testNum, IMAGE_TYPE, displayName, "Pictures/pendingA/pro/setPendingT/", true);
        });

        /**
         * @tc.number	 : SUB_MEDIA_MEDIALIBRARY_SETPENDING_PROMISE_002_02
         * @tc.name 	 : ispending
         * @tc.desc 	 : video setPending true
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 2
         */
        it("SUB_MEDIA_MEDIALIBRARY_SETPENDING_PROMISE_002_02", 0, async function (done) {
            let testNum = "SUB_MEDIA_MEDIALIBRARY_SETPENDING_PROMISE_002_02";
            let displayName = `setPendingT${new Date().getTime()}.mp4`;
            await setPendingTest(done, testNum, VIDEO_TYPE, displayName, "Videos/pendingA/pro/setPendingT/", true);
        });

        /**
         * @tc.number	 : SUB_MEDIA_MEDIALIBRARY_SETPENDING_PROMISE_002_03
         * @tc.name 	 : ispending
         * @tc.desc 	 : audio setPending true
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 2
         */
        it("SUB_MEDIA_MEDIALIBRARY_SETPENDING_PROMISE_002_03", 0, async function (done) {
            let testNum = "SUB_MEDIA_MEDIALIBRARY_SETPENDING_PROMISE_002_03";
            let displayName = `setPendingT${new Date().getTime()}.mp3`;
            await setPendingTest(done, testNum, AUDIO_TYPE, displayName, "Audios/pendingA/pro/setPendingT/", true);
        });

        /**
         * @tc.number	 : SUB_MEDIA_MEDIALIBRARY_SETPENDING_PROMISE_002_04
         * @tc.name 	 : ispending
         * @tc.desc 	 : file setPending true
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 2
         */
        it("SUB_MEDIA_MEDIALIBRARY_SETPENDING_PROMISE_002_04", 0, async function (done) {
            let testNum = "SUB_MEDIA_MEDIALIBRARY_SETPENDING_PROMISE_002_04";
            let displayName = `setPendingT${new Date().getTime()}.dat`;
            await setPendingTest(done, testNum, FILE_TYPE, displayName, "Documents/pendingA/pro/setPendingT/", true);
        });

        /**
         * @tc.number	 : SUB_MEDIA_MEDIALIBRARY_SETPENDING_PROMISE_003_01
         * @tc.name 	 : ispending
         * @tc.desc 	 : image setPending false
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 2
         */
        it("SUB_MEDIA_MEDIALIBRARY_SETPENDING_PROMISE_003_01", 0, async function (done) {
            let testNum = "SUB_MEDIA_MEDIALIBRARY_SETPENDING_PROMISE_003_01";
            let displayName = `setPeningF${new Date().getTime()}.jpg`;
            await setPendingTest(done, testNum, IMAGE_TYPE, displayName, "Pictures/pendingA/pro/setPendingF/", false);
        });

        /**
         * @tc.number	 : SUB_MEDIA_MEDIALIBRARY_SETPENDING_PROMISE_003_02
         * @tc.name 	 : ispending
         * @tc.desc 	 : mp4 setPending false
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 2
         */
        it("SUB_MEDIA_MEDIALIBRARY_SETPENDING_PROMISE_003_02", 0, async function (done) {
            let testNum = "SUB_MEDIA_MEDIALIBRARY_SETPENDING_PROMISE_003_02";
            let displayName = `setPeningF${new Date().getTime()}.mp4`;
            await setPendingTest(done, testNum, VIDEO_TYPE, displayName, "Videos/pendingA/pro/setPendingF/", false);
        });

        /**
         * @tc.number	 : SUB_MEDIA_MEDIALIBRARY_SETPENDING_PROMISE_003_03
         * @tc.name 	 : ispending
         * @tc.desc 	 : mp3 setPending false
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 2
         */
        it("SUB_MEDIA_MEDIALIBRARY_SETPENDING_PROMISE_003_03", 0, async function (done) {
            let testNum = "SUB_MEDIA_MEDIALIBRARY_SETPENDING_PROMISE_003_03";
            let displayName = `setPeningF${new Date().getTime()}.mp3`;
            await setPendingTest(done, testNum, AUDIO_TYPE, displayName, "Audios/pendingA/pro/setPendingF/", false);
        });

        /**
         * @tc.number	 : SUB_MEDIA_MEDIALIBRARY_SETPENDING_PROMISE_003_04
         * @tc.name 	 : ispending
         * @tc.desc 	 : file setPending false
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 2
         */
        it("SUB_MEDIA_MEDIALIBRARY_SETPENDING_PROMISE_003_04", 0, async function (done) {
            let testNum = "SUB_MEDIA_MEDIALIBRARY_SETPENDING_PROMISE_003_04";
            let displayName = `setPeningF${new Date().getTime()}.dat`;
            await setPendingTest(done, testNum, FILE_TYPE, displayName, "Documents/pendingA/pro/setPendingF/", false);
        });

        /**
         * @tc.number	 : SUB_MEDIA_MEDIALIBRARY_SETPENDING_ABNORMAL_PROMISE_005_01
         * @tc.name 	 : ispending
         * @tc.desc 	 : image setPending 1
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 2
         */
        it("SUB_MEDIA_MEDIALIBRARY_SETPENDING_ABNORMAL_PROMISE_005_01", 0, async function (done) {
            let testNum = "SUB_MEDIA_MEDIALIBRARY_SETPENDING_ABNORMAL_PROMISE_005_01";
            let displayName = `ispendingOpen${new Date().getTime()}.jpg`;
            await setPendingAbnormalTest(
                done,
                testNum,
                IMAGE_TYPE,
                displayName,
                "Pictures/pendingA/pro/ispendingError/",
                1
            );
        });

        /**
         * @tc.number	 : SUB_MEDIA_MEDIALIBRARY_SETPENDING_ABNORMAL_PROMISE_005_02
         * @tc.name 	 : ispending
         * @tc.desc 	 : image setPending 'a'
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 2
         */
        it("SUB_MEDIA_MEDIALIBRARY_SETPENDING_ABNORMAL_PROMISE_005_02", 0, async function (done) {
            let testNum = "SUB_MEDIA_MEDIALIBRARY_SETPENDING_ABNORMAL_PROMISE_005_02";
            let displayName = `ispendingOpen${new Date().getTime()}.jpg`;
            await setPendingAbnormalTest(
                done,
                testNum,
                IMAGE_TYPE,
                displayName,
                "Pictures/pendingA/pro/ispendingError/",
                "a"
            );
        });

        /**
         * @tc.number	 : SUB_MEDIA_MEDIALIBRARY_SETPENDING_ABNORMAL_PROMISE_005_03
         * @tc.name 	 : ispending
         * @tc.desc 	 : image setPending null
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 2
         */
        it("SUB_MEDIA_MEDIALIBRARY_SETPENDING_ABNORMAL_PROMISE_005_03", 0, async function (done) {
            let testNum = "SUB_MEDIA_MEDIALIBRARY_SETPENDING_ABNORMAL_PROMISE_005_03";
            let displayName = `ispendingOpen${new Date().getTime()}.jpg`;
            await setPendingAbnormalTest(
                done,
                testNum,
                IMAGE_TYPE,
                displayName,
                "Pictures/pendingA/pro/ispendingError/",
                null
            );
        });

        /**
         * @tc.number	 : SUB_MEDIA_MEDIALIBRARY_SETPENDING_ABNORMAL_PROMISE_005_04
         * @tc.name 	 : ispending
         * @tc.desc 	 : image setPending undefined
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 2
         */
        it("SUB_MEDIA_MEDIALIBRARY_SETPENDING_ABNORMAL_PROMISE_005_04", 0, async function (done) {
            let testNum = "SUB_MEDIA_MEDIALIBRARY_SETPENDING_ABNORMAL_PROMISE_005_04";
            let displayName = `ispendingOpen${new Date().getTime()}.jpg`;
            await setPendingAbnormalTest(
                done,
                testNum,
                IMAGE_TYPE,
                displayName,
                "Pictures/pendingA/pro/ispendingError/",
                undefined
            );
        });
        /**
         * @tc.number	 : SUB_MEDIA_MEDIALIBRARY_SETPENDING_ABNORMAL_PROMISE_005_05
         * @tc.name 	 : ispending
         * @tc.desc 	 : image setPending {a:1}
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 2
         */
        it("SUB_MEDIA_MEDIALIBRARY_SETPENDING_ABNORMAL_PROMISE_005_05", 0, async function (done) {
            let testNum = "SUB_MEDIA_MEDIALIBRARY_SETPENDING_ABNORMAL_PROMISE_005_05";
            let displayName = `ispendingOpen${new Date().getTime()}.jpg`;
            await setPendingAbnormalTest(
                done,
                testNum,
                IMAGE_TYPE,
                displayName,
                "Pictures/pendingA/pro/ispendingError/",
                {
                    a: 1,
                }
            );
        });
    });
}
