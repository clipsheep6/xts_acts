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
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium'
import events_emitter from '@ohos.events.emitter';
var KEYEVENTID = 10
var FONTSIZEEVENTID = 1301
var NETWORDEVENTID = 2501
var STANDARDEVENTID = 1901
var PAGEVISIBLEEVENTID = 6301
var PAGEVISIBLEEVENTIDSEC = 6302
var PAGEVISIBLEEVENTIDTHI = 6303
var PAGEVISIBLEEVENTIDFOUR = 6304
var ONKEYEVENTID = 4101
var REQUESTMETHODEVENTID  = 6101
var REQUESTMETHODEVENTIDSEC  = 6102
var REQUESTMETHODEVENTIDTHIR  = 6103
var REQUESTMETHODEVENTIDFOUR  = 6104
var REQUESTMETHODEVENTIDFIF  = 6105
var ONDATAFIREVENTID = 6501
var ONDATASECEVENTID = 6502
var ONDATATHIREVENTID = 6503
var ONDATAFOURTHEVENTID = 6504
var ONDATAFIFEVENTID = 6505
var DESKTOPICONEVENTID = 3001
var DESKTOPICONEVENTIDSEC = 3002
var DESKTOPICONEVENTIDTHR = 3003
var DESKTOPICONEVENTIDFOR = 3004
var DESKTOPICONEVENTIDFIF = 3005
var DESKTOPICONEVENTIDSIX = 3006
function sleep(time){

  return new Promise((resolve,reject)=>{
    setTimeout(()=>{
      resolve("ok")
    },time)
  }).then(()=>{
    console.info(`sleep ${time} over...`)
  })
}
function registerEvent(testCaseName,expectedValue,assert,eventId,done){
  console.info('START222');
  try{
    let callBack=(backData)=>{
      console.info(`${testCaseName} get result is:`+ backData.data.ACTION);
      if(assert == "equal") {
        expect(backData.data.ACTION).assertEqual(expectedValue);
        console.info(`[${testCaseName}] END`);
        done()
      } else if(assert=="unequal")  {
        expect(backData.data.ACTION != expectedValue).assertTrue();
        console.info(`[${testCaseName}] END`);
        done()
      }
    }
    let innerEvent = {
      eventId:eventId,
      priority:events_emitter.EventPriority.LOW
    }
    events_emitter.on(innerEvent,callBack)
    console.info(`innerEvent 1111`+JSON.stringify(innerEvent));
  }catch(err){
    console.info(`[${testCaseName}] err:`+JSON.stringify(err));
  }
}

async function forKey(Key) {
  console.info("web afterEach start:"+Key);
  try {
    let backData = {
      data: {
        "ACTION": Key
      }
    }
    let backEvent = {
      eventId:KEYEVENTID,
      priority:events_emitter.EventPriority.LOW
    }
    console.info("start send emitKey");
    events_emitter.emit(backEvent, backData);
  } catch (err) {
    console.info("emit emitKey  err: " + JSON.stringify(err));
  }
  sleep(2000);
}

export default function abilityTest() {
  describe('ActsAbilityTest', function () { 

  /*
  * @tc.number    : WebView_Stage_DefaultFontSize_0100
  * @tc.name      : Set the default font size to a non default font size within the minimum font range
  * @tc.desc      : Verify that the font size is the default
  */
  it('WebView_Stage_DefaultFontSize_0100',0, async function (done) {
    await sleep(2000)
    let Key="DefaultFontSize";
    await forKey(Key);
    let FontSize = '50';
    console.info('DefaultFontSize registerEvent===>');
    registerEvent("WebView_Stage_DefaultFontSize_0100",FontSize,"equal",FONTSIZEEVENTID,done);
    sendEventByKey('webviewkey',10,'');
  })

  /*
  * @tc.number    : WebView_Stage_StandardFontFamily_0100
  * @tc.name      : Set the name of the existing standard font family
  * @tc.desc      : Verify that the name of the standard font family can be modified to "HarmonyOS Sans SC"
  */
  it('WebView_Stage_StandardFontFamily_0100',0, async function (done) {
    await sleep(2000)
    let Key="StandardFontFamily";
    await forKey(Key);
    let WebFont = 'HarmonyOS Sans SC';
    registerEvent("WebView_Stage_StandardFontFamily_0100",WebFont,"equal",STANDARDEVENTID,done);
    sendEventByKey('webviewkey',10,'');
  })

  /*
  * @tc.number    : WebView_Stage_BlockNetwork_0100
  * @tc.name      : Set WebView to load resources from the network
  * @tc.desc      : Verify whether WebView can load resources from the network
  */
   it('WebView_Stage_BlockNetwork_0100',0, async function (done) {
    await sleep(2000)
    let Key="blockNetwork";
    await forKey(Key);
    let MinimumLogicalFontSize = "百度一下，你就知道";
    registerEvent("WebView_Stage_BlockNetwork_0100",MinimumLogicalFontSize,"equal",NETWORDEVENTID,done);
    sendEventByKey('webviewkey',10,'');
  })

    /*
    * @tc.number    : WebView_Stage_OnPageVisible_0100
    * @tc.name      : Get the URL of the page to be loaded
    * @tc.desc      : Verify that the page url to be loaded is the current page url
    */
     it('WebView_Stage_OnPageVisible_0100',0, async function (done) {
      await sleep(2000)
      let Key="OnPageVisible";
      await forKey(Key);
      let OnPageVisible = "resource://rawfile/index.html";
      registerEvent("WebView_Stage_OnPageVisible_0100",OnPageVisible,"equal",PAGEVISIBLEEVENTID,done);
      sendEventByKey('webviewkey',10,'');
    })

    /*
    * @tc.number    : WebView_Stage_OnPageVisible_0200
    * @tc.name      : Load the web page to get the url of the page to be loaded
    * @tc.desc      : Verify that the URL of the page to be loaded is a web resource page
    */
    it('WebView_Stage_OnPageVisible_0200',0, async function (done) {
      await sleep(2000)
      let Key="OnPageVisibleSec";
      await forKey(Key);
      let OnPageVisible = "https://www.baidu.com/";
      registerEvent("WebView_Stage_OnPageVisible_0200",OnPageVisible,"equal",PAGEVISIBLEEVENTIDSEC,done);
      sendEventByKey('webviewkey',10,'');
    })

    /*
    * @tc.number    : WebView_Stage_OnPageVisible_0300
    * @tc.name      : Load non-existent page Get the url of the page to be loaded
    * @tc.desc      : Verify that the page url to be loaded is a non-existent page url
    */
    it('WebView_Stage_OnPageVisible_0300',0, async function (done) {
      await sleep(2000)
      let Key="OnPageVisibleThi";
      await forKey(Key);
      let OnPageVisible = "http://www.bai111du.com/";
      registerEvent("WebView_Stage_OnPageVisible_0300",OnPageVisible,"unequal",PAGEVISIBLEEVENTIDTHI,done);
      sendEventByKey('webviewkey',10,'');
    })
    

    /*
    * @tc.number    : WebView_Stage_OnPageVisible_0400
    * @tc.name      : Load the correct url after loading the error page to get the url of the page to be loaded
    * @tc.desc      : After verifying that the error page is loaded and loading the correct url, the url of the page 
    *                 to be loaded can be obtained
    */
    it('WebView_Stage_OnPageVisible_0400',0, async function (done) {
      await sleep(2000)
      let Key="OnPageVisibleFour";
      await forKey(Key);
      let OnPageVisible = "resource://rawfile/index.html";
      registerEvent("WebView_Stage_OnPageVisible_0400",OnPageVisible,"equal",PAGEVISIBLEEVENTIDFOUR,done);
      sendEventByKey('webviewkey',10,'');
    })
    
    /*
    * @tc.number    : WebView_Stage_onInterceptKeyEvent_0100
    * @tc.name      : The device is not connected to the keyboard to determine whether to enter the 
    *                 onInterceptKeyEvent callback
    * @tc.desc      : Verify that the onInterceptKeyEvent callback is not triggered.
    */
    it('WebView_Stage_onInterceptKeyEvent_0100',0, async function (done) {
      await sleep(2000);
      let Key="WebView_Stage_onInterceptKeyEvent_0100";
      await forKey(Key);
      await sleep(2000);
      let onkey = "onInterceptKeyEvent";
      registerEvent("WebView_Stage_onInterceptKeyEvent_0100",onkey,"unequal",ONKEYEVENTID,done);
      sendEventByKey('webviewkey',10,'');
    })

    /*
    * @tc.number    : WebView_Stage_RequestMethod_0100
    * @tc.name      : Load local page to get request method
    * @tc.desc      : Verify the request method for getting the current page
    */
    it('WebView_Stage_RequestMethod_0100',0, async function (done) {
      await sleep(2000)
      let Key="RequestMethod";
      await forKey(Key);
      let RequestMethod = "GET";
      registerEvent("WebView_Stage_RequestMethod_0100",RequestMethod,"equal",REQUESTMETHODEVENTID,done);
      sendEventByKey('webviewkey',10,'');
    })

    /*
    * @tc.number    : WebView_Stage_RequestMethod_0200
    * @tc.name      : Load the web page to get the request method
    * @tc.desc      : Verify the request method for getting the current page
    */
    it('WebView_Stage_RequestMethod_0200',0, async function (done) {
      await sleep(2000)
      let Key="RequestMethodSEC";
      await forKey(Key);
      let RequestMethod = "GET";
      registerEvent("WebView_Stage_RequestMethod_0200",RequestMethod,"equal",REQUESTMETHODEVENTIDSEC,done);
      sendEventByKey('webviewkey',10,'');
    })

    /*
    * @tc.number    : WebView_Stage_RequestMethod_0300
    * @tc.name      : Load error page to get request method
    * @tc.desc      : Verify the request method for getting the current page
    */
    it('WebView_Stage_RequestMethod_0300',0, async function (done) {
      await sleep(2000)
      let Key="RequestMethodThir";
      await forKey(Key);
      let RequestMethod = "GET";
      registerEvent("WebView_Stage_RequestMethod_0300",RequestMethod,"equal",REQUESTMETHODEVENTIDTHIR,done);
      sendEventByKey('webviewkey',10,'');
    })

    /*
    * @tc.number    : WebView_Stage_RequestMethod_0400
    * @tc.name      : Load local page Load error page Get request method
    * @tc.desc      : Verify the request method for getting the current page
    */
    it('WebView_Stage_RequestMethod_0400',0, async function (done) {
      await sleep(2000)
      let Key="RequestMethodFour";
      await forKey(Key);
      let RequestMethod = "GET";
      registerEvent("WebView_Stage_RequestMethod_0400",RequestMethod,"equal",REQUESTMETHODEVENTIDFOUR,done);
      sendEventByKey('webviewkey',10,'');
    })

    /*
    * @tc.number    : WebView_Stage_RequestMethod_0500
    * @tc.name      : Get the request method after multiple page loads
    * @tc.desc      : Verify the request method for getting the current page
    */
    it('WebView_Stage_RequestMethod_0500',0, async function (done) {
      await sleep(2000)
      let Key="RequestMethodFif";
      await forKey(Key);
      let RequestMethod = "GET";
      registerEvent("WebView_Stage_RequestMethod_0500",RequestMethod,"equal",REQUESTMETHODEVENTIDFIF,done);
      sendEventByKey('webviewkey',10,'');
    })

    /*
    * @tc.number    : WebView_Stage_OnDataResubmitted_0100
    * @tc.name      : Trigger when the form could be resubmitted
    * @tc.desc      : Send post request trigger onDataResubmitted.
    */
    it('WebView_Stage_OnDataResubmitted_0100',0, async function (done) {
      await sleep(2000)
      let Key="WebView_Stage_OnDataResubmitted_0100";
      await forKey(Key);
      let onDataResult = "resend success";
      registerEvent("WebView_Stage_OnDataResubmitted_0100",onDataResult,"equal",ONDATAFIREVENTID,done);
      sendEventByKey('webviewkey',10,'');
    })

    /*
    * @tc.number    : WebView_Stage_OnDataResubmitted_0200
    * @tc.name      : Trigger when the form could be resubmitted
    * @tc.desc      : Send post request and cancel triggering onPageVisible.
    */
    it('WebView_Stage_OnDataResubmitted_0200',0, async function (done) {
      await sleep(2000)
      let Key="WebView_Stage_OnDataResubmitted_0200";
      await forKey(Key);
      let onDataResult = "cancel";
      registerEvent("WebView_Stage_OnDataResubmitted_0200",onDataResult,"equal",ONDATASECEVENTID,done);
      sendEventByKey('webviewkey',10,'');
    })
    
    /*
    * @tc.number    : WebView_Stage_OnDataResubmitted_0300
    * @tc.name      : Trigger when the form could be resubmitted
    * @tc.desc      : Send get request cannot trigger onDataResubmitted.
    */
    it('WebView_Stage_OnDataResubmitted_0300',0, async function (done) {
      await sleep(2000)
      let Key="WebView_Stage_OnDataResubmitted_0300";
      await forKey(Key);
      let onDataResult = "GET_REQUEST";
      registerEvent("WebView_Stage_OnDataResubmitted_0300",onDataResult,"equal",ONDATATHIREVENTID,done);
      sendEventByKey('webviewkey',10,'');
    })

    /*
    * @tc.number    : WebView_Stage_OnDataResubmitted_0400
    * @tc.name      : Trigger when the form could be resubmitted
    * @tc.desc      : OnDataResubmitted cannot be triggered without refreshing the page.
    */
    it('WebView_Stage_OnDataResubmitted_0400',0, async function (done) {
      await sleep(2000)
      let Key="WebView_Stage_OnDataResubmitted_0400";
      await forKey(Key);
      let onDataResult = "NO_REFRESH";
      registerEvent("WebView_Stage_OnDataResubmitted_0400",onDataResult,"equal",ONDATAFOURTHEVENTID,done);
      sendEventByKey('webviewkey',10,'');
    })

    /*
    * @tc.number    : WebView_Stage_OnDataResubmitted_0500
    * @tc.name      : Trigger when the form could be resubmitted
    * @tc.desc      : Send post request for non-existent page trigger onErrorReceive.
    */
    it('WebView_Stage_OnDataResubmitted_0500',0, async function (done) {
      await sleep(2000)
      let Key="WebView_Stage_OnDataResubmitted_0500";
      await forKey(Key);
      let onDataResult = "onErrorReceive-In";
      registerEvent("WebView_Stage_OnDataResubmitted_0500",onDataResult,"equal",ONDATAFIFEVENTID,done);
      sendEventByKey('webviewkey',10,'');
    })

    /*
    * @tc.number    : WebView_Stage_DesktopIcon_0100
    * @tc.name      : Get the desktop icon url info in the onDesktopIconUrl callback
    * @tc.desc      : Verify that the desktop icon url info can be obtained in the onDesktopIconUrl callback
    */
    it('WebView_Stage_DesktopIcon_0100',0, async function (done) {
      await sleep(2000);
      let Key="WebView_Stage_DesktopIcon_0100";
      await forKey(Key);
      let onDesktopIconUrl = "file:///data/storage/el1/bundle/phone/resources/rawfile/icon.png";
      registerEvent("WebView_Stage_DesktopIcon_0100",onDesktopIconUrl,"equal",DESKTOPICONEVENTID,done);
      sendEventByKey('webviewkey',10,'');
    })

    /*
    * @tc.number    : WebView_Stage_DesktopIcon_0200
    * @tc.name      : Get the desktop icon precomposed info in the onDesktopIconUrl callback
    * @tc.desc      : Verify that the desktop icon precomposed info url can be obtained in the
    *                 onDesktopIconUrl callback
    */
    it('WebView_Stage_DesktopIcon_0200',0, async function (done) {
      await sleep(2000);
      let Key="WebView_Stage_DesktopIcon_0200";
      await forKey(Key);
      let onDesktopIconUrl = "file:///data/storage/el1/bundle/phone/resources/rawfile/icon_1.png";
      registerEvent("WebView_Stage_DesktopIcon_0200",onDesktopIconUrl,"equal",DESKTOPICONEVENTIDSEC,done);
      sendEventByKey('webviewkey',10,'');
    })

    /*
    * @tc.number    : WebView_Stage_DesktopIcon_0300
    * @tc.name      : Get both the desktop icon precomposed and url info in the onDesktopIconUrl callback
    * @tc.desc      : Verify that both the desktop icon precomposed and url info can be obtained in the
    *                 onDesktopIconUrl callback
    */
    it('WebView_Stage_DesktopIcon_0300',0, async function (done) {
      await sleep(2000);
      let Key="WebView_Stage_DesktopIcon_0300";
      await forKey(Key);
      let cnt = 3;
      registerEvent("WebView_Stage_DesktopIcon_0300",cnt,"equal",DESKTOPICONEVENTIDTHR,done);
      sendEventByKey('webviewkey',10,'');
    })

    /*
    * @tc.number    : WebView_Stage_DesktopIcon_0400
    * @tc.name      : Not get the desktop icon precomposed info in the onDesktopIconUrl callback if url specified only
    * @tc.desc      : Verify that the desktop icon precomposed info url can not be obtained in the
    *                 onDesktopIconUrl callback if url specified only
    */
    it('WebView_Stage_DesktopIcon_0400',0, async function (done) {
      await sleep(2000);
      let Key="WebView_Stage_DesktopIcon_0400";
      await forKey(Key);
      let onDesktopIconPrecomposed = false;
      registerEvent("WebView_Stage_DesktopIcon_0400",onDesktopIconPrecomposed,"equal",DESKTOPICONEVENTIDFOR,done);
      sendEventByKey('webviewkey',10,'');
    })

    /*
    * @tc.number    : WebView_Stage_DesktopIcon_0500
    * @tc.name      : Not get the desktop icon url info in the onDesktopIconUrl callback if precomposed specified only
    * @tc.desc      : Verify that the desktop icon url info can not be obtained in the onDesktopIconUrl callback
    *                 if precomposed specified only
    */
    it('WebView_Stage_DesktopIcon_0500',0, async function (done) {
      await sleep(2000);
      let Key="WebView_Stage_DesktopIcon_0500";
      await forKey(Key);
      let onDesktopIconPrecomposed = true;
      registerEvent("WebView_Stage_DesktopIcon_0500",onDesktopIconPrecomposed,"equal",DESKTOPICONEVENTIDFIF,done);
      sendEventByKey('webviewkey',10,'');
    })

    /*
    * @tc.number    : WebView_Stage_DesktopIcon_0600
    * @tc.name      : Not get the desktop icon url info in the onDesktopIconUrl callback if html not specified
    * @tc.desc      : Verify that the desktop icon url info can not be obtained in the onDesktopIconUrl callback
    *                 if html not specified
    */
    it('WebView_Stage_DesktopIcon_0600',0, async function (done) {
      await sleep(2000);
      let Key="WebView_Stage_DesktopIcon_0600";
      await forKey(Key);
      let onDesktopIcoEvent = undefined;
      registerEvent("WebView_Stage_DesktopIcon_0600",onDesktopIcoEvent,"equal",DESKTOPICONEVENTIDSIX,done);
      sendEventByKey('webviewkey',10,'');
    })
  })
}