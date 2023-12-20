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
import { JsProxyObject } from '../../test/Interfaces';
import events_emitter from '@ohos.events.emitter';

@Entry
@Component
struct WebCookieSaveCookieTest {
  controller: webView.WebviewController = new webView.WebviewController();
  cookie : WebCookie = new WebCookie()
  @State str: string = ""
  @State startTime: number = 0
  @State endTime: number = 0
  @State testing: boolean = false;
  @State callBackId: number = 0;
  @State javaScriptAccess: boolean = true;
  @State buttonKey: string = '';

  private jsObj: JsProxyObject = {
    test: (res: object) => {
      Utils.emitEvent(String(res), 102);
    },
    toString: (str: string) => {
      console.info("ets toString:" + String(str));
    },
    register: (res: object) => {
      Utils.emitEvent(String(res), 86);
      return "web222"
    }
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
    Row() {
      Column() {
        Button(this.buttonKey)
          .key(this.buttonKey)
          .onClick(async () => {
            console.info("key==>" + this.str)
            switch (this.str) {
              case 'testWebCookieSaveCookie001': {
                try {
                  this.testing = true
                  this.startTime = Utils.getSystemTime()
                  this.cookie.saveCookie();
                  this.endTime = Utils.getSystemTime()
                  Utils.emitEvent(this.endTime - this.startTime, this.callBackId)
                  console.log(`SaveCookie callBackId:${this.callBackId}`)
                  Utils.consoleCostTime('WebCookie.SaveCookie', this.startTime, this.endTime)
                } catch (error) {
                  console.error(`ErrorCode: ${error.code},  Message: ${error.message}`);
                }
                break;
              }
            }
          })

        Web({ src: $rawfile('index.html'), controller: this.controller })
          .javaScriptAccess(this.javaScriptAccess)
          .javaScriptProxy({
            object: this.jsObj,
            name: "backToEts",
            methodList: ["test", "toString"],
            controller: this.controller
          })
      }
      .width('100%')
    }
    .height('100%')
  }
}