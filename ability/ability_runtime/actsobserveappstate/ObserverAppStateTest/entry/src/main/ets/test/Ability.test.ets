import hilog from '@ohos.hilog';
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium'
import commonEventManager from '@ohos.commonEventManager';
import abilityDelegatorRegistry from '@ohos.app.ability.abilityDelegatorRegistry';
import AbilityConstant from '@ohos.app.ability.AbilityConstant';

let StateEvent = {
  events: ['stateEvent', 'stateEvent2', 'stateEvent4']
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

      function subscribeCallBack(err, data) {
        console.info(TAG, 'subscribeCallBack' + JSON.stringify(data));
        if (data.event == 'stateEvent') {
          try {
            console.info(TAG, 'data.parameters.applicationState' + JSON.stringify(data));
            expect(data.parameters.applicationState).assertEqual(401);
          } catch (error) {
            console.info(TAG, 'subscribe callback error : ' + JSON.stringify(error));
          };
        }
      }

      commonEventManager.createSubscriber(StateEvent).then(async (data) => {
        console.debug(TAG, '====>Acts_ObserverAppState_0100 Create Subscribe');
        subscriber = data;
        commonEventManager.subscribe(subscriber, subscribeCallBack);
      })
      setTimeout(() => {
        globalThis.abilityContext.startAbility(
          {
            bundleName: 'com.example.observerappstateone',
            abilityName: 'EntryAbility',
            action: 'Acts_ObserverAppState_0100'
          }, (err) => {
          console.info(TAG, '====>Acts_ObserverAppState_0100 startAbility err: ' + JSON.stringify(err));
          expect(err.code).assertEqual(0);
        })
        console.info(TAG, '====>Acts_ObserverAppState_0100 startAbility end');
      }, 500);
      let abilityDelegator = abilityDelegatorRegistry.getAbilityDelegator();
      setTimeout(() => {
        commonEventManager.unsubscribe(subscriber);
        abilityDelegator.executeShellCommand('pkill -f com.example.observerappstateone').then((result) => {
          console.info(TAG, 'close subscriber success');
          console.info(TAG, '====>Acts_ObserverAppState_0100 Test End');
          done();
        }).catch((err) => {
          console.info(TAG, 'close subscriber fail');
          console.info(TAG, '====>Acts_ObserverAppState_0100 Test End');
          done();
        })
      }, 2500);
    })

    /*
    * @tc.number: Acts_ObserverAppState_0200
    * @tc.name: Enable and disable application listening
    * @tc.desc:
    */
    it('Acts_ObserverAppState_0200', 0, async function (done) {
      let subscriber;
      let TAG = 'Acts_ObserverAppState_0200_TAG';

      function subscribeCallBack(err, data) {
        console.info(TAG, 'subscribeCallBack' + JSON.stringify(data));
        if (data.event == 'stateEvent') {
          try {
            console.info(TAG, 'data.parameters.applicationState' + JSON.stringify(data));
            expect(data.parameters.applicationState).assertEqual(202);
          } catch (error) {
            console.info(TAG, 'subscribe callback error : ' + JSON.stringify(error));
          };
        }
      }

      commonEventManager.createSubscriber(StateEvent).then(async (data) => {
        console.debug(TAG, '====>Acts_ObserverAppState_0200 Create Subscribe');
        subscriber = data;
        commonEventManager.subscribe(subscriber, subscribeCallBack);
      })
      setTimeout(() => {
        globalThis.abilityContext.startAbility(
          {
            bundleName: 'com.example.observerappstatetwo',
            abilityName: 'EntryAbility',
            action: 'Acts_ObserverAppState_0200'
          }, (err) => {
          console.info(TAG, '====>Acts_ObserverAppState_0200 startAbility err: ' + JSON.stringify(err));
          expect(err.code).assertEqual(0);
        });
        console.info(TAG, '====>Acts_ObserverAppState_0200 startAbility end');
      }, 500);
      let abilityDelegator = abilityDelegatorRegistry.getAbilityDelegator();
      setTimeout(() => {
        commonEventManager.unsubscribe(subscriber);
        abilityDelegator.executeShellCommand('pkill -f com.example.observerappstatetwo').then((result) => {
          console.info(TAG, 'close subscriber success');
          console.info(TAG, '====>Acts_ObserverAppState_0200 Test End');
          done();
        }).catch((err) => {
          console.info(TAG, 'close subscriber fail');
          console.info(TAG, '====>Acts_ObserverAppState_0200 Test End');
          done();
        });
      }, 2500);
    })

    /*
    * @tc.number: Acts_ObserverAppState_0300
    * @tc.name: Enable and disable application listening
    * @tc.desc:
    */
    it('Acts_ObserverAppState_0300', 0, async function (done) {
      let subscriber;
      let TAG = 'Acts_ObserverAppState_0300_TAG';

      function subscribeCallBack(err, data) {
        console.info(TAG, 'subscribeCallBack' + JSON.stringify(data));
        if (data.event == 'stateEvent') {
          try {
            console.info(TAG, 'data.parameters.applicationState' + JSON.stringify(data));
            expect(data.parameters.applicationState).assertEqual(201);
          } catch (error) {
            console.info(TAG, 'subscribe callback error : ' + JSON.stringify(error));
          };
        }
      }

      commonEventManager.createSubscriber(StateEvent).then(async (data) => {
        console.debug(TAG, '====>Acts_ObserverAppState_0300 Create Subscribe');
        subscriber = data;
        commonEventManager.subscribe(subscriber, subscribeCallBack);
      })
      setTimeout(() => {
        globalThis.abilityContext.startAbility(
          {
            bundleName: 'com.example.observerappstatethree',
            abilityName: 'EntryAbility',
            action: 'Acts_ObserverAppState_0300'
          }, (err) => {
          console.info(TAG, '====>Acts_ObserverAppState_0300 startAbility err: ' + JSON.stringify(err));
          expect(err.code).assertEqual(0);
        })
        console.info(TAG, '====>Acts_ObserverAppState_0300 startAbility end');
      }, 500)
      let abilityDelegator = abilityDelegatorRegistry.getAbilityDelegator();
      setTimeout(() => {
        commonEventManager.unsubscribe(subscriber);
        abilityDelegator.executeShellCommand('pkill -f com.example.observerappstatethree').then((result) => {
          console.info(TAG, 'close subscriber success');
          console.info(TAG, '====>Acts_ObserverAppState_0300 Test End');
          done();
        }).catch((err) => {
          console.info(TAG, 'close subscriber fail');
          console.info(TAG, '====>Acts_ObserverAppState_0300 Test End');
          done();
        });
      }, 2500)
    })

    /*
    * @tc.number: Acts_ObserverAppState_0400
    * @tc.name: Enable and disable application listening
    * @tc.desc:
    */
    it('Acts_ObserverAppState_0400', 0, async function (done) {
      let subscriber;
      let TAG = 'Acts_ObserverAppState_0400_TAG';

      function subscribeCallBack(err, data) {
        console.info(TAG, 'subscribeCallBack' + JSON.stringify(data));
        if (data.event == 'stateEvent') {
          try {
            console.info(TAG, 'data.parameters.applicationState' + JSON.stringify(data));
            expect(data.parameters.applicationState).assertEqual(401);
          } catch (error) {
            console.info(TAG, 'subscribe callback error : ' + JSON.stringify(error));
          };
        }
      }

      commonEventManager.createSubscriber(StateEvent).then(async (data) => {
        console.debug(TAG, '====>Acts_ObserverAppState_0400 Create Subscribe');
        subscriber = data;
        commonEventManager.subscribe(subscriber, subscribeCallBack);
      })
      setTimeout(() => {
        globalThis.abilityContext.startAbility(
          {
            bundleName: 'com.example.observerappstateeleven',
            abilityName: 'EntryAbility',
            action: 'Acts_ObserverAppState_0400'
          }, (err) => {
          console.info(TAG, '====>Acts_ObserverAppState_0400 startAbility err: ' + JSON.stringify(err));
          expect(err.code).assertEqual(0);
        })
        console.info(TAG, '====>Acts_ObserverAppState_0400 startAbility end');
      }, 500);
      let abilityDelegator = abilityDelegatorRegistry.getAbilityDelegator();
      setTimeout(() => {
        commonEventManager.unsubscribe(subscriber);
        abilityDelegator.executeShellCommand('pkill -f com.example.observerappstateeleven').then((result) => {
          console.info(TAG, 'close subscriber success');
          console.info(TAG, '====>Acts_ObserverAppState_0400 Test End');
          done();
        }).catch((err) => {
          console.info(TAG, 'close subscriber fail');
          console.info(TAG, '====>Acts_ObserverAppState_0400 Test End');
          done();
        })
      }, 2500);
    })

    /*
    * @tc.number: Acts_ObserverAppState_0500
    * @tc.name: Enable and disable application listening
    * @tc.desc:
    */
    it('Acts_ObserverAppState_0500', 0, async function (done) {
      let subscriber;
      let TAG = 'Acts_ObserverAppState_0500_TAG';

      function subscribeCallBack(err, data) {
        console.info(TAG, 'subscribeCallBack' + JSON.stringify(data));
        if (data.event == 'stateEvent') {
          try {
            console.info(TAG, 'data.parameters.applicationState' + JSON.stringify(data));
            expect(data.parameters.applicationState).assertEqual(202);
          } catch (error) {
            console.info(TAG, 'subscribe callback error : ' + JSON.stringify(error));
          };
        }
      }

      commonEventManager.createSubscriber(StateEvent).then(async (data) => {
        console.debug(TAG, '====>Acts_ObserverAppState_0500 Create Subscribe');
        subscriber = data;
        commonEventManager.subscribe(subscriber, subscribeCallBack);
      })
      setTimeout(() => {
        globalThis.abilityContext.startAbility(
          {
            bundleName: 'com.example.observerappstatetwelve',
            abilityName: 'EntryAbility',
            action: 'Acts_ObserverAppState_0500'
          }, (err) => {
          console.info(TAG, '====>Acts_ObserverAppState_0500 startAbility err: ' + JSON.stringify(err));
          expect(err.code).assertEqual(0);
        })
        console.info(TAG, '====>Acts_ObserverAppState_0500 startAbility end');
      }, 500);
      let abilityDelegator = abilityDelegatorRegistry.getAbilityDelegator();
      setTimeout(() => {
        commonEventManager.unsubscribe(subscriber);
        abilityDelegator.executeShellCommand('pkill -f com.example.observerappstatetwelve').then((result) => {
          console.info(TAG, 'close subscriber success');
          console.info(TAG, '====>Acts_ObserverAppState_0500 Test End');
          done();
        }).catch((err) => {
          console.info(TAG, 'close subscriber fail');
          console.info(TAG, '====>Acts_ObserverAppState_0500 Test End');
          done();
        })
      }, 2500);
    })

    /*
    * @tc.number: Acts_ObserverAppState_0600
    * @tc.name: Enable and disable application listening
    * @tc.desc:
    */
    it('Acts_ObserverAppState_0600', 0, async function (done) {
      let subscriber;
      let TAG = 'Acts_ObserverAppState_0600_TAG';

      function subscribeCallBack(err, data) {
        console.info(TAG, 'subscribeCallBack' + JSON.stringify(data));
        if (data.event == 'stateEvent') {
          try {
            console.info(TAG, 'data.parameters.applicationState' + JSON.stringify(data));
            expect(data.parameters.applicationState).assertEqual(201);
          } catch (error) {
            console.info(TAG, 'subscribe callback error : ' + JSON.stringify(error));
          };
        }
      }

      commonEventManager.createSubscriber(StateEvent).then(async (data) => {
        console.debug(TAG, '====>Acts_ObserverAppState_0600 Create Subscribe');
        subscriber = data;
        commonEventManager.subscribe(subscriber, subscribeCallBack);
      })
      setTimeout(() => {
        globalThis.abilityContext.startAbility(
          {
            bundleName: 'com.example.observerappstatethirteen',
            abilityName: 'EntryAbility',
            action: 'Acts_ObserverAppState_0600'
          }, (err) => {
          console.info(TAG, '====>Acts_ObserverAppState_0600 startAbility err: ' + JSON.stringify(err));
          expect(err.code).assertEqual(0);
        })
        console.info(TAG, '====>Acts_ObserverAppState_0600 startAbility end');
      }, 500);
      let abilityDelegator = abilityDelegatorRegistry.getAbilityDelegator();
      setTimeout(() => {
        commonEventManager.unsubscribe(subscriber);
        abilityDelegator.executeShellCommand('pkill -f com.example.observerappstatethirteen').then((result) => {
          console.info(TAG, 'close subscriber success');
          console.info(TAG, '====>Acts_ObserverAppState_0600 Test End');
          done();
        }).catch((err) => {
          console.info(TAG, 'close subscriber fail');
          console.info(TAG, '====>Acts_ObserverAppState_0600 Test End');
          done();
        })
      }, 2500);
    })

    /*
    * @tc.number: Acts_ObserverAppState_0700
    * @tc.name: Enable and disable application listening
    * @tc.desc:
    */
    it('Acts_ObserverAppState_0700', 0, async function (done) {
      let TAG = 'Acts_ObserverAppState_0700_TAG';
      let subscriber;

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
        }
      }

      commonEventManager.createSubscriber(StateEvent).then(async (data) => {
        console.debug(TAG, '====>Acts_ObserverAppState_0700 Create Subscribe');
        subscriber = data;
        commonEventManager.subscribe(subscriber, subscribeCallback);
      })

      setTimeout(() => {
        globalThis.abilityContext.startAbility(
          {
            bundleName: 'com.example.observerappstatefour',
            abilityName: 'EntryAbility',
            action: 'Acts_ObserverAppState_0700'
          }, (err) => {
          console.info(TAG, '====>Acts_ObserverAppState_0700-04 startAbility err: ' + JSON.stringify(err));
          expect(err.code).assertEqual(0);
        })
        console.info(TAG, '====>Acts_ObserverAppState_0700-04 startAbility end');
      }, 500);
      setTimeout(() => {
        globalThis.abilityContext.startAbility(
          {
            bundleName: 'com.example.observerappstaterely',
            abilityName: 'EntryAbility',
            action: 'Acts_ObserverAppState_0700'
          }, (err) => {
          console.info(TAG, '====>Acts_ObserverAppState_0700-rely startAbility err: ' + JSON.stringify(err));
          expect(err.code).assertEqual(0);
        })
      }, 3000);
      let abilityDelegator = abilityDelegatorRegistry.getAbilityDelegator();
      setTimeout(() => {
        commonEventManager.unsubscribe(subscriber);
        abilityDelegator.executeShellCommand('pkill -f com.example.observerappstatefour').then((result) => {
          console.info(TAG, 'close subscriber success');
          console.info(TAG, '====>Acts_ObserverAppState_0700 Test End');
          done();
        }).catch((err) => {
          console.info(TAG, 'close subscriber fail');
          console.info(TAG, '====>Acts_ObserverAppState_0700 Test End');
          done();
        });
      }, 6000);
      await sleep(7000);
    })

    /*
    * @tc.number: Acts_ObserverAppState_0800
    * @tc.name: Enable and disable application listening
    * @tc.desc:
    */
    it('Acts_ObserverAppState_0800', 0, async function (done) {
      let TAG = 'Acts_ObserverAppState_0800_TAG';
      let subscriber;

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
        }
      }

      commonEventManager.createSubscriber(StateEvent).then(async (data) => {
        console.debug(TAG, '====>Acts_ObserverAppState_0800 Create Subscribe');
        subscriber = data;
        commonEventManager.subscribe(subscriber, subscribeCallback);
      })
      setTimeout(() => {
        globalThis.abilityContext.startAbility(
          {
            bundleName: 'com.example.observerappstatefive',
            abilityName: 'EntryAbility',
            action: 'Acts_ObserverAppState_0800'
          }, (err) => {
          console.info(TAG, '====>Acts_ObserverAppState_0800 startAbility err: ' + JSON.stringify(err));
          expect(err.code).assertEqual(0);
        })
        console.info(TAG, '====>Acts_ObserverAppState_0800 startAbility end');
      }, 500);
      setTimeout(() => {
        globalThis.abilityContext.startAbility(
          {
            bundleName: 'com.example.observerappstaterely',
            abilityName: 'EntryAbility',
            action: 'Acts_ObserverAppState_0800'
          }, (err) => {
          console.info(TAG, '====>Acts_ObserverAppState_0800-rely startAbility err: ' + JSON.stringify(err));
          expect(err.code).assertEqual(0);
        })
      }, 3000);
      let abilityDelegator = abilityDelegatorRegistry.getAbilityDelegator();
      setTimeout(() => {
        commonEventManager.unsubscribe(subscriber);
        abilityDelegator.executeShellCommand('pkill -f com.example.observerappstatefive').then((result) => {
          console.info(TAG, 'close subscriber success');
          console.info(TAG, '====>Acts_ObserverAppState_0800 Test End');
          done();
        }).catch((err) => {
          console.info(TAG, 'close subscriber fail');
          console.info(TAG, '====>Acts_ObserverAppState_0800 Test End');
          done();
        });
      }, 6000);
      await sleep(7000);
    })

    /*
    * @tc.number: Acts_ObserverAppState_0900
    * @tc.name: Enable and disable application listening
    * @tc.desc:
    */
    it('Acts_ObserverAppState_0900', 0, async function (done) {
      let TAG = 'Acts_ObserverAppState_0900_TAG';
      let subscriber;

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
        }
      }

      commonEventManager.createSubscriber(StateEvent).then(async (data) => {
        console.debug(TAG, '====>Acts_ObserverAppState_0900 Create Subscribe');
        subscriber = data;
        commonEventManager.subscribe(subscriber, subscribeCallback);
      })
      setTimeout(() => {
        globalThis.abilityContext.startAbility(
          {
            bundleName: 'com.example.observerappstatesix',
            abilityName: 'EntryAbility',
            action: 'Acts_ObserverAppState_0500'
          }, (err) => {
          console.info(TAG, '====>Acts_ObserverAppState_0900 startAbility err: ' + JSON.stringify(err));
          expect(err.code).assertEqual(0);
        })
        console.info(TAG, '====>Acts_ObserverAppState_0900 startAbility end');
      }, 500)
      setTimeout(() => {
        globalThis.abilityContext.startAbility(
          {
            bundleName: 'com.example.observerappstaterely',
            abilityName: 'EntryAbility',
            action: 'Acts_ObserverAppState_0900'
          }, (err) => {
          console.info(TAG, '====>Acts_ObserverAppState_0900 startAbility err: ' + JSON.stringify(err));
          expect(err.code).assertEqual(0);
        })
      }, 3000);
      let abilityDelegator = abilityDelegatorRegistry.getAbilityDelegator();
      setTimeout(() => {
        commonEventManager.unsubscribe(subscriber);
        abilityDelegator.executeShellCommand('pkill -f com.example.observerappstatesix').then((result) => {
          console.info(TAG, 'close subscriber success');
          console.info(TAG, '====>Acts_ObserverAppState_0900 Test End');
          done();
        }).catch((err) => {
          console.info(TAG, 'close subscriber fail');
          console.info(TAG, '====>Acts_ObserverAppState_0900 Test End');
          done();
        });
      }, 6000)
      await sleep(7000);
    })

    /*
    * @tc.number: Acts_ObserverAppState_1000
    * @tc.name: Enable and disable application listening
    * @tc.desc:
    */
    it('Acts_ObserverAppState_1000', 0, async function (done) {
      let TAG = 'Acts_ObserverAppState_1000_TAG'
      let subscriber;

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
        }
      }

      commonEventManager.createSubscriber(StateEvent).then(async (data) => {
        console.debug(TAG, '====>Acts_ObserverAppState_1000 Create Subscribe');
        subscriber = data;
        commonEventManager.subscribe(subscriber, subscribeCallback);
      })
      setTimeout(() => {
        globalThis.abilityContext.startAbility(
          {
            bundleName: 'com.example.observerappstateseven',
            abilityName: 'EntryAbility',
            action: 'Acts_ObserverAppState_1000'
          }, (err) => {
          console.info(TAG, '====>Acts_ObserverAppState_1000 startAbility err: ' + JSON.stringify(err));
          expect(err.code).assertEqual(0);
        })
        console.info(TAG, '====>Acts_ObserverAppState_1000 startAbility end');
      }, 500)
      setTimeout(() => {
        globalThis.abilityContext.startAbility(
          {
            bundleName: 'com.example.observerappstaterely',
            abilityName: 'EntryAbility',
            action: 'Acts_ObserverAppState_1000'
          }, (err) => {
          console.info(TAG, '====>Acts_ObserverAppState_1000 startAbility err: ' + JSON.stringify(err));
          expect(err.code).assertEqual(0);
        })
      }, 3000);
      let abilityDelegator = abilityDelegatorRegistry.getAbilityDelegator();
      setTimeout(() => {
        commonEventManager.unsubscribe(subscriber);
        abilityDelegator.executeShellCommand('pkill -f com.example.observerappstateseven').then((result) => {
          console.info(TAG, 'close subscriber success');
          console.info(TAG, '====>Acts_ObserverAppState_1000 Test End');
          done();
        }).catch((err) => {
          console.info(TAG, 'close subscriber fail');
          console.info(TAG, '====>Acts_ObserverAppState_1000 Test End');
          done();
        });
      }, 6000)
      await sleep(7000);
    })

    /*
    * @tc.number: Acts_ObserverAppState_1100
    * @tc.name: Enable and disable application listening
    * @tc.desc:
    */
    it('Acts_ObserverAppState_1100', 0, async function (done) {
      let TAG = 'Acts_ObserverAppState_1100_TAG'
      let subscriber;

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
        }
      }

      commonEventManager.createSubscriber(StateEvent).then(async (data) => {
        console.debug(TAG, '====>Acts_ObserverAppState_1100 Create Subscribe');
        subscriber = data;
        commonEventManager.subscribe(subscriber, subscribeCallback);
      })
      setTimeout(() => {
        globalThis.abilityContext.startAbility(
          {
            bundleName: 'com.example.observerappstateeight',
            abilityName: 'EntryAbility',
            action: 'Acts_ObserverAppState_1100'
          }, (err) => {
          console.info(TAG, '====>Acts_ObserverAppState_1100 startAbility err: ' + JSON.stringify(err));
          expect(err.code).assertEqual(0);
        })
        console.info(TAG, '====>Acts_ObserverAppState_1100 startAbility end');
      }, 500)
      setTimeout(() => {
        globalThis.abilityContext.startAbility(
          {
            bundleName: 'com.example.observerappstaterely',
            abilityName: 'EntryAbility',
            action: 'Acts_ObserverAppState_1100'
          }, (err) => {
          console.info(TAG, '====>Acts_ObserverAppState_1100 startAbility err: ' + JSON.stringify(err));
          expect(err.code).assertEqual(0);
        })
      }, 3000);
      let abilityDelegator = abilityDelegatorRegistry.getAbilityDelegator();
      setTimeout(() => {
        commonEventManager.unsubscribe(subscriber);
        abilityDelegator.executeShellCommand('pkill -f com.example.observerappstateeight').then((result) => {
          console.info(TAG, 'close subscriber success');
          console.info(TAG, '====>Acts_ObserverAppState_1100 Test End');
          done();
        }).catch((err) => {
          console.info(TAG, 'close subscriber fail');
          console.info(TAG, '====>Acts_ObserverAppState_1100 Test End');
          done();
        });
      }, 6000)
      await sleep(7000);
    })

    /*
    * @tc.number: Acts_ObserverAppState_1200
    * @tc.name: Enable and disable application listening
    * @tc.desc:
    */
    it('Acts_ObserverAppState_1200', 0, async function (done) {
      let TAG = 'Acts_ObserverAppState_1200_TAG'
      let subscriber;

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
        }
      }

      commonEventManager.createSubscriber(StateEvent).then(async (data) => {
        console.debug(TAG, '====>Acts_ObserverAppState_1200 Create Subscribe');
        subscriber = data;
        commonEventManager.subscribe(subscriber, subscribeCallback);
      })
      setTimeout(() => {
        globalThis.abilityContext.startAbility(
          {
            bundleName: 'com.example.observerappstatenineone',
            abilityName: 'EntryAbility',
            action: 'Acts_ObserverAppState_1200'
          }, (err) => {
          console.info(TAG, '====>Acts_ObserverAppState_1200 startAbility err: ' + JSON.stringify(err));
          expect(err.code).assertEqual(0);
        })
        console.info(TAG, '====>Acts_ObserverAppState_1200 startAbility end');
      }, 500);
      setTimeout(() => {
        globalThis.abilityContext.startAbility(
          {
            bundleName: 'com.example.observerappstateninetwo',
            abilityName: 'EntryAbility',
            action: 'Acts_ObserverAppState_1200'
          }, (err) => {
          console.info(TAG, '====>Acts_ObserverAppState_1200 startAbility err: ' + JSON.stringify(err));
          expect(err.code).assertEqual(0);
        })
        console.info(TAG, '====>Acts_ObserverAppState_1200 startAbility end');
      }, 2000);
      setTimeout(() => {
        globalThis.abilityContext.startAbility(
          {
            bundleName: 'com.example.observerappstaterely',
            abilityName: 'EntryAbility',
            action: 'Acts_ObserverAppState_1200'
          }, (err) => {
          console.info(TAG, '====>Acts_ObserverAppState_1200 startAbility err: ' + JSON.stringify(err));
          expect(err.code).assertEqual(0);
        })
      }, 3500);
      let abilityDelegator = abilityDelegatorRegistry.getAbilityDelegator();
      setTimeout(() => {
        commonEventManager.unsubscribe(subscriber);
        abilityDelegator.executeShellCommand('pkill -f com.example.observerappstatenineone').then((result) => {
          console.info(TAG, 'close first subscriber success');
        }).catch((err) => {
          console.info(TAG, 'close subscriber fail');
        });
      }, 5000);
      setTimeout(() => {
        commonEventManager.unsubscribe(subscriber);
        abilityDelegator.executeShellCommand('pkill -f com.example.observerappstateninetwo').then((result) => {
          console.info(TAG, 'close second subscriber success');
          console.info(TAG, '====>Acts_ObserverAppState_1200 Test End');
          done();
        }).catch((err) => {
          console.info(TAG, 'close subscriber fail');
          console.info(TAG, '====>Acts_ObserverAppState_1200 Test End');
          done();
        });
      }, 6000);
      await sleep(7000);
    })

    /*
    * @tc.number: Acts_ObserverAppState_1300
    * @tc.name: Enable and disable application listening
    * @tc.desc:
    */
    it('Acts_ObserverAppState_1300', 0, async function (done) {
      let TAG = 'Acts_ObserverAppState_1300_TAG';
      let subscriber;

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
        }
      }

      commonEventManager.createSubscriber(StateEvent).then(async (data) => {
        console.debug(TAG, '====>Acts_ObserverAppState_1300 Create Subscribe');
        subscriber = data;
        commonEventManager.subscribe(subscriber, subscribeCallback);
      })
      setTimeout(() => {
        globalThis.abilityContext.startAbility(
          {
            bundleName: 'com.example.observerappstatetenone',
            abilityName: 'EntryAbility',
            action: 'Acts_ObserverAppState_1300'
          }, (err) => {
          console.info(TAG, '====>Acts_ObserverAppState_1300 startAbility err: ' + JSON.stringify(err));
          expect(err.code).assertEqual(0);
        })
        console.info(TAG, '====>Acts_ObserverAppState_1300 startAbility end');
      }, 500);
      setTimeout(() => {
        globalThis.abilityContext.startAbility(
          {
            bundleName: 'com.example.observerappstatetentwo',
            abilityName: 'EntryAbility',
            action: 'Acts_ObserverAppState_1300'
          }, (err) => {
          console.info(TAG, '====>Acts_ObserverAppState_1300 startAbility err: ' + JSON.stringify(err));
          expect(err.code).assertEqual(0);
        })
        console.info(TAG, '====>Acts_ObserverAppState_1300 startAbility end');
      }, 2000);
      setTimeout(() => {
        globalThis.abilityContext.startAbility(
          {
            bundleName: 'com.example.observerappstaterely',
            abilityName: 'EntryAbility',
            action: 'Acts_ObserverAppState_1300'
          }, (err) => {
          console.info(TAG, '====>Acts_ObserverAppState_1300 startAbility err: ' + JSON.stringify(err));
          expect(err.code).assertEqual(0);
        })
      }, 3500);
      let abilityDelegator = abilityDelegatorRegistry.getAbilityDelegator();
      setTimeout(() => {
        commonEventManager.unsubscribe(subscriber);
        abilityDelegator.executeShellCommand('pkill -f com.example.observerappstatetenone').then((result) => {
          console.info(TAG, 'close first subscriber success');
        }).catch((err) => {
          console.info(TAG, 'close subscriber fail');
        })
      }, 5000);
      setTimeout(() => {
        commonEventManager.unsubscribe(subscriber);
        abilityDelegator.executeShellCommand('pkill -f com.example.observerappstatetentwo').then((result) => {
          console.info(TAG, 'close second subscriber success');
          console.info(TAG, '====>Acts_ObserverAppState_1300 Test End');
          done();
        }).catch((err) => {
          console.info(TAG, 'close subscriber fail');
          console.info(TAG, '====>Acts_ObserverAppState_1300 Test End');
          done();
        });
      }, 6000);
      await sleep(7000);
    })

    /*
    * @tc.number: Acts_ObserverAppState_1400
    * @tc.name: Enable and disable application listening
    * @tc.desc:
    */
    it('Acts_ObserverAppState_1400', 0, async function (done) {
      let TAG = 'Acts_ObserverAppState_1400_TAG';
      let subscriber;

      function subscribeCallback(err, data) {
        if (data.event == 'stateEvent') {
          try {
            console.info(TAG, 'subscribe callback data : ' + JSON.stringify(data));
            expect(data.parameters.flag).assertEqual(0);
          } catch (error) {
            console.info(TAG, 'subscribe callback error : ' + JSON.stringify(error));
          };
        }
      }

      commonEventManager.createSubscriber(StateEvent).then(async (data) => {
        console.debug(TAG, '====>Acts_ObserverAppState_1400 Create Subscribe');
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
          console.info(TAG, '====>Acts_ObserverAppState_1400 startAbility err: ' + JSON.stringify(err));
          expect(err.code).assertEqual(0);
        })
        console.info(TAG, '====>Acts_ObserverAppState_1400 startAbility end');
      }, 500);

      let abilityDelegator = abilityDelegatorRegistry.getAbilityDelegator();
      setTimeout(() => {
        commonEventManager.unsubscribe(subscriber);
        abilityDelegator.executeShellCommand('pkill -f com.example.observerappstatefourteen').then((result) => {
          console.info(TAG, 'close subscriber success');
          console.info(TAG, '====>Acts_ObserverAppState_1400 Test End');
          done();
        }).catch((err) => {
          console.info(TAG, 'close subscriber fail');
          console.info(TAG, '====>Acts_ObserverAppState_1400 Test End');
          done();
        });
      }, 3000);
    })

    /*
    * @tc.number: Acts_ObserverAppState_1500
    * @tc.name: Enable and disable application listening
    * @tc.desc:
    */
    it('Acts_ObserverAppState_1500', 0, async function (done) {
      let TAG = 'Acts_ObserverAppState_1500_TAG';
      console.info(TAG, 'Start.');
      await sleep(500);
      let want = {
        bundleName: 'com.example.actsobserverwindowmoderely',
        abilityName: 'EntryAbility'
      };
      let options = {
        windowMode: AbilityConstant.WindowMode.WINDOW_MODE_SPLIT_PRIMARY
      };
      await globalThis.abilityContext.startAbilityForResult(want, options).then((abilityResult) => {
        console.info(TAG, 'Start ability successfully.');
        console.info(TAG, 'Result: ' + JSON.stringify(abilityResult));
        expect(abilityResult.want.parameters.appStateData.isFloatingWindowMode).assertFalse();
        expect(abilityResult.want.parameters.appStateData.isSplitScreenMode).assertTrue();
        abilityDelegatorRegistry.getAbilityDelegator()
          .executeShellCommand('aa force-stop com.example.actsobserverwindowmoderely');
        done();
      }).catch((error) => {
        expect().assertFail();
        done();
      });
      console.info(TAG, 'End.');
    })

    /*
    * @tc.number: Acts_ObserverAppState_1600
    * @tc.name: Enable and disable application listening
    * @tc.desc:
    */
    it('Acts_ObserverAppState_1600', 0, async function (done) {
      let TAG = 'Acts_ObserverAppState_1600_TAG';
      console.info(TAG, 'Start.');
      await sleep(500);
      let want = {
        bundleName: 'com.example.actsobserverwindowmoderely',
        abilityName: 'EntryAbility'
      };
      let options = {
        windowMode: AbilityConstant.WindowMode.WINDOW_MODE_SPLIT_PRIMARY
      };
      await globalThis.abilityContext.startAbilityForResult(want, options).then((abilityResult) => {
        console.info(TAG, 'Start ability successfully.');
        console.info(TAG, 'Result: ' + JSON.stringify(abilityResult));
        expect(abilityResult.want.parameters.appStateData.isFloatingWindowMode).assertFalse();
        expect(abilityResult.want.parameters.appStateData.isSplitScreenMode).assertTrue();
        abilityDelegatorRegistry.getAbilityDelegator()
          .executeShellCommand('aa force-stop com.example.actsobserverwindowmoderely');
        done();
      }).catch((error) => {
        expect().assertFail();
        done();
      });
      console.info(TAG, 'End.');
    })
  })
}