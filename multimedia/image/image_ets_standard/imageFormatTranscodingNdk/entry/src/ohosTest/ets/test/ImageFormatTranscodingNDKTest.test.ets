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
import hilog from '@ohos.hilog';
import { describe, it, beforeAll, expect } from '@ohos/hypium'
import testNapi from 'libentry.so'
import image from '@ohos.multimedia.image';
import common from '@ohos.app.ability.common';
import fs from '@ohos.file.fs';

let testContext: common.UIAbilityContext;

export default function abilityTest() {
  describe('ImageFormatTranscodingNDKTest', () => {
    beforeAll(async () => {
      testContext = AppStorage.get<common.UIAbilityContext>('testContext') as common.UIAbilityContext;
    })

    let filePath: string;
    let fileFd: number;
    const getFd = async (fileName: string) => {
      filePath = testContext.cacheDir + '/' + fileName;
      let jpegExifUint8Array: Uint8Array = testContext.resourceManager.getRawFileContentSync(fileName);
      let file = fs.openSync(filePath, fs.OpenMode.READ_WRITE | fs.OpenMode.CREATE);
      fs.writeSync(file.fd, jpegExifUint8Array.buffer);
      fileFd = file.fd;
    }

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV12_I_I_NDK_0100
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_NV12_I_I_NDK_0100', 0, async (done: Function) => {
      await getFd('JPG_800500.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.NV12, 800, 500, image.PixelMapFormat.NV21);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV12_I_I_NDK_0200
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_NV12_I_I_NDK_0200', 0, async (done: Function) => {
      await getFd('JPG_800500.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.NV12, 800, 500, image.PixelMapFormat.RGBA_8888);
      expect(res).assertEqual(0);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV12_I_I_NDK_0300
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_NV12_I_I_NDK_0300', 0, async (done: Function) => {
      await getFd('JPG_800500.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.NV12, 800, 500, image.PixelMapFormat.BGRA_8888);
      expect(res).assertEqual(0);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV12_I_I_NDK_0400
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_NV12_I_I_NDK_0400', 0, async (done: Function) => {
      await getFd('JPG_800500.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.NV12, 800, 500, image.PixelMapFormat.RGB_565);
      expect(res).assertEqual(0);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV12_I_I_NDK_0500
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_NV12_I_I_NDK_0500', 0, async (done: Function) => {
      await getFd('JPG_800500.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.NV12, 800, 500, image.PixelMapFormat.RGB_888);
      expect(res).assertEqual(0);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV12_I_I_NDK_0600
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_NV12_I_I_NDK_0600', 0, async (done: Function) => {
      await getFd('JPG_800500.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.NV12, 800, 500, image.PixelMapFormat.RGBA_F16);
      expect(res).assertEqual(0);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV12_I_I_NDK_0700
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_NV12_I_I_NDK_0700', 0, async (done: Function) => {
      await getFd('JPG_800500.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.NV12, 800, 500, image.PixelMapFormat.UNKNOWN);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV12_I_I_NDK_0800
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_NV12_I_I_NDK_0800', 0, async (done: Function) => {
      await getFd('JPG_800500.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.NV12, 800, 500, image.PixelMapFormat.ALPHA_8);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV21_I_I_NDK_0100
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_NV21_I_I_NDK_0100', 0, async (done: Function) => {
      await getFd('JPG_800500.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.NV21, 800, 500, image.PixelMapFormat.NV12);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV21_I_I_NDK_0200
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_NV21_I_I_NDK_0200', 0, async (done: Function) => {
      await getFd('JPG_800500.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.NV21, 800, 500, image.PixelMapFormat.RGBA_8888);
      expect(res).assertEqual(0);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV21_I_I_NDK_0300
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_NV21_I_I_NDK_0300', 0, async (done: Function) => {
      await getFd('JPG_800500.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.NV21, 800, 500, image.PixelMapFormat.BGRA_8888);
      expect(res).assertEqual(0);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV21_I_I_NDK_0400
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_NV21_I_I_NDK_0400', 0, async (done: Function) => {
      await getFd('JPG_800500.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.NV21, 800, 500, image.PixelMapFormat.RGB_888);
      expect(res).assertEqual(0);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV21_I_I_NDK_0500
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_NV21_I_I_NDK_0500', 0, async (done: Function) => {
      await getFd('JPG_800500.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.NV21, 800, 500, image.PixelMapFormat.RGB_565);
      expect(res).assertEqual(0);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV21_I_I_NDK_0600
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_NV21_I_I_NDK_0600', 0, async (done: Function) => {
      await getFd('JPG_800500.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.NV21, 800, 500, image.PixelMapFormat.RGBA_F16);
      expect(res).assertEqual(0);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV21_I_I_NDK_0700
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_NV21_I_I_NDK_0700', 0, async (done: Function) => {
      await getFd('JPG_800500.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.NV21, 800, 500, image.PixelMapFormat.UNKNOWN);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV21_I_I_NDK_0800
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_NV21_I_I_NDK_0800', 0, async (done: Function) => {
      await getFd('JPG_800500.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.NV21, 800, 500, image.PixelMapFormat.ALPHA_8);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGBA8888_I_I_NDK_0100
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGBA8888_I_I_NDK_0100', 0, async (done: Function) => {
      await getFd('JPG_800500.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.RGBA_8888, 800, 500, image.PixelMapFormat.NV12);
      expect(res).assertEqual(0);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGBA8888_I_I_NDK_0200
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGBA8888_I_I_NDK_0200', 0, async (done: Function) => {
      await getFd('JPG_800500.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.RGBA_8888, 800, 500, image.PixelMapFormat.NV21);
      expect(res).assertEqual(0);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGBA8888_I_I_NDK_0300
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGBA8888_I_I_NDK_0300', 0, async (done: Function) => {
      await getFd('JPG_800500.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.RGBA_8888, 800, 500, image.PixelMapFormat.BGRA_8888);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGBA8888_I_I_NDK_0400
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGBA8888_I_I_NDK_0400', 0, async (done: Function) => {
      await getFd('JPG_800500.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.RGBA_8888, 800, 500, image.PixelMapFormat.RGB_565);
      expect(res).assertEqual(401);
      done();
    })


    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGBA8888_I_I_NDK_0500
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGBA8888_I_I_NDK_0500', 0, async (done: Function) => {
      await getFd('JPG_800500.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.RGBA_8888, 800, 500, image.PixelMapFormat.RGB_888);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGBA8888_I_I_NDK_0600
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGBA8888_I_I_NDK_0600', 0, async (done: Function) => {
      await getFd('JPG_800500.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.RGBA_8888, 800, 500, image.PixelMapFormat.RGBA_F16);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGBA8888_I_I_NDK_0700
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGBA8888_I_I_NDK_0700', 0, async (done: Function) => {
      await getFd('JPG_800500.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.RGBA_8888, 800, 500, image.PixelMapFormat.UNKNOWN);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGBA8888_I_I_NDK_0800
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGBA8888_I_I_NDK_0800', 0, async (done: Function) => {
      await getFd('JPG_800500.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.RGBA_8888, 800, 500, image.PixelMapFormat.ALPHA_8);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_BGRA8888_I_I_NDK_0100
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_BGRA8888_I_I_NDK_0100', 0, async (done: Function) => {
      await getFd('JPG_800500.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.BGRA_8888, 800, 500, image.PixelMapFormat.NV12);
      expect(res).assertEqual(0);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_BGRA8888_I_I_NDK_0200
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_BGRA8888_I_I_NDK_0200', 0, async (done: Function) => {
      await getFd('JPG_800500.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.BGRA_8888, 800, 500, image.PixelMapFormat.NV21);
      expect(res).assertEqual(0);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_BGRA8888_I_I_NDK_0300
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_BGRA8888_I_I_NDK_0300', 0, async (done: Function) => {
      await getFd('JPG_800500.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.BGRA_8888, 800, 500, image.PixelMapFormat.RGBA_8888);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_BGRA8888_I_I_NDK_0400
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_BGRA8888_I_I_NDK_0400', 0, async (done: Function) => {
      await getFd('JPG_800500.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.BGRA_8888, 800, 500, image.PixelMapFormat.RGB_565);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_BGRA8888_I_I_NDK_0500
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_BGRA8888_I_I_NDK_0500', 0, async (done: Function) => {
      await getFd('JPG_800500.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.BGRA_8888, 800, 500, image.PixelMapFormat.RGB_888);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_BGRA8888_I_I_NDK_0600
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_BGRA8888_I_I_NDK_0600', 0, async (done: Function) => {
      await getFd('JPG_800500.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.BGRA_8888, 800, 500, image.PixelMapFormat.RGBA_F16);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_BGRA8888_I_I_NDK_0700
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_BGRA8888_I_I_NDK_0700', 0, async (done: Function) => {
      await getFd('JPG_800500.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.BGRA_8888, 800, 500, image.PixelMapFormat.UNKNOWN);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_BGRA8888_I_I_NDK_0800
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_BGRA8888_I_I_NDK_0800', 0, async (done: Function) => {
      await getFd('JPG_800500.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.BGRA_8888, 800, 500, image.PixelMapFormat.ALPHA_8);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGB565_I_I_NDK_0100
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGB565_I_I_NDK_0100', 0, async (done: Function) => {
      await getFd('JPG_800500.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.RGB_565, 800, 500, image.PixelMapFormat.NV12);
      expect(res).assertEqual(0);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGB565_I_I_NDK_0200
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGB565_I_I_NDK_0200', 0, async (done: Function) => {
      await getFd('JPG_800500.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.RGB_565, 800, 500, image.PixelMapFormat.NV21);
      expect(res).assertEqual(0);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGB565_I_I_NDK_0300
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGB565_I_I_NDK_0300', 0, async (done: Function) => {
      await getFd('JPG_800500.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.RGB_565, 800, 500, image.PixelMapFormat.RGBA_8888);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGB565_I_I_NDK_0400
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGB565_I_I_NDK_0400', 0, async (done: Function) => {
      await getFd('JPG_800500.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.RGB_565, 800, 500, image.PixelMapFormat.BGRA_8888);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGB565_I_I_NDK_0500
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGB565_I_I_NDK_0500', 0, async (done: Function) => {
      await getFd('JPG_800500.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.RGB_565, 800, 500, image.PixelMapFormat.RGB_888);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGB565_I_I_NDK_0600
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGB565_I_I_NDK_0600', 0, async (done: Function) => {
      await getFd('JPG_800500.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.RGB_565, 800, 500, image.PixelMapFormat.RGBA_F16);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGB565_I_I_NDK_0700
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGB565_I_I_NDK_0700', 0, async (done: Function) => {
      await getFd('JPG_800500.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.RGB_565, 800, 500, image.PixelMapFormat.UNKNOWN);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGB565_I_I_NDK_0800
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGB565_I_I_NDK_0800', 0, async (done: Function) => {
      await getFd('JPG_800500.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.RGB_565, 800, 500, image.PixelMapFormat.ALPHA_8);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGB888_I_I_NDK_0100
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGB888_I_I_NDK_0100', 0, async (done: Function) => {
      await getFd('JPG_800500.jpg');
      const res = testNapi.convertPixelFormatRGB888(fileFd, image.PixelMapFormat.RGB_888, 800, 500, image.PixelMapFormat.NV12);
      expect(res).assertEqual(0);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGB888_I_I_NDK_0200
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGB888_I_I_NDK_0200', 0, async (done: Function) => {
      await getFd('JPG_800500.jpg');
      const res = testNapi.convertPixelFormatRGB888(fileFd, image.PixelMapFormat.RGB_888, 800, 500, image.PixelMapFormat.NV21);
      expect(res).assertEqual(0);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGB888_I_I_NDK_0300
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGB888_I_I_NDK_0300', 0, async (done: Function) => {
      await getFd('JPG_800500.jpg');
      const res = testNapi.convertPixelFormatRGB888(fileFd, image.PixelMapFormat.RGB_888, 800, 500, image.PixelMapFormat.RGBA_8888);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGB888_I_I_NDK_0400
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGB888_I_I_NDK_0400', 0, async (done: Function) => {
      await getFd('JPG_800500.jpg');
      const res = testNapi.convertPixelFormatRGB888(fileFd, image.PixelMapFormat.RGB_888, 800, 500, image.PixelMapFormat.RGB_565);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGB888_I_I_NDK_0500
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGB888_I_I_NDK_0500', 0, async (done: Function) => {
      await getFd('JPG_800500.jpg');
      const res = testNapi.convertPixelFormatRGB888(fileFd, image.PixelMapFormat.RGB_888, 800, 500, image.PixelMapFormat.BGRA_8888);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGB888_I_I_NDK_0600
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGB888_I_I_NDK_0600', 0, async (done: Function) => {
      await getFd('JPG_800500.jpg');
      const res = testNapi.convertPixelFormatRGB888(fileFd, image.PixelMapFormat.RGB_888, 800, 500, image.PixelMapFormat.RGBA_F16);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGB888_I_I_NDK_0700
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGB888_I_I_NDK_0700', 0, async (done: Function) => {
      await getFd('JPG_800500.jpg');
      const res = testNapi.convertPixelFormatRGB888(fileFd, image.PixelMapFormat.RGB_888, 800, 500, image.PixelMapFormat.UNKNOWN);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGB888_I_I_NDK_0800
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGB888_I_I_NDK_0800', 0, async (done: Function) => {
      await getFd('JPG_800500.jpg');
      const res = testNapi.convertPixelFormatRGB888(fileFd, image.PixelMapFormat.RGB_888, 800, 500, image.PixelMapFormat.ALPHA_8);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGBAF16_I_I_NDK_0100
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGBAF16_I_I_NDK_0200', 0, async (done: Function) => {
      await getFd('JPG_800500.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.RGBA_F16, 800, 500, image.PixelMapFormat.NV12);
      expect(res).assertEqual(0);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGBAF16_I_I_NDK_0200
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGBAF16_I_I_NDK_0200', 0, async (done: Function) => {
      await getFd('JPG_800500.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.RGBA_F16, 800, 500, image.PixelMapFormat.NV21);
      expect(res).assertEqual(0);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGBAF16_I_I_NDK_0300
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGBAF16_I_I_NDK_0300', 0, async (done: Function) => {
      await getFd('JPG_800500.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.RGBA_F16, 800, 500, image.PixelMapFormat.RGBA_8888);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGBAF16_I_I_NDK_0400
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGBAF16_I_I_NDK_0400', 0, async (done: Function) => {
      await getFd('JPG_800500.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.RGBA_F16, 800, 500, image.PixelMapFormat.RGB_888);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGBAF16_I_I_NDK_0500
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGBAF16_I_I_NDK_0500', 0, async (done: Function) => {
      await getFd('JPG_800500.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.RGBA_F16, 800, 500, image.PixelMapFormat.BGRA_8888);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGBAF16_I_I_NDK_0600
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGBAF16_I_I_NDK_0600', 0, async (done: Function) => {
      await getFd('JPG_800500.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.RGBA_F16, 800, 500, image.PixelMapFormat.RGB_888);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGBAF16_I_I_NDK_0700
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGBAF16_I_I_NDK_0700', 0, async (done: Function) => {
      await getFd('JPG_800500.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.RGBA_F16, 800, 500, image.PixelMapFormat.UNKNOWN);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGBAF16_I_I_NDK_0800
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGBAF16_I_I_NDK_0800', 0, async (done: Function) => {
      await getFd('JPG_800500.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.RGBA_F16, 800, 500, image.PixelMapFormat.ALPHA_8);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV12_odd_I_NDK_0100
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_NV12_odd_I_NDK_0100', 0, async (done: Function) => {
      await getFd('JPG_801500.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.NV12, 801, 500, image.PixelMapFormat.NV21);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV12_odd_I_NDK_0200
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_NV12_odd_I_NDK_0200', 0, async (done: Function) => {
      await getFd('JPG_801500.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.NV12, 801, 500, image.PixelMapFormat.RGBA_8888);
      expect(res).assertEqual(0);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV12_odd_I_NDK_0300
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_NV12_odd_I_NDK_0300', 0, async (done: Function) => {
      await getFd('JPG_801500.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.NV12, 801, 500, image.PixelMapFormat.BGRA_8888);
      expect(res).assertEqual(0);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV12_odd_I_NDK_0400
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_NV12_odd_I_NDK_0400', 0, async (done: Function) => {
      await getFd('JPG_801500.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.NV12, 801, 500, image.PixelMapFormat.RGB_565);
      expect(res).assertEqual(0);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV12_odd_I_NDK_0500
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_NV12_odd_I_NDK_0500', 0, async (done: Function) => {
      await getFd('JPG_801500.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.NV12, 801, 500, image.PixelMapFormat.RGB_888);
      expect(res).assertEqual(0);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV12_odd_I_NDK_0600
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_NV12_odd_I_NDK_0600', 0, async (done: Function) => {
      await getFd('JPG_801500.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.NV12, 801, 500, image.PixelMapFormat.RGBA_F16);
      expect(res).assertEqual(0);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV12_odd_I_NDK_0700
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_NV12_odd_I_NDK_0700', 0, async (done: Function) => {
      await getFd('JPG_801500.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.NV12, 801, 500, image.PixelMapFormat.UNKNOWN);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV12_odd_I_NDK_0800
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_NV12_odd_I_NDK_0800', 0, async (done: Function) => {
      await getFd('JPG_801500.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.NV12, 801, 500, image.PixelMapFormat.ALPHA_8);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV21_odd_I_NDK_0100
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_NV21_odd_I_NDK_0100', 0, async (done: Function) => {
      await getFd('JPG_801500.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.NV21, 801, 500, image.PixelMapFormat.NV12);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV21_odd_I_NDK_0200
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_NV21_odd_I_NDK_0200', 0, async (done: Function) => {
      await getFd('JPG_801500.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.NV21, 801, 500, image.PixelMapFormat.RGBA_8888);
      expect(res).assertEqual(0);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV21_odd_I_NDK_0300
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_NV21_odd_I_NDK_0300', 0, async (done: Function) => {
      await getFd('JPG_801500.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.NV21, 801, 500, image.PixelMapFormat.BGRA_8888);
      expect(res).assertEqual(0);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV21_odd_I_NDK_0400
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_NV21_odd_I_NDK_0400', 0, async (done: Function) => {
      await getFd('JPG_801500.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.NV21, 801, 500, image.PixelMapFormat.RGB_888);
      expect(res).assertEqual(0);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV21_odd_I_NDK_0500
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_NV21_odd_I_NDK_0500', 0, async (done: Function) => {
      await getFd('JPG_801500.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.NV21, 801, 500, image.PixelMapFormat.RGB_565);
      expect(res).assertEqual(0);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV21_odd_I_NDK_0600
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_NV21_odd_I_NDK_0600', 0, async (done: Function) => {
      await getFd('JPG_801500.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.NV21, 801, 500, image.PixelMapFormat.RGBA_F16);
      expect(res).assertEqual(0);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV21_odd_I_NDK_0700
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_NV21_odd_I_NDK_0700', 0, async (done: Function) => {
      await getFd('JPG_801500.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.NV21, 801, 500, image.PixelMapFormat.UNKNOWN);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV21_odd_I_NDK_0800
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_NV21_odd_I_NDK_0800', 0, async (done: Function) => {
      await getFd('JPG_801500.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.NV21, 801, 500, image.PixelMapFormat.ALPHA_8);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGBA8888_odd_I_NDK_0100
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGBA8888_odd_I_NDK_0100', 0, async (done: Function) => {
      await getFd('JPG_801500.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.RGBA_8888, 801, 500, image.PixelMapFormat.NV12);
      expect(res).assertEqual(0);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGBA8888_odd_I_NDK_0200
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGBA8888_odd_I_NDK_0200', 0, async (done: Function) => {
      await getFd('JPG_801500.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.RGBA_8888, 801, 500, image.PixelMapFormat.NV21);
      expect(res).assertEqual(0);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGBA8888_odd_I_NDK_0300
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGBA8888_odd_I_NDK_0300', 0, async (done: Function) => {
      await getFd('JPG_801500.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.RGBA_8888, 801, 500, image.PixelMapFormat.BGRA_8888);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGBA8888_odd_I_NDK_0400
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGBA8888_odd_I_NDK_0400', 0, async (done: Function) => {
      await getFd('JPG_801500.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.RGBA_8888, 801, 500, image.PixelMapFormat.RGB_565);
      expect(res).assertEqual(401);
      done();
    })


    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGBA8888_odd_I_NDK_0500
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGBA8888_odd_I_NDK_0500', 0, async (done: Function) => {
      await getFd('JPG_801500.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.RGBA_8888, 801, 500, image.PixelMapFormat.RGB_888);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGBA8888_odd_I_NDK_0600
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGBA8888_odd_I_NDK_0600', 0, async (done: Function) => {
      await getFd('JPG_801500.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.RGBA_8888, 801, 500, image.PixelMapFormat.RGBA_F16);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGBA8888_odd_I_NDK_0700
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGBA8888_odd_I_NDK_0700', 0, async (done: Function) => {
      await getFd('JPG_801500.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.RGBA_8888, 801, 500, image.PixelMapFormat.UNKNOWN);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGBA8888_odd_I_NDK_0800
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGBA8888_odd_I_NDK_0800', 0, async (done: Function) => {
      await getFd('JPG_801500.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.RGBA_8888, 801, 500, image.PixelMapFormat.ALPHA_8);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_BGRA8888_odd_I_NDK_0100
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_BGRA8888_odd_I_NDK_0100', 0, async (done: Function) => {
      await getFd('JPG_801500.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.BGRA_8888, 801, 500, image.PixelMapFormat.NV12);
      expect(res).assertEqual(0);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_BGRA8888_odd_I_NDK_0200
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_BGRA8888_odd_I_NDK_0200', 0, async (done: Function) => {
      await getFd('JPG_801500.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.BGRA_8888, 801, 500, image.PixelMapFormat.NV21);
      expect(res).assertEqual(0);
      done();
    })


    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_BGRA8888_odd_I_NDK_0300
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_BGRA8888_odd_I_NDK_0300', 0, async (done: Function) => {
      await getFd('JPG_801500.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.BGRA_8888, 801, 500, image.PixelMapFormat.RGBA_8888);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_BGRA8888_odd_I_NDK_0400
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_BGRA8888_odd_I_NDK_0400', 0, async (done: Function) => {
      await getFd('JPG_801500.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.BGRA_8888, 801, 500, image.PixelMapFormat.RGB_565);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_BGRA8888_odd_I_NDK_0500
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_BGRA8888_odd_I_NDK_0500', 0, async (done: Function) => {
      await getFd('JPG_801500.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.BGRA_8888, 801, 500, image.PixelMapFormat.RGB_888);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_BGRA8888_odd_I_NDK_0600
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_BGRA8888_odd_I_NDK_0600', 0, async (done: Function) => {
      await getFd('JPG_801500.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.BGRA_8888, 801, 500, image.PixelMapFormat.RGBA_F16);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_BGRA8888_odd_I_NDK_0700
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_BGRA8888_odd_I_NDK_0700', 0, async (done: Function) => {
      await getFd('JPG_801500.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.BGRA_8888, 801, 500, image.PixelMapFormat.UNKNOWN);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_BGRA8888_odd_I_NDK_0800
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_BGRA8888_odd_I_NDK_0800', 0, async (done: Function) => {
      await getFd('JPG_801500.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.BGRA_8888, 801, 500, image.PixelMapFormat.ALPHA_8);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGB565_odd_I_NDK_0100
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGB565_odd_I_NDK_0100', 0, async (done: Function) => {
      await getFd('JPG_801500.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.RGB_565, 801, 500, image.PixelMapFormat.NV12);
      expect(res).assertEqual(0);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGB565_odd_I_NDK_0200
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGB565_odd_I_NDK_0200', 0, async (done: Function) => {
      await getFd('JPG_801500.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.RGB_565, 801, 500, image.PixelMapFormat.NV21);
      expect(res).assertEqual(0);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGB565_odd_I_NDK_0300
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGB565_odd_I_NDK_0300', 0, async (done: Function) => {
      await getFd('JPG_801500.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.RGB_565, 801, 500, image.PixelMapFormat.RGBA_8888);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGB565_odd_I_NDK_0400
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGB565_odd_I_NDK_0400', 0, async (done: Function) => {
      await getFd('JPG_801500.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.RGB_565, 801, 500, image.PixelMapFormat.BGRA_8888);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGB565_odd_I_NDK_0500
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGB565_odd_I_NDK_0500', 0, async (done: Function) => {
      await getFd('JPG_801500.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.RGB_565, 801, 500, image.PixelMapFormat.RGB_888);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGB565_odd_I_NDK_0600
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGB565_odd_I_NDK_0600', 0, async (done: Function) => {
      await getFd('JPG_801500.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.RGB_565, 801, 500, image.PixelMapFormat.RGBA_F16);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGB565_odd_I_NDK_0700
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGB565_odd_I_NDK_0700', 0, async (done: Function) => {
      await getFd('JPG_801500.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.RGB_565, 801, 500, image.PixelMapFormat.UNKNOWN);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGB565_odd_I_NDK_0800
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGB565_odd_I_NDK_0800', 0, async (done: Function) => {
      await getFd('JPG_801500.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.RGB_565, 801, 500, image.PixelMapFormat.ALPHA_8);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGB888_odd_I_NDK_0100
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGB888_odd_I_NDK_0100', 0, async (done: Function) => {
      await getFd('JPG_801500.jpg');
      const res = testNapi.convertPixelFormatRGB888(fileFd, image.PixelMapFormat.RGB_888, 801, 500, image.PixelMapFormat.NV12);
      expect(res).assertEqual(0);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGB888_odd_I_NDK_0200
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGB888_odd_I_NDK_0200', 0, async (done: Function) => {
      await getFd('JPG_801500.jpg');
      const res = testNapi.convertPixelFormatRGB888(fileFd, image.PixelMapFormat.RGB_888, 801, 500, image.PixelMapFormat.NV21);
      expect(res).assertEqual(0);
      done();
    })


    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGB888_odd_I_NDK_0300
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGB888_odd_I_NDK_0300', 0, async (done: Function) => {
      await getFd('JPG_801500.jpg');
      const res = testNapi.convertPixelFormatRGB888(fileFd, image.PixelMapFormat.RGB_888, 801, 500, image.PixelMapFormat.RGBA_8888);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGB888_odd_I_NDK_0400
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGB888_odd_I_NDK_0400', 0, async (done: Function) => {
      await getFd('JPG_801500.jpg');
      const res = testNapi.convertPixelFormatRGB888(fileFd, image.PixelMapFormat.RGB_888, 801, 500, image.PixelMapFormat.RGB_565);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGB888_odd_I_NDK_0500
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGB888_odd_I_NDK_0500', 0, async (done: Function) => {
      await getFd('JPG_801500.jpg');
      const res = testNapi.convertPixelFormatRGB888(fileFd, image.PixelMapFormat.RGB_888, 801, 500, image.PixelMapFormat.BGRA_8888);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGB888_odd_I_NDK_0600
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGB888_odd_I_NDK_0600', 0, async (done: Function) => {
      await getFd('JPG_801500.jpg');
      const res = testNapi.convertPixelFormatRGB888(fileFd, image.PixelMapFormat.RGB_888, 801, 500, image.PixelMapFormat.RGBA_F16);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGB888_odd_I_NDK_0700
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGB888_odd_I_NDK_0700', 0, async (done: Function) => {
      await getFd('JPG_801500.jpg');
      const res = testNapi.convertPixelFormatRGB888(fileFd, image.PixelMapFormat.RGB_888, 801, 500, image.PixelMapFormat.UNKNOWN);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGB888_odd_I_NDK_0800
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGB888_odd_I_NDK_0800', 0, async (done: Function) => {
      await getFd('JPG_801500.jpg');
      const res = testNapi.convertPixelFormatRGB888(fileFd, image.PixelMapFormat.RGB_888, 801, 500, image.PixelMapFormat.ALPHA_8);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGBAF16_odd_I_NDK_0100
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGBAF16_odd_I_NDK_0200', 0, async (done: Function) => {
      await getFd('JPG_801500.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.RGBA_F16, 801, 500, image.PixelMapFormat.NV12);
      expect(res).assertEqual(0);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGBAF16_odd_I_NDK_0200
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGBAF16_odd_I_NDK_0200', 0, async (done: Function) => {
      await getFd('JPG_801500.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.RGBA_F16, 801, 500, image.PixelMapFormat.NV21);
      expect(res).assertEqual(0);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGBAF16_odd_I_NDK_0300
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGBAF16_odd_I_NDK_0300', 0, async (done: Function) => {
      await getFd('JPG_801500.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.RGBA_F16, 801, 500, image.PixelMapFormat.RGBA_8888);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGBAF16_odd_I_NDK_0400
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGBAF16_odd_I_NDK_0400', 0, async (done: Function) => {
      await getFd('JPG_801500.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.RGBA_F16, 801, 500, image.PixelMapFormat.RGB_888);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGBAF16_odd_I_NDK_0500
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGBAF16_odd_I_NDK_0500', 0, async (done: Function) => {
      await getFd('JPG_801500.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.RGBA_F16, 801, 500, image.PixelMapFormat.BGRA_8888);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGBAF16_odd_I_NDK_0600
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGBAF16_odd_I_NDK_0600', 0, async (done: Function) => {
      await getFd('JPG_801500.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.RGBA_F16, 801, 500, image.PixelMapFormat.RGB_888);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGBAF16_odd_I_NDK_0700
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGBAF16_odd_I_NDK_0700', 0, async (done: Function) => {
      await getFd('JPG_801500.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.RGBA_F16, 801, 500, image.PixelMapFormat.UNKNOWN);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGBAF16_odd_I_NDK_0800
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGBAF16_odd_I_NDK_0800', 0, async (done: Function) => {
      await getFd('JPG_801500.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.RGBA_F16, 801, 500, image.PixelMapFormat.ALPHA_8);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV12_I_odd_NDK_0100
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_NV12_I_odd_NDK_0100', 0, async (done: Function) => {
      await getFd('JPG_800501.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.NV12, 800, 501, image.PixelMapFormat.NV21);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV12_I_odd_NDK_0200
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_NV12_I_odd_NDK_0200', 0, async (done: Function) => {
      await getFd('JPG_800501.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.NV12, 800, 501, image.PixelMapFormat.RGBA_8888);
      expect(res).assertEqual(0);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV12_I_odd_NDK_0300
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_NV12_I_odd_NDK_0300', 0, async (done: Function) => {
      await getFd('JPG_800501.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.NV12, 800, 501, image.PixelMapFormat.BGRA_8888);
      expect(res).assertEqual(0);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV12_I_odd_NDK_0400
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_NV12_I_odd_NDK_0400', 0, async (done: Function) => {
      await getFd('JPG_800501.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.NV12, 800, 501, image.PixelMapFormat.RGB_565);
      expect(res).assertEqual(0);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV12_I_odd_NDK_0500
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_NV12_I_odd_NDK_0500', 0, async (done: Function) => {
      await getFd('JPG_800501.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.NV12, 800, 501, image.PixelMapFormat.RGB_888);
      expect(res).assertEqual(0);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV12_I_odd_NDK_0600
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_NV12_I_odd_NDK_0600', 0, async (done: Function) => {
      await getFd('JPG_800501.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.NV12, 800, 501, image.PixelMapFormat.RGBA_F16);
      expect(res).assertEqual(0);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV12_I_odd_NDK_0700
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_NV12_I_odd_NDK_0700', 0, async (done: Function) => {
      await getFd('JPG_800501.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.NV12, 800, 501, image.PixelMapFormat.UNKNOWN);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV12_I_odd_NDK_0800
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_NV12_I_odd_NDK_0800', 0, async (done: Function) => {
      await getFd('JPG_800501.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.NV12, 800, 501, image.PixelMapFormat.ALPHA_8);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV21_I_odd_NDK_0100
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_NV21_I_odd_NDK_0100', 0, async (done: Function) => {
      await getFd('JPG_800501.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.NV21, 800, 501, image.PixelMapFormat.NV12);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV21_I_odd_NDK_0200
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_NV21_I_odd_NDK_0200', 0, async (done: Function) => {
      await getFd('JPG_800501.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.NV21, 800, 501, image.PixelMapFormat.RGBA_8888);
      expect(res).assertEqual(0);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV21_I_odd_NDK_0300
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_NV21_I_odd_NDK_0300', 0, async (done: Function) => {
      await getFd('JPG_800501.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.NV21, 800, 501, image.PixelMapFormat.BGRA_8888);
      expect(res).assertEqual(0);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV21_I_odd_NDK_0400
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_NV21_I_odd_NDK_0400', 0, async (done: Function) => {
      await getFd('JPG_800501.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.NV21, 800, 501, image.PixelMapFormat.RGB_888);
      expect(res).assertEqual(0);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV21_I_odd_NDK_0500
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_NV21_I_odd_NDK_0500', 0, async (done: Function) => {
      await getFd('JPG_800501.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.NV21, 800, 501, image.PixelMapFormat.RGB_565);
      expect(res).assertEqual(0);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV21_I_odd_NDK_0600
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_NV21_I_odd_NDK_0600', 0, async (done: Function) => {
      await getFd('JPG_800501.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.NV21, 800, 501, image.PixelMapFormat.RGBA_F16);
      expect(res).assertEqual(0);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV21_I_odd_NDK_0700
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_NV21_I_odd_NDK_0700', 0, async (done: Function) => {
      await getFd('JPG_800501.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.NV21, 800, 501, image.PixelMapFormat.UNKNOWN);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV21_I_odd_NDK_0800
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_NV21_I_odd_NDK_0800', 0, async (done: Function) => {
      await getFd('JPG_800501.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.NV21, 800, 501, image.PixelMapFormat.ALPHA_8);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGBA8888_I_odd_NDK_0100
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGBA8888_I_odd_NDK_0100', 0, async (done: Function) => {
      await getFd('JPG_800501.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.RGBA_8888, 800, 501, image.PixelMapFormat.NV12);
      expect(res).assertEqual(0);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGBA8888_I_odd_NDK_0200
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGBA8888_I_odd_NDK_0200', 0, async (done: Function) => {
      await getFd('JPG_800501.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.RGBA_8888, 800, 501, image.PixelMapFormat.NV21);
      expect(res).assertEqual(0);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGBA8888_I_odd_NDK_0300
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGBA8888_I_odd_NDK_0300', 0, async (done: Function) => {
      await getFd('JPG_800501.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.RGBA_8888, 800, 501, image.PixelMapFormat.BGRA_8888);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGBA8888_I_odd_NDK_0400
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGBA8888_I_odd_NDK_0400', 0, async (done: Function) => {
      await getFd('JPG_800501.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.RGBA_8888, 800, 501, image.PixelMapFormat.RGB_565);
      expect(res).assertEqual(401);
      done();
    })


    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGBA8888_I_odd_NDK_0500
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGBA8888_I_odd_NDK_0500', 0, async (done: Function) => {
      await getFd('JPG_800501.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.RGBA_8888, 800, 501, image.PixelMapFormat.RGB_888);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGBA8888_I_odd_NDK_0600
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGBA8888_I_odd_NDK_0600', 0, async (done: Function) => {
      await getFd('JPG_800501.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.RGBA_8888, 800, 501, image.PixelMapFormat.RGBA_F16);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGBA8888_I_odd_NDK_0700
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGBA8888_I_odd_NDK_0700', 0, async (done: Function) => {
      await getFd('JPG_800501.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.RGBA_8888, 800, 501, image.PixelMapFormat.UNKNOWN);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGBA8888_I_odd_NDK_0800
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGBA8888_I_odd_NDK_0800', 0, async (done: Function) => {
      await getFd('JPG_800501.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.RGBA_8888, 800, 501, image.PixelMapFormat.ALPHA_8);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_BGRA8888_I_odd_NDK_0100
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_BGRA8888_I_odd_NDK_0100', 0, async (done: Function) => {
      await getFd('JPG_800501.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.BGRA_8888, 800, 501, image.PixelMapFormat.NV12);
      expect(res).assertEqual(0);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_BGRA8888_I_odd_NDK_0200
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_BGRA8888_I_odd_NDK_0200', 0, async (done: Function) => {
      await getFd('JPG_800501.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.BGRA_8888, 800, 501, image.PixelMapFormat.NV21);
      expect(res).assertEqual(0);
      done();
    })


    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_BGRA8888_I_odd_NDK_0300
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_BGRA8888_I_odd_NDK_0300', 0, async (done: Function) => {
      await getFd('JPG_800501.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.BGRA_8888, 800, 501, image.PixelMapFormat.RGBA_8888);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_BGRA8888_I_odd_NDK_0400
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_BGRA8888_I_odd_NDK_0400', 0, async (done: Function) => {
      await getFd('JPG_800501.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.BGRA_8888, 800, 501, image.PixelMapFormat.RGB_565);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_BGRA8888_I_odd_NDK_0500
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_BGRA8888_I_odd_NDK_0500', 0, async (done: Function) => {
      await getFd('JPG_800501.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.BGRA_8888, 800, 501, image.PixelMapFormat.RGB_888);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_BGRA8888_I_odd_NDK_0600
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_BGRA8888_I_odd_NDK_0600', 0, async (done: Function) => {
      await getFd('JPG_800501.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.BGRA_8888, 800, 501, image.PixelMapFormat.RGBA_F16);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_BGRA8888_I_odd_NDK_0700
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_BGRA8888_I_odd_NDK_0700', 0, async (done: Function) => {
      await getFd('JPG_800501.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.BGRA_8888, 800, 501, image.PixelMapFormat.UNKNOWN);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_BGRA8888_I_odd_NDK_0800
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_BGRA8888_I_odd_NDK_0800', 0, async (done: Function) => {
      await getFd('JPG_800501.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.BGRA_8888, 800, 501, image.PixelMapFormat.ALPHA_8);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGB565_I_odd_NDK_0100
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGB565_I_odd_NDK_0100', 0, async (done: Function) => {
      await getFd('JPG_800501.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.RGB_565, 800, 501, image.PixelMapFormat.NV12);
      expect(res).assertEqual(0);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGB565_I_odd_NDK_0200
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGB565_I_odd_NDK_0200', 0, async (done: Function) => {
      await getFd('JPG_800501.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.RGB_565, 800, 501, image.PixelMapFormat.NV21);
      expect(res).assertEqual(0);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGB565_I_odd_NDK_0300
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGB565_I_odd_NDK_0300', 0, async (done: Function) => {
      await getFd('JPG_800501.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.RGB_565, 800, 501, image.PixelMapFormat.RGBA_8888);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGB565_I_odd_NDK_0400
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGB565_I_odd_NDK_0400', 0, async (done: Function) => {
      await getFd('JPG_800501.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.RGB_565, 800, 501, image.PixelMapFormat.BGRA_8888);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGB565_I_odd_NDK_0500
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGB565_I_odd_NDK_0500', 0, async (done: Function) => {
      await getFd('JPG_800501.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.RGB_565, 800, 501, image.PixelMapFormat.RGB_888);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGB565_I_odd_NDK_0600
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGB565_I_odd_NDK_0600', 0, async (done: Function) => {
      await getFd('JPG_800501.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.RGB_565, 800, 501, image.PixelMapFormat.RGBA_F16);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGB565_I_odd_NDK_0700
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGB565_I_odd_NDK_0700', 0, async (done: Function) => {
      await getFd('JPG_800501.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.RGB_565, 800, 501, image.PixelMapFormat.UNKNOWN);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGB565_I_odd_NDK_0800
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGB565_I_odd_NDK_0800', 0, async (done: Function) => {
      await getFd('JPG_800501.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.RGB_565, 800, 501, image.PixelMapFormat.ALPHA_8);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGB888_I_odd_NDK_0100
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGB888_I_odd_NDK_0100', 0, async (done: Function) => {
      await getFd('JPG_800501.jpg');
      const res = testNapi.convertPixelFormatRGB888(fileFd, image.PixelMapFormat.RGB_888, 800, 501, image.PixelMapFormat.NV12);
      expect(res).assertEqual(0);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGB888_I_odd_NDK_0200
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGB888_I_odd_NDK_0200', 0, async (done: Function) => {
      await getFd('JPG_800501.jpg');
      const res = testNapi.convertPixelFormatRGB888(fileFd, image.PixelMapFormat.RGB_888, 800, 501, image.PixelMapFormat.NV21);
      expect(res).assertEqual(0);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGB888_I_odd_NDK_0300
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGB888_I_odd_NDK_0300', 0, async (done: Function) => {
      await getFd('JPG_800501.jpg');
      const res = testNapi.convertPixelFormatRGB888(fileFd, image.PixelMapFormat.RGB_888, 800, 501, image.PixelMapFormat.RGBA_8888);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGB888_I_odd_NDK_0400
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGB888_I_odd_NDK_0400', 0, async (done: Function) => {
      await getFd('JPG_800501.jpg');
      const res = testNapi.convertPixelFormatRGB888(fileFd, image.PixelMapFormat.RGB_888, 800, 501, image.PixelMapFormat.RGB_565);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGB888_I_odd_NDK_0500
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGB888_I_odd_NDK_0500', 0, async (done: Function) => {
      await getFd('JPG_800501.jpg');
      const res = testNapi.convertPixelFormatRGB888(fileFd, image.PixelMapFormat.RGB_888, 800, 501, image.PixelMapFormat.BGRA_8888);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGB888_I_odd_NDK_0600
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGB888_I_odd_NDK_0600', 0, async (done: Function) => {
      await getFd('JPG_800501.jpg');
      const res = testNapi.convertPixelFormatRGB888(fileFd, image.PixelMapFormat.RGB_888, 800, 501, image.PixelMapFormat.RGBA_F16);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGB888_I_odd_NDK_0700
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGB888_I_odd_NDK_0700', 0, async (done: Function) => {
      await getFd('JPG_800501.jpg');
      const res = testNapi.convertPixelFormatRGB888(fileFd, image.PixelMapFormat.RGB_888, 800, 501, image.PixelMapFormat.UNKNOWN);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGB888_I_odd_NDK_0800
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGB888_I_odd_NDK_0800', 0, async (done: Function) => {
      await getFd('JPG_800501.jpg');
      const res = testNapi.convertPixelFormatRGB888(fileFd, image.PixelMapFormat.RGB_888, 800, 501, image.PixelMapFormat.ALPHA_8);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGBAF16_I_odd_NDK_0100
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGBAF16_I_odd_NDK_0200', 0, async (done: Function) => {
      await getFd('JPG_800501.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.RGBA_F16, 800, 501, image.PixelMapFormat.NV12);
      expect(res).assertEqual(0);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGBAF16_I_odd_NDK_0200
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGBAF16_I_odd_NDK_0200', 0, async (done: Function) => {
      await getFd('JPG_800501.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.RGBA_F16, 800, 501, image.PixelMapFormat.NV21);
      expect(res).assertEqual(0);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGBAF16_I_odd_NDK_0300
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGBAF16_I_odd_NDK_0300', 0, async (done: Function) => {
      await getFd('JPG_800501.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.RGBA_F16, 800, 501, image.PixelMapFormat.RGBA_8888);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGBAF16_I_odd_NDK_0400
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGBAF16_I_odd_NDK_0400', 0, async (done: Function) => {
      await getFd('JPG_800501.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.RGBA_F16, 800, 501, image.PixelMapFormat.RGB_888);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGBAF16_I_odd_NDK_0500
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGBAF16_I_odd_NDK_0500', 0, async (done: Function) => {
      await getFd('JPG_800501.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.RGBA_F16, 800, 501, image.PixelMapFormat.BGRA_8888);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGBAF16_I_odd_NDK_0600
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGBAF16_I_odd_NDK_0600', 0, async (done: Function) => {
      await getFd('JPG_800501.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.RGBA_F16, 800, 501, image.PixelMapFormat.RGB_888);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGBAF16_I_odd_NDK_0700
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGBAF16_I_odd_NDK_0700', 0, async (done: Function) => {
      await getFd('JPG_800501.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.RGBA_F16, 800, 501, image.PixelMapFormat.UNKNOWN);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGBAF16_I_odd_NDK_0800
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGBAF16_I_odd_NDK_0800', 0, async (done: Function) => {
      await getFd('JPG_800501.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.RGBA_F16, 800, 501, image.PixelMapFormat.ALPHA_8);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV12_odd_odd_NDK_0100
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_NV12_odd_odd_NDK_0100', 0, async (done: Function) => {
      await getFd('JPG_801501.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.NV12, 801, 501, image.PixelMapFormat.NV21);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV12_odd_odd_NDK_0200
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_NV12_odd_odd_NDK_0200', 0, async (done: Function) => {
      await getFd('JPG_801501.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.NV12, 801, 501, image.PixelMapFormat.RGBA_8888);
      expect(res).assertEqual(0);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV12_odd_odd_NDK_0300
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_NV12_odd_odd_NDK_0300', 0, async (done: Function) => {
      await getFd('JPG_801501.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.NV12, 801, 501, image.PixelMapFormat.BGRA_8888);
      expect(res).assertEqual(0);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV12_odd_odd_NDK_0400
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_NV12_odd_odd_NDK_0400', 0, async (done: Function) => {
      await getFd('JPG_801501.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.NV12, 801, 501, image.PixelMapFormat.RGB_565);
      expect(res).assertEqual(0);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV12_odd_odd_NDK_0500
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_NV12_odd_odd_NDK_0500', 0, async (done: Function) => {
      await getFd('JPG_801501.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.NV12, 801, 501, image.PixelMapFormat.RGB_888);
      expect(res).assertEqual(0);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV12_odd_odd_NDK_0600
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_NV12_odd_odd_NDK_0600', 0, async (done: Function) => {
      await getFd('JPG_801501.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.NV12, 801, 501, image.PixelMapFormat.RGBA_F16);
      expect(res).assertEqual(0);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV12_odd_odd_NDK_0700
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_NV12_odd_odd_NDK_0700', 0, async (done: Function) => {
      await getFd('JPG_801501.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.NV12, 801, 501, image.PixelMapFormat.UNKNOWN);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV12_odd_odd_NDK_0800
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_NV12_odd_odd_NDK_0800', 0, async (done: Function) => {
      await getFd('JPG_801501.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.NV12, 801, 501, image.PixelMapFormat.ALPHA_8);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV21_odd_odd_NDK_0100
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_NV21_odd_odd_NDK_0100', 0, async (done: Function) => {
      await getFd('JPG_801501.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.NV21, 801, 501, image.PixelMapFormat.NV12);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV21_odd_odd_NDK_0200
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_NV21_odd_odd_NDK_0200', 0, async (done: Function) => {
      await getFd('JPG_801501.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.NV21, 801, 501, image.PixelMapFormat.RGBA_8888);
      expect(res).assertEqual(0);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV21_odd_odd_NDK_0300
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_NV21_odd_odd_NDK_0300', 0, async (done: Function) => {
      await getFd('JPG_801501.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.NV21, 801, 501, image.PixelMapFormat.BGRA_8888);
      expect(res).assertEqual(0);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV21_odd_odd_NDK_0400
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_NV21_odd_odd_NDK_0400', 0, async (done: Function) => {
      await getFd('JPG_801501.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.NV21, 801, 501, image.PixelMapFormat.RGB_888);
      expect(res).assertEqual(0);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV21_odd_odd_NDK_0500
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_NV21_odd_odd_NDK_0500', 0, async (done: Function) => {
      await getFd('JPG_801501.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.NV21, 801, 501, image.PixelMapFormat.RGB_565);
      expect(res).assertEqual(0);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV21_odd_odd_NDK_0600
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_NV21_odd_odd_NDK_0600', 0, async (done: Function) => {
      await getFd('JPG_801501.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.NV21, 801, 501, image.PixelMapFormat.RGBA_F16);
      expect(res).assertEqual(0);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV21_odd_odd_NDK_0700
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_NV21_odd_odd_NDK_0700', 0, async (done: Function) => {
      await getFd('JPG_801501.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.NV21, 801, 501, image.PixelMapFormat.UNKNOWN);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_NV21_odd_odd_NDK_0800
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_NV21_odd_odd_NDK_0800', 0, async (done: Function) => {
      await getFd('JPG_801501.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.NV21, 801, 501, image.PixelMapFormat.ALPHA_8);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGBA8888_odd_odd_NDK_0100
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGBA8888_odd_odd_NDK_0100', 0, async (done: Function) => {
      await getFd('JPG_801501.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.RGBA_8888, 801, 501, image.PixelMapFormat.NV12);
      expect(res).assertEqual(0);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGBA8888_odd_odd_NDK_0200
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGBA8888_odd_odd_NDK_0200', 0, async (done: Function) => {
      await getFd('JPG_801501.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.RGBA_8888, 801, 501, image.PixelMapFormat.NV21);
      expect(res).assertEqual(0);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGBA8888_odd_odd_NDK_0300
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGBA8888_odd_odd_NDK_0300', 0, async (done: Function) => {
      await getFd('JPG_801501.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.RGBA_8888, 801, 501, image.PixelMapFormat.BGRA_8888);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGBA8888_odd_odd_NDK_0400
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGBA8888_odd_odd_NDK_0400', 0, async (done: Function) => {
      await getFd('JPG_801501.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.RGBA_8888, 801, 501, image.PixelMapFormat.RGB_565);
      expect(res).assertEqual(401);
      done();
    })


    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGBA8888_odd_odd_NDK_0500
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGBA8888_odd_odd_NDK_0500', 0, async (done: Function) => {
      await getFd('JPG_801501.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.RGBA_8888, 801, 501, image.PixelMapFormat.RGB_888);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGBA8888_odd_odd_NDK_0600
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGBA8888_odd_odd_NDK_0600', 0, async (done: Function) => {
      await getFd('JPG_801501.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.RGBA_8888, 801, 501, image.PixelMapFormat.RGBA_F16);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGBA8888_odd_odd_NDK_0700
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGBA8888_odd_odd_NDK_0700', 0, async (done: Function) => {
      await getFd('JPG_801501.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.RGBA_8888, 801, 501, image.PixelMapFormat.UNKNOWN);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGBA8888_odd_odd_NDK_0800
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGBA8888_odd_odd_NDK_0800', 0, async (done: Function) => {
      await getFd('JPG_801501.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.RGBA_8888, 801, 501, image.PixelMapFormat.ALPHA_8);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_BGRA8888_odd_odd_NDK_0100
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_BGRA8888_odd_odd_NDK_0100', 0, async (done: Function) => {
      await getFd('JPG_801501.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.BGRA_8888, 801, 501, image.PixelMapFormat.NV12);
      expect(res).assertEqual(0);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_BGRA8888_odd_odd_NDK_0200
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_BGRA8888_odd_odd_NDK_0200', 0, async (done: Function) => {
      await getFd('JPG_801501.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.BGRA_8888, 801, 501, image.PixelMapFormat.NV21);
      expect(res).assertEqual(0);
      done();
    })


    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_BGRA8888_odd_odd_NDK_0300
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_BGRA8888_odd_odd_NDK_0300', 0, async (done: Function) => {
      await getFd('JPG_801501.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.BGRA_8888, 801, 501, image.PixelMapFormat.RGBA_8888);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_BGRA8888_odd_odd_NDK_0400
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_BGRA8888_odd_odd_NDK_0400', 0, async (done: Function) => {
      await getFd('JPG_801501.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.BGRA_8888, 801, 501, image.PixelMapFormat.RGB_565);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_BGRA8888_odd_odd_NDK_0500
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_BGRA8888_odd_odd_NDK_0500', 0, async (done: Function) => {
      await getFd('JPG_801501.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.BGRA_8888, 801, 501, image.PixelMapFormat.RGB_888);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_BGRA8888_odd_odd_NDK_0600
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_BGRA8888_odd_odd_NDK_0600', 0, async (done: Function) => {
      await getFd('JPG_801501.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.BGRA_8888, 801, 501, image.PixelMapFormat.RGBA_F16);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_BGRA8888_odd_odd_NDK_0700
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_BGRA8888_odd_odd_NDK_0700', 0, async (done: Function) => {
      await getFd('JPG_801501.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.BGRA_8888, 801, 501, image.PixelMapFormat.UNKNOWN);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_BGRA8888_odd_odd_NDK_0800
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_BGRA8888_odd_odd_NDK_0800', 0, async (done: Function) => {
      await getFd('JPG_801501.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.BGRA_8888, 801, 501, image.PixelMapFormat.ALPHA_8);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGB565_odd_odd_NDK_0100
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGB565_odd_odd_NDK_0100', 0, async (done: Function) => {
      await getFd('JPG_801501.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.RGB_565, 801, 501, image.PixelMapFormat.NV12);
      expect(res).assertEqual(0);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGB565_odd_odd_NDK_0200
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGB565_odd_odd_NDK_0200', 0, async (done: Function) => {
      await getFd('JPG_801501.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.RGB_565, 801, 501, image.PixelMapFormat.NV21);
      expect(res).assertEqual(0);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGB565_odd_odd_NDK_0300
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGB565_odd_odd_NDK_0300', 0, async (done: Function) => {
      await getFd('JPG_801501.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.RGB_565, 801, 501, image.PixelMapFormat.RGBA_8888);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGB565_odd_odd_NDK_0400
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGB565_odd_odd_NDK_0400', 0, async (done: Function) => {
      await getFd('JPG_801501.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.RGB_565, 801, 501, image.PixelMapFormat.BGRA_8888);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGB565_odd_odd_NDK_0500
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGB565_odd_odd_NDK_0500', 0, async (done: Function) => {
      await getFd('JPG_801501.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.RGB_565, 801, 501, image.PixelMapFormat.RGB_888);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGB565_odd_odd_NDK_0600
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGB565_odd_odd_NDK_0600', 0, async (done: Function) => {
      await getFd('JPG_801501.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.RGB_565, 801, 501, image.PixelMapFormat.RGBA_F16);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGB565_odd_odd_NDK_0700
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGB565_odd_odd_NDK_0700', 0, async (done: Function) => {
      await getFd('JPG_801501.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.RGB_565, 801, 501, image.PixelMapFormat.UNKNOWN);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGB565_odd_odd_NDK_0800
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGB565_odd_odd_NDK_0800', 0, async (done: Function) => {
      await getFd('JPG_801501.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.RGB_565, 801, 501, image.PixelMapFormat.ALPHA_8);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGB888_odd_odd_NDK_0100
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGB888_odd_odd_NDK_0100', 0, async (done: Function) => {
      await getFd('JPG_801501.jpg');
      const res = testNapi.convertPixelFormatRGB888(fileFd, image.PixelMapFormat.RGB_888, 801, 501, image.PixelMapFormat.NV12);
      expect(res).assertEqual(0);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGB888_odd_odd_NDK_0200
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGB888_odd_odd_NDK_0200', 0, async (done: Function) => {
      await getFd('JPG_801501.jpg');
      const res = testNapi.convertPixelFormatRGB888(fileFd, image.PixelMapFormat.RGB_888, 801, 501, image.PixelMapFormat.NV21);
      expect(res).assertEqual(0);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGB888_odd_odd_NDK_0300
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGB888_odd_odd_NDK_0300', 0, async (done: Function) => {
      await getFd('JPG_801501.jpg');
      const res = testNapi.convertPixelFormatRGB888(fileFd, image.PixelMapFormat.RGB_888, 801, 501, image.PixelMapFormat.RGBA_8888);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGB888_odd_odd_NDK_0400
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGB888_odd_odd_NDK_0400', 0, async (done: Function) => {
      await getFd('JPG_801501.jpg');
      const res = testNapi.convertPixelFormatRGB888(fileFd, image.PixelMapFormat.RGB_888, 801, 501, image.PixelMapFormat.RGB_565);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGB888_odd_odd_NDK_0500
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGB888_odd_odd_NDK_0500', 0, async (done: Function) => {
      await getFd('JPG_801501.jpg');
      const res = testNapi.convertPixelFormatRGB888(fileFd, image.PixelMapFormat.RGB_888, 801, 501, image.PixelMapFormat.BGRA_8888);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGB888_odd_odd_NDK_0600
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGB888_odd_odd_NDK_0600', 0, async (done: Function) => {
      await getFd('JPG_801501.jpg');
      const res = testNapi.convertPixelFormatRGB888(fileFd, image.PixelMapFormat.RGB_888, 801, 501, image.PixelMapFormat.RGBA_F16);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGB888_odd_odd_NDK_0700
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGB888_odd_odd_NDK_0700', 0, async (done: Function) => {
      await getFd('JPG_801501.jpg');
      const res = testNapi.convertPixelFormatRGB888(fileFd, image.PixelMapFormat.RGB_888, 801, 501, image.PixelMapFormat.UNKNOWN);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGB888_odd_odd_NDK_0800
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGB888_odd_odd_NDK_0800', 0, async (done: Function) => {
      await getFd('JPG_801501.jpg');
      const res = testNapi.convertPixelFormatRGB888(fileFd, image.PixelMapFormat.RGB_888, 801, 501, image.PixelMapFormat.ALPHA_8);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGBAF16_odd_odd_NDK_0100
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGBAF16_odd_odd_NDK_0200', 0, async (done: Function) => {
      await getFd('JPG_801501.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.RGBA_F16, 801, 501, image.PixelMapFormat.NV12);
      expect(res).assertEqual(0);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGBAF16_odd_odd_NDK_0200
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGBAF16_odd_odd_NDK_0200', 0, async (done: Function) => {
      await getFd('JPG_801501.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.RGBA_F16, 801, 501, image.PixelMapFormat.NV21);
      expect(res).assertEqual(0);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGBAF16_odd_odd_NDK_0300
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGBAF16_odd_odd_NDK_0300', 0, async (done: Function) => {
      await getFd('JPG_801501.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.RGBA_F16, 801, 501, image.PixelMapFormat.RGBA_8888);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGBAF16_odd_odd_NDK_0400
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGBAF16_odd_odd_NDK_0400', 0, async (done: Function) => {
      await getFd('JPG_801501.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.RGBA_F16, 801, 501, image.PixelMapFormat.RGB_888);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGBAF16_odd_odd_NDK_0500
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGBAF16_odd_odd_NDK_0500', 0, async (done: Function) => {
      await getFd('JPG_801501.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.RGBA_F16, 801, 501, image.PixelMapFormat.BGRA_8888);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGBAF16_odd_odd_NDK_0600
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGBAF16_odd_odd_NDK_0600', 0, async (done: Function) => {
      await getFd('JPG_801501.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.RGBA_F16, 801, 501, image.PixelMapFormat.RGB_888);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGBAF16_odd_odd_NDK_0700
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGBAF16_odd_odd_NDK_0700', 0, async (done: Function) => {
      await getFd('JPG_801501.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.RGBA_F16, 801, 501, image.PixelMapFormat.UNKNOWN);
      expect(res).assertEqual(401);
      done();
    })

    /*
  * @tc.number    : SUB_MULTIMEDIA_IMAGE_RGBAF16_odd_odd_NDK_0800
  * @tc.name      : convertPixelFormat
  * @tc.desc      : 1.getFd 2.convertPixelFormat
  * @tc.size      : MediumTest
  * @tc.type      : Interface
  * @tc.level     : Level 2
  */
    it('SUB_MULTIMEDIA_IMAGE_RGBAF16_odd_odd_NDK_0800', 0, async (done: Function) => {
      await getFd('JPG_801501.jpg');
      const res = testNapi.convertPixelFormat(fileFd, image.PixelMapFormat.RGBA_F16, 801, 501, image.PixelMapFormat.ALPHA_8);
      expect(res).assertEqual(401);
      done();
    })
  })
}