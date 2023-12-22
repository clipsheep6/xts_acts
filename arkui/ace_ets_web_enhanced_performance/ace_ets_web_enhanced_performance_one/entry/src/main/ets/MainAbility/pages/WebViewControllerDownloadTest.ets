/**
 * Copyright (c) 2023 iSoftStone Information Technology (Group) Co.,Ltd.
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

import events_emitter from '@ohos.events.emitter';
import webView from '@ohos.web.webview';
import business_error from '@ohos.base'
import Utils from '../../test/Utils';

@Entry
@Component
struct WebViewControllerDownloadTest {
  controller: webView.WebviewController = new webView.WebviewController();
  delegate: webView.WebDownloadDelegate = new webView.WebDownloadDelegate();
  @State str: string = '';
  @State downloadUrl: string = 'https://consumer.huawei.com/content/dam/' +
  'huawei-cbg-site/cn/mkt/mobileservices/2022/download/' +
  'PC107f1b3947c942ffaa14334a879065d8.2107261020.exe'
  @State downloadUrlImg: string = 'https://consumer.huawei.com/content/dam/huawei-cbg-site/cn/mkt/pdp/tablets/' +
  'matepad-pro-11-2024/assets/imgs/pc/huawei-matepad-11-inch-Huawei-sound.png';
  @State downloadUrlVideo: string = 'https://www-file.huawei.com/-/media/corp2020/' +
  'videos/tech4all/stories/2/shansha-green-turtle.mp4';
  @State javaScriptAccess: boolean = true;
  @State fileAccess: boolean = true;
  @State domStorageAccess: boolean = false;
  @State imageAccess: boolean = true;
  @State onlineImageAccess: boolean = true;
  @State databaseAccess: boolean = true;
  @State hasInitDownloadDelegate: boolean = false;
  @State savePath: string = '';
  downloadingItem: webView.WebDownloadItem | null = null
  failedDownloadSerializedData: Uint8Array | null = null;
  failedDownload: webView.WebDownloadItem | null = null;
  @State startTime: number = 0
  @State endTime: number = 0
  @State testOnBeforeDownload: boolean = false;
  @State testOnDownloadUpdated: boolean = false;
  @State testOnDownloadFailed: boolean = false;
  @State testOnDownloadFinish: boolean = false;
  @State testStart: boolean = false;
  @State callBackId: number = 0;
  @State buttonKey: string = '';

  onPageShow() {
    Utils.registerEventPage((eventData: events_emitter.EventData) => {
      if (eventData.data) {
        this.str = eventData.data.CASE_NAME;
        this.callBackId = eventData.data.CALL_BACK_ID;
        this.buttonKey = eventData.data.BUTTON_KEY
        this.downloadingItem = null
        this.savePath = Utils.getSandboxFileDir() + 'testDownloadFileFile'
        this.failedDownloadSerializedData = null
        this.failedDownload = null
        this.startTime = 0
        this.endTime = 0
        this.testOnBeforeDownload = false;
        this.testOnDownloadUpdated = false;
        this.testOnDownloadFailed = false;
        this.testOnDownloadFinish = false;
        this.testStart = false;
      }
    })

    events_emitter.on({ eventId: 11, priority: events_emitter.EventPriority.LOW }, () => {
      console.info("AfterEach release the download progress.")
      if (this.downloadingItem) {
        console.info("Call downloadingItem.cancel guid:" + this.downloadingItem.getGuid())
        this.downloadingItem.cancel()
      }
    })
  }

  onPageHide() {
    Utils.unRegisterEventPage()
    events_emitter.off(11)
  }

  build() {
    Column() {
      Row() {
        Button(this.buttonKey)
          .key(this.buttonKey)
          .onClick(async () => {
            console.info("key==>" + this.str)
            switch (this.str) {
              case "testSetDownloadDelegate001": {
                try {
                  this.startTime = Utils.getSystemTime()
                  this.controller.setDownloadDelegate(this.delegate);
                  this.endTime = Utils.getSystemTime()
                  Utils.emitEvent(this.endTime - this.startTime, this.callBackId)
                  Utils.consoleCostTime('WebViewController.setDownloadDelegate()', this.startTime, this.endTime)
                } catch (error) {
                  let e: business_error.BusinessError = error as business_error.BusinessError;
                  console.error(`ErrorCode: ${e.code},  Message: ${e.message}`);
                }
                break;
              }
              case "testStartDownload001": {
                try {
                  this.startTime = Utils.getSystemTime()
                  this.controller.startDownload(this.downloadUrl);
                  this.endTime = Utils.getSystemTime()
                  Utils.emitEvent(this.endTime - this.startTime, this.callBackId)
                  Utils.consoleCostTime('WebViewController.startDownload()', this.startTime, this.endTime)
                  await Utils.sleep(3000)
                } catch (error) {
                  let e: business_error.BusinessError = error as business_error.BusinessError;
                  console.error(`ErrorCode: ${e.code},  Message: ${e.message}`);
                }
                break;
              }
              case "testGetGuid001": {
                try {
                  this.controller.startDownload(this.downloadUrl);
                  await Utils.sleep(3000)
                  if (this.downloadingItem) {
                    this.startTime = Utils.getSystemTime()
                    this.downloadingItem.getGuid();
                    this.endTime = Utils.getSystemTime()
                    Utils.emitEvent(this.endTime - this.startTime, this.callBackId)
                    Utils.consoleCostTime('WebDownloadItem.getGuid()', this.startTime, this.endTime)
                  }
                } catch (error) {
                  let e: business_error.BusinessError = error as business_error.BusinessError;
                  console.error(`ErrorCode: ${e.code},  Message: ${e.message}`);
                }
                break;
              }
              case "testGetCurrentSpeed001": {
                try {
                  this.controller.startDownload(this.downloadUrlImg);
                  await Utils.sleep(3000)
                  if (this.downloadingItem) {
                    this.startTime = Utils.getSystemTime()
                    this.downloadingItem.getCurrentSpeed();
                    this.endTime = Utils.getSystemTime()
                    Utils.emitEvent(this.endTime - this.startTime, this.callBackId)
                    Utils.consoleCostTime('WebDownloadItem.getCurrentSpeed()', this.startTime, this.endTime)
                  }
                } catch (error) {
                  let e: business_error.BusinessError = error as business_error.BusinessError;
                  console.error(`ErrorCode: ${e.code},  Message: ${e.message}`);
                }
                break;
              }
              case "testGetPercentComplete001": {
                try {
                  this.controller.startDownload(this.downloadUrlImg);
                  await Utils.sleep(3000)
                  if (this.downloadingItem) {
                    this.startTime = Utils.getSystemTime()
                    this.downloadingItem.getPercentComplete();
                    this.endTime = Utils.getSystemTime()
                    Utils.emitEvent(this.endTime - this.startTime, this.callBackId)
                    Utils.consoleCostTime('WebDownloadItem.getPercentComplete()', this.startTime, this.endTime)
                  }
                } catch (error) {
                  let e: business_error.BusinessError = error as business_error.BusinessError;
                  console.error(`ErrorCode: ${e.code},  Message: ${e.message}`);
                }
                break;
              }
              case "testGetTotalBytes001": {
                try {
                  this.controller.startDownload(this.downloadUrlImg);
                  await Utils.sleep(3000)
                  if (this.downloadingItem) {
                    this.startTime = Utils.getSystemTime()
                    this.downloadingItem.getTotalBytes();
                    this.endTime = Utils.getSystemTime()
                    Utils.emitEvent(this.endTime - this.startTime, this.callBackId)
                    Utils.consoleCostTime('WebDownloadItem.getTotalBytes()', this.startTime, this.endTime)
                  }
                } catch (error) {
                  let e: business_error.BusinessError = error as business_error.BusinessError;
                  console.error(`ErrorCode: ${e.code},  Message: ${e.message}`);
                }
                break;
              }
              case "testGetState001": {
                try {
                  this.controller.startDownload(this.downloadUrl);
                  await Utils.sleep(3000)
                  if (this.downloadingItem) {
                    this.startTime = Utils.getSystemTime()
                    this.downloadingItem.getState();
                    this.endTime = Utils.getSystemTime()
                    Utils.emitEvent(this.endTime - this.startTime, this.callBackId)
                    Utils.consoleCostTime('WebDownloadItem.getState()', this.startTime, this.endTime)
                  }
                } catch (error) {
                  let e: business_error.BusinessError = error as business_error.BusinessError;
                  console.error(`ErrorCode: ${e.code},  Message: ${e.message}`);
                }
                break;
              }
              case "testGetLastErrorCode001": {
                try {
                  this.controller.startDownload(this.downloadUrl);
                  await Utils.sleep(3000)
                  if (this.downloadingItem) {
                    this.startTime = Utils.getSystemTime()
                    this.downloadingItem.getLastErrorCode();
                    this.endTime = Utils.getSystemTime()
                    Utils.emitEvent(this.endTime - this.startTime, this.callBackId)
                    Utils.consoleCostTime('WebDownloadItem.getLastErrorCode()', this.startTime, this.endTime)
                  }
                } catch (error) {
                  let e: business_error.BusinessError = error as business_error.BusinessError;
                  console.error(`ErrorCode: ${e.code},  Message: ${e.message}`);
                }
                break;
              }
              case "testGetMethod001": {
                try {
                  this.controller.startDownload(this.downloadUrlImg);
                  await Utils.sleep(3000)
                  if (this.downloadingItem) {
                    this.startTime = Utils.getSystemTime()
                    this.downloadingItem.getMethod();
                    this.endTime = Utils.getSystemTime()
                    Utils.emitEvent(this.endTime - this.startTime, this.callBackId)
                    Utils.consoleCostTime('WebDownloadItem.getMethod()', this.startTime, this.endTime)
                  }
                } catch (error) {
                  let e: business_error.BusinessError = error as business_error.BusinessError;
                  console.error(`ErrorCode: ${e.code},  Message: ${e.message}`);
                }
                break;
              }
              case "testGetMimeType001": {
                try {
                  this.controller.startDownload(this.downloadUrlImg);
                  await Utils.sleep(3000)
                  if (this.downloadingItem) {
                    this.startTime = Utils.getSystemTime()
                    this.downloadingItem.getMimeType();
                    this.endTime = Utils.getSystemTime()
                    Utils.emitEvent(this.endTime - this.startTime, this.callBackId)
                    Utils.consoleCostTime('WebDownloadItem.getMimeType()', this.startTime, this.endTime)
                  }
                } catch (error) {
                  let e: business_error.BusinessError = error as business_error.BusinessError;
                  console.error(`ErrorCode: ${e.code},  Message: ${e.message}`);
                }
                break;
              }
              case "testGetUrl001": {
                try {
                  this.controller.startDownload(this.downloadUrlImg);
                  await Utils.sleep(3000)
                  if (this.downloadingItem) {
                    this.startTime = Utils.getSystemTime()
                    this.downloadingItem.getUrl();
                    this.endTime = Utils.getSystemTime()
                    Utils.emitEvent(this.endTime - this.startTime, this.callBackId)
                    Utils.consoleCostTime('WebDownloadItem.getUrl()', this.startTime, this.endTime)
                  }
                } catch (error) {
                  let e: business_error.BusinessError = error as business_error.BusinessError;
                  console.error(`ErrorCode: ${e.code},  Message: ${e.message}`);
                }
                break;
              }
              case "testGetSuggestedFileName001": {
                try {
                  this.controller.startDownload(this.downloadUrlImg);
                  await Utils.sleep(3000)
                  if (this.downloadingItem) {
                    this.startTime = Utils.getSystemTime()
                    this.downloadingItem.getSuggestedFileName();
                    this.endTime = Utils.getSystemTime()
                    Utils.emitEvent(this.endTime - this.startTime, this.callBackId)
                    Utils.consoleCostTime('WebDownloadItem.getSuggestedFileName()', this.startTime, this.endTime)
                  }
                } catch (error) {
                  let e: business_error.BusinessError = error as business_error.BusinessError;
                  console.error(`ErrorCode: ${e.code},  Message: ${e.message}`);
                }
                break;
              }
              case "testGetReceivedBytes001": {
                try {
                  this.controller.startDownload(this.downloadUrlImg);
                  await Utils.sleep(3000)
                  if (this.downloadingItem) {
                    this.startTime = Utils.getSystemTime()
                    this.downloadingItem.getReceivedBytes();
                    this.endTime = Utils.getSystemTime()
                    Utils.emitEvent(this.endTime - this.startTime, this.callBackId)
                    Utils.consoleCostTime('WebDownloadItem.getReceivedBytes()', this.startTime, this.endTime)
                  }
                } catch (error) {
                  let e: business_error.BusinessError = error as business_error.BusinessError;
                  console.error(`ErrorCode: ${e.code},  Message: ${e.message}`);
                }
                break;
              }
              case "testGetFullPath001": {
                try {
                  this.controller.startDownload(this.downloadUrlImg);
                  await Utils.sleep(3000)
                  if (this.downloadingItem) {
                    this.startTime = Utils.getSystemTime()
                    this.downloadingItem.getFullPath();
                    this.endTime = Utils.getSystemTime()
                    Utils.emitEvent(this.endTime - this.startTime, this.callBackId)
                    Utils.consoleCostTime('WebDownloadItem.getFullPath()', this.startTime, this.endTime)
                  }
                } catch (error) {
                  let e: business_error.BusinessError = error as business_error.BusinessError;
                  console.error(`ErrorCode: ${e.code},  Message: ${e.message}`);
                }
                break;
              }
              case "testSerialize001": {
                try {
                  this.controller.startDownload(this.downloadUrl);
                  await Utils.sleep(1000)
                  if (this.downloadingItem) {
                    this.downloadingItem.cancel()
                  }
                  await Utils.sleep(2000)
                  if (this.failedDownload) {
                    this.startTime = Utils.getSystemTime()
                    this.failedDownload.serialize();
                    this.endTime = Utils.getSystemTime()
                    Utils.emitEvent(this.endTime - this.startTime, this.callBackId)
                    Utils.consoleCostTime('WebDownloadItem.serialize()', this.startTime, this.endTime)
                  }
                } catch (error) {
                  let e: business_error.BusinessError = error as business_error.BusinessError;
                  console.error(`ErrorCode: ${e.code},  Message: ${e.message}`);
                }
                break;
              }
              case "testDeserialize001": {
                try {
                  this.controller.startDownload(this.downloadUrl);
                  await Utils.sleep(1000)
                  if (this.downloadingItem) {
                    this.downloadingItem.cancel()
                  }
                  await Utils.sleep(2000)
                  if (this.failedDownloadSerializedData) {
                    this.startTime = Utils.getSystemTime()
                    webView.WebDownloadItem.deserialize(this.failedDownloadSerializedData)
                    this.endTime = Utils.getSystemTime()
                    Utils.emitEvent(this.endTime - this.startTime, this.callBackId)
                    Utils.consoleCostTime('WebDownloadItem.deserialize()', this.startTime, this.endTime)
                  }
                } catch (error) {
                  let e: business_error.BusinessError = error as business_error.BusinessError;
                  console.error(`ErrorCode: ${e.code},  Message: ${e.message}`);
                }
                break;
              }
              case "testStart001": {
                try {
                  this.testStart = true
                  this.controller.startDownload(this.downloadUrl);
                  await Utils.sleep(3000)
                  Utils.emitEvent(this.endTime - this.startTime, this.callBackId)
                  Utils.consoleCostTime('WebDownloadItem.start()', this.startTime, this.endTime)
                } catch (error) {
                  let e: business_error.BusinessError = error as business_error.BusinessError;
                  console.error(`ErrorCode: ${e.code},  Message: ${e.message}`);
                }
                break;
              }
              case "testCancel001": {
                try {
                  this.controller.startDownload(this.downloadUrl);
                  await Utils.sleep(1000)
                  if (this.downloadingItem) {
                    this.startTime = Utils.getSystemTime()
                    this.downloadingItem.cancel()
                    this.endTime = Utils.getSystemTime()
                    Utils.emitEvent(this.endTime - this.startTime, this.callBackId)
                    Utils.consoleCostTime('WebDownloadItem.cancel()', this.startTime, this.endTime)
                  }
                } catch (error) {
                  let e: business_error.BusinessError = error as business_error.BusinessError;
                  console.error(`ErrorCode: ${e.code},  Message: ${e.message}`);
                }
                break;
              }
              case "testPause001": {
                try {
                  this.controller.startDownload(this.downloadUrl);
                  await Utils.sleep(1000)
                  if (this.downloadingItem) {
                    this.startTime = Utils.getSystemTime()
                    this.downloadingItem.pause()
                    this.endTime = Utils.getSystemTime()
                    Utils.emitEvent(this.endTime - this.startTime, this.callBackId)
                    Utils.consoleCostTime('WebDownloadItem.pause()', this.startTime, this.endTime)
                  }
                } catch (error) {
                  let e: business_error.BusinessError = error as business_error.BusinessError;
                  console.error(`ErrorCode: ${e.code},  Message: ${e.message}`);
                }
                break;
              }
              case "testResume001": {
                try {
                  this.controller.startDownload(this.downloadUrl);
                  await Utils.sleep(1000)
                  if (this.downloadingItem) {
                    this.downloadingItem.pause()
                  }
                  await Utils.sleep(1000)
                  if (this.downloadingItem) {
                    this.startTime = Utils.getSystemTime()
                    this.downloadingItem.resume()
                    this.endTime = Utils.getSystemTime()
                    Utils.emitEvent(this.endTime - this.startTime, this.callBackId)
                    Utils.consoleCostTime('WebDownloadItem.resume()', this.startTime, this.endTime)
                  }
                } catch (error) {
                  let e: business_error.BusinessError = error as business_error.BusinessError;
                  console.error(`ErrorCode: ${e.code},  Message: ${e.message}`);
                }
                break;
              }
              case "testOnBeforeDownload001": {
                try {
                  this.testOnBeforeDownload = true
                  await Utils.sleep(1000)
                  this.startTime = Utils.getSystemTime()
                  this.controller.startDownload(this.downloadUrl);
                  await Utils.sleep(3000)
                  Utils.emitEvent(this.endTime - this.startTime, this.callBackId)
                  Utils.consoleCostTime('WebDownloadDelegate.onBeforeDownload()', this.startTime, this.endTime)
                } catch (error) {
                  let e: business_error.BusinessError = error as business_error.BusinessError;
                  console.error(`ErrorCode: ${e.code},  Message: ${e.message}`);
                }
                break;
              }
              case "testOnDownloadUpdated001": {
                try {
                  this.testOnDownloadUpdated = true
                  await Utils.sleep(1000)
                  this.startTime = Utils.getSystemTime()
                  this.controller.startDownload(this.downloadUrl);
                  await Utils.sleep(3000)
                  Utils.emitEvent(this.endTime - this.startTime, this.callBackId)
                  Utils.consoleCostTime('WebDownloadDelegate.onDownloadUpdated()', this.startTime, this.endTime)
                } catch (error) {
                  let e: business_error.BusinessError = error as business_error.BusinessError;
                  console.error(`ErrorCode: ${e.code},  Message: ${e.message}`);
                }
                break;
              }
              case "testOnDownloadFailed001": {
                try {
                  this.testOnDownloadFailed = true
                  this.savePath = 'data/'
                  await Utils.sleep(1000)
                  this.startTime = Utils.getSystemTime()
                  this.controller.startDownload(this.downloadUrl);
                  await Utils.sleep(3000)
                  Utils.emitEvent(this.endTime - this.startTime, this.callBackId)
                  Utils.consoleCostTime('WebDownloadDelegate.onDownloadFailed()', this.startTime, this.endTime)
                } catch (error) {
                  let e: business_error.BusinessError = error as business_error.BusinessError;
                  console.error(`ErrorCode: ${e.code},  Message: ${e.message}`);
                }
                break;
              }
              case "testOnDownloadFinish001": {
                try {
                  this.testOnDownloadFinish = true
                  await Utils.sleep(1000)
                  this.startTime = Utils.getSystemTime()
                  this.controller.startDownload(this.downloadUrlImg);
                  await Utils.sleep(3000)
                  Utils.emitEvent(this.endTime - this.startTime, this.callBackId)
                  Utils.consoleCostTime('WebDownloadDelegate.onDownloadFinish()', this.startTime, this.endTime)
                } catch (error) {
                  let e: business_error.BusinessError = error as business_error.BusinessError;
                  console.error(`ErrorCode: ${e.code},  Message: ${e.message}`);
                }
                break;
              }
              case "testWebDownloadManagerSetDownloadDelegate001": {
                try {
                  this.startTime = Utils.getSystemTime()
                  this.controller.setDownloadDelegate(this.delegate);
                  this.endTime = Utils.getSystemTime()
                  Utils.emitEvent(this.endTime - this.startTime, this.callBackId)
                  Utils.consoleCostTime('WebDownloadManager.SetDownloadDelegate()', this.startTime, this.endTime)
                } catch (error) {
                  let e: business_error.BusinessError = error as business_error.BusinessError;
                  console.error(`ErrorCode: ${e.code},  Message: ${e.message}`);
                }
                break;
              }
              case "testResumeDownload001": {
                try {
                  this.controller.startDownload(this.downloadUrl);
                  await Utils.sleep(1000)
                  if (this.downloadingItem) {
                    this.downloadingItem.cancel()
                  }
                  await Utils.sleep(2000)
                  if (this.downloadingItem) {
                    this.startTime = Utils.getSystemTime()
                    webView.WebDownloadManager.resumeDownload(this.downloadingItem)
                    this.endTime = Utils.getSystemTime()
                    Utils.emitEvent(this.endTime - this.startTime, this.callBackId)
                    Utils.consoleCostTime('WebDownloadManager.resumeDownload()', this.startTime, this.endTime)
                  }
                } catch (error) {
                  let e: business_error.BusinessError = error as business_error.BusinessError;
                  console.error(`ErrorCode: ${e.code},  Message: ${e.message}`);
                }
                break;
              }
            }
          })
      }

      Web({ src: $rawfile('second.html'), controller: this.controller })
        .javaScriptAccess(this.javaScriptAccess)
        .fileAccess(this.fileAccess)
        .imageAccess(this.imageAccess)
        .domStorageAccess(this.domStorageAccess)
        .onlineImageAccess(this.onlineImageAccess)
        .databaseAccess(this.databaseAccess)
        .onPageEnd(() => {
          if (!this.hasInitDownloadDelegate) {
            try {
              this.delegate.onBeforeDownload((webDownloadItem: webView.WebDownloadItem) => {
                if (this.testOnBeforeDownload) {
                  this.testOnBeforeDownload = false
                  this.endTime = Utils.getSystemTime()
                }
                console.log("will start a download guid:" + webDownloadItem.getGuid());
                console.log("will start a download method:" + webDownloadItem.getMethod());
                console.log("will start a download mime type:" + webDownloadItem.getMimeType());
                console.log("will start a download url:" + webDownloadItem.getUrl());
                console.log("will start a download suggest name:" + webDownloadItem.getSuggestedFileName());
                if (this.testStart) {
                  this.testStart = false
                  this.startTime = Utils.getSystemTime()
                  webDownloadItem.start(this.savePath);
                  this.endTime = Utils.getSystemTime()
                } else {
                  webDownloadItem.start(this.savePath);
                }
              })
              this.delegate.onDownloadUpdated((webDownloadItem: webView.WebDownloadItem) => {
                if (this.testOnDownloadUpdated) {
                  this.testOnDownloadUpdated = false
                  this.endTime = Utils.getSystemTime()
                }
                console.log("download update download guid: " + webDownloadItem.getGuid());
                console.log("download update download method:" + webDownloadItem.getMethod());
                console.log("download update download state: " + webDownloadItem.getState());
                console.log("download update percent complete: " + webDownloadItem.getPercentComplete());
                console.log("download update full path: " + webDownloadItem.getFullPath());
                console.log("download update current speed: " + webDownloadItem.getCurrentSpeed());
                console.log("download update total bytes: " + webDownloadItem.getTotalBytes());
                console.log("download update received bytes: " + webDownloadItem.getReceivedBytes());
                this.downloadingItem = webDownloadItem;
              })
              this.delegate.onDownloadFailed((webDownloadItem: webView.WebDownloadItem) => {
                if (this.testOnDownloadFailed) {
                  this.testOnDownloadFailed = false
                  this.endTime = Utils.getSystemTime()
                }
                console.log("download failed method:" + webDownloadItem.getMethod());
                console.log("download failed guid: " + webDownloadItem.getGuid());
                console.log("download failed lastErrorCode: " + webDownloadItem.getLastErrorCode());
                webDownloadItem.cancel();
                this.failedDownload = webDownloadItem;
                this.failedDownloadSerializedData = webDownloadItem.serialize();
              })
              this.delegate.onDownloadFinish((webDownloadItem: webView.WebDownloadItem) => {
                if (this.testOnDownloadFinish) {
                  this.testOnDownloadFinish = false
                  this.endTime = Utils.getSystemTime()
                }
                console.log("download finish method:" + webDownloadItem.getMethod());
                console.log("download finish guid: " + webDownloadItem.getGuid());
              })
              this.controller.setDownloadDelegate(this.delegate);
              webView.WebDownloadManager.setDownloadDelegate(this.delegate);
              this.hasInitDownloadDelegate = true
            } catch (error) {
              let e: business_error.BusinessError = error as business_error.BusinessError;
              console.error(`ErrorCode: ${e.code},  Message: ${e.message}`);
            }
          }
        })
    }
  }
}