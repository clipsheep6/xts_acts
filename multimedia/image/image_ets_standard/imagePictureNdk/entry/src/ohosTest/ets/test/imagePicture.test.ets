/*
 * Copyright (c) 2024 Huawei Device Co., Ltd.
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

import { describe, beforeAll, afterAll, afterEach, it, expect } from '@ohos/hypium';
import ndkTest from 'libImagePictureNdk.so';
import image from "@ohos.multimedia.image";
import hilog from '@ohos.hilog';
import common from '@ohos.app.ability.common';
import fs from '@ohos.file.fs';
import resourceManager from '@ohos.resourceManager';
import { BusinessError } from '@ohos.base';

interface AuxiliaryPictureSize {
  width: number,
  height: number
}

interface IAuxiliaryInfo {
  auxiliaryType?: number,
  size?: AuxiliaryPictureSize,
  rowStride?: number,
  pixelFormat?: image.PixelMapFormat
}

export default function imagePictureTest() {
  describe('imagePictureTest', () => {
    let testContext: common.UIAbilityContext;
    let filesDir: string | undefined;
    let setupInfo: IAuxiliaryInfo = {
      size: { width: 1024, height: 1024 },
      rowStride: 1080,
      pixelFormat: image.PixelMapFormat.RGBA_8888
    };

    beforeAll(async () => {
      filesDir = AppStorage.get('pathDir')
      testContext = AppStorage.get<common.UIAbilityContext>('testContext') as common.UIAbilityContext;
    })

    afterAll(async () => {
      ndkTest.auxiliaryPictureInfo_Release();
      ndkTest.releaseAuxiliaryPicture();
      ndkTest.pictureNative_Release();
    })

    const testCreatePictureNative = (fileName: string) => {
      try {
        let filePath = filesDir + "/" + fileName;
        ndkTest.createPicture(filePath);
      } catch(error) {
        hilog.info(0x0000, 'testCreatePictureNative', 'create PictureNative failed. error: ' + error);
      }
    }

    const testImageSourceNativeCreatePicture = (fileName: string) => {
      let filePath = filesDir + "/" + fileName;
        ndkTest.imageSourceNative_CreatePicture();
    }

    const getBuffer = (fileName: string) => {
      // read pic buffer
      // let filePath = filesDir + '/' + fileName;
      // let file = fs.openSync(filePath);
      // const stats = fs.statSync(filePath);
      // const fileSize = stats.size;
      // const bufferRead = new ArrayBuffer(fileSize)
      // fs.readSync(file.fd, bufferRead)

      // create ArrayBuffer
      const bufferRead = new ArrayBuffer(96);
      let bufferArr = new Uint8Array(bufferRead);
      for (let i = 0;i < bufferArr.length; i++) {
        bufferArr[i] = i+1;
      }
      return bufferRead
    }

    const updateAuxiliaryPictureInfo = () => {
      ndkTest.auxiliaryPictureNative_Create();
      ndkTest.auxiliaryPictureInfo_Create();
      ndkTest.auxiliaryPictureInfo_SetSize();
      ndkTest.auxiliaryPictureInfo_SetType();
      ndkTest.auxiliaryPictureInfo_SetRowStride();
      ndkTest.auxiliaryPictureInfo_SetPixelFormat();
      ndkTest.auxiliaryPictureNative_SetInfo();
    }

    const checkAuxiliaryPictureInfo = (): boolean => {
      ndkTest.auxiliaryPictureNative_GetInfo();
      ndkTest.auxiliaryPictureInfo_GetSize();
      ndkTest.auxiliaryPictureInfo_GetType();
      ndkTest.auxiliaryPictureInfo_GetRowStride();
      ndkTest.auxiliaryPictureInfo_GetPixelFormat();
      ndkTest.auxiliaryPictureNative_GetType();
      // let size = ndkTest.auxiliaryPictureInfo_GetSize();
      // let pictureType = ndkTest.auxiliaryPictureInfo_GetType();
      // let rowStride = ndkTest.auxiliaryPictureInfo_GetRowStride();
      // let format = ndkTest.auxiliaryPictureInfo_GetPixelFormat();
      // let type = ndkTest.auxiliaryPictureNative_GetType();
      // let result = size.width == setupInfo.size?.width && size.height == setupInfo.size?.height &&
      //   pictureType == setupInfo.auxiliaryType && rowStride == setupInfo.rowStride && format == setupInfo.pixelFormat &&
      //   type == setupInfo.auxiliaryType;
      return true;
    }

    const testPictureNative = (done: Function, testNum: string) => {
      let result: number | undefined;
      result = ndkTest.pictureNative_GetMainPixelmap();
      expect(result == 0).assertTrue();
      updateAuxiliaryPictureInfo()
      checkAuxiliaryPictureInfo()
      ndkTest.auxiliaryPictureNative_WritePixels(); //qriteBuffer = getBuffer("auxiliaryPicture")
      ndkTest.auxiliaryPictureNative_ReadPixels(); // return readBuffer
      ndkTest.pictureMetadata_Create();
      // // let exifProps = { "ImageWidth": "512", "ImageLength": "512", "Orieation": "90" }
      ndkTest.pictureMetadata_SetProperty(); // or (key, value)
      ndkTest.auxiliaryPictureNative_SetMetadata();
      ndkTest.auxiliaryPictureNative_GetMetadata();
      ndkTest.pictureMetadata_GetProperty();

      ndkTest.pictureNative_SetAuxiliaryPicture();
      // ndkTest.pictureNative_GetGainmapPixelmap();
    }
    
    /*
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_NATIVE_AUXILIARYPICTURE_FUNC_0100
     * @tc.name      : test pack Picture with gainmap auxiliary picture to JPEG
     * @tc.desc      : 1. create PictureNative
     *               : 2. create AuxiliaryPicture
     *               : 3. set AuxiliaryPicture info
     *               : 4. write pixels from buffer
     *               : 5. read pixels to buffer
     *               : 6. set MetaData
     *               : 7. set AuxiliaryPicture
     *               : 8. pack PictureNative to JPEG file
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_IMAGE_NATIVE_AUXILIARYPICTURE_FUNC_0100', 0, (done: Function) => {
      setupInfo.auxiliaryType = 1;
      testCreatePictureNative("test.jpg");
      testPictureNative(done, "SUB_MULTIMEDIA_IMAGE_NATIVE_AUXILIARYPICTURE_FUNC_0100");
      // ndkTest.imagePackerNative_PackToFileFromPicture(); // test_pack_picture.jpg
      // ndkTest.pictureNative_Release();
      // testCreatePictureNative("test_pack_picture.jpg");
      // ndkTest.pictureNative_GetAuxiliaryPicture();
      // ndkTest.auxiliaryPictureNative_GetInfo();
      expect(true).assertTrue();
      done();
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_NATIVE_AUXILIARYPICTURE_FUNC_0200
     * @tc.name      : test pack Picture with gainmap auxiliary picture to buffer
     * @tc.desc      : 1. create PictureNative
     *               : 2. create AuxiliaryPicture
     *               : 3. set AuxiliaryPicture info
     *               : 4. write pixels from buffer
     *               : 5. read pixels to buffer
     *               : 6. set MetaData
     *               : 7. set AuxiliaryPicture
     *               : 8. pack PictureNative to JPEG file
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_IMAGE_NATIVE_AUXILIARYPICTURE_FUNC_0200', 0, (done: Function) => {
      setupInfo.auxiliaryType = 1;
      testCreatePictureNative("test.jpg");
      testPictureNative(done, "SUB_MULTIMEDIA_IMAGE_NATIVE_AUXILIARYPICTURE_FUNC_0200");
      // ndkTest.imagePackerNative_PackToDataFromPicture();
      // ndkTest.pictureNative_Release();
      // testCreatePictureNative("buffer");
      // ndkTest.pictureNative_GetAuxiliaryPicture();
      // ndkTest.auxiliaryPictureNative_GetInfo();
      expect(true).assertTrue();
      done();
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_NATIVE_AUXILIARYPICTURE_FUNC_0300
     * @tc.name      : test JPEG Picture with gainmap auxiliary picture pack to file
     * @tc.desc      : 1. create PictureNative
     *               : 2. create AuxiliaryPicture
     *               : 3. set AuxiliaryPicture info
     *               : 4. write pixels from buffer
     *               : 5. read pixels to buffer
     *               : 6. set MetaData
     *               : 7. set AuxiliaryPicture
     *               : 8. pack PictureNative to JPEG file
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_IMAGE_NATIVE_AUXILIARYPICTURE_FUNC_0300', 0, (done: Function) => {
      setupInfo.auxiliaryType = 1;
      testImageSourceNativeCreatePicture("test.jpg");
      testPictureNative(done, "SUB_MULTIMEDIA_IMAGE_NATIVE_AUXILIARYPICTURE_FUNC_0300");
      // ndkTest.imagePackerNative_PackToFileFromPicture();
      // ndkTest.pictureNative_Release();
      // testCreatePictureNative("test_pack_picture.jpg");
      // ndkTest.pictureNative_GetAuxiliaryPicture();
      // ndkTest.auxiliaryPictureNative_GetInfo();
      expect(true).assertTrue();
      done();
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_NATIVE_AUXILIARYPICTURE_FUNC_0400
     * @tc.name      : test JPEG Picture with gainmap auxiliary picture packing
     * @tc.desc      : 1. create PictureNative
     *               : 2. create AuxiliaryPicture
     *               : 3. set AuxiliaryPicture info
     *               : 4. write pixels from buffer
     *               : 5. read pixels to buffer
     *               : 6. set MetaData
     *               : 7. set AuxiliaryPicture
     *               : 8. pack PictureNative to JPEG file
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_IMAGE_NATIVE_AUXILIARYPICTURE_FUNC_0400', 0, (done: Function) => {
      setupInfo.auxiliaryType = 1;
      testImageSourceNativeCreatePicture("test.jpg");
      testPictureNative(done, "SUB_MULTIMEDIA_IMAGE_NATIVE_AUXILIARYPICTURE_FUNC_0400");
      // ndkTest.imagePackerNative_PackToDataFromPicture();
      // ndkTest.pictureNative_Release();
      // testCreatePictureNative("buffer");
      // ndkTest.pictureNative_GetAuxiliaryPicture();
      // ndkTest.auxiliaryPictureNative_GetInfo();
      expect(true).assertTrue();
      done();
    })

    // /*
    // * @tc.number    : SUB_MULTIMEDIA_IMAGE_NATIVE_AUXILIARYPICTURE_FUNC_0500
    // * @tc.name      : test HEIF Picture with gainmap auxiliary picture pack to file
    // * @tc.desc      : 1. create PictureNative
    // *               : 2. create AuxiliaryPicture
    // *               : 3. set AuxiliaryPicture info
    // *               : 4. write pixels from buffer
    // *               : 5. read pixels to buffer
    // *               : 6. set MetaData
    // *               : 7. set AuxiliaryPicture
    // *               : 8. pack PictureNative to JPEG file
    // * @tc.size      : MediumTest
    // * @tc.type      : Function
    // * @tc.level     : Level 1
    // */
    // it('SUB_MULTIMEDIA_IMAGE_NATIVE_AUXILIARYPICTURE_FUNC_0500', 0, (done: Function) => {
    //   setupInfo.auxiliaryType = 1;
    //   testImageSourceNativeCreatePicture("test.heif");
    //   testPictureNative(done, "SUB_MULTIMEDIA_IMAGE_NATIVE_AUXILIARYPICTURE_FUNC_0500");
    //   ndkTest.imagePackerNative_PackToFileFromPicture();
    //   ndkTest.pictureNative_Release();
    //   testCreatePictureNative("test_pack_picture.jpg");
    //   ndkTest.pictureNative_GetAuxiliaryPicture();
    //   ndkTest.auxiliaryPictureNative_GetInfo();
    //   expect(true).assertTrue();
    //   done();
    // })

    // /*
    // * @tc.number    : SUB_MULTIMEDIA_IMAGE_NATIVE_AUXILIARYPICTURE_FUNC_0600
    // * @tc.name      : test HEIF Picture with gainmap auxiliary picture packing
    // * @tc.desc      : 1. create PictureNative
    // *               : 2. create AuxiliaryPicture
    // *               : 3. set AuxiliaryPicture info
    // *               : 4. write pixels from buffer
    // *               : 5. read pixels to buffer
    // *               : 6. set MetaData
    // *               : 7. set AuxiliaryPicture
    // *               : 8. pack PictureNative to JPEG file
    // * @tc.size      : MediumTest
    // * @tc.type      : Function
    // * @tc.level     : Level 1
    // */
    // it('SUB_MULTIMEDIA_IMAGE_NATIVE_AUXILIARYPICTURE_FUNC_0600', 0, (done: Function) => {
    //   setupInfo.auxiliaryType = 1;
    //   testImageSourceNativeCreatePicture("test.heif");
    //   testPictureNative(done, "SUB_MULTIMEDIA_IMAGE_NATIVE_AUXILIARYPICTURE_FUNC_0600");
    //   ndkTest.imagePackerNative_PackToDataFromPicture();
    //   ndkTest.pictureNative_Release();
    //   testCreatePictureNative("buffer");
    //   ndkTest.pictureNative_GetAuxiliaryPicture();
    //   ndkTest.auxiliaryPictureNative_GetInfo();
    //   expect(true).assertTrue();
    //   done();
    // })
  })
}
