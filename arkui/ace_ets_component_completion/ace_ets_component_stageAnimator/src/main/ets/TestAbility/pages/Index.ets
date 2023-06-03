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
  private TAG: string = '[AnimatorTest]'
  private backAnimator: any = undefined
  private flag: boolean = false
  @State wid: number = 100
  @State hei: number = 100

  aboutToAppear(){
    var abilityDelegator: any
    abilityDelegator = AbilityDelegatorRegistry.getAbilityDelegator()
    var abilityDelegatorArguments: any
    abilityDelegatorArguments = AbilityDelegatorRegistry.getArguments()
    hilog.isLoggable(0x0000, 'testTag', hilog.LogLevel.INFO);
    hilog.info(0x0000, 'testTag', '%{public}s', 'start run testcase!!!');
    Hypium.hypiumTest(abilityDelegator, abilityDelegatorArguments, testsuite)
  }

  create() {
    let _this = this
    this.backAnimator = globalThis.uiContent.createAnimator({
      duration: 1500,
      easing: "friction",
      delay: 0,
      fill: "forwards",
      direction: "normal",
      iterations: 3,
      begin: 200,
      end: 400
    })

    this.backAnimator.onfinish = function () {
      _this.flag = true
      console.info(_this.TAG, 'backAnimator onfinish')
    }
    this.backAnimator.onrepeat = function () {
      console.info(_this.TAG, 'backAnimator repeat')
    }
    this.backAnimator.oncancel = function () {
      console.info(_this.TAG, 'backAnimator cancel')
    }
    this.backAnimator.onframe = function (value) {
      _this.wid = value
      _this.hei = value
    }
  }

  build(){
    Flex({ direction: FlexDirection.Column, alignItems: ItemAlign.Center,justifyContent:FlexAlign.Center }){
      Button('animator-play')
        .width(100)
        .height(70)
        .fontSize(30)
        .fontColor(Color.Black)
        .onClick(() => {
          this.flag = false
          this.backAnimator.play()
        })
        .key("animator")
    }.width("100%").height("100%")
  }
 }
