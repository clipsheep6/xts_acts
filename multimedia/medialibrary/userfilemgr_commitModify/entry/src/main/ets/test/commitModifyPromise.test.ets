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
// @ts-nocheck
import { describe, beforeAll, it, expect } from "deccjsunit/index";
import userFileManager from "@ohos.filemanagement.userFileManager";
import dataSharePredicates from "@ohos.data.dataSharePredicates";
import {
    getPermission,
    JPG_HEIGHT,
    JPG_WIDTH,
    COMMITMODIFY_USE_ERROR_CODE,
} from "../../../../../../common";

export default function commitModifyPromise(abilityContext) {
    describe("commitModifyPromise", function () {
        const mgr = userFileManager.getUserFileMgr(abilityContext);
        beforeAll(async function () {
            console.info("beforeAll case");
            await getPermission("ohos.acts.multimedia.userfilemgr", abilityContext);
        });

        /**
         * @tc.number	 : SUB_MEDIA_USERFILEMGR_COMMITMODIFY_PROMISE_0000
         * @tc.name 	 : commitModify
         * @tc.desc 	 : modify picture's displayname 'Picture_001.jpg' to '中文.jpg'
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 2
         */
        it("SUB_MEDIA_USERFILEMGR_COMMITMODIFY_PROMISE_0000", 0, async function (done) {
            let testNum = "SUB_MEDIA_USERFILEMGR_COMMITMODIFY_PROMISE_0000";
            try {
                // @ts-ignore
                let predicates = new dataSharePredicates.DataSharePredicates();
                let assetOp = {
                    fetchColumns: [],
                    predicates: predicates.equalTo("height", JPG_HEIGHT).equalTo("width", JPG_WIDTH),
                };
                let fetchResult = await mgr["getPhotoAssets"](assetOp);
                let fileAsset = await fetchResult.getFirstObject();
                let fd = await fileAsset["open"]("rw");
                await fileAsset["close"](fd);
                fileAsset.displayName = '中文.jpg';
                await fileAsset.commitModify();
                expect(fileAsset.displayName == '中文.jpg').assertTrue();
                await fileAsset["close"](fd);
                done();
            } catch (error) {
                console.info(`${testNum} error : ${error}`);
                expect(false).assertTrue();
                done();
            }
        });

        /**
         * @tc.number	 : SUB_MEDIA_USERFILEMGR_COMMITMODIFY_PROMISE_0100
         * @tc.name 	 : commitModify
         * @tc.desc 	 : modify picture's displayname 'Picture_001.jpg' to 'withoutExtension'
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 2
         */
        it("SUB_MEDIA_USERFILEMGR_COMMITMODIFY_PROMISE_0100", 0, async function (done) {
            let testNum = "SUB_MEDIA_USERFILEMGR_COMMITMODIFY_PROMISE_0100";
            try {
                // @ts-ignore
                let predicates = new dataSharePredicates.DataSharePredicates();
                predicates.equalTo("height", JPG_HEIGHT).equalTo("width", JPG_WIDTH);
                let assetOp = {
                    fetchColumns: [],
                    predicates: predicates,
                };
                let fetchResult = await mgr["getPhotoAssets"](assetOp);
                let fileAsset = await fetchResult.getFirstObject();
                let fd = await fileAsset["open"]("rw");
                await fileAsset["close"](fd);
                fileAsset.displayName = 'withoutExtension';
                await fileAsset.commitModify();
                expect(false).assertTrue();
                done();
            } catch (error) {
                console.info(`${testNum} error : ${error}`);
                expect(error.code == COMMITMODIFY_USE_ERROR_CODE).assertTrue();
                done();
            }
        });

    });
}
