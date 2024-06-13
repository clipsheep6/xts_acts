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
 * 导入VideoModifier，封装autoPlay属性
 * SUB_ACE_UI_COMPONENT_MEDIA_MODIFIER_0230
 */
@Entry
@Component
struct VideoOperate28Modifier {
  // Video构造入参
  @State videoSrc: Resource = $r('app.media.sucai1Media');
  @State previewUri: Resource = $r('app.media.img1');
  myVideoController: VideoController = new VideoController();
  @State modifier: VideoModifierAutoPlay = new VideoModifierAutoPlay(false);
  @State modifier2: VideoModifierAutoPlay = new VideoModifierAutoPlay(true);
  @State startFlag: boolean = false;
  @State startFlag2: boolean = false;

  build() {
    Column({ space: 2 }) {
      Text('用例28导入VideoModifier，封装autoPlay属性')
        .id("Text_VideoOperateVideo_title")
        .backgroundColor(Color.Pink)
        .fontSize(18)
        .textAlign(TextAlign.Center)
      Text(`video1_autoPlayFlag_startFlag_${this.modifier.autoPlayFlag}_${this.startFlag}`)
        .id("Text_VideoOperateVideo1_statue")
        .backgroundColor(Color.Pink)
        .fontSize(18)
        .textAlign(TextAlign.Center)
      Text(`video2_autoPlayFlag_startFlag_${this.modifier2.autoPlayFlag}_${this.startFlag2}`)
        .id("Text_VideoOperateVideo2_statue")
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
          .attributeModifier(this.modifier2)
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

/**
 * 导入VideoModifier，封装autoPlay属性
 */
export class VideoModifierAutoPlay implements AttributeModifier<VideoAttribute> {
  autoPlayFlag: boolean;

  constructor(autoPlayFlag: boolean) {
    this.autoPlayFlag = autoPlayFlag;
  }

  applyNormalAttribute(instance: VideoAttribute): void {
    console.log("applyNormalAttribute invoked,autoPlayFlag:", this.autoPlayFlag);
    instance.autoPlay(this.autoPlayFlag)
  }
}