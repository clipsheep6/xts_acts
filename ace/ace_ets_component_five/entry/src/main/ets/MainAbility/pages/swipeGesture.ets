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

import events_emitter from '@ohos.emitter'

@Entry
@Component
struct SwipeGestureExample {
  @State rotateAngle: number = 0
  @State speed: number = 1
  @State direction: SwipeDirection = SwipeDirection.All

  build() {
    Column() {
      Text("SwipeGesture speed ： " + this.speed)
      Text("SwipeGesture angle ： " + this.rotateAngle)
    }
    .position({ x: 80, y: 200 })
    .border({ width: 2 })
    .width(260)
    .height(260)
    .rotate({ x: 0, y: 0, z: 1, angle: this.rotateAngle })
    .gesture(
    SwipeGesture({ fingers: 1, direction: this.direction })
      .onAction((event: SwipeGestureEvent) => {
        this.speed = event.speed
        this.rotateAngle = event.angle
        try {
          var backData = {
            data: {
              "direction": SwipeDirection.All,
            }
          }
          var backEvent = {
            eventId: 286,
            priority: events_emitter.EventPriority.LOW
          }
          console.info("gesture start to emit action state")
          events_emitter.emit(backEvent, backData)
        } catch (err) {
          console.info("gesture emit action state err: " + JSON.stringify(err.message))
        }
        try {
          var backDataOne = {
            data: {
              "direction": this.direction,
            }
          }
          var backEventOne = {
            eventId: 555,
            priority: events_emitter.EventPriority.LOW
          }
          console.info("gesture start to emit action state")
          events_emitter.emit(backEventOne, backDataOne)
        } catch (err) {
          console.info("gesture emit action state err: " + JSON.stringify(err.message))
        }
      })
    )
    .key('gesture')
  }

  onPageShow() {
    console.info('swipeGesture page show called');
    var stateChangeEvent = {
      eventId: 556,
      priority: events_emitter.EventPriority.LOW
    }
    events_emitter.on(stateChangeEvent, this.stateChangCallBack)
  }

  private stateChangCallBack = (eventData) => {
    if (eventData != null) {
      console.info("swipeGesture page state change called:" + JSON.stringify(eventData));
      if (eventData.data.direction != null) {
        this.direction = eventData.data.direction;
      }
    }
  }
}
