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
const WAIT_FUNCTION_DONE_TIME = 200;
var ACTS_FormEvent = {
  events: ['ACTS_FirstAppFirstAbilityFirst', 'ACTS_FirstAppFirstAbilitySecond','ACTS_FirstAppSecondAbilityFirst',
    'ACTS_FirstAppSecondAbilitySecond', 'ACTS_FirstAppSecondAbilityThird', 'ACTS_SecondAppFirstAbilityFirst',
    'ACTS_SecondAppFirstAbilitySecond', 'ACTS_SecondAppFirstAbilityThird', 'ACTS_FirstAppSecondModuleFirst',
    'ACTS_FirstAppSecondModuleSecond']
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
      }, 1000)
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
      try {
        formHost.on(null, function () {}, 'com.example.queryforminfobypushtest');
      } catch (error) {
        expect(error.code).assertEqual(401);
      }
    })

    /*
     * @tc.number: Acts_QueryFormInfoByPush_On_0200
     * @tc.name: Listens to the event of notifyVisible or notifyInvisible type change.
     * @tc.desc: Call the on interface with the type is undefined.
     */
    it('Acts_QueryFormInfoByPush_On_0200', 0, function () {
      try {
        formHost.on(undefined, function () {}, 'com.example.queryforminfobypushtest');
      } catch (error) {
        expect(error.code).assertEqual(401);
      }
    })

    /*
     * @tc.number: Acts_QueryFormInfoByPush_On_0300
     * @tc.name: Listens to the event of notifyVisible or notifyInvisible type change.
     * @tc.desc: Call the on interface with the type of notifyVisible when the callback is null.
     */
    it('Acts_QueryFormInfoByPush_On_0300', 0, function () {
      try {
        formHost.on('notifyVisible', null, 'com.example.queryforminfobypushtest');
      } catch (error) {
        expect(error.code).assertEqual(401);
      }
    })

    /*
     * @tc.number: Acts_QueryFormInfoByPush_On_0400
     * @tc.name: Listens to the event of notifyVisible or notifyInvisible type change.
     * @tc.desc: Call the on interface with the type of notifyVisible when the callback is undefined.
     */
    it('Acts_QueryFormInfoByPush_On_0400', 0, function () {
      try {
        formHost.on('notifyVisible', undefined, 'com.example.queryforminfobypushtest');
      } catch (error) {
        expect(error.code).assertEqual(401);
      }
    })

    /*
     * @tc.number: Acts_QueryFormInfoByPush_On_0500
     * @tc.name: Listens to the event of notifyVisible or notifyInvisible type change.
     * @tc.desc: Call the on interface with the type of notifyVisible when the hostBundleName is empty string.
     */
    it('Acts_QueryFormInfoByPush_On_0500', 0, function () {
      try {
        formHost.on('notifyVisible', function () {}, '');
      } catch (error) {
        expect(error.code).assertEqual(401);
      }
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
            expect(callbackCount).assertEqual(0);
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
            expect(callbackFormId).assertEqual(data.parameters.formId);
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
      try {
        formHost.on('notifyInvisible', null, 'com.example.queryforminfobypushtest');
      } catch (error) {
        expect(error.code).assertEqual(401);
      }
    })

    /*
     * @tc.number: Acts_QueryFormInfoByPush_On_1200
     * @tc.name: Listens to the event of notifyVisible or notifyInvisible type change.
     * @tc.desc: Call the on interface with the type of notifyInvisible when the callback is undefined.
     */
    it('Acts_QueryFormInfoByPush_On_1200', 0, function () {
      try {
        formHost.on('notifyInvisible', undefined, 'com.example.queryforminfobypushtest');
      } catch (error) {
        expect(error.code).assertEqual(401);
      }
    })

    /*
     * @tc.number: Acts_QueryFormInfoByPush_On_1300
     * @tc.name: Listens to the event of notifyVisible or notifyInvisible type change.
     * @tc.desc: Call the on interface with the type of notifyInvisible when the hostBundleName is empty string.
     */
    it('Acts_QueryFormInfoByPush_On_1300', 0, function () {
      try {
        formHost.on('notifyInvisible', function () {}, '');
      } catch (error) {
        expect(error.code).assertEqual(401);
      }
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
            expect(callbackCount).assertEqual(0);
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
        console.log(`====>Acts_QueryFormInfoByPush_On_1500 firstTestCallback data: ${JSON.stringify(data)}`);
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
        console.log(`====>Acts_QueryFormInfoByPush_On_1600 firstTestCallback data: ${JSON.stringify(data)}`);
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
            expect(callbackFormId).assertEqual(data.parameters.formId);
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
     * @tc.name: Listens to the event of notifyVisible or notifyInvisible type change.
     * @tc.desc: Call the on interface with the type of notifyVisible.
     */
    it('Acts_QueryFormInfoByPush_Off_0100', 0, async function (done) {
      var callbackFormId;
      var callbackCount = 0;
      let callback = function (data) {
        callbackFormId = data[0].formId;
        callbackCount++;
        console.log(`====>Acts_QueryFormInfoByPush_Off_0100 firstTestCallback data: ${JSON.stringify(data)}`);
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
            expect(callbackFormId).assertEqual(data.parameters.formId);
            try {
              formHost.off('notifyVisible', callback, 'com.example.queryforminfobypushtest');
            } catch (error) {
              expect().assertFail();
            }
            commonEvent.publish("ACTS_FirstAppFirstAbilityWait", {}, ()=>{});
          }
          if (data.event == 'ACTS_FirstAppFirstAbilitySecond') {
            expect(callbackCount).assertEqual(1);
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
     * @tc.number: Acts_QueryFormInfoByPush_Off_0200
     * @tc.name: Listens to the event of notifyVisible or notifyInvisible type change.
     * @tc.desc: Call the on interface with the type of notifyVisible.
     */
    it('Acts_QueryFormInfoByPush_Off_0200', 0, async function (done) {
      var callbackFormId;
      var callbackCount = 0;
      let callback = function (data) {
        callbackFormId = data[0].formId;
        callbackCount++;
        console.log(`====>Acts_QueryFormInfoByPush_Off_0200 firstTestCallback data: ${JSON.stringify(data)}`);
      }

      try {
        formHost.on('notifyVisible', callback, 'com.example.queryforminfobypushtest');
      } catch (error) {
        expect().assertFail();
      }

      await commonEvent.createSubscriber(ACTS_FormEvent).then((data) => {
        console.info('====>Acts_QueryFormInfoByPush_Off_0200 Create Subscribe');
        var subscriber = data;
        var flag = false;
        commonEvent.subscribe(subscriber, subscribeCallBack);
        globalThis.abilityContext.startAbility(FIRST_APP_FIRST_ABILITY_VISIBLE_WANT, (err) => {
          expect(err.code).assertEqual(0);
        });

        function subscribeCallBack(err, data) {
          console.info('====>Acts_QueryFormInfoByPush_Off_0200 subscribeCallBack data:' + JSON.stringify(data));
          flag = true;
          if (data.event == 'ACTS_FirstAppFirstAbilityFirst') {
            expect(callbackFormId).assertEqual(data.parameters.formId);
            try {
              formHost.off('notifyVisible', 'com.example.queryforminfobypushtest');
            } catch (error) {
              expect().assertFail();
            }
            commonEvent.publish("ACTS_FirstAppFirstAbilityWait", {}, ()=>{});
          }
          if (data.event == 'ACTS_FirstAppFirstAbilitySecond') {
            expect(callbackCount).assertEqual(1);
            setTimeout(() => {
              commonEvent.unsubscribe(subscriber, unSubscribeCallback);
            }, WAIT_FUNCTION_DONE_TIME)
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
        }, CASE_TIME_OUT)
      })
    })

    it('Acts_QueryFormInfoByPush_Off_0300', 0, async function (done) {
      var callbackFormId;
      var callbackCount = 0;
      let callback = function (data) {
        callbackFormId = data[0].formId;
        callbackCount++;
        console.log(`====>Acts_QueryFormInfoByPush_Off_0300 firstTestCallback data: ${JSON.stringify(data)}`);
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
            expect(callbackFormId).assertEqual(data.parameters.formId);
            try {
              formHost.off('notifyVisible', callback);
            } catch (error) {
              expect().assertFail();
            }
            commonEvent.publish("ACTS_FirstAppFirstAbilityWait", {}, ()=>{});
          }
          if (data.event == 'ACTS_FirstAppFirstAbilitySecond') {
            expect(callbackCount).assertEqual(1);
            setTimeout(() => {
              commonEvent.unsubscribe(subscriber, unSubscribeCallback);
            }, WAIT_FUNCTION_DONE_TIME)
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
        }, CASE_TIME_OUT)
      })
    })

    it('Acts_QueryFormInfoByPush_Off_0400', 0, async function (done) {
      var callbackFormId;
      var callbackCount = 0;
      let callback = function (data) {
        callbackFormId = data[0].formId;
        callbackCount++;
        console.log(`====>Acts_QueryFormInfoByPush_Off_0400 firstTestCallback data: ${JSON.stringify(data)}`);
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
            expect(callbackFormId).assertEqual(data.parameters.formId);
            try {
              formHost.off('notifyVisible');
            } catch (error) {
              expect().assertFail();
            }
            commonEvent.publish("ACTS_FirstAppFirstAbilityWait", {}, ()=>{});
          }
          if (data.event == 'ACTS_FirstAppFirstAbilitySecond') {
            expect(callbackCount).assertEqual(1);
            setTimeout(() => {
              commonEvent.unsubscribe(subscriber, unSubscribeCallback);
            }, WAIT_FUNCTION_DONE_TIME)
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
        }, CASE_TIME_OUT)
      })
    })

    it('Acts_QueryFormInfoByPush_Off_0600', 0, async function (done) {
      var callbackFormId = '0';
      var callbackCount = 0;
      let callback = function (data) {
        callbackFormId = data[0].formId;
        callbackCount++;
        console.log(`====>Acts_QueryFormInfoByPush_Off_0600 firstTestCallback data: ${JSON.stringify(data)}`);
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
            expect(callbackFormId).assertEqual(data.parameters.formId);
            try {
              formHost.off('notifyInvisible', callback, 'com.example.queryforminfobypushtest');
            } catch (error) {
              expect().assertFail();
            }
            commonEvent.publish("ACTS_FirstAppFirstAbilityWait", {}, ()=>{});
          }
          if (data.event == 'ACTS_FirstAppFirstAbilitySecond') {
            expect(callbackCount).assertEqual(1);
            setTimeout(() => {
              commonEvent.unsubscribe(subscriber, unSubscribeCallback);
            }, WAIT_FUNCTION_DONE_TIME)
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
        }, CASE_TIME_OUT)
      })
    })

    it('Acts_QueryFormInfoByPush_Off_0700', 0, async function (done) {
      var callbackFormId;
      var callbackCount = 0;
      let callback = function (data) {
        callbackFormId = data[0].formId;
        callbackCount++;
        console.log(`====>Acts_QueryFormInfoByPush_Off_0700 firstTestCallback data: ${JSON.stringify(data)}`);
      }

      try {
        formHost.on('notifyInvisible', callback, 'com.example.queryforminfobypushtest');
      } catch (error) {
        expect().assertFail();
      }

      await commonEvent.createSubscriber(ACTS_FormEvent).then((data) => {
        console.info('====>Acts_QueryFormInfoByPush_Off_0700 Create Subscribe');
        var subscriber = data;
        var flag = false;
        commonEvent.subscribe(subscriber, subscribeCallBack);
        globalThis.abilityContext.startAbility(FIRST_APP_FIRST_ABILITY_INVISIBLE_WANT, (err) => {
          expect(err.code).assertEqual(0);
        });

        function subscribeCallBack(err, data) {
          console.info('====>Acts_QueryFormInfoByPush_Off_0700 subscribeCallBack data:' + JSON.stringify(data));
          flag = true;
          if (data.event == 'ACTS_FirstAppFirstAbilityFirst') {
            expect(callbackFormId).assertEqual(data.parameters.formId);
            try {
              formHost.off('notifyInvisible', 'com.example.queryforminfobypushtest');
            } catch (error) {
              expect().assertFail();
            }
            commonEvent.publish("ACTS_FirstAppFirstAbilityWait", {}, ()=>{});
          }
          if (data.event == 'ACTS_FirstAppFirstAbilitySecond') {
            expect(callbackCount).assertEqual(1);
            setTimeout(() => {
              commonEvent.unsubscribe(subscriber, unSubscribeCallback);
            }, WAIT_FUNCTION_DONE_TIME)
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
        }, CASE_TIME_OUT)
      })
    })

    it('Acts_QueryFormInfoByPush_Off_0800', 0, async function (done) {
      var callbackFormId;
      var callbackCount = 0;
      let callback = function (data) {
        callbackFormId = data[0].formId;
        callbackCount++;
        console.log(`====>Acts_QueryFormInfoByPush_Off_0800 firstTestCallback data: ${JSON.stringify(data)}`);
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
            expect(callbackFormId).assertEqual(data.parameters.formId);
            try {
              formHost.off('notifyInvisible', callback);
            } catch (error) {
              expect().assertFail();
            }
            commonEvent.publish("ACTS_FirstAppFirstAbilityWait", {}, ()=>{});
          }
          if (data.event == 'ACTS_FirstAppFirstAbilitySecond') {
            expect(callbackCount).assertEqual(1);
            setTimeout(() => {
              commonEvent.unsubscribe(subscriber, unSubscribeCallback);
            }, WAIT_FUNCTION_DONE_TIME)
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
        }, CASE_TIME_OUT)
      })
    })

    it('Acts_QueryFormInfoByPush_Off_0900', 0, async function (done) {
      var callbackFormId;
      var callbackCount = 0;
      let callback = function (data) {
        callbackFormId = data[0].formId;
        callbackCount++;
        console.log(`====>Acts_QueryFormInfoByPush_Off_0900 firstTestCallback data: ${JSON.stringify(data)}`);
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
            expect(callbackFormId).assertEqual(data.parameters.formId);
            try {
              formHost.off('notifyInvisible');
            } catch (error) {
              expect().assertFail();
            }
            commonEvent.publish("ACTS_FirstAppFirstAbilityWait", {}, ()=>{});
          }
          if (data.event == 'ACTS_FirstAppFirstAbilitySecond') {
            expect(callbackCount).assertEqual(1);
            setTimeout(() => {
              commonEvent.unsubscribe(subscriber, unSubscribeCallback);
            }, WAIT_FUNCTION_DONE_TIME)
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
        }, CASE_TIME_OUT)
      })
    })

    it('Acts_QueryFormInfoByPush_Off_1100', 0, async function (done) {
      var callbackFormId;
      let callback = function (data) {
        callbackFormId = data[0].formId;
        console.log(`====>Acts_QueryFormInfoByPush_Off_1100 firstTestCallback data: ${JSON.stringify(data)}`);
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
            expect(callbackFormId).assertEqual(data.parameters.formId);
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
            }, WAIT_FUNCTION_DONE_TIME)
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
        }, CASE_TIME_OUT)
      })
    })

    it('Acts_QueryFormInfoByPush_Off_1200', 0, async function (done) {
      var callbackFormId;
      let callback = function (data) {
        callbackFormId = data[0].formId;
        console.log(`====>Acts_QueryFormInfoByPush_Off_1200 firstTestCallback data: ${JSON.stringify(data)}`);
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
            expect(callbackFormId).assertEqual(data.parameters.formId);
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
            }, WAIT_FUNCTION_DONE_TIME)
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
        }, CASE_TIME_OUT)
      })
    })

    it('Acts_QueryFormInfoByPush_Off_1300', 0, async function (done) {
      var callbackFormId;
      var callbackCount = 0;
      let callback = function (data) {
        callbackFormId = data[0].formId;
        callbackCount++;
        console.log(`====>Acts_QueryFormInfoByPush_Off_1300 firstTestCallback data: ${JSON.stringify(data)}`);
      }

      try {
        formHost.on('notifyVisible', callback, 'com.example.queryforminfobypushtest');
      } catch (error) {
        expect().assertFail();
      }

      await commonEvent.createSubscriber(ACTS_FormEvent).then((data) => {
        console.info('====>Acts_QueryFormInfoByPush_Off_1300 Create Subscribe');
        var subscriber = data;
        var flag = false;
        commonEvent.subscribe(subscriber, subscribeCallBack);
        globalThis.abilityContext.startAbility(FIRST_APP_FIRST_ABILITY_VISIBLE_WANT, (err) => {
          expect(err.code).assertEqual(0);
        });

        function subscribeCallBack(err, data) {
          console.info('====>Acts_QueryFormInfoByPush_Off_1300 subscribeCallBack data:' + JSON.stringify(data));
          flag = true;
          if (data.event == 'ACTS_FirstAppFirstAbilityFirst') {
            expect(callbackFormId).assertEqual(data.parameters.formId);
            try {
              formHost.off('notifyVisible', '', 'com.example.queryforminfobypushtest');
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
            }, WAIT_FUNCTION_DONE_TIME)
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
        }, CASE_TIME_OUT)
      })
    })

    it('Acts_QueryFormInfoByPush_Off_1400', 0, async function (done) {
      var callbackFormId;
      let callback = function (data) {
        callbackFormId = data[0].formId;
        console.log(`====>Acts_QueryFormInfoByPush_Off_1400 firstTestCallback data: ${JSON.stringify(data)}`);
      }

      try {
        formHost.on('notifyVisible', callback, 'com.example.queryforminfobypushtest');
      } catch (error) {
        expect().assertFail();
      }

      await commonEvent.createSubscriber(ACTS_FormEvent).then((data) => {
        console.info('====>Acts_QueryFormInfoByPush_Off_1400 Create Subscribe');
        var subscriber = data;
        var flag = false;
        commonEvent.subscribe(subscriber, subscribeCallBack);
        globalThis.abilityContext.startAbility(FIRST_APP_FIRST_ABILITY_VISIBLE_WANT, (err) => {
          expect(err.code).assertEqual(0);
        });

        function subscribeCallBack(err, data) {
          console.info('====>Acts_QueryFormInfoByPush_Off_1400 subscribeCallBack data:' + JSON.stringify(data));
          flag = true;
          if (data.event == 'ACTS_FirstAppFirstAbilityFirst') {
            expect(callbackFormId).assertEqual(data.parameters.formId);
            try {
              formHost.off('notifyVisible', 'abcd', 'com.example.queryforminfobypushtest');
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
            }, WAIT_FUNCTION_DONE_TIME)
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
        }, CASE_TIME_OUT)
      })
    })

    it('Acts_QueryFormInfoByPush_Off_1500', 0, async function (done) {
      var callbackFormId;
      var callbackCount = 0;
      let callback = function (data) {
        callbackFormId = data[0].formId;
        callbackCount++;
        console.log(`====>Acts_QueryFormInfoByPush_Off_1500 firstTestCallback data: ${JSON.stringify(data)}`);
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
            expect(callbackFormId).assertEqual(data.parameters.formId);
            try {
              formHost.off('notifyVisible', null, 'com.example.queryforminfobypushtest');
            } catch (error) {
              expect().assertFail();
            }
            commonEvent.publish("ACTS_FirstAppFirstAbilityWait", {}, ()=>{});
          }
          if (data.event == 'ACTS_FirstAppFirstAbilitySecond') {
            expect(callbackCount).assertEqual(1);
            setTimeout(() => {
              commonEvent.unsubscribe(subscriber, unSubscribeCallback);
            }, WAIT_FUNCTION_DONE_TIME)
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
        }, CASE_TIME_OUT)
      })
    })

    it('Acts_QueryFormInfoByPush_Off_1600', 0, async function (done) {
      var callbackFormId;
      var callbackCount = 0;
      let callback = function (data) {
        callbackFormId = data[0].formId;
        callbackCount++
        console.log(`====>Acts_QueryFormInfoByPush_Off_1600 firstTestCallback data: ${JSON.stringify(data)}`);
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
            expect(callbackFormId).assertEqual(data.parameters.formId);
            try {
              formHost.off('notifyVisible', undefined, 'com.example.queryforminfobypushtest');
            } catch (error) {
              expect().assertFail();
            }
            commonEvent.publish("ACTS_FirstAppFirstAbilityWait", {}, ()=>{});
          }
          if (data.event == 'ACTS_FirstAppFirstAbilitySecond') {
            expect(callbackCount).assertEqual(1);
            setTimeout(() => {
              commonEvent.unsubscribe(subscriber, unSubscribeCallback);
            }, WAIT_FUNCTION_DONE_TIME)
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
        }, CASE_TIME_OUT)
      })
    })

    it('Acts_QueryFormInfoByPush_Off_1700', 0, async function (done) {
      var callbackFormId;
      let callback = function (data) {
        callbackFormId = data[0].formId;
        console.log(`====>Acts_QueryFormInfoByPush_Off_1700 firstTestCallback data: ${JSON.stringify(data)}`);
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
            expect(callbackFormId).assertEqual(data.parameters.formId);
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
            }, WAIT_FUNCTION_DONE_TIME)
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
        }, CASE_TIME_OUT)
      })
    })

    it('Acts_QueryFormInfoByPush_Off_1800', 0, async function (done) {
      var callbackFormId;
      var callbackCount = 0;
      let callback = function (data) {
        callbackFormId = data[0].formId;
        callbackCount++;
        console.log(`====>Acts_QueryFormInfoByPush_Off_1800 firstTestCallback data: ${JSON.stringify(data)}`);
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
        globalThis.abilityContext.startAbility(FIRST_APP_FIRST_ABILITY_VISIBLE_WANT, (err) => {
          expect(err.code).assertEqual(0);
        });

        function subscribeCallBack(err, data) {
          console.info('====>Acts_QueryFormInfoByPush_Off_1800 subscribeCallBack data:' + JSON.stringify(data));
          flag = true;
          if (data.event == 'ACTS_FirstAppFirstAbilityFirst') {
            expect(callbackFormId).assertEqual(data.parameters.formId);
            try {
              formHost.off('notifyVisible', callback, 'abcd');
            } catch (error) {
              expect().assertFail();
            }
            commonEvent.publish("ACTS_FirstAppFirstAbilityWait", {}, ()=>{});
          }
          if (data.event == 'ACTS_FirstAppFirstAbilitySecond') {
            console.info('====>Acts_QueryFormInfoByPush_Off_1800 ljh 415543 data:' + JSON.stringify(callbackCount));
            expect(callbackCount).assertEqual(2);
            try {
              formHost.off('notifyVisible', callback, 'com.example.queryforminfobypushtest');
            } catch (error) {
              expect().assertFail();
            }
            setTimeout(() => {
              commonEvent.unsubscribe(subscriber, unSubscribeCallback);
            }, WAIT_FUNCTION_DONE_TIME)
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
        }, CASE_TIME_OUT)
      })
    })

    it('Acts_QueryFormInfoByPush_Off_1900', 0, async function (done) {
      var callbackFormId;
      var callbackCount = 0;
      let callback = function (data) {
        callbackFormId = data[0].formId;
        callbackCount++;
        console.log(`====>Acts_QueryFormInfoByPush_Off_1900 firstTestCallback data: ${JSON.stringify(data)}`);
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
        globalThis.abilityContext.startAbility(FIRST_APP_FIRST_ABILITY_VISIBLE_WANT, (err) => {
          expect(err.code).assertEqual(0);
        });

        function subscribeCallBack(err, data) {
          console.info('====>Acts_QueryFormInfoByPush_Off_1900 subscribeCallBack data:' + JSON.stringify(data));
          flag = true;
          if (data.event == 'ACTS_FirstAppFirstAbilityFirst') {
            expect(callbackFormId).assertEqual(data.parameters.formId);
            try {
              formHost.off('notifyVisible', callback, null);
            } catch (error) {
              expect().assertFail();
            }
            commonEvent.publish("ACTS_FirstAppFirstAbilityWait", {}, ()=>{});
          }
          if (data.event == 'ACTS_FirstAppFirstAbilitySecond') {
            expect(callbackCount).assertEqual(2);
            try {
              formHost.off('notifyVisible', callback, 'com.example.queryforminfobypushtest');
            } catch (error) {
              expect().assertFail();
            }
            setTimeout(() => {
              commonEvent.unsubscribe(subscriber, unSubscribeCallback);
            }, WAIT_FUNCTION_DONE_TIME)
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
        }, CASE_TIME_OUT)
      })
    })

    it('Acts_QueryFormInfoByPush_Off_2000', 0, async function (done) {
      var callbackFormId;
      var callbackCount = 0;
      let callback = function (data) {
        callbackFormId = data[0].formId;
        callbackCount++;
        console.log(`====>Acts_QueryFormInfoByPush_Off_2000 firstTestCallback data: ${JSON.stringify(data)}`);
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
        globalThis.abilityContext.startAbility(FIRST_APP_FIRST_ABILITY_VISIBLE_WANT, (err) => {
          expect(err.code).assertEqual(0);
        });

        function subscribeCallBack(err, data) {
          console.info('====>Acts_QueryFormInfoByPush_Off_2000 subscribeCallBack data:' + JSON.stringify(data));
          flag = true;
          if (data.event == 'ACTS_FirstAppFirstAbilityFirst') {
            expect(callbackFormId).assertEqual(data.parameters.formId);
            try {
              formHost.off('notifyVisible', callback, undefined);
            } catch (error) {
              expect().assertFail();
            }
            commonEvent.publish("ACTS_FirstAppFirstAbilityWait", {}, ()=>{});
          }
          if (data.event == 'ACTS_FirstAppFirstAbilitySecond') {
            expect(callbackCount).assertEqual(2);
            try {
              formHost.off('notifyVisible', callback, 'com.example.queryforminfobypushtest');
            } catch (error) {
              expect().assertFail();
            }
            setTimeout(() => {
              commonEvent.unsubscribe(subscriber, unSubscribeCallback);
            }, WAIT_FUNCTION_DONE_TIME)
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
        }, CASE_TIME_OUT)
      })
    })

    it('Acts_QueryFormInfoByPush_Off_2300', 0, async function (done) {
      var callbackFormId;
      var callbackCount = 0;
      let callback = function (data) {
        callbackFormId = data[0].formId;
        callbackCount++;
        console.log(`====>Acts_QueryFormInfoByPush_Off_2300 firstTestCallback data: ${JSON.stringify(data)}`);
      }

      try {
        formHost.on('notifyInvisible', callback, 'com.example.queryforminfobypushtest');
      } catch (error) {
        expect().assertFail();
      }

      await commonEvent.createSubscriber(ACTS_FormEvent).then((data) => {
        console.info('====>Acts_QueryFormInfoByPush_Off_2300 Create Subscribe');
        var subscriber = data;
        var flag = false;
        commonEvent.subscribe(subscriber, subscribeCallBack);
        globalThis.abilityContext.startAbility(FIRST_APP_FIRST_ABILITY_INVISIBLE_WANT, (err) => {
          expect(err.code).assertEqual(0);
        });

        function subscribeCallBack(err, data) {
          console.info('====>Acts_QueryFormInfoByPush_Off_2300 subscribeCallBack data:' + JSON.stringify(data));
          flag = true;
          if (data.event == 'ACTS_FirstAppFirstAbilityFirst') {
            expect(callbackFormId).assertEqual(data.parameters.formId);
            try {
              formHost.off('notifyInvisible', '', 'com.example.queryforminfobypushtest');
            } catch (error) {
              expect(error.code).assertEqual(401);
            }
            try {
              formHost.off('notifyInvisible', callback, 'com.example.queryforminfobypushtest');
            } catch (error) {
              expect().assertFail();
            }
            setTimeout(() => {
              commonEvent.unsubscribe(subscriber, unSubscribeCallback);
            }, WAIT_FUNCTION_DONE_TIME)
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
        }, CASE_TIME_OUT)
      })
    })

    it('Acts_QueryFormInfoByPush_Off_2400', 0, async function (done) {
      var callbackFormId;
      var callbackCount = 0;
      let callback = function (data) {
        callbackFormId = data[0].formId;
        callbackCount++;
        console.log(`====>Acts_QueryFormInfoByPush_Off_2400 firstTestCallback data: ${JSON.stringify(data)}`);
      }

      try {
        formHost.on('notifyInvisible', callback, 'com.example.queryforminfobypushtest');
      } catch (error) {
        expect().assertFail();
      }

      await commonEvent.createSubscriber(ACTS_FormEvent).then((data) => {
        console.info('====>Acts_QueryFormInfoByPush_Off_2400 Create Subscribe');
        var subscriber = data;
        var flag = false;
        commonEvent.subscribe(subscriber, subscribeCallBack);
        globalThis.abilityContext.startAbility(FIRST_APP_FIRST_ABILITY_INVISIBLE_WANT, (err) => {
          expect(err.code).assertEqual(0);
        });

        function subscribeCallBack(err, data) {
          console.info('====>Acts_QueryFormInfoByPush_Off_2400 subscribeCallBack data:' + JSON.stringify(data));
          flag = true;
          if (data.event == 'ACTS_FirstAppFirstAbilityFirst') {
            expect(callbackFormId).assertEqual(data.parameters.formId);
            try {
              formHost.off('notifyInvisible', 'abcd', 'com.example.queryforminfobypushtest');
            } catch (error) {
              expect(error.code).assertEqual(401);
            }
            try {
              formHost.off('notifyInvisible', callback, 'com.example.queryforminfobypushtest');
            } catch (error) {
              expect().assertFail();
            }
            setTimeout(() => {
              commonEvent.unsubscribe(subscriber, unSubscribeCallback);
            }, WAIT_FUNCTION_DONE_TIME)
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
        }, CASE_TIME_OUT)
      })
    })

    it('Acts_QueryFormInfoByPush_Off_2500', 0, async function (done) {
      var callbackFormId;
      var callbackCount = 0;
      let callback = function (data) {
        callbackFormId = data[0].formId;
        callbackCount++;
        console.log(`====>Acts_QueryFormInfoByPush_Off_2500 firstTestCallback data: ${JSON.stringify(data)}`);
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
            expect(callbackFormId).assertEqual(data.parameters.formId);
            try {
              formHost.off('notifyInvisible', null, 'com.example.queryforminfobypushtest');
            } catch (error) {
              expect().assertFail();
            }
            commonEvent.publish("ACTS_FirstAppFirstAbilityWait", {}, ()=>{});
          }
          if (data.event == 'ACTS_FirstAppFirstAbilitySecond') {
            expect(callbackCount).assertEqual(1);
            setTimeout(() => {
              commonEvent.unsubscribe(subscriber, unSubscribeCallback);
            }, WAIT_FUNCTION_DONE_TIME)
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
        }, CASE_TIME_OUT)
      })
    })

    it('Acts_QueryFormInfoByPush_Off_2600', 0, async function (done) {
      var callbackFormId;
      var callbackCount = 0;
      let callback = function (data) {
        callbackFormId = data[0].formId;
        callbackCount++;
        console.log(`====>Acts_QueryFormInfoByPush_Off_2600 firstTestCallback data: ${JSON.stringify(data)}`);
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
            expect(callbackFormId).assertEqual(data.parameters.formId);
            try {
              formHost.off('notifyInvisible', undefined, 'com.example.queryforminfobypushtest');
            } catch (error) {
              expect().assertFail();
            }
            commonEvent.publish("ACTS_FirstAppFirstAbilityWait", {}, ()=>{});
          }
          if (data.event == 'ACTS_FirstAppFirstAbilitySecond') {
            expect(callbackCount).assertEqual(1);
            setTimeout(() => {
              commonEvent.unsubscribe(subscriber, unSubscribeCallback);
            }, WAIT_FUNCTION_DONE_TIME)
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
        }, CASE_TIME_OUT)
      })
    })

    it('Acts_QueryFormInfoByPush_Off_2700', 0, async function (done) {
      var callbackFormId;
      let callback = function (data) {
        callbackFormId = data[0].formId;
        console.log(`====>Acts_QueryFormInfoByPush_Off_2700 firstTestCallback data: ${JSON.stringify(data)}`);
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
            expect(callbackFormId).assertEqual(data.parameters.formId);
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
            }, WAIT_FUNCTION_DONE_TIME)
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
        }, CASE_TIME_OUT)
      })
    })

    it('Acts_QueryFormInfoByPush_Off_2800', 0, async function (done) {
      var callbackFormId;
      var callbackCount = 0;
      let callback = function (data) {
        callbackFormId = data[0].formId;
        callbackCount++;
        console.log(`====>Acts_QueryFormInfoByPush_Off_2800 firstTestCallback data: ${JSON.stringify(data)}`);
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
        globalThis.abilityContext.startAbility(FIRST_APP_FIRST_ABILITY_INVISIBLE_WANT, (err) => {
          expect(err.code).assertEqual(0);
        });

        function subscribeCallBack(err, data) {
          console.info('====>Acts_QueryFormInfoByPush_Off_2800 subscribeCallBack data:' + JSON.stringify(data));
          flag = true;
          if (data.event == 'ACTS_FirstAppFirstAbilityFirst') {
            expect(callbackFormId).assertEqual(data.parameters.formId);
            try {
              formHost.off('notifyInvisible', callback, 'abcd');
            } catch (error) {
              expect().assertFail();
            }
            commonEvent.publish("ACTS_FirstAppFirstAbilityWait", {}, ()=>{});
          }
          if (data.event == 'ACTS_FirstAppFirstAbilitySecond') {
            expect(callbackCount).assertEqual(2);
            try {
              formHost.off('notifyInvisible', callback, 'com.example.queryforminfobypushtest');
            } catch (error) {
              expect().assertFail();
            }
            setTimeout(() => {
              commonEvent.unsubscribe(subscriber, unSubscribeCallback);
            }, WAIT_FUNCTION_DONE_TIME)
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
        }, CASE_TIME_OUT)
      })
    })

    it('Acts_QueryFormInfoByPush_Off_2900', 0, async function (done) {
      var callbackFormId;
      var callbackCount = 0;
      let callback = function (data) {
        callbackFormId = data[0].formId;
        callbackCount++;
        console.log(`====>Acts_QueryFormInfoByPush_Off_2900 firstTestCallback data: ${JSON.stringify(data)}`);
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
        globalThis.abilityContext.startAbility(FIRST_APP_FIRST_ABILITY_INVISIBLE_WANT, (err) => {
          expect(err.code).assertEqual(0);
        });

        function subscribeCallBack(err, data) {
          console.info('====>Acts_QueryFormInfoByPush_Off_2900 subscribeCallBack data:' + JSON.stringify(data));
          flag = true;
          if (data.event == 'ACTS_FirstAppFirstAbilityFirst') {
            expect(callbackFormId).assertEqual(data.parameters.formId);
            try {
              formHost.off('notifyInvisible', callback, null);
            } catch (error) {
              expect().assertFail();
            }
            commonEvent.publish("ACTS_FirstAppFirstAbilityWait", {}, ()=>{});
          }
          if (data.event == 'ACTS_FirstAppFirstAbilitySecond') {
            expect(callbackCount).assertEqual(2);
            try {
              formHost.off('notifyInvisible', callback, 'com.example.queryforminfobypushtest');
            } catch (error) {
              expect().assertFail();
            }
            setTimeout(() => {
              commonEvent.unsubscribe(subscriber, unSubscribeCallback);
            }, WAIT_FUNCTION_DONE_TIME)
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
        }, CASE_TIME_OUT)
      })
    })

    it('Acts_QueryFormInfoByPush_Off_3000', 0, async function (done) {
      var callbackFormId;
      var callbackCount = 0;
      let callback = function (data) {
        callbackFormId = data[0].formId;
        callbackCount++;
        console.log(`====>Acts_QueryFormInfoByPush_Off_3000 firstTestCallback data: ${JSON.stringify(data)}`);
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
        globalThis.abilityContext.startAbility(FIRST_APP_FIRST_ABILITY_INVISIBLE_WANT, (err) => {
          expect(err.code).assertEqual(0);
        });

        function subscribeCallBack(err, data) {
          console.info('====>Acts_QueryFormInfoByPush_Off_3000 subscribeCallBack data:' + JSON.stringify(data));
          flag = true;
          if (data.event == 'ACTS_FirstAppFirstAbilityFirst') {
            expect(callbackFormId).assertEqual(data.parameters.formId);
            try {
              formHost.off('notifyInvisible', callback, undefined);
            } catch (error) {
              expect().assertFail();
            }
            commonEvent.publish("ACTS_FirstAppFirstAbilityWait", {}, ()=>{});
          }
          if (data.event == 'ACTS_FirstAppFirstAbilitySecond') {
            expect(callbackCount).assertEqual(2);
            try {
              formHost.off('notifyInvisible', callback, 'com.example.queryforminfobypushtest');
            } catch (error) {
              expect().assertFail();
            }
            setTimeout(() => {
              commonEvent.unsubscribe(subscriber, unSubscribeCallback);
            }, WAIT_FUNCTION_DONE_TIME)
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
        }, CASE_TIME_OUT)
      })
    })

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
        sleep(500);
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
        globalThis.abilityContext.startAbility(SECOND_APP_FIRST_ABILITY_VISIBLE_WANT, (err) => {
          expect(err.code).assertEqual(0);
        });

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
            console.log('====>Acts_QueryFormInfoByPush_0100 ACTS_FirstAppFirstAbility data:' + JSON.stringify(firstFormId));
            firstFormIdDone = true;
          }
          if (data.event == 'ACTS_SecondAppFirstAbilityFirst') {
            secondFormId = data.parameters.formId;
            console.log('====>Acts_QueryFormInfoByPush_0100 ACTS_FeatureForm data:' + JSON.stringify(secondFormId));
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
            expect(firstCallbackFormId).assertEqual(firstFormId);
          }
          if (data.event == 'ACTS_SecondAppFirstAbilitySecond') {
            expect(secondCallbackFormId).assertEqual(secondFormId);
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
            expect(firstCount).assertEqual(2);
            firstResultDone = true;
          }
          if (data.event == 'ACTS_SecondAppFirstAbilityThird') {
            expect(secondCount).assertEqual(1);
            secondResultDone = true;
          }
          if (firstResultDone && secondResultDone) {
            try {
              formHost.off('notifyVisible', firstCallback, 'com.example.queryforminfobypushtest');
            } catch (error) {
              console.log('====>Acts_QueryFormInfoByPush_0100 Form off catch err:' + JSON.stringify(error));
              expect().assertFail();
            }
            setTimeout(() => {
              commonEvent.unsubscribe(subscriber, unSubscribeCallback);
            }, WAIT_FUNCTION_DONE_TIME)
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
        }, CASE_TIME_OUT)
      });
    })

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
        sleep(500);
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
        globalThis.abilityContext.startAbility(SECOND_APP_FIRST_ABILITY_INVISIBLE_WANT, (err) => {
          expect(err.code).assertEqual(0);
        });

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
            console.log('====>Acts_QueryFormInfoByPush_0200 ACTS_FirstAppFirstAbility data:' + JSON.stringify(firstFormId));
            firstFormIdDone = true;
          }
          if (data.event == 'ACTS_SecondAppFirstAbilityFirst') {
            secondFormId = data.parameters.formId;
            console.log('====>Acts_QueryFormInfoByPush_0200 ACTS_FeatureForm data:' + JSON.stringify(secondFormId));
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
            expect(firstCallbackFormId).assertEqual(firstFormId);
            try {
              formHost.off('notifyInvisible', firstCallback, 'com.example.queryforminfobypushtest');
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
            expect(secondCallbackFormId).assertEqual(secondFormId);
          }
          if (data.event == 'ACTS_FirstAppSecondAbilityThird') {
            expect(firstCount).assertEqual(1);
            firstResultDone = true;
          }
          if (data.event == 'ACTS_SecondAppFirstAbilityThird') {
            expect(secondCount).assertEqual(2);
            secondResultDone = true;
          }
          if (firstResultDone && secondResultDone) {
            try {
              formHost.off('notifyInvisible', secondCallback, 'com.example.queryforminfobypushtestb');
            } catch (error) {
              console.log('====>Acts_QueryFormInfoByPush_0200 Form off catch err:' + JSON.stringify(error));
              expect().assertFail();
            }
            flag = true;
            setTimeout(() => {
              commonEvent.unsubscribe(subscriber, unSubscribeCallback);
            }, WAIT_FUNCTION_DONE_TIME)
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
        }, CASE_TIME_OUT)
      })
    })

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
        sleep(500);
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
        globalThis.abilityContext.startAbility(SECOND_APP_FIRST_ABILITY_INVISIBLE_WANT, (err) => {
          expect(err.code).assertEqual(0);
        });

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
            console.log('====>Acts_QueryFormInfoByPush_0300 ACTS_FirstAppFirstAbility data:' + JSON.stringify(firstFormId));
            firstFormIdDone = true;
          }
          if (data.event == 'ACTS_SecondAppFirstAbilityFirst') {
            secondFormId = data.parameters.formId;
            console.log('====>Acts_QueryFormInfoByPush_0300 ACTS_FeatureForm data:' + JSON.stringify(secondFormId));
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
            expect(firstCallbackFormId).assertEqual(firstFormId);
          }
          if (data.event == 'ACTS_SecondAppFirstAbilitySecond') {
            expect(secondCallbackFormId).assertEqual(secondFormId);
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
            console.log('====>Acts_QueryFormInfoByPush_0300 Form off catch err:' + JSON.stringify(firstCount));
            expect(firstCount).assertEqual(2);
            firstResultDone = true;
          }
          if (data.event == 'ACTS_SecondAppFirstAbilityThird') {
            expect(secondCount).assertEqual(1);
            secondResultDone = true;
          }
          if (firstResultDone && secondResultDone) {
            try {
              formHost.off('notifyVisible', firstCallback, 'com.example.queryforminfobypushtest');
            } catch (error) {
              console.log('====>Acts_QueryFormInfoByPush_0300 Form off catch err:' + JSON.stringify(error));
              expect().assertFail();
            }
            setTimeout(() => {
              commonEvent.unsubscribe(subscriber, unSubscribeCallback);
            }, WAIT_FUNCTION_DONE_TIME)
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
        }, CASE_TIME_OUT)
      })
    })

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
        sleep(500);
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
            expect(firstCallbackFormId).assertEqual(data.parameters.formId);
            expect(secondCount).assertEqual(0);
            console.log('====>Acts_QueryFormInfoByPush_0400 ACTS_FirstAppFirstAbility data:' + JSON.stringify(firstCallbackFormId));
            try {
              formHost.off('notifyVisible', firstCallback, 'com.example.queryforminfobypushtest');
            } catch (error) {
              console.log('====>Acts_QueryFormInfoByPush_0400 Form off catch err:' + JSON.stringify(error));
              expect().assertFail();
            }
            flag = true;
            setTimeout(() => {
              commonEvent.unsubscribe(subscriber, unSubscribeCallback);
            }, WAIT_FUNCTION_DONE_TIME)
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
        }, CASE_TIME_OUT)
      })
    })

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
        sleep(500);
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
            expect(firstCallbackFormId).assertEqual(data.parameters.formId);
            expect(firstCount).assertEqual(1);
            console.log('====>Acts_QueryFormInfoByPush_0500 ACTS_FirstAppFirstAbility data:' + JSON.stringify(firstCallbackFormId));
            try {
              formHost.off('notifyVisible', firstCallback, 'com.example.queryforminfobypushtest');
            } catch (error) {
              console.log('====>Acts_QueryFormInfoByPush_0500 Form off catch err:' + JSON.stringify(error));
              expect().assertFail();
            }
            flag = true;
            setTimeout(() => {
              commonEvent.unsubscribe(subscriber, unSubscribeCallback);
            }, WAIT_FUNCTION_DONE_TIME)
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
        }, CASE_TIME_OUT)
      })
    })

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
        sleep(500);
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
            expect(firstCallbackFormId).assertEqual(data.parameters.formId);
            expect(secondCount).assertEqual(0);
            console.log('====>Acts_QueryFormInfoByPush_0600 ACTS_FirstAppFirstAbility data:' + JSON.stringify(firstCallbackFormId));
            try {
              formHost.off('notifyInvisible', firstCallback, 'com.example.queryforminfobypushtest');
            } catch (error) {
              console.log('====>Acts_QueryFormInfoByPush_0600 Form off catch err:' + JSON.stringify(error));
              expect().assertFail();
            }
            flag = true;
            setTimeout(() => {
              commonEvent.unsubscribe(subscriber, unSubscribeCallback);
            }, WAIT_FUNCTION_DONE_TIME)
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
        }, CASE_TIME_OUT)
      })
    })

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
        sleep(500);
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
            expect(firstCallbackFormId).assertEqual(data.parameters.formId);
            expect(firstCount).assertEqual(1);
            console.log('====>Acts_QueryFormInfoByPush_0700 ACTS_FirstAppFirstAbility data:' + JSON.stringify(firstCallbackFormId));
            try {
              formHost.off('notifyInvisible', firstCallback, 'com.example.queryforminfobypushtest');
            } catch (error) {
              console.log('====>Acts_QueryFormInfoByPush_0700 Form off catch err:' + JSON.stringify(error));
              expect().assertFail();
            }
            setTimeout(() => {
              commonEvent.unsubscribe(subscriber, unSubscribeCallback);
            }, WAIT_FUNCTION_DONE_TIME)
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
        }, CASE_TIME_OUT)
      })
    })

    it('Acts_QueryFormInfoByPush_0800', 0, async function (done) {
      var firstCallbackFormId;
      var firstDataSize;
      let firstCallback = function (data) {
        firstCallbackFormId = data[0].formId;
        firstDataSize = data.length;
        console.log(`====>Acts_QueryFormInfoByPush_0800 firstTestCallback data: ${JSON.stringify(data)}`);
        console.log(`====>Acts_QueryFormInfoByPush_0800 firstTestCallback data: ${JSON.stringify(firstDataSize)}`);
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
        globalThis.abilityContext.startAbility({
          bundleName: 'com.example.queryforminfobypushtest',
          abilityName: 'FeatureAbility',
          parameters: {
            'isVisible': 'notifyInvisible',
            'case': 'a'
          }}, (err) => {
          expect(err.code).assertEqual(0);
        });

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
            console.log('====>Acts_QueryFormInfoByPush_0800 ACTS_FirstAppFirstAbility data:' + JSON.stringify(firstFormId));
            firstFormIdDone = true;
          }
          if (data.event == 'ACTS_SecondAppFirstAbilityFirst') {
            secondFormId = data.parameters.formId;
            console.log('====>Acts_QueryFormInfoByPush_0800 ACTS_FeatureForm data:' + JSON.stringify(secondFormId));
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
            expect(firstCallbackFormId).assertEqual(firstFormId);
            expect(firstDataSize).assertEqual(1);
            firstResultDone = true;
          }
          if (data.event == 'ACTS_FirstAppSecondModuleFirst') {
            expect(data.parameters.callbackFormId).assertEqual(secondFormId);
            expect(data.parameters.dataSize).assertEqual(1);
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
            expect(data.parameters.count).assertEqual(1);
            secondResultDone = true;
          }
          if (firstResultDone && secondResultDone) {
            try {
              formHost.off('notifyVisible', firstCallback, 'com.example.queryforminfobypushtest');
            } catch (error) {
              console.log('====>Acts_QueryFormInfoByPush_0800 Form off catch err:' + JSON.stringify(error));
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
        }, CASE_TIME_OUT)
      })
    })

    it('Acts_QueryFormInfoByPush_0900', 0, async function (done) {
      var firstCallbackFormId;
      var firstDataSize;
      let firstCallback = function (data) {
        firstCallbackFormId = data[0].formId;
        firstDataSize = data.length;
        console.log(`====>Acts_QueryFormInfoByPush_0900 firstTestCallback data: ${JSON.stringify(data)}`);
        console.log(`====>Acts_QueryFormInfoByPush_0900 firstTestCallback data: ${JSON.stringify(firstDataSize)}`);
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
        globalThis.abilityContext.startAbility({
          bundleName: 'com.example.queryforminfobypushtest',
          abilityName: 'FeatureAbility',
          parameters: {
            'isVisible': 'notifyVisible',
            'case': 'b'
          }}, (err) => {
          expect(err.code).assertEqual(0);
        });

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
            console.log('====>Acts_QueryFormInfoByPush_0900 ACTS_FirstAppFirstAbility data:' + JSON.stringify(firstFormId));
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
            expect(firstCallbackFormId).assertEqual(firstFormId);
            expect(firstDataSize).assertEqual(1);
            firstResultDone = true;
          }
          if (data.event == 'ACTS_FirstAppSecondModuleFirst') {
            expect(data.parameters.callbackFormId).assertEqual(secondFormId);
            expect(data.parameters.dataSize).assertEqual(1);
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
            expect(data.parameters.count).assertEqual(1);
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
        }, CASE_TIME_OUT)
      })
    })

    it('Acts_QueryFormInfoByPush_1000', 0, async function (done) {
      var firstCallbackFormId;
      var firstDataSize;
      let firstCallback = function (data) {
        firstCallbackFormId = data[0].formId;
        firstDataSize = data.length;
        console.log(`====>Acts_QueryFormInfoByPush_1000 firstTestCallback data: ${JSON.stringify(data)}`);
        console.log(`====>Acts_QueryFormInfoByPush_1000 firstTestCallback data: ${JSON.stringify(firstDataSize)}`);
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
        globalThis.abilityContext.startAbility({
          bundleName: 'com.example.queryforminfobypushtest',
          abilityName: 'FeatureAbility',
          parameters: {
            'isVisible': 'notifyInvisible',
            'case': 'c'
          }}, (err) => {
          expect(err.code).assertEqual(0);
        });

        var firstFormIdDone = false;
        var secondFormIdDone = false;
        var firstResultDone = false;
        var secondResultDone = false;
        var firstFormId;
        var secondFormId;
        var firstDoneCount = 0;
        function subscribeCallBack(err, data) {
          flag = true;
          console.info('====>Acts_QueryFormInfoByPush_1000 subscribeCallBack data:' + JSON.stringify(data));
          if (data.event == 'ACTS_FirstAppSecondAbilityFirst') {
            firstFormId = data.parameters.formId;
            console.log('====>Acts_QueryFormInfoByPush_1000 ACTS_FirstAppFirstAbility data:' + JSON.stringify(firstFormId));
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
            expect(firstCallbackFormId).assertEqual(firstFormId);
            expect(firstDataSize).assertEqual(1);
            firstResultDone = true;
          }
          if (data.event == 'ACTS_FirstAppSecondModuleFirst') {
            expect(data.parameters.callbackFormId).assertEqual(secondFormId);
            expect(data.parameters.dataSize).assertEqual(1);
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
            expect(data.parameters.count).assertEqual(1);
            secondResultDone = true;
          }
          if (firstResultDone && secondResultDone) {
            try {
              formHost.off('notifyVisible', firstCallback, 'com.example.queryforminfobypushtest');
            } catch (error) {
              console.log('====>Acts_QueryFormInfoByPush_1000 Form off catch err:' + JSON.stringify(error));
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
        }, CASE_TIME_OUT)
      })
    })

  })
}