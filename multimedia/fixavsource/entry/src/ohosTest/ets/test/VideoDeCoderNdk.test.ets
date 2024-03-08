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
import videodecoderndk from 'libvideodecoderndk.so'
import AbilityDelegatorRegistry from '@ohos.app.ability.abilityDelegatorRegistry'
import Utils from './Utils';
import { BusinessError } from '@ohos.base';
import fs from '@ohos.file.fs';

function getContext(): Context {
  let abilityDelegator = AbilityDelegatorRegistry.getAbilityDelegator();
  let context = abilityDelegator.getAppContext();
  return context;
}

export default function videoDeCoderNdkTest() {
  describe('AvcodecVideoDecoderTest', () => {
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
     * @tc.number     : SUB_MULTIMEDIA_AV_CODEC_NATIVE_AVCODEC_VIDEODECODER_OH_VIDEODECODER_FREEOUTPUTDATA_0100
     * @tc.name       : testOHVideoDecoderFreeOutputData001
     * @tc.desc       : test OH_VideoDecoder_FreeOutputData
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHVideoDecoderFreeOutputData001', 0, async (done: Function) => {
      let result: number = videodecoderndk.oHVideoDecoderFreeOutputData();
      expect(result).assertEqual(0);
      done();
    });

    /**
     * @tc.number     : SUB_MULTIMEDIA_AV_CODEC_NATIVE_AVCODEC_VIDEODECODER_OH_VIDEODECODER_SETSURFACE_0100
     * @tc.name       : testOHVideoDecoderSetSurface001
     * @tc.desc       : test OH_VideoDecoder_SetSurface
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHVideoDecoderSetSurface001', 0, async (done: Function) => {
      let result: number = videodecoderndk.oHVideoDecoderSetSurface();
      expect(result).assertEqual(0);
      done();
    });

    /**
     * @tc.number     : SUB_MULTIMEDIA_AV_CODEC_NATIVE_AVCODEC_VIDEODECODER_OH_VIDEODECODER_PUSHINPUTDATA_0100
     * @tc.name       : testOHVideoDecoderPushInputData001
     * @tc.desc       : test OH_VideoDecoder_PushInputData
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHVideoDecoderPushInputData001', 0, async (done: Function) => {
      let result: number = videodecoderndk.oHVideoDecoderPushInputData();
      expect(result).assertEqual(0);
      done();
    });
  })
}
