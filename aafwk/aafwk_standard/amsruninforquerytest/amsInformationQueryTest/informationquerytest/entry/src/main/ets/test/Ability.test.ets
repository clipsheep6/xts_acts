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
import bundle from '@ohos.bundle'
import missionManager from '@ohos.application.missionManager'
import abilityManager from '@ohos.application.AbilityManager'
import appManager from '@ohos.application.AppManager'

var subscriberInfoMultiInstance = {
  events: ["MultiInstanceStartNext", "MultiInstanceStartFinish", "TestAppOnForeground"]
};
const BUNDLE_PATHS = [['/data/test/querytestone.hap'], ['/data/test/querytesttwo.hap'],
['/data/test/querytestfour.hap'],['/data/test/querytestmulti.hap'],['/data/test/querytestmultifeature.hap'],
['/data/test/querytestfive.hap','/data/test/querytestfeature.hap'],['/data/test/querytestsix.hap']];
const BUNDLE_NAMES = ['com.example.querytestone', 'com.example.querytesttwo','com.example.querytestfour',
'com.example.querytestmulti','com.example.querytestmultifeature','com.example.querytestfive',
'com.example.querytestsix'];
const BUNDLE_COUNT = 7;
const START_ABILITY_TIMEOUT = 5000;
const MAX_MISSION_NUM = 1024;

async function startAbilityProcess(abilityContext, parameters) {
  let bundleName;
  let abilityName;

  let idx = parameters.nextStep;
  switch (parameters.step[idx]) {
    case "querytestone":
      bundleName = "com.example.querytestone";
      abilityName = "com.example.querytestone.MainAbility";
      break;
    case "querytesttwo":
      bundleName = "com.example.querytesttwo";
      abilityName = "com.example.querytesttwo.MainAbility";
      break;
    case "querytestfour":
      bundleName = "com.example.querytestfour";
      abilityName = "com.example.querytestfour.MainAbility";
    case "querytestfour2":
      bundleName = "com.example.querytestfour";
      abilityName = "com.example.querytestfour.MainAbility2";
      break;
    case "querytestmulti":
      bundleName = "com.example.querytestmulti";
      abilityName = "com.example.querytestmulti.MainAbility";
      break;
    case "querytestmultifeature":
      bundleName = "com.example.querytestmultifeature";
      abilityName = "com.example.querytestmultifeature.MainAbility";
      break;
    case "querytestfive":
      bundleName = "com.example.querytestfive";
      abilityName = "com.example.querytestfive.MainAbility";
      break;
    case "querytestfeature":
      bundleName = "com.example.querytestfive";
      abilityName = "com.example.feature.MainAbility";
      break;
    case "querytestsix":
      bundleName = "com.example.querytestsix";
      abilityName = "com.example.querytestsix.MainAbility";
      break;

    default:
      break;
  }
  parameters.nextStep = ++idx;
  abilityContext.startAbility({
    bundleName: bundleName,
    abilityName: abilityName,
    parameters: parameters
  }, (error, data) => {
    console.log('startAbilityProcess result: ' + JSON.stringify(error) + ", " + JSON.stringify(data))
  })
}

function getMissionId() {
  return new Promise(async (resolve, reject) => {
    var missionId = -1;
    var missionInfos = await missionManager.getMissionInfos('', MAX_MISSION_NUM);
    for (let i = 0; i < missionInfos.length; i++) {
      console.log('getMissionId result: ' + i + '= ' + JSON.stringify(missionInfos[i]))
      if ((missionInfos[i].want.abilityName == "com.example.actsinformationquerytest.MainAbility") &&
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
  describe('ActsAbilityTest', function () {

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

      testMissionId = await getMissionId();
      console.log('======>afterEach test missionId<=======' + testMissionId);
      await missionManager.moveMissionToFront(testMissionId);

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
              done();
            }, 500)
          }
        })
      }
    })

    function checkRunningProcess(name, dataInfo, processName) {
      for (let i = 0, len = dataInfo.length; i < len; i++) {
        if (dataInfo[i].processName == name) {
          expect(dataInfo[i].uid).assertLarger(2000);
          expect(dataInfo[i].pid).assertLarger(500);
          return true;
        }
        else if (dataInfo[i].bundleName == processName) {
          expect(dataInfo[i].uid).assertLarger(2000);
          expect(dataInfo[i].pid).assertLarger(500);
          return true;
        }
      }
      return false;
    }

    function checkAliveProcess(data) {
      expect(checkRunningProcess('com.ohos.launcher', data, 'com.ohos.launcher')).assertTrue();
      expect(checkRunningProcess('com.ohos.systemui', data, 'com.ohos.systemui')).assertTrue();
      expect(checkRunningProcess('com.example.actsinformationquerytest', data, 'com.example.actsinformationquerytest')).assertTrue();
    }

    /*
    * @tc.number: ACTS_QueryRunningProcess_0100
    * @tc.name: Application running process information query
    * @tc.desc: Verify that multiple applications are started and query process information（by promise）
    */
    it('ACTS_QueryRunningProcess_0100', 0, async function (done) {
      console.log('ACTS_AbilityMultiInstance_Single_0100====<begin');
      var subscriber;
      let id;

      function subscribeCallBack(err, data) {
        console.debug("====>Subscribe CallBack data:====>" + JSON.stringify(data));

        async function processInfoCheck() {
          console.info('====> ACTS_QueryRunningProcess_0100=====>');
          var data = await appManager.getProcessRunningInfos()
          console.info('====> ACTS_QueryRunningProcess_0100 start ability=====>' + JSON.stringify(data))
          expect(checkRunningProcess('com.example.querytestone', data, 'com.example.querytestone')).assertTrue();
          expect(checkRunningProcess('com.example.querytesttwo', data, 'com.example.querytesttwo')).assertTrue();
          done();
        }

        if (data.event == "MultiInstanceStartFinish") {
          console.info('====> ACTS_QueryRunningProcess_0100 start success=====>');
          clearTimeout(id);
          processInfoCheck();
          commonEvent.unsubscribe(subscriber, unSubscribeCallback)
        } else if (data.event == "MultiInstanceStartNext") {
          console.log('ACTS_AbilityMultiInstance_Single_0100 callBackSeq = ' + data.data);
        }
      }

      commonEvent.createSubscriber(subscriberInfoMultiInstance).then(async (data) => {
        console.debug("====>Create Subscriber====>");
        subscriber = data;
        commonEvent.subscribe(subscriber, subscribeCallBack);
      })

      function unSubscribeCallback() {
        console.debug("====>UnSubscribe CallBack====>");
      }

      function timeout() {
        expect().assertFail();
        console.log('StartAbilityMultiInstanceTester timeout');
      }

      id = setTimeout(timeout, START_ABILITY_TIMEOUT);
      console.log('Start ACTS_AbilityMultiInstance_Single_0100 timer id : ' + id);

      startAbilityProcess(abilityContext, {
        startId: 0,
        stepNum: 2,
        nextStep: 0,
        step: ["querytestone", "querytesttwo"]
      });
    })

    /*
    * @tc.number: ACTS_QueryRunningProcess_0200
    * @tc.name: Application running process information query
    * @tc.desc: Verify that multiple applications are started and query process information（by callback）
    */
    it('ACTS_QueryRunningProcess_0200', 0, async function (done) {
      console.log('ACTS_QueryRunningProcess_0200====<begin');
      var subscriber;
      let id;

      function subscribeCallBack(err, data) {
        console.debug("====>Subscribe CallBack data:====>" + JSON.stringify(data));

         function processInfoCheck() {
          console.info('====> ACTS_QueryRunningProcess_0200=====>');
          appManager.getProcessRunningInfos((err,data)=>{
            console.info('====> ACTS_QueryRunningProcess_0200 start ability=====>' + JSON.stringify(data))
            expect(checkRunningProcess('com.example.querytestone', data, 'com.example.querytestone')).assertTrue();
            expect(checkRunningProcess('com.example.querytesttwo', data, 'com.example.querytesttwo')).assertTrue();
            done();
          })
        }

        if (data.event == "MultiInstanceStartFinish") {
          console.info('====> ACTS_QueryRunningProcess_0200 start success=====>');
          clearTimeout(id);
          processInfoCheck();
          commonEvent.unsubscribe(subscriber, unSubscribeCallback)
        } else if (data.event == "MultiInstanceStartNext") {
          console.log('ACTS_QueryRunningProcess_0200 callBackSeq = ' + data.data);
        }
      }

      commonEvent.createSubscriber(subscriberInfoMultiInstance).then(async (data) => {
        console.debug("====>Create Subscriber====>");
        subscriber = data;
        commonEvent.subscribe(subscriber, subscribeCallBack);
      })

      function unSubscribeCallback() {
        console.debug("====>UnSubscribe CallBack====>");
      }

      function timeout() {
        expect().assertFail();
        console.log('StartAbilityMultiInstanceTester timeout');
      }

      id = setTimeout(timeout, START_ABILITY_TIMEOUT);
      console.log('Start ACTS_QueryRunningProcess_0200 timer id : ' + id);

      startAbilityProcess(abilityContext, {
        startId: 0,
        stepNum: 2,
        nextStep: 0,
        step: ["querytestone", "querytesttwo"]
      });
    })

    /*
    * @tc.number: ACTS_QueryRunningProcess_0300
    * @tc.name: Application running process information query
    * @tc.desc: Verify that multiple ability query process information is started （by promise）
    */
    it('ACTS_QueryRunningProcess_0300', 0, async function (done) {
      console.log('ACTS_QueryRunningProcess_0300====<begin');
      var subscriber;
      let id;

      function subscribeCallBack(err, data) {
        console.debug("====>Subscribe CallBack data:====>" + JSON.stringify(data));

        async function processInfoCheck() {
          console.info('====> ACTS_QueryRunningProcess_0300=====>');
          var data = await appManager.getProcessRunningInfos()
          console.info('====> ACTS_QueryRunningProcess_0300 start ability=====>' + JSON.stringify(data))
          expect(checkRunningProcess('com.example.querytestfour', data, 'com.example.querytestfour')).assertTrue();
          done();
        }

        if (data.event == "MultiInstanceStartFinish") {
          console.info('====> ACTS_QueryRunningProcess_0300 start success=====>');
          clearTimeout(id);
          processInfoCheck();
          commonEvent.unsubscribe(subscriber, unSubscribeCallback)
        } else if (data.event == "MultiInstanceStartNext") {
          console.log('ACTS_QueryRunningProcess_0300 callBackSeq = ' + data.data);
        }
      }

      commonEvent.createSubscriber(subscriberInfoMultiInstance).then(async (data) => {
        console.debug("====>Create Subscriber====>");
        subscriber = data;
        commonEvent.subscribe(subscriber, subscribeCallBack);
      })

      function unSubscribeCallback() {
        console.debug("====>UnSubscribe CallBack====>");
      }

      function timeout() {
        expect().assertFail();
        console.log('ACTS_QueryRunningProcess_0300 timeout');
      }

      id = setTimeout(timeout, START_ABILITY_TIMEOUT);
      console.log('Start ACTS_QueryRunningProcess_0300 timer id : ' + id);

      startAbilityProcess(abilityContext, {
        startId: 0,
        stepNum: 2,
        nextStep: 0,
        step: ["querytestfour", "querytestfour2"]
      });
    })

    /*
    * @tc.number: ACTS_QueryRunningProcess_0400
    * @tc.name: Application running process information query
    * @tc.desc: Verify that multiple ability query process information is started （by callback）
    */
    it('ACTS_QueryRunningProcess_0400', 0, async function (done) {
      console.log('ACTS_QueryRunningProcess_0400====<begin');
      var subscriber;
      let id;

      function subscribeCallBack(err, data) {
        console.debug("====>Subscribe CallBack data:====>" + JSON.stringify(data));

        function processInfoCheck() {
          console.info('====> ACTS_QueryRunningProcess_0400=====>');
            appManager.getProcessRunningInfos((err,data)=>{
            console.info('====> ACTS_QueryRunningProcess_0400 start ability=====>' + JSON.stringify(data))
            expect(checkRunningProcess('com.example.querytestfour', data, 'com.example.querytestfour')).assertTrue();
            done();
          })
        }

        if (data.event == "MultiInstanceStartFinish") {
          console.info('====> ACTS_QueryRunningProcess_0400 start success=====>');
          clearTimeout(id);
          processInfoCheck();
          commonEvent.unsubscribe(subscriber, unSubscribeCallback)
        } else if (data.event == "MultiInstanceStartNext") {
          console.log('ACTS_QueryRunningProcess_0400 callBackSeq = ' + data.data);
        }
      }

      commonEvent.createSubscriber(subscriberInfoMultiInstance).then(async (data) => {
        console.debug("====>Create Subscriber====>");
        subscriber = data;
        commonEvent.subscribe(subscriber, subscribeCallBack);
      })

      function unSubscribeCallback() {
        console.debug("====>UnSubscribe CallBack====>");
      }

      function timeout() {
        expect().assertFail();
        console.log('ACTS_QueryRunningProcess_0400 timeout');
      }

      id = setTimeout(timeout, START_ABILITY_TIMEOUT);
      console.log('Start ACTS_QueryRunningProcess_0400 timer id : ' + id);

      startAbilityProcess(abilityContext, {
        startId: 0,
        stepNum: 2,
        nextStep: 0,
        step: ["querytestfour", "querytestfour2"]
      });
    })

    /*
    * @tc.number: ACTS_QueryRunningProcess_0500
    * @tc.name: Application running process information query
    * @tc.desc: Verify that multiple applications are started to query different process information（by promise）
    */
    it('ACTS_QueryRunningProcess_0500', 0, async function (done) {
      console.log('ACTS_QueryRunningProcess_0500====<begin');
      var subscriber;
      let id;

      function subscribeCallBack(err, data) {
        console.debug("====>Subscribe CallBack data:====>" + JSON.stringify(data));

        async function processInfoCheck() {
          console.info('====> ACTS_QueryRunningProcess_0500=====>');
          var data = await appManager.getProcessRunningInfos()
          console.info('====> ACTS_QueryRunningProcess_0500 start ability=====>' + JSON.stringify(data))
          expect(checkRunningProcess('com.example.querytestmultione', data, 'com.example.querytestmultione')).assertTrue();
          expect(checkRunningProcess('com.example.querytestmultitwo', data, 'com.example.querytestmultitwo')).assertTrue();
          done();
        }

        if (data.event == "MultiInstanceStartFinish") {
          console.info('====> ACTS_QueryRunningProcess_0500 start success=====>');
          clearTimeout(id);
          processInfoCheck();
          commonEvent.unsubscribe(subscriber, unSubscribeCallback)
        } else if (data.event == "MultiInstanceStartNext") {
          console.log('ACTS_QueryRunningProcess_0500 callBackSeq = ' + data.data);
        }
      }

      commonEvent.createSubscriber(subscriberInfoMultiInstance).then(async (data) => {
        console.debug("====>Create Subscriber====>");
        subscriber = data;
        commonEvent.subscribe(subscriber, subscribeCallBack);
      })

      function unSubscribeCallback() {
        console.debug("====>UnSubscribe CallBack====>");
      }

      function timeout() {
        expect().assertFail();
        console.log('ACTS_QueryRunningProcess_0500 timeout');
      }

      id = setTimeout(timeout, START_ABILITY_TIMEOUT);
      console.log('Start ACTS_QueryRunningProcess_0500 timer id : ' + id);

      startAbilityProcess(abilityContext, {
        startId: 0,
        stepNum: 2,
        nextStep: 0,
        step: ["querytestmulti", "querytestmultifeature"]
      });
    })

    /*
    * @tc.number: ACTS_QueryRunningProcess_0600
    * @tc.name: Application running process information query
    * @tc.desc: Verify that multiple applications are started to query different process information（by callback）
    */
    it('ACTS_QueryRunningProcess_0600', 0, async function (done) {
      console.log('ACTS_QueryRunningProcess_0600====<begin');
      var subscriber;
      let id;

      function subscribeCallBack(err, data) {
        console.debug("====>Subscribe CallBack data:====>" + JSON.stringify(data));

        function processInfoCheck() {
          console.info('====> ACTS_QueryRunningProcess_0600=====>');
          appManager.getProcessRunningInfos((err,data)=>{
            console.info('====> ACTS_QueryRunningProcess_0600 start ability=====>' + JSON.stringify(data))
            expect(checkRunningProcess('com.example.querytestmultione', data, 'com.example.querytestmultione')).assertTrue();
            expect(checkRunningProcess('com.example.querytestmultitwo', data, 'com.example.querytestmultitwo')).assertTrue();
            done();
          })
        }

        if (data.event == "MultiInstanceStartFinish") {
          console.info('====> ACTS_QueryRunningProcess_0600 start success=====>');
          clearTimeout(id);
          processInfoCheck();
          commonEvent.unsubscribe(subscriber, unSubscribeCallback)
        } else if (data.event == "MultiInstanceStartNext") {
          console.log('ACTS_QueryRunningProcess_0600 callBackSeq = ' + data.data);
        }
      }

      commonEvent.createSubscriber(subscriberInfoMultiInstance).then(async (data) => {
        console.debug("====>Create Subscriber====>");
        subscriber = data;
        commonEvent.subscribe(subscriber, subscribeCallBack);
      })

      function unSubscribeCallback() {
        console.debug("====>UnSubscribe CallBack====>");
      }

      function timeout() {
        expect().assertFail();
        console.log('ACTS_QueryRunningProcess_0600 timeout');
      }

      id = setTimeout(timeout, START_ABILITY_TIMEOUT);
      console.log('Start ACTS_QueryRunningProcess_0600 timer id : ' + id);

      startAbilityProcess(abilityContext, {
        startId: 0,
        stepNum: 2,
        nextStep: 0,
        step: ["querytestmulti", "querytestmultifeature"]
      });
    })

    /*
    * @tc.number: ACTS_QueryRunningProcess_0700
    * @tc.name: Application running process information query
    * @tc.desc: Verify same as the application of multiple hap query process information（by promise）
    */
    it('ACTS_QueryRunningProcess_0700', 0, async function (done) {
      console.log('ACTS_QueryRunningProcess_0700====<begin');
      var subscriber;
      let id;

      function subscribeCallBack(err, data) {
        console.debug("====>Subscribe CallBack data:====>" + JSON.stringify(data));

        async function processInfoCheck() {
          console.info('====> ACTS_QueryRunningProcess_0700=====>');
          var data = await appManager.getProcessRunningInfos()
          console.info('====> ACTS_QueryRunningProcess_0700 start ability=====>' + JSON.stringify(data))
          expect(checkRunningProcess('com.example.querytestfive', data, 'com.example.querytestfive')).assertTrue();
          done();
        }

        if (data.event == "MultiInstanceStartFinish") {
          console.info('====> ACTS_QueryRunningProcess_0700 start success=====>');
          clearTimeout(id);
          processInfoCheck();
          commonEvent.unsubscribe(subscriber, unSubscribeCallback)
        } else if (data.event == "MultiInstanceStartNext") {
          console.log('ACTS_QueryRunningProcess_0700 callBackSeq = ' + data.data);
        }
      }

      commonEvent.createSubscriber(subscriberInfoMultiInstance).then(async (data) => {
        console.debug("====>Create Subscriber====>");
        subscriber = data;
        commonEvent.subscribe(subscriber, subscribeCallBack);
      })

      function unSubscribeCallback() {
        console.debug("====>UnSubscribe CallBack====>");
      }

      function timeout() {
        expect().assertFail();
        console.log('ACTS_QueryRunningProcess_0700 timeout');
      }

      id = setTimeout(timeout, START_ABILITY_TIMEOUT);
      console.log('Start ACTS_QueryRunningProcess_0700 timer id : ' + id);

      startAbilityProcess(abilityContext, {
        startId: 0,
        stepNum: 2,
        nextStep: 0,
        step: ["querytestfive", "querytestfeature"]
      });
    })

    /*
    * @tc.number: ACTS_QueryRunningProcess_0800
    * @tc.name: Application running process information query
    * @tc.desc: Verify same as the application of multiple hap query process information（by callback）
    */
    it('ACTS_QueryRunningProcess_0800', 0, async function (done) {
      console.log('ACTS_QueryRunningProcess_1200====<begin');
      var subscriber;
      let id;

      function subscribeCallBack(err, data) {
        console.debug("====>Subscribe CallBack data:====>" + JSON.stringify(data));

        async function processInfoCheck() {
          console.info('====> ACTS_QueryRunningProcess_0800=====>');
          appManager.getProcessRunningInfos((err,data)=>{
            console.info('====> ACTS_QueryRunningProcess_0800 start ability=====>' + JSON.stringify(data))
            expect(checkRunningProcess('com.example.querytestfive', data, 'com.example.querytestfive')).assertTrue();
            done();
          })
        }

        if (data.event == "MultiInstanceStartFinish") {
          console.info('====> ACTS_QueryRunningProcess_0800 start success=====>');
          clearTimeout(id);
          processInfoCheck();
          commonEvent.unsubscribe(subscriber, unSubscribeCallback)
        } else if (data.event == "MultiInstanceStartNext") {
          console.log('ACTS_QueryRunningProcess_0800 callBackSeq = ' + data.data);
        }
      }

      commonEvent.createSubscriber(subscriberInfoMultiInstance).then(async (data) => {
        console.debug("====>Create Subscriber====>");
        subscriber = data;
        commonEvent.subscribe(subscriber, subscribeCallBack);
      })

      function unSubscribeCallback() {
        console.debug("====>UnSubscribe CallBack====>");
      }

      function timeout() {
        expect().assertFail();
        console.log('ACTS_QueryRunningProcess_0800 timeout');
      }

      id = setTimeout(timeout, START_ABILITY_TIMEOUT);
      console.log('Start ACTS_QueryRunningProcess_0800 timer id : ' + id);

      startAbilityProcess(abilityContext, {
        startId: 0,
        stepNum: 2,
        nextStep: 0,
        step: ["querytestfive", "querytestfeature"]
      });
    })

    /*
    * @tc.number: ACTS_QueryRunningProcess_0900
    * @tc.name: Application running process information query
    * @tc.desc: Verify api8 application queries the process information of the api7 dependent application（by promise）
    */
    it('ACTS_QueryRunningProcess_0900', 0, async function (done) {
      console.log('ACTS_QueryRunningProcess_0900====<begin');
      var subscriber;
      let id;

      function subscribeCallBack(err, data) {
        console.debug("====>Subscribe CallBack data:====>" + JSON.stringify(data));

        async function processInfoCheck() {
          console.info('====> ACTS_QueryRunningProcess_0900=====>');
          var data = await appManager.getProcessRunningInfos()
          console.info('====> ACTS_QueryRunningProcess_0900 start ability=====>' + JSON.stringify(data))
          expect(checkRunningProcess('com.example.querytestsix', data, 'com.example.querytestsix')).assertTrue();
          done();
        }

        if (data.event == "MultiInstanceStartFinish") {
          console.info('====> ACTS_QueryRunningProcess_0900 start success=====>');
          clearTimeout(id);
          processInfoCheck();
          commonEvent.unsubscribe(subscriber, unSubscribeCallback)
        } else if (data.event == "MultiInstanceStartNext") {
          console.log('ACTS_QueryRunningProcess_0900 callBackSeq = ' + data.data);
        }
      }

      commonEvent.createSubscriber(subscriberInfoMultiInstance).then(async (data) => {
        console.debug("====>Create Subscriber====>");
        subscriber = data;
        commonEvent.subscribe(subscriber, subscribeCallBack);
      })

      function unSubscribeCallback() {
        console.debug("====>UnSubscribe CallBack====>");
      }

      function timeout() {
        expect().assertFail();
        console.log('ACTS_QueryRunningProcess_0900 timeout');
      }

      id = setTimeout(timeout, START_ABILITY_TIMEOUT);
      console.log('Start ACTS_QueryRunningProcess_0900 timer id : ' + id);

      startAbilityProcess(abilityContext, {
        startId: 0,
        stepNum: 1,
        nextStep: 0,
        step: ["querytestsix"]
      });
    })

    /*
    * @tc.number: ACTS_QueryRunningProcess_1000
    * @tc.name: Application running process information query
    * @tc.desc: Verify api8 application queries the process information of the api7 dependent application（by callback）
    */
    it('ACTS_QueryRunningProcess_1000', 0, async function (done) {
      console.log('ACTS_QueryRunningProcess_1000====<begin');
      var subscriber;
      let id;

      function subscribeCallBack(err, data) {
        console.debug("====>Subscribe CallBack data:====>" + JSON.stringify(data));

        async function processInfoCheck() {
          console.info('====> ACTS_QueryRunningProcess_1000=====>');
           appManager.getProcessRunningInfos((err,data)=>{
             console.info('====> ACTS_QueryRunningProcess_1000 start ability=====>' + JSON.stringify(data))
             expect(checkRunningProcess('com.example.querytestsix', data, 'com.example.querytestsix')).assertTrue();
             done();
          })
        }

        if (data.event == "MultiInstanceStartFinish") {
          console.info('====> ACTS_QueryRunningProcess_1000 start success=====>');
          clearTimeout(id);
          processInfoCheck();
          commonEvent.unsubscribe(subscriber, unSubscribeCallback)
        } else if (data.event == "MultiInstanceStartNext") {
          console.log('ACTS_QueryRunningProcess_1000 callBackSeq = ' + data.data);
        }
      }

      commonEvent.createSubscriber(subscriberInfoMultiInstance).then(async (data) => {
        console.debug("====>Create Subscriber====>");
        subscriber = data;
        commonEvent.subscribe(subscriber, subscribeCallBack);
      })

      function unSubscribeCallback() {
        console.debug("====>UnSubscribe CallBack====>");
      }

      function timeout() {
        expect().assertFail();
        console.log('ACTS_QueryRunningProcess_1000 timeout');
      }

      id = setTimeout(timeout, START_ABILITY_TIMEOUT);
      console.log('Start ACTS_QueryRunningProcess_1000 timer id : ' + id);

      startAbilityProcess(abilityContext, {
        startId: 0,
        stepNum: 1,
        nextStep: 0,
        step: ["querytestsix"]
      });
    })

    /*
    * @tc.number: ACTS_QueryRunningProcess_1100
    * @tc.name: Application running process information query
    * @tc.desc: Verify all process running information such as system permission applications（by promise）
    */
    it('ACTS_QueryRunningProcess_1100', 0, async function (done) {
      console.log('ACTS_QueryRunningProcess_1100====<begin');
      var data = await appManager.getProcessRunningInfos()
      console.info('====> ACTS_QueryRunningProcess_1100 start ability=====>' + JSON.stringify(data))
      checkAliveProcess(data);
      done();
    })

    /*
    * @tc.number: ACTS_QueryRunningProcess_1200
    * @tc.name: Application running process information query
    * @tc.desc: Verify all process running information such as system permission applications（by callback）
    */
    it('ACTS_QueryRunningProcess_1200', 0, async function (done) {
      console.log('ACTS_QueryRunningProcess_1200====<begin');
      appManager.getProcessRunningInfos((err,data)=>{
        console.info('====> ACTS_QueryRunningProcess_1200 start ability=====>' + JSON.stringify(data))
        checkAliveProcess(data);
        done();
      })
    })

    /*
    * @tc.number: ACTS_QueryRunningProcess_1300
    * @tc.name: Application running process information query
    * @tc.desc: Verify and destroy application process
    *           query start multiple application process running information（by promise）
    */
    it('ACTS_QueryRunningProcess_1300', 0, async function (done) {
      console.log('ACTS_QueryRunningProcess_1300====<begin');
      var data = await appManager.getProcessRunningInfos()
      console.info('====> ACTS_QueryRunningProcess_1300 start ability=====>' + JSON.stringify(data))
      expect(checkRunningProcess('com.example.querytestone', data, 'com.example.querytestone')).assertFalse();
      expect(checkRunningProcess('com.example.querytesttwo', data, 'com.example.querytesttwo')).assertFalse();
      done();
    })

    /*
    * @tc.number: ACTS_QueryRunningProcess_1400
    * @tc.name: Application running process information query
    * @tc.desc: Verify and destroy application process
    *           query start multiple application process running information（by callback）
    */
    it('ACTS_QueryRunningProcess_1400', 0, async function (done) {
      console.log('ACTS_QueryRunningProcess_1400====<begin');
      appManager.getProcessRunningInfos((err,data)=>{
        console.info('====> ACTS_QueryRunningProcess_1400 start ability=====>' + JSON.stringify(data))
        expect(checkRunningProcess('com.example.querytestone', data, 'com.example.querytestone')).assertFalse();
        expect(checkRunningProcess('com.example.querytesttwo', data, 'com.example.querytesttwo')).assertFalse();
        done();
      })
    })
}