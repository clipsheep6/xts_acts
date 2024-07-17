/*
 * Copyright (C) 2022 Huawei Device Co., Ltd.
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

import image from '@ohos.multimedia.image'
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium'
import featureAbility from "@ohos.ability.featureAbility";
import fileio from "@ohos.fileio";

export default function imageErrorCode() {
  describe('imageErrorCode', function () {
    const ERROR_CODE = 62980115;
    let globalpixelmap;
    let globalImagesource;
    let globalPacker;
    let filePath;
    let fdNumber;
    beforeAll(async function () {
      console.info('beforeAll case');
    })

    beforeEach(function () {
      console.info('beforeEach case');
    })

    afterEach(async function () {
      if (globalpixelmap != undefined) {
        console.info("globalpixelmap release start");
        try {
          await globalpixelmap.release();
        } catch (error) {
          console.info("globalpixelmap release fail");
        }
      }
      if (globalImagesource != undefined) {
        console.info("globalpixelmap release start");
        try {
          await globalImagesource.release();
        } catch (error) {
          console.info("globalImagesource release fail");
        }
      }
      console.info('afterEach case');
    })

    afterAll(async function () {
      console.info('afterAll case');
    })

    async function getFd(fileName) {
      let context = await featureAbility.getContext();
      await context.getFilesDir().then((data) => {
        filePath = data + "/" + fileName;
        console.info("image case filePath is " + filePath);
      });
      await fileio.open(filePath).then((data) => {
        fdNumber = data;
        console.info("image case open fd success " + fdNumber);
      }, (err) => {
          console.info("image cese open fd fail" + err);
        }
      ).catch((err) => {
        console.info("image case open fd err " + err);
      });
    }

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_PACKING_CALLBACK_ERR_0100
     * @tc.name      : Packing ImageSource - callback
     * @tc.desc      : 1.create ImageSource
     *                 2.create ImagePacker
     *                 3.call packing(imageSourceApi, packOpts, 0, "", callback)
     *                 4.return errorCode
     * @tc.size      : MEDIUM
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it("SUB_MULTIMEDIA_IMAGE_PACKING_CALLBACK_ERR_0100", 0, async function (done) {
      await getFd("test.jpg");
      const imageSourceApi = image.createImageSource(fdNumber);
      if (imageSourceApi == undefined) {
        expect(false).assertTrue();
        done();
      } else {
        globalImagesource = imageSourceApi;
        const imagePackerApi = image.createImagePacker();
        if (imagePackerApi == undefined) {
          expect(false).assertTrue();
          done();
        } else {
          globalPacker = imagePackerApi;
          let packOpts = { format: "image/jpeg", quality: 99 };
          imagePackerApi.packing(imageSourceApi, packOpts, 0, "", (err) => {
            expect(false).assertTrue();
            done();
          }).catch((error) => {
            expect(error.code == 62980115).assertTrue();
            console.log("SUB_MULTIMEDIA_IMAGE_PACKING_CALLBACK_ERR_0100 error : " + JSON.stringify(error));
            done();
          });
        }
      }
    });

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_PACKING_PROMISE_ERR_0100
     * @tc.name      : packing ImageSource - promise
     * @tc.desc      : 1.create ImageSource
     *                 2.create ImagePacker
     *                 3.release ImageSource
     *                 4.call packing(imageSourceApi, packOpts)
     *                 5.return errorCode
     * @tc.size      : MEDIUM
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it("SUB_MULTIMEDIA_IMAGE_PACKING_PROMISE_ERR_0100", 0, async function (done) {
      await getFd("test.jpg");
      const imageSourceApi = image.createImageSource(fdNumber);
      if (imageSourceApi == undefined) {
        expect(false).assertTrue();
        done();
      } else {
        globalImagesource = imageSourceApi;
        const imagePackerApi = image.createImagePacker();
        if (imagePackerApi == undefined) {
          expect(false).assertTrue();
          done();
        } else {
          globalPacker = imagePackerApi;
          let packOpts = { format: "image/jpeg", quality: 99 };
          imageSourceApi.release()
          imagePackerApi.packing(imageSourceApi, packOpts).then((data) => {
            expect(false).assertTrue();
            done();
          }).catch((error) => {
            expect(error.code == 62980282).assertTrue();
            console.log("SUB_MULTIMEDIA_IMAGE_PACKING_PROMISE_ERR_0100 error : " + JSON.stringify(error));
            done();
          });
        }
      }
    });

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_PACKING_CALLBACK_ERR_0200
     * @tc.name      : Packing PixelMap - callback
     * @tc.desc      : 1.create PixelMap
     *                 2.create ImagePacker
     *                 3.release PixelMap
     *                 4.call packing(pixelmap, packOpts, "", callback)
     *                 5.return errorCode
     * @tc.size      : MEDIUM
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it("SUB_MULTIMEDIA_IMAGE_PACKING_CALLBACK_ERR_0200", 0, async function (done) {
      const Color = new ArrayBuffer(96);
      var opts = { editable: true, pixelFormat: 3, size: { height: 4, width: 6 } };
      image.createPixelMap(Color, opts).then((pixelmap) => {
        if (pixelmap == undefined) {
          expect(false).assertTrue();
          done();
        } else {
          globalpixelmap = pixelmap;
          const imagePackerApi = image.createImagePacker();
          if (imagePackerApi == undefined) {
            expect(false).assertTrue();
            done();
          } else {
            globalPacker = imagePackerApi;
            let packOpts = { format: "image/jpeg", quality: 99 };
            pixelmap.release();
            imagePackerApi.packing(pixelmap, packOpts, "", (err) => {
              expect(false).assertTrue();
              done();
            }).catch((error) => {
              expect(error.code == 62980283).assertTrue();
              console.log("SUB_MULTIMEDIA_IMAGE_PACKING_CALLBACK_ERR_0200 error : " + JSON.stringify(error));
              done();
            });
          }
        }
      })
    });

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_PACKING_PROMISE_ERR_0200
     * @tc.name      : Packing PixelMap - promise
     * @tc.desc      : 1.create PixelMap
     *                 2.create ImagePacker
     *                 3.call packing(pixelmap, Color)
     *                 4.return errorCode
     * @tc.size      : MEDIUM
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it("SUB_MULTIMEDIA_IMAGE_PACKING_PROMISE_ERR_0200", 0, async function (done) {
      const Color = new ArrayBuffer(96);
      var opts = { editable: true, pixelFormat: 3, size: { height: 4, width: 6 } };
      image.createPixelMap(Color, opts).then((pixelmap) => {
        if (pixelmap == undefined) {
          expect(false).assertTrue();
          done();
        } else {
          globalpixelmap = pixelmap;
          const imagePackerApi = image.createImagePacker();
          if (imagePackerApi == undefined) {
            expect(false).assertTrue();
            done();
          } else {
            globalPacker = imagePackerApi;
            imagePackerApi.packing(pixelmap, Color).then((data) => {
              expect(false).assertTrue();
              done();
            }).catch((error) => {
              expect(error.code == 62980115).assertTrue();
              console.log("SUB_MULTIMEDIA_IMAGE_PACKING_PROMISE_ERR_0200 error : " + JSON.stringify(error));
              done();
            });
          }
        }
      })
    });

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_PIXELMAPFRAMEWORK_PIXELMAP_CREATEPIXELMAPFROMSURFACESYNC_ERR_0100
     * @tc.name      : Test_CreatePixelMapFromSurfaceSync
     * @tc.desc      : 1.call createPixelMapFromSurfaceSync()
     *                 2.return errorCode
     * @tc.size      : MEDIUM
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('SUB_MULTIMEDIA_IMAGE_PIXELMAPFRAMEWORK_PIXELMAP_CREATEPIXELMAPFROMSURFACESYNC_ERR_0100', 0, async function (done) {
      try {
        image.createPixelMapFromSurfaceSync();
        expect(false).assertTrue();
        done();
      } catch (error) {
        expect(error.code == ERROR_CODE).assertTrue();
        console.log('SUB_MULTIMEDIA_IMAGE_PIXELMAPFRAMEWORK_PIXELMAP_CREATEPIXELMAPFROMSURFACESYNC_ERR_0100 error: ' + error);
        console.info("SUB_MULTIMEDIA_IMAGE_PIXELMAPFRAMEWORK_PIXELMAP_CREATEPIXELMAPFROMSURFACESYNC_ERR_0100 err code " + JSON.stringify(error));
        done();
      }
    })

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_PIXELMAPFRAMEWORK_PIXELMAP_CREATEPIXELMAPSYNC_ERR_0100
     * @tc.name      : Test_CreatePixelMapSync
     * @tc.desc      : 1.call createPixelMapSync()
     *                 2.return errorCode
     * @tc.size      : MEDIUM
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('SUB_MULTIMEDIA_IMAGE_PIXELMAPFRAMEWORK_PIXELMAP_CREATEPIXELMAPSYNC_ERR_0100', 0, async function (done) {
      try {
        image.createPixelMapSync();
        expect(false).assertTrue();
        done();
      } catch (error) {
        expect(error.code == ERROR_CODE).assertTrue();
        console.log('SUB_MULTIMEDIA_IMAGE_PIXELMAPFRAMEWORK_PIXELMAP_CREATEPIXELMAPSYNC_ERR_0100 error: ' + error);
        console.info("SUB_MULTIMEDIA_IMAGE_PIXELMAPFRAMEWORK_PIXELMAP_CREATEPIXELMAPSYNC_ERR_0100 err code " + JSON.stringify(error));
        done();
      }
    })

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_PIXELMAPFRAMEWORK_PIXELMAP_CREATEPIXELMAPSYNC_ERR_0200
     * @tc.name      : Test_CreatePixelMapSync
     * @tc.desc      : 1.create InitializationOptions
     *                 2.call createPixelMapSync(0, InitializationOptions)
     *                 3.return errorCode
     * @tc.size      : MEDIUM
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('SUB_MULTIMEDIA_IMAGE_PIXELMAPFRAMEWORK_PIXELMAP_CREATEPIXELMAPSYNC_ERR_0200', 0, async function (done) {
      let InitializationOptions = { editable: true, pixelFormat: 3, size: { height: 4, width: 6 }, alphaType: 3};
      try {
        image.createPixelMapSync(0, InitializationOptions)
        expect(false).assertTrue();
        done();
      } catch (error) {
        expect(error.code == ERROR_CODE).assertTrue();
        console.log('SUB_MULTIMEDIA_IMAGE_PIXELMAPFRAMEWORK_PIXELMAP_CREATEPIXELMAPSYNC_ERR_0200 error: ' + error);
        console.info("SUB_MULTIMEDIA_IMAGE_PIXELMAPFRAMEWORK_PIXELMAP_CREATEPIXELMAPSYNC_ERR_0200 err code " + JSON.stringify(error));
        done();
      }
    })

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_PIXELMAPFRAMEWORK_PIXELMAP_CREATEPIXELMAPSYNC_ERR_0300
     * @tc.name      : Test_CreatePixelMapSync
     * @tc.desc      : 1.create color
     *                 2.call createPixelMapSync(color, 0)
     *                 3.return errorCode
     * @tc.size      : MEDIUM
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('SUB_MULTIMEDIA_IMAGE_PIXELMAPFRAMEWORK_PIXELMAP_CREATEPIXELMAPSYNC_ERR_0300', 0, async function (done) {
      let color = new ArrayBuffer(96);
      try {
        image.createPixelMapSync(color, 0);
        expect(false).assertTrue();
        done();
      } catch (error) {
        expect(error.code == ERROR_CODE).assertTrue();
        console.log('SUB_MULTIMEDIA_IMAGE_PIXELMAPFRAMEWORK_PIXELMAP_CREATEPIXELMAPSYNC_ERR_0300 error: ' + error);
        console.info("SUB_MULTIMEDIA_IMAGE_PIXELMAPFRAMEWORK_PIXELMAP_CREATEPIXELMAPSYNC_ERR_0300 err code " + JSON.stringify(error));
        done();
      }
    })

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_PIXELMAPFRAMEWORK_PIXELMAP_CREATEPIXELMAPSYNC_ERR_0400
     * @tc.name      : Test_CreatePixelMapSync
     * @tc.desc      : 1.call createPixelMapSync(0)
     *                 2.return errorCode
     * @tc.size      : MEDIUM
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
      it('SUB_MULTIMEDIA_IMAGE_PIXELMAPFRAMEWORK_PIXELMAP_CREATEPIXELMAPSYNC_ERR_0400', 0, async function (done) {
        try {
          image.createPixelMapSync(0);
          expect(false).assertTrue();
          done();
        } catch (error) {
          expect(error.code == ERROR_CODE).assertTrue();
          console.log('SUB_MULTIMEDIA_IMAGE_PIXELMAPFRAMEWORK_PIXELMAP_CREATEPIXELMAPSYNC_ERR_0400 error: ' + error);
          console.info("SUB_MULTIMEDIA_IMAGE_PIXELMAPFRAMEWORK_PIXELMAP_CREATEPIXELMAPSYNC_ERR_0400 err code " + JSON.stringify(error));
          done();
        }
    })

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_PIXELMAPFRAMEWORK_PIXELMAP_CREATEUNPREMULTIPLIEDPIXELMAP_PROMISE_ERR_0100
     * @tc.name      : Test_CreateUnpremultipliedPixelMap_Promise
     * @tc.desc      : 1.call createUnpremultipliedPixelMap()
     *                 2.return errorCode
     * @tc.size      : MEDIUM
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('SUB_MULTIMEDIA_IMAGE_PIXELMAPFRAMEWORK_PIXELMAP_CREATEUNPREMULTIPLIEDPIXELMAP_PROMISE_ERR_0100', 0, async function (done) {
      try {
        image.createUnpremultipliedPixelMap().then(pixelmap => {
          globalpixelmap = pixelmap;
          expect(false).assertTrue();
          done();
        })
      } catch (error) {
        expect(error.code == ERROR_CODE).assertTrue();
        console.log('SUB_MULTIMEDIA_IMAGE_PIXELMAPFRAMEWORK_PIXELMAP_CREATEUNPREMULTIPLIEDPIXELMAP_PROMISE_ERR_0100 error: ' + error);
        console.log('SUB_MULTIMEDIA_IMAGE_PIXELMAPFRAMEWORK_PIXELMAP_CREATEUNPREMULTIPLIEDPIXELMAP_PROMISE_ERR_0100 error: ' + JSON.stringify(error.code));
        done();
      }
    })

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_PIXELMAPFRAMEWORK_PIXELMAP_CREATEUNPREMULTIPLIEDPIXELMAP_CALLBACK_ERR_0100
     * @tc.name      : Test_CreateUnpremultipliedPixelMap_Callback
     * @tc.desc      : 1.call createUnpremultipliedPixelMap(callback)
     *                 2.return errorCode
     * @tc.size      : MEDIUM
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('SUB_MULTIMEDIA_IMAGE_PIXELMAPFRAMEWORK_PIXELMAP_CREATEUNPREMULTIPLIEDPIXELMAP_CALLBACK_ERR_0100', 0, async function (done) {
      try {
        image.createUnpremultipliedPixelMap((err, pixelmap) => {
          globalpixelmap = pixelmap;
          expect(false).assertTrue();
          done();
        })
      } catch (error) {
        expect(error.code == ERROR_CODE).assertTrue();
        console.log('SUB_MULTIMEDIA_IMAGE_PIXELMAPFRAMEWORK_PIXELMAP_CREATEUNPREMULTIPLIEDPIXELMAP_CALLBACK_ERR_0100 error: ' + error);
        console.info('SUB_MULTIMEDIA_IMAGE_PIXELMAPFRAMEWORK_PIXELMAP_CREATEUNPREMULTIPLIEDPIXELMAP_CALLBACK_ERR_0100 error code' + JSON.stringify(error));
        done();
      }
    })

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_PIXELMAPFRAMEWORK_PIXELMAP_CREATEPREMULTIPLIEDPIXELMAP_PROMISE_ERR_0100
     * @tc.name      : Test_CreatePremultipliedPixelMap_Promise
     * @tc.desc      : 1.call createPremultipliedPixelMap()
     *                 2.return errorCode
     * @tc.size      : MEDIUM
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('SUB_MULTIMEDIA_IMAGE_PIXELMAPFRAMEWORK_PIXELMAP_CREATEPREMULTIPLIEDPIXELMAP_PROMISE_ERR_0100', 0, async function (done) {
      try {
        image.createPremultipliedPixelMap().then(pixelmap => {
          globalpixelmap = pixelmap;
          expect(false).assertTrue();
          done();
        })
      } catch (error) {
        expect(error.code == ERROR_CODE).assertTrue();
        console.log('SUB_MULTIMEDIA_IMAGE_PIXELMAPFRAMEWORK_PIXELMAP_CREATEPREMULTIPLIEDPIXELMAP_PROMISE_ERR_0100 error: ' + error);
        console.log('SUB_MULTIMEDIA_IMAGE_PIXELMAPFRAMEWORK_PIXELMAP_CREATEPREMULTIPLIEDPIXELMAP_PROMISE_ERR_0100 error: ' + JSON.stringify(error.code));
        done();
      }
    })

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_PIXELMAPFRAMEWORK_PIXELMAP_CREATEPREMULTIPLIEDPIXELMAP_CALLBACK_ERR_0100
     * @tc.name      : Test_CreatePremultipliedPixelMap_Callback
     * @tc.desc      : 1.call createPremultipliedPixelMap(callback)
     *                 2.return errorCode
     * @tc.size      : MEDIUM
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('SUB_MULTIMEDIA_IMAGE_PIXELMAPFRAMEWORK_PIXELMAP_CREATEPREMULTIPLIEDPIXELMAP_CALLBACK_ERR_0100', 0, async function (done) {
      try {
        image.createPremultipliedPixelMap((err, pixelmap) => {
          globalpixelmap = pixelmap;
          expect(false).assertTrue();
          done();
        })
      } catch (error) {
        expect(error.code == ERROR_CODE).assertTrue();
        console.log('SUB_MULTIMEDIA_IMAGE_PIXELMAPFRAMEWORK_PIXELMAP_CREATEPREMULTIPLIEDPIXELMAP_CALLBACK_ERR_0100 error: ' + error);
        console.info('SUB_MULTIMEDIA_IMAGE_PIXELMAPFRAMEWORK_PIXELMAP_CREATEPREMULTIPLIEDPIXELMAP_CALLBACK_ERR_0100 error code' + JSON.stringify(error));
        done();
      }
    })

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_PIXELMAPFRAMEWORK_PIXELMAP_CREATEPIXELMAP_PROMISE_ERR_0100
     * @tc.name      : Test_CreatePixelMap_Promise
     * @tc.desc      : 1.create InitializationOptions object
     *                 2.set editable, pixeFormat, size
     *                 3.using 0 and opts create newPixelMap
     *                 4.return errorCode
     * @tc.size      : MEDIUM
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('SUB_MULTIMEDIA_IMAGE_PIXELMAPFRAMEWORK_PIXELMAP_CREATEPIXELMAP_PROMISE_ERR_0100', 0, async function (done) {
      let opts = { editable: true, pixelFormat: 3, size: { height: 4, width: 6 } };
      try {
        image.createPixelMap(0, opts).then(pixelmap => {
          globalpixelmap = pixelmap;
          expect(false).assertTrue();
          console.info('SUB_MULTIMEDIA_IMAGE_PIXELMAPFRAMEWORK_PIXELMAP_CREATEPIXELMAP_PROMISE_ERR_0100 success');
          done();
        })
      } catch (error) {
        expect(error.code == ERROR_CODE).assertTrue();
        console.log('SUB_MULTIMEDIA_IMAGE_PIXELMAPFRAMEWORK_PIXELMAP_CREATEPIXELMAP_PROMISE_ERR_0100 error: ' + error);
        console.log('SUB_MULTIMEDIA_IMAGE_PIXELMAPFRAMEWORK_PIXELMAP_CREATEPIXELMAP_PROMISE_ERR_0100 error: ' + JSON.stringify(error.code));
        done();
      }
    })

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_PIXELMAPFRAMEWORK_PIXELMAP_CREATEPIXELMAP_CALLBACK_0100
     * @tc.name      : Test_CreatePixelMap_Callback
     * @tc.desc      : 1.create Color
     *                 2.using color and 0 create newPixelMap
     *                 3.return errorCode
     * @tc.size      : MEDIUM
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('SUB_MULTIMEDIA_IMAGE_PIXELMAPFRAMEWORK_PIXELMAP_CREATEPIXELMAP_CALLBACK_0100', 0, async function (done) {
      const Color = new ArrayBuffer(96);
      try {
        image.createPixelMap(Color, 0, (err, pixelmap) => {
          globalpixelmap = pixelmap;
          expect(false).assertTrue();
          done();
        })
      } catch (error) {
        expect(error.code == ERROR_CODE).assertTrue();
        console.log('SUB_MULTIMEDIA_IMAGE_PIXELMAPFRAMEWORK_PIXELMAP_CREATEPIXELMAP_CALLBACK_0100 error: ' + error);
        console.info('SUB_MULTIMEDIA_IMAGE_PIXELMAPFRAMEWORK_PIXELMAP_CREATEPIXELMAP_CALLBACK_0100 err: ' + error.code);
        done();
      }
    })

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_PIXELMAPFRAMEWORK_PIXELMAP_CROPSYNC_ERR_0100
     * @tc.name      : Test_CropSync
     * @tc.desc      : 1.create Color and InitializationOptions object
     *                 2.set editable, pixeFormat, size
     *                 3.using color and opts create newPixelMap
     *                 4.call cropSync()
     *                 5.return errorCode
     * @tc.size      : MEDIUM
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('SUB_MULTIMEDIA_IMAGE_PIXELMAPFRAMEWORK_PIXELMAP_CROPSYNC_ERR_0100', 0, async function (done) {
      const color = new ArrayBuffer(96);
      let opts = { editable: true, pixelFormat: 3, size: { height: 4, width: 6 } };
      image.createPixelMap(color, opts).then(pixelmap => {
        globalpixelmap = pixelmap;
        try {
          pixelmap.cropSync();
          expect(false).assertTrue();
          done();
        } catch(err) {
          expect(err.code == ERROR_CODE).assertTrue();
          console.log('SUB_MULTIMEDIA_IMAGE_PIXELMAPFRAMEWORK_PIXELMAP_CROPSYNC_ERR_0100 err ' + JSON.stringify(err));
          done();
        }
      })
    })

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_PIXELMAPFRAMEWORK_PIXELMAP_FLIPSYNC_ERR_0100
     * @tc.name      : Test_FlipSync
     * @tc.desc      : 1.create Color and InitializationOptions object
     *                 2.set editable, pixeFormat, size
     *                 3.using color and opts create newPixelMap
     *                 4.call flipSync()
     *                 5.return errorCode
     * @tc.size      : MEDIUM
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('SUB_MULTIMEDIA_IMAGE_PIXELMAPFRAMEWORK_PIXELMAP_FLIPSYNC_ERR_0100', 0, async function (done) {
      const color = new ArrayBuffer(96);
      let opts = { editable: true, pixelFormat: 3, size: { height: 4, width: 6 } };
      image.createPixelMap(color, opts).then(pixelmap => {
        globalpixelmap = pixelmap;
        try {
          pixelmap.flipSync();
          expect(false).assertTrue();
          done();
        } catch(err) {
          expect(err.code == ERROR_CODE).assertTrue();
          console.log('SUB_MULTIMEDIA_IMAGE_PIXELMAPFRAMEWORK_PIXELMAP_FLIPSYNC_ERR_0100 error ' + err);
          console.log('SUB_MULTIMEDIA_IMAGE_PIXELMAPFRAMEWORK_PIXELMAP_FLIPSYNC_ERR_0100 error ' + JSON.stringify(err));
          done();
        }
      })
    })

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_PIXELMAPFRAMEWORK_PIXELMAP_ROTATESYNC_ERR_0100
     * @tc.name      : Test_RotateSync
     * @tc.desc      : 1.create Color and InitializationOptions object
     *                 2.set editable, pixeFormat, size
     *                 3.using color and opts create newPixelMap
     *                 4.call rotateSync()
     *                 5.return errorCode
     * @tc.size      : MEDIUM
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('SUB_MULTIMEDIA_IMAGE_PIXELMAPFRAMEWORK_PIXELMAP_ROTATESYNC_ERR_0100', 0, async function (done) {
      const color = new ArrayBuffer(96);
      let opts = { editable: true, pixelFormat: 3, size: { height: 4, width: 6 } };
      image.createPixelMap(color, opts).then(pixelmap => {
        globalpixelmap = pixelmap;
        try {
          pixelmap.rotateSync();
          expect(false).assertTrue();
          done();
        } catch(err) {
          expect(err.code == ERROR_CODE).assertTrue();
          console.log('SUB_MULTIMEDIA_IMAGE_PIXELMAPFRAMEWORK_PIXELMAP_ROTATESYNC_ERR_0100 error ' + JSON.stringify(err));
          done();
        }
      })
    })

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_PIXELMAPFRAMEWORK_PIXELMAP_TRANSLATESYNC_ERR_0100
     * @tc.name      : Test_TranslateSync
     * @tc.desc      : 1.create Color and InitializationOptions object
     *                 2.set editable, pixeFormat, size
     *                 3.using color and opts create newPixelMap
     *                 4.call translateSync()
     *                 5.return errorCode
     * @tc.size      : MEDIUM
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('SUB_MULTIMEDIA_IMAGE_PIXELMAPFRAMEWORK_PIXELMAP_TRANSLATESYNC_ERR_0100', 0, async function (done) {
      const color = new ArrayBuffer(96);
      let opts = { editable: true, pixelFormat: 3, size: { height: 4, width: 6 } };
      image.createPixelMap(color, opts).then(pixelmap => {
        globalpixelmap = pixelmap;
        try {
          pixelmap.translateSync();
          expect(false).assertTrue();
          done();
        } catch(err) {
          expect(err.code == ERROR_CODE).assertTrue();
          console.log('SUB_MULTIMEDIA_IMAGE_PIXELMAPFRAMEWORK_PIXELMAP_TRANSLATESYNC_ERR_0100 error ' + JSON.stringify(err));
          done();
        }
      })
    })

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_PIXELMAPFRAMEWORK_PIXELMAP_SCALESYNC_ERR_0100
     * @tc.name      : Test_ScaleSync
     * @tc.desc      : 1.create Color and InitializationOptions object
     *                 2.set editable, pixeFormat, size
     *                 3.using color and opts create newPixelMap
     *                 4.call scaleSync()
     *                 5.return errorCode
     * @tc.size      : MEDIUM
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('SUB_MULTIMEDIA_IMAGE_PIXELMAPFRAMEWORK_PIXELMAP_SCALESYNC_ERR_0100', 0, async function (done) {
      const color = new ArrayBuffer(96);
      let opts = { editable: true, pixelFormat: 3, size: { height: 4, width: 6 } };
      image.createPixelMap(color, opts).then(pixelmap => {
        globalpixelmap = pixelmap;
        try {
          pixelmap.scaleSync();
          expect(false).assertTrue();
          done();
        } catch(err) {
          expect(err.code == ERROR_CODE).assertTrue();
          console.log('SUB_MULTIMEDIA_IMAGE_PIXELMAPFRAMEWORK_PIXELMAP_SCALESYNC_ERR_0100 error ' + JSON.stringify(err));
          done();
        }
      })
    })

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_PIXELMAPFRAMEWORK_PIXELMAP_OPACITYSYNC_ERR_0100
     * @tc.name      : Test_OpacitySync
     * @tc.desc      : 1.create Color and InitializationOptions object
     *                 2.set editable, pixeFormat, size
     *                 3.using color and opts create newPixelMap
     *                 4.call opacitySync()
     *                 5.return errorCode
     * @tc.size      : MEDIUM
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('SUB_MULTIMEDIA_IMAGE_PIXELMAPFRAMEWORK_PIXELMAP_OPACITYSYNC_ERR_0100', 0, async function (done) {
      const color = new ArrayBuffer(96);
      let opts = { editable: true, pixelFormat: 3, size: { height: 4, width: 6 } };
      image.createPixelMap(color, opts).then(pixelmap => {
        try {
          pixelmap.opacitySync();
          expect(false).assertTrue();
          done();
        } catch (error) {
          expect(error.code == ERROR_CODE).assertTrue();
          console.info("SUB_MULTIMEDIA_IMAGE_PIXELMAPFRAMEWORK_PIXELMAP_OPACITYSYNC_ERR_0100 err code " + JSON.stringify(error));
          done();
        }
      })
    })

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_PIXELMAPFRAMEWORK_PIXELMAP_CREATEALPHAPIXELMAPSYNC_ERR_0100
     * @tc.name      : Test_CreateAlphaPixelMapSync
     * @tc.desc      : 1.create Color and InitializationOptions object
     *                 2.set editable, pixeFormat, size
     *                 3.using color and opts create newPixelMap
     *                 4.call createAlphaPixelmapSync(666)
     *                 5.return errorCode
     * @tc.size      : MEDIUM
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('SUB_MULTIMEDIA_IMAGE_PIXELMAPFRAMEWORK_PIXELMAP_CREATEALPHAPIXELMAPSYNC_ERR_0100', 0, async function (done) {
      const color = new ArrayBuffer(96);
      let opts = { editable: true, pixelFormat: 3, size: { height: 4, width: 6 } };
      image.createPixelMap(color, opts).then(pixelmap => {
        try {
          pixelmap.createAlphaPixelmapSync(666);
          expect(false).assertTrue();
          done();
        } catch (error) {
          expect(error.code == ERROR_CODE).assertTrue();
          console.info("SUB_MULTIMEDIA_IMAGE_PIXELMAPFRAMEWORK_PIXELMAP_CREATEALPHAPIXELMAPSYNC_ERR_0100 err code " + JSON.stringify(error));
          done();
        }
      })
    })

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_PIXELMAPFRAMEWORK_PIXELMAP_WRITEBUFFERTOPIXELSSYNC_ERR_0100
     * @tc.name      : Test_WriteBufferToPixelsSync
     * @tc.desc      : 1.create Color and InitializationOptions object
     *                 2.set editable, pixeFormat, size
     *                 3.using color and opts create newPixelMap
     *                 4.call writeBufferToPixelsSync()
     *                 5.return errorCode
     * @tc.size      : MEDIUM
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('SUB_MULTIMEDIA_IMAGE_PIXELMAPFRAMEWORK_PIXELMAP_WRITEBUFFERTOPIXELSSYNC_ERR_0100', 0, async function (done) {
      const color = new ArrayBuffer(96);
      let opts = { editable: true, pixelFormat: 3, size: { height: 4, width: 6 } };
      image.createPixelMap(color, opts, (err, pixelmap) => {
        globalpixelmap = pixelmap;
        try {
          pixelmap.writeBufferToPixelsSync();
          expect(false).assertTrue();
          done();
        } catch (error) {
          expect(error.code == ERROR_CODE).assertTrue();
          console.info("SUB_MULTIMEDIA_IMAGE_PIXELMAPFRAMEWORK_PIXELMAP_WRITEBUFFERTOPIXELSSYNC_ERR_0100 err code " + JSON.stringify(error));
          done();
        }
      })
    })
    
    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_PIXELMAPFRAMEWORK_PIXELMAP_WRITEPIXELSYNC_ERR_0100
     * @tc.name      : Test_WtitePixelSync
     * @tc.desc      : 1.create Color and InitializationOptions object
     *                 2.set editable, pixeFormat, size
     *                 3.using color and opts create newPixelMap
     *                 4.call writePixelsSync()
     *                 5.return errorCode
     * @tc.size      : MEDIUM
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('SUB_MULTIMEDIA_IMAGE_PIXELMAPFRAMEWORK_PIXELMAP_WRITEPIXELSYNC_ERR_0100', 0, async function (done) {
      const color = new ArrayBuffer(96);
      let opts = { editable: true, pixelFormat: 3, size: { height: 4, width: 6 } };
      image.createPixelMap(color, opts, (err, pixelmap) => {
        globalpixelmap = pixelmap;
        try {
          pixelmap.writePixelsSync();
          expect(false).assertTrue();
          done();
        } catch (error) {
          expect(error.code == ERROR_CODE).assertTrue();
          console.info("SUB_MULTIMEDIA_IMAGE_PIXELMAPFRAMEWORK_PIXELMAP_WRITEPIXELSYNC_ERR_0100 err code " + JSON.stringify(error));
          done();
        }
      })
    })

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_PIXELMAPFRAMEWORK_PIXELMAP_READPIXELSYNC_ERR_0100
     * @tc.name      : Test_ReadPixelSync
     * @tc.desc      : 1.create Color and InitializationOptions object
     *                 2.set editable, pixeFormat, size
     *                 3.using color and opts create newPixelMap
     *                 4.call readPixelsSync()
     *                 5.return errorCode
     * @tc.size      : MEDIUM
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('SUB_MULTIMEDIA_IMAGE_PIXELMAPFRAMEWORK_PIXELMAP_READPIXELSYNC_ERR_0100', 0, async function (done) {
      const color = new ArrayBuffer(96);
      var bufferArr = new Uint8Array(color);
      for (var i = 0; i < bufferArr.length; i++) {
        bufferArr[i] = i + 1;
      }
      let opts = { editable: true, pixelFormat: 3, size: { height: 4, width: 6 } };
      image.createPixelMap(color, opts, (err, pixelmap) => {
        globalpixelmap = pixelmap;
        try {
          pixelmap.readPixelsSync();
          expect(false).assertTrue();
          done();
        } catch (error) {
          expect(error.code == ERROR_CODE).assertTrue();
          console.info("SUB_MULTIMEDIA_IMAGE_PIXELMAPFRAMEWORK_PIXELMAP_READPIXELSYNC_ERR_0100 err code " + JSON.stringify(error));
          done();
        }
      })
    })

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_PIXELMAPFRAMEWORK_PIXELMAP_READPIXELSTOBUFFERSYNC_ERR_0100
     * @tc.name      : Test_ReadPixelsToBufferSync
     * @tc.desc      : 1.create Color and InitializationOptions object
     *                 2.set editable, pixeFormat, size
     *                 3.using color and opts create newPixelMap
     *                 4.call readPixelsToBufferSync()
     *                 5.return errorCode
     * @tc.size      : MEDIUM
     * @tc.type      : Functional
     * @tc.level     : Level 0
     */
    it('SUB_MULTIMEDIA_IMAGE_PIXELMAPFRAMEWORK_PIXELMAP_READPIXELSTOBUFFERSYNC_ERR_0100', 0, async function (done) {
      let color = new ArrayBuffer(96);
      let InitializationOptions = {editable: false, pixelFormat: 4, size: { height: 4, width: 6 }, alphaType: 3};
      image.createPixelMap(color, InitializationOptions).then((pixelmap) => {
        let pixelMap = pixelmap;
        try {
          pixelMap.readPixelsToBufferSync();
          expect(false).assertTrue();
          done();
        } catch(err) {
          expect(err.code == ERROR_CODE).assertTrue();
          console.log('SUB_MULTIMEDIA_IMAGE_PIXELMAPFRAMEWORK_PIXELMAP_READPIXELSTOBUFFERSYNC_ERR_0100 error ' + err);
          console.log('SUB_MULTIMEDIA_IMAGE_PIXELMAPFRAMEWORK_PIXELMAP_READPIXELSTOBUFFERSYNC_ERR_0100 error ' + JSON.stringify(err));
          done();
        }
      })
    })
  })
}
