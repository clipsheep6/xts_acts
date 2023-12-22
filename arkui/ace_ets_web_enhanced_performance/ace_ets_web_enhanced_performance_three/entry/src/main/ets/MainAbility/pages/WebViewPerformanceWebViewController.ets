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
struct WebViewPerformanceWebViewController {
  @State str: string = ""
  @State startTime: number = 0
  @State endTime: number = 0
  @State callBackId: number = 0
  @State denyState: boolean = true
  @State buttonKey: string = '';
  @State userAgent: string = 'Mozilla/5.0 (Windows NT 6.1; WOW64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/39.0.2171.71 Safari/537.36'
  handler: FullScreenExitHandler | null = null
  controller: webView.WebviewController = new webView.WebviewController();

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

  zero() {
    this.startTime = 0
    this.endTime = 0
  }

  build() {
    Column() {
      Row() {
        Button(this.buttonKey)
          .key(this.buttonKey)
          .onClick(async () => {
            console.info("key==>" + this.str)
            switch (this.str) {
              case "testWebViewControllerGetCustomUserAgent001": {
                this.startTime = Utils.getSystemTime()
                this.controller.getCustomUserAgent()
                this.endTime = Utils.getSystemTime()
                Utils.emitEvent((this.endTime - this.startTime), this.callBackId)
                Utils.consoleCostTime('WebViewController.getCustomUserAgent()', this.startTime, this.endTime)
                this.zero()
                break;
              }
              case "testWebViewControllerGetPageHeight001": {
                this.startTime = Utils.getSystemTime()
                this.controller.getPageHeight()
                this.endTime = Utils.getSystemTime()
                Utils.emitEvent((this.endTime - this.startTime), this.callBackId)
                Utils.consoleCostTime('WebViewController.getPageHeight()', this.startTime, this.endTime)
                this.zero()
                break;
              }
              case "testWebViewControllerGetTitle001": {
                this.startTime = Utils.getSystemTime()
                this.controller.getTitle()
                this.endTime = Utils.getSystemTime()
                Utils.emitEvent((this.endTime - this.startTime), this.callBackId)
                Utils.consoleCostTime('WebViewController.getTitle()', this.startTime, this.endTime)
                this.zero()
                break;
              }
              case "testWebViewControllerGetUserAgent001": {
                this.startTime = Utils.getSystemTime()
                this.controller.getUserAgent()
                console.log('看看这是啥' + this.controller.getUserAgent())
                this.endTime = Utils.getSystemTime()
                Utils.emitEvent((this.endTime - this.startTime), this.callBackId)
                Utils.consoleCostTime('WebViewController.getUserAgent()', this.startTime, this.endTime)
                this.zero()
                break;
              }
              case "testWebViewControllerGetWebId001": {
                this.startTime = Utils.getSystemTime()
                this.controller.getWebId()
                this.endTime = Utils.getSystemTime()
                Utils.emitEvent((this.endTime - this.startTime), this.callBackId)
                Utils.consoleCostTime('WebViewController.getWebId()', this.startTime, this.endTime)
                this.zero()
                break;
              }
              case "testWebViewControllerSearchNext001": {
                this.startTime = Utils.getSystemTime()
                try {
                  this.controller.searchNext(true)
                  this.endTime = Utils.getSystemTime()
                  Utils.emitEvent((this.endTime - this.startTime), this.callBackId)
                  Utils.consoleCostTime('WebViewController.searchNext()', this.startTime, this.endTime)
                  this.zero()
                } catch (error) {
                  console.error(`Errorcode: ${error.code}, Message: ${error.message}`);
                }
                break;
              }
              case "testWebViewControllerSetCustomUserAgent001": {
                this.startTime = Utils.getSystemTime()
                this.controller.setCustomUserAgent("userAgent")
                this.endTime = Utils.getSystemTime()
                Utils.emitEvent((this.endTime - this.startTime), this.callBackId)
                Utils.consoleCostTime('WebViewController.setCustomUserAgent()', this.startTime, this.endTime)
                this.zero()
                break;
              }
              case "testWebViewControllerSearchAllAsync001": {
                this.startTime = Utils.getSystemTime()
                this.controller.searchAllAsync("index")
                this.endTime = Utils.getSystemTime()
                Utils.emitEvent((this.endTime - this.startTime), this.callBackId)
                Utils.consoleCostTime('WebViewController.searchAllAsync()', this.startTime, this.endTime)
                this.zero()
                break;
              }
              case "testWebViewControllerHasImage001": {
                this.controller.loadUrl($rawfile('hasImageOne.html'))
                this.startTime = Utils.getSystemTime()
                try {
                  this.controller.hasImage((error, data) => {
                    if (error) {
                      console.info(`hasImageCbOnline error: ` + JSON.stringify(error))
                      return;
                    }
                    console.info("hasImageCbOnline: " + data);
                  });
                } catch (error) {
                  console.error(`ErrorCode: ${error.code},  Message: ${error.message}`);
                }
                this.endTime = Utils.getSystemTime()
                Utils.emitEvent((this.endTime - this.startTime), this.callBackId)
                Utils.consoleCostTime('WebViewController.hasImage()', this.startTime, this.endTime)
                this.zero()
                break;
              }

              case "testWebViewControllerGetItemAtIndex001": {
                this.startTime = Utils.getSystemTime()
                try {
                  let res = this.controller.getBackForwardEntries()
                  let item = res.getItemAtIndex(0)
                  console.log("item" + item)
                  this.endTime = Utils.getSystemTime()
                  Utils.emitEvent((this.endTime - this.startTime), this.callBackId)
                  Utils.consoleCostTime('BackForwardList.getItemAtIndex()', this.startTime, this.endTime)
                  this.zero()
                } catch (error) {
                  console.error(`ErrorCode: ${error.code},  Message: ${error.message}`);
                }
                break;
              }
            }
          })
      }

      Web({ src: $rawfile("indexJru.html"), controller: this.controller })
        .javaScriptAccess(true)
        .geolocationAccess(true)
        .databaseAccess(true)
    }
  }
}
