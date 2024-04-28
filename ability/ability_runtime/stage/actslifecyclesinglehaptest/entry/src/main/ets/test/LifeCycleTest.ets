// @ts-nocheck
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
import common from '@ohos.app.ability.common';
import { BusinessError } from '@ohos.base';
import Want from '@ohos.app.ability.Want';
import AbilityLifecycleCallback from '@ohos.app.ability.AbilityLifecycleCallback';


function sleep(time: number) {
  return new Promise<void>((resolve) => setTimeout(resolve, time));
}

export default function lifecycleTest() {
  describe('LifeCycleTest', () => {

    beforeEach(async (done: Function) => {
      console.info('LifeCycleTest before each called');
      await sleep(1000);
      done()
    });

    afterEach(async (done: Function) => {
      console.info('LifeCycleTest after each called');
      if ("Singlehap_LifeCycleTest_0200" === TAG || "Singlehap_LifeCycleTest_0300" === TAG
        || "Singlehap_LifeCycleTest_0500" === TAG || "Singlehap_LifeCycleTest_0600" === TAG
        || "Singlehap_LifeCycleTest_0800" === TAG || "Singlehap_LifeCycleTest_0900" === TAG) {
        let para: common.AbilityResult = {
          resultCode: 2,
          want: {
            "abilityName": "MainAbility1",
            "bundleName": "com.example.lifecycle_xts"
          }
        }
        console.log("LifeCycleTest terminateSelfwithresult para: " + JSON.stringify(para));
        await AppStorage.get<common.UIAbilityContext>("ability1context")!.terminateSelfWithResult(para)
          .then((data) => {
            console.log("LifeCycleTest terminateSelfwithresult successful data: " + JSON.stringify(data));
          })
          .catch((error: BusinessError) => {
            console.log("LifeCycleTest terminateSelfwithresult error: " + JSON.stringify(error));
          });
      } else if ("Singlehap_LifeCycleTest_2000" === TAG) {
        let para1: common.AbilityResult = {
          resultCode: 2,
          want: {
            "abilityName": "MainAbility12",
            "bundleName": "com.example.lifecycle_xts"
          }
        }
        console.log("LifeCycleTest terminateSelfwithresult para: " + JSON.stringify(para1));
        await AppStorage.get<common.UIAbilityContext>("ability12")!.terminateSelfWithResult(para1)
          .then((data) => {
            console.log("LifeCycleTest terminateSelfwithresult successful data: " + JSON.stringify(data));
          })
          .catch((error: BusinessError) => {
            console.log("LifeCycleTest terminateSelfwithresult error: " + JSON.stringify(error));
          });
      }
      done();
    });

    let TAG = "";
    let tempCallbackId: number;

    /*
     * @tc.number  Singlehap_LifeCycleTest_0100
     * @tc.name    Register in abilitystage,listen to the lifecycle of abilityA,deregister after listening
     * @tc.desc    Function test
     * @tc.level   0
     */
    it("Singlehap_LifeCycleTest_0100", 0, async (done: Function) => {
      console.log("------------Singlehap_LifeCycleTest_0100 START-------------");
      TAG = "Singlehap_LifeCycleTest_0100";
      let code: number = -1;
      let str: Want = {
        "bundleName": "com.example.lifecycle_xts",
        "abilityName": "MainAbility2",
      }
      AppStorage.get<common.UIAbilityContext>("abilityContext")!.startAbility(str)
        .then((data) => {
          console.info(TAG + ' start successful. Data: ' + data);
        })
        .catch((error: BusinessError) => {
          console.error(TAG + ' start failed. Cause: ' + JSON.stringify(error));
        })
      setTimeout(() => {
        console.log(TAG + " registerAbilityLifecycleCallback listKey : " + JSON.stringify(AppStorage.get<string[]>("list")!));
        console.log(TAG + " registerAbilityLifecycleCallback callbackid : " + JSON.stringify(AppStorage.get<number>("callbackid")!));
        tempCallbackId = AppStorage.get<number>("callbackid")!;
        console.log(TAG + " registerAbilityLifecycleCallback tempCallbackId : " + JSON.stringify(tempCallbackId));
        let strtemp = "";
        let settemp: Set<string> = new Set();
        for (let i = 0; i < AppStorage.get<string[]>("list")!.length; i++) {
          strtemp = AppStorage.get<string[]>("list")![i].substring(0, 12);
          if (strtemp === "MainAbility2") {
            settemp.add(AppStorage.get<string[]>("list")![i]);
            console.log(TAG + " entry is :" + JSON.stringify(AppStorage.get<string[]>("list")![i]));
          }
        }
        AppStorage.get<common.ApplicationContext>("applicationContext")!
          .off("abilityLifecycle", tempCallbackId, (error, data) => {
            console.log(TAG + ": unregisterAbilityLifecycleCallback success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
            if (error == null) {
              code = 0;
            }
          });
        setTimeout(() => {
          expect(settemp.has("MainAbility2 onAbilityCreate")).assertTrue();
          expect(settemp.has("MainAbility2 onWindowStageCreate")).assertTrue();
          expect(settemp.has("MainAbility2 onAbilityForeground")).assertTrue();
          expect(settemp.has("MainAbility2 onAbilityBackground")).assertTrue();
          expect(settemp.has("MainAbility2 onWindowStageDestroy")).assertTrue();
          expect(settemp.has("MainAbility2 onAbilityDestroy")).assertTrue();
          expect(code).assertEqual(0);
          console.log("------------Singlehap_LifeCycleTest_0100 END-------------");
          done();
        }, 1000);
      }, 3000);
    })

    /*
     * @tc.number  Singlehap_LifeCycleTest_0200
     * @tc.name    Register in abilityA,listen to the lifecycle of abilityB,deregister after listening
     * @tc.desc    Function test
     * @tc.level   0
     */
    it("Singlehap_LifeCycleTest_0200", 0, async (done: Function) => {
      console.log("------------Singlehap_LifeCycleTest_0200 START-------------");
      TAG = "Singlehap_LifeCycleTest_0200";
      let code: number = -1;
      let str: Want = {
        "bundleName": "com.example.lifecycle_xts",
        "abilityName": "MainAbility1",
      }
      AppStorage.get<common.UIAbilityContext>("abilityContext")!.startAbility(str)
        .then((data) => {
          console.info(TAG + ' start successful. Data: ' + data);
        })
        .catch((error: BusinessError) => {
          console.error(TAG + ' start failed. Cause: ' + JSON.stringify(error));
        })
      setTimeout(() => {
        let str1: Want = {
          "bundleName": "com.example.lifecycle_xts",
          "abilityName": "MainAbility2",
        }
        AppStorage.get<common.UIAbilityContext>("abilityContext")!.startAbility(str1)
          .then((data) => {
            console.info(TAG + ' start successful. Data: ' + data);
          })
          .catch((error: BusinessError) => {
            console.error(TAG + ' start failed. Cause: ' + JSON.stringify(error));
          })
      }, 700);
      setTimeout(() => {
        console.log(TAG + " registerAbilityLifecycleCallback listKey : " + JSON.stringify(AppStorage.get<string[]>("list1")!));
        console.log(TAG + " registerAbilityLifecycleCallback callbackid : " + JSON.stringify(AppStorage.get<number>("callbackid1")!));
        let strtemp = "";
        let maptemp: Map<string, number> = new Map();
        let settemp: Set<string> = new Set();
        for (let i = 0; i < AppStorage.get<string[]>("list1")!.length; i++) {
          strtemp = AppStorage.get<string[]>("list1")![i].substring(0, 12);
          if (strtemp === "MainAbility1") {
            if (maptemp.has(AppStorage.get<string[]>("list1")![i])) {
              let value = maptemp.get(AppStorage.get<string[]>("list1")![i]);
              maptemp.set(AppStorage.get<string[]>("list1")![i], value + 1);
            } else {
              maptemp.set(AppStorage.get<string[]>("list1")![i], 1);
            }
            console.log(TAG + " maptemp entry is :" + JSON.stringify(AppStorage.get<string[]>("list1")![i]));
          } else if (strtemp === "MainAbility2") {
            settemp.add(AppStorage.get<string[]>("list1")![i]);
            console.log(TAG + " settemp entry is :" + JSON.stringify(AppStorage.get<string[]>("list1")![i]));
          }
        }
        AppStorage.get<common.ApplicationContext>("applicationContext1")!
          .off("abilityLifecycle", AppStorage.get<number>("callbackid1")!, (error, data) => {
            console.log(TAG + ": unregisterAbilityLifecycleCallback success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
            if (error == null) {
              code = 0;
            }
          })
        setTimeout(() => {
          expect(maptemp.has("MainAbility1 onWindowStageCreate")).assertTrue();
          expect(maptemp.get("MainAbility1 onAbilityForeground")).assertEqual(2);
          expect(maptemp.has("MainAbility1 onAbilityBackground")).assertTrue();

          expect(settemp.has("MainAbility2 onAbilityCreate")).assertTrue();
          expect(settemp.has("MainAbility2 onWindowStageCreate")).assertTrue();
          expect(settemp.has("MainAbility2 onAbilityForeground")).assertTrue();
          expect(settemp.has("MainAbility2 onAbilityBackground")).assertTrue();
          expect(settemp.has("MainAbility2 onWindowStageDestroy")).assertTrue();
          expect(settemp.has("MainAbility2 onAbilityDestroy")).assertTrue();
          expect(code).assertEqual(0);
          console.log("------------Singlehap_LifeCycleTest_0200 END-------------");
          done();
        }, 500);
      }, 4000);
    });

    /*
    * @tc.number  Singlehap_LifeCycleTest_0300
    * @tc.name    Register in abilityA,listening the lifecycle of abilityB,deregister,repeat the unregister
    * @tc.desc    Function test
    * @tc.level   0
    */
    it("Singlehap_LifeCycleTest_0300", 0, async (done: Function) => {
      console.log("------------Singlehap_LifeCycleTest_0300 START-------------");
      TAG = "Singlehap_LifeCycleTest_0300";
      let code: number = -1;
      let str: Want = {
        "bundleName": "com.example.lifecycle_xts",
        "abilityName": "MainAbility1",
      }
      AppStorage.get<common.UIAbilityContext>("abilityContext")!.startAbility(str)
        .then((data) => {
          console.info(TAG + ' start successful. Data: ' + data);
        })
        .catch((error: BusinessError) => {
          console.error(TAG + ' start failed. Cause: ' + JSON.stringify(error));
        })
      setTimeout(() => {
        let str1: Want = {
          "bundleName": "com.example.lifecycle_xts",
          "abilityName": "MainAbility2",
        }
        AppStorage.get<common.UIAbilityContext>("abilityContext")!.startAbility(str1)
          .then((data) => {
            console.info(TAG + ' start successful. Data: ' + data);
          })
          .catch((error: BusinessError) => {
            console.error(TAG + ' start failed. Cause: ' + JSON.stringify(error));
          })
      }, 700);
      setTimeout(() => {
        console.log(TAG + " registerAbilityLifecycleCallback listKey : " + JSON.stringify(AppStorage.get<string[]>("list1")!));
        console.log(TAG + " registerAbilityLifecycleCallback callbackid : " + JSON.stringify(AppStorage.get<number>("callbackid1")!));
        let listTemp = JSON.stringify(AppStorage.get<string[]>("list1")!);
        console.log(TAG + " listTemp is :" + listTemp);
        AppStorage.get<common.ApplicationContext>("applicationContext1")!
          .off("abilityLifecycle", AppStorage.get<number>("callbackid1")!)
          .then((data) => {
            console.info(TAG + ' unregisterAbilityLifecycleCallback successful. Data: ' + data);
          })
          .catch((error: BusinessError) => {
            console.error(TAG + ' unregisterAbilityLifecycleCallback failed. Cause: ' + JSON.stringify(error));
          })
        setTimeout(() => {
          console.log(TAG + " secondunregister callbackid : " + JSON.stringify(AppStorage.get<number>("callbackid1")!));
          AppStorage.get<common.ApplicationContext>("applicationContext1")!
            .off("abilityLifecycle", AppStorage.get<number>("callbackid1")!, (error, data) => {
              console.log(TAG + ": unregisterAbilityLifecycleCallback_1 success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
              code = error.code;
            })
        }, 500);
        setTimeout(() => {
          expect(listTemp.indexOf("MainAbility1 onWindowStageCreate") !== -1).assertTrue();
          expect(listTemp.split("MainAbility1 onAbilityForeground").length - 1).assertEqual(2);
          expect(listTemp.indexOf("MainAbility1 onAbilityBackground") !== -1).assertTrue();
          expect(listTemp.indexOf("MainAbility2 onAbilityCreate") !== -1).assertTrue();
          expect(listTemp.indexOf("MainAbility2 onWindowStageCreate") !== -1).assertTrue();
          expect(listTemp.indexOf("MainAbility2 onAbilityForeground") !== -1).assertTrue();
          expect(listTemp.indexOf("MainAbility2 onAbilityBackground") !== -1).assertTrue();
          expect(listTemp.indexOf("MainAbility2 onWindowStageDestroy") !== -1).assertTrue();
          expect(listTemp.indexOf("MainAbility2 onAbilityDestroy") !== -1).assertTrue();
          expect(code).assertEqual(401);
          console.log("------------Singlehap_LifeCycleTest_0300 END-------------");
          done();
        }, 2000);
      }, 4000);
    });

    /*
     * @tc.number  Singlehap_LifeCycleTest_0400
     * @tc.name    Register in abilityA,listening the lifecycle of abilityB,terminate abilityA,unregister
     * @tc.desc    Function test
     * @tc.level   0
     */
    it("Singlehap_LifeCycleTest_0400", 0, async (done: Function) => {
      console.log("------------Singlehap_LifeCycleTest_0400 START-------------");
      TAG = "Singlehap_LifeCycleTest_0400";
      let code: number = -1;
      let str: Want = {
        "bundleName": "com.example.lifecycle_xts",
        "abilityName": "MainAbility3",
      }
      AppStorage.get<common.UIAbilityContext>("abilityContext")!.startAbility(str)
        .then((data) => {
          console.info(TAG + ' start3 successful. Data: ' + data);
        })
        .catch((error: BusinessError) => {
          console.error(TAG + ' start3 failed. Cause: ' + JSON.stringify(error));
        })
      setTimeout(() => {
        let str1: Want = {
          "bundleName": "com.example.lifecycle_xts",
          "abilityName": "MainAbility2",
        }
        AppStorage.get<common.UIAbilityContext>("abilityContext")!.startAbility(str1)
          .then((data) => {
            console.info(TAG + ' start2 successful. Data: ' + data);
          })
          .catch((error: BusinessError) => {
            console.error(TAG + ' start2 failed. Cause: ' + JSON.stringify(error));
          })
      }, 700);
      setTimeout(() => {
        console.log(TAG + " registerAbilityLifecycleCallback listKey : " + JSON.stringify(AppStorage.get<string[]>("list3")!));
        console.log(TAG + " registerAbilityLifecycleCallback callbackid : " + JSON.stringify(AppStorage.get<number>("callbackid3")!));
        let listTemp = JSON.stringify(AppStorage.get<string[]>("list3")!);
        console.log(TAG + " listTemp is :" + listTemp);
        let para: common.AbilityResult = {
          resultCode: 1,
          want: {
            "abilityName": "MainAbility3",
            "bundleName": "com.example.lifecycle_xts"
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
        setTimeout(() => {
          AppStorage.get<common.ApplicationContext>("applicationContext3")!
            .off("abilityLifecycle", AppStorage.get<number>("callbackid3")!, (error, data) => {
              console.log(TAG + ": unregisterAbilityLifecycleCallback3 success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
              if (error == null) {
                code = 0;
              }
            })
        }, 500);
        setTimeout(() => {
          expect(listTemp.indexOf("MainAbility3 onWindowStageCreate") !== -1).assertTrue();
          expect(listTemp.split("MainAbility3 onAbilityForeground").length - 1).assertEqual(2);
          expect(listTemp.indexOf("MainAbility3 onAbilityBackground") !== -1).assertTrue();
          expect(listTemp.indexOf("MainAbility2 onAbilityCreate") !== -1).assertTrue();
          expect(listTemp.indexOf("MainAbility2 onWindowStageCreate") !== -1).assertTrue();
          expect(listTemp.indexOf("MainAbility2 onAbilityForeground") !== -1).assertTrue();
          expect(listTemp.indexOf("MainAbility2 onAbilityBackground") !== -1).assertTrue();
          expect(listTemp.indexOf("MainAbility2 onWindowStageDestroy") !== -1).assertTrue();
          expect(listTemp.indexOf("MainAbility2 onAbilityDestroy") !== -1).assertTrue();
          expect(code).assertEqual(0);
          console.log("------------Singlehap_LifeCycleTest_0400 END-------------");
          done();
        }, 1000);
      }, 3500);
    });

    /*
     * @tc.number  Singlehap_LifeCycleTest_0500
     * @tc.name    Register in abilityA and abilityB,unregister MainabilityB,then Register in ManinabilityC
     * @tc.desc    Function test
     * @tc.level   0
     */
    it("Singlehap_LifeCycleTest_0500", 0, async (done: Function) => {
      console.log("------------Singlehap_LifeCycleTest_0500 START-------------");
      TAG = "Singlehap_LifeCycleTest_0500";
      let str: Want = {
        "bundleName": "com.example.lifecycle_xts",
        "abilityName": "MainAbility1",
      }
      AppStorage.get<common.UIAbilityContext>("abilityContext")!.startAbility(str)
        .then((data) => {
          console.info(TAG + ' start1 successful. Data: ' + data);
        })
        .catch((error: BusinessError) => {
          console.error(TAG + ' start1 failed. Cause: ' + JSON.stringify(error));
        })
      setTimeout(() => {
        let str1: Want = {
          "bundleName": "com.example.lifecycle_xts",
          "abilityName": "MainAbility3",
        }
        AppStorage.get<common.UIAbilityContext>("abilityContext")!.startAbility(str1)
          .then((data) => {
            console.info(TAG + ' start3 successful. Data: ' + data);
          })
          .catch((error: BusinessError) => {
            console.error(TAG + ' start3 failed. Cause: ' + JSON.stringify(error));
          })
      }, 700);
      setTimeout(() => {
        console.log(TAG + " start after callbackid3 : " + JSON.stringify(AppStorage.get<number>("callbackid3")!));
        AppStorage.get<common.ApplicationContext>("applicationContext3")!
          .off("abilityLifecycle", AppStorage.get<number>("callbackid3")!)
          .then((data) => {
            console.info(TAG + ' unregisterAbilityLifecycleCallback3 successful. Data: ' + data);
          })
          .catch((error: BusinessError) => {
            console.error(TAG + ' unregisterAbilityLifecycleCallback3 failed. Cause: ' + JSON.stringify(error));
          });
        let str2: Want = {
          "bundleName": "com.example.lifecycle_xts",
          "abilityName": "MainAbility4",
        }
        AppStorage.get<common.UIAbilityContext>("abilityContext")!.startAbility(str2)
          .then((data) => {
            console.info(TAG + ' start4 successful. Data: ' + data);
          })
          .catch((error: BusinessError) => {
            console.error(TAG + ' start4 failed. Cause: ' + JSON.stringify(error));
          })
      }, 3300);
      setTimeout(() => {
        console.log(TAG + " listKey1 : " + JSON.stringify(AppStorage.get<string[]>("list1")!));
        console.log(TAG + " callbackid1 : " + JSON.stringify(AppStorage.get<number>("callbackid1")!));
        console.log(TAG + " listKey3 : " + JSON.stringify(AppStorage.get<string[]>("list3")!));
        console.log(TAG + " callbackid3 : " + JSON.stringify(AppStorage.get<number>("callbackid3")!));
        let id3 = AppStorage.get<number>("callbackid3")!;
        console.log(TAG + " listKey4 : " + JSON.stringify(AppStorage.get<string[]>("list4")!));
        console.log(TAG + " callbackid4 : " + JSON.stringify(AppStorage.get<number>("callbackid4")!));
        let id4 = AppStorage.get<number>("callbackid4")!;
        expect(id3 + 1).assertEqual(id4);
        AppStorage.get<common.ApplicationContext>("applicationContext4")!
          .off("abilityLifecycle", AppStorage.get<number>("callbackid4")!, (error, data) => {
            console.log(TAG + ": unregisterAbilityLifecycleCallback4 success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
          })
        AppStorage.get<common.ApplicationContext>("applicationContext1")!
          .off("abilityLifecycle", AppStorage.get<number>("callbackid1")!, (error, data) => {
            console.log(TAG + ": unregisterAbilityLifecycleCallback1 success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
            console.log("------------Singlehap_LifeCycleTest_0500 END-------------");
            done();
          })
      }, 5500);
    });

    /*
     * @tc.number  Singlehap_LifeCycleTest_0600
     * @tc.name    Register in abilityA,start abilityB、abilityC,terminate abilityB 、abilityC
     * @tc.desc    Function test
     * @tc.level   0
     */
    it("Singlehap_LifeCycleTest_0600", 0, async (done: Function) => {
      console.log("------------Singlehap_LifeCycleTest_0600 START-------------");
      TAG = "Singlehap_LifeCycleTest_0600";
      let str: Want = {
        "bundleName": "com.example.lifecycle_xts",
        "abilityName": "MainAbility1",
      }
      AppStorage.get<common.UIAbilityContext>("abilityContext")!.startAbility(str)
        .then((data) => {
          console.info(TAG + ' start1 successful. Data: ' + data);
        })
        .catch((error: BusinessError) => {
          console.error(TAG + ' start1 failed. Cause: ' + JSON.stringify(error));
        })
      setTimeout(() => {
        let str1: Want = {
          "bundleName": "com.example.lifecycle_xts",
          "abilityName": "MainAbility5",
        }
        AppStorage.get<common.UIAbilityContext>("abilityContext")!.startAbility(str1)
          .then((data) => {
            console.info(TAG + ' start5 successful. Data: ' + data);
          })
          .catch((error: BusinessError) => {
            console.error(TAG + ' start5 failed. Cause: ' + JSON.stringify(error));
          })
      }, 600);
      setTimeout(() => {
        let str2: Want = {
          "bundleName": "com.example.lifecycle_xts",
          "abilityName": "MainAbility2",
        }
        AppStorage.get<common.UIAbilityContext>("abilityContext")!.startAbility(str2)
          .then((data) => {
            console.info(TAG + ' start2 successful. Data: ' + data);
          })
          .catch((error: BusinessError) => {
            console.error(TAG + ' start2 failed. Cause: ' + JSON.stringify(error));
          })
      }, 1200);
      setTimeout(() => {
        console.log(TAG + " listKey1 : " + JSON.stringify(AppStorage.get<string[]>("list1")!));
        console.log(TAG + " callbackid1 : " + JSON.stringify(AppStorage.get<number>("callbackid1")!));
        let strtemp = "";
        let settemp: Set<string> = new Set();
        let settemp2: Set<string> = new Set();
        for (let i = 0; i < AppStorage.get<string[]>("list1")!.length; i++) {
          strtemp = AppStorage.get<string[]>("list1")![i].substring(0, 12);
          if (strtemp == "MainAbility2") {
            settemp.add(AppStorage.get<string[]>("list1")![i]);
            console.log(TAG + " set1 is :" + JSON.stringify(AppStorage.get<string[]>("list1")![i]));
          } else if (strtemp == "MainAbility5") {
            settemp2.add(AppStorage.get<string[]>("list1")![i]);
            console.log(TAG + " set2 is :" + JSON.stringify(AppStorage.get<string[]>("list1")![i]));
          }
        }
        expect(settemp.has("MainAbility2 onAbilityCreate")).assertTrue();
        expect(settemp.has("MainAbility2 onWindowStageCreate")).assertTrue();
        expect(settemp.has("MainAbility2 onAbilityForeground")).assertTrue();
        expect(settemp.has("MainAbility2 onAbilityBackground")).assertTrue();
        expect(settemp.has("MainAbility2 onWindowStageDestroy")).assertTrue();
        expect(settemp.has("MainAbility2 onAbilityDestroy")).assertTrue();

        expect(settemp2.has("MainAbility5 onAbilityCreate")).assertTrue();
        expect(settemp2.has("MainAbility5 onWindowStageCreate")).assertTrue();
        expect(settemp2.has("MainAbility5 onAbilityForeground")).assertTrue();
        expect(settemp2.has("MainAbility5 onAbilityBackground")).assertTrue();
        expect(settemp2.has("MainAbility5 onWindowStageDestroy")).assertTrue();
        expect(settemp2.has("MainAbility5 onAbilityDestroy")).assertTrue();

        AppStorage.get<common.ApplicationContext>("applicationContext1")!
          .off("abilityLifecycle", AppStorage.get<number>("callbackid1")!, (error, data) => {
            console.log(TAG + ": unregisterAbilityLifecycleCallback success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
            console.log("------------Singlehap_LifeCycleTest_0600 END-------------");
            done();
          })
      }, 4500);
    });

    /*
     * @tc.number  Singlehap_LifeCycleTest_0700
     * @tc.name    Multiple registration/unregistration
     * @tc.desc    Function test
     * @tc.level   0
     */
    it("Singlehap_LifeCycleTest_0700", 0, async (done: Function) => {
      console.log("------------Singlehap_LifeCycleTest_0700 START-------------");
      TAG = "Singlehap_LifeCycleTest_0700";
      let code1: number = -1;
      let code2: number = -1;
      let code3: number = -1;
      let id1: number;
      let id2: number;
      let id3: number;
      let listKey8: string[] = [];
      let AbilityLifecycleCallback: AbilityLifecycleCallback = {
        onAbilityCreate(ability) {
          console.log(TAG + " onAbilityCreate ability:" + JSON.stringify(ability));
          let abilityname = ability.context.abilityInfo.name;
          console.log(TAG + " onAbilityCreate abilityname:" + JSON.stringify(abilityname));
          console.log(TAG + " " + abilityname + " onAbilityCreate");
          listKey8.push(abilityname + " onAbilityCreate");
        },
        onWindowStageCreate(ability, windowStage) {
          console.log(TAG + " onWindowStageCreate ability:" + JSON.stringify(ability));
          let abilityname = ability.context.abilityInfo.name;
          console.log(TAG + " onWindowStageCreate abilityname:" + JSON.stringify(abilityname));
          console.log(TAG + " " + abilityname + " onWindowStageCreate");
          listKey8.push(abilityname + " onWindowStageCreate");
        },
        onWindowStageActive(ability, windowStage) {
          let abilityname = ability.context.abilityInfo.name;
          console.log(abilityname + " onWindowStageActive");
        },
        onWindowStageInactive(ability, windowStage) {
          let abilityname = ability.context.abilityInfo.name;
          console.log(abilityname + " onWindowStageInactive");
        },
        onWindowStageDestroy(ability, windowStage) {
          console.log(TAG + " AbilityLifecycleCallback1 onWindowStageDestroy ability:" + JSON.stringify(ability));
          let abilityname = ability.context.abilityInfo.name;
          console.log(TAG + " AbilityLifecycleCallback1 onWindowStageDestroy abilityname:" + JSON.stringify(abilityname));
          console.log(TAG + " " + abilityname + " onWindowStageDestroy");
          listKey8.push(abilityname + " onWindowStageDestroy");
        },
        onAbilityDestroy(ability) {
          console.log(TAG + " AbilityLifecycleCallback1 onAbilityDestroy ability:" + JSON.stringify(ability));
          let abilityname = ability.context.abilityInfo.name;
          console.log(TAG + " AbilityLifecycleCallback1 onAbilityDestroy abilityname:" + JSON.stringify(abilityname));
          console.log(TAG + " " + abilityname + " onAbilityDestroy");
          listKey8.push(abilityname + " onAbilityDestroy");
        },
        onAbilityForeground(ability) {
          console.log(TAG + " AbilityLifecycleCallback1 onAbilityForeground ability:" + JSON.stringify(ability));
          let abilityname = ability.context.abilityInfo.name;
          console.log(TAG + " AbilityLifecycleCallback1 onAbilityForeground abilityname:" + JSON.stringify(abilityname));
          console.log(TAG + " " + abilityname + " onAbilityForeground");
          listKey8.push(abilityname + " onAbilityForeground");
        },
        onAbilityBackground(ability) {
          console.log(TAG + " AbilityLifecycleCallback1 onAbilityBackground ability:" + JSON.stringify(ability));
          let abilityname = ability.context.abilityInfo.name;
          console.log(TAG + " AbilityLifecycleCallback1 onAbilityBackground abilityname:" + JSON.stringify(abilityname));
          console.log(TAG + " " + abilityname + " onAbilityBackground");
          listKey8.push(abilityname + " onAbilityBackground");
        },
        onAbilityContinue(ability) {
          console.log(TAG + " AbilityLifecycleCallback1 onAbilityContinue ability:" + JSON.stringify(ability));
          let abilityname = ability.context.abilityInfo.name;
          console.log(TAG + " AbilityLifecycleCallback1 onAbilityContinue abilityname:" + JSON.stringify(abilityname));
          console.log(TAG + " " + abilityname + " onAbilityContinue");
          listKey8.push(abilityname + " onAbilityContinue");
        }
      }
      let applicationContext = AppStorage.get<common.UIAbilityContext>("abilityContext")!.getApplicationContext();
      id1 = applicationContext.on("abilityLifecycle", AbilityLifecycleCallback);
      console.log(TAG + " registerAbilityLifecycleCallback1 number: " + JSON.stringify(id1));
      applicationContext.off("abilityLifecycle", id1, (error, data) => {
        console.log(TAG + ": unregisterAbilityLifecycleCallback1 success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
        if (error == null) {
          code1 = 0;
        }
      })
      setTimeout(() => {
        id2 = applicationContext.on("abilityLifecycle", AbilityLifecycleCallback);
        console.log(TAG + " registerAbilityLifecycleCallback2 number: " + JSON.stringify(id2));
        applicationContext.off("abilityLifecycle", id2, (error, data) => {
          console.log(TAG + ": unregisterAbilityLifecycleCallback2 success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
          if (error == null) {
            code2 = 0;
          }
        })
      }, 1000);
      setTimeout(() => {
        id3 = applicationContext.on("abilityLifecycle", AbilityLifecycleCallback);
        console.log(TAG + " registerAbilityLifecycleCallback3 number: " + JSON.stringify(id3));
        applicationContext.off("abilityLifecycle", id3, (error, data) => {
          console.log(TAG + ": unregisterAbilityLifecycleCallback3 success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
          if (error == null) {
            code3 = 0;
          }
          expect(id1 > 0).assertTrue();
          expect(id2).assertEqual(id1 + 1);
          expect(id3).assertEqual(id2 + 1);
          expect(code1).assertEqual(0);
          expect(code2).assertEqual(0);
          expect(code3).assertEqual(0);
          console.log("------------Singlehap_LifeCycleTest_0700 END-------------");
          done();
        })
      }, 3000);
    });

    /*
     * @tc.number  Singlehap_LifeCycleTest_0800
     * @tc.name    Maninability1 Register listening, Repeat starting and termination Ability2
     * @tc.desc    Function test
     * @tc.level   0
     */
    it("Singlehap_LifeCycleTest_0800", 0, async (done: Function) => {
      await sleep(500);
      console.log("------------Singlehap_LifeCycleTest_0800 START-------------");
      TAG = "Singlehap_LifeCycleTest_0800";
      let str: Want = {
        "bundleName": "com.example.lifecycle_xts",
        "abilityName": "MainAbility1",
      }
      AppStorage.get<common.UIAbilityContext>("abilityContext")!.startAbility(str)
        .then((data) => {
          console.info(TAG + ' start successful. Data: ' + data);
        })
        .catch((error: BusinessError) => {
          console.error(TAG + ' start failed. Cause: ' + JSON.stringify(error));
        })
      setTimeout(() => {
        let str1: Want = {
          "bundleName": "com.example.lifecycle_xts",
          "abilityName": "MainAbility2",
        }
        AppStorage.get<common.UIAbilityContext>("abilityContext")!.startAbility(str1)
          .then((data) => {
            console.info(TAG + ' start successful. Data: ' + data);
          })
          .catch((error: BusinessError) => {
            console.error(TAG + ' start failed. Cause: ' + JSON.stringify(error));
          })
      }, 1500);
      setTimeout(() => {
        let str1: Want = {
          "bundleName": "com.example.lifecycle_xts",
          "abilityName": "MainAbility2",
        }
        AppStorage.get<common.UIAbilityContext>("abilityContext")!.startAbility(str1)
          .then((data) => {
            console.info(TAG + ' start successful. Data: ' + data);
          })
          .catch((error: BusinessError) => {
            console.error(TAG + ' start failed. Cause: ' + JSON.stringify(error));
          })
      }, 3000);

      setTimeout(() => {
        let str1: Want = {
          "bundleName": "com.example.lifecycle_xts",
          "abilityName": "MainAbility2",
        }
        AppStorage.get<common.UIAbilityContext>("abilityContext")!.startAbility(str1)
          .then((data) => {
            console.info(TAG + ' start successful. Data: ' + data);
          })
          .catch((error: BusinessError) => {
            console.error(TAG + ' start failed. Cause: ' + JSON.stringify(error));
          })
      }, 4500);

      setTimeout(() => {
        console.log(TAG + " registerAbilityLifecycleCallback listKey : " + JSON.stringify(AppStorage.get<string[]>("list1")!));
        console.log(TAG + " registerAbilityLifecycleCallback callbackid : " + JSON.stringify(AppStorage.get<number>("callbackid1")!));
        let listTemp = JSON.stringify(AppStorage.get<string[]>("list1")!);
        console.log(TAG + " listTemp is :" + listTemp);
        try {
          expect(listTemp.indexOf("MainAbility1 onWindowStageCreate") !== -1).assertTrue();
          expect(listTemp.split("MainAbility1 onAbilityForeground").length - 1).assertLarger(1);
          expect(listTemp.split("MainAbility1 onAbilityBackground").length - 1).assertEqual(3);
          expect(listTemp.split("MainAbility2 onAbilityCreate").length - 1).assertEqual(3);
          expect(listTemp.split("MainAbility2 onWindowStageCreate").length - 1).assertEqual(3);
          expect(listTemp.split("MainAbility2 onAbilityForeground").length - 1).assertEqual(3);
          expect(listTemp.split("MainAbility2 onAbilityBackground").length - 1).assertLarger(1);
          expect(listTemp.split("MainAbility2 onWindowStageDestroy").length - 1).assertLarger(1);
          expect(listTemp.split("MainAbility2 onAbilityDestroy").length - 1).assertLarger(1);
        } catch (error) {
          console.error(`${TAG} startRunning failed: ${JSON.stringify(error)}`);
          done();
        }
        AppStorage.get<common.ApplicationContext>("applicationContext1")!
          .off("abilityLifecycle", AppStorage.get<number>("callbackid1")!, (error, data) => {
            console.log(TAG + ": unregisterAbilityLifecycleCallback success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
            console.log("------------Singlehap_LifeCycleTest_0800 END-------------");
            done();
          });
      }, 5950);
    });

    /*
     * @tc.number  Singlehap_LifeCycleTest_0900
     * @tc.name    Repeat switching Ability1 between front and back
     * @tc.desc    Function test
     * @tc.level   0
     */
    it("Singlehap_LifeCycleTest_0900", 0, async (done: Function) => {
      console.log("------------Singlehap_LifeCycleTest_0900 START-------------");
      TAG = "Singlehap_LifeCycleTest_0900";
      let str: Want = {
        "bundleName": "com.example.lifecycle_xts",
        "abilityName": "MainAbility1",
      }
      AppStorage.get<common.UIAbilityContext>("abilityContext")!.startAbility(str)
        .then((data) => {
          console.info(TAG + ' start successful. Data: ' + data);
        })
        .catch((error: BusinessError) => {
          console.error(TAG + ' start failed. Cause: ' + JSON.stringify(error));
        })
      setTimeout(() => {
        let str1: Want = {
          "bundleName": "com.example.lifecycle_xts",
          "abilityName": "MainAbility2",
        }
        AppStorage.get<common.UIAbilityContext>("abilityContext")!.startAbility(str1)
          .then((data) => {
            console.info(TAG + ' start successful. Data: ' + data);
          })
          .catch((error: BusinessError) => {
            console.error(TAG + ' start failed. Cause: ' + JSON.stringify(error));
          })
      }, 700);
      setTimeout(() => {
        let str1: Want = {
          "bundleName": "com.example.lifecycle_xts",
          "abilityName": "MainAbility2",
        }
        AppStorage.get<common.UIAbilityContext>("abilityContext")!.startAbility(str1)
          .then((data) => {
            console.info(TAG + ' start successful. Data: ' + data);
          })
          .catch((error: BusinessError) => {
            console.error(TAG + ' start failed. Cause: ' + JSON.stringify(error));
          })
      }, 2500);
      setTimeout(() => {
        console.log(TAG + " registerAbilityLifecycleCallback listKey : " + JSON.stringify(AppStorage.get<string[]>("list1")!));
        console.log(TAG + " registerAbilityLifecycleCallback callbackid : " + JSON.stringify(AppStorage.get<number>("callbackid1")!));
        let listTemp = JSON.stringify(AppStorage.get<string[]>("list1")!);
        console.log(TAG + " listTemp is :" + listTemp);

        expect(listTemp.indexOf("MainAbility1 onWindowStageCreate") !== -1).assertTrue();
        expect(listTemp.split("MainAbility1 onAbilityForeground").length - 1).assertEqual(3);
        expect(listTemp.split("MainAbility1 onAbilityBackground").length - 1).assertEqual(2);
        expect(listTemp.split("MainAbility2 onAbilityCreate").length - 1).assertEqual(2);
        expect(listTemp.split("MainAbility2 onWindowStageCreate").length - 1).assertEqual(2);
        expect(listTemp.split("MainAbility2 onAbilityForeground").length - 1).assertEqual(2);
        expect(listTemp.split("MainAbility2 onAbilityBackground").length - 1).assertEqual(2);
        expect(listTemp.split("MainAbility2 onWindowStageDestroy").length - 1).assertEqual(2);
        expect(listTemp.split("MainAbility2 onAbilityDestroy").length - 1).assertEqual(2);
        AppStorage.get<common.ApplicationContext>("applicationContext1")!
          .off("abilityLifecycle", AppStorage.get<number>("callbackid1")!, (error, data) => {
            console.log(TAG + ": unregisterAbilityLifecycleCallback success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
            console.log("------------Singlehap_LifeCycleTest_0900 END-------------");
            done();
          });
      }, 5300);
    });

    /*
     * @tc.number  Singlehap_LifeCycleTest_1000
     * @tc.name    Register listening in abilityA foreground,repeat the registration
     * @tc.desc    Function test
     * @tc.level   0
     */
    it("Singlehap_LifeCycleTest_1000", 0, async (done: Function) => {
      console.log("------------Singlehap_LifeCycleTest_1000 START-------------");
      TAG = "Singlehap_LifeCycleTest_1000";
      let id1: number;
      let id2: number;
      let str: Want = {
        "bundleName": "com.example.lifecycle_xts",
        "abilityName": "MainAbility6",
      }
      AppStorage.get<common.UIAbilityContext>("abilityContext")!.startAbility(str)
        .then((data) => {
          console.info(TAG + ' start successful. Data: ' + data);
        })
        .catch((error: BusinessError) => {
          console.error(TAG + ' start failed. Cause: ' + JSON.stringify(error));
        })
      setTimeout(() => {
        console.log(TAG + " firstCallback listKey : " + JSON.stringify(AppStorage.get<string[]>("list6")!));
        console.log(TAG + " firstCallback callbackid : " + JSON.stringify(AppStorage.get<number>("callbackid6")!));
        id1 = AppStorage.get<number>("callbackid6")!;
        console.log(TAG + " firstCallback id : " + JSON.stringify(id1));
        let str1: Want = {
          "bundleName": "com.example.lifecycle_xts",
          "abilityName": "MainAbility2",
        }
        AppStorage.get<common.UIAbilityContext>("abilityContext")!.startAbility(str1)
          .then((data) => {
            console.info(TAG + ' start successful. Data: ' + data);
          })
          .catch((error: BusinessError) => {
            console.error(TAG + ' start failed. Cause: ' + JSON.stringify(error));
          })
      }, 2500);
      setTimeout(() => {
        console.log(TAG + " secondCallback listKey : " + JSON.stringify(AppStorage.get<string[]>("list6")!));
        console.log(TAG + " secondCallback callbackid : " + JSON.stringify(AppStorage.get<number>("callbackid6")!));
        id2 = AppStorage.get<number>("callbackid6")!;
        console.log(TAG + " secondCallback id : " + JSON.stringify(id2));
        expect(id1 + 1).assertEqual(id2);
        AppStorage.get<common.ApplicationContext>("applicationContext6")!
          .off("abilityLifecycle", AppStorage.get<number>("callbackid6")!, (error, data) => {
            console.log(TAG + ": unregisterAbilityLifecycleCallback success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
            console.log("------------Singlehap_LifeCycleTest_1000 END-------------");
            done();
          });
      }, 5500);
    });

    /*
     * @tc.number  Singlehap_LifeCycleTest_1100
     * @tc.name    Register listening in abilityA foreground,repeat the registration (singleton)
     * @tc.desc    Function test
     * @tc.level   0
     */
    it("Singlehap_LifeCycleTest_1100", 0, async (done: Function) => {
      console.log("------------Singlehap_LifeCycleTest_1100 START-------------");
      TAG = "Singlehap_LifeCycleTest_1100";
      let id1: number;
      let id2: number;
      let str: Want = {
        "bundleName": "com.example.lifecycle_xts",
        "abilityName": "MainAbility7",
      }
      AppStorage.get<common.UIAbilityContext>("abilityContext")!.startAbility(str)
        .then((data) => {
          console.info(TAG + ' start successful. Data: ' + data);
        })
        .catch((error: BusinessError) => {
          console.error(TAG + ' start failed. Cause: ' + JSON.stringify(error));
        })
      setTimeout(() => {
        console.log(TAG + " firstCallback listKey : " + JSON.stringify(AppStorage.get<string[]>("list7")!));
        console.log(TAG + " firstCallback callbackid : " + JSON.stringify(AppStorage.get<number>("callbackid7")!));
        id1 = AppStorage.get<number>("callbackid7")!;
        console.log(TAG + " firstCallback id : " + JSON.stringify(id1));
        let str: Want = {
          "bundleName": "com.example.lifecycle_xts",
          "abilityName": "MainAbility7",
        }
        AppStorage.get<common.UIAbilityContext>("abilityContext")!.startAbility(str)
          .then((data) => {
            console.info(TAG + ' start successful. Data: ' + data);
          })
          .catch((error: BusinessError) => {
            console.error(TAG + ' start failed. Cause: ' + JSON.stringify(error));
          })
      }, 2500);
      setTimeout(() => {
        console.log(TAG + " secondCallback listKey : " + JSON.stringify(AppStorage.get<string[]>("list7")!));
        console.log(TAG + " secondCallback callbackid : " + JSON.stringify(AppStorage.get<number>("callbackid7")!));
        id2 = AppStorage.get<number>("callbackid7")!;
        console.log(TAG + " secondCallback id : " + JSON.stringify(id2));
        expect(id1).assertEqual(id2);
        AppStorage.get<common.ApplicationContext>("applicationContext7")!
          .off("abilityLifecycle", AppStorage.get<number>("callbackid7")!, (error, data) => {
            console.log(TAG + ": unregisterAbilityLifecycleCallback success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
          });
        let para: common.AbilityResult = {
          resultCode: 1,
          want: {
            "abilityName": "MainAbility1",
            "bundleName": "com.example.lifecycle_xts"
          }
        }
        console.log(TAG + " terminateSelfwithresult para: " + JSON.stringify(para));
        AppStorage.get<common.UIAbilityContext>("ability7")!.terminateSelfWithResult(para, (error, data) => {
          console.log(TAG + " terminateSelfwithresult success, err: " + JSON.stringify(error) +
            ",data: " + JSON.stringify(data));
          console.log("------------Singlehap_LifeCycleTest_1100 END-------------");
          done();
        });
      }, 4500);
    });
    /*
     * @tc.number  Singlehap_LifeCycleTest_1200
     * @tc.name    Register listening in abilityA foreground,repeat the registration (standard)
     * @tc.desc    Function test
     * @tc.level   0
     */
    it("Singlehap_LifeCycleTest_1200", 0, async (done: Function) => {
      console.log("------------Singlehap_LifeCycleTest_1200 START-------------");
      TAG = "Singlehap_LifeCycleTest_1200";
      let id1: number;
      let id2: number;
      let str: Want = {
        "bundleName": "com.example.lifecycle_xts",
        "abilityName": "MainAbility8",
      }
      AppStorage.get<common.UIAbilityContext>("abilityContext")!.startAbility(str)
        .then((data) => {
          console.info(TAG + ' start successful. Data: ' + data);
        })
        .catch((error: BusinessError) => {
          console.error(TAG + ' start failed. Cause: ' + JSON.stringify(error));
        })
      setTimeout(() => {
        console.log(TAG + " firstCallback listKey : " + JSON.stringify(AppStorage.get<string[]>("list8")!));
        console.log(TAG + " firstCallback callbackid : " + JSON.stringify(AppStorage.get<number>("callbackid8")!));
        id1 = AppStorage.get<number>("callbackid8")!;
        console.log(TAG + " firstCallback id : " + JSON.stringify(id1));
        let str: Want = {
          "bundleName": "com.example.lifecycle_xts",
          "abilityName": "MainAbility8",
        }
        AppStorage.get<common.UIAbilityContext>("abilityContext")!.startAbility(str)
          .then((data) => {
            console.info(TAG + ' start successful. Data: ' + data);
          })
          .catch((error: BusinessError) => {
            console.error(TAG + ' start failed. Cause: ' + JSON.stringify(error));
          })
      }, 2500);
      setTimeout(() => {
        console.log(TAG + " secondCallback listKey : " + JSON.stringify(AppStorage.get<string[]>("list8")!));
        console.log(TAG + " secondCallback callbackid : " + JSON.stringify(AppStorage.get<number>("callbackid8")!));
        id2 = AppStorage.get<number>("callbackid8")!;
        console.log(TAG + " secondCallback id : " + JSON.stringify(id2));
        expect(id1 + 1).assertEqual(id2);
        AppStorage.get<common.ApplicationContext>("applicationContext8")!
          .off("abilityLifecycle", AppStorage.get<number>("callbackid8")!, (error, data) => {
            console.log(TAG + ": unregisterAbilityLifecycleCallback success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
          });
        let para: common.AbilityResult = {
          resultCode: 1,
          want: {
            "abilityName": "MainAbility8",
            "bundleName": "com.example.lifecycle_xts"
          }
        }
        console.log(TAG + " terminateSelfwithresult para: " + JSON.stringify(para));
        AppStorage.get<common.UIAbilityContext>("ability8")!.terminateSelfWithResult(para, (error, data) => {
          console.log(TAG + " terminateSelfwithresult success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
          console.log("------------Singlehap_LifeCycleTest_1200 END-------------");
          done();
        });
      }, 5000);
    });

    /*
    * @tc.number  Singlehap_LifeCycleTest_1300
    * @tc.name    The ability of HAP A listens to the ability lifecycle callback of HAP B (singleton)
    * @tc.desc    Function test
    * @tc.level   0
    */
    it("Singlehap_LifeCycleTest_1300", 0, async (done: Function) => {
      console.log("------------Singlehap_LifeCycleTest_1300 start-------------");
      TAG = "Singlehap_LifeCycleTest_1300";
      AppStorage.get<common.UIAbilityContext>("abilityContext")!.startAbility({
        bundleName: "com.example.lifecycle_xts",
        abilityName: "MainAbility9"
      }, (error, data) => {
        console.log(TAG + ": MainAbility9 startAbility success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
      });
      await sleep(700);
      AppStorage.get<common.UIAbilityContext>("abilityContext")!.startAbility({
        bundleName: "com.example.lifecycle_xts",
        abilityName: "Hap1MainAbility1"
      }, (error, data) => {
        console.log(TAG + ":first Hap1MainAbility1 startAbility success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
      });
      await sleep(700);
      AppStorage.get<common.UIAbilityContext>("abilityContext")!.startAbility({
        bundleName: "com.example.lifecycle_xts",
        abilityName: "Hap1MainAbility1"
      }, (error, data) => {
        setTimeout(() => {
          console.log(TAG + ": second Hap1MainAbility1 startAbility success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
          let listTemp = JSON.stringify(AppStorage.get<string[]>("mainAbility9ListKey")!);
          console.log(TAG + "listTemp is :" + listTemp);
          console.log(TAG + "AppStorage.get<number>('mainAbility9CallBackId')! is :" + AppStorage.get<number>('mainAbility9CallBackId')!);
          expect(listTemp.indexOf("Hap1MainAbility1 onAbilityCreate") !== -1).assertTrue();
          expect(listTemp.indexOf("Hap1MainAbility1 onWindowStageCreate") !== -1).assertTrue();
          expect(listTemp.indexOf("Hap1MainAbility1 onAbilityForeground") !== -1).assertTrue();
          expect(listTemp.indexOf("Hap1MainAbility1 onAbilityBackground") !== -1).assertTrue();
          expect(listTemp.indexOf("Hap1MainAbility1 onWindowStageDestroy") !== -1).assertTrue();
          expect(listTemp.indexOf("Hap1MainAbility1 onAbilityDestroy") !== -1).assertTrue();
          AppStorage.get<common.ApplicationContext>("applicationContext9")!
            .off("abilityLifecycle", AppStorage.get<number>('mainAbility9CallBackId')!, (error, data) => {
              console.log(TAG + ": unregisterAbilityLifecycleCallback success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
              done();
            });
        }, 3500)
      });
      console.log("------------Singlehap_LifeCycleTest_1300 end-------------");
    });

    /*
     * @tc.number  Singlehap_LifeCycleTest_1400
     * @tc.name    The ability of HAP A listens to the ability lifecycle callback of HAP B (standard)
     * @tc.desc    Function test
     * @tc.level   0
     */
    it("Singlehap_LifeCycleTest_1400", 0, async (done: Function) => {
      console.log("------------Singlehap_LifeCycleTest_1400 start-------------");
      TAG = "Singlehap_LifeCycleTest_1400";
      AppStorage.get<common.UIAbilityContext>("abilityContext")!.startAbility({
        bundleName: "com.example.lifecycle_xts",
        abilityName: "MainAbility9"
      }, (error, data) => {
        console.log(TAG + ": MainAbility9 startAbility success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
      });
      await sleep(700);
      AppStorage.get<common.UIAbilityContext>("abilityContext")!.startAbility({
        bundleName: "com.example.lifecycle_xts",
        abilityName: "Hap1MainAbility2"
      }, (error, data) => {
        console.log(TAG + ":first Hap1MainAbility2 startAbility success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
      });
      await sleep(700);
      AppStorage.get<common.UIAbilityContext>("abilityContext")!.startAbility({
        bundleName: "com.example.lifecycle_xts",
        abilityName: "Hap1MainAbility2"
      }, (error, data) => {
        setTimeout(() => {
          console.log(TAG + ": second Hap1MainAbility2 startAbility success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
          let listTemp = JSON.stringify(AppStorage.get<string[]>("mainAbility9ListKey")!);
          console.log(TAG + "listTemp is :" + listTemp);
          console.log(TAG + "AppStorage.get<number>('mainAbility9CallBackId')! is :" + AppStorage.get<number>('mainAbility9CallBackId')!);
          expect(listTemp.split("Hap1MainAbility2 onAbilityCreate").length - 1).assertEqual(2);
          expect(listTemp.split("Hap1MainAbility2 onWindowStageCreate").length - 1).assertEqual(2);
          expect(listTemp.split("Hap1MainAbility2 onAbilityForeground").length - 1).assertEqual(2);
          expect(listTemp.split("Hap1MainAbility2 onAbilityBackground").length - 1).assertEqual(2);
          expect(listTemp.split("Hap1MainAbility2 onWindowStageDestroy").length - 1).assertEqual(2);
          expect(listTemp.split("Hap1MainAbility2 onAbilityDestroy").length - 1).assertEqual(2);
          AppStorage.get<common.ApplicationContext>("applicationContext9")!
            .off("abilityLifecycle", AppStorage.get<number>('mainAbility9CallBackId')!, (error, data) => {
              console.log(TAG + ": unregisterAbilityLifecycleCallback success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
              done();
            });
        }, 3500)
      });
      console.log("------------Singlehap_LifeCycleTest_1400 end-------------");
    });
    /*
     * @tc.number  Singlehap_LifeCycleTest_1500
     * @tc.name    Register in abilityA , starting and termination AbilityB,Repeat previous steps (standard)
     * @tc.desc    Function test
     * @tc.level   0
     */
    it("Singlehap_LifeCycleTest_1500", 0, async (done: Function) => {
      console.log("------------Singlehap_LifeCycleTest_1500 START-------------");
      TAG = "Singlehap_LifeCycleTest_1500";
      let id1: number;
      let id2: number;
      let str: Want = {
        "bundleName": "com.example.lifecycle_xts",
        "abilityName": "MainAbility11",
      }
      AppStorage.get<common.UIAbilityContext>("abilityContext")!.startAbility(str)
        .then((data) => {
          console.info(TAG + ' start successful. Data: ' + data);
        })
        .catch((error: BusinessError) => {
          console.error(TAG + ' start failed. Cause: ' + JSON.stringify(error));
        })
      setTimeout(() => {
        let str1: Want = {
          "bundleName": "com.example.lifecycle_xts",
          "abilityName": "MainAbility2",
        }
        AppStorage.get<common.UIAbilityContext>("abilityContext")!.startAbility(str1)
          .then((data) => {
            console.info(TAG + ' start successful. Data: ' + data);
          })
          .catch((error: BusinessError) => {
            console.error(TAG + ' start failed. Cause: ' + JSON.stringify(error));
          })
      }, 700);
      setTimeout(() => {
        console.log(TAG + " firstCallback listKey : " + JSON.stringify(AppStorage.get<string[]>("list11")!));
        console.log(TAG + " firstCallback callbackid : " + JSON.stringify(AppStorage.get<number>("callbackid11")!));
        id1 = AppStorage.get<number>("callbackid11")!;
        console.log(TAG + " firstCallback id : " + JSON.stringify(id1));
        let str: Want = {
          "bundleName": "com.example.lifecycle_xts",
          "abilityName": "MainAbility11",
        }
        AppStorage.get<common.UIAbilityContext>("abilityContext")!.startAbility(str)
          .then((data) => {
            console.info(TAG + ' start successful. Data: ' + data);
          })
          .catch((error: BusinessError) => {
            console.error(TAG + ' start failed. Cause: ' + JSON.stringify(error));
          })
        setTimeout(() => {
          let str1: Want = {
            "bundleName": "com.example.lifecycle_xts",
            "abilityName": "MainAbility2",
          }
          AppStorage.get<common.UIAbilityContext>("abilityContext")!.startAbility(str1)
            .then((data) => {
              console.info(TAG + ' start successful. Data: ' + data);
            })
            .catch((error: BusinessError) => {
              console.error(TAG + ' start failed. Cause: ' + JSON.stringify(error));
            })
        }, 700);
      }, 3500);
      setTimeout(() => {
        console.log(TAG + " secondCallback listKey : " + JSON.stringify(AppStorage.get<string[]>("list11")!));
        console.log(TAG + " secondCallback callbackid : " + JSON.stringify(AppStorage.get<number>("callbackid11")!));
        id2 = AppStorage.get<number>("callbackid11")!;
        console.log(TAG + " secondCallback id : " + JSON.stringify(id2));
        let listTemp = JSON.stringify(AppStorage.get<string[]>("list11")!);
        console.log(TAG + " listTemp is :" + listTemp);
        expect(listTemp.indexOf("MainAbility2 onAbilityCreate") !== -1).assertTrue();
        expect(listTemp.indexOf("MainAbility2 onWindowStageCreate") !== -1).assertTrue();
        expect(listTemp.indexOf("MainAbility2 onAbilityForeground") !== -1).assertTrue();
        expect(listTemp.indexOf("MainAbility2 onAbilityBackground") !== -1).assertTrue();
        expect(listTemp.indexOf("MainAbility2 onWindowStageDestroy") !== -1).assertTrue();
        expect(listTemp.indexOf("MainAbility2 onAbilityDestroy") !== -1).assertTrue();
        expect(id1 + 1).assertEqual(id2);
        AppStorage.get<common.ApplicationContext>("applicationContext11")!
          .off("abilityLifecycle", AppStorage.get<number>("callbackid11")!, (error, data) => {
            console.log(TAG + ": unregisterAbilityLifecycleCallback success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
            console.log("------------Singlehap_LifeCycleTest_1500 END-------------");
            done();
          });
      }, 7000);
    });

    let callbackid_NA = 100
    let callbackid_errorNum = -1
    let callbackid_errorType = "test"
    /*
     * @tc.number  Singlehap_LifeCycleTest_1600
     * @tc.name    input Nonexistent callbackid for unregisterAbilityLifecycleCallback parameter
     * @tc.desc    Function test
     * @tc.level   1
     */
    it("Singlehap_LifeCycleTest_1600", 0, async (done: Function) => {
      console.log("------------Singlehap_LifeCycleTest_1600 START-------------");
      TAG = "Singlehap_LifeCycleTest_1600";
      let code: number;
      AppStorage.get<common.UIAbilityContext>("abilityContext")!.getApplicationContext()
        .off("abilityLifecycle", callbackid_NA, (error, data) => {
          console.log(TAG + ": unregisterAbilityLifecycleCallback success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
          code = error.code;
          sleep(1000);
          expect(code).assertEqual(401);
          done();
        });
    });

    /*
     * @tc.number  Singlehap_LifeCycleTest_1700
     * @tc.name    input error callbackid for unregisterAbilityLifecycleCallback parameter
     * @tc.desc    Function test
     * @tc.level   1
     */
    it("Singlehap_LifeCycleTest_1700", 0, async (done: Function) => {
      console.log("------------Singlehap_LifeCycleTest_1700 START-------------");
      TAG = "Singlehap_LifeCycleTest_1700";
      let code: number;
      AppStorage.get<common.UIAbilityContext>("abilityContext")!.getApplicationContext()
        .off("abilityLifecycle", callbackid_errorNum, (error, data) => {
          console.log(TAG + ": unregisterAbilityLifecycleCallback success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
          code = error.code;
          sleep(1000);
          expect(code).assertEqual(401);
          done();
        });
    });

    /*
     * @tc.number  Singlehap_LifeCycleTest_1800
     * @tc.name    input error type callbackid for unregisterAbilityLifecycleCallback parameter
     * @tc.desc    Function test
     * @tc.level   1
     */
    it("Singlehap_LifeCycleTest_1800", 0, async (done: Function) => {
      console.log("------------Singlehap_LifeCycleTest_1800 START-------------");
      TAG = "Singlehap_LifeCycleTest_1800";
      let code: number;
      AppStorage.get<common.UIAbilityContext>("abilityContext")!.getApplicationContext()
        .off("abilityLifecycle", callbackid_errorType, (error, data) => {
          console.log(TAG + ": unregisterAbilityLifecycleCallback success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
          code = error.code;
          sleep(1000);
          expect(code).assertEqual(401);
          done();
        });
    });

    /*
     * @tc.number  Singlehap_LifeCycleTest_1900
     * @tc.name    input null callbackid for unregisterAbilityLifecycleCallback parameter
     * @tc.desc    Function test
     * @tc.level   1
     */
    it("Singlehap_LifeCycleTest_1900", 0, async (done: Function) => {
      console.log("------------Singlehap_LifeCycleTest_1900 START-------------");
      TAG = "Singlehap_LifeCycleTest_1900";
      let code: number;
      AppStorage.get<common.UIAbilityContext>("abilityContext")!.getApplicationContext()
        .off("abilityLifecycle", null, (error, data) => {
          console.log(TAG + ": unregisterAbilityLifecycleCallback success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
          code = error.code;
          sleep(1000);
          expect(code).assertEqual(401);
          done();
        });
    });

    /*
     * @tc.number  Singlehap_LifeCycleTest_2000
     * @tc.name    Register in abilityA, starting and termination AbilityB, terminate abilityA, Re-register in abilityA
     * @tc.desc    Function test
     * @tc.level   0
     */
    it("Singlehap_LifeCycleTest_2000", 0, async (done: Function) => {
      console.log("------------Singlehap_LifeCycleTest_2000 START-------------");
      TAG = "Singlehap_LifeCycleTest_2000";
      let id1: number;
      let id2: number;
      let str: Want = {
        "bundleName": "com.example.lifecycle_xts",
        "abilityName": "MainAbility12",
      }
      AppStorage.get<common.UIAbilityContext>("abilityContext")!.startAbility(str)
        .then((data) => {
          console.info(TAG + ' start successful. Data: ' + data);
        })
        .catch((error: BusinessError) => {
          console.error(TAG + ' start failed. Cause: ' + JSON.stringify(error));
        })
      setTimeout(() => {
        let str1: Want = {
          "bundleName": "com.example.lifecycle_xts",
          "abilityName": "MainAbility2",
        }
        AppStorage.get<common.UIAbilityContext>("abilityContext")!.startAbility(str1)
          .then((data) => {
            console.info(TAG + ' start successful. Data: ' + data);
          })
          .catch((error: BusinessError) => {
            console.error(TAG + ' start failed. Cause: ' + JSON.stringify(error));
          })
      }, 700);
      setTimeout(() => {
        console.log(TAG + " firstCallback listKey : " + JSON.stringify(AppStorage.get<string[]>("list12")!));
        console.log(TAG + " firstCallback callbackid : " + JSON.stringify(AppStorage.get<number>("callbackid12")!));
        id1 = AppStorage.get<number>("callbackid12")!;
        console.log(TAG + " firstCallback id : " + JSON.stringify(id1));
        let para: common.AbilityResult = {
          resultCode: 2000,
          want: {
            "abilityName": "MainAbility12",
            "bundleName": "com.example.lifecycle_xts"
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
      }, 3000);
      setTimeout(() => {
        let str: Want = {
          "bundleName": "com.example.lifecycle_xts",
          "abilityName": "MainAbility12",
        }
        AppStorage.get<common.UIAbilityContext>("abilityContext")!.startAbility(str)
          .then((data) => {
            console.info(TAG + ' start successful. Data: ' + data);
          })
          .catch((error: BusinessError) => {
            console.error(TAG + ' start failed. Cause: ' + JSON.stringify(error));
          })
        setTimeout(() => {
          let str1: Want = {
            "bundleName": "com.example.lifecycle_xts",
            "abilityName": "MainAbility2",
          }
          AppStorage.get<common.UIAbilityContext>("abilityContext")!.startAbility(str1)
            .then((data) => {
              console.info(TAG + ' start successful. Data: ' + data);
            })
            .catch((error: BusinessError) => {
              console.error(TAG + ' start failed. Cause: ' + JSON.stringify(error));
            })
        }, 700);
      }, 4200);
      setTimeout(() => {
        console.log(TAG + " secondCallback listKey : " + JSON.stringify(AppStorage.get<string[]>("list12")!));
        console.log(TAG + " secondCallback callbackid : " + JSON.stringify(AppStorage.get<number>("callbackid12")!));
        id2 = AppStorage.get<number>("callbackid12")!;
        console.log(TAG + " secondCallback id : " + JSON.stringify(id2));
        let listTemp = JSON.stringify(AppStorage.get<string[]>("list12")!);
        console.log(TAG + " listTemp is :" + listTemp);
        expect(listTemp.indexOf("MainAbility2 onAbilityCreate") !== -1).assertTrue();
        expect(listTemp.indexOf("MainAbility2 onWindowStageCreate") !== -1).assertTrue();
        expect(listTemp.indexOf("MainAbility2 onAbilityForeground") !== -1).assertTrue();
        expect(listTemp.indexOf("MainAbility2 onAbilityBackground") !== -1).assertTrue();
        expect(listTemp.indexOf("MainAbility2 onWindowStageDestroy") !== -1).assertTrue();
        expect(listTemp.indexOf("MainAbility2 onAbilityDestroy") !== -1).assertTrue();
        expect(id1 + 1).assertEqual(id2);
        AppStorage.get<common.ApplicationContext>('applicationContext12')!
          .off("abilityLifecycle", id2, (error, data) => {
            console.log(TAG + ": unregisterAbilityLifecycleCallback success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
            console.log("------------Singlehap_LifeCycleTest_2000 END-------------");
            done();
          });
      }, 7500);
    });

    /*
    * @tc.number  Singlehap_LifeCycleTest_2100
    * @tc.name    Register in abilityA,register in abilityB, starting and termination abilityC,
                  termination abilityB、abilityA, Re-register in abilityA、abilityB
    * @tc.desc    Function test
    * @tc.level   0
    */
    it("Singlehap_LifeCycleTest_2100", 0, async (done: Function) => {
      console.log("------------Singlehap_LifeCycleTest_2100 START-------------");
      TAG = "Singlehap_LifeCycleTest_2100";
      let id1: number;
      let str: Want = {
        "bundleName": "com.example.lifecycle_xts",
        "abilityName": "MainAbility1",
      }
      AppStorage.get<common.UIAbilityContext>("abilityContext")!.startAbility(str)
        .then((data) => {
          console.info(TAG + ' start successful. Data: ' + data);
        })
        .catch((error: BusinessError) => {
          console.error(TAG + ' start failed. Cause: ' + JSON.stringify(error));
        })
      setTimeout(() => {
        let str2: Want = {
          "bundleName": "com.example.lifecycle_xts",
          "abilityName": "MainAbility2",
        }
        AppStorage.get<common.UIAbilityContext>("abilityContext")!.startAbility(str2)
          .then((data) => {
            console.info(TAG + ' start successful. Data: ' + data);
          })
          .catch((error: BusinessError) => {
            console.error(TAG + ' start failed. Cause: ' + JSON.stringify(error));
          })
      }, 700);
      setTimeout(() => {
        console.log(TAG + " firstCallback listKey1 : " + JSON.stringify(AppStorage.get<string[]>("list1")!));
        console.log(TAG + " firstCallback callbackid1 : " + JSON.stringify(AppStorage.get<number>("callbackid1")!));
        id1 = AppStorage.get<number>("callbackid1")!;
        console.log(TAG + " firstCallback id1 : " + JSON.stringify(id1));
        let para: common.AbilityResult = {
          resultCode: 2100,
          want: {
            "abilityName": "MainAbility1",
            "bundleName": "com.example.lifecycle_xts"
          }
        }
        console.log(TAG + " terminateSelfwithresult para: " + JSON.stringify(para));
        AppStorage.get<common.UIAbilityContext>("ability1context")!.terminateSelfWithResult(para)
          .then((data) => {
            console.log(TAG + " terminateSelfwithresult successful data: " + JSON.stringify(data));
          })
          .catch((error: BusinessError) => {
            console.log(TAG + " terminateSelfwithresult error: " + JSON.stringify(error));
          });
      }, 3500);
      setTimeout(() => {
        console.log(TAG + " secondCallback callbackid1 : " + JSON.stringify(AppStorage.get<number>("callbackid1")!));
        let listTemp = JSON.stringify(AppStorage.get<string[]>("list1")!);
        console.log(TAG + " listTemp is :" + listTemp);
        expect(listTemp.indexOf("MainAbility2 onAbilityCreate") !== -1).assertTrue();
        expect(listTemp.indexOf("MainAbility2 onWindowStageCreate") !== -1).assertTrue();
        expect(listTemp.indexOf("MainAbility2 onAbilityForeground") !== -1).assertTrue();
        expect(listTemp.indexOf("MainAbility2 onAbilityBackground") !== -1).assertTrue();
        expect(listTemp.indexOf("MainAbility2 onWindowStageDestroy") !== -1).assertTrue();
        expect(listTemp.indexOf("MainAbility2 onAbilityDestroy") !== -1).assertTrue();
        AppStorage.get<common.ApplicationContext>("applicationContext1")!
          .off("abilityLifecycle",AppStorage.get<number>("callbackid1")!, (error, data) => {
            console.log(TAG + ": unregisterAbilityLifecycleCallback success, err: " + JSON.stringify(error) + ",data: " + JSON.stringify(data));
            console.log("------------Singlehap_LifeCycleTest_2100 END-------------");
            done();
          });
      }, 7500);
    });
  })
}
