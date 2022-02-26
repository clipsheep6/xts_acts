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

const START_ABILITY_TIMEOUT = 5000;
var subscriberInfo_0100 = {
  events: ["ACTS_ConnectAbility_0100_CommonEvent"],
};
var subscriberInfo_0200 = {
  events: ["ACTS_ConnectAbility_0200_CommonEvent"],
};

const BUNDLE_PATHS = [['/data/test/serviceappa.hap'], ['/data/test/serviceappb.hap'], ['/data/test/querytestthree.hap']];
const BUNDLE_NAMES = ['com.example.serviceappa', 'com.example.serviceappb', 'com.example.querytestthree'];

const BUNDLE_COUNT = 3;
const MAX_MISSION_NUM = 1024;

function getMissionId() {
  return new Promise(async (resolve, reject) => {
    var missionId = -1;
    var missionInfos = await missionManager.getMissionInfos('', MAX_MISSION_NUM);
    for (let i = 0; i < missionInfos.length; i++) {
      console.log('getMissionId result: ' + i + '= ' + JSON.stringify(missionInfos[i]))
      if ((missionInfos[i].want.abilityName == "com.example.extensioninfosecond.MainAbility") &&
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
            console.log('======>uninstall done end 111111<=======');
            done();
          }

        })
      }
      console.log('======>uninstall test end<=======');
    })


    function checkExtensionInfos(name, dataInfo, name2) {
      for (let i = 0, len = dataInfo.length; i < len; i++) {
        if (dataInfo[i].processName == name) {
          expect(dataInfo[i].extension.deviceId).assertEqual('');
          expect(dataInfo[i].extension.bundleName).assertEqual('com.example.serviceappa');
          expect(dataInfo[i].extension.abilityName).assertEqual('com.example.serviceappa.ServiceAbility');
          expect(dataInfo[i].uid).assertLarger(10000);
          expect(dataInfo[i].pid).assertLarger(500);
          expect(dataInfo[i].startTime).assertLarger(50000);
          expect(dataInfo[i].clientPackage[0]).assertEqual('com.example.extensioninfosecond');
          return true;
        }
        if (dataInfo[i].processName == name2) {
          expect(dataInfo[i].extension.deviceId).assertEqual('');
          expect(dataInfo[i].extension.bundleName).assertEqual('com.example.serviceappb');
          expect(dataInfo[i].extension.abilityName).assertEqual('com.example.serviceappb.ServiceAbility');
          expect(dataInfo[i].uid).assertLarger(10000);
          expect(dataInfo[i].pid).assertLarger(500);
          expect(dataInfo[i].startTime).assertLarger(50000);
          expect(dataInfo[i].clientPackage[0]).assertEqual('com.example.querytestthree');
          return true;
        }
      }
      return false;
    }

    /*
    * @tc.number: ACTS_GetExtensionRunningInfos_0200
    * @tc.name: Application running extension information query
    * @tc.desc: Verify that multiple service applications are connected to query information(by promise)
    */
    it('ACTS_GetExtensionRunningInfos_0200', 0, async function (done) {
      console.log('ACTS_GetExtensionRunningInfos_0200====<begin');
      console.log('========StartConnect called');
      var subscriber;
      let connId;
      let id;

      function onDisconnectCallback_0200(element) {
        console.log('ACTS_ConnectAbility ConnectAbility onDisconnect element.deviceId : ')
      }

      function onFailedCallback(code) {
        console.log('ACTS_ConnectAbility ConnectAbility onFailed errCode : ' + code)
      }

      async function checkExtension() {
        var datainfo = await abilityManager.getExtensionRunningInfos(10)
        console.debug('=========>ACTS_GetExtensionRunningInfos_0200=======' + JSON.stringify(datainfo))
        expect(checkExtensionInfos('com.example.serviceappa', datainfo, 'com.example.serviceappb')).assertTrue();
      }

      async function onConnectCallback2(element, remote) {
        console.log('onConnectCallBack0200 callback called');
      }

      connId = await abilityContext.connectAbility(
        {
          bundleName: "com.example.serviceappa",
          abilityName: "com.example.serviceappa.ServiceAbility",
        },
        {
          onConnect: onConnectCallback2,
          onDisconnect: onDisconnectCallback_0200,
          onFailed: onFailedCallback,
        },
      );
      console.log('StartConnectNative0200 ConnectAbility connId : ' + connId);

      await abilityContext.startAbility(
        {
          bundleName: "com.example.querytestthree",
          abilityName: "com.example.querytestthree.MainAbility",
          action: "connectServicebB"
        }
      );
      console.debug("====>connectServicebB CallBack data:====>");

      function subscribeCallBack(err, data) {
        console.debug("====>Subscribe CallBack data:====>" + JSON.stringify(data));
        expect(data.event).assertEqual("ACTS_ConnectAbility_0200_CommonEvent");
        checkExtension();
        commonEvent.unsubscribe(subscriber, unSubscribeCallback);
      }

      commonEvent.createSubscriber(subscriberInfo_0200).then(async (data) => {
        console.debug("====>Create Subscriber====>");
        subscriber = data;
        await commonEvent.subscribe(subscriber, subscribeCallBack);
      })

      function unSubscribeCallback() {
        console.debug("====>UnSubscribe CallBack====>");
        abilityContext.disconnectAbility(
          connId,
          (error, data) => {
            console.log('GetExtensionInfos_0200 DisconnectAbility result errCode : ' + error.code + " data: " + data)
          },
        );
        done();
      }

      function timeout() {
        expect().assertFail();
        console.debug('subscriberInfo_0200 timeout');
        abilityContext.disconnectAbility(
          connId,
          (error, data) => {
            console.log('GetExtensionInfos_0200 DisconnectAbility result errCode : ' + error.code + " data: " + data)
          },
        );
        done();
      }

      id = setTimeout(timeout, START_ABILITY_TIMEOUT);
    })

    /*
    * @tc.number: ACTS_GetExtensionRunningInfos_0500
    * @tc.name: Application running extension information query
    * @tc.desc: Verify that multiple service applications are connected to query information(by callback)
    */
    it('ACTS_GetExtensionRunningInfos_0500', 0, async function (done) {
      console.log('ACTS_GetExtensionRunningInfos_0500====<begin');
      console.log('========StartConnect called');
      var subscriber;
      let connId;
      let id;

      function onDisconnectCallback_0200(element) {
        console.log('ACTS_ConnectAbility ConnectAbility onDisconnect element.deviceId : ')
      }

      function onFailedCallback(code) {
        console.log('ACTS_ConnectAbility ConnectAbility onFailed errCode : ' + code)
      }

      async function checkExtension() {
        var datainfo = await abilityManager.getExtensionRunningInfos(10)
        console.debug('=========>ACTS_GetExtensionRunningInfos_0500=======' + JSON.stringify(datainfo))
        expect(checkExtensionInfos('com.example.serviceappa', datainfo, 'com.example.serviceappb')).assertTrue();
      }

      async function onConnectCallback2(element, remote) {
        console.log('onConnectCallBack0500 callback called');
      }

      connId = await abilityContext.connectAbility(
        {
          bundleName: "com.example.serviceappa",
          abilityName: "com.example.serviceappa.ServiceAbility",
        },
        {
          onConnect: onConnectCallback2,
          onDisconnect: onDisconnectCallback_0200,
          onFailed: onFailedCallback,
        },
      );
      console.log('StartConnectNative0500 ConnectAbility connId : ' + connId);

      await abilityContext.startAbility(
        {
          bundleName: "com.example.querytestthree",
          abilityName: "com.example.querytestthree.MainAbility",
          action: "connectServicebB"
        }
      );
      console.debug("====>connectServicebB CallBack data:====>");

      function subscribeCallBack(err, data) {
        console.debug("====>Subscribe CallBack data:====>" + JSON.stringify(data));
        expect(data.event).assertEqual("ACTS_ConnectAbility_0200_CommonEvent");
        checkExtension();
        commonEvent.unsubscribe(subscriber, unSubscribeCallback);
      }

      commonEvent.createSubscriber(subscriberInfo_0200).then(async (data) => {
        console.debug("====>Create Subscriber====>");
        subscriber = data;
        await commonEvent.subscribe(subscriber, subscribeCallBack);
      })

      function unSubscribeCallback() {
        console.debug("====>UnSubscribe CallBack====>");
        abilityContext.disconnectAbility(
          connId,
          (error, data) => {
            console.log('GetExtensionInfos_0500 DisconnectAbility result errCode : ' + error.code + " data: " + data)
          },
        );
        done();
      }

      function timeout() {
        expect().assertFail();
        console.debug('subscriberInfo_0500 timeout');
        abilityContext.disconnectAbility(
          connId,
          (error, data) => {
            console.log('GetExtensionInfos_0500 DisconnectAbility result errCode : ' + error.code + " data: " + data)
          },
        );
        done();
      }

      id = setTimeout(timeout, START_ABILITY_TIMEOUT);
    })
  });
};