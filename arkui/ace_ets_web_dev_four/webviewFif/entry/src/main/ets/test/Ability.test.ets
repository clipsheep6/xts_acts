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
var FONTSIZEEVENTID = 1305
var NETWORDEVENTID = 2505
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
    * @tc.number    : WebView_Stage_DefaultFontSize_0500
    * @tc.name      : Set default font size multiple times
    * @tc.desc      : Verify that the default font size is the last set default
    */
    it('WebView_Stage_DefaultFontSize_0500',0, async function (done) {
      await sleep(2000)
      let Key="DefaultFontSize";
      await forKey(Key);
      let FontSize = '30';
      console.info('userAgent registerEvent===>');
      registerEvent("WebView_Stage_DefaultFontSize_0500",FontSize,"equal",FONTSIZEEVENTID,done);
      sendEventByKey('webviewkey',10,'');
    })    

    /*
    * @tc.number    : WebView_Stage_BlockNetwork_0500
    * @tc.name      : Setting WebView multiple times does not load resources from the network
    * @tc.desc      : Verify that the WebView can be set multiple times to load resources from the network
    */
     it('WebView_Stage_BlockNetwork_0500',0, async function (done) {
      await sleep(2000)
      let Key="blockNetwork";
      await forKey(Key);
      let MinimumLogicalFontSize = "百度一下，你就知道";
      registerEvent("WebView_Stage_BlockNetwork_0500",MinimumLogicalFontSize,"unequal",NETWORDEVENTID,done);
      sendEventByKey('webviewkey',10,'');
    })
    
  })
}