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
 * 设置modifier的autoPlay为true，下次设置muted为true
 * SUB_ACE_UI_COMPONENT_MEDIA_MODIFIER_0280
 */
@Entry
@Component
struct VideoOperate30Modifier {
  // Video构造入参
  @State videoSrc: Resource = $r('app.media.sucai1Media');
  @State previewUri: Resource = $r('app.media.img1');
  myVideoController: VideoController = new VideoController();
  @State modifier: VideoModifier2 = new VideoModifier2(true, false);
  @State startFlag: boolean = false;

  build() {
    Column({ space: 2 }) {
      Text('用例28导入VideoModifier，封装autoPlay属性')
        .id("Text_VideoOperateVideo_title")
        .backgroundColor(Color.Pink)
        .fontSize(18)
        .textAlign(TextAlign.Center)
      Text(`video_autoPlayFlag_startFlag_${this.modifier.autoPlayFlag}_${this.startFlag}`)
        .id("Text_VideoOperateVideo_statue")
        .backgroundColor(Color.Pink)
        .fontSize(18)
        .textAlign(TextAlign.Center)
      Text(`video_muted_${this.modifier.muted}`)
        .id("Text_VideoOperateVideo_muted")
        .backgroundColor(Color.Pink)
        .fontSize(18)
        .textAlign(TextAlign.Center)
      Row() {
        Video({
          src: this.videoSrc,
          previewUri: this.previewUri,
          controller: this.myVideoController
        })
          .id('VideoOperateVideo')
          .objectFit(ImageFit.Contain)
          .autoPlay(false)
          .muted(true)
          .attributeModifier(this.modifier)
          .onStart(() => {
            this.startFlag = true;
          })
      }
      .height('80%')
      .backgroundColor(Color.Pink)

      Row() {
        Button("静音")
          .id("Button_mutedSet")
          .onClick(() => {
            this.modifier.muted = true;
          });
      }
    }
  }
}

/**
 * 导入VideoModifier，封装autoPlay和muted属性
 */
export class VideoModifier2 implements AttributeModifier<VideoAttribute> {
  autoPlayFlag: boolean;
  muted: boolean;

  constructor(autoPlayFlag: boolean, muted: boolean) {
    this.autoPlayFlag = autoPlayFlag;
    this.muted = muted;
  }

  applyNormalAttribute(instance: VideoAttribute): void {
    instance.autoPlay(this.autoPlayFlag).muted(this.muted)
  }
}