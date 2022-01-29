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
    var commonRGBColorArr = ['rgb(255,0,0)', 'rgb(0,255,0)', 'rgb(0,0,255)', 'rgb(255,255,255)', 'rgb(0,0,0)', 'rgb(249,0,230)', 'rgb(102,102,102)', 'rgb(255,247,0)'];
    var commonNUMBERColorArr = ['#FF0000', '#00FF00', '#0000FF', '#FFFFFF', '#000000', '#f900e6', '#666666', '#FFF700'];
    var commonKEYColorArr = ['red', 'green', 'blue', 'white', 'black', 'pink', 'grey', 'yellow'];
    var windowTypeArr = [
        'WINDOW_TYPE_APP_MAIN_WINDOW',
        'APP_WINDOW_BASE',
        'APP_WINDOW_END',
        'APP_SUB_WINDOW_BASE',
        'WINDOW_TYPE_MEDIA',
        'WINDOW_TYPE_APP_SUB_WINDOW',
        'APP_SUB_WINDOW_END',
        'SYSTEM_WINDOW_BASE',
        'WINDOW_TYPE_WALLPAPER',
        'ABOVE_APP_SYSTEM_WINDOW_BASE',
        'WINDOW_TYPE_APP_LAUNCHING',
        'WINDOW_TYPE_DOCK_SLICE',
        'WINDOW_TYPE_INCOMING_CALL',
        'WINDOW_TYPE_SEARCHING_BAR',
        'WINDOW_TYPE_SYSTEM_ALARM_WINDOW',
        'WINDOW_TYPE_INPUT_METHOD_FLOAT',
        'WINDOW_TYPE_FLOAT',
        'WINDOW_TYPE_TOAST',
        'WINDOW_TYPE_STATUS_BAR',
        'WINDOW_TYPE_PANEL',
        'WINDOW_TYPE_KEYGUARD',
        'WINDOW_TYPE_VOLUME_OVERLAY',
        'WINDOW_TYPE_NAVIGATION_BAR',
        'WINDOW_TYPE_DRAGGING_EFFECT',
        'WINDOW_TYPE_POINTER',
        'SYSTEM_WINDOW_END'];
    var windowTypeDic = {
        'WINDOW_TYPE_APP_MAIN_WINDOW': 1,
        'APP_WINDOW_BASE': 1,
        'APP_WINDOW_END': 1001,
        'APP_SUB_WINDOW_BASE': 1000,
        'WINDOW_TYPE_MEDIA': 1000,
        'WINDOW_TYPE_APP_SUB_WINDOW': 1001,
        'APP_SUB_WINDOW_END': 1001,
        'SYSTEM_WINDOW_BASE': 2000,
        'WINDOW_TYPE_WALLPAPER': 2000,
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
        'SYSTEM_WINDOW_END': 2114
    }
    var windowStr = 'ohoswindow';
    var windowCount = 3022;
    beforeAll(function () {
        windowTypeArr = Object.keys(windowTypeDic);
    })
    beforeEach(function () {
    })
    afterEach(function () {
        windowCount++;
    })
    afterAll(function () {
    })

    /**
    * @tc.number     SUB_WINDOW_OFF_JSAPI_001
    * @tc.name       Test on
    * @tc.desc       Test window.on API function test.
    */
    it('lintenerOffTest1', 0, function (done) {
        console.log('jsunittest lintenerOffTest1 begin')
        window.create(windowStr + windowCount, 1).then(wnd => {
            console.log('jsunittest lintenerOffTest1 windoe.create wnd: ' + wnd)
            if (wnd) {
                wnd.on('systemBarTintChange', (data) => {
                    console.log('jsunittest lintenerOffTest1 wnd.on systemBarTintChange success, data : ' + JSON.stringify(data));
                }, (err) => {
                    console.log('jsunittest lintenerOffTest1 wnd.on systemBarTintChange failed, err : ' + JSON.stringify(err));
                    assertFail();
                    done();
                })
                wnd.off("systemBarTintChange", (data) => {
                    console.log('jsunittest lintenerOffTest1 wnd.off systemBarTintChange success, data : ' + JSON.stringify(data));
                }, (err) => {
                    console.log('jsunittest lintenerOffTest1 wnd.off systemBarTintChange failed, err : ' + JSON.stringify(err));
                    assertFail();
                    done();
                });
                console.log('jsunittest lintenerOffTest1 begin')
                done()
            } else {
                expect(wnd).assertFail()
            }
        }, (err) => {
            console.log('jsunittest lintenerOffTest1 windoe.create failed, err : ' + JSON.stringify(err));
            assertFail()
            done();
        })
    })

    /**
    * @tc.number     SUB_WINDOW_OFF_JSAPI_002
    * @tc.name       Test on
    * @tc.desc       Test window.on API function test.
    */
    it('lintenerOffTest2', 0, function (done) {
        console.log('jsunittest lintenerOffTest2 begin')
        window.create(windowStr + windowCount, 1).then(wnd => {
            console.log('jsunittest lintenerOffTest2 windoe.create wnd: ' + wnd)
            if (wnd) {
                wnd.on('systemAvoidAreaChange', (data) => {
                    console.log('jsunittest lintenerOffTest2 wnd.on systemAvoidAreaChange success, data : ' + JSON.stringify(data));
                })
                wnd.off("systemBarTintChange", (data) => {
                    console.log('jsunittest lintenerOffTest2 wnd.off systemAvoidAreaChange success, data : ' + JSON.stringify(data));
                })
                console.log('jsunittest lintenerOffTest2 begin')
                done()
            } else {
                expect(wnd).assertFail()
            }
        }, (err) => {
            console.log('jsunittest lintenerOffTest2 windoe.create failed, err : ' + JSON.stringify(err));
            assertFail()
            done();
        })
    })

    /**
    * @tc.number     SUB_WINDOW_OFF_JSAPI_003
    * @tc.name       Test on
    * @tc.desc       Test window.on API function test.
    */
    it('lintenerOffTest3', 0, function (done) {
        console.log('jsunittest lintenerOffTest3 begin')
        window.create(windowStr + windowCount, 1).then(wnd => {
            console.log('jsunittest lintenerOffTest3 windoe.create wnd: ' + wnd)
            if (wnd) {
                wnd.on('systemSizeChange', (data) => {
                    console.log('jsunittest lintenerOffTest3 wnd.on systemSizeChange success, data : ' + JSON.stringify(data));
                })
                wnd.off("systemBarTintChange", (data) => {
                    console.log('jsunittest lintenerOffTest3 wnd.off systemSizeChange success, data : ' + JSON.stringify(data));
                })
                console.log('jsunittest lintenerOffTest3 begin')
                done()
            } else {
                expect(wnd).assertFail()
            }
        }, (err) => {
            console.log('jsunittest lintenerOffTest3 windoe.create failed, err : ' + JSON.stringify(err));
            assertFail()
            done();
        })
    })


    /**
    * @tc.number     SUB_WINDOW_SETSYSTEMBARPROPERTIES_JSAPI_001
    * @tc.name       Test setSystemBarProperties
    * @tc.desc       Test window.setSystemBarProperties API function test.
    */
    it('setSystemBarPropertiesTest1', 0, function (done) {
        console.log('jsunittest setSystemBarPropertiesTest1 begin')
        window.create(windowStr + windowCount, 1).then(wnd => {
            console.log('jsunittest setSystemBarPropertiesTest1 windoe.create wnd: ' + wnd)
            if (wnd) {
                let loopCount = commonRGBColorArr.length;
                for (let i = 0; i < loopCount; i++) {
                    let tempColor = commonRGBColorArr[i];
                    let systemBarProperties = {
                        statusBarColor: tempColor,
                        isStatusBarLightIcon: true,
                        statusBarContentColor: tempColor,
                        navigationBarColor: tempColor,
                        isNavigationBarLightIcon: false,
                        navigationContentColor: tempColor,
                    };
                    wnd.setSystemBarProperties(systemBarProperties).then(() => {
                        console.log('jsunittest setSystemBarPropertiesTest1 wnd.setSystemBarProperties ' + tempColor + ' success');
                        if (i == loopCount - 1) {
                            done();
                        }
                    }, (err) => {
                        console.log('jsunittest setSystemBarPropertiesTest1 wnd.setSystemBarProperties failed, err : ' + JSON.stringify(err));
                        assertFail()
                        done();
                    })
                }
            } else {
                expect(wnd).assertFail()
            }
        }, (err) => {
            console.log('jsunittest setSystemBarPropertiesTest1 windoe.create failed, err : ' + JSON.stringify(err));
            assertFail()
            done();
        })
    })

    /**
    * @tc.number     SUB_WINDOW_SETSYSTEMBARPROPERTIES_JSAPI_002
    * @tc.name       Test setSystemBarProperties
    * @tc.desc       Test window.setSystemBarProperties API function test.
    */
    it('setSystemBarPropertiesTest2', 0, function (done) {
        console.log('jsunittest setSystemBarPropertiesTest2 begin')
        window.create(windowStr + windowCount, 1).then(wnd => {
            console.log('jsunittest setSystemBarPropertiesTest2 windoe.create wnd: ' + wnd)
            if (wnd) {
                let loopCount = commonNUMBERColorArr.length;
                for (let i = 0; i < loopCount; i++) {
                    let tempColor = commonNUMBERColorArr[i];
                    let systemBarProperties = {
                        statusBarColor: tempColor,
                        isStatusBarLightIcon: false,
                        statusBarContentColor: tempColor,
                        navigationBarColor: tempColor,
                        isNavigationBarLightIcon: true,
                        navigationContentColor: tempColor,
                    };
                    wnd.setSystemBarProperties(systemBarProperties).then(() => {
                        console.log('jsunittest setSystemBarPropertiesTest2 wnd.setSystemBarProperties ' + tempColor + ' success');
                        if (i == loopCount - 1) {
                            done();
                        }
                    }, (err) => {
                        console.log('jsunittest setSystemBarPropertiesTest2 wnd.setSystemBarProperties failed, err : ' + JSON.stringify(err));
                        assertFail()
                        done();
                    })
                }
            } else {
                expect(wnd).assertFail()
            }
        }, (err) => {
            console.log('jsunittest setSystemBarPropertiesTest2 windoe.create failed, err : ' + JSON.stringify(err));
            assertFail()
            done();
        })
    })

    /**
    * @tc.number     SUB_WINDOW_SETSYSTEMBARPROPERTIES_JSAPI_003
    * @tc.name       Test setSystemBarProperties
    * @tc.desc       Test window.setSystemBarProperties API function test.
    */
    it('setSystemBarPropertiesTest3', 0, function (done) {
        console.log('jsunittest setSystemBarPropertiesTest3 begin')
        window.create(windowStr + windowCount, 1).then(wnd => {
            console.log('jsunittest setSystemBarPropertiesTest3 windoe.create wnd: ' + wnd)
            if (wnd) {
                let loopCount = commonKEYColorArr.length;
                for (let i = 0; i < loopCount; i++) {
                    let tempColor = commonKEYColorArr[i];
                    let systemBarProperties = {
                        statusBarColor: tempColor,
                        isStatusBarLightIcon: true,
                        statusBarContentColor: tempColor,
                        navigationBarColor: tempColor,
                        isNavigationBarLightIcon: false,
                        navigationContentColor: tempColor,
                    };
                    wnd.setSystemBarProperties(systemBarProperties).then(() => {
                        console.log('jsunittest setSystemBarPropertiesTest3 wnd.setSystemBarProperties ' + tempColor + ' success');
                        if (i == loopCount - 1) {
                            done();
                        }
                    }, (err) => {
                        console.log('jsunittest setSystemBarPropertiesTest3 wnd.setSystemBarProperties failed, err : ' + JSON.stringify(err));
                        assertFail()
                        done();
                    })
                }
            } else {
                expect(wnd).assertFail()
            }
        }, (err) => {
            console.log('jsunittest setSystemBarPropertiesTest3 windoe.create failed, err : ' + JSON.stringify(err));
            assertFail()
            done();
        })
    })

    /**
    * @tc.number     SUB_WINDOW_SETSYSTEMBARPROPERTIES_JSAPI_004
    * @tc.name       Test setSystemBarProperties
    * @tc.desc       Test window.setSystemBarProperties API function test.
    */
    it('setSystemBarPropertiesTest4', 0, function (done) {
        console.log('jsunittest setSystemBarPropertiesTest4 begin')
        window.create(windowStr + windowCount, 1).then(wnd => {
            console.log('jsunittest setSystemBarPropertiesTest4 windoe.create wnd: ' + wnd)
            if (wnd) {
                let systemBarProperties = {
                    statusBarColor: 'rgb(255,0,0)',
                    isStatusBarLightIcon: true,
                    statusBarContentColor: 'rgb(0,255,0)',
                    navigationBarColor: 'rgb(0,0,255)',
                    isNavigationBarLightIcon: true,
                    navigationContentColor: 'rgb(0,255,255)',
                };
                wnd.setSystemBarProperties(systemBarProperties).then(() => {
                    console.log('jsunittest setSystemBarPropertiesTest4 wnd.setSystemBarProperties RGB success');
                    systemBarProperties = {
                        statusBarColor: '#00FFFF',
                        isStatusBarLightIcon: true,
                        statusBarContentColor: '#FF0000',
                        navigationBarColor: '#00FF00',
                        isNavigationBarLightIcon: true,
                        navigationContentColor: '#0000FF',
                    };
                    wnd.setSystemBarProperties(systemBarProperties).then(() => {
                        console.log('jsunittest setSystemBarPropertiesTest4 wnd.setSystemBarProperties NUMBER success');
                        done();
                    }, (err) => {
                        console.log('jsunittest setSystemBarPropertiesTest4 wnd.setSystemBarProperties NUMBER failed, err : ' + JSON.stringify(err));
                        assertFail()
                        done();
                    })
                }, (err) => {
                    console.log('jsunittest setSystemBarPropertiesTest4 wnd.setSystemBarProperties RGB failed, err : ' + JSON.stringify(err));
                    assertFail()
                    done();
                })
            } else {
                expect(wnd).assertFail()
            }
        }, (err) => {
            console.log('jsunittest setSystemBarPropertiesTest4 windoe.create failed, err : ' + JSON.stringify(err));
            assertFail()
            done();
        })
    })

    /**
    * @tc.number     SUB_WINDOW_SETWINDOWTYPE_JSAPI_001
    * @tc.name       Test setWindowType
    * @tc.desc       Test window.setWindowType API function test.
    */
    it('setWindowTypeTest1', 0, function (done) {
        console.log('jsunittest setWindowTypeTest1 begin')
        window.create(windowStr + windowCount, 1).then(wnd => {
            console.log('jsunittest setWindowTypeTest1 windoe.create wnd: ' + wnd)
            if (wnd) {
                let loopCount = windowTypeArr.length;
                for (let i = 0; i < loopCount; i++) {
                    let tempType = windowTypeDic[windowTypeArr[i]];
                    wnd.setWindowType(tempType).then(() => {
                        console.log('jsunittest setWindowTypeTest1 wnd.setWindowType ' + tempType + ' success');
                        wnd.getProperties().then((data) => {
                            console.log('jsunittest setWindowTypeTest1 wnd.getProperties success, data :' + JSON.stringify(data));
                            if (i == loopCount - 1) {
                                done();
                            }
                        })
                    }, (err) => {
                        console.log('jsunittest setWindowTypeTest1 wnd.getProperties failed, err : ' + JSON.stringify(err));
                        assertFail()
                        done();
                    })
                }
            } else {
                expect(wnd).assertFail()
            }
        }, (err) => {
            console.log('jsunittest setWindowTypeTest1 windoe.create failed, err : ' + JSON.stringify(err));
            assertFail()
            done();
        })
    })

    /**
    * @tc.number     SUB_WINDOW_HIDE_SHOW_JSAPI_001
    * @tc.name       Test hide/show
    * @tc.desc       Test window.hide/show API function test.
    */
    it('hideOrShowTest1', 0, function (done) {
        console.log('jsunittest hideOrShowTest1 begin')
        window.create(windowStr + windowCount, 1).then(wnd => {
            console.log('jsunittest hideOrShowTest1 windoe.create wnd: ' + wnd)
            if (wnd) {
                wnd.hide().then(() => {
                    console.log('jsunittest hideOrShowTest1 wnd.hide success');
                    done()
                }, (err) => {
                    console.log('jsunittest hideOrShowTest1 wnd.hide failed, err : ' + JSON.stringify(err));
                    assertFail()
                    done();
                })
            } else {
                expect(wnd).assertFail()
            }
        }, (err) => {
            console.log('jsunittest hideOrShowTest1 windoe.create failed, err : ' + JSON.stringify(err));
            assertFail()
            done();
        })
    })

    /**
    * @tc.number     SUB_WINDOW_HIDE_SHOW_JSAPI_002
    * @tc.name       Test hide/show
    * @tc.desc       Test window.hide/show API function test.
    */
    it('hideOrShowTest2', 0, function (done) {
        console.log('jsunittest hideOrShowTest2 begin')
        window.create(windowStr + windowCount, 1).then(wnd => {
            console.log('jsunittest hideOrShowTest2 windoe.create wnd: ' + wnd)
            if (wnd) {
                wnd.hide().then(() => {
                    console.log('jsunittest hideOrShowTest2 wnd.hide success');
                    wnd.show().then(() => {
                        console.log('jsunittest hideOrShowTest2 wnd.show success');
                        done()
                    }, (err) => {
                        console.log('jsunittest hideOrShowTest2 wnd.show failed, err : ' + JSON.stringify(err));
                        assertFail()
                        done();
                    })
                }, (err) => {
                    console.log('jsunittest hideOrShowTest2 wnd.hide failed, err : ' + JSON.stringify(err));
                    assertFail()
                    done();
                })
            } else {
                expect(wnd).assertFail()
            }
        }, (err) => {
            console.log('jsunittest hideOrShowTest2 windoe.create failed, err : ' + JSON.stringify(err));
            assertFail()
            done();
        })
    })

    /**
    * @tc.number     SUB_WINDOW_DESTROY_JSAPI_001
    * @tc.name       Test destroy
    * @tc.desc       Test window.destroy API function test.
    */
    it('destroyTest1', 0, function (done) {
        console.log('jsunittest destroyTest1 begin')
        window.create(windowStr + windowCount, 1).then(wnd => {
            console.log('jsunittest destroyTest1 windoe.create wnd: ' + wnd)
            if (wnd) {
                wnd.destroy().then(() => {
                    console.log('jsunittest destroyTest1 wnd.destroy success, wnd : ' + JSON.stringify(wnd));
                    done()
                }, (err) => {
                    console.log('jsunittest destroyTest1 wnd.destroy failed, err : ' + JSON.stringify(err));
                    assertFail()
                    done();
                })
            } else {
                expect(wnd).assertFail()
            }
        }, (err) => {
            console.log('jsunittest destroyTest1 windoe.create failed, err : ' + JSON.stringify(err));
            assertFail()
            done();
        })
    })

    /**
    * @tc.number     SUB_WINDOW_LOADCONTENT_JSAPI_001
    * @tc.name       Test loadContent
    * @tc.desc       Test window.loadContent API function test.
    */
    it('loadContentTest1', 0, function (done) {
        console.log('jsunittest loadContentTest1 begin')
        window.create(windowStr + windowCount, 1).then(wnd => {
            console.log('jsunittest loadContentTest1 windoe.create wnd: ' + wnd)
            if (wnd) {
                wnd.loadContent('pages/test01/test01').then((data) => {
                    console.log('jsunittest loadContentTest1 wnd.loadContent pages/test01/test01 success, data : ' + JSON.stringify(data));
                    done()
                }, (err) => {
                    console.log('jsunittest loadContentTest1 wnd.loadContent pages/test01/test01 failed, err : ' + JSON.stringify(err));
                    done();
                })
            } else {
                expect(wnd).assertFail()
            }
        }, (err) => {
            console.log('jsunittest loadContentTest1 windoe.create failed, err : ' + JSON.stringify(err));
            assertFail()
            done();
        })
    })

    /**
    * @tc.number     SUB_WINDOW_LOADCONTENT_JSAPI_002
    * @tc.name       Test loadContent
    * @tc.desc       Test window.loadContent API function test.
    */
    it('loadContentTest2', 0, function (done) {
        console.log('jsunittest loadContentTest2 begin')
        window.create(windowStr + windowCount, 1).then(wnd => {
            console.log('jsunittest loadContentTest2 windoe.create wnd: ' + wnd)
            if (wnd) {
                wnd.loadContent('pages/test02/test02').then((data) => {
                    console.log('jsunittest loadContentTest2 wnd.loadContent pages/test02/test02 success, data : ' + JSON.stringify(data));
                    done()
                }, (err) => {
                    console.log('jsunittest loadContentTest2 wnd.loadContent pages/test02/test02 failed, err : ' + JSON.stringify(err));
                    done();
                })
            } else {
                expect(wnd).assertFail()
            }
        }, (err) => {
            console.log('jsunittest loadContentTest2 windoe.create failed, err : ' + JSON.stringify(err));
            assertFail()
            done();
        })
    })

    /**
    * @tc.number     SUB_WINDOW_LOADCONTENT_JSAPI_003
    * @tc.name       Test loadContent
    * @tc.desc       Test window.loadContent API function test.
    */
    it('loadContentTest3', 0, function (done) {
        console.log('jsunittest loadContentTest3 begin')
        window.create(windowStr + windowCount, 1).then(wnd => {
            console.log('jsunittest loadContentTest3 windoe.create wnd: ' + wnd)
            if (wnd) {
                wnd.loadContent('pages/test03/test03').then((data) => {
                    console.log('jsunittest loadContentTest3 wnd.loadContent pages/test03/test03 success, data : ' + JSON.stringify(data));
                    done()
                }, (err) => {
                    console.log('jsunittest loadContentTest3 wnd.loadContent pages/test03/test03 failed, err : ' + JSON.stringify(err));
                    done();
                })
            } else {
                expect(wnd).assertFail()
            }
        }, (err) => {
            console.log('jsunittest loadContentTest3 windoe.create failed, err : ' + JSON.stringify(err));
            assertFail()
            done();
        })
    })

    /**
    * @tc.number     SUB_WINDOW_LOADCONTENT_JSAPI_004
    * @tc.name       Test loadContent
    * @tc.desc       Test window.loadContent API function test.
    */
    it('loadContentTest4', 0, function (done) {
        console.log('jsunittest loadContentTest4 begin')
        window.create(windowStr + windowCount, 1).then(wnd => {
            console.log('jsunittest loadContentTest4 windoe.create wnd: ' + wnd)
            if (wnd) {
                wnd.loadContent('pages/test04/test04').then((data) => {
                    console.log('jsunittest loadContentTest4 wnd.loadContent pages/test04/test04 success, data : ' + JSON.stringify(data));
                    done()
                }, (err) => {
                    console.log('jsunittest loadContentTest4 wnd.loadContent pages/test04/test04 failed, err : ' + JSON.stringify(err));
                    done();
                })
            } else {
                expect(wnd).assertFail()
            }
        }, (err) => {
            console.log('jsunittest loadContentTest4 windoe.create failed, err : ' + JSON.stringify(err));
            assertFail()
            done();
        })
    })

    /**
    * @tc.number     SUB_WINDOW_GETPROPERTIES_JSAPI_001
    * @tc.name       Test getProperties
    * @tc.desc       Test window.getProperties API function test.
    */
    it('getPropertiesTest1', 0, function (done) {
        console.log('jsunittest getPropertiesTest1 begin')
        window.create(windowStr + windowCount, 1).then(wnd => {
            console.log('jsunittest getPropertiesTest1 windoe.create wnd: ' + wnd)
            if (wnd) {
                wnd.getProperties().then((data) => {
                    console.log('jsunittest getPropertiesTest1 wnd.getProperties success, data : ' + JSON.stringify(data));
                    done()
                }, (err) => {
                    console.log('jsunittest getPropertiesTest1 wnd.getProperties failed, err : ' + JSON.stringify(err));
                    assertFail()
                    done();
                })
            } else {
                expect(wnd).assertFail()
            }
        }, (err) => {
            console.log('jsunittest getPropertiesTest1 windoe.create failed, err : ' + JSON.stringify(err));
            assertFail()
            done();
        })
    })

    /**
    * @tc.number     SUB_WINDOW_FIND_JSAPI_001
    * @tc.name       Test find
    * @tc.desc       Test window.find API function test.
    */
    it('findTest1', 0, function (done) {
        console.log('jsunittest findTest1 begin')
        let windowId = 'ohosfirst'
        window.create(windowId, 1, (wnd) => {
            console.log('jsunittest findTest1 windoe.create wnd: ' + wnd)
            if (wnd) {
                window.find(windowId).then((data) => {
                    console.log('jsunittest findTest1 wnd.find success, data : ' + JSON.stringify(data));
                    done()
                }, (err) => {
                    console.log('jsunittest findTest1 wnd.find failed, err : ' + JSON.stringify(err));
                    assertFail()
                    done();
                })
            } else {
                expect(wnd).assertFail()
            }
        }, (err) => {
            console.log('jsunittest findTest1 windoe.create failed, err : ' + JSON.stringify(err));
            assertFail()
            done();
        })
    })

    /**
    * @tc.number     SUB_WINDOW_FIND_JSAPI_002
    * @tc.name       Test find
    * @tc.desc       Test window.find API function test.
    */
    it('findTest2', 0, function (done) {
        console.log('jsunittest findTest2 begin')
        window.find('nonexist').then((window) => {
            console.log('jsunittest findTest2 wnd.find success, window : ' + JSON.stringify(window));
            done()
        }, (err) => {
            console.log('jsunittest findTest2 wnd.find failed, err : ' + JSON.stringify(err));
            done();
        })
    })

    /**
    * @tc.number     SUB_WINDOW_CREATE_JSAPI_001
    * @tc.name       Test create
    * @tc.desc       Test window.create API function test.
    */
    it('createTest1', 0, function (done) {
        console.log('jsunittest createTest1 begin')
        let loopCount = windowTypeArr.length;
        for (let i = 0; i < loopCount; i++) {
            let tempType = windowTypeDic[windowTypeArr[i]];
            let windId = 'createTest' + i;
            window.create(windId, tempType).then((wnd) => {
                console.log('jsunittest createTest1 window.create ' + tempType + ' success, wnd : ' + JSON.stringify(wnd));
                if (wnd) {
                    wnd.getProperties().then((data) => {
                        console.log('jsunittest createTest1 wnd.getProperties success, data :' + JSON.stringify(data));
                        if (i == loopCount - 1) {
                            done();
                        }
                    }, (err) => {
                        console.log('jsunittest createTest1  wnd.getProperties failed, err : ' + JSON.stringify(err));
                        done();
                    })
                }
            }, (err) => {
                console.log('jsunittest createTest1 wnd.find failed, err : ' + JSON.stringify(err));
                assertFail
                done();
            })
        }
    })

    /**
    * @tc.number     SUB_WINDOW_CREATE_JSAPI_003
    * @tc.name       Test create
    * @tc.desc       Test window.create API function test.
    */
    it('createTest3', 0, function (done) {
        console.log('jsunittest createTest3 begin')
        let windowId = 'sameid'
        window.create(windowId, windowTypeDic[windowTypeArr[0]], (wnd) => {
            console.log('jsunittest createTest3 windoe.create sameid first wnd: ' + wnd)
            window.create(windowId, windowTypeDic[windowTypeArr[0]], (wnd) => {
                console.log('jsunittest createTest3 windoe.create sameid second wnd: ' + wnd)
                done()
            }, (err) => {
                console.log('jsunittest createTest3 windoe.create sameid second failed, err : ' + JSON.stringify(err));
                done();
            })
        }, (err) => {
            console.log('jsunittest createTest3 windoe.create sameid first failed, err : ' + JSON.stringify(err));
            assertFail()
            done();
        })
    })

})