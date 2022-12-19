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

export default function actsNewRuleByCallTest() {
    describe('actsNewRuleByCallTest', function () {
        let abilityDelegator = AbilityDelegatorRegistry.getAbilityDelegator();
        afterEach(async (done) => {
          console.log("SUB_AA_ABILITY_NewRule afterEach called");
          await sleep(1000);
          let wantInfo = {
            bundleName: "com.example.startabilitybycall",
            abilityName: "CallTestAbility"
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
         * @tc.number: 009
         * @tc.name: startAbilityByCallTest_009
         * @tc.desc: start a visible Ability in the same bundle. Without permission
         */
        it('SUB_AA_ABILITY_NewRule_StartAbilityByCallTest_009',0, async function (done) {
            const tcNumber = `SUB_AA_ABILITY_NewRule_StartAbilityByCallTest_009`;
            console.info(`${tcNumber} START********************************************`);
            let want = {
                deviceId: "",
                bundleName: "com.example.startabilitybycall",
                abilityName: "MainAbility",
            }
            await globalThis.testContext.startAbilityByCall(want)
                .then(data => {
                    console.info(`${tcNumber} startAbility SUCCESS`);
                    expect().assertFail();
                    done();
                })
                .catch(error => {
                    console.info(`${tcNumber} startAbility Catch`);
                    done();
                });
        })

        /**
         * @tc.number: 010
         * @tc.name: startAbilityByCallTest_010
         * @tc.desc: start a invisible Ability in the same bundle. Without permission
         */
        it('SUB_AA_ABILITY_NewRule_StartAbilityByCallTest_010',0, async function (done) {
            const tcNumber = `SUB_AA_ABILITY_NewRule_StartAbilityByCallTest_010`;
            console.info(`${tcNumber} START********************************************`);
            let want = {
                deviceId: "",
                bundleName: "com.example.startabilitybycall",
                abilityName: "ImmortalStageAbility",
            }
            await globalThis.testContext.startAbilityByCall(want)
                .then(data => {
                    console.info(`${tcNumber} startAbility SUCCESS`);
                    expect().assertFail();
                    done();
                })
                .catch(error => {
                    console.info(`${tcNumber} startAbility Catch`);
                    done();
                });
        })

        /**
         * @tc.number: 011
         * @tc.name: startAbilityByCallTest_011
         * @tc.desc: start a visible Ability in the same bundle from background. Without permission
         */
        it('SUB_AA_ABILITY_NewRule_StartAbilityByCallTest_011',0, async function (done) {
            const tcNumber = `SUB_AA_ABILITY_NewRule_StartAbilityByCallTest_011`;
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
                bundleName: "com.example.startabilitybycall",
                abilityName: "MainAbility",
            }
            await globalThis.testContext.startAbilityByCall(want)
                .then(data => {
                    console.info(`${tcNumber} startAbility SUCCESS`);
                    expect().assertFail();
                    done();
                })
                .catch(error => {
                    console.info(`${tcNumber} startAbility Catch`);
                });

            commonEvent.publish('TestFinish', (err) => {
                console.log(`${tcNumber}  ======>commonEvent publish TestFinish<======`)
                done();
            })
        })

        /**
         * @tc.number: 012
         * @tc.name: startAbilityByCallTest_012
         * @tc.desc: start a visible Ability in the same bundle from background. Without permission
         */
        it('SUB_AA_ABILITY_NewRule_StartAbilityByCallTest_012',0, async function (done) {
            const tcNumber = `SUB_AA_ABILITY_NewRule_StartAbilityByCallTest_012`;
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
                bundleName: "com.example.startabilitybycall",
                abilityName: "ImmortalStageAbility",
            }
            await globalThis.testContext.startAbilityByCall(want)
                .then(data => {
                    console.info(`${tcNumber} startAbility SUCCESS`);
                    expect().assertFail();
                    done();
                })
                .catch(error => {
                    console.info(`${tcNumber} startAbility Catch`);
                });

            commonEvent.publish('TestFinish', (err) => {
                console.log(`${tcNumber}  ======>commonEvent publish TestFinish<======`)
                done();
            })
        })

        /**
         * @tc.number: 013
         * @tc.name: startAbilityByCallTest_013
         * @tc.desc: start a visible Ability in the different bundle. Without permission
         */
        it('SUB_AA_ABILITY_NewRule_StartAbilityByCallTest_013',0, async function (done) {
            const tcNumber = `SUB_AA_ABILITY_NewRule_StartAbilityByCallTest_013`;
            console.info(`${tcNumber} START********************************************`);
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
         * @tc.number: 014
         * @tc.name: startAbilityByCallTest_014
         * @tc.desc: App is foreground, but ability is background,
         *          start a visible Ability in the different bundle. Without permission
         */
        it('SUB_AA_ABILITY_NewRule_StartAbilityByCallTest_014',0, async function (done) {
            const tcNumber = `SUB_AA_ABILITY_NewRule_StartAbilityByCallTest_014`;
            console.info(`${tcNumber} START********************************************`);
            let want0 = {
                deviceId: "",
                bundleName: "com.example.startabilitybycall",
                abilityName: "MainAbility",
            }
            await globalThis.testContext.startAbility(want0)
                .then(data => {
                    console.info(`${tcNumber} startAbility SUCCESS`);
                })
                .catch(error => {
                    console.info(`${tcNumber} startAbility Catch`);
                    expect().assertFail();
                    done();
                });

            await sleep(2000);
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
                    console.info(`${tcNumber} startAbilityByCall SUCCESS`);
                })
                .catch(error => {
                    console.info(`${tcNumber} startAbilityByCall Catch`);
                    expect().assertFail();
                    done();
                });

            commonEvent.publish('TestFinish', (err) => {
                console.log(`${tcNumber}  ======>commonEvent publish TestFinish<======`)
                done();
            })
        })


        /**
         * @tc.number: 016
         * @tc.name: startAbilityByCallTest_016
         * @tc.desc: start a invisible Ability in the different bundle. Without permission
         */
        it('SUB_AA_ABILITY_NewRule_StartAbilityByCallTest_016',0, async function (done) {
            const tcNumber = `SUB_AA_ABILITY_NewRule_StartAbilityByCallTest_016`;
            console.info(`${tcNumber} START********************************************`);
            let want = {
                deviceId: "",
                bundleName: "com.example.callee_stage",
                abilityName: "InvisibleStageAbility",
            }
            await globalThis.testContext.startAbilityByCall(want)
                .then(data => {
                    console.info(`${tcNumber} startAbility SUCCESS`);
                    expect().assertFail();
                    done();
                })
                .catch(error => {
                    console.info(`${tcNumber} startAbility Catch`);
                    done();
                });
        })

        /**
         * @tc.number: 017
         * @tc.name: startAbilityByCallTest_017
         * @tc.desc: start a visible Ability in the different bundle from background. Without permission
         */
        it('SUB_AA_ABILITY_NewRule_StartAbilityByCallTest_017',0, async function (done) {
            const tcNumber = `SUB_AA_ABILITY_NewRule_StartAbilityByCallTest_017`;
            console.info(`${tcNumber} START********************************************`);
            let want0 = {
                deviceId: "",
                bundleName: "com.example.callee_stage",
                abilityName: "MainAbility",
            }
            await globalThis.testContext.startAbility(want0)
                .then(data => {
                    console.info(`${tcNumber} startAbility SUCCESS`);
                })
                .catch(error => {
                    console.info(`${tcNumber} startAbility Catch`);
                    expect().assertFail();
                });

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
                    expect().assertFail();
                    done();
                })
                .catch(error => {
                    console.info(`${tcNumber} startAbility Catch`);
                });

            commonEvent.publish('TestFinish', (err) => {
                console.log(`${tcNumber}  ======>commonEvent publish TestFinish<======`)
                done();
            })
        })

        /**
         * @tc.number: 018
         * @tc.name: startAbilityByCallTest_018
         * @tc.desc: start a invisible Ability in the different bundle from background. Without permission
         */
        it('SUB_AA_ABILITY_NewRule_StartAbilityByCallTest_018',0, async function (done) {
            const tcNumber = `SUB_AA_ABILITY_NewRule_StartAbilityByCallTest_018`;
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
                    expect().assertFail();
                    done();
                })
                .catch(error => {
                    console.info(`${tcNumber} startAbility Catch`);
                });

            commonEvent.publish('TestFinish', (err) => {
                console.log(`${tcNumber}  ======>commonEvent publish TestFinish<======`)
                done();
            })
        })

        /**
         * @tc.number: 015
         * @tc.name: startAbilityByCallTest_015
         * @tc.desc: App is foreground, but is not focused,
         *          start a visible Ability in the different bundle. Without permission
         */
        // it('SUB_AA_ABILITY_NewRule_StartAbilityByCallTest_015',0, async function (done) {
        //     const tcNumber = `SUB_AA_ABILITY_NewRule_StartAbilityByCallTest_015`;
        //     await sleep(1000);
        //     console.info(`${tcNumber} START********************************************`);
        //     var subscriberInfo = {
        //         events: ['CalleeWindowCreate'],
        //     };
        //     async function subscribeCallBack(err, data) {
        //         console.log('com.example.callee_stage subscribeCallBack  start window===========================================')
        //         let want = {
        //             deviceId: "",
        //             bundleName: "com.example.callee_stage",
        //             abilityName: "MainAbility",
        //         }
        //         await globalThis.testContext.startAbilityByCall(want)
        //             .then(data => {
        //                 console.info(`${tcNumber} startAbilityByCall SUCCESS`);
        //                 expect().assertFail();
        //                 done();
        //             })
        //             .catch(error => {
        //                 console.info(`${tcNumber} startAbilityByCall Catch`);
        //                 done();
        //             });

        //         commonEvent.publish('TestFinish', (err) => {
        //             console.log(`${tcNumber}  ======>commonEvent publish TestFinish<======`)
        //             done();
        //         })
        //     }
        //     commonEvent.createSubscriber(subscriberInfo, (err, subscriber) => {
        //         if (err.code) {
        //             console.info("TestFinish subscriber err" + JSON.stringify(err));
        //         } else {
        //             console.info("TestFinish subscriber start" + JSON.stringify(err));
        //             commonEvent.subscribe(subscriber, subscribeCallBack);
        //         }
        //     })

        //     let want0 = {
        //         deviceId: "",
        //         bundleName: "com.example.callee_stage",
        //         abilityName: "MainAbility",
        //     }
        //     var options = {
        //         windowMode: 102
        //     };
        //     await globalThis.testContext.startAbility(want0, options);
        // })
    })
}