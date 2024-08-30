/*
 * Copyright (C) 2024 Huawei Device Co., Ltd.
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

import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium';
import { missionManager } from '@kit.AbilityKit';
import { image } from '@kit.ImageKit';
import { abilityDelegatorRegistry } from '@kit.TestKit';
import { BusinessError } from '@kit.BasicServicesKit';
import { commonEventManager } from '@kit.BasicServicesKit';

const delegator = abilityDelegatorRegistry.getAbilityDelegator()
const TAG = 'MissionManagerTestTAG  ------>  ';
const TESTAPPLICATIONBUNDLENAME: string = "net.openvalley.xts_acts_project";
const WINGMANAPPLICATIONBUNDLENAME: string = "com.ohos.missionmanagerwingman";
let testApplicationLifeCycle: string[] = [];
let wingmanApplicationLifeCycle: string[] = [];

// sleep function
async function sleep(ms: number) {
  return new Promise<void>((resolve) => {
    setTimeout(resolve, ms);
  });
}

async function getMissionInfos(): Promise<missionManager.MissionInfo[]> {
  return await missionManager.getMissionInfos('', 100);
}

export default function missionManagerTest() {
  describe('MissionManagerTest', () => {
    // Defines a test suite. Two parameters are supported: test suite name and test suite function.
    beforeAll(async () => {
      // Presets an action, which is performed only once before all test cases of the test suite start.
      // This API supports only one parameter: preset action function.
      let wingmanCommonEventSubscribeInfo : commonEventManager.CommonEventSubscribeInfo = {
        events: ['wingmanApplicationCommonEvent']
      }
      let wingmanCommonEventSubscriber = await commonEventManager.createSubscriber(wingmanCommonEventSubscribeInfo);
      commonEventManager.subscribe(wingmanCommonEventSubscriber, (err: BusinessError, data: commonEventManager.CommonEventData) => {
        console.log(TAG + `wingmanApplicationCommonEvent onReceive, err: ${JSON.stringify(err)}, data: ${JSON.stringify(data)}`);
        if (!err) {
          wingmanApplicationLifeCycle.push(data.parameters?.lifeCycle);
        }
      })

      let testCommonEventSubscribeInfo : commonEventManager.CommonEventSubscribeInfo = {
        events: ['testApplicationCommonEvent']
      }
      let testCommonEventSubscriber = await commonEventManager.createSubscriber(testCommonEventSubscribeInfo);
      commonEventManager.subscribe(testCommonEventSubscriber, (err: BusinessError, data: commonEventManager.CommonEventData) => {
        console.log(TAG + `testCommonEventSubscriber onReceive, err: ${JSON.stringify(err)}, data: ${JSON.stringify(data)}`);
        if (!err) {
          testApplicationLifeCycle.push(data.parameters?.lifeCycle);
        }
      })
    })
    beforeEach(async () => {
      // Presets an action, which is performed before each unit test case starts.
      // The number of execution times is the same as the number of test cases defined by **it**.
      // This API supports only one parameter: preset action function.
      try {
        let selfMissionID = (await getMissionInfos()).filter((item) => {
          return item.want.bundleName === TESTAPPLICATIONBUNDLENAME
        })[0].missionId;
        console.log(TAG + "selfMissionID: " + selfMissionID);
        await missionManager.lockMission(selfMissionID);
        console.log(TAG + `lockMission(${selfMissionID}) finish`);
        await missionManager.clearAllMissions();
        console.log(TAG + `clearAllMissions finish`);
        console.log(TAG + "beforeEach finish");
      } catch (e) {
        console.error(TAG + "beforeEach error: " + JSON.stringify(e));
      }
    })
    afterEach(() => {
      // Presets a clear action, which is performed after each unit test case ends.
      // The number of execution times is the same as the number of test cases defined by **it**.
      // This API supports only one parameter: clear action function.
      console.log(TAG + "afterEach start");
      testApplicationLifeCycle = [];
      wingmanApplicationLifeCycle = [];
      console.log(TAG + "afterEach finish");
    })
    afterAll(() => {
      // Presets a clear action, which is performed after all test cases of the test suite end.
      // This API supports only one parameter: clear action function.
    })
    it('SUB_Ability_AbilityRuntime_MissionManager_MissionTask_8300', 0, async () => {
      // Defines a test case. This API supports three parameters: test case name, filter parameter, and test case function.
      let listener: missionManager.MissionListener = {
        onMissionCreated: (mission: number) => {
          console.log(TAG + '--------onMissionCreated-------');
        },
        onMissionDestroyed: (mission: number) => {
          console.log(TAG + '--------onMissionDestroyed-------');
        },
        onMissionSnapshotChanged: (mission: number) => {
          console.log(TAG + '--------onMissionSnapshotChanged-------');
        },
        onMissionMovedToFront: (mission: number) => {
          console.log(TAG + '--------onMissionMovedToFront-------');
        },
        onMissionIconUpdated: (mission: number, icon: image.PixelMap) => {
          console.log(TAG + '--------onMissionIconUpdated-------');
        },
        onMissionClosed: (mission: number) => {
          console.log(TAG + '--------onMissionClosed-------');
        },
        onMissionLabelUpdated: (mission: number) => {
          console.log(TAG + '--------onMissionLabelUpdated-------');
        }
      };
      let missionID = missionManager.on('mission', listener);
      console.log(TAG + 'missionID: ' + missionID);
      if (missionID === 1) {
        let wingmanMissionID: number = -1;
        await delegator.startAbility({
          bundleName: WINGMANAPPLICATIONBUNDLENAME,
          abilityName: 'EntryAbility',
        })
          .then(async () => {
            console.error(TAG + `startAbility successfully`);
            wingmanMissionID = (await getMissionInfos()).filter((item) => {
              return item.want.bundleName === WINGMANAPPLICATIONBUNDLENAME
            })[0].missionId;
          })
          .catch((e: BusinessError) => {
            console.error(TAG + `startAbility error: ` + JSON.stringify(e));
            expect().assertFail();
          })
        await sleep(2000);
        console.debug(TAG + `testApplicationlifeCycle: ${JSON.stringify(testApplicationLifeCycle)}, wingmanApplicationLifeCycle: ${JSON.stringify(wingmanApplicationLifeCycle)}`);
        let isWingmanApplicationOnCreateLifeCycle: boolean = wingmanApplicationLifeCycle.some((item) => {
          return item === "onCreate"
        })
        let isWingmanApplicationOnWindowStageCreateLifeCycle: boolean = wingmanApplicationLifeCycle.some((item) => {
          return item === "onWindowStageCreate"
        })
        let isWingmanApplicationOnForegroundLifeCycle: boolean = wingmanApplicationLifeCycle.some((item) => {
          return item === "onForeground"
        })
        let isTestApplicationOnForegroundLifeCycle: boolean = testApplicationLifeCycle.some((item) => {
          return item === "onForeground"
        })
        let isTestApplicationOnBackgroundLifeCycle: boolean = testApplicationLifeCycle.some((item) => {
          return item === "onBackground"
        })
        console.debug(TAG + `isWingmanApplicationOnCreateLifeCycle: ${isWingmanApplicationOnCreateLifeCycle}, isWingmanApplicationOnWindowStageCreateLifeCycle: ${isWingmanApplicationOnWindowStageCreateLifeCycle}, isWingmanApplicationOnForegroundCreateLifeCycle: ${isWingmanApplicationOnForegroundLifeCycle}, isTestApplicationOnForegroundLifeCycle: ${isTestApplicationOnForegroundLifeCycle}, isTestApplicationOnBackgroundLifeCycle: ${isTestApplicationOnBackgroundLifeCycle}`);
        if (isWingmanApplicationOnCreateLifeCycle && isWingmanApplicationOnWindowStageCreateLifeCycle && isWingmanApplicationOnForegroundLifeCycle && isTestApplicationOnForegroundLifeCycle && isTestApplicationOnBackgroundLifeCycle) {
          console.log(TAG + "SUB_Ability_AbilityRuntime_MissionManager_MissionTask_8300 checkLifeCycle successfully");
          await missionManager.moveMissionToFront(wingmanMissionID)
            .then(() => {
              console.log(TAG + `moveMissionToFront(${wingmanMissionID}) finish`);
              expect().assertFail();
            })
            .catch((e: BusinessError) => {
              console.error(TAG + `moveMissionToFront(${wingmanMissionID}) error: ` + JSON.stringify(e));
              expect(e.code).assertEqual(16000050);
            });
        } else {
          console.error(TAG + "SUB_Ability_AbilityRuntime_MissionManager_MissionTask_8300 checkLifeCycle fail");
          expect().assertFail();
        }
      } else {
        expect().assertFail();
      }
    })
  })
}