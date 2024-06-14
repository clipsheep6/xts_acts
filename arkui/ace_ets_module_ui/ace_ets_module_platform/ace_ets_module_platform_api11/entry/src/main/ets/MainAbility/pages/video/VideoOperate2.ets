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
 * responseRegion设置左半边热区 SUB_ACE_UI_COMPONENT_MEDIA_VIDEO_FEATURE_0840
 */
@Entry
@Component
struct VideoOperate2 {
  // Video构造入参
  @State videoSrc: Resource = $r('app.media.sucai1Media')
  @State previewUri: Resource = $r('app.media.img1')
  myVideoController: VideoController = new VideoController();
  // 监控热区点击事件
  @State pauseFlag: boolean = false
  @State leftRegionFlag: boolean = false
  // 用来显示的属性
  @State finishFlag: boolean = false

  build() {
    Column({ space: 2 }) {
      Text('点击热区暂停测试')
        .id('Text_VideoOperateVideo_title')
        .backgroundColor(Color.Pink)
        .fontSize(30)
        .width('70%')
        .textAlign(TextAlign.Center)
      Text(`左半区标识&暂停标识_${this.leftRegionFlag}_${this.pauseFlag}`)
        .id('Text_VideoOperateVideo_first')
        .backgroundColor(Color.Pink)
        .fontSize(30)
        .width('70%')
        .textAlign(TextAlign.Center)
      Text(`播放结束标识_${this.finishFlag}`)
        .id('Text_VideoOperateVideo_second')
        .backgroundColor(Color.Pink)
        .fontSize(30)
        .width('70%')
        .textAlign(TextAlign.Center)
      Row() {
        Video({
          src: this.videoSrc,
          previewUri: this.previewUri,
          controller: this.myVideoController
        })
          .id('VideoOperateVideo')
          .controls(true)
          .width(200)
          .height(400)
          .onPause(() => {
            this.pauseFlag = true
          })
          .onFinish(()=>{
            this.finishFlag = true
          })
          .responseRegion({ x: 0, y: 0, width: '60%', height: '100%' })
          .onClick((event) => {
            console.log('---------------x,y:',event.x,event.y);
            if (0 <= event.x && event.x <=100) {
              this.leftRegionFlag = true;
              this.myVideoController.pause();
            }
          })
          .autoPlay(true)
      }
      .backgroundColor(Color.Pink)
      .height(500)
    }
    .alignItems(HorizontalAlign.Start)
    .justifyContent(FlexAlign.Center)
    .margin({ top: 10, left: 10 , right: 10})
  }
}
