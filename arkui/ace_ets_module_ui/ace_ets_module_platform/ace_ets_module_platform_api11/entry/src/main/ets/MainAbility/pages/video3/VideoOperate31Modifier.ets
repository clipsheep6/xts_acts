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
import { VideoModifier2 } from './VideoOperate30Modifier';

/**
 * 设置同一个modifier给两个Video组件
 * SUB_ACE_UI_COMPONENT_MEDIA_MODIFIER_0330
 */
@Entry
@Component
struct VideoOperate31Modifier {
  // Video构造入参
  @State videoSrc: Resource = $r('app.media.sucai1Media');
  @State previewUri: Resource = $r('app.media.img1');
  myVideoController: VideoController = new VideoController();
  @State modifier: VideoModifier2 = new VideoModifier2(true, false);
  @State startFlag: boolean = false;
  @State startFlag2: boolean = false;

  build() {
    Column({ space: 2 }) {
      Text('用例31设置同一个modifier给两个Video组件')
        .id("Text_VideoOperateVideo_title")
        .backgroundColor(Color.Pink)
        .fontSize(18)
        .textAlign(TextAlign.Center)
      Text(`video1_startFlag_${this.startFlag}`)
        .id("Text_VideoOperateVideo1_statue")
        .backgroundColor(Color.Pink)
        .fontSize(18)
        .textAlign(TextAlign.Center)
      Text(`video2_startFlag_${this.startFlag2}`)
        .id("Text_VideoOperateVideo2_statue")
        .backgroundColor(Color.Pink)
        .fontSize(18)
        .textAlign(TextAlign.Center)
      Text(`videoAll_autoPlayFlag_mutedFlag_${this.modifier.autoPlayFlag}_${this.modifier.muted}`)
        .id("Text_VideoOperateVideo_muted")
        .backgroundColor(Color.Pink)
        .fontSize(18)
        .textAlign(TextAlign.Center)
      Row({ space: 2 }) {
        Video({
          src: this.videoSrc,
          previewUri: this.previewUri,
          controller: this.myVideoController
        })
          .id('VideoOperateVideo1')
          .objectFit(ImageFit.Contain)
          .autoPlay(true)
          .muted(true)
          .attributeModifier(this.modifier)
          .onStart(() => {
            this.startFlag = true;
          })
          .width('45%')

        Video({
          src: this.videoSrc,
          previewUri: this.previewUri,
          controller: this.myVideoController
        })
          .id('VideoOperateVideo2')
          .objectFit(ImageFit.Contain)
          .autoPlay(false)
          .muted(false)
          .attributeModifier(this.modifier)
          .onStart(() => {
            this.startFlag2 = true;
          })
          .width('45%')
      }
      .height('80%')
      .backgroundColor(Color.Pink)
    }
  }
}
