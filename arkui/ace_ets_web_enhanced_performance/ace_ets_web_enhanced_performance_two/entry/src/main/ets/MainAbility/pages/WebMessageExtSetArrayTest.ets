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
struct WebMessageExtSetArrayTest {
  controller: webView.WebviewController = new webView.WebviewController();
  nativePort: webView.WebMessagePort | null = null;
  message: webView.WebMessageExt = new webView.WebMessageExt();
  @State str: string = ""
  @State buttonKey: string = '';
  @State startTime: number = 0
  @State endTime: number = 0
  @State testing: boolean = false;
  @State callBackId: number = 0;
  @State javaScriptAccess: boolean = true;
  @State databaseAccess: boolean = true;
  @State ports: webView.WebMessagePort[] = [];
  @State listening_port: number = 0
  @State listening_flag: number = 0

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

              case "testWebMessageExtSetArray001": {
                try {
                  let fruits = ["apple"];
                  this.message.setType(webView.WebMessageType.ARRAY);
                  this.startTime = Utils.getSystemTime()
                  this.message.setArray(fruits);
                  this.endTime = Utils.getSystemTime()
                  Utils.emitEvent(this.endTime - this.startTime, this.callBackId)
                  Utils.consoleCostTime('WebMessageExt.setArray()', this.startTime, this.endTime)
                } catch (error) {
                  console.error(`ErrorCode: ${error.code},  Message: ${error.message}`);
                }
                break;
              }

            }
          })

        Web({ src: $rawfile('onMessageEventExt.html'), controller: this.controller })
          .javaScriptAccess(this.javaScriptAccess)
          .onPageEnd((event) => {
            if (event) {
              console.log('url:' + event.url)
            }
          })
      }
      .width('100%')
    }
    .height('100%')
  }
}