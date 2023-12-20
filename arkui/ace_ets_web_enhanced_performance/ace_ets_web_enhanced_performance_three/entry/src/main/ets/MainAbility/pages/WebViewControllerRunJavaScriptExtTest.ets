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
struct WebViewControllerRunJavaScriptExtTest {
  controller: webView.WebviewController = new webView.WebviewController();
  @State str: string = ""
  @State startTime: number = 0
  @State endTime: number = 0
  @State testing: boolean = false;
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
              case 'testWebViewControllerRunJavaScriptExt001': {
                try {
                  this.testing = true
                  this.controller.loadUrl("resource://rawfile/getJsMessageExt.html");
                  await Utils.sleep(2000);
                  this.startTime = Utils.getSystemTime()
                  this.controller.runJavaScriptExt(
                    'getNumber()',
                    (error, result) => {
                      if (error) {
                        let e: business_error.BusinessError = error as business_error.BusinessError;
                        console.error(`ErrorCode: ${e.code},  Message: ${e.message}`);
                      }
                      if (result) {
                        try {
                          this.endTime = Utils.getSystemTime()
                          Utils.emitEvent(this.endTime - this.startTime, this.callBackId)
                          Utils.consoleCostTime('WebViewController.runJavaScriptExt', this.startTime, this.endTime)
                        }
                        catch (resError) {
                          let e: business_error.BusinessError = resError as business_error.BusinessError;
                          console.error(`ErrorCode: ${e.code},  Message: ${e.message}`);
                        }
                      }
                    });
                } catch (error) {
                  console.error(`ErrorCode: ${error.code},  Message: ${error.message}`);
                }
                break;
              }
              case 'testWebViewControllerRunJavaScriptExt002': {
                try {
                  this.testing = true
                  this.controller.loadUrl("resource://rawfile/getJsMessageExt.html");
                  await Utils.sleep(2000);
                  this.startTime = Utils.getSystemTime()
                  this.controller.runJavaScriptExt('getNumber()')
                    .then(() => {
                      try {
                        this.endTime = Utils.getSystemTime()
                        Utils.emitEvent(this.endTime - this.startTime, this.callBackId)
                        Utils.consoleCostTime('WebViewController.runJavaScriptExt', this.startTime, this.endTime)
                      }
                      catch (resError) {
                        let e: business_error.BusinessError = resError as business_error.BusinessError;
                        console.error(`ErrorCode: ${e.code},  Message: ${e.message}`);
                      }
                    })
                    .catch((error: business_error.BusinessError) => {
                      console.error("error: " + error);
                    })
                } catch (error) {
                  console.error(`ErrorCode: ${error.code},  Message: ${error.message}`);
                }
                break;
              }
            }
          })

        Web({ src: '', controller: this.controller })
          .javaScriptAccess(true)
          .geolocationAccess(true)
          .databaseAccess(true)
      }
      .width('100%')
    }
    .height('100%')
  }
}