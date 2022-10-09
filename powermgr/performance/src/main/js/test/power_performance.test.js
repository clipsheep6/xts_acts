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

import { describe, it, expect } from '@ohos/hypium'
import power from '@ohos.power'

export default function PowerPerformanceTest() {
describe('PowerPerformanceTest', function () {
    console.log("*************Power Performance Begin*************");

    const BASE_COUNT = 2000;
    const BASELINE_ISSCREENON = 1000;

    /**
     * @tc.number SUB_PowerSystem_PowerPerformance_JSTest_0100
     * @tc.name Power_IsScreenOn_Promise_Performance_0100
     * @tc.desc IsScreenOn Promise Performance
     */
    it("Power_IsScreenOn_Promise_Performance_0100", 0, async function(done) {
        let startTime = new Date().getTime();
        console.info("Power_IsScreenOn_Promise_Performance_0100 startTime" + startTime);
        isScreenOnPromisePerformanceTest(0);
        
        function isScreenOnPromisePerformanceTest(index) {
            let promise = power.isScreenOn();
            promise.then(data => {
                console.log("isScreenOn success, promise:data->" + JSON.stringify(data))
                if(index < BASE_COUNT) {
                    isScreenOnPromisePerformanceTest(index + 1);
                }else {
                    let endTime = new Date().getTime();
                    console.info("Power_IsScreenOn_Promise_Performance_0100 endTime" + endTime);
                    let averageTime = ((endTime - startTime) * 1000) / BASE_COUNT;
                    console.info("Power_IsScreenOn_Promise_Performance_0100 averageTime" + averageTime + "us");
                    expect(averageTime < BASELINE_ISSCREENON).assertTrue();
                    done();
                }
            }).catch(err => {
                console.log("isScreenOn failed, promise:err->" + JSON.stringify(err));
            });
        }
    })

    /**
     * @tc.number SUB_PowerSystem_PowerPerformance_JSTest_0200
     * @tc.name Power_IsScreenOn_Callback_Performance_0100
     * @tc.desc IsScreenOn Callback Performance
     */
    it("Power_IsScreenOn_Callback_Performance_0100", 0, async function(done) {
        let startTime = new Date().getTime();
        console.info("Power_IsScreenOn_Callback_Performance_0100 startTime" + startTime);
        isScreenOnCallbackPerformanceTest(0);
        
        function isScreenOnCallbackPerformanceTest(index) {
            power.isScreenOn((err, data) => {
                console.log("isScreenOn callback, err->" + JSON.stringify(err) + " data->" + JSON.stringify(data));
                if(index < BASE_COUNT) {
                    isScreenOnCallbackPerformanceTest(index + 1);
                }else {
                    let endTime = new Date().getTime();
                    console.info("Power_IsScreenOn_Callback_Performance_0100 endTime" + endTime);
                    let averageTime = ((endTime - startTime) * 1000) / BASE_COUNT;
                    console.info("Power_IsScreenOn_Callback_Performance_0100 averageTime" + averageTime + "us");
                    expect(averageTime < BASELINE_ISSCREENON).assertTrue();
                    done();
                }
            });
        }
    })

    console.log("*************Power Performance end*************");
})
}
