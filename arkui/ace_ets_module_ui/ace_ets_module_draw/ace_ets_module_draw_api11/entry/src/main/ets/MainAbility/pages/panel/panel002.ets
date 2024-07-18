/*
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

import Log from '../../common/Log';

const TAG = 'Panel002';

@Entry
@Component
struct Panel002 {
  aboutToAppear() {
    Log.showInfo(TAG, `aboutToAppear Panel002 start`)
  }

  aboutToDisappear() {
    Log.showInfo(TAG, `aboutToDisAppear Panel002 end`)
  }

  build() {
    Column() {
      Panel(true) {
        Column() {
          Text("panel002").fontSize(30)
        }
      }
      .key('panel002')
      .backgroundColor('green')
      .height(140)
      .width(261)
    }.width('100%').height('100%')
  }
}
