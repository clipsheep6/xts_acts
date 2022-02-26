// @ts-nocheck
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
import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from "deccjsunit/index"
import commonEvent from '@ohos.commonevent'
import abilitymanager from '@ohos.app.abilitymanager';
import abilityManager from '@ohos.application.abilitymanager';
import bundle from '@ohos.bundle';
import missionManager from '@ohos.application.missionManager'

const BUNDLE_PATH = [['/data/ActsAmsProcessMultiinstanceHapAA.hap',
'/data/ActsAmsProcessMultiinstanceHapAB.hap',
'/data/ActsAmsProcessMultiinstanceHapAC.hap',
'/data/ActsAmsProcessMultiinstanceHapAD.hap',
'/data/ActsAmsProcessMultiinstanceHapAE.hap',
'/data/ActsAmsProcessMultiinstanceHapAF.hap'],
['/data/ActsAmsProcessMultiinstanceHapBA.hap',
'/data/ActsAmsProcessMultiinstanceHapBB.hap',
'/data/ActsAmsProcessMultiinstanceHapBC.hap',
'/data/ActsAmsProcessMultiinstanceHapBD.hap',
'/data/ActsAmsProcessMultiinstanceHapBE.hap',
'/data/ActsAmsProcessMultiinstanceHapBF.hap']];
const BUNDLE_NAME = ['com.example.multiinstancehapa', 'com.example.multiinstancehapb'];
const PATHS_COUNT = 2;
const BUNDLE_COUNT = 2;
const MAX_MISSION_NUM = 1024;
var subscriberInfo = {
  events: ['HapAA_To_Test_CommonEvent',
  'HapAB_To_Test_CommonEvent',
  'HapAC_To_Test_CommonEvent',
  'HapAD_To_Test_CommonEvent',
  'HapAE_To_Test_CommonEvent',
  'HapAF_To_Test_CommonEvent',
  'HapBA_To_Test_CommonEvent',
  'HapBB_To_Test_CommonEvent',
  'HapBC_To_Test_CommonEvent',
  'HapBD_To_Test_CommonEvent',
  'HapBE_To_Test_CommonEvent',
  'HapBF_To_Test_CommonEvent',
  ],
};

var processNameA = "com.example.multiinstancehapa";
var processNameB = "com.example.multiinstancehapb";
var processNameC = "com.example.multiinstancehapc";
var processNameD = "com.example.multiinstancehapb.com.example.multiinstancehapba";
var processNameE = "com.example.multiinstancehapb.com.example.multiinstancehapbb";

function getMissionId() {
  return new Promise(async (resolve, reject) => {
    var missionId = -1;
    var missionInfos = await missionManager.getMissionInfos('', MAX_MISSION_NUM);
    for (let i = 0; i < missionInfos.length; i++) {
      console.log('getMissionId result: ' + i + '= ' + JSON.stringify(missionInfos[i]))
      if ((missionInfos[i].want.abilityName == "com.example.processmultiinstance.MainAbility") &&
      (missionInfos[i].runningState == 0)) {
        missionId = missionInfos[i].missionId;
        break;
      }
    }
    console.log('======>ACTS_Process_MultiInstance getMissionId resolve missionId<=======' + missionId);
    resolve(missionId);
  })
}

export default function abilityTest(abilityContext) {
  describe('ActsProcessMultiInstance', function () {

    beforeEach(async (done) => {
      setTimeout(async function () {
        let installer = await bundle.getBundleInstaller();
        var count = 0;
        for (let i = 0; i < PATHS_COUNT; i++) {
          installer.install(BUNDLE_PATH[i], {
            userId: 100,
            installFlag: 1,
            isKeepData: false
          }, (err, data) => {
            count++;
            console.log('======>ACTS_Process_MultiInstance beforeEach install finish<=======' + err.code);
            console.log('======>ACTS_Process_MultiInstance beforeEach install finish<=======' + data.status);
            console.log('======>ACTS_Process_MultiInstance beforeEach install finish<======='
            + data.statusMessage);
            if (count == PATHS_COUNT) {
              setTimeout(function () {
              done();
              }, 3000);
            }
          })
        }
      }, 2000);
    })
    afterEach(async (done) => {
      setTimeout(async function () {
        let installer = await bundle.getBundleInstaller();
        var count = 0;
        var testMissionId;

        testMissionId = await getMissionId();
        console.log('======>ACTS_Process_MultiInstance afterEach test missionId<=======' + testMissionId);
        await missionManager.moveMissionToFront(testMissionId);
        console.log('======>ACTS_Process_MultiInstance afterEach test move<=======');
        for (let i = 0; i < BUNDLE_COUNT; i++) {
          installer.uninstall(BUNDLE_NAME[i], {
            userId: 100,
            installFlag: 1,
            isKeepData: false
          }, (err, data) => {
            count++;
            console.log('======>ACTS_Process_MultiInstance afterEach uninstall finish<=======' + err.code);
            console.log('======>ACTS_Process_MultiInstance afterEach uninstall finish<=======' + data.status);
            console.log('======>ACTS_Process_MultiInstance afterEach uninstall finish<======='
            + data.statusMessage);
            if (count == BUNDLE_COUNT) {
//              setTimeout(function () {
                done();
//              }, 2000);
            }
          })
        }
      }, 500);
    })

    /**
     * @tc.number: ACTS_Process_MultiInstance_0100
     * @tc.name: Check that three HAP packages in one App, run in two processes.
     * @tc.desc: Check that three HAP packages in one App, two HAP packets have the same process name,
     * and the other hap packet has a different process name than the other two, run in two processes.
     */
    it('ACTS_Process_MultiInstance_0100', 0, async function (done) {
      console.log("ACTS_Process_MultiInstance_0100 --- start")
      var Subscriber;
      var abilityinfos;
      var flagAAToTest = false;
      var flagABToTest = false;

      function SubscribeCallBack(err, data) {
        try {
          console.debug("ACTS_Process_MultiInstance_0100====>Subscribe CallBack data:====>"
          + JSON.stringify(data));
          console.debug("ACTS_Process_MultiInstance_0100====>Subscribe CallBack data.event:====>"
          + JSON.stringify(data.event));
          switch (data.event) {
            case 'HapAA_To_Test_CommonEvent':
              flagAAToTest = true;
              break;
            case 'HapAB_To_Test_CommonEvent':
              flagABToTest = true;
              break;
          }
          console.debug("ACTS_Process_MultiInstance_0100====>SubscribeCallBack flagAAToTest:====>"
          + flagAAToTest)
          console.debug("ACTS_Process_MultiInstance_0100====>SubscribeCallBack flagABToTest:====>"
          + flagABToTest)
          setTimeout(function () {
            if (flagAAToTest == true && flagABToTest == true) {
              commonEvent.unsubscribe(Subscriber, UnSubscribeCallback);
            }
          }, 1000);
        } catch (err) {
          console.debug("ACTS_Process_MultiInstance_0100====>SubscribeCallBack err:====>" + err)
        }
      }

      commonEvent.createSubscriber(subscriberInfo).then(async (data) => {
        console.debug("ACTS_Process_MultiInstance_0100====>Create Subscriber====>");
        Subscriber = data;
        await commonEvent.subscribe(Subscriber, SubscribeCallBack);
      })

      async function UnSubscribeCallback() {
        try {
          console.debug("ACTS_Process_MultiInstance_0100====>UnSubscribeCallback in====>")

          abilityinfos = await abilityManager.getAbilityRunningInfos();
          console.debug("ACTS_Process_MultiInstance_0100====>abilityinfos:====>"
          + JSON.stringify(abilityinfos));
          var pidaa;
          var pidab;
          var abilityhapaaExist = false;
          var abilityhapabExist = false;
          for (var i = 0; i < abilityinfos.length; i++) {
            if ((abilityinfos[i].processName == processNameA)) {
              console.debug("ACTS_Process_MultiInstance_0100 PA abilityinfos[" + i + "].ability.abilityName:"
              + JSON.stringify(abilityinfos[i].ability.abilityName));
              if (abilityinfos[i].ability.abilityName == 'com.example.multiinstancehapaa.MainAbility') {
                abilityhapaaExist = true;
                pidaa = abilityinfos[i].pid
              }
              if (abilityinfos[i].ability.abilityName == 'com.example.multiinstancehapab.MainAbility') {
                abilityhapabExist = true;
                pidab = abilityinfos[i].pid
              }
            }
          }
          console.debug("ACTS_Process_MultiInstance_0100====>UnSubscribeCallback abilityhapaaExist:====>"
          + abilityhapaaExist);
          console.debug("ACTS_Process_MultiInstance_0100====>UnSubscribeCallback abilityhapabExist:====>"
          + abilityhapabExist);
          console.debug("ACTS_Process_MultiInstance_0100====>UnSubscribeCallback pidaa:====>"
          + pidaa);
          console.debug("ACTS_Process_MultiInstance_0100====>UnSubscribeCallback pidab:====>"
          + pidab);
          expect(abilityhapaaExist).assertEqual(true);
          expect(abilityhapabExist).assertEqual(true);
          expect(pidaa).assertEqual(pidab);

          console.debug("ACTS_Process_MultiInstance_0100====>UnSubscribe CallBack====>");
          done();
        } catch (err) {
          console.debug("ACTS_Process_MultiInstance_0100====>UnSubscribeCallback err:====>"
          + JSON.stringify(err));
        }
      }
      abilityContext.startAbility({
        bundleName: "com.example.multiinstancehapa",
        abilityName: "com.example.multiinstancehapaa.MainAbility",
      }, (err, data) => {
        console.log('ACTS_Process_MultiInstance_0100 - startAbilityhapaa: '
        + JSON.stringify(err) + ", " + JSON.stringify(data))
      })
      abilityContext.startAbility({
        bundleName: "com.example.multiinstancehapa",
        abilityName: "com.example.multiinstancehapab.MainAbility",
      }, (err, data) => {
        console.log('ACTS_Process_MultiInstance_0100 - startAbilityhapab: '
        + JSON.stringify(err) + ", " + JSON.stringify(data))
      })
    })

    /**
     * @tc.number: ACTS_Process_MultiInstance_0200
     * @tc.name: Check that two HAP packages in one App, run in different processes.
     * @tc.desc: Check that two HAP packages in one App, with different process names, run in different processes.
     */
    it('ACTS_Process_MultiInstance_0200', 0, async function (done) {
      console.log("ACTS_Process_MultiInstance_0200 --- start")
      var Subscriber;
      var abilityinfos;
      var flagACToTest = false;
      var flagADToTest = false;

      function SubscribeCallBack(err, data) {
        try {
          console.debug("ACTS_Process_MultiInstance_0200====>Subscribe CallBack data:====>"
          + JSON.stringify(data));
          console.debug("ACTS_Process_MultiInstance_0200====>Subscribe CallBack data.event:====>"
          + JSON.stringify(data.event));
          switch (data.event) {
            case 'HapAC_To_Test_CommonEvent':
              flagACToTest = true;
              break;
            case 'HapAD_To_Test_CommonEvent':
              flagADToTest = true;
              break;
          }
          console.debug("ACTS_Process_MultiInstance_0200====>SubscribeCallBack flagACToTest:====>"
          + flagACToTest)
          console.debug("ACTS_Process_MultiInstance_0200====>SubscribeCallBack flagADToTest:====>"
          + flagADToTest)
          setTimeout(function () {
            if (flagACToTest == true && flagADToTest == true) {
              commonEvent.unsubscribe(Subscriber, UnSubscribeCallback);
            }
          }, 1000);
        } catch (err) {
          console.debug("ACTS_Process_MultiInstance_0200====>SubscribeCallBack err:====>" + err)
        }
      }

      commonEvent.createSubscriber(subscriberInfo).then(async (data) => {
        console.debug("ACTS_Process_MultiInstance_0200====>Create Subscriber====>");
        Subscriber = data;
        await commonEvent.subscribe(Subscriber, SubscribeCallBack);
      })

      async function UnSubscribeCallback() {
        try {
          console.debug("ACTS_Process_MultiInstance_0200====>UnSubscribeCallback in====>")

          abilityinfos = await abilityManager.getAbilityRunningInfos();
          console.debug("ACTS_Process_MultiInstance_0200====>abilityinfos:====>"
          + JSON.stringify(abilityinfos));
          var pidac;
          var pidad;
          var abilityhapacExist = false;
          var abilityhapadExist = false;
          for (var i = 0; i < abilityinfos.length; i++) {
            if ((abilityinfos[i].processName == processNameB)) {
              console.debug("ACTS_Process_MultiInstance_0200 PB abilityinfos[" + i + "].ability.abilityName:"
              + JSON.stringify(abilityinfos[i].ability.abilityName));
              if (abilityinfos[i].ability.abilityName == 'com.example.multiinstancehapac.MainAbility') {
                abilityhapacExist = true;
                pidac = abilityinfos[i].pid
              }
              if (abilityinfos[i].ability.abilityName == 'com.example.multiinstancehapad.MainAbility') {
                abilityhapadExist = true;
                pidad = abilityinfos[i].pid
              }
            }
          }
          console.debug("ACTS_Process_MultiInstance_0200====>UnSubscribeCallback abilityhapacExist:====>"
          + abilityhapacExist);
          console.debug("ACTS_Process_MultiInstance_0200====>UnSubscribeCallback abilityhapadExist:====>"
          + abilityhapadExist);
          console.debug("ACTS_Process_MultiInstance_0200====>UnSubscribeCallback pidac:====>"
          + pidac);
          console.debug("ACTS_Process_MultiInstance_0200====>UnSubscribeCallback pidad:====>"
          + pidad);
          expect(abilityhapacExist).assertEqual(true);
          expect(abilityhapadExist).assertEqual(true);
          expect(pidac).assertEqual(pidad);

          console.debug("ACTS_Process_MultiInstance_0200====>UnSubscribe CallBack====>");
          done();
        } catch (err) {
          console.debug("ACTS_Process_MultiInstance_0200====>UnSubscribeCallback err:====>"
          + JSON.stringify(err));
        }
      }
      abilityContext.startAbility({
        bundleName: "com.example.multiinstancehapa",
        abilityName: "com.example.multiinstancehapac.MainAbility",
      }, (err, data) => {
        console.log('ACTS_Process_MultiInstance_0200 - startAbilityhapac: '
        + JSON.stringify(err) + ", " + JSON.stringify(data))
      })
      abilityContext.startAbility({
        bundleName: "com.example.multiinstancehapa",
        abilityName: "com.example.multiinstancehapad.MainAbility",
      }, (err, data) => {
        console.log('ACTS_Process_MultiInstance_0200 - startAbilityhapad: '
        + JSON.stringify(err) + ", " + JSON.stringify(data))
      })
    })

    /**
     * @tc.number: ACTS_Process_MultiInstance_0300
     * @tc.name: Check that three HAP packages in one App, run in two processes.
     * @tc.desc: Check that three HAP packages in one App, two HAP packets have the same process name,
     * and the other hap packet has a different process name than the other two, run in two processes.
     */
    it('ACTS_Process_MultiInstance_0300', 0, async function (done) {
      console.log("ACTS_Process_MultiInstance_0300 --- start")
      var Subscriber;
      var abilityinfos;
      var flagADToTest = false;
      var flagAEToTest = false;

      function SubscribeCallBack(err, data) {
        try {
          console.debug("ACTS_Process_MultiInstance_0300====>Subscribe CallBack data:====>"
          + JSON.stringify(data));
          console.debug("ACTS_Process_MultiInstance_0300====>Subscribe CallBack data.event:====>"
          + JSON.stringify(data.event));
          switch (data.event) {
            case 'HapAD_To_Test_CommonEvent':
              flagADToTest = true;
              break;
            case 'HapAE_To_Test_CommonEvent':
              flagAEToTest = true;
              break;
          }
          console.debug("ACTS_Process_MultiInstance_0300====>SubscribeCallBack flagADToTest:====>"
          + flagADToTest)
          console.debug("ACTS_Process_MultiInstance_0300====>SubscribeCallBack flagAEToTest:====>"
          + flagAEToTest)
          setTimeout(function () {
            if (flagADToTest == true && flagAEToTest == true) {
              commonEvent.unsubscribe(Subscriber, UnSubscribeCallback);
            }
          }, 1000);
        } catch (err) {
          console.debug("ACTS_Process_MultiInstance_0300====>SubscribeCallBack err:====>" + err)
        }
      }

      commonEvent.createSubscriber(subscriberInfo).then(async (data) => {
        console.debug("ACTS_Process_MultiInstance_0300====>Create Subscriber====>");
        Subscriber = data;
        await commonEvent.subscribe(Subscriber, SubscribeCallBack);
      })

      async function UnSubscribeCallback() {
        try {
          console.debug("ACTS_Process_MultiInstance_0300====>UnSubscribeCallback in====>")

          abilityinfos = await abilityManager.getAbilityRunningInfos();
          console.debug("ACTS_Process_MultiInstance_0300====>abilityinfos:====>"
          + JSON.stringify(abilityinfos));
          var pidad;
          var pidae;
          var abilityhapadExist = false;
          var abilityhapaeExist = false;
          for (var i = 0; i < abilityinfos.length; i++) {
            if ((abilityinfos[i].processName == processNameB)) {
              console.debug("ACTS_Process_MultiInstance_0300 PB abilityinfos[" + i + "].ability.abilityName:"
              + JSON.stringify(abilityinfos[i].ability.abilityName));
              if (abilityinfos[i].ability.abilityName == 'com.example.multiinstancehapad.MainAbility') {
                abilityhapadExist = true;
                pidad = abilityinfos[i].pid
              }
            }
            if ((abilityinfos[i].processName == processNameC)) {
              console.debug("ACTS_Process_MultiInstance_0300 PC abilityinfos[" + i + "].ability.abilityName:"
              + JSON.stringify(abilityinfos[i].ability.abilityName));
              if (abilityinfos[i].ability.abilityName == 'com.example.multiinstancehapae.MainAbility') {
                abilityhapaeExist = true;
                pidae = abilityinfos[i].pid
              }
            }
          }
          console.debug("ACTS_Process_MultiInstance_0300====>UnSubscribeCallback abilityhapadExist:====>"
          + abilityhapadExist);
          console.debug("ACTS_Process_MultiInstance_0300====>UnSubscribeCallback abilityhapaeExist:====>"
          + abilityhapaeExist);
          console.debug("ACTS_Process_MultiInstance_0300====>UnSubscribeCallback pidad:====>"
          + pidad);
          console.debug("ACTS_Process_MultiInstance_0300====>UnSubscribeCallback pidae:====>"
          + pidae);
          expect(abilityhapadExist).assertEqual(true);
          expect(abilityhapaeExist).assertEqual(true);
          expect(pidad != pidae).assertEqual(true);

          console.debug("ACTS_Process_MultiInstance_0300====>UnSubscribe CallBack====>");
          done();
        } catch (err) {
          console.debug("ACTS_Process_MultiInstance_0300====>UnSubscribeCallback err:====>"
          + JSON.stringify(err));
        }
      }
      abilityContext.startAbility({
        bundleName: "com.example.multiinstancehapa",
        abilityName: "com.example.multiinstancehapad.MainAbility",
      }, (err, data) => {
        console.log('ACTS_Process_MultiInstance_0300 - startAbilityhapad: '
        + JSON.stringify(err) + ", " + JSON.stringify(data))
      })
      abilityContext.startAbility({
        bundleName: "com.example.multiinstancehapa",
        abilityName: "com.example.multiinstancehapae.MainAbility",
      }, (err, data) => {
        console.log('ACTS_Process_MultiInstance_0300 - startAbilityhapae: '
        + JSON.stringify(err) + ", " + JSON.stringify(data))
      })
    })

    /**
     * @tc.number: ACTS_Process_MultiInstance_0400
     * @tc.name: Check that three HAP packages in one App, run in two processes.
     * @tc.desc: Check that three HAP packages in one App, two HAP packets have the same process name,
     * and the other hap packet has a different process name than the other two, run in two processes.
     */
    it('ACTS_Process_MultiInstance_0400', 0, async function (done) {
      console.log("ACTS_Process_MultiInstance_0400 --- start")
      var Subscriber;
      var abilityinfos;
      var flagAAToTest = false;
      var flagAFToTest = false;

      function SubscribeCallBack(err, data) {
        try {
          console.debug("ACTS_Process_MultiInstance_0400====>Subscribe CallBack data:====>"
          + JSON.stringify(data));
          console.debug("ACTS_Process_MultiInstance_0400====>Subscribe CallBack data.event:====>"
          + JSON.stringify(data.event));
          switch (data.event) {
            case 'HapAA_To_Test_CommonEvent':
              flagAAToTest = true;
              break;
            case 'HapAF_To_Test_CommonEvent':
              flagAFToTest = true;
              break;
          }
          console.debug("ACTS_Process_MultiInstance_0400====>SubscribeCallBack flagAAToTest:====>"
          + flagAAToTest)
          console.debug("ACTS_Process_MultiInstance_0400====>SubscribeCallBack flagAFToTest:====>"
          + flagAFToTest)
          setTimeout(function () {
            if (flagAAToTest == true && flagAFToTest == true) {
              commonEvent.unsubscribe(Subscriber, UnSubscribeCallback);
            }
          }, 1000);
        } catch (err) {
          console.debug("ACTS_Process_MultiInstance_0400====>SubscribeCallBack err:====>" + err)
        }
      }

      commonEvent.createSubscriber(subscriberInfo).then(async (data) => {
        console.debug("ACTS_Process_MultiInstance_0400====>Create Subscriber====>");
        Subscriber = data;
        await commonEvent.subscribe(Subscriber, SubscribeCallBack);
      })

      async function UnSubscribeCallback() {
        try {
          console.debug("ACTS_Process_MultiInstance_0400====>UnSubscribeCallback in====>")

          abilityinfos = await abilityManager.getAbilityRunningInfos();
          console.debug("ACTS_Process_MultiInstance_0400====>abilityinfos:====>"
          + JSON.stringify(abilityinfos));
          var pidaa;
          var pidaf;
          var abilityhapaaExist = false;
          var abilityhapafExist = false;
          for (var i = 0; i < abilityinfos.length; i++) {
            if ((abilityinfos[i].processName == processNameA)) {
              console.debug("ACTS_Process_MultiInstance_0400 PB abilityinfos[" + i + "].ability.abilityName:"
              + JSON.stringify(abilityinfos[i].ability.abilityName));
              if (abilityinfos[i].ability.abilityName == 'com.example.multiinstancehapaa.MainAbility') {
                abilityhapaaExist = true;
                pidaa = abilityinfos[i].pid
              }
              if (abilityinfos[i].ability.abilityName == 'com.example.multiinstancehapaf.MainAbility') {
                abilityhapafExist = true;
                pidaf = abilityinfos[i].pid
              }
            }
          }
          console.debug("ACTS_Process_MultiInstance_0400====>UnSubscribeCallback abilityhapaaExist:====>"
          + abilityhapaaExist);
          console.debug("ACTS_Process_MultiInstance_0400====>UnSubscribeCallback abilityhapafExist:====>"
          + abilityhapafExist);
          console.debug("ACTS_Process_MultiInstance_0400====>UnSubscribeCallback pidaa:====>"
          + pidaa);
          console.debug("ACTS_Process_MultiInstance_0400====>UnSubscribeCallback pidaf:====>"
          + pidaf);
          expect(abilityhapaaExist).assertEqual(true);
          expect(abilityhapafExist).assertEqual(true);
          expect(pidaa).assertEqual(pidaf);

          console.debug("ACTS_Process_MultiInstance_0400====>UnSubscribe CallBack====>");
          done();
        } catch (err) {
          console.debug("ACTS_Process_MultiInstance_0400====>UnSubscribeCallback err:====>"
          + JSON.stringify(err));
        }
      }
      abilityContext.startAbility({
        bundleName: "com.example.multiinstancehapa",
        abilityName: "com.example.multiinstancehapaa.MainAbility",
      }, (err, data) => {
        console.log('ACTS_Process_MultiInstance_0400 - startAbilityhapaa: '
        + JSON.stringify(err) + ", " + JSON.stringify(data))
      })
      abilityContext.startAbility({
        bundleName: "com.example.multiinstancehapa",
        abilityName: "com.example.multiinstancehapaf.MainAbility",
      }, (err, data) => {
        console.log('ACTS_Process_MultiInstance_0400 - startAbilityhapaf: '
        + JSON.stringify(err) + ", " + JSON.stringify(data))
      })
    })

    /**
     * @tc.number: ACTS_Process_MultiInstance_0500
     * @tc.name: Check that three HAP packages in one App, run in two processes.
     * @tc.desc: Check that three HAP packages in one App, two HAP packets have the same process name,
     * and the other hap packet has a different process name than the other two, run in two processes.
     */
    it('ACTS_Process_MultiInstance_0500', 0, async function (done) {
      console.log("ACTS_Process_MultiInstance_0500 --- start")
      var Subscriber;
      var abilityinfos;
      var flagABToTest = false;
      var flagACToTest = false;

      function SubscribeCallBack(err, data) {
        try {
          console.debug("ACTS_Process_MultiInstance_0500====>Subscribe CallBack data:====>"
          + JSON.stringify(data));
          console.debug("ACTS_Process_MultiInstance_0500====>Subscribe CallBack data.event:====>"
          + JSON.stringify(data.event));
          switch (data.event) {
            case 'HapAB_To_Test_CommonEvent':
              flagABToTest = true;
              break;
            case 'HapAC_To_Test_CommonEvent':
              flagACToTest = true;
              break;
          }
          console.debug("ACTS_Process_MultiInstance_0500====>SubscribeCallBack flagABToTest:====>"
          + flagABToTest)
          console.debug("ACTS_Process_MultiInstance_0500====>SubscribeCallBack flagACToTest:====>"
          + flagACToTest)
          setTimeout(function () {
            if (flagABToTest == true && flagACToTest == true) {
              commonEvent.unsubscribe(Subscriber, UnSubscribeCallback);
            }
          }, 1000);
        } catch (err) {
          console.debug("ACTS_Process_MultiInstance_0500====>SubscribeCallBack err:====>" + err)
        }
      }

      commonEvent.createSubscriber(subscriberInfo).then(async (data) => {
        console.debug("ACTS_Process_MultiInstance_0500====>Create Subscriber====>");
        Subscriber = data;
        await commonEvent.subscribe(Subscriber, SubscribeCallBack);
      })

      async function UnSubscribeCallback() {
        try {
          console.debug("ACTS_Process_MultiInstance_0500====>UnSubscribeCallback in====>")

          abilityinfos = await abilityManager.getAbilityRunningInfos();
          console.debug("ACTS_Process_MultiInstance_0500====>abilityinfos:====>"
          + JSON.stringify(abilityinfos));
          var pidab;
          var pidac;
          var abilityhapabExist = false;
          var abilityhapacExist = false;
          for (var i = 0; i < abilityinfos.length; i++) {
            if ((abilityinfos[i].processName == processNameA)) {
              console.debug("ACTS_Process_MultiInstance_0500 PA abilityinfos[" + i + "].ability.abilityName:"
              + JSON.stringify(abilityinfos[i].ability.abilityName));
              if (abilityinfos[i].ability.abilityName == 'com.example.multiinstancehapab.MainAbility') {
                abilityhapabExist = true;
                pidab = abilityinfos[i].pid
              }
            }
          }
          for (var i = 0; i < abilityinfos.length; i++) {
            if ((abilityinfos[i].processName == processNameB)) {
              console.debug("ACTS_Process_MultiInstance_0500 PB abilityinfos[" + i + "].ability.abilityName:"
              + JSON.stringify(abilityinfos[i].ability.abilityName));
              if (abilityinfos[i].ability.abilityName == 'com.example.multiinstancehapac.MainAbility') {
                abilityhapacExist = true;
                pidac = abilityinfos[i].pid
              }
            }
          }
          console.debug("ACTS_Process_MultiInstance_0500====>UnSubscribeCallback abilityhapabExist:====>"
          + abilityhapabExist);
          console.debug("ACTS_Process_MultiInstance_0500====>UnSubscribeCallback abilityhapacExist:====>"
          + abilityhapacExist);
          console.debug("ACTS_Process_MultiInstance_0500====>UnSubscribeCallback pidab:====>"
          + pidab);
          console.debug("ACTS_Process_MultiInstance_0500====>UnSubscribeCallback pidac:====>"
          + pidac);
          expect(abilityhapabExist).assertEqual(true);
          expect(abilityhapacExist).assertEqual(true);
          expect(pidab != pidac).assertEqual(true);

          console.debug("ACTS_Process_MultiInstance_0500====>UnSubscribe CallBack====>");
          done();
        } catch (err) {
          console.debug("ACTS_Process_MultiInstance_0500====>UnSubscribeCallback err:====>"
          + JSON.stringify(err));
        }
      }
      abilityContext.startAbility({
        bundleName: "com.example.multiinstancehapa",
        abilityName: "com.example.multiinstancehapab.MainAbility",
      }, (err, data) => {
        console.log('ACTS_Process_MultiInstance_0500 - startAbilityhapab: '
        + JSON.stringify(err) + ", " + JSON.stringify(data))
      })
      abilityContext.startAbility({
        bundleName: "com.example.multiinstancehapa",
        abilityName: "com.example.multiinstancehapac.MainAbility",
      }, (err, data) => {
        console.log('ACTS_Process_MultiInstance_0500 - startAbilityhapac: '
        + JSON.stringify(err) + ", " + JSON.stringify(data))
      })
    })

    /**
     * @tc.number: ACTS_Process_MultiInstance_0600
     * @tc.name: Check that three HAP packages in one App, run in two processes.
     * @tc.desc: Check that three HAP packages in one App, two HAP packets have the same process name,
     * and the other hap packet has a different process name than the other two, run in two processes.
     */
    it('ACTS_Process_MultiInstance_0600', 0, async function (done) {
      console.log("ACTS_Process_MultiInstance_0600 --- start")
      var Subscriber;
      var abilityinfos;
      var flagBAToTest = false;
      var flagBBToTest = false;

      function SubscribeCallBack(err, data) {
        try {
          console.debug("ACTS_Process_MultiInstance_0600====>Subscribe CallBack data:====>"
          + JSON.stringify(data));
          console.debug("ACTS_Process_MultiInstance_0600====>Subscribe CallBack data.event:====>"
          + JSON.stringify(data.event));
          switch (data.event) {
            case 'HapBA_To_Test_CommonEvent':
              flagBAToTest = true;
              break;
            case 'HapBB_To_Test_CommonEvent':
              flagBBToTest = true;
              break;
          }
          console.debug("ACTS_Process_MultiInstance_0600====>SubscribeCallBack flagBAToTest:====>"
          + flagBAToTest)
          console.debug("ACTS_Process_MultiInstance_0600====>SubscribeCallBack flagBBToTest:====>"
          + flagBBToTest)
          setTimeout(function () {
            if (flagBAToTest == true && flagBBToTest == true) {
              commonEvent.unsubscribe(Subscriber, UnSubscribeCallback);
            }
          }, 1000);
        } catch (err) {
          console.debug("ACTS_Process_MultiInstance_0600====>SubscribeCallBack err:====>" + err)
        }
      }

      commonEvent.createSubscriber(subscriberInfo).then(async (data) => {
        console.debug("ACTS_Process_MultiInstance_0600====>Create Subscriber====>");
        Subscriber = data;
        await commonEvent.subscribe(Subscriber, SubscribeCallBack);
      })

      async function UnSubscribeCallback() {
        try {
          console.debug("ACTS_Process_MultiInstance_0600====>UnSubscribeCallback in====>")

          abilityinfos = await abilityManager.getAbilityRunningInfos();
          console.debug("ACTS_Process_MultiInstance_0600====>abilityinfos:====>"
          + JSON.stringify(abilityinfos));
          var pidba;
          var pidbb;
          var abilityhapbaExist = false;
          var abilityhapbbExist = false;
          for (var i = 0; i < abilityinfos.length; i++) {
            if ((abilityinfos[i].processName == processNameD)) {
              console.debug("ACTS_Process_MultiInstance_0600 PD abilityinfos[" + i + "].ability.abilityName:"
              + JSON.stringify(abilityinfos[i].ability.abilityName));
              if (abilityinfos[i].ability.abilityName == 'com.example.multiinstancehapba.MainAbility') {
                abilityhapbaExist = true;
                pidba = abilityinfos[i].pid
              }
            }
            if ((abilityinfos[i].processName == processNameE)) {
              console.debug("ACTS_Process_MultiInstance_0600 PE abilityinfos[" + i + "].ability.abilityName:"
              + JSON.stringify(abilityinfos[i].ability.abilityName));
              if (abilityinfos[i].ability.abilityName == 'com.example.multiinstancehapbb.MainAbility') {
                abilityhapbbExist = true;
                pidbb = abilityinfos[i].pid
              }
            }
          }
          console.debug("ACTS_Process_MultiInstance_0600====>UnSubscribeCallback abilityhapbaExist:====>"
          + abilityhapbaExist);
          console.debug("ACTS_Process_MultiInstance_0600====>UnSubscribeCallback abilityhapbbExist:====>"
          + abilityhapbbExist);
          console.debug("ACTS_Process_MultiInstance_0600====>UnSubscribeCallback pidba:====>"
          + pidba);
          console.debug("ACTS_Process_MultiInstance_0600====>UnSubscribeCallback pidbb:====>"
          + pidbb);
          expect(abilityhapbaExist).assertEqual(true);
          expect(abilityhapbbExist).assertEqual(true);
          expect(pidba != pidbb).assertEqual(true);

          console.debug("ACTS_Process_MultiInstance_0600====>UnSubscribe CallBack====>");
          done();
        } catch (err) {
          console.debug("ACTS_Process_MultiInstance_0600====>UnSubscribeCallback err:====>"
          + JSON.stringify(err));
        }
      }
      abilityContext.startAbility({
        bundleName: "com.example.multiinstancehapb",
        abilityName: "com.example.multiinstancehapba.MainAbility",
      }, (err, data) => {
        console.log('ACTS_Process_MultiInstance_0600 - startAbilityhapba: '
        + JSON.stringify(err) + ", " + JSON.stringify(data))
      })
      abilityContext.startAbility({
        bundleName: "com.example.multiinstancehapb",
        abilityName: "com.example.multiinstancehapbb.MainAbility",
      }, (err, data) => {
        console.log('ACTS_Process_MultiInstance_0600 - startAbilityhapbb: '
        + JSON.stringify(err) + ", " + JSON.stringify(data))
      })
    })

    /**
     * @tc.number: ACTS_Process_MultiInstance_0700
     * @tc.name: Check that three HAP packages in one App, run in two processes.
     * @tc.desc: Check that three HAP packages in one App, two HAP packets have the same process name,
     * and the other hap packet has a different process name than the other two, run in two processes.
     */
    it('ACTS_Process_MultiInstance_0700', 0, async function (done) {
      console.log("ACTS_Process_MultiInstance_0700 --- start")
      var Subscriber;
      var abilityinfos;
      var flagBCToTest = false;
      var flagBDToTest = false;

      function SubscribeCallBack(err, data) {
        try {
          console.debug("ACTS_Process_MultiInstance_0700====>Subscribe CallBack data:====>"
          + JSON.stringify(data));
          console.debug("ACTS_Process_MultiInstance_0700====>Subscribe CallBack data.event:====>"
          + JSON.stringify(data.event));
          switch (data.event) {
            case 'HapBC_To_Test_CommonEvent':
              flagBCToTest = true;
              break;
            case 'HapBD_To_Test_CommonEvent':
              flagBDToTest = true;
              break;
          }
          console.debug("ACTS_Process_MultiInstance_0700====>SubscribeCallBack flagBCToTest:====>"
          + flagBCToTest)
          console.debug("ACTS_Process_MultiInstance_0700====>SubscribeCallBack flagBDToTest:====>"
          + flagBDToTest)
          setTimeout(function () {
            if (flagBCToTest == true && flagBDToTest == true) {
              commonEvent.unsubscribe(Subscriber, UnSubscribeCallback);
            }
          }, 1000);
        } catch (err) {
          console.debug("ACTS_Process_MultiInstance_0700====>SubscribeCallBack err:====>" + err)
        }
      }

      commonEvent.createSubscriber(subscriberInfo).then(async (data) => {
        console.debug("ACTS_Process_MultiInstance_0700====>Create Subscriber====>");
        Subscriber = data;
        await commonEvent.subscribe(Subscriber, SubscribeCallBack);
      })

      async function UnSubscribeCallback() {
        try {
          console.debug("ACTS_Process_MultiInstance_0700====>UnSubscribeCallback in====>")

          abilityinfos = await abilityManager.getAbilityRunningInfos();
          console.debug("ACTS_Process_MultiInstance_0700====>abilityinfos:====>"
          + JSON.stringify(abilityinfos));
          var pidbc;
          var pidbd;
          var abilityhapbcExist = false;
          var abilityhapbdExist = false;
          for (var i = 0; i < abilityinfos.length; i++) {
            if ((abilityinfos[i].processName == processNameC)) {
              console.debug("ACTS_Process_MultiInstance_0700 PC abilityinfos[" + i + "].ability.abilityName:"
              + JSON.stringify(abilityinfos[i].ability.abilityName));
              if (abilityinfos[i].ability.abilityName == 'com.example.multiinstancehapbc.MainAbility') {
                abilityhapbcExist = true;
                pidbc = abilityinfos[i].pid
              }
              if (abilityinfos[i].ability.abilityName == 'com.example.multiinstancehapbd.MainAbility') {
                abilityhapbdExist = true;
                pidbd = abilityinfos[i].pid
              }
            }
          }
          console.debug("ACTS_Process_MultiInstance_0700====>UnSubscribeCallback abilityhapbcExist:====>"
          + abilityhapbcExist);
          console.debug("ACTS_Process_MultiInstance_0700====>UnSubscribeCallback abilityhapbdExist:====>"
          + abilityhapbdExist);
          console.debug("ACTS_Process_MultiInstance_0700====>UnSubscribeCallback pidbc:====>"
          + pidbc);
          console.debug("ACTS_Process_MultiInstance_0700====>UnSubscribeCallback pidbd:====>"
          + pidbd);
          expect(abilityhapbcExist).assertEqual(true);
          expect(abilityhapbdExist).assertEqual(true);
          expect(pidbc).assertEqual(pidbd);

          console.debug("ACTS_Process_MultiInstance_0700====>UnSubscribe CallBack====>");
          done();
        } catch (err) {
          console.debug("ACTS_Process_MultiInstance_0700====>UnSubscribeCallback err:====>"
          + JSON.stringify(err));
        }
      }
      abilityContext.startAbility({
        bundleName: "com.example.multiinstancehapb",
        abilityName: "com.example.multiinstancehapbc.MainAbility",
      }, (err, data) => {
        console.log('ACTS_Process_MultiInstance_0700 - startAbilityhapbc: '
        + JSON.stringify(err) + ", " + JSON.stringify(data))
      })
      abilityContext.startAbility({
        bundleName: "com.example.multiinstancehapb",
        abilityName: "com.example.multiinstancehapbd.MainAbility",
      }, (err, data) => {
        console.log('ACTS_Process_MultiInstance_0700 - startAbilityhapbd: '
        + JSON.stringify(err) + ", " + JSON.stringify(data))
      })
    })

    /**
     * @tc.number: ACTS_Process_MultiInstance_0800
     * @tc.name: Check that three HAP packages in one App, run in two processes.
     * @tc.desc: Check that three HAP packages in one App, two HAP packets have the same process name,
     * and the other hap packet has a different process name than the other two, run in two processes.
     */
    it('ACTS_Process_MultiInstance_0800', 0, async function (done) {
      console.log("ACTS_Process_MultiInstance_0800 --- start")
      var Subscriber;
      var abilityinfos;
      var flagBDToTest = false;
      var flagBEToTest = false;

      function SubscribeCallBack(err, data) {
        try {
          console.debug("ACTS_Process_MultiInstance_0800====>Subscribe CallBack data:====>"
          + JSON.stringify(data));
          console.debug("ACTS_Process_MultiInstance_0800====>Subscribe CallBack data.event:====>"
          + JSON.stringify(data.event));
          switch (data.event) {
            case 'HapBD_To_Test_CommonEvent':
              flagBDToTest = true;
              break;
            case 'HapBE_To_Test_CommonEvent':
              flagBEToTest = true;
              break;
          }
          console.debug("ACTS_Process_MultiInstance_0800====>SubscribeCallBack flagBDToTest:====>"
          + flagBDToTest)
          console.debug("ACTS_Process_MultiInstance_0800====>SubscribeCallBack flagBEToTest:====>"
          + flagBEToTest)
          setTimeout(function () {
            if (flagBDToTest == true && flagBEToTest == true) {
              commonEvent.unsubscribe(Subscriber, UnSubscribeCallback);
            }
          }, 1000);
        } catch (err) {
          console.debug("ACTS_Process_MultiInstance_0800====>SubscribeCallBack err:====>" + err)
        }
      }

      commonEvent.createSubscriber(subscriberInfo).then(async (data) => {
        console.debug("ACTS_Process_MultiInstance_0800====>Create Subscriber====>");
        Subscriber = data;
        await commonEvent.subscribe(Subscriber, SubscribeCallBack);
      })

      async function UnSubscribeCallback() {
        try {
          console.debug("ACTS_Process_MultiInstance_0800====>UnSubscribeCallback in====>")

          abilityinfos = await abilityManager.getAbilityRunningInfos();
          console.debug("ACTS_Process_MultiInstance_0800====>abilityinfos:====>"
          + JSON.stringify(abilityinfos));
          var pidbd;
          var pidbe;
          var abilityhapbdExist = false;
          var abilityhapbeExist = false;
          for (var i = 0; i < abilityinfos.length; i++) {
            if ((abilityinfos[i].processName == processNameC)) {
              console.debug("ACTS_Process_MultiInstance_0800 PC abilityinfos[" + i + "].ability.abilityName:"
              + JSON.stringify(abilityinfos[i].ability.abilityName));
              if (abilityinfos[i].ability.abilityName == 'com.example.multiinstancehapbd.MainAbility') {
                abilityhapbdExist = true;
                pidbd = abilityinfos[i].pid
              }
            }
            if ((abilityinfos[i].processName == processNameA)) {
              console.debug("ACTS_Process_MultiInstance_0800 PA abilityinfos[" + i + "].ability.abilityName:"
              + JSON.stringify(abilityinfos[i].ability.abilityName));
              if (abilityinfos[i].ability.abilityName == 'com.example.multiinstancehapbe.MainAbility') {
                abilityhapbeExist = true;
                pidbe = abilityinfos[i].pid
              }
            }
          }
          console.debug("ACTS_Process_MultiInstance_0800====>UnSubscribeCallback abilityhapbdExist:====>"
          + abilityhapbdExist);
          console.debug("ACTS_Process_MultiInstance_0800====>UnSubscribeCallback abilityhapbeExist:====>"
          + abilityhapbeExist);
          console.debug("ACTS_Process_MultiInstance_0800====>UnSubscribeCallback pidbd:====>"
          + pidbd);
          console.debug("ACTS_Process_MultiInstance_0800====>UnSubscribeCallback pidbe:====>"
          + pidbe);
          expect(abilityhapbdExist).assertEqual(true);
          expect(abilityhapbeExist).assertEqual(true);
          expect(pidbd != pidbe).assertEqual(true);

          console.debug("ACTS_Process_MultiInstance_0800====>UnSubscribe CallBack====>");
          done();
        } catch (err) {
          console.debug("ACTS_Process_MultiInstance_0800====>UnSubscribeCallback err:====>"
          + JSON.stringify(err));
        }
      }
      abilityContext.startAbility({
        bundleName: "com.example.multiinstancehapb",
        abilityName: "com.example.multiinstancehapbd.MainAbility",
      }, (err, data) => {
        console.log('ACTS_Process_MultiInstance_0800 - startAbilityhapbd: '
        + JSON.stringify(err) + ", " + JSON.stringify(data))
      })
      abilityContext.startAbility({
        bundleName: "com.example.multiinstancehapb",
        abilityName: "com.example.multiinstancehapbe.MainAbility",
      }, (err, data) => {
        console.log('ACTS_Process_MultiInstance_0800 - startAbilityhapbe: '
        + JSON.stringify(err) + ", " + JSON.stringify(data))
      })
    })

    /**
     * @tc.number: ACTS_Process_MultiInstance_0900
     * @tc.name: Check that three HAP packages in one App, run in two processes.
     * @tc.desc: Check that three HAP packages in one App, two HAP packets have the same process name,
     * and the other hap packet has a different process name than the other two, run in two processes.
     */
    it('ACTS_Process_MultiInstance_0900', 0, async function (done) {
      console.log("ACTS_Process_MultiInstance_0900 --- start")
      var Subscriber;
      var abilityinfos;
      var flagBAToTest = false;
      var flagBFToTest = false;

      function SubscribeCallBack(err, data) {
        try {
          console.debug("ACTS_Process_MultiInstance_0900====>Subscribe CallBack data:====>"
          + JSON.stringify(data));
          console.debug("ACTS_Process_MultiInstance_0900====>Subscribe CallBack data.event:====>"
          + JSON.stringify(data.event));
          switch (data.event) {
            case 'HapBA_To_Test_CommonEvent':
              flagBAToTest = true;
              break;
            case 'HapBF_To_Test_CommonEvent':
              flagBFToTest = true;
              break;
          }
          console.debug("ACTS_Process_MultiInstance_0900====>SubscribeCallBack flagBAToTest:====>"
          + flagBAToTest)
          console.debug("ACTS_Process_MultiInstance_0900====>SubscribeCallBack flagBFToTest:====>"
          + flagBFToTest)
          setTimeout(function () {
            if (flagBAToTest == true && flagBFToTest == true) {
              commonEvent.unsubscribe(Subscriber, UnSubscribeCallback);
            }
          }, 1000);
        } catch (err) {
          console.debug("ACTS_Process_MultiInstance_0900====>SubscribeCallBack err:====>" + err)
        }
      }

      commonEvent.createSubscriber(subscriberInfo).then(async (data) => {
        console.debug("ACTS_Process_MultiInstance_0900====>Create Subscriber====>");
        Subscriber = data;
        await commonEvent.subscribe(Subscriber, SubscribeCallBack);
      })

      async function UnSubscribeCallback() {
        try {
          console.debug("ACTS_Process_MultiInstance_0900====>UnSubscribeCallback in====>")

          abilityinfos = await abilityManager.getAbilityRunningInfos();
          console.debug("ACTS_Process_MultiInstance_0900====>abilityinfos:====>"
          + JSON.stringify(abilityinfos));
          var pidba;
          var pidbf;
          var abilityhapbaExist = false;
          var abilityhapbfExist = false;
          for (var i = 0; i < abilityinfos.length; i++) {
            if ((abilityinfos[i].processName == processNameD)) {
              console.debug("ACTS_Process_MultiInstance_0900 PD abilityinfos[" + i + "].ability.abilityName:"
              + JSON.stringify(abilityinfos[i].ability.abilityName));
              if (abilityinfos[i].ability.abilityName == 'com.example.multiinstancehapba.MainAbility') {
                abilityhapbaExist = true;
                pidba = abilityinfos[i].pid
              }
            }
            if ((abilityinfos[i].processName == processNameB)) {
              console.debug("ACTS_Process_MultiInstance_0900 PB abilityinfos[" + i + "].ability.abilityName:"
              + JSON.stringify(abilityinfos[i].ability.abilityName));
              if (abilityinfos[i].ability.abilityName == 'com.example.multiinstancehapbf.MainAbility') {
                abilityhapbfExist = true;
                pidbf = abilityinfos[i].pid
              }
            }
          }
          console.debug("ACTS_Process_MultiInstance_0900====>UnSubscribeCallback abilityhapbaExist:====>"
          + abilityhapbaExist);
          console.debug("ACTS_Process_MultiInstance_0900====>UnSubscribeCallback abilityhapbfExist:====>"
          + abilityhapbfExist);
          console.debug("ACTS_Process_MultiInstance_0900====>UnSubscribeCallback pidba:====>"
          + pidba);
          console.debug("ACTS_Process_MultiInstance_0900====>UnSubscribeCallback pidbf:====>"
          + pidbf);
          expect(abilityhapbaExist).assertEqual(true);
          expect(abilityhapbfExist).assertEqual(true);
          expect(pidba != pidbf).assertEqual(true);

          console.debug("ACTS_Process_MultiInstance_0900====>UnSubscribe CallBack====>");
          done();
        } catch (err) {
          console.debug("ACTS_Process_MultiInstance_0900====>UnSubscribeCallback err:====>"
          + JSON.stringify(err));
        }
      }
      abilityContext.startAbility({
        bundleName: "com.example.multiinstancehapb",
        abilityName: "com.example.multiinstancehapba.MainAbility",
      }, (err, data) => {
        console.log('ACTS_Process_MultiInstance_0900 - startAbilityhapba: '
        + JSON.stringify(err) + ", " + JSON.stringify(data))
      })
      abilityContext.startAbility({
        bundleName: "com.example.multiinstancehapb",
        abilityName: "com.example.multiinstancehapbf.MainAbility",
      }, (err, data) => {
        console.log('ACTS_Process_MultiInstance_0900 - startAbilityhapbf: '
        + JSON.stringify(err) + ", " + JSON.stringify(data))
      })
    })

    /**
     * @tc.number: ACTS_Process_MultiInstance_1000
     * @tc.name: Check that three HAP packages in one App, run in two processes.
     * @tc.desc: Check that three HAP packages in one App, two HAP packets have the same process name,
     * and the other hap packet has a different process name than the other two, run in two processes.
     */
    it('ACTS_Process_MultiInstance_1000', 0, async function (done) {
      console.log("ACTS_Process_MultiInstance_1000 --- start")
      var Subscriber;
      var abilityinfos;
      var flagAAToTest = false;
      var flagBEToTest = false;

      function SubscribeCallBack(err, data) {
        try {
          console.debug("ACTS_Process_MultiInstance_1000====>Subscribe CallBack data:====>"
          + JSON.stringify(data));
          console.debug("ACTS_Process_MultiInstance_1000====>Subscribe CallBack data.event:====>"
          + JSON.stringify(data.event));
          switch (data.event) {
            case 'HapAA_To_Test_CommonEvent':
              flagAAToTest = true;
              break;
            case 'HapBE_To_Test_CommonEvent':
              flagBEToTest = true;
              break;
          }
          console.debug("ACTS_Process_MultiInstance_1000====>SubscribeCallBack flagAAToTest:====>"
          + flagAAToTest)
          console.debug("ACTS_Process_MultiInstance_1000====>SubscribeCallBack flagBEToTest:====>"
          + flagBEToTest)
          setTimeout(function () {
            if (flagAAToTest == true && flagBEToTest == true) {
              commonEvent.unsubscribe(Subscriber, UnSubscribeCallback);
            }
          }, 1000);
        } catch (err) {
          console.debug("ACTS_Process_MultiInstance_1000====>SubscribeCallBack err:====>" + err)
        }
      }

      commonEvent.createSubscriber(subscriberInfo).then(async (data) => {
        console.debug("ACTS_Process_MultiInstance_1000====>Create Subscriber====>");
        Subscriber = data;
        await commonEvent.subscribe(Subscriber, SubscribeCallBack);
      })

      async function UnSubscribeCallback() {
        try {
          console.debug("ACTS_Process_MultiInstance_1000====>UnSubscribeCallback in====>")

          abilityinfos = await abilityManager.getAbilityRunningInfos();
          console.debug("ACTS_Process_MultiInstance_1000====>abilityinfos:====>"
          + JSON.stringify(abilityinfos));
          var pidaa;
          var pidbe;
          var abilityhapaaExist = false;
          var abilityhapbeExist = false;
          for (var i = 0; i < abilityinfos.length; i++) {
            if ((abilityinfos[i].processName == processNameA)) {
              console.debug("ACTS_Process_MultiInstance_1000 PA abilityinfos[" + i + "].ability.abilityName:"
              + JSON.stringify(abilityinfos[i].ability.abilityName));
              if (abilityinfos[i].ability.abilityName == 'com.example.multiinstancehapaa.MainAbility') {
                abilityhapaaExist = true;
                pidaa = abilityinfos[i].pid
              }
              if (abilityinfos[i].ability.abilityName == 'com.example.multiinstancehapbe.MainAbility') {
                abilityhapbeExist = true;
                pidbe = abilityinfos[i].pid
              }
            }
          }
          console.debug("ACTS_Process_MultiInstance_1000====>UnSubscribeCallback abilityhapaaExist:====>"
          + abilityhapaaExist);
          console.debug("ACTS_Process_MultiInstance_1000====>UnSubscribeCallback abilityhapbeExist:====>"
          + abilityhapbeExist);
          console.debug("ACTS_Process_MultiInstance_1000====>UnSubscribeCallback pidaa:====>"
          + pidaa);
          console.debug("ACTS_Process_MultiInstance_1000====>UnSubscribeCallback pidbe:====>"
          + pidbe);
          expect(abilityhapaaExist).assertEqual(true);
          expect(abilityhapbeExist).assertEqual(true);
          expect(pidaa != pidbe).assertEqual(true);

          console.debug("ACTS_Process_MultiInstance_1000====>UnSubscribe CallBack====>");
          done();
        } catch (err) {
          console.debug("ACTS_Process_MultiInstance_1000====>UnSubscribeCallback err:====>"
          + JSON.stringify(err));
        }
      }
      abilityContext.startAbility({
        bundleName: "com.example.multiinstancehapa",
        abilityName: "com.example.multiinstancehapaa.MainAbility",
      }, (err, data) => {
        console.log('ACTS_Process_MultiInstance_1000 - startAbilityhapaa: '
        + JSON.stringify(err) + ", " + JSON.stringify(data))
      })
      abilityContext.startAbility({
        bundleName: "com.example.multiinstancehapb",
        abilityName: "com.example.multiinstancehapbe.MainAbility",
      }, (err, data) => {
        console.log('ACTS_Process_MultiInstance_1000 - startAbilityhapbe: '
        + JSON.stringify(err) + ", " + JSON.stringify(data))
      })
    })

    /**
     * @tc.number: ACTS_Process_MultiInstance_1100
     * @tc.name: Check that three HAP packages in one App, run in two processes.
     * @tc.desc: Check that three HAP packages in one App, two HAP packets have the same process name,
     * and the other hap packet has a different process name than the other two, run in two processes.
     */
    it('ACTS_Process_MultiInstance_1100', 0, async function (done) {
      console.log("ACTS_Process_MultiInstance_1100 --- start")
      var Subscriber;
      var abilityinfos;
      var flagAEToTest = false;
      var flagBCToTest = false;

      function SubscribeCallBack(err, data) {
        try {
          console.debug("ACTS_Process_MultiInstance_1100====>Subscribe CallBack data:====>"
          + JSON.stringify(data));
          console.debug("ACTS_Process_MultiInstance_1100====>Subscribe CallBack data.event:====>"
          + JSON.stringify(data.event));
          switch (data.event) {
            case 'HapAE_To_Test_CommonEvent':
              flagAEToTest = true;
              break;
            case 'HapBC_To_Test_CommonEvent':
              flagBCToTest = true;
              break;
          }
          console.debug("ACTS_Process_MultiInstance_1100====>SubscribeCallBack flagAEToTest:====>"
          + flagAEToTest)
          console.debug("ACTS_Process_MultiInstance_1100====>SubscribeCallBack flagBCToTest:====>"
          + flagBCToTest)
          setTimeout(function () {
            if (flagAEToTest == true && flagBCToTest == true) {
              commonEvent.unsubscribe(Subscriber, UnSubscribeCallback);
            }
          }, 1000);
        } catch (err) {
          console.debug("ACTS_Process_MultiInstance_1100====>SubscribeCallBack err:====>" + err)
        }
      }

      commonEvent.createSubscriber(subscriberInfo).then(async (data) => {
        console.debug("ACTS_Process_MultiInstance_1100====>Create Subscriber====>");
        Subscriber = data;
        await commonEvent.subscribe(Subscriber, SubscribeCallBack);
      })

      async function UnSubscribeCallback() {
        try {
          console.debug("ACTS_Process_MultiInstance_1100====>UnSubscribeCallback in====>")

          abilityinfos = await abilityManager.getAbilityRunningInfos();
          console.debug("ACTS_Process_MultiInstance_1100====>abilityinfos:====>"
          + JSON.stringify(abilityinfos));
          var pidae;
          var pidbc;
          var abilityhapaeExist = false;
          var abilityhapbcExist = false;
          for (var i = 0; i < abilityinfos.length; i++) {
            if ((abilityinfos[i].processName == processNameC)) {
              console.debug("ACTS_Process_MultiInstance_1100 PC abilityinfos[" + i + "].ability.abilityName:"
              + JSON.stringify(abilityinfos[i].ability.abilityName));
              if (abilityinfos[i].ability.abilityName == 'com.example.multiinstancehapae.MainAbility') {
                abilityhapaeExist = true;
                pidae = abilityinfos[i].pid
              }
              if (abilityinfos[i].ability.abilityName == 'com.example.multiinstancehapbc.MainAbility') {
                abilityhapbcExist = true;
                pidbc = abilityinfos[i].pid
              }
            }
          }
          console.debug("ACTS_Process_MultiInstance_1100====>UnSubscribeCallback abilityhapaeExist:====>"
          + abilityhapaeExist);
          console.debug("ACTS_Process_MultiInstance_1100====>UnSubscribeCallback abilityhapbcExist:====>"
          + abilityhapbcExist);
          console.debug("ACTS_Process_MultiInstance_1100====>UnSubscribeCallback pidae:====>"
          + pidae);
          console.debug("ACTS_Process_MultiInstance_1100====>UnSubscribeCallback pidbc:====>"
          + pidbc);
          expect(abilityhapaeExist).assertEqual(true);
          expect(abilityhapbcExist).assertEqual(true);
          expect(pidae != pidbc).assertEqual(true);

          console.debug("ACTS_Process_MultiInstance_1100====>UnSubscribe CallBack====>");
          done();
        } catch (err) {
          console.debug("ACTS_Process_MultiInstance_1100====>UnSubscribeCallback err:====>"
          + JSON.stringify(err));
        }
      }
      abilityContext.startAbility({
        bundleName: "com.example.multiinstancehapa",
        abilityName: "com.example.multiinstancehapae.MainAbility",
      }, (err, data) => {
        console.log('ACTS_Process_MultiInstance_1100 - startAbilityhapae: '
        + JSON.stringify(err) + ", " + JSON.stringify(data))
      })
      abilityContext.startAbility({
        bundleName: "com.example.multiinstancehapb",
        abilityName: "com.example.multiinstancehapbc.MainAbility",
      }, (err, data) => {
        console.log('ACTS_Process_MultiInstance_1100 - startAbilityhapbc: '
        + JSON.stringify(err) + ", " + JSON.stringify(data))
      })
    })

    /**
     * @tc.number: ACTS_Process_MultiInstance_1200
     * @tc.name: Check that three HAP packages in one App, run in two processes.
     * @tc.desc: Check that three HAP packages in one App, two HAP packets have the same process name,
     * and the other hap packet has a different process name than the other two, run in two processes.
     */
    it('ACTS_Process_MultiInstance_1200', 0, async function (done) {
      console.log("ACTS_Process_MultiInstance_1100 --- start")
      var Subscriber;
      var abilityinfos;
      var flagACToTest = false;
      var flagBFToTest = false;

      function SubscribeCallBack(err, data) {
        try {
          console.debug("ACTS_Process_MultiInstance_1200====>Subscribe CallBack data:====>"
          + JSON.stringify(data));
          console.debug("ACTS_Process_MultiInstance_1200====>Subscribe CallBack data.event:====>"
          + JSON.stringify(data.event));
          switch (data.event) {
            case 'HapAC_To_Test_CommonEvent':
              flagACToTest = true;
              break;
            case 'HapBF_To_Test_CommonEvent':
              flagBFToTest = true;
              break;
          }
          console.debug("ACTS_Process_MultiInstance_1200====>SubscribeCallBack flagACToTest:====>"
          + flagACToTest)
          console.debug("ACTS_Process_MultiInstance_1200====>SubscribeCallBack flagBFToTest:====>"
          + flagBFToTest)
          setTimeout(function () {
            if (flagACToTest == true && flagBFToTest == true) {
              commonEvent.unsubscribe(Subscriber, UnSubscribeCallback);
            }
          }, 1000);
        } catch (err) {
          console.debug("ACTS_Process_MultiInstance_1200====>SubscribeCallBack err:====>" + err)
        }
      }

      commonEvent.createSubscriber(subscriberInfo).then(async (data) => {
        console.debug("ACTS_Process_MultiInstance_1200====>Create Subscriber====>");
        Subscriber = data;
        await commonEvent.subscribe(Subscriber, SubscribeCallBack);
      })

      async function UnSubscribeCallback() {
        try {
          console.debug("ACTS_Process_MultiInstance_1200====>UnSubscribeCallback in====>")

          abilityinfos = await abilityManager.getAbilityRunningInfos();
          console.debug("ACTS_Process_MultiInstance_1200====>abilityinfos:====>"
          + JSON.stringify(abilityinfos));
          var pidac;
          var pidbf;
          var abilityhapacExist = false;
          var abilityhapbfExist = false;
          for (var i = 0; i < abilityinfos.length; i++) {
            if ((abilityinfos[i].processName == processNameB)) {
              console.debug("ACTS_Process_MultiInstance_1200 PB abilityinfos[" + i + "].ability.abilityName:"
              + JSON.stringify(abilityinfos[i].ability.abilityName));
              if (abilityinfos[i].ability.abilityName == 'com.example.multiinstancehapac.MainAbility') {
                abilityhapacExist = true;
                pidac = abilityinfos[i].pid
              }
              if (abilityinfos[i].ability.abilityName == 'com.example.multiinstancehapbf.MainAbility') {
                abilityhapbfExist = true;
                pidbf = abilityinfos[i].pid
              }
            }
          }
          console.debug("ACTS_Process_MultiInstance_1200====>UnSubscribeCallback abilityhapacExist:====>"
          + abilityhapacExist);
          console.debug("ACTS_Process_MultiInstance_1200====>UnSubscribeCallback abilityhapbfExist:====>"
          + abilityhapbfExist);
          console.debug("ACTS_Process_MultiInstance_1200====>UnSubscribeCallback pidac:====>"
          + pidac);
          console.debug("ACTS_Process_MultiInstance_1200====>UnSubscribeCallback pidbf:====>"
          + pidbf);
          expect(abilityhapacExist).assertEqual(true);
          expect(abilityhapbfExist).assertEqual(true);
          expect(pidac != pidbf).assertEqual(true);

          console.debug("ACTS_Process_MultiInstance_1200====>UnSubscribe CallBack====>");
          done();
        } catch (err) {
          console.debug("ACTS_Process_MultiInstance_1200====>UnSubscribeCallback err:====>"
          + JSON.stringify(err));
        }
      }
      abilityContext.startAbility({
        bundleName: "com.example.multiinstancehapa",
        abilityName: "com.example.multiinstancehapac.MainAbility",
      }, (err, data) => {
        console.log('ACTS_Process_MultiInstance_1200 - startAbilityhapac: '
        + JSON.stringify(err) + ", " + JSON.stringify(data))
      })
      abilityContext.startAbility({
        bundleName: "com.example.multiinstancehapb",
        abilityName: "com.example.multiinstancehapbf.MainAbility",
      }, (err, data) => {
        console.log('ACTS_Process_MultiInstance_1200 - startAbilityhapbf: '
        + JSON.stringify(err) + ", " + JSON.stringify(data))
      })
    })

    /**
     * @tc.number: ACTS_Process_MultiInstance_1300
     * @tc.name: Check that three HAP packages in one App, run in two processes.
     * @tc.desc: Check that three HAP packages in one App, two HAP packets have the same process name,
     * and the other hap packet has a different process name than the other two, run in two processes.
     */
    it('ACTS_Process_MultiInstance_1300', 0, async function (done) {
      console.log("ACTS_Process_MultiInstance_1300 --- start")
      var Subscriber;
      var abilityinfos;
      var flagACToTest = false;
      var flagBCToTest = false;

      function SubscribeCallBack(err, data) {
        try {
          console.debug("ACTS_Process_MultiInstance_1300====>Subscribe CallBack data:====>"
          + JSON.stringify(data));
          console.debug("ACTS_Process_MultiInstance_1300====>Subscribe CallBack data.event:====>"
          + JSON.stringify(data.event));
          switch (data.event) {
            case 'HapAC_To_Test_CommonEvent':
              flagACToTest = true;
              break;
            case 'HapBC_To_Test_CommonEvent':
              flagBCToTest = true;
              break;
          }
          console.debug("ACTS_Process_MultiInstance_1300====>SubscribeCallBack flagACToTest:====>"
          + flagACToTest)
          console.debug("ACTS_Process_MultiInstance_1300====>SubscribeCallBack flagBCToTest:====>"
          + flagBCToTest)
          setTimeout(function () {
            if (flagACToTest == true && flagBCToTest == true) {
              commonEvent.unsubscribe(Subscriber, UnSubscribeCallback);
            }
          }, 1000);
        } catch (err) {
          console.debug("ACTS_Process_MultiInstance_1300====>SubscribeCallBack err:====>" + err)
        }
      }

      commonEvent.createSubscriber(subscriberInfo).then(async (data) => {
        console.debug("ACTS_Process_MultiInstance_1300====>Create Subscriber====>");
        Subscriber = data;
        await commonEvent.subscribe(Subscriber, SubscribeCallBack);
      })

      async function UnSubscribeCallback() {
        try {
          console.debug("ACTS_Process_MultiInstance_1300====>UnSubscribeCallback in====>")

          abilityinfos = await abilityManager.getAbilityRunningInfos();
          console.debug("ACTS_Process_MultiInstance_1300====>abilityinfos:====>"
          + JSON.stringify(abilityinfos));
          var pidac;
          var pidbc;
          var abilityhapacExist = false;
          var abilityhapbcExist = false;
          for (var i = 0; i < abilityinfos.length; i++) {
            if ((abilityinfos[i].processName == processNameB)) {
              console.debug("ACTS_Process_MultiInstance_1300 PB abilityinfos[" + i + "].ability.abilityName:"
              + JSON.stringify(abilityinfos[i].ability.abilityName));
              if (abilityinfos[i].ability.abilityName == 'com.example.multiinstancehapac.MainAbility') {
                abilityhapacExist = true;
                pidac = abilityinfos[i].pid
              }
            }
            if ((abilityinfos[i].processName == processNameC)) {
              console.debug("ACTS_Process_MultiInstance_1300 PC abilityinfos[" + i + "].ability.abilityName:"
              + JSON.stringify(abilityinfos[i].ability.abilityName));
              if (abilityinfos[i].ability.abilityName == 'com.example.multiinstancehapbc.MainAbility') {
                abilityhapbcExist = true;
                pidbc = abilityinfos[i].pid
              }
            }
          }
          console.debug("ACTS_Process_MultiInstance_1300====>UnSubscribeCallback abilityhapacExist:====>"
          + abilityhapacExist);
          console.debug("ACTS_Process_MultiInstance_1300====>UnSubscribeCallback abilityhapbcExist:====>"
          + abilityhapbcExist);
          console.debug("ACTS_Process_MultiInstance_1300====>UnSubscribeCallback pidac:====>"
          + pidac);
          console.debug("ACTS_Process_MultiInstance_1300====>UnSubscribeCallback pidbc:====>"
          + pidbc);
          expect(abilityhapacExist).assertEqual(true);
          expect(abilityhapbcExist).assertEqual(true);
          expect(pidac != pidbc).assertEqual(true);

          console.debug("ACTS_Process_MultiInstance_1300====>UnSubscribe CallBack====>");
          done();
        } catch (err) {
          console.debug("ACTS_Process_MultiInstance_1300====>UnSubscribeCallback err:====>"
          + JSON.stringify(err));
        }
      }
      abilityContext.startAbility({
        bundleName: "com.example.multiinstancehapa",
        abilityName: "com.example.multiinstancehapac.MainAbility",
      }, (err, data) => {
        console.log('ACTS_Process_MultiInstance_1300 - startAbilityhapac: '
        + JSON.stringify(err) + ", " + JSON.stringify(data))
      })
      abilityContext.startAbility({
        bundleName: "com.example.multiinstancehapb",
        abilityName: "com.example.multiinstancehapbc.MainAbility",
      }, (err, data) => {
        console.log('ACTS_Process_MultiInstance_1300 - startAbilityhapbc: '
        + JSON.stringify(err) + ", " + JSON.stringify(data))
      })
    })
  })
}