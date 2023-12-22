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
struct WebViewPerformanceWebContextMenu {
  controller: webView.WebviewController = new webView.WebviewController();
  @State Permission: Boolean = false
  @State str: string = ""
  @State mixedSwitch: boolean = false
  @State access: boolean = true
  @State LinkUrl: String = ''
  @State ImageContent: boolean = false
  @State hasImageCbOnline: boolean = true;
  @State onContextMenuShowState: Boolean = false
  @State startTime: number = 0
  @State endTime: number = 0
  @State paramString: string = ''
  @State runJavaString: boolean = false
  @State callBackId: number = 0
  @State onRequest: boolean = false
  @State onRequestState: boolean = false
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
              case "testWebContextMenuParamX001": {
                this.paramString = 'X'
                await Utils.sleep(2000)
                let driver = Driver.create();
                let button = await driver.findComponent(ON.id('WebViewPerformanceWebContextMenuWebView'));
                await button.longClick();
                break;
              }
              case "testWebContextMenuParamY001": {
                this.paramString = 'Y'
                await Utils.sleep(2000)
                let driver = Driver.create();
                let button = await driver.findComponent(ON.id('WebViewPerformanceWebContextMenuWebView'));
                await button.longClick();
                break;
              }
              case "testWebContextMenuParamGetLinkUrl001": {
                this.paramString = 'GetLinkUrl'
                let driver = Driver.create();
                let button = await driver.findComponent(ON.id('WebViewPerformanceWebContextMenuWebView'));
                await button.longClick();
                break;
              }
              case "testWebContextMenuParamGetUnfilteredLinkUrl001": {
                this.paramString = 'GetUnfilteredLinkUrl'
                let driver = Driver.create();
                let button = await driver.findComponent(ON.id('WebViewPerformanceWebContextMenuWebView'));
                await button.longClick();
                break;
              }
              case "testWebContextMenuParamGetSourceUrl001": {
                this.paramString = 'GetSourceUrl'
                let driver = Driver.create();
                let button = await driver.findComponent(ON.id('WebViewPerformanceWebContextMenuWebView'));
                await button.longClick();
                break;
              }
              case "testWebContextMenuParamExistsImageContents001": {
                this.paramString = 'ExistsImageContents'
                let driver = Driver.create();
                let button = await driver.findComponent(ON.id('WebViewPerformanceWebContextMenuWebView'));
                await button.longClick();
                break;
              }
              case "testWebContextMenuParamGetMediaType001": {
                this.paramString = 'GetMediaType'
                let driver = Driver.create();
                let button = await driver.findComponent(ON.id('WebViewPerformanceWebContextMenuWebView'));
                await button.longClick();
                break;
              }
              case "testWebContextMenuParamGetSelectionText001": {
                this.paramString = 'GetSelectionText'
                let driver = Driver.create();
                let button = await driver.findComponent(ON.id('WebViewPerformanceWebContextMenuWebView'));
                await button.longClick();
                break;
              }
              case "testWebContextMenuParamGetSourceType001": {
                this.paramString = 'GetSourceType'
                let driver = Driver.create();
                let button = await driver.findComponent(ON.id('WebViewPerformanceWebContextMenuWebView'));
                await button.longClick();
                break;
              }
              case "testWebContextMenuParamGetInputFieldType001": {
                this.paramString = 'GetInputFieldType'
                let driver = Driver.create();
                let button = await driver.findComponent(ON.id('WebViewPerformanceWebContextMenuWebView'));
                await button.longClick();
                break;
              }
              case "testWebContextMenuParamIsEditable001": {
                this.paramString = 'IsEditable'
                let driver = Driver.create();
                let button = await driver.findComponent(ON.id('WebViewPerformanceWebContextMenuWebView'));
                await button.longClick();
                break;
              }
              case "testWebContextMenuParamGetEditStateFlags001": {
                this.paramString = 'GetEditStateFlags'
                let driver = Driver.create();
                let button = await driver.findComponent(ON.id('WebViewPerformanceWebContextMenuWebView'));
                await button.longClick();
                await Utils.sleep(2000);
                this.controller.loadUrl("resource://rawfile/indexJru.html")
                await Utils.sleep(2000);
                break;
              }
              case "testWebContextMenuResultCopyImage001": {
                this.paramString = 'copyImage'
                this.controller.loadUrl("resource://rawfile/indexJru.html")
                await Utils.sleep(2000)
                let driver = Driver.create();
                let button = await driver.findComponent(ON.id('WebViewPerformanceWebContextMenuWebView'));
                await button.longClick();
                break;
              }
              case "testWebContextMenuResultCloseContextMenu001": {
                this.paramString = 'closeContextMenu'
                this.controller.loadUrl("resource://rawfile/indexJru.html")
                await Utils.sleep(2000)
                let driver = Driver.create();
                let button = await driver.findComponent(ON.id('WebViewPerformanceWebContextMenuWebView'));
                await button.longClick();
                break;
              }
              case "testWebContextMenuResultCopy001": {
                this.paramString = 'copy'
                this.controller.loadUrl("resource://rawfile/indexJru.html")
                await Utils.sleep(2000)
                let driver = Driver.create();
                let button = await driver.findComponent(ON.id('WebViewPerformanceWebContextMenuWebView'));
                await button.longClick();
                break;
              }
              case "testWebContextMenuResultPaste001": {
                this.paramString = 'paste'
                this.controller.loadUrl("resource://rawfile/indexJru.html")
                await Utils.sleep(2000)
                let driver = Driver.create();
                let button = await driver.findComponent(ON.id('WebViewPerformanceWebContextMenuWebView'));
                await button.longClick();
                break;
              }
              case "testWebContextMenuResultCut001": {
                this.paramString = 'cut'
                this.controller.loadUrl("resource://rawfile/indexJru.html")
                await Utils.sleep(2000)
                let driver = Driver.create();
                let button = await driver.findComponent(ON.id('WebViewPerformanceWebContextMenuWebView'));
                await button.longClick();
                break;
              }
              case "testWebContextMenuResultSelectAll001": {
                this.paramString = 'selectAll'
                this.controller.loadUrl("resource://rawfile/indexJru.html")
                await Utils.sleep(2000)
                let driver = Driver.create();
                let button = await driver.findComponent(ON.id('WebViewPerformanceWebContextMenuWebView'));
                await button.longClick();
                break;
              }
            }
          })
      }

      Web({ src: $rawfile("indexJru.html"), controller: this.controller })
        .key("WebViewPerformanceWebContextMenuWebView")
        .javaScriptAccess(true)
        .geolocationAccess(true)
        .databaseAccess(true)
        .onContextMenuShow((event) => {
          if (event) {
            this.startTime = Utils.getSystemTime()
            switch (this.paramString) {
              case 'X': {
                event.param.x()
                this.endTime = Utils.getSystemTime()
                Utils.emitEvent((this.endTime - this.startTime), this.callBackId)
                Utils.consoleCostTime('WebContextMenuParam.x()', this.startTime, this.endTime)
                this.zero()
                this.paramString = ''
                break
              }
              case 'Y': {
                event.param.y()
                this.endTime = Utils.getSystemTime()
                Utils.emitEvent((this.endTime - this.startTime), this.callBackId)
                Utils.consoleCostTime('WebContextMenuParam.y()', this.startTime, this.endTime)
                this.zero()
                this.paramString = ''
                break
              }
              case 'GetLinkUrl': {
                event.param.getLinkUrl()
                this.endTime = Utils.getSystemTime()
                Utils.emitEvent((this.endTime - this.startTime), this.callBackId)
                Utils.consoleCostTime('WebContextMenuParam.getLinkUrl()', this.startTime, this.endTime)
                this.zero()
                this.paramString = ''
                break
              }
              case 'GetUnfilteredLinkUrl': {
                event.param.getUnfilteredLinkUrl()
                this.endTime = Utils.getSystemTime()
                Utils.emitEvent((this.endTime - this.startTime), this.callBackId)
                Utils.consoleCostTime('WebContextMenuParam.getUnfilteredLinkUrl()', this.startTime, this.endTime)
                this.zero()
                this.paramString = ''
                break
              }
              case 'GetSourceUrl': {
                event.param.getSourceUrl()
                this.endTime = Utils.getSystemTime()
                Utils.emitEvent((this.endTime - this.startTime), this.callBackId)
                Utils.consoleCostTime('WebContextMenuParam.getSourceUrl()', this.startTime, this.endTime)
                this.zero()
                this.paramString = ''
                break
              }
              case 'ExistsImageContents': {
                event.param.existsImageContents()
                this.endTime = Utils.getSystemTime()
                Utils.emitEvent((this.endTime - this.startTime), this.callBackId)
                Utils.consoleCostTime('WebContextMenuParam.existsImageContents()', this.startTime, this.endTime)
                this.zero()
                this.paramString = ''
                break
              }
              case 'GetMediaType': {
                event.param.getMediaType()
                this.endTime = Utils.getSystemTime()
                Utils.emitEvent((this.endTime - this.startTime), this.callBackId)
                Utils.consoleCostTime('WebContextMenuParam.getMediaType()', this.startTime, this.endTime)
                this.zero()
                this.paramString = ''
                break
              }
              case 'GetSelectionText': {
                event.param.getSelectionText()
                this.endTime = Utils.getSystemTime()
                Utils.emitEvent((this.endTime - this.startTime), this.callBackId)
                Utils.consoleCostTime('WebContextMenuParam.getSelectionText()', this.startTime, this.endTime)
                this.zero()
                this.paramString = ''
                break
              }
              case 'GetSourceType': {
                event.param.getSourceType()
                this.endTime = Utils.getSystemTime()
                Utils.emitEvent((this.endTime - this.startTime), this.callBackId)
                Utils.consoleCostTime('WebContextMenuParam.getSourceType()', this.startTime, this.endTime)
                this.zero()
                this.paramString = ''
                break
              }
              case 'GetInputFieldType': {
                event.param.getInputFieldType()
                this.endTime = Utils.getSystemTime()
                Utils.emitEvent((this.endTime - this.startTime), this.callBackId)
                Utils.consoleCostTime('WebContextMenuParam.getInputFieldType()', this.startTime, this.endTime)
                this.zero()
                this.paramString = ''
                break
              }
              case 'IsEditable': {
                event.param.isEditable()
                this.endTime = Utils.getSystemTime()
                Utils.emitEvent((this.endTime - this.startTime), this.callBackId)
                Utils.consoleCostTime('WebContextMenuParam.isEditable()', this.startTime, this.endTime)
                this.zero()
                this.paramString = ''
                break
              }
              case 'GetEditStateFlags': {
                event.param.getEditStateFlags()
                this.endTime = Utils.getSystemTime()
                Utils.emitEvent((this.endTime - this.startTime), this.callBackId)
                Utils.consoleCostTime('WebContextMenuParam.getEditStateFlags()', this.startTime, this.endTime)
                this.zero()
                this.paramString = ''
                break
              }
              case 'onContextMenuShow': {
                this.endTime = Utils.getSystemTime()
                Utils.emitEvent((this.endTime - this.startTime), this.callBackId)
                Utils.consoleCostTime('WebAttribute.onContextMenuShow', this.startTime, this.endTime)
                this.zero()
                this.paramString = ''
                break
              }
              case 'copyImage': {
                event.result.copyImage()
                this.endTime = Utils.getSystemTime()
                Utils.emitEvent((this.endTime - this.startTime), this.callBackId)
                Utils.consoleCostTime('WebContextMenuResult.copyImage()', this.startTime, this.endTime)
                this.zero()
                break;
              }
              case 'closeContextMenu': {
                event.result.closeContextMenu()
                this.endTime = Utils.getSystemTime()
                Utils.emitEvent((this.endTime - this.startTime), this.callBackId)
                Utils.consoleCostTime('WebContextMenuResult.closeContextMenu()', this.startTime, this.endTime)
                this.zero()
                break;
              }
              case 'copy': {
                event.result.copy()
                this.endTime = Utils.getSystemTime()
                Utils.emitEvent((this.endTime - this.startTime), this.callBackId)
                Utils.consoleCostTime('WebContextMenuResult.copy()', this.startTime, this.endTime)
                this.zero()
                break;
              }
              case 'paste': {
                event.result.paste()
                this.endTime = Utils.getSystemTime()
                Utils.emitEvent((this.endTime - this.startTime), this.callBackId)
                Utils.consoleCostTime('WebContextMenuResult.paste()', this.startTime, this.endTime)
                this.zero()
                break;
              }
              case 'cut': {
                event.result.cut()
                this.endTime = Utils.getSystemTime()
                Utils.emitEvent((this.endTime - this.startTime), this.callBackId)
                Utils.consoleCostTime('WebContextMenuResult.cut()', this.startTime, this.endTime)
                this.zero()
                break;
              }
              case 'selectAll': {
                event.result.selectAll()
                this.endTime = Utils.getSystemTime()
                Utils.emitEvent((this.endTime - this.startTime), this.callBackId)
                Utils.consoleCostTime('WebContextMenuResult.selectAll()', this.startTime, this.endTime)
                this.zero()
                break;
              }
              default:
                break
            }
            console.info("onContextMenuShow x = " + event.param.x())
            console.info("onContextMenuShow y = " + event.param.y())
            console.info("onContextMenuShow getLinkUrl = " + event.param.getLinkUrl())
            console.info("onContextMenuShow getUnfilteredLinkUrl = " + event.param.getUnfilteredLinkUrl())
            console.info("onContextMenuShow getSourceUrl = " + event.param.getSourceUrl())
            console.info("onContextMenuShow existsImageContents = " + event.param.existsImageContents())
            console.info("onContextMenuShow getMediaType = " + event.param.getMediaType())
            console.info("onContextMenuShow getSelectionText = " + event.param.getSelectionText())
            console.info("onContextMenuShow getSourceType = " + event.param.getSourceType())
            console.info("onContextMenuShow getInputFieldType = " + event.param.getInputFieldType())
            console.info("onContextMenuShow isEditable = " + event.param.isEditable())
            console.info("onContextMenuShow getEditStateFlags = " + event.param.getEditStateFlags())
            Utils.sleep(2000);
            this.paramString = ''
            event.result.closeContextMenu()
          }
          return true
        })
    }
  }
}
