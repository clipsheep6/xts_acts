/**
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
export default class VideoInitDataModel {
  // 定义类的属性
  currentProgressRate: number | string | PlaybackSpeed;
  videoSrc: Resource | string;
  previewUri: Resource | string;
  onStartCallback: () => void;
  onFinishCallback: () => void;
  onFullscreenChangeCallback: (fullscreen: boolean, firstTime: boolean) => void;
  onUpdateCallback: (time: number) => void
  testCaseTitle: string;
  statueFirstTitle: string;
  statueSecondTitle: string;

  constructor(
    currentProgressRate: number | string | PlaybackSpeed,
    videoSrc: Resource | string,
    previewUri: Resource | string,
    onStartCallback: () => void,
    onFinishCallback: () => void,
    onFullscreenChangeCallback: (fullscreen: boolean, firstTime: boolean) => void,
    onUpdateCallback: (time: number) => void,
    testCaseTitle: string = '',
    statueFirstTitle: string = '',
    statueSecondTitle: string = ''
  ) {
    this.currentProgressRate = currentProgressRate;
    this.videoSrc = videoSrc;
    this.previewUri = previewUri;
    this.onStartCallback = onStartCallback;
    this.onFinishCallback = onFinishCallback;
    this.onFullscreenChangeCallback = onFullscreenChangeCallback;
    this.onUpdateCallback = onUpdateCallback;
    this.testCaseTitle = testCaseTitle;
    this.statueFirstTitle = statueFirstTitle;
    this.statueSecondTitle = statueSecondTitle;
  }
}