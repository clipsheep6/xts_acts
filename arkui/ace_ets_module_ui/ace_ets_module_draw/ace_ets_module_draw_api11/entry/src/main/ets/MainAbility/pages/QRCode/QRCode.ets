/**
 * Copyright (c) 2024 Shenzhen Kaihong Digital Industry Development Co., Ltd.
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

@Entry
@Component
struct QRCodeExample {
  private value: string = 'hello world'
  build() {
    Column({ space: 5 }) {
      QRCode(this.value)
      .color(0xF7CE00)
      .width(360)
      .height(240)
      .key('qrcode001')
    }
    .width('100%')
    .margin({ top: 5 })
  }
}
