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
import abilityManager from '@ohos.application.abilityManager'

var subscriberInfoMultiInstance = {
  events: ["UpdateLanguageNext", "UpdateLanguageFinish"]
};
const BUNDLE_PATHS = [['/data/test/ActsLanguageConfigAppTestA.hap'], ['/data/test/ActsLanguageConfigAppTestB.hap']];
const BUNDLE_NAMES = ['com.example.actslanguageconfigappatest', 'com.example.actslanguageconfigtestappbtest'];
const BUNDLE_COUNT = 2;
const START_ABILITY_TIMEOUT = 5000;
const MAX_MISSION_NUM = 1024;

async function startAbilityProcess(abilityContext, parameters) {
  let bundleName;
  let abilityName;

  let idx = parameters.nextStep;
  switch (parameters.step[idx]) {
    case "StartA1":
      bundleName = "com.example.actslanguageconfigappatest";
      abilityName = "com.example.actslanguageconfigappatest.MainAbility";
      break;
    case "StartA2":
      bundleName = "com.example.actslanguageconfigappatest";
      abilityName = "com.example.actslanguageconfigappatest.SecondAbility";
      break;
    case "StartB":
      bundleName = "com.example.actslanguageconfigtestappbtest";
      abilityName = "com.example.actslanguageconfigtestappbtest.MainAbility";
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
      if ((missionInfos[i].want.abilityName == "com.example.actslanguageconfigabilitytest.MainAbility") &&
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
  describe('ActslanguageConfigAbilityTest', function () {

    beforeEach(async (done) => {
      console.log('======>beforeEach  ininin<=======');
      let installer = await bundle.getBundleInstaller();
      var count = 0;

      for (let i = 0; i < BUNDLE_COUNT; i++) {
        installer.install(BUNDLE_PATHS[i], {
          userId: 0,
          installFlag: 1,
          isKeepData: false
        }, (err, data) => {
          count++;
          console.log('======>beforeEach install finish <=======' + err.code);
          console.log('======>uninstall start bundleName <=======' + data.status);
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
        console.log('======>uninstall start bundleName<=======' + BUNDLE_NAMES[i]);
        installer.uninstall(BUNDLE_NAMES[i], {
          userId: 0,
          installFlag: 1,
          isKeepData: false
        }, (err, data) => {
          count++;
          console.log('======>count<=======' + count);
          console.log('======>afterEach uninstall finish <=======' + err.code);
          console.log('======>afterEach uninstall finish <=======' + data.status);
          console.log('======>afterEach uninstall finish <=======' + data.statusMessage);
          if (count == BUNDLE_COUNT) {
            console.log('======>afterEach finish<=======' + BUNDLE_NAMES[i]);
            done();
          }
        })
      }
    })

    /*
      * @tc.number: AMS_UpdateConfiguration_0100
      * @tc.name: Connects a service ability, which is used to start a cloned page ability.
      * @tc.desc: Check the event data of executor page ability publishes
      */
    it('ACTS_OnConfigurationUpdated_0100', 0, async function (done) {
      console.log('ACTS_OnConfigurationUpdated_0100====<begin');
      var subscriber;
      var id;
      var configDefault = {
        language: "zh-Hans"
      };
      var configChange = {
        language: "en"
      };
      await abilityManager.updateConfiguration(configDefault);
      console.log("LanguageConfigAppA  1 called" + JSON.stringify(configDefault));
      async function setLangConfig() {
        await abilityManager.updateConfiguration(configChange);
        console.log("LanguageConfigAppA 2  called" + JSON.stringify(configChange));
        commonEvent.unsubscribe(subscriber, unSubscribeCallback)
      }

      function subscribeCallBack(err, data) {
        console.debug("====>Subscribe CallBack data:====>" + JSON.stringify(data));

        expect(data.event).assertEqual("UpdateLanguageFinish");
        clearTimeout(id);
        console.log('ACTS_OnConfigurationUpdated_0100 start set lang');
        setLangConfig();
      }

      commonEvent.createSubscriber(subscriberInfoMultiInstance).then(async (data) => {
        console.debug("====>Create Subscriber====>");
        subscriber = data;
        commonEvent.subscribe(subscriber, subscribeCallBack);
      })

      function unSubscribeCallback() {
        console.debug("====>UnSubscribe CallBack====>");
        done();
      }
      function timeout() {
        expect().assertFail();
        console.log('StartLanguageConfigTester timeout');
        commonEvent.unsubscribe(subscriber, unSubscribeCallback);
      }
      id = setTimeout(timeout, START_ABILITY_TIMEOUT);
      console.log('Start LanguageConfigTester ACTS_OnConfigurationUpdated_0100 timer id : ' + id);

      console.log('LanguageConfigTester ACTS_OnConfigurationUpdated_0100 start Ability');
      startAbilityProcess(abilityContext, {
        startId: 0,
        stepNum: 1,
        nextStep: 0,
        step: ["StartA1"]
      });
    })

    it('ACTS_OnConfigurationUpdated_0200', 0, async function (done) {
      console.log('ACTS_OnConfigurationUpdated_0200====<begin');
      var subscriber;
      var id;

      var configDefault = {
        language: "zh-Hans"
      };

      await abilityManager.updateConfiguration(configDefault);

      async function setLangConfig() {
        await abilityManager.updateConfiguration(configDefault);
        commonEvent.unsubscribe(subscriber, unSubscribeCallback)
      }

      function subscribeCallBack(err, data) {
        console.debug("====>Subscribe CallBack data:====>" + JSON.stringify(data));

        expect(data.event).assertEqual("UpdateLanguageFinish");
        clearTimeout(id);
        console.log('ACTS_OnConfigurationUpdated_0200 start set lang');
        setLangConfig();
      }

      commonEvent.createSubscriber(subscriberInfoMultiInstance).then(async (data) => {
        console.debug("====>Create Subscriber====>");
        subscriber = data;
        commonEvent.subscribe(subscriber, subscribeCallBack);
      })

      function unSubscribeCallback() {
        console.debug("====>UnSubscribe CallBack====>");
          done();

      }

      function timeout() {
        expect().assertFail();
        console.log('StartLanguageConfigTester timeout');
        commonEvent.unsubscribe(subscriber, unSubscribeCallback);
      }

      id = setTimeout(timeout, START_ABILITY_TIMEOUT);
      console.log('Start LanguageConfigTester ACTS_OnConfigurationUpdated_0200 timer id : ' + id);

      console.log('LanguageConfigTester ACTS_OnConfigurationUpdated_0200 start Ability');
      startAbilityProcess(abilityContext, {
        startId: 0,
        stepNum: 1,
        nextStep: 0,
        step: ["StartA1"]
      });
    })

    it('ACTS_OnConfigurationUpdated_0300', 0, async function (done) {
      console.log('ACTS_OnConfigurationUpdated_0300====<begin');
      var subscriber;
      var id;
      var configDefault = {
        language: "zh-Hans"
      };
      var configChange = {
        language: "en"
      };
      await abilityManager.updateConfiguration(configDefault);

      async function setLangConfig() {
        await abilityManager.updateConfiguration(configChange);
        commonEvent.unsubscribe(subscriber, unSubscribeCallback)
      }

      function subscribeCallBack(err, data) {
        console.debug("====>Subscribe CallBack data:====>" + JSON.stringify(data));

        if (data.event == "UpdateLanguageNext") {
          clearTimeout(id);
          console.log('ACTS_OnConfigurationUpdated_0300 start set lang');
          setLangConfig();
        } else if (data.event == "UpdateLanguageFinish") {
          console.log('ACTS_OnConfigurationUpdated_0300 called start next');
        }
      }

      commonEvent.createSubscriber(subscriberInfoMultiInstance).then(async (data) => {
        console.debug("====>Create Subscriber====>");
        subscriber = data;
        commonEvent.subscribe(subscriber, subscribeCallBack);
      })

      function unSubscribeCallback() {
        console.debug("====>UnSubscribe CallBack====>");
          done();

      }

      function timeout() {
        expect().assertFail();
        console.log('StartLanguageConfigTester timeout');
        commonEvent.unsubscribe(subscriber, unSubscribeCallback);
      }

      id = setTimeout(timeout, START_ABILITY_TIMEOUT);
      console.log('Start LanguageConfigTester ACTS_OnConfigurationUpdated_0300 timer id : ' + id);

      console.log('LanguageConfigTester ACTS_OnConfigurationUpdated_0300 start Ability');
      startAbilityProcess(abilityContext, {
        startId: 0,
        stepNum: 3,
        nextStep: 0,
        step: ["StartA1", "StartA2", "StartB"]
      });
    })

    it('ACTS_OnConfigurationUpdated_0400', 0, async function (done) {
      console.log('ACTS_OnConfigurationUpdated_0400====<begin');
      var subscriber;
      var id;
      var configDefault = {
        language: "zh-Hans"
      };

      await abilityManager.updateConfiguration(configDefault);

      async function setLangConfig() {
        await abilityManager.updateConfiguration(configDefault);
        commonEvent.unsubscribe(subscriber, unSubscribeCallback)
      }

      function subscribeCallBack(err, data) {
        console.debug("====>Subscribe CallBack data:====>" + JSON.stringify(data));

        if (data.event == "UpdateLanguageNext") {
          clearTimeout(id);
          console.log('ACTS_OnConfigurationUpdated_0400 start set lang');
          setLangConfig();
        } else if (data.event == "UpdateLanguageFinish") {
          console.log('ACTS_OnConfigurationUpdated_0400 called start next');
        }
      }

      commonEvent.createSubscriber(subscriberInfoMultiInstance).then(async (data) => {
        console.debug("====>Create Subscriber====>");
        subscriber = data;
        commonEvent.subscribe(subscriber, subscribeCallBack);
      })

      function unSubscribeCallback() {
        console.debug("====>UnSubscribe CallBack====>");
        setTimeout(() =>{
          done();
        },1000);
      }

      function timeout() {
        expect().assertFail();
        console.log('StartLanguageConfigTester timeout');
        commonEvent.unsubscribe(subscriber, unSubscribeCallback);
      }

      id = setTimeout(timeout, START_ABILITY_TIMEOUT);
      console.log('Start LanguageConfigTester ACTS_OnConfigurationUpdated_0400 timer id : ' + id);

      console.log('LanguageConfigTester ACTS_OnConfigurationUpdated_0400 start Ability');
      startAbilityProcess(abilityContext, {
        startId: 0,
        stepNum: 3,
        nextStep: 0,
        step: ["StartA1", "StartA2", "StartB"]
      });
    })

    /*
      * @tc.number: AMS_UpdateConfiguration_0500
      * @tc.name: Connects a service ability, which is used to start a cloned page ability.
      * @tc.desc: Check the event data of executor page ability publishes
      */
    it('ACTS_OnConfigurationUpdated_0500', 0, async function (done) {
      console.log('ACTS_OnConfigurationUpdated_0500====<begin');
      var subscriber;
      var id;
      var configDefault = {
        language: "zh-Hans"
      };
      var configChange = {
        language: "en"
      };

      async function setLangConfig() {
        abilityManager.updateConfiguration(configChange, (err, data) => {
          console.log('LanguageConfigTester ACTS_OnConfigurationUpdated_0500 updateConfiguration err：' +
          JSON.stringify(err));
          expect(err.code).assertEqual(0);
          console.log('LanguageConfigTester ACTS_OnConfigurationUpdated_0500 start Ability');
          commonEvent.unsubscribe(subscriber, unSubscribeCallback)
        });
      }

      function subscribeCallBack(err, data) {
        console.debug("====>Subscribe CallBack data:====>" + JSON.stringify(data));

        expect(data.event).assertEqual("UpdateLanguageFinish");
        clearTimeout(id);
        console.log('ACTS_OnConfigurationUpdated_0500 start set lang');
        setLangConfig();
      }

      commonEvent.createSubscriber(subscriberInfoMultiInstance).then(async (data) => {
        console.debug("====>Create Subscriber====>");
        subscriber = data;
        commonEvent.subscribe(subscriber, subscribeCallBack);
      })

      function unSubscribeCallback() {
        console.debug("====>UnSubscribe CallBack====>");
        setTimeout(() =>{
          done();
        },1000);
      }

      function timeout() {
        expect().assertFail();
        console.log('StartLanguageConfigTester timeout');
        commonEvent.unsubscribe(subscriber, unSubscribeCallback);
      }

      id = setTimeout(timeout, START_ABILITY_TIMEOUT);
      console.log('Start LanguageConfigTester ACTS_OnConfigurationUpdated_0500 timer id : ' + id);

      abilityManager.updateConfiguration(configDefault, (err, data) => {
        console.log('LanguageConfigTester ACTS_OnConfigurationUpdated_0500 updateConfiguration err：' +
        JSON.stringify(err));
        expect(err.code).assertEqual(0);
        console.log('LanguageConfigTester ACTS_OnConfigurationUpdated_0500 start Ability');
        startAbilityProcess(abilityContext, {
          startId: 0,
          stepNum: 1,
          nextStep: 0,
          step: ["StartA1"]
        });
      });

    })

    it('ACTS_OnConfigurationUpdated_0600', 0, async function (done) {
      console.log('ACTS_OnConfigurationUpdated_0600====<begin');
      var subscriber;
      var id;

      var configDefault = {
        language: "zh-Hans"
      };

      async function setLangConfig() {
        abilityManager.updateConfiguration(configDefault, (err, data) => {
          console.log('LanguageConfigTester ACTS_OnConfigurationUpdated_0600 updateConfiguration err：' +
          JSON.stringify(err));
          expect(err.code).assertEqual(0);
          console.log('LanguageConfigTester ACTS_OnConfigurationUpdated_0600 start Ability');
          commonEvent.unsubscribe(subscriber, unSubscribeCallback)
        });
      }

      function subscribeCallBack(err, data) {
        console.debug("====>Subscribe CallBack data:====>" + JSON.stringify(data));

        expect(data.event).assertEqual("UpdateLanguageFinish");
        clearTimeout(id);
        console.log('ACTS_OnConfigurationUpdated_0600 start set lang');
        setLangConfig();
      }

      commonEvent.createSubscriber(subscriberInfoMultiInstance).then(async (data) => {
        console.debug("====>Create Subscriber====>");
        subscriber = data;
        commonEvent.subscribe(subscriber, subscribeCallBack);
      })

      function unSubscribeCallback() {
        console.debug("====>UnSubscribe CallBack====>");
        setTimeout(() =>{
          done();
        },1000);
      }

      function timeout() {
        expect().assertFail();
        console.log('StartLanguageConfigTester timeout');
        commonEvent.unsubscribe(subscriber, unSubscribeCallback);
      }

      id = setTimeout(timeout, START_ABILITY_TIMEOUT);
      console.log('Start LanguageConfigTester ACTS_OnConfigurationUpdated_0600 timer id : ' + id);

      abilityManager.updateConfiguration(configDefault, (err, data) => {
        console.log('LanguageConfigTester ACTS_OnConfigurationUpdated_0600 updateConfiguration err：' +
        JSON.stringify(err));
        expect(err.code).assertEqual(0);
        console.log('LanguageConfigTester ACTS_OnConfigurationUpdated_0600 start Ability');
        startAbilityProcess(abilityContext, {
          startId: 0,
          stepNum: 1,
          nextStep: 0,
          step: ["StartA1"]
        });
      });
    })

    it('ACTS_OnConfigurationUpdated_0700', 0, async function (done) {
      console.log('ACTS_OnConfigurationUpdated_0700====<begin');
      var subscriber;
      var id;
      var configDefault = {
        language: "zh-Hans"
      };
      var configChange = {
        language: "en"
      };

      async function setLangConfig() {
        abilityManager.updateConfiguration(configChange, (err, data) => {
          console.log('LanguageConfigTester ACTS_OnConfigurationUpdated_0700 updateConfiguration err：' +
          JSON.stringify(err));
          expect(err.code).assertEqual(0);
          console.log('LanguageConfigTester ACTS_OnConfigurationUpdated_0700 start Ability');
          commonEvent.unsubscribe(subscriber, unSubscribeCallback)
        });
      }

      function subscribeCallBack(err, data) {
        console.debug("====>Subscribe CallBack data:====>" + JSON.stringify(data));

        if (data.event == "UpdateLanguageNext") {
          clearTimeout(id);
          console.log('ACTS_OnConfigurationUpdated_0700 start set lang');
          setLangConfig();
        } else if (data.event == "UpdateLanguageFinish") {
          console.log('ACTS_OnConfigurationUpdated_0700 called start next');
        }
      }

      commonEvent.createSubscriber(subscriberInfoMultiInstance).then(async (data) => {
        console.debug("====>Create Subscriber====>");
        subscriber = data;
        commonEvent.subscribe(subscriber, subscribeCallBack);
      })

      function unSubscribeCallback() {
        console.debug("====>UnSubscribe CallBack====>");
        setTimeout(() =>{
          done();
        },1000);
      }

      function timeout() {
        expect().assertFail();
        console.log('StartLanguageConfigTester timeout');
        commonEvent.unsubscribe(subscriber, unSubscribeCallback);
      }

      id = setTimeout(timeout, START_ABILITY_TIMEOUT);
      console.log('Start LanguageConfigTester ACTS_OnConfigurationUpdated_0700 timer id : ' + id);

      abilityManager.updateConfiguration(configDefault, (err, data) => {
        console.log('LanguageConfigTester ACTS_OnConfigurationUpdated_0700 updateConfiguration err：' +
        JSON.stringify(err));
        expect(err.code).assertEqual(0);
        console.log('LanguageConfigTester ACTS_OnConfigurationUpdated_0700 start Ability');
        startAbilityProcess(abilityContext, {
          startId: 0,
          stepNum: 3,
          nextStep: 0,
          step: ["StartA1", "StartA2", "StartB"]
        });
      });
    })

    it('ACTS_OnConfigurationUpdated_0800', 0, async function (done) {
      console.log('ACTS_OnConfigurationUpdated_0800====<begin');
      var subscriber;
      var id;
      var configDefault = {
        language: "zh-Hans"
      };
      var configChange = {
        language: "en"
      };

      async function setLangConfig() {
        abilityManager.updateConfiguration(configDefault, (err, data) => {
          console.log('LanguageConfigTester ACTS_OnConfigurationUpdated_0800 updateConfiguration err：' +
          JSON.stringify(err));
          expect(err.code).assertEqual(0);
          console.log('LanguageConfigTester ACTS_OnConfigurationUpdated_0800 start Ability');
          commonEvent.unsubscribe(subscriber, unSubscribeCallback)
        });
      }

      function subscribeCallBack(err, data) {
        console.debug("====>Subscribe CallBack data:====>" + JSON.stringify(data));

        if (data.event == "UpdateLanguageNext" ) {
          clearTimeout(id);
          console.log('ACTS_OnConfigurationUpdated_0800 start set lang');
          setLangConfig();
        } else if (data.event == "UpdateLanguageFinish") {
          console.log('ACTS_OnConfigurationUpdated_0800 called start Finish');
        }
      }

      commonEvent.createSubscriber(subscriberInfoMultiInstance).then(async (data) => {
        console.debug("====>Create Subscriber====>");
        subscriber = data;
        commonEvent.subscribe(subscriber, subscribeCallBack);
      })

      function unSubscribeCallback() {
        console.debug("====>UnSubscribe CallBack====>");
        setTimeout(() =>{
          done();
        },1000);
      }

      function timeout() {
        expect().assertFail();
        console.log('StartLanguageConfigTester timeout');
        commonEvent.unsubscribe(subscriber, unSubscribeCallback);
      }

      id = setTimeout(timeout, START_ABILITY_TIMEOUT);
      console.log('Start LanguageConfigTester ACTS_OnConfigurationUpdated_0800 timer id : ' + id);

      abilityManager.updateConfiguration(configDefault, (err, data) => {
        console.log('LanguageConfigTester ACTS_OnConfigurationUpdated_0800 updateConfiguration err：' +
        JSON.stringify(err));
        expect(err.code).assertEqual(0);
        console.log('LanguageConfigTester ACTS_OnConfigurationUpdated_0800 start Ability');
        startAbilityProcess(abilityContext, {
          startId: 0,
          stepNum: 3,
          nextStep: 0,
          step: ["StartA1", "StartA2", "StartB"]
        });
      });
    })



  })
}
