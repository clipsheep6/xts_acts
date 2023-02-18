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
var ONFAVICONFIREVENTID = 2504
var ONFAVICONSECEVENTID = 2505
var ONFAVICONTHIREVENTID = 2506
var ONFAVICONFOURTHEVENTID = 2507
var ONFAVICONFIFEVENTID = 2508
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
    * @tc.number    : WebView_Stage_onFaviconReceived_0100
    * @tc.name      : Triggered when the application receive a new favicon for the current web page
    * @tc.desc      : Do not trigger callback when the currently loaded page has no website icon.
    */
    it('WebView_Stage_onFaviconReceived_0100',0, async function (done) {
      await sleep(2000)
      let Key="WebView_Stage_onFaviconReceived_0100";
      await forKey(Key);
      await sleep(2000)
      let onFaviconReceived = "No-trigger";
      registerEvent("WebView_Stage_onFaviconReceived_0100",onFaviconReceived,"equal",ONFAVICONFIREVENTID,done);
      sendEventByKey('webviewkey',10,'');
    })

    /*
    * @tc.number    : WebView_Stage_onFaviconReceived_0200
    * @tc.name      : Triggered when the application receive a new favicon for the current web page
    * @tc.desc      : Get whether the icon of the current website is editable.
    */
    it('WebView_Stage_onFaviconReceived_0200',0, async function (done) {
      await sleep(2000);
      sendEventByKey('baidu',10,'');
      await sleep(2000);
      let Key="WebView_Stage_onFaviconReceived_0200";
      await forKey(Key);
      await sleep(4000);
      let onFaviconReceived = true;
      registerEvent("WebView_Stage_onFaviconReceived_0200",onFaviconReceived,"equal",ONFAVICONSECEVENTID,done);
      sendEventByKey('webviewkey',10,'');
    })

    /*
    * @tc.number    : WebView_Stage_onFaviconReceived_0300
    * @tc.name      : Triggered when the application receive a new favicon for the current web page
    * @tc.desc      : Get the width of the current website icon.
    */
    it('WebView_Stage_onFaviconReceived_0300',0, async function (done) {
      await sleep(2000);
      sendEventByKey('baidu',10,'');
      await sleep(2000);
      let Key="WebView_Stage_onFaviconReceived_0300";
      await forKey(Key);
      await sleep(2000);
      let onFaviconReceived = true;
      registerEvent("WebView_Stage_onFaviconReceived_0300",onFaviconReceived,"equal",ONFAVICONTHIREVENTID,done);
      sendEventByKey('webviewkey',10,'');
    })

    /*
    * @tc.number    : WebView_Stage_onFaviconReceived_0400
    * @tc.name      : Triggered when the application receive a new favicon for the current web page
    * @tc.desc      : Get the number of bytes per line of the image of the current website icon.
    */
    it('WebView_Stage_onFaviconReceived_0400',0, async function (done) {
      await sleep(2000);
      sendEventByKey('baidu',10,'');
      await sleep(2000);
      let Key="WebView_Stage_onFaviconReceived_0400";
      await forKey(Key);
      await sleep(2000);
      let onFaviconReceived = true;
      registerEvent("WebView_Stage_onFaviconReceived_0400",onFaviconReceived,"equal",ONFAVICONFOURTHEVENTID,done);
      sendEventByKey('webviewkey',10,'');
    })

    /*
    * @tc.number    : WebView_Stage_onFaviconReceived_0500
    * @tc.name      : Triggered when the application receive a new favicon for the current web page
    * @tc.desc      : Get the total number of image bytes of the current website icon.
    */
    it('WebView_Stage_onFaviconReceived_0500',0, async function (done) {
      await sleep(2000);
      sendEventByKey('baidu',10,'');
      await sleep(2000);
      let Key="WebView_Stage_onFaviconReceived_0500";
      await forKey(Key);
      await sleep(2000);
      let onFaviconReceived = true;
      registerEvent("WebView_Stage_onFaviconReceived_0500",onFaviconReceived,"equal",ONFAVICONFIFEVENTID,done);
      sendEventByKey('webviewkey',10,'');
    })
  })
}