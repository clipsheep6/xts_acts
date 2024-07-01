
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

class RowJustifyContentModifier implements AttributeModifier<RowAttribute> {
  rowjustifyContent: FlexAlign = FlexAlign.Start;
  applyNormalAttribute(instance: RowAttribute): void {
    instance.justifyContent(this.rowjustifyContent)     
  }
}

@Entry
@Component
struct RowJustifyContent {

  @State rowjustifyContent: FlexAlign = FlexAlign.Start;
  @State rowJustifyContentModifier: RowJustifyContentModifier = new RowJustifyContentModifier();

  private stateChangCallBack = (eventData: events_emitter.EventData) => {
    if (eventData != null) {
      console.info("[JustifyContent page] state change called: " + JSON.stringify(eventData));

      if (eventData.data!.justifyContent != null) {         
        console.info("[JustifyContent page] JustifyContent change data is " + JSON.stringify(eventData.data!.justifyContent));
        this.rowjustifyContent = eventData.data!.justifyContent;
        this.rowJustifyContentModifier.rowjustifyContent = eventData.data!.justifyContent;
      }
    }
  }


  onPageShow() {

    let stateChangeEvent01: events_emitter.InnerEvent = {
      eventId: 211,
      priority: events_emitter.EventPriority.LOW
    }
    events_emitter.on(stateChangeEvent01, this.stateChangCallBack);


    let stateChangeEvent02: events_emitter.InnerEvent = {
      eventId: 212,
      priority: events_emitter.EventPriority.LOW
    }
    events_emitter.on(stateChangeEvent02, this.stateChangCallBack);

    let stateChangeEvent03: events_emitter.InnerEvent = {
      eventId: 213,
      priority: events_emitter.EventPriority.LOW
    }
    events_emitter.on(stateChangeEvent03, this.stateChangCallBack);

    let stateChangeEvent04: events_emitter.InnerEvent = {
      eventId: 214,
      priority: events_emitter.EventPriority.LOW
    }
    events_emitter.on(stateChangeEvent04, this.stateChangCallBack);

    let stateChangeEvent05: events_emitter.InnerEvent = {
      eventId: 215,
      priority: events_emitter.EventPriority.LOW
    }
    events_emitter.on(stateChangeEvent05, this.stateChangCallBack);

    let stateChangeEvent06: events_emitter.InnerEvent = {
      eventId: 216,
      priority: events_emitter.EventPriority.LOW
    }
    events_emitter.on(stateChangeEvent06, this.stateChangCallBack);

  }

  build() {
    Column() {
      Text('Row_FlexAlign').fontSize(9).fontColor(0xCCCCCC).width('90%')
      Row({ space:10 }) {
        Text('1').width(100).height(50).backgroundColor(0xAFEEEE).key('Text1')
        Text('2').width(100).height(100).backgroundColor(0x00FFFF).key('Text2')
        Text('3').width(100).height(150).backgroundColor(0xAFEEEE).key('Text3')
      }
      .key('key_row_JustifyContent')     
      .attributeModifier(this.rowJustifyContentModifier)  
      .width(350)
      .height(200)
      .backgroundColor(0xB05F77)   
    }
    .width('100%')
  }
}
