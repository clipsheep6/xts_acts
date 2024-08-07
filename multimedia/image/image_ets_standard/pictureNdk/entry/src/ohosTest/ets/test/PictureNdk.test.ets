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

import { describe, afterEach, it, expect } from '@ohos/hypium';
import ndkTest from 'libPictureNdk.so';
import image from "@ohos.multimedia.image";
import fs from '@ohos.file.fs';
import hilog from '@ohos.hilog';

const domain = 0x0000;
const testTag = 'pictureNdkTest';
const testFileJpg = 'JPEGISOSingle.jpg';
const testFileHeic = 'HEIFISOMultiChannelBaseColor0512V12.heic';
const testNoAuxiliaryPictureJpg = 'test.jpg';
const testFileWithFiveAuxiliaryPictureJpg = 'AllAuxiliaryPictures_exclude_fragment.jpg';
const testFileWithFiveAuxiliaryPictureHeic = 'AllAuxiliaryPictures_exclude_fragment.heic';
const testFileUnrefocusHeic = "IMG_825866834_004.heic";
const testFileFragmentHeic = 'HeicFragmentMap.heic';
const testFileFragmentJpg = 'JpegFragmentMap.jpg';

const testFileGainMap = 'GainMap.dat';
const testFileUnrefocus = 'UnrefocusMap.dat';
const testFileDepth = 'DepthMap.dat';
const testFileLinear = 'LinearMap.dat';
const testFileFragment = 'FragmentMap.dat';
const testFileGainMapSize: image.Size = { height: 960, width: 720 };
const testFileUnrefocusSize: image.Size = { height: 4096, width: 3072 };
const testFileDepthSize: image.Size = { height: 4096, width: 3072 };
const testFileLinearSize: image.Size = { height: 4096, width: 3072 };
const testFileFragmentSize: image.Size = { height: 4096, width: 3072 };

const imageFormatPng = 'image/png';
const imageFormatJpeg = 'image/jpeg';
const imageFormatHeif = 'image/heif';

const imageWidthKey = 'ImageWidth';
const imageLengthKey = 'ImageLength';
const imageWidthValue = '20';
const imageHeightValue = "512";
const imageLengthValue = '15';
const fragmentImageWidthKey = 'WIDTH';
const fragmentImageHeightKey = 'HEIGHT';
const fragmentImageWidthValue = '512';
const fragmentImageHeightValue = '512';
const xInOriginalKey = "X_IN_ORIGINAL";
const yInOriginalKey = "Y_IN_ORIGINAL";
const xInOriginalValue = '0';
const yInOriginalValue = '0';
const orientationKey = 'Orientation';
const orientationValue = '1';

const imageWidthKeyErr ="ImageWidthErr";
const imageHeightKeyErr ="ImageHeightErr";
const imageLengthKeyErr = 'ImageLengthErr';
const imageWidthValueErr = "-1";
const imageHeightValueErr = "-1";
const fragmentImageWidthKeyErr = "FragmentImageWidthErr";
const fragmentImageHeightKeyErr = "FragmentImageHeightErr";
const fragmentImageWidthValueErr = "-1";
const fragmentImageHeightValueErr = "-1";
const xInOriginalKeyErr = "XInOriginalErr";
const yInOriginalKeyErr = "YInOriginalErr";
const xInOriginalValueErr = "-1";
const yInOriginalValueErr = "-1";
const orientationKeyErr = "OrientationErr";
const orientationValueErr = "-1";

enum ErrorCode {
  /** operation success */
  IMAGE_SUCCESS = 0,
  /** invalid parameter */
  IMAGE_BAD_PARAMETER = 401,
  /** unsupported metadata */
  IMAGE_UNSUPPORTED_METADATA = 7600202,
  /** encode failed */
  IMAGE_ENCODE_FAILED = 7800301,
};

interface ExifInfo {
  key: string,
  value: string
}

const metadataDefaultAllKey: Array<ExifInfo> = [
  {key: "ApertureValue", value: "2.00 EV (f/2.0)"},
  {key: "BitsPerSample", value: "8, 8, 8"},
  {key: "BrightnessValue", value: "-2.00 EV (0.86 cd/m^2)"},
  {key: "ColorSpace", value: "Uncalibrated"},
  {key: "ComponentsConfiguration", value: "Y Cb Cr -"},
  {key: "Contrast", value: "Normal"},
  {key: "CustomRendered", value: "Custom process"},
  {key: "DateTimeDigitized", value: "2024:01:11 09:39:58"},
  {key: "DateTimeOriginal", value: "2024:01:11 09:39:58"},
  {key: "ExposureBiasValue", value: "0.00 EV"},
  {key: "ExposureMode", value: "Auto exposure"},
  {key: "ExposureProgram", value: "Normal program"},
  {key: "ExposureTime", value: "1/590 sec."},
  {key: "FNumber", value: "f/2.0"},
  {key: "FileSource", value: "DSC"},
  {key: "Flash", value: "Flash did not fire"},
  {key: "FlashpixVersion", value: "FlashPix Version 1.0"},
  {key: "FocalLength", value: "6.3 mm"},
  {key: "FocalLengthIn35mmFilm", value: "27"},
  {key: "GPSAltitude", value: "0.00"},
  {key: "GPSAltitudeRef", value: "Sea level reference"},
  {key: "GPSDateStamp", value: "2024:01:11"},
  {key: "GPSTimeStamp", value: "01:39:58.00"},
  {key: "GPSVersionID", value: "2.2.0.0"},
  {key: "GainControl", value: "Normal"},
  {key: "HwMnoteBurstNumber", value: "default_exif_value"},
  {key: "HwMnoteCaptureMode", value: "0"},
  {key: "HwMnoteCloudEnhancementMode", value: "default_exif_value"},
  {key: "HwMnoteFaceConf", value: "default_exif_value"},
  {key: "HwMnoteFaceCount", value: "default_exif_value"},
  {key: "HwMnoteFaceLeyeCenter", value: "default_exif_value"},
  {key: "HwMnoteFaceMouthCenter", value: "default_exif_value"},
  {key: "HwMnoteFacePointer", value: "188"},
  {key: "HwMnoteFaceRect", value: "default_exif_value"},
  {key: "HwMnoteFaceReyeCenter", value: "default_exif_value"},
  {key: "HwMnoteFaceSmileScore", value: "default_exif_value"},
  {key: "HwMnoteFaceVersion", value: "1207959808"},
  {key: "HwMnoteFocusMode", value: "default_exif_value"},
  {key: "HwMnoteFrontCamera", value: "0"},
  {key: "HwMnoteIsXmageSupported", value: "1"},
  {key: "HwMnotePhysicalAperture", value: "1"},
  {key: "HwMnotePitchAngle", value: "-83"},
  {key: "HwMnoteRollAngle", value: "26"},
  {key: "HwMnoteSceneBeachConf", value: "default_exif_value"},
  {key: "HwMnoteSceneBlueSkyConf", value: "default_exif_value"},
  {key: "HwMnoteSceneFlowersConf", value: "default_exif_value"},
  {key: "HwMnoteSceneFoodConf", value: "default_exif_value"},
  {key: "HwMnoteSceneGreenPlantConf", value: "default_exif_value"},
  {key: "HwMnoteSceneNightConf", value: "default_exif_value"},
  {key: "HwMnoteScenePointer", value: "170"},
  {key: "HwMnoteSceneSnowConf", value: "default_exif_value"},
  {key: "HwMnoteSceneStageConf", value: "default_exif_value"},
  {key: "HwMnoteSceneSunsetConf", value: "default_exif_value"},
  {key: "HwMnoteSceneTextConf", value: "default_exif_value"},
  {key: "HwMnoteSceneVersion", value: "1207959808"},
  {key: "HwMnoteWindSnapshotMode", value: "default_exif_value"},
  {key: "HwMnoteXmageBottom", value: "0"},
  {key: "HwMnoteXmageLeft", value: "0"},
  {key: "HwMnoteXmageMode", value: "0"},
  {key: "HwMnoteXmageRight", value: "0"},
  {key: "HwMnoteXmageTop", value: "0"},
  {key: "ISOSpeedRatings", value: "160"},
  {key: "ImageDescription", value: "_cuva"},
  {key: "ImageLength", value: "4000"},
  {key: "ImageWidth", value: "3000"},
  {key: "LightSource", value: "Daylight"},
  {key: "MakerNote", value: "HwMnoteScenePointer:170,HwMnoteSceneVersion:1207959808,HwMnoteFacePointer:188,HwMnoteFaceVersion:1207959808,HwMnoteCaptureMode:0,HwMnoteFrontCamera:0,HwMnoteRollAngle:26,HwMnotePitchAngle:-83,HwMnotePhysicalAperture:1,HwMnoteIsXmageSupported:1,HwMnoteXmageMode:0,HwMnoteXmageLeft:0,HwMnoteXmageTop:0,HwMnoteXmageRight:0,HwMnoteXmageBottom:0"},
  {key: "MeteringMode", value: "Pattern"},
  {key: "MicroVideoPresentationTimestampUS", value: "default_exif_value"},
  {key: "MovingPhotoId", value: "default_exif_value"},
  {key: "MovingPhotoVersion", value: "default_exif_value"},
  {key: "Orientation", value: "Unknown value 0"},
  {key: "PhotographicSensitivity", value: "160"},
  {key: "PixelXDimension", value: "4000"},
  {key: "PixelYDimension", value: "3000"},
  {key: "ResolutionUnit", value: "Inch"},
  {key: "Saturation", value: "Normal"},
  {key: "SceneCaptureType", value: "Standard"},
  {key: "SceneType", value: "Directly photographed"},
  {key: "SensingMethod", value: "One-chip color area sensor"},
  {key: "Sharpness", value: "Normal"},
  {key: "ShutterSpeedValue", value: "29.00 EV (1/536870912 sec.)"},
  {key: "Software", value: "MNA-AL00 4.0.0.120(C00E116R3P7)"},
  {key: "SubjectDistanceRange", value: "Unknown"},
  {key: "SubsecTime", value: "427000"},
  {key: "SubsecTimeDigitized", value: "427000"},
  {key: "SubsecTimeOriginal", value: "427000"},
  {key: "WhiteBalance", value: "Auto white balance"},
  {key: "XResolution", value: "72"},
  {key: "YCbCrPositioning", value: "Centered"},
  {key: "YResolution", value: "72"},
]

class Logger {
  testInfo: string;
  constructor(testInfo: string) {
    this.testInfo = testInfo;
  }
  log(msg: string) {
    hilog.info(domain, testTag, this.testInfo + msg);
  }
}

const testCreateImageSource = (logger: Logger, fileName: string) => {
  let filePath = getFilePath(fileName);
  logger.log(`: image filePath ` + filePath);
  ndkTest.createTestImageSource(filePath);
}

const testCreateAndSetPackingOptions = (uri: string, pixelFormat: image.PixelMapFormat, format: string) => {
  ndkTest.createTestImageSource(uri);
  ndkTest.createTestPixelmapByImageSource(pixelFormat);
  ndkTest.CreatePictureByPixelmap();
  ndkTest.createTestImagePacker();
  ndkTest.createTestPackingOptions();
  ndkTest.setDynamicRangeToTestPackingOptions(image.PackingDynamicRange.SDR);
  ndkTest.setMimeTypeToTestPackingOptions(format);
}

const testCreateAndSetPackingOptionsRequiredOnly = (uri: string, pixelFormat: image.PixelMapFormat, format: string) => {
  ndkTest.createTestImageSource(uri);
  ndkTest.createTestPixelmapByImageSource(pixelFormat);
  ndkTest.CreatePictureByPixelmap();
  ndkTest.createTestImagePacker();
  ndkTest.createTestPackingOptions();
  //ndkTest.setDynamicRangeToTestPackingOptions(image.PackingDynamicRange.SDR);
  ndkTest.setMimeTypeToTestPackingOptions(format);
}

const testCreateAndSetPackingOptionsSdr = (uri: string, pixelFormat: image.PixelMapFormat, format: string) => {
  ndkTest.createTestImageSource(uri);
  ndkTest.createTestPixelmapByImageSource(pixelFormat);
  ndkTest.CreatePictureByPixelmap();
  ndkTest.createTestImagePacker();
  ndkTest.createTestPackingOptions();
  ndkTest.setDynamicRangeToTestPackingOptions(image.PackingDynamicRange.SDR);
  ndkTest.setMimeTypeToTestPackingOptions(format);
}

const testCreateAndSetPackingOptionsAuto = (uri: string, pixelFormat: image.PixelMapFormat, format: string) => {
  ndkTest.createTestImageSource(uri);
  ndkTest.createTestPixelmapByImageSource(pixelFormat);
  ndkTest.CreatePictureByPixelmap();
  ndkTest.createTestImagePacker();
  ndkTest.createTestPackingOptions();
  ndkTest.setDynamicRangeToTestPackingOptions(image.PackingDynamicRange.AUTO);
  ndkTest.setMimeTypeToTestPackingOptions(format);
}

const testCreatePictureByPixelMap = (logger: Logger, fileName: string) => {
  let filePath = getFilePath(fileName);
  logger.log(`: image filePath ` + filePath);
  ndkTest.createTestImageSource(filePath);
  ndkTest.createTestPixelmapByImageSource(image.PixelMapFormat.RGBA_8888);
  let result = ndkTest.CreatePictureByPixelmap();
  expect(result).assertEqual(ErrorCode.IMAGE_SUCCESS);
}

const testCreateAuxiliaryPicture = (auxType: image.AuxiliaryPictureType): image.AuxiliaryPicture => {
  let fileName = '';
  let auxSize: image.Size = {height: 180, width: 240};
  let auxBuffer = createFillBuffer(172800, 4);
  switch (auxType) {
    case image.AuxiliaryPictureType.GAINMAP: 
      fileName = testFileGainMap;
      auxSize = testFileGainMapSize;
      auxBuffer = getBuffer(fileName);
      break;
    // case image.AuxiliaryPictureType.UNREFOCUS_MAP: 
    //   fileName = testFileUnrefocus;
    //   auxSize = testFileUnrefocusSize;
    //   auxBuffer = getBuffer(fileName);
    //   break;
    default: 
      
      break;
  }
  let auxPicture: image.AuxiliaryPicture =
    ndkTest.CreateAuxiliaryPicture(auxBuffer, auxSize, auxType);
  return auxPicture;
}

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

function compareArrayFor100Times(buffer1: ArrayBuffer, buffer2: ArrayBuffer): boolean {
  if (buffer1.byteLength != buffer2.byteLength) {
    return false;
  }

  let view1 = new Uint8Array(buffer1);
  let view2 = new Uint8Array(buffer2);
  for (let i = 0; i < 100; i++) {
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

function createDefaultFragmentMetadata(): image.Metadata {
  let metadata: image.Metadata = ndkTest.MetadataCreate(image.MetadataType.FRAGMENT_METADATA);
  ndkTest.MetadataSetProperty(fragmentImageWidthKey, fragmentImageWidthValue);
  ndkTest.MetadataSetProperty(fragmentImageHeightKey, fragmentImageHeightValue);
  ndkTest.MetadataSetProperty(xInOriginalKey, xInOriginalValue);
  ndkTest.MetadataSetProperty(yInOriginalKey, yInOriginalValue);
  return metadata;
}

function createFillBuffer(size: number, value: number): ArrayBuffer {
  let buffer = new ArrayBuffer(size);
  let view = new Uint8Array(buffer);
  view.fill(value);
  return buffer;
}

const testSetAndGetPixelFormat = (auxType: image.AuxiliaryPictureType, pixelMapFormat: image.PixelMapFormat) => {
  testCreateAuxiliaryPicture(auxType);

  ndkTest.AuxiliaryPictureGetInfo();
  expect(ndkTest.AuxiliaryPictureInfoSetPixelFormat(pixelMapFormat)).assertEqual(ErrorCode.IMAGE_SUCCESS);
  expect(ndkTest.AuxiliaryPictureSetInfoToCtx()).assertEqual(ErrorCode.IMAGE_SUCCESS);

  ndkTest.AuxiliaryPictureGetInfo();
  expect(ndkTest.AuxiliaryPictureInfoGetPixelFormat()).assertEqual(pixelMapFormat);
}

const getBuffer = (fileName: string) => {
  let filePath = getFilePath(fileName);
  let file = fs.openSync(filePath);
  const stats = fs.statSync(filePath);
  const fileSize = stats.size;
  const bufferRead = new ArrayBuffer(fileSize)
  fs.readSync(file.fd, bufferRead)
  return bufferRead
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
    afterEach(() => {
      try {
        ndkTest.releaseTestContext();
      } catch (err) {
        hilog.error(domain, testTag, `afterEach: Test exception ` + err);
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_ImageSource_CreatePictureDecodingOptions_0100
     * @tc.name      : testImageSourceCreatePictureDecodingOptions
     * @tc.desc      : Test create default picture decoding options.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_ImageSource_CreatePictureDecodingOptions_0100', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_ImageSource_CreatePictureDecodingOptions_0100 begin`);
      try {
        let auxType: image.AuxiliaryPictureType = image.AuxiliaryPictureType.GAINMAP;
        testCreateAuxiliaryPicture(auxType);

        expect(ndkTest.AuxiliaryPictureGetType()).assertEqual(auxType);
        done();
      } catch (err) {
        hilog.error(domain, testTag,
          `SUB_MULTIMEDIA_PICTURE_NDK_ImageSource_CreatePictureDecodingOptions_0100: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_ImageSource_CreatePicture_0100
     * @tc.name      : testImageSourceCreatePicture
     * @tc.desc      : Test create default picture by ImageSource.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_ImageSource_CreatePicture_0100', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_ImageSource_CreatePicture_0100 begin`);
      try {
        let log: Logger = new Logger(`SUB_MULTIMEDIA_PICTURE_NDK_ImageSource_CreatePicture_0100`);
        testCreateImageSource(log, testFileJpg);
        ndkTest.CreatePictureDecodingOptions();

        expect(ndkTest.CreatePictureByImageSource()).assertEqual(ErrorCode.IMAGE_SUCCESS);
        done();
      } catch (err) {
        hilog.error(domain, testTag,
          `SUB_MULTIMEDIA_PICTURE_NDK_ImageSource_CreatePicture_0100: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_ImageSource_SetDesiredAuxiliaryPictures_0100
     * @tc.name      : testImageSourceSetDesiredAuxiliaryPictures
     * @tc.desc      : Test set desired auxiliary pictures to decoding options.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_ImageSource_SetDesiredAuxiliaryPictures_0100', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_ImageSource_SetDesiredAuxiliaryPictures_0100 begin`);
      try {
        let auxType: image.AuxiliaryPictureType = image.AuxiliaryPictureType.LINEAR_MAP;
        testCreateAuxiliaryPicture(auxType);
        
        expect(ndkTest.AuxiliaryPictureGetType()).assertEqual(auxType);
        done();
      } catch (err) {
        hilog.error(domain, testTag,
          `SUB_MULTIMEDIA_PICTURE_NDK_ImageSource_SetDesiredAuxiliaryPictures_0100: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_ImageSource_GetDesiredAuxiliaryPictures_0100
     * @tc.name      : testImageSourceGetDesiredAuxiliaryPictures
     * @tc.desc      : Test get desired AuxiliaryPicture from DecodingOptions.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_ImageSource_GetDesiredAuxiliaryPictures_0100', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_ImageSource_GetDesiredAuxiliaryPictures_0100 begin`);
      try {
        ndkTest.CreatePictureDecodingOptions();
        let inAuxTpyes: Array<image.AuxiliaryPictureType> = [image.AuxiliaryPictureType.GAINMAP];
        ndkTest.SetDesiredAuxiliaryPictures(inAuxTpyes.length, inAuxTpyes);
        let outAuxTpyes: Array<image.AuxiliaryPictureType> = ndkTest.GetDesiredAuxiliaryPictures();

        expect(compareArray(inAuxTpyes, outAuxTpyes)).assertTrue();
        done();
      } catch (err) {
        hilog.error(domain, testTag,
          `SUB_MULTIMEDIA_PICTURE_NDK_ImageSource_GetDesiredAuxiliaryPictures_0100: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_ImageSource_GetDesiredAuxiliaryPictures_ERROR_0200
     * @tc.name      : testImageSourceGetDesiredAuxiliaryPictures
     * @tc.desc      : Test get desired AuxiliaryPicture from DecodingOptions. The AuxiliaryPicture type is abnormal.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_ImageSource_GetDesiredAuxiliaryPictures_ERROR_0200', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, 
        `SUB_MULTIMEDIA_PICTURE_NDK_ImageSource_GetDesiredAuxiliaryPictures_ERROR_0200 begin`);
      try {
        ndkTest.CreatePictureDecodingOptions();
        let inAuxTpyes: Array<image.AuxiliaryPictureType> = [-1];
        ndkTest.SetDesiredAuxiliaryPictures(inAuxTpyes.length, inAuxTpyes);
        let outAuxTpyes: Array<image.AuxiliaryPictureType> = ndkTest.GetDesiredAuxiliaryPictures();

        expect(compareArray(inAuxTpyes, outAuxTpyes)).assertFalse();
        done();
      } catch (err) {
        hilog.error(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_ImageSource_GetDesiredAuxiliaryPictures_ERROR_0200: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_ImageSource_GetDesiredAuxiliaryPictures_ERROR_0300
     * @tc.name      : testImageSourceGetDesiredAuxiliaryPictures
     * @tc.desc      : Test get desired AuxiliaryPicture from DecodingOptions. 
     *                 Added AuxiliaryPicture type array length abnormal.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_ImageSource_GetDesiredAuxiliaryPictures_ERROR_0300', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, 
        `SUB_MULTIMEDIA_PICTURE_NDK_ImageSource_GetDesiredAuxiliaryPictures_ERROR_0300 begin`);
      try {
        ndkTest.CreatePictureDecodingOptions();
        let inAuxTpyes: Array<image.AuxiliaryPictureType> = [image.AuxiliaryPictureType.GAINMAP];
        ndkTest.SetDesiredAuxiliaryPictures(0, inAuxTpyes);
        let outAuxTpyes: Array<image.AuxiliaryPictureType> = ndkTest.GetDesiredAuxiliaryPictures();

        expect(compareArray(inAuxTpyes, outAuxTpyes)).assertFalse();
        done();
      } catch (err) {
        hilog.error(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_ImageSource_GetDesiredAuxiliaryPictures_ERROR_0300: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_ImageSource_Release_0100
     * @tc.name      : testImageSourceReleasePictureDecodingOptions
     * @tc.desc      : Test release the created DecodingOptionsForPicture.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_ImageSource_Release_0100', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_ImageSource_Release_0100 begin`);
      try {
        ndkTest.CreatePictureDecodingOptions();
        let inAuxTpyes: Array<image.AuxiliaryPictureType> = [image.AuxiliaryPictureType.GAINMAP,
          image.AuxiliaryPictureType.DEPTH_MAP, image.AuxiliaryPictureType.UNREFOCUS_MAP,
          image.AuxiliaryPictureType.LINEAR_MAP, image.AuxiliaryPictureType.FRAGMENT_MAP];
        ndkTest.SetDesiredAuxiliaryPictures(inAuxTpyes.length, inAuxTpyes);

        expect(ndkTest.ReleasePictureDecodingOptions()).assertEqual(ErrorCode.IMAGE_SUCCESS);
        done();
      } catch (err) {
        hilog.error(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_ImageSource_Release_0100: Test exception` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_Picture_SetAuxiliaryPicture_0100
     * @tc.name      : testSetAuxiliaryPicture
     * @tc.desc      : Test inserting AuxiliaryPicture with GAIN_MAP type into Picture.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_Picture_SetAuxiliaryPicture_0100', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_Picture_SetAuxiliaryPicture_0100 begin`);
      try {
        let log: Logger = new Logger(`SUB_MULTIMEDIA_PICTURE_NDK_Picture_SetAuxiliaryPicture_0100`);
        testCreatePictureByPixelMap(log, testFileJpg);

        let auxType: image.AuxiliaryPictureType = image.AuxiliaryPictureType.GAINMAP;
        let auxPicture: image.AuxiliaryPicture = testCreateAuxiliaryPicture(auxType);
        
        expect(ndkTest.SetAuxiliaryPicture(auxType, auxPicture)).assertEqual(ErrorCode.IMAGE_SUCCESS);
        expect(ndkTest.GetAuxiliaryPicture(auxType) != undefined).assertTrue();
        done();
      } catch (err) {
        hilog.error(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_Picture_SetAuxiliaryPicture_0100: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_Picture_SetAuxiliaryPicture_0200
     * @tc.name      : testSetAuxiliaryPicture
     * @tc.desc      : Test inserting AuxiliaryPicture with DEPTH_MAP type into Picture.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_Picture_SetAuxiliaryPicture_0200', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_Picture_SetAuxiliaryPicture_0200 begin`);
      try {
        let log: Logger = new Logger(`SUB_MULTIMEDIA_PICTURE_NDK_Picture_SetAuxiliaryPicture_0200`);
        testCreatePictureByPixelMap(log, testFileJpg);

        let auxType: image.AuxiliaryPictureType = image.AuxiliaryPictureType.DEPTH_MAP;
        let auxPicture: image.AuxiliaryPicture = testCreateAuxiliaryPicture(auxType);
        
        expect(ndkTest.SetAuxiliaryPicture(auxType, auxPicture)).assertEqual(ErrorCode.IMAGE_SUCCESS);
        expect(ndkTest.GetAuxiliaryPicture(auxType) != undefined).assertTrue();
        done();
      } catch (err) {
        hilog.error(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_Picture_SetAuxiliaryPicture_0200: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_Picture_SetAuxiliaryPicture_0300
     * @tc.name      : testSetAuxiliaryPicture
     * @tc.desc      : Test inserting AuxiliaryPicture with UNREFOCUS_MAP type into Picture.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_Picture_SetAuxiliaryPicture_0300', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_Picture_SetAuxiliaryPicture_0300 begin`);
      try {
        let log: Logger = new Logger(`SUB_MULTIMEDIA_PICTURE_NDK_Picture_SetAuxiliaryPicture_0300`);
        testCreatePictureByPixelMap(log, testFileJpg);

        let auxType: image.AuxiliaryPictureType = image.AuxiliaryPictureType.UNREFOCUS_MAP;
        let auxPicture: image.AuxiliaryPicture = testCreateAuxiliaryPicture(auxType);
        
        expect(ndkTest.SetAuxiliaryPicture(auxType, auxPicture)).assertEqual(ErrorCode.IMAGE_SUCCESS);
        expect(ndkTest.GetAuxiliaryPicture(auxType) != undefined).assertTrue();
        done();
      } catch (err) {
        hilog.error(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_Picture_SetAuxiliaryPicture_0300: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_Picture_SetAuxiliaryPicture_0400
     * @tc.name      : testSetAuxiliaryPicture
     * @tc.desc      : Test inserting AuxiliaryPicture with LINEAR_MAP type into Picture.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_Picture_SetAuxiliaryPicture_0400', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_Picture_SetAuxiliaryPicture_0400 begin`);
      try {
        let log: Logger = new Logger(`SUB_MULTIMEDIA_PICTURE_NDK_Picture_SetAuxiliaryPicture_0400`);
        testCreatePictureByPixelMap(log, testFileJpg);

        let auxType: image.AuxiliaryPictureType = image.AuxiliaryPictureType.LINEAR_MAP;
        let auxPicture: image.AuxiliaryPicture = testCreateAuxiliaryPicture(auxType);
        
        expect(ndkTest.SetAuxiliaryPicture(auxType, auxPicture)).assertEqual(ErrorCode.IMAGE_SUCCESS);
        expect(ndkTest.GetAuxiliaryPicture(auxType) != undefined).assertTrue();
        done();
      } catch (err) {
        hilog.error(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_Picture_SetAuxiliaryPicture_0400: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_Picture_SetAuxiliaryPicture_0500
     * @tc.name      : testSetAuxiliaryPicture
     * @tc.desc      : Test inserting AuxiliaryPicture with FRAGMENT_MAP type into Picture.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_Picture_SetAuxiliaryPicture_0500', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_Picture_SetAuxiliaryPicture_0500 begin`);
      try {
        let log: Logger = new Logger(`SUB_MULTIMEDIA_PICTURE_NDK_Picture_SetAuxiliaryPicture_0500`);
        testCreatePictureByPixelMap(log, testFileJpg);

        let auxType: image.AuxiliaryPictureType = image.AuxiliaryPictureType.FRAGMENT_MAP;
        let auxPicture: image.AuxiliaryPicture = testCreateAuxiliaryPicture(auxType);
        
        expect(ndkTest.SetAuxiliaryPicture(auxType, auxPicture)).assertEqual(ErrorCode.IMAGE_SUCCESS);
        expect(ndkTest.GetAuxiliaryPicture(auxType) != undefined).assertTrue();
        done();
      } catch (err) {
        hilog.error(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_Picture_SetAuxiliaryPicture_0500: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_Picture_SetAuxiliaryPicture_ERROR_0600
     * @tc.name      : testPictureSetAuxiliaryPicture
     * @tc.desc      : Test set AuxiliaryPicture to picture. Type error.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_Picture_SetAuxiliaryPicture_ERROR_0600', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_Picture_SetAuxiliaryPicture_ERROR_0600 begin`);
      try {
        let log: Logger = new Logger(`SUB_MULTIMEDIA_PICTURE_NDK_Picture_SetAuxiliaryPicture_ERROR_0600`);
        testCreatePictureByPixelMap(log, testFileJpg);

        let gainmapType: image.AuxiliaryPictureType = image.AuxiliaryPictureType.GAINMAP;
        let depthType: image.AuxiliaryPictureType = image.AuxiliaryPictureType.DEPTH_MAP;
        let auxPicture: image.AuxiliaryPicture = testCreateAuxiliaryPicture(gainmapType);

        expect(ndkTest.SetAuxiliaryPictureErrorCode(depthType, auxPicture)).assertEqual(ErrorCode.IMAGE_BAD_PARAMETER);
        done();
      } catch (err) {
        hilog.error(domain, testTag,
          `SUB_MULTIMEDIA_PICTURE_NDK_Picture_SetAuxiliaryPicture_ERROR_0600: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_Picture_SetAuxiliaryPicture_ERROR_0700
     * @tc.name      : testPictureSetAuxiliaryPicture
     * @tc.desc      : Test set AuxiliaryPicture to picture. The AuxiliaryPicture object is empty.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_Picture_SetAuxiliaryPicture_ERROR_0700', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_Picture_SetAuxiliaryPicture_ERROR_0700 begin`);
      try {
        let log: Logger = new Logger(`SUB_MULTIMEDIA_PICTURE_NDK_Picture_SetAuxiliaryPicture_ERROR_0700`);
        testCreatePictureByPixelMap(log, testFileJpg);

        let auxPicture: null = null;
        let depthType: image.AuxiliaryPictureType = image.AuxiliaryPictureType.DEPTH_MAP;
        expect(ndkTest.SetAuxiliaryPictureErrorCode(depthType, auxPicture)).assertEqual(ErrorCode.IMAGE_BAD_PARAMETER);
        done();
      } catch (err) {
        hilog.error(domain, testTag,
          `SUB_MULTIMEDIA_PICTURE_NDK_Picture_SetAuxiliaryPicture_ERROR_0700: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_Picture_GetAuxiliaryPicture_0100
     * @tc.name      : testPictureGetAuxiliaryPicture
     * @tc.desc      : Test get right AuxiliaryPicture from picture.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_Picture_GetAuxiliaryPicture_0100', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_Picture_GetAuxiliaryPicture_0100 begin`);
      try {
        let log: Logger = new Logger(`SUB_MULTIMEDIA_PICTURE_NDK_Picture_GetAuxiliaryPicture_0100`);
        testCreateImageSource(log, testFileWithFiveAuxiliaryPictureJpg);
        
        ndkTest.CreatePictureDecodingOptions();
        let inAuxTpyes: Array<image.AuxiliaryPictureType> = [image.AuxiliaryPictureType.GAINMAP,
          image.AuxiliaryPictureType.UNREFOCUS_MAP];
        ndkTest.SetDesiredAuxiliaryPictures(inAuxTpyes.length, inAuxTpyes);
        ndkTest.CreatePictureByImageSource();

        expect(ndkTest.GetAuxiliaryPicture(inAuxTpyes[0]) != undefined).assertTrue();
        expect(ndkTest.GetAuxiliaryPicture(inAuxTpyes[1]) != undefined).assertTrue();
        done();
      } catch (err) {
        hilog.error(domain, testTag,
          `SUB_MULTIMEDIA_PICTURE_NDK_Picture_GetAuxiliaryPicture_0100: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_Picture_GetAuxiliaryPicture_ERROR_0200
     * @tc.name      : testPictureGetAuxiliaryPicture
     * @tc.desc      : Test get AuxiliaryPicture from picture failed Unable to get the correct type.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_Picture_GetAuxiliaryPicture_ERROR_0200', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_Picture_GetAuxiliaryPicture_ERROR_0200 begin`);
      try {
        let log: Logger = new Logger(`SUB_MULTIMEDIA_PICTURE_NDK_Picture_GetAuxiliaryPicture_ERROR_0200`);
        testCreateImageSource(log, testFileWithFiveAuxiliaryPictureJpg);
        
        ndkTest.CreatePictureDecodingOptions();
        let inAuxTpyes: Array<image.AuxiliaryPictureType> = [image.AuxiliaryPictureType.GAINMAP,
          image.AuxiliaryPictureType.UNREFOCUS_MAP];
        let noexistTypes: Array<image.AuxiliaryPictureType> = [image.AuxiliaryPictureType.DEPTH_MAP,
          image.AuxiliaryPictureType.LINEAR_MAP,image.AuxiliaryPictureType.FRAGMENT_MAP];
        ndkTest.SetDesiredAuxiliaryPictures(inAuxTpyes.length, inAuxTpyes);
        ndkTest.CreatePictureByImageSource();

        expect(ndkTest.GetAuxiliaryPicture(noexistTypes[0]) != undefined).assertFalse();
        expect(ndkTest.GetAuxiliaryPicture(noexistTypes[1]) != undefined).assertFalse();
        expect(ndkTest.GetAuxiliaryPicture(noexistTypes[2]) != undefined).assertFalse();
        done();
      } catch (err) {
        hilog.error(domain, testTag,
          `SUB_MULTIMEDIA_PICTURE_NDK_Picture_GetAuxiliaryPicture_ERROR_0200: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_Picture_GetAuxiliaryPicture_0300
     * @tc.name      : testPictureGetAuxiliaryPicture
     * @tc.desc      : Test get right AuxiliaryPicture from picture.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_Picture_GetAuxiliaryPicture_0300', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_Picture_GetAuxiliaryPicture_0300 begin`);
      try {
        let log: Logger = new Logger(`SUB_MULTIMEDIA_PICTURE_NDK_Picture_GetAuxiliaryPicture_0300`);
        testCreateImageSource(log, testFileWithFiveAuxiliaryPictureJpg);
        
        ndkTest.CreatePictureDecodingOptions();
        let inAuxTpyes: Array<image.AuxiliaryPictureType> = [image.AuxiliaryPictureType.GAINMAP,
          image.AuxiliaryPictureType.UNREFOCUS_MAP,image.AuxiliaryPictureType.LINEAR_MAP,
          image.AuxiliaryPictureType.FRAGMENT_MAP];
        ndkTest.SetDesiredAuxiliaryPictures(inAuxTpyes.length, inAuxTpyes);
        ndkTest.CreatePictureByImageSource();

        expect(ndkTest.GetAuxiliaryPicture(inAuxTpyes[0]) != undefined).assertTrue();
        expect(ndkTest.GetAuxiliaryPicture(inAuxTpyes[1]) != undefined).assertTrue();
        done();
      } catch (err) {
        hilog.error(domain, testTag,
          `SUB_MULTIMEDIA_PICTURE_NDK_Picture_GetAuxiliaryPicture_0300: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_Picture_GetAuxiliaryPicture_ERROR_0400
     * @tc.name      : testPictureGetAuxiliaryPicture
     * @tc.desc      : Test get  AuxiliaryPicture from picture failed Unable to get the correct type.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_Picture_GetAuxiliaryPicture_ERROR_0400', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_Picture_GetAuxiliaryPicture_ERROR_0400 begin`);
      try {
        let log: Logger = new Logger(`SUB_MULTIMEDIA_PICTURE_NDK_Picture_GetAuxiliaryPicture_ERROR_0400`);
        testCreateImageSource(log, testFileWithFiveAuxiliaryPictureJpg);
        
        ndkTest.CreatePictureDecodingOptions();
        let inAuxTpyes: Array<image.AuxiliaryPictureType> = [image.AuxiliaryPictureType.GAINMAP,
          image.AuxiliaryPictureType.DEPTH_MAP,image.AuxiliaryPictureType.LINEAR_MAP,
          image.AuxiliaryPictureType.FRAGMENT_MAP];
        let noexistTypes: Array<image.AuxiliaryPictureType> = [image.AuxiliaryPictureType.UNREFOCUS_MAP,
          image.AuxiliaryPictureType.LINEAR_MAP,image.AuxiliaryPictureType.FRAGMENT_MAP];
        ndkTest.SetDesiredAuxiliaryPictures(inAuxTpyes.length, inAuxTpyes);
        ndkTest.CreatePictureByImageSource();

        expect(ndkTest.GetAuxiliaryPicture(noexistTypes[0]) != undefined).assertFalse();
        expect(ndkTest.GetAuxiliaryPicture(noexistTypes[1]) != undefined).assertFalse();
        expect(ndkTest.GetAuxiliaryPicture(noexistTypes[2]) != undefined).assertFalse();
        done();
      } catch (err) {
        hilog.error(domain, testTag,
          `SUB_MULTIMEDIA_PICTURE_NDK_Picture_GetAuxiliaryPicture_ERROR_0400: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_Picture_GetAuxiliaryPicture_0500
     * @tc.name      : testGetAuxiliaryPicture
     * @tc.desc      : Test get AuxiliaryPicture from Picture
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_Picture_GetAuxiliaryPicture_0500', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_Picture_GetAuxiliaryPicture_0500 begin`);
      try {
        let log: Logger = new Logger(`SUB_MULTIMEDIA_PICTURE_NDK_Picture_GetAuxiliaryPicture_0500`);
        testCreatePictureByPixelMap(log, testFileJpg);

        let gainmapType: image.AuxiliaryPictureType = image.AuxiliaryPictureType.GAINMAP;
        let auxPicture: image.AuxiliaryPicture = testCreateAuxiliaryPicture(gainmapType);

        ndkTest.SetAuxiliaryPicture(gainmapType, auxPicture);
        expect(ndkTest.GetAuxiliaryPicture(gainmapType) != undefined).assertTrue();
        done();
      } catch (err) {
        hilog.error(domain, testTag,
          `SUB_MULTIMEDIA_PICTURE_NDK_Picture_GetAuxiliaryPicture_0500: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_Picture_GetAuxiliaryPicture_ERROR_0600
     * @tc.name      : testPictureGetAuxiliaryPicture
     * @tc.desc      : Prerequisite: Create an picture from PixelMap.
     *                 Test get AuxiliaryPicture from picture. there is no AuxiliaryPicture.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_Picture_GetAuxiliaryPicture_ERROR_0600', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_Picture_GetAuxiliaryPicture_ERROR_0600 begin`);
      try {
        let log: Logger = new Logger(`SUB_MULTIMEDIA_PICTURE_NDK_Picture_GetAuxiliaryPicture_ERROR_0600`);
        testCreatePictureByPixelMap(log, testNoAuxiliaryPictureJpg);

        let gainmapType: image.AuxiliaryPictureType = image.AuxiliaryPictureType.GAINMAP;
        expect(ndkTest.GetAuxiliaryPictureErrorCode(gainmapType)).assertEqual(ErrorCode.IMAGE_BAD_PARAMETER);
        done();
      } catch (err) {
        hilog.error(domain, testTag,
          `SUB_MULTIMEDIA_PICTURE_NDK_Picture_GetAuxiliaryPicture_ERROR_0600: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_Metadata_Create_0100
     * @tc.name      : testMetadataCreate
     * @tc.desc      : Test create exif metadata.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_Metadata_Create_0100', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_Metadata_Create_0100 begin`);
      try {
        expect(ndkTest.MetadataCreate(image.MetadataType.EXIF_METADATA) != undefined).assertTrue();
        done();
      } catch (err) {
        hilog.error(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_Metadata_Create_0100: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_Metadata_Create_0200
     * @tc.name      : testMetadataCreate
     * @tc.desc      : Test create fragment metadata.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_Metadata_Create_0200', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_Metadata_Create_0200 begin`);
      try {
        expect(ndkTest.MetadataCreate(image.MetadataType.FRAGMENT_METADATA) != undefined).assertTrue();
        done();
      } catch (err) {
        hilog.error(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_Metadata_Create_0200: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_Metadata_SetProperty_0100
     * @tc.name      : testMetadataSetProperty
     * @tc.desc      : Test set ptoperty to exif metadata.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_Metadata_SetProperty_0100', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_Metadata_SetProperty_0100 begin`);
      try {
        ndkTest.MetadataCreate(image.MetadataType.EXIF_METADATA);
        
        expect(ndkTest.MetadataSetProperty(imageLengthKey, imageLengthValue)).assertEqual(ErrorCode.IMAGE_SUCCESS);
        expect(ndkTest.MetadataSetProperty(imageWidthKey, imageWidthValue)).assertEqual(ErrorCode.IMAGE_SUCCESS);
        expect(ndkTest.MetadataSetProperty(orientationKey, orientationValue)).assertEqual(ErrorCode.IMAGE_SUCCESS);
        done();
      } catch (err) {
        hilog.error(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_Metadata_SetProperty_0100: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_Metadata_SetProperty_0200
     * @tc.name      : testMetadataSetProperty
     * @tc.desc      : Test set ptoperty to fragment metadata.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_Metadata_SetProperty_0200', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_Metadata_SetProperty_0200 begin`);
      try {
        ndkTest.MetadataCreate(image.MetadataType.FRAGMENT_METADATA);

        expect(ndkTest.MetadataSetProperty(fragmentImageWidthKey, fragmentImageWidthValue))
          .assertEqual(ErrorCode.IMAGE_SUCCESS);
        expect(ndkTest.MetadataSetProperty(fragmentImageHeightKey, fragmentImageHeightValue))
          .assertEqual(ErrorCode.IMAGE_SUCCESS);
        expect(ndkTest.MetadataSetProperty(xInOriginalKey, xInOriginalValue)).assertEqual(ErrorCode.IMAGE_SUCCESS);
        expect(ndkTest.MetadataSetProperty(yInOriginalKey, yInOriginalValue)).assertEqual(ErrorCode.IMAGE_SUCCESS);
        done();
      } catch (err) {
        hilog.error(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_Metadata_SetProperty_0200: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_Metadata_SetProperty_ERROR_0300
     * @tc.name      : testMetadataSetProperty
     * @tc.desc      : Test set property to exif metadata with illegal.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_Metadata_SetProperty_ERROR_0300', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_Metadata_SetProperty_ERROR_0300 begin`);
      try {
        ndkTest.MetadataCreate(image.MetadataType.EXIF_METADATA);

        expect(ndkTest.MetadataSetPropertyErrorCode(imageWidthKeyErr, imageWidthValue))
          .assertEqual(ErrorCode.IMAGE_UNSUPPORTED_METADATA);
        expect(ndkTest.MetadataSetPropertyErrorCode(imageHeightKeyErr, imageHeightValue))
          .assertEqual(ErrorCode.IMAGE_UNSUPPORTED_METADATA);
        expect(ndkTest.MetadataSetProperty(orientationKey, orientationValue))
          .assertEqual(ErrorCode.IMAGE_SUCCESS);
        done();
      } catch (err) {
        hilog.error(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_Metadata_SetProperty_ERROR_0300: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_Metadata_SetProperty_ERROR_0400
     * @tc.name      : testMetadataSetProperty
     * @tc.desc      : Test set property to exif metadata with illegal.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_Metadata_SetProperty_ERROR_0400', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_Metadata_SetProperty_ERROR_0400 begin`);
      try {
        ndkTest.MetadataCreate(image.MetadataType.EXIF_METADATA);

        expect(ndkTest.MetadataSetPropertyErrorCode(imageWidthKeyErr, imageWidthValue))
          .assertEqual(ErrorCode.IMAGE_UNSUPPORTED_METADATA);
        expect(ndkTest.MetadataSetPropertyErrorCode(imageHeightKeyErr, imageHeightValue))
          .assertEqual(ErrorCode.IMAGE_UNSUPPORTED_METADATA);
        expect(ndkTest.MetadataSetPropertyErrorCode(orientationKeyErr, orientationValue))
          .assertEqual(ErrorCode.IMAGE_UNSUPPORTED_METADATA);
        done();
      } catch (err) {
        hilog.error(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_Metadata_SetProperty_ERROR_0400: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_Metadata_SetProperty_ERROR_0500
     * @tc.name      : testMetadataSetProperty
     * @tc.desc      : Test set property to exif metadata with illegal.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_Metadata_SetProperty_ERROR_0500', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_Metadata_SetProperty_ERROR_0500 begin`);
      try {
        ndkTest.MetadataCreate(image.MetadataType.EXIF_METADATA);

        expect(ndkTest.MetadataSetPropertyErrorCode(imageWidthKey, imageWidthValueErr))
          .assertEqual(ErrorCode.IMAGE_UNSUPPORTED_METADATA);
        expect(ndkTest.MetadataSetPropertyErrorCode(imageHeightKeyErr, imageHeightValueErr))
          .assertEqual(ErrorCode.IMAGE_UNSUPPORTED_METADATA);
        expect(ndkTest.MetadataSetProperty(orientationKey, orientationValue))
          .assertEqual(ErrorCode.IMAGE_SUCCESS);
        done();
      } catch (err) {
        hilog.error(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_Metadata_SetProperty_ERROR_0500: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_Metadata_SetProperty_ERROR_0600
     * @tc.name      : testMetadataSetProperty
     * @tc.desc      : Test set property to exif metadata with illegal.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_Metadata_SetProperty_ERROR_0600', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_Metadata_SetProperty_ERROR_0600 begin`);
      try {
        ndkTest.MetadataCreate(image.MetadataType.EXIF_METADATA);

        expect(ndkTest.MetadataSetPropertyErrorCode(imageWidthKey, imageWidthValueErr))
          .assertEqual(ErrorCode.IMAGE_UNSUPPORTED_METADATA);
        expect(ndkTest.MetadataSetPropertyErrorCode(imageHeightKeyErr, imageHeightValueErr))
          .assertEqual(ErrorCode.IMAGE_UNSUPPORTED_METADATA);
        expect(ndkTest.MetadataSetPropertyErrorCode(orientationKeyErr, orientationValueErr))
          .assertEqual(ErrorCode.IMAGE_UNSUPPORTED_METADATA);
        done();
      } catch (err) {
        hilog.error(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_Metadata_SetProperty_ERROR_0600: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_Metadata_SetProperty_ERROR_0700
     * @tc.name      : testMetadataSetProperty
     * @tc.desc      : Test set property to fragment metadata with illegal.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_Metadata_SetProperty_ERROR_0700', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_Metadata_SetProperty_ERROR_0700 begin`);
      try {
        ndkTest.MetadataCreate(image.MetadataType.FRAGMENT_METADATA);

        expect(ndkTest.MetadataSetPropertyErrorCode(xInOriginalKeyErr, xInOriginalValue))
          .assertEqual(ErrorCode.IMAGE_UNSUPPORTED_METADATA);
        expect(ndkTest.MetadataSetPropertyErrorCode(yInOriginalKeyErr, yInOriginalValue))
          .assertEqual(ErrorCode.IMAGE_UNSUPPORTED_METADATA);
        expect(ndkTest.MetadataSetProperty(fragmentImageWidthKey, fragmentImageWidthValue))
          .assertEqual(ErrorCode.IMAGE_SUCCESS);
        expect(ndkTest.MetadataSetProperty(fragmentImageHeightKey, fragmentImageHeightValue))
          .assertEqual(ErrorCode.IMAGE_SUCCESS);
        done();
      } catch (err) {
        hilog.error(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_Metadata_SetProperty_ERROR_0700: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_Metadata_SetProperty_ERROR_0800
     * @tc.name      : testMetadataSetProperty
     * @tc.desc      : Test set property to fragment metadata with illegal.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_Metadata_SetProperty_ERROR_0800', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_Metadata_SetProperty_ERROR_0800 begin`);
      try {
        ndkTest.MetadataCreate(image.MetadataType.FRAGMENT_METADATA);
        expect(ndkTest.MetadataSetPropertyErrorCode(fragmentImageWidthKeyErr,fragmentImageWidthValue))
          .assertEqual(ErrorCode.IMAGE_UNSUPPORTED_METADATA);
        expect(ndkTest.MetadataSetPropertyErrorCode(fragmentImageHeightKeyErr,fragmentImageHeightValue))
          .assertEqual(ErrorCode.IMAGE_UNSUPPORTED_METADATA);
        expect(ndkTest.MetadataSetPropertyErrorCode(xInOriginalKeyErr, xInOriginalValue))
          .assertEqual(ErrorCode.IMAGE_UNSUPPORTED_METADATA);
        expect(ndkTest.MetadataSetPropertyErrorCode(yInOriginalKeyErr, yInOriginalValue))
          .assertEqual(ErrorCode.IMAGE_UNSUPPORTED_METADATA);
        done();
      } catch (err) {
        hilog.error(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_Metadata_SetProperty_ERROR_0800: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_Metadata_SetProperty_ERROR_0900
     * @tc.name      : testMetadataSetProperty
     * @tc.desc      : Test set property to fragment metadata with illegal.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_Metadata_SetProperty_ERROR_0900', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_Metadata_SetProperty_ERROR_0900 begin`);
      try {
        ndkTest.MetadataCreate(image.MetadataType.FRAGMENT_METADATA);
        expect(ndkTest.MetadataSetPropertyErrorCode(fragmentImageWidthKey,fragmentImageWidthValueErr))
          .assertEqual(ErrorCode.IMAGE_BAD_PARAMETER);
        expect(ndkTest.MetadataSetPropertyErrorCode(fragmentImageHeightKey,fragmentImageHeightValueErr))
          .assertEqual(ErrorCode.IMAGE_BAD_PARAMETER);
        expect(ndkTest.MetadataSetProperty(xInOriginalKey, xInOriginalValue))
          .assertEqual(ErrorCode.IMAGE_SUCCESS);
        expect(ndkTest.MetadataSetProperty(yInOriginalKey, yInOriginalValue))
          .assertEqual(ErrorCode.IMAGE_SUCCESS);
        done();
      } catch (err) {
        hilog.error(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_Metadata_SetProperty_ERROR_0900: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_Metadata_SetProperty_ERROR_1000
     * @tc.name      : testMetadataSetProperty
     * @tc.desc      : Test set property to fragment metadata with illegal.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_Metadata_SetProperty_ERROR_1000', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_Metadata_SetProperty_ERROR_1000 begin`);
      try {
        ndkTest.MetadataCreate(image.MetadataType.FRAGMENT_METADATA);

        expect(ndkTest.MetadataSetPropertyErrorCode(fragmentImageWidthKey,fragmentImageWidthValueErr))
          .assertEqual(ErrorCode.IMAGE_BAD_PARAMETER);
        expect(ndkTest.MetadataSetPropertyErrorCode(fragmentImageHeightKey,fragmentImageHeightValueErr))
          .assertEqual(ErrorCode.IMAGE_BAD_PARAMETER);
        expect(ndkTest.MetadataSetPropertyErrorCode(xInOriginalKey, xInOriginalValueErr))
          .assertEqual(ErrorCode.IMAGE_BAD_PARAMETER);
        expect(ndkTest.MetadataSetPropertyErrorCode(yInOriginalKey, yInOriginalValueErr))
          .assertEqual(ErrorCode.IMAGE_BAD_PARAMETER);
        done();
      } catch (err) {
        hilog.error(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_Metadata_SetProperty_ERROR_1000: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_Metadata_GetProperty_0100
     * @tc.name      : testMetadataGetProperty
     * @tc.desc      : Test get ptoperty from metadata.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_Metadata_GetProperty_0100', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_Metadata_GetProperty_0100 begin`);
      try {
        createDefaultExifMetadata();

        expect(ndkTest.MetadataGetProperty(imageLengthKey)).assertEqual(imageLengthValue);
        expect(ndkTest.MetadataGetProperty(imageWidthKey)).assertEqual(imageWidthValue);
        done();
      } catch (err) {
        hilog.error(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_Metadata_GetProperty_0100: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_Picture_SetMetadata_0100
     * @tc.name      : testPictureSetMetadata
     * @tc.desc      : Test set exif metadata to picture.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_Picture_SetMetadata_0100', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_Picture_SetMetadata_0100 begin`);
      try {
        let log: Logger = new Logger(`SUB_MULTIMEDIA_PICTURE_NDK_Picture_SetMetadata_0100`);
        testCreatePictureByPixelMap(log, testFileJpg);

        let inMetadata: image.Metadata = createDefaultExifMetadata();
        expect(inMetadata != undefined).assertTrue();
        expect(ndkTest.PictureSetMetadata(image.MetadataType.EXIF_METADATA, inMetadata))
          .assertEqual(ErrorCode.IMAGE_SUCCESS);
        done();
      } catch (err) {
        hilog.error(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_Picture_SetMetadata_0100: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_Picture_SetMetadata_0200
     * @tc.name      : testPictureSetMetadata
     * @tc.desc      : Test set fragment metadata to picture.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_Picture_SetMetadata_0200', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_Picture_SetMetadata_0200 begin`);
      try {
        let log: Logger = new Logger(`SUB_MULTIMEDIA_PICTURE_NDK_Picture_SetMetadata_0200`);
        testCreatePictureByPixelMap(log, testFileJpg);

        let inMetadata: image.Metadata = createDefaultFragmentMetadata();
        expect(inMetadata != undefined).assertTrue();
        expect(ndkTest.PictureSetMetadataErrorCode(image.MetadataType.FRAGMENT_METADATA, inMetadata))
          .assertEqual(ErrorCode.IMAGE_UNSUPPORTED_METADATA);
        done();
      } catch (err) {
        hilog.error(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_Picture_SetMetadata_0200: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_Picture_GetMetadata_0100
     * @tc.name      : testPictureGetMetadata
     * @tc.desc      : Test get exif metadata from picture.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_Picture_GetMetadata_0100', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_Picture_GetMetadata_0100 begin`);
      try {
        let log: Logger = new Logger(`SUB_MULTIMEDIA_PICTURE_NDK_Picture_GetMetadata_0100`);
        testCreatePictureByPixelMap(log, testFileJpg);

        let exifType: image.MetadataType = image.MetadataType.EXIF_METADATA;
        let inMetadata: image.Metadata = createDefaultExifMetadata();
        expect(inMetadata != undefined).assertTrue();
        ndkTest.PictureSetMetadata(exifType, inMetadata);

        expect(ndkTest.PictureGetMetadata(exifType) != undefined).assertTrue();
        expect(ndkTest.pictureMetadataGetProperty(exifType, imageLengthKey)).assertEqual(imageLengthValue);
        expect(ndkTest.pictureMetadataGetProperty(exifType, imageWidthKey)).assertEqual(imageWidthValue);
        done();
      } catch (err) {
        hilog.error(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_Picture_GetMetadata_0100: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_Picture_GetMetadata_ERROR_0200
     * @tc.name      : testPictureGetMetadata
     * @tc.desc      : Test get metadata from picture with illegal type.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_Picture_GetMetadata_ERROR_0200', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_Picture_GetMetadata_ERROR_0200 begin`);
      try {
        let log: Logger = new Logger(`SUB_MULTIMEDIA_PICTURE_NDK_Picture_GetMetadata_ERROR_0200`);
        testCreatePictureByPixelMap(log, testFileJpg);

        let exifType: image.MetadataType = image.MetadataType.EXIF_METADATA;
        let fragmentType: image.MetadataType = image.MetadataType.FRAGMENT_METADATA;
        let inMetadata: image.Metadata = createDefaultExifMetadata();
        expect(inMetadata != undefined).assertTrue();
        ndkTest.PictureSetMetadata(exifType, inMetadata);

        expect(ndkTest.PictureGetMetadataErrorCode(fragmentType)).assertEqual(ErrorCode.IMAGE_UNSUPPORTED_METADATA);
        done();
      } catch (err) {
        hilog.error(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_Picture_GetMetadata_ERROR_0200: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_Picture_GetMainPixelmap_0100
     * @tc.name      : testGetMainPixelmap
     * @tc.desc      : Test get MainPixelmap from Picture
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_Picture_GetMainPixelmap_0100', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_Picture_GetMainPixelmap_0100 begin`);
      try {
        let log: Logger = new Logger(`SUB_MULTIMEDIA_PICTURE_NDK_Picture_GetMainPixelmap_0100`);
        testCreatePictureByPixelMap(log, testNoAuxiliaryPictureJpg);
        const auxInfo = ndkTest.GetMainPixelmapInfo();

        let auxPicture: image.AuxiliaryPicture = testCreateAuxiliaryPicture(image.AuxiliaryPictureType.GAINMAP);
        ndkTest.SetAuxiliaryPicture(image.AuxiliaryPictureType.GAINMAP, auxPicture);

        const mapInfo = ndkTest.GetMainPixelmapInfo();

        expect(mapInfo.width).assertEqual(auxInfo.width);
        expect(mapInfo.height).assertEqual(auxInfo.height);
        expect(mapInfo.pixelFormat).assertEqual(auxInfo.pixelFormat);
        done();
      } catch (err) {
        hilog.error(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_Picture_GetMainPixelmap_0100: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_Picture_GetGainmapPixelmap_0100
     * @tc.name      : testGetGainmapPixelmap
     * @tc.desc      : Test get GainmapPixelmap from Picture
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_Picture_GetGainmapPixelmap_0100', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_Picture_GetGainmapPixelmap_0100 begin`);
      try {
        let log: Logger = new Logger(`SUB_MULTIMEDIA_PICTURE_NDK_Picture_GetGainmapPixelmap_0100`);
        testCreatePictureByPixelMap(log, testFileJpg);
        let auxPicture: image.AuxiliaryPicture = testCreateAuxiliaryPicture(image.AuxiliaryPictureType.GAINMAP);
        ndkTest.SetAuxiliaryPicture(image.AuxiliaryPictureType.GAINMAP, auxPicture);
        const auxInfo = ndkTest.GetGainmapPixelmapInfo();

        auxPicture = testCreateAuxiliaryPicture(image.AuxiliaryPictureType.DEPTH_MAP);
        ndkTest.SetAuxiliaryPicture(image.AuxiliaryPictureType.DEPTH_MAP, auxPicture);

        const mapInfo = ndkTest.GetGainmapPixelmapInfo();

        expect(mapInfo.width).assertEqual(auxInfo.width);
        expect(mapInfo.height).assertEqual(auxInfo.height);
        expect(mapInfo.pixelFormat).assertEqual(auxInfo.pixelFormat);
        done();
      } catch (err) {
        hilog.error(domain, testTag,
          `SUB_MULTIMEDIA_PICTURE_NDK_Picture_GetGainmapPixelmap_0100: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_Picture_GetHdrComposedPixelmap_0100
     * @tc.name      : testPictureGetHdrComposedPixelmap
     * @tc.desc      : Test get HdrComposedPixelmap from Picture
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_Picture_GetHdrComposedPixelmap_0100', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_Picture_GetHdrComposedPixelmap_0100 begin`);
      try {
        let log: Logger = new Logger(`SUB_MULTIMEDIA_PICTURE_NDK_Picture_GetHdrComposedPixelmap_0100`);
        testCreateImageSource(log, testNoAuxiliaryPictureJpg);
        ndkTest.CreatePictureDecodingOptions();
        ndkTest.CreateSinglePictureByImageSource();

        testCreateImageSource(log, testFileJpg);
        ndkTest.CreatePictureDecodingOptions();
        let inAuxTpyes: Array<image.AuxiliaryPictureType> = [image.AuxiliaryPictureType.GAINMAP];
        ndkTest.SetDesiredAuxiliaryPictures(inAuxTpyes.length, inAuxTpyes);
        ndkTest.CreatePictureByImageSource();

        let gainmapType: image.AuxiliaryPictureType = image.AuxiliaryPictureType.GAINMAP;
        let gainmap: image.AuxiliaryPicture = ndkTest.GetAuxiliaryPicture(gainmapType);
        let auxInfo: ndkTest.IAuxInfo = ndkTest.GetMainPixelmapInfo();
        expect(ndkTest.SetAuxiliarySinglePicture(gainmapType, gainmap)).assertEqual(ErrorCode.IMAGE_SUCCESS);
        // todo
        expect().assertFalse();
        // expect(ndkTest.GetHdrPixelmapInfo().width).assertEqual(auxInfo.width);
        // expect(ndkTest.GetHdrPixelmapInfo().height).assertEqual(auxInfo.height);
        // expect(ndkTest.GetHdrPixelmapInfo().pixelFormat).assertEqual(auxInfo.pixelFormat);
        done();
      } catch (err) {
        hilog.error(domain, testTag,
          `SUB_MULTIMEDIA_PICTURE_NDK_Picture_GetHdrComposedPixelmap_0100: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_Picture_CreatePictureByPixelmap_0100
     * @tc.name      : testPictureCreatePictureByPixelmap
     * @tc.desc      : Test create picture from pixelmap.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_Picture_CreatePictureByPixelmap_0100', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_Picture_CreatePictureByPixelmap_0100 begin`);
      try {
        let log: Logger = new Logger(`SUB_MULTIMEDIA_PICTURE_NDK_Picture_CreatePictureByPixelmap_0100`);

        testCreatePictureByPixelMap(log, testFileJpg);
        done();
      } catch (err) {
        hilog.error(domain, testTag,
          `SUB_MULTIMEDIA_PICTURE_NDK_Picture_CreatePictureByPixelmap_0100: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_Picture_Release_0100
     * @tc.name      : testPictureRelease
     * @tc.desc      : Test release the created picture.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_Picture_Release_0100', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_Picture_Release_0100 begin`);
      try {
        let log: Logger = new Logger(`SUB_MULTIMEDIA_PICTURE_NDK_Picture_Release_0100`);
        testCreatePictureByPixelMap(log, testFileJpg);

        expect(ndkTest.ReleasePicture()).assertEqual(ErrorCode.IMAGE_SUCCESS);
        done();
      } catch (err) {
        hilog.error(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_Picture_Release_0100: Test exception` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_Metadata_Release_0100
     * @tc.name      : testMetadataRelease
     * @tc.desc      : Test release the EXIF metadata.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_Metadata_Release_0100', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_Metadata_Release_0100 begin`);
      try {
        createDefaultExifMetadata();

        expect(ndkTest.MetadataRelease()).assertEqual(ErrorCode.IMAGE_SUCCESS);
        done();
      } catch (err) {
        hilog.error(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_Metadata_Release_0100: Test exception` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_Metadata_Release_0200
     * @tc.name      : testMetadataRelease
     * @tc.desc      : Test release the FRAGMENT metadata.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_Metadata_Release_0200', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_Metadata_Release_0200 begin`);
      try {
        createDefaultFragmentMetadata();

        expect(ndkTest.MetadataRelease()).assertEqual(ErrorCode.IMAGE_SUCCESS);
        done();
      } catch (err) {
        hilog.error(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_Metadata_Release_0200: Test exception` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_Create_0100
     * @tc.name      : testCreateAuxiliaryPicture
     * @tc.desc      : Test the creation of AuxiliaryPicture with GAIN_MAP type.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_Create_0100', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_Create_0100 begin`);
      try {
        let auxType: image.AuxiliaryPictureType = image.AuxiliaryPictureType.GAINMAP;
        testCreateAuxiliaryPicture(auxType);

        expect(ndkTest.AuxiliaryPictureGetType()).assertEqual(auxType);
        done();
      } catch (err) {
        hilog.error(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_Create_0100: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_Create_0200
     * @tc.name      : testCreateAuxiliaryPicture
     * @tc.desc      : Test the creation of AuxiliaryPicture with DEPTH_MAP type.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_Create_0200', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_Create_0200 begin`);
      try {
        let auxType: image.AuxiliaryPictureType = image.AuxiliaryPictureType.DEPTH_MAP;
        testCreateAuxiliaryPicture(auxType);

        expect(ndkTest.AuxiliaryPictureGetType()).assertEqual(auxType);
        done();
      } catch (err) {
        hilog.error(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_Create_0200: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_Create_0300
     * @tc.name      : testCreateAuxiliaryPicture
     * @tc.desc      : Test the creation of AuxiliaryPicture with UNREFOCUS_MAP type.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_Create_0300', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_Create_0300 begin`);
      try {
        let auxType: image.AuxiliaryPictureType = image.AuxiliaryPictureType.UNREFOCUS_MAP;
        testCreateAuxiliaryPicture(auxType);

        expect(ndkTest.AuxiliaryPictureGetType()).assertEqual(auxType);
        done();
      } catch (err) {
        hilog.error(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_Create_0300: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_Create_0400
     * @tc.name      : testCreateAuxiliaryPicture
     * @tc.desc      : Test the creation of AuxiliaryPicture with LINEAR_MAP type.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_Create_0400', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_Create_0400 begin`);
      try {
        let auxType: image.AuxiliaryPictureType = image.AuxiliaryPictureType.LINEAR_MAP;
        testCreateAuxiliaryPicture(auxType);

        expect(ndkTest.AuxiliaryPictureGetType()).assertEqual(auxType);
        done();
      } catch (err) {
        hilog.error(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_Create_0400: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_Create_0500
     * @tc.name      : testCreateAuxiliaryPicture
     * @tc.desc      : Test the creation of AuxiliaryPicture with FRAGMENT_MAP type.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_Create_0500', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_Create_0500 begin`);
      try {
        let auxType: image.AuxiliaryPictureType = image.AuxiliaryPictureType.FRAGMENT_MAP;
        testCreateAuxiliaryPicture(auxType);

        expect(ndkTest.AuxiliaryPictureGetType()).assertEqual(auxType);
        done();
      } catch (err) {
        hilog.error(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_Create_0500: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_Create_ERROR_0600
     * @tc.name      : testCreateAuxiliaryPicture
     * @tc.desc      : Test the creation of AuxiliaryPicture with illegal type.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_Create_ERROR_0600', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_Create_ERROR_0600 begin`);
      try {
        let auxType: image.AuxiliaryPictureType = -1;
        let auxSize: image.Size = {height: 180, width: 240};
        let auxBuffer = createFillBuffer(172800, 4);

        expect(ndkTest.CreateAuxiliaryPictureErrorCode(auxBuffer, auxSize, auxType))
          .assertEqual(ErrorCode.IMAGE_BAD_PARAMETER);
        done();
      } catch (err) {
        hilog.error(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_Create_ERROR_0600: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_SetMetadata_0100
     * @tc.name      : testAuxiliaryPictureSetMetadata
     * @tc.desc      : Test set fragment metadata to auxiliary picture.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_SetMetadata_0100', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_SetMetadata_0100 begin`);
      try {
        testCreateAuxiliaryPicture(image.AuxiliaryPictureType.FRAGMENT_MAP);

        let inMetadata: image.Metadata = createDefaultFragmentMetadata();
        expect(inMetadata != undefined).assertTrue();

        expect(ndkTest.AuxiliaryPictureSetMetadata(image.MetadataType.FRAGMENT_METADATA, inMetadata))
          .assertEqual(ErrorCode.IMAGE_SUCCESS);
        done();
      } catch (err) {
        hilog.error(domain, testTag,
                    `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_SetMetadata_0100: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_GetMetadata_0100
     * @tc.name      : testAuxiliaryPictureGetMetadata
     * @tc.desc      : Test get metadata from fragment auxiliary picture.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_GetMetadata_0100', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_GetMetadata_0100 begin`);
      try {
        testCreateAuxiliaryPicture(image.AuxiliaryPictureType.FRAGMENT_MAP);

        let fragmentType: image.MetadataType = image.MetadataType.FRAGMENT_METADATA;
        let inMetadata: image.Metadata = createDefaultFragmentMetadata();
        expect(inMetadata != undefined).assertTrue();
        ndkTest.AuxiliaryPictureSetMetadata(fragmentType, inMetadata);

        expect(ndkTest.AuxiliaryPictureGetMetadataErrorCode(fragmentType)).assertEqual(ErrorCode.IMAGE_SUCCESS);
        done();
      } catch (err) {
        hilog.error(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_GetMetadata_0100: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_GetMetadata_ERROR_0200
     * @tc.name      : testAuxiliaryPictureGetMetadata
     * @tc.desc      : Test get metadata from fragment auxiliary picture.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_GetMetadata_ERROR_0200', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_GetMetadata_ERROR_0200 begin`);
        try {
        testCreateAuxiliaryPicture(image.AuxiliaryPictureType.FRAGMENT_MAP);

        let exifType: image.MetadataType = image.MetadataType.EXIF_METADATA;
        let fragmentType: image.MetadataType = image.MetadataType.FRAGMENT_METADATA;
        let inMetadata: image.Metadata = createDefaultFragmentMetadata();
        expect(inMetadata != undefined).assertTrue();
        ndkTest.AuxiliaryPictureSetMetadata(fragmentType, inMetadata);

        expect(ndkTest.AuxiliaryPictureGetMetadataErrorCode(exifType)).assertEqual(ErrorCode.IMAGE_UNSUPPORTED_METADATA);
        done();
       } catch (err) {
         hilog.error(domain, testTag, 
           `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_GetMetadata_ERROR_0200: Test exception ` + err);
         expect().assertFalse();
         done();
       }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_WritePixels_0100
     * @tc.name      : testAuxiliaryPictureWritePixels
     * @tc.desc      : Test write pixels to AuxiliaryPicture.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_WritePixels_0100', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_WritePixels_0100 begin`);
      try {
        let auxSize: image.Size = testFileGainMapSize;
        let buffer = getBuffer(testFileGainMap);
        ndkTest.CreateAuxiliaryPicture(buffer, auxSize, image.AuxiliaryPictureType.GAINMAP);

        expect(ndkTest.AuxiliaryPictureWritePixels(buffer)).assertEqual(ErrorCode.IMAGE_SUCCESS);
        done();
      } catch (err) {
        hilog.error(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_WritePixels_0100: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_WritePixels_ERROR_0200
     * @tc.name      : testAuxiliaryPictureWritePixels
     * @tc.desc      : Test write pixels to AuxiliaryPicture.The pixel data buffer size is abnormal.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_WritePixels_ERROR_0200', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_WritePixels_ERROR_0200 begin`);
      try {
        let auxSize: image.Size = testFileGainMapSize;
        let buffer = createFillBuffer(0, 0);
        ndkTest.CreateAuxiliaryPicture(buffer, auxSize, image.AuxiliaryPictureType.GAINMAP);
        expect(ndkTest.AuxiliaryPictureWritePixelsErrorCode(buffer)).assertEqual(ErrorCode.IMAGE_BAD_PARAMETER);
        done();
      } catch (err) {
        hilog.error(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_WritePixels_ERROR_0200: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    
    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_ReadPixels_0100
     * @tc.name      : testAuxiliaryPictureReadPixels
     * @tc.desc      : Test read pixels from AuxiliaryPicture.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_ReadPixels_0100', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_ReadPixels_0100 begin`);
      try {
        let auxSize: image.Size = testFileGainMapSize;

        let filePath = getFilePath(testFileGainMap);
        let file = fs.openSync(filePath);
        const stats = fs.statSync(filePath);
        const fileSize = stats.size;
        const bufferRead = new ArrayBuffer(fileSize)
        fs.readSync(file.fd, bufferRead)
        let buffer = bufferRead;

        ndkTest.CreateAuxiliaryPicture(buffer, auxSize, image.AuxiliaryPictureType.GAINMAP);

        ndkTest.AuxiliaryPictureWritePixels(buffer);
        let readBuffer: ArrayBuffer = new ArrayBuffer(fileSize);
        expect(ndkTest.AuxiliaryPictureReadPixels(readBuffer)).assertEqual(ErrorCode.IMAGE_SUCCESS);
        expect(compareArrayBuffer(readBuffer, buffer)).assertTrue();
        done();
      } catch (err) {
        hilog.error(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_ReadPixels_0100: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_ReadWritePixels_0100
     * @tc.name      : testAuxiliaryPictureWritePixels
     * @tc.desc      : Test write pixels to AuxiliaryPicture and read pixels from AuxiliaryPicture for JPEG pictures 
                       when AuxiliaryPictureType is GAINMAP.
                       The multi-image object is conducted through the decoding path with an AuxiliaryPicture.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_ReadWritePixels_0100', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_ReadWritePixels_0100 begin`);
      try {
        let filePath = getFilePath(testFileWithFiveAuxiliaryPictureJpg);
        ndkTest.CreatePictureDecodingOptions();
        let inAuxTpyes: Array<image.AuxiliaryPictureType> = [image.AuxiliaryPictureType.GAINMAP];
        ndkTest.SetDesiredAuxiliaryPictures(inAuxTpyes.length, inAuxTpyes);
        ndkTest.createTestImageSource(filePath);
        ndkTest.CreatePictureByImageSource();

        let auxPicture = ndkTest.GetAuxiliaryPicture(image.AuxiliaryPictureType.GAINMAP);
        expect(auxPicture != undefined).assertTrue();
        expect(ndkTest.SetAuxiliaryPicture(image.AuxiliaryPictureType.GAINMAP, auxPicture))
          .assertEqual(ErrorCode.IMAGE_SUCCESS);

        let buffer = getBuffer(testFileGainMap);
        let readBuffer: ArrayBuffer = new ArrayBuffer(buffer.byteLength);
        expect(ndkTest.AuxiliaryPictureWritePixels(buffer)).assertEqual(ErrorCode.IMAGE_SUCCESS);
        expect(ndkTest.AuxiliaryPictureReadPixels(readBuffer)).assertEqual(ErrorCode.IMAGE_SUCCESS);
        expect(compareArrayBuffer(readBuffer, buffer)).assertTrue();
        done();
      } catch (err) {
        hilog.error(domain, testTag,
          `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_ReadWritePixels_0100: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_ReadWritePixels_0200
     * @tc.name      : testAuxiliaryPictureWritePixels
     * @tc.desc      : Test write pixels to AuxiliaryPicture and read pixels from AuxiliaryPicture for HEIF pictures 
                       when AuxiliaryPictureType is GAINMAP .
                       The multi-image object is conducted through the decoding path with an AuxiliaryPicture.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_ReadWritePixels_0200', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_ReadWritePixels_0200 begin`);
      try {
        let filePath = getFilePath(testFileWithFiveAuxiliaryPictureHeic);
        ndkTest.CreatePictureDecodingOptions();
        let inAuxTpyes: Array<image.AuxiliaryPictureType> = [image.AuxiliaryPictureType.GAINMAP];
        ndkTest.SetDesiredAuxiliaryPictures(inAuxTpyes.length, inAuxTpyes);
        ndkTest.createTestImageSource(filePath);
        ndkTest.CreatePictureByImageSource();

        let auxPicture = ndkTest.GetAuxiliaryPicture(image.AuxiliaryPictureType.GAINMAP);
        expect(auxPicture != undefined).assertTrue();
        expect(ndkTest.SetAuxiliaryPicture(image.AuxiliaryPictureType.GAINMAP, auxPicture))
          .assertEqual(ErrorCode.IMAGE_SUCCESS);

        let buffer = getBuffer(testFileGainMap);
        let readBuffer: ArrayBuffer = new ArrayBuffer(buffer.byteLength);
        expect(ndkTest.AuxiliaryPictureWritePixels(buffer)).assertEqual(ErrorCode.IMAGE_SUCCESS);
        expect(ndkTest.AuxiliaryPictureReadPixels(readBuffer)).assertEqual(ErrorCode.IMAGE_SUCCESS);
        expect(compareArrayBuffer(readBuffer, buffer)).assertTrue();
        done();
      } catch (err) {
        hilog.error(domain, testTag,
          `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_ReadWritePixels_0200: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_ReadWritePixels_0300
     * @tc.name      : testAuxiliaryPictureWritePixels
     * @tc.desc      : Test write pixels to AuxiliaryPicture and read pixels from AuxiliaryPicture for JPEG pictures 
                       when AuxiliaryPictureType is DEPTH_MAP .
                       The multi-image object is conducted through the decoding path with an AuxiliaryPicture.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_ReadWritePixels_0300', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_ReadWritePixels_0300 begin`);
      try {
        let filePath = getFilePath(testFileWithFiveAuxiliaryPictureJpg);
        ndkTest.CreatePictureDecodingOptions();
        let inAuxTpyes: Array<image.AuxiliaryPictureType> = [image.AuxiliaryPictureType.DEPTH_MAP];
        ndkTest.SetDesiredAuxiliaryPictures(inAuxTpyes.length, inAuxTpyes);
        ndkTest.createTestImageSource(filePath);
        ndkTest.CreatePictureByImageSource();

        let auxPicture = ndkTest.GetAuxiliaryPicture(image.AuxiliaryPictureType.DEPTH_MAP);
        expect(auxPicture != undefined).assertTrue();
        expect(ndkTest.SetAuxiliaryPicture(image.AuxiliaryPictureType.DEPTH_MAP, auxPicture))
          .assertEqual(ErrorCode.IMAGE_SUCCESS);

        let buffer = getBuffer(testFileGainMap);
        let readBuffer: ArrayBuffer = new ArrayBuffer(buffer.byteLength);
        expect(ndkTest.AuxiliaryPictureWritePixels(buffer)).assertEqual(ErrorCode.IMAGE_SUCCESS);
        expect(ndkTest.AuxiliaryPictureReadPixels(readBuffer)).assertEqual(ErrorCode.IMAGE_SUCCESS);
        expect(compareArrayBuffer(readBuffer, buffer)).assertTrue();
        done();
      } catch (err) {
        hilog.error(domain, testTag,
          `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_ReadWritePixels_0300: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_ReadWritePixels_0400
     * @tc.name      : testAuxiliaryPictureWritePixels
     * @tc.desc      : Test write pixels to AuxiliaryPicture and read pixels from AuxiliaryPicture for HEIF pictures 
                       when AuxiliaryPictureType is DEPTH_MAP .
                       The multi-image object is conducted through the decoding path with an AuxiliaryPicture.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_ReadWritePixels_0400', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_ReadWritePixels_0400 begin`);
      try {
        let filePath = getFilePath(testFileWithFiveAuxiliaryPictureHeic);
        ndkTest.CreatePictureDecodingOptions();
        let inAuxTpyes: Array<image.AuxiliaryPictureType> = [image.AuxiliaryPictureType.DEPTH_MAP];
        ndkTest.SetDesiredAuxiliaryPictures(inAuxTpyes.length, inAuxTpyes);
        ndkTest.createTestImageSource(filePath);
        ndkTest.CreatePictureByImageSource();

        let auxPicture = ndkTest.GetAuxiliaryPicture(image.AuxiliaryPictureType.DEPTH_MAP);
        expect(auxPicture != undefined).assertTrue();
        expect(ndkTest.SetAuxiliaryPicture(image.AuxiliaryPictureType.DEPTH_MAP, auxPicture))
          .assertEqual(ErrorCode.IMAGE_SUCCESS);

        let buffer = getBuffer(testFileGainMap);
        let readBuffer: ArrayBuffer = new ArrayBuffer(buffer.byteLength);
        expect(ndkTest.AuxiliaryPictureWritePixels(buffer)).assertEqual(ErrorCode.IMAGE_SUCCESS);
        expect(ndkTest.AuxiliaryPictureReadPixels(readBuffer)).assertEqual(ErrorCode.IMAGE_SUCCESS);
        expect(compareArrayBuffer(readBuffer, buffer)).assertTrue();
        done();
      } catch (err) {
        hilog.error(domain, testTag,
          `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_ReadWritePixels_0400: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_ReadWritePixels_0500
     * @tc.name      : testAuxiliaryPictureWritePixels
     * @tc.desc      : Test write pixels to AuxiliaryPicture and read pixels from AuxiliaryPicture for JPEG pictures 
                       when AuxiliaryPictureType is UNREFOCUS_MAP .
                       The multi-image object is conducted through the decoding path with an AuxiliaryPicture.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_ReadWritePixels_0500', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_ReadWritePixels_0500 begin`);
      try {
        let filePath = getFilePath(testFileWithFiveAuxiliaryPictureJpg);
        ndkTest.CreatePictureDecodingOptions();
        let inAuxTpyes: Array<image.AuxiliaryPictureType> = [image.AuxiliaryPictureType.UNREFOCUS_MAP];
        ndkTest.SetDesiredAuxiliaryPictures(inAuxTpyes.length, inAuxTpyes);
        ndkTest.createTestImageSource(filePath);
        ndkTest.CreatePictureByImageSource();

        let auxPicture = ndkTest.GetAuxiliaryPicture(image.AuxiliaryPictureType.UNREFOCUS_MAP);
        expect(auxPicture != undefined).assertTrue();
        expect(ndkTest.SetAuxiliaryPicture(image.AuxiliaryPictureType.UNREFOCUS_MAP, auxPicture))
          .assertEqual(ErrorCode.IMAGE_SUCCESS);

        let buffer = getBuffer(testFileGainMap);
        let readBuffer: ArrayBuffer = new ArrayBuffer(buffer.byteLength);
        expect(ndkTest.AuxiliaryPictureWritePixels(buffer)).assertEqual(ErrorCode.IMAGE_SUCCESS);
        expect(ndkTest.AuxiliaryPictureReadPixels(readBuffer)).assertEqual(ErrorCode.IMAGE_SUCCESS);
        expect(compareArrayBuffer(readBuffer, buffer)).assertTrue();
        done();
      } catch (err) {
        hilog.error(domain, testTag,
          `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_ReadWritePixels_0500: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_ReadWritePixels_0600
     * @tc.name      : testAuxiliaryPictureWritePixels
     * @tc.desc      : Test write pixels to AuxiliaryPicture and read pixels from AuxiliaryPicture for HEIF pictures 
                       when AuxiliaryPictureType is UNREFOCUS_MAP .
                       The multi-image object is conducted through the decoding path with an AuxiliaryPicture.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_ReadWritePixels_0600', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_ReadWritePixels_0600 begin`);
      try {
        let filePath = getFilePath(testFileWithFiveAuxiliaryPictureHeic);
        ndkTest.CreatePictureDecodingOptions();
        let inAuxTpyes: Array<image.AuxiliaryPictureType> = [image.AuxiliaryPictureType.UNREFOCUS_MAP];
        ndkTest.SetDesiredAuxiliaryPictures(inAuxTpyes.length, inAuxTpyes);
        ndkTest.createTestImageSource(filePath);
        ndkTest.CreatePictureByImageSource();

        let auxPicture = ndkTest.GetAuxiliaryPicture(image.AuxiliaryPictureType.UNREFOCUS_MAP);
        expect(auxPicture != undefined).assertTrue();
        expect(ndkTest.SetAuxiliaryPicture(image.AuxiliaryPictureType.UNREFOCUS_MAP, auxPicture))
          .assertEqual(ErrorCode.IMAGE_SUCCESS);

        let buffer = getBuffer(testFileGainMap);
        let readBuffer: ArrayBuffer = new ArrayBuffer(buffer.byteLength);
        expect(ndkTest.AuxiliaryPictureWritePixels(buffer)).assertEqual(ErrorCode.IMAGE_SUCCESS);
        expect(ndkTest.AuxiliaryPictureReadPixels(readBuffer)).assertEqual(ErrorCode.IMAGE_SUCCESS);
        expect(compareArrayBuffer(readBuffer, buffer)).assertTrue();
        done();
      } catch (err) {
        hilog.error(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_ReadWritePixels_0600: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_ReadWritePixels_0700
     * @tc.name      : testAuxiliaryPictureWritePixels
     * @tc.desc      : Test write pixels to AuxiliaryPicture and read pixels from AuxiliaryPicture for JPEG pictures 
                       when AuxiliaryPictureType is LINEAR_MAP .
                       The multi-image object is conducted through the decoding path with an AuxiliaryPicture.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_ReadWritePixels_0700', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_ReadWritePixels_0700 begin`);
      try {
        let filePath = getFilePath(testFileWithFiveAuxiliaryPictureJpg);
        ndkTest.CreatePictureDecodingOptions();
        let inAuxTpyes: Array<image.AuxiliaryPictureType> = [image.AuxiliaryPictureType.LINEAR_MAP];
        ndkTest.SetDesiredAuxiliaryPictures(inAuxTpyes.length, inAuxTpyes);
        ndkTest.createTestImageSource(filePath);
        ndkTest.CreatePictureByImageSource();

        let auxPicture = ndkTest.GetAuxiliaryPicture(image.AuxiliaryPictureType.LINEAR_MAP);
        expect(auxPicture != undefined).assertTrue();
        expect(ndkTest.SetAuxiliaryPicture(image.AuxiliaryPictureType.LINEAR_MAP, auxPicture))
          .assertEqual(ErrorCode.IMAGE_SUCCESS);

        let buffer = getBuffer(testFileGainMap);
        let readBuffer: ArrayBuffer = new ArrayBuffer(buffer.byteLength);
        expect(ndkTest.AuxiliaryPictureWritePixels(buffer)).assertEqual(ErrorCode.IMAGE_SUCCESS);
        expect(ndkTest.AuxiliaryPictureReadPixels(readBuffer)).assertEqual(ErrorCode.IMAGE_SUCCESS);
        expect(compareArrayBuffer(readBuffer, buffer)).assertTrue();
        done();
      } catch (err) {
        hilog.error(domain, testTag,
          `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_ReadWritePixels_0700: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_ReadWritePixels_0800
     * @tc.name      : testAuxiliaryPictureWritePixels
     * @tc.desc      : Test write pixels to AuxiliaryPicture and read pixels from AuxiliaryPicture for HEIF pictures 
                       when AuxiliaryPictureType is LINEAR_MAP .
                       The multi-image object is conducted through the decoding path with an AuxiliaryPicture.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_ReadWritePixels_0800', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_ReadWritePixels_0800 begin`);
      try {
        let filePath = getFilePath(testFileWithFiveAuxiliaryPictureHeic);
        ndkTest.CreatePictureDecodingOptions();
        let inAuxTpyes: Array<image.AuxiliaryPictureType> = [image.AuxiliaryPictureType.LINEAR_MAP];
        ndkTest.SetDesiredAuxiliaryPictures(inAuxTpyes.length, inAuxTpyes);
        ndkTest.createTestImageSource(filePath);
        ndkTest.CreatePictureByImageSource();

        let auxPicture = ndkTest.GetAuxiliaryPicture(image.AuxiliaryPictureType.LINEAR_MAP);
        expect(auxPicture != undefined).assertTrue();
        expect(ndkTest.SetAuxiliaryPicture(image.AuxiliaryPictureType.LINEAR_MAP, auxPicture))
          .assertEqual(ErrorCode.IMAGE_SUCCESS);

        let buffer = getBuffer(testFileGainMap);
        let readBuffer: ArrayBuffer = new ArrayBuffer(buffer.byteLength);
        expect(ndkTest.AuxiliaryPictureWritePixels(buffer)).assertEqual(ErrorCode.IMAGE_SUCCESS);
        expect(ndkTest.AuxiliaryPictureReadPixels(readBuffer)).assertEqual(ErrorCode.IMAGE_SUCCESS);
        expect(compareArrayBuffer(readBuffer, buffer)).assertTrue();
        done();
      } catch (err) {
        hilog.error(domain, testTag,
          `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_ReadWritePixels_0800: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_ReadWritePixels_0900
     * @tc.name      : testAuxiliaryPictureWritePixels
     * @tc.desc      : Test write pixels to AuxiliaryPicture and read pixels from AuxiliaryPicture for JPEG pictures 
                       when AuxiliaryPictureType is FRAGMENT_MAP.
                       The multi-image object is conducted through the decoding path with an AuxiliaryPicture.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_ReadWritePixels_0900', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_ReadWritePixels_0900 begin`);
      try {
        let filePath = getFilePath(testFileFragmentJpg);
        ndkTest.CreatePictureDecodingOptions();
        let inAuxTpyes: Array<image.AuxiliaryPictureType> = [image.AuxiliaryPictureType.FRAGMENT_MAP];
        ndkTest.SetDesiredAuxiliaryPictures(inAuxTpyes.length, inAuxTpyes);
        ndkTest.createTestImageSource(filePath);
        ndkTest.CreatePictureByImageSource();

        let auxPicture = ndkTest.GetAuxiliaryPicture(image.AuxiliaryPictureType.FRAGMENT_MAP);
        expect(auxPicture != undefined).assertTrue();
        expect(ndkTest.SetAuxiliaryPicture(image.AuxiliaryPictureType.FRAGMENT_MAP, auxPicture))
          .assertEqual(ErrorCode.IMAGE_SUCCESS);

        let buffer = getBuffer(testFileFragment);
        let readBuffer: ArrayBuffer = new ArrayBuffer(buffer.byteLength);
        expect(ndkTest.AuxiliaryPictureWritePixels(buffer)).assertEqual(ErrorCode.IMAGE_SUCCESS);
        expect(ndkTest.AuxiliaryPictureReadPixels(readBuffer)).assertEqual(ErrorCode.IMAGE_SUCCESS);
        expect(compareArrayBuffer(readBuffer, buffer)).assertTrue();
        done();
      } catch (err) {
        hilog.error(domain, testTag,
          `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_ReadWritePixels_0900: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_ReadWritePixels_1000
     * @tc.name      : testAuxiliaryPictureWritePixels
     * @tc.desc      : Test write pixels to AuxiliaryPicture and read pixels from AuxiliaryPicture for HEIF pictures 
                       when AuxiliaryPictureType is FRAGMENT_MAP .
                       The multi-image object is conducted through the decoding path with an AuxiliaryPicture.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_ReadWritePixels_1000', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_ReadWritePixels_1000 begin`);
      try {
        let filePath = getFilePath(testFileWithFiveAuxiliaryPictureHeic);
        ndkTest.CreatePictureDecodingOptions();
        let inAuxTpyes: Array<image.AuxiliaryPictureType> = [image.AuxiliaryPictureType.FRAGMENT_MAP];
        ndkTest.SetDesiredAuxiliaryPictures(inAuxTpyes.length, inAuxTpyes);
        ndkTest.createTestImageSource(filePath);
        ndkTest.CreatePictureByImageSource();

        let auxPicture = ndkTest.GetAuxiliaryPicture(image.AuxiliaryPictureType.FRAGMENT_MAP);
        expect(auxPicture != undefined).assertTrue();
        expect(ndkTest.SetAuxiliaryPicture(image.AuxiliaryPictureType.FRAGMENT_MAP, auxPicture))
          .assertEqual(ErrorCode.IMAGE_SUCCESS);

        let buffer = getBuffer(testFileGainMap);
        let readBuffer: ArrayBuffer = new ArrayBuffer(buffer.byteLength);
        expect(ndkTest.AuxiliaryPictureWritePixels(buffer)).assertEqual(ErrorCode.IMAGE_SUCCESS);
        expect(ndkTest.AuxiliaryPictureReadPixels(readBuffer)).assertEqual(ErrorCode.IMAGE_SUCCESS);
        expect(compareArrayBuffer(readBuffer, buffer)).assertTrue();
        done();
      } catch (err) {
        hilog.error(domain, testTag,
          `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_ReadWritePixels_1000: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_SetInfo_0100
     * @tc.name      : testAuxiliaryPictureSetInfo
     * @tc.desc      : Test set type to AuxiliaryPictureInfo,then set AuxiliaryPictureInfo to 
                       AuxiliaryPicture which get from Picture created by ImageSource.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_SetInfo_0100', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_SetInfo_0100 begin`);
      try {
        let log: Logger = new Logger(`SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_SetInfo_0100`);
        testCreateImageSource(log, testFileJpg);
        ndkTest.CreatePictureDecodingOptions();

        let inAuxTpyes: Array<image.AuxiliaryPictureType> = [image.AuxiliaryPictureType.GAINMAP];
        ndkTest.SetDesiredAuxiliaryPictures(inAuxTpyes.length, inAuxTpyes);
        ndkTest.CreatePictureByImageSource();

        let gainmapType: image.AuxiliaryPictureType = image.AuxiliaryPictureType.GAINMAP;
        let auxPicture: image.AuxiliaryPicture = testCreateAuxiliaryPicture(gainmapType);
        ndkTest.SetAuxiliaryPicture(gainmapType, auxPicture);
        ndkTest.GetAuxiliaryPicture(gainmapType);

        let auxInfo: ndkTest.IAuxInfo = {
          auxiliaryPictureType: image.AuxiliaryPictureType.UNREFOCUS_MAP,
          width: ndkTest.AuxiliaryPictureGetInfo().width,
          height: ndkTest.AuxiliaryPictureGetInfo().height,
          rowStride: ndkTest.AuxiliaryPictureGetInfo().rowStride,
          pixelFormat: ndkTest.AuxiliaryPictureGetInfo().pixelFormat
        };
        ndkTest.AuxiliaryPictureSetInfo(auxInfo);

        let newType: image.AuxiliaryPictureType = image.AuxiliaryPictureType.UNREFOCUS_MAP;
        expect(ndkTest.AuxiliaryPictureGetInfo().auxiliaryPictureType).assertEqual(newType);
        ndkTest.ReleaseAuxiliaryPicture();
        done();
      } catch (err) {
        hilog.error(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_SetInfo_0100: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_SetInfo_0200
     * @tc.name      : testAuxiliaryPictureSetInfo
     * @tc.desc      : Test set size to AuxiliaryPictureInfo,then set AuxiliaryPictureInfo to 
                       AuxiliaryPicture which get from Picture created by ImageSource.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_SetInfo_0200', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_SetInfo_0200 begin`);
      try {
        let log: Logger = new Logger(`SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_SetInfo_0200`);
        testCreateImageSource(log, testFileJpg);
        ndkTest.CreatePictureDecodingOptions();

        let inAuxTpyes: Array<image.AuxiliaryPictureType> = [image.AuxiliaryPictureType.GAINMAP];
        ndkTest.SetDesiredAuxiliaryPictures(inAuxTpyes.length, inAuxTpyes);
        ndkTest.CreatePictureByImageSource();

        let gainmapType: image.AuxiliaryPictureType = image.AuxiliaryPictureType.GAINMAP;
        let auxPicture: image.AuxiliaryPicture = testCreateAuxiliaryPicture(gainmapType);
        ndkTest.SetAuxiliaryPicture(gainmapType, auxPicture);
        ndkTest.GetAuxiliaryPicture(gainmapType);

        let auxInfo: ndkTest.IAuxInfo = {
          auxiliaryPictureType: ndkTest.AuxiliaryPictureGetInfo().auxiliaryPictureType,
          width: 30,
          height: 40,
          rowStride: ndkTest.AuxiliaryPictureGetInfo().rowStride,
          pixelFormat: ndkTest.AuxiliaryPictureGetInfo().pixelFormat
        };
        ndkTest.AuxiliaryPictureSetInfo(auxInfo);

        expect(ndkTest.AuxiliaryPictureGetInfo().width).assertEqual(30);
        expect(ndkTest.AuxiliaryPictureGetInfo().height).assertEqual(40);
        ndkTest.ReleaseAuxiliaryPicture();
        done();
      } catch (err) {
        hilog.error(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_SetInfo_0200: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_SetInfo_0300
     * @tc.name      : testAuxiliaryPictureSetInfo
     * @tc.desc      : Test set rowStride to AuxiliaryPictureInfo,then set AuxiliaryPictureInfo to 
                       AuxiliaryPicture which get from Picture created by ImageSource.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_SetInfo_0300', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_SetInfo_0300 begin`);
      try {
        let log: Logger = new Logger(`SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_SetInfo_0300`);
        testCreateImageSource(log, testFileJpg);
        ndkTest.CreatePictureDecodingOptions();

        let inAuxTpyes: Array<image.AuxiliaryPictureType> = [image.AuxiliaryPictureType.GAINMAP];
        ndkTest.SetDesiredAuxiliaryPictures(inAuxTpyes.length, inAuxTpyes);
        ndkTest.CreatePictureByImageSource();

        let gainmapType: image.AuxiliaryPictureType = image.AuxiliaryPictureType.GAINMAP;
        let auxPicture: image.AuxiliaryPicture = testCreateAuxiliaryPicture(gainmapType);
        ndkTest.SetAuxiliaryPicture(gainmapType, auxPicture);
        ndkTest.GetAuxiliaryPicture(gainmapType);

        let auxInfo: ndkTest.IAuxInfo = {
          auxiliaryPictureType: ndkTest.AuxiliaryPictureGetInfo().auxiliaryPictureType,
          width: ndkTest.AuxiliaryPictureGetInfo().width,
          height: ndkTest.AuxiliaryPictureGetInfo().height,
          rowStride: 20,
          pixelFormat: ndkTest.AuxiliaryPictureGetInfo().pixelFormat
        };
        ndkTest.AuxiliaryPictureSetInfo(auxInfo);

        expect(ndkTest.AuxiliaryPictureGetInfo().rowStride).assertEqual(20);
        ndkTest.ReleaseAuxiliaryPicture();
        done();
      } catch (err) {
        hilog.error(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_SetInfo_0300: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_SetInfo_0400
     * @tc.name      : testAuxiliaryPictureSetInfo
     * @tc.desc      : Test set pixelFormat to AuxiliaryPictureInfo,then set AuxiliaryPictureInfo to 
                       AuxiliaryPicture which get from Picture created by ImageSource.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_SetInfo_0400', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_SetInfo_0400 begin`);
      try {
        let log: Logger = new Logger(`SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_SetInfo_0400`);
        testCreateImageSource(log, testFileJpg);
        ndkTest.CreatePictureDecodingOptions();

        let inAuxTpyes: Array<image.AuxiliaryPictureType> = [image.AuxiliaryPictureType.GAINMAP];
        ndkTest.SetDesiredAuxiliaryPictures(inAuxTpyes.length, inAuxTpyes);
        ndkTest.CreatePictureByImageSource();

        let gainmapType: image.AuxiliaryPictureType = image.AuxiliaryPictureType.GAINMAP;
        let auxPicture: image.AuxiliaryPicture = testCreateAuxiliaryPicture(gainmapType);
        ndkTest.SetAuxiliaryPicture(gainmapType, auxPicture);
        ndkTest.GetAuxiliaryPicture(gainmapType);

        let auxInfo: ndkTest.IAuxInfo = {
          auxiliaryPictureType: ndkTest.AuxiliaryPictureGetInfo().auxiliaryPictureType,
          width: ndkTest.AuxiliaryPictureGetInfo().width,
          height: ndkTest.AuxiliaryPictureGetInfo().height,
          rowStride: ndkTest.AuxiliaryPictureGetInfo().rowStride,
          pixelFormat:  image.PixelMapFormat.RGBA_8888
        };
        ndkTest.AuxiliaryPictureSetInfo(auxInfo);

        expect(ndkTest.AuxiliaryPictureGetInfo().pixelFormat).assertEqual(auxInfo.pixelFormat);
        ndkTest.ReleaseAuxiliaryPicture();
        done();
      } catch (err) {
        hilog.error(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_SetInfo_0400: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_SetInfo_0500
     * @tc.name      : testAuxiliaryPictureSetInfo
     * @tc.desc      : Test set auxiliaryPictureInfo to auxiliaryPicture
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_SetInfo_0500', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_SetInfo_0500 begin`);
      try {
        testCreateAuxiliaryPicture(image.AuxiliaryPictureType.GAINMAP);

        let auxInfo: ndkTest.IAuxInfo = {
          auxiliaryPictureType: image.AuxiliaryPictureType.GAINMAP,
          width: 10,
          height: 20,
          rowStride: 30,
          pixelFormat: image.PixelMapFormat.RGBA_8888
        };
        expect(ndkTest.AuxiliaryPictureSetInfo(auxInfo)).assertEqual(ErrorCode.IMAGE_SUCCESS);
        done();
      } catch (err) {
        hilog.error(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_SetInfo_0500: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_GetInfo_0100
     * @tc.name      : testAuxiliaryPictureGetInfo
     * @tc.desc      : Test get auxiliaryPictureInfo from auxiliaryPicture
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_GetInfo_0100', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_GetInfo_0100 begin`);
      try {
        testCreateAuxiliaryPicture(image.AuxiliaryPictureType.GAINMAP);

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
        hilog.error(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_GetInfo_0100: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_Release_0100
     * @tc.name      : testAuxiliaryPictureRelease
     * @tc.desc      : Test release the created (GAINMAP/DEPTH_MAP/UNREFOCUS_MAP/LINEAR_MAP/FRAGMENT_MAP) object.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_Release_0100', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_Release_0100 begin`);
      try {
        let auxPicture: image.AuxiliaryPicture = testCreateAuxiliaryPicture(image.AuxiliaryPictureType.GAINMAP);
        ndkTest.SetAuxiliaryPicture(image.AuxiliaryPictureType.GAINMAP, auxPicture);
        expect(ndkTest.ReleaseAuxiliaryPicture()).assertEqual(ErrorCode.IMAGE_SUCCESS);

        auxPicture = testCreateAuxiliaryPicture(image.AuxiliaryPictureType.DEPTH_MAP);
        ndkTest.SetAuxiliaryPicture(image.AuxiliaryPictureType.DEPTH_MAP, auxPicture);
        expect(ndkTest.ReleaseAuxiliaryPicture()).assertEqual(ErrorCode.IMAGE_SUCCESS);

        auxPicture = testCreateAuxiliaryPicture(image.AuxiliaryPictureType.UNREFOCUS_MAP);
        ndkTest.SetAuxiliaryPicture(image.AuxiliaryPictureType.UNREFOCUS_MAP, auxPicture);
        expect(ndkTest.ReleaseAuxiliaryPicture()).assertEqual(ErrorCode.IMAGE_SUCCESS);

        auxPicture = testCreateAuxiliaryPicture(image.AuxiliaryPictureType.LINEAR_MAP);
        ndkTest.SetAuxiliaryPicture(image.AuxiliaryPictureType.LINEAR_MAP, auxPicture);
        expect(ndkTest.ReleaseAuxiliaryPicture()).assertEqual(ErrorCode.IMAGE_SUCCESS);
 
        auxPicture = testCreateAuxiliaryPicture(image.AuxiliaryPictureType.FRAGMENT_MAP);
        ndkTest.SetAuxiliaryPicture(image.AuxiliaryPictureType.FRAGMENT_MAP, auxPicture);
        expect(ndkTest.ReleaseAuxiliaryPicture()).assertEqual(ErrorCode.IMAGE_SUCCESS);

        done();
      } catch (err) {
        hilog.error(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_Release_0100: Test exception` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_Release_0200
     * @tc.name      : testAuxiliaryPictureRelease
     * @tc.desc      : Test release the AuxiliaryPicture added to picture.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_Release_0200', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_Release_0200 begin`);
      try {
        let log: Logger = new Logger(`SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_Release_0200`);
        testCreatePictureByPixelMap(log, testFileWithFiveAuxiliaryPictureJpg);

        let auxPicture: image.AuxiliaryPicture = testCreateAuxiliaryPicture(image.AuxiliaryPictureType.GAINMAP);
        ndkTest.SetAuxiliaryPicture(image.AuxiliaryPictureType.GAINMAP, auxPicture);
        expect(ndkTest.ReleaseAuxiliaryPicture()).assertEqual(ErrorCode.IMAGE_SUCCESS);

        auxPicture = testCreateAuxiliaryPicture(image.AuxiliaryPictureType.DEPTH_MAP);
        ndkTest.SetAuxiliaryPicture(image.AuxiliaryPictureType.DEPTH_MAP, auxPicture);
        expect(ndkTest.ReleaseAuxiliaryPicture()).assertEqual(ErrorCode.IMAGE_SUCCESS);

        auxPicture = testCreateAuxiliaryPicture(image.AuxiliaryPictureType.UNREFOCUS_MAP);
        ndkTest.SetAuxiliaryPicture(image.AuxiliaryPictureType.UNREFOCUS_MAP, auxPicture);
        expect(ndkTest.ReleaseAuxiliaryPicture()).assertEqual(ErrorCode.IMAGE_SUCCESS);

        auxPicture = testCreateAuxiliaryPicture(image.AuxiliaryPictureType.LINEAR_MAP);
        ndkTest.SetAuxiliaryPicture(image.AuxiliaryPictureType.LINEAR_MAP, auxPicture);
        expect(ndkTest.ReleaseAuxiliaryPicture()).assertEqual(ErrorCode.IMAGE_SUCCESS);

        auxPicture = testCreateAuxiliaryPicture(image.AuxiliaryPictureType.FRAGMENT_MAP);
        ndkTest.SetAuxiliaryPicture(image.AuxiliaryPictureType.FRAGMENT_MAP, auxPicture);
        expect(ndkTest.ReleaseAuxiliaryPicture()).assertEqual(ErrorCode.IMAGE_SUCCESS);

        done();
      } catch (err) {
        hilog.error(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_Release_0200: Test exception` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_Create_0100
     * @tc.name      : testAuxiliaryPictureInfoCrerate
     * @tc.desc      : Test create auxiliaryPictureInfo
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_Create_0100', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_Create_0100 begin`);
      try {
        expect(ndkTest.CreateAuxiliaryPictureInfo() != undefined).assertTrue();
        done();
      } catch (err) {
        hilog.error(domain, testTag,
          `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_Create_0100: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetType_GetType_0100
     * @tc.name      : testAuxiliaryPictureInfoSetTypeGetType
     * @tc.desc      : Test set and get type from auxiliaryPictureInfo
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetType_GetType_0100', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetType_GetType_0100 begin`);
      try {
        ndkTest.CreateAuxiliaryPictureInfo();
        let auxType: image.AuxiliaryPictureType = image.AuxiliaryPictureType.GAINMAP;
        expect(ndkTest.AuxiliaryPictureInfoSetType(auxType)).assertEqual(ErrorCode.IMAGE_SUCCESS);

        expect(ndkTest.AuxiliaryPictureInfoGetType()).assertEqual(auxType);
        done();
      } catch (err) {
        hilog.error(domain, testTag,
          `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetType_GetType_0100: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetType_GetType_0200
     * @tc.name      : testAuxiliaryPictureInfoSetTypeGetType
     * @tc.desc      : Test set and get type from auxiliaryPictureInfo
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetType_GetType_0200', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetType_GetType_0200 begin`);
      try {
        ndkTest.CreateAuxiliaryPictureInfo();
        let auxType: image.AuxiliaryPictureType = image.AuxiliaryPictureType.DEPTH_MAP;
        expect(ndkTest.AuxiliaryPictureInfoSetType(auxType)).assertEqual(ErrorCode.IMAGE_SUCCESS);

        expect(ndkTest.AuxiliaryPictureInfoGetType()).assertEqual(auxType);
        done();
      } catch (err) {
        hilog.error(domain, testTag,
          `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetType_GetType_0200: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetType_GetType_0300
     * @tc.name      : testAuxiliaryPictureInfoSetTypeGetType
     * @tc.desc      : Test set and get type from auxiliaryPictureInfo
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetType_GetType_0300', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetType_GetType_0300 begin`);
      try {
        ndkTest.CreateAuxiliaryPictureInfo();
        let auxType: image.AuxiliaryPictureType = image.AuxiliaryPictureType.UNREFOCUS_MAP;
        expect(ndkTest.AuxiliaryPictureInfoSetType(auxType)).assertEqual(ErrorCode.IMAGE_SUCCESS);

        expect(ndkTest.AuxiliaryPictureInfoGetType()).assertEqual(auxType);
        done();
      } catch (err) {
        hilog.error(domain, testTag,
          `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetType_GetType_0300: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetType_GetType_0400
     * @tc.name      : testAuxiliaryPictureInfoSetTypeGetType
     * @tc.desc      : Test set and get type from auxiliaryPictureInfo
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetType_GetType_0400', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetType_GetType_0400 begin`);
      try {
        ndkTest.CreateAuxiliaryPictureInfo();
        let auxType: image.AuxiliaryPictureType = image.AuxiliaryPictureType.LINEAR_MAP;
        expect(ndkTest.AuxiliaryPictureInfoSetType(auxType)).assertEqual(ErrorCode.IMAGE_SUCCESS);

        expect(ndkTest.AuxiliaryPictureInfoGetType()).assertEqual(auxType);
        done();
      } catch (err) {
        hilog.error(domain, testTag,
          `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetType_GetType_0400: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetType_GetType_0500
     * @tc.name      : testAuxiliaryPictureInfoSetTypeGetType
     * @tc.desc      : Test set and get type from auxiliaryPictureInfo
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetType_GetType_0500', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetType_GetType_0500 begin`);
      try {
        ndkTest.CreateAuxiliaryPictureInfo();
        let auxType: image.AuxiliaryPictureType = image.AuxiliaryPictureType.FRAGMENT_MAP;
        expect(ndkTest.AuxiliaryPictureInfoSetType(auxType)).assertEqual(ErrorCode.IMAGE_SUCCESS);

        expect(ndkTest.AuxiliaryPictureInfoGetType()).assertEqual(auxType);
        done();
      } catch (err) {
        hilog.error(domain, testTag,
          `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetType_GetType_0500: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })


    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetType_ERROR_0600
     * @tc.name      : testAuxiliaryPictureInfoSetType
     * @tc.desc      : Test set illegal type to AuxiliaryPictureInfo.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetType_ERROR_0600', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetType_ERROR_0600 begin`);
      try {
        ndkTest.CreateAuxiliaryPictureInfo();

        let auxType: number = -1;
        expect(ndkTest.AuxiliaryPictureInfoSetTypeErrorCode(auxType)).assertEqual(ErrorCode.IMAGE_BAD_PARAMETER);
        done();
      } catch (err) {
        hilog.error(domain, testTag,
          `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetType_ERROR_0600: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetSize_GetSize_0100
     * @tc.name      : testAuxiliaryPictureInfoSetSizeGetSize
     * @tc.desc      : Test set and get normal size about AuxiliaryPictureInfo.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetSize_GetSize_0100', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetSize_GetSize_0100 begin`);
      try {
        ndkTest.CreateAuxiliaryPictureInfo();
        let inSize: image.Size = {height: 15, width: 20};
        expect(ndkTest.AuxiliaryPictureInfoSetSize(inSize)).assertEqual(ErrorCode.IMAGE_SUCCESS);

        let outSize: image.Size = ndkTest.AuxiliaryPictureInfoGetSize();
        expect(outSize.width).assertEqual(inSize.width);
        expect(outSize.height).assertEqual(inSize.height);
        done();
      } catch (err) {
        hilog.error(domain, testTag,
          `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetSize_GetSize_0100: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetSize_ERROR_0200
     * @tc.name      : testAuxiliaryPictureInfoSetSize
     * @tc.desc      : Test set illegal size to AuxiliaryPictureInfo.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetSize_ERROR_0200', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetSize_ERROR_0200 begin`);
      try {
        ndkTest.CreateAuxiliaryPictureInfo();

        let size: image.Size = {height: -1, width: -1};
        expect(ndkTest.AuxiliaryPictureInfoSetSizeErrorCode(size)).assertEqual(ErrorCode.IMAGE_BAD_PARAMETER);
        done();
      } catch (err) {
        hilog.error(domain, testTag,
          `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetSize_ERROR_0200: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetRowStride_GetRowStride_0100
     * @tc.name      : testAuxiliaryPictureInfoSetRowStrideGetRowStride
     * @tc.desc      : Test set and get normal rowStride about AuxiliaryPictureInfo.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetRowStride_GetRowStride_0100', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag,
        `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetRowStride_GetRowStride_0100 begin`);
      try {
        ndkTest.CreateAuxiliaryPictureInfo();
        let rowStride = 40;
        expect(ndkTest.AuxiliaryPictureInfoSetRowStride(rowStride)).assertEqual(ErrorCode.IMAGE_SUCCESS);

        expect(ndkTest.AuxiliaryPictureInfoGetRowStride()).assertEqual(rowStride);
        done();
      } catch (err) {
        hilog.error(domain, testTag,
          `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetRowStride_GetRowStride_0100: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetRowStride_ERROR_0200
     * @tc.name      : testAuxiliaryPictureInfoSetRowStride
     * @tc.desc      : Test set illegal rowStride to AuxiliaryPictureInfo.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetRowStride_ERROR_0200', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetRowStride_ERROR_0200 begin`);
      try {
        ndkTest.CreateAuxiliaryPictureInfo();

        let rowStride = -1;
        expect(ndkTest.AuxiliaryPictureInfoSetRowStrideErrorCode(rowStride)).assertEqual(ErrorCode.IMAGE_BAD_PARAMETER);
        done();
      } catch (err) {
        hilog.error(domain, testTag,
          `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetRowStride_ERROR_0200: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_0100
     * @tc.name      : testAuxiliaryPictureInfoSetPixelFormatGetPixelFormat
     * @tc.desc      : Test set and get UNKNOWN pixelFormat about AuxiliaryPictureInfo.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_0100', 0,
      async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag,
        `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_0100 begin`);
      try {
        ndkTest.CreateAuxiliaryPictureInfo();
        let pixelFormat: image.PixelMapFormat = image.PixelMapFormat.UNKNOWN;
        expect(ndkTest.AuxiliaryPictureInfoSetPixelFormat(pixelFormat)).assertEqual(ErrorCode.IMAGE_SUCCESS);

        expect(ndkTest.AuxiliaryPictureInfoGetPixelFormat()).assertEqual(pixelFormat);
        done();
      } catch (err) {
        hilog.error(domain, testTag,
          `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_0100: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_0200
     * @tc.name      : testAuxiliaryPictureInfoSetPixelFormatGetPixelFormat
     * @tc.desc      : Test set and get RGB_565 pixelFormat about AuxiliaryPictureInfo.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_0200', 0,
      async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag,
        `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_0200 begin`);
      try {
        ndkTest.CreateAuxiliaryPictureInfo();
        let pixelFormat: image.PixelMapFormat = image.PixelMapFormat.RGB_565;
        expect(ndkTest.AuxiliaryPictureInfoSetPixelFormat(pixelFormat)).assertEqual(ErrorCode.IMAGE_SUCCESS);

        expect(ndkTest.AuxiliaryPictureInfoGetPixelFormat()).assertEqual(pixelFormat);
        done();
      } catch (err) {
        hilog.error(domain, testTag,
          `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_0200: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_0300
     * @tc.name      : testAuxiliaryPictureInfoSetPixelFormatGetPixelFormat
     * @tc.desc      : Test set and get RGBA_8888 pixelFormat about AuxiliaryPictureInfo.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_0300', 0,
      async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag,
        `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_0300 begin`);
      try {
        ndkTest.CreateAuxiliaryPictureInfo();
        let pixelFormat: image.PixelMapFormat = image.PixelMapFormat.RGBA_8888;
        expect(ndkTest.AuxiliaryPictureInfoSetPixelFormat(pixelFormat)).assertEqual(ErrorCode.IMAGE_SUCCESS);

        expect(ndkTest.AuxiliaryPictureInfoGetPixelFormat()).assertEqual(pixelFormat);
        done();
      } catch (err) {
        hilog.error(domain, testTag,
          `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_0300: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_0400
     * @tc.name      : testAuxiliaryPictureInfoSetPixelFormatGetPixelFormat
     * @tc.desc      : Test set and get BGRA_8888 pixelFormat about AuxiliaryPictureInfo.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_0400', 0,
      async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag,
        `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_0400 begin`);
      try {
        ndkTest.CreateAuxiliaryPictureInfo();
        let pixelFormat: image.PixelMapFormat = image.PixelMapFormat.BGRA_8888;
        expect(ndkTest.AuxiliaryPictureInfoSetPixelFormat(pixelFormat)).assertEqual(ErrorCode.IMAGE_SUCCESS);

        expect(ndkTest.AuxiliaryPictureInfoGetPixelFormat()).assertEqual(pixelFormat);
        done();
      } catch (err) {
        hilog.error(domain, testTag,
          `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_0400: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_0500
     * @tc.name      : testAuxiliaryPictureInfoSetPixelFormatGetPixelFormat
     * @tc.desc      : Test set and get RGB_888 pixelFormat about AuxiliaryPictureInfo.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_0500', 0,
      async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag,
        `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_0500 begin`);
      try {
        ndkTest.CreateAuxiliaryPictureInfo();
        let pixelFormat: image.PixelMapFormat = image.PixelMapFormat.RGB_888;
        expect(ndkTest.AuxiliaryPictureInfoSetPixelFormat(pixelFormat)).assertEqual(ErrorCode.IMAGE_SUCCESS);

        expect(ndkTest.AuxiliaryPictureInfoGetPixelFormat()).assertEqual(pixelFormat);
        done();
      } catch (err) {
        hilog.error(domain, testTag,
          `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_0500: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_0600
     * @tc.name      : testAuxiliaryPictureInfoSetPixelFormatGetPixelFormat
     * @tc.desc      : Test set and get ALPHA_8 pixelFormat about AuxiliaryPictureInfo.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_0600', 0,
      async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag,
        `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_0600 begin`);
      try {
        ndkTest.CreateAuxiliaryPictureInfo();
        let pixelFormat: image.PixelMapFormat = image.PixelMapFormat.ALPHA_8;
        expect(ndkTest.AuxiliaryPictureInfoSetPixelFormat(pixelFormat)).assertEqual(ErrorCode.IMAGE_SUCCESS);

        expect(ndkTest.AuxiliaryPictureInfoGetPixelFormat()).assertEqual(pixelFormat);
        done();
      } catch (err) {
        hilog.error(domain, testTag,
          `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_0600: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_0700
     * @tc.name      : testAuxiliaryPictureInfoSetPixelFormatGetPixelFormat
     * @tc.desc      : Test set and get RGBA_F16 pixelFormat about AuxiliaryPictureInfo.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_0700', 0,
      async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag,
        `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_0700 begin`);
      try {
        ndkTest.CreateAuxiliaryPictureInfo();
        let pixelFormat: image.PixelMapFormat = image.PixelMapFormat.RGBA_F16;
        expect(ndkTest.AuxiliaryPictureInfoSetPixelFormat(pixelFormat)).assertEqual(ErrorCode.IMAGE_SUCCESS);

        expect(ndkTest.AuxiliaryPictureInfoGetPixelFormat()).assertEqual(pixelFormat);
        done();
      } catch (err) {
        hilog.error(domain, testTag,
          `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_0700: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_0800
     * @tc.name      : testAuxiliaryPictureInfoSetPixelFormatGetPixelFormat
     * @tc.desc      : Test set and get NV21 pixelFormat about AuxiliaryPictureInfo.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_0800', 0,
      async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag,
        `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_0800 begin`);
      try {
        ndkTest.CreateAuxiliaryPictureInfo();
        let pixelFormat: image.PixelMapFormat = image.PixelMapFormat.NV21;
        expect(ndkTest.AuxiliaryPictureInfoSetPixelFormat(pixelFormat)).assertEqual(ErrorCode.IMAGE_SUCCESS);

        expect(ndkTest.AuxiliaryPictureInfoGetPixelFormat()).assertEqual(pixelFormat);
        done();
      } catch (err) {
        hilog.error(domain, testTag,
          `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_0800: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_0900
     * @tc.name      : testAuxiliaryPictureInfoSetPixelFormatGetPixelFormat
     * @tc.desc      : Test set and get NV12 pixelFormat about AuxiliaryPictureInfo.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_0900', 0,
      async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag,
        `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_0900 begin`);
      try {
        ndkTest.CreateAuxiliaryPictureInfo();
        let pixelFormat: image.PixelMapFormat = image.PixelMapFormat.NV12;
        expect(ndkTest.AuxiliaryPictureInfoSetPixelFormat(pixelFormat)).assertEqual(ErrorCode.IMAGE_SUCCESS);

        expect(ndkTest.AuxiliaryPictureInfoGetPixelFormat()).assertEqual(pixelFormat);
        done();
      } catch (err) {
        hilog.error(domain, testTag,
          `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_0900: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_1000
     * @tc.name      : testAuxiliaryPictureInfoSetPixelFormatGetPixelFormat
     * @tc.desc      : Test set and get RGBA_1010102 pixelFormat about AuxiliaryPictureInfo.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_1000', 0,
      async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag,
        `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_1000 begin`);
      try {
        ndkTest.CreateAuxiliaryPictureInfo();
        let pixelFormat: image.PixelMapFormat = image.PixelMapFormat.RGBA_1010102;
        expect(ndkTest.AuxiliaryPictureInfoSetPixelFormat(pixelFormat)).assertEqual(ErrorCode.IMAGE_SUCCESS);

        expect(ndkTest.AuxiliaryPictureInfoGetPixelFormat()).assertEqual(ErrorCode.IMAGE_SUCCESS);
        done();
      } catch (err) {
        hilog.error(domain, testTag,
          `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_1000: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_1100
     * @tc.name      : testAuxiliaryPictureInfoSetPixelFormatGetPixelFormat
     * @tc.desc      : Test set and get YCBCR_P010 pixelFormat about AuxiliaryPictureInfo.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_1100', 0,
      async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag,
        `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_1100 begin`);
      try {
        ndkTest.CreateAuxiliaryPictureInfo();
        let pixelFormat: image.PixelMapFormat = image.PixelMapFormat.YCBCR_P010;
        expect(ndkTest.AuxiliaryPictureInfoSetPixelFormat(pixelFormat)).assertEqual(ErrorCode.IMAGE_SUCCESS);

        expect(ndkTest.AuxiliaryPictureInfoGetPixelFormat()).assertEqual(pixelFormat);
        done();
      } catch (err) {
        hilog.error(domain, testTag,
          `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_1100: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_1200
     * @tc.name      : testAuxiliaryPictureInfoSetPixelFormatGetPixelFormat
     * @tc.desc      : Test set and get YCRCB_P010 pixelFormat about AuxiliaryPictureInfo.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_1200', 0,
      async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag,
        `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_1200 begin`);
      try {
        ndkTest.CreateAuxiliaryPictureInfo();
        let pixelFormat: image.PixelMapFormat = image.PixelMapFormat.YCRCB_P010;
        expect(ndkTest.AuxiliaryPictureInfoSetPixelFormat(pixelFormat)).assertEqual(ErrorCode.IMAGE_SUCCESS);

        expect(ndkTest.AuxiliaryPictureInfoGetPixelFormat()).assertEqual(pixelFormat);
        done();
      } catch (err) {
        hilog.error(domain, testTag,
          `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_1200: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_ERROR_1300
     * @tc.name      : testAuxiliaryPictureInfoSetPixelFormat
     * @tc.desc      : Test set illegal pixelFormat to AuxiliaryPictureInfo
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_ERROR_1300', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_ERROR_1300 begin`);
      try {
        ndkTest.CreateAuxiliaryPictureInfo();

        let pixelFormat: number = -1;
        expect(ndkTest.AuxiliaryPictureInfoSetPixelFormatErrorCode(pixelFormat))
          .assertEqual(ErrorCode.IMAGE_BAD_PARAMETER);
        done();
      } catch (err) {
        hilog.error(domain, testTag,
          `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_ERROR_1300: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_Release_0100
     * @tc.name      : testAuxiliaryPictureInfoRelease
     * @tc.desc      : Test release AuxiliaryPictureInfo.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_Release_0100', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_Release_0100 begin`);
      try {
        ndkTest.CreateAuxiliaryPictureInfo();

        expect(ndkTest.ReleaseAuxiliaryPictureInfo()).assertEqual(ErrorCode.IMAGE_SUCCESS);
        done();
      } catch (err) {
        hilog.error(domain, testTag,
          `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_Release_0100: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_0100
     * @tc.name      : testPackToFileFromPicture
     * @tc.desc      : Test pack data to file from picture.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_0100', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_0100 begin`);
      try {
        let filePath = getFilePath(testFileJpg);
        hilog.info(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_0100: image filePath ` + filePath);
        testCreateAndSetPackingOptions(filePath, image.PixelMapFormat.NV21, imageFormatJpeg);

        let writeFile = getCachePath("pack_native_picture.jpeg");
        hilog.info(domain, testTag,
          `SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_0100: write image filePath ` + writeFile);
        let file = fs.openSync(writeFile, fs.OpenMode.READ_WRITE | fs.OpenMode.CREATE);
        expect(ndkTest.PackToFileFromPicture(file.fd)).assertEqual(ErrorCode.IMAGE_SUCCESS);
        fs.closeSync(file.fd);
        done();
      } catch (err) {
        hilog.error(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_0100: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_0200
     * @tc.name      : testPackToFileFromPicture
     * @tc.desc      : Test pack data to file from picture.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_0200', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_0200 begin`);
      try {
        let filePath = getFilePath(testFileHeic);
        hilog.info(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_0200: image filePath ` + filePath);
        testCreateAndSetPackingOptions(filePath, image.PixelMapFormat.NV21, imageFormatHeif);

        let writeFile = getCachePath("pack_native_picture.heif");
        hilog.info(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_0200: write image filePath ` + writeFile);
        let file = fs.openSync(writeFile, fs.OpenMode.READ_WRITE | fs.OpenMode.CREATE);
        expect(ndkTest.PackToFileFromPicture(file.fd)).assertEqual(ErrorCode.IMAGE_SUCCESS);
        fs.closeSync(file.fd);
        done();
      } catch (err) {
        hilog.error(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_0200: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_ERROR_0300
     * @tc.name      : testPackToFileFromPicture
     * @tc.desc      : Test pack data to file from picture that format is txt.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_ERROR_0300', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_ERROR_0300 begin`);
      try {
        let filePath = getFilePath(testFileHeic);
        hilog.info(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_ERROR_0300: image filePath ` + filePath);
        testCreateAndSetPackingOptions(filePath, image.PixelMapFormat.NV12, imageFormatPng);

        let writeFile = getCachePath("pack_native_picture.png");
        hilog.info(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_ERROR_0300: write image filePath ` + writeFile);
        let file = fs.openSync(writeFile, fs.OpenMode.READ_WRITE | fs.OpenMode.CREATE);
        expect(ndkTest.PackToFileFromPicture(file.fd)).assertEqual(ErrorCode.IMAGE_BAD_PARAMETER);
        fs.closeSync(file.fd);
        done();
      } catch (err) {
        hilog.error(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_ERROR_0300: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_0100
     * @tc.name      : PackToDataFromPicture
     * @tc.desc      : Test packing pictures to data.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_0100', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_0100 begin`);
      try {
        let filePath = getFilePath(testFileJpg);
        hilog.info(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_0100: image filePath ` + filePath);
        testCreateAndSetPackingOptions(filePath, image.PixelMapFormat.RGBA_8888, imageFormatJpeg);

        let size = 10000 * 10000;
        let buffer = new ArrayBuffer(size);
        expect(ndkTest.PackToDataFromPicture(buffer)).assertEqual(ErrorCode.IMAGE_SUCCESS);
        done();
      } catch (err) {
        hilog.error(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_0100: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_0200
     * @tc.name      : PackToDataFromPicture
     * @tc.desc      : Test packing pictures to data.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_0200', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_0200 begin`);
      try {
        let filePath = getFilePath(testFileHeic);
        hilog.info(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_0200: image filePath ` + filePath);
        testCreateAndSetPackingOptions(filePath, image.PixelMapFormat.RGBA_8888, imageFormatHeif);

        let size = 10000 * 10000;
        let buffer = new ArrayBuffer(size);
        expect(ndkTest.PackToDataFromPicture(buffer)).assertEqual(ErrorCode.IMAGE_SUCCESS);
        done();
      } catch (err) {
        hilog.error(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_0200: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_ERROR_0300
     * @tc.name      : PackToDataFromPicture
     * @tc.desc      : Test packing pictures to data when the format of picture is png.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_ERROR_0300', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_ERROR_0300 begin`);
      try {
        let filePath = getFilePath(testFileJpg);
        hilog.info(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_ERROR_0300: image filePath ` + filePath);
        testCreateAndSetPackingOptions(filePath, image.PixelMapFormat.RGBA_8888, imageFormatPng);

        let size = 10000 * 10000;
        let buffer = new ArrayBuffer(size);
        expect(ndkTest.PackToDataFromPictureErrorCode(buffer)).assertEqual(ErrorCode.IMAGE_BAD_PARAMETER);
        done();
      } catch (err) {
        hilog.error(domain, testTag,
          `SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_ERROR_0300: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_ERROR_0400
     * @tc.name      : PackToDataFromPicture
     * @tc.desc      : Test packing pictures to data when the size of buffer is 0.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_ERROR_0400', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_ERROR_0400 begin`);
      try {
        let filePath = getFilePath(testFileJpg);
        hilog.info(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_ERROR_0400: image filePath ` + filePath);
        testCreateAndSetPackingOptions(filePath, image.PixelMapFormat.RGBA_8888, imageFormatJpeg);

        let size = 0;
        let buffer = new ArrayBuffer(size);
        expect(ndkTest.PackToDataFromPictureErrorCode(buffer)).assertEqual(ErrorCode.IMAGE_BAD_PARAMETER);
        done();
      } catch (err) {
        hilog.error(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_ERROR_0400: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_PictureMetadata_GetProperty_0100
     * @tc.name      : testMetadataGetProperty
     * @tc.desc      : Test get exif metadata property from PictureMetadata that contains some wrong key values
     * @tc.size      : MediumTest
     * @tc.type      : Reliability
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_PictureMetadata_GetProperty_0100', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_PictureMetadata_GetProperty_0100 begin`);
      try {
        ndkTest.MetadataCreate(image.MetadataType.EXIF_METADATA);

        expect(ndkTest.MetadataSetProperty(imageLengthKey, imageLengthValue)).assertEqual(ErrorCode.IMAGE_SUCCESS);
        expect(ndkTest.MetadataSetProperty(imageWidthKey, imageWidthValue)).assertEqual(ErrorCode.IMAGE_SUCCESS);
        expect(ndkTest.MetadataSetProperty(orientationKey, orientationValue)).assertEqual(ErrorCode.IMAGE_SUCCESS);

        expect(ndkTest.MetadataGetProperty(imageLengthKey)).assertEqual(imageLengthValue);
        expect(ndkTest.MetadataGetProperty(imageWidthKey)).assertEqual(imageWidthValue);
        expect(ndkTest.MetadataGetPropertyErrorCode(orientationKeyErr))
          .assertEqual(ErrorCode.IMAGE_UNSUPPORTED_METADATA);
        done();
      } catch (err) {
        hilog.error(domain, testTag,
          `SUB_MULTIMEDIA_PICTURE_NDK_PictureMetadata_GetProperty_0100: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_PictureMetadata_GetProperty_ERROR_0200
     * @tc.name      : testMetadataGetProperty
     * @tc.desc      : Test get exif metadata property from PictureMetadata that contains all wrong key values
     * @tc.size      : MediumTest
     * @tc.type      : Reliability
     * @tc.level     : Level 2
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_PictureMetadata_GetProperty_ERROR_0200', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_PictureMetadata_GetProperty_ERROR_0200 begin`);
      try {
        ndkTest.MetadataCreate(image.MetadataType.EXIF_METADATA);

        expect(ndkTest.MetadataSetProperty(imageLengthKey, imageLengthValue)).assertEqual(ErrorCode.IMAGE_SUCCESS);
        expect(ndkTest.MetadataSetProperty(imageWidthKey, imageWidthValue)).assertEqual(ErrorCode.IMAGE_SUCCESS);
        expect(ndkTest.MetadataSetProperty(orientationKey, orientationValue)).assertEqual(ErrorCode.IMAGE_SUCCESS);

        expect(ndkTest.MetadataGetPropertyErrorCode(imageLengthKeyErr))
          .assertEqual(ErrorCode.IMAGE_UNSUPPORTED_METADATA);
        expect(ndkTest.MetadataGetPropertyErrorCode(imageWidthKeyErr))
          .assertEqual(ErrorCode.IMAGE_UNSUPPORTED_METADATA);
        expect(ndkTest.MetadataGetPropertyErrorCode(orientationKeyErr))
          .assertEqual(ErrorCode.IMAGE_UNSUPPORTED_METADATA);
        done();
      } catch (err) {
        hilog.error(domain, testTag,
          `SUB_MULTIMEDIA_PICTURE_NDK_PictureMetadata_GetProperty_ERROR_0200: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_PictureMetadata_GetProperty_0300
     * @tc.name      : testMetadataGetProperty
     * @tc.desc      : Test get fragment metadata property from PictureMetadata that contains some wrong key values
     * @tc.size      : MediumTest
     * @tc.type      : Reliability
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_PictureMetadata_GetProperty_0300', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_PictureMetadata_GetProperty_0300 begin`);
      try {
        ndkTest.MetadataCreate(image.MetadataType.FRAGMENT_METADATA);

        expect(ndkTest.MetadataSetProperty(fragmentImageWidthKey, fragmentImageWidthValue))
          .assertEqual(ErrorCode.IMAGE_SUCCESS);
        expect(ndkTest.MetadataSetProperty(fragmentImageHeightKey, fragmentImageHeightValue))
          .assertEqual(ErrorCode.IMAGE_SUCCESS);
        expect(ndkTest.MetadataSetProperty(xInOriginalKey, xInOriginalValue)).assertEqual(ErrorCode.IMAGE_SUCCESS);
        expect(ndkTest.MetadataSetProperty(yInOriginalKey, yInOriginalValue)).assertEqual(ErrorCode.IMAGE_SUCCESS);

        expect(ndkTest.MetadataGetPropertyErrorCode(fragmentImageWidthKeyErr))
          .assertEqual(ErrorCode.IMAGE_UNSUPPORTED_METADATA);
        expect(ndkTest.MetadataGetPropertyErrorCode(fragmentImageHeightKeyErr))
          .assertEqual(ErrorCode.IMAGE_UNSUPPORTED_METADATA);
        expect(ndkTest.MetadataGetProperty(xInOriginalKey)).assertEqual(xInOriginalValue);
        expect(ndkTest.MetadataGetProperty(yInOriginalKey)).assertEqual(yInOriginalValue);
        done();
      } catch (err) {
        hilog.error(domain, testTag,
          `SUB_MULTIMEDIA_PICTURE_NDK_PictureMetadata_GetProperty_0300: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_PictureMetadata_GetProperty_ERROR_0400
     * @tc.name      : testMetadataGetProperty
     * @tc.desc      : Test get fragment metadata property from PictureMetadata that contains all wrong key values
     * @tc.size      : MediumTest
     * @tc.type      : Reliability
     * @tc.level     : Level 2
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_PictureMetadata_GetProperty_ERROR_0400', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_PictureMetadata_GetProperty_ERROR_0400 begin`);
      try {
        ndkTest.MetadataCreate(image.MetadataType.FRAGMENT_METADATA);

        expect(ndkTest.MetadataSetProperty(fragmentImageWidthKey, fragmentImageWidthValue))
          .assertEqual(ErrorCode.IMAGE_SUCCESS);
        expect(ndkTest.MetadataSetProperty(fragmentImageHeightKey, fragmentImageHeightValue))
          .assertEqual(ErrorCode.IMAGE_SUCCESS);
        expect(ndkTest.MetadataSetProperty(xInOriginalKey, xInOriginalValue)).assertEqual(ErrorCode.IMAGE_SUCCESS);
        expect(ndkTest.MetadataSetProperty(yInOriginalKey, yInOriginalValue)).assertEqual(ErrorCode.IMAGE_SUCCESS);

        expect(ndkTest.MetadataGetPropertyErrorCode(fragmentImageWidthKeyErr))
          .assertEqual(ErrorCode.IMAGE_UNSUPPORTED_METADATA);
        expect(ndkTest.MetadataGetPropertyErrorCode(fragmentImageHeightKeyErr))
          .assertEqual(ErrorCode.IMAGE_UNSUPPORTED_METADATA);
        expect(ndkTest.MetadataGetPropertyErrorCode(xInOriginalKeyErr))
          .assertEqual(ErrorCode.IMAGE_UNSUPPORTED_METADATA);
        expect(ndkTest.MetadataGetPropertyErrorCode(yInOriginalKeyErr))
          .assertEqual(ErrorCode.IMAGE_UNSUPPORTED_METADATA);
        done();
      } catch (err) {
        hilog.error(domain, testTag,
          `SUB_MULTIMEDIA_PICTURE_NDK_PictureMetadata_GetProperty_ERROR_0400: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_PictureMetadata_Clone_0100
     * @tc.name      : testPictureMetadataClone
     * @tc.desc      : Test clone PictureMetadata
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_PictureMetadata_Clone_0100', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_PictureMetadata_Clone_0100 begin`);
      try {
        createDefaultExifMetadata();

        expect(ndkTest.MetadataClone() != undefined).assertTrue();
        expect(ndkTest.clonedMetadataGetProperty(imageLengthKey))
          .assertEqual(ndkTest.MetadataGetProperty(imageLengthKey));
        expect(ndkTest.clonedMetadataGetProperty(imageWidthKey))
          .assertEqual(ndkTest.MetadataGetProperty(imageWidthKey));
        done();
      } catch (err) {
        hilog.error(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_PictureMetadata_Clone_0100: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_0400
     * @tc.name      : testPackToFileFromPicture
     * @tc.desc      : Test pack data to file from picture.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_0400', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_0400 begin`);
      try {
        let filePath = getFilePath(testFileJpg);
        hilog.info(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_0400: image filePath ` + filePath);
        testCreateAndSetPackingOptions(filePath, image.PixelMapFormat.RGB_565, imageFormatJpeg);

        let writeFile = getCachePath("pack_native_picture.jpeg");
        hilog.info(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_0400: write image filePath ` + writeFile);
        let file = fs.openSync(writeFile, fs.OpenMode.READ_WRITE | fs.OpenMode.CREATE);
        expect(ndkTest.PackToFileFromPicture(file.fd)).assertEqual(ErrorCode.IMAGE_SUCCESS);
        fs.closeSync(file.fd);
        done();
      } catch (err) {
        hilog.error(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_0400: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_0500
     * @tc.name      : testPackToFileFromPicture
     * @tc.desc      : Test pack data to file from picture.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_0500', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_0500 begin`);
      try {
        let filePath = getFilePath(testFileJpg);
        hilog.info(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_0500: image filePath ` + filePath);
        testCreateAndSetPackingOptions(filePath, image.PixelMapFormat.RGBA_8888, imageFormatJpeg);

        let writeFile = getCachePath("pack_native_picture.jpeg");
        hilog.info(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_0500: write image filePath ` + writeFile);
        let file = fs.openSync(writeFile, fs.OpenMode.READ_WRITE | fs.OpenMode.CREATE);
        expect(ndkTest.PackToFileFromPicture(file.fd)).assertEqual(ErrorCode.IMAGE_SUCCESS);
        fs.closeSync(file.fd);
        done();
      } catch (err) {
        hilog.error(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_0500: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_0600
     * @tc.name      : testPackToFileFromPicture
     * @tc.desc      : Test pack data to file from picture.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_0600', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_0600 begin`);
      try {
        let filePath = getFilePath(testFileJpg);
        hilog.info(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_0600: image filePath ` + filePath);
        testCreateAndSetPackingOptions(filePath, image.PixelMapFormat.BGRA_8888, imageFormatJpeg);

        let writeFile = getCachePath("pack_native_picture.jpeg");
        hilog.info(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_0600: write image filePath ` + writeFile);
        let file = fs.openSync(writeFile, fs.OpenMode.READ_WRITE | fs.OpenMode.CREATE);
        expect(ndkTest.PackToFileFromPicture(file.fd)).assertEqual(ErrorCode.IMAGE_SUCCESS);
        fs.closeSync(file.fd);
        done();
      } catch (err) {
        hilog.error(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_0600: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_0700
     * @tc.name      : testPackToFileFromPicture
     * @tc.desc      : Test pack data to file from picture.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_0700', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_0700 begin`);
      try {
        let filePath = getFilePath(testFileJpg);
        hilog.info(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_0700: image filePath ` + filePath);
        testCreateAndSetPackingOptions(filePath, image.PixelMapFormat.RGB_888, imageFormatJpeg);

        let writeFile = getCachePath("pack_native_picture.jpeg");
        hilog.info(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_0700: write image filePath ` + writeFile);
        let file = fs.openSync(writeFile, fs.OpenMode.READ_WRITE | fs.OpenMode.CREATE);
        expect(ndkTest.PackToFileFromPicture(file.fd)).assertEqual(ErrorCode.IMAGE_SUCCESS);
        fs.closeSync(file.fd);
        done();
      } catch (err) {
        hilog.error(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_0700: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_0800
     * @tc.name      : testPackToFileFromPicture
     * @tc.desc      : Test pack data to file from picture.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_0800', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_0800 begin`);
      try {
        let filePath = getFilePath(testFileJpg);
        hilog.info(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_0800: image filePath ` + filePath);
        testCreateAndSetPackingOptions(filePath, image.PixelMapFormat.RGBA_F16, imageFormatJpeg);

        let writeFile = getCachePath("pack_native_picture.jpeg");
        hilog.info(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_0800: write image filePath ` + writeFile);
        let file = fs.openSync(writeFile, fs.OpenMode.READ_WRITE | fs.OpenMode.CREATE);
        expect(ndkTest.PackToFileFromPicture(file.fd)).assertEqual(ErrorCode.IMAGE_SUCCESS);
        fs.closeSync(file.fd);
        done();
      } catch (err) {
        hilog.error(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_0800: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_0900
     * @tc.name      : testPackToFileFromPicture
     * @tc.desc      : Test pack data to file from picture.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_0900', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_0900 begin`);
      try {
        let filePath = getFilePath(testFileJpg);
        hilog.info(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_0900: image filePath ` + filePath);
        testCreateAndSetPackingOptions(filePath, image.PixelMapFormat.RGBA_1010102, imageFormatJpeg);

        let writeFile = getCachePath("pack_native_picture.jpeg");
        hilog.info(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_0900: write image filePath ` + writeFile);
        let file = fs.openSync(writeFile, fs.OpenMode.READ_WRITE | fs.OpenMode.CREATE);
        expect(ndkTest.PackToFileFromPicture(file.fd)).assertEqual(ErrorCode.IMAGE_SUCCESS);
        fs.closeSync(file.fd);
        done();
      } catch (err) {
        hilog.error(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_0900: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_1000
     * @tc.name      : testPackToFileFromPicture
     * @tc.desc      : Test pack data to file from picture.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_1000', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_1000 begin`);
      try {
        let filePath = getFilePath(testFileJpg);
        hilog.info(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_1000: image filePath ` + filePath);
        testCreateAndSetPackingOptions(filePath, image.PixelMapFormat.YCBCR_P010, imageFormatJpeg);

        let writeFile = getCachePath("pack_native_picture.jpeg");
        hilog.info(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_1000: write image filePath ` + writeFile);
        let file = fs.openSync(writeFile, fs.OpenMode.READ_WRITE | fs.OpenMode.CREATE);
        expect(ndkTest.PackToFileFromPicture(file.fd)).assertEqual(ErrorCode.IMAGE_SUCCESS);
        fs.closeSync(file.fd);
        done();
      } catch (err) {
        hilog.error(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_1000: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_1100
     * @tc.name      : testPackToFileFromPicture
     * @tc.desc      : Test pack data to file from picture.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_1100', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_1100 begin`);
      try {
        let filePath = getFilePath(testFileJpg);
        hilog.info(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_1100: image filePath ` + filePath);
        testCreateAndSetPackingOptions(filePath, image.PixelMapFormat.YCRCB_P010, imageFormatJpeg);

        let writeFile = getCachePath("pack_native_picture.jpeg");
        hilog.info(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_1100: write image filePath ` + writeFile);
        let file = fs.openSync(writeFile, fs.OpenMode.READ_WRITE | fs.OpenMode.CREATE);
        expect(ndkTest.PackToFileFromPicture(file.fd)).assertEqual(ErrorCode.IMAGE_SUCCESS);
        fs.closeSync(file.fd);
        done();
      } catch (err) {
        hilog.error(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_1100: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_1200
     * @tc.name      : testPackToFileFromPicture
     * @tc.desc      : Test pack data to file from picture.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_1200', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_1200 begin`);
      try {
        let filePath = getFilePath(testFileJpg);
        hilog.info(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_1200: image filePath ` + filePath);
        testCreateAndSetPackingOptions(filePath, image.PixelMapFormat.NV12, imageFormatJpeg);

        let writeFile = getCachePath("pack_native_picture.jpeg");
        hilog.info(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_1200: write image filePath ` + writeFile);
        let file = fs.openSync(writeFile, fs.OpenMode.READ_WRITE | fs.OpenMode.CREATE);
        expect(ndkTest.PackToFileFromPicture(file.fd)).assertEqual(ErrorCode.IMAGE_SUCCESS);
        fs.closeSync(file.fd);
        done();
      } catch (err) {
        hilog.error(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_1200: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_ERROR_1300
     * @tc.name      : testPackToFileFromPicture
     * @tc.desc      : Test pack data to file from picture.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_ERROR_1300', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_ERROR_1300 begin`);
      try {
        let filePath = getFilePath(testFileJpg);
        hilog.info(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_ERROR_1300: image filePath ` + filePath);
        testCreateAndSetPackingOptions(filePath, image.PixelMapFormat.ALPHA_8, imageFormatJpeg);

        let writeFile = getCachePath("pack_native_picture.jpeg");
        hilog.info(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_ERROR_1300: write image filePath ` + writeFile);
        let file = fs.openSync(writeFile, fs.OpenMode.READ_WRITE | fs.OpenMode.CREATE);
        expect(ndkTest.PackToFileFromPicture(file.fd)).assertEqual(ErrorCode.IMAGE_ENCODE_FAILED);
        fs.closeSync(file.fd);
        done();
      } catch (err) {
        hilog.error(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_ERROR_1300: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_1400
     * @tc.name      : testPackToFileFromPicture
     * @tc.desc      : Test pack data to file from picture.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_1400', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_1400 begin`);
      try {
        let filePath = getFilePath(testFileHeic);
        hilog.info(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_1400: image filePath ` + filePath);
        testCreateAndSetPackingOptions(filePath, image.PixelMapFormat.RGB_565, imageFormatHeif);

        let writeFile = getCachePath("pack_native_picture.heif");
        hilog.info(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_1400: write image filePath ` + writeFile);
        let file = fs.openSync(writeFile, fs.OpenMode.READ_WRITE | fs.OpenMode.CREATE);
        expect(ndkTest.PackToFileFromPicture(file.fd)).assertEqual(ErrorCode.IMAGE_SUCCESS);
        fs.closeSync(file.fd);
        done();
      } catch (err) {
        hilog.error(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_1400: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_1500
     * @tc.name      : testPackToFileFromPicture
     * @tc.desc      : Test pack data to file from picture.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_1500', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_1500 begin`);
      try {
        let filePath = getFilePath(testFileHeic);
        hilog.info(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_1500: image filePath ` + filePath);
        testCreateAndSetPackingOptions(filePath, image.PixelMapFormat.RGBA_8888, imageFormatHeif);

        let writeFile = getCachePath("pack_native_picture.heif");
        hilog.info(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_1500: write image filePath ` + writeFile);
        let file = fs.openSync(writeFile, fs.OpenMode.READ_WRITE | fs.OpenMode.CREATE);
        expect(ndkTest.PackToFileFromPicture(file.fd)).assertEqual(ErrorCode.IMAGE_SUCCESS);
        fs.closeSync(file.fd);
        done();
      } catch (err) {
        hilog.error(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_1500: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_1600
     * @tc.name      : testPackToFileFromPicture
     * @tc.desc      : Test pack data to file from picture.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_1600', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_1600 begin`);
      try {
        let filePath = getFilePath(testFileHeic);
        hilog.info(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_1600: image filePath ` + filePath);
        testCreateAndSetPackingOptions(filePath, image.PixelMapFormat.BGRA_8888, imageFormatHeif);

        let writeFile = getCachePath("pack_native_picture.heif");
        hilog.info(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_1600: write image filePath ` + writeFile);
        let file = fs.openSync(writeFile, fs.OpenMode.READ_WRITE | fs.OpenMode.CREATE);
        expect(ndkTest.PackToFileFromPicture(file.fd)).assertEqual(ErrorCode.IMAGE_SUCCESS);
        fs.closeSync(file.fd);
        done();
      } catch (err) {
        hilog.error(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_1600: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_1700
     * @tc.name      : testPackToFileFromPicture
     * @tc.desc      : Test pack data to file from picture.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_1700', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_1700 begin`);
      try {
        let filePath = getFilePath(testFileHeic);
        hilog.info(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_1700: image filePath ` + filePath);
        testCreateAndSetPackingOptions(filePath, image.PixelMapFormat.RGB_888, imageFormatHeif);

        let writeFile = getCachePath("pack_native_picture.heif");
        hilog.info(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_1700: write image filePath ` + writeFile);
        let file = fs.openSync(writeFile, fs.OpenMode.READ_WRITE | fs.OpenMode.CREATE);
        expect(ndkTest.PackToFileFromPicture(file.fd)).assertEqual(ErrorCode.IMAGE_SUCCESS);
        fs.closeSync(file.fd);
        done();
      } catch (err) {
        hilog.error(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_1700: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_1800
     * @tc.name      : testPackToFileFromPicture
     * @tc.desc      : Test pack data to file from picture.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_1800', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_1800 begin`);
      try {
        let filePath = getFilePath(testFileHeic);
        hilog.info(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_1800: image filePath ` + filePath);
        testCreateAndSetPackingOptions(filePath, image.PixelMapFormat.RGBA_F16, imageFormatHeif);

        let writeFile = getCachePath("pack_native_picture.heif");
        hilog.info(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_1800: write image filePath ` + writeFile);
        let file = fs.openSync(writeFile, fs.OpenMode.READ_WRITE | fs.OpenMode.CREATE);
        expect(ndkTest.PackToFileFromPicture(file.fd)).assertEqual(ErrorCode.IMAGE_SUCCESS);
        fs.closeSync(file.fd);
        done();
      } catch (err) {
        hilog.error(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_1800: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_1900
     * @tc.name      : testPackToFileFromPicture
     * @tc.desc      : Test pack data to file from picture.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_1900', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_1900 begin`);
      try {
        let filePath = getFilePath(testFileHeic);
        hilog.info(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_1900: image filePath ` + filePath);
        testCreateAndSetPackingOptions(filePath, image.PixelMapFormat.RGBA_1010102, imageFormatHeif);

        let writeFile = getCachePath("pack_native_picture.heif");
        hilog.info(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_1900: write image filePath ` + writeFile);
        let file = fs.openSync(writeFile, fs.OpenMode.READ_WRITE | fs.OpenMode.CREATE);
        expect(ndkTest.PackToFileFromPicture(file.fd)).assertEqual(ErrorCode.IMAGE_SUCCESS);
        fs.closeSync(file.fd);
        done();
      } catch (err) {
        hilog.error(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_1900: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_2000
     * @tc.name      : testPackToFileFromPicture
     * @tc.desc      : Test pack data to file from picture.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_2000', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_2000 begin`);
      try {
        let filePath = getFilePath(testFileHeic);
        hilog.info(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_2000: image filePath ` + filePath);
        testCreateAndSetPackingOptions(filePath, image.PixelMapFormat.YCBCR_P010, imageFormatHeif);

        let writeFile = getCachePath("pack_native_picture.heif");
        hilog.info(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_2000: write image filePath ` + writeFile);
        let file = fs.openSync(writeFile, fs.OpenMode.READ_WRITE | fs.OpenMode.CREATE);
        expect(ndkTest.PackToFileFromPicture(file.fd)).assertEqual(ErrorCode.IMAGE_SUCCESS);
        fs.closeSync(file.fd);
        done();
      } catch (err) {
        hilog.error(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_2000: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_2100
     * @tc.name      : testPackToFileFromPicture
     * @tc.desc      : Test pack data to file from picture.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_2100', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_2100 begin`);
      try {
        let filePath = getFilePath(testFileHeic);
        hilog.info(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_2100: image filePath ` + filePath);
        testCreateAndSetPackingOptions(filePath, image.PixelMapFormat.YCRCB_P010, imageFormatHeif);

        let writeFile = getCachePath("pack_native_picture.heif");
        hilog.info(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_2100: write image filePath ` + writeFile);
        let file = fs.openSync(writeFile, fs.OpenMode.READ_WRITE | fs.OpenMode.CREATE);
        expect(ndkTest.PackToFileFromPicture(file.fd)).assertEqual(ErrorCode.IMAGE_SUCCESS);
        fs.closeSync(file.fd);
        done();
      } catch (err) {
        hilog.error(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_2100: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_2200
     * @tc.name      : testPackToFileFromPicture
     * @tc.desc      : Test pack data to file from picture.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_2200', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_2200 begin`);
      try {
        let filePath = getFilePath(testFileHeic);
        hilog.info(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_2200: image filePath ` + filePath);
        testCreateAndSetPackingOptions(filePath, image.PixelMapFormat.NV12, imageFormatHeif);

        let writeFile = getCachePath("pack_native_picture.heif");
        hilog.info(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_2200: write image filePath ` + writeFile);
        let file = fs.openSync(writeFile, fs.OpenMode.READ_WRITE | fs.OpenMode.CREATE);
        expect(ndkTest.PackToFileFromPicture(file.fd)).assertEqual(ErrorCode.IMAGE_SUCCESS);
        fs.closeSync(file.fd);
        done();
      } catch (err) {
        hilog.error(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_2200: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_ERROR_2300
     * @tc.name      : testPackToFileFromPicture
     * @tc.desc      : Test pack data to file from picture.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_ERROR_2300', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_ERROR_2300 begin`);
      try {
        let filePath = getFilePath(testFileHeic);
        hilog.info(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_ERROR_2300: image filePath ` + filePath);
        testCreateAndSetPackingOptions(filePath, image.PixelMapFormat.ALPHA_8, imageFormatHeif);

        let writeFile = getCachePath("pack_native_picture.heif");
        hilog.info(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_ERROR_2300: write image filePath ` + writeFile);
        let file = fs.openSync(writeFile, fs.OpenMode.READ_WRITE | fs.OpenMode.CREATE);
        expect(ndkTest.PackToFileFromPicture(file.fd)).assertEqual(ErrorCode.IMAGE_ENCODE_FAILED);
        fs.closeSync(file.fd);
        done();
      } catch (err) {
        hilog.error(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_ERROR_2300: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_2400
     * @tc.name      : testPackToFileFromPicture
     * @tc.desc      : Test packing pictures to file with required parameter only.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_2400', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_2400 begin`);
      try {
        let filePath = getFilePath(testFileJpg);
        hilog.info(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_2400: image filePath ` + filePath);
        testCreateAndSetPackingOptionsRequiredOnly(filePath, image.PixelMapFormat.NV12, imageFormatJpeg);

        let writeFile = getCachePath("pack_native_picture.jpeg");
        hilog.info(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_2400: write image filePath ` + writeFile);
        let file = fs.openSync(writeFile, fs.OpenMode.READ_WRITE | fs.OpenMode.CREATE);
        expect(ndkTest.PackToFileFromPicture(file.fd)).assertEqual(ErrorCode.IMAGE_SUCCESS);
        fs.closeSync(file.fd);
        done();
      } catch (err) {
        hilog.error(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_2400: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_2500
     * @tc.name      : testPackToFileFromPicture
     * @tc.desc      : Test packing pictures to file with required parameter only.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_2500', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_2500 begin`);
      try {
        let filePath = getFilePath(testFileHeic);
        hilog.info(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_2500: image filePath ` + filePath);
        testCreateAndSetPackingOptionsRequiredOnly(filePath, image.PixelMapFormat.NV12, imageFormatHeif);

        let writeFile = getCachePath("pack_native_picture.heif");
        hilog.info(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_2500: write image filePath ` + writeFile);
        let file = fs.openSync(writeFile, fs.OpenMode.READ_WRITE | fs.OpenMode.CREATE);
        expect(ndkTest.PackToFileFromPicture(file.fd)).assertEqual(ErrorCode.IMAGE_SUCCESS);
        fs.closeSync(file.fd);
        done();
      } catch (err) {
        hilog.error(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_PackToFileFromPicture_2500: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_0500
     * @tc.name      : PackToDataFromPicture
     * @tc.desc      : Test packing pictures to data.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_0500', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_0500 begin`);
      try {
        let filePath = getFilePath(testFileJpg);
        hilog.info(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_0500: image filePath ` + filePath);
        testCreateAndSetPackingOptions(filePath, image.PixelMapFormat.RGB_565, imageFormatJpeg);

        let size = 10000 * 10000;
        let buffer = new ArrayBuffer(size);
        expect(ndkTest.PackToDataFromPicture(buffer)).assertEqual(ErrorCode.IMAGE_SUCCESS);
        done();
      } catch (err) {
        hilog.error(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_0500: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_0600
     * @tc.name      : PackToDataFromPicture
     * @tc.desc      : Test packing pictures to data.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_0600', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_0600 begin`);
      try {
        let filePath = getFilePath(testFileJpg);
        hilog.info(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_0600: image filePath ` + filePath);
        testCreateAndSetPackingOptions(filePath, image.PixelMapFormat.RGB_888, imageFormatJpeg);

        let size = 10000 * 10000;
        let buffer = new ArrayBuffer(size);
        expect(ndkTest.PackToDataFromPicture(buffer)).assertEqual(ErrorCode.IMAGE_SUCCESS);
        done();
      } catch (err) {
        hilog.error(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_0600: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_0700
     * @tc.name      : PackToDataFromPicture
     * @tc.desc      : Test packing pictures to data.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_0700', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_0700 begin`);
      try {
        let filePath = getFilePath(testFileJpg);
        hilog.info(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_0700: image filePath ` + filePath);
        testCreateAndSetPackingOptions(filePath, image.PixelMapFormat.BGRA_8888, imageFormatJpeg);

        let size = 10000 * 10000;
        let buffer = new ArrayBuffer(size);
        expect(ndkTest.PackToDataFromPicture(buffer)).assertEqual(ErrorCode.IMAGE_SUCCESS);
        done();
      } catch (err) {
        hilog.error(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_0700: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_0800
     * @tc.name      : PackToDataFromPicture
     * @tc.desc      : Test packing pictures to data.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_0800', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_0800 begin`);
      try {
        let filePath = getFilePath(testFileJpg);
        hilog.info(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_0800: image filePath ` + filePath);
        testCreateAndSetPackingOptions(filePath, image.PixelMapFormat.RGBA_F16, imageFormatJpeg);

        let size = 10000 * 10000;
        let buffer = new ArrayBuffer(size);
        expect(ndkTest.PackToDataFromPicture(buffer)).assertEqual(ErrorCode.IMAGE_SUCCESS);
        done();
      } catch (err) {
        hilog.error(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_0800: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_0900
     * @tc.name      : PackToDataFromPicture
     * @tc.desc      : Test packing pictures to data.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_0900', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_0900 begin`);
      try {
        let filePath = getFilePath(testFileJpg);
        hilog.info(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_0900: image filePath ` + filePath);
        testCreateAndSetPackingOptions(filePath, image.PixelMapFormat.RGBA_1010102, imageFormatJpeg);

        let size = 10000 * 10000;
        let buffer = new ArrayBuffer(size);
        expect(ndkTest.PackToDataFromPicture(buffer)).assertEqual(ErrorCode.IMAGE_SUCCESS);
        done();
      } catch (err) {
        hilog.error(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_0900: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_1000
     * @tc.name      : PackToDataFromPicture
     * @tc.desc      : Test packing pictures to data.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_1000', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_1000 begin`);
      try {
        let filePath = getFilePath(testFileJpg);
        hilog.info(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_1000: image filePath ` + filePath);
        testCreateAndSetPackingOptions(filePath, image.PixelMapFormat.YCBCR_P010, imageFormatJpeg);

        let size = 10000 * 10000;
        let buffer = new ArrayBuffer(size);
        expect(ndkTest.PackToDataFromPicture(buffer)).assertEqual(ErrorCode.IMAGE_SUCCESS);
        done();
      } catch (err) {
        hilog.error(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_1000: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_1100
     * @tc.name      : PackToDataFromPicture
     * @tc.desc      : Test packing pictures to data.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_1100', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_1100 begin`);
      try {
        let filePath = getFilePath(testFileJpg);
        hilog.info(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_1100: image filePath ` + filePath);
        testCreateAndSetPackingOptions(filePath, image.PixelMapFormat.YCRCB_P010, imageFormatJpeg);

        let size = 10000 * 10000;
        let buffer = new ArrayBuffer(size);
        expect(ndkTest.PackToDataFromPicture(buffer)).assertEqual(ErrorCode.IMAGE_SUCCESS);
        done();
      } catch (err) {
        hilog.error(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_1100: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_1200
     * @tc.name      : PackToDataFromPicture
     * @tc.desc      : Test packing pictures to data.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_1200', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_1200 begin`);
      try {
        let filePath = getFilePath(testFileJpg);
        hilog.info(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_1200: image filePath ` + filePath);
        testCreateAndSetPackingOptions(filePath, image.PixelMapFormat.NV21, imageFormatJpeg);

        let size = 10000 * 10000;
        let buffer = new ArrayBuffer(size);
        expect(ndkTest.PackToDataFromPicture(buffer)).assertEqual(ErrorCode.IMAGE_SUCCESS);
        done();
      } catch (err) {
        hilog.error(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_1200: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_1300
     * @tc.name      : PackToDataFromPicture
     * @tc.desc      : Test packing pictures to data.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_1300', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_1300 begin`);
      try {
        let filePath = getFilePath(testFileJpg);
        hilog.info(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_1300: image filePath ` + filePath);
        testCreateAndSetPackingOptions(filePath, image.PixelMapFormat.NV12, imageFormatJpeg);

        let size = 10000 * 10000;
        let buffer = new ArrayBuffer(size);
        expect(ndkTest.PackToDataFromPicture(buffer)).assertEqual(ErrorCode.IMAGE_SUCCESS);
        done();
      } catch (err) {
        hilog.error(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_1300: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_ERROR_1400
     * @tc.name      : PackToDataFromPicture
     * @tc.desc      : Test packing pictures to data.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_ERROR_1400', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_ERROR_1400 begin`);
      try {
        let filePath = getFilePath(testFileJpg);
        hilog.info(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_ERROR_1400: image filePath ` + filePath);
        testCreateAndSetPackingOptions(filePath, image.PixelMapFormat.ALPHA_8, imageFormatJpeg);

        let size = 10000 * 10000;
        let buffer = new ArrayBuffer(size);
        expect(ndkTest.PackToDataFromPicture(buffer)).assertEqual(ErrorCode.IMAGE_ENCODE_FAILED);
        done();
      } catch (err) {
        hilog.error(domain, testTag,
          `SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_ERROR_1400: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_1500
     * @tc.name      : PackToDataFromPicture
     * @tc.desc      : Test packing pictures to data.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_1500', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_1500 begin`);
      try {
        let filePath = getFilePath(testFileHeic);
        hilog.info(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_1500: image filePath ` + filePath);
        testCreateAndSetPackingOptions(filePath, image.PixelMapFormat.RGB_565, imageFormatHeif);

        let size = 10000 * 10000;
        let buffer = new ArrayBuffer(size);
        expect(ndkTest.PackToDataFromPictureErrorCode(buffer)).assertEqual(ErrorCode.IMAGE_SUCCESS);
        done();
      } catch (err) {
        hilog.error(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_1500: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_1600
     * @tc.name      : PackToDataFromPicture
     * @tc.desc      : Test packing pictures to data.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_1600', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_1600 begin`);
      try {
        let filePath = getFilePath(testFileHeic);
        hilog.info(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_1600: image filePath ` + filePath);
        testCreateAndSetPackingOptions(filePath, image.PixelMapFormat.RGB_888, imageFormatHeif);

        let size = 10000 * 10000;
        let buffer = new ArrayBuffer(size);
        expect(ndkTest.PackToDataFromPictureErrorCode(buffer)).assertEqual(ErrorCode.IMAGE_SUCCESS);
        done();
      } catch (err) {
        hilog.error(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_1600: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_1700
     * @tc.name      : PackToDataFromPicture
     * @tc.desc      : Test packing pictures to data.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_1700', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_1700 begin`);
      try {
        let filePath = getFilePath(testFileHeic);
        hilog.info(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_1700: image filePath ` + filePath);
        testCreateAndSetPackingOptions(filePath, image.PixelMapFormat.BGRA_8888, imageFormatHeif);

        let size = 10000 * 10000;
        let buffer = new ArrayBuffer(size);
        expect(ndkTest.PackToDataFromPictureErrorCode(buffer)).assertEqual(ErrorCode.IMAGE_SUCCESS);
        done();
      } catch (err) {
        hilog.error(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_1700: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_1800
     * @tc.name      : PackToDataFromPicture
     * @tc.desc      : Test packing pictures to data.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_1800', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_1800 begin`);
      try {
        let filePath = getFilePath(testFileHeic);
        hilog.info(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_1800: image filePath ` + filePath);
        testCreateAndSetPackingOptions(filePath, image.PixelMapFormat.RGBA_F16, imageFormatHeif);

        let size = 10000 * 10000;
        let buffer = new ArrayBuffer(size);
        expect(ndkTest.PackToDataFromPictureErrorCode(buffer)).assertEqual(ErrorCode.IMAGE_SUCCESS);
        done();
      } catch (err) {
        hilog.error(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_1800: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_1900
     * @tc.name      : PackToDataFromPicture
     * @tc.desc      : Test packing pictures to data.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_1900', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_1900 begin`);
      try {
        let filePath = getFilePath(testFileHeic);
        hilog.info(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_1900: image filePath ` + filePath);
        testCreateAndSetPackingOptions(filePath, image.PixelMapFormat.RGBA_1010102, imageFormatHeif);

        let size = 10000 * 10000;
        let buffer = new ArrayBuffer(size);
        expect(ndkTest.PackToDataFromPictureErrorCode(buffer)).assertEqual(ErrorCode.IMAGE_SUCCESS);
        done();
      } catch (err) {
        hilog.error(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_1900: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_2000
     * @tc.name      : PackToDataFromPicture
     * @tc.desc      : Test packing pictures to data.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_2000', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_2000 begin`);
      try {
        let filePath = getFilePath(testFileHeic);
        hilog.info(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_2000: image filePath ` + filePath);
        testCreateAndSetPackingOptions(filePath, image.PixelMapFormat.YCBCR_P010, imageFormatHeif);

        let size = 10000 * 10000;
        let buffer = new ArrayBuffer(size);
        expect(ndkTest.PackToDataFromPictureErrorCode(buffer)).assertEqual(ErrorCode.IMAGE_SUCCESS);
        done();
      } catch (err) {
        hilog.error(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_2000: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_2100
     * @tc.name      : PackToDataFromPicture
     * @tc.desc      : Test packing pictures to data.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_2100', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_2100 begin`);
      try {
        let filePath = getFilePath(testFileHeic);
        hilog.info(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_2100: image filePath ` + filePath);
        testCreateAndSetPackingOptions(filePath, image.PixelMapFormat.YCRCB_P010, imageFormatHeif);

        let size = 10000 * 10000;
        let buffer = new ArrayBuffer(size);
        expect(ndkTest.PackToDataFromPictureErrorCode(buffer)).assertEqual(ErrorCode.IMAGE_SUCCESS);
        done();
      } catch (err) {
        hilog.error(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_2100: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_2200
     * @tc.name      : PackToDataFromPicture
     * @tc.desc      : Test packing pictures to data.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_2200', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_2200 begin`);
      try {
        let filePath = getFilePath(testFileHeic);
        hilog.info(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_2200: image filePath ` + filePath);
        testCreateAndSetPackingOptions(filePath, image.PixelMapFormat.NV21, imageFormatHeif);

        let size = 10000 * 10000;
        let buffer = new ArrayBuffer(size);
        expect(ndkTest.PackToDataFromPictureErrorCode(buffer)).assertEqual(ErrorCode.IMAGE_SUCCESS);
        done();
      } catch (err) {
        hilog.error(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_2200: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_2300
     * @tc.name      : PackToDataFromPicture
     * @tc.desc      : Test packing pictures to data.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_2300', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_2300 begin`);
      try {
        let filePath = getFilePath(testFileHeic);
        hilog.info(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_2300: image filePath ` + filePath);
        testCreateAndSetPackingOptions(filePath, image.PixelMapFormat.NV12, imageFormatHeif);

        let size = 10000 * 10000;
        let buffer = new ArrayBuffer(size);
        expect(ndkTest.PackToDataFromPictureErrorCode(buffer)).assertEqual(ErrorCode.IMAGE_SUCCESS);
        done();
      } catch (err) {
        hilog.error(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_2300: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_ERROR_2400
     * @tc.name      : PackToDataFromPicture
     * @tc.desc      : Test packing pictures to data.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 2
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_ERROR_2400', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_ERROR_2400 begin`);
      try {
        let filePath = getFilePath(testFileHeic);
        hilog.info(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_ERROR_2400: image filePath ` + filePath);
        testCreateAndSetPackingOptions(filePath, image.PixelMapFormat.ALPHA_8, imageFormatHeif);

        let size = 10000 * 10000;
        let buffer = new ArrayBuffer(size);
        expect(ndkTest.PackToDataFromPictureErrorCode(buffer)).assertEqual(ErrorCode.IMAGE_ENCODE_FAILED);
        done();
      } catch (err) {
        hilog.error(domain, testTag,
          `SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_ERROR_2400: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_2500
     * @tc.name      : PackToDataFromPicture
     * @tc.desc      : Test packing pictures to data.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_2500', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_2500 begin`);
      try {
        let filePath = getFilePath(testFileJpg);
        hilog.info(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_2500: image filePath ` + filePath);
        testCreateAndSetPackingOptionsRequiredOnly(filePath, image.PixelMapFormat.NV12, imageFormatJpeg);

        let size = 10000 * 10000;
        let buffer = new ArrayBuffer(size);
        expect(ndkTest.PackToDataFromPicture(buffer)).assertEqual(ErrorCode.IMAGE_SUCCESS);
        done();
      } catch (err) {
        hilog.error(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_2500: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_2600
     * @tc.name      : PackToDataFromPicture
     * @tc.desc      : Test packing pictures to data with required parameter only.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_2600', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_2600 begin`);
      try {
        let filePath = getFilePath(testFileHeic);
        hilog.info(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_2600: image filePath ` + filePath);
        testCreateAndSetPackingOptionsRequiredOnly(filePath, image.PixelMapFormat.NV12, imageFormatHeif);

        let size = 10000 * 10000;
        let buffer = new ArrayBuffer(size);
        expect(ndkTest.PackToDataFromPictureErrorCode(buffer)).assertEqual(ErrorCode.IMAGE_SUCCESS);
        done();
      } catch (err) {
        hilog.error(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_PackToDataFromPicture_2600: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_PackToGainMapFromPicture_0100
     * @tc.name      : PackToGainMapFromPicture
     * @tc.desc      : Test packing gainmap to data.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_PackToGainMapFromPicture_0100', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_PackToGainMapFromPicture_0100 begin`);
      try {
        let filePath = getFilePath(testNoAuxiliaryPictureJpg);
        hilog.info(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_PackToGainMapFromPicture_0100: image filePath ` + filePath);
        testCreateAndSetPackingOptionsSdr(filePath, image.PixelMapFormat.RGBA_8888, imageFormatJpeg);

        let size = 10000 * 10000;
        let buffer = new ArrayBuffer(size);
        expect(ndkTest.PackToDataFromPicture(buffer)).assertEqual(ErrorCode.IMAGE_SUCCESS);
        done();
      } catch (err) {
        hilog.error(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_PackToGainMapFromPicture_0100: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_PackToGainMapFromPicture_0200
     * @tc.name      : PackToGainMapFromPicture
     * @tc.desc      : Test packing gainmap to data.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_PackToGainMapFromPicture_0200', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_PackToGainMapFromPicture_0200 begin`);
      try {
        let filePath = getFilePath(testFileJpg);
        hilog.info(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_PackToGainMapFromPicture_0200: image filePath ` + filePath);
        testCreateAndSetPackingOptionsAuto(filePath, image.PixelMapFormat.RGBA_8888, imageFormatJpeg);

        let size = 10000 * 10000;
        let buffer = new ArrayBuffer(size);
        expect(ndkTest.PackToDataFromPicture(buffer)).assertEqual(ErrorCode.IMAGE_SUCCESS);
        done();
      } catch (err) {
        hilog.error(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_PackToGainMapFromPicture_0200: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_PackToGainMapFromPicture_0300
     * @tc.name      : PackToGainMapFromPicture
     * @tc.desc      : Test packing pictures to data.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_PackToGainMapFromPicture_0300', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_PackToGainMapFromPicture_0300 begin`);
      try {
        let filePath = getFilePath(testFileWithFiveAuxiliaryPictureJpg);
        hilog.info(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_PackToGainMapFromPicture_0300: image filePath ` + filePath);
        testCreateAndSetPackingOptionsAuto(filePath, image.PixelMapFormat.RGBA_8888, imageFormatJpeg);

        let size = 10000 * 10000;
        let buffer = new ArrayBuffer(size);
        expect(ndkTest.PackToDataFromPicture(buffer)).assertEqual(ErrorCode.IMAGE_SUCCESS);
        done();
      } catch (err) {
        hilog.error(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_PackToGainMapFromPicture_0300: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_Picture_GetMetadata_0300
     * @tc.name      : testPictureGetMetadata
     * @tc.desc      : The decoded exif metadata test all key.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_Picture_GetMetadata_0300', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_Picture_GetMetadata_0300 begin`);
      try {
        let log: Logger = new Logger(`SUB_MULTIMEDIA_PICTURE_NDK_Picture_GetMetadata_0300`);
        testCreatePictureByPixelMap(log, testFileJpg);

        let exifType: image.MetadataType = image.MetadataType.EXIF_METADATA;
        expect(ndkTest.PictureGetMetadata(exifType) != undefined).assertTrue();
        for (let i = 0; i < metadataDefaultAllKey.length; i++) {
        expect(ndkTest.pictureMetadataGetProperty(exifType, metadataDefaultAllKey[i].key) == 
          metadataDefaultAllKey[i].value).assertTrue();          
        }
        done();
      } catch (err) {
        hilog.error(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_Picture_GetMetadata_0300: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_ReadPixels_0200
     * @tc.name      : testAuxiliaryPictureReadPixels
     * @tc.desc      : Test read pixels from AuxiliaryPicture.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_ReadPixels_0200', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_ReadPixels_0200 begin`);
      try {
        let filePath = getFilePath(testFileJpg);
        ndkTest.createTestImageSource(filePath);
        ndkTest.createTestPixelmapByImageSource(image.PixelMapFormat.RGBA_8888);

        let buffer: ArrayBuffer = new ArrayBuffer(10000 * 10000);
        buffer = ndkTest.GetPixelmapBuffer(buffer);
        testCreateAuxiliaryPicture(image.AuxiliaryPictureType.GAINMAP);
        ndkTest.AuxiliaryPictureWritePixels(buffer);
        let readBuffer: ArrayBuffer = new ArrayBuffer(10000 * 10000);
        expect(ndkTest.AuxiliaryPictureReadPixels(readBuffer)).assertEqual(ErrorCode.IMAGE_SUCCESS);
        expect(compareArrayFor100Times(readBuffer, buffer)).assertTrue();
        done();
      } catch (err) {
        hilog.error(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_ReadPixels_0200: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_ReadPixels_0300
     * @tc.name      : testAuxiliaryPictureReadPixels
     * @tc.desc      : Test read pixels from AuxiliaryPicture.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_ReadPixels_0300', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_ReadPixels_0300 begin`);
      try {
        let filePath = getFilePath(testFileJpg);
        ndkTest.createTestImageSource(filePath);
        ndkTest.createTestPixelmapByImageSource(image.PixelMapFormat.NV12);

        let buffer: ArrayBuffer = new ArrayBuffer(10000 * 10000);
        buffer = ndkTest.GetPixelmapBuffer(buffer);
        testCreateAuxiliaryPicture(image.AuxiliaryPictureType.GAINMAP);
        ndkTest.AuxiliaryPictureWritePixels(buffer);
        let readBuffer: ArrayBuffer = new ArrayBuffer(10000 * 10000);
        expect(ndkTest.AuxiliaryPictureReadPixels(readBuffer)).assertEqual(ErrorCode.IMAGE_SUCCESS);
        expect(compareArrayFor100Times(readBuffer, buffer)).assertTrue();
        done();
      } catch (err) {
        hilog.error(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_ReadPixels_0300: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_ReadPixels_0400
     * @tc.name      : testAuxiliaryPictureReadPixels
     * @tc.desc      : Test read pixels from AuxiliaryPicture.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_ReadPixels_0400', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag, `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_ReadPixels_0400 begin`);
      try {
        let filePath = getFilePath(testFileJpg);
        ndkTest.createTestImageSource(filePath);
        ndkTest.createTestPixelmapByImageSource(image.PixelMapFormat.NV21);

        let buffer: ArrayBuffer = new ArrayBuffer(10000 * 10000);
        buffer = ndkTest.GetPixelmapBuffer(buffer);
        testCreateAuxiliaryPicture(image.AuxiliaryPictureType.GAINMAP);
        ndkTest.AuxiliaryPictureWritePixels(buffer);
        let readBuffer: ArrayBuffer = new ArrayBuffer(10000 * 10000);
        expect(ndkTest.AuxiliaryPictureReadPixels(readBuffer)).assertEqual(ErrorCode.IMAGE_SUCCESS);
        expect(compareArrayFor100Times(readBuffer, buffer)).assertTrue();
        done();
      } catch (err) {
        hilog.error(domain, testTag, 
          `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPicture_ReadPixels_0400: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_1400
     * @tc.name      : testAuxiliaryPictureInfoSetPixelFormatGetPixelFormat
     * @tc.desc      : Test set and get pixelFormat about AuxiliaryPictureInfo.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_1400', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag,
        `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_1400 begin`);
      try {
        testSetAndGetPixelFormat(image.AuxiliaryPictureType.GAINMAP, image.PixelMapFormat.RGB_565)
        done();
      } catch (err) {
        hilog.error(domain, testTag,
          `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_1400: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_1500
     * @tc.name      : testAuxiliaryPictureInfoSetPixelFormatGetPixelFormat
     * @tc.desc      : Test set and get pixelFormat about AuxiliaryPictureInfo.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_1500', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag,
        `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_1500 begin`);
      try {
        testSetAndGetPixelFormat(image.AuxiliaryPictureType.GAINMAP, image.PixelMapFormat.RGBA_8888)
        done();
      } catch (err) {
        hilog.error(domain, testTag,
          `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_1500: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_1600
     * @tc.name      : testAuxiliaryPictureInfoSetPixelFormatGetPixelFormat
     * @tc.desc      : Test set and get pixelFormat about AuxiliaryPictureInfo.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_1600', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag,
        `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_1600 begin`);
      try {
        testSetAndGetPixelFormat(image.AuxiliaryPictureType.GAINMAP, image.PixelMapFormat.BGRA_8888)
        done();
      } catch (err) {
        hilog.error(domain, testTag,
          `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_1600: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_1700
     * @tc.name      : testAuxiliaryPictureInfoSetPixelFormatGetPixelFormat
     * @tc.desc      : Test set and get pixelFormat about AuxiliaryPictureInfo.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_1700', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag,
        `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_1700 begin`);
      try {
        testSetAndGetPixelFormat(image.AuxiliaryPictureType.GAINMAP, image.PixelMapFormat.RGB_888)
        done();
      } catch (err) {
        hilog.error(domain, testTag,
          `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_1700: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_1800
     * @tc.name      : testAuxiliaryPictureInfoSetPixelFormatGetPixelFormat
     * @tc.desc      : Test set and get pixelFormat about AuxiliaryPictureInfo.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_1800', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag,
        `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_1800 begin`);
      try {
        testSetAndGetPixelFormat(image.AuxiliaryPictureType.GAINMAP, image.PixelMapFormat.RGBA_F16)
        done();
      } catch (err) {
        hilog.error(domain, testTag,
          `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_1800: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_1900
     * @tc.name      : testAuxiliaryPictureInfoSetPixelFormatGetPixelFormat
     * @tc.desc      : Test set and get pixelFormat about AuxiliaryPictureInfo.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_1900', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag,
        `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_1900 begin`);
      try {
        testSetAndGetPixelFormat(image.AuxiliaryPictureType.GAINMAP, image.PixelMapFormat.RGBA_1010102)
        done();
      } catch (err) {
        hilog.error(domain, testTag,
          `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_1900: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_2000
     * @tc.name      : testAuxiliaryPictureInfoSetPixelFormatGetPixelFormat
     * @tc.desc      : Test set and get pixelFormat about AuxiliaryPictureInfo.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_2000', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag,
        `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_2000 begin`);
      try {
        testSetAndGetPixelFormat(image.AuxiliaryPictureType.GAINMAP, image.PixelMapFormat.YCBCR_P010)
        done();
      } catch (err) {
        hilog.error(domain, testTag,
          `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_2000: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_2100
     * @tc.name      : testAuxiliaryPictureInfoSetPixelFormatGetPixelFormat
     * @tc.desc      : Test set and get pixelFormat about AuxiliaryPictureInfo.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_2100', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag,
        `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_2100 begin`);
      try {
        testSetAndGetPixelFormat(image.AuxiliaryPictureType.GAINMAP, image.PixelMapFormat.YCRCB_P010)
        done();
      } catch (err) {
        hilog.error(domain, testTag,
          `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_2100: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_2200
     * @tc.name      : testAuxiliaryPictureInfoSetPixelFormatGetPixelFormat
     * @tc.desc      : Test set and get pixelFormat about AuxiliaryPictureInfo.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_2200', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag,
        `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_2200 begin`);
      try {
        testSetAndGetPixelFormat(image.AuxiliaryPictureType.GAINMAP, image.PixelMapFormat.NV21)
        done();
      } catch (err) {
        hilog.error(domain, testTag,
          `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_2200: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_2300
     * @tc.name      : testAuxiliaryPictureInfoSetPixelFormatGetPixelFormat
     * @tc.desc      : Test set and get pixelFormat about AuxiliaryPictureInfo.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_2300', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag,
        `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_2300 begin`);
      try {
        testSetAndGetPixelFormat(image.AuxiliaryPictureType.GAINMAP, image.PixelMapFormat.NV12)
        done();
      } catch (err) {
        hilog.error(domain, testTag,
          `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_2300: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_2400
     * @tc.name      : testAuxiliaryPictureInfoSetPixelFormatGetPixelFormat
     * @tc.desc      : Test set and get pixelFormat about AuxiliaryPictureInfo.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_2400', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag,
        `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_2400 begin`);
      try {
        testSetAndGetPixelFormat(image.AuxiliaryPictureType.DEPTH_MAP, image.PixelMapFormat.RGB_565)
        done();
      } catch (err) {
        hilog.error(domain, testTag,
          `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_2400: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_2500
     * @tc.name      : testAuxiliaryPictureInfoSetPixelFormatGetPixelFormat
     * @tc.desc      : Test set and get pixelFormat about AuxiliaryPictureInfo.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_2500', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag,
        `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_2500 begin`);
      try {
        testSetAndGetPixelFormat(image.AuxiliaryPictureType.DEPTH_MAP, image.PixelMapFormat.RGBA_8888)
        done();
      } catch (err) {
        hilog.error(domain, testTag,
          `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_2500: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_2600
     * @tc.name      : testAuxiliaryPictureInfoSetPixelFormatGetPixelFormat
     * @tc.desc      : Test set and get pixelFormat about AuxiliaryPictureInfo.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_2600', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag,
        `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_2600 begin`);
      try {
        testSetAndGetPixelFormat(image.AuxiliaryPictureType.DEPTH_MAP, image.PixelMapFormat.BGRA_8888)
        done();
      } catch (err) {
        hilog.error(domain, testTag,
          `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_2600: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_2700
     * @tc.name      : testAuxiliaryPictureInfoSetPixelFormatGetPixelFormat
     * @tc.desc      : Test set and get pixelFormat about AuxiliaryPictureInfo.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_2700', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag,
        `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_2700 begin`);
      try {
        testSetAndGetPixelFormat(image.AuxiliaryPictureType.DEPTH_MAP, image.PixelMapFormat.RGB_888)
        done();
      } catch (err) {
        hilog.error(domain, testTag,
          `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_2700: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_2800
     * @tc.name      : testAuxiliaryPictureInfoSetPixelFormatGetPixelFormat
     * @tc.desc      : Test set and get pixelFormat about AuxiliaryPictureInfo.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_2800', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag,
        `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_2800 begin`);
      try {
        testSetAndGetPixelFormat(image.AuxiliaryPictureType.DEPTH_MAP, image.PixelMapFormat.RGBA_F16)
        done();
      } catch (err) {
        hilog.error(domain, testTag,
          `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_2800: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_2900
     * @tc.name      : testAuxiliaryPictureInfoSetPixelFormatGetPixelFormat
     * @tc.desc      : Test set and get pixelFormat about AuxiliaryPictureInfo.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_2900', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag,
        `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_2900 begin`);
      try {
        testSetAndGetPixelFormat(image.AuxiliaryPictureType.DEPTH_MAP, image.PixelMapFormat.RGBA_1010102)
        done();
      } catch (err) {
        hilog.error(domain, testTag,
          `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_2900: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_3000
     * @tc.name      : testAuxiliaryPictureInfoSetPixelFormatGetPixelFormat
     * @tc.desc      : Test set and get pixelFormat about AuxiliaryPictureInfo.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_3000', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag,
        `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_3000 begin`);
      try {
        testSetAndGetPixelFormat(image.AuxiliaryPictureType.DEPTH_MAP, image.PixelMapFormat.YCBCR_P010)
        done();
      } catch (err) {
        hilog.error(domain, testTag,
          `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_3000: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_3100
     * @tc.name      : testAuxiliaryPictureInfoSetPixelFormatGetPixelFormat
     * @tc.desc      : Test set and get pixelFormat about AuxiliaryPictureInfo.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_3100', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag,
        `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_3100 begin`);
      try {
        testSetAndGetPixelFormat(image.AuxiliaryPictureType.DEPTH_MAP, image.PixelMapFormat.YCRCB_P010)
        done();
      } catch (err) {
        hilog.error(domain, testTag,
          `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_3100: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_3200
     * @tc.name      : testAuxiliaryPictureInfoSetPixelFormatGetPixelFormat
     * @tc.desc      : Test set and get pixelFormat about AuxiliaryPictureInfo.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_3200', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag,
        `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_3200 begin`);
      try {
        testSetAndGetPixelFormat(image.AuxiliaryPictureType.DEPTH_MAP, image.PixelMapFormat.NV21)
        done();
      } catch (err) {
        hilog.error(domain, testTag,
          `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_3200: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_3300
     * @tc.name      : testAuxiliaryPictureInfoSetPixelFormatGetPixelFormat
     * @tc.desc      : Test set and get pixelFormat about AuxiliaryPictureInfo.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_3300', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag,
        `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_3300 begin`);
      try {
        testSetAndGetPixelFormat(image.AuxiliaryPictureType.DEPTH_MAP, image.PixelMapFormat.NV12)
        done();
      } catch (err) {
        hilog.error(domain, testTag,
          `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_3300: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_3400
     * @tc.name      : testAuxiliaryPictureInfoSetPixelFormatGetPixelFormat
     * @tc.desc      : Test set and get pixelFormat about AuxiliaryPictureInfo.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_3400', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag,
        `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_3400 begin`);
      try {
        testSetAndGetPixelFormat(image.AuxiliaryPictureType.UNREFOCUS_MAP, image.PixelMapFormat.RGB_565)
        done();
      } catch (err) {
        hilog.error(domain, testTag,
          `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_3400: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_3500
     * @tc.name      : testAuxiliaryPictureInfoSetPixelFormatGetPixelFormat
     * @tc.desc      : Test set and get pixelFormat about AuxiliaryPictureInfo.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_3500', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag,
        `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_3500 begin`);
      try {
        testSetAndGetPixelFormat(image.AuxiliaryPictureType.UNREFOCUS_MAP, image.PixelMapFormat.RGBA_8888)
        done();
      } catch (err) {
        hilog.error(domain, testTag,
          `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_3500: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_3600
     * @tc.name      : testAuxiliaryPictureInfoSetPixelFormatGetPixelFormat
     * @tc.desc      : Test set and get pixelFormat about AuxiliaryPictureInfo.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_3600', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag,
        `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_3600 begin`);
      try {
        testSetAndGetPixelFormat(image.AuxiliaryPictureType.UNREFOCUS_MAP, image.PixelMapFormat.BGRA_8888)
        done();
      } catch (err) {
        hilog.error(domain, testTag,
          `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_3600: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_3700
     * @tc.name      : testAuxiliaryPictureInfoSetPixelFormatGetPixelFormat
     * @tc.desc      : Test set and get pixelFormat about AuxiliaryPictureInfo.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_3700', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag,
        `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_3700 begin`);
      try {
        testSetAndGetPixelFormat(image.AuxiliaryPictureType.UNREFOCUS_MAP, image.PixelMapFormat.RGB_888)
        done();
      } catch (err) {
        hilog.error(domain, testTag,
          `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_3700: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_3800
     * @tc.name      : testAuxiliaryPictureInfoSetPixelFormatGetPixelFormat
     * @tc.desc      : Test set and get pixelFormat about AuxiliaryPictureInfo.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_3800', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag,
        `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_3800 begin`);
      try {
        testSetAndGetPixelFormat(image.AuxiliaryPictureType.UNREFOCUS_MAP, image.PixelMapFormat.RGBA_F16)
        done();
      } catch (err) {
        hilog.error(domain, testTag,
          `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_3800: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_3900
     * @tc.name      : testAuxiliaryPictureInfoSetPixelFormatGetPixelFormat
     * @tc.desc      : Test set and get pixelFormat about AuxiliaryPictureInfo.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_3900', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag,
        `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_3900 begin`);
      try {
        testSetAndGetPixelFormat(image.AuxiliaryPictureType.UNREFOCUS_MAP, image.PixelMapFormat.RGBA_1010102)
        done();
      } catch (err) {
        hilog.error(domain, testTag,
          `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_3900: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_4000
     * @tc.name      : testAuxiliaryPictureInfoSetPixelFormatGetPixelFormat
     * @tc.desc      : Test set and get pixelFormat about AuxiliaryPictureInfo.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_4000', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag,
        `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_4000 begin`);
      try {
        testSetAndGetPixelFormat(image.AuxiliaryPictureType.UNREFOCUS_MAP, image.PixelMapFormat.YCBCR_P010)
        done();
      } catch (err) {
        hilog.error(domain, testTag,
          `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_4000: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_4100
     * @tc.name      : testAuxiliaryPictureInfoSetPixelFormatGetPixelFormat
     * @tc.desc      : Test set and get pixelFormat about AuxiliaryPictureInfo.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_4100', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag,
        `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_4100 begin`);
      try {
        testSetAndGetPixelFormat(image.AuxiliaryPictureType.UNREFOCUS_MAP, image.PixelMapFormat.YCRCB_P010)
        done();
      } catch (err) {
        hilog.error(domain, testTag,
          `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_4100: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_4200
     * @tc.name      : testAuxiliaryPictureInfoSetPixelFormatGetPixelFormat
     * @tc.desc      : Test set and get pixelFormat about AuxiliaryPictureInfo.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_4200', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag,
        `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_4200 begin`);
      try {
        testSetAndGetPixelFormat(image.AuxiliaryPictureType.UNREFOCUS_MAP, image.PixelMapFormat.NV21)
        done();
      } catch (err) {
        hilog.error(domain, testTag,
          `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_4200: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_4300
     * @tc.name      : testAuxiliaryPictureInfoSetPixelFormatGetPixelFormat
     * @tc.desc      : Test set and get pixelFormat about AuxiliaryPictureInfo.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_4300', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag,
        `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_4300 begin`);
      try {
        testSetAndGetPixelFormat(image.AuxiliaryPictureType.UNREFOCUS_MAP, image.PixelMapFormat.NV12)
        done();
      } catch (err) {
        hilog.error(domain, testTag,
          `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_4300: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_4400
     * @tc.name      : testAuxiliaryPictureInfoSetPixelFormatGetPixelFormat
     * @tc.desc      : Test set and get pixelFormat about AuxiliaryPictureInfo.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_4400', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag,
        `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_4400 begin`);
      try {
        testSetAndGetPixelFormat(image.AuxiliaryPictureType.LINEAR_MAP, image.PixelMapFormat.RGB_565)
        done();
      } catch (err) {
        hilog.error(domain, testTag,
          `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_4400: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_4500
     * @tc.name      : testAuxiliaryPictureInfoSetPixelFormatGetPixelFormat
     * @tc.desc      : Test set and get pixelFormat about AuxiliaryPictureInfo.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_4500', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag,
        `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_4500 begin`);
      try {
        testSetAndGetPixelFormat(image.AuxiliaryPictureType.LINEAR_MAP, image.PixelMapFormat.RGBA_8888)
        done();
      } catch (err) {
        hilog.error(domain, testTag,
          `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_4500: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_4600
     * @tc.name      : testAuxiliaryPictureInfoSetPixelFormatGetPixelFormat
     * @tc.desc      : Test set and get pixelFormat about AuxiliaryPictureInfo.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_4600', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag,
        `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_4600 begin`);
      try {
        testSetAndGetPixelFormat(image.AuxiliaryPictureType.LINEAR_MAP, image.PixelMapFormat.BGRA_8888)
        done();
      } catch (err) {
        hilog.error(domain, testTag,
          `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_4600: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_4700
     * @tc.name      : testAuxiliaryPictureInfoSetPixelFormatGetPixelFormat
     * @tc.desc      : Test set and get pixelFormat about AuxiliaryPictureInfo.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_4700', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag,
        `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_4700 begin`);
      try {
        testSetAndGetPixelFormat(image.AuxiliaryPictureType.LINEAR_MAP, image.PixelMapFormat.RGB_888)
        done();
      } catch (err) {
        hilog.error(domain, testTag,
          `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_4700: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_4800
     * @tc.name      : testAuxiliaryPictureInfoSetPixelFormatGetPixelFormat
     * @tc.desc      : Test set and get pixelFormat about AuxiliaryPictureInfo.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_4800', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag,
        `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_4800 begin`);
      try {
        testSetAndGetPixelFormat(image.AuxiliaryPictureType.LINEAR_MAP, image.PixelMapFormat.RGBA_F16)
        done();
      } catch (err) {
        hilog.error(domain, testTag,
          `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_4800: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_4900
     * @tc.name      : testAuxiliaryPictureInfoSetPixelFormatGetPixelFormat
     * @tc.desc      : Test set and get pixelFormat about AuxiliaryPictureInfo.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_4900', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag,
        `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_4900 begin`);
      try {
        testSetAndGetPixelFormat(image.AuxiliaryPictureType.LINEAR_MAP, image.PixelMapFormat.RGBA_1010102)
        done();
      } catch (err) {
        hilog.error(domain, testTag,
          `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_4900: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_5000
     * @tc.name      : testAuxiliaryPictureInfoSetPixelFormatGetPixelFormat
     * @tc.desc      : Test set and get pixelFormat about AuxiliaryPictureInfo.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_5000', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag,
        `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_5000 begin`);
      try {
        testSetAndGetPixelFormat(image.AuxiliaryPictureType.LINEAR_MAP, image.PixelMapFormat.YCBCR_P010)
        done();
      } catch (err) {
        hilog.error(domain, testTag,
          `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_5000: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_5100
     * @tc.name      : testAuxiliaryPictureInfoSetPixelFormatGetPixelFormat
     * @tc.desc      : Test set and get pixelFormat about AuxiliaryPictureInfo.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_5100', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag,
        `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_5100 begin`);
      try {
        testSetAndGetPixelFormat(image.AuxiliaryPictureType.LINEAR_MAP, image.PixelMapFormat.YCRCB_P010)
        done();
      } catch (err) {
        hilog.error(domain, testTag,
          `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_5100: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_5200
     * @tc.name      : testAuxiliaryPictureInfoSetPixelFormatGetPixelFormat
     * @tc.desc      : Test set and get pixelFormat about AuxiliaryPictureInfo.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_5200', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag,
        `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_5200 begin`);
      try {
        testSetAndGetPixelFormat(image.AuxiliaryPictureType.LINEAR_MAP, image.PixelMapFormat.NV21)
        done();
      } catch (err) {
        hilog.error(domain, testTag,
          `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_5200: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_5300
     * @tc.name      : testAuxiliaryPictureInfoSetPixelFormatGetPixelFormat
     * @tc.desc      : Test set and get pixelFormat about AuxiliaryPictureInfo.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_5300', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag,
        `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_5300 begin`);
      try {
        testSetAndGetPixelFormat(image.AuxiliaryPictureType.LINEAR_MAP, image.PixelMapFormat.NV12)
        done();
      } catch (err) {
        hilog.error(domain, testTag,
          `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_5300: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_5400
     * @tc.name      : testAuxiliaryPictureInfoSetPixelFormatGetPixelFormat
     * @tc.desc      : Test set and get pixelFormat about AuxiliaryPictureInfo.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_5400', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag,
        `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_5400 begin`);
      try {
        testSetAndGetPixelFormat(image.AuxiliaryPictureType.FRAGMENT_MAP, image.PixelMapFormat.RGB_565)
        done();
      } catch (err) {
        hilog.error(domain, testTag,
          `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_5400: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_5500
     * @tc.name      : testAuxiliaryPictureInfoSetPixelFormatGetPixelFormat
     * @tc.desc      : Test set and get pixelFormat about AuxiliaryPictureInfo.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_5500', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag,
        `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_5500 begin`);
      try {
        testSetAndGetPixelFormat(image.AuxiliaryPictureType.FRAGMENT_MAP, image.PixelMapFormat.RGBA_8888)
        done();
      } catch (err) {
        hilog.error(domain, testTag,
          `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_5500: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_5600
     * @tc.name      : testAuxiliaryPictureInfoSetPixelFormatGetPixelFormat
     * @tc.desc      : Test set and get pixelFormat about AuxiliaryPictureInfo.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_5600', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag,
        `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_5600 begin`);
      try {
        testSetAndGetPixelFormat(image.AuxiliaryPictureType.FRAGMENT_MAP, image.PixelMapFormat.BGRA_8888)
        done();
      } catch (err) {
        hilog.error(domain, testTag,
          `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_5600: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_5700
     * @tc.name      : testAuxiliaryPictureInfoSetPixelFormatGetPixelFormat
     * @tc.desc      : Test set and get pixelFormat about AuxiliaryPictureInfo.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_5700', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag,
        `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_5700 begin`);
      try {
        testSetAndGetPixelFormat(image.AuxiliaryPictureType.FRAGMENT_MAP, image.PixelMapFormat.RGB_888)
        done();
      } catch (err) {
        hilog.error(domain, testTag,
          `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_5700: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_5800
     * @tc.name      : testAuxiliaryPictureInfoSetPixelFormatGetPixelFormat
     * @tc.desc      : Test set and get pixelFormat about AuxiliaryPictureInfo.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_5800', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag,
        `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_5800 begin`);
      try {
        testSetAndGetPixelFormat(image.AuxiliaryPictureType.FRAGMENT_MAP, image.PixelMapFormat.RGBA_F16)
        done();
      } catch (err) {
        hilog.error(domain, testTag,
          `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_5800: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_5900
     * @tc.name      : testAuxiliaryPictureInfoSetPixelFormatGetPixelFormat
     * @tc.desc      : Test set and get pixelFormat about AuxiliaryPictureInfo.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_5900', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag,
        `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_5900 begin`);
      try {
        testSetAndGetPixelFormat(image.AuxiliaryPictureType.FRAGMENT_MAP, image.PixelMapFormat.RGBA_1010102)
        done();
      } catch (err) {
        hilog.error(domain, testTag,
          `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_5900: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_6000
     * @tc.name      : testAuxiliaryPictureInfoSetPixelFormatGetPixelFormat
     * @tc.desc      : Test set and get pixelFormat about AuxiliaryPictureInfo.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_6000', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag,
        `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_6000 begin`);
      try {
        testSetAndGetPixelFormat(image.AuxiliaryPictureType.FRAGMENT_MAP, image.PixelMapFormat.YCBCR_P010)
        done();
      } catch (err) {
        hilog.error(domain, testTag,
          `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_6000: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_6100
     * @tc.name      : testAuxiliaryPictureInfoSetPixelFormatGetPixelFormat
     * @tc.desc      : Test set and get pixelFormat about AuxiliaryPictureInfo.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_6100', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag,
        `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_6100 begin`);
      try {
        testSetAndGetPixelFormat(image.AuxiliaryPictureType.FRAGMENT_MAP, image.PixelMapFormat.YCRCB_P010)
        done();
      } catch (err) {
        hilog.error(domain, testTag,
          `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_6100: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_6200
     * @tc.name      : testAuxiliaryPictureInfoSetPixelFormatGetPixelFormat
     * @tc.desc      : Test set and get pixelFormat about AuxiliaryPictureInfo.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_6200', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag,
        `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_6200 begin`);
      try {
        testSetAndGetPixelFormat(image.AuxiliaryPictureType.FRAGMENT_MAP, image.PixelMapFormat.NV21)
        done();
      } catch (err) {
        hilog.error(domain, testTag,
          `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_6200: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })

    /*
     * @tc.number    : SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_6300
     * @tc.name      : testAuxiliaryPictureInfoSetPixelFormatGetPixelFormat
     * @tc.desc      : Test set and get pixelFormat about AuxiliaryPictureInfo.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it('SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_6300', 0, async (done: Function) => {
      await sleep(1000);
      hilog.info(domain, testTag,
        `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_6300 begin`);
      try {
        testSetAndGetPixelFormat(image.AuxiliaryPictureType.FRAGMENT_MAP, image.PixelMapFormat.NV12)
        done();
      } catch (err) {
        hilog.error(domain, testTag,
          `SUB_MULTIMEDIA_PICTURE_NDK_AuxiliaryPictureInfo_SetPixelFormat_GetPixelFormat_6300: Test exception ` + err);
        expect().assertFalse();
        done();
      }
    })
  })
}