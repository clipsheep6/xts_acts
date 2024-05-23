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

    /**
     * @tc.number    : Canvas_test_drawPoint
     * @tc.name      : Canvas_test_drawPoint
     * @tc.desc      : 用于绘制一个点。
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level2
     */
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

    /**
     * @tc.number    : Canvas_test_drawPoint_param_null
     * @tc.name      : Canvas_test_drawPoint_param_null
     * @tc.desc      : 用于绘制一个点。(参数为空)
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level2
     */
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

    /**
     * @tc.number    : Canvas_test_save
     * @tc.name      : Canvas_test_save
     * @tc.desc      : 用于保存当前画布的状态（画布矩阵）到栈顶。
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level2
     */
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

    /**
     * @tc.number    : Canvas_test_save
     * @tc.name      : Canvas_test_save
     * @tc.desc      : 用于恢复保存在栈顶的画布状态（画布矩阵）。
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level2
     */
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

    /**
     * @tc.number    : Canvas_test_restoreToCount
     * @tc.name      : Canvas_test_restoreToCount
     * @tc.desc      : 用于恢复到指定数量的画布状态（画布矩阵）。
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level2
     */
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

    /**
     * @tc.number    : Canvas_test_restoreToCount_param_null
     * @tc.name      : Canvas_test_restoreToCount_param_null
     * @tc.desc      : 用于恢复到指定数量的画布状态（画布矩阵）。（参数为空）
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level2
     */
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

    /**
     * @tc.number    : Canvas_test_getSaveCount
     * @tc.name      : Canvas_test_getSaveCount
     * @tc.desc      : 用于获取栈中保存的画布状态（画布矩阵）的数量。
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level2
     */
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

    /**
     * @tc.number    : Canvas_test_scale
     * @tc.name      : Canvas_test_scale
     * @tc.desc      : 用于画布缩放。
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level2
     */
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

    /**
     * @tc.number    : Canvas_test_scale_param_null
     * @tc.name      : Canvas_test_scale_param_null
     * @tc.desc      : 用于画布缩放。（参数为空）
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level2
     */
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

    /**
     * @tc.number    : Canvas_test_skew
     * @tc.name      : Canvas_test_skew
     * @tc.desc      : 用于画布倾斜变换，包括水平轴和垂直轴上的偏移。
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level2
     */
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

    /**
     * @tc.number    : Canvas_test_skew_param_null
     * @tc.name      : Canvas_test_skew_param_null
     * @tc.desc      : 用于画布倾斜变换，包括水平轴和垂直轴上的偏移。（参数为空）
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level2
     */
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

    /**
     * @tc.number    : Canvas_test_rotate
     * @tc.name      : Canvas_test_rotate
     * @tc.desc      : 用于画布旋转一定的角度。
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level2
     */
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

    /**
     * @tc.number    : Canvas_test_rotate_param_null
     * @tc.name      : Canvas_test_rotate_param_null
     * @tc.desc      : 用于画布旋转一定的角度。（参数为空）
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level2
     */
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

    /**
     * @tc.number    : Canvas_test_translate
     * @tc.name      : Canvas_test_translate
     * @tc.desc      : 用于平移画布一段距离。
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level2
     */
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

    /**
     * @tc.number    : Canvas_test_translate
     * @tc.name      : Canvas_test_translate
     * @tc.desc      : 用于平移画布一段距离。（参数为空）
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level2
     */
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

    /**
     * @tc.number    : Canvas_test_clipPath
     * @tc.name      : Canvas_test_clipPath
     * @tc.desc      : 用于裁剪一个自定义路径。
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level2
     */
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

    /**
     * @tc.number    : Canvas_test_clipPath_param_null
     * @tc.name      : Canvas_test_clipPath_param_null
     * @tc.desc      : 用于裁剪一个自定义路径。（参数为空）
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level2
     */
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

    /**
     * @tc.number    : Canvas_test_clipPath_param_invalid
     * @tc.name      : Canvas_test_clipPath_param_invalid
     * @tc.desc      : 用于裁剪一个自定义路径。（参数非法）
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level2
     */
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

    /**
     * @tc.number    : Canvas_test_clipRect
     * @tc.name      : Canvas_test_clipRect
     * @tc.desc      : 用于裁剪一个矩形。
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level2
     */
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

    /**
     * @tc.number    : Canvas_test_clipRect_param_null
     * @tc.name      : Canvas_test_clipRect_param_null
     * @tc.desc      : 用于裁剪一个矩形。（参数为空）
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level2
     */
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

    /**
     * @tc.number    : Canvas_test_clipRect_param_invalid
     * @tc.name      : Canvas_test_clipRect_param_invalid
     * @tc.desc      : 用于裁剪一个矩形。（参数非法）
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level2
     */
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