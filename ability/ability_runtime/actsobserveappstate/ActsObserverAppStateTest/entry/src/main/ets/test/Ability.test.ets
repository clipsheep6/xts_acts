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

import hilog from '@ohos.hilog';
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium'
import commonEventManager from '@ohos.commonEventManager';
import abilityDelegatorRegistry from '@ohos.app.ability.abilityDelegatorRegistry';
import appManager from '@ohos.app.ability.appManager';

let StateEvent = {
  events: ['stateEvent', 'stateEvent2', 'stateEvent4', 'Acts_ObserverAppState_0100_1' ,'Acts_ObserverAppState_0100_2',
           'Acts_ObserverAppState_0400_1', 'Acts_ObserverAppState_0400_2', 'Acts_ObserverAppState_0200', 'Acts_ObserverAppState_0300', 'Acts_ObserverAppState_0500',
          'Acts_ObserverAppState_0600']
}

function sleep(ms) {
  return new Promise(resolve => setTimeout(resolve, ms));
}

export default function abilityTest() {
  describe('ActsAbilityTest', function () {

    /*
    * @tc.number: Acts_ObserverAppState_0100
    * @tc.name: Enable and disable application listening
    * @tc.desc:
    */
    it('Acts_ObserverAppState_0100', 0, async function (done) {
      let subscriber;
      let TAG = 'Acts_ObserverAppState_0100_TAG';
      let abilityDelegator = abilityDelegatorRegistry.getAbilityDelegator();
      
      function subscribeCallBack(err, data) {
        console.info(TAG, 'subscribeCallBack' + JSON.stringify(data));
        if (data.event == 'Acts_ObserverAppState_0100_1') {
          expect(data.parameters.applicationState).assertEqual(401);
        }
        if (data.event == 'Acts_ObserverAppState_0100_2') {
          expect(data.parameters.applicationState).assertEqual(401);
          commonEventManager.unsubscribe(subscriber, async () => {
            await abilityDelegator.executeShellCommand('pkill -f com.example.observerappstateone');
            done();
          });
        }
      }

      commonEventManager.createSubscriber(StateEvent).then(async (data) => {
        console.debug(TAG, 'Create Subscribe');
        subscriber = data;
        commonEventManager.subscribe(subscriber, subscribeCallBack);
        await sleep(500);
        globalThis.abilityContext.startAbility(
          {
            bundleName: 'com.example.observerappstateone',
            abilityName: 'EntryAbility',
            action: 'Acts_ObserverAppState_0100'
          }, (err) => {
          console.info(TAG, 'startAbility err: ' + JSON.stringify(err));
          expect(err.code).assertEqual(0);
        })
      })
    })

    /*
    * @tc.number: Acts_ObserverAppState_0200
    * @tc.name: Enable and disable application listening
    * @tc.desc:
    */
    it('Acts_ObserverAppState_0200', 0, async function (done) {
      let subscriber;
      let TAG = 'Acts_ObserverAppState_0200_TAG';
      let abilityDelegator = abilityDelegatorRegistry.getAbilityDelegator();

      function subscribeCallBack(err, data) {
        console.info(TAG, 'subscribeCallBack' + JSON.stringify(data));
        if (data.event == 'Acts_ObserverAppState_0200') {
          console.info(TAG, 'data.parameters.applicationState' + JSON.stringify(data));
          expect(data.parameters.applicationState).assertEqual(202);
          commonEventManager.unsubscribe(subscriber, async () => {
            await abilityDelegator.executeShellCommand('pkill -f com.example.observerappstatetwo');
            done();
          });
        }
      }

      commonEventManager.createSubscriber(StateEvent).then(async (data) => {
        console.debug(TAG, 'Create Subscribe');
        subscriber = data;
        commonEventManager.subscribe(subscriber, subscribeCallBack);
        await sleep(500);
        globalThis.abilityContext.startAbility(
          {
            bundleName: 'com.example.observerappstatetwo',
            abilityName: 'EntryAbility',
            action: 'Acts_ObserverAppState_0200'
          }, (err) => {
          console.info(TAG, 'startAbility err: ' + JSON.stringify(err));
          expect(err.code).assertEqual(0);
        });
      })
    })

    /*
    * @tc.number: Acts_ObserverAppState_0300
    * @tc.name: Enable and disable application listening
    * @tc.desc:
    */
    it('Acts_ObserverAppState_0300', 0, async function (done) {
      let subscriber;
      let TAG = 'Acts_ObserverAppState_0300_TAG';
      let abilityDelegator = abilityDelegatorRegistry.getAbilityDelegator();

      function subscribeCallBack(err, data) {
        console.info(TAG, 'subscribeCallBack' + JSON.stringify(data));
        if (data.event == 'Acts_ObserverAppState_0300') {
          console.info(TAG, 'data.parameters.applicationState' + JSON.stringify(data));
          expect(data.parameters.applicationState).assertEqual(201);
          commonEventManager.unsubscribe(subscriber, async () => {
            await abilityDelegator.executeShellCommand('pkill -f com.example.observerappstatethree');
            done();
          });
        }
      }

      commonEventManager.createSubscriber(StateEvent).then(async (data) => {
        console.debug(TAG, 'Create Subscribe');
        subscriber = data;
        commonEventManager.subscribe(subscriber, subscribeCallBack);
        await sleep(500);
        globalThis.abilityContext.startAbility(
          {
            bundleName: 'com.example.observerappstatethree',
            abilityName: 'EntryAbility',
            action: 'Acts_ObserverAppState_0300'
          }, (err) => {
          console.info(TAG, 'startAbility err: ' + JSON.stringify(err));
          expect(err.code).assertEqual(0);
        })
      })
    })

    /*
    * @tc.number: Acts_ObserverAppState_0400
    * @tc.name: Enable and disable application listening
    * @tc.desc:
    */
    it('Acts_ObserverAppState_0400', 0, async function (done) {
      let subscriber;
      let TAG = 'Acts_ObserverAppState_0400_TAG';
      let abilityDelegator = abilityDelegatorRegistry.getAbilityDelegator();
      
      function subscribeCallBack(err, data) {
        console.info(TAG, 'subscribeCallBack' + JSON.stringify(data));
        if (data.event == 'Acts_ObserverAppState_0400_1') {
          console.info(TAG, 'data.parameters.applicationState' + JSON.stringify(data));
          expect(data.parameters.applicationState).assertEqual(401);
        }
        if (data.event == 'Acts_ObserverAppState_0400_2') {
          console.info(TAG, 'data.parameters.applicationState' + JSON.stringify(data));
          expect(data.parameters.applicationState).assertEqual(401);
          commonEventManager.unsubscribe(subscriber, async () => {
            await abilityDelegator.executeShellCommand('pkill -f com.example.observerappstateone');
            done();
          });
        }
      }

      commonEventManager.createSubscriber(StateEvent).then(async (data) => {
        console.debug(TAG, 'Create Subscribe');
        subscriber = data;
        commonEventManager.subscribe(subscriber, subscribeCallBack);
        await sleep(700);
        await globalThis.abilityContext.startAbility(
          {
            bundleName: 'com.example.observerappstateone',
            abilityName: 'EntryAbility',
            action: 'Acts_ObserverAppState_0400'
          });
      })
    })

    /*
    * @tc.number: Acts_ObserverAppState_0500
    * @tc.name: Enable and disable application listening
    * @tc.desc:
    */
    it('Acts_ObserverAppState_0500', 0, async function (done) {
      let subscriber;
      let TAG = 'Acts_ObserverAppState_0500_TAG';
      let abilityDelegator = abilityDelegatorRegistry.getAbilityDelegator();

      function subscribeCallBack(err, data) {
        console.info(TAG, 'subscribeCallBack' + JSON.stringify(data));
        if (data.event == 'Acts_ObserverAppState_0500') {
          console.info(TAG, 'data.parameters.applicationState' + JSON.stringify(data));
          expect(data.parameters.applicationState).assertEqual(202);
          commonEventManager.unsubscribe(subscriber, async () => {
            await abilityDelegator.executeShellCommand('pkill -f com.example.observerappstatetwo');
            done();
          });
        }
      }

      commonEventManager.createSubscriber(StateEvent).then(async (data) => {
        console.info(TAG, 'Create Subscribe');
        subscriber = data;
        commonEventManager.subscribe(subscriber, subscribeCallBack);
        await sleep(500);
        globalThis.abilityContext.startAbility(
          {
            bundleName: 'com.example.observerappstatetwo',
            abilityName: 'EntryAbility',
            action: 'Acts_ObserverAppState_0500'
          }, (err) => {
          console.info(TAG, 'startAbility err: ' + JSON.stringify(err));
          expect(err.code).assertEqual(0);
        })
      })
    })

    /*
    * @tc.number: Acts_ObserverAppState_0600
    * @tc.name: Enable and disable application listening
    * @tc.desc:
    */
    it('Acts_ObserverAppState_0600', 0, async function (done) {
      let subscriber;
      let TAG = 'Acts_ObserverAppState_0600_TAG';
      let abilityDelegator = abilityDelegatorRegistry.getAbilityDelegator();

      function subscribeCallBack(err, data) {
        console.info(TAG, 'subscribeCallBack' + JSON.stringify(data));
        if (data.event == 'Acts_ObserverAppState_0600') {
          console.info(TAG, 'data.parameters.applicationState' + JSON.stringify(data));
          expect(data.parameters.applicationState).assertEqual(201);
          commonEventManager.unsubscribe(subscriber, async () => {
            await abilityDelegator.executeShellCommand('pkill -f com.example.observerappstatethree');
            done();
          });
        }
      }

      commonEventManager.createSubscriber(StateEvent).then(async (data) => {
        console.debug(TAG, 'Create Subscribe');
        subscriber = data;
        commonEventManager.subscribe(subscriber, subscribeCallBack);
        await sleep(500);
        globalThis.abilityContext.startAbility(
          {
            bundleName: 'com.example.observerappstatethree',
            abilityName: 'EntryAbility',
            action: 'Acts_ObserverAppState_0600'
          }, (err) => {
          console.info(TAG, 'startAbility err: ' + JSON.stringify(err));
          expect(err.code).assertEqual(0);
        })
      })
    })

    /*
    * @tc.number: Acts_ObserverAppState_0700
    * @tc.name: Enable and disable application listening
    * @tc.desc:
    */
    it('Acts_ObserverAppState_0700', 0, async function (done) {
      let TAG = 'Acts_ObserverAppState_0700_TAG';
      let subscriber;
      let abilityDelegator = abilityDelegatorRegistry.getAbilityDelegator();

      function subscribeCallback(err, data) {
        if (data.event == 'stateEvent2') {
          try {
            console.info(TAG, 'subscribe callback data : ' + JSON.stringify(data));
            expect(data.parameters.applicationState).assertEqual(2);
          } catch (error) {
            console.info(TAG, 'subscribe callback error : ' + JSON.stringify(error));
          };
        }
        if (data.event == 'stateEvent4') {
          try {
            console.info(TAG, 'subscribe callback data : ' + JSON.stringify(data));
            expect(data.parameters.applicationState).assertEqual(4);
          } catch (error) {
            console.info(TAG, 'subscribe callback error : ' + JSON.stringify(error));
          };
          commonEventManager.unsubscribe(subscriber, async () => {
            await abilityDelegator.executeShellCommand('pkill -f com.example.observerappstatefour');
            done();
          });
        }
      }

      commonEventManager.createSubscriber(StateEvent).then(async (data) => {
        console.debug(TAG, 'Create Subscribe');
        subscriber = data;
        commonEventManager.subscribe(subscriber, subscribeCallback);
        setTimeout(() => {
          globalThis.abilityContext.startAbility(
            {
              bundleName: 'com.example.observerappstatefour',
              abilityName: 'EntryAbility',
              action: 'Acts_ObserverAppState_0700'
            }, (err) => {
            console.info(TAG, 'startAbility err: ' + JSON.stringify(err));
            expect(err.code).assertEqual(0);
          })
          console.info(TAG, 'startAbility end');
        }, 500);
        setTimeout(() => {
          globalThis.abilityContext.startAbility(
            {
              bundleName: 'com.example.observerappstaterely',
              abilityName: 'EntryAbility',
              action: 'Acts_ObserverAppState_0700'
            }, (err) => {
            console.info(TAG, 'startAbility err: ' + JSON.stringify(err));
            expect(err.code).assertEqual(0);
          })
        }, 3000);
      })
    })

    /*
    * @tc.number: Acts_ObserverAppState_0800
    * @tc.name: Enable and disable application listening
    * @tc.desc:
    */
    it('Acts_ObserverAppState_0800', 0, async function (done) {
      let TAG = 'Acts_ObserverAppState_0800_TAG';
      let subscriber;
      let abilityDelegator = abilityDelegatorRegistry.getAbilityDelegator();

      function subscribeCallback(err, data) {
        if (data.event == 'stateEvent2') {
          try {
            console.info(TAG, 'subscribe callback data : ' + JSON.stringify(data));
            expect(data.parameters.applicationState).assertEqual(2);
          } catch (error) {
            console.info(TAG, 'subscribe callback error : ' + JSON.stringify(error));
          };
        }
        if (data.event == 'stateEvent4') {
          try {
            console.info(TAG, 'subscribe callback data : ' + JSON.stringify(data));
            expect(data.parameters.applicationState).assertEqual(4);
          } catch (error) {
            console.info(TAG, 'subscribe callback error : ' + JSON.stringify(error));
          };
          commonEventManager.unsubscribe(subscriber, async () => {
            await abilityDelegator.executeShellCommand('pkill -f com.example.observerappstatefive');
            done();
          });
        }
      }

      commonEventManager.createSubscriber(StateEvent).then(async (data) => {
        console.debug(TAG, 'Create Subscribe');
        subscriber = data;
        commonEventManager.subscribe(subscriber, subscribeCallback);
        setTimeout(() => {
          globalThis.abilityContext.startAbility(
            {
              bundleName: 'com.example.observerappstatefive',
              abilityName: 'EntryAbility',
              action: 'Acts_ObserverAppState_0800'
            }, (err) => {
            console.info(TAG, 'startAbility err: ' + JSON.stringify(err));
            expect(err.code).assertEqual(0);
          })
          console.info(TAG, 'startAbility end');
        }, 500);
        setTimeout(() => {
          globalThis.abilityContext.startAbility(
            {
              bundleName: 'com.example.observerappstaterely',
              abilityName: 'EntryAbility',
              action: 'Acts_ObserverAppState_0800'
            }, (err) => {
            console.info(TAG, 'startAbility err: ' + JSON.stringify(err));
            expect(err.code).assertEqual(0);
          })
        }, 3000);
      })
    })

    /*
    * @tc.number: Acts_ObserverAppState_0900
    * @tc.name: Enable and disable application listening
    * @tc.desc:
    */
    it('Acts_ObserverAppState_0900', 0, async function (done) {
      let TAG = 'Acts_ObserverAppState_0900_TAG';
      let subscriber;
      let abilityDelegator = abilityDelegatorRegistry.getAbilityDelegator();

      function subscribeCallback(err, data) {
        if (data.event == 'stateEvent2') {
          try {
            console.info(TAG, 'subscribe callback data : ' + JSON.stringify(data));
            expect(data.parameters.applicationState).assertEqual(2);
          } catch (error) {
            console.info(TAG, 'subscribe callback error : ' + JSON.stringify(error));
          };
        }
        if (data.event == 'stateEvent4') {
          try {
            console.info(TAG, 'subscribe callback data : ' + JSON.stringify(data));
            expect(data.parameters.applicationState).assertEqual(4);
          } catch (error) {
            console.info(TAG, 'subscribe callback error : ' + JSON.stringify(error));
          };
          commonEventManager.unsubscribe(subscriber, async () => {
            await abilityDelegator.executeShellCommand('pkill -f com.example.observerappstatesix');
            done();
          });
        }
      }

      commonEventManager.createSubscriber(StateEvent).then(async (data) => {
        console.debug(TAG, 'Create Subscribe');
        subscriber = data;
        commonEventManager.subscribe(subscriber, subscribeCallback);
        setTimeout(() => {
          globalThis.abilityContext.startAbility(
            {
              bundleName: 'com.example.observerappstatesix',
              abilityName: 'EntryAbility',
              action: 'Acts_ObserverAppState_0500'
            }, (err) => {
            console.info(TAG, 'startAbility err: ' + JSON.stringify(err));
            expect(err.code).assertEqual(0);
          })
          console.info(TAG, 'startAbility end');
        }, 500)
        setTimeout(() => {
          globalThis.abilityContext.startAbility(
            {
              bundleName: 'com.example.observerappstaterely',
              abilityName: 'EntryAbility',
              action: 'Acts_ObserverAppState_0900'
            }, (err) => {
            console.info(TAG, 'startAbility err: ' + JSON.stringify(err));
            expect(err.code).assertEqual(0);
          })
        }, 3000);
      })
    })

    /*
    * @tc.number: Acts_ObserverAppState_1000
    * @tc.name: Enable and disable application listening
    * @tc.desc:
    */
    it('Acts_ObserverAppState_1000', 0, async function (done) {
      let TAG = 'Acts_ObserverAppState_1000_TAG'
      let subscriber;
      let abilityDelegator = abilityDelegatorRegistry.getAbilityDelegator();

      function subscribeCallback(err, data) {
        if (data.event == 'stateEvent2') {
          try {
            console.info(TAG, 'subscribe callback data : ' + JSON.stringify(data));
            expect(data.parameters.applicationState).assertEqual(2)
          } catch (error) {
            console.info(TAG, 'subscribe callback error : ' + JSON.stringify(error));
          };
        }
        if (data.event == 'stateEvent4') {
          try {
            console.info(TAG, 'subscribe callback data : ' + JSON.stringify(data));
            expect(data.parameters.applicationState).assertEqual(4)
          } catch (error) {
            console.info(TAG, 'subscribe callback error : ' + JSON.stringify(error));
          };
          commonEventManager.unsubscribe(subscriber, async () => {
            await abilityDelegator.executeShellCommand('pkill -f com.example.observerappstateseven');
            done();
          });
        }
      }

      commonEventManager.createSubscriber(StateEvent).then(async (data) => {
        console.debug(TAG, 'Create Subscribe');
        subscriber = data;
        commonEventManager.subscribe(subscriber, subscribeCallback);
        setTimeout(() => {
          globalThis.abilityContext.startAbility(
            {
              bundleName: 'com.example.observerappstateseven',
              abilityName: 'EntryAbility',
              action: 'Acts_ObserverAppState_1000'
            }, (err) => {
            console.info(TAG, 'startAbility err: ' + JSON.stringify(err));
            expect(err.code).assertEqual(0);
          })
          console.info(TAG, 'startAbility end');
        }, 500)
        setTimeout(() => {
          globalThis.abilityContext.startAbility(
            {
              bundleName: 'com.example.observerappstaterely',
              abilityName: 'EntryAbility',
              action: 'Acts_ObserverAppState_1000'
            }, (err) => {
            console.info(TAG, 'startAbility err: ' + JSON.stringify(err));
            expect(err.code).assertEqual(0);
          })
        }, 3000);
      })
    })

    /*
    * @tc.number: Acts_ObserverAppState_1100
    * @tc.name: Enable and disable application listening
    * @tc.desc:
    */
    it('Acts_ObserverAppState_1100', 0, async function (done) {
      let TAG = 'Acts_ObserverAppState_1100_TAG'
      let subscriber;
      let abilityDelegator = abilityDelegatorRegistry.getAbilityDelegator();

      function subscribeCallback(err, data) {
        console.info(TAG, 'subscribeCallBack' + JSON.stringify(data));
        if (data.event == 'stateEvent') {
          try {
            console.info(TAG, 'data.parameters.applicationState' + JSON.stringify(data));
            expect(data.parameters.applicationState).assertEqual(16000050);
          } catch (error) {
            console.info(TAG, 'subscribe callback error : ' + JSON.stringify(error));
          };
        }
        commonEventManager.unsubscribe(subscriber, async () => {
          await abilityDelegator.executeShellCommand('pkill -f com.example.observerappstateeight');
          done();
        });
      }

      commonEventManager.createSubscriber(StateEvent).then(async (data) => {
        console.debug(TAG, 'Create Subscribe');
        subscriber = data;
        commonEventManager.subscribe(subscriber, subscribeCallback);
        setTimeout(() => {
          globalThis.abilityContext.startAbility(
            {
              bundleName: 'com.example.observerappstateeight',
              abilityName: 'EntryAbility',
              action: 'Acts_ObserverAppState_1100'
            }, (err) => {
            console.info(TAG, 'startAbility err: ' + JSON.stringify(err));
            expect(err.code).assertEqual(0);
          })
          console.info(TAG, 'startAbility end');
        }, 500);
      })
    })

    /*
    * @tc.number: Acts_ObserverAppState_1200
    * @tc.name: Enable and disable application listening
    * @tc.desc:
    */
    it('Acts_ObserverAppState_1200', 0, async function (done) {
      let TAG = 'Acts_ObserverAppState_1200_TAG'
      let subscriber;
      let abilityDelegator = abilityDelegatorRegistry.getAbilityDelegator();

      function subscribeCallback(err, data) {
        if (data.event == 'stateEvent2') {
          try {
            console.info(TAG, 'subscribe callback data : ' + JSON.stringify(data));
            expect(data.parameters.applicationState).assertEqual(2);
          } catch (error) {
            console.info(TAG, 'subscribe callback error : ' + JSON.stringify(error));
          };
        }
        if (data.event == 'stateEvent4') {
          try {
            console.info(TAG, 'subscribe callback data : ' + JSON.stringify(data));
            expect(data.parameters.applicationState).assertEqual(4);
          } catch (error) {
            console.info(TAG, 'subscribe callback error : ' + JSON.stringify(error));
          };
          commonEventManager.unsubscribe(subscriber, async () => {
            await abilityDelegator.executeShellCommand('pkill -f com.example.observerappstatenineone');
            await abilityDelegator.executeShellCommand('pkill -f com.example.observerappstateninetwo');
            done();
          });
        }
      }

      commonEventManager.createSubscriber(StateEvent).then(async (data) => {
        console.debug(TAG, 'Create Subscribe');
        subscriber = data;
        commonEventManager.subscribe(subscriber, subscribeCallback);
        setTimeout(() => {
          globalThis.abilityContext.startAbility(
            {
              bundleName: 'com.example.observerappstatenineone',
              abilityName: 'EntryAbility',
              action: 'Acts_ObserverAppState_1200'
            }, (err) => {
            console.info(TAG, 'startAbility err: ' + JSON.stringify(err));
            expect(err.code).assertEqual(0);
          })
          console.info(TAG, 'startAbility end');
        }, 500);
        setTimeout(() => {
          globalThis.abilityContext.startAbility(
            {
              bundleName: 'com.example.observerappstateninetwo',
              abilityName: 'EntryAbility',
              action: 'Acts_ObserverAppState_1200'
            }, (err) => {
            console.info(TAG, 'startAbility err: ' + JSON.stringify(err));
            expect(err.code).assertEqual(0);
          })
          console.info(TAG, 'startAbility end');
        }, 2000);
        setTimeout(() => {
          globalThis.abilityContext.startAbility(
            {
              bundleName: 'com.example.observerappstaterely',
              abilityName: 'EntryAbility',
              action: 'Acts_ObserverAppState_1200'
            }, (err) => {
            console.info(TAG, 'startAbility err: ' + JSON.stringify(err));
            expect(err.code).assertEqual(0);
          })
        }, 3500);
      })
    })

    /*
    * @tc.number: Acts_ObserverAppState_1300
    * @tc.name: Enable and disable application listening
    * @tc.desc:
    */
    it('Acts_ObserverAppState_1300', 0, async function (done) {
      let TAG = 'Acts_ObserverAppState_1300_TAG';
      let subscriber;
      let abilityDelegator = abilityDelegatorRegistry.getAbilityDelegator();

      function subscribeCallback(err, data) {
        if (data.event == 'stateEvent2') {
          try {
            console.info(TAG, 'subscribe callback data : ' + JSON.stringify(data));
            expect(data.parameters.applicationState).assertEqual(2);
          } catch (error) {
            console.info(TAG, 'subscribe callback error : ' + JSON.stringify(error));
          };
        }
        if (data.event == 'stateEvent4') {
          try {
            console.info(TAG, 'subscribe callback data : ' + JSON.stringify(data));
            expect(data.parameters.applicationState).assertEqual(4);
          } catch (error) {
            console.info(TAG, 'subscribe callback error : ' + JSON.stringify(error));
          };
          commonEventManager.unsubscribe(subscriber, async () => {
            await abilityDelegator.executeShellCommand('pkill -f com.example.observerappstatetenone');
            await abilityDelegator.executeShellCommand('pkill -f com.example.observerappstatetentwo');
            done();
          });
        }
      }

      commonEventManager.createSubscriber(StateEvent).then(async (data) => {
        console.debug(TAG, 'Create Subscribe');
        subscriber = data;
        commonEventManager.subscribe(subscriber, subscribeCallback);
        
        setTimeout(() => {
          globalThis.abilityContext.startAbility(
            {
              bundleName: 'com.example.observerappstatetenone',
              abilityName: 'EntryAbility',
              action: 'Acts_ObserverAppState_1300'
            }, (err) => {
            console.info(TAG, 'startAbility err: ' + JSON.stringify(err));
            expect(err.code).assertEqual(0);
          })
          console.info(TAG, 'startAbility end');
        }, 500);
        setTimeout(() => {
          globalThis.abilityContext.startAbility(
            {
              bundleName: 'com.example.observerappstatetentwo',
              abilityName: 'EntryAbility',
              action: 'Acts_ObserverAppState_1300'
            }, (err) => {
            console.info(TAG, 'startAbility err: ' + JSON.stringify(err));
            expect(err.code).assertEqual(0);
          })
          console.info(TAG, 'startAbility end');
        }, 2000);
        setTimeout(() => {
          globalThis.abilityContext.startAbility(
            {
              bundleName: 'com.example.observerappstaterely',
              abilityName: 'EntryAbility',
              action: 'Acts_ObserverAppState_1300'
            }, (err) => {
            console.info(TAG, 'startAbility err: ' + JSON.stringify(err));
            expect(err.code).assertEqual(0);
          })
        }, 3500);
      })
    })

    /*
    * @tc.number: Acts_ObserverAppState_1400
    * @tc.name: Enable and disable application listening
    * @tc.desc:
    */
    it('Acts_ObserverAppState_1400', 0, async function (done) {
      let TAG = 'Acts_ObserverAppState_1400_TAG';
      let subscriber;
      let abilityDelegator = abilityDelegatorRegistry.getAbilityDelegator();

      function subscribeCallback(err, data) {
        if (data.event == 'stateEvent') {
          try {
            console.info(TAG, 'subscribe callback data : ' + JSON.stringify(data));
            expect(data.parameters.flog).assertEqual(0);
          } catch (error) {
            console.info(TAG, 'subscribe callback error : ' + JSON.stringify(error));
          };
        }
        commonEventManager.unsubscribe(subscriber, async () => {
          await abilityDelegator.executeShellCommand('pkill -f com.example.observerappstatefourteen');
          done();
        });
      }

      commonEventManager.createSubscriber(StateEvent).then(async (data) => {
        console.debug(TAG, 'Create Subscribe');
        subscriber = data;
        commonEventManager.subscribe(subscriber, subscribeCallback);
      });

      setTimeout(() => {
        globalThis.abilityContext.startAbility(
          {
            bundleName: 'com.example.observerappstatefourteen',
            abilityName: 'EntryAbility',
            action: 'Acts_ObserverAppState_1400'
          }, (err) => {
          console.info(TAG, 'startAbility err: ' + JSON.stringify(err));
          expect(err.code).assertEqual(0);
        })
        console.info(TAG, 'startAbility end');
      }, 500);
    })

    /*
    * @tc.number: Acts_ObserverAppState_1700
    * @tc.name: Enable and disable application listening
    * @tc.desc:
    */
    it('Acts_ObserverAppState_1700', 0, async function (done) {
      let TAG = 'Acts_ObserverAppState_1700_TAG';
      console.info(TAG, 'Start.');
      await sleep(200);
      let want = {
        bundleName: 'com.example.actsobserverwindowmoderely',
        abilityName: 'EntryAbility'
      };
      let want1 = {
        bundleName: 'com.example.actsobserverwindowmoderely',
        abilityName: 'EntryAbility1'
      };
      let flag = 0;
      let windowModeObserver = {
        onAppStateChanged(appStateData) {
          if (appStateData.bundleName == 'com.example.actsobserverwindowmoderely') {
            flag += 1;
          }
        }
      };
      await appManager.on('appForegroundState', windowModeObserver);
      await sleep(1000);
      await globalThis.abilityContext.startAbility(want).then(() => {
        console.info(TAG, 'Start ability successfully.');
      }).catch((error) => {
        expect().assertFail();
        done();
      });
      await sleep(500);
      await globalThis.abilityContext.startAbility(want1).then(async () => {
        console.info(TAG, 'Start ability1 successfully.');
        await sleep(500);
        expect(flag).assertEqual(1);
        appManager.off('appForegroundState', windowModeObserver);
        done();
      }).catch((error) => {
        expect().assertFail();
        done();
      });
      await console.info(TAG, 'End.');
    })
  })
}