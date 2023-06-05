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
    sleep,
} from "../../../../../../common";
const INVALID_URI = "datashare:///media/image/-1";
const TEST_STRING = "test";

export default function deleteCallback(abilityContext) {
    describe("deleteCallback", function () {
        const mgr = userFileManager.getUserFileMgr(abilityContext);
        beforeAll(async function () {
            console.info("beforeAll case");
            await getUserFileMgrPermission("ohos.acts.multimedia.userfilemgr", abilityContext);
        });

        /**
         * @tc.number	 : SUB_MEDIA_USERFILEMGR_DELETE_CALLBACK_0000
         * @tc.name 	 : delete
         * @tc.desc 	 : image delete, except date_trashed's value changed
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 2
         */
        it("SUB_MEDIA_USERFILEMGR_DELETE_CALLBACK_0000", 0, async function (done) {
            let testNum = "SUB_MEDIA_USERFILEMGR_DELETE_CALLBACK_0000";
            let displayName = `getPhotoAssetsT${new Date().getTime()}.jpg`;
            try {
                let fileAsset = await mgr["createPhotoAsset"](displayName);
                let fd = await fileAsset["open"]("rw");
                await fileAsset["close"](fd);
                await sleep(1000);

                let predicates = new dataSharePredicates.DataSharePredicates();
                let assetOp = {
                    fetchColumns: [],
                    predicates: predicates.equalTo("display_name", displayName),
                };
                let fetchResult = await mgr["getPhotoAssets"](assetOp);
                let newFileAsset = await fetchResult.getFirstObject();

                console.info("fetch finish");
                await mgr["delete"](newFileAsset.uri, async (err) => {
                    if (err) {
                        console.info(`${testNum} err : ${err}`);
                        expect(false).assertTrue();
                        fetchResult.close();
                        done();
                        return;
                    }
                    expect(true).assertTrue();
                    console.info("delete successful");
                    fetchResult.close();
                    done();
                    fetchResult.close();
                    return;
                });
            } catch (error) {
                console.info(`${testNum} error : ${error}`);
                expect(false).assertTrue();
                done();
            }
        });

        /**
         * @tc.number	 : SUB_MEDIA_USERFILEMGR_DELETE_CALLBACK_0100
         * @tc.name 	 : delete
         * @tc.desc 	 : image delete use invalid uri
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 2
         */
        it("SUB_MEDIA_USERFILEMGR_DELETE_CALLBACK_0100", 0, async function (done) {
            let testNum = "SUB_MEDIA_USERFILEMGR_DELETE_CALLBACK_0100";
            try {
                await mgr["delete"](INVALID_URI, (err) => {
                    if (err) {
                        console.info(`${testNum} err : ${err.code}`);
                        expect(true).assertTrue();
                        done();
                        return;
                    }
                    expect(false).assertTrue();
                    done();
                    return;
                });
            } catch (error) {
                console.info(`${testNum} error : ${error.code}`);
                expect(true).assertTrue();
                done();
            }
        });

        /**
         * @tc.number	 : SUB_MEDIA_USERFILEMGR_DELETE_CALLBACK_0200
         * @tc.name 	 : delete
         * @tc.desc 	 : image delete use parameter is string
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 2
         */
        it("SUB_MEDIA_USERFILEMGR_DELETE_CALLBACK_0200", 0, async function (done) {
            let testNum = "SUB_MEDIA_USERFILEMGR_DELETE_CALLBACK_0200";
            try {
                await mgr["delete"](TEST_STRING, async (err) => {
                    if (err) {
                        console.info(`${testNum} err : ${err.code}`);
                        expect(true).assertTrue();
                        done();
                        return;
                    }
                    expect(true).assertTrue();
                    done();
                    return;
                });
            } catch (error) {
                console.info(`${testNum} error : ${error.code}`);
                expect(true).assertTrue();
                done();
            }
        });

        /**
         * @tc.number	 : SUB_MEDIA_USERFILEMGR_DELETE_CALLBACK_0300
         * @tc.name 	 : delete
         * @tc.desc 	 : image delete use undefined
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 2
         */
        it("SUB_MEDIA_USERFILEMGR_DELETE_CALLBACK_0300", 0, async function (done) {
            let testNum = "SUB_MEDIA_USERFILEMGR_DELETE_CALLBACK_0300";
            try {
                await mgr["delete"](undefined, (err) => {
                    if (err) {
                        console.info(`${testNum} err : ${err.code}`);
                        expect(true).assertTrue();
                        done();
                        return;
                    }
                    expect(false).assertTrue();
                    done();
                    return;
                });
            } catch (error) {
                console.info(`${testNum} error : ${error.code}`);
                expect(true).assertTrue();
                done();
            }
        });
    });
}
