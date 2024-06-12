/**
 * Copyright (c) 2023 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the 'License');
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an 'AS IS' BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
import hilog from '@ohos.hilog';
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium'
import abilityDelegatorRegistry from '@ohos.app.ability.abilityDelegatorRegistry';
import Want from '@ohos.app.ability.Want';
import commonEvent from '@ohos.commonEvent';

const domain = 0x0000;
const TAG = 'ActsAbilityLaunchTypeTest';
const TEST_SUITE_NAME = 'ActsAbilityLaunchTypeTest';
const EVENT_AbilityMultiInstance_1000_Ability = "EVENT_AbilityMultiInstance_1000_Ability";
const EVENT_AbilityMultiInstance_1000_Application = "EVENT_AbilityMultiInstance_1000_Application";
const EVENT_AbilityMultiInstance_1300_Ability = 'EVENT_AbilityMultiInstance_1300_Ability';

export default function actsAbilityLaunchTypeTest() {

  async function sleep(time) {
    return await new Promise((resolve) => setTimeout(resolve, time))
  }

  async function startAbility(bundleName: string, abilityName: string, params?: any) {
    let abilityDelegator = abilityDelegatorRegistry.getAbilityDelegator();
    let want: Want = {
      bundleName: bundleName,
      abilityName: abilityName,
      parameters: params
    }
    await sleep(1000);
    abilityDelegator.startAbility(want, (err, data) => {
      hilog.info(domain, TAG, '%{public}s', `${TEST_SUITE_NAME} start ability error: ${JSON.stringify(err)}`)
    })
  }

  describe('ActsAbilityLaunchTypeTest', function () {

    /**
     * @tc.number    : SUB_Ability_AbilityRuntime_LaunchType_AbilityMultiInstance_1000
     * @tc.name      : When there are multiple abilities in a mission, different instances of the specified type
     *                 ability at the top of the stack are started across missions
     * @tc.desc      : to start multiple abilities and check life circle method
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it("SUB_Ability_AbilityRuntime_LaunchType_AbilityMultiInstance_1000", 3, async function (done) {
      const TEST_CASE_NAME = 'SUB_Ability_AbilityRuntime_LaunchType_AbilityMultiInstance_1000';
      try {
        let commonEventSubscribeInfo = {
          events: [EVENT_AbilityMultiInstance_1000_Ability]
        }
        await commonEvent.createSubscriber(commonEventSubscribeInfo).then((subscriber) => {
          commonEvent.subscribe(subscriber, (err, commonEventData) => {
            hilog.info(domain, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} subscribe success :
              ${JSON.stringify(commonEventData)},err: ${JSON.stringify(err)}`)
            let result = commonEventData.parameters.data;
            if (commonEventData.event == EVENT_AbilityMultiInstance_1000_Application) {
              hilog.info(domain, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} event: ${EVENT_AbilityMultiInstance_1000_Ability}`);
              expect(result).assertTrue()
            }
            else if (commonEventData.event == EVENT_AbilityMultiInstance_1000_Ability) {
              hilog.info(domain, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} event: ${EVENT_AbilityMultiInstance_1000_Ability}`);
              expect(result).assertTrue()
              commonEvent.unsubscribe(subscriber, (err, data) => {
                done();
              });
            } else {
              expect().assertFail();
              done();
            }
          })
        })
        startAbility('com.ohos.appb', 'EntryAbility', {
          number: 1000
        });
        startAbility('com.ohos.appa', 'EntryAbility', {
          id: 1,
          number: 1000
        })
        startAbility('com.ohos.appc', 'EntryAbility', {
          number: 1000
        });
        startAbility('com.ohos.appa', 'EntryAbility', {
          id: 2,
          number: 1000
        })

      } catch (error) {
        hilog.info(domain, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} error: ${JSON.stringify(error)}`);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : SUB_Ability_AbilityRuntime_LaunchType_AbilityMultiInstance_0800
     * @tc.name      : When there are multiple abilities in a mission, different instances
     *                 of non-stack specified ability are started across missions
     * @tc.desc      : to start multiple abilities and check life circle method
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it("SUB_Ability_AbilityRuntime_LaunchType_AbilityMultiInstance_0800", 3, async function (done) {
      const TEST_CASE_NAME = 'SUB_Ability_AbilityRuntime_LaunchType_AbilityMultiInstance_0800';
      try {
        let commonEventSubscribeInfo = {
          events: [EVENT_AbilityMultiInstance_1000_Ability, EVENT_AbilityMultiInstance_1000_Application]
        }
        await commonEvent.createSubscriber(commonEventSubscribeInfo).then((subscriber) => {
          commonEvent.subscribe(subscriber, (err, commonEventData) => {
            hilog.info(domain, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} subscribe success :
             ${JSON.stringify(commonEventData)},err: ${JSON.stringify(err)}`)
            let result = commonEventData.parameters.data;
            if (commonEventData.event == EVENT_AbilityMultiInstance_1000_Application) {
              hilog.info(domain, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} event: ${EVENT_AbilityMultiInstance_1000_Ability}`);
              expect(result).assertTrue()
            }
            else if (commonEventData.event == EVENT_AbilityMultiInstance_1000_Ability) {
              hilog.info(domain, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} event: ${EVENT_AbilityMultiInstance_1000_Ability}`);
              expect(result).assertTrue()
              commonEvent.unsubscribe(subscriber, (err, data) => {
                done();
              });
            } else {
              expect().assertFail();
              done();
            }
          })
        })
        startAbility('com.ohos.appa', 'EntryAbility', {
          id: 1,
          number: 1000
        });
        startAbility('com.ohos.appb', 'EntryAbility', {
          number: 1000
        });
        startAbility('com.ohos.appc', 'EntryAbility', {
          number: 1000
        });
        startAbility('com.ohos.appa', 'EntryAbility', {
          id: 2,
          number: 1000
        });

      } catch (error) {
        hilog.info(domain, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} error: ${JSON.stringify(error)}`);
        expect().assertFail();
        done();
      }

    })

    /**
     * @tc.number    : SUB_Ability_AbilityRuntime_LaunchType_AbilityMultiInstance_0900
     * @tc.name      : When there are multiple abilities in a mission, the ability of the specified type
     *                 is pulled up across the mission
     * @tc.desc      : to start multiple abilities and check life circle method
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it("SUB_Ability_AbilityRuntime_LaunchType_AbilityMultiInstance_0900", 3, async function (done) {
      const TEST_CASE_NAME = 'SUB_Ability_AbilityRuntime_LaunchType_AbilityMultiInstance_0900';
      try {
        let commonEventSubscribeInfo = {
          events: [EVENT_AbilityMultiInstance_1000_Ability, EVENT_AbilityMultiInstance_1000_Application]
        }
        await commonEvent.createSubscriber(commonEventSubscribeInfo).then((subscriber) => {
          commonEvent.subscribe(subscriber, (err, commonEventData) => {
            hilog.info(domain, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} subscribe success :
              ${JSON.stringify(commonEventData)},err: ${JSON.stringify(err)}`)
            let result = commonEventData.parameters.data;
            if (commonEventData.event == EVENT_AbilityMultiInstance_1000_Application) {
              hilog.info(domain, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} event: ${EVENT_AbilityMultiInstance_1000_Ability}`);
              expect(result).assertTrue()
            }
            else if (commonEventData.event == EVENT_AbilityMultiInstance_1000_Ability) {
              hilog.info(domain, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} event: ${EVENT_AbilityMultiInstance_1000_Ability}`);
              expect(result).assertTrue()
              commonEvent.unsubscribe(subscriber, (err, data) => {
                done();
              });
            } else {
              expect().assertFail();
              done();
            }
          })
        })
        startAbility('com.ohos.appb', 'EntryAbility', {
          number: 1000
        });
        startAbility('com.ohos.appa', 'EntryAbility', {
          id: 1,
          number: 900
        })
        startAbility('com.ohos.appc', 'EntryAbility', {
          number: 1000
        });
        startAbility('com.ohos.appa', 'EntryAbility', {
          id: 1,
          number: 900
        })
      } catch (error) {
        hilog.info(domain, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} error: ${JSON.stringify(error)}`);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : SUB_Ability_AbilityRuntime_LaunchType_AbilityMultiInstance_0700
     * @tc.name      : When there are multiple abilities in a mission, the non-stack top-of-the-stack specified
     *                 type ability is pulled up across missions
     * @tc.desc      : to start multiple abilities and check life circle method
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it("SUB_Ability_AbilityRuntime_LaunchType_AbilityMultiInstance_0700", 3, async function (done) {
      const TEST_CASE_NAME = 'SUB_Ability_AbilityRuntime_LaunchType_AbilityMultiInstance_0700';
      try {
        let commonEventSubscribeInfo = {
          events: [EVENT_AbilityMultiInstance_1000_Ability, EVENT_AbilityMultiInstance_1000_Application]
        }
        await commonEvent.createSubscriber(commonEventSubscribeInfo).then((subscriber) => {
          commonEvent.subscribe(subscriber, (err, commonEventData) => {
            hilog.info(domain, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} subscribe success :
              ${JSON.stringify(commonEventData)},err: ${JSON.stringify(err)}`)
            let result = commonEventData.parameters.data;
            if (commonEventData.event == EVENT_AbilityMultiInstance_1000_Application) {
              hilog.info(domain, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} event: ${EVENT_AbilityMultiInstance_1000_Ability}`);
              expect(result).assertTrue()
            }
            else if (commonEventData.event == EVENT_AbilityMultiInstance_1000_Ability) {
              hilog.info(domain, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} event: ${EVENT_AbilityMultiInstance_1000_Ability}`);
              expect(result).assertTrue()
              commonEvent.unsubscribe(subscriber, (err, data) => {
                done();
              });
            } else {
              expect().assertFail();
              done();
            }
          })
        })
        startAbility('com.ohos.appa', 'EntryAbility', {
          id: 1,
          number: 700
        });
        startAbility('com.ohos.appb', 'EntryAbility', {
          number: 1000
        });
        startAbility('com.ohos.appc', 'EntryAbility', {
          number: 1000
        });
        startAbility('com.ohos.appa', 'EntryAbility', {
          id: 1,
          number: 700
        });
      } catch (error) {
        hilog.info(domain, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} error: ${JSON.stringify(error)}`);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : SUB_Ability_AbilityRuntime_LaunchType_AbilityMultiInstance_1600
     * @tc.name      : The key is not set in the specified type ability when starting the onAcceptWant callback
     * @tc.desc      : to start specified abilities and not set the ability id
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it("SUB_Ability_AbilityRuntime_LaunchType_AbilityMultiInstance_1600", 3, async function (done) {
      const TEST_CASE_NAME = 'SUB_Ability_AbilityRuntime_LaunchType_AbilityMultiInstance_1600';
      try {
        let commonEventSubscribeInfo = {
          events: [EVENT_AbilityMultiInstance_1000_Ability]
        }
        await commonEvent.createSubscriber(commonEventSubscribeInfo).then((subscriber) => {
          commonEvent.subscribe(subscriber, (err, commonEventData) => {
            hilog.info(domain, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} subscribe success :
              ${JSON.stringify(commonEventData)},err: ${JSON.stringify(err)}`)
            let result = commonEventData.parameters.data;
            expect(result).assertTrue()
            commonEvent.unsubscribe(subscriber, (err, data) => {
              done();
            });
          })
        })
        startAbility('com.ohos.appa', 'EntryAbility', {
          number: 1600
        });
      } catch (error) {
        hilog.info(domain, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} error: ${JSON.stringify(error)}`);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : SUB_Ability_AbilityRuntime_LaunchType_AbilityMultiInstance_1700
     * @tc.name      : The specified type ability is enabled and the key value is set to undefined in the
     *                 onAcceptWant callback
     * @tc.desc      : to start specified abilities and not set the ability id
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it("SUB_Ability_AbilityRuntime_LaunchType_AbilityMultiInstance_1700", 3, async function (done) {
      const TEST_CASE_NAME = 'SUB_Ability_AbilityRuntime_LaunchType_AbilityMultiInstance_1700';
      try {
        let commonEventSubscribeInfo = {
          events: [EVENT_AbilityMultiInstance_1000_Ability]
        }
        await commonEvent.createSubscriber(commonEventSubscribeInfo).then((subscriber) => {
          commonEvent.subscribe(subscriber, (err, commonEventData) => {
            hilog.info(domain, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} subscribe success :
              ${JSON.stringify(commonEventData)},err: ${JSON.stringify(err)}`)
            let result = commonEventData.parameters.data;
            expect(result).assertTrue()
            commonEvent.unsubscribe(subscriber, (err, data) => {
              done();
            });
          })
        })
        startAbility('com.ohos.appa', 'EntryAbility', {
          number: 1700
        });
      } catch (error) {
        hilog.info(domain, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} error: ${JSON.stringify(error)}`);
        expect().assertFail();
        done();
      }
    })


    /**
     * @tc.number    : SUB_Ability_AbilityRuntime_LaunchType_AbilityMultiInstance_1300
     * @tc.name      : The basic function of the standard type ability
     * @tc.desc      : to start standard abilities and test the life circle method
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 1
     */
    it("SUB_Ability_AbilityRuntime_LaunchType_AbilityMultiInstance_1300", 1, async function (done) {
      const TEST_CASE_NAME = 'SUB_Ability_AbilityRuntime_LaunchType_AbilityMultiInstance_1300';
      try {
        let commonEventSubscribeInfo = {
          events: [EVENT_AbilityMultiInstance_1300_Ability]
        }
        await commonEvent.createSubscriber(commonEventSubscribeInfo).then((subscriber) => {
          commonEvent.subscribe(subscriber, (err, commonEventData) => {
            hilog.info(domain, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} subscribe success :
              ${JSON.stringify(commonEventData)},err: ${JSON.stringify(err)}`)
            let result = commonEventData.parameters.data;
            expect(result).assertTrue()
            commonEvent.unsubscribe(subscriber, (err, data) => {
              done();
            });
          })
        })
        startAbility('com.ohos.appb', 'EntryAbility', {
          number: 1300
        });
      } catch (error) {
        hilog.info(domain, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} error: ${JSON.stringify(error)}`);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : SUB_Ability_AbilityRuntime_LaunchType_AbilityMultiInstance_0100
     * @tc.name      : Pull up again with the mission to specify the specified type ability
     * @tc.desc      : To start abilities and test the life circle method
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it("SUB_Ability_AbilityRuntime_LaunchType_AbilityMultiInstance_0100", 3, async function (done) {
      const TEST_CASE_NAME = 'SUB_Ability_AbilityRuntime_LaunchType_AbilityMultiInstance_0100';
      try {
        let commonEventSubscribeInfo = {
          events: [EVENT_AbilityMultiInstance_1000_Ability, EVENT_AbilityMultiInstance_1000_Application]
        }
        await commonEvent.createSubscriber(commonEventSubscribeInfo).then((subscriber) => {
          commonEvent.subscribe(subscriber, (err, commonEventData) => {
            hilog.info(domain, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} subscribe success :
              ${JSON.stringify(commonEventData)},err: ${JSON.stringify(err)}`)
            let result = commonEventData.parameters.data;
            if (commonEventData.event == EVENT_AbilityMultiInstance_1000_Application) {
              hilog.info(domain, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} event: ${EVENT_AbilityMultiInstance_1000_Ability}`);
              expect(result).assertTrue()
            }
            else if (commonEventData.event == EVENT_AbilityMultiInstance_1000_Ability) {
              hilog.info(domain, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} event: ${EVENT_AbilityMultiInstance_1000_Ability}`);
              expect(result).assertTrue()
              commonEvent.unsubscribe(subscriber, (err, data) => {
                done();
              });
            } else {
              expect().assertFail();
              done();
            }
          })
        })
        startAbility('com.ohos.appa', 'EntryAbility', {
          id: 1,
          number: 100
        });
        startAbility('com.ohos.appb', 'EntryAbility', {
          number: 1000
        });
        startAbility('com.ohos.appa', 'EntryAbility', {
          id: 1,
          number: 100
        });
      } catch (error) {
        hilog.info(domain, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} error: ${JSON.stringify(error)}`);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : SUB_Ability_AbilityRuntime_LaunchType_AbilityMultiInstance_0200
     * @tc.name      : Start a new specified type of ability in the same mission
     * @tc.desc      : To start abilities and test the life circle method
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it("SUB_Ability_AbilityRuntime_LaunchType_AbilityMultiInstance_0200", 3, async function (done) {
      const TEST_CASE_NAME = 'SUB_Ability_AbilityRuntime_LaunchType_AbilityMultiInstance_0200';
      try {
        let commonEventSubscribeInfo = {
          events: [EVENT_AbilityMultiInstance_1000_Ability, EVENT_AbilityMultiInstance_1000_Application]
        }
        await commonEvent.createSubscriber(commonEventSubscribeInfo).then((subscriber) => {
          commonEvent.subscribe(subscriber, (err, commonEventData) => {
            hilog.info(domain, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} subscribe success :
              ${JSON.stringify(commonEventData)},err: ${JSON.stringify(err)}`)
            let result = commonEventData.parameters.data;
            if (commonEventData.event == EVENT_AbilityMultiInstance_1000_Application) {
              hilog.info(domain, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} event: ${EVENT_AbilityMultiInstance_1000_Ability}`);
              expect(result).assertTrue()
            }
            else if (commonEventData.event == EVENT_AbilityMultiInstance_1000_Ability) {
              hilog.info(domain, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} event: ${EVENT_AbilityMultiInstance_1000_Ability}`);
              expect(result).assertTrue()
              commonEvent.unsubscribe(subscriber, (err, data) => {
                done();
              });
            } else {
              expect().assertFail();
              done();
            }
          })
        })
        startAbility('com.ohos.appa', 'EntryAbility', {
          id: 1,
          number: 1000
        });
        startAbility('com.ohos.appb', 'EntryAbility', {
          number: 1000
        });
        startAbility('com.ohos.appa', 'EntryAbility', {
          id: 2,
          number: 1000
        });
      } catch (error) {
        hilog.info(domain, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} error: ${JSON.stringify(error)}`);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : SUB_Ability_AbilityRuntime_LaunchType_AbilityMultiInstance_1200
     * @tc.name      : In the same application multi-ability scenario, start a different instance of the specified type of ability
     * @tc.desc      : To start abilities and test the life circle method
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it("SUB_Ability_AbilityRuntime_LaunchType_AbilityMultiInstance_1200", 3, async function (done) {
      const TEST_CASE_NAME = 'SUB_Ability_AbilityRuntime_LaunchType_AbilityMultiInstance_1200';
      try {
        let commonEventSubscribeInfo = {
          events: [EVENT_AbilityMultiInstance_1000_Ability, EVENT_AbilityMultiInstance_1000_Application]
        }
        await commonEvent.createSubscriber(commonEventSubscribeInfo).then((subscriber) => {
          commonEvent.subscribe(subscriber, (err, commonEventData) => {
            hilog.info(domain, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} subscribe success :
              ${JSON.stringify(commonEventData)},err: ${JSON.stringify(err)}`)
            let result = commonEventData.parameters.data;
            if (commonEventData.event == EVENT_AbilityMultiInstance_1000_Application) {
              hilog.info(domain, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} event: ${EVENT_AbilityMultiInstance_1000_Ability}`);
              expect(result).assertTrue()
            } else if (commonEventData.event == EVENT_AbilityMultiInstance_1000_Ability) {
              hilog.info(domain, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} event: ${EVENT_AbilityMultiInstance_1000_Ability}`);
              expect(result).assertTrue()
              commonEvent.unsubscribe(subscriber, (err, data) => {
                done();
              });
            } else {
              expect().assertFail();
              done();
            }
          })
        })
        startAbility('com.ohos.appd', 'EntryAbility', {
          id: 1,
          number: 1000
        });
        startAbility('com.ohos.appd', 'SecondAbility', {
          number: 1000
        });
        startAbility('com.ohos.appd', 'ThirdAbility', {
          number: 1000
        });
        startAbility('com.ohos.appd', 'EntryAbility', {
          id: 2,
          number: 1000
        });
      } catch (error) {
        hilog.info(domain, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} error: ${JSON.stringify(error)}`);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : SUB_Ability_AbilityRuntime_LaunchType_AbilityMultiInstance_1100
     * @tc.name      : In the same application multi-ability scenario, pull up the specified type of ability
     * @tc.desc      : To start abilities in same application and test the life circle method
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it("SUB_Ability_AbilityRuntime_LaunchType_AbilityMultiInstance_1100", 3, async function (done) {
      const TEST_CASE_NAME = 'SUB_Ability_AbilityRuntime_LaunchType_AbilityMultiInstance_1100';
      try {
        let commonEventSubscribeInfo = {
          events: [EVENT_AbilityMultiInstance_1000_Ability, EVENT_AbilityMultiInstance_1000_Application]
        }
        await commonEvent.createSubscriber(commonEventSubscribeInfo).then((subscriber) => {
          commonEvent.subscribe(subscriber, (err, commonEventData) => {
            hilog.info(domain, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} subscribe success :
              ${JSON.stringify(commonEventData)},err: ${JSON.stringify(err)}`)
            let result = commonEventData.parameters.data;
            if (commonEventData.event == EVENT_AbilityMultiInstance_1000_Application) {
              hilog.info(domain, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} event: ${EVENT_AbilityMultiInstance_1000_Ability}`);
              expect(result).assertTrue()
            } else if (commonEventData.event == EVENT_AbilityMultiInstance_1000_Ability) {
              hilog.info(domain, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} event: ${EVENT_AbilityMultiInstance_1000_Ability}`);
              expect(result).assertTrue()
              commonEvent.unsubscribe(subscriber, (err, data) => {
                done();
              });
            } else {
              expect().assertFail();
              done();
            }
          })
        })
        startAbility('com.ohos.appd', 'EntryAbility', {
          id: 1,
          number: 1100
        });
        startAbility('com.ohos.appd', 'SecondAbility', {
          number: 1000
        });
        startAbility('com.ohos.appd', 'ThirdAbility', {
          number: 1000
        });
        startAbility('com.ohos.appd', 'EntryAbility', {
          id: 1,
          number: 1100
        });
      } catch (error) {
        hilog.info(domain, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} error: ${JSON.stringify(error)}`);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : SUB_Ability_AbilityRuntime_LaunchType_AbilityMultiInstance_0600
     * @tc.name      : Instances of different types of specified ability are started consecutively
     * @tc.desc      : To start specified abilities in same application
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it("SUB_Ability_AbilityRuntime_LaunchType_AbilityMultiInstance_0600", 3, async function (done) {
      const TEST_CASE_NAME = 'SUB_Ability_AbilityRuntime_LaunchType_AbilityMultiInstance_0600';
      try {
        let commonEventSubscribeInfo = {
          events: [EVENT_AbilityMultiInstance_1000_Ability, EVENT_AbilityMultiInstance_1000_Application]
        }
        await commonEvent.createSubscriber(commonEventSubscribeInfo).then((subscriber) => {
          commonEvent.subscribe(subscriber, (err, commonEventData) => {
            hilog.info(domain, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} subscribe success :
              ${JSON.stringify(commonEventData)},err: ${JSON.stringify(err)}`)
            let result = commonEventData.parameters.data;
            if (commonEventData.event == EVENT_AbilityMultiInstance_1000_Application) {
              hilog.info(domain, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} event: ${EVENT_AbilityMultiInstance_1000_Ability}`);
              expect(result).assertTrue()
            } else if (commonEventData.event == EVENT_AbilityMultiInstance_1000_Ability) {
              hilog.info(domain, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} event: ${EVENT_AbilityMultiInstance_1000_Ability}`);
              expect(result).assertTrue()
              commonEvent.unsubscribe(subscriber, (err, data) => {
                done();
              });
            } else {
              expect().assertFail();
              done();
            }
          })
        })
        startAbility('com.ohos.appa', 'EntryAbility', {
          id: 1,
          number: 1000
        });
        startAbility('com.ohos.appa', 'EntryAbility', {
          id: 2,
          number: 1000
        });
      } catch (error) {
        hilog.info(domain, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} error: ${JSON.stringify(error)}`);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : SUB_Ability_AbilityRuntime_LaunchType_AbilityMultiInstance_0500
     * @tc.name      : Start the same specified ability instance consecutively
     * @tc.desc      : To start same specified ability two times in same application
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it("SUB_Ability_AbilityRuntime_LaunchType_AbilityMultiInstance_0500", 3, async function (done) {
      const TEST_CASE_NAME = 'SUB_Ability_AbilityRuntime_LaunchType_AbilityMultiInstance_0500';
      try {
        let commonEventSubscribeInfo = {
          events: [EVENT_AbilityMultiInstance_1000_Ability, EVENT_AbilityMultiInstance_1000_Application]
        }
        await commonEvent.createSubscriber(commonEventSubscribeInfo).then((subscriber) => {
          commonEvent.subscribe(subscriber, (err, commonEventData) => {
            hilog.info(domain, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} subscribe success :
              ${JSON.stringify(commonEventData)},err: ${JSON.stringify(err)}`)
            let result = commonEventData.parameters.data;
            if (commonEventData.event == EVENT_AbilityMultiInstance_1000_Application) {
              hilog.info(domain, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} event: ${EVENT_AbilityMultiInstance_1000_Ability}`);
              expect(result).assertTrue()
            } else if (commonEventData.event == EVENT_AbilityMultiInstance_1000_Ability) {
              hilog.info(domain, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} event: ${EVENT_AbilityMultiInstance_1000_Ability}`);
              expect(result).assertTrue()
              commonEvent.unsubscribe(subscriber, (err, data) => {
                done();
              });
            } else {
              expect().assertFail();
              done();
            }
          })
        })
        startAbility('com.ohos.appa', 'EntryAbility', {
          id: 1,
          number: 500
        });
        startAbility('com.ohos.appa', 'EntryAbility', {
          id: 1,
          number: 500
        });
      } catch (error) {
        hilog.info(domain, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} error: ${JSON.stringify(error)}`);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : SUB_Ability_AbilityRuntime_LaunchType_AbilityMultiInstance_0300
     * @tc.name      : Interval mission when pulling up again specifies the specified type ability
     * @tc.desc      : To start abilities in different application with different launch type
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it("SUB_Ability_AbilityRuntime_LaunchType_AbilityMultiInstance_0300", 3, async function (done) {
      const TEST_CASE_NAME = 'SUB_Ability_AbilityRuntime_LaunchType_AbilityMultiInstance_0300';
      try {
        let commonEventSubscribeInfo = {
          events: [EVENT_AbilityMultiInstance_1000_Ability, EVENT_AbilityMultiInstance_1000_Application]
        }
        await commonEvent.createSubscriber(commonEventSubscribeInfo).then((subscriber) => {
          commonEvent.subscribe(subscriber, (err, commonEventData) => {
            hilog.info(domain, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} subscribe success :
              ${JSON.stringify(commonEventData)},err: ${JSON.stringify(err)}`)
            let result = commonEventData.parameters.data;
            if (commonEventData.event == EVENT_AbilityMultiInstance_1000_Application) {
              hilog.info(domain, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} event: ${EVENT_AbilityMultiInstance_1000_Ability}`);
              expect(result).assertTrue()
            } else if (commonEventData.event == EVENT_AbilityMultiInstance_1000_Ability) {
              hilog.info(domain, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} event: ${EVENT_AbilityMultiInstance_1000_Ability}`);
              expect(result).assertTrue()
              commonEvent.unsubscribe(subscriber, (err, data) => {
                done();
              });
            } else {
              expect().assertFail();
              done();
            }
          })
        })
        startAbility('com.ohos.appa', 'EntryAbility', {
          id: 1,
          number: 300
        });
        startAbility('com.ohos.appc', 'EntryAbility', {
          number: 1000
        });
        startAbility('com.ohos.appa', 'EntryAbility', {
          id: 1,
          number: 300
        });
      } catch (error) {
        hilog.info(domain, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} error: ${JSON.stringify(error)}`);
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number    : SUB_Ability_AbilityRuntime_LaunchType_AbilityMultiInstance_0400
     * @tc.name      : Interval mission when starting a new specified type of ability
     * @tc.desc      : To start abilities in different application with different launch type
     * @tc.size      : MediumTest
     * @tc.type      : Function
     * @tc.level     : Level 3
     */
    it("SUB_Ability_AbilityRuntime_LaunchType_AbilityMultiInstance_0400", 3, async function (done) {
      const TEST_CASE_NAME = 'SUB_Ability_AbilityRuntime_LaunchType_AbilityMultiInstance_0400';
      try {
        let commonEventSubscribeInfo = {
          events: [EVENT_AbilityMultiInstance_1000_Ability, EVENT_AbilityMultiInstance_1000_Application]
        }
        await commonEvent.createSubscriber(commonEventSubscribeInfo).then((subscriber) => {
          commonEvent.subscribe(subscriber, (err, commonEventData) => {
            hilog.info(domain, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} subscribe success :
              ${JSON.stringify(commonEventData)},err: ${JSON.stringify(err)}`)
            let result = commonEventData.parameters.data;
            if (commonEventData.event == EVENT_AbilityMultiInstance_1000_Application) {
              hilog.info(domain, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} event: ${EVENT_AbilityMultiInstance_1000_Ability}`);
              expect(result).assertTrue()
            } else if (commonEventData.event == EVENT_AbilityMultiInstance_1000_Ability) {
              hilog.info(domain, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} event: ${EVENT_AbilityMultiInstance_1000_Ability}`);
              expect(result).assertTrue()
              commonEvent.unsubscribe(subscriber, (err, data) => {
                done();
              });
            } else {
              expect().assertFail();
              done();
            }
          })
        })
        startAbility('com.ohos.appa', 'EntryAbility', {
          id: 1,
          number: 1000
        });
        startAbility('com.ohos.appc', 'EntryAbility', {
          number: 1000
        });
        startAbility('com.ohos.appa', 'EntryAbility', {
          id: 2,
          number: 1000
        });
      } catch (error) {
        hilog.info(domain, TAG, '%{public}s', `${TEST_SUITE_NAME}#${TEST_CASE_NAME} error: ${JSON.stringify(error)}`);
        expect().assertFail();
        done();
      }
    })

  })
}