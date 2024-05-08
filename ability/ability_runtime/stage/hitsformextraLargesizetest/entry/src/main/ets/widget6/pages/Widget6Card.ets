/*
 * Copyright (C) 2024 Huawei Device Co., Ltd.
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

let storage6 = new LocalStorage();

@Entry(storage6)
@Component
struct WidgetCard6 {
  @LocalStorageProp('title') title: string = '等待刷新';
  @LocalStorageProp('detail') detail: string = '等待刷新';
  @LocalStorageProp('hour') hour: ResourceStr = '';
  @LocalStorageProp('minute') minute: ResourceStr = '';
  @LocalStorageProp('second') second: ResourceStr = '';

  build() {
    Column() {
      Text("这是一个动态卡片").fontSize(20).margin(10)
      Button('刷新')
        .onClick(() => {
          postCardAction(this, {
            'action': 'message',
            'params': {
              'msgTest': 'messageEvent'
            }
          });
        })
      // Text(`${this.title}`)
      // Text(`${this.detail}`)
      Text(`${this.hour.toString().padStart(2, '0')}:${this.minute.toString()
        .padStart(2, '0')}:${this.second.toString().padStart(2, '0')}`)
      Button('跳转')
        .onClick(() => {
          postCardAction(this, {
            'action': 'router',
            'bundleName': 'com.example.myapplication',
            'abilityName': 'EntryAbility',
            'params': {
              'message': 'router'
            }
          })
        })
    }
    .width('100%')
    .height('100%')
  }
}