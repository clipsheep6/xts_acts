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

import attrsManager from '../../common/AttrsManager';
import router from '@ohos.router'

/**
 * Test page of common attribute: align
 */
@Entry
@Component
struct AlignPage {
  @State _align: Alignment = Alignment.Center;
  @State targetView: string = router.getParams() ? router.getParams()['view']['targetView'] : ''
  @State componentKey: string = router.getParams() ? router.getParams()['view']['componentKey'] : ''

  onPageShow() {
    console.info('[AlignPage] page show called ')

    //Register data change call back.
    attrsManager.registerDataChange(value => this._align = value)
  }

  /**
   * Set common style.
   */
  @Styles commonStyle(){
    .align(this._align)
    .key(this.componentKey)
    .width('50%')
    .height('50%')
    .backgroundColor(Color.Green)
  }

  build() {
    Row() {
      if (this.targetView == 'Stack') {
        Stack() {
          Text('Stack').fontColor(Color.White)
        }.commonStyle()
      } else if (this.targetView == 'Button') {
        Button('button1').commonStyle()
      } else if (this.targetView == 'Marquee') {
        Marquee({ start: true, step: 50, src: 'Running Marquee starts rolling' })
          .fontWeight(700).fontColor(Color.White).fontSize(48).commonStyle()
      } else if (this.targetView == 'StepperItem') {
        Stepper() {
          StepperItem() {
            Button('StepperItem')
          }.commonStyle()
        }
        .width('100%')
        .height('70%')
      } else if (this.targetView == 'Text') {
        Text('text').fontColor(Color.White).fontSize(30).commonStyle()
      } else if (this.targetView == 'TextArea') {
        TextArea({ text: 'TextArea' }).commonStyle()
      } else if (this.targetView == 'TextInput') {
        TextInput({ placeholder: 'TextInput' }).commonStyle()
      }
    }.width('100%').height('100%').backgroundColor(Color.Pink)
  }
}