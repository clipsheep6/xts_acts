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
import missionManager from "@ohos.application.missionManager"
import commonEvent from '@ohos.commonevent'

var subscriberInfo_MainAbility = {
  events: ["MisssionManager2_getMissionInfos_CommonEvent"]
};

var subscriberInfo_MainAbility2 = {
  events: ["MisssionManager2_getMissionInfo_CommonEvent"]
};

var subscriberInfo_MainAbility3 = {
  events: ["MisssionManager2_registerMissionListener_CommonEvent"]
};

var subscriberInfo_MainAbility4 = {
  events: ["MisssionManager2_unregisterMissionListener_CommonEvent"]
};

export default function missionManagerTest(abilityContext) {
  describe('missionManagerTest', function () {

    /**
      * @tc.number: SUB_AA_OpenHarmony_MissionManager_0300
      * @tc.name:
      * @tc.desc:
      */
    it('SUB_AA_OpenHarmony_MissionManager_0300', 0, async function (done) {
      var TAG = "SUB_AA_OpenHarmony_MissionManager_0300";
      console.log(TAG + " --- start");
      missionManager.getMissionInfos('', "abcd", (err, data) => {
        console.log(TAG + " getMissionInfos: err = " + JSON.stringify(err) + " data = " + JSON.stringify(data));
        expect(err.code == -1).assertTrue();
        done();
      });
    });

    /**
      * @tc.number: SUB_AA_OpenHarmony_MissionManager_0400
      * @tc.name:
      * @tc.desc:
      */
    it('SUB_AA_OpenHarmony_MissionManager_0400', 0, async function (done) {
      var TAG = "SUB_AA_OpenHarmony_MissionManager_0400";
      console.log(TAG + " --- start");
      missionManager.getMissionInfos('', '', (err, data) => {
        console.log(TAG + " getMissionInfos: err = " + JSON.stringify(err) + " data = " + JSON.stringify(data));
        expect(err.code == -1).assertTrue();
        done();
      })
    });

    /**
      * @tc.number: SUB_AA_OpenHarmony_MissionManager_0500
      * @tc.name:
      * @tc.desc:
      */
    it('SUB_AA_OpenHarmony_MissionManager_0500', 0, async function (done) {
      var TAG = "SUB_AA_OpenHarmony_MissionManager_0500";
      console.log(TAG + " --- start");
      missionManager.getMissionInfo('', '', (err, data) => {
        console.log(TAG + " getMissionInfo: err = " + JSON.stringify(err) + " data = " + JSON.stringify(data));
        expect(err.code == -1).assertTrue();
        done();
      })
    });


    /**
      * @tc.number: SUB_AA_OpenHarmony_MissionManager_3600
      * @tc.name:
      * @tc.desc:
      */
    it('SUB_AA_OpenHarmony_MissionManager_3600', 0, async function (done) {
      var TAG = "SUB_AA_OpenHarmony_MissionManager_3600";
      console.log(TAG + " --- start");
      var Subscriber;

      abilityContext.startAbility({
        bundleName: "com.example.missionmanager2",
        abilityName: "com.example.missionmanager2.MainAbility"
      }, (error, data) => {
        console.log(TAG + ' - startAbility: ' + JSON.stringify(error) + ", " + JSON.stringify(data));
      });

      function SubscribeCallBack(err, data) {
        console.debug(TAG + " Subscribe CallBack data: " + JSON.stringify(data));
        if (data.event == 'MisssionManager2_getMissionInfos_CommonEvent') {
          var misssionError = data.parameters.missionError;
          console.log(TAG + " misssionError = " + JSON.stringify(misssionError));
          var missionData = data.parameters.missionData;
          console.log(TAG + " missionData = " + JSON.stringify(missionData));
          expect(misssionError.code != 0).assertTrue();
          setTimeout(function () {
            commonEvent.unsubscribe(Subscriber, UnSubscribeCallback);
          }, 500);
        }
      }

      commonEvent.createSubscriber(subscriberInfo_MainAbility).then(async (data) => {
        console.debug(TAG + " Create Subscriber");
        Subscriber = data;
        await commonEvent.subscribe(Subscriber, SubscribeCallBack);
      });

      function UnSubscribeCallback() {
        console.debug(TAG + " UnSubscribe CallBack");
        done();
      }
    });

    /**
      * @tc.number: SUB_AA_OpenHarmony_MissionManager_3700
      * @tc.name:
      * @tc.desc:
      */
    it('SUB_AA_OpenHarmony_MissionManager_3700', 0, async function (done) {
      var TAG = "SUB_AA_OpenHarmony_MissionManager_3700";
      console.log(TAG + " --- start");
      var Subscriber;

      abilityContext.startAbility({
        bundleName: "com.example.missionmanager2",
        abilityName: "com.example.missionmanager2.MainAbility"
      }, (error, data) => {
        console.log(TAG + ' - startAbility: ' + JSON.stringify(error) + ", " + JSON.stringify(data));
      });

      function SubscribeCallBack(err, data) {
        console.debug(TAG + " Subscribe CallBack data: " + JSON.stringify(data));
        if (data.event == 'MisssionManager2_getMissionInfo_CommonEvent') {
          var misssionError = data.parameters.missionError;
          console.log(TAG + " misssionError = " + JSON.stringify(misssionError));
          var missionData = data.parameters.missionData;
          console.log(TAG + " missionData = " + JSON.stringify(missionData));
          expect(misssionError.code != 0).assertTrue();
          setTimeout(function () {
            commonEvent.unsubscribe(Subscriber, UnSubscribeCallback);
          }, 500);
        }
      }

      commonEvent.createSubscriber(subscriberInfo_MainAbility2).then(async (data) => {
        console.debug(TAG + " Create Subscriber");
        Subscriber = data;
        await commonEvent.subscribe(Subscriber, SubscribeCallBack);
      });

      function UnSubscribeCallback() {
        console.debug(TAG + " UnSubscribe CallBack");
        done();
      }
    });

    /**
      * @tc.number: SUB_AA_OpenHarmony_MissionManager_3900
      * @tc.name:
      * @tc.desc:
      */
    it('SUB_AA_OpenHarmony_MissionManager_3900', 0, async function (done) {
      var TAG = "SUB_AA_OpenHarmony_MissionManager_3900";
      console.log(TAG + " --- start");
      var Subscriber;

      abilityContext.startAbility({
        bundleName: "com.example.missionmanager2",
        abilityName: "com.example.missionmanager2.MainAbility"
      }, (error, data) => {
        console.log(TAG + ' - startAbility: ' + JSON.stringify(error) + ", " + JSON.stringify(data));
      });

      function SubscribeCallBack(err, data) {
        console.debug(TAG + " Subscribe CallBack data: " + JSON.stringify(data));
        if (data.event == 'MisssionManager2_unregisterMissionListener_CommonEvent') {
          var missionError = data.parameters.missionError;
          console.log(TAG + " missionError = " + JSON.stringify(missionError));
          var missionData = data.parameters.missionData;
          console.log(TAG + " missionData = " + JSON.stringify(missionData));
          expect(missionError.code != 0).assertTrue();
          setTimeout(function () {
            commonEvent.unsubscribe(Subscriber, UnSubscribeCallback);
          }, 500);
        }
      }

      commonEvent.createSubscriber(subscriberInfo_MainAbility4).then(async (data) => {
        console.debug(TAG + " Create Subscriber");
        Subscriber = data;
        await commonEvent.subscribe(Subscriber, SubscribeCallBack);
      });

      function UnSubscribeCallback() {
        console.debug(TAG + " UnSubscribe CallBack");
        done();
      }
    });


    /**
      * @tc.number: SUB_AA_OpenHarmony_MissionManager_4100
      * @tc.name:
      * @tc.desc:
      */
    it('SUB_AA_OpenHarmony_MissionManager_4100', 0, async function (done) {
      var TAG = "SUB_AA_OpenHarmony_MissionManager_4100";
      console.log(TAG + " --- start");
      missionManager.getMissionInfos('aaa', 1, (err, data) => {
        console.log(TAG + ' - getMissionInfos: err = ' + JSON.stringify(err) + " data = " + JSON.stringify(data));
        expect(err.code != 0).assertTrue();
        done();
      });
    });

    /**
      * @tc.number: SUB_AA_OpenHarmony_MissionManager_4200
      * @tc.name:
      * @tc.desc:
      */
    it('SUB_AA_OpenHarmony_MissionManager_4200', 0, async function (done) {
      var TAG = "SUB_AA_OpenHarmony_MissionManager_4200";
      console.log(TAG + " --- start");
      missionManager.getMissionInfos('', 1, (err, data) => {
        console.log(TAG + ' - getMissionInfos: err = ' + JSON.stringify(err) + " data = " + JSON.stringify(data));
        expect(err.code == 0).assertTrue();
        done();
      });
    });

    /**
      * @tc.number: SUB_AA_OpenHarmony_MissionManager_4300
      * @tc.name:
      * @tc.desc:
      */
    it('SUB_AA_OpenHarmony_MissionManager_4300', 0, async function (done) {
      var TAG = "SUB_AA_OpenHarmony_MissionManager_4300";
      console.log(TAG + " --- start");
      missionManager.getMissionInfos('', 10, (err, data) => {
        console.log(TAG + ' - getMissionInfos: err = ' + JSON.stringify(err) + " data = " + JSON.stringify(data));
        expect(err.code == 0).assertTrue();
        done();
      });
    });

    /**
      * @tc.number: SUB_AA_OpenHarmony_MissionManager_4400
      * @tc.name:
      * @tc.desc:
      */
    it('SUB_AA_OpenHarmony_MissionManager_4400', 0, async function (done) {
      var TAG = "SUB_AA_OpenHarmony_MissionManager_4400";
      console.log(TAG + " --- start");
      missionManager.getMissionInfos('', 1000, (err, data) => {
        console.log(TAG + ' - getMissionInfos: err = ' + JSON.stringify(err) + " data = " + JSON.stringify(data));
        expect(err.code == 0).assertTrue();
        done();
      });
    });

    /**
      * @tc.number: SUB_AA_OpenHarmony_MissionManager_4500
      * @tc.name:
      * @tc.desc:
      */
    it('SUB_AA_OpenHarmony_MissionManager_4500', 0, async function (done) {
      var TAG = "SUB_AA_OpenHarmony_MissionManager_4500";
      console.log(TAG + " --- start");
      missionManager.getMissionInfos('', '', (err, data) => {
        console.log(TAG + ' - getMissionInfos: err = ' + JSON.stringify(err) + " data = " + JSON.stringify(data));
        expect(err.code != 0).assertTrue();
        done();
      });
    });

    /**
      * @tc.number: SUB_AA_OpenHarmony_MissionManager_4600
      * @tc.name:
      * @tc.desc:
      */
    it('SUB_AA_OpenHarmony_MissionManager_4600', 0, async function (done) {
      var TAG = "SUB_AA_OpenHarmony_MissionManager_4600";
      console.log(TAG + " --- start");
      missionManager.getMissionInfos('', '11', (err, data) => {
        console.log(TAG + ' - getMissionInfos: err = ' + JSON.stringify(err) + " data = " + JSON.stringify(data));
        expect(err.code != 0).assertTrue();
        done();
      });
    });

    /**
      * @tc.number: SUB_AA_OpenHarmony_MissionManager_4700
      * @tc.name:
      * @tc.desc:
      */
    it('SUB_AA_OpenHarmony_MissionManager_4700', 0, async function (done) {
      var TAG = "SUB_AA_OpenHarmony_MissionManager_4700";
      console.log(TAG + " --- start");
      missionManager.getMissionInfos('', 1.0, (err, data) => {
        console.log(TAG + ' - getMissionInfos: err = ' + JSON.stringify(err) + " data = " + JSON.stringify(data));
        expect(err.code == 0).assertTrue();
        done();
      });
    });

    /**
      * @tc.number: SUB_AA_OpenHarmony_MissionManager_4900
      * @tc.name:
      * @tc.desc:
      */
    it('SUB_AA_OpenHarmony_MissionManager_4900', 0, async function (done) {
      var TAG = "SUB_AA_OpenHarmony_MissionManager_4900";
      console.log(TAG + " --- start");
      missionManager.getMissionInfo('aa', 145, (err, data) => {
        console.log(TAG + ' - getMissionInfo: err = ' + JSON.stringify(err) + " data = " + JSON.stringify(data));
        expect(err.code != 0).assertTrue();
        done();
      });
    });


    /**
      * @tc.number: SUB_AA_OpenHarmony_MissionManager_5100
      * @tc.name:
      * @tc.desc:
      */
    it('SUB_AA_OpenHarmony_MissionManager_5100', 0, async function (done) {
      var TAG = "SUB_AA_OpenHarmony_MissionManager_5100";
      console.log(TAG + " --- start");
      missionManager.getMissionInfo('', 145, (err, data) => {
        console.log(TAG + ' - getMissionInfo: err = ' + JSON.stringify(err) + " data = " + JSON.stringify(data));
        expect(err.code == 0).assertTrue();
        done();
      });
    });

    /**
      * @tc.number: SUB_AA_OpenHarmony_MissionManager_5200
      * @tc.name:
      * @tc.desc:
      */
    it('SUB_AA_OpenHarmony_MissionManager_5200', 0, async function (done) {
      var TAG = "SUB_AA_OpenHarmony_MissionManager_5200";
      console.log(TAG + " --- start");
      missionManager.getMissionInfo('', 145236, (err, data) => {
        console.log(TAG + ' - getMissionInfo: err = ' + JSON.stringify(err) + " data = " + JSON.stringify(data));
        expect(err.code != 0).assertTrue();
        done();
      });
    });

    /**
      * @tc.number: SUB_AA_OpenHarmony_MissionManager_5300
      * @tc.name:
      * @tc.desc:
      */
    it('SUB_AA_OpenHarmony_MissionManager_5300', 0, async function (done) {
      var TAG = "SUB_AA_OpenHarmony_MissionManager_5300";
      console.log(TAG + " --- start");
      missionManager.getMissionInfo('', '', (err, data) => {
        console.log(TAG + ' - getMissionInfo: err = ' + JSON.stringify(err) + " data = " + JSON.stringify(data));
        expect(err.code != 0).assertTrue();
        done();
      });
    });

    /**
      * @tc.number: SUB_AA_OpenHarmony_MissionManager_5400
      * @tc.name:
      * @tc.desc:
      */
    it('SUB_AA_OpenHarmony_MissionManager_5400', 0, async function (done) {
      var TAG = "SUB_AA_OpenHarmony_MissionManager_5400";
      console.log(TAG + " --- start");
      missionManager.getMissionInfo('', '123', (err, data) => {
        console.log(TAG + ' - getMissionInfo: err = ' + JSON.stringify(err) + " data = " + JSON.stringify(data));
        expect(err.code != 0).assertTrue();
        done();
      });
    });

    /**
      * @tc.number: SUB_AA_OpenHarmony_MissionManager_5500
      * @tc.name:
      * @tc.desc:
      */
    it('SUB_AA_OpenHarmony_MissionManager_5500', 0, async function (done) {
      var TAG = "SUB_AA_OpenHarmony_MissionManager_5500";
      console.log(TAG + " --- start");
      missionManager.getMissionInfo('', 1.0, (err, data) => {
        console.log(TAG + ' - getMissionInfo: err = ' + JSON.stringify(err) + " data = " + JSON.stringify(data));
        expect(err.code == 0).assertTrue();
        done();
      });
    });

    /**
      * @tc.number: SUB_AA_OpenHarmony_MissionManager_5600
      * @tc.name:
      * @tc.desc:
      */
    it('SUB_AA_OpenHarmony_MissionManager_5600', 0, async function (done) {
      var TAG = "SUB_AA_OpenHarmony_MissionManager_5600";
      console.log(TAG + " --- start");
      var result = missionManager.registerMissionListener(undefined);
      console.log(TAG + " result = " + JSON.stringify(result));
      expect(result != undefined).assertTrue();
      done();
    });

    /**
      * @tc.number: SUB_AA_OpenHarmony_MissionManager_5700
      * @tc.name:
      * @tc.desc:
      */
    it('SUB_AA_OpenHarmony_MissionManager_5700', 0, async function (done) {
      var TAG = "SUB_AA_OpenHarmony_MissionManager_5700";
      console.log(TAG + " --- start");
      var result = missionManager.registerMissionListener({});
      console.log(TAG + " result = " + JSON.stringify(result));
      expect(result != undefined).assertTrue();
      done();
    });

    /**
      * @tc.number: SUB_AA_OpenHarmony_MissionManager_5800
      * @tc.name:
      * @tc.desc:
      */
    it('SUB_AA_OpenHarmony_MissionManager_5800', 0, async function (done) {
      var TAG = "SUB_AA_OpenHarmony_MissionManager_5800";
      console.log(TAG + " --- start");
      var result = missionManager.registerMissionListener({});
      var result2 = missionManager.registerMissionListener({});
      console.log(TAG + " result2 = " + JSON.stringify(result2));
      expect(result2 != undefined).assertTrue();
      done();
    });

    /**
      * @tc.number: SUB_AA_OpenHarmony_MissionManager_5900
      * @tc.name:
      * @tc.desc:
      */
    it('SUB_AA_OpenHarmony_MissionManager_5900', 0, async function (done) {
      var TAG = "SUB_AA_OpenHarmony_MissionManager_5900";
      console.log(TAG + " --- start");
      missionManager.unregisterMissionListener(14523, (err, data) => {
        console.log(TAG + " unregisterMissionListener: " + JSON.stringify(err) + " data = " + JSON.stringify(data));
        expect(err.code == 0).assertTrue();
        done();
      })
    });

    /**
      * @tc.number: SUB_AA_OpenHarmony_MissionManager_6000
      * @tc.name:
      * @tc.desc:
      */
    it('SUB_AA_OpenHarmony_MissionManager_6000', 0, async function (done) {
      var TAG = "SUB_AA_OpenHarmony_MissionManager_6000";
      console.log(TAG + " --- start");
      missionManager.unregisterMissionListener(2, (err, data) => {
        console.log(TAG + " unregisterMissionListener: " + JSON.stringify(err) + " data = " + JSON.stringify(data));
        expect(err.code == 0).assertTrue();
        done();
      })
    });

    /**
      * @tc.number: SUB_AA_OpenHarmony_MissionManager_6100
      * @tc.name:
      * @tc.desc:
      */
    it('SUB_AA_OpenHarmony_MissionManager_6100', 0, async function (done) {
      var TAG = "SUB_AA_OpenHarmony_MissionManager_6100";
      console.log(TAG + " --- start");
      missionManager.unregisterMissionListener(2, (err, data) => {
        console.log(TAG + " unregisterMissionListener: " + JSON.stringify(err) + " data = " + JSON.stringify(data));
        expect(err.code == 0).assertTrue();
        done();
      })
    });

    /**
      * @tc.number: SUB_AA_OpenHarmony_MissionManager_6200
      * @tc.name:
      * @tc.desc:
      */
    it('SUB_AA_OpenHarmony_MissionManager_6200', 0, async function (done) {
      var TAG = "SUB_AA_OpenHarmony_MissionManager_6200";
      console.log(TAG + " --- start");
      missionManager.unregisterMissionListener(undefined, (err, data) => {
        console.log(TAG + " unregisterMissionListener: " + JSON.stringify(err) + " data = " + JSON.stringify(data));
        expect(err.code != 0).assertTrue();
        done();
      })
    });

    /**
      * @tc.number: SUB_AA_OpenHarmony_MissionManager_6300
      * @tc.name:
      * @tc.desc:
      */
    it('SUB_AA_OpenHarmony_MissionManager_6300', 0, async function (done) {
      var TAG = "SUB_AA_OpenHarmony_MissionManager_6300";
      console.log(TAG + " --- start");
      missionManager.unregisterMissionListener('', (err, data) => {
        console.log(TAG + " unregisterMissionListener: " + JSON.stringify(err) + " data = " + JSON.stringify(data));
        expect(err.code != 0).assertTrue();
        done();
      })
    });

    /**
      * @tc.number: SUB_AA_OpenHarmony_MissionManager_6400
      * @tc.name:
      * @tc.desc:
      */
    it('SUB_AA_OpenHarmony_MissionManager_6400', 0, async function (done) {
      var TAG = "SUB_AA_OpenHarmony_MissionManager_6400";
      console.log(TAG + " --- start");
      missionManager.unregisterMissionListener('123', (err, data) => {
        console.log(TAG + " unregisterMissionListener: " + JSON.stringify(err) + " data = " + JSON.stringify(data));
        expect(err.code != 0).assertTrue();
        done();
      })
    });

    /**
      * @tc.number: SUB_AA_OpenHarmony_MissionManager_6500
      * @tc.name:
      * @tc.desc:
      */
    it('SUB_AA_OpenHarmony_MissionManager_6500', 0, async function (done) {
      var TAG = "SUB_AA_OpenHarmony_MissionManager_6500";
      console.log(TAG + " --- start");
      missionManager.unregisterMissionListener(3.0, (err, data) => {
        console.log(TAG + " unregisterMissionListener: " + JSON.stringify(err) + " data = " + JSON.stringify(data));
        expect(err.code == 0).assertTrue();
        done();
      })
    });


  })
}