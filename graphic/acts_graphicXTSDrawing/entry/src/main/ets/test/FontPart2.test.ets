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

import { afterAll , afterEach , beforeAll , beforeEach , describe , expect , it } from '@ohos/hypium';
import drawing from '@ohos.graphics.drawing';
import { getEnumCount } from './utils';

export default function fontPart2Test() {
  describe('DrawingTsFontTest' , () => {
    const DEFAULT = 0;
    // Defines a test suite. Two parameters are supported: test suite name and test suite function.
    beforeAll(async() => {

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
     * @tc.number    : SUB_BASIC_GRAPHICS_SPECIAL_API_TS_DRAWING_FONT_0800
     * @tc.name      : testFontCountTextTextNormal
     * @tc.desc      : Test for testFontCountTextTextNormal.
     * @tc.size      : SmallTest
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('testFontCountTextTextNormal' , DEFAULT , () => {
      const msg = 'testFontCountTextTextNormal';
      let font = new drawing.Font();

      try {
        let resultNumber: number = font.countText('ABCDE');
        expect(resultNumber == 5).assertTrue();
        console.info(msg + ' countTextText successed,resultNumber correct');
      } catch( e ) {
        console.info(msg + ` countTextText errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect().assertFail();
      }

      try {
        let resultNumber: number = font.countText('你好');
        expect(resultNumber == 2).assertTrue();
        console.info(msg + ' countTextText successed,resultNumber correct');
      } catch( e ) {
        console.info(msg + ` countTextText errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect().assertFail();
      }

      try {
        let resultNumber: number = font.countText('！@#￥2223@##');
        expect(resultNumber == 11).assertTrue();
        console.info(msg + ' countTextText successed,resultNumber correct');
      } catch( e ) {
        console.info(msg + ` countTextText errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect().assertFail();
      }

      try {
        let resultNumber: number = font.countText('魑魅魍魉');
        expect(resultNumber == 4).assertTrue();
        console.info(msg + ' countTextText successed,resultNumber correct');
      } catch( e ) {
        console.info(msg + ` countTextText errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect().assertFail();
      }

      try {
        let resultNumber: number = font.countText('');
        expect(resultNumber == 0).assertTrue();
        console.info(msg + ' countTextText successed,resultNumber correct');
      } catch( e ) {
        console.info(msg + ` countTextText errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect().assertFail();
      }
    });

    /**
     * @tc.number    : SUB_BASIC_GRAPHICS_SPECIAL_API_TS_DRAWING_FONT_0801
     * @tc.name      : testFontCountTextTextNull
     * @tc.desc      : Test for testFontCountTextTextNull.
     * @tc.size      : SmallTest
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it('testFontCountTextTextNull' , DEFAULT , () => {
      const msg = 'testFontCountTextTextNull';
      let font = new drawing.Font();

      try {
        font.countText(null);
        console.info(msg + ' countTextText succeeded');
      } catch( e ) {
        console.info(msg + ` countTextText errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect(e.code).assertEqual(401);
      }

      try {
        font.countText(undefined);
        console.info(msg + ' countTextText succeeded');
      } catch( e ) {
        console.info(msg + ` countTextText errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect(e.code).assertEqual(401);
      }
    });

    /**
     * @tc.number    : SUB_BASIC_GRAPHICS_SPECIAL_API_TS_DRAWING_FONT_0802
     * @tc.name      : testFontCountTextTextMismatch
     * @tc.desc      : Test for testFontCountTextTextMismatch.
     * @tc.size      : SmallTest
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it('testFontCountTextTextMismatch', DEFAULT, () => {
      const msg = 'testFontCountTextTextMismatch';
      let font = new drawing.Font();

      try {
        font.countText('ABCDE','ABCDE');
        console.info(msg + ' countTextText succeeded');
      } catch (e) {
        console.info(msg + ` countTextText errorCode is:  ${e.code} + errormsg is: ${e.message}`);
        expect(e.code).assertEqual(401);
      }

      try {
        font.countText();
        console.info(msg + ' countTextText succeeded');
      } catch (e) {
        console.info(msg + ` countTextText errorCode is:  ${e.code} + errormsg is: ${e.message}`);
        expect(e.code).assertEqual(401);
      }

      try {
        font.countText(1111);
        console.info(msg + ' countTextText succeeded');
      } catch (e) {
        console.info(msg + ` countTextText errorCode is:  ${e.code} + errormsg is: ${e.message}`);
        expect(e.code).assertEqual(401);
      }
    });

    /**
     * @tc.number    : SUB_BASIC_GRAPHICS_SPECIAL_API_TS_DRAWING_FONT_0803
     * @tc.name      : testFontCountTextTextMultipleCalls
     * @tc.desc      : Test for testFontCountTextTextMultipleCalls.
     * @tc.size      : SmallTest
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it('testFontCountTextTextMultipleCalls' , DEFAULT , () => {
      const msg = 'testFontCountTextTextMultipleCalls';
      let font = new drawing.Font();

      for ( let i = 0 ; i < 20 ; i ++ ) {
        try {
          let resultNumber: number = font.countText('ABCDE');
          expect(resultNumber == 5).assertTrue();
          console.info(msg + ' countTextText successed,resultNumber correct');
        } catch( e ) {
          console.info(msg + ` countTextText errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
          expect().assertFail();
        }
      }
    });

    /**
     * @tc.number    : SUB_BASIC_GRAPHICS_SPECIAL_API_TS_DRAWING_FONT_0900
     * @tc.name      : testFontSetAndGetEdgingNormal
     * @tc.desc      : Test for testFontSetAndGetEdgingNormal.
     * @tc.size      : SmallTest
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('testFontSetAndGetEdgingNormal' , DEFAULT , () => {
      const msg = 'testFontSetAndGetEdgingNormal';
      let font = new drawing.Font();

      try {
        font.setEdging(drawing.FontEdging.ALIAS);
        let edging: drawing.FontEdging = font.getEdging()
        console.info(msg + ' setAndGetEdging successed,GetEdging:' + edging);
      } catch( e ) {
        console.info(msg + ` setAndGetEdging errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect().assertFail();
      }

      try {
        font.setEdging(drawing.FontEdging.ANTI_ALIAS);
        let edging: drawing.FontEdging = font.getEdging()
        console.info(msg + ' setAndGetEdging successed,GetEdging:' + edging);
      } catch( e ) {
        console.info(msg + ` setAndGetEdging errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect().assertFail();
      }

      try {
        font.setEdging(drawing.FontEdging.SUBPIXEL_ANTI_ALIAS);
        let edging: drawing.FontEdging = font.getEdging()
        console.info(msg + ' setAndGetEdging successed,GetEdging:' + edging);
      } catch( e ) {
        console.info(msg + ` setAndGetEdging errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect().assertFail();
      }
    });

    /**
     * @tc.number    : SUB_BASIC_GRAPHICS_SPECIAL_API_TS_DRAWING_FONT_0901
     * @tc.name      : testFontSetAndGetEdgingNull
     * @tc.desc      : Test for testFontSetAndGetEdgingNull.
     * @tc.size      : SmallTest
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it('testFontSetAndGetEdgingNull' , DEFAULT , () => {
      const msg = 'testFontSetAndGetEdgingNull';
      let font = new drawing.Font();

      try {
        font.setEdging(null);
        console.info(msg + ' setAndGetEdging succeeded');
      } catch( e ) {
        console.info(msg + ` setAndGetEdging errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect(e.code).assertEqual(401);
      }

      try {
        font.setEdging(undefined);
        console.info(msg + ' setAndGetEdging succeeded');
      } catch( e ) {
        console.info(msg + ` setAndGetEdging errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect(e.code).assertEqual(401);
      }
    });

    /**
     * @tc.number    : SUB_BASIC_GRAPHICS_SPECIAL_API_TS_DRAWING_FONT_0902
     * @tc.name      : testFontSetAndGetEdgingMismatch
     * @tc.desc      : Test for testFontSetAndGetEdgingMismatch.
     * @tc.size      : SmallTest
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it('testFontSetAndGetEdgingMismatch', DEFAULT, () => {
      const msg = 'testFontSetAndGetEdgingMismatch';
      let font = new drawing.Font();

      try {
        font.setEdging(drawing.FontEdging.ALIAS, drawing.FontEdging.ALIAS);
        console.info(msg + ' setEdging succeeded');
      } catch (e) {
        console.info(msg + ` setEdging errorCode is:  ${e.code} + errormsg is: ${e.message}`);
        expect(e.code).assertEqual(401);
      }

      try {
        font.setEdging();
        console.info(msg + ' setEdging succeeded');
      } catch (e) {
        console.info(msg + ` setEdging errorCode is:  ${e.code} + errormsg is: ${e.message}`);
        expect(e.code).assertEqual(401);
      }

      try {
        font.setEdging('s');
        console.info(msg + ' setEdging succeeded');
      } catch (e) {
        console.info(msg + ` setEdging errorCode is:  ${e.code} + errormsg is: ${e.message}`);
        expect(e.code).assertEqual(401);
      }

      try {
        font.getEdging('s')
        console.info(msg + ' getEdging succeeded');
      } catch (e) {
        console.info(msg + ` getEdging errorCode is:  ${e.code} + errormsg is: ${e.message}`);
        expect(e.code).assertEqual(401);
      }
    });

    /**
     * @tc.number    : SUB_BASIC_GRAPHICS_SPECIAL_API_TS_DRAWING_FONT_0903
     * @tc.name      : testFontSetAndGetEdgingMultipleCalls
     * @tc.desc      : Test for testFontSetAndGetEdgingMultipleCalls.
     * @tc.size      : SmallTest
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it('testFontSetAndGetEdgingMultipleCalls' , DEFAULT , () => {
      const msg = 'testFontSetAndGetEdgingMultipleCalls';
      let font = new drawing.Font();
      const randomEnum = Math.floor(Math.random() * getEnumCount(drawing.FontEdging));

      for ( let i = 0 ; i < 20 ; i ++ ) {
        try {
          font.setEdging(randomEnum);
          let edging: drawing.FontEdging = font.getEdging()
          console.info(msg + ' setAndGetEdging successed,GetEdging:' + edging);
        } catch( e ) {
          console.info(msg + ` setAndGetEdging errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
          expect().assertFail();
        }
      }

      for ( let i = 0 ; i < 20 ; i ++ ) {
        try {
          font.setEdging(randomEnum);
          console.info(msg + ' setAndGetEdging successed');
        } catch( e ) {
          console.info(msg + ` setAndGetEdging errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
          expect().assertFail();
        }
      }

      for ( let i = 0 ; i < 20 ; i ++ ) {
        try {
          let edging: drawing.FontEdging = font.getEdging()
          console.info(msg + ' setAndGetEdging successed,GetEdging:' + edging);
        } catch( e ) {
          console.info(msg + ` setAndGetEdging errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
          expect().assertFail();
        }
      }
    });

    /**
     * @tc.number    : SUB_BASIC_GRAPHICS_SPECIAL_API_TS_DRAWING_FONT_0904
     * @tc.name      : testFontSetAndGetEdgingAbnormal
     * @tc.desc      : Test for testFontSetAndGetEdgingAbnormal.
     * @tc.size      : SmallTest
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it('testFontSetAndGetEdgingAbnormal' , DEFAULT , () => {
      const msg = 'testFontSetAndGetEdgingAbnormal';
      let font = new drawing.Font();

      try {
        font.setEdging(10);
        console.info(msg + ' setAndGetEdging succeeded');
      } catch( e ) {
        console.info(msg + ` setAndGetEdging errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect(e.code).assertEqual(401);
      }
    });

    /**
     * @tc.number    : SUB_BASIC_GRAPHICS_SPECIAL_API_TS_DRAWING_FONT_1000
     * @tc.name      : testFontSetAndGetHintingNormal
     * @tc.desc      : Test for testFontSetAndGetHintingNormal.
     * @tc.size      : SmallTest
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('testFontSetAndGetHintingNormal' , DEFAULT , () => {
      const msg = 'testFontSetAndGetHintingNormal';
      let font = new drawing.Font();

      try {
        font.setHinting(drawing.FontHinting.NONE);
        let hinting: drawing.FontHinting = font.getHinting();
        console.info(msg + ' setAndGetHinting successed,getHinting:' + hinting);
      } catch( e ) {
        console.info(msg + ` setAndGetHinting errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect().assertFail();
      }

      try {
        font.setHinting(drawing.FontHinting.SLIGHT);
        let hinting: drawing.FontHinting = font.getHinting();
        console.info(msg + ' setAndGetHinting successed,getHinting:' + hinting);
      } catch( e ) {
        console.info(msg + ` setAndGetHinting errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect().assertFail();
      }

      try {
        font.setHinting(drawing.FontHinting.NORMAL);
        let hinting: drawing.FontHinting = font.getHinting();
        console.info(msg + ' setAndGetHinting successed,getHinting:' + hinting);
      } catch( e ) {
        console.info(msg + ` setAndGetHinting errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect().assertFail();
      }

      try {
        font.setHinting(drawing.FontHinting.FULL);
        let hinting: drawing.FontHinting = font.getHinting();
        console.info(msg + ' setAndGetHinting successed,getHinting:' + hinting);
      } catch( e ) {
        console.info(msg + ` setAndGetHinting errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect().assertFail();
      }
    });

    /**
     * @tc.number    : SUB_BASIC_GRAPHICS_SPECIAL_API_TS_DRAWING_FONT_1001
     * @tc.name      : testFontSetAndGetHintingNull
     * @tc.desc      : Test for testFontSetAndGetHintingNull.
     * @tc.size      : SmallTest
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it('testFontSetAndGetHintingNull' , DEFAULT , () => {
      const msg = 'testFontSetAndGetHintingNull';
      let font = new drawing.Font();

      try {
        font.setHinting(null);
        console.info(msg + ' setAndGetHinting succeeded');
      } catch( e ) {
        console.info(msg + ` setAndGetHinting errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect(e.code).assertEqual(401);
      }

      try {
        font.setHinting(undefined);
        console.info(msg + ' setAndGetHinting succeeded');
      } catch( e ) {
        console.info(msg + ` setAndGetHinting errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect(e.code).assertEqual(401);
      }
    });

    /**
     * @tc.number    : SUB_BASIC_GRAPHICS_SPECIAL_API_TS_DRAWING_FONT_1002
     * @tc.name      : testFontSetAndGetHintingMismatch
     * @tc.desc      : Test for testFontSetAndGetHintingMismatch.
     * @tc.size      : SmallTest
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it('testFontSetAndGetHintingMismatch', DEFAULT, () => {
      const msg = 'testFontSetAndGetHintingMismatch';
      let font = new drawing.Font();

      try {
        font.setHinting(drawing.FontHinting.NONE，drawing.FontHinting.NONE);
        console.info(msg + ' setHinting succeeded');
      } catch (e) {
        console.info(msg + ` setHinting errorCode is:  ${e.code} + errormsg is: ${e.message}`);
        expect(e.code).assertEqual(401);
      }

      try {
        font.setHinting();
        console.info(msg + ' setHinting succeeded');
      } catch (e) {
        console.info(msg + ` setHinting errorCode is:  ${e.code} + errormsg is: ${e.message}`);
        expect(e.code).assertEqual(401);
      }

      try {
        font.setHinting('s');
        console.info(msg + ' setHinting succeeded');
      } catch (e) {
        console.info(msg + ` setHinting errorCode is:  ${e.code} + errormsg is: ${e.message}`);
        expect(e.code).assertEqual(401);
      }

      try {
        font.getHinting('s')
        console.info(msg + ' getHinting succeeded');
      } catch (e) {
        console.info(msg + ` getHinting errorCode is:  ${e.code} + errormsg is: ${e.message}`);
        expect(e.code).assertEqual(401);
      }
    });

    /**
     * @tc.number    : SUB_BASIC_GRAPHICS_SPECIAL_API_TS_DRAWING_FONT_1003
     * @tc.name      : testFontSetAndGetHintingMultipleCalls
     * @tc.desc      : Test for testFontSetAndGetHintingMultipleCalls.
     * @tc.size      : SmallTest
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it('testFontSetAndGetHintingMultipleCalls' , DEFAULT , () => {
      const msg = 'testFontSetAndGetHintingMultipleCalls';
      let font = new drawing.Font();
      const randomEnum = Math.floor(Math.random() * getEnumCount(drawing.FontHinting));

      for ( let i = 0 ; i < 20 ; i ++ ) {
        try {
          font.setHinting(randomEnum);
          let hinting: drawing.FontHinting = font.getHinting()
          console.info(msg + ' setAndGetHinting successed,getHinting:' + hinting);
        } catch( e ) {
          console.info(msg + ` setAndGetHinting errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
          expect().assertFail();
        }
      }

      for ( let i = 0 ; i < 20 ; i ++ ) {
        try {
          font.setHinting(randomEnum);
          console.info(msg + ' setAndGetHinting successed');
        } catch( e ) {
          console.info(msg + ` setAndGetHinting errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
          expect().assertFail();
        }
      }

      for ( let i = 0 ; i < 20 ; i ++ ) {
        try {
          let hinting: drawing.FontHinting = font.getHinting();
          console.info(msg + ' setAndGetHinting successed,getHinting:' + hinting);
        } catch( e ) {
          console.info(msg + ` setAndGetHinting errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
          expect().assertFail();
        }
      }
    });

    /**
     * @tc.number    : SUB_BASIC_GRAPHICS_SPECIAL_API_TS_DRAWING_FONT_1004
     * @tc.name      : testFontSetAndGetHintingAbnormal
     * @tc.desc      : Test for testFontSetAndGetHintingAbnormal.
     * @tc.size      : SmallTest
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it('testFontSetAndGetHintingAbnormal' , DEFAULT , () => {
      const msg = 'testFontSetAndGetHintingAbnormal';
      let font = new drawing.Font();

      try {
        font.setHinting(10);
        console.info(msg + ' setAndGetHinting succeeded');
      } catch( e ) {
        console.info(msg + ` setAndGetHinting errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect(e.code).assertEqual(401);
      }
    });

    /**
     * @tc.number    : SUB_BASIC_GRAPHICS_SPECIAL_API_TS_DRAWING_FONT_1100
     * @tc.name      : testFontSetAndGetScaleXNormal
     * @tc.desc      : Test for testFontSetAndGetScaleXNormal.
     * @tc.size      : SmallTest
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('testFontSetAndGetScaleXNormal' , DEFAULT , () => {
      const msg = 'testFontSetAndGetScaleXNormal';
      let font = new drawing.Font();

      try {
        font.setScaleX(2);
        let scaleX: number = font.getScaleX();
        console.info(msg + ' setAndGetScaleX successed,getScaleX:' + scaleX);
      } catch( e ) {
        console.info(msg + ` setAndGetScaleX errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect().assertFail();
      }

      try {
        font.setScaleX(0.5);
        let scaleX: number = font.getScaleX();
        console.info(msg + ' setAndGetScaleX successed,getScaleX:' + scaleX);
      } catch( e ) {
        console.info(msg + ` setAndGetScaleX errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect().assertFail();
      }

      try {
        font.setScaleX(0);
        let scaleX: number = font.getScaleX();
        console.info(msg + ' setAndGetScaleX successed,getScaleX:' + scaleX);
      } catch( e ) {
        console.info(msg + ` setAndGetScaleX errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect().assertFail();
      }

      try {
        font.setScaleX(- 1);
        let scaleX: number = font.getScaleX();
        console.info(msg + ' setAndGetScaleX successed,getScaleX:' + scaleX);
      } catch( e ) {
        console.info(msg + ` setAndGetScaleX errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect().assertFail();
      }
    });

    /**
     * @tc.number    : SUB_BASIC_GRAPHICS_SPECIAL_API_TS_DRAWING_FONT_1101
     * @tc.name      : testFontSetAndGetScaleXNull
     * @tc.desc      : Test for testFontSetAndGetScaleXNull.
     * @tc.size      : SmallTest
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it('testFontSetAndGetScaleXNull' , DEFAULT , () => {
      const msg = 'testFontSetAndGetScaleXNull';
      let font = new drawing.Font();

      try {
        font.setScaleX(null);
        console.info(msg + ' setAndGetScaleX succeeded');
      } catch( e ) {
        console.info(msg + ` setAndGetScaleX errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect(e.code).assertEqual(401);
      }

      try {
        font.setScaleX(undefined);
        console.info(msg + ' setAndGetScaleX succeeded');
      } catch( e ) {
        console.info(msg + ` setAndGetScaleX errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect(e.code).assertEqual(401);
      }
    });

    /**
     * @tc.number    : SUB_BASIC_GRAPHICS_SPECIAL_API_TS_DRAWING_FONT_1102
     * @tc.name      : testFontSetAndGetScaleXMismatch
     * @tc.desc      : Test for testFontSetAndGetScaleXMismatch.
     * @tc.size      : SmallTest
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it('testFontSetAndGetScaleXMismatch', DEFAULT, () => {
      const msg = 'testFontSetAndGetScaleXMismatch';
      let font = new drawing.Font();

      try {
        font.setScaleX(10,10);
        console.info(msg + ' setScaleX succeeded');
      } catch (e) {
        console.info(msg + ` setScaleX errorCode is:  ${e.code} + errormsg is: ${e.message}`);
        expect(e.code).assertEqual(401);
      }

      try {
        font.setScaleX();
        console.info(msg + ' setScaleX succeeded');
      } catch (e) {
        console.info(msg + ` setScaleX errorCode is:  ${e.code} + errormsg is: ${e.message}`);
        expect(e.code).assertEqual(401);
      }

      try {
        font.setScaleX('s');
        console.info(msg + ' setScaleX succeeded');
      } catch (e) {
        console.info(msg + ` setScaleX errorCode is:  ${e.code} + errormsg is: ${e.message}`);
        expect(e.code).assertEqual(401);
      }

      try {
        font.getScaleX('s');
        console.info(msg + ' getScaleX succeeded');
      } catch (e) {
        console.info(msg + ` getScaleX errorCode is:  ${e.code} + errormsg is: ${e.message}`);
        expect(e.code).assertEqual(401);
      }
    });

    /**
     * @tc.number    : SUB_BASIC_GRAPHICS_SPECIAL_API_TS_DRAWING_FONT_1103
     * @tc.name      : testFontSetAndGetScaleXMultipleCalls
     * @tc.desc      : Test for testFontSetAndGetScaleXMultipleCalls.
     * @tc.size      : SmallTest
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it('testFontSetAndGetScaleXMultipleCalls' , DEFAULT , () => {
      const msg = 'testFontSetAndGetScaleXMultipleCalls';
      let font = new drawing.Font();

      for ( let i = 0 ; i < 20 ; i ++ ) {
        try {
          font.setScaleX(Math.random() * Number.MAX_VALUE);
          let scaleX: number = font.getScaleX();
          console.info(msg + ' setAndGetScaleX successed,getScaleX:' + scaleX);
        } catch( e ) {
          console.info(msg + ` setAndGetScaleX errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
          expect().assertFail();
        }
      }

      for ( let i = 0 ; i < 20 ; i ++ ) {
        try {
          font.setScaleX(Math.random() * Number.MAX_VALUE);
          console.info(msg + ' setScaleX successed');
        } catch( e ) {
          console.info(msg + ` setScaleX errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
          expect().assertFail();
        }
      }

      for ( let i = 0 ; i < 20 ; i ++ ) {
        try {
          let scaleX: number = font.getScaleX();
          console.info(msg + ' getScaleX successed,getScaleX:' + scaleX);
        } catch( e ) {
          console.info(msg + ` getScaleX errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
          expect().assertFail();
        }
      }
    });

    /**
     * @tc.number    : SUB_BASIC_GRAPHICS_SPECIAL_API_TS_DRAWING_FONT_1200
     * @tc.name      : testFontSetAndGetSkewXNormal
     * @tc.desc      : Test for testFontSetAndGetSkewXNormal.
     * @tc.size      : SmallTest
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('testFontSetAndGetSkewXNormal' , DEFAULT , () => {
      const msg = 'testFontSetAndGetSkewXNormal';
      let font = new drawing.Font();

      try {
        font.setSkewX(2);
        let skewX: number = font.getSkewX();
        console.info(msg + ' setAndGetSkewX successed,getSkewX:' + skewX);
      } catch( e ) {
        console.info(msg + ` setAndGetSkewX errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect().assertFail();
      }

      try {
        font.setSkewX(0.5);
        let skewX: number = font.getSkewX();
        console.info(msg + ' setAndGetSkewX successed,getSkewX:' + skewX);
      } catch( e ) {
        console.info(msg + ` setAndGetSkewX errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect().assertFail();
      }

      try {
        font.setSkewX(0);
        let skewX: number = font.getSkewX();
        console.info(msg + ' setAndGetSkewX successed,getSkewX:' + skewX);
      } catch( e ) {
        console.info(msg + ` setAndGetSkewX errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect().assertFail();
      }

      try {
        font.setSkewX(- 1);
        let skewX: number = font.getSkewX();
        console.info(msg + ' setAndGetSkewX successed,getSkewX:' + skewX);
      } catch( e ) {
        console.info(msg + ` setAndGetSkewX errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect().assertFail();
      }
    });

    /**
     * @tc.number    : SUB_BASIC_GRAPHICS_SPECIAL_API_TS_DRAWING_FONT_1201
     * @tc.name      : testFontSetAndGetSkewXNull
     * @tc.desc      : Test for testFontSetAndGetSkewXNull.
     * @tc.size      : SmallTest
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it('testFontSetAndGetSkewXNull' , DEFAULT , () => {
      const msg = 'testFontSetAndGetSkewXNull';
      let font = new drawing.Font();

      try {
        font.setSkewX(null);
        console.info(msg + ' setAndGetSkewX succeeded');
      } catch( e ) {
        console.info(msg + ` setAndGetSkewX errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect(e.code).assertEqual(401);
      }

      try {
        font.setSkewX(undefined);
        console.info(msg + ' setAndGetSkewX succeeded');
      } catch( e ) {
        console.info(msg + ` setAndGetSkewX errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect(e.code).assertEqual(401);
      }
    });

    /**
     * @tc.number    : SUB_BASIC_GRAPHICS_SPECIAL_API_TS_DRAWING_FONT_1202
     * @tc.name      : testFontSetAndGetSkewXMismatch
     * @tc.desc      : Test for testFontSetAndGetSkewXMismatch.
     * @tc.size      : SmallTest
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it('testFontSetAndGetSkewXMismatch', DEFAULT, () => {
      const msg = 'testFontSetAndGetSkewXMismatch';
      let font = new drawing.Font();

      try {
        font.setSkewX(10,10);
        console.info(msg + ' setSkewX succeeded');
      } catch (e) {
        console.info(msg + ` setSkewX errorCode is:  ${e.code} + errormsg is: ${e.message}`);
        expect(e.code).assertEqual(401);
      }

      try {
        font.setSkewX();
        console.info(msg + ' setSkewX succeeded');
      } catch (e) {
        console.info(msg + ` setSkewX errorCode is:  ${e.code} + errormsg is: ${e.message}`);
        expect(e.code).assertEqual(401);
      }

      try {
        font.setSkewX('s');
        console.info(msg + ' setSkewX succeeded');
      } catch (e) {
        console.info(msg + ` setSkewX errorCode is:  ${e.code} + errormsg is: ${e.message}`);
        expect(e.code).assertEqual(401);
      }

      try {
        font.getSkewX('s');
        console.info(msg + ' getSkewX succeeded');
      } catch (e) {
        console.info(msg + ` getSkewX errorCode is:  ${e.code} + errormsg is: ${e.message}`);
        expect(e.code).assertEqual(401);
      }
    });

    /**
     * @tc.number    : SUB_BASIC_GRAPHICS_SPECIAL_API_TS_DRAWING_FONT_1203
     * @tc.name      : testFontSetAndGetSkewXMultipleCalls
     * @tc.desc      : Test for testFontSetAndGetSkewXMultipleCalls.
     * @tc.size      : SmallTest
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it('testFontSetAndGetSkewXMultipleCalls' , DEFAULT , () => {
      const msg = 'testFontSetAndGetSkewXMultipleCalls';
      let font = new drawing.Font();

      for ( let i = 0 ; i < 20 ; i ++ ) {
        try {
          font.setSkewX(Math.random() * Number.MAX_VALUE);
          let skewX: number = font.getSkewX();
          console.info(msg + ' setAndGetSkewX successed,getSkewX:' + skewX);
        } catch( e ) {
          console.info(msg + ` setAndGetSkewX errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
          expect().assertFail();
        }
      }

      for ( let i = 0 ; i < 20 ; i ++ ) {
        try {
          font.setSkewX(Math.random() * Number.MAX_VALUE);
          console.info(msg + ' setSkewX successed');
        } catch( e ) {
          console.info(msg + ` setSkewX errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
          expect().assertFail();
        }
      }

      for ( let i = 0 ; i < 20 ; i ++ ) {
        try {
          let skewX: number = font.getSkewX();
          console.info(msg + ' getSkewX successed,getSkewX:' + skewX);
        } catch( e ) {
          console.info(msg + ` getSkewX errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
          expect().assertFail();
        }
      }
    });

    /**
     * @tc.number    : SUB_BASIC_GRAPHICS_SPECIAL_API_TS_DRAWING_FONT_1300
     * @tc.name      : testFontIsSubpixelNormal
     * @tc.desc      : Test for testFontIsSubpixelNormal.
     * @tc.size      : SmallTest
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('testFontIsSubpixelNormal' , DEFAULT , () => {
      const msg = 'testFontIsSubpixelNormal';
      let font = new drawing.Font();

      try {
        font.enableSubpixel(true);
        let subpixel: boolean = font.isSubpixel();
        console.info(msg + ' enableSubpixel successed,isSubpixel:' + subpixel);
      } catch( e ) {
        console.info(msg + ` enableSubpixel errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect().assertFail();
      }

      try {
        font.enableSubpixel(false);
        let subpixel: boolean = font.isSubpixel();
        console.info(msg + ' enableSubpixel successed,isSubpixel:' + subpixel);
      } catch( e ) {
        console.info(msg + ` enableSubpixel errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect().assertFail();
      }
    });

    /**
     * @tc.number    : SUB_BASIC_GRAPHICS_SPECIAL_API_TS_DRAWING_FONT_1302
     * @tc.name      : testFontIsSubpixelMismatch
     * @tc.desc      : Test for testFontIsSubpixelMismatch.
     * @tc.size      : SmallTest
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it('testFontIsSubpixelMismatch', DEFAULT, () => {
      const msg = 'testFontIsSubpixelMismatch';
      let font = new drawing.Font();

      try {
        font.isSubpixel('s');
        console.info(msg + ' isSubpixel succeeded');
      } catch (e) {
        console.info(msg + ` isSubpixel errorCode is:  ${e.code} + errormsg is: ${e.message}`);
        expect(e.code).assertEqual(401);
      }
    });

    /**
     * @tc.number    : SUB_BASIC_GRAPHICS_SPECIAL_API_TS_DRAWING_FONT_1303
     * @tc.name      : testFontIsSubpixelMultipleCalls
     * @tc.desc      : Test for testFontIsSubpixelMultipleCalls.
     * @tc.size      : SmallTest
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it('testFontIsSubpixelMultipleCalls' , DEFAULT , () => {
      const msg = 'testFontIsSubpixelMultipleCalls';
      let font = new drawing.Font();

      for ( let i = 0 ; i < 20 ; i ++ ) {
        try {
          let subpixel: boolean = font.isSubpixel();
          console.info(msg + ' isSubpixel successed,isSubpixel:' + subpixel);
        } catch( e ) {
          console.info(msg + ` isSubpixel errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
          expect().assertFail();
        }
      }
    });

    /**
     * @tc.number    : SUB_BASIC_GRAPHICS_SPECIAL_API_TS_DRAWING_FONT_1400
     * @tc.name      : testFontIsLinearMetricsNormal
     * @tc.desc      : Test for testFontIsLinearMetricsNormal.
     * @tc.size      : SmallTest
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('testFontIsLinearMetricsNormal' , DEFAULT , () => {
      const msg = 'testFontIsLinearMetricsNormal';
      let font = new drawing.Font();

      try {
        font.enableLinearMetrics(true);
        let linearMetrics: boolean = font.isLinearMetrics();
        console.info(msg + ' enableLinearMetrics successed,isSubpixel:' + linearMetrics);
      } catch( e ) {
        console.info(msg + ` enableLinearMetrics errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect().assertFail();
      }

      try {
        font.enableLinearMetrics(false);
        let linearMetrics: boolean = font.isLinearMetrics();
        console.info(msg + ' enableLinearMetrics successed,isSubpixel:' + linearMetrics);
      } catch( e ) {
        console.info(msg + ` enableLinearMetrics errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect().assertFail();
      }
    });

    /**
     * @tc.number    : SUB_BASIC_GRAPHICS_SPECIAL_API_TS_DRAWING_FONT_1401
     * @tc.name      : testFontIsLinearMetricsMismatch
     * @tc.desc      : Test for testFontIsLinearMetricsMismatch.
     * @tc.size      : SmallTest
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it('testFontIsLinearMetricsMismatch', DEFAULT, () => {
      const msg = 'testFontIsLinearMetricsMismatch';
      let font = new drawing.Font();

      try {
        font.isLinearMetrics('s');
        console.info(msg + ' isLinearMetrics succeeded');
      } catch (e) {
        console.info(msg + ` isLinearMetrics errorCode is:  ${e.code} + errormsg is: ${e.message}`);
        expect(e.code).assertEqual(401);
      }
    });

    /**
     * @tc.number    : SUB_BASIC_GRAPHICS_SPECIAL_API_TS_DRAWING_FONT_1402
     * @tc.name      : testFontIsLinearMetricsMultipleCalls
     * @tc.desc      : Test for testFontIsLinearMetricsMultipleCalls.
     * @tc.size      : SmallTest
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it('testFontIsLinearMetricsMultipleCalls' , DEFAULT , () => {
      const msg = 'testFontIsLinearMetricsMultipleCalls';
      let font = new drawing.Font();

      for ( let i = 0 ; i < 20 ; i ++ ) {
        try {
          let linearMetrics: boolean = font.isLinearMetrics();
          console.info(msg + ' isLinearMetrics successed,isSubpixel:' + linearMetrics);
        } catch( e ) {
          console.info(msg + ` isLinearMetrics errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
          expect().assertFail();
        }
      }
    });

    /**
     * @tc.number    : SUB_BASIC_GRAPHICS_SPECIAL_API_TS_DRAWING_FONT_1500
     * @tc.name      : testFontIsEmboldenNormal
     * @tc.desc      : Test for testFontIsEmboldenNormal.
     * @tc.size      : SmallTest
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('testFontIsEmboldenNormal' , DEFAULT , () => {
      const msg = 'testFontIsEmboldenNormal';
      let font = new drawing.Font();

      try {
        font.enableEmbolden(true);
        let embolden: boolean = font.isEmbolden();
        console.info(msg + ' enableEmbolden successed,isSubpixel:' + embolden);
      } catch( e ) {
        console.info(msg + ` enableEmbolden errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect().assertFail();
      }

      try {
        font.enableEmbolden(false);
        let embolden: boolean = font.isEmbolden();
        console.info(msg + ' enableEmbolden successed,isSubpixel:' + embolden);
      } catch( e ) {
        console.info(msg + ` enableEmbolden errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect().assertFail();
      }
    });

    /**
     * @tc.number    : SUB_BASIC_GRAPHICS_SPECIAL_API_TS_DRAWING_FONT_1501
     * @tc.name      : testFontIsEmboldenMismatch
     * @tc.desc      : Test for testFontIsEmboldenMismatch.
     * @tc.size      : SmallTest
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it('testFontIsEmboldenMismatch', DEFAULT, () => {
      const msg = 'testFontIsEmboldenMismatch';
      let font = new drawing.Font();

      try {
        font.isEmbolden('s');
        console.info(msg + ' isEmbolden succeeded');
      } catch (e) {
        console.info(msg + ` isEmbolden errorCode is:  ${e.code} + errormsg is: ${e.message}`);
        expect(e.code).assertEqual(401);
      }
    });

    /**
     * @tc.number    : SUB_BASIC_GRAPHICS_SPECIAL_API_TS_DRAWING_FONT_1502
     * @tc.name      : testFontIsEmboldenMultipleCalls
     * @tc.desc      : Test for testFontIsEmboldenMultipleCalls.
     * @tc.size      : SmallTest
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it('testFontIsEmboldenMultipleCalls' , DEFAULT , () => {
      const msg = 'testFontIsEmboldenMultipleCalls';
      let font = new drawing.Font();

      for ( let i = 0 ; i < 20 ; i ++ ) {
        try {
          let embolden: boolean = font.isEmbolden();
          console.info(msg + ' isEmbolden successed,isSubpixel:' + embolden);
        } catch( e ) {
          console.info(msg + ` isEmbolden errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
          expect().assertFail();
        }
      }
    });

    /**
     * @tc.number    : SUB_BASIC_GRAPHICS_SPECIAL_API_TS_DRAWING_FONT_1600
     * @tc.name      : testFontMeasureSingleCharacterNormal
     * @tc.desc      : Test for testFontMeasureSingleCharacterNormal.
     * @tc.size      : SmallTest
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('testFontMeasureSingleCharacterNormal' , DEFAULT , () => {
      const msg = 'testFontMeasureSingleCharacterNormal';
      let font = new drawing.Font();

      try {
        let width: number = font.measureSingleCharacter("你");
        console.info(msg + ' measureSingleCharacter successed,width:' + width);
      } catch( e ) {
        console.info(msg + ` measureSingleCharacter errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect().assertFail();
      }

      try {
        let width: number = font.measureSingleCharacter("A");
        console.info(msg + ' measureSingleCharacter successed,width:' + width);
      } catch( e ) {
        console.info(msg + ` measureSingleCharacter errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect().assertFail();
      }

      try {
        let width: number = font.measureSingleCharacter("1");
        console.info(msg + ' measureSingleCharacter successed,width:' + width);
      } catch( e ) {
        console.info(msg + ` measureSingleCharacter errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect().assertFail();
      }
    });

    /**
     * @tc.number    : SUB_BASIC_GRAPHICS_SPECIAL_API_TS_DRAWING_FONT_1601
     * @tc.name      : testFontMeasureSingleCharacterNull
     * @tc.desc      : Test for testFontMeasureSingleCharacterNull.
     * @tc.size      : SmallTest
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it('testFontMeasureSingleCharacterNull' , DEFAULT , () => {
      const msg = 'testFontMeasureSingleCharacterNull';
      let font = new drawing.Font();

      try {
        font.measureSingleCharacter(null);
        console.info(msg + ' measureSingleCharacter succeeded');
      } catch( e ) {
        console.info(msg + ` measureSingleCharacter errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect(e.code).assertEqual(401);
      }

      try {
        font.measureSingleCharacter(undefined);
        console.info(msg + ' measureSingleCharacter succeeded');
      } catch( e ) {
        console.info(msg + ` measureSingleCharacter errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect(e.code).assertEqual(401);
      }
    });

    /**
     * @tc.number    : SUB_BASIC_GRAPHICS_SPECIAL_API_TS_DRAWING_FONT_1602
     * @tc.name      : testFontMeasureSingleCharacterMismatch
     * @tc.desc      : Test for testFontMeasureSingleCharacterMismatch.
     * @tc.size      : SmallTest
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it('testFontMeasureSingleCharacterMismatch' , DEFAULT , () => {
      const msg = 'testFontMeasureSingleCharacterMismatch';
      let font = new drawing.Font();

      try {
        font.measureSingleCharacter("A" , "A");
        console.info(msg + ' measureSingleCharacter succeeded');
      } catch( e ) {
        console.info(msg + ` measureSingleCharacter errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect(e.code).assertEqual(401);
      }

      try {
        font.measureSingleCharacter();
        console.info(msg + ' measureSingleCharacter succeeded');
      } catch( e ) {
        console.info(msg + ` measureSingleCharacter errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect(e.code).assertEqual(401);
      }

      try {
        font.measureSingleCharacter(11);
        console.info(msg + ' measureSingleCharacter succeeded');
      } catch( e ) {
        console.info(msg + ` measureSingleCharacter errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect(e.code).assertEqual(401);
      }
    });

    /**
     * @tc.number    : SUB_BASIC_GRAPHICS_SPECIAL_API_TS_DRAWING_FONT_1603
     * @tc.name      : testFontMeasureSingleCharacterMultipleCalls
     * @tc.desc      : Test for testFontMeasureSingleCharacterMultipleCalls.
     * @tc.size      : SmallTest
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it('testFontMeasureSingleCharacterMultipleCalls' , DEFAULT , () => {
      const msg = 'testFontMeasureSingleCharacterMultipleCalls';
      let font = new drawing.Font();
      const randomString = Math.random().toString(36).substring(2 , 3);

      for ( let i = 0 ; i < 20 ; i ++ ) {
        try {
          let width: number = font.measureSingleCharacter(randomString)
          console.info(msg + ' measureSingleCharacter successed,width:' + width);
        } catch( e ) {
          console.info(msg + ` measureSingleCharacter errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
          expect().assertFail();
        }
      }
    });

    /**
     * @tc.number    : SUB_BASIC_GRAPHICS_SPECIAL_API_TS_DRAWING_FONT_1604
     * @tc.name      : testFontMeasureSingleCharacterAbnormal
     * @tc.desc      : Test for testFontMeasureSingleCharacterAbnormal.
     * @tc.size      : SmallTest
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it('testFontMeasureSingleCharacterAbnormal' , DEFAULT , () => {
      const msg = 'testFontMeasureSingleCharacterAbnormal';
      let font = new drawing.Font();

      try {
        let width = font.measureSingleCharacter("");
        console.info(msg + ' measureSingleCharacter successed,width:' + width);
      } catch( e ) {
        console.info(msg + ` measureSingleCharacter errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect(e.code).assertEqual(401);
      }

      try {
        let width = font.measureSingleCharacter("abdcdefg");
        console.info(msg + ' measureSingleCharacter successed,width:' + width);
      } catch( e ) {
        console.info(msg + ` measureSingleCharacter errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect(e.code).assertEqual(401);
      }
    });

    /**
     * @tc.number    : SUB_BASIC_GRAPHICS_SPECIAL_API_TS_DRAWING_FONT_1600
     * @tc.name      : testFontMeasureSingleCharacterNormal
     * @tc.desc      : Test for testFontMeasureSingleCharacterNormal.
     * @tc.size      : SmallTest
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('testFontMeasureSingleCharacterNormal' , DEFAULT , () => {
      const msg = 'testFontMeasureSingleCharacterNormal';
      let font = new drawing.Font();

      try {
        let width: number = font.measureSingleCharacter("你");
        console.info(msg + ' measureSingleCharacter successed,width:' + width);
      } catch( e ) {
        console.info(msg + ` measureSingleCharacter errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect().assertFail();
      }

      try {
        let width: number = font.measureSingleCharacter("A");
        console.info(msg + ' measureSingleCharacter successed,width:' + width);
      } catch( e ) {
        console.info(msg + ` measureSingleCharacter errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect().assertFail();
      }

      try {
        let width: number = font.measureSingleCharacter("1");
        console.info(msg + ' measureSingleCharacter successed,width:' + width);
      } catch( e ) {
        console.info(msg + ` measureSingleCharacter errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect().assertFail();
      }
    });

    /**
     * @tc.number    : SUB_BASIC_GRAPHICS_SPECIAL_API_TS_DRAWING_FONT_1601
     * @tc.name      : testFontMeasureSingleCharacterNull
     * @tc.desc      : Test for testFontMeasureSingleCharacterNull.
     * @tc.size      : SmallTest
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it('testFontMeasureSingleCharacterNull' , DEFAULT , () => {
      const msg = 'testFontMeasureSingleCharacterNull';
      let font = new drawing.Font();

      try {
        font.measureSingleCharacter(null);
        console.info(msg + ' measureSingleCharacter succeeded');
      } catch( e ) {
        console.info(msg + ` measureSingleCharacter errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect(e.code).assertEqual(401);
      }

      try {
        font.measureSingleCharacter(undefined);
        console.info(msg + ' measureSingleCharacter succeeded');
      } catch( e ) {
        console.info(msg + ` measureSingleCharacter errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect(e.code).assertEqual(401);
      }
    });

    /**
     * @tc.number    : SUB_BASIC_GRAPHICS_SPECIAL_API_TS_DRAWING_FONT_1602
     * @tc.name      : testFontMeasureSingleCharacterMismatch
     * @tc.desc      : Test for testFontMeasureSingleCharacterMismatch.
     * @tc.size      : SmallTest
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it('testFontMeasureSingleCharacterMismatch' , DEFAULT , () => {
      const msg = 'testFontMeasureSingleCharacterMismatch';
      let font = new drawing.Font();

      try {
        font.measureSingleCharacter("A" , "A");
        console.info(msg + ' measureSingleCharacter succeeded');
      } catch( e ) {
        console.info(msg + ` measureSingleCharacter errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect(e.code).assertEqual(401);
      }

      try {
        font.measureSingleCharacter();
        console.info(msg + ' measureSingleCharacter succeeded');
      } catch( e ) {
        console.info(msg + ` measureSingleCharacter errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect(e.code).assertEqual(401);
      }

      try {
        font.measureSingleCharacter(11);
        console.info(msg + ' measureSingleCharacter succeeded');
      } catch( e ) {
        console.info(msg + ` measureSingleCharacter errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect(e.code).assertEqual(401);
      }
    });

    /**
     * @tc.number    : SUB_BASIC_GRAPHICS_SPECIAL_API_TS_DRAWING_FONT_1603
     * @tc.name      : testFontMeasureSingleCharacterMultipleCalls
     * @tc.desc      : Test for testFontMeasureSingleCharacterMultipleCalls.
     * @tc.size      : SmallTest
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it('testFontMeasureSingleCharacterMultipleCalls' , DEFAULT , () => {
      const msg = 'testFontMeasureSingleCharacterMultipleCalls';
      let font = new drawing.Font();
      const randomString = Math.random().toString(36).substring(2 , 3);

      for ( let i = 0 ; i < 20 ; i ++ ) {
        try {
          let width: number = font.measureSingleCharacter(randomString)
          console.info(msg + ' measureSingleCharacter successed,width:' + width);
        } catch( e ) {
          console.info(msg + ` measureSingleCharacter errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
          expect().assertFail();
        }
      }
    });

    /**
     * @tc.number    : SUB_BASIC_GRAPHICS_SPECIAL_API_TS_DRAWING_FONT_1604
     * @tc.name      : testFontMeasureSingleCharacterAbnormal
     * @tc.desc      : Test for testFontMeasureSingleCharacterAbnormal.
     * @tc.size      : SmallTest
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it('testFontMeasureSingleCharacterAbnormal' , DEFAULT , () => {
      const msg = 'testFontMeasureSingleCharacterAbnormal';
      let font = new drawing.Font();

      try {
        let width = font.measureSingleCharacter("");
        console.info(msg + ' measureSingleCharacter successed,width:' + width);
      } catch( e ) {
        console.info(msg + ` measureSingleCharacter errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect(e.code).assertEqual(401);
      }

      try {
        let width = font.measureSingleCharacter("abdcdefg");
        console.info(msg + ' measureSingleCharacter successed,width:' + width);
      } catch( e ) {
        console.info(msg + ` measureSingleCharacter errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect(e.code).assertEqual(401);
      }
    });
  });
}