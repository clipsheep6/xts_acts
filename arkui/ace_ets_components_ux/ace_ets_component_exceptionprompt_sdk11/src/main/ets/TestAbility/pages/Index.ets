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

import { ExceptionPrompt, PromptOptions, MarginType } from '@ohos.arkui.advanced.ExceptionPrompt'

@Entry
@Component
struct Index {
  @State ButtomText: string = ''
  @State MAP_HEIGHT: string = '30%'
  @State duration: number = 2500
  @State tips: string = ''
  @State actionText: string = ''
  controller: TextInputController = new TextInputController()
  @State options: PromptOptions = {
    icon: $r('sys.media.ohos_ic_public_fail'),
    tip: '',
    marginType: MarginType.DEFAULT_MARGIN,
    marginTop: 80,
    isShown: true
  }

  build() {
    Column() {
      ExceptionPrompt({
        options: this.options,
        onTipClick: () => {
          animateTo({ duration: 800 }, () => {
            this.ButtomText = '正在连接中'
          })
        },
        onActionTextClick: () => {
          animateTo({ duration: 1500 }, () => {
            this.ButtomText = '无网络情况，请设置网络'
          })
        },
      })
      TextInput({ placeholder: '请输入自定义的提示内容...', controller: this.controller, })
        .placeholderColor(Color.Grey)
        .placeholderFont({ size: 18, weight: 400 })
        .caretColor(Color.Blue)
        .width('90%')
        .height(50)
        .margin({ top: 150, bottom: 15 })
        .fontSize(14)
        .fontColor(Color.Black)
        .onChange((value1: string) => {
          this.tips = value1
          this.options.tip = this.tips
        })
        .key('tip_input')
      TextInput({ placeholder: '自定义右侧图标按钮文字...', controller: this.controller, })
        .placeholderColor(Color.Grey)
        .placeholderFont({ size: 18, weight: 400 })
        .caretColor(Color.Blue)
        .width('90%')
        .height(50)
        .fontSize(14)
        .fontColor(Color.Black)
        .onChange((value2: string) => {
          this.actionText = value2
          this.options.actionText = this.actionText
        })
        .key('actionText_input')
      Column() {
        Flex({ justifyContent: FlexAlign.SpaceAround }) {
          Row() {
            Radio({ value: 'Radio1', group: 'radioGroup1' })
              .checked(true)
              .width(30)
              .height(30)
              .onChange((isChecked: boolean) => {
                if (isChecked) {
                  this.options.marginType = MarginType.DEFAULT_MARGIN //默认边距
                }
              })
              .key('DEFAULT_MARGIN')
            Text("默认边距")
          }
          Row() {
            Radio({ value: 'Radio2', group: 'radioGroup1' })
              .width(30)
              .height(30)
              .onChange((isChecked: boolean) => {
                if (isChecked) {
                  this.options.marginType = MarginType.FIT_MARGIN //可适配边距
                }
              })
              .key('FIT_MARGIN')
            Text("可适配边距")
          }
        }
      }
      .width('90%')
      Column() {
        Flex({ justifyContent: FlexAlign.SpaceAround }) {
          Row() {
            Radio({ value: 'Radio1', group: 'radioGroup3' })
              .checked(true)
              .width(30)
              .height(30)
              .onChange((isChecked: boolean) => {
                if (isChecked) {
                  this.options.tip = '网络未连接' //第一种状态提示
                }
              })
              .key('first_status')
            Text("第一种状态")
          }
          Row() {
            Radio({ value: 'Radio2', group: 'radioGroup3' })

              .width(30)
              .height(30)
              .onChange((isChecked: boolean) => {
                if (isChecked) {
                  this.options.tip = '网络连接不稳定，请点击重试' //第二种状态提示
                }
              })
              .key('second_status')
            Text("第二种状态")
          }
        }
        Column() {
          Flex({ justifyContent: FlexAlign.SpaceAround }) {
            Row() {
              Radio({ value: 'Radio3', group: 'radioGroup3' })
                .width(30)
                .height(30)
                .onChange((isChecked: boolean) => {
                  if (isChecked) {
                    this.options.tip = '无法连接到服务器，请点击重试' //第三种状态提示
                  }
                })
                .key('third_status')
              Text("第三种状态")
            }
            Row() {
              Radio({ value: 'Radio4', group: 'radioGroup3' })
                .width(30)
                .height(30)
                .onChange((isChecked: boolean) => {
                  if (isChecked) {
                    this.options.tip = '无法获取位置，请点击重试' //第四种状态提示
                  }
                })
                .key('fourth_status')
              Text("第四种状态")
            }
          }
        }
      }
      .width('90%')
      Button('有右侧图标按钮')
        .width('90%')
        .height(30)
        .fontSize(18)
        .padding(3)
        .onClick(() => {
          console.log('yaa:', JSON.stringify(this.tips))
          this.options.tip = this.tips
          this.options.actionText = '设置网络'
          this.options.isShown = true
        })
        .key('icon_button')
      Button('自定义提示内容')
        .padding(3)
        .width('90%')
        .height(30)
        .margin({top:15,bottom:15})
        .fontSize(18)
        .onClick(() => {
          this.options.tip = this.tips
          this.options.isShown = true
          this.options.actionText = ''
        })
        .key('fit_content_button')
      Button('隐藏提示')
        .padding(3)
        .width('90%')
        .height(30)
        .fontSize(18)
        .onClick(() => {
          this.options.tip = ''
          this.options.isShown = false
        })
        .key('hide_button')
      if (this.ButtomText) {
        Flex({ direction: FlexDirection.Column, alignItems: ItemAlign.Center }) {
          // 异常提示
          Text(this.ButtomText)
            .width('80%')
            .height(40)
            .margin({ top: 10, bottom: 20 })
            .textAlign(TextAlign.Center)
            .borderRadius(20)
            .border({ width: 1, style: BorderStyle.Solid, color: '#ccc' })
            .fontWeight(700)
            .fontSize(24)
        }
        .transition({ type: TransitionType.Insert, opacity: 0, translate: { x: 0, y: 0 } })
        .transition({ type: TransitionType.Insert, opacity: 0, translate: { x: 0, y: 0 } })
      }
    }
    .height('100%')
    .width('100%')
  }
}
