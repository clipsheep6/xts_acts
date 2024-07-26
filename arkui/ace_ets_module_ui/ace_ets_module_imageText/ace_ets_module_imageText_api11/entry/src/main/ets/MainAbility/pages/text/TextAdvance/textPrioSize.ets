/**
 * Copyright (c) 2024 Shenzhen Kaihong Digital Industry Development Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
@Entry
@Component
struct TextExample1 {
  build() {
    Flex({ direction: FlexDirection.Column, alignItems: ItemAlign.Center, justifyContent: FlexAlign.Center }) {
      Text('hello world1')
        .fontSize(50)
        .displayPriority(1)
        .key("text1")
      Text('hello world2')
        .fontSize(50)
        .displayPriority(1.9)
        .key("text2")
      Text('hello world3')
        .fontSize(50)
        .key("text3")
        .aspectRatio(1.5)
        .height(200)
      Text('hello world4')
        .key("text4")
        .width('40px')
        .height('10px')
      Text('hello world5')
        .fontSize(50)
        .key('text5')
        .aspectRatio(-1.5)
    }.width('100%')
    .height('100%')
  }
}
