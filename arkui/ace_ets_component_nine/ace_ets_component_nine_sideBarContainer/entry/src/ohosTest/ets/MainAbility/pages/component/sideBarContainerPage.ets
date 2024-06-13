
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

interface strokeWidthObj {
  strokeWidth: number;
}

class SideBarContainerModifier implements AttributeModifier<SideBarContainerAttribute> {
  showSideBar: boolean = true;
  controlButton: ButtonStyle = {left: 16, top: 48, width: 24, height: 24}
  showControlButton: boolean = true
  sideBarWidth: number = 240
  minSideBarWidth: number = 240
  maxSideBarWidth: number = 280
  autoHide: boolean = true
  sideBarPosition: SideBarPosition = SideBarPosition.Start
  divider: null | strokeWidthObj = null
  minContentWidth: Dimension = "10px"
  lineCap: boolean = false
  applyNormalAttribute(instance: SideBarContainerAttribute): void {
    instance.showSideBar(this.showSideBar);
    instance.controlButton(this.controlButton);
    instance.showControlButton(this.showControlButton);
    instance.minSideBarWidth(this.minSideBarWidth);
    instance.maxSideBarWidth(this.maxSideBarWidth);
    instance.autoHide(this.autoHide);
    instance.sideBarPosition(this.sideBarPosition);
    instance.divider(this.divider);
    instance.minContentWidth(this.minContentWidth);
  }
}

@Entry
@Component
struct SideBarContainerExample  {
  @State message: string = 'sideBarContainer'
  @State mod: SideBarContainerModifier = new SideBarContainerModifier()
  @State showSideBar: boolean = true;
  @State controlButton: ButtonStyle = {left: 16, top: 48, width: 24, height: 24}
  @State showControlButton: boolean = true
  @State sideBarWidth: number = 240
  @State minSideBarWidth: number = 240
  @State maxSideBarWidth: number = 280
  @State autoHide: boolean = true
  @State sideBarPosition: SideBarPosition = SideBarPosition.Start
  @State divider: DividerStyle  = {strokeWidth:1}
  @State minContentWidth: Dimension = "10px"

  private stateChangCallBack = (eventData: events_emitter.EventData) => {
    if (eventData != null) {
      console.info("sideBarContainer page state change called:" + JSON.stringify(eventData));
      if(eventData.data!.typeValue === 0)
      {
        console.info(`sideBarContainer.showSideBar=>false`)
        this.mod.showSideBar = false
      } else if(eventData.data!.typeValue === 1){
        console.info(`sideBarContainer.showControlButton=>false`)
        this.mod.showControlButton = false
      }  else if(eventData.data!.typeValue === 2){
        console.info(`sideBarContainer.controlButton=>{left: 16, top: 48, width: 24, height: 24}`)
        this.mod.controlButton = {left: 16, top: 48, width: 24, height: 24}
      } else if(eventData.data!.typeValue === 3){
        console.info(`sideBarContainer.sideBarWidth=>260`)
        this.mod.sideBarWidth = 260
      } else if(eventData.data!.typeValue === 4){
        console.info(`sideBarContainer.minSideBarWidth=>300`)
        this.mod.minSideBarWidth = 300
      } else if(eventData.data!.typeValue === 5){
        console.info(`sideBarContainer.autoHide=>false`)
        this.mod.lineCap = false
      } else if(eventData.data!.typeValue === 6){
        console.info(`sideBarContainer.sideBarPosition=>End`)
        this.mod.sideBarPosition = SideBarPosition.End
      } else if(eventData.data!.typeValue === 7){
        console.info(`sideBarContainer.divider=>{strokeWidth: 2}`)
        this.mod.divider = {strokeWidth: 2}
      } else if(eventData.data!.typeValue === 8){
        console.info(`sideBarContainer.minContentWidth=>20px`)
        this.mod.minContentWidth = '20px'
      } 
    }
  }

  onPageShow() {
    console.info('sideBarContainer page1 show called');
    let stateChangeEvent: events_emitter.InnerEvent = {
      eventId: 31101,
      priority: events_emitter.EventPriority.LOW
    }
    events_emitter.on(stateChangeEvent, this.stateChangCallBack);
    let stateChangeEvent2: events_emitter.InnerEvent = {
      eventId: 31102,
      priority: events_emitter.EventPriority.LOW
    }
    events_emitter.on(stateChangeEvent2, this.stateChangCallBack);
    let stateChangeEvent3: events_emitter.InnerEvent = {
      eventId: 31103,
      priority: events_emitter.EventPriority.LOW
    }
    events_emitter.on(stateChangeEvent3, this.stateChangCallBack);
    let stateChangeEvent4: events_emitter.InnerEvent = {
      eventId: 31104,
      priority: events_emitter.EventPriority.LOW
    }
    events_emitter.on(stateChangeEvent4, this.stateChangCallBack);
    let stateChangeEvent5: events_emitter.InnerEvent = {
      eventId: 31105,
      priority: events_emitter.EventPriority.LOW
    }
    events_emitter.on(stateChangeEvent5, this.stateChangCallBack);
    let stateChangeEvent6: events_emitter.InnerEvent = {
      eventId: 31106,
      priority: events_emitter.EventPriority.LOW
    }
    events_emitter.on(stateChangeEvent6, this.stateChangCallBack);
    let stateChangeEvent7: events_emitter.InnerEvent = {
      eventId: 31107,
      priority: events_emitter.EventPriority.LOW
    }
    events_emitter.on(stateChangeEvent7, this.stateChangCallBack);
    let stateChangeEvent8: events_emitter.InnerEvent = {
      eventId: 31108,
      priority: events_emitter.EventPriority.LOW
    }
    events_emitter.on(stateChangeEvent8, this.stateChangCallBack);
  }

  build() {
    Column() {
      Text('SideBarContainer')
        .fontSize(26)
        .width('90%')
        .margin({ top: 20 })
      SideBarContainer() {
        Column() {
          Text("1")
          Text("2")
        }
      }
      .attributeModifier(this.mod)
      .key("sidebarkey")
    }
    .width('100%')
  }
}