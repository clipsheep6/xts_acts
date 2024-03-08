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

import { describe, it, expect, beforeEach, beforeAll } from "@ohos/hypium"
import videoencoderndk from 'libvideoencoderndk.so'
import AbilityDelegatorRegistry from '@ohos.app.ability.abilityDelegatorRegistry'
import Utils from './Utils';
import { BusinessError } from '@ohos.base';
import fs from '@ohos.file.fs';

function getContext(): Context {
  let abilityDelegator = AbilityDelegatorRegistry.getAbilityDelegator();
  let context = abilityDelegator.getAppContext();
  return context;
}

export default function videoEnCoderNdkTest() {
  describe('AvcodecVideoEncoderTest', () => {
    beforeAll(async () => {
      let context = getContext()
      let dir = context.filesDir + "/";
      try {
        let ml_face_model_file = dir + "out_320_240_10s(2).h264";
        context.resourceManager.getRawFileContent("out_320_240_10s(2).h264", (error, model_buffer) => {
          if (error) {
            console.log(
              `[rawfile_copy_to_sandbox] out_320_240_10s(2).h264 is
              copy failed:${error.code}, message: ${error.message}.`);
          } else {
            let file = fs.openSync(ml_face_model_file, fs.OpenMode.READ_WRITE | fs.OpenMode.CREATE);
            fs.writeSync(file.fd, model_buffer.buffer);
            fs.closeSync(file);
            console.log("[rawfile_copy_to_sandbox] out_320_240_10s(2).h264 is copy success");
          }
        });
      } catch (error) {
        console.info("[rawfile_copy_to_sandbox] getRawFileDescriptor api run failed" + error);
      }

      console.info("[rawfile_copy_to_sandbox] sandbox path:" + dir);
      await Utils.sleep(2000)
    })

    beforeEach(async () => {
      let dir = getContext().filesDir + "/";

      let ml_face_model = dir + "out_320_240_10s(2).h264";
      await fs.stat(ml_face_model).then(async (res) => {
        if (res) {
          console.info("MindSporeDemo out_320_240_10s(2).h264 file exists");
          console.info(`MindSporeDemo out_320_240_10s(2).h264 size:${res.size}`);
        }
      }).catch((err: BusinessError) => {
        console.info("MindSporeDemo out_320_240_10s(2).h264 file does not exists! access failed with error message: " +
        err.message + ", error code: " + err.code);
      });
      await Utils.sleep(2000)
    })

    /**
     * @tc.number     : SUB_MULTIMEDIA_AV_CODEC_NATIVE_AVCODEC_VIDEOENCODER_OH_VIDEOENCODER_GETSURFACE_0100
     * @tc.name       : testOHVideoEncoderGetSurface001
     * @tc.desc       : test OH_VideoEncoder_GetSurface
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHVideoEncoderGetSurface001', 0, async (done: Function) => {
      let result: number = videoencoderndk.oHVideoEncoderGetSurface(1, 1, 1, 1, 1, 1);
      expect(result).assertEqual(0);
      done();
    });

    /**
     * @tc.number     : SUB_MULTIMEDIA_AV_CODEC_NATIVE_AVCODEC_VIDEOENCODER_OH_VIDEOENCODER_GETSURFACE_0200
     * @tc.name       : testOHVideoEncoderGetSurface002
     * @tc.desc       : test OH_VideoEncoder_GetSurface
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHVideoEncoderGetSurface002', 0, async (done: Function) => {
      let result: number = videoencoderndk.oHVideoEncoderGetSurface(2, 1, 1, 1, 1, 1);
      expect(result).assertEqual(0);
      done();
    });

    /**
     * @tc.number     : SUB_MULTIMEDIA_AV_CODEC_NATIVE_AVCODEC_VIDEOENCODER_OH_VIDEOENCODER_GETSURFACE_0300
     * @tc.name       : testOHVideoEncoderGetSurface003
     * @tc.desc       : test OH_VideoEncoder_GetSurface
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHVideoEncoderGetSurface003', 0, async (done: Function) => {
      let result: number = videoencoderndk.oHVideoEncoderGetSurface(1, 1, 1, 1, 0, 0);
      expect(result).assertEqual(0);
      done();
    });

    /**
     * @tc.number     : SUB_MULTIMEDIA_AV_CODEC_NATIVE_AVCODEC_VIDEOENCODER_OH_VIDEOENCODER_GETSURFACE_0400
     * @tc.name       : testOHVideoEncoderGetSurface004
     * @tc.desc       : test OH_VideoEncoder_GetSurface
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHVideoEncoderGetSurface004', 0, async (done: Function) => {
      let result: number = videoencoderndk.oHVideoEncoderGetSurface(1, 1, 1, 0, 1, 0);
      expect(result).assertEqual(-1);
      done();
    });

    /**
     * @tc.number     : SUB_MULTIMEDIA_AV_CODEC_NATIVE_AVCODEC_VIDEOENCODER_OH_VIDEOENCODER_GETSURFACE_0500
     * @tc.name       : testOHVideoEncoderGetSurface005
     * @tc.desc       : test OH_VideoEncoder_GetSurface
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHVideoEncoderGetSurface005', 0, async (done: Function) => {
      let result: number = videoencoderndk.oHVideoEncoderGetSurface(1, 1, 1, 0, 0, 0);
      expect(result).assertEqual(0);
      done();
    });

    /**
     * @tc.number     : SUB_MULTIMEDIA_AV_CODEC_NATIVE_AVCODEC_VIDEOENCODER_OH_VIDEOENCODER_GETSURFACE_0600
     * @tc.name       : testOHVideoEncoderGetSurface006
     * @tc.desc       : test OH_VideoEncoder_GetSurface
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHVideoEncoderGetSurface006', 0, async (done: Function) => {
      let result: number = videoencoderndk.oHVideoEncoderGetSurface(1, 1, 0, 1, 1, 0);
      expect(result).assertEqual(0);
      done();
    });

    /**
     * @tc.number     : SUB_MULTIMEDIA_AV_CODEC_NATIVE_AVCODEC_VIDEOENCODER_OH_VIDEOENCODER_GETSURFACE_0700
     * @tc.name       : testOHVideoEncoderGetSurface007
     * @tc.desc       : test OH_VideoEncoder_GetSurface
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHVideoEncoderGetSurface007', 0, async (done: Function) => {
      let result: number = videoencoderndk.oHVideoEncoderGetSurface(1, 1, 0, 1, 0, 0);
      expect(result).assertEqual(0);
      done();
    });

    /**
     * @tc.number     : SUB_MULTIMEDIA_AV_CODEC_NATIVE_AVCODEC_VIDEOENCODER_OH_VIDEOENCODER_GETSURFACE_0800
     * @tc.name       : testOHVideoEncoderGetSurface008
     * @tc.desc       : test OH_VideoEncoder_GetSurface
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHVideoEncoderGetSurface008', 0, async (done: Function) => {
      let result: number = videoencoderndk.oHVideoEncoderGetSurface(1, 1, 0, 0, 1, 0);
      expect(result).assertEqual(0);
      done();
    });

    /**
     * @tc.number     : SUB_MULTIMEDIA_AV_CODEC_NATIVE_AVCODEC_VIDEOENCODER_OH_VIDEOENCODER_GETSURFACE_0900
     * @tc.name       : testOHVideoEncoderGetSurface009
     * @tc.desc       : test OH_VideoEncoder_GetSurface
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHVideoEncoderGetSurface009', 0, async (done: Function) => {
      let result: number = videoencoderndk.oHVideoEncoderGetSurface(1, 1, 0, 0, 0, 0);
      expect(result).assertEqual(0);
      done();
    });

    /**
     * @tc.number     : SUB_MULTIMEDIA_AV_CODEC_NATIVE_AVCODEC_VIDEOENCODER_OH_VIDEOENCODER_GETSURFACE_1000
     * @tc.name       : testOHVideoEncoderGetSurface010
     * @tc.desc       : test OH_VideoEncoder_GetSurface
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHVideoEncoderGetSurface010', 0, async (done: Function) => {
      let result: number = videoencoderndk.oHVideoEncoderGetSurface(1, 0, 1, 1, 1, 0);
      expect(result).assertEqual(0);
      done();
    });

    /**
     * @tc.number     : SUB_MULTIMEDIA_AV_CODEC_NATIVE_AVCODEC_VIDEOENCODER_OH_VIDEOENCODER_GETSURFACE_1100
     * @tc.name       : testOHVideoEncoderGetSurface011
     * @tc.desc       : test OH_VideoEncoder_GetSurface
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHVideoEncoderGetSurface011', 0, async (done: Function) => {
      let result: number = videoencoderndk.oHVideoEncoderGetSurface(1, 0, 1, 1, 0, 0);
      expect(result).assertEqual(0);
      done();
    });

    /**
     * @tc.number     : SUB_MULTIMEDIA_AV_CODEC_NATIVE_AVCODEC_VIDEOENCODER_OH_VIDEOENCODER_GETSURFACE_1200
     * @tc.name       : testOHVideoEncoderGetSurface012
     * @tc.desc       : test OH_VideoEncoder_GetSurface
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHVideoEncoderGetSurface012', 0, async (done: Function) => {
      let result: number = videoencoderndk.oHVideoEncoderGetSurface(1, 0, 1, 0, 1, 0);
      expect(result).assertEqual(0);
      done();
    });

    /**
     * @tc.number     : SUB_MULTIMEDIA_AV_CODEC_NATIVE_AVCODEC_VIDEOENCODER_OH_VIDEOENCODER_GETSURFACE_1300
     * @tc.name       : testOHVideoEncoderGetSurface013
     * @tc.desc       : test OH_VideoEncoder_GetSurface
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHVideoEncoderGetSurface013', 0, async (done: Function) => {
      let result: number = videoencoderndk.oHVideoEncoderGetSurface(1, 0, 1, 0, 0, 0);
      expect(result).assertEqual(0);
      done();
    });

    /**
     * @tc.number     : SUB_MULTIMEDIA_AV_CODEC_NATIVE_AVCODEC_VIDEOENCODER_OH_VIDEOENCODER_GETSURFACE_1400
     * @tc.name       : testOHVideoEncoderGetSurface014
     * @tc.desc       : test OH_VideoEncoder_GetSurface
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHVideoEncoderGetSurface014', 0, async (done: Function) => {
      let result: number = videoencoderndk.oHVideoEncoderGetSurface(1, 0, 0, 1, 1, 0);
      expect(result).assertEqual(0);
      done();
    });

    /**
     * @tc.number     : SUB_MULTIMEDIA_AV_CODEC_NATIVE_AVCODEC_VIDEOENCODER_OH_VIDEOENCODER_GETSURFACE_1500
     * @tc.name       : testOHVideoEncoderGetSurface015
     * @tc.desc       : test OH_VideoEncoder_GetSurface
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHVideoEncoderGetSurface015', 0, async (done: Function) => {
      let result: number = videoencoderndk.oHVideoEncoderGetSurface(1, 0, 0, 1, 0, 0);
      expect(result).assertEqual(0);
      done();
    });

    /**
     * @tc.number     : SUB_MULTIMEDIA_AV_CODEC_NATIVE_AVCODEC_VIDEOENCODER_OH_VIDEOENCODER_GETSURFACE_1600
     * @tc.name       : testOHVideoEncoderGetSurface016
     * @tc.desc       : test OH_VideoEncoder_GetSurface
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHVideoEncoderGetSurface016', 0, async (done: Function) => {
      let result: number = videoencoderndk.oHVideoEncoderGetSurface(1, 0, 0, 0, 1, 0);
      expect(result).assertEqual(0);
      done();
    });

    /**
     * @tc.number     : SUB_MULTIMEDIA_AV_CODEC_NATIVE_AVCODEC_VIDEOENCODER_OH_VIDEOENCODER_GETSURFACE_1700
     * @tc.name       : testOHVideoEncoderGetSurface017
     * @tc.desc       : test OH_VideoEncoder_GetSurface
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHVideoEncoderGetSurface017', 0, async (done: Function) => {
      let result: number = videoencoderndk.oHVideoEncoderGetSurface(1, 0, 0, 0, 0, 0);
      expect(result).assertEqual(0);
      done();
    });

    /**
     * @tc.number     : SUB_MULTIMEDIA_AV_CODEC_NATIVE_AVCODEC_VIDEOENCODER_OH_VIDEOENCODER_GETSURFACE_1800
     * @tc.name       : testOHVideoEncoderGetSurface018
     * @tc.desc       : test OH_VideoEncoder_GetSurface
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHVideoEncoderGetSurface018', 0, async (done: Function) => {
      let result: number = videoencoderndk.oHVideoEncoderGetSurface(0, 1, 1, 1, 1, 0);
      expect(result).assertEqual(0);
      done();
    });

    /**
     * @tc.number     : SUB_MULTIMEDIA_AV_CODEC_NATIVE_AVCODEC_VIDEOENCODER_OH_VIDEOENCODER_GETSURFACE_1900
     * @tc.name       : testOHVideoEncoderGetSurface019
     * @tc.desc       : test OH_VideoEncoder_GetSurface
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHVideoEncoderGetSurface019', 0, async (done: Function) => {
      let result: number = videoencoderndk.oHVideoEncoderGetSurface(0, 1, 1, 1, 0, 0);
      expect(result).assertEqual(0);
      done();
    });

    /**
     * @tc.number     : SUB_MULTIMEDIA_AV_CODEC_NATIVE_AVCODEC_VIDEOENCODER_OH_VIDEOENCODER_GETSURFACE_2000
     * @tc.name       : testOHVideoEncoderGetSurface020
     * @tc.desc       : test OH_VideoEncoder_GetSurface
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHVideoEncoderGetSurface020', 0, async (done: Function) => {
      let result: number = videoencoderndk.oHVideoEncoderGetSurface(0, 1, 1, 0, 1, 0);
      expect(result).assertEqual(0);
      done();
    });

    /**
     * @tc.number     : SUB_MULTIMEDIA_AV_CODEC_NATIVE_AVCODEC_VIDEOENCODER_OH_VIDEOENCODER_GETSURFACE_2100
     * @tc.name       : testOHVideoEncoderGetSurface021
     * @tc.desc       : test OH_VideoEncoder_GetSurface
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHVideoEncoderGetSurface021', 0, async (done: Function) => {
      let result: number = videoencoderndk.oHVideoEncoderGetSurface(0, 1, 1, 0, 0, 0);
      expect(result).assertEqual(0);
      done();
    });

    /**
     * @tc.number     : SUB_MULTIMEDIA_AV_CODEC_NATIVE_AVCODEC_VIDEOENCODER_OH_VIDEOENCODER_GETSURFACE_2200
     * @tc.name       : testOHVideoEncoderGetSurface022
     * @tc.desc       : test OH_VideoEncoder_GetSurface
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHVideoEncoderGetSurface022', 0, async (done: Function) => {
      let result: number = videoencoderndk.oHVideoEncoderGetSurface(0, 1, 0, 1, 1, 0);
      expect(result).assertEqual(0);
      done();
    });

    /**
     * @tc.number     : SUB_MULTIMEDIA_AV_CODEC_NATIVE_AVCODEC_VIDEOENCODER_OH_VIDEOENCODER_GETSURFACE_2300
     * @tc.name       : testOHVideoEncoderGetSurface023
     * @tc.desc       : test OH_VideoEncoder_GetSurface
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHVideoEncoderGetSurface023', 0, async (done: Function) => {
      let result: number = videoencoderndk.oHVideoEncoderGetSurface(0, 1, 0, 1, 0, 0);
      expect(result).assertEqual(0);
      done();
    });

    /**
     * @tc.number     : SUB_MULTIMEDIA_AV_CODEC_NATIVE_AVCODEC_VIDEOENCODER_OH_VIDEOENCODER_GETSURFACE_2400
     * @tc.name       : testOHVideoEncoderGetSurface024
     * @tc.desc       : test OH_VideoEncoder_GetSurface
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHVideoEncoderGetSurface024', 0, async (done: Function) => {
      let result: number = videoencoderndk.oHVideoEncoderGetSurface(0, 1, 0, 0, 1, 0);
      expect(result).assertEqual(0);
      done();
    });

    /**
     * @tc.number     : SUB_MULTIMEDIA_AV_CODEC_NATIVE_AVCODEC_VIDEOENCODER_OH_VIDEOENCODER_GETSURFACE_2500
     * @tc.name       : testOHVideoEncoderGetSurface025
     * @tc.desc       : test OH_VideoEncoder_GetSurface
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHVideoEncoderGetSurface025', 0, async (done: Function) => {
      let result: number = videoencoderndk.oHVideoEncoderGetSurface(0, 1, 0, 0, 0, 0);
      expect(result).assertEqual(0);
      done();
    });

    /**
     * @tc.number     : SUB_MULTIMEDIA_AV_CODEC_NATIVE_AVCODEC_VIDEOENCODER_OH_VIDEOENCODER_GETSURFACE_2600
     * @tc.name       : testOHVideoEncoderGetSurface026
     * @tc.desc       : test OH_VideoEncoder_GetSurface
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHVideoEncoderGetSurface026', 0, async (done: Function) => {
      let result: number = videoencoderndk.oHVideoEncoderGetSurface(0, 0, 1, 1, 1, 0);
      expect(result).assertEqual(0);
      done();
    });

    /**
     * @tc.number     : SUB_MULTIMEDIA_AV_CODEC_NATIVE_AVCODEC_VIDEOENCODER_OH_VIDEOENCODER_GETSURFACE_2700
     * @tc.name       : testOHVideoEncoderGetSurface027
     * @tc.desc       : test OH_VideoEncoder_GetSurface
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHVideoEncoderGetSurface027', 0, async (done: Function) => {
      let result: number = videoencoderndk.oHVideoEncoderGetSurface(0, 0, 1, 1, 0, 0);
      expect(result).assertEqual(0);
      done();
    });

    /**
     * @tc.number     : SUB_MULTIMEDIA_AV_CODEC_NATIVE_AVCODEC_VIDEOENCODER_OH_VIDEOENCODER_GETSURFACE_2800
     * @tc.name       : testOHVideoEncoderGetSurface028
     * @tc.desc       : test OH_VideoEncoder_GetSurface
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHVideoEncoderGetSurface028', 0, async (done: Function) => {
      let result: number = videoencoderndk.oHVideoEncoderGetSurface(0, 0, 1, 0, 1, 0);
      expect(result).assertEqual(0);
      done();
    });

    /**
     * @tc.number     : SUB_MULTIMEDIA_AV_CODEC_NATIVE_AVCODEC_VIDEOENCODER_OH_VIDEOENCODER_GETSURFACE_2900
     * @tc.name       : testOHVideoEncoderGetSurface029
     * @tc.desc       : test OH_VideoEncoder_GetSurface
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHVideoEncoderGetSurface029', 0, async (done: Function) => {
      let result: number = videoencoderndk.oHVideoEncoderGetSurface(0, 0, 1, 0, 0, 0);
      expect(result).assertEqual(0);
      done();
    });

    /**
     * @tc.number     : SUB_MULTIMEDIA_AV_CODEC_NATIVE_AVCODEC_VIDEOENCODER_OH_VIDEOENCODER_GETSURFACE_3000
     * @tc.name       : testOHVideoEncoderGetSurface030
     * @tc.desc       : test OH_VideoEncoder_GetSurface
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHVideoEncoderGetSurface030', 0, async (done: Function) => {
      let result: number = videoencoderndk.oHVideoEncoderGetSurface(0, 0, 0, 1, 1, 0);
      expect(result).assertEqual(0);
      done();
    });

    /**
     * @tc.number     : SUB_MULTIMEDIA_AV_CODEC_NATIVE_AVCODEC_VIDEOENCODER_OH_VIDEOENCODER_GETSURFACE_3100
     * @tc.name       : testOHVideoEncoderGetSurface031
     * @tc.desc       : test OH_VideoEncoder_GetSurface
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHVideoEncoderGetSurface031', 0, async (done: Function) => {
      let result: number = videoencoderndk.oHVideoEncoderGetSurface(0, 0, 0, 1, 0, 0);
      expect(result).assertEqual(0);
      done();
    });

    /**
     * @tc.number     : SUB_MULTIMEDIA_AV_CODEC_NATIVE_AVCODEC_VIDEOENCODER_OH_VIDEOENCODER_GETSURFACE_3200
     * @tc.name       : testOHVideoEncoderGetSurface032
     * @tc.desc       : test OH_VideoEncoder_GetSurface
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHVideoEncoderGetSurface032', 0, async (done: Function) => {
      let result: number = videoencoderndk.oHVideoEncoderGetSurface(0, 0, 0, 0, 1, 0);
      expect(result).assertEqual(0);
      done();
    });

    /**
     * @tc.number     : SUB_MULTIMEDIA_AV_CODEC_NATIVE_AVCODEC_VIDEOENCODER_OH_VIDEOENCODER_GETSURFACE_3300
     * @tc.name       : testOHVideoEncoderGetSurface033
     * @tc.desc       : test OH_VideoEncoder_GetSurface
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHVideoEncoderGetSurface033', 0, async (done: Function) => {
      let result: number = videoencoderndk.oHVideoEncoderGetSurface(0, 0, 0, 0, 0, 0);
      expect(result).assertEqual(0);
      done();
    });

    /**
     * @tc.number     : SUB_MULTIMEDIA_AV_CODEC_NATIVE_AVCODEC_VIDEOENCODER_OH_VIDEOENCODER_NOTIFYENDOFSTREAM_0100
     * @tc.name       : testOHVideoEncoderNotifyEndOfStream001
     * @tc.desc       : test OH_VideoEncoder_NotifyEndOfStream
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHVideoEncoderNotifyEndOfStream001', 0, async (done: Function) => {
      let result: number = videoencoderndk.oHVideoEncoderNotifyEndOfStream();
      expect(result).assertEqual(0);
      done();
    });
  })
}
