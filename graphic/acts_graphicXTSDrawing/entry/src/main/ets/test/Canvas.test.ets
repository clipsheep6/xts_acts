import { common2D, drawing } from '@kit.ArkGraphics2D';

import { afterAll, afterEach, beforeAll, beforeEach, describe, expect, it } from '@ohos/hypium';
import image from '@ohos.multimedia.image';

export default function canvasTest() {
  describe('Canvas_test', () => {
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
    it('Canvas_test_drawPoint', DEFAULT, () => {
      try {
        const canvas = new drawing.Canvas(pixel);
        const pen = new drawing.Pen();
        pen.setStrokeWidth(5);
        pen.setColor({
          alpha: 255, red: 255, green: 0, blue: 0
        });
        canvas.attachPen(pen);
        canvas.drawPoint(10, 10);
        canvas.detachPen();
      } catch (e) {
        expect().assertFail();
      }
    })

    it('Canvas_test_drawPoint_param_null', DEFAULT, () => {
      try {
        const canvas = new drawing.Canvas(pixel);
        const pen = new drawing.Pen();
        pen.setStrokeWidth(5);
        pen.setColor({
          alpha: 255, red: 255, green: 0, blue: 0
        });
        canvas.attachPen(pen);
        canvas.drawPoint(10, null);
        canvas.detachPen();
      } catch (e) {
        expect(e.code).assertEqual(401);
      }

      try {
        const canvas = new drawing.Canvas(pixel);
        const pen = new drawing.Pen();
        pen.setStrokeWidth(5);
        pen.setColor({
          alpha: 255, red: 255, green: 0, blue: 0
        });
        canvas.attachPen(pen);
        canvas.drawPoint(null, 0);
        canvas.detachPen();
      } catch (e) {
        expect(e.code).assertEqual(401);
      }

      try {
        const canvas = new drawing.Canvas(pixel);
        const pen = new drawing.Pen();
        pen.setStrokeWidth(5);
        pen.setColor({
          alpha: 255, red: 255, green: 0, blue: 0
        });
        canvas.attachPen(pen);
        canvas.drawPoint(null, null);
        canvas.detachPen();
      } catch (e) {
        expect(e.code).assertEqual(401);
      }
    })

    it('Canvas_test_save', DEFAULT, () => {
      try {
        const canvas = new drawing.Canvas(pixel);
        let rect: common2D.Rect = {
          left: 10, right: 200, top: 100, bottom: 300
        };
        canvas.drawRect(rect);
        let saveCount = canvas.save();
      } catch (e) {
        expect().assertFail();
      }
    })

    it('Canvas_test_restore', DEFAULT, () => {
      try {
        const canvas = new drawing.Canvas(pixel);
        const pen = new drawing.Pen();
        pen.setStrokeWidth(5);
        pen.setColor({
          alpha: 255, red: 255, green: 0, blue: 0
        });
        canvas.attachPen(pen);
        canvas.restore();
        canvas.detachPen();
      } catch (e) {
        expect().assertFail();
      }
    })

    it('Canvas_test_restoreToCount', DEFAULT, () => {
      try {
        const canvas = new drawing.Canvas(pixel);
        const pen = new drawing.Pen();
        pen.setStrokeWidth(5);
        pen.setColor({
          alpha: 255, red: 255, green: 0, blue: 0
        });
        canvas.attachPen(pen);
        canvas.drawRect({
          left: 10, right: 200, top: 100, bottom: 300
        });
        canvas.save();
        canvas.drawRect({
          left: 10, right: 200, top: 100, bottom: 500
        });
        canvas.save();
        canvas.drawRect({
          left: 100, right: 300, top: 100, bottom: 500
        });
        canvas.save();
        canvas.restoreToCount(2);
        canvas.drawRect({
          left: 10, right: 500, top: 300, bottom: 900
        });
        canvas.detachPen();
      } catch (e) {
        expect().assertFail();
      }
    })

    it('Canvas_test_restoreToCount_param_null', DEFAULT, () => {
      try {
        const canvas = new drawing.Canvas(pixel);
        const pen = new drawing.Pen();
        pen.setStrokeWidth(5);
        pen.setColor({
          alpha: 255, red: 255, green: 0, blue: 0
        });
        canvas.attachPen(pen);
        canvas.drawRect({
          left: 10, right: 200, top: 100, bottom: 300
        });
        canvas.save();
        canvas.drawRect({
          left: 10, right: 200, top: 100, bottom: 500
        });
        canvas.save();
        canvas.drawRect({
          left: 100, right: 300, top: 100, bottom: 500
        });
        canvas.save();
        canvas.restoreToCount(null);
        canvas.drawRect({
          left: 10, right: 500, top: 300, bottom: 900
        });
        canvas.detachPen();
      } catch (e) {
        expect(e.code).assertEqual(401);
      }
    })

    it('Canvas_test_getSaveCount', DEFAULT, () => {
      try {
        const canvas = new drawing.Canvas(pixel);
        const pen = new drawing.Pen();
        pen.setStrokeWidth(5);
        pen.setColor({
          alpha: 255, red: 255, green: 0, blue: 0
        });
        canvas.attachPen(pen);
        canvas.drawRect({
          left: 10, right: 200, top: 100, bottom: 300
        });
        canvas.save();
        canvas.drawRect({
          left: 10, right: 500, top: 300, bottom: 900
        });
        canvas.getSaveCount();
        canvas.detachPen();
      } catch (e) {
        expect().assertFail();
      }
    })

    it('Canvas_test_scale', DEFAULT, () => {
      try {
        const canvas = new drawing.Canvas(pixel);
        const pen = new drawing.Pen();
        pen.setStrokeWidth(5);
        pen.setColor({
          alpha: 255, red: 255, green: 0, blue: 0
        });
        canvas.attachPen(pen);
        canvas.scale(2, 0.5);
        canvas.drawRect({
          left: 10, right: 500, top: 300, bottom: 900
        });
        canvas.detachPen();
      } catch (e) {
        expect().assertFail();
      }
    })

    it('Canvas_test_scale_param_null', DEFAULT, () => {
      try {
        const canvas = new drawing.Canvas(pixel);
        const pen = new drawing.Pen();
        pen.setStrokeWidth(5);
        pen.setColor({
          alpha: 255, red: 255, green: 0, blue: 0
        });
        canvas.attachPen(pen);
        canvas.scale(null, null);
        canvas.drawRect({
          left: 10, right: 500, top: 300, bottom: 900
        });
        canvas.detachPen();
      } catch (e) {
        expect(e.code).assertEqual(401);
      }

      try {
        const canvas = new drawing.Canvas(pixel);
        const pen = new drawing.Pen();
        pen.setStrokeWidth(5);
        pen.setColor({
          alpha: 255, red: 255, green: 0, blue: 0
        });
        canvas.attachPen(pen);
        canvas.scale(2, null);
        canvas.drawRect({
          left: 10, right: 500, top: 300, bottom: 900
        });
        canvas.detachPen();
      } catch (e) {
        expect(e.code).assertEqual(401);
      }

      try {
        const canvas = new drawing.Canvas(pixel);
        const pen = new drawing.Pen();
        pen.setStrokeWidth(5);
        pen.setColor({
          alpha: 255, red: 255, green: 0, blue: 0
        });
        canvas.attachPen(pen);
        canvas.scale(null, 0.5);
        canvas.drawRect({
          left: 10, right: 500, top: 300, bottom: 900
        });
        canvas.detachPen();
      } catch (e) {
        expect(e.code).assertEqual(401);
      }
    })

    it('Canvas_test_skew', DEFAULT, () => {
      try {
        const canvas = new drawing.Canvas(pixel);
        const pen = new drawing.Pen();
        pen.setStrokeWidth(5);
        pen.setColor({
          alpha: 255, red: 255, green: 0, blue: 0
        });
        canvas.attachPen(pen);
        canvas.skew(0.1, 0.1);
        canvas.drawRect({
          left: 10, right: 500, top: 300, bottom: 900
        });
        canvas.detachPen();
      } catch (e) {
        expect().assertFail();
      }
    })

    it('Canvas_test_skew_param_null', DEFAULT, () => {
      try {
        const canvas = new drawing.Canvas(pixel);
        const pen = new drawing.Pen();
        pen.setStrokeWidth(5);
        pen.setColor({
          alpha: 255, red: 255, green: 0, blue: 0
        });
        canvas.attachPen(pen);
        canvas.skew(null, null);
        canvas.drawRect({
          left: 10, right: 500, top: 300, bottom: 900
        });
        canvas.detachPen();
      } catch (e) {
        expect(e.code).assertEqual(401);
      }

      try {
        const canvas = new drawing.Canvas(pixel);
        const pen = new drawing.Pen();
        pen.setStrokeWidth(5);
        pen.setColor({
          alpha: 255, red: 255, green: 0, blue: 0
        });
        canvas.attachPen(pen);
        canvas.skew(0.1, null);
        canvas.drawRect({
          left: 10, right: 500, top: 300, bottom: 900
        });
        canvas.detachPen();
      } catch (e) {
        expect(e.code).assertEqual(401);
      }

      try {
        const canvas = new drawing.Canvas(pixel);
        const pen = new drawing.Pen();
        pen.setStrokeWidth(5);
        pen.setColor({
          alpha: 255, red: 255, green: 0, blue: 0
        });
        canvas.attachPen(pen);
        canvas.skew(null, 0.1);
        canvas.drawRect({
          left: 10, right: 500, top: 300, bottom: 900
        });
        canvas.detachPen();
      } catch (e) {
        expect(e.code).assertEqual(401);
      }
    })

    it('Canvas_test_rotate', DEFAULT, () => {
      try {
        const canvas = new drawing.Canvas(pixel);
        const pen = new drawing.Pen();
        pen.setStrokeWidth(5);
        pen.setColor({
          alpha: 255, red: 255, green: 0, blue: 0
        });
        canvas.attachPen(pen);
        canvas.rotate(30, 100, 100);
        canvas.drawRect({
          left: 10, right: 500, top: 300, bottom: 900
        });
        canvas.detachPen();
      } catch (e) {
        expect().assertFail();
      }
    })

    it('Canvas_test_rotate_param_null', DEFAULT, () => {
      try {
        const canvas = new drawing.Canvas(pixel);
        const pen = new drawing.Pen();
        pen.setStrokeWidth(5);
        pen.setColor({
          alpha: 255, red: 255, green: 0, blue: 0
        });
        canvas.attachPen(pen);
        canvas.rotate(null, null, null);
        canvas.drawRect({
          left: 10, right: 500, top: 300, bottom: 900
        });
        canvas.detachPen();
      } catch (e) {
        expect(e.code).assertEqual(401);
      }
    })

    it('Canvas_test_translate', DEFAULT, () => {
      try {
        const canvas = new drawing.Canvas(pixel);
        const pen = new drawing.Pen();
        pen.setStrokeWidth(5);
        pen.setColor({
          alpha: 255, red: 255, green: 0, blue: 0
        });
        canvas.attachPen(pen);
        canvas.translate(10, 10);
        canvas.drawRect({
          left: 10, right: 500, top: 300, bottom: 900
        });
        canvas.detachPen();
      } catch (e) {
        expect().assertFail();
      }
    })

    it('Canvas_test_translate_param_null', DEFAULT, () => {
      try {
        const canvas = new drawing.Canvas(pixel);
        const pen = new drawing.Pen();
        pen.setStrokeWidth(5);
        pen.setColor({
          alpha: 255, red: 255, green: 0, blue: 0
        });
        canvas.attachPen(pen);
        canvas.translate(null, null);
        canvas.drawRect({
          left: 10, right: 500, top: 300, bottom: 900
        });
        canvas.detachPen();
      } catch (e) {
        expect(e.code).assertEqual(401);
      }
    })

    it('Canvas_test_clipPath', DEFAULT, () => {
      try {
        const canvas = new drawing.Canvas(pixel);
        const pen = new drawing.Pen();
        pen.setStrokeWidth(5);
        pen.setColor({
          alpha: 255, red: 255, green: 0, blue: 0
        });
        let path = new drawing.Path();
        path.moveTo(10, 10);
        path.cubicTo(10, 10, 10, 10, 15, 15);
        path.close();
        canvas.attachPen(pen);
        canvas.clipPath(path, drawing.ClipOp.DIFFERENCE, true);
        canvas.detachPen();
      } catch (e) {
        expect().assertFail();
      }
    })

    it('Canvas_test_clipPath_param_null', DEFAULT, () => {
      try {
        const canvas = new drawing.Canvas(pixel);
        const pen = new drawing.Pen();
        pen.setStrokeWidth(5);
        pen.setColor({
          alpha: 255, red: 255, green: 0, blue: 0
        });
        let path = new drawing.Path();
        path.moveTo(10, 10);
        path.cubicTo(10, 10, 10, 10, 15, 15);
        path.close();
        canvas.attachPen(pen);
        canvas.clipPath(null, drawing.ClipOp.DIFFERENCE, true);
        canvas.detachPen();
      } catch (e) {
        expect(e.code).assertEqual(401);
      }
    })

    it('Canvas_test_clipPath_param_invalid', DEFAULT, () => {
      try {
        const canvas = new drawing.Canvas(pixel);
        const pen = new drawing.Pen();
        pen.setStrokeWidth(5);
        pen.setColor({
          alpha: 255, red: 255, green: 0, blue: 0
        });
        let path = new drawing.Path();
        path.moveTo(10, 10);
        path.cubicTo(10, 10, 10, 10, 15, 15);
        path.close();
        canvas.attachPen(pen);
        canvas.clipPath(path, 9999, true);
        canvas.detachPen();
      } catch (e) {
        expect(e.code).assertEqual(401);
      }
    })

    it('Canvas_test_clipRect', DEFAULT, () => {
      try {
        const canvas = new drawing.Canvas(pixel);
        const pen = new drawing.Pen();
        pen.setStrokeWidth(5);
        pen.setColor({
          alpha: 255, red: 255, green: 0, blue: 0
        });
        canvas.attachPen(pen);
        canvas.clipRect({
          left: 10, right: 500, top: 300, bottom: 900
        }, drawing.ClipOp.DIFFERENCE, true);
        canvas.detachPen();
      } catch (e) {
        expect().assertFail();
      }
    })

    it('Canvas_test_clipRect_param_null', DEFAULT, () => {
      try {
        const canvas = new drawing.Canvas(pixel);
        const pen = new drawing.Pen();
        pen.setStrokeWidth(5);
        pen.setColor({
          alpha: 255, red: 255, green: 0, blue: 0
        });
        canvas.attachPen(pen);
        canvas.clipRect(null, drawing.ClipOp.DIFFERENCE, true);
        canvas.detachPen();
      } catch (e) {
        expect(e.code).assertEqual(401);
      }
    })

    it('Canvas_test_clipRect_param_invalid', DEFAULT, () => {
      try {
        const canvas = new drawing.Canvas(pixel);
        const pen = new drawing.Pen();
        pen.setStrokeWidth(5);
        pen.setColor({
          alpha: 255, red: 255, green: 0, blue: 0
        });
        canvas.attachPen(pen);
        canvas.clipRect({
          left: 10, right: 500, top: 300, bottom: 900
        }, 9999, true);
        canvas.detachPen();
      } catch (e) {
        expect(e.code).assertEqual(401);
      }
    })

  })
}