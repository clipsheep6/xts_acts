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
var FONTSIZEEVENTID = 1303
var NETWORDEVENTID = 2503
let STANDARDEVENTID = 1903
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
    * @tc.number    : WebView_Stage_DefaultFontSize_0300
    * @tc.name      : Set the default font size to null
    * @tc.desc      : Verify that the default font size cannot be modified
    */ 
    it('WebView_Stage_DefaultFontSize_0300',0, async function (done) {
      let Key="DefaultFontSize";
      await sleep(2000)
      await forKey(Key);
      let FontSize = '8';
      console.info('userAgent registerEvent===>');
      registerEvent("WebView_Stage_DefaultFontSize_0300",FontSize,"equal",FONTSIZEEVENTID,done);
      sendEventByKey('webviewkey',10,'');
    })

    /*
    * @tc.number    : WebView_Stage_StandardFontFamily_0300
    * @tc.name      : Set the standard font family name to null
    * @tc.desc      : Verify that the name of the standard font family that can be modified is null
    */
    it('WebView_Stage_StandardFontFamily_0300',0, async function (done) {
      await sleep(2000)
      let Key="StandardFontFamily";
      await forKey(Key);
      let WebFont = 'HarmonyOs-Sans-Condensed';
      registerEvent("WebView_Stage_StandardFontFamily_0300",WebFont,"equal",STANDARDEVENTID,done);
      sendEventByKey('webviewkey',10,'');
    })

    /*
    * @tc.number    : WebView_Stage_BlockNetwork_0300
    * @tc.name      : Set WebView to not load resources from the network
    * @tc.desc      : Verify whether WebView can load resources from the network
    */ 
     it('WebView_Stage_BlockNetwork_0300',0, async function (done) {
      await sleep(2000)
      let Key="blockNetwork";
      await forKey(Key);
      let MinimumLogicalFontSize = "百度一下，你就知道";
      registerEvent("WebView_Stage_BlockNetwork_0300",MinimumLogicalFontSize,"equal",NETWORDEVENTID,done);
      sendEventByKey('webviewkey',10,'');
    })
  })
}