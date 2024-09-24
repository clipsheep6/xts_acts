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

function sleep(time: number): Promise<void> {
  return new Promise((resolve) => {
    setTimeout(() => {
      resolve();
    }, time);
  });
}

export default function graphicTextClass() {
  describe('graphic_text_class_test', ()=> {
    console.log('describe graphic_text_class_test start!!!')

    let pixel:image.PixelMap;

    beforeAll(async ()=> {
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
    it('testlayoutSync', 1, async ()=> {
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
    it('testPaint', 2, async ()=> {
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
    it('testGetMaxWidth', 3, async ()=> {
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
    it('testGetHeight', 4, async ()=> {
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
    it('testGetLongestLine', 5, async ()=> {
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
    it('testGetMinIntrinsicWidth', 6, async ()=> {
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
    it('testGetMaxIntrinsicWidth', 7, async ()=> {
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
    it('testGetAlphabeticBaseline', 8, async ()=> {
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
    it('testGetIdeographicBaseline', 9, async ()=> {
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
    it('testGetRectsForRange', 10, async ()=> {
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
    it('testGetRectsForPlaceholders', 11, async ()=> {
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
    it('testGetGlyphPositionAtCoordinate', 12, async ()=> {
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
    it('testGetWordBoundary', 13, async ()=> {
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
    it('testGetLineCount', 14, async ()=> {
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
    it('testGetLineHeight', 15, async ()=> {
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
    it('testGetLineWidth', 16, async ()=> {
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
    it('testDidExceedMaxLines', 17, async ()=> {
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
    it('testTextLine_GetGlyphCount', 18, async ()=> {
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
    it('testTextLine_GetTextRange', 19, async ()=> {
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
    it('testTextLine_Paint', 20, async ()=> {
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
    it('testParagraphBuilder_AonstructorAndAddText', 21, async ()=> {
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
    it('testTexRun_GetGlyphCount', 22, async ()=> {
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
    it('testTextRun_GetGlyphs', 23, async ()=> {
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
    it('testTextRun_GetPositions', 24, async ()=> {
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
    it('testTextRun_GetOffsets', 25, async ()=> {
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
    it('testTextRun_GetFont', 26, async ()=> {
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
    it('testTextRun_Paint', 27, async ()=> {
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
     * @tc.number    : SUB_BASIC_WMS_SPCIAL_XTS_GRAPHICDRAWING_JS_API_028
     * @tc.name      : Line CreateTruncatedLine
     * @tc.desc      : To test Line CreateTruncatedLine interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level3
     */
    it('testTextLine_CreateTruncatedLine', 28, async ()=> {
      let msg = 'testTextLine_CreateTruncatedLine';
      console.info(msg + 'begin');
      let canvas = new drawing.Canvas(pixel)
      let textTitle = "123";
      let paragraph = buildParagraph();
      paragraph.layoutSync(200);
      let textLines : Array<text.TextLine> = paragraph.getTextLines();
      let length = textLines.length;
      for (let i = 0; i < length; i++) {
        let textLine: text.TextLine = textLines[i];

        let truncatedTextLine = textLine.createTruncatedLine(100, text.EllipsisMode.START, "...");
        try {
          truncatedTextLine.paint(canvas, 0, 100);
        } catch (err) {
          console.info(msg + JSON.stringify(err));
          expect().assertFail();
        }
        truncatedTextLine = textLine.createTruncatedLine(50, text.EllipsisMode.END, "...");
        try {
          truncatedTextLine.paint(canvas, 0, 100);
        } catch (err) {
          console.info(msg + JSON.stringify(err));
          expect().assertFail();
        }
        truncatedTextLine = textLine.createTruncatedLine(50, text.EllipsisMode.MIDDLE, "...");
        try {
          expect(truncatedTextLine).assertEqual(undefined);
        } catch (err) {
          console.info(msg + JSON.stringify(err));
          expect().assertFail();
        }
        truncatedTextLine = textLine.createTruncatedLine(-50, text.EllipsisMode.END, "...");
        try {
          expect(truncatedTextLine).assertEqual(undefined);
        } catch (err) {
          console.info(msg + JSON.stringify(err));
          expect().assertFail();
        }
        truncatedTextLine = textLine.createTruncatedLine(null, text.EllipsisMode.START, "...");
        try {
          expect(truncatedTextLine).assertEqual(undefined);
        } catch (err) {
          console.info(msg + JSON.stringify(err));
          expect().assertFail();
        }
        truncatedTextLine = textLine.createTruncatedLine(100, null, "...");
        try {
          expect(truncatedTextLine).assertEqual(undefined);
        } catch (err) {
          console.info(msg + JSON.stringify(err));
          expect().assertFail();
        }
        truncatedTextLine = textLine.createTruncatedLine(100, text.EllipsisMode.START, null);
        try {
          expect(truncatedTextLine).assertEqual(undefined);
        } catch (err) {
          console.info(msg + JSON.stringify(err));
          expect().assertFail();
        }
        truncatedTextLine = textLine.createTruncatedLine(undefined, text.EllipsisMode.END, "...");
        try {
          expect(truncatedTextLine).assertEqual(undefined);
        } catch (err) {
          console.info(msg + JSON.stringify(err));
          expect().assertFail();
        }
        truncatedTextLine = textLine.createTruncatedLine(100, undefined, "...");
        try {
          expect(truncatedTextLine).assertEqual(undefined);
        } catch (err) {
          console.info(msg + JSON.stringify(err));
          expect().assertFail();
        }
        truncatedTextLine = textLine.createTruncatedLine(100, text.EllipsisMode.START, undefined);
        try {
          expect(truncatedTextLine).assertEqual(undefined);
        } catch (err) {
          console.info(msg + JSON.stringify(err));
          expect().assertFail();
        }
      }
    })

    /**
     * @tc.number    : SUB_BASIC_WMS_SPCIAL_XTS_GRAPHICDRAWING_JS_API_029
     * @tc.name      : Line GetTypographicBounds
     * @tc.desc      : To test Line GetTypographicBounds interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level3
     */
    it('testTextLine_GetTypographicBounds', 29, async ()=> () {
      let msg = 'testTextLine_GetTypographicBounds';
      console.info(msg + 'begin');
      let canvas = new drawing.Canvas(pixel)
      let textTitle = "123";
      let paragraph = buildParagraph();
      paragraph.layoutSync(200);
      let textLines : Array<text.TextLine> = paragraph.getTextLines();
      let length = textLines.length;
      for (let i = 0; i < length; i++) {
        let textLine: text.TextLine = textLines[i];

        let bounds = textLine.getTypographicBounds();
        try {
          expect(bounds.ascent).assertLargerOrEqual(0);
        } catch (err) {
          console.info(msg + JSON.stringify(err));
          expect().assertFail();
        }
        try {
          expect(bounds.descent).assertLargerOrEqual(0);
        } catch (err) {
          console.info(msg + JSON.stringify(err));
          expect().assertFail();
        }
        try {
          expect(bounds.leading).assertLargerOrEqual(0);
        } catch (err) {
          console.info(msg + JSON.stringify(err));
          expect().assertFail();
        }
        try {
          expect(bounds.width).assertLarger(0);
        } catch (err) {
          console.info(msg + JSON.stringify(err));
          expect().assertFail();
        }
      }
    })

    /**
     * @tc.number    : SUB_BASIC_WMS_SPCIAL_XTS_GRAPHICDRAWING_JS_API_030
     * @tc.name      : Line GetImageBounds
     * @tc.desc      : To test Line GetImageBounds interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level3
     */
    it('testTextLine_GetImageBounds', 30, async ()=> () {
      let msg = 'testTextLine_GetImageBounds';
      console.info(msg + 'begin');
      let canvas = new drawing.Canvas(pixel)
      let textTitle = "123";
      let paragraph = buildParagraph();
      paragraph.layoutSync(200);
      let textLines : Array<text.TextLine> = paragraph.getTextLines();
      let length = textLines.length;
      for (let i = 0; i < length; i++) {
        let textLine: text.TextLine = textLines[i];

        let bounds = textLine.getImageBounds();
        try {
          expect(bounds.left).assertLargerOrEqual(0);
        } catch (err) {
          console.info(msg + JSON.stringify(err));
          expect().assertFail();
        }
        try {
          expect(bounds.top).assertLargerOrEqual(0);
        } catch (err) {
          console.info(msg + JSON.stringify(err));
          expect().assertFail();
        }
        try {
          expect(bounds.right).assertLarger(bounds.left);
        } catch (err) {
          console.info(msg + JSON.stringify(err));
          expect().assertFail();
        }
        try {
          expect(bounds.bottom).assertLarger(bounds.top);
        } catch (err) {
          console.info(msg + JSON.stringify(err));
          expect().assertFail();
        }
      }
    })

    /**
     * @tc.number    : SUB_BASIC_WMS_SPCIAL_XTS_GRAPHICDRAWING_JS_API_031
     * @tc.name      : Line GetTrailingSpaceWidth
     * @tc.desc      : To test Line GetTrailingSpaceWidth interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level3
     */
    it('testTextLine_GetTrailingSpaceWidth', 31, async ()=> () {
      let msg = 'testTextLine_GetTrailingSpaceWidth';
      console.info(msg + 'begin');
      let canvas = new drawing.Canvas(pixel)
      let textTitle = "123  \n12";
      let paragraph = buildParagraph(textTitle);
      paragraph.layoutSync(200);
      let textLines : Array<text.TextLine> = paragraph.getTextLines();
      let length = textLines.length;
      for (let i = 0; i < length; i++) {
        let textLine: text.TextLine = textLines[i];

        let width = textLine.getTrailingSpaceWidth();
        try {
          if (i == 0) {
            expect(width).assertLarger(0);
          } else {
            expect(width).assertEqual(0);
          }
        } catch (err) {
          console.info(msg + JSON.stringify(err));
          expect().assertFail();
        }
      }
    })

    /**
     * @tc.number    : SUB_BASIC_WMS_SPCIAL_XTS_GRAPHICDRAWING_JS_API_032
     * @tc.name      : Line GetStringIndexForPosition
     * @tc.desc      : To test Line GetStringIndexForPosition interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level3
     */
    it('testTextLine_GetStringIndexForPosition', 32, async ()=> () {
      let msg = 'testTextLine_GetStringIndexForPosition';
      console.info(msg + 'begin');
      let canvas = new drawing.Canvas(pixel)
      let textTitle = "123";
      let paragraph = buildParagraph();
      paragraph.layoutSync(200);
      let textLines : Array<text.TextLine> = paragraph.getTextLines();
      let length = textLines.length;
      for (let i = 0; i < length; i++) {
        let textLine: text.TextLine = textLines[i];

        let point : common2D.Point = { x: 0.0, y: 2.0 };
        let index = textLine.getStringIndexForPosition(point);
        try {
          expect(index).assertEqual(0.0);
        } catch (err) {
          console.info(msg + JSON.stringify(err));
          expect().assertFail();
        }
        point.x = 20.0;
        index = textLine.getStringIndexForPosition(point);
        try {
          expect(index).assertLarger(0.0);
        } catch (err) {
          console.info(msg + JSON.stringify(err));
          expect().assertFail();
        }
        point.x = -2.0;
        index = textLine.getStringIndexForPosition(point);
        try {
          expect(index).assertEqual(0.0);
        } catch (err) {
          console.info(msg + JSON.stringify(err));
          expect().assertFail();
        }
        index = textLine.getStringIndexForPosition(null);
        try {
          expect(index).assertEqual(undefined);
        } catch (err) {
          console.info(msg + JSON.stringify(err));
          expect().assertFail();
        }
        index = textLine.getStringIndexForPosition(undefined);
        try {
          expect(index).assertEqual(undefined);
        } catch (err) {
          console.info(msg + JSON.stringify(err));
          expect().assertFail();
        }
      }
    })

    /**
     * @tc.number    : SUB_BASIC_WMS_SPCIAL_XTS_GRAPHICDRAWING_JS_API_033
     * @tc.name      : Line GetOffsetForStringIndex
     * @tc.desc      : To test Line GetOffsetForStringIndex interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level3
     */
    it('testTextLine_GetOffsetForStringIndex', 33, async ()=> () {
      let msg = 'testTextLine_GetOffsetForStringIndex';
      console.info(msg + 'begin');
      let canvas = new drawing.Canvas(pixel)
      let textTitle = "123";
      let paragraph = buildParagraph();
      paragraph.layoutSync(200);
      let textLines : Array<text.TextLine> = paragraph.getTextLines();
      let length = textLines.length;
      for (let i = 0; i < length; i++) {
        let textLine: text.TextLine = textLines[i];

        let offset = textLine.getOffsetForStringIndex(0);
        try {
          expect(offset).assertEqual(0.0);
        } catch (err) {
          console.info(msg + JSON.stringify(err));
          expect().assertFail();
        }
        offset = textLine.getOffsetForStringIndex(1);
        try {
          expect(offset).assertLarger(0.0);
        } catch (err) {
          console.info(msg + JSON.stringify(err));
          expect().assertFail();
        }
        offset = textLine.getOffsetForStringIndex(-2);
        try {
          expect(offset).assertEqual(0.0);
        } catch (err) {
          console.info(msg + JSON.stringify(err));
          expect().assertFail();
        }
        offset = textLine.getOffsetForStringIndex(null);
        try {
          expect(offset).assertEqual(undefined);
        } catch (err) {
          console.info(msg + JSON.stringify(err));
          expect().assertFail();
        }
        offset = textLine.getOffsetForStringIndex(undefined);
        try {
          expect(offset).assertEqual(undefined);
        } catch (err) {
          console.info(msg + JSON.stringify(err));
          expect().assertFail();
        }
      }
    })

    /**
     * @tc.number    : SUB_BASIC_WMS_SPCIAL_XTS_GRAPHICDRAWING_JS_API_034
     * @tc.name      : Line EnumerateCaretOffsets
     * @tc.desc      : To test Line EnumerateCaretOffsets interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level3
     */
    it('testTextLine_EnumerateCaretOffsets', 34, async ()=> () {
      let msg = 'testTextLine_EnumerateCaretOffsets';
      console.info(msg + 'begin');
      let canvas = new drawing.Canvas(pixel)
      let textTitle = "123";
      let paragraph = buildParagraph();
      paragraph.layoutSync(200);
      let textLines : Array<text.TextLine> = paragraph.getTextLines();
      let length = textLines.length;
      for (let i = 0; i < length; i++) {
        let textLine: text.TextLine = textLines[i];

        textLine.enumerateCaretOffsets((offset: number, index: number, leadingEdge: boolean) => {
          try {
            expect(index).assertLessOrEqual(1);
          } catch (err) {
            console.info(msg + JSON.stringify(err));
            expect().assertFail();
          }
          try {
            if (index == 0 && leadingEdge == true) {
              expect(offset).assertEqual(0.0);
            }
          } catch (err) {
            console.info(msg + JSON.stringify(err));
            expect().assertFail();
          }
          return index > 0;
        });
        try {
          textLine.enumerateCaretOffsets(null);
        } catch (err) {
          try {
            expect(err.message).assertEqual("Invalid params.");
          } catch (err) {
            console.info(msg + JSON.stringify(err));
            expect().assertFail();
          }
        }
        try {
          textLine.enumerateCaretOffsets(undefined);
        } catch (err) {
          try {
            expect(err.message).assertEqual("Invalid params.");
          } catch (err) {
            console.info(msg + JSON.stringify(err));
            expect().assertFail();
          }
        }
      }
    })

    /**
     * @tc.number    : SUB_BASIC_WMS_SPCIAL_XTS_GRAPHICDRAWING_JS_API_035
     * @tc.name      : Line GetAlignmentOffset
     * @tc.desc      : To test Line GetAlignmentOffset interface.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level3
     */
    it('testTextLine_GetAlignmentOffset', 35, async ()=> () {
      let msg = 'testTextLine_GetAlignmentOffset';
      console.info(msg + 'begin');
      let canvas = new drawing.Canvas(pixel)
      let textTitle = "123";
      let paragraph = buildParagraph();
      paragraph.layoutSync(200);
      let textLines : Array<text.TextLine> = paragraph.getTextLines();
      let length = textLines.length;
      for (let i = 0; i < length; i++) {
        let textLine: text.TextLine = textLines[i];

        let offset = textLine.getAlignmentOffset(0.0, 300);
        try {
          expect(offset).assertEqual(0.0);
        } catch (err) {
          console.info(msg + JSON.stringify(err));
          expect().assertFail();
        }
        offset = textLine.getAlignmentOffset(0.5, 300);
        try {
          expect(offset).assertLarger(0.0);
        } catch (err) {
          console.info(msg + JSON.stringify(err));
          expect().assertFail();
        }
        offset = textLine.getAlignmentOffset(2, 10);
        try {
          expect(offset).assertEqual(0.0);
        } catch (err) {
          console.info(msg + JSON.stringify(err));
          expect().assertFail();
        }
        offset = textLine.getAlignmentOffset(-2, 300);
        try {
          expect(offset).assertEqual(0.0);
        } catch (err) {
          console.info(msg + JSON.stringify(err));
          expect().assertFail();
        }
        offset = textLine.getAlignmentOffset(null, 20);
        try {
          expect(offset).assertEqual(undefined);
        } catch (err) {
          console.info(msg + JSON.stringify(err));
          expect().assertFail();
        }
        offset = textLine.getAlignmentOffset(2.0, null);
        try {
          expect(offset).assertEqual(undefined);
        } catch (err) {
          console.info(msg + JSON.stringify(err));
          expect().assertFail();
        }
        offset = textLine.getAlignmentOffset(2.0, undefined);
        try {
          expect(offset).assertEqual(undefined);
        } catch (err) {
          console.info(msg + JSON.stringify(err));
          expect().assertFail();
        }
        offset = textLine.getAlignmentOffset(null, 20);
        try {
          expect(offset).assertEqual(undefined);
        } catch (err) {
          console.info(msg + JSON.stringify(err));
          expect().assertFail();
        }
      }
    })
  })
}