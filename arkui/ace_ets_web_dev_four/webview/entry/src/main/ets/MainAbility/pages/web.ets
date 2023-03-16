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
    @State FONTSIZEEVENTID: number = 1301
    @State STANDARDEVENTID: number = 1901
    @State NETWORDEVENTID : number= 2501
    @State PAGEVISIBLEEVENTID : number= 6301
    @State PAGEVISIBLEEVENTIDSEC : number= 6302
    @State PAGEVISIBLEEVENTIDTHI : number= 6303
    @State PAGEVISIBLEEVENTIDFOUR : number= 6304
    @State ONKEYEVENTID : number = 4101
    @State REQUESTMETHODEVENTID: number = 6101
    @State REQUESTMETHODEVENTIDSEC: number = 6102
    @State REQUESTMETHODEVENTIDTHIR: number = 6103
    @State REQUESTMETHODEVENTIDFOUR: number = 6104
    @State REQUESTMETHODEVENTIDFIF: number = 6105
    @State ONDATAFIREVENTID: number = 6501
    @State ONDATASECEVENTID: number = 6502
    @State ONDATATHIREVENTID: number = 6503
    @State ONDATAFOURTHEVENTID: number = 6504
    @State ONDATAFIFEVENTID: number = 6505
    @State DESKTOPICONEVENTID : number= 3001
    @State DESKTOPICONEVENTIDSEC : number= 3002
    @State DESKTOPICONEVENTIDTHR: number= 3003
    @State DESKTOPICONEVENTIDFOR : number= 3004
    @State DESKTOPICONEVENTIDFIF : number=  3005
    @State DESKTOPICONEVENTIDSIX : number= 3006
    @State event : Object = undefined
    @State callbackCnt : number = 0;
    @State onData:string=""
    @State onDataResult:string="emitStoreWebArchive"
    @State onDataGetResult:string = "";
    @State onDataErrorResult:string = "";
    @State onFaviconReceived:string = "No-trigger"
    @State favicon: multimedia_image.PixelMap = undefined;
    RequestMethod : string = "RequestMethod Test"
    RequestMethodSEC : string = "RequestMethod Test"
    RequestMethodThir : string = "RequestMethod Test"
    RequestMethodFour : string = "RequestMethod Test"
    RequestMethodFif : string = "RequestMethod Test"
    @State onfavicon : string = ''
    async onPageShow(){
        let valueChangeEvent={
            eventId:this.KEYEVENTID,
            priority:events_emitter.EventPriority.LOW
        }
        events_emitter.on(valueChangeEvent,this.valueChangeCallBack)
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
    aboutToAppear() {
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
              Button("Load Network").key('baidu').onClick(async () => {
                 this.controller.loadUrl("http://www.baidu.com/")
              })
             Button("web click").key('webviewkey').onClick(async () => {
                console.info("========Enter Button==========")
               setTimeout(async ()=>{
                 console.info("key==>"+this.str)
                 switch(this.str){
                  case "DefaultFontSize":{
                    let url =this.controller.getUrl()
                       this.controller.runJavaScript("getFontSize()",(err,res)=>{
                       console.info("key==>DefaultFontSize res :"+JSON.stringify(res))
                       emitEvent(res,this.FONTSIZEEVENTID)
                     })
                     break;
                   }
                   case "StandardFontFamily":{
                     this.controller.runJavaScript("getSystemFonts()",(err,res)=>{
                       console.info("key==>standardFontFamily res :"+JSON.stringify(res))
                       if(res.search("HarmonyOS Sans SC") !== -1){
                         emitEvent("HarmonyOS Sans SC",this.STANDARDEVENTID)
                       }
                       else if(res.search("sans-serif") !== -1) {
                        emitEvent("sans-serif",this.STANDARDEVENTID)
                       }
                       else{
                        emitEvent("err",this.STANDARDEVENTID)
                       }
                     })
                     break;
                   }
                   case "blockNetwork":{
                     this.controller.loadUrl("https://www.baidu.com")
                     setTimeout(()=>{
                       let webTitle=this.controller.getTitle()
                       console.info("key==>webTitle res :"+JSON.stringify(webTitle))
                       emitEvent(webTitle,this.NETWORDEVENTID)
                     },8000)
                     break;
                   }
                    case "OnPageVisible":{
                     this.controller.loadUrl($rawfile("index.html"))
                      setTimeout(()=>{
                        let OnPageVisible=this.message
                        console.info("key==>OnPageVisible res :"+JSON.stringify(OnPageVisible))
                        emitEvent(OnPageVisible,this.PAGEVISIBLEEVENTID)
                      },5000)
                      break;
                    }
                    case "OnPageVisibleSec":{
                      this.controller.loadUrl( "http://www.baidu.com/" )
                      setTimeout(()=>{
                        let OnPageVisible= this.message
                        console.info("key==>OnPageVisibleSec res :"+JSON.stringify(OnPageVisible))
                        emitEvent(OnPageVisible,this.PAGEVISIBLEEVENTIDSEC)
                      },8000)
                      break;
                    }
                    case "OnPageVisibleThi":{
                      this.controller.loadUrl("http://www.bai111du.com/")
                      await sleep(5000)
                      console.info("key==>OnPageVisibleThi res : "+JSON.stringify(this.message))
                      emitEvent(this.message,this.PAGEVISIBLEEVENTIDTHI)
                      break;
                    }
                    case "OnPageVisibleFour":{
                      this.controller.loadUrl("http://www.bai111du.com/")
                      await sleep(5000)
                      this.controller.loadUrl($rawfile("index.html"))
                      await sleep(5000)
                      console.info("key==>OnPageVisibleFour res :  "+JSON.stringify(this.message))
                      emitEvent(this.message,this.PAGEVISIBLEEVENTIDFOUR)
                      break;
                    }
                    case "WebView_Stage_onInterceptKeyEvent_0100":{
                      setTimeout(()=>{
                        emitEvent(this.onkey, this.ONKEYEVENTID)
                      },2000)
                      break;
                    }
                    case "RequestMethod":{
                      this.method = "RequestMethod"
                     setTimeout(()=>{
                      console.log("onInterceptRequest RequestMethod in")
                      this.controller.loadUrl($rawfile("index.html"))
                      console.log("onInterceptRequest RequestMethod RequestMethod"+ this.RequestMethod)
                      setTimeout(()=>{
                        emitEvent(this.RequestMethod,this.REQUESTMETHODEVENTID)
                        },2000)
                     },4000)
                      break;
                    }
                    case "RequestMethodSEC":{
                      this.method = "RequestMethodSEC"
                     setTimeout(()=>{
                      console.log("onInterceptRequest RequestMethodSEC in")
                        this.controller.loadUrl("http://www.baidu.com/" )
                      console.log("onInterceptRequest RequestMethodSEC RequestMethod"+ this.RequestMethod)
                      setTimeout(()=>{
                        emitEvent(this.RequestMethodSEC,this.REQUESTMETHODEVENTIDSEC)
                        },2000)
                     },4000)
                      break;
                    }
                    case "RequestMethodThir":{
                      this.method = "RequestMethodThir"
                     setTimeout(()=>{
                      console.log("onInterceptRequest RequestMethodThir in")
                        this.controller.loadUrl("http://www1.11baidu.com/" )
                      console.log("onInterceptRequest RequestMethodThir RequestMethod"+ this.RequestMethod)
                      setTimeout(()=>{
                        emitEvent(this.RequestMethodThir,this.REQUESTMETHODEVENTIDTHIR)
                        },2000)
                     },4000)
                      break;
                    }
                    case "RequestMethodFour":{
                      this.method = "RequestMethodFour"
                     setTimeout(()=>{
                      console.log("onInterceptRequest RequestMethodFour in")
                        this.controller.loadUrl($rawfile("Sec.html"))
                      console.log("onInterceptRequest RequestMethodFour RequestMethod"+ this.RequestMethod)
                      setTimeout(()=>{
                        emitEvent(this.RequestMethodFour,this.REQUESTMETHODEVENTIDFOUR)
                        },2000)
                     },5000)
                      break;
                    }
                    case "RequestMethodFif":{
                      this.method = "RequestMethodFif"
                      console.log("onInterceptRequest RequestMethodFif in")
                      this.controller.loadUrl("http://www.baidu.com/" )
                     setTimeout(()=>{
                      this.controller.loadUrl($rawfile("index.html"))
                      console.log("onInterceptRequest RequestMethodFif RequestMethod"+ this.RequestMethod)
                      setTimeout(()=>{
                        emitEvent(this.RequestMethodFif,this.REQUESTMETHODEVENTIDFIF)
                        },2000)
                     },5000)
                      break;
                    }
                    case "WebView_Stage_OnDataResubmitted_0100":{
                      this.onData= "resend"
                      this.controller.loadUrl($rawfile("post.html"))
                      setTimeout(()=>{
                        this.controller.refresh()
                      },2000)
                      setTimeout(()=>{
                        console.info("WebView_Stage_OnDataResubmitted_0100====="+JSON.stringify(this.onDataResult))
                        emitEvent(this.onDataResult,this.ONDATAFIREVENTID)
                      },8000)
                      break;
                    }
                    case "WebView_Stage_OnDataResubmitted_0200":{
                      this.onData = "cancel"
                      this.controller.loadUrl($rawfile("post.html"))
                      setTimeout(()=>{
                        this.controller.refresh()
                      },3000)
                      setTimeout(()=>{
                        console.info("WebView_Stage_OnDataResubmitted_0200====="+JSON.stringify(this.onDataResult))
                        emitEvent(this.onDataResult,this.ONDATASECEVENTID)
                      },8000)
                      break;
                    }
                    case "WebView_Stage_OnDataResubmitted_0300":{
                      this.onDataGetResult = "GET_REQUEST"
                      this.controller.loadUrl($rawfile("get.html"))
                      setTimeout(()=>{
                        this.controller.refresh()
                      },8000)
                      setTimeout(()=>{
                        console.info("WebView_Stage_OnDataResubmitted_0300"+JSON.stringify(this.onDataGetResult))
                        emitEvent(this.onDataGetResult,this.ONDATATHIREVENTID)
                      },4000)
                      break;
                    }
                    case "WebView_Stage_OnDataResubmitted_0400":{
                      this.onDataGetResult = "NO_REFRESH"
                      this.controller.loadUrl($rawfile("post.html"))
                      setTimeout(()=>{
                        console.info("WebView_Stage_OnDataResubmitted_0400"+JSON.stringify(this.onDataGetResult))
                        emitEvent(this.onDataGetResult,this.ONDATAFOURTHEVENTID)
                      },4000)
                      break;
                    }
                    case "WebView_Stage_OnDataResubmitted_0500":{
                      this.controller.loadUrl($rawfile("error.html"))
                      setTimeout(()=>{
                        this.controller.refresh()
                      },4000)
                      setTimeout(()=>{
                        console.info("WebView_Stage_OnDataResubmitted_0500====="+JSON.stringify(this.onDataErrorResult))
                        emitEvent(this.onDataErrorResult,this.ONDATAFIFEVENTID)
                      },6000)
                      break;
                    }
                    case "WebView_Stage_DesktopIcon_0100":{
                      this.controller.loadUrl($rawfile("desktopIconUrl.html"));
                      console.info("controller.loadUrl")
                      setTimeout(()=>{
                        let onDesktopIconUrl = this.event.url
                        console.info("key==>onDesktopIconUrl result :" + onDesktopIconUrl)
                        emitEvent(onDesktopIconUrl,this.DESKTOPICONEVENTID)
                        this.event = undefined
                        this.callbackCnt = 0
                      }, 5000)
                      break;
                    }
                    case "WebView_Stage_DesktopIcon_0200":{
                      this.controller.loadUrl($rawfile("desktopIconPre.html"));
                      setTimeout(()=>{
                        let onDesktopIconUrl = this.event.url
                        console.info("key==>onDesktopIconUrl result :" + onDesktopIconUrl)
                        emitEvent(onDesktopIconUrl,this.DESKTOPICONEVENTIDSEC)
                        this.event = undefined
                        this.callbackCnt = 0
                      }, 2000)
                      break;
                    }
                    case "WebView_Stage_DesktopIcon_0300":{
                      this.controller.loadUrl($rawfile("desktopIconMulti.html"));
                      setTimeout(()=>{
                        let cnt = this.callbackCnt;
                        console.info("key==>onDesktopIconUrl cnt :" + cnt)
                        emitEvent(cnt,this.DESKTOPICONEVENTIDTHR)
                        this.event = undefined
                        this.callbackCnt = 0
                      }, 2000)
                      break;
                    }
                    case "WebView_Stage_DesktopIcon_0400":{
                      this.controller.loadUrl($rawfile("desktopIconUrl.html"));
                      setTimeout(()=>{
                        let onDesktopIconPrecomposed = this.event.precomposed
                        console.info("key==>onDesktopIconPrecomposed result :" + onDesktopIconPrecomposed)
                        emitEvent(onDesktopIconPrecomposed,this.DESKTOPICONEVENTIDFOR)
                        this.event = undefined
                        this.callbackCnt = 0
                      }, 2000)
                      break;
                    }
                    case "WebView_Stage_DesktopIcon_0500":{
                      this.controller.loadUrl($rawfile("desktopIconPre.html"));
                      setTimeout(()=>{
                        let onDesktopIconPrecomposed = this.event.precomposed
                        console.info("key==>onDesktopIconPrecomposed result :" + onDesktopIconPrecomposed)
                        emitEvent(onDesktopIconPrecomposed,this.DESKTOPICONEVENTIDFIF)
                        this.event = undefined
                        this.callbackCnt = 0
                      }, 2000)
                      break;
                    }
                    case "WebView_Stage_DesktopIcon_0600":{
                      this.controller.loadUrl($rawfile("index.html"));
                      setTimeout(()=>{
                        let onDesktopIcoEvent = this.event
                        console.info("key==>onDesktopIconUrl result :" + onDesktopIcoEvent)
                        emitEvent(onDesktopIcoEvent,this.DESKTOPICONEVENTIDSIX)
                        this.event = undefined
                        this.callbackCnt = 0
                      }, 2000)
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
              .webStandardFont("HarmonyOS Sans SC")
              .defaultFontSize(50)
              .blockNetwork(false)
              .onTouchIconUrlReceived((event) => {
                this.callbackCnt++
                this.event = event
                console.log("onDesktopIconUrl event===>" + JSON.stringify(event))
              })
              .onInterceptKeyEvent((event)=>{
                console.log("--->onInterceptKeyEvent --- ")
                this.onkey = "onInterceptKeyEvent"
              })
              .onErrorReceive((event) => {
                this.onDataErrorResult= "onErrorReceive-In"
              })
              .onPageVisible((event) => {
                setTimeout(()=>{
                  this.message = event.url
                  console.log("onPageVisible event.url==>" + event.url)
                  console.log("onPageVisible==>" + this.message)
                  if(this.onDataResult=="resend") { 
                  console.log("onPageVisible==> resend success" )
                    this.onDataResult= "resend success"
                  } else if (this.onDataResult=="cancel") {
                    this.onDataResult= "cancel fail"
                    console.log("--->onDataResubmission onPageVisible==> cancel" )
                  }
                },2000)
              })
            .onInterceptRequest((event) => {
              console.log("onInterceptRequest in")
             if(this.method == "RequestMethod") {
                this.RequestMethod = event.request.getRequestMethod();
                console.log("onInterceptRequest in RequestMethod :" + this.RequestMethod )
              } else if(this.method == "RequestMethodSEC" ) {
                this.RequestMethodSEC = event.request.getRequestMethod();
                console.log("onInterceptRequest in RequestMethod :" + this.RequestMethod )
              } else if(this.method == "RequestMethodThir") {
                this.RequestMethodThir = event.request.getRequestMethod();
                console.log("onInterceptRequest in RequestMethod :" + this.RequestMethod )
              } else if(this.method == "RequestMethodFour") {
                this.RequestMethodFour = event.request.getRequestMethod();
                console.log("onInterceptRequest in RequestMethod :" + this.RequestMethod )
              } else if(this.method == "RequestMethodFif") {
                this.RequestMethodFif = event.request.getRequestMethod();
                console.log("onInterceptRequest in RequestMethod :" + this.RequestMethod )
              }
            })
            .onDataResubmitted((event) => {
              console.log("--->onDataResubmission==>" + JSON.stringify(event))
              console.log("--->onDataResubmission onDataResult==>" + JSON.stringify(this.onDataResult))
              this.onDataGetResult = "OnData_IN";
              if (this.onData == "resend") {
                this.onDataResult = "resend"
                event.handler.resend()
              }
              if (this.onData == "cancel") {
                event.handler.cancel()
                this.onDataResult = "cancel"
              }
            })
        }
    }
}
