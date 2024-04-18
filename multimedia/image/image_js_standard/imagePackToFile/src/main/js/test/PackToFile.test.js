/*
 * Copyright (C) 2023 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the 'License');
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an 'AS IS' BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

import image from '@ohos.multimedia.image';
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium';
import featureAbility from "@ohos.ability.featureAbility";
import fileio from "@ohos.fileio";
import resourceManager from '@ohos.resourceManager';

export default function imagePackToFile() {
  describe('imagePackToFile', function () {

    beforeAll(async function () {
      console.info('beforeAll case');
    });

    beforeEach(function () {
      console.info('beforeEach case');
    });

    afterEach(async function () {
      console.info('afterEach case');
    });

    afterAll(function () {
      console.info('afterAll case');
    });

    let sleep = async (delay) => {
        return new Promise((resolve, _) => {
          setTimeout(async () => {
            resolve(0);
          }, delay);
        });
      };

    async function releaseImagePixelDate(imagePixelmap, imagePacker, writeFd, fPath) {
      if (imagePixelmap != undefined) {
        console.info("imagePixelmap release start");
        try {
          await imagePixelmap.release();
        } catch (error) {
          console.info("imagePixelmap release fail");
        }
      }
      if (imagePacker != undefined) {
        console.info('imagePacker release start');
        try {
          await imagePacker.release();
          imagePacker = undefined
        } catch (error) {
          console.info('imagePacker release fail');
        }
      }
      if (writeFd != undefined) {
        console.info('fdNumber release start');
        try {
          await fileio.close(writeFd)
          writeFd = undefined
        } catch (error) {
          console.info('fdNumber release fail');
        }
      }
      if (fPath != undefined) {
        try {
          fileio.truncateSync(fPath)
          fPath = undefined
        } catch (error) {
          console.info('fPath delete error +' + fPath);
        }
      }
    }

    async function releaseImageSourceDate(imageSource, imagePacker, writeFd, fPath) {
      if (imageSource != undefined) {
        console.info('Imagesource release start');
        try {
          await imageSource.release();
          imageSource = undefined;
        } catch (error) {
          console.info('Imagesource release fail');
        }
      }
      if (imagePacker != undefined) {
        console.info('imagePacker release start');
        try {
          await imagePacker.release();
          imagePacker = undefined
        } catch (error) {
          console.info('imagePacker release fail');
        }
      }
      if (writeFd != undefined) {
        console.info('fdNumber release start');
        try {
          await fileio.close(writeFd)
          writeFd = undefined
        } catch (error) {
          console.info('fdNumber release fail');
        }
      }
      if (fPath != undefined) {
        try {
          fileio.truncateSync(fPath)
          fPath = undefined
        } catch (error) {
          console.info('fPath delete error +' + fPath);
        }
      }
    }

    async function getImageSourceDataAndPacker(fileName) {
      let imageSource = undefined
      let imagePacker = undefined
      try {
        let resMgr = await resourceManager.getResourceManager();
        let value = await resMgr.getRawFileContent(fileName)
        imageSource = image.createImageSource(value.buffer);
        expect(imageSource != undefined).assertTrue();
        imagePacker = image.createImagePacker();
        expect(imagePacker != undefined).assertTrue();
      } catch (error) {
        console.info('getRawFileContent case' + error);
      }
      return [imageSource, imagePacker]
    }

    async function getPixelMapDataAndPacker() {
      let imagePixedmap = undefined
      let imagePacker = undefined
      try {
        let opts = {
          editable: true, pixelFormat: 2, size: {
            height: 4, width: 6
          }
        };
        const Color = new ArrayBuffer(96);
        imagePixedmap = await image.createPixelMap(Color, opts);
        imagePacker = image.createImagePacker();
        console.info('imagePixedmap is' + imagePixedmap);
        expect(imagePixedmap != undefined).assertTrue();
        expect(imagePacker != undefined).assertTrue();
      } catch (error) {
        console.info('getPixelMapData error' + error);
      }
      return [imagePixedmap, imagePacker]
    }

    async function getWriteFd(fileName) {
      let writeFd = undefined;
      let fPath = undefined;
      try {
          let context = await featureAbility.getContext();
          await context.getCacheDir().then((data) => {
              fPath = data + "/" + fileName;
          });
          console.info("image getWriteFd fPath is " + fPath);
          writeFd = fileio.openSync(fPath, 0o102, 0o666);
          console.log(`getWriteFd fd: ${JSON.stringify(writeFd)}`);
          if (writeFd !== null) {
            console.info("getWriteFd file fd created");
          } else {
            console.info("getWriteFd file fd created error");
          }
          writeFd = fileio.openSync(fPath, 0o2002, 0o666);
          console.log(`getWriteFd fd-re: ${JSON.stringify(writeFd)}`);
          if (writeFd !== null) {
            console.info("getWriteFd file fd opened : Append Mode");
          } else {
            console.info("getWriteFd file fd opened : Append Mode failed");
          }
        } catch (error) {
          console.info("image getWriteFd " + error);
        }
        return [writeFd, fPath];
    }

    async function packToFilePromise(done, testNum, ops, fileName) {
      let fdPath = undefined;
      let fdPromise = undefined;
      let imageSourcePromise = undefined;
      let imagePackerPromise = undefined;
      let rul = false;
      try {
        [fdPromise, fdPath] = await getWriteFd(fileName);
        [imageSourcePromise, imagePackerPromise] = await getImageSourceDataAndPacker('test.png');
        await imagePackerPromise.packToFile(imageSourcePromise, fdPromise, ops).then(async function () {
          let fileSize = fileio.statSync(fdPath).size;
          console.info(`${testNum} file path ${fdPath}`);
          console.info(`${testNum} file size ${fileSize}`);
          expect(fileSize != 0).assertTrue();
          rul = true;
          done();
        }).catch(async (err) => {
          expect(false).assertTrue();
          console.log(`${testNum} error: ` + JSON.stringify(err));
          done();
        })
      } catch (e) {
        console.log('packToFilePromise error: ' + e);
        expect().assertFail();
        done();
      }
      await releaseImageSourceDate(imageSourcePromise, imagePackerPromise, fdPromise, fdPath);
      return rul;
    }

    async function packToFilePixemapPromise(done, testNum, ops, fileName) {
      let fdPath = undefined;
      let fdPromise = undefined;
      let imagePixemapPromise = undefined;
      let imagePackerPromise = undefined;
      let rul = false;
      try {
        [fdPromise, fdPath] = await getWriteFd(fileName);
        [imagePixemapPromise, imagePackerPromise] = await getPixelMapDataAndPacker();
        await imagePackerPromise.packToFile(imagePixemapPromise, fdPromise, ops).then(async  function () {
          let fileSize = fileio.statSync(fdPath).size;
          console.info(`${testNum} file path ${fdPath}`);
          console.info(`${testNum} file size ${fileSize}`);
          expect(fileSize != 0).assertTrue();
          rul = true;
          done();
        }).catch(async (err) => {
          console.log(`${testNum} error: ` + JSON.stringify(err));
          expect(false).assertTrue();
          done();
        })
      } catch (e) {
        console.log('packToFilePixemapPromise error: ' + e);
        expect().assertFail();
        done();
      }
      await releaseImagePixelDate(imagePixemapPromise, imagePackerPromise, fdPromise, fdPath);
      return rul;
    }

    async function packToFileImageSourceCallback(done, testNum, ops, fileName) {
      let fdPath = undefined;
      let fdPromise = undefined;
      let imageSourcePromise = undefined;
      let imagePackerPromise = undefined;
      let rul = false;
      try {
        [fdPromise, fdPath] = await getWriteFd(fileName);
        [imageSourcePromise, imagePackerPromise] = await getImageSourceDataAndPacker('test.png');
        await imagePackerPromise.packToFile(imageSourcePromise, fdPromise, ops, async function (err) {
          let fileSize = fileio.statSync(fdPath).size;
          console.info(`${testNum} file path ${fdPath}`);
          console.info(`${testNum} file size ${fileSize}`);
          if (err != undefined) {
            console.info(`${testNum} pack failerr: ${err}`);
            expect(false).assertTrue();
            done();
          } else {
            expect(fileSize != 0).assertTrue();
            rul = true;
            done();
          }
        });
        await sleep(200);
      } catch (e) {
        console.log('packToFileImageSourceCallback error: ' + e);
        expect().assertFail();
        done();
      }
      await releaseImageSourceDate(imageSourcePromise, imagePackerPromise, fdPromise, fdPath);
      return rul;
    }

    async function packToFilePixemapCallback(done, testNum, ops, fileName) {
      let fdPath = undefined;
      let fdPromise = undefined;
      let imagePixemapPromise = undefined;
      let imagePackerPromise = undefined;
      let rul = false;
      try {
        [fdPromise, fdPath] = await getWriteFd(fileName);
        [imagePixemapPromise, imagePackerPromise] = await getPixelMapDataAndPacker();
        imagePackerPromise.packToFile(imagePixemapPromise, fdPromise, ops, async function () {
          let fileSize = fileio.statSync(fdPath).size;
          console.info(`${testNum} file path ${fdPath}`);
          console.info(`${testNum} file size ${fileSize}`);
          expect(fileSize != 0).assertTrue();
          rul = true;
          done();
        });
        await sleep(200);
      } catch (e) {
        console.log('packToFilePixemapCallback error: ' + e);
        expect().assertFail();
        done();
      }
      await releaseImagePixelDate(imagePixemapPromise, imagePackerPromise, fdPromise, fdPath);
      return rul;
    }

    async function packToFileCbErr(done, testNum, ops, fileName) {
      let fdPath = undefined;
      let fdPromise = undefined;
      let imageSourcePromise = undefined;
      let imagePackerPromise = undefined;
      let rul = false;
      try {
        [fdPromise, fdPath] = await getWriteFd(fileName);
        [imageSourcePromise, imagePackerPromise] = await getImageSourceDataAndPacker('test.png');
        await imagePackerPromise.packToFile(imageSourcePromise, fdPromise, ops, async function (err) {
          if (err != undefined) {
            console.info(`${testNum} pack failerr: ${JSON.stringify(err)}`);
            expect(err != undefined).assertTrue();
            rul = true;
            done();
          } else {
            expect().assertFail();
            done();
          }
        });
        await sleep(200);
      } catch (e) {
        console.log('packToFilePromise error: ' + e);
        expect().assertFail();
        done();
      }
      await releaseImageSourceDate(imageSourcePromise, imagePackerPromise, fdPromise, fdPath);
      return rul;
    }

    async function packToFilePromiseErr(done, testNum, ops, fileName) {
      let fdPath = undefined;
      let fdPromise = undefined;
      let imageSourcePromise = undefined;
      let imagePackerPromise = undefined;
      let rul = false;
      try {
        [fdPromise, fdPath] = await getWriteFd(fileName);
        [imageSourcePromise, imagePackerPromise] = await getImageSourceDataAndPacker('test.png');
        await imagePackerPromise.packToFile(imageSourcePromise, fdPromise, ops);
      } catch (e) {
        console.log('packToFilePromise error: ' + e);
        expect(e != undefined).assertTrue();
        rul = true;
        done();
      }
      await releaseImageSourceDate(imageSourcePromise, imagePackerPromise, fdPromise, fdPath);
      return rul;
    }

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_PACK_TO_FILE_PROMISE_IMAGE_SOURCE_0100
     * @tc.name      : sub_multimedia_image_packToFile_promise_imagesource_001
     * @tc.desc      : 1.create imagesource
     *               : 2.get writefd
     *               : 3.create ImagePacker
     *               : 4.packToFile with imagesource-jpg
     * @tc.size      : MEDIUM
     * @tc.type      : Functional
     * @tc.level     : level 0
     */
    it('SUB_MULTIMEDIA_IMAGE_PACK_TO_FILE_PROMISE_IMAGE_SOURCE_0100', 0, async function (done) {
      let ops = {
        format: 'image/jpeg', quality: 100
      };
      let res = await packToFilePromise(done, 'SUB_MULTIMEDIA_IMAGE_PACK_TO_FILE_PROMISE_IMAGE_SOURCE_0100', ops, 'promise_image_source.jpg');
      expect(res).assertTrue();
      done();
    });


    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_PACK_TO_FILE_PROMISE_IMAGE_SOURCE_0200
     * @tc.name      : sub_multimedia_image_packToFile_promise_imagesource_002
     * @tc.desc      : 1.create imagesource-png
     *               : 2.get writefd
     *               : 3.create ImagePacker
     *               : 4.packToFile with imagesource-webp
     * @tc.size      : MEDIUM
     * @tc.type      : Functional
     * @tc.level     : level 0
     */
    it('SUB_MULTIMEDIA_IMAGE_PACK_TO_FILE_PROMISE_IMAGE_SOURCE_0200', 0, async function (done) {
      let ops = {
        format: 'image/webp', quality: 100
      };
      let res = await packToFilePromise(done, 'SUB_MULTIMEDIA_IMAGE_PACK_TO_FILE_PROMISE_IMAGE_SOURCE_0200', ops, 'promise_image_source.webp');
      expect(res).assertTrue();
      done();
    });

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_PACK_TO_FILE_PROMISE_IMAGE_SOURCE_0300
     * @tc.name      : sub_multimedia_image_packToFile_promise_imagesource_003
     * @tc.desc      : 1.create imagesource
     *               : 2.get writefd
     *               : 3.create ImagePacker
     *               : 4.packToFile with imagesource-png
     * @tc.size      : MEDIUM
     * @tc.type      : Functional
     * @tc.level     : level 0
     */
    it('SUB_MULTIMEDIA_IMAGE_PACK_TO_FILE_PROMISE_IMAGE_SOURCE_0300', 0, async function (done) {
      let ops = {
        format: 'image/png', quality: 100
      };
      let res = await packToFilePromise(done, 'SUB_MULTIMEDIA_IMAGE_PACK_TO_FILE_PROMISE_IMAGE_SOURCE_0300', ops, 'png_image_source.png');
      expect(res).assertTrue();
      done();
    });

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_PACK_TO_FILE_CALLBACK_IMAGE_SOURCE_0100
     * @tc.name      : sub_multimedia_image_packToFile_callback_imagesource_001
     * @tc.desc      : 1.create imagesource
     *               : 2.get writefd
     *               : 3.create ImagePacker
     *               : 4.packToFile with imagesource-jpg
     * @tc.size      : MEDIUM
     * @tc.type      : Functional
     * @tc.level     : level 0
     */
    it('SUB_MULTIMEDIA_IMAGE_PACK_TO_FILE_CALLBACK_IMAGE_SOURCE_0100', 0, async function (done) {
      let ops = {
        format: 'image/jpeg', quality: 100
      };
      let res = await packToFileImageSourceCallback(done, 'SUB_MULTIMEDIA_IMAGE_PACK_TO_FILE_CALLBACK_IMAGE_SOURCE_0100', ops, 'callback_image_source.jpeg');
      expect(res).assertTrue();
      done();
    });

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_PACK_TO_FILE_CALLBACK_IMAGE_SOURCE_0200
     * @tc.name      : sub_multimedia_image_packToFile_callback_imagesource_002
     * @tc.desc      : 1.create imagesource
     *               : 2.get writefd
     *               : 3.create ImagePacker
     *               : 4.packToFile with imagesource-webp
     * @tc.size      : MEDIUM
     * @tc.type      : Functional
     * @tc.level     : level 0
     */
    it('SUB_MULTIMEDIA_IMAGE_PACK_TO_FILE_CALLBACK_IMAGE_SOURCE_0200', 0, async function (done) {
      let ops = {
        format: 'image/webp', quality: 100
      };
      let res = await packToFileImageSourceCallback(done, 'SUB_MULTIMEDIA_IMAGE_PACK_TO_FILE_CALLBACK_IMAGE_SOURCE_0200', ops, 'callback_image_source.webp');
      expect(res).assertTrue();
      done();
    });

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_PACK_TO_FILE_CALLBACK_IMAGE_SOURCE_0300
     * @tc.name      : sub_multimedia_image_packToFile_callback_imagesource_003
     * @tc.desc      : 1.create imagesource
     *               : 2.get writefd
     *               : 3.create ImagePacker
     *               : 4.packToFile with imagesource-png
     * @tc.size      : MEDIUM
     * @tc.type      : Functional
     * @tc.level     : level 0
     */
    it('SUB_MULTIMEDIA_IMAGE_PACK_TO_FILE_CALLBACK_IMAGE_SOURCE_0300', 0, async function (done) {
      let ops = {
        format: 'image/png', quality: 100
      };
      let res = await packToFileImageSourceCallback(done, 'SUB_MULTIMEDIA_IMAGE_PACK_TO_FILE_CALLBACK_IMAGE_SOURCE_0300', ops, 'callback_image_source.png');
      expect(res).assertTrue();
      done();
    });

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_PACK_TO_FILE_PROMISE_PIXEL_MAP_0100
     * @tc.name      : sub_multimedia_image_packToFile_promise_pixelmap_001
     * @tc.desc      : 1.create pixelmap
     *               : 2.get writefd
     *               : 3.create ImagePacker
     *               : 4.packToFile with pixelmap-jpg
     * @tc.size      : MEDIUM
     * @tc.type      : Functional
     * @tc.level     : level 0
     */
    it('SUB_MULTIMEDIA_IMAGE_PACK_TO_FILE_PROMISE_PIXEL_MAP_0100', 0, async function (done) {
      let ops = {
        format: 'image/jpeg', quality: 100
      };
      let res = await packToFilePixemapPromise(done, 'SUB_MULTIMEDIA_IMAGE_PACK_TO_FILE_PROMISE_PIXEL_MAP_0100', ops, 'promise_pixel_map.jpg');
      expect(res).assertTrue();
      done();
    });

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_PACK_TO_FILE_PROMISE_PIXEL_MAP_0200
     * @tc.name      : sub_multimedia_image_packToFile_promise_pixelmap_002
     * @tc.desc      : 1.create pixelmap
     *               : 2.get writefd
     *               : 3.create ImagePacker
     *               : 4.packToFile with pixelmap-webp
     * @tc.size      : MEDIUM
     * @tc.type      : Functional
     * @tc.level     : level 0
     */
    it('SUB_MULTIMEDIA_IMAGE_PACK_TO_FILE_PROMISE_PIXEL_MAP_0200', 0, async function (done) {
      let ops = {
        format: 'image/webp', quality: 100
      };
      let res = await packToFilePixemapPromise(done, 'SUB_MULTIMEDIA_IMAGE_PACK_TO_FILE_PROMISE_PIXEL_MAP_0200', ops, 'promise_pixel_map.webp');
      expect(res).assertTrue();
      done();
    });

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_PACK_TO_FILE_PROMISE_PIXEL_MAP_0300
     * @tc.name      : sub_multimedia_image_packToFile_promise_pixelmap_003
     * @tc.desc      : 1.create pixelmap
     *               : 2.get writefd
     *               : 3.create ImagePacker
     *               : 4.packToFile with pixelmap-png
     * @tc.size      : MEDIUM
     * @tc.type      : Functional
     * @tc.level     : level 0
     */
    it('SUB_MULTIMEDIA_IMAGE_PACK_TO_FILE_PROMISE_PIXEL_MAP_0300', 0, async function (done) {
      let ops = {
        format: 'image/png', quality: 100
      };
      let res = await packToFilePixemapPromise(done, 'SUB_MULTIMEDIA_IMAGE_PACK_TO_FILE_PROMISE_PIXEL_MAP_0300', ops, 'promise_pixel_map.png');
      expect(res).assertTrue();
      done();
    });

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_PACK_TO_FILE_CALLBACK_PIXEL_MAP_0100
     * @tc.name      : sub_multimedia_image_packToFile_callback_pixelmap_001
     * @tc.desc      : 1.create pixelmap
     *               : 2.get writefd
     *               : 3.create ImagePacker
     *               : 4.packToFile with pixelmap-jpg
     * @tc.size      : MEDIUM
     * @tc.type      : Functional
     * @tc.level     : level 0
     */
    it('SUB_MULTIMEDIA_IMAGE_PACK_TO_FILE_CALLBACK_PIXEL_MAP_0100', 0, async function (done) {
      let ops = {
        format: 'image/jpeg', quality: 100
      };
      let res = await packToFilePixemapCallback(done, 'SUB_MULTIMEDIA_IMAGE_PACK_TO_FILE_CALLBACK_PIXEL_MAP_0100', ops, 'callback_pixel_map.jpg');
      expect(res).assertTrue();
      done();
    });

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_PACK_TO_FILE_CALLBACK_PIXEL_MAP_0200
     * @tc.name      : sub_multimedia_image_packToFile_callback_pixelmap_002
     * @tc.desc      : 1.create pixelmap
     *               : 2.get writefd
     *               : 3.create ImagePacker
     *               : 4.packToFile with pixelmap-webp
     * @tc.size      : MEDIUM
     * @tc.type      : Functional
     * @tc.level     : level 0
     */
    it('SUB_MULTIMEDIA_IMAGE_PACK_TO_FILE_CALLBACK_PIXEL_MAP_0200', 0, async function (done) {
      let ops = {
        format: 'image/webp', quality: 100
      };
      let res = await packToFilePixemapCallback(done, 'SUB_MULTIMEDIA_IMAGE_PACK_TO_FILE_CALLBACK_PIXEL_MAP_0100', ops, 'callback_pixel_map.webp');
      expect(res).assertTrue();
      done();
    });

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_PACK_TO_FILE_CALLBACK_PIXEL_MAP_0300
     * @tc.name      : sub_multimedia_image_packToFile_callback_pixelmap_003
     * @tc.desc      : 1.create pixelmap
     *               : 2.get writefd
     *               : 3.create ImagePacker
     *               : 4.packToFile with pixelmap-png
     * @tc.size      : MEDIUM
     * @tc.type      : Functional
     * @tc.level     : level 0
     */
    it('SUB_MULTIMEDIA_IMAGE_PACK_TO_FILE_CALLBACK_PIXEL_MAP_0300', 0, async function (done) {
      let ops = {
        format: 'image/png', quality: 100
      };
      let res = await packToFilePixemapCallback(done, 'SUB_MULTIMEDIA_IMAGE_PACK_TO_FILE_CALLBACK_PIXEL_MAP_0300', ops, 'callback_pixel_map.png');
      expect(res).assertTrue();
      done();
    });

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_PACK_TO_FILE_CALLBACK_ERR_0100
     * @tc.name      : sub_multimedia_image_packToFile_callback_pixelmap_err_001
     * @tc.desc      : 1.create pixelmap
     *               : 2.get writefd
     *               : 3.create ImagePacker
     *               : 4.packToFile no quality
     * @tc.size      : MEDIUM
     * @tc.type      : Functional
     * @tc.level     : level 0
     */
    it('SUB_MULTIMEDIA_IMAGE_PACK_TO_FILE_CALLBACK_ERR_0100', 0, async function (done) {
      let ops = {
        format: 'image/jpeg'
      };
      let res = await packToFileCbErr(done, 'SUB_MULTIMEDIA_IMAGE_PACK_TO_FILE_CALLBACK_ERR_0100', ops, 'callback_pixel_map_erra.jpg');
      expect(res).assertTrue();
      done();
    });

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_PACK_TO_FILE_CALLBACK_ERR_0200
     * @tc.name      : sub_multimedia_image_packToFile_callback_pixelmap_err_002
     * @tc.desc      : 1.create pixelmap
     *               : 2.get writefd
     *               : 3.create ImagePacker
     *               : 4.packToFile { format: 'image/jpeg', quality: 101 }
     * @tc.size      : MEDIUM
     * @tc.type      : Functional
     * @tc.level     : level 0
     */
    it('SUB_MULTIMEDIA_IMAGE_PACK_TO_FILE_CALLBACK_ERR_0200', 0, async function (done) {
      let ops = {
        format: 'image/jpeg', quality: 101
      };
      let res = await packToFileCbErr(done, 'SUB_MULTIMEDIA_IMAGE_PACK_TO_FILE_CALLBACK_ERR_0200', ops, 'callback_pixel_map_errb.jpg');
      expect(res).assertTrue();
      done();
    });

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_PACK_TO_FILE_CALLBACK_ERR_0300
     * @tc.name      : sub_multimedia_image_packToFile_callback_pixelmap_err_003
     * @tc.desc      : 1.create pixelmap
     *               : 2.get writefd
     *               : 3.create ImagePacker
     *               : 4.packToFile { format: 'image/txt', quality: 100 };
     * @tc.size      : MEDIUM
     * @tc.type      : Functional
     * @tc.level     : level 0
     */
    it('SUB_MULTIMEDIA_IMAGE_PACK_TO_FILE_CALLBACK_ERR_0300', 0, async function (done) {
      let ops = {
        format: 'image/txt', quality: 100
      };
      let res = await packToFileCbErr(done, 'SUB_MULTIMEDIA_IMAGE_PACK_TO_FILE_CALLBACK_ERR_0300', ops, 'callback_pixel_map_errc.jpg');
      expect(res).assertTrue();
      done();
    });

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_PACK_TO_FILE_PROMISE_ERR_0100
     * @tc.name      : sub_multimedia_image_packToFile_promise_pixelmap_err_001
     * @tc.desc      : 1.create pixelmap
     *               : 2.get writefd
     *               : 3.create ImagePacker
     *               : 4.packToFile no quality
     * @tc.size      : MEDIUM
     * @tc.type      : Functional
     * @tc.level     : level 0
     */
    it('SUB_MULTIMEDIA_IMAGE_PACK_TO_FILE_PROMISE_ERR_0100', 0, async function (done) {
      let ops = {
        format: 'image/jpeg'
      };
      let res = await packToFilePromiseErr(done, 'SUB_MULTIMEDIA_IMAGE_PACK_TO_FILE_PROMISE_ERR_0100', ops, 'promise_pixel_map_erra.jpg');
      expect(res).assertTrue();
      done();
    });

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_PACK_TO_FILE_PROMISE_ERR_0200
     * @tc.name      : sub_multimedia_image_packToFile_promise_pixelmap_err_002
     * @tc.desc      : 1.create pixelmap
     *               : 2.get writefd
     *               : 3.create ImagePacker
     *               : 4.packToFile { format: 'image/jpeg', quality: 101 };
     * @tc.size      : MEDIUM
     * @tc.type      : Functional
     * @tc.level     : level 0
     */
    it('SUB_MULTIMEDIA_IMAGE_PACK_TO_FILE_PROMISE_ERR_0200', 0, async function (done) {
      let ops = {
        format: 'image/jpeg', quality: 101
      };
      let res = await packToFilePromiseErr(done, 'SUB_MULTIMEDIA_IMAGE_PACK_TO_FILE_PROMISE_ERR_0200', ops, 'promise_pixel_map_errb.jpg');
      expect(res).assertTrue();
      done();
    });

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_PACK_TO_FILE_PROMISE_ERR_0300
     * @tc.name      : sub_multimedia_image_packToFile_promise_pixelmap_err_003
     * @tc.desc      : 1.create pixelmap
     *               : 2.get writefd
     *               : 3.create ImagePacker
     *               : 4.packToFile { format: 'image/txt', quality: 100 };
     * @tc.size      : MEDIUM
     * @tc.type      : Functional
     * @tc.level     : level 0
     */
    it('SUB_MULTIMEDIA_IMAGE_PACK_TO_FILE_PROMISE_ERR_0300', 0, async function (done) {
      let ops = {
        format: 'image/txt', quality: 100
      };
      let res = await packToFilePromiseErr(done, 'SUB_MULTIMEDIA_IMAGE_PACK_TO_FILE_PROMISE_ERR_0300', ops, 'promise_pixel_map_errc.jpg');
      expect(res).assertTrue();
      done();
    });
  });
}