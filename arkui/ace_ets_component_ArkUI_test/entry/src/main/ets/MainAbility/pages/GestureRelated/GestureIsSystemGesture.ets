/**
 * Copyright (c) 2023 Huawei Device Co., Ltd.
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
import promptAction from '@ohos.promptAction';

@Entry
@Component
struct GestureIsSystemGesture {
  scroller: Scroller = new Scroller()

  build() {
    Scroll(this.scroller) {
      Column({ space: 8 }) {
        Text('GestureIsSystemGesture').width(100).height(40).backgroundColor(Color.Pink).id("GestureIsSystemGesture")
        Stack({ alignContent: Alignment.Center }) {
          Column() {
            // 模拟上半区和下半区
            Stack().width('200vp').height('100vp').backgroundColor(Color.Red)
            Stack().width('200vp').height('100vp').backgroundColor(Color.Blue)
          }.width('200vp').height('200vp')
          // Stack的下半区是绑定了拖动手势的图像区域。
          Image($r('sys.media.ohos_app_icon'))
            .onDragStart(()=>{
              promptAction.showToast({ message: "Drag 下半区蓝色区域，Image响应" })
            })
            .width('200vp').height('200vp')
          // Stack的上半区是绑定了长按手势的浮动区域。
          Stack() {
          }
          .width('200vp')
          .height('200vp')
          .hitTestBehavior(HitTestMode.Transparent)
          .onGestureJudgeBegin((gestureInfo: GestureInfo, event: BaseGestureEvent) => {
            // 确定tag标志是否有值
            if (gestureInfo.tag) {
              console.log("gestureInfo tag" + gestureInfo.tag.toString())
            }
            console.log("gestureInfo Type " + gestureInfo.type.toString() + " isSystemGesture " + gestureInfo.isSystemGesture);
            console.log("pressure " + event.pressure + " fingerList.length " + event.fingerList.length
            + " timeStamp " + event.timestamp + " sourceType " + event.source.toString() + " titleX " + event.tiltX + " titleY " + event.tiltY + " sourcePool " + event.sourceTool.toString());
            // 如果是长按类型手势，判断点击的位置是否在上半区
            if (gestureInfo.type == GestureControl.GestureType.LONG_PRESS_GESTURE) {
              if (event.fingerList.length > 0 && event.fingerList[0].localY < 100) {
                return GestureJudgeResult.CONTINUE
              } else {
                return GestureJudgeResult.REJECT
              }
            }
            return GestureJudgeResult.CONTINUE
          })
          .gesture(GestureGroup(GestureMode.Parallel,
          LongPressGesture()
            .onAction((event: GestureEvent) => {
              promptAction.showToast({ message: "LongPressGesture 长按上半区 红色区域，红色区域响应" })
            })
            .tag("tap111")
          ))

        }.width('100%')
      }.width('100%')
    }
  }
}