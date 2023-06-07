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
import AbilityDelegatorRegistry from '@ohos.application.abilityDelegatorRegistry';
import { Hypium } from '@ohos/hypium';
import hilog from '@ohos.hilog';
import testsuite from '../../test/List.test'

@Entry
@Component
struct Index {
  aboutToAppear(){
    var abilityDelegator: any
    abilityDelegator = AbilityDelegatorRegistry.getAbilityDelegator()
    var abilityDelegatorArguments: any
    abilityDelegatorArguments = AbilityDelegatorRegistry.getArguments()
    hilog.isLoggable(0x0000, 'testTag', hilog.LogLevel.INFO);
    hilog.info(0x0000, 'testTag', '%{public}s', 'start run testcase!!!');
    Hypium.hypiumTest(abilityDelegator, abilityDelegatorArguments, testsuite)
  }
 @State message: string = 'Hello World'
   build() {
     Column({ space: 5 }) {
       Flex() {
         Button("button一")
           .width(200)
           .height(100)
           .backgroundColor(0xAFEEF)
           .onHover((isHover: boolean, event: HoverEvent) => {
             console.log('button 一' + isHover + '')
           })
         Button("button二")
           .width(100)
           .height(50)
           .backgroundColor(0xAFEE)
           .margin({ top: 25, left: -150 })
           .onHover((isHover: boolean, event: HoverEvent) => {
             event.stopPropagation()
             console.log('button 二' + isHover + '')
           }).key("ArkUX_Hover_stoppropagation_0100")
       }
       .padding(10)

       Flex() {
         Button("button一")
           .width(100)
           .height(50)
           .backgroundColor(0xAFEEF)
           .margin({ top: 25, left: 40 })
           .onHover((isHover: boolean, event: HoverEvent) => {
             console.log('button 一' + isHover + '')
           })
         Button("button二")
           .width(200)
           .height(100)
           .backgroundColor(0xAFEE)
           .margin({ top: 20, left: -140 })
           .onHover((isHover: boolean, event: HoverEvent) => {
             event.stopPropagation()
             console.log('button 二' + isHover + '')
           })
       }
       .padding(10)
       Flex() {
         Button("button一")
           .width(200)
           .height(100)
           .backgroundColor(0xAFEEF)
           .onHover((isHover: boolean, event: HoverEvent) => {
             console.log('button 一' + isHover + '')
           })
         Button("button二")
           .width(100)
           .height(50)
           .backgroundColor(0xAFEE)
           .margin({ top: 25, left: -100 })
           .onHover((isHover: boolean, event: HoverEvent) => {
             event.stopPropagation()
             console.log('button 二' + isHover + '')
           })
       }
       .padding(10)
       Flex() {
         Button("button一")
           .width(200)
           .height(100)
           .backgroundColor(0xAFEEF)
           .onHover((isHover: boolean, event: HoverEvent) => {
             console.log('button 一' + isHover + '')
           })
         Button("button二")
           .width(100)
           .height(50)
           .backgroundColor(0xAFEE)
           .margin({ top: 20, left: -80 })
           .onHover((isHover: boolean, event: HoverEvent) => {
             event.stopPropagation()
             console.log('button 二' + isHover + '')
           })
       }
       .padding(10)
     }
     .width('100%')
     .margin({ top: 10 })
   }
 }