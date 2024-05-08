/**
 * Copyright (c) 2022 Shenzhen Kaihong Digital Industry Development Co., Ltd.
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

import Log from '../common/Log.ets';
import Utils from '../common/Utils.ets';
import events_emitter from '@ohos.events.emitter';

const TAG = 'ets_apiLack_add';

@Entry
@Component
struct RefreshDrag {
  dragRefresh() {
    var rect = Utils.getComponentRect("Refresh")
    Utils.drag(rect["left"], rect["top"], rect["right"], rect["bottom"], 20)
  }

  aboutToAppear() {
    Log.showInfo(TAG, `aboutToAppear RefreshDrag start`)
  }

  aboutToDisappear(){
    Log.showInfo(TAG, `aboutToDisAppear RefreshDrag end`)
  }

  @State isRefreshing: boolean = false
  @State counter: number = 0

  build(){
    Flex({ direction: FlexDirection.Column, alignItems: ItemAlign.Center, justifyContent: FlexAlign.Center }){

      Text("refresh-Drag")
        .width(100)
        .height(70)
        .fontSize(20)
        .opacity(1)
        .align(Alignment.TopStart)
        .fontColor(0xCCCCCC)
        .lineHeight(25)
        .border({ width: 1 })
        .padding(10)
        .textAlign(TextAlign.Center)
        .textOverflow({ overflow: TextOverflow.None })
        .key("DragText")

      Text("refresh-Refresh")
        .width(100)
        .height(70)
        .fontSize(20)
        .opacity(1)
        .align(Alignment.TopStart)
        .fontColor(0xCCCCCC)
        .lineHeight(25)
        .border({ width: 1 })
        .padding(10)
        .textAlign(TextAlign.Center)
        .textOverflow({ overflow: TextOverflow.None })
        .key("RefreshText")


      Refresh({ refreshing: this.isRefreshing, offset: 120, friction: 100 }) {

        Text('Pull Down and refresh: ' + this.counter)
          .fontSize(30)
          .margin(10)
      }
        .refreshOffset(2)
        .pullToRefresh(true)
        .key("Refresh")
        .onClick(() => {
          this.dragRefresh()
        })
    }.width("100%").height("100%")
  }
}

