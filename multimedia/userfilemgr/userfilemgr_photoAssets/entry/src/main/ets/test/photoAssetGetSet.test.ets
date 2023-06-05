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

import { describe, beforeAll, it, expect } from "deccjsunit/index";
import userFileManager from "@ohos.filemanagement.userFileManager";
import dataSharePredicates from "@ohos.data.dataSharePredicates";
import {
    getUserFileMgrPermission,
    JPG_HEIGHT,
    JPG_WIDTH,
} from "../../../../../../common";

export default function photoAssetGetSet(abilityContext) {
    describe("photoAssetGetSet", function () {
        const mgr = userFileManager.getUserFileMgr(abilityContext);
        beforeAll(async function () {
            console.info("beforeAll case");
            await getUserFileMgrPermission("ohos.acts.multimedia.userfilemgr", abilityContext);
        });

        /**
         * @tc.number	 : SUB_MEDIA_USERFILEMGR_FILEASSET_GETSETTEST_0000
         * @tc.name 	 : fileAsset
         * @tc.desc 	 : get, set ImageVideoKey
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 2
         */
        it("SUB_MEDIA_USERFILEMGR_FILEASSET_GETSETTEST_0000", 0, async function (done) {
            let testNum = "SUB_MEDIA_USERFILEMGR_FILEASSET_GETSETTEST_0000";
            let columns = [
                userFileManager.ImageVideoKey.URI.toString(),
                userFileManager.ImageVideoKey.FILE_TYPE.toString(),
                userFileManager.ImageVideoKey.DISPLAY_NAME.toString(),
                userFileManager.ImageVideoKey.DATE_ADDED.toString(),
                userFileManager.ImageVideoKey.DATE_MODIFIED.toString(),
                userFileManager.ImageVideoKey.TITLE.toString(),
                userFileManager.ImageVideoKey.DURATION.toString(),
                userFileManager.ImageVideoKey.WIDTH.toString(),
                userFileManager.ImageVideoKey.HEIGHT.toString(),
                userFileManager.ImageVideoKey.DATE_TAKEN.toString(),
                userFileManager.ImageVideoKey.ORIENTATION.toString(),
                userFileManager.ImageVideoKey.FAVORITE.toString(),
                userFileManager.ImageVideoKey.POSITION.toString(),
                userFileManager.ImageVideoKey.DATE_TRASHED.toString(),
                userFileManager.ImageVideoKey.HIDDEN.toString()
            ];
            try {
                let predicates = new dataSharePredicates.DataSharePredicates();
                predicates.equalTo("height", JPG_HEIGHT).equalTo("width", JPG_WIDTH);
                let assetOp = {
                    fetchColumns: columns,
                    predicates: predicates,
                };
                let fetchResult = await mgr["getPhotoAssets"](assetOp);
                let fileAsset = await fetchResult.getFirstObject();
                let fd = await fileAsset["open"]("rw");
                await fileAsset["close"](fd);
                for (let i = 0; i < columns.length; i++) {
                    let value = fileAsset.get(columns[i]);
                    console.log("column: " + columns[i] + " value: " + value);
                }
                expect(fileAsset.fileType == 1).assertTrue();
                done();
            } catch (error) {
                console.info(`${testNum} error : ${error}`);
                expect(false).assertTrue();
                done();
            }
        });

        /**
         * @tc.number	 : SUB_MEDIA_USERFILEMGR_FILEASSET_GETSETTEST_0100
         * @tc.name 	 : fileAsset
         * @tc.desc 	 : set with 1st parameter invalid
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 2
         */
        it("SUB_MEDIA_USERFILEMGR_FILEASSET_GETSETTEST_0100", 0, async function (done) {
            let testNum = "SUB_MEDIA_USERFILEMGR_FILEASSET_GETSETTEST_0100";
            try {
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
                await fileAsset.set(undefined, 'setName.jpg');
                expect(false).assertTrue();
                done();
            } catch (error) {
                console.info(`${testNum} error : ${error}`);
                expect(true).assertTrue();
                done();
            }
        });

        /**
         * @tc.number	 : SUB_MEDIA_USERFILEMGR_FILEASSET_GETSETTEST_0200
         * @tc.name 	 : fileAsset
         * @tc.desc 	 : set with 2nd parameter invalid
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 2
         */
        it("SUB_MEDIA_USERFILEMGR_FILEASSET_PROMISE_0200", 0, async function (done) {
            let testNum = "SUB_MEDIA_USERFILEMGR_FILEASSET_GETSETTEST_0200";
            try {
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
                await fileAsset.set(userFileManager.ImageVideoKey.DISPLAY_NAME.toString(), undefined);
                expect(false).assertTrue();
                done();
            } catch (error) {
                console.info(`${testNum} error : ${error}`);
                expect(true).assertTrue();
                done();
            }
        });
    });
}
