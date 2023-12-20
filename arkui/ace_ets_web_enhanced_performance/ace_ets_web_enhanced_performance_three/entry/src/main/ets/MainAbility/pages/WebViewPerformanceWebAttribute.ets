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
import { Driver, ON } from '@ohos.UiTest';
import events_emitter from '@ohos.events.emitter';


@Entry
@Component
struct WebViewPerformanceWebAttribute {
  controller: webView.WebviewController = new webView.WebviewController();
  @State Permission: Boolean = false
  @State str: string = ""
  @State webId: number = 0
  @State startTime: number = 0
  @State endTime: number = 0
  @State paramString: string = ''
  @State callBackId: number = 0
  @State onRequest: boolean = false
  @State onRequestState: boolean = false
  @State onPageVisibleState: boolean = false
  @State buttonKey: string = '';
  WebResult: WebContextMenuResult = new WebContextMenuResult;

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
              case "testOnPermissionRequest001": {
                await Utils.sleep(2000);
                this.controller.loadUrl("resource://rawfile/indexVideo.html")
                await Utils.sleep(2000);
                let driver = Driver.create();
                let button = await driver.findComponent(ON.id('WebViewPerformanceWebAttributeWebView'));
                this.startTime = Utils.getSystemTime()
                await button.click();
                break;
              }
              case "testOnContextMenuShow001": {
                await Utils.sleep(2000)
                this.controller.loadUrl("resource://rawfile/indexJru.html")
                await Utils.sleep(2000)
                this.paramString = 'onContextMenuShow'
                let driver = Driver.create();
                let button = await driver.findComponent(ON.id('WebViewPerformanceWebAttributeWebView'));
                this.startTime = Utils.getSystemTime()
                await button.longClick();
                break;
              }
              case "testOnTouchIconUrlReceived001": {
                this.startTime = Utils.getSystemTime()
                this.controller.loadUrl("resource://rawfile/indexFour.html")
                break;
              }
              case "testOnPageVisible001": {
                this.onPageVisibleState = true
                this.startTime = Utils.getSystemTime()
                this.controller.loadUrl("resource://rawfile/indexJru.html")
                break;
              }
              case "testOnScreenCaptureRequest001": {
                this.controller.loadUrl("resource://rawfile/screenCaptureTest.html");
                await Utils.sleep(2000);
                this.startTime = Utils.getSystemTime()
                this.controller.runJavaScript('getScreenStream()')
                break;
              }
            }
          })
      }

      Web({ src: $rawfile("indexJru.html"), controller: this.controller })
        .key("WebViewPerformanceWebAttributeWebView")
        .javaScriptAccess(true)
        .geolocationAccess(true)
        .databaseAccess(true)
        .onScreenCaptureRequest(async (event) => {
          if (event) {
            this.endTime = Utils.getSystemTime()
            Utils.emitEvent((this.endTime - this.startTime), this.callBackId)
            Utils.consoleCostTime('WebAttribute.onScreenCaptureRequest()', this.startTime, this.endTime)
            this.zero()
          }
        })
        .onPageVisible((event) => {
          if (this.onPageVisibleState) {
            console.log('onPageVisible url:' + event.url)
            this.endTime = Utils.getSystemTime()
            Utils.emitEvent((this.endTime - this.startTime), this.callBackId)
            Utils.consoleCostTime('WebAttribute.onPageVisible()', this.startTime, this.endTime)
            this.zero()
            this.onPageVisibleState = false
          }
        })
        .onTouchIconUrlReceived((event) => {
          console.log('onTouchIconUrlReceived:' + event.url)
          this.endTime = Utils.getSystemTime()
          Utils.emitEvent((this.endTime - this.startTime), this.callBackId)
          Utils.consoleCostTime('WebAttribute.onTouchIconUrlReceived()', this.startTime, this.endTime)
          this.zero()
          setTimeout(() => {
            this.controller.loadUrl("resource://rawfile/fullScreenEnter.html")
          }, 2000)
        })
        .onPermissionRequest((event) => {
          console.log('onPermissionRequest' + event)
          this.endTime = Utils.getSystemTime()
          Utils.emitEvent((this.endTime - this.startTime), this.callBackId)
          Utils.consoleCostTime('WebAttribute.onPermissionRequest()', this.startTime, this.endTime)
          this.zero()
        })
        .onContextMenuShow((event) => {
          console.log('onContextMenuShow' + event)
          this.endTime = Utils.getSystemTime()
          Utils.emitEvent((this.endTime - this.startTime), this.callBackId)
          Utils.consoleCostTime('WebAttribute.onContextMenuShow()', this.startTime, this.endTime)
          this.zero()
          return true
        })
    }
  }
}
