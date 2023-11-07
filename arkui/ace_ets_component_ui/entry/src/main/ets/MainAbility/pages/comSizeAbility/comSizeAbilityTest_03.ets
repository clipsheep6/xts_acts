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
import matrix4 from '@ohos.matrix4'
let matrix = matrix4.init([1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0])
@Entry
@Component
struct comSizeAbilityTest_03 {
  build() {
    Scroll(){
      Column({ space: 20 }) {

        // Circle 组件
        Column(){
          // 宽高不一致时，短边为直径
          Circle()
            .backgroundColor('red')
            .key("Circle_Size")
            .size({ width: 310, height: 140 })
            // .offset({ x: 1, y: 1 })
            .translate({ x: 1, y: 1, z: 1 })
            .scale({ x: 1, y: 1, z: 1, centerX: 1, centerY: 1 })
            .rotate({ x: 1, y: 1, z: 1, angle: 0, centerX: 1, centerY: 1 })
            .transform(matrix)
        }

        // Column 组件
        Column(){
          Column()
            .backgroundColor('red')
            .key("Column_Size")
            .size({ width: 160, height: 100 })
            // .offset({ x: 1, y: 1 })
            .translate({ x: 1, y: 1, z: 1 })
            .scale({ x: 1, y: 1, z: 1, centerX: 1, centerY: 1 })
            .rotate({ x: 1, y: 1, z: 1, angle: 0, centerX: 1, centerY: 1 })
            .transform(matrix)
        }

        // Counter 组件
        Column(){
          Counter()
            .key("Counter_Size")
            .size({ width: 150, height: 100 })
            // .offset({ x: 1, y: 1 })
            .translate({ x: 1, y: 1, z: 1 })
            .scale({ x: 1, y: 1, z: 1, centerX: 1, centerY: 1 })
            .rotate({ x: 1, y: 1, z: 1, angle: 0, centerX: 1, centerY: 1 })
            .transform(matrix)
        }

        // Divider 组件 分隔组件
        Column(){
          Divider()
            .backgroundColor('red')
            .key("Divider_Size")
            .size({ width: 130, height: 100 })
            // .offset({ x: 1, y: 1 })
            .translate({ x: 1, y: 1, z: 1 })
            .scale({ x: 1, y: 1, z: 1, centerX: 1, centerY: 1 })
            .rotate({ x: 1, y: 1, z: 1, angle: 0, centerX: 1, centerY: 1 })
            .transform(matrix)
        }
      }.width('100%')
    }.height('100%')
  }
}