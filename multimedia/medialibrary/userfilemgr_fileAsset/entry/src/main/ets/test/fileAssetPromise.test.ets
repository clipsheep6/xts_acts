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
    ERROR_CODE_INVALID_PARAMETER,
} from "../../../../../../common";

export default function fileAssetPromise(abilityContext) {
    describe("fileAssetPromise", function () {
        const mgr = userFileManager.getUserFileMgr(abilityContext);
        beforeAll(async function () {
            console.info("beforeAll case");
            await getPermission("ohos.acts.multimedia.userfilemgr", abilityContext);
        });

        /**
         * @tc.number	 : SUB_MEDIA_USERFILEMGR_FILEASSET_PROMISE_0000
         * @tc.name 	 : fileAsset
         * @tc.desc 	 : get、set ImageVideoKey
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 2
         */
        it("SUB_MEDIA_USERFILEMGR_FILEASSET_PROMISE_0000", 0, async function (done) {
            let testNum = "SUB_MEDIA_USERFILEMGR_FILEASSET_PROMISE_0000";
            try {
                // @ts-ignore
                let predicates = new dataSharePredicates.DataSharePredicates();
                predicates.equalTo("height", JPG_HEIGHT).equalTo("width", JPG_WIDTH);
                let assetOp = {
                    fetchColumns: ['date_added', 'date_modified', 'date_trashed', 'title',
                        'duration', 'width', 'height', 'date_taken', 'orientation', 'is_favorite'],
                    predicates: predicates,
                };
                let fetchResult = await mgr["getPhotoAssets"](assetOp);
                let fileAsset = await fetchResult.getFirstObject();
                let fd = await fileAsset["open"]("rw");
                await fileAsset["close"](fd);
                await fileAsset.get(userFileManager.ImageVideoKey.URI);
                await fileAsset.get(userFileManager.ImageVideoKey.FILE_TYPE);
                await fileAsset.get(userFileManager.ImageVideoKey.DISPLAY_NAME);
                await fileAsset.get(userFileManager.ImageVideoKey.DATE_ADDED);
                await fileAsset.get(userFileManager.ImageVideoKey.DATE_MODIFIED);
                await fileAsset.get(userFileManager.ImageVideoKey.DATE_TRASHED);
                await fileAsset.get(userFileManager.ImageVideoKey.TITLE);
                await fileAsset.get(userFileManager.ImageVideoKey.DURATION);
                await fileAsset.get(userFileManager.ImageVideoKey.WIDTH);
                await fileAsset.get(userFileManager.ImageVideoKey.HEIGHT);
                await fileAsset.get(userFileManager.ImageVideoKey.DATE_TAKEN);
                await fileAsset.get(userFileManager.ImageVideoKey.ORIENTATION);
                await fileAsset.get(userFileManager.ImageVideoKey.FAVORITE);
                expect(fileAsset.fileType == 1).assertTrue();
                done();
            } catch (error) {
                console.info(`${testNum} error : ${error}`);
                expect(false).assertTrue();
                done();
            }
        });

        /**
         * @tc.number	 : SUB_MEDIA_USERFILEMGR_FILEASSET_PROMISE_0100
         * @tc.name 	 : fileAsset
         * @tc.desc 	 : get without parameter
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 2
         */
        it("SUB_MEDIA_USERFILEMGR_FILEASSET_PROMISE_0100", 0, async function (done) {
            let testNum = "SUB_MEDIA_USERFILEMGR_FILEASSET_PROMISE_0100";
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
                await fileAsset.get();
                expect(false).assertTrue();
                done();
            } catch (error) {
                console.info(`${testNum} error : ${error}`);
                expect(error.code == ERROR_CODE_INVALID_PARAMETER).assertTrue();
                done();
            }
        });

        /**
         * @tc.number	 : SUB_MEDIA_USERFILEMGR_FILEASSET_PROMISE_0200
         * @tc.name 	 : fileAsset
         * @tc.desc 	 : set with 1st parameter invailed
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 2
         */
        it("SUB_MEDIA_USERFILEMGR_FILEASSET_PROMISE_0200", 0, async function (done) {
            let testNum = "SUB_MEDIA_USERFILEMGR_FILEASSET_PROMISE_0200";
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
                await fileAsset.set(undefined, 'setName.jpg');
                expect(false).assertTrue();
                done();
            } catch (error) {
                console.info(`${testNum} error : ${error}`);
                expect(error.code == ERROR_CODE_INVALID_PARAMETER).assertTrue();
                done();
            }
        });

        /**
         * @tc.number	 : SUB_MEDIA_USERFILEMGR_FILEASSET_PROMISE_0300
         * @tc.name 	 : fileAsset
         * @tc.desc 	 : set with 2nd parameter invailed
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 2
         */
        it("SUB_MEDIA_USERFILEMGR_FILEASSET_PROMISE_0300", 0, async function (done) {
            let testNum = "SUB_MEDIA_USERFILEMGR_FILEASSET_PROMISE_0300";
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
                await fileAsset.set(userFileManager.ImageVideoKey.DISPLAY_NAME, undefined);
                expect(false).assertTrue();
                done();
            } catch (error) {
                console.info(`${testNum} error : ${error}`);
                expect(error.code == ERROR_CODE_INVALID_PARAMETER).assertTrue();
                expect(true).assertTrue();
                done();
            }
        });
    });
}
