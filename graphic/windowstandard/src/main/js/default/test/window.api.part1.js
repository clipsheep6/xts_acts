/*
 * Copyright (C) 2022 Huawei Device Co., Ltd.
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
import app from '@system.app'
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from 'deccjsunit/index'
import window from '@ohos.application.windowmanager'

describe('window_api_test', function () {
    var windowStr = 'ohoswindow';
    var windowCount = 2022;
    beforeAll(function () {
    })
    beforeEach(function () {
    })
    afterEach(function () {
        windowCount++;
    })
    afterAll(function () {
    })

    /**
    * @tc.number     SUB_WINDOW_GETAVOIDAREA_JSAPI_001
    * @tc.name       Test getAvoidArea
    * @tc.desc       Test window.getAvoidArea API function test.
    */
    it('getAvoidAreaTest1', 0, function (done) {
        console.log('jsunittest getAvoidAreaTest1 begin');
        window.create(windowStr + windowCount, 1).then(wnd => {
            console.log('jsunittest getAvoidAreaTest1 windoe.create wnd: ' + wnd);
            if (wnd) {
                wnd.getAvoidArea(0).then((data) => {
                    console.log('jsunittest getAvoidAreaTest1 wnd.getAvoidArea success, data :' + JSON.stringify(data));
                    done()
                }, (err) => {
                    console.log('jsunittest getAvoidAreaTest1 wnd.getAvoidArea failed, err : ' + JSON.stringify(err));
                    done();
                })
            } else {
                console.log('jsunittest getAvoidAreaTest1 wnd not exist');
                expect(wnd).assertFail()
            }
        }, (err) => {
            console.log('jsunittest getAvoidAreaTest1 windoe.create failed, err : ' + JSON.stringify(err));
            assertFail();
            done();
        })
    })

    /**
   * @tc.number     SUB_WINDOW_GETAVOIDAREA_JSAPI_002
   * @tc.name       Test getAvoidArea
   * @tc.desc       Test window.getAvoidArea API function test.
   */
    it('getAvoidAreaTest2', 0, function (done) {
        console.log('jsunittest getAvoidAreaTest2 begin');
        window.create(windowStr + windowCount, 1).then(wnd => {
            console.log('jsunittest getAvoidAreaTest2 windoe.create wnd: ' + wnd);
            if (wnd) {
                wnd.getAvoidArea(1).then((data) => {
                    console.log('jsunittest getAvoidAreaTest2 wnd.getAvoidArea success, data :' + JSON.stringify(data));
                    done()
                }, (err) => {
                    console.log('jsunittest getAvoidAreaTest2 wnd.getAvoidArea failed, err : ' + JSON.stringify(err));
                    done();
                })
            } else {
                console.log('jsunittest getAvoidAreaTest2 wnd not exist');
                expect(wnd).assertFail();
            }
        }, (err) => {
            console.log('jsunittest getAvoidAreaTest2 windoe.create failed, err : ' + JSON.stringify(err));
            assertFail()
            done();
        })
    })

    /**
    * @tc.number     SUB_WINDOW_GETAVOIDAREA_JSAPI_003
    * @tc.name       Test getAvoidArea
    * @tc.desc       Test window.getAvoidArea API function test.
    */
    it('getAvoidAreaTest3', 0, function (done) {
        console.log('jsunittest getAvoidAreaTest3 begin')
        window.create(windowStr + windowCount, 1).then(wnd => {
            console.log('jsunittest getAvoidAreaTest3 windoe.create wnd: ' + wnd)
            if (wnd) {
                wnd.getAvoidArea(3).then((data) => {
                    console.log('jsunittest getAvoidAreaTest3 wnd.getAvoidArea success, data :' + JSON.stringify(data));
                    done()
                }, (err) => {
                    console.log('jsunittest getAvoidAreaTest3 wnd.getAvoidArea failed, err : ' + JSON.stringify(err));
                    done();
                })
            } else {
                console.log('jsunittest getAvoidAreaTest3 wnd not exist');
                expect(wnd).assertFail()
            }
        }, (err) => {
            console.log('jsunittest getAvoidAreaTest3 windoe.create failed, err : ' + JSON.stringify(err));
            assertFail()
            done();
        })
    })

    /**
    * @tc.number     SUB_WINDOW_SETFULLSCREEN_JSAPI_001
    * @tc.name       Test setFullScreen
    * @tc.desc       Test window.setFullScreen API function test.
    */
    it('setFullScreenTest1', 0, function (done) {
        console.log('jsunittest setFullScreenTest1 begin')
        window.create(windowStr + windowCount, 1).then(wnd => {
            console.log('jsunittest setFullScreenTest1 windoe.create wnd: ' + wnd)
            if (wnd) {
                console.log('jsunittest setFullScreenTest1 setFullScreen begin')
                wnd.setFullScreen(true).then(() => {
                    console.log('jsunittest setFullScreenTest1 wnd.setFullScreen(true) success');
                    done()
                }, (err) => {
                    console.log('jsunittest setFullScreenTest1 wnd.setFullScreen(true) failed, err : ' + JSON.stringify(err));
                    assertFail();
                    done();
                })
                console.log('jsunittest setFullScreenTest1 setFullScreen end')
            } else {
                console.log('jsunittest setFullScreenTest1 windoe.create wnd noexist')
                expect(wnd).assertFail()
            }
        }, (err) => {
            console.log('jsunittest setFullScreenTest1 windoe.create failed, err : ' + JSON.stringify(err));
            assertFail();
            done();
        })
    })

    /**
    * @tc.number     SUB_WINDOW_SETLAYOUTFULLSCREEN_JSAPI_001
    * @tc.name       Test setLayoutFullScreen
    * @tc.desc       Test window.setLayoutFullScreen API function test.
    */
    it('setLayoutFullScreenTest1', 0, function (done) {
        console.log('jsunittest setLayoutFullScreenTest1 begin')
        window.create(windowStr + windowCount, 2104).then(wnd => {
            console.log('jsunittest setLayoutFullScreenTest1 windoe.create wnd: ' + wnd)
            if (wnd) {
                wnd.setFullScreen(true).then(() => {
                    console.log('jsunittest setLayoutFullScreenTest1 wnd.setFullScreen(true) success');
                    wnd.setLayoutFullScreen(true).then(() => {
                        console.log('jsunittest setLayoutFullScreenTest1 wnd.setLayoutFullScreen(true) success');
                        done()
                    }, (err) => {
                        console.log('jsunittest setLayoutFullScreenTest1 wnd.setLayoutFullScreen(true) failed, err : ' + JSON.stringify(err));
                        assertFail();
                        done();
                    })
                }, (err) => {
                    console.log('jsunittest setLayoutFullScreenTest1 wnd.setFullScreen(true) failed, err : ' + JSON.stringify(err));
                    assertFail();
                    done();
                })
            } else {
                expect(wnd).assertFail()
            }
        }, (err) => {
            console.log('jsunittest setLayoutFullScreenTest1 windoe.create failed, err : ' + JSON.stringify(err));
            assertFail()
            done();
        })
    })

    /**
    * @tc.number     SUB_WINDOW_SETSYSTEMBARENABLE_JSAPI_001
    * @tc.name       Test setSystemBarEnable
    * @tc.desc       Test window.setSystemBarEnable API function test.
    */
    it('setSystemBarEnableTest1', 0, function (done) {
        console.log('jsunittest setSystemBarEnableTest1 begin')
        window.create(windowStr + windowCount, 1).then(wnd => {
            console.log('jsunittest setSystemBarEnableTest1 windoe.create wnd: ' + wnd)

            if (wnd) {
                wnd.setSystemBarEnable(['status']).then(() => {
                    console.log('jsunittest setSystemBarEnableTest1 wnd.setSystemBarEnable([status]) success');
                    done()
                }, (err) => {
                    console.log('jsunittest setSystemBarEnableTest1 wnd.setSystemBarEnable([status]) failed, err : ' + JSON.stringify(err));
                    assertFail();
                    done();
                })
            } else {
                expect(wnd).assertFail()
            }
        }, (err) => {
            console.log('jsunittest setSystemBarEnableTest1 windoe.create failed, err : ' + JSON.stringify(err));
            assertFail()
            done();
        })
    })

    /**
    * @tc.number     SUB_WINDOW_SETSYSTEMBARENABLE_JSAPI_002
    * @tc.name       Test setSystemBarEnable
    * @tc.desc       Test window.setSystemBarEnable API function test.
    */
    it('setSystemBarEnableTest2', 0, function (done) {
        console.log('jsunittest setSystemBarEnableTest2 begin')
        window.create(windowStr + windowCount, 1).then(wnd => {
            console.log('jsunittest setSystemBarEnableTest2 windoe.create wnd: ' + wnd)

            if (wnd) {
                wnd.setSystemBarEnable(['navigation']).then(() => {
                    console.log('jsunittest setSystemBarEnableTest2 wnd.setSystemBarEnable([navigation]) success');
                    done()
                }, (err) => {
                    console.log('jsunittest setSystemBarEnableTest2 wnd.setSystemBarEnable([navigation]) failed, err : ' + JSON.stringify(err));
                    assertFail();
                    done();
                })
            } else {
                expect(wnd).assertFail()
            }
        }, (err) => {
            console.log('jsunittest setSystemBarEnableTest2 windoe.create failed, err : ' + JSON.stringify(err));
            assertFail()
            done();
        })
    })

    /**
    * @tc.number     SUB_WINDOW_SETSYSTEMBARENABLE_JSAPI_003
    * @tc.name       Test setSystemBarEnable
    * @tc.desc       Test window.setSystemBarEnable API function test.
    */
    it('setSystemBarEnableTest3', 0, function (done) {
        console.log('jsunittest setSystemBarEnableTest3 begin')
        window.create(windowStr + windowCount, 1).then(wnd => {
            console.log('jsunittest setSystemBarEnableTest3 windoe.create wnd: ' + wnd)

            if (wnd) {
                wnd.setSystemBarEnable(['status', 'navigation']).then(() => {
                    console.log('jsunittest setSystemBarEnableTest3 wnd.setSystemBarEnable([status,navigation]) success');
                    done()
                }, (err) => {
                    console.log('jsunittest setSystemBarEnableTest3 wnd.setSystemBarEnable([status,navigation]) failed, err : ' + JSON.stringify(err));
                    assertFail();
                    done();
                })
            } else {
                expect(wnd).assertFail()
            }
        }, (err) => {
            console.log('jsunittest setSystemBarEnableTest3 windoe.create failed, err : ' + JSON.stringify(err));
            assertFail()
            done();
        })
    })

    /**
    * @tc.number     SUB_WINDOW_SETSYSTEMBARENABLE_JSAPI_004
    * @tc.name       Test setSystemBarEnable
    * @tc.desc       Test window.setSystemBarEnable API function test.
    */
    it('setSystemBarEnableTest4', 0, function (done) {
        console.log('jsunittest setSystemBarEnableTest4 begin')
        window.create(windowStr + windowCount, 1).then(wnd => {
            console.log('jsunittest setSystemBarEnableTest4 windoe.create wnd: ' + wnd)

            if (wnd) {
                wnd.setSystemBarEnable(['status', 'navigation']).then(() => {
                    console.log('jsunittest setSystemBarEnableTest4 wnd.setSystemBarEnable status&navigation success');
                    wnd.setSystemBarEnable([]).then(() => {
                        console.log('jsunittest setSystemBarEnableTest4 wnd.setSystemBarEnable([]) success');
                        done()
                    })
                }, (err) => {
                    console.log('jsunittest setSystemBarEnableTest4 wnd.setSystemBarEnable([]) failed, err : ' + JSON.stringify(err));
                    assertFail();
                    done();
                })
            } else {
                expect(wnd).assertFail()
            }
        }, (err) => {
            console.log('jsunittest setSystemBarEnableTest4 windoe.create failed, err : ' + JSON.stringify(err));
            assertFail()
            done();
        })
    })

    /**
    * @tc.number     SUB_WINDOW_ON_JSAPI_001
    * @tc.name       Test on
    * @tc.desc       Test window.on API function test.
    */
    it('lintenerOnTest1', 0, function (done) {
        console.log('jsunittest lintenerOnTest1 begin')
        window.create(windowStr + windowCount, 1).then(wnd => {
            console.log('jsunittest lintenerOnTest1 windoe.create wnd: ' + wnd)

            if (wnd) {
                wnd.on('systemBarTintChange', (data) => {
                    console.log('jsunittest lintenerOnTest1 wnd.on systemBarTintChange success, data : ' + JSON.stringify(data));
                }, (err) => {
                    console.log('jsunittest lintenerOnTest1 wnd.on systemBarTintChange failed, err : ' + JSON.stringify(err));
                    assertFail();
                    done();
                })
                console.log('jsunittest lintenerOnTest1 end')
                done();
            } else {
                expect(wnd).assertFail()
            }
        }, (err) => {
            console.log('jsunittest lintenerOnTest1 windoe.create failed, err : ' + JSON.stringify(err));
            assertFail()
            done();
        })
    })

    /**
    * @tc.number     SUB_WINDOW_ON_JSAPI_002
    * @tc.name       Test on
    * @tc.desc       Test window.on API function test.
    */
    it('lintenerOnTest2', 0, function (done) {
        console.log('jsunittest lintenerOnTest2 begin')
        window.create(windowStr + windowCount, 1).then(wnd => {
            console.log('jsunittest lintenerOnTest2 windoe.create wnd: ' + wnd)

            if (wnd) {
                wnd.setSystemBarEnable(['status', 'navigation']).then(() => {
                    console.log('jsunittest lintenerOnTest2 wnd.setSystemBarEnable status&navigation success');
                    wnd.on('systemBarTintChange', (data) => {
                        console.log('jsunittest lintenerOnTest2 wnd.on systemBarTintChange success, data : ' + JSON.stringify(data));
                    }, (err) => {
                        console.log('jsunittest lintenerOnTest2 wnd.on systemBarTintChange failed, err : ' + JSON.stringify(err));
                        assertFail();
                        done();
                    });
                    wnd.setSystemBarEnable([]).then(() => {
                        console.log('jsunittest lintenerOnTest2 wnd.setSystemBarEnable [] success');
                        done()
                    }, (err) => {
                        console.log('jsunittest lintenerOnTest2 wnd.setSystemBarEnable [] failed, err : ' + JSON.stringify(err));
                        assertFail();
                        done();
                    })
                }, (err) => {
                    console.log('jsunittest lintenerOnTest2 wnd.setSystemBarEnable status&navigation failed, err : ' + JSON.stringify(err));
                    assertFail();
                    done();
                })
            } else {
                expect(wnd).assertFail()
            }
        })
    }, (err) => {
        console.log('jsunittest lintenerOnTest2 windoe.create failed, err : ' + JSON.stringify(err));
        assertFail()
        done();
    })

    /**
    * @tc.number     SUB_WINDOW_ON_JSAPI_003
    * @tc.name       Test on
    * @tc.desc       Test window.on API function test.
    */
    it('lintenerOnTest3', 0, function (done) {
        console.log('jsunittest lintenerOnTest3 begin')
        window.create(windowStr + windowCount, 1).then(wnd => {
            console.log('jsunittest lintenerOnTest3 windoe.create wnd: ' + wnd)

            if (wnd) {
                wnd.on('systemAvoidAreaChange', (data) => {
                    console.log('jsunittest lintenerOnTest3 wnd.on systemAvoidAreaChange success, data : ' + JSON.stringify(data));
                }, (err) => {
                    console.log('jsunittest lintenerOnTest3 wnd.on systemAvoidAreaChange failed, err : ' + JSON.stringify(err));
                    assertFail();
                    done();
                })
                console.log('jsunittest lintenerOnTest3 end')
                done();
            } else {
                expect(wnd).assertFail()
            }
        }, (err) => {
            console.log('jsunittest lintenerOnTest3 windoe.create failed, err : ' + JSON.stringify(err));
            assertFail()
            done();
        })
    })

    /**
    * @tc.number     SUB_WINDOW_ON_JSAPI_004
    * @tc.name       Test on
    * @tc.desc       Test window.on API function test.
    */
    it('lintenerOnTest4', 0, function (done) {
        console.log('jsunittest lintenerOnTest4 begin')
        window.create(windowStr + windowCount, 1).then(wnd => {
            console.log('jsunittest lintenerOnTest4 windoe.create wnd: ' + wnd)

            if (wnd) {
                wnd.setSystemBarEnable(['status', 'navigation']).then(() => {
                    console.log('jsunittest lintenerOnTest4 wnd.setSystemBarEnable status&navigation success');
                    wnd.on('systemAvoidAreaChange', (data) => {
                        console.log('jsunittest lintenerOnTest4 wnd.on systemAvoidAreaChange success, data : ' + JSON.stringify(data));
                    }, (err) => {
                        console.log('jsunittest lintenerOnTest4 wnd.on systemAvoidAreaChange failed, err : ' + JSON.stringify(err));
                        assertFail();
                        done();
                    })
                    wnd.setSystemBarEnable([]).then(() => {
                        console.log('jsunittest lintenerOnTest4 wnd.setSystemBarEnable [] success');
                        done()
                    }, (err) => {
                        console.log('jsunittest lintenerOnTest4 wnd.setSystemBarEnable [] failed, err : ' + JSON.stringify(err));
                        assertFail();
                        done();
                    })
                }, (err) => {
                    console.log('jsunittest lintenerOnTest4 wnd.setSystemBarEnable status&navigation failed, err : ' + JSON.stringify(err));
                    assertFail();
                    done();
                })
            } else {
                expect(wnd).assertFail()
            }
        }, (err) => {
            console.log('jsunittest lintenerOnTest4 windoe.create failed, err : ' + JSON.stringify(err));
            assertFail()
            done();
        })
    })

    /**
    * @tc.number     SUB_WINDOW_ON_JSAPI_005
    * @tc.name       Test on
    * @tc.desc       Test window.on API function test.
    */
    it('lintenerOnTest5', 0, function (done) {
        console.log('jsunittest lintenerOnTest5 begin')
        window.create(windowStr + windowCount, 1).then(wnd => {
            console.log('jsunittest lintenerOnTest5 windoe.create wnd: ' + wnd)
            if (wnd) {
                wnd.on('systemSizeChange', (data) => {
                    console.log('jsunittest lintenerOnTest5 wnd.on systemSizeChange success, data : ' + JSON.stringify(data));
                }, (err) => {
                    console.log('jsunittest lintenerOnTest5 wnd.on systemSizeChange failed, err : ' + JSON.stringify(err));
                    assertFail();
                    done();
                })
                console.log('jsunittest lintenerOnTest5 end')
                done();
            } else {
                expect(wnd).assertFail()
            }
        }, (err) => {
            console.log('jsunittest lintenerOnTest5 windoe.create failed, err : ' + JSON.stringify(err));
            assertFail()
            done();
        })
    })

    /**
    * @tc.number     SUB_WINDOW_ON_JSAPI_006
    * @tc.name       Test on
    * @tc.desc       Test window.on API function test.
    */
    it('lintenerOnTest6', 0, function (done) {
        console.log('jsunittest lintenerOnTest6 begin')
        window.create(windowStr + windowCount, 1).then(wnd => {
            console.log('jsunittest lintenerOnTest6 windoe.create wnd: ' + wnd)

            if (wnd) {
                wnd.on('systemSizeChange', (data) => {
                    console.log('jsunittest lintenerOnTest6 wnd.on systemSizeChange success, data : ' + JSON.stringify(data));
                }, (err) => {
                    console.log('jsunittest lintenerOnTest6 wnd.on systemSizeChange failed, err : ' + JSON.stringify(err));
                    assertFail();
                    done();
                });
                wnd.resetSize(200, 200).then(() => {
                    console.log('jsunittest lintenerOnTest6 wnd.resetSize 200,200 success');
                    done()
                }, (err) => {
                    console.log('jsunittest lintenerOnTest6 wnd.resetSize 200,200 failed, err : ' + JSON.stringify(err));
                    assertFail();
                    done();
                })
            } else {
                expect(wnd).assertFail()
            }
        }, (err) => {
            console.log('jsunittest lintenerOnTest6 windoe.create failed, err : ' + JSON.stringify(err));
            assertFail()
            done();
        })
    })

})