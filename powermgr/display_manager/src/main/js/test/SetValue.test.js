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

import brightness from '@ohos.brightness';
import {describe, it, expect} from 'deccjsunit/index';

describe('appInfoTest', function () {

    console.log("*************Edited 2021/09/08 setValue Test Begin*************");

    /**
     * @tc.number PowerManager_201
     * @tc.name setValue_test
     * @tc.desc 接口正常调用
     */
    it('setValue_test_201', 0, function () {
        var setValue = brightness.setValue(100);
        expect(typeof setValue === "undefined").assertTrue();
        console.info("setValue_test success ");
    })

    /**
     * @tc.number PowerManager_202
     * @tc.name setValue_test
     * @tc.desc 异常值返回时接口调用
     */
    it('setValue_test_202', 0, function () {
        var setValue = brightness.setValue(-1);
        expect(typeof setValue === "undefined").assertTrue();
        console.info("setValue_test success ");
    })

    /**
     * @tc.number PowerManager_203
     * @tc.name setValue_test
     * @tc.desc 值255返回时接口调用
     */
    it('setValue_test_203', 0, function () {
        var setValue = brightness.setValue(255);
        expect(typeof setValue === "undefined").assertTrue();
        console.info("setValue_test success ");
    })

    /**
     * @tc.number PowerManager_204
     * @tc.name setValue_test
     * @tc.desc 接口调用100次
     */
    it('setValue_test_204', 0, function () {
        var setValue = brightness.setValue(0);
        for (var i = 0;i < 256; i++) {
            setValue = brightness.setValue(i);
        }
        expect(typeof setValue === "undefined").assertTrue();
        console.info("setValue_test success ");
    })

    /**
     * @tc.number PowerManager_205
     * @tc.name setValue_test
     * @tc.desc 接口0值返回
     */
    it('setValue_test_205', 0, function () {
        var setValue = brightness.setValue(0);
        expect(typeof setValue === "undefined").assertTrue();
        console.info("setValue_test success ");
    })
})