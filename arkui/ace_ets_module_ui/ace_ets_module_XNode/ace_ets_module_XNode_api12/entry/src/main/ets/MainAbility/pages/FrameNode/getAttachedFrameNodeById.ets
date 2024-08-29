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



@Entry
@Component
struct GetAttachedFramenodeByID {
  @State message: string = "Hello World"

  build() {
    Column({ space: 4 }) {
      Text(this.message)
        .id("GetAttachedFramenodeByIDText")
        .fontSize(50)
        .fontWeight(700)
        .height('30%')

      Button('点击测试getAttachedFrameNode')
        .id("GetAttachedFramenodeByIDButton")
        .onClick(() => {
          let frame = this.getUIContext().getAttachedFrameNodeById('GetAttachedFramenodeByIDText')
          if (frame) {
            this.message = 'Hello Sally'
            console.log(`sally----- getAttachedFrameNodeById('GetAttachedFramenodeByIDText') is ` + frame.getNodeType())
          } else {
            console.log(`sally----- getAttachedFrameNodeById('GetAttachedFramenodeByIDText') is ` + frame)
          }
        })
    }
  }
}