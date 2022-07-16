/*
 * Copyright (C) 2021 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the 'License');
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an 'AS IS' BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

// @ts-nocheck

import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from 'deccjsunit/index'
import systemparameter from '@ohos.systemparameter'

describe('SystemParameterTest', function () {

    console.info('SystemParameterTest start################################start');

    function SetParameter(key, value) {
        let tmp = value;
        if (value === "" || value === undefined) {
            let myDate = new Date();
            tmp = myDate.toLocaleString();
        }

        console.info('SetParameter key ' + key);
        console.info('SetParameter value ' + tmp);
        try {
            systemparameter.setSync(key, tmp);
        } catch (err) {
            expect(ret).assertTrue();
            console.info('SetParameter error: ' + err);
        }
        console.info('SetParameter key' + key + "  end");
    }

    /**
     * @tc.number    SUB_STARTUP_JS_SYSTEM_PARAMETER_0801
     * @tc.name      testWaitPromise01
     * @tc.desc      Waits the value of the attribute with the specified key.
     */
    it('testWaitPromise01', 0, async function (done) {
        console.info('testWaitPromise01 start');
        let ret = false;
        try {
            var parameterInfo = systemparameter.wait("test.wait_param.101", "100", 1);
            parameterInfo.then(function (result) { // timeout
                console.info("testWaitPromise01 test.wait_param.101 success: " + result);
                expect(ret).assertTrue();
            }).catch(function (err) {
                ret = true;
                console.info("testWaitPromise01 test.wait_param.101 error: " + err.code);
                expect(ret).assertTrue();
                done();
            });
        } catch (e) {
            expect(ret).assertTrue();
            console.info("promise get input error: " + e);
        }
        console.info('testWaitPromise01 end');
    })

    /**
     * @tc.number    SUB_STARTUP_JS_SYSTEM_PARAMETER_0802
     * @tc.name      testWaitPromise02
     * @tc.desc      Waits the value of the attribute with the specified key.
     */
    it('testWaitPromise02', 0, async function (done) {
        console.info('testWaitPromise02 start');
        let ret = false;
        try {
            var parameterInfo = systemparameter.wait("test.wait_param.102", "", 1);
            parameterInfo.then(function (result) {  // timeout
                console.info("testWaitPromise02 test.wait_param.102 success: ");
                expect(ret).assertTrue();
                done();
            }).catch(function (err) {
                ret = true;
                console.info("testWaitPromise02 test.wait_param.102 error: " + err.code);
                expect(ret).assertTrue();
                done();
            });
        } catch (e) {
            expect(ret).assertTrue();
            console.info("promise get input error: " + e);
        }
        console.info('testWaitPromise02 end');
    })

    /**
     * @tc.number    SUB_STARTUP_JS_SYSTEM_PARAMETER_0803
     * @tc.name      testWaitPromise03
     * @tc.desc      Waits the value of the attribute with the specified key.
     */
    it('testWaitPromise03', 0, async function (done) {
        console.info('testWaitPromise03 start');
        let ret = false;
        SetParameter("test.wait_param.103", "103");
        try {
            var parameterInfo = systemparameter.wait("test.wait_param.103", "103", 1);
            parameterInfo.then(function (result) { // ok
                ret = true;
                console.info("testWaitPromise03 test.wait_param.103 success: ");
                expect(ret).assertTrue();
                done();
            }).catch(function (err) {
                expect(ret).assertTrue();
                console.info("testWaitPromise03 test.wait_param.103 error: " + err.code);
            });
        } catch (e) {
            expect(ret).assertTrue();
            console.info("promise get input error: " + e);
        }
        console.info('testWaitPromise03 end');
    })

    /**
     * @tc.number    SUB_STARTUP_JS_SYSTEM_PARAMETER_0804
     * @tc.name      testWaitPromise04
     * @tc.desc      Waits the value of the attribute with the specified key.
     */
    it('testWaitPromise04', 0, async function (done) {
        console.info('testWaitPromise04 start');
        let ret = false;
        SetParameter("test.wait_param.104", "104");
        try {
            var parameterInfo = systemparameter.wait("test.wait_param.104", "*", 1);
            parameterInfo.then(function (result) { // ok
                ret = true;
                console.info("testWaitPromise04 test.wait_param.104 success");
                expect(ret).assertTrue();
                done();
            }).catch(function (err) {
                console.info("testWaitPromise04 test.wait_param.104 error: " + err.code);
                expect(ret).assertTrue();
            });
        } catch (e) {
            expect(ret).assertTrue();
            console.info("promise get input error: " + e);
        }
        console.info('testWaitPromise04 end');
    })

    /**
     * @tc.number    SUB_STARTUP_JS_SYSTEM_PARAMETER_0805
     * @tc.name      testWaitPromise05
     * @tc.desc      Waits the value of the attribute with the specified key.
     */
    it('testWaitPromise05', 0, async function (done) {
        console.info('testWaitPromise05 start');
        let ret = false;
        SetParameter("test.wait_param.105", "105");
        try {
            var parameterInfo = systemparameter.wait("test.wait_param.105", "*", -1);
            parameterInfo.then(function (result) {
                ret = true;
                console.info("testWaitPromise05 test.wait_param.105 success");
                expect(ret).assertTrue();
                done();
            }).catch(function (err) {
                console.info("testWaitPromise05 test.wait_param.105 error: " + err.code);
                expect(ret).assertTrue();
            });
        } catch (e) {
            expect(ret).assertTrue();
            console.info("promise get input error: " + e);
        }
        console.info('testWaitPromise05 end');
    })

    /**
     * @tc.number    SUB_STARTUP_JS_SYSTEM_PARAMETER_0806
     * @tc.name      testWait01
     * @tc.desc      Waits the value of the attribute with the specified key.
     */
    it('testWait01', 0, async function (done) {
        console.info('testWait01 start');
        let ret = false;
        try {
            systemparameter.wait("test.wait_param.201", "100", 1, function (err, data) {
                if (err == undefined || err.code === 0) {
                    console.info("testWait01 test.wait_param.201 success")
                } else {
                    ret = true; // wait timeout
                    console.info("testWait01 test.wait_param.201 err:" + err.code);
                    expect(ret).assertTrue();
                }
            });
        } catch (e) {
            expect(ret).assertTrue();
            console.info("testWait01 get input error: " + e);
        }
        setTimeout(function () {
            expect(ret).assertTrue();
            done();
        }, '2000');
        console.info('testWait01 end');
    })

    /**
     * @tc.number    SUB_STARTUP_JS_SYSTEM_PARAMETER_0807
     * @tc.name      testWait02
     * @tc.desc      Waits the value of the attribute with the specified key.
     */
    it('testWait02', 0, async function (done) {
        console.info('testWait02 start');
        let ret = false;
        try {
            ret = true;
            systemparameter.wait("test.wait_param.202", "", 1, function (err, data) {
                if (err == undefined || err.code === 0) { // timeout
                    ret = false;
                    console.info("testWait02 test.wait_param.202 success");
                } else {
                    console.info("testWait02 callback test.wait_param.202 err:" + err.code);
                }
                expect(ret).assertTrue();
                done();
            });
        } catch (e) {
            ret = true;
            console.info("get input error: " + e);
        }
        expect(ret).assertTrue();
        console.info('testWait02 end');
    })

    /**
     * @tc.number    SUB_STARTUP_JS_SYSTEM_PARAMETER_0808
     * @tc.name      testWait03
     * @tc.desc      Waits the value of the attribute with the specified key.
     */
    it('testWait03', 0, async function (done) {
        console.info('testWait03 start');
        let ret = false;
        SetParameter("test.wait_param.203", "103");
        try {
            systemparameter.wait("test.wait_param.203", "103", 1, function (err, data) {
                if (err == undefined || err.code === 0) {
                    ret = true;
                    console.info("testWait03 test.wait_param.203 success")
                } else {
                    console.info("testWait03 test.wait_param.203 err:" + err.code)
                }
                expect(ret).assertTrue();
            });
        } catch (e) {
            expect(ret).assertTrue();
            console.info("get input error: " + e);
        }
        setTimeout(function () {
            expect(ret).assertTrue();
            done();
        }, '1000');
        console.info('testWait03 end');
    })

    /**
     * @tc.number    SUB_STARTUP_JS_SYSTEM_PARAMETER_0809
     * @tc.name      testWait04
     * @tc.desc      Waits the value of the attribute with the specified key.
     */
    it('testWait04', 0, async function (done) {
        console.info('testWait04 start');
        let ret = false;
        SetParameter("test.wait_param.204", "104");
        try {
            systemparameter.wait("test.wait_param.204", "*", 1, function (err, data) {
                if (err == undefined || err.code === 0) {
                    ret = true;
                    console.info("testWait04 test.wait_param.204 success")
                } else {
                    ret = false;
                    console.info("testWait04 callback test.wait_param.204 err:" + err.code)
                }
                expect(ret).assertTrue();
            });
        } catch (e) {
            expect(ret).assertTrue();
            console.info("promise get input error: " + e);
        }
        setTimeout(function () {
            expect(ret).assertTrue();
            done();
        }, '1000');
        console.info('testWait04 end');
    })

    /**
     * @tc.number    SUB_STARTUP_JS_SYSTEM_PARAMETER_0810
     * @tc.name      testWait05
     * @tc.desc      Waits the value of the attribute with the specified key.
     */
    it('testWait05', 0, async function (done) {
        console.info('testWait05 start');
        let ret = false;
        SetParameter("test.wait_param.205", "105");
        try {
            systemparameter.wait("test.wait_param.205", "*", 1, function (err, data) {
                if (err == undefined || err.code === 0) {
                    ret = true;
                    console.info("testWait05 test.wait_param.205 success:" + data)
                } else {
                    console.info("testWait05 test.wait_param.205 err:" + err.code)
                }
                expect(ret).assertTrue();
            });
        } catch (e) {
            ret = false;
            console.info("promise get input error: " + e);
        }
        setTimeout(function () {
            expect(ret).assertTrue();
            done();
        }, '1000');
        console.info('testWait05 end');
    })

    /**
     * @tc.number    SUB_STARTUP_JS_SYSTEM_PARAMETER_0811
     * @tc.name      testWatcher01
     * @tc.desc      Watch the value of the attribute with the specified key.
     */
    it('testWatcher01', 0, function () {
        console.info('testWatcher01 start');
        var ret = true;
        try {
            let watcher = systemparameter.getWatcher("test.watcher_param.205");
            console.info('testWatcher01 watcher' + watcher);
            if (watcher === undefined) {
                ret = false;
            }
        } catch (e) {
            ret = false;
            console.info("input error: " + e);
        }
        expect(ret).assertTrue();
        console.info('testWatcher01 end');
    })

    /**
     * @tc.number    SUB_STARTUP_JS_SYSTEM_PARAMETER_0812
     * @tc.name      testWatcher02
     * @tc.desc      Watch the value of the attribute with the specified key.
     */
    it('testWatcher02', 0, function () {
        console.info('testWatcher02 start');
        var ret = true;
        try {
            let watcher = systemparameter.getWatcher("test.watch_param.205", -1);
            console.info('testWatcher02 watcher' + watcher);
            if (watcher === undefined) {
                ret = false;
            }
        } catch (e) {
            ret = false;
            console.info("input error: " + e);
        }
        expect(ret).assertTrue();
        console.info('testWatcher02 end');
    })

    /**
     * @tc.number    SUB_STARTUP_JS_SYSTEM_PARAMETER_0813
     * @tc.name      testWatcher03
     * @tc.desc      Watch the value of the attribute with the specified key.
     */
    it('testWatcher03', 0, function () {
        console.info('testWatcher03 start');
        var ret = false;
        try {
            ret = true;
            let watcher = systemparameter.getWatcher("");
            if (watcher === undefined) {
                ret = false;
            }
        } catch (e) {
            ret = true;
            console.info("input error: " + e);
        }
        expect(ret).assertTrue();
        console.info('testWatcher03 end');
    })

    /**
     * @tc.number    SUB_STARTUP_JS_SYSTEM_PARAMETER_0814
     * @tc.name      testWatcher04
     * @tc.desc      Watch the value of the attribute with the specified key.
     */
    it('testWatcher03', 0, function () {
        console.info('testWatcher03 start');
        var ret = false;
        try {
            ret = true;
            let watcher = systemparameter.getWatcher("test.watcher.304^^^^");
            if (watcher === undefined) {
                ret = false;
            }
        } catch (e) {
            ret = true;
            console.info("input error: " + e);
        }
        expect(ret).assertTrue();
        console.info('testWatcher03 end');
    })

    /**
     * @tc.number    SUB_STARTUP_JS_SYSTEM_PARAMETER_0815
     * @tc.name      testWatcher05
     * @tc.desc      Watch the value of the attribute with the specified key.
     */
    it('testWatcher05', 0, function () {
        console.info('testWatcher05 start');
        var ret = true;
        try {
            let watcher = systemparameter.getWatcher("test.watcher.304");
            console.info('testWatcher05 start watcher ' + watcher);
            if (watcher === undefined) {
                ret = false;
            }
        } catch (e) {
            ret = false;
            console.info("input error: " + e);
        }
        expect(ret).assertTrue();
        console.info('testWatcher05 end');
    })

    /**
     * @tc.number    SUB_STARTUP_JS_SYSTEM_PARAMETER_0816
     * @tc.name      testWatcherOn01
     * @tc.desc      Watch the value of the attribute with the specified key.
     */
    it('testWatcherOn01', 0, function () {
        console.info('testWatcherOn01 start');
        var ret = true;
        let key = "test.watcher.401";
        try {
            let watcher = systemparameter.getWatcher(key);
            if (watcher === undefined) {
                ret = false;
                expect(ret).assertTrue();
            } else {
                watcher.on("valueChange", function (key, value) {
                    ret = true;
                    console.info("testWatcherOn01 callback key: " + key);
                    console.info("testWatcherOn01 callback value: " + value);
                });
                SetParameter(key);
            }
        } catch (e) {
            ret = true;
            console.info("input error: " + e);
        }
        expect(ret).assertTrue();
        console.info('testWatcherOn01 end');
    })

    /**
     * @tc.number    SUB_STARTUP_JS_SYSTEM_PARAMETER_0817
     * @tc.name      testWatcherOn02
     * @tc.desc      Watch the value of the attribute with the specified key.
     */
    it('testWatcherOn02', 0, async function (done) {
        console.info('testWatcherOn02 start');
        var ret = true;
        let key = "test.watcher.402";
        try {
            let watcher = systemparameter.getWatcher(key);
            if (watcher === undefined) {
                ret = false;
            } else {
                watcher.on("valueChange", function (key, value) { // no callback
                    ret = true;
                    console.info("testWatcherOn02 callback key: " + key);
                    console.info("testWatcherOn02 callback value: " + value);
                });
            }
        } catch (e) {
            ret = false;
            console.info("input error: " + e);
        }
        expect(ret).assertTrue();
        done();
        console.info('testWatcherOn02 end');
    })

    /**
     * @tc.number    SUB_STARTUP_JS_SYSTEM_PARAMETER_0818
     * @tc.name      testWatcherOn03
     * @tc.desc      Watch the value of the attribute with the specified key.
     */
    it('testWatcherOn03', 0, function () {
        console.info('testWatcherOn03 start');
        var ret = true;
        let key = "test.watcher.403";
        try {
            let watcher = systemparameter.getWatcher(key + "*");
            if (watcher === undefined) {
                ret = false;
            } else {
                watcher.on("valueChange", function (key, value) {
                    ret = true;
                    console.info("testWatcherOn03 callback key: " + key);
                    console.info("testWatcherOn03 callback value: " + value);
                });
                SetParameter("test.watcher.403.404");
            }
        } catch (e) {
            ret = false;
            console.info("input error: " + e);
        }
        expect(ret).assertTrue();
        console.info('testWatcherOn03 end');
    })

    /**
     * @tc.number    SUB_STARTUP_JS_SYSTEM_PARAMETER_0819
     * @tc.name      testWatcherOn04
     * @tc.desc      Watch the value of the attribute with the specified key.
     */
    it('testWatcherOn04', 0, async function (done) {
        console.info('testWatcherOn04 start');
        var ret = false;
        try {
            let watcher = systemparameter.getWatcher("*");
            if (watcher != undefined) {
                let code = watcher.on("valueChange", function (key, value) { // fail
                    ret = true;
                    console.info("testWatcherOn04 callback key: " + key);
                    console.info("testWatcherOn04 callback value: " + value);
                });
                console.info("testWatcherOn04 code: " + code);
            } else {
                ret = true;
            }
        } catch (e) {
            ret = true;
            console.info("testWatcherOn04 error: " + e);
        }
        expect(ret).assertTrue();
        done();
        console.info('testWatcherOn04 end');
    })

    function callback1(key, value) {
        console.info("callback1 Watch callback key: " + key);
        console.info("callback1 Watch callback value: " + value);
    }

    /**
     * @tc.number    SUB_STARTUP_JS_SYSTEM_PARAMETER_0820
     * @tc.name      testWatcherOn05
     * @tc.desc      Watch the value of the attribute with the specified key.
     */
    it('testWatcherOn05', 0, async function (done) {
        console.info('testWatcherOn05 start');
        var ret = true;
        let key = "test.watcher.405";
        try {
            let watcher = systemparameter.getWatcher(key);
            if (watcher === undefined) {
                ret = false;
            } else {
                ret = false;
                let code = watcher.on("valueChange", callback1);
                if (code === 0) {
                    ret = true;
                }
                code = watcher.on("valueChange", callback1);
                if (code === 0) {
                    ret = true;
                }
            }
        } catch (e) {
            ret = true;
            console.info("testWatcherOn05 input error: " + e);
        }
        expect(ret).assertTrue();
        done();
        console.info('testWatcherOn05 end');
    })

    /**
     * @tc.number    SUB_STARTUP_JS_SYSTEM_PARAMETER_0821
     * @tc.name      testWatcherOff01
     * @tc.desc      Watch the value of the attribute with the specified key.
     */
    it('testWatcherOff01', 0, async function (done) {
        console.info('testWatcherOff01 start');
        var ret = false;
        let key = "test.watcher.501";
        try {
            let watcher = systemparameter.getWatcher(key);
            if (watcher === undefined) {
                ret = false;
            } else {
                ret = true;
                let code = watcher.on("valueChange", callback1);
                SetParameter(key);
                code = watcher.off("valueChange", callback1);
                if (code === 0) {
                    ret = true;
                }
            }
        } catch (e) {
            ret = false;
            console.info("input error: " + e);
        }
        setTimeout(function () {
            expect(ret).assertTrue();
            done();
        }, '1000');
        console.info('testWatcherOff01 end ');
    })

    /**
     * @tc.number    SUB_STARTUP_JS_SYSTEM_PARAMETER_0822
     * @tc.name      testWatcherOff02
     * @tc.desc      Watch the value of the attribute with the specified key.
     */
    it('testWatcherOff02', 0, function () {
        console.info('testWatcherOff02 start');
        var ret = true;
        let key = "test.watcher.502";
        try {
            let watcher = systemparameter.getWatcher(key);
            if (watcher === undefined) {
                ret = false;
            } else {
                let code = watcher.on("valueChange222", callback1);
                if (code === 0) {
                    ret = false;
                }
                code = watcher.off("valueChange222", callback1);
                if (code === 0) {
                    ret = false;
                }
            }
        } catch (e) {
            ret = false;
            console.info("input error: " + e);
        }
        expect(ret).assertTrue();
        console.info('testWatcherOff02 end');
    })

    /**
     * @tc.number    SUB_STARTUP_JS_SYSTEM_PARAMETER_0823
     * @tc.name      testWatcherOff03
     * @tc.desc      Watch the value of the attribute with the specified key.
     */
    it('testWatcherOff03', 0, function () {
        console.info('testWatcherOff03 start');
        var ret = false;
        let key = "test.watcher.503";
        try {
            let watcher = systemparameter.getWatcher(key);
            if (watcher === undefined) {
                ret = false;
            } else {
                ret = false;
                let code = watcher.on("valueChange", function (key, value) {
                    console.info("testWatcherOff03 callback key: " + key);
                    console.info("testWatcherOff03 callback value: " + value);
                    let code = watcher.off("valueChange");
                    if (code === 0) {
                        ret = true;
                    }
                });
                if (code === 0) {
                    ret = true;
                }
                SetParameter(key);
            }
        } catch (e) {
            ret = false;
            console.info("input error: " + e);
        }
        expect(ret).assertTrue();
        console.info('testWatcherOff03 end');
    })

    /**
     * @tc.number    SUB_STARTUP_JS_SYSTEM_PARAMETER_0824
     * @tc.name      testWatcherOff04
     * @tc.desc      Watch the value of the attribute with the specified key.
     */
    it('testWatcherOff04', 0, function () {
        console.info('testWatcherOff04 start');
        var ret = false;
        let key = "test.watcher.504";
        try {
            let watcher = systemparameter.getWatcher(key);
            if (watcher === undefined) {
                ret = false;
            } else {
                ret = false;
                let code = watcher.on("valueChange", callback1);
                if (code === 0) {
                    ret = true;
                }
                code = watcher.off("valueChange", callback1);
                console.info("system_parameter_test_0824 " + code);
                if (code === 0) {
                    ret = true;
                }
                code = watcher.off("valueChange", callback1);
                console.info("system_parameter_test_0824 " + code);
                if (code != 0) {
                    ret = true;
                }
            }
        } catch (e) {
            ret = false;
            console.info("input error: " + e);
        }
        expect(ret).assertTrue();
        console.info('testWatcherOff04 end');
    })

    function callback3(key, value) {
        console.info("testWatcherOff04 callback key: " + key);
        console.info("testWatcherOff04 callback value: " + value);
    }

    /**
     * @tc.number    SUB_STARTUP_JS_SYSTEM_PARAMETER_0825
     * @tc.name      testWatcherOff05
     * @tc.desc      Watch the value of the attribute with the specified key.
     */
    it('testWatcherOff05', 0, async function (done) {
        console.info('testWatcherOff05 start');
        var ret = false;
        let key = "test.watcher.505";
        try {
            let watcher = systemparameter.getWatcher(key);
            if (watcher === undefined) {
                ret = false;
            } else {
                ret = false;
                let code = watcher.on("valueChange", callback3);
                if (code === 0) {
                    ret = true;
                }
                SetParameter(key);
            }
        } catch (e) {
            ret = false;
            console.info("input error: " + e);
        }
        expect(ret).assertTrue();
        done();
        console.info('testWatcherOff05 end');
    })
})