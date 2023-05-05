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
    getPermission,
    isNum,
} from "../../../../../../common";

export default function openCallback(abilityContext) {
    describe("openCallback", function () {
        const mgr = userFileManager.getUserFileMgr(abilityContext);
        beforeAll(async function () {
            console.info("beforeAll case");
            await getPermission("ohos.acts.multimedia.userfilemgr", abilityContext);
        });

        /**
         * @tc.number	 : SUB_MEDIA_USERFILEMGR_OPEN_CALLBACK_0000
         * @tc.name 	 : open
         * @tc.desc 	 : fileAsset open with argument is "r"
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 2
         */
        it("SUB_MEDIA_USERFILEMGR_OPEN_CALLBACK_0000", 0, async function (done) {
            let testNum = "SUB_MEDIA_USERFILEMGR_OPEN_CALLBACK_0000";
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
                fileAsset["open"]("r", async (err, fd) => {
                    if (err) {
                        console.info(`${testNum} err : ${err}`);
                        expect(false).assertTrue();
                        done();
                    }
                    expect(isNum(fd)).assertTrue();
                    await fileAsset["close"](fd);
                    expect(true).assertTrue();
                    done();
                });
            } catch (error) {
                console.info(`${testNum} error : ${error}`);
                expect(false).assertTrue();
                done();
            }
        });

        /**
         * @tc.number	 : SUB_MEDIA_USERFILEMGR_OPEN_CALLBACK_0100
         * @tc.name 	 : open
         * @tc.desc 	 : fileAsset open with argument is "w"
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 2
         */
        it("SUB_MEDIA_USERFILEMGR_OPEN_CALLBACK_0100", 0, async function (done) {
            let testNum = "SUB_MEDIA_USERFILEMGR_OPEN_CALLBACK_0100";
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
                fileAsset["open"]("w", async (err, fd) => {
                    if (err) {
                        console.info(`${testNum} err : ${err}`);
                        expect(false).assertTrue();
                        done();
                    }
                    expect(isNum(fd)).assertTrue();
                    await fileAsset["close"](fd);
                    expect(true).assertTrue();
                    done();
                });
            } catch (error) {
                console.info(`${testNum} error : ${error}`);
                expect(false).assertTrue();
                done();
            }
        });

        /**
         * @tc.number	 : SUB_MEDIA_USERFILEMGR_OPEN_CALLBACK_0200
         * @tc.name 	 : open
         * @tc.desc 	 : fileAsset open with argument is "rw"
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 2
         */
        it("SUB_MEDIA_USERFILEMGR_OPEN_CALLBACK_0200", 0, async function (done) {
            let testNum = "SUB_MEDIA_USERFILEMGR_OPEN_CALLBACK_0200";
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
                fileAsset["open"]("rw", async (err, fd) => {
                    if (err) {
                        console.info(`${testNum} err : ${err}`);
                        expect(false).assertTrue();
                        done();
                    }
                    expect(isNum(fd)).assertTrue();
                    await fileAsset["close"](fd);
                    expect(true).assertTrue();
                    done();
                });
            } catch (error) {
                console.info(`${testNum} error : ${error}`);
                expect(false).assertTrue();
                done();
            }
        });

        /**
         * @tc.number	 : SUB_MEDIA_USERFILEMGR_OPEN_CALLBACK_0300
         * @tc.name 	 : open
         * @tc.desc 	 : fileAsset open with argument is undefined
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 2
         */
        it("SUB_MEDIA_USERFILEMGR_OPEN_CALLBACK_0300", 0, async function (done) {
            let testNum = "SUB_MEDIA_USERFILEMGR_OPEN_CALLBACK_0300";
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
                fileAsset["open"](undefined, async (err, fd) => {
                    try {
                        expect(false).assertTrue();
                        done();
                    } catch (err) {
                        console.info(`${testNum} err : ${err}`);
                        expect(true).assertTrue();
                        done();
                    }
                });
            } catch (error) {
                console.info(`${testNum} error : ${error}`);
                expect(true).assertTrue();
                done();
            }
        });
    });
}
