import { common2D, drawing } from '@kit.ArkGraphics2D';

import { afterAll, afterEach, beforeAll, beforeEach, describe, expect, it } from '@ohos/hypium';
import image from '@ohos.multimedia.image';

export default function shadowLayerTest() {
  describe('ShadowLayer_test', () => {
    let pixel: image.PixelMap;
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

    it('ShadowLayer_test_create', 0, () => {
      try {
        let color: common2D.Color = {
          alpha: 0xFF, red: 0x00, green: 0xFF, blue: 0x00
        };
        drawing.ShadowLayer.create(3, -3, 3, color);
      } catch (e) {
        expect().assertFail()
      }
    })

    it('ShadowLayer_test_create_param_null', 0, () => {
      try {
        // 必填参数是null
        let color: common2D.Color = {
          alpha: 0xFF, red: 0x00, green: 0xFF, blue: 0x00
        };
        drawing.ShadowLayer.create(null, -3, 3, color);
      } catch (e) {
        expect(e.code).assertEqual(401)
      }
    })

    it("ShadowLayer_test_create_param_invalid", 0, () => {
      try {
        // 参数类型不对
        let color: Record<string, string> = {};
        drawing.ShadowLayer.create(null, -3, 3, color as ESObject);
      } catch (e) {
        expect(e.code).assertEqual(401)
      }
    })
  })
}