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
import { getUserFileMgrPermission, sleep } from "../../../../../../common";

export default function createPhotoAssetCallback(abilityContext) {
    describe("createPhotoAssetCallback", function () {
        const mgr = userFileManager.getUserFileMgr(abilityContext);
        beforeAll(async function () {
            console.info("beforeAll case");
            await getUserFileMgrPermission("ohos.acts.multimedia.userfilemgr", abilityContext);
            await sleep(1000);
        });

        /**
         * @tc.number	 : SUB_MEDIA_USERFILEMGR_CREATEPHOTOASSET_CALLBACK_0000
         * @tc.name 	 : createPhotoAsset
         * @tc.desc 	 : image createPhotoAsset true
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 2
         */
        it("SUB_MEDIA_USERFILEMGR_CREATEPHOTOASSET_CALLBACK_0000", 0, async function (done) {
            let testNum = "SUB_MEDIA_USERFILEMGR_CREATEPHOTOASSET_CALLBACK_0000";
            try {
                let displayName = `createPhotoAssetT${new Date().getTime()}.jpg`;
                await mgr["createPhotoAsset"](displayName, async (err, fileAsset) => {
                    if (err) {
                        console.info(`${testNum} err : ${err}`);
                        expect(false).assertTrue();
                        done();
                        return;
                    }
                    expect(fileAsset.displayName).assertEqual(displayName);
                    done();
                });
            } catch (error) {
                console.info(`${testNum} error : ${error}`);
                expect(false).assertTrue();
                done();
            }
        });

        /**
         * @tc.number	 : SUB_MEDIA_USERFILEMGR_CREATEPHOTOASSET_CALLBACK_0100
         * @tc.name 	 : createPhotoAsset
         * @tc.desc 	 : image createPhotoAsset use abnormal argument
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 2
         */
        it("SUB_MEDIA_USERFILEMGR_CREATEPHOTOASSET_CALLBACK_0100", 0, async function (done) {
            let testNum = "SUB_MEDIA_USERFILEMGR_CREATEPHOTOASSET_CALLBACK_0100";
            try {
                await mgr["createPhotoAsset"](undefined, async (err, fileAsset) => {
                    if (err) {
                        console.info(`${testNum} err : ${err}`);
                        expect(true).assertTrue(); 
                        done();
                        return;
                    }
                    expect(false).assertTrue();
                    done();
                });
            } catch (error) {
                console.info(`${testNum} error : ${error}`);
                expect(true).assertTrue();
                done();
            }
        });

        /**
         * @tc.number	 : SUB_MEDIA_USERFILEMGR_CREATEPHOTOASSET_CALLBACK_0200
         * @tc.name 	 : createPhotoAsset
         * @tc.desc 	 : image createPhotoAsset use displayname without extension
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 2
         */
        it("SUB_MEDIA_USERFILEMGR_CREATEPHOTOASSET_CALLBACK_0200", 0, async function (done) {
            let testNum = "SUB_MEDIA_USERFILEMGR_CREATEPHOTOASSET_CALLBACK_0200";
            let displayName = `createPhotoAssetT${new Date().getTime()}`;
            try {
                await mgr["createPhotoAsset"](displayName, async (err, fileAsset) => {
                    if (err) {
                        console.info(`${testNum} err : ${err}`);
                        expect(true).assertTrue(); 
                        done();
                        return;
                    }
                    expect(false).assertTrue();
                    done();
                });
            } catch (error) {
                console.info(`${testNum} error : ${error}`);
                expect(true).assertTrue();
                done();
            }
        });

        /**
         * @tc.number	 : SUB_MEDIA_USERFILEMGR_CREATEPHOTOASSET_CALLBACK_0300
         * @tc.name 	 : createPhotoAsset
         * @tc.desc 	 : image createPhotoAsset with createOperation is DEFAULT
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 2
         */
        it("SUB_MEDIA_USERFILEMGR_CREATEPHOTOASSET_CALLBACK_0300", 0, async function (done) {
            let testNum = "SUB_MEDIA_USERFILEMGR_CREATEPHOTOASSET_CALLBACK_0300";
            let displayName = `createPhotoAssetT${new Date().getTime()}.jpg`;
            let createOperation = {
                subType: userFileManager.PhotoSubType.DEFAULT,
            };
            try {
                await mgr["createPhotoAsset"](displayName, createOperation, async (err, fileAsset) => {
                    if (err) {
                        console.info(`${testNum} err : ${err}`);
                        expect(false).assertTrue();
                        done();
                        return;
                    }
                    expect(fileAsset.displayName).assertEqual(displayName);
                    done();
                });
            } catch (error) {
                console.info(`${testNum} error : ${error}`);
                expect(false).assertTrue();
                done();
            }
        });

        /**
         * @tc.number	 : SUB_MEDIA_USERFILEMGR_CREATEPHOTOASSET_CALLBACK_0400
         * @tc.name 	 : createPhotoAsset
         * @tc.desc 	 : image createPhotoAsset with createOperation is CAMERA
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 2
         */
        it("SUB_MEDIA_USERFILEMGR_CREATEPHOTOASSET_CALLBACK_0400", 0, async function (done) {
            let testNum = "SUB_MEDIA_USERFILEMGR_CREATEPHOTOASSET_CALLBACK_0400";
            let displayName = `createPhotoAssetT${new Date().getTime()}.jpg`;
            let createOperation = {
                subType: userFileManager.PhotoSubType.CAMERA,
            };
            try {
                await mgr["createPhotoAsset"](displayName, createOperation, async (err, fileAsset) => {
                    if (err) {
                        console.info(`${testNum} err : ${err}`);
                        expect(false).assertTrue();
                        done();
                        return;
                    }
                    expect(fileAsset.displayName).assertEqual(displayName);
                    done();
                });
            } catch (error) {
                console.info(`${testNum} error : ${error}`);
                expect(false).assertTrue();
                done();
            }
        });

        /**
         * @tc.number	 : SUB_MEDIA_USERFILEMGR_CREATEPHOTOASSET_CALLBACK_0500
         * @tc.name 	 : createPhotoAsset
         * @tc.desc 	 : image createPhotoAsset with createOperation is SCREENSHOT
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 2
         */
        it("SUB_MEDIA_USERFILEMGR_CREATEPHOTOASSET_CALLBACK_0500", 0, async function (done) {
            let testNum = "SUB_MEDIA_USERFILEMGR_CREATEPHOTOASSET_CALLBACK_0500";
            let displayName = `createPhotoAssetT${new Date().getTime()}.jpg`;
            let createOperation = {
                subType: userFileManager.PhotoSubType.SCREENSHOT,
            };
            try {
                await mgr["createPhotoAsset"](displayName, createOperation, async (err, fileAsset) => {
                    if (err) {
                        console.info(`${testNum} err : ${err}`);
                        expect(false).assertTrue();
                        done();
                        return;
                    }
                    expect(fileAsset.displayName).assertEqual(displayName);
                    done();
                });
            } catch (error) {
                console.info(`${testNum} error : ${error}`);
                expect(false).assertTrue();
                done();
            }
        });

        /**
         * @tc.number	 : SUB_MEDIA_USERFILEMGR_CREATEPHOTOASSET_CALLBACK_0600
         * @tc.name 	 : createPhotoAsset
         * @tc.desc 	 : image createPhotoAsset with createOperation is DEFAULT,
         *                 displayname is undefined
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 2
         */
        it("SUB_MEDIA_USERFILEMGR_CREATEPHOTOASSET_CALLBACK_0600", 0, async function (done) {
            let testNum = "SUB_MEDIA_USERFILEMGR_CREATEPHOTOASSET_CALLBACK_0600";
            let createOperation = {
                subType: userFileManager.PhotoSubType.DEFAULT,
            };
            try {
                await mgr["createPhotoAsset"](undefined, createOperation, async (err, fileAsset) => {
                    if (err) {
                        console.info(`${testNum} err : ${err}`);
                        expect(true).assertTrue(); 
                        done();
                        return;
                    }
                    expect(false).assertTrue();
                    done();
                });
            } catch (error) {
                console.info(`${testNum} error : ${error}`);
                expect(true).assertTrue();
                done();
            }
        });

        /**
         * @tc.number	 : SUB_MEDIA_USERFILEMGR_CREATEPHOTOASSET_CALLBACK_0700
         * @tc.name 	 : createPhotoAsset
         * @tc.desc 	 : image createPhotoAsset with createOperation is CAMERA,
         *                 displayname is undefined
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 2
         */
        it("SUB_MEDIA_USERFILEMGR_CREATEPHOTOASSET_CALLBACK_0700", 0, async function (done) {
            let testNum = "SUB_MEDIA_USERFILEMGR_CREATEPHOTOASSET_CALLBACK_0700";
            let createOperation = {
                subType: userFileManager.PhotoSubType.CAMERA,
            };
            try {
                await mgr["createPhotoAsset"](undefined, createOperation, async (err, fileAsset) => {
                    if (err) {
                        console.info(`${testNum} err : ${err}`);
                        expect(true).assertTrue(); 
                        done();
                        return;
                    }
                    expect(false).assertTrue();
                    done();
                });
            } catch (error) {
                console.info(`${testNum} error : ${error}`);
                expect(true).assertTrue();
                done();
            }
        });

        /**
         * @tc.number	 : SUB_MEDIA_USERFILEMGR_CREATEPHOTOASSET_CALLBACK_0800
         * @tc.name 	 : createPhotoAsset
         * @tc.desc 	 : image createPhotoAsset with createOperation is SCREENSHOT,
         *                 displayname is undefined
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 2
         */
        it("SUB_MEDIA_USERFILEMGR_CREATEPHOTOASSET_CALLBACK_0800", 0, async function (done) {
            let testNum = "SUB_MEDIA_USERFILEMGR_CREATEPHOTOASSET_CALLBACK_0800";
            let createOperation = {
                subType: userFileManager.PhotoSubType.SCREENSHOT,
            };
            try {
                await mgr["createPhotoAsset"](undefined, createOperation, async (err, fileAsset) => {
                    if (err) {
                        console.info(`${testNum} err : ${err}`);
                        expect(true).assertTrue(); 
                        done();
                        return;
                    }
                    expect(false).assertTrue();
                    done();
                });
            } catch (error) {
                console.info(`${testNum} error : ${error}`);
                expect(true).assertTrue();
                done();
            }
        });

        /**
         * @tc.number	 : SUB_MEDIA_USERFILEMGR_CREATEPHOTOASSET_CALLBACK_0900
         * @tc.name 	 : createPhotoAsset
         * @tc.desc 	 : image createPhotoAsset with createOperation is DEFAULT,
         *                 displayname is without extension
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 2
         */
        it("SUB_MEDIA_USERFILEMGR_CREATEPHOTOASSET_CALLBACK_0900", 0, async function (done) {
            let testNum = "SUB_MEDIA_USERFILEMGR_CREATEPHOTOASSET_CALLBACK_0900";
            let displayName = `createPhotoAssetT${new Date().getTime()}`;
            let createOperation = {
                subType: userFileManager.PhotoSubType.DEFAULT,
            };
            try {
                await mgr["createPhotoAsset"](displayName, createOperation, async (err, fileAsset) => {
                    if (err) {
                        console.info(`${testNum} err : ${err}`);
                        expect(true).assertTrue(); 
                        done();
                        return;
                    }
                    expect(false).assertTrue();
                    done();
                });
            } catch (error) {
                console.info(`${testNum} error : ${error}`);
                expect(true).assertTrue();
                done();
            }
        });

        /**
         * @tc.number	 : SUB_MEDIA_USERFILEMGR_CREATEPHOTOASSET_CALLBACK_1000
         * @tc.name 	 : createPhotoAsset
         * @tc.desc 	 : image createPhotoAsset with createOperation is CAMERA,
         *                 displayname is without extension
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 2
         */
        it("SUB_MEDIA_USERFILEMGR_CREATEPHOTOASSET_CALLBACK_1000", 0, async function (done) {
            let testNum = "SUB_MEDIA_USERFILEMGR_CREATEPHOTOASSET_CALLBACK_1000";
            let displayName = `createPhotoAssetT${new Date().getTime()}`;
            let createOperation = {
                subType: userFileManager.PhotoSubType.CAMERA,
            };
            try {
                await mgr["createPhotoAsset"](displayName, createOperation, async (err, fileAsset) => {
                    if (err) {
                        console.info(`${testNum} err : ${err}`);
                        expect(true).assertTrue(); 
                        done();
                        return;
                    }
                    expect(false).assertTrue();
                    done();
                });
            } catch (error) {
                console.info(`${testNum} error : ${error}`);
                expect(true).assertTrue();
                done();
            }
        });

        /**
         * @tc.number	 : SUB_MEDIA_USERFILEMGR_CREATEPHOTOASSET_CALLBACK_1100
         * @tc.name 	 : createPhotoAsset
         * @tc.desc 	 : image createPhotoAsset with createOperation is SCREENSHOT,
         *                 displayname is without extension
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 2
         */
        it("SUB_MEDIA_USERFILEMGR_CREATEPHOTOASSET_CALLBACK_1100", 0, async function (done) {
            let testNum = "SUB_MEDIA_USERFILEMGR_CREATEPHOTOASSET_CALLBACK_1100";
            let displayName = `createPhotoAssetT${new Date().getTime()}`;
            let createOperation = {
                subType: userFileManager.PhotoSubType.SCREENSHOT,
            };
            try {
                await mgr["createPhotoAsset"](displayName, createOperation, async (err, fileAsset) => {
                    if (err) {
                        console.info(`${testNum} err : ${err}`);
                        expect(true).assertTrue(); 
                        done();
                        return;
                    }
                    expect(false).assertTrue();
                    done();
                });
            } catch (error) {
                console.info(`${testNum} error : ${error}`);
                expect(true).assertTrue();
                done();
            }
        });

        /**
         * @tc.number	 : SUB_MEDIA_USERFILEMGR_CREATEPHOTOASSET_CALLBACK_1200
         * @tc.name 	 : createPhotoAsset
         * @tc.desc 	 : image createPhotoAsset with createOperation's subType is undefined
         * @tc.size 	 : MEDIUM
         * @tc.type 	 : Function
         * @tc.level	 : Level 2
         */
        it("SUB_MEDIA_USERFILEMGR_CREATEPHOTOASSET_CALLBACK_1200", 0, async function (done) {
            let testNum = "SUB_MEDIA_USERFILEMGR_CREATEPHOTOASSET_CALLBACK_1200";
            let displayName = `createPhotoAssetT${new Date().getTime()}.jpg`;
            let createOperation = {
                subType: undefined,
            };
            try {
                await mgr["createPhotoAsset"](displayName, createOperation, async (err, fileAsset) => {
                    if (err) {
                        console.info(`${testNum} err : ${err}`);
                        expect(true).assertTrue(); 
                        done();
                        return;
                    }
                    expect(false).assertTrue();
                    done();
                });
            } catch (error) {
                console.info(`${testNum} error : ${error}`);
                expect(true).assertTrue();
                done();
            }
        });
    });
}
