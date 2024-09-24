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

import camera from '@ohos.multimedia.camera';
import media from '@ohos.multimedia.media';
import fs from '@ohos.file.fs';

let mXCompomentController: XComponentController = new XComponentController();

export let surfaceIds: ESObject;

export let videoSurfaceId: ESObject;

let surfaceId: string;
let fileAsset: string;
let fdNumber: number;
let fdPath: string;
let fdObject: ESObject;
let TAG = 'Index'

let avRecorderProfile: media.AVRecorderProfile = {
  audioBitrate: 48000,
  audioChannels: 2,
  audioCodec: media.CodecMimeType.AUDIO_AAC,
  audioSampleRate: 48000,
  fileFormat: media.ContainerFormatType.CFT_MPEG_4,
  videoBitrate: 2000000,
  videoCodec: media.CodecMimeType.VIDEO_AVC,
  videoFrameWidth: 640,
  videoFrameHeight: 480,
  videoFrameRate: 30
}

let avRecorderConfig: media.AVRecorderConfig = {
  audioSourceType: media.AudioSourceType.AUDIO_SOURCE_TYPE_MIC,
  videoSourceType: media.VideoSourceType.VIDEO_SOURCE_TYPE_SURFACE_YUV,
  profile: avRecorderProfile,
  url: 'fd://', // 文件需先由调用者创建，赋予读写权限，将文件fd传给此参数，eg.fd://45
  rotation: 0, // 合理值0、90、180、270，非合理值prepare接口将报错
  location: { latitude: 30, longitude: 130 }
}

// 获取file.fd参数为文件名
let createMaps = async (pathName: string) => {
  try {
    let fileDir: ESObject = await AppStorage.get('pathDir');
    pathName = fileDir + '/' + pathName;
    let file: ESObject = fs.openSync(pathName, fs.OpenMode.READ_WRITE | fs.OpenMode.CREATE);
    fileAsset = file;
    fdNumber = file.fd;
    fdPath = "fd://" + fdNumber.toString();
    console.log(`${TAG} getSurfaceId start -1 ${JSON.stringify(fdPath)}`);
  } catch (err) {
    console.log(`createMaps err ${JSON.stringify(err)}`);
  }
}

// 获取surfaceId
let getSurfaceId = async () => {
  try {
    await createMaps(`${Date.now()}.mp4`);
    console.log(`${TAG} getSurfaceId start 0`);
    avRecorderConfig.url = fdPath;
    console.log(`${TAG} getSurfaceId start 1`);
    let recorder = await media.createAVRecorder();
    console.log(`${TAG} getSurfaceId start 2`);
    let errs = await recorder.prepare(avRecorderConfig);
    console.log(`${TAG} getSurfaceId start 3 ${JSON.stringify(errs)} `);
    videoSurfaceId = await recorder.getInputSurface();
    console.log(`${TAG} getSurfaceId start 4`);
  } catch (err) {
    console.log(`${TAG} getSurfaceId err ${JSON.stringify(err)}`);
  }
}

// 延时器参数是时间
function sleep(ms: ESObject = 66): Promise<string> {
  return new Promise((resolve) => {
    setTimeout(() => {
      resolve('');
    }, ms)
  })
}

@Entry
@Component
struct Index {
  @State message: string = 'Hello World';

  async aboutToAppear() {
    await sleep(5000)
    await getSurfaceId()
  }

  build() {
    Flex() {
      XComponent({
        id: '',
        type: '',
        libraryname: '',
        controller: mXCompomentController
      }).onLoad(() => {
        mXCompomentController.setXComponentSurfaceSize({ surfaceWidth: 1920, surfaceHeight: 1080 })
        surfaceIds = mXCompomentController.getXComponentSurfaceId()
      })
        .width('1920px')
        .height('1080px')
    }
  }
}