/*
 * Copyright (C) 2021 Huawei Device Co., Ltd.
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
import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from 'deccjsunit/index'
import window from '@ohos.window'
import screen from '@ohos.screen'
import display from '@ohos.display'


describe('window_test', function () {
    var wnd;
    var TRUE_FLAG = true;
    var windowTypeArr = [];
    var windowTypeDic = {
        'APP_WINDOW_BASE': 1,
        'APP_MAIN_WINDOW_BASE': 1,
        'WINDOW_TYPE_APP_MAIN_WINDOW': 1,
        'APP_MAIN_WINDOW_END': 1,
        'APP_SUB_WINDOW_BASE': 1000,
        'WINDOW_TYPE_MEDIA': 1000,
        'WINDOW_TYPE_APP_SUB_WINDOW': 1001,
        'APP_SUB_WINDOW_END': 1001,
        'APP_WINDOW_END': 1001,
        'SYSTEM_WINDOW_BASE': 2000,
        'BELOW_APP_SYSTEM_WINDOW_BASE': 2000,
        'WINDOW_TYPE_WALLPAPER': 2000,
        'WINDOW_TYPE_DESKTOP': 2001,
        'BELOW_APP_SYSTEM_WINDOW_END': 2001,
        'ABOVE_APP_SYSTEM_WINDOW_BASE': 2100,
        'WINDOW_TYPE_APP_LAUNCHING': 2100,
        'WINDOW_TYPE_DOCK_SLICE': 2101,
        'WINDOW_TYPE_INCOMING_CALL': 2102,
        'WINDOW_TYPE_SEARCHING_BAR': 2103,
        'WINDOW_TYPE_SYSTEM_ALARM_WINDOW': 2104,
        'WINDOW_TYPE_INPUT_METHOD_FLOAT': 2105,
        'WINDOW_TYPE_FLOAT': 2106,
        'WINDOW_TYPE_TOAST': 2107,
        'WINDOW_TYPE_STATUS_BAR': 2108,
        'WINDOW_TYPE_PANEL': 2109,
        'WINDOW_TYPE_KEYGUARD': 2110,
        'WINDOW_TYPE_VOLUME_OVERLAY': 2111,
        'WINDOW_TYPE_NAVIGATION_BAR': 2112,
        'WINDOW_TYPE_DRAGGING_EFFECT': 2113,
        'WINDOW_TYPE_POINTER': 2114,
        'WINDOW_TYPE_LAUNCHER_RECENT': 2115,
        'WINDOW_TYPE_LAUNCHER_DOCK': 2116,
        'ABOVE_APP_SYSTEM_WINDOW_END': 2116,
        'SYSTEM_WINDOW_END': 2116
    }
    var windowCount = 2022;
    var topWindow = null;
    const DELAY_TIME = 3000;

    beforeAll(function (done) {
        windowTypeArr = Object.keys(windowTypeDic);
        console.log('jsunittest beforeAll begin')
        window.getTopWindow().then(wnd => {
            console.log('jsunittest beforeAll window.getTopWindow wnd: ' + wnd)
            if (wnd) {
                topWindow = wnd;
            } else {
                console.log('jsunittest beforeAll window.getTopWindow empty');
            }
        }, (err) => {
            console.log('jsunittest beforeAll window.getTopWindow failed, err : ' + JSON.stringify(err));
        })
        setTimeout(() => {
            done();
        }, 5000);
    })
    beforeEach(function (done) {
        if (topWindow) {
            topWindow.show().then(() => {
                console.log('jsunittest beforeEach wnd.show success');
            }, (err) => {
                console.log('jsunittest beforeEach wnd.show failed, err : ' + JSON.stringify(err));
            })
            topWindow.setFullScreen(false).then(() => {
                console.log('jsunittest beforeEach wnd.setFullScreen(false) success');
            }, (err) => {
                console.log('jsunittest beforeEach wnd.setFullScreen(false) failed, err : ' + JSON.stringify(err));
            })
            setTimeout(() => {
                done();
            }, DELAY_TIME);
        } else {
            done();
        }
    })
    afterEach(function () {
        windowCount++;
    })
    afterAll(function () {
    })

    /**
	 * @tc.number     SUB_WINDOW_HIDE_SHOW_JSAPI_001
	 * @tc.name       Test hideOrShowTest1
	 * @tc.desc       set window hidden
	 */
    it('hideOrShowTest1', 0, async function (done) {
        console.log('jsunittest hideOrShowTest1 begin')
        window.getTopWindow().then(wnd => {
            console.log('jsunittest hideOrShowTest1 window.getTopWindow wnd: ' + wnd)
            expect(!!wnd).assertTrue();
            wnd.hide().then(() => {
                console.log('jsunittest hideOrShowTest1 wnd.hide success');
                expect(TRUE_FLAG).assertTrue();
                done();
            }, (err) => {
                console.log('jsunittest hideOrShowTest1 wnd.hide failed, err : ' + JSON.stringify(err));
                expect(TRUE_FLAG).assertFail();
                done();
            })
        }, (err) => {
            console.log('jsunittest hideOrShowTest1 window.getTopWindow failed, err : ' + JSON.stringify(err));
            expect(TRUE_FLAG).assertFail();
            done();
        })
    })

    /**
	 * @tc.number     SUB_WINDOW_HIDE_SHOW_JSAPI_001
	 * @tc.name       Test hideOrShowTest1
	 * @tc.desc       Set the window to hide and then show
	 */
    it('hideOrShowTest2', 0, async function (done) {
        console.log('jsunittest hideOrShowTest2 begin')
        window.getTopWindow().then(wnd => {
            console.log('jsunittest hideOrShowTest2 window.getTopWindow wnd: ' + wnd)
            expect(!!wnd).assertTrue();
            wnd.hide().then(() => {
                console.log('jsunittest hideOrShowTest2 wnd.hide success');
                wnd.show().then(() => {
                    console.log('jsunittest hideOrShowTest2 wnd.show success');
                    expect(TRUE_FLAG).assertTrue()
                    done()
                }, (err) => {
                    console.log('jsunittest hideOrShowTest2 wnd.show failed, err : ' + JSON.stringify(err));
                    expect(TRUE_FLAG).assertFail();
                    done();
                })
            }, (err) => {
                console.log('jsunittest hideOrShowTest2 wnd.hide failed, err : ' + JSON.stringify(err));
                expect(TRUE_FLAG).assertFail();
                done();
            })
        }, (err) => {
            console.log('jsunittest hideOrShowTest2 window.getTopWindow failed, err : ' + JSON.stringify(err));
            expect(TRUE_FLAG).assertFail();
            done();
        })
    })

    /**
	 * @tc.number     SUB_WINDOW_GETPROPERTIES_JSAPI_001
	 * @tc.name       Test getPropertiesTest1
	 * @tc.desc       Get the current application main window properties
	 */
    it('getPropertiesTest1', 0, async function (done) {
        console.log('jsunittest getPropertiesTest1 begin')
        window.getTopWindow().then(wnd => {
            console.log('jsunittest getPropertiesTest1 window.getTopWindow wnd: ' + wnd)
            expect(!!wnd).assertTrue();
            wnd.getProperties().then((data) => {
                console.log('jsunittest getPropertiesTest1 wnd.getProperties success, data : ' + JSON.stringify(data));
                expect(!!data).assertTrue();
                expect(!!data.type).assertTrue();
                expect(!!data.windowRect).assertTrue();
                done()
            }, (err) => {
                console.log('jsunittest getPropertiesTest1 wnd.getProperties failed, err : ' + JSON.stringify(err));
                expect(TRUE_FLAG).assertFail();
                done();
            })
        }, (err) => {
            console.log('jsunittest getPropertiesTest1 window.getTopWindow failed, err : ' + JSON.stringify(err));
            expect(TRUE_FLAG).assertFail();
            done();
        })
    })

    /**
	 * @tc.number     SUB_WINDOW_GETAVOIDAREA_JSAPI_001
	 * @tc.name       Test getAvoidAreaTest1
	 * @tc.desc       Get SystemUI type avoidance area
	 */
    it('getAvoidAreaTest1', 0, async function (done) {
        console.log('jsunittest getAvoidAreaTest1 this.context begin');
        window.getTopWindow().then(wnd => {
            console.log('jsunittest getAvoidAreaTest1 window.getTopWindow wnd: ' + wnd);
            expect(!!wnd).assertTrue();
            wnd.getAvoidArea(0).then((data) => {
                console.log('jsunittest getAvoidAreaTest1 wnd.getAvoidArea success, data :' + JSON.stringify(data));
                expect(!!data).assertTrue();
                expect(!!data.topRect).assertTrue();
                expect(!!data.rightRect).assertTrue();
                expect(!!data.bottomRect).assertTrue();
                expect(!!data.leftRect).assertTrue();
                done()
            }, (err) => {
                console.log('jsunittest getAvoidAreaTest1 wnd.getAvoidArea failed, err : ' + JSON.stringify(err));
                expect(TRUE_FLAG).assertFail();
                done();
            })
        }, (err) => {
            console.log('jsunittest getAvoidAreaTest1 window.getTopWindow failed, err : ' + JSON.stringify(err));
            expect(TRUE_FLAG).assertFail();
            done();
        })
    })

    /**
	 * @tc.number     SUB_WINDOW_GETAVOIDAREA_JSAPI_002
	 * @tc.name       Test getAvoidAreaTest2
	 * @tc.desc       Get Notch type avoidance area
	 */
    it('getAvoidAreaTest2', 0, async function (done) {
        console.log('jsunittest getAvoidAreaTest2 pages/index/index begin');
        window.getTopWindow().then(wnd => {
            console.log('jsunittest getAvoidAreaTest2 window.getTopWindow wnd: ' + wnd);
            expect(!!wnd).assertTrue();
            wnd.getAvoidArea(1).then((data) => {
                console.log('jsunittest getAvoidAreaTest2 wnd.getAvoidArea success, data :' + JSON.stringify(data));
                expect(!!data).assertTrue();
                expect(!!data.topRect).assertTrue();
                expect(!!data.rightRect).assertTrue();
                expect(!!data.bottomRect).assertTrue();
                expect(!!data.leftRect).assertTrue();
                done()
            }, (err) => {
                console.log('jsunittest getAvoidAreaTest2 wnd.getAvoidArea failed, err : ' + JSON.stringify(err));
                expect(TRUE_FLAG).assertFail();
                done();
            })
        }, (err) => {
            console.log('jsunittest getAvoidAreaTest2 window.getTopWindow failed, err : ' + JSON.stringify(err));
            expect(TRUE_FLAG).assertFail();
            done();
        })
    })

    /**
	 * @tc.number     SUB_WINDOW_GETAVOIDAREA_JSAPI_003
	 * @tc.name       Test getAvoidAreaTest3
	 * @tc.desc       Get system gesture type avoidance area
	 */
    it('getAvoidAreaTest3', 0, async function (done) {
        console.log('jsunittest getAvoidAreaTest3 pages/index/ begin')
        window.getTopWindow().then(wnd => {
            console.log('jsunittest getAvoidAreaTest3 window.getTopWindow wnd: ' + wnd)
            expect(!!wnd).assertTrue();
            wnd.getAvoidArea(3).then((data) => {
                console.log('jsunittest getAvoidAreaTest3 wnd.getAvoidArea success, data :' + JSON.stringify(data));
                expect(!!data).assertTrue();
                expect(!!data.topRect).assertTrue();
                expect(!!data.rightRect).assertTrue();
                expect(!!data.bottomRect).assertTrue();
                expect(!!data.leftRect).assertTrue();
                done()
            }, (err) => {
                console.log('jsunittest getAvoidAreaTest3 wnd.getAvoidArea failed, err : ' + JSON.stringify(err));
                expect(TRUE_FLAG).assertFail();
                done();
            })
        }, (err) => {
            console.log('jsunittest getAvoidAreaTest3 window.getTopWindow failed, err : ' + JSON.stringify(err));
            expect(TRUE_FLAG).assertFail();
            done();
        })
    })

    /**
	 * @tc.number     SUB_WINDOW_SETFULLSCREEN_JSAPI_001
	 * @tc.name       Test setFullScreenTest1
	 * @tc.desc       Set the window to be non-fullscreen first and then fullscreen
	 */
    it('setFullScreenTest1', 0, async function (done) {
        console.log('jsunittest setFullScreenTest1 begin')
        window.getTopWindow().then(wnd => {
            console.log('jsunittest setFullScreenTest1 window.getTopWindow wnd: ' + wnd)
            expect(!!wnd).assertTrue();
            console.log('jsunittest setFullScreenTest1 setFullScreen begin')
            wnd.setFullScreen(false).then(() => {
                console.log('jsunittest setFullScreenTest1 wnd.setFullScreen(false) success');
                wnd.getProperties().then((data) => {
                    console.log('jsunittest setFullScreenTest1 wnd.getProperties success, data : ' + JSON.stringify(data));
                    expect(!!data).assertTrue();
                    expect(!data.isFullScreen).assertTrue();
                    wnd.setFullScreen(true).then(() => {
                        console.log('jsunittest setFullScreenTest1 wnd.setFullScreen(true) success');
                        wnd.getProperties().then((data) => {
                            console.log('jsunittest setFullScreenTest1 wnd.getProperties success, data : ' + JSON.stringify(data));
                            expect(!!data).assertTrue();
                            expect(data.isFullScreen).assertTrue();
                            done();
                        }, (err) => {
                            console.log('jsunittest setFullScreenTest1 wnd.getProperties failed, err : ' + JSON.stringify(err));
                            expect(TRUE_FLAG).assertFail();
                            done();
                        })
                    }, (err) => {
                        console.log('jsunittest setFullScreenTest1 wnd.setFullScreen(true) failed, err : ' + JSON.stringify(err));
                        expect(TRUE_FLAG).assertFail();
                        done();
                    })
                }, (err) => {
                    console.log('jsunittest setFullScreenTest1 wnd.getProperties failed, err : ' + JSON.stringify(err));
                    expect(TRUE_FLAG).assertFail();
                    done();
                })
            }, (err) => {
                console.log('jsunittest setFullScreenTest1 wnd.setFullScreen(false) failed, err : ' + JSON.stringify(err));
                expect(TRUE_FLAG).assertFail();
                done();
            })
            console.log('jsunittest setFullScreenTest1 setFullScreen end')
        }, (err) => {
            console.log('jsunittest setFullScreenTest1 window.getTopWindow failed, err : ' + JSON.stringify(err));
            expect(TRUE_FLAG).assertFail();
            done();
        })
    })

    /**
	 * @tc.number     SUB_WINDOW_SETLAYOUTFULLSCREEN_JSAPI_001
	 * @tc.name       Test setLayoutFullScreenTest1
	 * @tc.desc       Set window and layout to full screen
	 */
    it('setLayoutFullScreenTest1', 0, async function (done) {
        console.log('jsunittest setLayoutFullScreenTest1 begin')
        window.getTopWindow().then(wnd => {
            console.log('jsunittest setLayoutFullScreenTest1 window.getTopWindow wnd: ' + wnd)
            expect(!!wnd).assertTrue();
            wnd.setFullScreen(true).then(() => {
                console.log('jsunittest setLayoutFullScreenTest1 wnd.setFullScreen(true) success');
                wnd.getProperties().then((data) => {
                    console.log('jsunittest setLayoutFullScreenTest1 wnd.getProperties success, data : ' + JSON.stringify(data));
                    expect(!!data).assertTrue();
                    expect(data.isFullScreen).assertTrue();
                    wnd.setLayoutFullScreen(true).then(() => {
                        console.log('jsunittest setLayoutFullScreenTest1 wnd.setLayoutFullScreen(true) success');
                        wnd.getProperties().then((data) => {
                            console.log('jsunittest setLayoutFullScreenTest1 wnd.getProperties success, data : ' + JSON.stringify(data));
                            expect(!!data).assertTrue();
                            expect(data.isLayoutFullScreen).assertTrue();
                            done()
                        }, (err) => {
                            console.log('jsunittest setLayoutFullScreenTest1 wnd.getProperties failed, err : ' + JSON.stringify(err));
                            expect(TRUE_FLAG).assertFail();
                            done();
                        })
                    }, (err) => {
                        console.log('jsunittest setLayoutFullScreenTest1 wnd.setLayoutFullScreen(true) failed, err : ' + JSON.stringify(err));
                        expect(TRUE_FLAG).assertFail();
                        done();
                    })
                }, (err) => {
                    console.log('jsunittest setLayoutFullScreenTest1 wnd.getProperties failed, err : ' + JSON.stringify(err));
                    expect(TRUE_FLAG).assertFail();
                })
            }, (err) => {
                console.log('jsunittest setLayoutFullScreenTest1 wnd.setFullScreen(true) failed, err : ' + JSON.stringify(err));
                expect(TRUE_FLAG).assertFail();
                done();
            })
        }, (err) => {
            console.log('jsunittest setLayoutFullScreenTest1 window.getTopWindow failed, err : ' + JSON.stringify(err));
            expect(TRUE_FLAG).assertFail();
            done();
        })
    })

    /**
	 * @tc.number     SUB_WINDOW_SETLAYOUTFULLSCREEN_JSAPI_002
	 * @tc.name       Test setLayoutFullScreenTest2
	 * @tc.desc       Set the window to full screen, the layout is not full screen
	 */
    it('setLayoutFullScreenTest2', 0, async function (done) {
        console.log('jsunittest setLayoutFullScreenTest2 begin')
        window.getTopWindow().then(wnd => {
            console.log('jsunittest setLayoutFullScreenTest2 window.getTopWindow wnd: ' + wnd)
            expect(!!wnd).assertTrue();
            wnd.setFullScreen(true).then(() => {
                console.log('jsunittest setLayoutFullScreenTest2 wnd.setFullScreen(true) success');
                wnd.getProperties().then((data) => {
                    console.log('jsunittest setLayoutFullScreenTest2 wnd.getProperties success, data : ' + JSON.stringify(data));
                    expect(!!data).assertTrue();
                    expect(data.isFullScreen).assertTrue();
                    wnd.setLayoutFullScreen(false).then(() => {
                        console.log('jsunittest setLayoutFullScreenTest2 wnd.setLayoutFullScreen(false) success');
                        wnd.getProperties().then((data) => {
                            console.log('jsunittest setLayoutFullScreenTest2 wnd.getProperties success, data : ' + JSON.stringify(data));
                            expect(!!data).assertTrue();
                            expect(!data.isLayoutFullScreen).assertTrue();
                            done()
                        }, (err) => {
                            console.log('jsunittest setLayoutFullScreenTest2 wnd.getProperties failed, err : ' + JSON.stringify(err));
                            expect(TRUE_FLAG).assertFail();
                            done();
                        })
                    }, (err) => {
                        console.log('jsunittest setLayoutFullScreenTest2 wnd.setLayoutFullScreen(false) failed, err : ' + JSON.stringify(err));
                        expect(TRUE_FLAG).assertFail();
                        done();
                    })
                }, (err) => {
                    console.log('jsunittest setLayoutFullScreenTest2 wnd.getProperties failed, err : ' + JSON.stringify(err));
                    expect(TRUE_FLAG).assertFail();
                })
            }, (err) => {
                console.log('jsunittest setLayoutFullScreenTest2 wnd.setFullScreen(true) failed, err : ' + JSON.stringify(err));
                expect(TRUE_FLAG).assertFail();
                done();
            })
        }, (err) => {
            console.log('jsunittest setLayoutFullScreenTest1 window.getTopWindow failed, err : ' + JSON.stringify(err));
            expect(TRUE_FLAG).assertFail();
            done();
        })
    })

    /**
	 * @tc.number     SUB_WINDOW_SETLAYOUTFULLSCREEN_JSAPI_003
	 * @tc.name       Test setLayoutFullScreenTest3
	 * @tc.desc       Set the window to be non-full-screen and the layout to be full-screen
	 */
    it('setLayoutFullScreenTest3', 0, async function (done) {
        console.log('jsunittest setLayoutFullScreenTest3 begin')
        window.getTopWindow().then(wnd => {
            console.log('jsunittest setLayoutFullScreenTest3 window.getTopWindow wnd: ' + wnd)
            expect(!!wnd).assertTrue();
            wnd.setFullScreen(false).then(() => {
                console.log('jsunittest setLayoutFullScreenTest3 wnd.setFullScreen(false) success');
                wnd.getProperties().then((data) => {
                    console.log('jsunittest setLayoutFullScreenTest3 wnd.getProperties success, data : ' + JSON.stringify(data));
                    expect(!!data).assertTrue();
                    expect(!data.isFullScreen).assertTrue();
                    wnd.setLayoutFullScreen(true).then(() => {
                        console.log('jsunittest setLayoutFullScreenTest3 wnd.setLayoutFullScreen(true) success');
                        wnd.getProperties().then((data) => {
                            console.log('jsunittest setLayoutFullScreenTest3 wnd.getProperties success, data : ' + JSON.stringify(data));
                            expect(!!data).assertTrue();
                            expect(data.isLayoutFullScreen).assertTrue();
                            done()
                        }, (err) => {
                            console.log('jsunittest setLayoutFullScreenTest3 wnd.getProperties failed, err : ' + JSON.stringify(err));
                            expect(TRUE_FLAG).assertFail();
                            done();
                        })
                    }, (err) => {
                        console.log('jsunittest setLayoutFullScreenTest3 wnd.setLayoutFullScreen(true) failed, err : ' + JSON.stringify(err));
                        expect(TRUE_FLAG).assertFail();
                        done();
                    })
                }, (err) => {
                    console.log('jsunittest setLayoutFullScreenTest3 wnd.getProperties failed, err : ' + JSON.stringify(err));
                    expect(TRUE_FLAG).assertFail();
                })
            }, (err) => {
                console.log('jsunittest setLayoutFullScreenTest3 wnd.setFullScreen(false) failed, err : ' + JSON.stringify(err));
                expect(TRUE_FLAG).assertFail();
                done();
            })
        }, (err) => {
            console.log('jsunittest setLayoutFullScreenTest3 window.getTopWindow failed, err : ' + JSON.stringify(err));
            expect(TRUE_FLAG).assertFail();
            done();
        })
    })

    /**
	 * @tc.number     SUB_WINDOW_SETLAYOUTFULLSCREEN_JSAPI_004
	 * @tc.name       Test setLayoutFullScreenTest4
	 * @tc.desc       Setting windows and layouts to be non-fullscreen
	 */
    it('setLayoutFullScreenTest4', 0, async function (done) {
        console.log('jsunittest setLayoutFullScreenTest4 begin')
        window.getTopWindow().then(wnd => {
            console.log('jsunittest setLayoutFullScreenTest4 window.getTopWindow wnd: ' + wnd)
            expect(!!wnd).assertTrue();
            wnd.setFullScreen(false).then(() => {
                console.log('jsunittest setLayoutFullScreenTest4 wnd.setFullScreen(false) success');
                wnd.getProperties().then((data) => {
                    console.log('jsunittest setLayoutFullScreenTest4 wnd.getProperties success, data : ' + JSON.stringify(data));
                    expect(!!data).assertTrue();
                    expect(!data.isFullScreen).assertTrue();
                    wnd.setLayoutFullScreen(false).then(() => {
                        console.log('jsunittest setLayoutFullScreenTest4 wnd.setLayoutFullScreen(false) success');
                        wnd.getProperties().then((data) => {
                            console.log('jsunittest setLayoutFullScreenTest4 wnd.getProperties success, data : ' + JSON.stringify(data));
                            expect(!!data).assertTrue();
                            expect(!data.isLayoutFullScreen).assertTrue();
                            done()
                        }, (err) => {
                            console.log('jsunittest setLayoutFullScreenTest4 wnd.getProperties failed, err : ' + JSON.stringify(err));
                            expect(TRUE_FLAG).assertFail();
                            done();
                        })
                    }, (err) => {
                        console.log('jsunittest setLayoutFullScreenTest4 wnd.setLayoutFullScreen(false) failed, err : ' + JSON.stringify(err));
                        expect(TRUE_FLAG).assertFail();
                        done();
                    })
                }, (err) => {
                    console.log('jsunittest setLayoutFullScreenTest4 wnd.getProperties failed, err : ' + JSON.stringify(err));
                    expect(TRUE_FLAG).assertFail();
                })
            }, (err) => {
                console.log('jsunittest setLayoutFullScreenTest4 wnd.setFullScreen(false) failed, err : ' + JSON.stringify(err));
                expect(TRUE_FLAG).assertFail();
                done();
            })
        }, (err) => {
            console.log('jsunittest setLayoutFullScreenTest4 window.getTopWindow failed, err : ' + JSON.stringify(err));
            expect(TRUE_FLAG).assertFail();
            done();
        })
    })

    /**
	 * @tc.number     SUB_WINDOW_FIND_JSAPI_001
	 * @tc.name       Test findTest1
	 * @tc.desc       Query main window
	 */
    it('findTest1', 0, async function (done) {
        console.log('jsunittest findTest1 begin')
        window.find('main window0').then((data) => {
            console.log('jsunittest findTest1 wnd.find success, data : ' + JSON.stringify(data));
            expect(!!data).assertTrue();
            done()
        }, (err) => {
            console.log('jsunittest findTest1 wnd.find failed, err : ' + JSON.stringify(err));
            expect(TRUE_FLAG).assertTrue();
            done();
        })
    })

    /**
	 * @tc.number     SUB_WINDOW_FIND_JSAPI_002
	 * @tc.name       Test findTest2
	 * @tc.desc       Query for non-existing windows
	 */
    it('findTest2', 0, async function (done) {
        console.log('jsunittest findTest2 begin')
        window.find('nonexist').then((window) => {
            console.log('jsunittest findTest2 wnd.find success, window : ' + JSON.stringify(window));
            expect(!!window).assertTrue();
            done()
        }, (err) => {
            console.log('jsunittest findTest2 wnd.find failed, err : ' + JSON.stringify(err));
            expect(TRUE_FLAG).assertTrue();
            done();
        })
    })

    /**
     * @tc.number    SUB_WMS_FAMODELONOFF_JSAPI_001
     * @tc.name      Test faModelOnOffTest1.
     * @tc.desc      To verify the function of enabling and disabling the monitoring function for tone change on the system bar..
     */
    it('faModelOnOffTest1', 0, async function (done) {
        console.log('jsunittest faModelOnOffTest1 begin');
        var listenerStatus; //1表示开启 其他为关闭
        var callback = (data) => {
            console.log('jsunittest faModelOnOffTest1 create callback ' + JSON.stringify(data));
            listenerStatus = 1;
            console.log('jsunittest faModelOnOffTest1 listenerStatus 1: ' + listenerStatus);
        }
        window.on('systemBarTintChange', callback);
        window.getTopWindow((err, data) => {
            if (err.code != 0) {
                console.log('jsunittest faModelOnOffTest1 getTopWindow callback fail ' + JSON.stringify(err.code));
                expect().assertFail();
                done();
            }
            expect(data != null).assertTrue();
            data.setLayoutFullScreen(true, (err) => {
                if (err.code != 0) {
                    console.log('jsunittest faModelOnOffTest1 setLayoutFullScreen callback fail ' + JSON.stringify(err.code));
                    expect().assertFail();
                    done();
                } else {
                    setTimeout(() => {
                        expect(listenerStatus == 1).assertTrue();
                        window.off('systemBarTintChange');
                        listenerStatus = 0;
                        data.setLayoutFullScreen(false, (err) => {
                            console.log('jsunittest faModelOnOffTest1 listenerStatus 2:' + listenerStatus);
                            if (err.code != 0 || listenerStatus == 1) {
                                console.log('jsunittest faModelOnOffTest1 setLayoutFullScreen callback fail ' + JSON.stringify(err.code));
                                expect().assertFail();
                                done();
                            } else {
                                console.log('jsunittest faModelOnOffTest1 listenerStatus 3:' + listenerStatus);
                                console.log('jsunittest faModelOnOffTest1 off callback success');
                                expect(TRUE_FLAG).assertTrue();
                                done();
                            }
                        })
                    }, 1000);
                }

            })
        })

    })

    /**
     * @tc.number    SUB_WMS_FAMODELONOFF_JSAPI_002
     * @tc.name      Test faModelOnOffTest2.
     * @tc.desc      To verify the function of enabling and disabling intercepting when the window size changes.
     */
    var listenerStatus; //1表示开启 其他为关闭
    function callback(data) {
        console.log('jsunittest faModelOnOffTest2 callback  ' + JSON.stringify(data));
        listenerStatus = 1;
        console.log('jsunittest faModelOnOffTest2 listenerStatus 1: ' + listenerStatus);
    }

    it('faModelOnOffTest2', 0, async function (done) {
        console.log('jsunittest faModelOnOffTest2 begin');
        window.getTopWindow((err, data) => {
            if (err.code != 0) {
                console.log('jsunittest faModelOnOffTest2 getTopWindow callback fail ' + JSON.stringify(err.code));
                expect().assertFail();
                done();
            } else {
                expect(typeof data != undefined).assertTrue();
                data.on('windowSizeChange', callback);
            }
            data.setLayoutFullScreen(true, (err) => {
                if (err.code != 0) {
                    console.log('jsunittest faModelOnOffTest2 setLayoutFullScreen callback fail ' + JSON.stringify(err.code));
                    expect().assertFail();
                    done();
                } else {
                    setTimeout((async function () {
                        console.log('jsunittest faModelOnOffTest2 listenerStatus 111: ' + listenerStatus);
                        expect(listenerStatus).assertEqual(1);
                        data.off('windowSizeChange')
                        listenerStatus = 0;
                        data.setLayoutFullScreen(false, (err) => {
                            console.log('jsunittest faModelOnOffTest2 listenerStatus 2: ' + listenerStatus);
                            if (err.code != 0 || listenerStatus == 1) {
                                console.log('jsunittest faModelOnOffTest2 setLayoutFullScreen callback fail ' + JSON.stringify(err.code));
                                expect().assertFail();
                                done();
                            } else {
                                console.log('jsunittest faModelOnOffTest2 listenerStatus 3: ' + listenerStatus);
                                console.log('jsunittest faModelOnOffTest2 off callback success');
                                expect(TRUE_FLAG).assertTrue();
                                done();
                            }
                        })
                    }), 1000)
                }
            })
        })
    })

    function callback2(data) {
        console.log('jsunittest faModelOnOffTest3 callback  ' + JSON.stringify(data));
        listenerStatus = 1;
        console.log('jsunittest faModelOnOffTest3 listenerStatus 1: ' + listenerStatus);
    }

    /**
     * @tc.number    SUB_WMS_FAMODELONOFF_JSAPI_003
     * @tc.name      Test faModelOnOffTest3.
     * @tc.desc      To verify the function of enabling and disabling lawful interception in the system and window.
     */
    it('faModelOnOffTest3', 0, async function (done) {
        console.log('jsunittest faModelOnOffTest3 begin')
        window.getTopWindow((err, data) => {
            if (err.code != 0) {
                console.log('jsunittest faModelOnOffTest3 getTopWindow callback fail ' + JSON.stringify(err.code));
                expect().assertFail();
                done();
            } else {
                expect(typeof data != undefined).assertTrue();
                data.on('systemAvoidAreaChange', callback2);
            }
            data.setFullScreen(true, (err) => {
                if (err.code != 0) {
                    console.log('jsunittest faModelOnOffTest3 setLayoutFullScreen callback fail ' + JSON.stringify(err.code));
                    expect().assertFail();
                    done();
                } else {
                    setTimeout((async function () {
                        console.log('jsunittest faModelOnOffTest3 listenerStatus 111: ' + listenerStatus);
                        expect(listenerStatus).assertEqual(1);
                        data.off('systemAvoidAreaChange')
                        listenerStatus = 0;
                        data.setFullScreen(false, (err) => {
                            console.log('jsunittest faModelOnOffTest3 listenerStatus 2: ' + listenerStatus);
                            if (err.code != 0 || listenerStatus == 1) {
                                console.log('jsunittest faModelOnOffTest2 setLayoutFullScreen callback fail ' + JSON.stringify(err.code));
                                expect().assertFail();
                                done();
                            } else {
                                console.log('jsunittest faModelOnOffTest3 listenerStatus 3: ' + listenerStatus);
                                console.log('jsunittest faModelOnOffTest3 off callback success');
                                expect(TRUE_FLAG).assertTrue();
                                done();
                            }
                        })
                    }), 1000)

                }
            })
        })
    })

    /**
     * @tc.number    SUB_WINDOW_FAMODELHIDE_SHOW_JSAPI_001
     * @tc.name      Test faModelHideOrShowTest1.
     * @tc.desc      Set the window to hide and then show.
     */
    it('faModelHideOrShowTest1', 0, async function (done) {
        console.log('jsunittest faModelHideOrShowTest1 begin');
        window.getTopWindow().then(wnd => {
            console.log('jsunittest faModelHideOrShowTest1 window.getTopWindow wnd: ' + wnd);
            expect(wnd != null).assertTrue();
            wnd.hide((err) => {
                console.log('jsunittest faModelHideOrShowTest1 window.hide callback begin' + err.code);
                if (err.code != 0) {
                    console.log('jsunittest faModelHideOrShowTest1 window.hide callback fail' + JSON.stringify(err));
                    expect().assertFail();
                    done();
                } else {
                    expect(true).assertTrue();
                    console.log('jsunittest faModelHideOrShowTest1 window.hide callback success');
                }
                wnd.show((err) => {
                    console.log('jsunittest faModelHideOrShowTest1 window.show callback begin' + err.code);
                    if (err.code != 0) {
                        console.log('jsunittest faModelHideOrShowTest1 window.show callback fail' + JSON.stringify(err));
                        expect().assertFail();
                        done();
                    } else {
                        console.log('jsunittest faModelHideOrShowTest1 window.show callback success');
                        expect(TRUE_FLAG).assertTrue();
                        done();
                    }
                })
            })
        }).catch((err) => {
            console.log('jsunittest hideOrShowTest1 window.getTopWindow fail : ' + JSON.stringify(err));
            expect().assertFail();
            done();
        })
    })

    /**
     * @tc.number    SUB_WINDOW_FAMODELGETPROPERTIES_JSAPI_001
     * @tc.name      Test faModelGetPropertiesTest1.
     * @tc.desc      Get the current application main window properties.
     */
    it('faModelGetPropertiesTest1', 0, async function (done) {
        console.log('jsunittest faModelGetPropertiesTest1 begin');
        window.getTopWindow().then(wnd => {
            console.log('jsunittest faModelGetPropertiesTest1 window.getTopWindow wnd: ' + wnd);
            expect(wnd != null).assertTrue();
            wnd.getProperties((err, data) => {
                console.log('jsunittest faModelGetPropertiesTest1 window.getProperties callback begin' + err.code);
                console.log('jsunittest faModelGetPropertiesTest1 window.getProperties callback begin' + JSON.stringify(data));
                if (err.code != 0) {
                    console.log('jsunittest faModelGetPropertiesTest1 window.getProperties callback fail' + JSON.stringify(err));
                    expect().assertFail();
                    done();
                } else {
                    expect(data.type != null).assertTrue();
                    expect(data.windowRect != null).assertTrue();
                    console.log('jsunittest faModelGetPropertiesTest1 window.getProperties callback end');
                    done();
                }
            })
        }).catch((err) => {
            console.log('jsunittest faModelGetPropertiesTest1 window.getTopWindow fail : ' + JSON.stringify(err));
            expect().assertFail();
            done();
        })
    })

    /**
     * @tc.number    SUB_WINDOW_FAMODELGETAVOIDAREA_JSAPI_001
     * @tc.name      Test faModelGetAvoidAreaTest1.
     * @tc.desc      Get System type avoidance area.
     */
    it('faModelGetAvoidAreaTest1', 0, async function (done) {
        console.log('jsunittest faModelGetAvoidAreaTest1 begin');
        window.getTopWindow().then(wnd => {
            console.log('jsunittest faModelGetAvoidAreaTest1 window.getTopWindow wnd: ' + wnd);
            expect(wnd != null).assertTrue();
            wnd.getAvoidArea(0, (err, data) => {
                console.log('jsunittest faModelGetAvoidAreaTest1 window.getAvoidArea callback begin' + err.code);
                console.log('jsunittest faModelGetAvoidAreaTest1 window.getAvoidArea callback begin' + JSON.stringify(data));
                if (err.code != 0) {
                    console.log('jsunittest faModelGetAvoidAreaTest1 window.getAvoidArea callback fail' + JSON.stringify(err));
                    expect().assertFail();
                    done();
                } else {
                    expect(data.topRect != null).assertTrue();
                    expect(data.rightRect != null).assertTrue();
                    expect(data.bottomRect != null).assertTrue();
                    expect(data.leftRect != null).assertTrue();
                    console.log('jsunittest faModelGetAvoidAreaTest1 window.getAvoidArea callback end');
                    done();
                }
            })

        }).catch((err) => {
            console.log('jsunittest faModelGetAvoidAreaTest1 window.getTopWindow fail : ' + JSON.stringify(err));
            expect().assertFail();
            done();
        })
    })

    /**
     * @tc.number    SUB_WINDOW_FAMODELGETAVOIDAREA_JSAPI_002
     * @tc.name      Test faModelGetAvoidAreaTest2.
     * @tc.desc      Get Cutout type avoidance area.
     */
    it('faModelGetAvoidAreaTest2', 0, async function (done) {
        console.log('jsunittest faModelGetAvoidAreaTest2 begin');
        window.getTopWindow().then(wnd => {
            console.log('jsunittest faModelGetAvoidAreaTest2 window.getTopWindow wnd: ' + wnd);
            expect(wnd != null).assertTrue();
            wnd.getAvoidArea(1, (err, data) => {
                console.log('jsunittest faModelGetAvoidAreaTest2 window.getAvoidArea callback begin' + err.code);
                console.log('jsunittest faModelGetAvoidAreaTest2 window.getAvoidArea callback begin' + JSON.stringify(data));
                if (err.code != 0) {
                    console.log('jsunittest faModelGetAvoidAreaTest2 window.getAvoidArea callback fail' + JSON.stringify(err));
                    expect().assertFail();
                    done();
                } else {
                    expect(data.topRect != null).assertTrue();
                    expect(data.rightRect != null).assertTrue();
                    expect(data.bottomRect != null).assertTrue();
                    expect(data.leftRect != null).assertTrue();
                    console.log('jsunittest faModelGetAvoidAreaTest2 window.getAvoidArea callback end');
                    done();
                }
            })
        }).catch((err) => {
            console.log('jsunittest faModelGetAvoidAreaTest2 window.getTopWindow fail : ' + JSON.stringify(err));
            expect().assertFail();
            done();
        })
    })

    /**
     * @tc.number    SUB_WINDOW_FAMODELGETAVOIDAREA_JSAPI_003
     * @tc.name      Test faModelGetAvoidAreaTest3.
     * @tc.desc      Get system gesture type avoidance area.
     */
    it('faModelGetAvoidAreaTest3', 0, async function (done) {
        console.log('jsunittest faModelGetAvoidAreaTest3 begin');
        window.getTopWindow().then(wnd => {
            console.log('jsunittest faModelGetAvoidAreaTest3 window.getTopWindow wnd: ' + wnd);
            expect(wnd != null).assertTrue();
            wnd.getAvoidArea(3, (err, data) => {
                console.log('jsunittest faModelGetAvoidAreaTest3 window.getAvoidArea callback begin' + err.code);
                console.log('jsunittest faModelGetAvoidAreaTest3 window.getAvoidArea callback begin' + JSON.stringify(data));
                if (err.code != 0) {
                    console.log('jsunittest faModelGetAvoidAreaTest3 window.getAvoidArea callback fail' + JSON.stringify(err));
                    expect().assertFail();
                    done();
                } else {
                    expect(data.topRect != null).assertTrue();
                    expect(data.rightRect != null).assertTrue();
                    expect(data.bottomRect != null).assertTrue();
                    expect(data.leftRect != null).assertTrue();
                    console.log('jsunittest faModeGetAvoidAreaTest3 window.getAvoidArea callback end');
                    done();
                }
            })
        }).catch((err) => {
            console.log('jsunittest faModeGetAvoidAreaTest3 window.getTopWindow fail : ' + JSON.stringify(err));
            expect().assertFail();
            done();
        })
    })

    /**
     * @tc.number    SUB_WINDOW_FAMODELSETFULLSCREEN_JSAPI_001
     * @tc.name      Test faModelSetFullScreenTest1
     * @tc.desc      Set the window to be non-fullscreen first and then fullscreen.
     */
    it('faModelSetFullScreenTest1', 0, async function (done) {
        console.log('jsunittest faModelSetFullScreenTest1 begin');
        window.getTopWindow().then(wnd => {
            console.log('jsunittest faModelSetFullScreenTest1 window.getTopWindow wnd: ' + wnd);
            expect(wnd != null).assertTrue();
            console.log('jsunittest faModelSetFullScreenTest1 setFullScreen callback begin');
            wnd.setFullScreen(false, (err) => {
                console.log('jsunittest faModelSetFullScreenTest1 window.setFullScreen(false) callback begin' + err.code);
                if (err.code != 0) {
                    console.log('jsunittest faModelSetFullScreenTest1 window.setFullScreen(false) callback fail' + JSON.stringify(err));
                    expect().assertFail();
                    done();
                }
                console.log('jsunittest faModelSetFullScreenTest1 setFullScreen(false) callback end');
                wnd.getProperties((err, data) => {
                    console.log('jsunittest faModelSetFullScreenTest1 window.getProperties callback begin' + err.code);
                    console.log('jsunittest faModelSetFullScreenTest1 window.getProperties callback begin' + JSON.stringify(data));
                    if (err.code != 0) {
                        console.log('jsunittest faModelSetFullScreenTest1 window.getProperties callback fail' + JSON.stringify(err));
                        expect().assertFail();
                        done();
                    }
                    expect(!data.isFullScreen).assertTrue();
                    console.log('jsunittest faModelSetFullScreenTest1 window.getProperties callback end');
                    wnd.setFullScreen(true, (err) => {
                        if (err.code != 0) {
                            console.log('jsunittest faModelSetFullScreenTest1 window.setFullScreen(true) callback fail' + JSON.stringify(err));
                            expect().assertFail();
                            done();
                        }
                        console.log('jsunittest faModelSetFullScreenTest1 setFullScreen(true) callback end');
                        wnd.getProperties((err, data) => {
                            console.log('jsunittest faModelSetFullScreenTest1 window.getProperties callback begin' + err.code);
                            console.log('jsunittest faModelSetFullScreenTest1 window.getProperties callback begin' + JSON.stringify(data));
                            if (err.code != 0) {
                                console.log('jsunittest faModelSetFullScreenTest1 window.getProperties callback fail' + JSON.stringify(err));
                                expect().assertFail();
                                done();
                            }
                            expect(data.isFullScreen).assertTrue();
                            console.log('jsunittest faModelSetFullScreenTest1 window.getProperties callback end');
                            done();
                        })
                    })
                })
            })
        }).catch((err) => {
            console.log('jsunittest setFullScreenTest1 window.getTopWindow fail : ' + JSON.stringify(err));
            expect().assertFail();
            done();
        })
    });

    /**
     * @tc.number    SUB_WINDOW_FAMODELSETLAYOUTFULLSCREEN_JSAPI_001
     * @tc.name      Test faModelSetLayoutFullScreenTest1
     * @tc.desc      Set window and layout to full screen.
     */
    it('faModelSetLayoutFullScreenTest1', 0, async function (done) {
        console.log('jsunittest faModelSetLayoutFullScreenTest1 begin')
        window.getTopWindow().then(wnd => {
            console.log('jsunittest faModelSetLayoutFullScreenTest1 window.getTopWindow wnd: ' + wnd);
            expect(wnd != null).assertTrue();
            wnd.setFullScreen(true, (err) => {
                console.log('jsunittest faModelSetLayoutFullScreenTest1 wnd.setFullScreen(true) callback begin');
                if (err.code != 0) {
                    console.log('jsunittest faModelSetLayoutFullScreenTest1 window.setFullScreen callback fail' + JSON.stringify(err));
                    expect().assertFail();
                    done();
                }
                console.log('jsunittest faModelSetLayoutFullScreenTest1 wnd.setFullScreen(true) callback end');
                wnd.getProperties((err, data) => {
                    if (err.code != 0) {
                        console.log('jsunittest faModelSetLayoutFullScreenTest1 window.getProperties callback fail' + JSON.stringify(err));
                        expect().assertFail();
                        done();
                    }
                    expect(data.isFullScreen).assertTrue();
                    wnd.setLayoutFullScreen(true, (err) => {
                        if (err.code != 0) {
                            console.log('jsunittest faModelSetLayoutFullScreenTest1 window.setLayoutFullScreen callback fail' + JSON.stringify(err));
                            expect().assertFail();
                            done();
                        }
                        console.log('jsunittest faModelSetLayoutFullScreenTest1 wnd.setLayoutFullScreen(true) callback end');
                        wnd.getProperties((err, data) => {
                            if (err.code != 0) {
                                console.log('jsunittest faModelSetLayoutFullScreenTest1 window.getProperties callback fail' + JSON.stringify(err));
                                expect().assertFail();
                                done();
                            }
                            console.log('jsunittest faModelSetLayoutFullScreenTest1 wnd.getProperties callback end');
                            expect(data.isLayoutFullScreen).assertTrue();
                            done()
                        })
                    })
                })
            })
        }).catch((err) => {
            console.log('jsunittest faModelSetLayoutFullScreenTest1 window.getTopWindow fail : ' + JSON.stringify(err));
            expect().assertFail();
            done();
        })
    })

    /**
     * @tc.number    SUB_WINDOW_FAMODELSETLAYOUTFULLSCREEN_JSAPI_002
     * @tc.name      Test faModelSetLayoutFullScreenTest2
     * @tc.desc      Set the window to full screen, the layout is not full screen.
     */
    it('faModelSetLayoutFullScreenTest2', 0, async function (done) {
        console.log('jsunittest faModelSetLayoutFullScreenTest2 begin');
        window.getTopWindow().then(wnd => {
            console.log('jsunittest faModelSetLayoutFullScreenTest2 window.getTopWindow wnd: ' + wnd);
            expect(wnd != null).assertTrue();
            wnd.setFullScreen(true, (err) => {
                console.log('jsunittest faModelSetLayoutFullScreenTest2 wnd.setFullScreen(true) callback begin');
                if (err.code != 0) {
                    console.log('jsunittest faModelSetLayoutFullScreenTest2 window.setFullScreen(true) callback fail' + JSON.stringify(err));
                    expect().assertFail();
                    done();
                }
                console.log('jsunittest faModelSetLayoutFullScreenTest2 wnd.setFullScreen(true) callback end');
                wnd.getProperties((err, data) => {
                    if (err.code != 0) {
                        console.log('jsunittest faModelSetLayoutFullScreenTest2 window.getProperties callback fail' + JSON.stringify(err));
                        expect().assertFail();
                        done();
                    }
                    expect(data.isFullScreen).assertTrue();
                    wnd.setLayoutFullScreen(false, (err) => {
                        if (err.code != 0) {
                            console.log('jsunittest faModelSetLayoutFullScreenTest2 window.setLayoutFullScreen(false) callback fail' + JSON.stringify(err));
                            expect().assertFail();
                            done();
                        }
                        console.log('jsunittest faModelSetLayoutFullScreenTest2 wnd.setLayoutFullScreen(false) callback end');
                        wnd.getProperties((err, data) => {
                            if (err.code != 0) {
                                console.log('jsunittest faModelSetLayoutFullScreenTest2 window.getProperties callback fail' + JSON.stringify(err));
                                expect().assertFail();
                                done();
                            }
                            console.log('jsunittest faModelSetLayoutFullScreenTest2 wnd.getProperties callback end');
                            expect(!data.isLayoutFullScreen).assertTrue();
                            done();
                        })
                    })
                })
            })
        }).catch((err) => {
            console.log('jsunittest faModelSetLayoutFullScreenTest2 window.getTopWindow fail : ' + JSON.stringify(err));
            expect().assertFail();
            done();
        })
    })

    /**
     * @tc.number    SUB_WINDOW_FAMODELSETLAYOUTFULLSCREEN_JSAPI_003
     * @tc.name      Test faModelSetLayoutFullScreenTest3
     * @tc.desc      Set the window to be non-full-screen and the layout to be full-screen.
     */
    it('faModelSetLayoutFullScreenTest3', 0, async function (done) {
        console.log('jsunittest faModelSetLayoutFullScreenTest3 begin');
        window.getTopWindow().then(wnd => {
            console.log('jsunittest faModelSetLayoutFullScreenTest3 window.getTopWindow wnd: ' + wnd);
            expect(wnd != null).assertTrue();
            wnd.setFullScreen(false, (err) => {
                console.log('jsunittest faModelSetLayoutFullScreenTest3 wnd.setFullScreen(false) callback begin');
                if (err.code != 0) {
                    console.log('jsunittest faModelSetLayoutFullScreenTest3 window.setFullScreen callback fail' + JSON.stringify(err));
                    expect().assertFail();
                    done();
                }
                console.log('jsunittest faModelSetLayoutFullScreenTest3 wnd.setFullScreen(false) callback end');
                wnd.getProperties((err, data) => {
                    if (err.code != 0) {
                        console.log('jsunittest faModelSetLayoutFullScreenTest3 window.getProperties callback fail' + JSON.stringify(err));
                        expect().assertFail();
                        done();
                    }
                    expect(!data.isFullScreen).assertTrue();
                    wnd.setLayoutFullScreen(true, (err) => {
                        if (err.code != 0) {
                            console.log('jsunittest faModelSetLayoutFullScreenTest3 window.setLayoutFullScreen callback fail' + JSON.stringify(err));
                            expect().assertFail();
                            done();
                        }
                        console.log('jsunittest faModelSetLayoutFullScreenTest3 wnd.setLayoutFullScreen(true) callback end');
                        wnd.getProperties((err, data) => {
                            if (err.code != 0) {
                                console.log('jsunittest faModelSetLayoutFullScreenTest3 window.getProperties callback fail' + JSON.stringify(err));
                                expect().assertFail();
                                done();
                            }
                            console.log('jsunittest faModelSetLayoutFullScreenTest3 wnd.getProperties callback end');
                            expect(data.isLayoutFullScreen).assertTrue();
                            done()
                        })
                    })
                })
            })
        }).catch((err) => {
            console.log('jsunittest faModelSetLayoutFullScreenTest3 window.getTopWindow fail : ' + JSON.stringify(err));
            expect().assertFail();
            done();
        })
    })

    /**
     * @tc.number    SUB_WINDOW_FAMODELSETLAYOUTFULLSCREEN_JSAPI_004
     * @tc.name      Test faModelSetLayoutFullScreenTest4
     * @tc.desc      Setting window and layouts to be non-fullscreen.
     */
    it('faModelSetLayoutFullScreenTest4', 0, async function (done) {
        console.log('jsunittest faModelSetLayoutFullScreenTest4 begin');
        window.getTopWindow().then(wnd => {
            console.log('jsunittest faModelSetLayoutFullScreenTest4 window.getTopWindow wnd: ' + wnd);
            expect(wnd != null).assertTrue();
            wnd.setFullScreen(false, (err) => {
                console.log('jsunittest faModelSetLayoutFullScreenTest4 wnd.setFullScreen(true) callback begin');
                if (err.code != 0) {
                    console.log('jsunittest faModelSetLayoutFullScreenTest4 window.setFullScreen callback fail' + JSON.stringify(err));
                    expect().assertFail();
                    done();
                }
                console.log('jsunittest faModelSetLayoutFullScreenTest4 wnd.setFullScreen(true) callback end');
                wnd.getProperties((err, data) => {
                    if (err.code != 0) {
                        console.log('jsunittest faModelSetLayoutFullScreenTest4 window.getProperties callback fail' + JSON.stringify(err));
                        expect().assertFail();
                        done();
                    }
                    expect(!data.isFullScreen).assertTrue();
                    wnd.setLayoutFullScreen(false, (err) => {
                        if (err.code != 0) {
                            console.log('jsunittest faModelSetLayoutFullScreenTest4 window.setLayoutFullScreen callback fail' + JSON.stringify(err));
                            expect().assertFail();
                            done();
                        }
                        console.log('jsunittest faModelSetLayoutFullScreenTest4 wnd.setLayoutFullScreen(true) callback end');
                        wnd.getProperties((err, data) => {
                            if (err.code != 0) {
                                console.log('jsunittest faModelSetLayoutFullScreenTest4 window.getProperties callback fail' + JSON.stringify(err));
                                expect().assertFail();
                                done();
                            }
                            console.log('jsunittest faModelSetLayoutFullScreenTest4 wnd.getProperties callback end');
                            expect(!data.isLayoutFullScreen).assertTrue();
                            done();
                        })
                    })
                })
            })
        }).catch((err) => {
            console.log('jsunittest faModelSetLayoutFullScreenTest4 window.getTopWindow fail : ' + JSON.stringify(err));
            expect().assertFail();
            done();
        })
    });

    /**
     * @tc.number    SUB_WINDOW_FAMODELFIND_JSAPI_001
     * @tc.name      Test faModelFindTest1
     * @tc.desc      Query main window.
     */
    it('faModelFindTest1', 0, async function (done) {
        console.log('jsunittest faModelFindTest1 begin');
        window.find('main window0', (err, data) => {
            if (err) {
                console.log('jsunittest faModelFindTest1 wnd.find fail, err : ' + JSON.stringify(err));
                expect(err.code).assertEqual(120);
                done();
            } else {
                console.log('jsunittest faModelFindTest1 wnd.find fail');
                expect().assertFail();
                done();
            }
        })
    })

    /**
     * @tc.number    SUB_WINDOW_FAMODELFIND_JSAPI_002
     * @tc.name      Test faModelFindTest2
     * @tc.desc      Query for non-existing windows
     */
    it('faModelFindTest2', 0, async function (done) {
        console.log('jsunittest findTest2 begin');
        window.find('nonexist', (err, data) => {
            if (err) {
                console.log('jsunittest faModelFindTest2 wnd.find fail, err : ' + JSON.stringify(err));
                expect(err.code).assertEqual(120);
                done();
            } else {
                console.log('jsunittest faModelFindTest2 wnd.find success');
                expect().assertFail();
                done();
            }
        })
    })

    /**
     * @tc.number    SUB_WMS_FAMODELISSHOWING_JSAPI_002
     * @tc.name      Test faModelIsShowingTest2.
     * @tc.desc      To verify the function of obtaining the display status when a window is hidden and then displayed.
     */
    it('faModelIsShowingTest2', 0, async function (done) {
        console.log('jsunittest faModelIsShowingTest2 begin');
        window.getTopWindow().then(wnd => {
            console.log('jsunittest faModelIsShowingTest2 getTopWindow wnd: ' + wnd);
            expect(wnd != null).assertTrue();
            wnd.hide((err) => {
                if (err.code != 0) {
                    console.log('jsunittest faModelIsShowingTest2 window.hide fail err ' + JSON.stringify(err));
                    done();
                }
                wnd.isShowing((err, data) => {
                    if (err.code != 0) {
                        console.log('jsunittest faModelIsShowingTest2 window.isShowing fail err ' + JSON.stringify(err));
                        done();
                    }
                    expect(!data).assertTrue();
                    wnd.show((err) => {
                        if (err.code != 0) {
                            console.log('jsunittest faModelIsShowingTest2 window.show fail err ' + JSON.stringify(err));
                            done();
                        }
                        wnd.isShowing((err, data) => {
                            if (err.code != 0) {
                                console.log('jsunittest faModelIsShowingTest2 window.isShowing fail err ' + JSON.stringify(err));
                                done();
                            }
                            expect(data).assertTrue();
                            done();
                        })
                    })
                })
            })
        }).catch((err) => {
            console.log('jsunittest faModelIsShowingTest2 window.getTopWindow fail : ' + JSON.stringify(err));
            expect().assertFail();
            done();
        })
    });

    /**
     * @tc.number    SUB_WMS_FAMODELSETCOLORSPACE_JSAPI_003
     * @tc.name      Test faModelSetColorSpaceTest3.
     * @tc.desc      To verify the setting of the wide color gamut color space.
     */
    it('faModelSetColorSpaceTest3', 0, async function (done) {
        console.log('jsunittest faModelSetColorSpaceTest3 begin');
        window.getTopWindow().then(wnd => {
            console.log('jsunittest faModelSetColorSpaceTest3 wnd: ' + wnd);
            expect(wnd != null).assertTrue();
            wnd.setColorSpace(1, (err) => {
                console.log('jsunittest faModelSetColorSpaceTest3 setColorSpace callback begin' + JSON.stringify(err));
                if (err.code != 0) {
                    console.log('jsunittest faModelSetColorSpaceTest3 setColorSpace callback fail' + JSON.stringify(err.code));
                    expect().assertFail();
                    done();
                }
                wnd.getColorSpace((err, data) => {
                    console.log('jsunittest faModelSetColorSpaceTest3 getColorSpace callback begin' + JSON.stringify(err) + 'data' + JSON.stringify(data));
                    if (err.code != 0) {
                        console.log('jsunittest faModelSetColorSpaceTest3 getColorSpace callback fail ' + JSON.stringify(err.code));
                        expect().assertFail();
                        done();
                    }
                    expect(data == 1).assertTrue();
                    wnd.isSupportWideGamut((err, data) => {
                        console.log('jsunittest faModelSetColorSpaceTest3 getColorSpace callback begin ' + JSON.stringify(err) + 'data' + JSON.stringify(data));
                        if (err.code != 0) {
                            console.log('jsunittest faModelSetColorSpaceTest3 getColorSpace callback fail' + JSON.stringify(err.code));
                            expect().assertFail();
                            done();
                        }
                        expect(data).assertTrue();
                        done();
                    })
                })
            })
        }).catch((err) => {
            console.log('jsunittest faModelSetColorSpaceTest3 getTopWindow failed,err: ' + JSON.stringify(err));
            expect().assertFail();
            done();
        })
    });

    /**
     * @tc.number    SUB_WMS_FAMODELSETCOLORSPACE_JSAPI_004
     * @tc.name      Test faModelSetColorSpaceTest4.
     * @tc.desc      To verify that the color space of invalid values is set successfully.
     */
    it('faModelSetColorSpaceTest4', 0, async function (done) {
        console.log('jsunittest faModelSetColorSpaceTest4 begin');
        window.getTopWindow().then(wnd => {
            console.log('jsunittest faModelSetColorSpaceTest4 wnd: ' + wnd);
            expect(wnd != null).assertTrue();
            wnd.setColorSpace(-5, (err) => {
                console.log('jsunittest faModelSetColorSpaceTest4 setColorSpace callback begin' + JSON.stringify(err));
                if (err.code != 0) {
                    console.log('jsunittest faModelSetColorSpaceTest4 setColorSpace callback fail' + JSON.stringify(err.code));
                    expect(err.code).assertEqual(130);
                    done();
                } else {
                    expect().assertFail();
                    done();
                }
            })
        }).catch((err) => {
            console.log('jsunittest faModelSetColorSpaceTest4 getTopWindow failed,err: ' + JSON.stringify(err));
            expect().assertFail();
            done();
        })
    });


    /**
     * @tc.number    SUB_WMS_FAMODELCREATE_JSAPI_001
     * @tc.name      Test faModelCreateTest2.
     * @tc.desc      To verify the function of creating an application subwindow.
     */
    it('faModelCreateTest2', 0, async function (done) {
        console.log('jsunittest faModelCreateTest2 begin');
        window.create('subWindow1', 0, (err, data) => {
            console.log('jsunittest faModelCreateTest2 callback ' + data);
            if (err.code != 0) {
                console.log('jsunittest faModelCreateTest2 create callback fail' + JSON.stringify(err.code));
                expect().assertFail();
                done();
            }
            expect(data != null).assertTrue();
            console.log('jsunittest faModelCreateTest2 callback create success data' + data);
            done();
        });
    });


    /**
     * @tc.number    SUB_WMS_FAMODELDESTROY_JSAPI_002
     * @tc.name      Test faModelDestroyTest2.
     * @tc.desc      Verify that a window is destroyed after being created.
     */
    it('faModelDestroyTest2', 0, async function (done) {
        console.log('jsunittest faModelDestroyTest2 begin');
        window.create('subWindow2', 0, (err, data) => {
            console.log('jsunittest faModelDestroyTest2 create callback begin' + JSON.stringify(data));
            if (err.code != 0) {
                console.log('jsunittest faModelDestroyTest2 create callback fail' + JSON.stringify(err.code));
                expect().assertFail();
                done();
            }
            expect(data != null).assertTrue();
            data.destroy((err) => {
                console.log('jsunittest faModelDestroyTest2 destroy callback begin');
                if (err.code != 0) {
                    console.log('jsunittest faModelDestroyTest2 create callback fail' + JSON.stringify(err));
                    expect().assertFail();
                    done();
                }
                window.find('subWindow2', (err, data) => {
                    console.log('jsunittest faModelDestroyTest2 find callback begin' + JSON.stringify(data));
                    if (err.code != 0) {
                        console.log('jsunittest faModelDestroyTest2 find callback fail' + JSON.stringify(err.code));
                        expect(err.code).assertEqual(120);
                        done();
                    } else {
                        console.log('jsunittest faModelDestroyTest2 find suceess,err : ' + JSON.stringify(err));
                        expect().assertFail();
                        done();
                    }

                })
            })
        })
    })


    /**
     * @tc.number    SUB_WMS_FAMODELSETSYSTEMBARENABLE_JSAPI_002
     * @tc.name      Test faModelSetSystemBarEnableTest2.
     * @tc.desc      To verify the function of setting a scenario that is visible to the system bar.
     */
    it('faModelSetSystemBarEnableTest2', 0, async function (done) {
        console.log('jsunittest faModelSetSystemBarEnableTest2 begin');
        var names = ["status", "navigation"];
        window.getTopWindow((err, data) => {
            if (err.code != 0) {
                console.log('jsunittest faModelSetSystemBarEnableTest2 getTopWindow fail: ' + JSON.stringify(err));
                expect().assertFail();
                done();
            }
            expect(data != null).assertTrue();
            data.setSystemBarEnable(names, (err) => {
                if (err.code != 0) {
                    console.log('jsunittest faModelSetSystemBarEnableTest2 getTopWindow fail' + JSON.stringify(err));
                    expect().assertFail();
                    done();
                } else {
                    console.log('jsunittest faModelSetSystemBarEnableTest2 setSystemBarEnable success');
                    expect(TRUE_FLAG).assertTrue();
                    done();
                }
            })
        })
    })


    /**
     * @tc.number    SUB_WMS_FAMODELSETSYSTEMBARPROPERTIES_JSAPI_002
     * @tc.name      Test faModelSetSystemBarPropertiesTest2.
     * @tc.desc      To verify the function of setting system bar attributes.
     */
    it('faModelSetSystemBarPropertiesTest2', 0, async function (done) {
        console.log('jsunittest faModelSetSystemBarPropertiesTest2 begin');
        var SystemBarProperties = {
            statusBarColor: '#ff00ff',
            navigationBarColor: '#00ff00',
            isStatusBarLightIcon: true,
            isNavigationBarLightIcon: false,
            statusBarContentColor: '#ffffff',
            navigationBarContentColor: '#00ffff'
        };
        window.getTopWindow((err, data) => {
            if (err.code != 0) {
                console.log('jsunittest faModelSetSystemBarPropertiesTest2 getTopWindow fail: ' + JSON.stringify(err));
                expect().assertFail();
                done();
            }
            expect(data != null).assertTrue();
            data.setSystemBarProperties(SystemBarProperties, (err) => {
                if (err.code != 0) {
                    console.log('jsunittest faModelSetSystemBarPropertiesTest2 setSystemBarProperties fail' + JSON.stringify(err));
                    expect().assertFail();
                    done();
                }
                console.log('jsunittest faModelSetSystemBarPropertiesTest2 setSystemBarProperties success');
                expect(TRUE_FLAG).assertTrue();
                done();
            })
        })
    });

    /**
     * @tc.number    SUB_WMS_FAMODELONOFF_JSAPI_004
     * @tc.name      Test faModelOnOffTest4.
     * @tc.desc      To verify the function of enabling and disabling the listening function of the display device.
     */
    it('faModelOnOffTest4', 0, async function (done) {
        console.log('jsunittest faModelOnOffTest4 begin');
        var listenerStatus; //1表示开启,其他为关闭
        var callback = (data) => {
            listenerStatus = data;
            console.log('jsunittest faModelOnOffTest4 create callback' + JSON.stringify(data));
        }
        console.log('jsunittest faModelOnOffTest4 listenerStatus :' + listenerStatus);
        console.log('jsunittest faModelOnOffTest4 typeof listenerStatus' + typeof listenerStatus);
        display.on('add', callback);
        expect(typeof (listenerStatus)).assertEqual('undefined');
        display.off('add');
        expect(typeof (listenerStatus)).assertEqual('undefined');
        done();
    })


    /**
     * @tc.number    SUB_WINDOW_FAMODELMOVETO_JSAPI_007
     * @tc.name      Test faModelmoveTest1.
     * @tc.desc      Verify the window movement scenario.
     */
    it('faModelmoveTest1', 0, function () {
        console.log('jsunittest faModelmoveTest1 begin');
        window.getTopWindow().then(wnd => {
            console.log('jsunittest faModelmoveTest1 getTopWindow wnd' + wnd);
            wnd.moveTo(200, 200, (err) => {
                if (err.code) {
                    console.log('jsunittest faModelmoveTest1 moveTo callback fail' + JSON.stringify(err.code));
                    expect().assertFail();
                    done();
                } else {
                    console.log('jsunittest faModelmoveTest1 moveTo callback success');
                    expect(TRUE_FLAG).assertTrue();
                    done();
                }
            })
        })
    });


    /**
     * @tc.number    SUB_WINDOW_FAMODELRESETSIZETEST_JSAPI_006
     * @tc.name      Test faModelResetSizeTest6.
     * @tc.desc      To verify the function of setting the window size.
     */
    it('faModelResetSizeTest6', 0, function () {
        console.log('jsunittest faModelResetSizeTest6 begin');
        window.getTopWindow().then(wnd => {
            console.log('jsunittest faModelResetSizeTest6 getTopWindow wnd: ' + wnd);
            wnd.resetSize(200, 200, (err) => {
                if (err.code) {
                    console.log('jsunittest faModelResetSizeTest6 resetSize callback fail' + JSON.stringify(err.code));
                    expect().assertFail();
                    done();
                } else {
                    console.log('jsunittest faModelResetSizeTest6 resetSize callback success');
                    expect(TRUE_FLAG).assertTrue();
                    done();
                }
            })
        })
    });

    /**
     * @tc.number    SUB_WINDOW_FAMODELSETWINDOWTYPE_JSAPI_005
     * @tc.name      Test faModelSetWindowTypeTest5.
     * @tc.desc      To verify the function of setting the window mode to application window.
     */
    it('faModelSetWindowTypeTest5', 0, function () {
        console.log('jsunittest faModelSetWindowTypeTest5 begin');
        window.create().then(wnd => {
            console.log('jsunittest faModelSetWindowTypeTest5 create wnd: ' + wnd);
            wnd.setWindowType(0, (err) => {
                if (err.code) {
                    console.log('jsunittest faModelSetWindowTypeTest5 setWindowType callback fail' + JSON.stringify(err.code));
                    expect().assertFail();
                    done();
                } else {
                    console.log('jsunittest faModelSetWindowTypeTest5 setWindowType callback success');
                    expect(TRUE_FLAG).assertTrue();
                    done();
                }
            })
        })
    });

    /**
     * @tc.number    SUB_WMS_FAMODELSETWINDOWLAYOUTMODE_JSAPI_004
     * @tc.name      Test faModelSetWindowLayoutModeTest4.
     * @tc.desc      To verify the function of setting different window modes.
     */
    it('faModelSetWindowLayoutModeTest4', 0, async function (done) {
        console.log('jsunittest faModelSetWindowLayoutModeTest4 begin');
        await display.getDefaultDisplay().then(dsp => {
            console.log('jsunittest faModelSetWindowLayoutModeTest4 getDefaultDisplay dspID :' + dsp.id);
            window.setWindowLayoutMode(0, dsp.id, (err) => {
                if (err.code) {
                    console.log('jsunittest faModelSetWindowLayoutModeTest4 setWindowLayoutMode callback fail' + JSON.stringify(err.code));
                    expect().assertFail();
                    done();
                } else {
                    console.log('jsunittest faModelSetWindowLayoutModeTest4 setWindowLayoutMode WINDOW_LAYOUT_MODE_TILE success');
                    expect(TRUE_FLAG).assertTrue();
                    done();
                }
            })
        }).catch((err) => {
            console.log('jsunittest faModelSetWindowLayoutModeTest4 getDefaultDisplay failed ,err : ' + JSON.stringify(err));
            expect().assertFail();
            done();
        })
    });

    /**
    * @tc.number     SUB_WINDOW_GETTOPWINDOW_JSAPI_001
    * @tc.name       Test getTopWindowTest.
    * @tc.desc       Verify the scene that gets the top window.
    */
    it('getTopWindowTest', 0, async function (done) {
        console.log('jsunittest getTopWindowTest begin');
        window.getTopWindow().then(wnd => {
            console.log('jsunittest getTopWindow wnd: ' + wnd);
            expect(typeof (wnd)).assertEqual('object');
            done();
        }).catch((err) => {
            console.log('jsunittest getTopWindowTest getTopWindow failed, err :' + JSON.stringify(err));
            expect().assertFail();
            done();
        })
    })

    /**
    * @tc.number     SUB_WINDOW_MOVETO_JSAPI_001
    * @tc.name       Test movetest1.
    * @tc.desc       Verify the scene where the window moves.
    */
    it('moveTest1', 0, async function (done) {
        console.log('jsunittest moveTest1 begin');
        window.getTopWindow().then(wnd => {
            console.log('jsunittest moveTest1 getTopWindow wnd: ' + wnd);
            expect(typeof (wnd)).assertEqual('object');
            wnd.moveTo(200, 200).then(() => {
                console.log('jsunittest moveTest1 wnd.moveTo success');
                expect(TRUE_FLAG).assertTrue();
                done();
            }).catch((err) => {
                console.log('jsunittest moveTest1 wnd.moveTo failed, err :' + JSON.stringify(err));
                expect().assertFail();
                done();
            })
        }).catch((err) => {
            console.log('jsunittest moveTest1 getTopWindow failed, err :' + JSON.stringify(err));
            expect().assertFail();
            done();
        })
    })

    /**
    * @tc.number     SUB_WINDOW_MOVETO_JSAPI_002
    * @tc.name       Test moveTest2.
    * @tc.desc      Verify the scene where the window moves.
    */
    it('moveTest2', 0, async function (done) {
        console.log('jsunittest moveTest2 begin');
        window.getTopWindow().then(wnd => {
            console.log('jsunittest moveTest2 getTopWindow wnd: ' + wnd);
            expect(typeof (wnd)).assertEqual('object');
            wnd.moveTo(100, 100).then(() => {
                console.log('jsunittest moveTest2 wnd.moveTo success');
                expect(TRUE_FLAG).assertTrue();
                done();
            }).catch((err) => {
                console.log('jsunittest moveTest2 wnd.moveTo failed, err :' + JSON.stringify(err));
                expect().assertFail();
                done();
            })
        }).catch((err) => {
            console.log('jsunittest moveTest2 getTopWindow failed, err :' + JSON.stringify(err));
            expect().assertFail();
            done();
        })
    })

    /**
    * @tc.number     SUB_WINDOW_MOVETO_JSAPI_003
    * @tc.name       Test moveTest3.
    * @tc.desc       Verify the scene where the window moves.
    */
    it('moveTest3', 0, async function (done) {
        console.log('jsunittest moveTest3 begin');
        window.getTopWindow().then(wnd => {
            console.log('jsunittest moveTest3 getTopWindow wnd: ' + wnd);
            expect(typeof (wnd)).assertEqual('object');
            wnd.moveTo(20000, 20000).then(() => {
                console.log('jsunittest moveTest3 wnd.moveTo(20000, 20000) success');
                expect(TRUE_FLAG).assertTrue();
                done();
            }).catch((err) => {
                console.log('jsunittest moveTest3 wnd.moveTo failed, err :' + JSON.stringify(err));
                expect().assertFail();
                done();
            })
        }).catch((err) => {
            console.log('jsunittest moveTest3 getTopWindow failed, err :' + JSON.stringify(err));
            expect().assertFail();
            done();
        })
    })

    /**
    * @tc.number     SUB_WINDOW_MOVETO_JSAPI_004
    * @tc.name       Test moveTest4.
    * @tc.desc       Verify the scene where the window moves.
    */
    it('moveTest4', 0, async function (done) {
        console.log('jsunittest moveTest4 begin');
        window.getTopWindow().then(wnd => {
            console.log('jsunittest moveTest4 getTopWindow wnd: ' + wnd);
            expect(typeof (wnd)).assertEqual('object');
            wnd.moveTo(-200, -200).then(() => {
                console.log('jsunittest moveTest4 wnd.moveTo success');
                expect(TRUE_FLAG).assertTrue();
                done();
            }).catch((err) => {
                console.log('jsunittest moveTest4 wnd.moveTo failed, err :' + JSON.stringify(err));
                expect().assertFail();
                done();
            })
        }).catch((err) => {
            console.log('jsunittest moveTest4 getTopWindow failed, err :' + JSON.stringify(err));
            expect().assertFail();
            done();
        })
    })

    /**
    * @tc.number     SUB_WINDOW_MOVETO_JSAPI_005
    * @tc.name       Test moveTest5.
    * @tc.desc       Verify the scene where the window moves.
    */
    it('moveTest5', 0, async function (done) {
        console.log('jsunittest movetest5 begin');
        window.getTopWindow().then(wnd => {
            console.log('jsunittest movetest5 getTopWindow wnd: ' + wnd);
            expect(typeof (wnd)).assertEqual('object');
            for (var i = 1; i <= 5; i++) {
                wnd.moveTo(100, 100).then(() => {
                    console.log('jsunittest movetest5 wnd.movetest5(100, 100) success, count:"%d\n"', i);
                    expect(TRUE_FLAG).assertTrue();
                }).catch((err) => {
                    console.log('jsunittest moveTest4 wnd.moveTo failed, err :' + JSON.stringify(err));
                    expect().assertFail();
                    done();
                })
            }
            console.log('jsunittest movetest5 end');
            done();
        }).catch((err) => {
            console.log('jsunittest moveTest4 getTopWindow failed, err :' + JSON.stringify(err));
            expect().assertFail();
            done();
        })
    })

    /**
    * @tc.number     SUB_WINDOW_RESETSIZE_JSAPI_001
    * @tc.name       Test resetSizeTest1.
    * @tc.desc       Verify the scene where the window size is reset.
    */
    it('resetSizeTest1', 0, async function (done) {
        console.log('jsunittest resetSizeTest1 begin');
        window.getTopWindow().then(wnd => {
            console.log('jsunittest resetSizeTest1 getTopWindow wnd: ' + wnd);
            expect(typeof (wnd)).assertEqual('object');
            wnd.resetSize(200, 600).then(() => {
                console.log('jsunittest resetSizeTest1 wnd.resetSize(200, 600) success');
                expect(TRUE_FLAG).assertTrue();
                done();
            }).catch((err) => {
                console.log('jsunittest resetSizeTest1 wnd.resetSize failed, err :' + JSON.stringify(err));
                expect().assertFail();
                done();
            })
        }).catch((err) => {
            console.log('jsunittest resetSizeTest1 getTopWindow failed, err :' + JSON.stringify(err));
            expect().assertFail();
            done();
        })
    })

    /**
    * @tc.number     SUB_WINDOW_RESETSIZE_JSAPI_002
    * @tc.name       Test resetSizeTest2.
    * @tc.desc       Verify the scene where the window size is reset.
    */
    it('resetSizeTest2', 0, async function (done) {
        console.log('jsunittest resetSizeTest2 begin');
        window.getTopWindow().then(wnd => {
            console.log('jsunittest resetSizeTest2 getTopWindow wnd: ' + wnd);
            expect(typeof (wnd)).assertEqual('object');
            wnd.resetSize(20000, 20000).then(() => {
                console.log('jsunittest resetSizeTest2 wnd.resetSize(20000, 20000) success');
                expect(TRUE_FLAG).assertTrue();
                done();
            }).catch((err) => {
                console.log('jsunittest resetSizeTest2 wnd.resetSize failed, err :' + JSON.stringify(err));
                expect().assertFail();
                done();
            })
        }).catch((err) => {
            console.log('jsunittest resetSizeTest2 getTopWindow failed, err :' + JSON.stringify(err));
            expect().assertFail();
            done();
        })
    })

    /**
    * @tc.number     SUB_WINDOW_RESETSIZE_JSAPI_003
    * @tc.name       Test resetSizeTest3.
    * @tc.desc       Verify the scene where the window size is reset.
    */
    it('resetSizeTest3', 0, async function (done) {
        console.log('jsunittest resetSizeTest3 begin');
        window.getTopWindow().then(wnd => {
            console.log('jsunittest resetSizeTest3 getTopWindow wnd: ' + wnd);
            expect(typeof (wnd)).assertEqual('object');
            wnd.resetSize(0, 0).then(() => {
                console.log('jsunittest resetSizeTest3 wnd.resetSize(0, 0) success');
                expect(TRUE_FLAG).assertTrue();
                done();
            }).catch((err) => {
                console.log('jsunittest resetSizeTest3 wnd.resetSize failed, err :' + JSON.stringify(err));
                expect().assertFail();
                done();
            })
        }).catch((err) => {
            console.log('jsunittest resetSizeTest3 getTopWindow failed, err :' + JSON.stringify(err));
            expect().assertFail();
            done();
        })
    })

    /**
    * @tc.number     SUB_WINDOW_RESETSIZE_JSAPI_004
    * @tc.name       Test resetSizeTest4.
    * @tc.desc       Verify the scene where the window size is reset.
    */
    it('resetSizeTest4', 0, async function (done) {
        console.log('jsunittest resetSizeTest4 begin');
        window.getTopWindow().then(wnd => {
            console.log('jsunittest resetSizeTest4 getTopWindow wnd: ' + wnd);
            expect(typeof (wnd)).assertEqual('object');
            wnd.resetSize(-1, -1).then(() => {
                console.log('jsunittest resetSizeTest4 wnd.resetSize(-1, -1) success');
                expect(TRUE_FLAG).assertTrue();
                done();
            }).catch((err) => {
                console.log('jsunittest resetSizeTest4 wnd.resetSize failed, err :' + JSON.stringify(err));
                expect().assertFail();
                done();
            })
        }).catch((err) => {
            console.log('jsunittest resetSizeTest4 getTopWindow failed, err :' + JSON.stringify(err));
            expect().assertFail();
            done();
        })
    })

    /**
    * @tc.number     SUB_WINDOW_RESETSIZE_JSAPI_005
    * @tc.name       Test resetSizeTest5.
    * @tc.desc       Verify the scene where the window size is reset.
    */
    it('resetSizeTest5', 0, async function (done) {
        console.log('jsunittest resetSizeTest5 begin');
        window.getTopWindow().then(wnd => {
            console.log('jsunittest resetSizeTest5 getTopWindow wnd: ' + wnd);
            expect(typeof (wnd)).assertEqual('object');
            for (var i = 1; i <= 5; i++) {
                wnd.resetSize(100, 100).then(() => {
                    console.log('jsunittest resetSizeTest5 wnd.resetSize(100, 100) success, count:"%d\n"', i);
                    expect(TRUE_FLAG).assertTrue();
                }).catch((err) => {
                    console.log('jsunittest resetSizeTest4 wnd.resetSize failed, err :' + JSON.stringify(err));
                    expect().assertFail();
                })
            }
            console.log('jsunittest resetSizeTest5 end');
            done();
        }).catch((err) => {
            console.log('jsunittest resetSizeTest4 getTopWindow failed, err :' + JSON.stringify(err));
            expect().assertFail();
            done();
        })
    })

    /**
    * @tc.number     SUB_WINDOW_SETWINDOWTYPE_JSAPI_001
    * @tc.name       Test setWindowTypeTest1.
    * @tc.desc       Verify the scene that sets the window type.
    */
    it('setWindowTypeTest1', 0, async function (done) {
        console.log('jsunittest setWindowTypeTest1 begin');
        window.create('create1', 0).then(wnd => {
            console.log('jsunittest setWindowTypeTest1 create wnd' + wnd);
            expect(typeof (wnd)).assertEqual('object');
            wnd.setWindowType(0).then(() => {
                console.log('jsunittest setWindowTypeTest1 wnd.setWindowType(0) success');
                expect(TRUE_FLAG).assertTrue();
                done();
            }).catch((err) => {
                console.log('jsunittest setWindowTypeTest1 setWindowType failed, err :' + JSON.stringify(err));
                expect().assertFail();
                done();
            })
        }).catch((err) => {
            console.log('jsunittest setWindowTypeTest1 create failed, err :' + JSON.stringify(err));
            expect().assertFail();
            done();
        })
    })

    /**
    * @tc.number     SUB_WINDOW_SETWINDOWTYPE_JSAPI_002
    * @tc.name       Test setWindowTypeTest2.
    * @tc.desc       Verify the scene that sets the window type.
    */
    it('setWindowTypeTest2', 0, async function (done) {
        console.log('jsunittest setWindowTypeTest2 begin')
        window.create('create2', 0).then(wnd => {
            console.log('jsunittest setWindowTypeTest2 create wnd' + wnd);
            expect(typeof (wnd)).assertEqual('object');
            wnd.setWindowType(0).then(() => {
                console.log('jsunittest setWindowTypeTest2 wnd.setWindowType(0) success');
                expect(TRUE_FLAG).assertTrue();
                wnd.moveTo(200, 200).then(() => {
                    console.log('jsunittest setWindowTypeTest2 wnd.moveTo success');
                    expect(TRUE_FLAG).assertTrue();
                    done();
                }).catch((err) => {
                    console.log('jsunittest setWindowTypeTest2 moveTo failed, err :' + JSON.stringify(err));
                    expect().assertFail();
                    done();
                })
            }).catch((err) => {
                console.log('jsunittest setWindowTypeTest2 setWindowType failed, err :' + JSON.stringify(err));
                expect().assertFail();
                done();
            })
        }).catch((err) => {
            console.log('jsunittest setWindowTypeTest2 create failed, err :' + JSON.stringify(err));
            expect().assertFail();
            done();
        })
    })
    /**
    * @tc.number     SUB_WINDOW_SETWINDOWTYPE_JSAPI_003
    * @tc.name       Test setWindowTypeTest3.
    * @tc.desc       Verify the scene that sets the window type.
    */
    it('setWindowTypeTest3', 0, async function (done) {
        console.log('jsunittest setWindowTypeTest3 begin')
        window.create('create3', 0).then(wnd => {
            console.log('jsunittest setWindowTypeTest3 create wnd' + wnd);
            expect(typeof (wnd)).assertEqual('object');
            wnd.setWindowType(0).then(() => {
                console.log('jsunittest setWindowTypeTest3 wnd.setWindowType(0) success');
                expect(TRUE_FLAG).assertTrue();
                wnd.resetSize(200, 400).then(() => {
                    console.log('jsunittest setWindowTypeTest3 wnd.resetSize success');
                    expect(TRUE_FLAG).assertTrue();
                    done();
                }).catch((err) => {
                    console.log('jsunittest setWindowTypeTest3 resetSize failed, err :' + JSON.stringify(err));
                    expect().assertFail();
                    done();
                })
            }).catch((err) => {
                console.log('jsunittest setWindowTypeTest3 setWindowType failed, err :' + JSON.stringify(err));
                expect().assertFail();
                done();
            })
        }).catch((err) => {
            console.log('jsunittest setWindowTypeTest3 create failed, err :' + JSON.stringify(err));
            expect().assertFail();
            done();
        })
    })

    /**
    * @tc.number     SUB_WINDOW_SETWINDOWTYPE_JSAPI_004
    * @tc.name       Test setWindowTypeTest4.
    * @tc.desc       Verify the scene that sets the window type.
    */
    it('setWindowTypeTest4', 0, async function (done) {
        console.log('jsunittest setWindowTypeTest4 begin');
        window.create('create4', 0).then(wnd => {
            console.log('jsunittest setWindowTypeTest4 create wnd' + wnd);
            expect(typeof (wnd)).assertEqual('object');
            wnd.setWindowType(0).then(() => {
                console.log('jsunittest setWindowTypeTest4 wnd.setWindowType(0) success');
                expect(TRUE_FLAG).assertTrue();
                wnd.moveTo(200, 200).then(() => {
                    console.log('jsunittest setWindowTypeTest2 wnd.moveTo success');
                    expect(TRUE_FLAG).assertTrue();
                    done();
                }).catch((err) => {
                    console.log('jsunittest setWindowTypeTest4 moveTo failed, err :' + JSON.stringify(err));
                    expect().assertFail();
                    wnd.resetSize(200, 400).then(() => {
                        console.log('jsunittest setWindowTypeTest4 wnd.resetSize success');
                        expect(TRUE_FLAG).assertTrue();
                        done();
                    }).catch((err) => {
                        console.log('jsunittest setWindowTypeTest4 resetSize failed, err :' + JSON.stringify(err));
                        expect().assertFail();
                        done();
                    })
                })
            }).catch((err) => {
                console.log('jsunittest setWindowTypeTest4 setWindowType failed, err :' + JSON.stringify(err));
                expect().assertFail();
                done();
            })
        }).catch((err) => {
            console.log('jsunittest setWindowTypeTest4 create failed, err :' + JSON.stringify(err));
            expect().assertFail();
            done();
        })
    })

    /**
	* @tc.number    SUB_WINDOW_MOVETO_JSAPI_007
	* @tc.name      Test moveTestNegative.
	* @tc.desc      Verify the scene that sets the window type.
	*/
    it('moveTestNegative', 0, async function (done) {
        console.log('jsunittest moveTestNegative begin');
        window.getTopWindow().then(wnd => {
            console.log('jsunittest moveTestNegative getTopWindow wnd: ' + wnd);
            expect(typeof (wnd)).assertEqual('object');
            wnd.moveTo(-200, -200).then(() => {
                console.log('moveTo(-200,-200) success');
                expect(TRUE_FLAG).assertTrue();
				done();
            }).catch((err) => {
                console.log('jsunittest moveTestNegative moveTo failed, err :' + JSON.stringify(err));
                expect().assertFail();
                done();
            })
        }).catch((err) => {
            console.log('jsunittest moveTestNegative getTopWindow failed, err :' + JSON.stringify(err));
            expect().assertFail();
            done();
        })
    })

    /**
	* @tc.number    SUB_WINDOW_RESETSIZE_JSAPI_006
	* @tc.name      Test resetSizeTestLoop.
	* @tc.desc      Verify the scene that sets the window type.
	*/
    it('resetSizeLoop', 0, async function (done) {
        var width = 100;
        var height = 100;
        console.log('jsunittest resetSizeLoop begin');
        window.getTopWindow().then(wnd => {
            console.log('jsunittest resetSizeLoop getTopWindow wnd: ' + wnd);
            expect(typeof (wnd)).assertEqual('object');
            for (let i = 1; i <= 5; i++) {
                width = width * i;
                height = height * i;
                wnd.resetSize(width, height).then(() => {
                    console.log('jsunittest  resetSizeTestLoop success');
                    expect(TRUE_FLAG).assertTrue();
                }).catch((err) => {
                    console.log('jsunittest resetSizeLoop resetSize failed, err :' + JSON.stringify(err));
                    expect().assertFail();
                    done();
                })
            }
            console.log('jsunittest resetSizeLoop end');
            done();
        }).catch((err) => {
            console.log('jsunittest resetSizeLoop getTopWindow failed, err :' + JSON.stringify(err));
            expect().assertFail();
            done();
        })
    })

    /**
	* @tc.number    SUB_WINDOW_SETWINDOWTYPE_JSAPI_008
	* @tc.name      Test setWindowTypeTest5.
	* @tc.desc      Verify the scene that sets the window type.
	*/
    it('setWindowTypeTest5', 0, async function (done) {
        console.log('jsunittest setWindowTypeTest5 begin')
        window.create('create5', 0).then(wnd => {
            console.log('jsunittest setWindowTypeTest5 getTopWindow wnd: ' + wnd)
            expect(typeof (wnd)).assertEqual('object');
            wnd.setWindowType(0).then(() => {
                console.log('jsunittest setWindowTypeTest5 wnd.setWindowType success')
                expect(TRUE_FLAG).assertTrue();
                wnd.moveTo(200, 200).then(() => {
                    console.log('jsunittest  setWindowTypeTest5 wnd.moveTo success')
                    expect(TRUE_FLAG).assertTrue();
                    wnd.resetSize(200, 200).then(() => {
                        console.log('jsunittest setWindowTypeTest5 wnd.resetSize success')
                        expect(TRUE_FLAG).assertTrue();
                        done();
                    }).catch((err) => {
                        console.log('jsunittest setWindowTypeTest5 resetSize failed, err :' + JSON.stringify(err));
                        expect().assertFail();
                        done();
                    })
                }).catch((err) => {
                    console.log('jsunittest setWindowTypeTest5 moveTo failed, err :' + JSON.stringify(err));
                    expect().assertFail();
                    done();
                })
            }).catch((err) => {
                console.log('jsunittest setWindowTypeTest5 setWindowType failed, err :' + JSON.stringify(err));
                expect().assertFail();
                done();
            })
        }).catch((err) => {
            console.log('jsunittest setWindowTypeTest5 create failed, err :' + JSON.stringify(err));
            expect().assertFail();
            done();
        })
    })

    /**
	* @tc.number    SUB_WINDOW_SETWINDOWTYPE_JSAPI_009
	* @tc.name      Test setWindowTypeTest6.
	* @tc.desc      Verify the scene that sets the window type.
	*/
    it('setWindowTypeTest6', 0, async function (done) {
        console.log('jsunittest setWindowTypeTest6 begin')
        window.create('create6', 0).then(wnd => {
            console.log('jsunittest setWindowTypeTest6 getTopWindow wnd: ' + wnd)
            expect(typeof (wnd)).assertEqual('object');
            wnd.setWindowType(0).then(() => {
                console.log('jsunittest setWindowTypeTest6 wnd.setWindowType success')
                expect(TRUE_FLAG).assertTrue();
                wnd.resetSize(200, 200).then(() => {
                    console.log('jsunittest  setWindowTypeTest6 wnd.resetSize success')
                    expect(TRUE_FLAG).assertTrue();
                    wnd.moveTo(200, 200).then(() => {
                        console.log('jsunittest setWindowTypeTest6 wnd.moveTo success')
                        expect(TRUE_FLAG).assertTrue();
                        done();
                    }).catch((err) => {
                        console.log('jsunittest setWindowTypeTest6 moveTo failed, err :' + JSON.stringify(err));
                        expect().assertFail();
                        done();
                    })
                }).catch((err) => {
                    console.log('jsunittest setWindowTypeTest6 resetSize failed, err :' + JSON.stringify(err));
                    expect().assertFail();
                    done();
                })
            }).catch((err) => {
                console.log('jsunittest setWindowTypeTest6 setWindowType failed, err :' + JSON.stringify(err));
                expect().assertFail();
                done();
            })
        }).catch((err) => {
            console.log('jsunittest setWindowTypeTest6 create failed, err :' + JSON.stringify(err));
            expect().assertFail();
            done();
        })
    })

    /**
	* @tc.number    SUB_WINDOW_MOVETO_JSAPI_006
	* @tc.name      Test moveTest6.
	* @tc.desc      Verify the scene where the window moves.
	*/
    it('moveTest6', 0, async function (done) {
        console.log('jsunittest moveTest6 begin')
        window.getTopWindow().then(wnd => {
            console.log('jsunittest moveTest6 getTopWindow wnd: ' + wnd);
            expect(typeof (wnd)).assertEqual('object');
            wnd.moveTo(-200, 200).then(() => {
                console.log('jsunittest moveTest6 wnd.moveTo success')
                expect(TRUE_FLAG).assertTrue();
                wnd.moveTo(200, -300).then(() => {
                    console.log('jsunittest moveTest6 wnd.moveTo success');
                    expect(TRUE_FLAG).assertTrue();
                    done();
                }).catch((err) => {
                    console.log('jsunittest setWindowTypeTest6 create failed, err :' + JSON.stringify(err));
                    expect().assertFail();
                    done();
                })
            }).catch((err) => {
                console.log('jsunittest setWindowTypeTest6 create failed, err :' + JSON.stringify(err));
                expect().assertFail();
                done();
            })
        }).catch((err) => {
            console.log('jsunittest setWindowTypeTest6 create failed, err :' + JSON.stringify(err));
            expect().assertFail();
            done();
        })
    })

    /**
     * @tc.number      SUB_WMS_FAMODELSETCOLORSPACE_JSAPI_001
     * @tc.name        Test  faModelSetColorSpaceTest1.
     * @tc.desc        To verify the setting of the wide color gamut color space.
     */
    it('faModelSetColorSpaceTest1', 0, async function (done) {
        console.log('jsunittest faModelSetColorSpaceTest1 begin');
        window.getTopWindow().then(wnd => {
            console.log('jsunittest faModelSetColorSpaceTest1 wnd: ' + wnd);
            expect(wnd != null).assertTrue();
            wnd.setColorSpace(1).then(() => {
                console.log('jsunittest faModelSetColorSpaceTest1 setColorSpace WIDE_GAMUT');
                wnd.getColorSpace().then(res => {
                    expect(res == 1).assertTrue();
                    console.log('jsunittest faModelSetColorSpaceTest1 setColorSpace WIDE_GAMUT success');
                    wnd.isSupportWideGamut().then(data => {
                        expect(data).assertTrue();
                        console.log('ColorSpace WIDE_GAMUT SupportWideGamut');
                        done();
                    }).catch((err) => {
                        console.log('jsunittest faModelSetColorSpaceTest1 wnd.isSupportWideGamut failed, err :' + JSON.stringify(err));
                        expect().assertFail();
                        done();
                    })
                }).catch((err) => {
                    console.log('jsunittest faModelSetColorSpaceTest1 wnd.getColorSpace failed, err :' + JSON.stringify(err));
                    expect().assertFail();
                    done();
                })
            }).catch((err) => {
                console.log('jsunittest faModelSetColorSpaceTest1 wnd.setColorSpace failed, err :' + JSON.stringify(err));
                expect().assertFail();
                done();
            })
        }).catch((err) => {
            console.log('jsunittest faModelSetColorSpaceTest1 getTopWindow failed, err :' + JSON.stringify(err));
            expect().assertFail();
            done();
        })
    })

    /**
     * @tc.number      SUB_WMS_FAMODELSETCOLORSPACE_JSAPI_002
     * @tc.name        Test  faModelSetColorSpaceTest2.
     * @tc.desc        To verify that the color space of invaild values is set successfully.
     */
    it('faModelSetColorSpaceTest2', 0, async function (done) {
        console.log('jsunittest faModelSetColorSpaceTest2 begin');
        window.getTopWindow().then(wnd => {
            console.log('jsunittest faModelSetColorSpaceTest2 wnd: ' + wnd);
            expect(wnd != null).assertTrue();
            wnd.setColorSpace(-5).then(() => {
                console.log('jsunittest faModelSetColorSpaceTest2 setColorSpace -5');
                expect().assertFail();
                done();
            }).catch((err) => {
                console.log('jsunittest faModelSetColorSpaceTest2 wnd.setColorSpace failed, err :' + JSON.stringify(err));
                expect(err.code).assertEqual(130);
                done();
            })
        }).catch((err) => {
            console.log('jsunittest faModelSetColorSpaceTest2 wnd.getTopWindow failed, err :' + JSON.stringify(err));
            expect().assertFail();
            done();
        })
    })

    /**
     * @tc.number      SUB_WMS_FAMODELSETWINDOWLAYOUTMODE_JSAPI_001
     * @tc.name        Test  faModelSetWindowLayoutModeTest1.
     * @tc.desc        To verify the function of setting different window modes.
     */
    it('faModelSetWindowLayoutModeTest1', 0, async function (done) {
        console.log('jsunittest faModelSetWindowLayoutModeTest1 begin');
        await display.getDefaultDisplay().then(dsp => {
            console.log('jsunittest faModelSetWindowLayoutModeTest1 getDefaultDisplay dspID :' + dsp.id);
            window.setWindowLayoutMode(0, dsp.id).then(() => {
                console.log('jsunittest faModelSetWindowLayoutModeTest1 setWindowLayoutMode WINDOW_LAYOUT_MODE_CASCADE success');
                expect(TRUE_FLAG).assertTrue();
                window.setWindowLayoutMode(1, dsp.id).then(() => {
                    console.log('jsunittest faModelSetWindowLayoutModeTest1 setWindowLayoutMode WINDOW_LAYOUT_MODE_TILE success');
                    expect(TRUE_FLAG).assertTrue();
                    done();
                }).catch((err) => {
                    console.log('jsunittest faModelSetWindowLayoutModeTest1 setWindowLayoutMode failed, err :' + JSON.stringify(err));
                    expect().assertFail();
                    done();
                })
            }).catch((err) => {
                console.log('jsunittest faModelSetWindowLayoutModeTest1 setWindowLayoutMode failed, err :' + JSON.stringify(err));
                expect().assertFail();
                done();
            })
        }).catch((err) => {
            console.log('jsunittest faModelSetWindowLayoutModeTest1 getDefaultDisplay failed, err :' + JSON.stringify(err));
            expect().assertFail();
            done();
        })
    })

    /**
     * @tc.number      SUB_WMS_FAMODELSETWINDOWLAYOUTMODE_JSAPI_002
     * @tc.name        Test  faModelSetWindowLayoutModeTest2.
     * @tc.desc        To verify the function of setting the invalied window mode.
     */
    it('faModelSetWindowLayoutModeTest2', 0, async function (done) {
        console.log('jsunittest faModelSetWindowLayoutModeTest2 begin');
        display.getDefaultDisplay().then(dsp => {
            console.log('jsunittest faModelSetWindowLayoutModeTest2 getDefaultDisplay dspID :' + dsp.id);
            window.setWindowLayoutMode(-5, dsp.id).then(() => {
                console.log('jsunittest faModelSetWindowLayoutModeTest2 setWindowLayoutMode -5 success');
                expect().assertFail();
                done();
            }).catch((err) => {
                console.log('jsunittest faModelSetWindowLayoutModeTest2 setWindowLayoutMode failed, err :' + JSON.stringify(err));
                expect(err.code).assertEqual(130);
                done();
            })
        }).catch((err) => {
            console.log('jsunittest faModelSetWindowLayoutModeTest2 getDefaultDisplay failed, err :' + JSON.stringify(err));
            expect().assertFail();
            done();
        })
    })

    /**
     * @tc.number      SUB_WMS_FAMODELSETWINDOWLAYOUTMODE_JSAPI_003
     * @tc.name        Test  faModelSetWindowLayoutModeTest3.
     * @tc.desc        To verify the scenario where the screen ID is invaild when the window mode is set.
     */
    it('faModelSetWindowLayoutModeTest3', 0, async function (done) {
        console.log('jsunittest faModelSetWindowLayoutModeTest3 begin');
        window.setWindowLayoutMode(-5, -100).then(() => {
            console.log('jsunittest faModelSetWindowLayoutModeTest3 setWindowLayoutMode (-5,-100) success');
            expect().assertFail();
            done();
        }).catch((err) => {
            console.log('jsunittest faModelSetWindowLayoutModeTest3 setWindowLayoutMode failed, err :' + JSON.stringify(err));
            expect(err.code).assertEqual(120);
            done();
        })
    })

    /**
     * @tc.number      SUB_WMS_FAMODELSETSCREENACTIVEMODE_JSAPI_001
     * @tc.name        Test  faModelSetScreenActiveModeTest1.
     * @tc.desc        To test the function of setting screen parameters.
     */
    it('faModelSetScreenActiveModeTest1', 0, async function (done) {
        console.log('jsunittest setScreenActiveModeTest1 begin');
        screen.getAllScreen().then(scr => {
            console.log('jsunittest faModelSetScreenActiveModeTest1 getAllScreen scr' + scr);
            expect(scr[0] != null).assertTrue();
            let screen1 = scr[0];
            screen1.setScreenActiveMode(0).then(res1 => {
                console.log('jsunittest faModelSetScreenActiveModeTest1 setScreenActiveMode 0 res1 :' + res1);
                expect(res1).assertTrue();
                done();
            }).catch((err) => {
                console.log('jsunittest faModelSetScreenActiveModeTest1 setScreenActiveMode 0 failed, err :' + JSON.stringify(err));
                expect().assertFail();
                done();
            })
        }).catch((err) => {
            console.log('jsunittest faModelSetScreenActiveModeTest1 getAllScreen failed, err :' + JSON.stringify(err));
            expect().assertFail();
            done();
        })
    })

    /**
     * @tc.number      SUB_WMS_FAMODELSETSCREENACTIVEMODE_JSAPI_002
     * @tc.name        Test  faModelSetScreenActiveModeTest2.
     * @tc.desc        To set the function of setting screen parameters to abnormal values.
     */
    it('faModelSetScreenActiveModeTest2', 0, async function (done) {
        console.log('jsunittest faModelSetScreenActiveModeTest2 begin');
        screen.getAllScreen().then(scr => {
            console.log('jsunittest faModelSetScreenActiveModeTest2 getAllScreen scr' + scr);
            expect(scr[0] != null).assertTrue();
            let screen1 = scr[0];
            screen1.setScreenActiveMode(-5).then(res => {
                console.log('jsunittest faModelSetScreenActiveModeTest2 setScreenActiveMode -5 res :' + res);
                expect(!!res).assertFalse();
                done();
            }).catch((err) => {
                console.log('jsunittest faModelSetScreenActiveModeTest2 setScreenActiveMode -5 failed, err :' + JSON.stringify(err));
                expect(err.code).assertEqual(0);
                done();
            })
        })
    })

    /**
     * @tc.number      SUB_WMS_FAMODELISSHOWING_JSAPI_001
     * @tc.name        Test  faModelIsShowingTest1.
     * @tc.desc        To verify the function of obtaining the display status when a window is hidden and then displayed.
     */
    it('faModelIsShowingTest1', 0, async function (done) {
        console.log('jsunittest faModelIsShowingTest1 begin');
        window.getTopWindow().then(wnd => {
            console.log('jsunittest faModelIsShowingTest1 getTopWindow wnd: ' + wnd)
            expect(wnd != null).assertTrue();
            wnd.hide().then(() => {
                console.log('jsunittest faModelIsShowingTest1 wnd.hide success')
                wnd.isShowing().then(data => {
                    console.log('jsunittest faModelIsShowingTest1 wnd.isShowing data: ' + data)
                    expect(!data).assertTrue();
                    wnd.show().then(() => {
                        console.log('jsunittest faModelIsShowingTest1 wnd.show success')
                        wnd.isShowing().then(res => {
                            console.log('jsunittest faModelIsShowingTest1 wnd.isShowing res: ' + res)
                            expect(res).assertTrue();
                            done();
                        }).catch((err) => {
                            console.log('jsunittest faModelIsShowingTest1 wnd.isShowing failed, err :' + JSON.stringify(err));
                            expect().assertFail();
                            done();
                        })
                    }).catch((err) => {
                        console.log('jsunittest faModelIsShowingTest1 wnd.show failed, err :' + JSON.stringify(err));
                        expect().assertFail();
                        done();
                    })
                }).catch((err) => {
                    console.log('jsunittest faModelIsShowingTest1 wnd.isShowing failed, err :' + JSON.stringify(err));
                    expect().assertFail();
                    done();
                })
            }).catch((err) => {
                console.log('jsunittest faModelIsShowingTest1 wnd.hide failed, err :' + JSON.stringify(err));
                expect().assertFail();
                done();
            })
        }).catch((err) => {
            console.log('jsunittest faModelIsShowingTest1 getTopWindow failed, err :' + JSON.stringify(err));
            expect().assertFail();
            done();
        })
    })


    /**
     * @tc.number		SUB_WMS_FAMODELCREATE_JSAPI_001
     * @tc.name			Test faModelGetAllDisplayTest1.
     * @tc.desc			To verify the function of creating an application subwindow.
     */
    it('faModelCreateTest1', 0, async function (done) {
        console.log('jsunittest faModelCreateTest1 begin')
        window.create('subWindow', 0).then(wnd => {
            expect(wnd != null).assertTrue();
            console.log('jsunittest faModelCreateTest1 create success wnd' + wnd);
            done();
        }).catch((err) => {
            console.log('jsunittest faModelCreateTest1 create failed, err :' + JSON.stringify(err));
            expect().assertFail();
            done();
        })
    })

    /**
     * @tc.number		SUB_WMS_FAMODELDESTROY_JSAPI_001
     * @tc.name			Test faModelDestroyTest1.
     * @tc.desc			Verify that a window is destroyed after being created.
     */
    it('faModelDestroyTest1', 0, async function (done) {
        console.log('jsunittest faModelDestroyTest1 begin')
        window.create('subWindow2', 0).then(wnd => {
            expect(wnd != null).assertTrue();
            console.log('jsunittest faModelDestroyTest1 create success wnd' + wnd);
            wnd.destroy().then(() => {
                console.log('jsunittest faModelDestroyTest1 destroy success ');
                window.find('subWindow2').then((data) => {
                    console.log('jsunittest faModelDestroyTest1 window.find success, window :' + JSON.stringify(data));
                    expect().assertFail();
                    done();
                }).catch((err) => {
                    console.log('jsunittest faModelDestroyTest1 find failed, err :' + JSON.stringify(err));
                    expect(err.code).assertEqual(120);
                    done();
                })
            }).catch((err) => {
                console.log('jsunittest faModelCreateTest1 destroy failed, err :' + JSON.stringify(err));
                expect().assertFail();
                done();
            })
        }).catch((err) => {
            console.log('jsunittest faModelCreateTest1 create failed, err :' + JSON.stringify(err));
            expect().assertFail();
            done();
        })
    })

    /**
     * @tc.number		SUB_WMS_FAMODELSETSYSTEMBARENABLE_JSAPI_001
     * @tc.name			Test faModelSetSystemBarEnableTest1.
     * @tc.desc			To verify the function of setting a scenario that is visible to the system bar.
     */
    it('faModelSetSystemBarEnableTest1', 0, async function (done) {
        console.log('jsunittest faModelSetSystemBarEnableTest1 begin')
        var names = ["status", "navigation"];
        window.getTopWindow().then(wnd => {
            expect(wnd != null).assertTrue();
            wnd.setLayoutFullScreen(true).then(() => {
                console.log('jsunittest faModelSetSystemBarEnableTest1 setLayoutFullScreen(true) success ');
                wnd.setSystemBarEnable(names).then(() => {
                    console.log('jsunittest faModelSetSystemBarEnableTest1 setSystemBarEnable success');
                    expect(TRUE_FLAG).assertTrue();
                    done();
                }).catch((err) => {
                    console.log('jsunittest faModelSetSystemBarEnableTest1 setSystemBarEnable failed, err :' + JSON.stringify(err));
                    expect().assertFail();
                    done();
                })
            }).catch((err) => {
                console.log('jsunittest faModelSetSystemBarEnableTest1 setLayoutFullScreen failed, err :' + JSON.stringify(err));
                expect().assertFail();
                done();
            })

        }).catch((err) => {
            console.log('jsunittest faModelSetSystemBarEnableTest1 getTopWindow failed, err :' + JSON.stringify(err));
            expect().assertFail();
            done();
        })
    })

    /**
     * @tc.number		SUB_WMS_FAMODELSETSYSTEMBARPROPERTIES_JSAPI_001
     * @tc.name			Test faModelSetSystemBarPropertiesTest1.
     * @tc.desc			To verify the function of setting system bar attributes.
     */
    it('faModelSetSystemBarPropertiesTest1', 0, async function (done) {
        console.log('jsunittest faModelSetSystemBarPropertiesTest1 begin')
        var SystemBarProperties = {
            statusBarColor: '#ff00ff',
            navigationBarColor: '#00ff00',
            isStatusBarLightIcon: true,
            isNavigationBarLightIcon: false,
            statusBarContentColor: '#ffffff',
            navigationBarContentColor: '#00ffff'
        };
        window.getTopWindow().then(wnd => {
            expect(wnd != null).assertTrue();
            wnd.setSystemBarProperties(SystemBarProperties).then(() => {
                console.log('jsunittest faModelSetSystemBarPropertiesTest1 setSystemBarProperties success ')
                expect(TRUE_FLAG).assertTrue();
                done();
            }).catch((err) => {
                console.log('jsunittest faModelSetSystemBarPropertiesTest1 setSystemBarProperties failed, err :' + JSON.stringify(err));
                expect().assertFail();
                done();
            })
        }).catch((err) => {
            console.log('jsunittest faModelSetSystemBarPropertiesTest1 getTopWindow failed, err :' + JSON.stringify(err));
            expect().assertFail();
            done();
        })
    })

    /**
     * @tc.number		SUB_WMS_FAMODELMINIMIZEALL_JSAPI_001
     * @tc.name			Test faModelMinimizeAllTest1.
     * @tc.desc			To verify the function of minimizing all windows on the default screen.
     */
    it('faModelMinimizeAllTest1', 0, async function (done) {
        console.log('jsunittest faModelMinimizeAllTest1 begin')
        window.getTopWindow().then(wnd => {
            expect(wnd != null).assertTrue();
            display.getDefaultDisplay().then(dsp => {
                console.log('jsunittest faModelMinimizeAllTest1 getDefaultDisplay dspID :' + dsp.id);
                window.minimizeAll(dsp.id).then(() => {
                    console.log('jsunittest faModelMinimizeAllTest1 minimizeAll success');
                    setTimeout(() => {
                        window.getTopWindow().then((wnd) => {
                            console.log('jsunittest faModelMinimizeAllTest1 getTopWindow success');
                            expect().assertFail();
                            done();
                        }).catch((err) => {
                            console.log('jsunittest faModelMinimizeAllTest1 getTopWindow failed, err :' + JSON.stringify(err));
                            expect(err.code).assertEqual(120);
                            wnd.show().then(() => {
                                console.log('jsunittest faModelMinimizeAllTest1 show success');
                                expect(true).assertTrue();
                                done();
                            }).catch((err) => {
                                console.log('jsunittest faModelMinimizeAllTest1 show failed, err :' + JSON.stringify(err));
                                expect().assertFail();
                                done();
                            })
                        })
                    }, 1000)
                }).catch((err) => {
                    console.log('jsunittest faModelMinimizeAllTest1 minimizeAll failed, err :' + JSON.stringify(err));
                    expect().assertFail();
                    done();
                })
            }).catch((err) => {
                console.log('jsunittest faModelMinimizeAllTest1 getDefaultDisplay failed, err :' + JSON.stringify(err));
                expect().assertFail();
                done();
            })
        }).catch((err) => {
            console.log('jsunittest faModelMinimizeAllTest1 getTopWindow failed, err :' + JSON.stringify(err));
            expect().assertFail();
            done();
        })
    })

    /**
     * @tc.number		SUB_WMS_FAMODELMINIMIZEALL_JSAPI_002
     * @tc.name			Test faModelMinimizeAllTest2.
     * @tc.desc			To verify the function of minimizing all windows on an invalid screen.
     */
    it('faModelMinimizeAllTest2', 0, async function (done) {
        console.log('jsunittest faModelMinimizeAllTest2 begin')
        window.minimizeAll(-100).then(() => {
            console.log('jsunittest faModelMinimizeAllTest2 minimizeAll success');
            expect().assertFail();
            done();
        }).catch((err) => {
            console.log('jsunittest faModelMinimizeAllTest2 minimizeAll failed, err :' + JSON.stringify(err));
            expect(err.code).assertEqual(130);
            done();
        })
    })


})
