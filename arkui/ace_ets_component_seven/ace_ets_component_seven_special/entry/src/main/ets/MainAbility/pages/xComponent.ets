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

class XComponentModifier1 implements AttributeModifier<XComponentAttribute> {
  applyNormalAttribute(instance: XComponentAttribute): void {
    instance.backgroundColor("#FF654321")
    instance.opacity(0.8)
  }
}

@Entry
@Component
struct XComponentModifier7Example {
  @State XComponentModifier1: XComponentModifier1 = new XComponentModifier1()
  private surfaceId : string =''
  xcomponentController: XComponentController = new XComponentController()
  build() {
    Column() {
      XComponent({
        id: 'xcomponent',
        type: XComponentType.TEXTURE,
        controller: this.xcomponentController
      }).onLoad(() => {
        this.xcomponentController.setXComponentSurfaceSize({surfaceWidth:1920,surfaceHeight:1080});
        this.surfaceId = this.xcomponentController.getXComponentSurfaceId()
      })
      .borderWidth(2)
      .borderColor(Color.Red)
      .width('100%')
      .height('100%')
      .key("XComponenttest")
      .attributeModifier(this.XComponentModifier1)
    }
    .width('100%')
    .height('100%')
  }
}
