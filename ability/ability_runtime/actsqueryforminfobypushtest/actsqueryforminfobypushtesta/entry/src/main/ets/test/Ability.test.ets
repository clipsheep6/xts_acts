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
import commonEvent from '@ohos.commonEventManager'
import formHost from '@ohos.app.form.formHost'
const CASE_TIME_OUT = 3000;
const WAIT_FUNCTION_DONE_TIME = 500;
var ACTS_FormEvent = {
  events: ['ACTS_FirstAppFirstAbilityFirst', 'ACTS_FirstAppFirstAbilitySecond', 'ACTS_FirstAppSecondAbilityFirst',
    'ACTS_FirstAppSecondAbilitySecond', 'ACTS_FirstAppSecondAbilityThird', "ACTS_FirstAppThirdAbilityFirst",
    "ACTS_FirstAppThirdAbilitySecond", 'ACTS_SecondAppFirstAbilityFirst', 'ACTS_SecondAppFirstAbilitySecond',
    'ACTS_SecondAppFirstAbilityThird', 'ACTS_FirstAppSecondModuleFirst', 'ACTS_FirstAppSecondModuleSecond']
};
const FIRST_APP_FIRST_ABILITY_VISIBLE_WANT = {
  bundleName: 'com.example.queryforminfobypushtest',
  abilityName: 'EntryAbility',
  parameters: {
    'isVisible': 'notifyVisible'
  }
};
const FIRST_APP_FIRST_ABILITY_INVISIBLE_WANT = {
  bundleName: 'com.example.queryforminfobypushtest',
  abilityName: 'EntryAbility',
  parameters: {
    'isVisible': 'notifyInvisible'
  }
};
const FIRST_APP_SECOND_ABILITY_VISIBLE_WANT = {
  bundleName: 'com.example.queryforminfobypushtest',
  abilityName: 'EntryAbility2',
  moduleName: 'entry',
  parameters: {
    'isVisible': 'notifyVisible'
  }
};
const FIRST_APP_SECOND_ABILITY_INVISIBLE_WANT = {
  bundleName: 'com.example.queryforminfobypushtest',
  abilityName: 'EntryAbility2',
  parameters: {
    'isVisible': 'notifyInvisible'
  }
};
const FIRST_APP_THIRD_ABILITY_VISIBLE_WANT = {
  bundleName: 'com.example.queryforminfobypushtest',
  abilityName: 'EntryAbility3',
  parameters: {
    'isVisible': 'notifyVisible'
  }
};
const FIRST_APP_THIRD_ABILITY_INVISIBLE_WANT = {
  bundleName: 'com.example.queryforminfobypushtest',
  abilityName: 'EntryAbility3',
  parameters: {
    'isVisible': 'notifyInvisible'
  }
};
const SECOND_APP_FIRST_ABILITY_VISIBLE_WANT = {
  bundleName: 'com.example.queryforminfobypushtestb',
  abilityName: 'EntryAbility',
  parameters: {
    'isVisible': 'notifyVisible'
  }
};
const SECOND_APP_FIRST_ABILITY_INVISIBLE_WANT = {
  bundleName: 'com.example.queryforminfobypushtestb',
  abilityName: 'EntryAbility',
  parameters: {
    'isVisible': 'notifyInvisible'
  }
};

export default function abilityTest() {
  describe('ActsAbilityTest', function () {
    afterEach(async (done) => {
      setTimeout(() => {
        done();
      }, 1500)
    })

    function sleep(delay) {
      var start = new Date().getTime();
      while (true) {
        if (new Date().getTime() - start > delay) {
          break;
        }
      }
    }

    /*
     * @tc.number: Acts_QueryFormInfoByPush_On_0100
     * @tc.name: Listens to the event of notifyVisible or notifyInvisible type change.
     * @tc.desc: Call the on interface with the type is null.
     */
    it('Acts_QueryFormInfoByPush_On_0100', 0, function () {
      let count = 0;
      try {
        formHost.on(null, function () {}, 'com.example.queryforminfobypushtest');
      } catch (error) {
        count++;
        expect(error.code).assertEqual(401);
      }
      expect(count).assertEqual(1);
    })

    /*
     * @tc.number: Acts_QueryFormInfoByPush_On_0200
     * @tc.name: Listens to the event of notifyVisible or notifyInvisible type change.
     * @tc.desc: Call the on interface with the type is undefined.
     */
    it('Acts_QueryFormInfoByPush_On_0200', 0, function () {
      let count = 0;
      try {
        formHost.on(undefined, function () {}, 'com.example.queryforminfobypushtest');
      } catch (error) {
        count++;
        expect(error.code).assertEqual(401);
      }
      expect(count).assertEqual(1);
    })

    /*
     * @tc.number: Acts_QueryFormInfoByPush_On_0300
     * @tc.name: Listens to the event of notifyVisible or notifyInvisible type change.
     * @tc.desc: Call the on interface with the type of notifyVisible when the callback is null.
     */
    it('Acts_QueryFormInfoByPush_On_0300', 0, function () {
      let count = 0;
      try {
        formHost.on('notifyVisible', null, 'com.example.queryforminfobypushtest');
      } catch (error) {
        count++;
        expect(error.code).assertEqual(401);
      }
      expect(count).assertEqual(1);
    })

    /*
     * @tc.number: Acts_QueryFormInfoByPush_On_0400
     * @tc.name: Listens to the event of notifyVisible or notifyInvisible type change.
     * @tc.desc: Call the on interface with the type of notifyVisible when the callback is undefined.
     */
    it('Acts_QueryFormInfoByPush_On_0400', 0, function () {
      let count = 0;
      try {
        formHost.on('notifyVisible', undefined, 'com.example.queryforminfobypushtest');
      } catch (error) {
        count++;
        expect(error.code).assertEqual(401);
      }
      expect(count).assertEqual(1);
    })

    /*
     * @tc.number: Acts_QueryFormInfoByPush_On_0500
     * @tc.name: Listens to the event of notifyVisible or notifyInvisible type change.
     * @tc.desc: Call the on interface with the type of notifyVisible when the hostBundleName is empty string.
     */
    it('Acts_QueryFormInfoByPush_On_0500', 0, function () {
      let count = 0;
      try {
        formHost.on('notifyVisible', function () {}, '');
      } catch (error) {
        count++;
        expect(error.code).assertEqual(401);
      }
      expect(count).assertEqual(1);
    })

    /*
     * @tc.number: Acts_QueryFormInfoByPush_On_0600
     * @tc.name: Listens to the event of notifyVisible or notifyInvisible type change.
     * @tc.desc: Call the on interface with the type of notifyVisible when the hostBundleName is 'abcd'.
     */
    it('Acts_QueryFormInfoByPush_On_0600', 0, async function (done) {
      var callbackCount = 0;
      let callback = function () {
        callbackCount++;
      }
      try {
        formHost.on('notifyVisible', callback, 'abcd');
      } catch (error) {
        expect().assertFail();
      }

      commonEvent.createSubscriber(ACTS_FormEvent).then((data) => {
        var subscriber = data;
        var flag = false;
        commonEvent.subscribe(subscriber, subscribeCallBack);
        globalThis.abilityContext.startAbility(FIRST_APP_FIRST_ABILITY_VISIBLE_WANT, (err) => {
          expect(err.code).assertEqual(0);
        });

        function subscribeCallBack(err, data) {
          console.info('====>Acts_QueryFormInfoByPush_On_0600 subscribeCallBack data:' + JSON.stringify(data));
          flag = true;
          if (data.event == 'ACTS_FirstAppFirstAbilityFirst') {
            try {
              expect(callbackCount).assertEqual(0);
            } catch {}
            try {
              formHost.off('notifyVisible', callback, 'abcd');
            } catch (error) {
              expect().assertFail();
            }
            setTimeout(() => {
              commonEvent.unsubscribe(subscriber, unSubscribeCallback);
            }, WAIT_FUNCTION_DONE_TIME);
          }
        }

        function unSubscribeCallback() {
          done();
        }
        setTimeout(() => {
          if (flag == false) {
            expect().assertFail();
            commonEvent.unsubscribe(subscriber, unSubscribeCallback);
          }
        }, CASE_TIME_OUT);
      })
    })

    /*
     * @tc.number: Acts_QueryFormInfoByPush_On_0700
     * @tc.name: Listens to the event of notifyVisible or notifyInvisible type change.
     * @tc.desc: Call the on interface with the type of notifyVisible when the hostBundleName is null.
     */
    it('Acts_QueryFormInfoByPush_On_0700', 0, async function (done) {
      var callbackFormId;
      let callback = function (data) {
        callbackFormId = data[0].formId;
        console.log(`====>Acts_QueryFormInfoByPush_On_0700 callback data: ${JSON.stringify(data)}`);
      }
      try {
        formHost.on('notifyVisible', callback, null);
      } catch (error) {
        expect().assertFail();
      }

      await commonEvent.createSubscriber(ACTS_FormEvent).then((data) => {
        var subscriber = data;
        var flag = false;
        commonEvent.subscribe(subscriber, subscribeCallBack);
        globalThis.abilityContext.startAbility(FIRST_APP_FIRST_ABILITY_VISIBLE_WANT, (err) => {
          expect(err.code).assertEqual(0);
        });

        function subscribeCallBack(err, data) {
          console.info('====>Acts_QueryFormInfoByPush_On_0700 subscribeCallBack data:' + JSON.stringify(data));
          flag = true;
          if (data.event == 'ACTS_FirstAppFirstAbilityFirst') {
            expect(callbackFormId).assertEqual(data.parameters.formId);
            try {
              formHost.off('notifyVisible', callback, null);
            } catch (error) {
              expect().assertFail();
            }
            setTimeout(() => {
              commonEvent.unsubscribe(subscriber, unSubscribeCallback);
            }, WAIT_FUNCTION_DONE_TIME);
          }
        }

        function unSubscribeCallback() {
          done();
        }
        setTimeout(() => {
          if (flag == false) {
            expect().assertFail();
            commonEvent.unsubscribe(subscriber, unSubscribeCallback);
          }
        }, CASE_TIME_OUT);
      })
    })

    /*
     * @tc.number: Acts_QueryFormInfoByPush_On_0800
     * @tc.name: Listens to the event of notifyVisible or notifyInvisible type change.
     * @tc.desc: Call the on interface with the type of notifyVisible when the hostBundleName is undefined.
     */
    it('Acts_QueryFormInfoByPush_On_0800', 0, async function (done) {
      var callbackFormId;
      let callback = function (data) {
        callbackFormId = data[0].formId;
        console.log(`====>Acts_QueryFormInfoByPush_On_0800 callback data: ${JSON.stringify(data)}`);
      }
      try {
        formHost.on('notifyVisible', callback, undefined);
      } catch (error) {
        expect().assertFail();
      }

      await commonEvent.createSubscriber(ACTS_FormEvent).then((data) => {
        var subscriber = data;
        var flag = false;
        commonEvent.subscribe(subscriber, subscribeCallBack);
        globalThis.abilityContext.startAbility(FIRST_APP_FIRST_ABILITY_VISIBLE_WANT, (err) => {
          expect(err.code).assertEqual(0);
        });

        function subscribeCallBack(err, data) {
          console.info('====>Acts_QueryFormInfoByPush_On_0800 subscribeCallBack data:' + JSON.stringify(data));
          flag = true;
          if (data.event == 'ACTS_FirstAppFirstAbilityFirst') {
            try {
              expect(callbackFormId).assertEqual(data.parameters.formId);
            } catch {}
            try {
              formHost.off('notifyVisible', callback, undefined);
            } catch (error) {
              expect().assertFail();
            }
            setTimeout(() => {
              commonEvent.unsubscribe(subscriber, unSubscribeCallback);
            }, WAIT_FUNCTION_DONE_TIME);
          }
        }

        function unSubscribeCallback() {
          done();
        }
        setTimeout(() => {
          if (flag == false) {
            expect().assertFail();
            commonEvent.unsubscribe(subscriber, unSubscribeCallback);
          }
        }, CASE_TIME_OUT);
      })
    })

    /*
     * @tc.number: Acts_QueryFormInfoByPush_On_1100
     * @tc.name: Listens to the event of notifyVisible or notifyInvisible type change.
     * @tc.desc: Call the on interface with the type of notifyInvisible when the callback is null.
     */
    it('Acts_QueryFormInfoByPush_On_1100', 0, function () {
      let count = 0;
      try {
        formHost.on('notifyInvisible', null, 'com.example.queryforminfobypushtest');
      } catch (error) {
        count++;
        expect(error.code).assertEqual(401);
      }
      expect(count).assertEqual(1);
    })

    /*
     * @tc.number: Acts_QueryFormInfoByPush_On_1200
     * @tc.name: Listens to the event of notifyVisible or notifyInvisible type change.
     * @tc.desc: Call the on interface with the type of notifyInvisible when the callback is undefined.
     */
    it('Acts_QueryFormInfoByPush_On_1200', 0, function () {
      let count = 0;
      try {
        formHost.on('notifyInvisible', undefined, 'com.example.queryforminfobypushtest');
      } catch (error) {
        count++;
        expect(error.code).assertEqual(401);
      }
      expect(count).assertEqual(1);
    })

    /*
     * @tc.number: Acts_QueryFormInfoByPush_On_1300
     * @tc.name: Listens to the event of notifyVisible or notifyInvisible type change.
     * @tc.desc: Call the on interface with the type of notifyInvisible when the hostBundleName is empty string.
     */
    it('Acts_QueryFormInfoByPush_On_1300', 0, function () {
      let count = 0;
      try {
        formHost.on('notifyInvisible', function () {}, '');
      } catch (error) {
        count++;
        expect(error.code).assertEqual(401);
      }
      expect(count).assertEqual(1);
    })

    /*
     * @tc.number: Acts_QueryFormInfoByPush_On_1400
     * @tc.name: Listens to the event of notifyVisible or notifyInvisible type change.
     * @tc.desc: Call the on interface with the type of notifyInvisible when the hostBundleName is 'abcd'.
     */
    it('Acts_QueryFormInfoByPush_On_1400', 0, async function (done) {
      var callbackCount = 0;
      let callback = function () {
        callbackCount++;
      }
      try {
        formHost.on('notifyInvisible', callback, 'abcd');
      } catch (error) {
        expect().assertFail();
      }

      await commonEvent.createSubscriber(ACTS_FormEvent).then((data) => {
        var subscriber = data;
        var flag = false;
        commonEvent.subscribe(subscriber, subscribeCallBack);
        globalThis.abilityContext.startAbility(FIRST_APP_FIRST_ABILITY_INVISIBLE_WANT, (err) => {
          expect(err.code).assertEqual(0);
        });

        function subscribeCallBack(err, data) {
          console.info('====>Acts_QueryFormInfoByPush_On_1400 subscribeCallBack data:' + JSON.stringify(data));
          flag = true;
          if (data.event == 'ACTS_FirstAppFirstAbilityFirst') {
            try {
              expect(callbackCount).assertEqual(0);
            } catch {}
            try {
              formHost.off('notifyInvisible', callback, 'abcd');
            } catch (error) {
              expect().assertFail();
            }
            setTimeout(() => {
              commonEvent.unsubscribe(subscriber, unSubscribeCallback);
            }, WAIT_FUNCTION_DONE_TIME);
          }
        }

        function unSubscribeCallback() {
          done();
        }
        setTimeout(() => {
          if (flag == false) {
            expect().assertFail();
            commonEvent.unsubscribe(subscriber, unSubscribeCallback);
          }
        }, CASE_TIME_OUT);
      })
    })

    /*
     * @tc.number: Acts_QueryFormInfoByPush_On_1500
     * @tc.name: Listens to the event of notifyVisible or notifyInvisible type change.
     * @tc.desc: Call the on interface with the type of notifyInvisible when the hostBundleName is null.
     */
    it('Acts_QueryFormInfoByPush_On_1500', 0, async function (done) {
      var callbackFormId;
      let callback = function (data) {
        callbackFormId = data[0].formId;
        console.log(`====>Acts_QueryFormInfoByPush_On_1500 callback data: ${JSON.stringify(data)}`);
      }
      try {
        formHost.on('notifyInvisible', callback, null);
      } catch (error) {
        expect().assertFail();
      }

      await commonEvent.createSubscriber(ACTS_FormEvent).then((data) => {
        var subscriber = data;
        var flag = false;
        commonEvent.subscribe(subscriber, subscribeCallBack);
        globalThis.abilityContext.startAbility(FIRST_APP_FIRST_ABILITY_INVISIBLE_WANT, (err) => {
          expect(err.code).assertEqual(0);
        });


        function subscribeCallBack(err, data) {
          console.info('====>Acts_QueryFormInfoByPush_On_1500 subscribeCallBack data:' + JSON.stringify(data));
          flag = true;
          if (data.event == 'ACTS_FirstAppFirstAbilityFirst') {
            expect(callbackFormId).assertEqual(data.parameters.formId);
            try {
              formHost.off('notifyInvisible', callback, null);
            } catch (error) {
              expect().assertFail();
            }
            setTimeout(() => {
              commonEvent.unsubscribe(subscriber, unSubscribeCallback);
            }, WAIT_FUNCTION_DONE_TIME);
          }
        }

        function unSubscribeCallback() {
          done();
        }
        setTimeout(() => {
          if (flag == false) {
            expect().assertFail();
            commonEvent.unsubscribe(subscriber, unSubscribeCallback);
          }
        }, CASE_TIME_OUT);
      })
    })

    /*
     * @tc.number: Acts_QueryFormInfoByPush_On_1600
     * @tc.name: Listens to the event of notifyVisible or notifyInvisible type change.
     * @tc.desc: Call the on interface with the type of notifyInvisible when the hostBundleName is undefined.
     */
    it('Acts_QueryFormInfoByPush_On_1600', 0, async function (done) {
      var callbackFormId;
      let callback = function (data) {
        callbackFormId = data[0].formId;
        console.log(`====>Acts_QueryFormInfoByPush_On_1600 callback data: ${JSON.stringify(data)}`);
      }
      try {
        formHost.on('notifyInvisible', callback, undefined);
      } catch (error) {
        expect().assertFail();
      }

      await commonEvent.createSubscriber(ACTS_FormEvent).then((data) => {
        console.info('====>Acts_QueryFormInfoByPush_On_1600 Create Subscribe');
        var subscriber = data;
        var flag = false;
        commonEvent.subscribe(subscriber, subscribeCallBack);
        globalThis.abilityContext.startAbility(FIRST_APP_FIRST_ABILITY_INVISIBLE_WANT, (err) => {
          expect(err.code).assertEqual(0);
        });


        function subscribeCallBack(err, data) {
          console.info('====>Acts_QueryFormInfoByPush_On_1600 subscribeCallBack data:' + JSON.stringify(data));
          flag = true;
          if (data.event == 'ACTS_FirstAppFirstAbilityFirst') {
            try {
              expect(callbackFormId).assertEqual(data.parameters.formId);
            } catch {}
            try {
              formHost.off('notifyInvisible', callback, undefined);
            } catch (error) {
              expect().assertFail();
            }
            setTimeout(() => {
              commonEvent.unsubscribe(subscriber, unSubscribeCallback);
            }, WAIT_FUNCTION_DONE_TIME);
          }
        }

        function unSubscribeCallback() {
          done();
        }
        setTimeout(() => {
          if (flag == false) {
            expect().assertFail();
            commonEvent.unsubscribe(subscriber, unSubscribeCallback);
          }
        }, CASE_TIME_OUT);
      })
    })

    /*
     * @tc.number: Acts_QueryFormInfoByPush_Off_0100
     * @tc.name: Cancels listening to the event of notifyVisible or notifyInvisible type change.
     * @tc.desc: Call the off interface with the type of notifyVisible.
     */
    it('Acts_QueryFormInfoByPush_Off_0100', 0, async function (done) {
      var callbackFormId;
      var callbackCount = 0;
      let callback = function (data) {
        callbackFormId = data[0].formId;
        callbackCount++;
        console.log(`====>Acts_QueryFormInfoByPush_Off_0100 callback data: ${JSON.stringify(data)}`);
      }
      try {
        formHost.on('notifyVisible', callback, 'com.example.queryforminfobypushtest');
      } catch (error) {
        expect().assertFail();
      }

      await commonEvent.createSubscriber(ACTS_FormEvent).then((data) => {
        console.info('====>Acts_QueryFormInfoByPush_Off_0100 Create Subscribe');
        var subscriber = data;
        var flag = false;
        commonEvent.subscribe(subscriber, subscribeCallBack);
        globalThis.abilityContext.startAbility(FIRST_APP_FIRST_ABILITY_VISIBLE_WANT, (err) => {
          expect(err.code).assertEqual(0);
        });

        function subscribeCallBack(err, data) {
          console.info('====>Acts_QueryFormInfoByPush_Off_0100 subscribeCallBack data:' + JSON.stringify(data));
          flag = true;
          if (data.event == 'ACTS_FirstAppFirstAbilityFirst') {
            try {
              expect(callbackFormId).assertEqual(data.parameters.formId);
            } catch {}
            try {
              formHost.off('notifyVisible', callback, 'com.example.queryforminfobypushtest');
            } catch (error) {
              expect().assertFail();
            }
            commonEvent.publish("ACTS_FirstAppFirstAbilityWait", {}, ()=>{});
          }
          if (data.event == 'ACTS_FirstAppFirstAbilitySecond') {
            try {
              expect(callbackCount).assertEqual(1);
            } catch {}
            setTimeout(() => {
              commonEvent.unsubscribe(subscriber, unSubscribeCallback);
            }, WAIT_FUNCTION_DONE_TIME);
          }
        }

        function unSubscribeCallback() {
          done();
        }
        setTimeout(() => {
          if (flag == false) {
            expect().assertFail();
            commonEvent.unsubscribe(subscriber, unSubscribeCallback);
          }
        }, CASE_TIME_OUT);
      })
    })

    /*
     * @tc.number: Acts_QueryFormInfoByPush_Off_0300
     * @tc.name: Cancels listening to the event of notifyVisible or notifyInvisible type change.
     * @tc.desc: Call the off interface with the type of notifyVisible when the hostBundleName doesn't exist.
     */
    it('Acts_QueryFormInfoByPush_Off_0300', 0, async function (done) {
      var callbackFormId;
      var callbackCount = 0;
      let callback = function (data) {
        callbackFormId = data[0].formId;
        callbackCount++;
        console.log(`====>Acts_QueryFormInfoByPush_Off_0300 callback data: ${JSON.stringify(data)}`);
      }
      try {
        formHost.on('notifyVisible', callback);
      } catch (error) {
        expect().assertFail();
      }

      await commonEvent.createSubscriber(ACTS_FormEvent).then((data) => {
        console.info('====>Acts_QueryFormInfoByPush_Off_0300 Create Subscribe');
        var subscriber = data;
        var flag = false;
        commonEvent.subscribe(subscriber, subscribeCallBack);
        globalThis.abilityContext.startAbility(FIRST_APP_FIRST_ABILITY_VISIBLE_WANT, (err) => {
          expect(err.code).assertEqual(0);
        });

        function subscribeCallBack(err, data) {
          console.info('====>Acts_QueryFormInfoByPush_Off_0300 subscribeCallBack data:' + JSON.stringify(data));
          flag = true;
          if (data.event == 'ACTS_FirstAppFirstAbilityFirst') {
            try {
              expect(callbackFormId).assertEqual(data.parameters.formId);
            } catch {}
            try {
              formHost.off('notifyVisible', callback);
            } catch (error) {
              expect().assertFail();
            }
            commonEvent.publish("ACTS_FirstAppFirstAbilityWait", {}, ()=>{});
          }
          if (data.event == 'ACTS_FirstAppFirstAbilitySecond') {
            try {
              expect(callbackCount).assertEqual(1);
            } catch {}
            setTimeout(() => {
              commonEvent.unsubscribe(subscriber, unSubscribeCallback);
            }, WAIT_FUNCTION_DONE_TIME);
          }
        }

        function unSubscribeCallback() {
          done();
        }
        setTimeout(() => {
          if (flag == false) {
            expect().assertFail();
            commonEvent.unsubscribe(subscriber, unSubscribeCallback);
          }
        }, CASE_TIME_OUT);
      })
    })

    /*
     * @tc.number: Acts_QueryFormInfoByPush_Off_0400
     * @tc.name: Cancels listening to the event of notifyVisible or notifyInvisible type change.
     * @tc.desc: Call the off only when the parameter is notifyVisible.
     */
    it('Acts_QueryFormInfoByPush_Off_0400', 0, async function (done) {
      var callbackFormId;
      var callbackCount = 0;
      let callback = function (data) {
        callbackFormId = data[0].formId;
        callbackCount++;
        console.log(`====>Acts_QueryFormInfoByPush_Off_0400 callback data: ${JSON.stringify(data)}`);
      }
      try {
        formHost.on('notifyVisible', callback);
      } catch (error) {
        expect().assertFail();
      }

      await commonEvent.createSubscriber(ACTS_FormEvent).then((data) => {
        console.info('====>Acts_QueryFormInfoByPush_Off_0400 Create Subscribe');
        var subscriber = data;
        var flag = false;
        commonEvent.subscribe(subscriber, subscribeCallBack);
        globalThis.abilityContext.startAbility(FIRST_APP_FIRST_ABILITY_VISIBLE_WANT, (err) => {
          expect(err.code).assertEqual(0);
        });

        function subscribeCallBack(err, data) {
          console.info('====>Acts_QueryFormInfoByPush_Off_0400 subscribeCallBack data:' + JSON.stringify(data));
          flag = true;
          if (data.event == 'ACTS_FirstAppFirstAbilityFirst') {
            try {
              expect(callbackFormId).assertEqual(data.parameters.formId);
            } catch {}
            try {
              formHost.off('notifyVisible');
            } catch (error) {
              expect().assertFail();
            }
            commonEvent.publish("ACTS_FirstAppFirstAbilityWait", {}, ()=>{});
          }
          if (data.event == 'ACTS_FirstAppFirstAbilitySecond') {
            try {
              expect(callbackCount).assertEqual(1);
            } catch {}
            setTimeout(() => {
              commonEvent.unsubscribe(subscriber, unSubscribeCallback);
            }, WAIT_FUNCTION_DONE_TIME);
          }
        }

        function unSubscribeCallback() {
          done();
        }
        setTimeout(() => {
          if (flag == false) {
            expect().assertFail();
            commonEvent.unsubscribe(subscriber, unSubscribeCallback);
          }
        }, CASE_TIME_OUT);
      })
    })

    /*
     * @tc.number: Acts_QueryFormInfoByPush_Off_0600
     * @tc.name: Cancels listening to the event of notifyVisible or notifyInvisible type change.
     * @tc.desc: Call the off interface with the type of notifyInvisible.
     */
    it('Acts_QueryFormInfoByPush_Off_0600', 0, async function (done) {
      var callbackFormId = '0';
      var callbackCount = 0;
      let callback = function (data) {
        callbackFormId = data[0].formId;
        callbackCount++;
        console.log(`====>Acts_QueryFormInfoByPush_Off_0600 callback data: ${JSON.stringify(data)}`);
      }
      try {
        formHost.on('notifyInvisible', callback, 'com.example.queryforminfobypushtest');
      } catch (error) {
        expect().assertFail();
      }

      await commonEvent.createSubscriber(ACTS_FormEvent).then((data) => {
        console.info('====>Acts_QueryFormInfoByPush_Off_0600 Create Subscribe');
        var subscriber = data;
        var flag = false;
        commonEvent.subscribe(subscriber, subscribeCallBack);
        globalThis.abilityContext.startAbility(FIRST_APP_FIRST_ABILITY_INVISIBLE_WANT, (err) => {
          expect(err.code).assertEqual(0);
        });

        function subscribeCallBack(err, data) {
          console.info('====>Acts_QueryFormInfoByPush_Off_0600 subscribeCallBack data:' + JSON.stringify(data));
          flag = true;
          if (data.event == 'ACTS_FirstAppFirstAbilityFirst') {
            try {
              expect(callbackFormId).assertEqual(data.parameters.formId);
            } catch {}
            try {
              formHost.off('notifyInvisible', callback, 'com.example.queryforminfobypushtest');
            } catch (error) {
              expect().assertFail();
            }
            commonEvent.publish("ACTS_FirstAppFirstAbilityWait", {}, ()=>{});
          }
          if (data.event == 'ACTS_FirstAppFirstAbilitySecond') {
            try {
              expect(callbackCount).assertEqual(1);
            } catch {}
            setTimeout(() => {
              commonEvent.unsubscribe(subscriber, unSubscribeCallback);
            }, WAIT_FUNCTION_DONE_TIME);
          }
        }

        function unSubscribeCallback() {
          done();
        }
        setTimeout(() => {
          if (flag == false) {
            expect().assertFail();
            commonEvent.unsubscribe(subscriber, unSubscribeCallback);
          }
        }, CASE_TIME_OUT);
      })
    })

    /*
     * @tc.number: Acts_QueryFormInfoByPush_Off_0800
     * @tc.name: Cancels listening to the event of notifyVisible or notifyInvisible type change.
     * @tc.desc: Call the off interface with the type of notifyInvisible when the hostBundleName doesn't exist.
     */
    it('Acts_QueryFormInfoByPush_Off_0800', 0, async function (done) {
      var callbackFormId;
      var callbackCount = 0;
      let callback = function (data) {
        callbackFormId = data[0].formId;
        callbackCount++;
        console.log(`====>Acts_QueryFormInfoByPush_Off_0800 callback data: ${JSON.stringify(data)}`);
      }
      try {
        formHost.on('notifyInvisible', callback);
      } catch (error) {
        expect().assertFail();
      }

      await commonEvent.createSubscriber(ACTS_FormEvent).then((data) => {
        console.info('====>Acts_QueryFormInfoByPush_Off_0800 Create Subscribe');
        var subscriber = data;
        var flag = false;
        commonEvent.subscribe(subscriber, subscribeCallBack);
        globalThis.abilityContext.startAbility(FIRST_APP_FIRST_ABILITY_INVISIBLE_WANT, (err) => {
          expect(err.code).assertEqual(0);
        });

        function subscribeCallBack(err, data) {
          console.info('====>Acts_QueryFormInfoByPush_Off_0800 subscribeCallBack data:' + JSON.stringify(data));
          flag = true;
          if (data.event == 'ACTS_FirstAppFirstAbilityFirst') {
            try {
              expect(callbackFormId).assertEqual(data.parameters.formId);
            } catch {}
            try {
              formHost.off('notifyInvisible', callback);
            } catch (error) {
              expect().assertFail();
            }
            commonEvent.publish("ACTS_FirstAppFirstAbilityWait", {}, ()=>{});
          }
          if (data.event == 'ACTS_FirstAppFirstAbilitySecond') {
            try {
              expect(callbackCount).assertEqual(1);
            } catch {}
            setTimeout(() => {
              commonEvent.unsubscribe(subscriber, unSubscribeCallback);
            }, WAIT_FUNCTION_DONE_TIME);
          }
        }

        function unSubscribeCallback() {
          done();
        }
        setTimeout(() => {
          if (flag == false) {
            expect().assertFail();
            commonEvent.unsubscribe(subscriber, unSubscribeCallback);
          }
        }, CASE_TIME_OUT);
      })
    })

    /*
     * @tc.number: Acts_QueryFormInfoByPush_Off_0900
     * @tc.name: Cancels listening to the event of notifyVisible or notifyInvisible type change.
     * @tc.desc: Call the off only when the parameter is notifyInvisible.
     */
    it('Acts_QueryFormInfoByPush_Off_0900', 0, async function (done) {
      var callbackFormId;
      var callbackCount = 0;
      let callback = function (data) {
        callbackFormId = data[0].formId;
        callbackCount++;
        console.log(`====>Acts_QueryFormInfoByPush_Off_0900 callback data: ${JSON.stringify(data)}`);
      }
      try {
        formHost.on('notifyInvisible', callback);
      } catch (error) {
        expect().assertFail();
      }

      await commonEvent.createSubscriber(ACTS_FormEvent).then((data) => {
        console.info('====>Acts_QueryFormInfoByPush_Off_0900 Create Subscribe');
        var subscriber = data;
        var flag = false;
        commonEvent.subscribe(subscriber, subscribeCallBack);
        globalThis.abilityContext.startAbility(FIRST_APP_FIRST_ABILITY_INVISIBLE_WANT, (err) => {
          expect(err.code).assertEqual(0);
        });

        function subscribeCallBack(err, data) {
          console.info('====>Acts_QueryFormInfoByPush_Off_0900 subscribeCallBack data:' + JSON.stringify(data));
          flag = true;
          if (data.event == 'ACTS_FirstAppFirstAbilityFirst') {
            try {
              expect(callbackFormId).assertEqual(data.parameters.formId);
            } catch {}
            try {
              formHost.off('notifyInvisible');
            } catch (error) {
              expect().assertFail();
            }
            commonEvent.publish("ACTS_FirstAppFirstAbilityWait", {}, ()=>{});
          }
          if (data.event == 'ACTS_FirstAppFirstAbilitySecond') {
            try {
              expect(callbackCount).assertEqual(1);
            } catch {}
            setTimeout(() => {
              commonEvent.unsubscribe(subscriber, unSubscribeCallback);
            }, WAIT_FUNCTION_DONE_TIME);
          }
        }

        function unSubscribeCallback() {
          done();
        }
        setTimeout(() => {
          if (flag == false) {
            expect().assertFail();
            commonEvent.unsubscribe(subscriber, unSubscribeCallback);
          }
        }, CASE_TIME_OUT);
      })
    })

    /*
     * @tc.number: Acts_QueryFormInfoByPush_Off_1100
     * @tc.name: Cancels listening to the event of notifyVisible or notifyInvisible type change.
     * @tc.desc: Call the off with the type is null.
     */
    it('Acts_QueryFormInfoByPush_Off_1100', 0, async function (done) {
      var callbackFormId;
      let callback = function (data) {
        callbackFormId = data[0].formId;
        console.log(`====>Acts_QueryFormInfoByPush_Off_1100 callback data: ${JSON.stringify(data)}`);
      }
      try {
        formHost.on('notifyVisible', callback, 'com.example.queryforminfobypushtest');
      } catch (error) {
        expect().assertFail();
      }

      await commonEvent.createSubscriber(ACTS_FormEvent).then((data) => {
        console.info('====>Acts_QueryFormInfoByPush_Off_1100 Create Subscribe');
        var subscriber = data;
        var flag = false;
        commonEvent.subscribe(subscriber, subscribeCallBack);
        globalThis.abilityContext.startAbility(FIRST_APP_FIRST_ABILITY_VISIBLE_WANT, (err) => {
          expect(err.code).assertEqual(0);
        });

        function subscribeCallBack(err, data) {
          console.info('====>Acts_QueryFormInfoByPush_Off_1100 subscribeCallBack data:' + JSON.stringify(data));
          flag = true;
          if (data.event == 'ACTS_FirstAppFirstAbilityFirst') {
            try {
              expect(callbackFormId).assertEqual(data.parameters.formId);
            } catch {}
            try {
              formHost.off(null, callback, 'com.example.queryforminfobypushtest');
            } catch (error) {
              expect(error.code).assertEqual(401);
            }
            try {
              formHost.off('notifyVisible', callback, 'com.example.queryforminfobypushtest');
            } catch (error) {
              expect().assertFail();
            }
            setTimeout(() => {
              commonEvent.unsubscribe(subscriber, unSubscribeCallback);
            }, WAIT_FUNCTION_DONE_TIME);
          }
        }

        function unSubscribeCallback() {
          done();
        }
        setTimeout(() => {
          if (flag == false) {
            expect().assertFail();
            commonEvent.unsubscribe(subscriber, unSubscribeCallback);
          }
        }, CASE_TIME_OUT);
      })
    })

    /*
     * @tc.number: Acts_QueryFormInfoByPush_Off_1200
     * @tc.name: Cancels listening to the event of notifyVisible or notifyInvisible type change.
     * @tc.desc: Call the off with the type is undefined.
     */
    it('Acts_QueryFormInfoByPush_Off_1200', 0, async function (done) {
      var callbackFormId;
      let callback = function (data) {
        callbackFormId = data[0].formId;
        console.log(`====>Acts_QueryFormInfoByPush_Off_1200 callback data: ${JSON.stringify(data)}`);
      }
      try {
        formHost.on('notifyVisible', callback, 'com.example.queryforminfobypushtest');
      } catch (error) {
        expect().assertFail();
      }

      await commonEvent.createSubscriber(ACTS_FormEvent).then((data) => {
        console.info('====>Acts_QueryFormInfoByPush_Off_1200 Create Subscribe');
        var subscriber = data;
        var flag = false;
        commonEvent.subscribe(subscriber, subscribeCallBack);
        globalThis.abilityContext.startAbility(FIRST_APP_FIRST_ABILITY_VISIBLE_WANT, (err) => {
          expect(err.code).assertEqual(0);
        });

        function subscribeCallBack(err, data) {
          console.info('====>Acts_QueryFormInfoByPush_Off_1200 subscribeCallBack data:' + JSON.stringify(data));
          flag = true;
          if (data.event == 'ACTS_FirstAppFirstAbilityFirst') {
            try {
              expect(callbackFormId).assertEqual(data.parameters.formId);
            } catch {}
            try {
              formHost.off(undefined, callback, 'com.example.queryforminfobypushtest');
            } catch (error) {
              expect(error.code).assertEqual(401);
            }
            try {
              formHost.off('notifyVisible', callback, 'com.example.queryforminfobypushtest');
            } catch (error) {
              expect().assertFail();
            }
            setTimeout(() => {
              commonEvent.unsubscribe(subscriber, unSubscribeCallback);
            }, WAIT_FUNCTION_DONE_TIME);
          }
        }

        function unSubscribeCallback() {
          done();
        }
        setTimeout(() => {
          if (flag == false) {
            expect().assertFail();
            commonEvent.unsubscribe(subscriber, unSubscribeCallback);
          }
        }, CASE_TIME_OUT);
      })
    })

    /*
     * @tc.number: Acts_QueryFormInfoByPush_Off_1500
     * @tc.name: Cancels listening to the event of notifyVisible or notifyInvisible type change.
     * @tc.desc: Call the off with the type of notifyVisible when the callback is null.
     */
    it('Acts_QueryFormInfoByPush_Off_1500', 0, async function (done) {
      var callbackFormId;
      var callbackCount = 0;
      let callback = function (data) {
        callbackFormId = data[0].formId;
        callbackCount++;
        console.log(`====>Acts_QueryFormInfoByPush_Off_1500 callback data: ${JSON.stringify(data)}`);
      }
      try {
        formHost.on('notifyVisible', callback, 'com.example.queryforminfobypushtest');
      } catch (error) {
        expect().assertFail();
      }

      await commonEvent.createSubscriber(ACTS_FormEvent).then((data) => {
        console.info('====>Acts_QueryFormInfoByPush_Off_1500 Create Subscribe');
        var subscriber = data;
        var flag = false;
        commonEvent.subscribe(subscriber, subscribeCallBack);
        globalThis.abilityContext.startAbility(FIRST_APP_FIRST_ABILITY_VISIBLE_WANT, (err) => {
          expect(err.code).assertEqual(0);
        });

        function subscribeCallBack(err, data) {
          console.info('====>Acts_QueryFormInfoByPush_Off_1500 subscribeCallBack data:' + JSON.stringify(data));
          flag = true;
          if (data.event == 'ACTS_FirstAppFirstAbilityFirst') {
            try {
              expect(callbackFormId).assertEqual(data.parameters.formId);
            } catch {}
            try {
              formHost.off('notifyVisible', null, 'com.example.queryforminfobypushtest');
            } catch (error) {
              expect().assertFail();
            }
            commonEvent.publish("ACTS_FirstAppFirstAbilityWait", {}, ()=>{});
          }
          if (data.event == 'ACTS_FirstAppFirstAbilitySecond') {
            try {
              expect(callbackCount).assertEqual(1);
            } catch {}
            setTimeout(() => {
              commonEvent.unsubscribe(subscriber, unSubscribeCallback);
            }, WAIT_FUNCTION_DONE_TIME);
          }
        }

        function unSubscribeCallback() {
          done();
        }
        setTimeout(() => {
          if (flag == false) {
            expect().assertFail();
            commonEvent.unsubscribe(subscriber, unSubscribeCallback);
          }
        }, CASE_TIME_OUT);
      })
    })

    /*
     * @tc.number: Acts_QueryFormInfoByPush_Off_1600
     * @tc.name: Cancels listening to the event of notifyVisible or notifyInvisible type change.
     * @tc.desc: Call the off with the type of notifyVisible when the callback is undefined, hostBundleName is effective.
     */
    it('Acts_QueryFormInfoByPush_Off_1600', 0, async function (done) {
      var callbackFormId;
      var callbackCount = 0;
      let callback = function (data) {
        callbackFormId = data[0].formId;
        callbackCount++
        console.log(`====>Acts_QueryFormInfoByPush_Off_1600 callback data: ${JSON.stringify(data)}`);
      }
      try {
        formHost.on('notifyVisible', callback, 'com.example.queryforminfobypushtest');
      } catch (error) {
        expect().assertFail();
      }

      await commonEvent.createSubscriber(ACTS_FormEvent).then((data) => {
        console.info('====>Acts_QueryFormInfoByPush_Off_1600 Create Subscribe');
        var subscriber = data;
        var flag = false;
        commonEvent.subscribe(subscriber, subscribeCallBack);
        globalThis.abilityContext.startAbility(FIRST_APP_FIRST_ABILITY_VISIBLE_WANT, (err) => {
          expect(err.code).assertEqual(0);
        });

        function subscribeCallBack(err, data) {
          console.info('====>Acts_QueryFormInfoByPush_Off_1600 subscribeCallBack data:' + JSON.stringify(data));
          flag = true;
          if (data.event == 'ACTS_FirstAppFirstAbilityFirst') {
            try {
              expect(callbackFormId).assertEqual(data.parameters.formId);
            } catch {}
            try {
              formHost.off('notifyVisible', undefined, 'com.example.queryforminfobypushtest');
            } catch (error) {
              expect().assertFail();
            }
            commonEvent.publish("ACTS_FirstAppFirstAbilityWait", {}, ()=>{});
          }
          if (data.event == 'ACTS_FirstAppFirstAbilitySecond') {
            try {
              expect(callbackCount).assertEqual(1);
            } catch {}
            setTimeout(() => {
              commonEvent.unsubscribe(subscriber, unSubscribeCallback);
            }, WAIT_FUNCTION_DONE_TIME);
          }
        }

        function unSubscribeCallback() {
          done();
        }
        setTimeout(() => {
          if (flag == false) {
            expect().assertFail();
            commonEvent.unsubscribe(subscriber, unSubscribeCallback);
          }
        }, CASE_TIME_OUT);
      })
    })

    /*
     * @tc.number: Acts_QueryFormInfoByPush_Off_1700
     * @tc.name: Cancels listening to the event of notifyVisible or notifyInvisible type change.
     * @tc.desc: Call the off with the type of notifyVisible when the hostBundleName is empty string.
     */
    it('Acts_QueryFormInfoByPush_Off_1700', 0, async function (done) {
      var callbackFormId;
      let callback = function (data) {
        callbackFormId = data[0].formId;
        console.log(`====>Acts_QueryFormInfoByPush_Off_1700 callback data: ${JSON.stringify(data)}`);
      }

      try {
        formHost.on('notifyVisible', callback, 'com.example.queryforminfobypushtest');
      } catch (error) {
        expect().assertFail();
      }

      await commonEvent.createSubscriber(ACTS_FormEvent).then((data) => {
        console.info('====>Acts_QueryFormInfoByPush_Off_1700 Create Subscribe');
        var subscriber = data;
        var flag = false;
        commonEvent.subscribe(subscriber, subscribeCallBack);
        globalThis.abilityContext.startAbility(FIRST_APP_FIRST_ABILITY_VISIBLE_WANT, (err) => {
          expect(err.code).assertEqual(0);
        });

        function subscribeCallBack(err, data) {
          console.info('====>Acts_QueryFormInfoByPush_Off_1700 subscribeCallBack data:' + JSON.stringify(data));
          flag = true;
          if (data.event == 'ACTS_FirstAppFirstAbilityFirst') {
            try {
              expect(callbackFormId).assertEqual(data.parameters.formId);
            } catch {}
            try {
              formHost.off('notifyVisible', callback, '');
            } catch (error) {
              console.info('====>Acts_QueryFormInfoByPush_Off_1700 subscribeCallBack data:' + JSON.stringify(error.code));
              expect(error.code).assertEqual(401);
            }
            try {
              formHost.off('notifyVisible', callback, 'com.example.queryforminfobypushtest');
            } catch (error) {
              expect().assertFail();
            }
            setTimeout(() => {
              commonEvent.unsubscribe(subscriber, unSubscribeCallback);
            }, WAIT_FUNCTION_DONE_TIME);
          }
        }

        function unSubscribeCallback() {
          done();
        }
        setTimeout(() => {
          if (flag == false) {
            expect().assertFail();
            commonEvent.unsubscribe(subscriber, unSubscribeCallback);
          }
        }, CASE_TIME_OUT);
      })
    })

    /*
     * @tc.number: Acts_QueryFormInfoByPush_Off_1800
     * @tc.name: Cancels listening to the event of notifyVisible or notifyInvisible type change.
     * @tc.desc: Call the off with the type of notifyVisible when the hostBundleName is 'abcd'.
     */
    it('Acts_QueryFormInfoByPush_Off_1800', 0, async function (done) {
      var callbackFormId;
      var callbackCount = 0;
      let callback = function (data) {
        callbackFormId = data[0].formId;
        callbackCount++;
        console.log(`====>Acts_QueryFormInfoByPush_Off_1800 callback data: ${JSON.stringify(data)}`);
      }
      try {
        formHost.on('notifyVisible', callback, 'com.example.queryforminfobypushtest');
      } catch (error) {
        expect().assertFail();
      }

      await commonEvent.createSubscriber(ACTS_FormEvent).then((data) => {
        console.info('====>Acts_QueryFormInfoByPush_Off_1800 Create Subscribe');
        var subscriber = data;
        var flag = false;
        commonEvent.subscribe(subscriber, subscribeCallBack);
        globalThis.abilityContext.startAbility(FIRST_APP_THIRD_ABILITY_VISIBLE_WANT, (err) => {
          expect(err.code).assertEqual(0);
        });

        function subscribeCallBack(err, data) {
          console.info('====>Acts_QueryFormInfoByPush_Off_1800 subscribeCallBack data:' + JSON.stringify(data));
          flag = true;
          if (data.event == 'ACTS_FirstAppThirdAbilityFirst') {
            try {
              expect(callbackCount).assertEqual(0);
            } catch {}
            try {
              formHost.off('notifyVisible', callback, 'abcd');
            } catch (error) {
              expect().assertFail();
            }
            commonEvent.publish("ACTS_FirstAppThirdAbilityWait", {}, ()=>{});
          }
          if (data.event == 'ACTS_FirstAppThirdAbilitySecond') {
            try {
              expect(callbackCount).assertEqual(1);
            } catch {}
            try {
              formHost.off('notifyVisible', callback, 'com.example.queryforminfobypushtest');
            } catch (error) {
              expect().assertFail();
            }
            setTimeout(() => {
              commonEvent.unsubscribe(subscriber, unSubscribeCallback);
            }, WAIT_FUNCTION_DONE_TIME);
          }
        }

        function unSubscribeCallback() {
          done();
        }
        setTimeout(() => {
          if (flag == false) {
            expect().assertFail();
            commonEvent.unsubscribe(subscriber, unSubscribeCallback);
          }
        }, CASE_TIME_OUT);
      })
    })

    /*
     * @tc.number: Acts_QueryFormInfoByPush_Off_1900
     * @tc.name: Cancels listening to the event of notifyVisible or notifyInvisible type change.
     * @tc.desc: Call the off with the type of notifyVisible when the hostBundleName is null.
     */
    it('Acts_QueryFormInfoByPush_Off_1900', 0, async function (done) {
      var callbackFormId;
      var callbackCount = 0;
      let callback = function (data) {
        callbackFormId = data[0].formId;
        callbackCount++;
        console.log(`====>Acts_QueryFormInfoByPush_Off_1900 callback data: ${JSON.stringify(data)}`);
      }
      try {
        formHost.on('notifyVisible', callback, 'com.example.queryforminfobypushtest');
      } catch (error) {
        expect().assertFail();
      }

      await commonEvent.createSubscriber(ACTS_FormEvent).then((data) => {
        console.info('====>Acts_QueryFormInfoByPush_Off_1900 Create Subscribe');
        var subscriber = data;
        var flag = false;
        commonEvent.subscribe(subscriber, subscribeCallBack);
        globalThis.abilityContext.startAbility(FIRST_APP_THIRD_ABILITY_VISIBLE_WANT, (err) => {
          expect(err.code).assertEqual(0);
        });

        function subscribeCallBack(err, data) {
          console.info('====>Acts_QueryFormInfoByPush_Off_1900 subscribeCallBack data:' + JSON.stringify(data));
          flag = true;
          if (data.event == 'ACTS_FirstAppThirdAbilityFirst') {
            try {
              expect(callbackCount).assertEqual(0);
            } catch {}
            try {
              formHost.off('notifyVisible', callback, null);
            } catch (error) {
              expect().assertFail();
            }
            commonEvent.publish("ACTS_FirstAppThirdAbilityWait", {}, ()=>{});
          }
          if (data.event == 'ACTS_FirstAppThirdAbilitySecond') {
            try {
              expect(callbackCount).assertEqual(1);
            } catch {}
            try {
              formHost.off('notifyVisible', callback, 'com.example.queryforminfobypushtest');
            } catch (error) {
              expect().assertFail();
            }
            setTimeout(() => {
              commonEvent.unsubscribe(subscriber, unSubscribeCallback);
            }, WAIT_FUNCTION_DONE_TIME);
          }
        }

        function unSubscribeCallback() {
          done();
        }
        setTimeout(() => {
          if (flag == false) {
            expect().assertFail();
            commonEvent.unsubscribe(subscriber, unSubscribeCallback);
          }
        }, CASE_TIME_OUT);
      })
    })

    /*
     * @tc.number: Acts_QueryFormInfoByPush_Off_2000
     * @tc.name: Cancels listening to the event of notifyVisible or notifyInvisible type change.
     * @tc.desc: Call the off with the type of notifyVisible when the hostBundleName is undefined.
     */
    it('Acts_QueryFormInfoByPush_Off_2000', 0, async function (done) {
      var callbackFormId;
      var callbackCount = 0;
      let callback = function (data) {
        callbackFormId = data[0].formId;
        callbackCount++;
        console.log(`====>Acts_QueryFormInfoByPush_Off_2000 callback data: ${JSON.stringify(data)}`);
      }
      try {
        formHost.on('notifyVisible', callback, 'com.example.queryforminfobypushtest');
      } catch (error) {
        expect().assertFail();
      }

      await commonEvent.createSubscriber(ACTS_FormEvent).then((data) => {
        console.info('====>Acts_QueryFormInfoByPush_Off_2000 Create Subscribe');
        var subscriber = data;
        var flag = false;
        commonEvent.subscribe(subscriber, subscribeCallBack);
        globalThis.abilityContext.startAbility(FIRST_APP_THIRD_ABILITY_VISIBLE_WANT, (err) => {
          expect(err.code).assertEqual(0);
        });

        function subscribeCallBack(err, data) {
          console.info('====>Acts_QueryFormInfoByPush_Off_2000 subscribeCallBack data:' + JSON.stringify(data));
          flag = true;
          if (data.event == 'ACTS_FirstAppThirdAbilityFirst') {
            try {
              expect(callbackCount).assertEqual(0);
            } catch {}
            try {
              formHost.off('notifyVisible', callback, undefined);
            } catch (error) {
              expect().assertFail();
            }
            commonEvent.publish("ACTS_FirstAppThirdAbilityWait", {}, ()=>{});
          }
          if (data.event == 'ACTS_FirstAppThirdAbilitySecond') {
            try {
              expect(callbackCount).assertEqual(1);
            } catch {}
            try {
              formHost.off('notifyVisible', callback, 'com.example.queryforminfobypushtest');
            } catch (error) {
              expect().assertFail();
            }
            setTimeout(() => {
              commonEvent.unsubscribe(subscriber, unSubscribeCallback);
            }, WAIT_FUNCTION_DONE_TIME);
          }
        }

        function unSubscribeCallback() {
          done();
        }
        setTimeout(() => {
          if (flag == false) {
            expect().assertFail();
            commonEvent.unsubscribe(subscriber, unSubscribeCallback);
          }
        }, CASE_TIME_OUT);
      })
    })

    /*
     * @tc.number: Acts_QueryFormInfoByPush_Off_2500
     * @tc.name: Cancels listening to the event of notifyVisible or notifyInvisible type change.
     * @tc.desc: Call the off with the type of notifyInvisible when the callback is null.
     */
    it('Acts_QueryFormInfoByPush_Off_2500', 0, async function (done) {
      var callbackFormId;
      var callbackCount = 0;
      let callback = function (data) {
        callbackFormId = data[0].formId;
        callbackCount++;
        console.log(`====>Acts_QueryFormInfoByPush_Off_2500 callback data: ${JSON.stringify(data)}`);
      }
      try {
        formHost.on('notifyInvisible', callback, 'com.example.queryforminfobypushtest');
      } catch (error) {
        expect().assertFail();
      }

      await commonEvent.createSubscriber(ACTS_FormEvent).then((data) => {
        console.info('====>Acts_QueryFormInfoByPush_Off_2500 Create Subscribe');
        var subscriber = data;
        var flag = false;
        commonEvent.subscribe(subscriber, subscribeCallBack);
        globalThis.abilityContext.startAbility(FIRST_APP_FIRST_ABILITY_INVISIBLE_WANT, (err) => {
          expect(err.code).assertEqual(0);
        });

        function subscribeCallBack(err, data) {
          console.info('====>Acts_QueryFormInfoByPush_Off_2500 subscribeCallBack data:' + JSON.stringify(data));
          flag = true;
          if (data.event == 'ACTS_FirstAppFirstAbilityFirst') {
            try {
              expect(callbackFormId).assertEqual(data.parameters.formId);
            } catch {}
            try {
              formHost.off('notifyInvisible', null, 'com.example.queryforminfobypushtest');
            } catch (error) {
              expect().assertFail();
            }
            commonEvent.publish("ACTS_FirstAppFirstAbilityWait", {}, ()=>{});
          }
          if (data.event == 'ACTS_FirstAppFirstAbilitySecond') {
            try {
              expect(callbackCount).assertEqual(1);
            } catch {}
            setTimeout(() => {
              commonEvent.unsubscribe(subscriber, unSubscribeCallback);
            }, WAIT_FUNCTION_DONE_TIME);
          }
        }

        function unSubscribeCallback() {
          done();
        }
        setTimeout(() => {
          if (flag == false) {
            expect().assertFail();
            commonEvent.unsubscribe(subscriber, unSubscribeCallback);
          }
        }, CASE_TIME_OUT);
      })
    })

    /*
     * @tc.number: Acts_QueryFormInfoByPush_Off_2600
     * @tc.name: Cancels listening to the event of notifyVisible or notifyInvisible type change.
     * @tc.desc: Call the off with the type of notifyInvisible when the callback is undefined, hostBundleName is
     *           effective.
     */
    it('Acts_QueryFormInfoByPush_Off_2600', 0, async function (done) {
      var callbackFormId;
      var callbackCount = 0;
      let callback = function (data) {
        callbackFormId = data[0].formId;
        callbackCount++;
        console.log(`====>Acts_QueryFormInfoByPush_Off_2600 callback data: ${JSON.stringify(data)}`);
      }
      try {
        formHost.on('notifyInvisible', callback, 'com.example.queryforminfobypushtest');
      } catch (error) {
        expect().assertFail();
      }

      await commonEvent.createSubscriber(ACTS_FormEvent).then((data) => {
        console.info('====>Acts_QueryFormInfoByPush_Off_2600 Create Subscribe');
        var subscriber = data;
        var flag = false;
        commonEvent.subscribe(subscriber, subscribeCallBack);
        globalThis.abilityContext.startAbility(FIRST_APP_FIRST_ABILITY_INVISIBLE_WANT, (err) => {
          expect(err.code).assertEqual(0);
        });

        function subscribeCallBack(err, data) {
          console.info('====>Acts_QueryFormInfoByPush_Off_2600 subscribeCallBack data:' + JSON.stringify(data));
          flag = true;
          if (data.event == 'ACTS_FirstAppFirstAbilityFirst') {
            try {
              expect(callbackFormId).assertEqual(data.parameters.formId);
            } catch {}
            try {
              formHost.off('notifyInvisible', undefined, 'com.example.queryforminfobypushtest');
            } catch (error) {
              expect().assertFail();
            }
            commonEvent.publish("ACTS_FirstAppFirstAbilityWait", {}, ()=>{});
          }
          if (data.event == 'ACTS_FirstAppFirstAbilitySecond') {
            try {
              expect(callbackCount).assertEqual(1);
            } catch {}
            setTimeout(() => {
              commonEvent.unsubscribe(subscriber, unSubscribeCallback);
            }, WAIT_FUNCTION_DONE_TIME);
          }
        }

        function unSubscribeCallback() {
          done();
        }
        setTimeout(() => {
          if (flag == false) {
            expect().assertFail();
            commonEvent.unsubscribe(subscriber, unSubscribeCallback);
          }
        }, CASE_TIME_OUT);
      })
    })

    /*
     * @tc.number: Acts_QueryFormInfoByPush_Off_2700
     * @tc.name: Cancels listening to the event of notifyVisible or notifyInvisible type change.
     * @tc.desc: Call the off with the type of notifyInvisible when the hostBundleName is empty string.
     */
    it('Acts_QueryFormInfoByPush_Off_2700', 0, async function (done) {
      var callbackFormId;
      let callback = function (data) {
        callbackFormId = data[0].formId;
        console.log(`====>Acts_QueryFormInfoByPush_Off_2700 callback data: ${JSON.stringify(data)}`);
      }
      try {
        formHost.on('notifyInvisible', callback, 'com.example.queryforminfobypushtest');
      } catch (error) {
        expect().assertFail();
      }

      await commonEvent.createSubscriber(ACTS_FormEvent).then((data) => {
        console.info('====>Acts_QueryFormInfoByPush_Off_2700 Create Subscribe');
        var subscriber = data;
        var flag = false;
        commonEvent.subscribe(subscriber, subscribeCallBack);
        globalThis.abilityContext.startAbility(FIRST_APP_FIRST_ABILITY_INVISIBLE_WANT, (err) => {
          expect(err.code).assertEqual(0);
        });

        function subscribeCallBack(err, data) {
          console.info('====>Acts_QueryFormInfoByPush_Off_2700 subscribeCallBack data:' + JSON.stringify(data));
          flag = true;
          if (data.event == 'ACTS_FirstAppFirstAbilityFirst') {
            try {
              expect(callbackFormId).assertEqual(data.parameters.formId);
            } catch {}
            try {
              formHost.off('notifyInvisible', callback, '');
            } catch (error) {
              console.info('====>Acts_QueryFormInfoByPush_Off_1700 subscribeCallBack data:' + JSON.stringify(error.code));
              expect(error.code).assertEqual(401);
            }
            try {
              formHost.off('notifyInvisible', callback, 'com.example.queryforminfobypushtest');
            } catch (error) {
              expect().assertFail();
            }
            setTimeout(() => {
              commonEvent.unsubscribe(subscriber, unSubscribeCallback);
            }, WAIT_FUNCTION_DONE_TIME);
          }
        }

        function unSubscribeCallback() {
          done();
        }
        setTimeout(() => {
          if (flag == false) {
            expect().assertFail();
            commonEvent.unsubscribe(subscriber, unSubscribeCallback);
          }
        }, CASE_TIME_OUT);
      })
    })

    /*
     * @tc.number: Acts_QueryFormInfoByPush_Off_2800
     * @tc.name: Cancels listening to the event of notifyVisible or notifyInvisible type change.
     * @tc.desc: Call the off with the type of notifyInvisible when the hostBundleName is 'abcd'.
     */
    it('Acts_QueryFormInfoByPush_Off_2800', 0, async function (done) {
      var callbackFormId;
      var callbackCount = 0;
      let callback = function (data) {
        callbackFormId = data[0].formId;
        callbackCount++;
        console.log(`====>Acts_QueryFormInfoByPush_Off_2800 callback data: ${JSON.stringify(data)}`);
      }
      try {
        formHost.on('notifyInvisible', callback, 'com.example.queryforminfobypushtest');
      } catch (error) {
        expect().assertFail();
      }

      await commonEvent.createSubscriber(ACTS_FormEvent).then((data) => {
        console.info('====>Acts_QueryFormInfoByPush_Off_2800 Create Subscribe');
        var subscriber = data;
        var flag = false;
        commonEvent.subscribe(subscriber, subscribeCallBack);
        globalThis.abilityContext.startAbility(FIRST_APP_THIRD_ABILITY_INVISIBLE_WANT, (err) => {
          expect(err.code).assertEqual(0);
        });

        function subscribeCallBack(err, data) {
          console.info('====>Acts_QueryFormInfoByPush_Off_2800 subscribeCallBack data:' + JSON.stringify(data));
          flag = true;
          if (data.event == 'ACTS_FirstAppThirdAbilityFirst') {
            try {
              expect(callbackCount).assertEqual(0);
            } catch {}
            try {
              formHost.off('notifyInvisible', callback, 'abcd');
            } catch (error) {
              expect().assertFail();
            }
            commonEvent.publish("ACTS_FirstAppThirdAbilityWait", {}, ()=>{});
          }
          if (data.event == 'ACTS_FirstAppThirdAbilitySecond') {
            try {
              expect(callbackCount).assertEqual(1);
            } catch {}
            try {
              formHost.off('notifyInvisible', callback, 'com.example.queryforminfobypushtest');
            } catch (error) {
              expect().assertFail();
            }
            setTimeout(() => {
              commonEvent.unsubscribe(subscriber, unSubscribeCallback);
            }, WAIT_FUNCTION_DONE_TIME);
          }
        }

        function unSubscribeCallback() {
          done();
        }
        setTimeout(() => {
          if (flag == false) {
            expect().assertFail();
            commonEvent.unsubscribe(subscriber, unSubscribeCallback);
          }
        }, CASE_TIME_OUT);
      })
    })

    /*
     * @tc.number: Acts_QueryFormInfoByPush_Off_2900
     * @tc.name: Cancels listening to the event of notifyVisible or notifyInvisible type change.
     * @tc.desc: Call the off with the type of notifyInvisible when the hostBundleName is null.
     */
    it('Acts_QueryFormInfoByPush_Off_2900', 0, async function (done) {
      var callbackFormId;
      var callbackCount = 0;
      let callback = function (data) {
        callbackFormId = data[0].formId;
        callbackCount++;
        console.log(`====>Acts_QueryFormInfoByPush_Off_2900 callback data: ${JSON.stringify(data)}`);
      }
      try {
        formHost.on('notifyInvisible', callback, 'com.example.queryforminfobypushtest');
      } catch (error) {
        expect().assertFail();
      }

      await commonEvent.createSubscriber(ACTS_FormEvent).then((data) => {
        console.info('====>Acts_QueryFormInfoByPush_Off_2900 Create Subscribe');
        var subscriber = data;
        var flag = false;
        commonEvent.subscribe(subscriber, subscribeCallBack);
        globalThis.abilityContext.startAbility(FIRST_APP_THIRD_ABILITY_INVISIBLE_WANT, (err) => {
          expect(err.code).assertEqual(0);
        });

        function subscribeCallBack(err, data) {
          console.info('====>Acts_QueryFormInfoByPush_Off_2900 subscribeCallBack data:' + JSON.stringify(data));
          flag = true;
          if (data.event == 'ACTS_FirstAppThirdAbilityFirst') {
            try {
              expect(callbackCount).assertEqual(0);
            } catch {}
            try {
              formHost.off('notifyInvisible', callback, null);
            } catch (error) {
              expect().assertFail();
            }
            commonEvent.publish("ACTS_FirstAppThirdAbilityWait", {}, ()=>{});
          }
          if (data.event == 'ACTS_FirstAppThirdAbilitySecond') {
            try {
              expect(callbackCount).assertEqual(1);
            } catch {}
            try {
              formHost.off('notifyInvisible', callback, 'com.example.queryforminfobypushtest');
            } catch (error) {
              expect().assertFail();
            }
            setTimeout(() => {
              commonEvent.unsubscribe(subscriber, unSubscribeCallback);
            }, WAIT_FUNCTION_DONE_TIME);
          }
        }

        function unSubscribeCallback() {
          done();
        }
        setTimeout(() => {
          if (flag == false) {
            expect().assertFail();
            commonEvent.unsubscribe(subscriber, unSubscribeCallback);
          }
        }, CASE_TIME_OUT);
      })
    })

    /*
     * @tc.number: Acts_QueryFormInfoByPush_Off_3000
     * @tc.name: Cancels listening to the event of notifyVisible or notifyInvisible type change.
     * @tc.desc: Call the off with the type of notifyInvisible when the hostBundleName is undefined.
     */
    it('Acts_QueryFormInfoByPush_Off_3000', 0, async function (done) {
      var callbackFormId;
      var callbackCount = 0;
      let callback = function (data) {
        callbackFormId = data[0].formId;
        callbackCount++;
        console.log(`====>Acts_QueryFormInfoByPush_Off_3000 callback data: ${JSON.stringify(data)}`);
      }
      try {
        formHost.on('notifyInvisible', callback, 'com.example.queryforminfobypushtest');
      } catch (error) {
        expect().assertFail();
      }

      await commonEvent.createSubscriber(ACTS_FormEvent).then((data) => {
        console.info('====>Acts_QueryFormInfoByPush_Off_3000 Create Subscribe');
        var subscriber = data;
        var flag = false;
        commonEvent.subscribe(subscriber, subscribeCallBack);
        globalThis.abilityContext.startAbility(FIRST_APP_THIRD_ABILITY_INVISIBLE_WANT, (err) => {
          expect(err.code).assertEqual(0);
        });

        function subscribeCallBack(err, data) {
          console.info('====>Acts_QueryFormInfoByPush_Off_3000 subscribeCallBack data:' + JSON.stringify(data));
          flag = true;
          if (data.event == 'ACTS_FirstAppThirdAbilityFirst') {
            try {
              expect(callbackCount).assertEqual(0);
            } catch {}
            try {
              formHost.off('notifyInvisible', callback, undefined);
            } catch (error) {
              expect().assertFail();
            }
            commonEvent.publish("ACTS_FirstAppThirdAbilityWait", {}, ()=>{});
          }
          if (data.event == 'ACTS_FirstAppThirdAbilitySecond') {
            try {
              expect(callbackCount).assertEqual(1);
            } catch {}
            try {
              formHost.off('notifyInvisible', callback, 'com.example.queryforminfobypushtest');
            } catch (error) {
              expect().assertFail();
            }
            setTimeout(() => {
              commonEvent.unsubscribe(subscriber, unSubscribeCallback);
            }, WAIT_FUNCTION_DONE_TIME);
          }
        }

        function unSubscribeCallback() {
          done();
        }
        setTimeout(() => {
          if (flag == false) {
            expect().assertFail();
            commonEvent.unsubscribe(subscriber, unSubscribeCallback);
          }
        }, CASE_TIME_OUT);
      })
    })

    /*
     * @tc.number: Acts_QueryFormInfoByPush_0100
     * @tc.name: Listens and Cancels listening to the event of notifyVisible or notifyInvisible type change.
     * @tc.desc: Call the on with the type of notifyVisible to set monitoring for different applications,
     *           and then call the off with the type of notifyVisible to cancel monitoring for one of the applications.
     */
    it('Acts_QueryFormInfoByPush_0100', 0, async function (done) {
      var firstCallbackFormId;
      var firstCount = 0;
      let firstCallback = function (data) {
        firstCallbackFormId = data[0].formId;
        firstCount++;
        console.log(`====>Acts_QueryFormInfoByPush_0100 firstTestCallback data: ${JSON.stringify(data)}`);
      }
      var secondCallbackFormId;
      var secondCount = 0;
      let secondCallback = function (data) {
        secondCallbackFormId = data[0].formId;
        console.log(`====>Acts_QueryFormInfoByPush_0100 secondTestCallback data: ${JSON.stringify(data)}`);
        secondCount++;
      }
      try {
        formHost.on('notifyVisible', firstCallback, 'com.example.queryforminfobypushtest');
        sleep(50);
        formHost.on('notifyVisible', secondCallback, 'com.example.queryforminfobypushtestb');
      } catch (error) {
        expect().assertFail();
      }
      await commonEvent.createSubscriber(ACTS_FormEvent).then((data) => {
        var subscriber = data;
        var flag = false;
        commonEvent.subscribe(subscriber, subscribeCallBack);
        globalThis.abilityContext.startAbility(FIRST_APP_SECOND_ABILITY_VISIBLE_WANT, (err) => {
          expect(err.code).assertEqual(0);
        });
        setTimeout(() => {
          globalThis.abilityContext.startAbility(SECOND_APP_FIRST_ABILITY_VISIBLE_WANT, (err) => {
            expect(err.code).assertEqual(0);
          });
        }, 300);
        var firstFormIdDone = false;
        var secondFormIdDone = false;
        var firstResultDone = false;
        var secondResultDone = false;
        var firstFormId;
        var secondFormId;
        var firstDoneCount = 0;
        function subscribeCallBack(err, data) {
          console.info('====>Acts_QueryFormInfoByPush_0100 subscribeCallBack data:' + JSON.stringify(data));
          flag = true;
          if (data.event == 'ACTS_FirstAppSecondAbilityFirst') {
            firstFormId = data.parameters.formId;
            firstFormIdDone = true;
          }
          if (data.event == 'ACTS_SecondAppFirstAbilityFirst') {
            secondFormId = data.parameters.formId;
            secondFormIdDone = true;
          }
          if (firstFormIdDone && secondFormIdDone && (firstDoneCount == 0)) {
            firstDoneCount++;
            let commonEventData = {
              parameters: {
                "firstFormId": firstFormId,
                "secondFormId": secondFormId
              }
            };
            commonEvent.publish("ACTS_AllFormIdGet", commonEventData, () => {});
          }
          if (data.event == 'ACTS_FirstAppSecondAbilitySecond') {
            try {
              expect(firstCallbackFormId).assertEqual(firstFormId);
            } catch {}
          }
          if (data.event == 'ACTS_SecondAppFirstAbilitySecond') {
            try {
              expect(secondCallbackFormId).assertEqual(secondFormId);
            } catch {}
            try {
              formHost.off('notifyVisible', secondCallback, 'com.example.queryforminfobypushtestb');
            } catch (error) {
              console.log('====>Acts_QueryFormInfoByPush_0100 Form off catch err:' + JSON.stringify(error));
              expect().assertFail();
            }
            let commonEventData = {
              parameters: {
                "firstFormId": firstFormId,
                "secondFormId": secondFormId
              }
            };
            commonEvent.publish("ACTS_CallNotifyAfterOff", commonEventData, () => {});
          }
          if (data.event == 'ACTS_FirstAppSecondAbilityThird') {
            try {
              expect(firstCount).assertEqual(1);
            } catch {}
            firstResultDone = true;
          }
          if (data.event == 'ACTS_SecondAppFirstAbilityThird') {
            try {
              expect(secondCount).assertEqual(1);
            } catch {}
            secondResultDone = true;
          }
          if (firstResultDone && secondResultDone) {
            try {
              formHost.off('notifyVisible', firstCallback, 'com.example.queryforminfobypushtest');
            } catch (error) {
              expect().assertFail();
            }
            setTimeout(() => {
              commonEvent.unsubscribe(subscriber, unSubscribeCallback);
            }, WAIT_FUNCTION_DONE_TIME);
          }
        }

        function unSubscribeCallback() {
          done();
        }
        setTimeout(() => {
          if (flag == false) {
            expect().assertFail();
            commonEvent.unsubscribe(subscriber, unSubscribeCallback);
          }
        }, CASE_TIME_OUT);
      });
    })

    /*
     * @tc.number: Acts_QueryFormInfoByPush_0200
     * @tc.name: Listens and Cancels listening to the event of notifyVisible or notifyInvisible type change.
     * @tc.desc: Call the on with the type of notifyInvisible to set monitoring for different applications, and
     *           then call the off with the type of notifyInvisible to cancel monitoring for one of the applications.
     */
    it('Acts_QueryFormInfoByPush_0200', 0, async function (done) {
      var firstCallbackFormId;
      var firstCount = 0;
      let firstCallback = function (data) {
        firstCallbackFormId = data[0].formId;
        firstCount++;
        console.log(`====>Acts_QueryFormInfoByPush_0200 firstTestCallback data: ${JSON.stringify(data)}`);
      }
      var secondCallbackFormId;
      var secondCount = 0;
      let secondCallback = function (data) {
        secondCallbackFormId = data[0].formId;
        console.log(`====>Acts_QueryFormInfoByPush_0200 secondTestCallback data: ${JSON.stringify(data)}`);
        secondCount++;
      }
      try {
        formHost.on('notifyInvisible', firstCallback, 'com.example.queryforminfobypushtest');
        sleep(50);
        formHost.on('notifyInvisible', secondCallback, 'com.example.queryforminfobypushtestb');
      } catch (error) {
        console.log('====>Acts_QueryFormInfoByPush_0200 Form on catch err:' + JSON.stringify(error));
        expect().assertFail();
      }
      await commonEvent.createSubscriber(ACTS_FormEvent).then((data) => {
        console.info('====>Acts_QueryFormInfoByPush_0200 Create Subscribe');
        var subscriber = data;
        var flag = false;
        commonEvent.subscribe(subscriber, subscribeCallBack);
        globalThis.abilityContext.startAbility(FIRST_APP_SECOND_ABILITY_INVISIBLE_WANT, (err) => {
          expect(err.code).assertEqual(0);
        });
        setTimeout(() => {
          globalThis.abilityContext.startAbility(SECOND_APP_FIRST_ABILITY_INVISIBLE_WANT, (err) => {
            expect(err.code).assertEqual(0);
          });
        }, 300);
        var firstFormIdDone = false;
        var secondFormIdDone = false;
        var firstResultDone = false;
        var secondResultDone = false;
        var firstFormId;
        var secondFormId;
        var firstDoneCount = 0;
        function subscribeCallBack(err, data) {
          console.info('====>Acts_QueryFormInfoByPush_0200 subscribeCallBack data:' + JSON.stringify(data));
          if (data.event == 'ACTS_FirstAppSecondAbilityFirst') {
            firstFormId = data.parameters.formId;
            firstFormIdDone = true;
          }
          if (data.event == 'ACTS_SecondAppFirstAbilityFirst') {
            secondFormId = data.parameters.formId;
            secondFormIdDone = true;
          }
          if (firstFormIdDone && secondFormIdDone && (firstDoneCount == 0)) {
            firstDoneCount++;
            let commonEventData = {
              parameters: {
                "firstFormId": firstFormId,
                "secondFormId": secondFormId
              }
            };
            commonEvent.publish("ACTS_AllFormIdGet", commonEventData, () => {
            });
          }
          if (data.event == 'ACTS_FirstAppSecondAbilitySecond') {
            try {
              expect(firstCallbackFormId).assertEqual(firstFormId);
            } catch {}
            try {
              formHost.off('notifyInvisible', null, 'com.example.queryforminfobypushtest');
            } catch (error) {
              console.log('====>Acts_QueryFormInfoByPush_0200 Form off catch err:' + JSON.stringify(error));
              expect().assertFail();
            }
            let commonEventData = {
              parameters: {
                "firstFormId": firstFormId,
                "secondFormId": secondFormId
              }
            };
            commonEvent.publish("ACTS_CallNotifyAfterOff", commonEventData, () => {
            });
          }
          if (data.event == 'ACTS_SecondAppFirstAbilitySecond') {
            try {
              expect(secondCallbackFormId).assertEqual(secondFormId);
            } catch {}
          }
          if (data.event == 'ACTS_FirstAppSecondAbilityThird') {
            try {
              expect(firstCount).assertEqual(1);
            } catch {}
            firstResultDone = true;
          }
          if (data.event == 'ACTS_SecondAppFirstAbilityThird') {
            try {
              expect(secondCount).assertEqual(1);
            } catch {}
            secondResultDone = true;
          }
          if (firstResultDone && secondResultDone) {
            try {
              formHost.off('notifyInvisible', secondCallback, 'com.example.queryforminfobypushtestb');
            } catch (error) {
              expect().assertFail();
            }
            flag = true;
            setTimeout(() => {
              commonEvent.unsubscribe(subscriber, unSubscribeCallback);
            }, WAIT_FUNCTION_DONE_TIME);
          }
        }

        function unSubscribeCallback() {
          done();
        }
        setTimeout(() => {
          if (flag == false) {
            expect().assertFail();
            commonEvent.unsubscribe(subscriber, unSubscribeCallback);
          }
        }, CASE_TIME_OUT);
      })
    })

    /*
     * @tc.number: Acts_QueryFormInfoByPush_0300
     * @tc.name: Listens and Cancels listening to the event of notifyVisible or notifyInvisible type change.
     * @tc.desc: Call on function with type of notifyVisible and notifyInvisible respectively to set monitoring for
     *           different applications, and then call off function with type of notifyVisible to cancel monitoring for
     *           corresponding applications.
     */
    it('Acts_QueryFormInfoByPush_0300', 0, async function (done) {
      var firstCallbackFormId;
      var firstCount = 0;
      let firstCallback = function (data) {
        firstCallbackFormId = data[0].formId;
        firstCount++;
        console.log(`====>Acts_QueryFormInfoByPush_0300 firstTestCallback data: ${JSON.stringify(data)}`);
      }
      var secondCallbackFormId;
      var secondCount = 0;
      let secondCallback = function (data) {
        secondCallbackFormId = data[0].formId;
        console.log(`====>Acts_QueryFormInfoByPush_0300 secondTestCallback data: ${JSON.stringify(data)}`);
        secondCount++;
      }
      try {
        formHost.on('notifyVisible', firstCallback, 'com.example.queryforminfobypushtest');
        sleep(50);
        formHost.on('notifyInvisible', secondCallback);
      } catch (error) {
        console.log('====>Acts_QueryFormInfoByPush_0300 Form on catch err:' + JSON.stringify(error));
        expect().assertFail();
      }
      await commonEvent.createSubscriber(ACTS_FormEvent).then((data) => {
        console.info('====>Acts_QueryFormInfoByPush_0300 Create Subscribe');
        var subscriber = data;
        var flag = false;
        commonEvent.subscribe(subscriber, subscribeCallBack);
        globalThis.abilityContext.startAbility(FIRST_APP_SECOND_ABILITY_VISIBLE_WANT, (err) => {
          expect(err.code).assertEqual(0);
        });
        setTimeout(() => {
          globalThis.abilityContext.startAbility(SECOND_APP_FIRST_ABILITY_INVISIBLE_WANT, (err) => {
            expect(err.code).assertEqual(0);
          });
        }, 300);
        var firstFormIdDone = false;
        var secondFormIdDone = false;
        var firstResultDone = false;
        var secondResultDone = false;
        var firstFormId;
        var secondFormId;
        var firstDoneCount = 0;
        function subscribeCallBack(err, data) {
          console.info('====>Acts_QueryFormInfoByPush_0300 subscribeCallBack data:' + JSON.stringify(data));
          flag = true;
          if (data.event == 'ACTS_FirstAppSecondAbilityFirst') {
            firstFormId = data.parameters.formId;
            firstFormIdDone = true;
          }
          if (data.event == 'ACTS_SecondAppFirstAbilityFirst') {
            secondFormId = data.parameters.formId;
            secondFormIdDone = true;
          }
          if (firstFormIdDone && secondFormIdDone && (firstDoneCount == 0)) {
            firstDoneCount++;
            let commonEventData = {
              parameters: {
                "firstFormId": firstFormId,
                "secondFormId": secondFormId
              }
            };
            commonEvent.publish("ACTS_AllFormIdGet", commonEventData, () => {});
          }
          if (data.event == 'ACTS_FirstAppSecondAbilitySecond') {
            try {
              expect(firstCallbackFormId).assertEqual(firstFormId);
            } catch {}
          }
          if (data.event == 'ACTS_SecondAppFirstAbilitySecond') {
            try {
              expect(secondCallbackFormId).assertEqual(secondFormId);
            } catch {}
            try {
              formHost.off('notifyInvisible');
            } catch (error) {
              console.log('====>Acts_QueryFormInfoByPush_0300 Form off catch err:' + JSON.stringify(error));
              expect().assertFail();
            }
            let commonEventData = {
              parameters: {
                "firstFormId": firstFormId,
                "secondFormId": secondFormId
              }
            };
            commonEvent.publish("ACTS_CallNotifyAfterOff", commonEventData, () => {});
          }
          if (data.event == 'ACTS_FirstAppSecondAbilityThird') {
            try {
              expect(firstCount).assertEqual(1);
            } catch {}
            firstResultDone = true;
          }
          if (data.event == 'ACTS_SecondAppFirstAbilityThird') {
            try {
              expect(secondCount).assertEqual(1);
            } catch {}
            secondResultDone = true;
          }
          if (firstResultDone && secondResultDone) {
            try {
              formHost.off('notifyVisible', firstCallback, 'com.example.queryforminfobypushtest');
            } catch (error) {
              expect().assertFail();
            }
            setTimeout(() => {
              commonEvent.unsubscribe(subscriber, unSubscribeCallback);
            }, WAIT_FUNCTION_DONE_TIME);
          }
        }

        function unSubscribeCallback() {
          done();
        }
        setTimeout(() => {
          if (flag == false) {
            expect().assertFail();
            commonEvent.unsubscribe(subscriber, unSubscribeCallback);
          }
        }, CASE_TIME_OUT);
      })
    })

    /*
     * @tc.number: Acts_QueryFormInfoByPush_0400
     * @tc.name: Listens and Cancels listening to the event of notifyVisible or notifyInvisible type change.
     * @tc.desc: Call the on function of tpye type notifyVisible twice, and then the callback is different.
     */
    it('Acts_QueryFormInfoByPush_0400', 0, async function (done) {
      var firstCallbackFormId;
      let firstCallback = function (data) {
        firstCallbackFormId = data[0].formId;
        console.log(`====>Acts_QueryFormInfoByPush_0400 firstTestCallback data: ${JSON.stringify(data)}`);
      }
      var secondCount = 0;
      let secondCallback = function (data) {
        secondCount++;
      }
      try {
        formHost.on('notifyVisible', firstCallback, 'com.example.queryforminfobypushtest');
        sleep(50);
        formHost.on('notifyVisible', secondCallback, 'com.example.queryforminfobypushtest');
      } catch (error) {
        console.log('====>Acts_QueryFormInfoByPush_0400 Form on catch err:' + JSON.stringify(error));
        expect().assertFail();
      }
      await commonEvent.createSubscriber(ACTS_FormEvent).then((data) => {
        console.info('====>Acts_QueryFormInfoByPush_0400 Create Subscribe');
        var subscriber = data;
        var flag = false;
        commonEvent.subscribe(subscriber, subscribeCallBack);
        globalThis.abilityContext.startAbility(FIRST_APP_FIRST_ABILITY_VISIBLE_WANT, (err) => {
          expect(err.code).assertEqual(0);
        });

        function subscribeCallBack(err, data) {
          console.info('====>Acts_QueryFormInfoByPush_0400 subscribeCallBack data:' + JSON.stringify(data));
          if (data.event == 'ACTS_FirstAppFirstAbilityFirst') {
            try {
              expect(firstCallbackFormId).assertEqual(data.parameters.formId);
              expect(secondCount).assertEqual(0);
            } catch {}
            try {
              formHost.off('notifyVisible', firstCallback, 'com.example.queryforminfobypushtest');
            } catch (error) {
              expect().assertFail();
            }
            flag = true;
            setTimeout(() => {
              commonEvent.unsubscribe(subscriber, unSubscribeCallback);
            }, WAIT_FUNCTION_DONE_TIME);
          }
        }

        function unSubscribeCallback() {
          done();
        }
        setTimeout(() => {
          if (flag == false) {
            expect().assertFail();
            commonEvent.unsubscribe(subscriber, unSubscribeCallback);
          }
        }, CASE_TIME_OUT);
      })
    })

    /*
     * @tc.number: Acts_QueryFormInfoByPush_0500
     * @tc.name: Listens and Cancels listening to the event of notifyVisible or notifyInvisible type change.
     * @tc.desc: Call the on function of tpye type notifyVisible twice, and then the hostBundleName is different.
     */
    it('Acts_QueryFormInfoByPush_0500', 0, async function (done) {
      var firstCallbackFormId;
      var firstCount = 0;
      let firstCallback = function (data) {
        firstCallbackFormId = data[0].formId;
        firstCount++;
        console.log(`====>Acts_QueryFormInfoByPush_0500 firstTestCallback data: ${JSON.stringify(data)}`);
      }
      try {
        formHost.on('notifyVisible', firstCallback, 'com.example.queryforminfobypushtest');
        sleep(50);
        formHost.on('notifyVisible', firstCallback, 'com.example.queryforminfobypushtest');
      } catch (error) {
        console.log('====>Acts_QueryFormInfoByPush_0500 Form on catch err:' + JSON.stringify(error));
        expect().assertFail();
      }
      await commonEvent.createSubscriber(ACTS_FormEvent).then((data) => {
        console.info('====>Acts_QueryFormInfoByPush_0500 Create Subscribe');
        var subscriber = data;
        var flag = false;
        commonEvent.subscribe(subscriber, subscribeCallBack);
        globalThis.abilityContext.startAbility(FIRST_APP_FIRST_ABILITY_VISIBLE_WANT, (err) => {
          expect(err.code).assertEqual(0);
        });

        function subscribeCallBack(err, data) {
          console.info('====>Acts_QueryFormInfoByPush_0500 subscribeCallBack data:' + JSON.stringify(data));
          if (data.event == 'ACTS_FirstAppFirstAbilityFirst') {
            try {
              expect(firstCallbackFormId).assertEqual(data.parameters.formId);
              expect(firstCount).assertEqual(1);
            } catch {}
            try {
              formHost.off('notifyVisible', firstCallback, 'com.example.queryforminfobypushtest');
            } catch (error) {
              expect().assertFail();
            }
            flag = true;
            setTimeout(() => {
              commonEvent.unsubscribe(subscriber, unSubscribeCallback);
            }, WAIT_FUNCTION_DONE_TIME);
          }
        }

        function unSubscribeCallback() {
          done();
        }
        setTimeout(() => {
          if (flag == false) {
            expect().assertFail();
            commonEvent.unsubscribe(subscriber, unSubscribeCallback);
          }
        }, CASE_TIME_OUT);
      })
    })

    /*
     * @tc.number: Acts_QueryFormInfoByPush_0600
     * @tc.name: Listens and Cancels listening to the event of notifyVisible or notifyInvisible type change.
     * @tc.desc: Call the on function of tpye type notifyInvisible twice, and then the callback is different.
     */
    it('Acts_QueryFormInfoByPush_0600', 0, async function (done) {
      var firstCallbackFormId;
      let firstCallback = function (data) {
        firstCallbackFormId = data[0].formId;
        console.log(`====>Acts_QueryFormInfoByPush_0600 firstTestCallback data: ${JSON.stringify(data)}`);
      }
      var secondCount = 0;
      let secondCallback = function (data) {
        secondCount++;
      }
      try {
        formHost.on('notifyInvisible', firstCallback, 'com.example.queryforminfobypushtest');
        sleep(50);
        formHost.on('notifyInvisible', secondCallback, 'com.example.queryforminfobypushtest');
      } catch (error) {
        console.log('====>Acts_QueryFormInfoByPush_0600 Form on catch err:' + JSON.stringify(error));
        expect().assertFail();
      }
      await commonEvent.createSubscriber(ACTS_FormEvent).then((data) => {
        console.info('====>Acts_QueryFormInfoByPush_0600 Create Subscribe');
        var subscriber = data;
        var flag = false;
        commonEvent.subscribe(subscriber, subscribeCallBack);
        globalThis.abilityContext.startAbility(FIRST_APP_FIRST_ABILITY_INVISIBLE_WANT, (err) => {
          expect(err.code).assertEqual(0);
        });

        function subscribeCallBack(err, data) {
          console.info('====>Acts_QueryFormInfoByPush_0600 subscribeCallBack data:' + JSON.stringify(data));
          if (data.event == 'ACTS_FirstAppFirstAbilityFirst') {
            try {
              expect(firstCallbackFormId).assertEqual(data.parameters.formId);
              expect(secondCount).assertEqual(0);
            } catch {}
            try {
              formHost.off('notifyInvisible', firstCallback, 'com.example.queryforminfobypushtest');
            } catch (error) {
              expect().assertFail();
            }
            flag = true;
            setTimeout(() => {
              commonEvent.unsubscribe(subscriber, unSubscribeCallback);
            }, WAIT_FUNCTION_DONE_TIME);
          }
        }

        function unSubscribeCallback() {
          done();
        }
        setTimeout(() => {
          if (flag == false) {
            expect().assertFail();
            commonEvent.unsubscribe(subscriber, unSubscribeCallback);
          }
        }, CASE_TIME_OUT);
      })
    })

    /*
     * @tc.number: Acts_QueryFormInfoByPush_0700
     * @tc.name: Listens and Cancels listening to the event of notifyVisible or notifyInvisible type change.
     * @tc.desc: Call the on function of tpye type notifyInvisible twice, and then the hostBundleName is different.
     */
    it('Acts_QueryFormInfoByPush_0700', 0, async function (done) {
      var firstCallbackFormId;
      var firstCount = 0;
      let firstCallback = function (data) {
        firstCallbackFormId = data[0].formId;
        firstCount++;
        console.log(`====>Acts_QueryFormInfoByPush_0700 firstTestCallback data: ${JSON.stringify(data)}`);
      }
      try {
        formHost.on('notifyInvisible', firstCallback, 'com.example.queryforminfobypushtest');
        sleep(50);
        formHost.on('notifyInvisible', firstCallback, 'com.example.queryforminfobypushtest');
      } catch (error) {
        console.log('====>Acts_QueryFormInfoByPush_0700 Form on catch err:' + JSON.stringify(error));
        expect().assertFail();
      }
      await commonEvent.createSubscriber(ACTS_FormEvent).then((data) => {
        console.info('====>Acts_QueryFormInfoByPush_0700 Create Subscribe');
        var subscriber = data;
        var flag = false;
        commonEvent.subscribe(subscriber, subscribeCallBack);
        globalThis.abilityContext.startAbility(FIRST_APP_FIRST_ABILITY_INVISIBLE_WANT, (err) => {
          expect(err.code).assertEqual(0);
        });

        function subscribeCallBack(err, data) {
          console.info('====>Acts_QueryFormInfoByPush_0700 subscribeCallBack data:' + JSON.stringify(data));
          flag = true;
          if (data.event == 'ACTS_FirstAppFirstAbilityFirst') {
            try {
              expect(firstCallbackFormId).assertEqual(data.parameters.formId);
              expect(firstCount).assertEqual(1);
            } catch {}
            try {
              formHost.off('notifyInvisible', firstCallback, 'com.example.queryforminfobypushtest');
            } catch (error) {
              expect().assertFail();
            }
            setTimeout(() => {
              commonEvent.unsubscribe(subscriber, unSubscribeCallback);
            }, WAIT_FUNCTION_DONE_TIME);
          }
        }

        function unSubscribeCallback() {
          done();
        }
        setTimeout(() => {
          if (flag == false) {
            expect().assertFail();
            commonEvent.unsubscribe(subscriber, unSubscribeCallback);
          }
        }, CASE_TIME_OUT);
      })
    })

    /*
     * @tc.number: Acts_QueryFormInfoByPush_0800
     * @tc.name: Listens and Cancels listening to the event of notifyVisible or notifyInvisible type change.
     * @tc.desc: Under different module with the same application, call on to register for monitoring, with the type of
     *           notifyVisible or notifyInvisible, and call off interface to cancel monitoring, the callback parameter
     *           is valid, and hostBundleName is not set.
     */
    it('Acts_QueryFormInfoByPush_0800', 0, async function (done) {
      var firstCallbackFormId;
      var firstDataSize;
      let firstCallback = function (data) {
        firstCallbackFormId = data[0].formId;
        firstDataSize = data.length;
        console.log(`====>Acts_QueryFormInfoByPush_0800 firstTestCallback data: ${JSON.stringify(data)}`);
      }
      try {
        formHost.on('notifyVisible', firstCallback, 'com.example.queryforminfobypushtest');
      } catch (error) {
        console.log('====>Acts_QueryFormInfoByPush_0800 Form on catch err:' + JSON.stringify(error));
        expect().assertFail();
      }
      await commonEvent.createSubscriber(ACTS_FormEvent).then((data) => {
        console.info('====>Acts_QueryFormInfoByPush_0800 Create Subscribe');
        var subscriber = data;
        var flag = false;
        commonEvent.subscribe(subscriber, subscribeCallBack);
        globalThis.abilityContext.startAbility(FIRST_APP_SECOND_ABILITY_VISIBLE_WANT, (err) => {
          expect(err.code).assertEqual(0);
        });
        setTimeout(()=>{
          globalThis.abilityContext.startAbility({
            bundleName: 'com.example.queryforminfobypushtest',
            abilityName: 'FeatureAbility',
            parameters: {
              'isVisible': 'notifyInvisible',
              'case': 'a'
            }}, (err) => {
            expect(err.code).assertEqual(0);
          });
        }, 300);

        var firstFormIdDone = false;
        var secondFormIdDone = false;
        var firstResultDone = false;
        var secondResultDone = false;
        var firstFormId;
        var secondFormId;
        var firstDoneCount = 0;
        function subscribeCallBack(err, data) {
          flag = true;
          console.info('====>Acts_QueryFormInfoByPush_0800 subscribeCallBack data:' + JSON.stringify(data));
          if (data.event == 'ACTS_FirstAppSecondAbilityFirst') {
            firstFormId = data.parameters.formId;
            firstFormIdDone = true;
          }
          if (data.event == 'ACTS_SecondAppFirstAbilityFirst') {
            secondFormId = data.parameters.formId;
            secondFormIdDone = true;
          }
          if (firstFormIdDone && secondFormIdDone && (firstDoneCount == 0)) {
            firstDoneCount++;
            let commonEventData = {
              parameters: {
                "firstFormId": firstFormId,
                "secondFormId": secondFormId
              }
            };
            commonEvent.publish("ACTS_AllFormIdGet", commonEventData, () => {});
          }
          if (data.event == 'ACTS_FirstAppSecondAbilitySecond') {
            try {
              expect(firstCallbackFormId).assertEqual(firstFormId);
              expect(firstDataSize).assertEqual(1);
            } catch {}
            firstResultDone = true;
          }
          if (data.event == 'ACTS_FirstAppSecondModuleFirst') {
            try {
              expect(data.parameters.callbackFormId).assertEqual(secondFormId);
              expect(data.parameters.dataSize).assertEqual(1);
            } catch {}
            let commonEventData = {
              parameters: {
                "firstFormId": firstFormId,
                "secondFormId": secondFormId
              }
            };
            commonEvent.publish("ACTS_CallNotifyAfterOff", commonEventData, (error) => {
              console.log('====>ACTS_CallNotifyAfterOff publish err:' + JSON.stringify(error));
            });
          }
          if (data.event == 'ACTS_FirstAppSecondModuleSecond') {
            try {
              expect(data.parameters.count).assertEqual(1);
            } catch {}
            secondResultDone = true;
          }
          if (firstResultDone && secondResultDone) {
            try {
              formHost.off('notifyVisible', firstCallback, 'com.example.queryforminfobypushtest');
            } catch (error) {
              expect().assertFail();
            }
            setTimeout(() => {
              commonEvent.unsubscribe(subscriber, unSubscribeCallback);
            }, WAIT_FUNCTION_DONE_TIME);
          }
        }

        function unSubscribeCallback() {
          done();
        }
        setTimeout(() => {
          if (flag == false) {
            expect().assertFail();
            commonEvent.unsubscribe(subscriber, unSubscribeCallback);
          }
        }, CASE_TIME_OUT);
      })
    })

    /*
     * @tc.number: Acts_QueryFormInfoByPush_0900
     * @tc.name: Listens and Cancels listening to the event of notifyVisible or notifyInvisible type change.
     * @tc.desc: Under different module with the same application, call on to register for monitoring, with the type of
     *           notifyVisible or notifyInvisible, and call off interface to cancel monitoring, the callback is not set,
     *           and hostBundleName is valid.
     */
    it('Acts_QueryFormInfoByPush_0900', 0, async function (done) {
      var firstCallbackFormId;
      var firstDataSize;
      let firstCallback = function (data) {
        firstCallbackFormId = data[0].formId;
        firstDataSize = data.length;
        console.log(`====>Acts_QueryFormInfoByPush_0900 firstTestCallback data: ${JSON.stringify(data)}`);
      }
      try {
        formHost.on('notifyInvisible', firstCallback, 'com.example.queryforminfobypushtest');
      } catch (error) {
        console.log('====>Acts_QueryFormInfoByPush_0900 Form on catch err:' + JSON.stringify(error));
        expect().assertFail();
      }
      await commonEvent.createSubscriber(ACTS_FormEvent).then((data) => {
        console.info('====>Acts_QueryFormInfoByPush_0900 Create Subscribe');
        var subscriber = data;
        var flag = false;
        commonEvent.subscribe(subscriber, subscribeCallBack);
        globalThis.abilityContext.startAbility(FIRST_APP_SECOND_ABILITY_INVISIBLE_WANT, (err) => {
          expect(err.code).assertEqual(0);
        });
        setTimeout(() => {
          globalThis.abilityContext.startAbility({
            bundleName: 'com.example.queryforminfobypushtest',
            abilityName: 'FeatureAbility',
            parameters: {
              'isVisible': 'notifyVisible',
              'case': 'b'
            }
          }, (err) => {
            expect(err.code).assertEqual(0);
          });
        }, 300);

        var firstFormIdDone = false;
        var secondFormIdDone = false;
        var firstResultDone = false;
        var secondResultDone = false;
        var firstFormId;
        var secondFormId;
        var firstDoneCount = 0;
        function subscribeCallBack(err, data) {
          flag = true;
          console.info('====>Acts_QueryFormInfoByPush_0900 subscribeCallBack data:' + JSON.stringify(data));
          if (data.event == 'ACTS_FirstAppSecondAbilityFirst') {
            firstFormId = data.parameters.formId;
            firstFormIdDone = true;
          }
          if (data.event == 'ACTS_SecondAppFirstAbilityFirst') {
            secondFormId = data.parameters.formId;
            console.log('====>Acts_QueryFormInfoByPush_0900 ACTS_FeatureForm data:' + JSON.stringify(secondFormId));
            secondFormIdDone = true;
          }
          if (firstFormIdDone && secondFormIdDone && (firstDoneCount == 0)) {
            firstDoneCount++;
            let commonEventData = {
              parameters: {
                "firstFormId": firstFormId,
                "secondFormId": secondFormId
              }
            };
            commonEvent.publish("ACTS_AllFormIdGet", commonEventData, () => {});
          }
          if (data.event == 'ACTS_FirstAppSecondAbilitySecond') {
            try {
              expect(firstCallbackFormId).assertEqual(firstFormId);
              expect(firstDataSize).assertEqual(1);
            } catch {}
            firstResultDone = true;
          }
          if (data.event == 'ACTS_FirstAppSecondModuleFirst') {
            try {
              expect(data.parameters.callbackFormId).assertEqual(secondFormId);
              expect(data.parameters.dataSize).assertEqual(1);
            } catch {}
            let commonEventData = {
              parameters: {
                "firstFormId": firstFormId,
                "secondFormId": secondFormId
              }
            };
            commonEvent.publish("ACTS_CallNotifyAfterOff", commonEventData, (error) => {
              console.log('====>ACTS_CallNotifyAfterOff publish err:' + JSON.stringify(error));
            });
          }
          if (data.event == 'ACTS_FirstAppSecondModuleSecond') {
            try {
              expect(data.parameters.count).assertEqual(1);
            } catch {}
            secondResultDone = true;
          }
          if (firstResultDone && secondResultDone) {
            try {
              formHost.off('notifyInvisible', firstCallback, 'com.example.queryforminfobypushtest');
            } catch (error) {
              console.log('====>Acts_QueryFormInfoByPush_0900 Form off catch err:' + JSON.stringify(error));
              expect().assertFail();
            }
            setTimeout(() => {
              commonEvent.unsubscribe(subscriber, unSubscribeCallback);
            }, WAIT_FUNCTION_DONE_TIME);
          }
        }

        function unSubscribeCallback() {
          done();
        }
        setTimeout(() => {
          if (flag == false) {
            expect().assertFail();
            commonEvent.unsubscribe(subscriber, unSubscribeCallback);
          }
        }, CASE_TIME_OUT);
      })
    })

    /*
     * @tc.number: Acts_QueryFormInfoByPush_1000
     * @tc.name: Listens and Cancels listening to the event of notifyVisible or notifyInvisible type change.
     * @tc.desc: Under different module of the same application, call on to register for monitoring, with the type of
     *           notifyVisible or notifyInvisible, and call off interface to cancel monitoring, with the callback not
     *           set and hostBundleName not set.
     */
    it('Acts_QueryFormInfoByPush_1000', 0, async function (done) {
      var firstCallbackFormId;
      var firstDataSize;
      let firstCallback = function (data) {
        firstCallbackFormId = data[0].formId;
        firstDataSize = data.length;
        console.log(`====>Acts_QueryFormInfoByPush_1000 firstTestCallback data: ${JSON.stringify(data)}`);
      }
      try {
        formHost.on('notifyVisible', firstCallback, 'com.example.queryforminfobypushtest');
      } catch (error) {
        console.log('====>Acts_QueryFormInfoByPush_1000 Form on catch err:' + JSON.stringify(error));
        expect().assertFail();
      }
      await commonEvent.createSubscriber(ACTS_FormEvent).then((data) => {
        console.info('====>Acts_QueryFormInfoByPush_1000 Create Subscribe');
        var subscriber = data;
        var flag = false;
        commonEvent.subscribe(subscriber, subscribeCallBack);
        globalThis.abilityContext.startAbility(FIRST_APP_SECOND_ABILITY_VISIBLE_WANT, (err) => {
          expect(err.code).assertEqual(0);
        });
        setTimeout(() => {
          globalThis.abilityContext.startAbility({
            bundleName: 'com.example.queryforminfobypushtest',
            abilityName: 'FeatureAbility',
            moduleName: 'feature',
            parameters: {
              'isVisible': 'notifyInvisible',
              'case': 'c'
            }}, (err) => {
            expect(err.code).assertEqual(0);
          });
        }, 300);


        var firstFormIdDone = false;
        var secondFormIdDone = false;
        var firstResultDone = false;
        var secondResultDone = false;
        var firstFormId;
        var secondFormId;
        var firstDoneCount = 0;
        function subscribeCallBack(err, data) {
          flag = true;
          console.info('====>Acts_QueryFormInfoByPush_1000 subscribeCall  Back data:' + JSON.stringify(data));
          if (data.event == 'ACTS_FirstAppSecondAbilityFirst') {
            firstFormId = data.parameters.formId;
            firstFormIdDone = true;
          }
          if (data.event == 'ACTS_SecondAppFirstAbilityFirst') {
            secondFormId = data.parameters.formId;
            console.log('====>Acts_QueryFormInfoByPush_1000 ACTS_FeatureForm data:' + JSON.stringify(secondFormId));
            secondFormIdDone = true;
          }
          if (firstFormIdDone && secondFormIdDone && (firstDoneCount == 0)) {
            firstDoneCount++;
            let commonEventData = {
              parameters: {
                "firstFormId": firstFormId,
                "secondFormId": secondFormId
              }
            };
            commonEvent.publish("ACTS_AllFormIdGet", commonEventData, () => {});
          }
          if (data.event == 'ACTS_FirstAppSecondAbilitySecond') {
            try {
              expect(firstCallbackFormId).assertEqual(firstFormId);
              expect(firstDataSize).assertEqual(1);
            } catch {}
            firstResultDone = true;
          }
          if (data.event == 'ACTS_FirstAppSecondModuleFirst') {
            try {
              expect(data.parameters.callbackFormId).assertEqual(secondFormId);
              expect(data.parameters.dataSize).assertEqual(1);
            } catch {}
            let commonEventData = {
              parameters: {
                "firstFormId": firstFormId,
                "secondFormId": secondFormId
              }
            };
            commonEvent.publish("ACTS_CallNotifyAfterOff", commonEventData, (error) => {
              console.log('====>ACTS_CallNotifyAfterOff publish err:' + JSON.stringify(error));
            });
          }
          if (data.event == 'ACTS_FirstAppSecondModuleSecond') {
            try {
              expect(data.parameters.count).assertEqual(1);
            } catch {}
            secondResultDone = true;
          }
          if (firstResultDone && secondResultDone) {
            try {
              formHost.off('notifyVisible', firstCallback, 'com.example.queryforminfobypushtest');
            } catch (error) {
              expect().assertFail();
            }
            setTimeout(() => {
              commonEvent.unsubscribe(subscriber, unSubscribeCallback);
            }, WAIT_FUNCTION_DONE_TIME);
          }
        }

        function unSubscribeCallback() {
          done();
        }
        setTimeout(() => {
          if (flag == false) {
            expect().assertFail();
            commonEvent.unsubscribe(subscriber, unSubscribeCallback);
          }
        }, CASE_TIME_OUT);
      })
    })

    /*
     * @tc.number: Acts_QueryFormInfoByPush_Off_3300
     * @tc.name: Cancels listening to the event of notifyVisible or notifyInvisible type change.
     * @tc.desc: Call the off only when the parameter is notifyVisible.
     */
    it('Acts_QueryFormInfoByPush_Off_3300', 0, async function (done) {
      var callbackFormId;
      var callbackCount = 0;
      let callback = function (data) {
        callbackFormId = data[0].formId;
        callbackCount++;
        console.log(`====>Acts_QueryFormInfoByPush_Off_3300 callback data: ${JSON.stringify(data)}`);
      }
      try {
        formHost.on('notifyVisible', callback, 'com.example.queryforminfobypushtest');
      } catch (error) {
        expect().assertFail();
      }

      await commonEvent.createSubscriber(ACTS_FormEvent).then((data) => {
        console.info('====>Acts_QueryFormInfoByPush_Off_3300 Create Subscribe');
        var subscriber = data;
        var flag = false;
        commonEvent.subscribe(subscriber, subscribeCallBack);
        globalThis.abilityContext.startAbility(FIRST_APP_THIRD_ABILITY_VISIBLE_WANT, (err) => {
          expect(err.code).assertEqual(0);
        });

        function subscribeCallBack(err, data) {
          console.info('====>Acts_QueryFormInfoByPush_Off_3300 subscribeCallBack data:' + JSON.stringify(data));
          flag = true;
          if (data.event == 'ACTS_FirstAppThirdAbilityFirst') {
            expect(callbackCount).assertEqual(0);
            try {
              formHost.off('notifyVisible');
            } catch (error) {
              expect().assertFail();
            }
            commonEvent.publish("ACTS_FirstAppThirdAbilityWait", {}, ()=>{});
          }
          if (data.event == 'ACTS_FirstAppThirdAbilitySecond') {
            try {
              expect(callbackCount).assertEqual(1);
            } catch {}
            try {
              formHost.off('notifyVisible', callback, 'com.example.queryforminfobypushtest');
            } catch (error) {
              expect().assertFail();
            }
            setTimeout(() => {
              commonEvent.unsubscribe(subscriber, unSubscribeCallback);
            }, WAIT_FUNCTION_DONE_TIME);
          }
        }

        function unSubscribeCallback() {
          done();
        }
        setTimeout(() => {
          if (flag == false) {
            expect().assertFail();
            commonEvent.unsubscribe(subscriber, unSubscribeCallback);
          }
        }, CASE_TIME_OUT);
      })
    })

    /*
     * @tc.number: Acts_QueryFormInfoByPush_Off_3400
     * @tc.name: Cancels listening to the event of notifyVisible or notifyInvisible type change.
     * @tc.desc: Call the off only when the parameter is notifyVisible when the on function is not called.
     */
    it('Acts_QueryFormInfoByPush_Off_3400', 0, async function () {
      let count = 0;
      try {
        formHost.off('notifyVisible');
      } catch {
        count++;
      }
      try {
        expect(count).assertEqual(0);
      } catch {}
    })

    /*
     * @tc.number: Acts_QueryFormInfoByPush_Off_3500
     * @tc.name: Cancels listening to the event of notifyVisible or notifyInvisible type change.
     * @tc.desc: Call the off interface with the type of notifyVisible when the callback is undefined.
     */
    it('Acts_QueryFormInfoByPush_Off_3500', 0, async function (done) {
      var callbackFormId;
      var callbackCount = 0;
      let callback = function (data) {
        callbackFormId = data[0].formId;
        callbackCount++;
        console.log(`====>Acts_QueryFormInfoByPush_Off_3500 callback data: ${JSON.stringify(data)}`);
      }
      try {
        formHost.on('notifyVisible', callback);
      } catch (error) {
        expect().assertFail();
      }

      await commonEvent.createSubscriber(ACTS_FormEvent).then((data) => {
        console.info('====>Acts_QueryFormInfoByPush_Off_3500 Create Subscribe');
        var subscriber = data;
        var flag = false;
        commonEvent.subscribe(subscriber, subscribeCallBack);
        globalThis.abilityContext.startAbility(FIRST_APP_FIRST_ABILITY_VISIBLE_WANT, (err) => {
          expect(err.code).assertEqual(0);
        });

        function subscribeCallBack(err, data) {
          console.info('====>Acts_QueryFormInfoByPush_Off_3500 subscribeCallBack data:' + JSON.stringify(data));
          flag = true;
          if (data.event == 'ACTS_FirstAppFirstAbilityFirst') {
            try {
              expect(callbackFormId).assertEqual(data.parameters.formId);
            } catch {}
            try {
              formHost.off('notifyVisible', undefined);
            } catch (error) {
              expect().assertFail();
            }
            commonEvent.publish("ACTS_FirstAppFirstAbilityWait", {}, ()=>{});
          }
          if (data.event == 'ACTS_FirstAppFirstAbilitySecond') {
            try {
              expect(callbackCount).assertEqual(1);
            } catch {}
            setTimeout(() => {
              commonEvent.unsubscribe(subscriber, unSubscribeCallback);
            }, WAIT_FUNCTION_DONE_TIME);
          }
        }

        function unSubscribeCallback() {
          done();
        }
        setTimeout(() => {
          if (flag == false) {
            expect().assertFail();
            commonEvent.unsubscribe(subscriber, unSubscribeCallback);
          }
        }, CASE_TIME_OUT);
      })
    })

    /*
     * @tc.number: Acts_QueryFormInfoByPush_Off_3600
     * @tc.name: Cancels listening to the event of notifyVisible or notifyInvisible type change.
     * @tc.desc: Call the off interface with the type of notifyVisible when the callback is invalid.
     */
    it('Acts_QueryFormInfoByPush_Off_3600', 0, async function (done) {
      var callbackFormId;
      var callbackCount = 0;
      let callback = function (data) {
        callbackFormId = data[0].formId;
        callbackCount++;
        console.log(`====>Acts_QueryFormInfoByPush_Off_3600 callback data: ${JSON.stringify(data)}`);
      }
      try {
        formHost.on('notifyVisible', callback);
      } catch (error) {
        expect().assertFail();
      }

      await commonEvent.createSubscriber(ACTS_FormEvent).then((data) => {
        console.info('====>Acts_QueryFormInfoByPush_Off_3600 Create Subscribe');
        var subscriber = data;
        var flag = false;
        commonEvent.subscribe(subscriber, subscribeCallBack);
        globalThis.abilityContext.startAbility(FIRST_APP_THIRD_ABILITY_VISIBLE_WANT, (err) => {
          expect(err.code).assertEqual(0);
        });

        function subscribeCallBack(err, data) {
          console.info('====>Acts_QueryFormInfoByPush_Off_3600 subscribeCallBack data:' + JSON.stringify(data));
          flag = true;
          if (data.event == 'ACTS_FirstAppThirdAbilityFirst') {
            try {
              expect(callbackCount).assertEqual(0);
            } catch {}
            try {
              formHost.off('notifyVisible', function () {});
            } catch (error) {
              expect().assertFail();
            }
            commonEvent.publish("ACTS_FirstAppThirdAbilityWait", {}, ()=>{});
          }
          if (data.event == 'ACTS_FirstAppThirdAbilitySecond') {
            try {
              expect(callbackCount).assertEqual(1);
            } catch {}
            try {
              formHost.off('notifyVisible', callback);
            } catch (error) {
              expect().assertFail();
            }
            setTimeout(() => {
              commonEvent.unsubscribe(subscriber, unSubscribeCallback);
            }, WAIT_FUNCTION_DONE_TIME);
          }
        }

        function unSubscribeCallback() {
          done();
        }
        setTimeout(() => {
          if (flag == false) {
            expect().assertFail();
            commonEvent.unsubscribe(subscriber, unSubscribeCallback);
          }
        }, CASE_TIME_OUT);
      })
    })

    /*
     * @tc.number: Acts_QueryFormInfoByPush_Off_3700
     * @tc.name: Cancels listening to the event of notifyVisible or notifyInvisible type change.
     * @tc.desc: Call the off interface with the type of notifyVisible when the callback is effective.
     */
    it('Acts_QueryFormInfoByPush_Off_3700', 0, async function (done) {
      var callbackFormId;
      var callbackCount = 0;
      let callback = function (data) {
        callbackFormId = data[0].formId;
        callbackCount++;
        console.log(`====>Acts_QueryFormInfoByPush_Off_3700 callback data: ${JSON.stringify(data)}`);
      }
      try {
        formHost.on('notifyVisible', callback);
      } catch (error) {
        expect().assertFail();
      }

      await commonEvent.createSubscriber(ACTS_FormEvent).then((data) => {
        console.info('====>Acts_QueryFormInfoByPush_Off_3700 Create Subscribe');
        var subscriber = data;
        var flag = false;
        commonEvent.subscribe(subscriber, subscribeCallBack);
        globalThis.abilityContext.startAbility(FIRST_APP_FIRST_ABILITY_VISIBLE_WANT, (err) => {
          expect(err.code).assertEqual(0);
        });

        function subscribeCallBack(err, data) {
          console.info('====>Acts_QueryFormInfoByPush_Off_3700 subscribeCallBack data:' + JSON.stringify(data));
          flag = true;
          if (data.event == 'ACTS_FirstAppFirstAbilityFirst') {
            try {
              expect(callbackFormId).assertEqual(data.parameters.formId);
            } catch {}
            try {
              formHost.off('notifyVisible', callback);
            } catch (error) {
              expect().assertFail();
            }
            commonEvent.publish("ACTS_FirstAppFirstAbilityWait", {}, ()=>{});
          }
          if (data.event == 'ACTS_FirstAppFirstAbilitySecond') {
            try {
              expect(callbackCount).assertEqual(1);
            } catch {}
            setTimeout(() => {
              commonEvent.unsubscribe(subscriber, unSubscribeCallback);
            }, WAIT_FUNCTION_DONE_TIME);
          }
        }

        function unSubscribeCallback() {
          done();
        }
        setTimeout(() => {
          if (flag == false) {
            expect().assertFail();
            commonEvent.unsubscribe(subscriber, unSubscribeCallback);
          }
        }, CASE_TIME_OUT);
      })
    })

    /*
     * @tc.number: Acts_QueryFormInfoByPush_Off_3800
     * @tc.name: Cancels listening to the event of notifyVisible or notifyInvisible type change.
     * @tc.desc: Call the off interface with the type of notifyVisible when the callback and the hostBundleName is
     *           undefined.
     */
    it('Acts_QueryFormInfoByPush_Off_3800', 0, async function (done) {
      var callbackFormId;
      var callbackCount = 0;
      let callback = function (data) {
        callbackFormId = data[0].formId;
        callbackCount++;
        console.log(`====>Acts_QueryFormInfoByPush_Off_3800 callback data: ${JSON.stringify(data)}`);
      }
      try {
        formHost.on('notifyVisible', callback, 'com.example.queryforminfobypushtest');
      } catch (error) {
        expect().assertFail();
      }

      await commonEvent.createSubscriber(ACTS_FormEvent).then((data) => {
        console.info('====>Acts_QueryFormInfoByPush_Off_3800 Create Subscribe');
        var subscriber = data;
        var flag = false;
        commonEvent.subscribe(subscriber, subscribeCallBack);
        globalThis.abilityContext.startAbility(FIRST_APP_THIRD_ABILITY_VISIBLE_WANT, (err) => {
          expect(err.code).assertEqual(0);
        });

        function subscribeCallBack(err, data) {
          console.info('====>Acts_QueryFormInfoByPush_Off_3800 subscribeCallBack data:' + JSON.stringify(data));
          flag = true;
          if (data.event == 'ACTS_FirstAppThirdAbilityFirst') {
            try {
              expect(callbackCount).assertEqual(0);
            } catch {}
            try {
              formHost.off('notifyVisible', undefined, undefined);
            } catch (error) {
              expect().assertFail();
            }
            commonEvent.publish("ACTS_FirstAppThirdAbilityWait", {}, ()=>{});
          }
          if (data.event == 'ACTS_FirstAppThirdAbilitySecond') {
            try {
              expect(callbackCount).assertEqual(1);
            } catch {}
            try {
              formHost.off('notifyVisible', callback, 'com.example.queryforminfobypushtest');
            } catch (error) {
              expect().assertFail();
            }
            setTimeout(() => {
              commonEvent.unsubscribe(subscriber, unSubscribeCallback);
            }, WAIT_FUNCTION_DONE_TIME);
          }
        }

        function unSubscribeCallback() {
          done();
        }
        setTimeout(() => {
          if (flag == false) {
            expect().assertFail();
            commonEvent.unsubscribe(subscriber, unSubscribeCallback);
          }
        }, CASE_TIME_OUT);
      })
    })

    /*
     * @tc.number: Acts_QueryFormInfoByPush_Off_3900
     * @tc.name: Cancels listening to the event of notifyVisible or notifyInvisible type change.
     * @tc.desc: Call the off interface with the type of notifyVisible when the hostBundleName is
     *           undefined and the callback is effective.
     */
    it('Acts_QueryFormInfoByPush_Off_3900', 0, async function (done) {
      var callbackFormId;
      var callbackCount = 0;
      let callback = function (data) {
        callbackFormId = data[0].formId;
        callbackCount++;
        console.log(`====>Acts_QueryFormInfoByPush_Off_3900 callback data: ${JSON.stringify(data)}`);
      }
      try {
        formHost.on('notifyVisible', callback);
      } catch (error) {
        expect().assertFail();
      }

      await commonEvent.createSubscriber(ACTS_FormEvent).then((data) => {
        console.info('====>Acts_QueryFormInfoByPush_Off_3900 Create Subscribe');
        var subscriber = data;
        var flag = false;
        commonEvent.subscribe(subscriber, subscribeCallBack);
        globalThis.abilityContext.startAbility(FIRST_APP_FIRST_ABILITY_VISIBLE_WANT, (err) => {
          expect(err.code).assertEqual(0);
        });

        function subscribeCallBack(err, data) {
          console.info('====>Acts_QueryFormInfoByPush_Off_3900 subscribeCallBack data:' + JSON.stringify(data));
          flag = true;
          if (data.event == 'ACTS_FirstAppFirstAbilityFirst') {
            try {
              expect(callbackFormId).assertEqual(data.parameters.formId);
            } catch {}
            try {
              formHost.off('notifyVisible', callback, undefined);
            } catch (error) {
              expect().assertFail();
            }
            commonEvent.publish("ACTS_FirstAppFirstAbilityWait", {}, ()=>{});
          }
          if (data.event == 'ACTS_FirstAppFirstAbilitySecond') {
            try {
              expect(callbackCount).assertEqual(1);
            } catch {}
            setTimeout(() => {
              commonEvent.unsubscribe(subscriber, unSubscribeCallback);
            }, WAIT_FUNCTION_DONE_TIME);
          }
        }

        function unSubscribeCallback() {
          done();
        }
        setTimeout(() => {
          if (flag == false) {
            expect().assertFail();
            commonEvent.unsubscribe(subscriber, unSubscribeCallback);
          }
        }, CASE_TIME_OUT);
      })
    })

    /*
     * @tc.number: Acts_QueryFormInfoByPush_Off_4000
     * @tc.name: Cancels listening to the event of notifyVisible or notifyInvisible type change.
     * @tc.desc: Call the off only when the parameter is notifyInvisible.
     */
    it('Acts_QueryFormInfoByPush_Off_4000', 0, async function (done) {
      var callbackFormId;
      var callbackCount = 0;
      let callback = function (data) {
        callbackFormId = data[0].formId;
        callbackCount++;
        console.log(`====>Acts_QueryFormInfoByPush_Off_4000 callback data: ${JSON.stringify(data)}`);
      }
      try {
        formHost.on('notifyInvisible', callback, 'com.example.queryforminfobypushtest');
      } catch (error) {
        expect().assertFail();
      }

      await commonEvent.createSubscriber(ACTS_FormEvent).then((data) => {
        console.info('====>Acts_QueryFormInfoByPush_Off_4000 Create Subscribe');
        var subscriber = data;
        var flag = false;
        commonEvent.subscribe(subscriber, subscribeCallBack);
        globalThis.abilityContext.startAbility(FIRST_APP_THIRD_ABILITY_INVISIBLE_WANT, (err) => {
          expect(err.code).assertEqual(0);
        });

        function subscribeCallBack(err, data) {
          console.info('====>Acts_QueryFormInfoByPush_Off_4000 subscribeCallBack data:' + JSON.stringify(data));
          flag = true;
          if (data.event == 'ACTS_FirstAppThirdAbilityFirst') {
            expect(callbackCount).assertEqual(0);
            try {
              formHost.off('notifyInvisible');
            } catch (error) {
              expect().assertFail();
            }
            commonEvent.publish("ACTS_FirstAppThirdAbilityWait", {}, ()=>{});
          }
          if (data.event == 'ACTS_FirstAppThirdAbilitySecond') {
            try {
              expect(callbackCount).assertEqual(1);
            } catch {}
            try {
              formHost.off('notifyInvisible', callback, 'com.example.queryforminfobypushtest');
            } catch (error) {
              expect().assertFail();
            }
            setTimeout(() => {
              commonEvent.unsubscribe(subscriber, unSubscribeCallback);
            }, WAIT_FUNCTION_DONE_TIME);
          }
        }

        function unSubscribeCallback() {
          done();
        }
        setTimeout(() => {
          if (flag == false) {
            expect().assertFail();
            commonEvent.unsubscribe(subscriber, unSubscribeCallback);
          }
        }, CASE_TIME_OUT);
      })
    })

    /*
     * @tc.number: Acts_QueryFormInfoByPush_Off_4100
     * @tc.name: Cancels listening to the event of notifyVisible or notifyInvisible type change.
     * @tc.desc: Call the off interface with the type of notifyInvisible when the callback is undefined.
     */
    it('Acts_QueryFormInfoByPush_Off_4100', 0, async function (done) {
      var callbackFormId;
      var callbackCount = 0;
      let callback = function (data) {
        callbackFormId = data[0].formId;
        callbackCount++;
        console.log(`====>Acts_QueryFormInfoByPush_Off_4100 callback data: ${JSON.stringify(data)}`);
      }
      try {
        formHost.on('notifyInvisible', callback);
      } catch (error) {
        expect().assertFail();
      }

      await commonEvent.createSubscriber(ACTS_FormEvent).then((data) => {
        console.info('====>Acts_QueryFormInfoByPush_Off_4100 Create Subscribe');
        var subscriber = data;
        var flag = false;
        commonEvent.subscribe(subscriber, subscribeCallBack);
        globalThis.abilityContext.startAbility(FIRST_APP_FIRST_ABILITY_INVISIBLE_WANT, (err) => {
          expect(err.code).assertEqual(0);
        });

        function subscribeCallBack(err, data) {
          console.info('====>Acts_QueryFormInfoByPush_Off_4100 subscribeCallBack data:' + JSON.stringify(data));
          flag = true;
          if (data.event == 'ACTS_FirstAppFirstAbilityFirst') {
            try {
              expect(callbackFormId).assertEqual(data.parameters.formId);
            } catch {}
            try {
              formHost.off('notifyInvisible', undefined);
            } catch (error) {
              expect().assertFail();
            }
            commonEvent.publish("ACTS_FirstAppFirstAbilityWait", {}, ()=>{});
          }
          if (data.event == 'ACTS_FirstAppFirstAbilitySecond') {
            try {
              expect(callbackCount).assertEqual(1);
            } catch {}
            setTimeout(() => {
              commonEvent.unsubscribe(subscriber, unSubscribeCallback);
            }, WAIT_FUNCTION_DONE_TIME);
          }
        }

        function unSubscribeCallback() {
          done();
        }
        setTimeout(() => {
          if (flag == false) {
            expect().assertFail();
            commonEvent.unsubscribe(subscriber, unSubscribeCallback);
          }
        }, CASE_TIME_OUT);
      })
    })

    /*
     * @tc.number: Acts_QueryFormInfoByPush_Off_4200
     * @tc.name: Cancels listening to the event of notifyVisible or notifyInvisible type change.
     * @tc.desc: Call the off interface with the type of notifyInvisible when the callback is invalid.
     */
    it('Acts_QueryFormInfoByPush_Off_4200', 0, async function (done) {
      var callbackFormId;
      var callbackCount = 0;
      let callback = function (data) {
        callbackFormId = data[0].formId;
        callbackCount++;
        console.log(`====>Acts_QueryFormInfoByPush_Off_4200 callback data: ${JSON.stringify(data)}`);
      }
      try {
        formHost.on('notifyInvisible', callback);
      } catch (error) {
        expect().assertFail();
      }

      await commonEvent.createSubscriber(ACTS_FormEvent).then((data) => {
        console.info('====>Acts_QueryFormInfoByPush_Off_4200 Create Subscribe');
        var subscriber = data;
        var flag = false;
        commonEvent.subscribe(subscriber, subscribeCallBack);
        globalThis.abilityContext.startAbility(FIRST_APP_THIRD_ABILITY_INVISIBLE_WANT, (err) => {
          expect(err.code).assertEqual(0);
        });

        function subscribeCallBack(err, data) {
          console.info('====>Acts_QueryFormInfoByPush_Off_4200 subscribeCallBack data:' + JSON.stringify(data));
          flag = true;
          if (data.event == 'ACTS_FirstAppThirdAbilityFirst') {
            try {
              expect(callbackCount).assertEqual(0);
            } catch {}
            try {
              formHost.off('notifyInvisible', function () {});
            } catch (error) {
              expect().assertFail();
            }
            commonEvent.publish("ACTS_FirstAppThirdAbilityWait", {}, ()=>{});
          }
          if (data.event == 'ACTS_FirstAppThirdAbilitySecond') {
            try {
              expect(callbackCount).assertEqual(1);
            } catch {}
            try {
              formHost.off('notifyInvisible', callback);
            } catch (error) {
              expect().assertFail();
            }
            setTimeout(() => {
              commonEvent.unsubscribe(subscriber, unSubscribeCallback);
            }, WAIT_FUNCTION_DONE_TIME);
          }
        }

        function unSubscribeCallback() {
          done();
        }
        setTimeout(() => {
          if (flag == false) {
            expect().assertFail();
            commonEvent.unsubscribe(subscriber, unSubscribeCallback);
          }
        }, CASE_TIME_OUT);
      })
    })

    /*
     * @tc.number: Acts_QueryFormInfoByPush_Off_4300
     * @tc.name: Cancels listening to the event of notifyVisible or notifyInvisible type change.
     * @tc.desc: Call the off interface with the type of notifyInvisible when the callback is effective.
     */
    it('Acts_QueryFormInfoByPush_Off_4300', 0, async function (done) {
      var callbackFormId;
      var callbackCount = 0;
      let callback = function (data) {
        callbackFormId = data[0].formId;
        callbackCount++;
        console.log(`====>Acts_QueryFormInfoByPush_Off_3700 callback data: ${JSON.stringify(data)}`);
      }
      try {
        formHost.on('notifyInvisible', callback);
      } catch (error) {
        expect().assertFail();
      }

      await commonEvent.createSubscriber(ACTS_FormEvent).then((data) => {
        console.info('====>Acts_QueryFormInfoByPush_Off_3700 Create Subscribe');
        var subscriber = data;
        var flag = false;
        commonEvent.subscribe(subscriber, subscribeCallBack);
        globalThis.abilityContext.startAbility(FIRST_APP_FIRST_ABILITY_INVISIBLE_WANT, (err) => {
          expect(err.code).assertEqual(0);
        });

        function subscribeCallBack(err, data) {
          console.info('====>Acts_QueryFormInfoByPush_Off_3700 subscribeCallBack data:' + JSON.stringify(data));
          flag = true;
          if (data.event == 'ACTS_FirstAppFirstAbilityFirst') {
            try {
              expect(callbackFormId).assertEqual(data.parameters.formId);
            } catch {}
            try {
              formHost.off('notifyInvisible', callback);
            } catch (error) {
              expect().assertFail();
            }
            commonEvent.publish("ACTS_FirstAppFirstAbilityWait", {}, ()=>{});
          }
          if (data.event == 'ACTS_FirstAppFirstAbilitySecond') {
            try {
              expect(callbackCount).assertEqual(1);
            } catch {}
            setTimeout(() => {
              commonEvent.unsubscribe(subscriber, unSubscribeCallback);
            }, WAIT_FUNCTION_DONE_TIME);
          }
        }

        function unSubscribeCallback() {
          done();
        }
        setTimeout(() => {
          if (flag == false) {
            expect().assertFail();
            commonEvent.unsubscribe(subscriber, unSubscribeCallback);
          }
        }, CASE_TIME_OUT);
      })
    })

    /*
     * @tc.number: Acts_QueryFormInfoByPush_Off_4400
     * @tc.name: Cancels listening to the event of notifyVisible or notifyInvisible type change.
     * @tc.desc: Call the off interface with the type of notifyInvisible when the callback and the hostBundleName is
     *           undefined.
     */
    it('Acts_QueryFormInfoByPush_Off_4400', 0, async function (done) {
      var callbackFormId;
      var callbackCount = 0;
      let callback = function (data) {
        callbackFormId = data[0].formId;
        callbackCount++;
        console.log(`====>Acts_QueryFormInfoByPush_Off_4400 callback data: ${JSON.stringify(data)}`);
      }
      try {
        formHost.on('notifyInvisible', callback, 'com.example.queryforminfobypushtest');
      } catch (error) {
        expect().assertFail();
      }

      await commonEvent.createSubscriber(ACTS_FormEvent).then((data) => {
        console.info('====>Acts_QueryFormInfoByPush_Off_4400 Create Subscribe');
        var subscriber = data;
        var flag = false;
        commonEvent.subscribe(subscriber, subscribeCallBack);
        globalThis.abilityContext.startAbility(FIRST_APP_THIRD_ABILITY_INVISIBLE_WANT, (err) => {
          expect(err.code).assertEqual(0);
        });

        function subscribeCallBack(err, data) {
          console.info('====>Acts_QueryFormInfoByPush_Off_4400 subscribeCallBack data:' + JSON.stringify(data));
          flag = true;
          if (data.event == 'ACTS_FirstAppThirdAbilityFirst') {
            try {
              expect(callbackCount).assertEqual(0);
            } catch {}
            try {
              formHost.off('notifyInvisible', undefined, undefined);
            } catch (error) {
              expect().assertFail();
            }
            commonEvent.publish("ACTS_FirstAppThirdAbilityWait", {}, ()=>{});
          }
          if (data.event == 'ACTS_FirstAppThirdAbilitySecond') {
            try {
              expect(callbackCount).assertEqual(1);
            } catch {}
            try {
              formHost.off('notifyInvisible', callback, 'com.example.queryforminfobypushtest');
            } catch (error) {
              expect().assertFail();
            }
            setTimeout(() => {
              commonEvent.unsubscribe(subscriber, unSubscribeCallback);
            }, WAIT_FUNCTION_DONE_TIME);
          }
        }

        function unSubscribeCallback() {
          done();
        }
        setTimeout(() => {
          if (flag == false) {
            expect().assertFail();
            commonEvent.unsubscribe(subscriber, unSubscribeCallback);
          }
        }, CASE_TIME_OUT);
      })
    })

    /*
     * @tc.number: Acts_QueryFormInfoByPush_Off_4500
     * @tc.name: Cancels listening to the event of notifyVisible or notifyInvisible type change.
     * @tc.desc: Call the off interface with the type of notifyInvisible when the hostBundleName is
     *           undefined and the callback is effective.
     */
    it('Acts_QueryFormInfoByPush_Off_4500', 0, async function (done) {
      var callbackFormId;
      var callbackCount = 0;
      let callback = function (data) {
        callbackFormId = data[0].formId;
        callbackCount++;
        console.log(`====>Acts_QueryFormInfoByPush_Off_4500 callback data: ${JSON.stringify(data)}`);
      }
      try {
        formHost.on('notifyInvisible', callback);
      } catch (error) {
        expect().assertFail();
      }

      await commonEvent.createSubscriber(ACTS_FormEvent).then((data) => {
        console.info('====>Acts_QueryFormInfoByPush_Off_4500 Create Subscribe');
        var subscriber = data;
        var flag = false;
        commonEvent.subscribe(subscriber, subscribeCallBack);
        globalThis.abilityContext.startAbility(FIRST_APP_FIRST_ABILITY_INVISIBLE_WANT, (err) => {
          expect(err.code).assertEqual(0);
        });

        function subscribeCallBack(err, data) {
          console.info('====>Acts_QueryFormInfoByPush_Off_4500 subscribeCallBack data:' + JSON.stringify(data));
          flag = true;
          if (data.event == 'ACTS_FirstAppFirstAbilityFirst') {
            try {
              expect(callbackFormId).assertEqual(data.parameters.formId);
            } catch {}
            try {
              formHost.off('notifyInvisible', callback, undefined);
            } catch (error) {
              expect().assertFail();
            }
            commonEvent.publish("ACTS_FirstAppFirstAbilityWait", {}, ()=>{});
          }
          if (data.event == 'ACTS_FirstAppFirstAbilitySecond') {
            try {
              expect(callbackCount).assertEqual(1);
            } catch {}
            setTimeout(() => {
              commonEvent.unsubscribe(subscriber, unSubscribeCallback);
            }, WAIT_FUNCTION_DONE_TIME);
          }
        }

        function unSubscribeCallback() {
          done();
        }
        setTimeout(() => {
          if (flag == false) {
            expect().assertFail();
            commonEvent.unsubscribe(subscriber, unSubscribeCallback);
          }
        }, CASE_TIME_OUT);
      })
    })

    /*
     * @tc.number: Acts_QueryFormInfoByPush_On_1900
     * @tc.name: Listens and Cancels listening to the event of notifyVisible or notifyInvisible type change.
     * @tc.desc: One provider and two consumers, under the condition of the same application and the same module and
     *           the type of notifyVisible, on and cancel the test of the interface.
     */
    it('Acts_QueryFormInfoByPush_On_1900', 0, async function (done) {
      var count = 0;
      let callback = function (data) {
        count++;
        console.log(`====>Acts_QueryFormInfoByPush_On_1900 callback data: ${JSON.stringify(data)}`);
      }
      try {
        formHost.on('notifyVisible', callback, 'com.example.queryforminfobypushtest');
        sleep(500);
        formHost.on('notifyVisible', callback, 'com.example.queryforminfobypushtestb');
      } catch (error) {
        expect().assertFail();
      }
      await commonEvent.createSubscriber(ACTS_FormEvent).then((data) => {
        var subscriber = data;
        var flag = false;
        commonEvent.subscribe(subscriber, subscribeCallBack);
        globalThis.abilityContext.startAbility(FIRST_APP_SECOND_ABILITY_VISIBLE_WANT, (err) => {
          expect(err.code).assertEqual(0);
        });
        setTimeout(() => {
          globalThis.abilityContext.startAbility(SECOND_APP_FIRST_ABILITY_VISIBLE_WANT, (err) => {
            expect(err.code).assertEqual(0);
          });
        }, 300);
        var firstFormIdDone = false;
        var secondFormIdDone = false;
        var firstResultDone = false;
        var secondResultDone = false;
        var firstFormId;
        var secondFormId;
        var firstDoneCount = 0;
        function subscribeCallBack(err, data) {
          console.info('====>Acts_QueryFormInfoByPush_On_1900 subscribeCallBack data:' + JSON.stringify(data));
          flag = true;
          if (data.event == 'ACTS_FirstAppSecondAbilityFirst') {
            firstFormId = data.parameters.formId;
            firstFormIdDone = true;
          }
          if (data.event == 'ACTS_SecondAppFirstAbilityFirst') {
            secondFormId = data.parameters.formId;
            secondFormIdDone = true;
          }
          if (firstFormIdDone && secondFormIdDone && (firstDoneCount == 0)) {
            firstDoneCount++;
            let commonEventData = {
              parameters: {
                "firstFormId": firstFormId,
                "secondFormId": secondFormId
              }
            };
            commonEvent.publish("ACTS_AllFormIdGet", commonEventData, () => {});
          }
          if (data.event == 'ACTS_FirstAppSecondAbilitySecond') {
            firstResultDone = true;
          }
          if (data.event == 'ACTS_SecondAppFirstAbilitySecond') {
            secondResultDone = true;
          }
          if (firstResultDone && secondResultDone) {
            try {
              expect(count).assertEqual(2);
            } catch {}
            try {
              formHost.off('notifyVisible', callback, 'com.example.queryforminfobypushtest');
              sleep(500);
              formHost.off('notifyVisible', callback, 'com.example.queryforminfobypushtestb');
            } catch (error) {
              expect().assertFail();
            }
            setTimeout(() => {
              commonEvent.unsubscribe(subscriber, unSubscribeCallback);
            }, WAIT_FUNCTION_DONE_TIME);
          }
        }

        function unSubscribeCallback() {
          done();
        }
        setTimeout(() => {
          if (flag == false) {
            expect().assertFail();
            commonEvent.unsubscribe(subscriber, unSubscribeCallback);
          }
        }, CASE_TIME_OUT);
      });
    })

    /*
     * @tc.number: Acts_QueryFormInfoByPush_Off_4600
     * @tc.name: Cancels listening to the event of notifyVisible or notifyInvisible type change.
     * @tc.desc: Call the off interface with the type of notifyVisible when the hostBundleName and the callback are
     *           invalid.
     */
    it('Acts_QueryFormInfoByPush_Off_4600', 0, async function (done) {
      var callbackFormId;
      var callbackCount = 0;
      let callback = function (data) {
        callbackFormId = data[0].formId;
        callbackCount++;
        console.log(`====>Acts_QueryFormInfoByPush_Off_4600 callback data: ${JSON.stringify(data)}`);
      }
      try {
        formHost.on('notifyVisible', callback, 'com.example.queryforminfobypushtest');
      } catch (error) {
        expect().assertFail();
      }

      await commonEvent.createSubscriber(ACTS_FormEvent).then((data) => {
        console.info('====>Acts_QueryFormInfoByPush_Off_4600 Create Subscribe');
        var subscriber = data;
        var flag = false;
        commonEvent.subscribe(subscriber, subscribeCallBack);
        globalThis.abilityContext.startAbility(FIRST_APP_THIRD_ABILITY_VISIBLE_WANT, (err) => {
          expect(err.code).assertEqual(0);
        });

        function subscribeCallBack(err, data) {
          console.info('====>Acts_QueryFormInfoByPush_Off_4600 subscribeCallBack data:' + JSON.stringify(data));
          flag = true;
          if (data.event == 'ACTS_FirstAppThirdAbilityFirst') {
            try {
              expect(callbackCount).assertEqual(0);
            } catch {}
            try {
              formHost.off('notifyVisible', function () {}, 'com.example.queryforminfobypushtestb');
            } catch (error) {
              expect().assertFail();
            }
            commonEvent.publish("ACTS_FirstAppThirdAbilityWait", {}, ()=>{});
          }
          if (data.event == 'ACTS_FirstAppThirdAbilitySecond') {
            try {
              expect(callbackCount).assertEqual(1);
            } catch {}
            try {
              formHost.off('notifyVisible', callback, 'com.example.queryforminfobypushtest');
            } catch (error) {
              expect().assertFail();
            }
            setTimeout(() => {
              commonEvent.unsubscribe(subscriber, unSubscribeCallback);
            }, WAIT_FUNCTION_DONE_TIME);
          }
        }

        function unSubscribeCallback() {
          done();
        }
        setTimeout(() => {
          if (flag == false) {
            expect().assertFail();
            commonEvent.unsubscribe(subscriber, unSubscribeCallback);
          }
        }, CASE_TIME_OUT);
      })
    })

    /*
     * @tc.number: Acts_QueryFormInfoByPush_On_2000
     * @tc.name: Listens to the event of notifyVisible or notifyInvisible type change.
     * @tc.desc: Call the on interface with the type of notifyVisible when the hostBundleName is 'all'.
     */
    it('Acts_QueryFormInfoByPush_On_2000', 0, async function (done) {
      var callbackCount = 0;
      let callback = function () {
        callbackCount++;
      }
      try {
        formHost.on('notifyVisible', callback, 'all');
      } catch (error) {
        expect().assertFail();
      }

      await commonEvent.createSubscriber(ACTS_FormEvent).then((data) => {
        var subscriber = data;
        var flag = false;
        commonEvent.subscribe(subscriber, subscribeCallBack);
        globalThis.abilityContext.startAbility(FIRST_APP_FIRST_ABILITY_VISIBLE_WANT, (err) => {
          expect(err.code).assertEqual(0);
        });

        function subscribeCallBack(err, data) {
          console.info('====>Acts_QueryFormInfoByPush_On_2000 subscribeCallBack data:' + JSON.stringify(data));
          flag = true;
          if (data.event == 'ACTS_FirstAppFirstAbilityFirst') {
            try {
              expect(callbackCount).assertEqual(0);
            } catch {}
            try {
              formHost.off('notifyVisible', callback, 'all');
            } catch (error) {
              expect().assertFail();
            }
            setTimeout(() => {
              commonEvent.unsubscribe(subscriber, unSubscribeCallback);
            }, WAIT_FUNCTION_DONE_TIME);
          }
        }

        function unSubscribeCallback() {
          done();
        }
        setTimeout(() => {
          if (flag == false) {
            expect().assertFail();
            commonEvent.unsubscribe(subscriber, unSubscribeCallback);
          }
        }, CASE_TIME_OUT);
      })
    })

    /*
     * @tc.number: Acts_QueryFormInfoByPush_On_2100
     * @tc.name: Listens to the event of notifyVisible or notifyInvisible type change.
     * @tc.desc: Call the on interface with the type of notifyInvisible when the hostBundleName is 'all'.
     */
    it('Acts_QueryFormInfoByPush_On_2100', 0, async function (done) {
      var callbackCount = 0;
      let callback = function () {
        callbackCount++;
      }
      try {
        formHost.on('notifyInvisible', callback, 'all');
      } catch (error) {
        expect().assertFail();
      }

      await commonEvent.createSubscriber(ACTS_FormEvent).then((data) => {
        var subscriber = data;
        var flag = false;
        commonEvent.subscribe(subscriber, subscribeCallBack);
        globalThis.abilityContext.startAbility(FIRST_APP_FIRST_ABILITY_INVISIBLE_WANT, (err) => {
          expect(err.code).assertEqual(0);
        });

        function subscribeCallBack(err, data) {
          console.info('====>Acts_QueryFormInfoByPush_On_2100 subscribeCallBack data:' + JSON.stringify(data));
          flag = true;
          if (data.event == 'ACTS_FirstAppFirstAbilityFirst') {
            try {
              expect(callbackCount).assertEqual(0);
            } catch {}
            try {
              formHost.off('notifyInvisible', callback, 'all');
            } catch (error) {
              expect().assertFail();
            }
            setTimeout(() => {
              commonEvent.unsubscribe(subscriber, unSubscribeCallback);
            }, WAIT_FUNCTION_DONE_TIME);
          }
        }

        function unSubscribeCallback() {
          done();
        }
        setTimeout(() => {
          if (flag == false) {
            expect().assertFail();
            commonEvent.unsubscribe(subscriber, unSubscribeCallback);
          }
        }, CASE_TIME_OUT);
      })
    })

    /*
     * @tc.number: Acts_QueryFormInfoByPush_On_2200
     * @tc.name: Listens to the event of notifyVisible or notifyInvisible type change.
     * @tc.desc: Call the on interface with the type of notifyVisible when the callback is effective.Verifying that
     *           multiple consumers call the visible notification interface can trigger a callback.
     */
    it('Acts_QueryFormInfoByPush_On_2200', 0, async function (done) {
      var callbackCount = 0;
      let callback = function () {
        callbackCount++;
      }
      try {
        formHost.on('notifyVisible', callback);
      } catch (error) {
        expect().assertFail();
      }

      await commonEvent.createSubscriber(ACTS_FormEvent).then((data) => {
        var subscriber = data;
        var flag = false;
        commonEvent.subscribe(subscriber, subscribeCallBack);
        globalThis.abilityContext.startAbility(FIRST_APP_SECOND_ABILITY_VISIBLE_WANT, (err) => {
          expect(err.code).assertEqual(0);
        });
        setTimeout(() => {
          globalThis.abilityContext.startAbility(SECOND_APP_FIRST_ABILITY_VISIBLE_WANT, (err) => {
            expect(err.code).assertEqual(0);
          });
        }, 300);
        var firstFormIdDone = false;
        var secondFormIdDone = false;
        var firstResultDone = false;
        var secondResultDone = false;
        var firstFormId;
        var secondFormId;
        var firstDoneCount = 0;
        function subscribeCallBack(err, data) {
          console.info('====>Acts_QueryFormInfoByPush_On_2200 subscribeCallBack data:' + JSON.stringify(data));
          flag = true;
          if (data.event == 'ACTS_FirstAppSecondAbilityFirst') {
            firstFormId = data.parameters.formId;
            firstFormIdDone = true;
          }
          if (data.event == 'ACTS_SecondAppFirstAbilityFirst') {
            secondFormId = data.parameters.formId;
            secondFormIdDone = true;
          }
          if (firstFormIdDone && secondFormIdDone && (firstDoneCount == 0)) {
            firstDoneCount++;
            let commonEventData = {
              parameters: {
                "firstFormId": firstFormId,
                "secondFormId": secondFormId
              }
            };
            commonEvent.publish("ACTS_AllFormIdGet", commonEventData, () => {});
          }
          if (data.event == 'ACTS_FirstAppSecondAbilitySecond') {
            firstResultDone = true;
          }
          if (data.event == 'ACTS_SecondAppFirstAbilitySecond') {
            secondResultDone = true;
          }
          if (firstResultDone && secondResultDone) {
            try {
              expect(callbackCount).assertEqual(2);
            } catch {}
            try {
              formHost.off('notifyVisible', callback);
            } catch (error) {
              expect().assertFail();
            }
            setTimeout(() => {
              commonEvent.unsubscribe(subscriber, unSubscribeCallback);
            }, WAIT_FUNCTION_DONE_TIME);
          }
        }

        function unSubscribeCallback() {
          done();
        }
        setTimeout(() => {
          if (flag == false) {
            expect().assertFail();
            commonEvent.unsubscribe(subscriber, unSubscribeCallback);
          }
        }, CASE_TIME_OUT);
      })
    })

    /*
     * @tc.number: Acts_QueryFormInfoByPush_On_2300
     * @tc.name: Listens to the event of notifyVisible or notifyInvisible type change.
     * @tc.desc: Call the on interface with the type of notifyInvisible when the callback is effective.Verifying that
     *           multiple consumers call the visible notification interface can trigger a callback.
     */
    it('Acts_QueryFormInfoByPush_On_2300', 0, async function (done) {
      var callbackCount = 0;
      let callback = function () {
        callbackCount++;
      }
      try {
        formHost.on('notifyInvisible', callback);
      } catch (error) {
        expect().assertFail();
      }

      await commonEvent.createSubscriber(ACTS_FormEvent).then((data) => {
        var subscriber = data;
        var flag = false;
        commonEvent.subscribe(subscriber, subscribeCallBack);
        globalThis.abilityContext.startAbility(FIRST_APP_SECOND_ABILITY_INVISIBLE_WANT, (err) => {
          expect(err.code).assertEqual(0);
        });
        setTimeout(() => {
          globalThis.abilityContext.startAbility(SECOND_APP_FIRST_ABILITY_INVISIBLE_WANT, (err) => {
            expect(err.code).assertEqual(0);
          });
        }, 300);
        var firstFormIdDone = false;
        var secondFormIdDone = false;
        var firstResultDone = false;
        var secondResultDone = false;
        var firstFormId;
        var secondFormId;
        var firstDoneCount = 0;
        function subscribeCallBack(err, data) {
          console.info('====>Acts_QueryFormInfoByPush_On_2300 subscribeCallBack data:' + JSON.stringify(data));
          flag = true;
          if (data.event == 'ACTS_FirstAppSecondAbilityFirst') {
            firstFormId = data.parameters.formId;
            firstFormIdDone = true;
          }
          if (data.event == 'ACTS_SecondAppFirstAbilityFirst') {
            secondFormId = data.parameters.formId;
            secondFormIdDone = true;
          }
          if (firstFormIdDone && secondFormIdDone && (firstDoneCount == 0)) {
            firstDoneCount++;
            let commonEventData = {
              parameters: {
                "firstFormId": firstFormId,
                "secondFormId": secondFormId
              }
            };
            commonEvent.publish("ACTS_AllFormIdGet", commonEventData, () => {});
          }
          if (data.event == 'ACTS_FirstAppSecondAbilitySecond') {
            firstResultDone = true;
          }
          if (data.event == 'ACTS_SecondAppFirstAbilitySecond') {
            secondResultDone = true;
          }
          if (firstResultDone && secondResultDone) {
            try {
              expect(callbackCount).assertEqual(2);
            } catch {}
            try {
              formHost.off('notifyInvisible', callback);
            } catch (error) {
              expect().assertFail();
            }
            setTimeout(() => {
              commonEvent.unsubscribe(subscriber, unSubscribeCallback);
            }, WAIT_FUNCTION_DONE_TIME);
          }
        }

        function unSubscribeCallback() {
          done();
        }
        setTimeout(() => {
          if (flag == false) {
            expect().assertFail();
            commonEvent.unsubscribe(subscriber, unSubscribeCallback);
          }
        }, CASE_TIME_OUT);
      })
    })

    /*
     * @tc.number: Acts_QueryFormInfoByPush_Off_4600
     * @tc.name: Cancels listening to the event of notifyVisible or notifyInvisible type change.
     * @tc.desc: Call the off interface with the type of notifyVisible when the hostBundleName is invalid.
     */
    it('Acts_QueryFormInfoByPush_Off_4700', 0, async function (done) {
      var callbackFormId;
      var callbackCount = 0;
      let callback = function (data) {
        callbackFormId = data[0].formId;
        callbackCount++;
        console.log(`====>Acts_QueryFormInfoByPush_Off_4600 callback data: ${JSON.stringify(data)}`);
      }
      try {
        formHost.on('notifyVisible', callback, 'com.example.queryforminfobypushtest');
      } catch (error) {
        expect().assertFail();
      }

      await commonEvent.createSubscriber(ACTS_FormEvent).then((data) => {
        console.info('====>Acts_QueryFormInfoByPush_Off_4600 Create Subscribe');
        var subscriber = data;
        var flag = false;
        commonEvent.subscribe(subscriber, subscribeCallBack);
        globalThis.abilityContext.startAbility(FIRST_APP_THIRD_ABILITY_VISIBLE_WANT, (err) => {
          expect(err.code).assertEqual(0);
        });

        function subscribeCallBack(err, data) {
          console.info('====>Acts_QueryFormInfoByPush_Off_4600 subscribeCallBack data:' + JSON.stringify(data));
          flag = true;
          if (data.event == 'ACTS_FirstAppThirdAbilityFirst') {
            try {
              expect(callbackCount).assertEqual(0);
            } catch {}
            try {
              formHost.off('notifyVisible', callback, 'com.example.queryforminfobypushtestb');
            } catch (error) {
              expect().assertFail();
            }
            commonEvent.publish("ACTS_FirstAppThirdAbilityWait", {}, ()=>{});
          }
          if (data.event == 'ACTS_FirstAppThirdAbilitySecond') {
            try {
              expect(callbackCount).assertEqual(1);
            } catch {}
            try {
              formHost.off('notifyVisible', callback, 'com.example.queryforminfobypushtest');
            } catch (error) {
              expect().assertFail();
            }
            setTimeout(() => {
              commonEvent.unsubscribe(subscriber, unSubscribeCallback);
            }, WAIT_FUNCTION_DONE_TIME);
          }
        }

        function unSubscribeCallback() {
          done();
        }
        setTimeout(() => {
          if (flag == false) {
            expect().assertFail();
            commonEvent.unsubscribe(subscriber, unSubscribeCallback);
          }
        }, CASE_TIME_OUT);
      })
    })

    /*
     * @tc.number: Acts_QueryFormInfoByPushCalledTwo__0100
     * @tc.name: Cancels listening to the event of notifyVisible or notifyInvisible type change.
     * @tc.desc: Verify that callback are not triggered when card visibility does not change.
     */
    it('Acts_QueryFormInfoByPushCalledTwo__0100', 0, async function (done) {
      var callbackFormId;
      var callbackCount = 0;
      let callback = function (data) {
        callbackFormId = data[0].formId;
        callbackCount++;
        console.log(`====>Acts_QueryFormInfoByPushCalledTwo__0100 callback data: ${JSON.stringify(data)}`);
      }
      try {
        formHost.on('notifyVisible', callback, 'com.example.queryforminfobypushtest');
      } catch (error) {
        expect().assertFail();
      }

      await commonEvent.createSubscriber(ACTS_FormEvent).then((data) => {
        console.info('====>Acts_QueryFormInfoByPushCalledTwo__0100 Create Subscribe');
        var subscriber = data;
        var flag = false;
        commonEvent.subscribe(subscriber, subscribeCallBack);
        globalThis.abilityContext.startAbility(FIRST_APP_FIRST_ABILITY_VISIBLE_WANT, (err) => {
          expect(err.code).assertEqual(0);
        });

        function subscribeCallBack(err, data) {
          console.info('====>Acts_QueryFormInfoByPushCalledTwo__0100 subscribeCallBack data:' + JSON.stringify(data));
          flag = true;
          if (data.event == 'ACTS_FirstAppFirstAbilityFirst') {
            try {
              expect(callbackFormId).assertEqual(data.parameters.formId);
            } catch {}
            commonEvent.publish("ACTS_FirstAppFirstAbilityWait", {}, ()=>{});
          }
          if (data.event == 'ACTS_FirstAppFirstAbilitySecond') {
            try {
              expect(callbackCount).assertEqual(1);
            } catch {}
            try {
              formHost.off('notifyVisible', callback, 'com.example.queryforminfobypushtest');
            } catch (error) {
              expect().assertFail();
            }
            setTimeout(() => {
              commonEvent.unsubscribe(subscriber, unSubscribeCallback);
            }, WAIT_FUNCTION_DONE_TIME);
          }
        }

        function unSubscribeCallback() {
          done();
        }
        setTimeout(() => {
          if (flag == false) {
            expect().assertFail();
            commonEvent.unsubscribe(subscriber, unSubscribeCallback);
          }
        }, CASE_TIME_OUT);
      })
    })

    /*
     * @tc.number: Acts_QueryFormInfoByPushCalledTwo__0200
     * @tc.name: Cancels listening to the event of notifyVisible or notifyInvisible type change.
     * @tc.desc: Verify that callback are not triggered when card visibility does not change.
     */
    it('Acts_QueryFormInfoByPushCalledTwo__0200', 0, async function (done) {
      var callbackFormId;
      var callbackCount = 0;
      let callback = function (data) {
        callbackFormId = data[0].formId;
        callbackCount++;
        console.log(`====>Acts_QueryFormInfoByPushCalledTwo__0200 callback data: ${JSON.stringify(data)}`);
      }
      try {
        formHost.on('notifyInvisible', callback, 'com.example.queryforminfobypushtest');
      } catch (error) {
        expect().assertFail();
      }

      await commonEvent.createSubscriber(ACTS_FormEvent).then((data) => {
        console.info('====>Acts_QueryFormInfoByPushCalledTwo__0200 Create Subscribe');
        var subscriber = data;
        var flag = false;
        commonEvent.subscribe(subscriber, subscribeCallBack);
        globalThis.abilityContext.startAbility(FIRST_APP_FIRST_ABILITY_INVISIBLE_WANT, (err) => {
          expect(err.code).assertEqual(0);
        });

        function subscribeCallBack(err, data) {
          console.info('====>Acts_QueryFormInfoByPushCalledTwo__0200 subscribeCallBack data:' + JSON.stringify(data));
          flag = true;
          if (data.event == 'ACTS_FirstAppFirstAbilityFirst') {
            try {
              expect(callbackFormId).assertEqual(data.parameters.formId);
            } catch {}
            commonEvent.publish("ACTS_FirstAppFirstAbilityWait", {}, ()=>{});
          }
          if (data.event == 'ACTS_FirstAppFirstAbilitySecond') {
            try {
              expect(callbackCount).assertEqual(1);
            } catch {}
            try {
              formHost.off('notifyInvisible', callback, 'com.example.queryforminfobypushtest');
            } catch (error) {
              expect().assertFail();
            }
            setTimeout(() => {
              commonEvent.unsubscribe(subscriber, unSubscribeCallback);
            }, WAIT_FUNCTION_DONE_TIME);
          }
        }

        function unSubscribeCallback() {
          done();
        }
        setTimeout(() => {
          if (flag == false) {
            expect().assertFail();
            commonEvent.unsubscribe(subscriber, unSubscribeCallback);
          }
        }, CASE_TIME_OUT);
      })
    })
  })
}