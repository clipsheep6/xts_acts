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
struct VideoCreateComponent003{
  @State videoSrc: Resource = $rawfile('video.mp4')
  @State curRate: PlaybackSpeed = PlaybackSpeed.Speed_Forward_1_00_X
  @State isAutoPlay: boolean = false
  @State showControls: boolean = true
  @State result:number=0
  controller: VideoController = new VideoController()

  build() {
    Column() {
      Video({
        src: this.videoSrc,
        currentProgressRate: this.curRate,
        controller: this.controller
      }).width(800).height(600)
        .autoPlay(this.isAutoPlay)
        .controls(this.showControls)
        .onStart(() => {
          console.info('onStart')
        })
        .onPause(() => {
          console.info('onPause')
        })
        .onFinish(() => {
          console.info('onFinish')
        })
        .onSeeking((e) => {
          console.info('onSeeking is ' + e.time)
        })
        .onSeeked((e) => {
          console.info('onSeeked is ' + e.time)
        })
        .onUpdate((e) => {
          console.info('onUpdate is ' + e.time)
        })
        .onStop(()=>{
          console.info('onStop')
          this.result+=1
        })
      Row() {
        Button('start').onClick(() => {
          this.controller.start()
        }).margin(5) 
        .id('button_06')
        Button('pause').onClick(() => {
          this.controller.pause()
        }).margin(5)
        Button('stop').onClick(() => {
          this.controller.stop()
        })
        .margin(5)
        .id('button_07')
        Button('setTime').onClick(() => {
          this.controller.setCurrentTime(10, SeekMode.Accurate)
        }).margin(5)
      }

      Row() {
        Text('回调次数为：'+this.result)
          .id('VideoInterface001_003')
      }
    }
  }
}
