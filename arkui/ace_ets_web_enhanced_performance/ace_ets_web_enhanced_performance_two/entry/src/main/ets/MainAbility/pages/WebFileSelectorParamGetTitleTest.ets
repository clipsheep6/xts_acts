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
struct WebFileSelectorParamGetTitleTest {
  controller: webView.WebviewController = new webView.WebviewController();
  responseWeb: WebResourceResponse = new WebResourceResponse()
  @State str: string = ""
  @State buttonKey: string = '';
  @State startTime: number = 0
  @State endTime: number = 0
  @State callBackId: number = 0;
  @State javaScriptAccess: boolean = true;
  @State databaseAccess: boolean = true;
  @State fileAccess: boolean = true;
  @State domStorageAccess: boolean = false;
  @State imageAccess: boolean = true;
  @State onlineImageAccess: boolean = true;
  @State uri: string = "file://docs/storage/Users/currentUser/Documents/1.json";
  @State test: boolean = false

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
              case "testFileSelectorParamGetTitle001": {
                try {
                  this.controller.loadUrl($rawfile('showFileSelector.html'));
                  await Utils.sleep(2000);
                  await Utils.clickComponent('onShowFileSelectorKey')
                } catch (error) {
                  console.error(`ErrorCode: ${error.code},  Message: ${error.message}`);
                }
                break;
              }
            }
          })

        Web({ src: $rawfile('index.html'), controller: this.controller })
          .javaScriptAccess(this.javaScriptAccess)
          .key("onShowFileSelectorKey")
          .fileAccess(this.fileAccess)
          .imageAccess(this.imageAccess)
          .domStorageAccess(this.domStorageAccess)
          .onlineImageAccess(this.onlineImageAccess)
          .databaseAccess(this.databaseAccess)
          .onShowFileSelector((event) => {
            if (event) {
              console.log('MyFileUploader onShowFileSelector invoked')
              event.result.handleFileList([this.uri]);
              this.startTime = Utils.getSystemTime()
              event.fileSelector.getTitle()
              this.endTime = Utils.getSystemTime()
              Utils.emitEvent(this.endTime - this.startTime, this.callBackId)
              Utils.consoleCostTime('FileSelectorParam.getTitle()', this.startTime, this.endTime)
            }
            return true
          })
      }
      .width('100%')
    }
    .height('100%')
  }
}