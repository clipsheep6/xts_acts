/**
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

import { describe, beforeAll, it, expect } from "@ohos/hypium";
import { BusinessError } from '@ohos.base';
import text from "@ohos.graphics.text"

export default function graphicFontListTest() {
  describe('graphicFontList_test', () => {
    beforeAll(() => {})

    /**
     * @tc.number    : SUB_BASIC_WMS_SPCIAL_XTS_GRAPHICTEXT_JS_API_001
     * @tc.name      : testGetSystemFontFullNameListByType001
     * @tc.desc      : To test interface getSystemFontFullNameListByType of text.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level3
     */
    it('testGetSystemFontFullNameListByType001', 7, async function (done) {
      let msg = "testGetSystemFontFullNameListByType001"
      console.info(msg + ' begin');
      try {
        let promise = text.getSystemFontFullNameListByType(text.SystemFontType.INSTALLED | text.SystemFontType.STYLISH)
        await promise.then(async (data) => {
          expect(data.length).not().assertEqual(0)
          done()
        }).catch((err) => {
          console.error(msg + ` Get all desc failed, code is ${err.code}, message is ${err.message}`);
          expect().assertFail();
          done()
        })
      } catch (err) {
        console.info(msg + ' failed, Cause: ' + JSON.stringify(err));
        expect().assertFail();
        done()
      }
    })

    /**
     * @tc.number    : SUB_BASIC_WMS_SPCIAL_XTS_GRAPHICTEXT_JS_API_002
     * @tc.name      : testGetSystemFontFullNameListByType002
     * @tc.desc      : To test interface getSystemFontFullNameListByType of text.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level3
     */
    it('testGetSystemFontFullNameListByType002', 7, async function (done) {
      let msg = "testGetSystemFontFullNameListByType002"
      console.info(msg + ' begin');
      try {
        let promise = text.getSystemFontFullNameListByType(0b10000)
        await promise.then(async (data) => {
          expect(data.length).assertEqual(0);
          done();
        }).catch((err) => {
          console.error(msg + ` Get bold and italic desc failed, code is ${err.code}, message is ${err.message}`);
          expect().assertFail();
          done()
        })
      } catch (err) {
        console.info(msg + ' failed, Cause: ' + JSON.stringify(err));
        expect().assertFail();
        done()
      }
    })

    /**
     * @tc.number    : SUB_BASIC_WMS_SPCIAL_XTS_GRAPHICTEXT_JS_API_003
     * @tc.name      : testGetSystemFontFullNameListByType003
     * @tc.desc      : To test interface getSystemFontFullNameListByType of text.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level3
     */
    it('testGetSystemFontFullNameListByType003', 7, async function (done) {
      let msg = "testGetSystemFontFullNameListByType003"
      console.info(msg + ' begin');
      try {
        let promise = text.getSystemFontFullNameListByType(null);
        await promise.then(async (data) => {
          expect().assertFail();
          done()
        }).catch((err) => {
          expect(promise).assertPromiseIsRejected();
          done();
        })
      } catch (err) {
        console.info(msg + ' failed, Cause: ' + JSON.stringify(err));
        expect().assertFail();
        done()
      }
    })

    /**
     * @tc.number    : SUB_BASIC_WMS_SPCIAL_XTS_GRAPHICTEXT_JS_API_004
     * @tc.name      : testGetSystemFontFullNameListByType004
     * @tc.desc      : To test interface getSystemFontFullNameListByType of text.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level3
     */
    it('testGetSystemFontFullNameListByType004', 7, async function (done) {
      let msg = "testGetSystemFontFullNameListByType004"
      console.info(msg + ' begin');
      try {
        let promise = text.getSystemFontFullNameListByType(undefined);
        await promise.then(async (data) => {
          expect().assertFail();
          done()
        }).catch((err) => {
          expect(promise).assertPromiseIsRejected();
          done();
        })
      } catch (err) {
        console.info(msg + ' failed, Cause: ' + JSON.stringify(err));
        expect().assertFail();
        done()
      }
    })

    /**
     * @tc.number    : SUB_BASIC_WMS_SPCIAL_XTS_GRAPHICTEXT_JS_API_005
     * @tc.name      : testGetFontDescriptorByName001
     * @tc.desc      : To test interface getFontDescriptorByName of text.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level3
     */
    it('testGetFontDescriptorByName001', 7, async function (done) {
      let msg = "testGetFontDescriptorByName001"
      console.info(msg + ' begin');
      try {
        let promise = text.getFontDescriptorByName("HarmonyOS Sans")
        await promise.then(async (data) => {
          expect(data).not().assertEqual(undefined)
          done()
        }).catch((err) => {
          console.error(msg + ` Get all desc failed, code is ${err.code}, message is ${err.message}`);
          expect().assertFail();
          done()
        })
      } catch (err) {
        console.info(msg + ' failed, Cause: ' + JSON.stringify(err));
        expect().assertFail();
        done()
      }
    })

    /**
     * @tc.number    : SUB_BASIC_WMS_SPCIAL_XTS_GRAPHICTEXT_JS_API_006
     * @tc.name      : testGetFontDescriptorByName002
     * @tc.desc      : To test interface getFontDescriptorByName of text.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level3
     */
    it('testGetFontDescriptorByName002', 7, async function (done) {
      let msg = "testGetFontDescriptorByName002"
      console.info(msg + ' begin');
      try {
        let promise = text.getFontDescriptorByName("abcd")
        await promise.then(async (data) => {
          expect(data).assertEqual(undefined);
          done();
        }).catch((err) => {
          console.error(msg + ` Get bold and italic desc failed, code is ${err.code}, message is ${err.message}`);
          expect().assertFail();
          done()
        })
      } catch (err) {
        console.info(msg + ' failed, Cause: ' + JSON.stringify(err));
        expect().assertFail();
        done()
      }
    })

    /**
     * @tc.number    : SUB_BASIC_WMS_SPCIAL_XTS_GRAPHICTEXT_JS_API_007
     * @tc.name      : testGetFontDescriptorByName003
     * @tc.desc      : To test interface getFontDescriptorByName of text.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level3
     */
    it('testGetFontDescriptorByName003', 7, async function (done) {
      let msg = "testGetFontDescriptorByName003"
      console.info(msg + ' begin');
      try {
        let promise = text.getFontDescriptorByName(null);
        await promise.then(async (data) => {
          expect().assertFail();
          done()
        }).catch((err) => {
          expect(promise).assertPromiseIsRejected();
          done();
        })
      } catch (err) {
        console.info(msg + ' failed, Cause: ' + JSON.stringify(err));
        expect().assertFail();
        done()
      }
    })

    /**
     * @tc.number    : SUB_BASIC_WMS_SPCIAL_XTS_GRAPHICTEXT_JS_API_008
     * @tc.name      : testGetFontDescriptorByName004
     * @tc.desc      : To test interface getFontDescriptorByName of text.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level3
     */
    it('testGetFontDescriptorByName004', 7, async function (done) {
      let msg = "testGetFontDescriptorByName004"
      console.info(msg + ' begin');
      try {
        let promise = text.getFontDescriptorByName(undefined);
        await promise.then(async (data) => {
          expect().assertFail();
          done()
        }).catch((err) => {
          expect(promise).assertPromiseIsRejected();
          done();
        })
      } catch (err) {
        console.info(msg + ' failed, Cause: ' + JSON.stringify(err));
        expect().assertFail();
        done()
      }
    })
  })
}