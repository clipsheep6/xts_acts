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
import resourceManager from '@ohos.resourceManager';
import common from '@ohos.app.ability.common';

let filesDir: string | undefined;
let testContext: common.UIAbilityContext;


export default function imageSourceTest() {

  describe('imageSourcrAbilityTest', () => {

    let filePath: string;

    let isEmpty = (temp: ESObject) => {
      if (temp == null || temp == undefined) {
        return true
      }
      return false
    }


    beforeAll(async () => {
      filesDir = AppStorage.get('pathDir')
      testContext = AppStorage.get<common.UIAbilityContext>('testContext') as common.UIAbilityContext;
    })

    const getBuffer = async (fileName: string) => {
      filePath = filesDir + '/' + fileName;
      let file = fs.openSync(filePath);
      const stats = fs.statSync(filePath);
      const fileSize = stats.size;
      const bufferRead = new ArrayBuffer(fileSize)
      fs.readSync(file.fd, bufferRead)
      return bufferRead
    }

    const getImageSource = async (fileName: string, type?: string) => {
      let imageSourceApi: image.ImageSource
      if (type === "buffer") {
        const buffer = await getBuffer(fileName)
        imageSourceApi = image.createImageSource(buffer)
      } else if (type === "uri") {
        const filePath = filesDir + '/' + fileName
        imageSourceApi = image.createImageSource(filePath)
      } else if (type === "rawfile") {
        const resourceMgr: resourceManager.ResourceManager = testContext.createModuleContext("entry").resourceManager
        const rawFileDescriptor = await resourceMgr.getRawFd(fileName)
        imageSourceApi = image.createImageSource(rawFileDescriptor)
      } else if (type === "incremental") {
        const picBuffer = await getBuffer(fileName)
        imageSourceApi = image.CreateIncrementalSource(picBuffer)
        imageSourceApi.updateData(picBuffer.slice(0), false, 0, picBuffer.byteLength)
      } else {
        const filePath = filesDir + "/" + fileName;
        const file = fs.openSync(filePath)
        imageSourceApi = image.createImageSource(file.fd);
      }
      return imageSourceApi
    }

    const getImageSourceOptions = async (fileName: string, Options: image.SourceOptions, type?: string) => {
      let imageSourceApi: image.ImageSource
      if (type === "buffer") {
        const buffer = await getBuffer(fileName)
        imageSourceApi = image.createImageSource(buffer, Options)
      } else if (type === "uri") {
        const filePath = filesDir + '/' + fileName
        imageSourceApi = image.createImageSource(filePath, Options)
      } else if (type === "rawfile") {
        const resourceMgr: resourceManager.ResourceManager = testContext.createModuleContext("entry").resourceManager
        const rawFileDescriptor = await resourceMgr.getRawFd(fileName)
        imageSourceApi = image.createImageSource(rawFileDescriptor, Options)
      } else if (type === "incremental") {
        const picBuffer = await getBuffer(fileName)
        imageSourceApi = image.CreateIncrementalSource(picBuffer, Options)
        imageSourceApi.updateData(picBuffer.slice(0), false, 0, picBuffer.byteLength)
      } else {
        const filePath = filesDir + "/" + fileName;
        const file = fs.openSync(filePath)
        imageSourceApi = image.createImageSource(file.fd, Options);
      }
      return imageSourceApi
    }


    /**
     * @tc.number    : createImageSourceUri0100
     * @tc.name      : SUB_MULTIMEDIA_CREATE_IMAGE_SOURCE_URI_0100
     * @tc.desc      : 1.createImageSource
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_IMAGE_SOURCE_URI_0100', 0, async (done: Function) => {
      const tag: string = "createImageSourceUri0100"
      try {
        let fileName = 'test.jpg'
        let imageSourceApi = await getImageSource(fileName, "uri")
        console.info(`0x0000 ${tag} imageSourceApi ${JSON.stringify(imageSourceApi.supportedFormats)}`);
        expect(isEmpty(imageSourceApi)).assertFalse()
        done()
      } catch (error) {
        console.info(`0x0000, tag failed ${JSON.stringify(error)}`);
        expect().assertFail()
        done()
      }
    })


    /**
     * @tc.number    : createImageSourceUriOption0100
     * @tc.name      : SUB_MULTIMEDIA_CREATE_IMAGE_SOURCE_URI_OPTIONS_0100
     * @tc.desc      : 1.createImageSource
     *                 2.set sourceOptions
     *                 3.return imageSourceApi
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_IMAGE_SOURCE_URI_OPTIONS_0100', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_IMAGE_SOURCE_URI_OPTIONS_0100"
      try {
        let fileName = 'test.jpg'
        let sourceOptions: image.SourceOptions = {
          sourceDensity: 120,
          sourcePixelFormat: image.PixelMapFormat.UNKNOWN
        };
        let imageSourceApi = await getImageSourceOptions(fileName, sourceOptions, "uri")
        console.info(`0x0000 ${tag} imageSourceApi ${JSON.stringify(imageSourceApi)}`);
        expect(isEmpty(imageSourceApi)).assertFalse()
        done()
      } catch (error) {
        console.info(`0x0000 tag failed ${JSON.stringify(error)}`);
        expect().assertFail()
        done()
      }
    })

    /**
     * @tc.number    : createImageSourceUriOption0200
     * @tc.name      : SUB_MULTIMEDIA_CREATE_IMAGE_SOURCE_URI_OPTIONS_0200
     * @tc.desc      : 1.createImageSource
     *                 2.set sourceOptions
     *                 3.return imageSourceApi
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_IMAGE_SOURCE_URI_OPTIONS_0200', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_IMAGE_SOURCE_URI_OPTIONS_0200"
      try {
        let fileName = 'test.jpg'
        let sourceOptions: image.SourceOptions = {
          sourceDensity: 120,
          sourceSize: {
            height: 4, width: 6
          }
        };
        let imageSourceApi = await getImageSourceOptions(fileName, sourceOptions, "uri")
        console.info(`0x0000 ${tag} imageSourceApi ${JSON.stringify(imageSourceApi)}`);
        expect(isEmpty(imageSourceApi)).assertFalse()
        done()
      } catch (error) {
        console.info(`0x0000 tag failed ${JSON.stringify(error)}`);
        expect().assertFail()
        done()
      }
    })

    /**
     * @tc.number    : createImageSourceUriOption0300
     * @tc.name      : SUB_MULTIMEDIA_CREATE_IMAGE_SOURCE_URI_OPTIONS_0200
     * @tc.desc      : 1.createImageSource
     *                 2.set sourcePixelFormat is image.PixelMapFormat.RGBA_8888
     *                 3.return imageSourceApi
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_IMAGE_SOURCE_URI_OPTIONS_0300', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_IMAGE_SOURCE_URI_OPTIONS_0300"
      try {
        let fileName = 'test.jpg'
        let sourceOptions: image.SourceOptions = {
          sourceDensity: 120,
          sourcePixelFormat: image.PixelMapFormat.RGBA_8888,
          sourceSize: {
            height: 4, width: 6
          }
        };
        let imageSourceApi = await getImageSourceOptions(fileName, sourceOptions, "uri")
        console.info(`0x0000 ${tag} imageSourceApi ${JSON.stringify(imageSourceApi)}`);
        expect(isEmpty(imageSourceApi)).assertFalse()
        done()
      } catch (error) {
        console.info(`0x0000 tag failed ${JSON.stringify(error)}`);
        expect().assertFail()
        done()
      }
    })


    /**
     * @tc.number    : createImageSourceFd0100
     * @tc.name      : SUB_MULTIMEDIA_CREATE_IMAGE_SOURCE_FD_0100
     * @tc.desc      : 1.createImageSource
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_IMAGE_SOURCE_FD_0100', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_IMAGE_SOURCE_FD_0100"
      try {
        let fileName = 'test.jpg'
        let imageSourceApi = await getImageSource(fileName)
        console.info(`0x0000 ${tag} imageSourceApi ${JSON.stringify(imageSourceApi)}`);
        expect(isEmpty(imageSourceApi)).assertFalse()
        done()
      } catch (error) {
        console.info(`0x0000 tag failed ${JSON.stringify(error)}`);
        expect().assertFail()
        done()
      }
    })


    /**
     * @tc.number    : createImageSourceFdOption0100
     * @tc.name      : SUB_MULTIMEDIA_CREATE_IMAGE_SOURCE_FD_OPTIONS_0100
     * @tc.desc      : 1.createImageSource
     *                 2.set sourcePixelFormat is image.PixelMapFormat.RGB_888
     *                 3.return imageSourceApi
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_IMAGE_SOURCE_FD_OPTIONS_0100', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_IMAGE_SOURCE_FD_OPTIONS_0100"
      try {
        let fileName = 'test.jpg'
        let sourceOptions: image.SourceOptions = {
          sourceDensity: 120,
          sourcePixelFormat: image.PixelMapFormat.RGB_888,
          sourceSize: {
            height: 12, width: 20
          }
        };
        let imageSourceApi = await getImageSourceOptions(fileName, sourceOptions)
        console.info(`0x0000 ${tag} imageSourceApi ${JSON.stringify(imageSourceApi)}`);
        expect(isEmpty(imageSourceApi)).assertFalse()
        done()
      } catch (error) {
        console.info(`0x0000 tag failed ${JSON.stringify(error)}`);
        expect().assertFail()
        done()
      }
    })


    /**
     * @tc.number    : createImageSourceFdOption0200
     * @tc.name      : SUB_MULTIMEDIA_CREATE_IMAGE_SOURCE_FD_OPTIONS_0200
     * @tc.desc      : 1.createImageSource
     *                 2.set sourcePixelFormat is image.PixelMapFormat.RGBA_F16
     *                 3.return imageSourceApi
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_IMAGE_SOURCE_FD_OPTIONS_0200', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_IMAGE_SOURCE_FD_OPTIONS_0200"
      try {
        let fileName = 'test.jpg'
        let sourceOptions: image.SourceOptions = {
          sourceDensity: 120,
          sourcePixelFormat: image.PixelMapFormat.RGBA_F16,
          sourceSize: {
            height: 12, width: 20
          }
        };
        let imageSourceApi = await getImageSourceOptions(fileName, sourceOptions)
        console.info(`0x0000 ${tag} imageSourceApi ${JSON.stringify(imageSourceApi)}`);
        expect(isEmpty(imageSourceApi)).assertFalse()
        done()
      } catch (error) {
        console.info(`0x0000 tag failed ${JSON.stringify(error)}`);
        expect().assertFail()
        done()
      }
    })

    /**
     * @tc.number    : createImageSourceBuf0100
     * @tc.name      : SUB_MULTIMEDIA_CREATE_IMAGE_SOURCE_BUFFER_0100
     * @tc.desc      : 1.createImageSource
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_IMAGE_SOURCE_BUFFER_0100', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_IMAGE_SOURCE_BUFFER_0100"
      try {
        let fileName = 'test.jpg'
        let imageSourceApi = await getImageSource(fileName, "buffer")
        console.info(`0x0000 ${tag} imageSourceApi ${JSON.stringify(imageSourceApi)}`);
        expect(isEmpty(imageSourceApi)).assertFalse()
        done()
      } catch (error) {
        console.info(`0x0000 tag failed ${JSON.stringify(error)}`);
        expect().assertFail()
        done()
      }
    })


    /**
     * @tc.number    : createImageSourceBufOption0100
     * @tc.name      : SUB_MULTIMEDIA_CREATE_IMAGE_SOURCE_BUFFER_OPTIONS_0100
     * @tc.desc      : 1.createImageSource
     *                 2.set sourcePixelFormat is image.PixelMapFormat.NV21
     *                 3.return imageSourceApi
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_IMAGE_SOURCE_BUFFER_OPTIONS_0100', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_IMAGE_SOURCE_BUFFER_OPTIONS_0100"
      try {
        let fileName = 'test.jpg'
        let sourceOptions: image.SourceOptions = {
          sourceDensity: 120,
          sourcePixelFormat: image.PixelMapFormat.NV21,
          sourceSize: {
            height: 12, width: 20
          }
        };
        let imageSourceApi = await getImageSourceOptions(fileName, sourceOptions, "buffer")
        console.info(`0x0000 ${tag} imageSourceApi ${JSON.stringify(imageSourceApi)}`);
        expect(isEmpty(imageSourceApi)).assertFalse()
        done()
      } catch (error) {
        console.info(`0x0000 tag failed ${JSON.stringify(error)}`);
        expect().assertFail()
        done()
      }
    })

    /**
     * @tc.number    : createImageSourceBufOption0200
     * @tc.name      : SUB_MULTIMEDIA_CREATE_IMAGE_SOURCE_BUFFER_OPTIONS_0200
     * @tc.desc      : 1.createImageSource
     *                 2.set sourcePixelFormat is image.PixelMapFormat.NV12
     *                 3.return imageSourceApi
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_IMAGE_SOURCE_BUFFER_OPTIONS_0200', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_IMAGE_SOURCE_BUFFER_OPTIONS_0200"
      try {
        let fileName = 'test.jpg'
        let sourceOptions: image.SourceOptions = {
          sourceDensity: 120,
          sourcePixelFormat: image.PixelMapFormat.NV12,
          sourceSize: {
            height: 12, width: 20
          }
        };
        let imageSourceApi = await getImageSourceOptions(fileName, sourceOptions, "buffer")
        console.info(`0x0000 ${tag} imageSourceApi ${JSON.stringify(imageSourceApi)}`);
        expect(isEmpty(imageSourceApi)).assertFalse()
        done()
      } catch (error) {
        console.info(`0x0000 tag failed ${JSON.stringify(error)}`);
        expect().assertFail()
        done()
      }
    })


    /**
     * @tc.number    : createImageSourceRawfile0100
     * @tc.name      : SUB_MULTIMEDIA_CREATE_IMAGE_SOURCE_RAWFILE_0100
     * @tc.desc      : 1.createImageSource
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_IMAGE_SOURCE_RAWFILE_0100', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_IMAGE_SOURCE_RAWFILE_0100"
      try {
        let fileName = 'test.jpg'
        let imageSourceApi = await getImageSource(fileName, "rawfile")
        console.info(`0x0000 ${tag} imageSourceApi ${JSON.stringify(imageSourceApi)}`);
        expect(isEmpty(imageSourceApi)).assertFalse()
        done()
      } catch (error) {
        console.info(`0x0000 tag failed ${JSON.stringify(error)}`);
        expect().assertFail()
        done()
      }
    })

    /**
     * @tc.number    : createImageSourceRawfile0200
     * @tc.name      : SUB_MULTIMEDIA_CREATE_IMAGE_SOURCE_RAWFILE_0200
     * @tc.desc      : 1.createImageSource
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_IMAGE_SOURCE_RAWFILE_0200', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_IMAGE_SOURCE_RAWFILE_0200"
      try {
        let fileName = 'test.jpg'
        let sourceOptions: image.SourceOptions = {
          sourceDensity: 120
        };
        let imageSourceApi = await getImageSourceOptions(fileName, sourceOptions, "rawfile")
        console.info(`0x0000 ${tag} imageSourceApi ${JSON.stringify(imageSourceApi)}`);
        expect(isEmpty(imageSourceApi)).assertFalse()
        done()
      } catch (error) {
        console.info(`0x0000 tag failed ${JSON.stringify(error)}`);
        expect().assertFail()
        done()
      }
    })

    /**
     * @tc.number    : createImageSourceRawfile0300
     * @tc.name      : SUB_MULTIMEDIA_CREATE_IMAGE_SOURCE_RAWFILE_0300
     * @tc.desc      : 1.createImageSource
     *                 2.set sourcePixelFormat is image.PixelMapFormat.ALPHA_8
     *                 3.return imageSourceApi
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_IMAGE_SOURCE_RAWFILE_0300', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_IMAGE_SOURCE_RAWFILE_0300"
      try {
        let fileName = 'test.jpg'
        let sourceOptions: image.SourceOptions = {
          sourceDensity: 120,
          sourcePixelFormat: image.PixelMapFormat.ALPHA_8,
          sourceSize: {
            height: 12, width: 20
          }
        };
        let imageSourceApi = await getImageSourceOptions(fileName, sourceOptions, "rawfile")
        console.info(`0x0000 ${tag} imageSourceApi ${JSON.stringify(imageSourceApi)}`);
        expect(isEmpty(imageSourceApi)).assertFalse()
        done()
      } catch (error) {
        console.info(`0x0000 tag failed ${JSON.stringify(error)}`);
        expect().assertFail()
        done()
      }
    })


    /**
     * @tc.number    : CreateIncrementalSourceBuf0100
     * @tc.name      : SUB_MULTIMEDIA_CREATE_INCREMENTAL_BUFFER_0100
     * @tc.desc      : 1.createIncrementalSource
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_INCREMENTAL_BUFFER_0100', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_INCREMENTAL_BUFFER_0100"
      try {
        let fileName = 'test.jpg'
        let imageSourceApi = await getImageSource(fileName, "incremental")
        console.info(`0x0000 ${tag} imageSourceApi ${JSON.stringify(imageSourceApi)}`);
        expect(isEmpty(imageSourceApi)).assertFalse()
        done()
      } catch (error) {
        console.info(`0x0000 tag failed ${JSON.stringify(error)}`);
        expect().assertFail()
        done()
      }
    })


    /**
     * @tc.number    : createIncrementalSourceBufOption0100
     * @tc.name      : SUB_MULTIMEDIA_CREATE_INCREMENTAL_BUFFER_OPTIONS_0100
     * @tc.desc      : 1.createIncrementalSource
     *                 2.set sourceOptions imageSourceApi
     *                 3.return 
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_INCREMENTAL_BUFFER_OPTIONS_0100', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_INCREMENTAL_BUFFER_OPTIONS_0100"
      try {
        let fileName = 'test.jpg'
        let sourceOptions: image.SourceOptions = {
          sourceDensity: 120,
          sourceSize: {
            height: 12, width: 20
          }
        };
        let imageSourceApi = await getImageSourceOptions(fileName, sourceOptions, "incremental")
        console.info(`0x0000 ${tag} imageSourceApi ${JSON.stringify(imageSourceApi)}`);
        expect(isEmpty(imageSourceApi)).assertFalse()
        done()
      } catch (error) {
        console.info(`0x0000 tag failed ${JSON.stringify(error)}`);
        expect().assertFail()
        done()
      }
    })


    /**
     * @tc.number    : createImagePacker0100
     * @tc.name      : SUB_MULTIMEDIA_CREATE_IMAGE_PACKER_0100
     * @tc.desc      : 1.createImagePacker
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_IMAGE_PACKER_0100', 0, (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_IMAGE_PACKER_0100"
      try {
        const imagePackerApi: image.ImagePacker = image.createImagePacker();
        console.info(`0x0000 ${tag} imagePackerApi ${JSON.stringify(imagePackerApi)}`);
        expect(isEmpty(imagePackerApi)).assertFalse()
        done()
      } catch (error) {
        console.info(`0x0000 tag failed ${JSON.stringify(error)}`);
        expect().assertFail()
        done()
      }
    })

  })
}