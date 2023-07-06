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
  let timeout = 10000;
  describe('ActsUnclearableTest', function () {
    beforeEach(function () {
    })
    afterEach(async function () {
      var abilityDelegator;
      abilityDelegator = AbilityDelegatorRegistry.getAbilityDelegator();
      let cmd1 = 'pkill -f com.example.applicationstatechangeonereply'
      let cmd2 = 'pkill -f com.example.applicationstatechangetworeply'
      let cmd3 = 'hilog -r'
      await abilityDelegator.executeShellCommand(cmd1, (err : any, data : any) => {
        console.info("executeShellCommand1 callback");
      });
      await abilityDelegator.executeShellCommand(cmd2, (err : any, data : any) => {
        console.info("executeShellCommand2 callback");
      });
      await abilityDelegator.executeShellCommand(cmd3, (err : any, data : any) => {
        console.info("executeShellCommand3 callback");
      });
    })

    /*
     * @tc.number: ActsUnclearableTest_0100
     * @tc.name: Support for manually deleting tasks
     * @tc.desc: Support task configuration not manually deleted by users
     */
  
    it('ActsUnclearableTest_0100', 0, async function (done) {
      console.info("ActsUnclearableTest_0100 Start");
    
      setTimeout(() => {
        abilityDelegator = AbilityDelegatorRegistry.getAbilityDelegator();
        var cmd = "aa start -b com.example.missionaapp -a EntryAbility";
        abilityDelegator.executeShellCommand(cmd, async (err: any, d: any) => {
          console.info("executeShellCommand aacommand : err : " + JSON.stringify(err), " data : " + JSON.stringify(d));
          TAGA = 1;
        })
      },0)

      setTimeout(() => {
        abilityDelegator = AbilityDelegatorRegistry.getAbilityDelegator();
        var cmd = "aa start -b com.example.missionbapp -a EntryAbility";
        abilityDelegator.executeShellCommand(cmd, async (err: any, d: any) => {
          console.info("executeShellCommand aacommand : err : " + JSON.stringify(err), " data : " + JSON.stringify(d));
          TAGB = 1;
        })
      },100)

      setTimeout(() => {
        console.info("This is Mission!!!");

        missionManager.getMissionInfos("", 10, (error,missions) => {
          
          console.info("getMissionInfos is called, error = " + error);
          console.info("size = " + missions.length);
          console.info("missions = " + JSON.stringify(missions));

          var i = 0;
          for (i; i < missions.length; i++) {
            if (missions[i].want.bundleName == "com.example.missionaapp") {
              missionAID = missions[i].missionId;
            }
            else if (missions[i].want.bundleName == "com.example.missionbapp") {
              missionBID = missions[i].missionId;
            }
          }  
            missionManager.getMissionInfo("", missionAID, (error, mission) => {
            console.info("mission1.unclearable " + mission.unclearable);
            expect(mission.unclearable).assertTrue()
          })
          
            missionManager.getMissionInfo("", missionBID, (error, mission) => {
            console.info("mission2.unclearable " + mission.unclearable);
            expect(mission.unclearable).assertFalse()
          })
      });
    },1000)

    setTimeout(() => {
      console.info("Finish!!!!");
      done();
    },3000)
  }) 
  

    /*
     * @tc.number: ActsUnclearableTest_0200
     * @tc.name: Support for manually deleting tasks
     * @tc.desc: Support task configuration not manually deleted by users
     */
    


    it('ActsUnclearableTest_0200', 0, async function (done) {

      let TAGA = false
      console.info("ActsUnclearableTest_0200 Start");
      setTimeout(() => {

        abilityDelegator = AbilityDelegatorRegistry.getAbilityDelegator();
        var cmd = "aa start -b com.example.missionaapp -a EntryAbility";
        abilityDelegator.executeShellCommand(cmd, async (err: any, d: any) => {
          console.info("executeShellCommand aacommand : err : " + JSON.stringify(err), " data : " + JSON.stringify(d));
        })
      },0)
      setTimeout(() => {
        missionManager.getMissionInfos("", 10, (error, missions) => {
        for (let i = 0 ; i < missions.length; i++) {
          if (missions[i].want.bundleName == "com.example.missionaapp") {
              missionAID = missions[i].missionId;
              missionManager.clearMission(missionAID).then(() => {
                console.log("clearMissionA is called ");
            })
          }
        }
      })
      },500)

      setTimeout(() => {
          missionManager.getMissionInfos("",10,(error,missions) => {
            for (let i = 0; i < missions.length; i++) {
              if (missions[i].want.bundleName == "com.example.missionaapp") {
                TAGA = true;
            }
            }
          })
      },1000)

      setTimeout(() => {
        expect(TAGA).assertEqual(true);
      },2500)
      
      setTimeout(() => {
        console.info("Finish!!!!");
        done();
    },3000)
    })
    



    /*
     * @tc.number: ActsUnclearableTest_0300
     * @tc.name: Support for manually deleting tasks
     * @tc.desc: Support task configuration not manually deleted by users
     */
   
   
    it('ActsUnclearableTest_0300', 0, async function (done) {
      let TAGB = false;
      console.info("ActsUnclearableTest_0300 Start");
      setTimeout(() => {
        abilityDelegator = AbilityDelegatorRegistry.getAbilityDelegator();
        var cmd = "aa start -b com.example.missionbapp -a EntryAbility";
        abilityDelegator.executeShellCommand(cmd, async (err: any, d: any) => {
          console.info("executeShellCommand aacommand : err : " + JSON.stringify(err), " data : " + JSON.stringify(d));
        })
      },0)
      setTimeout(() => {
        missionManager.getMissionInfos("", 10, (error, missions) => {
        for (let i = 0 ; i < missions.length; i++) {
          if (missions[i].want.bundleName == "com.example.missionbapp") {
              missionBID = missions[i].missionId;
              missionManager.clearMission(missionBID).then(() => {
                console.log("clearMissionB is called ");
            })
          }
        }
      })
      },500)

      setTimeout(() => {
          missionManager.getMissionInfos("",10,(error,missions) => {
              for (let i = 0; i < missions.length; i++) {
                  if (missions[i].want.bundleName == "com.example.missionbapp") {
                    TAGB = true;
                }
              }
          })
      },1000)
      
      setTimeout(() => {
        expect(TAGB).assertEqual(false)
      },2500)

      setTimeout(() => {
        console.info("Finish!!!!");
        done();
    },3000)
    })
    
    

    /*
     * @tc.number: ActsUnclearableTest_0400
     * @tc.name: Support for manually deleting tasks
     * @tc.desc: Support task configuration not manually deleted by users
     */

    it('ActsUnclearableTest_0400', 0, async function (done) {

      let TAGA = false;
      let TAGB = false;
      let TAGC = false;
      let TAGD = false;

      setTimeout(() => {
        abilityDelegator = AbilityDelegatorRegistry.getAbilityDelegator();
        var cmd = "aa start -b com.example.missionaapp -a EntryAbility";
        abilityDelegator.executeShellCommand(cmd, async (err: any, d: any) => {
          console.info("executeShellCommanda aacommand : err : " + JSON.stringify(err), " data : " + JSON.stringify(d));
        })
      },30)
      setTimeout(() => {
        abilityDelegator = AbilityDelegatorRegistry.getAbilityDelegator();
        var cmd = "aa start -b com.example.missionbapp -a EntryAbility";
        abilityDelegator.executeShellCommand(cmd, async (err: any, d: any) => {
          console.info("executeShellCommandb aacommand : err : " + JSON.stringify(err), " data : " + JSON.stringify(d));
        })
      },200)


      setTimeout(() => {
        abilityDelegator = AbilityDelegatorRegistry.getAbilityDelegator();
        var cmd = "aa start -b com.example.missioncapp -a EntryAbility";
        abilityDelegator.executeShellCommand(cmd, async (err: any, d: any) => {
          console.info("executeShellCommandc aacommand : err : " + JSON.stringify(err), " data : " + JSON.stringify(d));
        })
      },400)
      setTimeout(() => {
        abilityDelegator = AbilityDelegatorRegistry.getAbilityDelegator();
        var cmd = "aa start -b com.example.missiondapp -a EntryAbility";
        abilityDelegator.executeShellCommand(cmd, async (err: any, d: any) => {
          console.info("executeShellCommandd aacommand : err : " + JSON.stringify(err), " data : " + JSON.stringify(d));
        })
      },600)

      await setTimeout(() => {
        missionManager.clearAllMissions() 
        .then(() => {
          console.log("clearAllMissions is called ");
        })
        .catch((err) => {
          console.log("clearAllMissions is called error == " + JSON.stringify(err));
        })
      },2400)
      
      setTimeout(() => {
        console.info("getMissionInfos entered")
        missionManager.getMissionInfos("",10,(error,missions) => {
          console.info("missions = " + JSON.stringify(missions))
          for (let i = 0; i < missions.length; i++) {
            if (missions[i].want.bundleName == "com.example.missionaapp") {
              console.info("A is exist")
              TAGA = true;
            }
            else if (missions[i].want.bundleName == "com.example.missionbapp") {
              console.info("B is exist")
              TAGB = true;
            }
            else if (missions[i].want.bundleName == "com.example.missioncapp") {
              console.info("C is exist")
              TAGC = true;
            }
            else if (missions[i].want.bundleName == "com.example.missiondapp") {
              console.info("D is exist")
              TAGD = true;
            }
          }
      })
      },3000)
      
      setTimeout(() => {
        console.info("TAGA : " + TAGA)
        expect(TAGA).assertTrue()
        expect(TAGB).assertFalse()
        expect(TAGC).assertFalse()
        expect(TAGD).assertFalse()

      },4000)
      setTimeout(() => {
        console.info("Finish!!!!!");
        done();
      },5000)
      
    })

  })
}
