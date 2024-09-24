/*
 * Copyright (C) 2021 Huawei Device Co., Ltd.
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

import image from "@ohos.multimedia.image";
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from "@ohos/hypium";
import { BusinessError } from '@ohos.base';
import fs from '@ohos.file.fs'

let globalpixelmap:ESObject;
let globalPacker:ESObject;
let globalImagesource:ESObject;
let filePath:ESObject;
let fdNumber:ESObject;

let getFd = async  (pathName:string) => {
  let filePath = getContext().getApplicationContext().filesDir + '/' + pathName;
  console.info(`case4 filePath is : ${filePath}`);
  try {
    let file:ESObject = fs.openSync(filePath, fs.OpenMode.CREATE | fs.OpenMode.READ_WRITE);
    console.log('filefilefile',JSON.stringify(file.fd))
    filePath = 'fd:// ' + file.fd;
    fdNumber = file.fd;
  } catch (error){
    console.info(`[fileIO]case catch open fd error : ${error}`);
  }
}

export default function imagePacking() {
  describe('imagePacking', () => {
    beforeAll(async () => {
      console.info("beforeAll case");
    });

    beforeEach( () =>  {
      console.info("beforeEach case");
    });

    afterEach(async () =>  {
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
      if (globalPacker != undefined) {
        console.info("globalPacker release start");
        try {
          await globalPacker.release();
        } catch (error) {
          console.info("globalPacker release fail");
        }
      }
      console.info("afterEach case");
    });

    afterAll(() =>  {
      console.info("afterAll case");
    });

    let packingPromise: (done: Function, testNum: ESObject, pixFormat: ESObject, arg: ESObject) => void =
      (done: Function, testNum: ESObject, pixFormat: ESObject, arg: ESObject): void => {
        let opts: ESObject;
        const Color = new ArrayBuffer(96);
        if (pixFormat == 2) {
          opts = {
            editable: true, pixelFormat: 2, size: {
              height: 4, width: 6
            } as ESObject
          };
        } else {
          opts = {
            editable: true, pixelFormat: 5, size: {
              height: 4, width: 6
            } as ESObject
          };
        }
        image
          .createPixelMap(Color, opts)
          .then((pixelmap) => {
            if (pixelmap == undefined) {
              expect(false).assertTrue();
              console.info(`${testNum} create pixelmap fail`);
              done();
            } else {
              globalpixelmap = pixelmap;
              const imagePackerApi = image.createImagePacker();
              if (imagePackerApi == undefined) {
                expect(false).assertTrue();
                console.info(`${testNum} create imagepacker fail`);
                done();
              } else {
                globalPacker = imagePackerApi;
                imagePackerApi
                  .packing(pixelmap, arg)
                  .then((data) => {
                    let dataArr = new Uint8Array(data);
                    console.info(`${testNum} dataArr.length=` + dataArr.length);
                    for (let i = 0; i < dataArr.length; i++) {
                      console.info(`dataArr[` + i + `]=` + dataArr[i]);
                    }
                    expect(data != undefined).assertTrue();
                    console.info(`${testNum} success`);
                    done();
                  })
                  .catch((error: BusinessError) => {
                    console.log(`${testNum} error:` + error);
                    expect().assertFail();
                    done();
                  });
              }
            }
          })
          .catch((error: BusinessError) => {
            console.log("createpixelmap error: " + error);
            expect().assertFail();
            done();
          });
      };
    let packingCb: (done: Function, testNum: ESObject, pixFormat: ESObject, arg: ESObject) => void =
      (done: Function, testNum: ESObject, pixFormat: ESObject, arg: ESObject): void => {
        let opts: ESObject;
        const Color = new ArrayBuffer(96);
        if (pixFormat == 2) {
          opts = {
            editable: true, pixelFormat: 2, size: {
              height: 4, width: 6
            } as ESObject
          };
        } else {
          opts = {
            editable: true, pixelFormat: 5, size: {
              height: 4, width: 6
            } as ESObject
          };
        }
        image
          .createPixelMap(Color, opts)
          .then((pixelmap) => {
            if (pixelmap == undefined) {
              expect(false).assertTrue();
              console.info(`${testNum} create pixelmap fail`);
              done();
            } else {
              globalpixelmap = pixelmap;
              const imagePackerApi = image.createImagePacker();
              if (imagePackerApi == undefined) {
                expect(false).assertTrue();
                console.info(`${testNum} create imagepacker fail`);
                done();
              } else {
                globalPacker = imagePackerApi;
                imagePackerApi.packing(pixelmap, arg, (err, data) => {
                  if (err != undefined) {
                    console.info(`${testNum} packing failerr: ${err}`);
                    expect(false).assertTrue();
                    done();
                    return;
                  }
                  let dataArr = new Uint8Array(data);
                  console.info(`${testNum} dataArr.length=` + dataArr.length);
                  for (let i = 0; i < dataArr.length; i++) {
                    console.info(`dataArr[` + i + `]=` + dataArr[i]);
                  }
                  expect(data != undefined).assertTrue();
                  done();
                });
              }
            }
          })
          .catch((error: BusinessError) => {
            console.log(`${testNum} createpixelmap error: ` + error);
            expect().assertFail();
            done();
          });
      };
    let packingCbFail: (done: Function, testNum: ESObject, pixFormat: ESObject, arg: ESObject) => void =
      (done: Function, testNum: ESObject, pixFormat: ESObject, arg: ESObject): void => {
        const Color = new ArrayBuffer(96);
        let opts:ESObject
        if (pixFormat == 2) {
          opts = {
            editable: true, pixelFormat: 2, size: {
              height: 4, width: 6
            } as ESObject
          } ;
        } else {
          opts = {
            editable: true, pixelFormat: 5, size: {
              height: 4, width: 6
            } as ESObject
          };
        }
        image
          .createPixelMap(Color, opts)
          .then((pixelmap) => {
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
                imagePackerApi.packing(pixelmap, arg, (err, data) => {
                  expect(err != undefined).assertTrue();
                  done();
                });
              }
            }
          })
          .catch((error:BusinessError) => {
            console.log(`${testNum} createpixelmap error:` + error);
            expect().assertFail();
            done();
          });
      };
    let packingPromiseFail: (done: Function, testNum: ESObject, pixFormat: ESObject, arg: ESObject) => void =
      (done: Function, testNum: ESObject, pixFormat: ESObject, arg: ESObject): void => {
        const Color = new ArrayBuffer(96);
        let opts: ESObject;
        if (pixFormat == 2) {
          opts = {
            editable: true, pixelFormat: 2, size: {
              height: 4, width: 6
            } as ESObject
          };
        } else {
          opts = {
            editable: true, pixelFormat: 5, size: {
              height: 4, width: 6
            } as ESObject
          };
        }
        image
          .createPixelMap(Color, opts)
          .then((pixelmap) => {
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
                imagePackerApi
                  .packing(pixelmap, arg)
                  .then((data) => {
                    expect(false).assertTrue();
                    done();
                  })
                  .catch((error:BusinessError) => {
                    console.log(`${testNum} error:` + error);
                    expect(true).assertTrue();
                    done();
                  });
              }
            }
          })
          .catch((error:BusinessError) => {
            console.log("createpixelmap error: " + error);
            expect().assertFail();
            done();
          });
      };
    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_PACKING_PROMISE_0100
     * @tc.name      : SUB_IMAGE_packing_P_001
     * @tc.desc      : 1.create PixelMap
     *                 2.create ImagePacker
     *                 3.call packing
     * @tc.size      : MEDIUM
     * @tc.type      : Functional
     * @tc.level     : level 0
     */
    it("SUB_MULTIMEDIA_IMAGE_PACKING_PROMISE_0100", 0, async (done: Function) => {
      let packOpts: ESObject = { format: "image/jpeg", quality: 99 };
      packingPromise(done, "SUB_MULTIMEDIA_IMAGE_PACKING_PROMISE_0100", 2, packOpts);
    });

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_PACKING_PROMISE_0200
     * @tc.name      : SUB_IMAGE_packing_P_002 - Promise - RGB565 quality 123
     * @tc.desc      : 1.create PixelMap
     *                 2.create ImagePacker
     *                 3.call packing
     * @tc.size      : MEDIUM
     * @tc.type      : Functional
     * @tc.level     : level 0
     */
    it("SUB_MULTIMEDIA_IMAGE_PACKING_PROMISE_0200", 0, async (done: Function) => {
      let packOpts: ESObject = { format: "image/jpeg", quality: 123 };
      packingPromiseFail(done, "SUB_MULTIMEDIA_IMAGE_PACKING_PROMISE_0200", 2, packOpts);
    });
    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_PACKING_PROMISE_0300
     * @tc.name      : SUB_IMAGE_packing_P_003 - Promise - RGB565 quality null
     * @tc.desc      : 1.create PixelMap
     *                 2.create ImagePacker
     *                 3.call packing
     * @tc.size      : MEDIUM
     * @tc.type      : Functional
     * @tc.level     : level 0
     */
    it("SUB_MULTIMEDIA_IMAGE_PACKING_PROMISE_0300", 0, async (done: Function) => {
      let packOpts: ESObject  = { format: "image/jpeg" };
      packingPromiseFail(done, "SUB_MULTIMEDIA_IMAGE_PACKING_PROMISE_0300", 2, packOpts);
    });

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_PACKING_PROMISE_0400
     * @tc.name      : SUB_IMAGE_packing_P_004 - Promise - RGB565 format null
     * @tc.desc      : 1.create PixelMap
     *                 2.create ImagePacker
     *                 3.call packing
     * @tc.size      : MEDIUM
     * @tc.type      : Functional
     * @tc.level     : level 0
     */
    it("SUB_MULTIMEDIA_IMAGE_PACKING_PROMISE_0400", 0, async (done: Function) => {
      let packOpts: ESObject  = { quality: 99 };
      packingPromiseFail(done, "SUB_MULTIMEDIA_IMAGE_PACKING_PROMISE_0400", 2, packOpts);
    });

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_PACKING_PROMISE_0500
     * @tc.name      : SUB_IMAGE_packing_P_005 - Promise - RGB565 wrong format
     * @tc.desc      : 1.create PixelMap
     *                 2.create ImagePacker
     *                 3.call packing
     * @tc.size      : MEDIUM
     * @tc.type      : Functional
     * @tc.level     : level 0
     */
    it("SUB_MULTIMEDIA_IMAGE_PACKING_PROMISE_0500", 0, async (done: Function) => {
      let packOpts: ESObject = { format: "image/txt", quality: 99 };
      packingPromiseFail(done, "SUB_MULTIMEDIA_IMAGE_PACKING_PROMISE_0500", 2, packOpts);
    });
    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_PACKING_PROMISE_0600
     * @tc.name      : SUB_IMAGE_packing_P_006
     * @tc.desc      : 1.create PixelMap
     *                 2.create ImagePacker
     *                 3.call packing
     * @tc.size      : MEDIUM
     * @tc.type      : Functional
     * @tc.level     : level 0
     */
    it("SUB_MULTIMEDIA_IMAGE_PACKING_PROMISE_0600", 0, async (done: Function) => {
      let packOpts: ESObject = { format: "image/jpeg", quality: 50 };
      packingPromise(done, "SUB_MULTIMEDIA_IMAGE_PACKING_PROMISE_0600", 5, packOpts);
    });

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_PACKING_PROMISE_0700
     * @tc.name      : SUB_IMAGE_packing_P_007 - Promise - RGB888 quality 123
     * @tc.desc      : 1.create PixelMap
     *                 2.create ImagePacker
     *                 3.call packing
     * @tc.size      : MEDIUM
     * @tc.type      : Functional
     * @tc.level     : level 0
     */
    it("SUB_MULTIMEDIA_IMAGE_PACKING_PROMISE_0700", 0, async (done: Function) => {
      let packOpts: ESObject = { format: "image/jpeg", quality: 123 };
      packingPromiseFail(done, "SUB_MULTIMEDIA_IMAGE_PACKING_PROMISE_0700", 5, packOpts);
    });

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_PACKING_PROMISE_0800
     * @tc.name      : SUB_IMAGE_packing_P_008 - Promise - RGB888 quality null
     * @tc.desc      : 1.create PixelMap
     *                 2.create ImagePacker
     *                 3.call packing
     * @tc.size      : MEDIUM
     * @tc.type      : Functional
     * @tc.level     : level 0
     */
    it("SUB_MULTIMEDIA_IMAGE_PACKING_PROMISE_0800", 0, async (done: Function) => {
      let packOpts: ESObject = { format: "image/jpeg" };
      packingPromiseFail(done, "SUB_MULTIMEDIA_IMAGE_PACKING_PROMISE_0800", 5, packOpts);
    });
    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_PACKING_PROMISE_0900
     * @tc.name      : SUB_IMAGE_packing_P_009 - Promise - RGB888 format null
     * @tc.desc      : 1.create PixelMap
     *                 2.create ImagePacker
     *                 3.call packing
     * @tc.size      : MEDIUM
     * @tc.type      : Functional
     * @tc.level     : level 0
     */
    it("SUB_MULTIMEDIA_IMAGE_PACKING_PROMISE_0900", 0, async (done: Function) => {
      let packOpts: ESObject = { quality: 99 };
      packingPromiseFail(done, "SUB_MULTIMEDIA_IMAGE_PACKING_PROMISE_0900", 5, packOpts);
    });

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_PACKING_PROMISE_1000
     * @tc.name      : SUB_IMAGE_packing_P_010 - Promise - RGB888 wrong format
     * @tc.desc      : 1.create PixelMap
     *                 2.create ImagePacker
     *                 3.call packing
     * @tc.size      : MEDIUM
     * @tc.type      : Functional
     * @tc.level     : level 0
     */
    it("SUB_MULTIMEDIA_IMAGE_PACKING_PROMISE_1000", 0, async (done: Function) => {
      let packOpts: ESObject = { format: "image/txt", quality: 99 };
      packingPromiseFail(done, "SUB_MULTIMEDIA_IMAGE_PACKING_PROMISE_1000", 5, packOpts);
    });

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_PACKING_CALLBACK_0100
     * @tc.name      : SUB_IMAGE_packingCb_001
     * @tc.desc      : 1.create PixelMap
     *                 2.create ImagePacker
     *                 3.call packing
     * @tc.size      : MEDIUM
     * @tc.type      : Functional
     * @tc.level     : level 0
     */
    it("SUB_MULTIMEDIA_IMAGE_PACKING_CALLBACK_0100", 0, async (done: Function) => {
      let packOpts: ESObject = { format: "image/jpeg", quality: 99 };
      packingCb(done, "SUB_MULTIMEDIA_IMAGE_PACKING_CALLBACK_0100", 2, packOpts);
    });
    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_PACKING_CALLBACK_0200
     * @tc.name      : SUB_IMAGE_packingCb_002 - callback - RGB565 quality 123
     * @tc.desc      : 1.create PixelMap
     *                 2.create ImagePacker
     *                 3.call packing
     * @tc.size      : MEDIUM
     * @tc.type      : Functional
     * @tc.level     : level 0
     */
    it("SUB_MULTIMEDIA_IMAGE_PACKING_CALLBACK_0200", 0, async (done: Function) => {
      let packOpts: ESObject = { format: "image/jpeg", quality: 123 };
      packingCbFail(done, "SUB_MULTIMEDIA_IMAGE_PACKING_CALLBACK_0200", 2, packOpts);
    });

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_PACKING_CALLBACK_0300
     * @tc.name      : SUB_IMAGE_packingCb_003 - callback - RGB565 quality null
     * @tc.desc      : 1.create PixelMap
     *                 2.create ImagePacker
     *                 3.call packing
     * @tc.size      : MEDIUM
     * @tc.type      : Functional
     * @tc.level     : level 0
     */
    it("SUB_MULTIMEDIA_IMAGE_PACKING_CALLBACK_0300", 0, async (done: Function) => {
      let packOpts: ESObject = { format: "image/jpeg" };
      packingCbFail(done, "SUB_MULTIMEDIA_IMAGE_PACKING_CALLBACK_0300", 2, packOpts);
    });

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_PACKING_CALLBACK_0400
     * @tc.name      : SUB_IMAGE_packingCb_004 - callback - RGB565 format null
     * @tc.desc      : 1.create PixelMap
     *                 2.create ImagePacker
     *                 3.call packing
     * @tc.size      : MEDIUM
     * @tc.type      : Functional
     * @tc.level     : level 0
     */
    it("SUB_MULTIMEDIA_IMAGE_PACKING_CALLBACK_0400", 0, async (done: Function) => {
      let packOpts: ESObject = { quality: 99 };
      packingCbFail(done, "SUB_MULTIMEDIA_IMAGE_PACKING_CALLBACK_0400", 2, packOpts);
    });

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_PACKING_CALLBACK_0500
     * @tc.name      : SUB_IMAGE_packingCb_005 - callback - RGB565 wrong format
     * @tc.desc      : 1.create PixelMap
     *                 2.create ImagePacker
     *                 3.call packing
     * @tc.size      : MEDIUM
     * @tc.type      : Functional
     * @tc.level     : level 0
     */
    it("SUB_MULTIMEDIA_IMAGE_PACKING_CALLBACK_0500", 0, async (done: Function) => {
      let packOpts: ESObject = { format: "image/txt", quality: 99 };
      packingCbFail(done, "SUB_MULTIMEDIA_IMAGE_PACKING_CALLBACK_0500", 2, packOpts);
    });

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_PACKING_CALLBACK_0600
     * @tc.name      : SUB_IMAGE_packingCb_006
     * @tc.desc      : 1.create PixelMap
     *                 2.create ImagePacker
     *                 3.call packing
     * @tc.size      : MEDIUM
     * @tc.type      : Functional
     * @tc.level     : level 0
     */
    it("SUB_MULTIMEDIA_IMAGE_PACKING_CALLBACK_0600", 0, async (done: Function) => {
      let packOpts: ESObject = { format: "image/jpeg", quality: 50 };
      packingCb(done, "SUB_MULTIMEDIA_IMAGE_PACKING_CALLBACK_0600", 5, packOpts);
    });

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_PACKING_CALLBACK_0700
     * @tc.name      : SUB_IMAGE_packingCb_007 - callback - RGB888 quality 123
     * @tc.desc      : 1.create PixelMap
     *                 2.create ImagePacker
     *                 3.call packing
     * @tc.size      : MEDIUM
     * @tc.type      : Functional
     * @tc.level     : level 0
     */
    it("SUB_MULTIMEDIA_IMAGE_PACKING_CALLBACK_0700", 0, async (done: Function) => {
      let packOpts: ESObject = { format: "image/jpeg", quality: 123 };
      packingCbFail(done, "SUB_MULTIMEDIA_IMAGE_PACKING_CALLBACK_0700", 5, packOpts);
    });
    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_PACKING_CALLBACK_0800
     * @tc.name      : SUB_IMAGE_packingCb_008 - callback - RGB888 quality null
     * @tc.desc      : 1.create PixelMap
     *                 2.create ImagePacker
     *                 3.call packing
     * @tc.size      : MEDIUM
     * @tc.type      : Functional
     * @tc.level     : level 0
     */
    it("SUB_MULTIMEDIA_IMAGE_PACKING_CALLBACK_0800", 0, async (done: Function) => {
      let packOpts: ESObject = { format: "image/jpeg" };
      packingCbFail(done, "SUB_MULTIMEDIA_IMAGE_PACKING_CALLBACK_0800", 5, packOpts);
    });

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_PACKING_CALLBACK_0900
     * @tc.name      : SUB_IMAGE_packingCb_009 - callback - RGB888 format null
     * @tc.desc      : 1.create PixelMap
     *                 2.create ImagePacker
     *                 3.call packing
     * @tc.size      : MEDIUM
     * @tc.type      : Functional
     * @tc.level     : level 0
     */
    it("SUB_MULTIMEDIA_IMAGE_PACKING_CALLBACK_0900", 0, async (done: Function) => {
      let packOpts: ESObject = { quality: 99 };
      packingCbFail(done, "SUB_MULTIMEDIA_IMAGE_PACKING_CALLBACK_0900", 5, packOpts);
    });

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_PACKING_CALLBACK_1000
     * @tc.name      : SUB_IMAGE_packingCb_010 - callback - RGB888 wrong format
     * @tc.desc      : 1.create PixelMap
     *                 2.create ImagePacker
     *                 3.call packing
     * @tc.size      : MEDIUM
     * @tc.type      : Functional
     * @tc.level     : level 0
     */
    it("SUB_MULTIMEDIA_IMAGE_PACKING_CALLBACK_1000", 0, async (done: Function) => {
      let packOpts: ESObject = { format: "image/txt", quality: 99 };
      packingCbFail(done, "SUB_MULTIMEDIA_IMAGE_PACKING_CALLBACK_1000", 5, packOpts);
    });
    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_PACKING_IMAGESOURCE_PROMISE_0100
     * @tc.name      : packing ImageSource - promise
     * @tc.desc      : 1.create ImageSource
     *                 2.call packing
     *                 3.return array
     *                 4.callbackcall return undefined
     * @tc.size      : MEDIUM
     * @tc.type      : Functional
     * @tc.level     : Level 1
     */
    it("SUB_MULTIMEDIA_IMAGE_PACKING_IMAGESOURCE_PROMISE_0100", 0, async (done: Function) => {
      try {
        await getFd("test.png");
        const imageSourceApi = image.createImageSource(fdNumber);

        if (imageSourceApi == undefined) {
          console.info("SUB_MULTIMEDIA_IMAGE_PACKING_IMAGESOURCE_PROMISE_0100 create image source failed");
          expect(false).assertTrue();
          done();
        } else {
          globalImagesource = imageSourceApi;
          const imagePackerApi = image.createImagePacker();
          if (imagePackerApi == undefined) {
            console.info("SUB_MULTIMEDIA_IMAGE_PACKING_IMAGESOURCE_PROMISE_0100 create image packer failed");
            expect(false).assertTrue();
            done();
          } else {
            globalPacker = imagePackerApi;
            let packOpts: ESObject = { format: "image/jpeg", quality: 99 };
            console.log(`imageSourceApi ${imageSourceApi.getImageInfoSync().size}`)
            imagePackerApi
              .packing(imageSourceApi, packOpts)
              .then((data) => {
                console.info("SUB_MULTIMEDIA_IMAGE_PACKING_IMAGESOURCE_PROMISE_0100 success");
                expect(data != undefined).assertTrue();
                done();
              })
              .catch((error: BusinessError) => {
                console.log("SUB_MULTIMEDIA_IMAGE_PACKING_IMAGESOURCE_PROMISE_0100 error 1 : " + JSON.stringify(error));
                expect(false).assertFail();
                done();
              });
          }
        }
      } catch (error) {
        console.info("SUB_MULTIMEDIA_IMAGE_PACKING_IMAGESOURCE_PROMISE_0100 error 2: " + JSON.stringify(error));
        expect(false).assertFalse();
        done();
      }
    });
    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_PACKING_IMAGESOURCE_CALLBACK_0100
     * @tc.name      : packing ImageSource - callback
     * @tc.desc      : 1.create ImageSource
     *                 2.call packing
     *                 3.return array
     *                 4.callbackcall return undefined
     * @tc.size      : MEDIUM
     * @tc.type      : Functional
     * @tc.level     : Level 1
     */
    it("SUB_MULTIMEDIA_IMAGE_PACKING_IMAGESOURCE_CALLBACK_0100", 0, async (done: Function) => {
      try {
        await getFd("test.png");
        const imageSourceApi = image.createImageSource(fdNumber);
        if (imageSourceApi == undefined) {
          console.info("SUB_MULTIMEDIA_IMAGE_PACKING_IMAGESOURCE_CALLBACK_0100 create image source failed");
          expect(false).assertTrue();
          done();
        } else {
          globalImagesource = imageSourceApi;
          const imagePackerApi = image.createImagePacker();
          if (imagePackerApi == undefined) {
            console.info("SUB_MULTIMEDIA_IMAGE_PACKING_IMAGESOURCE_CALLBACK_0100 create image packer failed");
            expect(false).assertTrue();
            done();
          } else {
            globalPacker = imagePackerApi;
            let packOpts: ESObject = { format: "image/jpeg", quality: 1 };
            imagePackerApi.packing(imageSourceApi, packOpts, (err, data) => {
              console.info(
                "SUB_MULTIMEDIA_IMAGE_PACKING_IMAGESOURCE_CALLBACK_0100 success" + JSON.stringify(data)
              );
              expect(data == undefined).assertTrue();
              done();
            });
          }
        }
      } catch (error) {
        console.info("SUB_MULTIMEDIA_IMAGE_PACKING_IMAGESOURCE_CALLBACK_0100 error: " + error);
        expect(false).assertTrue();
        done();
      }
    });
    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_PACKING_IMAGESOURCE_CALLBACK_0300
     * @tc.name      : packing ImageSource - callback - wrong quality
     * @tc.desc      : 1.create ImageSource
     *                 2.call packing
     *                 3.call return array
     *                 4.callbackcall return undefined
     * @tc.size      : MEDIUM
     * @tc.type      : Functional
     * @tc.level     : Level 1
     */
    it("SUB_MULTIMEDIA_IMAGE_PACKING_IMAGESOURCE_CALLBACK_0300", 0, async (done: Function) => {
      try {
        await getFd("test.png");
        const imageSourceApi = image.createImageSource(fdNumber);
        if (imageSourceApi == undefined) {
          console.info("SUB_MULTIMEDIA_IMAGE_PACKING_IMAGESOURCE_CALLBACK_0300 create image source failed");
          expect(false).assertTrue();
          done();
        } else {
          globalImagesource = imageSourceApi;
          const imagePackerApi = image.createImagePacker();
          if (imagePackerApi == undefined) {
            console.info("SUB_MULTIMEDIA_IMAGE_PACKING_IMAGESOURCE_CALLBACK_0300 create image packer failed");
            expect(false).assertTrue();
            done();
          } else {
            globalPacker = imagePackerApi;
            let packOpts: ESObject = { format: "image/jpeg", quality: 101 };
            imagePackerApi.packing(imageSourceApi, packOpts, (err, data) => {
              console.info("SUB_MULTIMEDIA_IMAGE_PACKING_IMAGESOURCE_CALLBACK_0300 success");
              expect(data == undefined).assertTrue();
              done();
            });
          }
        }
      } catch (error) {
        console.info("SUB_MULTIMEDIA_IMAGE_PACKING_IMAGESOURCE_CALLBACK_0300 error: " + error);
        expect(false).assertTrue();
        done();
      }
    });
    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_PACKING_CREATEIMAGEPACKER_0100
     * @tc.name      : createImagePacker
     * @tc.desc      : 1.create ImageSource
     *                 2.call packing
     *                 3.return array
     *                 4.callbackcall return undefined
     * @tc.size      : MEDIUM
     * @tc.type      : Functional
     * @tc.level     : Level 1
     */
    it("SUB_MULTIMEDIA_IMAGE_PACKING_CREATEIMAGEPACKER_0100", 0, async (done: Function) => {
      try {
        await getFd("test.png");
        const imageSourceApi = image.createImageSource(fdNumber);
        if (imageSourceApi == undefined) {
          console.info("SUB_MULTIMEDIA_IMAGE_PACKING_CREATEIMAGEPACKER_0100 create image source failed");
          expect(false).assertTrue();
          done();
        } else {
          globalImagesource = imageSourceApi;
          const imagePackerApi = image.createImagePacker();
          if (imagePackerApi == undefined) {
            console.info("SUB_MULTIMEDIA_IMAGE_PACKING_CREATEIMAGEPACKER_0100 create image packer failed");
            expect(false).assertTrue();
            done();
          } else {
            globalPacker = imagePackerApi;
            console.info("SUB_MULTIMEDIA_IMAGE_PACKING_CREATEIMAGEPACKER_0100 create image packer success");
            expect(true).assertTrue();
            done();
          }
        }
      } catch (error) {
        console.info("SUB_MULTIMEDIA_IMAGE_PACKING_CREATEIMAGEPACKER_0100 error: " + error);
        expect(false).assertTrue();
        done();
      }
    });
    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_PACKING_IMAGESOURCE_PROMISE_0200
     * @tc.name      : packing ImageSource - promise - no quality
     * @tc.desc      : 1.create ImageSource
     *                 2.call packing
     *                 3.call return array
     *                 4.callbackcall return undefined
     * @tc.size      : MEDIUM
     * @tc.type      : Functional
     * @tc.level     : Level 1
     */

    it("SUB_MULTIMEDIA_IMAGE_PACKING_IMAGESOURCE_PROMISE_0200", 0, async (done: Function) => {
      try {
        await getFd("test.png");
        const imageSourceApi = image.createImageSource(fdNumber);
        if (imageSourceApi == undefined) {
          console.info("SUB_MULTIMEDIA_IMAGE_PACKING_IMAGESOURCE_PROMISE_0200 create image source failed");
          expect(false).assertTrue();
          done();
        } else {
          globalImagesource = imageSourceApi;
          const imagePackerApi = image.createImagePacker();
          if (imagePackerApi == undefined) {
            console.info("SUB_MULTIMEDIA_IMAGE_PACKING_IMAGESOURCE_PROMISE_0200 create image packer failed");
            expect(false).assertTrue();
            done();
          } else {
            globalPacker = imagePackerApi;
            let packOpts: ESObject = { format: "image/jpeg" };
            imagePackerApi
              .packing(imageSourceApi, packOpts)
              .then((data) => {
                console.info("SUB_MULTIMEDIA_IMAGE_PACKING_IMAGESOURCE_PROMISE_0200 failed");
                expect(data == undefined).assertTrue();
                done();
              })
              .catch((error: BusinessError) => {
                console.log("SUB_MULTIMEDIA_IMAGE_PACKING_IMAGESOURCE_PROMISE_0200 error: " + error);
                console.log("SUB_MULTIMEDIA_IMAGE_PACKING_IMAGESOURCE_PROMISE_0200 success");
                expect(true).assertTrue();
                done();
              });
          }
        }
      } catch (error) {
        console.info("SUB_MULTIMEDIA_IMAGE_PACKING_IMAGESOURCE_PROMISE_0200 error: " + error);
        expect(false).assertTrue();
        done();
      }
    });

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_PACKING_IMAGESOURCE_PROMISE_0300
     * @tc.name      : packing ImageSource - promise - no format
     * @tc.desc      : 1.create ImageSource
     *                 2.call packing
     *                 3.call return array
     *                 4.callbackcall return undefined
     * @tc.size      : MEDIUM
     * @tc.type      : Functional
     * @tc.level     : Level 1
     */
    it("SUB_MULTIMEDIA_IMAGE_PACKING_IMAGESOURCE_PROMISE_0300", 0, async (done: Function) => {
      try {
        await getFd("test.png");
        const imageSourceApi = image.createImageSource(fdNumber);
        if (imageSourceApi == undefined) {
          console.info("SUB_MULTIMEDIA_IMAGE_PACKING_IMAGESOURCE_PROMISE_0300 create image source failed");
          expect(false).assertTrue();
          done();
        } else {
          globalImagesource = imageSourceApi;
          const imagePackerApi = image.createImagePacker();
          if (imagePackerApi == undefined) {
            console.info("SUB_MULTIMEDIA_IMAGE_PACKING_IMAGESOURCE_PROMISE_0300 create image packer failed");
            expect(false).assertTrue();
            done();
          } else {
            globalPacker = imagePackerApi;
            let packOpts: ESObject = { quality: 50 };
            imagePackerApi
              .packing(imageSourceApi, packOpts)
              .then((data) => {
                console.info("SUB_MULTIMEDIA_IMAGE_PACKING_IMAGESOURCE_PROMISE_0300 failed");
                expect(data == undefined).assertTrue();
                done();
              })
              .catch((error: BusinessError) => {
                console.log("SUB_MULTIMEDIA_IMAGE_PACKING_IMAGESOURCE_PROMISE_0300 error: " + error);
                console.log("SUB_MULTIMEDIA_IMAGE_PACKING_IMAGESOURCE_PROMISE_0300 success");
                expect(true).assertTrue();
                done();
              });
          }
        }
      } catch (error) {
        console.info("SUB_MULTIMEDIA_IMAGE_PACKING_IMAGESOURCE_PROMISE_0300 error: " + error);
        expect(false).assertTrue();
        done();
      }
    });
    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_PACKING_IMAGESOURCE_CALLBACK_0400
     * @tc.name      : packing ImageSource - callback - quality 100
     * @tc.desc      : 1.create ImageSource
     *                 2.call packing
     *                 3.return array
     *                 4.callbackcall return undefined
     * @tc.size      : MEDIUM
     * @tc.type      : Functional
     * @tc.level     : Level 1
     */

    it("SUB_MULTIMEDIA_IMAGE_PACKING_IMAGESOURCE_CALLBACK_0400", 0, async (done: Function) => {
      try {
        await getFd("test.png");
        const imageSourceApi = image.createImageSource(fdNumber);
        if (imageSourceApi == undefined) {
          console.info("SUB_MULTIMEDIA_IMAGE_PACKING_IMAGESOURCE_CALLBACK_0400 create image source failed");
          expect(false).assertTrue();
          done();
        } else {
          globalImagesource = imageSourceApi;
          const imagePackerApi = image.createImagePacker();
          if (imagePackerApi == undefined) {
            console.info("SUB_MULTIMEDIA_IMAGE_PACKING_IMAGESOURCE_CALLBACK_0400 create image packer failed");
            expect(false).assertTrue();
            done();
          } else {
            globalPacker = imagePackerApi;
            let packOpts: ESObject = { format: "image/jpeg", quality: 100 };
            imagePackerApi.packing(imageSourceApi, packOpts, (err, data) => {
              if (err) {
                expect(false).assertFalse();
                console.info("SUB_MULTIMEDIA_IMAGE_PACKING_IMAGESOURCE_CALLBACK_0400 error: " + err);
                done();
                return;
              }
              if (data != undefined) {
                console.info("SUB_MULTIMEDIA_IMAGE_PACKING_IMAGESOURCE_CALLBACK_0400 success");
                expect(true).assertTrue();
                done();
              } else {
                expect(false).assertTrue();
                console.info("SUB_MULTIMEDIA_IMAGE_PACKING_IMAGESOURCE_CALLBACK_0400 failed");
                done();
              }
            });
          }
        }
      } catch (error) {
        console.info("SUB_MULTIMEDIA_IMAGE_PACKING_IMAGESOURCE_CALLBACK_0400 error: " + error);
        expect(false).assertTrue();
        done();
      }
    });
    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_PACKING_IMAGESOURCE_CALLBACK_0500
     * @tc.name      : packing ImageSource - callback - quality 0
     * @tc.desc      : 1.create ImageSource
     *                 2.call packing
     *                 3.return array
     *                 4.callbackcall return undefined
     * @tc.size      : MEDIUM
     * @tc.type      : Functional
     * @tc.level     : Level 1
     */
    it("SUB_MULTIMEDIA_IMAGE_PACKING_IMAGESOURCE_CALLBACK_0500", 0, async (done: Function) => {
      try {
        await getFd("test.png");
        const imageSourceApi = image.createImageSource(fdNumber);
        if (imageSourceApi == undefined) {
          console.info("SUB_MULTIMEDIA_IMAGE_PACKING_IMAGESOURCE_CALLBACK_0500 create image source failed");
          expect(false).assertTrue();
          done();
        } else {
          globalImagesource = imageSourceApi;
          const imagePackerApi = image.createImagePacker();
          if (imagePackerApi == undefined) {
            console.info("SUB_MULTIMEDIA_IMAGE_PACKING_IMAGESOURCE_CALLBACK_0500 create image packer failed");
            expect(false).assertTrue();
            done();
          } else {
            globalPacker = imagePackerApi;
            let packOpts: ESObject = { format: "image/jpeg", quality: 0 };
            imagePackerApi.packing(imageSourceApi, packOpts, (err, data) => {
              console.info("SUB_MULTIMEDIA_IMAGE_PACKING_IMAGESOURCE_CALLBACK_0500 success");
              expect(data == undefined).assertTrue();
              done();
            });
          }
        }
      } catch (error) {
        console.info("SUB_MULTIMEDIA_IMAGE_PACKING_IMAGESOURCE_CALLBACK_0500 error: " + error);
        expect(false).assertTrue();
        done();
      }
    });
    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_PACKING_IMAGESOURCE_CALLBACK_0600
     * @tc.name      : packing ImageSource - callback - quality -1
     * @tc.desc      : 1.create ImageSource
     *                 2.call packing
     *                 3.return array
     *                 4.callbackcall return undefined
     * @tc.size      : MEDIUM
     * @tc.type      : Functional
     * @tc.level     : Level 1
     */
    it("SUB_MULTIMEDIA_IMAGE_PACKING_IMAGESOURCE_CALLBACK_0600", 0, async (done: Function) => {
      try {
        await getFd("test.png");
        const imageSourceApi = image.createImageSource(fdNumber);
        if (imageSourceApi == undefined) {
          console.info("SUB_MULTIMEDIA_IMAGE_PACKING_IMAGESOURCE_CALLBACK_0600 create image source failed");
          expect(false).assertTrue();
          done();
        } else {
          globalImagesource = imageSourceApi;
          const imagePackerApi = image.createImagePacker();
          if (imagePackerApi == undefined) {
            console.info("SUB_MULTIMEDIA_IMAGE_PACKING_IMAGESOURCE_CALLBACK_0600 create image packer failed");
            expect(false).assertTrue();
            done();
          } else {
            globalPacker = imagePackerApi;
            let packOpts: ESObject = { format: "image/jpeg", quality: -1 };
            imagePackerApi.packing(imageSourceApi, packOpts, (err, data) => {
              console.info("SUB_MULTIMEDIA_IMAGE_PACKING_IMAGESOURCE_CALLBACK_0600 success");
              expect(data == undefined).assertTrue();
              done();
            });
          }
        }
      } catch (error) {
        console.info("SUB_MULTIMEDIA_IMAGE_PACKING_IMAGESOURCE_CALLBACK_0600 error: " + error);
        expect(false).assertTrue();
        done();
      }
    });
    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_PACKING_RELEASE_IMAGEPACKER_PROMISE_0100
     * @tc.name      : release ImagePacker - promise
     * @tc.desc      : 1.create ImagePacker
     *                 2.call release
     *                 3.return undefined
     * @tc.size      : MEDIUM
     * @tc.type      : Functional
     * @tc.level     : Level 1
     */
    it("SUB_MULTIMEDIA_IMAGE_PACKING_RELEASE_IMAGEPACKER_PROMISE_0100", 0, async (done: Function) => {
      const imagePackerApi = image.createImagePacker();
      if (imagePackerApi == undefined) {
        console.info("SUB_MULTIMEDIA_IMAGE_PACKING_RELEASE_IMAGEPACKER_PROMISE_0100 create image packer failed");
        expect(false).assertTrue();
        done();
      } else {
        globalPacker = imagePackerApi;
        imagePackerApi
          .release()
          .then(() => {
            console.info("SUB_MULTIMEDIA_IMAGE_PACKING_RELEASE_IMAGEPACKER_PROMISE_0100 success");
            expect(true).assertTrue();
            done();
          })
          .catch((error: BusinessError) => {
            console.log("SUB_MULTIMEDIA_IMAGE_PACKING_RELEASE_IMAGEPACKER_PROMISE_0100 error: " + error);
            expect(false).assertTrue();
            done();
          });
      }
    });

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_PACKING_RELEASE_IMAGEPACKER_CALLBACK_0100
     * @tc.name      : release ImagePacker - callback
     * @tc.desc      : 1.create ImagePacker
     *                 2.call release
     *                 3.return undefined
     * @tc.size      : MEDIUM
     * @tc.type      : Functional
     * @tc.level     : Level 1
     */
    it("SUB_MULTIMEDIA_IMAGE_PACKING_RELEASE_IMAGEPACKER_CALLBACK_0100", 0, async (done: Function) => {
      const imagePackerApi = image.createImagePacker();
      if (imagePackerApi == undefined) {
        console.info("SUB_MULTIMEDIA_IMAGE_PACKING_RELEASE_IMAGEPACKER_CALLBACK_0100 create image packer failed");
        expect(false).assertTrue();
        done();
      } else {
        globalPacker = imagePackerApi;
        imagePackerApi.release(() => {
          console.info("SUB_MULTIMEDIA_IMAGE_PACKING_RELEASE_IMAGEPACKER_CALLBACK_0100 success");
          expect(true).assertTrue();
          done();
        });
      }
    });
    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_PACKING_ADDBUFFERSIZE_PROMISE_0100
     * @tc.name      : SUB_MULTIMEDIA_IMAGE_PACKING_ADDBUFFERSIZE_PROMISE_0100
     * @tc.desc      : 1.create PixelMap
     *                 2.create ImagePacker
     *                 3.call packing
     * @tc.size      : MEDIUM
     * @tc.type      : Functional
     * @tc.level     : level 0
     */
    it("SUB_MULTIMEDIA_IMAGE_PACKING_ADDBUFFERSIZE_PROMISE_0100", 0, async (done: Function) => {
      let packOpts: ESObject = { format: "image/jpeg", quality: 99, bufferSize: 10485760 };
      packingPromise(done, "SUB_MULTIMEDIA_IMAGE_PACKING_ADDBUFFERSIZE_PROMISE_0100", 2, packOpts);
    });

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_PACKING_ADDBUFFERSIZE_PROMISE_0200
     * @tc.name      : SUB_MULTIMEDIA_IMAGE_PACKING_ADDBUFFERSIZE_PROMISE_0200
     * @tc.desc      : 1.create PixelMap
     *                 2.create ImagePacker
     *                 3.call packing
     * @tc.size      : MEDIUM
     * @tc.type      : Functional
     * @tc.level     : level 0
     */
    it("SUB_MULTIMEDIA_IMAGE_PACKING_ADDBUFFERSIZE_PROMISE_0200", 0, async (done: Function) => {
      let packOpts: ESObject = { format: "image/jpeg", quality: 99, bufferSize: 20480 };
      console.info(`SUB_MULTIMEDIA_IMAGE_PACKING_ADDBUFFERSIZE_PROMISE_0200 buffersize: ${packOpts.bufferSize}`);
      packingPromise(done, "SUB_MULTIMEDIA_IMAGE_PACKING_ADDBUFFERSIZE_PROMISE_0200", 2, packOpts);
    });
    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_PACKING_ADDBUFFERSIZE_PROMISE_0300
     * @tc.name      : SUB_MULTIMEDIA_IMAGE_PACKING_ADDBUFFERSIZE_PROMISE_0300-over maxbufferSize
     * @tc.desc      : 1.create PixelMap
     *                 2.create ImagePacker
     *                 3.call packing
     * @tc.size      : MEDIUM
     * @tc.type      : Functional
     * @tc.level     : level 0
     */
    it("SUB_MULTIMEDIA_IMAGE_PACKING_ADDBUFFERSIZE_PROMISE_0300", 0, async (done: Function) => {
      let packOpts: ESObject = { format: "image/jpeg", quality: 99, bufferSize: 20000000 };
      packingPromise(done, "SUB_MULTIMEDIA_IMAGE_PACKING_ADDBUFFERSIZE_PROMISE_0300", 2, packOpts);
    });

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_PACKING_ADDBUFFERSIZE_CALLBACK_0100
     * @tc.name      : SUB_MULTIMEDIA_IMAGE_PACKING_ADDBUFFERSIZE_CALLBACK_0100
     * @tc.desc      : 1.create PixelMap
     *                 2.create ImagePacker
     *                 3.call packing
     * @tc.size      : MEDIUM
     * @tc.type      : Functional
     * @tc.level     : level 0
     */
    it("SUB_MULTIMEDIA_IMAGE_PACKING_ADDBUFFERSIZE_CALLBACK_0100", 0, async (done: Function) => {
      let packOpts: ESObject = { format: "image/jpeg", quality: 99, bufferSize: 10485760 };
      packingCb(done, "SUB_MULTIMEDIA_IMAGE_PACKING_ADDBUFFERSIZE_CALLBACK_0100", 2, packOpts);
    });
    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_PACKING_ADDBUFFERSIZE_CALLBACK_0200
     * @tc.name      : SUB_MULTIMEDIA_IMAGE_PACKING_ADDBUFFERSIZE_CALLBACK_0200
     * @tc.desc      : 1.create PixelMap
     *                 2.create ImagePacker
     *                 3.call packing
     * @tc.size      : MEDIUM
     * @tc.type      : Functional
     * @tc.level     : level 0
     */
    it("SUB_MULTIMEDIA_IMAGE_PACKING_ADDBUFFERSIZE_CALLBACK_0200", 0, async (done: Function) => {
      let packOpts: ESObject = { format: "image/jpeg", quality: 99, bufferSize: 20480 };
      packingCb(done, "SUB_MULTIMEDIA_IMAGE_PACKING_ADDBUFFERSIZE_CALLBACK_0200", 5, packOpts);
    });

    /**
     * @tc.number    : SUB_MULTIMEDIA_IMAGE_PACKING_ADDBUFFERSIZE_CALLBACK_0300
     * @tc.name      : SUB_MULTIMEDIA_IMAGE_PACKING_ADDBUFFERSIZE_CALLBACK_0300
     * @tc.desc      : 1.create PixelMap
     *                 2.create ImagePacker
     *                 3.call packing
     * @tc.size      : MEDIUM
     * @tc.type      : Functional
     * @tc.level     : level 0
     */
    it("SUB_MULTIMEDIA_IMAGE_PACKING_ADDBUFFERSIZE_CALLBACK_0300", 0, async (done: Function) => {
      let packOpts: ESObject = { format: "image/jpeg", quality: 99, bufferSize: 20000000 };
      packingCb(done, "SUB_MULTIMEDIA_IMAGE_PACKING_ADDBUFFERSIZE_CALLBACK_0300", 5, packOpts);
    });
  })
}