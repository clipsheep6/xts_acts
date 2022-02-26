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
import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from "deccjsunit/index"


export default function abilityTest(abilityContext) {
    describe('ActsAbilityTest', function () {
        /**
         * @tc.number: SUB_AA_OpenHarmony_Context_0900
         * @tc.name: Check that context paths of different Ability in the same hap are the same.
         * @tc.desc: Check the ability context paths of the same hap are the same.
         */
        it('SUB_AA_OpenHarmony_Context_0900', 0, async function (done) {
            console.log("SUB_AA_OpenHarmony_Context_0900 --- start")
            var labelString = abilityContext.resourceManager.getString(16777218);
            expect('phoneBase').assertEqual(labelString);
        })
    })
}