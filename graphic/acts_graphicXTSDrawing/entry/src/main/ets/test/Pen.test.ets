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

    /**
     * @tc.number    : Pen_test_constructor
     * @tc.name      : Pen_test_constructor
     * @tc.desc      : Pen的构造函数
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level2
     */
    it('Pen_test_constructor', DEFAULT, () => {
      try {
        const pen = new drawing.Pen();
      } catch (e) {
        expect().assertFail()
      }
    })

    /**
     * @tc.number    : Pen_test_setMaskFilter
     * @tc.name      : Pen_test_setMaskFilter
     * @tc.desc      : 用于给画笔添加额外的蒙版滤镜。
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level2
     */
    it('Pen_test_setMaskFilter', DEFAULT, () => {
      try {
        const pen = new drawing.Pen();
        let maskFilter = drawing.MaskFilter.createBlurMaskFilter(drawing.BlurType.OUTER, 10);
        pen.setMaskFilter(maskFilter);
      } catch (e) {
        expect().assertFail()
      }
    })

    /**
     * @tc.number    : Pen_test_setMaskFilter_param_null
     * @tc.name      : Pen_test_setMaskFilter_param_null
     * @tc.desc      : 用于给画笔添加额外的蒙版滤镜。（参数为空）
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level2
     */
    it('Pen_test_setMaskFilter_param_null', DEFAULT, () => {
      try {
        const pen = new drawing.Pen();
        pen.setMaskFilter(null);
      } catch (e) {
        expect(e.code).assertEqual(401)
      }
    })

    /**
     * @tc.number    : Pen_test_setPathEffect
     * @tc.name      : Pen_test_setPathEffect
     * @tc.desc      : 设置画笔路径效果。
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level2
     */
    it('Pen_test_setPathEffect', DEFAULT, () => {
      try {
        const pen = new drawing.Pen();
        pen.setStrokeWidth(5);
        pen.setColor({
          alpha: 255, red: 255, green: 0, blue: 0
        });
        let pathEffect = drawing.PathEffect.createDashPathEffect([30, 10], 0);
        pen.setPathEffect(pathEffect);
      } catch (e) {
        expect().assertFail()
      }
    })

    /**
     * @tc.number    : Pen_test_setPathEffect_param_null
     * @tc.name      : Pen_test_setPathEffect_param_null
     * @tc.desc      : 设置画笔路径效果。（参数为空）
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level2
     */
    it('Pen_test_setPathEffect_param_null', DEFAULT, () => {
      try {
        const pen = new drawing.Pen();
        pen.setStrokeWidth(5);
        pen.setColor({
          alpha: 255, red: 255, green: 0, blue: 0
        });
        pen.setPathEffect(null);
      } catch (e) {
        expect(e.code).assertEqual(401)
      }
    })

    /**
     * @tc.number    : Pen_test_setShadowLayer
     * @tc.name      : Pen_test_setShadowLayer
     * @tc.desc      : 设置画笔阴影层效果。为空表示清空阴影层效果，当前仅对文字生效。
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level2
     */
    it('Pen_test_setShadowLayer', DEFAULT, () => {
      try {
        const pen = new drawing.Pen();
        let color: common2D.Color = {
          alpha: 0xFF, red: 0x00, green: 0xFF, blue: 0x00
        };
        let shadowLayer = drawing.ShadowLayer.create(3, -3, 3, color);
        pen.setShadowLayer(shadowLayer);
      } catch (e) {
        expect().assertFail()
      }
    })

    /**
     * @tc.number    : Pen_test_setShadowLayer_param_null
     * @tc.name      : Pen_test_setShadowLayer_param_null
     * @tc.desc      : 设置画笔阴影层效果。为空表示清空阴影层效果，当前仅对文字生效。（参数为空）
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level2
     */
    it('Pen_test_setShadowLayer_param_null', DEFAULT, () => {
      try {
        const pen = new drawing.Pen();
        pen.setShadowLayer(null);
      } catch (e) {
        expect(e.code).assertEqual(401)
      }
    })

    /**
     * @tc.number    : Pen_test_setJoinStyle
     * @tc.name      : Pen_test_setJoinStyle
     * @tc.desc      : 用于设置画笔绘制转角的样式。
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level2
     */
    it('Pen_test_setJoinStyle', DEFAULT, () => {
      try {
        const pen = new drawing.Pen();
        pen.setStrokeWidth(5);
        pen.setColor({
          alpha: 255, red: 255, green: 0, blue: 0
        });
        pen.setJoinStyle(drawing.JoinStyle.ROUND_JOIN);
      } catch (e) {
        expect().assertFail()
      }
    })

    /**
     * @tc.number    : Pen_test_getJoinStyle
     * @tc.name      : Pen_test_getJoinStyle
     * @tc.desc      : 用于获取画笔绘制转角的样式。
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level2
     */
    it('Pen_test_getJoinStyle', DEFAULT, () => {
      try {
        const pen = new drawing.Pen();
        pen.setStrokeWidth(5);
        pen.setColor({
          alpha: 255, red: 255, green: 0, blue: 0
        });
        pen.setJoinStyle(drawing.JoinStyle.ROUND_JOIN);
        let joinStyle = pen.getJoinStyle();
        expect(joinStyle).assertEqual(drawing.JoinStyle.ROUND_JOIN)
      } catch (e) {
        expect().assertFail()
      }
    })

    /**
     * @tc.number    : Pen_test_setCapStyle
     * @tc.name      : Pen_test_setCapStyle
     * @tc.desc      : 用于设置线帽样式。
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level2
     */
    it('Pen_test_setCapStyle', DEFAULT, () => {
      try {
        const pen = new drawing.Pen();
        pen.setStrokeWidth(5);
        pen.setColor({
          alpha: 255, red: 255, green: 0, blue: 0
        });
        pen.setCapStyle(drawing.CapStyle.SQUARE_CAP);
      } catch (e) {
        expect().assertFail()
      }
    })

    /**
     * @tc.number    : Pen_test_getCapStyle
     * @tc.name      : Pen_test_getCapStyle
     * @tc.desc      : 用于获取线帽样式。
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level2
     */
    it('Pen_test_getCapStyle', DEFAULT, () => {
      try {
        const pen = new drawing.Pen();
        pen.setStrokeWidth(5);
        pen.setColor({
          alpha: 255, red: 255, green: 0, blue: 0
        });
        pen.setCapStyle(drawing.CapStyle.SQUARE_CAP);
        let capStyle = pen.getCapStyle();
        expect(capStyle).assertEqual(drawing.CapStyle.SQUARE_CAP)
      } catch (e) {
        expect().assertFail()
      }
    })

  })
}