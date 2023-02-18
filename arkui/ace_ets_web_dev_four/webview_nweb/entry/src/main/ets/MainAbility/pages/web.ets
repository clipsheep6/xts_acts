/*
 * Copyright (c) 2022 Huawei Device Co., Ltd.
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
// @ts-nocheck
import events_emitter from '@ohos.events.emitter';
import AbilityDelegatorRegistry from '@ohos.application.abilityDelegatorRegistry';
import { Hypium } from '@ohos/hypium';
import testsuite from '../../test/List.test';
import web_webview from '@ohos.web.webview';
function emitEvent(actualValue,eventId){
    try {
        let backData = {
            data: {
                "ACTION": actualValue
            }
        }
        let backEvent = {
            eventId:eventId,
            priority:events_emitter.EventPriority.LOW
        }
        console.info("webFlag start to emit action state");
        events_emitter.emit(backEvent, backData);
    } catch (err) {
        console.info("webFlag emit action state err: " + JSON.stringify(err));
    }
}

function sleep(time){
  return new Promise((resolve,reject)=>{
    setTimeout(()=>{
      resolve("ok")
    },time)
  }).then(()=>{
    console.info(`sleep ${time} over...`)
  })
}
@Entry
@Component
struct Index {
  controller: web_webview.WebviewController = new web_webview.WebviewController();
    @State str:string="emitStoreWebArchive"
    @State message:string=""
    @State KEYEVENTID: number = 10
    @State NETWORKEVENTID: number = 2601
    @State NETWORKSECEVENTID: number = 2602
    @State NETWORKTHIREVENTID: number = 2603
    @State NETWORKFOUREVENTID: number = 2604
    @State NETWORKFIFEVENTID: number = 2605
    @State ORIGINSLURLEEVENTID: number = 6201
    @State ORIGINSLURLESECEVENTID: number = 6202
    @State ORIGINSLURLETHIREVENTID: number = 6203
    @State ORIGINSLURLEFOUREVENTID: number = 6204
    @State ORIGINSLURLEFIFEVENTID: number = 6205
    @State HASIMAGEFIREVENTID: number = 6401
    @State HASIMAGESECEVENTID: number = 6402
    @State HASIMAGETHIREVENTID: number = 6403
    @State HASIMAGEFOURTHEVENTID: number = 6404
    @State HASIMAGEFIFEVENTID: number = 6405
    @State HASIMAGESIXEVENTID: number = 6406
    @State BACKFORWARDENTRIESEVENTID: number = 7801
    @State BACKFORWARDENTRIESSECEVENTID: number = 7802
    @State BACKFORWARDENTRIESTHIEVENTID: number = 7803
    @State BACKFORWARDENTRIESFOUEVENTID: number = 7804
    @State BACKFORWARDENTRIESFIFEVENTID: number = 7805
    @State BACKFORWARDENTRIESSIXEVENTID: number = 7806
    @State BACKFORWARDENTRIESSEVENEVENTID: number = 7807
    @State GETFAVICONFIREVENTID: number = 5604
    @State GETFAVICONSECEVENTID: number = 5605
    @State GETFAVICONTHIREVENTID: number = 5606
    @State GETFAVICONFOURTHEVENTID: number = 5607
    @State GETFAVICONFIFEVENTID: number = 5608
    @State PAGEDOWNEVENTID: number = 5701
    @State PAGEDOWNSECEVENTID: number = 5702
    @State PAGEDOWNTHIREVENTID: number = 5703
    @State PAGEDOWNFOUREVENTID: number = 5704
    @State PAGEDOWNFIFEVENTID: number = 5705
    @State PAGEDUPEVENTID: number = 5801
    @State PAGEDUPSECEVENTID: number = 5802
    @State PAGEDUPTHIREVENTID: number = 5803
    @State PAGEDUPFOUREVENTID: number = 5804
    @State PAGEDUPFIFEVENTID: number = 5805
    event : Object = undefined
    callbackCnt : number = 0;
    ERRORNUMBER: number = -1;
    async onPageShow(){
        let valueChangeEvent={
            eventId:this.KEYEVENTID,
            priority:events_emitter.EventPriority.LOW
        }
        events_emitter.on(valueChangeEvent,this.valueChangeCallBack)
      console.info("key==>fantasyHeight res : onPageShow")
        let abilityDelegator: any
        abilityDelegator = AbilityDelegatorRegistry.getAbilityDelegator()
        let abilityDelegatorArguments: any
        abilityDelegatorArguments = AbilityDelegatorRegistry.getArguments()
        console.info('start run testcase!!!')
        await sleep(2000)
        Hypium.hypiumTest(abilityDelegator, abilityDelegatorArguments, testsuite) 
    }
    private valueChangeCallBack=(eventData)=>{
        console.info("web page valueChangeCallBack");
        if(eventData != null){
             console.info("valueChangeCallBack:"+   JSON.stringify(eventData));
             if(eventData.data.ACTION != null){
                 this.str = eventData.data.ACTION;
             }
        }
    }
    aboutToAppear(){
    }
    build(){
        Column(){
            Row(){
              Button("Load Baidu").key('baidu').onClick(async () => {
                 this.controller.loadUrl("http://www.baidu.com/")
              })
              Button("Load baidu-runoob").key('baidu-runoob').onClick(async () => {
                 this.controller.loadUrl("http://www.baidu.com/")
                 await sleep(2000)
                 this.controller.loadUrl("www.runoob.com")
              })
             Button("web click").key('webviewkey').onClick(async () => {
                console.info("========Enter Button==========")
               setTimeout(async ()=>{
                 console.info("key==>"+this.str)
                 switch(this.str){
                   case "WebView_Stage_GetOriginalUrl_0100":{
                     this.controller.loadUrl($rawfile("index.html"))
                     await sleep(4000)
                     let getOriginalUrl=this.controller.getOriginalUrl()
                     console.info("key==>WebView_Stage_GetOriginalUrl_0100 res :"+JSON.stringify(getOriginalUrl))
                     emitEvent(getOriginalUrl,this.ORIGINSLURLEEVENTID)
                     break;
                   }
                   case "WebView_Stage_GetOriginalUrl_0200":{
                     this.controller.loadUrl("http://www.baidu.com/")
                     setTimeout(()=>{
                       let getOriginalUrlSec=this.controller.getOriginalUrl()
                       console.info("key==>WebView_Stage_GetOriginalUrl_0200 res :"+JSON.stringify(getOriginalUrlSec))
                       emitEvent(getOriginalUrlSec,this.ORIGINSLURLESECEVENTID)
                     },5000)
                     break;
                   }
                   case "WebView_Stage_GetOriginalUrl_0300":{
                       this.controller.loadUrl("http://www.bai111du.com/")
                        await sleep(5000) 
                        let getOriginalUrl=this.controller.getOriginalUrl()
                       console.info("key==>WebView_Stage_GetOriginalUrl_0300 res :"+JSON.stringify(getOriginalUrl))
                       emitEvent(getOriginalUrl,this.ORIGINSLURLETHIREVENTID)
                     break;
                   }
                   case "WebView_Stage_GetOriginalUrl_0400":{
                     this.controller.loadUrl($rawfile("index.html"))
                     setTimeout(()=>{
                       let getOriginalUrl=this.controller.getOriginalUrl()
                     this.controller.loadUrl($rawfile("index.html"))
                       let getOriginalUrlSec=this.controller.getOriginalUrl()
                       if(getOriginalUrl == getOriginalUrlSec) {
                         emitEvent("result true",this.ORIGINSLURLEFOUREVENTID)
                       }
                     },4000)
                     break;
                   }
                   case "WebView_Stage_GetOriginalUrl_0500":{
                     this.controller.loadUrl($rawfile("index.html"))
                     await sleep(2000)
                     this.controller.loadUrl($rawfile("hasImageSec.html"))
                     await sleep(2000)
                     let getOriginalUrl=this.controller.getOriginalUrl()
                     console.info("key==>WebView_Stage_GetOriginalUrl_0400 res :"+JSON.stringify(getOriginalUrl))
                     if(getOriginalUrl == "resource://rawfile/hasImageSec.html") {
                         emitEvent("result true",this.ORIGINSLURLEFIFEVENTID)
                       }
                     break;
                   }
                   case "WebView_Stage_PutNetworkAvailable_0100":{
                     this.controller.loadUrl($rawfile("index.html"))
                     this.controller.setNetworkAvailable(true)
                     setTimeout(()=>{
                       this.controller.runJavaScript("NetworkAvailable()",(err,res)=>{
                         console.info("key==>WebView_Stage_PutNetworkAvailable_0100 res :"+JSON.stringify(res))
                         emitEvent(res,this.NETWORKEVENTID)
                       })
                     },4000)
                     break;
                   }
                   case "WebView_Stage_PutNetworkAvailable_0200":{
                     this.controller.loadUrl($rawfile("index.html"))
                     this.controller.setNetworkAvailable(false)
                     setTimeout(()=>{
                       this.controller.runJavaScript("NetworkAvailable()",(err,res)=>{
                         console.info("key==>WebView_Stage_PutNetworkAvailable_0200 res :"+JSON.stringify(res))
                         emitEvent(res,this.NETWORKSECEVENTID)
                       })
                     },4000)
                     break;
                   }
                   case "WebView_Stage_PutNetworkAvailable_0300":{
                     this.controller.loadUrl($rawfile("index.html"))
                     this.controller.setNetworkAvailable(true)
                     this.controller.setNetworkAvailable(false)
                     setTimeout(()=>{
                       this.controller.runJavaScript("NetworkAvailable()",(err,res)=>{
                         console.info("key==>WebView_Stage_PutNetworkAvailable_0300 res :"+JSON.stringify(res))
                         emitEvent(res,this.NETWORKTHIREVENTID)
                       })
                     },4000)
                     break;
                   }
                   case "WebView_Stage_PutNetworkAvailable_0400":{
                     this.controller.loadUrl($rawfile("index.html"))
                     console.info("key==>WebView_Stage_PutNetworkAvailable_0400 res:")
                     try{
                       this.controller.setNetworkAvailable(null)
                     }catch(err){
                       console.info("key==>WebView_Stage_PutNetworkAvailable_0400 err :"+ JSON.stringify(err))
                     }
                     setTimeout(()=>{
                       this.controller.runJavaScript("NetworkAvailable()",(err,res)=>{
                         console.info("key==>WebView_Stage_PutNetworkAvailable_0400 res :"+JSON.stringify(res))
                         emitEvent(res,this.NETWORKFOUREVENTID)
                       })
                     },4000)
                     break;
                   }
                   case "WebView_Stage_PutNetworkAvailable_0500":{
                     this.controller.loadUrl($rawfile("index.html"))
                     try{
                       this.controller.setNetworkAvailable(undefined)
                     }catch(err){
                       console.info("key==>WebView_Stage_PutNetworkAvailable_0500 err :"+ JSON.stringify(err))
                     }
                     setTimeout(()=>{
                       this.controller.runJavaScript("NetworkAvailable()",(err,res)=>{
                         console.info("key==>WebView_Stage_PutNetworkAvailable_0500 res :"+JSON.stringify(res))
                         emitEvent(res,this.NETWORKFIFEVENTID)
                       })
                     },4000)
                     break;
                   }
                   case "WebView_Stage_RemoveCache_0100":{
                      console.info("WebView_Stage_RemoveCache_0100 removeCache start ")
                      await sleep(1000)
                      this.controller.removeCache(false)
                      console.info("WebView_Stage_RemoveCache_0100  removeCache end")
                      break;
                   }
                   case "WebView_Stage_RemoveCache_0200":{
                      await sleep(1000)
                      console.info("WebView_Stage_RemoveCache_0200 removeCache start ")
                      try{
                        this.controller.removeCache("aaa")
                      } catch(err) {
                        console.info("The removeCache parameter cannot be string")
                      }
                        console.info("WebView_Stage_RemoveCache_0200 removeCache end ")
                       break;
                   }
                   case "WebView_Stage_RemoveCache_0500":{
                      console.info("WebView_Stage_RemoveCache_0500 removeCache start ")
                      try{
                        this.controller.removeCache(123)
                      } catch(err) {
                        console.info("The removeCache parameter cannot be number")
                      }
                      console.info("WebView_Stage_RemoveCache_0500 removeCache end ")
                      break;
                   }
                   case "WebView_Stage_RemoveCache_0400":{
                      console.info("WebView_Stage_RemoveCache_0400 removeCache start ")
                    try{
                      this.controller.removeCache(null)
                    } catch(err) {
                      console.info("The removeCache parameter cannot be null")
                    }
                      console.info("WebView_Stage_RemoveCache_0400 removeCache end ")
                      break;
                   }
                   case "WebView_Stage_RemoveCache_0300":{
                      console.info("WebView_Stage_RemoveCache_0300 removeCache start ")
                    try{
                      this.controller.removeCache(undefined)
                    } catch(err) {
                      console.info("The removeCache parameter cannot be undefined")
                    }
                      console.info("WebView_Stage_RemoveCache_0300 removeCache end ")
                      break;
                   }
                   case "WebView_Stage_HasImage_0100":{
                    this.controller.loadUrl($rawfile("index.html"));
                    await sleep(4000);
                     this.controller.hasImage((err,data) => {
                       console.info("key==>WebView_Stage_HasImage_0100:" + JSON.stringify(data))
                       emitEvent(data,this.HASIMAGEFIREVENTID)
                     })
                     break;
                   }
                   case "WebView_Stage_HasImage_0200":{
                    this.controller.loadUrl($rawfile("index.html"));
                    await sleep(4000);
                    this.controller.hasImage().then((data) => {
                      console.info("key==>WebView_Stage_HasImage_0200:" + JSON.stringify(data))
                      emitEvent(data,this.HASIMAGESECEVENTID)
                     }); 
                     break;
                   }
                   case "WebView_Stage_HasImage_0300":{
                    this.controller.loadUrl($rawfile("hasImageFir.html"));
                    setTimeout(()=>{
                      this.controller.hasImage((err,data) => {
                        console.info("key==>WebView_Stage_HasImage_0300:" + JSON.stringify(data))
                        emitEvent(data,this.HASIMAGETHIREVENTID)
                      })
                    },4000)
                    break;
                   }
                   case "WebView_Stage_HasImage_0400":{
                    this.controller.loadUrl($rawfile("hasImageFir.html"));
                    this.controller.hasImage().then((data) => {
                     console.info("key==>WebView_Stage_HasImage_0400:" + JSON.stringify(data))
                     emitEvent(data,this.HASIMAGEFOURTHEVENTID)
                     }); 
                     break;
                   }
                   case "WebView_Stage_HasImage_0500":{
                    this.controller.loadUrl($rawfile("hasImageSec.html"));
                    setTimeout(()=>{
                      this.controller.hasImage((err,data) => {
                        console.info("key==>WebView_Stage_HasImage_0500:" + JSON.stringify(data))
                        emitEvent(data,this.HASIMAGEFIFEVENTID)
                      })
                    },4000)
                    break;
                   }
                   case "WebView_Stage_HasImage_0600":{
                    this.controller.loadUrl($rawfile("hasImageSec.html"));
                    this.controller.hasImage().then((data) => {
                     console.info("key==>hasImageSix:" + JSON.stringify(data))
                     emitEvent(data,this.HASIMAGESIXEVENTID)
                     }); 
                     break;
                   }
                  case "GetBackForwardEntries0100": {
                    await sleep(4000)
                    console.info("GetBackForwardEntries0100 into -----")
                    let list = this.controller.getBackForwardEntries()
                    console.info("key==>GetBackForwardEntries0100 list :" + JSON.stringify(list))
                    await sleep(3000)
                    let item = list.getItemAtIndex(list.currentIndex)
                    console.info("key==>GetBackForwardEntries0100 item :" + JSON.stringify(item))
                    let ImageInfo = item.icon.getImageInfo((err,data)=>{
                        console.log("key==>GetBackForwardEntries0100 pixmap height ---" + data.size.height)
                        console.log("key==>GetBackForwardEntries0100 pixmap width ---" + data.size.width)
                    if(list.currentIndex != undefined && list.size == list.currentIndex+1 && 
                        item.historyUrl == 'https://www.baidu.com/' && 
                        item.historyRawUrl == 'http://www.baidu.com/' && item.title == '百度一下，你就知道' &&
                        data.size.height != 0 && data.size.width != 0) {
                      console.info("GetBackForwardEntries0100 true")
                      emitEvent("GetBackForwardEntries0100 true", this.BACKFORWARDENTRIESEVENTID)
                      } else {
                        emitEvent("GetBackForwardEntries0100 false", this.BACKFORWARDENTRIESEVENTID)
                      }
                    })
                    break;
                  }
                  case "GetBackForwardEntries0200": {
                   console.info("key==>DefaultFontSize baidu-gitee :"+JSON.stringify(this.controller.getTitle()))
                    await sleep(10000)
                    if(this.controller.getTitle() == "菜鸟教程 - 学的不仅是技术，更是梦想！") {
                      let list = this.controller.getBackForwardEntries()
                      console.info("key==>GetBackForwardEntries0200 list :" + JSON.stringify(list))
                      await sleep(3000)
                      let item = list.getItemAtIndex(list.currentIndex)
                      console.info("key==>GetBackForwardEntries0200 item :" + JSON.stringify(item))
                      let ImageInfo = item.icon.getImageInfo((err,data)=>{
                        console.log("key==>GetBackForwardEntries0200 pixmap height ---" + data.size.height)
                        console.log("key==>GetBackForwardEntries0200 pixmap width ---" + data.size.width)
                      if(list.currentIndex != undefined && list.size == list.currentIndex+1 && 
                          item.historyUrl == "https://www.runoob.com/" && 
                          item.historyRawUrl == "http://www.runoob.com/" && 
                          item.title == "菜鸟教程 - 学的不仅是技术，更是梦想！" &&
                          data.size.height != 0 && data.size.width != 0) {
                        console.info("GetBackForwardEntries0200 true")
                        emitEvent("GetBackForwardEntries0200 true", this.BACKFORWARDENTRIESSECEVENTID)
                        } else {
                          emitEvent("GetBackForwardEntries0200 false", this.BACKFORWARDENTRIESSECEVENTID)
                        }
                      })
                    }
                    break;
                  }
                  case "GetBackForwardEntries0300": {
                    this.controller.loadUrl($rawfile("index.html"))
                    await sleep(2000)
                    let list = this.controller.getBackForwardEntries()
                    console.info("key==>GetBackForwardEntries0300 list :" + JSON.stringify(list))
                    await sleep(3000)
                    try{
                      let item = list.getItemAtIndex(list.currentIndex)
                      console.info("key==>GetBackForwardEntries0300 item :" + JSON.stringify(item))
                      if(list.currentIndex != undefined && list.size == list.currentIndex+1 && 
                        item.historyUrl == "resource://rawfile/index.html" && 
                        item.historyRawUrl == "resource://rawfile/index.html" && 
                        item.title == "index") {
                      console.info("GetBackForwardEntries0300 true")
                      emitEvent("GetBackForwardEntries0300 true", this.BACKFORWARDENTRIESTHIEVENTID)
                      }
                      else{
                        emitEvent("GetBackForwardEntries0300 false", this.BACKFORWARDENTRIESTHIEVENTID)
                      }
                    } catch(err) {
                    if (list.currentIndex != undefined && list.size == list.currentIndex+1 && 
                        err.code == "17100003") {
                      console.info("GetBackForwardEntries0300 err true")
                      emitEvent("GetBackForwardEntries0300 err true", this.BACKFORWARDENTRIESTHIEVENTID)
                      }
                      else{
                        emitEvent("GetBackForwardEntries0300 err false", this.BACKFORWARDENTRIESTHIEVENTID)
                      }
                    }
                    break;
                  }
                  case "GetBackForwardEntries0400": {
                    await sleep(4000)
                    let list = this.controller.getBackForwardEntries()
                    console.info("key==>GetBackForwardEntries0400 list :" + JSON.stringify(list))
                    await sleep(3000)
                    try{
                      let item = list.getItemAtIndex(this.ERRORNUMBER)
                      console.info("key==>GetBackForwardEntries0400 item :" + JSON.stringify(item))
                      if (list.currentIndex != undefined && list.size == list.currentIndex+1 &&
                        item == undefined ) {
                       console.info("GetBackForwardEntries0400 true")
                        emitEvent("GetBackForwardEntries0400 true", this.BACKFORWARDENTRIESFOUEVENTID)
                      }
                      else{
                        emitEvent("GetBackForwardEntries0400 false", this.BACKFORWARDENTRIESFOUEVENTID)
                      }
                    } catch(err) {
                      console.info("GetBackForwardEntries0400 err"+ JSON.stringify(err))
                      if (list.currentIndex != undefined && list.size == list.currentIndex+1 &&
                        err.code == "401" ) {
                       console.info("GetBackForwardEntries0400 err true")
                        emitEvent("GetBackForwardEntries0400 err true", this.BACKFORWARDENTRIESFOUEVENTID)
                      }
                      else{
                        emitEvent("GetBackForwardEntries0400 err false", this.BACKFORWARDENTRIESFOUEVENTID)
                      }
                    }
                    break;
                  }
                  case "GetBackForwardEntries0500": {
                    await sleep(4000)
                    let list = this.controller.getBackForwardEntries()
                    console.info("key==>GetBackForwardEntries0500 list :" + JSON.stringify(list))
                    try{
                      let item = list.getItemAtIndex(null)
                      console.info("key==>GetBackForwardEntries0500 item :" + JSON.stringify(item))
                    } catch(err) {
                      if (list.currentIndex != undefined && list.size == list.currentIndex+1 && 
                          err.code == "401") {
                        console.info("GetBackForwardEntries0500 true")
                        emitEvent("GetBackForwardEntries0500 true", this.BACKFORWARDENTRIESFIFEVENTID)
                        }
                        else{
                          emitEvent("GetBackForwardEntries0500 false", this.BACKFORWARDENTRIESFIFEVENTID)
                        }
                      }
                    break;
                  }
                  case "GetBackForwardEntries0600": {
                    await sleep(4000)
                    let list = this.controller.getBackForwardEntries()
                    console.info("key==>GetBackForwardEntries0600 list :" + JSON.stringify(list))
                    await sleep(3000)
                    try{
                      let item = list.getItemAtIndex(list.currentIndex+10)
                      console.info("key==>GetBackForwardEntries0600 item :" + JSON.stringify(item))
                      if (list.currentIndex != undefined && list.size == list.currentIndex+1 &&
                        item == undefined ) {
                       console.info("GetBackForwardEntries0600 true")
                        emitEvent("GetBackForwardEntries0600 true", this.BACKFORWARDENTRIESSIXEVENTID)
                      }
                      else{
                        emitEvent("GetBackForwardEntries0600 false", this.BACKFORWARDENTRIESSIXEVENTID)
                      }
                    } catch(err) {
                      console.info("GetBackForwardEntries0600 err"+ JSON.stringify(err))
                      if (list.currentIndex != undefined && list.size == list.currentIndex+1 &&
                        err.code == "401" ) {
                       console.info("GetBackForwardEntries0600 err true")
                        emitEvent("GetBackForwardEntries0600 err true", this.BACKFORWARDENTRIESSIXEVENTID)
                      }
                      else{
                        emitEvent("GetBackForwardEntries0600 err false", this.BACKFORWARDENTRIESSIXEVENTID)
                      }
                    }
                    break;
                  }
                  case "GetBackForwardEntries0700": {
                    await sleep(4000)
                    let list = this.controller.getBackForwardEntries()
                    console.info("key==>GetBackForwardEntries0700 list :" + JSON.stringify(list))
                    try{
                      let item = list.getItemAtIndex(undefined)
                      console.info("key==>GetBackForwardEntries0700 item :" + JSON.stringify(item))
                    } catch(err) {
                      if (list.currentIndex != undefined && list.size == list.currentIndex+1 && 
                          err.code == "401") {
                        console.info("GetBackForwardEntries0700 true")
                        emitEvent("GetBackForwardEntries0700 true", this.BACKFORWARDENTRIESSEVENEVENTID)
                        }
                        else{
                          emitEvent("GetBackForwardEntries0700 false", this.BACKFORWARDENTRIESSEVENEVENTID)
                        }
                      }
                    break;
                  }
                  case "WebView_Stage_GetFavicon_0100":{
                    console.info("key==>WebView_Stage_GetFavicon_0100 res : 11111111")
                    setTimeout(()=>{
                      console.info("key==>WebView_Stage_GetFavicon_0100 res : 22222")
                      let PixelMap = this.controller.getFavicon();
                      console.info("key==>WebView_Stage_GetFavicon_0100 res : 333333"+JSON.stringify(PixelMap))
                      console.info("key==>WebView_Stage_GetFavicon_0100 res : 4444"+JSON.stringify(PixelMap.isEditable))
                      let isEditable = PixelMap.isEditable;
                      console.info("key==>WebView_Stage_GetFavicon_0100 res :"+JSON.stringify(isEditable))
                      emitEvent(isEditable,this.GETFAVICONFIREVENTID)
                    },8000)
                    break;
                  }
                  case "WebView_Stage_GetFavicon_0200":{
                    setTimeout(()=>{
                      let PixelMap = this.controller.getFavicon();
                      PixelMap.getImageInfo((err,data) => {
                        let width = data.size.width;
                        let result = false;
                        if(width == 64 || width == 192) {
                          result = true;
                        }
                        console.info("key==>WebView_Stage_GetFavicon_0200 res :"+JSON.stringify(result))
                        emitEvent(result,this.GETFAVICONSECEVENTID)
                      });
                    },8000)
                    break;
                  }
                  case "WebView_Stage_GetFavicon_0300":{
                    setTimeout(()=>{
                      let PixelMap = this.controller.getFavicon();
                      let BytesNumber = PixelMap.getBytesNumberPerRow();
                      let result = false;
                      if(BytesNumber == 256 || BytesNumber == 768) {
                        result = true;
                      }
                      console.info("key==>WebView_Stage_GetFavicon_0300 res :" + JSON.stringify(result))
                      emitEvent(result, this.GETFAVICONTHIREVENTID)
                    },8000)
                    break;
                  }
                  case "WebView_Stage_GetFavicon_0400":{
                    setTimeout(()=>{
                      let PixelMap = this.controller.getFavicon();
                      let PixelBytesNumber = PixelMap.getPixelBytesNumber();
                      let result = false;
                      if(PixelBytesNumber == 16384 || PixelBytesNumber == 147456) {
                        result = true;
                      }
                      console.info("key==>WebView_Stage_GetFavicon_0400 res :" + JSON.stringify(result))
                      emitEvent(result, this.GETFAVICONFOURTHEVENTID)
                    },8000)
                    break;
                  }
                  case "WebView_Stage_GetFavicon_0500":{
                    setTimeout(()=>{
                      let PixelMap = this.controller.getFavicon();
                      let Density = PixelMap.getDensity();
                      console.info("key==>WebView_Stage_GetFavicon_0500 res :" + JSON.stringify(Density))
                      emitEvent(Density, this.GETFAVICONFIFEVENTID)
                    },8000)
                    break;
                  }
                  case "WebView_Stage_ScrollPageDown_0100":{
                    this.controller.loadUrl($rawfile("pageupdown.html"))
                    await sleep(1000)
                    this.controller.pageDown(true)
                    await sleep(1000)
                    this.controller.runJavaScript("PageScrollDown()",(err,res)=>{
                      console.info("key==>WebView_Stage_ScrollPageDown_0100 res :"+JSON.stringify(res))
                      emitEvent(res,this.PAGEDOWNEVENTID)
                    })
                    break;
                  }
                  case "WebView_Stage_ScrollPageDown_0200":{
                    this.controller.loadUrl($rawfile("pageupdown.html"))
                    this.controller.pageUp(true)
                    await sleep(1000)
                    this.controller.pageDown(false)
                    await sleep(1000)
                    this.controller.runJavaScript("PageScrollDown()",(err,res)=>{
                      console.info("key==>WebView_Stage_ScrollPageDown_0200 res :"+JSON.stringify(res))
                      emitEvent(res,this.PAGEDOWNSECEVENTID)
                    })
                    break;
                  }
                  case "WebView_Stage_ScrollPageDown_0300":{
                    this.controller.loadUrl($rawfile("pageupdown.html"))
                    await sleep(1000)
                    try{
                      this.controller.pageDown(null)
                    }catch(err){
                      console.info("key==>WebView_Stage_ScrollPageDown_0300 err :"+ JSON.stringify(err))
                      emitEvent("err",this.PAGEDOWNTHIREVENTID)
                    }
                    break;
                  }
                  case "WebView_Stage_ScrollPageDown_0400":{
                    this.controller.loadUrl($rawfile("pageupdown.html"))
                    await sleep(1000)
                    try{
                      this.controller.pageDown(undefined)
                    }catch(err){
                      console.info("key==>WebView_Stage_ScrollPageDown_0400 err :"+ JSON.stringify(err))
                      emitEvent("err",this.PAGEDOWNFOUREVENTID)
                    }
                    break;
                  }
                  case "WebView_Stage_ScrollPageDown_0500":{
                    this.controller.loadUrl($rawfile("pageupdown.html"))
                    await sleep(1000)
                    this.controller.pageDown(true)
                    await sleep(1000)
                    this.controller.pageDown(false)
                    await sleep(1000)
                    this.controller.runJavaScript("PageScrollDown()",(err,res)=>{
                      console.info("key==>WebView_Stage_ScrollPageDown_0500 res :"+JSON.stringify(res))
                      emitEvent(res,this.PAGEDOWNFIFEVENTID)
                    })
                    break;
                  }
                  case "WebView_Stage_ScrollPageUp_0100":{
                    this.controller.loadUrl($rawfile("pageupdown.html"))
                    await sleep(1000)
                    this.controller.pageDown(true)
                    await sleep(1000)
                    this.controller.runJavaScript("PageScrollDown()", async (err,res)=>{
                      if(res=="\"PageScroll Down true\"") {
                        this.controller.pageUp(true)
                        await sleep(1000)
                        this.controller.runJavaScript("PageScrollUp()",(err,res)=>{
                          console.info("key==>WebView_Stage_ScrollPageUp_0100 res :"+JSON.stringify(res))
                          emitEvent(res,this.PAGEDUPEVENTID)
                        })
                      }
                    })
                    break;
                  }
                  case "WebView_Stage_ScrollPageUp_0200":{
                    this.controller.loadUrl($rawfile("pageupdown.html"))
                    await sleep(1000)
                    this.controller.pageDown(true)
                    await sleep(1000)
                    this.controller.runJavaScript("PageScrollDown()", async (err,res)=>{
                      if(res=="\"PageScroll Down true\"") {
                        this.controller.pageUp(false)
                        await sleep(1000)
                        this.controller.runJavaScript("PageScrollUp()",(err,res)=>{
                          console.info("key==>WebView_Stage_ScrollPageUp_0200 res :"+JSON.stringify(res))
                          emitEvent(res,this.PAGEDUPSECEVENTID)
                        })
                      }
                    })
                    break;
                  }
                  case "WebView_Stage_ScrollPageUp_0300":{
                    this.controller.loadUrl($rawfile("pageupdown.html"))
                    await sleep(1000)
                    this.controller.pageDown(true)
                    await sleep(1000)
                    this.controller.runJavaScript("PageScrollDown()",(err,res)=>{
                      if(res=="\"PageScroll Down true\"") {
                        try{
                          this.controller.pageUp(null)
                        }catch(err){
                          console.info("key==>WebView_Stage_ScrollPageUp_0300 err :"+ JSON.stringify(err))
                          emitEvent("err",this.PAGEDUPTHIREVENTID)
                        }
                      }
                    })
                    break;
                  }
                  case "WebView_Stage_ScrollPageUp_0400":{
                    this.controller.loadUrl($rawfile("pageupdown.html"))
                    await sleep(1000)
                    this.controller.pageDown(true)
                    await sleep(1000)
                    this.controller.runJavaScript("PageScrollDown()",(err,res)=>{
                      if(res=="\"PageScroll Down true\"") {
                        try{
                          this.controller.pageUp(undefined)
                        }catch(err){
                          console.info("key==>WebView_Stage_ScrollPageUp_0400 err :"+ JSON.stringify(err))
                          emitEvent("err",this.PAGEDUPFOUREVENTID)
                        }
                      }
                    })
                    break;
                  }
                  case "WebView_Stage_ScrollPageUp_0500":{
                    this.controller.loadUrl($rawfile("pageupdown.html"))
                    await sleep(1000)
                    this.controller.pageDown(true)
                    await sleep(1000)
                    this.controller.runJavaScript("PageScrollDown()",async (err,res)=>{
                      if(res=="\"PageScroll Down true\"") {
                        this.controller.pageUp(false)
                        await sleep(1000)
                        this.controller.pageUp(true)
                        await sleep(1000)
                        this.controller.runJavaScript("PageScrollUp()",(err,res)=>{
                          console.info("key==>WebView_Stage_ScrollPageUp_0500 res :"+JSON.stringify(res))
                          emitEvent(res,this.PAGEDUPFIFEVENTID)
                        })
                      }
                    })
                    break;
                  }
                 }
               },2000)
             })
            }
            Web({
               src: $rawfile('index.html'),
               controller: this.controller
             })
             .height(500)
        }
    }
}
