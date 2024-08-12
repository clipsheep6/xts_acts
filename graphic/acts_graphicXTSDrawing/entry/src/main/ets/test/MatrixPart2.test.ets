/*
 * Copyright (c) 2024 Shenzhen Kaihong Digital Industry Development Co., Ltd.
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

import { afterAll, afterEach, beforeAll, beforeEach, describe, expect, it } from '@ohos/hypium';
import drawing from '@ohos.graphics.drawing';
import { getEnumCount } from './utils';
import common2D from '@ohos.graphics.common2D';
const loop_times = 20;

export default function drawingTsMatrixPart2Test() {
  describe('drawingTsMatrixPart2Test', () => {
    const DEFAULT = 0;
    // Defines a test suite. Two parameters are supported: test suite name and test suite function.
    beforeAll(() => {

    })
    beforeEach(() => {
      // Presets an action, which is performed before each unit test case starts.
      // The number of execution times is the same as the number of test cases defined by **it**.
      // This API supports only one parameter: preset action function.
    })
    afterEach(() => {
      // Presets a clear action, which is performed after each unit test case ends.
      // The number of execution times is the same as the number of test cases defined by **it**.
      // This API supports only one parameter: clear action function.
    })
    afterAll(() => {
      // Presets a clear action, which is performed after all test cases of the test suite end.
      // This API supports only one parameter: clear action function.
    })

    /**
     * @tc.number    : SUB_BASIC_GRAPHICS_SPECIAL_API_TS_DRAWING_MATRIX_1200
     * @tc.name      : testMatrixPostTranslateNormal
     * @tc.desc      : testMatrixPostTranslateNormal
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level0
     */
    it('testMatrixPostTranslateNormal', DEFAULT, () => {
      const msg = 'testMatrixPostTranslateNormal';
      try {
        let matrix = new drawing.Matrix();
        matrix.postTranslate(100, 100);
        let widths : number[] = matrix.getAll();
        expect(widths.length == 9).assertTrue();
        expect(matrix != null).assertTrue();
        console.info(msg + ' postTranslate successed,width:'+ widths.length + JSON.stringify(matrix));
      } catch (e) {
        console.info(msg + ` postTranslate errorCode is:  ${e.code} + errormsg is: ${e.message}`);
        expect().assertFail()
      }

      try {
        let matrix = new drawing.Matrix();
        matrix.postTranslate(100.1, 100.1);
        let widths : number[] = matrix.getAll();
        expect(widths.length == 9).assertTrue();
        expect(matrix != null).assertTrue();
        console.info(msg + ' postTranslate successed,width:'+ widths.length + JSON.stringify(matrix));
      } catch (e) {
        console.info(msg + ` postTranslate errorCode is:  ${e.code} + errormsg is: ${e.message}`);
        expect().assertFail()
      }

      try {
        let matrix = new drawing.Matrix();
        matrix.postTranslate(-100, 100);
        let widths : number[] = matrix.getAll();
        expect(widths.length == 9).assertTrue();
        expect(matrix != null).assertTrue();
        console.info(msg + ' postTranslate successed,width:'+ widths.length + JSON.stringify(matrix));
      } catch (e) {
        console.info(msg + ` postTranslate errorCode is:  ${e.code} + errormsg is: ${e.message}`);
        expect().assertFail()
      }

      try {
        let matrix = new drawing.Matrix();
        matrix.postTranslate(100, -150);
        let widths : number[] = matrix.getAll();
        expect(widths.length == 9).assertTrue();
        expect(matrix != null).assertTrue();
        console.info(msg + ' postTranslate successed,width:'+ widths.length + JSON.stringify(matrix));
      } catch (e) {
        console.info(msg + ` postTranslate errorCode is:  ${e.code} + errormsg is: ${e.message}`);
        expect().assertFail()
      }

      try {
        let matrix = new drawing.Matrix();
        matrix.postTranslate(Number.MAX_VALUE, Number.MAX_VALUE);
        let widths : number[] = matrix.getAll();
        expect(widths.length == 9).assertTrue();
        expect(matrix != null).assertTrue();
        console.info(msg + ' postTranslate successed,width:'+ widths.length + JSON.stringify(matrix));
      } catch (e) {
        console.info(msg + ` postTranslate errorCode is:  ${e.code} + errormsg is: ${e.message}`);
        expect().assertFail()
      }
    })

    /**
     * @tc.number    : SUB_BASIC_GRAPHICS_SPECIAL_API_TS_DRAWING_MATRIX_1201
     * @tc.name      : testMatrixPostTranslateNull
     * @tc.desc      : testMatrixPostTranslateNull
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level3
     */
    it('testMatrixPostTranslateNull', DEFAULT, () => {
      const msg = 'testMatrixPostTranslateNull';
      try {
        let matrix = new drawing.Matrix();
        matrix.postTranslate(null, 100,);
        console.info(msg + ' postTranslate successed');
      } catch (e) {
        console.info(msg + ` postTranslate errorCode is:  ${e.code} + errormsg is: ${e.message}`);
        expect(e.code).assertEqual(401);
      }

      try {
        let matrix = new drawing.Matrix();
        matrix.postTranslate(100, null);
        console.info(msg + ' postTranslate successed');
      } catch (e) {
        console.info(msg + ` postTranslate errorCode is:  ${e.code} + errormsg is: ${e.message}`);
        expect(e.code).assertEqual(401);
      }

      try {
        let matrix = new drawing.Matrix();
        matrix.postTranslate(undefined, 100,);
        console.info(msg + ' postTranslate successed');
      } catch (e) {
        console.info(msg + ` postTranslate errorCode is:  ${e.code} + errormsg is: ${e.message}`);
        expect(e.code).assertEqual(401);
      }

      try {
        let matrix = new drawing.Matrix();
        matrix.postTranslate(100, undefined);
        console.info(msg + ' postTranslate successed');
      } catch (e) {
        console.info(msg + ` postTranslate errorCode is:  ${e.code} + errormsg is: ${e.message}`);
        expect(e.code).assertEqual(401);
      }
    })

    /**
     * @tc.number    : SUB_BASIC_GRAPHICS_SPECIAL_API_TS_DRAWING_MATRIX_1202
     * @tc.name      : testMatrixPostTranslateMismatch
     * @tc.desc      : testMatrixPostTranslateMismatch
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level3
     */
    it('testMatrixPostTranslateMismatch', DEFAULT, () => {
      const msg = 'testMatrixPostTranslateMismatch';
      try {
        let matrix = new drawing.Matrix();
        matrix.postTranslate(90, 100, 100);
        console.info(msg + ' postTranslate successed');
      } catch (e) {
        console.info(msg + ` postTranslate errorCode is:  ${e.code} + errormsg is: ${e.message}`);
        expect(e.code).assertEqual(401);
      }

      try {
        let matrix = new drawing.Matrix();
        matrix.postTranslate(90);
        console.info(msg + ' postTranslate successed');
      } catch (e) {
        console.info(msg + ` postTranslate errorCode is:  ${e.code} + errormsg is: ${e.message}`);
        expect(e.code).assertEqual(401);
      }

      try {
        let matrix = new drawing.Matrix();
        matrix.postTranslate('s', 100);
        console.info(msg + ' postTranslate successed');
      } catch (e) {
        console.info(msg + ` postTranslate errorCode is:  ${e.code} + errormsg is: ${e.message}`);
        expect(e.code).assertEqual(401);
      }
    })

    /**
     * @tc.number    : SUB_BASIC_GRAPHICS_SPECIAL_API_TS_DRAWING_MATRIX_1203
     * @tc.name      : testMatrixPostTranslateMultipleCalls
     * @tc.desc      : testMatrixPostTranslateMultipleCalls
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level3
     */
    it('testMatrixPostTranslateMultipleCalls', DEFAULT, () => {
      const msg = 'testMatrixPostTranslateMultipleCalls';
      try {
        let matrix = new drawing.Matrix();
        for (let i = 0; i < loop_times; i++) {
          matrix.postTranslate(Math.random() * Number.MAX_VALUE, Math.random() * Number.MAX_VALUE);
        }
        console.info(msg + ' postTranslate successed');
      } catch (e) {
        console.info(msg + ` postTranslate errorCode is:  ${e.code} + errormsg is: ${e.message}`);
        expect().assertFail()
      }
    })

    /**
     * @tc.number    : SUB_BASIC_GRAPHICS_SPECIAL_API_TS_DRAWING_MATRIX_1300
     * @tc.name      : testMatrixPreRotateNormal
     * @tc.desc      : testMatrixPreRotateNormal
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level0
     */
    it('testMatrixPreRotateNormal', DEFAULT, () => {
      const msg = 'testMatrixPreRotateNormal';
      try {
        let matrix = new drawing.Matrix();
        matrix.preRotate(90, 100, 100);
        let widths : number[] = matrix.getAll();
        expect(widths.length == 9).assertTrue();
        expect(matrix != null).assertTrue();
        console.info(msg + ' preRotate successed,width:'+ widths.length + JSON.stringify(matrix));
      } catch (e) {
        console.info(msg + ` preRotate errorCode is:  ${e.code} + errormsg is: ${e.message}`);
        expect().assertFail()
      }

      try {
        let matrix = new drawing.Matrix();
        matrix.preRotate(90.1, 100.1, 100.1);
        let widths : number[] = matrix.getAll();
        expect(widths.length == 9).assertTrue();
        expect(matrix != null).assertTrue();
        console.info(msg + ' preRotate successed,width:'+ widths.length + JSON.stringify(matrix));
      } catch (e) {
        console.info(msg + ` preRotate errorCode is:  ${e.code} + errormsg is: ${e.message}`);
        expect().assertFail()
      }

      try {
        let matrix = new drawing.Matrix();
        matrix.preRotate(-90, 100, 100);
        let widths : number[] = matrix.getAll();
        expect(widths.length == 9).assertTrue();
        expect(matrix != null).assertTrue();
        console.info(msg + ' preRotate successed,width:'+ widths.length + JSON.stringify(matrix));
      } catch (e) {
        console.info(msg + ` preRotate errorCode is:  ${e.code} + errormsg is: ${e.message}`);
        expect().assertFail()
      }

      try {
        let matrix = new drawing.Matrix();
        matrix.preRotate(90, -100, 100);
        let widths : number[] = matrix.getAll();
        expect(widths.length == 9).assertTrue();
        expect(matrix != null).assertTrue();
        console.info(msg + ' preRotate successed,width:'+ widths.length + JSON.stringify(matrix));
      } catch (e) {
        console.info(msg + ` preRotate errorCode is:  ${e.code} + errormsg is: ${e.message}`);
        expect().assertFail()
      }

      try {
        let matrix = new drawing.Matrix();
        matrix.preRotate(90, 100, -100);
        let widths : number[] = matrix.getAll();
        expect(widths.length == 9).assertTrue();
        expect(matrix != null).assertTrue();
        console.info(msg + ' preRotate successed,width:'+ widths.length + JSON.stringify(matrix));
      } catch (e) {
        console.info(msg + ` preRotate errorCode is:  ${e.code} + errormsg is: ${e.message}`);
        expect().assertFail()
      }

      try {
        let matrix = new drawing.Matrix();
        matrix.preRotate(361, Number.MAX_VALUE, Number.MAX_VALUE);
        let widths : number[] = matrix.getAll();
        expect(widths.length == 9).assertTrue();
        expect(matrix != null).assertTrue();
        console.info(msg + ' preRotate successed,width:'+ widths.length + JSON.stringify(matrix));
      } catch (e) {
        console.info(msg + ` preRotate errorCode is:  ${e.code} + errormsg is: ${e.message}`);
        expect().assertFail()
      }
    })

    /**
     * @tc.number    : SUB_BASIC_GRAPHICS_SPECIAL_API_TS_DRAWING_MATRIX_1301
     * @tc.name      : testMatrixPreRotateNull
     * @tc.desc      : testMatrixPreRotateNull
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level3
     */
    it('testMatrixPreRotateNull', DEFAULT, () => {
      const msg = 'testMatrixPreRotateNull';
      try {
        let matrix = new drawing.Matrix();
        matrix.preRotate(null, 100, 100);
        console.info(msg + ' preRotate successed');
      } catch (e) {
        console.info(msg + ` preRotate errorCode is:  ${e.code} + errormsg is: ${e.message}`);
        expect(e.code).assertEqual(401);
      }

      try {
        let matrix = new drawing.Matrix();
        matrix.preRotate(90, null, 100);
        console.info(msg + ' preRotate successed');
      } catch (e) {
        console.info(msg + ` preRotate errorCode is:  ${e.code} + errormsg is: ${e.message}`);
        expect(e.code).assertEqual(401);
      }

      try {
        let matrix = new drawing.Matrix();
        matrix.preRotate(90, 100, null);
        console.info(msg + ' preRotate successed');
      } catch (e) {
        console.info(msg + ` preRotate errorCode is:  ${e.code} + errormsg is: ${e.message}`);
        expect(e.code).assertEqual(401);
      }

      try {
        let matrix = new drawing.Matrix();
        matrix.preRotate(undefined, 100, 100);
        console.info(msg + ' preRotate successed');
      } catch (e) {
        console.info(msg + ` preRotate errorCode is:  ${e.code} + errormsg is: ${e.message}`);
        expect(e.code).assertEqual(401);
      }

      try {
        let matrix = new drawing.Matrix();
        matrix.preRotate(90, undefined, 100);
        console.info(msg + ' preRotate successed');
      } catch (e) {
        console.info(msg + ` preRotate errorCode is:  ${e.code} + errormsg is: ${e.message}`);
        expect(e.code).assertEqual(401);
      }

      try {
        let matrix = new drawing.Matrix();
        matrix.preRotate(90, 100, undefined);
        console.info(msg + ' preRotate successed');
      } catch (e) {
        console.info(msg + ` preRotate errorCode is:  ${e.code} + errormsg is: ${e.message}`);
        expect(e.code).assertEqual(401);
      }
    })

    /**
     * @tc.number    : SUB_BASIC_GRAPHICS_SPECIAL_API_TS_DRAWING_MATRIX_1302
     * @tc.name      : testMatrixPreRotateMismatch
     * @tc.desc      : testMatrixPreRotateMismatch
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level3
     */
    it('testMatrixPreRotateMismatch', DEFAULT, () => {
      const msg = 'testMatrixPreRotateMismatch';
      try {
        let matrix = new drawing.Matrix();
        matrix.preRotate(90, 100, 100, 100);
        console.info(msg + ' preRotate successed');
      } catch (e) {
        console.info(msg + ` preRotate errorCode is:  ${e.code} + errormsg is: ${e.message}`);
        expect(e.code).assertEqual(401);
      }

      try {
        let matrix = new drawing.Matrix();
        matrix.preRotate(90, 100);
        console.info(msg + ' preRotate successed');
      } catch (e) {
        console.info(msg + ` preRotate errorCode is:  ${e.code} + errormsg is: ${e.message}`);
        expect(e.code).assertEqual(401);
      }

      try {
        let matrix = new drawing.Matrix();
        matrix.preRotate('s', 100,100);
        console.info(msg + ' preRotate successed');
      } catch (e) {
        console.info(msg + ` preRotate errorCode is:  ${e.code} + errormsg is: ${e.message}`);
        eexpect(e.code).assertEqual(401);
      }
    })

    /**
     * @tc.number    : SUB_BASIC_GRAPHICS_SPECIAL_API_TS_DRAWING_MATRIX_1303
     * @tc.name      : testMatrixPreRotateMultipleCalls
     * @tc.desc      : testMatrixPreRotateMultipleCalls
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level3
     */
    it('testMatrixPreRotateMultipleCalls', DEFAULT, () => {
      const msg = 'testMatrixPreRotateMultipleCalls';
      try {
        let matrix = new drawing.Matrix();
        for (let i = 0; i < loop_times; i++) {
          matrix.preRotate(Math.random() * Number.MAX_VALUE, Math.random() * Number.MAX_VALUE, Math.random() * Number.MAX_VALUE);
        }
        console.info(msg + ' preRotate successed');
      } catch (e) {
        console.info(msg + ` preRotate errorCode is:  ${e.code} + errormsg is: ${e.message}`);
        expect().assertFail()
      }
    })

    /**
     * @tc.number    : SUB_BASIC_GRAPHICS_SPECIAL_API_TS_DRAWING_MATRIX_1400
     * @tc.name      : testMatrixPreScaleNormal
     * @tc.desc      : testMatrixPreScaleNormal
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level0
     */
    it('testMatrixPreScaleNormal', DEFAULT, () => {
      const msg = 'testMatrixPreScaleNormal';
      try {
        let matrix = new drawing.Matrix();
        matrix.preScale(100, 100, 150, 150);
        let widths : number[] = matrix.getAll();
        expect(widths.length == 9).assertTrue();
        expect(matrix != null).assertTrue();
        console.info(msg + ' preScale successed,width:'+ widths.length + JSON.stringify(matrix));
      } catch (e) {
        console.info(msg + ` preScale errorCode is:  ${e.code} + errormsg is: ${e.message}`);
        expect().assertFail()
      }

      try {
        let matrix = new drawing.Matrix();
        matrix.preScale(0.2, 0.2, 0.5, 0.5);
        let widths : number[] = matrix.getAll();
        expect(widths.length == 9).assertTrue();
        expect(matrix != null).assertTrue();
        console.info(msg + ' preScale successed,width:'+ widths.length + JSON.stringify(matrix));
      } catch (e) {
        console.info(msg + ` preScale errorCode is:  ${e.code} + errormsg is: ${e.message}`);
        expect().assertFail()
      }

      try {
        let matrix = new drawing.Matrix();
        matrix.preScale(-100, -100, 150, 150);
        let widths : number[] = matrix.getAll();
        expect(widths.length == 9).assertTrue();
        expect(matrix != null).assertTrue();
        console.info(msg + ' preScale successed,width:'+ widths.length + JSON.stringify(matrix));
      } catch (e) {
        console.info(msg + ` preScale errorCode is:  ${e.code} + errormsg is: ${e.message}`);
        expect().assertFail()
      }

      try {
        let matrix = new drawing.Matrix();
        matrix.preScale(100, 100, -150, -150);
        let widths : number[] = matrix.getAll();
        expect(widths.length == 9).assertTrue();
        expect(matrix != null).assertTrue();
        console.info(msg + ' preScale successed,width:'+ widths.length + JSON.stringify(matrix));
      } catch (e) {
        console.info(msg + ` preScale errorCode is:  ${e.code} + errormsg is: ${e.message}`);
        expect().assertFail()
      }

      try {
        let matrix = new drawing.Matrix();
        matrix.preScale(Number.MAX_VALUE, Number.MAX_VALUE, Number.MAX_VALUE, Number.MAX_VALUE);
        let widths : number[] = matrix.getAll();
        expect(widths.length == 9).assertTrue();
        expect(matrix != null).assertTrue();
        console.info(msg + ' preScale successed,width:'+ widths.length + JSON.stringify(matrix));
      } catch (e) {
        console.info(msg + ` preScale errorCode is:  ${e.code} + errormsg is: ${e.message}`);
        expect().assertFail()
      }
    })

    /**
     * @tc.number    : SUB_BASIC_GRAPHICS_SPECIAL_API_TS_DRAWING_MATRIX_1401
     * @tc.name      : testMatrixPreScaleNull
     * @tc.desc      : testMatrixPreScaleNull
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level3
     */
    it('testMatrixPreScaleNull', DEFAULT, () => {
      const msg = 'testMatrixPreScaleNull';
      try {
        let matrix = new drawing.Matrix();
        matrix.preScale(null, 100, 150, 150);
        console.info(msg + ' preScale successed');
      } catch (e) {
        console.info(msg + ` preScale errorCode is:  ${e.code} + errormsg is: ${e.message}`);
        expect(e.code).assertEqual(401);
      }

      try {
        let matrix = new drawing.Matrix();
        matrix.preScale(100, null, 150, 150);
        console.info(msg + ' preScale successed');
      } catch (e) {
        console.info(msg + ` preScale errorCode is:  ${e.code} + errormsg is: ${e.message}`);
        expect(e.code).assertEqual(401);
      }

      try {
        let matrix = new drawing.Matrix();
        matrix.preScale(100, 100, null, 150);
        console.info(msg + ' preScale successed');
      } catch (e) {
        console.info(msg + ` preScale errorCode is:  ${e.code} + errormsg is: ${e.message}`);
        expect(e.code).assertEqual(401);
      }

      try {
        let matrix = new drawing.Matrix();
        matrix.preScale(100, 100, 150, null);
        console.info(msg + ' preScale successed');
      } catch (e) {
        console.info(msg + ` preScale errorCode is:  ${e.code} + errormsg is: ${e.message}`);
        expect(e.code).assertEqual(401);
      }

      try {
        let matrix = new drawing.Matrix();
        matrix.preScale(undefined, 100, 150, 150);
        console.info(msg + ' preScale successed');
      } catch (e) {
        console.info(msg + ` preScale errorCode is:  ${e.code} + errormsg is: ${e.message}`);
        expect(e.code).assertEqual(401);
      }

      try {
        let matrix = new drawing.Matrix();
        matrix.preScale(100, undefined, 150, 150);
        console.info(msg + ' preScale successed');
      } catch (e) {
        console.info(msg + ` preScale errorCode is:  ${e.code} + errormsg is: ${e.message}`);
        expect(e.code).assertEqual(401);
      }

      try {
        let matrix = new drawing.Matrix();
        matrix.preScale(100, undefined, 150, 150);
        console.info(msg + ' preScale successed');
      } catch (e) {
        console.info(msg + ` preScale errorCode is:  ${e.code} + errormsg is: ${e.message}`);
        expect(e.code).assertEqual(401);
      }

      try {
        let matrix = new drawing.Matrix();
        matrix.preScale(100, 100, undefined, 150);
        console.info(msg + ' preScale successed');
      } catch (e) {
        console.info(msg + ` preScale errorCode is:  ${e.code} + errormsg is: ${e.message}`);
        expect(e.code).assertEqual(401);
      }

      try {
        let matrix = new drawing.Matrix();
        matrix.preScale(100, 100, 150, undefined);
        console.info(msg + ' preScale successed');
      } catch (e) {
        console.info(msg + ` preScale errorCode is:  ${e.code} + errormsg is: ${e.message}`);
        expect(e.code).assertEqual(401);
      }
    })

    /**
     * @tc.number    : SUB_BASIC_GRAPHICS_SPECIAL_API_TS_DRAWING_MATRIX_1402
     * @tc.name      : testMatrixPreScaleMismatch
     * @tc.desc      : testMatrixPreScaleMismatch
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level3
     */
    it('testMatrixPreScaleMismatch', DEFAULT, () => {
      const msg = 'testMatrixPreScaleMismatch';
      try {
        let matrix = new drawing.Matrix();
        matrix.preScale(90, 100, 100, 100, 100);
        console.info(msg + ' preScale successed');
      } catch (e) {
        console.info(msg + ` preScale errorCode is:  ${e.code} + errormsg is: ${e.message}`);
        expect(e.code).assertEqual(401);
      }

      try {
        let matrix = new drawing.Matrix();
        matrix.preScale(90, 100, 100);
        console.info(msg + ' preScale successed');
      } catch (e) {
        console.info(msg + ` preScale errorCode is:  ${e.code} + errormsg is: ${e.message}`);
        expect(e.code).assertEqual(401);
      }

      try {
        let matrix = new drawing.Matrix();
        matrix.preScale('s', 100,100,200);
        console.info(msg + ' preScale successed');
      } catch (e) {
        console.info(msg + ` preScale errorCode is:  ${e.code} + errormsg is: ${e.message}`);
        expect(e.code).assertEqual(401);
      }
    })

    /**
     * @tc.number    : SUB_BASIC_GRAPHICS_SPECIAL_API_TS_DRAWING_MATRIX_1403
     * @tc.name      : testMatrixPreScaleMultipleCalls
     * @tc.desc      : testMatrixPreScaleMultipleCalls
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level3
     */
    it('testMatrixPreScaleMultipleCalls', DEFAULT, () => {
      const msg = 'testMatrixPreScaleMultipleCalls';
      try {
        let matrix = new drawing.Matrix();
        for (let i = 0; i < loop_times; i++) {
          matrix.preScale(Math.random() * Number.MAX_VALUE, Math.random() * Number.MAX_VALUE,
            Math.random() * Number.MAX_VALUE, Math.random() * Number.MAX_VALUE);
        }
        console.info(msg + ' preScale successed');
      } catch (e) {
        console.info(msg + ` preScale errorCode is:  ${e.code} + errormsg is: ${e.message}`);
        expect().assertFail()
      }
    })


    /**
     * @tc.number    : SUB_BASIC_GRAPHICS_SPECIAL_API_TS_DRAWING_MATRIX_1500
     * @tc.name      : testMatrixPreTranslateNormal
     * @tc.desc      : testMatrixPreTranslateNormal
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level0
     */
    it('testMatrixPreTranslateNormal', DEFAULT, () => {
      const msg = 'testMatrixPreTranslateNormal';
      try {
        let matrix = new drawing.Matrix();
        matrix.preTranslate(100, 100);
        let widths : number[] = matrix.getAll();
        expect(widths.length == 9).assertTrue();
        expect(matrix != null).assertTrue();
        console.info(msg + ' preTranslate successed,width:'+ widths.length + JSON.stringify(matrix));
      } catch (e) {
        console.info(msg + ` preTranslate errorCode is:  ${e.code} + errormsg is: ${e.message}`);
        expect().assertFail()
      }

      try {
        let matrix = new drawing.Matrix();
        matrix.preTranslate(100.1, 100.1);
        let widths : number[] = matrix.getAll();
        expect(widths.length == 9).assertTrue();
        expect(matrix != null).assertTrue();
        console.info(msg + ' preTranslate successed,width:'+ widths.length + JSON.stringify(matrix));
      } catch (e) {
        console.info(msg + ` preTranslate errorCode is:  ${e.code} + errormsg is: ${e.message}`);
        expect().assertFail()
      }

      try {
        let matrix = new drawing.Matrix();
        matrix.preTranslate(-100, 100);
        let widths : number[] = matrix.getAll();
        expect(widths.length == 9).assertTrue();
        expect(matrix != null).assertTrue();
        console.info(msg + ' preTranslate successed,width:'+ widths.length + JSON.stringify(matrix));
      } catch (e) {
        console.info(msg + ` preTranslate errorCode is:  ${e.code} + errormsg is: ${e.message}`);
        expect().assertFail()
      }

      try {
        let matrix = new drawing.Matrix();
        matrix.preTranslate(100, -150);
        let widths : number[] = matrix.getAll();
        expect(widths.length == 9).assertTrue();
        expect(matrix != null).assertTrue();
        console.info(msg + ' preTranslate successed,width:'+ widths.length + JSON.stringify(matrix));
      } catch (e) {
        console.info(msg + ` preTranslate errorCode is:  ${e.code} + errormsg is: ${e.message}`);
        expect().assertFail()
      }

      try {
        let matrix = new drawing.Matrix();
        matrix.preTranslate(Number.MAX_VALUE, Number.MAX_VALUE);
        let widths : number[] = matrix.getAll();
        expect(widths.length == 9).assertTrue();
        expect(matrix != null).assertTrue();
        console.info(msg + ' preTranslate successed,width:'+ widths.length + JSON.stringify(matrix));
      } catch (e) {
        console.info(msg + ` preTranslate errorCode is:  ${e.code} + errormsg is: ${e.message}`);
        expect().assertFail()
      }
    })


    /**
     * @tc.number    : SUB_BASIC_GRAPHICS_SPECIAL_API_TS_DRAWING_MATRIX_1501
     * @tc.name      : testMatrixPreTranslateNull
     * @tc.desc      : testMatrixPreTranslateNull
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level3
     */
    it('testMatrixPreTranslateNull', DEFAULT, () => {
      const msg = 'testMatrixPreTranslateNull';
      try {
        let matrix = new drawing.Matrix();
        matrix.preTranslate(null, 100);
        console.info(msg + ' preTranslate successed');
      } catch (e) {
        console.info(msg + ` preTranslate errorCode is:  ${e.code} + errormsg is: ${e.message}`);
        expect(e.code).assertEqual(401);
      }

      try {
        let matrix = new drawing.Matrix();
        matrix.preTranslate(100, null);
        console.info(msg + ' preTranslate successed');
      } catch (e) {
        console.info(msg + ` preTranslate errorCode is:  ${e.code} + errormsg is: ${e.message}`);
        expect(e.code).assertEqual(401);
      }

      try {
        let matrix = new drawing.Matrix();
        matrix.preTranslate(undefined, 100);
        console.info(msg + ' preTranslate successed');
      } catch (e) {
        console.info(msg + ` preTranslate errorCode is:  ${e.code} + errormsg is: ${e.message}`);
        expect(e.code).assertEqual(401);
      }

      try {
        let matrix = new drawing.Matrix();
        matrix.preTranslate(100, undefined);
        console.info(msg + ' preTranslate successed');
      } catch (e) {
        console.info(msg + ` preTranslate errorCode is:  ${e.code} + errormsg is: ${e.message}`);
        expect(e.code).assertEqual(401);
      }
    })


    /**
     * @tc.number    : SUB_BASIC_GRAPHICS_SPECIAL_API_TS_DRAWING_MATRIX_1502
     * @tc.name      : testMatrixPreTranslateMismatch
     * @tc.desc      : testMatrixPreTranslateMismatch
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level3
     */
    it('testMatrixPreTranslateMismatch', DEFAULT, () => {
      const msg = 'testMatrixPreTranslateMismatch';
      try {
        let matrix = new drawing.Matrix();
        matrix.preTranslate(90, 100, 100);
        console.info(msg + ' preTranslate successed');
      } catch (e) {
        console.info(msg + ` preTranslate errorCode is:  ${e.code} + errormsg is: ${e.message}`);
        expect(e.code).assertEqual(401);
      }

      try {
        let matrix = new drawing.Matrix();
        matrix.preTranslate(90);
        console.info(msg + ' preTranslate successed');
      } catch (e) {
        console.info(msg + ` preTranslate errorCode is:  ${e.code} + errormsg is: ${e.message}`);
        expect(e.code).assertEqual(401);
      }

      try {
        let matrix = new drawing.Matrix();
        matrix.preTranslate('s', 100);
        console.info(msg + ' preTranslate successed');
      } catch (e) {
        console.info(msg + ` preTranslate errorCode is:  ${e.code} + errormsg is: ${e.message}`);
        expect(e.code).assertEqual(401);
      }
    })


    /**
     * @tc.number    : SUB_BASIC_GRAPHICS_SPECIAL_API_TS_DRAWING_MATRIX_1503
     * @tc.name      : testMatrixPreTranslateMultipleCalls
     * @tc.desc      : testMatrixPreTranslateMultipleCalls
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level3
     */
    it('testMatrixPreTranslateMultipleCalls', DEFAULT, () => {
      const msg = 'testMatrixPreTranslateMultipleCalls';
      try {
        let matrix = new drawing.Matrix();
        for (let i = 0; i < loop_times; i++) {
          matrix.preTranslate(Math.random() * Number.MAX_VALUE, Math.random() * Number.MAX_VALUE);
        }
        console.info(msg + ' preTranslate successed');
      } catch (e) {
        console.info(msg + ` preTranslate errorCode is:  ${e.code} + errormsg is: ${e.message}`);
        expect().assertFail()
      }
    })

    /**
     * @tc.number    : SUB_BASIC_GRAPHICS_SPECIAL_API_TS_DRAWING_MATRIX_1600
     * @tc.name      : testMatrixResetNormal
     * @tc.desc      : testMatrixResetNormal
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level0
     */
    it('testMatrixResetNormal', DEFAULT, () => {
      const msg = 'testMatrixResetNormal';
      try {
        let matrix = new drawing.Matrix();
        matrix.reset();
        let widths : number[] = matrix.getAll();
        expect(widths.length == 9).assertTrue();
        matrix.preTranslate(100.1, 100.1);
        widths = matrix.getAll();
        expect(widths.length == 9).assertTrue();
        matrix.reset();
        widths = matrix.getAll();
        expect(widths.length == 9).assertTrue();
        expect(matrix != null).assertTrue();
        console.info(msg + ' reset successed,width:'+ widths.length + JSON.stringify(matrix));
      } catch (e) {
        console.info(msg + ` reset errorCode is:  ${e.code} + errormsg is: ${e.message}`);
        expect().assertFail()
      }
    })


    /**
     * @tc.number    : SUB_BASIC_GRAPHICS_SPECIAL_API_TS_DRAWING_MATRIX_1601
     * @tc.name      : testMatrixResetMismatch
     * @tc.desc      : testMatrixResetMismatch
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level3
     */
    it('testMatrixResetMismatch', DEFAULT, () => {
      const msg = 'testMatrixResetMismatch';
      try {
        let matrix = new drawing.Matrix();
        matrix.reset(90);
        console.info(msg + ' reset successed');
      } catch (e) {
        console.info(msg + ` reset errorCode is:  ${e.code} + errormsg is: ${e.message}`);
        expect(e.code).assertEqual(401);
      }
    })


    /**
     * @tc.number    : SUB_BASIC_GRAPHICS_SPECIAL_API_TS_DRAWING_MATRIX_1602
     * @tc.name      : testMatrixResetMultipleCalls
     * @tc.desc      : testMatrixResetMultipleCalls
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level3
     */
    it('testMatrixResetMultipleCalls', DEFAULT, () => {
      const msg = 'testMatrixResetMultipleCalls';
      try {
        let matrix = new drawing.Matrix();
        matrix.preTranslate(100,100);
        matrix.getAll();
        for (let i = 0; i < loop_times; i++) {
          matrix.reset();
          matrix.getAll();
        }
        console.info(msg + ' reset successed');
      } catch (e) {
        console.info(msg + ` reset errorCode is:  ${e.code} + errormsg is: ${e.message}`);
        expect().assertFail()
      }
    })

    /**
     * @tc.number    : SUB_BASIC_GRAPHICS_SPECIAL_API_TS_DRAWING_MATRIX_1700
     * @tc.name      : testMatrixMapPointsNormal
     * @tc.desc      : testMatrixMapPointsNormal
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level0
     */
    it('testMatrixMapPointsNormal', DEFAULT, () => {
      const msg = 'testMatrixMapPointsNormal';
      let matrix = new drawing.Matrix();

      try {
        let src: Array<common2D.Point> = [{x:10,y:10},{x:20.1,y:20.1},{x:30,y:30}];
        let dst: Array<common2D.Point> =matrix.mapPoints(src);
        matrix.mapPoints(src);
        console.info(msg + ' mapPoints successed');
      } catch (e) {
        console.info(msg + ` mapPoints1 errorCode is:  ${e.code} + errormsg is: ${e.message}`);
        expect().assertFail()
      }

      try {
        let dst = matrix.mapPoints([]);
        console.info(msg + ' mapPoints successed');
      } catch (e) {
        console.info(msg + ` mapPoints2 errorCode is:  ${e.code} + errormsg is: ${e.message}`);
        expect(e.code).assertEqual(401);
      }

      try {
        let dst = matrix.mapPoints( [{x:-10,y:-10},{x:20.1,y:20.1},{x:30,y:30.1}]);
        console.info(msg + ' mapPoints successed');
      } catch (e) {
        console.info(msg + ` mapPoints3 errorCode is:  ${e.code} + errormsg is: ${e.message}`);
        expect().assertFail()
      }

      try {
        matrix.mapPoints([{x:10,y:10}]);
        console.info(msg + ' mapPoints successed');
      } catch (e) {
        console.info(msg + ` mapPoints4 errorCode is:  ${e.code} + errormsg is: ${e.message}`);
        expect().assertFail()
      }
    })

    /**
     * @tc.number    : SUB_BASIC_GRAPHICS_SPECIAL_API_TS_DRAWING_MATRIX_1701
     * @tc.name      : testMatrixMapPointsNull
     * @tc.desc      : testMatrixMapPointsNull
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level3
     */
    it('testMatrixMapPointsNull', DEFAULT, () => {
      const msg = 'testMatrixMapPointsNull';
      try {
        let matrix = new drawing.Matrix();
        matrix.mapPoints(null);
        console.info(msg + ' mapPoints successed');
      } catch (e) {
        console.info(msg + ` mapPoints errorCode is:  ${e.code} + errormsg is: ${e.message}`);
        expect(e.code).assertEqual(401);
      }

      try {
        let matrix = new drawing.Matrix();
        matrix.mapPoints(undefined);
        console.info(msg + ' mapPoints successed');
      } catch (e) {
        console.info(msg + ` mapPoints errorCode is:  ${e.code} + errormsg is: ${e.message}`);
        expect(e.code).assertEqual(401);
      }
    })
  })
}
