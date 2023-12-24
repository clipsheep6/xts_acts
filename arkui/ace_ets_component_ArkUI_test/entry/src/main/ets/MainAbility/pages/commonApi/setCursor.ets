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
import pointer from '@ohos.multimodalInput.pointer';

@Entry
@Component
struct setCursor1 {
  @State text: string = ''
  controller: TextInputController = new TextInputController()

  build() {
    Column() {
      Row()
        .key('setCursor_1')
        .height(200).width(200).backgroundColor(Color.Green).position({x: 150 ,y:70})
        .onHover((flag) => {
          if (flag) {
            cursorControl.setCursor(pointer.PointerStyle.EAST)
          } else {
            cursorControl.restoreDefault()
          }
        })
    }.width('100%')
  }
}