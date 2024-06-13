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

import TimeUtils from './TimeUtils';

@Component
export default struct VideoRateTestComponent {
  @Prop currentProgressRate:  number | string | PlaybackSpeed;
  @Prop curRateNumber: number;
  @Prop videoSrc: Resource;
  @Prop previewUri: Resource;
  @Prop errorValue: number;

  myVideoController: VideoController = new VideoController();
  @State startTime: number = 0;
  @State duration: number = 0;
  @State currentProgressRateActual: number = 0;
  @State isLessThanThreeTenths: boolean = false;

  build() {
    Column({ space: 2 }) {
      Text(`用例8_播放速度${this.curRateNumber}测试`)
        .id("Text_VideoOperateVideo_title")
        .backgroundColor(Color.Pink)
        .fontSize(18)
        .textAlign(TextAlign.Center)
      Text(`实际执行速度${this.currentProgressRateActual}`)
        .id("Text_VideoOperateVideo_currentProgressRateActual")
        .backgroundColor(Color.Pink)
        .fontSize(18)
        .textAlign(TextAlign.Center)
      Text(`isLessThanThreeTenths_${this.isLessThanThreeTenths}`)
        .id(`Text_VideoOperateVideo_speedTime_${this.curRateNumber}`)
        .backgroundColor(Color.Pink)
        .fontSize(18)
        .textAlign(TextAlign.Center)
      Row() {
        Video({
          src: this.videoSrc,
          previewUri: this.previewUri,
          currentProgressRate: this.currentProgressRate,
          controller: this.myVideoController
        })
          .id('VideoOperateVideo')
          .controls(true)
          .autoPlay(true)
          .objectFit(ImageFit.Contain)
          .onPrepared((event) => {
            this.duration = event.duration;
          })
          .onStart(() => {
            (async () => {
              try {
                this.startTime = await TimeUtils.getCurrentTime();
              } catch (error) {
                console.log(`Error: ${error.message}`);
              }
            })();
          })
          .onFinish(() => {
            (async (curRateNumberParam: number, errorValueParam: number) => {
              try {
                let finishTime = await TimeUtils.getCurrentTime();
                let currentProgressRateActualTemp =
                  TimeUtils.curryCalculateSpeedAdjustedProgressRate(curRateNumberParam)(this.startTime, finishTime, this.duration * 1000);
                this.currentProgressRateActual = currentProgressRateActualTemp;
                let difference = parseFloat((curRateNumberParam - currentProgressRateActualTemp).toFixed(2));
                if (difference < errorValueParam) {
                  this.isLessThanThreeTenths = true;
                }
              } catch (error) {
                console.log(`Error: ${error.message}`);
              }
            })(this.curRateNumber, this.errorValue);
          })
      }
      .backgroundColor(Color.Pink)
      .height(400)
    }
    .alignItems(HorizontalAlign.Start)
    .justifyContent(FlexAlign.Center)
    .margin({ top: 10, left: 10, right: 10 })
  }
}