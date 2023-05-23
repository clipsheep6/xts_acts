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
    ERROR_CDOE_NO_DATA_BY_OPTIONS,
    ERROR_CODE_INVALID_PARAMETER,
    ERROR_CODE_MEDIALIBRARY_INNER_FAIL,
} from "../../../../../../common";

export default function getPhotoAssetsCallback(abilityContext) {
    describe("getPhotoAssetsCallback", function () {
        const mgr = userFileManager.getUserFileMgr(abilityContext);
        beforeAll(async function () {
            console.info("beforeAll case");
            await getPermission("ohos.acts.multimedia.userfilemgr", abilityContext);
        });

        /**
         * @tc.number	 : SUB_MEDIA_USERFILEMGR_GETPHOTOASSETS_CALLBACK_0000
         * @tc.name 	 : getPhotoAssets
         * @tc.desc 	 : image getPhotoAssets true
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 2
         */
        it("SUB_MEDIA_USERFILEMGR_GETPHOTOASSETS_CALLBACK_0000", 0, async function (done) {
            let testNum = "SUB_MEDIA_USERFILEMGR_GETPHOTOASSETS_CALLBACK_0000";
            try {
                // @ts-ignore
                let predicates = new dataSharePredicates.DataSharePredicates();
                predicates.equalTo("height", JPG_HEIGHT).equalTo("width", JPG_WIDTH);
                let assetOp = {
                    fetchColumns: [],
                    predicates: predicates,
                };
                mgr["getPhotoAssets"](assetOp, async (err, fetchResult) => {
                    if (err) {
                        console.info(`${testNum} err : ${err}`);
                        expect(false).assertTrue();
                        done();
                    }
                    let fileAsset = await fetchResult.getFirstObject();
                    let fd = await fileAsset["open"]("rw");
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
         * @tc.number	 : SUB_MEDIA_USERFILEMGR_GETPHOTOASSETS_CALLBACK_0100
         * @tc.name 	 : getPhotoAssets
         * @tc.desc 	 : image getPhotoAssets use abnormal ops. ops's predicates is abnormal
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 2
         */
        it("SUB_MEDIA_USERFILEMGR_GETPHOTOASSETS_CALLBACK_0100", 0, async function (done) {
            let testNum = "SUB_MEDIA_USERFILEMGR_GETPHOTOASSETS_CALLBACK_0100";
            let displayName = `getPhotoAssetsT${new Date().getTime()}.jpg`;
            try {
                // @ts-ignore
                let predicates = new dataSharePredicates.DataSharePredicates();
                predicates.equalTo('test', displayName);
                let assetOp = {
                    fetchColumns: [],
                    predicates: predicates,
                };
                await mgr["getPhotoAssets"](assetOp, (err, fetchResult) => {
                    try {
                        done();
                    } catch (err) {
                        console.info(`${testNum} err : ${err.code}`);
                        expect(err.code == ERROR_CDOE_NO_DATA_BY_OPTIONS).assertTrue();
                        done();
                    }
                });
                done();
            } catch (error) {
                console.info(`${testNum} error : ${error}`);
                done();
            }
        });

        /**
         * @tc.number	 : SUB_MEDIA_USERFILEMGR_GETPHOTOASSETS_CALLBACK_0200
         * @tc.name 	 : getPhotoAssets
         * @tc.desc 	 : image getPhotoAssets use abnormal ops. ops's fetchColumns is abnormal
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 2
         */
        it("SUB_MEDIA_USERFILEMGR_GETPHOTOASSETS_CALLBACK_0200", 0, async function (done) {
            let testNum = "SUB_MEDIA_USERFILEMGR_GETPHOTOASSETS_CALLBACK_0200";
            try {
                // @ts-ignore
                let predicates = new dataSharePredicates.DataSharePredicates();
                let assetOp = {
                    fetchColumns: ['test'],
                    predicates: predicates,
                };
                await mgr["getPhotoAssets"](assetOp, (err, fetchResult) => {
                    if (err) {
                        console.info(`${testNum} err : ${err.code}`);
                        expect(err.code == ERROR_CDOE_NO_DATA_BY_OPTIONS).assertTrue();
                        done();
                    }
                    expect(false).assertTrue();
                    done();
                });
            } catch (error) {
                console.info(`${testNum} error : ${error}`);
                done();
            }
        });

        /**
         * @tc.number	 : SUB_MEDIA_USERFILEMGR_GETPHOTOASSETS_CALLBACK_0300
         * @tc.name 	 : getPhotoAssets
         * @tc.desc 	 : image getPhotoAssets use abnormal ops. ops's fetchColumns is abnormal
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 2
         */
        it("SUB_MEDIA_USERFILEMGR_GETPHOTOASSETS_CALLBACK_0300", 0, async function (done) {
            let testNum = "SUB_MEDIA_USERFILEMGR_GETPHOTOASSETS_CALLBACK_0300";
            try {
                // @ts-ignore
                let predicates = new dataSharePredicates.DataSharePredicates();
                let assetOp = {
                    fetchColumns: ['display_name', 'test'],
                    predicates: predicates,
                };
                await mgr["getPhotoAssets"](assetOp, (err, fetchResult) => {
                    if (err) {
                        console.info(`${testNum} err : ${err.code}`);
                        expect(err.code == ERROR_CDOE_NO_DATA_BY_OPTIONS).assertTrue();
                        done();
                    }
                    expect(false).assertTrue();
                    done();
                });
            } catch (error) {
                console.info(`${testNum} error : ${error}`);
                done();
            }
        });

        /**
         * @tc.number	 : SUB_MEDIA_USERFILEMGR_GETPHOTOASSETS_CALLBACK_0400
         * @tc.name 	 : getPhotoAssets
         * @tc.desc 	 : image getPhotoAssets with no args
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 2
         */
        it("SUB_MEDIA_USERFILEMGR_GETPHOTOASSETS_CALLBACK_0400", 0, async function (done) {
            let testNum = "SUB_MEDIA_USERFILEMGR_GETPHOTOASSETS_CALLBACK_0400";
            try {
                await mgr["getPhotoAssets"]((err, fetchResult) => {
                    try {
                        done();
                    } catch (err) {
                        console.info(`${testNum} err : ${err.code}`);
                        expect(err.code == ERROR_CODE_INVALID_PARAMETER).assertTrue();
                        done();
                    }
                });
                done();
            } catch (error) {
                console.info(`${testNum} error : ${error}`);
                done();
            }
        });

        /**
         * @tc.number	 : SUB_MEDIA_USERFILEMGR_GETPHOTOASSETS_CALLBACK_0500
         * @tc.name 	 : getPhotoAssets
         * @tc.desc 	 : image getPhotoAssets with args is 0
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 2
         */
        it("SUB_MEDIA_USERFILEMGR_GETPHOTOASSETS_CALLBACK_0500", 0, async function (done) {
            let testNum = "SUB_MEDIA_USERFILEMGR_GETPHOTOASSETS_CALLBACK_0500";
            try {
                await mgr["getPhotoAssets"](0, (err, fetchResult) => {
                    try {
                        done();
                    } catch (err) {
                        console.info(`${testNum} err : ${err.code}`);
                        done();
                    }
                });
                done();
            } catch (error) {
                console.info(`${testNum} error : ${error}`);
                expect(error.code == ERROR_CODE_MEDIALIBRARY_INNER_FAIL).assertTrue();
                done();
            }
        });
    });
}
