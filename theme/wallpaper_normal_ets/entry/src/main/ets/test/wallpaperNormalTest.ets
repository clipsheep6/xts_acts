/*
 * Copyright (c) 2022 Huawei Device Co., Ltd.
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
import wallpaper from '@ohos.wallpaper';
import image from '@ohos.multimedia.image';
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium';

const WALLPAPER_SYSTEM = 0;
const WALLPAPER_LOCKSCREEN = 1;
let imageSourceSystem = '/data/storage/el2/base/haps/wp.png';
let imageSourceLockscreen = '/data/storage/el2/base/haps/wp.png';

export default function wallpaperNormalJSUnit() {
    describe('WallpaperNormalJsunitTest', function () {

        /*
        * @tc.number  testWALLPAPER_SYSTEM
        * @tc.name    Test WALLPAPER_SYSTEM value
        * @tc.desc    Function test
        * @tc.level   0
        */
        it('testWALLPAPE_NORMAL_SYSTEM', 0, async function (done) {
            console.info('--------------testWALLPAPE_NORMAL_SYSTEM start-----------------');
            console.info('wallpaperXTS ===> testWALLPAPE_NORMAL_SYSTEM : ' +
            JSON.stringify(wallpaper.WallpaperType.WALLPAPER_SYSTEM));
            expect(wallpaper.WallpaperType.WALLPAPER_SYSTEM == 0).assertTrue();
            done();
            console.info('--------------testWALLPAPE_NORMAL_SYSTEM end-----------------');
        });

        /*
        * @tc.number  testWALLPAPER_LOCKSCREEN
        * @tc.name    Test WALLPAPER_LOCKSCREEN value
        * @tc.desc    Function test
        * @tc.level   0
        */
        it('testWALLPAPER_NORMAL_LOCKSCREEN', 0, async function (done) {
            console.info('--------------testWALLPAPER_NORMAL_LOCKSCREEN start-----------------');
            console.info('wallpaperXTS ===> testWALLPAPER_NORMAL_LOCKSCREEN : ' +
            JSON.stringify(wallpaper.WallpaperType.WALLPAPER_LOCKSCREEN));
            expect(wallpaper.WallpaperType.WALLPAPER_LOCKSCREEN == 1).assertTrue();
            done();
            console.info('--------------testWALLPAPER_NORMAL_LOCKSCREEN end-----------------');
        });


        /*
        * @tc.number  testGetIdCallbackSystem101
        * @tc.name    Test getId() to the ID of the wallpaper of the specified type.
        * @tc.desc    Function test
        * @tc.level   0
        */
        it('testGetIdCallbackNormal101', 0, async function (done) {
            console.info('--------------testGetIdCallbackNormal101 start-----------------');
            wallpaper.getId(WALLPAPER_SYSTEM, (err, data) => {
                try {
                    if (err) {
                        console.info('====>testGetIdCallbackNormal101 err : ' + JSON.stringify(err));
                        expect().assertFail();
                        done();
                    }
                    console.info('====>testGetIdCallbackNormal101 successful data: ' + JSON.stringify(data));
                    expect(Number.isInteger(data)).assertTrue();
                    done();
                } catch (err) {
                    console.info('====>testGetIdCallbackNormal101 catch err : ' + JSON.stringify(err));
                    done();
                }
            });
            console.info('--------------testGetIdCallbackNormal101 end-----------------');
        });

        /*
        * @tc.number  testGetIdPromiseSystem101
        * @tc.name    Test getId() to the ID of the wallpaper of the specified type.
        * @tc.desc    Function test
        * @tc.level   0
        */
        it('testGetIdPromiseNormal101', 0, async function (done) {
            console.info('--------------testGetIdPromiseNormal101 start-----------------');
            await wallpaper.getId(WALLPAPER_SYSTEM).then((data) => {
                console.info('====>testGetIdPromiseNormal101 data : ' + JSON.stringify(data));
                expect(Number.isInteger(data)).assertTrue();
                done();
            }).catch((err) => {
                console.info('====>testGetIdPromiseNormal101 fail: ' + JSON.stringify(err));
                expect().assertFail();
                done();
            });
            console.info('--------------testGetIdPromiseNormal101 end-----------------');
        })

        /*
        * @tc.number  testGetIdCallbackLock102
        * @tc.name    Test getId() to the ID of the wallpaper of the specified type.
        * @tc.desc    Function test
        * @tc.level   0
        */
        it('testGetIdCallbackNormal102', 0, async function (done) {
            console.info('--------------testGetIdCallbackNormal102 start-----------------');
            wallpaper.getId(WALLPAPER_LOCKSCREEN, (err, data) => {
                try {
                    if (err) {
                        console.info('====>testGetIdCallbackNormal102 err : ' + JSON.stringify(err));
                        expect().assertFail();
                        done();
                    }
                    console.info('====>testGetIdCallbackNormal102 successful data: ' + JSON.stringify(data));
                    expect(Number.isInteger(data)).assertTrue();
                    done();
                } catch (err) {
                    console.info('====>testGetIdCallbackNormal102 catch err : ' + JSON.stringify(err));
                    done();
                }
            });
            console.info('--------------testGetIdCallbackNormal102 end-----------------');
        });

        /*
        * @tc.number  testGetIdPromiseLock102
        * @tc.name    Test getId() to the ID of the wallpaper of the specified type.
        * @tc.desc    Function test
        * @tc.level   0
        */
        it('testGetIdPromiseNormal102', 0, async function (done) {
            console.info('--------------testGetIdPromiseNormal102 start-----------------');
            await wallpaper.getId(WALLPAPER_LOCKSCREEN).then((data) => {
                console.info('====>testGetIdPromiseNormal102 data : ' + JSON.stringify(data));
                expect(Number.isInteger(data)).assertTrue();
                done();
            }).catch((err) => {
                console.info('====>testGetIdPromiseNormal102 fail: ' + JSON.stringify(err));
                expect().assertFail();
                done();
            });
            console.info('--------------testGetIdPromiseNormal102 end-----------------');
        });

        /*
        * @tc.number  testGetMinHeightCallback101
        * @tc.name    Test getMinHeight() to the minimum width of the wallpaper.
        * @tc.desc    Function test
        * @tc.level   0
        */
        it('testGetMinHeightCallbackNormal101', 0, async function (done) {
            console.info('--------------testGetMinHeightCallbackNormal101 start-----------------');
            wallpaper.getMinHeight((err, data) => {
                try {
                    if (err) {
                        console.info('====>testGetMinHeightCallbackNormal101 fail: ' + JSON.stringify(err));
                        expect().assertFail();
                        done();
                    }
                    console.info('====>testGetMinHeightCallbackNormal101 successful data: ' + JSON.stringify(data));
                    expect(Number.isInteger(data)).assertTrue();
                    done();
                } catch (err) {
                    console.info('====>testGetMinHeightCallbackNormal101 catch err : ' + JSON.stringify(err));
                    done();
                }
            });
            console.info('--------------testGetMinHeightCallbackNormal101 end-----------------');
        });

        /*
        * @tc.number  testGetMinHeightPromise101
        * @tc.name    Test getMinHeight() to the minimum width of the wallpaper.
        * @tc.desc    Function test
        * @tc.level   0
        */
        it('testGetMinHeightPromiseNormal101', 0, async function (done) {
            console.info('--------------testGetMinHeightPromiseNormal101 start-----------------');
            await wallpaper.getMinHeight().then((data) => {
                console.info('====>testGetMinHeightPromiseNormal101 successful data : ' + JSON.stringify(data));
                expect(Number.isInteger(data)).assertTrue();
                done();
            }).catch((err) => {
                console.info('====>testGetMinHeightPromiseNormal101 err : ' + JSON.stringify(err));
                expect().assertFail();
                done();
            });
            console.info('--------------testGetMinHeightPromiseNormal101 end-----------------');
        });

        /*
        * @tc.number  testGetMinWidthCallback101
        * @tc.name    Test getMinHeight() to the minimum width of the wallpaper.
        * @tc.desc    Function test
        * @tc.level   0
        */
        it('testGetMinWidthCallbackNormal101', 0, async function (done) {
            console.info('--------------testGetMinWidthCallbackNormal101 start-----------------');
            wallpaper.getMinWidth((err, data) => {
                try {
                    if (err) {
                        console.info('====>testGetMinWidthCallbackNormal101 fail: ' + JSON.stringify(err));
                        expect().assertFail();
                        done();
                    }
                    console.info('====>testGetMinWidthCallbackNormal101 successful data: ' + JSON.stringify(data));
                    expect(Number.isInteger(data)).assertTrue();
                    done();
                } catch (err) {
                    console.info('====>testGetMinWidthCallbackNormal101 catch err : ' + JSON.stringify(err));
                    done();
                }
            });
            console.info('--------------testGetMinWidthCallbackNormal101 end-----------------');
        });

        /*
        * @tc.number  testGetMinWidthPromise101
        * @tc.name    Test getMinHeight() to the minimum width of the wallpaper.
        * @tc.desc    Function test
        * @tc.level   0
        */
        it('testGetMinWidthPromiseNormal101', 0, async function (done) {
            console.info('--------------testGetMinWidthPromiseNormal101 start-----------------');
            await wallpaper.getMinWidth().then((data) => {
                console.info('====>testGetMinWidthPromiseNormal101 successful data : ' + JSON.stringify(data));
                expect(Number.isInteger(data)).assertTrue();
                done();
            }).catch((err) => {
                console.info('====>testGetMinWidthPromiseNormal101 err : ' + JSON.stringify(err));
                expect().assertFail();
                done();
            });
            console.info('--------------testGetMinWidthPromiseNormal101 end-----------------');
        });

        /*
        * @tc.number  testIsChangePermittedCallback101
        * @tc.name    Test isChangePermitted() to checks whether to allow the application to change the
                    wallpaper for the current user.
        * @tc.desc    Function test
        * @tc.level   0
        */
        it('testIsChangePermittedCallbackNormal101', 0, async function (done) {
            console.info('--------------testIsChangePermittedCallbackNormal101 start-----------------');
            wallpaper.isChangePermitted((err, data) => {
                try {
                    if (err) {
                        console.info('====>testIsChangePermittedCallbackNormal101 fail: ' + JSON.stringify(err));
                        expect().assertFail();
                        done();
                    }
                    console.info('====>testIsChangePermittedCallbackNormal101 successful data: ' + JSON.stringify(data));
                    expect(typeof data == "boolean").assertTrue();
                    done();
                } catch (err) {
                    console.info('====>testIsChangePermittedCallbackNormal101 catch err : ' + JSON.stringify(err));
                    done();
                }
            })
            console.info('--------------testIsChangePermittedCallbackNormal101 end-----------------');
        });

        /*
        * @tc.number  testIsChangePermittedPromise101
        * @tc.name    Test isChangePermitted() to checks whether to allow the application to change the
                    wallpaper for the current user.
        * @tc.desc    Function test
        * @tc.level   0
        */
        it('testIsChangePermittedPromiseNormal101', 0, async function (done) {
            console.info('--------------testIsChangePermittedPromiseNormal101 start-----------------');
            await wallpaper.isChangePermitted().then((data) => {
                console.info('====>testIsChangePermittedPromiseNormal101 successful data : ' + JSON.stringify(data));
                expect(typeof data == "boolean").assertTrue();
                done();
            }).catch((err) => {
                console.info('====>testIsChangePermittedPromiseNormal101 err : ' + JSON.stringify(err));
                expect().assertFail();
                done();
            });
            console.info('--------------testIsChangePermittedPromiseNormal101 end-----------------');
        });

        /*
        * @tc.number  testIsOperationAllowedCallback101
        * @tc.name    Test isOperationAllowed() to checks whether a user is allowed to set wallpapers.
        * @tc.desc    Function test
        * @tc.level   0
        */
        it('testIsOperationAllowedCallbackNormal101', 0, async function (done) {
            console.info('--------------testIsOperationAllowedCallbackNormal101 start-----------------');
            wallpaper.isOperationAllowed((err, data) => {
                try {
                    if (err) {
                        console.info('====>testIsOperationAllowedCallbackNormal101 fail: ' + JSON.stringify(err));
                        expect().assertFail();
                        done();
                    }
                    console.info('====>testIsOperationAllowedCallbackNormal101 successful data: ' + JSON.stringify(data));
                    expect(typeof data == "boolean").assertTrue();
                    done();
                } catch (err) {
                    console.info('====>testIsOperationAllowedCallbackNormal101 catch err : ' + JSON.stringify(err));
                    done();
                }
            })
            console.info('--------------testIsOperationAllowedCallbackNormal101 end-----------------');
        });

        /*
        * @tc.number  testIsOperationAllowedPromise101
        * @tc.name    Test isOperationAllowed() to checks whether a user is allowed to set wallpapers.
        * @tc.desc    Function test
        * @tc.level   0
        */
        it('testIsOperationAllowedPromiseNormal101', 0, async function (done) {
            console.info('--------------testIsOperationAllowedPromiseNormal101 start-----------------');
            await wallpaper.isOperationAllowed().then((data) => {
                console.info('====>testIsOperationAllowedPromiseNormal101 successful data : ' + JSON.stringify(data));
                expect(typeof data == "boolean").assertTrue();
                done();
            }).catch((err) => {
                console.info('====>testIsOperationAllowedPromiseNormal101 err : ' + JSON.stringify(err));
                expect().assertFail();
                done();
            });
            console.info('--------------testIsOperationAllowedPromiseNormal101 end-----------------');
        });

        /*
        * @tc.number  testResetCallbackSystem101
        * @tc.name    Test reset() to removes a wallpaper of the specified type and reset the default one.
        * @tc.desc    Function test
        * @tc.level   0
        */
        it('testResetCallbackSystemNormal101', 0, async function (done) {
            console.info('--------------testResetCallbackSystemNormal101 start-----------------');
            wallpaper.reset(WALLPAPER_SYSTEM, (err, data) => {
                try {
                    if (err) {
                        console.info('====>testResetCallbackSystemNormal101 normal check: ' + JSON.stringify(err));
                        expect(err.code).assertEqual(undefined);
                        done();
                    }else {
                        console.info('====>testResetCallbackSystemNormal101 error: ' + JSON.stringify(data));
                        expect().assertFail();
                        done();
                    }
                } catch (err) {
                    console.info('====>testResetCallbackSystemNormal101 catch err : ' + JSON.stringify(err));
                    done();
                    console.info('--------------testResetCallbackSystemNormal101 end-----------------');
                }
            })
        });

        /*
        * @tc.number  testResetPromiseSystem101
        * @tc.name    Test reset() to removes a wallpaper of the specified type and reset the default one.
        * @tc.desc    Function test
        * @tc.level   0
        */
        it('testResetPromiseSystemNormal101', 0, async function (done) {
            console.info('--------------testResetPromiseSystemNormal101 start-----------------');
            try{
                console.info('====>testResetPromiseSystemNormal101 normal check');
                await wallpaper.reset(WALLPAPER_SYSTEM);
                expect().assertFail();
                done();
            }catch(err){
                console.info('====>testResetPromiseSystemNormal101 err : ' + JSON.stringify(err));
                expect(err.code).assertEqual(undefined);
                expect(err.message).assertContain("async call failed");
                done();
                console.info('--------------testResetPromiseSystemNormal101 end-----------------');
            }
        });

        /*
        * @tc.number  testResetCallbackLock102
        * @tc.name    Test reset() to removes a wallpaper of the specified type and reset the default one.
        * @tc.desc    Function test
        * @tc.level   0
        */
        it('testResetCallbackLockNormal102', 0, async function (done) {
            console.info('--------------testResetCallbackLockNormal102 start-----------------');
            wallpaper.reset(WALLPAPER_LOCKSCREEN, (err, data) => {
                try {
                    if (err) {
                        console.info('====>testResetCallbackLockNormal102 normal check: ' + JSON.stringify(err));
                        expect(err.code).assertEqual(undefined);
                        done();
                    }else {
                        console.info('====>testResetCallbackLockNormal102 error: ' + JSON.stringify(data));
                        expect().assertFail();
                        done();
                    }
                } catch (err) {
                    console.info('====>testResetCallbackLockNormal102 catch err : ' + JSON.stringify(err));
                    done();
                    console.info('--------------testResetCallbackLockNormal102 end-----------------');
                }
            })
        });

        /*
        * @tc.number  testResetPromiseLock102
        * @tc.name    Test reset() to removes a wallpaper of the specified type and reset the default one.
        * @tc.desc    Function test
        * @tc.level   0
        */
        it('testResetPromiseLockNormal102', 0, async function (done) {
            console.info('--------------testResetPromiseLockNormal102 start-----------------');
            try{
                console.info('====>testResetPromiseLockNormal102 normal check');
                await wallpaper.reset(WALLPAPER_LOCKSCREEN);
                expect().assertFail();
                done();
            }catch(err){
                console.info('====>testResetPromiseLockNormal102 err : ' + JSON.stringify(err));
                expect(err.code).assertEqual(undefined);
                expect(err.message).assertContain("async call failed");
                done();
                console.info('--------------testResetPromiseLockNormal102 end-----------------');
            }
        });

        /*
        * @tc.number  testSetWallpaperURLPromiseLock104
        * @tc.name    Test setPixelMap() to sets a wallpaper of the specified type based on the uri path from a
                    JPEG or PNG file or the pixel map of a PNG file.
        * @tc.desc    Function test
        * @tc.level   0
        */
        it('testSetWallpaperURLPromiseLockNormal104', 0, async function (done) {
            console.info('--------------------testSetWallpaperURLPromiseLockNormal104 start------------------' );
            try{
                console.info('====>testSetWallpaperURLPromiseLockNormal104 normal check');
                await wallpaper.setWallpaper(imageSourceLockscreen, WALLPAPER_LOCKSCREEN);
                expect().assertFail();
                done();
            }catch(err){
                console.info('====>testSetWallpaperURLPromiseLockNormal104 err : ' + JSON.stringify(err));
                expect(err.code).assertEqual(undefined);
                expect(err.message).assertContain("async call failed");
                done();
                console.info('--------------testSetWallpaperURLPromiseLockNormal104 end-----------------');
            }
        });

        /*
        * @tc.number  testSetWallpaperURLCallbackSystem103
        * @tc.name    Test setWallpaper() to sets a wallpaper of the specified type based on the uri path from a
                    JPEG or PNG file or the pixel map of a PNG file.
        * @tc.desc    Function test
        * @tc.level   0
        */
        it('testSetWallpaperURLCallbackSystemNormal103', 0, async function (done) {
            console.info('--------------------testSetWallpaperURLCallbackSystemNormal103 start------------------' );
            wallpaper.setWallpaper(imageSourceSystem, WALLPAPER_SYSTEM, (err, data) => {
                try{
                    if (err) {
                        console.info('====->testSetWallpaperURLCallbackSystemNormal103 normal check: ' + err);
                        expect(err.code).assertEqual(undefined);
                        done();
                    }else{
                        console.info('====>testSetWallpaperURLCallbackSystemNormal103 fail: ' + JSON.stringify(err));
                        expect().assertFail();
                        done();
                    }
                }catch(error){
                    console.info('testSetWallpaperURLCallbackSystemNormal103 catch error: ' + error);
                    done();
                    console.info('--------------------testSetWallpaperURLCallbackSystemNormal103 end------------------' );
                }
            });
        });

        /*
        * @tc.number  testSetWallpaperURLPromiseSystem103
        * @tc.name    Test setWallpaper() to sets a wallpaper of the specified type based on the uri path from a
                    JPEG or PNG file or the pixel map of a PNG file.
        * @tc.desc    Function test
        * @tc.level   0
        */
        it('testSetWallpaperURLPromiseSystemNormal103', 0, async function (done) {
            console.info('--------------------testSetWallpaperURLPromiseSystemNormal103 start------------------' );
            try{
                console.info('====>testSetWallpaperURLPromiseSystemNormal103 normal check');
                await wallpaper.setWallpaper(imageSourceLockscreen, WALLPAPER_SYSTEM);
                expect().assertFail();
                done();
            }catch(err){
                console.info('====>testSetWallpaperURLPromiseSystemNormal103 err : ' + JSON.stringify(err));
                expect(err.code).assertEqual(undefined);
                expect(err.message).assertContain("async call failed");
                done();
                console.info('--------------testSetWallpaperURLPromiseSystemNormal103 end-----------------');
            }
        });

        /*
        * @tc.number  testSetWallpaperURLCallbackLock104
        * @tc.name    Test setWallpaper() to sets a wallpaper of the specified type based on the uri path from a
                    JPEG or PNG file or the pixel map of a PNG file.
        * @tc.desc    Function test
        * @tc.level   0
        */
        it('testSetWallpaperURLCallbackLockNormal104', 0, async function (done) {
            console.info('--------------------testSetWallpaperURLCallbackLockNormal104 start------------------' );
            wallpaper.setWallpaper(imageSourceSystem, WALLPAPER_LOCKSCREEN, (err, data) => {
                try{
                    if (err) {
                        console.info('====->testSetWallpaperURLCallbackLockNormal104 normal check: ' + err);
                        expect(err.code).assertEqual(undefined);
                        done();
                    }else{
                        console.info('====>testSetWallpaperURLCallbackLockNormal104 fail: ' + JSON.stringify(err));
                        expect().assertFail();
                        done();
                    }
                }catch(error){
                    console.info('testSetWallpaperURLCallbackLockNormal104 catch error: ' + error);
                    done();
                    console.info('--------------------testSetWallpaperURLCallbackLockNormal104 end------------------' );
                }
            });
        });


        /*
        * @tc.number  testGetFileCallback101
        * @tc.name    Obtains a file of the wallpaper of the specified type.
        * @tc.desc    Function test
        * @tc.level   0
        */
        it('testGetFileCallbackNormal101', 0, async function (done) {
            console.info('--------------testGetFileCallbackNormal101 start-----------------');
            wallpaper.getFile(WALLPAPER_SYSTEM, (err, data) => {
                try {
                    if (err) {
                        console.info('====>testGetFileCallbackNormal101 normal check: ' + JSON.stringify(err));
                        expect(err.code).assertEqual(undefined);
                        done();
                    }else{
                        console.info('====>testGetFileCallbackNormal101 fail: ' + JSON.stringify(data));
                        expect().assertFail();
                        done();
                    }
                } catch (err) {
                    console.info('====>testGetFileCallbackNormal101 catch err : ' + JSON.stringify(err));
                    done();
                }
            });
            console.info('--------------testGetFileCallbackNormal101 end-----------------');
        });

        /*
        * @tc.number  testGetFilePromise101
        * @tc.name    Obtains a file of the wallpaper of the specified type.
        * @tc.desc    Function test
        * @tc.level   0
        */
        it('testGetFilePromiseNormal101', 0, async function (done) {
            console.info('--------------testGetFilePromiseNormal101 start-----------------');
            try{
                console.info('====>testGetFilePromiseNormal101 normal check');
                await wallpaper.getFile(WALLPAPER_LOCKSCREEN);
                expect().assertFail();
                done();
            }catch(err){
                console.info('====>testGetFilePromiseNormal101 err : ' + JSON.stringify(err));
                expect(err.code).assertEqual(undefined);
                expect(err.message).assertContain("async call failed");
                done();
                console.info('--------------testGetFilePromiseNormal101 end-----------------');
            }
        });
    });
};
