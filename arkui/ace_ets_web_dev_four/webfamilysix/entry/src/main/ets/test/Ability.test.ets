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
var KEYEVENTID = 10
var SERIFEVENTID = 1106
var FANTASYEVENTID = 1406
var SANSSERIFEVENTID = 1206
var CURSIVEEVENTID = 1306
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
        expect(backData.data.ACTION ).assertEqual(expectedValue);
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
    * @tc.number    : WebView_Stage_WebFantasyFont_0600
    * @tc.name      : Set Fantasy font family name to undefined
    * @tc.desc      : Verify that Fantasy font family names cannot be modified
    */
    it('WebView_Stage_WebFantasyFont_0600',0, async function (done) {
      await sleep(3000)
      let Key="WebFantasyFont";
      await forKey(Key);
      await sleep(2000)
      let WebFantasyFont = "59";
      registerEvent("WebView_Stage_WebFantasyFont_0600",WebFantasyFont,"equal",FANTASYEVENTID,done);
      sendEventByKey('webviewkey',10,'');
    })

    /*
    * @tc.number    : WebView_Stage_WebSansSerif_0600
    * @tc.name      : Set Sans serif font family name to undefined
    * @tc.desc      : Verify that Sans serif font family names cannot be modified
    */
    it('WebView_Stage_WebSansSerif_0600',0, async function (done) {
      await sleep(2000)
      let Key="WebSansSerif";
      await forKey(Key);
      await sleep(2000)
      let WebSansSerif = "59";
      registerEvent("WebView_Stage_WebSansSerif_0600",WebSansSerif,"equal",SANSSERIFEVENTID,done);
      sendEventByKey('webviewkey',10,'');
    })

    /*
    * @tc.number    : WebView_Stage_WebSerif_0600
    * @tc.name      : Set serif font family name to undefined
    * @tc.desc      : Verify that serif font family names cannot be modified
    */
    it('WebView_Stage_WebSerif_0600',0, async function (done) {
      await sleep(2000)
      let Key="WebSerif";
      await forKey(Key);
      await sleep(2000)
      let WebSerif = "59";
      registerEvent("WebView_Stage_WebSerif_0600",WebSerif,"equal",SERIFEVENTID,done);
      sendEventByKey('webviewkey',10,'');
    })

    /*
    * @tc.number    : WebView_Stage_WebCursiveFont_0600
    * @tc.name      : Set the cursive font name to undefined
    * @tc.desc      : Verify that the cursive font cannot be modified
    */
    it('WebView_Stage_WebCursiveFont_0600',0, async function (done) {
      await sleep(2000)
      let Key="WebCursiveFont";
      await forKey(Key);
      await sleep(2000)
      let WebCursiveFont = "59";
      registerEvent("WebView_Stage_WebCursiveFont_0600",WebCursiveFont,"equal",CURSIVEEVENTID,done);
      sendEventByKey('webviewkey',10,'');
    })   
  })
}