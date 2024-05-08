/*
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
import events_emitter from '@ohos.events.emitter';
import AbilityDelegatorRegistry from '@ohos.application.abilityDelegatorRegistry';
import { Hypium } from '@ohos/hypium';
import hilog from '@ohos.hilog';
import testsuite from '../../test/List.test'

@Entry
@Component
struct AlphabetIndexerTest {
  private arrayA: string[] = ['安', '爱', '奥']
  private arrayB: string[] = ['卜', '白', '包', '毕', '丙']
  private arrayC: string[] = ['曹', '成', '陈', '催']
  private arrayH: string[] = ['韩', '何', '郝', '黑']
  private arrayL: string[] = ['刘', '李', '楼', '梁', '雷', '吕', '柳', '卢']
  private arrayT: string[] = ['太', '天', '田', '唐', '陶', '汤']
  private value: string[] = ['#', 'A', 'B', 'C', 'D', 'E', 'F', 'G',
    'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R',
    'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z']

  @State popupItemBorderRadiusNum: number = 24
  @State itemBorderRadiusNum: number = 12
  @State popupBackgroundBlurStyleBlu: BlurStyle = BlurStyle.Thin
  @State popupTitleBackgroundStr: string = '#FF0000FF'

  private stateChangCallBack = (eventData) => {
    console.info("sideBar page state change called:" + JSON.stringify(eventData));
    if (eventData != null) {
      if (eventData.data.popupItemBorderRadiusNum != null) {
        this.popupItemBorderRadiusNum = eventData.data.popupItemBorderRadiusNum;
      }
      if (eventData.data.itemBorderRadiusNum != null) {
        this.itemBorderRadiusNum = eventData.data.itemBorderRadiusNum;
      }
      if (eventData.data.popupBackgroundBlurStyleBlu != null) {
        this.popupBackgroundBlurStyleBlu = eventData.data.popupBackgroundBlurStyleBlu;
      }
      if (eventData.data.popupTitleBackgroundStr != null) {
        this.popupTitleBackgroundStr = eventData.data.popupTitleBackgroundStr;
      }
  
    }
  }

  aboutToAppear() {
    var stateChangeEvent = {
      eventId: 183,
      priority: events_emitter.EventPriority.LOW
    }
    events_emitter.on(stateChangeEvent, this.stateChangCallBack);
    var abilityDelegator: any
    abilityDelegator = AbilityDelegatorRegistry.getAbilityDelegator()
    var abilityDelegatorArguments: any
    abilityDelegatorArguments = AbilityDelegatorRegistry.getArguments()
    hilog.isLoggable(0x0000, 'testTag', hilog.LogLevel.INFO);
    hilog.info(0x0000, 'testTag', '%{public}s', 'start run testcase!!!');
    Hypium.hypiumTest(abilityDelegator, abilityDelegatorArguments, testsuite)
  }

  build() {
    Row() {
      AlphabetIndexer({ arrayValue: this.value, selected: 0 })
        .key('alphabetIndexerTest8')
        .font({ size: 18, weight: FontWeight.Normal })
        .selectedFont({ size: 28, weight: FontWeight.Bold })
        .color(0x000000)
        .selectedColor(0xFF1493)
        .backgroundColor(0xF8F8FF)
        .selectedBackgroundColor(0xBEBEBE)
        .itemSize(26)
        .popupItemBorderRadius(this.popupItemBorderRadiusNum)
        .onSelect((index: number) => {
          console.info(this.value[index] + ' Selected!')
        })
        .usingPopup(true)
        .alignStyle(IndexerAlign.Left)
        .popupFont({ size: 28, weight: FontWeight.Bold })
        .popupColor(0xFFA500)
        .popupBackground(0x32CD32)
        .onRequestPopupData((index: number) => {
          if (this.value[index] == 'A') {
            return this.arrayA
          } else if (this.value[index] == 'B') {
            return this.arrayB
          } else if (this.value[index] == 'C') {
            return this.arrayC
          } else if (this.value[index] == 'L') {
            return this.arrayL
          } else if (this.value[index] == 'T') {
            return this.arrayT
          } else {
            return []
          }
        })
        .onPopupSelect((index: number) => {
          console.info('onPopupSelected label :' + index)
        })
        .margin({ top: 20, left: 20 })

      AlphabetIndexer({ arrayValue: this.value, selected: 0 })
        .key('alphabetIndexerTest9')
        .font({ size: 18, weight: FontWeight.Normal })
        .selectedFont({ size: 28, weight: FontWeight.Bold })
        .color(0x000000)
        .selectedColor(0xFF1493)
        .backgroundColor(0xF8F8FF)
        .selectedBackgroundColor(0xBEBEBE)
        .itemSize(26)
        .itemBorderRadius(this.itemBorderRadiusNum)
        .onSelect((index: number) => {
          console.info(this.value[index] + ' Selected!')
        })
        .usingPopup(true)
        .alignStyle(IndexerAlign.Left)
        .popupFont({ size: 28, weight: FontWeight.Bold })
        .popupColor(0xFFA500)
        .popupBackground(0x32CD32)
        .onRequestPopupData((index: number) => {
          if (this.value[index] == 'A') {
            return this.arrayA
          } else if (this.value[index] == 'B') {
            return this.arrayB
          } else if (this.value[index] == 'C') {
            return this.arrayC
          } else if (this.value[index] == 'L') {
            return this.arrayL
          } else if (this.value[index] == 'T') {
            return this.arrayT
          } else {
            return []
          }
        })
        .onPopupSelect((index: number) => {
          console.info('onPopupSelected label :' + index)
        })
        .margin({ top: 20, left: 20 })

      AlphabetIndexer({ arrayValue: this.value, selected: 0 })
        .key('alphabetIndexerTest10')
        .font({ size: 18, weight: FontWeight.Normal })
        .selectedFont({ size: 28, weight: FontWeight.Bold })
        .color(0x000000)
        .selectedColor(0xFF1493)
        .backgroundColor(0xF8F8FF)
        .selectedBackgroundColor(0xBEBEBE)
        .itemSize(26)
        .popupBackgroundBlurStyle(this.popupBackgroundBlurStyleBlu)
        .onSelect((index: number) => {
          console.info(this.value[index] + ' Selected!')
        })
        .usingPopup(true)
        .alignStyle(IndexerAlign.Left)
        .popupFont({ size: 28, weight: FontWeight.Bold })
        .popupColor(0xFFA500)
        .popupBackground(0x32CD32)
        .onRequestPopupData((index: number) => {
          if (this.value[index] == 'A') {
            return this.arrayA
          } else if (this.value[index] == 'B') {
            return this.arrayB
          } else if (this.value[index] == 'C') {
            return this.arrayC
          } else if (this.value[index] == 'L') {
            return this.arrayL
          } else if (this.value[index] == 'T') {
            return this.arrayT
          } else {
            return []
          }
        })
        .onPopupSelect((index: number) => {
          console.info('onPopupSelected label :' + index)
        })
        .margin({ top: 20, left: 20 })

      AlphabetIndexer({ arrayValue: this.value, selected: 0 })
        .key('alphabetIndexerTest11')
        .font({ size: 18, weight: FontWeight.Normal })
        .selectedFont({ size: 28, weight: FontWeight.Bold })
        .color(0x000000)
        .selectedColor(0xFF1493)
        .backgroundColor(0xF8F8FF)
        .selectedBackgroundColor(0xBEBEBE)
        .itemSize(26)
        .popupTitleBackground(this.popupTitleBackgroundStr)
        .onSelect((index: number) => {
          console.info(this.value[index] + ' Selected!')
        })
        .usingPopup(true)
        .alignStyle(IndexerAlign.Left)
        .popupFont({ size: 28, weight: FontWeight.Bold })
        .popupColor(0xFFA500)
        .popupBackground(0x32CD32)
        .onRequestPopupData((index: number) => {
          if (this.value[index] == 'A') {
            return this.arrayA
          } else if (this.value[index] == 'B') {
            return this.arrayB
          } else if (this.value[index] == 'C') {
            return this.arrayC
          } else if (this.value[index] == 'L') {
            return this.arrayL
          } else if (this.value[index] == 'T') {
            return this.arrayT
          } else {
            return []
          }
        })
        .onPopupSelect((index: number) => {
          console.info('onPopupSelected label :' + index)
        })
        .margin({ top: 20, left: 20 })
    }.backgroundColor(0x00FFFF).width('100%').height('100%')
  }
}
