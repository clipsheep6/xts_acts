// @ts-nocheck
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

import events_emitter from '@ohos.events.emitter';

@Entry
@Component
struct PieceCode {
  @State content: string = "piece";
  @State icon: string = "1";
  @State fontColor: Color = "#FF008000";
  @State iconPosition: IconPosition = IconPosition.End;
  @State fontStyle: FontStyle = FontStyle.Italic;
  @State showDelete: boolean = false
  @State onActionCalled: boolean = false

  onPageShow() {
    console.info('piece page show called');
    let stateChangeEvent: events_emitter.InnerEvent = {
      eventId: 154,
      priority: events_emitter.EventPriority.LOW
    }
    events_emitter.on(stateChangeEvent, this.stateChangCallBack);
  }

  private stateChangCallBack = (eventData: events_emitter.EventData) => {
    if (eventData != null) {
      console.info("piece page state change called:" + JSON.stringify(eventData));
      let pieceObj: ESObject = JSON.parse(eventData.data.pieceObj);
      if (pieceObj) {
        this.content = pieceObj.content;
        this.icon = pieceObj.icon;
      }
      if (eventData.data.iconPosition != null) {
        this.iconPosition = eventData.data.iconPosition;
      }
      if (eventData.data.fontStyle != null) {
        this.fontStyle = eventData.data.fontStyle;
      }
      if (eventData.data.Color != null) {
        this.Color = eventData.data.Color;
      }
      if (eventData.data.showDelete != null) {
        this.showDelete = eventData.data.showDelete;
      }
    }
  }

  build() {
    Column() {
      Piece({ content: this.content, icon: this.icon })
        .iconPosition(this.iconPosition)
        .fontColor(this.Color)
        .fontStyle(this.fontStyle)
        .showDelete(this.showDelete)
        .onClose(() => {
          console.info("Piece onClose")
          this.onActionCalled = true;
          try {
            let backData: events_emitter.EventData = {
              data: {
                "ACTION": this.onActionCalled,
              }
            }
            let backEvent: events_emitter.InnerEvent = {
              eventId: 155,
              priority: events_emitter.EventPriority.LOW
            }
            console.info("piece onClose start to emit action state")
            events_emitter.emit(backEvent, backData)
          } catch (err) {
            console.info("piece onClose emit action state err: " + JSON.stringify(err.message))
          }
        })
        .key("piece")
      Button('close')
        .margin(30)
        .key('button1')
        .onClick(() => {
          this.showDelete = true
          try {
            let backData: events_emitter.EventData = {
              data: {
                "showDelete": this.showDelete,
              }
            }
            let backEvent: events_emitter.InnerEvent = {
              eventId: 156,
              priority: events_emitter.EventPriority.LOW
            }
            console.info("close to emit action state")
            events_emitter.emit(backEvent, backData)
          } catch (err) {
            console.info("close action state err: " + JSON.stringify(err.message))
          }
        })
    }.width('100%').margin({ top: 300 })
    .height('100%')
  }
}