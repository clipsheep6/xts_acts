/*
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
import { WaterFlowDataSource } from './WaterFlowDataSource'
import componentUtils from '@ohos.arkui.componentUtils';
@Entry
@Component
struct WaterFlowDemo {
  @State minSize: number = 80
  @State text:string='0'
  @State maxSize: number = 180
  @State result: number = 0
  @State colors: number[] = [0xFFC0CB, 0xDA70D6, 0x6B8E23, 0x6A5ACD, 0x00FFFF, 0x00FF7F]
  dataSource: WaterFlowDataSource = new WaterFlowDataSource()
  private itemWidthArray: number[] = []
  private itemHeightArray: number[] = []
  getSize() {
    let ret = Math.floor(Math.random() * this.maxSize)
    return (ret > this.minSize ? ret : this.minSize)
  }
  setItemSizeArray() {
    for (let i = 0; i < 100; i++) {
      this.itemWidthArray.push(this.getSize())
      this.itemHeightArray.push(this.getSize())
    }
  }
  aboutToAppear() {
    this.setItemSizeArray()
  }
  build() {
    Column({ space: 2 }) {
      WaterFlow() {
        LazyForEach(this.dataSource, (item: number) => {
          FlowItem() {
            Column() {
              Text("N" + item).fontSize(12).height('16')
            }
          }
          .width('100%')
          .height(this.itemHeightArray[item % 100])
          .backgroundColor(this.colors[item % 5])
        }, (item: string) => item)
      }
      .onReachEnd(()=>{
        this.result+=1
      })
      .columnsTemplate('repeat(auto-fill,80)')
      .columnsGap(10)
      .rowsGap(5)
      .padding({left:5})
      .backgroundColor(0xFAEEE0)
      .width(220)
      .height(140)
      .id('waterflow001')
      Row(){
        Button('获取属性')
          .id('waterflowbutton')
          .onClick(()=>{
            let modePosition:componentUtils.ComponentInfo = componentUtils.getRectangleById("waterflow001");
            this.text='{width:'+modePosition.size.width/1.5+',height:'+ modePosition.size.height/1.5+'}'
          }).width(50).height(20)
      }
      Row(){
        Text(this.text)
          .id('getwaterflow001')
      }
    }
  }
}


