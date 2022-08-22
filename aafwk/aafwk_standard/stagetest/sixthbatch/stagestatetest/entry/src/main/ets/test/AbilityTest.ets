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
import ability from '@ohos.application.Ability'
import wantConstant from '@ohos.ability.wantConstant'
import appManager from '@ohos.application.appManager';

const INTENT_PARAMS_TITLE = "ability.want.params.TITLE";
const INTENT_PARAMS_INTENT = "ability.want.params.INTENT"

//SUB_AA_OpenHarmony_StateListener_0300 定义使用
//var AppStateData_Test_300 = []
//var AppStateData_Aux_300 = []
//
////SUB_AA_OpenHarmony_StateListener  定义使用
//var ProcessData_test = []
//var AbilityStateData_test = []
//var AppStateData_test = []
//
////SUB_AA_OpenHarmony_StateListener  定义使用
//var ProcessData_help = []
//var AbilityStateData_help = []
//var AppStateData_help = []
//
////SUB_AA_OpenHarmony_StateListener_2900  定义使用
//var ProcessData_2900 = []
//var AbilityStateData_2900 = []
//var AppStateData_2900 = []
//
////SUB_AA_OpenHarmony_StateListener_2100  定义使用
//var ProcessData_2100 = []
//var AbilityStateData_2100 = []
//var AppStateData_2100 = []
//
////SUB_AA_OpenHarmony_StateListener_2600  定义使用
//var ProcessData_2600 = []
//var AbilityStateData_2600 = []
//var AppStateData_2600 = []
//
////SUB_AA_OpenHarmony_StateListener_2800  定义使用
//var ProcessData_2800 = []
//var AbilityStateData_2800 = []
//var AppStateData_2800 = []
//
////SUB_AA_OpenHarmony_StateListener_2400  定义使用
//var ProcessData_2400 = []
//var AbilityStateData_2400 = []
//var AppStateData_2400 = []
//
////SUB_AA_OpenHarmony_StateListener_0400  定义使用
//var ProcessData_400_1 = []
//var AbilityStateData_400_1 = []
//var AppStateData_400_1 = []
//
//var ProcessData_400_2 = []
//var AbilityStateData_400_2 = []
//var AppStateData_400_2 = []

const START_ABILITY_TIMEOUT = 8000;


export default function abilityTest(abilityContext) {
  describe('AbilityTest', function () {
    console.log("----abilityTest start-----");
    var TAG = "";

    function sleep(time) {
      return new Promise((resolve) => setTimeout(resolve, time))
    }

    it("SUB_AA_OpenHarmony_StateListener_0300", 0, async function (done) {
      console.log("---start SUB_AA_OpenHarmony_StateListener_0300-----");
      var bundleName_help = "com.example.etsauxmyapplication";
      var bundleName_test = "com.example.etsmyapplication";
      TAG = "SUB_AA_OpenHarmony_StateListener_0300";
      appManager.getForegroundApplications((err, data) => {
        console.log(TAG + "getForegroundApplications , err : " + JSON.stringify(err) + ", data : " + JSON.stringify(data));
        console.log("datalength:"+data.length);
        for (var i=0;i<data.length;i++){
          console.log("datalength:"+data[i].bundleName);
          console.log("datalength:"+data[i].state);
          console.log("datalength:"+data[i].uid);
          if (data[i].bundleName==bundleName_test){
            except(data[i].bundleName).assertEqual(bundleName_test);
            except(data[i].state).assertEqual(2);
            except(data[i].uid>0).assertTrue();
            break;
          }
        }
      });

      setTimeout(function() {
        abilityContext.startAbility({
          bundleName: "com.example.etsauxmyapplication",
          abilityName: "com.example.etsauxmyapplication.MainAbility3"
        }, (err, data)=> {
            appManager.getForegroundApplications()
              .then((data) => {
                console.info('getForegroundApplications successful. Data: ' + JSON.stringify(data))
                console.log("datalength1:"+data.length);
                for (var i=0;i<data.length;i++){
                  console.log("datalength1:"+data[i].bundleName);
                  console.log("datalength1:"+data[i].state);
                  console.log("datalength1:"+data[i].uid);
                  if (data[i].bundleName==bundleName_help) {
                    except(data[i].bundleName).assertEqual(bundleName_help);
                    except(data[i].state).assertEqual(2);
                    except(data[i].uid > 0).assertTrue();
                    break;
                  }
                }
                done()
              }).catch((error) => {
              console.error('getForegroundApplications failed. Cause: ' + JSON.stringify(error));
            })
          console.log(TAG + "startAbility end, err: " + JSON.stringify(err) + " data: " + JSON.stringify(data))
        })
      }, 2000)

      console.log("---end SUB_AA_OpenHarmony_StateListener_0300-----");
    })

/*
    it("SUB_AA_OpenHarmony_StateListener_0500", 0, async function (done) {
      console.log("---start SUB_AA_OpenHarmony_StateListener_0500-----");
      TAG = "SUB_AA_OpenHarmony_StateListener_0500";
      var result_number1 = appManager.registerApplicationStateObserver({
        onForegroundApplicationChanged: (appStateData) => {
          console.log(TAG + "onForegroundApplicationChanged AppStateData: " + JSON.stringify(appStateData));
        },
        onAbilityStateChanged: (abilityStateData) => {
          console.log(TAG + "onAbilityStateChanged AbilityStateData: " + JSON.stringify(abilityStateData));
        },
        onProcessCreated: (processCreateData) => {
          console.log(TAG + "onProcessCreated ProcessCreateData: " + JSON.stringify(processCreateData));
        },
        onProcessDied: (processDiedData) => {
          console.log(TAG + "onProcessDied ProcessDiedData: " + JSON.stringify(processDiedData));
        }
      });

      console.log("result_number1:"+result_number1);
//      var result_number2;
//      var result_number3;
//      var bundleName = "com.example.etsmyapplication"
//
//      setTimeout(function (){
//        abilityContext.startAbility({
//          bundleName: "com.example.etsmyapplication",
//          abilityName: "com.example.etsmyapplication.MainAbility2"
//        }, (err, data)=> {
//          console.log(TAG + "startAbility end, err: " + JSON.stringify(err) + " data: " + JSON.stringify(data))
//          result_number2= appManager.registerApplicationStateObserver({
//            onForegroundApplicationChanged: (appStateData) => {
//              console.log(TAG + "onForegroundApplicationChanged AppStateData: " + JSON.stringify(appStateData));
//            },
//            onAbilityStateChanged: (abilityStateData) => {
//              console.log(TAG + "onAbilityStateChanged AbilityStateData: " + JSON.stringify(abilityStateData));
//            },
//            onProcessCreated: (processCreateData) => {
//              console.log(TAG + "onProcessCreated ProcessCreateData: " + JSON.stringify(processCreateData));
//            },
//            onProcessDied: (processDiedData) => {
//              console.log(TAG + "onProcessDied ProcessDiedData: " + JSON.stringify(processDiedData));
//            }
//          });
//          console.log("result_number2:"+result_number2);
//          appManager.unregisterApplicationStateObserver(result_number2,(err, data) => {
//            console.log(TAG + "unregisterApplicationStateObserver: " + JSON.stringify(err)+",data:"+JSON.stringify(data));
//            //except(err).assertEqual("");
//          });
//        })
//      },2000)
//
      await sleep(1000);

      await abilityContext.startAbility({
        bundleName: "com.example.etsmyapplication",
        abilityName: "com.example.etsmyapplication.MainAbility2"
      },(err, data)=> {
        console.log(TAG + "startFZAbility end, err: " + JSON.stringify(err) + " data: " + JSON.stringify(data))
        setTimeout(function (){
        done();
        },2000)
      });
//
//      await sleep(2000);
//      var bundleName_help = "com.example.etsauxmyapplication";
//      var abilityName_help = "com.example.etsauxmyapplication.MainAbility2";
//      var bundleName_test = "com.example.etsmyapplication";
//      var abilityName_test = "com.example.etsmyapplication.MainAbility";
//      except(result_number1+1).assertEqual(result_number2);
//      except(result_number3).assertEqual("");
//
//      except(ProcessData_help.bundleName).assertEqual(bundleName_help);
//      except(ProcessData_help.pid>0).assertTrue();
//      except(ProcessData_help.uid>0).assertTrue();
//
//      except(AbilityStateData_help.bundleName).assertEqual(bundleName_help);
//      except(AbilityStateData_help.bundleName).assertEqual(abilityName_help);
//      except(AbilityStateData_help.pid>0).assertTrue();
//      except(AbilityStateData_help.uid>0).assertTrue();
//      except(AbilityStateData_help.state).assertEqual(2);
//
//      except(AppStateData_help.bundleName).assertEqual(bundleName_help);
//      except(AppStateData_help.pid>0).assertTrue();
//      except(AppStateData_help.uid>0).assertTrue();
//      except(AppStateData_help.state).assertEqual(2);
//
//      except(AbilityStateData_test.bundleName).assertEqual(bundleName_test);
//      except(AbilityStateData_test.bundleName).assertEqual(abilityName_test);
//      except(AbilityStateData_test.pid>0).assertTrue();
//      except(AbilityStateData_test.uid>0).assertTrue();
//      except(AbilityStateData_test.state).assertEqual(3);
//
//      except(AppStateData_test.bundleName).assertEqual(bundleName_test);
//      except(AppStateData_test.pid>0).assertTrue();
//      except(AppStateData_test.uid>0).assertTrue();
//      except(AppStateData_test.state).assertEqual(3);

      console.log("---end SUB_AA_OpenHarmony_StateListener_0500-----");
    })
 */
/*

    it("SUB_AA_OpenHarmony_StateListener_3100", 0, async function (done) {
      console.log("---start SUB_AA_OpenHarmony_StateListener_3100-----");
      ProcessData_test = [];
      AbilityStateData_test = [];
      AppStateData_test = [];
      ProcessData_help = [];
      AbilityStateData_help = [];
      AppStateData_help = [];
      TAG = "SUB_AA_OpenHarmony_StateListener_0500";
      var result_number1 = appManager.registerApplicationStateObserver({
        onForegroundApplicationChanged: (AppStateData) => {
          console.log(TAG + "onForegroundApplicationChanged AppStateData: " + JSON.stringify(AppStateData));
          AppStateData_test.push(AppStateData);
          console.log(TAG + "onForegroundApplicationChanged AppStateData_2900: " + JSON.stringify(AppStateData_test));
        },
        onAbilityStateChanged: (AbilityStateData) => {
          console.log(TAG + "onAbilityStateChanged AbilityStateData: " + JSON.stringify(AbilityStateData));
          AbilityStateData_test.push(AbilityStateData);
          console.log(TAG + "onAbilityStateChanged AbilityStateData_2900: " + JSON.stringify(AbilityStateData_test));
        },
        onProcessCreated: (ProcessCreateData) => {
          console.log(TAG + "onProcessCreated ProcessCreateData: " + JSON.stringify(ProcessCreateData));
          ProcessData_test.push('onProcessCreated', ProcessCreateData);
          console.log(TAG + "onProcessCreated ProcessData_2900: " + JSON.stringify(ProcessData_test));
        },
        onProcessDied: (ProcessDiedData) => {
          console.log(TAG + "onProcessDied ProcessDiedData: " + JSON.stringify(ProcessDiedData));
          ProcessData_test.push('onProcessDied', ProcessDiedData);
          console.log(TAG + "onProcessDied ProcessData_2900: " + JSON.stringify(ProcessData_test));
        }
      })

      await sleep(500);
      var want = {
        "bundleName": "com.example.etsmyapplication",
        "abilityName": "com.example.etsmyapplication.MainAbility2"
      }
      var result_number2;
      var result_number3;
      await featureAbility.startAbility({
        want:want
      }).then((data) => {
        result_number2= appManager.registerApplicationStateObserver({
          onForegroundApplicationChanged: (AppStateData) => {
            console.log(TAG + "onForegroundApplicationChanged AppStateData: " + JSON.stringify(AppStateData));
            AppStateData_help.push(AppStateData);
            console.log(TAG + "onForegroundApplicationChanged AppStateData_2900: " + JSON.stringify(AppStateData_help));
          },
          onAbilityStateChanged: (AbilityStateData) => {
            console.log(TAG + "onAbilityStateChanged AbilityStateData: " + JSON.stringify(AbilityStateData));
            AbilityStateData_help.push(AbilityStateData);
            console.log(TAG + "onAbilityStateChanged AbilityStateData_2900: " + JSON.stringify(AbilityStateData_help));
          },
          onProcessCreated: (ProcessCreateData) => {
            console.log(TAG + "onProcessCreated ProcessCreateData: " + JSON.stringify(ProcessCreateData));
            ProcessData_help.push('onProcessCreated', ProcessCreateData);
            console.log(TAG + "onProcessCreated ProcessData_2900: " + JSON.stringify(ProcessData_help));
          },
          onProcessDied: (ProcessDiedData) => {
            console.log(TAG + "onProcessDied ProcessDiedData: " + JSON.stringify(ProcessDiedData));
            ProcessData_help.push('onProcessDied', ProcessDiedData);
            console.log(TAG + "onProcessDied ProcessData_2900: " + JSON.stringify(ProcessData_help));
          }
        })

        setTimeout(function () {
          console.log(TAG + "featureAbility.startAbility,data : " + data);
        }, 1000)
      }).catch((err) => {
        console.log(TAG + "featureAbility.startAbility,err : " + err);
      });

      await sleep(500);
      var want = {
        "bundleName": "com.example.etsauxmyapplication",
        "abilityName": "com.example.etsauxmyapplication.MainAbility2"
      }

      await featureAbility.startAbility({
        want:want
      }).then((data) => {
        setTimeout(function () {
          console.log(TAG + "featureAbility.startAbility,data : " + data);
        }, 1000)
      }).catch((err) => {
        console.log(TAG + "featureAbility.startAbility,err : " + err);
        done();
      });

      await sleep(500);
      var bundleName_help = "com.example.etsauxmyapplication";
      var abilityName_help = "com.example.etsauxmyapplication.MainAbility2";
      var bundleName_test = "com.example.etsmyapplication";
      var abilityName_test = "com.example.etsmyapplication.MainAbility";
      except(result_number1+1).assertEqual(result_number2);

      except(ProcessData_help.bundleName).assertEqual(bundleName_help);
      except(ProcessData_help.pid>0).assertTrue();
      except(ProcessData_help.uid>0).assertTrue();

      except(AbilityStateData_help.bundleName).assertEqual(bundleName_help);
      except(AbilityStateData_help.bundleName).assertEqual(abilityName_help);
      except(AbilityStateData_help.pid>0).assertTrue();
      except(AbilityStateData_help.uid>0).assertTrue();
      except(AbilityStateData_help.state).assertEqual(2);

      except(AppStateData_help.bundleName).assertEqual(bundleName_help);
      except(AppStateData_help.pid>0).assertTrue();
      except(AppStateData_help.uid>0).assertTrue();
      except(AppStateData_help.state).assertEqual(2);

      except(AbilityStateData_test.bundleName).assertEqual(bundleName_test);
      except(AbilityStateData_test.bundleName).assertEqual(abilityName_test);
      except(AbilityStateData_test.pid>0).assertTrue();
      except(AbilityStateData_test.uid>0).assertTrue();
      except(AbilityStateData_test.state).assertEqual(3);

      except(AppStateData_test.bundleName).assertEqual(bundleName_test);
      except(AppStateData_test.pid>0).assertTrue();
      except(AppStateData_test.uid>0).assertTrue();
      except(AppStateData_test.state).assertEqual(3);
      console.log("---end SUB_AA_OpenHarmony_StateListener_3100-----");
    })


    it("SUB_AA_OpenHarmony_StateListener_0900", 0, async function (done) {
      console.log("---start SUB_AA_OpenHarmony_StateListener_0900-----");
      TAG = "SUB_AA_OpenHarmony_StateListener_0900";
      ProcessData_test = [];
      AbilityStateData_test = [];
      AppStateData_test = [];
      ProcessData_help = [];
      AbilityStateData_help = [];
      AppStateData_help = [];
      TAG = "SUB_AA_OpenHarmony_StateListener_0500";
      var result_number1;
      var result_number2;
      var result_number_Temp;
      for (var i=0;i<100;i++) {
        result_number1 = appManager.registerApplicationStateObserver({
          onForegroundApplicationChanged: (AppStateData) => {
            console.log(TAG + "onForegroundApplicationChanged AppStateData: " + JSON.stringify(AppStateData));
            AppStateData_test.push(AppStateData);
            console.log(TAG + "onForegroundApplicationChanged AppStateData_2900: " + JSON.stringify(AppStateData_test));
          },
          onAbilityStateChanged: (AbilityStateData) => {
            console.log(TAG + "onAbilityStateChanged AbilityStateData: " + JSON.stringify(AbilityStateData));
            AbilityStateData_test.push(AbilityStateData);
            console.log(TAG + "onAbilityStateChanged AbilityStateData_2900: " + JSON.stringify(AbilityStateData_test));
          },
          onProcessCreated: (ProcessCreateData) => {
            console.log(TAG + "onProcessCreated ProcessCreateData: " + JSON.stringify(ProcessCreateData));
            ProcessData_test.push('onProcessCreated', ProcessCreateData);
            console.log(TAG + "onProcessCreated ProcessData_2900: " + JSON.stringify(ProcessData_test));
          },
          onProcessDied: (ProcessDiedData) => {
            console.log(TAG + "onProcessDied ProcessDiedData: " + JSON.stringify(ProcessDiedData));
            ProcessData_test.push('onProcessDied', ProcessDiedData);
            console.log(TAG + "onProcessDied ProcessData_2900: " + JSON.stringify(ProcessData_test));
          }
        })
        if (i!=0){
          except(result_number1).assertEqual(result_number_Temp+1);
          result_number_Temp = result_number1;
        }
        else{
          result_number_Temp = result_number1;
        }
        appManager.unregisterApplicationStateObserver(result_number1,(err, data) => {
          except(err).assertEqual("");
        });
      }

      abilityContext.startAbility({
        bundleName: "com.example.etsauxmyapplication",
        abilityName: "com.example.etsauxmyapplication.MainAbility3"
      }).then((data) => {
        setTimeout(function () {
          console.log(TAG + "abilityContext.startAbility,data : " + data);
        }, 1000)
      }).catch((err) => {
        console.log(TAG + "abilityContext.startAbility,err : " + err);
        done();
      });

      console.log("---end SUB_AA_OpenHarmony_StateListener_0900-----");
    })


    it("SUB_AA_OpenHarmony_StateListener_1000", 0, async function (done) {
      console.log("---start SUB_AA_OpenHarmony_StateListener_1000-----");
      TAG = "SUB_AA_OpenHarmony_StateListener_1000";
      ProcessData_test = [];
      AbilityStateData_test = [];
      AppStateData_test = [];
      ProcessData_help = [];
      AbilityStateData_help = [];
      AppStateData_help = [];
      var result_number1 = appManager.registerApplicationStateObserver({
        onForegroundApplicationChanged: (AppStateData) => {
          console.log(TAG + "onForegroundApplicationChanged AppStateData: " + JSON.stringify(AppStateData));
          AppStateData_test.push(AppStateData);
          console.log(TAG + "onForegroundApplicationChanged AppStateData_2900: " + JSON.stringify(AppStateData_test));
        },
        onAbilityStateChanged: (AbilityStateData) => {
          console.log(TAG + "onAbilityStateChanged AbilityStateData: " + JSON.stringify(AbilityStateData));
          AbilityStateData_test.push(AbilityStateData);
          console.log(TAG + "onAbilityStateChanged AbilityStateData_2900: " + JSON.stringify(AbilityStateData_test));
        },
        onProcessCreated: (ProcessCreateData) => {
          console.log(TAG + "onProcessCreated ProcessCreateData: " + JSON.stringify(ProcessCreateData));
          ProcessData_test.push('onProcessCreated', ProcessCreateData);
          console.log(TAG + "onProcessCreated ProcessData_2900: " + JSON.stringify(ProcessData_test));
        },
        onProcessDied: (ProcessDiedData) => {
          console.log(TAG + "onProcessDied ProcessDiedData: " + JSON.stringify(ProcessDiedData));
          ProcessData_test.push('onProcessDied', ProcessDiedData);
          console.log(TAG + "onProcessDied ProcessData_2900: " + JSON.stringify(ProcessData_test));
        }
      })
      console.log(result_number1);

      await sleep(500);
      var want = {
        "bundleName": "com.example.etsauxmyapplication",
        "abilityName": "com.example.etsauxmyapplication.MainAbility2"
      }

      await featureAbility.startAbility({
        want:want
      }).then((data) => {
        setTimeout(function () {
          console.log(TAG + "featureAbility.startAbility,data : " + data);
        }, 1000)
      }).catch((err) => {
        console.log(TAG + "featureAbility.startAbility,err : " + err);
      });

      var bundleName_help = "com.example.etsauxmyapplication";
      var abilityName_help = "com.example.etsauxmyapplication.MainAbility2";
      appManager.killProcessesByBundleName(bundleName_help);
      except(AbilityStateData_test.bundleName).assertEqual(bundleName_help);
      except(AbilityStateData_test.abilityName).assertEqual(abilityName_help);
      except(AbilityStateData_test.pid>0).assertTrue();
      except(AbilityStateData_test.uid>0).assertTrue();
      except(AbilityStateData_test.state).assertEqual(4);

      except(ProcessData_test.bundleName).assertEqual(bundleName_help);
      except(ProcessData_test.pid>0).assertTrue();
      except(ProcessData_test.uid>0).assertTrue();

      console.log("---end SUB_AA_OpenHarmony_StateListener_1000-----");
    })
 */
    it("SUB_AA_OpenHarmony_StateListener_0200", 0, async function (done) {
      console.log("---start SUB_AA_OpenHarmony_StateListener_0200-----");
      TAG = "SUB_AA_OpenHarmony_StateListener_0200";
//      var result_number1 = appManager.registerApplicationStateObserver({
//        onForegroundApplicationChanged: (AppStateData) => {
//          console.log(TAG + "onForegroundApplicationChanged AppStateData: " + JSON.stringify(AppStateData));
//        },
//        onAbilityStateChanged: (AbilityStateData) => {
//          console.log(TAG + "onAbilityStateChanged AbilityStateData: " + JSON.stringify(AbilityStateData));
//        },
//        onProcessCreated: (ProcessCreateData) => {
//          console.log(TAG + "onProcessCreated ProcessCreateData: " + JSON.stringify(ProcessCreateData));
//        },
//        onProcessDied: (ProcessDiedData) => {
//          console.log(TAG + "onProcessDied ProcessDiedData: " + JSON.stringify(ProcessDiedData));
//        }
//      })

      var result_number1 = appManager.registerApplicationStateObserver((err,data) =>{
        console.log(TAG+"_registerApplicationStateObserver:"+JSON.stringify(err)+"data:"+JSON.stringify(data));
      })
      console.log(result_number1);
      setTimeout(function(){
        appManager.unregisterApplicationStateObserver(result_number1,(err, data) => {
          console.log(TAG+"unregisterApplicationStateObserver:err"+JSON.stringify(err)+"data:"+JSON.stringify(data));
          except(err).assertEqual("");
        });
        appManager.unregisterApplicationStateObserver(result_number1,(err, data) => {
          console.log(TAG+"unregisterApplicationStateObserver2:err"+JSON.stringify(err)+"data:"+JSON.stringify(data));
          except(err).assertEqual(1);
          except(data).assertEqual("not found observer");
          done();
        });
      },2000)

      console.log("---end SUB_AA_OpenHarmony_StateListener_0200-----");
    })
    /*
    it("SUB_AA_OpenHarmony_StateListener_0800", 0, async function (done) {
      console.log("---start SUB_AA_OpenHarmony_StateListener_0800-----");
      TAG = "SUB_AA_OpenHarmony_StateListener_0800";
      ProcessData_test = [];
      AbilityStateData_test = [];
      AppStateData_test = [];
      ProcessData_help = [];
      AbilityStateData_help = [];
      AppStateData_help = [];
      var result_number1 = appManager.registerApplicationStateObserver({
        onForegroundApplicationChanged: (AppStateData) => {
          console.log(TAG + "onForegroundApplicationChanged AppStateData: " + JSON.stringify(AppStateData));
          AppStateData_test.push(AppStateData);
          console.log(TAG + "onForegroundApplicationChanged AppStateData_2900: " + JSON.stringify(AppStateData_test));
        },
        onAbilityStateChanged: (AbilityStateData) => {
          console.log(TAG + "onAbilityStateChanged AbilityStateData: " + JSON.stringify(AbilityStateData));
          AbilityStateData_test.push(AbilityStateData);
          console.log(TAG + "onAbilityStateChanged AbilityStateData_2900: " + JSON.stringify(AbilityStateData_test));
        },
        onProcessCreated: (ProcessCreateData) => {
          console.log(TAG + "onProcessCreated ProcessCreateData: " + JSON.stringify(ProcessCreateData));
          ProcessData_test.push('onProcessCreated', ProcessCreateData);
          console.log(TAG + "onProcessCreated ProcessData_2900: " + JSON.stringify(ProcessData_test));
        },
        onProcessDied: (ProcessDiedData) => {
          console.log(TAG + "onProcessDied ProcessDiedData: " + JSON.stringify(ProcessDiedData));
          ProcessData_test.push('onProcessDied', ProcessDiedData);
          console.log(TAG + "onProcessDied ProcessData_2900: " + JSON.stringify(ProcessData_test));
        }
      })
      console.log(result_number1);

      var want = {
        "bundleName": "com.example.etsmyapplication",
        "abilityName": "com.example.etsmyapplication.MainAbility2"
      }

      for (var i=0;i<100;i++) {
        await featureAbility.startAbility({
          want: want
        }).then((data) => {
          featureAbility.terminateSelf();
          await sleep(500);
          setTimeout(function () {
            console.log(TAG + "featureAbility.startAbility,data : " + data);
          }, 1000)
        }).catch((err) => {
          console.log(TAG + "featureAbility.startAbility,err : " + err);
        });

        appManager.unregisterApplicationStateObserver(result_number1,(err, data) => {
          except(err).assertEqual("");
        });

        await featureAbility.startAbility({
          want: want
        }).then((data) => {
          featureAbility.terminateSelf();
          await sleep(500);
          setTimeout(function () {
            console.log(TAG + "featureAbility.startAbility,data : " + data);
          }, 1000)
        }).catch((err) => {
          console.log(TAG + "featureAbility.startAbility,err : " + err);
        });
      }

      console.log("---end SUB_AA_OpenHarmony_StateListener_0800-----");
    })
*/
/*
    it("SUB_AA_OpenHarmony_StateListener_1600", 0, async function (done) {
      console.log("---start SUB_AA_OpenHarmony_StateListener_1600-----");
      AppStateData_test = [];
      AbilityStateData_test = [];
      TAG = "SUB_AA_OpenHarmony_StateListener_1600";
      var result_number1 = appManager.registerApplicationStateObserver({
        onForegroundApplicationChanged: (appStateData) => {
          console.log(TAG + " appStateData : "
          + JSON.stringify(appStateData) );
          AppStateData_test = appStateData;
        },
        onAbilityStateChanged: (abilityStateData) => {
          console.log(TAG + " onAbilityStateChanged : "
          + JSON.stringify(abilityStateData) );
          AbilityStateData_test = abilityStateData
        },
        onProcessCreated: (processData) => {
          console.log(TAG + " ProcessData : "
          + JSON.stringify(processData) + ", data: " + JSON.stringify(data));
        },
        onProcessDied: (processData) => {
          console.log(TAG + " processData : "
          + JSON.stringify(processData));
        }
      });
      var connect_number = 0;
      setTimeout(function() {
        connect_number = abilityContext.connectAbility({
          bundleName: "com.example.etsauxmyapplication",
          abilityName: "com.example.etsauxmyapplication.MainAbility3"
        })
        console.log(TAG +" connect_number :"+connect_number);
      }, 1000)
      setTimeout(function() {
        abilityContext.disconnectAbility(parseInt(connect_number), (error, data) => {
          console.log(TAG + " MainAbility2 disconnectAbility : "
          + JSON.stringify(error) + ", data: " + JSON.stringify(data));

          except(AbilityStateData_test.bundleName).assertEqual('com.example.etsauxmyapplication');
          except(AbilityStateData_test.abilityName).assertEqual('com.example.etsauxmyapplication.MainAbility2');
          except(AbilityStateData_test.pid>0).assertTrue();
          except(AbilityStateData_test.uid>0).assertTrue();
          except(AbilityStateData_test.state).assertEqual(3);

          except(AppStateData_test.bundleName).assertEqual('com.example.etsauxmyapplication.MainAbility2');
          except(AppStateData_test.pid>0).assertTrue();
          except(AppStateData_test.uid>0).assertTrue();
          except(AppStateData_test.state).assertEqual(3);
          done()
        })
      }, 2000)
      console.log("---end SUB_AA_OpenHarmony_StateListener_1600-----");
    })
*/
/*

    it("SUB_AA_OpenHarmony_StateListener_1800", 0, async function (done) {
      console.log("---start SUB_AA_OpenHarmony_StateListener_1800-----");
      TAG = "SUB_AA_OpenHarmony_StateListener_1800";
      console.log("---end SUB_AA_OpenHarmony_StateListener_1800-----");
    })

    it("SUB_AA_OpenHarmony_StateListener_1900", 0, async function (done) {
      console.log("---start SUB_AA_OpenHarmony_StateListener_1900-----");
      TAG = "SUB_AA_OpenHarmony_StateListener_1900";
      console.log("---end SUB_AA_OpenHarmony_StateListener_1900-----");
    })

    it("SUB_AA_OpenHarmony_StateListener_1500", 0, async function (done) {
      console.log("---start SUB_AA_OpenHarmony_StateListener_1500-----");
      TAG = "SUB_AA_OpenHarmony_StateListener_1500";
      console.log("---end SUB_AA_OpenHarmony_StateListener_1500-----");
    })

    it("SUB_AA_OpenHarmony_StateListener_1400", 0, async function (done) {
      console.log("---start SUB_AA_OpenHarmony_StateListener_1400-----");
      TAG = "SUB_AA_OpenHarmony_StateListener_1400";
      console.log("---end SUB_AA_OpenHarmony_StateListener_1400-----");
    })

    it("SUB_AA_OpenHarmony_StateListener_0700", 0, async function (done) {
      console.log("---start SUB_AA_OpenHarmony_StateListener_0700-----");
      TAG = "SUB_AA_OpenHarmony_StateListener_0700";
      console.log("---end SUB_AA_OpenHarmony_StateListener_0700-----");
    })

    it("SUB_AA_OpenHarmony_StateListener_2300", 0, async function (done) {
      console.log("---start SUB_AA_OpenHarmony_StateListener_2300-----");
      TAG = "SUB_AA_OpenHarmony_StateListener_2300";
      console.log("---end SUB_AA_OpenHarmony_StateListener_2300-----");
    })

    it("SUB_AA_OpenHarmony_StateListener_2200", 0, async function (done) {
      console.log("---start SUB_AA_OpenHarmony_StateListener_2200-----");
      TAG = "SUB_AA_OpenHarmony_StateListener_2200";
      console.log("---end SUB_AA_OpenHarmony_StateListener_2200-----");
    })

    it("SUB_AA_OpenHarmony_StateListener_1700", 0, async function (done) {
      console.log("---start SUB_AA_OpenHarmony_StateListener_1700-----");
      TAG = "SUB_AA_OpenHarmony_StateListener_1700";
      console.log("---end SUB_AA_OpenHarmony_StateListener_1700-----");
    })

    it("SUB_AA_OpenHarmony_StateListener_2900", 0, async function (done) {
      console.log("---start SUB_AA_OpenHarmony_StateListener_2900-----");
      //第一次启动
      TAG = "SUB_AA_OpenHarmony_StateListener_2900";

      var result_number1 = appManager.registerApplicationStateObserver({
        onForegroundApplicationChanged: (appStateData: AppStateData) => {
          console.log(TAG + "onForegroundApplicationChanged AppStateData: " + JSON.stringify(appStateData));
          AppStateData_2900.push(AppStateData);
          console.log(TAG + "onForegroundApplicationChanged AppStateData_2900: " + JSON.stringify(AppStateData_2900));
        },
        onAbilityStateChanged: (abilityStateData: AbilityStateData) => {
          console.log(TAG + "onAbilityStateChanged AbilityStateData: " + JSON.stringify(abilityStateData));
          AbilityStateData_2900.push(AbilityStateData);
          console.log(TAG + "onAbilityStateChanged AbilityStateData_2900: " + JSON.stringify(AbilityStateData_2900));
        },
        onProcessCreated: (processCreateData: ProcessCreateData) => {
          console.log(TAG + "onProcessCreated ProcessCreateData: " + JSON.stringify(processCreateData));
          ProcessData_2900.push('onProcessCreated', ProcessCreateData);
          console.log(TAG + "onProcessCreated ProcessData_2900: " + JSON.stringify(ProcessData_2900));
        },
        onProcessDied: (processDiedData: ProcessDiedData) => {
          console.log(TAG + "onProcessDied ProcessDiedData: " + JSON.stringify(processDiedData));
          ProcessData_2900.push('onProcessDied', ProcessDiedData);
          console.log(TAG + "onProcessDied ProcessData_2900: " + JSON.stringify(ProcessData_2900));
        }
      })

      var want = {
        "bundleName": "com.example.etsauxmyapplication",
        "abilityName": "com.example.etsauxmyapplication.MainAbility2"
      }

      await sleep(500);

      console.log(TAG + "result_number1: " + result_number1);

      await abilityContext.startAbility({
        want:want
      }, (error, data) => {
        setTimeout(function () {
          console.log(TAG + "featureAbility.startAbility,data : " + data);
        }, 1000)
      }).catch((err) => {
        console.log(TAG + "featureAbility.startAbility,err : " + err);
        done();
      });

      await sleep(500);


      var bundleName_help = "com.example.etsauxmyapplication";
      var abilityName_help = "com.example.etsauxmyapplication.MainAbility2";
      var bundleName_test = "com.example.etsmyapplication";
      var abilityName_test = "com.example.etsmyapplication.MainAbility";

      //检查辅助应用的ProcessData
      getProcessDataHelp(ProcessData_2900, bundleName_help);
      //辅助应用的AbilityStateData，状态2
      getAbilityStateDataHelp(AbilityStateData_2900, bundleName_help, abilityName_help, 2);
      //辅助应用的AppStateData，状态2
      getAppStateDataHelp(AppStateData_2900, bundleName_help, 2);
      //测试应用的AbilityStateData，状态3
      getAbilityStateDataTest(AbilityStateData_2900, bundleName_test, abilityName_test, 3)
      //测试应用的AppStateData，状态3
      getAppStateDataTest(AppStateData_2900, bundleName_test, 3);
      //测试应用的AbilityStateData，状态2
      getAbilityStateDataTest(AbilityStateData_2900, bundleName_test, abilityName_test, 2)
      //测试应用的AppStateData，状态2
      getAppStateDataTest(AppStateData_2900, bundleName_test, 2);
      //辅助应用的AbilityStateData，状态3
      getAbilityStateDataHelp(AbilityStateData_2900, bundleName_help, abilityName_help, 3);
      //辅助应用的AbilityStateData，状态4
      getAbilityStateDataHelp(AbilityStateData_2900, bundleName_help, abilityName_help, 4);
      //辅助应用的AppStateData，状态3
      getAppStateDataHelp(AppStateData_2900, bundleName_help, 3);
    })

    it("SUB_AA_OpenHarmony_StateListener_1100", 0, async function (done) {
      console.log("---start SUB_AA_OpenHarmony_StateListener_1100-----");
      TAG = "SUB_AA_OpenHarmony_StateListener_1100";
      console.log("---end SUB_AA_OpenHarmony_StateListener_1100-----");
    })

    it("SUB_AA_OpenHarmony_StateListener_2000", 0, async function (done) {
      console.log("---start SUB_AA_OpenHarmony_StateListener_2000-----");
      TAG = "SUB_AA_OpenHarmony_StateListener_2000";
      console.log("---end SUB_AA_OpenHarmony_StateListener_2000-----");
    })

    it("SUB_AA_OpenHarmony_StateListener_1300", 0, async function (done) {
      console.log("---start SUB_AA_OpenHarmony_StateListener_1300-----");
      TAG = "SUB_AA_OpenHarmony_StateListener_1300";
      console.log("---end SUB_AA_OpenHarmony_StateListener_1300-----");
    })

    it("SUB_AA_OpenHarmony_StateListener_1200", 0, async function (done) {
      console.log("---start SUB_AA_OpenHarmony_StateListener_1200-----");
      TAG = "SUB_AA_OpenHarmony_StateListener_1200";
      console.log("---end SUB_AA_OpenHarmony_StateListener_1200-----");
    })

    it("SUB_AA_OpenHarmony_StateListener_2100", 0, async function (done) {
      console.log("---start SUB_AA_OpenHarmony_StateListener_2100-----");
      //第一次启动
      TAG = "SUB_AA_OpenHarmony_StateListener_2100";
      var result = appManager.registerApplicationStateObserver({
        onForegroundApplicationChanged: (AppStateData) => {
          console.log(TAG + "onForegroundApplicationChanged AppStateData: " + JSON.stringify(AppStateData));
          AppStateData_2100.push(AppStateData);
          console.log(TAG + "onForegroundApplicationChanged AppStateData1_2100: " + JSON.stringify(AppStateData_2100));
        },
        onAbilityStateChanged: (AbilityStateData) => {
          console.log(TAG + "onAbilityStateChanged AbilityStateData: " + JSON.stringify(AbilityStateData));
          AbilityStateData_2100.push(AbilityStateData);
          console.log(TAG + "onAbilityStateChanged AbilityStateData_2100: " + JSON.stringify(AbilityStateData_2100));
        },
        onProcessCreated: (ProcessCreateData) => {
          console.log(TAG + "onProcessCreated ProcessCreateData: " + JSON.stringify(ProcessCreateData));
          ProcessData_2100.push('onProcessCreated', ProcessCreateData);
          console.log(TAG + "onProcessCreated ProcessData_2100: " + JSON.stringify(ProcessData_2100));
        },
        onProcessDied: (ProcessDiedData) => {
          console.log(TAG + "onProcessDied ProcessDiedData: " + JSON.stringify(ProcessDiedData));
          ProcessData_2100.push('onProcessDied', ProcessDiedData);
          console.log(TAG + "onProcessDied ProcessData_2100: " + JSON.stringify(ProcessData_2100));
        }
      })


      featureAbility.startAbility({
        want: {
          "bundleName": "com.example.myapplication1",
          "abilityName": "com.example.myapplication1.MainAbility2"
        }
      }).then((data) => {
        setTimeout(function () {
          console.log(TAG + "featureAbility.startAbility,data 1 : " + JSON.stringify(data));
        }, 1000)
      }).catch((err) => {
        console.log(TAG + "featureAbility.startAbility,err 1 : " + JSON.stringify(err));
      });


      featureAbility.startAbility({
        want: {
          "bundleName": "com.example.myapplication1",
          "abilityName": "com.example.entry2.MainAbility2"
        }
      }).then((data) => {
        setTimeout(function () {
          console.log(TAG + "featureAbility.startAbility,data 2 : " + JSON.stringify(data));
        }, 1500)
      }).catch((err) => {
        console.log(TAG + "featureAbility.startAbility,err 2 : " + JSON.stringify(err));
      });

      await sleep(2000);
      console.log(TAG + "result_number1: " + result);
      //辅助1
      var bundleName_help1 = "com.example.myapplication1";
      var abilityName_help1 = "com.example.myapplication1.MainAbility2";
      //辅助2
      var bundleName_help2 = "com.example.myapplication1";
      var abilityName_help2 = "com.example.entry2.MainAbility";
      //测试
      var bundleName_test = "com.example.myapplication";
      var abilityName_test = "com.example.myapplication.MainAbility";

      //检查辅助应用1的ProcessData
      checkProcessDataAll(ProcessData_2100, bundleName_help1);
      //辅助应用1的AbilityStateData，状态2
      getAbilityStateDataHelp(AbilityStateData_2100, bundleName_help1, abilityName_help1, 2);
      //辅助应用1的AppStateData，状态2
      getAppStateDataHelp(AppStateData_2100, bundleName_help1, 2);
      //测试应用的AbilityStateData，状态3
      getAbilityStateDataTest(AbilityStateData_2100, bundleName_test, abilityName_test, 3)
      //测试应用的AppStateData，状态3
      getAppStateDataTest(AppStateData_2100, bundleName_test, 3);

      //辅助应用2的AbilityStateData，状态2
      getAbilityStateDataHelp(AbilityStateData_2100, bundleName_help2, abilityName_help2, 2);
      //辅助应用2的AppStateData，状态2
      getAppStateDataHelp(AppStateData_2100, bundleName_help2, 2);

      //辅助应用1的AbilityStateData，状态3
      getAbilityStateDataHelp(AbilityStateData_2100, bundleName_help1, abilityName_help1, 3);
      //辅助应用1的AppStateData，状态3
      getAppStateDataHelp(AppStateData_2100, bundleName_help1, 3);
    })

    it("SUB_AA_OpenHarmony_StateListener_3000", 0, async function (done) {
      console.log("---start SUB_AA_OpenHarmony_StateListener_3000-----");
      TAG = "SUB_AA_OpenHarmony_StateListener_3000";
      console.log("---end SUB_AA_OpenHarmony_StateListener_3000-----");
    })

    it("SUB_AA_OpenHarmony_StateListener_2700", 0, async function (done) {
      console.log("---start SUB_AA_OpenHarmony_StateListener_2700-----");
      TAG = "SUB_AA_OpenHarmony_StateListener_2700";
      console.log("---end SUB_AA_OpenHarmony_StateListener_2700-----");
    })

    it("SUB_AA_OpenHarmony_StateListener_2600", 0, async function (done) {
      console.log("---start SUB_AA_OpenHarmony_StateListener_2600-----");

      TAG = "SUB_AA_OpenHarmony_StateListener_2600";
      var result_number = appManager.registerApplicationStateObserver({
        onForegroundApplicationChanged: (AppStateData) => {
          console.log(TAG + "onForegroundApplicationChanged AppStateData: " + JSON.stringify(AppStateData));
          AppStateData_2600.push(AppStateData);
          console.log(TAG + "onForegroundApplicationChanged AppStateData_2600: " + JSON.stringify(AppStateData_2600));
        },
        onAbilityStateChanged: (AbilityStateData) => {
          console.log(TAG + "onAbilityStateChanged AbilityStateData: " + JSON.stringify(AbilityStateData));
          AbilityStateData_2600.push(AbilityStateData);
          console.log(TAG + "onAbilityStateChanged AbilityStateData_2600: " + JSON.stringify(AbilityStateData_2600));
        },
        onProcessCreated: (ProcessCreateData) => {
          console.log(TAG + "onProcessCreated ProcessCreateData: " + JSON.stringify(ProcessCreateData));
          ProcessData_2600.push('onProcessCreated', ProcessCreateData);
          console.log(TAG + "onProcessCreated ProcessData1_2600: " + JSON.stringify(ProcessData_2600));
        },
        onProcessDied: (ProcessDiedData) => {
          console.log(TAG + "onProcessDied ProcessDiedData: " + JSON.stringify(ProcessDiedData));
          ProcessData_2600.push('onProcessDied', ProcessDiedData);
          console.log(TAG + "onProcessDied ProcessData1_2600: " + JSON.stringify(ProcessData_2600));
        }
      })

      featureAbility.startAbility({
        want: {
          "bundleName": "com.example.myapplication1",
          "abilityName": "com.example.myapplication1.MainAbility2"
        }
      }).then((data) => {
        setTimeout(function () {
          console.log(TAG + "featureAbility.startAbility help 1,data : " + JSON.stringify(data));
        }, 1000)
      }).catch((err) => {
        console.log(TAG + "featureAbility.startAbility help 1,err : " + JSON.stringify(err));
      });

      featureAbility.startAbility({
        want: {
          "bundleName": "com.example.myapplication",
          "abilityName": "com.example.myapplication.MainAbility2"
        }
      }).then((data) => {
        setTimeout(function () {
          console.log(TAG + "featureAbility.startAbility test 1,data : " + JSON.stringify(data));
        }, 1500)
      }).catch((err) => {
        console.log(TAG + "featureAbility.startAbility test 1,err : " + JSON.stringify(err));
      });


      featureAbility.startAbility({
        want: {
          "bundleName": "com.example.myapplication1",
          "abilityName": "com.example.myapplication1.MainAbility2"
        }
      }).then((data) => {
        setTimeout(function () {
          console.log(TAG + "featureAbility.startAbility help 2,data : " + JSON.stringify(data));
          done();
        }, 2000)
      }).catch((err) => {
        console.log(TAG + "featureAbility.startAbility help 2,err : " + JSON.stringify(err));
      });


      //1500,pass在中间，日志全打印
      //        await sleep(1500);
      //3000，pass在最后，日志少打印
      await sleep(2000);
      console.log(TAG + "result_number: " + result_number);
      var bundleName_help = "com.example.myapplication1";
      var abilityName_help = "com.example.myapplication1.MainAbility2";
      var bundleName_test = "com.example.myapplication";
      var abilityName_test = "com.example.myapplication.MainAbility2";
      //        checkArr(ProcessData_2600, AbilityStateData_2600, AppStateData_2600)
      //        done();

      getProcessDataHelp(ProcessData_2600, "onProcessCreated", bundleName_help);

      getAbilityStateDataHelp(AbilityStateData_2600, bundleName_help, abilityName_help, 2);
      getAppStateDataHelp(AppStateData_2600, bundleName_help, 2);

      getAbilityStateDataTest(AbilityStateData_2600, bundleName_test, abilityName_test, 3);
      getAppStateDataTest(AppStateData_2600, bundleName_test, 3);
      getAbilityStateDataTest(AbilityStateData_2600, bundleName_test, abilityName_test, 2);
      getAppStateDataTest(AppStateData_2600, bundleName_test, 2);

      getAbilityStateDataHelp(AbilityStateData_2600, bundleName_help, abilityName_help, 3);
      getAppStateDataHelp(AppStateData_2600, bundleName_help, 3);

      getAbilityStateDataHelp(AbilityStateData_2600, bundleName_help, abilityName_help, 2);
      getAppStateDataHelp(AppStateData_2600, bundleName_help, 2);
      getAbilityStateDataTest(AbilityStateData_2600, bundleName_test, abilityName_test, 3);
      getAppStateDataTest(AppStateData_2600, bundleName_test, 3);
    })

    it("SUB_AA_OpenHarmony_StateListener_2500", 0, async function (done) {
      console.log("---start SUB_AA_OpenHarmony_StateListener_2500-----");
      TAG = "SUB_AA_OpenHarmony_StateListener_2500";
      console.log("---end SUB_AA_OpenHarmony_StateListener_2500-----");
    })

    it("SUB_AA_OpenHarmony_StateListener_2400", 0, async function (done) {
      console.log("---start SUB_AA_OpenHarmony_StateListener_2400-----");

      TAG = "SUB_AA_OpenHarmony_StateListener_2400";
      var result_number = appManager.registerApplicationStateObserver({
        onForegroundApplicationChanged: (AppStateData) => {
          console.log(TAG + "onForegroundApplicationChanged AppStateData: " + JSON.stringify(AppStateData));
          AppStateData_2400.push(AppStateData);
          console.log(TAG + "onForegroundApplicationChanged AppStateData_2400: " + JSON.stringify(AppStateData_2400));
        },
        onAbilityStateChanged: (AbilityStateData) => {
          console.log(TAG + "onAbilityStateChanged AbilityStateData: " + JSON.stringify(AbilityStateData));
          AbilityStateData_2400.push(AbilityStateData);
          console.log(TAG + "onAbilityStateChanged AbilityStateData_2400: " + JSON.stringify(AbilityStateData_2400));
        },
        onProcessCreated: (ProcessCreateData) => {
          console.log(TAG + "onProcessCreated ProcessCreateData: " + JSON.stringify(ProcessCreateData));
          ProcessData_2400.push('onProcessCreated', ProcessCreateData);
          console.log(TAG + "onProcessCreated ProcessData1_2400: " + JSON.stringify(ProcessData_2400));
        },
        onProcessDied: (ProcessDiedData) => {
          console.log(TAG + "onProcessDied ProcessDiedData: " + JSON.stringify(ProcessDiedData));
          ProcessData_2400.push('onProcessDied', ProcessDiedData);
          console.log(TAG + "onProcessDied ProcessData1_2400: " + JSON.stringify(ProcessData_2400));
        }
      })

      await sleep(400);
      var want = {
        "bundleName": "com.example.myapplication1",
        "abilityName": "com.example.myapplication1.MainAbility2"
      }

      await featureAbility.startAbility({
        want
      }).then((data) => {
        setTimeout(function () {
          console.log(TAG + "featureAbility.startAbility,data : " + JSON.stringify(data));
          done();
        }, 2500)
      }).catch((err) => {
        console.log(TAG + "featureAbility.startAbility,err : " + JSON.stringify(err));
      });
      //1500,pass在中间，日志全打印
      //        await sleep(1500);
      //3000，pass在最后，日志少打印
      await sleep(2000);
      console.log(TAG + "result_number: " + result_number);
      //        checkArr(ProcessData_2400, AbilityStateData_2400, AppStateData_2400);
      var bundleName_help = "com.example.myapplication1";
      var abilityName_help = "com.example.myapplication1.MainAbility2";
      var bundleName_test = "com.example.myapplication";
      var abilityName_test = "com.example.myapplication.MainAbility";
      //第一回
      //检查辅助应用的ProcessData
      checkProcessDataAll(ProcessData_2400, bundleName_help);
      //辅助应用的AbilityStateData，状态2
      getAbilityStateDataHelp(AbilityStateData_2400, bundleName_help, abilityName_help, 2);
      //辅助应用的AppStateData，状态2
      getAppStateDataHelp(AppStateData_2400, bundleName_help, 2);
      //测试应用的AbilityStateData，状态3
      getAbilityStateDataTest(AbilityStateData_2400, bundleName_test, abilityName_test, 3);
      //测试应用的AppStateData，状态3
      getAppStateDataTest(AppStateData_2400, bundleName_test, 3);
      //测试应用的AbilityStateData，状态2
      getAbilityStateDataTest(AbilityStateData_2400, bundleName_test, abilityName_test, 2)
      //测试应用的AppStateData，状态2
      getAppStateDataTest(AppStateData_2400, bundleName_test, 2);
      //辅助应用的AbilityStateData，状态3
      getAbilityStateDataHelp(AbilityStateData_2400, bundleName_help, abilityName_help, 3);
      //辅助应用的AbilityStateData，状态4
      //getAbilityStateDataHelp(AbilityStateData_2400, bundleName_help, abilityName_help, 4);
      //辅助应用的AppStateData，状态3
      getAppStateDataHelp(AppStateData_2400, bundleName_help, 3);
      //done();
    })

    it("SUB_AA_OpenHarmony_StateListener_2800", 0, async function (done) {
      console.log("---start SUB_AA_OpenHarmony_StateListener_2800-----");

      TAG = "SUB_AA_OpenHarmony_StateListener_2800";
      var result_number = appManager.registerApplicationStateObserver({
        onForegroundApplicationChanged: (AppStateData) => {
          console.log(TAG + "onForegroundApplicationChanged AppStateData: " + JSON.stringify(AppStateData));
          AppStateData_2800.push(AppStateData);
          console.log(TAG + "onForegroundApplicationChanged AppStateData_2800: " + JSON.stringify(AppStateData_2800));
        },
        onAbilityStateChanged: (AbilityStateData) => {
          console.log(TAG + "onAbilityStateChanged AbilityStateData: " + JSON.stringify(AbilityStateData));
          AbilityStateData_2800.push(AbilityStateData);
          console.log(TAG + "onAbilityStateChanged AbilityStateData_2800: " + JSON.stringify(AbilityStateData_2800));
        },
        onProcessCreated: (ProcessCreateData) => {
          console.log(TAG + "onProcessCreated ProcessCreateData: " + JSON.stringify(ProcessCreateData));
          ProcessData_2800.push('onProcessCreated', ProcessCreateData);
          console.log(TAG + "onProcessCreated ProcessData1_2800: " + JSON.stringify(ProcessData_2800));
        },
        onProcessDied: (ProcessDiedData) => {
          console.log(TAG + "onProcessDied ProcessDiedData: " + JSON.stringify(ProcessDiedData));
          ProcessData_2800.push('onProcessDied', ProcessDiedData);
          console.log(TAG + "onProcessDied ProcessData1_2800: " + JSON.stringify(ProcessData_2800));
        }
      })

      await sleep(400);
      var want = {
        "bundleName": "com.example.myapplication1",
        "abilityName": "com.example.myapplication1.MainAbility2"
      }

      await featureAbility.startAbility({
        want
      }).then((data) => {
        setTimeout(function () {
          console.log(TAG + "featureAbility.startAbility,data : " + JSON.stringify(data));
          done();
        }, 2500)
      }).catch((err) => {
        console.log(TAG + "featureAbility.startAbility,err : " + JSON.stringify(err));
      });
      //1500,pass在中间，日志全打印
      //        await sleep(1500);
      //3000，pass在最后，日志少打印
      await sleep(2000);
      console.log(TAG + "result_number: " + result_number);
      checkArr(ProcessData_2800, AbilityStateData_2800, AppStateData_2800)
      //done();
    })

    it("SUB_AA_OpenHarmony_StateListener_0600", 0, async function (done) {
      console.log("---start SUB_AA_OpenHarmony_StateListener_0600-----");
      TAG = "SUB_AA_OpenHarmony_StateListener_0600";
      var want = {
        "bundleName": "com.example.myapplication1",
        "abilityName": "com.example.myapplication1.MainAbility2"
      }
      await featureAbility.startAbility({
        want
      }).then((data) => {
        setTimeout(function () {
          console.log(TAG + "featureAbility.startAbility1,data : " + JSON.stringify(data));
          done();
        }, 2500)
      }).catch((err) => {
        console.log(TAG + "featureAbility.startAbility1,err : " + JSON.stringify(err));
      });
      var result_number = appManager.registerApplicationStateObserver({
        onForegroundApplicationChanged: (AppStateData) => {
          console.log(TAG + "onForegroundApplicationChanged AppStateData: " + JSON.stringify(AppStateData));
        },
        onAbilityStateChanged: (AbilityStateData) => {
          console.log(TAG + "onAbilityStateChanged AbilityStateData: " + JSON.stringify(AbilityStateData));
        },
        onProcessCreated: (ProcessCreateData) => {
          console.log(TAG + "onProcessCreated ProcessCreateData: " + JSON.stringify(ProcessCreateData));
        },
        onProcessDied: (ProcessDiedData) => {
          console.log(TAG + "onProcessDied ProcessDiedData: " + JSON.stringify(ProcessDiedData));
        }
      })
      console.log(TAG + "result_number: " + result_number);
      console.log(TAG + "UnregisterApplicationStateObserver appStateObservers_ size:")
    })

    it("SUB_AA_OpenHarmony_StateListener_0100", 0, async function (done) {
      console.log("---start SUB_AA_OpenHarmony_StateListener_0100-----");

      TAG = "SUB_AA_OpenHarmony_StateListener_0100";
      var result_number = appManager.registerApplicationStateObserver(undefined);
      console.log(TAG + "result_number: " + result_number);
      var want = {
        "bundleName": "com.example.myapplication1",
        "abilityName": "com.example.myapplication1.MainAbility"
      }
      await sleep(400);
      await featureAbility.startAbility({
        want
      }).then((data) => {
        console.log(TAG + "featureAbility.startAbility1,data : " + data);
      }).catch((err) => {
        console.log(TAG + "featureAbility.startAbility1,err : " + err);
      });
      await sleep(500);
      appManager.unregisterApplicationStateObserver(result_number, (err, data) => {
        console.log(TAG + "unregisterApplicationStateObserver , err : " + JSON.stringify(err) + ", data : " + JSON.stringify(data));
      })
      await sleep(400);
      await featureAbility.startAbility({
        want
      }).then((data) => {
        console.log(TAG + "featureAbility.startAbility2,data : " + data);
      }).catch((err) => {
        console.log(TAG + "featureAbility.startAbility2,err : " + err);
      });
      done();
    })

    it("SUB_AA_OpenHarmony_StateListener_0400", 0, async function (done) {
      console.log("---start SUB_AA_OpenHarmony_StateListener_0400-----");
      //第一次启动
      TAG = "SUB_AA_OpenHarmony_StateListener_0400";
      var result_number1 = appManager.registerApplicationStateObserver({
        onForegroundApplicationChanged: (AppStateData) => {
          console.log(TAG + "onForegroundApplicationChanged AppStateData1: " + JSON.stringify(AppStateData));
          AppStateData_400_1.push(AppStateData);
          console.log(TAG + "onForegroundApplicationChanged AppStateData1_400_1: " + JSON.stringify(AppStateData_400_1));
        },
        onAbilityStateChanged: (AbilityStateData) => {
          console.log(TAG + "onAbilityStateChanged AbilityStateData1: " + JSON.stringify(AbilityStateData));
          AbilityStateData_400_1.push(AbilityStateData);
          console.log(TAG + "onAbilityStateChanged AbilityStateData1_400_1: " + JSON.stringify(AbilityStateData_400_1));
        },
        onProcessCreated: (ProcessCreateData) => {
          console.log(TAG + "onProcessCreated ProcessCreateData1: " + JSON.stringify(ProcessCreateData));
          ProcessData_400_1.push('onProcessCreated', ProcessCreateData);
          console.log(TAG + "onProcessCreated ProcessData1_400_1: " + JSON.stringify(ProcessData_400_1));
        },
        onProcessDied: (ProcessDiedData) => {
          console.log(TAG + "onProcessDied ProcessDiedData1: " + JSON.stringify(ProcessDiedData));
          ProcessData_400_1.push('onProcessDied', ProcessDiedData);
          console.log(TAG + "onProcessDied ProcessData1_400_1: " + JSON.stringify(ProcessData_400_1));
        }
      })

      await sleep(500);
      //第二次启动
      var result_number2 = appManager.registerApplicationStateObserver({
        onForegroundApplicationChanged: (AppStateData) => {
          console.log(TAG + "onForegroundApplicationChanged AppStateData2: " + JSON.stringify(AppStateData));
          AppStateData_400_2.push(AppStateData);
          console.log(TAG + "onForegroundApplicationChanged AppStateData2_400_2: " + JSON.stringify(AppStateData_400_2));
        },
        onAbilityStateChanged: (AbilityStateData) => {
          console.log(TAG + "onAbilityStateChanged AbilityStateData2: " + JSON.stringify(AbilityStateData));
          AbilityStateData_400_2.push(AbilityStateData);
          console.log(TAG + "onAbilityStateChanged AbilityStateData2_400_2: " + JSON.stringify(AbilityStateData_400_2));
        },
        onProcessCreated: (ProcessCreateData) => {
          console.log(TAG + "onProcessCreated ProcessCreateData2: " + JSON.stringify(ProcessCreateData));
          ProcessData_400_2.push('onProcessCreated', ProcessCreateData);
          console.log(TAG + "onProcessCreated ProcessData2_400_2: " + JSON.stringify(ProcessData_400_2));
        },
        onProcessDied: (ProcessDiedData) => {
          console.log(TAG + "onProcessDied ProcessDiedData2: " + JSON.stringify(ProcessDiedData));
          ProcessData_400_2.push('onProcessDied', ProcessDiedData);
          console.log(TAG + "onProcessDied ProcessData2_400_2: " + JSON.stringify(ProcessData_400_2));
        }
      })

      await sleep(500);
      var want = {
        "bundleName": "com.example.myapplication1",
        "abilityName": "com.example.myapplication1.MainAbility2"
      }

      await featureAbility.startAbility({
        want
      }).then((data) => {
        setTimeout(function () {
          console.log(TAG + "featureAbility.startAbility,data : " + data);
          done();
        }, 3000)
      }).catch((err) => {
        console.log(TAG + "featureAbility.startAbility,err : " + err);
      });
      //1500,pass在中间，日志全打印
      //        await sleep(1500);
      //3000，pass在最后，日志少打印
      await sleep(2500);
      //        console.log("AbilityStateChanged1===>" + JSON.stringify(AbilityStateChanged1))
      //        console.log("ForegroundApplication1===>" + JSON.stringify(ForegroundApplication1))
      console.log(TAG + "result_number1: " + result_number1);
      console.log(TAG + "result_number2: " + result_number2);
      expect(result_number1 + 1).assertEqual(result_number2);

      var bundleName_help = "com.example.myapplication1";
      var abilityName_help = "com.example.myapplication1.MainAbility2";
      var bundleName_test = "com.example.myapplication";
      var abilityName_test = "com.example.myapplication.MainAbility";
      //        checkArr(ProcessData_2100, AbilityStateData_400_1, AppStateData_400_1);
      //        checkArr(ProcessData_400_2, AbilityStateData_400_2, AppStateData_400_2);
      //第一回
      //检查辅助应用的ProcessData
      checkProcessDataAll(ProcessData_400_1, bundleName_help);
      //辅助应用的AbilityStateData，状态2
      getAbilityStateDataHelp(AbilityStateData_400_1, bundleName_help, abilityName_help, 2);
      //辅助应用的AppStateData，状态2
      getAppStateDataHelp(AppStateData_400_1, bundleName_help, 2);
      //测试应用的AbilityStateData，状态3
      getAbilityStateDataTest(AbilityStateData_400_1, bundleName_test, abilityName_test, 3)
      //测试应用的AppStateData，状态3
      getAppStateDataTest(AppStateData_400_1, bundleName_test, 3);

      //第二回
      checkProcessDataAll(AbilityStateData_400_2, bundleName_help);
      //辅助应用的AbilityStateData，状态2
      getAbilityStateDataHelp(AbilityStateData_400_2, bundleName_help, abilityName_help, 2);
      //辅助应用的AppStateData，状态2
      getAppStateDataHelp(AppStateData_400_2, bundleName_help, 2);
      //测试应用的AbilityStateData，状态3
      getAbilityStateDataTest(AbilityStateData_400_2, bundleName_test, abilityName_test, 3)
      //测试应用的AppStateData，状态3
      getAppStateDataTest(AppStateData_400_2, bundleName_test, 3);

    })
*/
    //获取ProcessData
    function getProcessDataHelp(reslist, bundleName) {
      console.log('getProcessData---start' + JSON.stringify(reslist))
      var listofkey_created = [];
      var listofkey_died = [];
      for (let i = 0;i < reslist.length; i++) {
        console.log('==getProcessData==> reslist[i] : ' + JSON.stringify(reslist[i]))
        var callback = reslist[i]
        console.log('==callback==>  : ' + JSON.stringify(callback))
        if (callback == "onProcessCreated") {
          listofkey_created.push(reslist[i+1])
          console.log('onProcessCreated ==reslist[i+1]==>  : ' + JSON.stringify(reslist[i+1]))
        } else if (callback == "onProcessDied") {
          listofkey_died.push(reslist[i+1])
          console.log('onProcessDied ==reslist[i+1]==>  : ' + JSON.stringify(reslist[i+1]))
        }
      }
      console.log('getProcessData' + JSON.stringify(listofkey_created))
      if (listofkey_created != []) {
        checkProcessDataAll(listofkey_created, bundleName);
      }
      if (listofkey_died != []) {
        checkProcessDataAll(listofkey_died, bundleName);
      }
    }

    //获取并检查辅助应用的AbilityStateData
    function getAbilityStateDataHelp(AbilityStateChanged, help_bundleName, help_abilityName, state) {
      for (let i = 0;i < AbilityStateChanged.length; i++) {
        console.log('==appState==> :' + JSON.stringify(AbilityStateChanged[i]))
        //如果bundleName和辅助应用的bundleName相同，获取它的AbilityStateData
        if (AbilityStateChanged[i].bundleName == help_bundleName) {
          //辅助应用Abilitystatedata信息赋值
          var AbilityStateData_help = AbilityStateChanged[i]
          console.log('==check assistData==> :' + JSON.stringify(assistData))
        }
      }
      checkAbilityStateDataAll(AbilityStateChanged, help_bundleName, help_abilityName, state);
    }

    //获取并检查测试应用的AbilityStateData
    function getAbilityStateDataTest(AbilityStateChanged, test_bundleName, test_abilityName, state) {
      for (let i = 0;i < AbilityStateChanged.length; i++) {
        console.log('==appState==> :' + JSON.stringify(AbilityStateChanged[i]))
        //如果bundleName和测试应用的bundleName相同，获取它的AbilityStateData
        if (AbilityStateChanged[i].bundleName == test_bundleName) {
          //测试应用Abilitystatedata信息赋值
          var AbilityStateData_test = AbilityStateChanged[i]
          console.log('==check assistData==> :' + JSON.stringify(assistData))
        }
      }
      checkAbilityStateDataAll(AbilityStateChanged, test_bundleName, test_abilityName, state);
    }

    //获取并检查辅助应用的AppStateData
    function getAppStateDataHelp(onForegroundApplicationChanged, help_bundleName, state) {
      for (let i = 0;i < onForegroundApplicationChanged.length; i++) {
        console.log('==appState==> :' + JSON.stringify(onForegroundApplicationChanged[i]))
        //如果bundleName和辅助应用的bundleName相同，获取它的AppStateData
        if (onForegroundApplicationChanged[i].bundleName == help_bundleName) {
          //辅助应用AppStateData信息赋值
          var AbilityStateData_help = onForegroundApplicationChanged[i]
          console.log('==check assistData==> :' + JSON.stringify(assistData))
        }
      }
      checkAppStateDataAll(onForegroundApplicationChanged, help_bundleName, state);
    }

    //获取并检查测试应用的AppStateData
    function getAppStateDataTest(onForegroundApplicationChanged, test_bundleName, state) {
      for (let i = 0;i < onForegroundApplicationChanged.length; i++) {
        console.log('==appState==> :' + JSON.stringify(onForegroundApplicationChanged[i]))
        //如果bundleName和测试应用的bundleName相同，获取它的AppStateData
        if (onForegroundApplicationChanged[i].bundleName == test_bundleName) {
          //测试应用AppStateData信息赋值
          var AbilityStateData_help = onForegroundApplicationChanged[i]
          console.log('==check assistData==> :' + JSON.stringify(assistData))
        }
      }
      checkAppStateDataAll(onForegroundApplicationChanged, test_bundleName, state);
    }

    //ProcessData
    //检查应用的bundleName
    function checkProcessDataAll(list, bundleName) {
      console.log('==dhhFdh==>' + JSON.stringify(list))
      expect(bundleName).assertEqual(list.bundleName)
      console.log('==list.bundleName==>' + JSON.stringify(list.bundleName))
      expect(list.pid > 0).assertTrue()
      console.log('==list.pid==>' + JSON.stringify(list.pid))
      expect(list.uid > 0).assertTrue()
      console.log('==list.uid==>' + JSON.stringify(list.uid))
    }

    //AbilityStateData
    //检查应用的bundleName和abilityname
    function checkAbilityStateDataAll(list, bundleName, abilityName, state) {
      console.log('==checkAbilityStateData2==>' + JSON.stringify(list));
      expect(bundleName).assertEqual(list.bundleName);
      expect(abilityName).assertEqual(list.abilityName);
      expect(list.pid > 0).assertTrue();
      expect(list.uid > 0).assertTrue();
      expect(state).assertEqual(list.state);
    }

    //AppStateData
    //检查应用的bundleName
    function checkAppStateDataAll(list, bundleName, state) {
      console.log('==checkAppStateData2==>' + JSON.stringify(list))
      expect(bundleName).assertEqual(list.bundleName)
      expect(list.uid > 0).assertTrue()
      expect(state).assertEqual(list.state)
    }
  });
}