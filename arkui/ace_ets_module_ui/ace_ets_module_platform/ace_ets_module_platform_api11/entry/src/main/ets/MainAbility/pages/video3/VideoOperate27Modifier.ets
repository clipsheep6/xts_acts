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
 * modifier设置
 * SUB_ACE_UI_COMPONENT_MEDIA_MODIFIER_0010
 */
@Entry
@Component
struct VideoOperate27Modifier {
  // Video构造入参
  @State videoSrc: Resource = $r('app.media.sucai1Media');
  @State previewUri: Resource = $r('app.media.img1');
  myVideoController: VideoController = new VideoController();
  @State modifier: VideoModifier = new VideoModifier()

  build() {
    Column({ space: 2 }) {
      Text('用例27modifier设置测试')
        .id("Text_VideoOperateVideo_title")
        .backgroundColor(Color.Pink)
        .fontSize(18)
        .textAlign(TextAlign.Center)
      Text(`currentTime_${this.modifier.currentTimes}`)
        .id("Text_VideoOperateVideo_statue")
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
          .autoPlay(true)
          .controls(false)
          .attributeModifier(this.modifier)
      }
      .height('80%')
      .backgroundColor(Color.Pink)

      Row() {
        Button("FirstTime")
          .id("Button_isFirstTime")
          .onClick(() => {
            this.modifier.currentTimes = 1;
          });
        Button("SecondTime")
          .id("Button_isSecondTime")
          .onClick(() => {
            this.modifier.currentTimes = 2;
          });
      }
    }
  }
}

/**
 * 1、第一次设置modifier为muted：true、autoplay：false
 * 2、第二次设置modifier为modifier为muted：false、controls：true
 * 3、查看video显示效果  3、两次设置属性均生效，muted取false
 */
class VideoModifier implements AttributeModifier<VideoAttribute> {
  currentTimes: number = 0;

  applyNormalAttribute(instance: VideoAttribute): void {
    console.log("applyNormalAttribute invoked,currentTimes:", this.currentTimes);
    if (this.currentTimes == 1) {
      instance.muted(true).autoPlay(false)
    }
    if (this.currentTimes == 2) {
      instance.muted(false).controls(true)
    }
  }
}