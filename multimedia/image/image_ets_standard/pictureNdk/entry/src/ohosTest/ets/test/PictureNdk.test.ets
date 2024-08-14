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

import { describe, afterAll, it, expect } from '@ohos/hypium';
import ndkTest from 'libPictureNdk.so';
import image from "@ohos.multimedia.image";
import fs from '@ohos.file.fs';
import hilog from '@ohos.hilog';

const domain = 0x0000;
const testTag = 'pictureNdkTest';
const testFileHeic = 'hdr.heic';
const testFileJpg = 'hdr.jpg';
const imageFormatJpeg = 'image/jpeg';
const imageFormatHeif = 'image/heif';
const imageLengthKey = 'ImageLength';
const imageWidthKey = 'ImageWidth';
const imageLengthValue = '15';
const imageWidthValue = '20';

function getFilePath(fileName: string): string {
  let filePath = AppStorage.get('pathDir') + "/" + fileName;
  return filePath;
}

function getCachePath(fileName: string): string {
  let filePath = AppStorage.get('cacheDir') + "/" + fileName;
  return filePath;
}

function compareArray(array1: Array<number>, array2: Array<number>): boolean {
  if (array1.length != array2.length) {
    return false;
  }

  for (let i = 0; i < array1.length; i++) {
    if (array1[i] != array2[i]) {
      return false;
    }
  }
  return true;
}

function compareArrayBuffer(buffer1: ArrayBuffer, buffer2: ArrayBuffer): boolean {
  if (buffer1.byteLength != buffer2.byteLength) {
    return false;
  }

  let view1 = new Uint8Array(buffer1);
  let view2 = new Uint8Array(buffer2);
  for (let i = 0; i < view1.length; i++) {
    if (view1[i] != view2[i]) {
      return false;
    }
  }
  return true;
}

function createDefaultExifMetadata(): image.Metadata {
  let metadata: image.Metadata = ndkTest.MetadataCreate(image.MetadataType.EXIF_METADATA);
  ndkTest.MetadataSetProperty(imageLengthKey, imageLengthValue);
  ndkTest.MetadataSetProperty(imageWidthKey, imageWidthValue);
  return metadata;
}

function createFillBuffer(size: number, value: number): ArrayBuffer {
  let buffer = new ArrayBuffer(size);
  let view = new Uint8Array(buffer);
  view.fill(value);
  return buffer;
}

async function sleep(delay: number): Promise<void> {
  return new Promise((resolve, _) => {
    setTimeout(async () => {
      resolve();
    }, delay);
  });
};

export default function pictureNdkTest() {
  describe('pictureNdkTest', () => {
    afterAll(() => {
      try {
        ndkTest.releaseTestContext();
      } catch (err) {
        hilog.error(domain, testTag, `afterAll: Test exception ` + err);
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_ImageSource_0100
     * @tc.name      : testImageSourceCreatePictureDecodingOptions
     * @tc.desc      : Test create default picture decoding options
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_ImageSource_0100', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_ImageSource_0100 begin`);
      try {
        expect(ndkTest.CreatePictureDecodingOptions()).assertEqual(0);
        done();
      } catch (err) {
        hilog.error(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_ImageSource_0100: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_ImageSource_0200
     * @tc.name      : testImageSourceCreatePicture
     * @tc.desc      : Test create default picture by ImageSource
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_ImageSource_0200', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_ImageSource_0200 begin`);
      try {
        let filePath = getFilePath(testFileJpg);
        hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_ImageSource_0200: image filePath ` + filePath);
        ndkTest.createTestImageSource(filePath);
        ndkTest.CreatePictureDecodingOptions();

        expect(ndkTest.CreatePictureByImageSource()).assertEqual(0);
        done();
      } catch (err) {
        hilog.error(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_ImageSource_0200: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_ImageSource_0300
     * @tc.name      : testImageSourceSetDesiredAuxiliaryPictures
     * @tc.desc      : Test set desired auxiliary pictures to decoding options
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_ImageSource_0300', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_ImageSource_0300 begin`);
      try {
        ndkTest.CreatePictureDecodingOptions();
        let inAuxTpyes: Array<image.AuxiliaryPictureType> = [image.AuxiliaryPictureType.GAINMAP];

        expect(ndkTest.SetDesiredAuxiliaryPictures(inAuxTpyes.length, inAuxTpyes)).assertEqual(0);
        done();
      } catch (err) {
        hilog.error(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_ImageSource_0300: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_ImageSource_0400
     * @tc.name      : testImageSourceGetDesiredAuxiliaryPictures
     * @tc.desc      : Test get desired auxiliary pictures from decoding options
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_ImageSource_0400', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_ImageSource_0400 begin`);
      try {
        ndkTest.CreatePictureDecodingOptions();
        let inAuxTpyes: Array<image.AuxiliaryPictureType> = [image.AuxiliaryPictureType.GAINMAP];
        ndkTest.SetDesiredAuxiliaryPictures(inAuxTpyes.length, inAuxTpyes);

        let outAuxTpyes: Array<image.AuxiliaryPictureType> = ndkTest.GetDesiredAuxiliaryPictures();
        expect(compareArray(inAuxTpyes, outAuxTpyes)).assertTrue();
        done();
      } catch (err) {
        hilog.error(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_ImageSource_0400: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_ImageSource_0500
     * @tc.name      : testImageSourceReleasePictureDecodingOptions
     * @tc.desc      : Test release picture decoding options
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_ImageSource_0500', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_ImageSource_0500 begin`);
      try {
        ndkTest.CreatePictureDecodingOptions();
        let inAuxTpyes: Array<image.AuxiliaryPictureType> = [image.AuxiliaryPictureType.GAINMAP];
        ndkTest.SetDesiredAuxiliaryPictures(inAuxTpyes.length, inAuxTpyes);

        expect(ndkTest.ReleasePictureDecodingOptions()).assertEqual(0);
        done();
      } catch (err) {
        hilog.error(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_ImageSource_0500: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_Metadata_0100
     * @tc.name      : testMetadataCreate
     * @tc.desc      : Test create exif metadata
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_Metadata_0100', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_Metadata_0100 begin`);
      try {
        expect(ndkTest.MetadataCreate(image.MetadataType.EXIF_METADATA) != undefined).assertTrue();
        done();
      } catch (err) {
        hilog.error(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_Metadata_0100: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_Metadata_0200
     * @tc.name      : testMetadataSetProperty
     * @tc.desc      : Test set ptoperty to metadata
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_Metadata_0200', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_Metadata_0200 begin`);
      try {
        ndkTest.MetadataCreate(image.MetadataType.EXIF_METADATA);

        expect(ndkTest.MetadataSetProperty(imageLengthKey, imageLengthValue)).assertEqual(0);
        expect(ndkTest.MetadataSetProperty(imageWidthKey, imageWidthValue)).assertEqual(0);
        done();
      } catch (err) {
        hilog.error(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_Metadata_0200: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_Metadata_0300
     * @tc.name      : testMetadataGetProperty
     * @tc.desc      : Test get ptoperty from metadata
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_Metadata_0300', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_Metadata_0300 begin`);
      try {
        createDefaultExifMetadata();

        expect(ndkTest.MetadataGetProperty(imageLengthKey)).assertEqual(imageLengthValue);
        expect(ndkTest.MetadataGetProperty(imageWidthKey)).assertEqual(imageWidthValue);
        done();
      } catch (err) {
        hilog.error(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_Metadata_0300: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_Metadata_0400
     * @tc.name      : testMetadataClone
     * @tc.desc      : Test clone metadata
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_Metadata_0400', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_Metadata_0400 begin`);
      try {
        createDefaultExifMetadata();
        expect(ndkTest.MetadataClone() != undefined).assertTrue();
        expect(ndkTest.clonedMetadataGetProperty(imageLengthKey))
          .assertEqual(ndkTest.MetadataGetProperty(imageLengthKey));
        expect(ndkTest.clonedMetadataGetProperty(imageWidthKey))
          .assertEqual( ndkTest.MetadataGetProperty(imageWidthKey));
        done();
      } catch (err) {
        hilog.error(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_Metadata_0400: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_Metadata_0500
     * @tc.name      : testMetadataRelease
     * @tc.desc      : Test release metadata
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_Metadata_0500', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_Metadata_0500 begin`);
      try {
        createDefaultExifMetadata();

        expect(ndkTest.MetadataRelease()).assertEqual(0);
        done();
      } catch (err) {
        hilog.error(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_Metadata_0500: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_Picture_0100
     * @tc.name      : testPictureCreatePictureByPixelmap
     * @tc.desc      : Test create picture from pixelmap
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_Picture_0100', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_Picture_0100 begin`);
      try {
        let filePath = getFilePath(testFileJpg);
        hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_Picture_0100: image filePath ` + filePath);
        ndkTest.createTestImageSource(filePath);
        ndkTest.createTestPixelmapByImageSource(image.PixelMapFormat.RGBA_8888);

        expect(ndkTest.CreatePictureByPixelmap()).assertEqual(0);
        done();
      } catch (err) {
        hilog.error(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_Picture_0100: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_Picture_0200
     * @tc.name      : testPictureGetMainPixelmap
     * @tc.desc      : Test get main pixelmap from picture
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_Picture_0200', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_Picture_0200 begin`);
      try {
        let filePath = getFilePath(testFileJpg);
        hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_Picture_0100: image filePath ` + filePath);
        ndkTest.createTestImageSource(filePath);
        ndkTest.createTestPixelmapByImageSource(image.PixelMapFormat.RGBA_8888);
        ndkTest.CreatePictureByPixelmap();

        expect(ndkTest.GetMainPixelmap() != undefined).assertTrue();
        done();
      } catch (err) {
        hilog.error(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_Picture_0200: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_Picture_0300
     * @tc.name      : testPictureSetMetadata
     * @tc.desc      : Test set metadata to picture
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_Picture_0300', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_Picture_0300 begin`);
      try {
        let filePath = getFilePath(testFileJpg);
        hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_Picture_0300: image filePath ` + filePath);
        ndkTest.createTestImageSource(filePath);
        ndkTest.createTestPixelmapByImageSource(image.PixelMapFormat.RGBA_8888);
        ndkTest.CreatePictureByPixelmap();

        let inMetadata: image.Metadata = createDefaultExifMetadata();
        expect(inMetadata != undefined).assertTrue();
        expect(ndkTest.PictureSetMetadata(image.MetadataType.EXIF_METADATA, inMetadata)).assertEqual(0);
        done();
      } catch (err) {
        hilog.error(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_Picture_0300: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_Picture_0400
     * @tc.name      : testPictureGetMetadata
     * @tc.desc      : Test get metadata from picture
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_Picture_0400', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_Picture_0400 begin`);
      try {
        let filePath = getFilePath(testFileJpg);
        hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_Picture_0400: image filePath ` + filePath);
        ndkTest.createTestImageSource(filePath);
        ndkTest.createTestPixelmapByImageSource(image.PixelMapFormat.RGBA_8888);
        ndkTest.CreatePictureByPixelmap();

        let exifType: image.MetadataType = image.MetadataType.EXIF_METADATA;
        let inMetadata: image.Metadata = createDefaultExifMetadata();
        expect(inMetadata != undefined).assertTrue();
        ndkTest.PictureSetMetadata(exifType, inMetadata);

        expect(ndkTest.PictureGetMetadata(exifType) != undefined).assertTrue();
        expect(ndkTest.pictureMetadataGetProperty(exifType, imageLengthKey)).assertEqual(imageLengthValue);
        expect(ndkTest.pictureMetadataGetProperty(exifType, imageWidthKey)).assertEqual(imageWidthValue);
        done();
      } catch (err) {
        hilog.error(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_Picture_0400: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_Picture_0500
     * @tc.name      : testPictureSetAuxiliaryPicture
     * @tc.desc      : Test set auxiliary picture to picture
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_Picture_0500', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_Picture_0500 begin`);
      try {
        let filePath = getFilePath(testFileJpg);
        hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_Picture_0500: image filePath ` + filePath);
        ndkTest.createTestImageSource(filePath);
        ndkTest.createTestPixelmapByImageSource(image.PixelMapFormat.RGBA_8888);
        ndkTest.CreatePictureByPixelmap();

        let gainmapType: image.AuxiliaryPictureType = image.AuxiliaryPictureType.GAINMAP;
        let auxSize: image.Size = {height: 15, width: 20};
        let auxBuffer = createFillBuffer(1200, 128);
        let auxPicture: image.AuxiliaryPicture =
          ndkTest.CreateAuxiliaryPicture(auxBuffer, auxSize, gainmapType);

        expect(ndkTest.SetAuxiliaryPicture(gainmapType, auxPicture)).assertEqual(0);
        done();
      } catch (err) {
        hilog.error(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_Picture_0500: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_Picture_0600
     * @tc.name      : testPictureGetAuxiliaryPicture
     * @tc.desc      : Test get auxiliary picture from picture
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_Picture_0600', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_Picture_0600 begin`);
      try {
        let filePath = getFilePath(testFileJpg);
        hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_Picture_0600: image filePath ` + filePath);
        ndkTest.createTestImageSource(filePath);
        ndkTest.createTestPixelmapByImageSource(image.PixelMapFormat.RGBA_8888);
        ndkTest.CreatePictureByPixelmap();

        let gainmapType: image.AuxiliaryPictureType = image.AuxiliaryPictureType.GAINMAP;
        let auxSize: image.Size = {height: 15, width: 20};
        let auxBuffer = createFillBuffer(1200, 128);
        let auxPicture: image.AuxiliaryPicture =
          ndkTest.CreateAuxiliaryPicture(auxBuffer, auxSize, gainmapType);
        ndkTest.SetAuxiliaryPicture(gainmapType, auxPicture);

        expect(ndkTest.GetAuxiliaryPicture(gainmapType) != undefined).assertTrue();
        done();
      } catch (err) {
        hilog.error(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_Picture_0600: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_Picture_0700
     * @tc.name      : testPictureGetGainmapPixelmap
     * @tc.desc      : Test get gainmap pixelmap from picture
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_Picture_0700', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_Picture_0700 begin`);
      try {
        let filePath = getFilePath(testFileJpg);
        hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_Picture_0700: image filePath ` + filePath);
        ndkTest.createTestImageSource(filePath);
        ndkTest.CreatePictureDecodingOptions();
        ndkTest.CreatePictureByImageSource();

        expect(ndkTest.GetGainmapPixelmap() != undefined).assertTrue();
        done();
      } catch (err) {
        hilog.error(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_Picture_0700: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_Picture_0800
     * @tc.name      : testPictureGetHdrComposedPixelmap
     * @tc.desc      : Test get hdr composed pixelmap from picture
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_Picture_0800', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_Picture_0800 begin`);
      try {
        let filePath = getFilePath(testFileHeic);
        hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_Picture_0800: image filePath ` + filePath);
        ndkTest.createTestImageSource(filePath);
        ndkTest.CreatePictureDecodingOptions();
        ndkTest.CreatePictureByImageSource();

        expect(ndkTest.GetHdrComposedPixelmap() != undefined).assertTrue();
        done();
      } catch (err) {
        hilog.error(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_Picture_0800: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_Picture_0900
     * @tc.name      : testPictureReleasePicture
     * @tc.desc      : Test release picture
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_Picture_0900', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_Picture_0900 begin`);
      try {
        let filePath = getFilePath(testFileJpg);
        hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_Picture_0900: image filePath ` + filePath);
        ndkTest.createTestImageSource(filePath);
        ndkTest.createTestPixelmapByImageSource(image.PixelMapFormat.RGBA_8888);
        ndkTest.CreatePictureByPixelmap();

        expect(ndkTest.ReleasePicture()).assertEqual(0);
        done();
      } catch (err) {
        hilog.error(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_Picture_0900: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_0100
     * @tc.name      : testAuxiliaryPictureCreateAuxiliaryPicture
     * @tc.desc      : Test create auxiliary picture
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_0100', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_0100 begin`);
      try {
        let auxSize: image.Size = {height: 15, width: 20};
        let buffer = createFillBuffer(1200, 128);

        let auxPicture: image.AuxiliaryPicture =
          ndkTest.CreateAuxiliaryPicture(buffer, auxSize, image.AuxiliaryPictureType.GAINMAP);
        expect(auxPicture != undefined).assertTrue();
        done();
      } catch (err) {
        hilog.error(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_0100: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_0200
     * @tc.name      : testAuxiliaryPictureWritePixels
     * @tc.desc      : Test write pixels to auxiliary picture
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_0200', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_0200 begin`);
      try {
        let auxSize: image.Size = {height: 15, width: 20};
        let buffer = createFillBuffer(1200, 128);
        ndkTest.CreateAuxiliaryPicture(buffer, auxSize, image.AuxiliaryPictureType.GAINMAP);

        expect(ndkTest.AuxiliaryPictureWritePixels(buffer)).assertEqual(0);
        done();
      } catch (err) {
        hilog.error(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_0200: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_0300
     * @tc.name      : testAuxiliaryPictureReadPixels
     * @tc.desc      : Test read pixels from auxiliary picture
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_0300', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_0300 begin`);
      try {
        let auxSize: image.Size = {height: 15, width: 20};
        let buffer = createFillBuffer(1200, 128);
        ndkTest.CreateAuxiliaryPicture(buffer, auxSize, image.AuxiliaryPictureType.GAINMAP);

        let readBuffer: ArrayBuffer = new ArrayBuffer(1200);
        expect(ndkTest.AuxiliaryPictureReadPixels(readBuffer)).assertEqual(0);
        expect(compareArrayBuffer(readBuffer, buffer)).assertTrue();
        done();
      } catch (err) {
        hilog.error(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_0300: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_0400
     * @tc.name      : testAuxiliaryPictureSetInfo
     * @tc.desc      : Test set info to auxiliary picture
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_0400', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_0400 begin`);
      try {
        let auxSize: image.Size = {height: 15, width: 20};
        let buffer = createFillBuffer(1200, 128);
        ndkTest.CreateAuxiliaryPicture(buffer, auxSize, image.AuxiliaryPictureType.GAINMAP);

        let auxInfo: ndkTest.IAuxInfo = {
          auxiliaryPictureType: image.AuxiliaryPictureType.GAINMAP,
          width: 10,
          height: 20,
          rowStride: 30,
          pixelFormat: image.PixelMapFormat.RGBA_8888
        };
        expect(ndkTest.AuxiliaryPictureSetInfo(auxInfo)).assertEqual(0);
        done();
      } catch (err) {
        hilog.error(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_0400: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_0500
     * @tc.name      : testAuxiliaryPictureGetInfo
     * @tc.desc      : Test get info from auxiliary picture
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_0500', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_0500 begin`);
      try {
        let auxSize: image.Size = {height: 15, width: 20};
        let buffer = createFillBuffer(1200, 128);
        ndkTest.CreateAuxiliaryPicture(buffer, auxSize, image.AuxiliaryPictureType.GAINMAP);

        let auxInfo: ndkTest.IAuxInfo = {
          auxiliaryPictureType: image.AuxiliaryPictureType.GAINMAP,
          width: 10,
          height: 20,
          rowStride: 30,
          pixelFormat: image.PixelMapFormat.RGBA_8888
        };
        ndkTest.AuxiliaryPictureSetInfo(auxInfo);

        expect(ndkTest.AuxiliaryPictureGetInfo().auxiliaryPictureType).assertEqual(auxInfo.auxiliaryPictureType);
        expect(ndkTest.AuxiliaryPictureGetInfo().width).assertEqual(auxInfo.width);
        expect(ndkTest.AuxiliaryPictureGetInfo().height).assertEqual(auxInfo.height);
        expect(ndkTest.AuxiliaryPictureGetInfo().rowStride).assertEqual(auxInfo.rowStride);
        expect(ndkTest.AuxiliaryPictureGetInfo().pixelFormat).assertEqual(auxInfo.pixelFormat);
        done();
      } catch (err) {
        hilog.error(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_0500: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_0600
     * @tc.name      : testAuxiliaryPictureSetMetadata
     * @tc.desc      : Test set metadata to auxiliary picture
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_0600', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_0600 begin`);
      try {
        let auxSize: image.Size = {height: 15, width: 20};
        let buffer = createFillBuffer(1200, 128);
        ndkTest.CreateAuxiliaryPicture(buffer, auxSize, image.AuxiliaryPictureType.GAINMAP);

        let inMetadata: image.Metadata = createDefaultExifMetadata();
        expect(inMetadata != undefined).assertTrue();
        expect(ndkTest.AuxiliaryPictureSetMetadata(image.MetadataType.EXIF_METADATA, inMetadata)).assertEqual(0);
        done();
      } catch (err) {
        hilog.error(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_0600: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_0700
     * @tc.name      : testAuxiliaryPictureGetMetadata
     * @tc.desc      : Test get metadata from auxiliary picture
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_0700', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_0700 begin`);
      try {
        let auxSize: image.Size = {height: 15, width: 20};
        let buffer = createFillBuffer(1200, 128);
        ndkTest.CreateAuxiliaryPicture(buffer, auxSize, image.AuxiliaryPictureType.GAINMAP);

        let exifType: image.MetadataType = image.MetadataType.EXIF_METADATA;
        let inMetadata: image.Metadata = createDefaultExifMetadata();
        expect(inMetadata != undefined).assertTrue();
        ndkTest.AuxiliaryPictureSetMetadata(exifType, inMetadata);

        expect(ndkTest.AuxiliaryPictureGetMetadata(exifType) != undefined).assertTrue();
        expect(ndkTest.auxiliaryMetadataGetProperty(exifType, imageLengthKey)).assertEqual(imageLengthValue);
        expect(ndkTest.auxiliaryMetadataGetProperty(exifType, imageWidthKey)).assertEqual(imageWidthValue);
        done();
      } catch (err) {
        hilog.error(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_0700: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_0800
     * @tc.name      : testAuxiliaryPictureGetType
     * @tc.desc      : Test get auxiliary picture type
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_0800', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_0800 begin`);
      try {
        let auxSize: image.Size = {height: 15, width: 20};
        let buffer = createFillBuffer(1200, 128);
        ndkTest.CreateAuxiliaryPicture(buffer, auxSize, image.AuxiliaryPictureType.GAINMAP);

        expect(ndkTest.AuxiliaryPictureGetType()).assertEqual(image.AuxiliaryPictureType.GAINMAP);
        done();
      } catch (err) {
        hilog.error(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_0800: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_0900
     * @tc.name      : testAuxiliaryPictureRelease
     * @tc.desc      : Test release auxiliary picture
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_0900', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_0900 begin`);
      try {
        let auxSize: image.Size = {height: 15, width: 20};
        let buffer = createFillBuffer(1200, 128);
        ndkTest.CreateAuxiliaryPicture(buffer, auxSize, image.AuxiliaryPictureType.GAINMAP);

        expect(ndkTest.ReleaseAuxiliaryPicture()).assertEqual(0);
        done();
      } catch (err) {
        hilog.error(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_0900: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_0100
     * @tc.name      : testAuxiliaryPictureInfoCrerate
     * @tc.desc      : Test create auxiliary picture info
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_0100', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_0100 begin`);
      try {
        expect(ndkTest.CreateAuxiliaryPictureInfo() != undefined).assertTrue();
        done();
      } catch (err) {
        hilog.error(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_0100: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_0200
     * @tc.name      : testAuxiliaryPictureInfoSetType
     * @tc.desc      : Test set type to auxiliary picture info
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_0200', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_0200 begin`);
      try {
        ndkTest.CreateAuxiliaryPictureInfo();

        let auxType: image.AuxiliaryPictureType = image.AuxiliaryPictureType.GAINMAP;
        expect(ndkTest.AuxiliaryPictureInfoSetType(auxType)).assertEqual(0);
        done();
      } catch (err) {
        hilog.error(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_0200: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_0300
     * @tc.name      : testAuxiliaryPictureInfoGetType
     * @tc.desc      : Test get type from auxiliary picture info
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_0300', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_0300 begin`);
      try {
        ndkTest.CreateAuxiliaryPictureInfo();
        let auxType: image.AuxiliaryPictureType = image.AuxiliaryPictureType.GAINMAP;
        expect(ndkTest.AuxiliaryPictureInfoSetType(auxType)).assertEqual(0);

        expect(ndkTest.AuxiliaryPictureInfoGetType()).assertEqual(auxType);
        done();
      } catch (err) {
        hilog.error(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_0300: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_0400
     * @tc.name      : testAuxiliaryPictureInfoSetSize
     * @tc.desc      : Test set size to auxiliary picture info
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_0400', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_0400 begin`);
      try {
        ndkTest.CreateAuxiliaryPictureInfo();

        let size: image.Size = {height: 15, width: 20};
        expect(ndkTest.AuxiliaryPictureInfoSetSize(size)).assertEqual(0);
        done();
      } catch (err) {
        hilog.error(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_0400: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_0500
     * @tc.name      : testAuxiliaryPictureInfoGetSize
     * @tc.desc      : Test get size from auxiliary picture info
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_0500', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_0500 begin`);
      try {
        ndkTest.CreateAuxiliaryPictureInfo();
        let inSize: image.Size = {height: 15, width: 20};
        ndkTest.AuxiliaryPictureInfoSetSize(inSize);

        let outSize: image.Size = ndkTest.AuxiliaryPictureInfoGetSize();
        expect(outSize.width).assertEqual(inSize.width);
        expect(outSize.height).assertEqual(inSize.height);
        done();
      } catch (err) {
        hilog.error(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_0500: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_0600
     * @tc.name      : testAuxiliaryPictureInfoSetRowStride
     * @tc.desc      : Test set rowStride to auxiliary picture info
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_0600', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_0600 begin`);
      try {
        ndkTest.CreateAuxiliaryPictureInfo();

        let rowStride = 40;
        expect(ndkTest.AuxiliaryPictureInfoSetRowStride(rowStride)).assertEqual(0);
        done();
      } catch (err) {
        hilog.error(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_0600: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_0700
     * @tc.name      : testAuxiliaryPictureInfoGetRowStride
     * @tc.desc      : Test get rowStride from auxiliary picture info
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_0700', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_0700 begin`);
      try {
        ndkTest.CreateAuxiliaryPictureInfo();
        let rowStride = 40;
        expect(ndkTest.AuxiliaryPictureInfoSetRowStride(rowStride)).assertEqual(0);

        expect(ndkTest.AuxiliaryPictureInfoGetRowStride()).assertEqual(rowStride);
        done();
      } catch (err) {
        hilog.error(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_0700: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_0800
     * @tc.name      : testAuxiliaryPictureInfoSetPixelFormat
     * @tc.desc      : Test set pixelFormat to auxiliary picture info
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_0800', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_0800 begin`);
      try {
        ndkTest.CreateAuxiliaryPictureInfo();

        let pixelFormat: image.PixelMapFormat = image.PixelMapFormat.RGBA_8888;
        expect(ndkTest.AuxiliaryPictureInfoSetPixelFormat(pixelFormat)).assertEqual(0);
        done();
      } catch (err) {
        hilog.error(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_0800: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_0900
     * @tc.name      : testAuxiliaryPictureInfoGetPixelFormat
     * @tc.desc      : Test get pixelFormat from auxiliary picture info
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_0900', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_0900 begin`);
      try {
        ndkTest.CreateAuxiliaryPictureInfo();
        let pixelFormat: image.PixelMapFormat = image.PixelMapFormat.RGBA_8888;
        expect(ndkTest.AuxiliaryPictureInfoSetPixelFormat(pixelFormat)).assertEqual(0);

        expect(ndkTest.AuxiliaryPictureInfoGetPixelFormat()).assertEqual(pixelFormat);
        done();
      } catch (err) {
        hilog.error(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_0900: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_1000
     * @tc.name      : testAuxiliaryPictureInfoRelease
     * @tc.desc      : Test release auxiliary picture info
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_1000', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_1000 begin`);
      try {
        ndkTest.CreateAuxiliaryPictureInfo();

        expect(ndkTest.ReleaseAuxiliaryPictureInfo()).assertEqual(0);
        done();
      } catch (err) {
        hilog.error(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_1000: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_PackPicture_0100
     * @tc.name      : testPackToDataFromPicture
     * @tc.desc      : Test pack data to ArrayBuffer from picture
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_PackPicture_0100', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_PackPicture_0100 begin`);
      try {
        let filePath = getFilePath(testFileJpg);
        ndkTest.createTestImageSource(filePath);
        ndkTest.createTestPixelmapByImageSource(image.PixelMapFormat.NV21);
        ndkTest.CreatePictureByPixelmap();
        ndkTest.createTestImagePacker();
        ndkTest.createTestPackingOptions();
        ndkTest.setDynamicRangeToTestPackingOptions(1);
        ndkTest.setMimeTypeToTestPackingOptions(imageFormatJpeg);

        let size = 3840 * 2160 * 4;
        let buffer = new ArrayBuffer(size);
        expect(ndkTest.PackToDataFromPicture(buffer)).assertEqual(0);
        done();
      } catch (err) {
        hilog.error(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_PackPicture_0100: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_PackPicture_0200
     * @tc.name      : testPackToFileFromPicture
     * @tc.desc      : Test pack data to file from picture
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_PackPicture_0200', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_PackPicture_0200 begin`);
      try {
        let filePath = getFilePath(testFileHeic);
        hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_PackPicture_0200: image filePath ` + filePath);
        ndkTest.createTestImageSource(filePath);
        ndkTest.createTestPixelmapByImageSource(image.PixelMapFormat.NV21);
        ndkTest.CreatePictureByPixelmap();
        ndkTest.createTestImagePacker();
        ndkTest.createTestPackingOptions();
        ndkTest.setDynamicRangeToTestPackingOptions(1);
        ndkTest.setMimeTypeToTestPackingOptions(imageFormatHeif);

        let writeFile = getCachePath("pack_native_picture.jpg");
        hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_PackPicture_0200: write image filePath ` + writeFile);
        let file = fs.openSync(writeFile, fs.OpenMode.READ_WRITE | fs.OpenMode.CREATE);
        expect(ndkTest.PackToFileFromPicture(file.fd)).assertEqual(0);
        fs.closeSync(file.fd);
        done();
      } catch (err) {
        hilog.error(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_PackPicture_0200: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })
  })
}
