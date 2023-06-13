/*
 * Copyright (c) 2023 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WappListAANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
import AbilityDelegatorRegistry from '@ohos.application.abilityDelegatorRegistry'
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium'
import missionManager from '@ohos.app.ability.missionManager'

let TAGA = 0;
let TAGB = 0;
let missionAID = 0;
let missionBID = 0;
let missionCID = 0;
let missionDID = 0;

export default function abilityTest() {
  var abilityDelegator = undefined;
  describe('ActsUnclearableTest', function () {
    beforeEach(function () {
      abilityDelegator = AbilityDelegatorRegistry.getAbilityDelegator()
      setTimeout(function () {
        console.info("sleep 1000ms");
      }, 1000)
      var cmd = "aa start -b com.example.missionaapp -a EntryAbility ";
      abilityDelegator.executeShellCommand(cmd, (err: any, d: any) => {
        console.info("executeShellCommand : err : " + JSON.stringify(err), " data : " + JSON.stringify(d));
      })
      TAGA = 1;
      setTimeout(function () {
        console.info("sleep 1000ms");
      }, 1000)
      var cmd = "aa start -b com.example.missionaapp -a EntryAbility ";
      abilityDelegator.executeShellCommand(cmd, (err: any, d: any) => {
        console.info("executeShellCommand : err : " + JSON.stringify(err), " data : " + JSON.stringify(d));
      })
      TAGB = 1;
      setTimeout(function () {
        console.info("sleep 1000ms");
      }, 1000)
      var cmd = "aa start -b com.example.missioncapp -a EntryAbility ";
      abilityDelegator.executeShellCommand(cmd, (err: any, d: any) => {
        console.info("executeShellCommand : err : " + JSON.stringify(err), " data : " + JSON.stringify(d));
      })
      setTimeout(function () {
        console.info("sleep 1000ms");
      }, 1000)
      var cmd = "aa start -b com.example.missiondapp -a EntryAbility ";
      abilityDelegator.executeShellCommand(cmd, (err: any, d: any) => {
        console.info("executeShellCommand : err : " + JSON.stringify(err), " data : " + JSON.stringify(d));
      })
      setTimeout(function () {
        console.info("sleep 1000ms");
      }, 1000)
    })

    /*
     * @tc.number: ActsUnclearableTest_0100
     * @tc.name: Support for manually deleting tasks
     * @tc.desc: Support task configuration not manually deleted by users
     */
    it('ActsUnclearableTest_0100', 0, async function (done) {
      missionManager.getMissionInfos("", 10, (error, missions) => {
        var i = 0;
        for (i; i < missions.length; i++) {
          if (missions[i].want.bundleName == "com.example.missionaapp") {
            missionAID = missions[i].missionId;
            break;
          }
        }
        setTimeout(function () {
          console.info("sleep 1ms");
        }, 1)
        missionManager.getMissionInfo("", missionAID, (error, mission) => {
          expect(mission.unclearable).assertTrue()
        })
      })
      missionManager.getMissionInfos("", 10, (error, missions) => {
        var i = 0;
        for (i; i < missions.length; i++) {
          if (missions[i].want.bundleName == "com.example.missionbapp") {
            missionBID = missions[i].missionId;
            break;
          }
        }
        setTimeout(function () {
          console.info("sleep 1ms");
        }, 1)
        missionManager.getMissionInfo("", missionBID, (error, mission) => {
          expect(mission.unclearable).assertFalse()
        })
      })
      done();
    })

    /*
     * @tc.number: ActsUnclearableTest_0200
     * @tc.name: Support for manually deleting tasks
     * @tc.desc: Support task configuration not manually deleted by users
     */
    it('ActsUnclearableTest_0200', 0, async function (done) {
      if (TAGA == 1) {
        let longAPri = 0;
        let longAAft = 0;
        missionManager.getMissionInfos("", 10, (error, missions) => {
          longAPri = missions.length;
          if (missions[1].want.bundleName == "com.example.missionaapp") {
            missionManager.clearMission(missions[1].missionId).then(() => {
              console.log("clearMissionA is called ");
              longAAft = missions.length;
            })
          }
          else {
            missionManager.clearMission(missions[2].missionId).then(() => {
              console.log("clearMissionA is called ");
              longAAft = missions.length;
            })
          }
        })
        if (longAPri == longAAft + 1) {
          TAGA = 0;
        }
      }
      missionManager.getMissionInfos("", 10, (error, missions) => {
        var flag = false;
        var i = 0;
        for (i; i < missions.length; i++) {
          if (missions[i].want.bundleName == "com.example.missionaapp") {
            missionAID = missions[i].missionId;
            flag = true;
            break;
          }
        }
        expect(flag).assertTrue()
      })
      done();
    })

    /*
     * @tc.number: ActsUnclearableTest_0300
     * @tc.name: Support for manually deleting tasks
     * @tc.desc: Support task configuration not manually deleted by users
     */
    it('ActsUnclearableTest_0300', 0, async function (done) {
      if (TAGB == 1) {
        let longBPri = 0;
        let longBAft = 0;
        missionManager.getMissionInfos("", 10, (error, missions) => {
          longBPri = missions.length;
          if (missions[1].want.bundleName == "com.example.missionbapp") {
            missionManager.clearMission(missions[1].missionId).then(() => {
              console.log("clearMissionB is called ");
              longBAft = missions.length;
            })
          }
          else {
            missionManager.clearMission(missions[2].missionId).then(() => {
              console.log("clearMissionB is called ");
              longBAft = missions.length;
            })
          }
        })
        if (longBPri == longBAft + 1) {
          TAGB = 0;
        }
      }
      missionManager.getMissionInfos("", 10, (error, missions) => {
        var flag = false;
        var i = 0;
        for (i; i < missions.length; i++) {
          if (missions[i].want.bundleName == "com.example.missionbapp") {
            missionBID = missions[i].missionId;
            flag = true;
            break;
          }
        }
        expect(flag).assertFalse()
      })
      done();
    })

    /*
     * @tc.number: ActsUnclearableTest_0400
     * @tc.name: Support for manually deleting tasks
     * @tc.desc: Support task configuration not manually deleted by users
     */
    it('ActsUnclearableTest_0400', 0, async function (done) {
      missionManager.clearAllMissions().then(() => {
        console.log("clearAllMissions is called ");
      });
      setTimeout(function () {
        console.info("sleep 1ms");
      }, 1)
      missionManager.getMissionInfos("", 10, (error, missions) => {
        var flag = false;
        var i = 0;
        for (i; i < missions.length; i++) {
          if (missions[i].want.bundleName == "com.example.missionaapp") {
            missionAID = missions[i].missionId;
            flag = true;
            break;
          }
        }
        expect(flag).assertTrue()
      })
      setTimeout(function () {
        console.info("sleep 1ms");
      }, 1)
      missionManager.getMissionInfos("", 10, (error, missions) => {
        var flag = false;
        var i = 0;
        for (i; i < missions.length; i++) {
          if (missions[i].want.bundleName == "com.example.missionbapp") {
            missionBID = missions[i].missionId;
            flag = true;
            break;
          }
        }
        expect(flag).assertFalse()
      })
      setTimeout(function () {
        console.info("sleep 1ms");
      }, 1)
      missionManager.getMissionInfos("", 10, (error, missions) => {
        var flag = false;
        var i = 0;
        for (i; i < missions.length; i++) {
          if (missions[i].want.bundleName == "com.example.missioncapp") {
            missionCID = missions[i].missionId;
            flag = true;
            break;
          }
        }
        expect(flag).assertFalse()
      })
      setTimeout(function () {
        console.info("sleep 1ms");
      }, 1)
      missionManager.getMissionInfos("", 10, (error, missions) => {
        var flag = false;
        var i = 0;
        for (i; i < missions.length; i++) {
          if (missions[i].want.bundleName == "com.example.missiondapp") {
            missionDID = missions[i].missionId;
            flag = true;
            break;
          }
        }
        expect(flag).assertTrue()
      })
      done();
    })
  })
}
