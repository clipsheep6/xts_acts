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
struct Text30Example1 {
  build() {
    Flex({ direction: FlexDirection.Column, alignItems: ItemAlign.Center, justifyContent: FlexAlign.Center }) {
      Text('Medium containers')
        .fontSize(20)
      Flex({ direction: FlexDirection.Column}){
        Text('hello world1')
          .fontSize(50)
          .displayPriority(1)
          .key('text1')
          .height('150vp')
        Text('hello world2')
          .fontSize(50)
          .displayPriority(2)
          .key('text2')
          .height('150vp')
        Text('hello world3')
          .fontSize(50)
          .key('text3')
          .displayPriority(3)
          .height('150vp')
      }.height('50%')
    }.width('100%')
    .height('100%')
  }
}