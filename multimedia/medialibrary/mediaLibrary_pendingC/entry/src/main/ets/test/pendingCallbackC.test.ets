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
    fetchOps,
    getPermission,
    checkPresetsAssets,
    checkAssetsCount,
    isNum,
} from "../../../../../../common";

export default function pendingCallbackC(abilityContext) {
    describe("pendingCallbackC", function () {
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

        async function isPendingOpenTest(done, testNum, path, media_type) {
            try {
                let assetOp = fetchOps(testNum, path, media_type);
                let fetchFileResult = await media.getFileAssets(assetOp);
                let checkAssetCountPass = await checkAssetsCount(done, testNum, fetchFileResult, 1);
                if (!checkAssetCountPass) return;
                let asset = await fetchFileResult.getFirstObject();
                expect(asset.pendingTime).assertEqual(0);
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

        /**
         * @tc.number	 : SUB_MEDIA_MEDIALIBRARY_SETPENDING_CALLBACK_008_01
         * @tc.name 	 : trash
         * @tc.desc 	 : open hapB image asset ispending is true after uninstall hapB
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 2
         */
        it("SUB_MEDIA_MEDIALIBRARY_SETPENDING_CALLBACK_008_01", 0, async function (done) {
            let testNum = "SUB_MEDIA_MEDIALIBRARY_SETPENDING_CALLBACK_008_01";
            await isPendingOpenTest(done, testNum, "Pictures/pendingB/", IMAGE_TYPE);
        });
    });
}
