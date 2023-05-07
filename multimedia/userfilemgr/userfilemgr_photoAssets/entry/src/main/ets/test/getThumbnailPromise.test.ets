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
import image from "@ohos.multimedia.image";
import {
    getUserFileMgrPermission,
    JPG_HEIGHT,
    JPG_WIDTH,
} from "../../../../../../common";

export default function getThumbnailPromise(abilityContext) {
    describe("getThumbnailPromise", function () {
        image.createPixelMap(new ArrayBuffer(4096), { size: { height: 1, width: 2 } }).then((pixelmap) => { });
        const mgr = userFileManager.getUserFileMgr(abilityContext);
        beforeAll(async function () {
            console.info("beforeAll case");
            await getUserFileMgrPermission("ohos.acts.multimedia.userfilemgr", abilityContext);
        });

        /**
         * @tc.number	 : SUB_MEDIA_USERFILEMGR_GETTHUMBNAIL_PROMISE_0000
         * @tc.name 	 : getThumbnail
         * @tc.desc 	 : fileAsset getThumbnail without size (use default size : 256, 256)
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 2
         */
        it("SUB_MEDIA_USERFILEMGR_GETTHUMBNAIL_PROMISE_0000", 0, async function (done) {
            let testNum = "SUB_MEDIA_USERFILEMGR_GETTHUMBNAIL_PROMISE_0000";
            try {
                let predicates = new dataSharePredicates.DataSharePredicates();
                predicates.equalTo("height", JPG_HEIGHT).equalTo("width", JPG_WIDTH);
                let assetOp = {
                    fetchColumns: [],
                    predicates: predicates,
                };
                let fetchResult = await mgr["getPhotoAssets"](assetOp);
                let fileAsset = await fetchResult.getFirstObject();
                let pixelmap = await fileAsset.getThumbnail();
                expect(true).assertTrue();
                done();
            } catch (error) {
                console.info(`${testNum} error : ${error}`);
                expect(false).assertTrue();
                done();
            }
        });

        /**
         * @tc.number	 : SUB_MEDIA_USERFILEMGR_GETTHUMBNAIL_PROMISE_0100
         * @tc.name 	 : getThumbnail
         * @tc.desc 	 : fileAsset getThumbnail with parameter is undefined
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 2
         */
        it("SUB_MEDIA_USERFILEMGR_GETTHUMBNAIL_PROMISE_0100", 0, async function (done) {
            let testNum = "SUB_MEDIA_USERFILEMGR_GETTHUMBNAIL_PROMISE_0100";
            try {
                let predicates = new dataSharePredicates.DataSharePredicates();
                predicates.equalTo("height", JPG_HEIGHT).equalTo("width", JPG_WIDTH);
                let assetOp = {
                    fetchColumns: [],
                    predicates: predicates,
                };
                let fetchResult = await mgr["getPhotoAssets"](assetOp);
                let fileAsset = await fetchResult.getFirstObject();
                await fileAsset.getThumbnail(undefined);
                expect(false).assertTrue();
                done();
            } catch (error) {
                console.info(`${testNum} error : ${error}`);
                expect(true).assertTrue();
                done();
            }
        });

        /**
         * @tc.number	 : SUB_MEDIA_USERFILEMGR_GETTHUMBNAIL_PROMISE_0200
         * @tc.name 	 : getThumbnail
         * @tc.desc 	 : fileAsset getThumbnail with size, size is [128,128]
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 2
         */
        it("SUB_MEDIA_USERFILEMGR_GETTHUMBNAIL_PROMISE_0200", 0, async function (done) {
            let testNum = "SUB_MEDIA_USERFILEMGR_GETTHUMBNAIL_PROMISE_0200";
            try {
                let predicates = new dataSharePredicates.DataSharePredicates();
                predicates.equalTo("height", JPG_HEIGHT).equalTo("width", JPG_WIDTH);
                let assetOp = {
                    fetchColumns: [],
                    predicates: predicates,
                };
                let fetchResult = await mgr["getPhotoAssets"](assetOp);
                let fileAsset = await fetchResult.getFirstObject();

                let size = { width: 128, height: 128 };
                let s: image.Size = size;
                let pixelmap = await fileAsset.getThumbnail(s);
                let info = await pixelmap.getImageInfo();
                expect(info.size.width).assertEqual(size.width);
                expect(info.size.height).assertEqual(size.height);
                done();
            } catch (error) {
                console.info(`${testNum} error : ${error}`);
                expect(true).assertTrue();
                done();
            }
        });

        /**
         * @tc.number	 : SUB_MEDIA_USERFILEMGR_GETTHUMBNAIL_PROMISE_0300
         * @tc.name 	 : getThumbnail
         * @tc.desc 	 : fileAsset getThumbnail with size, size is [-1,-1]
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 2
         */
        it("SUB_MEDIA_USERFILEMGR_GETTHUMBNAIL_PROMISE_0300", 0, async function (done) {
            let testNum = "SUB_MEDIA_USERFILEMGR_GETTHUMBNAIL_PROMISE_0300";
            try {
                let predicates = new dataSharePredicates.DataSharePredicates();
                predicates.equalTo("height", JPG_HEIGHT).equalTo("width", JPG_WIDTH);
                let assetOp = {
                    fetchColumns: [],
                    predicates: predicates,
                };
                let fetchResult = await mgr["getPhotoAssets"](assetOp);
                let fileAsset = await fetchResult.getFirstObject();

                let size = { width: -1, height: -1 };
                let s: image.Size = size;
                await fileAsset.getThumbnail(s);
                expect(false).assertTrue();
                done();
            } catch (error) {
                console.info(`${testNum} error : ${error}`);
                expect(true).assertTrue();
                done();
            }
        });

        /**
         * @tc.number	 : SUB_MEDIA_USERFILEMGR_GETTHUMBNAIL_PROMISE_0400
         * @tc.name 	 : getThumbnail
         * @tc.desc 	 : fileAsset getThumbnail with size, size is [99999,99999]
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 2
         */
        it("SUB_MEDIA_USERFILEMGR_GETTHUMBNAIL_PROMISE_0400", 0, async function (done) {
            let testNum = "SUB_MEDIA_USERFILEMGR_GETTHUMBNAIL_PROMISE_0400";
            try {
                let predicates = new dataSharePredicates.DataSharePredicates();
                predicates.equalTo("height", JPG_HEIGHT).equalTo("width", JPG_WIDTH);
                let assetOp = {
                    fetchColumns: [],
                    predicates: predicates,
                };
                let fetchResult = await mgr["getPhotoAssets"](assetOp);
                let fileAsset = await fetchResult.getFirstObject();

                let size = { width: 99999, height: 99999 };
                let s: image.Size = size;
                await fileAsset.getThumbnail(s);
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
