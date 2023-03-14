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
struct checkBoxTest {
  
  aboutToAppear(){
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
      Column() {
        List({space: 0, initialIndex: 0 }){
          ListItem(){
            Checkbox({name: 'checkbox37',  group: 'checkboxGroup'})
              .key("ArkUX_Stage_Checkbox_CheckMarkWidth_0100")
              .select(true)
              .selectedColor(0xed6f21)
              .mark({strokeWidth:0})
              .onChange((value: boolean) => {
                console.info('Checkbox1 change is'+ value)
              })
          }
          ListItem(){
            Checkbox({name: 'checkbox38',  group: 'checkboxGroup'})
              .key("ArkUX_Stage_Checkbox_CheckMarkWidth_0200")
              .select(true)
              .selectedColor(0xed6f21)
              .mark({strokeWidth:1})
              .onChange((value: boolean) => {
                console.info('Checkbox1 change is'+ value)
              })
          }
          ListItem(){
            Checkbox({name: 'checkbox39',  group: 'checkboxGroup'})
              .key("ArkUX_Stage_Checkbox_CheckMarkWidth_0300")
              .select(true)
              .selectedColor(0xed6f21)
              .mark({strokeWidth:"60px"})
              .onChange((value: boolean) => {
                console.info('Checkbox1 change is'+ value)
              })
          }
          ListItem(){
            Checkbox({name: 'checkbox40',  group: 'checkboxGroup'})
              .key("ArkUX_Stage_Checkbox_CheckMarkWidth_0400")
              .select(true)
              .selectedColor(0xed6f21)
              .mark({strokeWidth:"120%"})
              .onChange((value: boolean) => {
                console.info('Checkbox1 change is'+ value)
              })
          }
          ListItem(){
            Checkbox({name: 'checkbox41',  group: 'checkboxGroup'})
              .key("ArkUX_Stage_Checkbox_CheckMarkWidth_0500")
              .select(true)
              .selectedColor(0xed6f21)
              .mark({strokeWidth:$r("app.string.Check_Mark_Size_test")})
              .onChange((value: boolean) => {
                console.info('Checkbox1 change is'+ value)
              })
          }
          ListItem(){
            Checkbox({name: 'checkbox42',  group: 'checkboxGroup'})
              .key("ArkUX_Stage_Checkbox_CheckMarkWidth_0600")
              .select(true)
              .selectedColor(0xed6f21)
              .mark({strokeWidth:""})
              .onChange((value: boolean) => {
                console.info('Checkbox1 change is'+ value)
              })
          }
          ListItem(){
            Checkbox({name: 'checkbox43',  group: 'checkboxGroup'})
              .key("ArkUX_Stage_Checkbox_CheckMarkWidth_0700")
              .select(true)
              .selectedColor(0xed6f21)
              .mark({strokeWidth:null})
              .onChange((value: boolean) => {
                console.info('Checkbox1 change is'+ value)
              })
          }
          ListItem(){
            Checkbox({name: 'checkbox44',  group: 'checkboxGroup'})
              .key("ArkUX_Stage_Checkbox_CheckMarkWidth_0800")
              .select(true)
              .selectedColor(0xed6f21)
              .mark({strokeWidth:undefined})
              .onChange((value: boolean) => {
                console.info('Checkbox1 change is'+ value)
              })
          }
          ListItem(){
            Checkbox({name: 'checkbox45',  group: 'checkboxGroup'})
              .key("ArkUX_Stage_Checkbox_CheckMarkWidth_0900")
              .select(true)
              .selectedColor(0xed6f21)
              .mark({strokeWidth:10})
              .mark({strokeWidth:"5fp"})
              .onChange((value: boolean) => {
                console.info('Checkbox1 change is'+ value)
              })
          }
          ListItem(){
            Checkbox({name: 'checkbox46',  group: 'checkboxGroup'})
              .key("ArkUX_Stage_Checkbox_CheckMarkWidth_1000")
              .select(true)
              .selectedColor(0xed6f21)
              .mark({strokeWidth:10})
              .mark({strokeWidth:undefined})
              .onChange((value: boolean) => {
                console.info('Checkbox1 change is'+ value)
              })
          }
          ListItem(){
            Checkbox({name: 'checkbox47',  group: 'checkboxGroup'})
              .key("ArkUX_Stage_Checkbox_CheckMarkWidth_1100")
              .select(true)
              .selectedColor(0xed6f21)
              .mark({strokeWidth:"asdf#$8"})
              .onChange((value: boolean) => {
                console.info('Checkbox1 change is'+ value)
              })
          }
          ListItem(){
            Checkbox({name: 'checkbox48',  group: 'checkboxGroup'})
              .key("ArkUX_Stage_Checkbox_CheckMarkWidth_1200")
              .select(true)
              .selectedColor(0xed6f21)
              .mark({strokeWidth:"40lpx"})
              .width(null)
              .onChange((value: boolean) => {
                console.info('Checkbox1 change is'+ value)
              })
          }
          ListItem(){
            Checkbox({name: 'checkbox49',  group: 'checkboxGroup'})
              .key("ArkUX_Stage_Checkbox_CheckMarkWidth_1300")
              .select(true)
              .selectedColor(0xed6f21)
              .unselectedColor(Color.Pink)
              .mark({strokeWidth:-1})
              .onChange((value: boolean) => {
                console.info('Checkbox1 change is'+ value)
              })
          }
          ListItem(){
            Checkbox({name: 'checkbox49',  group: 'checkboxGroup'})
              .key("ArkUX_Stage_Checkbox_CheckMarkWidth_1400")
              .select(true)
              .selectedColor(0xed6f21)
              .unselectedColor(Color.Pink)
              .mark({strokeColor:0x00ff00, size:40, strokeWidth:40})
              .onChange((value: boolean) => {
                console.info('Checkbox1 change is'+ value)
              })
          }
          ListItem(){
            CheckboxGroup({group: 'checkboxGroup'})
              .key("ArkUX_Stage_CheckboxGroup_CheckMarkColor_0100")
              .selectedColor(0xed6f21)
              .mark({strokeColor:0x00ff00})
              .onChange((value: boolean) => {
                console.info('Checkbox1 change is'+ value)
              })
          }
          ListItem(){
            CheckboxGroup({group: 'checkboxGroup2'})
              .key("ArkUX_Stage_CheckboxGroup_CheckMarkColor_0200")
              .selectedColor(0xed6f21)
              .mark({strokeColor:"#fffd0000"})
              .onChange((value: boolean) => {
                console.info('Checkbox1 change is'+ value)
              })
          }
          ListItem(){
            CheckboxGroup({group: 'checkboxGroup3'})
              .key("ArkUX_Stage_CheckboxGroup_CheckMarkColor_0300")
              .selectedColor(0xed6f21)
              .mark({strokeColor:"rgb(138,43,226)"})
              .onChange((value: boolean) => {
                console.info('Checkbox1 change is'+ value)
              })
          }
          ListItem(){
            CheckboxGroup({group: 'checkboxGroup4'})
              .key("ArkUX_Stage_CheckboxGroup_CheckMarkColor_0400")
              .selectedColor(0xed6f21)
              .mark({strokeColor:Color.Pink})
              .onChange((value: boolean) => {
                console.info('Checkbox1 change is'+ value)
              })
          }
          ListItem(){
            CheckboxGroup({group: 'checkboxGroup5'})
              .key("ArkUX_Stage_CheckboxGroup_CheckMarkColor_0500")
              .selectedColor(0xed6f21)
              .mark({strokeColor:$r("app.color.checkbox_Color")})
              .onChange((value: boolean) => {
                console.info('Checkbox1 change is'+ value)
              })
          }
          ListItem(){
            CheckboxGroup({group: 'checkboxGroup6'})
              .key("ArkUX_Stage_CheckboxGroup_CheckMarkColor_0600")
              .selectedColor(0xed6f21)
              .mark({strokeColor:""})
              .onChange((value: boolean) => {
                console.info('Checkbox1 change is'+ value)
              })
          }
          ListItem(){
            CheckboxGroup({group: 'checkboxGroup7'})
              .key("ArkUX_Stage_CheckboxGroup_CheckMarkColor_0700")
              .selectedColor(0xed6f21)
              .mark({strokeColor:null})
              .onChange((value: boolean) => {
                console.info('Checkbox1 change is'+ value)
              })
          }
          ListItem(){
            CheckboxGroup({group: 'checkboxGroup8'})
              .key("ArkUX_Stage_CheckboxGroup_CheckMarkColor_0800")
              .selectedColor(0xed6f21)
              .mark({strokeColor:undefined})
              .onChange((value: boolean) => {
                console.info('Checkbox1 change is'+ value)
              })
          }
          ListItem(){
            CheckboxGroup({group: 'checkboxGroup9'})
              .key("ArkUX_Stage_CheckboxGroup_CheckMarkColor_0900")
              .selectedColor(0xed6f21)
              .mark({strokeColor:Color.Pink})
              .mark({strokeColor:"#FFFD0000"})
              .onChange((value: boolean) => {
                console.info('Checkbox1 change is'+ value)
              })
          }
          ListItem(){
            CheckboxGroup({group: 'checkboxGroup10'})
              .key("ArkUX_Stage_CheckboxGroup_CheckMarkColor_1000")
              .selectedColor(0xed6f21)
              .mark({strokeColor:Color.Pink})
              .mark({strokeColor:'bgr(138,43,226)'})
              .onChange((value: boolean) => {
                console.info('Checkbox1 change is'+ value)
              })
          }
          ListItem(){
            CheckboxGroup({group: 'checkboxGroup11'})
              .key("ArkUX_Stage_CheckboxGroup_CheckMarkColor_1100")
              .selectedColor(0xed6f21)
              .mark({strokeColor:'bgr(138,43,226)'})
              .onChange((value: boolean) => {
                console.info('Checkbox1 change is'+ value)
              })
          }
          ListItem(){
            CheckboxGroup({group: 'checkboxGroup12'})
              .key("ArkUX_Stage_CheckboxGroup_CheckMarkColor_1200")
              .selectedColor(0xed6f21)
              .mark({strokeColor:0x00ff00})
              .backgroundColor(null)
              .onChange((value: boolean) => {
                console.info('Checkbox1 change is'+ value)
              })
          }
          ListItem(){
            CheckboxGroup({group: 'checkboxGroup12'})
              .key("ArkUX_Stage_CheckboxGroup_CheckMarkColor_1300")
              .selectedColor(0xed6f21)
              .mark({strokeColor:-1})
              .onChange((value: boolean) => {
                console.info('Checkbox1 change is'+ value)
              })
          }
        }
      }
      .width('100%')
    }
    .height('100%')
  }
}
