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

import webView from '@ohos.web.webview';
import Utils from '../../test/Utils';
import events_emitter from '@ohos.events.emitter';

@Entry
@Component
struct WebFullScreenExitHandlerExitFullScreenTest {
  controller: webView.WebviewController = new webView.WebviewController();
  @State str: string = ""
  @State startTime: number = 0
  @State endTime: number = 0
  @State callBackId: number = 0;
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
              case 'testWebFullScreenExitHandlerExitFullScreen001': {
                try {
                  await Utils.clickComponent('exitFullScreenTestWeb');
                } catch (error) {
                  console.error(`ErrorCode: ${error.code},  Message: ${error.message}`);
                }
                break;
              }
            }
          })

        Web({ src: $rawfile('fullScreenTest.html'), controller: this.controller })
          .key('exitFullScreenTestWeb')
          .javaScriptAccess(true)
          .geolocationAccess(true)
          .databaseAccess(true)
          .onFullScreenEnter((event) => {
            console.log("onFullScreenEnter...")
            this.startTime = Utils.getSystemTime()
            event.handler.exitFullScreen()
            this.endTime = Utils.getSystemTime()
            Utils.emitEvent(this.endTime - this.startTime, this.callBackId)
            Utils.consoleCostTime('FullScreenExitHandler.exitFullScreen()', this.startTime, this.endTime)
          })
      }
      .width('100%')
    }

    .height('100%')
  }
}