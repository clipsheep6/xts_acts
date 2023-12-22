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
struct WebViewControllerStoreWebArchiveTest {
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
              case 'testWebViewControllerStoreWebArchive001': {
                try {
                  this.controller.loadUrl("resource://rawfile/index.html");
                  this.startTime = Utils.getSystemTime()
                  this.controller.storeWebArchive("/data/storage/el2/base/", true, (error, filename) => {
                    if (error) {
                      console.info(`save web archive error: ` + JSON.stringify(error))
                      return;
                    }
                    if (filename != null) {
                      console.info(`save web archive success: ${filename}`)
                      this.endTime = Utils.getSystemTime()
                      Utils.emitEvent(this.endTime - this.startTime, this.callBackId)
                      Utils.consoleCostTime('WebViewController.storeWebArchive', this.startTime, this.endTime)
                    }
                  });
                } catch (error) {
                  let e:business_error.BusinessError = error as business_error.BusinessError;
                  console.error(`ErrorCode: ${e.code},  Message: ${e.message}`);
                }
                break;
              }
              case 'testWebViewControllerStoreWebArchive002': {
                try {
                  this.controller.loadUrl("resource://rawfile/second.html");
                  this.startTime = Utils.getSystemTime()
                  this.controller.storeWebArchive("/data/storage/el2/base/", true)
                    .then(filename => {
                      if (filename != null) {
                        console.info(`save web archive success: ${filename}`)
                        this.endTime = Utils.getSystemTime()
                        Utils.emitEvent(this.endTime - this.startTime, this.callBackId)
                        Utils.consoleCostTime('WebViewController.storeWebArchive', this.startTime, this.endTime)
                      }
                    })
                    .catch((error: business_error.BusinessError) => {
                      console.log('error: ' + JSON.stringify(error));
                    })
                } catch (error) {
                  let e:business_error.BusinessError = error as business_error.BusinessError;
                  console.error(`ErrorCode: ${e.code},  Message: ${e.message}`);
                }
                break;
              }
              case 'testWebViewControllerStoreWebArchive003': {
                try {
                  this.controller.loadUrl("resource://rawfile/index.html");
                  this.startTime = Utils.getSystemTime()
                  this.controller.storeWebArchive("/data/storage/el2/base/index.html.mht", false, (error, filename) => {
                    if (error) {
                      console.info(`save web archive error: ` + JSON.stringify(error))
                      return;
                    }
                    if (filename != null) {
                      console.info(`save web archive success: ${filename}`)
                      this.endTime = Utils.getSystemTime()
                      Utils.emitEvent(this.endTime - this.startTime, this.callBackId)
                      Utils.consoleCostTime('WebViewController.storeWebArchive', this.startTime, this.endTime)
                    }
                  });
                } catch (error) {
                  let e:business_error.BusinessError = error as business_error.BusinessError;
                  console.error(`ErrorCode: ${e.code},  Message: ${e.message}`);
                }
                break;
              }
              case 'testWebViewControllerStoreWebArchive004': {
                try {
                  this.controller.loadUrl("resource://rawfile/index.html");
                  this.startTime = Utils.getSystemTime()
                  this.controller.storeWebArchive("/data/storage/el2/base/index.html.mht", false)
                    .then(filename => {
                      if (filename != null) {
                        console.info(`save web archive success: ${filename}`)
                        this.endTime = Utils.getSystemTime()
                        Utils.emitEvent(this.endTime - this.startTime, this.callBackId)
                        Utils.consoleCostTime('WebViewController.storeWebArchive', this.startTime, this.endTime)
                      }
                    })
                    .catch((error: business_error.BusinessError) => {
                      console.log('error: ' + JSON.stringify(error));
                    })
                } catch (error) {
                  let e:business_error.BusinessError = error as business_error.BusinessError;
                  console.error(`ErrorCode: ${e.code},  Message: ${e.message}`);
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