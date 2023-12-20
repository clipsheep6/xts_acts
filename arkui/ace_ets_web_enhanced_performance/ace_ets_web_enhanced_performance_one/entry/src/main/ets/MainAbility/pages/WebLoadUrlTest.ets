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
import events_emitter from '@ohos.events.emitter';

@Entry
@Component
struct WebLoadUrlTest {
  controller: WebController = new WebController()
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
              case 'testLoadUrl001': {
                try {
                  this.testing = true
                  this.startTime = Utils.getSystemTime()
                  this.controller.loadUrl({ url: "index.html" })
                } catch (error) {
                  console.error(`ErrorCode: ${error.code},  Message: ${error.message}`);
                }
                break;
              }
              case 'testLoadUrl002': {
                try {
                  this.testing = true
                  this.startTime = Utils.getSystemTime()
                  this.controller.loadUrl({ url: "resource://rawfile/webMessageExt.html" });
                } catch (error) {
                  console.error(`ErrorCode: ${error.code},  Message: ${error.message}`);
                }
                break;
              }
              case 'testLoadUrl003': {
                try {
                  this.testing = true
                  this.startTime = Utils.getSystemTime()
                  this.controller.loadUrl({ url: 'https://openharmony.cn/'})
                } catch (error) {
                  console.error(`ErrorCode: ${error.code},  Message: ${error.message}`);
                }
                break;
              }
              case 'testLoadUrl004': {
                try {
                  let sandboxPath = Utils.copyRawFileToSandbox('second.html')
                  this.testing = true
                  this.startTime = Utils.getSystemTime()
                  this.controller.loadUrl({ url:`file://${sandboxPath}`})
                } catch (error) {
                  console.error(`ErrorCode: ${error.code},  Message: ${error.message}`);
                }
                break;
              }
              case 'testLoadUrl005': {
                try {
                  this.testing = true
                  this.startTime = Utils.getSystemTime()
                  this.controller.loadUrl({url: 'index.html',
                    headers:[{
                      headerKey: "customHeaderKey",
                      headerValue: "customHeaderValue"
                    }]
                  })
                } catch (error) {
                  console.error(`ErrorCode: ${error.code},  Message: ${error.message}`);
                }
                break;
              }
              case 'testLoadUrl006': {
                try {
                  this.testing = true
                  this.startTime = Utils.getSystemTime()
                  this.controller.loadUrl({ url: 'resource://rawfile/second.html',
                    headers: [{
                      headerKey: "customHeaderKey",
                      headerValue: "customHeaderValue"
                    }]
                  })
                } catch (error) {
                  console.error(`ErrorCode: ${error.code},  Message: ${error.message}`);
                }
                break;
              }
              case 'testLoadUrl007': {
                try {
                  this.testing = true
                  this.startTime = Utils.getSystemTime()
                  this.controller.loadUrl({ url: 'https://openharmony.cn/',
                    headers:[{
                      headerKey: "customHeaderKey",
                      headerValue: "customHeaderValue"
                    }]
                  })
                } catch (error) {
                  console.error(`ErrorCode: ${error.code},  Message: ${error.message}`);
                }
                break;
              }
              case 'testLoadUrl008': {
                try {
                  let sandboxPath = Utils.copyRawFileToSandbox('second.html')
                  this.testing = true
                  this.startTime = Utils.getSystemTime()
                  this.controller.loadUrl({ url: `file://${sandboxPath}`,
                    headers: [{
                      headerKey: "customHeaderKey",
                      headerValue: "customHeaderValue"
                    }]
                  })
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
              console.log(`onPageEnd ==> url:${event.url}  ${this.callBackId}`)
            }
            if (this.testing) {
              this.testing = false
              this.endTime = Utils.getSystemTime()
              Utils.emitEvent(this.endTime - this.startTime, this.callBackId)
              Utils.consoleCostTime('WebController.loadUrl()', this.startTime, this.endTime)
            }
          })
      }
      .width('100%')
    }
    .height('100%')
  }
}