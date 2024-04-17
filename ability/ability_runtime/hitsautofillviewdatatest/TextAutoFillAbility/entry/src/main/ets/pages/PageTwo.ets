/*
 * Copyright (c) 2024 Huawei Device Co., Ltd.
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


@Entry
@Component
struct Index {
  @State inputTxt: string = ''

  build() {
    Column() {
      Column() {
        Text("AutoFill 演示应用")
          .fontSize(30)
          .fontWeight(FontWeight.Bold)
      }
      .margin({ bottom: 10 })

      Row() {
        Text('PhoneCountryCode')
          .margin(10)
          .fontSize(12)
          .width('30%')

        TextInput({ placeholder: 'Please enter Phone country code', text: this.inputTxt })
          .contentType(ContentType.PHONE_COUNTRY_CODE)
          .height(px2vp(60))
          .width(px2vp(350))
          .fontSize(13)
          .placeholderFont({ size: 12 })
          .enableAutoFill(true)
          .onFocus(() => {
            console.info('TextInput focus.')
          })
          .onAreaChange((oldValue: Area, newValue: Area) => {
            console.info(`Ace: on area change, value is ${JSON.stringify(newValue.globalPosition)}`)
          })
          .id("PHONE_COUNTRY_CODE")
      }
      .margin({ top: 15 })

      Row() {
        Text('FullPhoneNumber')
          .margin(10)
          .fontSize(12)
          .width('30%')

        TextInput({ placeholder: 'Please enter Full phone number', text: this.inputTxt })
          .contentType(ContentType.FULL_PHONE_NUMBER)
          .height(px2vp(60))
          .width(px2vp(350))
          .fontSize(13)
          .placeholderFont({ size: 12 })
          .enableAutoFill(true)
          .onFocus(() => {
            console.info('TextInput focus.')
          })
          .onAreaChange((oldValue: Area, newValue: Area) => {
            console.info(`Ace: on area change, value is ${JSON.stringify(newValue.globalPosition)}`)
          })
          .id("FULL_PHONE_NUMBER")
      }
      .margin({ top: 15 })

      Flex({ justifyContent: FlexAlign.Center, alignItems: ItemAlign.Center }) {
        Text('EmailAddress')
          .margin(10)
          .fontSize(12)
          .width('30%')

        TextInput({ placeholder: 'Please enter Email address', text: this.inputTxt })
          .contentType(ContentType.EMAIL_ADDRESS)
          .height(px2vp(60))
          .width(px2vp(350))
          .fontSize(13)
          .placeholderFont({ size: 12 })
          .enableAutoFill(true)
          .onFocus(() => {
            console.info('TextInput focus.')
          })
          .onAreaChange((oldValue: Area, newValue: Area) => {
            console.info(`Ace: on area change, value is ${JSON.stringify(newValue.globalPosition)}`)
          })
          .id("EMAIL_ADDRESS")
      }
      .margin({ top: 15 })

      Row() {
        Text('BankCardNumber')
          .margin(10)
          .fontSize(12)
          .width('30%')

        TextInput({ placeholder: 'Please enter Bank card number', text: this.inputTxt })
          .contentType(ContentType.BANK_CARD_NUMBER)
          .height(px2vp(60))
          .width(px2vp(350))
          .fontSize(13)
          .placeholderFont({ size: 12 })
          .enableAutoFill(true)
          .onFocus(() => {
            console.info('TextInput focus.')
          })
          .onAreaChange((oldValue: Area, newValue: Area) => {
            console.info(`Ace: on area change, value is ${JSON.stringify(newValue.globalPosition)}`)
          })
          .id("BANK_CARD_NUMBER")
      }
      .margin({ top: 15 })

      Row() {
        Text('IDCardNumber')
          .margin(10)
          .fontSize(12)
          .width('30%')

        TextInput({ placeholder: 'Please enter ID card number', text: this.inputTxt })
          .contentType(ContentType.ID_CARD_NUMBER)
          .height(px2vp(60))
          .width(px2vp(350))
          .fontSize(13)
          .placeholderFont({ size: 12 })
          .enableAutoFill(true)
          .onFocus(() => {
            console.info('TextInput focus.')
          })
          .onAreaChange((oldValue: Area, newValue: Area) => {
            console.info(`Ace: on area change, value is ${JSON.stringify(newValue.globalPosition)}`)
          })
          .id("ID_CARD_NUMBER")
      }
      .margin({ top: 15 })

    }.width('100%')
  }
}