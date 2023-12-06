/*
 * Copyright (C) 2023 Huawei Device Co., Ltd.
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
import myvibratorNdk from 'libvibratorNdkTest.so'

const Tag = 'vibrator_ndk_test:'

export default function nativeApiVibratorCapiunit() {
    describe('napiTest', function () {
    
        function sleep(ms) {
            return new Promise(resolve => setTimeout(resolve, ms));
        }

        /* *
            * @tc.number    : VIBRATOR_STARTONCE_CAPITEST_001
            * @tc.name      : Test OH_Vibrator_PlayVibration
            * @tc.desc      : Controls this vibrator to perform a one-shot vibration at a given duration
            * @tc.size      :
            * @tc.type      : Functional
            * @tc.level     : FWK Layer
        */
        it('VIBRATOR_STARTONCE_CAPITEST_001', 0, function () {

            console.info('VIBRATOR_STARTONCE_CAPITEST_001 test |begin');
            let a = myvibratorNdk.startOnce(4000, 123, 6);
            sleep(4000);
            console.info(Tag + "VIBRATOR_STARTONCE_CAPITEST_001-------------:" + a);
            expect(a).assertEqual(0);
            console.info('VIBRATOR_STARTONCE_CAPITEST_001 test |end');
        })

        /* *
            * @tc.number    : VIBRATOR_STARTONCE_CAPITEST_002
            * @tc.name      : Test OH_Vibrator_PlayVibration
            * @tc.desc      : Controls this vibrator when use a wrong vibrator usage scenario
            * @tc.size      :
            * @tc.type      : Functional
            * @tc.level     : FWK Layer
        */
        it('VIBRATOR_STARTONCE_CAPITEST_002', 0, function () {

            console.info('VIBRATOR_STARTONCE_CAPITEST_002 test |begin');
            let a = myvibratorNdk.startOnce(1000, 123, 20);
            console.info(Tag + "VIBRATOR_STARTONCE_CAPITEST_002-------------:" + a);
            expect(a).assertEqual(401);
            console.info('VIBRATOR_STARTONCE_CAPITEST_002 test |end');
        })

        /* *
            * @tc.number    : VIBRATOR_STARTONCE_CAPITEST_003
            * @tc.name      : Test OH_Vibrator_PlayVibration
            * @tc.desc      : Controls this vibrator to perform a one-shot vibration at 0 millisecond
            * @tc.size      :
            * @tc.type      : Functional
            * @tc.level     : FWK Layer
        */
        it('VIBRATOR_STARTONCE_CAPITEST_003', 0, function () {

            console.info('VIBRATOR_STARTONCE_CAPITEST_003 test |begin');
            let a = myvibratorNdk.startOnce(0, 123, 6);
            console.info(Tag + "VIBRATOR_STARTONCE_CAPITEST_003-------------:" + a);
            expect(a).assertEqual(401);
            console.info('VIBRATOR_STARTONCE_CAPITEST_003 test |end');
        })

        /* *
            * @tc.number    : VIBRATOR_CANCEL_CAPITEST_001
            * @tc.name      : Test OH_Vibrator_PlayVibration, OH_Vibrator_Cancel
            * @tc.desc      : Controls this vibrator to cancel vibration when it vibration
            * @tc.size      :
            * @tc.type      : Functional
            * @tc.level     : FWK Layer
        */
        it('VIBRATOR_CANCEL_CAPITEST_001', 0, function () {
            console.info('VIBRATOR_CANCEL_CAPITEST_001 test |begin');
            let a = myvibratorNdk.startOnce(4000, 123, 6);
            console.info(Tag + "VIBRATOR_CANCEL_CAPITEST_001-------------a:" + a);
            sleep(2000);
            a = myvibratorNdk.cancel();
            console.info(Tag + "VIBRATOR_CANCEL_CAPITEST_001-------------a:" + a);
            expect(a).assertEqual(0);
            console.info('VIBRATOR_CANCEL_CAPITEST_001 test |end');
        })

        /* *
            * @tc.number    : VIBRATOR_CANCEL_CAPITEST_002
            * @tc.name      : Test OH_Vibrator_PlayVibration, OH_Vibrator_Cancel
            * @tc.desc      : Controls this vibrator to cancel vibration when it in a quiescent state
            * @tc.size      :
            * @tc.type      : Functional
            * @tc.level     : FWK Layer
        */
        it('VIBRATOR_CANCEL_CAPITEST_002', 0, function () {
            console.info('VIBRATOR_CANCEL_CAPITEST_001 test |begin');
            let a = myvibratorNdk.cancel();
            console.info(Tag + "VIBRATOR_CANCEL_CAPITEST_002-------------a:" + a);
            expect(a).assertEqual(14600101);
            console.info('VIBRATOR_CANCEL_CAPITEST_002 test |end');
        })
    })
}
