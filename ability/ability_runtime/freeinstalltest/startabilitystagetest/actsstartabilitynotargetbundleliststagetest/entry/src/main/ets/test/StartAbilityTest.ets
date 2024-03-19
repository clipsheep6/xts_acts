/**
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
import ability from '@ohos.app.ability.UIAbility';
import wantConstant from '@ohos.ability.wantConstant';
import common from '@ohos.app.ability.common';
import abilityDelegatorRegistry from '@ohos.app.ability.abilityDelegatorRegistry';
import { BusinessError } from '@ohos.base';
import Want from '@ohos.app.ability.Want';

function sleep(time: number) {
  return new Promise<void>((resolve) => setTimeout(resolve, time));
}

async function abilityForeground(tag: string) {
  AppStorage.get<abilityDelegatorRegistry.AbilityDelegator>("delegator")!.doAbilityForeground(AppStorage.get<ability>("ability")!, (err: BusinessError) => {
    console.info(tag + "doAbilityForeground err:" + JSON.stringify(err));
  });
}

export default function startAbilityTest(abilityContext: common.UIAbilityContext) {
  describe('startAbilityTest', () => {
    console.info("-------------Stage model--> startNoTargetBundleListXTS Test start----------------");

    let TAG = "";

    AppStorage.get<abilityDelegatorRegistry.AbilityDelegator>("delegator")!.getCurrentTopAbility((err, data) => {
      console.info("getCurrentTopAbility err: " + JSON.stringify(err) + ", data: " + JSON.stringify(data));
      AppStorage.setOrCreate<ability>("ability", data);
    });


    beforeAll(async (done: Function) => {
      console.info("StartAbilityTest before all called");
      let cmd = "bm install -p data/test/MockService.hap";
      console.info("cmd : " + cmd)
      AppStorage.get<abilityDelegatorRegistry.AbilityDelegator>("delegator")!.executeShellCommand(cmd, (err, d) => {
        console.info("executeShellCommand : err : " + JSON.stringify(err), " data : " + JSON.stringify(d));
      })
      await sleep(500);
      let cmd1 = "mkdir -p /data/app/el2/100/base/com.ohos.hag.famanager/haps/entry";
      AppStorage.get<abilityDelegatorRegistry.AbilityDelegator>("delegator")!.executeShellCommand(cmd1, (err, d) => {
        console.info("executeShellCommand1 : err : " + JSON.stringify(err), " data : " + JSON.stringify(d));
      })
      await sleep(500);
      let cmd2 = "mkdir -p /data/app/el2/100/base/com.ohos.hag.famanager/haps/entry/files";
      AppStorage.get<abilityDelegatorRegistry.AbilityDelegator>("delegator")!.executeShellCommand(cmd2, (err, d) => {
        console.info("executeShellCommand2 : err : " + JSON.stringify(err), " data : " + JSON.stringify(d));
      })
      await sleep(500);
      let cmd3 = "cp data/test/AtomizationStageEntry.hap /data/app/el2/100/base/com.ohos.hag.famanager/haps/" + "entry/files";
      AppStorage.get<abilityDelegatorRegistry.AbilityDelegator>("delegator")!.executeShellCommand(cmd3, (err, d) => {
        console.info("executeShellCommand3 : err : " + JSON.stringify(err), " data : " + JSON.stringify(d));
        done();
      })
    });

    afterEach(async (done: Function) => {
      console.info("StartAbilityTest after each called");
      if ("FreeInstall_Stage_Local_StartAbility_2700" === TAG) {
        let cmd4 = "bm uninstall -n com.example.qianyiyingyong.hmservice";
        AppStorage.get<abilityDelegatorRegistry.AbilityDelegator>("delegator")!.executeShellCommand(cmd4, (err, d) => {
          console.info("executeShellCommand4 : err : " + JSON.stringify(err), " data : " + JSON.stringify(d));
        })
        await sleep(500);
      }

      if ("FreeInstall_Stage_Local_StartAbility_2800" === TAG) {
        let cmd5 = "bm uninstall -n com.ohos.hag.famanager";
        AppStorage.get<abilityDelegatorRegistry.AbilityDelegator>("delegator")!.executeShellCommand(cmd5, (err, d) => {
          console.info("executeShellCommand5 : err : " + JSON.stringify(err), " data : " + JSON.stringify(d));
        })
      }
      await sleep(500);
      done();
    });

    /*
     * @tc.number  FreeInstall_Stage_Local_StartAbility_2600
     * @tc.name    Atomized services are not added to the white list, and cross application installation
                   is not required
     * @tc.desc    Function test
     * @tc.level   0
     */
    it("FreeInstall_Stage_Local_StartAbility_2600", 0, async (done: Function) => {
      console.info("------------start FreeInstall_Stage_Local_StartAbility_2600-------------");
      TAG = "FreeInstall_Stage_Local_StartAbility_2600";
      let flag = 0;
      let str: Want = {
        "bundleName": "com.example.qianyiyingyong.hmservice",
        "abilityName": "com.example.qianyiyingyong.MainAbility",
        "moduleName": "entry",
        "flags": wantConstant.Flags.FLAG_INSTALL_ON_DEMAND,
      }
      AppStorage.get<common.UIAbilityContext>("abilityContext")!.startAbility(str)
        .then((data) => {
          console.log(TAG + ": startAbility success. data: " + JSON.stringify(data));
          flag = 1;
          expect(flag == 1).assertTrue();
        })
        .catch((error: BusinessError) => {
          console.log(TAG + ": startAbility fail. err: " + JSON.stringify(error));
        });
      await sleep(2000);
      console.info("------------end FreeInstall_Stage_Local_StartAbility_2600-------------");
      done();
    });

    /*
     * @tc.number  FreeInstall_Stage_Local_StartAbility_2700
     * @tc.name    Atomized services are not added to the white list,
                    and atomized HAP packages are pulled across applications
     * @tc.desc    Function test
     * @tc.level   0
     */
    it("FreeInstall_Stage_Local_StartAbility_2700", 0, async (done: Function) => {
      console.info("------------start FreeInstall_Stage_Local_StartAbility_2700-------------");
      TAG = "FreeInstall_Stage_Local_StartAbility_2700";
      let flag = 0;
      let cmd2700 = "bm install -p data/test/AtomizationStageEntry.hap";
      AppStorage.get<abilityDelegatorRegistry.AbilityDelegator>("delegator")!.executeShellCommand(cmd2700, (err, d) => {
        console.info("executeShellCommand2700 : err : " + JSON.stringify(err), " data : " + JSON.stringify(d));
      })
      await sleep(500);
      abilityForeground(TAG);
      await sleep(1000);
      let str: Want = {
        "bundleName": "com.example.qianyiyingyong.hmservice",
        "abilityName": "com.example.qianyiyingyong.MainAbility",
        "moduleName": "entry",
        "flags": wantConstant.Flags.FLAG_INSTALL_ON_DEMAND,
      }
      AppStorage.get<common.UIAbilityContext>("abilityContext")!.startAbility(str)
        .then((data) => {
          console.log(TAG + ": startAbility success. data: " + JSON.stringify(data));
          flag = 1;
          expect(flag == 1).assertTrue();
        })
        .catch((error: BusinessError) => {
          console.log(TAG + ": startAbility fail. err: " + JSON.stringify(error));
        });
      await sleep(2000);
      console.info("------------end FreeInstall_Stage_Local_StartAbility_2700-------------");
      done();
    });

    /*
    * @tc.number  FreeInstall_Stage_Local_StartAbility_2800
    * @tc.name    Atomized services are not added to the white list,
                   same application pull up the different ability.
    * @tc.desc    Function test
    * @tc.level   0
    */
    it("FreeInstall_Stage_Local_StartAbility_2800", 0, async (done: Function) => {
      console.info("------------start FreeInstall_Stage_Local_StartAbility_2800-------------");
      TAG = "FreeInstall_Stage_Local_StartAbility_2800";
      let flag = 0;
      let cmd2800 = "rm /data/app/el2/100/base/com.ohos.hag.famanager/haps/entry/files/AtomizationStageEntry.hap";
      AppStorage.get<abilityDelegatorRegistry.AbilityDelegator>("delegator")!.executeShellCommand(cmd2800, (err, d) => {
        console.info("executeShellCommand2800 : err : " + JSON.stringify(err), " data : " + JSON.stringify(d));
      })
      await sleep(500);
      let cmd2801 = "cp data/test/StageMyApplication1.hap /data/app/el2/100/base/com.ohos.hag.famanager" + "/haps/entry/files";
      AppStorage.get<abilityDelegatorRegistry.AbilityDelegator>("delegator")!.executeShellCommand(cmd2801, (err, d) => {
        console.info("executeShellCommand2801 : err : " + JSON.stringify(err), " data : " + JSON.stringify(d));
      })
      await sleep(500);
      abilityForeground(TAG);
      await sleep(1000);
      let str: Want = {
        "bundleName": "com.open.harmony.packagemag.hmservice",
        "abilityName": "MainAbility",
        "moduleName": "myapplication1",
        "flags": wantConstant.Flags.FLAG_INSTALL_ON_DEMAND,
      }
      AppStorage.get<common.UIAbilityContext>("abilityContext")!.startAbility(str)
        .then((data) => {
          console.log(TAG + ": startAbility success. data: " + JSON.stringify(data));
          flag = 1;
          expect(flag == 1).assertTrue();
        })
        .catch((error: BusinessError) => {
          console.log(TAG + ": startAbility fail. err: " + JSON.stringify(error));
        });
      await sleep(2000);
      console.info("------------end FreeInstall_Stage_Local_StartAbility_2800-------------");
      done();
    });
    console.info("-------------Stage model--> startNoTargetBundleListXTS Test end----------------");
  })
}