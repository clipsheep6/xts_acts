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
import Display from '@ohos.display';
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium'


export default function DisplayTest() {
  describe('DisplayTest', () => {
    console.log('====>################################DisplayTest Test start*************');

    /**
     * beforeAll: PreDisplayTest at the test suite level, which are executed before the test suite is executed.
     */
    beforeAll(() => {
      console.info("====>beforeAll: PreDisplay are executed.");
    });

    /**
     * beforeEach: PreDisplayTest at the test case level, which are executed before each test case is executed.
     */
    beforeEach(() => {
      console.info("====>beforeEach: PreDisplay is executed.");
    });

    /**
     * afterEach: Test case-level clearance conditions, which are executed after each test case is executed.
     */
    afterEach(() => {
      console.info("====>afterEach: Test case-level clearance conditions is executed.");
    });

    /**
     * afterAll: Test suite-level cleanup condition, which is executed after the test suite is executed.
     */
    afterAll(() => {
      console.info("====>afterAll: Test suite-level cleanup condition is executed");
    });

    let displayClass: Display.Display
    try {
      displayClass = Display.getDefaultDisplaySync();
    } catch (exception) {
      console.error('Failed to obtain the default display object. Code: ' + JSON.stringify(exception));
    }

    /**
     * @tc.number TEST_DISPLAY_001
     * @tc.name Test Display
     * @tc.desc The screen density of the display device
     */
    it('TEST_DISPLAY_001', 0, async (done: Function) => {
      try {
        let value = displayClass.densityDPI
        console.log('displayClass.densityDPI:', JSON.stringify(value))
        expect(typeof value === 'number').assertTrue()
        done()
      } catch (e) {
        console.log('TEST_DISPLAY_001 catch error msg: ' + e.message + 'error code: ' + e.code);
        done()
      }
    })

    /**
     * @tc.number TEST_DISPLAY_002
     * @tc.name Test Display
     * @tc.desc Displays the logical density of the device
     */
    it('TEST_DISPLAY_002', 0, async (done: Function) => {
      try {
        let value = displayClass.densityPixels
        console.log('displayClass.densityPixels:', JSON.stringify(value))
        expect(typeof value === 'number').assertTrue()
        done()
      } catch (e) {
        console.log('TEST_DISPLAY_002 catch error msg: ' + e.message + 'error code: ' + e.code);
        done()
      }
    })

    /**
     * @tc.number TEST_DISPLAY_003
     * @tc.name Test Display
     * @tc.desc The scaling factor of the display font of the display device
     */
    it('TEST_DISPLAY_003', 0, async (done: Function) => {
      try {
        let value = displayClass.scaledDensity
        console.log('displayClass.scaledDensity:', JSON.stringify(value))
        expect(typeof value === 'number').assertTrue()
        done()
      } catch (e) {
        console.log('TEST_DISPLAY_003 catch error msg: ' + e.message + 'error code: ' + e.code);
        done()
      }
    })

    console.log('====>################################DisplayTest Test end*************');
  })
}