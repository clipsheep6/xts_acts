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
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium';
import { Driver, ON } from '@ohos.UiTest';
import formObserver from '@ohos.app.form.formObserver';
import type formInfo from '@ohos.app.form.formInfo';
import commonEventManager from '@ohos.commonEventManager';

let ACTS_CallFunction = {
  events: ['ACTS_CALL']
};

let driver = Driver.create();

export default function abilityTest() {
  describe('ActsAbilityTest', function () {
    // Defines a test suite. Two parameters are supported: test suite name and test suite function.
    beforeAll(function () {
    })
    beforeEach(function () {
    })
    afterEach(function () {
    })
    afterAll(function () {
    })

    /*
     * @tc.number:Acts_CardClickCallback_0100
     * @tc.name:Support card click callback
     * @tc.desc:Call related API with invalid parameters (on:type is null).
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level Level 1
     */
    it('Acts_CardClickCallback_0100', 0, async function (done) {
      console.info('====>[Acts_CardClickCallback_0100] start!');
      function callback(data: formInfo.RunningFormInfo) {
        console.info('====>[Acts_CardClickCallback_0100] [callback] be called , data : ' + JSON.stringify(data));
      }

      try {
        formObserver.on(null, callback);
        console.info('====>[Acts_CardClickCallback_0100] [try] on success! ');
        expect().assertFail();
        done();
      } catch (err) {
        console.info('====>[Acts_CardClickCallback_0100] [try] err :' + JSON.stringify(err));
        expect(err.code).assertEqual(401);
        done();
      }
    })

    /*
     * @tc.number:Acts_CardClickCallback_0200
     * @tc.name:Support card click callback
     * @tc.desc:Call related API with invalid parameters (on:type is undefined).
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level Level 1 
     */
    it('Acts_CardClickCallback_0200', 0, async function (done) {
      console.info('====>[Acts_CardClickCallback_0200] start!');
      function callback(data: formInfo.RunningFormInfo) {
        console.info('====>[Acts_CardClickCallback_0200] [callback] be called , data : ' + JSON.stringify(data));
      }

      try {
        formObserver.on(undefined, callback);
        console.info('====>[Acts_CardClickCallback_0200] [try] on success! ');
        expect().assertFail();
        done();
      } catch (err) {
        console.info('====>[Acts_CardClickCallback_0200] [try] err :' + JSON.stringify(err));
        expect(err.code).assertEqual(401);
        done();
      }
    })

    /*
     * @tc.number:Acts_CardClickCallback_0300
     * @tc.name:Support card click callback
     * @tc.desc:Call related API with invalid parameters (on:type is router and callback is null).
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level Level 1
     */
    it('Acts_CardClickCallback_0300', 0, async function (done) {
      console.info('====>[Acts_CardClickCallback_0300] start!');
      try {
        formObserver.on('router', null);
        console.info('====>[Acts_CardClickCallback_0300] [try] on success! ');
        expect().assertFail();
        done();
      } catch (err) {
        console.info('====>[Acts_CardClickCallback_0300] [try] err :' + JSON.stringify(err));
        expect(err.code).assertEqual(401);
        done();
      }
    })

    /*
     * @tc.number:Acts_CardClickCallback_0400
     * @tc.name:Support card click callback
     * @tc.desc:Call related API with invalid parameters (on:type is router and callback is undefined).
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level Level 1
     */
    it('Acts_CardClickCallback_0400', 0, async function (done) {
      console.info('====>[Acts_CardClickCallback_0400] start!');
      try {
        formObserver.on('router', undefined);
        console.info('====>[Acts_CardClickCallback_0400] [try] on success! ');
        expect().assertFail();
        done();
      } catch (err) {
        console.info('====>[Acts_CardClickCallback_0400] [try] err :' + JSON.stringify(err));
        expect(err.code).assertEqual(401);
        done();
      }
    })

    /*
     * @tc.number:Acts_CardClickCallback_0700
     * @tc.name:Support card click callback
     * @tc.desc:Call related API with invalid parameters (on:type is message, callback is null).
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level Level 1
     */
    it('Acts_CardClickCallback_0700', 0, async function (done) {
      console.info('====>[Acts_CardClickCallback_0700] start!');
      try {
        formObserver.on('message', null);
        console.info('====>[Acts_CardClickCallback_0700] [try] on success! ');
        expect().assertFail();
        done();
      } catch (err) {
        console.info('====>[Acts_CardClickCallback_0700] [try] err :' + JSON.stringify(err));
        expect(err.code).assertEqual(401);
        done();
      }
    })

    /*
     * @tc.number:Acts_CardClickCallback_0800
     * @tc.name:Support card click callback
     * @tc.desc:Call related API with invalid parameters (on:type is message, callback is undefined).
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level Level 1
     */
    it('Acts_CardClickCallback_0800', 0, async function (done) {
      console.info('====>[Acts_CardClickCallback_0800] start!');
      try {
        formObserver.on('message', undefined);
        console.info('====>[Acts_CardClickCallback_0800] [try] on success! ');
        expect().assertFail();
        done();
      } catch (err) {
        console.info('====>[Acts_CardClickCallback_0800] [try] err :' + JSON.stringify(err));
        expect(err.code).assertEqual(401);
        done();
      }
    })

    /*
     * @tc.number:Acts_CardClickCallback_1100
     * @tc.name:Support card click callback
     * @tc.desc:Call related API with invalid parameters (on:type is call, callback is null).
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level Level 1
     */
    it('Acts_CardClickCallback_1100', 0, async function (done) {
      console.info('====>[Acts_CardClickCallback_1100] start!');
      try {
        formObserver.on('call', null);
        console.info('====>[Acts_CardClickCallback_1100] [try] on success! ');
        expect().assertFail();
        done();
      } catch (err) {
        console.info('====>[Acts_CardClickCallback_1100] [try] err :' + JSON.stringify(err));
        expect(err.code).assertEqual(401);
        done();
      }
    })

    /*
     * @tc.number:Acts_CardClickCallback_1200
     * @tc.name:Support card click callback
     * @tc.desc:Call related API with invalid parameters (on:type is call, callback is undefined).
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level Level 1
     */
    it('Acts_CardClickCallback_1200', 0, async function (done) {
      console.info('====>[Acts_CardClickCallback_1200] start!');
      try {
        formObserver.on('call', undefined);
        console.info('====>[Acts_CardClickCallback_1200] [try] on success! ');
        expect().assertFail();
        done();
      } catch (err) {
        console.info('====>[Acts_CardClickCallback_1200] [try] err :' + JSON.stringify(err));
        expect(err.code).assertEqual(401);
        done();
      }
    })

    /*
     * @tc.number:Acts_CardClickCallback_1500
     * @tc.name:Support card click callback
     * @tc.desc:Call related API with invalid parameters (on:type is null and there is a bundleName parameter).
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level Level 1
     */
    it('Acts_CardClickCallback_1500', 0, async function (done) {
      console.info('====>[Acts_CardClickCallback_1500] start!');
      function callback(data: formInfo.RunningFormInfo) {
        console.info('====>[Acts_CardClickCallback_1500] [callback] be called , data : ' + JSON.stringify(data));
      }

      try {
        formObserver.on(null, 'com.acts.cardclickcallback', callback);
        console.info('====>[Acts_CardClickCallback_1500] [try] on success! ');
        expect().assertFail();
        done();
      } catch (err) {
        console.info('====>[Acts_CardClickCallback_1500] [try] err :' + JSON.stringify(err));
        expect(err.code).assertEqual(401);
        done();
      }
    })

    /*
     * @tc.number:Acts_CardClickCallback_1600
     * @tc.name:Support card click callback
     * @tc.desc:Call related API with invalid parameters (on:type is undefined and there is a bundleName parameter).
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level Level 1
     */
    it('Acts_CardClickCallback_1600', 0, async function (done) {
      console.info('====>[Acts_CardClickCallback_1600] start!');
      function callback(data: formInfo.RunningFormInfo) {
        console.info('====>[Acts_CardClickCallback_1600] [callback] be called , data : ' + JSON.stringify(data));
      }

      try {
        formObserver.on(undefined, 'com.acts.cardclickcallback', callback);
        console.info('====>[Acts_CardClickCallback_1600] [try] on success! ');
        expect().assertFail();
        done();
      } catch (err) {
        console.info('====>[Acts_CardClickCallback_1600] [try] err :' + JSON.stringify(err));
        expect(err.code).assertEqual(401);
        done();
      }
    })

    /*
     * @tc.number:Acts_CardClickCallback_1700
     * @tc.name:Support card click callback
     * @tc.desc:Call related API with invalid parameters (on:type is router and bundleName is null).
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level Level 1
     */
    it('Acts_CardClickCallback_1700', 0, async function (done) {
      console.info('====>[Acts_CardClickCallback_1700] start!');
      function callback(data: formInfo.RunningFormInfo) {
        console.info('====>[Acts_CardClickCallback_1700] [callback] be called , data : ' + JSON.stringify(data));
      }

      try {
        formObserver.on('router', null, callback);
        console.info('====>[Acts_CardClickCallback_1700] [try] on success! ');
        expect().assertFail();
        done();
      } catch (err) {
        console.info('====>[Acts_CardClickCallback_1700] [try] err :' + JSON.stringify(err));
        expect(err.code).assertEqual(401);
        done();
      }
    })

    /*
     * @tc.number:Acts_CardClickCallback_1800
     * @tc.name:Support card click callback
     * @tc.desc:Call related API with invalid parameters (on:type is router and bundleName is undefined).
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level Level 1
     */
    it('Acts_CardClickCallback_1800', 0, async function (done) {
      console.info('====>[Acts_CardClickCallback_1800] start!');
      function callback(data: formInfo.RunningFormInfo) {
        console.info('====>[Acts_CardClickCallback_1800] [callback] be called , data : ' + JSON.stringify(data));
      }

      try {
        formObserver.on('router', undefined, callback);
        console.info('====>[Acts_CardClickCallback_1800] [try] on success! ');
        expect().assertFail();
        done();
      } catch (err) {
        console.info('====>[Acts_CardClickCallback_1800] [try] err :' + JSON.stringify(err));
        expect(err.code).assertEqual(401);
        done();
      }
    })

    /*
     * @tc.number:Acts_CardClickCallback_1900
     * @tc.name:Support card click callback
     * @tc.desc:Call related API with invalid parameters (on:type is router, bundleName is normal, callback is null).
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level Level 1
     */
    it('Acts_CardClickCallback_1900', 0, async function (done) {
      console.info('====>[Acts_CardClickCallback_1900] start!');
      try {
        formObserver.on('router', 'com.acts.cardclickcallback', null);
        console.info('====>[Acts_CardClickCallback_1900] [try] on success! ');
        expect().assertFail();
        done();
      } catch (err) {
        console.info('====>[Acts_CardClickCallback_1900] [try] err :' + JSON.stringify(err));
        expect(err.code).assertEqual(401);
        done();
      }
    })

    /*
     * @tc.number:Acts_CardClickCallback_2000
     * @tc.name:Support card click callback
     * @tc.desc:Call related API with invalid parameters (on:type is router, bundleName is normal,
     * callback is undefined).
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level Level 1
     */
    it('Acts_CardClickCallback_2000', 0, async function (done) {
      console.info('====>[Acts_CardClickCallback_2000] start!');

      try {
        formObserver.on('router', 'com.acts.cardclickcallback', undefined);
        console.info('====>[Acts_CardClickCallback_2000] [try] on success! ');
        expect().assertFail();
        done();
      } catch (err) {
        console.info('====>[Acts_CardClickCallback_2000] [try] err :' + JSON.stringify(err));
        expect(err.code).assertEqual(401);
        done();
      }
    })

    /*
     * @tc.number:Acts_CardClickCallback_2300
     * @tc.name:Support card click callback
     * @tc.desc:Call related API with invalid parameters (on:type is message and bundleName is null).
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level Level 1
     */
    it('Acts_CardClickCallback_2300', 0, async function (done) {
      console.info('====>[Acts_CardClickCallback_2300] start!');
      function callback(data: formInfo.RunningFormInfo) {
        console.info('====>[Acts_CardClickCallback_2300] [callback] be called , data : ' + JSON.stringify(data));
      }

      try {
        formObserver.on('message', null, callback);
        console.info('====>[Acts_CardClickCallback_2300] [try] on success! ');
        expect().assertFail();
        done();
      } catch (err) {
        console.info('====>[Acts_CardClickCallback_2300] [try] err :' + JSON.stringify(err));
        expect(err.code).assertEqual(401);
        done();
      }
    })

    /*
     * @tc.number:Acts_CardClickCallback_2400
     * @tc.name:Support card click callback
     * @tc.desc:Call related API with invalid parameters (on:type is message and bundleName is undefined).
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level Level 1
     */
    it('Acts_CardClickCallback_2400', 0, async function (done) {
      console.info('====>[Acts_CardClickCallback_2400] start!');
      function callback(data: formInfo.RunningFormInfo) {
        console.info('====>[Acts_CardClickCallback_2400] [callback] be called , data : ' + JSON.stringify(data));
      }

      try {
        formObserver.on('message', undefined, callback);
        console.info('====>[Acts_CardClickCallback_2400] [try] on success! ');
        expect().assertFail();
        done();
      } catch (err) {
        console.info('====>[Acts_CardClickCallback_2400] [try] err :' + JSON.stringify(err));
        expect(err.code).assertEqual(401);
        done();
      }
    })

    /*
     * @tc.number:Acts_CardClickCallback_2500
     * @tc.name:Support card click callback
     * @tc.desc:Call related API with invalid parameters (on:type is message, bundleName is normal, callback is null).
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level Level 1
     */
    it('Acts_CardClickCallback_2500', 0, async function (done) {
      console.info('====>[Acts_CardClickCallback_2500] start!');
      try {
        formObserver.on('message', 'com.acts.cardclickcallback', null);
        console.info('====>[Acts_CardClickCallback_2500] [try] on success! ');
        expect().assertFail();
        done();
      } catch (err) {
        console.info('====>[Acts_CardClickCallback_2500] [try] err :' + JSON.stringify(err));
        expect(err.code).assertEqual(401);
        done();
      }
    })

    /*
     * @tc.number:Acts_CardClickCallback_2600
     * @tc.name:Support card click callback
     * @tc.desc:Call related API with invalid parameters (on:type is message, bundleName is normal,
     * callback is undefined).
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level Level 1
     */
    it('Acts_CardClickCallback_2600', 0, async function (done) {
      console.info('====>[Acts_CardClickCallback_2600] start!');
      try {
        formObserver.on('message', 'com.acts.cardclickcallback', undefined);
        console.info('====>[Acts_CardClickCallback_2600] [try] on success! ');
        expect().assertFail();
        done();
      } catch (err) {
        console.info('====>[Acts_CardClickCallback_2600] [try] err :' + JSON.stringify(err));
        expect(err.code).assertEqual(401);
        done();
      }
    })

    /*
     * @tc.number:Acts_CardClickCallback_2900
     * @tc.name:Support card click callback
     * @tc.desc:Call related API with invalid parameters (on:type is call and bundleName is null).
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level Level 1
     */
    it('Acts_CardClickCallback_2900', 0, async function (done) {
      console.info('====>[Acts_CardClickCallback_2900] start!');

      function callback(data: formInfo.RunningFormInfo) {
        console.info('====>[Acts_CardClickCallback_2900] [callback] be called , data : ' + JSON.stringify(data));
      }

      try {
        formObserver.on('call', null, callback);
        console.info('====>[Acts_CardClickCallback_2900] [try] on success! ');
        expect().assertFail();
        done();
      } catch (err) {
        console.info('====>[Acts_CardClickCallback_2900] [try] err :' + JSON.stringify(err));
        expect(err.code).assertEqual(401);
        done();
      }
    })

    /*
     * @tc.number:Acts_CardClickCallback_3000
     * @tc.name:Support card click callback
     * @tc.desc:Call related API with invalid parameters (on:type is call and bundleName is undefined).
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level Level 1
     */
    it('Acts_CardClickCallback_3000', 0, async function (done) {
      console.info('====>[Acts_CardClickCallback_3000] start!');

      function callback(data: formInfo.RunningFormInfo) {
        console.info('====>[Acts_CardClickCallback_3000] [callback] be called , data : ' + JSON.stringify(data));
      }

      try {
        formObserver.on('call', undefined, callback);
        console.info('====>[Acts_CardClickCallback_3000] [try] on success! ');
        expect().assertFail();
        done();
      } catch (err) {
        console.info('====>[Acts_CardClickCallback_3000] [try] err :' + JSON.stringify(err));
        expect(err.code).assertEqual(401);
        done();
      }
    })

    /*
     * @tc.number:Acts_CardClickCallback_3100
     * @tc.name:Support card click callback
     * @tc.desc:Call related API with invalid parameters (on:type is call, bundleName is normal, callback is null).
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level Level 1
     */
    it('Acts_CardClickCallback_3100', 0, async function (done) {
      console.info('====>[Acts_CardClickCallback_3100] start!');
      try {
        formObserver.on('call', 'com.acts.cardclickcallback', null);
        console.info('====>[Acts_CardClickCallback_3100] [try] on success! ');
        expect().assertFail();
        done();
      } catch (err) {
        console.info('====>[Acts_CardClickCallback_3100] [try] err :' + JSON.stringify(err));
        expect(err.code).assertEqual(401);
        done();
      }
    })

    /*
     * @tc.number:Acts_CardClickCallback_3200
     * @tc.name:Support card click callback
     * @tc.desc:Call related API with invalid parameters (on:type is call, bundleName is normal,
     * callback is undefined).
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level Level 1
     */
    it('Acts_CardClickCallback_3200', 0, async function (done) {
      console.info('====>[Acts_CardClickCallback_3200] start!');
      try {
        formObserver.on('call', 'com.acts.cardclickcallback', undefined);
        console.info('====>[Acts_CardClickCallback_3200] [try] on success! ');
        expect().assertFail();
        done();
      } catch (err) {
        console.info('====>[Acts_CardClickCallback_3200] [try] err :' + JSON.stringify(err));
        expect(err.code).assertEqual(401);
        done();
      }
    })

    /*
     * @tc.number:Acts_CardClickCallback_3500
     * @tc.name:Support card click callback
     * @tc.desc:Call related API with invalid parameters (off: type is null).
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level Level 1
     */
    it('Acts_CardClickCallback_3500', 0, async function (done) {
      console.info('====>[Acts_CardClickCallback_3500] start!');
      try {
        formObserver.off(null);
        console.info('====>[Acts_CardClickCallback_3500] [try] on success! ');
        expect().assertFail();
        done();
      } catch (err) {
        console.info('====>[Acts_CardClickCallback_3500] [try] err :' + JSON.stringify(err));
        expect(err.code).assertEqual(401);
        done();
      }
    })

    /*
     * @tc.number:Acts_CardClickCallback_3600
     * @tc.name:Support card click callback
     * @tc.desc:Call related API with invalid parameters (off: type is undefined).
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level Level 1
     */
    it('Acts_CardClickCallback_3600', 0, async function (done) {
      console.info('====>[Acts_CardClickCallback_3600] start!');
      try {
        formObserver.off(undefined);
        console.info('====>[Acts_CardClickCallback_3600] [try] on success! ');
        expect().assertFail();
        done();
      } catch (err) {
        console.info('====>[Acts_CardClickCallback_3600] [try] err :' + JSON.stringify(err));
        expect(err.code).assertEqual(401);
        done();
      }
    })

    /*
     * @tc.number:Acts_CardClickCallback_4100
     * @tc.name:Support card click callback
     * @tc.desc:Call related API with invalid parameters (off: type is router and bundelName is null).
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level Level 1
     */
    it('Acts_CardClickCallback_4100', 0, async function (done) {
      try {
        formObserver.off('router', null);
        console.info('====>[Acts_CardClickCallback_4100] [try] on success! ');
        expect().assertFail();
        done();
      } catch (err) {
        console.info('====>[Acts_CardClickCallback_4100] [try] err :' + JSON.stringify(err));
        expect(err.code).assertEqual(401);
        done();
      }
    })

    /*
     * @tc.number:Acts_CardClickCallback_4200
     * @tc.name:Support card click callback
     * @tc.desc:Call related API with invalid parameters (off: type is router and bundelName is undefined).
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level Level 1
     */
    it('Acts_CardClickCallback_4200', 0, async function (done) {
      try {
        formObserver.off('router', undefined);
        console.info('====>[Acts_CardClickCallback_4200] [try] on success! ');
        expect().assertFail();
        done();
      } catch (err) {
        console.info('====>[Acts_CardClickCallback_4200] [try] err :' + JSON.stringify(err));
        expect(err.code).assertEqual(401);
        done();
      }
    })

    /*
     * @tc.number:Acts_CardClickCallback_4400
     * @tc.name:Support card click callback
     * @tc.desc:Click callback on the router type registration/deregistration card (off:bundelName is normal,
     * callback is null).
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level Level 1
     */
    it('Acts_CardClickCallback_4400', 0, async function (done) {
      console.info('====>[Acts_CardClickCallback_4400] start!');
      try {
        formObserver.off('router', 'com.act.cardclickcallbackrely', null);
        console.info('====>[Acts_CardClickCallback_4400] [try] on success! ');
        expect().assertFail();
        done();
      } catch (err) {
        console.info('====>[Acts_CardClickCallback_4400] [try] err :' + JSON.stringify(err));
        expect(err.code).assertEqual(401);
        done();
      }
    })

    /*
     * @tc.number:Acts_CardClickCallback_4500
     * @tc.name:Support card click callback
     * @tc.desc:Click callback on the router type registration/deregistration card (off:bundelName is normal,
     * callback is undefined).
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level Level 1
     */
    it('Acts_CardClickCallback_4500', 0, async function (done) {
      console.info('====>[Acts_CardClickCallback_4500] start!');
      try {
        formObserver.off('router', 'com.act.cardclickcallbackrely', undefined);
        console.info('====>[Acts_CardClickCallback_4500] [try] on success! ');
        expect().assertFail();
        done();
      } catch (err) {
        console.info('====>[Acts_CardClickCallback_4500] [try] err :' + JSON.stringify(err));
        expect(err.code).assertEqual(401);
        done();
      }
    })

    /*
     * @tc.number:Acts_CardClickCallback_4800
     * @tc.name:Support card click callback
     * @tc.desc:Call related API with invalid parameters (off: type is message, bundelName is null).
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level Level 1
     */
    it('Acts_CardClickCallback_4800', 0, async function (done) {
      try {
        formObserver.off('message', null);
        console.info('====>[Acts_CardClickCallback_4800] [try] on success! ');
        expect().assertFail();
        done();
      } catch (err) {
        console.info('====>[Acts_CardClickCallback_4800] [try] err :' + JSON.stringify(err));
        expect(err.code).assertEqual(401);
        done();
      }
    })

    /*
     * @tc.number:Acts_CardClickCallback_4900
     * @tc.name:Support card click callback
     * @tc.desc:Call related API with invalid parameters (off: type is message, bundelName is undefined).
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level Level 1
     */
    it('Acts_CardClickCallback_4900', 0, async function (done) {
      try {
        formObserver.off('message', undefined);
        console.info('====>[Acts_CardClickCallback_4900] [try] on success! ');
        expect().assertFail();
        done();
      } catch (err) {
        console.info('====>[Acts_CardClickCallback_4900] [try] err :' + JSON.stringify(err));
        expect(err.code).assertEqual(401);
        done();
      }
    })

    /*
     * @tc.number:Acts_CardClickCallback_5100
     * @tc.name:Support card click callback
     * @tc.desc:Click callback for message type registration/deregistration
     * card (off:bundelName is normal, callback is null).
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level Level 1
     */
    it('Acts_CardClickCallback_5100', 0, async function (done) {
      console.info('====>[Acts_CardClickCallback_5100] start!');
      try {
        formObserver.off('message', 'com.act.cardclickcallbackrely', null);
        console.info('====>[Acts_CardClickCallback_5100] [try] on success! ');
        expect().assertFail();
        done();
      } catch (err) {
        console.info('====>[Acts_CardClickCallback_5100] [try] err :' + JSON.stringify(err));
        expect(err.code).assertEqual(401);
        done();
      }
    })

    /*
     * @tc.number:Acts_CardClickCallback_5200
     * @tc.name:Support card click callback
     * @tc.desc:Click callback for message type registration/deregistration
     * card (off:bundelName is normal, callback is undefined).
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level Level 1
     */
    it('Acts_CardClickCallback_5200', 0, async function (done) {
      console.info('====>[Acts_CardClickCallback_5200] start!');
      try {
        formObserver.off('message', 'com.act.cardclickcallbackrely', undefined);
        console.info('====>[Acts_CardClickCallback_5200] [try] on success! ');
        expect().assertFail();
        done();
      } catch (err) {
        console.info('====>[Acts_CardClickCallback_5200] [try] err :' + JSON.stringify(err));
        expect(err.code).assertEqual(401);
        done();
      }
    })

    /*
     * @tc.number:Acts_CardClickCallback_5500
     * @tc.name:Support card click callback
     * @tc.desc:Call related API with invalid parameters (off: type is call and bundelName is null).
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level Level 1
     */
    it('Acts_CardClickCallback_5500', 0, async function (done) {
      try {
        formObserver.off('call', null);
        console.info('====>[Acts_CardClickCallback_5500] [try] on success! ');
        expect().assertFail();
        done();
      } catch (err) {
        console.info('====>[Acts_CardClickCallback_5500] [try] err :' + JSON.stringify(err));
        expect(err.code).assertEqual(401);
        done();
      }
    })

    /*
     * @tc.number:Acts_CardClickCallback_5600
     * @tc.name:Support card click callback
     * @tc.desc:Call related API with invalid parameters (off: type is call and bundelName is undefined).
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level Level 1
     */
    it('Acts_CardClickCallback_5600', 0, async function (done) {
      try {
        formObserver.off('call', undefined);
        console.info('====>[Acts_CardClickCallback_5600] [try] on success! ');
        expect().assertFail();
        done();
      } catch (err) {
        console.info('====>[Acts_CardClickCallback_5600] [try] err :' + JSON.stringify(err));
        expect(err.code).assertEqual(401);
        done();
      }
    })

    /*
     * @tc.number:Acts_CardClickCallback_5800
     * @tc.name:Support card click callback
     * @tc.desc:Call type registration/deregistration card click
     * callback (off:bundelName is normal, callback is null).
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level Level 1
     */
    it('Acts_CardClickCallback_5800', 0, async function (done) {
      console.info('====>[Acts_CardClickCallback_5800] start!');
      try {
        formObserver.off('call', 'com.act.cardclickcallbackrely', null);
        console.info('====>[Acts_CardClickCallback_5800] [try] on success! ');
        expect().assertFail();
        done();
      } catch (err) {
        console.info('====>[Acts_CardClickCallback_5800] [try] err :' + JSON.stringify(err));
        expect(err.code).assertEqual(401);
        done();
      }
    })

    /*
     * @tc.number:Acts_CardClickCallback_5900
     * @tc.name:Support card click callback
     * @tc.desc:Call type registration/deregistration card click
     * callback (off:bundelName is normal, callback is undefined).
     * @tc.size: MediumTest
     * @tc.type: Function
     * @tc.level Level 1
     */
    it('Acts_CardClickCallback_5900', 0, async function (done) {
      console.info('====>[Acts_CardClickCallback_5900] start!');
      try {
        formObserver.off('call', 'com.act.cardclickcallbackrely', undefined);
        console.info('====>[Acts_CardClickCallback_5900] [try] on success! ');
        expect().assertFail();
        done();
      } catch (err) {
        console.info('====>[Acts_CardClickCallback_5900] [try] err :' + JSON.stringify(err));
        expect(err.code).assertEqual(401);
        done();
      }
    })
  })
}