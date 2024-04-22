import hilog from '@ohos.hilog';
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium';
import { getContext } from '../common/getContext';
import commonEvent from '@ohos.commonEventManager';
import { BusinessError, Callback } from '@ohos.base';
import AbilityDelegatorRegistry from '@ohos.app.ability.abilityDelegatorRegistry';
import {Driver, ON} from '@ohos.UiTest';
let driver = Driver.create();

let abilityDelegator = AbilityDelegatorRegistry.getAbilityDelegator();
let ACTS_CallFunction: commonEvent.CommonEventSubscribeInfo = {
  events: ['RelyAbilityStageOnDestory', 'RelyEntryAbilityAlive', 'RelyAbilityStageAlive', 'RelySecondAbilityStageOnDestory', 'RelySecondEntryAbilityAlive', 'RelyUIextensionAbilityAlive']
};

function sleep(time: number): Promise<number> {
  return new Promise((resolve) => setTimeout(resolve, time));
}

export default function abilityTest() {
  describe('ActsAbilityTest', () => {
    // Defines a test suite. Two parameters are supported: test suite name and test suite function.
    beforeAll(() => {
      // Presets an action, which is performed only once before all test cases of the test suite start.
      // This API supports only one parameter: preset action function.
    })
    beforeEach(() => {
      // Presets an action, which is performed before each unit test case starts.
      // The number of execution times is the same as the number of test cases defined by **it**.
      // This API supports only one parameter: preset action function.
    })
    afterEach(() => {
      // Presets a clear action, which is performed after each unit test case ends.
      // The number of execution times is the same as the number of test cases defined by **it**.
      // This API supports only one parameter: clear action function.
    })
    afterAll(() => {
      // Presets a clear action, which is performed after all test cases of the test suite end.
      // This API supports only one parameter: clear action function.
    })
    it('SUB_Ability_AbilityRuntime_terminateProcess_0100', 0, async (done: Function) => {
      let subscriber: commonEvent.CommonEventSubscriber;
      commonEvent.createSubscriber(ACTS_CallFunction).then(async (data) => {
        console.info(`====>SUB_Ability_AbilityRuntime_terminateProcess_0100 createSubscriber  ${data}`);
        subscriber = data;
        commonEvent.subscribe(data, subscribeCallBack);
        try {
          getContext().startAbility({
            bundleName: 'com.acts.processexitrely',
            abilityName: 'EntryAbility',
            moduleName: 'entry',
            action: 'SUB_Ability_AbilityRuntime_terminateProcess_0100'
          }, (err: BusinessError) => {
            console.info('====>[Test] 0100 startAbility err:' + JSON.stringify(err));
          });
          await driver.delayMs(2000);
          let allowed = await driver.findComponent(ON.text("打开"));
          if (allowed) {
            console.log("find button");
            let point = await allowed.getBoundsCenter();
            console.log('point.x : ' + point.x +'point.y : '+ point.y);
            await driver.click(point.x, point.y);
          }
        } catch (err) {
          console.info(`====>SUB_Ability_AbilityRuntime_terminateProcess_0100 start err  ` + JSON.stringify(err));
        }

      })

      let clear = setTimeout(() => {
        console.info(`====>[Test] 0100 setTimeout`);
        expect().assertFail();
        done();
      }, 10000);

      let subscribeCallBack = (err: BusinessError, data: commonEvent.CommonEventData) => {
        console.info(`====>[Test] 0100 subscribeCallBack ACTS_CallFunction  ${data}`);
        if (data.event === 'RelyAbilityStageOnDestory') {
          expect(data.event).assertEqual('RelyAbilityStageOnDestory');
          commonEvent.unsubscribe(subscriber, unSubscribeCallback);
        }

        // if (data.event == 'RelyAbilityStageOnDestory') {
        //   console.info(`====>[Test] 0100 subscribeCallBack ${data}`);
        //   expect(data.event)
        //   commonEvent.unsubscribe(subscriber, unSubscribeCallback);
        // }
      };

      let unSubscribeCallback = () => {
        console.info(`====>[Test] 0100 unSubscribeCallback`);
        clearTimeout(clear);
        done();
      };
    })


    it('SUB_Ability_AbilityRuntime_terminateProcess_0200', 0, async (done: Function) => {
      await sleep(2000);
      let subscriber: commonEvent.CommonEventSubscriber;
      commonEvent.createSubscriber(ACTS_CallFunction).then(async (data) => {
        console.info(`====>SUB_Ability_AbilityRuntime_terminateProcess_0200 createSubscriber  ${data}`);
        subscriber = data;
        commonEvent.subscribe(data, subscribeCallBack);
        try {
          getContext().startAbility({
            bundleName: 'com.acts.processexitrely',
            abilityName: 'EntryAbility',
            moduleName: 'entry',
            action: 'SUB_Ability_AbilityRuntime_terminateProcess_0200'
          }, (err: BusinessError) => {
            console.info('====>[Test] 0200 startAbility err:' + JSON.stringify(err));
          });
          await driver.delayMs(2000);
          let allowed = await driver.findComponent(ON.text("打开"));
          if (allowed) {
            console.log("find button");
            let point = await allowed.getBoundsCenter();
            console.log('point.x : ' + point.x +'point.y : '+ point.y);
            await driver.click(point.x, point.y);
          }
        } catch (err) {
          console.info(`====>SUB_Ability_AbilityRuntime_terminateProcess_0200 start err  ` + JSON.stringify(err));
        }

      })

      let clear = setTimeout(() => {
        console.info(`====>[Test] 0200 setTimeout`);
        expect().assertFail();
        done();
      }, 10000);

      let subscribeCallBack = (err: BusinessError, data: commonEvent.CommonEventData) => {
        console.info(`====>[Test] 0200 subscribeCallBack ACTS_CallFunction  ${data}`);
        if (data.event === 'RelyAbilityStageOnDestory') {
          expect(data.event).assertEqual('RelyAbilityStageOnDestory');
          commonEvent.unsubscribe(subscriber, unSubscribeCallback);
        }

      };

      let unSubscribeCallback = () => {
        console.info(`====>[Test] 0200 unSubscribeCallback`);
        clearTimeout(clear);
        done();
      };
    })


    it('SUB_Ability_AbilityRuntime_terminateProcess_0300', 0, async (done: Function) => {
      await sleep(2000);
      let subscriber: commonEvent.CommonEventSubscriber;
      commonEvent.createSubscriber(ACTS_CallFunction).then(async (data) => {
        console.info(`====>SUB_Ability_AbilityRuntime_terminateProcess_0300 createSubscriber  ${data}`);
        subscriber = data;
        commonEvent.subscribe(data, subscribeCallBack);
        try {
          getContext().startAbility({
            bundleName: 'com.acts.processexitrely',
            abilityName: 'EntryAbility',
            moduleName: 'entry',
            action: 'SUB_Ability_AbilityRuntime_terminateProcess_0300ui'
          }, (err: BusinessError) => {
            console.info('====>[Test] 0300 startAbility err:' + JSON.stringify(err));
          });
          await driver.delayMs(2000);
          let allowed = await driver.findComponent(ON.text("打开"));
          if (allowed) {
            console.log("find button");
            let point = await allowed.getBoundsCenter();
            console.log('point.x : ' + point.x +'point.y : '+ point.y);
            await driver.click(point.x, point.y);
          }
        } catch (err) {
          console.info(`====>SUB_Ability_AbilityRuntime_terminateProcess_0300 start err  ` + JSON.stringify(err));
        }

      })

      let clear = setTimeout(() => {
        console.info(`====>[Test] 0300 setTimeout`);
        expect().assertFail();
        done();
      }, 10000);

      let subscribeCallBack = (err: BusinessError, data: commonEvent.CommonEventData) => {
        console.info(`====>[Test] 0300 subscribeCallBack ACTS_CallFunction  ${data}`);
        if (data.event === 'RelyEntryAbilityAlive') {
          expect(data.event).assertEqual('RelyEntryAbilityAlive');
          commonEvent.unsubscribe(subscriber, unSubscribeCallback);
        }

      };

      let unSubscribeCallback = async () => {
        console.info(`====>[Test] 0300 unSubscribeCallback`);
        clearTimeout(clear);
        await abilityDelegator.executeShellCommand('aa force-stop com.acts.processexitrely')
          .then((result: AbilityDelegatorRegistry.ShellCmdResult) => {
            console.info('====>[Test] 0300 pkill ok' + JSON.stringify(result));
          }).catch((err: BusinessError) => {
            console.info('====>[Test] 0300 pkill ng' + JSON.stringify(err));
          })

        done();
      };
    })


    it('SUB_Ability_AbilityRuntime_terminateProcess_0400', 0, async (done: Function) => {
      await sleep(2000);
      let subscriber: commonEvent.CommonEventSubscriber;
      let flag = 0;
      commonEvent.createSubscriber(ACTS_CallFunction).then(async (data) => {
        console.info(`====>SUB_Ability_AbilityRuntime_terminateProcess_0400 createSubscriber ： ` + JSON.stringify(data));
        subscriber = data;
        commonEvent.subscribe(data, subscribeCallBack);
        try {
          getContext().startAbility({
            bundleName: 'com.acts.processexitrely',
            abilityName: 'EntryAbility',
            moduleName: 'entry',
            action: 'SUB_Ability_AbilityRuntime_terminateProcess_0400'
          }, (err: BusinessError) => {
            console.info('====>[Test] 0400 startAbility err:' + JSON.stringify(err));
          });
          await driver.delayMs(2000);
          let allowed = await driver.findComponent(ON.text("打开"));
          if (allowed) {
            console.log("find button");
            let point = await allowed.getBoundsCenter();
            console.log('point.x : ' + point.x +'point.y : '+ point.y);
            await driver.click(point.x, point.y);
          }
        } catch (err) {
          console.info(`====>SUB_Ability_AbilityRuntime_terminateProcess_0400 start err  ` + JSON.stringify(err));
        }

      })

      let clear = setTimeout(() => {
        console.info(`====>[Test] 0400 setTimeout`);
        expect().assertFail();
        done();
      }, 100000);

      let subscribeCallBack = (err: BusinessError, data: commonEvent.CommonEventData) => {
        console.info(`====>[Test] 0400 subscribeCallBack ACTS_CallFunction ： ` + JSON.stringify(data));
        if (data.event === 'RelySecondAbilityStageOnDestory') {
          flag++;
          expect(data.event).assertEqual('RelySecondAbilityStageOnDestory');
        } else if (data.event === 'RelyAbilityStageOnDestory') {
          flag++;
          expect(data.event).assertEqual('RelyAbilityStageOnDestory');
        }
        if (flag == 2) {
          commonEvent.unsubscribe(subscriber, unSubscribeCallback);
        }

      };

      let unSubscribeCallback = async () => {
        console.info(`====>[Test] 0400 unSubscribeCallback`);
        clearTimeout(clear);
        done();
      };
    })


    it('SUB_Ability_AbilityRuntime_terminateProcess_0500', 0, async (done: Function) => {
      await sleep(2000);
      let subscriber: commonEvent.CommonEventSubscriber;
      let flag = 0;
      commonEvent.createSubscriber(ACTS_CallFunction).then(async (data) => {
        console.info(`====>SUB_Ability_AbilityRuntime_terminateProcess_0500 createSubscriber  ${data}`);
        subscriber = data;
        commonEvent.subscribe(data, subscribeCallBack);
        try {
          getContext().startAbility({
            bundleName: 'com.acts.processexitrely',
            abilityName: 'EntryAbility',
            moduleName: 'entry',
            action: 'SUB_Ability_AbilityRuntime_terminateProcess_0500'
          }, (err: BusinessError) => {
            console.info('====>[Test] 0500 startAbility err:' + JSON.stringify(err));
          });
          await driver.delayMs(2000);
          let allowed = await driver.findComponent(ON.text("打开"));
          if (allowed) {
            console.log("find button");
            let point = await allowed.getBoundsCenter();
            console.log('point.x : ' + point.x +'point.y : '+ point.y);
            await driver.click(point.x, point.y);
          }
        } catch (err) {
          console.info(`====>SUB_Ability_AbilityRuntime_terminateProcess_0500 start err  ` + JSON.stringify(err));
        }

      })

      let clear = setTimeout(() => {
        console.info(`====>[Test] 0500 setTimeout`);
        expect().assertFail();
        done();
      }, 10000);

      let subscribeCallBack = (err: BusinessError, data: commonEvent.CommonEventData) => {
        console.info(`====>[Test] 0500 subscribeCallBack ACTS_CallFunction  ${data}`);
        // if (data.event === 'RelyAbilityStageAlive') {
        //   expect(data.event).assertEqual('RelyAbilityStageAlive');
        //   commonEvent.unsubscribe(subscriber, unSubscribeCallback);
        // }

        if (data.event === 'RelySecondAbilityStageOnDestory') {
          flag++;
          expect(data.event).assertEqual('RelySecondAbilityStageOnDestory');
        } else if (data.event === 'RelyAbilityStageOnDestory') {
          flag++;
          expect(data.event).assertEqual('RelyAbilityStageOnDestory');
        }
        if (flag == 2) {
          commonEvent.unsubscribe(subscriber, unSubscribeCallback);
        }

      };

      let unSubscribeCallback = async () => {
        console.info(`====>[Test] 0500 unSubscribeCallback`);
        clearTimeout(clear);
        // await abilityDelegator.executeShellCommand('aa force-stop com.acts.processexitrely')
        //   .then((result: AbilityDelegatorRegistry.ShellCmdResult) => {
        //     console.info('====>[Test] 0500 pkill ok' + JSON.stringify(result));
        //   }).catch((err: BusinessError) => {
        //     console.info('====>[Test] 0500 pkill ng' + JSON.stringify(err));
        //   })
        done();
      };
    })


    it('SUB_Ability_AbilityRuntime_terminateProcess_0600', 0, async (done: Function) => {
      await sleep(2000);
      let subscriber: commonEvent.CommonEventSubscriber;
      let flag = 0;
      commonEvent.createSubscriber(ACTS_CallFunction).then(async (data) => {
        console.info(`====>SUB_Ability_AbilityRuntime_terminateProcess_0600 createSubscriber  ${data}`);
        subscriber = data;
        commonEvent.subscribe(data, subscribeCallBack);
        try {
          getContext().startAbility({
            bundleName: 'com.acts.processexitrely',
            abilityName: 'EntryAbility',
            moduleName: 'entry',
            action: 'SUB_Ability_AbilityRuntime_terminateProcess_0600ui'
          }, (err: BusinessError) => {
            console.info('====>[Test] 0600 startAbility err:' + JSON.stringify(err));
          });
          await driver.delayMs(2000);
          let allowed = await driver.findComponent(ON.text("打开"));
          if (allowed) {
            console.log("find button");
            let point = await allowed.getBoundsCenter();
            console.log('point.x : ' + point.x +'point.y : '+ point.y);
            await driver.click(point.x, point.y);
          }
        } catch (err) {
          console.info(`====>SUB_Ability_AbilityRuntime_terminateProcess_0600 start err  ` + JSON.stringify(err));
        }

      })

      let clear = setTimeout(() => {
        console.info(`====>[Test] 0600 setTimeout`);
        expect().assertFail();
        done();
      }, 10000);

      let subscribeCallBack = (err: BusinessError, data: commonEvent.CommonEventData) => {
        console.info(`====>[Test] 0600 subscribeCallBack ACTS_CallFunction  ${data}`);
        // if (data.event === 'RelySecondEntryAbilityAlive') {
        //   expect(data.event).assertEqual('RelyAbilityStageAlive');
        //   commonEvent.unsubscribe(subscriber, unSubscribeCallback);
        // }
        if (data.event === 'RelySecondEntryAbilityAlive') {
          flag++;
          expect(data.event).assertEqual('RelySecondEntryAbilityAlive');
        } else if (data.event === 'RelyUIextensionAbilityAlive') {
          flag++;
          expect(data.event).assertEqual('RelyUIextensionAbilityAlive');
        }
        if (flag == 2) {
          commonEvent.unsubscribe(subscriber, unSubscribeCallback);
        }

      };

      let unSubscribeCallback = async () => {
        console.info(`====>[Test] 0600 unSubscribeCallback`);
        clearTimeout(clear);
        await abilityDelegator.executeShellCommand('aa force-stop com.acts.processexitrely')
          .then((result: AbilityDelegatorRegistry.ShellCmdResult) => {
            console.info('====>[Test] 0600 pkill ok' + JSON.stringify(result));
          }).catch((err: BusinessError) => {
            console.info('====>[Test] 0600 pkill ng' + JSON.stringify(err));
          })
        done();
      };
    })


    it('SUB_Ability_AbilityRuntime_terminateProcess_0700', 0, async (done: Function) => {
      await sleep(2000);
      let subscriber: commonEvent.CommonEventSubscriber;
      commonEvent.createSubscriber(ACTS_CallFunction).then(async (data) => {
        console.info(`====>SUB_Ability_AbilityRuntime_terminateProcess_0700 createSubscriber  ${data}`);
        subscriber = data;
        commonEvent.subscribe(data, subscribeCallBack);
        try {
          getContext().startAbility({
            bundleName: 'com.acts.processexitrely',
            abilityName: 'EntryAbility',
            moduleName: 'entry',
            action: 'SUB_Ability_AbilityRuntime_terminateProcess_0700'
          }, (err: BusinessError) => {
            console.info('====>[Test] 0700 startAbility err:' + JSON.stringify(err));
          });
          await driver.delayMs(2000);
          let allowed = await driver.findComponent(ON.text("打开"));
          if (allowed) {
            console.log("find button");
            let point = await allowed.getBoundsCenter();
            console.log('point.x : ' + point.x +'point.y : '+ point.y);
            await driver.click(point.x, point.y);
          }
        } catch (err) {
          console.info(`====>SUB_Ability_AbilityRuntime_terminateProcess_0700 start err  ` + JSON.stringify(err));
        }

      })

      let clear = setTimeout(() => {
        console.info(`====>[Test] 0700 setTimeout`);
        expect().assertFail();
        done();
      }, 10000);

      let subscribeCallBack = (err: BusinessError, data: commonEvent.CommonEventData) => {
        console.info(`====>[Test] 0700 subscribeCallBack ACTS_CallFunction  ${data}`);
        if (data.event === 'RelyAbilityStageOnDestory') {
          expect(data.event).assertEqual('RelyAbilityStageOnDestory');
          commonEvent.unsubscribe(subscriber, unSubscribeCallback);
        }

        // if (data.event == 'RelyAbilityStageOnDestory') {
        //   console.info(`====>[Test] 0700 subscribeCallBack ${data}`);
        //   expect(data.event)
        //   commonEvent.unsubscribe(subscriber, unSubscribeCallback);
        // }
      };

      let unSubscribeCallback = () => {
        console.info(`====>[Test] 0700 unSubscribeCallback`);
        clearTimeout(clear);
        done();
      };
    })


    it('SUB_Ability_AbilityRuntime_terminateProcess_0800', 0, async (done: Function) => {
      await sleep(3000);
      let subscriber: commonEvent.CommonEventSubscriber;
      commonEvent.createSubscriber(ACTS_CallFunction).then(async (data) => {
        console.info(`====>SUB_Ability_AbilityRuntime_terminateProcess_0800 createSubscriber  ${data}`);
        subscriber = data;
        commonEvent.subscribe(data, subscribeCallBack);
        try {
          getContext().startAbility({
            bundleName: 'com.acts.processexitrely',
            abilityName: 'EntryAbility',
            moduleName: 'entry',
            action: 'SUB_Ability_AbilityRuntime_terminateProcess_0800'
          }, (err: BusinessError) => {
            console.info('====>[Test] 0800 startAbility err:' + JSON.stringify(err));
          });
          await driver.delayMs(2000);
          let allowed = await driver.findComponent(ON.text("打开"));
          if (allowed) {
            console.log("find button");
            let point = await allowed.getBoundsCenter();
            console.log('point.x : ' + point.x +'point.y : '+ point.y);
            await driver.click(point.x, point.y);
          }
        } catch (err) {
          console.info(`====>SUB_Ability_AbilityRuntime_terminateProcess_0800 start err  ` + JSON.stringify(err));
        }

      })

      let clear = setTimeout(() => {
        console.info(`====>[Test] 0800 setTimeout`);
        expect().assertFail();
        done();
      }, 10000);

      let subscribeCallBack = (err: BusinessError, data: commonEvent.CommonEventData) => {
        console.info(`====>[Test] 0800 subscribeCallBack ACTS_CallFunction  ${data}`);
        if (data.event === 'RelyAbilityStageOnDestory') {
          expect(data.event).assertEqual('RelyAbilityStageOnDestory');
          commonEvent.unsubscribe(subscriber, unSubscribeCallback);
        }

      };

      let unSubscribeCallback = () => {
        console.info(`====>[Test] 0800 unSubscribeCallback`);
        clearTimeout(clear);
        done();
      };
    })


    it('SUB_Ability_AbilityRuntime_terminateProcess_0900', 0, async (done: Function) => {
      await sleep(3000);
      let subscriber: commonEvent.CommonEventSubscriber;
      commonEvent.createSubscriber(ACTS_CallFunction).then(async (data) => {
        console.info(`====>SUB_Ability_AbilityRuntime_terminateProcess_0900 createSubscriber  ${data}`);
        subscriber = data;
        commonEvent.subscribe(data, subscribeCallBack);
        try {
          getContext().startAbility({
            bundleName: 'com.acts.processexitrely',
            abilityName: 'EntryAbility',
            moduleName: 'entry',
            action: 'SUB_Ability_AbilityRuntime_terminateProcess_0900ui'
          }, (err: BusinessError) => {
            console.info('====>[Test] 0900 startAbility err:' + JSON.stringify(err));
          });
          await driver.delayMs(2000);
          let allowed = await driver.findComponent(ON.text("打开"));
          if (allowed) {
            console.log("find button");
            let point = await allowed.getBoundsCenter();
            console.log('point.x : ' + point.x +'point.y : '+ point.y);
            await driver.click(point.x, point.y);
          }
        } catch (err) {
          console.info(`====>SUB_Ability_AbilityRuntime_terminateProcess_0900 start err  ` + JSON.stringify(err));
        }

      })

      let clear = setTimeout(() => {
        console.info(`====>[Test] 0900 setTimeout`);
        expect().assertFail();
        done();
      }, 10000);

      let subscribeCallBack = (err: BusinessError, data: commonEvent.CommonEventData) => {
        console.info(`====>[Test] 0900 subscribeCallBack ACTS_CallFunction  ${data}`);
        if (data.event === 'RelyEntryAbilityAlive') {
          expect(data.event).assertEqual('RelyEntryAbilityAlive');
          commonEvent.unsubscribe(subscriber, unSubscribeCallback);
        }

      };

      let unSubscribeCallback = async () => {
        console.info(`====>[Test] 0900 unSubscribeCallback`);
        clearTimeout(clear);
        await abilityDelegator.executeShellCommand('aa force-stop com.acts.processexitrely')
          .then((result: AbilityDelegatorRegistry.ShellCmdResult) => {
            console.info('====>[Test] 0900 pkill ok' + JSON.stringify(result));
          }).catch((err: BusinessError) => {
            console.info('====>[Test] 0900 pkill ng' + JSON.stringify(err));
          })
        done();
      };
    })


    it('SUB_Ability_AbilityRuntime_terminateProcess_1000', 0, async (done: Function) => {
      await sleep(3000);
      let flag = 0;
      let subscriber: commonEvent.CommonEventSubscriber;
      commonEvent.createSubscriber(ACTS_CallFunction).then(async (data) => {
        console.info(`====>SUB_Ability_AbilityRuntime_terminateProcess_1000 createSubscriber  ${data}`);
        subscriber = data;
        commonEvent.subscribe(data, subscribeCallBack);
        try {
          getContext().startAbility({
            bundleName: 'com.acts.processexitrely',
            abilityName: 'EntryAbility',
            moduleName: 'entry',
            action: 'SUB_Ability_AbilityRuntime_terminateProcess_1000'
          }, (err: BusinessError) => {
            console.info('====>[Test] 1000 startAbility err:' + JSON.stringify(err));
          });
          await driver.delayMs(2000);
          let allowed = await driver.findComponent(ON.text("打开"));
          if (allowed) {
            console.log("find button");
            let point = await allowed.getBoundsCenter();
            console.log('point.x : ' + point.x +'point.y : '+ point.y);
            await driver.click(point.x, point.y);
          }
        } catch (err) {
          console.info(`====>SUB_Ability_AbilityRuntime_terminateProcess_1000 start err  ` + JSON.stringify(err));
        }

      })

      let clear = setTimeout(() => {
        console.info(`====>[Test] 1000 setTimeout`);
        expect().assertFail();
        done();
      }, 10000);

      let subscribeCallBack = (err: BusinessError, data: commonEvent.CommonEventData) => {
        console.info(`====>[Test] 1000 subscribeCallBack ACTS_CallFunction  ${data}`);
        if (data.event === 'RelySecondAbilityStageOnDestory') {
          flag++;
          expect(data.event).assertEqual('RelySecondAbilityStageOnDestory');
        } else if (data.event === 'RelyAbilityStageOnDestory') {
          flag++;
          expect(data.event).assertEqual('RelyAbilityStageOnDestory');
        }
        if (flag == 2) {
          commonEvent.unsubscribe(subscriber, unSubscribeCallback);
        }

      };

      let unSubscribeCallback = async () => {
        console.info(`====>[Test] 1000 unSubscribeCallback`);
        clearTimeout(clear);
        await abilityDelegator.executeShellCommand('aa force-stop com.acts.processexitrely')
          .then((result: AbilityDelegatorRegistry.ShellCmdResult) => {
            console.info('====>[Test] 1000 pkill ok' + JSON.stringify(result));
          }).catch((err: BusinessError) => {
            console.info('====>[Test] 1000 pkill ng' + JSON.stringify(err));
          })
        done();
      };
    })


    it('SUB_Ability_AbilityRuntime_terminateProcess_1100', 0, async (done: Function) => {
      await sleep(3000);
      let flag = 0;
      let subscriber: commonEvent.CommonEventSubscriber;
      commonEvent.createSubscriber(ACTS_CallFunction).then(async (data) => {
        console.info(`====>SUB_Ability_AbilityRuntime_terminateProcess_1100 createSubscriber  ${data}`);
        subscriber = data;
        commonEvent.subscribe(data, subscribeCallBack);
        try {
          getContext().startAbility({
            bundleName: 'com.acts.processexitrely',
            abilityName: 'EntryAbility',
            moduleName: 'entry',
            action: 'SUB_Ability_AbilityRuntime_terminateProcess_1100'
          }, (err: BusinessError) => {
            console.info('====>[Test] 1100 startAbility err:' + JSON.stringify(err));
          });
          await driver.delayMs(2000);
          let allowed = await driver.findComponent(ON.text("打开"));
          if (allowed) {
            console.log("find button");
            let point = await allowed.getBoundsCenter();
            console.log('point.x : ' + point.x +'point.y : '+ point.y);
            await driver.click(point.x, point.y);
          }
        } catch (err) {
          console.info(`====>SUB_Ability_AbilityRuntime_terminateProcess_1100 start err  ` + JSON.stringify(err));
        }

      })

      let clear = setTimeout(() => {
        console.info(`====>[Test] 1100 setTimeout`);
        expect().assertFail();
        done();
      }, 10000);

      let subscribeCallBack = (err: BusinessError, data: commonEvent.CommonEventData) => {
        console.info(`====>[Test] 1100 subscribeCallBack ACTS_CallFunction  ${data}`);
        if (data.event === 'RelySecondAbilityStageOnDestory') {
          flag++;
          expect(data.event).assertEqual('RelySecondAbilityStageOnDestory');
        } else if (data.event === 'RelyAbilityStageOnDestory') {
          flag++;
          expect(data.event).assertEqual('RelyAbilityStageOnDestory');
        }
        if (flag == 2) {
          commonEvent.unsubscribe(subscriber, unSubscribeCallback);
        }

      };

      let unSubscribeCallback = async () => {
        console.info(`====>[Test] 1100 unSubscribeCallback`);
        clearTimeout(clear);
        await abilityDelegator.executeShellCommand('aa force-stop com.acts.processexitrely')
          .then((result: AbilityDelegatorRegistry.ShellCmdResult) => {
            console.info('====>[Test] 1100 pkill ok' + JSON.stringify(result));
          }).catch((err: BusinessError) => {
            console.info('====>[Test] 1100 pkill ng' + JSON.stringify(err));
          })
        done();
      };
    })


    it('SUB_Ability_AbilityRuntime_terminateProcess_1200', 0, async (done: Function) => {
      await sleep(3000);
      let flag = 0;
      let subscriber: commonEvent.CommonEventSubscriber;
      commonEvent.createSubscriber(ACTS_CallFunction).then(async (data) => {
        console.info(`====>SUB_Ability_AbilityRuntime_terminateProcess_1200 createSubscriber  ${data}`);
        subscriber = data;
        commonEvent.subscribe(data, subscribeCallBack);
        try {
          getContext().startAbility({
            bundleName: 'com.acts.processexitrely',
            abilityName: 'EntryAbility',
            moduleName: 'entry',
            action: 'SUB_Ability_AbilityRuntime_terminateProcess_1200ui'
          }, (err: BusinessError) => {
            console.info('====>[Test] 1200 startAbility err:' + JSON.stringify(err));
          });
          await driver.delayMs(2000);
          let allowed = await driver.findComponent(ON.text("打开"));
          if (allowed) {
            console.log("find button");
            let point = await allowed.getBoundsCenter();
            console.log('point.x : ' + point.x +'point.y : '+ point.y);
            await driver.click(point.x, point.y);
          }
        } catch (err) {
          console.info(`====>SUB_Ability_AbilityRuntime_terminateProcess_1200 start err  ` + JSON.stringify(err));
        }

      })

      let clear = setTimeout(() => {
        console.info(`====>[Test] 1200 setTimeout`);
        expect().assertFail();
        done();
      }, 10000);

      let subscribeCallBack = (err: BusinessError, data: commonEvent.CommonEventData) => {
        console.info(`====>[Test] 1200 subscribeCallBack ACTS_CallFunction  ${data}`);
        if (data.event === 'RelySecondAbilityStageOnDestory') {
          flag++;
          expect(data.event).assertEqual('RelySecondAbilityStageOnDestory');
        } else if (data.event === 'RelyAbilityStageOnDestory') {
          flag++;
          expect(data.event).assertEqual('RelyAbilityStageOnDestory');
        }
        if (flag == 2) {
          commonEvent.unsubscribe(subscriber, unSubscribeCallback);
        }

      };

      let unSubscribeCallback = async () => {
        console.info(`====>[Test] 1200 unSubscribeCallback`);
        clearTimeout(clear);
        await abilityDelegator.executeShellCommand('aa force-stop com.acts.processexitrely')
          .then((result: AbilityDelegatorRegistry.ShellCmdResult) => {
            console.info('====>[Test] 1200 pkill ok' + JSON.stringify(result));
          }).catch((err: BusinessError) => {
            console.info('====>[Test] 1200 pkill ng' + JSON.stringify(err));
          })
        done();
      };
    })
  })
}