/*
 * Copyright (c) 2021 Huawei Device Co., Ltd.
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
import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from "deccjsunit/index"
import commonEvent from '@ohos.commonevent'
import missionManager from '@ohos.application.missionManager'

export default function clear0300Test(abilityContext) {
  describe('clear0300Test', function () {
    console.log("-------------start test---------------");

    var TAG = "";
    
    /*
     * @tc.number  SUB_AA_OpenHarmony_Clear_0300
     * @tc.name    Pull up ability1,ability2,in different HAP and end ability2
     * @tc.desc    Function test
     * @tc.level   0
     */
    it("SUB_AA_OpenHarmony_Clear_0300", 0, async function(done){
      console.log("------------start SUB_AA_OpenHarmony_Clear_0300-------------");
      TAG = "SUB_AA_OpenHarmony_Clear_0300";
      var list1 = [""];
      var list2 = ["","",""];
      var Subscriber = "";
      var Subscriber2 = "";
      var missionIds = [0,0,0,0];

      var subscriberInfo_MainAbility = {
        events: ["mainAbility_onForeground"]
      }
      var subscriberInfo_MainAbility2 = {
        events: ["mainAbility2_onDestroy",
        "mainAbility2_onWindowStageCreate",
        "mainAbility2_onBackground"]
      }
      function SubscribeCallBack_MainAbility(err, data) {
        console.log(TAG + " Subscribe1 CallBack data:" + JSON.stringify(data));
        if(data.event == "mainAbility_onForeground"){
          list1[0] = "onForeground";
        }
        console.log(TAG + "list1 is : " + list1)
      }
      function SubscribeCallBack_mainAbility2(err, data) {
        console.log(TAG + " Subscribe2 CallBack data:" + JSON.stringify(data));
        if(data.event == "mainAbility2_onDestroy"){
          list2[0] = "onDestroy";
        }else if(data.event == "mainAbility2_onWindowStageCreate"){
          list2[1] = "onWindowStageCreate";
        }else if(data.event == "mainAbility2_onBackground"){
          list2[2] = "onBackground";
        }
        console.log(TAG + "list2 is : " + list2)
      }
      commonEvent.createSubscriber(subscriberInfo_MainAbility).then(async (data) => {
        console.log(TAG + "====>Create Subscriber1====>");
        Subscriber = data;
        console.log(TAG + "data1 is : " + JSON.stringify(Subscriber))
        await commonEvent.subscribe(Subscriber, SubscribeCallBack_MainAbility);
      });
      commonEvent.createSubscriber(subscriberInfo_MainAbility2).then(async (data) => {
        console.log(TAG + "====>Create Subscriber2====>");
        Subscriber2 = data;
        console.log(TAG + "data2 is : " + JSON.stringify(Subscriber2))
        await commonEvent.subscribe(Subscriber2, SubscribeCallBack_mainAbility2);
      });

      setTimeout(function(){
        abilityContext.startAbility({
          bundleName: "com.example.zhymyapplication",
          abilityName: "com.example.zhymyapplication.MainAbility"
        }, (error, data) => {
          console.log(TAG + ' - startAbility2: ' + JSON.stringify(error) + ", " +
          JSON.stringify(data));
        });
      },500)

      setTimeout(function(){
        console.log(TAG + ' - after back equal start----------- ');
        expect(list1[0]).assertEqual("onForeground");
        expect(list2[0]).assertEqual("onDestroy");
        expect(list2[1]).assertEqual("onWindowStageCreate");
        expect(list2[2]).assertEqual("onBackground");
        done();
        console.log("------------end SUB_AA_OpenHarmony_MoveMissionToFront_0300-------------");
      },4800)
    });

  })
}
