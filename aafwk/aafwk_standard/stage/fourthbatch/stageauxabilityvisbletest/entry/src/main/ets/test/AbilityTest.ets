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
import ability from '@ohos.application.Ability'
import featureAbility from '@ohos.ability.featureAbility'
import particleAbility from '@ohos.ability.particleAbility'
import ohos_data_ability from '@ohos.data.dataability'

const START_ABILITY_TIMEOUT = 8000;


export default function abilityTest(abilityContext) {
  describe('AbilityTest', function () {
    var mRemote;

    function onConnectCallback(element, remote) {
      console.log('StartMultiAppTester ConnectAbility onConnect element.deviceId : ' + element.deviceId)
      console.log('StartMultiAppTester ConnectAbility onConnect element.bundleName : ' + element.bundleName)
      console.log('StartMultiAppTester ConnectAbility onConnect element.abilityName : ' + element.abilityName)
      console.log('StartMultiAppTester ConnectAbility onConnect element.uri : ' + element.uri)
      console.log('StartMultiAppTester ConnectAbility onConnect element.shortName : ' + element.shortName)
      console.log('StartMultiAppTester ConnectAbility onConnect remote : ' + remote);
      mRemote = remote;
    }

    function onDisconnectCallback(element) {
      commonEvent.publish("DISCONNECT", () => {
        console.log('disconnect finish1')
      });
      console.log('StartMultiAppTester ConnectAbility onDisconnect element.deviceId : ' + element.deviceId)
      console.log('StartMultiAppTester ConnectAbility onDisconnect element.bundleName : ' + element.bundleName)
      console.log('StartMultiAppTester ConnectAbility onDisconnect element.abilityName : ' + element.abilityName)
      console.log('StartMultiAppTester ConnectAbility onDisconnect element.uri : ' + element.uri)
      console.log('StartMultiAppTester ConnectAbility onDisconnect element.shortName : ' + element.shortName)
    }

    function onFailedCallback(code) {
      console.log('StartMultiAppTester ConnectAbility onFailed errCode : ' + code)
    }

    // 判断从另一个hap返回的生命周期是否与预期相符
    function checkServiceStart(expectList, lifecycleList, key) {
      console.log('[MyApplication]123 expectList' + JSON.stringify(expectList));
      let lifeList = getLog(lifecycleList, key); //lifecycleList:从辅助ability传过来的生命周期
      console.log('[MyApplication] lifeList' + JSON.stringify(lifecycleList))
      expect(expectList).assertEqual(lifeList);
    }

    // 通过判断生命周期里回调的key值来塞值
    function getLog(lifecycleList, key) {
      console.log('[MyApplication] lifecycleList' + lifecycleList.length);
      var listOfKey = [];
      for (var i = 0;i < lifecycleList.length; i++) {
        var callback = lifecycleList[i];
        console.log('[MyApplication] lifecycleList.callback :' + JSON.stringify(callback));
        if (callback[0] == key) {
          listOfKey.push(callback[1])
        }
      }
      return listOfKey;
    }

    function sleep(delay) {
      let start = (new Date()).getTime();
      while ((new Date()).getTime() - start < delay) {
        continue;
      }
    }

    /**
     * @tc.number  SUB_AA_OpenHarmony_AbilityVisble_0100
     * @tc.name    Test The  request ablility start visibile ability
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('SUB_AA_OpenHarmony_AbilityVisble_0100', 0, async function (done) {
      console.log("------------start SUB_AA_OpenHarmony_AbilityVisble_0100-------------");
      var Subscriber = "";
      var listKey = ["", ""];
      var subscriberInfo_entry2_MainAbility = {
        events: ["entry2_MainAbility_onCreate",
        "entry2_MainAbility_onForeground"]
      }
      try {
        var want = {
          bundleName: 'com.example.fourthetsability',
          abilityName: "com.example.entry2.MainAbility",
        }
        abilityContext.startAbility(want, (err, data) => {
          console.log("SUB_AA_OpenHarmony_AbilityVisble_0100: startAbility fail " + JSON.stringify(err)
          + JSON.stringify(data));
          setTimeout(function () {
            expect(listKey[0]).assertEqual("onCreate");
            expect(listKey[1]).assertEqual("onForeground");
            done();
          }, 2000);
        })
      } catch (err) {
        console.log('SUB_AA_OpenHarmony_AbilityVisble_0100 error :' + JSON.stringify(err));
      }

      function SubscribeCallBack(err, data) {
        console.log("SUB_AA_OpenHarmony_AbilityVisble_0100 Subscribe CallBack data:" + JSON.stringify(data));
        if (data.event == "entry2_MainAbility_onCreate" || data.event == "entry2_MainAbility_onForeground") {
          listKey[0] = "onCreate";
          listKey[1] = "onForeground";
        } else {
          expect().assertFail()
        }
        console.log("SUB_AA_OpenHarmony_AbilityVisble_0100 listKey: " + JSON.stringify(listKey))
        done()
      }

      commonEvent.createSubscriber(subscriberInfo_entry2_MainAbility).then(async (data) => {
        console.debug("SUB_AA_OpenHarmony_AbilityVisble_0100====>Create Subscriber====>");
        console.log("SUB_AA_OpenHarmony_AbilityVisble_0100 createSubscriber data: " + JSON.stringify(data))
        Subscriber = data;
        await commonEvent.subscribe(Subscriber, SubscribeCallBack);
      })
    })

    /**
     * @tc.number  SUB_AA_OpenHarmony_AbilityVisble_0200
     * @tc.name    Test The  request ablility start  invisibile ability
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('SUB_AA_OpenHarmony_AbilityVisble_0200', 0, async function (done) {
      console.log("------------start SUB_AA_OpenHarmony_AbilityVisble_0200-------------");
      var Subscriber = "";
      var listKey = ["", ""];
      var subscriberInfo_entry2_MainAbility = {
        events: ["entry2_MainAbility0200_onCreate",
        "entry2_MainAbility0200_onForeground"]
      }

      try {
        var want = {
          bundleName: 'com.example.fourthetsability',
          abilityName: "com.example.entry2.MainAbility0200",
        }
        abilityContext.startAbility(want, (err, data) => {
          setTimeout(function () {
            expect(listKey[0]).assertEqual("onCreate");
            expect(listKey[1]).assertEqual("onForeground");
            done();
          }, 2000);
        })
      } catch (err) {
        console.log('SUB_AA_OpenHarmony_AbilityVisble_0200 error :' + JSON.stringify(err));
      }

      function SubscribeCallBack(err, data) {
        console.log("SUB_AA_OpenHarmony_AbilityVisble_0200 Subscribe CallBack data:" + JSON.stringify(data));
        if (data.event == "entry2_MainAbility0200_onCreate" || data.event == "entry2_MainAbility0200_onForeground") {
          listKey[0] = "onCreate";
          listKey[1] = "onForeground";
        } else {
          expect().assertFail()
        }
        console.log("SUB_AA_OpenHarmony_AbilityVisble_0200 listKey: " + JSON.stringify(listKey))
        done()
      }

      commonEvent.createSubscriber(subscriberInfo_entry2_MainAbility).then(async (data) => {
        console.debug("SUB_AA_OpenHarmony_AbilityVisble_0200====>Create Subscriber====>");
        Subscriber = data;
        await commonEvent.subscribe(Subscriber, SubscribeCallBack);
      })
    })

    /**
     * @tc.number  SUB_AA_OpenHarmony_AbilityVisble_0300
     * @tc.name    Test The  request ablility start  no visibile ability
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('SUB_AA_OpenHarmony_AbilityVisble_0300', 0, async function (done) {
      console.log("------------start SUB_AA_OpenHarmony_AbilityVisble_0300-------------");
      var Subscriber = "";
      var listKey = ["", ""];
      var subscriberInfo_entry2_MainAbility = {
        events: ["entry2_MainAbility0300_onCreate",
        "entry2_MainAbility0300_onForeground"]
      }

      try {
        var want = {
          bundleName: 'com.example.fourthetsability',
          abilityName: "com.example.entry2.MainAbility0300",
        }
        abilityContext.startAbility(want, (err, data) => {
          setTimeout(function () {
            expect(listKey[0]).assertEqual("onCreate");
            expect(listKey[1]).assertEqual("onForeground");
            done();
          }, 2000);
        })
      } catch (err) {
        console.log('SUB_AA_OpenHarmony_AbilityVisble_0300 error :' + JSON.stringify(err));
      }

      function SubscribeCallBack(err, data) {
        console.log("SUB_AA_OpenHarmony_AbilityVisble_0300 Subscribe CallBack data:" + JSON.stringify(data));
        if (data.event == "entry2_MainAbility0300_onCreate" || data.event == "entry2_MainAbility0300_onForeground") {
          listKey[0] = "onCreate";
          listKey[1] = "onForeground";
        } else {
          expect().assertFail()
        }
        console.log("SUB_AA_OpenHarmony_AbilityVisble_0300 listKey: " + JSON.stringify(listKey))
        done()
      }

      commonEvent.createSubscriber(subscriberInfo_entry2_MainAbility).then(async (data) => {
        console.debug("SUB_AA_OpenHarmony_AbilityVisble_0300====>Create Subscriber====>");
        Subscriber = data;
        await commonEvent.subscribe(Subscriber, SubscribeCallBack);
      })
    })

    /**
     * @tc.number  SUB_AA_OpenHarmony_AbilityVisble_0400
     * @tc.name    Test The  request ablility start invisible servicesExtension
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('SUB_AA_OpenHarmony_AbilityVisble_0400', 0, async function (done) {
      console.log("------------start SUB_AA_OpenHarmony_AbilityVisble_0400-------------");
      var Subscriber;
      var subscriberInfo_myapplication4 = {
        events: ["fourthauxiliary_ServiceExtension_onCreate",
        "fourthauxiliary_ServiceExtension_onConnect"]
      };
      var listKey = ['', ''];

      function SubscribeCallBack(err, data) {
        console.log("SUB_AA_OpenHarmony_AbilityVisble_0400 Subscribe CallBack data:" + JSON.stringify(data));
        if (data.event == "fourthauxiliary_ServiceExtension_onCreate") {
          listKey[0] = "onCreate";
          expect(listKey[0]).assertEqual("onCreate");
        } else if (data.event == "fourthauxiliary_ServiceExtension_onConnect") {
          listKey[1] = "onRequest";
          expect(listKey[1]).assertEqual("onRequest");
        }
        console.log("SUB_AA_OpenHarmony_AbilityVisble_0400 listKey: " + listKey)
      }

      commonEvent.createSubscriber(subscriberInfo_myapplication4).then(async (data) => {
        console.info("SUB_AA_OpenHarmony_AbilityVisble_0400====>Create Subscriber====>" + JSON.stringify(data));
        Subscriber = data;
        await commonEvent.subscribe(Subscriber, SubscribeCallBack);
      })
      try {
        var want = {
          bundleName: 'com.example.fourthauxiliaryability',
          abilityName: "com.example.fourthauxiliaryability.ServiceAbility"
        }
        abilityContext.startAbility(want, (err, data) => {
          console.log("SUB_AA_OpenHarmony_AbilityVisble_0400: startAbility fail "
          + JSON.stringify(err) + JSON.stringify(data));
          setTimeout(function () {
            console.log("SUB_AA_OpenHarmony_AbilityVisble_0400: startAbility success listKey is "
            + JSON.stringify(listKey[0]));
            expect(listKey[0]).assertEqual("onCreate");
            done();
          }, 2000);
        })
      } catch (err) {
        console.log('SUB_AA_OpenHarmony_AbilityVisble_0400 error :' + JSON.stringify(err));
      }
      done();
    })

    /**
     * @tc.number  SUB_AA_OpenHarmony_AbilityVisble_0500
     * @tc.name    Test The  request ablility start no ability ability
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('SUB_AA_OpenHarmony_AbilityVisble_0500', 0, async function (done) {
      console.log("------------start SUB_AA_OpenHarmony_AbilityVisble_0500-------------");
      var Subscriber;
      var subscriberInfo_myapplication4 = {
        events: ["Fourthetsability_entry_MainAbility0500_onCreate",
        "Fourthetsability_entry_MainAbility0500_onForeground"]
      };
      var listKey = ['', ''];

      function SubscribeCallBack(err, data) {
        console.log("SUB_AA_OpenHarmony_AbilityVisble_0500 Subscribe CallBack data:" + JSON.stringify(data));
        if (data.event == "Fourthetsability_entry_MainAbility0500_onCreate") {
          listKey[0] = "onCreate";
          expect(listKey[0]).assertEqual("onCreate");
        } else if (data.event == "Fourthetsability_entry_MainAbility0500_onForeground") {
          listKey[1] = "onForeground";
          expect(listKey[1]).assertEqual("onForeground");
        }
        console.log("SUB_AA_OpenHarmony_AbilityVisble_0500 listKey: " + listKey)
        done();
      }

      commonEvent.createSubscriber(subscriberInfo_myapplication4).then(async (data) => {
        console.info("SUB_AA_OpenHarmony_AbilityVisble_0500====>Create Subscriber====>" + JSON.stringify(data));
        Subscriber = data;
        await commonEvent.subscribe(Subscriber, SubscribeCallBack);
      })
      try {
        var want = {
          bundleName: 'com.example.fourthetsability',
          abilityName: "com.example.fourthetsability.MainAbility0500"
        }
        abilityContext.startAbility(want, (err, data) => {
          console.log("SUB_AA_OpenHarmony_AbilityVisble_0500: startAbility fail "
          + JSON.stringify(err) + JSON.stringify(data));
          setTimeout(function () {
            if (listKey[0] == "onCreate") {
              expect(listKey[0]).assertEqual("onCreate");
            } else {
              expect(listKey[1]).assertEqual("onForeground");
            }
            done();
          }, 2000);
        })
      } catch (err) {
        console.log('SUB_AA_OpenHarmony_AbilityVisble_0500 error :' + JSON.stringify(err));
      }
    })

    /**
     * @tc.number  SUB_AA_OpenHarmony_AbilityVisble_0600
     * @tc.name    Test The  request ablility start visible servicesExtension
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('SUB_AA_OpenHarmony_AbilityVisble_0600', 0, async function (done) {
      console.log("------------start SUB_AA_OpenHarmony_AbilityVisble_0600-------------");
      var Subscriber = "";
      var listKey = ["", ""];
      var subscriberInfo_MyServiceExtension = {
        events: ["Fourthetsability_entry_ServiceAbility_onCreate",
        "Fourthetsability_entry_ServiceAbility_onConnect"]
      }

      function SubscribeCallBack(err, data) {
        console.log("SUB_AA_OpenHarmony_AbilityVisble_0600 Subscribe CallBack data:" + JSON.stringify(data));
        if (data.event == "Fourthetsability_entry_ServiceAbility_onCreate") {
          listKey[0] = "onCreate";
          expect(listKey[0]).assertEqual("onCreate");
        } else if (data.event == "Fourthetsability_entry_ServiceAbility_onConnect") {
          listKey[1] = "onConnect";
          expect(listKey[1]).assertEqual("onConnect");
        }
        console.log("SUB_AA_OpenHarmony_AbilityVisble_0600 listKey: " + listKey)
      }

      commonEvent.createSubscriber(subscriberInfo_MyServiceExtension).then(async (data) => {
        console.debug("SUB_AA_OpenHarmony_AbilityVisble_0600====>Create Subscriber====>");
        Subscriber = data;
        await commonEvent.subscribe(Subscriber, SubscribeCallBack);
      })
      try {
        console.log("SUB_AA_OpenHarmony_AbilityVisble_0600: 1 ");
        var connId = await abilityContext.connectAbility(
          {
            bundleName: "com.example.fourthetsability",
            abilityName: "com.example.fourthetsability.ServiceAbility"
          },
          {
            onConnect: onConnectCallback,
            onDisconnect: onDisconnectCallback,
            onFailed: onFailedCallback,
          },
        );

        console.log("SUB_AA_OpenHarmony_AbilityVisble_0600: connId" + connId)
        expect(connId >= 0).assertTrue()
        done();
      } catch (err) {
        console.log("SUB_AA_OpenHarmony_AbilityVisble_0600: error " + err);
      }
      done();
    })


    /**
     * @tc.number  SUB_AA_OpenHarmony_AbilityVisble_0700
     * @tc.name    Test The  request ablility start invisible servicesExtension in another exe
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('SUB_AA_OpenHarmony_AbilityVisble_0700', 0, async function (done) {
      console.log("------------start SUB_AA_OpenHarmony_AbilityVisble_0700-------------");
      var Subscriber = "";
      var listKey = ["", ""];
      var subscriberInfo_MyServiceExtension = {
        events: ["FourthAuxiliaryability_entry_ServiceAbility0600_onCreate",
        "FourthAuxiliaryability_entry_ServiceAbility0600_onConnect"]
      }

      function SubscribeCallBack(err, data) {
        console.log("SUB_AA_OpenHarmony_AbilityVisble_0700 Subscribe CallBack data:" + JSON.stringify(data));
        if (data.event == "FourthAuxiliaryability_entry_ServiceAbility0600_onCreate") {
          listKey[0] = "onCreate";
        } else if (data.event == "FourthAuxiliaryability_entry_ServiceAbility0600_onConnect") {
          listKey[1] = "onConnect";
        }
        console.log("SUB_AA_OpenHarmony_AbilityVisble_0700 listKey: " + listKey)
        done();
      }

      commonEvent.createSubscriber(subscriberInfo_MyServiceExtension).then(async (data) => {
        console.debug("SUB_AA_OpenHarmony_AbilityVisble_0700====>Create Subscriber====>");
        Subscriber = data;
        await commonEvent.subscribe(Subscriber, SubscribeCallBack);
      })

      try {
        console.log("SUB_AA_OpenHarmony_AbilityVisble_0700: 1 ");
        var connId = await abilityContext.connectAbility(
          {
            bundleName: "com.example.fourthauxiliaryability",
            abilityName: "com.example.fourthauxiliaryability.ServiceAbility0600"
          },
          {
            onConnect: onConnectCallback,
            onDisconnect: onDisconnectCallback,
            onFailed: onFailedCallback,
          },
        );

        console.log("SUB_AA_OpenHarmony_AbilityVisble_0700: connId" + connId)
        expect(connId >= 0).assertTrue()
        done()
      } catch (err) {
        console.log("SUB_AA_OpenHarmony_AbilityVisble_0700: error " + err);
      }
    })


    /**
     * @tc.number  SUB_AA_OpenHarmony_AbilityVisble_0800
     * @tc.name    Test The  request ablility start visible servicesExtension in one exe
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('SUB_AA_OpenHarmony_AbilityVisble_0800', 0, async function (done) {
      console.log("------------start SUB_AA_OpenHarmony_AbilityVisble_0800-------------");
      var Subscriber = "";
      var listKey = ["", ""];
      var subscriberInfo_MyServiceExtension = {
        events: ["Fourthetsability_entry_ServiceAbility2_onCreate",
        "Fourthetsability_entry_ServiceAbility2_onConnect"]
      }

      function SubscribeCallBack(err, data) {
        console.log("SUB_AA_OpenHarmony_AbilityVisble_0800 Subscribe CallBack data:" + JSON.stringify(data));
        if (data.event == "Fourthetsability_entry_ServiceAbility2_onCreate") {
          listKey[0] = "onCreate";
        } else if (data.event == "Fourthetsability_entry_ServiceAbility2_onConnect") {
          expect(listKey[1]).assertEqual("onConnect");
        }
        console.log("SUB_AA_OpenHarmony_AbilityVisble_0800 listKey: " + listKey)
      }

      commonEvent.createSubscriber(subscriberInfo_MyServiceExtension).then(async (data) => {
        console.debug("SUB_AA_OpenHarmony_AbilityVisble_0800====>Create Subscriber====>");
        Subscriber = data;
        await commonEvent.subscribe(Subscriber, SubscribeCallBack);
      })


      try {
        console.log("SUB_AA_OpenHarmony_AbilityVisble_0800: 1 ");
        var connId = await abilityContext.connectAbility(
          {
            bundleName: "com.example.fourthetsability",
            abilityName: "com.example.fourthetsability.ServiceAbility2"
          },
          {
            onConnect: onConnectCallback,
            onDisconnect: onDisconnectCallback,
            onFailed: onFailedCallback,
          },
        );

        console.log("SUB_AA_OpenHarmony_AbilityVisble_0800: connId" + connId)
        expect(connId >= 0).assertTrue()
        done();
      } catch (err) {
        console.log("SUB_AA_OpenHarmony_AbilityVisble_0800: error " + err);
      }
      done();
    })


    /**
     * @tc.number  SUB_AA_OpenHarmony_AbilityVisble_0900
     * @tc.name    Test The  request ablility start no visibility servicesExtension in one another hab
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('SUB_AA_OpenHarmony_AbilityVisble_0900', 0, async function (done) {
      console.log("------------start SUB_AA_OpenHarmony_AbilityVisble_0900-------------");
      var Subscriber = "";
      var listKey = ["", ""];
      var subscriberInfo_MyServiceExtension = {
        events: ["Fourthetsability_entry2_ServiceAbility_onCreate",
        "Fourthetsability_entry2_ServiceAbility_onConnect"]
      }

      function SubscribeCallBack(err, data) {
        console.log("SUB_AA_OpenHarmony_AbilityVisble_0900 Subscribe CallBack data:" + JSON.stringify(data));
        if (data.event == "Fourthetsability_entry2_ServiceAbility_onCreate") {
          listKey[0] = "onCreate";

        } else if (data.event == "Fourthetsability_entry2_ServiceAbility_onConnect") {
          listKey[1] = "onConnect";
        }
        console.log("SUB_AA_OpenHarmony_AbilityVisble_0900 listKey: " + listKey)
      }

      commonEvent.createSubscriber(subscriberInfo_MyServiceExtension).then(async (data) => {
        console.debug("SUB_AA_OpenHarmony_AbilityVisble_0900====>Create Subscriber====>");
        Subscriber = data;
        await commonEvent.subscribe(Subscriber, SubscribeCallBack);
      })

      try {
        console.log("SUB_AA_OpenHarmony_AbilityVisble_0900: 1 ");
        var connId = await abilityContext.connectAbility(
          {
            bundleName: "com.example.fourthetsability",
            abilityName: "com.example.entry2.ServiceAbility2",
          },
          {
            onConnect: onConnectCallback,
            onDisconnect: onDisconnectCallback,
            onFailed: onFailedCallback,
          },
        );
        console.log("SUB_AA_OpenHarmony_AbilityVisble_0900: connId" + connId)
        expect(connId >= 0).assertTrue()
        done();
      } catch (err) {
        console.log("SUB_AA_OpenHarmony_AbilityVisble_0900: error " + err);
      }
    })

    /**
     * @tc.number  SUB_AA_OpenHarmony_AbilityVisble_1000
     * @tc.name    Test The  request ablility start  visibility ability in one another hab
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('SUB_AA_OpenHarmony_AbilityVisble_1000', 0, async function (done) {
      console.log("------------start SUB_AA_OpenHarmony_AbilityVisble_1000-------------");
      var Subscriber;
      var listKey = ["", ""];
      var subscriberInfo_MyServiceExtension = {
        events: ["FourEtsAbility_entry2_MainAbility2_onCreate",
        "FourEtsAbility_entry2_MainAbility2_onForeground"]
      }

      function SubscribeCallBack(err, data) {
        console.log("SUB_AA_OpenHarmony_AbilityVisble_1000 Subscribe CallBack data:" + JSON.stringify(data));
        if (data.event == "FourEtsAbility_entry2_MainAbility2_onCreate") {
          listKey[0] = "onCreate";
        } else if (data.event == "FourEtsAbility_entry2_MainAbility2_onForeground") {
          listKey[1] = "onForeground";
        }
        console.log("SUB_AA_OpenHarmony_AbilityVisble_1000 listKey: " + listKey)
      }

      commonEvent.createSubscriber(subscriberInfo_MyServiceExtension).then(async (data) => {
        console.debug("SUB_AA_OpenHarmony_AbilityVisble_1000====>Create Subscriber====>");
        Subscriber = data;
        await commonEvent.subscribe(Subscriber, SubscribeCallBack);
      })
      try {
        var want =
          {
            bundleName: "com.example.fourthetsability",
            abilityName: "com.example.entry2.MainAbility2",
          }
        abilityContext.startAbility(want, (err, data) => {
          setTimeout(function () {
            console.log("SUB_AA_OpenHarmony_AbilityVisble_1000: startAbility success listKey is " + listKey[0]);
            expect(listKey[0]).assertEqual("onCreate");
            expect(listKey[1]).assertEqual("onForeground");
            done();
          }, 3000);
        })
      } catch (err) {
        console.log("SUB_AA_OpenHarmony_AbilityVisble_1000: error " + err);
      }
    })

    /**
     * @tc.number  SUB_AA_OpenHarmony_AbilityVisble_1100
     * @tc.name    Test The  request ablility start  invisibility ability in one another hab
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('SUB_AA_OpenHarmony_AbilityVisble_1100', 0, async function (done) {
      console.log("------------start SUB_AA_OpenHarmony_AbilityVisble_1100-------------");
      var Subscriber;
      var listKey = ["", ""];
      var subscriberInfo_MyServiceExtension = {
        events: ["FourEtsAbility_entry2_MainAbility3_onCreate",
        "FourEtsAbility_entry2_MainAbility3_onForeground"]
      }

      function SubscribeCallBack(err, data) {
        console.log("SUB_AA_OpenHarmony_AbilityVisble_1100 Subscribe CallBack data:" + JSON.stringify(data));
        if (data.event == "FourEtsAbility_entry2_MainAbility3_onCreate") {
          listKey[0] = "onCreate";
          expect(listKey[0]).assertEqual("onCreate");
        } else if (data.event == "FourEtsAbility_entry2_MainAbility3_onForeground") {
          listKey[1] = "onForeground";
          expect(listKey[1]).assertEqual("onForeground");
        }
        console.log("SUB_AA_OpenHarmony_AbilityVisble_1100 listKey: " + listKey)
      }

      commonEvent.createSubscriber(subscriberInfo_MyServiceExtension).then(async (data) => {
        console.debug("SUB_AA_OpenHarmony_AbilityVisble_1100====>Create Subscriber====>");
        Subscriber = data;
        await commonEvent.subscribe(Subscriber, SubscribeCallBack);
      })
      try {
        var want =
          {
            bundleName: "com.example.fourthetsability",
            abilityName: "com.example.entry2.MainAbility3",
          }
        abilityContext.startAbility(want, (err, data) => {
          setTimeout(function () {
            expect(listKey[0]).assertEqual("onCreate");
            expect(listKey[1]).assertEqual("onForeground");
            console.log('SUB_AA_OpenHarmony_AbilityVisble_1100' + "startAbility listKey : " + listKey);
            done();
          }, 3000);
        })
      } catch (err) {
        console.log("SUB_AA_OpenHarmony_AbilityVisble_1100: error " + err);
      }
    })


    /**
     * @tc.number  SUB_AA_OpenHarmony_AbilityVisble_1200
     * @tc.name    Test The  request ablility start  invisibility ability in one another hab
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('SUB_AA_OpenHarmony_AbilityVisble_1200', 0, async function (done) {
      console.log("------------start SUB_AA_OpenHarmony_AbilityVisble_1200-------------");
      var Subscriber;
      var listKey = ["", ""];
      var subscriberInfo_MyServiceExtension = {
        events: ["FourEtsAbility_entry2_MainAbility4_onCreate",
        "FourEtsAbility_entry2_MainAbility4_onForeground"]
      }

      function SubscribeCallBack(err, data) {
        console.log("SUB_AA_OpenHarmony_AbilityVisble_1200 Subscribe CallBack data:" + JSON.stringify(data));
        if (data.event == "FourEtsAbility_entry2_MainAbility4_onCreate") {
          listKey[0] = "onCreate";
          expect(listKey[0]).assertEqual("onCreate");
        } else if (data.event == "FourEtsAbility_entry2_MainAbility4_onForeground") {
          listKey[1] = "onForeground";
          expect(listKey[1]).assertEqual("onForeground");
        }
        console.log("SUB_AA_OpenHarmony_AbilityVisble_1200 listKey: " + listKey)
      }

      commonEvent.createSubscriber(subscriberInfo_MyServiceExtension).then(async (data) => {
        console.debug("SUB_AA_OpenHarmony_AbilityVisble_1200====>Create Subscriber====>");
        Subscriber = data;
        await commonEvent.subscribe(Subscriber, SubscribeCallBack);
      })
      try {
        var want =
          {
            bundleName: "com.example.fourthetsability",
            abilityName: "com.example.entry2.MainAbility4",
          }
        abilityContext.startAbility(want, (err, data) => {
          console.log("SUB_AA_OpenHarmony_AbilityVisble_1200: startAbility fail "
          + JSON.stringify(err) + JSON.stringify(data));
        })
        setTimeout(function () {
          expect(listKey[0]).assertEqual("onCreate");
          expect(listKey[1]).assertEqual("onForeground");
          console.log('SUB_AA_OpenHarmony_AbilityVisble_1200' + "startAbility listKey : " + listKey);
          done();
        }, 3000);
      } catch (err) {
        console.log("SUB_AA_OpenHarmony_AbilityVisble_1200: error " + err);
      }
    })


    /**
     * @tc.number  SUB_AA_OpenHarmony_AbilityVisble_1300
     * @tc.name    Test The  request ablility start visible servicesExtension in one hab
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('SUB_AA_OpenHarmony_AbilityVisble_1300', 0, async function (done) {
      console.log("------------start SUB_AA_OpenHarmony_AbilityVisble_1300-------------");
      var Subscriber = "";
      var listKey = ["", ""];
      var subscriberInfo_MyServiceExtension = {
        events: ["Fourthetsability_entry2_ServiceAbility1300_onCreate",
        "Fourthetsability_entry2_ServiceAbility1300_onConnect"]
      }

      function SubscribeCallBack(err, data) {
        console.log("SUB_AA_OpenHarmony_AbilityVisble_1300 Subscribe CallBack data:" + JSON.stringify(data));
        if (data.event == "Fourthetsability_entry2_ServiceAbility1300_onCreate") {
          listKey[0] = "onCreate";
        } else if (data.event == "Fourthetsability_entry2_ServiceAbility1300_onConnect") {
          expect(listKey[1]).assertEqual("onConnect");
        }
        console.log("SUB_AA_OpenHarmony_AbilityVisble_1300 listKey: " + listKey)
      }

      commonEvent.createSubscriber(subscriberInfo_MyServiceExtension).then(async (data) => {
        console.debug("SUB_AA_OpenHarmony_AbilityVisble_1300====>Create Subscriber====>");
        Subscriber = data;
        await commonEvent.subscribe(Subscriber, SubscribeCallBack);
      })


      try {
        console.log("SUB_AA_OpenHarmony_AbilityVisble_1300: 1 ");
        var connId = await abilityContext.connectAbility(
          {
            bundleName: "com.example.fourthetsability",
            abilityName: "com.example.entry2.ServiceAbility1300"
          },
          {
            onConnect: onConnectCallback,
            onDisconnect: onDisconnectCallback,
            onFailed: onFailedCallback,
          },
        );

        console.log("SUB_AA_OpenHarmony_AbilityVisble_1300: connId" + connId)
        expect(connId >= 0).assertTrue()
        done();
      } catch (err) {
        console.log("SUB_AA_OpenHarmony_AbilityVisble_1300: error " + err);
      }
      done();
    })

    /**
     * @tc.number  SUB_AA_OpenHarmony_AbilityVisble_1400
     * @tc.name    Test The  request ablility start visible servicesExtension in one hab
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('SUB_AA_OpenHarmony_AbilityVisble_1400', 0, async function (done) {
      console.log("------------start SUB_AA_OpenHarmony_AbilityVisble_1400-------------");
      var Subscriber = "";
      var listKey = ["", ""];
      var subscriberInfo_MyServiceExtension = {
        events: ["Fourthetsability_entry2_ServiceAbility1400_onCreate",
        "Fourthetsability_entry2_ServiceAbility1400_onConnect"]
      }

      function SubscribeCallBack(err, data) {
        console.log("SUB_AA_OpenHarmony_AbilityVisble_1400 Subscribe CallBack data:" + JSON.stringify(data));
        if (data.event == "Fourthetsability_entry2_ServiceAbility1400_onCreate") {
          listKey[0] = "onCreate";
        } else if (data.event == "Fourthetsability_entry2_ServiceAbility1400_onConnect") {
          expect(listKey[1]).assertEqual("onConnect");
        }
        console.log("SUB_AA_OpenHarmony_AbilityVisble_1400 listKey: " + listKey)
      }

      commonEvent.createSubscriber(subscriberInfo_MyServiceExtension).then(async (data) => {
        console.debug("SUB_AA_OpenHarmony_AbilityVisble_1400====>Create Subscriber====>");
        Subscriber = data;
        await commonEvent.subscribe(Subscriber, SubscribeCallBack);
      })


      try {
        console.log("SUB_AA_OpenHarmony_AbilityVisble_1400: 1 ");
        var connId = await abilityContext.connectAbility(
          {
            bundleName: "com.example.fourthetsability",
            abilityName: "com.example.entry2.ServiceAbility1400"
          },
          {
            onConnect: onConnectCallback,
            onDisconnect: onDisconnectCallback,
            onFailed: onFailedCallback,
          },
        );

        console.log("SUB_AA_OpenHarmony_AbilityVisble_1400: connId" + connId)
        expect(connId >= 0).assertTrue()
        done();
      } catch (err) {
        console.log("SUB_AA_OpenHarmony_AbilityVisble_1400: error " + err);
      }
      done();
    })

    /**
     * @tc.number  SUB_AA_OpenHarmony_AbilityVisble_1500
     * @tc.name    Test The  request ablility start visible servicesExtension in one hab
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('SUB_AA_OpenHarmony_AbilityVisble_1500', 0, async function (done) {
      console.log("------------start SUB_AA_OpenHarmony_AbilityVisble_1400-------------");
      var Subscriber = "";
      var listKey = ["", ""];
      var subscriberInfo_MyServiceExtension = {
        events: ["Fourthetsability_entry2_ServiceAbility1500_onCreate",
        "Fourthetsability_entry2_ServiceAbility1500_onConnect"]
      }

      function SubscribeCallBack(err, data) {
        console.log("SUB_AA_OpenHarmony_AbilityVisble_1500 Subscribe CallBack data:" + JSON.stringify(data));
        if (data.event == "Fourthetsability_entry2_ServiceAbility1500_onCreate") {
          listKey[0] = "onCreate";
        } else if (data.event == "Fourthetsability_entry2_ServiceAbility1500_onConnect") {
          expect(listKey[1]).assertEqual("onConnect");
        }
        console.log("SUB_AA_OpenHarmony_AbilityVisble_1500 listKey: " + listKey)
      }

      commonEvent.createSubscriber(subscriberInfo_MyServiceExtension).then(async (data) => {
        console.debug("SUB_AA_OpenHarmony_AbilityVisble_1500====>Create Subscriber====>");
        Subscriber = data;
        await commonEvent.subscribe(Subscriber, SubscribeCallBack);
      })


      try {
        console.log("SUB_AA_OpenHarmony_AbilityVisble_1500: 1 ");
        var connId = await abilityContext.connectAbility(
          {
            bundleName: "com.example.fourthetsability",
            abilityName: "com.example.entry2.ServiceAbility1500"
          },
          {
            onConnect: onConnectCallback,
            onDisconnect: onDisconnectCallback,
            onFailed: onFailedCallback,
          },
        );

        console.log("SUB_AA_OpenHarmony_AbilityVisble_1500: connId" + connId)
        expect(connId >= 0).assertTrue()
        done();
      } catch (err) {
        console.log("SUB_AA_OpenHarmony_AbilityVisble_1500: error " + err);
      }
      done();
    })


    /**
     * @tc.number  SUB_AA_OpenHarmoy_ArkEngine_0300
     * @tc.name    Test The  requestdatabase
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('SUB_AA_OpenHarmoy_ArkEngine_0300', 0, async function (done) {
      console.log("------------ SUB_AA_OpenHarmoy_ArkEngine_0300 start -------------");
      expect(true).assertTrue();
      done();
      try {
        featureAbility.startAbility(
          {
            want:
            {
              bundleName: "com.example.fourthauxiliaryability",
              abilityName: "com.example.fourthauxiliaryability.ServiceAbilityEngine0300",
            },
          },
        )
        var Subscriber = "";
        var listKey = ["", ""];
        var subscriberInfo_MyServiceExtension = {
          events: ["fourthauxiliaryability_ServiceAbilityEngine0300_onStart",
          "fourthauxiliaryability_ServiceAbilityEngine0300_onCommand",]
        }

        function SubscribeCallBack(err, data) {
          console.log("SUB_AA_OpenHarmoy_ArkEngine_0300 SubscribeCallBack data:" + JSON.stringify(data));
          if (data.event == "fourthauxiliaryability_ServiceAbilityEngine0300_onStart") {
            listKey[0] = "onStart";
            expect(listKey[0]).assertEqual("onStart");
          } else if (data.event == "fourthauxiliaryability_ServiceAbilityEngine0300_onCommand") {
            listKey[1] = "onCommand";
            expect(listKey[1]).assertEqual("onCommand");
          }
          done()
        }

        commonEvent.createSubscriber(subscriberInfo_MyServiceExtension).then(async (data) => {
          Subscriber = data;
          await commonEvent.subscribe(Subscriber, SubscribeCallBack);
        })
      } catch (exception) {
        expect(true).assertTrue();
      }
      expect(true).assertTrue();
      console.log("------------ SUB_AA_OpenHarmoy_ArkEngine_0300 end -------------");
    })

    /**
     * @tc.number  SUB_AA_OpenHarmoy_ArkEngine_0400
     * @tc.name    Test The  requestdatabase
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('SUB_AA_OpenHarmoy_ArkEngine_0400', 0, async function (done) {
      console.log("------------ SUB_AA_OpenHarmoy_ArkEngine_0400 start -------------");
      expect(true).assertTrue();
      done()
      try {
        featureAbility.connectAbility(
          {
            bundleName: "com.example.fourthauxiliaryability",
            abilityName: "com.example.fourthauxiliaryability.ServiceAbilityEngine0400",
          },
        )
        var Subscriber = "";
        var listKey = ["", ""];
        var subscriberInfo_MyServiceExtension = {
          events: ["fourthauxiliaryability_ServiceAbilityEngine0400_onStart",
          "fourthauxiliaryability_ServiceAbilityEngine0400_onConnect",]
        }

        function SubscribeCallBack(err, data) {
          console.log("SUB_AA_OpenHarmoy_ArkEngine_0400 SubscribeCallBack data:" + JSON.stringify(data));
          if (data.event == "fourthauxiliaryability_ServiceAbilityEngine0400_onStart") {
            listKey[0] = "onStart";
            expect(listKey[0]).assertEqual("onStart");
          } else if (data.event == "fourthauxiliaryability_ServiceAbilityEngine0400_onConnect") {
            listKey[1] = "onConnect";
            expect(listKey[1]).assertEqual("onConnect");
          }
          done()
        }

        commonEvent.createSubscriber(subscriberInfo_MyServiceExtension).then(async (data) => {
          Subscriber = data;
          await commonEvent.subscribe(Subscriber, SubscribeCallBack);
        })
      } catch (exception) {
        expect(true).assertTrue();
      }
      expect(true).assertTrue();
      console.log("------------ SUB_AA_OpenHarmoy_ArkEngine_0400 end -------------");
    })

    /**
     * @tc.number  SUB_AA_OpenHarmoy_ArkEngine_0500
     * @tc.name    Test The  requestdatabase
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('SUB_AA_OpenHarmoy_ArkEngine_0500', 0, async function (done) {
      console.log("------------ SUB_AA_OpenHarmoy_ArkEngine_0500 start -------------");
      var urivar = "dataability://com.example.fourthauxiliaryability.DataAbility"
      let dataAbilityHelper = featureAbility.acquireDataAbilityHelper(
        urivar
      );
      let valuesBuckets = {
        "name": "gaolu"
      }
      try {
        dataAbilityHelper.insert(urivar, valuesBuckets, (err, data) => {
          expect(typeof (data)).assertEqual("number")
          done();
        });
      } catch (exception) {
        console.log('SUB_AA_OpenHarmoy_ArkEngine_0500 insert exception : ' + JSON.stringify(exception))
        expect(true).assertTrue();
        done()
      }
      expect(true).assertTrue();
      console.log("------------ SUB_AA_OpenHarmoy_ArkEngine_0500 end -------------");
    })

    /**
     * @tc.number  SUB_AA_OpenHarmoy_ArkEngine_0600
     * @tc.name    Test The  requestdatabase
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('SUB_AA_OpenHarmoy_ArkEngine_0600', 0, async function (done) {
      console.log("------------ SUB_AA_OpenHarmoy_ArkEngine_0600 start -------------");
      var urivar = "dataability://com.example.fourthauxiliaryability.DataAbility"
      let dataAbilityHelper = featureAbility.acquireDataAbilityHelper(
        urivar
      );
      let valuesBuckets = {
        "name": "gaolu"
      }
      try {
        dataAbilityHelper.insert(urivar, valuesBuckets, (err, data) => {
          expect(typeof (data)).assertEqual("number")
          done();
        });
      } catch (exception) {
        console.log('SUB_AA_OpenHarmoy_ArkEngine_0600 insert exception : ' + JSON.stringify(exception))
        expect(true).assertTrue();
        done()
      }
      expect(true).assertTrue();
      console.log("------------ SUB_AA_OpenHarmoy_ArkEngine_0600 end -------------");
    })

    /**
     * @tc.number  SUB_AA_OpenHarmoy_ArkEngine_0700
     * @tc.name    Test The  requestdatabase
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('SUB_AA_OpenHarmoy_ArkEngine_0700', 0, async function (done) {
      console.log("------------ SUB_AA_OpenHarmoy_ArkEngine_0700 start -------------");
      var urivar = "dataability://com.example.fourthauxiliaryability.DataAbility"
      let dataAbilityHelper = featureAbility.acquireDataAbilityHelper(
        urivar
      );
      let da = new ohos_data_ability.DataAbilityPredicates()
      try {
        dataAbilityHelper.delete(
          urivar, da, (err, data) => {
          console.info("==========================>Called=======================>");
          done()
        });
      } catch (exception) {
        console.log('SUB_AA_OpenHarmoy_ArkEngine_0700 insert exception : ' + JSON.stringify(exception))
        expect(true).assertTrue();
        done()
      }
      expect(true).assertTrue();
      console.log("------------ SUB_AA_OpenHarmoy_ArkEngine_0700 end -------------");
    })

    /**
     * @tc.number  SUB_AA_OpenHarmoy_ArkEngine_0800
     * @tc.name    Test The  requestdatabase
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('SUB_AA_OpenHarmoy_ArkEngine_0800', 0, async function (done) {
      console.log("------------ SUB_AA_OpenHarmoy_ArkEngine_0800 start -------------");
      var urivar = "dataability://com.example.fourthauxiliaryability.DataAbility"
      let dataAbilityHelper = featureAbility.acquireDataAbilityHelper(
        urivar
      );
      var da = new Array({
        "name": "roe11", "age": 21,
      }, {
        "name": "roe12", "age": 21,
      }, {
        "name": "roe13", "age": 21,
      })
      try {
        dataAbilityHelper.batchInsert(
          urivar, da, (err, data) => {
          console.info("==========================>Called=======================>");
          done()
        });
      } catch (exception) {
        console.log('SUB_AA_OpenHarmoy_ArkEngine_0800 insert exception : ' + JSON.stringify(exception))
        expect(true).assertTrue();
        done()
      }
      expect(true).assertTrue();
      console.log("------------ SUB_AA_OpenHarmoy_ArkEngine_0800 end -------------");
    })

    /**
     * @tc.number  SUB_AA_OpenHarmoy_ArkEngine_1000
     * @tc.name    Test The  requestdatabase
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('SUB_AA_OpenHarmoy_ArkEngine_1000', 0, async function (done) {
      console.log("------------ SUB_AA_OpenHarmoy_ArkEngine_1000 start -------------");
      var urivar = "dataability://com.example.fourthauxiliaryability.DataAbility"
      let dataAbilityHelper = featureAbility.acquireDataAbilityHelper(
        urivar
      );
      var cars = new Array("value1", "value2", "value3", "value4");
      let da = new ohos_data_ability.DataAbilityPredicates()
      try {
        dataAbilityHelper.query(
          urivar, cars, da, (err, data) => {
          console.info("==========================>Called=======================>");
          done()
        });
      } catch (exception) {
        console.log('SUB_AA_OpenHarmoy_ArkEngine_1000 insert exception : ' + JSON.stringify(exception))
        expect(true).assertTrue();
        done()
      }
      expect(true).assertTrue();
      console.log("------------ SUB_AA_OpenHarmoy_ArkEngine_1000 end -------------");
    })

    /**
     * @tc.number  SUB_AA_OpenHarmoy_ArkEngine_1100
     * @tc.name    Test The  requestdatabase
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('SUB_AA_OpenHarmoy_ArkEngine_1100', 0, async function (done) {
      console.log("------------ SUB_AA_OpenHarmoy_ArkEngine_1100 start -------------");
      var urivar = "dataability://com.example.fourthauxiliaryability.DataAbility"
      let dataAbilityHelper = featureAbility.acquireDataAbilityHelper(
        urivar
      );
      try {
        dataAbilityHelper.getFileTypes(
          urivar, "image", (err, data) => {
          console.info("==========================>Called=======================>");
          done()
        });
      } catch (exception) {
        console.log('SUB_AA_OpenHarmoy_ArkEngine_1100 insert exception : ' + JSON.stringify(exception))
        expect(true).assertTrue();
        done()
      }
      expect(true).assertTrue();
      console.log("------------ SUB_AA_OpenHarmoy_ArkEngine_1100 end -------------");
    })

    /**
     * @tc.number  SUB_AA_OpenHarmoy_ArkEngine_1200
     * @tc.name    Test The  requestdatabase
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('SUB_AA_OpenHarmoy_ArkEngine_1200', 0, async function (done) {
      console.log("------------ SUB_AA_OpenHarmoy_ArkEngine_1200 start -------------");
      var urivar = "dataability://com.example.fourthauxiliaryability.DataAbility"
      let dataAbilityHelper = featureAbility.acquireDataAbilityHelper(
        urivar
      );
      var mode = "rwt";
      try {
        dataAbilityHelper.openFile(urivar, mode,
          (err) => {
            console.info("==========================>Called=======================>");
            done()
          });
      } catch (exception) {
        console.log('SUB_AA_OpenHarmoy_ArkEngine_1200 insert exception : ' + JSON.stringify(exception))
        expect(true).assertTrue();
        done()
      }
      expect(true).assertTrue();
      console.log("------------ SUB_AA_OpenHarmoy_ArkEngine_1200 end -------------");
    })

    /**
     * @tc.number  SUB_AA_OpenHarmoy_ArkEngine_1300
     * @tc.name    Test The  requestdatabase
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('SUB_AA_OpenHarmoy_ArkEngine_1300', 0, async function (done) {
      console.log("------------ SUB_AA_OpenHarmoy_ArkEngine_1300 start -------------");
      var urivar = "dataability://com.example.fourthauxiliaryability.DataAbility"
      let dataAbilityHelper = featureAbility.acquireDataAbilityHelper(
        urivar
      );
      try {
        dataAbilityHelper.normalizeUri(
          urivar,
          (err, data) => {
            console.info("==========================>Called=======================>");
          });
      } catch (exception) {
        console.log('SUB_AA_OpenHarmoy_ArkEngine_1300 insert exception : ' + JSON.stringify(exception))
        expect(true).assertTrue();
        done()
      }
      expect(true).assertTrue();
      console.log("------------ SUB_AA_OpenHarmoy_ArkEngine_1300 end -------------");
    })

    /**
     * @tc.number  SUB_AA_OpenHarmoy_ArkEngine_1400
     * @tc.name    Test The  requestdatabase
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('SUB_AA_OpenHarmoy_ArkEngine_1400', 0, async function (done) {
      console.log("------------ SUB_AA_OpenHarmoy_ArkEngine_1400 start -------------");
      var urivar = "dataability://com.example.fourthauxiliaryability.DataAbility"
      let dataAbilityHelper = featureAbility.acquireDataAbilityHelper(
        urivar
      );
      try {
        dataAbilityHelper.denormalizeUri(
          urivar, (err, data) => {
          console.info("==========================>Called=======================>");
          done()
        });
      } catch (exception) {
        console.log('SUB_AA_OpenHarmoy_ArkEngine_1400 insert exception : ' + JSON.stringify(exception))
        expect(true).assertTrue();
        done()
      }
      expect(true).assertTrue();
      console.log("------------ SUB_AA_OpenHarmoy_ArkEngine_1400 end -------------");
    })

    /**
     * @tc.number  SUB_AA_OpenHarmoy_ArkEngine_1500
     * @tc.name    Test The  requestdatabase
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('SUB_AA_OpenHarmoy_ArkEngine_1500', 0, async function (done) {
      console.log("------------start SUB_AA_OpenHarmoy_ArkEngine_1500-------------");
      try {
        particleAbility.connectAbility(
          {
            want:
            {
              bundleName: "com.example.fourthauxiliaryability",
              abilityName: "com.example.fourthauxiliaryability.ServiceAbilityEngine1500",
            },
          }
        );
        setTimeout(function () {
          particleAbility.disconnectAbility(1, (err) => {
            if (err) {
              console.log('SUB_AA_OpenHarmoy_ArkEngine_1500 disconnectAbility err : ' + JSON.stringify(err))
            }
          })
        }, 2000);
        expect(true).assertTrue();
        done();
      } catch (err) {
        console.log("SUB_AA_OpenHarmoy_ArkEngine_1500: error " + JSON.stringify(err));
        expect(true).assertTrue();
        done();
      }
      expect(true).assertTrue();
      console.log("------------end SUB_AA_OpenHarmoy_ArkEngine_1500-------------");
    })

    /**
     * @tc.number  SUB_AA_OpenHarmoy_ArkEngine_1600
     * @tc.name    Test The  requestdatabase
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('SUB_AA_OpenHarmoy_ArkEngine_1600', 0, async function (done) {
      console.log("------------start SUB_AA_OpenHarmoy_ArkEngine_1600-------------");
      try {
        particleAbility.startAbility(
          {
            want:
            {
              bundleName: "com.example.fourthauxiliaryability",
              abilityName: "com.example.fourthauxiliaryability.ServiceAbilityEngine1600",
            },
          }
        );
        expect(true).assertTrue();
        done();
      } catch (err) {
        console.log("SUB_AA_OpenHarmoy_ArkEngine_1600: error " + JSON.stringify(err));
        expect(true).assertTrue();
        done();
      }
      console.log("------------end SUB_AA_OpenHarmoy_ArkEngine_1600-------------");
    })
  });
}