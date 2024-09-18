/*
 * Copyright (c) 2024 Huawei Device Co., Ltd.
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

import vibrator from 'libentry.so'
import deviceInfo from '@ohos.deviceInfo'
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect, TestType, Size, Level } from '@ohos/hypium'

export default function ActsMiscdeviceNdkTest() {
  let isAvailable : boolean;
  const ABILITYJUDGMENT = canIUse('SystemCapability.Sensors.MiscDevice');
  describe('ActsMiscdeviceNdkTest', () => {
    beforeAll(async (done: Function) => {
      /*
       * @tc.setup: setup invoked before all testcases
       */
      console.info('beforeAll called')
      console.info('ActsMiscdeviceNdkTest Device type = ' + deviceInfo.deviceType);
      console.info('ActsMiscdeviceNdkTest isAvailable = ' + isAvailable);
      try {
        if (deviceInfo.deviceType === '2in1' || ABILITYJUDGMENT === false) {
          isAvailable = false;
          console.info('ActsMiscdeviceNdkTest isAvailable ' + isAvailable);
          done()
        }else {
          isAvailable = true;
          console.info('ActsMiscdeviceNdkTest isAvailable ' + isAvailable);
          done()
        }
      } catch(error) {
        console.error('ActsMiscdeviceNdkTest exception :' + JSON.stringify(error))
        done()
      }
    })

    afterAll(() => {
      /*
      * @tc.teardown: teardown invoked after all testcases
      */
      console.info('afterAll called')
    })

    beforeEach(() => {
      /*
      * @tc.setup: setup invoked before each testcases
      */
      console.info('beforeEach called')
    })

    afterEach(() => {
      /*
      * @tc.teardown: teardown invoked after each testcases
      */
      console.info('afterEach called')
    })

    const USAGE_ALARM = 1;
    const USAGE_RING = 2;
    const g_duration = 300;
    const UNSUPPORTED = 801;
    const PARAMETER_ERROR = 401;
    const DEVICE_OPERATION_FAILED = 14600101;
    let TAG = ""

    /**
     * @tc.number     : SEN_MISC_Miscdevice_ETS_0100
     * @tc.name       : testActsMiscdeviceNdkTest001
     * @tc.desc       : OH_Misc_ActsMiscdeviceNdkTest Interface testing
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 0
     */
    it('testActsMiscdeviceNdkTest001', TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL0, async (done: Function) => {
      TAG = "testActsMiscdeviceNdkTest001"
      console.info(TAG + ' isAvailable ' + isAvailable);
      if (isAvailable) {
        let ret = vibrator.startVibrator();
        console.info("Test MISC ret Result = " + ret);
        expect(ret).assertEqual(PARAMETER_ERROR);
        done()
      } else {
        console.log(TAG + ' is not supported on this device.');
        done();
      }
    });

    /**
     * @tc.number     : SEN_MISC_Miscdevice_ETS_0200
     * @tc.name       : testActsMiscdeviceNdkTest002
     * @tc.desc       : OH_Misc_ActsMiscdeviceNdkTest Interface testing
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testActsMiscdeviceNdkTest002', TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3 , async (done: Function) => {
      TAG = "testActsMiscdeviceNdkTest002"
      console.info(TAG + ' isAvailable ' + isAvailable);
      if (isAvailable) {
        let ret = vibrator.startVibrator();
        console.info("Test MISC ret Result = " + ret);
        expect(ret).assertEqual(0);
        ret = vibrator.cancel();
        expect(ret).assertEqual(0);
        done()
      } else {
        console.log(TAG + ' is not supported on this device.');
        done();
      }
    });

    /**
     * @tc.number     : SEN_MISC_Miscdevice_ETS_0300
     * @tc.name       : testActsMiscdeviceNdkTest003
     * @tc.desc       : OH_Misc_ActsMiscdeviceNdkTest Interface testing
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 3
     */
    it('testActsMiscdeviceNdkTest003', TestType.FUNCTION | Size.MEDIUMTEST | Level.LEVEL3 , async (done: Function) => {
      TAG = "testActsMiscdeviceNdkTest003"
      console.info(TAG + ' isAvailable ' + isAvailable);
      if (isAvailable) {
        let ret = vibrator.cancel();
        console.info("Test MISC ret Result = " + ret);
        if (ret == 0) {
          expect(false).assertTrue();
        } else {
          expect(true).assertTrue();
        }
        done()
      } else {
        console.log(TAG + ' is not supported on this device.');
        done();
      }
    });
  })
}