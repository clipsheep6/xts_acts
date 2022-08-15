// @ts-nocheck
/**
 * Copyright (c) 2021 Huawei Device Co., Ltd.
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
struct PanGestureExample {
  @State offsetX: number = 10
  @State offsetY: number = 10
  @State directionV: PanDirection = PanDirection.Vertical
  @State directionH: PanDirection = PanDirection.Horizontal
  panGesture: PanGestureOption = new PanGestureOption({direction:this.directionV, distance:10})

  build() {
    Flex({ direction: FlexDirection.Column, alignItems: ItemAlign.Center, justifyContent: FlexAlign.SpaceBetween }) {
      Text('PanGesture offset:\nX: ' + this.offsetX + '\n' + 'Y: ' + this.offsetY)
    }
    .key('panDirection').height(100).width(200).padding(20).border({ width: 1 }).margin(80)
    .translate({ x: this.offsetX, y: this.offsetY, z: 5 })
    .gesture(
    PanGesture(this.panGesture)
      .onActionStart((event: PanGestureEvent) => {
        console.info('Pan start')
      })
      .onActionUpdate((event: PanGestureEvent) => {
        this.offsetX = event.offsetX
        this.offsetY = event.offsetY
      })
      .onActionEnd(() => {
        console.info('Pan end')
        this.panGesture.setDistance(10)
        this.panGesture.setDirection(this.directionH)
        this.panGesture.setFingers(1)
      })
    )
  }
}