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
import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from 'deccjsunit/index'
import missionManager  from '@ohos.application.missionManager';
import commonEvent from '@ohos.commonEvent';


export default function MissionManagerTest(abilityContext) {
  describe('missionManagerTest', function () {
    var START_ABILITY_TIMEOUT = 5000;
    var listKey = [];
    var timestamp1;
    var missionId1;

    function getMissionInfo() {
      missionManager.getMissionInfos('', 10, (error, data) => {
        console.log("SUB_AA_OpenHarmony_MissionManager_6500, getMissionInfos1:" + JSON.stringify(data));
        for (var i = 0;i < data.length; i++) {
          console.log("SUB_AA_OpenHarmony_MissionManager_6500, getMissionInfos1 item:" + JSON.stringify(data[i]));
          if (data[i].want.abilityName == 'com.example.entry2.MainAbility' &&
          data[i].runningState == 0) {
            timestamp1 = data[i].timestamp;
            missionId1 = data[i].missionId;
            break;
          }
        }
        setTimeout(() => {
          abilityContext.startAbility({
            bundleName: "com.example.missionmanagerapi8",
            abilityName: "com.example.entry2.MainAbility2"
          }, (error, data) => {
            console.log('SUB_AA_OpenHarmony_MissionManager_6500 - startAbility2: '
            + JSON.stringify(error) + ", " + JSON.stringify(data))
          });
        }, 500);
      })
    }

    /*
     * @tc.number  SUB_AA_OpenHarmony_MissionManager_6300
     * @tc.name    Verify the want information in the missionInfo of the ability obtained by getMissionInfos
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('SUB_AA_OpenHarmony_MissionManager_6300', 0, async function (done) {
      console.log("------------start SUB_AA_OpenHarmony_MissionManager_6300-------------");
      var TAG = "SUB_AA_OpenHarmony_MissionManager_6300";
      setTimeout(function () {
        abilityContext.startAbility({
            bundleName: "com.example.missionmanagerapi8",
            abilityName: "com.example.entry2.MainAbility2"
          }, (error, data) => {
          console.log('SUB_AA_OpenHarmony_MissionManager_6300 - startAbility2: '
          + JSON.stringify(error) + ", " + JSON.stringify(data))
        });
      }, 1000)
      setTimeout(()=>{
        missionManager.getMissionInfos('', 10, (err, data) => {
          console.log("SUB_AA_OpenHarmony_MissionManager_6300, getMissionInfos:" + JSON.stringify(data));
          for (var i = 0;i < data.length; i++) {
            console.log('qweqweqweqweqwe' + JSON.stringify(data[i].want));
            if(data[i].want.abilityName == "com.example.entry2.MainAbility2"){
              expect(data[i].want.bundleName == "com.example.missionmanagerapi8").assertTrue();
              done();
            }
          }
        })
      },1000)
      console.log("------------end start SUB_AA_OpenHarmony_MissionManager_6300-------------");
    })

    /*
     * @tc.number  SUB_AA_OpenHarmony_MissionManager_6400
     * @tc.name    Verify the continuable information in the missionInfo of the ability obtained by getMissionInfos
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('SUB_AA_OpenHarmony_MissionManager_6400', 0, async function (done) {
      console.log("------------start SUB_AA_OpenHarmony_MissionManager_6400-------------");
      setTimeout(function () {
        abilityContext.startAbility({
            bundleName: "com.example.missionmanagerapi8",
            abilityName: "com.example.entry2.MainAbility2"
        }, (error, data) => {
          console.log('SUB_AA_OpenHarmony_MissionManager_6400 - startAbility2: '
          + JSON.stringify(error) + ", " + JSON.stringify(data))
        });
      }, 1000)
      setTimeout(()=>{
        missionManager.getMissionInfos('', 10, (err, data) => {
          console.log("SUB_AA_OpenHarmony_MissionManager_6400, getMissionInfos:" + JSON.stringify(data));
          for (var i = 0;i < data.length; i++) {
            console.log('qweqweqweqweqwe' + JSON.stringify(data[i].continuable));
            if(data[i].want.abilityName == "com.example.entry2.MainAbility2"){
              console.log('continuable:' + JSON.stringify(data[i].continuable));
              expect(data[i].continuable == false).assertTrue();
              done();
            };
          }
        })
      },1000)
      console.log("------------end start SUB_AA_OpenHarmony_MissionManager_6400-------------");
    })

    /*
     * @tc.number  SUB_AA_OpenHarmony_MissionManager_6500
     * @tc.name    The timestamp of the verification ability will change
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('SUB_AA_OpenHarmony_MissionManager_6500', 0, async function (done) {
      var myEvents = {
        events:
        [
          "Ability2_onForeground",
          "Ability2_onBackground"
        ]
      };
      var Subscriber;
      let id;
      function SubscribeCallBack(err, data) {
        listKey[0] = '';
        console.debug("beforeAll====>Subscribe CallBack data:====>" + JSON.stringify(data));
        switch (data.event) {
          case "Ability2_onForeground":
            console.log("SUB_AA_OpenHarmony_MissionManager_6500 Ability2_onForeground");
            listKey[0] = "Ability2_onForeground";
            break;
          case "Ability2_onBackground":
            console.log("SUB_AA_OpenHarmony_MissionManager_6500 Ability2_onBackground");
            listKey[0] = "Ability2_onBackground";
            break;
          default:
        }
        if (listKey[0] == "Ability2_onForeground") {
          console.log('SUB_AA_OpenHarmony_MissionManager_6500 Ability2_onForeground');
          getMissionInfo();
        }
        if (listKey[0] == "Ability2_onBackground") {
          console.log('SUB_AA_OpenHarmony_MissionManager_6500 Ability2_onBackground');
          missionManager.getMissionInfo('', missionId1, (error, data) => {
            if (data.want.abilityName == 'com.example.entry2.MainAbility') {
              expect(data.timestamp > timestamp1).assertTrue();
              clearTimeout(id);
              commonEvent.unsubscribe(Subscriber, UnSubscribeCallback);
            }
          })
        }
      };
      commonEvent.createSubscriber(myEvents).then(async (data) => {
        console.debug("SUB_AA_OpenHarmony_MissionManager_6500====>Create Subscriber====>");
        Subscriber = data;
        console.log("SUB_AA_OpenHarmony_MissionManager_6500 Subscriber " + JSON.stringify(Subscriber));
        await commonEvent.subscribe(Subscriber, SubscribeCallBack);
      }).catch((error) => {
        console.error('Operation failed. Cause: ' + JSON.stringify(error));
        done();
      });
      function UnSubscribeCallback() {
        console.debug("====>UnSubscribe CallBack====>");
        done();
      }
      function timeout() {
        expect().assertFail();
        console.debug('SUB_AA_OpenHarmony_MissionManager_6500=====timeout======');
        commonEvent.unsubscribe(Subscriber, UnSubscribeCallback);
      }
      id = setTimeout(timeout, START_ABILITY_TIMEOUT);
      abilityContext.startAbility(
        {
          bundleName: "com.example.missionmanagerapi8",
          abilityName: "com.example.entry2.MainAbility"
        }, (error, data) => {
        console.log('SUB_AA_OpenHarmony_MissionManager_6500 - startAbility1: '
        + JSON.stringify(error) + ", " + JSON.stringify(data))
      });
    })

  })
}
