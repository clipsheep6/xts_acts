import { common2D, drawing } from '@kit.ArkGraphics2D';

import { afterAll, afterEach, beforeAll, beforeEach, describe, expect, it } from '@ohos/hypium';
import image from '@ohos.multimedia.image';

export default function penTest() {
  describe('Pen_test', () => {
    let pixel: image.PixelMap;
    const DEFAULT = 0;
    // Defines a test suite. Two parameters are supported: test suite name and test suite function.
    beforeAll(async () => {
      const color: ArrayBuffer = new ArrayBuffer(40000); // 96为需要创建的像素buffer大小，取值为：height * width *4
      let opts: image.InitializationOptions = {
        editable: true, pixelFormat: 3, size: {
          height: 100, width: 100
        }
      }
      pixel = await image.createPixelMap(color, opts);
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

    it('Pen_test_constructor', DEFAULT, () => {
      try {
        const pen = new drawing.Pen();
      } catch (e) {
        expect().assertFail()
      }
    })

    it('Pen_test_setMaskFilter', DEFAULT, () => {
      try {
        const pen = new drawing.Pen();
        let maskFilter = drawing.MaskFilter.createBlurMaskFilter(drawing.BlurType.OUTER, 10);
        pen.setMaskFilter(maskFilter);
      } catch (e) {
        expect().assertFail()
      }
    })

    it('Pen_test_setMaskFilter_param_null', DEFAULT, () => {
      try {
        const pen = new drawing.Pen();
        pen.setMaskFilter(null);
      } catch (e) {
        expect(e.code).assertEqual(401)
      }
    })

    it('Pen_test_setPathEffect', DEFAULT, () => {
      try {
        const pen = new drawing.Pen();
        pen.setStrokeWidth(5);
        pen.setColor({alpha: 255, red: 255, green: 0, blue: 0});
        let pathEffect = drawing.PathEffect.createDashPathEffect([30, 10], 0);
        pen.setPathEffect(pathEffect);
      } catch (e) {
        expect().assertFail()
      }
    })

    it('Pen_test_setPathEffect_param_null', DEFAULT, () => {
      try {
        const pen = new drawing.Pen();
        pen.setStrokeWidth(5);
        pen.setColor({alpha: 255, red: 255, green: 0, blue: 0});
        pen.setPathEffect(null);
      } catch (e) {
        expect(e.code).assertEqual(401)
      }
    })

    it('Pen_test_setShadowLayer', DEFAULT, () => {
      try {
        const pen = new drawing.Pen();
        let color : common2D.Color = {alpha: 0xFF, red: 0x00, green: 0xFF, blue: 0x00};
        let shadowLayer = drawing.ShadowLayer.create(3, -3, 3, color);
        pen.setShadowLayer(shadowLayer);
      } catch (e) {
        expect().assertFail()
      }
    })

    it('Pen_test_setShadowLayer_param_null', DEFAULT, () => {
      try {
        const pen = new drawing.Pen();
        pen.setShadowLayer(null);
      } catch (e) {
        expect(e.code).assertEqual(401)
      }
    })

    it('Pen_test_setJoinStyle', DEFAULT, () => {
      try {
        const pen = new drawing.Pen();
        pen.setStrokeWidth(5);
        pen.setColor({alpha: 255, red: 255, green: 0, blue: 0});
        pen.setJoinStyle(drawing.JoinStyle.ROUND_JOIN);
      } catch (e) {
        expect().assertFail()
      }
    })

    it('Pen_test_getJoinStyle', DEFAULT, () => {
      try {
        const pen = new drawing.Pen();
        pen.setStrokeWidth(5);
        pen.setColor({alpha: 255, red: 255, green: 0, blue: 0});
        pen.setJoinStyle(drawing.JoinStyle.ROUND_JOIN);
        let joinStyle = pen.getJoinStyle();
        expect(joinStyle).assertEqual(drawing.JoinStyle.ROUND_JOIN)
      } catch (e) {
        expect().assertFail()
      }
    })

    it('Pen_test_setCapStyle', DEFAULT, () => {
      try {
        const pen = new drawing.Pen();
        pen.setStrokeWidth(5);
        pen.setColor({alpha: 255, red: 255, green: 0, blue: 0});
        pen.setCapStyle(drawing.CapStyle.SQUARE_CAP);
      } catch (e) {
        expect().assertFail()
      }
    })

    it('Pen_test_getCapStyle', DEFAULT, () => {
      try {
        const pen = new drawing.Pen();
        pen.setStrokeWidth(5);
        pen.setColor({alpha: 255, red: 255, green: 0, blue: 0});
        pen.setCapStyle(drawing.CapStyle.SQUARE_CAP);
        let capStyle = pen.getCapStyle();
        expect(capStyle).assertEqual(drawing.CapStyle.SQUARE_CAP)
      } catch (e) {
        expect().assertFail()
      }
    })

  })
}