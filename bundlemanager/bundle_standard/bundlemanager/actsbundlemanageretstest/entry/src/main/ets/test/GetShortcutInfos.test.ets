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

import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from "hypium/index"
import innerBundleManager from '@ohos.bundle.innerBundleManager'

const BUNDLE_NAME = 'com.example.third1';
const Module_NAME = 'entry';


export default function getShortcutInfos() {
    describe('getShortcutInfos', function() {
  
       /**
         * @tc.number: getShortcutInfos_0100
         * @tc.name: getShortcutInfos_0100 Promise
         * @tc.desc: Query moduleName and then verify
         */
          it('getShortcutInfos_0100', 0, async function (done) {
            const data = await innerBundleManager.getShortcutInfos(BUNDLE_NAME).then((data) => {
                expect(data[0].moduleName).assertEqual(Module_NAME);
            }).catch((error) => {
                expect(error).assertFail();
            });
            done();
        });

       /**
         * @tc.number: getShortcutInfos_0200
         * @tc.name: getShortcutInfos_0200 callBack
         * @tc.desc: Query moduleName and then verify
         */
        it('getShortcutInfos_0200', 0, async function (done) {
            innerBundleManager.getShortcutInfos(BUNDLE_NAME, (error, data) => {
                expect(data[0].moduleName).assertEqual(Module_NAME);
                expect(error).assertEqual(0);
                done();
            });
        });
    })
}