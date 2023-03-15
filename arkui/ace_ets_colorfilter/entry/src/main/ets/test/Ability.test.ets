/*
 * Copyright (c) 2022 Huawei Device Co., Ltd.
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
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from 'hypium/index'
import screenshot from '@ohos.screenshot'
import image from '@ohos.multimedia.image'
const TIME_OUT=5000
export default function abilityTest() {
    describe('ActsAbilityTest', function () {
        beforeAll(function(done) {
          setTimeout(()=>{
            done()
           },TIME_OUT)
        })

        /**
         * @tc.number: ArkUI_Stage_Image_ColorFilter_0100
         * @tc.name: colorFilter
         * @tc.desc: Can modify the solid color image color of Image to red
         */
        it('ArkUI_Stage_Image_ColorFilter_0100',0, async function (done) {
          let screenshotOptions: screenshot.ScreenshotOptions = {
            rotation: 0
          }
          console.log("====>ColorFilter_0100 screenshotOptions:" + JSON.stringify(screenshotOptions))
          screenshot.save(screenshotOptions,(err, data: image.PixelMap) => {
            console.log('====>ColorFilter_0100 save err :' + JSON.stringify(err))
            const area = {
              pixels: new ArrayBuffer(8),
              offset: 0,
              stride: 8,
              region: { size: { height: 1, width: 2 }, x: 360, y: 100 }
            };
            data.readPixels(area, () => {
              console.log('====>ColorFilter_0100 area is :' + JSON.stringify(area))
              var buffer = new Uint8Array(area.pixels);
              console.log('====>ColorFilter_0100 buffer is :' + JSON.stringify(buffer))
              expect(buffer[0]).assertEqual(0)
              expect(buffer[1]).assertEqual(0)
              expect(buffer[2]).assertEqual(255)
              expect(buffer[3]).assertEqual(255)
              done()
              })
            })
        })

        /**
         * @tc.number: ArkUI_Stage_Image_ColorFilter_0200
         * @tc.name: colorFilter
         * @tc.desc: Can modify the solid color image color of Image to green
         */
        it('ArkUI_Stage_Image_ColorFilter_0200',0, async function (done) {
          let screenshotOptions: screenshot.ScreenshotOptions = {
            rotation: 0
          }
          console.log("====>ColorFilter_0200 screenshotOptions:" + JSON.stringify(screenshotOptions))
          screenshot.save(screenshotOptions,(err, data: image.PixelMap) => {
            console.log('====>ColorFilter_0200 save err :' + JSON.stringify(err))
            const area = {
              pixels: new ArrayBuffer(8),
              offset: 0,
              stride: 8,
              region: {
                size: {height: 1, width: 2}, x: 360, y: 200}
            };
            data.readPixels(area, () => {
              console.log('====>ColorFilter_0200 area is :' + JSON.stringify(area))
              var buffer = new Uint8Array(area.pixels);
              console.log('====>ColorFilter_0200 buffer is :' + JSON.stringify(buffer))
              expect(buffer[0]).assertEqual(0)
              expect(buffer[1]).assertEqual(255)
              expect(buffer[2]).assertEqual(0)
              expect(buffer[3]).assertEqual(255)
              done()
            })
          })
        })

        /**
         * @tc.number: ArkUI_Stage_Image_ColorFilter_0300
         * @tc.name: colorFilter
         * @tc.desc: Can modify the solid color image color of Image to blue
         */
        it('ArkUI_Stage_Image_ColorFilter_0300',0, async function (done) {
          let screenshotOptions: screenshot.ScreenshotOptions = {
            rotation: 0
          }
          console.log("====>ColorFilter_0300 screenshotOptions:" + JSON.stringify(screenshotOptions))
          screenshot.save(screenshotOptions,(err, data: image.PixelMap) => {
            console.log('====>ColorFilter_0300 save err :' + JSON.stringify(err))
            const area = {
              pixels: new ArrayBuffer(8),
              offset: 0,
              stride: 8,
              region: {
                size: {height: 1, width: 2}, x: 360, y: 300}
            };
            data.readPixels(area, () => {
              console.log('====>ColorFilter_0300 area is :' + JSON.stringify(area))
              var buffer = new Uint8Array(area.pixels);
              console.log('====>ColorFilter_0300 buffer is :' + JSON.stringify(buffer))
              expect(buffer[0]).assertEqual(255)
              expect(buffer[1]).assertEqual(0)
              expect(buffer[2]).assertEqual(0)
              expect(buffer[3]).assertEqual(255)
              done()
            })
          })
        })

        /**
         * @tc.number: ArkUI_Stage_Image_ColorFilter_0400
         * @tc.name: colorFilter
         * @tc.desc: Can modify the solid color image color of Image to the specified color
         */
        it('ArkUI_Stage_Image_ColorFilter_0400',0, async function (done) {
          let screenshotOptions: screenshot.ScreenshotOptions = {
            rotation: 0
          }
          console.log("====>ColorFilter_0400 screenshotOptions:" + JSON.stringify(screenshotOptions))
          screenshot.save(screenshotOptions,(err, data: image.PixelMap) => {
            console.log('====>ColorFilter_0400 save err :' + JSON.stringify(err))
            const area = {
              pixels: new ArrayBuffer(8),
              offset: 0,
              stride: 8,
              region: {
                size: {height: 1, width: 2}, x: 360, y: 400}
            };
            data.readPixels(area, () => {
              console.log('====>ColorFilter_0400 area is :' + JSON.stringify(area))
              var buffer = new Uint8Array(area.pixels);
              console.log('====>ColorFilter_0400 buffer is :' + JSON.stringify(buffer))
              expect(buffer[0]).assertEqual(128)
              expect(buffer[1]).assertEqual(128)
              expect(buffer[2]).assertEqual(128)
              expect(buffer[3]).assertEqual(255)
              done()
            })
          })
        })

        /**
         * @tc.number: ArkUI_Stage_Image_ColorFilter_0500
         * @tc.name: colorFilter
         * @tc.desc: Can modify the solid color image color of Image to black
         */
        it('ArkUI_Stage_Image_ColorFilter_0500',0, async function (done) {
          let screenshotOptions: screenshot.ScreenshotOptions = {
            rotation: 0
          }
          console.log("====>ColorFilter_0500 screenshotOptions:" + JSON.stringify(screenshotOptions))
          screenshot.save(screenshotOptions,(err, data: image.PixelMap) => {
            console.log('====>ColorFilter_0500 save err :' + JSON.stringify(err))
            const area = {
              pixels: new ArrayBuffer(8),
              offset: 0,
              stride: 8,
              region: {
                size: {height: 1, width: 2}, x: 360, y: 500}
            };
            data.readPixels(area, () => {
              console.log('====>ColorFilter_0500 area is :' + JSON.stringify(area))
              var buffer = new Uint8Array(area.pixels);
              console.log('====>ColorFilter_0500 buffer is :' + JSON.stringify(buffer))
              expect(buffer[0]).assertEqual(0)
              expect(buffer[1]).assertEqual(0)
              expect(buffer[2]).assertEqual(0)
              expect(buffer[3]).assertEqual(255)
              done()
            })
          })
        })

        /**
         * @tc.number: ArkUI_Stage_Image_ColorFilter_0600
         * @tc.name: colorFilter
         * @tc.desc: If the array elements are less than 20, the solid color image color of the Image cannot
         *           be modified to the specified color
         */
        it('ArkUI_Stage_Image_ColorFilter_0600',0, async function (done) {
          let screenshotOptions: screenshot.ScreenshotOptions = {
            rotation: 0
          }
          console.log("====>ColorFilter_0600 screenshotOptions:" + JSON.stringify(screenshotOptions))
          screenshot.save(screenshotOptions,(err, data: image.PixelMap) => {
            console.log('====>ColorFilter_0600 save err :' + JSON.stringify(err))
            const area = {
              pixels: new ArrayBuffer(8),
              offset: 0,
              stride: 8,
              region: {
                size: {height: 1, width: 2}, x: 360, y: 600}
            };
            data.readPixels(area, () => {
              console.log('====>ColorFilter_0600 area is :' + JSON.stringify(area))
              var buffer = new Uint8Array(area.pixels);
              console.log('====>ColorFilter_0600 buffer is :' + JSON.stringify(buffer))
              expect(buffer[0]).assertEqual(255)
              expect(buffer[1]).assertEqual(255)
              expect(buffer[2]).assertEqual(255)
              expect(buffer[3]).assertEqual(255)
              done()
            })
          })
        })

        /**
         * @tc.number: ArkUI_Stage_Image_ColorFilter_0700
         * @tc.name: colorFilter
         * @tc.desc: If the array elements exceed 20, the solid color image color of the Image cannot be modified to
         *           the specified color
         */
        it('ArkUI_Stage_Image_ColorFilter_0700',0, async function (done) {
          let screenshotOptions: screenshot.ScreenshotOptions = {
            rotation: 0
          }
          console.log("====>ColorFilter_0700 screenshotOptions:" + JSON.stringify(screenshotOptions))
          screenshot.save(screenshotOptions,(err, data: image.PixelMap) => {
            console.log('====>ColorFilter_0700 save err :' + JSON.stringify(err))
            const area = {
              pixels: new ArrayBuffer(8),
              offset: 0,
              stride: 8,
              region: {
                size: {height: 1, width: 2}, x: 360, y: 700}
            };
            data.readPixels(area, () => {
              console.log('====>ColorFilter_0700 area is :' + JSON.stringify(area))
              var buffer = new Uint8Array(area.pixels);
              console.log('====>ColorFilter_0700 buffer is :' + JSON.stringify(buffer))
              expect(buffer[0]).assertEqual(255)
              expect(buffer[1]).assertEqual(255)
              expect(buffer[2]).assertEqual(255)
              expect(buffer[3]).assertEqual(255)
              done()
            })
          })
        })

        /**
         * @tc.number: ArkUI_Stage_Image_ColorFilter_0800
         * @tc.name: colorFilter
         * @tc.desc: The parameter value is invalid (less than 0), the solid color image color of the Image
         *           cannot be modified to the specified color
         */
        it('ArkUI_Stage_Image_ColorFilter_0800',0, async function (done) {
          let screenshotOptions: screenshot.ScreenshotOptions = {
            rotation: 0
          }
          console.log("====>ColorFilter_0800 screenshotOptions:" + JSON.stringify(screenshotOptions))
          screenshot.save(screenshotOptions,(err, data: image.PixelMap) => {
            console.log('====>ColorFilter_0800 save err :' + JSON.stringify(err))
            const area = {
              pixels: new ArrayBuffer(8),
              offset: 0,
              stride: 8,
              region: {
                size: {height: 1, width: 2}, x: 360, y: 800}
            };
            data.readPixels(area, () => {
              console.log('====>ColorFilter_0800 area is :' + JSON.stringify(area))
              var buffer = new Uint8Array(area.pixels);
              console.log('====>ColorFilter_0800 buffer is :' + JSON.stringify(buffer))
              expect(buffer[0]).assertEqual(255)
              expect(buffer[1]).assertEqual(255)
              expect(buffer[2]).assertEqual(255)
              expect(buffer[3]).assertEqual(255)
              done()
            })
          })
        })

        /**
         * @tc.number: ArkUI_Stage_Image_ColorFilter_0900
         * @tc.name: colorFilter
         * @tc.desc: The parameter value is invalid (greater than 255), the solid color image color of Image
         *           cannot be modified to the specified color
         */
        it('ArkUI_Stage_Image_ColorFilter_0900',0, async function (done) {
          let screenshotOptions: screenshot.ScreenshotOptions = {
            rotation: 0
          }
          console.log("====>ColorFilter_0900 screenshotOptions:" + JSON.stringify(screenshotOptions))
          screenshot.save(screenshotOptions,(err, data: image.PixelMap) => {
            console.log('====>ColorFilter_0900 save err :' + JSON.stringify(err))
            const area = {
              pixels: new ArrayBuffer(8),
              offset: 0,
              stride: 8,
              region: {
                size: {height: 1, width: 2}, x: 360, y: 900}
            };
            data.readPixels(area, () => {
              console.log('====>ColorFilter_0900 area is :' + JSON.stringify(area))
              var buffer = new Uint8Array(area.pixels);
              console.log('====>ColorFilter_0900 buffer is :' + JSON.stringify(buffer))
              expect(buffer[0]).assertEqual(255)
              expect(buffer[1]).assertEqual(255)
              expect(buffer[2]).assertEqual(255)
              expect(buffer[3]).assertEqual(255)
              done()
            })
          })
        })

        /**
         * @tc.number: ArkUI_Stage_Image_ColorFilter_1000
         * @tc.name: colorFilter
         * @tc.desc: The parameter value is invalid (null), the solid color image color of Image cannot be
         *           modified to the specified color
         */
        it('ArkUI_Stage_Image_ColorFilter_1000',0, async function (done) {
          let screenshotOptions: screenshot.ScreenshotOptions = {
            rotation: 0
          }
          console.log("====>ColorFilter_1000 screenshotOptions:" + JSON.stringify(screenshotOptions))
          screenshot.save(screenshotOptions,(err, data: image.PixelMap) => {
            console.log('====>ColorFilter_01000 save err :' + JSON.stringify(err))
            const area = {
              pixels: new ArrayBuffer(8),
              offset: 0,
              stride: 8,
              region: {
                size: {height: 1, width: 2}, x: 360, y: 1000}
            };
            data.readPixels(area, () => {
              console.log('====>ColorFilter_1000 area is :' + JSON.stringify(area))
              var buffer = new Uint8Array(area.pixels);
              console.log('====>ColorFilter_1000 buffer is :' + JSON.stringify(buffer))
              expect(buffer[0]).assertEqual(255)
              expect(buffer[1]).assertEqual(255)
              expect(buffer[2]).assertEqual(255)
              expect(buffer[3]).assertEqual(255)
              done()
            })
          })
        })

        /**
         * @tc.number: ArkUI_Stage_Image_ColorFilter_1100
         * @tc.name: colorFilter
         * @tc.desc: The parameter value is invalid (undefined), the solid color image color of Image cannot be
         *           modified to the specified color
         */
        it('ArkUI_Stage_Image_ColorFilter_1100',0, async function (done) {
          let screenshotOptions: screenshot.ScreenshotOptions = {
            rotation: 0
          }
          console.log("====>ColorFilter_1100 screenshotOptions:" + JSON.stringify(screenshotOptions))
          screenshot.save(screenshotOptions,(err, data: image.PixelMap) => {
            console.log('====>ColorFilter_1100 save err :' + JSON.stringify(err))
            const area = {
              pixels: new ArrayBuffer(8),
              offset: 0,
              stride: 8,
              region: {
                size: {height: 1, width: 2}, x: 360, y: 1100}
            };
            data.readPixels(area, () => {
              console.log('====>ColorFilter_1100 area is :' + JSON.stringify(area))
              var buffer = new Uint8Array(area.pixels);
              console.log('====>ColorFilter_1100 buffer is :' + JSON.stringify(buffer))
              expect(buffer[0]).assertEqual(255)
              expect(buffer[1]).assertEqual(255)
              expect(buffer[2]).assertEqual(255)
              expect(buffer[3]).assertEqual(255)
              done()
            })
          })
        })

    })
}