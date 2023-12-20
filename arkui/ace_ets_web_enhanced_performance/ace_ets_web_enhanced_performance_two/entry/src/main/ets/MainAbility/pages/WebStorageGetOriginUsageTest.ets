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
import business_error from '@ohos.base';

@Entry
@Component
struct WebStorageGetOriginUsageTest {
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
  @State origin: string = "resource://rawfile/";

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

              case "testWebStorageGetOriginUsage001": {
                try {
                  this.startTime = Utils.getSystemTime()
                  webView.WebStorage.getOriginUsage(this.origin, (error, usage) => {
                    if (error) {
                      console.log('error: ' + JSON.stringify(error));
                      return;
                    }
                    this.endTime = Utils.getSystemTime()
                    Utils.emitEvent(this.endTime - this.startTime, this.callBackId)
                    Utils.consoleCostTime('WebStorage.getOriginUsage()', this.startTime, this.endTime)
                    console.log('usage: ' + usage);
                  })
                } catch (error) {
                  let e: business_error.BusinessError = error as business_error.BusinessError;
                  console.error(`ErrorCode: ${e.code},  Message: ${e.message}`);
                }
                break;
              }

              case "testWebStorageGetOriginUsage002": {
                try {
                  this.startTime = Utils.getSystemTime()
                  webView.WebStorage.getOriginUsage(this.origin)
                    .then(usage => {
                      this.endTime = Utils.getSystemTime()
                      Utils.emitEvent(this.endTime - this.startTime, this.callBackId)
                      Utils.consoleCostTime('WebStorage.getOriginUsage()', this.startTime, this.endTime)
                      console.log('usage: ' + usage);
                    })
                    .catch((e: business_error.BusinessError) => {
                      console.log('error: ' + JSON.stringify(e));
                    })
                } catch (error) {
                  let e: business_error.BusinessError = error as business_error.BusinessError;
                  console.error(`ErrorCode: ${e.code},  Message: ${e.message}`);
                }
                break;
              }

            }
          })

        Web({ src: $rawfile('webStorage.html'), controller: this.controller })
          .javaScriptAccess(this.javaScriptAccess)
          .onPageEnd((event) => {
            if (event) {
              console.log('url:' + event.url)
            }
          })
          .databaseAccess(this.databaseAccess)
      }
      .width('100%')
    }
    .height('100%')
  }
}