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

export default function colorFilterTest() {
  describe('ColorFilter_test', () => {
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

    it('ColorFilter_test_createBlendModeColorFilter', DEFAULT, () => {
      try {
        const color: common2D.Color = {
          alpha: 255, red: 255, green: 0, blue: 0
        };
        drawing.ColorFilter.createBlendModeColorFilter(color, drawing.BlendMode.SRC);
      } catch (e) {
        expect().assertFail()
      }
    })

    it("ColorFilter_test_createBlendModeColorFilter_param_null", DEFAULT, () => {
      try {
        // 必填参数是null
        drawing.ColorFilter.createBlendModeColorFilter(null, drawing.BlendMode.SRC);
      } catch (e) {
        expect(e.code).assertEqual(401)
      }

      try {
        // 必填参数是null
        const color: common2D.Color = {
          alpha: 255, red: 255, green: 0, blue: 0
        };
        drawing.ColorFilter.createBlendModeColorFilter(color, null);
      } catch (e) {
        expect(e.code).assertEqual(401)
      }

      try {
        // 必填参数是null
        drawing.ColorFilter.createBlendModeColorFilter(null, null);
      } catch (e) {
        expect(e.code).assertEqual(401)
      }
    })

    it("ColorFilter_test_createBlendModeColorFilter_param_invalid", DEFAULT, () => {
      try {
        // 错误类型
        const color: common2D.Color = {
          alpha: 255, red: 255, green: 0, blue: 0
        };
        drawing.ColorFilter.createBlendModeColorFilter(color, -100);
      } catch (e) {
        expect(e.code).assertEqual(401)
      }
    })

  })
}