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
    isNum,
} from "../../../../../../common";

export default function openPromise(abilityContext) {
    describe("openPromise", function () {
        const mgr = userFileManager.getUserFileMgr(abilityContext);
        beforeAll(async function () {
            console.info("beforeAll case");
            await getUserFileMgrPermission("ohos.acts.multimedia.userfilemgr", abilityContext);
        });

        /**
         * @tc.number	 : SUB_MEDIA_USERFILEMGR_OPEN_PROMISE_0000
         * @tc.name 	 : open
         * @tc.desc 	 : fileAsset open with argument is "r"
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 2
         */
        it("SUB_MEDIA_USERFILEMGR_OPEN_PROMISE_0000", 0, async function (done) {
            let testNum = "SUB_MEDIA_USERFILEMGR_OPEN_PROMISE_0000";
            let displayName = `openT${new Date().getTime()}.jpg`;
            try {
                await mgr["createPhotoAsset"](displayName);
                let predicates = new dataSharePredicates.DataSharePredicates();
                let assetOp = {
                    fetchColumns: [],
                    predicates: predicates.equalTo("display_name", displayName),
                };
                let fetchResult = await mgr["getPhotoAssets"](assetOp);
                let fileAsset = await fetchResult.getFirstObject();
                try {
                    let fd = await fileAsset["open"]("r");
                    await fileAsset["close"](fd);
                } catch (err) {
                    console.info(`${testNum} err : ${err}`);
                    expect(true).assertTrue();
                    fetchResult.close();
                    done();
                    return;
                }
                expect(false).assertTrue();
                fetchResult.close();
                done();
            } catch (error) {
                console.info(`${testNum} error : ${error}`);
                expect(true).assertTrue();
                done();
            }
        });

        /**
         * @tc.number	 : SUB_MEDIA_USERFILEMGR_OPEN_PROMISE_0100
         * @tc.name 	 : open
         * @tc.desc 	 : fileAsset open with argument is "w"
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 2
         */
        it("SUB_MEDIA_USERFILEMGR_OPEN_PROMISE_0100", 0, async function (done) {
            let testNum = "SUB_MEDIA_USERFILEMGR_OPEN_PROMISE_0100";
            let displayName = `openT${new Date().getTime()}.jpg`;
            try {
                await mgr["createPhotoAsset"](displayName);
                let predicates = new dataSharePredicates.DataSharePredicates();
                let assetOp = {
                    fetchColumns: [],
                    predicates: predicates.equalTo("display_name", displayName),
                };
                let fetchResult = await mgr["getPhotoAssets"](assetOp);
                let fileAsset = await fetchResult.getFirstObject();
                let fd = await fileAsset["open"]("w");
                expect(isNum(fd)).assertTrue();
                await fileAsset["close"](fd);
                expect(true).assertTrue();
                fetchResult.close();
                done();
            } catch (error) {
                console.info(`${testNum} error : ${error}`);
                expect(false).assertTrue();
                done();
            }
        });

        /**
         * @tc.number	 : SUB_MEDIA_USERFILEMGR_OPEN_PROMISE_0200
         * @tc.name 	 : open
         * @tc.desc 	 : fileAsset open with argument is "rw"
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 2
         */
        it("SUB_MEDIA_USERFILEMGR_OPEN_PROMISE_0200", 0, async function (done) {
            let testNum = "SUB_MEDIA_USERFILEMGR_OPEN_PROMISE_0200";
            let displayName = `openT${new Date().getTime()}.jpg`;
            try {
                await mgr["createPhotoAsset"](displayName);
                let predicates = new dataSharePredicates.DataSharePredicates();
                let assetOp = {
                    fetchColumns: [],
                    predicates: predicates.equalTo("display_name", displayName),
                };
                let fetchResult = await mgr["getPhotoAssets"](assetOp);
                let fileAsset = await fetchResult.getFirstObject();
                let fd = await fileAsset["open"]("rw");
                expect(isNum(fd)).assertTrue();
                await fileAsset["close"](fd);
                expect(true).assertTrue();
                fetchResult.close();
                done();
            } catch (error) {
                console.info(`${testNum} error : ${error}`);
                expect(false).assertTrue();
                done();
            }
        });

        /**
         * @tc.number	 : SUB_MEDIA_USERFILEMGR_OPEN_PROMISE_0300
         * @tc.name 	 : open
         * @tc.desc 	 : fileAsset open with argument is undefined
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 2
         */
        it("SUB_MEDIA_USERFILEMGR_OPEN_PROMISE_0300", 0, async function (done) {
            let testNum = "SUB_MEDIA_USERFILEMGR_OPEN_PROMISE_0300";
            let displayName = `openT${new Date().getTime()}.jpg`;
            try {
                await mgr["createPhotoAsset"](displayName);
                let predicates = new dataSharePredicates.DataSharePredicates();
                let assetOp = {
                    fetchColumns: [],
                    predicates: predicates.equalTo("display_name", displayName),
                };
                let fetchResult = await mgr["getPhotoAssets"](assetOp);
                let fileAsset = await fetchResult.getFirstObject();
                try {
                    await fileAsset["open"](undefined);
                } catch (err) {
                    console.info(`${testNum} error : ${err}`);
                    expect(true).assertTrue();
                    fetchResult.close();
                    done();
                    return;
                }
                expect(false).assertTrue();
                fetchResult.close();
                done();
            } catch (error) {
                console.info(`${testNum} error : ${error}`);
                expect(true).assertTrue();
                done();
            }
        });
    });
}
