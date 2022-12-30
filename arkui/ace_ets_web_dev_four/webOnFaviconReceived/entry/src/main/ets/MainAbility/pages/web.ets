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
    @State onkey:string="start"
    @State KEYEVENTID: number = 10
    @State ONFAVICONFIREVENTID: number = 2504
    @State ONFAVICONSECEVENTID: number = 2505
    @State ONFAVICONTHIREVENTID: number = 2506
    @State ONFAVICONFOURTHEVENTID: number = 2507
    @State ONFAVICONFIFEVENTID: number = 2508
    @State event : Object = undefined
    @State onFaviconReceived:string = "No-trigger"
    @State favicon: multimedia_image.PixelMap = undefined;
    async onPageShow(){
        let valueChangeEvent={
            eventId:this.KEYEVENTID,
            priority:events_emitter.EventPriority.LOW
        }
        events_emitter.on(valueChangeEvent,this.valueChangeCallBack)
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
              Button("Load Network").key('baidu').onClick(async () => {
                 this.controller.loadUrl("http://www.baidu.com/")
              })
             Button("web click").key('webviewkey').onClick(async () => {
                console.info("========Enter Button==========")
               setTimeout(async ()=>{
                 console.info("key==>"+this.str)
                 switch(this.str){
                    case "WebView_Stage_onFaviconReceived_0100":{
                      this.controller.loadUrl("file:///data/storage/el1/bundle/phone/resources/rawfile/index.html")
                      setTimeout(()=>{
                      emitEvent(this.onFaviconReceived,this.ONFAVICONFIREVENTID)
                      },4000)
                      break;
                    }
                    case "WebView_Stage_onFaviconReceived_0200":{
                       setTimeout(()=>{
                        let PixelMap = this.event.favicon;
                        let isEditable = PixelMap.isEditable;
                        console.info("key==>WebView_Stage_onFaviconReceived_0200 res :"+JSON.stringify(isEditable))
                        emitEvent(isEditable,this.ONFAVICONSECEVENTID)
                      },8000)
                      break;
                    }
                    case "WebView_Stage_onFaviconReceived_0300":{
                      setTimeout(()=>{
                        let PixelMap = this.event.favicon;
                        PixelMap.getImageInfo((err,data) => {
                          let width = data.size.width;
                          let result = false;
                          if(width == 64 || width == 192) {
                            result = true;
                          }
                          console.info("key==>WebView_Stage_onFaviconReceived_0300 res :"+JSON.stringify(result))
                          emitEvent(result,this.ONFAVICONTHIREVENTID)
                        });
                      },8000)
                      break;
                    }
                    case "WebView_Stage_onFaviconReceived_0400":{
                      setTimeout(()=>{
                        let PixelMap = this.event.favicon;
                        let BytesNumber = PixelMap.getBytesNumberPerRow();
                        let result = false;
                        if(BytesNumber == 256 || BytesNumber == 768) {
                          result = true;
                        }
                        console.info("key==>WebView_Stage_onFaviconReceived_0400 res :" + JSON.stringify(result))
                        emitEvent(result, this.ONFAVICONFOURTHEVENTID)
                      },8000)
                      break;
                    }
                    case "WebView_Stage_onFaviconReceived_0500":{
                      setTimeout(()=>{
                        let PixelMap = this.event.favicon;
                        let PixelBytesNumber = PixelMap.getPixelBytesNumber();
                        let result = false;
                        if(PixelBytesNumber == 16384 || PixelBytesNumber == 147456) {
                          result = true;
                        }
                        console.info("key==>WebView_Stage_onFaviconReceived_0500 res :" + JSON.stringify(result))
                        this.onFaviconReceived = "No-trigger";
                        emitEvent(result, this.ONFAVICONFIFEVENTID)
                      },8000)
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
              .onFaviconReceived((event) =>{
                console.log("--->onFaviconReceived-in --- ")
                this.onFaviconReceived = "onFaviconReceived-in";
                this.event = event;
              })
        }
    }
}
