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
@Entry
@Component
struct Index {
  controller: web_webview.WebviewController = new web_webview.WebviewController();
    @State str:string="emitStoreWebArchive"
    @State KEYEVENTID: number = 10
    @State FANTASYEVENTID: number = 1402
    @State SANSSERIFEVENTID: number = 1202
    @State SERIFEVENTID: number = 1102
    @State CURSIVEEVENTID: number = 1302
    @State FIXEDFONTEVENTID: number = 1502
    onPageShow(){
        let valueChangeEvent={
            eventId:this.KEYEVENTID,
            priority:events_emitter.EventPriority.LOW
        }
        events_emitter.on(valueChangeEvent,this.valueChangeCallBack)
      console.info("key==>fantasyHeight res : onPageShow")
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
        let abilityDelegator: any
        abilityDelegator = AbilityDelegatorRegistry.getAbilityDelegator()
        let abilityDelegatorArguments: any
        abilityDelegatorArguments = AbilityDelegatorRegistry.getArguments()
        console.info('start run testcase!!!')
        Hypium.hypiumTest(abilityDelegator, abilityDelegatorArguments, testsuite) 
    }
    build(){
        Column(){
            Row(){
             Button("web click").key('webviewkey').onClick(async () => {
                console.info("========Enter Button==========")
               setTimeout(()=>{
                 console.info("key==>"+this.str)
                 switch(this.str){
                   case "WebFantasyFont":{
                      this.controller.runJavaScript("fantasyHeight()",(err,res)=>{
                        console.info("key==>fantasyHeight res :"+JSON.stringify(res))
                        emitEvent(res,this.FANTASYEVENTID)
                    })
                     break;
                   }
                   case "WebSansSerif":{
                     this.controller.runJavaScript("sansSerifHeight()",(err,res)=>{
                       console.info("key==>sansSerifHeight res :"+JSON.stringify(res))
                       emitEvent(res,this.SANSSERIFEVENTID)
                     })
                     break;
                   }
                   case "WebSerif":{
                     this.controller.runJavaScript("serifHeight()",(err,res)=>{
                       console.info("key==>serifHeight res :"+JSON.stringify(res))
                       emitEvent(res,this.SERIFEVENTID)
                     })
                     break;
                   }
                   case "WebCursiveFont":{
                     this.controller.runJavaScript("cursiveHeight()",(err,res)=>{
                       console.info("key==>cursiveHeight res :"+JSON.stringify(res))
                       emitEvent(res,this.CURSIVEEVENTID)
                     })
                     break;
                   }
                   case "WebFixedFontFamily":{
                     this.controller.runJavaScript("FixedFontFamilyHeight()",(err,res)=>{
                       console.info("key==>FixedFontFamilyHeight res :"+JSON.stringify(res))
                       emitEvent(res,this.FIXEDFONTEVENTID)
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
            .webFantasyFont("HarmonyOS Sans TC")
            .webSansSerifFont("HarmonyOS Sans TC")
            .webSerifFont("HarmonyOS Sans TC")
            .webCursiveFont("HarmonyOS Sans TC")
            .webFixedFont("HarmonyOS Sans TC")
        }
    }
}
