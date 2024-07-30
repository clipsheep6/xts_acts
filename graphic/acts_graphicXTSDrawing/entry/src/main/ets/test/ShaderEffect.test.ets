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

import { afterAll, afterEach, beforeAll, describe, expect, it } from '@ohos/hypium';
import image from '@ohos.multimedia.image';
import drawing from '@ohos.graphics.drawing';
import uiEffect from '@ohos.graphics.uiEffect';
import { getEnumCount } from './utils';

export default function shadowEffectTest() {
  describe('DrawingTsShadowEffectTest', () => {
    let pixel: image.PixelMap;
    const DEFAULT = 0;
    let pixelMap: image.PixelMap;

    // Defines a test suite. Two parameters are supported: test suite name and test suite function.
    beforeAll(async() => {
      const color: ArrayBuffer = new ArrayBuffer(40000); // 96为需要创建的像素buffer大小,取值为：height * width *4
      let opts: image.InitializationOptions = {
        editable : true, pixelFormat : 3, size : {
          height : 100, width : 100
        }
      }
      pixel = await image.createPixelMap(color, opts);
      pixelMap = await image.createPixelMap(color, opts);
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
     * @tc.number    : SUB_BASIC_GRAPHICS_SPECIAL_API_TS_DRAWING_SHADEREFFECT_0100
     * @tc.name      : testShaderEffectCreateImageShaderNormal
     * @tc.desc      : Test for testShaderEffectCreateImageShaderNormal.
     * @tc.size      : SmallTest
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('testShaderEffectCreateImageShaderNormal', DEFAULT, () => {
      const msg = 'testShaderEffectCreateImageShaderNormal';
      let matrix = new drawing.Matrix();

      try {
        matrix.setMatrix([ 1, 0, 0, 1 ])
        let samplingOptions = new drawing.SamplingOptions();
        drawing.ShaderEffect.createImageShader(pixelMap, uiEffect.TileMode.DECAL, uiEffect.TileMode.DECAL, new drawing.SamplingOptions(), matrix);
        // 枚举值tileX、tileY交叉遍历,SamplingOptions遍历不同的创建
      } catch( e ) {
        console.info(msg + ` create errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect().assertFail();
      }

      try {
        matrix.postRotate(90, 100, 100);
        drawing.ShaderEffect.createImageShader(pixelMap, uiEffect.TileMode.DECAL, uiEffect.TileMode.DECAL, drawing.SamplingOptions(), matrix);
        console.info(msg + ' create successed');
      } catch( e ) {
        console.info(msg + ` create errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect().assertFail();
      }
    });

    /**
     * @tc.number    : SUB_BASIC_GRAPHICS_SPECIAL_API_TS_DRAWING_SHADEREFFECT_0101
     * @tc.name      : testShaderEffectCreateImageShaderMultipleCalls
     * @tc.desc      : Test for testShaderEffectCreateImageShaderMultipleCalls.
     * @tc.size      : SmallTest
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('testShaderEffectCreateImageShaderMultipleCalls', DEFAULT, () => {
      const msg = 'testShaderEffectCreateImageShaderMultipleCalls';

      try {
        let matrix = new drawing.Matrix();
        let samplingOptions = new drawing.SamplingOptions();

        for ( let i = 0 ; i < 20 ; i ++ ) {
          drawing.ShaderEffect.createImageShader(pixelMap, uiEffect.TileMode.DECAL, uiEffect.TileMode.DECAL, samplingOptions, matrix);
        }
        console.info(msg + ' create successed');
      } catch( e ) {
        console.info(msg + ` create errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect().assertFail();
      }

    });

    /**
     * @tc.number    : SUB_BASIC_GRAPHICS_SPECIAL_API_TS_DRAWING_SHADEREFFECT_0102
     * @tc.name      : testShaderEffectCreateImageShaderToNull
     * @tc.desc      : Test for testShaderEffectCreateImageShaderToNull.
     * @tc.size      : SmallTest
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('testShaderEffectCreateImageShaderToNull', DEFAULT, () => {
      const msg = 'testShaderEffectCreateImageShaderToNull';

      try {
        let matrix = new drawing.Matrix();
        let samplingOptions = new drawing.SamplingOptions();
        drawing.ShaderEffect.createImageShader(null, uiEffect.TileMode.DECAL, uiEffect.TileMode.DECAL, samplingOptions, matrix);
        console.info(msg + ' create successed');
      } catch( e ) {
        console.info(msg + ` create errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect(e.code).assertEqual(401);
      }

      try {
        let matrix = new drawing.Matrix();
        let samplingOptions = new drawing.SamplingOptions();
        drawing.ShaderEffect.createImageShader(pixelMap, null, uiEffect.TileMode.DECAL, samplingOptions, matrix);
        console.info(msg + ' create successed');
      } catch( e ) {
        console.info(msg + ` create errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect(e.code).assertEqual(401);
      }

      try {
        let matrix = new drawing.Matrix();
        let samplingOptions = new drawing.SamplingOptions();
        drawing.ShaderEffect.createImageShader(pixelMap, uiEffect.TileMode.DECAL, null, samplingOptions, matrix);
        console.info(msg + ' create successed');
      } catch( e ) {
        console.info(msg + ` create errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect(e.code).assertEqual(401);
      }

      try {
        let matrix = new drawing.Matrix();
        drawing.ShaderEffect.createImageShader(pixelMap, uiEffect.TileMode.DECAL, uiEffect.TileMode.DECAL, null, matrix);
        console.info(msg + ' create successed');
      } catch( e ) {
        console.info(msg + ` create errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect(e.code).assertEqual(401);
      }

      try {
        let samplingOptions = new drawing.SamplingOptions();
        drawing.ShaderEffect.createImageShader(pixelMap, uiEffect.TileMode.DECAL, uiEffect.TileMode.DECAL, samplingOptions, null);
        console.info(msg + ' create successed');
      } catch( e ) {
        console.info(msg + ` create errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect(e.code).assertEqual(401);
      }

      try {
        let matrix = new drawing.Matrix();
        let samplingOptions = new drawing.SamplingOptions();
        drawing.ShaderEffect.createImageShader(undefined, uiEffect.TileMode.DECAL, uiEffect.TileMode.DECAL, samplingOptions, matrix);
        console.info(msg + ' create successed');
      } catch( e ) {
        console.info(msg + ` create errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect(e.code).assertEqual(401);
      }

      try {
        let matrix = new drawing.Matrix();
        let samplingOptions = new drawing.SamplingOptions();
        drawing.ShaderEffect.createImageShader(pixelMap, undefined, uiEffect.TileMode.DECAL, samplingOptions, matrix);
        console.info(msg + ' create successed');
      } catch( e ) {
        console.info(msg + ` create errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect(e.code).assertEqual(401);
      }

      try {
        let matrix = new drawing.Matrix();
        let samplingOptions = new drawing.SamplingOptions();
        drawing.ShaderEffect.createImageShader(pixelMap, uiEffect.TileMode.DECAL, undefined, samplingOptions, matrix);
        console.info(msg + ' create successed');
      } catch( e ) {
        console.info(msg + ` create errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect(e.code).assertEqual(401);
      }

      try {
        let matrix = new drawing.Matrix();
        drawing.ShaderEffect.createImageShader(pixelMap, uiEffect.TileMode.DECAL, uiEffect.TileMode.DECAL, undefined, matrix);
        console.info(msg + ' create successed');
      } catch( e ) {
        console.info(msg + ` create errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect(e.code).assertEqual(401);
      }

      try {
        let samplingOptions = new drawing.SamplingOptions();
        drawing.ShaderEffect.createImageShader(pixelMap, uiEffect.TileMode.DECAL, uiEffect.TileMode.DECAL, samplingOptions, undefined);
        console.info(msg + ' create successed');
      } catch( e ) {
        console.info(msg + ` create errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect(e.code).assertEqual(401);
      }
    });

    /**
     * @tc.number    : SUB_BASIC_GRAPHICS_SPECIAL_API_TS_DRAWING_SHADEREFFECT_0103
     * @tc.name      : testShaderEffectCreateImageShaderMismatch
     * @tc.desc      : Test for testShaderEffectCreateImageShaderMismatch.
     * @tc.size      : SmallTest
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    // it('testShaderEffectCreateImageShaderMismatch', DEFAULT, () => {
    //   const msg = 'testShaderEffectCreateImageShaderMismatch';
    //
    //   try {
    //     let matrix = new drawing.Matrix();
    //     let samplingOptions = new drawing.SamplingOptions();
    //     drawing.ShaderEffect.createImageShader(pixelMap, uiEffect.TileMode.DECAL, uiEffect.TileMode.DECAL, samplingOptions, matrix, matrix);
    //     console.info(msg + ' create successed');
    //   } catch( e ) {
    //     console.info(msg + ` create errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
    //     expect(e.code).assertEqual(401);
    //   }
    //
    //   try {
    //     let samplingOptions = new drawing.SamplingOptions();
    //     drawing.ShaderEffect.createImageShader(pixelMap, uiEffect.TileMode.DECAL, uiEffect.TileMode.DECAL, samplingOptions);
    //     console.info(msg + ' create successed');
    //   } catch( e ) {
    //     console.info(msg + ` create errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
    //     expect(e.code).assertEqual(401);
    //   }
    //
    //   try {
    //     let matrix = new drawing.Matrix();
    //     let samplingOptions = new drawing.SamplingOptions();
    //     drawing.ShaderEffect.createImageShader('s', uiEffect.TileMode.DECAL, uiEffect.TileMode.DECAL, samplingOptions, matrix);
    //     console.info(msg + ' create successed');
    //   } catch( e ) {
    //     console.info(msg + ` create errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
    //     expect(e.code).assertEqual(401);
    //   }
    // });

    /**
     * @tc.number    : SUB_BASIC_GRAPHICS_SPECIAL_API_TS_DRAWING_SHADEREFFECT_0104
     * @tc.name      : testShaderEffectCreateImageShaderAbnormal
     * @tc.desc      : Test for testShaderEffectCreateImageShaderAbnormal.
     * @tc.size      : SmallTest
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('testShaderEffectCreateImageShaderAbnormal', DEFAULT, () => {
      const msg = 'testShaderEffectCreateImageShaderAbnormal';

      try {
        let matrix = new drawing.Matrix();
        let samplingOptions = new drawing.SamplingOptions();
        drawing.ShaderEffect.createImageShader(pixelMap, 10, uiEffect.TileMode.DECAL, samplingOptions, matrix);
        console.info(msg + ' create successed');
      } catch( e ) {
        console.info(msg + ` create errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect(e.code).assertEqual(401);
      }

      try {
        let matrix = new drawing.Matrix();
        matrix.postRotate(90, 100, 100);
        let samplingOptions = new drawing.SamplingOptions();
        drawing.ShaderEffect.createImageShader(pixelMap, uiEffect.TileMode.DECAL, 10, samplingOptions, matrix);
        console.info(msg + ' create successed');
      } catch( e ) {
        console.info(msg + ` create errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect(e.code).assertEqual(401);
      }
    });

    /**
     * @tc.number    : SUB_BASIC_GRAPHICS_SPECIAL_API_TS_DRAWING_SHADEREFFECT_0200
     * @tc.name      : testShaderEffectCreateColorShaderNormal
     * @tc.desc      : Test for testShaderEffectCreateColorShaderNormal.
     * @tc.size      : SmallTest
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('testShaderEffectCreateColorShaderNormal', DEFAULT, () => {
      const msg = 'testShaderEffectCreateColorShaderNormal';

      try {
        let shaderEffect = drawing.ShaderEffect.createColorShader(0x00000000);
        console.info(msg + ' create successed,shaderEffect:' + JSON.stringify(shaderEffect));
      } catch( e ) {
        console.info(msg + ` create errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect().assertFail();
      }

      try {
        let shaderEffect = drawing.ShaderEffect.createColorShader(0xFFFFFFFF);
        console.info(msg + ' create successed,shaderEffect:' + JSON.stringify(shaderEffect));
      } catch( e ) {
        console.info(msg + ` create errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect().assertFail();
      }
    });

    /**
     * @tc.number    : SUB_BASIC_GRAPHICS_SPECIAL_API_TS_DRAWING_SHADEREFFECT_0201
     * @tc.name      : testShaderEffectCreateColorShaderMultipleCalls
     * @tc.desc      : Test for testShaderEffectCreateColorShaderMultipleCalls.
     * @tc.size      : SmallTest
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('testShaderEffectCreateColorShaderMultipleCalls', DEFAULT, () => {
      const msg = 'testShaderEffectCreateColorShaderMultipleCalls';

      try {
        let color = 0x00000000
        for ( let i = 0 ; i < 20 ; i ++ ) {
          ++ color;
          let shaderEffect = drawing.ShaderEffect.createColorShader(color);
          console.info(msg + ' create successed,shaderEffect:' + JSON.stringify(shaderEffect));
        }
      } catch( e ) {
        console.info(msg + ` create errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect().assertFail();
      }
    });

    /**
     * @tc.number    : SUB_BASIC_GRAPHICS_SPECIAL_API_TS_DRAWING_SHADEREFFECT_0202
     * @tc.name      : testShaderEffectCreateColorShaderToNull
     * @tc.desc      : Test for testShaderEffectCreateColorShaderToNull.
     * @tc.size      : SmallTest
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('testShaderEffectCreateColorShaderToNull', DEFAULT, () => {
      const msg = 'testShaderEffectCreateColorShaderToNull';

      try {
        drawing.ShaderEffect.createColorShader(null);
        console.info(msg + ' create successed');
      } catch( e ) {
        console.info(msg + ` create errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect(e.code).assertEqual(401);
      }

      try {
        drawing.ShaderEffect.createColorShader(undefined);
        console.info(msg + ' create successed');
      } catch( e ) {
        console.info(msg + ` create errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect(e.code).assertEqual(401);
      }
    });

    /**
     * @tc.number    : SUB_BASIC_GRAPHICS_SPECIAL_API_TS_DRAWING_SHADEREFFECT_0203
     * @tc.name      : testShaderEffectCreateColorShaderMismatch
     * @tc.desc      : Test for testShaderEffectCreateColorShaderMismatch.
     * @tc.size      : SmallTest
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    // it('testShaderEffectCreateColorShaderMismatch', DEFAULT, () => {
    //   const msg = 'testShaderEffectCreateColorShaderMismatch';
    //
    //   try {
    //     drawing.ShaderEffect.createColorShader(0x00000000, 0x00000000);
    //     console.info(msg + ' create successed');
    //   } catch( e ) {
    //     console.info(msg + ` create errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
    //     expect(e.code).assertEqual(401);
    //   }
    //
    //   try {
    //     drawing.ShaderEffect.createColorShader();
    //     console.info(msg + ' create successed');
    //   } catch( e ) {
    //     console.info(msg + ` create errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
    //     expect(e.code).assertEqual(401);
    //   }
    //
    //   try {
    //     drawing.ShaderEffect.createColorShader('s');
    //     console.info(msg + ' create successed');
    //   } catch( e ) {
    //     console.info(msg + ` create errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
    //     expect(e.code).assertEqual(401);
    //   }
    // });

    /**
     * @tc.number    : SUB_BASIC_GRAPHICS_SPECIAL_API_TS_DRAWING_SHADEREFFECT_0204
     * @tc.name      : testShaderEffectCreateColorShaderAbnormal
     * @tc.desc      : Test for testShaderEffectCreateColorShaderAbnormal.
     * @tc.size      : SmallTest
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('testShaderEffectCreateColorShaderAbnormal', DEFAULT, () => {
      const msg = 'testShaderEffectCreateColorShaderAbnormal';
      try {
        drawing.ShaderEffect.createColorShader({
          alpha : - 1, red : 255, green : 0, blue : 0
        });
      } catch( e ) {
        console.info(msg + ` create errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect(e.code).assertEqual(401);
      }

      try {
        drawing.ShaderEffect.createImageShader({
          alpha : 255, red : - 1, green : 0, blue : 0
        });
      } catch( e ) {
        console.info(msg + ` create errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect(e.code).assertEqual(401);
      }

      try {
        drawing.ShaderEffect.createImageShader({
          alpha : 255, red : 255, green : - 1, blue : 0
        });
      } catch( e ) {
        console.info(msg + ` create errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect(e.code).assertEqual(401);
      }
      try {
        drawing.ShaderEffect.createImageShader({
          alpha : 255, red : 255, green : 0, blue : - 1
        });
      } catch( e ) {
        console.info(msg + ` create errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect(e.code).assertEqual(401);
      }
      try {
        drawing.ShaderEffect.createColorShader({
          alpha : 256, red : 255, green : 0, blue : 0
        });
      } catch( e ) {
        console.info(msg + ` create errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect(e.code).assertEqual(401);
      }

      try {
        drawing.ShaderEffect.createImageShader({
          alpha : 255, red : 256, green : 0, blue : 0
        });
      } catch( e ) {
        console.info(msg + ` create errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect(e.code).assertEqual(401);
      }

      try {
        drawing.ShaderEffect.createImageShader({
          alpha : 255, red : 255, green : 256, blue : 0
        });
      } catch( e ) {
        console.info(msg + ` create errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect(e.code).assertEqual(401);
      }

      try {
        drawing.ShaderEffect.createImageShader({
          alpha : 255, red : 255, green : 0, blue : 256
        });
      } catch( e ) {
        console.info(msg + ` create errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect(e.code).assertEqual(401);
      }

    });

    // 不确定对不对
    /**
     * @tc.number    : SUB_BASIC_GRAPHICS_SPECIAL_API_TS_DRAWING_SHADEREFFECT_0300
     * @tc.name      : testShaderEffectCreateLinearGradientNormal
     * @tc.desc      : Test for testShaderEffectCreateLinearGradientNormal.
     * @tc.size      : SmallTest
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('testShaderEffectCreateLinearGradientNormal', DEFAULT, () => {
      const msg = 'testShaderEffectCreateLinearGradientNormal';

      try {
        let matrix = new drawing.Matrix();
        let shaderEffect = drawing.ShaderEffect.createLinearGradient({
          x : 100, y : 100
        }, {
          x : 300, y : 300
        }, [ 0xFF00FF00, 0xFFFF0000 ], drawing.TileMode.REPEAT); // TileModo枚举值覆盖验证
        shaderEffect = drawing.ShaderEffect.createLinearGradient({
          x : 100.1, y : 100.1
        }, {
          x : 300.1, y : 300.1
        }, [ 0xFF00FF00, 0xFFFF0000 ], drawing.TileMode.REPEAT, null, null);
        shaderEffect = drawing.ShaderEffect.createLinearGradient({
          x : 100.1, y : 100.1
        }, {
          x : 300.1, y : 300.1
        }, [ 0xFF00FF00, 0xFFFF0000 ], drawing.TileMode.REPEAT, null);
        shaderEffect = drawing.ShaderEffect.createLinearGradient({
          x : 100.1, y : 100.1
        }, {
          x : 300.1, y : 300.1
        }, [ 0xFF00FF00, 0xFFFF0000 ], drawing.TileMode.REPEAT, [ 2, 2 ]);
        shaderEffect = drawing.ShaderEffect.createLinearGradient({
          x : 100.1, y : 100.1
        }, {
          x : 300.1, y : 300.1
        }, [ 0xFF00FF00, 0xFFFF0000 ], drawing.TileMode.REPEAT, [ 2, 2 ], matrix);
        shaderEffect = drawing.ShaderEffect.createLinearGradient({
          x : 100.1, y : 100.1
        }, {
          x : 300.1, y : 300.1
        }, [ 0xFF00FF00, 0xFFFF0000 ], drawing.TileMode.REPEAT, [ 2, 2 ], matrix);
        shaderEffect = drawing.ShaderEffect.createLinearGradient({
          x : - 100.1, y : - 100.1
        }, {
          x : 300.1, y : 300.1
        }, [ 0xFF00FF00 ], drawing.TileMode.REPEAT, [ 1, 1 ], matrix);
        shaderEffect = drawing.ShaderEffect.createLinearGradient({
          x : Number.MAX_VALUE, y : Number.MAX_VALUE
        }, {
          x : Number.MAX_VALUE, y : Number.MAX_VALUE
        }, [ 0xFF00FF00, 0xFF00FF00 ], drawing.TileMode.REPEAT, [ 2.3, 2.3 ], matrix);
        shaderEffect = drawing.ShaderEffect.createLinearGradient({
          x : 100.1, y : - 100.1
        }, {
          x : - 300.1, y : 300.1
        }, [ 0xFF00FF00, 0xFF00FF00 ], drawing.TileMode.REPEAT, [ - 1, - 1 ], matrix);
        // 第一个第二个参数有问题,common2D.Point 类型不能为空； 第五个参数应输入数组
        shaderEffect = drawing.ShaderEffect.createLinearGradient({
          x : 0, y : 0
        }, {
          x : 0, y : 0
        }, [], drawing.TileMode.REPEAT, [ 0, 0 ], matrix);
        console.info(msg + ' create successed');
      } catch( e ) {
        console.info(msg + ` create errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect().assertFail();
      }
    });

    /**
     * @tc.number    : SUB_BASIC_GRAPHICS_SPECIAL_API_TS_DRAWING_SHADEREFFECT_0301
     * @tc.name      : testShaderEffectCreateLinearGradientMultipleCalls
     * @tc.desc      : Test for testShaderEffectCreateLinearGradientMultipleCalls.
     * @tc.size      : SmallTest
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('testShaderEffectCreateLinearGradientMultipleCalls', DEFAULT, () => {
      const msg = 'testShaderEffectCreateLinearGradientMultipleCalls';

      try {

        let matrix = new drawing.Matrix();
        const randomEnum = Math.floor(Math.random() * (getEnumCount(drawing.BlurType)));
        for ( let i = 0 ; i < 20 ; i ++ ) {
          let shaderEffect = drawing.ShaderEffect.createLinearGradient({
            x : Math.random() * Number.MAX_VALUE, y : Math.random() * Number.MAX_VALUE
          },
            {
              x : Math.random() * Number.MAX_VALUE, y : Math.random() * Number.MAX_VALUE
            }, [ 0xFF00FF00, 0xFFFF0000 ], randomEnum, [ 2, 2 ], matrix);
        }
        console.info(msg + ' create successed');
      } catch( e ) {
        console.info(msg + ` create errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect().assertFail();
      }

    });

    /**
     * @tc.number    : SUB_BASIC_GRAPHICS_SPECIAL_API_TS_DRAWING_SHADEREFFECT_0302
     * @tc.name      : testShaderEffectCreateLinearGradientToNull
     * @tc.desc      : Test for testShaderEffectCreateLinearGradientToNull.
     * @tc.size      : SmallTest
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('testShaderEffectCreateLinearGradientToNull', DEFAULT, () => {
      const msg = 'testShaderEffectCreateLinearGradientToNull';

      try {
        let matrix = new drawing.Matrix();
        let shaderEffect = drawing.ShaderEffect.createLinearGradient(null, {
          x : 300.1, y : 300.1
        }, [ 0xFF00FF00, 0xFFFF0000 ], drawing.TileMode.REPEAT, [ 2, 2 ], matrix);
        console.info(msg + ' create successed');
      } catch( e ) {
        console.info(msg + ` create errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect(e.code).assertEqual(401);
      }

      try {
        let matrix = new drawing.Matrix();
        let shaderEffect = drawing.ShaderEffect.createLinearGradient({
          x : 100.1, y : 100.1
        }, null, [ 0xFF00FF00, 0xFFFF0000 ], drawing.TileMode.REPEAT, [ 2, 2 ], matrix);
        console.info(msg + ' create successed');
      } catch( e ) {
        console.info(msg + ` create errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect(e.code).assertEqual(401);
      }

      try {
        let matrix = new drawing.Matrix();
        let shaderEffect = drawing.ShaderEffect.createLinearGradient({
          x : 100.1, y : 100.1
        }, {
          x : 300.1, y : 300.1
        }, null, drawing.TileMode.REPEAT, [ 2, 2 ], matrix);
        console.info(msg + ' create successed');
      } catch( e ) {
        console.info(msg + ` create errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect(e.code).assertEqual(401);
      }

      try {
        let shaderEffect = drawing.ShaderEffect.createLinearGradient({
          x : 100.1, y : 100.1
        }, {
          x : 300.1, y : 300.1
        }, [ 0xFF00FF00, 0xFFFF0000 ], null, null, null);
        console.info(msg + ' create successed');
      } catch( e ) {
        console.info(msg + ` create errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect(e.code).assertEqual(401);
      }

      try {
        let matrix = new drawing.Matrix();
        let shaderEffect = drawing.ShaderEffect.createLinearGradient({
          x : 100.1, y : 100.1
        }, undefined, [ 0xFF00FF00, 0xFFFF0000 ], drawing.TileMode.REPEAT, [ 2, 2 ], matrix);
        console.info(msg + ' create successed');
      } catch( e ) {
        console.info(msg + ` create errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect(e.code).assertEqual(401);
      }

      try {
        let matrix = new drawing.Matrix();
        let shaderEffect = drawing.ShaderEffect.createLinearGradient({
          x : 100.1, y : 100.1
        }, {
          x : 300.1, y : 300.1
        }, undefined, drawing.TileMode.REPEAT, [ 2, 2 ], matrix);
        console.info(msg + ' create successed');
      } catch( e ) {
        console.info(msg + ` create errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect(e.code).assertEqual(401);
      }

      try {
        let shaderEffect = drawing.ShaderEffect.createLinearGradient({
          x : 100.1, y : 100.1
        }, {
          x : 300.1, y : 300.1
        }, [ 0xFF00FF00, 0xFFFF0000 ], undefined, null, null);
        console.info(msg + ' create successed');
      } catch( e ) {
        console.info(msg + ` create errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect(e.code).assertEqual(401);
      }

      try {
        let matrix = new drawing.Matrix();
        let shaderEffect = drawing.ShaderEffect.createLinearGradient({
          x : 100.1, y : 100.1
        }, {
          x : 300.1, y : 300.1
        }, [ 0xFF00FF00, 0xFFFF0000 ], drawing.TileMode.REPEAT, undefined, matrix);
        console.info(msg + ' create successed');
      } catch( e ) {
        console.info(msg + ` create errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect(e.code).assertEqual(401);
      }

      try {
        let shaderEffect = drawing.ShaderEffect.createLinearGradient({
          x : 100.1, y : 100.1
        }, {
          x : 300.1, y : 300.1
        }, [ 0xFF00FF00, 0xFFFF0000 ], drawing.TileMode.REPEAT, [ 2, 2 ], undefined);
        console.info(msg + ' create successed');
      } catch( e ) {
        console.info(msg + ` create errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect(e.code).assertEqual(401);
      }


    });

    /**
     * @tc.number    : SUB_BASIC_GRAPHICS_SPECIAL_API_TS_DRAWING_SHADEREFFECT_0303
     * @tc.name      : testShaderEffectCreateLinearGradientMismatch
     * @tc.desc      : Test for testShaderEffectCreateLinearGradientMismatch.
     * @tc.size      : SmallTest
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    // it('testShaderEffectCreateLinearGradientMismatch', DEFAULT, () => {
    //   const msg = 'testShaderEffectCreateLinearGradientMismatch';
    //
    //   try {
    //     let matrix = new drawing.Matrix();
    //     let shaderEffect = drawing.ShaderEffect.createLinearGradient({
    //       x : 100.1, y : 100.1
    //     }, {
    //       x : 300.1, y : 300.1
    //     }, [ 0xFF00FF00, 0xFFFF0000 ], drawing.TileMode.REPEAT, [ 2, 2 ], matrix, matrix);
    //     console.info(msg + ' create successed');
    //   } catch( e ) {
    //     console.info(msg + ` create errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
    //     expect(e.code).assertEqual(401);
    //   }
    //
    //   try {
    //     let shaderEffect = drawing.ShaderEffect.createLinearGradient({
    //       x : 100.1, y : 100.1
    //     }, {
    //       x : 300.1, y : 300.1
    //     }, [ 0xFF00FF00, 0xFFFF0000 ]);
    //     console.info(msg + ' create successed');
    //   } catch( e ) {
    //     console.info(msg + ` create errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
    //     expect(e.code).assertEqual(401);
    //   }
    //
    //   try {
    //     let matrix = new drawing.Matrix();
    //     let shaderEffect = drawing.ShaderEffect.createLinearGradient('s', {
    //       x : 300.1, y : 300.1
    //     }, [ 0xFF00FF00, 0xFFFF0000 ], drawing.TileMode.REPEAT, [ 2, 2 ], matrix);
    //     console.info(msg + ' create successed');
    //   } catch( e ) {
    //     console.info(msg + ` create errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
    //     expect(e.code).assertEqual(401);
    //   }
    //
    // });

    /**
     * @tc.number    : SUB_BASIC_GRAPHICS_SPECIAL_API_TS_DRAWING_SHADEREFFECT_0304
     * @tc.name      : testShaderEffectCreateLinearGradientAbnormal
     * @tc.desc      : Test for testShaderEffectCreateLinearGradientAbnormal.
     * @tc.size      : SmallTest
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('testShaderEffectCreateLinearGradientAbnormal', DEFAULT, () => {
      const msg = 'testShaderEffectCreateLinearGradientAbnormal';

      try {
        drawing.ShaderEffect.createLinearGradient({
          x : 100, y : 100
        }, {
          x : 300, y : 300
        }, [ 0xFF00FF00, 0xFFFF0000 ], 10);
        console.info(msg + ' create successed');
      } catch( e ) {
        console.info(msg + ` create errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect(e.code).assertEqual(401);
      }

      try {
        drawing.ShaderEffect.createLinearGradient({
          x : 100, y : 100
        }, {
          x : 300, y : 300
        }, [ 0xFFFFFFFF + 1, 0xFFFF0000 ], drawing.TileMode.REPEAT);
        console.info(msg + ' create successed');
      } catch( e ) {
        console.info(msg + ` create errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect(e.code).assertEqual(401);
      }

      try {
        drawing.ShaderEffect.createLinearGradient({
          x : 100, y : 100
        }, {
          x : 300, y : 300
        }, [ - 1, 0xFFFF0000 ], drawing.TileMode.REPEAT);
        console.info(msg + ' create successed');
      } catch( e ) {
        console.info(msg + ` create errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect(e.code).assertEqual(401);
      }
    });

    /**
     * @tc.number    : SUB_BASIC_GRAPHICS_SPECIAL_API_TS_DRAWING_SHADEREFFECT_0400
     * @tc.name      : testShaderEffectCreateRadialGradientNormal
     * @tc.desc      : Test for testShaderEffectCreateRadialGradientNormal.
     * @tc.size      : SmallTest
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('testShaderEffectCreateRadialGradientNormal', DEFAULT, () => {
      const msg = 'testShaderEffectCreateRadialGradientNormal';

      try {
        let matrix = new drawing.Matrix();
        let shaderEffect = drawing.ShaderEffect.createRadialGradient({
          x : 100, y : 100
        }, 100, [ 0xFF00FF00, 0xFFFF0000 ], drawing.TileMode.REPEAT); // TileModo枚举值覆盖验证
        shaderEffect = drawing.ShaderEffect.createLinearGradient({
          x : 100.1, y : 100.1
        }, {
          x : 100.2, y : 100.2
        }, [ 0xFF00FF00, 0xFFFF0000 ], drawing.TileMode.REPEAT, null, null);
        shaderEffect = drawing.ShaderEffect.createLinearGradient({
          x : 100.1, y : 100.1
        }, {
          x : 100.2, y : 100.2
        }, [ 0xFF00FF00, 0xFFFF0000 ], drawing.TileMode.REPEAT, null);
        shaderEffect = drawing.ShaderEffect.createLinearGradient({
          x : 100.1, y : 100.1
        }, {
          x : 50, y : 20
        }, [ 0xFF00FF00, 0xFFFF0000 ], drawing.TileMode.REPEAT, [ 2, 2 ]);
        shaderEffect = drawing.ShaderEffect.createLinearGradient({
          x : 100.1, y : 100.1
        }, {
          x : 80, y : 80
        }, [ 0xFF00FF00, 0xFFFF0000 ], drawing.TileMode.REPEAT, [ 2, 2 ], matrix);
        shaderEffect = drawing.ShaderEffect.createLinearGradient({
          x : 100.1, y : 100.1
        }, {
          x : 50, y : 50
        }, [ 0xFF00FF00, 0xFFFF0000 ], drawing.TileMode.REPEAT, [ 2, 2 ], matrix);
        shaderEffect = drawing.ShaderEffect.createLinearGradient({
          x : - 100.1, y : - 100.1
        }, {
          x : 100, y : 100
        }, [ 0xFF00FF00, 0xFF00FF00 ], drawing.TileMode.REPEAT, [ 2, 2 ], matrix);
        shaderEffect = drawing.ShaderEffect.createLinearGradient({
          x : Number.MAX_VALUE, y : Number.MAX_VALUE
        }, {
          x : Number.MAX_VALUE, y : Number.MAX_VALUE
        },
          [ 0xFF00FF00, 0xFF00FF00 ], drawing.TileMode.REPEAT, [ 2.3, 2.3 ], matrix);
        shaderEffect = drawing.ShaderEffect.createLinearGradient({
          x : 100.1, y : - 100.1
        }, {
          x : 100, y : - 100
        }, [ 0xFF00FF00, 0xFF00FF00 ], drawing.TileMode.REPEAT, [ - 1, - 1 ], matrix);
        shaderEffect = drawing.ShaderEffect.createLinearGradient({
          x : 100.1, y : 100.1
        }, {
          x : 100, y : 100
        }, [ 0xFF00FF00, 0xFF00FF00 ], drawing.TileMode.REPEAT, [ 0, 0 ], matrix);
        shaderEffect = drawing.ShaderEffect.createLinearGradient({
          x : 100.1, y : 100.1
        }, {
          x : 100, y : 101
        }, [ 0xFF00FF00, 0xFF00FF00 ], drawing.TileMode.REPEAT, [ 3, 3 ], matrix);
        shaderEffect = drawing.ShaderEffect.createLinearGradient({}, 50, [], drawing.TileMode.REPEAT, 0, matrix);
        shaderEffect = drawing.ShaderEffect.createLinearGradient({
          x : 100.1, y : 100.1
        }, {
          x : 0, y : 0
        }, [ 0xFF00FF00, 0xFF00FF00 ], drawing.TileMode.REPEAT, [ 2, 2 ], matrix);
        shaderEffect = drawing.ShaderEffect.createLinearGradient({
          x : 100.1, y : 100.1
        }, {
          x : - 1, y : - 1
        }, [ 0xFF00FF00, 0xFF00FF00 ], drawing.TileMode.REPEAT, [ 2, 2 ], matrix);
        console.info(msg + ' create successed');
      } catch( e ) {
        console.info(msg + ` create errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect().assertFail();
      }
    });

    /**
     * @tc.number    : SUB_BASIC_GRAPHICS_SPECIAL_API_TS_DRAWING_SHADEREFFECT_0401
     * @tc.name      : testShaderEffectCreateRadialGradientMultipleCalls
     * @tc.desc      : Test for testShaderEffectCreateRadialGradientMultipleCalls.
     * @tc.size      : SmallTest
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('testShaderEffectCreateRadialGradientMultipleCalls', DEFAULT, () => {
      const msg = 'testShaderEffectCreateRadialGradientMultipleCalls';
      try {
        let matrix = new drawing.Matrix();
        const randomEnum = Math.floor(Math.random() * (getEnumCount(drawing.BlurType)));
        for ( let i = 0 ; i < 20 ; i ++ ) {
          let shaderEffect = drawing.ShaderEffect.createLinearGradient({
            x : Math.random() * Number.MAX_VALUE, y : Math.random() * Number.MAX_VALUE
          },
            {
              x : Math.random() * Number.MAX_VALUE, y : Math.random() * Number.MAX_VALUE
            }, [ 0xFF00FF00, 0xFFFF0000 ], randomEnum, [ 2, 2 ], matrix);
        }
        console.info(msg + ' create successed');
      } catch( e ) {
        console.info(msg + ` create errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect().assertFail();
      }
    });

    /**
     * @tc.number    : SUB_BASIC_GRAPHICS_SPECIAL_API_TS_DRAWING_SHADEREFFECT_0402
     * @tc.name      : testShaderEffectCreateRadialGradientToNull
     * @tc.desc      : Test for testShaderEffectCreateRadialGradientToNull.
     * @tc.size      : SmallTest
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('testShaderEffectCreateRadialGradientToNull', DEFAULT, () => {
      const msg = 'testShaderEffectCreateRadialGradientToNull';

      try {
        let matrix = new drawing.Matrix();
        let shaderEffect = drawing.ShaderEffect.createLinearGradient(null, {
          x : 100.1, y : 100.1
        }, [ 0xFF00FF00, 0xFFFF0000 ], drawing.TileMode.REPEAT, [ 2, 2 ], matrix);
        console.info(msg + ' create successed');
      } catch( e ) {
        console.info(msg + ` create errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect(e.code).assertEqual(401);
      }

      try {
        let matrix = new drawing.Matrix();
        let shaderEffect = drawing.ShaderEffect.createLinearGradient({
          x : 100.1, y : 100.1
        }, null, [ 0xFF00FF00, 0xFFFF0000 ], drawing.TileMode.REPEAT, [ 2, 2 ], matrix);
        console.info(msg + ' create successed');
      } catch( e ) {
        console.info(msg + ` create errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect(e.code).assertEqual(401);
      }

      try {
        let matrix = new drawing.Matrix();
        let shaderEffect = drawing.ShaderEffect.createLinearGradient({
          x : 100.1, y : 100.1
        }, {
          x : 100.1, y : 100.1
        }, null, drawing.TileMode.REPEAT, [ 2, 2 ], matrix);
        console.info(msg + ' create successed');
      } catch( e ) {
        console.info(msg + ` create errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect(e.code).assertEqual(401);
      }

      try {
        let shaderEffect = drawing.ShaderEffect.createLinearGradient({
          x : 100.1, y : 100.1
        }, {
          x : 100.1, y : 100.1
        }, [ 0xFF00FF00, 0xFFFF0000 ], null, null, null);
        console.info(msg + ' create successed');
      } catch( e ) {
        console.info(msg + ` create errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect(e.code).assertEqual(401);
      }

      try {
        let matrix = new drawing.Matrix();
        let shaderEffect = drawing.ShaderEffect.createLinearGradient(undefined, {
          x : 100.1, y : 100.1
        }, [ 0xFF00FF00, 0xFFFF0000 ], drawing.TileMode.REPEAT, [ 2, 2 ], matrix);
        console.info(msg + ' create successed');
      } catch( e ) {
        console.info(msg + ` create errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect(e.code).assertEqual(401);
      }

      try {
        let matrix = new drawing.Matrix();
        let shaderEffect = drawing.ShaderEffect.createLinearGradient({
          x : 100.1, y : 100.1
        }, undefined, [ 0xFF00FF00, 0xFFFF0000 ], drawing.TileMode.REPEAT, [ 2, 2 ], matrix);
        console.info(msg + ' create successed');
      } catch( e ) {
        console.info(msg + ` create errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect(e.code).assertEqual(401);
      }

      try {
        let matrix = new drawing.Matrix();
        let shaderEffect = drawing.ShaderEffect.createLinearGradient({
          x : 100.1, y : 100.1
        }, {
          x : 100.1, y : 100.1
        }, undefined, drawing.TileMode.REPEAT, [ 2, 2 ], matrix);
        console.info(msg + ' create successed');
      } catch( e ) {
        console.info(msg + ` create errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect(e.code).assertEqual(401);
      }

      try {
        let shaderEffect = drawing.ShaderEffect.createLinearGradient({
          x : 100.1, y : 100.1
        }, {
          x : 100.1, y : 100.1
        }, [ 0xFF00FF00, 0xFFFF0000 ], undefined, null, null);
        console.info(msg + ' create successed');
      } catch( e ) {
        console.info(msg + ` create errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect(e.code).assertEqual(401);
      }

      try {
        let matrix = new drawing.Matrix();
        let shaderEffect = drawing.ShaderEffect.createLinearGradient({
          x : 100.1, y : 100.1
        }, {
          x : 100.1, y : 100.1
        }, [ 0xFF00FF00, 0xFFFF0000 ], drawing.TileMode.REPEAT, undefined, matrix);
        console.info(msg + ' create successed');
      } catch( e ) {
        console.info(msg + ` create errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect(e.code).assertEqual(401);
      }

      try {
        let shaderEffect = drawing.ShaderEffect.createLinearGradient({
          x : 100.1, y : 100.1
        }, {
          x : 100.1, y : 100.1
        }, [ 0xFF00FF00, 0xFFFF0000 ], drawing.TileMode.REPEAT, [ 2, 2 ], undefined);
        console.info(msg + ' create successed');
      } catch( e ) {
        console.info(msg + ` create errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect(e.code).assertEqual(401);
      }

    });

    /**
     * @tc.number    : SUB_BASIC_GRAPHICS_SPECIAL_API_TS_DRAWING_SHADEREFFECT_0403
     * @tc.name      : testShaderEffectCreateRadialGradientMismatch
     * @tc.desc      : Test for testShaderEffectCreateRadialGradientMismatch.
     * @tc.size      : SmallTest
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    // it('testShaderEffectCreateRadialGradientMismatch', DEFAULT, () => {
    //   const msg = 'testShaderEffectCreateRadialGradientMismatch';
    //
    //   try {
    //     let matrix_ = [ 1, 0, 0, 1 ]
    //     let shaderEffect = drawing.ShaderEffect.createLinearGradient({
    //       x : 100.1, y : 100.1
    //     }, 100, [ 0xFF00FF00, 0xFFFF0000 ], drawing.TileMode.REPEAT, 2, matrix_, matrix_);
    //     console.info(msg + ' create successed');
    //   } catch( e ) {
    //     console.info(msg + ` create errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
    //     expect(e.code).assertEqual(401);
    //   }
    //
    //   try {
    //     let shaderEffect = drawing.ShaderEffect.createLinearGradient({
    //       x : 100.1, y : 100.1
    //     }, 100, [ 0xFF00FF00, 0xFFFF0000 ]);
    //     console.info(msg + ' create successed');
    //   } catch( e ) {
    //     console.info(msg + ` create errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
    //     expect(e.code).assertEqual(401);
    //   }
    //
    //   try {
    //     let matrix_ = [ 1, 0, 0, 1 ]
    //     let shaderEffect = drawing.ShaderEffect.createLinearGradient('s', 100, [ 0xFF00FF00, 0xFFFF0000 ], drawing.TileMode.REPEAT, 2, matrix_);
    //     console.info(msg + ' create successed');
    //   } catch( e ) {
    //     console.info(msg + ` create errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
    //     expect(e.code).assertEqual(401);
    //   }
    //
    // });

    /**
     * @tc.number    : SUB_BASIC_GRAPHICS_SPECIAL_API_TS_DRAWING_SHADEREFFECT_0404
     * @tc.name      : testShaderEffectCreateRadialGradientAbnormal
     * @tc.desc      : Test for testShaderEffectCreateRadialGradientAbnormal.
     * @tc.size      : SmallTest
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('testShaderEffectCreateRadialGradientAbnormal', DEFAULT, () => {
      const msg = 'testShaderEffectCreateRadialGradientAbnormal';

      try {
        drawing.ShaderEffect.createLinearGradient({
          x : 100, y : 100
        }, 100, [ 0xFF00FF00, 0xFFFF0000 ], 10);
        console.info(msg + ' create successed');
      } catch( e ) {
        console.info(msg + ` create errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect(e.code).assertEqual(401);
      }

      try {
        drawing.ShaderEffect.createLinearGradient({
          x : 100, y : 100
        }, 100, [ 0xFFFFFFFF + 1, 0xFFFF0000 ], drawing.TileMode.REPEAT);
        console.info(msg + ' create successed');
      } catch( e ) {
        console.info(msg + ` create errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect(e.code).assertEqual(401);
      }

      try {
        drawing.ShaderEffect.createLinearGradient({
          x : 100, y : 100
        }, 100, [ - 1, 0xFFFF0000 ], drawing.TileMode.REPEAT);
        console.info(msg + ' create successed');
      } catch( e ) {
        console.info(msg + ` create errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect(e.code).assertEqual(401);
      }
    });

    /**
     * @tc.number    : SUB_BASIC_GRAPHICS_SPECIAL_API_TS_DRAWING_SHADEREFFECT_0500
     * @tc.name      : testShaderEffectCreateSweepGradientNormal
     * @tc.desc      : Test for testShaderEffectCreateSweepGradientNormal.
     * @tc.size      : SmallTest
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('testShaderEffectCreateSweepGradientNormal', DEFAULT, () => {
      const msg = 'testShaderEffectCreateSweepGradientNormal';

      try {
        //  static createLinearGradient(startPt: common2D.Point, endPt: common2D.Point, colors: Array<number>,
        //       mode: TileMode, pos?: Array<number> | null, matrix?: Matrix | null): ShaderEffect;
        let matrix_ = new drawing.Matrix();
        matrix_.setMatrix([ 1, 0, 0, 1 ])
        let matrix = new drawing.Matrix();
        matrix.setMatrix([ 1, 1, 0, 1 ])
        let shaderEffect = drawing.ShaderEffect.createSweepGradient({
          x : 100, y : 100
        }, [ 0xFF00FF00, 0xFFFF0000 ], drawing.TileMode.REPEAT, 100, 200); //TileModo枚举值覆盖验证
        shaderEffect = drawing.ShaderEffect.createSweepGradient({
          x : 100.1, y : 100.1
        }, [ 0xFF00FF00, 0xFFFF0000 ], drawing.TileMode.REPEAT, 0, 360, null, null);
        shaderEffect = drawing.ShaderEffect.createSweepGradient({
          x : - 100.1, y : 100.1
        }, [ 0xFF00FF00, 0xFFFF0000 ], drawing.TileMode.REPEAT, 360, 0, null, null);
        shaderEffect = drawing.ShaderEffect.createSweepGradient({
          x : - 100.1, y : 100.1
        }, [ 0xFF00FF00, 0xFFFF0000 ], drawing.TileMode.REPEAT, 180.1, 180.1, null);
        shaderEffect = drawing.ShaderEffect.createSweepGradient({
          x : 100.1, y : - 100.1
        }, [ 0xFF00FF00, 0xFFFF0000 ], drawing.TileMode.REPEAT, 180.1, 180.1, [ 2, 2 ]);
        shaderEffect = drawing.ShaderEffect.createSweepGradient({
          x : - 100.1, y : - 100.1
        }, [ 0xFF00FF00, 0xFFFF0000 ], drawing.TileMode.REPEAT, 30, 90, [ 2, 2 ], matrix_);
        shaderEffect = drawing.ShaderEffect.createSweepGradient({
          x : - 100.1, y : 100.1
        }, [ 0xFF00FF00, 0xFFFF0000 ], drawing.TileMode.REPEAT, 30, 90, [ 2.2, 2.2 ], matrix);
        shaderEffect = drawing.ShaderEffect.createLinearGradient({
          x : 100.1, y : 100.1
        }, {
          x : 100.1, y : 100.1
        }, [ 0xFF00FF00, 0xFF00FF00 ], drawing.TileMode.REPEAT, [ 30, 90, 3 ], matrix);
        shaderEffect = drawing.ShaderEffect.createLinearGradient({
          x : 100.1, y : 100.1
        }, {
          x : 100.1, y : 100.1
        }, [ 0xFF00FF00, 0xFF00FF00 ], drawing.TileMode.REPEAT, [ 30, 90, - 1 ], matrix);
        shaderEffect = drawing.ShaderEffect.createLinearGradient({
          x : 100.1, y : 100.1
        }, {
          x : 100.1, y : 100.1
        }, [ 0xFF00FF00, 0xFF00FF00 ], drawing.TileMode.REPEAT, [ 30, 90, 0 ], matrix);
        shaderEffect = drawing.ShaderEffect.createLinearGradient({
          x : 100.1, y : 100.1
        }, {
          x : 100.1, y : 100.1
        }, [ 0xFF00FF00, 0xFF00FF00 ], drawing.TileMode.REPEAT, [ - 30, 90, 2 ], matrix);
        shaderEffect = drawing.ShaderEffect.createLinearGradient({
          x : 100.1, y : 100.1
        }, {
          x : 100.1, y : 100.1
        }, [ 0xFF00FF00, 0xFF00FF00 ], drawing.TileMode.REPEAT, [ 361, 90, 2 ], matrix);
        shaderEffect = drawing.ShaderEffect.createLinearGradient({
          x : 100.1, y : 100.1
        }, {
          x : 100.1, y : 100.1
        }, [ 0xFF00FF00, 0xFF00FF00 ], drawing.TileMode.REPEAT, [ 90, - 30, 2 ], matrix);
        shaderEffect = drawing.ShaderEffect.createLinearGradient({
          x : 100.1, y : 100.1
        }, {
          x : 100.1, y : 100.1
        }, [ 0xFF00FF00, 0xFF00FF00 ], drawing.TileMode.REPEAT, [ 90, 361, 2 ], matrix);
        shaderEffect = drawing.ShaderEffect.createLinearGradient({
          x : 100.1, y : 100.1
        }, {
          x : 100.1, y : 100.1
        }, [], drawing.TileMode.REPEAT, [ 90, 90 ], matrix);
        console.info(msg + ' create successed');
      } catch( e ) {
        console.info(msg + ` create errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect().assertFail();
      }
    });

    /**
     * @tc.number    : SUB_BASIC_GRAPHICS_SPECIAL_API_TS_DRAWING_SHADEREFFECT_0501
     * @tc.name      : testShaderEffectCreateSweepGradientMultipleCalls
     * @tc.desc      : Test for testShaderEffectCreateSweepGradientMultipleCalls.
     * @tc.size      : SmallTest
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('testShaderEffectCreateSweepGradientMultipleCalls', DEFAULT, () => {
      const msg = 'testShaderEffectCreateSweepGradientMultipleCalls';
      let matrix_ = new drawing.Matrix();
      matrix_.setMatrix([ 1, 0, 0, 1 ])
      try {
        for ( let i = 0 ; i < 20 ; i ++ ) {
          let shaderEffect = drawing.ShaderEffect.createSweepGradient({
            x : Math.random() * Number.MAX_VALUE, y : Math.random() * Number.MAX_VALUE
          },
            [ 0xFF00FF00, 0xFFFF0000 ], drawing.TileMode.REPEAT, Math.random() * Number.MAX_VALUE, Math.random() * Number.MAX_VALUE, [ 2, 2 ], matrix_);
        }
        console.info(msg + ' create successed');
      } catch( e ) {
        console.info(msg + ` create errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect().assertFail();
      }

    });

    /**
     * @tc.number    : SUB_BASIC_GRAPHICS_SPECIAL_API_TS_DRAWING_SHADEREFFECT_0502
     * @tc.name      : testShaderEffectCreateSweepGradientToNull
     * @tc.desc      : Test for testShaderEffectCreateSweepGradientToNull.
     * @tc.size      : SmallTest
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('testShaderEffectCreateSweepGradientToNull', DEFAULT, () => {
      const msg = 'testShaderEffectCreateSweepGradientToNull';

      try {
        let matrix_ = new drawing.Matrix();
        matrix_.setMatrix([ 1, 0, 0, 1 ])
        drawing.ShaderEffect.createSweepGradient(null, [ 0xFF00FF00, 0xFFFF0000 ], drawing.TileMode.REPEAT, 30, 90, [ 2, 2 ], matrix_);
        console.info(msg + ' create successed');
      } catch( e ) {
        console.info(msg + ` create errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect(e.code).assertEqual(401);
      }

      try {
        let matrix_ = new drawing.Matrix();
        matrix_.setMatrix([ 1, 0, 0, 1 ])
        drawing.ShaderEffect.createSweepGradient({
          x : 100.1, y : 100.1
        }, null, drawing.TileMode.REPEAT, 30, 90, [ 2, 2 ], matrix_);
        console.info(msg + ' create successed');
      } catch( e ) {
        console.info(msg + ` create errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect(e.code).assertEqual(401);
      }

      try {
        let matrix_ = new drawing.Matrix();
        matrix_.setMatrix([ 1, 0, 0, 1 ])
        drawing.ShaderEffect.createSweepGradient({
          x : 100, y : 100
        }, [ 0xFF00FF00, 0xFFFF0000 ], null, 30, 90, [ 2, 2 ], matrix_);
        console.info(msg + ' create successed');
      } catch( e ) {
        console.info(msg + ` create errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect(e.code).assertEqual(401);
      }

      try {
        let matrix_ = new drawing.Matrix();
        matrix_.setMatrix([ 1, 0, 0, 1 ])
        drawing.ShaderEffect.createSweepGradient({
          x : 100, y : 100
        }, [ 0xFF00FF00, 0xFFFF0000 ], drawing.TileMode.REPEAT, null, 90, [ 2, 2 ], matrix_);
        console.info(msg + ' create successed');
      } catch( e ) {
        console.info(msg + ` create errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect(e.code).assertEqual(401);
      }

      try {
        let matrix_ = new drawing.Matrix();
        matrix_.setMatrix([ 1, 0, 0, 1 ])
        drawing.ShaderEffect.createSweepGradient({
          x : 100, y : 100
        }, [ 0xFF00FF00, 0xFFFF0000 ], drawing.TileMode.REPEAT, 30, null, [ 2, 2 ], matrix_);
        console.info(msg + ' create successed');
      } catch( e ) {
        console.info(msg + ` create errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect(e.code).assertEqual(401);
      }

      try {
        let matrix_ = new drawing.Matrix();
        matrix_.setMatrix([ 1, 0, 0, 1 ])
        drawing.ShaderEffect.createSweepGradient(undefined, [ 0xFF00FF00, 0xFFFF0000 ], drawing.TileMode.REPEAT, 30, 90, [ 2, 2 ], matrix_);
        console.info(msg + ' create successed');
      } catch( e ) {
        console.info(msg + ` create errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect(e.code).assertEqual(401);
      }

      try {
        let matrix_ = new drawing.Matrix();
        matrix_.setMatrix([ 1, 0, 0, 1 ])
        drawing.ShaderEffect.createSweepGradient({
          x : 100, y : 100
        }, undefined, drawing.TileMode.REPEAT, 30, 90, [ 2, 2 ], matrix_);
        console.info(msg + ' create successed');
      } catch( e ) {
        console.info(msg + ` create errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect(e.code).assertEqual(401);
      }

      try {
        let matrix_ = new drawing.Matrix();
        matrix_.setMatrix([ 1, 0, 0, 1 ])
        drawing.ShaderEffect.createSweepGradient({
          x : 100, y : 100
        }, [ 0xFF00FF00, 0xFFFF0000 ], undefined, 30, 90, [ 2, 2 ], matrix_);
        console.info(msg + ' create successed');
      } catch( e ) {
        console.info(msg + ` create errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect(e.code).assertEqual(401);
      }

      try {
        let matrix_ = new drawing.Matrix();
        matrix_.setMatrix([ 1, 0, 0, 1 ])
        drawing.ShaderEffect.createSweepGradient({
          x : 100, y : 100
        }, [ 0xFF00FF00, 0xFFFF0000 ], drawing.TileMode.REPEAT, undefined, 90, [ 2, 2 ], matrix_);
        console.info(msg + ' create successed');
      } catch( e ) {
        console.info(msg + ` create errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect(e.code).assertEqual(401);
      }

      try {
        let matrix_ = new drawing.Matrix();
        matrix_.setMatrix([ 1, 0, 0, 1 ])
        drawing.ShaderEffect.createSweepGradient({
          x : 100, y : 100
        }, [ 0xFF00FF00, 0xFFFF0000 ], drawing.TileMode.REPEAT, 30, undefined, [ 2, 2 ], matrix_);
        console.info(msg + ' create successed');
      } catch( e ) {
        console.info(msg + ` create errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect(e.code).assertEqual(401);
      }

      try {
        let matrix_ = new drawing.Matrix();
        matrix_.setMatrix([ 1, 0, 0, 1 ])
        drawing.ShaderEffect.createSweepGradient({
          x : 100, y : 100
        }, [ 0xFF00FF00, 0xFFFF0000 ], drawing.TileMode.REPEAT, 30, 90, undefined, matrix_);
        console.info(msg + ' create successed');
      } catch( e ) {
        console.info(msg + ` create errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect(e.code).assertEqual(401);
      }

      try {
        let matrix_ = new drawing.Matrix();
        matrix_.setMatrix([ 1, 0, 0, 1 ])
        drawing.ShaderEffect.createSweepGradient({
          x : 100, y : 100
        }, [ 0xFF00FF00, 0xFFFF0000 ], drawing.TileMode.REPEAT, 30, 90, [ 2, 2 ], undefined);
        console.info(msg + ' create successed');
      } catch( e ) {
        console.info(msg + ` create errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect(e.code).assertEqual(401);
      }

    });

    /**
     * @tc.number    : SUB_BASIC_GRAPHICS_SPECIAL_API_TS_DRAWING_SHADEREFFECT_0503
     * @tc.name      : testShaderEffectCreateSweepGradientMismatch
     * @tc.desc      : Test for testShaderEffectCreateSweepGradientMismatch.
     * @tc.size      : SmallTest
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    // it('testShaderEffectCreateSweepGradientMismatch', DEFAULT, () => {
    //   const msg = 'testShaderEffectCreateSweepGradientMismatch';
    //
    //   try {
    //     let matrix_ = new drawing.Matrix();
    //     matrix_.setMatrix([ 1, 0, 0, 1 ])
    //     drawing.ShaderEffect.createSweepGradient({
    //       x : - 100.1, y : - 100.1
    //     }, [ 0xFF00FF00, 0xFFFF0000 ], drawing.TileMode.REPEAT, 30, 90, 2, matrix_, matrix_);
    //     console.info(msg + ' create successed');
    //   } catch( e ) {
    //     console.info(msg + ` create errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
    //     expect(e.code).assertEqual(401);
    //   }
    //
    //   try {
    //     let matrix_ = new drawing.Matrix();
    //     matrix_.setMatrix([ 1, 0, 0, 1 ])
    //     drawing.ShaderEffect.createSweepGradient({
    //       x : - 100.1, y : - 100.1
    //     }, [ 0xFF00FF00, 0xFFFF0000 ], drawing.TileMode.REPEAT, 30);
    //     console.info(msg + ' create successed');
    //   } catch( e ) {
    //     console.info(msg + ` create errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
    //     expect(e.code).assertEqual(401);
    //   }
    //
    //   try {
    //     let matrix_ = new drawing.Matrix();
    //     matrix_.setMatrix([ 1, 0, 0, 1 ])
    //     drawing.ShaderEffect.createSweepGradient('s', [ 0xFF00FF00, 0xFFFF0000 ], drawing.TileMode.REPEAT, 30, 90, 2, matrix_);
    //     console.info(msg + ' create successed');
    //   } catch( e ) {
    //     console.info(msg + ` create errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
    //     expect(e.code).assertEqual(401);
    //   }
    // });

    /**
     * @tc.number    : SUB_BASIC_GRAPHICS_SPECIAL_API_TS_DRAWING_SHADEREFFECT_0504
     * @tc.name      : testShaderEffectCreateSweepGradientAbnormal
     * @tc.desc      : Test for testShaderEffectCreateSweepGradientAbnormal.
     * @tc.size      : SmallTest
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('testShaderEffectCreateSweepGradientAbnormal', DEFAULT, () => {
      const msg = 'testShaderEffectCreateSweepGradientAbnormal';

      try {
        drawing.ShaderEffect.createLinearGradient({
          x : 100, y : 100
        }, 100, [ 0xFF00FF00, 0xFFFF0000 ], 10);
        console.info(msg + ' create successed');
      } catch( e ) {
        console.info(msg + ` create errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect(e.code).assertEqual(401);
      }

      try {
        drawing.ShaderEffect.createLinearGradient({
          x : 100, y : 100
        }, 100, [ 0xFFFFFFFF + 1, 0xFFFF0000 ], drawing.TileMode.REPEAT);
        console.info(msg + ' create successed');
      } catch( e ) {
        console.info(msg + ` create errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect(e.code).assertEqual(401);
      }

      try {
        drawing.ShaderEffect.createLinearGradient({
          x : 100, y : 100
        }, 100, [ - 1, 0xFFFF0000 ], drawing.TileMode.REPEAT);
        console.info(msg + ' create successed');
      } catch( e ) {
        console.info(msg + ` create errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect(e.code).assertEqual(401);
      }
    });

    /**
     * @tc.number    : SUB_BASIC_GRAPHICS_SPECIAL_API_TS_DRAWING_SHADEREFFECT_0600
     * @tc.name      : testShaderEffectCreateConicalGradientNormal
     * @tc.desc      : Test for testShaderEffectCreateConicalGradientNormal.
     * @tc.size      : SmallTest
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('testShaderEffectCreateConicalGradientNormal', DEFAULT, () => {
      const msg = 'testShaderEffectCreateConicalGradientNormal';

      try {
        let matrix_ = new drawing.Matrix();
        matrix_.setMatrix([ 1, 0, 0, 1 ]);
        let matrix = new drawing.Matrix();
        matrix.setMatrix([ 1, 1, 0, 1 ]);
        let shaderEffect = drawing.ShaderEffect.createRadialGradient({
          x : 100, y : 100
        }, 100, {
          x : 200, y : 200
        }, 50, [ 0xFF00FF00, 0xFFFF0000 ], drawing.TileMode.REPEAT);
        shaderEffect = drawing.ShaderEffect.createLinearGradient({
          x : 100.1, y : 100.1
        }, 100.1, {
          x : 200.1, y : 200.1
        }, 50.1, [ 0xFF00FF00, 0xFFFF0000 ], drawing.TileMode.REPEAT, null, null);
        shaderEffect = drawing.ShaderEffect.createLinearGradient({
          x : 100.1, y : 100.1
        }, 100, {
          x : 200, y : 200
        }, 50, [ 0xFF00FF00, 0xFFFF0000 ], drawing.TileMode.REPEAT, null);
        shaderEffect = drawing.ShaderEffect.createLinearGradient({
          x : 100.1, y : 100.1
        }, 50, {
          x : 200, y : 200
        }, 50, [ 0xFF00FF00, 0xFFFF0000 ], drawing.TileMode.REPEAT, 2);
        shaderEffect = drawing.ShaderEffect.createLinearGradient({
          x : 100.1, y : 100.1
        }, 80, {
          x : 200, y : 200
        }, 50, [ 0xFF00FF00, 0xFFFF0000 ], drawing.TileMode.REPEAT, 2, matrix_);
        shaderEffect = drawing.ShaderEffect.createLinearGradient({
          x : 100.1, y : 100.1
        }, 50, {
          x : 200, y : 200
        }, 50, [ 0xFF00FF00, 0xFFFF0000 ], drawing.TileMode.REPEAT, 2, matrix);
        shaderEffect = drawing.ShaderEffect.createLinearGradient({
          x : - 100.1, y : - 100.1
        }, 100, {
          x : - 200, y : 200
        }, 50, [ 0xFF00FF00, 0xFF00FF00 ], drawing.TileMode.REPEAT, 2, matrix);
        shaderEffect = drawing.ShaderEffect.createLinearGradient({
          x : Number.MAX_VALUE, y : Number.MAX_VALUE
        }, Number.MAX_VALUE, {
          x : 200, y : 200
        }, 50, [ 0xFF00FF00, 0xFF00FF00 ], drawing.TileMode.REPEAT, 2.3, matrix);
        shaderEffect = drawing.ShaderEffect.createLinearGradient({
          x : 200, y : 200
        }, 50, {
          x : Number.MAX_VALUE, y : Number.MAX_VALUE
        }, Number.MAX_VALUE, [ 0xFF00FF00, 0xFF00FF00 ], drawing.TileMode.REPEAT, 2, matrix);
        shaderEffect = drawing.ShaderEffect.createLinearGradient({
          x : 100.1, y : - 100.1
        }, 100, {
          x : 200, y : 200
        }, 50, [ 0xFF00FF00, 0xFF00FF00 ], drawing.TileMode.REPEAT, - 1, matrix);
        shaderEffect = drawing.ShaderEffect.createLinearGradient({
          x : 100.1, y : 100.1
        }, 100, {
          x : 200, y : 200
        }, 50, [ 0xFF00FF00, 0xFF00FF00 ], drawing.TileMode.REPEAT, 0, matrix);
        shaderEffect = drawing.ShaderEffect.createLinearGradient({
          x : 100.1, y : 100.1
        }, 100, {
          x : 200, y : 200
        }, 50, [ 0xFF00FF00, 0xFF00FF00 ], drawing.TileMode.REPEAT, 3, matrix);
        shaderEffect = drawing.ShaderEffect.createLinearGradient({}, 50, {
        }, 50, [], drawing.TileMode.REPEAT, 0, matrix);
        shaderEffect = drawing.ShaderEffect.createLinearGradient({
          x : 100.1, y : 100.1
        }, 0, {
          x : 200, y : 200
        }, 50, [ 0xFF00FF00, 0xFFFF0000 ], drawing.TileMode.REPEAT, 2, matrix_);
        shaderEffect = drawing.ShaderEffect.createLinearGradient({
          x : 100.1, y : 100.1
        }, - 1, {
          x : 200, y : 200
        }, 50, [ 0xFF00FF00, 0xFFFF0000 ], drawing.TileMode.REPEAT, 2, matrix_);
        shaderEffect = drawing.ShaderEffect.createLinearGradient({
          x : 100.1, y : 100.1
        }, 100, {
          x : 200, y : 200
        }, 0, [ 0xFF00FF00, 0xFFFF0000 ], drawing.TileMode.REPEAT, 2, matrix_);
        shaderEffect = drawing.ShaderEffect.createLinearGradient({
          x : 100.1, y : 100.1
        }, 100, {
          x : 200, y : 200
        }, - 1, [ 0xFF00FF00, 0xFFFF0000 ], drawing.TileMode.REPEAT, 2, matrix_);
        console.info(msg + ' create successed');
      } catch( e ) {
        console.info(msg + ` create errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect().assertFail();
      }
    });

    /**
     * @tc.number    : SUB_BASIC_GRAPHICS_SPECIAL_API_TS_DRAWING_SHADEREFFECT_0601
     * @tc.name      : testShaderEffectCreateConicalGradientMultipleCalls
     * @tc.desc      : Test for testShaderEffectCreateConicalGradientMultipleCalls.
     * @tc.size      : SmallTest
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('testShaderEffectCreateConicalGradientMultipleCalls', DEFAULT, () => {
      const msg = 'testShaderEffectCreateConicalGradientMultipleCalls';

      // static createLinearGradient(startPt: common2D.Point, endPt: common2D.Point, colors: Array<number>,
      //       mode: TileMode, pos?: Array<number> | null, matrix?: Matrix | null): ShaderEffect;
      try {
        let matrix_ = new drawing.Matrix();
        matrix_.setMatrix([ 1, 0, 0, 1 ]);
        const randomEnum = Math.floor(Math.random() * (getEnumCount(drawing.BlurType)));
        for ( let i = 0 ; i < 20 ; i ++ ) {
          drawing.ShaderEffect.createLinearGradient({
            x : Math.random() * Number.MAX_VALUE, y : Math.random() * Number.MAX_VALUE
          },
            {
              x : Math.random() * Number.MAX_VALUE, y : Math.random() * Number.MAX_VALUE
            },
            [ 0xFF00FF00, 0xFFFF0000 ], randomEnum, [ 2, 2 ], matrix_);
        }
        console.info(msg + ' create successed');
      } catch( e ) {
        console.info(msg + ` create errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect().assertFail();
      }
    });

    /**
     * @tc.number    : SUB_BASIC_GRAPHICS_SPECIAL_API_TS_DRAWING_SHADEREFFECT_0602
     * @tc.name      : testShaderEffectCreateConicalGradientToNull
     * @tc.desc      : Test for testShaderEffectCreateConicalGradientToNull.
     * @tc.size      : SmallTest
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('testShaderEffectCreateConicalGradientToNull', DEFAULT, () => {
      const msg = 'testShaderEffectCreateConicalGradientToNull';

      try {
        let matrix = new drawing.Matrix();
        drawing.ShaderEffect.createLinearGradient(null, 100, {
          x : - 200, y : 200
        }, 50, [ 0xFF00FF00, 0xFF00FF00 ], drawing.TileMode.REPEAT, 2, matrix);
        console.info(msg + ' create successed');
      } catch( e ) {
        console.info(msg + ` create errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect(e.code).assertEqual(401);
      }

      try {
        let matrix = new drawing.Matrix();
        drawing.ShaderEffect.createLinearGradient({
          x : - 100.1, y : - 100.1
        }, null, {
          x : - 200, y : 200
        }, 50, [ 0xFF00FF00, 0xFF00FF00 ], drawing.TileMode.REPEAT, 2, matrix);
        console.info(msg + ' create successed');
      } catch( e ) {
        console.info(msg + ` create errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect(e.code).assertEqual(401);
      }

      try {
        let matrix = new drawing.Matrix();
        drawing.ShaderEffect.createLinearGradient({
          x : - 100.1, y : - 100.1
        }, 100, null, 50, [ 0xFF00FF00, 0xFF00FF00 ], drawing.TileMode.REPEAT, 2, matrix);
        console.info(msg + ' create successed');
      } catch( e ) {
        console.info(msg + ` create errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect(e.code).assertEqual(401);
      }

      try {
        let matrix = new drawing.Matrix();
        drawing.ShaderEffect.createLinearGradient({
          x : - 100.1, y : - 100.1
        }, 100, null, 50, [ 0xFF00FF00, 0xFF00FF00 ], drawing.TileMode.REPEAT, 2, matrix);
        console.info(msg + ' create successed');
      } catch( e ) {
        console.info(msg + ` create errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect(e.code).assertEqual(401);
      }

      try {
        let matrix = new drawing.Matrix();
        drawing.ShaderEffect.createLinearGradient({
          x : - 100.1, y : - 100.1
        }, 100, {
          x : - 200, y : 200
        }, null, [ 0xFF00FF00, 0xFF00FF00 ], drawing.TileMode.REPEAT, 2, matrix);
        console.info(msg + ' create successed');
      } catch( e ) {
        console.info(msg + ` create errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect(e.code).assertEqual(401);
      }

      try {
        let matrix = new drawing.Matrix();
        drawing.ShaderEffect.createLinearGradient({
          x : - 100.1, y : - 100.1
        }, 100, {
          x : - 200, y : 200
        }, 50, null, drawing.TileMode.REPEAT, 2, matrix);
        console.info(msg + ' create successed');
      } catch( e ) {
        console.info(msg + ` create errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect(e.code).assertEqual(401);
      }

      try {
        let matrix = new drawing.Matrix();
        drawing.ShaderEffect.createLinearGradient({
          x : - 100.1, y : - 100.1
        }, 100, {
          x : - 200, y : 200
        }, 50, [ 0xFF00FF00, 0xFF00FF00 ], null, 2, matrix);
        console.info(msg + ' create successed');
      } catch( e ) {
        console.info(msg + ` create errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect(e.code).assertEqual(401);
      }

      try {
        let matrix = new drawing.Matrix();
        drawing.ShaderEffect.createLinearGradient(undefined, 100, {
          x : - 200, y : 200
        }, 50, [ 0xFF00FF00, 0xFF00FF00 ], drawing.TileMode.REPEAT, 2, matrix);
        console.info(msg + ' create successed');
      } catch( e ) {
        console.info(msg + ` create errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect(e.code).assertEqual(401);
      }

      try {
        let matrix = new drawing.Matrix();
        drawing.ShaderEffect.createLinearGradient({
          x : - 100.1, y : - 100.1
        }, undefined, {
          x : - 200, y : 200
        }, 50, [ 0xFF00FF00, 0xFF00FF00 ], drawing.TileMode.REPEAT, 2, matrix);
        console.info(msg + ' create successed');
      } catch( e ) {
        console.info(msg + ` create errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect(e.code).assertEqual(401);
      }

      try {
        let matrix = new drawing.Matrix();
        drawing.ShaderEffect.createLinearGradient({
          x : - 100.1, y : - 100.1
        }, 100, null, 50, [ 0xFF00FF00, 0xFF00FF00 ], drawing.TileMode.REPEAT, 2, matrix);
        console.info(msg + ' create successed');
      } catch( e ) {
        console.info(msg + ` create errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect(e.code).assertEqual(401);
      }

      try {
        let matrix = new drawing.Matrix();
        drawing.ShaderEffect.createLinearGradient({
          x : - 100.1, y : - 100.1
        }, 100, {
          x : - 200, y : 200
        }, undefined, [ 0xFF00FF00, 0xFF00FF00 ], drawing.TileMode.REPEAT, 2, matrix);
        console.info(msg + ' create successed');
      } catch( e ) {
        console.info(msg + ` create errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect(e.code).assertEqual(401);
      }

      try {
        let matrix = new drawing.Matrix();
        drawing.ShaderEffect.createLinearGradient({
          x : - 100.1, y : - 100.1
        }, 100, {
          x : - 200, y : 200
        }, 50, undefined, drawing.TileMode.REPEAT, 2, matrix);
        console.info(msg + ' create successed');
      } catch( e ) {
        console.info(msg + ` create errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect(e.code).assertEqual(401);
      }

      try {
        let matrix = new drawing.Matrix();
        drawing.ShaderEffect.createLinearGradient({
          x : - 100.1, y : - 100.1
        }, 100, {
          x : - 200, y : 200
        }, 50, [ 0xFF00FF00, 0xFF00FF00 ], undefined, 2, matrix);
        console.info(msg + ' create successed');
      } catch( e ) {
        console.info(msg + ` create errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect(e.code).assertEqual(401);
      }

      try {
        let matrix = new drawing.Matrix();
        drawing.ShaderEffect.createLinearGradient({
          x : - 100.1, y : - 100.1
        }, 100, {
          x : - 200, y : 200
        }, 50, [ 0xFF00FF00, 0xFF00FF00 ], drawing.TileMode.REPEAT, undefined, matrix);
        console.info(msg + ' create successed');
      } catch( e ) {
        console.info(msg + ` create errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect(e.code).assertEqual(401);
      }

      try {
        let matrix = new drawing.Matrix();
        drawing.ShaderEffect.createLinearGradient({
          x : - 100.1, y : - 100.1
        }, 100, {
          x : - 200, y : 200
        }, 50, [ 0xFF00FF00, 0xFF00FF00 ], drawing.TileMode.REPEAT, 2, undefined);
        console.info(msg + ' create successed');
      } catch( e ) {
        console.info(msg + ` create errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect(e.code).assertEqual(401);
      }
    });

    /**
     * @tc.number    : SUB_BASIC_GRAPHICS_SPECIAL_API_TS_DRAWING_SHADEREFFECT_0603
     * @tc.name      : testShaderEffectCreateConicalGradientMismatch
     * @tc.desc      : Test for testShaderEffectCreateConicalGradientMismatch.
     * @tc.size      : SmallTest
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('testShaderEffectCreateConicalGradientMismatch', DEFAULT, () => {
      const msg = 'testShaderEffectCreateConicalGradientMismatch';

      try {
        let matrix = new drawing.Matrix();
        let shaderEffect = drawing.ShaderEffect.createLinearGradient({
          x : 100.1, y : 100.1
        }, 100, {
          x : 100.1, y : 100.1
        }, 100, [ 0xFF00FF00, 0xFFFF0000 ], drawing.TileMode.REPEAT, 2, matrix, matrix);
        console.info(msg + ' create successed');
      } catch( e ) {
        console.info(msg + ` create errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect(e.code).assertEqual(401);
      }

      try {
        let shaderEffect = drawing.ShaderEffect.createLinearGradient({
          x : 100.1, y : 100.1
        }, 100, {
          x : 100.1, y : 100.1
        }, 100, [ 0xFF00FF00, 0xFFFF0000 ]);
        console.info(msg + ' create successed');
      } catch( e ) {
        console.info(msg + ` create errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect(e.code).assertEqual(401);
      }

      try {
        let matrix = new drawing.Matrix();
        let shaderEffect = drawing.ShaderEffect.createLinearGradient('s', 100, {
          x : 100.1, y : 100.1
        }, 100, [ 0xFF00FF00, 0xFFFF0000 ], drawing.TileMode.REPEAT, 2, matrix);
        console.info(msg + ' create successed');
      } catch( e ) {
        console.info(msg + ` create errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect(e.code).assertEqual(401);
      }
    });

    /**
     * @tc.number    : SUB_BASIC_GRAPHICS_SPECIAL_API_TS_DRAWING_SHADEREFFECT_0604
     * @tc.name      : testShaderEffectCreateConicalGradientAbnormal
     * @tc.desc      : Test for testShaderEffectCreateConicalGradientAbnormal.
     * @tc.size      : SmallTest
     * @tc.type      : Function
     * @tc.level     : Level 0
     */
    it('testShaderEffectCreateConicalGradientAbnormal', DEFAULT, () => {
      const msg = 'testShaderEffectCreateConicalGradientAbnormal';

      try {
        let matrix = new drawing.Matrix();
        drawing.ShaderEffect.createLinearGradient({
          x : 100, y : 100
        }, 100, {
          x : 100, y : 100
        }, 100, [ 0xFF00FF00, 0xFFFF0000 ], 10);
        console.info(msg + ' create successed');
      } catch( e ) {
        console.info(msg + ` create errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect(e.code).assertEqual(401);
      }

      try {
        let matrix = new drawing.Matrix();
        drawing.ShaderEffect.createLinearGradient({
          x : 100, y : 100
        }, 100, {
          x : 100, y : 100
        }, 100, [ 0xFFFFFFFF + 1, 0xFFFF0000 ], drawing.TileMode.REPEAT);
      } catch( e ) {
        console.info(msg + ` create errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect(e.code).assertEqual(401);
      }

      try {
        let matrix = new drawing.Matrix();
        drawing.ShaderEffect.createLinearGradient({
          x : 100, y : 100
        }, 100, {
          x : 100, y : 100
        }, 100, [ - 1, 0xFFFF0000 ], drawing.TileMode.REPEAT);
        console.info(msg + ' create successed');
      } catch( e ) {
        console.info(msg + ` create errorCode is:  ${ e.code } + errormsg is: ${ e.message }`);
        expect(e.code).assertEqual(401);
      }
    });
  })
}