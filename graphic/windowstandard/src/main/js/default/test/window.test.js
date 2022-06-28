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
import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from 'deccjsunit/index'
import window from '@ohos.window'
import screen from '@ohos.screen'
import display from '@ohos.display'
const TRUE_WINDOW = true;
const avoidAreaType = 3;

describe('window_test', function () {
    var wnd;
    var topWindow;
    const DELAY_TIME = 3000;
    var height;

    function windowSizeChangeCallback(data) {
        console.log('windowTest OnOffTest1 callback  ' + JSON.stringify(data));
		height = data.height;
    }
	
	function systemAvoidAreaChangeCallback(data) {
        console.log('windowTest OnOffTest2 callback  ' + JSON.stringify(data));
		height = data.bottomRect.height;
    }

    beforeAll(function (done) {
        console.log('windowTest beforeAll begin');
        window.getTopWindow().then(wnd => {
            console.log('windowTest beforeAll window.getTopWindow wnd: ' + wnd);
            if (wnd) {
                topWindow = wnd;
            } else {
                console.log('windowTest beforeAll window.getTopWindow empty');
            }
        }, (err) => {
            console.log('windowTest beforeAll window.getTopWindow failed, err : ' + JSON.stringify(err));
        })
        setTimeout(() => {
            done();
        }, 5000);
    })
    beforeEach(function (done) {
        if (topWindow) {
            topWindow.show().then(() => {
                console.log('windowTest beforeEach wnd.show success');
                topWindow.getProperties().then(data => {
                    if (data.isFullScreen) {
                        topWindow.setFullScreen(false).then(() => {
                            console.log('windowTest beforeEach wnd.setFullScreen(false) success');
                        }, (err) => {
                            console.log('windowTest beforeEach wnd.getProperties failed, err : ' + JSON.stringify(err));
                        })
                    }
                }, (err) => {
                    console.log('windowTest beforeEach wnd.setFullScreen(false) failed, err : ' + JSON.stringify(err));
                })
            }, (err) => {
                console.log('windowTest beforeEach wnd.show failed, err : ' + JSON.stringify(err));
            })
            setTimeout(() => {
                done();
            }, DELAY_TIME);
        } else {
            done();
        }
    })
    afterEach(function () {
    })
    afterAll(function () {
    })

    /**
	 * @tc.number     SUB_WMS_GETPROPERTIES_JSAPI_001
	 * @tc.name       Test getProperties_Test_001
	 * @tc.desc       Get the current application main window properties
	 */
    it('getProperties_Test_001', 0, async function (done) {
        console.log('windowTest getPropertiesTest1 begin');
        window.getTopWindow().then(wnd => {
            console.log('windowTest getPropertiesTest1 window.getTopWindow wnd: ' + wnd);
            expect(wnd != null).assertTrue();
            wnd.getProperties().then((data) => {
                console.log('windowTest getPropertiesTest1 wnd.getProperties success, data : ' + JSON.stringify(data));
                expect(data.type != null).assertTrue();
                expect(data.windowRect.height != null).assertTrue();
                expect(data.windowRect.left != null).assertTrue();
                expect(data.windowRect.top != null).assertTrue();
                expect(data.windowRect.width != null).assertTrue();
                expect(!data.isFullScreen).assertTrue();
                expect(!data.isLayoutFullScreen).assertTrue();
                expect(data.focusable).assertTrue();
                expect(data.touchable).assertTrue();
                expect(!data.isKeepScreenOn).assertTrue();
                expect(!data.isTransparent).assertTrue();
                expect(data.brightness != null).assertTrue();
                expect(data.dimBehindValue).assertEqual(0);
                expect(!data.isRoundCorner).assertTrue();
                expect(!data.isPrivacyMode).assertTrue();
                done();
            }, (err) => {
                console.log('windowTest getPropertiesTest1 wnd.getProperties failed, err : ' + JSON.stringify(err));
                expect().assertFail();
                done();
            })
        }, (err) => {
            console.log('windowTest getPropertiesTest1 window.getTopWindow failed, err : ' + JSON.stringify(err));
            expect().assertFail();
            done();
        })
    })

    /**
     * @tc.number    SUB_WMS_GETPROPERTIES_JSAPI_002
     * @tc.name      Test getProperties_Test_002
     * @tc.desc      Get the current application main window properties
     */
    it('getProperties_Test_002', 0, async function (done) {
        console.log('windowTest GetPropertiesTest2 begin');
        window.getTopWindow().then(wnd => {
            console.log('windowTest GetPropertiesTest2 window.getTopWindow wnd: ' + wnd);
            expect(wnd != null).assertTrue();
            wnd.getProperties((err, data) => {
                if (err.code != 0) {
                    console.log('windowTest GetPropertiesTest2 window.getProperties callback fail' + JSON.stringify(err));
                    expect().assertFail();
                    done();
                } else {
                    expect(data.type != null).assertTrue();
                    expect(data.windowRect.height != null).assertTrue();
                    expect(data.windowRect.left != null).assertTrue();
                    expect(data.windowRect.top != null).assertTrue();
                    expect(data.windowRect.width != null).assertTrue();
                    expect(!data.isFullScreen).assertTrue();
                    expect(!data.isLayoutFullScreen).assertTrue();
                    expect(data.focusable).assertTrue();
                    expect(data.touchable).assertTrue();
                    expect(!data.isKeepScreenOn).assertTrue();
                    expect(!data.isTransparent).assertTrue();
                    expect(data.brightness != null).assertTrue();
                    expect(data.dimBehindValue).assertEqual(0);
                    expect(!data.isRoundCorner).assertTrue();
                    expect(!data.isPrivacyMode).assertTrue();
                    done();
                }
            })
        }, (err) => {
            console.log('windowTest getPropertiesTest2 window.getTopWindow failed, err : ' + JSON.stringify(err));
            expect().assertFail();
            done();
        })
    })

    /**
	 * @tc.number     SUB_WMS_GETAVOIDAREA_JSAPI_001
	 * @tc.name       Test getAvoidArea_Test_001
	 * @tc.desc       Get SystemUI type avoidance area
	 */
    it('getAvoidArea_Test_001', 0, async function (done) {
        console.log('windowTest getAvoidAreaTest1 begin');
        window.getTopWindow().then(wnd => {
            console.log('windowTest getAvoidAreaTest1 window.getTopWindow wnd: ' + wnd);
            expect(wnd != null).assertTrue();
            wnd.getAvoidArea(window.AvoidAreaType.TYPE_SYSTEM).then((data) => {
                console.log('windowTest getAvoidAreaTest1 wnd.getAvoidArea success, data :' + JSON.stringify(data));
                expect(data.rightRect != null).assertTrue();
                expect(data.topRect != null).assertTrue();
                expect(data.bottomRect != null).assertTrue();
                expect(data.leftRect != null).assertTrue();
                done();
            }, (err) => {
                console.log('windowTest getAvoidAreaTest1 wnd.getAvoidArea failed, err : ' + JSON.stringify(err));
                expect().assertFail();
                done();
            })
        }, (err) => {
            console.log('windowTest getAvoidAreaTest1 window.getTopWindow failed, err : ' + JSON.stringify(err));
            expect().assertFail();
            done();
        })
    })

    /**
	 * @tc.number     SUB_WMS_GETAVOIDAREA_JSAPI_002
	 * @tc.name       Test getAvoidArea_Test_002
	 * @tc.desc       Get Notch type avoidance area
	 */
    it('getAvoidArea_Test_002', 0, async function (done) {
        console.log('windowTest getAvoidAreaTest2 begin');
        window.getTopWindow().then(wnd => {
            console.log('windowTest getAvoidAreaTest2 window.getTopWindow wnd: ' + wnd);
            expect(wnd != null).assertTrue();
            wnd.getAvoidArea(window.AvoidAreaType.TYPE_CUTOUT).then((data) => {
                console.log('windowTest getAvoidAreaTest2 wnd.getAvoidArea success, data :' + JSON.stringify(data));
                expect(data.rightRect != null).assertTrue();
                expect(data.topRect != null).assertTrue();
                expect(data.bottomRect != null).assertTrue();
                expect(data.leftRect != null).assertTrue();
                done();
            }, (err) => {
                console.log('windowTest getAvoidAreaTest2 wnd.getAvoidArea failed, err : ' + JSON.stringify(err));
                expect().assertFail();
                done();
            })
        }, (err) => {
            console.log('windowTest getAvoidAreaTest2 window.getTopWindow failed, err : ' + JSON.stringify(err));
            expect().assertFail();
            done();
        })
    })

    /**
	 * @tc.number     SUB_WMS_GETAVOIDAREA_JSAPI_003
	 * @tc.name       Test getAvoidArea_Test_003
	 * @tc.desc       Get system gesture type avoidance area
	 */
    it('getAvoidArea_Test_003', 0, async function (done) {
        console.log('windowTest getAvoidAreaTest3 begin');
        window.getTopWindow().then(wnd => {
            console.log('windowTest getAvoidAreaTest3 window.getTopWindow wnd: ' + wnd);
            expect(wnd != null).assertTrue();
            wnd.getAvoidArea(avoidAreaType).then((data) => {
                console.log('windowTest getAvoidAreaTest3 wnd.getAvoidArea success, data :' + JSON.stringify(data));
                expect(data.rightRect != null).assertTrue();
                expect(data.topRect != null).assertTrue();
                expect(data.bottomRect != null).assertTrue();
                expect(data.leftRect != null).assertTrue();
                done();
            }, (err) => {
                console.log('windowTest getAvoidAreaTest3 wnd.getAvoidArea failed, err : ' + JSON.stringify(err));
                expect().assertFail();
                done();
            })
        }, (err) => {
            console.log('windowTest getAvoidAreaTest3 window.getTopWindow failed, err : ' + JSON.stringify(err));
            expect().assertFail();
            done();
        })
    })

    /**
     * @tc.number    SUB_WMS_GETAVOIDAREA_JSAPI_004
     * @tc.name      Test getAvoidArea_Test_004
     * @tc.desc      Get System type avoidance area
     */
    it('getAvoidArea_Test_004', 0, async function (done) {
        console.log('windowTest getAvoidAreaTest4 begin');
        window.getTopWindow().then(wnd => {
            console.log('windowTest getAvoidAreaTest4 window.getTopWindow wnd: ' + wnd);
            expect(wnd != null).assertTrue();
            wnd.getAvoidArea(window.AvoidAreaType.TYPE_SYSTEM, (err, data) => {
                if (err.code != 0) {
                    console.log('windowTest getAvoidAreaTest4 wnd.getAvoidArea callback fail' + JSON.stringify(err));
                    expect().assertFail();
                    done();
                } else {
                    expect(data.topRect != null).assertTrue();
                    expect(data.rightRect != null).assertTrue();
                    expect(data.bottomRect != null).assertTrue();
                    expect(data.leftRect != null).assertTrue();
                    done();
                }
            })
        })
    })

    /**
     * @tc.number    SUB_WMS_GETAVOIDAREA_JSAPI_005
     * @tc.name      Test getAvoidArea_Test_005
     * @tc.desc      Get Cutout type avoidance area
     */
    it('getAvoidArea_Test_005', 0, async function (done) {
        console.log('windowTest getAvoidAreaTest5 begin');
        window.getTopWindow().then(wnd => {
            console.log('windowTest getAvoidAreaTest5 window.getTopWindow wnd: ' + wnd);
            expect(wnd != null).assertTrue();
            wnd.getAvoidArea(window.AvoidAreaType.TYPE_CUTOUT, (err, data) => {
                if (err.code != 0) {
                    console.log('windowTest getAvoidAreaTest5 wnd.getAvoidArea callback fail' + JSON.stringify(err));
                    expect().assertFail();
                    done();
                } else {
                    expect(data.topRect != null).assertTrue();
                    expect(data.rightRect != null).assertTrue();
                    expect(data.bottomRect != null).assertTrue();
                    expect(data.leftRect != null).assertTrue();
                    console.log('windowTest getAvoidAreaTest5 wnd.getAvoidArea callback end');
                    done();
                }
            })
        }, (err) => {
            console.log('windowTest getAvoidAreaTest5 window.getTopWindow failed, err : ' + JSON.stringify(err));
            expect().assertFail();
            done();
        })
    })

    /**
     * @tc.number    SUB_WMS_GETAVOIDAREA_JSAPI_006
     * @tc.name      Test getAvoidArea_Test_006
     * @tc.desc      Get system gesture type avoidance area
     */
    it('getAvoidArea_Test_006', 0, async function (done) {
        console.log('windowTest getAvoidAreaTest6 begin');
        window.getTopWindow().then(wnd => {
            console.log('windowTest getAvoidAreaTest6 window.getTopWindow wnd: ' + wnd);
            expect(wnd != null).assertTrue();
            wnd.getAvoidArea(avoidAreaType, (err, data) => {
                if (err.code != 0) {
                    console.log('windowTest getAvoidAreaTest6 wnd.getAvoidArea callback fail' + JSON.stringify(err));
                    expect().assertFail();
                    done();
                } else {
                    expect(data.topRect != null).assertTrue();
                    expect(data.rightRect != null).assertTrue();
                    expect(data.bottomRect != null).assertTrue();
                    expect(data.leftRect != null).assertTrue();
                    done();
                }
            })
        }, (err) => {
            console.log('windowTest getAvoidAreaTest6 window.getTopWindow failed, err : ' + JSON.stringify(err));
            expect().assertFail();
            done();
        })
    })

    /**
	 * @tc.number     SUB_WMS_SETFULLSCREEN_JSAPI_001
	 * @tc.name       Test setFullScreen_Test_001
	 * @tc.desc       Set the window to be non-fullscreen first and then fullscreen
	 */
    it('setFullScreen_Test_001', 0, async function (done) {
        console.log('windowTest setFullScreenTest1 begin');
        window.getTopWindow().then(wnd => {
            console.log('windowTest setFullScreenTest1 window.getTopWindow wnd: ' + wnd);
            expect(wnd != null).assertTrue();
            wnd.setFullScreen(false).then(() => {
                wnd.getProperties().then((data) => {
                    console.log('windowTest setFullScreenTest1 wnd.getProperties success, data : ' + JSON.stringify(data));
                    expect(data != null).assertTrue();
                    expect(!data.isFullScreen).assertTrue();
                    wnd.setFullScreen(true).then(() => {
                        wnd.getProperties().then((data) => {
                            console.log('windowTest setFullScreenTest1 wnd.getProperties success, data : ' + JSON.stringify(data));
                            expect(data != null).assertTrue();
                            expect(data.isFullScreen).assertTrue();
                            done();
                        }, (err) => {
                            console.log('windowTest setFullScreenTest1 wnd.getProperties failed, err : ' + JSON.stringify(err));
                            expect().assertFail();
                            done();
                        })
                    }, (err) => {
                        console.log('windowTest setFullScreenTest1 wnd.setFullScreen(true) failed, err : ' + JSON.stringify(err));
                        expect().assertFail();
                        done();
                    })
                }, (err) => {
                    console.log('windowTest setFullScreenTest1 wnd.getProperties failed, err : ' + JSON.stringify(err));
                    expect().assertFail();
                    done();
                })
            }, (err) => {
                console.log('windowTest setFullScreenTest1 wnd.setFullScreen(false) failed, err : ' + JSON.stringify(err));
                expect().assertFail();
                done();
            })
        }, (err) => {
            console.log('windowTest setFullScreenTest1 window.getTopWindow failed, err : ' + JSON.stringify(err));
            expect().assertFail();
            done();
        })
    })

    /**
     * @tc.number    SUB_WMS_SETFULLSCREEN_JSAPI_002
     * @tc.name      Test setFullScreen_Test_002
     * @tc.desc      Set the window to be non-fullscreen first and then fullscreen.
     */
    it('setFullScreen_Test_002', 0, async function (done) {
        window.getTopWindow().then(wnd => {
            console.log('windowTest SetFullScreenTest2 window.getTopWindow wnd: ' + wnd);
            expect(wnd != null).assertTrue();
            wnd.setFullScreen(false, (err) => {
                if (err.code != 0) {
                    console.log('windowTest SetFullScreenTest2 window.setFullScreen(false) callback fail' + JSON.stringify(err));
                    expect().assertFail();
                    done();
                } else {
                    wnd.getProperties((err, data) => {
                        if (err.code != 0) {
                            console.log('windowTest SetFullScreenTest2 window.getProperties callback fail' + JSON.stringify(err));
                            expect().assertFail();
                            done();
                        } else {
                            expect(!data.isFullScreen).assertTrue();
                            wnd.setFullScreen(true, (err) => {
                                if (err.code != 0) {
                                    console.log('windowTest SetFullScreenTest2 window.setFullScreen(true) callback fail' + JSON.stringify(err));
                                    expect().assertFail();
                                    done();
                                } else {
                                    wnd.getProperties((err, data) => {
                                        if (err.code != 0) {
                                            console.log('windowTest SetFullScreenTest2 window.getProperties callback fail' + JSON.stringify(err));
                                            expect().assertFail();
                                            done();
                                        } else {
                                            expect(data.isFullScreen).assertTrue();
                                            console.log('windowTest SetFullScreenTest2 window.getProperties callback end');
                                            done();
                                        }
                                    })
                                }
                            })
                        }
                    })
                }
            })
        }, (err) => {
            console.log('windowTest setFullScreenTest1 window.getTopWindow fail : ' + JSON.stringify(err));
            expect().assertFail();
            done();
        })
    })

    /**
	 * @tc.number     SUB_WMS_SETLAYOUTFULLSCREEN_JSAPI_001
	 * @tc.name       Test setLayoutFullScreen_Test_001
	 * @tc.desc       Set window and layout to full screen
	 */
    it('setLayoutFullScreen_Test_001', 0, async function (done) {
        console.log('windowTest setLayoutFullScreenTest1 begin');
        window.getTopWindow().then(wnd => {
            console.log('windowTest setLayoutFullScreenTest1 window.getTopWindow wnd: ' + wnd);
            expect(wnd != null).assertTrue();
            wnd.setFullScreen(true).then(() => {
                wnd.getProperties().then((data) => {
                    console.log('windowTest setLayoutFullScreenTest1 wnd.getProperties success, data : ' + JSON.stringify(data));
                    expect(data.isFullScreen).assertTrue();
                    wnd.setLayoutFullScreen(true).then(() => {
                        wnd.getProperties().then((data) => {
                            console.log('windowTest setLayoutFullScreenTest1 wnd.getProperties success, data : ' + JSON.stringify(data));
                            expect(data != null).assertTrue();
                            expect(data.isLayoutFullScreen).assertTrue();
                            done();
                        }, (err) => {
                            console.log('windowTest setLayoutFullScreenTest1 wnd.getProperties failed, err : ' + JSON.stringify(err));
                            expect().assertFail();
                            done();
                        })
                    }, (err) => {
                        console.log('windowTest setLayoutFullScreenTest1 wnd.setLayoutFullScreen(true) failed, err : ' + JSON.stringify(err));
                        expect().assertFail();
                        done();
                    })
                }, (err) => {
                    console.log('windowTest setLayoutFullScreenTest1 wnd.getProperties failed, err : ' + JSON.stringify(err));
                    expect().assertFail();
                })
            }, (err) => {
                console.log('windowTest setLayoutFullScreenTest1 wnd.setFullScreen(true) failed, err : ' + JSON.stringify(err));
                expect().assertFail();
                done();
            })
        }, (err) => {
            console.log('windowTest setLayoutFullScreenTest1 window.getTopWindow failed, err : ' + JSON.stringify(err));
            expect().assertFail();
            done();
        })
    })

    /**
     * @tc.number    SUB_WMS_SETLAYOUTFULLSCREEN_JSAPI_002
     * @tc.name      Test setLayoutFullScreen_Test_002
     * @tc.desc      Set window and layout to full screen.
     */
    it('setLayoutFullScreen_Test_002', 0, async function (done) {
        console.log('windowTest SetLayoutFullScreenTest2 begin');
        window.getTopWindow().then(wnd => {
            console.log('windowTest SetLayoutFullScreenTest2 window.getTopWindow wnd: ' + wnd);
            expect(wnd != null).assertTrue();
            wnd.setFullScreen(true, (err) => {
                console.log('windowTest SetLayoutFullScreenTest2 wnd.setFullScreen(true) callback begin');
                if (err.code != 0) {
                    console.log('windowTest SetLayoutFullScreenTest2 wnd.setFullScreen callback fail' + JSON.stringify(err));
                    expect().assertFail();
                    done();
                } else {
                    wnd.getProperties((err, data) => {
                        if (err.code != 0) {
                            console.log('windowTest SetLayoutFullScreenTest2 wnd.getProperties callback fail' + JSON.stringify(err));
                            expect().assertFail();
                            done();
                        } else {
                            expect(data.isFullScreen).assertTrue();
                            wnd.setLayoutFullScreen(true, (err) => {
                                if (err.code != 0) {
                                    console.log('windowTest SetLayoutFullScreenTest2 wnd.setLayoutFullScreen callback fail' + JSON.stringify(err));
                                    expect().assertFail();
                                    done();
                                } else {
                                    wnd.getProperties((err, data) => {
                                        if (err.code != 0) {
                                            console.log('windowTest SetLayoutFullScreenTest2 wnd.getProperties callback fail' + JSON.stringify(err));
                                            expect().assertFail();
                                            done();
                                        } else {
                                            console.log('windowTest SetLayoutFullScreenTest2 wnd.getProperties callback end');
                                            expect(data.isLayoutFullScreen).assertTrue();
                                            done();
                                        }
                                    })
                                }
                            })
                        }

                    })
                }
            })
        }, (err) => {
            console.log('windowTest SetLayoutFullScreenTest2 window.getTopWindow fail : ' + JSON.stringify(err));
            expect().assertFail();
            done();
        })
    })

    /**
	 * @tc.number     SUB_WMS_SETLAYOUTFULLSCREEN_JSAPI_003
	 * @tc.name       Test setLayoutFullScreen_Test_003
	 * @tc.desc       Set the window to full screen, the layout is not full screen
	 */
    it('setLayoutFullScreen_Test_003', 0, async function (done) {
        console.log('windowTest setLayoutFullScreenTest3 begin');
        window.getTopWindow().then(wnd => {
            console.log('windowTest setLayoutFullScreenTest3 window.getTopWindow wnd: ' + wnd);
            expect(wnd != null).assertTrue();
            wnd.setFullScreen(true).then(() => {
                wnd.getProperties().then((data) => {
                    console.log('windowTest setLayoutFullScreenTest3 wnd.getProperties success, data : ' + JSON.stringify(data));
                    expect(data.isFullScreen).assertTrue();
                    wnd.setLayoutFullScreen(false).then(() => {
                        wnd.getProperties().then((data) => {
                            console.log('windowTest setLayoutFullScreenTest3 wnd.getProperties success, data : ' + JSON.stringify(data));
                            expect(data != null).assertTrue();
                            expect(!data.isLayoutFullScreen).assertTrue();
                            done();
                        }, (err) => {
                            console.log('windowTest setLayoutFullScreenTest3 wnd.getProperties failed, err : ' + JSON.stringify(err));
                            expect().assertFail();
                            done();
                        })
                    }, (err) => {
                        console.log('windowTest setLayoutFullScreenTest3 wnd.setLayoutFullScreen(false) failed, err : ' + JSON.stringify(err));
                        expect().assertFail();
                        done();
                    })
                }, (err) => {
                    console.log('windowTest setLayoutFullScreenTest3 wnd.getProperties failed, err : ' + JSON.stringify(err));
                    expect().assertFail();
                })
            }, (err) => {
                console.log('windowTest setLayoutFullScreenTest3 wnd.setFullScreen(true) failed, err : ' + JSON.stringify(err));
                expect().assertFail();
                done();
            })
        }, (err) => {
            console.log('windowTest setLayoutFullScreenTest3 window.getTopWindow failed, err : ' + JSON.stringify(err));
            expect().assertFail();
            done();
        })
    })

    /**
     * @tc.number    SUB_WMS_SETLAYOUTFULLSCREEN_JSAPI_004
     * @tc.name      Test setLayoutFullScreen_Test_004
     * @tc.desc      Set the window to full screen, the layout is not full screen
     */
    it('setLayoutFullScreen_Test_004', 0, async function (done) {
        console.log('windowTest SetLayoutFullScreenTest4 begin');
        window.getTopWindow().then(wnd => {
            console.log('windowTest SetLayoutFullScreenTest4 window.getTopWindow wnd: ' + wnd);
            expect(wnd != null).assertTrue();
            wnd.setFullScreen(true, (err) => {
                if (err.code != 0) {
                    console.log('windowTest SetLayoutFullScreenTest4 wnd.setFullScreen(true) callback fail' + JSON.stringify(err));
                    expect().assertFail();
                    done();
                } else {
                    wnd.getProperties((err, data) => {
                        if (err.code != 0) {
                            console.log('windowTest SetLayoutFullScreenTest4 wnd.getProperties callback fail' + JSON.stringify(err));
                            expect().assertFail();
                            done();
                        } else {
                            expect(data.isFullScreen).assertTrue();
                            wnd.setLayoutFullScreen(false, (err) => {
                                if (err.code != 0) {
                                    console.log('windowTest SetLayoutFullScreenTest4 wnd.setLayoutFullScreen(false) callback fail' + JSON.stringify(err));
                                    expect().assertFail();
                                    done();
                                } else {
                                    wnd.getProperties((err, data) => {
                                        if (err.code != 0) {
                                            console.log('windowTest SetLayoutFullScreenTest4 wnd.getProperties callback fail' + JSON.stringify(err));
                                            expect().assertFail();
                                            done();
                                        } else {
                                            console.log('windowTest SetLayoutFullScreenTest4 wnd.getProperties callback end');
                                            expect(!data.isLayoutFullScreen).assertTrue();
                                            done();
                                        }
                                    })
                                }
                            })
                        }
                    })
                }
            })
        }, (err) => {
            console.log('windowTest SetLayoutFullScreenTest4 window.getTopWindow fail : ' + JSON.stringify(err));
            expect().assertFail();
            done();
        })
    })

    /**
	 * @tc.number     SUB_WMS_SETLAYOUTFULLSCREEN_JSAPI_005
	 * @tc.name       Test setLayoutFullScreen_Test_005
	 * @tc.desc       Set the window to be non-full-screen and the layout to be full-screen
	 */
    it('setLayoutFullScreen_Test_005', 0, async function (done) {
        console.log('windowTest setLayoutFullScreenTest5 begin');
        window.getTopWindow().then(wnd => {
            console.log('windowTest setLayoutFullScreenTest5 window.getTopWindow wnd: ' + wnd);
            expect(wnd != null).assertTrue();
            wnd.setFullScreen(false).then(() => {
                wnd.getProperties().then((data) => {
                    console.log('windowTest setLayoutFullScreenTest5 wnd.getProperties success, data : ' + JSON.stringify(data));
                    expect(data != null).assertTrue();
                    expect(!data.isFullScreen).assertTrue();
                    wnd.setLayoutFullScreen(true).then(() => {
                        wnd.getProperties().then((data) => {
                            console.log('windowTest setLayoutFullScreenTest5 wnd.getProperties success, data : ' + JSON.stringify(data));
                            expect(data.isLayoutFullScreen).assertTrue();
                            done();
                        }, (err) => {
                            console.log('windowTest setLayoutFullScreenTest5 wnd.getProperties failed, err : ' + JSON.stringify(err));
                            expect().assertFail();
                            done();
                        })
                    }, (err) => {
                        console.log('windowTest setLayoutFullScreenTest5 wnd.setLayoutFullScreen(true) failed, err : ' + JSON.stringify(err));
                        expect().assertFail();
                        done();
                    })
                }, (err) => {
                    console.log('windowTest setLayoutFullScreenTest5 wnd.getProperties failed, err : ' + JSON.stringify(err));
                    expect().assertFail();
                    done();
                })
            }, (err) => {
                console.log('windowTest setLayoutFullScreenTest5 wnd.setFullScreen(false) failed, err : ' + JSON.stringify(err));
                expect().assertFail();
                done();
            })
        }, (err) => {
            console.log('windowTest setLayoutFullScreenTest5 window.getTopWindow failed, err : ' + JSON.stringify(err));
            expect().assertFail();
            done();
        })
    })

    /**
     * @tc.number    SUB_WMS_SETLAYOUTFULLSCREEN_JSAPI_006
     * @tc.name      Test setLayoutFullScreen_Test_006
     * @tc.desc      Set the window to be non-full-screen and the layout to be full-screen.
     */
    it('setLayoutFullScreen_Test_006', 0, async function (done) {
        console.log('windowTest SetLayoutFullScreenTest6 begin');
        window.getTopWindow().then(wnd => {
            console.log('windowTest SetLayoutFullScreenTest6 window.getTopWindow wnd: ' + wnd);
            expect(wnd != null).assertTrue();
            wnd.setFullScreen(false, (err) => {
                if (err.code != 0) {
                    console.log('windowTest SetLayoutFullScreenTest6 wnd.setFullScreen fail' + JSON.stringify(err));
                    expect().assertFail();
                    done();
                } else {
                    wnd.getProperties((err, data) => {
                        if (err.code != 0) {
                            console.log('windowTest SetLayoutFullScreenTest6 wnd.getProperties fail' + JSON.stringify(err));
                            expect().assertFail();
                            done();
                        } else {
                            expect(!data.isFullScreen).assertTrue();
                            wnd.setLayoutFullScreen(true, (err) => {
                                if (err.code != 0) {
                                    console.log('windowTest SetLayoutFullScreenTest6 wnd.setLayoutFullScreen fail' + JSON.stringify(err));
                                    expect().assertFail();
                                    done();
                                } else {
                                    wnd.getProperties((err, data) => {
                                        if (err.code != 0) {
                                            console.log('windowTest SetLayoutFullScreenTest6 wnd.getProperties fail' + JSON.stringify(err));
                                            expect().assertFail();
                                            done();
                                        } else {
                                            expect(data.isLayoutFullScreen).assertTrue();
                                            done();
                                        }
                                    })
                                }
                            })
                        }
                    })
                }
            })
        }, (err) => {
            console.log('windowTest SetLayoutFullScreenTest6 window.getTopWindow fail : ' + JSON.stringify(err));
            expect().assertFail();
            done();
        })
    })

    /**
	 * @tc.number     SUB_WMS_SETLAYOUTFULLSCREEN_JSAPI_007
	 * @tc.name       Test setLayoutFullScreen_Test_007
	 * @tc.desc       Setting windows and layouts to be non-fullscreen
	 */
    it('setLayoutFullScreen_Test_007', 0, async function (done) {
        console.log('windowTest setLayoutFullScreenTest7 begin');
        window.getTopWindow().then(wnd => {
            console.log('windowTest setLayoutFullScreenTest7 window.getTopWindow wnd: ' + wnd);
            expect(wnd != null).assertTrue();
            wnd.setFullScreen(false).then(() => {
                wnd.getProperties().then((data) => {
                    console.log('windowTest setLayoutFullScreenTest7 wnd.getProperties success, data : ' + JSON.stringify(data));
                    expect(!data.isFullScreen).assertTrue();
                    wnd.setLayoutFullScreen(false).then(() => {
                        wnd.getProperties().then((data) => {
                            console.log('windowTest setLayoutFullScreenTest7 wnd.getProperties success, data : ' + JSON.stringify(data));
                            expect(!data.isLayoutFullScreen).assertTrue();
                            done();
                        }, (err) => {
                            console.log('windowTest setLayoutFullScreenTest7 wnd.getProperties failed, err : ' + JSON.stringify(err));
                            expect().assertFail();
                            done();
                        })
                    }, (err) => {
                        console.log('windowTest setLayoutFullScreenTest7 wnd.setLayoutFullScreen(false) failed, err : ' + JSON.stringify(err));
                        expect().assertFail();
                        done();
                    })
                }, (err) => {
                    console.log('windowTest setLayoutFullScreenTest7 wnd.getProperties failed, err : ' + JSON.stringify(err));
                    expect().assertFail();
                })
            }, (err) => {
                console.log('windowTest setLayoutFullScreenTest7 wnd.setFullScreen(false) failed, err : ' + JSON.stringify(err));
                expect().assertFail();
                done();
            })
        }, (err) => {
            console.log('windowTest setLayoutFullScreenTest7 window.getTopWindow failed, err : ' + JSON.stringify(err));
            expect().assertFail();
            done();
        })
    })

    /**
     * @tc.number    SUB_WMS_SETLAYOUTFULLSCREEN_JSAPI_008
     * @tc.name      Test setLayoutFullScreen_Test_008
     * @tc.desc      Setting window and layouts to be non-fullscreen.
     */
    it('setLayoutFullScreen_Test_008', 0, async function (done) {
        console.log('windowTest SetLayoutFullScreenTest8 begin');
        window.getTopWindow().then(wnd => {
            console.log('windowTest SetLayoutFullScreenTest8 window.getTopWindow wnd: ' + wnd);
            expect(wnd != null).assertTrue();
            wnd.setFullScreen(false, (err) => {
                if (err.code != 0) {
                    console.log('windowTest SetLayoutFullScreenTest8 window.setFullScreen callback fail' + JSON.stringify(err));
                    expect().assertFail();
                    done();
                } else {
                    wnd.getProperties((err, data) => {
                        if (err.code != 0) {
                            console.log('windowTest SetLayoutFullScreenTest8 window.getProperties callback fail' + JSON.stringify(err));
                            expect().assertFail();
                            done();
                        } else {
                            expect(!data.isFullScreen).assertTrue();
                            wnd.setLayoutFullScreen(false, (err) => {
                                if (err.code != 0) {
                                    console.log('windowTest SetLayoutFullScreenTest8 window.setLayoutFullScreen callback fail' + JSON.stringify(err));
                                    expect().assertFail();
                                    done();
                                } else {
                                    wnd.getProperties((err, data) => {
                                        if (err.code != 0) {
                                            console.log('windowTest SetLayoutFullScreenTest8 window.getProperties callback fail' + JSON.stringify(err));
                                            expect().assertFail();
                                            done();
                                        } else {
                                            expect(!data.isLayoutFullScreen).assertTrue();
                                            done();
                                        }
                                    })
                                }
                            })
                        }
                    })
                }
            })
        }, (err) => {
            console.log('windowTest setLayoutFullScreen_Test_008 window.getTopWindow fail : ' + JSON.stringify(err));
            expect().assertFail();
            done();
        })
    })


    /**
	 * @tc.number     SUB_WMS_FIND_JSAPI_001
	 * @tc.name       Test find_Test_001
	 * @tc.desc       Query main window
	 */
    it('find_Test_001', 0, async function (done) {
        console.log('windowTest findTest1 begin');
        window.find('window0').then((data) => {
            console.log('windowTest findTest1 wnd.find success, data : ' + JSON.stringify(data));
            expect(data != null).assertTrue();
            done();
        }, (err) => {
            console.log('windowTest findTest1 wnd.find failed, err : ' + JSON.stringify(err));
            expect().assertFail();
            done();
        })
    })

    /**
	 * @tc.number     SUB_WMS_FIND_JSAPI_002
	 * @tc.name       Test find_Test_002
	 * @tc.desc       Query for non-existing windows
	 */
    it('find_Test_002', 0, async function (done) {
        console.log('windowTest findTest2 begin');
        window.find('window').then((window) => {
            console.log('windowTest findTest2 wnd.find success, window : ' + JSON.stringify(window));
            expect().assertFail();
            done();
        }, (err) => {
            console.log('windowTest findTest2 wnd.find failed, err : ' + JSON.stringify(err));
            expect(TRUE_WINDOW).assertTrue();
            done();
        })
    })

    /**
     * @tc.number    SUB_WMS_FIND_JSAPI_004
     * @tc.name      Test find_Test_003
     * @tc.desc      Query main window.
     */
    it('find_Test_003', 0, async function (done) {
        console.log('windowTest findTest3 begin');
        window.find('window0', (err, data) => {
            if (err.code) {
                console.log('windowTest findTest3 wnd.find fail, err : ' + JSON.stringify(err));
                expect().assertFail();
                done();
            } else {
                console.log('windowTest findTest3 wnd.find fail');
                expect(data != null).assertTrue();
                done();
            }
        })
    })

    /**
     * @tc.number    SUB_WMS_FIND_JSAPI_004
     * @tc.name      Test find_Test_004
     * @tc.desc      Query for non-existing windows
     */
    it('find_Test_004', 0, async function (done) {
        console.log('windowTest findTest4 begin');
        window.find('window', (err, data) => {
            if (err.code) {
                console.log('windowTest findTest4 wnd.find fail, err : ' + JSON.stringify(err));
                expect(TRUE_WINDOW).assertTrue();
                done();
            } else {
                console.log('windowTest findTest4 wnd.find success');
                expect().assertFail();
                done();
            }
        })
    })


    /**
     * @tc.number    SUB_WMS_ONOFF_JSAPI_001
     * @tc.name      Test onOff_Test_001.
     * @tc.desc      To verify the function of enabling and disabling intercepting when the window size changes.
     */
    it('onOff_Test_001', 0, async function (done) {
        console.log('windowTest OnOffTest1 begin');
	    display.getDefaultDisplay().then(dsp => {
            window.getTopWindow((err, data) => {
				if (err.code != 0) {
					console.log('windowTest OnOffTest1 getTopWindow  fail ' + JSON.stringify(err.code));
					expect().assertFail();
					done();
				} else {
					expect(data != null).assertTrue();
					data.on('windowSizeChange', windowSizeChangeCallback);
					data.setLayoutFullScreen(true, (err) => {
						if (err.code != 0) {
							console.log('windowTest OnOffTest1 setLayoutFullScreen  fail ' + JSON.stringify(err.code));
							expect().assertFail();
							done();
						} else {
							setTimeout((async function () {
								expect(dsp.height == height).assertTrue();
								data.off('windowSizeChange');
								data.setLayoutFullScreen(false, (err) => {
									if (err.code != 0) {
										console.log('windowTest OnOffTest1 setLayoutFullScreen callback fail ' + JSON.stringify(err));
										expect().assertFail();
										done();
									} else {
										expect(dsp.height == height).assertTrue();
										done();
									}
								})
							}), 3000)
						}
					})
				}
			})
        }, (err) => {
            console.log('displayTest OnOffTest1 getDefaultDisplay failed, err :' + JSON.stringify(err));
            expect().assertFail();
            done();
        })
    })

    /**
     * @tc.number    SUB_WMS_ONOFF_JSAPI_002
     * @tc.name      Test onOff_Test_002
     * @tc.desc      To verify the function of enabling and disabling lawful interception in the system and window
     */
    it('onOff_Test_002', 0, async function (done) {
        console.log('windowTest OnOffTest2 begin');
        window.getTopWindow((err, data) => {
            if (err.code != 0) {
                console.log('windowTest OnOffTest2 getTopWindow callback fail ' + JSON.stringify(err.code));
                expect().assertFail();
                done();
            } else {
                expect(data != null).assertTrue();
                data.on('systemAvoidAreaChange', systemAvoidAreaChangeCallback);
                data.setFullScreen(true, (err) => {
                    if (err.code != 0) {
                        console.log('windowTest OnOffTest2 setLayoutFullScreen callback fail ' + JSON.stringify(err));
                        expect().assertFail();
                        done();
                    } else {
                        setTimeout((async function () {
                            expect(height == 0).assertTrue();
                            data.off('systemAvoidAreaChange');
                            data.setFullScreen(false, (err) => {
                                if (err.code != 0) {
                                    console.log('windowTest OnOffTest2 setLayoutFullScreen callback fail ' + JSON.stringify(err));
                                    expect().assertFail();
                                    done();
                                } else {
                                    console.log('windowTest OnOffTest2 off callback success');
                                    expect(height == 0).assertTrue();
                                    done();
                                }
                            })
                        }), 3000)
                    }
                })
            }
        })
    })

    /**
     * @tc.number      SUB_WMS_ISSHOWING_JSAPI_001
     * @tc.name        Test isShowing_Test_001.
     * @tc.desc        To verify the function of obtaining the display status when a window is hidden and then displayed.
     */
    it('isShowing_Test_001', 0, async function (done) {
        console.log('windowTest IsShowingTest1 begin');
        window.create('subWindow1', window.WindowType.TYPE_APP).then(wnd => {
            expect(wnd != null).assertTrue();
            wnd.isShowing().then(res => {
                console.log('windowTest IsShowingTest1 wnd.isShowing data:' + res);
                expect(!res).assertTrue();
                wnd.show().then(() => {
                    wnd.isShowing().then(res => {
                        expect(res).assertTrue();
                        wnd.destroy();
                        done();
                    }, (err) => {
                        console.log('windowTest IsShowingTest1 wnd.isShowing failed, err :' + JSON.stringify(err));
                        expect().assertFail();
                        done();
                    })
                }, (err) => {
                    console.log('windowTest IsShowingTest1 wnd.show failed, err :' + JSON.stringify(err));
                    expect().assertFail();
                    done();
                })
            }, (err) => {
                console.log('windowTest IsShowingTest1 wnd.isShowing failed, err :' + JSON.stringify(err));
                expect().assertFail();
                done();
            })
        })
    })

    /**
     * @tc.number    SUB_WMS_ISSHOWING_JSAPI_002
     * @tc.name      Test isShowing_Test_002.
     * @tc.desc      To verify the function of obtaining the display status when a window is hidden and then displayed.
     */
    it('isShowing_Test_002', 0, async function (done) {
        console.log('windowTest IsShowingTest2 begin');
        window.create('subWindow2', window.WindowType.TYPE_APP, (err, data) => {
            if (err.code) {
                console.log('windowTest IsShowingTest2 window.create fail err ' + JSON.stringify(err));
                expect().assertFail();
                done();
            } else {
                expect(data != null).assertTrue();
                data.isShowing((err, res1) => {
                    if (err.code) {
                        console.log('windowTest IsShowingTest2 data.isShowing fail err ' + JSON.stringify(err));
                        expect().assertFail();
                        done();
                    } else {
                        expect(!res1).assertTrue();
                        data.show(() => {
                            if (err.code) {
                                console.log('windowTest IsShowingTest2 data.show fail err ' + JSON.stringify(err));
                                expect().assertFail();
                                done();
                            } else {
                                data.isShowing((err, res2) => {
                                    if (err.code) {
                                        console.log('windowTest IsShowingTest2 data.show fail err ' + JSON.stringify(err));
                                        expect().assertFail();
                                        done();
                                    } else {
                                        expect(res2).assertTrue();
                                        data.destroy();
                                        done();
                                    }
                                })
                            }
                        })
                    }
                })
            }
        })
    })

    /**
     * @tc.number      SUB_WMS_SETCOLORSPACE_JSAPI_001
     * @tc.name        Test setColorSpace_Test_001
     * @tc.desc        To verify the setting of the wide color gamut color space
     */
    it('setColorSpace_Test_001', 0, async function (done) {
        console.log('windowTest SetColorSpaceTest1 begin');
        window.getTopWindow().then(wnd => {
            console.log('windowTest SetColorSpaceTest1 wnd: ' + wnd);
            expect(wnd != null).assertTrue();
            wnd.setColorSpace(window.ColorSpace.WIDE_GAMUT).then(() => {
                console.log('windowTest SetColorSpaceTest1 setColorSpace WIDE_GAMUT');
                wnd.getColorSpace().then(res => {
                    expect(res == window.ColorSpace.WIDE_GAMUT).assertTrue();
                    console.log('windowTest SetColorSpaceTest1 setColorSpace WIDE_GAMUT success');
                    wnd.isSupportWideGamut().then(data => {
                        expect(data).assertTrue();
                        done();
                    }, (err) => {
                        console.log('windowTest SetColorSpaceTest1 wnd.isSupportWideGamut failed, err :' + JSON.stringify(err));
                        expect().assertFail();
                        done();
                    })
                }, (err) => {
                    console.log('windowTest SetColorSpaceTest1 wnd.getColorSpace failed, err :' + JSON.stringify(err));
                    expect().assertFail();
                    done();
                })
            }, (err) => {
                console.log('windowTest SetColorSpaceTest1 wnd.setColorSpace failed, err :' + JSON.stringify(err));
                expect().assertFail();
                done();
            })
        }, (err) => {
            console.log('windowTest SetColorSpaceTest1 getTopWindow failed, err :' + JSON.stringify(err));
            expect().assertFail();
            done();
        })
    })

    /**
     * @tc.number      SUB_WMS_SETCOLORSPACE_JSAPI_002
     * @tc.name        Test setColorSpace_Test_002
     * @tc.desc        To verify that the color space of invaild values is set successfully
     */
    it('setColorSpace_Test_002', 0, async function (done) {
        console.log('windowTest SetColorSpaceTest2 begin');
        window.getTopWindow().then(wnd => {
            console.log('windowTest SetColorSpaceTest2 wnd: ' + wnd);
            expect(wnd != null).assertTrue();
            wnd.setColorSpace(-5).then(() => {
                console.log('windowTest SetColorSpaceTest2 setColorSpace -5');
                expect().assertFail();
                done();
            },(err) => {
                console.log('windowTest SetColorSpaceTest2 wnd.setColorSpace failed, err :' + JSON.stringify(err));
                expect(err.code).assertEqual(130);
                done();
            })
        },(err) => {
            console.log('windowTest SetColorSpaceTest2 wnd.getTopWindow failed, err :' + JSON.stringify(err));
            expect().assertFail();
            done();
        })
    })

    /**
     * @tc.number    SUB_WMS_SETCOLORSPACE_JSAPI_003
     * @tc.name      Test setColorSpace_Test_003
     * @tc.desc      To verify the setting of the wide color gamut color space
     */
    it('setColorSpace_Test_003', 0, async function (done) {
        console.log('windowTest SetColorSpaceTest3 begin');
        window.getTopWindow().then(wnd => {
            console.log('windowTest SetColorSpaceTest3 wnd: ' + wnd);
            expect(wnd != null).assertTrue();
            wnd.setColorSpace(window.ColorSpace.WIDE_GAMUT, (err) => {
                if (err.code != 0) {
                    console.log('windowTest SetColorSpaceTest3 setColorSpace  fail' + JSON.stringify(err));
                    expect().assertFail();
                    done();
                } else {
                    wnd.getColorSpace((err, data) => {
                        if (err.code != 0) {
                            console.log('windowTest SetColorSpaceTest3 getColorSpace  fail ' + JSON.stringify(err));
                            expect().assertFail();
                            done();
                        } else {
                            expect(data == window.ColorSpace.WIDE_GAMUT).assertTrue();
                            wnd.isSupportWideGamut((err, data) => {
                                if (err.code != 0) {
                                    console.log('windowTest SetColorSpaceTest3 getColorSpace callback fail' + JSON.stringify(err));
                                    expect().assertFail();
                                    done();
                                } else {
                                    expect(data).assertTrue();
                                    done();
                                }
                            })
                        }
                    })
                }
            })
        }, (err) => {
            console.log('windowTest SetColorSpaceTest3 getTopWindow failed,err: ' + JSON.stringify(err));
            expect().assertFail();
            done();
        })
    })

    /**
     * @tc.number    SUB_WMS_SETCOLORSPACE_JSAPI_004
     * @tc.name      Test setColorSpace_Test_004
     * @tc.desc      To verify that the color space of invalid values is set successfully
     */
    it('setColorSpace_Test_004', 0, async function (done) {
        console.log('windowTest SetColorSpaceTest4 begin');
        window.getTopWindow().then(wnd => {
            console.log('windowTest SetColorSpaceTest4 wnd: ' + wnd);
            expect(wnd != null).assertTrue();
            wnd.setColorSpace(-5, (err) => {
                console.log('windowTest SetColorSpaceTest4 setColorSpace callback begin' + JSON.stringify(err));
                if (err.code != 0) {
                    console.log('windowTest SetColorSpaceTest4 setColorSpace callback fail' + JSON.stringify(err.code));
                    expect(err.code).assertEqual(130);
                    done();
                } else {
                    expect().assertFail();
                    done();
                }
            })
        }, (err) => {
            console.log('windowTest SetColorSpaceTest4 getTopWindow failed,err: ' + JSON.stringify(err));
            expect().assertFail();
            done();
        })
    })

    /**
     * @tc.number		SUB_WMS_CREATE_JSAPI_001
     * @tc.name			Test create_Test_001.
     * @tc.desc			To verify the function of creating an application subwindow.
     */
    it('create_Test_001', 0, async function (done) {
        console.log('windowTest CreateTest1 begin');
        window.create('subWindow3', window.WindowType.TYPE_APP).then(wnd => {
            console.log('windowTest CreateTest1 create success wnd' + wnd);
            expect(wnd != null).assertTrue();
            done();
        }, (err) => {
            console.log('windowTest CreateTest1 create failed, err :' + JSON.stringify(err));
            expect().assertFail();
            done();
        })
    })

    /**
     * @tc.number    SUB_WMS_CREATE_JSAPI_001
     * @tc.name      Test create_Test_002
     * @tc.desc      To verify the function of creating an application subwindow
     */
    it('create_Test_002', 0, async function (done) {
        console.log('windowTest CreateTest2 begin');
        window.create('subWindow4', window.WindowType.TYPE_APP, (err, data) => {
            if (err.code != 0) {
                console.log('windowTest CreateTest2 create callback fail' + JSON.stringify(err.code));
                expect().assertFail();
                done();
            } else {
                expect(data != null).assertTrue();
                console.log('windowTest CreateTest2 callback create success data' + data);
                done();
            }
        })
    })

    /**
     * @tc.number		SUB_WMS_DESTROY_JSAPI_001
     * @tc.name			Test destroy_Test_001
     * @tc.desc			Verify that a window is destroyed after being created
     */
    it('destroy_Test_001', 0, async function (done) {
        console.log('windowTest DestroyTest1 begin');
        window.create('subWindow5', window.WindowType.TYPE_APP).then(wnd => {
            console.log('windowTest DestroyTest1 create success wnd' + wnd);
            expect(wnd != null).assertTrue();
            wnd.destroy().then(() => {
                window.find('subWindow5').then((data) => {
                    console.log('windowTest DestroyTest1 window.find success, window :' + JSON.stringify(data));
                    expect().assertFail();
                    done();
                }, (err) => {
                    console.log('windowTest DestroyTest1 find failed, err :' + JSON.stringify(err));
                    expect(err.code).assertEqual(120);
                    done();
                })
            }, (err) => {
                console.log('windowTest CreateTest1 destroy failed, err :' + JSON.stringify(err));
                expect().assertFail();
                done();
            })
        }, (err) => {
            console.log('windowTest CreateTest1 create failed, err :' + JSON.stringify(err));
            expect().assertFail();
            done();
        })
    })


    /**
     * @tc.number    SUB_WMS_DESTROY_JSAPI_002
     * @tc.name      Test destroy_Test_002
     * @tc.desc      Verify that a window is destroyed after being created
     */
    it('destroy_Test_002', 0, async function (done) {
        console.log('windowTest DestroyTest2 begin');
        window.create('subWindow6', window.WindowType.TYPE_APP, (err, data) => {
            if (err.code != 0) {
                console.log('windowTest DestroyTest2 create callback fail' + JSON.stringify(err.code));
                expect().assertFail();
                done();
            } else {
                expect(data != null).assertTrue();
                data.destroy((err) => {
                    if (err.code != 0) {
                        console.log('windowTest DestroyTest2 create callback fail' + JSON.stringify(err));
                        expect().assertFail();
                        done();
                    } else {
                        window.find('subWindow6', (err, data) => {
                            console.log('windowTest DestroyTest2 find callback begin' + JSON.stringify(data));
                            if (err.code != 0) {
                                console.log('windowTest DestroyTest2 find callback fail' + JSON.stringify(err.code));
                                expect(err.code).assertEqual(120);
                                done();
                            } else {
                                console.log('windowTest DestroyTest2 find suceess,err : ' + JSON.stringify(err));
                                expect().assertFail();
                                done();
                            }
                        })
                    }
                })
            }
        })
    })

    /**
     * @tc.number		SUB_WMS_SETSYSTEMBARENABLE_JSAPI_001
     * @tc.name			Test setSystemBarEnable_Test_001
     * @tc.desc			To verify the function of setting a scenario that is visible to the system bar
     */
    it('setSystemBarEnable_Test_001', 0, async function (done) {
        console.log('windowTest SetSystemBarEnableTest1 begin');
        var names = ["status", "navigation"];
        window.getTopWindow().then(wnd => {
            expect(wnd != null).assertTrue();
            wnd.setLayoutFullScreen(true).then(() => {
                wnd.setSystemBarEnable(names).then(() => {
                    console.log('windowTest SetSystemBarEnableTest1 setSystemBarEnable success');
                    expect(TRUE_WINDOW).assertTrue();
                    done();
                }, (err) => {
                    console.log('windowTest SetSystemBarEnableTest1 setSystemBarEnable failed, err :' + JSON.stringify(err));
                    expect().assertFail();
                    done();
                })
            }, (err) => {
                console.log('windowTest SetSystemBarEnableTest1 setLayoutFullScreen failed, err :' + JSON.stringify(err));
                expect().assertFail();
                done();
            })
        }, (err) => {
            console.log('windowTest SetSystemBarEnableTest1 getTopWindow failed, err :' + JSON.stringify(err));
            expect().assertFail();
            done();
        })
    })


    /**
     * @tc.number    SUB_WMS_SETSYSTEMBARENABLE_JSAPI_002
     * @tc.name      Test setSystemBarEnable_Test_002
     * @tc.desc      To verify the function of setting a scenario that is visible to the system bar
     */
    it('setSystemBarEnable_Test_002', 0, async function (done) {
        console.log('windowTest SetSystemBarEnableTest2 begin');
        var names = ["status", "navigation"];
        window.getTopWindow((err, data) => {
            if (err.code != 0) {
                console.log('windowTest SetSystemBarEnableTest2 getTopWindow fail: ' + JSON.stringify(err));
                expect().assertFail();
                done();
            } else {
                expect(data != null).assertTrue();
                data.setSystemBarEnable(names, (err) => {
                    if (err.code != 0) {
                        console.log('windowTest SetSystemBarEnableTest2 getTopWindow fail' + JSON.stringify(err));
                        expect().assertFail();
                        done();
                    } else {
                        console.log('windowTest SetSystemBarEnableTest2 setSystemBarEnable success');
                        expect(TRUE_WINDOW).assertTrue();
                        done();
                    }
                })
            }
        })
    })

    /**
     * @tc.number		SUB_WMS_SETSYSTEMBARPROPERTIES_JSAPI_001
     * @tc.name			Test setSystemBarProperties_Test_001
     * @tc.desc			To verify the function of setting system bar attributes
     */
    it('setSystemBarProperties_Test_001', 0, async function (done) {
        console.log('windowTest SetSystemBarPropertiesTest1 begin');
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
                console.log('windowTest SetSystemBarPropertiesTest1 setSystemBarProperties success ');
                expect(TRUE_WINDOW).assertTrue();
                done();
            },(err) => {
                console.log('windowTest SetSystemBarPropertiesTest1 setSystemBarProperties failed, err :' + JSON.stringify(err));
                expect().assertFail();
                done();
            })
        },(err) => {
            console.log('windowTest SetSystemBarPropertiesTest1 getTopWindow failed, err :' + JSON.stringify(err));
            expect().assertFail();
            done();
        })
    })


    /**
     * @tc.number    SUB_WMS_SETSYSTEMBARPROPERTIES_JSAPI_002
     * @tc.name      Test setSystemBarProperties_Test_002
     * @tc.desc      To verify the function of setting system bar attributes
     */
    it('setSystemBarProperties_Test_002', 0, async function (done) {
        console.log('windowTest SetSystemBarPropertiesTest2 begin');
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
                console.log('windowTest SetSystemBarPropertiesTest2 getTopWindow fail: ' + JSON.stringify(err));
                expect().assertFail();
                done();
            } else {
                expect(data != null).assertTrue();
                data.setSystemBarProperties(SystemBarProperties, (err) => {
                    if (err.code != 0) {
                        console.log('windowTest SetSystemBarPropertiesTest2 setSystemBarProperties fail' + JSON.stringify(err));
                        expect().assertFail();
                        done();
                    } else {
                        expect(TRUE_WINDOW).assertTrue();
                        done();
                    }
                })
            }
        })
    })


    /**
     * @tc.number    SUB_WMS_MOVETO_JSAPI_001
     * @tc.name      Test move_Test_001
     * @tc.desc      Verify the scene where the window moves
     */
    it('move_Test_001', 0, function (done) {
        console.log('windowTest moveTest1 begin');
        window.getTopWindow().then(wnd => {
            console.log('windowTest moveTest1 getTopWindow wnd' + wnd);
            expect(wnd != null).assertTrue();
            wnd.moveTo(200, 200, (err) => {
                if (err.code) {
                    console.log('windowTest moveTest1 moveTo callback fail' + JSON.stringify(err.code));
                    expect(err.code).assertEqual(170);
                    done();
                } else {
                    console.log('windowTest moveTest1 moveTo callback success');
                    expect(TRUE_WINDOW).assertTrue();
                    done();
                }
            })
        })
    })
    /**
    * @tc.number     SUB_WMS_MOVETO_JSAPI_002
    * @tc.name       Test move_Test_002
    * @tc.desc       Verify the scene where the window moves
    */
    it('move_Test_002', 0, async function (done) {
        console.log('windowTest moveTest2 begin');
        window.getTopWindow().then(wnd => {
            console.log('windowTest moveTest2 getTopWindow wnd: ' + wnd);
            expect(wnd != null).assertTrue();
            wnd.moveTo(100, 100).then(() => {
                console.log('windowTest moveTest2 wnd.moveTo success');
                expect(TRUE_WINDOW).assertTrue();
                done();
            }, (err) => {
                console.log('windowTest moveTest2 wnd.moveTo failed, err :' + JSON.stringify(err));
                expect(err.code).assertEqual(170);
                done();
            })
        }, (err) => {
            console.log('windowTest moveTest2 getTopWindow failed, err :' + JSON.stringify(err));
            expect().assertFail();
            done();
        })
    })

    /**
    * @tc.number     SUB_WMS_MOVETO_JSAPI_003
    * @tc.name       Test move_Test_003
    * @tc.desc       Verify the scene where the window moves
    */
    it('move_Test_003', 0, async function (done) {
        console.log('windowTest moveTest3 begin');
        window.getTopWindow().then(wnd => {
            console.log('windowTest moveTest3 getTopWindow wnd: ' + wnd);
            expect(wnd != null).assertTrue();
            wnd.moveTo(20000, 20000).then(() => {
                console.log('windowTest moveTest3 wnd.moveTo success');
                expect(TRUE_WINDOW).assertTrue();
                done();
            }, (err) => {
                console.log('windowTest moveTest3 wnd.moveTo failed, err :' + JSON.stringify(err));
                expect(err.code).assertEqual(170);
                done();
            })
        }, (err) => {
            console.log('windowTest moveTest3 getTopWindow failed, err :' + JSON.stringify(err));
            expect().assertFail();
            done();
        })
    })

    /**
    * @tc.number     SUB_WMS_MOVETO_JSAPI_004
    * @tc.name       Test move_Test_004
    * @tc.desc       Verify the scene where the window moves
    */
    it('move_Test_004', 0, async function (done) {
        console.log('windowTest moveTest4 begin');
        window.getTopWindow().then(wnd => {
            console.log('windowTest moveTest4 getTopWindow wnd: ' + wnd);
            expect(wnd != null).assertTrue();
            wnd.moveTo(-200, -200).then(() => {
                console.log('windowTest moveTest4 wnd.moveTo success');
                expect(TRUE_WINDOW).assertTrue();
                done();
            }, (err) => {
                console.log('windowTest moveTest4 wnd.moveTo failed, err :' + JSON.stringify(err));
                expect(err.code).assertEqual(170);
                done();
            })
        }, (err) => {
            console.log('windowTest moveTest4 getTopWindow failed, err :' + JSON.stringify(err));
            expect().assertFail();
            done();
        })
    })

    /**
    * @tc.number     SUB_WMS_MOVETO_JSAPI_005
    * @tc.name       Test move_Test_005
    * @tc.desc       Verify that the window is moved into the normal scene
    */
    it('move_Test_005', 0, async function (done) {
        console.log('windowTest moveTest5 begin');
        window.getTopWindow().then(wnd => {
            console.log('windowTest moveTest5 getTopWindow wnd: ' + wnd);
            expect(wnd != null).assertTrue();
            for (var i = 1; i <= 5; i++) {
                wnd.moveTo(100, 100).then(() => {
                    expect(TRUE_WINDOW).assertTrue();
                    done();
                }, (err) => {
                    console.log('windowTest moveTest5 wnd.moveTo failed, err :' + JSON.stringify(err));
                    expect(err.code).assertEqual(170);
                    done();
                })
            }
        }, (err) => {
            console.log('windowTest moveTest5 getTopWindow failed, err :' + JSON.stringify(err));
            expect().assertFail();
            done();
        })
    })

    /**
    * @tc.number     SUB_WMS_MOVETO_JSAPI_006
    * @tc.name       Test move_Test_006
    * @tc.desc       Verify the scene where the window moves
    */
    it('move_Test_006', 0, async function (done) {
        console.log('windowTest moveTest6 begin');
        window.getTopWindow().then(wnd => {
            console.log('windowTest moveTest6 getTopWindow wnd: ' + wnd);
            expect(wnd != null).assertTrue();
            wnd.moveTo(-200, -200, (err) => {
                if (err) {
                    console.log('windowTest moveTest6 wnd.moveTo failed, err :' + JSON.stringify(err));
                    expect(err.code).assertEqual(170);
                    done();
                } else {
                    console.log('windowTest moveTest6 wnd.moveTo success');
                    expect(TRUE_WINDOW).assertTrue();
                    done();
                }
            })
        }, (err) => {
            console.log('windowTest moveTest6 getTopWindow failed, err :' + JSON.stringify(err));
            expect().assertFail();
            done();
        })
    })

    /**
	* @tc.number    SUB_WMS_MOVETO_JSAPI_007
	* @tc.name      Test move_Test_007
	* @tc.desc      Verify the scene where the window moves
	*/
    it('move_Test_007', 0, async function (done) {
        console.log('windowTest moveTestNegative begin');
        window.getTopWindow().then(wnd => {
            console.log('windowTest moveTestNegative getTopWindow wnd: ' + wnd);
            expect(wnd != null).assertTrue();
            wnd.moveTo(-200, -200).then(() => {
                console.log('moveTo(-200,-200) success');
                expect(TRUE_WINDOW).assertTrue();
                done();
            }, (err) => {
                console.log('windowTest moveTestNegative moveTo failed, err :' + JSON.stringify(err));
                expect(err.code).assertEqual(170);
                done();
            })
        }, (err) => {
            console.log('windowTest moveTestNegative getTopWindow failed, err :' + JSON.stringify(err));
            expect().assertFail();
            done();
        })
    })

    /**
	* @tc.number    SUB_WMS_MOVETO_JSAPI_008
	* @tc.name      Test move_Test_008
	* @tc.desc      Verify the scene where the window moves
	*/
    it('move_Test_008', 0, async function (done) {
        console.log('windowTest moveTest8 begin');
        window.getTopWindow().then(wnd => {
            console.log('windowTest moveTest8 getTopWindow wnd: ' + wnd);
            expect(wnd != null).assertTrue();
            wnd.moveTo(-200, 200).then(() => {
                wnd.moveTo(200, -300).then(() => {
                    expect(TRUE_WINDOW).assertTrue();
                    done();
                }, (err) => {
                    console.log('windowTest moveTest8 create failed, err :' + JSON.stringify(err));
                    expect(err.code).assertEqual(170);
                    done();
                })
            }, (err) => {
                console.log('windowTest moveTest8 create failed, err :' + JSON.stringify(err));
                expect(err.code).assertEqual(170);
                done();
            })
        }, (err) => {
            console.log('windowTest moveTest8 create failed, err :' + JSON.stringify(err));
            expect().assertFail();
            done();
        })
    })

    /**
    * @tc.number     SUB_WMS_RESETSIZE_JSAPI_001
    * @tc.name       Test resetSize_Test_001
    * @tc.desc       Verify the scene where the window resets size
    */
    it('resetSize_Test_001', 0, async function (done) {
        console.log('windowTest resetSizeTest1 begin');
        window.getTopWindow().then(wnd => {
            console.log('windowTest resetSizeTest1 getTopWindow wnd: ' + wnd);
            expect(wnd != null).assertTrue();
            wnd.resetSize(200, 600).then(() => {
                console.log('windowTest resetSizeTest1 wnd.resetSize(200, 600) success');
                expect(TRUE_WINDOW).assertTrue();
                done();
            }, (err) => {
                console.log('windowTest resetSizeTest1 wnd.resetSize failed, err :' + JSON.stringify(err));
                expect(err.code).assertEqual(170);
                done();
            })
        }, (err) => {
            console.log('windowTest resetSizeTest1 getTopWindow failed, err :' + JSON.stringify(err));
            expect().assertFail();
            done();
        })
    })

    /**
    * @tc.number     SUB_WMS_RESETSIZE_JSAPI_002
    * @tc.name       Test resetSize_Test_002
    * @tc.desc       Verify the scene where the window resets size
    */
    it('resetSize_Test_002', 0, async function (done) {
        console.log('windowTest resetSizeTest2 begin');
        window.getTopWindow().then(wnd => {
            console.log('windowTest resetSizeTest2 getTopWindow wnd: ' + wnd);
            expect(wnd != null).assertTrue();
            wnd.resetSize(20000, 20000).then(() => {
                console.log('windowTest resetSizeTest2 wnd.resetSize(20000, 20000) success');
                expect(TRUE_WINDOW).assertTrue();
                done();
            }, (err) => {
                console.log('windowTest resetSizeTest2 wnd.resetSize failed, err :' + JSON.stringify(err));
                expect(err.code).assertEqual(170);
                done();
            })
        }, (err) => {
            console.log('windowTest resetSizeTest2 getTopWindow failed, err :' + JSON.stringify(err));
            expect().assertFail();
            done();
        })
    })

    /**
    * @tc.number     SUB_WMS_RESETSIZE_JSAPI_003
    * @tc.name       Test resetSize_Test_003
    * @tc.desc       Verify the scene where the window resets size
    */
    it('resetSize_Test_003', 0, async function (done) {
        console.log('windowTest resetSizeTest3 begin');
        window.getTopWindow().then(wnd => {
            console.log('windowTest resetSizeTest3 getTopWindow wnd: ' + wnd);
            expect(wnd != null).assertTrue();
            wnd.resetSize(0, 0).then(() => {
                console.log('windowTest resetSizeTest3 wnd.resetSize(0, 0) success');
                expect(TRUE_WINDOW).assertTrue();
                done();
            }, (err) => {
                console.log('windowTest resetSizeTest3 wnd.resetSize failed, err :' + JSON.stringify(err));
                expect(err.code).assertEqual(170);
                done();
            })
        }, (err) => {
            console.log('windowTest resetSizeTest3 getTopWindow failed, err :' + JSON.stringify(err));
            expect().assertFail();
            done();
        })
    })

    /**
    * @tc.number     SUB_WMS_RESETSIZE_JSAPI_004
    * @tc.name       Test resetSize_Test_004
    * @tc.desc       Verify the scene where the window resets size
    */
    it('resetSize_Test_004', 0, async function (done) {
        console.log('windowTest resetSizeTest4 begin');
        window.getTopWindow().then(wnd => {
            console.log('windowTest resetSizeTest4 getTopWindow wnd: ' + wnd);
            expect(wnd != null).assertTrue();
            wnd.resetSize(-1, -1).then(() => {
                console.log('windowTest resetSizeTest4 wnd.resetSize(-1, -1) success');
                expect(TRUE_WINDOW).assertTrue();
                done();
            }, (err) => {
                console.log('windowTest resetSizeTest4 wnd.resetSize failed, err :' + JSON.stringify(err));
                expect(err.code).assertEqual(170);
                done();
            })
        }, (err) => {
            console.log('windowTest resetSizeTest4 getTopWindow failed, err :' + JSON.stringify(err));
            expect().assertFail();
            done();
        })
    })

    /**
    * @tc.number     SUB_WMS_RESETSIZE_JSAPI_005
    * @tc.name       Test resetSize_Test_005
    * @tc.desc       Verify the scene where the window resets size
    */
    it('resetSize_Test_005', 0, async function (done) {
        console.log('windowTest resetSizeTest5 begin');
        window.getTopWindow().then(wnd => {
            console.log('windowTest resetSizeTest5 getTopWindow wnd: ' + wnd);
            expect(wnd != null).assertTrue();
            for (var i = 1; i <= 5; i++) {
                wnd.resetSize(100, 100).then(() => {
                    console.log('windowTest resetSizeTest5 wnd.resetSize(100, 100) success, count:"%d\n"', i);
                    expect(TRUE_WINDOW).assertTrue();
                    done();
                },(err) => {
                    console.log('windowTest resetSizeTest5 wnd.resetSize failed, err :' + JSON.stringify(err));
                    expect(err.code).assertEqual(170);
                    done();
                })
            }
        }, (err) => {
            console.log('windowTest resetSizeTest5 getTopWindow failed, err :' + JSON.stringify(err));
            expect().assertFail();
            done();
        })
    })

    /**
     * @tc.number    SUB_WMS_RESETSIZETEST_JSAPI_006
     * @tc.name      Test resetSize_Test_006
     * @tc.desc      Verify the scene where the window resets size
     */
    it('resetSize_Test_006', 0, function (done) {
        console.log('windowTest ResetSizeTest6 begin');
        window.getTopWindow().then(wnd => {
            console.log('windowTest ResetSizeTest6 getTopWindow wnd: ' + wnd);
            expect(wnd != null).assertTrue();
            wnd.resetSize(200, 200, (err) => {
                if (err.code) {
                    console.log('windowTest ResetSizeTest6 resetSize callback fail' + JSON.stringify(err.code));
                    expect(err.code).assertEqual(170);
                    done();
                } else {
                    console.log('windowTest ResetSizeTest6 resetSize callback success');
                    expect(TRUE_WINDOW).assertTrue();
                    done();
                }
            })
        })
    })

    /**
	* @tc.number    SUB_WMS_RESETSIZE_JSAPI_007
	* @tc.name      Test resetSize_Test_007
	* @tc.desc      Verify the scene where the window resets size
	*/
    it('resetSize_Test_007', 0, async function (done) {
        var width = 100;
        var height = 100;
        console.log('windowTest resetSizeLoop begin');
        window.getTopWindow().then(wnd => {
            console.log('windowTest resetSizeLoop getTopWindow wnd: ' + wnd);
            expect(wnd != null).assertTrue();
            for (let i = 1; i <= 5; i++) {
                width = width * i;
                height = height * i;
                wnd.resetSize(width, height).then(() => {
                    console.log('windowTest  resetSizeTestLoop success');
                    expect(TRUE_WINDOW).assertTrue();
                    done();
                },(err) => {
                    console.log('windowTest resetSizeLoop resetSize failed, err :' + JSON.stringify(err));
                    expect(err.code).assertEqual(170);
                    done();
                })
            }
        },(err) => {
            console.log('windowTest resetSizeLoop getTopWindow failed, err :' + JSON.stringify(err));
            expect().assertFail();
            done();
        })
    })

    /**
    * @tc.number     SUB_WMS_GETTOPWINDOW_JSAPI_001
    * @tc.name       Test getTopWindow_Test_001
    * @tc.desc       Verify the scene that gets the top window
    */
    it('getTopWindow_Test_001', 0, async function (done) {
        console.log('windowTest getTopWindowTest1 begin');
        window.getTopWindow().then(wnd => {
            console.log('windowTest getTopWindowTest1 wnd: ' + wnd);
            expect(wnd != null).assertTrue();
            done();
        },(err) => {
            console.log('windowTest getTopWindowTest1 getTopWindow failed, err :' + JSON.stringify(err));
            expect().assertFail();
            done();
        })
    })

    /**
     * @tc.number		SUB_WMS_SETSCREENACTIVEMODE_JSAPI_001
     * @tc.name			Test setScreenActiveMode_Test_001.
     * @tc.desc			To set the function of setting screen parameters
     */
    it('setScreenActiveMode_Test_001', 0, async function (done) {
        console.log('screenshotTest setScreenActiveModeTest1 begin');
        screen.getAllScreens().then(src => {
            console.log('screenshotTest setScreenActiveModeTest1 getAllScreen src' + src);
            expect(src[0] != null).assertTrue();
            let screenIndex = src[0];
            screenIndex.setScreenActiveMode(0).then(() => {
                console.log('screenshotTest setScreenActiveModeTest1 setScreenActiveMode 0 success ');
                expect(TRUE_WINDOW).assertTrue()
                done();
            },(err) => {
                console.log('screenshotTest setScreenActiveModeTest1 setScreenActiveMode 0 failed: err' + JSON.stringify(err));
                expect().assertFail();
                done();
            })
        }, (err) => {
            console.log('screenshotTest setScreenActiveModeTest1 failed: err: ' + JSON.stringify(err));
            done();
        })
    })

    /**
     * @tc.number		SUB_WMS_SETSCREENACTIVEMODE_JSAPI_002
     * @tc.name			Test setScreenActiveMode_Test_002.
     * @tc.desc			To set the function of screen parameters to abnormal values.
     */
    it('setScreenActiveMode_Test_002', 0, async function (done) {
        console.log('screenshotTest setScreenActiveModeTest2 begin');
        screen.getAllScreens().then(src => {
            console.log('screenshotTest setScreenActiveModeTest2 getAllScreen src' + src);
            expect(src[0] != null).assertTrue();
            let screenIndex = src[0];
            screenIndex.setScreenActiveMode(-5).then(res => {
                console.log('screenshotTest setScreenActiveModeTest2 setScreenActiveMode -5 res: ' + res);
                expect().assertFail();
                done();
            },(err) => {
                console.log('screenshotTest setScreenActiveModeTest2 setScreenActiveMode -5 failed: err' + JSON.stringify(err));
                expect(err.code).assertEqual(-1);
                done();
            })
        })
    })

    /**
     * @tc.number		SUB_WMS_ENUM_WINDOWSTAGEEVENTTYPE_JSAPI_001
     * @tc.name			Test enumWindowStageEventType_Test_001.
     * @tc.desc			To test the enum value of WindowStageEventType.
     */
    it('enumWindowStageEventType_Test_001', 0, async function (done) {
        console.log('test the enum value of WindowStageEventType begin');
        try {
            expect(1).assertEqual(window.WindowStageEventType.FOREGROUND);
            expect(2).assertEqual(window.WindowStageEventType.ACTIVE);
            expect(3).assertEqual(window.WindowStageEventType.INACTIVE);
            expect(4).assertEqual(window.WindowStageEventType.BACKGROUND);
            done();
        } catch (err) {
            console.log('test enum value of windowStageEventType error ' + JSON.stringify(err));
        }
    })

    /**
     * @tc.number		SUB_WMS_ENUM_WINDOWTYPE_JSAPI_001
     * @tc.name			Test enumWindowType_Test_001.
     * @tc.desc			To test the enum value of WindowType.
     */
    it('enumWindowType_Test_001', 0, async function (done) {
        console.log('windowTest the enum value of Window begin');
        try {
            expect(0).assertEqual(window.WindowType.TYPE_APP);
            expect(1).assertEqual(window.WindowType.TYPE_SYSTEM_ALERT);
            done();
        } catch (err) {
            console.log('windowTest enum value of WindowType error ' + JSON.stringify(err));
        }
    })

    /**
    * @tc.number		SUB_WMS_ENUM_WINDOWCOLORSPACE_JSAPI_001
    * @tc.name			Test enumWindowCOLORSPACE_Test_001.
    * @tc.desc			To test the enum value of WindowCOLORSPACE.
    */
    it('enumWindowCOLORSPACE_Test_001', 0, async function (done) {
        console.log('test the enum value of Window colorspace begin');
        try {
            expect(0).assertEqual(window.ColorSpace.DEFAULT);
            expect(1).assertEqual(window.ColorSpace.WIDE_GAMUT);
            done();
        } catch (err) {
            console.log('test enum value of window colorspace error ' + JSON.stringify(err));
        }
    })

    /**
     * @tc.number	SUB_WMS_ENUM_WINDOWPROTERTIES_JSAPI_001
     * @tc.name	    Test enumWindowProperties_Test_001.
     * @tc.desc		To test the enum value of WindowProperties.
    */
    it('enumWindowProperties_Test_001', 0, async function (done) {
        console.info('test the enum value of Window Properties begin');
        try {
            var windowP = {
                windowRect : {
                    left:20,
                    top:20,
                    width:20,
                    height:20
                },
                type:0,
                isFullScreen:false,
                isLayoutFullScreen:false,
                focusable:false,
                touchable:false,
                brightness:0.5,
                dimBehindValue:3,
                isKeepScreenOn:false,
                isPrivacyMode:false,
                isRoundCorner:false,
                isTransparent:false
            }
            expect(20).assertEqual(windowP.windowRect.left);
            expect(20).assertEqual(windowP.windowRect.top);
            expect(20).assertEqual(windowP.windowRect.width);
            expect(20).assertEqual(windowP.windowRect.height);
            expect(0).assertEqual(windowP.type);
            expect(!windowP.isFullScreen).assertTrue();
            expect(!windowP.isLayoutFullScreen).assertTrue();
            expect(!windowP.focusable).assertTrue();
            expect(!windowP.touchable).assertTrue();
            expect(0.5).assertEqual(windowP.brightness);
            expect(3).assertEqual(windowP.dimBehindValue);
            expect(!windowP.isKeepScreenOn).assertTrue();
            expect(!windowP.isPrivacyMode).assertTrue();
            expect(!windowP.isRoundCorner).assertTrue();
            expect(!windowP.isTransparent).assertTrue();
            done();
        } catch (err) {
            console.error('test enum value of windowproperties error ' + JSON.stringify(err));
            expect.assertFail();
            done();
        }
    })

    /**
     * @tc.number		SUB_WMS_SETFOCUSABLE_JSAPI_001
     * @tc.name			Test setFocusable_Test_001
     * @tc.desc			Setting window focus acquisition and defocus
     */
    it('setFocusable_Test_001', 0, function (done) {
        console.log('windowTest setFocusableTest1 begin');
        window.getTopWindow().then(wnd => {
            console.log('windowTest setFocusableTest1 getTopWindow wnd' + wnd);
            expect(wnd != null).assertTrue();
            wnd.getProperties().then(data => {
                expect(data.focusable).assertTrue();
                wnd.setFocusable(false).then(() => {
                    console.log('windowTest setFocusableTest1 setFocusable(false) success ');
                    wnd.getProperties().then(data => {
                        expect(!data.focusable).assertTrue();
                        wnd.setFocusable(true).then(() => {
                            console.log('windowTest setFocusableTest1 setFocusable(true) success ');
                            expect(TRUE_WINDOW).assertTrue();
                            done();
                        })
                    }, (err) => {
                        console.log('windowTest setFocusableTest1 getProperties failed: err' + JSON.stringify(err));
                        expect().assertFail();
                        done();
                    })
                }, (err) => {
                    console.log('windowTest setFocusableTest1 setFocusable failed: err' + JSON.stringify(err));
                    expect().assertFail();
                    done();
                })
            }, (err) => {
                console.log('windowTest setFocusableTest1 getProperties failed: err' + JSON.stringify(err));
                expect().assertFail();
                done();
            })
        }, (err) => {
            console.log('windowTest setFocusableTest1 getTopWindow failed: err' + JSON.stringify(err));
            expect().assertFail();
            done();
        })
    })

    /**
     * @tc.number		SUB_WMS_SETFOCUSABLE_JSAPI_002
     * @tc.name			Test setFocusable_Test_002
     * @tc.desc			The setting window loses focus and cannot be touched
     */
    it('setFocusable_Test_002', 0, function (done) {
        console.log('windowTest setFocusableTest2 begin');
        window.getTopWindow().then(wnd => {
            console.log('windowTest setFocusableTest2 getTopWindow wnd' + wnd);
            expect(wnd != null).assertTrue();
            wnd.setFocusable(false).then(() => {
                console.log('windowTest setFocusableTest2 setFocusable(false) success ');
                wnd.getProperties().then(data => {
                    expect(!data.focusable).assertTrue();
                    wnd.setTouchable(false).then(() => {
                        console.log('windowTest setFocusableTest2 setTouchable(false) success ');
                        wnd.getProperties().then(data => {
                            expect(!data.touchable).assertTrue();
                            done();
                        }, (err) => {
                            console.log('windowTest setFocusableTest2 getProperties failed: err' + JSON.stringify(err));
                            expect().assertFail();
                            done();
                        })
                    }, (err) => {
                        console.log('windowTest setFocusableTest2 setTouchable failed: err' + JSON.stringify(err));
                        expect().assertFail();
                        done();
                    })
                }, (err) => {
                    console.log('windowTest setFocusableTest2 getProperties failed: err' + JSON.stringify(err));
                    expect().assertFail();
                    done();
                })
            }, (err) => {
                console.log('windowTest setFocusableTest2 setFocusable failed: err' + JSON.stringify(err));
                expect().assertFail();
                done();
            })
        }, (err) => {
            console.log('windowTest setFocusableTest2 getTopWindow failed: err' + JSON.stringify(err));
            expect().assertFail();
            done();
        })
    })

    /**
     * @tc.number		SUB_WMS_SETFOCUSABLE_JSAPI_003
     * @tc.name			Test setFocusable_Test_003
     * @tc.desc			Set the window to lose focus and be touchable
     */
    it('setFocusable_Test_003', 0, function (done) {
        console.log('windowTest setFocusableTest3 begin');
        window.getTopWindow().then(wnd => {
            console.log('windowTest setFocusableTest3 getTopWindow wnd' + wnd);
            expect(wnd != null).assertTrue();
            wnd.setFocusable(false).then(() => {
                console.log('windowTest setFocusableTest3 setFocusable(false) success ');
                wnd.getProperties().then(data => {
                    expect(!data.focusable).assertTrue();
                    wnd.setTouchable(true).then(() => {
                        console.log('windowTest setFocusableTest3 setTouchable(true) success ');
                        wnd.getProperties().then(data => {
                            expect(data.touchable).assertTrue();
                            done();
                        }, (err) => {
                            console.log('windowTest setFocusableTest3 getProperties failed: err' + JSON.stringify(err));
                            expect().assertFail();
                            done();
                        })
                    }, (err) => {
                        console.log('windowTest setFocusableTest3 setTouchable failed: err' + JSON.stringify(err));
                        expect().assertFail();
                        done();
                    })
                }, (err) => {
                    console.log('windowTest setFocusableTest3 getProperties failed: err' + JSON.stringify(err));
                    expect().assertFail();
                    done();
                })
            }, (err) => {
                console.log('windowTest setFocusableTest3 setFocusable failed: err' + JSON.stringify(err));
                expect().assertFail();
                done();
            })
        }, (err) => {
            console.log('windowTest setFocusableTest3 getTopWindow failed: err' + JSON.stringify(err));
            expect().assertFail();
            done();
        })
    })

    /**
     * @tc.number		SUB_WMS_SETFOCUSABLE_JSAPI_004
     * @tc.name			Test setFocusable_Test_004
     * @tc.desc			Setting the window to get focus is not touchable
     */
    it('setFocusable_Test_004', 0, function (done) {
        console.log('windowTest setFocusableTest4 begin');
        window.getTopWindow().then(wnd => {
            console.log('windowTest setFocusableTest4 getTopWindow wnd' + wnd);
            expect(wnd != null).assertTrue();
            wnd.setFocusable(true).then(() => {
                console.log('windowTest setFocusableTest4 setFocusable(true) success ');
                wnd.getProperties().then(data => {
                    expect(data.focusable).assertTrue();
                    wnd.setTouchable(false).then(() => {
                        console.log('windowTest setFocusableTest4 setTouchable(false) success ');
                        wnd.getProperties().then(data => {
                            expect(!data.touchable).assertTrue();
                            done();
                        }, (err) => {
                            console.log('windowTest setFocusableTest4 getProperties failed: err' + JSON.stringify(err));
                            expect().assertFail();
                            done();
                        })
                    }, (err) => {
                        console.log('windowTest setFocusableTest4 setTouchable failed: err' + JSON.stringify(err));
                        expect().assertFail();
                        done();
                    })
                }, (err) => {
                    console.log('windowTest setFocusableTest4 getProperties failed: err' + JSON.stringify(err));
                    expect().assertFail();
                    done();
                })
            }, (err) => {
                console.log('windowTest setFocusableTest4 setFocusable failed: err' + JSON.stringify(err));
                expect().assertFail();
                done();
            })
        }, (err) => {
            console.log('windowTest setFocusableTest4 getTopWindow failed: err' + JSON.stringify(err));
            expect().assertFail();
            done();
        })
    })

    /**
     * @tc.number		SUB_WMS_SETFOCUSABLE_JSAPI_005
     * @tc.name			Test setFocusable_Test_005
     * @tc.desc			Set the window to get focus and touch
     */
    it('setFocusable_Test_005', 0, function (done) {
        console.log('windowTest setFocusableTest5 begin');
        window.getTopWindow().then(wnd => {
            console.log('windowTest setFocusableTest5 getTopWindow wnd' + wnd);
            expect(wnd != null).assertTrue();
            wnd.setFocusable(true).then(() => {
                console.log('windowTest setFocusableTest5 setFocusable(true) success ');
                wnd.getProperties().then(data => {
                    expect(data.focusable).assertTrue();
                    wnd.setTouchable(true).then(() => {
                        console.log('windowTest setFocusableTest5 setTouchable(true) success ');
                        wnd.getProperties().then(data => {
                            expect(data.touchable).assertTrue();
                            done();
                        }, (err) => {
                            console.log('windowTest setFocusableTest5 getProperties failed: err' + JSON.stringify(err));
                            expect().assertFail();
                            done();
                        })
                    }, (err) => {
                        console.log('windowTest setFocusableTest5 setTouchable failed: err' + JSON.stringify(err));
                        expect().assertFail();
                        done();
                    })
                }, (err) => {
                    console.log('windowTest setFocusableTest5 getProperties failed: err' + JSON.stringify(err));
                    expect().assertFail();
                    done();
                })
            }, (err) => {
                console.log('windowTest setFocusableTest5 setFocusable failed: err' + JSON.stringify(err));
                expect().assertFail();
                done();
            })
        }, (err) => {
            console.log('windowTest setFocusableTest5 getTopWindow failed: err' + JSON.stringify(err));
            expect().assertFail();
            done();
        })
    })

    /**
     * @tc.number		SUB_WMS_SETTOUCHABLE_JSAPI_001
     * @tc.name			Test setTouchable_Test_001
     * @tc.desc			Set whether the window can be touched or not
     */
    it('setTouchable_Test_001', 0, function (done) {
        console.log('windowTest setTouchableTest1 begin');
        window.getTopWindow().then(wnd => {
            console.log('windowTest setTouchableTest1 getTopWindow wnd' + wnd);
            expect(wnd != null).assertTrue();
            wnd.getProperties().then(data => {
                expect(data.touchable).assertTrue();
                wnd.setTouchable(false).then(() => {
                    console.log('windowTest setTouchableTest1 setTouchable(false) success ');
                    wnd.getProperties().then(data => {
                        expect(!data.touchable).assertTrue();
                        wnd.setTouchable(true).then(() => {
                            console.log('windowTest setTouchableTest1 setTouchable(true) success ');
                            wnd.getProperties().then(data => {
                                expect(data.touchable).assertTrue();
                                done();
                            }, (err) => {
                                console.log('windowTest setTouchableTest1 getProperties failed: err' + JSON.stringify(err));
                                expect().assertFail();
                                done();
                            })
                        }, (err) => {
                            console.log('windowTest setTouchableTest1 setTouchable failed: err' + JSON.stringify(err));
                            expect().assertFail();
                            done();
                        })
                    }, (err) => {
                        console.log('windowTest setTouchableTest1 getProperties failed: err' + JSON.stringify(err));
                        expect().assertFail();
                        done();
                    })
                }, (err) => {
                    console.log('windowTest setTouchableTest1 setTouchable failed: err' + JSON.stringify(err));
                    expect().assertFail();
                    done();
                })
            }, (err) => {
                console.log('windowTest setTouchableTest1 getProperties failed: err' + JSON.stringify(err));
                expect().assertFail();
                done();
            })
        }, (err) => {
            console.log('windowTest setTouchableTest1 getTopWindow failed: err' + JSON.stringify(err));
            expect().assertFail();
            done();
        })
    })

    /**
     * @tc.number		SUB_WMS_SETKEEPSCREENON_JSAPI_001
     * @tc.name			Test setKeepScreenOn_Test_001
     * @tc.desc			Set whether the window can be touched or not
     */
    it('setKeepScreenOn_Test_001', 0, function (done) {
        console.log('windowTest setKeepScreenOnTest1 begin');
        window.getTopWindow().then(wnd => {
            console.log('windowTest setKeepScreenOnTest1 getTopWindow wnd' + wnd);
            expect(wnd != null).assertTrue();
            wnd.getProperties().then(data => {
                expect(!data.isKeepScreenOn).assertTrue();
                wnd.setKeepScreenOn(true).then(() => {
                    console.log('windowTest setKeepScreenOnTest1 setKeepScreenOn(true) success ');
                    wnd.getProperties().then(data => {
                        expect(data.isKeepScreenOn).assertTrue();
                        wnd.setKeepScreenOn(false).then(() => {
                            console.log('windowTest setKeepScreenOnTest1 setKeepScreenOn(false) success ');
                            wnd.getProperties().then(data => {
                                expect(!data.isKeepScreenOn).assertTrue();
                                done();
                            }, (err) => {
                                console.log('windowTest setKeepScreenOnTest1 getProperties failed: err' + JSON.stringify(err));
                                expect().assertFail();
                                done();
                            })
                        }, (err) => {
                            console.log('windowTest setKeepScreenOnTest1 setKeepScreenOn failed: err' + JSON.stringify(err));
                            expect().assertFail();
                            done();
                        })
                    }, (err) => {
                        console.log('windowTest setKeepScreenOnTest1 getProperties failed: err' + JSON.stringify(err));
                        expect().assertFail();
                        done();
                    })
                }, (err) => {
                    console.log('windowTest setKeepScreenOnTest1 setKeepScreenOn failed: err' + JSON.stringify(err));
                    expect().assertFail();
                    done();
                })
            }, (err) => {
                console.log('windowTest setKeepScreenOnTest1 getProperties failed: err' + JSON.stringify(err));
                expect().assertFail();
                done();
            })
        }, (err) => {
            console.log('windowTest setKeepScreenOnTest1 getTopWindow failed: err' + JSON.stringify(err));
            expect().assertFail();
            done();
        })
    })

    /**
     * @tc.number		SUB_WMS_SETKEEPSCREENON_JSAPI_002
     * @tc.name			Test setKeepScreenOn_Test_002
     * @tc.desc			Set whether the window can be touched or not
     */
    it('setKeepScreenOn_Test_002', 0, function (done) {
        console.log('windowTest setKeepScreenOnTest2 begin');
        window.getTopWindow().then(wnd => {
            console.log('windowTest setKeepScreenOnTest2 getTopWindow wnd' + wnd);
            expect(wnd != null).assertTrue();
            for (let i = 0; i < 5; i++) {
                wnd.getProperties().then(data => {
                    expect(!data.isKeepScreenOn).assertTrue();
                    wnd.setKeepScreenOn(true).then(() => {
                        console.log('windowTest setKeepScreenOnTest2 setKeepScreenOn(true) success ');
                        wnd.getProperties().then(data => {
                            expect(data.touchable).assertTrue();
                            wnd.setKeepScreenOn(false).then(() => {
                                console.log('windowTest setKeepScreenOnTest2 setKeepScreenOn(false) success ');
                                wnd.getProperties().then(data => {
                                    expect(!data.touchable).assertTrue();
                                }, (err) => {
                                    console.log('windowTest setKeepScreenOnTest2 getProperties failed: err' + JSON.stringify(err));
                                    expect().assertFail();
                                    done();
                                })
                            }, (err) => {
                                console.log('windowTest setKeepScreenOnTest2 setKeepScreenOn failed: err' + JSON.stringify(err));
                                expect().assertFail();
                                done();
                            })
                        }, (err) => {
                            console.log('windowTest setKeepScreenOnTest2 getProperties failed: err' + JSON.stringify(err));
                            expect().assertFail();
                            done();
                        })
                    }, (err) => {
                        console.log('windowTest setKeepScreenOnTest2 setKeepScreenOn failed: err' + JSON.stringify(err));
                        expect().assertFail();
                        done();
                    })
                }, (err) => {
                    console.log('windowTest setKeepScreenOnTest2 getProperties failed: err' + JSON.stringify(err));
                    expect().assertFail();
                    done();
                })
            }
            done();
        }, (err) => {
            console.log('windowTest setKeepScreenOnTest2 getTopWindow failed: err' + JSON.stringify(err));
            expect().assertFail();
            done();
        })
    })

    /**
     * @tc.number		SUB_WMS_SETBACKGROUNDCOLOR_JSAPI_001
     * @tc.name			Test setBackgroundColor_Test_001
     * @tc.desc			Set the window background color to red and Default opacity
     */
    it('setBackgroundColor_Test_001', 0, function (done) {
        console.log('windowTest setBackgroundColorTest1 begin');
        window.getTopWindow().then(wnd => {
            console.log('windowTest setBackgroundColorTest1 getTopWindow wnd' + wnd);
            expect(wnd != null).assertTrue();
            wnd.setBackgroundColor("#ffff00").then(() => {
                console.log('windowTest setBackgroundColorTest1 setBrightness(#ffff00) success ');
                wnd.getProperties().then(data => {
                    expect(!data.isTransparent).assertTrue();
                    done();
                }, (err) => {
                    console.log('windowTest setBackgroundColorTest1 getProperties failed: err' + JSON.stringify(err));
                    expect().assertFail();
                    done();
                })
            }, (err) => {
                console.log('windowTest setBackgroundColorTest1 setBackgroundColor failed: err' + JSON.stringify(err));
                expect().assertFail();
                done();
            })
        }, (err) => {
            console.log('windowTest setBackgroundColorTest1 getTopWindow failed: err' + JSON.stringify(err));
            expect().assertFail();
            done();
        })
    })

    /**
     * @tc.number		SUB_WMS_SETBACKGROUNDCOLOR_JSAPI_002
     * @tc.name			Test setBackgroundColor_Test_002
     * @tc.desc			Set the window background color to red opaque
     */
    it('setBackgroundColor_Test_002', 0, function (done) {
        console.log('windowTest setBackgroundColorTest2 begin');
        window.getTopWindow().then(wnd => {
            console.log('windowTest setBackgroundColorTest2 getTopWindow wnd' + wnd);
            expect(wnd != null).assertTrue();
            wnd.setBackgroundColor("#ffffff00").then(() => {
                console.log('windowTest setBackgroundColorTest2 setBrightness(#ffffff00) success ');
                wnd.getProperties().then(data => {
                    expect(!data.isTransparent).assertTrue();
                    done();
                }, (err) => {
                    console.log('windowTest setBackgroundColorTest2 getProperties failed: err' + JSON.stringify(err));
                    expect().assertFail();
                    done();
                })
            }, (err) => {
                console.log('windowTest setBackgroundColorTest2 setBackgroundColor failed: err' + JSON.stringify(err));
                expect().assertFail();
                done();
            })
        }, (err) => {
            console.log('windowTest setBackgroundColorTest2 getTopWindow failed: err' + JSON.stringify(err));
            expect().assertFail();
            done();
        })
    })

    /**
     * @tc.number		SUB_WMS_SETBACKGROUNDCOLOR_JSAPI_003
     * @tc.name			Test setBackgroundColor_Test_003
     * @tc.desc			Set the window background color to red transparent
     */
    it('setBackgroundColor_Test_003', 0, function (done) {
        console.log('windowTest setBackgroundColorTest3 begin');
        window.getTopWindow().then(wnd => {
            console.log('windowTest setBackgroundColorTest3 getTopWindow wnd' + wnd);
            expect(wnd != null).assertTrue();
            wnd.setBackgroundColor("#00ffff00").then(() => {
                console.log('windowTest setBackgroundColorTest3 setBrightness(#00ffff00) success ');
                wnd.getProperties().then(data => {
                    expect(data.isTransparent).assertTrue();
                    done();
                }, (err) => {
                    console.log('windowTest setBackgroundColorTest3 getProperties failed: err' + JSON.stringify(err));
                    expect().assertFail();
                    done();
                })
            }, (err) => {
                console.log('windowTest setBackgroundColorTest3 setBackgroundColor failed: err' + JSON.stringify(err));
                expect().assertFail();
                done();
            })
        }, (err) => {
            console.log('windowTest setBackgroundColorTest3 getTopWindow failed: err' + JSON.stringify(err));
            expect().assertFail();
            done();
        })
    })

    /**
     * @tc.number		SUB_WMS_SETBACKGROUNDCOLOR_JSAPI_004
     * @tc.name			Test setBackgroundColor_Test_004
     * @tc.desc			Set the background color input parameter as an outlier
     */
    it('setBackgroundColor_Test_004', 0, function (done) {
        console.log('windowTest setBackgroundColorTest4 begin');
        window.getTopWindow().then(wnd => {
            console.log('windowTest setBackgroundColorTest4 getTopWindow wnd' + wnd);
            expect(wnd != null).assertTrue();
            wnd.setBackgroundColor("ff00").then(() => {
                console.log('windowTest setBackgroundColorTest4 setBrightness(#ff00) success ');
                expect().assertFail();
                done();
            }, (err) => {
                console.log('windowTest setBackgroundColorTest4 setBackgroundColor failed: err' + JSON.stringify(err));
                expect(err.code).assertEqual(130);
                done();
            })
        }, (err) => {
            console.log('windowTest setBackgroundColorTest4 getTopWindow failed: err' + JSON.stringify(err));
            expect().assertFail();
            done();
        })
    })

    /**
     * @tc.number		SUB_WMS_SETBACKGROUNDCOLOR_JSAPI_005
     * @tc.name			Test setBackgroundColor_Test_005
     * @tc.desc			Setting window background color input exception ARGB
     */
    it('setBackgroundColor_Test_005', 0, function (done) {
        console.log('windowTest setBackgroundColorTest5 begin');
        window.getTopWindow().then(wnd => {
            console.log('windowTest setBackgroundColorTest5 getTopWindow wnd' + wnd);
            expect(wnd != null).assertTrue();
            wnd.setBackgroundColor("#hhgghhgg").then(() => {
                console.log('windowTest setBackgroundColorTest5 setBrightness(#hhgghhgg) success ');
                expect().assertFail();
                done();
            }, (err) => {
                console.log('windowTest setBackgroundColorTest5 setBackgroundColor failed: err' + JSON.stringify(err));
                expect(err.code).assertEqual(130);
                done();
            })
        }, (err) => {
            console.log('windowTest setBackgroundColorTest5 getTopWindow failed: err' + JSON.stringify(err));
            expect().assertFail();
            done();
        })
    })

    /**
     * @tc.number		SUB_WMS_SETBACKGROUNDCOLOR_JSAPI_006
     * @tc.name			Test setBackgroundColor_Test_006
     * @tc.desc			Setting window background color input exception RGB
     */
    it('setBackgroundColor_Test_006', 0, function (done) {
        console.log('windowTest setBackgroundColorTest6 begin');
        window.getTopWindow().then(wnd => {
            console.log('windowTest setBackgroundColorTest6 getTopWindow wnd' + wnd);
            expect(wnd != null).assertTrue();
            wnd.setBackgroundColor("#gghhkk").then(() => {
                console.log('windowTest setBackgroundColorTest6 setBrightness(#gghhkk) success ');
                expect().assertFail();
                done();
            }, (err) => {
                console.log('windowTest setBackgroundColorTest6 setBackgroundColor failed: err' + JSON.stringify(err));
                expect(err.code).assertEqual(130);
                done();
            })
        }, (err) => {
            console.log('windowTest setBackgroundColorTest6 getTopWindow failed: err' + JSON.stringify(err));
            expect().assertFail();
            done();
        })
    })

    /**
     * @tc.number		SUB_WMS_SETBRIGHTNESS_JSAPI_001
     * @tc.name			Test setBrightness_Test_001
     * @tc.desc			Setting the brightness bar input parameter is normal
     */
    it('setBrightness_Test_001', 0, function (done) {
        console.log('windowTest setBrightnessTest1 begin');
        window.getTopWindow().then(wnd => {
            console.log('windowTest setBrightnessTest1 getTopWindow wnd' + wnd);
            expect(wnd != null).assertTrue();
            wnd.setBrightness(0).then(() => {
                console.log('windowTest setBrightnessTest1 setBrightness(0) success ');
                wnd.getProperties().then(data => {
                    console.log('windowTest setBrightnessTest1 getProperties data ' + data);
                    expect(data.brightness).assertEqual(0);
                    wnd.setBrightness(0.5).then(() => {
                        console.log('windowTest setBrightnessTest1 setBrightness(0.5) success ');
                        wnd.getProperties().then(data => {
                            console.log('windowTest setBrightnessTest1 getProperties data ' + data);
                            expect(data.brightness).assertEqual(0.5);
                            wnd.setBrightness(1).then(() => {
                                console.log('windowTest setBrightnessTest1 setBrightness(1) success ');
                                wnd.getProperties().then(data => {
                                    console.log('windowTest setBrightnessTest1 getProperties data ' + data);
                                    expect(data.brightness).assertEqual(1);
                                    done();
                                }, (err) => {
                                    console.log('windowTest setBrightnessTest1 getProperties failed: err' + JSON.stringify(err));
                                    expect().assertFail();
                                    done();
                                })
                            }, (err) => {
                                console.log('windowTest setBrightnessTest1 setBrightness failed: err' + JSON.stringify(err));
                                expect().assertFail();
                                done();
                            })
                        }, (err) => {
                            console.log('windowTest setBrightnessTest1 getProperties failed: err' + JSON.stringify(err));
                            expect().assertFail();
                            done();
                        })

                    }, (err) => {
                        console.log('windowTest setBrightnessTest1 setBrightness failed: err' + JSON.stringify(err));
                        expect().assertFail();
                        done();
                    })
                }, (err) => {
                    console.log('windowTest setBrightnessTest1 getProperties failed: err' + JSON.stringify(err));
                    expect().assertFail();
                    done();
                })

            }, (err) => {
                console.log('windowTest setBrightnessTest1 setBrightness failed: err' + JSON.stringify(err));
                expect().assertFail();
                done();
            })
        }, (err) => {
            console.log('windowTest setBrightnessTest1 getTopWindow failed: err' + JSON.stringify(err));
            expect().assertFail();
            done();
        })
    })

    /**
     * @tc.number		SUB_WMS_SETBRIGHTNESS_JSAPI_002
     * @tc.name			Test setBrightness_Test_002
     * @tc.desc			Set the brightness bar input parameter to decimal
     */
    it('setBrightness_Test_002', 0, function (done) {
        console.log('windowTest setBrightnessTest2 begin');
        window.getTopWindow().then(wnd => {
            console.log('windowTest setBrightnessTest2 getTopWindow wnd' + wnd);
            expect(wnd != null).assertTrue();
            wnd.setBrightness(0.564789).then(() => {
                console.log('windowTest setBrightnessTest2 setBrightness(0.564789) success ');
                wnd.getProperties().then(data => {
                    console.log('windowTest setBrightnessTest2 getProperties data ' + data);
                    expect(TRUE_WINDOW).assertTrue();
                    done();
                }, (err) => {
                    console.log('windowTest setBrightnessTest2 getProperties failed: err' + JSON.stringify(err));
                    expect().assertFail();
                    done();
                })
            }, (err) => {
                console.log('windowTest setBrightnessTest2 setBrightness failed: err' + JSON.stringify(err));
                expect().assertFail();
                done();
            })
        }, (err) => {
            console.log('windowTest setBrightnessTest2 getTopWindow failed: err' + JSON.stringify(err));
            expect().assertFail();
            done();
        })
    })

    /**
     * @tc.number		SUB_WMS_SETBRIGHTNESS_JSAPI_003
     * @tc.name			Test setBrightness_Test_003
     * @tc.desc			Set the brightness bar input parameter to number max
     */
    it('setBrightness_Test_003', 0, function (done) {
        console.log('windowTest setBrightnessTest3 begin');
        window.getTopWindow().then(wnd => {
            console.log('windowTest setBrightnessTest3 getTopWindow wnd' + wnd);
            expect(wnd != null).assertTrue();
            wnd.setBrightness(Number.MAX_VALUE).then(() => {
                console.log('windowTest setBrightnessTest3 setBrightness(Number.MAX_VALUE) success ');
                expect().assertFail();
                done();
            }, (err) => {
                console.log('windowTest setBrightnessTest3 setBrightness failed: err' + JSON.stringify(err));
                expect(err.code).assertEqual(130);
                done();
            })
        }, (err) => {
            console.log('windowTest setBrightnessTest3 getTopWindow failed: err' + JSON.stringify(err));
            expect().assertFail();
            done();
        })
    })

    /**
     * @tc.number		SUB_WMS_SETBRIGHTNESS_JSAPI_004
     * @tc.name			Test setBrightness_Test_004
     * @tc.desc			Set the brightness bar input parameter to number min
     */
    it('setBrightness_Test_004', 0, function (done) {
        console.log('windowTest setBrightnessTest4 begin');
        window.getTopWindow().then(wnd => {
            console.log('windowTest setBrightnessTest4 getTopWindow wnd' + wnd);
            expect(wnd != null).assertTrue();
            wnd.setBrightness(Number.MIN_VALUE).then(() => {
                console.log('windowTest setBrightnessTest4 setBrightness(Number.MIN_VALUE) success ');
                expect(TRUE_WINDOW).assertTrue();
                done();
            }, (err) => {
                console.log('windowTest setBrightnessTest4 setBrightness failed: err' + JSON.stringify(err));
                expect().assertFail();
                done();
            })
        }, (err) => {
            console.log('windowTest setBrightnessTest4 getTopWindow failed: err' + JSON.stringify(err));
            expect().assertFail();
            done();
        })
    })

    /**
     * @tc.number		SUB_WMS_SETBRIGHTNESS_JSAPI_005
     * @tc.name			Test setBrightness_Test_005
     * @tc.desc			Setting brightness bar input parameter exception
     */
    it('setBrightness_Test_005', 0, function (done) {
        console.log('windowTest setBrightnessTest5 begin');
        window.getTopWindow().then(wnd => {
            console.log('windowTest setBrightnessTest5 getTopWindow wnd' + wnd);
            expect(wnd != null).assertTrue();
            wnd.setBrightness(1.1).then(() => {
                console.log('windowTest setBrightnessTest5 setBrightness(1.1) success ');
                expect().assertFail();
                done();
            }, (err) => {
                console.log('windowTest setBrightnessTest5 setBrightness failed: err' + JSON.stringify(err));
                expect(err.code).assertEqual(130);
                wnd.setBrightness(-0.1).then(() => {
                    console.log('windowTest setBrightnessTest5 setBrightness(-0.1) success ');
                    expect().assertFail();
                    done();
                }, (err) => {
                    console.log('windowTest setBrightnessTest5 setBrightness failed: err' + JSON.stringify(err));
                    expect(err.code).assertEqual(130);
                    done();
                })
            })
        }, (err) => {
            console.log('windowTest setBrightnessTest5 getTopWindow failed: err' + JSON.stringify(err));
            expect().assertFail();
            done();
        })
    })

})
