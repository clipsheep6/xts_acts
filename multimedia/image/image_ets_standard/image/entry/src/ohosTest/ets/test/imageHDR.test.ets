/*
 * Copyright (C) 2024 Huawei Device Co., Ltd.
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


import { describe, it, expect, beforeAll } from '@ohos/hypium'
import image from '@ohos.multimedia.image';
import fs from '@ohos.file.fs';
import { BusinessError } from '@ohos.base';
import { display } from '@kit.ArkUI';
import { hdrCapability } from '@kit.ArkGraphics2D';


let tempDir: string | undefined;

let sleep = async (delay: number): Promise<void> => {
  return new Promise((resolve, _) => {
    setTimeout(async () => {
      resolve();
    }, delay);
  });
};

export default function imageSourceTest() {
  describe('ActsCreatePixelMapPackerTest', () => {
    let imageSourceApi: image.ImageSource
    let decodingOptions: image.DecodingOptions = {
      desiredDynamicRange: image.DecodingDynamicRange.AUTO
    }
    let initializationOptions: image.InitializationOptions = {
      editable: true, pixelFormat: 3, size: {
        height: 4, width: 6
      }
    }
    let packingOptions: image.PackingOption = {
      format: 'image/jpeg',
      quality: 100
    };
    let packingOptionsAuto: image.PackingOption = {
      desiredDynamicRange:image.PackingDynamicRange.AUTO,
      format: 'image/jpeg',
      quality: 100
    };
    let packingOptionsSdr: image.PackingOption = {
      desiredDynamicRange:image.PackingDynamicRange.SDR,
      format: 'image/jpeg',
      quality: 100
    };

    let isEmpty = (temp: ESObject) => {
      if (temp == null || temp == undefined) {
        return true
      }
      return false
    }

    beforeAll(async () => {
      tempDir = AppStorage.get('tempDir')
    })

    const getImageSource = async (fileName: string) => {
      // const filePath = filesDir + '/' + fileName
      const filePath = tempDir + '/' + fileName
      console.info(`imageSourceApi_new imageSourceApi  ${filePath}`);
      imageSourceApi = image.createImageSource(filePath)
      return imageSourceApi
    }

    const saveImageToFile = (data: ArrayBuffer, fileName: string) => {
      let filePath = tempDir + '/' + fileName + '.jpg'
      console.log('imageSourceApi_new 0011',filePath)
      let file = fs.openSync(filePath, fs.OpenMode.READ_WRITE | fs.OpenMode.CREATE)
      console.log('imageSourceApi_new 0012 file = ',file.fd)
      fs.writeSync(file.fd, data)
      fs.closeSync(file)
      console.log('imageSourceApi_new 0014')
    }

    const getScreen = async () => {
      let screen = await display.getAllDisplays();
      let flag = screen[0].hdrFormats.length === 0 || screen[0].hdrFormats.includes(hdrCapability.HDRFormat.NONE) ? false : true
      return flag
    }

    /**
     * @tc.number    : createImagePackerJPEGCUVAPromise0100
     * @tc.name      : SUB_MULTIMEDIA_CREATE_IMAGE_PACKER_JPEGCUVA_PROMISE_0100
     * @tc.desc      : 1.create imageSource
     *                 2.create imagePacker
     *                 3.imagePacker packing
     *                 4.create imageSource
     *                 5.create pixelMap
     *                 6.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_IMAGE_PACKER_JPEGCUVA_PROMISE_0100', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_IMAGE_PACKER_JPEGCUVA_PROMISE_0100"
      let imageSourceApi = await getImageSource('JPEGCUVA.jpg')
      console.log(tag , 'imageSourceApi_new imageSourceApi : ' ,imageSourceApi)
      let imagePackerApi = image.createImagePacker();
      console.log(tag , 'imageSourceApi_new imagePackerApi :',imagePackerApi)
      try {
        console.log('imageSourceApi_new 000')
        let data = await imagePackerApi.packing(imageSourceApi, packingOptions)
        //调后报错 13900012  image_source
        // saveImageToFile(data, 'JPEGCUVA')
        saveImageToFile(data, 'image_source')

        const path = tempDir + '/JPEGCUVA.jpg'
        const imageSourceApi_new: image.ImageSource = image.createImageSource(path)
        let pixelMap = await imageSourceApi_new.createPixelMap(decodingOptions)
        let info = await pixelMap.getImageInfo();
        console.info(`0x0000 ${tag} HdrStatus1111111 ${info.isHdr}`);
        expect(info.isHdr).assertFalse()
        done()
      } catch (error) {
        console.info(`0x0000 ${tag} failed11111111111 ${JSON.stringify(error)}`);
        expect(true).assertEqual(isEmpty(error));
        done()
      }
    })

    /**
     * @tc.number    : createImagePackerJPEGCUVACallback0100
     * @tc.name      : SUB_MULTIMEDIA_CREATE_IMAGE_PACKER_JPEGCUVA_CALLBACK_0100
     * @tc.desc      : 1.create imageSource
     *                 2.create imagePacker
     *                 3.imagePacker packing
     *                 4.create imageSource
     *                 5.create pixelMap
     *                 6.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_IMAGE_PACKER_JPEGCUVA_CALLBACK_0100', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_IMAGE_PACKER_JPEGCUVA_CALLBACK_0100"
      imageSourceApi = await getImageSource('JPEGCUVA.jpg')
      let imagePackerApi = image.createImagePacker();
      let screen = await getScreen();
      imagePackerApi.packing(imageSourceApi, packingOptionsAuto, async (error: BusinessError, data: ArrayBuffer) => {
        if (error) {
          console.info(`0x0000 ${tag} failed ${JSON.stringify(error)}`);
          expect(true).assertEqual(isEmpty(error));
          done()
        } else {
          saveImageToFile(data, 'image_source')
          const path = tempDir + '/JPEGCUVA.jpg'
          console.info('writePath is ' + path)
          const imageSourceApi_new: image.ImageSource = image.createImageSource(path)
          let pixelMap = await imageSourceApi_new.createPixelMap(decodingOptions)
          let info = await pixelMap.getImageInfo();
          console.info(`0x0000 ${tag} HdrStatus ${info.isHdr}`);
          screen ? expect(info.isHdr).assertTrue() : expect(info.isHdr).assertFalse()
          done()
        }
      })
    })

    /**
     * @tc.number    : createImagePackerJPEGCUVACallback0200
     * @tc.name      : SUB_MULTIMEDIA_CREATE_IMAGE_PACKER_JPEGCUVA_CALLBACK_0200
     * @tc.desc      : 1.create imageSource
     *                 2.create imagePacker
     *                 3.imagePacker packing
     *                 4.create imageSource
     *                 5.create pixelMap
     *                 6.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_IMAGE_PACKER_JPEGCUVA_CALLBACK_0200', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_IMAGE_PACKER_JPEGCUVA_CALLBACK_0200"
      imageSourceApi = await getImageSource('JPEGCUVA.jpg')
      let imagePackerApi = image.createImagePacker();
      imagePackerApi.packing(imageSourceApi, packingOptionsSdr, async (error: BusinessError, data: ArrayBuffer) => {
        if (error) {
          console.info(`0x0000 ${tag} failed ${JSON.stringify(error)}`);
          expect(true).assertEqual(isEmpty(error));
          done()
        } else {
          saveImageToFile(data, 'image_source')
          const path = tempDir + '/JPEGCUVA.jpg'
          const imageSourceApi_new: image.ImageSource = image.createImageSource(path)
          let pixelMap = await imageSourceApi_new.createPixelMap(decodingOptions)
          let info = await pixelMap.getImageInfo();
          console.info(`0x0000 ${tag} HdrStatus ${info.isHdr}`);
          expect(info.isHdr).assertFalse()
          done()
        }
      })
    })

    /**
     * @tc.number    : createImagePackerPixelMapJPEGCUVA0100
     * @tc.name      : SUB_MULTIMEDIA_CREATE_IMAGE_PACKER_PIXEL_MAP_JPEGCUVA_CALLBACK_0100
     * @tc.desc      : 1.create imageSource
     *                 2.create pixelMap
     *                 3.create imagePacker
     *                 4.imagePacker packing
     *                 5.create imageSource
     *                 6.create pixelMap
     *                 7.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_IMAGE_PACKER_PIXEL_MAP_JPEGCUVA_CALLBACK_0100', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_IMAGE_PACKER_PIXEL_MAP_JPEGCUVA_CALLBACK_0100"
      imageSourceApi = await getImageSource('JPEGCUVA.jpg')
      let pixeMap:image.PixelMap = await imageSourceApi.createPixelMap(decodingOptions)
      let imagePackerApi = image.createImagePacker();
      imagePackerApi.packing(pixeMap, packingOptions, async (error: BusinessError, data: ArrayBuffer) => {
        if (error) {
          console.info(`0x0000 ${tag} failed ${JSON.stringify(error)}`);
          expect(true).assertEqual(isEmpty(error));
          done()
        } else {
          saveImageToFile(data, 'image_source')
          const path = tempDir + '/JPEGCUVA.jpg'
          const imageSourceApi_new: image.ImageSource = image.createImageSource(path)
          let pixelMap = await imageSourceApi_new.createPixelMap(decodingOptions)
          let info = await pixelMap.getImageInfo();
          console.info(`0x0000 ${tag} HdrStatus ${info.isHdr}`);
          expect(info.isHdr).assertFalse()
          done()
        }
      })
    })

    /**
     * @tc.number    : createImagePackerPixelMapPromiseJPEGCUVA0100
     * @tc.name      : SUB_MULTIMEDIA_CREATE_IMAGE_PACKER_PIXEL_MAP_JPEGCUVA_PROMISE_0100
     * @tc.desc      : 1.create imageSource
     *                 2.create pixelMap
     *                 3.create imagePacker
     *                 4.imagePacker packing
     *                 5.create imageSource
     *                 6.create pixelMap
     *                 7.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_IMAGE_PACKER_PIXEL_MAP_JPEGCUVA_PROMISE_0100', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_IMAGE_PACKER_PIXEL_MAP_JPEGCUVA_PROMISE_0100"
      let imageSourceApi = await getImageSource('JPEGCUVA.jpg')
      let imagePackerApi = image.createImagePacker();
      let pixelMap:image.PixelMap = await imageSourceApi.createPixelMap(decodingOptions)
      let screen = await getScreen();
      try {
        let data = await imagePackerApi.packing(pixelMap, packingOptionsAuto)
        saveImageToFile(data, 'image_source')
        const path = tempDir + '/JPEGCUVA.jpg'
        console.info('writePath is ' + path)
        const imageSourceApi_new: image.ImageSource = image.createImageSource(path)
        let pixelMap_new = await imageSourceApi_new.createPixelMap(decodingOptions)
        let info = await pixelMap_new.getImageInfo();
        console.info(`0x0000 ${tag} HdrStatus ${info.isHdr}`);
        screen ? expect(info.isHdr).assertTrue() : expect(info.isHdr).assertFalse()
        done()
      } catch (error) {
        console.info(`0x0000 ${tag} failed ${JSON.stringify(error)}`);
        expect(true).assertEqual(isEmpty(error));
        done()
      }
    })

    /**
     * @tc.number    : createImagePackerPixelMapPromiseJPEGCUVA0200
     * @tc.name      : SUB_MULTIMEDIA_CREATE_IMAGE_PACKER_PIXEL_MAP_JPEGCUVA_PROMISE_0200
     * @tc.desc      : 1.create imageSource
     *                 2.create pixelMap
     *                 3.create imagePacker
     *                 4.imagePacker packing
     *                 5.create imageSource
     *                 6.create pixelMap
     *                 7.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_IMAGE_PACKER_PIXEL_MAP_JPEGCUVA_PROMISE_0200', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_IMAGE_PACKER_PIXEL_MAP_JPEGCUVA_PROMISE_0200"
      let imageSourceApi = await getImageSource('JPEGCUVA.jpg')
      let imagePackerApi = image.createImagePacker();
      let pixelMap:image.PixelMap = await imageSourceApi.createPixelMap(decodingOptions)
      try {
        let data = await imagePackerApi.packing(pixelMap, packingOptionsSdr)
        saveImageToFile(data, 'image_source')
        const path = tempDir + '/' + 'JPEGCUVA' + '.jpg'
        console.info('writePath is ' + path)
        const imageSourceApi_new: image.ImageSource = image.createImageSource(path)
        let pixelMap_new = await imageSourceApi_new.createPixelMap(decodingOptions)
        let info = await pixelMap_new.getImageInfo();
        console.info(`0x0000 ${tag} HdrStatus ${info.isHdr}`);
        expect(info.isHdr).assertFalse()
        done()
      } catch (error) {
        console.info(`0x0000 ${tag} failed ${JSON.stringify(error)}`);
        expect(true).assertEqual(isEmpty(error));
        done()
      }
    })

    /**
     * @tc.number    : createImageToFilePromiseJPEGCUVA0100
     * @tc.name      : SUB_MULTIMEDIA_CREATE_IMAGE_PACKER_TOFILE_JPEGCUVA_PROMISE_0100
     * @tc.desc      : 1.create imageSource
     *                 2.create imagePacker
     *                 3.imagePacker packToFile
     *                 4.create imageSource
     *                 5.create pixelMap
     *                 6.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_IMAGE_PACKER_TOFILE_JPEGCUVA_PROMISE_0100', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_IMAGE_PACKER_TOFILE_JPEGCUVA_PROMISE_0100"
      let path = tempDir + '/JPEGCUVA.jpg'
      const imageSourceApi: image.ImageSource = image.createImageSource(path);
      const filePath: string = tempDir + "/image_source.jpg";
      let file = fs.openSync(filePath, fs.OpenMode.CREATE | fs.OpenMode.READ_WRITE);
      try {
        const imagePackerApi = image.createImagePacker();
        await imagePackerApi.packToFile(imageSourceApi, file.fd, packingOptions)
        const imageSourceApi_new: image.ImageSource = image.createImageSource(path)
        let pixelMap = await imageSourceApi_new.createPixelMap(decodingOptions)
        let info = await pixelMap.getImageInfo();
        console.info(`0x0000 ${tag} HdrStatus ${info.isHdr}`);
        expect(info.isHdr).assertFalse()
        done()
      } catch (error) {
        console.info(`0x0000 ${tag} failed ${JSON.stringify(error)}`);
        expect(true).assertEqual(isEmpty(error));
        done()
      }
    })

    /**
     * @tc.number    : createImageToFileCallbackJPEGCUVA0100
     * @tc.name      : SUB_MULTIMEDIA_CREATE_IMAGE_PACKER_TOFILE_JPEGCUVA_CALLBACK_0100
     * @tc.desc      : 1.create imageSource
     *                 2.create imagePacker
     *                 3.imagePacker packToFile
     *                 4.create imageSource
     *                 5.create pixelMap
     *                 6.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_IMAGE_PACKER_TOFILE_JPEGCUVA_CALLBACK_0100', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_IMAGE_PACKER_TOFILE_JPEGCUVA_CALLBACK_0100"
      let path = tempDir + '/JPEGCUVA.jpg'
      const imageSourceApi: image.ImageSource = image.createImageSource(path);
      let screen = await getScreen();
      const filePath: string = tempDir + "/image_source.jpg";
      let file = fs.openSync(filePath, fs.OpenMode.CREATE | fs.OpenMode.READ_WRITE);
      const imagePackerApi: image.ImagePacker = image.createImagePacker();
      imagePackerApi.packToFile(imageSourceApi, file.fd, packingOptionsAuto, async (error: BusinessError) => {
        if (error) {
          console.info(`0x0000 ${tag} failed ${JSON.stringify(error)}`);
          expect(true).assertEqual(isEmpty(error));
          done()
        } else {
          const path = tempDir + '/JPEGCUVA.jpg'
          const imageSourceApi_new: image.ImageSource = image.createImageSource(path)
          try {
            let pixelMap = await imageSourceApi_new.createPixelMap(decodingOptions)
            let info = await pixelMap.getImageInfo();
            console.info(`0x0000 ${tag} HdrStatus ${info.isHdr}`);
            screen ? expect(info.isHdr).assertTrue() : expect(info.isHdr).assertFalse()
            done()
          } catch (error) {
            console.info(`0x0000 ${tag} failed ${JSON.stringify(error)}`);
            expect(true).assertEqual(isEmpty(error));
            done()
          }
        }
      })
    })

    /**
     * @tc.number    : createImageToFileCallbackJPEGCUVA0200
     * @tc.name      : SUB_MULTIMEDIA_CREATE_IMAGE_PACKER_TOFILE_JPEGCUVA_CALLBACK_0200
     * @tc.desc      : 1.create imageSource
     *                 2.create imagePacker
     *                 3.imagePacker packToFile
     *                 4.create imageSource
     *                 5.create pixelMap
     *                 6.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_IMAGE_PACKER_TOFILE_JPEGCUVA_CALLBACK_0200', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_IMAGE_PACKER_TOFILE_JPEGCUVA_CALLBACK_0200"
      let path = tempDir + '/JPEGCUVA.jpg'
      const imageSourceApi: image.ImageSource = image.createImageSource(path);
      const filePath: string = tempDir + "/image_source.jpg";
      let file = fs.openSync(filePath, fs.OpenMode.CREATE | fs.OpenMode.READ_WRITE);
      const imagePackerApi: image.ImagePacker = image.createImagePacker();
      imagePackerApi.packToFile(imageSourceApi, file.fd, packingOptionsSdr, async (error: BusinessError) => {
        if (error) {
          console.info(`0x0000 ${tag} failed ${JSON.stringify(error)}`);
          expect(true).assertEqual(isEmpty(error));
          done()
        } else {
          const path = tempDir + '/JPEGCUVA.jpg'
          const imageSourceApi_new: image.ImageSource = image.createImageSource(path)
          try {
            let pixelMap = await imageSourceApi_new.createPixelMap(decodingOptions)
            let info = await pixelMap.getImageInfo();
            console.info(`0x0000 ${tag} HdrStatus ${info.isHdr}`);
            expect(info.isHdr).assertFalse()
            done()
          } catch (error) {
            console.info(`0x0000 ${tag} failed ${JSON.stringify(error)}`);
            expect(true).assertEqual(isEmpty(error));
            done()
          }
        }
      })
    })

    /**
     * @tc.number    : createImagePixelMapToFilePromiseJPEGCUVA0100
     * @tc.name      : SUB_MULTIMEDIA_CREATE_IMAGE_PACKER_PIXEL_MAP_TOFILE_JPEGCUVA_PROMISE_0100
     * @tc.desc      : 1.create imagePacker
     *                 2.imagePacker packToFile
     *                 3.create imageSource
     *                 4.create pixelMap
     *                 5.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_IMAGE_PACKER_PIXEL_MAP_TOFILE_JPEGCUVA_PROMISE_0100', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_IMAGE_PACKER_PIXEL_MAP_TOFILE_JPEGCUVA_PROMISE_0100"
      const color: ArrayBuffer = new ArrayBuffer(96); // 96为需要创建的像素buffer大小，取值为：height * width *4
      let opts: image.InitializationOptions = { editable: true, pixelFormat: 3, size: { height: 4, width: 6 } }
      let path = tempDir + '/JPEGCUVA.jpg'
      let pixelmap = await image.createPixelMap(color, opts)
      const filePath: string = tempDir + "/image_source.jpg";
      let file = fs.openSync(filePath, fs.OpenMode.CREATE | fs.OpenMode.READ_WRITE);
      try {
        const imagePackerApi: image.ImagePacker = image.createImagePacker();
        await imagePackerApi.packToFile(pixelmap, file.fd, packingOptions)
        const imageSourceApi_new: image.ImageSource = image.createImageSource(path)
        let pixelMap = await imageSourceApi_new.createPixelMap(decodingOptions)
        let info = await pixelMap.getImageInfo();
        console.info(`0x0000 ${tag} HdrStatus ${info.isHdr}`);
        expect(info.isHdr).assertFalse()
        done()
      } catch (error) {
        console.info(`0x0000 ${tag} failed ${JSON.stringify(error)}`);
        expect(true).assertEqual(isEmpty(error));
        done()
      }
    })

    /**
     * @tc.number    : createImagePixelMapToFileCallbackJPEGCUVA0100
     * @tc.name      : SUB_MULTIMEDIA_CREATE_IMAGE_PACKER_PIXEL_MAP_TOFILE_JPEGCUVA_CALLBACK_0100
     * @tc.desc      : 1.create imagePacker
     *                 2.imagePacker packToFile
     *                 3.create imageSource
     *                 4.create pixelMap
     *                 5.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_IMAGE_PACKER_PIXEL_MAP_TOFILE_JPEGCUVA_CALLBACK_0100', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_IMAGE_PACKER_PIXEL_MAP_TOFILE_JPEGCUVA_CALLBACK_0100"
      const color: ArrayBuffer = new ArrayBuffer(96); // 96为需要创建的像素buffer大小，取值为：height * width *4
      let pixelmap = await image.createPixelMap(color, initializationOptions)
      const filePath: string = tempDir + "/image_source.jpg";
      let file = fs.openSync(filePath, fs.OpenMode.CREATE | fs.OpenMode.READ_WRITE);
      const imagePackerApi: image.ImagePacker = image.createImagePacker();
      let screen = await getScreen();
      imagePackerApi.packToFile(pixelmap, file.fd, packingOptionsAuto, async (error: BusinessError) => {
        if (error) {
          console.info(`0x0000 ${tag} failed ${JSON.stringify(error)}`);
          expect(true).assertEqual(isEmpty(error));
          done()
        } else {
          const path = tempDir + '/JPEGCUVA.jpg'
          const imageSourceApi_new: image.ImageSource = image.createImageSource(path)
          try {
            let pixelMap = await imageSourceApi_new.createPixelMap(decodingOptions)
            let info = await pixelMap.getImageInfo();
            console.info(`0x0000 ${tag} HdrStatus ${info.isHdr}`);
            screen ? expect(info.isHdr).assertTrue() : expect(info.isHdr).assertFalse()
            done()
          } catch (error) {
            console.info(`0x0000 ${tag} failed ${JSON.stringify(error)}`);
            expect(true).assertEqual(isEmpty(error));
            done()
          }
        }
      })
    })

    /**
     * @tc.number    : createImagePixelMapToFileCallbackJPEGCUVA0200
     * @tc.name      : SUB_MULTIMEDIA_CREATE_IMAGE_PACKER_PIXEL_MAP_TOFILE_JPEGCUVA_CALLBACK_0200
     * @tc.desc      : 1.create imagePacker
     *                 2.imagePacker packToFile
     *                 3.create imageSource
     *                 4.create pixelMap
     *                 5.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_IMAGE_PACKER_PIXEL_MAP_TOFILE_JPEGCUVA_CALLBACK_0200', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_IMAGE_PACKER_PIXEL_MAP_TOFILE_JPEGCUVA_CALLBACK_0200"
      const color: ArrayBuffer = new ArrayBuffer(96); // 96为需要创建的像素buffer大小，取值为：height * width *4
      let pixelmap = await image.createPixelMap(color, initializationOptions)
      const filePath: string = tempDir + "/image_source.jpg";
      let file = fs.openSync(filePath, fs.OpenMode.CREATE | fs.OpenMode.READ_WRITE);
      const imagePackerApi: image.ImagePacker = image.createImagePacker();
      imagePackerApi.packToFile(pixelmap, file.fd, packingOptionsSdr, async (error: BusinessError) => {
        if (error) {
          console.info(` ${JSON.stringify(error)}`);
          console.info(`0x0000 ${tag} failed ${JSON.stringify(error)}`);
          expect(true).assertEqual(isEmpty(error));
          done()
        } else {
          const path = tempDir + '/JPEGCUVA.jpg'
          const imageSourceApi_new: image.ImageSource = image.createImageSource(path)
          try {
            let pixelMap = await imageSourceApi_new.createPixelMap(decodingOptions)
            let info = await pixelMap.getImageInfo();
            console.info(`0x0000 ${tag} HdrStatus ${info.isHdr}`);
            expect(info.isHdr).assertFalse()
            done()
          } catch (error) {
            console.info(`0x0000 ${tag} failed ${JSON.stringify(error)}`);
            expect(true).assertEqual(isEmpty(error));
            done()
          }
        }
      })
    })
  })
}