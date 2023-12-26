/*
 * Copyright (c) 2023 Huawei Device Co., Ltd.
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

// import hilog from '@ohos.hilog';
import { describe, it, expect } from '@ohos/hypium';
import image from '@ohos.multimedia.image';
import { BusinessError } from '@ohos.base';
import fs from '@ohos.file.fs';

export default function ImageTest() {
  describe('ImageTest', () => {
    // Defines a test suite. Two parameters are supported: test suite name and test suite function.
    console.info('start################################start');

    /**
     * @tc.number    : Image_Test_001
     * @tc.name      : createPixelMapList
     * @tc.desc      : test createPixelMapList with Options and not gif picture in Promise mode
     * @tc.size      : MediumTest
     * @tc.type      : Constant
     * @tc.level     : Level 1
     */
    it('ImageTest001', 0, async (done: Function) => {
      const path = AppStorage.get('pathDir') + "/001test.jpg";
      let file = fs.openSync(path, fs.OpenMode.READ_WRITE | fs.OpenMode.CREATE)
      let sourceOptions : image.SourceOptions = { sourceDensity: 120 };
      const imageSourceApi: image.ImageSource = image.createImageSource(file.fd,sourceOptions);
      let decodeOpts: image.DecodingOptions = {
        sampleSize: 1,
        editable: true,
        desiredSize: { width: 198, height: 202 },
        rotate: 0,
        desiredPixelFormat: 3,
        index: 0,
      };
      imageSourceApi.createPixelMapList(decodeOpts).then((res) => {
        console.log('001Succeeded in creating pixelmaplist object.', res);
        expect(res).assertInstanceOf('Array');
        expect(res.length == 1).assertTrue();
        done();
      }).catch((err: BusinessError) => {
        console.log('001err',err)
        console.log(`001Failed to create pixelmaplist object.code is ${err.code},message is ${err.message}`);
        expect(err).assertFail()
        done()
      })
    })

        /**
         * @tc.number    Image_Test_002
         * @tc.name      createPixelMapList
         * @tc.desc      test createPixelMapList with Options and gif picture in Promise mode
         * @tc.size      : MediumTest
         * @tc.type      : Constant
         * @tc.level     : Level 1
         */
        it('ImageTest002', 0, async (done: Function) => {
          const path = AppStorage.get('pathDir') + "/001test.gif";
          let file = fs.openSync(path, fs.OpenMode.READ_WRITE | fs.OpenMode.CREATE)
          let sourceOptions : image.SourceOptions = { sourceDensity: 120 };
          const imageSourceApi: image.ImageSource = image.createImageSource(file.fd,sourceOptions);
          let decodeOpts: image.DecodingOptions = {
            sampleSize: 1,
            editable: true,
            desiredSize: { width: 198, height: 202 },
            rotate: 0,
            desiredPixelFormat: 3,
            index: 0,
          };
          imageSourceApi.createPixelMapList(decodeOpts).then((res) => {
            console.log('002Succeeded in creating pixelmaplist object.',res);
            expect(res).assertInstanceOf('Array');
            done();
          }).catch((err: BusinessError) => {
            console.log(`002Failed to create pixelmaplist object.code is ${err.code},message is ${err.message}`);
            expect(err).assertFail()
            done();
          })
        })

        /**
         * @tc.number    Image_Test_003
         * @tc.name      createPixelMapList
         * @tc.desc      test createPixelMapList with no Options and not gif picture in Promise mode
         * @tc.size      : MediumTest
         * @tc.type      : Constant
         * @tc.level     : Level 1
         */
        it('ImageTest003', 0, async (done: Function) => {
          const path = AppStorage.get('pathDir') + "/001test.jpg";
          let file = fs.openSync(path, fs.OpenMode.READ_WRITE | fs.OpenMode.CREATE)
          let sourceOptions : image.SourceOptions = { sourceDensity: 120 };
          const imageSourceApi: image.ImageSource = image.createImageSource(file.fd,sourceOptions);
          imageSourceApi.createPixelMapList().then((res) => {
            console.log('003Succeeded in creating pixelmaplist object.',res);
            expect(res).assertInstanceOf('Array');
            expect(res.length == 1).assertTrue();
            done();
          }).catch((err: BusinessError) => {
            console.log(`003Failed to create pixelmaplist object.code is ${err.code},message is ${err.message}`);
            expect(err).assertFail()
            done()
          })
        })

        /**
         * @tc.number    Image_Test_004
         * @tc.name      createPixelMapList
         * @tc.desc      test createPixelMapList with no Options and gif picture in Promise mode
         * @tc.size      : MediumTest
         * @tc.type      : Constant
         * @tc.level     : Level 1
         */
        it('ImageTest004', 0, async (done: Function) => {
          const path = AppStorage.get('pathDir') + "/001test.gif";
          let file = fs.openSync(path, fs.OpenMode.READ_WRITE | fs.OpenMode.CREATE)
          let sourceOptions : image.SourceOptions = { sourceDensity: 120 };
          const imageSourceApi: image.ImageSource = image.createImageSource(file.fd,sourceOptions);
          imageSourceApi.createPixelMapList().then((res) => {
            console.log('004Succeeded in creating pixelmaplist object.',res);
            expect(res).assertInstanceOf('Array');
            done();
          }).catch((err: BusinessError) => {
            console.log(`004Failed to create pixelmaplist object.code is ${err.code},message is ${err.message}`);
            expect(err).assertFail()
            done()
          })
        })

        /**
         * @tc.number    Image_Test_005
         * @tc.name      createPixelMapList
         * @tc.desc      test createPixelMapList with invalid Options and not gif picture in Promise mode
         * @tc.size      : MediumTest
         * @tc.type      : Constant
         * @tc.level     : Level 2
         */
        it('ImageTest005', 0, async (done: Function) => {
          const path = AppStorage.get('pathDir') + "/001test.jpg";
          let file = fs.openSync(path, fs.OpenMode.READ_WRITE | fs.OpenMode.CREATE)
          let sourceOptions : image.SourceOptions = { sourceDensity: 120 };
          const imageSourceApi: image.ImageSource = image.createImageSource(file.fd,sourceOptions);
          let decodeOpts: image.DecodingOptions = {
            sampleSize: 99,
            editable: true,
            desiredSize: { width: 198, height: 202 },
            rotate: 0,
            desiredPixelFormat: 3,
            index: 0,
          };
          imageSourceApi.createPixelMapList(decodeOpts).then((res) => {
            console.log('005Succeeded in creating pixelmaplist object.',res);
            done()
          }).catch((err: BusinessError) => {
            console.log(`005Failed to create pixelmaplist object.code is ${err.code},message is ${err.message}`);
            expect(err.code == 401).assertTrue()
            done();
          })
        })

        /**
         * @tc.number    Image_Test_006
         * @tc.name      createPixelMapList
         * @tc.desc      test createPixelMapList with default Options and not gif picture in callback mode
         * @tc.size      : MediumTest
         * @tc.type      : Constant
         * @tc.level     : Level 1
         */
        it('ImageTest006', 0, async (done: Function) => {
          const path = AppStorage.get('pathDir') + "/001test.jpg";
          let file = fs.openSync(path, fs.OpenMode.READ_WRITE | fs.OpenMode.CREATE)
          let sourceOptions : image.SourceOptions = { sourceDensity: 120 };
          const imageSourceApi: image.ImageSource = image.createImageSource(file.fd,sourceOptions);
          imageSourceApi.createPixelMapList((err: BusinessError, pixelmaplist: Array<image.PixelMap>) => {
            if (err != undefined) {
              console.log(`006Failed to create pixelmaplist object.code is ${err.code},message is ${err.message}`);
              expect(err).assertFail();
              done()
            } else {
              console.log('006Succeeded in creating pixelmaplist object.' + pixelmaplist);
              expect(pixelmaplist).assertInstanceOf('Array');
              expect(pixelmaplist.length == 1).assertTrue();
              done();
            }
          })
        })

        /**
         * @tc.number    Image_Test_007
         * @tc.name      createPixelMapList
         * @tc.desc      test createPixelMapList with default Options and gif picture in callback mode
         * @tc.size      : MediumTest
         * @tc.type      : Constant
         * @tc.level     : Level 1
         */
        it('ImageTest007', 0, async (done: Function) => {
          const path = AppStorage.get('pathDir') + "/001test.gif";
          let file = fs.openSync(path, fs.OpenMode.READ_WRITE | fs.OpenMode.CREATE)
          let sourceOptions : image.SourceOptions = { sourceDensity: 120 };
          const imageSourceApi: image.ImageSource = image.createImageSource(file.fd,sourceOptions);
          imageSourceApi.createPixelMapList((err: BusinessError, pixelmaplist: Array<image.PixelMap>) => {
            if (err != undefined) {
              console.log(`007Failed to create pixelmaplist object.code is ${err.code},message is ${err.message}`);
              expect(err).assertFail();
              done()
            } else {
              console.log('007Succeeded in creating pixelmaplist object.' + pixelmaplist);
              expect(pixelmaplist).assertInstanceOf('Array');
              done();
            }
          })
        })

        /**
         * @tc.number    Image_Test_008
         * @tc.name      createPixelMapList
         * @tc.desc      test createPixelMapList with Options and not gif picture in callback mode
         * @tc.size      : MediumTest
         * @tc.type      : Constant
         * @tc.level     : Level 1
         */
        it('ImageTest008', 0, async (done: Function) => {
          const path = AppStorage.get('pathDir') + "/001test.jpg";
          let file = fs.openSync(path, fs.OpenMode.READ_WRITE | fs.OpenMode.CREATE)
          let sourceOptions : image.SourceOptions = { sourceDensity: 120 };
          const imageSourceApi: image.ImageSource = image.createImageSource(file.fd,sourceOptions);
          let decodeOpts: image.DecodingOptions = {
            sampleSize: 1,
            editable: true,
            desiredSize: { width: 198, height: 202 },
            rotate: 0,
            desiredPixelFormat: 3,
            index: 0,
          };
          imageSourceApi.createPixelMapList(decodeOpts,(err: BusinessError, pixelmaplist: Array<image.PixelMap>) => {
            if (err != undefined) {
              console.log(`008Failed to create pixelmaplist object.code is ${err.code},message is ${err.message}`);
              expect(err).assertFail();
              done()
            } else {
              console.log('008Succeeded in creating pixelmaplist object.' + pixelmaplist);
              expect(pixelmaplist).assertInstanceOf('Array');
              expect(pixelmaplist.length == 1).assertTrue();
              done();
            }
          })
        })

        /**
         * @tc.number    Image_Test_009
         * @tc.name      createPixelMapList
         * @tc.desc      test createPixelMapList with Options and gif picture in callback mode
         * @tc.size      : MediumTest
         * @tc.type      : Constant
         * @tc.level     : Level 1
         */
        it('ImageTest009', 0, async (done: Function) => {
          const path = AppStorage.get('pathDir') + "/001test.gif";
          let file = fs.openSync(path, fs.OpenMode.READ_WRITE | fs.OpenMode.CREATE)
          let sourceOptions : image.SourceOptions = { sourceDensity: 120 };
          const imageSourceApi: image.ImageSource = image.createImageSource(file.fd,sourceOptions);
          let decodeOpts: image.DecodingOptions = {
            sampleSize: 1,
            editable: true,
            desiredSize: { width: 198, height: 202 },
            rotate: 0,
            desiredPixelFormat: 3,
            index: 0,
          };
          imageSourceApi.createPixelMapList(decodeOpts,(err: BusinessError, pixelmaplist: Array<image.PixelMap>) => {
            if (err != undefined) {
              console.log(`009Failed to create pixelmaplist object.code is ${err.code},message is ${err.message}`);
              expect(err).assertFail();
              done()
            } else {
              console.log('009Succeeded in creating pixelmaplist object.' + pixelmaplist);
              expect(pixelmaplist).assertInstanceOf('Array');
              done();
            }
          })
        })

        /**
         * @tc.number    Image_Test_010
         * @tc.name      createPixelMapList
         * @tc.desc      test createPixelMapList with invalid Options and not gif picture in callback mode
         * @tc.size      : MediumTest
         * @tc.type      : Constant
         * @tc.level     : Level 2
         */
        it('ImageTest010', 0, async (done: Function) => {
          const path = AppStorage.get('pathDir') + "/001test.jpg";
          let file = fs.openSync(path, fs.OpenMode.READ_WRITE | fs.OpenMode.CREATE)
          let sourceOptions : image.SourceOptions = { sourceDensity: 120 };
          const imageSourceApi: image.ImageSource = image.createImageSource(file.fd,sourceOptions);
          let decodeOpts: image.DecodingOptions = {
            sampleSize: 99,
            editable: true,
            desiredSize: { width: 198, height: 202 },
            rotate: 0,
            desiredPixelFormat: 3,
            index: 0,
          };
          imageSourceApi.createPixelMapList(decodeOpts,(err: BusinessError, pixelmaplist: Array<image.PixelMap>) => {
            if (err != undefined) {
              console.log(`010Failed to create pixelmaplist object.code is ${err.code},message is ${err.message}`);
              expect(err.code == 401).assertTrue()
              done();
            } else {
              console.log('010Succeeded in creating pixelmaplist object.' + pixelmaplist);
              expect(pixelmaplist).assertInstanceOf('Array');
              done()
            }
          })
        })

        /**
         * @tc.number    Image_Test_011
         * @tc.name      getDelayTimeList
         * @tc.desc      test getDelayTimeList with not gif picture in callback mode
         * @tc.size      : MediumTest
         * @tc.type      : Constant
         * @tc.level     : Level 2
         */
        it('ImageTest011', 0, async (done: Function) => {
          const path = AppStorage.get('pathDir') + "/001test.jpg";
          let file = fs.openSync(path, fs.OpenMode.READ_WRITE | fs.OpenMode.CREATE)
          let sourceOptions : image.SourceOptions = { sourceDensity: 120 };
          const imageSourceApi: image.ImageSource = image.createImageSource(file.fd,sourceOptions);
          imageSourceApi.getDelayTimeList((err: BusinessError, delayTimes: Array<number>) => {
            if (err != undefined) {
              console.log(`011Failed to get delayTimes object.code is ${err.code},message is ${err.message}`);
              expect(err.code).assertEqual(62980113);
              done();
            } else {
              console.log('011Succeeded in delayTimes object.', delayTimes);
            }
          })
        })

        /**
         * @tc.number    Image_Test_012
         * @tc.name      getDelayTimeList
         * @tc.desc      test getDelayTimeList with gif picture in callback mode
         * @tc.size      : MediumTest
         * @tc.type      : Constant
         * @tc.level     : Level 1
         */
        it('ImageTest012', 0, async (done: Function) => {
          const path = AppStorage.get('pathDir') + "/001test.gif";
          let file = fs.openSync(path, fs.OpenMode.READ_WRITE | fs.OpenMode.CREATE)
          let sourceOptions : image.SourceOptions = { sourceDensity: 120 };
          const imageSourceApi: image.ImageSource = image.createImageSource(file.fd,sourceOptions);
          imageSourceApi.getDelayTimeList((err: BusinessError, delayTimes: Array<number>) => {
            if (err != undefined) {
              console.log('err',JSON.stringify(err))
              console.log(`012Failed to get delayTimes object.code is ${err.code},message is ${err.message}`);
              expect(err).assertFail();
              done();
            } else {
              console.log('012Succeeded in delayTimes object.', delayTimes);
              expect(delayTimes).assertInstanceOf('Array');
              done();
            }
          })
        })

        /**
         * @tc.number    Image_Test_013
         * @tc.name      getDelayTimeList
         * @tc.desc      test getDelayTimeList with not gif picture in Promise mode
         * @tc.size      : MediumTest
         * @tc.type      : Constant
         * @tc.level     : Level 2
         */
        it('ImageTest013', 0, async (done: Function) => {
          const path = AppStorage.get('pathDir') + "/001test.jpg";
          let file = fs.openSync(path, fs.OpenMode.READ_WRITE | fs.OpenMode.CREATE)
          let sourceOptions : image.SourceOptions = { sourceDensity: 120 };
          const imageSourceApi: image.ImageSource = image.createImageSource(file.fd,sourceOptions);
          imageSourceApi.getDelayTimeList().then((delayTimes : Array<number>) => {
            console.log('013Succeeded in delayTimes object.',delayTimes);
            done();
          }).catch((err: BusinessError) => {
            console.log(`013Failed to get delayTimes object.code is ${err.code},message is ${err.message}`);
            expect(err.code).assertEqual(62980113);
            done();
          })
        })

        /**
         * @tc.number    Image_Test_014
         * @tc.name      getDelayTimeList
         * @tc.desc      test getDelayTimeList with gif picture in Promise mode
         * @tc.size      : MediumTest
         * @tc.type      : Constant
         * @tc.level     : Level 1
         */
        it('ImageTest014', 0, async (done: Function) => {
          const path = AppStorage.get('pathDir') + "/001test.gif";
          let file = fs.openSync(path, fs.OpenMode.READ_WRITE | fs.OpenMode.CREATE)
          let sourceOptions : image.SourceOptions = { sourceDensity: 120 };
          const imageSourceApi: image.ImageSource = image.createImageSource(file.fd,sourceOptions);
          imageSourceApi.getDelayTimeList().then((delayTimes : Array<number>) => {
            console.log('014Succeeded in delayTimes object.',delayTimes);
            expect(delayTimes).assertInstanceOf('Array');
            done();
          }).catch((err: BusinessError) => {
            console.log(`014Failed to get delayTimes object.code is ${err.code},message is ${err.message}`);
            expect(err).assertFail();
            done()
          })
        })

        /**
         * @tc.number    Image_Test_015
         * @tc.name      getFrameCount
         * @tc.desc      test getFrameCount with not gif picture in callback mode
         * @tc.size      : MediumTest
         * @tc.type      : Constant
         * @tc.level     : Level 1
         */
        it('ImageTest015', 0, async (done: Function) => {
          const path = AppStorage.get('pathDir') + "/001test.jpg";
          let file = fs.openSync(path, fs.OpenMode.READ_WRITE | fs.OpenMode.CREATE)
          let sourceOptions : image.SourceOptions = { sourceDensity: 120 };
          const imageSourceApi: image.ImageSource = image.createImageSource(file.fd,sourceOptions);
          imageSourceApi.getFrameCount((err: BusinessError, frameCount: number) => {
            if (err != undefined) {
              console.log(`015Failed to get frame count.code is ${err.code},message is ${err.message}`);
              done();
            } else {
              console.log('015Succeeded in getting frame count.',frameCount);
              expect(frameCount).assertEqual(1);
              done();
            }
          })
        })

        /**
         * @tc.number    Image_Test_016
         * @tc.name      getFrameCount
         * @tc.desc      test getFrameCount with gif picture in callback mode
         * @tc.size      : MediumTest
         * @tc.type      : Constant
         * @tc.level     : Level 1
         */
        it('ImageTest016', 0, async (done: Function) => {
          const path = AppStorage.get('pathDir') + "/001test.gif";
          let file = fs.openSync(path, fs.OpenMode.READ_WRITE | fs.OpenMode.CREATE)
          let sourceOptions : image.SourceOptions = { sourceDensity: 120 };
          const imageSourceApi: image.ImageSource = image.createImageSource(file.fd,sourceOptions);
          imageSourceApi.getFrameCount((err: BusinessError, frameCount: Number) => {
            if (err != undefined) {
              console.log(`016Failed to get frame count.code is ${err.code},message is ${err.message}`);
              done();
            } else {
              console.log('016Succeeded in getting frame count.',frameCount);
              expect(frameCount).assertInstanceOf('Number');
              done();
            }
          })
        })

        /**
         * @tc.number    Image_Test_017
         * @tc.name      getFrameCount
         * @tc.desc      test getFrameCount with not gif picture in Promise mode
         * @tc.size      : MediumTest
         * @tc.type      : Constant
         * @tc.level     : Level 1
         */
        it('ImageTest017', 0, async (done: Function) => {
          const path = AppStorage.get('pathDir') + "/001test.jpg";
          let file = fs.openSync(path, fs.OpenMode.READ_WRITE | fs.OpenMode.CREATE)
          let sourceOptions : image.SourceOptions = { sourceDensity: 120 };
          const imageSourceApi: image.ImageSource = image.createImageSource(file.fd,sourceOptions);
          imageSourceApi.getFrameCount().then((frameCount: number) => {
            console.log('017Succeeded in getting frame count.',frameCount);
            expect(frameCount).assertEqual(1);
            done();
          }).catch((err : BusinessError) => {
            console.log(`017Failed to get frame count.code is ${err.code},message is ${err.message}`);
            expect(err).assertFail();
            done()
          })
        })

        /**
         * @tc.number    Image_Test_018
         * @tc.name      getFrameCount
         * @tc.desc      test getFrameCount with gif picture in Promise mode
         * @tc.size      : MediumTest
         * @tc.type      : Constant
         * @tc.level     : Level 1
         */
        it('ImageTest018', 0, async (done: Function) => {
          const path = AppStorage.get('pathDir') + "/001test.gif";
          let file = fs.openSync(path, fs.OpenMode.READ_WRITE | fs.OpenMode.CREATE)
          let sourceOptions : image.SourceOptions = { sourceDensity: 120 };
          const imageSourceApi: image.ImageSource = image.createImageSource(file.fd,sourceOptions);
          imageSourceApi.getFrameCount().then((frameCount: Number) => {
            console.log('018Succeeded in getting frame count.',frameCount);
            expect(frameCount).assertInstanceOf('Number');
            done();
          }).catch((err : BusinessError) => {
            console.log('err',err)
            console.log(`018Failed to get frame count.code is ${err.code},message is ${err.message}`);
            expect(err).assertFail();
            done();
          })
        })

        console.info('end################################end');
  })
}