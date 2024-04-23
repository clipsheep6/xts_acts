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

import router from '@ohos.router';

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
        Text('FullStreetAddress')
          .margin(10)
          .fontSize(12)
          .width('30%')

        TextInput({ placeholder: 'Please enter Full street address', text: this.inputTxt })
          .contentType(ContentType.FULL_STREET_ADDRESS)
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
          .id("FULL_STREET_ADDRESS")
      }
      .margin({ top: 15 })

      Row() {
        Text('HouseNumber')
          .margin(10)
          .fontSize(12)
          .width('30%')

        TextInput({ placeholder: 'Please enter House number', text: this.inputTxt })
          .contentType(ContentType.HOUSE_NUMBER)
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
          .id("HOUSE_NUMBER")
      }
      .margin({ top: 15 })

      Row() {
        Text('DistrictAddress')
          .margin(10)
          .fontSize(12)
          .width('30%')

        TextInput({ placeholder: 'Please enter District address', text: this.inputTxt })
          .contentType(ContentType.DISTRICT_ADDRESS)
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
          .id("DISTRICT_ADDRESS")
      }
      .margin({ top: 15 })

      Row() {
        Text('CityAddress')
          .margin(10)
          .fontSize(12)
          .width('30%')

        TextInput({ placeholder: 'Please enter City address', text: this.inputTxt })
          .contentType(ContentType.CITY_ADDRESS)
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
          .id("CITY_ADDRESS")
      }
      .margin({ top: 15 })

      Row() {
        Text('ProvinceAddress')
          .margin(10)
          .fontSize(12)
          .width('30%')

        TextInput({ placeholder: 'Please enter Province address', text: this.inputTxt })
          .contentType(ContentType.PROVINCE_ADDRESS)
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
          .id("PROVINCE_ADDRESS")
      }
      .margin({ top: 15 })

      Row() {
        Text('CountryAddress')
          .margin(10)
          .fontSize(12)
          .width('30%')

        TextInput({ placeholder: 'Please enter Country address', text: this.inputTxt })
          .contentType(ContentType.COUNTRY_ADDRESS)
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
          .id("COUNTRY_ADDRESS")
      }
      .margin({ top: 15 })

      Row() {
        Text('PersonFullName')
          .margin(10)
          .fontSize(12)
          .width('30%')

        TextInput({ placeholder: 'Please enter Person full name', text: this.inputTxt })
          .contentType(ContentType.PERSON_FULL_NAME)
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
          .id("PERSON_FULL_NAME")
      }
      .margin({ top: 15 })

      Row() {
        Text('PersonLastName')
          .margin(10)
          .fontSize(12)
          .width('30%')

        TextInput({ placeholder: 'Please enter Person last name', text: this.inputTxt })
          .contentType(ContentType.PERSON_LAST_NAME)
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
          .id("PERSON_LAST_NAME")
      }
      .margin({ top: 15 })

      Row() {
        Text('PersonFirstName')
          .margin(10)
          .fontSize(12)
          .width('30%')

        TextInput({ placeholder: 'Please enter Person First name', text: this.inputTxt })
          .contentType(ContentType.PERSON_FIRST_NAME)
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
          .id("PERSON_FIRST_NAME")
      }
      .margin({ top: 15 })

      Row() {
        Text('PhoneNumber')
          .margin(10)
          .fontSize(12)
          .width('30%')

        TextInput({ placeholder: 'Please enter Phone number', text: this.inputTxt })
          .contentType(ContentType.PHONE_NUMBER)
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
          .id("PHONE_NUMBER")
      }
      .margin({ top: 15 })

      Row() {
        Button('Next Page')
          .type(ButtonType.Capsule)
          .backgroundColor('#CD853F')
          .id('nextPage')
          .onClick(() => {
            router.pushUrl({ url: 'pages/PageTwo' })
          })
      }
      .margin({ top: 20 })
    }.width('100%')
  }
}