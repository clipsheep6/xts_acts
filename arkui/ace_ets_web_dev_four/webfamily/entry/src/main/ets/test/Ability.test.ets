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
var SERIFEVENTID = 1101
var FANTASYEVENTID = 1401
var SANSSERIFEVENTID = 1201
var CURSIVEEVENTID = 1301
var FIXEDFONTEVENTID = 1501
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
    * @tc.number    : WebView_Stage_WebFantasyFont_0100
    * @tc.name      : Set the existing fantasy font family name "HarmonyOS Sans SC"
    * @tc.desc      : Verify that fantasy fonts can be modified
    */
    it('WebView_Stage_WebFantasyFont_0100',0, async function (done) {
      await sleep(2000)
      let Key="WebFantasyFont";
      await forKey(Key);
      await sleep(2000)
      let WebFantasyFont = "59";
      registerEvent("WebView_Stage_WebFantasyFont_0100",WebFantasyFont,"unequal",FANTASYEVENTID,done);
      sendEventByKey('webviewkey',10,'');
    })
    /*
    * @tc.number    : WebView_Stage_WebSansSerif_0100
    * @tc.name      : Set the name of the existing sans serif font family "HarmonyOS Sans SC"
    * @tc.desc      : Verify that sans serif fonts can be modified
    */
    it('WebView_Stage_WebSansSerif_0100',0, async function (done) {
      await sleep(2000)
      let Key="WebSansSerif";
      await forKey(Key);
      await sleep(2000)
      let WebSansSerif = "59";
      registerEvent("WebView_Stage_WebSansSerif_0100",WebSansSerif,"unequal",SANSSERIFEVENTID,done);
      sendEventByKey('webviewkey',10,'');
    })
    /*
    * @tc.number    : WebView_Stage_WebSerif_0100
    * @tc.name      : Set the existing serif font family name "HarmonyOS Sans SC"
    * @tc.desc      : Verify that serif family names can be modified
    */
    it('WebView_Stage_WebSerif_0100',0, async function (done) {
      await sleep(2000)
      let Key="WebSerif";
      await forKey(Key);
      await sleep(2000)
      let WebSerif = "59";
      registerEvent("WebView_Stage_WebSerif_0100",WebSerif,"unequal",SERIFEVENTID,done);
      sendEventByKey('webviewkey',10,'');
    })

    /*
    * @tc.number    : WebView_Stage_WebCursiveFont_0100
    * @tc.name      : Set the cursive font name to the existing "HarmonyOS Sans SC"
    * @tc.desc      : Verify that the cursive font can be modified
    */
    it('WebView_Stage_WebCursiveFont_0100',0, async function (done) {
      await sleep(2000)
      let Key="WebCursiveFont";
      await forKey(Key);
      await sleep(2000)
      let WebCursiveFont = "59";
      registerEvent("WebView_Stage_WebCursiveFont_0100",WebCursiveFont,"unequal",CURSIVEEVENTID,done);
      sendEventByKey('webviewkey',10,'');
    })
    
    /*
    * @tc.number    : WebView_Stage_WebFixedFontFamily_0100
    * @tc.name      : Set the fixed font name to the existing "HarmonyOS Sans SC"
    * @tc.desc      : Verify that the fixed font can be modified
    */
    it('WebView_Stage_WebFixedFontFamily_0100',0, async function (done) {
      await sleep(2000)
      let Key="WebFixedFontFamily";
      await forKey(Key);
      await sleep(2000)
      let WebFixedFontFamily = "32";
      registerEvent("WebView_Stage_WebFixedFontFamily_0100",WebFixedFontFamily,"unequal",FIXEDFONTEVENTID,done);
      sendEventByKey('webviewkey',10,'');
    })
  })
}