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
 * 导入VideoModifier，封装muted属性
 * SUB_ACE_UI_COMPONENT_MEDIA_MODIFIER_0260
 */

@Entry
@Component
struct VideoOperate29Modifier {
  // Video构造入参
  @State videoSrc: Resource = $r('app.media.sucai1Media');
  @State previewUri: Resource = $r('app.media.img1');
  myVideoController: VideoController = new VideoController();
  @State modifier: VideoModifierMuted = new VideoModifierMuted(false);

  build() {
    Column({ space: 2 }) {
      Text('用例29导入VideoModifier，封装muted属性')
        .id("Text_VideoOperateVideo_title")
        .backgroundColor(Color.Pink)
        .fontSize(18)
        .textAlign(TextAlign.Center)
      Text(`video_autoPlayFlag_startFlag_${this.modifier.muted}`)
        .id("Text_VideoOperateVideo_statue")
        .backgroundColor(Color.Pink)
        .fontSize(18)
        .textAlign(TextAlign.Center)
      Text(`video_mutedFlag_${this.modifier.muted}`)
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
      }
      .height('80%')
      .backgroundColor(Color.Pink)

      Row() {
        Button("mutedSetButton")
          .id("Button_mutedSet")
          .onClick(() => {
            this.modifier.muted = !this.modifier.muted
          });
      }
    }
  }
}

/**
 * 导入VideoModifier，封装muted属性
 */
export class VideoModifierMuted implements AttributeModifier<VideoAttribute> {
  muted: boolean;

  constructor(muted: boolean) {
    this.muted = muted;
  }

  applyNormalAttribute(instance: VideoAttribute): void {
    console.log("applyNormalAttribute invoked,muted:", this.muted);
    instance.muted(this.muted)
  }
}