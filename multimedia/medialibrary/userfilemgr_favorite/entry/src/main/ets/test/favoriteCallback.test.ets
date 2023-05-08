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
} from "../../../../../../common";
const PIC_DISPLAYNAME = "Picture_favorite.jpg";
const COLUMN_DISPLAY_NAME = "display_name";

export default function favoriteCallback(abilityContext) {
    describe("favoriteCallback", function () {
        const mgr = userFileManager.getUserFileMgr(abilityContext);
        beforeAll(async function () {
            console.info("beforeAll case");
            await getPermission("ohos.acts.multimedia.userfilemgr", abilityContext);
        });

        /**
         * @tc.number   : SUB_MEDIA_USERFILEMGR_FAVORITE_CALLBACK_0000
         * @tc.name   : favorite
         * @tc.desc   : set true except favorite's value is ture, then set false except favorite's value is false
         * @tc.size   : MEDIUM
         * @tc.type   : Function
         * @tc.level   : Level 2
         */
        it("SUB_MEDIA_USERFILEMGR_FAVORITE_CALLBACK_0000", 0, async function (done) {
            let testNum = "SUB_MEDIA_USERFILEMGR_FAVORITE_CALLBACK_0000";
            try {
                // @ts-ignore
                let predicates = new dataSharePredicates.DataSharePredicates();
                predicates.equalTo("height", JPG_HEIGHT).equalTo("width", JPG_WIDTH);
                let assetOp = {
                    fetchColumns: ['is_favorite'],
                    predicates: predicates,
                };
                let fetchResult = await mgr["getPhotoAssets"](assetOp);
                let fileAsset = await fetchResult.getFirstObject();
                let fd = await fileAsset["open"]("rw");
                await fileAsset["close"](fd);

                let isFavorite = await fileAsset.get(userFileManager.ImageVideoKey.FAVORITE);
                if (isFavorite == true) {
                    fileAsset.favorite(false, async (err) => {
                        let favoriteRet = await fileAsset.get(userFileManager.ImageVideoKey.FAVORITE);
                        expect(favoriteRet == 0).assertTrue();
                        done();
                    });
                } else if (isFavorite == false) {
                    fileAsset.favorite(true, async (err) => {
                        let favoriteRet = await fileAsset.get(userFileManager.ImageVideoKey.FAVORITE);
                        expect(favoriteRet == 1).assertTrue();
                        done();
                    });
                } else {
                    expect(false).assertTrue();
                    done();
                }
            } catch (error) {
                console.info(`${testNum} error : ${error}`);
                expect(false).assertTrue();
                done();
            }
        });

        /**
         * @tc.number   : SUB_MEDIA_USERFILEMGR_FAVORITE_CALLBACK_0100
         * @tc.name   : favorite
         * @tc.desc   : favorite with no parameter
         * @tc.size   : MEDIUM
         * @tc.type   : Function
         * @tc.level   : Level 2
         */
        it("SUB_MEDIA_USERFILEMGR_FAVORITE_CALLBACK_0100", 0, async function (done) {
            let testNum = "SUB_MEDIA_USERFILEMGR_FAVORITE_CALLBACK_0100";
            try {
                // @ts-ignore
                let predicates = new dataSharePredicates.DataSharePredicates();
                predicates.equalTo("height", JPG_HEIGHT).equalTo("width", JPG_WIDTH);
                let assetOp = {
                    fetchColumns: ['is_favorite'],
                    predicates: predicates,
                };
                let fetchResult = await mgr["getPhotoAssets"](assetOp);
                let fileAsset = await fetchResult.getFirstObject();
                let fd = await fileAsset["open"]("rw");
                await fileAsset["close"](fd);
                fileAsset.favorite(undefined, (err) => {
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
