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
struct WebAttributeOnFullScreenEnterTest {
  controller: webView.WebviewController = new webView.WebviewController();
  @State str: string = ""
  @State startTime: number = 0
  @State endTime: number = 0
  @State testing: boolean = false;
  @State callBackId: number = 0;
  @State strFunctionName: string = ""
  @State buttonKey: string = '';
  handler?: FullScreenExitHandler
  @State javaScriptAccess: boolean = true;
  @State fileAccess: boolean = true;
  @State domStorageAccess: boolean = false;
  @State imageAccess: boolean = true;
  @State onlineImageAccess: boolean = true;
  @State databaseAccess: boolean = true;
  @State onFullScreenEnterCalled: boolean = false;

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
              case "testWebAttributeOnFullScreenEnter001": {
                try {
                  await Utils.clickComponent('OnFullScreenEnterTestWeb');
                } catch (error) {
                  console.error(`ErrorCode: ${error.code},  Message: ${error.message}`);
                }
                break;
              }
            }
          })
      }
      .width('100%')

      Web({ src: $rawfile('fullScreenTest.html'), controller: this.controller })
        .key('OnFullScreenEnterTestWeb')
        .javaScriptAccess(this.javaScriptAccess)
        .fileAccess(this.fileAccess)
        .imageAccess(this.imageAccess)
        .domStorageAccess(this.domStorageAccess)
        .onlineImageAccess(this.onlineImageAccess)
        .databaseAccess(this.databaseAccess)
        .onConsole((event) => {
          if (event) {
            if (event.message.getMessage() == "console fullScreen startTime") {
              this.testing = true
              this.strFunctionName = 'WebAttribute.onFullScreenEnter';
              this.startTime = Utils.getSystemTime();
            }
          }
          return false
        })
        .onFullScreenEnter((event) => {
          if (this.testing) {
            console.log("onFullScreenEnter...")
            this.handler = event.handler
            console.log("this.handler: " + JSON.stringify(this.handler))
            this.testing = false
            this.endTime = Utils.getSystemTime()
            Utils.emitEvent(this.endTime - this.startTime, this.callBackId)
            Utils.consoleCostTime(this.strFunctionName, this.startTime, this.endTime)
            this.onFullScreenEnterCalled = true
          }
        })
    }
    .height('100%')
  }
}