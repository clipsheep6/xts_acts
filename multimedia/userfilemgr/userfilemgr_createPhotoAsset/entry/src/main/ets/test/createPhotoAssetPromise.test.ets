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
import { getUserFileMgrPermission } from "../../../../../../common";

export default function createPhotoAssetPromise(abilityContext) {
    describe("createPhotoAssetPromise", function () {
        const mgr = userFileManager.getUserFileMgr(abilityContext);
        beforeAll(async function () {
            console.info("beforeAll case");
            await getUserFileMgrPermission("ohos.acts.multimedia.userfilemgr", abilityContext);
        });

        /**
         * @tc.number	 : SUB_MEDIA_USERFILEMGR_CREATEPHOTOASSET_PROMISE_0000
         * @tc.name 	 : createPhotoAsset
         * @tc.desc 	 : image createPhotoAsset true
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 2
         */
        it("SUB_MEDIA_USERFILEMGR_CREATEPHOTOASSET_PROMISE_0000", 0, async function (done) {
            let testNum = "SUB_MEDIA_USERFILEMGR_CREATEPHOTOASSET_PROMISE_0000";
            try {
                let displayName = `createPhotoAssetT${new Date().getTime()}.jpg`;
                let fileAsset = await mgr["createPhotoAsset"](displayName);
                expect(fileAsset.displayName).assertEqual(displayName);
                done();
            } catch (error) {
                console.info(`${testNum} error : ${error}`);
                expect(false).assertTrue();
                done();
            }
        });

        /**
         * @tc.number	 : SUB_MEDIA_USERFILEMGR_CREATEPHOTOASSET_PROMISE_0100
         * @tc.name 	 : createPhotoAsset
         * @tc.desc 	 : image createPhotoAsset use abnormal argument
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 2
         */
        it("SUB_MEDIA_USERFILEMGR_CREATEPHOTOASSET_PROMISE_0100", 0, async function (done) {
            let testNum = "SUB_MEDIA_USERFILEMGR_CREATEPHOTOASSET_PROMISE_0100";
            try {
                await mgr["createPhotoAsset"](undefined);
                expect(false).assertTrue();
                done();
            } catch (error) {
                console.info(`${testNum} error : ${error}`);
                expect(true).assertTrue();
                done();
            }
        });

        /**
         * @tc.number	 : SUB_MEDIA_USERFILEMGR_CREATEPHOTOASSET_PROMISE_0200
         * @tc.name 	 : createPhotoAsset
         * @tc.desc 	 : image createPhotoAsset use displayname without extension
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 2
         */
        it("SUB_MEDIA_USERFILEMGR_CREATEPHOTOASSET_PROMISE_0200", 0, async function (done) {
            let testNum = "SUB_MEDIA_USERFILEMGR_CREATEPHOTOASSET_PROMISE_0200";
            let displayName = `createPhotoAssetT${new Date().getTime()}`;
            try {
                await mgr["createPhotoAsset"](displayName);
                expect(false).assertTrue();
                done();
            } catch (error) {
                console.info(`${testNum} error : ${error}`);
                expect(true).assertTrue();
                done();
            }
        });

        /**
         * @tc.number	 : SUB_MEDIA_USERFILEMGR_CREATEPHOTOASSET_PROMISE_0300
         * @tc.name 	 : createPhotoAsset
         * @tc.desc 	 : image createPhotoAsset with createOperation is DEFAULT
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 2
         */
        it("SUB_MEDIA_USERFILEMGR_CREATEPHOTOASSET_PROMISE_0300", 0, async function (done) {
            let testNum = "SUB_MEDIA_USERFILEMGR_CREATEPHOTOASSET_PROMISE_0300";
            let displayName = `createPhotoAssetT${new Date().getTime()}.jpg`;
            try {
                let createOperation = {
                    subType: userFileManager.PhotoSubType.DEFAULT,
                };
                let fileAsset = await mgr["createPhotoAsset"](displayName, createOperation);
                expect(fileAsset.displayName).assertEqual(displayName);
                done();
            } catch (error) {
                console.info(`${testNum} error : ${error}`);
                expect(false).assertTrue();
                done();
            }
        });

        /**
         * @tc.number	 : SUB_MEDIA_USERFILEMGR_CREATEPHOTOASSET_PROMISE_0400
         * @tc.name 	 : createPhotoAsset
         * @tc.desc 	 : image createPhotoAsset with createOperation is CAMERA
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 2
         */
        it("SUB_MEDIA_USERFILEMGR_CREATEPHOTOASSET_PROMISE_0400", 0, async function (done) {
            let testNum = "SUB_MEDIA_USERFILEMGR_CREATEPHOTOASSET_PROMISE_0400";
            let displayName = `createPhotoAssetT${new Date().getTime()}.jpg`;
            try {
                let createOperation = {
                    subType: userFileManager.PhotoSubType.CAMERA,
                };
                let fileAsset = await mgr["createPhotoAsset"](displayName, createOperation);
                expect(fileAsset.displayName).assertEqual(displayName);
                done();
            } catch (error) {
                console.info(`${testNum} error : ${error}`);
                expect(false).assertTrue();
                done();
            }
        });

        /**
         * @tc.number	 : SUB_MEDIA_USERFILEMGR_CREATEPHOTOASSET_PROMISE_0500
         * @tc.name 	 : createPhotoAsset
         * @tc.desc 	 : image createPhotoAsset with createOperation is SCREENSHOT
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 2
         */
        it("SUB_MEDIA_USERFILEMGR_CREATEPHOTOASSET_PROMISE_0500", 0, async function (done) {
            let testNum = "SUB_MEDIA_USERFILEMGR_CREATEPHOTOASSET_PROMISE_0500";
            let displayName = `createPhotoAssetT${new Date().getTime()}.jpg`;
            try {
                let createOperation = {
                    subType: userFileManager.PhotoSubType.SCREENSHOT,
                };
                let fileAsset = await mgr["createPhotoAsset"](displayName, createOperation);
                expect(fileAsset.displayName).assertEqual(displayName);
                done();
            } catch (error) {
                console.info(`${testNum} error : ${error}`);
                expect(false).assertTrue();
                done();
            }
        });

        /**
         * @tc.number	 : SUB_MEDIA_USERFILEMGR_CREATEPHOTOASSET_PROMISE_0600
         * @tc.name 	 : createPhotoAsset
         * @tc.desc 	 : image createPhotoAsset with createOperation is DEFAULT,
         *                 displayname is undefined
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 2
         */
        it("SUB_MEDIA_USERFILEMGR_CREATEPHOTOASSET_PROMISE_0600", 0, async function (done) {
            let testNum = "SUB_MEDIA_USERFILEMGR_CREATEPHOTOASSET_PROMISE_0600";
            try {
                let createOperation = {
                    subType: userFileManager.PhotoSubType.DEFAULT,
                };
                await mgr["createPhotoAsset"](undefined, createOperation);
                expect(false).assertTrue();
                done();
            } catch (error) {
                console.info(`${testNum} error : ${error}`);
                expect(true).assertTrue();
                done();
            }
        });

        /**
         * @tc.number	 : SUB_MEDIA_USERFILEMGR_CREATEPHOTOASSET_PROMISE_0700
         * @tc.name 	 : createPhotoAsset
         * @tc.desc 	 : image createPhotoAsset with createOperation is CAMERA,
         *                 displayname is undefined
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 2
         */
        it("SUB_MEDIA_USERFILEMGR_CREATEPHOTOASSET_PROMISE_0700", 0, async function (done) {
            let testNum = "SUB_MEDIA_USERFILEMGR_CREATEPHOTOASSET_PROMISE_0700";
            try {
                let createOperation = {
                    subType: userFileManager.PhotoSubType.CAMERA,
                };
                await mgr["createPhotoAsset"](undefined, createOperation);
                expect(false).assertTrue();
                done();
            } catch (error) {
                console.info(`${testNum} error : ${error}`);
                expect(true).assertTrue();
                done();
            }
        });

        /**
         * @tc.number	 : SUB_MEDIA_USERFILEMGR_CREATEPHOTOASSET_PROMISE_0800
         * @tc.name 	 : createPhotoAsset
         * @tc.desc 	 : image createPhotoAsset with createOperation is SCREENSHOT,
         *                 displayname is undefined
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 2
         */
        it("SUB_MEDIA_USERFILEMGR_CREATEPHOTOASSET_PROMISE_0800", 0, async function (done) {
            let testNum = "SUB_MEDIA_USERFILEMGR_CREATEPHOTOASSET_PROMISE_0800";
            try {
                let createOperation = {
                    subType: userFileManager.PhotoSubType.SCREENSHOT,
                };
                await mgr["createPhotoAsset"](undefined, createOperation);
                expect(false).assertTrue();
                done();
            } catch (error) {
                console.info(`${testNum} error : ${error}`);
                expect(true).assertTrue();
                done();
            }
        });

        /**
         * @tc.number	 : SUB_MEDIA_USERFILEMGR_CREATEPHOTOASSET_PROMISE_0900
         * @tc.name 	 : createPhotoAsset
         * @tc.desc 	 : image createPhotoAsset with createOperation is DEFAULT,
         *                 displayname is without extension
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 2
         */
        it("SUB_MEDIA_USERFILEMGR_CREATEPHOTOASSET_PROMISE_0900", 0, async function (done) {
            let testNum = "SUB_MEDIA_USERFILEMGR_CREATEPHOTOASSET_PROMISE_0900";
            let displayName = `createPhotoAssetT${new Date().getTime()}`;
            try {
                let createOperation = {
                    subType: userFileManager.PhotoSubType.DEFAULT,
                };
                await mgr["createPhotoAsset"](displayName, createOperation);
                expect(false).assertTrue();
                done();
            } catch (error) {
                console.info(`${testNum} error : ${error}`);
                expect(true).assertTrue();
                done();
            }
        });

        /**
         * @tc.number	 : SUB_MEDIA_USERFILEMGR_CREATEPHOTOASSET_PROMISE_1000
         * @tc.name 	 : createPhotoAsset
         * @tc.desc 	 : image createPhotoAsset with createOperation is CAMERA,
         *                 displayname is without extension
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 2
         */
        it("SUB_MEDIA_USERFILEMGR_CREATEPHOTOASSET_PROMISE_1000", 0, async function (done) {
            let testNum = "SUB_MEDIA_USERFILEMGR_CREATEPHOTOASSET_PROMISE_1000";
            let displayName = `createPhotoAssetT${new Date().getTime()}`;
            try {
                let createOperation = {
                    subType: userFileManager.PhotoSubType.CAMERA,
                };
                await mgr["createPhotoAsset"](displayName, createOperation);
                expect(false).assertTrue();
                done();
            } catch (error) {
                console.info(`${testNum} error : ${error}`);
                expect(true).assertTrue();
                done();
            }
        });

        /**
         * @tc.number	 : SUB_MEDIA_USERFILEMGR_CREATEPHOTOASSET_PROMISE_1100
         * @tc.name 	 : createPhotoAsset
         * @tc.desc 	 : image createPhotoAsset with createOperation is SCREENSHOT,
         *                 displayname is without extension
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 2
         */
        it("SUB_MEDIA_USERFILEMGR_CREATEPHOTOASSET_PROMISE_1100", 0, async function (done) {
            let testNum = "SUB_MEDIA_USERFILEMGR_CREATEPHOTOASSET_PROMISE_1100";
            let displayName = `createPhotoAssetT${new Date().getTime()}`;
            try {
                let createOperation = {
                    subType: userFileManager.PhotoSubType.SCREENSHOT,
                };
                await mgr["createPhotoAsset"](displayName, createOperation);
                expect(false).assertTrue();
                done();
            } catch (error) {
                console.info(`${testNum} error : ${error}`);
                expect(true).assertTrue();
                done();
            }
        });

        /**
         * @tc.number	 : SUB_MEDIA_USERFILEMGR_CREATEPHOTOASSET_PROMISE_1200
         * @tc.name 	 : createPhotoAsset
         * @tc.desc 	 : image createPhotoAsset with createOperation's subType is undefined
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 2
         */
        it("SUB_MEDIA_USERFILEMGR_CREATEPHOTOASSET_PROMISE_1200", 0, async function (done) {
            let testNum = "SUB_MEDIA_USERFILEMGR_CREATEPHOTOASSET_PROMISE_1200";
            let displayName = `createPhotoAssetT${new Date().getTime()}.jpg`;
            try {
                let createOperation = {
                    subType: undefined,
                };
                await mgr["createPhotoAsset"](displayName, createOperation);
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
