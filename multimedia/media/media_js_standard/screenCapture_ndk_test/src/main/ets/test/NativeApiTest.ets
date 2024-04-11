/*
 * Copyright (C) 2024 Huawei Device Co., Ltd.
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

import hilog from '@ohos.hilog';
import featureAbility from '@ohos.ability.featureAbility';
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium'
import myScreenCaptureNdk from "libscreenCaptureNdkTest.so"
import display from '@ohos.display'
import Utils from './Utils'

const Tag = 'screen_capture_ndk_test:'
export default function nativeApiScreenCaptureJsunit() {
  describe('napiTest', () => {
    beforeAll(async () => {
      await Utils.sleep(3000);
      console.info('beforeAll case');
    });
    beforeEach(() => {
      console.info('beforeEach case');
    });
    afterEach(() => {
      console.info('afterEach case');
    });
    afterAll(() => {
      console.info('afterAll case');
    });
    /* *
        * @tc.number    : SUB_MULTIMEDIA_SCREEN_CAPTURE_VIDEO_CONFIGURE_0001
        * @tc.name      : Test OH_AVScreenCapture_Init
        * @tc.desc      :
        * @tc.size      :
        * @tc.type      : Functional
        * @tc.level     : FWK Layer
    */
    it('SUB_MULTIMEDIA_SCREEN_CAPTURE_VIDEO_CONFIGURE_0001', 0, async (done: Function) => {
      let a = myScreenCaptureNdk.initVideoWidthErr() as number;
      console.info(Tag + "SUB_MULTIMEDIA_SCREEN_CAPTURE_VIDEO_CONFIGURE_0001-------------initVideoWidthErr:" + a);
      expect(a).assertEqual(2);
      done();
    });
    /* *
        * @tc.number    : SUB_MULTIMEDIA_SCREEN_CAPTURE_VIDEO_CONFIGURE_0002
        * @tc.name      : Test OH_AVScreenCapture_Init
        * @tc.desc      :
        * @tc.size      :
        * @tc.type      : Functional
        * @tc.level     : FWK Layer
    */
    it('SUB_MULTIMEDIA_SCREEN_CAPTURE_VIDEO_CONFIGURE_0002', 0, async (done: Function) => {
      let a = myScreenCaptureNdk.initVideoHeightErr() as number;
      console.info(Tag + "SUB_MULTIMEDIA_SCREEN_CAPTURE_VIDEO_CONFIGURE_0002-------------initVideoHeightErr:" + a);
      expect(a).assertEqual(2);
      done();
    });
    /* *
        * @tc.number    : SUB_MULTIMEDIA_SCREEN_CAPTURE_VIDEO_CONFIGURE_0003
        * @tc.name      : Test OH_AVScreenCapture_Init
        * @tc.desc      :
        * @tc.size      :
        * @tc.type      : Functional
        * @tc.level     : FWK Layer
    */
    it('SUB_MULTIMEDIA_SCREEN_CAPTURE_VIDEO_CONFIGURE_0003', 0, async (done: Function) => {
      let a = myScreenCaptureNdk.initVideoSourceErr_YUV() as number;
      console.info(Tag + "SUB_MULTIMEDIA_SCREEN_CAPTURE_VIDEO_CONFIGURE_0003-------------initVideoSourceErr_YUV:" + a);
      expect(a).assertEqual(2);
      done();
    });
    /* *
        * @tc.number    : SUB_MULTIMEDIA_SCREEN_CAPTURE_VIDEO_CONFIGURE_0004
        * @tc.name      : Test OH_AVScreenCapture_Init
        * @tc.desc      :
        * @tc.size      :
        * @tc.type      : Functional
        * @tc.level     : FWK Layer
    */
    it('SUB_MULTIMEDIA_SCREEN_CAPTURE_VIDEO_CONFIGURE_0004', 0, async (done: Function) => {
      let a = myScreenCaptureNdk.initVideoSourceErr_ES() as number;
      console.info(Tag + "SUB_MULTIMEDIA_SCREEN_CAPTURE_VIDEO_CONFIGURE_0004-------------initVideoSourceErr_ES:" + a);
      expect(a).assertEqual(2);
      done();
    });
    /* *
        * @tc.number    : SUB_MULTIMEDIA_SCREEN_CAPTURE_WITHOUT_SOUND_DATA
        * @tc.name      : Test OH_AVScreenCapture_Init, OH_AVScreenCapture_StartScreenCapture, OH_AVScreenCapture_StopScreenCapture
        * @tc.desc      :
        * @tc.size      :
        * @tc.type      : Functional
        * @tc.level     : FWK Layer
    */
    it('SUB_MULTIMEDIA_SCREEN_CAPTURE_WITHOUT_SOUND_DATA', 0, async (done: Function) => {
      let a = myScreenCaptureNdk.screenCaptureWithoutAudioData() as number;
      console.info(Tag + "SUB_MULTIMEDIA_SCREEN_CAPTURE_WITHOUT_SOUND_DATA-------------screenCaptureWithoutAudioData:" + a);
      expect(a).assertEqual(0);
      done();
    });
    /* *
        * @tc.number    : SUB_MULTIMEDIA_SCREEN_CAPTURE_AUDIO_CONFIGURE_0001
        * @tc.name      : Test OH_AVScreenCapture_Init
        * @tc.desc      :
        * @tc.size      :
        * @tc.type      : Functional
        * @tc.level     : FWK Layer
    */
    it('SUB_MULTIMEDIA_SCREEN_CAPTURE_AUDIO_CONFIGURE_0001', 0, async (done: Function) => {
      let a = myScreenCaptureNdk.initAudioSampleErr_01() as number;
      console.info(Tag + "SUB_MULTIMEDIA_SCREEN_CAPTURE_AUDIO_CONFIGURE_0001-------------initAudioSampleErr_01:" + a);
      expect(a).assertEqual(2);
      done();
    });
    /* *
        * @tc.number    : SUB_MULTIMEDIA_SCREEN_CAPTURE_AUDIO_CONFIGURE_0002
        * @tc.name      : Test OH_AVScreenCapture_Init
        * @tc.desc      :
        * @tc.size      :
        * @tc.type      : Functional
        * @tc.level     : FWK Layer
    */
    it('SUB_MULTIMEDIA_SCREEN_CAPTURE_AUDIO_CONFIGURE_0002', 0, async (done: Function) => {
      let a = myScreenCaptureNdk.initAudioSampleErr_02() as number;
      console.info(Tag + "SUB_MULTIMEDIA_SCREEN_CAPTURE_AUDIO_CONFIGURE_0002-------------initAudioSampleErr_02:" + a);
      expect(a).assertEqual(2);
      done();
    });
    /* *
        * @tc.number    : SUB_MULTIMEDIA_SCREEN_CAPTURE_AUDIO_CONFIGURE_0003
        * @tc.name      : Test OH_AVScreenCapture_Init
        * @tc.desc      :
        * @tc.size      :
        * @tc.type      : Functional
        * @tc.level     : FWK Layer
    */
    it('SUB_MULTIMEDIA_SCREEN_CAPTURE_AUDIO_CONFIGURE_0003', 0, async (done: Function) => {
      let a = myScreenCaptureNdk.initAudioSampleErr_03() as number;
      console.info(Tag + "SUB_MULTIMEDIA_SCREEN_CAPTURE_AUDIO_CONFIGURE_0003-------------initAudioSampleErr_03:" + a);
      expect(a).assertEqual(2);
      done();
    });
    /* *
        * @tc.number    : SUB_MULTIMEDIA_SCREEN_CAPTURE_AUDIO_CONFIGURE_0004
        * @tc.name      : Test OH_AVScreenCapture_Init
        * @tc.desc      :
        * @tc.size      :
        * @tc.type      : Functional
        * @tc.level     : FWK Layer
    */
    it('SUB_MULTIMEDIA_SCREEN_CAPTURE_AUDIO_CONFIGURE_0004', 0, async (done: Function) => {
      let a = myScreenCaptureNdk.initAudioChannelsErr_01() as number;
      console.info(Tag + "SUB_MULTIMEDIA_SCREEN_CAPTURE_AUDIO_CONFIGURE_0004-------------initAudioChannelsErr_01:" + a);
      expect(a).assertEqual(2);
      done();
    });
    /* *
        * @tc.number    : SUB_MULTIMEDIA_SCREEN_CAPTURE_AUDIO_CONFIGURE_0005
        * @tc.name      : Test OH_AVScreenCapture_Init
        * @tc.desc      :
        * @tc.size      :
        * @tc.type      : Functional
        * @tc.level     : FWK Layer
    */
    it('SUB_MULTIMEDIA_SCREEN_CAPTURE_AUDIO_CONFIGURE_0005', 0, async (done: Function) => {
      let a = myScreenCaptureNdk.initAudioChannelsErr_02() as number;
      console.info(Tag + "SUB_MULTIMEDIA_SCREEN_CAPTURE_AUDIO_CONFIGURE_0005-------------initAudioChannelsErr_02:" + a);
      expect(a).assertEqual(2);
      done();
    });
    /* *
        * @tc.number    : SUB_MULTIMEDIA_SCREEN_CAPTURE_AUDIO_CONFIGURE_0006
        * @tc.name      : Test OH_AVScreenCapture_Init
        * @tc.desc      :
        * @tc.size      :
        * @tc.type      : Functional
        * @tc.level     : FWK Layer
    */
    it('SUB_MULTIMEDIA_SCREEN_CAPTURE_AUDIO_CONFIGURE_0006', 0, async (done: Function) => {
      let a = myScreenCaptureNdk.initAudioSourceErr() as number;
      console.info(Tag + "SUB_MULTIMEDIA_SCREEN_CAPTURE_AUDIO_CONFIGURE_0006-------------initAudioSourceErr:" + a);
      expect(a).assertEqual(2);
      done();
    });
    /* *
        * @tc.number    : SUB_MULTIMEDIA_SCREEN_CAPTURE_AV_CONFIGURE
        * @tc.name      : Test OH_AVScreenCapture_Init
        * @tc.desc      :
        * @tc.size      :
        * @tc.type      : Functional
        * @tc.level     : FWK Layer
    */
    it('SUB_MULTIMEDIA_SCREEN_CAPTURE_AV_CONFIGURE', 0, async (done: Function) => {
      let a = myScreenCaptureNdk.initAVErr() as number;
      console.info(Tag + "SUB_MULTIMEDIA_SCREEN_CAPTURE_AV_CONFIGURE-------------initAVErr:" + a);
      expect(a).assertEqual(2);
      done();
    });
    /* *
        * @tc.number    : SUB_MULTIMEDIA_SCREEN_CAPTURE_WITH_SOUND_DATA
        * @tc.name      : Test OH_AVScreenCapture_Init, OH_AVScreenCapture_StartScreenCapture, OH_AVScreenCapture_StopScreenCapture
        * @tc.desc      :
        * @tc.size      :
        * @tc.type      : Functional
        * @tc.level     : FWK Layer
    */
    it('SUB_MULTIMEDIA_SCREEN_CAPTURE_WITH_SOUND_DATA', 0, async (done: Function) => {
      let a = myScreenCaptureNdk.screenCaptureWithAudioData() as number;
      console.info(Tag + "SUB_MULTIMEDIA_SCREEN_CAPTURE_WITH_SOUND_DATA-------------screenCaptureWithAudioData:" + a);
      expect(a).assertEqual(0);
      done();
    });
    /* *
        * @tc.number    : SUB_MULTIMEDIA_SCREEN_CAPTURE_CAPTUREMODE_0001
        * @tc.name      : Test OH_AVScreenCapture_Init
        * @tc.desc      :
        * @tc.size      :
        * @tc.type      : Functional
        * @tc.level     : FWK Layer
    */
    it('SUB_MULTIMEDIA_SCREEN_CAPTURE_CAPTUREMODE_0001', 0, async (done: Function) => {
      let a = myScreenCaptureNdk.initCaptureMode_01() as number;
      console.info(Tag + "SUB_MULTIMEDIA_SCREEN_CAPTURE_CAPTUREMODE_0001-------------initCaptureMode_01:" + a);
      expect(a).assertEqual(2);
      done();
    });
    /* *
        * @tc.number    : SUB_MULTIMEDIA_SCREEN_CAPTURE_CAPTUREMODE_0002
        * @tc.name      : Test OH_AVScreenCapture_Init
        * @tc.desc      :
        * @tc.size      :
        * @tc.type      : Functional
        * @tc.level     : FWK Layer
    */
    it('SUB_MULTIMEDIA_SCREEN_CAPTURE_CAPTUREMODE_0002', 0, async (done: Function) => {
      let a = myScreenCaptureNdk.initCaptureMode_02() as number;
      console.info(Tag + "SUB_MULTIMEDIA_SCREEN_CAPTURE_CAPTUREMODE_0002-------------initCaptureMode_02:" + a);
      expect(a).assertEqual(2);
      done();
    });
    /* *
        * @tc.number    : SUB_MULTIMEDIA_SCREEN_CAPTURE_DATATYPE_0001
        * @tc.name      : Test OH_AVScreenCapture_Init
        * @tc.desc      :
        * @tc.size      :
        * @tc.type      : Functional
        * @tc.level     : FWK Layer
    */
    it('SUB_MULTIMEDIA_SCREEN_CAPTURE_DATATYPE_0001', 0, async (done: Function) => {
      let a = myScreenCaptureNdk.initDataTypeErr_01() as number;
      console.info(Tag + "SUB_MULTIMEDIA_SCREEN_CAPTURE_DATATYPE_0001-------------initDataTypeErr_01:" + a);
      expect(a).assertEqual(2);
      done();
    });
    /* *
        * @tc.number    : SUB_MULTIMEDIA_SCREEN_CAPTURE_DATATYPE_0002
        * @tc.name      : Test OH_AVScreenCapture_Init
        * @tc.desc      :
        * @tc.size      :
        * @tc.type      : Functional
        * @tc.level     : FWK Layer
    */
    it('SUB_MULTIMEDIA_SCREEN_CAPTURE_DATATYPE_0002', 0, async (done: Function) => {
      let a = myScreenCaptureNdk.initDataTypeErr_02() as number;
      console.info(Tag + "SUB_MULTIMEDIA_SCREEN_CAPTURE_DATATYPE_0002-------------initDataTypeErr_02:" + a);
      expect(a).assertEqual(2);
      done();
    });
    /* *
        * @tc.number    : SUB_MULTIMEDIA_SCREEN_CAPTURE_DATATYPE_0003
        * @tc.name      : Test OH_AVScreenCapture_Init
        * @tc.desc      :
        * @tc.size      :
        * @tc.type      : Functional
        * @tc.level     : FWK Layer
    */
    it('SUB_MULTIMEDIA_SCREEN_CAPTURE_DATATYPE_0003', 0, async (done: Function) => {
      let a = myScreenCaptureNdk.initDataTypeErr_03() as number;
      console.info(Tag + "SUB_MULTIMEDIA_SCREEN_CAPTURE_DATATYPE_0003-------------initDataTypeErr_03:" + a);
      expect(a).assertEqual(2);
      done();
    });
    /* *
        * @tc.number    : SUB_MULTIMEDIA_SCREEN_CAPTURE_AUDIOSAMPLERATE_0001
        * @tc.name      : Test OH_AVScreenCapture_Init, OH_AVScreenCapture_StartScreenCapture, OH_AVScreenCapture_StopScreenCapture
        * @tc.desc      :
        * @tc.size      :
        * @tc.type      : Functional
        * @tc.level     : FWK Layer
    */
    it('SUB_MULTIMEDIA_SCREEN_CAPTURE_AUDIOSAMPLERATE_0001', 0, async (done: Function) => {
      let a = myScreenCaptureNdk.captureChangeAudioSample_01() as number;
      console.info(Tag + "SUB_MULTIMEDIA_SCREEN_CAPTURE_AUDIOSAMPLERATE_0001-------------captureChangeAudioSample_01:" + a);
      expect(a).assertEqual(0);
      done();
    });
    /* *
        * @tc.number    : SUB_MULTIMEDIA_SCREEN_CAPTURE_AUDIOSAMPLERATE_0002
        * @tc.name      : Test OH_AVScreenCapture_Init, OH_AVScreenCapture_StartScreenCapture, OH_AVScreenCapture_StopScreenCapture
        * @tc.desc      :
        * @tc.size      :
        * @tc.type      : Functional
        * @tc.level     : FWK Layer
    */
    it('SUB_MULTIMEDIA_SCREEN_CAPTURE_AUDIOSAMPLERATE_0002', 0, async (done: Function) => {
      let a = myScreenCaptureNdk.captureChangeAudioSample_02() as number;
      console.info(Tag + "SUB_MULTIMEDIA_SCREEN_CAPTURE_AUDIOSAMPLERATE_0002-------------captureChangeAudioSample_02:" + a);
      expect(a).assertEqual(0);
      done();
    });
    /* *
        * @tc.number    : SUB_MULTIMEDIA_SCREEN_CAPTURE_AUDIOCHANNELS_0001
        * @tc.name      : Test OH_AVScreenCapture_Init, OH_AVScreenCapture_StartScreenCapture, OH_AVScreenCapture_StopScreenCapture
        * @tc.desc      :
        * @tc.size      :
        * @tc.type      : Functional
        * @tc.level     : FWK Layer
    */
    it('SUB_MULTIMEDIA_SCREEN_CAPTURE_AUDIOCHANNELS_0001', 0, async (done: Function) => {
      let a = myScreenCaptureNdk.captureChangeAudioChannels_01() as number;
      console.info(Tag + "SUB_MULTIMEDIA_SCREEN_CAPTURE_AUDIOCHANNELS_0001-------------captureChangeAudioChannels_01:" + a);
      expect(a).assertEqual(0);
      done();
    });
    /* *
        * @tc.number    : SUB_MULTIMEDIA_SCREEN_CAPTURE_AUDIOCHANNELS_0002
        * @tc.name      : Test OH_AVScreenCapture_Init, OH_AVScreenCapture_StartScreenCapture, OH_AVScreenCapture_StopScreenCapture
        * @tc.desc      :
        * @tc.size      :
        * @tc.type      : Functional
        * @tc.level     : FWK Layer
    */
    it('SUB_MULTIMEDIA_SCREEN_CAPTURE_AUDIOCHANNELS_0002', 0, async (done: Function) => {
      let a = myScreenCaptureNdk.captureChangeAudioChannels_02() as number;
      console.info(Tag + "SUB_MULTIMEDIA_SCREEN_CAPTURE_AUDIOCHANNELS_0002-------------captureChangeAudioChannels_02:" + a);
      expect(a).assertEqual(0);
      done();
    });
    /* *
        * @tc.number    : SUB_MULTIMEDIA_SCREEN_CAPTURE_AUDIOCHANNELS_0003
        * @tc.name      : Test OH_AVScreenCapture_Init, OH_AVScreenCapture_StartScreenCapture, OH_AVScreenCapture_StopScreenCapture
        * @tc.desc      :
        * @tc.size      :
        * @tc.type      : Functional
        * @tc.level     : FWK Layer
    */
    it('SUB_MULTIMEDIA_SCREEN_CAPTURE_AUDIOCHANNELS_0003', 0, async (done: Function) => {
      let a = myScreenCaptureNdk.captureChangeAudioChannels_03() as number;
      console.info(Tag + "SUB_MULTIMEDIA_SCREEN_CAPTURE_AUDIOCHANNELS_0003-------------captureChangeAudioChannels_03:" + a);
      expect(a).assertEqual(0);
      done();
    });
    /* *
        * @tc.number    : SUB_MULTIMEDIA_SCREEN_CAPTURE_AUDIOCHANNELS_0004
        * @tc.name      : Test OH_AVScreenCapture_Init, OH_AVScreenCapture_StartScreenCapture, OH_AVScreenCapture_StopScreenCapture
        * @tc.desc      :
        * @tc.size      :
        * @tc.type      : Functional
        * @tc.level     : FWK Layer
    */
    it('SUB_MULTIMEDIA_SCREEN_CAPTURE_AUDIOCHANNELS_0004', 0, async (done: Function) => {
      let a = myScreenCaptureNdk.captureChangeAudioChannels_04() as number;
      console.info(Tag + "SUB_MULTIMEDIA_SCREEN_CAPTURE_AUDIOCHANNELS_0004-------------captureChangeAudioChannels_04:" + a);
      expect(a).assertEqual(0);
      done();
    });
    /* *
        * @tc.number    : SUB_MULTIMEDIA_SCREEN_CAPTURE_VIDEOSIZE_0001
        * @tc.name      : Test OH_AVScreenCapture_Init, OH_AVScreenCapture_StartScreenCapture, OH_AVScreenCapture_StopScreenCapture
        * @tc.desc      :
        * @tc.size      :
        * @tc.type      : Functional
        * @tc.level     : FWK Layer
    */
    it('SUB_MULTIMEDIA_SCREEN_CAPTURE_VIDEOSIZE_0001', 0, async (done: Function) => {
      let a = myScreenCaptureNdk.captureChangeVideoSize_01() as number;
      console.info(Tag + "SUB_MULTIMEDIA_SCREEN_CAPTURE_VIDEOSIZE_0001-------------captureChangeVideoSize_01:" + a);
      expect(a).assertEqual(0);
      done();
    });
    /* *
        * @tc.number    : SUB_MULTIMEDIA_SCREEN_CAPTURE_VIDEOSIZE_0002
        * @tc.name      : Test OH_AVScreenCapture_Init, OH_AVScreenCapture_StartScreenCapture, OH_AVScreenCapture_StopScreenCapture
        * @tc.desc      :
        * @tc.size      :
        * @tc.type      : Functional
        * @tc.level     : FWK Layer
    */
    it('SUB_MULTIMEDIA_SCREEN_CAPTURE_VIDEOSIZE_0002', 0, async (done: Function) => {
      let a = myScreenCaptureNdk.captureChangeVideoSize_02()as number;
      console.info(Tag + "SUB_MULTIMEDIA_SCREEN_CAPTURE_VIDEOSIZE_0002-------------captureChangeVideoSize_02:" + a);
      expect(a).assertEqual(0);
      done();
    });
    /* *
        * @tc.number    : SUB_MULTIMEDIA_SCREEN_CAPTURE_VIDEOSIZE_0003
        * @tc.name      : Test OH_AVScreenCapture_Init, OH_AVScreenCapture_StartScreenCapture, OH_AVScreenCapture_StopScreenCapture
        * @tc.desc      :
        * @tc.size      :
        * @tc.type      : Functional
        * @tc.level     : FWK Layer
    */
    it('SUB_MULTIMEDIA_SCREEN_CAPTURE_VIDEOSIZE_0003', 0, async (done: Function) => {
      let a = myScreenCaptureNdk.captureChangeVideoSize_03() as number;
      console.info(Tag + "SUB_MULTIMEDIA_SCREEN_CAPTURE_VIDEOSIZE_0003-------------captureChangeVideoSize_03:" + a);
      expect(a).assertEqual(0);
      done();
    });
    /* *
        * @tc.number    : SUB_MULTIMEDIA_SCREEN_CAPTURE_FROM_DISPLAY
        * @tc.name      : Test OH_AVScreenCapture_Init, OH_AVScreenCapture_StartScreenCapture, OH_AVScreenCapture_StopScreenCapture
        * @tc.desc      :
        * @tc.size      :
        * @tc.type      : Functional
        * @tc.level     : FWK Layer
    */
    it('SUB_MULTIMEDIA_SCREEN_CAPTURE_FROM_DISPLAY', 0, async (done: Function) => {
      const dftDisplay = display.getDefaultDisplaySync();
      let width = dftDisplay.width;
      let height = dftDisplay.height;
      let frameRate = dftDisplay.refreshRate;
      let a = myScreenCaptureNdk.screenCaptureFromDisplay(width, height, frameRate) as number;
      console.info(Tag + "SUB_MULTIMEDIA_SCREEN_CAPTURE_FROM_DISPLAY-------------screenCaptureFromDisplay:" + a);
      expect(a).assertEqual(0);
      done();
    });
    /* *
        * @tc.number    : SUB_MULTIMEDIA_SCREEN_CAPTURE_BUFFERTEST_0001
        * @tc.name      : Test OH_AVScreenCapture_SetCallback, OH_AVScreenCapture_AcquireVideoBuffer, OH_AVScreenCapture_AcquireVideoBuffer
        * @tc.desc      :
        * @tc.size      :
        * @tc.type      : Functional
        * @tc.level     : FWK Layer
    */
    it('SUB_MULTIMEDIA_SCREEN_CAPTURE_BUFFERTEST_0001', 0, async (done: Function) => {
      let a = myScreenCaptureNdk.setCallbackToAcquireBuffer_01() as number;
      console.info(Tag + "SUB_MULTIMEDIA_SCREEN_CAPTURE_BUFFERTEST_0001-------------setCallbackToAcquireBuffer_01:" + a);
      expect(a).assertEqual(0);
      done();
    });
    /* *
        * @tc.number    : SUB_MULTIMEDIA_SCREEN_CAPTURE_BUFFERTEST_0002
        * @tc.name      : Test OH_AVScreenCapture_SetCallback, OH_AVScreenCapture_AcquireVideoBuffer, OH_AVScreenCapture_AcquireVideoBuffer, OH_AVScreenCapture_ReleaseAudioBuffer, OH_AVScreenCapture_ReleaseVideoBuffer
        * @tc.desc      :
        * @tc.size      :
        * @tc.type      : Functional
        * @tc.level     : FWK Layer
    */
    it('SUB_MULTIMEDIA_SCREEN_CAPTURE_BUFFERTEST_0002', 0, async (done: Function) => {
      let a = myScreenCaptureNdk.setCallbackToAcquireBuffer_02() as number;
      console.info(Tag + "SUB_MULTIMEDIA_SCREEN_CAPTURE_BUFFERTEST_0002-------------setCallbackToAcquireBuffer_02:" + a);
      expect(a).assertEqual(0);
      done();
    });
    /* *
        * @tc.number    : SUB_MULTIMEDIA_SCREEN_CAPTURE_BUFFERTEST_0003
        * @tc.name      : Test OH_AVScreenCapture_SetCallback, OH_AVScreenCapture_AcquireVideoBuffer, OH_AVScreenCapture_AcquireVideoBuffer
        * @tc.desc      :
        * @tc.size      :
        * @tc.type      : Functional
        * @tc.level     : FWK Layer
    */
    it('SUB_MULTIMEDIA_SCREEN_CAPTURE_BUFFERTEST_0003', 0, async (done: Function) => {
      let a = myScreenCaptureNdk.setCallbackToAcquireBuffer_03() as number;
      console.info(Tag + "SUB_MULTIMEDIA_SCREEN_CAPTURE_BUFFERTEST_0003-------------setCallbackToAcquireBuffer_03:" + a);
      expect(a).assertEqual(0);
      done();
    });
    /* *
        * @tc.number    : SUB_MULTIMEDIA_SCREEN_CAPTURE_MICTEST_0001
        * @tc.name      : Test OH_AVScreenCapture_SetMicrophoneEnabled
        * @tc.desc      :
        * @tc.size      :
        * @tc.type      : Functional
        * @tc.level     : FWK Layer
    */
    it('SUB_MULTIMEDIA_SCREEN_CAPTURE_MICTEST_0001', 0, async (done: Function) => {
      let a = myScreenCaptureNdk.setMicrophoneOpenCloseOpen() as number;
      console.info(Tag + "SUB_MULTIMEDIA_SCREEN_CAPTURE_MICTEST_0001-------------setMicrophoneOpenCloseOpen:" + a);
      expect(a).assertEqual(0);
      done();
    });
    /* *
        * @tc.number    : SUB_MULTIMEDIA_SCREEN_CAPTURE_MICTEST_0002
        * @tc.name      : Test OH_AVScreenCapture_SetMicrophoneEnabled
        * @tc.desc      :
        * @tc.size      :
        * @tc.type      : Functional
        * @tc.level     : FWK Layer
    */
    it('SUB_MULTIMEDIA_SCREEN_CAPTURE_MICTEST_0002', 0, async (done: Function) => {
      let a = myScreenCaptureNdk.setMicrophoneCloseOpenClose() as number;
      console.info(Tag + "SUB_MULTIMEDIA_SCREEN_CAPTURE_MICTEST_0002-------------setMicrophoneCloseOpenClose:" + a);
      expect(a).assertEqual(0);
      done();
    });
    /* *
        * @tc.number    : SUB_MULTIMEDIA_SCREEN_CAPTURE_CONFIG_COMBINATION_0001
        * @tc.name      : Test VideoSize and CaptureMode combination
        * @tc.desc      :
        * @tc.size      :
        * @tc.type      : Functional
        * @tc.level     : FWK Layer
    */
    it('SUB_MULTIMEDIA_SCREEN_CAPTURE_CONFIG_COMBINATION_0001', 0, async (done: Function) => {
      let a = myScreenCaptureNdk.configCombination_01() as number;
      console.info(Tag + "SUB_MULTIMEDIA_SCREEN_CAPTURE_CONFIG_COMBINATION_0001-------------configCombination_01:" + a);
      expect(a).assertEqual(0);
      done();
    });
    /* *
        * @tc.number    : SUB_MULTIMEDIA_SCREEN_CAPTURE_CONFIG_COMBINATION_0002
        * @tc.name      : Test VideoSize and CaptureMode combination
        * @tc.desc      :
        * @tc.size      :
        * @tc.type      : Functional
        * @tc.level     : FWK Layer
    */
    it('SUB_MULTIMEDIA_SCREEN_CAPTURE_CONFIG_COMBINATION_0002', 0, async (done: Function) => {
      let a = myScreenCaptureNdk.configCombination_02() as number;
      console.info(Tag + "SUB_MULTIMEDIA_SCREEN_CAPTURE_CONFIG_COMBINATION_0002-------------configCombination_02:" + a);
      expect(a).assertEqual(0);
      done();
    });
    /* *
        * @tc.number    : SUB_MULTIMEDIA_SCREEN_CAPTURE_CONFIG_COMBINATION_0003
        * @tc.name      : Test VideoSize and CaptureMode combination
        * @tc.desc      :
        * @tc.size      :
        * @tc.type      : Functional
        * @tc.level     : FWK Layer
    */
    it('SUB_MULTIMEDIA_SCREEN_CAPTURE_CONFIG_COMBINATION_0003', 0, async (done: Function) => {
      let a = myScreenCaptureNdk.configCombination_03() as number;
      console.info(Tag + "SUB_MULTIMEDIA_SCREEN_CAPTURE_CONFIG_COMBINATION_0003-------------configCombination_03:" + a);
      expect(a).assertEqual(0);
      done();
    });
    /* *
        * @tc.number    : SUB_MULTIMEDIA_SCREEN_CAPTURE_CONFIG_COMBINATION_0004
        * @tc.name      : Test VideoSize and CaptureMode combination
        * @tc.desc      :
        * @tc.size      :
        * @tc.type      : Functional
        * @tc.level     : FWK Layer
    */
    it('SUB_MULTIMEDIA_SCREEN_CAPTURE_CONFIG_COMBINATION_0004', 0, async (done: Function) => {
      let a = myScreenCaptureNdk.configCombination_04() as number;
      console.info(Tag + "SUB_MULTIMEDIA_SCREEN_CAPTURE_CONFIG_COMBINATION_0004-------------configCombination_04:" + a);
      expect(a).assertEqual(0);
      done();
    });
    /* *
        * @tc.number    : SUB_MULTIMEDIA_SCREEN_CAPTURE_MULTI_INSTANCE
        * @tc.name      : Test Multi Instance
        * @tc.desc      :
        * @tc.size      :
        * @tc.type      : Functional
        * @tc.level     : FWK Layer
    */
    it('SUB_MULTIMEDIA_SCREEN_CAPTURE_MULTI_INSTANCE', 0, async (done: Function) => {
      let a = myScreenCaptureNdk.multiInstance() as number;
      console.info(Tag + "SUB_MULTIMEDIA_SCREEN_CAPTURE_MULTI_INSTANCE-------------multiInstance:" + a);
      expect(a).assertEqual(0);
      done();
    });
    /* *
        * @tc.number    : SUB_MULTIMEDIA_SCREEN_CAPTURE_INNER_AUDIO
        * @tc.name      : Test Multi Instance
        * @tc.desc      :
        * @tc.size      :
        * @tc.type      : Functional
        * @tc.level     : FWK Layer
    */
    it('SUB_MULTIMEDIA_SCREEN_CAPTURE_INNER_AUDIO', 0, async (done: Function) => {
      let a = myScreenCaptureNdk.innerAudioAndMicAudio() as number;
      console.info(Tag + "SUB_MULTIMEDIA_SCREEN_CAPTURE_INNER_AUDIO-------------innerAudioAndMicAudio:" + a);
      expect(a).assertEqual(0);
      done();
    });
  })
}
