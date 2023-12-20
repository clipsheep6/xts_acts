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
import AbilityDelegatorRegistry from '@ohos.app.ability.abilityDelegatorRegistry';
import { Hypium } from '@ohos/hypium';
import testsuite from '../../test/List.test';
import events_emitter from '@ohos.events.emitter';

@Entry
@Component
struct WebViewControllerClearSslCacheTest {
  controller: webView.WebviewController = new webView.WebviewController();
  @State str: string = ""
  @State startTime: number = 0
  @State endTime: number = 0
  @State testing: boolean = false;
  @State callBackId: number = 0;
  @State ConfirmCancel: string = '';
  @State onSslErrorEventReceiveCallBack: boolean = false
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

  aboutToAppear() {
    let abilityDelegator = AbilityDelegatorRegistry.getAbilityDelegator()
    let abilityDelegatorArguments = AbilityDelegatorRegistry.getArguments()
    console.info('start run testcase!!!')
    Hypium.hypiumTest(abilityDelegator, abilityDelegatorArguments, testsuite)
  }

  build() {
    Row() {
      Column() {
        Button(this.buttonKey)
          .key(this.buttonKey)
          .onClick(async () => {
            console.info("key==>" + this.str)
            switch (this.str) {
              case 'testWebViewControllerClearSslCache001': {
                try {
                  this.testing = true
                  this.ConfirmCancel = 'handleCancel'
                  this.startTime = Utils.getSystemTime()
                  this.controller.clearSslCache();
                  this.endTime = Utils.getSystemTime()
                  Utils.emitEvent(this.endTime - this.startTime, this.callBackId)
                  Utils.consoleCostTime('WebViewController.clearSslCache', this.startTime, this.endTime)
                  this.controller.loadUrl("https://expired.badssl.com");
                  this.controller.searchAllAsync('expired.');
                } catch (error) {
                  console.error(`ErrorCode: ${error.code},  Message: ${error.message}`);
                }
                break;
              }
            }
          })

        Web({ src: $rawfile('index.html'), controller: this.controller })
          .javaScriptAccess(true)
          .geolocationAccess(true)
          .databaseAccess(true)
          .onPageEnd((event) => {
            if (event) {
              console.log(`onPageEnd ==> WebViewController.clearSslCache`)
            }
            if (this.testing) {
              this.testing = false
            }
          })
          .onSslErrorEventReceive((event) => {
            if (event) {
              if (this.ConfirmCancel == 'handleConfirm') {
                event.handler.handleConfirm()
              }
              if (this.ConfirmCancel == 'handleCancel') {
                event.handler.handleCancel()
              }
              this.ConfirmCancel = ' '
              this.onSslErrorEventReceiveCallBack = true
            }
          })
      }
      .width('100%')
    }
    .height('100%')
  }
}