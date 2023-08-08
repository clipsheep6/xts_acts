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
} from "../../../../../../common";

const PICTURE_GETJSON_01_JPG = 'Picture_getJson_01.jpg';
const PICTURE_GETJSON_02_JPG = 'Picture_getJson_02.jpg';
const STR_DAY = "day";
const STR_MONTH = "month";
const STR_YEAR = "year";
const STR_DISPLAYNAME = "display_name";

export default function getJsonCallback(abilityContext) {
    describe("getJsonCallback", function () {
        const mgr = userFileManager.getUserFileMgr(abilityContext);
        beforeAll(async function () {
            console.info("beforeAll case");
            await getPermission("ohos.acts.multimedia.userfilemgr", abilityContext);
        });

        var year =  new Date().getFullYear();
        var month = new Date().getMonth() + 1;
        if((month >= 0) && (month <= 2)) {
          // @ts-ignore
          month = year + '1' + month;
        } else {
          // @ts-ignore
          month = year + '0' + month;
        }
        var day = new Date().getDate();
        if((day > 0) && (day < 10)){
          // @ts-ignore
          day = month + '0' + day;
        } else {
          // @ts-ignore
          day = month + day;
        }
        
        async function getSystemAlbumBySubtype(albumSubType) {
            try {
                // @ts-ignore
                let fetchResult = await mgr.getAlbums(userFileManager.AlbumType.SYSTEM, albumSubType);
                let album = await fetchResult.getFirstObject();
                fetchResult.close();
                return album;
            } catch(error) {
                console.info("getSystemAlbumBySubtype Failed to get system albums! error: " + error + " albumSubType: " + albumSubType);
                expect(false).assertTrue();
                throw error;
            }
        }

        async function getTrashAssets() {
            try {
                // @ts-ignore
                let trashAlbum = await getSystemAlbumBySubtype(userFileManager.AlbumSubType.TRASH);
                if (trashAlbum === null) {
                    throw new Error('Failed to get trash album');
                }
                let fetchOption = {
                    // @ts-ignore
                    predicates: new dataSharePredicates.DataSharePredicates(),
                    fetchColumns: [ "date_trashed" ]
                }
                let fetchResult = await trashAlbum.getPhotoAssets(fetchOption);
                if (fetchResult === null) {
                    throw new Error('Failed to get trash photo assets');
                }
                // @ts-ignore
                let assets = await fetchResult.getAllObject();
                fetchResult.close();
                return assets;
            } catch (error) {
                console.info("getTrashAssets Failed to getTrashAssets" + error);
                throw error;
            }
        }

        const getJson = async function (done, testNum, assetOp) {
            try {
                // @ts-ignore
                let fetchResult = await mgr.getPhotoAssets(assetOp);
                // get 01.jpg Asset
                let fileAsset1 = await fetchResult.getFirstObject();
                fileAsset1.getJson( async(err, JsonResult1) => {
                  if(err){
                    console.info(`${testNum} err : ${err}`);
                    expect(false).assertTrue();
                    done();
                  }
                  var jsResult1 = JSON.parse(JsonResult1);
                  expect(jsResult1.display_name === PICTURE_GETJSON_01_JPG).assertTrue();
                });
                // get 02.jpg Asset
                let fileAsset2 = await fetchResult.getLastObject();
                fileAsset2.getJson( async(err, JsonResult2) => {
                  if(err){
                    console.info(`${testNum} err : ${err}`);
                    expect(false).assertTrue();
                    done();
                  }
                  var jsResult2 = JSON.parse(JsonResult2);
                  expect(jsResult2.display_name === PICTURE_GETJSON_02_JPG).assertTrue();
                });
                fetchResult.close();
                done();
            } catch (error) {
                console.info(`${testNum} error : ${error}`);
                expect(false).assertTrue();
                done();
            }
        };

        /**
         * @tc.number	 : SUB_MEDIA_USERFILEMGR_GETJSON_CALLBACK_0000
         * @tc.name 	 : getJson
         * @tc.desc 	 : predicates is 
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 2
         */
        it("SUB_MEDIA_USERFILEMGR_GETJSON_CALLBACK_0000", 0, async function (done) {
            let testNum = "SUB_MEDIA_USERFILEMGR_GETJSON_CALLBACK_0000";
            // @ts-ignore
            let predicates = new dataSharePredicates.DataSharePredicates();
            let assetOp = {
                fetchColumns: [],
                predicates: predicates,
            };
            await getJson(done, testNum, assetOp);
        });

        /**
         * @tc.number	 : SUB_MEDIA_USERFILEMGR_GETJSON_CALLBACK_0100
         * @tc.name 	 : getJson
         * @tc.desc 	 : predicates is equalTo("year", `${year}`)
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 2
         */
        it("SUB_MEDIA_USERFILEMGR_GETJSON_CALLBACK_0100", 0, async function (done) {
            let testNum = "SUB_MEDIA_USERFILEMGR_GETJSON_CALLBACK_0100";
            // @ts-ignore
            let predicates = new dataSharePredicates.DataSharePredicates();
            let assetOp = {
                fetchColumns: [],
                predicates: predicates.equalTo(STR_YEAR, `${year}`),
            };
            await getJson(done, testNum, assetOp);
        });

        /**
         * @tc.number	 : SUB_MEDIA_USERFILEMGR_GETJSON_CALLBACK_0200
         * @tc.name 	 : getJson
         * @tc.desc 	 : predicates is equalTo("month", `${month}`)
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 2
         */
        it("SUB_MEDIA_USERFILEMGR_GETJSON_CALLBACK_0200", 0, async function (done) {
            let testNum = "SUB_MEDIA_USERFILEMGR_GETJSON_CALLBACK_0200";
            // @ts-ignore
            let predicates = new dataSharePredicates.DataSharePredicates();
            let assetOp = {
                fetchColumns: [],
                predicates: predicates.equalTo(STR_MONTH, `${month}`),
            };
            await getJson(done, testNum, assetOp);
        });
        
        /**
         * @tc.number	 : SUB_MEDIA_USERFILEMGR_GETJSON_CALLBACK_0300
         * @tc.name 	 : getJson
         * @tc.desc 	 : predicates is equalTo("day", `${day}`)
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 2
         */
        it("SUB_MEDIA_USERFILEMGR_GETJSON_CALLBACK_0300", 0, async function (done) {
            let testNum = "SUB_MEDIA_USERFILEMGR_GETJSON_CALLBACK_0300";
            // @ts-ignore
            let predicates = new dataSharePredicates.DataSharePredicates();
            let assetOp = {
                fetchColumns: [],
                predicates: predicates.equalTo(STR_DAY, `${day}`),
            };
            await getJson(done, testNum, assetOp);
        });

        /**
         * @tc.number	 : SUB_MEDIA_USERFILEMGR_GETJSON_CALLBACK_0400
         * @tc.name 	 : getJson
         * @tc.desc 	 : predicates is equalTo("year", `${year}`).equalTo("month", `${month}`)
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 2
         */
        it("SUB_MEDIA_USERFILEMGR_GETJSON_CALLBACK_0400", 0, async function (done) {
            let testNum = "SUB_MEDIA_USERFILEMGR_GETJSON_CALLBACK_0400";
            // @ts-ignore
            let predicates = new dataSharePredicates.DataSharePredicates();
            let assetOp = {
                fetchColumns: [],
                predicates: predicates.equalTo(STR_YEAR, `${year}`).equalTo(STR_MONTH, `${month}`),
            };
            await getJson(done, testNum, assetOp);
        });

        /**
         * @tc.number	 : SUB_MEDIA_USERFILEMGR_GETJSON_CALLBACK_0500
         * @tc.name 	 : getJson
         * @tc.desc 	 : predicates is equalTo("year", `${year}`).equalTo("month", `${month}`).equalTo("day", `${day}`)
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 2
         */
        it("SUB_MEDIA_USERFILEMGR_GETJSON_CALLBACK_0500", 0, async function (done) {
            let testNum = "SUB_MEDIA_USERFILEMGR_GETJSON_CALLBACK_0500";
            // @ts-ignore
            let predicates = new dataSharePredicates.DataSharePredicates();
            let assetOp = {
                fetchColumns: [],
                predicates: predicates.equalTo(STR_YEAR, `${year}`).equalTo(STR_MONTH, `${month}`).equalTo(STR_DAY, `${day}`),
            };
            await getJson(done, testNum, assetOp);
        });

        /**
         * @tc.number	 : SUB_MEDIA_USERFILEMGR_GETJSON_CALLBACK_0600
         * @tc.name 	 : getJson
         * @tc.desc 	 : predicates is equalTo("month", `${month}`).equalTo("day", `${day}`)
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 2
         */
        it("SUB_MEDIA_USERFILEMGR_GETJSON_CALLBACK_0600", 0, async function (done) {
            let testNum = "SUB_MEDIA_USERFILEMGR_GETJSON_CALLBACK_0600";
            // @ts-ignore
            let predicates = new dataSharePredicates.DataSharePredicates();
            let assetOp = {
                fetchColumns: [],
                predicates: predicates.equalTo(STR_MONTH, `${month}`).equalTo(STR_DAY, `${day}`),
            };
            await getJson(done, testNum, assetOp);
        });

        /**
         * @tc.number	 : SUB_MEDIA_USERFILEMGR_GETJSON_CALLBACK_0700
         * @tc.name 	 : getJson
         * @tc.desc 	 : trash 01.jpg, getPhotoAssets, getJson
         *                 recover 01.jpg, getPhotoAssets, getJson
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 2
         */
        it("SUB_MEDIA_USERFILEMGR_GETJSON_CALLBACK_0700", 0, async function (done) {
            let testNum = "SUB_MEDIA_USERFILEMGR_GETJSON_CALLBACK_0700";
            try{
                // trash 01.jpg
                {
                    // @ts-ignore
                    let predicates = new dataSharePredicates.DataSharePredicates();
                    predicates.equalTo(STR_DISPLAYNAME, PICTURE_GETJSON_01_JPG);
                    let assetOp = {
                    fetchColumns: [],
                    predicates: predicates,
                    };
                    // @ts-ignore
                    let fetchResult = await mgr.getPhotoAssets(assetOp);
                    let fileAsset = await fetchResult.getFirstObject();
                    // @ts-ignore
                    await mgr.delete(fileAsset.uri);
                    fetchResult.close();
                }
                // getPhotoAssets, getJson
                {
                    // @ts-ignore
                    let predicates = new dataSharePredicates.DataSharePredicates();
                    let assetOp = {
                        fetchColumns: [],
                        predicates: predicates,
                    };
                    // @ts-ignore
                    let fetchResult = await mgr.getPhotoAssets(assetOp);
                    let fileAsset = await fetchResult.getFirstObject();
                    fileAsset.getJson( async(err, jsonResult) => {
                      if(err){
                        console.info(`${testNum} err : ${err}`);
                        expect(false).assertTrue();
                        done();
                      }
                      var jsResult1 = JSON.parse(jsonResult);
                      expect(jsResult1.display_name === PICTURE_GETJSON_02_JPG).assertTrue();
                    });
                    fetchResult.close();
                }
                // recover 01.jpg
                {
                    try {
                      console.info("recoverjpg in ");
                      // @ts-ignore
                      let assets = await getTrashAssets();
                      if (assets.length > 0) {
                        // @ts-ignore
                        let trashAlbum = await getSystemAlbumBySubtype(userFileManager.AlbumSubType.TRASH);
                        // @ts-ignore
                        await trashAlbum.recoverPhotoAssets(assets);
                        console.info("recoverjpg out ");
                      }
                    } catch (error) {
                      console.info("recoverjpg Failed to recoverAllPhotoAssets! error: " + error);
                      expect(false).assertTrue();
                      throw error;
                    }
                }
                // getPhotoAssets, getJson
                // @ts-ignore
                let predicates = new dataSharePredicates.DataSharePredicates();
                let assetOp = {
                    fetchColumns: [],
                    predicates: predicates,
                };
                await getJson(done, testNum, assetOp);
                done();
            } catch (error) {
                console.info(`${testNum} error : ${error}`);
                expect(false).assertTrue();
                done();
            }
        });

        /**
         * @tc.number	 : SUB_MEDIA_USERFILEMGR_GETJSON_CALLBACK_0800
         * @tc.name 	 : getJson
         * @tc.desc 	 : predicates is equalTo("day", 0);
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 2
         */
        it("SUB_MEDIA_USERFILEMGR_GETJSON_CALLBACK_0800", 0, async function (done) {
            let testNum = "SUB_MEDIA_USERFILEMGR_GETJSON_CALLBACK_0800";
            try {
                // @ts-ignore
                let predicates = new dataSharePredicates.DataSharePredicates();
                let assetOp = {
                    fetchColumns: [],
                    predicates: predicates.equalTo(STR_DAY, 0)
                };
                // @ts-ignore
                let fetchResult = await mgr.getPhotoAssets(assetOp);
                let num = await fetchResult.getCount();
                expect(num === 0).assertTrue();
                fetchResult.close();
                done();
            } catch (error) {
                console.info(`${testNum} error : ${error}`);
                expect(false).assertTrue();
                done();
            }
        });
    });
}
