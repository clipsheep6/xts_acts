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
import image from "@ohos.multimedia.image";

import {
    sleep,
    IMAGE_TYPE,
    AUDIO_TYPE,
    VIDEO_TYPE,
    FILE_TYPE,
    fetchOps,
    getPermission,
    fileIdFetchOps,
    checkPresetsAssets,
    isNum,
    checkAssetsCount,
    copyFile,
} from "../../../../../../common";

export default function pendingCallbackA(abilityContext) {
    describe("pendingCallbackA", function () {
        beforeAll(async function () {
            image.createPixelMap(new ArrayBuffer(4096), { size: { height: 1, width: 2 } }).then(() => {});
            await getPermission(null, abilityContext);
            console.info("beforeAll case");
            await checkPresetsAssets(media, "ActsMediaLibraryPendingAJsTest");
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
                let oldTime = getSecond();
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
                    let currentTime = getSecond();
                    if (state) {
                        expect(asset.pendingTime <= currentTime && asset.pendingTime >= oldTime).assertTrue();
                    } else {
                        expect(asset.pendingTime).assertEqual(0);
                    }
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
                    let fd = await asset.open("rw");
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

        async function isPendingGetThumbnailsTest(done, testNum, media_type, path, creatPath, displayName) {
            try {
                let assetOp = fetchOps(testNum, path, media_type);
                let fetchFileResult = await media.getFileAssets(assetOp);
                let checkAssetCountPass = await checkAssetsCount(done, testNum, fetchFileResult, 1);
                if (!checkAssetCountPass) return;
                let asset = await fetchFileResult.getFirstObject();
                await fetchFileResult.close();
                const fd = await asset.open("rw");
                let creatAsset = await media.createAsset(media_type, displayName, creatPath);
                const creatAssetFd = await creatAsset.open("rw");
                await copyFile(fd, creatAssetFd);
                await creatAsset.close(creatAssetFd);
                await asset.close(fd);
                await creatAsset.setPending(true);
                let state = await creatAsset.isPending();
                expect(state).assertEqual(true);
                try {
                    await creatAsset.getThumbnail();
                    expect(false).assertTrue();
                    done();
                } catch (error) {
                    console.info(`${testNum} err : ${error}`);
                    expect(true).assertTrue();
                    done();
                }
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
                    asset.setPending(val, async () => {
                        expect(false).assertTrue();
                        done();
                    });
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
            await isPendingTest(done, testNum, IMAGE_TYPE, displayName, "Pictures/pendingA/cb/ispending/");
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
            await isPendingTest(done, testNum, VIDEO_TYPE, displayName, "Videos/pendingA/cb/ispending/");
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
            await isPendingTest(done, testNum, AUDIO_TYPE, displayName, "Audios/pendingA/cb/ispending/");
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
            await isPendingTest(done, testNum, FILE_TYPE, displayName, "Documents/pendingA/cb/ispending/");
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
            let displayName = `setPendingT${new Date().getTime()}.jpg`;
            await setPendingTest(done, testNum, IMAGE_TYPE, displayName, "Pictures/pendingA/cb/setPendingT/", true);
        });

        /**
         * @tc.number	 : SUB_MEDIA_MEDIALIBRARY_SETPENDING_CALLBACK_002_02
         * @tc.name 	 : ispending
         * @tc.desc 	 : video setPending true
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 2
         */
        it("SUB_MEDIA_MEDIALIBRARY_SETPENDING_CALLBACK_002_02", 0, async function (done) {
            let testNum = "SUB_MEDIA_MEDIALIBRARY_SETPENDING_CALLBACK_002_02";
            let displayName = `setPendingT${new Date().getTime()}.mp4`;
            await setPendingTest(done, testNum, VIDEO_TYPE, displayName, "Videos/pendingA/cb/setPendingT/", true);
        });

        /**
         * @tc.number	 : SUB_MEDIA_MEDIALIBRARY_SETPENDING_CALLBACK_002_03
         * @tc.name 	 : ispending
         * @tc.desc 	 : audio setPending true
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 2
         */
        it("SUB_MEDIA_MEDIALIBRARY_SETPENDING_CALLBACK_002_03", 0, async function (done) {
            let testNum = "SUB_MEDIA_MEDIALIBRARY_SETPENDING_CALLBACK_002_03";
            let displayName = `setPendingT${new Date().getTime()}.mp3`;
            await setPendingTest(done, testNum, AUDIO_TYPE, displayName, "Audios/pendingA/cb/setPendingT/", true);
        });

        /**
         * @tc.number	 : SUB_MEDIA_MEDIALIBRARY_SETPENDING_CALLBACK_002_04
         * @tc.name 	 : ispending
         * @tc.desc 	 : file setPending true
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 2
         */
        it("SUB_MEDIA_MEDIALIBRARY_SETPENDING_CALLBACK_002_04", 0, async function (done) {
            let testNum = "SUB_MEDIA_MEDIALIBRARY_SETPENDING_CALLBACK_002_04";
            let displayName = `setPendingT${new Date().getTime()}.dat`;
            await setPendingTest(done, testNum, FILE_TYPE, displayName, "Documents/pendingA/cb/setPendingT/", true);
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
            let displayName = `setPeningF${new Date().getTime()}.jpg`;
            await setPendingTest(done, testNum, IMAGE_TYPE, displayName, "Pictures/pendingA/cb/setPendingF/", false);
        });

        /**
         * @tc.number	 : SUB_MEDIA_MEDIALIBRARY_SETPENDING_CALLBACK_003_02
         * @tc.name 	 : ispending
         * @tc.desc 	 : mp4 setPending false
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 2
         */
        it("SUB_MEDIA_MEDIALIBRARY_SETPENDING_CALLBACK_003_02", 0, async function (done) {
            let testNum = "SUB_MEDIA_MEDIALIBRARY_SETPENDING_CALLBACK_003_02";
            let displayName = `setPeningF${new Date().getTime()}.mp4`;
            await setPendingTest(done, testNum, VIDEO_TYPE, displayName, "Videos/pendingA/cb/setPendingF/", false);
        });

        /**
         * @tc.number	 : SUB_MEDIA_MEDIALIBRARY_SETPENDING_CALLBACK_003_03
         * @tc.name 	 : ispending
         * @tc.desc 	 : mp3 setPending false
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 2
         */
        it("SUB_MEDIA_MEDIALIBRARY_SETPENDING_CALLBACK_003_03", 0, async function (done) {
            let testNum = "SUB_MEDIA_MEDIALIBRARY_SETPENDING_CALLBACK_003_03";
            let displayName = `setPeningF${new Date().getTime()}.mp3`;
            await setPendingTest(done, testNum, AUDIO_TYPE, displayName, "Audios/pendingA/cb/setPendingF/", false);
        });

        /**
         * @tc.number	 : SUB_MEDIA_MEDIALIBRARY_SETPENDING_CALLBACK_003_04
         * @tc.name 	 : ispending
         * @tc.desc 	 : file setPending false
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 2
         */
        it("SUB_MEDIA_MEDIALIBRARY_SETPENDING_CALLBACK_003_04", 0, async function (done) {
            let testNum = "SUB_MEDIA_MEDIALIBRARY_SETPENDING_CALLBACK_003_04";
            let displayName = `setPeningF${new Date().getTime()}.dat`;
            await setPendingTest(done, testNum, FILE_TYPE, displayName, "Documents/pendingA/cb/setPendingF/", false);
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
            let displayName = `ispendingOpen${new Date().getTime()}.jpg`;
            await isPendingOpenTest(done, testNum, IMAGE_TYPE, displayName, "Pictures/pendingA/cb/ispendingOpen/");
        });

        /**
         * @tc.number	 : SUB_MEDIA_MEDIALIBRARY_SETPENDING_004_02
         * @tc.name 	 : ispending
         * @tc.desc 	 : video setPending true can open
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 2
         */
        it("SUB_MEDIA_MEDIALIBRARY_SETPENDING_004_02", 0, async function (done) {
            let testNum = "SUB_MEDIA_MEDIALIBRARY_SETPENDING_004_02";
            let displayName = `ispendingOpen${new Date().getTime()}.mp4`;
            await isPendingOpenTest(done, testNum, VIDEO_TYPE, displayName, "Videos/pendingA/cb/ispendingOpen/");
        });

        /**
         * @tc.number	 : SUB_MEDIA_MEDIALIBRARY_SETPENDING_004_03
         * @tc.name 	 : ispending
         * @tc.desc 	 : audio setPending true can open
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 2
         */
        it("SUB_MEDIA_MEDIALIBRARY_SETPENDING_004_03", 0, async function (done) {
            let testNum = "SUB_MEDIA_MEDIALIBRARY_SETPENDING_004_03";
            let displayName = `ispendingOpen${new Date().getTime()}.mp3`;
            await isPendingOpenTest(done, testNum, AUDIO_TYPE, displayName, "Audios/pendingA/cb/ispendingOpen/");
        });

        /**
         * @tc.number	 : SUB_MEDIA_MEDIALIBRARY_SETPENDING_004_04
         * @tc.name 	 : ispending
         * @tc.desc 	 : file setPending true can open
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 2
         */
        it("SUB_MEDIA_MEDIALIBRARY_SETPENDING_004_04", 0, async function (done) {
            let testNum = "SUB_MEDIA_MEDIALIBRARY_SETPENDING_004_04";
            let displayName = `ispendingOpen${new Date().getTime()}.dat`;
            await isPendingOpenTest(done, testNum, FILE_TYPE, displayName, "Documents/pendingA/cb/ispendingOpen/");
        });

        /**
         * @tc.number	 : SUB_MEDIA_MEDIALIBRARY_SETPENDING_ABNORMAL_CALLBACK_005_01
         * @tc.name 	 : ispending
         * @tc.desc 	 : image setPending 1
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 2
         */
        it("SUB_MEDIA_MEDIALIBRARY_SETPENDING_ABNORMAL_CALLBACK_005_01", 0, async function (done) {
            let testNum = "SUB_MEDIA_MEDIALIBRARY_SETPENDING_ABNORMAL_CALLBACK_005_01";
            let displayName = `ispendingOpen${new Date().getTime()}.jpg`;
            await setPendingAbnormalTest(
                done,
                testNum,
                IMAGE_TYPE,
                displayName,
                "Pictures/pendingA/cb/ispendingError/",
                1
            );
        });

        /**
         * @tc.number	 : SUB_MEDIA_MEDIALIBRARY_SETPENDING_ABNORMAL_CALLBACK_005_02
         * @tc.name 	 : ispending
         * @tc.desc 	 : image setPending 'a'
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 2
         */
        it("SUB_MEDIA_MEDIALIBRARY_SETPENDING_ABNORMAL_CALLBACK_005_02", 0, async function (done) {
            let testNum = "SUB_MEDIA_MEDIALIBRARY_SETPENDING_ABNORMAL_CALLBACK_005_02";
            let displayName = `ispendingOpen${new Date().getTime()}.jpg`;
            await setPendingAbnormalTest(
                done,
                testNum,
                IMAGE_TYPE,
                displayName,
                "Pictures/pendingA/cb/ispendingError/",
                "a"
            );
        });

        /**
         * @tc.number	 : SUB_MEDIA_MEDIALIBRARY_SETPENDING_ABNORMAL_CALLBACK_005_03
         * @tc.name 	 : ispending
         * @tc.desc 	 : image setPending null
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 2
         */
        it("SUB_MEDIA_MEDIALIBRARY_SETPENDING_ABNORMAL_CALLBACK_005_03", 0, async function (done) {
            let testNum = "SUB_MEDIA_MEDIALIBRARY_SETPENDING_ABNORMAL_CALLBACK_005_03";
            let displayName = `ispendingOpen${new Date().getTime()}.jpg`;
            await setPendingAbnormalTest(
                done,
                testNum,
                IMAGE_TYPE,
                displayName,
                "Pictures/pendingA/cb/ispendingError/",
                null
            );
        });

        /**
         * @tc.number	 : SUB_MEDIA_MEDIALIBRARY_SETPENDING_ABNORMAL_CALLBACK_005_04
         * @tc.name 	 : ispending
         * @tc.desc 	 : image setPending undefined
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 2
         */
        it("SUB_MEDIA_MEDIALIBRARY_SETPENDING_ABNORMAL_CALLBACK_005_04", 0, async function (done) {
            let testNum = "SUB_MEDIA_MEDIALIBRARY_SETPENDING_ABNORMAL_CALLBACK_005_04";
            let displayName = `ispendingOpen${new Date().getTime()}.jpg`;
            await setPendingAbnormalTest(
                done,
                testNum,
                IMAGE_TYPE,
                displayName,
                "Pictures/pendingA/cb/ispendingError/",
                undefined
            );
        });
        /**
         * @tc.number	 : SUB_MEDIA_MEDIALIBRARY_SETPENDING_ABNORMAL_CALLBACK_005_05
         * @tc.name 	 : ispending
         * @tc.desc 	 : image setPending {a:1}
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 2
         */
        it("SUB_MEDIA_MEDIALIBRARY_SETPENDING_ABNORMAL_CALLBACK_005_05", 0, async function (done) {
            let testNum = "SUB_MEDIA_MEDIALIBRARY_SETPENDING_ABNORMAL_CALLBACK_005_05";
            let displayName = `ispendingOpen${new Date().getTime()}.jpg`;
            await setPendingAbnormalTest(
                done,
                testNum,
                IMAGE_TYPE,
                displayName,
                "Pictures/pendingA/cb/ispendingError/",
                {
                    a: 1,
                }
            );
        });

        /**
         * @tc.number	 : SUB_MEDIA_MEDIALIBRARY_SETPENDING_006_01
         * @tc.name 	 : ispending
         * @tc.desc 	 : getThumbnail after image setPending true
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 2
         */
        it("SUB_MEDIA_MEDIALIBRARY_SETPENDING_006_01", 0, async function (done) {
            let testNum = "SUB_MEDIA_MEDIALIBRARY_SETPENDING_006_01";
            let displayName = `ispendingGetThumbnails${new Date().getTime()}.jpg`;

            await isPendingGetThumbnailsTest(
                done,
                testNum,
                IMAGE_TYPE,
                "Pictures/pendingA/cb/static/",
                "Pictures/pendingA/cb/ispendingGetThumbnails/",
                displayName
            );
        });

        /**
         * @tc.number	 : SUB_MEDIA_MEDIALIBRARY_SETPENDING_006_02
         * @tc.name 	 : ispending
         * @tc.desc 	 : getThumbnail after video setPending true
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 2
         */
        it("SUB_MEDIA_MEDIALIBRARY_SETPENDING_006_02", 0, async function (done) {
            let testNum = "SUB_MEDIA_MEDIALIBRARY_SETPENDING_006_02";
            let displayName = `ispendingGetThumbnails${new Date().getTime()}.mp4`;

            await isPendingGetThumbnailsTest(
                done,
                testNum,
                VIDEO_TYPE,
                "Videos/pendingA/cb/static/",
                "Videos/pendingA/cb/ispendingGetThumbnails/",
                displayName
            );
        });

        /**
         * @tc.number	 : SUB_MEDIA_MEDIALIBRARY_SETPENDING_006_03
         * @tc.name 	 : ispending
         * @tc.desc 	 : getThumbnail after audio setPending true
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 2
         */
        it("SUB_MEDIA_MEDIALIBRARY_SETPENDING_006_03", 0, async function (done) {
            let testNum = "SUB_MEDIA_MEDIALIBRARY_SETPENDING_006_03";
            let displayName = `ispendingGetThumbnails${new Date().getTime()}.mp3`;

            await isPendingGetThumbnailsTest(
                done,
                testNum,
                AUDIO_TYPE,
                "Audios/pendingA/cb/static/",
                "Audios/pendingA/cb/ispendingGetThumbnails/",
                displayName
            );
        });
    });
}
