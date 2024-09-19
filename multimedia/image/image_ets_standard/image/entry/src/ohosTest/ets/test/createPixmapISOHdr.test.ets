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
import resourceManager from '@ohos.resourceManager';
import common from '@ohos.app.ability.common';
import { display } from '@kit.ArkUI';
import { hdrCapability } from '@kit.ArkGraphics2D';

let filesDir: string | undefined;
let testContext: common.UIAbilityContext;

export default function imageSourceTest() {
  describe('ActsCreatePixelMapISOHdrTest', () => {
    let filePath: string;
    let screen: boolean = false
    let filePaths: Array<string> =
      ["CUVAHdr.jpg", "JPEGISOSingle.jpg", "ISOHEIFHDR.heic", "JPEGVividSingle.jpg", "VIVIDHEIF1.heic", "JPEGCUVA.jpg",
        "NonHdr.jpg"]
    let imageSourceApi: image.ImageSource
    let decodingOptionsAuto: image.DecodingOptions = {
      desiredDynamicRange: image.DecodingDynamicRange.AUTO
    }
    let decodingOptionsHdr: image.DecodingOptions = {
      desiredDynamicRange: image.DecodingDynamicRange.HDR
    }
    let decodingOptionsSdr: image.DecodingOptions = {
      desiredDynamicRange: image.DecodingDynamicRange.SDR
    }

    //非YUV
    let optionsAutoFormat2: image.DecodingOptions = {
      desiredDynamicRange: image.DecodingDynamicRange.AUTO,
      desiredPixelFormat: 2,
    }
    let optionsHdrFormat2: image.DecodingOptions = {
      desiredDynamicRange: image.DecodingDynamicRange.HDR,
      desiredPixelFormat: 2,
    }
    let optionsSdrFormat2: image.DecodingOptions = {
      desiredDynamicRange: image.DecodingDynamicRange.SDR,
      desiredPixelFormat: 2,
    }
    let optionsAutoFormat3: image.DecodingOptions = {
      desiredDynamicRange: image.DecodingDynamicRange.AUTO,
      desiredPixelFormat: 3,
    }
    let optionsHdrFormat3: image.DecodingOptions = {
      desiredDynamicRange: image.DecodingDynamicRange.HDR,
      desiredPixelFormat: 3,
    }
    let optionsSdrFormat3: image.DecodingOptions = {
      desiredDynamicRange: image.DecodingDynamicRange.SDR,
      desiredPixelFormat: 3,
    }
    let optionsAutoFormat4: image.DecodingOptions = {
      desiredDynamicRange: image.DecodingDynamicRange.AUTO,
      desiredPixelFormat: 4,
    }
    let optionsHdrFormat4: image.DecodingOptions = {
      desiredDynamicRange: image.DecodingDynamicRange.HDR,
      desiredPixelFormat: 4,
    }
    let optionsSdrFormat4: image.DecodingOptions = {
      desiredDynamicRange: image.DecodingDynamicRange.SDR,
      desiredPixelFormat: 4,
    }
    let optionsAutoFormat5: image.DecodingOptions = {
      desiredDynamicRange: image.DecodingDynamicRange.AUTO,
      desiredPixelFormat: 5,
    }
    let optionsHdrFormat5: image.DecodingOptions = {
      desiredDynamicRange: image.DecodingDynamicRange.HDR,
      desiredPixelFormat: 5,
    }
    let optionsSdrFormat5: image.DecodingOptions = {
      desiredDynamicRange: image.DecodingDynamicRange.SDR,
      desiredPixelFormat: 5,
    }
    let optionsAutoFormat7: image.DecodingOptions = {
      desiredDynamicRange: image.DecodingDynamicRange.AUTO,
      desiredPixelFormat: 7,
    }
    let optionsHdrFormat7: image.DecodingOptions = {
      desiredDynamicRange: image.DecodingDynamicRange.HDR,
      desiredPixelFormat: 7,
    }
    let optionsSdrFormat7: image.DecodingOptions = {
      desiredDynamicRange: image.DecodingDynamicRange.SDR,
      desiredPixelFormat: 7,
    }
    let optionsAutoFormat10: image.DecodingOptions = {
      desiredDynamicRange: image.DecodingDynamicRange.AUTO,
      desiredPixelFormat: 10,
    }
    let optionsHdrFormat10: image.DecodingOptions = {
      desiredDynamicRange: image.DecodingDynamicRange.HDR,
      desiredPixelFormat: 10,
    }
    let optionsSdrFormat10: image.DecodingOptions = {
      desiredDynamicRange: image.DecodingDynamicRange.SDR,
      desiredPixelFormat: 10,
    }

    //YUV
    let optionsAutoFormat8: image.DecodingOptions = {
      desiredDynamicRange: image.DecodingDynamicRange.AUTO,
      desiredPixelFormat: 8,
      desiredSize: { width: 3, height: 3 }
    }
    let optionsHdrFormat8: image.DecodingOptions = {
      desiredDynamicRange: image.DecodingDynamicRange.HDR,
      desiredPixelFormat: 8,
      desiredSize: { width: 6, height: 6 }
    }
    let optionsSdrFormat8: image.DecodingOptions = {
      desiredDynamicRange: image.DecodingDynamicRange.SDR,
      desiredPixelFormat: 8,
      desiredSize: { width: 6, height: 3 }
    }
    let optionsAutoFormat9: image.DecodingOptions = {
      desiredDynamicRange: image.DecodingDynamicRange.AUTO,
      desiredPixelFormat: 9,
      desiredSize: { width: 3, height: 6 }
    }
    let optionsHdrFormat9: image.DecodingOptions = {
      desiredDynamicRange: image.DecodingDynamicRange.HDR,
      desiredPixelFormat: 9,
      desiredSize: { width: 3, height: 3 }
    }
    let optionsSdrFormat9: image.DecodingOptions = {
      desiredDynamicRange: image.DecodingDynamicRange.SDR,
      desiredPixelFormat: 9,
      desiredSize: { width: 6, height: 6 }
    }
    let optionsAutoFormat11: image.DecodingOptions = {
      desiredDynamicRange: image.DecodingDynamicRange.AUTO,
      desiredPixelFormat: 11,
      desiredSize: { width: 6, height: 3 }
    }
    let optionsHdrFormat11: image.DecodingOptions = {
      desiredDynamicRange: image.DecodingDynamicRange.HDR,
      desiredPixelFormat: 11,
      desiredSize: { width: 3, height: 6 }
    }
    let optionsSdrFormat11: image.DecodingOptions = {
      desiredDynamicRange: image.DecodingDynamicRange.SDR,
      desiredPixelFormat: 11,
      desiredSize: { width: 3, height: 3 }
    }
    let optionsAutoFormat12: image.DecodingOptions = {
      desiredDynamicRange: image.DecodingDynamicRange.AUTO,
      desiredPixelFormat: 12,
      desiredSize: { width: 6, height: 6 }
    }
    let optionsHdrFormat12: image.DecodingOptions = {
      desiredDynamicRange: image.DecodingDynamicRange.HDR,
      desiredPixelFormat: 12,
      desiredSize: { width: 6, height: 3 }
    }
    let optionsSdrFormat12: image.DecodingOptions = {
      desiredDynamicRange: image.DecodingDynamicRange.SDR,
      desiredPixelFormat: 12,
      desiredSize: { width: 3, height: 6 }
    }
    
    let isEmpty = (temp: ESObject) => {
      if (temp == null || temp == undefined) {
        return true
      }
      return false
    }

    beforeAll(async () => {
      filesDir = AppStorage.get('pathDir')
      testContext = AppStorage.get<common.UIAbilityContext>('testContext') as common.UIAbilityContext;
      screen = await getScreen();
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

    const getImageSource = async (fileName: string, type: string) => {
      if (type === "buffer") {
        const buffer = await getBuffer(fileName)
        imageSourceApi = image.createImageSource(buffer)
      } else if (type === "uri") {
        const filePath = filesDir + '/' + fileName
        imageSourceApi = image.createImageSource(filePath)
      } else if (type === "rawfile") {
        const resourceMgr: resourceManager.ResourceManager = testContext.createModuleContext("entry_test").resourceManager
        const rawFileDescriptor = await resourceMgr.getRawFd(fileName)
        imageSourceApi = image.createImageSource(rawFileDescriptor)
      } else if (type === "incremental") {
        const picBuffer = await getBuffer(fileName)
        imageSourceApi = image.CreateIncrementalSource(picBuffer)
        await imageSourceApi.updateData(picBuffer,true,0,picBuffer.slice(0).byteLength)
      } else if (type === "fd") {
        const filePath = filesDir + "/" + fileName;
        const file = fs.openSync(filePath)
        imageSourceApi = image.createImageSource(file.fd);
      }
      return imageSourceApi
    }
    
    const getScreen = async () => {
      let screen = await display.getAllDisplays();
      let flag = screen[0].hdrFormats.length === 0 || screen[0].hdrFormats.includes(hdrCapability.HDRFormat.NONE) ? false : true
      return flag
    }


    /**
     * @tc.number    : createPixelMapCUVAHdrUri0100
     * @tc.name      : SUB_MULTIMEDIA_CREATE_PIXEL_MAP_CUVAHDR_URI_0100
     * @tc.desc      : 1.create imageSource
     *                 2.create pixelMap
     *                 3.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_PIXEL_MAP_CUVAHDR_URI_0100', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_PIXEL_MAP_CUVAHDR_URI_0100"
      try {
        console.log('PixelMap isHdr 111 :',filePaths[0])
        let imageSourceApi = await getImageSource(filePaths[0],'uri')
        console.log('PixelMap isHdr 2 :',imageSourceApi)
        let pixelMap = await imageSourceApi.createPixelMap()
        let info = await pixelMap.getImageInfo();
        console.log('PixelMap isHdr is :' + info.isHdr)
        expect(info.isHdr).assertFalse()
        expect(info.pixelFormat == image.PixelMapFormat.RGBA_8888).assertTrue()
        done()
      } catch (error) {
        console.log(`0x0000 PixelMap isHdr4 ${tag} failed ${JSON.stringify(error?.code)}`);
        expect().assertFail()
        done()
      }
    })

    /**
     * @tc.number    : createPixelMapCUVAHdrUri0200
     * @tc.name      : SUB_MULTIMEDIA_CREATE_PIXEL_MAP_CUVAHDR_URI_0200
     * @tc.desc      : 1.create imageSource
     *                 2.set decodingOptions is AUTO
     *                 3.create pixelMap
     *                 4.pixelMap getImageInfo
     *                 5.pixelMap toSdr
     *                 6.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_PIXEL_MAP_CUVAHDR_URI_0200', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_PIXEL_MAP_CUVAHDR_URI_0200"
      try {
        let imageSourceApi = await getImageSource(filePaths[0],'uri')
        let pixelMap = await imageSourceApi.createPixelMap(decodingOptionsAuto)
        let info = await pixelMap.getImageInfo();
        console.log('PixelMapisHdr is info:' + JSON.stringify(info))
        screen ? expect(info.isHdr).assertTrue() : expect(info.isHdr).assertFalse()
        screen ? expect(info.pixelFormat == image.PixelMapFormat.RGBA_1010102).assertTrue() : expect(info.pixelFormat == image.PixelMapFormat.RGBA_8888).assertTrue()
        await pixelMap.toSdr()
        info = await pixelMap.getImageInfo();
        expect(info.isHdr).assertFalse()
        done()
      } catch (error) {
        console.log(`0x0000 ${tag} failed ${error}`);
        expect(error.code).assertEqual("62980137")
        done()
      }
    })

    /**
     * @tc.number    : createPixelMapCUVAHdrUri0300
     * @tc.name      : SUB_MULTIMEDIA_CREATE_PIXEL_MAP_CUVAHDR_URI_0300
     * @tc.desc      : 1.create imageSource
     *                 2.set decodingOptions is SDR
     *                 3.create pixelMap
     *                 4.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_PIXEL_MAP_CUVAHDR_URI_0300', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_PIXEL_MAP_CUVAHDR_URI_0300"
      try {
        let imageSourceApi = await getImageSource(filePaths[0],'uri')
        let pixelMap = await imageSourceApi.createPixelMap(decodingOptionsSdr)
        let info = await pixelMap.getImageInfo();
        console.log('PixelMap isHdr is :' + info.isHdr)
        expect(info.isHdr).assertFalse()
        expect(info.pixelFormat == image.PixelMapFormat.RGBA_8888).assertTrue()
        done()
      } catch (error) {
        console.log(`0x0000 ${tag} failed ${error}`);
        expect().assertFail()
        done()
      }
    })

    /**
     * @tc.number    : createPixelMapCUVAHdrUri0400
     * @tc.name      : SUB_MULTIMEDIA_CREATE_PIXEL_MAP_CUVAHDR_URI_0400
     * @tc.desc      : 1.create imageSource
     *                 2.set decodingOptions is HDR
     *                 3.create pixelMap
     *                 4.pixelMap getImageInfo
     *                 5.pixelMap toSdr
     *                 6.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_PIXEL_MAP_CUVAHDR_URI_0400', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_PIXEL_MAP_CUVAHDR_URI_0400"
      try {
        let imageSourceApi = await getImageSource(filePaths[0],'uri')
        let pixelMap = await imageSourceApi.createPixelMap(decodingOptionsHdr)
        let info = await pixelMap.getImageInfo();
        console.log('PixelMap isHdr is :' + info.isHdr)
        screen ? expect(info.isHdr).assertTrue() : expect(info.isHdr).assertFalse()
        screen ? expect(info.pixelFormat == image.PixelMapFormat.RGBA_1010102).assertTrue() : expect(info.pixelFormat == image.PixelMapFormat.RGBA_8888).assertTrue()
        await pixelMap.toSdr() //板子不支持hdr，黄区在验验
        info = await pixelMap.getImageInfo();
        expect(info.isHdr).assertFalse()
        done()
      } catch (error) {
        console.log(`0x0000 ${tag} failed ${JSON.stringify(error)}`);
        expect(error.code).assertEqual("62980137");
        done()
      }
    })

    /**
     * @tc.number    : createPixelMapCUVAHdrRawfileCallback0100
     * @tc.name      : SUB_MULTIMEDIA_CREATE_PIXEL_MAP_CUVAHDR_RAWFILE_0100
     * @tc.desc      : 1.create imageSource
     *                 2.create pixelMap callback
     *                 3.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_PIXEL_MAP_CUVAHDR_RAWFILE_0100', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_PIXEL_MAP_CUVAHDR_RAWFILE_0100"
      console.log('testContext===== tag: ',tag)
      let imageSoureApi = await getImageSource(filePaths[0],'rawfile')
      console.log('testContext=====  imageSourceApi = ' ,JSON.stringify(imageSourceApi))
      imageSoureApi.createPixelMap(async (error:BusinessError,pixeMap:image.PixelMap) => {
        if(error != undefined) {
          console.log('testContext=====  createPixelMap error :' + error)
          expect().assertFail()
          done()
        } else {
          let info = await pixeMap.getImageInfo();
          console.log('testContext=====  PixelMap isHdr is  :' + tag + JSON.stringify(info))
          expect(info.isHdr).assertFalse()
          expect(info.pixelFormat == image.PixelMapFormat.RGBA_8888).assertTrue()
          done()
        }
      })
    })

    /**
     * @tc.number    : createPixelMapCUVAHdrRawfileCallback0200
     * @tc.name      : SUB_MULTIMEDIA_CREATE_PIXEL_MAP_CUVAHDR_RAWFILE_0200
     * @tc.desc      : 1.create imageSource
     *                 2.set desiredDynamicRange is AUTO
     *                 3.create pixelMap callback
     *                 4.pixelMap getImageInfo
     *                 5.pixelMap toSdr
     *                 6.pixelMap getImageInfo
     *
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_PIXEL_MAP_CUVAHDR_RAWFILE_0200', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_PIXEL_MAP_CUVAHDR_RAWFILE_0200"
      let imageSoureApi = await getImageSource(filePaths[0],'rawfile')
      imageSoureApi.createPixelMap(decodingOptionsAuto,async (error:BusinessError,pixeMap:image.PixelMap) => {
        if(error != undefined) {
          console.error('0x0000   createPixelMap error :' + error)
          expect().assertFail()
          done()
        } else {
          let info = await pixeMap.getImageInfo();
          console.log('0x0000   PixelMap isHdr is  :' + tag + info.isHdr)
          screen ? expect(info.isHdr).assertTrue() : expect(info.isHdr).assertFalse()
          screen ? expect(info.pixelFormat == image.PixelMapFormat.RGBA_1010102).assertTrue() : expect(info.pixelFormat == image.PixelMapFormat.RGBA_8888).assertTrue()
          //黄区验验
          try{
            await pixeMap.toSdr()
            info = await pixeMap.getImageInfo();
            expect(info.isHdr).assertFalse()
            done()
          }catch(error){
            console.log(`0x0000 ${tag} failed ${JSON.stringify(error)}`);
            expect(error.code).assertEqual("62980137")
            done()
          }
        }
      })
    })

    /**
     * @tc.number    : createPixelMapCUVAHdrRawfileCallback0300
     * @tc.name      : SUB_MULTIMEDIA_CREATE_PIXEL_MAP_CUVAHDR_RAWFILE_0300
     * @tc.desc      : 1.create imageSource
     *                 2.set desiredDynamicRange is SDR
     *                 3.create pixelMap callback
     *                 4.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_PIXEL_MAP_CUVAHDR_RAWFILE_0300', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_PIXEL_MAP_CUVAHDR_RAWFILE_0300"
      let imageSoureApi = await getImageSource(filePaths[0],'rawfile')
      imageSoureApi.createPixelMap(decodingOptionsSdr,async (error:BusinessError,pixeMap:image.PixelMap) => {
        if(error != undefined) {
          console.error('0x0000   createPixelMap error :' + error)
          expect().assertFail()
          done()
        } else {
          let info = await pixeMap.getImageInfo();
          console.log('0x0000   PixelMap isHdr is  :' + tag + info.isHdr)
          expect(info.isHdr).assertFalse()
          expect(info.pixelFormat == image.PixelMapFormat.RGBA_8888).assertTrue()
          done()
        }
      })
    })

    /**
     * @tc.number    : createPixelMapCUVAHdrRawfileCallback0400
     * @tc.name      : SUB_MULTIMEDIA_CREATE_PIXEL_MAP_CUVAHDR_RAWFILE_0400
     * @tc.desc      : 1.create imageSource
     *                 2.set desiredDynamicRange is HDR
     *                 3.create pixelMap callback
     *                 4.pixelMap getImageInfo
     *                 5.pixelMap toSdr
     *                 6.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_PIXEL_MAP_CUVAHDR_RAWFILE_0400', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_PIXEL_MAP_CUVAHDR_RAWFILE_0400"
      let imageSoureApi = await getImageSource(filePaths[0],'rawfile')
      imageSoureApi.createPixelMap(decodingOptionsHdr,async (error:BusinessError,pixeMap:image.PixelMap) => {
        if(error != undefined) {
          console.error('0x0000   createPixelMap error :' + error)
          expect().assertFail()
          done()
        } else {
          let info = await pixeMap.getImageInfo();
          console.log('0x0000   PixelMap isHdr is  :' + tag + info.isHdr)
          screen ? expect(info.isHdr).assertTrue() : expect(info.isHdr).assertFalse()
          screen ? expect(info.pixelFormat == image.PixelMapFormat.RGBA_1010102).assertTrue() : expect(info.pixelFormat == image.PixelMapFormat.RGBA_8888).assertTrue()
          try{
            await pixeMap.toSdr()
            info = await pixeMap.getImageInfo();
            expect(info.isHdr).assertFalse()
            done()
          }catch(error){
            console.log(`0x0000 createPixelMap ${JSON.stringify(error)}`);
            expect(error.code).assertEqual("62980137");
            done()
          }
        }
      })
    })

    /**
     * @tc.number    : createPixelMapCUVAHdrFdSync0100
     * @tc.name      : SUB_MULTIMEDIA_CREATE_PIXEL_MAP_CUVAHDR_FD_SYNC_0100
     * @tc.desc      : 1.create imageSource
     *                 2.set desiredDynamicRange is AUTO
     *                 3.createPixelMapSync
     *                 4.pixelMap getImageInfo
     *                 5.pixelMap toSdr
     *                 6.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_PIXEL_MAP_CUVAHDR_FD_SYNC_0100', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_PIXEL_MAP_CUVAHDR_FD_SYNC_0100"
      try {
        let imageSoureApi = await getImageSource(filePaths[0],'fd')
        let pixelMap: image.PixelMap = imageSoureApi.createPixelMapSync(decodingOptionsAuto);
        let info = await pixelMap.getImageInfo();
        console.log('PixelMap isHdr is :' + info.isHdr)
        screen ? expect(info.isHdr).assertTrue() : expect(info.isHdr).assertFalse()
        screen ? expect(info.pixelFormat == image.PixelMapFormat.RGBA_1010102).assertTrue() : expect(info.pixelFormat == image.PixelMapFormat.RGBA_8888).assertTrue()
        await pixelMap.toSdr()
        info = await pixelMap.getImageInfo();
        expect(info.isHdr).assertFalse()
        done()
      } catch (error) {
        console.log(`0x0000 ${tag} failed ${JSON.stringify(error)}`);
        expect(error.code).assertEqual("62980137");
        done()
      }
    })

    /**
     * @tc.number    : createPixelMapCUVAHdrFdSync0200
     * @tc.name      : SUB_MULTIMEDIA_CREATE_PIXEL_MAP_CUVAHDR_FD_SYNC_0200
     * @tc.desc      : 1.create imageSource
     *                 2.set desiredDynamicRange is SDR
     *                 3.createPixelMapSync
     *                 4.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_PIXEL_MAP_CUVAHDR_FD_SYNC_0200', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_PIXEL_MAP_CUVAHDR_FD_SYNC_0200"
      try {
        let imageSoureApi = await getImageSource(filePaths[0],'fd')
        let pixelMap: image.PixelMap = imageSoureApi.createPixelMapSync(decodingOptionsSdr);
        let info = await pixelMap.getImageInfo();
        console.log('PixelMap isHdr is :' + info.isHdr)
        expect(info.isHdr).assertFalse()
        expect(info.pixelFormat == image.PixelMapFormat.RGBA_8888).assertTrue()
        done()
      } catch (error) {
        console.log(`0x0000 ${tag} failed ${JSON.stringify(error)}`);
        expect().assertFail()
        done()
      }
    })

    /**
     * @tc.number    : createPixelMapCUVAHdrRFdSync0300
     * @tc.name      : SUB_MULTIMEDIA_CREATE_PIXEL_MAP_CUVAHDR_FD_SYNC_0300
     * @tc.desc      : 1.create imageSource
     *                 2.set desiredDynamicRange is HDR
     *                 3.createPixelMapSync
     *                 4.pixelMap getImageInfo
     *                 5.pixelMap toSdr
     *                 6.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_PIXEL_MAP_CUVAHDR_FD_SYNC_0300', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_PIXEL_MAP_CUVAHDR_FD_SYNC_0300"
      try {
        let imageSoureApi = await getImageSource(filePaths[0],'fd')
        let pixelMap: image.PixelMap = imageSoureApi.createPixelMapSync(decodingOptionsHdr);
        let info = await pixelMap.getImageInfo();
        console.log('PixelMap isHdr is :' + info.isHdr)
        screen ? expect(info.isHdr).assertTrue() : expect(info.isHdr).assertFalse()
        screen ? expect(info.pixelFormat == image.PixelMapFormat.RGBA_1010102).assertTrue() : expect(info.pixelFormat == image.PixelMapFormat.RGBA_8888).assertTrue()
        await pixelMap.toSdr()
        info = await pixelMap.getImageInfo();
        expect(info.isHdr).assertFalse()
        done()
      } catch (error) {
        console.log(`0x0000 ${tag} failed ${JSON.stringify(error)}`);
        expect(error.code).assertEqual("62980137");
        done()
      }
    })

    /**
     * @tc.number    : createPixelMapCUVAHdrFdSync0400
     * @tc.name      : SUB_MULTIMEDIA_CREATE_PIXEL_MAP_CUVAHDR_FD_SYNC_0400
     * @tc.desc      : 1.create imageSource
     *                 2.createPixelMapSync
     *                 3.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_PIXEL_MAP_CUVAHDR_FD_SYNC_0400', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_PIXEL_MAP_CUVAHDR_FD_SYNC_0400"
      try {
        let imageSoureApi = await getImageSource(filePaths[0],'fd')
        let pixelMap: image.PixelMap = imageSoureApi.createPixelMapSync();
        let info = await pixelMap.getImageInfo();
        console.log('PixelMap isHdr is :' + info.isHdr)
        expect(info.isHdr).assertFalse()
        expect(info.pixelFormat == image.PixelMapFormat.RGBA_8888).assertTrue()
        done()
      } catch (error) {
        console.log(`0x0000 ${tag} failed ${JSON.stringify(error)}`);
        expect().assertFail()
        done()
      }
    })

    /**
     * @tc.number    : createPixelMapCUVAHdrBuffer0100
     * @tc.name      : SUB_MULTIMEDIA_CREATE_PIXEL_MAP_CUVAHDR_BUF_SYNC_0100
     * @tc.desc      : 1.create imageSource
     *                 2.createPixelMap callback
     *                 3.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_PIXEL_MAP_CUVAHDR_BUF_SYNC_0100', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_PIXEL_MAP_CUVAHDR_BUF_SYNC_0100"
      let imageSoureApi = await getImageSource(filePaths[0],'buffer')
      imageSoureApi.createPixelMap(async (error:BusinessError,pixeMap:image.PixelMap) => {
        if(error != undefined) {
          console.error('0x0000   createPixelMap error :' + error)
          expect().assertFail()
          done()
        } else {
          let info = await pixeMap.getImageInfo();
          console.log('0x0000   PixelMap isHdr is  :' + tag + info.isHdr)
          expect(info.isHdr).assertFalse()
          expect(info.pixelFormat == image.PixelMapFormat.RGBA_8888).assertTrue()
          done()
        }
      })
    })

    /**
     * @tc.number    : createPixelMapJPEGISOSingleUri0100
     * @tc.name      : SUB_MULTIMEDIA_CREATE_PIXEL_MAP_ISOHDR_URI_PROMISE_0100
     * @tc.desc      : 1.create imageSource
     *                 2.createPixelMap promise
     *                 3.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_PIXEL_MAP_ISOHDR_URI_PROMISE_0100', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_PIXEL_MAP_ISOHDR_URI_PROMISE_0100"
      try {
        let imageSourceApi = await getImageSource(filePaths[1],'uri')
        let pixelMap = await imageSourceApi.createPixelMap()
        let info = await pixelMap.getImageInfo();
        console.log('PixelMap isHdr is :' + info.isHdr)
        expect(info.isHdr).assertFalse()
        expect(info.pixelFormat == image.PixelMapFormat.RGBA_8888).assertTrue()
        done()
      } catch (error) {
        console.log(`0x0000 ${tag} failed ${JSON.stringify(error)}`);
        expect().assertFail()
        done()
      }
    })

    /**
     * @tc.number    : createPixelMapJPEGISOSingleUri0200
     * @tc.name      : SUB_MULTIMEDIA_CREATE_PIXEL_MAP_ISOHDR_URI_PROMISE_0200
     * @tc.desc      : 1.create imageSource
     *                 2.set decodingOptions is AUTO
     *                 3.createPixelMap promise
     *                 4.pixelMap getImageInfo
     *                 5.pixelMap toSdr
     *                 6.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_PIXEL_MAP_ISOHDR_URI_PROMISE_0200', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_PIXEL_MAP_ISOHDR_URI_PROMISE_0200"
      try {
        let imageSourceApi = await getImageSource(filePaths[1],'uri')
        let pixelMap = await imageSourceApi.createPixelMap(decodingOptionsAuto)
        let info = await pixelMap.getImageInfo();
        console.log('PixelMap isHdr is :' + info.isHdr)
        screen ? expect(info.isHdr).assertTrue() : expect(info.isHdr).assertFalse()
        screen ? expect(info.pixelFormat == image.PixelMapFormat.RGBA_1010102).assertTrue() : expect(info.pixelFormat == image.PixelMapFormat.RGBA_8888).assertTrue()
        await pixelMap.toSdr()
        info = await pixelMap.getImageInfo();
        expect(info.isHdr).assertFalse()
        done()
      } catch (error) {
        console.log(`0x0000 ${tag} failed ${JSON.stringify(error)}`);
        expect(error.code).assertEqual("62980137")
        done()
      }
    })

    /**
     * @tc.number    : createPixelMapJPEGISOSingleUri0300
     * @tc.name      : SUB_MULTIMEDIA_CREATE_PIXEL_MAP_ISOHDR_URI_PROMISE_0300
     * @tc.desc      : 1.create imageSource
     *                 2.set decodingOptions is SDR
     *                 3.createPixelMap promise
     *                 4.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_PIXEL_MAP_ISOHDR_URI_PROMISE_0300', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_PIXEL_MAP_ISOHDR_URI_PROMISE_0300"
      try {
        let imageSourceApi = await getImageSource(filePaths[1],'uri')
        let pixelMap = await imageSourceApi.createPixelMap(decodingOptionsSdr)
        let info = await pixelMap.getImageInfo();
        console.log('PixelMap isHdr is :' + info.isHdr)
        expect(info.isHdr).assertFalse()
        expect(info.pixelFormat == image.PixelMapFormat.RGBA_8888).assertTrue()
        done()
      } catch (error) {
        console.log(`0x0000 ${tag} failed ${JSON.stringify(error)}`);
        expect().assertFail()
        done()
      }
    })

    /**
     * @tc.number    : createPixelMapJPEGISOSingleUri0400
     * @tc.name      : SUB_MULTIMEDIA_CREATE_PIXEL_MAP_ISOHDR_URI_PROMISE_0400
     * @tc.desc      : 1.create imageSource
     *                 2.set decodingOptions is HDR
     *                 3.createPixelMap promise
     *                 4.pixelMap getImageInfo
     *                 5.pixelMap toSdr
     *                 6.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_PIXEL_MAP_ISOHDR_URI_PROMISE_0400', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_PIXEL_MAP_ISOHDR_URI_PROMISE_0400"
      try {
        let imageSourceApi = await getImageSource(filePaths[1],'uri')
        let pixelMap = await imageSourceApi.createPixelMap(decodingOptionsHdr)
        let info = await pixelMap.getImageInfo();
        console.log('PixelMap isHdr is :' + info.isHdr)
        screen ? expect(info.isHdr).assertTrue() : expect(info.isHdr).assertFalse()
        screen ? expect(info.pixelFormat == image.PixelMapFormat.RGBA_1010102).assertTrue() : expect(info.pixelFormat == image.PixelMapFormat.RGBA_8888).assertTrue()
        await pixelMap.toSdr()
        info = await pixelMap.getImageInfo();
        expect(info.isHdr).assertFalse()
        done()
      } catch (error) {
        console.log(`0x0000 ${tag} failed ${JSON.stringify(error)}`);
        expect(error.code).assertEqual("62980137")
        done()
      }
    })

    /**
     * @tc.number    : createPixelMapJPEGISOSingleRawfileCallback0100
     * @tc.name      : SUB_MULTIMEDIA_CREATE_PIXEL_MAP_ISOHDR_RAW_CALLBACK_0100
     * @tc.desc      : 1.create imageSource
     *                 2.createPixelMap callback
     *                 3.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_PIXEL_MAP_ISOHDR_RAW_CALLBACK_0100', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_PIXEL_MAP_ISOHDR_RAW_CALLBACK_0100"

      let imageSoureApi = await getImageSource(filePaths[1],'rawfile')
      imageSoureApi.createPixelMap(async (error:BusinessError,pixeMap:image.PixelMap) => {
        if(error != undefined) {
          console.error('createPixelMap error :' + error)
          expect().assertFail()
          done()
        } else {
          let info = await pixeMap.getImageInfo();
          console.log('PixelMap isHdr is  :' + tag + info.isHdr)
          expect(info.isHdr).assertFalse()
          expect(info.pixelFormat == image.PixelMapFormat.RGBA_8888).assertTrue()
          done()
        }
      })
    })

    /**
     * @tc.number    : createPixelMapJPEGISOSingleRawfileCallback0200
     * @tc.name      : SUB_MULTIMEDIA_CREATE_PIXEL_MAP_ISOHDR_RAW_CALLBACK_0200
     * @tc.desc      : 1.create imageSource
     *                 2.set decodingOptions is AUTO
     *                 3.createPixelMap callback
     *                 4.pixelMap getImageInfo
     *                 5.pixelMap toSdr
     *                 6.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_PIXEL_MAP_ISOHDR_RAW_CALLBACK_0200', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_PIXEL_MAP_ISOHDR_RAW_CALLBACK_0200"
      let imageSoureApi = await getImageSource(filePaths[1],'rawfile')
      imageSoureApi.createPixelMap(decodingOptionsAuto,async (error:BusinessError,pixeMap:image.PixelMap) => {
        if(error != undefined) {
          console.error('createPixelMap error :' + error)
          expect().assertFail()
          done()
        } else {
          let info = await pixeMap.getImageInfo();
          console.log('PixelMap isHdr is  :' + tag + info.isHdr)
          screen ? expect(info.isHdr).assertTrue() : expect(info.isHdr).assertFalse()
          screen ? expect(info.pixelFormat == image.PixelMapFormat.RGBA_1010102).assertTrue() : expect(info.pixelFormat == image.PixelMapFormat.RGBA_8888).assertTrue()
          try{
            await pixeMap.toSdr()
            info = await pixeMap.getImageInfo();
            expect(info.isHdr).assertFalse()
            done()
          }catch(error){
            console.log(`0x0000 ${tag} failed ${JSON.stringify(error)}`);
            expect(error.code).assertEqual("62980137")
            done()
          }
        }
      })
    })

    /**
     * @tc.number    : createPixelMapJPEGISOSingleRawfileCallback0300
     * @tc.name      : SUB_MULTIMEDIA_CREATE_PIXEL_MAP_ISOHDR_RAW_CALLBACK_0300
     * @tc.desc      : 1.create imageSource
     *                 2.set decodingOptions is SDR
     *                 3.createPixelMap callback
     *                 4.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_PIXEL_MAP_ISOHDR_RAW_CALLBACK_0300', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_PIXEL_MAP_ISOHDR_RAW_CALLBACK_0300"
      let imageSoureApi = await getImageSource(filePaths[1],'rawfile')
      imageSoureApi.createPixelMap(decodingOptionsSdr,async (error:BusinessError,pixeMap:image.PixelMap) => {
        if(error != undefined) {
          console.error('createPixelMap error :' + error)
          expect().assertFail()
          done()
        } else {
          let info = await pixeMap.getImageInfo();
          console.log('PixelMap isHdr is  :' + tag + info.isHdr)
          expect(info.isHdr).assertFalse()
          expect(info.pixelFormat == image.PixelMapFormat.RGBA_8888).assertTrue()
          done()
        }
      })
    })

    /**
     * @tc.number    : createPixelMapJPEGISOSingleRawfileCallback0400
     * @tc.name      : SUB_MULTIMEDIA_CREATE_PIXEL_MAP_ISOHDR_RAW_CALLBACK_0400
     * @tc.desc      : 1.create imageSource
     *                 2.set decodingOptions is HDR
     *                 3.createPixelMap callback
     *                 4.pixelMap getImageInfo
     *                 5.pixelMap toSdr
     *                 6.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_PIXEL_MAP_ISOHDR_RAW_CALLBACK_0400', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_PIXEL_MAP_ISOHDR_RAW_CALLBACK_0400"
      let imageSoureApi = await getImageSource(filePaths[1],'rawfile')
      imageSoureApi.createPixelMap(decodingOptionsHdr,async (error:BusinessError,pixeMap:image.PixelMap) => {
        if(error != undefined) {
          console.error('createPixelMap error :' + error)
          expect().assertFail()
          done()
        } else {
          let info = await pixeMap.getImageInfo();
          console.log('PixelMap isHdr is  :' + tag + info.isHdr)
          screen ? expect(info.isHdr).assertTrue() : expect(info.isHdr).assertFalse()
          screen ? expect(info.pixelFormat == image.PixelMapFormat.RGBA_1010102).assertTrue() : expect(info.pixelFormat == image.PixelMapFormat.RGBA_8888).assertTrue()
          try{
            await pixeMap.toSdr()
            info = await pixeMap.getImageInfo();
            expect(info.isHdr).assertFalse()
            done()
          }catch(error){
            console.log(`0x0000 ${tag} failed ${JSON.stringify(error)}`);
            expect(error.code).assertEqual("62980137")
            done()
          }
        }
      })
    })

    /**
     * @tc.number    : createPixelMapJPEGISOSingleFdSync0100
     * @tc.name      : SUB_MULTIMEDIA_CREATE_PIXEL_MAP_ISOHDR_FD_SYNC_0100
     * @tc.desc      : 1.create imageSource
     *                 2.set decodingOptions is AUTO
     *                 3.createPixelMapSync
     *                 4.pixelMap getImageInfo
     *                 5.pixelMap toSdr
     *                 6.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_PIXEL_MAP_ISOHDR_FD_SYNC_0100', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_PIXEL_MAP_ISOHDR_FD_SYNC_0100"
      try {
        let imageSoureApi = await getImageSource(filePaths[1],'fd')
        let pixelMap: image.PixelMap = imageSoureApi.createPixelMapSync(decodingOptionsAuto);
        let info = await pixelMap.getImageInfo();
        console.log('PixelMap isHdr is :' + info.isHdr)
        screen ? expect(info.isHdr).assertTrue() : expect(info.isHdr).assertFalse()
        screen ? expect(info.pixelFormat == image.PixelMapFormat.RGBA_1010102).assertTrue() : expect(info.pixelFormat == image.PixelMapFormat.RGBA_8888).assertTrue()
        await pixelMap.toSdr()
        info = await pixelMap.getImageInfo();
        expect(info.isHdr).assertFalse()
        done()
      } catch (error) {
        console.log(`0x0000 ${tag} failed ${JSON.stringify(error)}`);
        expect(error.code).assertEqual("62980137")
        done()
      }
    })

    /**
     * @tc.number    : createPixelMapJPEGISOSingleFdSync0200
     * @tc.name      : SUB_MULTIMEDIA_CREATE_PIXEL_MAP_ISOHDR_FD_SYNC_0200
     * @tc.desc      : 1.create imageSource
     *                 2.set decodingOptions is SDR
     *                 3.createPixelMapSync
     *                 4.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_PIXEL_MAP_ISOHDR_FD_SYNC_0200', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_PIXEL_MAP_ISOHDR_FD_SYNC_0200"
      try {
        let imageSoureApi = await getImageSource(filePaths[1],'fd')
        let pixelMap: image.PixelMap = imageSoureApi.createPixelMapSync(decodingOptionsSdr);
        let info = await pixelMap.getImageInfo();
        console.log('PixelMap isHdr is :' + info.isHdr)
        expect(info.isHdr).assertFalse()
        expect(info.pixelFormat == image.PixelMapFormat.RGBA_8888).assertTrue()
        done()
      } catch (error) {
        console.log(`0x0000 ${tag} failed ${JSON.stringify(error)}`);
        expect().assertFail()
        done()
      }
    })

    /**
     * @tc.number    : createPixelMapJPEGISOSingleFdSync0300
     * @tc.name      : SUB_MULTIMEDIA_CREATE_PIXEL_MAP_ISOHDR_FD_SYNC_0300
     * @tc.desc      : 1.create imageSource
     *                 2.set decodingOptions is HDR
     *                 3.createPixelMapSync
     *                 4.pixelMap getImageInfo
     *                 5.pixelMap toSdr
     *                 6.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_PIXEL_MAP_ISOHDR_FD_SYNC_0300', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_PIXEL_MAP_ISOHDR_FD_SYNC_0300"
      try {
        let imageSoureApi = await getImageSource(filePaths[1],'fd')
        let pixelMap: image.PixelMap = imageSoureApi.createPixelMapSync(decodingOptionsHdr);
        let info = await pixelMap.getImageInfo();
        console.log('PixelMap isHdr is :' + info.isHdr)
        screen ? expect(info.isHdr).assertTrue() : expect(info.isHdr).assertFalse()
        screen ? expect(info.pixelFormat == image.PixelMapFormat.RGBA_1010102).assertTrue() : expect(info.pixelFormat == image.PixelMapFormat.RGBA_8888).assertTrue()
        await pixelMap.toSdr()
        info = await pixelMap.getImageInfo();
        expect(info.isHdr).assertFalse()
        done()
      } catch (error) {
        console.log(`0x0000 ${tag} failed ${JSON.stringify(error)}`);
        expect(error.code).assertEqual("62980137")
        done()
      }
    })

    /**
     * @tc.number    : createPixelMapJPEGISOSingleFdSync0400
     * @tc.name      : SUB_MULTIMEDIA_CREATE_PIXEL_MAP_ISOHDR_FD_SYNC_0400
     * @tc.desc      : 1.create imageSource
     *                 2.createPixelMapSync
     *                 3.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_PIXEL_MAP_ISOHDR_FD_SYNC_0400', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_PIXEL_MAP_ISOHDR_FD_SYNC_0400"
      try {
        let imageSoureApi = await getImageSource(filePaths[1],'fd')
        let pixelMap: image.PixelMap = imageSoureApi.createPixelMapSync();
        let info = await pixelMap.getImageInfo();
        console.log('PixelMap isHdr is :' + info.isHdr)
        expect(info.isHdr).assertFalse()
        expect(info.pixelFormat == image.PixelMapFormat.RGBA_8888).assertTrue()
        done()
      } catch (error) {
        console.log(`0x0000 ${tag} failed ${JSON.stringify(error)}`);
        expect().assertFail()
        done()
      }
    })

    /**
     * @tc.number    : createPixelMapJPEGISOSingleBuffer0100
     * @tc.name      : SUB_MULTIMEDIA_CREATE_PIXEL_MAP_ISOHDR_BUF_CALLBACK_0100
     * @tc.desc      : 1.create imageSource
     *                 2.createPixelMap callback
     *                 3.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_PIXEL_MAP_ISOHDR_BUF_CALLBACK_0100', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_PIXEL_MAP_ISOHDR_BUF_CALLBACK_0100"
      let imageSoureApi = await getImageSource(filePaths[1],'buffer')
      imageSoureApi.createPixelMap(async (error:BusinessError,pixeMap:image.PixelMap) => {
        if(error != undefined) {
          console.error('0x0000   createPixelMap error :' + error)
          expect().assertFail()
          done()
        } else {
          let info = await pixeMap.getImageInfo();
          console.log('0x0000   PixelMap isHdr is  :' + tag + info.isHdr)
          expect(info.isHdr).assertFalse()
          expect(info.pixelFormat == image.PixelMapFormat.RGBA_8888).assertTrue()
          done()
        }
      })
    })


    /**
     * @tc.number    : createPixelMapISOHEIFHDRUri0100
     * @tc.name      : SUB_MULTIMEDIA_CREATE_PIXEL_MAP_ISOHEIF_URI_PROMISE_0100
     * @tc.desc      : 1.create imageSource
     *                 2.createPixelMap promise
     *                 3.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_PIXEL_MAP_ISOHEIF_URI_PROMISE_0100', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_PIXEL_MAP_ISOHEIF_URI_PROMISE_0100"
      try {
        let imageSourceApi = await getImageSource(filePaths[2],'uri')
        let pixelMap = await imageSourceApi.createPixelMap()
        let info = await pixelMap.getImageInfo();
        console.log('PixelMap isHdr is :' + info.isHdr)
        expect(info.isHdr).assertFalse()
        expect(info.pixelFormat == image.PixelMapFormat.RGBA_8888).assertTrue()
        done()
      } catch (error) {
        console.log(`0x0000 ${tag} failed ${JSON.stringify(error)}`);
        expect().assertFail()
        done()
      }
    })

    /**
     * @tc.number    : createPixelMapISOHEIFHDRUri0200
     * @tc.name      : SUB_MULTIMEDIA_CREATE_PIXEL_MAP_ISOHEIF_URI_PROMISE_0200
     * @tc.desc      : 1.create imageSource
     *                 2.set decodingOptions is AUTO
     *                 3.createPixelMap promise
     *                 4.pixelMap getImageInfo
     *                 5.pixelMap toSdr
     *                 6.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_PIXEL_MAP_ISOHEIF_URI_PROMISE_0200', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_PIXEL_MAP_ISOHEIF_URI_PROMISE_0200"
      try {
        let imageSourceApi = await getImageSource(filePaths[2],'uri')
        let pixelMap = await imageSourceApi.createPixelMap(decodingOptionsAuto)
        let info = await pixelMap.getImageInfo();
        console.log('PixelMap isHdr is :' + info.isHdr)
        screen ? expect(info.isHdr).assertTrue() : expect(info.isHdr).assertFalse()
        screen ? expect(info.pixelFormat == image.PixelMapFormat.RGBA_1010102).assertTrue() : expect(info.pixelFormat == image.PixelMapFormat.RGBA_8888).assertTrue()
        await pixelMap.toSdr()
        info = await pixelMap.getImageInfo();
        expect(info.isHdr).assertFalse()
        done()
      } catch (error) {
        console.log(`0x0000 ${tag} failed ${JSON.stringify(error)}`);
        expect(error.code).assertEqual("62980137")
        done()
      }
    })

    /**
     * @tc.number    : createPixelMapISOHEIFHDRUri0300
     * @tc.name      : SUB_MULTIMEDIA_CREATE_PIXEL_MAP_ISOHEIF_URI_PROMISE_0300
     * @tc.desc      : 1.create imageSource
     *                 2.set decodingOptions is SDR
     *                 3.createPixelMap promise
     *                 4.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_PIXEL_MAP_ISOHEIF_URI_PROMISE_0300', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_PIXEL_MAP_ISOHEIF_URI_PROMISE_0300"
      try {
        let imageSourceApi = await getImageSource(filePaths[2],'uri')
        let pixelMap = await imageSourceApi.createPixelMap(decodingOptionsSdr)
        let info = await pixelMap.getImageInfo();
        console.log('PixelMap isHdr is :' + info.isHdr)
        expect(info.isHdr).assertFalse()
        expect(info.pixelFormat == image.PixelMapFormat.RGBA_8888).assertTrue()
        done()
      } catch (error) {
        console.log(`0x0000 ${tag} failed ${JSON.stringify(error)}`);
        expect().assertFail()
        done()
      }
    })

    /**
     * @tc.number    : createPixelMapISOHEIFHDRUri0400
     * @tc.name      : SUB_MULTIMEDIA_CREATE_PIXEL_MAP_ISOHEIF_URI_PROMISE_0400
     * @tc.desc      : 1.create imageSource
     *                 2.set decodingOptions is HDR
     *                 3.createPixelMap promise
     *                 4.pixelMap getImageInfo
     *                 5.pixelMap toSdr
     *                 6.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_PIXEL_MAP_ISOHEIF_URI_PROMISE_0400', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_PIXEL_MAP_ISOHEIF_URI_PROMISE_0400"
      try {
        let imageSourceApi = await getImageSource(filePaths[2],'uri')
        let pixelMap = await imageSourceApi.createPixelMap(decodingOptionsHdr)
        let info = await pixelMap.getImageInfo();
        console.log('PixelMap isHdr is :' + info.isHdr)
        screen ? expect(info.isHdr).assertTrue() : expect(info.isHdr).assertFalse()
        screen ? expect(info.pixelFormat == image.PixelMapFormat.RGBA_1010102).assertTrue() : expect(info.pixelFormat == image.PixelMapFormat.RGBA_8888).assertTrue()
        await pixelMap.toSdr()
        info = await pixelMap.getImageInfo();
        expect(info.isHdr).assertFalse()
        done()
      } catch (error) {
        console.log(`0x0000 ${tag} failed ${JSON.stringify(error)}`);
        expect(error.code).assertEqual("62980137")
        done()
      }
    })

    /**
     * @tc.number    : createPixelMapISOHEIFHDRRawfileCallback0100
     * @tc.name      : SUB_MULTIMEDIA_CREATE_PIXEL_MAP_ISOHEIF_RDW_CALLBACK_0100
     * @tc.desc      : 1.create imageSource
     *                 2.createPixelMap   callback
     *                 3.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_PIXEL_MAP_ISOHEIF_RDW_CALLBACK_0100', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_PIXEL_MAP_ISOHEIF_RDW_CALLBACK_0100"

      let imageSoureApi = await getImageSource(filePaths[2],'rawfile')
      imageSoureApi.createPixelMap(async (error:BusinessError,pixeMap:image.PixelMap) => {
        if(error != undefined) {
          console.error('0x0000   createPixelMap error :' + error)
          expect().assertFail()
          done()
        } else {
          let info = await pixeMap.getImageInfo();
          console.log('0x0000   PixelMap isHdr is  :' + tag + info.isHdr)
          expect(info.isHdr).assertFalse()
          expect(info.pixelFormat == image.PixelMapFormat.RGBA_8888).assertTrue()
          done()
        }
      })
    })

    /**
     * @tc.number    : createPixelMapISOHEIFHDRRawfileCallback0200
     * @tc.name      : SUB_MULTIMEDIA_CREATE_PIXEL_MAP_ISOHEIF_RDW_CALLBACK_0200
     * @tc.desc      : 1.create imageSource
     *                 2.set desiredDynamicRange is AUTO
     *                 3.createPixelMap   callback
     *                 4.pixelMap getImageInfo
     *                 5.pixelMap toSdr
     *                 6.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_PIXEL_MAP_ISOHEIF_RDW_CALLBACK_0200', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_PIXEL_MAP_ISOHEIF_RDW_CALLBACK_0200"
      let imageSoureApi = await getImageSource(filePaths[2],'rawfile')
      imageSoureApi.createPixelMap(decodingOptionsAuto,async (error:BusinessError,pixeMap:image.PixelMap) => {
        if(error != undefined) {
          console.error('0x0000   createPixelMap error :' + error)
          expect().assertFail()
          done()
        } else {
          let info = await pixeMap.getImageInfo();
          console.log('0x0000   PixelMap isHdr is  :' + tag + info.isHdr)
          screen ? expect(info.isHdr).assertTrue() : expect(info.isHdr).assertFalse()
          screen ? expect(info.pixelFormat == image.PixelMapFormat.RGBA_1010102).assertTrue() : expect(info.pixelFormat == image.PixelMapFormat.RGBA_8888).assertTrue()
          try{
            await pixeMap.toSdr()
            info = await pixeMap.getImageInfo();
            expect(info.isHdr).assertFalse()
            done()
          }catch(error){
            console.log(`0x0000 ${tag} failed ${JSON.stringify(error)}`);
            expect(error.code).assertEqual("62980137")
            done()
          }
        }
      })
    })

    /**
     * @tc.number    : createPixelMapISOHEIFHDRRawfileCallback0300
     * @tc.name      : SUB_MULTIMEDIA_CREATE_PIXEL_MAP_ISOHEIF_RDW_CALLBACK_0300
     * @tc.desc      : 1.create imageSource
     *                 2.set desiredDynamicRange is SDR
     *                 3.createPixelMap   callback
     *                 4.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_PIXEL_MAP_ISOHEIF_RDW_CALLBACK_0300', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_PIXEL_MAP_ISOHEIF_RDW_CALLBACK_0300"
      let imageSoureApi = await getImageSource(filePaths[2],'rawfile')
      imageSoureApi.createPixelMap(decodingOptionsSdr,async (error:BusinessError,pixeMap:image.PixelMap) => {
        if(error != undefined) {
          console.error('0x0000   createPixelMap error :' + error)
          expect().assertFail()
          done()
        } else {
          let info = await pixeMap.getImageInfo();
          console.log('0x0000   PixelMap isHdr is  :' + tag + info.isHdr)
          expect(info.isHdr).assertFalse()
          expect(info.pixelFormat == image.PixelMapFormat.RGBA_8888).assertTrue()
          done()
        }
      })
    })

    /**
     * @tc.number    : createPixelMapISOHEIFHDRRawfileCallback0400
     * @tc.name      : SUB_MULTIMEDIA_CREATE_PIXEL_MAP_ISOHEIF_RDW_CALLBACK_0400
     * @tc.desc      : 1.create imageSource
     *                 2.set desiredDynamicRange is HDR
     *                 3.createPixelMap   callback
     *                 4.pixelMap getImageInfo
     *                 5.pixelMap toSdr
     *                 6.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_PIXEL_MAP_ISOHEIF_RDW_CALLBACK_0400', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_PIXEL_MAP_ISOHEIF_RDW_CALLBACK_0400"
      let imageSoureApi = await getImageSource(filePaths[2],'rawfile')
      imageSoureApi.createPixelMap(decodingOptionsHdr,async (error:BusinessError,pixeMap:image.PixelMap) => {
        if(error != undefined) {
          console.error('0x0000   createPixelMap error :' + error)
          expect().assertFail()
          done()
        } else {
          let info = await pixeMap.getImageInfo();
          console.log('0x0000   PixelMap isHdr is  :' + tag + info.isHdr)
          screen ? expect(info.isHdr).assertTrue() : expect(info.isHdr).assertFalse()
          screen ? expect(info.pixelFormat == image.PixelMapFormat.RGBA_1010102).assertTrue() : expect(info.pixelFormat == image.PixelMapFormat.RGBA_8888).assertTrue()
          try{
            await pixeMap.toSdr()
            info = await pixeMap.getImageInfo();
            expect(info.isHdr).assertFalse()
            done()
          }catch(error){
            console.log(`0x0000 ${tag} failed ${JSON.stringify(error)}`);
            expect(error.code).assertEqual("62980137")
            done()
          }
        }
      })
    })

    /**
     * @tc.number    : createPixelMapISOHEIFHDRFdSync0100
     * @tc.name      : SUB_MULTIMEDIA_CREATE_PIXEL_MAP_ISOHEIF_FD_SYNC_0100
     * @tc.desc      : 1.create imageSource
     *                 2.set desiredDynamicRange is AUTO
     *                 3.createPixelMapSync
     *                 4.pixelMap getImageInfo
     *                 5.pixelMap toSdr
     *                 6.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_PIXEL_MAP_ISOHEIF_FD_SYNC_0100', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_PIXEL_MAP_ISOHEIF_FD_SYNC_0100"
      try {
        let imageSoureApi = await getImageSource(filePaths[2],'fd')
        let pixelMap: image.PixelMap = imageSoureApi.createPixelMapSync(decodingOptionsAuto);
        let info = await pixelMap.getImageInfo();
        console.log('PixelMap isHdr is :' + info.isHdr)
        screen ? expect(info.isHdr).assertTrue() : expect(info.isHdr).assertFalse()
        screen ? expect(info.pixelFormat == image.PixelMapFormat.RGBA_1010102).assertTrue() : expect(info.pixelFormat == image.PixelMapFormat.RGBA_8888).assertTrue()
        await pixelMap.toSdr()
        info = await pixelMap.getImageInfo();
        expect(info.isHdr).assertFalse()
        done()
      } catch (error) {
        console.log(`0x0000 ${tag} failed ${JSON.stringify(error)}`);
        expect(error.code).assertEqual("62980137")
        done()
      }
    })

    /**
     * @tc.number    : createPixelMapISOHEIFHDRFdSync0200
     * @tc.name      : SUB_MULTIMEDIA_CREATE_PIXEL_MAP_ISOHEIF_FD_SYNC_0200
     * @tc.desc      : 1.create imageSource
     *                 2.set desiredDynamicRange is SDR
     *                 3.createPixelMapSync
     *                 4.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_PIXEL_MAP_ISOHEIF_FD_SYNC_0200', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_PIXEL_MAP_ISOHEIF_FD_SYNC_0200"
      try {
        let imageSoureApi = await getImageSource(filePaths[2],'fd')
        let pixelMap: image.PixelMap = imageSoureApi.createPixelMapSync(decodingOptionsSdr);
        let info = await pixelMap.getImageInfo();
        console.log('PixelMap isHdr is :' + info.isHdr)
        expect(info.isHdr).assertFalse()
        expect(info.pixelFormat == image.PixelMapFormat.RGBA_8888).assertTrue()
        done()
      } catch (error) {
        console.log(`0x0000 ${tag} failed ${JSON.stringify(error)}`);
        expect().assertFail()
        done()
      }
    })

    /**
     * @tc.number    : createPixelMapISOHEIFHDRFdSync0300
     * @tc.name      : SUB_MULTIMEDIA_CREATE_PIXEL_MAP_ISOHEIF_FD_SYNC_0300
     * @tc.desc      : 1.create imageSource
     *                 2.set desiredDynamicRange is HDR
     *                 3.createPixelMapSync
     *                 4.pixelMap getImageInfo
     *                 5.pixelMap toSdr
     *                 6.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_PIXEL_MAP_ISOHEIF_FD_SYNC_0300', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_PIXEL_MAP_ISOHEIF_FD_SYNC_0300"
      try {
        let imageSoureApi = await getImageSource(filePaths[2],'fd')
        let pixelMap: image.PixelMap = imageSoureApi.createPixelMapSync(decodingOptionsHdr);
        let info = await pixelMap.getImageInfo();
        console.log('PixelMap isHdr is :' + info.isHdr)
        screen ? expect(info.isHdr).assertTrue() : expect(info.isHdr).assertFalse()
        screen ? expect(info.pixelFormat == image.PixelMapFormat.RGBA_1010102).assertTrue() : expect(info.pixelFormat == image.PixelMapFormat.RGBA_8888).assertTrue()
        await pixelMap.toSdr()
        info = await pixelMap.getImageInfo();
        expect(info.isHdr).assertFalse()
        done()
      } catch (error) {
        console.log(`0x0000 ${tag} failed ${JSON.stringify(error)}`);
        expect(error.code).assertEqual("62980137")
        done()
      }
    })

    /**
     * @tc.number    : createPixelMapISOHEIFHDRFdSync0400
     * @tc.name      : SUB_MULTIMEDIA_CREATE_PIXEL_MAP_ISOHEIF_FD_SYNC_0400
     * @tc.desc      : 1.create imageSource
     *                 2.createPixelMapSync
     *                 3.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_PIXEL_MAP_ISOHEIF_FD_SYNC_0400', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_PIXEL_MAP_ISOHEIF_FD_SYNC_0400"
      try {
        let imageSoureApi = await getImageSource(filePaths[2],'fd')
        let pixelMap: image.PixelMap = imageSoureApi.createPixelMapSync();
        let info = await pixelMap.getImageInfo();
        console.log('PixelMap isHdr is :' + info.isHdr)
        expect(info.isHdr).assertFalse()
        expect(info.pixelFormat == image.PixelMapFormat.RGBA_8888).assertTrue()
        done()
      } catch (error) {
        console.log(`0x0000 ${tag} failed ${JSON.stringify(error)}`);
        expect().assertFail()
        done()
      }
    })

    /**
     * @tc.number    : createPixelMapISOHEIFHDRBuffer0100
     * @tc.name      : SUB_MULTIMEDIA_CREATE_PIXEL_MAP_ISOHEIF_BUFFER_CALLBACK_0100
     * @tc.desc      : 1.create imageSource
     *                 2.createPixelMap callback
     *                 3.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_PIXEL_MAP_ISOHEIF_BUFFER_CALLBACK_0100', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_PIXEL_MAP_ISOHEIF_BUFFER_CALLBACK_0100"
      let imageSoureApi = await getImageSource(filePaths[2],'buffer')
      imageSoureApi.createPixelMap(async (error:BusinessError,pixeMap:image.PixelMap) => {
        if(error != undefined) {
          console.error('0x0000   createPixelMap error :' + error)
          expect().assertFail()
          done()
        } else {
          let info = await pixeMap.getImageInfo();
          console.log('0x0000   PixelMap isHdr is  :' + tag + info.isHdr)
          expect(info.isHdr).assertFalse()
          expect(info.pixelFormat == image.PixelMapFormat.RGBA_8888).assertTrue()
          done()
        }
      })
    })

    /**
     * @tc.number    : createPixelMapJPEGVividSingleUri0100
     * @tc.name      : SUB_MULTIMEDIA_CREATE_PIXEL_MAP_VIVIDHDR_URI_PROMISE_0100
     * @tc.desc      : 1.create imageSource
     *                 2.createPixelMap callback
     *                 3.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_PIXEL_MAP_VIVIDHDR_URI_PROMISE_0100', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_PIXEL_MAP_VIVIDHDR_URI_PROMISE_0100"
      try {
        let imageSourceApi = await getImageSource(filePaths[3],'uri')
        let pixelMap = await imageSourceApi.createPixelMap()
        let info = await pixelMap.getImageInfo();
        console.log('PixelMap isHdr is :' + info.isHdr)
        expect(info.isHdr).assertFalse()
        expect(info.pixelFormat == image.PixelMapFormat.RGBA_8888).assertTrue()
        done()
      } catch (error) {
        console.log(`0x0000 ${tag} failed ${JSON.stringify(error)}`);
        expect().assertFail()
        done()
      }
    })

    /**
     * @tc.number    : createPixelMapJPEGVividSingleUri0200
     * @tc.name      : SUB_MULTIMEDIA_CREATE_PIXEL_MAP_VIVIDHDR_URI_PROMISE_0200
     * @tc.desc      : 1.create imageSource
     *                 2.set desiredDynamicRange is AUTO
     *                 3.createPixelMapSync
     *                 4.pixelMap getImageInfo
     *                 5.pixelMap toSdr
     *                 6.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_PIXEL_MAP_VIVIDHDR_URI_PROMISE_0200', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_PIXEL_MAP_VIVIDHDR_URI_PROMISE_0200"
      try {
        let imageSourceApi = await getImageSource(filePaths[3],'uri')
        let pixelMap = await imageSourceApi.createPixelMap(decodingOptionsAuto)
        let info = await pixelMap.getImageInfo();
        console.log('PixelMap isHdr is :' + info.isHdr)
        screen ? expect(info.isHdr).assertTrue() : expect(info.isHdr).assertFalse()
        screen ? expect(info.pixelFormat == image.PixelMapFormat.RGBA_1010102).assertTrue() : expect(info.pixelFormat == image.PixelMapFormat.RGBA_8888).assertTrue()
        await pixelMap.toSdr()
        info = await pixelMap.getImageInfo();
        expect(info.isHdr).assertFalse()
        done()
      } catch (error) {
        console.log(`0x0000 ${tag} failed ${JSON.stringify(error)}`);
        expect(error.code).assertEqual("62980137")
        done()
      }
    })

    /**
     * @tc.number    : createPixelMapJPEGVividSingleUri0300
     * @tc.name      : SUB_MULTIMEDIA_CREATE_PIXEL_MAP_VIVIDHDR_URI_PROMISE_0300
     * @tc.desc      : 1.create imageSource
     *                 2.set desiredDynamicRange is SDR
     *                 3.createPixelMapSync
     *                 4.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_PIXEL_MAP_VIVIDHDR_URI_PROMISE_0300', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_PIXEL_MAP_VIVIDHDR_URI_PROMISE_0300"
      try {
        let imageSourceApi = await getImageSource(filePaths[3],'uri')
        let pixelMap = await imageSourceApi.createPixelMap(decodingOptionsSdr)
        let info = await pixelMap.getImageInfo();
        console.log('PixelMap isHdr is :' + info.isHdr)
        expect(info.isHdr).assertFalse()
        expect(info.pixelFormat == image.PixelMapFormat.RGBA_8888).assertTrue()
        done()
      } catch (error) {
        console.log(`0x0000 ${tag} failed ${JSON.stringify(error)}`);
        expect().assertFail()
        done()
      }
    })

    /**
     * @tc.number    : createPixelMapJPEGVividSingleUri0400
     * @tc.name      : SUB_MULTIMEDIA_CREATE_PIXEL_MAP_VIVIDHDR_URI_PROMISE_0400
     * @tc.desc      : 1.create imageSource
     *                 2.set desiredDynamicRange is HDR
     *                 3.createPixelMapSync
     *                 4.pixelMap getImageInfo
     *                 5.pixelMap toSdr
     *                 6.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_PIXEL_MAP_VIVIDHDR_URI_PROMISE_0400', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_PIXEL_MAP_VIVIDHDR_URI_PROMISE_0400"
      try {
        let imageSourceApi = await getImageSource(filePaths[3],'uri')
        let pixelMap = await imageSourceApi.createPixelMap(decodingOptionsHdr)
        let info = await pixelMap.getImageInfo();
        console.log('PixelMap isHdr is :' + info.isHdr)
        screen ? expect(info.isHdr).assertTrue() : expect(info.isHdr).assertFalse()
        screen ? expect(info.pixelFormat == image.PixelMapFormat.RGBA_1010102).assertTrue() : expect(info.pixelFormat == image.PixelMapFormat.RGBA_8888).assertTrue()
        await pixelMap.toSdr()
        info = await pixelMap.getImageInfo();
        expect(info.isHdr).assertFalse()
        done()
      } catch (error) {
        console.log(`0x0000 ${tag} failed ${JSON.stringify(error)}`);
        expect(error.code).assertEqual("62980137")
        done()
      }
    })

    /**
     * @tc.number    : createPixelMapJPEGVividSingleRawfileCallback0100
     * @tc.name      : SUB_MULTIMEDIA_CREATE_PIXEL_MAP_JPEGVIVIDSINGLE_RDW_CALLBACK_0100
     * @tc.desc      : 1.create imageSource
     *                 2.createPixelMap   callback
     *                 3.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_PIXEL_MAP_JPEGVIVIDSINGLE_RDW_CALLBACK_0100', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_PIXEL_MAP_JPEGVIVIDSINGLE_RDW_CALLBACK_0100"

      let imageSoureApi = await getImageSource(filePaths[3],'rawfile')
      imageSoureApi.createPixelMap(async (error:BusinessError,pixeMap:image.PixelMap) => {
        if(error != undefined) {
          console.error('0x0000   createPixelMap error :' + error)
          expect().assertFail()
          done()
        } else {
          let info = await pixeMap.getImageInfo();
          console.log('0x0000   PixelMap isHdr is  :' + tag + info.isHdr)
          expect(info.isHdr).assertFalse()
          expect(info.pixelFormat == image.PixelMapFormat.RGBA_8888).assertTrue()
          done()
        }
      })
    })

    /**
     * @tc.number    : createPixelMapJPEGVividSingleRawfileOptionsCallback0100
     * @tc.name      : SUB_MULTIMEDIA_CREATE_PIXEL_MAP_JPEGVIVIDSINGLE_RDW_CALLBACK_0200
     * @tc.desc      : 1.create imageSource
     *                 2.set desiredDynamicRange is AUTO
     *                 3.createPixelMap   callback
     *                 4.pixelMap getImageInfo
     *                 5.pixelMap toSdr
     *                 6.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_PIXEL_MAP_JPEGVIVIDSINGLE_RDW_CALLBACK_0200', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_PIXEL_MAP_JPEGVIVIDSINGLE_RDW_CALLBACK_0200"
      let imageSoureApi = await getImageSource(filePaths[3],'rawfile')
      imageSoureApi.createPixelMap(decodingOptionsAuto,async (error:BusinessError,pixeMap:image.PixelMap) => {
        if(error != undefined) {
          console.error('0x0000   createPixelMap error :' + error)
          expect().assertFail()
          done()
        } else {
          let info = await pixeMap.getImageInfo();
          console.log('0x0000   PixelMap isHdr is  :' + tag + info.isHdr)
          screen ? expect(info.isHdr).assertTrue() : expect(info.isHdr).assertFalse()
          screen ? expect(info.pixelFormat == image.PixelMapFormat.RGBA_1010102).assertTrue() : expect(info.pixelFormat == image.PixelMapFormat.RGBA_8888).assertTrue()
          try{
            await pixeMap.toSdr()
            info = await pixeMap.getImageInfo();
            expect(info.isHdr).assertFalse()
            done()
          }catch(error){
            console.log(`0x0000 ${tag} failed ${JSON.stringify(error)}`);
            expect(error.code).assertEqual("62980137")
            done()
          }
        }
      })
    })

    /**
     * @tc.number    : createPixelMapJPEGVividSingleRawfileOptionsCallback0200
     * @tc.name      : SUB_MULTIMEDIA_CREATE_PIXEL_MAP_JPEGVIVIDSINGLE_RDW_CALLBACK_0300
     * @tc.desc      : 1.create imageSource
     *                 2.set desiredDynamicRange is SDR
     *                 3.createPixelMap   callback
     *                 4.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_PIXEL_MAP_JPEGVIVIDSINGLE_RDW_CALLBACK_0300', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_PIXEL_MAP_JPEGVIVIDSINGLE_RDW_CALLBACK_0300"
      let imageSoureApi = await getImageSource(filePaths[3],'rawfile')
      imageSoureApi.createPixelMap(decodingOptionsSdr,async (error:BusinessError,pixeMap:image.PixelMap) => {
        if(error != undefined) {
          console.error('0x0000   createPixelMap error :' + error)
          expect().assertFail()
          done()
        } else {
          let info = await pixeMap.getImageInfo();
          console.log('0x0000   PixelMap isHdr is  :' + tag + info.isHdr)
          expect(info.isHdr).assertFalse()
          expect(info.pixelFormat == image.PixelMapFormat.RGBA_8888).assertTrue()
          done()
        }
      })
    })

    /**
     * @tc.number    : createPixelMapJPEGVividSingleRawfileOptionsCallback0300
     * @tc.name      : SUB_MULTIMEDIA_CREATE_PIXEL_MAP_JPEGVIVIDSINGLE_RDW_CALLBACK_0400
     * @tc.desc      : 1.create imageSource
     *                 2.set desiredDynamicRange is HDR
     *                 3.createPixelMap   callback
     *                 4.pixelMap getImageInfo
     *                 5.pixelMap toSdr
     *                 6.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_PIXEL_MAP_JPEGVIVIDSINGLE_RDW_CALLBACK_0400', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_PIXEL_MAP_JPEGVIVIDSINGLE_RDW_CALLBACK_0400"
      let imageSoureApi = await getImageSource(filePaths[3],'rawfile')
      imageSoureApi.createPixelMap(decodingOptionsHdr,async (error:BusinessError,pixeMap:image.PixelMap) => {
        if(error != undefined) {
          console.error('0x0000   createPixelMap error :' + error)
          expect().assertFail()
          done()
        } else {
          let info = await pixeMap.getImageInfo();
          console.log('0x0000   PixelMap isHdr is  :' + tag + info.isHdr)
          screen ? expect(info.isHdr).assertTrue() : expect(info.isHdr).assertFalse()
          screen ? expect(info.pixelFormat == image.PixelMapFormat.RGBA_1010102).assertTrue() : expect(info.pixelFormat == image.PixelMapFormat.RGBA_8888).assertTrue()
          try{
            await pixeMap.toSdr()
            info = await pixeMap.getImageInfo();
            expect(info.isHdr).assertFalse()
            done()
          }catch(error){
            console.log(`0x0000 ${tag} failed ${JSON.stringify(error)}`);
            expect(error.code).assertEqual("62980137")
            done()
          }
        }
      })
    })

    /**
     * @tc.number    : createPixelMapJPEGVividSingleFdSync0100
     * @tc.name      : SUB_MULTIMEDIA_CREATE_PIXEL_MAP_JPEGVIVIDSINGLE_FD_SYNC_0100
     * @tc.desc      : 1.create imageSource
     *                 2.set desiredDynamicRange is AUTO
     *                 3.createPixelMapSync
     *                 4.pixelMap getImageInfo
     *                 5.pixelMap toSdr
     *                 6.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_PIXEL_MAP_JPEGVIVIDSINGLE_FD_SYNC_0100', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_PIXEL_MAP_JPEGVIVIDSINGLE_FD_SYNC_0100"
      try {
        let imageSoureApi = await getImageSource(filePaths[3],'fd')
        let pixelMap: image.PixelMap = imageSoureApi.createPixelMapSync(decodingOptionsAuto);
        let info = await pixelMap.getImageInfo();
        console.log('PixelMap isHdr is :' + info.isHdr)
        screen ? expect(info.isHdr).assertTrue() : expect(info.isHdr).assertFalse()
        screen ? expect(info.pixelFormat == image.PixelMapFormat.RGBA_1010102).assertTrue() : expect(info.pixelFormat == image.PixelMapFormat.RGBA_8888).assertTrue()
        await pixelMap.toSdr()
        info = await pixelMap.getImageInfo();
        expect(info.isHdr).assertFalse()
        done()
      } catch (error) {
        console.log(`0x0000 ${tag} failed ${JSON.stringify(error)}`);
        expect(error.code).assertEqual("62980137")
        done()
      }
    })

    /**
     * @tc.number    : createPixelMapJPEGVividSingleFdSync0200
     * @tc.name      : SUB_MULTIMEDIA_CREATE_PIXEL_MAP_JPEGVIVIDSINGLE_FD_SYNC_0200
     * @tc.desc      : 1.create imageSource
     *                 2.set desiredDynamicRange is SDR
     *                 3.createPixelMapSync
     *                 4.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_PIXEL_MAP_JPEGVIVIDSINGLE_FD_SYNC_0200', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_PIXEL_MAP_JPEGVIVIDSINGLE_FD_SYNC_0200"
      try {
        let imageSoureApi = await getImageSource(filePaths[3],'fd')
        let pixelMap: image.PixelMap = imageSoureApi.createPixelMapSync(decodingOptionsSdr);
        let info = await pixelMap.getImageInfo();
        console.log('PixelMap isHdr is :' + info.isHdr)
        expect(info.isHdr).assertFalse()
        expect(info.pixelFormat == image.PixelMapFormat.RGBA_8888).assertTrue()
        done()
      } catch (error) {
        console.log(`0x0000 ${tag} failed ${JSON.stringify(error)}`);
        expect().assertFail()
        done()
      }
    })

    /**
     * @tc.number    : createPixelMapJPEGVividSingleFdSync0300
     * @tc.name      : SUB_MULTIMEDIA_CREATE_PIXEL_MAP_JPEGVIVIDSINGLE_FD_SYNC_0300
     * @tc.desc      : 1.create imageSource
     *                 2.set desiredDynamicRange is HDR
     *                 3.createPixelMapSync
     *                 4.pixelMap getImageInfo
     *                 5.pixelMap toSdr
     *                 6.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_PIXEL_MAP_JPEGVIVIDSINGLE_FD_SYNC_0300', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_PIXEL_MAP_JPEGVIVIDSINGLE_FD_SYNC_0300"
      try {
        let imageSoureApi = await getImageSource(filePaths[3],'fd')
        let pixelMap: image.PixelMap = imageSoureApi.createPixelMapSync(decodingOptionsHdr);
        let info = await pixelMap.getImageInfo();
        console.log('PixelMap isHdr is :' + info.isHdr)
        screen ? expect(info.isHdr).assertTrue() : expect(info.isHdr).assertFalse()
        screen ? expect(info.pixelFormat == image.PixelMapFormat.RGBA_1010102).assertTrue() : expect(info.pixelFormat == image.PixelMapFormat.RGBA_8888).assertTrue()
        await pixelMap.toSdr()
        info = await pixelMap.getImageInfo();
        expect(info.isHdr).assertFalse()
        done()
      } catch (error) {
        console.log(`0x0000 ${tag} failed ${JSON.stringify(error)}`);
        expect(error.code).assertEqual("62980137")
        done()
      }
    })

    /**
     * @tc.number    : createPixelMapJPEGVividSingleFdSync0500
     * @tc.name      : SUB_MULTIMEDIA_CREATE_PIXEL_MAP_JPEGVIVIDSINGLE_FD_SYNC_0400
     * @tc.desc      : 1.create imageSource
     *                 2.createPixelMapSync
     *                 3.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_PIXEL_MAP_JPEGVIVIDSINGLE_FD_SYNC_0400', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_PIXEL_MAP_JPEGVIVIDSINGLE_FD_SYNC_0400"
      try {
        let imageSoureApi = await getImageSource(filePaths[3],'fd')
        let pixelMap: image.PixelMap = imageSoureApi.createPixelMapSync();
        let info = await pixelMap.getImageInfo();
        console.log('PixelMap isHdr is :' + info.isHdr)
        expect(info.isHdr).assertFalse()
        expect(info.pixelFormat == image.PixelMapFormat.RGBA_8888).assertTrue()
        done()
      } catch (error) {
        console.log(`0x0000 ${tag} failed ${JSON.stringify(error)}`);
        expect().assertFail()
        done()
      }
    })

    /**
     * @tc.number    : createPixelMapJPEGVividSingleBuffer0100
     * @tc.name      : SUB_MULTIMEDIA_CREATE_PIXEL_MAP_JPEGVIVIDSINGLE_BUFFER_CALLBACK_0100
     * @tc.desc      : 1.create imageSource
     *                 2.createPixelMap callback
     *                 3.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_PIXEL_MAP_JPEGVIVIDSINGLE_BUFFER_CALLBACK_0100', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_PIXEL_MAP_JPEGVIVIDSINGLE_BUFFER_CALLBACK_0100"
      let imageSoureApi = await getImageSource(filePaths[3],'buffer')
      imageSoureApi.createPixelMap(async (error:BusinessError,pixeMap:image.PixelMap) => {
        if(error != undefined) {
          console.error('0x0000   createPixelMap error :' + error)
          expect().assertFail()
          done()
        } else {
          let info = await pixeMap.getImageInfo();
          console.log('0x0000   PixelMap isHdr is  :' + tag + info.isHdr)
          expect(info.isHdr).assertFalse()
          expect(info.pixelFormat == image.PixelMapFormat.RGBA_8888).assertTrue()
          done()
        }
      })
    })

    /**
     * @tc.number    : createPixelMapVIVIDHEIF1Uri0100
     * @tc.name      : SUB_MULTIMEDIA_CREATE_PIXEL_MAP_VIVIDHEIF1_URI_PROMISE_0100
     * @tc.desc      : 1.create imageSource
     *                 2.createPixelMap callback
     *                 3.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_PIXEL_MAP_VIVIDHEIF1_URI_PROMISE_0100', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_PIXEL_MAP_VIVIDHEIF1_URI_PROMISE_0100"
      try {
        let imageSourceApi = await getImageSource(filePaths[4],'uri')
        let pixelMap = await imageSourceApi.createPixelMap()
        let info = await pixelMap.getImageInfo();
        console.log('PixelMap isHdr is :' + info.isHdr)
        expect(info.isHdr).assertFalse()
        expect(info.pixelFormat == image.PixelMapFormat.RGBA_8888).assertTrue()
        done()
      } catch (error) {
        console.log(`0x0000 ${tag} failed ${JSON.stringify(error)}`);
        expect().assertFail()
        done()
      }
    })

    /**
     * @tc.number    : createPixelMapVIVIDHEIF1Uri0200
     * @tc.name      : SUB_MULTIMEDIA_CREATE_PIXEL_MAP_VIVIDHEIF1_URI_PROMISE_0200
     * @tc.desc      : 1.create imageSource
     *                 2.set desiredDynamicRange is AUTO
     *                 3.createPixelMapSync
     *                 4.pixelMap getImageInfo
     *                 5.pixelMap toSdr
     *                 6.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_PIXEL_MAP_VIVIDHEIF1_URI_PROMISE_0200', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_PIXEL_MAP_VIVIDHEIF1_URI_PROMISE_0200"
      try {
        let imageSourceApi = await getImageSource(filePaths[4],'uri')
        let pixelMap = await imageSourceApi.createPixelMap(decodingOptionsAuto)
        let info = await pixelMap.getImageInfo();
        console.log('PixelMap isHdr is :' + info.isHdr)
        screen ? expect(info.isHdr).assertTrue() : expect(info.isHdr).assertFalse()
        screen ? expect(info.pixelFormat == image.PixelMapFormat.RGBA_1010102).assertTrue() : expect(info.pixelFormat == image.PixelMapFormat.RGBA_8888).assertTrue()
        await pixelMap.toSdr()
        info = await pixelMap.getImageInfo();
        expect(info.isHdr).assertFalse()
        done()
      } catch (error) {
        console.log(`0x0000 ${tag} failed ${JSON.stringify(error)}`);
        expect(error.code).assertEqual("62980137")
        done()
      }
    })

    /**
     * @tc.number    : createPixelMapVIVIDHEIF1Uri0300
     * @tc.name      : SUB_MULTIMEDIA_CREATE_PIXEL_MAP_VIVIDHEIF1_URI_PROMISE_0300
     * @tc.desc      : 1.create imageSource
     *                 2.set desiredDynamicRange is SDR
     *                 3.createPixelMapSync
     *                 4.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_PIXEL_MAP_VIVIDHEIF1_URI_PROMISE_0300', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_PIXEL_MAP_VIVIDHEIF1_URI_PROMISE_0300"
      try {
        let imageSourceApi = await getImageSource(filePaths[4],'uri')
        let pixelMap = await imageSourceApi.createPixelMap(decodingOptionsSdr)
        let info = await pixelMap.getImageInfo();
        console.log('PixelMap isHdr is :' + info.isHdr)
        expect(info.isHdr).assertFalse()
        expect(info.pixelFormat == image.PixelMapFormat.RGBA_8888).assertTrue()
        done()
      } catch (error) {
        console.log(`0x0000 ${tag} failed ${JSON.stringify(error)}`);
        expect().assertFail()
        done()
      }
    })

    /**
     * @tc.number    : createPixelMapVIVIDHEIF1Uri0400
     * @tc.name      : SUB_MULTIMEDIA_CREATE_PIXEL_MAP_VIVIDHEIF1_URI_PROMISE_0400
     * @tc.desc      : 1.create imageSource
     *                 2.set desiredDynamicRange is HDR
     *                 3.createPixelMapSync
     *                 4.pixelMap getImageInfo
     *                 5.pixelMap toSdr
     *                 6.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_PIXEL_MAP_VIVIDHEIF1_URI_PROMISE_0400', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_PIXEL_MAP_VIVIDHEIF1_URI_PROMISE_0400"
      try {
        let imageSourceApi = await getImageSource(filePaths[4],'uri')
        let pixelMap = await imageSourceApi.createPixelMap(decodingOptionsHdr)
        let info = await pixelMap.getImageInfo();
        console.log('PixelMap isHdr is :' + info.isHdr)
        screen ? expect(info.isHdr).assertTrue() : expect(info.isHdr).assertFalse()
        screen ? expect(info.pixelFormat == image.PixelMapFormat.RGBA_1010102).assertTrue() : expect(info.pixelFormat == image.PixelMapFormat.RGBA_8888).assertTrue()
        await pixelMap.toSdr()
        info = await pixelMap.getImageInfo();
        expect(info.isHdr).assertFalse()
        done()
      } catch (error) {
        console.log(`0x0000 ${tag} failed ${JSON.stringify(error)}`);
        expect(error.code).assertEqual("62980137")
        done()
      }
    })

    /**
     * @tc.number    : createPixelMapVIVIDHEIF1RawfileCallback0100
     * @tc.name      : SUB_MULTIMEDIA_CREATE_PIXEL_MAP_VIVIDHEIF1_RDW_CALLBACK_0100
     * @tc.desc      : 1.create imageSource
     *                 2.createPixelMap   callback
     *                 3.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_PIXEL_MAP_VIVIDHEIF1_RDW_CALLBACK_0100', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_PIXEL_MAP_VIVIDHEIF1_RDW_CALLBACK_0100"

      let imageSoureApi = await getImageSource(filePaths[4],'rawfile')
      imageSoureApi.createPixelMap(async (error:BusinessError,pixeMap:image.PixelMap) => {
        if(error != undefined) {
          console.error('0x0000   createPixelMap error :' + error)
          expect().assertFail()
          done()
        } else {
          console.log('0x0000   createPixelMap success')
          let info = await pixeMap.getImageInfo();
          console.log('0x0000   PixelMap isHdr is  :' + tag + info.isHdr)
          expect(info.isHdr).assertFalse()
          expect(info.pixelFormat == image.PixelMapFormat.RGBA_8888).assertTrue()
          done()
        }
      })
    })

    /**
     * @tc.number    : createPixelMapVIVIDHEIF1RawfileCallback0200
     * @tc.name      : SUB_MULTIMEDIA_CREATE_PIXEL_MAP_VIVIDHEIF1_RDW_CALLBACK_0200
     * @tc.desc      : 1.create imageSource
     *                 2.set desiredDynamicRange is AUTO
     *                 3.createPixelMap   callback
     *                 4.pixelMap getImageInfo
     *                 5.pixelMap toSdr
     *                 6.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_PIXEL_MAP_VIVIDHEIF1_RDW_CALLBACK_0200', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_PIXEL_MAP_VIVIDHEIF1_RDW_CALLBACK_0200"
      let imageSoureApi = await getImageSource(filePaths[4],'rawfile')
      imageSoureApi.createPixelMap(decodingOptionsAuto,async (error:BusinessError,pixeMap:image.PixelMap) => {
        if(error != undefined) {
          console.error('0x0000   createPixelMap error :' + error)
          expect().assertFail()
          done()
        } else {
          let info = await pixeMap.getImageInfo();
          console.log('0x0000   PixelMap isHdr is  :' + tag + info.isHdr)
          screen ? expect(info.isHdr).assertTrue() : expect(info.isHdr).assertFalse()
          screen ? expect(info.pixelFormat == image.PixelMapFormat.RGBA_1010102).assertTrue() : expect(info.pixelFormat == image.PixelMapFormat.RGBA_8888).assertTrue()
          try{
            await pixeMap.toSdr()
            info = await pixeMap.getImageInfo();
            expect(info.isHdr).assertFalse()
            done()
          }catch(error){
            console.log(`0x0000 ${tag} failed ${JSON.stringify(error)}`);
            expect(error.code).assertEqual("62980137")
            done()
          }
        }
      })
    })

    /**
     * @tc.number    : createPixelMapVIVIDHEIF1RawfileCallback0200
     * @tc.name      : SUB_MULTIMEDIA_CREATE_PIXEL_MAP_VIVIDHEIF1_RDW_CALLBACK_0300
     * @tc.desc      : 1.create imageSource
     *                 2.set desiredDynamicRange is SDR
     *                 3.createPixelMap   callback
     *                 4.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_PIXEL_MAP_VIVIDHEIF1_RDW_CALLBACK_0300', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_PIXEL_MAP_VIVIDHEIF1_RDW_CALLBACK_0300"
      let imageSoureApi = await getImageSource(filePaths[4],'rawfile')
      imageSoureApi.createPixelMap(decodingOptionsSdr,async (error:BusinessError,pixeMap:image.PixelMap) => {
        if(error != undefined) {
          console.error('0x0000   createPixelMap error :' + error)
          expect().assertFail()
          done()
        } else {
          let info = await pixeMap.getImageInfo();
          console.log('0x0000   PixelMap isHdr is  :' + tag + info.isHdr)
          expect(info.isHdr).assertFalse()
          expect(info.pixelFormat == image.PixelMapFormat.RGBA_8888).assertTrue()
          done()
        }
      })
    })

    /**
     * @tc.number    : createPixelMapVIVIDHEIF1RawfileCallback0400
     * @tc.name      : SUB_MULTIMEDIA_CREATE_PIXEL_MAP_VIVIDHEIF1_RDW_CALLBACK_0400
     * @tc.desc      : 1.create imageSource
     *                 2.set desiredDynamicRange is HDR
     *                 3.createPixelMap   callback
     *                 4.pixelMap getImageInfo
     *                 5.pixelMap toSdr
     *                 6.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_PIXEL_MAP_VIVIDHEIF1_RDW_CALLBACK_0400', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_PIXEL_MAP_VIVIDHEIF1_RDW_CALLBACK_0400"
      let imageSoureApi = await getImageSource(filePaths[4],'rawfile')
      imageSoureApi.createPixelMap(decodingOptionsHdr,async (error:BusinessError,pixeMap:image.PixelMap) => {
        if(error != undefined) {
          console.error('0x0000   createPixelMap error :' + error)
          expect().assertFail()
          done()
        } else {
          let info = await pixeMap.getImageInfo();
          console.log('0x0000   PixelMap isHdr is  :' + tag + info.isHdr)
          screen ? expect(info.isHdr).assertTrue() : expect(info.isHdr).assertFalse()
          screen ? expect(info.pixelFormat == image.PixelMapFormat.RGBA_1010102).assertTrue() : expect(info.pixelFormat == image.PixelMapFormat.RGBA_8888).assertTrue()
          try{
            await pixeMap.toSdr()
            info = await pixeMap.getImageInfo();
            expect(info.isHdr).assertFalse()
            done()
          }catch(error){
            console.log(`0x0000 ${tag} failed ${JSON.stringify(error)}`);
            expect(error.code).assertEqual("62980137")
            done()
          }
        }
      })
    })

    /**
     * @tc.number    : createPixelMapVIVIDHEIF1FdSync0100
     * @tc.name      : SUB_MULTIMEDIA_CREATE_PIXEL_MAP_VIVIDHEIF1_FD_SYNC_0100
     * @tc.desc      : 1.create imageSource
     *                 2.set desiredDynamicRange is AUTO
     *                 3.createPixelMapSync
     *                 4.pixelMap getImageInfo
     *                 5.pixelMap toSdr
     *                 6.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_PIXEL_MAP_VIVIDHEIF1_FD_SYNC_0100', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_PIXEL_MAP_VIVIDHEIF1_FD_SYNC_0100"
      try {
        let imageSoureApi = await getImageSource(filePaths[4],'fd')
        let pixelMap: image.PixelMap = imageSoureApi.createPixelMapSync(decodingOptionsAuto);
        let info = await pixelMap.getImageInfo();
        console.log('PixelMap isHdr is :' + info.isHdr)
        screen ? expect(info.isHdr).assertTrue() : expect(info.isHdr).assertFalse()
        screen ? expect(info.pixelFormat == image.PixelMapFormat.RGBA_1010102).assertTrue() : expect(info.pixelFormat == image.PixelMapFormat.RGBA_8888).assertTrue()
        await pixelMap.toSdr()
        info = await pixelMap.getImageInfo();
        expect(info.isHdr).assertFalse()
        done()
      } catch (error) {
        console.log(`0x0000 ${tag} failed ${JSON.stringify(error)}`);
        expect(error.code).assertEqual("62980137")
        done()
      }
    })

    /**
     * @tc.number    : createPixelMapVIVIDHEIF1FdSync0200
     * @tc.name      : SUB_MULTIMEDIA_CREATE_PIXEL_MAP_VIVIDHEIF1_FD_SYNC_0200
     * @tc.desc      : 1.create imageSource
     *                 2.set desiredDynamicRange is SDR
     *                 3.createPixelMapSync
     *                 4.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_PIXEL_MAP_VIVIDHEIF1_FD_SYNC_0200', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_PIXEL_MAP_VIVIDHEIF1_FD_SYNC_0200"
      try {
        let imageSoureApi = await getImageSource(filePaths[4],'fd')
        let pixelMap: image.PixelMap = imageSoureApi.createPixelMapSync(decodingOptionsSdr);
        let info = await pixelMap.getImageInfo();
        console.log('PixelMap isHdr is :' + info.isHdr)
        expect(info.isHdr).assertFalse()
        expect(info.pixelFormat == image.PixelMapFormat.RGBA_8888).assertTrue()
        done()
      } catch (error) {
        console.log(`0x0000 ${tag} failed ${JSON.stringify(error)}`);
        expect().assertFail()
        done()
      }
    })

    /**
     * @tc.number    : createPixelMapVIVIDHEIF1RFdSync0300
     * @tc.name      : SUB_MULTIMEDIA_CREATE_PIXEL_MAP_VIVIDHEIF1_FD_SYNC_0300
     * @tc.desc      : 1.create imageSource
     *                 2.set desiredDynamicRange is HDR
     *                 3.createPixelMapSync
     *                 4.pixelMap getImageInfo
     *                 5.pixelMap toSdr
     *                 6.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_PIXEL_MAP_VIVIDHEIF1_FD_SYNC_0300', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_PIXEL_MAP_VIVIDHEIF1_FD_SYNC_0300"
      try {
        let imageSoureApi = await getImageSource(filePaths[4],'fd')
        let pixelMap: image.PixelMap = imageSoureApi.createPixelMapSync(decodingOptionsHdr);
        let info = await pixelMap.getImageInfo();
        console.log('PixelMap isHdr is :' + info.isHdr)
        screen ? expect(info.isHdr).assertTrue() : expect(info.isHdr).assertFalse()
        screen ? expect(info.pixelFormat == image.PixelMapFormat.RGBA_1010102).assertTrue() : expect(info.pixelFormat == image.PixelMapFormat.RGBA_8888).assertTrue()
        await pixelMap.toSdr()
        info = await pixelMap.getImageInfo();
        expect(info.isHdr).assertFalse()
        done()
      } catch (error) {
        console.log(`0x0000 ${tag} failed ${JSON.stringify(error)}`);
        expect(error.code).assertEqual("62980137")
        done()
      }
    })

    /**
     * @tc.number    : createPixelMapVIVIDHEIF1FdSync0400
     * @tc.name      : SUB_MULTIMEDIA_CREATE_PIXEL_MAP_VIVIDHEIF1_FD_SYNC_0400
     * @tc.desc      : 1.create imageSource
     *                 2.createPixelMapSync
     *                 3.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_PIXEL_MAP_VIVIDHEIF1_FD_SYNC_0400', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_PIXEL_MAP_VIVIDHEIF1_FD_SYNC_0400"
      try {
        let imageSoureApi = await getImageSource(filePaths[4],'fd')
        let pixelMap: image.PixelMap = imageSoureApi.createPixelMapSync();
        let info = await pixelMap.getImageInfo();
        console.log('PixelMap isHdr is :' + info.isHdr)
        expect(info.isHdr).assertFalse()
        expect(info.pixelFormat == image.PixelMapFormat.RGBA_8888).assertTrue()
        done()
      } catch (error) {
        console.log(`0x0000 ${tag} failed ${JSON.stringify(error)}`);
        expect().assertFail()
        done()
      }
    })

    /**
     * @tc.number    : createPixelMapVIVIDHEIF1Buffer0100
     * @tc.name      : SUB_MULTIMEDIA_CREATE_PIXEL_MAP_VIVIDHEIF1_BUFFER_CALLBACK_0100
     * @tc.desc      : 1.create imageSource
     *                 2.createPixelMap callback
     *                 3.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_PIXEL_MAP_VIVIDHEIF1_BUFFER_CALLBACK_0100', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_PIXEL_MAP_VIVIDHEIF1_BUFFER_CALLBACK_0100"
      let imageSoureApi = await getImageSource(filePaths[4],'buffer')
      imageSoureApi.createPixelMap(async (error:BusinessError,pixeMap:image.PixelMap) => {
        if(error != undefined) {
          console.error('0x0000   createPixelMap error :' + error)
          expect().assertFail()
          done()
        } else {
          let info = await pixeMap.getImageInfo();
          console.log('0x0000   PixelMap isHdr is  :' + tag + info.isHdr)
          expect(info.isHdr).assertFalse()
          expect(info.pixelFormat == image.PixelMapFormat.RGBA_8888).assertTrue()
          done()
        }
      })
    })

    /**
     * @tc.number    : createPixelMapCUVAHdrUriPixelformat40100
     * @tc.name      : SUB_MULTIMEDIA_CREATE_PIXEL_MAP_CUVAHDR_JPG_URI_PIXELFORMAT4_0100
     * @tc.desc      : 1.create imageSource
     *                 2.set decodingOptions is HDR ,desiredPixelFormat is 4
     *                 3.create pixelMap
     *                 4.pixelMap getImageInfo
     *                 5.pixelMap toSdr
     *                 6.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_PIXEL_MAP_CUVAHDR_JPG_URI_PIXELFORMAT4_0100', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_PIXEL_MAP_CUVAHDR_JPG_URI_PIXELFORMAT4_0100";
      try {
        let imageSourceApi = await getImageSource(filePaths[0],'uri');
        let pixelMap = await imageSourceApi.createPixelMap(optionsHdrFormat4);
        let info = await pixelMap.getImageInfo();
        console.log('optionsHdrFormat4 info:' + JSON.stringify(info))
        if(screen){
          expect(info.isHdr).assertTrue();
          expect(info.pixelFormat == image.PixelMapFormat.RGBA_1010102).assertTrue();
        }else{
          expect(info.isHdr).assertFalse();
          expect(info.pixelFormat == image.PixelMapFormat.RGBA_8888).assertTrue();
        }
        await pixelMap.toSdr();
        info = await pixelMap.getImageInfo();
        console.log('optionsHdrFormat4 info 11:' + JSON.stringify(info))
        expect(info.pixelFormat == image.PixelMapFormat.RGBA_8888).assertTrue()
        done()
      } catch (error) {
        console.log(`0x0000 ${tag} failed ${JSON.stringify(error)}`);
        expect(error.code).assertEqual("62980137");
        done()
      }
    })

    /**
     * @tc.number    : createPixelMapCUVAHdrUriPixelformat70200
     * @tc.name      : SUB_MULTIMEDIA_CREATE_PIXEL_MAP_CUVAHDR_JPG_URI_PIXELFORMAT7_0200
     * @tc.desc      : 1.create imageSource
     *                 2.set decodingOptions is HDR ,desiredPixelFormat is 7
     *                 3.create pixelMap
     *                 4.pixelMap getImageInfo
     *                 5.pixelMap toSdr
     *                 6.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_PIXEL_MAP_CUVAHDR_JPG_URI_PIXELFORMAT7_0200', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_PIXEL_MAP_CUVAHDR_JPG_URI_PIXELFORMAT7_0200";
      try {
        let imageSourceApi = await getImageSource(filePaths[0],'uri');
        console.log('optionsHdrFormat7 :' + JSON.stringify(optionsHdrFormat7))
        let pixelMap = await imageSourceApi.createPixelMap(optionsHdrFormat7);
        let info = await pixelMap.getImageInfo();
        console.log('optionsHdrFormat7 info:' + JSON.stringify(info))
        if(screen){
          expect(info.isHdr).assertTrue();
          expect(info.pixelFormat == image.PixelMapFormat.RGBA_1010102).assertTrue();
        }else{
          expect(info.isHdr).assertFalse();
          expect(info.pixelFormat == image.PixelMapFormat.RGBA_8888).assertTrue();
        }
        await pixelMap.toSdr();
        info = await pixelMap.getImageInfo();
        console.log('optionsHdrFormat7 info 11:' + JSON.stringify(info))
        expect(info.pixelFormat == image.PixelMapFormat.RGBA_8888).assertTrue()
        done()
      } catch (error) {
        console.log(`0x0000 ${tag} failed ${JSON.stringify(error)}`);
        expect(error.code).assertEqual("62980137");
        done()
      }
    })

    /**
     * @tc.number    : createPixelMapCUVAHdrUriPixelformat80300
     * @tc.name      : SUB_MULTIMEDIA_CREATE_PIXEL_MAP_CUVAHDR_JPG_URI_PIXELFORMAT8_0300
     * @tc.desc      : 1.create imageSource
     *                 2.set decodingOptions is HDR ,desiredPixelFormat is 8,desiredSize is { width: 6, height: 6 }
     *                 3.create pixelMap
     *                 4.pixelMap getImageInfo
     *                 5.pixelMap toSdr
     *                 6.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_PIXEL_MAP_CUVAHDR_JPG_URI_PIXELFORMAT8_0300', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_PIXEL_MAP_CUVAHDR_JPG_URI_PIXELFORMAT8_0300";
      try {
        let imageSourceApi = await getImageSource(filePaths[0],'uri');
        console.log('optionsHdrFormat8 ' + JSON.stringify(optionsHdrFormat8))
        console.log('optionsHdrFormat8 imageSourceApi' + imageSourceApi)
        let pixelMap = await imageSourceApi.createPixelMap(optionsHdrFormat8);
        let info = await pixelMap.getImageInfo();
        console.log('optionsHdrFormat8 info:' + JSON.stringify(info))
        if(screen){
          expect(info.isHdr).assertTrue();
          expect(info.pixelFormat == image.PixelMapFormat.RGBA_1010102).assertTrue();
        }else{
          expect(info.isHdr).assertFalse();
          expect(info.pixelFormat == image.PixelMapFormat.NV21).assertTrue();
        }
        await pixelMap.toSdr();
        info = await pixelMap.getImageInfo();
        console.log('optionsHdrFormat8 info 11:' + JSON.stringify(info))
        expect(info.pixelFormat == image.PixelMapFormat.RGBA_8888).assertTrue()
        done()
      } catch (error) {
        console.log(`optionsHdrFormat8 ${tag} failed ${JSON.stringify(error)}`);
        expect(error.code).assertEqual("62980137");
        done()
      }
    })

    /**
     * @tc.number    : createPixelMapCUVAHdrUriPixelformat90400
     * @tc.name      : SUB_MULTIMEDIA_CREATE_PIXEL_MAP_CUVAHDR_JPG_URI_PIXELFORMAT9_0400
     * @tc.desc      : 1.create imageSource
     *                 2.set decodingOptions is HDR ,desiredPixelFormat is 9,desiredSize is { width: 3, height: 3 }
     *                 3.create pixelMap
     *                 4.pixelMap getImageInfo
     *                 5.pixelMap toSdr
     *                 6.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_PIXEL_MAP_CUVAHDR_JPG_URI_PIXELFORMAT9_0400', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_PIXEL_MAP_CUVAHDR_JPG_URI_PIXELFORMAT9_0400";
      try {
        let imageSourceApi = await getImageSource(filePaths[0],'uri');
        console.log('optionsHdrFormat9 ' + JSON.stringify(optionsHdrFormat9))
        let pixelMap = await imageSourceApi.createPixelMap(optionsHdrFormat9);
        let info = await pixelMap.getImageInfo();
        console.log('optionsHdrFormat9 info:' + JSON.stringify(info))
        if(screen){
          expect(info.isHdr).assertTrue();
          expect(info.pixelFormat == image.PixelMapFormat.RGBA_1010102).assertTrue();
        }else{
          expect(info.isHdr).assertFalse();
          expect(info.pixelFormat == image.PixelMapFormat.NV12).assertTrue();
        }
        await pixelMap.toSdr();
        info = await pixelMap.getImageInfo();
        console.log('optionsHdrFormat9 info 11:' + JSON.stringify(info))
        expect(info.pixelFormat == image.PixelMapFormat.RGBA_8888).assertTrue()
        done()
      } catch (error) {
        console.log(`optionsHdrFormat9 ${tag} failed ${JSON.stringify(error)}`);
        expect(error.code).assertEqual("62980137");
        done()
      }
    })

    /**
     * @tc.number    : createPixelMapCUVAHdrUriPixelformat100500
     * @tc.name      : SUB_MULTIMEDIA_CREATE_PIXEL_MAP_CUVAHDR_JPG_URI_PIXELFORMAT10_0500
     * @tc.desc      : 1.create imageSource
     *                 2.set decodingOptions is HDR ,desiredPixelFormat is 10
     *                 3.create pixelMap
     *                 4.pixelMap getImageInfo
     *                 5.pixelMap toSdr
     *                 6.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_PIXEL_MAP_CUVAHDR_JPG_URI_PIXELFORMAT10_0500', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_PIXEL_MAP_CUVAHDR_JPG_URI_PIXELFORMAT10_0500";
      try {
        let imageSourceApi = await getImageSource(filePaths[0],'uri');
        console.log('optionsHdrFormat10 ' + JSON.stringify(optionsHdrFormat10))
        let pixelMap = await imageSourceApi.createPixelMap(optionsHdrFormat10);
        let info = await pixelMap.getImageInfo();
        console.log('optionsHdrFormat10 info:' + JSON.stringify(info))
        if(screen){
          expect(info.isHdr).assertTrue();
          expect(info.pixelFormat == image.PixelMapFormat.RGBA_1010102).assertTrue();
        }else{
          expect(info.isHdr).assertFalse();
          expect(info.pixelFormat == image.PixelMapFormat.RGBA_8888).assertTrue();
        }
        await pixelMap.toSdr();
        info = await pixelMap.getImageInfo();
        console.log('optionsHdrFormat10 info 11:' + JSON.stringify(info))
        expect(info.pixelFormat == image.PixelMapFormat.RGBA_8888).assertTrue()
        done()
      } catch (error) {
        console.log(`optionsHdrFormat10 ${tag} failed ${JSON.stringify(error)}`);
        expect(error.code).assertEqual("62980137");
        done()
      }
    })

    /**
     * @tc.number    : createPixelMapCUVAHdrUriPixelformat110600
     * @tc.name      : SUB_MULTIMEDIA_CREATE_PIXEL_MAP_CUVAHDR_JPG_URI_PIXELFORMAT11_0600
     * @tc.desc      : 1.create imageSource
     *                 2.set decodingOptions is HDR ,desiredPixelFormat is 8,desiredSize is { width: 3, height: 3 }
     *                 3.create pixelMap
     *                 4.pixelMap getImageInfo
     *                 5.pixelMap toSdr
     *                 6.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_PIXEL_MAP_CUVAHDR_JPG_URI_PIXELFORMAT11_0600', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_PIXEL_MAP_CUVAHDR_JPG_URI_PIXELFORMAT11_0600";
      try {
        let imageSourceApi = await getImageSource(filePaths[0],'uri');
        console.log('optionsHdrFormat11 ' + JSON.stringify(optionsHdrFormat11))
        let pixelMap = await imageSourceApi.createPixelMap(optionsHdrFormat11);
        let info = await pixelMap.getImageInfo();
        console.log('optionsHdrFormat11 info:' + JSON.stringify(info))
        if(screen){
          expect(info.isHdr).assertTrue();
          expect(info.pixelFormat == image.PixelMapFormat.RGBA_1010102).assertTrue();
        }else{
          expect(info.isHdr).assertFalse();
          expect(info.pixelFormat == image.PixelMapFormat.RGBA_8888).assertTrue();
        }
        await pixelMap.toSdr();
        info = await pixelMap.getImageInfo();
        console.log('optionsHdrFormat11 info 11:' + JSON.stringify(info))
        expect(info.pixelFormat == image.PixelMapFormat.RGBA_8888).assertTrue()
        done()
      } catch (error) {
        console.log(`optionsHdrFormat11 ${tag} failed ${JSON.stringify(error)}`);
        expect(error.code).assertEqual("62980137");
        done()
      }
    })

    /**
     * @tc.number    : createPixelMapCUVAHdrUriPixelformat120700
     * @tc.name      : SUB_MULTIMEDIA_CREATE_PIXEL_MAP_CUVAHDR_JPG_URI_PIXELFORMAT12_0700
     * @tc.desc      : 1.create imageSource
     *                 2.set decodingOptions is HDR ,desiredPixelFormat is 8,desiredSize is { width: 6, height: 3 }
     *                 3.create pixelMap
     *                 4.pixelMap getImageInfo
     *                 5.pixelMap toSdr
     *                 6.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_PIXEL_MAP_CUVAHDR_JPG_URI_PIXELFORMAT12_0700', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_PIXEL_MAP_CUVAHDR_JPG_URI_PIXELFORMAT12_0700"
      try {
        let imageSourceApi = await getImageSource(filePaths[0],'uri');
        console.log('optionsHdrFormat12 ' + JSON.stringify(optionsHdrFormat12))
        let pixelMap = await imageSourceApi.createPixelMap(optionsHdrFormat12);
        let info = await pixelMap.getImageInfo();
        console.log('optionsHdrFormat12 info:' + JSON.stringify(info))
        if(screen){
          expect(info.isHdr).assertTrue();
          expect(info.pixelFormat == image.PixelMapFormat.RGBA_1010102).assertTrue();
        }else{
          expect(info.isHdr).assertFalse();
          expect(info.pixelFormat == image.PixelMapFormat.RGBA_8888).assertTrue();
        }
        await pixelMap.toSdr();
        info = await pixelMap.getImageInfo();
        console.log('optionsHdrFormat12 info 11:' + JSON.stringify(info))
        expect(info.pixelFormat == image.PixelMapFormat.RGBA_8888).assertTrue()
        done()
      } catch (error) {
        console.log(`optionsHdrFormat12 ${tag} failed ${JSON.stringify(error)}`);
        expect(error.code).assertEqual("62980137");
        done()
      }
    })

    /**
     * @tc.number    : createPixelMapCUVAHdrUriPixelformat20800
     * @tc.name      : SUB_MULTIMEDIA_CREATE_PIXEL_MAP_CUVAHDR_JPG_URI_PIXELFORMAT2_0800
     * @tc.desc      : 1.create imageSource
     *                 2.set decodingOptions is HDR ,desiredPixelFormat is 2
     *                 3.create pixelMap
     *                 4.pixelMap getImageInfo
     *                 5.pixelMap toSdr
     *                 6.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_PIXEL_MAP_CUVAHDR_JPG_URI_PIXELFORMAT2_0800', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_PIXEL_MAP_CUVAHDR_JPG_URI_PIXELFORMAT2_0800";
      try {
        let imageSourceApi = await getImageSource(filePaths[0],'uri');
        console.log('optionsHdrFormat2 ' + JSON.stringify(optionsHdrFormat2))
        let pixelMap = await imageSourceApi.createPixelMap(optionsHdrFormat2);
        let info = await pixelMap.getImageInfo();
        console.log('optionsHdrFormat2 info:' + JSON.stringify(info))
        if(screen){
          expect(info.isHdr).assertTrue();
          expect(info.pixelFormat == image.PixelMapFormat.RGBA_1010102).assertTrue();
        }else{
          expect(info.isHdr).assertFalse();
          expect(info.pixelFormat == image.PixelMapFormat.RGBA_8888).assertTrue();
        }
        await pixelMap.toSdr();
        info = await pixelMap.getImageInfo();
        console.log('optionsHdrFormat2 info 11:' + JSON.stringify(info))
        expect(info.pixelFormat == image.PixelMapFormat.RGBA_8888).assertTrue()
        done()
      } catch (error) {
        console.log(`0x0000 ${tag} failed ${JSON.stringify(error)}`);
        expect(error.code).assertEqual("62980137");
        done()
      }
    })

    /**
     * @tc.number    : createPixelMapCUVAHdrUriPixelformat30900
     * @tc.name      : SUB_MULTIMEDIA_CREATE_PIXEL_MAP_CUVAHDR_JPG_URI_PIXELFORMAT3_0900
     * @tc.desc      : 1.create imageSource
     *                 2.set decodingOptions is HDR ,desiredPixelFormat is 3
     *                 3.create pixelMap
     *                 4.pixelMap getImageInfo
     *                 5.pixelMap toSdr
     *                 6.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_PIXEL_MAP_CUVAHDR_JPG_URI_PIXELFORMAT3_0900', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_PIXEL_MAP_CUVAHDR_JPG_URI_PIXELFORMAT3_0900";
      try {
        let imageSourceApi = await getImageSource(filePaths[0],'uri');
        console.log('optionsHdrFormat3 :' + JSON.stringify(optionsHdrFormat3))
        let pixelMap = await imageSourceApi.createPixelMap(optionsHdrFormat3);
        let info = await pixelMap.getImageInfo();
        console.log('optionsHdrFormat3 info:' + JSON.stringify(info))
        if(screen){
          expect(info.isHdr).assertTrue();
          expect(info.pixelFormat == image.PixelMapFormat.RGBA_1010102).assertTrue();
        }else{
          expect(info.isHdr).assertFalse();
          expect(info.pixelFormat == image.PixelMapFormat.RGBA_8888).assertTrue();
        }
        await pixelMap.toSdr();
        info = await pixelMap.getImageInfo();
        console.log('optionsHdrFormat3 info 11:' + JSON.stringify(info))
        expect(info.pixelFormat == image.PixelMapFormat.RGBA_8888).assertTrue()
        done()
      } catch (error) {
        console.log(`0x0000 ${tag} failed ${JSON.stringify(error)}`);
        expect(error.code).assertEqual("62980137");
        done()
      }
    })

    /**
     * @tc.number    : createPixelMapCUVAHdrUriPixelformat51000
     * @tc.name      : SUB_MULTIMEDIA_CREATE_PIXEL_MAP_CUVAHDR_JPG_URI_PIXELFORMAT5_1000
     * @tc.desc      : 1.create imageSource
     *                 2.set decodingOptions is HDR ,desiredPixelFormat is 5
     *                 3.create pixelMap
     *                 4.pixelMap getImageInfo
     *                 5.pixelMap toSdr
     *                 6.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_PIXEL_MAP_CUVAHDR_JPG_URI_PIXELFORMAT5_1000', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_PIXEL_MAP_CUVAHDR_JPG_URI_PIXELFORMAT5_1000";
      try {
        let imageSourceApi = await getImageSource(filePaths[0],'uri');
        console.log('optionsHdrFormat5 :' + JSON.stringify(optionsHdrFormat5))
        let pixelMap = await imageSourceApi.createPixelMap(optionsHdrFormat5);
        let info = await pixelMap.getImageInfo();
        console.log('optionsHdrFormat5 info:' + JSON.stringify(info))
        if(screen){
          expect(info.isHdr).assertTrue();
          expect(info.pixelFormat == image.PixelMapFormat.RGBA_1010102).assertTrue();
        }else{
          expect(info.isHdr).assertFalse();
          expect(info.pixelFormat == image.PixelMapFormat.RGBA_8888).assertTrue();
        }
        await pixelMap.toSdr();
        info = await pixelMap.getImageInfo();
        console.log('optionsHdrFormat5 info 11:' + JSON.stringify(info))
        expect(info.pixelFormat == image.PixelMapFormat.RGBA_8888).assertTrue()
        done()
      } catch (error) {
        console.log(`0x0000 ${tag} failed ${JSON.stringify(error)}`);
        expect(error.code).assertEqual("62980137");
        done()
      }
    })

    /**
     * @tc.number    : createPixelMapVIVIDHEIF1UriPixelformat40100
     * @tc.name      : SUB_MULTIMEDIA_CREATE_PIXEL_MAP_VIVIDHEIF1_HEIC_URI_PIXELFORMAT4_0100
     * @tc.desc      : 1.create imageSource
     *                 2.set decodingOptions is HDR ,desiredPixelFormat is 4
     *                 3.create pixelMap
     *                 4.pixelMap getImageInfo
     *                 5.pixelMap toSdr
     *                 6.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_PIXEL_MAP_VIVIDHEIF1_HEIC_URI_PIXELFORMAT4_0100', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_PIXEL_MAP_VIVIDHEIF1_HEIC_URI_PIXELFORMAT4_0100";
      try {
        let imageSourceApi = await getImageSource(filePaths[4],'uri')
        let pixelMap = await imageSourceApi.createPixelMap(optionsHdrFormat4)
        console.log('optionsHdrFormat4 :' + JSON.stringify(optionsHdrFormat4))
        let info = await pixelMap.getImageInfo();
        console.log('optionsHdrFormat4 info:' + JSON.stringify(info))
        if(screen){
          expect(info.isHdr).assertTrue();
          expect(info.pixelFormat == image.PixelMapFormat.RGBA_1010102).assertTrue();
        }else{
          expect(info.isHdr).assertFalse();
          expect(info.pixelFormat == image.PixelMapFormat.RGBA_8888).assertTrue();
        }
        await pixelMap.toSdr()
        info = await pixelMap.getImageInfo();
        console.log('optionsHdrFormat4 info 22:' + JSON.stringify(info))
        expect(info.pixelFormat == image.PixelMapFormat.RGBA_8888).assertTrue()
        done()
      } catch (error) {
        console.log(`0x0000 ${tag} failed ${JSON.stringify(error)}`);
        expect(error.code).assertEqual("62980137")
        done()
      }

    })

    /**
     * @tc.number    : createPixelMapVIVIDHEIF1UriPixelformat70200
     * @tc.name      : SUB_MULTIMEDIA_CREATE_PIXEL_MAP_VIVIDHEIF1_HEIC_URI_PIXELFORMAT7_0200
     * @tc.desc      : 1.create imageSource
     *                 2.set decodingOptions is HDR ,desiredPixelFormat is 7
     *                 3.create pixelMap
     *                 4.pixelMap getImageInfo
     *                 5.pixelMap toSdr
     *                 6.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_PIXEL_MAP_VIVIDHEIF1_HEIC_URI_PIXELFORMAT7_0200', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_PIXEL_MAP_VIVIDHEIF1_HEIC_URI_PIXELFORMAT7_0200";
      try {
        let imageSourceApi = await getImageSource(filePaths[4],'uri')
        let pixelMap = await imageSourceApi.createPixelMap(optionsHdrFormat7)
        console.log('optionsHdrFormat7 :' + JSON.stringify(optionsHdrFormat7))
        let info = await pixelMap.getImageInfo();
        console.log('optionsHdrFormat7 info:' + JSON.stringify(info))
        if(screen){
          expect(info.isHdr).assertTrue();
          expect(info.pixelFormat == image.PixelMapFormat.RGBA_1010102).assertTrue();
        }else{
          expect(info.isHdr).assertFalse();
          expect(info.pixelFormat == image.PixelMapFormat.RGBA_8888).assertTrue();
        }
        await pixelMap.toSdr()
        info = await pixelMap.getImageInfo();
        console.log('optionsHdrFormat7 info 22:' + JSON.stringify(info))
        expect(info.pixelFormat == image.PixelMapFormat.RGBA_8888).assertTrue()
        done()
      } catch (error) {
        console.log(`0x0000 ${tag} failed ${JSON.stringify(error)}`);
        expect(error.code).assertEqual("62980137")
        done()
      }
    })

    /**
     * @tc.number    : createPixelMapVIVIDHEIF1UriPixelformat80300
     * @tc.name      : SUB_MULTIMEDIA_CREATE_PIXEL_MAP_VIVIDHEIF1_HEIC_URI_PIXELFORMAT8_0300
     * @tc.desc      : 1.create imageSource
     *                 2.set decodingOptions is HDR ,desiredPixelFormat is 8,desiredSize is { width: 6, height: 6 }
     *                 3.create pixelMap
     *                 4.pixelMap getImageInfo
     *                 5.pixelMap toSdr
     *                 6.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_PIXEL_MAP_VIVIDHEIF1_HEIC_URI_PIXELFORMAT8_0300', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_PIXEL_MAP_VIVIDHEIF1_HEIC_URI_PIXELFORMAT8_0300"
      try {
        let imageSourceApi = await getImageSource(filePaths[4],'uri')
        let pixelMap = await imageSourceApi.createPixelMap(optionsHdrFormat8)
        console.log('optionsHdrFormat8 optionsHdrFormat8:' + JSON.stringify(optionsHdrFormat8))
        let info = await pixelMap.getImageInfo();
        console.log('optionsHdrFormat8 info:' + JSON.stringify(info))
        if(screen){
          expect(info.isHdr).assertTrue();
          expect(info.pixelFormat == image.PixelMapFormat.YCRCB_P010).assertTrue()
        }else{
          expect(info.isHdr).assertFalse();
          expect(info.pixelFormat == image.PixelMapFormat.NV21).assertTrue();
        }
        await pixelMap.toSdr()
        info = await pixelMap.getImageInfo();
        console.log('optionsHdrFormat8 info 22:' + JSON.stringify(info))
        expect(info.pixelFormat == image.PixelMapFormat.NV21).assertTrue()
        done()
      } catch (error) {
        console.log(`0x0000 ${tag} failed ${JSON.stringify(error)}`);
        expect(error.code).assertEqual("62980137")
        done()
      }
    })

    /**
     * @tc.number    : createPixelMapVIVIDHEIF1UriPixelformat90400
     * @tc.name      : SUB_MULTIMEDIA_CREATE_PIXEL_MAP_VIVIDHEIF1_HEIC_URI_PIXELFORMAT9_0400
     * @tc.desc      : 1.create imageSource
     *                 2.set decodingOptions is HDR ,desiredPixelFormat is 9,desiredSize is { width: 3, height: 3 }
     *                 3.create pixelMap
     *                 4.pixelMap getImageInfo
     *                 5.pixelMap toSdr
     *                 6.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_PIXEL_MAP_VIVIDHEIF1_HEIC_URI_PIXELFORMAT9_0400', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_PIXEL_MAP_VIVIDHEIF1_HEIC_URI_PIXELFORMAT9_0400";
      try {
        let imageSourceApi = await getImageSource(filePaths[4], 'uri')
        let pixelMap = await imageSourceApi.createPixelMap(optionsHdrFormat9)
        console.log('optionsHdrFormat9 :' + JSON.stringify(optionsHdrFormat9))
        let info = await pixelMap.getImageInfo();
        console.log('optionsHdrFormat9 info:' + JSON.stringify(info))
        if(screen){
          expect(info.isHdr).assertTrue();
          expect(info.pixelFormat == image.PixelMapFormat.YCBCR_P010).assertTrue()
        }else{
          expect(info.isHdr).assertFalse();
          expect(info.pixelFormat == image.PixelMapFormat.NV12).assertTrue();
        }
        await pixelMap.toSdr()
        info = await pixelMap.getImageInfo();
        console.log('optionsHdrFormat9 info 22:' + JSON.stringify(info))
        expect(info.pixelFormat == image.PixelMapFormat.NV12).assertTrue()
        done()
      } catch (error) {
        console.log(`0x0000 ${tag} failed ${JSON.stringify(error)}`);
        expect(error.code).assertEqual("62980137")
        done()
      }
    })

    /**
     * @tc.number    : createPixelMapVIVIDHEIF1UriPixelformat100500
     * @tc.name      : SUB_MULTIMEDIA_CREATE_PIXEL_MAP_VIVIDHEIF1_HEIC_URI_PIXELFORMAT10_0500
     * @tc.desc      : 1.create imageSource
     *                 2.set decodingOptions is HDR ,desiredPixelFormat is 10
     *                 3.create pixelMap
     *                 4.pixelMap getImageInfo
     *                 5.pixelMap toSdr
     *                 6.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_PIXEL_MAP_VIVIDHEIF1_HEIC_URI_PIXELFORMAT10_0500', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_PIXEL_MAP_VIVIDHEIF1_HEIC_URI_PIXELFORMAT10_0500";
      try {
        let imageSourceApi = await getImageSource(filePaths[4],'uri')
        let pixelMap = await imageSourceApi.createPixelMap(optionsHdrFormat10)
        console.log('optionsHdrFormat10 :' + JSON.stringify(optionsHdrFormat10))
        let info = await pixelMap.getImageInfo();
        console.log('optionsHdrFormat10 info:' + JSON.stringify(info))
        if(screen){
          expect(info.isHdr).assertTrue();
          expect(info.pixelFormat == image.PixelMapFormat.RGBA_1010102).assertTrue()
        }else{
          expect(info.isHdr).assertFalse();
          expect(info.pixelFormat == image.PixelMapFormat.RGBA_8888).assertTrue();
        }
        await pixelMap.toSdr()
        info = await pixelMap.getImageInfo();
        console.log('optionsHdrFormat10 info 22:' + JSON.stringify(info))
        expect(info.pixelFormat == image.PixelMapFormat.RGBA_8888).assertTrue()
        done()
      } catch (error) {
        console.log(`0x0000 ${tag} failed ${JSON.stringify(error)}`);
        expect(error.code).assertEqual("62980137")
        done()
      }
    })

    /**
     * @tc.number    : createPixelMapVIVIDHEIF1UriPixelformat20800
     * @tc.name      : SUB_MULTIMEDIA_CREATE_PIXEL_MAP_VIVIDHEIF1_HEIC_URI_PIXELFORMAT2_0800
     * @tc.desc      : 1.create imageSource
     *                 2.set decodingOptions is HDR ,desiredPixelFormat is 2
     *                 3.create pixelMap
     *                 4.pixelMap getImageInfo
     *                 5.pixelMap toSdr
     *                 6.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_PIXEL_MAP_VIVIDHEIF1_HEIC_URI_PIXELFORMAT2_0800', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_PIXEL_MAP_VIVIDHEIF1_HEIC_URI_PIXELFORMAT2_0800";
      try {
        let imageSourceApi = await getImageSource(filePaths[4],'uri');
        console.log('optionsHdrFormat2 ' + JSON.stringify(optionsHdrFormat2))
        let pixelMap = await imageSourceApi.createPixelMap(optionsHdrFormat2);
        let info = await pixelMap.getImageInfo();
        console.log('optionsHdrFormat2 info:' + JSON.stringify(info))
        if(screen){
          expect(info.isHdr).assertTrue();
          expect(info.pixelFormat == image.PixelMapFormat.RGBA_1010102).assertTrue()
        }else{
          expect(info.isHdr).assertFalse();
          expect(info.pixelFormat == image.PixelMapFormat.RGBA_8888).assertTrue();
        }
        await pixelMap.toSdr();
        info = await pixelMap.getImageInfo();
        console.log('optionsHdrFormat2 info 11:' + JSON.stringify(info))
        expect(info.pixelFormat == image.PixelMapFormat.RGBA_8888).assertTrue()
        done()
      } catch (error) {
        console.log(`0x0000 ${tag} failed ${JSON.stringify(error)}`);
        expect(error.code).assertEqual("62980137");
        done()
      }
    })

    /**
     * @tc.number    : createPixelMapVIVIDHEIF1UriPixelformat30900
     * @tc.name      : SUB_MULTIMEDIA_CREATE_PIXEL_MAP_VIVIDHEIF1_HEIC_URI_PIXELFORMAT3_0900
     * @tc.desc      : 1.create imageSource
     *                 2.set decodingOptions is HDR ,desiredPixelFormat is 3
     *                 3.create pixelMap
     *                 4.pixelMap getImageInfo
     *                 5.pixelMap toSdr
     *                 6.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_PIXEL_MAP_VIVIDHEIF1_HEIC_URI_PIXELFORMAT3_0900', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_PIXEL_MAP_VIVIDHEIF1_HEIC_URI_PIXELFORMAT3_0900";
      try {
        let imageSourceApi = await getImageSource(filePaths[4],'uri');
        console.log('optionsHdrFormat3 :' + JSON.stringify(optionsHdrFormat3))
        let pixelMap = await imageSourceApi.createPixelMap(optionsHdrFormat3);
        let info = await pixelMap.getImageInfo();
        console.log('optionsHdrFormat3 info:' + JSON.stringify(info))
        if(screen){
          expect(info.isHdr).assertTrue();
          expect(info.pixelFormat == image.PixelMapFormat.RGBA_1010102).assertTrue()
        }else{
          expect(info.isHdr).assertFalse();
          expect(info.pixelFormat == image.PixelMapFormat.RGBA_8888).assertTrue();
        }
        await pixelMap.toSdr();
        info = await pixelMap.getImageInfo();
        console.log('optionsHdrFormat3 info 11:' + JSON.stringify(info))
        expect(info.pixelFormat == image.PixelMapFormat.RGBA_8888).assertTrue()
        done()
      } catch (error) {
        console.log(`0x0000 ${tag} failed ${JSON.stringify(error)}`);
        expect(error.code).assertEqual("62980137");
        done()
      }
    })

    /**
     * @tc.number    : createPixelMapVIVIDHEIF1UriPixelformat51000
     * @tc.name      : SUB_MULTIMEDIA_CREATE_PIXEL_MAP_VIVIDHEIF1_HEIC_URI_PIXELFORMAT5_1000
     * @tc.desc      : 1.create imageSource
     *                 2.set decodingOptions is HDR ,desiredPixelFormat is 5
     *                 3.create pixelMap
     *                 4.pixelMap getImageInfo
     *                 5.pixelMap toSdr
     *                 6.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_PIXEL_MAP_VIVIDHEIF1_HEIC_URI_PIXELFORMAT5_1000', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_PIXEL_MAP_VIVIDHEIF1_HEIC_URI_PIXELFORMAT5_1000";
      try {
        let imageSourceApi = await getImageSource(filePaths[4],'uri');
        console.log('optionsHdrFormat5 :' + JSON.stringify(optionsHdrFormat5))
        let pixelMap = await imageSourceApi.createPixelMap(optionsHdrFormat5);
        let info = await pixelMap.getImageInfo();
        console.log('optionsHdrFormat5 info:' + JSON.stringify(info))
        if(screen){
          expect(info.isHdr).assertTrue();
          expect(info.pixelFormat == image.PixelMapFormat.RGBA_1010102).assertTrue()
        }else{
          expect(info.isHdr).assertFalse();
          expect(info.pixelFormat == image.PixelMapFormat.RGBA_8888).assertTrue();
        }
        await pixelMap.toSdr();
        info = await pixelMap.getImageInfo();
        console.log('optionsHdrFormat5 info 11:' + JSON.stringify(info))
        expect(info.pixelFormat == image.PixelMapFormat.RGBA_8888).assertTrue()
        done()
      } catch (error) {
        console.log(`0x0000 ${tag} failed ${JSON.stringify(error)}`);
        expect(error.code).assertEqual("62980137");
        done()
      }
    })

    /**
     * @tc.number    : createPixelMapJPEGISOFdPixelformat40100
     * @tc.name      : SUB_MULTIMEDIA_CREATE_PIXEL_MAP_JPEGISO_JPG_FD_PIXELFORMAT4_0100
     * @tc.desc      : 1.create imageSource
     *                 2.set desiredDynamicRange is SDR,,desiredPixelFormat is 4
     *                 3.createPixelMapSync
     *                 4.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_PIXEL_MAP_JPEGISO_JPG_FD_PIXELFORMAT4_0100', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_PIXEL_MAP_JPEGISO_JPG_FD_PIXELFORMAT4_0100";
      try {
        let imageSourceApi = await getImageSource(filePaths[1],'fd')
        let pixelMap = await imageSourceApi.createPixelMapSync(optionsSdrFormat4)
        console.log('optionsSdrFormat4 :' + JSON.stringify(optionsSdrFormat4))
        let info = await pixelMap.getImageInfo();
        console.log('optionsSdrFormat4 info:' + JSON.stringify(info))
        expect(info.isHdr).assertFalse()
        expect(info.pixelFormat == image.PixelMapFormat.BGRA_8888).assertTrue()
        done()
      } catch (error) {
        console.log(`optionsSdrFormat4 ${tag} failed ${JSON.stringify(error)}`);
        expect(error.code).assertEqual("62980137")
        done()
      }
    })

    /**
     * @tc.number    : createPixelMapJPEGISOFdPixelformat70200
     * @tc.name      : SUB_MULTIMEDIA_CREATE_PIXEL_MAP_JPEGISO_JPG_FD_PIXELFORMAT7_0200
     * @tc.desc      : 1.create imageSource
     *                 2.set desiredDynamicRange is SDR,,desiredPixelFormat is 7
     *                 3.createPixelMapSync
     *                 4.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_PIXEL_MAP_JPEGISO_JPG_FD_PIXELFORMAT7_0200', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_PIXEL_MAP_JPEGISO_JPG_FD_PIXELFORMAT7_0200";
      try {
        let imageSourceApi = await getImageSource(filePaths[1],'fd')
        let pixelMap = await imageSourceApi.createPixelMapSync(optionsSdrFormat7)
        console.log('optionsSdrFormat7 :' + JSON.stringify(optionsSdrFormat7))
        let info = await pixelMap.getImageInfo();
        console.log('optionsSdrFormat7 info:' + JSON.stringify(info))
        expect(info.isHdr).assertFalse()
        expect(info.pixelFormat == image.PixelMapFormat.RGBA_8888).assertTrue()
        done()
      } catch (error) {
        console.log(`optionsSdrFormat7 ${tag} failed ${JSON.stringify(error)}`);
        expect(error.code).assertEqual("62980137")
        done()
      }
    })

    /**
     * @tc.number    : createPixelMapJPEGISOFdPixelformat80300
     * @tc.name      : SUB_MULTIMEDIA_CREATE_PIXEL_MAP_JPEGISO_JPG_FD_PIXELFORMAT8_0300
     * @tc.desc      : 1.create imageSource
     *                 2.set desiredDynamicRange is SDR,,desiredPixelFormat is 8,desiredSize is{ width: 6, height: 3 }
     *                 3.createPixelMapSync
     *                 4.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_PIXEL_MAP_JPEGISO_JPG_FD_PIXELFORMAT8_0300', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_PIXEL_MAP_JPEGISO_JPG_FD_PIXELFORMAT8_0300";
      try {
        let imageSourceApi = await getImageSource(filePaths[1],'fd')
        let pixelMap = await imageSourceApi.createPixelMapSync(optionsSdrFormat8)
        console.log('optionsSdrFormat8 :' + JSON.stringify(optionsSdrFormat8))
        let info = await pixelMap.getImageInfo();
        console.log('optionsSdrFormat8 info:' + JSON.stringify(info))
        expect(info.isHdr).assertFalse()
        expect(info.pixelFormat == image.PixelMapFormat.NV21).assertTrue()
        done()
      } catch (error) {
        console.log(`optionsSdrFormat8 ${tag} failed ${JSON.stringify(error)}`);
        expect(error.code).assertEqual("62980137")
        done()
      }
    })

    /**
     * @tc.number    : createPixelMapJPEGISOFdPixelformat90400
     * @tc.name      : SUB_MULTIMEDIA_CREATE_PIXEL_MAP_JPEGISO_JPG_FD_PIXELFORMAT9_0400
     * @tc.desc      : 1.create imageSource
     *                 2.set desiredDynamicRange is SDR,,desiredPixelFormat is 9,desiredSize is{ width: 6, height: 6 }
     *                 3.createPixelMapSync
     *                 4.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_PIXEL_MAP_JPEGISO_JPG_FD_PIXELFORMAT9_0400', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_PIXEL_MAP_JPEGISO_JPG_FD_PIXELFORMAT9_0400";
      try {
        let imageSourceApi = await getImageSource(filePaths[1],'fd')
        let pixelMap = await imageSourceApi.createPixelMapSync(optionsSdrFormat9)
        console.log('optionsSdrFormat9 :' + JSON.stringify(optionsSdrFormat9))
        let info = await pixelMap.getImageInfo();
        console.log('optionsSdrFormat9 info:' + JSON.stringify(info))
        expect(info.isHdr).assertFalse()
        expect(info.pixelFormat == image.PixelMapFormat.NV12).assertTrue()
        done()
      } catch (error) {
        console.log(`optionsSdrFormat9 ${tag} failed ${JSON.stringify(error)}`);
        expect(error.code).assertEqual("62980137")
        done()
      }
    })

    /**
     * @tc.number    : createPixelMapJPEGISOFdPixelformat100500
     * @tc.name      : SUB_MULTIMEDIA_CREATE_PIXEL_MAP_JPEGISO_JPG_FD_PIXELFORMAT10_0500
     * @tc.desc      : 1.create imageSource
     *                 2.set desiredDynamicRange is SDR,,desiredPixelFormat is 10
     *                 3.createPixelMapSync
     *                 4.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_PIXEL_MAP_JPEGISO_JPG_FD_PIXELFORMAT10_0500', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_PIXEL_MAP_JPEGISO_JPG_FD_PIXELFORMAT10_0500";
      try {
        let imageSourceApi = await getImageSource(filePaths[1],'fd')
        let pixelMap = await imageSourceApi.createPixelMapSync(optionsSdrFormat10)
        console.log('optionsSdrFormat10 :' + JSON.stringify(optionsSdrFormat10))
        let info = await pixelMap.getImageInfo();
        console.log('optionsSdrFormat10 info:' + JSON.stringify(info))
        expect(info.isHdr).assertFalse()
        expect(info.pixelFormat == image.PixelMapFormat.RGBA_8888).assertTrue()
        done()
      } catch (error) {
        console.log(`optionsSdrFormat10 ${tag} failed ${JSON.stringify(error)}`);
        expect(error.code).assertEqual("62980137")
        done()
      }
    })

    /**
     * @tc.number    : createPixelMapJPEGISOFdPixelformat110600
     * @tc.name      : SUB_MULTIMEDIA_CREATE_PIXEL_MAP_JPEGISO_JPG_FD_PIXELFORMAT11_0600
     * @tc.desc      : 1.create imageSource
     *                 2.set desiredDynamicRange is SDR,,desiredPixelFormat is 11,desiredSize is{ width: 3, height: 6 }
     *                 3.createPixelMapSync
     *                 4.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_PIXEL_MAP_JPEGISO_JPG_FD_PIXELFORMAT11_0600', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_PIXEL_MAP_JPEGISO_JPG_FD_PIXELFORMAT11_0600";
      try {
        let imageSourceApi = await getImageSource(filePaths[1],'fd')
        let pixelMap = await imageSourceApi.createPixelMapSync(optionsSdrFormat11)
        console.log('optionsSdrFormat11 :' + JSON.stringify(optionsSdrFormat11))
        let info = await pixelMap.getImageInfo();
        console.log('optionsSdrFormat11 info:' + JSON.stringify(info))
        expect(info.isHdr).assertFalse()
        expect(info.pixelFormat == image.PixelMapFormat.RGBA_8888).assertTrue()
        done()
      } catch (error) {
        console.log(`optionsSdrFormat11 ${tag} failed ${JSON.stringify(error)}`);
        expect(error.code).assertEqual("62980137")
        done()
      }
    })

    /**
     * @tc.number    : createPixelMapJPEGISOFdPixelformat120700
     * @tc.name      : SUB_MULTIMEDIA_CREATE_PIXEL_MAP_JPEGISO_JPG_FD_PIXELFORMAT12_0700
     * @tc.desc      : 1.create imageSource
     *                 2.set desiredDynamicRange is SDR,,desiredPixelFormat is 12,desiredSize is{ width: 3, height: 6 }
     *                 3.createPixelMapSync
     *                 4.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_PIXEL_MAP_JPEGISO_JPG_FD_PIXELFORMAT12_0700', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_PIXEL_MAP_JPEGISO_JPG_FD_PIXELFORMAT12_0700"
      try {
        let imageSourceApi = await getImageSource(filePaths[1],'fd')
        let pixelMap = await imageSourceApi.createPixelMapSync(optionsSdrFormat12)
        console.log('optionsSdrFormat12 :' + JSON.stringify(optionsSdrFormat12))
        let info = await pixelMap.getImageInfo();
        console.log('optionsSdrFormat12 info:' + JSON.stringify(info))
        expect(info.isHdr).assertFalse()
        expect(info.pixelFormat == image.PixelMapFormat.RGBA_8888).assertTrue()
        done()
      } catch (error) {
        console.log(`optionsSdrFormat12 ${tag} failed ${JSON.stringify(error)}`);
        expect(error.code).assertEqual("62980137")
        done()
      }
    })

    /**
     * @tc.number    : createPixelMapJPEGISOFdPixelformat20800
     * @tc.name      : SUB_MULTIMEDIA_CREATE_PIXEL_MAP_JPEGISO_JPG_FD_PIXELFORMAT2_0800
     * @tc.desc      : 1.create imageSource
     *                 2.set desiredDynamicRange is SDR,,desiredPixelFormat is 2
     *                 3.createPixelMapSync
     *                 4.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_PIXEL_MAP_JPEGISO_JPG_FD_PIXELFORMAT2_0800', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_PIXEL_MAP_JPEGISO_JPG_FD_PIXELFORMAT2_0800";
      try {
        let imageSourceApi = await getImageSource(filePaths[1],'fd')
        let pixelMap = await imageSourceApi.createPixelMapSync(optionsSdrFormat2)
        console.log('optionsSdrFormat2 :' + JSON.stringify(optionsSdrFormat2))
        let info = await pixelMap.getImageInfo();
        console.log('optionsSdrFormat2 info:' + JSON.stringify(info))
        expect(info.isHdr).assertFalse()
        expect(info.pixelFormat == image.PixelMapFormat.RGB_565).assertTrue()
        done()
      } catch (error) {
        console.log(`optionsSdrFormat2 ${tag} failed ${JSON.stringify(error)}`);
        expect(error.code).assertEqual("62980137")
        done()
      }
    })

    /**
     * @tc.number    : createPixelMapJPEGISOFdPixelformatT30900
     * @tc.name      : SUB_MULTIMEDIA_CREATE_PIXEL_MAP_JPEGISO_JPG_FD_PIXELFORMAT3_0900
     * @tc.desc      : 1.create imageSource
     *                 2.set desiredDynamicRange is SDR,,desiredPixelFormat is 3
     *                 3.createPixelMapSync
     *                 4.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_PIXEL_MAP_JPEGISO_JPG_FD_PIXELFORMAT3_0900', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_PIXEL_MAP_JPEGISO_JPG_FD_PIXELFORMAT3_0900";
      try {
        let imageSourceApi = await getImageSource(filePaths[1],'fd')
        let pixelMap = await imageSourceApi.createPixelMapSync(optionsSdrFormat3)
        console.log('optionsSdrFormat3 :' + JSON.stringify(optionsSdrFormat3))
        let info = await pixelMap.getImageInfo();
        console.log('optionsSdrFormat3 info:' + JSON.stringify(info))
        expect(info.isHdr).assertFalse()
        expect(info.pixelFormat == image.PixelMapFormat.RGBA_8888).assertTrue()
        done()
      } catch (error) {
        console.log(`optionsSdrFormat3 ${tag} failed ${JSON.stringify(error)}`);
        expect(error.code).assertEqual("62980137")
        done()
      }
    })

    /**
     * @tc.number    : createPixelMapJPEGISOFdPixelformat51000
     * @tc.name      : SUB_MULTIMEDIA_CREATE_PIXEL_MAP_JPEGISO_JPG_FD_PIXELFORMAT5_1000
     * @tc.desc      : 1.create imageSource
     *                 2.set desiredDynamicRange is SDR,,desiredPixelFormat is 5
     *                 3.createPixelMapSync
     *                 4.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_PIXEL_MAP_JPEGISO_JPG_FD_PIXELFORMAT5_1000', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_PIXEL_MAP_JPEGISO_JPG_FD_PIXELFORMAT5_1000";
      try {
        let imageSourceApi = await getImageSource(filePaths[1],'fd')
        let pixelMap = await imageSourceApi.createPixelMapSync(optionsSdrFormat5)
        console.log('optionsSdrFormat5 :' + JSON.stringify(optionsSdrFormat5))
        if(pixelMap != undefined){
          let info = await pixelMap.getImageInfo();
          console.log('optionsSdrFormat5 info:' + JSON.stringify(info))
          expect(info.isHdr).assertFalse()
          expect(info.pixelFormat == image.PixelMapFormat.RGBA_8888).assertTrue()
        }else{
          console.log('optionsSdrFormat5 pixelMap 0:' + pixelMap)
          expect(pixelMap).assertEqual(undefined)
        }
        done()
      } catch (error) {
        console.log(`optionsSdrFormat5 ${tag} failed ${error}`);
        expect(error.code).assertEqual("62980137")
        done()
      }
    })

    /**
     * @tc.number    : createPixelMapJPEGVIVIDFdPixelformat40100
     * @tc.name      : SUB_MULTIMEDIA_CREATE_PIXEL_MAP_JPEGVIVID_JPG_FD_PIXELFORMAT4_0100
     * @tc.desc      : 1.create imageSource
     *                 2.set desiredDynamicRange is SDR,,desiredPixelFormat is 4
     *                 3.createPixelMapSync
     *                 4.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_PIXEL_MAP_JPEGVIVID_JPG_FD_PIXELFORMAT4_0100', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_PIXEL_MAP_JPEGVIVID_JPG_FD_PIXELFORMAT4_0100";
      try {
        let imageSourceApi = await getImageSource(filePaths[3],'fd')
        let pixelMap = await imageSourceApi.createPixelMapSync(optionsSdrFormat4)
        console.log('optionsSdrFormat4 :' + JSON.stringify(optionsSdrFormat4))
        let info = await pixelMap.getImageInfo();
        console.log('optionsSdrFormat4 info:' + JSON.stringify(info))
        expect(info.isHdr).assertFalse()
        expect(info.pixelFormat == image.PixelMapFormat.BGRA_8888).assertTrue()
        done()
      } catch (error) {
        console.log(`optionsSdrFormat4 ${tag} failed ${JSON.stringify(error)}`);
        expect(error.code).assertEqual("62980137")
        done()
      }
    })

    /**
     * @tc.number    : createPixelMapJPEGVIVIDFdPixelformat70200
     * @tc.name      : SUB_MULTIMEDIA_CREATE_PIXEL_MAP_JPEGVIVID_JPG_FD_PIXELFORMAT7_0200
     * @tc.desc      : 1.create imageSource
     *                 2.set desiredDynamicRange is SDR,,desiredPixelFormat is 7
     *                 3.createPixelMapSync
     *                 4.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_PIXEL_MAP_JPEGVIVID_JPG_FD_PIXELFORMAT7_0200', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_PIXEL_MAP_JPEGVIVID_JPG_FD_PIXELFORMAT7_0200";
      try {
        let imageSourceApi = await getImageSource(filePaths[3],'fd')
        let pixelMap = await imageSourceApi.createPixelMapSync(optionsSdrFormat7)
        console.log('optionsSdrFormat7 :' + JSON.stringify(optionsSdrFormat7))
        let info = await pixelMap.getImageInfo();
        console.log('optionsSdrFormat7 info:' + JSON.stringify(info))
        expect(info.isHdr).assertFalse()
        expect(info.pixelFormat == image.PixelMapFormat.RGBA_8888).assertTrue()
        done()
      } catch (error) {
        console.log(`optionsSdrFormat7 ${tag} failed ${JSON.stringify(error)}`);
        expect(error.code).assertEqual("62980137")
        done()
      }
    })

    /**
     * @tc.number    : createPixelMapJPEGVIVIDFdPixelformat80300
     * @tc.name      : SUB_MULTIMEDIA_CREATE_PIXEL_MAP_JPEGVIVID_JPG_FD_PIXELFORMAT8_0300
     * @tc.desc      : 1.create imageSource
     *                 2.set desiredDynamicRange is SDR,,desiredPixelFormat is 8,desiredSize is{ width: 6, height: 3 }
     *                 3.createPixelMapSync
     *                 4.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_PIXEL_MAP_JPEGVIVID_JPG_FD_PIXELFORMAT8_0300', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_PIXEL_MAP_JPEGVIVID_JPG_FD_PIXELFORMAT8_0300";
      try {
        let imageSourceApi = await getImageSource(filePaths[3],'fd')
        let pixelMap = await imageSourceApi.createPixelMapSync(optionsSdrFormat8)
        console.log('optionsSdrFormat8 :' + JSON.stringify(optionsSdrFormat8))
        let info = await pixelMap.getImageInfo();
        console.log('optionsSdrFormat8 info:' + JSON.stringify(info))
        expect(info.isHdr).assertFalse()
        expect(info.pixelFormat == image.PixelMapFormat.NV21).assertTrue()
        done()
      } catch (error) {
        console.log(`optionsSdrFormat8 ${tag} failed ${JSON.stringify(error)}`);
        expect(error.code).assertEqual("62980137")
        done()
      }
    })

    /**
     * @tc.number    : createPixelMapJPEGVIVIDFdPixelformat90400
     * @tc.name      : SUB_MULTIMEDIA_CREATE_PIXEL_MAP_JPEGVIVID_JPG_FD_PIXELFORMAT9_0400
     * @tc.desc      : 1.create imageSource
     *                 2.set desiredDynamicRange is SDR,,desiredPixelFormat is 9,desiredSize is{ width: 6, height: 6 }
     *                 3.createPixelMapSync
     *                 4.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_PIXEL_MAP_JPEGVIVID_JPG_FD_PIXELFORMAT9_0400', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_PIXEL_MAP_JPEGVIVID_JPG_FD_PIXELFORMAT9_0400";
      try {
        let imageSourceApi = await getImageSource(filePaths[3],'fd')
        let pixelMap = await imageSourceApi.createPixelMapSync(optionsSdrFormat9)
        console.log('optionsSdrFormat9 :' + JSON.stringify(optionsSdrFormat9))
        let info = await pixelMap.getImageInfo();
        console.log('optionsSdrFormat9 info:' + JSON.stringify(info))
        expect(info.isHdr).assertFalse()
        expect(info.pixelFormat == image.PixelMapFormat.NV12).assertTrue()
        done()
      } catch (error) {
        console.log(`optionsSdrFormat9 ${tag} failed ${JSON.stringify(error)}`);
        expect(error.code).assertEqual("62980137")
        done()
      }
    })

    /**
     * @tc.number    : createPixelMapJPEGVIVIDFdPixelformat100500
     * @tc.name      : SUB_MULTIMEDIA_CREATE_PIXEL_MAP_JPEGVIVID_JPG_FD_PIXELFORMAT10_0500
     * @tc.desc      : 1.create imageSource
     *                 2.set desiredDynamicRange is SDR,,desiredPixelFormat is 10
     *                 3.createPixelMapSync
     *                 4.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_PIXEL_MAP_JPEGVIVID_JPG_FD_PIXELFORMAT10_0500', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_PIXEL_MAP_JPEGVIVID_JPG_FD_PIXELFORMAT10_0500";
      try {
        let imageSourceApi = await getImageSource(filePaths[3],'fd')
        let pixelMap = await imageSourceApi.createPixelMapSync(optionsSdrFormat10)
        console.log('optionsSdrFormat10 :' + JSON.stringify(optionsSdrFormat10))
        let info = await pixelMap.getImageInfo();
        console.log('optionsSdrFormat10 info:' + JSON.stringify(info))
        expect(info.isHdr).assertFalse()
        expect(info.pixelFormat == image.PixelMapFormat.RGBA_8888).assertTrue()
        done()
      } catch (error) {
        console.log(`optionsSdrFormat10 ${tag} failed ${JSON.stringify(error)}`);
        expect(error.code).assertEqual("62980137")
        done()
      }
    })

    /**
     * @tc.number    : createPixelMapJPEGVIVIDFdPixelformat110600
     * @tc.name      : SUB_MULTIMEDIA_CREATE_PIXEL_MAP_JPEGVIVID_JPG_FD_PIXELFORMAT11_0600
     * @tc.desc      : 1.create imageSource
     *                 2.set desiredDynamicRange is SDR,,desiredPixelFormat is 11,desiredSize is{ width: 3, height: 6 }
     *                 3.createPixelMapSync
     *                 4.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_PIXEL_MAP_JPEGVIVID_JPG_FD_PIXELFORMAT11_0600', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_PIXEL_MAP_JPEGVIVID_JPG_FD_PIXELFORMAT11_0600";
      try {
        let imageSourceApi = await getImageSource(filePaths[3],'fd')
        let pixelMap = await imageSourceApi.createPixelMapSync(optionsSdrFormat11)
        console.log('optionsSdrFormat11 :' + JSON.stringify(optionsSdrFormat11))
        let info = await pixelMap.getImageInfo();
        console.log('optionsSdrFormat11 info:' + JSON.stringify(info))
        expect(info.isHdr).assertFalse()
        expect(info.pixelFormat == image.PixelMapFormat.RGBA_8888).assertTrue()
        done()
      } catch (error) {
        console.log(`optionsSdrFormat11 ${tag} failed ${JSON.stringify(error)}`);
        expect(error.code).assertEqual("62980137")
        done()
      }
    })

    /**
     * @tc.number    : createPixelMapJPEGVIVIDFdPixelformat120700
     * @tc.name      : SUB_MULTIMEDIA_CREATE_PIXEL_MAP_JPEGVIVID_JPG_FD_PIXELFORMAT12_0700
     * @tc.desc      : 1.create imageSource
     *                 2.set desiredDynamicRange is SDR,,desiredPixelFormat is 12,desiredSize is{ width: 3, height: 6 }
     *                 3.createPixelMapSync
     *                 4.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_PIXEL_MAP_JPEGVIVID_JPG_FD_PIXELFORMAT12_0700', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_PIXEL_MAP_JPEGVIVID_JPG_FD_PIXELFORMAT12_0700"
      try {
        let imageSourceApi = await getImageSource(filePaths[3],'fd')
        let pixelMap = await imageSourceApi.createPixelMapSync(optionsSdrFormat12)
        console.log('optionsSdrFormat12 :' + JSON.stringify(optionsSdrFormat12))
        let info = await pixelMap.getImageInfo();
        console.log('optionsSdrFormat12 info:' + JSON.stringify(info))
        expect(info.isHdr).assertFalse()
        expect(info.pixelFormat == image.PixelMapFormat.RGBA_8888).assertTrue()
        done()
      } catch (error) {
        console.log(`optionsSdrFormat12 ${tag} failed ${JSON.stringify(error)}`);
        expect(error.code).assertEqual("62980137")
        done()
      }
    })

    /**
     * @tc.number    : createPixelMapJPEGVIVIDFdPixelformat20800
     * @tc.name      : SUB_MULTIMEDIA_CREATE_PIXEL_MAP_JPEGVIVID_JPG_FD_PIXELFORMAT2_0800
     * @tc.desc      : 1.create imageSource
     *                 2.set desiredDynamicRange is SDR,,desiredPixelFormat is 2
     *                 3.createPixelMapSync
     *                 4.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_PIXEL_MAP_JPEGVIVID_JPG_FD_PIXELFORMAT2_0800', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_PIXEL_MAP_JPEGVIVID_JPG_FD_PIXELFORMAT2_0800";
      try {
        let imageSourceApi = await getImageSource(filePaths[3],'fd')
        let pixelMap = await imageSourceApi.createPixelMapSync(optionsSdrFormat2)
        console.log('optionsSdrFormat2 :' + JSON.stringify(optionsSdrFormat2))
        let info = await pixelMap.getImageInfo();
        console.log('optionsSdrFormat2 info:' + JSON.stringify(info))
        expect(info.isHdr).assertFalse()
        expect(info.pixelFormat == image.PixelMapFormat.RGB_565).assertTrue()
        done()
      } catch (error) {
        console.log(`optionsSdrFormat2 ${tag} failed ${JSON.stringify(error)}`);
        expect(error.code).assertEqual("62980137")
        done()
      }
    })

    /**
     * @tc.number    : createPixelMapJPEGVIVIDFdPixelformatT30900
     * @tc.name      : SUB_MULTIMEDIA_CREATE_PIXEL_MAP_JPEGVIVID_JPG_FD_PIXELFORMAT3_0900
     * @tc.desc      : 1.create imageSource
     *                 2.set desiredDynamicRange is SDR,,desiredPixelFormat is 3
     *                 3.createPixelMapSync
     *                 4.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_PIXEL_MAP_JPEGVIVID_JPG_FD_PIXELFORMAT3_0900', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_PIXEL_MAP_JPEGVIVID_JPG_FD_PIXELFORMAT3_0900";
      try {
        let imageSourceApi = await getImageSource(filePaths[3],'fd')
        let pixelMap = await imageSourceApi.createPixelMapSync(optionsSdrFormat3)
        console.log('optionsSdrFormat3 :' + JSON.stringify(optionsSdrFormat3))
        let info = await pixelMap.getImageInfo();
        console.log('optionsSdrFormat3 info:' + JSON.stringify(info))
        expect(info.isHdr).assertFalse()
        expect(info.pixelFormat == image.PixelMapFormat.RGBA_8888).assertTrue()
        done()
      } catch (error) {
        console.log(`optionsSdrFormat3 ${tag} failed ${JSON.stringify(error)}`);
        expect(error.code).assertEqual("62980137")
        done()
      }
    })

    /**
     * @tc.number    : createPixelMapJPEGVIVIDFdPixelformat51000
     * @tc.name      : SUB_MULTIMEDIA_CREATE_PIXEL_MAP_JPEGVIVID_JPG_FD_PIXELFORMAT5_1000
     * @tc.desc      : 1.create imageSource
     *                 2.set desiredDynamicRange is SDR,,desiredPixelFormat is 5
     *                 3.createPixelMapSync
     *                 4.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_PIXEL_MAP_JPEGVIVID_JPG_FD_PIXELFORMAT5_1000', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_PIXEL_MAP_JPEGVIVID_JPG_FD_PIXELFORMAT5_1000";
      try {
        let imageSourceApi = await getImageSource(filePaths[3],'fd')
        let pixelMap = await imageSourceApi.createPixelMapSync(optionsSdrFormat5)
        console.log('optionsSdrFormat5 :' + JSON.stringify(optionsSdrFormat5))
        if(pixelMap != undefined){
          let info = await pixelMap.getImageInfo();
          console.log('optionsSdrFormat5 info:' + JSON.stringify(info))
          expect(info.isHdr).assertFalse()
          expect(info.pixelFormat == image.PixelMapFormat.RGBA_8888).assertTrue()
        }else{
          console.log('optionsSdrFormat5 pixelMap 0:' + pixelMap)
          expect(pixelMap).assertEqual(undefined)
        }
        done()
      } catch (error) {
        console.log(`optionsSdrFormat5 ${tag} failed ${error}`);
        expect(error.code).assertEqual("62980137")
        done()
      }
    })

    /**
     * @tc.number    : createPixelMapISOHEIFHDRRawfilePixelformat40100
     * @tc.name      : SUB_MULTIMEDIA_CREATE_PIXEL_MAP_ISOHEIFHDR_HEIC_RAW_PIXELFORMAT4_0100
     * @tc.desc      : 1.create imageSource
     *                 2.set decodingOptions is AUTO,desiredPixelFormat is 4
     *                 3.createPixelMap callback
     *                 4.pixelMap getImageInfo
     *                 5.pixelMap toSdr
     *                 6.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_PIXEL_MAP_ISOHEIFHDR_HEIC_RAW_PIXELFORMAT4_0100', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_PIXEL_MAP_ISOHEIFHDR_HEIC_RAW_PIXELFORMAT4_0100";
      let imageSoureApi = await getImageSource(filePaths[2],'rawfile')
      console.log('optionsAutoFormat4 :' + JSON.stringify(optionsAutoFormat4))
      imageSoureApi.createPixelMap(optionsAutoFormat4,async (error:BusinessError,pixeMap:image.PixelMap) => {
        if(error != undefined) {
          console.error('optionsAutoFormat4  createPixelMap error :' + error)
          expect().assertFail()
          done()
        } else {
          let info = await pixeMap.getImageInfo();
          console.log('optionsAutoFormat4 info  :' + JSON.stringify(info))
          if(screen){
            expect(info.isHdr).assertTrue();
            expect(info.pixelFormat == image.PixelMapFormat.RGBA_1010102).assertTrue()
          }else{
            expect(info.isHdr).assertFalse()
            expect(info.pixelFormat == image.PixelMapFormat.BGRA_8888).assertTrue()
          }
          try{
            await pixeMap.toSdr()
            info = await pixeMap.getImageInfo();
            console.log('optionsAutoFormat4 info 11 :' + JSON.stringify(info))
            expect(info.pixelFormat == image.PixelMapFormat.RGBA_8888).assertTrue()
            done()
          }catch(error){
            console.log(`optionsAutoFormat4 ${tag} failed ${JSON.stringify(error)}`);
            expect(error.code).assertEqual("62980137")
            done()
          }
        }
      })
    })

    /**
     * @tc.number    : createPixelMapISOHEIFHDRRawfilePixelformat70200
     * @tc.name      : SUB_MULTIMEDIA_CREATE_PIXEL_MAP_ISOHEIFHDR_HEIC_RAW_PIXELFORMAT7_0200
     * @tc.desc      : 1.create imageSource
     *                 2.set decodingOptions is AUTO,desiredPixelFormat is 7
     *                 3.createPixelMap callback
     *                 4.pixelMap getImageInfo
     *                 5.pixelMap toSdr
     *                 6.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_PIXEL_MAP_ISOHEIFHDR_HEIC_RAW_PIXELFORMAT7_0200', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_PIXEL_MAP_ISOHEIFHDR_HEIC_RAW_PIXELFORMAT7_0200";
      let imageSoureApi = await getImageSource(filePaths[2], 'rawfile')
      console.log('optionsAutoFormat7 :' + JSON.stringify(optionsAutoFormat7))
      imageSoureApi.createPixelMap(optionsAutoFormat7, async (error: BusinessError, pixeMap: image.PixelMap) => {
        if (error != undefined) {
          console.error('optionsAutoFormat7  createPixelMap error :' + error)
          expect().assertFail()
          done()
        } else {
          let info = await pixeMap.getImageInfo();
          console.log('optionsAutoFormat7 info  :' + JSON.stringify(info))
          if(screen){
            expect(info.isHdr).assertTrue();
            expect(info.pixelFormat == image.PixelMapFormat.RGBA_1010102).assertTrue()
          }else{
            expect(info.isHdr).assertFalse()
            expect(info.pixelFormat == image.PixelMapFormat.RGBA_8888).assertTrue()
          }
          try {
            await pixeMap.toSdr()
            info = await pixeMap.getImageInfo();
            console.log('optionsAutoFormat7 info 11 :' + JSON.stringify(info))
            expect(info.pixelFormat == image.PixelMapFormat.RGBA_8888).assertTrue()
            done()
          } catch (error) {
            console.log(`optionsAutoFormat7 ${tag} failed ${JSON.stringify(error)}`);
            expect(error.code).assertEqual("62980137")
            done()
          }
        }
      })

    })

    /**
     * @tc.number    : createPixelMapISOHEIFHDRRawfilePixelformat80300
     * @tc.name      : SUB_MULTIMEDIA_CREATE_PIXEL_MAP_ISOHEIFHDR_HEIC_RAW_PIXELFORMAT8_0300
     * @tc.desc      : 1.create imageSource
     *                 2.set decodingOptions is AUTO,desiredPixelFormat is 8,desiredSize is { width: 3, height: 3 }
     *                 3.createPixelMap callback
     *                 4.pixelMap getImageInfo
     *                 5.pixelMap toSdr
     *                 6.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_PIXEL_MAP_ISOHEIFHDR_HEIC_RAW_PIXELFORMAT8_0300', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_PIXEL_MAP_ISOHEIFHDR_HEIC_RAW_PIXELFORMAT8_0300";
      let imageSoureApi = await getImageSource(filePaths[2], 'rawfile')
      console.log('optionsAutoFormat8 :' + JSON.stringify(optionsAutoFormat8))
      imageSoureApi.createPixelMap(optionsAutoFormat8, async (error: BusinessError, pixeMap: image.PixelMap) => {
        if (error != undefined) {
          console.error('optionsAutoFormat8  createPixelMap error :' + error)
          expect().assertFail()
          done()
        } else {
          let info = await pixeMap.getImageInfo();
          console.log('optionsAutoFormat8 info  :' + JSON.stringify(info))
          if(screen){
            expect(info.isHdr).assertTrue();
            expect(info.pixelFormat == image.PixelMapFormat.YCRCB_P010).assertTrue()
          }else{
            expect(info.isHdr).assertFalse()
            expect(info.pixelFormat == image.PixelMapFormat.NV21).assertTrue()
          }
          try {
            await pixeMap.toSdr()
            info = await pixeMap.getImageInfo();
            console.log('optionsAutoFormat8 info 11 :' + JSON.stringify(info))
            expect(info.pixelFormat == image.PixelMapFormat.NV21).assertTrue()
            done()
          } catch (error) {
            console.log(`optionsAutoFormat8 ${tag} failed ${JSON.stringify(error)}`);
            expect(error.code).assertEqual("62980137")
            done()
          }
        }
      })
    })

    /**
     * @tc.number    : createPixelMapISOHEIFHDRRawfilePixelformat90400
     * @tc.name      : SUB_MULTIMEDIA_CREATE_PIXEL_MAP_ISOHEIFHDR_HEIC_RAW_PIXELFORMAT9_0400
     * @tc.desc      : 1.create imageSource
     *                 2.set decodingOptions is AUTO,desiredPixelFormat is 9,desiredSize is { width: 3, height: 6 }
     *                 3.createPixelMap callback
     *                 4.pixelMap getImageInfo
     *                 5.pixelMap toSdr
     *                 6.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_PIXEL_MAP_ISOHEIFHDR_HEIC_RAW_PIXELFORMAT9_0400', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_PIXEL_MAP_ISOHEIFHDR_HEIC_RAW_PIXELFORMAT9_0400";
      let imageSoureApi = await getImageSource(filePaths[2], 'rawfile')
      console.log('optionsAutoFormat9 :' + JSON.stringify(optionsAutoFormat9))
      imageSoureApi.createPixelMap(optionsAutoFormat9, async (error: BusinessError, pixeMap: image.PixelMap) => {
        if (error != undefined) {
          console.error('optionsAutoFormat9  createPixelMap error :' + error)
          expect().assertFail()
          done()
        } else {
          let info = await pixeMap.getImageInfo();
          console.log('optionsAutoFormat9 info  :' + JSON.stringify(info))
          if(screen){
            expect(info.isHdr).assertTrue();
            expect(info.pixelFormat == image.PixelMapFormat.YCBCR_P010).assertTrue()
          }else{
            expect(info.isHdr).assertFalse()
            expect(info.pixelFormat == image.PixelMapFormat.NV12).assertTrue()
          }
          try {
            await pixeMap.toSdr()
            info = await pixeMap.getImageInfo();
            console.log('optionsAutoFormat9 info 11 :' + JSON.stringify(info))
            expect(info.pixelFormat == image.PixelMapFormat.NV12).assertTrue()
            done()
          } catch (error) {
            console.log(`optionsAutoFormat9 ${tag} failed ${JSON.stringify(error)}`);
            expect(error.code).assertEqual("62980137")
            done()
          }
        }
      })
    })

    /**
     * @tc.number    : createPixelMapISOHEIFHDRRawfilePixelformat100500
     * @tc.name      : SUB_MULTIMEDIA_CREATE_PIXEL_MAP_ISOHEIFHDR_HEIC_RAW_PIXELFORMAT10_0500
     * @tc.desc      : 1.create imageSource
     *                 2.set decodingOptions is AUTO,desiredPixelFormat is 10
     *                 3.createPixelMap callback
     *                 4.pixelMap getImageInfo
     *                 5.pixelMap toSdr
     *                 6.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_PIXEL_MAP_ISOHEIFHDR_HEIC_RAW_PIXELFORMAT10_0500', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_PIXEL_MAP_ISOHEIFHDR_HEIC_RAW_PIXELFORMAT10_0500";
      let imageSoureApi = await getImageSource(filePaths[2], 'rawfile')
      console.log('optionsAutoFormat10 :' + JSON.stringify(optionsAutoFormat10))
      imageSoureApi.createPixelMap(optionsAutoFormat10, async (error: BusinessError, pixeMap: image.PixelMap) => {
        if (error != undefined) {
          console.error('optionsAutoFormat10  createPixelMap error :' + error)
          expect().assertFail()
          done()
        } else {
          let info = await pixeMap.getImageInfo();
          console.log('optionsAutoFormat10 info  :' + JSON.stringify(info))
          screen ? expect(info.isHdr).assertTrue() : expect(info.isHdr).assertFalse()
          if(screen){
            expect(info.isHdr).assertTrue();
            expect(info.pixelFormat == image.PixelMapFormat.RGBA_1010102).assertTrue()
          }else{
            expect(info.isHdr).assertFalse()
            expect(info.pixelFormat == image.PixelMapFormat.RGBA_8888).assertTrue()
          }
          try {
            await pixeMap.toSdr()
            info = await pixeMap.getImageInfo();
            console.log('optionsAutoFormat10 info 11 :' + JSON.stringify(info))
            expect(info.pixelFormat == image.PixelMapFormat.RGBA_8888).assertTrue()
            done()
          } catch (error) {
            console.log(`optionsAutoFormat10 ${tag} failed ${JSON.stringify(error)}`);
            expect(error.code).assertEqual("62980137")
            done()
          }
        }
      })
    })

    /**
     * @tc.number    : createPixelMapISOHEIFHDRRawfilePixelformat20800
     * @tc.name      : SUB_MULTIMEDIA_CREATE_PIXEL_MAP_ISOHEIFHDR_HEIC_RAW_PIXELFORMAT2_0800
     * @tc.desc      : 1.create imageSource
     *                 2.set decodingOptions is AUTO,desiredPixelFormat is 2
     *                 3.createPixelMap callback
     *                 4.pixelMap getImageInfo
     *                 5.pixelMap toSdr
     *                 6.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_PIXEL_MAP_ISOHEIFHDR_HEIC_RAW_PIXELFORMAT2_0800', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_PIXEL_MAP_ISOHEIFHDR_HEIC_RAW_PIXELFORMAT2_0800";
      let imageSoureApi = await getImageSource(filePaths[2],'rawfile')
      console.log('optionsAutoFormat2 :' + JSON.stringify(optionsAutoFormat2))
      imageSoureApi.createPixelMap(optionsAutoFormat2,async (error:BusinessError,pixeMap:image.PixelMap) => {
        if(error != undefined) {
          console.error('optionsAutoFormat2  createPixelMap error :' + error)
          expect().assertFail()
          done()
        } else {
          let info = await pixeMap.getImageInfo();
          console.log('optionsAutoFormat2 info  :' + JSON.stringify(info))
          if(screen){
            expect(info.isHdr).assertTrue();
            expect(info.pixelFormat == image.PixelMapFormat.RGBA_1010102).assertTrue()
          }else{
            expect(info.isHdr).assertFalse()
            expect(info.pixelFormat == image.PixelMapFormat.RGB_565).assertTrue()
          }
          try{
            await pixeMap.toSdr()
            info = await pixeMap.getImageInfo();
            console.log('optionsAutoFormat2 info 11 :' + JSON.stringify(info))
            expect(info.pixelFormat == image.PixelMapFormat.RGBA_8888).assertTrue()
            done()
          }catch(error){
            console.log(`optionsAutoFormat2 ${tag} failed ${JSON.stringify(error)}`);
            expect(error.code).assertEqual("62980137")
            done()
          }
        }
      })
    })

    /**
     * @tc.number    : createPixelMapISOHEIFHDRRawfilePixelformat30900
     * @tc.name      : SUB_MULTIMEDIA_CREATE_PIXEL_MAP_ISOHEIFHDR_HEIC_RAW_PIXELFORMAT3_0900
     * @tc.desc      : 1.create imageSource
     *                 2.set decodingOptions is AUTO,desiredPixelFormat is 3
     *                 3.createPixelMap callback
     *                 4.pixelMap getImageInfo
     *                 5.pixelMap toSdr
     *                 6.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_PIXEL_MAP_ISOHEIFHDR_HEIC_RAW_PIXELFORMAT3_0900', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_PIXEL_MAP_ISOHEIFHDR_HEIC_RAW_PIXELFORMAT3_0900";
      let imageSoureApi = await getImageSource(filePaths[2],'rawfile')
      console.log('optionsAutoFormat3 :' + JSON.stringify(optionsAutoFormat3))
      imageSoureApi.createPixelMap(optionsAutoFormat3,async (error:BusinessError,pixeMap:image.PixelMap) => {
        if(error != undefined) {
          console.error('optionsAutoFormat3  createPixelMap error :' + error)
          expect().assertFail()
          done()
        } else {
          let info = await pixeMap.getImageInfo();
          console.log('optionsAutoFormat3 info  :' + JSON.stringify(info))
          if(screen){
            expect(info.isHdr).assertTrue();
            expect(info.pixelFormat == image.PixelMapFormat.RGBA_1010102).assertTrue()
          }else{
            expect(info.isHdr).assertFalse()
            expect(info.pixelFormat == image.PixelMapFormat.RGBA_8888).assertTrue()
          }
          try{
            await pixeMap.toSdr()
            info = await pixeMap.getImageInfo();
            console.log('optionsAutoFormat3 info 11 :' + JSON.stringify(info))
            expect(info.pixelFormat == image.PixelMapFormat.RGBA_8888).assertTrue()
            done()
          }catch(error){
            console.log(`optionsAutoFormat3 ${tag} failed ${JSON.stringify(error)}`);
            expect(error.code).assertEqual("62980137")
            done()
          }
        }
      })
    })

    /**
     * @tc.number    : createPixelMapISOHEIFHDRRawfilePixelformat51000
     * @tc.name      : SUB_MULTIMEDIA_CREATE_PIXEL_MAP_ISOHEIFHDR_HEIC_RAW_PIXELFORMAT5_1000
     * @tc.desc      : 1.create imageSource
     *                 2.set decodingOptions is AUTO,desiredPixelFormat is 5
     *                 3.createPixelMap callback
     *                 4.pixelMap getImageInfo
     *                 5.pixelMap toSdr
     *                 6.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_PIXEL_MAP_ISOHEIFHDR_HEIC_RAW_PIXELFORMAT5_1000', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_PIXEL_MAP_ISOHEIFHDR_HEIC_RAW_PIXELFORMAT5_1000";
      let imageSoureApi = await getImageSource(filePaths[2],'rawfile')
      console.log('optionsAutoFormat5 :' + JSON.stringify(optionsAutoFormat5))
      imageSoureApi.createPixelMap(optionsAutoFormat5,async (error:BusinessError,pixeMap:image.PixelMap) => {
        if(error != undefined) {
          console.error('optionsAutoFormat5  createPixelMap error :' + error)
          if(screen){
            expect().assertFail()
          }
          done()
        } else {
          let info = await pixeMap.getImageInfo();
          console.log('optionsAutoFormat5 info  :' + JSON.stringify(info))
          if(screen){
            expect(info.isHdr).assertTrue();
            expect(info.pixelFormat == image.PixelMapFormat.RGBA_1010102).assertTrue()
          }else{
            expect(info.isHdr).assertFalse()
            expect(info.pixelFormat == image.PixelMapFormat.RGB_888).assertTrue()
          }
          try{
            await pixeMap.toSdr()
            info = await pixeMap.getImageInfo();
            console.log('optionsAutoFormat5 info 11 :' + JSON.stringify(info))
            expect(info.pixelFormat == image.PixelMapFormat.RGBA_8888).assertTrue()
            done()
          }catch(error){
            console.log(`optionsAutoFormat5 ${tag} failed ${JSON.stringify(error)}`);
            expect(error.code).assertEqual("62980137")
            done()
          }
        }
      })
    })

    /**
     * @tc.number    : createPixelMapVIVIDHEIF1RawfilePixelformat40100
     * @tc.name      : SUB_MULTIMEDIA_CREATE_PIXEL_MAP_VIVIDHEIF1_HEIC_RAW_PIXELFORMAT4_0100
     * @tc.desc      : 1.create imageSource
     *                 2.set decodingOptions is AUTO,desiredPixelFormat is 4
     *                 3.createPixelMap callback
     *                 4.pixelMap getImageInfo
     *                 5.pixelMap toSdr
     *                 6.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_PIXEL_MAP_VIVIDHEIF1_HEIC_RAW_PIXELFORMAT4_0100', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_PIXEL_MAP_VIVIDHEIF1_HEIC_RAW_PIXELFORMAT4_0100";
      let imageSoureApi = await getImageSource(filePaths[4],'rawfile')
      console.log('optionsAutoFormat4 :' + JSON.stringify(optionsAutoFormat4))
      imageSoureApi.createPixelMap(optionsAutoFormat4,async (error:BusinessError,pixeMap:image.PixelMap) => {
        if(error != undefined) {
          console.error('optionsAutoFormat4  createPixelMap error :' + error)
          expect().assertFail()
          done()
        } else {
          let info = await pixeMap.getImageInfo();
          console.log('optionsAutoFormat4 info  :' + JSON.stringify(info))
          if(screen){
            expect(info.isHdr).assertTrue();
            expect(info.pixelFormat == image.PixelMapFormat.RGBA_1010102).assertTrue()
          }else{
            expect(info.isHdr).assertFalse()
            expect(info.pixelFormat == image.PixelMapFormat.BGRA_8888).assertTrue()
          }
          try{
            await pixeMap.toSdr()
            info = await pixeMap.getImageInfo();
            console.log('optionsAutoFormat4 info 11 :' + JSON.stringify(info))
            expect(info.pixelFormat == image.PixelMapFormat.RGBA_8888).assertTrue()
            done()
          }catch(error){
            console.log(`optionsAutoFormat4 ${tag} failed ${JSON.stringify(error)}`);
            expect(error.code).assertEqual("62980137")
            done()
          }
        }
      })
    })

    /**
     * @tc.number    : createPixelMapVIVIDHEIF1RawfilePixelformat70200
     * @tc.name      : SUB_MULTIMEDIA_CREATE_PIXEL_MAP_VIVIDHEIF1_HEIC_RAW_PIXELFORMAT7_0200
     * @tc.desc      : 1.create imageSource
     *                 2.set decodingOptions is AUTO,desiredPixelFormat is 7
     *                 3.createPixelMap callback
     *                 4.pixelMap getImageInfo
     *                 5.pixelMap toSdr
     *                 6.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_PIXEL_MAP_VIVIDHEIF1_HEIC_RAW_PIXELFORMAT7_0200', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_PIXEL_MAP_VIVIDHEIF1_HEIC_RAW_PIXELFORMAT7_0200";
      let imageSoureApi = await getImageSource(filePaths[4], 'rawfile')
      console.log('optionsAutoFormat7 :' + JSON.stringify(optionsAutoFormat7))
      imageSoureApi.createPixelMap(optionsAutoFormat7, async (error: BusinessError, pixeMap: image.PixelMap) => {
        if (error != undefined) {
          console.error('optionsAutoFormat7  createPixelMap error :' + error)
          expect().assertFail()
          done()
        } else {
          let info = await pixeMap.getImageInfo();
          console.log('optionsAutoFormat7 info  :' + JSON.stringify(info))
          if(screen){
            expect(info.isHdr).assertTrue();
            expect(info.pixelFormat == image.PixelMapFormat.RGBA_1010102).assertTrue()
          }else{
            expect(info.isHdr).assertFalse()
            expect(info.pixelFormat == image.PixelMapFormat.RGBA_8888).assertTrue()
          }
          try {
            await pixeMap.toSdr()
            info = await pixeMap.getImageInfo();
            console.log('optionsAutoFormat7 info 11 :' + JSON.stringify(info))
            expect(info.pixelFormat == image.PixelMapFormat.RGBA_8888).assertTrue()
            done()
          } catch (error) {
            console.log(`optionsAutoFormat7 ${tag} failed ${JSON.stringify(error)}`);
            expect(error.code).assertEqual("62980137")
            done()
          }
        }
      })

    })

    /**
     * @tc.number    : createPixelMapVIVIDHEIF1RawfilePixelformat80300
     * @tc.name      : SUB_MULTIMEDIA_CREATE_PIXEL_MAP_VIVIDHEIF1_HEIC_RAW_PIXELFORMAT8_0300
     * @tc.desc      : 1.create imageSource
     *                 2.set decodingOptions is AUTO,desiredPixelFormat is 8,desiredSize is { width: 3, height: 3 }
     *                 3.createPixelMap callback
     *                 4.pixelMap getImageInfo
     *                 5.pixelMap toSdr
     *                 6.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_PIXEL_MAP_VIVIDHEIF1_HEIC_RAW_PIXELFORMAT8_0300', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_PIXEL_MAP_VIVIDHEIF1_HEIC_RAW_PIXELFORMAT8_0300";
      let imageSoureApi = await getImageSource(filePaths[4], 'rawfile')
      console.log('optionsAutoFormat8 :' + JSON.stringify(optionsAutoFormat8))
      imageSoureApi.createPixelMap(optionsAutoFormat8, async (error: BusinessError, pixeMap: image.PixelMap) => {
        if (error != undefined) {
          console.error('optionsAutoFormat8  createPixelMap error :' + error)
          expect().assertFail()
          done()
        } else {
          let info = await pixeMap.getImageInfo();
          console.log('optionsAutoFormat8 info  :' + JSON.stringify(info))
          if(screen){
            expect(info.isHdr).assertTrue();
            expect(info.pixelFormat == image.PixelMapFormat.YCRCB_P010).assertTrue()
          }else{
            expect(info.isHdr).assertFalse()
            expect(info.pixelFormat == image.PixelMapFormat.NV21).assertTrue()
          }
          try {
            await pixeMap.toSdr()
            info = await pixeMap.getImageInfo();
            console.log('optionsAutoFormat8 info 11 :' + JSON.stringify(info))
            expect(info.pixelFormat == image.PixelMapFormat.NV21).assertTrue()
            done()
          } catch (error) {
            console.log(`optionsAutoFormat8 ${tag} failed ${JSON.stringify(error)}`);
            expect(error.code).assertEqual("62980137")
            done()
          }
        }
      })
    })

    /**
     * @tc.number    : createPixelMapVIVIDHEIF1RawfilePixelformat90400
     * @tc.name      : SUB_MULTIMEDIA_CREATE_PIXEL_MAP_VIVIDHEIF1_HEIC_RAW_PIXELFORMAT9_0400
     * @tc.desc      : 1.create imageSource
     *                 2.set decodingOptions is AUTO,desiredPixelFormat is 9,desiredSize is { width: 3, height: 6 }
     *                 3.createPixelMap callback
     *                 4.pixelMap getImageInfo
     *                 5.pixelMap toSdr
     *                 6.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_PIXEL_MAP_VIVIDHEIF1_HEIC_RAW_PIXELFORMAT9_0400', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_PIXEL_MAP_VIVIDHEIF1_HEIC_RAW_PIXELFORMAT9_0400";
      let imageSoureApi = await getImageSource(filePaths[4], 'rawfile')
      console.log('optionsAutoFormat9 :' + JSON.stringify(optionsAutoFormat9))
      imageSoureApi.createPixelMap(optionsAutoFormat9, async (error: BusinessError, pixeMap: image.PixelMap) => {
        if (error != undefined) {
          console.error('optionsAutoFormat9  createPixelMap error :' + error)
          expect().assertFail()
          done()
        } else {
          let info = await pixeMap.getImageInfo();
          console.log('optionsAutoFormat9 info  :' + JSON.stringify(info))
          if(screen){
            expect(info.isHdr).assertTrue();
            expect(info.pixelFormat == image.PixelMapFormat.YCBCR_P010).assertTrue()
          }else{
            expect(info.isHdr).assertFalse()
            expect(info.pixelFormat == image.PixelMapFormat.NV12).assertTrue()
          }
          try {
            await pixeMap.toSdr()
            info = await pixeMap.getImageInfo();
            console.log('optionsAutoFormat9 info 11 :' + JSON.stringify(info))
            expect(info.pixelFormat == image.PixelMapFormat.NV12).assertTrue()
            done()
          } catch (error) {
            console.log(`optionsAutoFormat9 ${tag} failed ${JSON.stringify(error)}`);
            expect(error.code).assertEqual("62980137")
            done()
          }
        }
      })
    })

    /**
     * @tc.number    : createPixelMapVIVIDHEIF1RawfilePixelformat100500
     * @tc.name      : SUB_MULTIMEDIA_CREATE_PIXEL_MAP_VIVIDHEIF1_HEIC_RAW_PIXELFORMAT10_0500
     * @tc.desc      : 1.create imageSource
     *                 2.set decodingOptions is AUTO,desiredPixelFormat is 10
     *                 3.createPixelMap callback
     *                 4.pixelMap getImageInfo
     *                 5.pixelMap toSdr
     *                 6.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_PIXEL_MAP_VIVIDHEIF1_HEIC_RAW_PIXELFORMAT10_0500', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_PIXEL_MAP_VIVIDHEIF1_HEIC_RAW_PIXELFORMAT10_0500";
      let imageSoureApi = await getImageSource(filePaths[4], 'rawfile')
      console.log('optionsAutoFormat10 :' + JSON.stringify(optionsAutoFormat10))
      imageSoureApi.createPixelMap(optionsAutoFormat10, async (error: BusinessError, pixeMap: image.PixelMap) => {
        if (error != undefined) {
          console.error('optionsAutoFormat10  createPixelMap error :' + error)
          expect().assertFail()
          done()
        } else {
          let info = await pixeMap.getImageInfo();
          console.log('optionsAutoFormat10 info  :' + JSON.stringify(info))
          if(screen){
            expect(info.isHdr).assertTrue();
            expect(info.pixelFormat == image.PixelMapFormat.RGBA_1010102).assertTrue()
          }else{
            expect(info.isHdr).assertFalse()
            expect(info.pixelFormat == image.PixelMapFormat.RGBA_8888).assertTrue()
          }
          try {
            await pixeMap.toSdr()
            info = await pixeMap.getImageInfo();
            console.log('optionsAutoFormat10 info 11 :' + JSON.stringify(info))
            expect(info.pixelFormat == image.PixelMapFormat.RGBA_8888).assertTrue()
            done()
          } catch (error) {
            console.log(`optionsAutoFormat10 ${tag} failed ${JSON.stringify(error)}`);
            expect(error.code).assertEqual("62980137")
            done()
          }
        }
      })
    })

    /**
     * @tc.number    : createPixelMapVIVIDHEIF1RawfilePixelformat20800
     * @tc.name      : SUB_MULTIMEDIA_CREATE_PIXEL_MAP_VIVIDHEIF1_HEIC_RAW_PIXELFORMAT2_0800
     * @tc.desc      : 1.create imageSource
     *                 2.set decodingOptions is AUTO,desiredPixelFormat is 2
     *                 3.createPixelMap callback
     *                 4.pixelMap getImageInfo
     *                 5.pixelMap toSdr
     *                 6.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_PIXEL_MAP_VIVIDHEIF1_HEIC_RAW_PIXELFORMAT2_0800', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_PIXEL_MAP_VIVIDHEIF1_HEIC_RAW_PIXELFORMAT2_0800";
      let imageSoureApi = await getImageSource(filePaths[4],'rawfile')
      console.log('optionsAutoFormat2 :' + JSON.stringify(optionsAutoFormat2))
      imageSoureApi.createPixelMap(optionsAutoFormat2,async (error:BusinessError,pixeMap:image.PixelMap) => {
        if(error != undefined) {
          console.error('optionsAutoFormat2  createPixelMap error :' + error)
          expect().assertFail()
          done()
        } else {
          let info = await pixeMap.getImageInfo();
          console.log('optionsAutoFormat2 info  :' + JSON.stringify(info))
          if(screen){
            expect(info.isHdr).assertTrue();
            expect(info.pixelFormat == image.PixelMapFormat.RGBA_1010102).assertTrue()
          }else{
            expect(info.isHdr).assertFalse()
            expect(info.pixelFormat == image.PixelMapFormat.RGB_565).assertTrue()
          }
          try{
            await pixeMap.toSdr()
            info = await pixeMap.getImageInfo();
            console.log('optionsAutoFormat2 info 11 :' + JSON.stringify(info))
            expect(info.pixelFormat == image.PixelMapFormat.RGBA_8888).assertTrue()
            done()
          }catch(error){
            console.log(`optionsAutoFormat2 ${tag} failed ${JSON.stringify(error)}`);
            expect(error.code).assertEqual("62980137")
            done()
          }
        }
      })
    })

    /**
     * @tc.number    : createPixelMapVIVIDHEIF1RawfilePixelformat30900
     * @tc.name      : SUB_MULTIMEDIA_CREATE_PIXEL_MAP_VIVIDHEIF1_HEIC_RAW_PIXELFORMAT3_0900
     * @tc.desc      : 1.create imageSource
     *                 2.set decodingOptions is AUTO,desiredPixelFormat is 3
     *                 3.createPixelMap callback
     *                 4.pixelMap getImageInfo
     *                 5.pixelMap toSdr
     *                 6.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_PIXEL_MAP_VIVIDHEIF1_HEIC_RAW_PIXELFORMAT3_0900', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_PIXEL_MAP_VIVIDHEIF1_HEIC_RAW_PIXELFORMAT3_0900";
      let imageSoureApi = await getImageSource(filePaths[4],'rawfile')
      console.log('optionsAutoFormat3 :' + JSON.stringify(optionsAutoFormat3))
      imageSoureApi.createPixelMap(optionsAutoFormat3,async (error:BusinessError,pixeMap:image.PixelMap) => {
        if(error != undefined) {
          console.error('optionsAutoFormat3  createPixelMap error :' + error)
          expect().assertFail()
          done()
        } else {
          let info = await pixeMap.getImageInfo();
          console.log('optionsAutoFormat3 info  :' + JSON.stringify(info))
          if(screen){
            expect(info.isHdr).assertTrue();
            expect(info.pixelFormat == image.PixelMapFormat.RGBA_1010102).assertTrue()
          }else{
            expect(info.isHdr).assertFalse()
            expect(info.pixelFormat == image.PixelMapFormat.RGBA_8888).assertTrue()
          }
          try{
            await pixeMap.toSdr()
            info = await pixeMap.getImageInfo();
            console.log('optionsAutoFormat3 info 11 :' + JSON.stringify(info))
            expect(info.pixelFormat == image.PixelMapFormat.RGBA_8888).assertTrue()
            done()
          }catch(error){
            console.log(`optionsAutoFormat3 ${tag} failed ${JSON.stringify(error)}`);
            expect(error.code).assertEqual("62980137")
            done()
          }
        }
      })
    })

    /**
     * @tc.number    : createPixelMapVIVIDHEIF1RawfilePixelformat51000
     * @tc.name      : SUB_MULTIMEDIA_CREATE_PIXEL_MAP_VIVIDHEIF1_HEIC_RAW_PIXELFORMAT5_1000
     * @tc.desc      : 1.create imageSource
     *                 2.set decodingOptions is AUTO,desiredPixelFormat is 5
     *                 3.createPixelMap callback
     *                 4.pixelMap getImageInfo
     *                 5.pixelMap toSdr
     *                 6.pixelMap getImageInfo
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_CREATE_PIXEL_MAP_VIVIDHEIF1_HEIC_RAW_PIXELFORMAT5_1000', 0, async (done: Function) => {
      const tag: string = "SUB_MULTIMEDIA_CREATE_PIXEL_MAP_VIVIDHEIF1_HEIC_RAW_PIXELFORMAT5_1000";
      let imageSoureApi = await getImageSource(filePaths[4],'rawfile')
      console.log('optionsAutoFormat5 :' + JSON.stringify(optionsAutoFormat5))
      imageSoureApi.createPixelMap(optionsAutoFormat5,async (error:BusinessError,pixeMap:image.PixelMap) => {
        if(error != undefined) {
          console.error('optionsAutoFormat5  createPixelMap error :' + error)
          //断言就超时
          if(screen){
            expect().assertFail()
          }
          done()
        } else {
          let info = await pixeMap.getImageInfo();
          console.log('optionsAutoFormat5 info  :' + JSON.stringify(info))
          screen ? expect(info.isHdr).assertTrue() : expect(info.isHdr).assertFalse()
          expect(info.pixelFormat == image.PixelMapFormat.RGBA_1010102).assertTrue()
          try{
            await pixeMap.toSdr()
            info = await pixeMap.getImageInfo();
            console.log('optionsAutoFormat5 info 11 :' + JSON.stringify(info))
            expect(info.pixelFormat == image.PixelMapFormat.RGBA_8888).assertTrue()
            done()
          }catch(error){
            console.log(`optionsAutoFormat5 ${tag} failed ${JSON.stringify(error)}`);
            expect(error.code).assertEqual("62980137")
            done()
          }
        }
      })
    })
  })
}
