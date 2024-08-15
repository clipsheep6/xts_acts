/**
 * Copyright (c) 2024 Shenzhen Kaihong Digital Industry Development Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
@Entry
@Component
struct VideoCreateComponent009{
  @State videoSrc: Resource = $rawfile('video.mp4')
  @State isAutoPlay: boolean = false
  @State showControls: boolean = true
  @State result:number=0
  controller: VideoController = new VideoController()

  build() {
    Column() {
      Video({
        src: this.videoSrc,
        controller: this.controller
      }).width(800).height(600)
        .autoPlay(this.isAutoPlay)
        .controls(this.showControls)
        .onStart(() => {
          console.info('onStart')
        })
        .onStop(()=>{
          console.info('onStop')
          this.result+=1
        })
      Row() {
        Button('start').onClick(() => {
          this.controller.start()
        }).margin(5)
        .id('button_10')
        Button('pause').onClick(() => {
          this.controller.pause()
        }).margin(5)
        Button('stop').onClick(() => {
          this.controller.stop()
        }).margin(5)
        .id('button_11')
        Button('settime').onClick(()=>{
          this.controller.setCurrentTime(5)
        })
        .id('button_12')
      }

      Row() {
        Text('回调次数为：'+this.result)
          .id('VideoInterface001_009')
      }
    }
  }
}
