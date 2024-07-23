/*
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

import { takePicture } from "../../../../../../../common";

const TAG: string = 'PhotoModeComponent';

@Entry
@Component
struct PhotoModeComponent {
  build() {
    Column({ space: 24}) {
      Row() {
        // 拍照按钮
        Column() {
          Row() {
            Button("拍照")
              .width("300px")
              .height("100px")
              .onClick(async () => {
                takePicture();
              })
          }
        }
      }
      .width("100%")
      .justifyContent(FlexAlign.Center)
      .alignItems(VerticalAlign.Center)
    }
    .justifyContent(FlexAlign.End)
    .height("10%")
    .padding({ left: 24, right: 24 })
    .margin({ bottom: 24 })
    .position({ x: "0%", y: "85%"})
  }
}

export default PhotoModeComponent