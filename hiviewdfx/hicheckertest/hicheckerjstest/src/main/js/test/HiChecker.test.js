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
import hichecker from '@ohos.hichecker'
import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from '@ohos/hypium'

export default function HiCheckerTest() {
describe('HiCheckerTest', function () {

    beforeAll(function() {
        console.info('HiCheckerTest beforeAll called')
    })

    afterAll(function() {
        console.info('HiCheckerTest afterAll called')
    })

    beforeEach(function() {
        console.info('HiCheckerTest beforeEach called');
        hichecker.removeRule(hichecker.RULE_THREAD_CHECK_SLOW_PROCESS);
        hichecker.removeRule(hichecker.RULE_CHECK_SLOW_EVENT);
        hichecker.removeRule(hichecker.RULE_CHECK_ABILITY_CONNECTION_LEAK);
        hichecker.removeRule(hichecker.RULE_CAUTION_PRINT_LOG);
        hichecker.removeRule(hichecker.RULE_CAUTION_TRIGGER_CRASH);
    })

    afterEach(function() {
        console.info('HiCheckerTest afterEach called')
    })

    async function msleep(time) {
        let promise = new Promise((resolve, reject) => {
            setTimeout(() => resolve("done!"), time)
        });
        let result = await promise;
    }

    /**
     * @tc.number 
     * @tc.name DFX_DFR_Hichecker_Interface_0100
     * @tc.desc 
     */
    it('DFX_DFR_Hichecker_Interface_0100', 0, function () {
        console.info('DFX_DFR_Hichecker_Interface_0100 start');
        hichecker.addRule(hichecker.RULE_THREAD_CHECK_SLOW_PROCESS);
        let tmp = hichecker.contains(hichecker.RULE_THREAD_CHECK_SLOW_PROCESS);
        console.log('add rule success!');
        expect(tmp).assertTrue();
    })

    /**
     * @tc.number 
     * @tc.name DFX_DFR_Hichecker_Interface_0500
     * @tc.desc 
     */
     it('DFX_DFR_Hichecker_Interface_0500', 0, function () {
        console.info('DFX_DFR_Hichecker_Interface_0500 start');
        hichecker.addRule(hichecker.RULE_THREAD_CHECK_SLOW_PROCESS | hichecker.RULE_CHECK_SLOW_EVENT);
        hichecker.addRule(hichecker.RULE_CHECK_ABILITY_CONNECTION_LEAK | hichecker.RULE_CAUTION_PRINT_LOG);
        console.log('add rule success!');
        expect(hichecker.contains(hichecker.RULE_THREAD_CHECK_SLOW_PROCESS)).assertTrue();
        expect(hichecker.contains(hichecker.RULE_CHECK_SLOW_EVENT)).assertTrue();
        expect(hichecker.contains(hichecker.RULE_CHECK_ABILITY_CONNECTION_LEAK)).assertTrue();
        expect(hichecker.contains(hichecker.RULE_CAUTION_PRINT_LOG)).assertTrue();
        let tmp = (hichecker.RULE_THREAD_CHECK_SLOW_PROCESS | hichecker.RULE_CHECK_SLOW_EVENT | hichecker.RULE_CHECK_ABILITY_CONNECTION_LEAK | hichecker.RULE_CAUTION_PRINT_LOG);
        expect(hichecker.getRule() == tmp).assertTrue();
    })

    /**
     * @tc.number 
     * @tc.name DFX_DFR_Hichecker_Interface_0200
     * @tc.desc 
     */
     it('DFX_DFR_Hichecker_Interface_0200', 0, function () {
        console.info('DFX_DFR_Hichecker_Interface_0200 start');
        hichecker.addRule(-1);
        console.log('add wrong rule!');
        expect(hichecker.contains(-1)).assertEqual(false);
        hichecker.addRule(0);
        console.log('add wrong rule!');
        expect(hichecker.contains(0)).assertEqual(false);
        hichecker.addRule(999999);
        console.log('add wrong rule!');
        expect(hichecker.contains(-1)).assertEqual(false);
    })

    /**
     * @tc.number 
     * @tc.name DFX_DFR_Hichecker_Interface_1200
     * @tc.desc 
     */
     it('DFX_DFR_Hichecker_Interface_1200', 0, function () {
        console.info('DFX_DFR_Hichecker_Interface_1200 start');
        hichecker.addRule(hichecker.RULE_THREAD_CHECK_SLOW_PROCESS);
        expect(hichecker.contains(hichecker.RULE_THREAD_CHECK_SLOW_PROCESS)).assertTrue();
        console.log('add rule success!');
        hichecker.removeRule(hichecker.RULE_THREAD_CHECK_SLOW_PROCESS);
        expect(hichecker.contains(hichecker.RULE_THREAD_CHECK_SLOW_PROCESS)).assertEqual(false);
    })

    /**
     * @tc.number 
     * @tc.name DFX_DFR_Hichecker_Interface_0800
     * @tc.desc 
     */
     it('DFX_DFR_Hichecker_Interface_0800', 0, function () {
        console.info('DFX_DFR_Hichecker_Interface_0800 start');
        hichecker.addRule(hichecker.RULE_THREAD_CHECK_SLOW_PROCESS | hichecker.RULE_CHECK_SLOW_EVENT);
        hichecker.addRule(hichecker.RULE_CHECK_ABILITY_CONNECTION_LEAK | hichecker.RULE_CAUTION_PRINT_LOG);
        console.log('add rule success!');
        let tmp = (hichecker.RULE_CHECK_ABILITY_CONNECTION_LEAK | hichecker.RULE_CAUTION_PRINT_LOG);
        hichecker.removeRule(hichecker.RULE_THREAD_CHECK_SLOW_PROCESS | hichecker.RULE_CHECK_SLOW_EVENT);
        expect(hichecker.getRule() == tmp).assertTrue();
        hichecker.removeRule(hichecker.RULE_CHECK_ABILITY_CONNECTION_LEAK | hichecker.RULE_CAUTION_PRINT_LOG);
        expect(hichecker.getRule() == 0).assertTrue();
    })

    /**
     * @tc.number 
     * @tc.name DFX_DFR_Hichecker_Interface_1300
     * @tc.desc 
     */
     it('DFX_DFR_Hichecker_Interface_1300', 0, function () {
        console.info('DFX_DFR_Hichecker_Interface_1300 start');
        hichecker.addRule(hichecker.RULE_THREAD_CHECK_SLOW_PROCESS | hichecker.RULE_CHECK_SLOW_EVENT);
        hichecker.addRule(hichecker.RULE_CHECK_ABILITY_CONNECTION_LEAK | hichecker.RULE_CAUTION_PRINT_LOG);
        console.log('add rule success!');
        let tmp = (hichecker.RULE_THREAD_CHECK_SLOW_PROCESS | hichecker.RULE_CHECK_SLOW_EVENT | hichecker.RULE_CHECK_ABILITY_CONNECTION_LEAK | hichecker.RULE_CAUTION_PRINT_LOG);
        hichecker.removeRule(-1);
        expect(hichecker.getRule() == tmp).assertTrue();
        hichecker.removeRule(0);
        expect(hichecker.getRule() == tmp).assertTrue();
        hichecker.removeRule(999999);
        expect(hichecker.getRule() == tmp).assertTrue();
    })
    
})
}
