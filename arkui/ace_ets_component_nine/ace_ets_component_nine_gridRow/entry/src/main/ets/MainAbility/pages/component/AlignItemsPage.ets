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

class MyGridRowAlignItemsModifier implements AttributeModifier<GridRowAttribute> {
  alignItemsValue: ItemAlign = ItemAlign.Start
  applyNormalAttribute(instance: GridRowAttribute): void {
    instance.alignItems(this.alignItemsValue)
  }
}

@Entry
@Component
struct GridRowAlignItemsExample {
  @State mod1: MyGridRowAlignItemsModifier = new MyGridRowAlignItemsModifier()
  @State alignItemsValue: ItemAlign = ItemAlign.Start
  private stateChangCallBack = (eventData) => {
    if (eventData != null) {
      console.info("gridRowAlignItems page state change called:" + JSON.stringify(eventData));
      if (eventData.data.alignItemsValue != null) {
        this.mod1.alignItemsValue = eventData.data.alignItemsValue;
        //old test
        this.alignItemsValue = eventData.data.alignItemsValue;
      }
    }
  }

  onPageShow() {
    console.info('GridRow page1 show called');
    var stateChangeEvent = {
      eventId: 181,
      priority: events_emitter.EventPriority.LOW
    }
    events_emitter.on(stateChangeEvent, this.stateChangCallBack);
    var stateChangeEvent2 = {
      eventId: 182,
      priority: events_emitter.EventPriority.LOW
    }
    events_emitter.on(stateChangeEvent2, this.stateChangCallBack);
    var stateChangeEvent3 = {
      eventId: 183,
      priority: events_emitter.EventPriority.LOW
    }
    events_emitter.on(stateChangeEvent3, this.stateChangCallBack);
  }

  build() {
    Column() {
      GridRow({
        columns: 5,
        gutter: { x: 5, y: 10 },
        breakpoints: { value: ["400vp", "600vp", "800vp"],
          reference: BreakpointsReference.WindowSize },
        direction: GridRowDirection.Row
      }) {
        GridCol({ span: { xs: 1, sm: 2, md: 3, lg: 4 }, offset: 0, order: 0 }) {
          Row().width('100%').height('20vp')
        }.borderColor(Color.Red).borderWidth(2)
        GridCol({ span: { xs: 1, sm: 2, md: 3, lg: 4 }, offset: 0, order: 0 }) {
          Row().width('100%').height('30vp')
        }.borderColor(Color.Blue).borderWidth(2)
      }.width('100%').height('100%').key('keyGridRowAlignItems')
      .attributeModifier(this.mod1)
    }.width('80%').margin({ left: 10, top: 5, bottom: 5 }).height(200)
    .border({ color: '#880606', width: 2 })
  }
}