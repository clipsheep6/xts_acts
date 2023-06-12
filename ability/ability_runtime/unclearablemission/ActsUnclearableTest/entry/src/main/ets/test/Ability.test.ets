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
      setTimeout(function(){
        console.info("sleep 500ms");
      },1000)
      var cmd = "aa start -b com.example.missionaapp -a EntryAbility ";
      abilityDelegator.executeShellCommand(cmd, (err: any, d: any) => {
        console.info("executeShellCommand : err : " + JSON.stringify(err), " data : " + JSON.stringify(d));
      })
      TAGA = 1;
      setTimeout(function(){
        console.info("sleep 500ms");
      },1000)
      var cmd = "aa start -b com.example.missionaapp -a EntryAbility ";
      abilityDelegator.executeShellCommand(cmd, (err: any, d: any) => {
        console.info("executeShellCommand : err : " + JSON.stringify(err), " data : " + JSON.stringify(d));
      })
      TAGB = 1;
      setTimeout(function(){
        console.info("sleep 500ms");
      },1000)
      var cmd = "aa start -b com.example.missioncapp -a EntryAbility ";
      abilityDelegator.executeShellCommand(cmd, (err: any, d: any) => {
        console.info("executeShellCommand : err : " + JSON.stringify(err), " data : " + JSON.stringify(d));
      })
      setTimeout(function(){
        console.info("sleep 500ms");
      },1000)
      var cmd = "aa start -b com.example.missiondapp -a EntryAbility ";
      abilityDelegator.executeShellCommand(cmd, (err: any, d: any) => {
        console.info("executeShellCommand : err : " + JSON.stringify(err), " data : " + JSON.stringify(d));
      })
      setTimeout(function(){
        console.info("sleep 500ms");
      },1000)
    })
    it('ActsUnclearableTest_1',0, function () {
      missionManager.getMissionInfos("", 10, (error, missions) => {
        var i =0;
        for(i;i < missions.length;i++) {
          if(missions[i].want.bundleName == "com.example.missionaapp") {
            missionAID = missions[i].missionId ;
            break;
          }
        }
        for(i;i < 120;i++) {
        }
        missionManager.getMissionInfo("", missionAID, (error, mission) => {
          expect(mission.unclearable).assertTrue()
        })
      })
      missionManager.getMissionInfos("", 10, (error, missions) => {
        var i =0;
        for(i;i < missions.length;i++) {
          if(missions[i].want.bundleName == "com.example.missionbapp") {
            missionBID = missions[i].missionId ;
            break;
          }
        }
        for(i;i < 120;i++) {
        }
        missionManager.getMissionInfo("", missionBID, (error, mission) => {
          expect(mission.unclearable).assertFalse()
        })
      })
    })
    it('ActsUnclearableTest_2',0, function () {
      if (TAGA == 1) {
        let longAPri = 0;
        let longAAft = 0;
        missionManager.getMissionInfos("", 10, (error, missions) => {
          longAPri = missions.length;
          if (missions[1].want.bundleName == "com.example.missionaapp"){
            missionManager.clearMission(missions[1].missionId).then(() => {
              console.log("clearMissionA is called ");
              longAAft = missions.length;
            })
          }
          else{
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
        var i =0;
        for(i;i < missions.length;i++) {
          if(missions[i].want.bundleName == "com.example.missionaapp") {
            missionAID = missions[i].missionId ;
            break;
          }
        }
        for(i;i < 120;i++) {
        }
        missionManager.getMissionInfo("", missionAID, (error, mission) => {
          expect(mission.unclearable).assertTrue()
        })
      })
    })
    it('ActsUnclearableTest_3',0, function () {
      if (TAGB == 1) {
        let longBPri = 0;
        let longBAft = 0;
        missionManager.getMissionInfos("", 10, (error, missions) => {
          longBPri = missions.length;
          if (missions[1].want.bundleName == "com.example.missionbapp"){
            missionManager.clearMission(missions[1].missionId).then(() => {
              console.log("clearMissionB is called ");
              longBAft = missions.length;
            })
          }
          else{
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
        var i =0;
        for(i;i < missions.length;i++) {
          if(missions[i].want.bundleName == "com.example.missionbapp") {
            missionBID = missions[i].missionId ;
            break;
          }
        }
        for(i;i < 120;i++) {
        }
        missionManager.getMissionInfo("", missionBID, (error, mission) => {
          expect(mission.unclearable).assertFalse()
        })
      })
    })
    it('ActsUnclearableTest_4',0, function () {
      missionManager.clearAllMissions().then(() => {
        console.log("clearAllMissions is called ");
      });
      missionManager.getMissionInfos("", 10, (error, missions) => {
        var i =0;
        for(i;i < missions.length;i++) {
          if(missions[i].want.bundleName == "com.example.missionaapp") {
            missionAID = missions[i].missionId ;
            break;
          }
        }
        for(i;i < 120;i++) {
        }
        missionManager.getMissionInfo("", missionAID, (error, mission) => {
          expect(mission.unclearable).assertTrue()
        })
      })
      missionManager.getMissionInfos("", 10, (error, missions) => {
        var i =0;
        for(i;i < missions.length;i++) {
          if(missions[i].want.bundleName == "com.example.missionbapp") {
            missionBID = missions[i].missionId ;
            break;
          }
        }
        for(i;i < 120;i++) {
        }
        missionManager.getMissionInfo("", missionBID, (error, mission) => {
          expect(mission.unclearable).assertFalse()
        })
      })
      missionManager.getMissionInfos("", 10, (error, missions) => {
        var i =0;
        for(i;i < missions.length;i++) {
          if(missions[i].want.bundleName == "com.example.missioncapp") {
            missionCID = missions[i].missionId ;
            break;
          }
        }
        for(i;i < 120;i++) {
        }
        missionManager.getMissionInfo("", missionCID, (error, mission) => {
          expect(mission.unclearable).assertFalse()
        })
      })
      missionManager.getMissionInfos("", 10, (error, missions) => {
        var i =0;
        for(i;i < missions.length;i++) {
          if(missions[i].want.bundleName == "com.example.missiondapp") {
            missionDID = missions[i].missionId ;
            break;
          }
        }
        for(i;i < 120;i++) {
        }
        missionManager.getMissionInfo("", missionDID, (error, mission) => {
          expect(mission.unclearable).assertTrue()
        })
      })
    })
  })
}
