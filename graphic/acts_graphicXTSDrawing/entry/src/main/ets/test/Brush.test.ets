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

export default function brushTest() {
  describe('brush_test', () => {
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
     * @tc.number    : SUB_BASIC_WMS_SPECIAL_XTS_GRAPHIC_DRAWING_JS_API_0000
     * @tc.name      : setMaskFilter(maskFilter)
     * @tc.desc      : 用于给画刷添加额外的蒙版滤镜。
     * @tc.size      : MEDIUM
     * @tc.type      : Functional
     * @tc.level     : Level 2
     */
    it('SUB_BASIC_WMS_SPECIAL_XTS_GRAPHIC_DRAWING_JS_API_0000', DEFAULT, () => {
      try {
        const brush = new drawing.Brush();
        let maskFilter = drawing.MaskFilter.createBlurMaskFilter(drawing.BlurType.OUTER, 10);
        brush.setMaskFilter(maskFilter);
      } catch (e) {
        expect().assertFail();
      }
    })

    /**
     * @tc.number    : SUB_BASIC_WMS_SPECIAL_XTS_GRAPHIC_DRAWING_JS_API_0001
     * @tc.name      : setMaskFilter(null)
     * @tc.desc      : 用于给画刷添加额外的蒙版滤镜(参数为空)。
     * @tc.size      : MEDIUM
     * @tc.type      : Functional
     * @tc.level     : Level 2
     */
    it('brush_test_setMaskFilter_param_null', DEFAULT, () => {
      try {
        const brush = new drawing.Brush();
        brush.setMaskFilter(null);
      } catch (e) {
        expect(e.code).assertEqual(401)
      }
    })

    /**
     * @tc.number    : SUB_BASIC_WMS_SPECIAL_XTS_GRAPHIC_DRAWING_JS_API_0010
     * @tc.name      : setShadowLayer(shadowLayer)
     * @tc.desc      : 设置画笔阴影层效果。为空表示清空阴影层效果，当前仅对文字生效。
     * @tc.size      : MEDIUM
     * @tc.type      : Functional
     * @tc.level     : Level 2
     */
    it('SUB_BASIC_WMS_SPECIAL_XTS_GRAPHIC_DRAWING_JS_API_0010', DEFAULT, () => {
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


    /**
     * @tc.number    : SUB_BASIC_WMS_SPECIAL_XTS_GRAPHIC_DRAWING_JS_API_0011
     * @tc.name      : setShadowLayer(null)
     * @tc.desc      : 设置画笔阴影层效果。为空表示清空阴影层效果，当前仅对文字生效(参数为空)。
     * @tc.size      : MEDIUM
     * @tc.type      : Functional
     * @tc.level     : Level 2
     */
    it('SUB_BASIC_WMS_SPECIAL_XTS_GRAPHIC_DRAWING_JS_API_0011', DEFAULT, () => {
      try {
        const brush = new drawing.Brush();
        brush.setShadowLayer(null);
      } catch (e) {
        expect(e.code).assertEqual(401)
      }
    })

  })
}