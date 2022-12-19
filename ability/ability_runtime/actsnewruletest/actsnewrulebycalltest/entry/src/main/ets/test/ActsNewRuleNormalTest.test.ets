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

export default function actsNewRuleNormalTest() {
    describe('actsNewRuleNormalTest', function () {
        let abilityDelegator = AbilityDelegatorRegistry.getAbilityDelegator();
        afterEach(async (done) => {
          console.log("SUB_AA_ABILITY_NewRule afterEach called");
          await sleep(1000);
          let wantInfo = {
            bundleName: "com.example.startabilitybycall",
            abilityName: "NormalTestAbility"
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
         * @tc.number: 001
         * @tc.name: startAbilityByCallTest_001
         * @tc.desc: start a visible Ability in the same bundle. Without permission
         */
        it('SUB_AA_ABILITY_NewRule_StartAbilityByCallTest_001',0, async function (done) {
            const tcNumber = `SUB_AA_ABILITY_NewRule_StartAbilityByCallTest_001`;
            console.log(`${tcNumber} START********************************************`);
            let want = {
                deviceId: "",
                bundleName: "com.example.startabilitybycall",
                abilityName: "MainAbility",
            }
            await globalThis.testContext.startAbilityByCall(want)
                .then(data => {
                    console.log(`${tcNumber} startAbility SUCCESS`);
                    expect().assertFail();
                    done();
                })
                .catch(error => {
                    console.log(`${tcNumber} startAbility Catch`);
                    done();
                });
        })

        /**
         * @tc.number: 002
         * @tc.name: startAbilityByCallTest_002
         * @tc.desc: start a invisible Ability in the same bundle. Without permission
         */
        it('SUB_AA_ABILITY_NewRule_StartAbilityByCallTest_002',0, async function (done) {
            const tcNumber = `SUB_AA_ABILITY_NewRule_StartAbilityByCallTest_002`;
            console.log(`${tcNumber} START********************************************`);
            let want = {
                deviceId: "",
                bundleName: "com.example.startabilitybycall",
                abilityName: "ImmortalStageAbility",
            }
            await globalThis.testContext.startAbilityByCall(want)
                .then(data => {
                    console.log(`${tcNumber} startAbility SUCCESS`);
                    expect().assertFail();
                    done();
                })
                .catch(error => {
                    console.log(`${tcNumber} startAbility Catch`);
                    done();
                });
        })

        /**
         * @tc.number: 003
         * @tc.name: startAbilityByCallTest_003
         * @tc.desc: start a visible Ability in the same bundle from background. Without permission
         */
        it('SUB_AA_ABILITY_NewRule_StartAbilityByCallTest_003',0, async function (done) {
            const tcNumber = `SUB_AA_ABILITY_NewRule_StartAbilityByCallTest_003`;
            console.log(`${tcNumber} START********************************************`);
            let want0 = {
                deviceId: "",
                bundleName: "com.example.callee_stage",
                abilityName: "MainAbility",
            }
            await globalThis.testContext.startAbility(want0);

            await sleep(1000);
            if (!globalThis.isBackground) {
                console.log(`${tcNumber} switch to background failed`);
                expect().assertFail();
            }
            let want = {
                deviceId: "",
                bundleName: "com.example.startabilitybycall",
                abilityName: "MainAbility",
            }
            await globalThis.testContext.startAbilityByCall(want)
                .then(data => {
                    console.log(`${tcNumber} startAbility SUCCESS`);
                    expect().assertFail();
                    done();
                })
                .catch(error => {
                    console.log(`${tcNumber} startAbility Catch`);
                });

            commonEvent.publish('TestFinish', (err) => {
                console.log(`${tcNumber}  ======>commonEvent publish TestFinish<======`)
                done();
            })
        })

        /**
         * @tc.number: 004
         * @tc.name: startAbilityByCallTest_004
         * @tc.desc: start a visible Ability in the same bundle from background. Without permission
         */
        it('SUB_AA_ABILITY_NewRule_StartAbilityByCallTest_004',0, async function (done) {
            const tcNumber = `SUB_AA_ABILITY_NewRule_StartAbilityByCallTest_004`;
            console.log(`${tcNumber} START********************************************`);
            let want0 = {
                deviceId: "",
                bundleName: "com.example.callee_stage",
                abilityName: "MainAbility",
            }
            await globalThis.testContext.startAbility(want0);

            await sleep(1000);
            if (!globalThis.isBackground) {
                console.log(`${tcNumber} switch to background failed`);
                expect().assertFail();
            }
            let want = {
                deviceId: "",
                bundleName: "com.example.startabilitybycall",
                abilityName: "ImmortalStageAbility",
            }
            await globalThis.testContext.startAbilityByCall(want)
                .then(data => {
                    console.log(`${tcNumber} startAbility SUCCESS`);
                    expect().assertFail();
                    done();
                })
                .catch(error => {
                    console.log(`${tcNumber} startAbility Catch`);
                });

            commonEvent.publish('TestFinish', (err) => {
                console.log(`${tcNumber}  ======>commonEvent publish TestFinish<======`)
                done();
            })
        })

        /**
         * @tc.number: 005
         * @tc.name: startAbilityByCallTest_005
         * @tc.desc: start a visible Ability in the different bundle. Without permission
         */
        it('SUB_AA_ABILITY_NewRule_StartAbilityByCallTest_005',0, async function (done) {
            const tcNumber = `SUB_AA_ABILITY_NewRule_StartAbilityByCallTest_005`;
            console.log(`${tcNumber} START********************************************`);
            let want = {
                deviceId: "",
                bundleName: "com.example.callee_stage",
                abilityName: "MainAbility",
            }
            await globalThis.testContext.startAbilityByCall(want)
                .then(data => {
                    console.log(`${tcNumber} startAbility SUCCESS`);
                    expect().assertFail();
                    done();
                })
                .catch(error => {
                    console.log(`${tcNumber} startAbility Catch`);
                    done();
                });
        })

        /**
         * @tc.number: 006
         * @tc.name: startAbilityByCallTest_006
         * @tc.desc: start a invisible Ability in the different bundle. Without permission
         */
        it('SUB_AA_ABILITY_NewRule_StartAbilityByCallTest_006',0, async function (done) {
            const tcNumber = `SUB_AA_ABILITY_NewRule_StartAbilityByCallTest_006`;
            console.log(`${tcNumber} START********************************************`);
            let want = {
                deviceId: "",
                bundleName: "com.example.callee_stage",
                abilityName: "InvisibleStageAbility",
            }
            await globalThis.testContext.startAbilityByCall(want)
                .then(data => {
                    console.log(`${tcNumber} startAbility SUCCESS`);
                    expect().assertFail();
                    done();
                })
                .catch(error => {
                    console.log(`${tcNumber} startAbility Catch`);
                    done();
                });
        })

        /**
         * @tc.number: 007
         * @tc.name: startAbilityByCallTest_007
         * @tc.desc: start a visible Ability in the different bundle from background. Without permission
         */
        it('SUB_AA_ABILITY_NewRule_StartAbilityByCallTest_007',0, async function (done) {
            const tcNumber = `SUB_AA_ABILITY_NewRule_StartAbilityByCallTest_007`;
            console.log(`${tcNumber} START********************************************`);
            let want0 = {
                deviceId: "",
                bundleName: "com.example.callee_stage",
                abilityName: "MainAbility",
            }
            await globalThis.testContext.startAbility(want0);

            await sleep(1000);
            if (!globalThis.isBackground) {
                console.log(`${tcNumber} switch to background failed`);
                expect().assertFail();
            }
            let want = {
                deviceId: "",
                bundleName: "com.example.callee_stage",
                abilityName: "MainAbility",
            }
            await globalThis.testContext.startAbilityByCall(want)
                .then(data => {
                    console.log(`${tcNumber} startAbility SUCCESS`);
                    expect().assertFail();
                    done();
                })
                .catch(error => {
                    console.log(`${tcNumber} startAbility Catch`);
                });

            commonEvent.publish('TestFinish', (err) => {
                console.log(`${tcNumber}  ======>commonEvent publish TestFinish<======`)
                done();
            })
        })

        /**
         * @tc.number: 008
         * @tc.name: startAbilityByCallTest_008
         * @tc.desc: start a invisible Ability in the different bundle from background. Without permission
         */
        it('SUB_AA_ABILITY_NewRule_StartAbilityByCallTest_008',0, async function (done) {
            const tcNumber = `SUB_AA_ABILITY_NewRule_StartAbilityByCallTest_008`;
            console.log(`${tcNumber} START********************************************`);
            let want0 = {
                deviceId: "",
                bundleName: "com.example.callee_stage",
                abilityName: "MainAbility",
            }
            await globalThis.testContext.startAbility(want0);

            await sleep(1000);
            if (!globalThis.isBackground) {
                console.log(`${tcNumber} switch to background failed`);
                expect().assertFail();
            }
            let want = {
                deviceId: "",
                bundleName: "com.example.callee_stage",
                abilityName: "InvisibleStageAbility",
            }
            await globalThis.testContext.startAbilityByCall(want)
                .then(data => {
                    console.log(`${tcNumber} startAbility SUCCESS`);
                    expect().assertFail();
                    done();
                })
                .catch(error => {
                    console.log(`${tcNumber} startAbility Catch`);
                });

            commonEvent.publish('TestFinish', (err) => {
                console.log(`${tcNumber}  ======>commonEvent publish TestFinish<======`)
                done();
            })
        })
    })
}