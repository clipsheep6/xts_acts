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
@Entry
@Component
struct GestureLongPressGesture {
  @State count: number = 0

  build() {
    Column() {
      Text('GestureLongPressGesture').fontSize(28).id("GestureLongPressGesture")
        // 单指长按文本触发该手势事件
        .gesture(
        LongPressGesture({ repeat: true })
          // 由于repeat设置为true，长按动作存在时会连续触发，触发间隔为duration（默认值500ms）
          .onAction((event?: GestureEvent) => {
            if (event && event.repeat) {
              this.count++
            }
          })
            // 长按动作一结束触发
          .onActionEnd(() => {
            this.count = 0
          })
        )
    }
    .height(200)
    .width(300)
    .padding(20)
    .border({ width: 3 })
    .margin(30)
  }
}