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

class  RowSplitClipMod implements AttributeModifier< RowSplitAttribute> {
  applyNormalAttribute(instance:  RowSplitAttribute): void {
    instance.clip(new Circle({ width: "500px" }))
  }
}

@Entry
@Component
struct  RowSplitClip {
  @State myModifier:  RowSplitClipMod = new  RowSplitClipMod()

  @Builder
  modifier() {
     Row() {
      //这里是Modifier属性UI
       RowSplit() {
        Text('1').width('100%').height(50).backgroundColor(0xF5DEB3).textAlign(TextAlign.Center)
        Text('2').width('100%').height(50).backgroundColor(0xD2B48C).textAlign(TextAlign.Center)
        Text('3').width('100%').height(50).backgroundColor(0xF5DEB3).textAlign(TextAlign.Center)
        Text('4').width('100%').height(50).backgroundColor(0xD2B48C).textAlign(TextAlign.Center)
        Text('5').width('100%').height(50).backgroundColor(0xF5DEB3).textAlign(TextAlign.Center)
      }
      .key("RowSplittest")
      .attributeModifier(this.myModifier)
    }
  }

  //通用UI
  build() {

     Row() {
      Text("Modifier")
        .fontSize("32fp")
        .margin({ top: 20, bottom: 20 })
        .fontWeight(FontWeight.Bold)
      this.modifier()
    }.width('100%').height("100%")

  }
}