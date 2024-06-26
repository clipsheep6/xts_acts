import { describe, it, expect, beforeAll, afterEach } from '@ohos/hypium'
import image from '@ohos.multimedia.image';
import hilog from '@ohos.hilog';
import colorSpaceManager from '@ohos.graphics.colorSpaceManager';
import rpc from '@ohos.rpc';
import {BusinessError} from '@ohos.base';
import common from '@ohos.app.ability.common';
import fs from '@ohos.file.fs';
import resourceManager from '@ohos.resourceManager';

let testContext: common.UIAbilityContext;
const promiseCallbackTestApis = ["writePixels", "readPixels", "flip", "translate"]
const syncTestApis = ["writePixelsSync", "readPixelsSync", "flipSync", "translateSync"]


//测试pixelMap接口applyColorSpace,根据输入的目标色彩空间targetColorSpace对图像像素颜色进行色彩空间转换，成功时用例通过
//testNum 用例编号
//pixelMap: 需要测试的pixelMap对象
//type: 接口的调用类型，包含promise、callback
//targetColorSpace: 目标色彩空间
let pixelMapApplyColorSpaceTest = async(done: Function, testNum: string, pixelMap: image.PixelMap, type: string,
                                        targetColorSpace:colorSpaceManager.ColorSpaceManager) => {
  if (type == 'promise') {
    await pixelMap.applyColorSpace(targetColorSpace)
    const csm = pixelMap.getColorSpace()
    expect(targetColorSpace.getColorSpaceName() === csm.getColorSpaceName()).assertTrue();
    done();
  }
  if (type == 'callback') {
    pixelMap.applyColorSpace(targetColorSpace, (error:BusinessError):void => {
      if (error != undefined) {
        hilog.info(0x0000, '${testNum}', '%{public}s', `${testNum}:${error}`);
        pixelMap.release();
        expect(false).assertTrue();
        done();
      } else {
        hilog.info(0x0000, '${testNum}', '%{public}s', `${testNum}:Succeeded`);
        const csm = pixelMap.getColorSpace()
        expect(targetColorSpace.getColorSpaceName() === csm.getColorSpaceName()).assertTrue();
        done();
      }
    })
  }
}

//测试pixelMap接口，params传入异常值时，当错误码与预期相同，用例通过；params传入正常值时，接口调用成功，用例通过；
//testNum 用例编号
//pixelMap: 需要测试的pixelMap对象
//type: 接口的调用类型，包含promise、callback
//pixelMapInterface：需要测试的接口，例：crop、writePixels
//params：调用接口需要的参数
let pixelMapInterfaceTest = async(done: Function, testNum: string, pixelMap: image.PixelMap, type: string,
                                  pixelMapInterface: string, ...params: Array<string|number|image.PositionArea|
  boolean|image.Region|undefined|null|ArrayBuffer>) => {
  if (type == 'promise') {
    try {
      const oldImageInfo = await pixelMap.getImageInfo()
      pixelMap[pixelMapInterface](...params).then(async () => {
        if(promiseCallbackTestApis.includes(pixelMapInterface)) {
          expect(true).assertTrue();
          done();
        }else{
          const newImageInfo = await pixelMap.getImageInfo()
          hilog.info(0x0000, '${testNum}', 'testTag: %{public}s, newSize:%{public}s', `${testNum}`,
            JSON.stringify(newImageInfo.size));
          hilog.info(0x0000, '${testNum}', 'testTag: %{public}s, oldSize:%{public}s', `${testNum}`,
            JSON.stringify(oldImageInfo.size));
          const result = oldImageInfo.size.height != newImageInfo.size.height &&
            oldImageInfo.size.width != newImageInfo.size.width
          expect(result).assertTrue()
          done()
        }
      }).catch((error:number) => {
        hilog.info(0x0000, '${testNum}', '%{public}s', `${testNum}:${error}`);
        pixelMap.release();
        expect(error === 62980115).assertTrue()
        done();
      })
    } catch (error) {
      hilog.info(0x0000, '${testNum}', '%{public}s', `${testNum}:${error}`);
      pixelMap.release();
      expect(false).assertTrue();
      done();
    }
  }
  if (type == 'callback') {
    try {
      const oldImageInfo = await pixelMap.getImageInfo()
      pixelMap[pixelMapInterface](...params, async (error:BusinessError):Promise<void> => {
        if (error != undefined) {
          hilog.info(0x0000, '${testNum}', '%{public}s', `${testNum}:${error}`);
          if(error.code == undefined){
            let errCode = Number(error);
            hilog.info(0x0000, '${testNum}', '%{public}s', `${testNum}:${errCode}`);
            pixelMap.release();
            expect(errCode === 62980115).assertTrue();
            return done();
          }
          pixelMap.release();
          expect(error.code === 62980115).assertTrue();
          done();
        } else {
          hilog.info(0x0000, '${testNum}', '%{public}s', `${testNum}:Succeeded`);
          if(promiseCallbackTestApis.includes(pixelMapInterface)) {
            expect(true).assertTrue();
            done();
          }else{
            const newImageInfo = await pixelMap.getImageInfo()
            const result = oldImageInfo.size.height != newImageInfo.size.height &&
              oldImageInfo.size.width != newImageInfo.size.width
            hilog.info(0x0000, '${testNum}', 'testTag: %{public}s, newSize:%{public}s', `${testNum}`,
              JSON.stringify(newImageInfo.size));
            hilog.info(0x0000, '${testNum}', 'testTag: %{public}s, oldSize:%{public}s', `${testNum}`,
              JSON.stringify(oldImageInfo.size));
            expect(result).assertTrue()
            done()
          }
          pixelMap.release();
          done();
        }
      })
    } catch (error) {
      hilog.info(0x0000, '${testNum}', '%{public}s', `${testNum}:${error}`);
      expect(false).assertTrue();
      done();
    }
  }
  if (type == 'sync') {
    try {
      if(syncTestApis.includes(pixelMapInterface)){
        pixelMap[pixelMapInterface](...params)
        expect(true).assertTrue();
        done();
      }else{
        const oldImageInfo = await pixelMap.getImageInfo()
        pixelMap[pixelMapInterface](...params)
        if("scaleSync" === pixelMapInterface && params[0] === 0 && params[1] === 0){
          expect(true).assertTrue()
          done()
        }else{
          const newImageInfo = await pixelMap.getImageInfo()
          const result = oldImageInfo.size.height != newImageInfo.size.height &&
            oldImageInfo.size.width != newImageInfo.size.width
          hilog.info(0x0000, '${testNum}', 'testTag: %{public}s, newSize:%{public}s', `${testNum}`,
            JSON.stringify(newImageInfo.size));
          hilog.info(0x0000, '${testNum}', 'testTag: %{public}s, oldSize:%{public}s', `${testNum}`,
            JSON.stringify(oldImageInfo.size));
          expect(result).assertTrue()
          done()
        }
      }
      pixelMap.release();
    } catch (error) {
      hilog.info(0x0000, '${testNum}', '%{public}s', `${testNum}:${error}`);
      pixelMap.release();
      expect(error === 62980115).assertTrue()
      done();
    }
  }
}

//测试pixelMap打包
//testNum 用例编号
//pixelMap: 需要测试的pixelMap对象
//type: 接口的调用类型，包含promise、callback
//quality：打包参数，设定输出图片质量的参数，取值范围为0-100
let pixelMapPacker = async(done: Function, testNum: string, pixelMap: image.PixelMap, type: string,
                           format: string, quality: number) => {
  const imagePackerApi : image.ImagePacker = image.createImagePacker();
  let packOpts: image.PackingOption = { format: format, quality: quality }
  if (type == 'promise') {
    try {
      imagePackerApi.packing(pixelMap, packOpts).then(() => {
        pixelMap.release();
        expect(true).assertTrue();
        done();
      }).catch((error:number) => {
        hilog.info(0x0000, '${testNum}', '%{public}s', `${testNum}:${error}`);
        pixelMap.release();
        expect(false).assertTrue()
        done();
      })
    } catch (error) {
      hilog.info(0x0000, '${testNum}', '%{public}s', `${testNum}:${error}`);
      expect(false).assertTrue();
      done();
    }
  }
  if (type == 'callback') {
    try {
      imagePackerApi.packing(pixelMap, packOpts, (error:BusinessError, data: ArrayBuffer):void => {
        if (error != undefined) {
          hilog.info(0x0000, '${testNum}', '%{public}s', `${testNum}:${error}`);
          if(error.code == undefined){
            let errCode = Number(error);
            hilog.info(0x0000, '${testNum}', '%{public}s', `${testNum}:${errCode}`);
            pixelMap.release();
            expect(false).assertTrue();
            return done();
          }
          pixelMap.release();
          expect(false).assertTrue();
          done();
        } else {
          hilog.info(0x0000, '${testNum}', '%{public}s', `${testNum}:Succeeded`);
          done();
        }
      })
    } catch (error) {
      hilog.info(0x0000, '${testNum}', '%{public}s', `${testNum}:${error}`);
      expect(false).assertTrue();
      done();
    }
  }
}

class MySequence implements rpc.Parcelable {
  pixel_map : image.PixelMap;
  constructor(conPixelMap : image.PixelMap) {
    this.pixel_map = conPixelMap;
  }
  marshalling(messageSequence : rpc.MessageSequence) {
    this.pixel_map.marshalling(messageSequence);
    return true;
  }
  unmarshalling(messageSequence : rpc.MessageSequence) {
    image.createPixelMap(new ArrayBuffer(96), {size: { height:4, width: 6}}).then((pixelParcel : image.PixelMap) => {
      pixelParcel.unmarshalling(messageSequence).then(async (pixelMap : image.PixelMap) => {
        this.pixel_map = pixelMap;
        await pixelMap.getImageInfo().then((imageInfo : image.ImageInfo) => {
          console.log("unmarshalling information h: " + imageInfo.size.height + " w: " + imageInfo.size.width);
        })
      })
    });
    return true;
  }
}

//测试pixelMap marshalling序列化和反序列化
//pixelMap: 需要测试的pixelMap对象
//testNum 用例编号
let testMarshalling = async(done:Function, pixelMap:image.PixelMap, testNum:string) => {
  try {
    let parcelable : MySequence = new MySequence(pixelMap);
    let data : rpc.MessageSequence = rpc.MessageSequence.create();
    data.writeParcelable(parcelable);
    let ret : MySequence = new MySequence(pixelMap);
    data.readParcelable(ret);
    done()
  } catch (error) {
    hilog.info(0x0000, '${testNum}', '%{public}s', `${testNum}:${error}`);
    expect(false).assertTrue()
    done();
  }
}

export default function imagepixelMapSupportYuv() {
  describe('pixelMapSupportYuvAbilityTest',  ()=> {

    let filePath: string;
    let fdNumber: number;

    beforeAll(async () => {
      testContext = AppStorage.get<common.UIAbilityContext>('testContext') as common.UIAbilityContext;
    })

    afterEach(async () => {
      try {
        fs.closeSync(fdNumber)
      } catch (error) {
        hilog.info(0x0000, 'testTag', '%{public}s', 'closeSync fdNumber error');
      }
      hilog.info(0x0000, 'testTag', '%{public}s', 'afterEach case');
    })


    const getFd = async (fileName: string) => {
      filePath = AppStorage.get('pathDir') + "/" + fileName;
      const file = fs.openSync(filePath, fs.OpenMode.READ_WRITE)
      fdNumber = file.fd
    }

    const getBuffer = async (fileName: string) => {
      filePath = AppStorage.get('pathDir') + '/' + fileName;
      let file = fs.openSync(filePath);
      const stats = fs.statSync(filePath);
      const fileSize = stats.size;
      const bufferRead = new ArrayBuffer(fileSize)
      fs.readSync(file.fd, bufferRead)
      return bufferRead
    }


    //创建imageSource对象并返回
    //type:创建imageSource的方式，取值: uri、fd、buffer,rawfile,incremental 默认fd
    //fileName: 文件名,例: yuv_test_oto.jpeg
    const getImageSource = async(fileName:string, type:string)=>{
      let imageSourceApi:image.ImageSource
      if(type === "buffer"){
        const buffer = await getBuffer(fileName)
        imageSourceApi = image.createImageSource(buffer)
      }else if(type === "uri"){
        const filePath = AppStorage.get('pathDir') + '/' + fileName
        imageSourceApi = image.createImageSource(filePath)
      }else if(type === "rawfile"){
        const resourceMgr: resourceManager.ResourceManager = testContext.createModuleContext("entry").resourceManager
        const rawFileDescriptor = await resourceMgr.getRawFd(fileName)
        imageSourceApi = image.createImageSource(rawFileDescriptor)
      }else if(type === "incremental") {
        const picBuffer = await getBuffer(fileName)
        imageSourceApi = image.CreateIncrementalSource(picBuffer)
      } else{
        await getFd(fileName)
        imageSourceApi = image.createImageSource(fdNumber);
      }
      return imageSourceApi
    }

    let getPixMap_NV12 = async (fileName:string, imageSourceType:string) => {
      let imageSourceApi = await getImageSource(fileName, imageSourceType);
      let decodingOptions: image.DecodingOptions = {
        editable: true,
        desiredPixelFormat: 9,
      };
      let pixelMap_NV12: image.PixelMap = await imageSourceApi.createPixelMap(decodingOptions);
      return pixelMap_NV12
    }

    let getPixMap_NV21 = async (fileName:string, imageSourceType:string) => {
      let imageSourceApi = await getImageSource(fileName, imageSourceType);
      let decodingOptions: image.DecodingOptions = {
        editable: true,
        desiredPixelFormat: 8,
      };
      let pixelMap_NV21: image.PixelMap = await imageSourceApi.createPixelMap(decodingOptions);
      return pixelMap_NV21
    }

    /**
     *
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV12_WRITEPIXELS_0100
     * @tc.name      : writePixels -promise
     * @tc.desc      : 1.createImageSource
     *                 2.createPixelMap
     *                 3.PixelMap.writePixels
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('SUB_MULTIMEDIA_IMAGE_NV12_WRITEPIXELS_0100', 0, async (done:Function) => {
      const testTag = "SUB_MULTIMEDIA_IMAGE_NV12_WRITEPIXELS_0100"
      try{
        let pixelMap_NV12 : image.PixelMap = await getPixMap_NV12("yuv_test_ete.jpg","fd");
        const area : image.PositionArea = {
          pixels: new ArrayBuffer(96),
          offset: 0,
          stride: 8,
          region: { size: { height: 2, width: 2 }, x: 0, y: 0 }
        };
        await pixelMapInterfaceTest(done, testTag, pixelMap_NV12, 'promise', 'writePixels', area);
      }catch(error){
        hilog.info(0x0000, testTag, `Test exception  ` + error);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV12_WRITEPIXELS_0200
     * @tc.name      : writePixels -callback
     * @tc.desc      : 1.createImageSource
     *                 2.createPixelMap
     *                 3.PixelMap.writePixels
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('SUB_MULTIMEDIA_IMAGE_NV12_WRITEPIXELS_0200', 0, async (done:Function) => {
      const testTag = "SUB_MULTIMEDIA_IMAGE_NV12_WRITEPIXELS_0200"
      try{
        let pixelMap_NV12 : image.PixelMap = await getPixMap_NV12("yuv_test_oto.jpeg","uri");
        const area : image.PositionArea = {
          pixels: new ArrayBuffer(96),
          offset: 0,
          stride: 8,
          region: { size: { height: 2, width: 2 }, x: 0, y: 0 }
        };
        await pixelMapInterfaceTest(done, testTag, pixelMap_NV12, 'callback', 'writePixels', area)
      }catch(error){
        hilog.info(0x0000, testTag, `Test exception  ` + error);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV12_WRITEPIXELS_0300
     * @tc.name      : writePixels -promise
     * @tc.desc      : 1.createImageSource
     *                 2.createPixelMap
     *                 3.PixelMap.writePixels
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_IMAGE_NV12_WRITEPIXELS_0300', 0, async (done:Function) => {
      const testTag = "SUB_MULTIMEDIA_IMAGE_NV12_WRITEPIXELS_0300"
      try{
        let pixelMap_NV12: image.PixelMap = await getPixMap_NV12("yuv_test_ote.jpg", "fd");
        const area: image.PositionArea = {
          pixels: new ArrayBuffer(0),
          offset: 0,
          stride: 8,
          region: { size: { height: 2, width: 2 }, x: 0, y: 0 }
        };
        await pixelMapInterfaceTest(done, testTag, pixelMap_NV12, 'promise', 'writePixels', area)}catch(error){
        hilog.info(0x0000, testTag, `Test exception  ` + error);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV12_WRITEPIXELS_0400
     * @tc.name      : writePixels -callback
     * @tc.desc      : 1.createImageSource
     *                 2.createPixelMap
     *                 3.PixelMap.writePixels
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_IMAGE_NV12_WRITEPIXELS_0400', 0, async (done:Function) => {
      const testTag = "SUB_MULTIMEDIA_IMAGE_NV12_WRITEPIXELS_0400"
      try{
        let pixelMap_NV12: image.PixelMap = await getPixMap_NV12("yuv_test_eto.jpg", "fd");
        const area: image.PositionArea = {
          pixels: new ArrayBuffer(0),
          offset: 1,
          stride: 8,
          region: { size: { height: 2, width: 2 }, x: 0, y: 0 }
        };
        await pixelMapInterfaceTest(done, testTag, pixelMap_NV12, 'callback', 'writePixels', area)
      }catch(error){
        hilog.info(0x0000, testTag, `Test exception  ` + error);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV12_WRITEPIXELS_0500
     * @tc.name      : writePixelsSync
     * @tc.desc      : 1.createImageSource
     *                 2.createPixelMap
     *                 3.PixelMap.writePixels
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('SUB_MULTIMEDIA_IMAGE_NV12_WRITEPIXELS_0500', 0, async (done:Function) => {
      const testTag = "SUB_MULTIMEDIA_IMAGE_NV12_WRITEPIXELS_0500"
      try{
        let pixelMap_NV12: image.PixelMap = await getPixMap_NV12("yuv_test_eto.jpg","fd");
        const area : image.PositionArea = {
          pixels: new ArrayBuffer(96),
          offset: 0,
          stride: 8,
          region: { size: { height: 2, width: 2 }, x: 0, y: 0 }
        };
        await pixelMapInterfaceTest(done, testTag, pixelMap_NV12, 'sync', 'writePixelsSync', area)
      }catch(error){
        hilog.info(0x0000, testTag, `Test exception  ` + error);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV12_WRITEPIXELS_0600
     * @tc.name      : writePixelsSync
     * @tc.desc      : 1.createImageSource
     *                 2.createPixelMap
     *                 3.PixelMap.writePixels
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_IMAGE_NV12_WRITEPIXELS_0600', 0, async (done:Function) => {
      const testTag = "SUB_MULTIMEDIA_IMAGE_NV12_WRITEPIXELS_0600"
      try{
        let pixelMap_NV12: image.PixelMap = await getPixMap_NV12("yuv_test_ete.jpg","uri");
        const area : image.PositionArea = {
          pixels: new ArrayBuffer(0),
          offset: 0,
          stride: 8,
          region: { size: { height: 2, width: 2 }, x: 0, y: 0 }
        };
        await pixelMapInterfaceTest(done, testTag, pixelMap_NV12, 'sync', 'writePixelsSync', area)
      }catch(error){
        hilog.info(0x0000, testTag, `Test exception  ` + error);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV12_READPIXELS_0100
     * @tc.name      : writePixels -promise
     * @tc.desc      : 1.createImageSource
     *                 2.createPixelMap
     *                 3.PixelMap.readPixels
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('SUB_MULTIMEDIA_IMAGE_NV12_READPIXELS_0100', 0, async (done:Function) => {
      const testTag = "SUB_MULTIMEDIA_IMAGE_NV12_READPIXELS_0100"
      try{
        let pixelMap_NV12 : image.PixelMap = await getPixMap_NV12("yuv_test_oto.jpeg","buffer");
        const area : image.PositionArea = {
          pixels: new ArrayBuffer(96),
          offset: 0,
          stride: 8,
          region: { size: { height: 2, width: 2 }, x: 0, y: 0 }
        };
        await pixelMapInterfaceTest(done, testTag, pixelMap_NV12, 'promise', 'readPixels', area)
      }catch(error){
        hilog.info(0x0000, testTag, `Test exception  ` + error);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV12_READPIXELS_0200
     * @tc.name      : writePixels -callback
     * @tc.desc      : 1.createImageSource
     *                 2.createPixelMap
     *                 3.PixelMap.readPixels
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('SUB_MULTIMEDIA_IMAGE_NV12_READPIXELS_0200', 0, async (done:Function) => {
      const testTag = "SUB_MULTIMEDIA_IMAGE_NV12_READPIXELS_0200"
      try{
        let pixelMap_NV12 : image.PixelMap = await getPixMap_NV12("yuv_test_ote.jpg","fd");
        const area : image.PositionArea = {
          pixels: new ArrayBuffer(96),
          offset: 0,
          stride: 8,
          region: { size: { height: 2, width: 2 }, x: 0, y: 0 }
        };
        await pixelMapInterfaceTest(done, testTag, pixelMap_NV12, 'callback', 'readPixels', area)
      }catch(error){
        hilog.info(0x0000, testTag, `Test exception  ` + error);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV12_READPIXELS_0300
     * @tc.name      : writePixels -promise
     * @tc.desc      : 1.createImageSource
     *                 2.createPixelMap
     *                 3.PixelMap.readPixels
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_IMAGE_NV12_READPIXELS_0300', 0, async (done:Function) => {
      const testTag = "SUB_MULTIMEDIA_IMAGE_NV12_READPIXELS_0300"
      try{
        let pixelMap_NV12 : image.PixelMap = await getPixMap_NV12("yuv_test_oto.jpeg","fd");
        const area : image.PositionArea = {
          pixels: new ArrayBuffer(0),
          offset: 0,
          stride: 8,
          region: { size: { height: 2, width: 2 }, x: 0, y: 0 }
        };
        await pixelMapInterfaceTest(done, testTag, pixelMap_NV12, 'promise', 'readPixels', area)}catch(error){
        hilog.info(0x0000, testTag, `Test exception  ` + error);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV12_READPIXELS_0400
     * @tc.name      : writePixels -callback
     * @tc.desc      : 1.createImageSource
     *                 2.createPixelMap
     *                 3.PixelMap.readPixels
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_IMAGE_NV12_READPIXELS_0400', 0, async (done:Function) => {
      const testTag = "SUB_MULTIMEDIA_IMAGE_NV12_READPIXELS_0400"
      try{
        let pixelMap_NV12: image.PixelMap = await getPixMap_NV12("yuv_test_ote.jpg","fd");
        const area: image.PositionArea = {
          pixels: new ArrayBuffer(0),
          offset: 1,
          stride: 8,
          region: {
            size: {
              height: 1, width: 2
            }, x: 0, y: 0
          }
        };
        await pixelMapInterfaceTest(done, testTag, pixelMap_NV12, 'callback', 'readPixels', area)}catch(error){
        hilog.info(0x0000, testTag, `Test exception  ` + error);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV12_READPIXELS_0500
     * @tc.name      : readPixelsSync
     * @tc.desc      : 1.createImageSource
     *                 2.createPixelMap
     *                 3.PixelMap.readPixels
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('SUB_MULTIMEDIA_IMAGE_NV12_READPIXELS_0500', 0, async (done:Function) => {
      const testTag = "SUB_MULTIMEDIA_IMAGE_NV12_READPIXELS_0500"
      try{
        let pixelMap_NV12 : image.PixelMap = await getPixMap_NV12("yuv_test_ete.jpg","fd");
        const area : image.PositionArea = {
          pixels: new ArrayBuffer(96),
          offset: 0,
          stride: 8,
          region: { size: { height: 2, width: 2 }, x: 0, y: 0 }
        };
        await pixelMapInterfaceTest(done, testTag, pixelMap_NV12, 'sync', 'readPixelsSync', area)}catch(error){
        hilog.info(0x0000, testTag, `Test exception  ` + error);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV12_READPIXELS_0600
     * @tc.name      : readPixelsSync
     * @tc.desc      : 1.createImageSource
     *                 2.createPixelMap
     *                 3.PixelMap.readPixels
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_IMAGE_NV12_READPIXELS_0600', 0, async (done:Function) => {
      const testTag = "SUB_MULTIMEDIA_IMAGE_NV12_READPIXELS_0600"
      try{
        let pixelMap_NV12 : image.PixelMap = await getPixMap_NV12("yuv_test_ote.jpg", "fd");
        const area : image.PositionArea = {
          pixels: new ArrayBuffer(0),
          offset: 0,
          stride: 8,
          region: { size: { height: 2, width: 2 }, x: 0, y: 0 }
        };
        await pixelMapInterfaceTest(done, testTag, pixelMap_NV12, 'sync', 'readPixelsSync', area)
      }catch(error){
        hilog.info(0x0000, testTag, `Test exception  ` + error);
        expect().assertFail();
        done();
      }
    })


    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV12_APPLYCOLORSPACE_0100
     * @tc.name      : applyColorSpace -promise
     * @tc.desc      : 1.createImageSource
     *                 2.createPixelMap
     *                 3.PixelMap.applyColorSpace
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('SUB_MULTIMEDIA_IMAGE_NV12_APPLYCOLORSPACE_0100', 0, async (done:Function) => {
      const testTag = "SUB_MULTIMEDIA_IMAGE_NV12_APPLYCOLORSPACE_0100"
      try{
        let pixelMap_NV12 : image.PixelMap = await getPixMap_NV12("yuv_test_oto.jpeg", "fd");
        let colorSpaceName = colorSpaceManager.ColorSpace.SRGB;
        let targetColorSpace : colorSpaceManager.ColorSpaceManager = colorSpaceManager.create(colorSpaceName);
        await pixelMapApplyColorSpaceTest(done, testTag, pixelMap_NV12, 'promise',  targetColorSpace)
      }catch(error){
        hilog.info(0x0000, testTag, `Test exception  ` + error);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV12_APPLYCOLORSPACE_0200
     * @tc.name      : applyColorSpace -callback
     * @tc.desc      : 1.createImageSource
     *                 2.createPixelMap
     *                 3.PixelMap.applyColorSpace
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('SUB_MULTIMEDIA_IMAGE_NV12_APPLYCOLORSPACE_0200', 0, async (done:Function) => {
      const testTag = "SUB_MULTIMEDIA_IMAGE_NV12_APPLYCOLORSPACE_0200"
      try{
        let pixelMap_NV12 : image.PixelMap = await getPixMap_NV12("yuv_test_oto.jpeg","fd");
        let colorSpaceName = colorSpaceManager.ColorSpace.SRGB;
        let targetColorSpace : colorSpaceManager.ColorSpaceManager = colorSpaceManager.create(colorSpaceName);
        await pixelMapApplyColorSpaceTest(done, testTag, pixelMap_NV12,'callback', targetColorSpace)
      }catch(error){
        hilog.info(0x0000, testTag, `Test exception  ` + error);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV12_APPLYCOLORSPACE_0300
     * @tc.name      : applyColorSpace -promise
     * @tc.desc      : 1.createImageSource
     *                 2.createPixelMap
     *                 3.PixelMap.applyColorSpace
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('SUB_MULTIMEDIA_IMAGE_NV12_APPLYCOLORSPACE_0300', 0, async (done:Function) => {
      const testTag = "SUB_MULTIMEDIA_IMAGE_NV12_APPLYCOLORSPACE_0300"
      try{
        let pixelMap_NV12 : image.PixelMap = await getPixMap_NV12("yuv_test_oto.jpeg","uri");
        let colorSpaceName = colorSpaceManager.ColorSpace.DCI_P3;
        let targetColorSpace : colorSpaceManager.ColorSpaceManager = colorSpaceManager.create(colorSpaceName);
        await pixelMapApplyColorSpaceTest(done, testTag, pixelMap_NV12, 'promise',  targetColorSpace)
      }catch(error){
        hilog.info(0x0000, testTag, `Test exception  ` + error);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV12_APPLYCOLORSPACE_0400
     * @tc.name      : applyColorSpace -callback
     * @tc.desc      : 1.createImageSource
     *                 2.createPixelMap
     *                 3.PixelMap.applyColorSpace
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('SUB_MULTIMEDIA_IMAGE_NV12_APPLYCOLORSPACE_0400', 0, async (done:Function) => {
      const testTag = "SUB_MULTIMEDIA_IMAGE_NV12_APPLYCOLORSPACE_0400"
      try{
        let pixelMap_NV12 : image.PixelMap = await getPixMap_NV12("yuv_test_oto.jpeg", "fd");
        let colorSpaceName = colorSpaceManager.ColorSpace.DCI_P3;
        let targetColorSpace : colorSpaceManager.ColorSpaceManager = colorSpaceManager.create(colorSpaceName);
        await pixelMapApplyColorSpaceTest(done, testTag, pixelMap_NV12, 'callback',  targetColorSpace)
      }catch(error){
        hilog.info(0x0000, testTag, `Test exception  ` + error);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV12_APPLYCOLORSPACE_0500
     * @tc.name      : applyColorSpace -promise
     * @tc.desc      : 1.createImageSource
     *                 2.createPixelMap
     *                 3.PixelMap.applyColorSpace
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('SUB_MULTIMEDIA_IMAGE_NV12_APPLYCOLORSPACE_0500', 0, async (done:Function) => {
      const testTag = "SUB_MULTIMEDIA_IMAGE_NV12_APPLYCOLORSPACE_0500"
      try{
        let pixelMap_NV12 : image.PixelMap = await getPixMap_NV12("yuv_test_eto.jpg","fd");
        let colorSpaceName = colorSpaceManager.ColorSpace.DISPLAY_P3;
        let targetColorSpace : colorSpaceManager.ColorSpaceManager = colorSpaceManager.create(colorSpaceName);
        await pixelMapApplyColorSpaceTest(done, testTag, pixelMap_NV12, 'promise', targetColorSpace)
      }catch(error){
        hilog.info(0x0000, testTag, `Test exception  ` + error);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV12_APPLYCOLORSPACE_0600
     * @tc.name      : applyColorSpace -callback
     * @tc.desc      : 1.createImageSource
     *                 2.createPixelMap
     *                 3.PixelMap.applyColorSpace
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('SUB_MULTIMEDIA_IMAGE_NV12_APPLYCOLORSPACE_0600', 0, async (done:Function) => {
      const testTag = "SUB_MULTIMEDIA_IMAGE_NV12_APPLYCOLORSPACE_0600"
      try{
        let pixelMap_NV12 : image.PixelMap = await getPixMap_NV12("yuv_test_ete.jpg", "fd");
        let colorSpaceName = colorSpaceManager.ColorSpace.DISPLAY_P3;
        let targetColorSpace : colorSpaceManager.ColorSpaceManager = colorSpaceManager.create(colorSpaceName);
        await pixelMapApplyColorSpaceTest(done, testTag, pixelMap_NV12,'callback', targetColorSpace)
      }catch(error){
        hilog.info(0x0000, testTag, `Test exception  ` + error);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV12_APPLYCOLORSPACE_0700
     * @tc.name      : applyColorSpace -promise
     * @tc.desc      : 1.createImageSource
     *                 2.createPixelMap
     *                 3.PixelMap.applyColorSpace
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('SUB_MULTIMEDIA_IMAGE_NV12_APPLYCOLORSPACE_0700', 0, async (done:Function) => {
      const testTag = "SUB_MULTIMEDIA_IMAGE_NV12_APPLYCOLORSPACE_0700"
      try{
        let pixelMap_NV12 : image.PixelMap = await getPixMap_NV12("yuv_test_eto.jpg","fd");
        let colorSpaceName = colorSpaceManager.ColorSpace.ADOBE_RGB_1998;
        let targetColorSpace : colorSpaceManager.ColorSpaceManager = colorSpaceManager.create(colorSpaceName);
        await pixelMapApplyColorSpaceTest(done, testTag, pixelMap_NV12, 'promise',  targetColorSpace)
      }catch(error){
        hilog.info(0x0000, testTag, `Test exception  ` + error);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV12_APPLYCOLORSPACE_0800
     * @tc.name      : applyColorSpace -callback
     * @tc.desc      : 1.createImageSource
     *                 2.createPixelMap
     *                 3.PixelMap.applyColorSpace
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('SUB_MULTIMEDIA_IMAGE_NV12_APPLYCOLORSPACE_0800', 0, async (done:Function) => {
      const testTag = "SUB_MULTIMEDIA_IMAGE_NV12_APPLYCOLORSPACE_0800"
      try{
        let pixelMap_NV12 : image.PixelMap = await getPixMap_NV12("yuv_test_oto.jpeg","fd");
        let colorSpaceName = colorSpaceManager.ColorSpace.ADOBE_RGB_1998;
        let targetColorSpace : colorSpaceManager.ColorSpaceManager = colorSpaceManager.create(colorSpaceName);
        await pixelMapApplyColorSpaceTest(done, testTag, pixelMap_NV12, 'callback', targetColorSpace)
      }catch(error){
        hilog.info(0x0000, testTag, `Test exception  ` + error);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV12_SCALE_0100
     * @tc.name      : scale -promise
     * @tc.desc      : 1.createImageSource
     *                 2.createPixelMap
     *                 3.PixelMap.scale
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('SUB_MULTIMEDIA_IMAGE_NV12_SCALE_0100', 0, async (done: Function) => {
      const testTag = "SUB_MULTIMEDIA_IMAGE_NV12_SCALE_0100"
      try{
        let pixelMap_NV12 : image.PixelMap = await getPixMap_NV12("yuv_test_ete.jpg", "fd");
        await pixelMapInterfaceTest(done, testTag, pixelMap_NV12, 'promise', 'scale', 2, 2)
      }catch(error){
        hilog.info(0x0000, testTag, `Test exception  ` + error);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV12_SCALE_0200
     * @tc.name      : scale -callback
     * @tc.desc      : 1.createImageSource
     *                 2.createPixelMap
     *                 3.PixelMap.scale
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('SUB_MULTIMEDIA_IMAGE_NV12_SCALE_0200', 0, async (done: Function) => {
      const testTag = "SUB_MULTIMEDIA_IMAGE_NV12_SCALE_0200"
      try{
        let pixelMap_NV12 : image.PixelMap = await getPixMap_NV12("yuv_test_eto.jpg", "rawfile");
        await pixelMapInterfaceTest(done, testTag, pixelMap_NV12, 'callback', 'scale', 2, 2)
      }catch(error){
        hilog.info(0x0000, testTag, `Test exception  ` + error);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV12_SCALE_0300
     * @tc.name      : scale -promise
     * @tc.desc      : 1.createImageSource
     *                 2.createPixelMap
     *                 3.PixelMap.scale
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_IMAGE_NV12_SCALE_0300', 0, async (done: Function) => {
      const testTag = "SUB_MULTIMEDIA_IMAGE_NV12_SCALE_0300"
      try{
        let pixelMap_NV12 : image.PixelMap = await getPixMap_NV12("yuv_test_oto.jpeg", "fd");
        await pixelMapInterfaceTest(done, testTag, pixelMap_NV12, 'promise', 'scale', 0.5, 0.5)
      }catch(error){
        hilog.info(0x0000, testTag, `Test exception  ` + error);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV12_SCALE_0400
     * @tc.name      : scale -callback
     * @tc.desc      : 1.createImageSource
     *                 2.createPixelMap
     *                 3.PixelMap.scale
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */

    it('SUB_MULTIMEDIA_IMAGE_NV12_SCALE_0400', 0, async (done:Function) => {
      const testTag = "SUB_MULTIMEDIA_IMAGE_NV12_SCALE_0400"
      try{
        let pixelMap_NV12: image.PixelMap = await getPixMap_NV12("yuv_test_ote.jpg", "fd");
        await pixelMapInterfaceTest(done, testTag, pixelMap_NV12, 'callback', 'scale', 0.5, 0.5)
      }catch(error){
        hilog.info(0x0000, testTag, `Test exception  ` + error);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV12_SCALE_0500
     * @tc.name      : scaleSync
     * @tc.desc      : 1.createImageSource
     *                 2.createPixelMap
     *                 3.PixelMap.scale
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('SUB_MULTIMEDIA_IMAGE_NV12_SCALE_0500', 0, async (done: Function) => {
      const testTag = "SUB_MULTIMEDIA_IMAGE_NV12_SCALE_0500"
      try{
        let pixelMap_NV12 : image.PixelMap = await getPixMap_NV12("yuv_test_ete.jpg", "uri");
        await pixelMapInterfaceTest(done, testTag, pixelMap_NV12, 'sync', 'scaleSync', 2, 2)
      }catch(error){
        hilog.info(0x0000, testTag, `Test exception  ` + error);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV12_SCALE_0600
     * @tc.name      : scaleSync
     * @tc.desc      : 1.createImageSource
     *                 2.createPixelMap
     *                 3.PixelMap.scale
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_IMAGE_NV12_SCALE_0600', 0, async (done: Function) => {
      const testTag = "SUB_MULTIMEDIA_IMAGE_NV12_SCALE_0600"
      try{
        let pixelMap_NV12 : image.PixelMap = await getPixMap_NV12("yuv_test_oto.jpeg","fd");
        await pixelMapInterfaceTest(done, testTag, pixelMap_NV12, 'sync', 'scaleSync', 0.5, 0.5)
      }catch(error){
        hilog.info(0x0000, testTag, `Test exception  ` + error);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV12_FLIP_0100
     * @tc.name      : flip -promise
     * @tc.desc      : 1.createImageSource
     *                 2.createPixelMap
     *                 3.PixelMap.flip
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('SUB_MULTIMEDIA_IMAGE_NV12_FLIP_0100', 0, async (done: Function) => {
      const testTag = "SUB_MULTIMEDIA_IMAGE_NV12_FLIP_0100"
      try{
        let pixelMap_NV12: image.PixelMap = await getPixMap_NV12("yuv_test_oto.jpeg", "fd");
        await pixelMapInterfaceTest(done, testTag, pixelMap_NV12, 'promise', 'flip', false, true)
      }catch(error){
        hilog.info(0x0000, testTag, `Test exception  ` + error);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV12_FLIP_0200
     * @tc.name      : flip -callback
     * @tc.desc      : 1.createImageSource
     *                 2.createPixelMap
     *                 3.PixelMap.flip
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('SUB_MULTIMEDIA_IMAGE_NV12_FLIP_0200', 0, async (done: Function) => {
      const testTag = "SUB_MULTIMEDIA_IMAGE_NV12_FLIP_0200"
      try{
        let pixelMap_NV12: image.PixelMap = await getPixMap_NV12("yuv_test_ote.jpg","fd");
        await pixelMapInterfaceTest(done, testTag, pixelMap_NV12, 'callback', 'flip', false, true)
      }catch(error){
        hilog.info(0x0000, testTag, `Test exception  ` + error);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV12_FLIP_0300
     * @tc.name      : flip -promise
     * @tc.desc      : 1.createImageSource
     *                 2.createPixelMap
     *                 3.PixelMap.flip
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_IMAGE_NV12_FLIP_0300', 0, async (done: Function) => {
      const testTag = "SUB_MULTIMEDIA_IMAGE_NV12_FLIP_0300"
      try{
        let pixelMap_NV12: image.PixelMap = await getPixMap_NV12("yuv_test_ete.jpg", "buffer");
        await pixelMapInterfaceTest(done, testTag, pixelMap_NV12, 'promise', 'flip', true, false)
      }catch(error){
        hilog.info(0x0000, testTag, `Test exception  ` + error);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV12_FLIP_0400
     * @tc.name      : flip -callback
     * @tc.desc      : 1.createImageSource
     *                 2.createPixelMap
     *                 3.PixelMap.flip
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_IMAGE_NV12_FLIP_0400', 0, async (done:Function) => {
      const testTag = "SUB_MULTIMEDIA_IMAGE_NV12_FLIP_040"
      try{
        let pixelMap_NV12: image.PixelMap = await getPixMap_NV12("yuv_test_ete.jpg", "fd");
        await pixelMapInterfaceTest(done, testTag, pixelMap_NV12, 'callback', 'flip', true, false)
      }catch(error){
        hilog.info(0x0000, testTag, `Test exception  ` + error);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV12_FLIP_0500
     * @tc.name      : flipSync
     * @tc.desc      : 1.createImageSource
     *                 2.createPixelMap
     *                 3.PixelMap.flip
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('SUB_MULTIMEDIA_IMAGE_NV12_FLIP_0500', 0, async (done: Function) => {
      const testTag = "SUB_MULTIMEDIA_IMAGE_NV12_FLIP_0500"
      try{
        let pixelMap_NV12: image.PixelMap = await getPixMap_NV12("yuv_test_ete.jpg", "fd");
        await pixelMapInterfaceTest(done, testTag, pixelMap_NV12, 'sync', 'flipSync', false, true)
      }catch(error){
        hilog.info(0x0000, testTag, `Test exception  ` + error);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV12_FLIP_0600
     * @tc.name      : flipSync
     * @tc.desc      : 1.createImageSource
     *                 2.createPixelMap
     *                 3.PixelMap.flip
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_IMAGE_NV12_FLIP_0600', 0, async (done: Function) => {
      const testTag = "SUB_MULTIMEDIA_IMAGE_NV12_FLIP_0600"
      try{
        let pixelMap_NV12: image.PixelMap = await getPixMap_NV12("yuv_test_ete.jpg", "fd");
        await pixelMapInterfaceTest(done, testTag, pixelMap_NV12, 'sync', 'flipSync', true, false)
      }catch(error){
        hilog.info(0x0000, testTag, `Test exception  ` + error);
        expect().assertFail();
        done();
      }
    })


    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV12_TRANSLATE_0100
     * @tc.name      : translate -promise
     * @tc.desc      : 1.createImageSource
     *                 2.createPixelMap
     *                 3.PixelMap.translate
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('SUB_MULTIMEDIA_IMAGE_NV12_TRANSLATE_0100', 0, async (done: Function) => {
      const testTag = "SUB_MULTIMEDIA_IMAGE_NV12_TRANSLATE_0100"
      try{
        let pixelMap_NV12: image.PixelMap = await getPixMap_NV12("yuv_test_ete.jpg", "fd");
        await pixelMapInterfaceTest(done, testTag, pixelMap_NV12, 'promise', 'translate', 3, 1)
      }catch(error){
        hilog.info(0x0000, testTag, `Test exception  ` + error);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV12_TRANSLATE_0200
     * @tc.name      : translate -callback
     * @tc.desc      : 1.createImageSource
     *                 2.createPixelMap
     *                 3.PixelMap.translate
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('SUB_MULTIMEDIA_IMAGE_NV12_TRANSLATE_0200', 0, async (done: Function) => {
      const testTag = "SUB_MULTIMEDIA_IMAGE_NV12_TRANSLATE_0200"
      try{
        let pixelMap_NV12: image.PixelMap = await getPixMap_NV12("yuv_test_oto.jpeg", "fd");
        await pixelMapInterfaceTest(done, testTag, pixelMap_NV12, 'callback', 'translate', 3, 1)
      }catch(error){
        hilog.info(0x0000, testTag, `Test exception  ` + error);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV12_TRANSLATE_0300
     * @tc.name      : translate -promise
     * @tc.desc      : 1.createImageSource
     *                 2.createPixelMap
     *                 3.PixelMap.translate
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_IMAGE_NV12_TRANSLATE_0300', 0, async (done: Function) => {
      const testTag = "SUB_MULTIMEDIA_IMAGE_NV12_TRANSLATE_0300"
      try{
        let pixelMap_NV12: image.PixelMap = await getPixMap_NV12("yuv_test_eto.jpg", "fd");
        await pixelMapInterfaceTest(done, testTag, pixelMap_NV12, 'promise', 'translate', 0, 0)
      }catch(error){
        hilog.info(0x0000, testTag, `Test exception  ` + error);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV12_TRANSLATE_0400
     * @tc.name      : translate -callback
     * @tc.desc      : 1.createImageSource
     *                 2.createPixelMap
     *                 3.PixelMap.translate
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_IMAGE_NV12_TRANSLATE_0400', 0, async (done:Function) => {
      const testTag = "SUB_MULTIMEDIA_IMAGE_NV12_TRANSLATE_0400"
      try{
        let pixelMap_NV12: image.PixelMap = await getPixMap_NV12("yuv_test_ote.jpg", "fd");
        await pixelMapInterfaceTest(done, testTag, pixelMap_NV12, 'callback', 'translate', 0, 0)
      }catch(error){
        hilog.info(0x0000, testTag, `Test exception  ` + error);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV12_TRANSLATE_0500
     * @tc.name      : translateSync
     * @tc.desc      : 1.createImageSource
     *                 2.createPixelMap
     *                 3.PixelMap.translate
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('SUB_MULTIMEDIA_IMAGE_NV12_TRANSLATE_0500', 0, async (done: Function) => {
      const testTag = "SUB_MULTIMEDIA_IMAGE_NV12_TRANSLATE_0500"
      try{
        let pixelMap_NV12: image.PixelMap = await getPixMap_NV12("yuv_test_eto.jpg", "fd");
        await pixelMapInterfaceTest(done, testTag, pixelMap_NV12, 'sync', 'translateSync', 3, 1)
      }catch(error){
        hilog.info(0x0000, testTag, `Test exception  ` + error);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV12_TRANSLATE_0600
     * @tc.name      : translateSync
     * @tc.desc      : 1.createImageSource
     *                 2.createPixelMap
     *                 3.PixelMap.translate
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_IMAGE_NV12_TRANSLATE_0600', 0, async (done: Function) => {
      const testTag = "SUB_MULTIMEDIA_IMAGE_NV12_TRANSLATE_0600"
      try{
        let pixelMap_NV12: image.PixelMap = await getPixMap_NV12("yuv_test_ete.jpg", "fd");
        await pixelMapInterfaceTest(done, testTag, pixelMap_NV12, 'sync', 'translateSync', 0, 0)
      }catch(error){
        hilog.info(0x0000, testTag, `Test exception  ` + error);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV12_ROTATE_0100
     * @tc.name      : rotate -promise
     * @tc.desc      : 1.createImageSource
     *                 2.createPixelMap
     *                 3.PixelMap.rotate
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('SUB_MULTIMEDIA_IMAGE_NV12_ROTATE_0100', 0, async (done: Function) => {
      const testTag = "SUB_MULTIMEDIA_IMAGE_NV12_WRITEPIXELS_0100"
      try{
        let pixelMap_NV12: image.PixelMap = await getPixMap_NV12("yuv_test_ote.jpg", "rawfile");
        await pixelMapInterfaceTest(done, testTag, pixelMap_NV12, 'promise', 'rotate', 90)
      }catch(error){
        hilog.info(0x0000, testTag, `Test exception  ` + error);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV12_ROTATE_0200
     * @tc.name      : rotate -callback
     * @tc.desc      : 1.createImageSource
     *                 2.createPixelMap
     *                 3.PixelMap.rotate
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('SUB_MULTIMEDIA_IMAGE_NV12_ROTATE_0200', 0, async (done: Function) => {
      const testTag = "SUB_MULTIMEDIA_IMAGE_NV12_WRITEPIXELS_0100"
      try{
        let pixelMap_NV12: image.PixelMap = await getPixMap_NV12("yuv_test_ete.jpg", "fd");
        await pixelMapInterfaceTest(done, testTag, pixelMap_NV12, 'callback', 'rotate', 90)
      }catch(error){
        hilog.info(0x0000, testTag, `Test exception  ` + error);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV12_ROTATE_0300
     * @tc.name      : rotate -promise
     * @tc.desc      : 1.createImageSource
     *                 2.createPixelMap
     *                 3.PixelMap.rotate
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_IMAGE_NV12_ROTATE_0300', 0, async (done: Function) => {
      const testTag = "SUB_MULTIMEDIA_IMAGE_NV12_ROTATE_0300"
      try{
        let pixelMap_NV12: image.PixelMap = await getPixMap_NV12("yuv_test_eto.jpg", "fd");
        await pixelMapInterfaceTest(done, testTag, pixelMap_NV12, 'promise', 'rotate', -90)
      }catch(error){
        hilog.info(0x0000, testTag, `Test exception  ` + error);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV12_ROTATE_0400
     * @tc.name      : rotate -callback
     * @tc.desc      : 1.createImageSource
     *                 2.createPixelMap
     *                 3.PixelMap.rotate
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_IMAGE_NV12_ROTATE_0400', 0, async (done:Function) => {
      const testTag = "SUB_MULTIMEDIA_IMAGE_NV12_ROTATE_0400"
      try{
        let pixelMap_NV12: image.PixelMap = await getPixMap_NV12("yuv_test_oto.jpeg","fd");
        await pixelMapInterfaceTest(done, testTag, pixelMap_NV12, 'callback', 'rotate', -90)
      }catch(error){
        hilog.info(0x0000, testTag, `Test exception  ` + error);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV12_ROTATE_0500
     * @tc.name      : rotateSync
     * @tc.desc      : 1.createImageSource
     *                 2.createPixelMap
     *                 3.PixelMap.rotate
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('SUB_MULTIMEDIA_IMAGE_NV12_ROTATE_0500', 0, async (done: Function) => {
      const testTag = "SUB_MULTIMEDIA_IMAGE_NV12_ROTATE_0500"
      try{
        let pixelMap_NV12: image.PixelMap = await getPixMap_NV12("yuv_test_ote.jpg", "fd");
        await pixelMapInterfaceTest(done, testTag, pixelMap_NV12, 'sync', 'rotateSync', 90)
      }catch(error){
        hilog.info(0x0000, testTag, `Test exception  ` + error);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV12_ROTATE_0600
     * @tc.name      : rotateSync
     * @tc.desc      : 1.createImageSource
     *                 2.createPixelMap
     *                 3.PixelMap.rotate
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_IMAGE_NV12_ROTATE_0600', 0, async (done: Function) => {
      const testTag = "SUB_MULTIMEDIA_IMAGE_NV12_ROTATE_0600"
      try{
        let pixelMap_NV12: image.PixelMap = await getPixMap_NV12("yuv_test_eto.jpg","fd");
        await pixelMapInterfaceTest(done, testTag, pixelMap_NV12, 'sync', 'rotateSync', -90)
      }catch(error){
        hilog.info(0x0000, testTag, `Test exception  ` + error);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV12_CROP_0100
     * @tc.name      : crop -promise
     * @tc.desc      : 1.createImageSource
     *                 2.createPixelMap
     *                 3.PixelMap.crop
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('SUB_MULTIMEDIA_IMAGE_NV12_CROP_0100', 0, async (done: Function) => {
      const testTag = "SUB_MULTIMEDIA_IMAGE_NV12_CROP_0100"
      try{
        let region : image.Region = { x: 0, y: 0, size: { height: 2, width: 3 } };
        let pixelMap_NV12: image.PixelMap = await getPixMap_NV12("yuv_test_ete.jpg", "fd");
        await pixelMapInterfaceTest(done, testTag, pixelMap_NV12, 'promise', 'crop', region)
      }catch(error){
        hilog.info(0x0000, testTag, `Test exception  ` + error);
        expect().assertFail();
        done();
      }

    })

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV12_CROP_0200
     * @tc.name      : crop -callback
     * @tc.desc      : 1.createImageSource
     *                 2.createPixelMap
     *                 3.PixelMap.crop
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('SUB_MULTIMEDIA_IMAGE_NV12_CROP_0200', 0, async (done: Function) => {
      const testTag = 'SUB_MULTIMEDIA_IMAGE_NV12_CROP_0200'
      try{
        let region : image.Region = { x: 0, y: 0, size: { height: 2, width: 3 } };
        let pixelMap_NV12: image.PixelMap = await getPixMap_NV12("yuv_test_eto.jpg","fd");
        await pixelMapInterfaceTest(done, testTag, pixelMap_NV12, 'callback', 'crop', region)
      }catch(error){
        hilog.info(0x0000, testTag, `Test exception  ` + error);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV12_CROP_0300
     * @tc.name      : crop -promise
     * @tc.desc      : 1.createImageSource
     *                 2.createPixelMap
     *                 3.PixelMap.crop
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_IMAGE_NV12_CROP_0300', 0, async (done: Function) => {
      const testTag = 'SUB_MULTIMEDIA_IMAGE_NV12_CROP_0300'
      try{
        let region : image.Region = { x: 0, y: 0, size: { height: -1, width: 3 } };
        let pixelMap_NV12: image.PixelMap = await getPixMap_NV12("yuv_test_oto.jpeg", "fd");
        await pixelMapInterfaceTest(done, testTag, pixelMap_NV12, 'promise', 'crop', region);
      }catch(error){
        hilog.info(0x0000, testTag, `Test exception  ` + error);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV12_CROP_0400
     * @tc.name      : crop -callback
     * @tc.desc      : 1.createImageSource
     *                 2.createPixelMap
     *                 3.PixelMap.crop
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_IMAGE_NV12_CROP_0400', 0, async (done:Function) => {
      const testTag = 'SUB_MULTIMEDIA_IMAGE_NV12_CROP_0400'
      try{
        let region : image.Region = { x: 0, y: 0, size: { height: -1, width: 3 } };
        let pixelMap_NV12: image.PixelMap = await getPixMap_NV12("yuv_test_eto.jpg", "fd");
        await pixelMapInterfaceTest(done, testTag, pixelMap_NV12, 'callback', 'crop', region);
      }catch(error){
        hilog.info(0x0000, testTag, `Test exception  ` + error);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV12_CROP_0500
     * @tc.name      : crop -promise
     * @tc.desc      : 1.createImageSource
     *                 2.createPixelMap
     *                 3.PixelMap.crop
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_IMAGE_NV12_CROP_0500', 0, async (done: Function) => {
      const testTag = 'SUB_MULTIMEDIA_IMAGE_NV12_CROP_0500'
      try{
        let region : image.Region = { x: -1, y: 0, size: { height: 2, width: 3 } };
        let pixelMap_NV12: image.PixelMap = await getPixMap_NV12("yuv_test_ote.jpg", "fd");
        await pixelMapInterfaceTest(done, testTag, pixelMap_NV12, 'promise', 'crop', region);
      }catch(error){
        hilog.info(0x0000, testTag, `Test exception  ` + error);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV12_CROP_0600
     * @tc.name      : crop -callback
     * @tc.desc      : 1.createImageSource
     *                 2.createPixelMap
     *                 3.PixelMap.crop
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_IMAGE_NV12_CROP_0600', 0, async (done:Function) => {
      const testTag = 'SUB_MULTIMEDIA_IMAGE_NV12_CROP_0600'
      try{
        let region : image.Region = { x: -1, y: 0, size: { height: 2, width: 3 } };
        let pixelMap_NV12: image.PixelMap = await getPixMap_NV12("yuv_test_eto.jpg", "fd");
        await pixelMapInterfaceTest(done, testTag, pixelMap_NV12, 'callback', 'crop', region);
      }catch(error){
        hilog.info(0x0000, testTag, `Test exception  ` + error);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV12_CROP_0700
     * @tc.name      : cropSync
     * @tc.desc      : 1.createImageSource
     *                 2.createPixelMap
     *                 3.PixelMap.crop
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('SUB_MULTIMEDIA_IMAGE_NV12_CROP_0700', 0, async (done: Function) => {
      const testTag = 'SUB_MULTIMEDIA_IMAGE_NV12_CROP_0700'
      try{
        let region : image.Region = { x: 0, y: 0, size: { height: 2, width: 3 } };
        let pixelMap_NV12: image.PixelMap = await getPixMap_NV12("yuv_test_ete.jpg","fd");
        await pixelMapInterfaceTest(done, testTag, pixelMap_NV12, 'sync', 'cropSync', region);
      }catch(error){
        hilog.info(0x0000, testTag, `Test exception  ` + error);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV12_PACKING_0100
     * @tc.name      : packing -promise
     * @tc.desc      : 1.modifyImageProperty
     *                 2.packing
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('SUB_MULTIMEDIA_IMAGE_NV12_PACKING_0100', 0,  async (done:Function) => {
      const testTag = "SUB_MULTIMEDIA_IMAGE_NV12_WRITEPIXELS_0100"
      try{
        let pixelMap_NV12: image.PixelMap = await getPixMap_NV12("yuv_test_oto.jpeg", "buffer");
        await pixelMapPacker(done, testTag, pixelMap_NV12, 'promise', 'image/jpeg', 98)
      }catch(error){
        hilog.info(0x0000, testTag, `Test exception  ` + error);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV12_PACKING_0200
     * @tc.name      : packing -callback
     * @tc.desc      : 1.modifyImageProperty
     *                 2.packing
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('SUB_MULTIMEDIA_IMAGE_NV12_PACKING_0200', 0,  async (done:Function) => {
      const testTag = "SUB_MULTIMEDIA_IMAGE_NV12_WRITEPIXELS_0100"
      try{
        let pixelMap_NV12: image.PixelMap = await getPixMap_NV12("yuv_test_eto.jpg", "fd");
        await pixelMapPacker(done, testTag, pixelMap_NV12, 'callback', 'image/jpeg', 98)
      }catch(error){
        hilog.info(0x0000, testTag, `Test exception  ` + error);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV12_MIXINGAPIS_0100
     * @tc.name      : setColorSpace -sync
     * @tc.desc      : 1.createImageSource
     *                 2.getBytesNumberPerRow
     *                 3.getImageInfoSync
     *                 4.setColorSpace
     *                 5.getColorSpace
     *                 6.getColorSpaceName
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('SUB_MULTIMEDIA_IMAGE_NV12_MIXINGAPIS_0100', 0,  async (done:Function) => {
      const testTag = 'SUB_MULTIMEDIA_IMAGE_NV12_MIXINGAPIS_0100'
      try {
        let pixelMap_NV12: image.PixelMap = await getPixMap_NV12("yuv_test_ote.jpg", "fd");
        const rowCount: number = pixelMap_NV12.getBytesNumberPerRow();
        const compRowCount:Boolean = rowCount > 0
        const imageInfo = pixelMap_NV12.getImageInfoSync();
        const getDensity: number = pixelMap_NV12.getDensity();
        const compDensity:Boolean = imageInfo.density === getDensity
        let colorSpaceName = colorSpaceManager.ColorSpace.SRGB;
        let csm: colorSpaceManager.ColorSpaceManager = colorSpaceManager.create(colorSpaceName);
        pixelMap_NV12.setColorSpace(csm);
        let csm2 = pixelMap_NV12.getColorSpace();
        const compCsm:Boolean = csm.getColorSpaceName() === csm2.getColorSpaceName()
        expect(compCsm && compDensity && compRowCount ).assertTrue();
        done()
      } catch (error) {
        hilog.info(0x0000, testTag, `Test exception  ` + error);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV12_MARSHALLING_0100
     * @tc.name      : marshalling
     * @tc.desc      : 1.createImageSource
     *                 2.createPixelMap
     *                 2.MySequence
     *                 3.rpc.MessageSequence.writeParcelable
     *                 4.rpc.MessageSequence.readParcelable
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('SUB_MULTIMEDIA_IMAGE_NV12_MARSHALLING_0100', 0, async (done:Function) => {
      const testTag ="SUB_MULTIMEDIA_IMAGE_NV12_MARSHALLING_0100"
      try {
        let pixelMap_NV12: image.PixelMap = await getPixMap_NV12("yuv_test_ete.jpg", "fd");
        await testMarshalling(done, pixelMap_NV12, testTag);
      } catch (error) {
        hilog.info(0x0000, testTag, `Test exception  ` + error);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV21_WRITEPIXELS_0100
     * @tc.name      : writePixels -promise
     * @tc.desc      : 1.createImageSource
     *                 2.createPixelMap
     *                 3.PixelMap.writePixels
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('SUB_MULTIMEDIA_IMAGE_NV21_WRITEPIXELS_0100', 0, async (done:Function) => {
      const testTag ="SUB_MULTIMEDIA_IMAGE_NV21_WRITEPIXELS_0100"
      try {
        let pixelMap_NV21 : image.PixelMap = await getPixMap_NV21("yuv_test_ote.jpg","fd");
        const area : image.PositionArea = {
          pixels: new ArrayBuffer(96),
          offset: 0,
          stride: 8,
          region: { size: { height: 2, width: 2 }, x: 0, y: 0 }
        };
        await pixelMapInterfaceTest(done, testTag, pixelMap_NV21, 'promise', 'writePixels', area);
      } catch (error) {
        hilog.info(0x0000, testTag, `Test exception  ` + error);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV21_WRITEPIXELS_0200
     * @tc.name      : writePixels -callback
     * @tc.desc      : 1.createImageSource
     *                 2.createPixelMap
     *                 3.PixelMap.writePixels
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('SUB_MULTIMEDIA_IMAGE_NV21_WRITEPIXELS_0200', 0, async (done:Function) => {
      const testTag ="SUB_MULTIMEDIA_IMAGE_NV21_WRITEPIXELS_0200"
      try{
        let pixelMap_NV21 : image.PixelMap = await getPixMap_NV21("yuv_test_ote.jpg", "fd");
        const area : image.PositionArea = {
          pixels: new ArrayBuffer(96),
          offset: 0,
          stride: 8,
          region: { size: { height: 2, width: 2 }, x: 0, y: 0 }
        };
        await pixelMapInterfaceTest(done, testTag, pixelMap_NV21, 'callback', 'writePixels', area);
      }catch(error){
        hilog.info(0x0000, testTag, `Test exception  ` + error);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV21_WRITEPIXELS_0300
     * @tc.name      : writePixels -promise
     * @tc.desc      : 1.createImageSource
     *                 2.createPixelMap
     *                 3.PixelMap.writePixels
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_IMAGE_NV21_WRITEPIXELS_0300', 0, async (done:Function) => {
      const testTag ="SUB_MULTIMEDIA_IMAGE_NV21_WRITEPIXELS_0300"
      try{
        let pixelMap_NV21 : image.PixelMap = await getPixMap_NV21("yuv_test_eto.jpg","fd");
        const area : image.PositionArea = {
          pixels: new ArrayBuffer(0),
          offset: 0,
          stride: 8,
          region: { size: { height: 2, width: 2 }, x: 0, y: 0 }
        };
        await pixelMapInterfaceTest(done, testTag, pixelMap_NV21, 'promise', 'writePixels', area);
      }catch(error){
        hilog.info(0x0000, testTag, `Test exception  ` + error);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV21_WRITEPIXELS_0400
     * @tc.name      : writePixels -callback
     * @tc.desc      : 1.createImageSource
     *                 2.createPixelMap
     *                 3.PixelMap.writePixels
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_IMAGE_NV21_WRITEPIXELS_0400', 0, async (done:Function) => {
      const testTag ="SUB_MULTIMEDIA_IMAGE_NV21_WRITEPIXELS_0400"
      try{
        let pixelMap_NV21: image.PixelMap = await getPixMap_NV21("yuv_test_ete.jpg","fd");
        const area: image.PositionArea = {
          pixels: new ArrayBuffer(0),
          offset: 1,
          stride: 8,
          region: { size: { height: 2, width: 2 }, x: 0, y: 0 }
        };
        await pixelMapInterfaceTest(done, testTag, pixelMap_NV21, 'callback', 'writePixels', area);
      }catch(error){
        hilog.info(0x0000, testTag, `Test exception  ` + error);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV21_WRITEPIXELS_0500
     * @tc.name      : writePixelsSync
     * @tc.desc      : 1.createImageSource
     *                 2.createPixelMap
     *                 3.PixelMap.writePixels
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('SUB_MULTIMEDIA_IMAGE_NV21_WRITEPIXELS_0500', 0, async (done:Function) => {
      const testTag ="SUB_MULTIMEDIA_IMAGE_NV21_WRITEPIXELS_0500"
      try{
        let pixelMap_NV21 : image.PixelMap = await getPixMap_NV21("yuv_test_ete.jpg","fd");
        const area : image.PositionArea = {
          pixels: new ArrayBuffer(96),
          offset: 0,
          stride: 8,
          region: { size: { height: 2, width: 2 }, x: 0, y: 0 }
        };
        await pixelMapInterfaceTest(done, testTag, pixelMap_NV21, 'sync', 'writePixelsSync', area);
      }catch(error){
        hilog.info(0x0000, testTag, `Test exception  ` + error);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV21_WRITEPIXELS_0600
     * @tc.name      : writePixelsSync
     * @tc.desc      : 1.createImageSource
     *                 2.createPixelMap
     *                 3.PixelMap.writePixels
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_IMAGE_NV21_WRITEPIXELS_0600', 0, async (done:Function) => {
      const testTag ="SUB_MULTIMEDIA_IMAGE_NV21_WRITEPIXELS_0600"
      try{
        let pixelMap_NV21 : image.PixelMap = await getPixMap_NV21("yuv_test_oto.jpeg","rawfile");
        const area : image.PositionArea = {
          pixels: new ArrayBuffer(0),
          offset: 0,
          stride: 8,
          region: { size: { height: 2, width: 2 }, x: 0, y: 0 }
        };
        await pixelMapInterfaceTest(done, testTag, pixelMap_NV21, 'sync', 'writePixelsSync', area);
      }catch(error){
        hilog.info(0x0000, testTag, `Test exception  ` + error);
        expect().assertFail();
        done();
      }
    })


    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV21_READPIXELS_0100
     * @tc.name      : writePixels -promise
     * @tc.desc      : 1.createImageSource
     *                 2.createPixelMap
     *                 3.PixelMap.readPixels
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('SUB_MULTIMEDIA_IMAGE_NV21_READPIXELS_0100', 0, async (done:Function) => {
      const testTag = "SUB_MULTIMEDIA_IMAGE_NV21_READPIXELS_0100"
      try{
        let pixelMap_NV21 : image.PixelMap = await getPixMap_NV21("yuv_test_oto.jpeg","uri");
        const area : image.PositionArea = {
          pixels: new ArrayBuffer(96),
          offset: 0,
          stride: 8,
          region: { size: { height: 2, width: 2 }, x: 0, y: 0 }
        };
        await pixelMapInterfaceTest(done, testTag, pixelMap_NV21, 'promise', 'readPixels', area);
      }catch(error){
        hilog.info(0x0000, testTag, `Test exception  ` + error);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV21_READPIXELS_0200
     * @tc.name      : writePixels -callback
     * @tc.desc      : 1.createImageSource
     *                 2.createPixelMap
     *                 3.PixelMap.readPixels
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('SUB_MULTIMEDIA_IMAGE_NV21_READPIXELS_0200', 0, async (done:Function) => {
      const testTag = "SUB_MULTIMEDIA_IMAGE_NV21_READPIXELS_0200"
      try{
        let pixelMap_NV21 : image.PixelMap = await getPixMap_NV21("yuv_test_eto.jpg","fd");
        const area : image.PositionArea = {
          pixels: new ArrayBuffer(96),
          offset: 0,
          stride: 8,
          region: { size: { height: 2, width: 2 }, x: 0, y: 0 }
        };
        await pixelMapInterfaceTest(done, testTag, pixelMap_NV21, 'callback', 'readPixels', area);
      }catch(error){
        hilog.info(0x0000, testTag, `Test exception  ` + error);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV21_READPIXELS_0300
     * @tc.name      : writePixels -promise
     * @tc.desc      : 1.createImageSource
     *                 2.createPixelMap
     *                 3.PixelMap.readPixels
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_IMAGE_NV21_READPIXELS_0300', 0, async (done:Function) => {
      const testTag = "SUB_MULTIMEDIA_IMAGE_NV21_READPIXELS_0300"
      try{
        let pixelMap_NV21 : image.PixelMap = await getPixMap_NV21("yuv_test_ote.jpg","fd");
        const area : image.PositionArea = {
          pixels: new ArrayBuffer(0),
          offset: 0,
          stride: 8,
          region: { size: { height: 2, width: 2 }, x: 0, y: 0 }
        };
        await pixelMapInterfaceTest(done, testTag, pixelMap_NV21, 'promise', 'readPixels', area);
      }catch(error){
        hilog.info(0x0000, testTag, `Test exception  ` + error);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV21_READPIXELS_0400
     * @tc.name      : writePixels -callback
     * @tc.desc      : 1.createImageSource
     *                 2.createPixelMap
     *                 3.PixelMap.readPixels
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_IMAGE_NV21_READPIXELS_0400', 0, async (done:Function) => {
      const testTag = "SUB_MULTIMEDIA_IMAGE_NV21_READPIXELS_0400"
      try{
        let pixelMap_NV21: image.PixelMap = await getPixMap_NV21("yuv_test_ete.jpg","rawfile");
        const area: image.PositionArea = {
          pixels: new ArrayBuffer(0),
          offset: 1,
          stride: 8,
          region: {
            size: {
              height: 1, width: 2
            }, x: 0, y: 0
          }
        };
        await pixelMapInterfaceTest(done, testTag, pixelMap_NV21, 'callback', 'readPixels', area);
      }catch(error){
        hilog.info(0x0000, testTag, `Test exception  ` + error);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV21_READPIXELS_0500
     * @tc.name      : readPixelsSync
     * @tc.desc      : 1.createImageSource
     *                 2.createPixelMap
     *                 3.PixelMap.readPixels
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('SUB_MULTIMEDIA_IMAGE_NV21_READPIXELS_0500', 0, async (done:Function) => {
      const testTag = "SUB_MULTIMEDIA_IMAGE_NV21_READPIXELS_0500"
      try{
        let pixelMap_NV21 : image.PixelMap = await getPixMap_NV21("yuv_test_ete.jpg", "fd");
        const area : image.PositionArea = {
          pixels: new ArrayBuffer(96),
          offset: 0,
          stride: 8,
          region: { size: { height: 2, width: 2 }, x: 0, y: 0 }
        };
        await pixelMapInterfaceTest(done, testTag, pixelMap_NV21, 'sync', 'readPixelsSync', area);
      }catch(error){
        hilog.info(0x0000, testTag, `Test exception  ` + error);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV21_READPIXELS_0600
     * @tc.name      : readPixelsSync
     * @tc.desc      : 1.createImageSource
     *                 2.createPixelMap
     *                 3.PixelMap.readPixels
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_IMAGE_NV21_READPIXELS_0600', 0, async (done:Function) => {
      const testTag = "SUB_MULTIMEDIA_IMAGE_NV21_READPIXELS_0600"
      try{
        let pixelMap_NV21 : image.PixelMap = await getPixMap_NV21("yuv_test_eto.jpg","df");
        const area : image.PositionArea = {
          pixels: new ArrayBuffer(0),
          offset: 0,
          stride: 8,
          region: { size: { height: 2, width: 2 }, x: 0, y: 0 }
        };
        await pixelMapInterfaceTest(done, testTag, pixelMap_NV21, 'sync', 'readPixelsSync', area);
      }catch(error){
        hilog.info(0x0000, testTag, `Test exception  ` + error);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV21_APPLYCOLORSPACE_0100
     * @tc.name      : applyColorSpace -promise
     * @tc.desc      : 1.createImageSource
     *                 2.createPixelMap
     *                 3.PixelMap.applyColorSpace
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('SUB_MULTIMEDIA_IMAGE_NV21_APPLYCOLORSPACE_0100', 0, async (done:Function) => {
      const testTag = "SUB_MULTIMEDIA_IMAGE_NV21_APPLYCOLORSPACE_0100"
      try{
        let pixelMap_NV21 : image.PixelMap = await getPixMap_NV21("yuv_test_ete.jpg", "buffer");
        let colorSpaceName = colorSpaceManager.ColorSpace.SRGB;
        let targetColorSpace : colorSpaceManager.ColorSpaceManager = colorSpaceManager.create(colorSpaceName);
        await pixelMapApplyColorSpaceTest(done, testTag, pixelMap_NV21, 'promise', targetColorSpace);
      }catch(error){
        hilog.info(0x0000, testTag, `Test exception  ` + error);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV21_APPLYCOLORSPACE_0200
     * @tc.name      : applyColorSpace -callback
     * @tc.desc      : 1.createImageSource
     *                 2.createPixelMap
     *                 3.PixelMap.applyColorSpace
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('SUB_MULTIMEDIA_IMAGE_NV21_APPLYCOLORSPACE_0200', 0, async (done:Function) => {
      const testTag = "SUB_MULTIMEDIA_IMAGE_NV21_APPLYCOLORSPACE_0200"
      try{
        let pixelMap_NV21: image.PixelMap = await getPixMap_NV21("yuv_test_ote.jpg", "fd");
        let colorSpaceName = colorSpaceManager.ColorSpace.SRGB;
        let targetColorSpace : colorSpaceManager.ColorSpaceManager = colorSpaceManager.create(colorSpaceName);
        await pixelMapApplyColorSpaceTest(done, testTag, pixelMap_NV21, 'callback', targetColorSpace);
      }catch(error){
        hilog.info(0x0000, testTag, `Test exception  ` + error);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV21_APPLYCOLORSPACE_0300
     * @tc.name      : applyColorSpace -promise
     * @tc.desc      : 1.createImageSource
     *                 2.createPixelMap
     *                 3.PixelMap.applyColorSpace
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('SUB_MULTIMEDIA_IMAGE_NV21_APPLYCOLORSPACE_0300', 0, async (done:Function) => {
      const testTag = "SUB_MULTIMEDIA_IMAGE_NV21_APPLYCOLORSPACE_0300"
      try{
        let pixelMap_NV21 : image.PixelMap = await getPixMap_NV21("yuv_test_oto.jpeg", "fd");
        let colorSpaceName = colorSpaceManager.ColorSpace.DCI_P3;
        let targetColorSpace : colorSpaceManager.ColorSpaceManager = colorSpaceManager.create(colorSpaceName);
        await pixelMapApplyColorSpaceTest(done, testTag, pixelMap_NV21, 'promise', targetColorSpace);
      }catch(error){
        hilog.info(0x0000, testTag, `Test exception  ` + error);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV21_APPLYCOLORSPACE_0400
     * @tc.name      : applyColorSpace -callback
     * @tc.desc      : 1.createImageSource
     *                 2.createPixelMap
     *                 3.PixelMap.applyColorSpace
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('SUB_MULTIMEDIA_IMAGE_NV21_APPLYCOLORSPACE_0400', 0, async (done:Function) => {
      const testTag = "SUB_MULTIMEDIA_IMAGE_NV21_APPLYCOLORSPACE_0400"
      try{
        let pixelMap_NV21 : image.PixelMap = await getPixMap_NV21("yuv_test_ote.jpg", "fd");
        let colorSpaceName = colorSpaceManager.ColorSpace.DCI_P3;
        let targetColorSpace : colorSpaceManager.ColorSpaceManager = colorSpaceManager.create(colorSpaceName);
        await pixelMapApplyColorSpaceTest(done, testTag, pixelMap_NV21, 'callback', targetColorSpace);
      }catch(error){
        hilog.info(0x0000, testTag, `Test exception  ` + error);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV21_APPLYCOLORSPACE_0500
     * @tc.name      : applyColorSpace -promise
     * @tc.desc      : 1.createImageSource
     *                 2.createPixelMap
     *                 3.PixelMap.applyColorSpace
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('SUB_MULTIMEDIA_IMAGE_NV21_APPLYCOLORSPACE_0500', 0, async (done:Function) => {
      const testTag = "SUB_MULTIMEDIA_IMAGE_NV21_APPLYCOLORSPACE_0500"
      try{
        let pixelMap_NV21 : image.PixelMap = await getPixMap_NV21("yuv_test_eto.jpg","fd");
        let colorSpaceName = colorSpaceManager.ColorSpace.DISPLAY_P3;
        let targetColorSpace : colorSpaceManager.ColorSpaceManager = colorSpaceManager.create(colorSpaceName);
        await pixelMapApplyColorSpaceTest(done, testTag, pixelMap_NV21, 'promise', targetColorSpace);
      }catch(error){
        hilog.info(0x0000, testTag, `Test exception  ` + error);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV21_APPLYCOLORSPACE_0600
     * @tc.name      : applyColorSpace -callback
     * @tc.desc      : 1.createImageSource
     *                 2.createPixelMap
     *                 3.PixelMap.applyColorSpace
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('SUB_MULTIMEDIA_IMAGE_NV21_APPLYCOLORSPACE_0600', 0, async (done:Function) => {
      const testTag = "SUB_MULTIMEDIA_IMAGE_NV21_APPLYCOLORSPACE_0600"
      try{
        let pixelMap_NV21 : image.PixelMap = await getPixMap_NV21("yuv_test_ete.jpg","fd");
        let colorSpaceName = colorSpaceManager.ColorSpace.DISPLAY_P3;
        let targetColorSpace : colorSpaceManager.ColorSpaceManager = colorSpaceManager.create(colorSpaceName);
        await pixelMapApplyColorSpaceTest(done, testTag, pixelMap_NV21, 'callback', targetColorSpace);
      }catch(error){
        hilog.info(0x0000, testTag, `Test exception  ` + error);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV21_APPLYCOLORSPACE_0700
     * @tc.name      : applyColorSpace -promise
     * @tc.desc      : 1.createImageSource
     *                 2.createPixelMap
     *                 3.PixelMap.applyColorSpace
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('SUB_MULTIMEDIA_IMAGE_NV21_APPLYCOLORSPACE_0700', 0, async (done:Function) => {
      const testTag = "SUB_MULTIMEDIA_IMAGE_NV21_APPLYCOLORSPACE_0700"
      try{
        let pixelMap_NV21 : image.PixelMap = await getPixMap_NV21("yuv_test_oto.jpeg","fd");
        let colorSpaceName = colorSpaceManager.ColorSpace.ADOBE_RGB_1998;
        let targetColorSpace : colorSpaceManager.ColorSpaceManager = colorSpaceManager.create(colorSpaceName);
        await pixelMapApplyColorSpaceTest(done, testTag, pixelMap_NV21, 'promise', targetColorSpace);
      }catch(error){
        hilog.info(0x0000, testTag, `Test exception  ` + error);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV21_APPLYCOLORSPACE_0800
     * @tc.name      : applyColorSpace -callback
     * @tc.desc      : 1.createImageSource
     *                 2.createPixelMap
     *                 3.PixelMap.applyColorSpace
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('SUB_MULTIMEDIA_IMAGE_NV21_APPLYCOLORSPACE_0800', 0, async (done:Function) => {
      const testTag = "SUB_MULTIMEDIA_IMAGE_NV21_APPLYCOLORSPACE_0800"
      try{
        let pixelMap_NV21: image.PixelMap = await getPixMap_NV21("yuv_test_ote.jpg","fd");
        let colorSpaceName = colorSpaceManager.ColorSpace.ADOBE_RGB_1998;
        let targetColorSpace : colorSpaceManager.ColorSpaceManager = colorSpaceManager.create(colorSpaceName);
        await pixelMapApplyColorSpaceTest(done, testTag, pixelMap_NV21, 'callback', targetColorSpace);
      }catch(error){
        hilog.info(0x0000, testTag, `Test exception  ` + error);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV21_SCALE_0100
     * @tc.name      : scale -promise
     * @tc.desc      : 1.createImageSource
     *                 2.createPixelMap
     *                 3.PixelMap.scale
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('SUB_MULTIMEDIA_IMAGE_NV21_SCALE_0100', 0, async (done: Function) => {
      const testTag = "SUB_MULTIMEDIA_IMAGE_NV21_SCALE_0100"
      try{
        let pixelMap_NV21 : image.PixelMap = await getPixMap_NV21("yuv_test_eto.jpg","fd");
        await pixelMapInterfaceTest(done, testTag, pixelMap_NV21, 'promise', 'scale', 2, 2);
      }catch(error){
        hilog.info(0x0000, testTag, `Test exception  ` + error);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV21_SCALE_0200
     * @tc.name      : scale -callback
     * @tc.desc      : 1.createImageSource
     *                 2.createPixelMap
     *                 3.PixelMap.scale
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('SUB_MULTIMEDIA_IMAGE_NV21_SCALE_0200', 0, async (done: Function) => {
      const testTag ="SUB_MULTIMEDIA_IMAGE_NV21_SCALE_0200"
      try{
        let pixelMap_NV21 : image.PixelMap = await getPixMap_NV21("yuv_test_ote.jpg","fd");
        await pixelMapInterfaceTest(done, testTag, pixelMap_NV21, 'callback', 'scale', 2, 2);
      }catch(error){
        hilog.info(0x0000, testTag, `Test exception  ` + error);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV21_SCALE_0300
     * @tc.name      : scale -promise
     * @tc.desc      : 1.createImageSource
     *                 2.createPixelMap
     *                 3.PixelMap.scale
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_IMAGE_NV21_SCALE_0300', 0, async (done: Function) => {
      const testTag ="SUB_MULTIMEDIA_IMAGE_NV21_SCALE_0300"
      try{
        let pixelMap_NV21 : image.PixelMap = await getPixMap_NV21("yuv_test_eto.jpg","fd");
        await pixelMapInterfaceTest(done, testTag, pixelMap_NV21, 'promise', 'scale', 0.5, 0.5);
      }catch(error){
        hilog.info(0x0000, testTag, `Test exception  ` + error);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV21_SCALE_0400
     * @tc.name      : scale -callback
     * @tc.desc      : 1.createImageSource
     *                 2.createPixelMap
     *                 3.PixelMap.scale
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */

    it('SUB_MULTIMEDIA_IMAGE_NV21_SCALE_0400', 0, async (done:Function) => {
      const testTag ="SUB_MULTIMEDIA_IMAGE_NV21_SCALE_0400"
      try{
        let pixelMap_NV21: image.PixelMap = await getPixMap_NV21("yuv_test_ote.jpg","fd");
        await pixelMapInterfaceTest(done, testTag, pixelMap_NV21, 'callback', 'scale', 0.5, 0.5);
      }catch(error){
        hilog.info(0x0000, testTag, `Test exception  ` + error);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV21_SCALE_0500
     * @tc.name      : scaleSync
     * @tc.desc      : 1.createImageSource
     *                 2.createPixelMap
     *                 3.PixelMap.scale
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('SUB_MULTIMEDIA_IMAGE_NV21_SCALE_0500', 0, async (done: Function) => {
      const testTag ="SUB_MULTIMEDIA_IMAGE_NV21_SCALE_0500"
      try{
        let pixelMap_NV21 : image.PixelMap = await getPixMap_NV21("yuv_test_eto.jpg","fd");
        await pixelMapInterfaceTest(done, testTag, pixelMap_NV21, 'sync', 'scaleSync', 2, 2);
      }catch(error){
        hilog.info(0x0000, testTag, `Test exception  ` + error);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV21_SCALE_0600
     * @tc.name      : scaleSync
     * @tc.desc      : 1.createImageSource
     *                 2.createPixelMap
     *                 3.PixelMap.scale
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_IMAGE_NV21_SCALE_0600', 0, async (done: Function) => {
      const testTag ="SUB_MULTIMEDIA_IMAGE_NV21_SCALE_0600"
      try{
        let pixelMap_NV21 : image.PixelMap = await getPixMap_NV21("yuv_test_oto.jpeg", "fd");
        await pixelMapInterfaceTest(done, testTag, pixelMap_NV21, 'sync', 'scaleSync', 0.5, 0.5);
      }catch(error){
        hilog.info(0x0000, testTag, `Test exception  ` + error);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV21_FLIP_0100
     * @tc.name      : flip -promise
     * @tc.desc      : 1.createImageSource
     *                 2.createPixelMap
     *                 3.PixelMap.flip
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('SUB_MULTIMEDIA_IMAGE_NV21_FLIP_0100', 0, async (done: Function) => {
      const testTag = "SUB_MULTIMEDIA_IMAGE_NV21_FLIP_0100"
      try{
        let pixelMap_NV21: image.PixelMap = await getPixMap_NV21("yuv_test_ote.jpg","fd");
        await pixelMapInterfaceTest(done, testTag, pixelMap_NV21, 'promise', 'flip', false, true);
      }catch(error){
        hilog.info(0x0000, testTag, `Test exception  ` + error);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV21_FLIP_0200
     * @tc.name      : flip -callback
     * @tc.desc      : 1.createImageSource
     *                 2.createPixelMap
     *                 3.PixelMap.flip
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('SUB_MULTIMEDIA_IMAGE_NV21_FLIP_0200', 0, async (done: Function) => {
      const testTag = "SUB_MULTIMEDIA_IMAGE_NV21_FLIP_0200"
      try{
        let pixelMap_NV21: image.PixelMap = await getPixMap_NV21("yuv_test_eto.jpg","fd");
        await pixelMapInterfaceTest(done, testTag, pixelMap_NV21, 'callback', 'flip', false, true);
      }catch(error){
        hilog.info(0x0000, testTag, `Test exception  ` + error);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV21_FLIP_0300
     * @tc.name      : flip -promise
     * @tc.desc      : 1.createImageSource
     *                 2.createPixelMap
     *                 3.PixelMap.flip
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_IMAGE_NV21_FLIP_0300', 0, async (done: Function) => {
      const testTag ="SUB_MULTIMEDIA_IMAGE_NV21_FLIP_0300"
      try{
        let pixelMap_NV21: image.PixelMap = await getPixMap_NV21("yuv_test_eto.jpg", "fd");
        await pixelMapInterfaceTest(done, testTag, pixelMap_NV21, 'promise', 'flip', true, false);
      }catch(error){
        hilog.info(0x0000, testTag, `Test exception  ` + error);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV21_FLIP_0400
     * @tc.name      : flip -callback
     * @tc.desc      : 1.createImageSource
     *                 2.createPixelMap
     *                 3.PixelMap.flip
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_IMAGE_NV21_FLIP_0400', 0, async (done:Function) => {
      const testTag ="SUB_MULTIMEDIA_IMAGE_NV21_FLIP_0400"
      try{
        let pixelMap_NV21: image.PixelMap = await getPixMap_NV21("yuv_test_ete.jpg", "fd");
        await pixelMapInterfaceTest(done, testTag, pixelMap_NV21, 'callback', 'flip', true, false);
      }catch(error){
        hilog.info(0x0000, testTag, `Test exception  ` + error);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV21_FLIP_0500
     * @tc.name      : flipSync
     * @tc.desc      : 1.createImageSource
     *                 2.createPixelMap
     *                 3.PixelMap.flip
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('SUB_MULTIMEDIA_IMAGE_NV21_FLIP_0500', 0, async (done: Function) => {
      const testTag ="SUB_MULTIMEDIA_IMAGE_NV21_FLIP_0500"
      try{
        let pixelMap_NV21: image.PixelMap = await getPixMap_NV21("yuv_test_ote.jpg","fd");
        await pixelMapInterfaceTest(done, testTag, pixelMap_NV21, 'sync', 'flipSync', false, true);
      }catch(error){
        hilog.info(0x0000, testTag, `Test exception  ` + error);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV12_FLIP_0600
     * @tc.name      : flipSync
     * @tc.desc      : 1.createImageSource
     *                 2.createPixelMap
     *                 3.PixelMap.flip
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_IMAGE_NV21_FLIP_0600', 0, async (done: Function) => {
      const testTag ="SUB_MULTIMEDIA_IMAGE_NV21_FLIP_0600"
      try{
        let pixelMap_NV21: image.PixelMap = await getPixMap_NV21("yuv_test_eto.jpg","fd");
        await pixelMapInterfaceTest(done, testTag, pixelMap_NV21, 'sync', 'flipSync', true, false);
      }catch(error){
        hilog.info(0x0000, testTag, `Test exception  ` + error);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV21_TRANSLATE_0100
     * @tc.name      : translate -promise
     * @tc.desc      : 1.createImageSource
     *                 2.createPixelMap
     *                 3.PixelMap.translate
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('SUB_MULTIMEDIA_IMAGE_NV21_TRANSLATE_0100', 0, async (done: Function) => {
      const testTag = "SUB_MULTIMEDIA_IMAGE_NV21_TRANSLATE_0100"
      try{
        let pixelMap_NV21: image.PixelMap = await getPixMap_NV21("yuv_test_ote.jpg","fd");
        await pixelMapInterfaceTest(done, testTag, pixelMap_NV21, 'promise', 'translate', 3, 1);
      }catch(error){
        hilog.info(0x0000, testTag, `Test exception  ` + error);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV21_TRANSLATE_0200
     * @tc.name      : translate -callback
     * @tc.desc      : 1.createImageSource
     *                 2.createPixelMap
     *                 3.PixelMap.translate
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('SUB_MULTIMEDIA_IMAGE_NV21_TRANSLATE_0200', 0, async (done: Function) => {
      const testTag = "SUB_MULTIMEDIA_IMAGE_NV21_TRANSLATE_0200"
      try{
        let pixelMap_NV21: image.PixelMap = await getPixMap_NV21("yuv_test_oto.jpeg","fd");
        await pixelMapInterfaceTest(done, testTag, pixelMap_NV21, 'callback', 'translate', 3, 1);
      }catch(error){
        hilog.info(0x0000, testTag, `Test exception  ` + error);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV21_TRANSLATE_0300
     * @tc.name      : translate -promise
     * @tc.desc      : 1.createImageSource
     *                 2.createPixelMap
     *                 3.PixelMap.translate
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_IMAGE_NV21_TRANSLATE_0300', 0, async (done: Function) => {
      const testTag ="SUB_MULTIMEDIA_IMAGE_NV21_TRANSLATE_0300"
      try{
        let pixelMap_NV21: image.PixelMap = await getPixMap_NV21("yuv_test_ete.jpg","fd");
        await pixelMapInterfaceTest(done, testTag, pixelMap_NV21, 'promise', 'translate', 0.5, 0.5);
      }catch(error){
        hilog.info(0x0000, testTag, `Test exception  ` + error);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV21_TRANSLATE_0400
     * @tc.name      : translate -callback
     * @tc.desc      : 1.createImageSource
     *                 2.createPixelMap
     *                 3.PixelMap.translate
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_IMAGE_NV21_TRANSLATE_0400', 0, async (done:Function) => {
      const testTag ="SUB_MULTIMEDIA_IMAGE_NV21_TRANSLATE_0400"
      try{
        let pixelMap_NV21: image.PixelMap = await getPixMap_NV21("yuv_test_eto.jpg","fd");
        await pixelMapInterfaceTest(done, testTag, pixelMap_NV21, 'callback', 'translate', 0.5, 0.5);
      }catch(error){
        hilog.info(0x0000, testTag, `Test exception  ` + error);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV21_TRANSLATE_0500
     * @tc.name      : translateSync
     * @tc.desc      : 1.createImageSource
     *                 2.createPixelMap
     *                 3.PixelMap.translate
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('SUB_MULTIMEDIA_IMAGE_NV21_TRANSLATE_0500', 0, async (done: Function) => {
      const testTag = "SUB_MULTIMEDIA_IMAGE_NV21_TRANSLATE_0500"
      try{
        let pixelMap_NV21: image.PixelMap = await getPixMap_NV21("yuv_test_ote.jpg","fd");
        await pixelMapInterfaceTest(done, testTag, pixelMap_NV21, 'sync', 'translateSync', 3, 1);
      }catch(error){
        hilog.info(0x0000, testTag, `Test exception  ` + error);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV21_TRANSLATE_0600
     * @tc.name      : translateSync
     * @tc.desc      : 1.createImageSource
     *                 2.createPixelMap
     *                 3.PixelMap.translate
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_IMAGE_NV21_TRANSLATE_0600', 0, async (done: Function) => {
      const testTag = "SUB_MULTIMEDIA_IMAGE_NV21_TRANSLATE_0600"
      try{
        let pixelMap_NV21: image.PixelMap = await getPixMap_NV21("yuv_test_ete.jpg", "fd");
        await pixelMapInterfaceTest(done, testTag, pixelMap_NV21, 'sync', 'translateSync', 0.5, 0.5);
      }catch(error){
        hilog.info(0x0000, testTag, `Test exception  ` + error);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV21_ROTATE_0100
     * @tc.name      : rotate -promise
     * @tc.desc      : 1.createImageSource
     *                 2.createPixelMap
     *                 3.PixelMap.rotate
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('SUB_MULTIMEDIA_IMAGE_NV21_ROTATE_0100', 0, async (done: Function) => {
      const testTag ="SUB_MULTIMEDIA_IMAGE_NV21_ROTATE_0100"
      try{
        let pixelMap_NV21: image.PixelMap = await getPixMap_NV21("yuv_test_oto.jpeg","fd");
        await pixelMapInterfaceTest(done, testTag, pixelMap_NV21, 'promise', 'rotate', 90);
      }catch(error){
        hilog.info(0x0000, testTag, `Test exception  ` + error);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV21_ROTATE_0200
     * @tc.name      : rotate -callback
     * @tc.desc      : 1.createImageSource
     *                 2.createPixelMap
     *                 3.PixelMap.rotate
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('SUB_MULTIMEDIA_IMAGE_NV21_ROTATE_0200', 0, async (done: Function) => {
      const testTag = "SUB_MULTIMEDIA_IMAGE_NV21_ROTATE_0200"
      try{
        let pixelMap_NV21: image.PixelMap = await getPixMap_NV21("yuv_test_ote.jpg","fd");
        await pixelMapInterfaceTest(done, testTag, pixelMap_NV21, 'callback', 'rotate', 90);
      }catch(error){
        hilog.info(0x0000, testTag, `Test exception  ` + error);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV21_ROTATE_0300
     * @tc.name      : rotate -promise
     * @tc.desc      : 1.createImageSource
     *                 2.createPixelMap
     *                 3.PixelMap.rotate
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_IMAGE_NV21_ROTATE_0300', 0, async (done: Function) => {
      const testTag ="SUB_MULTIMEDIA_IMAGE_NV21_ROTATE_0300"
      try{
        let pixelMap_NV21: image.PixelMap = await getPixMap_NV21("yuv_test_eto.jpg","fd");
        await pixelMapInterfaceTest(done, testTag, pixelMap_NV21, 'promise', 'rotate', -90);
      }catch(error){
        hilog.info(0x0000, testTag, `Test exception  ` + error);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV21_ROTATE_0400
     * @tc.name      : rotate -callback
     * @tc.desc      : 1.createImageSource
     *                 2.createPixelMap
     *                 3.PixelMap.rotate
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_IMAGE_NV21_ROTATE_0400', 0, async (done:Function) => {
      const testTag = "SUB_MULTIMEDIA_IMAGE_NV21_ROTATE_0400"
      try{
        let pixelMap_NV21: image.PixelMap = await getPixMap_NV21("yuv_test_oto.jpeg","fd");
        await pixelMapInterfaceTest(done, testTag, pixelMap_NV21, 'callback', 'rotate', -90);
      }catch(error){
        hilog.info(0x0000, testTag, `Test exception  ` + error);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV21_ROTATE_0500
     * @tc.name      : rotateSync
     * @tc.desc      : 1.createImageSource
     *                 2.createPixelMap
     *                 3.PixelMap.rotate
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('SUB_MULTIMEDIA_IMAGE_NV21_ROTATE_0500', 0, async (done: Function) => {
      const testTag ="SUB_MULTIMEDIA_IMAGE_NV21_ROTATE_0500"
      try{
        let pixelMap_NV21: image.PixelMap = await getPixMap_NV21("yuv_test_ete.jpg", "fd");
        await pixelMapInterfaceTest(done, testTag, pixelMap_NV21, 'sync', 'rotateSync', 90);
      }catch(error){
        hilog.info(0x0000, testTag, `Test exception  ` + error);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV21_ROTATE_0600
     * @tc.name      : rotateSync
     * @tc.desc      : 1.createImageSource
     *                 2.createPixelMap
     *                 3.PixelMap.rotate
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_IMAGE_NV21_ROTATE_0600', 0, async (done: Function) => {
      const testTag ="SUB_MULTIMEDIA_IMAGE_NV21_ROTATE_0600"
      try{
        let pixelMap_NV21: image.PixelMap = await getPixMap_NV21("yuv_test_eto.jpg","fd");
        await pixelMapInterfaceTest(done, testTag, pixelMap_NV21, 'sync', 'rotateSync', -90);
      }catch(error){
        hilog.info(0x0000, testTag, `Test exception  ` + error);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV21_CROP_0100
     * @tc.name      : crop -promise
     * @tc.desc      : 1.createImageSource
     *                 2.createPixelMap
     *                 3.PixelMap.crop
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('SUB_MULTIMEDIA_IMAGE_NV21_CROP_0100', 0, async (done: Function) => {
      const testTag = "SUB_MULTIMEDIA_IMAGE_NV21_CROP_0100"
      try{
        let region : image.Region = { x: 0, y: 0, size: { height: 2, width: 3 } };
        let pixelMap_NV21: image.PixelMap = await getPixMap_NV21("yuv_test_ote.jpg","fd");
        await pixelMapInterfaceTest(done, testTag, pixelMap_NV21, 'promise', 'crop', region);
      }catch(error){
        hilog.info(0x0000, testTag, `Test exception  ` + error);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV21_CROP_0200
     * @tc.name      : crop -callback
     * @tc.desc      : 1.createImageSource
     *                 2.createPixelMap
     *                 3.PixelMap.crop
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('SUB_MULTIMEDIA_IMAGE_NV21_CROP_0200', 0, async (done: Function) => {
      const testTag ="SUB_MULTIMEDIA_IMAGE_NV21_CROP_0200"
      try{
        let region : image.Region = { x: 0, y: 0, size: { height: 2, width: 3 } };
        let pixelMap_NV21: image.PixelMap = await getPixMap_NV21("yuv_test_ete.jpg","fd");
        await pixelMapInterfaceTest(done, testTag, pixelMap_NV21, 'callback', 'crop', region);
      }catch(error){
        hilog.info(0x0000, testTag, `Test exception  ` + error);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV21_CROP_0300
     * @tc.name      : crop -promise
     * @tc.desc      : 1.createImageSource
     *                 2.createPixelMap
     *                 3.PixelMap.crop
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_IMAGE_NV21_CROP_0300', 0, async (done: Function) => {
      const testTag ="SUB_MULTIMEDIA_IMAGE_NV21_CROP_0300"
      try{
        let region : image.Region = { x: 0, y: 0, size: { height: -1, width: 3 } };
        let pixelMap_NV21: image.PixelMap = await getPixMap_NV21("yuv_test_eto.jpg", "fd");
        await pixelMapInterfaceTest(done, testTag, pixelMap_NV21, 'promise', 'crop', region);
      }catch(error){
        hilog.info(0x0000, testTag, `Test exception  ` + error);
        expect().assertFail();
        done();
      }
    })
    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV21_CROP_0400
     * @tc.name      : crop -callback
     * @tc.desc      : 1.createImageSource
     *                 2.createPixelMap
     *                 3.PixelMap.crop
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_IMAGE_NV21_CROP_0400', 0, async (done:Function) => {
      const testTag = "SUB_MULTIMEDIA_IMAGE_NV21_CROP_0400"
      try{
        let region : image.Region = { x: 0, y: 0, size: { height: -1, width: 3 } };
        let pixelMap_NV21: image.PixelMap = await getPixMap_NV21("yuv_test_ote.jpg", "fd");
        await pixelMapInterfaceTest(done, testTag, pixelMap_NV21, 'callback', 'crop', region);
      }catch(error){
        hilog.info(0x0000, testTag, `Test exception  ` + error);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV21_CROP_0500
     * @tc.name      : crop -promise
     * @tc.desc      : 1.createImageSource
     *                 2.createPixelMap
     *                 3.PixelMap.crop
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_IMAGE_NV21_CROP_0500', 0, async (done: Function) => {
      const testTag = "SUB_MULTIMEDIA_IMAGE_NV21_CROP_0500"
      try{
        let region: image.Region = { x: -1, y: 0, size: { height: 2, width: 3 } };
        let pixelMap_NV21: image.PixelMap = await getPixMap_NV21("yuv_test_oto.jpeg", "fd");
        await pixelMapInterfaceTest(done, testTag, pixelMap_NV21, 'promise', 'crop', region);
      }catch(error){
        hilog.info(0x0000, testTag, `Test exception  ` + error);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV21_CROP_0600
     * @tc.name      : crop -callback
     * @tc.desc      : 1.createImageSource
     *                 2.createPixelMap
     *                 3.PixelMap.crop
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 3
     */
    it('SUB_MULTIMEDIA_IMAGE_NV21_CROP_0600', 0, async (done:Function) => {
      const testTag ="SUB_MULTIMEDIA_IMAGE_NV21_CROP_0600"
      try{
        let region : image.Region = { x: -1, y: 0, size: { height: 2, width: 3 } };
        let pixelMap_NV21: image.PixelMap = await getPixMap_NV21("yuv_test_ete.jpg", "fd");
        await pixelMapInterfaceTest(done, testTag, pixelMap_NV21, 'callback', 'crop', region);
      }catch(error){
        hilog.info(0x0000, testTag, `Test exception  ` + error);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV21_CROP_0700
     * @tc.name      : cropSync
     * @tc.desc      : 1.createImageSource
     *                 2.createPixelMap
     *                 3.PixelMap.crop
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('SUB_MULTIMEDIA_IMAGE_NV21_CROP_0700', 0, async (done: Function) => {
      const testTag = "SUB_MULTIMEDIA_IMAGE_NV21_CROP_0700"
      try{
        let region : image.Region = { x: 0, y: 0, size: { height: 2, width: 3 } };
        let pixelMap_NV21: image.PixelMap = await getPixMap_NV21("yuv_test_eto.jpg", "fd");
        await pixelMapInterfaceTest(done, testTag, pixelMap_NV21, 'sync', 'cropSync', region);
      }catch(error){
        hilog.info(0x0000, testTag, `Test exception  ` + error);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV21_PACKING_0100
     * @tc.name      : packing -promise
     * @tc.desc      : 1.modifyImageProperty
     *                 2.packing
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('SUB_MULTIMEDIA_IMAGE_NV21_PACKING_0100', 0,  async (done:Function) => {
      const testTag ="SUB_MULTIMEDIA_IMAGE_NV21_PACKING_0100"
      try{
        let pixelMap_NV21: image.PixelMap = await getPixMap_NV21("yuv_test_ote.jpg", "fd");
        await pixelMapPacker(done, testTag, pixelMap_NV21, 'promise', 'image/jpeg', 98);
      }catch(error){
        hilog.info(0x0000, testTag, `Test exception  ` + error);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV21_PACKING_0200
     * @tc.name      : packing -callback
     * @tc.desc      : 1.modifyImageProperty
     *                 2.packing
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('SUB_MULTIMEDIA_IMAGE_NV21_PACKING_0200', 0,  async (done:Function) => {
      const testTag ="SUB_MULTIMEDIA_IMAGE_NV21_PACKING_0200"
      try{
        let pixelMap_NV21: image.PixelMap = await getPixMap_NV21("yuv_test_oto.jpeg", "fd");
        await pixelMapPacker(done, testTag, pixelMap_NV21, 'callback', 'image/jpeg', 98);
      }catch(error){
        hilog.info(0x0000, testTag, `Test exception  ` + error);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV21_MIXINGAPIS_0100
     * @tc.name      : packing -callback
     * @tc.desc      : 1.createImageSource
     *                 2.getBytesNumberPerRow
     *                 3.getImageInfoSync
     *                 4.setColorSpace
     *                 5.getColorSpace
     *                 6.getColorSpaceName
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('SUB_MULTIMEDIA_IMAGE_NV21_MIXINGAPIS_0100', 0,  async (done:Function) => {
      const testTag = 'SUB_MULTIMEDIA_IMAGE_NV21_MIXINGAPIS_0100'
      try {
        let pixelMap_NV21: image.PixelMap = await getPixMap_NV21("yuv_test_ote.jpg", "fd");
        const rowCount: number = pixelMap_NV21.getBytesNumberPerRow();
        const compRowCount:Boolean =  rowCount > 0
        const imageInfo = pixelMap_NV21.getImageInfoSync();
        const getDensity: number = pixelMap_NV21.getDensity();
        const compDensity:Boolean = imageInfo.density === getDensity
        let colorSpaceName = colorSpaceManager.ColorSpace.SRGB;
        let csm: colorSpaceManager.ColorSpaceManager = colorSpaceManager.create(colorSpaceName);
        pixelMap_NV21.setColorSpace(csm);
        let csm2 = pixelMap_NV21.getColorSpace();
        const compCsm:Boolean = csm.getColorSpaceName() === csm2.getColorSpaceName()
        expect(compCsm && compDensity && compRowCount ).assertTrue();
        done()
      } catch (error) {
        hilog.info(0x0000, testTag, `Test exception  ` + error);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV21_MARSHALLING_0100
     * @tc.name      : marshalling
     * @tc.desc      : 1.createImageSource
     *                 2.createPixelMap
     *                 2.MySequence
     *                 3.rpc.MessageSequence.writeParcelable
     *                 4.rpc.MessageSequence.readParcelable
     * @tc.size      : MediumTest
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('SUB_MULTIMEDIA_IMAGE_NV21_MARSHALLING_0100', 0, async (done:Function) => {
      const testTag ="SUB_MULTIMEDIA_IMAGE_NV21_MARSHALLING_0100"
      try {
        let pixelMap_NV21: image.PixelMap = await getPixMap_NV21("yuv_test_oto.jpeg", "fd");
        await testMarshalling(done, pixelMap_NV21, testTag);
      } catch (error) {
        hilog.info(0x0000, testTag, `Test exception  ` + error);
        expect().assertFail();
        done();
      }
    })
  })
}

