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
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from "@ohos/hypium"
import commonEvent from '@ohos.commonEvent'
import missionManager from '@ohos.application.missionManager'

var subscriberInfo2 = {
  events: ["ACTS_StartAbility_CommonEvent1", "ACTS_StartAbility_CommonEvent2" ]
};

var subscriberInfo3 = {
  events: ["ACTS_StartRecent_0200_1", "ACTS_StartRecent_0200_2", "ACTS_StartRecent_0200_3" ]
};

var subscriberInfo4 = {
  events: ["ACTS_StartRecent_0300_1", "ACTS_StartRecent_0300_2", "ACTS_StartRecent_0300_3" ]
};

var subscriberInfo5 = {
  events: ["ACTS_StartRecent_0400_1", "ACTS_StartRecent_0400_2", "ACTS_StartRecent_0400_3", "ACTS_StartRecent_0400_4" ]
};

const CASE_TIMEOUT = 9000;
console.info("====>in Ability.test====>");

export default function abilityTest() {
  describe('ActsStartRecentTest', function () {
    console.info("====>in ActsStartRecentTest====>");

    function sleep(time) {
      return new Promise((resolve) => setTimeout(resolve, time))
    }

    function getTopMissionId() {
        return new Promise(async (resolve, reject) => {
            var missionId = -1;
            var missionInfos = await missionManager.getMissionInfos('', 1);
            if (missionInfos.length >= 0) {
                missionId = missionInfos[0].missionId;
            }
            console.log('======>getMissionId resolve missionId<=======' + missionId);
            resolve(missionId);
        })
    }

    /*
    * @tc.number: ACTS_startRecent_0100
    * @tc.name: Start Recent Ability with no permission.
    * @tc.desc: Verify Get displayId to startAbilityForResult Ability
    */
    it('ACTS_startRecent_0100', 0, async function (done) {
      console.log('ACTS_startRecent_0100====<begin');
      var subscriber;
      let id;

      async function subscribeCallBack(err, data) {
        console.info("====>ACTS_startRecent_0100 Subscribe CallBack data:====>" + JSON.stringify(data));

        async function processInfoCheck(data) {
          console.info('====> ACTS_startRecent_0100 processInfoCheck=====>');
          expect(globalThis.instance2Count).assertEqual(1);
          done();
        }

        if (data.event == "ACTS_StartAbility_CommonEvent1") {
          console.info('====> ACTS_startRecent_0100 ACTS_StartAbility_CommonEvent1 success=====>');

          await globalThis.abilityContext.startAbility(
            {
                bundleName: 'com.example.startrecent',
                abilityName: 'com.example.startrecent.MainAbility2',
                parameters:{
                    "ohos.aafwk.param.startRecent" : true,
                    "commonEvent":"ACTS_StartAbility_CommonEvent2"
                }
            }).then(() => {
                console.info("====>ACTS_startRecent_0100  start recent end====>");
          })
        }

        if (data.event == "ACTS_StartAbility_CommonEvent2") {
          console.info('====> ACTS_startRecent_0100 ACTS_StartAbility_CommonEvent2 success=====>');
          clearTimeout(id);
          processInfoCheck(data);
          commonEvent.unsubscribe(subscriber, unSubscribeCallback)
        }
      }

      commonEvent.createSubscriber(subscriberInfo2).then(async (data) => {
        console.info("====>ACTS_startRecent_0100 Create Subscriber====>");
        subscriber = data;
        commonEvent.subscribe(subscriber, subscribeCallBack);
        await globalThis.abilityContext.startAbility(
          {
            bundleName: 'com.example.startrecent',
            abilityName: 'com.example.startrecent.MainAbility2',
            parameters:{
                "commonEvent":"ACTS_StartAbility_CommonEvent1"
            }
          }).then(() => {
          console.info("====>ACTS_startRecent_0100 startAbility end====>");
        })
      })

      function unSubscribeCallback() {
        console.info("====>UnSubscribe0100 CallBack====>");
      }

      function timeout() {
        expect().assertFail();
        console.log('ACTS_startRecent_0100 timeout.');
      }

      id = setTimeout(timeout, CASE_TIMEOUT);
      console.log('Start  ACTS_startRecent_0100 timer id : ' + id);
    })

    /*
    * @tc.number: ACTS_startRecent_0200
    * @tc.name: Start Recent Ability with no permission.
    * @tc.desc: Verify Get displayId to startAbilityForResult Ability
    */
    it('ACTS_startRecent_0200', 0, async function (done) {
      console.log('ACTS_startRecent_0200====<begin');
      var subscriber;
      let id;

      async function subscribeCallBack(err, data) {
        console.info("====>ACTS_startRecent_0200 Subscribe CallBack data:====>" + JSON.stringify(data));

        async function processInfoCheck(data) {
          console.info('====> ACTS_startRecent_0200 processInfoCheck=====>');
          var instanceFlagResult = "instanceFlag2";
          expect(globalThis.instanceFlag).assertEqual(instanceFlagResult);
          done();
        }

        if (data.event == "ACTS_StartRecent_0200_1") {
          console.info('====> ACTS_startRecent_0200 recv ACTS_StartRecent_0200_1 success=====>');

          await globalThis.abilityContext.startAbility(
            {
                bundleName: 'com.example.startrecent',
                abilityName: 'com.example.startrecent.MainAbility3',
                parameters:{
                    "instanceFlag":"instanceFlag2",
                    "commonEvent":"ACTS_StartRecent_0200_2"
                }
            }).then(() => {
                console.info("====>ACTS_startRecent_0200  start recent end====>");
          })
        }

        if (data.event == "ACTS_StartRecent_0200_2") {
          console.info('====> ACTS_startRecent_0200 recv ACTS_StartRecent_0200_2 success=====>');

          await globalThis.abilityContext.startAbility(
            {
                bundleName: 'com.example.startrecent',
                abilityName: 'com.example.startrecent.MainAbility3',
                parameters:{
                    "ohos.aafwk.param.startRecent" : true,
                    "commonEvent":"ACTS_StartRecent_0200_3"
                }
            }).then(() => {
                console.info("====>ACTS_startRecent_0200  start recent end====>");
          })
        }

        if (data.event == "ACTS_StartRecent_0200_3") {
          console.info('====> ACTS_startRecent_0200 recv ACTS_StartRecent_0200_3 success=====>');

          clearTimeout(id);
          processInfoCheck(data);
          commonEvent.unsubscribe(subscriber, unSubscribeCallback)
        }

      }

      commonEvent.createSubscriber(subscriberInfo3).then(async (data) => {
        console.info("====>ACTS_startRecent_0200 Create Subscriber====>");
        subscriber = data;
        commonEvent.subscribe(subscriber, subscribeCallBack);
        await globalThis.abilityContext.startAbility(
          {
            bundleName: 'com.example.startrecent',
            abilityName: 'com.example.startrecent.MainAbility3',
            parameters:{
                "instanceFlag":"instanceFlag1",
                "commonEvent":"ACTS_StartRecent_0200_1"
            }
          }).then(() => {
          console.info("====>ACTS_startRecent_0200 startAbility end====>");
        })
      })

      function unSubscribeCallback() {
        console.info("====>UnSubscribe0200 CallBack====>");
      }

      function timeout() {
        expect().assertFail();
        console.log('ACTS_startRecent_0200 timeout.');
      }

      id = setTimeout(timeout, CASE_TIMEOUT);
      console.log('Start  ACTS_startRecent_0200 timer id : ' + id);
    })


    /*
    * @tc.number: ACTS_startRecent_0300
    * @tc.name: Start recent ability from mission info.
    * @tc.desc: Verify Get displayId to startAbilityForResult Ability
    */
    it('ACTS_startRecent_0300', 0, async function (done) {
      console.log('ACTS_startRecent_0300====<begin');
      var topMissionId = -1;
      var subscriber;
      let id;

      async function subscribeCallBack(err, data) {
        console.info("====>ACTS_startRecent_0300 Subscribe CallBack data:====>" + JSON.stringify(data));

        async function processInfoCheck(data) {
          var theMissionId;
          theMissionId = await getTopMissionId();
          console.info('====> ACTS_startRecent_0300_ processInfoCheck=====theMissionId:' + theMissionId);
          expect(topMissionId).assertEqual(theMissionId);
          done();
        }

        if (data.event == "ACTS_StartRecent_0300_1") {
          console.info('====> ACTS_startRecent_0300 recv ACTS_StartRecent_0300_1 success=====>');
          await sleep(500);
          var theMissionId;
          theMissionId = await getTopMissionId();
          topMissionId = theMissionId;
          console.info('====> ACTS_startRecent_0300 recv ACTS_StartRecent_0300_1 success,topId:' + topMissionId);

          await globalThis.abilityContext4.terminateSelf().then(() => {
                console.info("====>ACTS_startRecent_0300  terminateSelf terminate ability====>");
          });
        }

        if (data.event == "ACTS_StartRecent_0300_2") {
          console.info('====> ACTS_startRecent_0300 recv ACTS_StartRecent_0300_2 success=====>');
          await sleep(500);
          await globalThis.abilityContext.startAbility(
            {
                bundleName: 'com.example.startrecent',
                abilityName: 'com.example.startrecent.MainAbility4',
                parameters:{
                    "ohos.aafwk.param.startRecent" : true,
                    "commonEvent":"ACTS_StartRecent_0300_3"
                }
            }).then(() => {
                console.info("====>ACTS_startRecent_0300  start recent end====>");
          })
        }

        if (data.event == "ACTS_StartRecent_0300_3") {
          console.info('====> ACTS_startRecent_0200 recv ACTS_StartRecent_0200_3 success=====>');
          await sleep(500);
          clearTimeout(id);
          processInfoCheck(data);
          commonEvent.unsubscribe(subscriber, unSubscribeCallback)
        }

      }

      commonEvent.createSubscriber(subscriberInfo4).then(async (data) => {
        console.info("====>ACTS_startRecent_0300 Create Subscriber====>");
        subscriber = data;
        commonEvent.subscribe(subscriber, subscribeCallBack);
        await globalThis.abilityContext.startAbility(
          {
            bundleName: 'com.example.startrecent',
            abilityName: 'com.example.startrecent.MainAbility4',
            parameters:{
                "commonEvent":"ACTS_StartRecent_0300_1"
            }
          }).then(() => {
          console.info("====>ACTS_startRecent_0300 startAbility end====>");
        })
      })

      function unSubscribeCallback() {
        console.info("====>UnSubscribe0200 CallBack====>");
      }

      function timeout() {
        expect().assertFail();
        console.log('ACTS_startRecent_0200 timeout.');
      }

      id = setTimeout(timeout, CASE_TIMEOUT);
      console.log('Start  ACTS_startRecent_0200 timer id : ' + id);
    })

    /*
    * @tc.number: ACTS_startRecent_0400
    * @tc.name: Start recent ability from mission info.
    * @tc.desc: Verify Get displayId to startAbilityForResult Ability
    */
    it('ACTS_startRecent_0400', 0, async function (done) {
      console.log('ACTS_startRecent_0400====<begin');
      var topMissionId1 = -1;
      var topMissionId2 = -1;
      var subscriber;
      let id;

      async function subscribeCallBack(err, data) {
        console.info("====>ACTS_startRecent_0400 Subscribe CallBack data:====>" + JSON.stringify(data));

        async function processInfoCheck(data) {
          var theMissionId;
          theMissionId = await getTopMissionId();
          console.info('====> ACTS_startRecent_0400_ processInfoCheck=====theMissionId:' + theMissionId);
          expect(topMissionId1).assertEqual(theMissionId);
          done();
        }

        if (data.event == "ACTS_StartRecent_0400_1") {
          console.info('====> ACTS_startRecent_0400 recv ACTS_StartRecent_0400_1 success=====>');
          await sleep(500);
          var theMissionId;
          theMissionId = await getTopMissionId();
          topMissionId1 = theMissionId;
          console.info('====> ACTS_startRecent_0300 recv ACTS_StartRecent_0300_1 success,topId:' + topMissionId1);

          await globalThis.abilityContext.startAbility(
            {
                bundleName: 'com.example.startrecent',
                abilityName: 'com.example.startrecent.MainAbility5',
                parameters:{
                    "commonEvent":"ACTS_StartRecent_0400_2"
                }
            }).then(() => {
                console.info("====>ACTS_startRecent_0400  start recent end====>");
          })
        }

        if (data.event == "ACTS_StartRecent_0400_2") {
          console.info('====> ACTS_startRecent_0400 recv ACTS_StartRecent_0400_2 success=====>');
          await sleep(500);
          var theMissionId;
          theMissionId = await getTopMissionId();
          topMissionId2 = theMissionId;
          console.info('====> ACTS_startRecent_0400 recv ACTS_StartRecent_0400_2 success,topId:' + topMissionId2);
          await sleep(500);

          await globalThis.abilityContext5.terminateSelf().then(() => {
                console.info("====>ACTS_startRecent_0400  terminateSelf terminate ability====>");
          });
        }

        if (data.event == "ACTS_StartRecent_0400_3") {
          console.info('====> ACTS_startRecent_0400 recv ACTS_StartRecent_0400_3 success=====>');
          await sleep(500);

          await globalThis.abilityContext.startAbility(
            {
                bundleName: 'com.example.startrecent',
                abilityName: 'com.example.startrecent.MainAbility5',
                parameters:{
                    "ohos.aafwk.param.startRecent" : true,
                    "commonEvent":"ACTS_StartRecent_0400_4"
                }
            }).then(() => {
                console.info("====>ACTS_startRecent_0400  start recent end====>");
          })
        }

        if (data.event == "ACTS_StartRecent_0400_4") {
          console.info('====> ACTS_startRecent_0400 recv ACTS_StartRecent_0400_4 success=====>');
          await sleep(500);
          clearTimeout(id);
          processInfoCheck(data);
          commonEvent.unsubscribe(subscriber, unSubscribeCallback)
        }

      }

      commonEvent.createSubscriber(subscriberInfo5).then(async (data) => {
        console.info("====>ACTS_startRecent_0400 Create Subscriber====>");
        subscriber = data;
        commonEvent.subscribe(subscriber, subscribeCallBack);
        await globalThis.abilityContext.startAbility(
          {
            bundleName: 'com.example.startrecent',
            abilityName: 'com.example.startrecent.MainAbility5',
            parameters:{
                "commonEvent":"ACTS_StartRecent_0400_1"
            }
          }).then(() => {
          console.info("====>ACTS_startRecent_0400 startAbility end====>");
        })
      })

      function unSubscribeCallback() {
        console.info("====>UnSubscribe0200 CallBack====>");
      }

      function timeout() {
        expect().assertFail();
        console.log('ACTS_startRecent_0400 timeout.');
      }

      id = setTimeout(timeout, CASE_TIMEOUT);
      console.log('Start  ACTS_startRecent_0400 timer id : ' + id);
    })

  })
}