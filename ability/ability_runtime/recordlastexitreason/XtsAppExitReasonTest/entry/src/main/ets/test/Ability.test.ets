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
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium'
import ErrorManager from "@ohos.app.ability.errorManager"
import commonEvent from '@ohos.commonEvent'
import wantAgent from '@ohos.app.ability.wantAgent';
import AbilityConstant from "@ohos.app.ability.AbilityConstant"

export default function abilityTest() {
  describe('ActsAbilityTest', function () {
    beforeAll(function () {
    })

    /*
     * @tc.number: Acts_AppExitReason_StartAbility_0100
     * @tc.name: Test by terminateself
     * @tc.desc: Compare lastexitreason by terminateSelf and startAbility
     */
  
    it('Acts_AppExitReason_StartAbility_0100',0, function (done) {
      let want = {
        deviceId : "",
        bundleName : "com.example.appexitreasonrely",
        abilityName : "EntryAbility",
        action : "Terminate"
      };
      let TestWant = {
        deviceId : "",
        bundleName : "com.example.appexitreasonrely",
        abilityName : "EntryAbility",
        action : "Normal"
      };
      
      globalThis.abilityContext.startAbility(want, (error) => {
        console.log("error.code = " + error.code)
      })
      setTimeout(function() {
        globalThis.abilityContext.startAbilityForResult(TestWant,(error,result) => {
          console.info('AbilityResult ' + JSON.stringify(result));
          expect(error.code).assertEqual(0);
          expect(result.resultCode).assertEqual(2);
          expect(AbilityConstant.LastExitReason["UNKNOWN"]).assertEqual(0);
          expect(AbilityConstant.LastExitReason["ABILITY_NOT_RESPONDING"]).assertEqual(1);
          expect(AbilityConstant.LastExitReason["CPP_CRASH"]).assertEqual(3);
          expect(AbilityConstant.LastExitReason["PERFORMANCE_CONTROL"]).assertEqual(6);
          expect(AbilityConstant.LastExitReason["RESOURCE_CONTROL"]).assertEqual(7);

        })
      },1000)
      setTimeout(() => {
        console.log("finish");
        done();
      },2500)
    })
    

    /*
     * @tc.number: Acts_AppExitReason_StartAbility_0200
     * @tc.name: Test by Jserror
     * @tc.desc: Compare lastexitreason by Jserror and startAbility
     */
  
    it('Acts_AppExitReason_StartAbility_0200',0, function (done) {
      let want = {
        deviceId : "",
        bundleName : "com.example.appexitreasonrely",
        abilityName : "EntryAbility",
        action : "Jserror"
      };
      let TestWant = {
        deviceId : "",
        bundleName : "com.example.appexitreasonrely",
        abilityName : "EntryAbility",
        action : "Normal"
      };
      globalThis.abilityContext.startAbility(want, (error) => {
        console.log("error.code = " + error.code)
      })

      setTimeout(() => {
        globalThis.abilityContext.startAbilityForResult(TestWant,(error,result) => {
          console.info('AbilityResult :' + JSON.stringify(error));
          console.info('AbilityResult :' + JSON.stringify(result));
          expect(error.code).assertEqual(0);
          expect(result.resultCode).assertEqual(4);
        })
      },3000)

      setTimeout(() => {
        console.log("finish");
        done();
      },4500)
    })
   
    /*
     * @tc.number: Acts_AppExitReason_StartAbility_0500
     * @tc.name: Test by ClearMission
     * @tc.desc: Compare lastexitreason by ClearMission and startAbility
     */
  
    it('Acts_AppExitReason_StartAbility_0500',0, function (done) {
      let wantValue = {
        deviceId : "",
        bundleName : "com.example.appexitreasonrely",
        abilityName : "EntryAbility",
        action : "ClearMission"
      };
      let TestWant = {
        deviceId : "",
        bundleName : "com.example.appexitreasonrely",
        abilityName : "EntryAbility",
        action : "Normal"
      };
      globalThis.abilityContext.startAbility(wantValue, (error) => {
        console.log("error.code = " + error.code);
        expect(error.code).assertEqual(0);
      })
      setTimeout(() => {
        globalThis.abilityContext.startAbilityForResult(TestWant,(error,result) => {
          console.info('AbilityResult :' + JSON.stringify(error));
          console.info('AbilityResult :' + JSON.stringify(result));
          expect(error.code).assertEqual(0);
          expect(result.resultCode).assertEqual(2);
        })
      },1000)
      setTimeout(() => {
        console.log("finish");
        done();
      },2500)
    })

    /*
     * @tc.number: Acts_AppExitReason_StartAbilityByCall_0100
     * @tc.name: Test by terminateSelf
     * @tc.desc: Compare lastexitreason by terminateSelf and startAbilityByCall
     */
   
    it('Acts_AppExitReason_StartAbilityByCall_0100',0, function (done) {
      let want = {
        deviceId : "",
        bundleName : "com.example.appexitreasonrely",
        moduleName: "entry",
        abilityName : "EntryAbility",
        action : "Terminate",
        parameters: {
          "ohos.aafwk.param.callAbilityToForeground": true
        }
      };
      let TestWant = {
        deviceId : "",
        bundleName : "com.example.appexitreasonrely",
        abilityName : "EntryAbility",
        action : "Normal"
      };
      globalThis.abilityContext.startAbilityByCall(want)
        .then((obj) => {
          console.log('GetCaller success');
          let caller = obj;
        }).catch((error) => {
        console.log(`GetCaller failed with ${error}`);
      });
      setTimeout(() => {
        globalThis.abilityContext.startAbilityForResult(TestWant,(error,result) => {
          console.info('AbilityResult' + JSON.stringify(result));
          expect(error.code).assertEqual(0);
          expect(result.resultCode).assertEqual(2);
        })
      },700)
      setTimeout(() => {
        console.log("finish");
        done();
      },2500)
    })
 

    /*
     * @tc.number: Acts_AppExitReason_StartAbilityByCall_0200
     * @tc.name: Test by Jserror
     * @tc.desc: Compare lastexitreason by Jserror and startAbilityByCall
     */

     
    it('Acts_AppExitReason_StartAbility_0200',0, function (done) {
      let want = {
        deviceId : "",
        bundleName : "com.example.appexitreasonrely",
        abilityName : "EntryAbility",
        moduleName: "entry",
        action : "Jserror",
        parameters: {
          "ohos.aafwk.param.callAbilityToForeground": true
        }
      };
      let TestWant = {
        deviceId : "",
        bundleName : "com.example.appexitreasonrely",
        abilityName : "EntryAbility",
        action : "Normal"
      };

      globalThis.abilityContext.startAbilityByCall(want) 
        .then((obj) => {
          console.log('GetCaller success');
          let caller = obj;
        }).catch((error) => {
        console.log(`GetCaller failed with ${error}`);
      });

      setTimeout(function() {
        globalThis.abilityContext.startAbilityForResult(TestWant,(error,result) => {
          console.info('AbilityResult ' + JSON.stringify(result));
          expect(error.code).assertEqual(0);
          expect(result.resultCode).assertEqual(4);
        })
      },2500)

      setTimeout(() => {
        console.log("finish");
        done();
      },3500)
    })


    /*
     * @tc.number: Acts_AppExitReason_StartAbilityByCall_0500
     * @tc.name: Test by ClearMission
     * @tc.desc: Compare lastexitreason by ClearMission and startAbilityByCall
     */

    it('Acts_AppExitReason_StartAbilityByCall_0500',0, function (done) {
      let want = {
        deviceId : "",
        bundleName : "com.example.appexitreasonrely",
        abilityName : "EntryAbility",
        moduleName: "entry",
        action : "ClearMission",
        parameters: {
          "ohos.aafwk.param.callAbilityToForeground": true
        }
      };
      let TestWant = {
        deviceId : "",
        bundleName : "com.example.appexitreasonrely",
        abilityName : "EntryAbility",
        action : "Normal"
      };
      globalThis.abilityContext.startAbilityByCall(want) 
        .then((obj) => {
          console.log('GetCaller success');
          let caller = obj;
        }).catch((error) => {
        console.log(`GetCaller failed with ${error}`);
      });
      setTimeout(function() {
        globalThis.abilityContext.startAbilityForResult(TestWant,(error,result) => {
          console.info('AbilityResult' + JSON.stringify(result));
          expect(error.code).assertEqual(0);
          expect(result.resultCode).assertEqual(2);
        })
      },700)
      setTimeout(() => {
        console.log("finish");
        done();
      },2500)
    })


    /*
     * @tc.number: Acts_AppExitReason_GetWantAgent_0100
     * @tc.name: Test by terminateSelf
     * @tc.desc: Compare lastexitreason by terminateSelf and getWantAgent
     */
   
    it('Acts_AppExitReason_GetWantAgent_0100',0, function (done) {
      let wantInfo = {
        wants: [{
          deviceId : "",
          bundleName : "com.example.appexitreasonrely",
          abilityName : "EntryAbility",
          action : "Terminate"
        }],
        operationType: wantAgent.OperationType.START_ABILITIES,
        requestCode: 0,
        wantAgentFlags: [wantAgent.WantAgentFlags.CONSTANT_FLAG]
      }
      let TestWant = {
        deviceId : "",
        bundleName : "com.example.appexitreasonrely",
        abilityName : "EntryAbility",
        action : "Normal"
      };
      function getWantAgentCallback(err, data) {
        console.info("error::" + JSON.stringify(err));
        wantAgent.trigger(data, triggerInfo, (completeData) => {
          console.log("[WantAgent]getWantAgent success, completeData: ", +JSON.stringify(completeData))
        })
      }
      wantAgent.getWantAgent(wantInfo, getWantAgentCallback);
      let triggerInfo = {
        code: 0
      }
      setTimeout(() => {
        globalThis.abilityContext.startAbilityForResult(TestWant,(error,result) => {
          console.info('AbilityResult' + JSON.stringify(result));
          expect(error.code).assertEqual(0);
          expect(result.resultCode).assertEqual(2);
        })
      },700)
      setTimeout(() => {
        console.log("finish");
        done();
      },2500)
    })
    

    /*
     * @tc.number: Acts_AppExitReason_GetWantAgent_0200
     * @tc.name: Test by terminateSelf
     * @tc.desc: Compare lastexitreason by terminateSelf and getWantAgent
     */
  
    it('Acts_AppExitReason_GetWantAgent_0200',0, function (done) {
      let wantInfo = {
        wants: [{
          deviceId : "",
          bundleName : "com.example.appexitreasonrely",
          abilityName : "EntryAbility",
          action : "Jserror"
        }],
        operationType: wantAgent.OperationType.START_ABILITIES,
        requestCode: 0,
        wantAgentFlags: [wantAgent.WantAgentFlags.CONSTANT_FLAG]
      }
      let TestWant = {
        deviceId : "",
        bundleName : "com.example.appexitreasonrely",
        abilityName : "EntryAbility",
        action : "Normal"
      };
      function getWantAgentCallback(err, data) {
        console.info("error::" + JSON.stringify(err));
        wantAgent.trigger(data, triggerInfo, (completeData) => {
          console.log("[WantAgent]getWantAgent success, completeData: ", +JSON.stringify(completeData))
        })
      }
      wantAgent.getWantAgent(wantInfo, getWantAgentCallback);
      let triggerInfo = {
        code: 0
      }

      setTimeout(() => {
        globalThis.abilityContext.startAbilityForResult(TestWant,(error,result) => {
          console.info('AbilityResult' + JSON.stringify(result));
          expect(error.code).assertEqual(0);
          expect(result.resultCode).assertEqual(4);
        })
      },2500)

      setTimeout(() => {
        console.log("finish");
        done();
      },4000)
    })

    
    /*
     * @tc.number: Acts_AppExitReason_GetWantAgent_0500
     * @tc.name: Test by ClearMission
     * @tc.desc: Compare lastexitreason by ClearMission and getWantAgent
     */
     
    it('Acts_AppExitReason_GetWantAgent_0500',0, async function (done) {
      let wantInfo = {
        wants: [{
          deviceId : "",
          bundleName : "com.example.appexitreasonrely",
          abilityName : "EntryAbility",
          action : "ClearMission"
        }],
        operationType: wantAgent.OperationType.START_ABILITIES,
        requestCode: 0,
        wantAgentFlags: [wantAgent.WantAgentFlags.CONSTANT_FLAG]
      }
      let TestWant = {
        deviceId : "",
        bundleName : "com.example.appexitreasonrely",
        abilityName : "EntryAbility",
        action : "Normal"
      };
      function getWantAgentCallback(err, data) {
        wantAgent.trigger(data, triggerInfo, (completeData) => {
          console.log("[WantAgent]getWantAgent success, completeData: ", +JSON.stringify(completeData))
        })
      }
      setTimeout(() => {
        wantAgent.getWantAgent(wantInfo, getWantAgentCallback);
      },100)
      let triggerInfo = {
        code: 0
      }
      setTimeout(function() {
        globalThis.abilityContext.startAbilityForResult(TestWant,(error,result) => {
          console.info('AbilityResult' + JSON.stringify(result));
          expect(error.code).assertEqual(0);
          expect(result.resultCode).assertEqual(2);
        })
      },1500)
      setTimeout(() => {
        console.log("finish");
        done();
      },3000)
    })
    
  })
}