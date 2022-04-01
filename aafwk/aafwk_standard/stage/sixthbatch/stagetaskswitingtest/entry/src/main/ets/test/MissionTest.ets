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

export default function abilityTest(abilityContext) {
  describe('AbilityTest', function () {
    console.log("-------------start test---------------");
    var TAG = "";

    /*
             * @tc.number  SUB_AA_OpenHarmony_MoveMissionToFront_0100
             * @tc.name    Switching the mission in the launcherlist to the foreground is not supported
             * @tc.desc    Function test
             * @tc.level   0
             */
    //            it('SUB_AA_OpenHarmony_MoveMissionToFront_0100', 0, async function (done) {
    //                console.log("------------start SUB_AA_OpenHarmony_MoveMissionToFront_0100-------------");
    //                var missionId = 1;
    //                try {
    //                    missionManager.moveMissionToFront(missionId, (error, data) => {
    //                        console.log("SUB_AA_OpenHarmony_MoveMissionToFront_0100 error: " +
    //                        JSON.stringify(error) + ", data: " + JSON.stringify(data));
    //                        expect(error.code == 2097181).assertTrue();
    //                        done();
    //                    })
    //                } catch(error) {
    //                    console.log("SUB_AA_OpenHarmony_MoveMissionToFront_0100: error " + error);
    //                }
    //                console.log("------------end SUB_AA_OpenHarmony_MoveMissionToFront_0100-------------");
    //            });
    var abilityLifeEvents = {
      events: ["mainAbility_onBackground",
      "mainAbility_onForeground",]
    }

    var abilityLifeEvents2 = {
      events: ["mainAbility_onForeground"]
    }
    var ability3LifeEvents3 = {
      events: ["mainAbility3_onBackground"]
    }

    var singletonAbility4LifeEvents = {
      events: ["mainAbility4_onForeground",
      "mainAbility4_onBackground",
      "mainAbility4_onWindowStageDestroy",
      "mainAbility4_onDestroy"]
    }
    var singletonAbility3LifeEvents = {
      events: ["mainAbility3_onForeground",
      "mainAbility3_onBackground",
      "mainAbility3_onWindowStageDestroy",
      "mainAbility3_onDestroy"]
    }
    var singletonAbility2LifeEvents = {
      events: ["mainAbility2_onForeground",
      "mainAbility2_onBackground",
      "mainAbility2_onWindowStageDestroy",
      "mainAbility2_onDestroy"]
    }

    var ability4LifeEvents = {
      events: ["mainAbility4_onForeground",
      "mainAbility4_onBackground",
      "mainAbility4_onWindowStageDestroy",
      "mainAbility4_onDestroy"]
    }
    var ability3LifeEvents = {
      events: ["mainAbility3_onForeground",
      "mainAbility3_onBackground",
      "mainAbility3_onWindowStageDestroy",
      "mainAbility3_onDestroy"]
    }
    var ability2LifeEvents = {
      events: ["mainAbility2_onForeground",
      "mainAbility2_onBackground",
      "mainAbility2_onWindowStageDestroy",
      "mainAbility2_onDestroy"]
    }

    var ability3LifeEvents2 = {
      events: ["mainAbility3_onBackground",
      "mainAbility3_onWindowStageDestroy",
      "mainAbility3_onDestroy"
      ]
    }

    var abilityLifeEvents2 = {
      events: ["mainAbility_onForeground"]
    }

    var ability2LifeEvents2 = {
      events: ["mainAbility2_onBackground",
      "mainAbility2_onWindowStageDestroy",
      "mainAbility2_onDestroy",
      "mainAbility2_onCreate",
      "mainAbility2_onWindowStageCreate",
      "mainAbility2_onForeground"]
    }
    var ability2LifeEvents3 = {
      events: ["mainAbility2_onBackground",
      "mainAbility2_onWindowStageDestroy",
      "mainAbility2_onCreate",
      "mainAbility2_onWindowStageCreate",
      "mainAbility2_onForeground"]
    }
    var ability3LifeEvents3 = {
      events: ["mainAbility3_onForeground",
      "mainAbility3_onBackground",
      "mainAbility3_onWindowStageCreate",
      "mainAbility3_onCreate"]
    }
    var abilityLifeEvents3 = {
      events: [
      "mainAbility_onBackground",]
    }

    /*
 * @tc.number  SUB_AA_OpenHarmony_MoveMissionToFront_0500
 * @tc.name    Switch the last mission in the defaultstandardlist to the foreground
 * @tc.desc    Function test
 * @tc.level   0
 */
//            it('SUB_AA_OpenHarmony_MoveMissionToFront_0500', 0, async function (done) {
//              console.log("------------start SUB_AA_OpenHarmony_MoveMissionToFront_0500-------------");
//              TAG = "SUB_AA_OpenHarmony_MoveMissionToFront_0500"
//              var Subscriber = "";
//              var Subscriber2 = "";
//              var list = ["", "", "", ""];
//              var list2 = ["", ""]
//              var ability1MissionList = [];
//              var ability4MissionList = [];
//
//
//              function SubscribeCallBack_mainAbility4_Destroy(err, data) {
//                console.log(TAG + " Subscribe CallBack data:" + JSON.stringify(data));
//                if (data.event == "mainAbility4_onForeground") {
//                  list[0] = "onForeground";
//                } else if (data.event == "mainAbility4_onBackground") {
//                  list[1] = "onBackground";
//                } else if (data.event == "mainAbility4_onWindowStageDestroy") {
//                  list[2] = "onWindowStageDestroy";
//                } else if (data.event == "mainAbility4_onDestroy") {
//                  list[3] = "onDestroy";
//                }
//                console.log(TAG + "list is : " + list)
//              }
//
//              function SubscribeCallBack_mainAbility_Destroy(err, data) {
//                console.log(TAG + " Subscribe2 CallBack data:" + JSON.stringify(data));
//                if (data.event == "mainAbility_onBackground") {
//                  list2[0] = "onBackground";
//                } else if (data.event == "mainAbility_onForeground") {
//                  list2[1] = "onForeground";
//                }
//                done()
//              }
//
//              commonEvent.createSubscriber(ability4LifeEvents).then(async (data) => {
//                console.log(TAG + "====>Create Subscriber====>");
//                Subscriber = data;
//                console.log(TAG + "data is : " + JSON.stringify(Subscriber))
//                await commonEvent.subscribe(Subscriber, SubscribeCallBack_mainAbabilityLifeEventsility4_Destroy);
//
//              });
//
//              commonEvent.createSubscriber().then(async (data) => {
//                console.log(TAG + "====>Create Subscriber2====>");
//                Subscriber2 = data;
//                console.log(TAG + "data2 is : " + JSON.stringify(Subscriber2))
//                await commonEvent.subscribe(Subscriber2, SubscribeCallBack_mainAbility_Destroy);
//
//              });
//
//              missionManager.getMissionInfos("", 20, (error, data) => {
//                console.log(TAG + "Emtry MainAbility getMissionInfos success, error: "
//                + JSON.stringify(error) + ", data: " + JSON.stringify(data));
//
//                for (var i = 0; i < data.length; i++) {
//                  if (data[i].want.abilityName == "com.example.missionapplication.MainAbility") {
//                    console.log(TAG + "ability1MissionId is " + data[i].missionId);
//                    ability1MissionList.push(data[i].missionId);
//                  }
//                }
//                console.log(TAG + "ability1MissionList is: " + JSON.stringify(ability1MissionList))
//
//                missionManager.lockMission(ability1MissionList[0], (error, data) => {
//                  console.log(TAG + "Emtry MainAbility lockMission success, error: "
//                  + JSON.stringify(error) + ", data: " + JSON.stringify(data));
//                  missionManager.clearAllMissions((err, data) => {
//                    console.log(TAG + "Emtry MainAbility clearAllMissions success, error: "
//                    + JSON.stringify(error) + ", data: " + JSON.stringify(data));
//                  })
//                });
//                console.log(TAG + "ability1MissionList 2 is: " + JSON.stringify(ability1MissionList))
//              });
//
//              setTimeout(function () {
//                abilityContext.startAbility({
//                  bundleName: "com.example.missionapplication",
//                  abilityName: "com.example.missionapplication.MainAbility2"
//                }, (error, data) => {
//                  console.log(TAG + " startAbility1 success, error: "
//                  + JSON.stringify(error) + ", data: " + JSON.stringify(data));
//                });
//              }, 1000)
//              setTimeout(function () {
//                abilityContext.startAbility({
//                  bundleName: "com.example.missionapplication",
//                  abilityName: "com.example.missionapplication.MainAbility3"
//                }, (error, data) => {
//                  console.log(TAG + " startAbility2 success, error: "
//                  + JSON.stringify(error) + ", data: " + JSON.stringify(data));
//                });
//              }, 1500)
//              setTimeout(function () {
//                abilityContext.startAbility({
//                  bundleName: "com.example.missionapplication",
//                  abilityName: "com.example.missionapplication.MainAbility4"
//                }, (error, data) => {
//                  console.log(TAG + " startAbility3 success, error: "
//                  + JSON.stringify(error) + ", data: " + JSON.stringify(data));
//
//                });
//              }, 2000)
//
//
//              setTimeout(function () {
//                missionManager.moveMissionToFront(parseInt(ability1MissionList[0]), (error, data) => {
//                  console.log(TAG + "MainAbility moveMissionToFront success, error: "
//                  + JSON.stringify(error) + ", data: " + JSON.stringify(data));
//                  console.log(TAG + "-->list is : " + list)
//                  missionManager.getMissionInfos("", 20, (error, data) => {
//                    console.log(TAG + "Emtry MainAbility4 getMissionInfos success, error: "
//                    + JSON.stringify(error) + ", data: " + JSON.stringify(data));
//
//                    for (var i = 0; i < data.length; i++) {
//                      if (data[i].want.abilityName == "com.example.missionapplication.MainAbility4") {
//                        console.log(TAG + "ability4MissionId is " + data[i].missionId);
//                        ability4MissionList.push(data[i].missionId);
//                      }
//                    }
//                    console.log(TAG + "ability4MissionList is: " + JSON.stringify(ability4MissionList))
//                    missionManager.moveMissionToFront(parseInt(ability4MissionList[0]), (error, data) => {
//                      console.log(TAG + "Emtry MainAbility4 moveMissionToFront success, error: "
//                      + JSON.stringify(error) + ", data: " + JSON.stringify(data));
//                      console.log(TAG + "-->list2 is : " + list2)
//                      expect(list2[0]).assertEqual("onBackground");
//                      console.log(TAG + "55555555")
//                      expect(list2[1]).assertEqual("onForeground");
//                      console.log(TAG + "6666666666")
//                      console.log(TAG + "77777777")
//                    });
//                  });
//                  console.log(TAG + "MainAbility list1 data " + parseInt(ability1MissionList[0]));
//                  expect(list[0]).assertEqual("onForeground");
//                  console.log(TAG + "111111111111")
//                  expect(list[1]).assertEqual("onBackground");
//                  console.log(TAG + "222222222")
//                  expect(list[2]).assertEqual("onWindowStageDestroy");
//                  console.log(TAG + "333333333")
//                  expect(list[3]).assertEqual("onDestroy");
//                  console.log(TAG + "4444444444444")
//                }, 3000)
//                console.log("------------end SUB_AA_OpenHarmony_MoveMissionToFront_0500-------------");
//              });
//            });


    /*
     * @tc.number  SUB_AA_OpenHarmony_MoveMissionToFront_0600
     * @tc.name    Switch the middle mission in the defaultsinglelist to the foreground
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('SUB_AA_OpenHarmony_MoveMissionToFront_0600', 0, async function (done) {
      console.log("------------start SUB_AA_OpenHarmony_MoveMissionToFront_0600-------------");
      TAG = "SUB_AA_OpenHarmony_MoveMissionToFront_0600"
      var Subscriber = "";
      var Subscriber2 = "";
      var list = ["", "", "", ""];
      var list2 = ["", ""]
      var ability1MissionList = [];
      var ability3MissionList = [];

      function SubscribeCallBack_mainAbility3_Destroy(err, data) {
        console.log(TAG + " Subscribe3 CallBack data:" + JSON.stringify(data));
        if (data.event == "mainAbility3_onForeground") {
          list[0] = "onForeground";
        } else if (data.event == "mainAbility3_onBackground") {
          list[1] = "onBackground";
        } else if (data.event == "mainAbility3_onWindowStageDestroy") {
          list[2] = "onWindowStageDestroy";
        } else if (data.event == "mainAbility3_onDestroy") {
          list[3] = "onDestroy";
        }
        console.log(TAG + "list is : " + list)
      }

      function SubscribeCallBack_mainAbility_Destroy(err, data) {
        console.log(TAG + " Subscribe3 CallBack data:" + JSON.stringify(data));
        if (data.event == "mainAbility_onBackground") {
          list2[0] = "onBackground";
        } else if (data.event == "mainAbility_onForeground") {
          list2[1] = "onForeground";
        }
        console.log(TAG + "list2 is : " + list2)
      }


      commonEvent.createSubscriber(ability3LifeEvents).then(async (data) => {
        console.log(TAG + "====>Create Subscriber====>");
        Subscriber = data;
        console.log(TAG + "data is : " + JSON.stringify(Subscriber))
        await commonEvent.subscribe(Subscriber, SubscribeCallBack_mainAbility3_Destroy);

      });

      commonEvent.createSubscriber(abilityLifeEvents).then(async (data) => {
        console.log(TAG + "====>Create Subscriber2====>");
        Subscriber2 = data;
        console.log(TAG + "data2 is : " + JSON.stringify(Subscriber2))
        await commonEvent.subscribe(Subscriber2, SubscribeCallBack_mainAbility_Destroy);

      });

      setTimeout(function () {
        missionManager.getMissionInfos("", 20, (error, data) => {
          console.log(TAG + "Emtry MainAbility getMissionInfos success, error: "
          + JSON.stringify(error) + ", data: " + JSON.stringify(data));

          for (var i = 0; i < data.length; i++) {
            if (data[i].want.abilityName == "com.example.missionapplication.MainAbility") {
              console.log(TAG + "ability1MissionId is " + data[i].missionId);
              ability1MissionList.push(data[i].missionId);
            }
          }
          console.log(TAG + "ability1MissionList is: " + JSON.stringify(ability1MissionList))

          missionManager.lockMission(ability1MissionList[0], (error, data) => {
            console.log(TAG + "Emtry MainAbility lockMission success, error: "
            + JSON.stringify(error) + ", data: " + JSON.stringify(data));
            missionManager.clearAllMissions((err, data) => {
              console.log(TAG + "Emtry MainAbility clearAllMissions success, error: "
              + JSON.stringify(error) + ", data: " + JSON.stringify(data));
            })
          });
          console.log(TAG + "ability1MissionList 2 is: " + JSON.stringify(ability1MissionList))
        });
      }, 500)

      setTimeout(function () {
        abilityContext.startAbility({
          bundleName: "com.example.missionapplication",
          abilityName: "com.example.missionapplication.MainAbility2"
        }, (error, data) => {
          console.log(TAG + " startAbility2 success, error: "
          + JSON.stringify(error) + ", data: " + JSON.stringify(data));
        });
      }, 1000)
      setTimeout(function () {
        abilityContext.startAbility({
          bundleName: "com.example.missionapplication",
          abilityName: "com.example.missionapplication.MainAbility3"
        }, (error, data) => {
          console.log(TAG + " startAbility3 success, error: "
          + JSON.stringify(error) + ", data: " + JSON.stringify(data));
        });
      }, 1500)
      setTimeout(function () {
        abilityContext.startAbility({
          bundleName: "com.example.missionapplication",
          abilityName: "com.example.missionapplication.MainAbility4"
        }, (error, data) => {
          console.log(TAG + " startAbility4success, error: "
          + JSON.stringify(error) + ", data: " + JSON.stringify(data));

        });
      }, 2000)

      setTimeout(function () {
        missionManager.getMissionInfos("", 20, (error, data) => {
          console.log(TAG + "Emtry MainAbility getMissionInfos success, error: "
          + JSON.stringify(error) + ", data: " + JSON.stringify(data));

          for (var i = 0; i < data.length; i++) {
            if (data[i].want.abilityName == "com.example.missionapplication.MainAbility3") {
              console.log(TAG + "ability3MissionId is " + data[i].missionId);
              ability3MissionList.push(data[i].missionId);
            }
          }
          console.log(TAG + "ability3MissionList is: " + JSON.stringify(ability3MissionList))
        });
      }, 2500)

      setTimeout(function () {
        console.log(TAG + "MainAbility ability1MissionList data " + parseInt(ability1MissionList[0]));
        missionManager.moveMissionToFront(parseInt(ability1MissionList[0]), (error, data) => {
          console.log(TAG + "MainAbility moveMissionToFront success, error: "
          + JSON.stringify(error) + ", data: " + JSON.stringify(data));
        });
      }, 3500)
      setTimeout(function () {
        console.log(TAG + "MainAbility ability3MissionList data " + parseInt(ability3MissionList[0]));
        missionManager.moveMissionToFront(parseInt(ability3MissionList[0]), (error, data) => {
          console.log(TAG + "Emtry MainAbility3 moveMissionToFront success, error: "
          + JSON.stringify(error) + ", data: " + JSON.stringify(data));
          console.log(TAG + "-->list is : " + list)
          expect(list[0]).assertEqual("onForeground");
          console.log(TAG + "111111111111")
          expect(list[1]).assertEqual("onBackground");
          console.log(TAG + "222222222")
          expect(list[2]).assertEqual("onWindowStageDestroy");
          console.log(TAG + "333333333")
          expect(list[3]).assertEqual("onDestroy");
          console.log(TAG + "4444444444444")
          console.log(TAG + "-->list2 is : " + list2)
          expect(list2[0]).assertEqual("onBackground");
          console.log(TAG + "55555555")
          expect(list2[1]).assertEqual("onForeground");
          console.log(TAG + "6666666666")
        });
        done();
      }, 4500)

      console.log("------------end SUB_AA_OpenHarmony_MoveMissionToFront_0600-------------");
    });


    /*
             * @tc.number  SUB_AA_OpenHarmony_MoveMissionToFront_0700
             * @tc.name    Switch the first mission in the defaultstandardlist to the foreground
             * @tc.desc    Function test
             * @tc.level   0
             */
//    it('SUB_AA_OpenHarmony_MoveMissionToFront_0700', 0, async function (done) {
//      console.log("------------start SUB_AA_OpenHarmony_MoveMissionToFront_0700-------------");
//      TAG = "SUB_AA_OpenHarmony_MoveMissionToFront_0700"
//      var Subscriber = "";
//      var Subscriber2 = "";
//      var list = ["", "", "", ""];
//      var list2 = ["", ""]
//      var ability1MissionList = [];
//      var ability2MissionList = [];
//
//      function SubscribeCallBack_mainAbility2_Destroy(err, data) {
//        console.log(TAG + " Subscribe2 CallBack data:" + JSON.stringify(data));
//        if (data.event == "mainAbility2_onForeground") {
//          list[0] = "onForeground";
//        } else if (data.event == "mainAbility2_onBackground") {
//          list[1] = "onBackground";
//        } else if (data.event == "mainAbility2_onWindowStageDestroy") {
//          list[2] = "onWindowStageDestroy";
//        } else if (data.event == "mainAbility2_onDestroy") {
//          list[3] = "onDestroy";
//        }
//        console.log(TAG + "list is : " + list)
//      }
//
//      function SubscribeCallBack_mainAbility_Destroy(err, data) {
//        console.log(TAG + " Subscribe3 CallBack data:" + JSON.stringify(data));
//        if (data.event == "mainAbility_onBackground") {
//          list2[0] = "onBackground";
//        } else if (data.event == "mainAbility_onForeground") {
//          list2[1] = "onForeground";
//        }
//        console.log(TAG + "list2 is : " + list2)
//      }
//
//      commonEvent.createSubscriber(ability2LifeEvents).then(async (data) => {
//        console.log(TAG + "====>Create Subscriber====>");
//        Subscriber = data;
//        console.log(TAG + "data is : " + JSON.stringify(Subscriber))
//        await commonEvent.subscribe(Subscriber, SubscribeCallBack_mainAbility2_Destroy);
//
//
//      });
//
//      commonEvent.createSubscriber(abilityLifeEvents).then(async (data) => {
//        console.log(TAG + "====>Create Subscriber2====>");
//        Subscriber2 = data;
//        console.log(TAG + "data2 is : " + JSON.stringify(Subscriber2))
//        await commonEvent.subscribe(Subscriber2, SubscribeCallBack_mainAbility_Destroy);
//
//      });
//
//      setTimeout(function () {
//        missionManager.getMissionInfos("", 20, (error, data) => {
//          console.log(TAG + "Emtry MainAbility getMissionInfos success, error: "
//          + JSON.stringify(error) + ", data: " + JSON.stringify(data));
//
//          for (var i = 0; i < data.length; i++) {
//            if (data[i].want.abilityName == "com.example.missionapplication.MainAbility") {
//              console.log(TAG + "ability1MissionId is " + data[i].missionId);
//              ability1MissionList.push(data[i].missionId);
//            }
//          }
//          console.log(TAG + "ability1MissionList is: " + JSON.stringify(ability1MissionList))
//
//          missionManager.lockMission(ability1MissionList[0], (error, data) => {
//            console.log(TAG + "Emtry MainAbility lockMission success, error: "
//            + JSON.stringify(error) + ", data: " + JSON.stringify(data));
//            missionManager.clearAllMissions((err, data) => {
//              console.log(TAG + "Emtry MainAbility clearAllMissions success, error: "
//              + JSON.stringify(error) + ", data: " + JSON.stringify(data));
//            })
//          });
//          console.log(TAG + "ability1MissionList 2 is: " + JSON.stringify(ability1MissionList))
//        });
//      }, 500)
//
//      setTimeout(function () {
//        abilityContext.startAbility({
//          bundleName: "com.example.missionapplication",
//          abilityName: "com.example.missionapplication.MainAbility2"
//        }, (error, data) => {
//          console.log(TAG + " startAbility2 success, error: "
//          + JSON.stringify(error) + ", data: " + JSON.stringify(data));
//        });
//      }, 1000)
//      setTimeout(function () {
//        abilityContext.startAbility({
//          bundleName: "com.example.missionapplication",
//          abilityName: "com.example.missionapplication.MainAbility3"
//        }, (error, data) => {
//          console.log(TAG + " startAbility3 success, error: "
//          + JSON.stringify(error) + ", data: " + JSON.stringify(data));
//        });
//      }, 1500)
//      setTimeout(function () {
//        abilityContext.startAbility({
//          bundleName: "com.example.missionapplication",
//          abilityName: "com.example.missionapplication.MainAbility4"
//        }, (error, data) => {
//          console.log(TAG + " startAbility4success, error: "
//          + JSON.stringify(error) + ", data: " + JSON.stringify(data));
//
//        });
//      }, 2000)
//
//      setTimeout(function () {
//        missionManager.getMissionInfos("", 20, (error, data) => {
//          console.log(TAG + "Emtry MainAbility getMissionInfos success, error: "
//          + JSON.stringify(error) + ", data: " + JSON.stringify(data));
//
//          for (var i = 0; i < data.length; i++) {
//            if (data[i].want.abilityName == "com.example.missionapplication.MainAbility2") {
//              console.log(TAG + "ability2MissionId is " + data[i].missionId);
//              ability2MissionList.push(data[i].missionId);
//            }
//          }
//          console.log(TAG + "ability2MissionList is: " + JSON.stringify(ability2MissionList))
//        });
//      }, 2500)
//
//      setTimeout(function () {
//        console.log(TAG + "MainAbility ability1MissionList data " + parseInt(ability1MissionList[0]));
//        missionManager.moveMissionToFront(parseInt(ability1MissionList[0]), (error, data) => {
//          console.log(TAG + "MainAbility moveMissionToFront success, error: "
//          + JSON.stringify(error) + ", data: " + JSON.stringify(data));
//        });
//      }, 3500)
//      setTimeout(function () {
//        console.log(TAG + "MainAbility ability2MissionList data " + parseInt(ability2MissionList[0]));
//        missionManager.moveMissionToFront(parseInt(ability2MissionList[0]), (error, data) => {
//          console.log(TAG + "Emtry MainAbility2 moveMissionToFront success, error: "
//          + JSON.stringify(error) + ", data: " + JSON.stringify(data));
//          console.log(TAG + "-->list is : " + list)
//          expect(list[0]).assertEqual("onForeground");
//          console.log(TAG + "111111111111")
//          expect(list[1]).assertEqual("onBackground");
//          console.log(TAG + "222222222")
//          expect(list[2]).assertEqual("onWindowStageDestroy");
//          console.log(TAG + "333333333")
//          expect(list[3]).assertEqual("onDestroy");
//          console.log(TAG + "4444444444444")
//          console.log(TAG + "-->list2 is : " + list2)
//          expect(list2[0]).assertEqual("onBackground");
//          console.log(TAG + "55555555")
//          expect(list2[1]).assertEqual("onForeground");
//          console.log(TAG + "6666666666")
//        });
//        done();
//      }, 4500)
//
//      console.log("------------end SUB_AA_OpenHarmony_MoveMissionToFront_0700-------------");
//    });

    /*
             * @tc.number  SUB_AA_OpenHarmony_MoveMissionToFront_0800
             * @tc.name    Switch the first mission in the currentmissionlists to the foreground
             * @tc.desc    Function test
             * @tc.level   0
             */
//    it('SUB_AA_OpenHarmony_MoveMissionToFront_0800', 0, async function (done) {
//      console.log("------------start SUB_AA_OpenHarmony_MoveMissionToFront_0800-------------");
//      TAG = "SUB_AA_OpenHarmony_MoveMissionToFront_0800"
//      var Subscriber = "";
//      var Subscriber2 = "";
//      var Subscriber3 = "";
//      var list = ["", "", ""];
//      var list2 = ["", "", "", ""]
//      var list3 = [""];
//      var ability1MissionList = [];
//      var ability3MissionList = [];
//
//      function SubscribeCallBack_mainAbility3(err, data) {
//        console.log(TAG + " Subscribe CallBack data:" + JSON.stringify(data));
//        if (data.event == "mainAbility3_onBackground") {
//          list[0] = "onBackground";
//        } else if (data.event == "mainAbility3_onWindowStageDestroy") {
//          list[1] = "onWindowStageDestroy";
//        } else if (data.event == "mainAbility3_onDestroy") {
//          list[2] = "onDestroy";
//        }
//        console.log(TAG + "list is : " + list)
//      }
//
//      function SubscribeCallBack_mainAbility2(err, data) {
//        console.log(TAG + " Subscribe2 CallBack data:" + JSON.stringify(data));
//        if (data.event == "mainAbility2_onForeground") {
//          list2[0] = "onForeground";
//        } else if (data.event == "mainAbility2_onBackground") {
//          list2[1] = "onBackground";
//        } else if (data.event == "mainAbility2_onWindowStageDestroy") {
//          list2[2] = "onWindowStageDestroy";
//        } else if (data.event == "mainAbility2_onDestroy") {
//          list2[3] = "onDestroy";
//        }
//        console.log(TAG + "list2 is : " + list2)
//      }
//
//      function SubscribeCallBack_mainAbility(err, data) {
//        console.log(TAG + " Subscribe3 CallBack data:" + JSON.stringify(data));
//        if (data.event == "mainAbility_onForeground") {
//          list3[0] = "mainAbility";
//        }
//        console.log(TAG + "list3 is : " + list3)
//        done()
//      }
//
//      commonEvent.createSubscriber(ability3LifeEvents2).then(async (data) => {
//        console.log(TAG + "====>Create Subscriber====>");
//        Subscriber = data;
//        console.log(TAG + "data is : " + JSON.stringify(Subscriber))
//        await commonEvent.subscribe(Subscriber, SubscribeCallBack_mainAbility3);
//
//      });
//
//      commonEvent.createSubscriber(ability2LifeEvents).then(async (data) => {
//        console.log(TAG + "====>Create Subscriber2====>");
//        Subscriber2 = data;
//        console.log(TAG + "data2 is : " + JSON.stringify(Subscriber2))
//        await commonEvent.subscribe(Subscriber2, SubscribeCallBack_mainAbility2);
//
//      });
//
//      commonEvent.createSubscriber(abilityLifeEvents2).then(async (data) => {
//        console.log(TAG + "====>Create Subscriber3====>");
//        Subscriber3 = data;
//        console.log(TAG + "data3 is : " + JSON.stringify(Subscriber3))
//        await commonEvent.subscribe(Subscriber3, SubscribeCallBack_mainAbility);
//
//      });
//
//      missionManager.getMissionInfos("", 20, (error, data) => {
//        console.log(TAG + "Emtry MainAbility getMissionInfos success, error: "
//        + JSON.stringify(error) + ", data: " + JSON.stringify(data));
//
//        for (var i = 0; i < data.length; i++) {
//          if (data[i].want.abilityName == "com.example.missionapplication.MainAbility") {
//            ability1MissionList.push(data[i].missionId);
//          }
//        }
//        console.log(TAG + "ability1MissionList is: " + JSON.stringify(ability1MissionList))
//
//        missionManager.lockMission(ability1MissionList[0], (error, data) => {
//          console.log(TAG + "Emtry MainAbility lockMission success, error: "
//          + JSON.stringify(error) + ", data: " + JSON.stringify(data));
//          missionManager.clearAllMissions((err, data) => {
//            console.log(TAG + "Emtry MainAbility clearAllMissions success, error: "
//            + JSON.stringify(error) + ", data: " + JSON.stringify(data));
//          })
//        });
//      });
//
//
//      setTimeout(function () {
//        abilityContext.startAbility({
//          bundleName: "com.example.missionapplication",
//          abilityName: "com.example.missionapplication.MainAbility2"
//        }, (error, data) => {
//          console.log(TAG + " startAbility2 success, error: "
//          + JSON.stringify(error) + ", data: " + JSON.stringify(data));
//        });
//      }, 1000)
//
//      setTimeout(function () {
//        abilityContext.startAbility({
//          bundleName: "com.example.missionapplication",
//          abilityName: "com.example.missionapplication.MainAbility3"
//        }, (error, data) => {
//          console.log(TAG + " startAbility2 success, error: "
//          + JSON.stringify(error) + ", data: " + JSON.stringify(data));
//        });
//      }, 1500);
//
//      setTimeout(function () {
//        missionManager.getMissionInfos("", 20, (error, data) => {
//          console.log(TAG + "Emtry MainAbility3 getMissionInfos success, error: "
//          + JSON.stringify(error) + ", data: " + JSON.stringify(data));
//
//          for (var i = 0; i < data.length; i++) {
//            if (data[i].want.abilityName == "com.example.missionapplication.MainAbility3") {
//              console.log(TAG + "ability3MissionId is " + data[i].missionId);
//              ability3MissionList.push(data[i].missionId);
//            }
//          }
//          console.log(TAG + "ability3MissionList is: " + JSON.stringify(ability3MissionList))
//        });
//      }, 2000)
//
//      setTimeout(function () {
//        console.log(TAG + "MainAbility ability3MissionList data " + parseInt(ability3MissionList[0]));
//        missionManager.moveMissionToFront(parseInt(ability3MissionList[0]), (error, data) => {
//          console.log(TAG + "MainAbility3 moveMissionToFront success, error: "
//          + JSON.stringify(error) + ", data: " + JSON.stringify(data));
//          console.log(TAG + "-->list is : " + list)
//          console.log(TAG + "-->list2 is : " + list2)
//          console.log(TAG + "-->list3 is : " + list3)
//          expect(list[0]).assertEqual("onBackground");
//          expect(list[1]).assertEqual("onWindowStageDestroy");
//          expect(list[2]).assertEqual("onDestroy");
//          expect(list2[0]).assertEqual("onForeground");
//          expect(list2[1]).assertEqual("onBackground");
//          expect(list2[2]).assertEqual("onWindowStageDestroy");
//          expect(list2[3]).assertEqual("onDestroy");
//          expect(list3[0]).assertEqual("onForeground");
//        });
//      }, 3500)
//      console.log("------------end SUB_AA_OpenHarmony_MoveMissionToFront_0800-------------");
//    })


    /*
                           * @tc.number  SUB_AA_OpenHarmony_MoveMissionToFront_0900
                             * @tc.name    Switch the mission in the middle of the foremost mission
                                            list in currentmissionlists to the foreground
                             * @tc.desc    Function test
                             * @tc.level   0
                             */

//    it('SUB_AA_OpenHarmony_MoveMissionToFront_0900', 0, async function (done) {
//      console.log("------------start SUB_AA_OpenHarmony_MoveMissionToFront_0900-------------");
//      TAG = "SUB_AA_OpenHarmony_MoveMissionToFront_0900"
//      var Subscriber = "";
//      var Subscriber2 = "";
//      var Subscriber3 = "";
//      var list = ["", "", "", ""];
//      var list2 = [""]
//      var list3 = [""];
//      var ability1MissionList = [];
//      var ability2MissionList = [];
//
//      function SubscribeCallBack_mainAbility2(err, data) {
//        console.log(TAG + " Subscribe CallBack data:" + JSON.stringify(data));
//        if (data.event == "mainAbility2_onForeground") {
//          list[0] = "onForeground";
//        } else if (data.event == "mainAbility2_onBackground") {
//          list[1] = "onBackground";
//        } else if (data.event == "mainAbility2_onWindowStageDestroy") {
//          list[2] = "onWindowStageDestroy";
//        } else if (data.event == "mainAbility2_onDestroy") {
//          list[3] = "onDestroy";
//        }
//        console.log(TAG + "list is : " + list)
//      }
//
//      function SubscribeCallBack_mainAbility3(err, data) {
//        console.log(TAG + " Subscribe2 CallBack data:" + JSON.stringify(data));
//        if (data.event == "mainAbility3_onBackground") {
//          list2[0] = "onBackground";
//        }
//        console.log(TAG + "list2 is : " + list2)
//      }
//
//      function SubscribeCallBack_mainAbility(err, data) {
//        console.log(TAG + " Subscribe3 CallBack data:" + JSON.stringify(data));
//        if (data.event == "mainAbility_onForeground") {
//          list3[0] = "onForeground";
//        }
//        console.log(TAG + "list3 is : " + list3)
//      }
//
//      commonEvent.createSubscriber(ability2LifeEvents).then(async (data) => {
//        console.log(TAG + "====>Create Subscriber====>");
//        Subscriber = data;
//        console.log(TAG + "data is : " + JSON.stringify(Subscriber))
//        await commonEvent.subscribe(Subscriber, SubscribeCallBack_mainAbility2);
//
//      });
//
//      commonEvent.createSubscriber(ability3LifeEvents3).then(async (data) => {
//        console.log(TAG + "====>Create Subscriber2====>");
//        Subscriber2 = data;
//        console.log(TAG + "data2 is : " + JSON.stringify(Subscriber2))
//        await commonEvent.subscribe(Subscriber2, SubscribeCallBack_mainAbility3);
//
//      });
//
//      commonEvent.createSubscriber(abilityLifeEvents2).then(async (data) => {
//        console.log(TAG + "====>Create Subscriber3====>");
//        Subscriber3 = data;
//        console.log(TAG + "data3 is : " + JSON.stringify(Subscriber3))
//        await commonEvent.subscribe(Subscriber3, SubscribeCallBack_mainAbility);
//
//      });
//
//
//      missionManager.getMissionInfos("", 20, (error, data) => {
//        console.log(TAG + "Emtry MainAbility getMissionInfos success, error: "
//        + JSON.stringify(error) + ", data: " + JSON.stringify(data));
//
//        for (var i = 0; i < data.length; i++) {
//          if (data[i].want.abilityName == "com.example.missionapplication.MainAbility") {
//            console.log(TAG + "ability1MissionId is " + data[i].missionId);
//            ability1MissionList.push(data[i].missionId);
//          }
//        }
//        console.log(TAG + "ability1MissionList is: " + JSON.stringify(ability1MissionList))
//
//        missionManager.lockMission(ability1MissionList[0], (error, data) => {
//          console.log(TAG + "Emtry MainAbility lockMission success, error: "
//          + JSON.stringify(error) + ", data: " + JSON.stringify(data));
//          missionManager.clearAllMissions((err, data) => {
//            console.log(TAG + "Emtry MainAbility clearAllMissions success, error: "
//            + JSON.stringify(error) + ", data: " + JSON.stringify(data));
//          })
//        });
//        console.log(TAG + "ability1MissionList 2 is: " + JSON.stringify(ability1MissionList))
//      });
//
//      setTimeout(function () {
//        abilityContext.startAbility({
//          bundleName: "com.example.missionapplication",
//          abilityName: "com.example.missionapplication.MainAbility2"
//        }, (error, data) => {
//          console.log(TAG + " startAbility1 success, error: "
//          + JSON.stringify(error) + ", data: " + JSON.stringify(data));
//        });
//      }, 1000)
//      setTimeout(function () {
//        abilityContext.startAbility({
//          bundleName: "com.example.missionapplication",
//          abilityName: "com.example.missionapplication.MainAbility3"
//        }, (error, data) => {
//          console.log(TAG + " startAbility2 success, error: "
//          + JSON.stringify(error) + ", data: " + JSON.stringify(data));
//        });
//      }, 2000)
//
//      setTimeout(function () {
//        missionManager.getMissionInfos("", 20, (error, data) => {
//          console.log(TAG + "Emtry MainAbility3 getMissionInfos success, error: "
//          + JSON.stringify(error) + ", data: " + JSON.stringify(data));
//
//          for (var i = 0; i < data.length; i++) {
//            if (data[i].want.abilityName == "com.example.missionapplication.MainAbility2") {
//              console.log(TAG + "ability2MissionId is " + data[i].missionId);
//              ability2MissionList.push(data[i].missionId);
//            }
//          }
//          console.log(TAG + "ability2MissionList is: " + JSON.stringify(ability2MissionList))
//        });
//      }, 2500)
//
//      setTimeout(function () {
//        console.log(TAG + "MainAbility ability2MissionList data " + parseInt(ability2MissionList[0]));
//        missionManager.moveMissionToFront(parseInt(ability2MissionList[0]), (error, data) => {
//          console.log(TAG + "MainAbility2 moveMissionToFront success, error: "
//          + JSON.stringify(error) + ", data: " + JSON.stringify(data));
//          console.log(TAG + "-->list is : " + list)
//          console.log(TAG + "-->list2 is : " + list2)
//          console.log(TAG + "-->list3 is : " + list3)
//          expect(list[0]).assertEqual("onShow");
//          expect(list[1]).assertEqual("onHide");
//          expect(list[2]).assertEqual("onInactive");
//          expect(list[3]).assertEqual("onDestroy");
//          expect(list2[0]).assertEqual("onHide");
//          expect(list3[0]).assertEqual("onShow");
//        });
//        done()
//      }, 4500)
//      console.log("------------end SUB_AA_OpenHarmony_MoveMissionToFront_0900-------------");
//    });
    /*
             * @tc.number  SUB_AA_OpenHarmony_MoveMissionToFront_1000
             * @tc.name    Switch to the front of the currentmissionlists and the back of the missionlist to the foreground
             * @tc.desc    Function test
             * @tc.level   0
             */
//    it('SUB_AA_OpenHarmony_MoveMissionToFront_1000', 0, async function (done) {
//      console.log("------------start SUB_AA_OpenHarmony_MoveMissionToFront_1000-------------");
//      TAG = "SUB_AA_OpenHarmony_MoveMissionToFront_1000"
//      var Subscriber = "";
//      var Subscriber2 = "";
//      var list = [""];
//      var list2 = [""]
//      var ability1MissionList = [];
//      ["mainAbility2_onBackground",
//      "mainAbility2_onWindowStageDestroy",
//      "mainAbility2_onDestroy",
//      "mainAbility2_onCreate",
//      "mainAbility2_onWindowStageCreate",
//      "mainAbility2_onForeground"]
//
//      function SubscribeCallBack_mainAbility(err, data) {
//        console.log(TAG + " Subscribe CallBack data:" + JSON.stringify(data));
//        if (data.event == "mainAbility_onForeground") {
//          list[0] = "onForeground";
//        }
//        console.log(TAG + "list is : " + list)
//      }
//
//      function SubscribeCallBack_mainAbility3(err, data) {
//        console.log(TAG + " Subscribe2 CallBack data:" + JSON.stringify(data));
//        if (data.event == "mainAbility3_onBackground") {
//          list2[0] = "onBackground";
//        }
//        console.log(TAG + "list2 is : " + list2)
//      }
//
//      commonEvent.createSubscriber(abilityLifeEvents2).then(async (data) => {
//        console.log(TAG + "====>Create Subscriber====>");
//        Subscriber = data;
//        console.log(TAG + "data is : " + JSON.stringify(Subscriber))
//        await commonEvent.subscribe(Subscriber, SubscribeCallBack_mainAbility);
//
//      });
//
//      commonEvent.createSubscriber(ability3LifeEvents3).then(async (data) => {
//        console.log(TAG + "====>Create Subscriber2====>");
//        Subscriber2 = data;
//        console.log(TAG + "data2 is : " + JSON.stringify(Subscriber2))
//        await commonEvent.subscribe(Subscriber2, SubscribeCallBack_mainAbility3);
//
//      });
//
//      setTimeout(function () {
//        missionManager.getMissionInfos("", 20, (error, data) => {
//          console.log(TAG + "Emtry MainAbility getMissionInfos success, error: "
//          + JSON.stringify(error) + ", data: " + JSON.stringify(data));
//
//          for (var i = 0; i < data.length; i++) {
//            if (data[i].want.abilityName == "com.example.missionapplication.MainAbility") {
//              console.log(TAG + "ability1MissionId is " + data[i].missionId);
//              ability1MissionList.push(data[i].missionId);
//            }
//          }
//          console.log(TAG + "ability1MissionList is: " + JSON.stringify(ability1MissionList))
//
//          missionManager.lockMission(ability1MissionList[0], (error, data) => {
//            console.log(TAG + "Emtry MainAbility lockMission success, error: "
//            + JSON.stringify(error) + ", data: " + JSON.stringify(data));
//            missionManager.clearAllMissions((err, data) => {
//              console.log(TAG + "Emtry MainAbility clearAllMissions success, error: "
//              + JSON.stringify(error) + ", data: " + JSON.stringify(data));
//            })
//          });
//          console.log(TAG + "ability1MissionList 2 is: " + JSON.stringify(ability1MissionList))
//        });
//      }, 500)
//
//      setTimeout(function () {
//        abilityContext.startAbility({
//            bundleName: "com.example.missionapplication",
//            abilityName: "com.example.missionapplication.MainAbility2"
//        }, (error, data) => {
//          console.log(TAG + " startAbility1 success, error: "
//          + JSON.stringify(error) + ", data: " + JSON.stringify(data));
//        });
//      }, 1000)
//      setTimeout(function () {
//        abilityContext.startAbility({
//            bundleName: "com.example.missionapplication",
//            abilityName: "com.example.missionapplication.MainAbility3"
//        }, (error, data) => {
//          console.log(TAG + " startAbility2 success, error: "
//          + JSON.stringify(error) + ", data: " + JSON.stringify(data));
//        });
//      }, 1500)
//
//      setTimeout(function () {
//        console.log(TAG + "MainAbility ability1MissionList data " + parseInt(ability1MissionList[0]));
//        missionManager.moveMissionToFront(parseInt(ability1MissionList[0]), (error, data) => {
//          console.log(TAG + "MainAbility moveMissionToFront success, error: "
//          + JSON.stringify(error) + ", data: " + JSON.stringify(data));
//          console.log(TAG + "-->list is : " + list)
//          console.log(TAG + "-->list2 is : " + list2)
//          expect(list[0]).assertEqual("onForeground");
//          expect(list2[0]).assertEqual("onBackground");
//        });
//        done()
//      }, 4500)
//      console.log("------------end SUB_AA_OpenHarmony_MoveMissionToFront_1000-------------");
//    });
    /*
                             * @tc.number  SUB_AA_OpenHarmony_MoveMissionToFront_1700
                             * @tc.name    Switch the terminated mission to the foreground
                             * @tc.desc    Function test
                             * @tc.level   0
                             */
//    it('SUB_AA_OpenHarmony_MoveMissionToFront_1700', 0, async function (done) {
//      console.log("------------start SUB_AA_OpenHarmony_MoveMissionToFront_1700-------------");
//      TAG = "SUB_AA_OpenHarmony_MoveMissionToFront_1700"
//      var Subscriber = "";
//      var Subscriber2 = "";
//      var list = ["", "", "", "", "", ""];
//      var list2 = ["", ""]
//      var ability1MissionList = [];
//      var ability2MissionList = [];
//      var ability2RunningStateList = [];
//
//      function SubscribeCallBack_mainAbility2(err, data) {
//        console.log(TAG + " Subscribe CallBack data:" + JSON.stringify(data));
//        if (data.event == "mainAbility2_onBackground") {
//          list[0] = "onBackground";
//        } else if (data.event == "mainAbility2_onWindowStageDestroy") {
//          list[1] = "onWindowStageDestroy";
//        } else if (data.event == "mainAbility2_onDestroy") {
//          list[2] = "onDestroy";
//        } else if (data.event == "mainAbility2_onCreate") {
//          list[3] = "onCreate";
//        } else if (data.event == "mainAbility2_onWindowStageCreate") {
//          list[4] = "onWindowStageCreate";
//        } else if (data.event == "mainAbility2_onForeground") {
//          list[5] = "onForeground";
//        }
//        console.log(TAG + "list is : " + list)
//      }
//
//      function SubscribeCallBack_mainAbility(err, data) {
//        console.log(TAG + " Subscribe2 CallBack data:" + JSON.stringify(data));
//        if (data.event == "mainAbility_onForeground") {
//          list2[0] = "onForeground";
//        } else if (data.event == "mainAbility_onBackground") {
//          list2[1] = "onBackground";
//        }
//        console.log(TAG + "list2 is : " + list2)
//      }
//
//      commonEvent.createSubscriber(ability2LifeEvents2).then(async (data) => {
//        console.log(TAG + "====>Create Subscriber====>");
//        Subscriber = data;
//        console.log(TAG + "data is : " + JSON.stringify(Subscriber))
//        await commonEvent.subscribe(Subscriber, SubscribeCallBack_mainAbility2);
//
//      });
//
//      commonEvent.createSubscriber(abilityLifeEvents).then(async (data) => {
//        console.log(TAG + "====>Create Subscriber2====>");
//        Subscriber2 = data;
//        console.log(TAG + "data2 is : " + JSON.stringify(Subscriber2))
//        await commonEvent.subscribe(Subscriber2, SubscribeCallBack_mainAbility);
//
//      });
//
//      setTimeout(function () {
//        missionManager.getMissionInfos("", 20, (error, data) => {
//          console.log(TAG + "Emtry MainAbility getMissionInfos success, error: "
//          + JSON.stringify(error) + ", data: " + JSON.stringify(data));
//
//          for (var i = 0; i < data.length; i++) {
//            if (data[i].want.abilityName == "com.example.missionapplication.MainAbility") {
//              console.log(TAG + "ability1MissionId is " + data[i].missionId);
//              ability1MissionList.push(data[i].missionId);
//            }
//          }
//          console.log(TAG + "ability1MissionList is: " + JSON.stringify(ability1MissionList))
//
//          missionManager.lockMission(ability1MissionList[0], (error, data) => {
//            console.log(TAG + "Emtry MainAbility lockMission success, error: "
//            + JSON.stringify(error) + ", data: " + JSON.stringify(data));
//            missionManager.clearAllMissions((err, data) => {
//              console.log(TAG + "Emtry MainAbility clearAllMissions success, error: "
//              + JSON.stringify(error) + ", data: " + JSON.stringify(data));
//            })
//          });
//          console.log(TAG + "ability1MissionList 2 is: " + JSON.stringify(ability1MissionList))
//        });
//      }, 500)
//
//      setTimeout(function () {
//        abilityContext.startAbility({
//            bundleName: "com.example.missionapplication",
//            abilityName: "com.example.missionapplication.MainAbility2"
//        }, (error, data) => {
//          console.log(TAG + " startAbility1 success, error: "
//          + JSON.stringify(error) + ", data: " + JSON.stringify(data));
//        });
//      }, 1000)
//
//      setTimeout(function () {
//        missionManager.getMissionInfos("", 20, (error, data) => {
//          console.log(TAG + "Emtry MainAbility2 getMissionInfos success, error: "
//          + JSON.stringify(error) + ", data: " + JSON.stringify(data));
//
//          for (var i = 0; i < data.length; i++) {
//            if (data[i].want.abilityName == "com.example.missionapplication.MainAbility2") {
//              console.log(TAG + "ability2MissionId is " + data[i].missionId);
//              ability2MissionList.push(data[i].missionId);
//            }
//          }
//          console.log(TAG + "ability2MissionList is: " + JSON.stringify(ability2MissionList))
//        });
//      }, 2500)
//
//      setTimeout(function () {
//        console.log(TAG + "MainAbility ability2MissionList data " + parseInt(ability2MissionList[0]));
//        missionManager.moveMissionToFront(parseInt(ability2MissionList[0]), (error, data) => {
//          console.log(TAG + "MainAbility2 moveMissionToFront success, error: "
//          + JSON.stringify(error) + ", data: " + JSON.stringify(data));
//          console.log(TAG + "-->list is : " + list)
//          console.log(TAG + "-->list2 is : " + list2)
//          expect(list[0]).assertEqual("onBackground");
//          expect(list[1]).assertEqual("onWindowStageDestroy");
//          expect(list[2]).assertEqual("onDestroy");
//          expect(list[3]).assertEqual("onCreate");
//          expect(list[4]).assertEqual("onWindowStageCreate");
//          expect(list[5]).assertEqual("onForeground");
//          expect(list2[0]).assertEqual("onForeground");
//          expect(list2[2]).assertEqual("onBackground");
//        });
//      }, 3500)
//
//      setTimeout(function () {
//        missionManager.getMissionInfos("", 20, (error, data) => {
//          console.log(TAG + "Emtry MainAbility2 getMissionInfos success, error: "
//          + JSON.stringify(error) + ", data: " + JSON.stringify(data));
//
//          for (var i = 0; i < data.length; i++) {
//            if (data[i].want.abilityName == "com.example.missionapplication.MainAbility2") {
//              console.log(TAG + "ability2runningState is " + data[i].runningState);
//              ability2RunningStateList.push(data[i].runningState);
//            }
//          }
//          console.log(TAG + "ability2RunningStateList is: " + JSON.stringify(ability2RunningStateList))
//        });
//        done()
//      }, 4500)
//      console.log("------------end SUB_AA_OpenHarmony_MoveMissionToFront_1700-------------");
//    });

    /*
                             * @tc.number  SUB_AA_OpenHarmony_MoveMissionToFront_1900
                             * @tc.name    Switch the cleaned mission to the foreground
                             * @tc.desc    Function test
                             * @tc.level   0
                             */
//    it('SUB_AA_OpenHarmony_MoveMissionToFront_1900', 0, async function (done) {
//      console.log("------------start SUB_AA_OpenHarmony_MoveMissionToFront_1900-------------");
//      TAG = "SUB_AA_OpenHarmony_MoveMissionToFront_1900"
//      var Subscriber = "";
//      var Subscriber2 = "";
//      var list = ["", "", "", "", "", ""];
//      var list2 = ["", ""]
//      var ability1MissionList = [];
//      var ability2MissionList = [];
//
//      function SubscribeCallBack_mainAbility2(err, data) {
//        console.log(TAG + " Subscribe CallBack data:" + JSON.stringify(data));
//        if (data.event == "mainAbility2_onBackground") {
//          list[0] = "onBackground";
//        } else if (data.event == "mainAbility2_onWindowStageDestroy") {
//          list[1] = "onWindowStageDestroy";
//        } else if (data.event == "mainAbility2_onDestroy") {
//          list[2] = "onDestroy";
//        } else if (data.event == "mainAbility2_onCreate") {
//          list[3] = "onCreate";
//        } else if (data.event == "mainAbility2_onWindowStageCreate") {
//          list[4] = "onWindowStageCreate";
//        } else if (data.event == "mainAbility2_onForeground") {
//          list[5] = "onForeground";
//        }
//        console.log(TAG + "list is : " + list)
//      }
//
//      function SubscribeCallBack_mainAbility(err, data) {
//        console.log(TAG + " Subscribe2 CallBack data:" + JSON.stringify(data));
//        if (data.event == "mainAbility_onBackground") {
//          list2[0] = "onBackground";
//        } else if (data.event == "mainAbility_onForeground") {
//          list2[1] = "onForeground";
//        }
//        console.log(TAG + "list2 is : " + list2)
//      }
//
//      commonEvent.createSubscriber(ability2LifeEvents2).then(async (data) => {
//        console.log(TAG + "====>Create Subscriber====>");
//        Subscriber = data;
//        console.log(TAG + "data is : " + JSON.stringify(Subscriber))
//        await commonEvent.subscribe(Subscriber, SubscribeCallBack_mainAbility2);
//
//      });
//
//      commonEvent.createSubscriber(abilityLifeEvents).then(async (data) => {
//        console.log(TAG + "====>Create Subscriber2====>");
//        Subscriber2 = data;
//        console.log(TAG + "data2 is : " + JSON.stringify(Subscriber2))
//        await commonEvent.subscribe(Subscriber2, SubscribeCallBack_mainAbility);
//
//      });
//
//      setTimeout(function () {
//        missionManager.getMissionInfos("", 20, (error, data) => {
//          console.log(TAG + "Emtry MainAbility getMissionInfos success, error: "
//          + JSON.stringify(error) + ", data: " + JSON.stringify(data));
//
//          for (var i = 0; i < data.length; i++) {
//            if (data[i].want.abilityName == "com.example.missionapplication.MainAbility") {
//              ability1MissionList.push(data[i].missionId);
//            }
//          }
//          console.log(TAG + "ability1MissionList is: " + JSON.stringify(ability1MissionList))
//
//          missionManager.lockMission(ability1MissionList[0], (error, data) => {
//            console.log(TAG + "Emtry MainAbility lockMission success, error: "
//            + JSON.stringify(error) + ", data: " + JSON.stringify(data));
//            missionManager.clearAllMissions((err, data) => {
//              console.log(TAG + "Emtry MainAbility clearAllMissions success, error: "
//              + JSON.stringify(error) + ", data: " + JSON.stringify(data));
//            })
//          });
//          console.log(TAG + "ability1MissionList 2 is: " + JSON.stringify(ability1MissionList))
//        });
//      }, 500)
//
//      setTimeout(function () {
//        var id = missionManager.registerMissionListener({
//          listener: {
//            onMissionCreated: {
//              mission: ability1MissionList[0]
//            }
//          }
//        })
//        console.log(TAG + " registerMissionListener id is :" + id);
//        expect(id == 1)
//        .assertTrue;
//      }, 1500)
//
//      setTimeout(function () {
//        abilityContext.startAbility({
//            bundleName: "com.example.missionapplication",
//            abilityName: "com.example.missionapplication.MainAbility2"
//        }, (error, data) => {
//          console.log(TAG + " startAbility1 success, error: "
//          + JSON.stringify(error) + ", data: " + JSON.stringify(data));
//        });
//      }, 2500)
//
//      setTimeout(function () {
//        missionManager.getMissionInfos("", 20, (error, data) => {
//          console.log(TAG + "Emtry MainAbility2 getMissionInfos success, error: "
//          + JSON.stringify(error) + ", data: " + JSON.stringify(data));
//
//          for (var i = 0; i < data.length; i++) {
//            if (data[i].want.abilityName == "com.example.missionapplication.MainAbility2") {
//              console.log(TAG + "ability2MissionId is " + data[i].missionId);
//              ability2MissionList.push(data[i].missionId);
//            }
//            missionManager.clearMission(data[i].missionId, (err, data) => {
//              console.log(TAG + " Ability2 clearMission success, error: "
//              + JSON.stringify(err) + ", data: " + JSON.stringify(data));
//            })
//          }
//        });
//        console.log(TAG + " list is : " + list);
//        console.log(TAG + " list2 is : " + list2);
//        expect(list[0]).assertEqual("onBackground");
//        expect(list[1]).assertEqual("onWindowStageDestroy");
//        expect(list[2]).assertEqual("onDestroy");
//        expect(list[3]).assertEqual("onCreate");
//        expect(list[4]).assertEqual("onWindowStageCreate");
//        expect(list[5]).assertEqual("onForeground");
//        expect(list2[0]).assertEqual("onHide");
//        expect(list2[1]).assertEqual("onShow");
//      }, 3500)
//
//      setTimeout(function () {
//        console.log(TAG + "MainAbility ability2MissionList data " + parseInt(ability2MissionList[0]));
//        missionManager.moveMissionToFront(parseInt(ability2MissionList[0]), (error, data) => {
//          console.log(TAG + "MainAbility2 moveMissionToFront fail, error: "
//          + JSON.stringify(error) + ", data: " + JSON.stringify(data));
//          expect(error.code == 2097181)
//          .assertTrue;
//        });
//        done()
//      }, 4000)
//
//
//      console.log("------------end SUB_AA_OpenHarmony_MoveMissionToFront_1900-------------");
//    });



        /*
         * @tc.number  SUB_AA_OpenHarmony_MoveMissionToFront_2000
         * @tc.name    Switching the mission in the launcherlist to the foreground is not supported
         * @tc.desc    Function test
         * @tc.level   0
         */
//        it('SUB_AA_OpenHarmony_MoveMissionToFront_2000', 0, async function (done) {
//            console.log("------------start SUB_AA_OpenHarmony_MoveMissionToFront_2000-------------");
//            TAG = "SUB_AA_OpenHarmony_MoveMissionToFront_2000"
//            var missionid = "";
//            var Subscriber = "";
//            var Subscriber2 = "";
//            var Subscriber3= "";
////            var ability2LifeEvents2 = {
////              events: ["mainAbility2_onBackground",
////              "mainAbility2_onWindowStageDestroy",
////              "mainAbility2_onDestroy",
////              "mainAbility2_onCreate",
////              "mainAbility2_onWindowStageCreate",
////              "mainAbility2_onForeground"]
////            }
////            var ability3LifeEvents3 = {
////              events: ["mainAbility3_onForeground",
////              "mainAbility3_onBackground",
////              "mainAbility3_onWindowStageCreate",
////              "mainAbility3_onCreate"]
////            }
////            var abilityLifeEvents3 = {
////              events: [
////                "mainAbility_onBackground",]
////            }
//
//            var list = ["", "", "", "", "", "",""];
//            var list2 = ["", "", "", "", ""];
//            var list3 = [""]
//            var ability1MissionList = [];
//            var ability2MissionList = [];
//
//            function SubscribeCallBack_mainAbility2(err, data) {
//              console.log(TAG + " Subscribe CallBack data:" + JSON.stringify(data));
//              if (data.event == "mainAbility2_onBackground") {
//                list[0] = "onBackground";
//              } else if (data.event == "mainAbility2_onWindowStageDestroy") {
//                list[1] = "onWindowStageDestroy";
//              } else if (data.event == "mainAbility2_onCreate") {
//                list[2] = "onCreate";
//              } else if (data.event == "mainAbility2_onWindowStageCreate") {
//                list[3] = "onWindowStageCreate";
//              } else if (data.event == "mainAbility2_onForeground") {
//                list[4] = "onForeground";
//              }
//              console.log(TAG + "list is : " + list)
//            }
//
//            function SubscribeCallBack_mainAbility3(err, data) {
//              console.log(TAG + " Subscribe3 CallBack data:" + JSON.stringify(data));
//              if (data.event == "mainAbility3_onBackground") {
//                list2[0] = "onBackground";
//              } else if (data.event == "mainAbility3_onForeground") {
//                list2[1] = "onForeground";
//              } else if (data.event == "mainAbility3_onWindowStageCreate") {
//                list2[2] = "onWindowStageCreate";
//              } else if (data.event == "mainAbility3_onCreate") {
//                list2[3] = "onCreate";
//              }
//              console.log(TAG + "list2 is : " + list2)
//            }
//
//            function SubscribeCallBack_mainAbility(err, data) {
//              console.log(TAG + " Subscribe2 CallBack data:" + JSON.stringify(data));
//              if (data.event == "mainAbility_onBackground") {
//                list3[0] = "onBackground";
//              }
//              console.log(TAG + "list2 is : " + list2)
//            }
//
//            commonEvent.createSubscriber(ability2LifeEvents3).then(async (data) => {
//              console.log(TAG + "====>Create Subscriber====>");
//              Subscriber = data;
//              console.log(TAG + "data is : " + JSON.stringify(Subscriber))
//              await commonEvent.subscribe(Subscriber, SubscribeCallBack_mainAbility2);
//
//            });
//            commonEvent.createSubscriber(ability3LifeEvents3).then(async (data) => {
//              console.log(TAG + "====>Create Subscriber====>");
//              Subscriber = data;
//              console.log(TAG + "data is : " + JSON.stringify(Subscriber))
//              await commonEvent.subscribe(Subscriber, SubscribeCallBack_mainAbility3);
//
//            });
//
//
//            commonEvent.createSubscriber(abilityLifeEvents3).then(async (data) => {
//              console.log(TAG + "====>Create Subscriber2====>");
//              Subscriber2 = data;
//              console.log(TAG + "data2 is : " + JSON.stringify(Subscriber2))
//              await commonEvent.subscribe(Subscriber2, SubscribeCallBack_mainAbility);
//            });
//
//            setTimeout(function () {
//              missionManager.getMissionInfos("", 20, (error, data) => {
//                console.log(TAG + "Emtry MainAbility getMissionInfos success, error: "
//                + JSON.stringify(error) + ", data: " + JSON.stringify(data));
//
//                for (var i = 0; i < data.length; i++) {
//                  if (data[i].want.abilityName == "com.example.missionapplication.MainAbility") {
//                    ability1MissionList.push(data[i].missionId);
//                  }
//                }
//                console.log(TAG + "ability1MissionList is: " + JSON.stringify(ability1MissionList))
//
//                missionManager.lockMission(ability1MissionList[0], (error, data) => {
//                  console.log(TAG + "Emtry MainAbility lockMission success, error: "
//                  + JSON.stringify(error) + ", data: " + JSON.stringify(data));
//                  missionManager.clearAllMissions((err, data) => {
//                    console.log(TAG + "Emtry MainAbility clearAllMissions success, error: "
//                    + JSON.stringify(error) + ", data: " + JSON.stringify(data));
//                  })
//                });
//                console.log(TAG + "ability1MissionList 2 is: " + JSON.stringify(ability1MissionList))
//              });
//            }, 500)
//
//
//            setTimeout(function () {
//              var id = missionManager.registerMissionListener({
//                listener: {
//                  onMissionCreated: {
//                    mission: ability1MissionList[0]
//                  }
//                }
//              })
//              console.log(TAG + " registerMissionListener id is :" + id);
//              expect(id == 1)
//              .assertTrue;
//            }, 1500)
//
//            setTimeout(function() {
//                abilityContext.startAbility({
//                        bundleName: "com.example.aux7application",
//                        abilityName: "com.example.aux7application.MainAbility2"
//                }, (error, data) => {
//                    console.log(TAG + " startAbility success, error: "
//                    + JSON.stringify(error) + ", data: " + JSON.stringify(data));
//                });
//            }, 2000)
//            setTimeout(function() {
//              abilityContext.startAbility({
//                bundleName: "com.example.missionapplication",
//                abilityName: "com.example.missionapplication.MainAbility3"
//              }, (error, data) => {
//                console.log(TAG + " startAbility success, error: "
//                + JSON.stringify(error) + ", data: " + JSON.stringify(data));
//              });
//            }, 2000)
//
//            setTimeout(function () {
//              missionManager.getMissionInfos("", 20, (error, data) => {
//                console.log(TAG + "Emtry MainAbility2 getMissionInfos success, error: "
//                + JSON.stringify(error) + ", data: " + JSON.stringify(data));
//
//                for (var i = 0; i < data.length; i++) {
//                  if (data[i].want.abilityName == "com.example.missionapplication.MainAbility2") {
//                    console.log(TAG + "ability2MissionId is " + data[i].missionId);
//                    ability2MissionList.push(data[i].missionId);
//                  }
////                  missionManager.clearMission(data[i].missionId, (err, data) => {
////                    console.log(TAG + " Ability2 clearMission success, error: "
////                    + JSON.stringify(err) + ", data: " + JSON.stringify(data));
////                  })
//                }
//              });
//              console.log(TAG + " list is : " + list);
//              console.log(TAG + " list2 is : " + list2);
//
//              expect(list[0]).assertEqual("onBackground");
//              expect(list[1]).assertEqual("onWindowStageDestroy");
//              expect(list[2]).assertEqual("onCreate");
//              expect(list[3]).assertEqual("onWindowStageCreate");
//              expect(list[4]).assertEqual("onForeground");
//              expect(list2[0]).assertEqual("onBackground");
//              expect(list2[1]).assertEqual("onForeground");
//              expect(list2[2]).assertEqual("onWindowStageCreate");
//              expect(list2[3]).assertEqual("onCreate");
//
//              expect(list3[0]).assertEqual("onBackground");
//
//            }, 3500)
//
//            setTimeout(function () {
//              console.log(TAG + "MainAbility ability2MissionList data " + parseInt(ability2MissionList[0]));
//              missionManager.moveMissionToFront(parseInt(ability2MissionList[0]), (error, data) => {
//                console.log(TAG + "MainAbility2 moveMissionToFront fail, error: "
//                + JSON.stringify(error) + ", data: " + JSON.stringify(data));
//              });
//              done()
//            }, 4000)
//            console.log("------------end SUB_AA_OpenHarmony_MoveMissionToFront_2000-------------");
//        });

        /*
         * @tc.number  SUB_AA_OpenHarmony_MoveMissionToFront_2100
         * @tc.name    Switching the mission in the launcherlist to the foreground is not supported
         * @tc.desc    Function test
         * @tc.level   0
         */
//        it('SUB_AA_OpenHarmony_MoveMissionToFront_2100', 0, async function (done) {
//            console.log("------------start SUB_AA_OpenHarmony_MoveMissionToFront_2100-------------");
//            TAG = "SUB_AA_OpenHarmony_MoveMissionToFront_2100"
//            var abilityMissionList =[];
//            var missionid = "";
//            var Subscriber = "";
//            var Subscriber2 = "";
//            var list = ["", "", "", "", "", "",""];
//            var list2 = [""];
//            var ability1MissionList = [];
//            var ability2MissionList = [];
//
//            function SubscribeCallBack_mainAbility2(err, data) {
//              console.log(TAG + " Subscribe CallBack data:" + JSON.stringify(data));
//              if (data.event == "mainAbility2_onBackground") {
//                list[0] = "onBackground";
//              } else if (data.event == "mainAbility2_onWindowStageDestroy") {
//                list[1] = "onWindowStageDestroy";
//              }else if (data.event == "mainAbility2_onCreate") {
//                list[2] = "onCreate";
//              } else if (data.event == "mainAbility2_onWindowStageCreate") {
//                list[3] = "onWindowStageCreate";
//              } else if (data.event == "mainAbility2_onForeground") {
//                list[4] = "onForeground";
//              }
//              console.log(TAG + "list is : " + list)
//            }
//
//            function SubscribeCallBack_mainAbility(err, data) {
//              console.log(TAG + " Subscribe2 CallBack data:" + JSON.stringify(data));
//              if (data.event == "mainAbility_onBackground") {
//                list2[0] = "onBackground";
//              }
//              console.log(TAG + "list2 is : " + list2)
//            }
//
//            commonEvent.createSubscriber(ability2LifeEvents3).then(async (data) => {
//              console.log(TAG + "====>Create Subscriber====>");
//              Subscriber = data;
//              console.log(TAG + "data is : " + JSON.stringify(Subscriber))
//              await commonEvent.subscribe(Subscriber, SubscribeCallBack_mainAbility2);
//            });
//            commonEvent.createSubscriber(abilityLifeEvents3).then(async (data) => {
//              console.log(TAG + "====>Create Subscriber====>");
//              Subscriber = data;
//              console.log(TAG + "data is : " + JSON.stringify(Subscriber))
//              await commonEvent.subscribe(Subscriber1, SubscribeCallBack_mainAbility);
//            });
//
//            setTimeout(function () {
//              missionManager.getMissionInfos("", 20, (error, data) => {
//                console.log(TAG + "Emtry MainAbility getMissionInfos success, error: "
//                + JSON.stringify(error) + ", data: " + JSON.stringify(data));
//
//                for (var i = 0; i < data.length; i++) {
//                  if (data[i].want.abilityName == "com.example.missionapplication.MainAbility") {
//                    ability1MissionList.push(data[i].missionId);
//                  }
//                }
//                console.log(TAG + "ability1MissionList is: " + JSON.stringify(ability1MissionList))
//
//                missionManager.lockMission(ability1MissionList[0], (error, data) => {
//                  console.log(TAG + "Emtry MainAbility lockMission success, error: "
//                  + JSON.stringify(error) + ", data: " + JSON.stringify(data));
//                  missionManager.clearAllMissions((err, data) => {
//                    console.log(TAG + "Emtry MainAbility clearAllMissions success, error: "
//                    + JSON.stringify(error) + ", data: " + JSON.stringify(data));
//                  })
//                });
//                console.log(TAG + "ability1MissionList 2 is: " + JSON.stringify(ability1MissionList))
//              });
//            }, 500)
//
//
//            setTimeout(function () {
//              var id = missionManager.registerMissionListener({
//                listener: {
//                  onMissionCreated: {
//                    mission: ability1MissionList[0]
//                  }
//                }
//              })
//              console.log(TAG + " registerMissionListener id is :" + id);
//              expect(id == 1)
//              .assertTrue;
//            }, 1500)
//
//            setTimeout(function() {
//              abilityContext.startAbility({
//                bundleName: "com.example.aux7application",
//                abilityName: "com.example.aux7application.MainAbility2"
//              }, (error, data) => {
//                console.log(TAG + " startAbility success, error: "
//                + JSON.stringify(error) + ", data: " + JSON.stringify(data));
//              });
//            }, 2000)
//
//            setTimeout(function(){
//                missionManager.getMissionInfos("", 20, (error, data) => {
//                    console.log(TAG + "Emtry MainAbility getMissionInfos success, error: "
//                    + JSON.stringify(error) + ", data: " + JSON.stringify(data));
//                    for(var i = 0; i<data.length; i++){
//                        if (data[i].want.abilityName == "com.example.missionapplication.MainAbility") {
//                            abilityMissionList.push(data[i].missionId);
//                        }
//                    }
//                    console.log(TAG + "abilityMissionList is: " + JSON.stringify(abilityMissionList))
//                });
//                expect(list[0]).assertEqual("onBackground");
//                expect(list[1]).assertEqual("onWindowStageDestroy");
//                expect(list[2]).assertEqual("onCreate");
//                expect(list[3]).assertEqual("onWindowStageCreate");
//                expect(list[4]).assertEqual("onForeground");
//                expect(list1[0]).assertEqual("onBackground");
//
//            },3000)
//
//            setTimeout(function() {
//                console.log(TAG + "MainAbility abilityMissionList data " + parseInt(abilityMissionList[0]));
//                missionManager.moveMissionToFront(parseInt(abilityMissionList[0]), (error, data) => {
//                    console.log(TAG + "MainAbility moveMissionToFront success, error: "
//                    + JSON.stringify(error) + ", data: " + JSON.stringify(data));
//                });
//            }, 4000)
//            console.log("------------end SUB_AA_OpenHarmony_MoveMissionToFront_2100-------------");
//        });

         /*
         * @tc.number  SUB_AA_OpenHarmony_MoveMissionToFront_2200
         * @tc.name    Switch the cleaned mission to the foreground
         * @tc.desc    Function test
         * @tc.level   0
         */
//        it('SUB_AA_OpenHarmony_MoveMissionToFront_2200', 0, async function (done) {
//            console.log("------------start SUB_AA_OpenHarmony_MoveMissionToFront_2200-------------");
//            TAG = "SUB_AA_OpenHarmony_MoveMissionToFront_2200"
//            var Subscriber = "";
//            var Subscriber2 = "";
//            var Subscriber3 = "";
//            var list = ["", "", "", "", "", "",""];
//            var list2 = ["", "", "", "", ""];
//            var list3 = [""]
//            var ability1MissionList = [];
//            var ability2MissionList = [];
//
//
//            function SubscribeCallBack_mainAbility2(err, data) {
//              console.log(TAG + " Subscribe CallBack data:" + JSON.stringify(data));
//              if (data.event == "mainAbility2_onBackground") {
//                list[0] = "onBackground";
//              } else if (data.event == "mainAbility2_onWindowStageDestroy") {
//                list[1] = "onWindowStageDestroy";
//              } else if (data.event == "mainAbility2_onCreate") {
//                list[2] = "onCreate";
//              } else if (data.event == "mainAbility2_onWindowStageCreate") {
//                list[3] = "onWindowStageCreate";
//              } else if (data.event == "mainAbility2_onForeground") {
//                list[4] = "onForeground";
//              }
//              console.log(TAG + "list is : " + list)
//            }
//
//            function SubscribeCallBack_mainAbility3(err, data) {
//              console.log(TAG + " Subscribe3 CallBack data:" + JSON.stringify(data));
//              if (data.event == "mainAbility3_onBackground") {
//                list2[0] = "onBackground";
//              } else if (data.event == "mainAbility3_onForeground") {
//                list2[1] = "onForeground";
//              } else if (data.event == "mainAbility3_onWindowStageCreate") {
//                list2[2] = "onWindowStageCreate";
//              } else if (data.event == "mainAbility3_onCreate") {
//                list2[3] = "onCreate";
//              }
//              else if (data.event == "mainAbility3_onWindowStageDestroy") {
//                list2[4] = "onWindowStageDestroy";
//              }
//              console.log(TAG + "list2 is : " + list2)
//            }
//
//            function SubscribeCallBack_mainAbility(err, data) {
//              console.log(TAG + " Subscribe2 CallBack data:" + JSON.stringify(data));
//              if (data.event == "mainAbility_onBackground") {
//                list3[0] = "onBackground";
//              }
//              console.log(TAG + "list2 is : " + list2)
//            }
//
//            commonEvent.createSubscriber(ability2LifeEvents3).then(async (data) => {
//              console.log(TAG + "====>Create Subscriber====>");
//              Subscriber = data;
//              console.log(TAG + "data is : " + JSON.stringify(Subscriber))
//              await commonEvent.subscribe(Subscriber, SubscribeCallBack_mainAbility2);
//
//            });
//            commonEvent.createSubscriber(ability3LifeEvents3).then(async (data) => {
//              console.log(TAG + "====>Create Subscriber====>");
//              Subscriber = data;
//              console.log(TAG + "data is : " + JSON.stringify(Subscriber))
//              await commonEvent.subscribe(Subscriber, SubscribeCallBack_mainAbility3);
//
//            });
//
//
//            commonEvent.createSubscriber(abilityLifeEvents3).then(async (data) => {
//              console.log(TAG + "====>Create Subscriber2====>");
//              Subscriber2 = data;
//              console.log(TAG + "data2 is : " + JSON.stringify(Subscriber2))
//              await commonEvent.subscribe(Subscriber2, SubscribeCallBack_mainAbility);
//            });
//
//            setTimeout(function () {
//              missionManager.getMissionInfos("", 20, (error, data) => {
//                console.log(TAG + "Emtry MainAbility getMissionInfos success, error: "
//                + JSON.stringify(error) + ", data: " + JSON.stringify(data));
//
//                for (var i = 0; i < data.length; i++) {
//                  if (data[i].want.abilityName == "com.example.missionapplication.MainAbility") {
//                    ability1MissionList.push(data[i].missionId);
//                  }
//                }
//                console.log(TAG + "ability1MissionList is: " + JSON.stringify(ability1MissionList))
//
//                missionManager.lockMission(ability1MissionList[0], (error, data) => {
//                  console.log(TAG + "Emtry MainAbility lockMission success, error: "
//                  + JSON.stringify(error) + ", data: " + JSON.stringify(data));
//                  missionManager.clearAllMissions((err, data) => {
//                    console.log(TAG + "Emtry MainAbility clearAllMissions success, error: "
//                    + JSON.stringify(error) + ", data: " + JSON.stringify(data));
//                  })
//                });
//                console.log(TAG + "ability1MissionList 2 is: " + JSON.stringify(ability1MissionList))
//              });
//            }, 500)
//
//            setTimeout(function() {
//              abilityContext.startAbility({
//                bundleName: "com.example.aux7application",
//                abilityName: "com.example.aux7application.MainAbility2"
//              }, (error, data) => {
//                console.log(TAG + " startAbility success, error: "
//                + JSON.stringify(error) + ", data: " + JSON.stringify(data));
//              });
//            }, 1000)
//
//            setTimeout(function() {
//              abilityContext.startAbility({
//                bundleName: "com.example.aux7application",
//                abilityName: "com.example.aux7application.MainAbility3"
//              }, (error, data) => {
//                console.log(TAG + " startAbility success, error: "
//                + JSON.stringify(error) + ", data: " + JSON.stringify(data));
//              });
//            }, 2000)
//
//            setTimeout(function () {
//              missionManager.getMissionInfos("", 20, (error, data) => {
//                console.log(TAG + "Emtry MainAbility2 getMissionInfos success, error: "
//                + JSON.stringify(error) + ", data: " + JSON.stringify(data));
//
//                for (var i = 0; i < data.length; i++) {
//                  if (data[i].want.abilityName == "com.example.missionapplication.MainAbility2") {
//                    console.log(TAG + "ability2MissionId is " + data[i].missionId);
//                    ability2MissionList.push(data[i].missionId);
//                  }
//                  //                  missionManager.clearMission(data[i].missionId, (err, data) => {
//                  //                    console.log(TAG + " Ability2 clearMission success, error: "
//                  //                    + JSON.stringify(err) + ", data: " + JSON.stringify(data));
//                  //                  })
//                }
//              });
//              console.log(TAG + " list is : " + list);
//              console.log(TAG + " list2 is : " + list2);
//
//              expect(list[0]).assertEqual("onBackground");
//              expect(list[1]).assertEqual("onWindowStageDestroy");
//              expect(list[2]).assertEqual("onCreate");
//              expect(list[3]).assertEqual("onWindowStageCreate");
//              expect(list[4]).assertEqual("onForeground");
//
//              expect(list2[0]).assertEqual("onBackground");
//              expect(list2[1]).assertEqual("onForeground");
//              expect(list2[2]).assertEqual("onWindowStageCreate");
//              expect(list2[3]).assertEqual("onCreate");
//              expect(list2[4]).assertEqual("onWindowStageDestroy");
//
//              expect(list3[0]).assertEqual("onBackground");
//
//            }, 3500)
//
//            setTimeout(function () {
//              console.log(TAG + "MainAbility ability2MissionList data " + parseInt(ability2MissionList[0]));
//              missionManager.moveMissionToFront(parseInt(ability2MissionList[0]), (error, data) => {
//                console.log(TAG + "MainAbility2 moveMissionToFront fail, error: "
//                + JSON.stringify(error) + ", data: " + JSON.stringify(data));
//              });
//              done()
//            }, 4000)
//            console.log("------------end SUB_AA_OpenHarmony_MoveMissionToFront_2200-------------");
//        });

        /*
         * @tc.number  SUB_AA_OpenHarmony_MoveMissionToFront_2300
         * @tc.name    Third party application switching
         * @tc.desc    Function test
         * @tc.level   0
         */
//        it('SUB_AA_OpenHarmony_MoveMissionToFront_2300', 0, async function (done) {
//            console.log("------------start SUB_AA_OpenHarmony_MoveMissionToFront_2300-------------");
//            TAG = "SUB_AA_OpenHarmony_MoveMissionToFront_2300"
//            var ability1MissionList = [];
//
//            missionManager.getMissionInfos("", 20, (error, data) => {
//                console.log(TAG + "Emtry MainAbility getMissionInfos success, error: "
//                + JSON.stringify(error) + ", data: " + JSON.stringify(data));
//
//                for(var i = 0; i<data.length; i++){
//                    if(data[i].want.abilityName == "com.example.missionapplication.MainAbility") {
//                        ability1MissionList.push(data[i].missionId);
//                    }
//                }
//                console.log(TAG + "ability1MissionList is: " + JSON.stringify(ability1MissionList))
//
//                missionManager.lockMission(ability1MissionList[0], (error, data) => {
//                    console.log(TAG + "Emtry MainAbility lockMission success, error: "
//                    + JSON.stringify(error) + ", data: " + JSON.stringify(data));
//                    missionManager.clearAllMissions((err,data) => {
//                        console.log(TAG + "Emtry MainAbility clearAllMissions success, error: "
//                        + JSON.stringify(error) + ", data: " + JSON.stringify(data));
//                    })
//                });
//                console.log(TAG + "ability1MissionList 2 is: " + JSON.stringify(ability1MissionList))
//            });
//
//            setTimeout(function(){
//                abilityContext.startAbility({
//                        bundleName : "com.example.auxiliaryabilitywithreturnvalue",
//                        abilityName : "com.example.auxiliaryabilitywithreturnvalue.MainAbility2"
//                }, (error, data) => {
//                    console.log(TAG + " startAbility1 success, error: "
//                    + JSON.stringify(error) + ", data: " + JSON.stringify(data));
//                });
//            },3000)
//
//            setTimeout(function() {
//                missionManager.moveMissionToFront(parseInt(ability1MissionList[0]), (error, data) => {
//                    console.log(TAG + "MainAbility moveMissionToFront success, error: "
//                    + JSON.stringify(error) + ", data: " + JSON.stringify(data));
//                    expect(error.code == 0).assertTrue;
//                    done()
//                });
//
//            }, 4000)
//            console.log("------------end SUB_AA_OpenHarmony_MoveMissionToFront_2300-------------");
//        });


    //        it('SUB_AA_OpenHarmony_MoveMissionToFront_0200', 0, async function (done) {
    //            console.log("------------start SUB_AA_OpenHarmony_MoveMissionToFront_0200-------------");
    //            TAG = "SUB_AA_OpenHarmony_MoveMissionToFront_0200"
    //            var Subscriber = "";
    //            var Subscriber2 = "";
    //            var list = ["", "", "", ""];
    //            var list2 = ["", ""]
    //            var ability1MissionList = [];
    //            var ability4MissionList = [];
    //
    //            function SubscribeCallBack_mainAbility4_Destroy(err, data) {
    //                console.log(TAG + " Subscribe3 CallBack data:" + JSON.stringify(data));
    //                if (data.event == "mainAbility4_onForeground") {
    //                    list[0] = "onForeground";
    //                } else if (data.event == "mainAbility4_onBackground") {
    //                    list[1] = "onBackground";
    //                } else if (data.event == "mainAbility4_onWindowStageDestroy") {
    //                    list[2] = "onWindowStageDestroy";
    //                } else if (data.event == "mainAbility4_onDestroy") {
    //                    list[3] = "onDestroy";
    //                }
    //                console.log(TAG + "list is : " + list)
    //
    //            }
    //
    //            function SubscribeCallBack_mainAbility_Destroy(err, data) {
    //                console.log(TAG + " Subscribe3 CallBack data:" + JSON.stringify(data));
    //                if (data.event == "mainAbility_onBackground") {
    //                    list2[0] = "onBackground";
    //                } else if (data.event == "mainAbility_onForeground") {
    //                    list2[1] = "onForeground";
    //                }
    //                console.log(TAG + "list2 is : " + list2)
    //                done()
    //            }
    //
    //            commonEvent.createSubscriber(singletonAbility4LifeEvents).then(async (data) => {
    //                console.log(TAG + "====>Create Subscriber====>");
    //                Subscriber = data;
    //                console.log(TAG + "data is : " + JSON.stringify(Subscriber))
    //                await commonEvent.subscribe(Subscriber, SubscribeCallBack_mainAbility4_Destroy);
    //            });
    //
    //            commonEvent.createSubscriber(abilityLifeEvents).then(async (data) => {
    //                console.log(TAG + "====>Create Subscriber2====>");
    //                Subscriber2 = data;
    //                console.log(TAG + "data2 is : " + JSON.stringify(Subscriber2))
    //                await commonEvent.subscribe(Subscriber2, SubscribeCallBack_mainAbility_Destroy);
    //            });
    //
    //
    //            missionManager.getMissionInfos("", 20, (error, data) => {
    //                console.log(TAG + "Emtry MainAbility getMissionInfos success, error: "
    //                + JSON.stringify(error) + ", data: " + JSON.stringify(data));
    //
    //                for (var i = 0; i < data.length; i++) {
    //                    if (data[i].want.abilityName == "com.example.missionapplication.MainAbility") {
    //                        ability1MissionList.push(data[i].missionId);
    //                    }
    //                }
    //                console.log(TAG + "ability1MissionList is: " + JSON.stringify(ability1MissionList))
    //
    //                missionManager.lockMission(ability1MissionList[0], (error, data) => {
    //                    console.log(TAG + "Emtry MainAbility lockMission success, error: "
    //                    + JSON.stringify(error) + ", data: " + JSON.stringify(data));
    //                    missionManager.clearAllMissions((err, data) => {
    //                        console.log(TAG + "Emtry MainAbility clearAllMissions success, error: "
    //                        + JSON.stringify(error) + ", data: " + JSON.stringify(data));
    //                    })
    //                });
    //                console.log(TAG + "ability1MissionList 2 is: " + JSON.stringify(ability1MissionList))
    //            });
    //
    //            abilityContext.startAbility({
    //                want: {
    //                    bundleName: "com.example.auxtaskswitching.hmservice",
    //                    abilityName: "com.example.singletonentry.singletonEntryAbility2"
    //                }
    //            }, (error, data) => {
    //                console.log(TAG + " startAbility1 success, error: "
    //                + JSON.stringify(error) + ", data: " + JSON.stringify(data));
    //            });
    //
    //            setTimeout(function () {
    //                abilityContext.startAbility({
    //                    want: {
    //                        bundleName: "com.example.auxtaskswitching.hmservice",
    //                        abilityName: "com.example.singletonentry.singletonEntryAbility3"
    //                    }
    //                }, (error, data) => {
    //                    console.log(TAG + " startAbility2 success, error: "
    //                    + JSON.stringify(error) + ", data: " + JSON.stringify(data));
    //                });
    //            }, 1000)
    //            setTimeout(function () {
    //                abilityContext.startAbility({
    //                    want: {
    //                        bundleName: "com.example.auxtaskswitching.hmservice",
    //                        abilityName: "com.example.singletonentry.singletonEntryAbility4"
    //                    }
    //                }, (error, data) => {
    //                    console.log(TAG + " startAbility3 success, error: "
    //                    + JSON.stringify(error) + ", data: " + JSON.stringify(data));
    //                });
    //            }, 2000)
    //
    //            setTimeout(function () {
    //                missionManager.getMissionInfos("", 20, (error, data) => {
    //                    console.log(TAG + "Emtry MainAbility getMissionInfos success, error: "
    //                    + JSON.stringify(error) + ", data: " + JSON.stringify(data));
    //
    //                    for (var i = 0; i < data.length; i++) {
    //                        if (data[i].want.abilityName == "com.example.singletonentry.singletonEntryAbility4") {
    //                            console.log(TAG + "ability4MissionId is " + data[i].missionId);
    //                            ability4MissionList.push(data[i].missionId);
    //                        }
    //                    }
    //                    console.log(TAG + "ability4MissionList is: " + JSON.stringify(ability4MissionList))
    //                });
    //
    //                console.log(TAG + "MainAbility list1 data " + parseInt(ability1MissionList[0]));
    //                missionManager.moveMissionToFront(parseInt(ability1MissionList[0]), (error, data) => {
    //                    console.log(TAG + "MainAbility moveMissionToFront success, error: "
    //                    + JSON.stringify(error) + ", data: " + JSON.stringify(data));
    //                });
    //                console.log(TAG + "-->list is : " + list)
    //                expect(list[0]).assertEqual("onForeground");
    //                console.log(TAG + "111111111111")
    //                expect(list[1]).assertEqual("onBackground");
    //                console.log(TAG + "222222222")
    //                expect(list[2]).assertEqual("onWindowStageDestroy");
    //                console.log(TAG + "333333333")
    //                expect(list[3]).assertEqual("onDestroy");
    //                console.log(TAG + "4444444444444")
    //            }, 2500)
    //
    //            setTimeout(function () {
    //                console.log(TAG + "MainAbility list2 data " + parseInt(ability4MissionList[0]));
    //                missionManager.moveMissionToFront(parseInt(ability4MissionList[0]), (error, data) => {
    //                    console.log(TAG + "Emtry MainAbility4 moveMissionToFront success, error: "
    //                    + JSON.stringify(error) + ", data: " + JSON.stringify(data));
    //                });
    //                console.log(TAG + "-->list2 is : " + list2)
    //                expect(list2[0]).assertEqual("onBackground");
    //                console.log(TAG + "55555555")
    //                expect(list2[1]).assertEqual("onForeground");
    //                console.log(TAG + "6666666666")
    //            }, 3000)
    //
    //
    //            console.log("------------start SUB_AA_OpenHarmony_MoveMissionToFront_0200-------------");
    //        })

    /*
 * @tc.number  SUB_AA_OpenHarmony_MoveMissionToFront_0300
 * @tc.name    Switch the middle mission in the defaultsinglelist to the foreground
 * @tc.desc    Function test
 * @tc.level   0
 */
    //        it('SUB_AA_OpenHarmony_MoveMissionToFront_0300', 0, async function (done) {
    //            console.log("------------start SUB_AA_OpenHarmony_MoveMissionToFront_0300-------------");
    //            TAG = "SUB_AA_OpenHarmony_MoveMissionToFront_0300"
    //            var Subscriber = "";
    //            var Subscriber2 = "";
    //            var list = ["", "", "", ""];
    //            var list2 = ["", ""]
    //            var ability1MissionList = [];
    //            var ability3MissionList = [];
    //
    //            function SubscribeCallBack_mainAbility3_Destroy(err, data) {
    //                ["mainAbility3_onForeground",
    //                "mainAbility3_onBackground",
    //                "mainAbility3_onWindowStageDestroy",
    //                "mainAbility3_onDestroy"]
    //                console.log(TAG + " Subscribe3 CallBack data:" + JSON.stringify(data));
    //                if(data.event == "mainAbility3_onForeground"){
    //                    list[0] = "onForeground";
    //                }else if(data.event == "mainAbility3_onBackground"){
    //                    list[1] = "onBackground";
    //                }else if(data.event == "mainAbility3_onWindowStageDestroy"){
    //                    list[2] = "onWindowStageDestroy";
    //                }else if(data.event == "mainAbility3_onDestroy"){
    //                    list[3] = "onDestroy";
    //                }
    //                console.log(TAG + "list is : " + list)
    //            }
    //
    //            function SubscribeCallBack_mainAbility_Destroy(err, data) {
    //                console.log(TAG + " Subscribe3 CallBack data:" + JSON.stringify(data));
    //                if(data.event == "mainAbility_onBackground"){
    //                    list2[0] = "onBackground";
    //                }else if(data.event == "mainAbility_onForeground"){
    //                    list2[1] = "onForeground";
    //                }
    //                console.log(TAG + "list2 is : " + list2)
    //                done()
    //            }
    //
    //            commonEvent.createSubscriber(singletonAbility3LifeEvents).then(async (data) => {
    //                console.log(TAG + "====>Create Subscriber====>");
    //                Subscriber = data;
    //                console.log(TAG + "data is : " + JSON.stringify(Subscriber))
    //                await commonEvent.subscribe(Subscriber, SubscribeCallBack_mainAbility3_Destroy);
    //
    //            });
    //
    //            commonEvent.createSubscriber(abilityLifeEvents).then(async (data) => {
    //                console.log(TAG + "====>Create Subscriber2====>");
    //                Subscriber2 = data;
    //                console.log(TAG + "data2 is : " + JSON.stringify(Subscriber2))
    //                await commonEvent.subscribe(Subscriber2, SubscribeCallBack_mainAbility_Destroy);
    //
    //            });
    //
    //            missionManager.getMissionInfos("", 20, (error, data) => {
    //                console.log(TAG + "Emtry MainAbility getMissionInfos success, error: "
    //                + JSON.stringify(error) + ", data: " + JSON.stringify(data));
    //
    //                for(var i = 0; i<data.length; i++){
    //                    if(data[i].want.abilityName == "com.example.missionapplication.MainAbility") {
    //                        console.log(TAG + "ability1MissionId is " + data[i].missionId);
    //                        ability1MissionList.push(data[i].missionId);
    //                    }
    //                }
    //                console.log(TAG + "ability1MissionList is: " + JSON.stringify(ability1MissionList))
    //
    //                missionManager.lockMission(ability1MissionList[0], (error, data) => {
    //                    console.log(TAG + "Emtry MainAbility lockMission success, error: "
    //                    + JSON.stringify(error) + ", data: " + JSON.stringify(data));
    //                    missionManager.clearAllMissions((err,data) => {
    //                        console.log(TAG + "Emtry MainAbility clearAllMissions success, error: "
    //                        + JSON.stringify(error) + ", data: " + JSON.stringify(data));
    //                    })
    //                });
    //                console.log(TAG + "ability1MissionList 2 is: " + JSON.stringify(ability1MissionList))
    //            });
    //
    //            abilityContext.startAbility({
    //                    bundleName : "com.example.auxtaskswitching.hmservice",
    //                    abilityName : "com.example.singletonentry.singletonEntryAbility2"
    //            }, (error, data) => {
    //                console.log(TAG + " startAbility1 success, error: "
    //                + JSON.stringify(error) + ", data: " + JSON.stringify(data));
    //            });
    //            setTimeout(function(){
    //                abilityContext.startAbility({
    //                        bundleName : "com.example.auxtaskswitching.hmservice",
    //                        abilityName : "com.example.singletonentry.singletonEntryAbility3"
    //                }, (error, data) => {
    //                    console.log(TAG + " startAbility2 success, error: "
    //                    + JSON.stringify(error) + ", data: " + JSON.stringify(data));
    //                });
    //            },1000)
    //            setTimeout(function(){
    //                abilityContext.startAbility({
    //                        bundleName : "com.example.auxtaskswitching.hmservice",
    //                        abilityName : "com.example.singletonentry.singletonEntryAbility4"
    //                }, (error, data) => {
    //                    console.log(TAG + " startAbility3 success, error: "
    //                    + JSON.stringify(error) + ", data: " + JSON.stringify(data));
    //                });
    //            },2000)
    //
    //            setTimeout(function(){
    //                missionManager.getMissionInfos("", 20, (error, data) => {
    //                    console.log(TAG + "Emtry MainAbility getMissionInfos success, error: "
    //                    + JSON.stringify(error) + ", data: " + JSON.stringify(data));
    //
    //                    for(var i = 0; i<data.length; i++){
    //                        if (data[i].want.abilityName == "com.example.singletonentry.singletonEntryAbility3") {
    //                            console.log(TAG + "ability3MissionId is " + data[i].missionId);
    //                            ability3MissionList.push(data[i].missionId);
    //                        }
    //                    }
    //                    console.log(TAG + "ability3MissionList is: " + JSON.stringify(ability3MissionList))
    //                });
    //
    //                console.log(TAG + "MainAbility ability1MissionList data " + parseInt(ability1MissionList[0]));
    //                missionManager.moveMissionToFront(parseInt(ability1MissionList[0]), (error, data) => {
    //                    console.log(TAG + "MainAbility moveMissionToFront success, error: "
    //                    + JSON.stringify(error) + ", data: " + JSON.stringify(data));
    //                    console.log(TAG + "-->list is : " + list)
    //                    expect(list[0]).assertEqual("onForeground");
    //                    console.log(TAG + "111111111111")
    //                    expect(list[1]).assertEqual("onBackground");
    //                    console.log(TAG + "222222222")
    //                    expect(list[2]).assertEqual("onWindowStageDestroy");
    //                    console.log(TAG + "333333333")
    //                    expect(list[3]).assertEqual("onDestroy");
    //                    console.log(TAG + "4444444444444")
    //                });
    //            },3000)
    //
    //            setTimeout(function() {
    //                console.log(TAG + "MainAbility ability3MissionList data " + parseInt(ability3MissionList[0]));
    //                missionManager.moveMissionToFront(parseInt(ability3MissionList[0]), (error, data) => {
    //                    console.log(TAG + "Emtry MainAbility3 moveMissionToFront success, error: "
    //                    + JSON.stringify(error) + ", data: " + JSON.stringify(data));
    //                    console.log(TAG + "-->list2 is : " + list2)
    //                    expect(list2[0]).assertEqual("onForeground");
    //                    console.log(TAG + "55555555")
    //                    expect(list2[1]).assertEqual("onBackground");
    //                    console.log(TAG + "6666666666")
    //                });
    //            }, 4000)
    //
    //            console.log("------------end SUB_AA_OpenHarmony_MoveMissionToFront_0300-------------");
    //        });

    /*
 * @tc.number  SUB_AA_OpenHarmony_MoveMissionToFront_0400
 * @tc.name    Switch the first m/ission in the defaultsinglelist to the foreground
 * @tc.desc    Function test
 * @tc.level   0
 */
    //        it('SUB_AA_OpenHarmony_MoveMissionToFront_0400', 0, async function (done) {
    //            console.log("------------start SUB_AA_OpenHarmony_MoveMissionToFront_0400-------------");
    //            TAG = "SUB_AA_OpenHarmony_MoveMissionToFront_0400"
    //            var Subscriber = "";
    //            var Subscriber2 = "";
    //            var list = ["", "", "", ""];
    //            var list2 = ["", ""]
    //            var ability1MissionList = [];
    //            var ability2MissionList = [];
    //
    //            function SubscribeCallBack_mainAbility2_Destroy(err, data) {
    //                console.log(TAG + " Subscribe3 CallBack data:" + JSON.stringify(data));
    //                if(data.event == "mainAbility2_onForeground"){
    //                    list[0] = "onForeground";
    //                }else if(data.event == "mainAbility2_onBackground"){
    //                    list[1] = "onBackground";
    //                }else if(data.event == "mainAbility2_onWindowStageDestroy"){
    //                    list[2] = "onInactive";
    //                }else if(data.event == "mainAbility2_onDestroy"){
    //                    list[3] = "onDestroy";
    //                }
    //                console.log(TAG + "list is : " + list)
    //            }
    //            ["mainAbility2_onForeground",
    //            "mainAbility2_onBackground",
    //            "mainAbility2_onWindowStageDestroy",
    //            "mainAbility2_onDestroy"]
    //
    //            function SubscribeCallBack_mainAbility_Destroy(err, data) {
    //                console.log(TAG + " Subscribe3 CallBack data:" + JSON.stringify(data));
    //                if(data.event == "mainAbility_onBackground"){
    //                    list2[0] = "onBackground";
    //                }else if(data.event == "mainAbility_onForeground"){
    //                    list2[1] = "onForeground";
    //                }
    //                console.log(TAG + "list2 is : " + list2)
    //            }
    //
    //            commonEvent.createSubscriber(singletonAbility2LifeEvents).then(async (data) => {
    //                console.log(TAG + "====>Create Subscriber====>");
    //                Subscriber = data;
    //                console.log(TAG + "data is : " + JSON.stringify(Subscriber))
    //                await commonEvent.subscribe(Subscriber, SubscribeCallBack_mainAbility2_Destroy);
    //
    //            });
    //
    //            commonEvent.createSubscriber(abilityLifeEvents).then(async (data) => {
    //                console.log(TAG + "====>Create Subscriber2====>");
    //                Subscriber2 = data;
    //                console.log(TAG + "data2 is : " + JSON.stringify(Subscriber2))
    //                await commonEvent.subscribe(Subscriber2, SubscribeCallBack_mainAbility_Destroy);
    //
    //            });
    //
    //            setTimeout(function(){
    //                missionManager.getMissionInfos("", 20, (error, data) => {
    //                    console.log(TAG + "Emtry MainAbility getMissionInfos success, error: "
    //                    + JSON.stringify(error) + ", data: " + JSON.stringify(data));
    //
    //                    for(var i = 0; i<data.length; i++){
    //                        if(data[i].want.abilityName == "com.example.missionapplication.MainAbility") {
    //                            console.log(TAG + "ability1MissionId is " + data[i].missionId);
    //                            ability1MissionList.push(data[i].missionId);
    //                        }
    //                    }
    //                    console.log(TAG + "ability1MissionList is: " + JSON.stringify(ability1MissionList))
    //
    //                    missionManager.lockMission(ability1MissionList[0], (error, data) => {
    //                        console.log(TAG + "Emtry MainAbility lockMission success, error: "
    //                        + JSON.stringify(error) + ", data: " + JSON.stringify(data));
    //                        missionManager.clearAllMissions((err,data) => {
    //                            console.log(TAG + "Emtry MainAbility clearAllMissions success, error: "
    //                            + JSON.stringify(error) + ", data: " + JSON.stringify(data));
    //                        })
    //                    });
    //                    console.log(TAG + "ability1MissionList 2 is: " + JSON.stringify(ability1MissionList))
    //                });
    //            },500)
    //
    //            setTimeout(function(){
    //                abilityContext.startAbility({
    //                        bundleName : "com.example.auxtaskswitching.hmservice",
    //                        abilityName : "com.example.singletonentry.singletonEntryAbility2"
    //                }, (error, data) => {
    //                    console.log(TAG + " startAbility1 success, error: "
    //                    + JSON.stringify(error) + ", data: " + JSON.stringify(data));
    //                });
    //            },1000)
    //            setTimeout(function(){
    //                abilityContext.startAbility({
    //                        bundleName : "com.example.auxtaskswitching.hmservice",
    //                        abilityName : "com.example.singletonentry.singletonEntryAbility3"
    //                }, (error, data) => {
    //                    console.log(TAG + " startAbility2 success, error: "
    //                    + JSON.stringify(error) + ", data: " + JSON.stringify(data));
    //                });
    //            },1500)
    //            setTimeout(function(){
    //                abilityContext.startAbility({
    //                        bundleName : "com.example.auxtaskswitching.hmservice",
    //                        abilityName : "com.example.singletonentry.singletonEntryAbility4"
    //                }, (error, data) => {
    //                    console.log(TAG + " startAbility3 success, error: "
    //                    + JSON.stringify(error) + ", data: " + JSON.stringify(data));
    //                });
    //            },2000)
    //
    //            setTimeout(function(){
    //                missionManager.getMissionInfos("", 20, (error, data) => {
    //                    console.log(TAG + "Emtry MainAbility getMissionInfos success, error: "
    //                    + JSON.stringify(error) + ", data: " + JSON.stringify(data));
    //
    //                    for(var i = 0; i<data.length; i++){
    //                        if (data[i].want.abilityName == "com.example.singletonentry.singletonEntryAbility2") {
    //                            console.log(TAG + "ability2MissionId is " + data[i].missionId);
    //                            ability2MissionList.push(data[i].missionId);
    //                        }
    //                    }
    //                    console.log(TAG + "ability2MissionList is: " + JSON.stringify(ability2MissionList))
    //                });
    //            },2500)
    //
    //            setTimeout(function() {
    //                console.log(TAG + "MainAbility ability1MissionList data " + parseInt(ability1MissionList[0]));
    //                missionManager.moveMissionToFront(parseInt(ability1MissionList[0]), (error, data) => {
    //                    console.log(TAG + "MainAbility moveMissionToFront success, error: "
    //                    + JSON.stringify(error) + ", data: " + JSON.stringify(data));
    //                });
    //            }, 3500)
    //            setTimeout(function(){
    //                console.log(TAG + "MainAbility ability2MissionList data " + parseInt(ability2MissionList[0]));
    //                missionManager.moveMissionToFront(parseInt(ability2MissionList[0]), (error, data) => {
    //                    console.log(TAG + "Emtry MainAbility2 moveMissionToFront success, error: "
    //                    + JSON.stringify(error) + ", data: " + JSON.stringify(data));
    //                    console.log(TAG + "-->list is : " + list)
    //                    expect(list[0]).assertEqual("onForeground");
    //                    console.log(TAG + "111111111111")
    //                    expect(list[1]).assertEqual("onBackground");
    //                    console.log(TAG + "222222222")
    //                    expect(list[2]).assertEqual("onWindowStageDestroy");
    //                    console.log(TAG + "333333333")
    //                    expect(list[3]).assertEqual("onDestroy");
    //                    console.log(TAG + "4444444444444")
    //                    console.log(TAG + "-->list2 is : " + list2)
    //                    expect(list2[0]).assertEqual("onBackground");
    //                    console.log(TAG + "55555555")
    //                    expect(list2[1]).assertEqual("onForeground");
    //                    console.log(TAG + "6666666666")
    //                });
    //                done();
    //            }, 4500)
    //
    //            console.log("------------end SUB_AA_OpenHarmony_MoveMissionToFront_0400-------------");
    //        });


    //         * @tc.number  SUB_AA_OpenHarmony_MoveMissionToFront_2400
    //         * @tc.name    Switching the mission in the launcherlist to the foreground is not supported
    //         * @tc.desc    Function test
    //         * @tc.level   0
    //         */
    //    it('SUB_AA_OpenHarmony_MoveMissionToFront_2400', 0, async function (done) {
    //      console.log("------------start SUB_AA_OpenHarmony_MoveMissionToFront_2400-------------");
    //      var missionId = undefined;
    //      try {
    //        missionManager.moveMissionToFront(missionId, (error, data) => {
    //          console.log("SUB_AA_OpenHarmony_MoveMissionToFront_2400 error: " +
    //          JSON.stringify(error) + ", data: " + JSON.stringify(data));
    //          expect(error.code == -1).assertTrue();
    //          done();
    //        })
    //      } catch(error) {
    //        console.log("SUB_AA_OpenHarmony_MoveMissionToFront_2400: error " + error);
    //      }
    //      console.log("------------end SUB_AA_OpenHarmony_MoveMissionToFront_2400-------------");
    //    });
    //
    //   }
    //  )}
    /*
     * @tc.number  SUB_AA_OpenHarmony_MoveMissionToFront_2500
     * @tc.name    Switching the mission in the launcherlist to the foreground is not supported
     * @tc.desc    Function test
     * @tc.level   0
     */
    //        it('SUB_AA_OpenHarmony_MoveMissionToFront_2500', 0, async function (done) {
    //            console.log("------------start SUB_AA_OpenHarmony_MoveMissionToFront_2500-------------");
    //            var missionId = -1;
    //            try {
    //                missionManager.moveMissionToFront(missionId, (error, data) => {
    //                    console.log("SUB_AA_OpenHarmony_MoveMissionToFront_2500 error: " +
    //                    JSON.stringify(error) + ", data: " + JSON.stringify(data));
    //                    expect(error.code == 2097181).assertTrue();
    //                    done();
    //                })
    //            } catch (error) {
    //                console.log("SUB_AA_OpenHarmony_MoveMissionToFront_2500: error " + error);
    //            }
    //            console.log("------------end SUB_AA_OpenHarmony_MoveMissionToFront_2500-------------");
    //        });

    /*
     * @tc.number  SUB_AA_OpenHarmony_MoveMissionToFront_2600
     * @tc.name    Switching the mission in the launcherlist to the foreground is not supported
     * @tc.desc    Function test
     * @tc.level   0
     */
    //        it('SUB_AA_OpenHarmony_MoveMissionToFront_2600', 0, async function (done) {
    //            console.log("------------start SUB_AA_OpenHarmony_MoveMissionToFront_2600-------------");
    //            var missionId = "2";
    //            try {
    //                missionManager.moveMissionToFront(missionId, (error, data) => {
    //                    console.log("SUB_AA_OpenHarmony_MoveMissionToFront_2600 error: " +
    //                    JSON.stringify(error) + ", data: " + JSON.stringify(data));
    //                    expect(error.code == -1).assertTrue();
    //                    done();
    //                })
    //            } catch (error) {
    //                console.log("SUB_AA_OpenHarmony_MoveMissionToFront_2600: error " + error);
    //            }
    //            console.log("------------end SUB_AA_OpenHarmony_MoveMissionToFront_2600-------------");
    //        });

    /*
     * @tc.number  SUB_AA_OpenHarmony_MoveMissionToFront_2700
     * @tc.name    Switching the mission in the launcherlist to the foreground is not supported
     * @tc.desc    Function test
     * @tc.level   0
     */
    //        it('SUB_AA_OpenHarmony_MoveMissionToFront_2700', 0, async function (done) {
    //            console.log("------------start SUB_AA_OpenHarmony_MoveMissionToFront_2700-------------");
    //            var missionId = "aa";
    //            try {
    //                missionManager.moveMissionToFront(missionId, (error, data) => {
    //                    console.log("SUB_AA_OpenHarmony_MoveMissionToFront_2700 error: " +
    //                    JSON.stringify(error) + ", data: " + JSON.stringify(data));
    //                    expect(error.code == -1).assertTrue();
    //                    done();
    //                })
    //            } catch (error) {
    //                console.log("SUB_AA_OpenHarmony_MoveMissionToFront_2700: error " + error);
    //            }
    //            console.log("------------end SUB_AA_OpenHarmony_MoveMissionToFront_2700-------------");
    //        });

    /*
         * @tc.number  SUB_AA_OpenHarmony_MoveMissionToFront_2800
         * @tc.name    Switching the mission in the launcherlist to the foreground is not supported
         * @tc.desc    Function test
         * @tc.level   0
         */
    //        it('SUB_AA_OpenHarmony_MoveMissionToFront_2800', 0, async function (done) {
    //            console.log("------------start SUB_AA_OpenHarmony_MoveMissionToFront_2800-------------");
    //            var missionId = 2.111;
    //            try {
    //                missionManager.moveMissionToFront(missionId, (error, data) => {
    //                    console.log("SUB_AA_OpenHarmony_MoveMissionToFront_2800 error: " +
    //                    JSON.stringify(error) + ", data: " + JSON.stringify(data));
    //                    expect(error.code == 0).assertTrue();
    //                    done();
    //                })
    //            } catch (error) {
    //                console.log("SUB_AA_OpenHarmony_MoveMissionToFront_2800: error " + error);
    //            }
    //            console.log("------------end SUB_AA_OpenHarmony_MoveMissionToFront_2800-------------");
    //        });
  });
}



