/*
 * Copyright (c) 2022 Huawei Device Co., Ltd.
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

import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from "@ohos/hypium";
import commonEvent from '@ohos.commonEvent';
import common from '@ohos.app.ability.common';
import commonEventManager from '@ohos.commonEventManager';
import { BusinessError } from '@ohos.base';
import Want from '@ohos.app.ability.Want';

let TAG = "";
let tempCallbackId: number;
let subscriber: commonEventManager.CommonEventSubscriber;
let MainAbility1onCreate = "com.example.windowstagelifecycle_xts.MainAbility1.onCreate";
let MainAbility1onDestroy = "com.example.windowstagelifecycle_xts.MainAbility1.onDestroy";
let MainAbility1onForeground = "com.example.windowstagelifecycle_xts.MainAbility1.onForeground";
let MainAbility2onCreate = "com.example.windowstagelifecycle_xts.MainAbility2.onCreate";
let MainAbility2onDestroy = "com.example.windowstagelifecycle_xts.MainAbility2.onDestroy";
let MainAbility3onCreate = "com.example.windowstagelifecycle_xts.MainAbility3.onCreate";
let MainAbility3onDestroy = "com.example.windowstagelifecycle_xts.MainAbility3.onDestroy";
let MainAbility5onCreate = "com.example.windowstagelifecycle_xts.MainAbility5.onCreate";
let MainAbility5onDestroy = "com.example.windowstagelifecycle_xts.MainAbility5.onDestroy";
let MainAbility6onForeground = "com.example.windowstagelifecycle_xts.MainAbility6.onForeground";
let MainAbility9onForeground = "com.example.windowstagelifecycle_xts.MainAbility9.onForeground";
let MainAbility11onCreate = "com.example.windowstagelifecycle_xts.MainAbility11.onCreate";
let MainAbility11onDestroy = "com.example.windowstagelifecycle_xts.MainAbility11.onDestroy";
let MainAbility12onCreate = "com.example.windowstagelifecycle_xts.MainAbility12.onCreate";
let MainAbility12onDestroy = "com.example.windowstagelifecycle_xts.MainAbility12.onDestroy";
let Hap1MainAbility1onDestroy = "com.example.windowstagelifecycle_xts.Hap1MainAbility1.onDestroy";
let Hap1MainAbility2onDestroy = "com.example.windowstagelifecycle_xts.Hap1MainAbility2.onDestroy";
let actsEvents = [
  MainAbility1onCreate,
  MainAbility1onDestroy,
  MainAbility1onForeground,
  MainAbility2onCreate,
  MainAbility2onDestroy,
  MainAbility3onCreate,
  MainAbility3onDestroy,
  MainAbility5onCreate,
  MainAbility5onDestroy,
  MainAbility6onForeground,
  MainAbility9onForeground,
  MainAbility11onCreate,
  MainAbility11onDestroy,
  MainAbility12onCreate,
  MainAbility12onDestroy,
  Hap1MainAbility1onDestroy,
  Hap1MainAbility2onDestroy
];

function sleep(time: number) {
  return new Promise<void>((resolve) => setTimeout(resolve, time));
}

export default function lifecycleTest() {
  describe('LifeCycleTest', () => {
    beforeEach(async (done: Function) => {
      console.info('LifeCycleTest before each called');
      await sleep(2000);
      done();
    });

    afterEach(async (done: Function) => {
      console.info('LifeCycleTest after each called');
      if (subscriber) {
        commonEvent.unsubscribe(subscriber, (err) => {
          console.info(TAG + ' unsubscribe. err: ' + JSON.stringify(err));
        });
      }
      if ("Singlehap_WindowStageLifeCycleTest_0200" === TAG || "Singlehap_WindowStageLifeCycleTest_0300" === TAG
        || "Singlehap_WindowStageLifeCycleTest_0500" === TAG || "Singlehap_WindowStageLifeCycleTest_0600" === TAG
        || "Singlehap_WindowStageLifeCycleTest_0700" === TAG) {
        let para: common.AbilityResult = {
          resultCode: 2,
          want: {
            "abilityName": "MainAbility1",
            "bundleName": "com.example.windowstagelifecycle_xts"
          }
        }
        console.log("LifeCycleTest terminateSelfwithresult para: " + JSON.stringify(para));
        await AppStorage.get<common.UIAbilityContext>("ability1context")!.terminateSelfWithResult(para)
          .then((data) => {
            console.log(TAG + "LifeCycleTest terminateSelfwithresult successful data: " + JSON.stringify(data));
            done();
          })
          .catch((error: BusinessError) => {
            console.log(TAG + "LifeCycleTest terminateSelfwithresult error: " + JSON.stringify(error));
            done();
          });
      } else if ("Singlehap_WindowStageLifeCycleTest_1200" === TAG) {
        commonEvent.createSubscriber({
          events: actsEvents
        })
          .then((data) => {
            console.info(TAG + ' createSubscriber successful. ');
            subscriber = data;
            commonEvent.subscribe(subscriber, (err, data) => {
              console.info(TAG + ' subscribeCallBack. Data: ' + JSON.stringify(data));
              if (data.event == MainAbility12onDestroy) {
                commonEvent.unsubscribe(subscriber, (err) => {
                  console.info(TAG + ' unsubscribe. err: ' + JSON.stringify(err));
                  subscriber = undefined;
                });
                done();
              }
            });
          })
        let para1: common.AbilityResult = {
          resultCode: 2,
          want: {
            "abilityName": "MainAbility12",
            "bundleName": "com.example.windowstagelifecycle_xts"
          }
        }
        console.log("LifeCycleTest terminateSelfwithresult para: " + JSON.stringify(para1));
        await AppStorage.get<common.UIAbilityContext>("ability12")!.terminateSelfWithResult(para1)
          .then((data) => {
            console.log(TAG + "LifeCycleTest terminateSelfwithresult successful data: " + JSON.stringify(data));
          })
          .catch((error: BusinessError) => {
            console.log(TAG + "LifeCycleTest terminateSelfwithresult error: " + JSON.stringify(error));
          });
      } else {
        done();
      }
    });


    /*
     * @tc.number  Singlehap_WindowStageLifeCycleTest_0100
     * @tc.name    Register in abilitystage,listen to the windowstage lifecycle of abilityA,deregister after listening
     * @tc.desc    Function test
     * @tc.level   0
     */
    it("Singlehap_WindowStageLifeCycleTest_0100", 0, async (done: Function) => {
      console.log("------------Singlehap_WindowStageLifeCycleTest_0100 START-------------");
      TAG = "Singlehap_WindowStageLifeCycleTest_0100";

      commonEvent.createSubscriber({
        events: actsEvents
      })
        .then((data) => {
          console.info(TAG + ' createSubscriber successful. ');
          subscriber = data;
          commonEvent.subscribe(subscriber, (err, data) => {
            console.info(TAG + ' subscribeCallBack. Data: ' + JSON.stringify(data));
            if (data.event == MainAbility2onDestroy) {
              commonEvent.unsubscribe(subscriber, (err) => {
                console.info(TAG + ' unsubscribe. err: ' + JSON.stringify(err));
                subscriber = undefined;
              });
              console.log(TAG + " registerAbilityLifecycleCallback listKey : " + JSON.stringify(AppStorage.get<string[]>("list")!));
              console.log(TAG + " registerAbilityLifecycleCallback callbackid : " + JSON.stringify(AppStorage.get<number>("callbackid")!));
              tempCallbackId = AppStorage.get<number>("callbackid")!;
              console.log(TAG + " registerAbilityLifecycleCallback tempCallbackId : " + JSON.stringify(tempCallbackId));
              let listTemp = JSON.stringify(AppStorage.get<string[]>("list")!);
              console.log(TAG + " listTemp is :" + listTemp);
              expect(listTemp.indexOf("MainAbility2 onWindowStageCreate") !== -1).assertTrue();
              expect(listTemp.indexOf("MainAbility2 onWindowStageActive") !== -1).assertTrue();
              expect(listTemp.indexOf("MainAbility2 onWindowStageInactive") !== -1).assertTrue();
              expect(listTemp.indexOf("MainAbility2 onWindowStageDestroy") !== -1).assertTrue();
              AppStorage.get<common.ApplicationContext>("applicationContext")!
                .off("abilityLifecycle", tempCallbackId, (error, data) => {
                  console.log(TAG + ": unregisterAbilityLifecycleCallback success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
                  expect(error).assertNull();
                  console.log("------------Singlehap_WindowStageLifeCycleTest_0100 END-------------");
                  done();
                });
            }
          });
        })
      let str: Want = {
        "bundleName": "com.example.windowstagelifecycle_xts",
        "abilityName": "MainAbility2",
      }
      AppStorage.get<common.UIAbilityContext>("abilityContext")!.startAbility(str)
        .then((data) => {
          console.info(TAG + ' start successful. Data: ' + data);
        })
        .catch((error: BusinessError) => {
          console.error(TAG + ' start failed. Cause: ' + JSON.stringify(error));
          expect().assertFail();
          done();
        })
    })

    /*
     * @tc.number  Singlehap_WindowStageLifeCycleTest_0200
     * @tc.name    Register in abilityA,listen to the windowstage lifecycle of abilityB,deregister after listening
     * @tc.desc    Function test
     * @tc.level   0
     */
    it("Singlehap_WindowStageLifeCycleTest_0200", 0, async (done: Function) => {
      console.log("------------Singlehap_WindowStageLifeCycleTest_0200 START-------------");
      TAG = "Singlehap_WindowStageLifeCycleTest_0200";

      commonEvent.createSubscriber({
        events: actsEvents
      })
        .then((data) => {
          console.info(TAG + ' createSubscriber successful. ');
          subscriber = data;
          commonEvent.subscribe(subscriber, (err, data) => {
            console.info(TAG + ' subscribeCallBack. Data: ' + JSON.stringify(data));
            if (data.event == MainAbility1onCreate) {
              let str1: Want = {
                "bundleName": "com.example.windowstagelifecycle_xts",
                "abilityName": "MainAbility2",
              }
              AppStorage.get<common.UIAbilityContext>("abilityContext")!.startAbility(str1)
                .then((data) => {
                  console.info(TAG + ' start successful. Data: ' + data);
                })
                .catch((error: BusinessError) => {
                  console.error(TAG + ' start failed. Cause: ' + JSON.stringify(error));
                  expect().assertFail();
                  done();
                })
            } else if (data.event == MainAbility2onDestroy) {
              commonEvent.unsubscribe(subscriber, (err) => {
                console.info(TAG + ' unsubscribe. err: ' + JSON.stringify(err));
                subscriber = undefined;
              });
              console.log(TAG + " registerAbilityLifecycleCallback listKey : " + JSON.stringify(AppStorage.get<string[]>("list1")!));
              console.log(TAG + " registerAbilityLifecycleCallback callbackid : " + JSON.stringify(AppStorage.get<number>("callbackid1")!));
              let listTemp = JSON.stringify(AppStorage.get<string[]>("list1")!);
              console.log(TAG + " listTemp is :" + JSON.stringify(listTemp));
              expect(listTemp.indexOf("MainAbility1 onWindowStageCreate") !== -1).assertTrue();
              expect(listTemp.split("MainAbility1 onWindowStageActive").length - 1).assertEqual(2);
              expect(listTemp.indexOf("MainAbility1 onWindowStageInactive") !== -1).assertTrue();
              expect(listTemp.indexOf("MainAbility2 onWindowStageCreate") !== -1).assertTrue();
              expect(listTemp.indexOf("MainAbility2 onWindowStageActive") !== -1).assertTrue();
              expect(listTemp.indexOf("MainAbility2 onWindowStageInactive") !== -1).assertTrue();
              expect(listTemp.indexOf("MainAbility2 onWindowStageDestroy") !== -1).assertTrue();
              AppStorage.get<common.ApplicationContext>("applicationContext1")!
                .off("abilityLifecycle", AppStorage.get<number>("callbackid1")!, (error, data) => {
                  console.log(TAG + ": unregisterAbilityLifecycleCallback success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
                  expect(error).assertNull();
                  done();
                })
            }
          });
        })
      let str: Want = {
        "bundleName": "com.example.windowstagelifecycle_xts",
        "abilityName": "MainAbility1",
      }
      AppStorage.get<common.UIAbilityContext>("abilityContext")!.startAbility(str)
        .then((data) => {
          console.info(TAG + ' start successful. Data: ' + data);
        })
        .catch((error: BusinessError) => {
          console.error(TAG + ' start failed. Cause: ' + JSON.stringify(error));
          expect().assertFail();
          done();
        })
    });

    /*
    * @tc.number  Singlehap_WindowStageLifeCycleTest_0300
    * @tc.name    Register in abilityA,listening the windowstage lifecycle of abilityB,deregister,repeat the unregister
    * @tc.desc    Function test
    * @tc.level   0
    */
    it("Singlehap_WindowStageLifeCycleTest_0300", 0, async (done: Function) => {
      console.log("------------Singlehap_WindowStageLifeCycleTest_0300 START-------------");
      TAG = "Singlehap_WindowStageLifeCycleTest_0300";
      let mainAbility2onCreate = false;

      commonEvent.createSubscriber({
        events: actsEvents
      })
        .then((data) => {
          console.info(TAG + ' createSubscriber successful. ');
          subscriber = data;
          commonEvent.subscribe(subscriber, (err, data) => {
            console.info(TAG + ' subscribeCallBack. Data: ' + JSON.stringify(data));
            if (data.event == MainAbility1onCreate) {
              let str1: Want = {
                "bundleName": "com.example.windowstagelifecycle_xts",
                "abilityName": "MainAbility2",
              }
              AppStorage.get<common.UIAbilityContext>("abilityContext")!.startAbility(str1)
                .then((data) => {
                  console.info(TAG + ' start successful. Data: ' + data);
                })
                .catch((error: BusinessError) => {
                  console.error(TAG + ' start failed. Cause: ' + JSON.stringify(error));
                  expect().assertFail();
                  done();
                })
            } else if (data.event == MainAbility2onCreate) {
              mainAbility2onCreate = true;
            } else if (data.event == MainAbility1onForeground && mainAbility2onCreate) {
              commonEvent.unsubscribe(subscriber, (err) => {
                console.info(TAG + ' unsubscribe. err: ' + JSON.stringify(err));
                subscriber = undefined;
              });
              console.log(TAG + " registerAbilityLifecycleCallback listKey : " + JSON.stringify(AppStorage.get<string[]>("list1")!));
              console.log(TAG + " registerAbilityLifecycleCallback callbackid : " + JSON.stringify(AppStorage.get<number>("callbackid1")!));
              let listTemp = JSON.stringify(AppStorage.get<string[]>("list1")!);
              console.log(TAG + " listTemp is :" + listTemp);
              expect(listTemp.indexOf("MainAbility1 onWindowStageCreate") !== -1).assertTrue();
              expect(listTemp.split("MainAbility1 onWindowStageActive").length - 1).assertEqual(2);
              expect(listTemp.indexOf("MainAbility1 onWindowStageInactive") !== -1).assertTrue();
              expect(listTemp.indexOf("MainAbility2 onWindowStageCreate") !== -1).assertTrue();
              expect(listTemp.indexOf("MainAbility2 onWindowStageActive") !== -1).assertTrue();
              expect(listTemp.indexOf("MainAbility2 onWindowStageInactive") !== -1).assertTrue();
              expect(listTemp.indexOf("MainAbility2 onWindowStageDestroy") !== -1).assertTrue();
              AppStorage.get<common.ApplicationContext>("applicationContext1")!
                .off("abilityLifecycle", AppStorage.get<number>("callbackid1")!)
                .then((data) => {
                  console.info(TAG + ' unregisterAbilityLifecycleCallback successful. Data: ' + data);
                  done();
                })
                .catch((error: BusinessError) => {
                  console.error(TAG + ' unregisterAbilityLifecycleCallback failed. Cause: ' + JSON.stringify(error));
                  expect().assertFail();
                  done();
                })
            }
          });
        })
      let str: Want = {
        "bundleName": "com.example.windowstagelifecycle_xts",
        "abilityName": "MainAbility1",
      }
      AppStorage.get<common.UIAbilityContext>("abilityContext")!.startAbility(str)
        .then((data) => {
          console.info(TAG + ' start successful. Data: ' + data);
        })
        .catch((error: BusinessError) => {
          console.error(TAG + ' start failed. Cause: ' + JSON.stringify(error));
          expect().assertFail();
          done();
        })
    });

    /*
     * @tc.number  Singlehap_WindowStageLifeCycleTest_0400
     * @tc.name    Register in abilityA,listening the windowstage lifecycle of abilityB,terminate abilityA,unregister
     * @tc.desc    Function test
     * @tc.level   0
     */
    it("Singlehap_WindowStageLifeCycleTest_0400", 0, async (done: Function) => {
      console.log("------------Singlehap_WindowStageLifeCycleTest_0400 START-------------");
      TAG = "Singlehap_WindowStageLifeCycleTest_0400";

      commonEvent.createSubscriber({
        events: actsEvents
      })
        .then((data) => {
          console.info(TAG + ' createSubscriber successful. ');
          subscriber = data;
          commonEvent.subscribe(subscriber, (err, data) => {
            console.info(TAG + ' subscribeCallBack. Data: ' + JSON.stringify(data));
            if (data.event == MainAbility3onCreate) {
              let str1: Want = {
                "bundleName": "com.example.windowstagelifecycle_xts",
                "abilityName": "MainAbility2",
              }
              AppStorage.get<common.UIAbilityContext>("abilityContext")!.startAbility(str1)
                .then((data) => {
                  console.info(TAG + ' start successful. Data: ' + data);
                })
                .catch((error: BusinessError) => {
                  console.error(TAG + ' start failed. Cause: ' + JSON.stringify(error));
                  expect().assertFail();
                  done();
                })
            } else if (data.event == MainAbility2onDestroy) {
              let para: common.AbilityResult = {
                resultCode: 1,
                want: {
                  "abilityName": "MainAbility3",
                  "bundleName": "com.example.windowstagelifecycle_xts"
                }
              }
              console.log(TAG + " terminateSelfwithresult para: " + JSON.stringify(para));
              AppStorage.get<common.UIAbilityContext>("ability3")!.terminateSelfWithResult(para)
                .then((data) => {
                  console.log(TAG + " terminateSelfwithresult successful data: " + JSON.stringify(data));
                })
                .catch((error: BusinessError) => {
                  console.log(TAG + " terminateSelfwithresult error: " + JSON.stringify(error));
                });
            } else if (data.event == MainAbility3onDestroy) {
              commonEvent.unsubscribe(subscriber, (err) => {
                console.info(TAG + ' unsubscribe. err: ' + JSON.stringify(err));
                subscriber = undefined;
              });
              AppStorage.get<common.ApplicationContext>("applicationContext3")!
                .off("abilityLifecycle", AppStorage.get<number>("callbackid3")!, (error, data) => {
                  console.log(TAG + ": unregisterAbilityLifecycleCallback3 success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
                })
              console.log(TAG + " registerAbilityLifecycleCallback listKey : " + JSON.stringify(AppStorage.get<string[]>("list3")!));
              console.log(TAG + " registerAbilityLifecycleCallback callbackid : " + JSON.stringify(AppStorage.get<number>("callbackid3")!));
              let listTemp = JSON.stringify(AppStorage.get<string[]>("list3")!);
              console.log(TAG + " listTemp is :" + listTemp);
              expect(listTemp.indexOf("MainAbility3 onWindowStageCreate") !== -1).assertTrue();
              expect(listTemp.split("MainAbility3 onWindowStageActive").length - 1).assertEqual(2);
              expect(listTemp.indexOf("MainAbility3 onWindowStageInactive") !== -1).assertTrue();
              expect(listTemp.indexOf("MainAbility2 onWindowStageCreate") !== -1).assertTrue();
              expect(listTemp.indexOf("MainAbility2 onWindowStageActive") !== -1).assertTrue();
              expect(listTemp.indexOf("MainAbility2 onWindowStageInactive") !== -1).assertTrue();
              expect(listTemp.indexOf("MainAbility2 onWindowStageDestroy") !== -1).assertTrue();
              console.log("------------Singlehap_WindowStageLifeCycleTest_0400 END-------------");
              done();
            }
          });
        })

      let str: Want = {
        "bundleName": "com.example.windowstagelifecycle_xts",
        "abilityName": "MainAbility3",
      }
      AppStorage.get<common.UIAbilityContext>("abilityContext")!.startAbility(str)
        .then((data) => {
          console.info(TAG + ' start3 successful. Data: ' + data);
        })
        .catch((error: BusinessError) => {
          console.error(TAG + ' start3 failed. Cause: ' + JSON.stringify(error));
          expect().assertFail();
          done();
        })
    });

    /*
     * @tc.number  Singlehap_WindowStageLifeCycleTest_0500
     * @tc.name    Register in abilityA,start abilityB、abilityC,terminate abilityB 、abilityC
     * @tc.desc    Function test
     * @tc.level   0
     */
    it("Singlehap_WindowStageLifeCycleTest_0500", 0, async (done: Function) => {
      await sleep(500);
      console.log("------------Singlehap_WindowStageLifeCycleTest_0500 START-------------");
      TAG = "Singlehap_WindowStageLifeCycleTest_0500";

      commonEvent.createSubscriber({
        events: actsEvents
      })
        .then((data) => {
          console.info(TAG + ' createSubscriber successful. ');
          subscriber = data;
          commonEvent.subscribe(subscriber, (err, data) => {
            console.info(TAG + ' subscribeCallBack. Data: ' + JSON.stringify(data));
            if (data.event == MainAbility1onCreate) {
              let str1: Want = {
                "bundleName": "com.example.windowstagelifecycle_xts",
                "abilityName": "MainAbility5",
              }
              AppStorage.get<common.UIAbilityContext>("abilityContext")!.startAbility(str1)
                .then((data) => {
                  console.info(TAG + ' start5 successful. Data: ' + data);
                })
                .catch((error: BusinessError) => {
                  console.error(TAG + ' start5 failed. Cause: ' + JSON.stringify(error));
                  expect().assertFail();
                  done();
                })
            } else if (data.event == MainAbility5onCreate) {
              let str2: Want = {
                "bundleName": "com.example.windowstagelifecycle_xts",
                "abilityName": "MainAbility2",
              }
              AppStorage.get<common.UIAbilityContext>("abilityContext")!.startAbility(str2)
                .then((data) => {
                  console.info(TAG + ' start2 successful. Data: ' + data);
                })
                .catch((error: BusinessError) => {
                  console.error(TAG + ' start2 failed. Cause: ' + JSON.stringify(error));
                })
            } else if (data.event == MainAbility5onDestroy) {
              commonEvent.unsubscribe(subscriber, (err) => {
                console.info(TAG + ' unsubscribe. err: ' + JSON.stringify(err));
                subscriber = undefined;
              });
              console.log(TAG + " listKey1 : " + JSON.stringify(AppStorage.get<string[]>("list1")!));
              console.log(TAG + " callbackid1 : " + JSON.stringify(AppStorage.get<number>("callbackid1")!));
              let listTemp = JSON.stringify(AppStorage.get<string[]>("list1")!);
              expect(listTemp.indexOf("MainAbility5 onWindowStageCreate") !== -1).assertTrue();
              expect(listTemp.indexOf("MainAbility5 onWindowStageActive") !== -1).assertTrue();
              expect(listTemp.indexOf("MainAbility5 onWindowStageInactive") !== -1).assertTrue();
              expect(listTemp.indexOf("MainAbility5 onWindowStageDestroy") !== -1).assertTrue();
              expect(listTemp.indexOf("MainAbility2 onWindowStageCreate") !== -1).assertTrue();
              expect(listTemp.indexOf("MainAbility2 onWindowStageActive") !== -1).assertTrue();
              expect(listTemp.indexOf("MainAbility2 onWindowStageInactive") !== -1).assertTrue();
              expect(listTemp.indexOf("MainAbility2 onWindowStageDestroy") !== -1).assertTrue();
              AppStorage.get<common.ApplicationContext>("applicationContext1")!
                .off("abilityLifecycle", AppStorage.get<number>("callbackid1")!, (error, data) => {
                  console.log(TAG + ": unregisterAbilityLifecycleCallback success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
                })
              console.log("------------Singlehap_WindowStageLifeCycleTest_0500 END-------------");
              done();
            }
          });
        })

      let str: Want = {
        "bundleName": "com.example.windowstagelifecycle_xts",
        "abilityName": "MainAbility1",
      }
      AppStorage.get<common.UIAbilityContext>("abilityContext")!.startAbility(str)
        .then((data) => {
          console.info(TAG + ' start1 successful. Data: ' + data);
        })
        .catch((error: BusinessError) => {
          console.error(TAG + ' start1 failed. Cause: ' + JSON.stringify(error));
        })
    });

    /*
     * @tc.number  Singlehap_WindowStageLifeCycleTest_0600
     * @tc.name    Maninability1 Register listening, Repeat starting and termination Ability2
     * @tc.desc    Function test
     * @tc.level   0
     */
    it("Singlehap_WindowStageLifeCycleTest_0600", 0, async (done: Function) => {
      console.log("------------Singlehap_WindowStageLifeCycleTest_0600 START-------------");
      TAG = "Singlehap_WindowStageLifeCycleTest_0600";
      let mainAbility2onDestroy = 0;

      commonEvent.createSubscriber({
        events: actsEvents
      })
        .then((data) => {
          console.info(TAG + ' createSubscriber successful. ');
          subscriber = data;
          commonEvent.subscribe(subscriber, (err, data) => {
            console.info(TAG + ' subscribeCallBack. Data: ' + JSON.stringify(data));
            if (data.event == MainAbility1onCreate) {
              let str1: Want = {
                "bundleName": "com.example.windowstagelifecycle_xts",
                "abilityName": "MainAbility2",
              }
              AppStorage.get<common.UIAbilityContext>("abilityContext")!.startAbility(str1)
                .then((data) => {
                  console.info(TAG + ' start successful. Data: ' + data);
                })
                .catch((error: BusinessError) => {
                  console.error(TAG + ' start failed. Cause: ' + JSON.stringify(error));
                })
            }
            if (data.event == MainAbility2onDestroy) {
              mainAbility2onDestroy++;
              if (mainAbility2onDestroy == 3) {
                commonEvent.unsubscribe(subscriber, (err) => {
                  console.info(TAG + ' unsubscribe. err: ' + JSON.stringify(err));
                  subscriber = undefined;
                });
                console.log(TAG + " registerAbilityLifecycleCallback listKey : " + JSON.stringify(AppStorage.get<string[]>("list1")!));
                console.log(TAG + " registerAbilityLifecycleCallback callbackid : " + JSON.stringify(AppStorage.get<number>("callbackid1")!));
                let listTemp = JSON.stringify(AppStorage.get<string[]>("list1")!);
                console.log(TAG + " listTemp is :" + listTemp);
                expect(listTemp.indexOf("MainAbility1 onWindowStageCreate") !== -1).assertTrue();
                expect(listTemp.split("MainAbility1 onWindowStageActive").length - 1).assertEqual(4);
                expect(listTemp.split("MainAbility1 onWindowStageInactive").length - 1).assertEqual(3);
                expect(listTemp.split("MainAbility2 onWindowStageCreate").length - 1).assertEqual(3);
                expect(listTemp.split("MainAbility2 onWindowStageActive").length - 1).assertEqual(3);
                expect(listTemp.split("MainAbility2 onWindowStageInactive").length - 1).assertEqual(3);
                expect(listTemp.split("MainAbility2 onWindowStageDestroy").length - 1).assertEqual(3);
                AppStorage.get<common.ApplicationContext>("applicationContext1")!
                  .off("abilityLifecycle", AppStorage.get<number>("callbackid1")!, (error, data) => {
                    console.log(TAG + ": unregisterAbilityLifecycleCallback success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
                    console.log("------------Singlehap_WindowStageLifeCycleTest_0600 END-------------");
                    done();
                  });
              } else {
                let str1: Want = {
                  "bundleName": "com.example.windowstagelifecycle_xts",
                  "abilityName": "MainAbility2",
                }
                AppStorage.get<common.UIAbilityContext>("abilityContext")!.startAbility(str1)
                  .then((data) => {
                    console.info(TAG + ' start successful. Data: ' + data);
                  })
                  .catch((error: BusinessError) => {
                    console.error(TAG + ' start failed. Cause: ' + JSON.stringify(error));
                  })
              }
            }
          });
        })

      let str: Want = {
        "bundleName": "com.example.windowstagelifecycle_xts",
        "abilityName": "MainAbility1",
      }
      AppStorage.get<common.UIAbilityContext>("abilityContext")!.startAbility(str)
        .then((data) => {
          console.info(TAG + ' start successful. Data: ' + data);
        })
        .catch((error: BusinessError) => {
          console.error(TAG + ' start failed. Cause: ' + JSON.stringify(error));
        })
    });

    /*
     * @tc.number  Singlehap_WindowStageLifeCycleTest_0700
     * @tc.name    Repeat switching Ability1 between front and back
     * @tc.desc    Function test
     * @tc.level   0
     */
    it("Singlehap_WindowStageLifeCycleTest_0700", 0, async (done: Function) => {
      console.log("------------Singlehap_WindowStageLifeCycleTest_0700 START-------------");
      TAG = "Singlehap_WindowStageLifeCycleTest_0700";
      let mainAbility2onDestroy = 0;

      commonEvent.createSubscriber({
        events: actsEvents
      })
        .then((data) => {
          console.info(TAG + ' createSubscriber successful. ');
          subscriber = data;
          commonEvent.subscribe(subscriber, (err, data) => {
            console.info(TAG + ' subscribeCallBack. Data: ' + JSON.stringify(data));
            if (data.event == MainAbility1onCreate) {
              let str1: Want = {
                "bundleName": "com.example.windowstagelifecycle_xts",
                "abilityName": "MainAbility2",
              }
              AppStorage.get<common.UIAbilityContext>("abilityContext")!.startAbility(str1)
                .then((data) => {
                  console.info(TAG + ' start successful. Data: ' + data);
                })
                .catch((error: BusinessError) => {
                  console.error(TAG + ' start failed. Cause: ' + JSON.stringify(error));
                })
            }
            if (data.event == MainAbility2onDestroy) {
              mainAbility2onDestroy++;
              if (mainAbility2onDestroy == 2) {
                commonEvent.unsubscribe(subscriber, (err) => {
                  console.info(TAG + ' unsubscribe. err: ' + JSON.stringify(err));
                  subscriber = undefined;
                });
                console.log(TAG + " registerAbilityLifecycleCallback listKey : " + JSON.stringify(AppStorage.get<string[]>("list1")!));
                console.log(TAG + " registerAbilityLifecycleCallback callbackid : " + JSON.stringify(AppStorage.get<number>("callbackid1")!));
                let listTemp = JSON.stringify(AppStorage.get<string[]>("list1")!);
                console.log(TAG + " listTemp is :" + listTemp);
                expect(listTemp.indexOf("MainAbility1 onWindowStageCreate") !== -1).assertTrue();
                expect(listTemp.split("MainAbility1 onWindowStageActive").length - 1).assertEqual(3);
                expect(listTemp.split("MainAbility1 onWindowStageInactive").length - 1).assertEqual(2);
                expect(listTemp.split("MainAbility2 onWindowStageCreate").length - 1).assertEqual(2);
                expect(listTemp.split("MainAbility2 onWindowStageActive").length - 1).assertEqual(2);
                expect(listTemp.split("MainAbility2 onWindowStageInactive").length - 1).assertEqual(2);
                expect(listTemp.split("MainAbility2 onWindowStageDestroy").length - 1).assertEqual(2);
                AppStorage.get<common.ApplicationContext>("applicationContext1")!
                  .off("abilityLifecycle", AppStorage.get<number>("callbackid1")!, (error, data) => {
                    console.log(TAG + ": unregisterAbilityLifecycleCallback success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
                    console.log("------------Singlehap_WindowStageLifeCycleTest_0700 END-------------");
                    done();
                  });
              } else {
                console.log(TAG + " start MainAbility2");
                let str1: Want = {
                  "bundleName": "com.example.windowstagelifecycle_xts",
                  "abilityName": "MainAbility2",
                }
                AppStorage.get<common.UIAbilityContext>("abilityContext")!.startAbility(str1)
                  .then((data) => {
                    console.info(TAG + ' start successful. Data: ' + data);
                  })
                  .catch((error: BusinessError) => {
                    console.error(TAG + ' start failed. Cause: ' + JSON.stringify(error));
                  })
              }
            }
          });
        })

      let str: Want = {
        "bundleName": "com.example.windowstagelifecycle_xts",
        "abilityName": "MainAbility1",
      }
      AppStorage.get<common.UIAbilityContext>("abilityContext")!.startAbility(str)
        .then((data) => {
          console.info(TAG + ' start successful. Data: ' + data);
        })
        .catch((error: BusinessError) => {
          console.error(TAG + ' start failed. Cause: ' + JSON.stringify(error));
        })
    });

    /*
     * @tc.number  Singlehap_WindowStageLifeCycleTest_0800
     * @tc.name    Register listening in abilityA foreground,repeat the registration
     * @tc.desc    Function test
     * @tc.level   0
     */
    it("Singlehap_WindowStageLifeCycleTest_0800", 0, async (done: Function) => {
      console.log("------------Singlehap_WindowStageLifeCycleTest_0800 START-------------");
      TAG = "Singlehap_WindowStageLifeCycleTest_0800";
      let id1 = -1;

      commonEvent.createSubscriber({
        events: actsEvents
      })
        .then((data) => {
          console.info(TAG + ' createSubscriber successful. ');
          subscriber = data;
          commonEvent.subscribe(subscriber, (err, data) => {
            console.info(TAG + ' subscribeCallBack. Data: ' + JSON.stringify(data));
            if (data.event == MainAbility6onForeground) {
              let id = AppStorage.get<number>('callbackid6')!;
              if (id1 == -1) {
                id1 = id;
                let str1: Want = {
                  "bundleName": "com.example.windowstagelifecycle_xts",
                  "abilityName": "MainAbility2",
                }
                AppStorage.get<common.UIAbilityContext>("abilityContext")!.startAbility(str1)
                  .then((data) => {
                    console.info(TAG + ' start successful. Data: ' + data);
                  })
                  .catch((error: BusinessError) => {
                    console.error(TAG + ' start failed. Cause: ' + JSON.stringify(error));
                  })
              } else {
                commonEvent.unsubscribe(subscriber, (err) => {
                  console.info(TAG + ' unsubscribe. err: ' + JSON.stringify(err));
                  subscriber = undefined;
                });
                expect(id1 + 1).assertEqual(id);
                AppStorage.get<common.ApplicationContext>("applicationContext6")!.off("abilityLifecycle", id1, (error, data) => {
                  console.log(TAG + ": unregisterAbilityLifecycleCallback success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
                });
                AppStorage.get<common.ApplicationContext>("applicationContext6")!.off("abilityLifecycle", id, (error, data) => {
                  console.log(TAG + ": unregisterAbilityLifecycleCallback success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
                });
                AppStorage.get<common.UIAbilityContext>("ability6")!.terminateSelf();
                console.log("------------Singlehap_WindowStageLifeCycleTest_0800 END-------------");
                done();
              }
            }
          });
        })

      let str: Want = {
        "bundleName": "com.example.windowstagelifecycle_xts",
        "abilityName": "MainAbility6",
      }
      AppStorage.get<common.UIAbilityContext>("abilityContext")!.startAbility(str)
        .then((data) => {
          console.info(TAG + ' start successful. Data: ' + data);
        })
        .catch((error: BusinessError) => {
          console.error(TAG + ' start failed. Cause: ' + JSON.stringify(error));
        })
    });

    /*
    * @tc.number  Singlehap_WindowStageLifeCycleTest_0900
    * @tc.name    The ability of HAP A listens to the ability lifecycle callback of HAP B (singleton)
    * @tc.desc    Function test
    * @tc.level   0
    */
    it("Singlehap_WindowStageLifeCycleTest_0900", 0, async (done: Function) => {
      console.log("------------Singlehap_WindowStageLifeCycleTest_0900 start-------------");
      TAG = "Singlehap_WindowStageLifeCycleTest_0900";
      let mainAbility9onDestroy = 0;

      commonEvent.createSubscriber({
        events: actsEvents
      })
        .then((data) => {
          console.info(TAG + ' createSubscriber successful. ');
          subscriber = data;
          commonEvent.subscribe(subscriber, (err, data) => {
            console.info(TAG + ' subscribeCallBack. Data: ' + JSON.stringify(data));
            if (data.event == MainAbility9onForeground) {
              AppStorage.get<common.UIAbilityContext>("abilityContext")!.startAbility({
                bundleName: "com.example.windowstagelifecycle_xts",
                abilityName: "Hap1MainAbility1"
              });
            }
            if (data.event == Hap1MainAbility1onDestroy) {
              mainAbility9onDestroy++;
              if (mainAbility9onDestroy == 3) {
                commonEvent.unsubscribe(subscriber, (err) => {
                  console.info(TAG + ' unsubscribe. err: ' + JSON.stringify(err));
                });
                let listTemp = JSON.stringify(AppStorage.get<string[]>("mainAbility9ListKey")!);

                console.log(TAG + "listTemp is :" + listTemp);
                console.log(TAG + "globalThis.mainAbility9CallBackId is :" + AppStorage.get<number>("mainAbility9CallBackId")!);
                expect(listTemp.indexOf("Hap1MainAbility1 onWindowStageCreate") !== -1).assertTrue();
                expect(listTemp.indexOf("Hap1MainAbility1 onWindowStageActive") !== -1).assertTrue();
                expect(listTemp.indexOf("Hap1MainAbility1 onWindowStageInactive") !== -1).assertTrue();
                expect(listTemp.indexOf("Hap1MainAbility1 onWindowStageDestroy") !== -1).assertTrue();
                AppStorage.get<common.ApplicationContext>("applicationContext9")!
                  .off("abilityLifecycle", AppStorage.get<number>("mainAbility9CallBackId")!, (error, data) => {
                    console.log(TAG + ": unregisterAbilityLifecycleCallback success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
                  });
                AppStorage.get<common.UIAbilityContext>("context9")!.terminateSelf();
                console.log("------------Singlehap_WindowStageLifeCycleTest_0900 end-------------");
                done();
              } else {
                AppStorage.get<common.UIAbilityContext>("abilityContext")!.startAbility({
                  bundleName: "com.example.windowstagelifecycle_xts",
                  abilityName: "Hap1MainAbility1"
                });
              }
            }
          });
        })

      AppStorage.get<common.UIAbilityContext>("abilityContext")!.startAbility({
        bundleName: "com.example.windowstagelifecycle_xts",
        abilityName: "MainAbility9"
      }, (error, data) => {
        console.log(TAG + ": MainAbility9 startAbility success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
      });
    });

    /*
     * @tc.number  Singlehap_WindowStageLifeCycleTest_1000
     * @tc.name    The ability of HAP A listens to the ability windowstage lifecycle callback of HAP B (standard)
     * @tc.desc    Function test
     * @tc.level   0
     */
    it("Singlehap_WindowStageLifeCycleTest_1000", 0, async (done: Function) => {
      console.log("------------Singlehap_WindowStageLifeCycleTest_1000 start-------------");
      TAG = "Singlehap_WindowStageLifeCycleTest_1000";
      let mainAbility9onForeground = 0;
      commonEvent.createSubscriber({
        events: actsEvents
      })
        .then((data) => {
          console.info(TAG + ' createSubscriber successful. ');
          subscriber = data;
          commonEvent.subscribe(subscriber, (err, data) => {
            console.info(TAG + ' subscribeCallBack. Data: ' + JSON.stringify(data));
            if (data.event == MainAbility9onForeground) {
              mainAbility9onForeground++;
              console.log(TAG + "mainAbility9onForeground is :" + mainAbility9onForeground);
              if (mainAbility9onForeground == 3) {
                commonEvent.unsubscribe(subscriber, (err) => {
                  console.info(TAG + ' unsubscribe. err: ' + JSON.stringify(err));
                });
                let listTemp = JSON.stringify(AppStorage.get<string[]>("mainAbility9ListKey")!);
                console.log(TAG + "listTemp is :" + listTemp);
                console.log(TAG + "globalThis.mainAbility9CallBackId is :" + AppStorage.get<number>("mainAbility9CallBackId")!);
                expect(listTemp.split("Hap1MainAbility2 onWindowStageCreate").length - 1).assertEqual(2);
                expect(listTemp.split("Hap1MainAbility2 onWindowStageActive").length - 1).assertEqual(2);
                expect(listTemp.split("Hap1MainAbility2 onWindowStageInactive").length - 1).assertEqual(2);
                expect(listTemp.split("Hap1MainAbility2 onWindowStageDestroy").length - 1).assertEqual(2);
                AppStorage.get<common.ApplicationContext>("applicationContext9")!
                  .off("abilityLifecycle", AppStorage.get<number>("mainAbility9CallBackId")!, (error, data) => {
                    console.log(TAG + ": unregisterAbilityLifecycleCallback success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
                    done();
                  });
                AppStorage.get<common.UIAbilityContext>("context9")!.terminateSelf();
                console.log("------------Singlehap_WindowStageLifeCycleTest_1000 end-------------");
                done();
              } else {
                console.log(TAG + "start ability Hap1MainAbility2");
                AppStorage.get<common.UIAbilityContext>("abilityContext")!.startAbility({
                  bundleName: "com.example.windowstagelifecycle_xts",
                  abilityName: "Hap1MainAbility2"
                });
              }
            }
          });
        })

      AppStorage.get<common.UIAbilityContext>("abilityContext")!.startAbility({
        bundleName: "com.example.windowstagelifecycle_xts",
        abilityName: "MainAbility9"
      });
    });

    /*
     * @tc.number  Singlehap_WindowStageLifeCycleTest_1100
     * @tc.name    Register in abilityA , starting and termination AbilityB,Repeat previous steps (standard)
     * @tc.desc    Function test
     * @tc.level   0
     */
    it("Singlehap_WindowStageLifeCycleTest_1100", 0, async (done: Function) => {
      console.log("------------Singlehap_WindowStageLifeCycleTest_1100 START-------------");
      TAG = "Singlehap_WindowStageLifeCycleTest_1100";
      let id1: number;
      let id2: number;
      let mainAbility11onDestory = 0;

      commonEvent.createSubscriber({
        events: actsEvents
      })
        .then((data) => {
          console.info(TAG + ' createSubscriber successful. ');
          subscriber = data;
          commonEvent.subscribe(subscriber, (err, data) => {
            console.info(TAG + ' subscribeCallBack. Data: ' + JSON.stringify(data));
            if (data.event == MainAbility11onCreate) {
              if (mainAbility11onDestory == 0) {
                id1 = AppStorage.get<number>("callbackid11")!;
                console.log(TAG + " secondCallback callbackid id1 : " + JSON.stringify(AppStorage.get<number>("callbackid11")!));
              } else if (mainAbility11onDestory == 1) {
                id2 = AppStorage.get<number>("callbackid11")!;
                console.log(TAG + " secondCallback callbackid id2 : " + JSON.stringify(AppStorage.get<number>("callbackid11")!));
              }
              AppStorage.get<common.UIAbilityContext>("abilityContext")!.startAbility({
                "bundleName": "com.example.windowstagelifecycle_xts",
                "abilityName": "MainAbility2",
              })
            } else if (data.event == MainAbility2onDestroy) {
              AppStorage.get<common.UIAbilityContext>("ability11")!.terminateSelf();
            } else if (data.event == MainAbility11onDestroy) {
              mainAbility11onDestory++;
              if (mainAbility11onDestory == 1) {
                AppStorage.get<common.UIAbilityContext>("abilityContext")!.startAbility({
                  "bundleName": "com.example.windowstagelifecycle_xts",
                  "abilityName": "MainAbility11",
                })
              } else {
                commonEvent.unsubscribe(subscriber, (err) => {
                  console.info(TAG + ' unsubscribe. err: ' + JSON.stringify(err));
                });
                expect(id1 + 1).assertEqual(id2);
                console.log(TAG + " secondCallback listKey : " + JSON.stringify(AppStorage.get<string[]>("list11")!));
                let listTemp = JSON.stringify(AppStorage.get<string[]>("list11")!);
                console.log(TAG + " listTemp is :" + listTemp);
                expect(listTemp.indexOf("MainAbility2 onWindowStageCreate") !== -1).assertTrue();
                expect(listTemp.indexOf("MainAbility2 onWindowStageActive") !== -1).assertTrue();
                expect(listTemp.indexOf("MainAbility2 onWindowStageInactive") !== -1).assertTrue();
                expect(listTemp.indexOf("MainAbility2 onWindowStageDestroy") !== -1).assertTrue();

                AppStorage.get<common.ApplicationContext>("applicationContext11")!
                  .off("abilityLifecycle", id1, (error, data) => {
                    console.log(TAG + ": unregisterAbilityLifecycleCallback success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
                  });
                AppStorage.get<common.ApplicationContext>("applicationContext11")!
                  .off("abilityLifecycle", id2, (error, data) => {
                    console.log(TAG + ": unregisterAbilityLifecycleCallback success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
                  });
                console.log("------------Singlehap_WindowStageLifeCycleTest_1100 END-------------");
                done();
              }
            }
          });
        })

      let str: Want = {
        "bundleName": "com.example.windowstagelifecycle_xts",
        "abilityName": "MainAbility11",
      }
      AppStorage.get<common.UIAbilityContext>("abilityContext")!.startAbility(str)
        .then((data) => {
          console.info(TAG + ' start successful. Data: ' + data);
        })
        .catch((error: BusinessError) => {
          console.error(TAG + ' start failed. Cause: ' + JSON.stringify(error));
        })
    });

    /*
     * @tc.number  Singlehap_WindowStageLifeCycleTest_1200
     * @tc.name    Register in abilityA, starting and termination AbilityB, terminate abilityA, Re-register in abilityA
     * @tc.desc    Function test
     * @tc.level   0
     */
    it("Singlehap_WindowStageLifeCycleTest_1200", 0, async (done: Function) => {
      console.log("------------Singlehap_WindowStageLifeCycleTest_1200 START-------------");
      TAG = "Singlehap_WindowStageLifeCycleTest_1200";
      let id1: number;
      let id2: number;
      let isMainAbility2FirstTerminateSelf = true;

      commonEvent.createSubscriber({
        events: actsEvents
      })
        .then((data) => {
          console.info(TAG + ' createSubscriber successful. ');
          subscriber = data;
          commonEvent.subscribe(subscriber, (err, data) => {
            console.info(TAG + ' subscribeCallBack. Data: ' + JSON.stringify(data));
            if (data.event == MainAbility12onCreate) {
              if (isMainAbility2FirstTerminateSelf) {
                id1 = AppStorage.get<number>("callbackid12")!;
                console.log(TAG + " secondCallback callbackid id1 : " + JSON.stringify(AppStorage.get<number>("callbackid11")!));
              } else {
                id2 = AppStorage.get<number>("callbackid12")!;
                console.log(TAG + " secondCallback callbackid id2 : " + JSON.stringify(AppStorage.get<number>("callbackid11")!));
              }
              AppStorage.get<common.UIAbilityContext>("abilityContext")!.startAbility({
                "bundleName": "com.example.windowstagelifecycle_xts",
                "abilityName": "MainAbility2",
              })
            } else if (data.event == MainAbility12onDestroy) {
              AppStorage.get<common.UIAbilityContext>("abilityContext")!.startAbility({
                "bundleName": "com.example.windowstagelifecycle_xts",
                "abilityName": "MainAbility12",
              })
                .then((data) => {
                  console.info(TAG + ' start successful. Data: ' + data);
                })
                .catch((error: BusinessError) => {
                  console.error(TAG + ' start failed. Cause: ' + JSON.stringify(error));
                })
            } else if (data.event == MainAbility2onDestroy) {
              if (isMainAbility2FirstTerminateSelf) {
                let para: common.AbilityResult = {
                  resultCode: 2000,
                  want: {
                    "abilityName": "MainAbility12",
                    "bundleName": "com.example.windowstagelifecycle_xts"
                  }
                }
                console.log(TAG + " terminateSelfwithresult para: " + JSON.stringify(para));
                AppStorage.get<common.UIAbilityContext>("ability12")!.terminateSelfWithResult(para)
                  .then((data) => {
                    console.log(TAG + " terminateSelfwithresult successful data: " + JSON.stringify(data));
                  })
                  .catch((error: BusinessError) => {
                    console.log(TAG + " terminateSelfwithresult error: " + JSON.stringify(error));
                  });
              } else {
                commonEvent.unsubscribe(subscriber, (err) => {
                  console.info(TAG + ' unsubscribe. err: ' + JSON.stringify(err));
                });
                let listTemp = JSON.stringify(AppStorage.get<string[]>("list12")!);
                console.log(TAG + " listTemp is :" + listTemp);
                console.log(TAG + " id1 is :" + id1);
                console.log(TAG + " id2 is :" + id2);
                expect(id1 + 1).assertEqual(id2);
                expect(listTemp.indexOf("MainAbility2 onWindowStageCreate") !== -1).assertTrue();
                expect(listTemp.indexOf("MainAbility2 onWindowStageActive") !== -1).assertTrue();
                expect(listTemp.indexOf("MainAbility2 onWindowStageInactive") !== -1).assertTrue();
                expect(listTemp.indexOf("MainAbility2 onWindowStageDestroy") !== -1).assertTrue();
                AppStorage.get<common.ApplicationContext>("applicationContext12")!
                  .off("abilityLifecycle", id1, (error, data) => {
                    console.log(TAG + ": unregisterAbilityLifecycleCallback success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
                  });
                AppStorage.get<common.ApplicationContext>("applicationContext12")!
                  .off("abilityLifecycle", id2, (error, data) => {
                    console.log(TAG + ": unregisterAbilityLifecycleCallback success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
                  });
                console.log("------------Singlehap_WindowStageLifeCycleTest_1200 END-------------");
                done();
              }
              isMainAbility2FirstTerminateSelf = false;
            }
          });
        })

      let str: Want = {
        "bundleName": "com.example.windowstagelifecycle_xts",
        "abilityName": "MainAbility12",
      }
      AppStorage.get<common.UIAbilityContext>("abilityContext")!.startAbility(str)
        .then((data) => {
          console.info(TAG + ' start successful. Data: ' + data);
        })
        .catch((error: BusinessError) => {
          console.error(TAG + ' start failed. Cause: ' + JSON.stringify(error));
        })
    });

    /*
    * @tc.number  Singlehap_WindowStageLifeCycleTest_1300
    * @tc.name    Register in abilityA,register in abilityB, starting and termination abilityC,
                  termination abilityB、abilityA, Re-register in abilityA、abilityB
    * @tc.desc    Function test
    * @tc.level   0
    */
    it("Singlehap_WindowStageLifeCycleTest_1300", 0, async (done: Function) => {
      await sleep(500);
      console.log("------------Singlehap_WindowStageLifeCycleTest_1300 START-------------");
      TAG = "Singlehap_WindowStageLifeCycleTest_1300";
      let id1: number;
      let id2: number;
      let id3: number;
      let id4: number;

      let isMainAbility2FirstTerminateSelf = true;

      commonEvent.createSubscriber({
        events: actsEvents
      })
        .then((data) => {
          console.info(TAG + ' createSubscriber successful. ');
          subscriber = data;
          commonEvent.subscribe(subscriber, (err, data) => {
            console.info(TAG + ' subscribeCallBack. Data: ' + JSON.stringify(data));
            if (data.event == MainAbility1onCreate) {
              if (isMainAbility2FirstTerminateSelf) {
                id1 = AppStorage.get<number>("callbackid1")!;
                console.log(TAG + " secondCallback callbackid id1 : " + JSON.stringify(AppStorage.get<number>("callbackid1")!));
              } else {
                id3 = AppStorage.get<number>("callbackid1")!;
                console.log(TAG + " secondCallback callbackid id3 : " + JSON.stringify(AppStorage.get<number>("callbackid1")!));
              }
              AppStorage.get<common.UIAbilityContext>("ability1context")!.startAbility({
                "bundleName": "com.example.windowstagelifecycle_xts",
                "abilityName": "MainAbility12",
              }, (error, data) => {
                console.log(TAG + ": MainAbility12 startAbility success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
              })
            } else if (data.event == MainAbility1onDestroy) {
              let str: Want = {
                "bundleName": "com.example.windowstagelifecycle_xts",
                "abilityName": "MainAbility1",
              }
              AppStorage.get<common.UIAbilityContext>("abilityContext")!.startAbility(str)
                .then((data) => {
                  console.info(TAG + ' start successful. Data: ' + data);
                })
                .catch((error: BusinessError) => {
                  console.error(TAG + ' start failed. Cause: ' + JSON.stringify(error));
                })
            } else if (data.event == MainAbility12onCreate) {
              if (isMainAbility2FirstTerminateSelf) {
                id2 = AppStorage.get<number>("callbackid12")!;
                console.log(TAG + " secondCallback callbackid id2 : " + JSON.stringify(AppStorage.get<number>("callbackid12")!));
              } else {
                id4 = AppStorage.get<number>("callbackid12")!;
                console.log(TAG + " secondCallback callbackid id4 : " + JSON.stringify(AppStorage.get<number>("callbackid12")!));
              }
              AppStorage.get<common.UIAbilityContext>("ability1context")!.startAbility({
                "bundleName": "com.example.windowstagelifecycle_xts",
                "abilityName": "MainAbility2",
              })
                .then((data) => {
                  console.info(TAG + ' start successful. Data: ' + data);
                })
                .catch((error: BusinessError) => {
                  console.error(TAG + ' start failed. Cause: ' + JSON.stringify(error));
                })
            } else if (data.event == MainAbility12onDestroy) {
              let para: common.AbilityResult = {
                resultCode: 2100,
                want: {
                  "abilityName": "MainAbility1",
                  "bundleName": "com.example.windowstagelifecycle_xts"
                }
              }
              console.log(TAG + " terminateSelfwithresult para: " + JSON.stringify(para));
              AppStorage.get<common.UIAbilityContext>("ability1context")!.terminateSelfWithResult(para)
                .then((data) => {
                  console.log(TAG + " terminateSelfwithresult successful data: " + JSON.stringify(data));
                })
                .catch((error: BusinessError) => {
                  console.log(TAG + " ability1 terminateSelfwithresult error: " + JSON.stringify(error));
                });
            } else if (data.event == MainAbility2onDestroy) {
              if (isMainAbility2FirstTerminateSelf) {
                let para: common.AbilityResult = {
                  resultCode: 2100,
                  want: {
                    "abilityName": "MainAbility12",
                    "bundleName": "com.example.windowstagelifecycle_xts"
                  }
                }
                AppStorage.get<common.UIAbilityContext>("ability12")!.terminateSelfWithResult(para)
                  .then((data) => {
                    console.log(TAG + " ability12 terminateSelfwithresult successful data: " + JSON.stringify(data));
                  })
                  .catch((error: BusinessError) => {
                    console.log(TAG + " ability12 terminateSelfwithresult error: " + JSON.stringify(error));
                  });
              } else {
                commonEvent.unsubscribe(subscriber, (err) => {
                  console.info(TAG + ' unsubscribe. err: ' + JSON.stringify(err));
                });
                let listTemp = JSON.stringify(AppStorage.get<string[]>("list1")!);
                let listTemp1 = JSON.stringify(AppStorage.get<string[]>("list12")!);
                console.log(TAG + " listTemp is :" + listTemp);
                console.log(TAG + " listTemp1 is :" + listTemp1);
                expect(id1 + 1).assertEqual(id2);
                expect(id3 + 1).assertEqual(id4);
                expect(listTemp.indexOf("MainAbility12 onWindowStageCreate") != -1).assertTrue();
                expect(listTemp.indexOf("MainAbility12 onWindowStageActive") != -1).assertTrue();
                expect(listTemp.indexOf("MainAbility12 onWindowStageInactive") != -1).assertTrue();
                expect(listTemp.indexOf("MainAbility12 onWindowStageActive") != -1).assertTrue();
                expect(listTemp.indexOf("MainAbility2 onWindowStageCreate") != -1).assertTrue();

                expect(listTemp.indexOf("MainAbility2 onWindowStageActive") != -1).assertTrue();
                expect(listTemp.indexOf("MainAbility2 onWindowStageInactive") != -1).assertTrue();
                expect(listTemp.indexOf("MainAbility2 onWindowStageDestroy") != -1).assertTrue();
                AppStorage.get<common.ApplicationContext>("applicationContext1")!
                  .off("abilityLifecycle", id1, (error, data) => {
                    console.log(TAG + ": unregisterAbilityLifecycleCallback success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
                  });
                AppStorage.get<common.ApplicationContext>("applicationContext1")!
                  .off("abilityLifecycle", id3, (error, data) => {
                    console.log(TAG + ": unregisterAbilityLifecycleCallback success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
                  });
                AppStorage.get<common.ApplicationContext>("applicationContext12")!
                  .off("abilityLifecycle", id2, (error, data) => {
                    console.log(TAG + ": unregisterAbilityLifecycleCallback success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
                  });
                AppStorage.get<common.ApplicationContext>("applicationContext12")!
                  .off("abilityLifecycle", id4, (error, data) => {
                    console.log(TAG + ": unregisterAbilityLifecycleCallback success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
                  });
                console.log("------------Singlehap_WindowStageLifeCycleTest_1300 END-------------");
                done();
              }
              isMainAbility2FirstTerminateSelf = false;
            }
          });
        })

      let str: Want = {
        "bundleName": "com.example.windowstagelifecycle_xts",
        "abilityName": "MainAbility1",
      }
      AppStorage.get<common.UIAbilityContext>("abilityContext")!.startAbility(str)
        .then((data) => {
          console.info(TAG + ' start ability1 successful. Data: ' + data);
        })
        .catch((error: BusinessError) => {
          console.error(TAG + ' start ability1 failed. Cause: ' + JSON.stringify(error));
        })
    });
  })
}
