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
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium';
import commonEvent from '@ohos.commonEvent';
import AbilityDelegatorRegistry from '@ohos.application.abilityDelegatorRegistry';

const sleep = async delay => {
    return new Promise((resolve, _) => {
        setTimeout(async () => {
            resolve(0);
        }, delay);
    })
}

export default function actsNewRuleByCallBackgroundVisibleTest() {
    describe('actsNewRuleByCallBackgroundVisibleTest', function () {
        let abilityDelegator = AbilityDelegatorRegistry.getAbilityDelegator();
        afterEach(async (done) => {
          console.log("SUB_AA_ABILITY_NewRule afterEach called");
          await sleep(1000);
          let wantInfo = {
            bundleName: "com.example.startabilitybycall",
            abilityName: "CallBackVisibleTestAbility"
          }
          await globalThis.testContext.startAbility(wantInfo).then((data) => {
            console.log("SUB_AA_ABILITY_NewRule startAbility data : " + JSON.stringify(data));
          }).catch((err) => {
            console.log("SUB_AA_ABILITY_NewRule startAbility err : " + JSON.stringify(err) + err.message);
          })
    
          let cmd = "aa force-stop com.example.callee_stage";    
          await abilityDelegator.executeShellCommand(cmd).then((data) => {
            console.log("SUB_AA_ABILITY_NewRule executeShellCommand : data : " + data.stdResult);
            console.log("SUB_AA_ABILITY_NewRule executeShellCommand : data : " + data.exitCode);
          }).catch((error) => {
            console.log("SUB_AA_ABILITY_NewRule executeShellCommand error : " + JSON.stringify(error));
          })
    
          setTimeout(() => {
            done();
          }, 1000);
        })

        /**
         * @tc.number: 027
         * @tc.name: startAbilityByCallTest_027
         * @tc.desc: start a visible Ability in the different bundle. Without permission
         */
        it('SUB_AA_ABILITY_NewRule_StartAbilityByCallTest_027',0, async function (done) {
            const tcNumber = `SUB_AA_ABILITY_NewRule_StartAbilityByCallTest_027`;
            console.info(`${tcNumber} START********************************************`);
            let want = {
                deviceId: "",
                bundleName: "com.example.callee_stage",
                abilityName: "MainAbility",
            }
            globalThis.testContext.startAbilityByCall(want)
                .then(data => {
                    console.info(`${tcNumber} startAbility SUCCESS`);
                    done();
                })
                .catch(error => {
                    console.info(`${tcNumber} startAbility Catch`);
                    expect().assertFail();
                    done();
                });
        })

        /**
         * @tc.number: 028
         * @tc.name: startAbilityByCallTest_028
         * @tc.desc: start a invisible Ability in the different bundle. Without permission
         */
        it('SUB_AA_ABILITY_NewRule_StartAbilityByCallTest_028',0, async function (done) {
            const tcNumber = `SUB_AA_ABILITY_NewRule_StartAbilityByCallTest_028`;
            console.info(`${tcNumber} START********************************************`);
            let want = {
                deviceId: "",
                bundleName: "com.example.callee_stage",
                abilityName: "InvisibleStageAbility",
            }
            globalThis.testContext.startAbilityByCall(want)
                .then(data => {
                    console.info(`${tcNumber} startAbility SUCCESS`);
                    done();
                })
                .catch(error => {
                    console.info(`${tcNumber} startAbility Catch`);
                    expect().assertFail();
                    done();
                });
        })

        /**
         * @tc.number: 029
         * @tc.name: startAbilityByCallTest_029
         * @tc.desc: start a visible Ability in the different bundle from background. Without permission
         */
        it('SUB_AA_ABILITY_NewRule_StartAbilityByCallTest_029',0, async function (done) {
            const tcNumber = `SUB_AA_ABILITY_NewRule_StartAbilityByCallTest_029`;
            console.info(`${tcNumber} START********************************************`);
            let want0 = {
                deviceId: "",
                bundleName: "com.example.callee_stage",
                abilityName: "MainAbility",
            }
            await globalThis.testContext.startAbility(want0);

            await sleep(1000);
            if (!globalThis.isBackground) {
                console.info(`${tcNumber} switch to background failed`);
                expect().assertFail();
            }
            let want = {
                deviceId: "",
                bundleName: "com.example.callee_stage",
                abilityName: "MainAbility",
            }
            await globalThis.testContext.startAbilityByCall(want)
                .then(data => {
                    console.info(`${tcNumber} startAbility SUCCESS`);
                })
                .catch(error => {
                    console.info(`${tcNumber} startAbility Catch`);
                    expect().assertFail();
                    done();
                });

            commonEvent.publish('TestFinish', (err) => {
                console.log(`${tcNumber}  ======>commonEvent publish TestFinish<======`)
                done();
            })
        })

        /**
         * @tc.number: 030
         * @tc.name: startAbilityByCallTest_030
         * @tc.desc: start a invisible Ability in the different bundle from background. Without permission
         */
        it('SUB_AA_ABILITY_NewRule_StartAbilityByCallTest_030',0, async function (done) {
            const tcNumber = `SUB_AA_ABILITY_NewRule_StartAbilityByCallTest_030`;
            console.info(`${tcNumber} START********************************************`);
            let want0 = {
                deviceId: "",
                bundleName: "com.example.callee_stage",
                abilityName: "MainAbility",
            }
            await globalThis.testContext.startAbility(want0);

            await sleep(1000);
            if (!globalThis.isBackground) {
                console.info(`${tcNumber} switch to background failed`);
                expect().assertFail();
            }
            let want = {
                deviceId: "",
                bundleName: "com.example.callee_stage",
                abilityName: "InvisibleStageAbility",
            }
            await globalThis.testContext.startAbilityByCall(want)
                .then(data => {
                    console.info(`${tcNumber} startAbility SUCCESS`);
                })
                .catch(error => {
                    console.info(`${tcNumber} startAbility Catch`);
                    expect().assertFail();
                    done();
                });

            commonEvent.publish('TestFinish', (err) => {
                console.log(`${tcNumber}  ======>commonEvent publish TestFinish<======`)
                done();
            })
        })
    })
}