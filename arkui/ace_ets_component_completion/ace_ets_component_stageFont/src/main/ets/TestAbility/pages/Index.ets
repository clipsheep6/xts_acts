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
//@ts-nocheck
import events_emitter from '@ohos.events.emitter';
import AbilityDelegatorRegistry from '@ohos.application.abilityDelegatorRegistry';
import { Hypium } from '@ohos/hypium';
import hilog from '@ohos.hilog';
import testsuite from '../../test/List.test'

@Entry
@Component
struct Index {
  @State message: string = 'Hello World'
  @State text: string = ''
  controller: TextAreaController = new TextAreaController()

  aboutToAppear(){
    var abilityDelegator: any
    abilityDelegator = AbilityDelegatorRegistry.getAbilityDelegator()
    var abilityDelegatorArguments: any
    abilityDelegatorArguments = AbilityDelegatorRegistry.getArguments()
    hilog.isLoggable(0x0000, 'testTag', hilog.LogLevel.INFO);
    hilog.info(0x0000, 'testTag', '%{public}s', 'start run testcase!!!');
    Hypium.hypiumTest(abilityDelegator, abilityDelegatorArguments, testsuite)
    let fontRegister = globalThis.uiContent.getFont();
    fontRegister.registerFont({
        familyName: 'fontCustom', familySrc: './bohehaiyan.ttf'
    })
  }

  build(){
    Flex({ direction: FlexDirection.Column, alignItems: ItemAlign.Center,justifyContent:FlexAlign.Center }){

      Button('按钮Button字体')
        .labelStyle({
          font: { family: 'fontCustom' }
        })
        .key("button")
      Text('文本Text字体')
        .fontSize(24)
        .fontFamily('fontCustom')
        .key("text")
      TextArea({
        text: this.text,
        placeholder: 'TextArea字体',
        controller: this.controller
      })
        .placeholderFont({ size: 24, weight: 400 })
        .fontSize(24)
        .fontFamily('fontCustom')
        .onChange((value: string) => {
          this.text = value
        })
        .key('textArea')
      TextInput({ placeholder: 'TextInput字体' })
        .fontFamily('fontCustom')
        .fontSize(24)
        .key('textInput')
      Text() {
        Span('TextSpan字体')
          .fontFamily('fontCustom')
          .fontSize(24)
          .key('textSpan')
      }
    }.width("100%").height("100%")
  }
 }
