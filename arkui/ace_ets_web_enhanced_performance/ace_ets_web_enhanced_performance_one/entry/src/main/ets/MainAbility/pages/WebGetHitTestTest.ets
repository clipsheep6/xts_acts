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

import Utils from '../../test/Utils';
import events_emitter from '@ohos.events.emitter';
import business_error from '@ohos.base';

@Entry
@Component
struct WebGetHitTestTest {
  controller: WebController = new WebController()
  @State str: string = ""
  @State startTime: number = 0
  @State endTime: number = 0
  @State testing: boolean = false;
  @State callBackId: number = 0;
  @State hitType: number = -1
  @State buttonKey: string = '';

  onPageShow() {
    Utils.registerEventPage((eventData: events_emitter.EventData) => {
      if (eventData.data) {
        this.str = eventData.data.CASE_NAME;
        this.callBackId = eventData.data.CALL_BACK_ID;
        this.buttonKey = eventData.data.BUTTON_KEY
      }
    })
  }

  onPageHide() {
    Utils.unRegisterEventPage()
  }

  build() {
    Row() {
      Column() {
        Button(this.buttonKey)
          .key(this.buttonKey)
          .onClick(async () => {
            console.info("key==>" + this.str)
            switch (this.str) {
              case 'testGetHitTest001': {
                try {
                  this.testing = true
                  this.controller.loadUrl({ url: 'resource://rawfile/hitTypeEditText.html' })
                  await Utils.clickComponent('WebControllerHitTestWebView')
                } catch (error) {
                  console.error(`ErrorCode: ${error.code},  Message: ${error.message}`);
                }
                break;
              }
            }
          })

        Web({ src: $rawfile('index.html'), controller: this.controller })
          .key('WebControllerHitTestWebView')
          .javaScriptAccess(true)
          .onClick(() => {
            try {
              this.testing = false
              console.log(`onPageEnd ==> WebController.getHitTest:${this.callBackId}`)
              this.startTime = Utils.getSystemTime()
              this.hitType = this.controller.getHitTest()
              console.log("hitType: " + this.hitType)
              this.endTime = Utils.getSystemTime()
              Utils.emitEvent(this.endTime - this.startTime, this.callBackId)
              Utils.consoleCostTime('WebController.getHitTest', this.startTime, this.endTime)
            } catch (error) {
              let e: business_error.BusinessError = error as business_error.BusinessError;
              console.error(`ErrorCode: ${e.code},  Message: ${e.message}`);
            }
          })
      }
      .width('100%')
    }
    .height('100%')
  }
}