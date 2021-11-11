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

import runningLock from '@ohos.runningLock';
import {describe, it, expect} from 'deccjsunit/index';

describe('appInfoTest', function () {

    console.log("*************Edited 2021/09/08 RunningLock Test Begin*************");

    /**
     * @tc.number PowerManager_158
     * @tc.name isRunningLockTypeSupported_test
     * @tc.desc 查询 BACKGROUND类型返回True
     */
    it('is_runningLock_type_supported_callback_test_158', 0, async function (done) {
        runningLock.isRunningLockTypeSupported(runningLock.RunningLockType.BACKGROUND, (error, supported) => {
            if (typeof error === "undefined") {
                console.info('is_runningLock_type_supported_callback_test_158 supported is ' + supported);
                expect(supported).assertTrue();
                console.info('is_runningLock_type_supported_callback_test_158 success');
                done();
            } else {
                console.log('is_runningLock_type_supported_callback_test_158: ' + error);
                expect().assertFail();
                done();
            }
        })
    })

    /**
     * @tc.number PowerManager_159
     * @tc.name isRunningLockTypeSupported_test
     * @tc.desc 查询PROXIMITY_SCREEN_CONTROL类型返回True
     */
    it('is_runningLock_type_supported_callback_test_159', 0, async function (done) {
        runningLock.isRunningLockTypeSupported(runningLock.RunningLockType.PROXIMITY_SCREEN_CONTROL,
            (error, supported) => {
                if (typeof error === "undefined") {
                    console.info('is_runningLock_type_supported_callback_test_159 supported is ' + supported);
                    expect(supported).assertTrue();
                    console.info('is_runningLock_type_supported_callback_test_159 success');
                    done();
                } else {
                    console.log('is_runningLock_type_supported_callback_test_159: ' + error);
                    expect().assertFail();
                    done();
                }
            })
    })

    /**
     * @tc.number PowerManager_160
     * @tc.name isRunningLockTypeSupported_test
     * @tc.desc 查询其他类型值3返回False
     */
    it('is_runningLock_type_supported_callback_test_160', 0, async function (done) {
        runningLock.isRunningLockTypeSupported(3, (error, supported) => {
            if (typeof error === "undefined") {
                console.info('is_runningLock_type_supported_callback_test_160 supported is ' + supported);
                expect(supported).assertFalse();
                console.info('is_runningLock_type_supported_callback_test_160 success');
                done();
            } else {
                console.log('is_runningLock_type_supported_callback_test_160: ' + error);
                expect().assertFail();
                done();
            }
        })
    })

    /**
     * @tc.number PowerManager_161
     * @tc.name isRunningLockTypeSupported_test
     * @tc.desc 查询其他类型值4返回False
     */
    it('is_runningLock_type_supported_callback_test_161', 0, async function (done) {
        runningLock.isRunningLockTypeSupported(4, (error, supported) => {
            if (typeof error === "undefined") {
                console.info('is_runningLock_type_supported_callback_test_161 supported is ' + supported);
                expect(supported).assertFalse();
                console.info('is_runningLock_type_supported_callback_test_161 success');
                done();
            } else {
                console.log('is_runningLock_type_supported_callback_test_161: ' + error);
                expect().assertFail();
                done();
            }
        })
    })

    /**
     * @tc.number PowerManager_162
     * @tc.name isRunningLockTypeSupported_test
     * @tc.desc 查询其他类型值0返回False
     */
    it('is_runningLock_type_supported_callback_test_162', 0, async function (done) {
        runningLock.isRunningLockTypeSupported(0, (error, supported) => {
            if (typeof error === "undefined") {
                console.info('is_runningLock_type_supported_callback_test_162 supported is ' + supported);
                expect(supported).assertFalse();
                console.info('is_runningLock_type_supported_callback_test_162 success');
                done();
            } else {
                console.log('is_runningLock_type_supported_callback_test_162: ' + error);
                expect().assertFail();
                done();
            }
        })
    })

    /**
     * @tc.number PowerManager_163
     * @tc.name isRunningLockTypeSupported_test
     * @tc.desc 异常值传入接口调用
     */
    it('is_runningLock_type_supported_callback_test_163', 0, async function (done) {
        runningLock.isRunningLockTypeSupported(-1, (error, supported) => {
            if (typeof error === "undefined") {
                console.info('is_runningLock_type_supported_callback_test_163 supported is ' + supported);
                expect(supported).assertFalse();
                console.info('is_runningLock_type_supported_callback_test_163 success');
                done();
            } else {
                console.log('is_runningLock_type_supported_callback_test_163: ' + error);
                expect().assertFail();
                done();
            }
        })
    })


    /**
     * @tc.number PowerManager_250
     * @tc.name isRunningLockTypeSupported_test
     * @tc.desc 查询 BACKGROUND类型返回True
     */
    it('is_runningLock_type_supported_promise_test_250', 0, async function (done) {
        runningLock.isRunningLockTypeSupported(runningLock.RunningLockType.BACKGROUND)
            .then(supported => {
            console.info('is_runningLock_type_supported_promise_test_250 supported is ' + supported);
            expect(supported).assertTrue();
            console.info('is_runningLock_type_supported_promise_test_250 success');
            done();
        })
            .catch(error => {
            console.log('is_runningLock_type_supported_promise_test_250 error: ' + error);
            expect().assertFail();
            done();
        })
    })

    /**
     * @tc.number PowerManager_251
     * @tc.name isRunningLockTypeSupported_test
     * @tc.desc 查询PROXIMITY_SCREEN_CONTROL类型返回True
     */
    it('is_runningLock_type_supported_promise_test_251', 0, async function (done) {
        runningLock.isRunningLockTypeSupported(runningLock.RunningLockType.PROXIMITY_SCREEN_CONTROL)
            .then(supported => {
            console.info('is_runningLock_type_supported_promise_test_251 supported is ' + supported);
            expect(supported).assertTrue();
            console.info('is_runningLock_type_supported_promise_test_251 success');
            done();
        })
            .catch(error => {
            console.log('is_runningLock_type_supported_promise_test_251 error: ' + error);
            expect().assertFail();
            done();
        })
    })

    /**
     * @tc.number PowerManager_252
     * @tc.name isRunningLockTypeSupported_test
     * @tc.desc 查询其他类型值3返回False
     */
    it('is_runningLock_type_supported_promise_test_252', 0, async function (done) {
        runningLock.isRunningLockTypeSupported(3)
            .then(supported => {
            console.info('is_runningLock_type_supported_promise_test_252 BACKGROUND supported is ' + supported);
            expect(supported).assertFalse();
            console.info('is_runningLock_type_supported_promise_test_252 success');
            done();
        })
            .catch(error => {
            console.log('is_runningLock_type_supported_promise_test_252 error: ' + error);
            expect().assertFail();
            done();
        })
    })

    /**
     * @tc.number PowerManager_253
     * @tc.name isRunningLockTypeSupported_test
     * @tc.desc 查询其他类型值4返回False
     */
    it('is_runningLock_type_supported_promise_test_253', 0, async function (done) {
        runningLock.isRunningLockTypeSupported(4)
            .then(supported => {
            console.info('is_runningLock_type_supported_promise_test_253 BACKGROUND supported is ' + supported);
            expect(supported).assertFalse();
            console.info('is_runningLock_type_supported_promise_test_253 success');
            done();
        })
            .catch(error => {
            console.log('is_runningLock_type_supported_promise_test_253 error: ' + error);
            expect().assertFail();
            done();
        })
    })


    /**
     * @tc.number PowerManager_254
     * @tc.name isRunningLockTypeSupported_test
     * @tc.desc 查询其他类型值0返回False
     */
    it('is_runningLock_type_supported_promise_test_254', 0, async function (done) {
        runningLock.isRunningLockTypeSupported(0)
            .then(supported => {
            console.info('is_runningLock_type_supported_promise_test_254 BACKGROUND supported is ' + supported);
            expect(supported).assertFalse();
            console.info('is_runningLock_type_supported_promise_test_254 success');
            done();
        })
            .catch(error => {
            console.log('is_runningLock_type_supported_promise_test_254 error: ' + error);
            expect().assertFail();
            done();
        })
    })

    /**
     * @tc.number PowerManager_255
     * @tc.name isRunningLockTypeSupported_test
     * @tc.desc 异常值传入接口调用
     */
    it('is_runningLock_type_supported_promise_test_255', 0, async function (done) {
        runningLock.isRunningLockTypeSupported(-1)
            .then(supported => {
            console.info('is_runningLock_type_supported_promise_test_255 BACKGROUND supported is ' + supported);
            expect(supported).assertFalse();
            console.info('is_runningLock_type_supported_promise_test_255 success');
            done();
        })
            .catch(error => {
            console.log('is_runningLock_type_supported_promise_test_255 error: ' + error);
            expect().assertFail();
            done();
        })
    })

    /**
     * @tc.number PowerManager_164
     * @tc.name createRunningLock_test
     * @tc.desc 接口正常调用
     */
    it('create_running_lock_callback_test_164', 0, async function (done) {
        runningLock.createRunningLock("test", runningLock.RunningLockType.BACKGROUND, (error, runningLock) => {
            if (typeof error === "undefined") {
                console.info('create_running_lock_callback_test: runningLock is ' + runningLock);
                expect(runningLock !== null).assertTrue();
                var used = runningLock.isUsed();
                console.info('create_running_lock_callback_test is used: ' + used);
                expect(used).assertFalse();
                runningLock.lock(500);
                used = runningLock.isUsed();
                console.info('after lock create_running_lock_callback_test is used: ' + used);
                expect(used).assertTrue();
                console.info('create_running_lock_callback_test success');
                done();
            } else {
                console.log('create_running_lock_callback_test: ' + error);
                expect().assertFail();
                done();
            }
        })
    })

    /**
     * @tc.number PowerManager_165
     * @tc.name createRunningLock_test
     * @tc.desc name: string异常值返回时接口调用
     */
    it('create_running_lock_callback_test_165', 0, async function (done) {
        runningLock.createRunningLock(null, runningLock.RunningLockType.BACKGROUND, (error, runningLock) => {
            if (typeof error === "undefined") {
                console.info('create_running_lock_callback_test: runningLock is ' + runningLock);
                expect(runningLock !== null).assertTrue();
                var used = runningLock.isUsed();
                console.info('create_running_lock_callback_test is used: ' + used);
                expect(used).assertFalse();
                runningLock.lock(500);
                used = runningLock.isUsed();
                console.info('after lock create_running_lock_callback_test is used: ' + used);
                expect(used).assertTrue();
                console.info('create_running_lock_callback_test success');
                done();
            } else {
                console.log('create_running_lock_callback_test: ' + error);
                expect().assertFail();
                done();
            }
        })
    })

    /**
     * @tc.number PowerManager_166
     * @tc.name createRunningLock_test
     * @tc.desc PROXIMITY_SCREEN_CONTROL返回时接口调用
     */
    it('create_running_lock_callback_test_166', 0, async function (done) {
        runningLock.createRunningLock("test", runningLock.RunningLockType.PROXIMITY_SCREEN_CONTROL,
            (error, runningLock) => {
                if (typeof error === "undefined") {
                    console.info('create_running_lock_callback_test: runningLock is ' + runningLock);
                    expect(runningLock !== null).assertTrue();
                    var used = runningLock.isUsed();
                    console.info('create_running_lock_callback_test is used: ' + used);
                    expect(used).assertFalse();
                    runningLock.lock(500);
                    used = runningLock.isUsed();
                    console.info('after lock create_running_lock_callback_test is used: ' + used);
                    expect(used).assertTrue();
                    console.info('create_running_lock_callback_test success');
                    done();
                } else {
                    console.log('create_running_lock_callback_test: ' + error);
                    expect().assertFail();
                    done();
                }
            })
    })

    /**
     * @tc.number PowerManager_167
     * @tc.name createRunningLock_test
     * @tc.desc name:  type: RunningLockType异常值Null返回时接口调用
     */
    it('create_running_lock_callback_test_167', 0, async function (done) {
        runningLock.createRunningLock("test", null, (error, runningLock) => {
            if (typeof error === "undefined") {
                console.info('create_running_lock_callback_test: runningLock is ' + runningLock);
                expect(runningLock !== null).assertTrue();
                var used = runningLock.isUsed();
                console.info('create_running_lock_callback_test is used: ' + used);
                expect(used).assertFalse();
                runningLock.lock(500);
                used = runningLock.isUsed();
                console.info('after lock create_running_lock_callback_test is used: ' + used);
                expect(used).assertTrue();
                console.info('create_running_lock_callback_test success');
                done();
            } else {
                console.log('create_running_lock_callback_test: ' + error);
                expect().assertFail();
                done();
            }
        })
    })

    /**
     * @tc.number PowerManager_168
     * @tc.name createRunningLock_test
     * @tc.desc 两参数都异常值返回时接口调用
     */
    it('create_running_lock_callback_test_168', 0, async function (done) {
        runningLock.createRunningLock(null, null, (error, runningLock) => {
            if (typeof error === "undefined") {
                console.info('create_running_lock_callback_test: runningLock is ' + runningLock);
                expect(runningLock !== null).assertTrue();
                var used = runningLock.isUsed();
                console.info('create_running_lock_callback_test is used: ' + used);
                expect(used).assertFalse();
                runningLock.lock(500);
                used = runningLock.isUsed();
                console.info('after lock create_running_lock_callback_test is used: ' + used);
                expect(used).assertTrue();
                console.info('create_running_lock_callback_test success');
                done();
            } else {
                console.log('create_running_lock_callback_test: ' + error);
                expect().assertFail();
                done();
            }
        })
    })

    /**
     * @tc.number PowerManager_169
     * @tc.name createRunningLock_test
     * @tc.desc 接口调用100次
     */
    it('create_running_lock_callback_test_169', 0, async function (done) {
        runningLock.createRunningLock(null, runningLock.RunningLockType.PROXIMITY_SCREEN_CONTROL,
            (error, runningLock) => {
                if (typeof error === "undefined") {
                    console.info('create_running_lock_callback_test: runningLock is ' + runningLock);
                    expect(runningLock !== null).assertTrue();
                    var used = runningLock.isUsed();
                    console.info('create_running_lock_callback_test is used: ' + used);
                    expect(used).assertFalse();
                    runningLock.lock(500);
                    used = runningLock.isUsed();
                    console.info('after lock create_running_lock_callback_test is used: ' + used);
                    expect(used).assertTrue();
                    console.info('create_running_lock_callback_test success');
                    done();
                } else {
                    console.log('create_running_lock_callback_test: ' + error);
                    expect().assertFail();
                    done();
                }
            })
    })

    /**
     * @tc.number PowerManager_256
     * @tc.name createRunningLock_test
     * @tc.desc 接口正常调用
     */
    it('create_running_lock_promise_test_256', 0, async function (done) {
        runningLock.createRunningLock("test", runningLock.RunningLockType.BACKGROUND)
            .then(runningLock => {
            expect(runningLock !== null).assertTrue();
            console.info('create_running_lock_promise_test_256 success');
            done();
        })
            .catch(error => {
            console.log('create_running_lock_promise_test error: ' + error);
            expect().assertFail();
            done();
        })
    })

    /**
     * @tc.number PowerManager_257
     * @tc.name createRunningLock_test
     * @tc.desc name: string异常值返回时接口调用
     */
    it('create_running_lock_promise_test_257', 0, async function (done) {
        runningLock.createRunningLock(null, runningLock.RunningLockType.BACKGROUND)
            .then(runningLock => {
            expect(runningLock !== null).assertTrue();
            console.info('create_running_lock_promise_test_257 success');
            done();
        })
            .catch(error => {
            console.log('create_running_lock_promise_test error: ' + error);
            expect().assertFail();
            done();
        })
    })

    /**
     * @tc.number PowerManager_258
     * @tc.name createRunningLock_test
     * @tc.desc PROXIMITY_SCREEN_CONTROL值返回接口调用
     */
    it('create_running_lock_promise_test_258', 0, async function (done) {
        runningLock.createRunningLock("test", runningLock.RunningLockType.PROXIMITY_SCREEN_CONTROL)
            .then(runningLock => {
            expect(runningLock !== null).assertTrue();
            console.info('create_running_lock_promise_test_258 success');
            done();
        })
            .catch(error => {
            console.log('create_running_lock_promise_test error: ' + error);
            expect().assertFail();
            done();
        })
    })

    /**
     * @tc.number PowerManager_259
     * @tc.name createRunningLock_test
     * @tc.desc type: RunningLockType异常值Null返回时接口调用
     */
    it('create_running_lock_promise_test_259', 0, async function (done) {
        runningLock.createRunningLock("test", null)
            .then(runningLock => {
            expect(runningLock !== null).assertTrue();
            console.info('create_running_lock_promise_test_259 success');
            done();
        })
            .catch(error => {
            console.log('create_running_lock_promise_test error: ' + error);
            expect().assertFail();
            done();
        })
    })

    /**
     * @tc.number PowerManager_260
     * @tc.name createRunningLock_test
     * @tc.desc 两参数都异常值返回时接口调用
     */
    it('create_running_lock_promise_test_260', 0, async function (done) {
        runningLock.createRunningLock(null, null)
            .then(runningLock => {
            expect(runningLock !== null).assertTrue();
            console.info('create_running_lock_promise_test_260 success');
            done();
        })
            .catch(error => {
            console.log('create_running_lock_promise_test error: ' + error);
            expect().assertFail();
            done();
        })
    })

    /**
     * @tc.number PowerManager_261
     * @tc.name createRunningLock_test
     * @tc.desc 接口调用100次
     */
    it('create_running_lock_promise_test_261', 0, async function (done) {
        //        for(let i=0;i<100;i++)
        runningLock.createRunningLock(null, runningLock.RunningLockType.PROXIMITY_SCREEN_CONTROL)
            .then(runningLock => {
            expect(runningLock !== null).assertTrue();
            console.info('create_running_lock_promise_test_261 success');
            done();
        })
            .catch(error => {
            console.log('create_running_lock_promise_test error: ' + error);
            expect().assertFail();
            done();
        })
    })


    /**
     * @tc.number PowerManager_170
     * @tc.name lock_test
     * @tc.desc 接口正常调用
     */
    it('running_lock_lock_test_170', 0, async function (done) {
        runningLock.createRunningLock("test", runningLock.RunningLockType.BACKGROUND)
            .then(runningLock => {
            expect(runningLock !== null).assertTrue();
            var used = runningLock.isUsed();
            console.info('running_lock_lock_test is used: ' + used);
            expect(used).assertFalse();
            runningLock.lock(500);
            used = runningLock.isUsed();
            console.info('after lock running_lock_lock_test is used: ' + used);
            expect(used).assertTrue();
            console.info('running_lock_lock_test success');
            done();
        })
            .catch(error => {
            console.log('running_lock_lock_test error: ' + error);
            expect().assertFail();
            done();
        })
    })

    /**
     * @tc.number PowerManager_171
     * @tc.name lock_test
     * @tc.desc 异常值传入时接口调用
     */
    it('running_lock_lock_test_171', 0, async function (done) {
        runningLock.createRunningLock("test", runningLock.RunningLockType.BACKGROUND)
            .then(runningLock => {
            expect(runningLock !== null).assertTrue();
            var used = runningLock.isUsed();
            console.info('running_lock_lock_test is used: ' + used);
            expect(used).assertFalse();
            runningLock.lock(-1);
            used = runningLock.isUsed();
            console.info('after lock running_lock_lock_test is used: ' + used);
            expect(used).assertTrue();
            console.info('running_lock_lock_test success');
            done();
        })
            .catch(error => {
            console.log('running_lock_lock_test error: ' + error);
            expect().assertFail();
            done();
        })
    })

    /**
     * @tc.number PowerManager_172
     * @tc.name lock_test
     * @tc.desc null值传入时接口调用
     */
    it('running_lock_lock_test_172', 0, async function (done) {
        runningLock.createRunningLock(null, runningLock.RunningLockType.BACKGROUND)
            .then(runningLock => {
            expect(runningLock !== null).assertTrue();
            var used = runningLock.isUsed();
            console.info('running_lock_lock_test is used: ' + used);
            expect(used).assertFalse();
            runningLock.lock(100);
            used = runningLock.isUsed();
            console.info('after lock running_lock_lock_test is used: ' + used);
            expect(used).assertTrue();
            console.info('running_lock_lock_test success');
            done();
        })
            .catch(error => {
            console.log('running_lock_lock_test error: ' + error);
            expect().assertFail();
            done();
        })
    })

    /**
     * @tc.number PowerManager_173
     * @tc.name lock_test
     * @tc.desc timeout值0返回时接口可以正常调用
     */
    it('running_lock_lock_test_173', 0, async function (done) {
        runningLock.createRunningLock("test", runningLock.RunningLockType.BACKGROUND)
            .then(runningLock => {
            expect(runningLock !== null).assertTrue();
            var used = runningLock.isUsed();
            console.info('running_lock_lock_test is used: ' + used);
            expect(used).assertFalse();
            runningLock.lock(0);
            used = runningLock.isUsed();
            console.info('after lock running_lock_lock_test is used: ' + used);
            expect(used).assertTrue();
            console.info('running_lock_lock_test success');
            done();
        })
            .catch(error => {
            console.log('running_lock_lock_test error: ' + error);
            expect().assertFail();
            done();
        })
    })

    /**
     * @tc.number PowerManager_174
     * @tc.name lock_test
     * @tc.desc timeout值1000返回时接口可以正常调用
     */
    it('running_lock_lock_test_174', 0, async function (done) {
        runningLock.createRunningLock("test", runningLock.RunningLockType.BACKGROUND)
            .then(runningLock => {
            expect(runningLock !== null).assertTrue();
            var used = runningLock.isUsed();
            console.info('running_lock_lock_test is used: ' + used);
            expect(used).assertFalse();
            runningLock.lock(1000);
            used = runningLock.isUsed();
            console.info('after lock running_lock_lock_test is used: ' + used);
            expect(used).assertTrue();
            console.info('running_lock_lock_test success');
            done();
        })
            .catch(error => {
            console.log('running_lock_lock_test error: ' + error);
            expect().assertFail();
            done();
        })
    })

    /**
     * @tc.number PowerManager_175
     * @tc.name lock_test
     * @tc.desc 接口调用100次
     */
    it('running_lock_lock_test_175', 0, async function (done) {
        runningLock.createRunningLock("test", runningLock.RunningLockType.BACKGROUND)
            .then(runningLock => {
            expect(runningLock !== null).assertTrue();
            var used = runningLock.isUsed();
            console.info('running_lock_lock_test is used: ' + used);
            expect(used).assertFalse();
            for (let i = 0;i < 100; i++) {
                runningLock.lock(1);
                runningLock.unlock();
            }

            used = runningLock.isUsed();
            console.info('after lock running_lock_lock_test is used: ' + used);
            expect(used).assertFalse();
            console.info('running_lock_lock_test success');
            done();
        })
            .catch(error => {
            console.log('running_lock_lock_test error: ' + error);
            expect().assertFail();
            done();
        })
    })

    /**
     * @tc.number PowerManager_176
     * @tc.name isUsed_test
     * @tc.desc 接口返回True
     */
    it('running_lock_isused_test_176', 0, async function (done) {
        runningLock.createRunningLock("test", runningLock.RunningLockType.BACKGROUND)
            .then(runningLock => {
            expect(runningLock !== null).assertTrue();
            var used = runningLock.isUsed();
            console.info('running_lock_isused_test used: ' + used);
            expect(used).assertFalse();
            runningLock.lock(100);
            used = runningLock.isUsed();
            console.info('after lock running_lock_unlock_test is used: ' + used);
            expect(used).assertTrue();
            runningLock.unlock();
            used = runningLock.isUsed();
            expect(used).assertFalse();
            console.info('running_lock_isused_test success');
            done();
        })
            .catch(error => {
            console.log('running_lock_isused_test error: ' + error);
            expect().assertFail();
            done();
        })
    })

    /**
     * @tc.number PowerManager_177
     * @tc.name isUsed_test
     * @tc.desc 接口返回False
     */
    it('running_lock_isused_test_177', 0, async function (done) {
        runningLock.createRunningLock("test", runningLock.RunningLockType.BACKGROUND)
            .then(runningLock => {
            expect(runningLock !== null).assertTrue();
            var used = runningLock.isUsed();
            console.info('running_lock_isused_test used: ' + used);
            expect(used).assertFalse();
            console.info('running_lock_isused_test success');
            done();
        })
            .catch(error => {
            console.log('running_lock_isused_test error: ' + error);
            expect().assertFail();
            done();
        })
    })

    /**
     * @tc.number PowerManager_178
     * @tc.name isUsed_test
     * @tc.desc PROXIMITY_SCREEN_CONTROL返回值True
     */
    it('running_lock_isused_test_178', 0, async function (done) {
        runningLock.createRunningLock("test", runningLock.RunningLockType.PROXIMITY_SCREEN_CONTROL)
            .then(runningLock => {
            expect(runningLock !== null).assertTrue();
            var used = runningLock.isUsed();
            console.info('running_lock_isused_test used: ' + used);
            expect(used).assertFalse();
            runningLock.lock(100);
            used = runningLock.isUsed();
            console.info('after lock running_lock_unlock_test is used: ' + used);
            expect(used).assertTrue();
            runningLock.unlock();
            used = runningLock.isUsed();
            expect(used).assertFalse();
            console.info('running_lock_isused_test success');
            done();
        })
            .catch(error => {
            console.log('running_lock_isused_test error: ' + error);
            expect().assertFail();
            done();
        })
    })

    /**
     * @tc.number PowerManager_179
     * @tc.name isUsed_test
     * @tc.desc PROXIMITY_SCREEN_CONTROL返回值False
     */
    it('running_lock_isused_test_179', 0, async function (done) {
        runningLock.createRunningLock("test", runningLock.RunningLockType.PROXIMITY_SCREEN_CONTROL)
            .then(runningLock => {
            expect(runningLock !== null).assertTrue();
            var used = runningLock.isUsed();
            console.info('running_lock_isused_test used: ' + used);
            expect(used).assertFalse();
            console.info('running_lock_isused_test success');
            done();
        })
            .catch(error => {
            console.log('running_lock_isused_test error: ' + error);
            expect().assertFail();
            done();
        })
    })

    /**
     * @tc.number PowerManager_180
     * @tc.name isUsed_test
     * @tc.desc 接口返回False
     */
    it('running_lock_isused_test_180', 0, async function (done) {
        runningLock.createRunningLock("test", runningLock.RunningLockType.BACKGROUND)
            .then(runningLock => {
            expect(runningLock !== null).assertTrue();
            var used = runningLock.isUsed();
            for (let i = 0;i < 100; i++)
            runningLock.isUsed();
            console.info('running_lock_isused_test used: ' + used);
            expect(used).assertFalse();
            console.info('running_lock_isused_test success');
            done();
        })
            .catch(error => {
            console.log('running_lock_isused_test error: ' + error);
            expect().assertFail();
            done();
        })
    })


    /**
     * @tc.number PowerManager_181
     * @tc.name unlock_test
     * @tc.desc BACKGROUND传入时接口正常调用
     */
    it('running_lock_unlock_test_181', 0, async function (done) {
        runningLock.createRunningLock("test", runningLock.RunningLockType.BACKGROUND)
            .then(runningLock => {
            expect(runningLock !== null).assertTrue();
            var used = runningLock.isUsed();
            console.info('running_lock_unlock_test is used: ' + used);
            expect(used).assertFalse();
            runningLock.lock(500);
            used = runningLock.isUsed();
            console.info('after lock running_lock_unlock_test is used: ' + used);
            expect(used).assertTrue();
            runningLock.unlock();
            used = runningLock.isUsed();
            console.info('after unlock running_lock_unlock_test is used: ' + used);
            expect(used).assertFalse();
            console.info('running_lock_unlock_test success');
            done();
        })
            .catch(error => {
            console.log('running_lock_unlock_test error: ' + error);
            expect().assertFail();
            done();
        })
    })

    /**
     * @tc.number PowerManager_182
     * @tc.name unlock_test
     * @tc.desc PROXIMITY_SCREEN_CONTROL传入时接口正常调用
     */
    it('running_lock_unlock_test_182', 0, async function (done) {
        runningLock.createRunningLock("test", runningLock.RunningLockType.PROXIMITY_SCREEN_CONTROL)
            .then(runningLock => {
            expect(runningLock !== null).assertTrue();
            var used = runningLock.isUsed();
            console.info('running_lock_unlock_test is used: ' + used);
            expect(used).assertFalse();
            runningLock.lock(500);
            used = runningLock.isUsed();
            console.info('after lock running_lock_unlock_test is used: ' + used);
            expect(used).assertTrue();
            runningLock.unlock();
            used = runningLock.isUsed();
            console.info('after unlock running_lock_unlock_test is used: ' + used);
            expect(used).assertFalse();
            console.info('running_lock_unlock_test success');
            done();
        })
            .catch(error => {
            console.log('running_lock_unlock_test error: ' + error);
            expect().assertFail();
            done();
        })
    })

    /**
     * @tc.number PowerManager_183
     * @tc.name unlock_test
     * @tc.desc name:string异常值返回时接口调用
     */
    it('running_lock_unlock_test_183', 0, async function (done) {
        runningLock.createRunningLock(null, runningLock.RunningLockType.BACKGROUND)
            .then(runningLock => {
            expect(runningLock !== null).assertTrue();
            var used = runningLock.isUsed();
            console.info('running_lock_unlock_test is used: ' + used);
            expect(used).assertFalse();
            runningLock.lock(500);
            used = runningLock.isUsed();
            console.info('after lock running_lock_unlock_test is used: ' + used);
            expect(used).assertTrue();
            runningLock.unlock();
            used = runningLock.isUsed();
            console.info('after unlock running_lock_unlock_test is used: ' + used);
            expect(used).assertFalse();
            console.info('running_lock_unlock_test success');
            done();
        })
            .catch(error => {
            console.log('running_lock_unlock_test error: ' + error);
            expect().assertFail();
            done();
        })
    })

    /**
     * @tc.number PowerManager_184
     * @tc.name unlock_test
     * @tc.desc type: RunningLockType异常值Null返回时接口调用
     */
    it('running_lock_unlock_test_184', 0, async function (done) {
        runningLock.createRunningLock("test", null)
            .then(runningLock => {
            expect(runningLock !== null).assertTrue();
            var used = runningLock.isUsed();
            console.info('running_lock_unlock_test is used: ' + used);
            expect(used).assertFalse();
            runningLock.lock(500);
            used = runningLock.isUsed();
            console.info('after lock running_lock_unlock_test is used: ' + used);
            expect(used).assertTrue();
            runningLock.unlock();
            used = runningLock.isUsed();
            console.info('after unlock running_lock_unlock_test is used: ' + used);
            expect(used).assertFalse();
            console.info('running_lock_unlock_test success');
            done();
        })
            .catch(error => {
            console.log('running_lock_unlock_test error: ' + error);
            expect().assertFail();
            done();
        })
    })

    /**
     * @tc.number PowerManager_185
     * @tc.name unlock_test
     * @tc.desc 反复调用100次
     */
    it('running_lock_unlock_test_185', 0, async function (done) {
        runningLock.createRunningLock("test", runningLock.RunningLockType.BACKGROUND)
            .then(runningLock => {
            expect(runningLock !== null).assertTrue();
            var used = runningLock.isUsed();
            console.info('running_lock_unlock_test is used: ' + used);
            expect(used).assertFalse();
            for (let i = 0;i < 100; i++) {
                runningLock.lock(1);
                runningLock.unlock();
            }
            used = runningLock.isUsed();
            console.info('after unlock running_lock_unlock_test is used: ' + used);
            expect(used).assertFalse();
            console.info('running_lock_unlock_test success');
            done();
        })
            .catch(error => {
            console.log('running_lock_unlock_test error: ' + error);
            expect().assertFail();
            done();
        })
    })

})