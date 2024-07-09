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

import image from '@ohos.multimedia.image';
import { describe, beforeAll, afterEach, it, expect } from '@ohos/hypium';
import hilog from '@ohos.hilog';
import fs from '@ohos.file.fs';
import { BusinessError } from '@ohos.base';
import common from '@ohos.app.ability.common';
import resourceManager from '@ohos.resourceManager';
import PropertyKey from './PropertyKey';

interface TestPackIcon {
  fileName: string,
  createType: string,
  packSource: string,
  packTarget: string,
  needsPackProperties?: boolean,
  decodingOpts?: image.DecodingOptions
}

export default function imageEncodeYuvToJpeg() {
  describe('imageEncodeYuvToJpeg', () => {
    let globalImagesource: image.ImageSource;
    let globalPacker: image.ImagePacker;
    let globalpixelmap: image.PixelMap;
    const NV21: image.PixelMapFormat = image.PixelMapFormat.NV21;
    const NV12: image.PixelMapFormat = image.PixelMapFormat.NV12;
    let pathDir: string | undefined;
    let filePath: string;
    let fdNumber: number;
    let testContext: common.UIAbilityContext;
    let packOpts: image.PackingOption;
    let testFile: TestPackIcon;
    const GET_EXIF_ERROR_CODE = 62980096;

    beforeAll(async () => {
      pathDir = AppStorage.get('pathDir');
      testContext = AppStorage.get<common.UIAbilityContext>('testContext') as common.UIAbilityContext;
    })

    afterEach(async () => {
      if (globalpixelmap != undefined) {
          try {
              await globalpixelmap.release();
          } catch (error) {
              hilog.info(0x0000, 'testTag', '%{public}s', 'globalpixelmap release fail');
          }
      }
      if (globalImagesource != undefined) {
          try {
              await globalImagesource.release();
          } catch (error) {
              hilog.info(0x0000, 'testTag', '%{public}s', 'globalImagesource release fail');
          }
      }
      if (globalPacker != undefined) {
          try {
              await globalPacker.release();
          } catch (error) {
              hilog.info(0x0000, 'testTag', '%{public}s', 'globalPacker release fail');
          }
      }
      try {
        fs.closeSync(fdNumber)
      } catch (error) {
        hilog.info(0x0000, 'testTag', '%{public}s', 'closeSync fdNumber error');
      }
      hilog.info(0x0000, 'testTag', '%{public}s', 'afterEach case');
    });

    class Logger {
      testNum: string;

      constructor(testNum: string) {
        this.testNum = testNum;
      }

      log(msg: string) {
        hilog.info(0x0000, 'imageEncodeYuvToJpeg', 'case: %{public}s : %{public}s', this.testNum, msg);
      }
    }

    const getReadFd = async (fileName: string) => {
      filePath = pathDir + "/" + fileName;
      const file = fs.openSync(filePath)
      fdNumber = file.fd
    }

    const getWriteFd = (fileName: string) => {
      try {
        filePath = pathDir + "/" + fileName;
        hilog.info(0x0000, 'imageEncodeYuvToJpeg', 'image getWriteFd filePath is : %{public}s', filePath);
        let writeFile = fs.openSync(filePath, fs.OpenMode.CREATE | fs.OpenMode.READ_WRITE);
        fdNumber = writeFile.fd;
        hilog.info(0x0000, 'imageEncodeYuvToJpeg', 'getWriteFd fd is : %{public}d', fdNumber);
      } catch (error) {
        console.info("image getWriteFd " + error);
      }
    }

    const getBuffer = (fileName: string) => {
      filePath = pathDir + '/' + fileName;
      let file = fs.openSync(filePath);
      const stats = fs.statSync(filePath);
      const fileSize = stats.size;
      const bufferRead = new ArrayBuffer(fileSize)
      fs.readSync(file.fd, bufferRead)
      return bufferRead
    }

    const getImageSource = async (fileName: string, type:string) => {
      let imageSourceApi:image.ImageSource
      if (type === "buffer") {
        const buffer = getBuffer(fileName)
        imageSourceApi = image.createImageSource(buffer)
      } else if (type === "uri") {
        const filePath = AppStorage.get('pathDir') + '/' + fileName
        imageSourceApi = image.createImageSource(filePath)
      } else if (type === "rawfile") {
        const resourceMgr: resourceManager.ResourceManager = testContext.createModuleContext("entry").resourceManager;
        const rawFileDescriptor: resourceManager.RawFileDescriptor = await resourceMgr.getRawFd(fileName);
        imageSourceApi = image.createImageSource(rawFileDescriptor);
      } else {
        await getReadFd(fileName);
        imageSourceApi = image.createImageSource(fdNumber);
      }
      return imageSourceApi;
    }

    const getImageExifInfo = async (source: image.ImageSource): Promise<Record<image.PropertyKey, string|null>> => {
      return await source.getImageProperties(PropertyKey)
    }

    const checkPackResult = async (bufferData: ArrayBuffer, logger: Logger) => {
      let result: boolean = true;
      let packingSource: image.ImageSource = image.createImageSource(bufferData);
      try {
        let orgProps = await getImageExifInfo(globalImagesource);
        let newProps = await getImageExifInfo(packingSource);
        for (let i = 0; i < PropertyKey.length; i++) {
          let item = PropertyKey[i];
          logger.log(`origin ${item}: ${orgProps[item]}, new ${item}: ${newProps[item]}`);
          if (orgProps[item] != newProps[item]) {
            return false;
          }
        }
      } catch(error) {
        logger.log("check packing result failed. " + error);
        for (let i = 0; i < error.length; i++) {
          if (error[i].code != GET_EXIF_ERROR_CODE) {
            return false;
          }
        }
      }
      let orgInfo: image.ImageInfo = globalpixelmap.getImageInfoSync();
      let newPixelMap: image.PixelMap = packingSource.createPixelMapSync(testFile.decodingOpts);
      let newInfo: image.ImageInfo = newPixelMap.getImageInfoSync();
      logger.log(`origin pixelFormat: ${orgInfo.pixelFormat}, new pixelFormat: ${newInfo.pixelFormat}`);
      logger.log(`origin width: ${orgInfo.size.width}, new width: ${newInfo.size.width}`);
      logger.log(`origin height: ${orgInfo.size.height}, new height: ${newInfo.size.height}`);
      result = orgInfo.pixelFormat == newInfo.pixelFormat && 
        orgInfo.size.width == newInfo.size.width &&
        orgInfo.size.height == newInfo.size.height;
      await newPixelMap.release();
      await packingSource.release();
      return result;
    }

    const packingSourceToData = async (done: Function, logger: Logger, type: string) => {
      const imagePackerApi = image.createImagePacker();
      if (imagePackerApi == undefined) {
        expect(false).assertTrue();
        logger.log(`create imagepacker fail`);
        done();
      } else {
        globalPacker = imagePackerApi;
        if (testFile.packSource === "ImageSource") {
          if (type === "callback") {
            globalPacker.packing(globalImagesource, packOpts, async (err, data) => {
              if (err != undefined) {
                logger.log(`packing failed. ${err}`);
                expect(false).assertTrue();
                done();
              }
              logger.log("packing image source to data success.")
              let result = await checkPackResult(data, logger);
              expect(result == true).assertTrue();
              done();
            });
          } else {
            await globalPacker.packing(globalImagesource, packOpts)
              .then(async (data) => {
                logger.log("packing image source to data success.")
                let result = await checkPackResult(data, logger);
                expect(result == true).assertTrue();
                done();
              }).catch((error: BusinessError) => {
                logger.log(`packing failed. ${error}`);
                expect(false).assertTrue();
                done();
              })
          }
        } else {
          if (type === "callback") {
            globalPacker.packing(globalpixelmap, packOpts, async (err, data) => {
              if (err != undefined) {
                logger.log(`packing faild. ${err}`);
                expect(false).assertTrue();
                done();
              }
              logger.log("packing pixelMap to data success.")
              let result = await checkPackResult(data, logger);
              expect(result == true).assertTrue();
              done();
            });
          } else {
            globalPacker.packing(globalpixelmap, packOpts)
              .then(async (data) => {
                logger.log("packing pixelMap to data success.")
                let result = await checkPackResult(data, logger);
                expect(result == true).assertTrue();
                done();
              }).catch((error: BusinessError) => {
                logger.log(`packing faild. ${error}`);
                expect(false).assertTrue();
                done();
              })
          }
        }
      }
    }

    const packingSourceToFile = async (done: Function, logger: Logger, type: string) => {
      const imagePackerApi = image.createImagePacker();
      if (imagePackerApi == undefined) {
        expect(false).assertTrue();
        logger.log(`create imagepacker fail`);
        done();
      } else {
        globalPacker = imagePackerApi;
        getWriteFd(testFile.packTarget);
        if (testFile.packSource === "ImageSource") {
          if (type === "callback") {
            globalPacker.packToFile(globalImagesource, fdNumber, packOpts, async (err) => {
              if (err != undefined) {
                logger.log(`packing ImageSource to file callback failed. ${err}`);
                expect(false).assertTrue();
                done();
              }
              try {
                fs.closeSync(fdNumber);
                logger.log("packing ImageSource to file callback success.")
                let result = await checkPackResult(getBuffer(testFile.packTarget), logger);
                expect(result == true).assertTrue();
                done();
              } catch (error) {
                logger.log("checkPackResult error: " + error);
                expect().assertFail();
                done();
              }
            })
          } else {
            await globalPacker.packToFile(globalImagesource, fdNumber, packOpts)
              .then(async () => {
                try {
                  fs.closeSync(fdNumber)
                  logger.log("packing ImageSource to file promise success.")
                  let result = await checkPackResult(getBuffer(testFile.packTarget), logger);
                  expect(result == true).assertTrue();
                  done();
                } catch (error) {
                  logger.log("checkPackResult error: " + error);
                  expect().assertFail();
                  done();
                }
              })
              .catch((err: BusinessError) => {
                logger.log("packing ImageSource to file promise failed. " + err);
                expect().assertFail();
                done();
              })
          }
        } else {
          if (type === "callback") {
            globalPacker.packToFile(globalpixelmap, fdNumber, packOpts, async (err) => {
              if (err != undefined) {
                logger.log(`packing pixelmap to file failed. ${err}`);
                expect(false).assertTrue();
                done();
              }
              try {
                fs.closeSync(fdNumber);
                logger.log("packing pixelmap to file success.")
                let result = await checkPackResult(getBuffer(testFile.packTarget), logger);
                expect(result == true).assertTrue();
                done();
              } catch (error) {
                logger.log("checkPackResult error: " + error);
                expect().assertFail();
                done();
              }
            })
          } else {
            globalPacker.packToFile(globalpixelmap, fdNumber, packOpts)
              .then (async () => {
                try {
                  fs.closeSync(fdNumber)
                  logger.log("packing ImageSource to file success.")
                  let result = await checkPackResult(getBuffer(testFile.packTarget), logger);
                  expect(result == true).assertTrue();
                  done();
                } catch (error) {
                  logger.log("checkPackResult error: " + error);
                  expect().assertFail();
                  done();
                }
              })
              .catch((err: BusinessError) => {
                logger.log("packing pixelmap to file error: " + err);
                expect().assertFail();
                done();
              })
          }
        }
      }
    }

    const testPackYuvSource = async (done: Function, logger: Logger, type: string) => {
      try  {
        let imageSource = await getImageSource(testFile.fileName, testFile.createType);
        if (imageSource == undefined) {
          logger.log(`create ImageSource failed`);
          expect(false).assertTrue();
          done();
        } else {
          globalImagesource = imageSource;
          globalpixelmap = await imageSource.createPixelMap(testFile.decodingOpts);
          if (testFile.needsPackProperties) {
            packOpts = { format: "image/jpeg", quality: 99, needsPackProperties: true };
          } else {
            packOpts = { format: "image/jpeg", quality: 99, needsPackProperties: false };
          }
          
          if (testFile.packTarget === "data") {
            await packingSourceToData(done, logger, type);
          } else {
            await packingSourceToFile(done, logger, type);
          }
        }
      } catch (error) {
        logger.log(`error:` + error);
        expect(false).assertTrue();
        done();
      }
    }

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_YUV_SOURCE_PACKINGTODATA_FUNC_0100
     * @tc.name      : test packing yuv ImageSource to jpeg callback -- create ImageSource by fd
     * @tc.desc      : 1.create ImageSource
     *                 2.create ImagePacker
     *                 3.call packing
     * @tc.size      : MEDIUM
     * @tc.type      : Functional
     * @tc.level     : level 0
     */
    it("SUB_MULTIMEDIA_IMAGE_YUV_SOURCE_PACKINGTODATA_FUNC_0100", 0, async (done: Function) => {
      let logger = new Logger("SUB_MULTIMEDIA_IMAGE_YUV_SOURCE_PACKINGTODATA_FUNC_0100");
      testFile = { 
        fileName: "test_exif.jpg", createType: "fd", packSource: "ImageSource", 
        packTarget: "data", needsPackProperties: true 
      };
      testPackYuvSource(done, logger, "callback");
    });

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_YUV_SOURCE_PACKINGTODATA_FUNC_0200
     * @tc.name      : test packing yuv ImageSource to jpeg callback -- create ImageSource by buffer
     * @tc.desc      : 1.create ImageSource
     *                 2.create ImagePacker
     *                 3.call packing
     * @tc.size      : MEDIUM
     * @tc.type      : Functional
     * @tc.level     : level 0
     */
    it("SUB_MULTIMEDIA_IMAGE_YUV_SOURCE_PACKINGTODATA_FUNC_0200", 0, async (done: Function) => {
      let logger = new Logger("SUB_MULTIMEDIA_IMAGE_YUV_SOURCE_PACKINGTODATA_FUNC_0200");
      testFile = { 
        fileName: "test_exif.jpg", createType: "buffer", packSource: "ImageSource", 
        packTarget: "data", needsPackProperties: false 
      }
      testPackYuvSource(done, logger, "callback");
    });
    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_YUV_SOURCE_PACKINGTODATA_FUNC_0300
     * @tc.name      : test packing yuv ImageSource to jpeg promise -- create ImageSource by uri
     * @tc.desc      : 1.create ImageSource
     *                 2.create ImagePacker
     * @tc.size      : MEDIUM
     * @tc.type      : Functional
     * @tc.level     : level 0
     */
    it("SUB_MULTIMEDIA_IMAGE_YUV_SOURCE_PACKINGTODATA_FUNC_0300", 0, async (done: Function) => {
      let logger = new Logger("SUB_MULTIMEDIA_IMAGE_YUV_SOURCE_PACKINGTODATA_FUNC_0300");
      testFile = { 
        fileName: "test_exif.jpg", createType: "uri", packSource: "ImageSource", 
        packTarget: "data", needsPackProperties: true 
      }
      testPackYuvSource(done, logger, "promise");
    });

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_YUV_SOURCE_PACKINGTODATA_FUNC_0400
     * @tc.name      : test packing yuv ImageSource to jpeg promise -- create ImageSource by fd
     * @tc.desc      : 1.create ImageSource
     *                 2.create ImagePacker
     * @tc.size      : MEDIUM
     * @tc.type      : Functional
     * @tc.level     : level 0
     */
    it("SUB_MULTIMEDIA_IMAGE_YUV_SOURCE_PACKINGTODATA_FUNC_0400", 0, async (done: Function) => {
      let logger = new Logger("SUB_MULTIMEDIA_IMAGE_YUV_SOURCE_PACKINGTODATA_FUNC_0400");
      testFile = { 
        fileName: "test_exif.jpg", createType: "rawfile", packSource: "ImageSource", 
        packTarget: "data", needsPackProperties: false 
      }
      testPackYuvSource(done, logger, "promise");
    });

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_YUV_SOURCE_PACKINGTODATA_FUNC_0500
     * @tc.name      : test packing yuv pixelmap to jpeg callback -- create ImageSource by fd
     * @tc.desc      : 1.create ImageSource
     *                 2.create PixelMap
     *                 3.create ImagePacker
     *                 4.call packing
     * @tc.size      : MEDIUM
     * @tc.type      : Functional
     * @tc.level     : level 0
     */
    it("SUB_MULTIMEDIA_IMAGE_YUV_SOURCE_PACKINGTODATA_FUNC_0500", 0, async (done: Function) => {
      let logger = new Logger("SUB_MULTIMEDIA_IMAGE_YUV_SOURCE_PACKINGTODATA_FUNC_0500");
      let decodingOption: image.DecodingOptions = {
        editable: true,
        desiredPixelFormat: NV21
      };
      testFile = { 
        fileName: "test_exif.jpg", createType: "fd", packSource: "PixelMap", 
        packTarget: "data", decodingOpts: decodingOption, needsPackProperties: true  
      };
      testPackYuvSource(done, logger, "callback");
    });

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_YUV_SOURCE_PACKINGTODATA_FUNC_0600
     * @tc.name      : test packing yuv pixelmap to jpeg callback -- create ImageSource by uri
     * @tc.desc      : 1.create ImageSource
     *                 2.create PixelMap
     *                 3.create ImagePacker
     *                 4.call packing
     * @tc.size      : MEDIUM
     * @tc.type      : Functional
     * @tc.level     : level 0
     */
    it("SUB_MULTIMEDIA_IMAGE_YUV_SOURCE_PACKINGTODATA_FUNC_0600", 0, async (done: Function) => {
      let logger = new Logger("SUB_MULTIMEDIA_IMAGE_YUV_SOURCE_PACKINGTODATA_FUNC_0600");
      let decodingOption: image.DecodingOptions = {
        editable: true,
        desiredPixelFormat: NV21
      };
      testFile = { 
        fileName: "test_exif.jpg", createType: "uri", packSource: "PixelMap",
        packTarget: "data", decodingOpts: decodingOption, needsPackProperties: false  
      };
      testPackYuvSource(done, logger, "callback");
    });

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_YUV_SOURCE_PACKINGTODATA_FUNC_0700
     * @tc.name      : test packing yuv pixelmap to jpeg promise -- create ImageSource by buffer
     * @tc.desc      : 1.create ImageSource
     *                 2.create PixelMap
     *                 3.create ImagePacker
     * @tc.size      : MEDIUM
     * @tc.type      : Functional
     * @tc.level     : level 0
     */
    it("SUB_MULTIMEDIA_IMAGE_YUV_SOURCE_PACKINGTODATA_FUNC_0700", 0, async (done: Function) => {
      let logger = new Logger("SUB_MULTIMEDIA_IMAGE_YUV_SOURCE_PACKINGTODATA_FUNC_0700");
      let decodingOption: image.DecodingOptions = {
        editable: true,
        desiredPixelFormat: NV21
      };
      testFile = { 
        fileName: "test_exif.jpg", createType: "buffer", packSource: "PixelMap", 
        packTarget: "data", decodingOpts: decodingOption, needsPackProperties: true 
      };
      testPackYuvSource(done, logger, "promise");
    });

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_YUV_SOURCE_PACKINGTODATA_FUNC_0800
     * @tc.name      : test packing yuv pixelmap to jpeg promise -- create ImageSource by fd
     * @tc.desc      : 1.create ImageSource
     *                 2.create PixelMap
     *                 3.create ImagePacker
     * @tc.size      : MEDIUM
     * @tc.type      : Functional
     * @tc.level     : level 0
     */
    it("SUB_MULTIMEDIA_IMAGE_YUV_SOURCE_PACKINGTODATA_FUNC_0800", 0, async (done: Function) => {
      let logger = new Logger("SUB_MULTIMEDIA_IMAGE_YUV_SOURCE_PACKINGTODATA_FUNC_0800");
      let decodingOption: image.DecodingOptions = {
        editable: true,
        desiredPixelFormat: NV21
      };
      testFile = { 
        fileName: "test_exif.jpg", createType: "rawfile", packSource: "PixelMap", 
        packTarget: "data", decodingOpts: decodingOption, needsPackProperties: false 
      };
      testPackYuvSource(done, logger, "promise");
    });

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_YUV_SOURCE_PACKINGTOFILE_FUNC_0100
     * @tc.name      : test packing yuv ImageSource to jpeg file callback -- create ImageSource by fd
     * @tc.desc      : 1.create ImageSource
     *                 2.create ImagePacker
     *                 3.call packing
     * @tc.size      : MEDIUM
     * @tc.type      : Functional
     * @tc.level     : level 0
     */
    it("SUB_MULTIMEDIA_IMAGE_YUV_SOURCE_PACKINGTOFILE_FUNC_0100", 0, async (done: Function) => {
      let logger = new Logger("SUB_MULTIMEDIA_IMAGE_YUV_SOURCE_PACKINGTOFILE_FUNC_0100");
      testFile = { 
        fileName: "test_exif.jpg", createType: "fd", packSource: "ImageSource", 
        packTarget: "pacing_yuv_source.jpg", needsPackProperties: true 
      };
      testPackYuvSource(done, logger, "callback");
    });

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_YUV_SOURCE_PACKINGTOFILE_FUNC_0200
     * @tc.name      : test packing yuv ImageSource to jpeg file callback -- create ImageSource by buffer
     * @tc.desc      : 1.create ImageSource
     *                 2.create ImagePacker
     *                 3.call packing
     * @tc.size      : MEDIUM
     * @tc.type      : Functional
     * @tc.level     : level 0
     */
    it("SUB_MULTIMEDIA_IMAGE_YUV_SOURCE_PACKINGTOFILE_FUNC_0200", 0, async (done: Function) => {
      let logger = new Logger("SUB_MULTIMEDIA_IMAGE_YUV_SOURCE_PACKINGTOFILE_FUNC_0200");
      testFile = { 
        fileName: "test_exif.jpg", createType: "buffer", packSource: "ImageSource", 
        packTarget: "pacing_yuv_source.jpg", needsPackProperties: false 
      }
      testPackYuvSource(done, logger, "callback");
    });

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_YUV_SOURCE_PACKINGTOFILE_FUNC_0300
     * @tc.name      : test packing yuv ImageSource to jpeg file promise -- create ImageSource by uri
     * @tc.desc      : 1.create ImageSource
     *                 2.create ImagePacker
     * @tc.size      : MEDIUM
     * @tc.type      : Functional
     * @tc.level     : level 0
     */
    it("SUB_MULTIMEDIA_IMAGE_YUV_SOURCE_PACKINGTOFILE_FUNC_0300", 0, async (done: Function) => {
      let logger = new Logger("SUB_MULTIMEDIA_IMAGE_YUV_SOURCE_PACKINGTOFILE_FUNC_0300");
      testFile = { 
        fileName: "test_exif.jpg", createType: "uri", packSource: "ImageSource", 
        packTarget: "pacing_yuv_source.jpg", needsPackProperties: true 
      }
      testPackYuvSource(done, logger, "promise");
    });

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_YUV_SOURCE_PACKINGTOFILE_FUNC_0400
     * @tc.name      : test packing yuv ImageSource to jpeg file promise -- create ImageSource by fd
     * @tc.desc      : 1.create ImageSource
     *                 2.create ImagePacker
     * @tc.size      : MEDIUM
     * @tc.type      : Functional
     * @tc.level     : level 0
     */
    it("SUB_MULTIMEDIA_IMAGE_YUV_SOURCE_PACKINGTOFILE_FUNC_0400", 0, async (done: Function) => {
      let logger = new Logger("SUB_MULTIMEDIA_IMAGE_YUV_SOURCE_PACKINGTOFILE_FUNC_0400");
      testFile = { 
        fileName: "test_exif.jpg", createType: "rawfile", packSource: "ImageSource", 
        packTarget: "pacing_yuv_source.jpg", needsPackProperties: false 
      }
      testPackYuvSource(done, logger, "promise");
    });

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_YUV_SOURCE_PACKINGTOFILE_FUNC_0500
     * @tc.name      : test packing yuv pixelmap to jpeg file callback -- create ImageSource by fd
     * @tc.desc      : 1.create ImageSource
     *                 2.create PixelMap
     *                 3.create ImagePacker
     *                 4.call packing
     * @tc.size      : MEDIUM
     * @tc.type      : Functional
     * @tc.level     : level 0
     */
    it("SUB_MULTIMEDIA_IMAGE_YUV_SOURCE_PACKINGTOFILE_FUNC_0500", 0, async (done: Function) => {
      let logger = new Logger("SUB_MULTIMEDIA_IMAGE_YUV_SOURCE_PACKINGTOFILE_FUNC_0500");
      let decodingOption: image.DecodingOptions = {
        editable: true,
        desiredPixelFormat: NV21
      };
      testFile = { 
        fileName: "test_exif.jpg", createType: "fd", packSource: "PixelMap", 
        packTarget: "pacing_yuv_source.jpg", decodingOpts: decodingOption, needsPackProperties: true 
      };
      testPackYuvSource(done, logger, "callback");
    });

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_YUV_SOURCE_PACKINGTOFILE_FUNC_0600
     * @tc.name      : test packing yuv pixelmap to jpeg file callback -- create ImageSource by uri
     * @tc.desc      : 1.create ImageSource
     *                 2.create PixelMap
     *                 3.create ImagePacker
     *                 4.call packing
     * @tc.size      : MEDIUM
     * @tc.type      : Functional
     * @tc.level     : level 0
     */
    it("SUB_MULTIMEDIA_IMAGE_YUV_SOURCE_PACKINGTOFILE_FUNC_0600", 0, async (done: Function) => {
      let logger = new Logger("SUB_MULTIMEDIA_IMAGE_YUV_SOURCE_PACKINGTOFILE_FUNC_0600");
      let decodingOption: image.DecodingOptions = {
        editable: true,
        desiredPixelFormat: NV21
      };
      testFile = { 
        fileName: "test_exif.jpg", createType: "uri", packSource: "PixelMap", 
        packTarget: "pacing_yuv_source.jpg", decodingOpts: decodingOption, needsPackProperties: false 
      };
      testPackYuvSource(done, logger, "callback");
    });

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_YUV_SOURCE_PACKINGTOFILE_FUNC_0700
     * @tc.name      : test packing yuv pixelmap to jpeg file promise -- create ImageSource by buffer
     * @tc.desc      : 1.create ImageSource
     *                 2.create PixelMap
     *                 3.create ImagePacker
     * @tc.size      : MEDIUM
     * @tc.type      : Functional
     * @tc.level     : level 0
     */
    it("SUB_MULTIMEDIA_IMAGE_YUV_SOURCE_PACKINGTOFILE_FUNC_0700", 0, async (done: Function) => {
      let logger = new Logger("SUB_MULTIMEDIA_IMAGE_YUV_SOURCE_PACKINGTOFILE_FUNC_0700");
      let decodingOption: image.DecodingOptions = {
        editable: true,
        desiredPixelFormat: NV21
      };
      testFile = { 
        fileName: "test_exif.jpg", createType: "buffer", packSource: "PixelMap", 
        packTarget: "pacing_yuv_source.jpg", decodingOpts: decodingOption, needsPackProperties: true 
      };
      testPackYuvSource(done, logger, "promise");
    });

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_YUV_SOURCE_PACKINGTOFILE_FUNC_0800
     * @tc.name      : test packing yuv pixelmap to jpeg file promise -- create ImageSource by fd
     * @tc.desc      : 1.create ImageSource
     *                 2.create PixelMap
     *                 3.create ImagePacker
     * @tc.size      : MEDIUM
     * @tc.type      : Functional
     * @tc.level     : level 0
     */
    it("SUB_MULTIMEDIA_IMAGE_YUV_SOURCE_PACKINGTOFILE_FUNC_0800", 0, async (done: Function) => {
      let logger = new Logger("SUB_MULTIMEDIA_IMAGE_YUV_SOURCE_PACKINGTOFILE_FUNC_0800");
      let decodingOption: image.DecodingOptions = {
        editable: true,
        desiredPixelFormat: NV21
      };
      testFile = { 
        fileName: "test_exif.jpg", createType: "rawfile", packSource: "PixelMap", 
        packTarget: "pacing_yuv_source.jpg", decodingOpts: decodingOption, needsPackProperties: false 
      };
      testPackYuvSource(done, logger, "promise");
    });
  })
}