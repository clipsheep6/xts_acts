/*
 * Copyright (C) 2022 Huawei Device Co., Ltd.
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
import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from '@ohos/hypium'
import taskpool from '@ohos.taskpool'
export default function SendAbleTest() {
describe('ActsAbilityTest', function () {
    // Defines a test suite. Two parameters are supported: test suite name and test suite function.
    function promiseCase() {
        let p = new Promise(function (resolve, reject) {
            setTimeout(function () {
                resolve(1)
            }, 100)
        }).then(undefined, (error) => {
        })
        return p
    }
    /**
     * @tc.number    : SUB_COMMONLIBRARY_ETSUTILS_SENDABLE_0079
     * @tc.name      : SendAbleTestClass050
     * @tc.desc      : SequenceRunner for sendable
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('SendAbleTestClass001', 0,  async function (done) {
        class Test {
            s:string = "TestString1";
            i:number = 10;
            b:boolean = false;
            constructor() {
                "use sendable"
            }
        }

        function modifyArgs(args:Test):Test
        {
            "use concurrent"
            args.s = "TestString2";
            args.i = 20;
            args.b = true;
            return args;
        }

        let isTerminate = false;
        let test = new Test();
        let testResult = new Test();
        let task1 = new taskpool.Task(modifyArgs, test);
        taskpool.execute(task1).then((res:Test) => {
            testResult = res;
            isTerminate = true;
        });

        while (!isTerminate) {
            await promiseCase()
        }

        expect(testResult.s).assertEqual("TestString2");
        expect(testResult.i).assertEqual(20);
        expect(testResult.b).assertEqual(true);
        done();
    })
})
}