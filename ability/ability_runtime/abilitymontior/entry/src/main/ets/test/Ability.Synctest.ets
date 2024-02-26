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
import Subscriber from '@ohos.commonEvent';
import commonEventManager from '@ohos.commonEventManager';
import abilityDelegatorRegistry from '@ohos.app.ability.abilityDelegatorRegistry';

let commonEventSubscribeInfo: commonEventManager.CommonEventSubscribeInfo = {
  events: ["MainAbility5_onWindowStageDestroy"]
}

function sleep(time: number) {
  return new Promise<void>((resolve) => setTimeout(resolve, time));
}

export default function abilityTestSync() {
  let monitor: abilityDelegatorRegistry.AbilityMonitor;
  let abilitydelegator: abilityDelegatorRegistry.AbilityDelegator = AppStorage.get<abilityDelegatorRegistry.AbilityDelegator>("abilitydelegator");
  describe('ActsAbilityMonitorSync', () => {
    afterEach(async (done: Function) => {
      console.info("afterEach each called");
      if (monitor) {
        console.info("afterEach removeAbilityMonitor monitor");
        abilitydelegator.removeAbilityMonitor(monitor, () => {
          monitor = undefined;
        });
        await sleep(100);
      }
      done();
    })

    /**
     * @tc.number: ACTS_AddAbilityMonitorSync_0100
     * @tc.name: Verify that the addAbilityMonitorSync interface functions normally.
     * @tc.desc: Use addAbilityMonitorSync to add a monitor then use startAbility to trigger onAbilityCreate (Callback).
     */
    it('ACTS_AddAbilityMonitorSync_0100', 0, async (done: Function) => {
      let CallbackFlag = 0;
      console.log("====>ACTS_AddAbilityMonitorSync_0100--addAbilityMonitorSync--Subscriber====>");
      Subscriber.createSubscriber(commonEventSubscribeInfo, (err, sub) => {
        Subscriber.subscribe(sub, (err, msg) => {
          Subscriber.unsubscribe(sub);
          expect(CallbackFlag).assertEqual(1);
          done();
        })
      })


      console.log("====>ACTS_AddAbilityMonitorSync_0100--addAbilityMonitorSync--start====>");
      monitor = {
        abilityName: 'MainAbility5',
        onAbilityCreate: () => {
          console.log("====>ACTS_AddAbilityMonitorSync_0100--onAbilityCreate====>");
          CallbackFlag = 1;
        }
      }
      try {
        abilitydelegator.addAbilityMonitorSync(monitor);
      } catch (err) {
        expect().assertFail();
        console.log("====>ACTS_AddAbilityMonitorSync_0100--addAbilityMonitorSync--fail====>" + JSON.stringify(err));
        done();
      }
      console.log("====>ACTS_AddAbilityMonitorSync_0100--addAbilityMonitorSync--end====>");

      abilitydelegator.startAbility(
        {
          bundleName: 'com.example.abilitymonitortest',
          abilityName: 'MainAbility5'
        }).then(async () => {
        console.log("====>ACTS_AddAbilityMonitorSync_0100--startAbility success====>");
      })
    })

    /**
     * @tc.number: ACTS_AddAbilityMonitorSync_0200
     * @tc.name: Verify that the addAbilityMonitorSync interface functions normally.
     * @tc.desc: Use addAbilityMonitorSync to add a monitor then use startAbility to
     * trigger onAbilityForeground (Callback).
     */
    it('ACTS_AddAbilityMonitorSync_0200', 0, async (done: Function) => {
      let CallbackFlag = 0;
      console.log("====>ACTS_AddAbilityMonitorSync_0200--addAbilityMonitorSync--Subscriber====>");
      Subscriber.createSubscriber(commonEventSubscribeInfo, (err, sub) => {
        Subscriber.subscribe(sub, (err, msg) => {
          Subscriber.unsubscribe(sub);
          expect(CallbackFlag).assertEqual(1)
          done()
        })
      })

      console.log("====>ACTS_AddAbilityMonitorSync_0200--addAbilityMonitorSync--start====>");
      monitor = {
        abilityName: 'MainAbility5',
        onAbilityForeground: () => {
          console.log("====>ACTS_AddAbilityMonitorSync_0200--onAbilityCreate====>");
          CallbackFlag = 1;
        },
        onWindowStageRestore: (Ability) => {
          console.info("===>ACTS_AddAbilityMonitorSync_0200 onWindowStageRestore");
        }
      }
      try {
        abilitydelegator.addAbilityMonitorSync(monitor);
      } catch (err) {
        expect().assertFail()
        console.log("====>ACTS_AddAbilityMonitorSync_0200--addAbilityMonitorSync--fail====>" + JSON.stringify(err));
        done()
      }
      console.log("====>ACTS_AddAbilityMonitorSync_0200--end addAbilityMonitorSync====>");

      abilitydelegator.startAbility(
        {
          bundleName: 'com.example.abilitymonitortest',
          abilityName: 'MainAbility5'
        }).then(async () => {
        console.log("====>ACTS_AddAbilityMonitorSync_0200--startAbility success====>");
      })
    })

    /**
     * @tc.number: ACTS_AddAbilityMonitorSync_0300
     * @tc.name: Verify that the addAbilityMonitorSync interface functions normally.
     * @tc.desc: Use addAbilityMonitorSync to add a monitor then use startAbility to trigger
     * onAbilityBackground (Callback).
     */
    it('ACTS_AddAbilityMonitorSync_0300', 0, async (done: Function) => {
      let CallbackFlag = 0;
      console.log("====>ACTS_AddAbilityMonitorSync_0300--addAbilityMonitorSync--Subscriber====>");
      Subscriber.createSubscriber(commonEventSubscribeInfo, (err, sub) => {
        Subscriber.subscribe(sub, (err, msg) => {
          Subscriber.unsubscribe(sub);
          expect(CallbackFlag).assertEqual(1);
          done();
        })
      })

      console.log("====>ACTS_AddAbilityMonitorSync_0300--addAbilityMonitorSync--start====>");
      monitor = {
        abilityName: 'MainAbility5',
        onAbilityBackground: () => {
          console.log("====>ACTS_AddAbilityMonitorSync_0300 onAbilityBackgroundPromise ====>");
          CallbackFlag = 1;
        }
      }
      try {
        abilitydelegator.addAbilityMonitorSync(monitor);
      } catch (err) {
        console.log("====>ACTS_AddAbilityMonitorSync_0300--error addAbilityMonitorSync====>" + JSON.stringify(err));
        expect().assertFail();
        done();
      }
      console.log("====>ACTS_AddAbilityMonitorSync_0300--addAbilityMonitorSync--end====>");

      abilitydelegator.startAbility(
        {
          bundleName: 'com.example.abilitymonitortest',
          abilityName: 'MainAbility5'
        }).then(async () => {
        console.log("====>ACTS_AddAbilityMonitorSync_0300--startAbility success====>");
      })
    })

    /**
     * @tc.number: ACTS_AddAbilityMonitorSync_0400
     * @tc.name: Verify that the addAbilityMonitorSync interface functions normally.
     * @tc.desc: Use addAbilityMonitorSync to add a monitor then use startAbility
     * to trigger onAbilityDestroy (Callback).
     */
    it('ACTS_AddAbilityMonitorSync_0400', 0, async (done: Function) => {
      let CallbackFlag = 0;
      console.log("====>ACTS_AddAbilityMonitorSync_0400--addAbilityMonitorSync--Subscriber====>");
      Subscriber.createSubscriber(commonEventSubscribeInfo, (err, sub) => {
        Subscriber.subscribe(sub, (err, msg) => {
          Subscriber.unsubscribe(sub);
          expect(CallbackFlag).assertEqual(1);
          done();
        })
      })

      console.log("====>ACTS_AddAbilityMonitorSync_0400--addAbilityMonitorSync--start====>");
      try {
        abilitydelegator.addAbilityMonitorSync(
          {
            abilityName: 'MainAbility5',
            onAbilityDestroy: () => {
              console.log("====>ACTS_AddAbilityMonitorSync_0400 onAbilityDestroy ====>");
              CallbackFlag = 1;
            }
          })
      } catch (err) {
        console.log("====>ACTS_AddAbilityMonitorSync_0400--addAbilityMonitorSync--error====>" + JSON.stringify(err));
        expect().assertFail();
        done();
      }
      console.log("====>ACTS_AddAbilityMonitorSync_0400--addAbilityMonitorSync--end====>");
      abilitydelegator.startAbility({
        bundleName: 'com.example.abilitymonitortest', abilityName: 'MainAbility5'
      }).then(async () => {
        console.log("====>ACTS_AddAbilityMonitorSync_0400--startAbility success====>");
      })
    })

    /**
     * @tc.number: ACTS_AddAbilityMonitorSync_0500
     * @tc.name: Verify that the addAbilityMonitorSync interface functions normally.
     * @tc.desc: Use addAbilityMonitorSync to add a monitor then use startAbility
     * to trigger onWindowStageCreate (Callback).
     */
    it('ACTS_AddAbilityMonitorSync_0500', 0, async (done: Function) => {
      let CallbackFlag = 0;
      console.log("====>ACTS_AddAbilityMonitorSync_0500--addAbilityMonitorSync--Subscriber====>");
      Subscriber.createSubscriber(commonEventSubscribeInfo, (err, sub) => {
        Subscriber.subscribe(sub, (err, msg) => {
          Subscriber.unsubscribe(sub);
          expect(CallbackFlag).assertEqual(1);
          done();
        })
      })

      console.log("====>ACTS_AddAbilityMonitorSync_0500--addAbilityMonitorSync--start====>");
      monitor = {
        abilityName: 'MainAbility5',
        onWindowStageCreate: () => {
          console.log("====>ACTS_AddAbilityMonitorSync_0500 onWindowStageCreate ====>");
          CallbackFlag = 1;
        }
      }
      try {
        abilitydelegator.addAbilityMonitorSync(monitor);
      } catch (err) {
        console.log("====>ACTS_AddAbilityMonitorSync_0500--addAbilityMonitorSync--error====>" + JSON.stringify(err));
        expect().assertFail();
        done();
      }
      console.log("====>ACTS_AddAbilityMonitorSync_0500--addAbilityMonitorSync--end====>");

      abilitydelegator.startAbility(
        {
          bundleName: 'com.example.abilitymonitortest',
          abilityName: 'MainAbility5'
        }).then(async () => {
        console.log("====>ACTS_AddAbilityMonitorSync_0500--startAbility success====>");
      })
    })

    /**
     * @tc.number: ACTS_AddAbilityMonitorSync_0600
     * @tc.name: Verify that the addAbilityMonitor interface functions normally.
     * @tc.desc: Use addAbilityMonitor to add a monitor then use startAbility
     * to trigger onWindowStageDestroy (Callback).
     */
    it('ACTS_AddAbilityMonitorSync_0600', 0, async (done: Function) => {
      let CallbackFlag = 0;
      console.log("====>ACTS_AddAbilityMonitorSync_0600--addAbilityMonitorSync--Subscriber====>");
      Subscriber.createSubscriber(commonEventSubscribeInfo, (err, sub) => {
        Subscriber.subscribe(sub, (err, msg) => {
          Subscriber.unsubscribe(sub);
          expect(CallbackFlag).assertEqual(1);
          done();
        })
      })

      console.log("====>ACTS_AddAbilityMonitorSync_0600--addAbilityMonitorSync--start====>");
      monitor = {
        abilityName: 'MainAbility5',
        onWindowStageDestroy: () => {
          console.log("====>ACTS_AddAbilityMonitor_0600 onWindowStageDestroy ====>");
          CallbackFlag = 1;
        }
      }
      try {
        abilitydelegator.addAbilityMonitorSync(monitor);
      } catch (err) {
        console.log("====>ACTS_AddAbilityMonitorSync_0600--addAbilityMonitorSync--error====>" + JSON.stringify(err));
        expect().assertFail();
        done();
      }

      console.log("====>ACTS_AddAbilityMonitorSync_0600--addAbilityMonitorSync--end====>");
      abilitydelegator.startAbility(
        {
          bundleName: 'com.example.abilitymonitortest',
          abilityName: 'MainAbility5'
        }).then(async () => {
        console.log("====>0600startAbility success====>");
      })
    })


    /**
     * @tc.number: ACTS_RemoveAbilityMonitorSync_0100
     * @tc.name: Verify that the removeAbilityMonitorSync interface functions normally.
     * @tc.desc: Use addAbilityMonitorSync to add monitor and use removeAbilityMonitorSync
     * to remove monitor then trigger
     *           onAbilityCreate (Callback).
     */
    it('ACTS_RemoveAbilityMonitorSync_0100', 0, async (done: Function) => {
      let CallbackFlag = 0;
      console.log("====>ACTS_AddAbilityMonitorSync_0600--addAbilityMonitorSync--Subscriber====>");
      Subscriber.createSubscriber(commonEventSubscribeInfo, (err, sub) => {
        Subscriber.subscribe(sub, (err, msg) => {
          Subscriber.unsubscribe(sub);
          expect(CallbackFlag).assertEqual(0);
          done();
        })
      })
      monitor = {
        abilityName: 'MainAbility5',
        onAbilityCreate: () => {
          CallbackFlag = -1;
          console.log("====>ACTS_RemoveAbilityMonitorSync_0100 onAbilityCreate ====>");
        }
      }

      try {
        console.log("====>ACTS_RemoveAbilityMonitorSync_0100 addAbilityMonitorSync start====>");
        abilitydelegator.addAbilityMonitorSync(monitor);
        console.log("====>ACTS_RemoveAbilityMonitorSync_0100 ACTS_RemoveAbilityMonitorSync_0100 start====>");
        abilitydelegator.removeAbilityMonitorSync(monitor);
      } catch (err) {
        console.log("====>ACTS_RemoveAbilityMonitorSync_0100 catch error ====>" + JSON.stringify(err));
        expect().assertFail();
        done();
      }

      console.log("====>ACTS_RemoveAbilityMonitorSync_0100 startAbility ====>");
      abilitydelegator.startAbility(
        {
          bundleName: 'com.example.abilitymonitortest',
          abilityName: 'MainAbility5'
        }).then(async () => {
        console.log("====>ACTS_RemoveAbilityMonitorSync_0100 startAbility end====>");
      })
    })

    /**
     * @tc.number: ACTS_RemoveAbilityMonitorSync_0200
     * @tc.name: Verify that the removeAbilityMonitorSync interface functions normally.
     * @tc.desc: Use addAbilityMonitorSync to add monitor and use removeAbilityMonitorSync
     * to remove monitor then trigger
     *           onAbilityForeground (Callback).
     */
    it('ACTS_RemoveAbilityMonitorSync_0200', 0, async (done: Function) => {
      let CallbackFlag = 0;
      console.log("====>ACTS_AddAbilityMonitorSync_0600--addAbilityMonitorSync--Subscriber====>");
      Subscriber.createSubscriber(commonEventSubscribeInfo, (err, sub) => {
        Subscriber.subscribe(sub, (err, msg) => {
          Subscriber.unsubscribe(sub);
          expect(CallbackFlag).assertEqual(0);
          done();
        })
      })

      monitor = {
        abilityName: 'MainAbility5',
        onAbilityForeground: () => {
          CallbackFlag = -1;
          console.log("====>ACTS_RemoveAbilityMonitorSync_0200 onAbilityForeground ====>");
        }
      }
      try {
        console.log("====>ACTS_RemoveAbilityMonitorSync_0200 addAbilityMonitorSync start====>");
        abilitydelegator.addAbilityMonitorSync(monitor);
        console.log("====>ACTS_RemoveAbilityMonitorSync_0200 ACTS_RemoveAbilityMonitorSync_0100 start====>");
        abilitydelegator.removeAbilityMonitorSync(monitor);
      } catch (err) {
        console.log("====>ACTS_RemoveAbilityMonitorSync_0200 catch error ====>" + JSON.stringify(err));
        expect().assertFail();
        done();
      }

      console.log("====>ACTS_RemoveAbilityMonitorSync_0200 startAbility ====>");
      abilitydelegator.startAbility(
        {
          bundleName: 'com.example.abilitymonitortest',
          abilityName: 'MainAbility5'
        }).then(async () => {
        console.log("====>ACTS_RemoveAbilityMonitorSync_0200 startAbility end====>");
      })
    })

    /**
     * @tc.number: ACTS_RemoveAbilityMonitorSync_0300
     * @tc.name: Verify that the removeAbilityMonitorSync interface functions normally.
     * @tc.desc: Use addAbilityMonitorSync to add monitor and use removeAbilityMonitorSync
     * to remove monitor then trigger
     *           onAbilityBackground (Callback).
     */
    it('ACTS_RemoveAbilityMonitorSync_0300', 0, async (done: Function) => {
      let CallbackFlag = 0;
      console.log("====>ACTS_AddAbilityMonitorSync_0600--addAbilityMonitorSync--Subscriber====>");
      Subscriber.createSubscriber(commonEventSubscribeInfo, (err, sub) => {
        Subscriber.subscribe(sub, (err, msg) => {
          Subscriber.unsubscribe(sub);
          expect(CallbackFlag).assertEqual(0);
          done();
        })
      })

      monitor = {
        abilityName: 'MainAbility5',
        onAbilityBackground: () => {
          CallbackFlag = -1;
          console.log("====>ACTS_RemoveAbilityMonitorSync_0300 onAbilityBackground ====>");
        }
      }
      try {
        console.log("====>ACTS_RemoveAbilityMonitorSync_0300 addAbilityMonitorSync start====>");
        abilitydelegator.addAbilityMonitorSync(monitor);
        console.log("====>ACTS_RemoveAbilityMonitorSync_0100 ACTS_RemoveAbilityMonitorSync_0100 start====>");
        abilitydelegator.removeAbilityMonitorSync(monitor);
      } catch (err) {
        console.log("====>ACTS_RemoveAbilityMonitorSync_0300 catch error ====>" + JSON.stringify(err));
        expect().assertFail();
        done();
      }

      console.log("====>ACTS_RemoveAbilityMonitorSync_0300 startAbility ====>");
      abilitydelegator.startAbility(
        {
          bundleName: 'com.example.abilitymonitortest',
          abilityName: 'MainAbility5'
        }).then(async () => {
        console.log("====>ACTS_RemoveAbilityMonitorSync_0300 startAbility end====>");
      })
    })

    /**
     * @tc.number: ACTS_RemoveAbilityMonitorSync_0400
     * @tc.name: Verify that the removeAbilityMonitorSync interface functions normally.
     * @tc.desc: Use addAbilityMonitorSync to add monitor and use removeAbilityMonitorSync
     * to remove monitor then trigger
     *           onAbilityDestroy (Callback).
     */
    it('ACTS_RemoveAbilityMonitor_0400', 0, async (done: Function) => {
      let CallbackFlag = 0;
      console.log("====>ACTS_AddAbilityMonitorSync_0400--addAbilityMonitorSync--Subscriber====>");
      Subscriber.createSubscriber(commonEventSubscribeInfo, (err, sub) => {
        Subscriber.subscribe(sub, (err, msg) => {
          Subscriber.unsubscribe(sub);
          expect(CallbackFlag).assertEqual(0);
          done();
        })
      })

      monitor = {
        abilityName: 'MainAbility5',
        onAbilityDestroy: () => {
          CallbackFlag = -1;
          console.log("====>ACTS_RemoveAbilityMonitor_0400 onAbilityDestroy ====>");
        }
      }
      try {
        console.log("====>ACTS_RemoveAbilityMonitorSync_0400 addAbilityMonitorSync start====>");
        abilitydelegator.addAbilityMonitorSync(monitor);
        console.log("====>ACTS_RemoveAbilityMonitorSync_0400 ACTS_RemoveAbilityMonitorSync_0100 start====>");
        abilitydelegator.removeAbilityMonitorSync(monitor);
      } catch (err) {
        console.log("====>ACTS_RemoveAbilityMonitorSync_0400 catch error ====>" + JSON.stringify(err));
        expect().assertFail();
        done();
      }

      console.log("====>ACTS_RemoveAbilityMonitorSync_0400 startAbility ====>");
      abilitydelegator.startAbility(
        {
          bundleName: 'com.example.abilitymonitortest',
          abilityName: 'MainAbility5'
        }).then(async () => {
        console.log("====>ACTS_RemoveAbilityMonitorSync_0400 startAbility end====>");
      })
    })

    /**
     * @tc.number: ACTS_RemoveAbilityMonitorSync_0500
     * @tc.name: Verify that the removeAbilityMonitorSync interface functions normally.
     * @tc.desc: Use addAbilityMonitorSync to add monitor and use removeAbilityMonitorSync
     * to remove monitor then trigger
     *           onWindowStageCreate (Callback).
     */
    it('ACTS_RemoveAbilityMonitorSync_0500', 0, async (done: Function) => {
      let CallbackFlag = 0;
      console.log("====>ACTS_AddAbilityMonitorSync_0600--addAbilityMonitorSync--Subscriber====>");
      Subscriber.createSubscriber(commonEventSubscribeInfo, (err, sub) => {
        Subscriber.subscribe(sub, (err, msg) => {
          Subscriber.unsubscribe(sub);
          expect(CallbackFlag).assertEqual(0);
          done();
        })
      })

      monitor = {
        abilityName: 'MainAbility5',
        onWindowStageCreate: () => {
          CallbackFlag = -1;
          console.log("====>onWindowStageCreate ====>");
        }
      }
      try {
        console.log("====>ACTS_RemoveAbilityMonitorSync_0500 addAbilityMonitorSync start====>");
        abilitydelegator.addAbilityMonitorSync(monitor);
        console.log("====>ACTS_RemoveAbilityMonitorSync_0500 ACTS_RemoveAbilityMonitorSync_0100 start====>");
        abilitydelegator.removeAbilityMonitorSync(monitor);
      } catch (err) {
        console.log("====>ACTS_RemoveAbilityMonitorSync_0500 catch error ====>" + JSON.stringify(err));
        expect().assertFail();
        done();
      }

      console.log("====>ACTS_RemoveAbilityMonitorSync_0500 startAbility ====>");
      abilitydelegator.startAbility(
        {
          bundleName: 'com.example.abilitymonitortest',
          abilityName: 'MainAbility5'
        }).then(async () => {
        console.log("====>ACTS_RemoveAbilityMonitorSync_0500 startAbility end====>");
      })
    })

    /**
     * @tc.number: ACTS_RemoveAbilityMonitorSync_0600
     * @tc.name: Verify that the removeAbilityMonitorSync interface functions normally.
     * @tc.desc: Use addAbilityMonitorSync to add monitor and use removeAbilityMonitorSync
     * to remove monitor then trigger
     *           onWindowStageDestroy (Callback).
     */
    it('ACTS_RemoveAbilityMonitorSync_0600', 0, async (done: Function) => {
      let CallbackFlag = 0;
      console.log("====>ACTS_AddAbilityMonitorSync_0600--addAbilityMonitorSync--Subscriber====>");
      Subscriber.createSubscriber(commonEventSubscribeInfo, (err, sub) => {
        Subscriber.subscribe(sub, (err, msg) => {
          Subscriber.unsubscribe(sub);
          expect(CallbackFlag).assertEqual(0);
          done();
        })
      })

      monitor = {
        abilityName: 'MainAbility5',
        onWindowStageDestroy: () => {
          CallbackFlag = -1;
          console.log("====>ACTS_RemoveAbilityMonitorSync_0600 onWindowStageDestroy ====>");
        }
      }
      try {
        console.log("====>ACTS_RemoveAbilityMonitorSync_0600 addAbilityMonitorSync start====>");
        abilitydelegator.addAbilityMonitorSync(monitor);
        console.log("====>ACTS_RemoveAbilityMonitorSync_0600 ACTS_RemoveAbilityMonitorSync_0100 start====>");
        abilitydelegator.removeAbilityMonitorSync(monitor);
      } catch (err) {
        console.log("====>ACTS_RemoveAbilityMonitorSync_0600 catch error ====>" + JSON.stringify(err));
        expect().assertFail();
        done();
      }

      console.log("====>ACTS_RemoveAbilityMonitorSync_0600 startAbility ====>");
      abilitydelegator.startAbility(
        {
          bundleName: 'com.example.abilitymonitortest',
          abilityName: 'MainAbility5'
        }).then(async () => {
        console.log("====>ACTS_RemoveAbilityMonitorSync_0600 startAbility end====>");
      })
    })

    /**
     * @tc.number: ACTS_RemoveAbilityMonitorSync_0700
     * @tc.name: Verify that the removeAbilityMonitorSync interface functions normally.
     * @tc.desc: Use addAbilityMonitorSync to add monitor and use removeAbilityMonitorSync
     * to remove monitor then trigger
     *           onAbilityCreate (Callback).
     */
    it('ACTS_RemoveAbilityMonitorSync_0700', 0, async (done: Function) => {
      try {
        abilitydelegator.removeAbilityMonitorSync({
          abilityName: 'WrongName',
          onAbilityCreate: () => {
            console.log("====>onAbilityCreate====>");
          }
        })
        console.log("====>ACTS_RemoveAbilityMonitorSync_0700 success====>");
        expect(true).assertTrue();
        done();
      } catch (err) {
        console.log("====>ACTS_RemoveAbilityMonitorSync_0700 fail====>");
        expect().assertFail();
        done();
      }
    })

    /**
     * @tc.number: ACTS_RemoveAbilityMonitorSync_0800
     * @tc.name: Verify that the removeAbilityMonitorSync interface functions normally.
     * @tc.desc: Use waitAbilityMonitorSync to add monitor and use removeAbilityMonitorSync
     * to remove monitor then trigger
     *           onAbilityCreate (Callback).
     */
    it('ACTS_RemoveAbilityMonitorSync_0800', 0, async (done: Function) => {
      let CallbackFlag = 0;
      console.log("====>ACTS_AddAbilityMonitorSync_0600--addAbilityMonitorSync--Subscriber====>");
      Subscriber.createSubscriber(commonEventSubscribeInfo, (err, sub) => {
        Subscriber.subscribe(sub, (err, msg) => {
          Subscriber.unsubscribe(sub);
          expect(CallbackFlag).assertEqual(0);
          done();
        })
      })

      monitor = {
        abilityName: 'MainAbility5',
        onAbilityCreate: () => {
          CallbackFlag = -1;
          console.log("====>ACTS_RemoveAbilityMonitorSync_0800 onAbilityCreate ====>");
        }
      }
      try {
        console.log("====>ACTS_RemoveAbilityMonitorSync_0800 addAbilityMonitorSync start====>");
        abilitydelegator.addAbilityMonitorSync(monitor);
        console.log("====>ACTS_RemoveAbilityMonitorSync_0800 ACTS_RemoveAbilityMonitorSync_0100 start====>");
        abilitydelegator.removeAbilityMonitorSync(monitor);
      } catch (err) {
        console.log("====>ACTS_RemoveAbilityMonitorSync_0800 catch error ====>" + JSON.stringify(err));
        expect().assertFail();
        done();
      }

      console.log("====>ACTS_RemoveAbilityMonitorSync_0800 startAbility ====>");
      abilitydelegator.startAbility(
        {
          bundleName: 'com.example.abilitymonitortest',
          abilityName: 'MainAbility5'
        }).then(async () => {
        console.log("====>ACTS_RemoveAbilityMonitorSync_0800 startAbility end====>");
      })
    })
  })
}
