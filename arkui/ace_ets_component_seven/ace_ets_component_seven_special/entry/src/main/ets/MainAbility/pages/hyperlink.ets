/**
 * Copyright (c) 2024 Huawei Device Co., Ltd.
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
import UDC from '@ohos.data.unifiedDataChannel';
import UTD from '@ohos.data.uniformTypeDescriptor';
import events_emitter from '@ohos.events.emitter';

class TestHyperlinkModifier implements AttributeModifier<HyperlinkAttribute> {
  mColor: ResourceColor = '#FF789456'

  applyNormalAttribute(instance: HyperlinkAttribute): void {
    instance
      .color(this.mColor)
      .draggable(true)
  }
}
@Entry
@Component
struct ImageExample {
  @State uri: string = ""
  @State AblockArr: string[] = []
  @State BblockArr: string[] = []
  @State AVisible: Visibility = Visibility.Visible
  @State dragSuccess: Boolean = false
  @State modifier: TestHyperlinkModifier = new TestHyperlinkModifier()

  build() {
    Column() {
      Text('Hyperlink拖拽')
        .fontSize('30dp')
      Flex({ direction: FlexDirection.Row, alignItems: ItemAlign.Center, justifyContent: FlexAlign.SpaceAround }) {
        Hyperlink('https://example.com/', 'Go to the developer website') {
        }
          .width(100)
          .height(100)
          .border({ width: 1 })
          .visibility(this.AVisible)
          .key('HyperlinkKey1')
          .attributeModifier(this.modifier)
          .onDragEnd((event: DragEvent) => {
            let ret = event.getResult();
            if (ret == 0) {
              console.log("enter ret == 0")
              this.AVisible = Visibility.Hidden;
            } else {
              console.log("enter ret != 0")
              this.AVisible = Visibility.Visible;
            }

            try {
              let backData: events_emitter.EventData = {
                data: {
                  "ACTION": ret == 0 ? true : false,
                }
              }
              let backEvent: events_emitter.InnerEvent = {
                eventId: 79001,
                priority: events_emitter.EventPriority.LOW
              }
              console.info("Hyperlink Drag start to emit action state");
              events_emitter.emit(backEvent, backData);
            } catch (err) {
              console.info("Hyperlink Drag emit action state err: " + JSON.stringify(err));
            }
          })
      }
      .margin({ bottom: 20 })

      Column(){
        Text('可释放区域')
          .fontSize('15dp')
          .height('10%')
        List(){
          ForEach(this.BblockArr, (item: string, index) => {
            ListItem() {
              Image(item)
                .width(100)
                .height(100)
                .border({ width: 1 })
            }
              .margin({ left: 30, top: 30 })
          }, (item: string) => item)
        }.key("Testlist")
          .border({ width: 1 })
          .height('60%')
          .width('90%')
          .allowDrop([UTD.UniformDataType.IMAGE])
          .onDrop((event?: DragEvent, extraParams?: string) => {
            console.log("enter onDrop")
            let dragData: UnifiedData = (event as DragEvent).getData() as UnifiedData;
            if (dragData != undefined) {
              let arr: Array<UDC.UnifiedRecord> = dragData.getRecords();
              if (arr.length > 0) {
                let image = arr[0] as UDC.Image;
                this.uri = image.imageUri;
                this.BblockArr.splice(JSON.parse(extraParams as string).insertIndex, 0, this.uri);
              } else {
                console.log(`dragData arr is null`)
              }
            } else {
              console.log(`dragData  is undefined`)
            }
            console.log("ondrop udmf data");
            this.dragSuccess = true
          })

      }
        .height("100%")
        .width("100%")
        .border({ width: 1 })
        .margin({ left: 12 })
    }
  }
}