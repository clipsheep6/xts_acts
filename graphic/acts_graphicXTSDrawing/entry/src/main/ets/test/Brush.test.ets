import { common2D, drawing } from '@kit.ArkGraphics2D';

import { afterAll, afterEach, beforeAll, beforeEach, describe, expect, it } from '@ohos/hypium';
import image from '@ohos.multimedia.image';

export default function brushTest() {
  describe('Brush_test', () => {
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

    it('Brush_test_setMaskFilter', DEFAULT, () => {
      try {
        const brush = new drawing.Brush();
        let maskFilter = drawing.MaskFilter.createBlurMaskFilter(drawing.BlurType.OUTER, 10);
        brush.setMaskFilter(maskFilter);
      } catch (e) {
        expect().assertFail();
      }
    })

    it('Brush_test_setMaskFilter_param_null', DEFAULT, () => {
      try {
        const brush = new drawing.Brush();
        brush.setMaskFilter(null);
      } catch (e) {
        expect(e.code).assertEqual(401)
      }
    })

    it('Brush_test_setShadowLayer', DEFAULT, () => {
      try {
        let color: common2D.Color = {
          alpha: 0xFF, red: 0x00, green: 0xFF, blue: 0x00
        };
        let shadowLayer = drawing.ShadowLayer.create(3, -3, 3, color);
        const brush = new drawing.Brush();
        brush.setShadowLayer(shadowLayer);
      } catch (e) {
        expect().assertFail();
      }
    })


    it('Brush_test_setShadowLayer_param_null', DEFAULT, () => {
      try {
        const brush = new drawing.Brush();
        brush.setShadowLayer(null);
      } catch (e) {
        expect(e.code).assertEqual(401)
      }
    })

  })
}