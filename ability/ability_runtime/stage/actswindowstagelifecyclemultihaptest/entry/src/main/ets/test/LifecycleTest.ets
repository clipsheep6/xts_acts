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
import systemParameterEnhance from '@ohos.systemParameterEnhance';

let deviceType = '';
let TAG: string;
let intervalId: number = -1;
let subscriber: commonEventManager.CommonEventSubscriber;

function sleep(time: number) {
  return new Promise<void>((resolve) => setTimeout(resolve, time));
}

function handlerMessage(callback: Function): number {
  if (intervalId != -1) {
    clearInterval(intervalId);
  }
  intervalId = setInterval(() => {
    let event: Array<string> = AppStorage.get<string[]>("testEvent")!;
    AppStorage.setOrCreate<string[]>("testEvent", []);
    if (event && event.length > 0) {
      event.forEach(str => {
        callback(str);
      })
    }
  }, 100);
  return intervalId;
}

function handlerMessageDelayed(event: string, longTime: number): void {
  if (event == undefined || event === '') {
    return;
  }
  if (longTime == 0) {
    AppStorage.get<string[]>("testEvent")!.push(event);
    return;
  }
  setTimeout(() => {
    AppStorage.get<string[]>("testEvent")!.push(event);
  }, longTime);
}

export default function abilityTest() {
  describe('AbilityTest', () => {
    beforeAll(() => {
      deviceType = systemParameterEnhance.getSync('const.product.devicetype');
      let actsEvents = [
        'Hap2MainAbility10onForeground',
        'Hap3MainAbility3onForeground',
        'Hap3MainAbility2onDestroy',
        'Hap2MainAbility3onDestroy',
        'Hap2MainAbility4onDestroy',
        'Hap2MainAbility5onDestroy',
        'Hap2MainAbility7onDestroy',
        'Hap2MainAbility8onForeground',
        'Hap2MainAbility9onDestroy'
      ]
      commonEvent.createSubscriber({
        events: actsEvents
      }).then((data) => {
        subscriber = data;
        commonEvent.subscribe(data, (err, data) => {
          console.info(TAG + ' subscribeCallBack. Data: ' + JSON.stringify(data));
          if (data.event == 'Hap2MainAbility10onForeground') {
            AppStorage.get<string[]>("testEvent")!.push('Hap2MainAbility10onForeground');
          }
          if (data.event == 'Hap3MainAbility3onForeground') {
            AppStorage.get<string[]>("testEvent")!.push('Hap3MainAbility3onForeground');
          }
          if (data.event == 'Hap3MainAbility2onDestroy') {
            AppStorage.get<string[]>("testEvent")!.push('Hap3MainAbility2onDestroy');
          }
          if (data.event == 'Hap2MainAbility3onDestroy') {
            AppStorage.get<string[]>("testEvent")!.push('Hap2MainAbility3onDestroy');
          }
          if (data.event == 'Hap2MainAbility4onDestroy') {
            AppStorage.get<string[]>("testEvent")!.push('Hap2MainAbility4onDestroy');
          }
          if (data.event == 'Hap2MainAbility5onDestroy') {
            AppStorage.get<string[]>("testEvent")!.push('Hap2MainAbility5onDestroy');
          }
          if (data.event == 'Hap2MainAbility7onDestroy') {
            AppStorage.get<string[]>("testEvent")!.push('Hap2MainAbility7onDestroy');
          }
          if (data.event == 'Hap2MainAbility8onForeground') {
            AppStorage.get<string[]>("testEvent")!.push('Hap2MainAbility8onForeground');
          }
          if (data.event == 'Hap2MainAbility9onDestroy') {
            AppStorage.get<string[]>("testEvent")!.push('Hap2MainAbility9onDestroy');
          }
        });
      })
    })

    afterAll(() => {
      if (subscriber) {
        commonEvent.unsubscribe(subscriber);
      }
    })

    console.info("-----------------LifecycleTest is start----------------")
    beforeEach(async (done: Function) => {
      console.info('LifeCycleTest before each called');
      await sleep(1000);
      done()
    });

    afterEach(async (done: Function) => {
      await sleep(1000);
      console.info('LifeCycleTest after each called');
      if (!("Multihap_WindowStageLifecycleTest_007" == TAG ||
        "Multihap_WindowStageLifecycleTest_010" == TAG || "Multihap_WindowStageLifecycleTest_006" == TAG)) {

        handlerMessage((event: string) => {
          console.log(TAG + " eventCallback, event is :" + event);
          if (event === 'MainAbility4onDestroy') {
            clearInterval(intervalId);
            done();
          }
        });

        let para: common.AbilityResult = {
          resultCode: 2,
          want: {
            "abilityName": "MainAbility4",
            bundleName: "com.example.lifecycletest"
          }
        }
        console.log("LifeCycleTest terminateSelfwithresult para: " + JSON.stringify(para));
        await AppStorage.get<common.UIAbilityContext>("ability4context")!.terminateSelfWithResult(para)
          .then((data) => {
            console.log("LifeCycleTest terminateSelfwithresult successful data: " + JSON.stringify(data));
          })
          .catch((error: BusinessError) => {
            console.log("LifeCycleTest terminateSelfwithresult error: " + JSON.stringify(error));
          });
      } else {
        done();
      }
    });

    afterAll(() => {
      clearInterval(intervalId);
    })

    /*
     * @tc.number  Multihap_WindowStageLifecycleTest_001
     * @tc.name    The ability of HAP A listens to the ability lifecycle callback of HAP B
     * @tc.desc    Function test
     * @tc.level   0
     */
    it("Multihap_WindowStageLifecycleTest_001", 0, async (done: Function) => {
      console.info("---------------Multihap_WindowStageLifecycleTest_001 is start---------------");
      TAG = "Multihap_WindowStageLifecycleTest_001";
      let isSecondOnForegroundCount: boolean = false;

      handlerMessage((event: string) => {
        console.log(TAG + " eventCallback, event is :" + event);
        if (event === 'MainAbility4onForeground') {
          if (!isSecondOnForegroundCount) {
            isSecondOnForegroundCount = true;
            AppStorage.get<common.UIAbilityContext>("abilityContext")!.startAbility({
              bundleName: "com.example.lifecycletest",
              abilityName: "Hap2MainAbility3"
            }, (error, data) => {
              console.log(TAG + ": Hap2MainAbility3 startAbility success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
            })
          }
        } else if (event === 'Hap2MainAbility3onDestroy') {
          clearInterval(intervalId);
          let listTemp = JSON.stringify(AppStorage.get<string[]>("mainAbility4ListKey")!);
          console.log(TAG + "listTemp is :" + listTemp);
          console.log(TAG + "globalThis.mainAbility4CallBackId is :" + AppStorage.get<number>("mainAbility4CallBackId")!);
          expect(listTemp.indexOf("Hap2MainAbility3 onWindowStageCreate") != -1).assertTrue();
          expect(listTemp.indexOf("Hap2MainAbility3 onWindowStageActive") != -1).assertTrue();
          expect(listTemp.indexOf("Hap2MainAbility3 onWindowStageInactive") != -1).assertTrue();
          expect(listTemp.indexOf("Hap2MainAbility3 onWindowStageDestroy") != -1).assertTrue();
          AppStorage.get<common.ApplicationContext>("ApplicationContext4")!
            .off("abilityLifecycle", AppStorage.get<number>("mainAbility4CallBackId")!, (error, data) => {
              console.log(TAG + ": unregisterAbilityLifecycleCallback success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
              expect(error).assertNull();
            });
          done();
        }
      });
      AppStorage.get<common.UIAbilityContext>("abilityContext")!.startAbility({
        bundleName: "com.example.lifecycletest",
        abilityName: "MainAbility4"
      }, (error, data) => {
        console.log(TAG + ": MainAbility4 startAbility success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
      });
      console.info("---------------Multihap_WindowStageLifecycleTest_001 is end---------------");
    });

    /*
     * @tc.number  Multihap_WindowStageLifecycleTest_002
     * @tc.name    The ability of HAP A listens to the ability lifecycle callback of HAP B (single instance)
     * @tc.desc    Function test
     * @tc.level   0
     */
    it("Multihap_WindowStageLifecycleTest_002", 0, async (done: Function) => {
      console.log("------------Multihap_WindowStageLifecycleTest_002 start-------------");
      TAG = "Multihap_WindowStageLifecycleTest_002";
      let isSecondOnForegroundCount: boolean = false;

      handlerMessage((event: string) => {
        console.log(TAG + " eventCallback, event is :" + event);
        if (event === 'MainAbility4onForeground') {
          if (!isSecondOnForegroundCount) {
            isSecondOnForegroundCount = true;
            handlerMessageDelayed('StartHap2MainAbility4', 0);
            handlerMessageDelayed('StartHap2MainAbility4', 1000);
          }
        } else if (event === 'StartHap2MainAbility4') {
          AppStorage.get<common.UIAbilityContext>("abilityContext")!.startAbility({
            bundleName: "com.example.lifecycletest",
            abilityName: "Hap2MainAbility4"
          }, (error, data) => {
            console.log(TAG + ":first Hap2MainAbility4 startAbility success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
          });
        } else if (event === 'Hap2MainAbility4onDestroy') {
          clearInterval(intervalId);
          let listTemp = JSON.stringify(AppStorage.get<string[]>("mainAbility4ListKey")!);
          console.log(TAG + "listTemp is :" + listTemp);
          console.log(TAG + "globalThis.mainAbility4CallBackId is :" + AppStorage.get<number>("mainAbility4CallBackId")!);
          expect(listTemp.indexOf("Hap2MainAbility4 onWindowStageCreate") != -1).assertTrue();
          expect(listTemp.indexOf("Hap2MainAbility4 onWindowStageActive") != -1).assertTrue();
          expect(listTemp.indexOf("Hap2MainAbility4 onWindowStageInactive") != -1).assertTrue();
          expect(listTemp.indexOf("Hap2MainAbility4 onWindowStageDestroy") != -1).assertTrue();
          AppStorage.get<common.ApplicationContext>("ApplicationContext4")!
            .off("abilityLifecycle", AppStorage.get<number>("mainAbility4CallBackId")!, (error, data) => {
              console.log(TAG + ": unregisterAbilityLifecycleCallback success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
              expect(error).assertNull();
            });
          done();
        }
      })

      AppStorage.get<common.UIAbilityContext>("abilityContext")!.startAbility({
        bundleName: "com.example.lifecycletest",
        abilityName: "MainAbility4"
      }, (error, data) => {
        console.log(TAG + ": MainAbility4 startAbility success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
      });
      console.log("------------Multihap_WindowStageLifecycleTest_002 end-------------");
    });

    /*
     * @tc.number  Multihap_WindowStageLifecycleTest_003
     * @tc.name    The ability of HAP A listens to the ability lifecycle callback of HAP B (multiple cases)
     * @tc.desc    Function test
     * @tc.level   0
     */
    it("Multihap_WindowStageLifecycleTest_003", 0, async (done: Function) => {
      console.log("------------Multihap_WindowStageLifecycleTest_003 start-------------");
      TAG = "Multihap_WindowStageLifecycleTest_003";

      let isSecondOnForegroundCount: boolean = false;
      let hap2MainAbility5Count = 0;

      handlerMessage((event: string) => {
        console.log(TAG + " eventCallback, event is :" + event);
        if (event === 'MainAbility4onForeground') {
          if (!isSecondOnForegroundCount) {
            isSecondOnForegroundCount = true;
            handlerMessageDelayed('StartHap2MainAbility5', 0);
            handlerMessageDelayed('StartHap2MainAbility5', 1000);
          }
        } else if (event === 'StartHap2MainAbility5') {
          AppStorage.get<common.UIAbilityContext>("abilityContext")!.startAbility({
            bundleName: "com.example.lifecycletest",
            abilityName: "Hap2MainAbility5"
          }, (error, data) => {
            console.log(TAG + ":first Hap2MainAbility5 startAbility success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
          });
        } else if (event === 'Hap2MainAbility5onDestroy') {
          let listTemp = JSON.stringify(AppStorage.get<string[]>("mainAbility4ListKey")!);
          hap2MainAbility5Count++;
          if (hap2MainAbility5Count === 1) {
            return;
          }
          console.log(TAG + "listTemp is :" + listTemp);
          console.log(TAG + "globalThis.mainAbility4CallBackId is :" + AppStorage.get<number>("mainAbility4CallBackId")!);
          expect(listTemp.split("Hap2MainAbility5 onWindowStageCreate").length - 1).assertEqual(2);
          expect(listTemp.split("Hap2MainAbility5 onWindowStageActive").length - 1).assertEqual(2);
          expect(listTemp.split("Hap2MainAbility5 onWindowStageInactive").length - 1).assertEqual(2);
          expect(listTemp.split("Hap2MainAbility5 onWindowStageDestroy").length - 1).assertEqual(2);
          AppStorage.get<common.ApplicationContext>("ApplicationContext4")!
            .off("abilityLifecycle", AppStorage.get<number>("mainAbility4CallBackId")!, (error, data) => {
              console.log(TAG + ": unregisterAbilityLifecycleCallback success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
              expect(error).assertNull();
            });
          clearInterval(intervalId);
          done();
        }
      })

      AppStorage.get<common.UIAbilityContext>("abilityContext")!.startAbility({
        bundleName: "com.example.lifecycletest",
        abilityName: "MainAbility4"
      }, (error, data) => {
        console.log(TAG + ": MainAbility4 startAbility success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
      });
      console.log("------------Multihap_WindowStageLifecycleTest_003 end-------------");
    });

    /*
     * @tc.number  Multihap_WindowStageLifecycleTest_004
     * @tc.name    The ability of HAP A monitors the ability life cycle callback of HAP B and HAP C
     * @tc.desc    Function test
     * @tc.level   0
     */
    it("Multihap_WindowStageLifecycleTest_004", 0, async (done: Function) => {
      console.log("------------Multihap_WindowStageLifecycleTest_004 start-------------");
      TAG = "Multihap_WindowStageLifecycleTest_004";
      let isStartedHap2MainAbility6: boolean = false;
      let isStartedHap3MainAbility2: boolean = false;

      handlerMessage((event: string) => {
        console.log(TAG + " eventCallback, event is :" + event);
        if (event === 'MainAbility4onForeground') {
          if (!isStartedHap2MainAbility6) {
            isStartedHap2MainAbility6 = true;
            AppStorage.get<common.UIAbilityContext>("abilityContext")!.startAbility({
              bundleName: "com.example.lifecycletest",
              abilityName: "Hap2MainAbility6"
            }, (error, data) => {
              console.log(TAG + ":first Hap2MainAbility6 startAbility success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
            });
          } else if (!isStartedHap3MainAbility2) {
            isStartedHap3MainAbility2 = true;
            AppStorage.get<common.UIAbilityContext>("abilityContext")!.startAbility({
              bundleName: "com.example.lifecycletest",
              abilityName: "Hap3MainAbility2"
            }, (error, data) => {
              console.log(TAG + ": second Hap3MainAbility2 startAbility success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
            })
          }
        } else if (event === 'Hap3MainAbility2onDestroy') {
          clearInterval(intervalId);
          let listTemp = JSON.stringify(AppStorage.get<string[]>("mainAbility4ListKey")!);
          console.log(TAG + "listTemp is :" + listTemp);
          console.log(TAG + "globalThis.mainAbility4CallBackId is :" + AppStorage.get<number>("mainAbility4CallBackId")!);
          expect(listTemp.indexOf("Hap2MainAbility6 onWindowStageCreate") !== -1).assertTrue();
          expect(listTemp.indexOf("Hap2MainAbility6 onWindowStageActive") !== -1).assertTrue();
          expect(listTemp.indexOf("Hap2MainAbility6 onWindowStageInactive") !== -1).assertTrue();
          expect(listTemp.indexOf("Hap2MainAbility6 onWindowStageDestroy") !== -1).assertTrue();
          expect(listTemp.indexOf("Hap3MainAbility2 onWindowStageCreate") !== -1).assertTrue();
          expect(listTemp.indexOf("Hap3MainAbility2 onWindowStageActive") !== -1).assertTrue();
          expect(listTemp.indexOf("Hap3MainAbility2 onWindowStageInactive") !== -1).assertTrue();
          expect(listTemp.indexOf("Hap3MainAbility2 onWindowStageDestroy") !== -1).assertTrue();
          AppStorage.get<common.ApplicationContext>("ApplicationContext4")!
            .off("abilityLifecycle", AppStorage.get<number>("mainAbility4CallBackId")!, (error, data) => {
              console.log(TAG + ": unregisterAbilityLifecycleCallback success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
              expect(error).assertNull();
            });
          done();
        }
      });

      AppStorage.get<common.UIAbilityContext>("abilityContext")!.startAbility({
        bundleName: "com.example.lifecycletest",
        abilityName: "MainAbility4"
      }, (error, data) => {
        console.log(TAG + ": MainAbility4 startAbility success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
      });
      console.log("------------Multihap_WindowStageLifecycleTest_004 end-------------");
    });

    /*
     * @tc.number  Multihap_WindowStageLifecycleTest_005
     * @tc.name    The ability of HAP A listens to two ability life cycle callbacks in HAP B
     * @tc.desc    Function test
     * @tc.level   0
     */
    it("Multihap_WindowStageLifecycleTest_005", 0, async (done: Function) => {
      console.log("------------Multihap_WindowStageLifecycleTest_005 start-------------");
      TAG = "Multihap_WindowStageLifecycleTest_005";
      let isStartedHap2MainAbility6: boolean = false;
      let isStartedHap2MainAbility7: boolean = false;

      handlerMessage((event: string) => {
        console.log(TAG + " eventCallback, event is :" + event);
        if (event === 'MainAbility4onForeground') {
          if (!isStartedHap2MainAbility6) {
            isStartedHap2MainAbility6 = true;
            AppStorage.get<common.UIAbilityContext>("abilityContext")!.startAbility({
              bundleName: "com.example.lifecycletest",
              abilityName: "Hap2MainAbility6"
            }, (error, data) => {
              console.log(TAG + ":first Hap2MainAbility6 startAbility success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
            });
          } else if (!isStartedHap2MainAbility7) {
            isStartedHap2MainAbility7 = true;
            AppStorage.get<common.UIAbilityContext>("abilityContext")!.startAbility({
              bundleName: "com.example.lifecycletest",
              abilityName: "Hap2MainAbility7"
            }, (error, data) => {
              console.log(TAG + ": second Hap2MainAbility7 startAbility success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
            })
          }
        } else if (event === 'Hap2MainAbility7onDestroy') {
          let listTemp = JSON.stringify(AppStorage.get<string[]>("mainAbility4ListKey")!);
          console.log(TAG + "listTemp is :" + listTemp);
          console.log(TAG + "globalThis.mainAbility4CallBackId is :" + AppStorage.get<number>("mainAbility4CallBackId")!);
          expect(listTemp.indexOf("Hap2MainAbility6 onWindowStageCreate") !== -1).assertTrue();
          expect(listTemp.indexOf("Hap2MainAbility6 onWindowStageActive") !== -1).assertTrue();
          expect(listTemp.indexOf("Hap2MainAbility6 onWindowStageInactive") !== -1).assertTrue();
          expect(listTemp.indexOf("Hap2MainAbility6 onWindowStageDestroy") !== -1).assertTrue();
          expect(listTemp.indexOf("Hap2MainAbility7 onWindowStageCreate") !== -1).assertTrue();
          expect(listTemp.indexOf("Hap2MainAbility7 onWindowStageActive") !== -1).assertTrue();
          expect(listTemp.indexOf("Hap2MainAbility7 onWindowStageInactive") !== -1).assertTrue();
          expect(listTemp.indexOf("Hap2MainAbility7 onWindowStageDestroy") !== -1).assertTrue();
          AppStorage.get<common.ApplicationContext>("ApplicationContext4")!
            .off("abilityLifecycle", AppStorage.get<number>("mainAbility4CallBackId")!, (error, data) => {
              console.log(TAG + ": unregisterAbilityLifecycleCallback success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
              expect(error).assertNull();
            });
          clearInterval(intervalId);
          done();
        }
      })
      AppStorage.get<common.UIAbilityContext>("abilityContext")!.startAbility({
        bundleName: "com.example.lifecycletest",
        abilityName: "MainAbility4"
      }, (error, data) => {
        console.log(TAG + ": MainAbility4 startAbility success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
      });
      console.log("------------end Multihap_WindowStageLifecycleTest_005-------------");
    });

    /*
     * @tc.number  Multihap_WindowStageLifecycleTest_006
     * @tc.name    Repeat the registration. The ability of HAP A listens to the life
                    cycle callback of the ability of HAP B
     * @tc.desc    Function test
     * @tc.level   0
     */
    it("Multihap_WindowStageLifecycleTest_006", 0, async (done: Function) => {
      console.log("------------Multihap_WindowStageLifecycleTest_006 start-------------");
      TAG = "Multihap_WindowStageLifecycleTest_006";
      if (deviceType != '2in1') {
        let isOneStartedHap2MainAbility8: boolean = false;
        let ids: Array<number> = []

        handlerMessage((event: string) => {
          console.log(TAG + " eventCallback, event is :" + event);
          if (event === 'MainAbility7onForeground') {
            console.log(TAG + "MainAbility7 is onForeground, callBackId is :" + AppStorage.get<number>("mainAbility7CallBackId")!);
            ids.push(AppStorage.get<number>("mainAbility7CallBackId")!);
            if (isOneStartedHap2MainAbility8) {
              console.log(TAG + " ids is :" + JSON.stringify(ids));
              clearInterval(intervalId);
              if (ids.length < 2) {
                expect().assertFail()
              } else {
                expect(ids[1]).assertEqual(ids[0] + 1);
              }
              ids.forEach(id => {
                AppStorage.get<common.ApplicationContext>("ApplicationContext7")!.off("abilityLifecycle", id);
              })
              AppStorage.get<common.UIAbilityContext>("ability7context")!.terminateSelf();
              commonEvent.publish('Hap2MainAbility8doTerminateSelf', (err) => {
                console.log('Hap2MainAbility8doTerminateSelf');
              })
              done();
            } else {
              isOneStartedHap2MainAbility8 = true;
              AppStorage.get<common.UIAbilityContext>("abilityContext")!.startAbility({
                bundleName: "com.example.lifecycletest",
                abilityName: "Hap2MainAbility8"
              }, (error, data) => {
                console.log(TAG + ": first Hap2MainAbility8 startAbility success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
              });
            }
          } else if (event === 'Hap2MainAbility8onForeground') {
            AppStorage.get<common.UIAbilityContext>("abilityContext")!.startAbility({
              bundleName: "com.example.lifecycletest",
              abilityName: "MainAbility7"
            }, (error, data) => {
              console.log(TAG + ": second MainAbility7 startAbility success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
            });
          }
        });

        AppStorage.get<common.UIAbilityContext>("abilityContext")!.startAbility({
          bundleName: "com.example.lifecycletest",
          abilityName: "MainAbility7"
        }, (error, data) => {
          console.log(TAG + ": first MainAbility7 startAbility success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
        });
      } else if (deviceType == '2in1') {
        done();
      }

      console.log("------------Multihap_WindowStageLifecycleTest_006 end-------------");
    });

    /*
     * @tc.number  Multihap_WindowStageLifecycleTest_007
     * @tc.name    Repeat registration and deregistration. The ability of HAP A listens to the life
                    cycle callback of the ability of HAP B
     * @tc.desc    Function test
     * @tc.level   0
     */
    it("Multihap_WindowStageLifecycleTest_007", 0, async (done: Function) => {
      console.log("------------Multihap_WindowStageLifecycleTest_007 start-------------");
      TAG = "Multihap_WindowStageLifecycleTest_007";
      let isMainAbility6SecondOnForeground: boolean = false;
      let callBackId1 = -1;
      let callBackId2 = -1;

      handlerMessage((event: string) => {
        console.log(TAG + " eventCallback, event is :" + event);
        if (event === 'StartMainAbility6') {
          isMainAbility6SecondOnForeground = false;
          AppStorage.get<common.UIAbilityContext>("abilityContext")!.startAbility({
            bundleName: "com.example.lifecycletest",
            abilityName: "MainAbility6"
          }, (error, data) => {
            console.log(TAG + ": MainAbility6 startAbility success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
          });
        } else if (event === 'MainAbility6onForeground') {
          if (!isMainAbility6SecondOnForeground) {
            AppStorage.get<common.UIAbilityContext>("abilityContext6")!.startAbility({
              bundleName: "com.example.lifecycletest",
              abilityName: "Hap2MainAbility9"
            }, (error, data) => {
              console.log(TAG + ": Hap2MainAbility9 startAbility success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
            });
          }
          isMainAbility6SecondOnForeground = true;
        } else if (event === 'MainAbility6onDestroy') {
          if (callBackId2 == -1) {
            handlerMessageDelayed('StartMainAbility6', 0);
          }
        } else if (event === 'Hap2MainAbility9onDestroy') {
          if (callBackId1 == -1) {
            let listTemp = JSON.stringify(AppStorage.get<string[]>("mainAbility6ListKey")!);
            console.log(TAG + "listTemp is :" + listTemp);
            console.log(TAG + "first globalThis.mainAbility6CallBackId is :" + AppStorage.get<number>("mainAbility6CallBackId")!);
            callBackId1 = AppStorage.get<number>("mainAbility6CallBackId")!;
            console.log(TAG + "callBackId1 is :" + callBackId1);
            expect(listTemp.indexOf("Hap2MainAbility9 onWindowStageCreate") !== -1).assertTrue();
            expect(listTemp.indexOf("Hap2MainAbility9 onWindowStageActive") !== -1).assertTrue();
            expect(listTemp.indexOf("Hap2MainAbility9 onWindowStageInactive") !== -1).assertTrue();
            expect(listTemp.indexOf("Hap2MainAbility9 onWindowStageDestroy") !== -1).assertTrue();
            AppStorage.get<common.ApplicationContext>("ApplicationContext6")!
              .off("abilityLifecycle", callBackId1, (error, data) => {
                console.log(TAG + ": first unregisterAbilityLifecycleCallback success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
                expect(error).assertNull();
                if (error == null) {
                  AppStorage.get<common.UIAbilityContext>("abilityContext6")!.terminateSelf();
                } else {
                  clearInterval(intervalId);
                  done();
                }
              });
          } else {
            clearInterval(intervalId);
            let listTemp1 = JSON.stringify(AppStorage.get<string[]>("mainAbility6ListKey")!);
            console.log(TAG + "listTemp1 is :" + listTemp1);
            console.log(TAG + "second globalThis.mainAbility6CallBackId is :" + AppStorage.get<number>("mainAbility6CallBackId")!);
            callBackId2 = AppStorage.get<number>("mainAbility6CallBackId")!
            console.log(TAG + "callBackId2 is :" + callBackId2);
            expect(callBackId2).assertEqual(callBackId1 + 1);
            expect(listTemp1.indexOf("Hap2MainAbility9 onWindowStageCreate") !== -1).assertTrue();
            expect(listTemp1.indexOf("Hap2MainAbility9 onWindowStageActive") !== -1).assertTrue();
            expect(listTemp1.indexOf("Hap2MainAbility9 onWindowStageInactive") !== -1).assertTrue();
            expect(listTemp1.indexOf("Hap2MainAbility9 onWindowStageDestroy") !== -1).assertTrue();
            AppStorage.get<common.ApplicationContext>("ApplicationContext6")!
              .off("abilityLifecycle", callBackId2, (error, data) => {
                console.log(TAG + ": second unregisterAbilityLifecycleCallback success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
                expect(error).assertNull();
                AppStorage.get<common.UIAbilityContext>("abilityContext6")!.terminateSelf();
                done();
              });
          }
        }
      });
      handlerMessageDelayed('StartMainAbility6', 1000);
      console.log("------------Multihap_WindowStageLifecycleTest_007 end-------------");
    });

    /*
     * @tc.number  Multihap_WindowStageLifecycleTest_008
     * @tc.name    Repeat deregistration. The ability of HAP A listens to the life
                    cycle callback of the ability of HAP B
     * @tc.desc    Function test
     * @tc.level   0
     */
    it("Multihap_WindowStageLifecycleTest_008", 0, async (done: Function) => {
      console.log("------------Multihap_WindowStageLifecycleTest_008 start-------------");
      TAG = "Multihap_WindowStageLifecycleTest_008";
      let isSecondMainAbility4onForeground = false;

      handlerMessage((event: string) => {
        console.log(TAG + " eventCallback, event is :" + event);
        if (event === 'MainAbility4onForeground') {
          if (isSecondMainAbility4onForeground) {
            clearInterval(intervalId);
            let listTemp = JSON.stringify(AppStorage.get<string[]>("mainAbility4ListKey")!);
            console.log(TAG + "listTemp is :" + listTemp);
            console.log(TAG + "globalThis.mainAbility4CallBackId is :" + AppStorage.get<number>("mainAbility4CallBackId")!);
            AppStorage.get<common.ApplicationContext>("ApplicationContext4")!
              .off("abilityLifecycle", AppStorage.get<number>("mainAbility4CallBackId")!, (error, data) => {
                console.log(TAG + ": first unregisterAbilityLifecycleCallback, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
                expect(error).assertNull();
                AppStorage.get<common.ApplicationContext>("ApplicationContext4")!
                  .off("abilityLifecycle", AppStorage.get<number>("mainAbility4CallBackId")!, (error, data) => {
                    console.log(TAG + ": second unregisterAbilityLifecycleCallback, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
                    expect(error.code).assertEqual(401);
                    done();
                  });
              });
          } else {
            AppStorage.get<common.UIAbilityContext>("abilityContext")!.startAbility({
              bundleName: "com.example.lifecycletest",
              abilityName: "Hap2MainAbility6"
            }, (error, data) => {
              console.log(TAG + ": Hap2MainAbility6 startAbility success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
            })
          }
          isSecondMainAbility4onForeground = true;
        }
      });

      AppStorage.get<common.UIAbilityContext>("abilityContext")!.startAbility({
        bundleName: "com.example.lifecycletest",
        abilityName: "MainAbility4"
      }, (error, data) => {
        console.log(TAG + ": MainAbility4 startAbility success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
      });
      console.log("------------Multihap_WindowStageLifecycleTest_008 end-------------");
    });

    /*
     * @tc.number  Multihap_WindowStageLifecycleTest_009
     * @tc.name    Switch the front and background for many times to monitor the life cycle
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('Multihap_WindowStageLifecycleTest_009', 0, async (done: Function) => {
      console.info("---------------Multihap_WindowStageLifecycleTest_009 is start---------------")
      TAG = "Multihap_WindowStageLifecycleTest_009";
      if (deviceType != '2in1') {
        let hap3MainAbility3onForegroundCount: number = 0;
        let isFirstMainAbility4onForeground = true;

        handlerMessage((event: string) => {
          console.log(TAG + " eventCallback, event is :" + event);
          if (event === 'MainAbility4onForeground' && isFirstMainAbility4onForeground) {
            isFirstMainAbility4onForeground = false;
            AppStorage.get<common.UIAbilityContext>("abilityContext")!.startAbility({
              bundleName: "com.example.lifecycletest",
              abilityName: "Hap2MainAbility10",
            }, (error, data) => {
              console.log(TAG + ": first Hap2MainAbility10 startAbility success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
            })
          } else if (event === 'Hap2MainAbility10onForeground') {
            AppStorage.get<common.UIAbilityContext>("abilityContext")!.startAbility({
              bundleName: "com.example.lifecycletest",
              abilityName: "Hap3MainAbility3",
            }, (error, data) => {
              console.log(TAG + ": second Hap3MainAbility3 startAbility success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
            })
          } else if (event === 'Hap3MainAbility3onForeground') {
            hap3MainAbility3onForegroundCount++;
            if (hap3MainAbility3onForegroundCount == 3) {
              clearInterval(intervalId);
              let listTemp = JSON.stringify(AppStorage.get<string[]>("mainAbility4ListKey")!);
              console.log(TAG + " listTemp is :" + listTemp);
              console.log(TAG + " globalThis.mainAbility4CallBackId is :" + AppStorage.get<number>("mainAbility4CallBackId")!);

              expect(listTemp.indexOf("Hap2MainAbility10 onWindowStageCreate") !== -1).assertTrue();
              expect(listTemp.split("Hap2MainAbility10 onWindowStageActive").length - 1).assertEqual(3);
              expect(listTemp.split("Hap2MainAbility10 onWindowStageInactive").length - 1).assertEqual(3);
              expect(listTemp.indexOf("Hap3MainAbility3 onWindowStageCreate") != -1).assertTrue();
              expect(listTemp.split("Hap3MainAbility3 onWindowStageActive").length - 1).assertEqual(3);
              expect(listTemp.split("Hap3MainAbility3 onWindowStageInactive").length - 1).assertEqual(2);
              AppStorage.get<common.ApplicationContext>("ApplicationContext4")!
                .off("abilityLifecycle", AppStorage.get<number>("mainAbility4CallBackId")!, (error, data) => {
                  console.log(TAG + ": unregisterAbilityLifecycleCallback success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
                  expect(error).assertNull();
                  AppStorage.get<common.UIAbilityContext>("abilityContext")!.startAbility({
                    bundleName: "com.example.lifecycletest",
                    abilityName: "com.example.lifecycletest.MainAbility",
                  }, (error, data) => {
                    console.log(TAG + ": first Hap2MainAbility10 startAbility success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
                  })
                  done();
                });
            } else {
              AppStorage.get<common.UIAbilityContext>("abilityContext")!.startAbility({
                bundleName: "com.example.lifecycletest",
                abilityName: "Hap2MainAbility10",
              }, (error, data) => {
                console.log(TAG + ": first Hap2MainAbility10 startAbility success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
              })
            }
          }
        });
      } else if (deviceType == '2in1') {
        done();
      }


      AppStorage.get<common.UIAbilityContext>("abilityContext")!.startAbility({
        bundleName: "com.example.lifecycletest",
        abilityName: "MainAbility4",
      }, (error, data) => {
        console.log(TAG + ": MainAbility4 startAbility success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
      })
      console.info("---------------Multihap_WindowStageLifecycleTest_009 is end---------------")
    })

    /*
     * @tc.number  Multihap_WindowStageLifecycleTest_010
     * @tc.name    The ability of HAP A listens to the life cycle callback
                    of the ability of HAP B in different processes
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('Multihap_WindowStageLifecycleTest_010', 0, async (done: Function) => {
      console.info("---------------Multihap_WindowStageLifecycleTest_010 is start---------------");
      TAG = "Multihap_WindowStageLifecycleTest_010";
      let listKeyTemp: string[] = [];

      handlerMessage((event: string) => {
        console.log(TAG + " eventCallback, event is :" + event);
        if (event === 'MainAbility2onForeground') {
          AppStorage.get<common.UIAbilityContext>("abilityContext")!.startAbility({
            bundleName: "com.example.lifecycletest",
            abilityName: "Hap4MainAbility1",
          }, (error, data) => {
            console.log(TAG + ": Hap4MainAbility1 startAbility result, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
            handlerMessageDelayed('doAssert', 1000);
          });
        } else if (event === 'doAssert') {
          clearInterval(intervalId);
          for (let i = 0; i < AppStorage.get<string[]>("mainAbility2ListKey")!.length; i++) {
            if (AppStorage.get<string[]>("mainAbility2ListKey")![i].substring(0, 16) == "Hap4MainAbility1") {
              listKeyTemp.push(AppStorage.get<string[]>("mainAbility2ListKey")![i]);
            }
          }
          console.log(TAG + " listKeyTemp is :" + listKeyTemp);
          console.log(TAG + " AppStorage.get<number>('mainAbility2CallBackId')! is :" + AppStorage.get<number>("mainAbility2CallBackId")!);
          expect(listKeyTemp.length).assertEqual(0);

          AppStorage.get<common.ApplicationContext>("ApplicationContext2")!
            .off("abilityLifecycle", AppStorage.get<number>("mainAbility2CallBackId")!, (error, data) => {
              console.log(TAG + ": unregisterAbilityLifecycleCallback success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
              expect(error).assertNull();
              done();
            });
        }
      });

      AppStorage.get<common.UIAbilityContext>("abilityContext")!.startAbility({
        bundleName: "com.example.lifecycletest",
        abilityName: "MainAbility2",
      }, (error, data) => {
        console.log(TAG + ": Hap1MainAbility2 startAbility success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
      })
      console.info("---------------Multihap_WindowStageLifecycleTest_010 is end---------------")
    })
  })
}
