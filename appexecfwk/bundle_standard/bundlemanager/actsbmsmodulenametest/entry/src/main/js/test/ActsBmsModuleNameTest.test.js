/*
 * Copyright (c) 2021 Huawei Device Co., Ltd.
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

import bundle from '@ohos.bundle'
import { describe, it, expect } from 'deccjsunit/index'

const BUNDLE_NAME = 'com.example.bmsmodulenametest';
const MODULE_NAME1 = '';
const MODULE_NAME2 = 'nomodule';
const MODULE_NAME3 = 'MyApplication1';
const ABILITY_NAME = 'com.example.actsbmsmodulenametest.MainAbility';

describe('ActsBmsModuleNameTest', function () {

    /*
     * @tc.number: GetabilityInfo_0100
     * @tc.name: test muduleName
     * @tc.desc: test empty muduleName
     */
    it('GetabilityInfo_0800', 0, async function (done) {
        await bundle.getAbilityInfo(BUNDLE_NAME, MODULE_NAME1, ABILITY_NAME)
            .then(data => {
                console.info('[GetabilityInfo_0100]Return data successful: ' + JSON.stringify(data));
                done();
            }).catch((err) => {
                console.error('[GetabilityInfo_0100]Operation failed. Err: ' + JSON.stringify(err));
                expect(err).assertEqual(1);
                done();
            });
    });

    /*
     * @tc.number: GetabilityInfo_0200
     * @tc.name: test muduleName
     * @tc.desc: test non-existent muduleName
     */
        it('GetabilityInfo_0200', 0, async function (done) {
            await bundle.getAbilityInfo(BUNDLE_NAME, MODULE_NAME2, ABILITY_NAME)
                .then(data => {
                    console.info('[GetabilityInfo_0200]Return data successful: ' + JSON.stringify(data));
                    done();
                }).catch((err) => {
                    console.error('[GetabilityInfo_0200]Operation successful. Err: ' + JSON.stringify(err));
                    expect(err).assertEqual(1);
                    done();
                });
        });

    /*
     * @tc.number: GetabilityInfo_0300
     * @tc.name: test muduleName
     * @tc.desc: test non-existent muduleName
     */
        it('GetabilityInfo_0300', 0, async function (done) {
            await bundle.getAbilityInfo(BUNDLE_NAME, MODULE_NAME3, ABILITY_NAME)
                .then(data => {
                    console.info('[GetabilityInfo_0300]Return data successful: ' + JSON.stringify(data));
                    done();
                }).catch((err) => {
                    console.error('[GetabilityInfo_0300]Operation failed. Err: ' + JSON.stringify(err));
                    expect(err).assertEqual(0);
                    done();
                });
        });




});
