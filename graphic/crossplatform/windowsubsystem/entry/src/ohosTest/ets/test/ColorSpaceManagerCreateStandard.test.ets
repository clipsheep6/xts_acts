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
import ColorSpaceManager from '@ohos.graphics.colorSpaceManager';
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium'

export default function ColorSpaceManagerCreateStandardTest() {
  describe('ColorSpaceManagerCreateStandardTest', () => {
    console.log('====>################################ ColorSpaceManagerCreateStandardTest Test start*************');

    /**
     * beforeAll: PreColorSpaceManagerCreateTest at the test suite level, which are executed before the test suite is executed.
     */
    beforeAll(() => {
      console.info("====>beforeAll: PreColorSpaceManagerCreateStandardTest are executed.");
    });

    /**
     * beforeEach: PreColorSpaceManagerCreateTest at the test case level, which are executed before each test case is executed.
     */
    beforeEach(() => {
      console.info("====>beforeEach: PreColorSpaceManagerCreateStandardTest is executed.");
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

    /* *
    * @tc.number  TEST_COLOR_SPACE_MANAGER_CREATE_STANDARD_001
    * @tc.name    Test ColorSpaceManager.create
    * @tc.desc    Create standard color gamut objects
    */
    it('TEST_COLOR_SPACE_MANAGER_CREATE_STANDARD_001', 0, async (done: Function) => {
      try {
        let ADOBE_RGB_1998: ColorSpaceManager.ColorSpace.ADOBE_RGB_1998 = ColorSpaceManager.ColorSpace.ADOBE_RGB_1998
        let value: ColorSpaceManager.ColorSpaceManager = ColorSpaceManager.create(ADOBE_RGB_1998)
        expect(value.getColorSpaceName()).assertEqual(1)
        done()
      } catch (err) {
        console.log(`Failed to TEST_COLOR_SPACE_MANAGER_CREATE_STANDARD_001. Cause: ` + JSON.stringify(err));
        expect(err.code == 18600001).assertTrue();
        done()
      }
    })

    /* *
     * @tc.number  TEST_COLOR_SPACE_MANAGER_CREATE_STANDARD_002
     * @tc.name    Test ColorSpaceManager.create
     * @tc.desc    Create standard color gamut objects
     */
    it('TEST_COLOR_SPACE_MANAGER_CREATE_STANDARD_002', 0, async (done: Function) => {
      try {
        let DCI_P3: ColorSpaceManager.ColorSpace.DCI_P3 = ColorSpaceManager.ColorSpace.DCI_P3
        let value: ColorSpaceManager.ColorSpaceManager = ColorSpaceManager.create(DCI_P3)
        expect(value.getColorSpaceName()).assertEqual(2)
        done()
      } catch (err) {
        console.log(`Failed to TEST_COLOR_SPACE_MANAGER_CREATE_STANDARD_002. Cause: ` + JSON.stringify(err));
        expect(err.code == 18600001).assertTrue();
        done()
      }
    })

    /* *
     * @tc.number  TEST_COLOR_SPACE_MANAGER_CREATE_STANDARD_003
     * @tc.name    Test ColorSpaceManager.create
     * @tc.desc    Create standard color gamut objects

     */
    it('TEST_COLOR_SPACE_MANAGER_CREATE_STANDARD_003', 0, async (done: Function) => {
      try {
        let DISPLAY_P3: ColorSpaceManager.ColorSpace.DISPLAY_P3 = ColorSpaceManager.ColorSpace.DISPLAY_P3
        let value: ColorSpaceManager.ColorSpaceManager = ColorSpaceManager.create(DISPLAY_P3)
        expect(value.getColorSpaceName()).assertEqual(3)
        done()
      } catch (err) {
        console.log(`Failed to TEST_COLOR_SPACE_MANAGER_CREATE_STANDARD_003. Cause: ` + JSON.stringify(err));
        expect(err.code == 18600001).assertTrue();
        done()
      }
    })

    /* *
    * @tc.number  TEST_COLOR_SPACE_MANAGER_CREATE_STANDARD_004
    * @tc.name    Test ColorSpaceManager.create
    * @tc.desc    Create standard color gamut objects
    */
    it('TEST_COLOR_SPACE_MANAGER_CREATE_STANDARD_004', 0, async (done: Function) => {
      try {
        let SRGB: ColorSpaceManager.ColorSpace.SRGB = ColorSpaceManager.ColorSpace.SRGB
        let value: ColorSpaceManager.ColorSpaceManager = ColorSpaceManager.create(SRGB)
        expect(value.getColorSpaceName()).assertEqual(4)
        done()
      } catch (err) {
        console.log(`Failed to TEST_COLOR_SPACE_MANAGER_CREATE_STANDARD_004. Cause: ` + JSON.stringify(err));
        expect(err.code == 18600001).assertTrue();
        done()
      }
    })

    /* *
    * @tc.number  TEST_COLOR_SPACE_MANAGER_CREATE_STANDARD_005
    * @tc.name    Test ColorSpaceManager.create
    * @tc.desc    Create standard color gamut objects
    */
    it('TEST_COLOR_SPACE_MANAGER_CREATE_STANDARD_005', 0, async (done: Function) => {
      try {
        let ADOBE_RGB_1998: ColorSpaceManager.ColorSpace.ADOBE_RGB_1998 = ColorSpaceManager.ColorSpace.ADOBE_RGB_1998
        let value: ColorSpaceManager.ColorSpaceManager = ColorSpaceManager.create(ADOBE_RGB_1998)
        expect(Array.isArray(value.getWhitePoint())).assertTrue()
        done()
      } catch (err) {
        console.log(`Failed to TEST_COLOR_SPACE_MANAGER_CREATE_STANDARD_005. Cause: ` + JSON.stringify(err));
        expect(err.code == 18600001).assertTrue();
        done()
      }
    })

    /* *
    * @tc.number  TEST_COLOR_SPACE_MANAGER_CREATE_STANDARD_006
    * @tc.name    Test ColorSpaceManager.create
    * @tc.desc    Create standard color gamut objects
    */
    it('TEST_COLOR_SPACE_MANAGER_CREATE_STANDARD_006', 0, async (done: Function) => {
      try {
        let DCI_P3: ColorSpaceManager.ColorSpace.DCI_P3 = ColorSpaceManager.ColorSpace.DCI_P3
        let value: ColorSpaceManager.ColorSpaceManager = ColorSpaceManager.create(DCI_P3)
        expect(Array.isArray(value.getWhitePoint())).assertTrue()
        done()
      } catch (err) {
        console.log(`Failed to TEST_COLOR_SPACE_MANAGER_CREATE_STANDARD_006. Cause: ` + JSON.stringify(err));
        expect(err.code == 18600001).assertTrue();
        done()
      }
    })

    /* *
    * @tc.number  TEST_COLOR_SPACE_MANAGER_CREATE_STANDARD_007
    * @tc.name    Test ColorSpaceManager.create
    * @tc.desc    Create standard color gamut objects
    */
    it('TEST_COLOR_SPACE_MANAGER_CREATE_STANDARD_007', 0, async (done: Function) => {
      try {
        let DISPLAY_P3: ColorSpaceManager.ColorSpace.DISPLAY_P3 = ColorSpaceManager.ColorSpace.DISPLAY_P3
        let value: ColorSpaceManager.ColorSpaceManager = ColorSpaceManager.create(DISPLAY_P3)
        expect(Array.isArray(value.getWhitePoint())).assertTrue()
        done()
      } catch (err) {
        console.log(`Failed to TEST_COLOR_SPACE_MANAGER_CREATE_STANDARD_007. Cause: ` + JSON.stringify(err));
        expect(err.code == 18600001).assertTrue();
        done()
      }
    })

    /* *
    * @tc.number  TEST_COLOR_SPACE_MANAGER_CREATE_STANDARD_008
    * @tc.name    Test ColorSpaceManager.create
    * @tc.desc    Create standard color gamut objects
    */
    it('TEST_COLOR_SPACE_MANAGER_CREATE_STANDARD_008', 0, async (done: Function) => {
      try {
        let SRGB: ColorSpaceManager.ColorSpace.SRGB = ColorSpaceManager.ColorSpace.SRGB
        let value: ColorSpaceManager.ColorSpaceManager = ColorSpaceManager.create(SRGB)
        // console.log()
        expect(Array.isArray(value.getWhitePoint())).assertTrue()
        done()
      } catch (err) {
        console.log(`Failed to TEST_COLOR_SPACE_MANAGER_CREATE_STANDARD_008. Cause: ` + JSON.stringify(err));
        expect(err.code == 18600001).assertTrue();
        done()
      }
    })

    /* *
    * @tc.number  TEST_COLOR_SPACE_MANAGER_CREATE_STANDARD_009
    * @tc.name    Test ColorSpaceManager.create
    * @tc.desc    Create standard color gamut objects
    */
    it('TEST_COLOR_SPACE_MANAGER_CREATE_STANDARD_009', 0, async (done: Function) => {
      try {
        let ADOBE_RGB_1998: ColorSpaceManager.ColorSpace.ADOBE_RGB_1998 = ColorSpaceManager.ColorSpace.ADOBE_RGB_1998
        let value: ColorSpaceManager.ColorSpaceManager = ColorSpaceManager.create(ADOBE_RGB_1998)
        expect(typeof value.getGamma() === 'number').assertTrue()
        done()
      } catch (err) {
        console.log(`Failed to TEST_COLOR_SPACE_MANAGER_CREATE_STANDARD_009. Cause: ` + JSON.stringify(err));
        expect(err.code == 18600001).assertTrue();
        done()
      }
    })

    /* *
    * @tc.number  TEST_COLOR_SPACE_MANAGER_CREATE_STANDARD_010
    * @tc.name    Test ColorSpaceManager.create
    * @tc.desc    Create standard color gamut objects
    */
    it('TEST_COLOR_SPACE_MANAGER_CREATE_STANDARD_010', 0, async (done: Function) => {
      try {
        let DCI_P3: ColorSpaceManager.ColorSpace.DCI_P3 = ColorSpaceManager.ColorSpace.DCI_P3
        let value: ColorSpaceManager.ColorSpaceManager = ColorSpaceManager.create(DCI_P3)
        expect(typeof value.getGamma() === 'number').assertTrue()
        done()
      } catch (err) {
        console.log(`Failed to TEST_COLOR_SPACE_MANAGER_CREATE_STANDARD_010. Cause: ` + JSON.stringify(err));
        expect(err.code == 18600001).assertTrue();
        done()
      }
    })

    /* *
    * @tc.number  TEST_COLOR_SPACE_MANAGER_CREATE_STANDARD_011
    * @tc.name    Test ColorSpaceManager.create
    * @tc.desc    Create standard color gamut objects
    */
    it('TEST_COLOR_SPACE_MANAGER_CREATE_STANDARD_011', 0, async (done: Function) => {
      try {
        let DISPLAY_P3: ColorSpaceManager.ColorSpace.DISPLAY_P3 = ColorSpaceManager.ColorSpace.DISPLAY_P3
        let value: ColorSpaceManager.ColorSpaceManager = ColorSpaceManager.create(DISPLAY_P3)
        expect(typeof value.getGamma() === 'number').assertTrue()
        done()
      } catch (err) {
        console.log(`Failed to TEST_COLOR_SPACE_MANAGER_CREATE_STANDARD_016. Cause: ` + JSON.stringify(err));
        expect(err.code == 18600001).assertTrue();
        done()
      }
    })

    /* *
   * @tc.number  TEST_COLOR_SPACE_MANAGER_CREATE_STANDARD_012
   * @tc.name    Test ColorSpaceManager.create
   * @tc.desc    Create standard color gamut objects

   */
    it('TEST_COLOR_SPACE_MANAGER_CREATE_STANDARD_012', 0, async (done: Function) => {
      try {
        let SRGB: ColorSpaceManager.ColorSpace.SRGB = ColorSpaceManager.ColorSpace.SRGB
        let value: ColorSpaceManager.ColorSpaceManager = ColorSpaceManager.create(SRGB)
        expect(typeof value.getGamma() === 'number').assertTrue()
        done()
      } catch (err) {
        console.log(`Failed to TEST_COLOR_SPACE_MANAGER_CREATE_STANDARD_012. Cause: ` + JSON.stringify(err));
        expect(err.code == 18600001).assertTrue();
        done()
      }
    })

    console.log('====>################################ ColorSpaceManagerCreateStandardTest Test end*************');
  })
}