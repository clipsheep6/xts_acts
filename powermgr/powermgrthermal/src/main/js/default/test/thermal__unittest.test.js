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
import thermal from "@ohos.thermal"
import ThermalLevel from "@ohos.thermal"
import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from 'deccjsunit/index'

describe('appInfoTest', function () {
    console.log("*************Thermal API Test Begin*************");
    const MSEC_1000 = 1000;

    /* @tc.number thermal_manager_js_001
     * @tc.name Thermal_001
     * @tc.desc Thermal acquisition kit
     */
    it('Thermal_001', 0, async function (done) {
        console.info("enter");
        await new Promise((resolve, reject) =>{
            setTimeout(()=>{
                var level = thermal.getThermalLevel();
                console.info("level is: " + level);
                expect(level == -1).assertEqual('1');
                resolve();
            }, MSEC_1000);
        })
        done();
    })

    /* @tc.number thermal_manager_js_002
     * @tc.name Thermal_002
     * @tc.desc Thermal acquisition kit
     */
    it('Thermal_012', 0, async function (done) {
        var count = 0;
        thermal.subscribeThermalLevel((level) => {
            console.info("level is: " + level);
            count ++;
            expect(level == -1).assertEqual('1');
        })
        await new Promise((resolve, reject)=>{
            setTimeout(()=>{
                thermal.unsubscribeThermalLevel();
                resolve();
            }, MSEC_1000 * 20);
        })
        expect(count >= 2).assertEqual('1');
        done();
    })
})