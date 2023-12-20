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
import webView from '@ohos.web.webview';
import events_emitter from '@ohos.events.emitter';

@Entry
@Component
struct WebScreenCaptureHandler {
  controller: webView.WebviewController = new webView.WebviewController();
  @State Permission: Boolean = false
  @State str: string = ""
  @State startTime: number = 0
  @State endTime: number = 0
  @State callBackId: number = 0
  @State onRequest: boolean = false
  @State buttonKey: string = '';
  @State text: string = ''

  zero() {
    this.startTime = 0
    this.endTime = 0
  }

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
    Column() {
      Row() {
        Button(this.buttonKey)
          .key(this.buttonKey)
          .onClick(async () => {
            console.info("key==>" + this.str)
            switch (this.str) {
              case "testScreenCaptureHandlerDeny001": {
                this.text = 'deny'
                this.controller.loadUrl("resource://rawfile/screenCaptureTest.html");
                await Utils.sleep(2000);
                this.controller.runJavaScript('getScreenStream()')
                break;
              }
              case "testScreenCaptureHandlerGetOrigin001": {
                this.text = 'getOrigin'
                this.controller.loadUrl("resource://rawfile/screenCaptureTest.html");
                await Utils.sleep(2000);
                this.controller.runJavaScript('getScreenStream()')
                break;
              }
              case "testScreenCaptureHandlerGrant001": {
                this.text = 'grant'
                this.controller.loadUrl("resource://rawfile/screenCaptureTest.html");
                await Utils.sleep(2000);
                this.controller.runJavaScript('getScreenStream()')
                break;
              }
            }
          })
      }

      Web({ src: $rawfile("indexJru.html"), controller: this.controller })
        .javaScriptAccess(true)
        .geolocationAccess(true)
        .databaseAccess(true)
        .onScreenCaptureRequest(async (event) => {
          console.log("event : >>>" + event)
          this.startTime = Utils.getSystemTime()
          if (event) {
            switch (this.text) {
              case 'deny': {
                event.handler.deny()
                this.endTime = Utils.getSystemTime()
                Utils.emitEvent((this.endTime - this.startTime), this.callBackId)
                Utils.consoleCostTime('ScreenCaptureRequest.deny()', this.startTime, this.endTime)
                this.zero()
                break
              }
              case 'getOrigin': {
                event.handler.getOrigin()
                this.endTime = Utils.getSystemTime()
                Utils.emitEvent((this.endTime - this.startTime), this.callBackId)
                Utils.consoleCostTime('ScreenCaptureRequest.getOrigin()', this.startTime, this.endTime)
                this.zero()
                break
              }
              case 'grant': {
                event.handler.grant({ captureMode: WebCaptureMode.HOME_SCREEN })
                this.endTime = Utils.getSystemTime()
                Utils.emitEvent((this.endTime - this.startTime), this.callBackId)
                Utils.consoleCostTime('ScreenCaptureRequest.grant()', this.startTime, this.endTime)
                this.zero()
                break
              }
            }
          }
        })
    }
  }
}
