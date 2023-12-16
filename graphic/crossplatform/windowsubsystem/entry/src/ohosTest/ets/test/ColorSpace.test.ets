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


export default function ColorSpaceTest() {
  describe('ColorSpaceTest', () => {
    console.log('====>################################ColorSpaceTest Test start*************');

    /**
     * beforeAll: PreColorSpaceTest at the test suite level, which are executed before the test suite is executed.
     */
    beforeAll(() => {
      console.info("====>beforeAll: PreColorSpace are executed.");
    });

    /**
     * beforeEach: PreColorSpaceTest at the test case level, which are executed before each test case is executed.
     */
    beforeEach(() => {
      console.info("====>beforeEach: PreColorSpace is executed.");
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

    /**
     * @tc.number TEST_COLOR_SPACE_001
     * @tc.name Test ColorSpace
     * @tc.desc Enumeration of color gamut types
     */
    it('TEST_COLOR_SPACE_001', 0, async (done: Function) => {
      try {
        let value: ColorSpaceManager.ColorSpace.UNKNOWN = ColorSpaceManager.ColorSpace.UNKNOWN
        console.log("TEST_COLOR_SPACE_001 " + value);
        expect(value).assertEqual(0)
        done()
      } catch (e) {
        console.log('TEST_COLOR_SPACE_001 catch error msg: ' + e.message + 'error code: ' + e.code);
        expect(e.code == 18600001).assertTrue();
        done()
      }
    })

    /**
     * @tc.number TEST_COLOR_SPACE_002
     * @tc.name Test ColorSpace
     * @tc.desc Enumeration of color gamut types
     */
    it('TEST_COLOR_SPACE_002', 0, async (done: Function) => {
      try {
        let value: ColorSpaceManager.ColorSpace.ADOBE_RGB_1998 = ColorSpaceManager.ColorSpace.ADOBE_RGB_1998
        console.log("TEST_COLOR_SPACE_002 " + value);
        expect(value).assertEqual(1)
        done()
      } catch (e) {
        console.log('TEST_COLOR_SPACE_002 catch error msg: ' + e.message + 'error code: ' + e.code);
        expect(e.code == 18600001).assertTrue();
        done()
      }
    })

    /**
     * @tc.number TEST_COLOR_SPACE_003
     * @tc.name Test ColorSpace
     * @tc.desc Enumeration of color gamut types
     */
    it('TEST_COLOR_SPACE_003', 0, async (done: Function) => {
      try {
        let value: ColorSpaceManager.ColorSpace.DCI_P3 = ColorSpaceManager.ColorSpace.DCI_P3
        console.log("TEST_COLOR_SPACE_003 " + value);
        expect(value).assertEqual(2)
        done()
      } catch (e) {
        console.log('TEST_COLOR_SPACE_003 catch error msg: ' + e.message + 'error code: ' + e.code);
        expect(e.code == 18600001).assertTrue();
        done()

      }
    })

    /**
     * @tc.number TEST_COLOR_SPACE_004
     * @tc.name Test ColorSpace
     * @tc.desc Enumeration of color gamut types
     */
    it('TEST_COLOR_SPACE_004', 0, async (done: Function) => {
      try {
        let value: ColorSpaceManager.ColorSpace.DISPLAY_P3 = ColorSpaceManager.ColorSpace.DISPLAY_P3
        console.log("TEST_COLOR_SPACE_004 " + value);
        expect(value).assertEqual(3)
        done()
      } catch (e) {
        console.log('TEST_COLOR_SPACE_004 catch error msg: ' + e.message + 'error code: ' + e.code);
        expect(e.code == 18600001).assertTrue();
        done()
      }
    })

    /**
     * @tc.number TEST_COLOR_SPACE_005
     * @tc.name Test ColorSpace
     * @tc.desc Enumeration of color gamut types
     */
    it('TEST_COLOR_SPACE_005', 0, async (done: Function) => {
      try {
        let value: ColorSpaceManager.ColorSpace.SRGB = ColorSpaceManager.ColorSpace.SRGB
        console.log("TEST_COLOR_SPACE_005 " + value);
        expect(value).assertEqual(4)
        done()
      } catch (e) {
        console.log('TEST_COLOR_SPACE_005 catch error msg: ' + e.message + 'error code: ' + e.code);
        expect(e.code == 18600001).assertTrue();
        done()
      }
    })

    /**
     * @tc.number TEST_COLOR_SPACE_006
     * @tc.name Test ColorSpace
     * @tc.desc Enumeration of color gamut types
     */
    it('TEST_COLOR_SPACE_006', 0, async (done: Function) => {
      try {
        let value: ColorSpaceManager.ColorSpace.CUSTOM = ColorSpaceManager.ColorSpace.CUSTOM
        console.log("TEST_COLOR_SPACE_006 " + value);
        expect(value).assertEqual(5)
        done()
      } catch (e) {
        console.log('TEST_COLOR_SPACE_006 catch error msg: ' + e.message + 'error code: ' + e.code);
        expect(e.code == 18600001).assertTrue();
        done()
      }
    })

    /**
     * @tc.number TEST_COLOR_SPACE_007
     * @tc.name Test ColorSpace
     * @tc.desc Enumeration of color gamut types
     */
    it('TEST_COLOR_SPACE_007', 0, async (done: Function) => {
      try {
        let value: ColorSpaceManager.ColorSpace.BT709 = ColorSpaceManager.ColorSpace.BT709
        console.log("TEST_COLOR_SPACE_007 " + value);
        expect(value).assertEqual(6)
        done()
      } catch (e) {
        console.log('TEST_COLOR_SPACE_006 catch error msg: ' + e.message + 'error code: ' + e.code);
        expect(e.code == 18600001).assertTrue();
        done()
      }
    })

    /**
     * @tc.number TEST_COLOR_SPACE_008
     * @tc.name Test ColorSpace
     * @tc.desc Enumeration of color gamut types
     */
    it('TEST_COLOR_SPACE_008', 0, async (done: Function) => {
      try {
        let value: ColorSpaceManager.ColorSpace.BT601_EBU = ColorSpaceManager.ColorSpace.BT601_EBU
        console.log("TEST_COLOR_SPACE_008 " + value);
        expect(value).assertEqual(7)
        done()
      } catch (e) {
        console.log('TEST_COLOR_SPACE_006 catch error msg: ' + e.message + 'error code: ' + e.code);
        expect(e.code == 18600001).assertTrue();
        done()
      }
    })

    /**
     * @tc.number TEST_COLOR_SPACE_009
     * @tc.name Test ColorSpace
     * @tc.desc Enumeration of color gamut types
     */
    it('TEST_COLOR_SPACE_009', 0, async (done: Function) => {
      try {
        let value: ColorSpaceManager.ColorSpace.BT601_SMPTE_C = ColorSpaceManager.ColorSpace.BT601_SMPTE_C
        console.log("TEST_COLOR_SPACE_009 " + value);
        expect(value).assertEqual(8)
        done()
      } catch (e) {
        console.log('TEST_COLOR_SPACE_00 catch error msg: ' + e.message + 'error code: ' + e.code);
        expect(e.code == 18600001).assertTrue();
        done()
      }
    })

    /**
     * @tc.number TEST_COLOR_SPACE_010
     * @tc.name Test ColorSpace
     * @tc.desc Enumeration of color gamut types
     */
    it('TEST_COLOR_SPACE_010', 0, async (done: Function) => {
      try {
        let value: ColorSpaceManager.ColorSpace.BT2020_HLG = ColorSpaceManager.ColorSpace.BT2020_HLG
        console.log("TEST_COLOR_SPACE_008 " + value);
        expect(value).assertEqual(9)
        done()
      } catch (e) {
        console.log('TEST_COLOR_SPACE_006 catch error msg: ' + e.message + 'error code: ' + e.code);
        expect(e.code == 18600001).assertTrue();
        done()
      }
    })

    /**
     * @tc.number TEST_COLOR_SPACE_011
     * @tc.name Test ColorSpace
     * @tc.desc Enumeration of color gamut types
     */
    it('TEST_COLOR_SPACE_011', 0, async (done: Function) => {
      try {
        let value: ColorSpaceManager.ColorSpace.BT2020_PQ = ColorSpaceManager.ColorSpace.BT2020_PQ
        console.log("TEST_COLOR_SPACE_008 " + value);
        expect(value).assertEqual(10)
        done()
      } catch (e) {
        console.log('TEST_COLOR_SPACE_006 catch error msg: ' + e.message + 'error code: ' + e.code);
        expect(e.code == 18600001).assertTrue();
        done()
      }
    })

    /**
     * @tc.number TEST_COLOR_SPACE_012
     * @tc.name Test ColorSpace
     * @tc.desc Enumeration of color gamut types
     */
    it('TEST_COLOR_SPACE_012', 0, async (done: Function) => {
      try {
        let value: ColorSpaceManager.ColorSpace.P3_HLG = ColorSpaceManager.ColorSpace.P3_HLG
        console.log("TEST_COLOR_SPACE_008 " + value);
        expect(value).assertEqual(11)
        done()
      } catch (e) {
        console.log('TEST_COLOR_SPACE_006 catch error msg: ' + e.message + 'error code: ' + e.code);
        expect(e.code == 18600001).assertTrue();
        done()
      }
    })

    /**
     * @tc.number TEST_COLOR_SPACE_013
     * @tc.name Test ColorSpace
     * @tc.desc Enumeration of color gamut types
     */
    it('TEST_COLOR_SPACE_013', 0, async (done: Function) => {
      try {
        let value: ColorSpaceManager.ColorSpace.P3_PQ = ColorSpaceManager.ColorSpace.P3_PQ
        console.log("TEST_COLOR_SPACE_008 " + value);
        expect(value).assertEqual(12)
        done()
      } catch (e) {
        console.log('TEST_COLOR_SPACE_006 catch error msg: ' + e.message + 'error code: ' + e.code);
        expect(e.code == 18600001).assertTrue();
        done()
      }
    })

    /**
     * @tc.number TEST_COLOR_SPACE_014
     * @tc.name Test ColorSpace
     * @tc.desc Enumeration of color gamut types
     */
    it('TEST_COLOR_SPACE_014', 0, async (done: Function) => {
      try {
        let value: ColorSpaceManager.ColorSpace.ADOBE_RGB_1998_LIMIT = ColorSpaceManager.ColorSpace.ADOBE_RGB_1998_LIMIT
        console.log("TEST_COLOR_SPACE_008 " + value);
        expect(value).assertEqual(13)
        done()
      } catch (e) {
        console.log('TEST_COLOR_SPACE_006 catch error msg: ' + e.message + 'error code: ' + e.code);
        expect(e.code == 18600001).assertTrue();
        done()
      }
    })

    /**
     * @tc.number TEST_COLOR_SPACE_015
     * @tc.name Test ColorSpace
     * @tc.desc Enumeration of color gamut types
     */
    it('TEST_COLOR_SPACE_015', 0, async (done: Function) => {
      try {
        let value: ColorSpaceManager.ColorSpace.DISPLAY_P3_LIMIT = ColorSpaceManager.ColorSpace.DISPLAY_P3_LIMIT
        console.log("TEST_COLOR_SPACE_008 " + value);
        expect(value).assertEqual(14)
        done()
      } catch (e) {
        console.log('TEST_COLOR_SPACE_006 catch error msg: ' + e.message + 'error code: ' + e.code);
        expect(e.code == 18600001).assertTrue();
        done()
      }
    })

    /**
     * @tc.number TEST_COLOR_SPACE_016
     * @tc.name Test ColorSpace
     * @tc.desc Enumeration of color gamut types
     */
    it('TEST_COLOR_SPACE_016', 0, async (done: Function) => {
      try {
        let value: ColorSpaceManager.ColorSpace.SRGB_LIMIT = ColorSpaceManager.ColorSpace.SRGB_LIMIT
        console.log("TEST_COLOR_SPACE_008 " + value);
        expect(value).assertEqual(15)
        done()
      } catch (e) {
        console.log('TEST_COLOR_SPACE_006 catch error msg: ' + e.message + 'error code: ' + e.code);
        expect(e.code == 18600001).assertTrue();
        done()
      }
    })

    /**
     * @tc.number TEST_COLOR_SPACE_017
     * @tc.name Test ColorSpace
     * @tc.desc Enumeration of color gamut types
     */
    it('TEST_COLOR_SPACE_017', 0, async (done: Function) => {
      try {
        let value: ColorSpaceManager.ColorSpace.BT709_LIMIT = ColorSpaceManager.ColorSpace.BT709_LIMIT
        console.log("TEST_COLOR_SPACE_008 " + value);
        expect(value).assertEqual(16)
        done()
      } catch (e) {
        console.log('TEST_COLOR_SPACE_006 catch error msg: ' + e.message + 'error code: ' + e.code);
        expect(e.code == 18600001).assertTrue();
        done()
      }
    })

    /**
     * @tc.number TEST_COLOR_SPACE_018
     * @tc.name Test ColorSpace
     * @tc.desc Enumeration of color gamut types
     */
    it('TEST_COLOR_SPACE_018', 0, async (done: Function) => {
      try {
        let value: ColorSpaceManager.ColorSpace.BT601_EBU_LIMIT = ColorSpaceManager.ColorSpace.BT601_EBU_LIMIT
        console.log("TEST_COLOR_SPACE_008 " + value);
        expect(value).assertEqual(17)
        done()
      } catch (e) {
        console.log('TEST_COLOR_SPACE_006 catch error msg: ' + e.message + 'error code: ' + e.code);
        expect(e.code == 18600001).assertTrue();
        done()
      }
    })

    /**
     * @tc.number TEST_COLOR_SPACE_019
     * @tc.name Test ColorSpace
     * @tc.desc Enumeration of color gamut types
     */
    it('TEST_COLOR_SPACE_019', 0, async (done: Function) => {
      try {
        let value: ColorSpaceManager.ColorSpace.BT601_SMPTE_C_LIMIT = ColorSpaceManager.ColorSpace.BT601_SMPTE_C_LIMIT
        console.log("TEST_COLOR_SPACE_008 " + value);
        expect(value).assertEqual(18)
        done()
      } catch (e) {
        console.log('TEST_COLOR_SPACE_006 catch error msg: ' + e.message + 'error code: ' + e.code);
        expect(e.code == 18600001).assertTrue();
        done()
      }
    })

    /**
     * @tc.number TEST_COLOR_SPACE_019
     * @tc.name Test ColorSpace
     * @tc.desc Enumeration of color gamut types
     */
    it('TEST_COLOR_SPACE_020', 0, async (done: Function) => {
      try {
        let value: ColorSpaceManager.ColorSpace.BT2020_HLG_LIMIT = ColorSpaceManager.ColorSpace.BT2020_HLG_LIMIT
        console.log("TEST_COLOR_SPACE_008 " + value);
        expect(value).assertEqual(19)
        done()
      } catch (e) {
        console.log('TEST_COLOR_SPACE_006 catch error msg: ' + e.message + 'error code: ' + e.code);
        expect(e.code == 18600001).assertTrue();
        done()
      }
    })

    /**
     * @tc.number TEST_COLOR_SPACE_021
     * @tc.name Test ColorSpace
     * @tc.desc Enumeration of color gamut types
     */
    it('TEST_COLOR_SPACE_021', 0, async (done: Function) => {
      try {
        let value: ColorSpaceManager.ColorSpace.BT2020_PQ_LIMIT = ColorSpaceManager.ColorSpace.BT2020_PQ_LIMIT
        console.log("TEST_COLOR_SPACE_008 " + value);
        expect(value).assertEqual(20)
        done()
      } catch (e) {
        console.log('TEST_COLOR_SPACE_006 catch error msg: ' + e.message + 'error code: ' + e.code);
        expect(e.code == 18600001).assertTrue();
        done()
      }
    })

    /**
     * @tc.number TEST_COLOR_SPACE_022
     * @tc.name Test ColorSpace
     * @tc.desc Enumeration of color gamut types
     */
    it('TEST_COLOR_SPACE_022', 0, async (done: Function) => {
      try {
        let value: ColorSpaceManager.ColorSpace.P3_HLG_LIMIT = ColorSpaceManager.ColorSpace.P3_HLG_LIMIT
        console.log("TEST_COLOR_SPACE_008 " + value);
        expect(value).assertEqual(21)
        done()
      } catch (e) {
        console.log('TEST_COLOR_SPACE_006 catch error msg: ' + e.message + 'error code: ' + e.code);
        expect(e.code == 18600001).assertTrue();
        done()
      }
    })

    /**
     * @tc.number TEST_COLOR_SPACE_023
     * @tc.name Test ColorSpace
     * @tc.desc Enumeration of color gamut types
     */
    it('TEST_COLOR_SPACE_023', 0, async (done: Function) => {
      try {
        let value: ColorSpaceManager.ColorSpace.P3_PQ_LIMIT = ColorSpaceManager.ColorSpace.P3_PQ_LIMIT
        console.log("TEST_COLOR_SPACE_008 " + value);
        expect(value).assertEqual(22)
        done()
      } catch (e) {
        console.log('TEST_COLOR_SPACE_006 catch error msg: ' + e.message + 'error code: ' + e.code);
        expect(e.code == 18600001).assertTrue();
        done()
      }
    })

    /**
     * @tc.number TEST_COLOR_SPACE_024
     * @tc.name Test ColorSpace
     * @tc.desc Enumeration of color gamut types
     */
    it('TEST_COLOR_SPACE_024', 0, async (done: Function) => {
      try {
        let value: ColorSpaceManager.ColorSpace.LINEAR_P3 = ColorSpaceManager.ColorSpace.LINEAR_P3
        console.log("TEST_COLOR_SPACE_008 " + value);
        expect(value).assertEqual(23)
        done()
      } catch (e) {
        console.log('TEST_COLOR_SPACE_006 catch error msg: ' + e.message + 'error code: ' + e.code);
        expect(e.code == 18600001).assertTrue();
        done()
      }
    })

    /**
     * @tc.number TEST_COLOR_SPACE_025
     * @tc.name Test ColorSpace
     * @tc.desc Enumeration of color gamut types
     */
    it('TEST_COLOR_SPACE_025', 0, async (done: Function) => {
      try {
        let value: ColorSpaceManager.ColorSpace.LINEAR_BT709 = ColorSpaceManager.ColorSpace.LINEAR_BT709
        console.log("TEST_COLOR_SPACE_008 " + value);
        expect(value).assertEqual(24)
        done()
      } catch (e) {
        console.log('TEST_COLOR_SPACE_006 catch error msg: ' + e.message + 'error code: ' + e.code);
        expect(e.code == 18600001).assertTrue();
        done()
      }
    })

    /**
     * @tc.number TEST_COLOR_SPACE_026
     * @tc.name Test ColorSpace
     * @tc.desc Enumeration of color gamut types
     */
    it('TEST_COLOR_SPACE_026', 0, async (done: Function) => {
      try {
        let value: ColorSpaceManager.ColorSpace.LINEAR_BT2020 = ColorSpaceManager.ColorSpace.LINEAR_BT2020
        console.log("TEST_COLOR_SPACE_008 " + value);
        expect(value).assertEqual(25)
        done()
      } catch (e) {
        console.log('TEST_COLOR_SPACE_006 catch error msg: ' + e.message + 'error code: ' + e.code);
        expect(e.code == 18600001).assertTrue();
        done()
      }
    })

    /**
     * @tc.number TEST_COLOR_SPACE_027
     * @tc.name Test ColorSpace
     * @tc.desc Enumeration of color gamut types
     */
    it('TEST_COLOR_SPACE_027', 0, async (done: Function) => {
      try {
        let value: ColorSpaceManager.ColorSpace.DISPLAY_SRGB = ColorSpaceManager.ColorSpace.DISPLAY_SRGB
        console.log("TEST_COLOR_SPACE_008 " + value);
        expect(value).assertEqual(4)
        done()
      } catch (e) {
        console.log('TEST_COLOR_SPACE_006 catch error msg: ' + e.message + 'error code: ' + e.code);
        expect(e.code == 18600001).assertTrue();
        done()
      }
    })

    /**
     * @tc.number TEST_COLOR_SPACE_028
     * @tc.name Test ColorSpace
     * @tc.desc Enumeration of color gamut types
     */
    it('TEST_COLOR_SPACE_028', 0, async (done: Function) => {
      try {
        let value: ColorSpaceManager.ColorSpace.DISPLAY_P3_SRGB = ColorSpaceManager.ColorSpace.DISPLAY_P3_SRGB
        console.log("TEST_COLOR_SPACE_008 " + value);
        expect(value).assertEqual(3)
        done()
      } catch (e) {
        console.log('TEST_COLOR_SPACE_006 catch error msg: ' + e.message + 'error code: ' + e.code);
        expect(e.code == 18600001).assertTrue();
        done()
      }
    })

    /**
     * @tc.number TEST_COLOR_SPACE_029
     * @tc.name Test ColorSpace
     * @tc.desc Enumeration of color gamut types
     */
    it('TEST_COLOR_SPACE_029', 0, async (done: Function) => {
      try {
        let value: ColorSpaceManager.ColorSpace.DISPLAY_P3_HLG = ColorSpaceManager.ColorSpace.DISPLAY_P3_HLG
        console.log("TEST_COLOR_SPACE_008 " + value);
        expect(value).assertEqual(11)
        done()
      } catch (e) {
        console.log('TEST_COLOR_SPACE_006 catch error msg: ' + e.message + 'error code: ' + e.code);
        expect(e.code == 18600001).assertTrue();
        done()
      }
    })

    /**
     * @tc.number TEST_COLOR_SPACE_030
     * @tc.name Test ColorSpace
     * @tc.desc Enumeration of color gamut types
     */
    it('TEST_COLOR_SPACE_030', 0, async (done: Function) => {
      try {
        let value: ColorSpaceManager.ColorSpace.DISPLAY_P3_PQ = ColorSpaceManager.ColorSpace.DISPLAY_P3_PQ
        console.log("TEST_COLOR_SPACE_008 " + value);
        expect(value).assertEqual(12)
        done()
      } catch (e) {
        console.log('TEST_COLOR_SPACE_006 catch error msg: ' + e.message + 'error code: ' + e.code);
        expect(e.code == 18600001).assertTrue();
        done()
      }
    })

    /**
     * @tc.number TEST_COLOR_SPACE_031
     * @tc.name Test ColorSpace
     * @tc.desc Enumeration of color gamut types
     */
    it('TEST_COLOR_SPACE_031', 0, async (done: Function) => {
      try {
        let value: ColorSpaceManager.ColorSpace.CUSTOM = ColorSpaceManager.ColorSpace.CUSTOM
        console.log("TEST_COLOR_SPACE_008 " + value);
        expect(value).assertEqual(5)
        done()
      } catch (e) {
        console.log('TEST_COLOR_SPACE_006 catch error msg: ' + e.message + 'error code: ' + e.code);
        expect(e.code == 18600001).assertTrue();
        done()
      }
    })

    console.log('====>################################ColorSpaceTest Test end*************');
  })
}