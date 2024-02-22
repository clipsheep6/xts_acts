/**
 * Copyright (c) 2021-2023 Huawei Device Co., Ltd.
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

import { describe, expect, it } from '@ohos/hypium';
import radio from '@ohos.telephony.radio';
import { BusinessError } from '@ohos.base';

export default function radioJsunit() {
  describe('ActsNetworkSearchTest', () => {

    const SLOT_0: number = 0;

    /**
     * @tc.number Telephony_NetworkSearch_getPrimarySlotId_Async_0200
     * @tc.name Test getPrimarySlotId(-1) to check the callback result
     * @tc.desc Function test
     */
    it('Telephony_NetworkSearch_getPrimarySlotId_Async_0200', 0, async (done: Function) => {
      radio.getPrimarySlotId((err: BusinessError, data: number) => {
        if (err) {
          console.log("Telephony_NetworkSearch_getPrimarySlotId_Async_0200 err:" + JSON.stringify(err));
          expect(false).assertTrue();
          done();
          return;
        }
        console.log("Telephony_NetworkSearch_getPrimarySlotId_Async_0200 data:" + JSON.stringify(data));
        expect(data == 0 || data == 1).assertTrue();
        done();
      });
    });

    /**
     * @tc.number Telephony_NetworkSearch_getPrimarySlotId_Async_0300
     * @tc.name testGetPrimarySlotId_0300
     * @tc.desc Test getPrimarySlotId api by promise.
     */
    it('Telephony_NetworkSearch_getPrimarySlotId_Promise_0200', 0, async (done: Function) => {
      try {
        let data: number = await radio.getPrimarySlotId();
        console.log("Telephony_NetworkSearch_getPrimarySlotId_Promise_0200 data:" + JSON.stringify(data));
        expect(data == 0 || data == 1).assertTrue();
        done();
      } catch (err) {
        let e: BusinessError = err as BusinessError;
        console.log("Telephony_NetworkSearch_getPrimarySlotId_Promise_0200 err:" + JSON.stringify(e));
        expect(false).assertTrue();
        done();
      }
    });

    /**
     * @tc.number Telephony_NetworkSearch_isNrSupported_Promise_0400
     * @tc.name Test The function setPrimarySlotId(0)
     * @tc.desc Function test
     */
    it('Telephony_NetworkSearch_isNrSupported_Promise_0400', 0, async (done: Function) => {
      let CaseName: string = "Telephony_NetworkSearch_isNrSupported_Promise_0400 ";
      try {
        let result: boolean = radio.isNrSupported();
        console.info("Result: " + result);
        let result0: boolean = radio.isNrSupported(SLOT_0);
        console.info("Result0: " + result0);
        console.info(CaseName + "is complete!");
        done();
      } catch (err) {
        let e: BusinessError = err as BusinessError;
        console.info(CaseName + "err " + JSON.stringify(e));
        expect(false).assertTrue();
        done();
      }
    });

    /**
     * @tc.number Telephony_NetworkSearch_isNRSupported_Async_0100
     * @tc.name Test The function isNRSupported(soltId)
     * @tc.desc Function test
     */
    it('Telephony_NetworkSearch_isNRSupported_Async_0100', 0, async (done: Function) => {
      let CaseName: string = "Telephony_NetworkSearch_isNRSupported_Async_0100 ";
      try {
        let result: boolean = radio.isNRSupported();
        console.info("Result: " + result);
        let result0: boolean = radio.isNRSupported(SLOT_0);
        console.info("Result0: " + result0);
        console.info(CaseName + "is complete!");
        done();
      } catch (err) {
        let e: BusinessError = err as BusinessError;
        console.info(CaseName + "err " + JSON.stringify(e));
        expect(false).assertTrue();
        done();
      }
    });

  })
}
