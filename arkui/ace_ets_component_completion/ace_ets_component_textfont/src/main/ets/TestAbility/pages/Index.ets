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
import font from '@ohos.font';

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
    font.registerFont({
      familyName: 'zidingyi',
      familySrc: "./bohehaiyan.ttf"
    })
  }

  build() {
    Scroll(){
      Flex({ direction: FlexDirection.Column, alignItems: ItemAlign.Center,justifyContent:FlexAlign.Center }){
        Text('修改字重为0').font({weight: 0}).key("ArkUX_Stage_Text_Font_FontWeight_0100")
        Text('修改字重为默认值').font({weight: FontWeight.Normal}).key("ArkUX_Stage_Text_Font_FontWeight_0200")
        Text('修改字重为100').font({weight: 100}).key("ArkUX_Stage_Text_Font_FontWeight_0300")
        Text('修改字重为900').font({weight: 900}).key("ArkUX_Stage_Text_Font_FontWeight_0400")
        Text('修改字重为700').font({weight: "700"}).key("ArkUX_Stage_Text_Font_FontWeight_0500")
        Text('修改字重为FontWeight.Bolder').font({weight: FontWeight.Bolder}).key("ArkUX_Stage_Text_Font_FontWeight_0600")
        Text('修改字重为1000').font({weight: 1000}).key("ArkUX_Stage_Text_Font_FontWeight_0700")
        Text('修改字重为undefined').font({weight: undefined}).key("ArkUX_Stage_Text_Font_FontWeight_0800")
        Text('修改字重为-1').font({weight: -1}).key("ArkUX_Stage_Text_Font_FontWeight_0900")
        Text('修改字重为""').font({weight: ""}).key("ArkUX_Stage_Text_Font_FontWeight_1000")
        Text('修改字重为乱码').font({weight: "  %  "}).key("ArkUX_Stage_Text_Font_FontWeight_1100")
        Text('修改字重为FontWeight.Normal').font({weight: FontWeight.Normal,size: null}).key("ArkUX_Stage_Text_Font_FontWeight_1200")


        Text() {
          Span('修改字重为0').font({weight: 0}).key("ArkUX_Stage_Span_Font_FontWeight_0100")
        }
        Text() {
          Span('修改字重为默认值').font({weight: FontWeight.Normal}).key("ArkUX_Stage_Span_Font_FontWeight_0200")
        }
        Text() {
          Span('修改字重为100').font({weight: 100}).key("ArkUX_Stage_Span_Font_FontWeight_0300")
        }
        Text() {
          Span('修改字重为900').font({weight: 900}).key("ArkUX_Stage_Span_Font_FontWeight_0400")
        }
        Text() {
          Span('修改字重为700').font({weight: "700"}).key("ArkUX_Stage_Span_Font_FontWeight_0500")
        }
        Text() {
          Span('修改字重为FontWeight.Bolder').font({weight: FontWeight.Bolder}).key("ArkUX_Stage_Span_Font_FontWeight_0600")
        }
        Text() {
          Span('修改字重为1000').font({weight: 1000}).key("ArkUX_Stage_Span_Font_FontWeight_0700")
        }
        Text() {
          Span('修改字重为undefined').font({weight: undefined}).key("ArkUX_Stage_Span_Font_FontWeight_0800")
        }
        Text() {
          Span('修改字重为-1').font({weight: -1}).key("ArkUX_Stage_Span_Font_FontWeight_0900")
        }
        Text() {
          Span('修改字重为""').font({weight: ""}).key("ArkUX_Stage_Span_Font_FontWeight_1000")
        }
        Text() {
          Span('修改字重为乱码').font({weight: "  %  "}).key("ArkUX_Stage_Span_Font_FontWeight_1100")
        }
        Text() {
          Span('修改字重为FontWeight.Normal').font({weight: FontWeight.Normal,size: null}).key("ArkUX_Stage_Span_Font_FontWeight_1200")
        }

        Text('修改字号为0').font({size: 0}).key("ArkUX_Stage_Text_Font_FontSize_0100")
        Text('修改字号为默认值').font({size: 16}).key("ArkUX_Stage_Text_Font_FontSize_0200")
        Text('修改字号为30px').font({size: "30px"}).key("ArkUX_Stage_Text_Font_FontSize_0300")
        Text('修改字号为null').font({size: null}).key("ArkUX_Stage_Text_Font_FontSize_0400")
        Text('修改字号为undefined').font({size: undefined}).key("ArkUX_Stage_Text_Font_FontSize_0500")
        Text('修改字号为-1').font({size: -1}).key("ArkUX_Stage_Text_Font_FontSize_0600")
        Text('修改字号为""').font({size: ""}).key("ArkUX_Stage_Text_Font_FontSize_0700")
        Text('修改字号为乱码').font({size: "  %  "}).key("ArkUX_Stage_Text_Font_FontSize_0800")
        Text('修改字号为20').font({size: 20,weight: undefined}).key("ArkUX_Stage_Text_Font_FontSize_0900")

        Text() {
          Span('修改字号为0').font({size: 0}).key("ArkUX_Stage_Span_Font_FontSize_0100")
        }
        Text() {
          Span('修改字号为默认值').font({size: 16}).key("ArkUX_Stage_Span_Font_FontSize_0200")
        }
        Text() {
          Span('修改字号为30px').font({size: "30px"}).key("ArkUX_Stage_Span_Font_FontSize_0300")
        }
        Text() {
          Span('修改字号为null').font({size: null}).key("ArkUX_Stage_Span_Font_FontSize_0400")
        }
        Text() {
          Span('修改字号为undefined').font({size: undefined}).key("ArkUX_Stage_Span_Font_FontSize_0500")
        }
        Text() {
          Span('修改字号为-1').font({size: -1}).key("ArkUX_Stage_Span_Font_FontSize_0600")
        }
        Text() {
          Span('修改字号为""').font({size: ""}).key("ArkUX_Stage_Span_Font_FontSize_0700")
        }
        Text() {
          Span('修改字号为乱码').font({size: "  %  "}).key("ArkUX_Stage_Span_Font_FontSize_0800")
        }
        Text() {
          Span('修改字号为20').font({size: 20,weight: undefined}).key("ArkUX_Stage_Span_Font_FontSize_0900")
        }

        Text('修改字体样式为FontStyle.Italic').font({style: FontStyle.Italic}).key("ArkUX_Stage_Text_Font_FontStyle_0100")
        Text('修改字体样式为默认值').font({style: FontStyle.Normal}).key("ArkUX_Stage_Text_Font_FontStyle_0200")
        Text('修改字体样式为1').font({style: 1}).key("ArkUX_Stage_Text_Font_FontStyle_0300")
        Text('修改字体样式为undefined').font({style: undefined}).key("ArkUX_Stage_Text_Font_FontStyle_0400")
        Text('修改字体样式为-1').font({style: -1}).key("ArkUX_Stage_Text_Font_FontStyle_0500")
        Text('修改字体样式为FontStyle.Italic').font({style: FontStyle.Italic,weight: undefined}).key("ArkUX_Stage_Text_Font_FontStyle_0600")

        Text() {
          Span('修改字体样式为FontStyle.Italic').font({style: FontStyle.Italic}).key("ArkUX_Stage_Span_Font_FontStyle_0100")
        }
        Text() {
          Span('修改字体样式为默认值').font({style: FontStyle.Normal}).key("ArkUX_Stage_Span_Font_FontStyle_0200")
        }
        Text() {
          Span('修改字体样式为1').font({style: 1}).key("ArkUX_Stage_Span_Font_FontStyle_0300")
        }
        Text() {
          Span('修改字体样式为undefined').font({style: undefined}).key("ArkUX_Stage_Span_Font_FontStyle_0400")
        }
        Text() {
          Span('修改字体样式为-1').font({style: -1}).key("ArkUX_Stage_Span_Font_FontStyle_0500")
        }
        Text() {
          Span('修改字体样式为FontStyle.Italic').font({style: FontStyle.Italic,weight: undefined}).key("ArkUX_Stage_Span_Font_FontStyle_0600")
        }

        Text('修改字体列表为自定义的字体').font({family: 'zidingyi'}).key("ArkUX_Stage_Text_Font_FontFamily_0100")
        Text('修改字体列表为默认值').font({family: 'HarmonyOS Sans'}).key("ArkUX_Stage_Text_Font_FontFamily_0200")
        Text('修改字体列表为null').font({family: null}).key("ArkUX_Stage_Text_Font_FontFamily_0300")
        Text('修改字体列表为undefined').font({family: undefined}).key("ArkUX_Stage_Text_Font_FontFamily_0400")
        Text('修改字体列表为""').font({family: ""}).key("ArkUX_Stage_Text_Font_FontFamily_0500")
        Text('修改字体列表为HarmonyOS Sans').font({family: 'HarmonyOS Sans',weight: undefined}).key("ArkUX_Stage_Text_Font_FontFamily_0600")
        Text('修改字体列表为“Arial, sans-serif”').font({family: 'Arial, sans-serif'}).key("ArkUX_Stage_Text_Font_FontFamily_0700")

        Text() {
          Span('修改字体列表为自定义的字体').font({family: 'zidingyi'}).key("ArkUX_Stage_Span_Font_FontFamily_0100")
        }
        Text() {
          Span('修改字体列表为默认值').font({family: 'HarmonyOS Sans'}).key("ArkUX_Stage_Span_Font_FontFamily_0200")
        }
        Text() {
          Span('修改字体列表为null').font({family: null}).key("ArkUX_Stage_Span_Font_FontFamily_0300")
        }
        Text() {
          Span('修改字体列表为undefined').font({family: undefined}).key("ArkUX_Stage_Span_Font_FontFamily_0400")
        }
        Text() {
          Span('修改字体列表为""').font({family: ""}).key("ArkUX_Stage_Span_Font_FontFamily_0500")
        }
        Text() {
          Span('修改字体列表为HarmonyOS Sans').font({family: 'HarmonyOS Sans',weight: undefined}).key("ArkUX_Stage_Span_Font_FontFamily_0600")
        }
        Text() {
          Span('修改字体列表为“Arial, sans-serif”').font({family: 'Arial, sans-serif'}).key("ArkUX_Stage_Span_Font_FontFamily_0700")
        }


      }.width("100%")
    }.width("100%").height("80%")

  }
 }
