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

import commonEvent from "@ohos.commonevent"
import abilityManager from '@ohos.application.AbilityManager'
import missionManager from '@ohos.application.missionManager'
import bundle from '@ohos.bundle'
import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from 'deccjsunit/index'

var subscriberInfo_0100 = {
  events: ["ACTS_ConnectAbility_0100_CommonEvent"],
};
const START_ABILITY_TIMEOUT = 10000;

const BUNDLE_PATHS = [['/data/test/serviceappa.hap']];
const BUNDLE_NAMES = ['com.example.serviceappa'];

const BUNDLE_COUNT = 1;
const MAX_MISSION_NUM = 1024;

function getMissionId() {
  return new Promise(async (resolve, reject) => {
    var missionId = -1;
    var missionInfos = await missionManager.getMissionInfos('', MAX_MISSION_NUM);
    for (let i = 0; i < missionInfos.length; i++) {
      console.log('getMissionId result: ' + i + '= ' + JSON.stringify(missionInfos[i]))
      if ((missionInfos[i].want.abilityName == "com.example.extensioninfothird.MainAbility") &&
      (missionInfos[i].runningState == 0)) {
        missionId = missionInfos[i].missionId;
        break;
      }
    }
    console.log('======>getMissionId resolve missionId<=======' + missionId);
    resolve(missionId);
  })
}

export default function abilityTest(abilityContext) {

  describe('ActsExtensionRunningInfosTest', function () {

    beforeEach(async (done) => {
      console.log('======>beforeEach  ininin<=======');
      let installer = await bundle.getBundleInstaller();
      var count = 0;

      for (let i = 0; i < BUNDLE_COUNT; i++) {
        installer.install(BUNDLE_PATHS[i], {
          userId: 100,
          installFlag: 1,
          isKeepData: false
        }, (err, data) => {
          count++;
          console.log('======>beforeEach install finish <=======' + err.code);
          console.log('======>beforeEach install finish <=======' + data.status);
          console.log('======>beforeEach install finish <=======' + data.statusMessage);
          if (count == BUNDLE_COUNT) {
            done();
          }
        })
      }
    })

    afterEach(async (done) => {
      let installer = await bundle.getBundleInstaller();
      var count = 0;
      var testMissionId;
      console.log('======>afterEach11111 test missionId<=======');
      testMissionId = await getMissionId();
      console.log('======>afterEach test missionId<=======' + testMissionId);
      await missionManager.moveMissionToFront(testMissionId);
      console.log('======>uninstall test start<=======');
      for (let i = 0; i < BUNDLE_COUNT; i++) {
        installer.uninstall(BUNDLE_NAMES[i], {
          userId: 100,
          installFlag: 1,
          isKeepData: false
        }, (err, data) => {
          count++;
          console.log('======>afterEach uninstall finish <=======' + err.code);
          console.log('======>afterEach uninstall finish <=======' + data.status);
          console.log('======>afterEach uninstall finish <=======' + data.statusMessage);
          if (count == BUNDLE_COUNT) {
            setTimeout(()=>{
              console.log('======>uninstall done end 111111<=======');
              done()
            },2000)
          }
        })
      }
      console.log('======>uninstall test end<=======');
    })


    function checkExtensionInfos(name, dataInfo) {
      for (let i = 0, len = dataInfo.length; i < len; i++) {
        if (dataInfo[i].processName == name) {
          expect(dataInfo[i].extension.deviceId).assertEqual('');
          expect(dataInfo[i].extension.bundleName).assertEqual('com.example.serviceappa');
          expect(dataInfo[i].extension.abilityName).assertEqual('com.example.serviceappa.ServiceAbility');
          expect(dataInfo[i].uid).assertLarger(10000);
          expect(dataInfo[i].pid).assertLarger(500);
          expect(dataInfo[i].startTime).assertLarger(50000);
          expect(dataInfo[i].clientPackage[0]).assertEqual('com.example.extensioninfothird');
          console.log('ACTS_GetExtensionRunningInfos_0300311111====<begin');
          return true;
        }
        console.log('ACTS_GetExtensionRunningInfos_03003333====<begin');
      }
      console.log('ACTS_GetExtensionRunningInfos_0300333322222====<begin');
      return false;
    }

    /*
    * @tc.number: ACTS_GetExtensionRunningInfos_0300
    * @tc.name: Application running extension information query
    * @tc.desc: Disconnect query information after verifying the connection to the service application(by promise)
    */
    it('ACTS_GetExtensionRunningInfos_0300', 0, async function (done) {
      console.log('ACTS_GetExtensionRunningInfos_0300====<begin');
      console.log('========StartConnect called');
      var subscriber;
      let connId;
      let id;

      function onConnectCallback_0100(element, remote) {
        console.log('ACTS_ConnectAbility_0300 ConnectAbility onConnect element.deviceId : ')
      }

      function onDisconnectCallback_0100(element) {
        console.log('ACTS_ConnectAbility_0300 ConnectAbility onDisconnect element.deviceId : ')
      }

      function onFailedCallback(code) {
        console.log('ACTS_ConnectAbility ConnectAbility onFailed errCode : ' + code)
      }


      async function checkExtension() {
        var datainfo = await abilityManager.getExtensionRunningInfos(10)
          console.debug('=========>ACTS_GetExtensionRunningInfos_0300=======' + JSON.stringify(datainfo));
          expect(checkExtensionInfos('com.example.serviceappa', datainfo)).assertFalse();
          done();
      }

      connId = await abilityContext.connectAbility(
        {
          bundleName: "com.example.serviceappa",
          abilityName: "com.example.serviceappa.ServiceAbility",
        },
        {
          onConnect: onConnectCallback_0100,
          onDisconnect: onDisconnectCallback_0100,
          onFailed: onFailedCallback,
        },
      );
      console.log('StartConnectNative0300 ConnectAbility connId : ' + connId);


      function subscribeCallBack(err, data) {
        console.debug("====>Subscribe CallBack data 0300:====>" + JSON.stringify(data));
        expect(data.event).assertEqual("ACTS_ConnectAbility_0100_CommonEvent");
        commonEvent.unsubscribe(subscriber, unSubscribeCallback);
      }

      commonEvent.createSubscriber(subscriberInfo_0100).then(async (data) => {
        console.debug("====>Create0300 Subscriber====>");
        subscriber = data;
        await commonEvent.subscribe(subscriber, subscribeCallBack);
      })

      function unSubscribeCallback() {
        console.debug("====>UnSubscribe0300 CallBack====>");
        abilityContext.disconnectAbility(
          connId,
          (error, data) => {
            console.log('ExtensionInfos_0300 DisconnectAbility result errCode : ' + error.code + " data: " + data)
          },
        );
        setTimeout(()=>{
          console.log('======>uninstall done end 1111119999<=======');
          checkExtension();
          done();
        },1000)

        console.debug("====>UnSubscribe111 CallBack====>");
      }

      function timeout() {
        expect().assertFail();
        console.debug('subscriberInfo_0300 timeout');
        abilityContext.disconnectAbility(
          connId,
          (error, data) => {
            console.log('ExtensionInfos_0300 DisconnectAbility result : ' + error.code + " data: " + data)
          },
        );
        done();
      }

      id = setTimeout(timeout, START_ABILITY_TIMEOUT);
    })

    /*
    * @tc.number: ACTS_GetExtensionRunningInfos_0600
    * @tc.name: Application running extension information query
    * @tc.desc: Disconnect query information after verifying the connection to the service application(by callback)
    */
    it('ACTS_GetExtensionRunningInfos_0600', 0, async function (done) {
      console.log('ACTS_GetExtensionRunningInfos_0600====<begin');
      console.log('========StartConnect called');
      var subscriber;
      let connId;
      let id;

      function onConnectCallback_0100() {
        console.log('ACTS_ConnectAbility_0600 ConnectAbility onConnect element.deviceId : ')
      }

      function onDisconnectCallback_0100() {
        console.log('ACTS_ConnectAbility_0600 ConnectAbility onDisconnect element.deviceId : ')
      }

      function onFailedCallback() {
        console.log('ACTS_ConnectAbility ConnectAbility onFailed errCode : ')
      }


      async function checkExtension() {
        abilityManager.getExtensionRunningInfos(10,(err,datainfo)=>{
          console.debug('=========>ACTS_GetExtensionRunningInfos_0600=======' + JSON.stringify(datainfo));
          expect(checkExtensionInfos('com.example.serviceappa', datainfo)).assertFalse();
          done();
        })
      }

      connId = await abilityContext.connectAbility(
        {
          bundleName: "com.example.serviceappa",
          abilityName: "com.example.serviceappa.ServiceAbility",
        },
        {
          onConnect: onConnectCallback_0100,
          onDisconnect: onDisconnectCallback_0100,
          onFailed: onFailedCallback,
        },
      );
      console.log('StartConnectNative0600 ConnectAbility connId : ' + connId);


      function subscribeCallBack(err, data) {
        console.debug("====>Subscribe CallBack data 0600:====>" + JSON.stringify(data));
        expect(data.event).assertEqual("ACTS_ConnectAbility_0100_CommonEvent");
        commonEvent.unsubscribe(subscriber, unSubscribeCallback);
      }

      commonEvent.createSubscriber(subscriberInfo_0100).then(async (data) => {
        console.debug("====>Create0600 Subscriber====>");
        subscriber = data;
        await commonEvent.subscribe(subscriber, subscribeCallBack);
      })

      function unSubscribeCallback() {
        console.debug("====>UnSubscribe0600 CallBack====>");
        abilityContext.disconnectAbility(
          connId,
          (error, data) => {
            console.log('ExtensionInfos_0600 DisconnectAbility result errCode : ' + error.code + " data: " + data)
          },
        );
        setTimeout(()=>{
          console.log('======>uninstall done end setTimeout<=======');
          checkExtension();
          done();
        },1000)

        console.debug("====>UnSubscribe111 CallBack====>");
      }

      function timeout() {
        expect().assertFail();
        console.debug('subscriberInfo_0600 timeout');
        abilityContext.disconnectAbility(
          connId,
          (error, data) => {
            console.log('ExtensionInfos_0600 DisconnectAbility result : ' + error.code + " data: " + data)
          },
        );
        done();
      }

      id = setTimeout(timeout, START_ABILITY_TIMEOUT);
    })
  });
};