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
import hilog from '@ohos.hilog';
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium'
import events_emitter from '@ohos.events.emitter';
import AbilityDelegatorRegistry from '@ohos.application.abilityDelegatorRegistry'
var KEYEVENTID = 10
var NETWORKEVENTID = 2601
var NETWORKSECEVENTID = 2602
var NETWORKTHIREVENTID = 2603
var NETWORKFOUREVENTID = 2604
var NETWORKFIFEVENTID = 2605
var HASIMAGEFIREVENTID = 6401
var HASIMAGESECEVENTID = 6402
var HASIMAGETHIREVENTID = 6403
var HASIMAGEFOURTHEVENTID = 6404
var HASIMAGEFIFEVENTID = 6405
var HASIMAGESIXEVENTID = 6406
var BACKFORWARDENTRIESEVENTID = 7801
var BACKFORWARDENTRIESSECEVENTID = 7802
var BACKFORWARDENTRIESTHIEVENTID = 7803
var BACKFORWARDENTRIESFOUEVENTID = 7804
var BACKFORWARDENTRIESFIFEVENTID = 7805
var BACKFORWARDENTRIESSIXEVENTID= 7806
var BACKFORWARDENTRIESSEVENEVENTID= 7807
var ORIGINSLURLEEVENTID = 6201
var ORIGINSLURLESECEVENTID = 6202
var ORIGINSLURLETHIREVENTID = 6203
var ORIGINSLURLEFOUREVENTID = 6204
var ORIGINSLURLEFIFEVENTID = 6205
var GETFAVICONFIREVENTID = 5604
var GETFAVICONSECEVENTID = 5605
var GETFAVICONTHIREVENTID = 5606
var GETFAVICONFOURTHEVENTID = 5607
var GETFAVICONFIFEVENTID = 5608
var PAGEDOWNEVENTID = 5701
var PAGEDOWNSECEVENTID  = 5702
var PAGEDOWNTHIREVENTID  = 5703
var PAGEDOWNFOUREVENTID  = 5704
var PAGEDOWNFIFEVENTID  = 5705
var PAGEDUPEVENTID  = 5801
var PAGEDUPSECEVENTID  = 5802
var PAGEDUPTHIREVENTID  = 5803
var PAGEDUPFOUREVENTID  = 5804
var PAGEDUPFIFEVENTID  = 5805
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
    * @tc.number    : WebView_Stage_GetFavicon_0100
    * @tc.name      : Get current website icon
    * @tc.desc      : Get whether the icon of the current website is editable.
    */
    it('WebView_Stage_GetFavicon_0100',0, async function (done) {
      await sleep(2000)
      sendEventByKey('baidu',10,'');
      await sleep(2000);
      let Key="WebView_Stage_GetFavicon_0100";
      await forKey(Key);
      await sleep(2000)
      let Favicon = true;
      registerEvent("WebView_Stage_GetFavicon_0100",Favicon,"equal",GETFAVICONFIREVENTID,done);
      sendEventByKey('webviewkey',10,'');
    })

    /*
    * @tc.number    : WebView_Stage_GetFavicon_0200
    * @tc.name      : Get current website icon
    * @tc.desc      : Get the width of the current website icon.
    */
      it('WebView_Stage_GetFavicon_0200',0, async function (done) {
      await sleep(2000)
      sendEventByKey('baidu',10,'');
      await sleep(2000);
      let Key="WebView_Stage_GetFavicon_0200";
      await forKey(Key);
      await sleep(2000)
      let Favicon = true;
      registerEvent("WebView_Stage_GetFavicon_0200",Favicon,"equal",GETFAVICONSECEVENTID,done);
      sendEventByKey('webviewkey',10,'');
    })

    /*
    * @tc.number    : WebView_Stage_GetFavicon_0300
    * @tc.name      : Get current website icon
    * @tc.desc      : Get the number of bytes per line of the image of the current website icon.
    */
    it('WebView_Stage_GetFavicon_0300',0, async function (done) {
      await sleep(2000)
      sendEventByKey('baidu',10,'');
      await sleep(2000);
      let Key="WebView_Stage_GetFavicon_0300";
      await forKey(Key);
      await sleep(2000)
      let Favicon = true;
      registerEvent("WebView_Stage_GetFavicon_0300",Favicon,"equal",GETFAVICONTHIREVENTID,done);
      sendEventByKey('webviewkey',10,'');
    })

    /*
    * @tc.number    : WebView_Stage_GetFavicon_0400
    * @tc.name      : Get current website icon
    * @tc.desc      : Get the total number of image bytes of the current website icon.
    */
    it('WebView_Stage_GetFavicon_0400',0, async function (done) {
      await sleep(2000)
      sendEventByKey('baidu',10,'');
      await sleep(2000);
      let Key="WebView_Stage_GetFavicon_0400";
      await forKey(Key);
      await sleep(2000)
      let Favicon = true;
      registerEvent("WebView_Stage_GetFavicon_0400",Favicon,"equal",GETFAVICONFOURTHEVENTID,done);
      sendEventByKey('webviewkey',10,'');
    })

    /*
    * @tc.number    : WebView_Stage_GetFavicon_0500
    * @tc.name      : Get current website icon
    * @tc.desc      : Get the pixel density of the current website icon.
    */
    it('WebView_Stage_GetFavicon_0500',0, async function (done) {
      await sleep(2000)
      sendEventByKey('baidu',10,'');
      await sleep(2000);
      let Key="WebView_Stage_GetFavicon_0500";
      await forKey(Key);
      await sleep(2000)
      let onFaviconReceived = 0;
      registerEvent("WebView_Stage_GetFavicon_0500",onFaviconReceived,"equal",GETFAVICONFIFEVENTID,done);
      sendEventByKey('webviewkey',10,'');
    })
   
    /*
    * @tc.number    : WebView_Stage_GetOriginalUrl_0100
    * @tc.name      : Get the original url of the current page
    * @tc.desc      : Verify the original url of the current page
    */
    it('WebView_Stage_GetOriginalUrl_0100',0, async function (done) {
      await sleep(2000)
      let Key="WebView_Stage_GetOriginalUrl_0100";
      await forKey(Key);
      await sleep(2000)
      let getOriginalUrl = "resource://rawfile/index.html";
      registerEvent("WebView_Stage_GetOriginalUrl_0100",getOriginalUrl,"equal",ORIGINSLURLEEVENTID,done);
      sendEventByKey('webviewkey',10,'');
    })

    /*
    * @tc.number    : WebView_Stage_GetOriginalUrl_0200
    * @tc.name      : Load the web page to get the original url of the current web page
    * @tc.desc      : Verify that the original url of the current web page is a web page
    */
    it('WebView_Stage_GetOriginalUrl_0200',0, async function (done) {
      await sleep(2000)
      let Key="WebView_Stage_GetOriginalUrl_0200";
      await forKey(Key);
      await sleep(2000)
      let getOriginalUrl = "http://www.baidu.com/";
      registerEvent("WebView_Stage_GetOriginalUrl_0200",getOriginalUrl,"equal",ORIGINSLURLESECEVENTID,done);
      sendEventByKey('webviewkey',10,'');
    })

    /*
    * @tc.number    : WebView_Stage_GetOriginalUrl_0300
    * @tc.name      : Load the non-existent page to obtain the original url of the current page
    * @tc.desc      : Verify that the original url of the current page is no page
    */
    it('WebView_Stage_GetOriginalUrl_0300',0, async function (done) {
      await sleep(2000)
      let Key="WebView_Stage_GetOriginalUrl_0300";
      await forKey(Key);
      await sleep(2000)
      let getOriginalUrl = "http://www.bai111du.com/";
      registerEvent("WebView_Stage_GetOriginalUrl_0300",getOriginalUrl,"equal",ORIGINSLURLETHIREVENTID,done);
      sendEventByKey('webviewkey',10,'');
    })

    /*
    * @tc.number    : WebView_Stage_GetOriginalUrl_0400
    * @tc.name      : Load the non-existent page to obtain the original url of the current page
    * @tc.desc      : Verify that the original url of the current page is no page
    */
    it('WebView_Stage_GetOriginalUrl_0400',0, async function (done) {
      await sleep(2000)
      let Key="WebView_Stage_GetOriginalUrl_0400";
      await forKey(Key);
      await sleep(2000)
      let getOriginalUrl = "result true";
      registerEvent("WebView_Stage_GetOriginalUrl_0400",getOriginalUrl,"equal",ORIGINSLURLEFOUREVENTID,done);
      sendEventByKey('webviewkey',10,'');
    })

    /*
    * @tc.number    : WebView_Stage_GetOriginalUrl_0500
    * @tc.name      : Load the non-existent page to obtain the original url of the current page
    * @tc.desc      : Verify that the original url of the current page is no page
    */
    it('WebView_Stage_GetOriginalUrl_0500',0, async function (done) {
      await sleep(2000)
      let Key="WebView_Stage_GetOriginalUrl_0500";
      await forKey(Key);
      await sleep(2000)
      let getOriginalUrl = "result true";
      registerEvent("WebView_Stage_GetOriginalUrl_0500",getOriginalUrl,"equal",ORIGINSLURLEFIFEVENTID,done);
      sendEventByKey('webviewkey',10,'');
    })

      /*
      * @tc.number    : WebView_Stage_HasImage_0100
      * @tc.name      : Gets whether images exist on the current page
      * @tc.desc      : By callback method,Gets whether images exist on the current page
      */
      it('WebView_Stage_HasImage_0100',0, async function (done) {
        await sleep(2000)
        let Key="WebView_Stage_HasImage_0100";
        await forKey(Key);
        await sleep(2000)
        let hasImage = false;
        registerEvent("WebView_Stage_HasImage_0100",hasImage,"equal",HASIMAGEFIREVENTID,done);
        sendEventByKey('webviewkey',10,'');
      })
  
      /*
      * @tc.number    : WebView_Stage_HasImage_0200
      * @tc.name      : Gets whether images exist on the current page
      * @tc.desc      : By promise method,Gets whether images exist on the current page
      */
      it('WebView_Stage_HasImage_0200',0, async function (done) {
        await sleep(2000)
        let Key="WebView_Stage_HasImage_0200";
        await forKey(Key);
        await sleep(2000)
        let hasImage = false;
        registerEvent("WebView_Stage_HasImage_0200",hasImage,"equal",HASIMAGESECEVENTID,done);
        sendEventByKey('webviewkey',10,'');
      })
  
      /*
      * @tc.number    : WebView_Stage_HasImage_0300
      * @tc.name      : Gets whether images exist on the current page
      * @tc.desc      : By callback method,Gets whether images exist on the current page
      */
      it('WebView_Stage_HasImage_0300',0, async function (done) {
        await sleep(2000)
        let Key="WebView_Stage_HasImage_0300";
        await forKey(Key);
        await sleep(2000)
        let hasImage = true;
        registerEvent("WebView_Stage_HasImage_0300",hasImage,"equal",HASIMAGETHIREVENTID,done);
        sendEventByKey('webviewkey',10,'');
      })
  
      /*
      * @tc.number    : WebView_Stage_HasImage_0400
      * @tc.name      : Gets whether images exist on the current page
      * @tc.desc      : By promise method,Gets whether images exist on the current page
      */
      it('WebView_Stage_HasImage_0400',0, async function (done) {
        await sleep(2000)
        let Key="WebView_Stage_HasImage_0400";
        await forKey(Key);
        await sleep(2000)
        let hasImage = true;
        registerEvent("WebView_Stage_HasImage_0400",hasImage,"equal",HASIMAGEFOURTHEVENTID,done);
        sendEventByKey('webviewkey',10,'');
      })
  
      /*
      * @tc.number    : WebView_Stage_HasImage_0500
      * @tc.name      : Gets whether images exist on the current page
      * @tc.desc      : By callback method,Gets whether images exist on the current page
      */
      it('WebView_Stage_HasImage_0500',0, async function (done) {
        await sleep(2000)
        let Key="WebView_Stage_HasImage_0500";
        await forKey(Key);
        await sleep(2000)
        let hasImage = true;
        registerEvent("WebView_Stage_HasImage_0500",hasImage,"equal",HASIMAGEFIFEVENTID,done);
        sendEventByKey('webviewkey',10,'');
      })
  
      /*
      * @tc.number    : WebView_Stage_HasImage_0600
      * @tc.name      : Gets whether images exist on the current page
      * @tc.desc      : By promise method,Gets whether images exist on the current page
      */
      it('WebView_Stage_HasImage_0600',0, async function (done) {
        await sleep(2000)
        let Key="WebView_Stage_HasImage_0600";
        await forKey(Key);
        await sleep(2000)
        let hasImage = true;
        registerEvent("WebView_Stage_HasImage_0600",hasImage,"equal",HASIMAGESIXEVENTID,done);
        sendEventByKey('webviewkey',10,'');
      })
      
    /*
    * @tc.number    : WebView_Stage_PutNetworkAvailable_0100
    * @tc.name      : Set WebView to be in global offline mode
    * @tc.desc      : Verify that WebView is in global offline mode
    */
    it('WebView_Stage_PutNetworkAvailable_0100',0, async function (done) {
      await sleep(2000)
      let Key="WebView_Stage_PutNetworkAvailable_0100";
      await forKey(Key);
      await sleep(2000)
      let putNetworkAvailable = "true";
      registerEvent("WebView_Stage_PutNetworkAvailable_0100",putNetworkAvailable,"equal",NETWORKEVENTID,done);
      sendEventByKey('webviewkey',10,'');
    })

    /*
    * @tc.number    : WebView_Stage_PutNetworkAvailable_0200
    * @tc.name      : Set WebView not in global offline mode
    * @tc.desc      : Verify that WebView is not in global offline mode
    */
    it('WebView_Stage_PutNetworkAvailable_0200',0, async function (done) {
      await sleep(2000)
      let Key="WebView_Stage_PutNetworkAvailable_0200";
      await forKey(Key);
      await sleep(2000)
      let putNetworkAvailable = "false";
      registerEvent("WebView_Stage_PutNetworkAvailable_0200",putNetworkAvailable,"equal",NETWORKSECEVENTID,done);
      sendEventByKey('webviewkey',10,'');
    })

    /*
    * @tc.number    : WebView_Stage_PutNetworkAvailable_0300
    * @tc.name      : Set whether WebView is in global offline mode multiple times
    * @tc.desc      : Verify that WebView is in global offline mode and the result is the last setting
    */
    it('WebView_Stage_PutNetworkAvailable_0300',0, async function (done) {
      await sleep(2000)
      let Key="WebView_Stage_PutNetworkAvailable_0300";
      await forKey(Key);
      await sleep(2000)
      let putNetworkAvailable = "false";
      registerEvent("WebView_Stage_PutNetworkAvailable_0300",putNetworkAvailable,"equal",NETWORKTHIREVENTID,done);
      sendEventByKey('webviewkey',10,'');
    })

    /*
    * @tc.number    : WebView_Stage_PutNetworkAvailable_0400
    * @tc.name      : Set whether WebView is in global offline mode multiple times
    * @tc.desc      : Verify that WebView is in global offline mode and the result is the last setting
    */
    it('WebView_Stage_PutNetworkAvailable_0400',0, async function (done) {
      await sleep(2000)
      let Key="WebView_Stage_PutNetworkAvailable_0400";
      await forKey(Key);
      await sleep(2000)
      let putNetworkAvailable = "false";
      registerEvent("WebView_Stage_PutNetworkAvailable_0400",putNetworkAvailable,"equal",NETWORKFOUREVENTID,done);
      sendEventByKey('webviewkey',10,'');
    })

    /*
    * @tc.number    : WebView_Stage_PutNetworkAvailable_0500
    * @tc.name      : Set whether WebView is in global offline mode multiple times
    * @tc.desc      : Verify that WebView is in global offline mode and the result is the last setting
    */
    it('WebView_Stage_PutNetworkAvailable_0500',0, async function (done) {
      await sleep(2000)
      let Key="WebView_Stage_PutNetworkAvailable_0500";
      await forKey(Key);
      await sleep(2000)
      let putNetworkAvailable = "false";
      registerEvent("WebView_Stage_PutNetworkAvailable_0500",putNetworkAvailable,"equal",NETWORKFIFEVENTID,done);
      sendEventByKey('webviewkey',10,'');
    })
    
    /*
    * @tc.number    : WebView_Stage_RemoveCache_0100
    * @tc.name      : Set the web deletion cache parameter to true
    * @tc.desc      : Verify that the web does not delete the Rom cache
    */
    it('WebView_Stage_RemoveCache_0100',0, async function (done) {
      await sleep(2000)
      sendEventByKey('baidu',10,'');
      let Key="WebView_Stage_RemoveCache_0100";
      await forKey(Key);
      let before,after;
      await sleep(4000)
      var cmd = 'ls -lR /data/app/el2/100/base/com.example.webview_nweb/cache/web/Cache/Cache_Data |grep "^-"|wc -l' ;
      console.log('removeCache cmd = ' + cmd);
      let abilityDelegator = AbilityDelegatorRegistry.getAbilityDelegator()
      abilityDelegator.executeShellCommand(cmd,4,
        async (err: any, d: any) => {
          console.info('removeCache before RemoveCache_0100 : err : ' + JSON.stringify(err));
          console.info('removeCache before RemoveCache_0100 : stdResult : ' + d.stdResult);
          console.info('removeCache before RemoveCache_0100 : data : ' + d.exitCode);
          before = Number(d.stdResult)
          sendEventByKey('webviewkey',10,'');
          await sleep(6000)
          abilityDelegator.executeShellCommand(cmd,1,
            async (err: any, d: any) => {
              console.info('removeCache after RemoveCache_0100 : err : ' + JSON.stringify(err));
              console.info('removeCache after RemoveCache_0100 : stdResult : ' + d.stdResult);
              console.info('removeCache after RemoveCache_0100 : data : ' + d.exitCode);
              after = Number(d.stdResult)
              expect(before <= after).assertTrue();
              done()
            })
        })
    })
    
    /*
    * @tc.number    : WebView_Stage_RemoveCache_0200
    * @tc.name      : Set the web deletion cache parameter to false
    * @tc.desc      : Verify that the web does not delete the Rom cache
    */
    it('WebView_Stage_RemoveCache_0200',0, async function (done) {
      await sleep(2000)
      sendEventByKey('baidu',10,'');
      let Key="WebView_Stage_RemoveCache_0200";
      await forKey(Key);
      let before,after;
      await sleep(4000)
      var cmd = 'ls -lR /data/app/el2/100/base/com.example.webview_nweb/cache/web/Cache/Cache_Data |grep "^-"|wc -l' ;
      console.log('removeCache cmd = ' + cmd);
      let abilityDelegator = AbilityDelegatorRegistry.getAbilityDelegator()
      abilityDelegator.executeShellCommand(cmd,4,
        async (err: any, d: any) => {
          console.info('removeCache before RemoveCache_0200 : err : ' + JSON.stringify(err));
          console.info('removeCache before RemoveCache_0200 : stdResult : ' + d.stdResult);
          console.info('removeCache before RemoveCache_0200 : data : ' + d.exitCode);
          before = Number(d.stdResult)
          sendEventByKey('webviewkey',10,'');
          await sleep(5000)
          abilityDelegator.executeShellCommand(cmd,1,
            async (err: any, d: any) => {
              console.info('removeCache after RemoveCache_0200 : err : ' + JSON.stringify(err));
              console.info('removeCache after RemoveCache_0200 : stdResult : ' + d.stdResult);
              console.info('removeCache after RemoveCache_0200 : data : ' + d.exitCode);
              after = Number(d.stdResult)
              expect(before <= after).assertTrue();
              done()
            })
        })
    }) 
    
    /*
    * @tc.number    : WebView_Stage_RemoveCache_0300
    * @tc.name      : Set the web deletion cache parameter to undefined
    * @tc.desc      : Verify that the web does not delete the Rom cache
    */
    it('WebView_Stage_RemoveCache_0300',0, async function (done) {
      await sleep(2000)
      sendEventByKey('baidu',10,'');
      let Key="WebView_Stage_RemoveCache_0300";
      await forKey(Key);
      let before,after;
      await sleep(4000)
      var cmd = 'ls -lR /data/app/el2/100/base/com.example.webview_nweb/cache/web/Cache/Cache_Data |grep "^-"|wc -l' ;
      console.log('removeCache cmd = ' + cmd);
      let abilityDelegator = AbilityDelegatorRegistry.getAbilityDelegator()
      abilityDelegator.executeShellCommand(cmd,4,
        async (err: any, d: any) => {
          console.info('removeCache before RemoveCache_0300 : err : ' + JSON.stringify(err));
          console.info('removeCache before RemoveCache_0300 : stdResult : ' + d.stdResult);
          console.info('removeCache before RemoveCache_0300 : data : ' + d.exitCode);
          before = Number(d.stdResult)
          sendEventByKey('webviewkey',10,'');
          await sleep(5000)
          abilityDelegator.executeShellCommand(cmd,1,
            async (err: any, d: any) => {
              console.info('removeCache after RemoveCache_0300 : err : ' + JSON.stringify(err));
              console.info('removeCache after RemoveCache_0300 : stdResult : ' + d.stdResult);
              console.info('removeCache after RemoveCache_0300 : data : ' + d.exitCode);
              after = Number(d.stdResult)
              expect(before <= after).assertTrue();
              done()
            })
        })
    })

    /*
    * @tc.number    : WebView_Stage_RemoveCache_0400
    * @tc.name      : Set the web deletion cache parameter to null
    * @tc.desc      : Verify that the web does not delete the Rom cache
    */
    it('WebView_Stage_RemoveCache_0400',0, async function (done) {
      await sleep(2000)
      sendEventByKey('baidu',10,'');
      let Key="WebView_Stage_RemoveCache_0400";
      await forKey(Key);
      let before,after;
      await sleep(4000)
      var cmd = 'ls -lR /data/app/el2/100/base/com.example.webview_nweb/cache/web/Cache/Cache_Data |grep "^-"|wc -l' ;
      console.log('removeCache cmd = ' + cmd);
      let abilityDelegator = AbilityDelegatorRegistry.getAbilityDelegator()
      abilityDelegator.executeShellCommand(cmd,4,
        async (err: any, d: any) => {
          console.info('removeCache before RemoveCache_0400 : err : ' + JSON.stringify(err));
          console.info('removeCache before RemoveCache_0400 : stdResult : ' + d.stdResult);
          console.info('removeCache before RemoveCache_0400 : data : ' + d.exitCode);
          before = Number(d.stdResult)
          sendEventByKey('webviewkey',10,'');
          await sleep(5000)
          abilityDelegator.executeShellCommand(cmd,1,
            async (err: any, d: any) => {
              console.info('removeCache after RemoveCache_0400 : err : ' + JSON.stringify(err));
              console.info('removeCache after RemoveCache_0400 : stdResult : ' + d.stdResult);
              console.info('removeCache after RemoveCache_0400 : data : ' + d.exitCode);
              after = Number(d.stdResult)
              expect(before <= after).assertTrue();
              done()
            })
        })
    }) 
    
    /*
    * @tc.number    : WebView_Stage_RemoveCache_0500
    * @tc.name      : Set the web deletion cache parameter to false and then set the web deletion cache parameter to true
    * @tc.desc      : Verify that the web does not delete the Rom cache
    */
    it('WebView_Stage_RemoveCache_0500',0, async function (done) {
      await sleep(2000)
      sendEventByKey('baidu',10,'');
      let Key="WebView_Stage_RemoveCache_0500";
      await forKey(Key);
      let before,after;
      await sleep(4000)
      var cmd = 'ls -lR /data/app/el2/100/base/com.example.webview_nweb/cache/web/Cache/Cache_Data |grep "^-"|wc -l' ;
      console.log('removeCache cmd = ' + cmd);
      let abilityDelegator = AbilityDelegatorRegistry.getAbilityDelegator()
      abilityDelegator.executeShellCommand(cmd,4,
        async (err: any, d: any) => {
          console.info('removeCache before RemoveCache_0500 : err : ' + JSON.stringify(err));
          console.info('removeCache before RemoveCache_0500 : stdResult : ' + d.stdResult);
          console.info('removeCache before RemoveCache_0500 : data : ' + d.exitCode);
          before = Number(d.stdResult)
          sendEventByKey('webviewkey',10,'');
          await sleep(5000)
          abilityDelegator.executeShellCommand(cmd,1,
            async (err: any, d: any) => {
              console.info('removeCache after RemoveCache_0500 : err : ' + JSON.stringify(err));
              console.info('removeCache after RemoveCache_0500 : stdResult : ' + d.stdResult);
              console.info('removeCache after RemoveCache_0500 : data : ' + d.exitCode);
              after = Number(d.stdResult)
              expect(before <= after).assertTrue();
              done()
            })
        })
    }) 

    /*
    * @tc.number    : WebView_Stage_GetBackForwardEntries_0100
    * @tc.name      : Successfully load the specified page and get the correct entries information
    * @tc.desc      : Call GetBackForwardEntries on the web page
    */
    it('WebView_Stage_GetBackForwardEntries_0100',0, async function (done) {
      await sleep(2000)
      sendEventByKey('baidu',10,'');
      await sleep(4000)
      let Key="GetBackForwardEntries0100";
      await forKey(Key);
      let Message = 'GetBackForwardEntries0100 true';
      registerEvent("WebView_Stage_GetBackForwardEntries_0100",Message,"equal",BACKFORWARDENTRIESEVENTID,done);
      sendEventByKey('webviewkey',10,'');
    })

    /*
    * @tc.number    : WebView_Stage_GetBackForwardEntries_0200
    * @tc.name      : Successfully load the specified page twice and get the correct entries information
    * @tc.desc      : Call GetBackForwardEntries twice on the web page
    */
    it('WebView_Stage_GetBackForwardEntries_0200',0, async function (done) {
      await sleep(1000)
      sendEventByKey('baidu-runoob',10,'');
      await sleep(4000)
      let Key="GetBackForwardEntries0200";
      await forKey(Key);
      let Message = 'GetBackForwardEntries0200 true';
      registerEvent("WebView_Stage_GetBackForwardEntries_0200",Message,"equal",BACKFORWARDENTRIESSECEVENTID,done);
      sendEventByKey('webviewkey',10,'');
    })

    /*
    * @tc.number    : WebView_Stage_GetBackForwardEntries_0300
    * @tc.name      : Successfully load the local page and get the correct entries information
    * @tc.desc      : Call GetBackForwardEntries on the local page
    */
    it('WebView_Stage_GetBackForwardEntries_0300',0, async function (done) {
      await sleep(2000)
      let Key="GetBackForwardEntries0300";
      await forKey(Key);
      let Message = 'GetBackForwardEntries0300 true';
      registerEvent("WebView_Stage_GetBackForwardEntries_0300",Message,"equal",BACKFORWARDENTRIESTHIEVENTID,done);
      sendEventByKey('webviewkey',10,'');
    })

    /*
    * @tc.number    : WebView_Stage_GetBackForwardEntries_0400
    * @tc.name      : Successfully load the specified page and pass in the parameter -1 to the getItemAtIndex
    * @tc.desc      : Call GetBackForwardEntries on the web page with error parameter
    */
    it('WebView_Stage_GetBackForwardEntries_0400',0, async function (done) {
      await sleep(2000)
      sendEventByKey('baidu',10,'');
      await sleep(2000)
      let Key="GetBackForwardEntries0400";
      await forKey(Key);
      let Message = 'GetBackForwardEntries0400 err true';
      registerEvent("WebView_Stage_GetBackForwardEntries_0400",Message,"equal",BACKFORWARDENTRIESFOUEVENTID,done);
      sendEventByKey('webviewkey',10,'');
    })

    /*
    * @tc.number    : WebView_Stage_GetBackForwardEntries_0500
    * @tc.name      : Successfully load the specified page and pass in the parameter null to the getItemAtIndex
    * @tc.desc      : Call GetBackForwardEntries on the web page with error parameter
    */
    it('WebView_Stage_GetBackForwardEntries_0500',0, async function (done) {
      await sleep(2000)
      sendEventByKey('baidu',10,'');
      await sleep(2000)
      let Key="GetBackForwardEntries0500";
      await forKey(Key);
      let Message = 'GetBackForwardEntries0500 true';
      registerEvent("WebView_Stage_GetBackForwardEntries_0500",Message,"equal",BACKFORWARDENTRIESFIFEVENTID,done);
      sendEventByKey('webviewkey',10,'');
    })

    /*
    * @tc.number    : WebView_Stage_GetBackForwardEntries_0600
    * @tc.name      : After obtaining the stack list information of the current web component, call the getItemAtIndex
    *                 whose parameter is passed to exceed the number of records
    * @tc.desc      : Call GetBackForwardEntries on the web page with error parameter
    */
    it('WebView_Stage_GetBackForwardEntries_0600',0, async function (done) {
      await sleep(2000)
      sendEventByKey('baidu',10,'');
      await sleep(2000)
      let Key="GetBackForwardEntries0600";
      await forKey(Key);
      let Message = 'GetBackForwardEntries0600 err true';
      registerEvent("WebView_Stage_GetBackForwardEntries_0600",Message,"equal",BACKFORWARDENTRIESSIXEVENTID,done);
      sendEventByKey('webviewkey',10,'');
    })

    /*
    * @tc.number    : WebView_Stage_GetBackForwardEntries_0700
    * @tc.name      : Successfully load the specified page and pass in the parameter undefined to the getItemAtIndex
    * @tc.desc      : Call GetBackForwardEntries on the web page with error parameter
    */
    it('WebView_Stage_GetBackForwardEntries_0700',0, async function (done) {
      await sleep(2000)
      sendEventByKey('baidu',10,'');
      await sleep(2000)
      let Key="GetBackForwardEntries0700";
      await forKey(Key);
      let Message = 'GetBackForwardEntries0700 true';
      registerEvent("WebView_Stage_GetBackForwardEntries_0700",Message,"equal",BACKFORWARDENTRIESSEVENEVENTID,done);
      sendEventByKey('webviewkey',10,'');
    })

    /*
    * @tc.number    : WebView_Stage_ScrollPageDown_0100
    * @tc.name      : Whether to move to the bottom
    * @tc.desc      : Set whether WebView moves to the bottom parameter to true
    */
    it('WebView_Stage_ScrollPageDown_0100',0, async function (done) {
      await sleep(2000);
      let Key="WebView_Stage_ScrollPageDown_0100";
      await forKey(Key);
      await sleep(2000)
      let PageDown = "\"PageScroll Down true\"";
      registerEvent("WebView_Stage_ScrollPageDown_0100",PageDown,"equal",PAGEDOWNEVENTID,done);
      sendEventByKey('webviewkey',10,'');
    })

    /*
    * @tc.number    : WebView_Stage_ScrollPageDown_0200
    * @tc.name      : Whether to move to the bottom
    * @tc.desc      : Set whether WebView moves to the bottom parameter to false
    */
    it('WebView_Stage_ScrollPageDown_0200',0, async function (done) {
      await sleep(2000);
      let Key="WebView_Stage_ScrollPageDown_0200";
      await forKey(Key);
      await sleep(2000)
      let PageDown = "\"PageScroll Down\"";
      registerEvent("WebView_Stage_ScrollPageDown_0200",PageDown,"equal",PAGEDOWNSECEVENTID,done);
      sendEventByKey('webviewkey',10,'');
    })

    /*
    * @tc.number    : WebView_Stage_ScrollPageDown_0300
    * @tc.name      : Whether to move to the bottom
    * @tc.desc      : Set whether WebView moves to the bottom parameter to null
    */
    it('WebView_Stage_ScrollPageDown_0300',0, async function (done) {
      await sleep(2000);
      let Key="WebView_Stage_ScrollPageDown_0300";
      await forKey(Key);
      await sleep(2000)
      let PageDown = "err";
      registerEvent("WebView_Stage_ScrollPageDown_0300",PageDown,"equal",PAGEDOWNTHIREVENTID,done);
      sendEventByKey('webviewkey',10,'');
    })

    /*
    * @tc.number    : WebView_Stage_ScrollPageDown_0400
    * @tc.name      : Whether to move to the bottom
    * @tc.desc      : Set whether WebView moves to the bottom parameter to undefined
    */
    it('WebView_Stage_ScrollPageDown_0400',0, async function (done) {
      await sleep(2000);
      let Key="WebView_Stage_ScrollPageDown_0400";
      await forKey(Key);
      await sleep(2000)
      let PageDown = "err";
      registerEvent("WebView_Stage_ScrollPageDown_0400",PageDown,"equal",PAGEDOWNFOUREVENTID,done);
      sendEventByKey('webviewkey',10,'');
    })

    /*
    * @tc.number    : WebView_Stage_ScrollPageDown_0500
    * @tc.name      : Whether to move to the bottom
    * @tc.desc      : Set whether WebView moves to the bottom multiple times
    */
    it('WebView_Stage_ScrollPageDown_0500',0, async function (done) {
      await sleep(2000);
      let Key="WebView_Stage_ScrollPageDown_0500";
      await forKey(Key);
      await sleep(2000)
      let PageDown = "\"PageScroll Down true\"";
      registerEvent("WebView_Stage_ScrollPageDown_0500",PageDown,"equal",PAGEDOWNFIFEVENTID,done);
      sendEventByKey('webviewkey',10,'');
    })

    /*
    * @tc.number    : WebView_Stage_ScrollPageUp_0100
    * @tc.name      : Whether to move to the top
    * @tc.desc      : Set whether WebView moves to the top parameter to true
    */
    it('WebView_Stage_ScrollPageUp_0100',0, async function (done) {
      await sleep(2000);
      let Key="WebView_Stage_ScrollPageUp_0100";
      await forKey(Key);
      await sleep(2000)
      let PageUp = "\"PageScroll Up true\"";
      registerEvent("WebView_Stage_ScrollPageUp_0100",PageUp,"equal",PAGEDUPEVENTID,done);
      sendEventByKey('webviewkey',10,'');
    })

    /*
    * @tc.number    : WebView_Stage_ScrollPageUp_0200
    * @tc.name      : Whether to move to the top
    * @tc.desc      : Set whether WebView moves to the top parameter to false
    */
    it('WebView_Stage_ScrollPageUp_0200',0, async function (done) {
      await sleep(2000);
      let Key="WebView_Stage_ScrollPageUp_0200";
      await forKey(Key);
      await sleep(2000)
      let PageUp = "\"PageScroll Up\"";
      registerEvent("WebView_Stage_ScrollPageUp_0200",PageUp,"equal",PAGEDUPSECEVENTID,done);
      sendEventByKey('webviewkey',10,'');
    })

    /*
    * @tc.number    : WebView_Stage_ScrollPageUp_0300
    * @tc.name      : Whether to move to the top
    * @tc.desc      : Set whether WebView moves to the top parameter to null
    */
    it('WebView_Stage_ScrollPageUp_0300',0, async function (done) {
      await sleep(2000);
      let Key="WebView_Stage_ScrollPageUp_0300";
      await forKey(Key);
      await sleep(2000)
      let PageUp = "err";
      registerEvent("WebView_Stage_ScrollPageUp_0300",PageUp,"equal",PAGEDUPTHIREVENTID,done);
      sendEventByKey('webviewkey',10,'');
    })

    /*
    * @tc.number    : WebView_Stage_ScrollPageUp_0400
    * @tc.name      : Whether to move to the top
    * @tc.desc      : Set whether WebView moves to the top parameter to undefined
    */
    it('WebView_Stage_ScrollPageUp_0400',0, async function (done) {
      await sleep(2000);
      let Key="WebView_Stage_ScrollPageUp_0400";
      await forKey(Key);
      await sleep(2000)
      let PageDown = "err";
      registerEvent("WebView_Stage_ScrollPageUp_0400",PageDown,"equal",PAGEDUPFOUREVENTID,done);
      sendEventByKey('webviewkey',10,'');
    })

    /*
    * @tc.number    : WebView_Stage_ScrollPageUp_0500
    * @tc.name      : Whether to move to the top
    * @tc.desc      : Set whether WebView moves to the top multiple times
    */
    it('WebView_Stage_ScrollPageUp_0500',0, async function (done) {
      await sleep(2000);
      let Key="WebView_Stage_ScrollPageUp_0500";
      await forKey(Key);
      await sleep(2000)
      let PageUp = "\"PageScroll Up true\"";
      registerEvent("WebView_Stage_ScrollPageUp_0500",PageUp,"equal",PAGEDUPFIFEVENTID,done);
      sendEventByKey('webviewkey',10,'');
    })
  })
}