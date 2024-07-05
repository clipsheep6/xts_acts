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
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from "@ohos/hypium"
import { RenderNode, DrawContext } from "@ohos.arkui.node"
import drawing from "@ohos.graphics.drawing"
import common2D from "@ohos.graphics.common2D"
import image from "@ohos.multimedia.image"
import text from "@ohos.graphics.text"
import { UiDriver, BY, ON, PointerMatrix } from '@ohos.UiTest'
import { BusinessError } from '@ohos.base';
import buffer from '@ohos.buffer';
import {buildParagraph} from './utils';

export default function graphicTextClass(context, windowStage, abilityStorage) {
  describe('graphic_text_class_test', function () {
    console.log('describe graphic_text_class_test start!!!')

    async function sleep(time) {
      let timeoutId = null;
      let promise = new Promise(resolve => {
        timeoutId = setTimeout(() => {
          resolve('sleep finished');
        }, time);
      })
      let result = await promise;
      clearTimeout(timeoutId)
    }

    let pixel;
    beforeAll(async function () {
      const color: ArrayBuffer = new ArrayBuffer(40000); // 40000为需要创建的像素buffer大小，取值为：height * width *4
      let opts: image.InitializationOptions = {
        editable: true, pixelFormat: 3, size: {
          height: 100, width: 100//100为创建的PixelMap的宽高
        }
      }
      pixel = await image.createPixelMap(color, opts);
    })
    /**
     * @tc.number    : SUB_BASIC_WMS_SPCIAL_XTS_GRAPHICTEXT_JS_API_001
     * @tc.name      : testParagraph_layoutSync_Parameter
     * @tc.desc      : To test Paragraph layoutSyncSync interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level3
     */
    it('testlayoutSync', 1, async function () {
      let msg = "testlayoutSync"
      console.info(msg + 'begin');
      let paragraph = buildParagraph();
      try {
          paragraph.layoutSync(100);
        } catch (err) {
        console.info(msg + 'layoutSync error cause: ' + JSON.stringify(err));
        expect().assertFail();
      }
    })
    /**
     * @tc.number    : SUB_BASIC_WMS_SPCIAL_XTS_GRAPHICTEXT_JS_API_002
     * @tc.name      : testParagraph_Paint_Parameter
     * @tc.desc      : To test Paragraph Paint interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level3
     */
    it('testPaint', 2, async function () {
      let msg = "testPaint"
      console.info(msg + 'begin');
      let canvas = new drawing.Canvas(pixel)
      let paragraph = buildParagraph();
      try {
          paragraph.paint(canvas, 10, 10);
        } catch (err) {
        console.info(msg + 'paint error cause: ' + JSON.stringify(err));
        expect().assertFail();
      }
    })
    /**
     * @tc.number    : SUB_BASIC_WMS_SPCIAL_XTS_GRAPHICTEXT_JS_API_003
     * @tc.name      : testParagraph_GetMaxWidth_Parameter
     * @tc.desc      : To test Paragraph GetMaxWidth interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level3
     */
    it('testGetMaxWidth', 3, async function () {
      let msg = "testGetMaxWidth"
      console.info(msg + 'begin');
      let paragraph = buildParagraph();
      try {
          let width = paragraph.getMaxWidth();
          expect(width != null).assertTrue();
        } catch (err) {
        console.info(msg + 'getMaxWidth error cause: ' + JSON.stringify(err));
        expect().assertFail();
      }
    })
    /**
     * @tc.number    : SUB_BASIC_WMS_SPCIAL_XTS_GRAPHICTEXT_JS_API_004
     * @tc.name      : testParagraph_GetHeight_Parameter
     * @tc.desc      : To test Paragraph GetHeight interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level3
     */
    it('testGetHeight', 4, async function () {
      let msg = "testGetHeight"
      console.info(msg + 'begin');
      let paragraph = buildParagraph();
      try {
          let height = paragraph.getHeight();
          expect(height != null).assertTrue();
        } catch (err) {
        console.info(msg + 'getHeight error cause: ' + JSON.stringify(err));
        expect().assertFail();
      }
    })
    /**
     * @tc.number    : SUB_BASIC_WMS_SPCIAL_XTS_GRAPHICTEXT_JS_API_005
     * @tc.name      : testParagraph_GetLongestLine_Parameter
     * @tc.desc      : To test Paragraph GetLongestLine interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level3
     */
    it('testGetLongestLine', 5, async function () {
      let msg = "testGetLongestLine"
      console.info(msg + 'begin');
      let paragraph = buildParagraph();
      try {
          let line = paragraph.getLongestLine();
          expect(line != null).assertTrue();
        } catch (err) {
        console.info(msg + 'getLongestLine error cause: ' + JSON.stringify(err));
        expect().assertFail();
      }
    })

    /**
     * @tc.number    : SUB_BASIC_WMS_SPCIAL_XTS_GRAPHICTEXT_JS_API_006
     * @tc.name      : testParagraph_GetMinIntrinsicWidth_Parameter
     * @tc.desc      : To test Paragraph GetMinIntrinsicWidth interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level3
     */
    it('testGetMinIntrinsicWidth', 6, async function () {
      let msg = "testGetMinIntrinsicWidth"
      console.info(msg + 'begin');
      let paragraph = buildParagraph();
      try {
          let width = paragraph.getMinIntrinsicWidth();
          expect(width != null).assertTrue();
        } catch (err) {
        console.info(msg + 'getMinIntrinsicWidth error cause: ' + JSON.stringify(err));
        expect().assertFail();
      }
    })
    /**
     * @tc.number    : SUB_BASIC_WMS_SPCIAL_XTS_GRAPHICTEXT_JS_API_007
     * @tc.name      : testParagraph_GetMaxIntrinsicWidth_Parameter
     * @tc.desc      : To test Paragraph GetMaxIntrinsicWidth interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level3
     */
    it('testGetMaxIntrinsicWidth', 7, async function () {
      let msg = "testGetMaxIntrinsicWidth"
      console.info(msg + 'begin');
      let paragraph = buildParagraph();
      try {
          let width = paragraph.getMaxIntrinsicWidth();
          expect(width != null).assertTrue();
        } catch (err) {
        console.info(msg + 'getMaxIntrinsicWidth error cause: ' + JSON.stringify(err));
        expect().assertFail();
      }
    })
    /**
     * @tc.number    : SUB_BASIC_WMS_SPCIAL_XTS_GRAPHICTEXT_JS_API_008
     * @tc.name      : testParagraph_GetAlphabeticBaseline_Parameter
     * @tc.desc      : To test Paragraph GetAlphabeticBaseline interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level3
     */
    it('testGetAlphabeticBaseline', 8, async function () {
      let msg = "testGetAlphabeticBaseline"
      console.info(msg + 'begin');
      let paragraph = buildParagraph();
      try {
          let baseline = paragraph.getAlphabeticBaseline();
          expect(baseline != null).assertTrue();
        } catch (err) {
        console.info(msg + 'getAlphabeticBaseline error cause: ' + JSON.stringify(err));
        expect().assertFail();
      }
    })

    /**
     * @tc.number    : SUB_BASIC_WMS_SPCIAL_XTS_GRAPHICTEXT_JS_API_009
     * @tc.name      : testParagraph_GetIdeographicBaseline_Parameter
     * @tc.desc      : To test Paragraph GetIdeographicBaseline interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level3
     */
    it('testGetIdeographicBaseline', 9, async function () {
      let msg = "testGetIdeographicBaseline"
      console.info(msg + 'begin');
      let paragraph = buildParagraph();
      try {
          let baseline = paragraph.getIdeographicBaseline();
          expect(baseline != null).assertTrue();
        } catch (err) {
        console.info(msg + 'getIdeographicBaseline error cause: ' + JSON.stringify(err));
        expect().assertFail();
      }
    })
    /**
     * @tc.number    : SUB_BASIC_WMS_SPCIAL_XTS_GRAPHICTEXT_JS_API_010
     * @tc.name      : testParagraph_GetRectsForRange_Parameter
     * @tc.desc      : To test Paragraph GetRectsForRange interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level3
     */
    it('testGetRectsForRange', 10, async function () {
      let msg = "testGetRectsForRange"
      console.info(msg + 'begin');
      let paragraph = buildParagraph();
      let range :text.Range = {start : 10,end: 50};
      let wstyle = text.RectWidthStyle.TIGHT;
      let hstyle = text.RectHeightStyle.TIGHT;
      try {
          let rects : Array<text.TextBox> = paragraph.getRectsForRange(range,wstyle,hstyle);
          expect(rects != null).assertTrue();
        } catch (err) {
        console.info(msg + 'getRectsForRange error cause: ' + JSON.stringify(err));
        expect().assertFail();
      }
    })
    /**
     * @tc.number    : SUB_BASIC_WMS_SPCIAL_XTS_GRAPHICTEXT_JS_API_011
     * @tc.name      : testParagraph_GetRectsForPlaceholders_Parameter
     * @tc.desc      : To test Paragraph GetRectsForPlaceholders interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level3
     */
    it('testGetRectsForPlaceholders', 11, async function () {
      let msg = "testGetRectsForPlaceholders"
      console.info(msg + 'begin');
      let paragraph = buildParagraph();
      try {
          let rects : Array<text.TextBox> = paragraph.getRectsForPlaceholders();
          expect(rects != null).assertTrue();
        } catch (err) {
        console.info(msg + 'getRectsForPlaceholders error cause: ' + JSON.stringify(err));
        expect().assertFail();
      }
    })
    /**
     * @tc.number    : SUB_BASIC_WMS_SPCIAL_XTS_GRAPHICTEXT_JS_API_012
     * @tc.name      : testParagraph_GetGlyphPositionAtCoordinate_Parameter
     * @tc.desc      : To To test Paragraph GetGlyphPositionAtCoordinate interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level3
     */
    it('testGetGlyphPositionAtCoordinate', 12, async function () {
      let msg = "testGetGlyphPositionAtCoordinate"
      console.info(msg + 'begin');
      let paragraph = buildParagraph();
      try {
          let positionWithAffinity = paragraph.getGlyphPositionAtCoordinate(10,10);
          expect(positionWithAffinity != null).assertTrue();
        } catch (err) {
        console.info(msg + 'getGlyphPositionAtCoordinate error cause: ' + JSON.stringify(err));
        expect().assertFail();
      }
    })
    /**
     * @tc.number    : SUB_BASIC_WMS_SPCIAL_XTS_GRAPHICTEXT_JS_API_013
     * @tc.name      : testParagraph_GetWordBoundary_Parameter
     * @tc.desc      : To test Paragraph GetWordBoundary interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level3
     */
    it('testGetWordBoundary', 13, async function () {
      let msg = "testGetWordBoundary"
      console.info(msg + 'begin');
      let paragraph = buildParagraph();
      try {
          let range:text.Range = paragraph.getWordBoundary(10);
          expect(range != null).assertTrue();
        } catch (err) {
        console.info(msg + 'getWordBoundary error cause: ' + JSON.stringify(err));
        expect().assertFail();
      }
    })
    /**
     * @tc.number    : SUB_BASIC_WMS_SPCIAL_XTS_GRAPHICTEXT_JS_API_014
     * @tc.name      : testParagraph_GetLineCount_Parameter
     * @tc.desc      : To test Paragraph GetLineCount interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level3
     */
    it('testGetLineCount', 14, async function () {
      let msg = "testGetLineCount"
      console.info(msg + 'begin');
      let paragraph = buildParagraph();
      try {
          let linecount = paragraph.getLineCount();
          expect(linecount != null).assertTrue();
        } catch (err) {
        console.info(msg + 'getLineCount error cause: ' + JSON.stringify(err));
        expect().assertFail();
      }
    })
    /**
     * @tc.number    : SUB_BASIC_WMS_SPCIAL_XTS_GRAPHICTEXT_JS_API_015
     * @tc.name      : testParagraph_GetLineHeight_Parameter
     * @tc.desc      : To test Paragraph GetLineHeight interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level3
     */
    it('testGetLineHeight', 15, async function () {
      let msg = "testGetLineHeight"
      console.info(msg + 'begin');
      let paragraph = buildParagraph();
      try {
          let height = paragraph.getLineHeight(1);
          expect(height != null).assertTrue();
        } catch (err) {
        console.info(msg + 'getLineHeight error cause: ' + JSON.stringify(err));
        expect().assertFail();
      }
    })
    /**
     * @tc.number    : SUB_BASIC_WMS_SPCIAL_XTS_GRAPHICTEXT_JS_API_016
     * @tc.name      : testParagraph_GetLineWidth_Parameter
     * @tc.desc      : To test Paragraph GetLineWidth interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level3
     */
    it('testGetLineWidth', 16, async function () {
      let msg = "testGetLineWidth"
      console.info(msg + 'begin');
      let paragraph = buildParagraph();
      try {
          let width = paragraph.getLineWidth(1);
          expect(width != null).assertTrue();
        } catch (err) {
        console.info(msg + 'getLineWidth error cause: ' + JSON.stringify(err));
        expect().assertFail();
      }
    })
    /**
     * @tc.number    : SUB_BASIC_WMS_SPCIAL_XTS_GRAPHICTEXT_JS_API_017
     * @tc.name      : testParagraph_DidExceedMaxLines_Parameter
     * @tc.desc      : To test Paragraph DidExceedMaxLines interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level3
     */
    it('testDidExceedMaxLines', 17, async function () {
      let msg = "testDidExceedMaxLines"
      console.info(msg + 'begin');
      let paragraph = buildParagraph();
      try {
          let did = paragraph.didExceedMaxLines();
          expect(did != null).assertTrue();
        } catch (err) {
        console.info(msg + 'didExceedMaxLines error cause: ' + JSON.stringify(err));
        expect().assertFail();
      }
    })
    /**
     * @tc.number    : SUB_BASIC_WMS_SPCIAL_XTS_GRAPHICDRAWING_JS_API_018
     * @tc.name      : testTextLine_GetGlyphCount
     * @tc.desc      : test TextLine GlyphCount
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it('testTextLine_GetGlyphCount', 18, async function () {
      let msg = "testText_GetGlyphCount"
      console.info(msg + 'begin');
      let canvas = new drawing.Canvas(pixel)
      let textTitle = "123";
      let paragraph = buildParagraph();
      paragraph.layoutSync(200);
      paragraph.paint(canvas, 0, 0);
      let textLines: Array<text.TextLine> = paragraph.getTextLines();
      let length = textLines.length;
      for (let i = 0; i < length; i++) {
        let textLine: text.TextLine = textLines[i];
        try {
           expect(textLine.getGlyphCount()).assertEqual(textTitle.length);
           console.info(msg + 'getGlyphCount successed second');
        } catch (err) {
          console.info(msg + 'getGlyphCount error cause: ' + JSON.stringify(err));
          expect().assertFail();
        }
      }
      
    })
    /**
     * @tc.number    : SUB_BASIC_WMS_SPCIAL_XTS_GRAPHICDRAWING_JS_API_019
     * @tc.name      : testTextLine_GetTextRange
     * @tc.desc      : test TextLine GetTextRange
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it('testTextLine_GetTextRange', 19, async function () {
      let msg = "testTextLine_GetTextRange"
      console.info(msg + 'begin');
      let canvas = new drawing.Canvas(pixel)
      let textTitle = "123";
      let paragraph = buildParagraph();
      paragraph.layoutSync(200);
      paragraph.paint(canvas, 0, 0);
      let textLines: Array<text.TextLine> = paragraph.getTextLines();
      let length = textLines.length;
      for (let i = 0; i < length; i++) {
        let textLine: text.TextLine = textLines[i];
        try {
           expect(0).assertEqual(textLine.getTextRange().start);
           console.info(msg + 'getTextRange successed second');
        } catch (err) {
          console.info(msg + 'getGlyphCount error cause: ' + JSON.stringify(err));
          expect().assertFail();
        }
      }
      
    })
    /**
     * @tc.number    : SUB_BASIC_WMS_SPCIAL_XTS_GRAPHICDRAWING_JS_API_020
     * @tc.name      : testTextLine_Paint
     * @tc.desc      : test TextLine Paint
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it('testTextLine_Paint', 20, async function () {
      let msg = "testTextLine_Paint"
      console.info(msg + 'begin');
      let canvas = new drawing.Canvas(pixel)
      let textTitle = "123";
      let paragraph = buildParagraph();
      paragraph.layoutSync(200);
      paragraph.paint(canvas, 0, 0);
      let textLines: Array<text.TextLine> = paragraph.getTextLines();
      let length = textLines.length;
      for (let i = 0; i < length; i++) {
        let textLine: text.TextLine = textLines[i];
        try {
           textLine.paint(canvas,textLine.getTextRange().start, textLine.getTextRange().end);
           console.info(msg + 'paint successed second');
        } catch (err) {
          console.info(msg + 'paint error cause: ' + JSON.stringify(err));
          expect().assertFail();
        }
      }
    })

  /**
     * @tc.number    : SUB_BASIC_WMS_SPCIAL_XTS_GRAPHICDRAWING_JS_API_021
     * @tc.name      : testParagraphBuilder_AonstructorAndAddText
     * @tc.desc      : Constructs a ParagraphBuilder object and calls its methods
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it('testParagraphBuilder_AonstructorAndAddText', 21, async function () {
      let msg = "testParagraphBuilder_AonstructorAndAddText"
      console.info(msg + 'begin');
      let myTextStyle: text.TextStyle = {
        color : {alpha: 255, red: 0, green: 0, blue: 255},
        fontSize: 66,
      };

      let myTextStyleTwo: text.TextStyle = {
        color : {alpha: 255, red: 255, green: 0, blue: 0},
        fontSize : 33,
      };
      let myParagraphStyle: text.ParagraphStyle = {
        textStyle : myTextStyle,
        align: 3,
      };
      let myPlaceholderSpan: text.PlaceholderSpan = {
        width: 22,
        height: 33,
        align: text.PlaceholderAlignment.ABOVE_BASELINE,
        baseline: text.TextBaseline.ALPHABETIC,
        baselineOffset: 66
      };
      let fontCollection = new text.FontCollection();
      let paragraphGraphBuilder = new text.ParagraphBuilder(myParagraphStyle, fontCollection);
      try {
        paragraphGraphBuilder.addPlaceholder(myPlaceholderSpan);
        console.info(msg + 'addPlaceholder successed');
      } catch (err) {
        console.info(msg + 'addPlaceholder error cause: ' + JSON.stringify(err));
        expect().assertFail();
      }
      try {
        paragraphGraphBuilder.pushStyle(myTextStyle);
        console.info(msg + 'pushStyle successed');
      } catch (err) {
        console.info(msg + 'first pushStyle error cause: ' + JSON.stringify(err));
        expect().assertFail();
      }
      try {
        paragraphGraphBuilder.addText("123666");
        console.info(msg + 'addText successed first');
      } catch (err) {
        console.info(msg + 'first addText error cause: ' + JSON.stringify(err));
        expect().assertFail();
      }
      try {
        paragraphGraphBuilder.pushStyle(myTextStyleTwo);
        console.info(msg + 'pushStyle successed second');
      } catch (err) {
        console.info(msg + 'second pushStyle error cause: ' + JSON.stringify(err));
        expect().assertFail();
      }
      try {
        paragraphGraphBuilder.popStyle();
        console.info(msg + 'popStyle successed');
      } catch (err) {
        console.info(msg + 'popStyle error cause: ' + JSON.stringify(err));
        expect().assertFail();
      }
      try {
        paragraphGraphBuilder.addText("1235555");
        console.info(msg + 'addText successed first');
      } catch (err) {
        console.info(msg + 'second addText error cause: ' + JSON.stringify(err));
        expect().assertFail();
      }
      try {
        let paragraph = paragraphGraphBuilder.build();
        console.info(msg + 'build successed');
      } catch (err) {
        console.info(msg + 'build error cause: ' + JSON.stringify(err));
        expect().assertFail();
      }
    })
    /**
     * @tc.number    : SUB_BASIC_WMS_SPCIAL_XTS_GRAPHICDRAWING_JS_API_022
     * @tc.name      : Run GetGlyphCount
     * @tc.desc      : To test Run GetGlyphCount interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level3
     */
    it('testTexRun_GetGlyphCount', 22, async function () {
      let msg = 'testTextRun_GetGlyphCount';
      console.info(msg + 'begin');
      let canvas = new drawing.Canvas(pixel)
      let textTitle = "123";
      let paragraph = buildParagraph();
      paragraph.layoutSync(200);
      let textLines : Array<text.TextLine> = paragraph.getTextLines();
      let length = textLines.length;
      for(let i = 0 ; i < length ; i++) {
        let textLine: text.TextLine = textLines[i];
        textLine.paint(canvas, 0, (i + 1) * 20);
        let runs: Array<text.Run> = textLine.getGlyphRuns();
        let runslength = runs.length;
        for (let j = 0; j < runslength; j++) {
          let run: text.Run = runs[j];
          try {
            expect(run.getGlyphCount()).assertEqual(3);
          } catch (err) {
            console.info(msg + JSON.stringify(err));
            expect().assertFail();
          }
        }
      }
    })

    /**
     * @tc.number    : SUB_BASIC_WMS_SPCIAL_XTS_GRAPHICDRAWING_JS_API_023
     * @tc.name      : Run GetGlyphs
     * @tc.desc      : To test Run GetGlyphs interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level3
     */
    it('testTextRun_GetGlyphs', 23, async function () {
      let msg = 'testTextRun_GetGlyphs';
      console.info(msg + 'begin');
      let canvas = new drawing.Canvas(pixel);
      let textTitle = "123";
      let paragraph = buildParagraph();
      let textLines : Array<text.TextLine> = paragraph.getTextLines();
      let length = textLines.length;
      for(let i =0 ; i < length ; i++) {
        let textLine: text.TextLine = textLines[i];
        textLine.paint(canvas, 0, (i + 1) * 20);
        let runs: Array<text.Run> = textLine.getGlyphRuns();
        let runslength = runs.length;
        for (let j = 0; j < runslength; j++) {
          let run: text.Run = runs[j];
          try {
            expect(run.getGlyphs()).assertEqual(3);
          } catch (err) {
            console.info(msg + JSON.stringify(err));
            expect().assertFail();
          }
        }
      }
    })

    /**
     * @tc.number    : SUB_BASIC_WMS_SPCIAL_XTS_GRAPHICDRAWING_JS_API_024
     * @tc.name      : Run GetPositions
     * @tc.desc      : To test Run GetPositions interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level3
     */
    it('testTextRun_GetPositions', 24, async function () {
      let msg = 'testTextRun_GetPositions';
      console.info(msg + 'begin');
      let canvas = new drawing.Canvas(pixel)
      let textTitle = "123";
      let paragraph = buildParagraph();
      let textLines : Array<text.TextLine> = paragraph.getTextLines();
      let length = textLines.length;
      for(let i =0 ; i < length ; i++) {
        let textLine: text.TextLine = textLines[i];
        textLine.paint(canvas, 0, (i + 1) * 20);
        let runs: Array<text.Run> = textLine.getGlyphRuns();
        let runslength = runs.length;
        for (let j = 0; j < runslength; j++) {
          let run: text.Run = runs[j];
          try {
            expect(run.getPositions().length).assertEqual(3);
          } catch (err) {
            console.info(msg + JSON.stringify(err));
            expect().assertFail();
          }
        }
      }
    })

    /**
     * @tc.number    : SUB_BASIC_WMS_SPCIAL_XTS_GRAPHICDRAWING_JS_API_025
     * @tc.name      : Run GetOffsets
     * @tc.desc      : To test Run GetOffsets interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level3
     */
    it('testTextRun_GetOffsets', 25, async function () {
      let msg = 'testTextRun_GetOffsets';
      console.info(msg + 'begin');
      let canvas = new drawing.Canvas(pixel)
      let textTitle = "123";
      let paragraph = buildParagraph();
      let textLines : Array<text.TextLine> = paragraph.getTextLines();
      let length = textLines.length;
      for(let i =0 ; i < length ; i++) {
        let textLine: text.TextLine = textLines[i];
        textLine.paint(canvas, 0, (i + 1) * 20);
        let runs: Array<text.Run> = textLine.getGlyphRuns();
        let runslength = runs.length;
        for (let j = 0; j < runslength; j++) {
          let run: text.Run = runs[j];
          try {
            expect(run.getOffsets().length).assertEqual(3);
          } catch (err) {
            console.info(msg + JSON.stringify(err));
            expect().assertFail();
          }
        }
      }
    })

    /**
     * @tc.number    : SUB_BASIC_WMS_SPCIAL_XTS_GRAPHICDRAWING_JS_API_026
     * @tc.name      : Run GetFont
     * @tc.desc      : To test Run GetFont interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level3
     */
    it('testTextRun_GetFont', 26, async function () {
      let msg = 'testTextRun_GetFont';
      console.info(msg + 'begin');
      let canvas = new drawing.Canvas(pixel)
      let textTitle = "123";
      let paragraph = buildParagraph();
      let textLines : Array<text.TextLine> = paragraph.getTextLines();
      let length = textLines.length;
      for(let i =0 ; i < length ; i++) {
        let textLine: text.TextLine = textLines[i];
        textLine.paint(canvas, 0, (i + 1) * 20);
        let runs: Array<text.Run> = textLine.getGlyphRuns();
        let runslength = runs.length;
        for (let j = 0; j < runslength; j++) {
          let run: text.Run = runs[j];
          try {
            run.getFont();
          } catch (err) {
            console.info(msg + JSON.stringify(err));
            expect().assertFail();
          }
        }
      }
    })

    /**
     * @tc.number    : SUB_BASIC_WMS_SPCIAL_XTS_GRAPHICDRAWING_JS_API_027
     * @tc.name      : Run Paint
     * @tc.desc      : To test Run Paint interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level3
     */
    it('testTextRun_Paint', 27, async function () {
      let msg = 'testTextRun_Paint';
      console.info(msg + 'begin');
      let canvas = new drawing.Canvas(pixel)
      let textTitle = "123";
      let paragraph = buildParagraph();
      let textLines : Array<text.TextLine> = paragraph.getTextLines();
      let length = textLines.length;
      for(let i =0 ; i < length ; i++) {
        let textLine: text.TextLine = textLines[i];
        let runs: Array<text.Run> = textLine.getGlyphRuns();
        let runslength = runs.length;
        for (let j = 0; j < runslength; j++) {
          let run: text.Run = runs[j];
          try {
            run.paint(canvas, 0, j * 20);
          } catch (err) {
            console.info(msg + JSON.stringify(err));
            expect().assertFail();
          }
        }
      }
    })

    /**
     * @tc.number    : SUB_BASIC_WMS_SPCIAL_XTS_GRAPHICTEXT_JS_API_028
     * @tc.name      : testGetFontMetricsByTextStyle
     * @tc.desc      : To test Paragraph getFontMetricsByTextStyle.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level3
     */
    it('testGetFontMetricsByTextStyle', 28, async function () {
      let msg = "testGetFontMetricsByTextStyle"
      console.info(msg + 'begin');
      let paragraph = buildParagraph();
      let myTextStyle1: text.TextStyle = {};
      let myTextStyle2: text.TextStyle = {
        decoration: {textDecoration: text.TextDecorationType.NONE},
        color: { alpha: 255, red: 0, green: 255, blue: 0 },
        fontSize: 50,
        fontWeight: text.FontWeight.W400,
        baseline: text.TextBaseline.ALPHABETIC,
        heightScale: 1,
        heightOnly:true,
        fontFamilies:["Roboto"],
        fontStyle:text.FontStyle.NORMAL,
        locale:"en",
      };
      try {
        let fontMetrics1: drawing.FontMetrics = paragraph.getFontMetricsByTextStyle(myTextStyle1);
        let fontMetrics2: drawing.FontMetrics = paragraph.getFontMetricsByTextStyle(myTextStyle2);
      } catch (err) {
        console.info(msg + 'test getFontMetricsByTextStyle error ' + JSON.stringify(err));
        expect().assertFail();
      }
    })
    /**
     * @tc.number    : SUB_BASIC_WMS_SPCIAL_XTS_GRAPHICTEXT_JS_API_029
     * @tc.name      : testGetLineFontMetrics
     * @tc.desc      : To test Paragraph getLineFontMetrics.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level3
     */
    it('testGetLineFontMetrics', 29, async function () {
      let msg = "testGetLineFontMetrics"
      console.info(msg + 'begin');

      let fontCollection = new text.FontCollection();
      let myTextStyle: text.TextStyle = {
        color : {alpha: 255, red: 255, green: 0, blue: 0}
      };
      let myParagraphStyle: text.ParagraphStyle = {
        textStyle : myTextStyle
      };
      const ParagraphGraphBuilder = new text.ParagraphBuilder(myParagraphStyle, fontCollection);
      ParagraphGraphBuilder.addText("123\nA\n    \nB");
      let paragraph = ParagraphGraphBuilder.build();
      paragraph.layoutSync(200);
      try {
        let fontMetricsList1: Array<drawing.FontMetrics> = paragraph.getLineFontMetrics(0);
        expect(fontMetricsList1.length).assertEqual(0);
        let fontMetricsList2: Array<drawing.FontMetrics> = paragraph.getLineFontMetrics(1);
        expect(fontMetricsList2.length).assertEqual(3);
        let fontMetricsList3: Array<drawing.FontMetrics> = paragraph.getLineFontMetrics(2);
        expect(fontMetricsList3.length).assertEqual(1);
        let fontMetricsList4: Array<drawing.FontMetrics> = paragraph.getLineFontMetrics(3);
        expect(fontMetricsList4.length).assertEqual(0);
        let fontMetricsList5: Array<drawing.FontMetrics> = paragraph.getLineFontMetrics(100);
        expect(fontMetricsList5.length).assertEqual(0);
      } catch (err) {
        console.info(msg + 'test getLineFontMetrics error ' + JSON.stringify(err));
        expect().assertFail();
      }
    })
    /**
     * @tc.number    : SUB_BASIC_WMS_SPCIAL_XTS_GRAPHICTEXT_JS_API_030
     * @tc.name      : testIsStrutStyleEqual
     * @tc.desc      : To test isStrutStyleEqual.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level3
     */
    it('testIsStrutStyleEqual', 30, async function () {
      let msg = "testIsStrutStyleEqual"
      console.info(msg + 'begin');
      let fontFamilieArr: string = ["Roboto"];
      let testStrutStyle1: text.StrutStyle = {}
      let testStrutStyle2: text.StrutStyle = {}
      let testStrutStyle3: text.StrutStyle = {
        fontFamilies: fontFamilieArr,
        fontStyle: text.FontStyle.ITALIC,
        fontWidth: text.FontWidth.EXTRA_CONDENSED,
        fontWeight: text.FontWeight.W200,
        fontSize: 40,
        height: 0,
        leading: 0,
        forceHeight: true,
        enabled: true,
        heightOverride: true,
        halfLeading: true,
      };
      let testStrutStyle4: text.StrutStyle = {
        fontFamilies: fontFamilieArr,
        fontStyle: text.FontStyle.ITALIC,
        fontWidth: text.FontWidth.EXTRA_CONDENSED,
        fontWeight: text.FontWeight.W200,
        fontSize: 40,
        height: 0,
        leading: 0,
        forceHeight: true,
        enabled: true,
        heightOverride: true,
        halfLeading: true,
      };
      let testStrutStyle5: text.StrutStyle = {
        fontFamilies: fontFamilieArr,
      };
      let testStrutStyle6: text.StrutStyle = {
        fontStyle: text.FontStyle.ITALIC,
      };
      let testStrutStyle7: text.StrutStyle = {
        fontWidth: text.FontWidth.EXTRA_CONDENSED,
      };
      let testStrutStyle8: text.StrutStyle = {
        fontWeight: text.FontWeight.W200,
      };
      let testStrutStyle9: text.StrutStyle = {
        fontSize: 40,
      };
      let testStrutStyle10: text.StrutStyle = {
        height: 0,
      };
      let testStrutStyle11: text.StrutStyle = {
        leading: 0,
      };
      let testStrutStyle12: text.StrutStyle = {
        forceHeight: true,
      };
      let testStrutStyle13: text.StrutStyle = {
        enabled: true,
      };
      let testStrutStyle14: text.StrutStyle = {
        heightOverride: true,
      };
      let testStrutStyle15: text.StrutStyle = {
        halfLeading: true,
      };
      try {
        expect(text.isStrutStyleEqual(testStrutStyle1, testStrutStyle2)).assertTrue();
        expect(text.isStrutStyleEqual(testStrutStyle3, testStrutStyle4)).assertTrue();
        expect(text.isStrutStyleEqual(testStrutStyle1, testStrutStyle5)).assertFalse();
        expect(text.isStrutStyleEqual(testStrutStyle1, testStrutStyle6)).assertFalse();
        expect(text.isStrutStyleEqual(testStrutStyle1, testStrutStyle7)).assertFalse();
        expect(text.isStrutStyleEqual(testStrutStyle1, testStrutStyle8)).assertFalse();
        expect(text.isStrutStyleEqual(testStrutStyle1, testStrutStyle9)).assertFalse();
        expect(text.isStrutStyleEqual(testStrutStyle1, testStrutStyle10)).assertFalse();
        expect(text.isStrutStyleEqual(testStrutStyle1, testStrutStyle11)).assertFalse();
        expect(text.isStrutStyleEqual(testStrutStyle1, testStrutStyle12)).assertFalse();
        expect(text.isStrutStyleEqual(testStrutStyle1, testStrutStyle13)).assertFalse();
        expect(text.isStrutStyleEqual(testStrutStyle1, testStrutStyle14)).assertFalse();
        expect(text.isStrutStyleEqual(testStrutStyle1, testStrutStyle15)).assertFalse();
      } catch (err) {
        console.info(msg + 'test IsStrutStyleEqual error ' + JSON.stringify(err));
        expect().assertFail();
      }
    })

  })
}