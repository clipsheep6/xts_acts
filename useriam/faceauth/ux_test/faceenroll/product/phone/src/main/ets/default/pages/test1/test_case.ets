/*
 * Copyright (c) 2021 Huawei Device Co., Ltd.
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

import router from '@system.router';
import mFaceModel from "../../modelTest_2D.ets";
import Constants from "../../common/constant.ets"

async function route_enroll_test_100() {
  let options = {
    uri: 'pages/test1/enroll_test_100'
  }
  try {
    await router.push(options)
  } catch (err) {
    console.error(`fail callback, code: ${err.code}, msg: ${err.msg}`)
  }
}

async function route_enroll_test_200() {
  let options = {
    uri: 'pages/test1/enroll_test_200'
  }
  try {
    await router.push(options)
  } catch (err) {
    console.error(`fail callback, code: ${err.code}, msg: ${err.msg}`)
  }
}

async function route_enroll_test_300() {
  let options = {
    uri: 'pages/test1/enroll_test_300'
  }
  try {
    await router.push(options)
  } catch (err) {
    console.error(`fail callback, code: ${err.code}, msg: ${err.msg}`)
  }
}

async function route_enroll_test_400() {
  let options = {
    uri: 'pages/test1/enroll_test_400'
  }
  try {
    await router.push(options)
  } catch (err) {
    console.error(`fail callback, code: ${err.code}, msg: ${err.msg}`)
  }
}

async function route_enroll_test_500() {
  let options = {
    uri: 'pages/test1/enroll_test_500'
  }
  try {
    await router.push(options)
  } catch (err) {
    console.error(`fail callback, code: ${err.code}, msg: ${err.msg}`)
  }
}

@Entry
@Component
struct Testcase {
  private aboutToAppear(): void  {
    mFaceModel.init()
  }
  @State editFlag: boolean = false

  build() {

    Flex({ direction: FlexDirection.Column, alignItems: ItemAlign.Center }) {
      Column() {
        List({ space: Constants.SPACE, initialIndex: Constants.INITIAL_INDEX }) {
          ListItem() {
            Text('FaceEnroll_UX_0' + Constants.TIMEOUT_100)
              .width('100%').height(Constants.HEIGHT_LIST).fontSize(Constants.FONTSIZE_16)
              .textAlign(TextAlign.Center).borderRadius(Constants.BORDER_RADIUS).backgroundColor(0xFFFFFF)
          }.editable(true).onClick(()=>{
            route_enroll_test_100()
          })

          ListItem() {
            Text('FaceEnroll_UX_0' + Constants.TIMEOUT_200)
              .width('100%').height(Constants.HEIGHT_LIST).fontSize(Constants.FONTSIZE_16)
              .textAlign(TextAlign.Center).borderRadius(Constants.BORDER_RADIUS).backgroundColor(0xFFFFFF)
          }.editable(true).onClick(()=>{
            route_enroll_test_200()
          })

          ListItem() {
            Text('FaceEnroll_UX_0' + Constants.TIMEOUT_300)
              .width('100%').height(Constants.HEIGHT_LIST).fontSize(Constants.FONTSIZE_16)
              .textAlign(TextAlign.Center).borderRadius(Constants.BORDER_RADIUS).backgroundColor(0xFFFFFF)
          }.editable(true).onClick(()=>{
            route_enroll_test_300()
          })

          ListItem() {
            Text('FaceEnroll_UX_0' + Constants.TIMEOUT_400)
              .width('100%').height(Constants.HEIGHT_LIST).fontSize(Constants.FONTSIZE_16)
              .textAlign(TextAlign.Center).borderRadius(Constants.BORDER_RADIUS).backgroundColor(0xFFFFFF)
          }.editable(true).onClick(()=>{
            route_enroll_test_400()
          })

          ListItem() {
            Text('FaceEnroll_UX_0' + Constants.TIMEOUT_500)
              .width('100%').height(Constants.HEIGHT_LIST).fontSize(Constants.FONTSIZE_16)
              .textAlign(TextAlign.Center).borderRadius(Constants.BORDER_RADIUS).backgroundColor(0xFFFFFF)
          }.editable(true).onClick(()=>{
            route_enroll_test_500()
          })
        }
        .listDirection(Axis.Vertical)
        .divider({ strokeWidth: Constants.STROKE_WIDTH, color: 0xFFFFFF, startMargin: Constants.START_MARGIN, endMargin: Constants.END_MARGIN })
        .edgeEffect(EdgeEffect.None)
        .chainAnimation(false)
        .onScrollIndex((firstIndex: number, lastIndex: number) => {
          console.info('first' + firstIndex)
          console.info('last' + lastIndex)
        })
        .editMode(this.editFlag)
        .onItemDelete((index: number) => {
          this.editFlag = false
          return true
        }).width('90%')
      }.width('100%')
    }
    .width('100%')
    .height('100%').backgroundColor(0xDCDCDC).padding({ top: 5 })
  }
}