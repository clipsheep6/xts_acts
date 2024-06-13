/**
 * Copyright (c) 2022 Huawei Device Co., Ltd.
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

/**
 * 设置objectFit属性为Auto  SUB_ACE_UI_COMPONENT_MEDIA_VIDEO_FEATURE_0670
 * 设置objectFit属性为Contain  SUB_ACE_UI_COMPONENT_MEDIA_VIDEO_FEATURE_0650
 * 设置objectFit属性为Cover  SUB_ACE_UI_COMPONENT_MEDIA_VIDEO_FEATURE_0660
 * 设置objectFit属性为Fill  SUB_ACE_UI_COMPONENT_MEDIA_VIDEO_FEATURE_0680
 * 设置objectFit属性为None  SUB_ACE_UI_COMPONENT_MEDIA_VIDEO_FEATURE_0700
 * 设置objectFit属性为ScaleDown  SUB_ACE_UI_COMPONENT_MEDIA_VIDEO_FEATURE_0690
 */
@Entry
@Component
struct VideoOperate25objectFit {
  @State videoSrc: Resource = $r('app.media.sucai1Media');
  @State previewUri: Resource = $r('app.media.img1');
  @State curRate: PlaybackSpeed = PlaybackSpeed.Speed_Forward_1_00_X
  @State isAutoPlay: boolean = false
  @State showControls: boolean = true
  @State sliderStartTime: string = '';
  @State currentTime: number = 0;
  @State durationTime: number = 0;
  @State durationStringTime: string = '';
  controller: VideoController = new VideoController()
  // 【测试的目标属性】
  @State objectFitType: ImageFit = ImageFit.Auto;

  build() {
    Row() {
      Column() {
        Video({
          src: this.videoSrc,
          previewUri: this.previewUri,
          currentProgressRate: this.curRate,
          controller: this.controller
        })
          .id('VideoOperateVideo')
          .controls(false)
          .autoPlay(true)
          .objectFit(this.objectFitType)
          .onPrepared((event) => {
            if (event) {
              this.durationTime = event.duration
            }
          })
          .onUpdate((event) => {
            if (event) {
              this.currentTime = event.time
            }
          })
        Row() {
          Text(JSON.stringify(this.currentTime) + 's')
          Slider({
            value: this.currentTime,
            min: 0,
            max: this.durationTime
          })
            .onChange((value: number, mode: SliderChangeMode) => {
              this.controller.setCurrentTime(value);
            }).width("90%")
          Text(JSON.stringify(this.durationTime) + 's')
        }
        .opacity(0.8)
        .width("100%")
      }
      .width('100%')
    }
    .height('70%')
    .backgroundColor(Color.Pink)
  }
}
