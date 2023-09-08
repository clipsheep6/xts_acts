// @ts-nocheck
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

import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from 'hypium/index'
// @ts-ignore
import ndk from 'libclientapi.so'

export default function abilityTest() {
    describe('ActsAbilityTest', function () {
        /* *
        * @tc.number  TEE_CLIENT_NDK_0100
        * @tc.name    test Client NDK interface
        * @tc.desc    test Client NDK interface
        */
        it('tee_client_ndktest_0100', 0, async function (done) {
            console.log("tee_client_ndktest_0100 1");
            let value = ndk.InvokeCommandWithMemrefWhole2048k();
            expect(value.length).assertEqual(0);
            done();
        })
    })
}
